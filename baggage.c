#include <math.h>
#include <stdio.h>

void solve() {
  int cnt, conts[30];
  scanf("%d", &cnt);

  for (int i = 0; i < cnt; ++i)
    scanf("%d", &conts[i]);

  int swaps = 0, pl = conts[0];
  for (int i = 1; i < cnt; ++i) {
    if (conts[i] == pl)
      continue;

    swaps += 1 << (cnt - 1 - i);
    pl = 3 - pl - conts[i];
  }

  printf("Je treba %d presunu.\n", swaps);
}

int main(void) {
  int cnt;
  scanf("%d", &cnt);
  while (cnt--)
    solve();
  return 0;
}