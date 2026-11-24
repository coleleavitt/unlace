int g_tab[8] = {3, 1, 4, 1, 5, 9, 2, 6};
int g_last;
__attribute__((noinline)) int scale7(int x) { return x * 7 + g_tab[2]; }
int lookup(int i) { g_last = i; return g_tab[i & 7]; }
int chain(int x) { return scale7(x) + scale7(x + 1) + 1; }
int pick(int op, int a) {
  switch (op) {
  case 0: return a + 11;
  case 1: return a - 22;
  case 2: return a ^ 33;
  case 3: return a | 44;
  case 4: return scale7(a);
  case 5: return a << 3;
  default: return -1;
  }
}
