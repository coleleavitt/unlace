/* linearswitch fixture */
__attribute__((noinline)) int sink(int x) { return x * 7 + 3; }
int sw3(int x, int *p) {
  switch (x) {
  case 1: p[0] = sink(1); break;
  case 2: p[1] = sink(2); break;
  case 5: p[2] = sink(3); break;
  default: p[3] = 0; break;
  }
  return p[4];
}
int sw4(int x, int *p) {
  switch (x) {
  case 10: p[0] = sink(1); break;
  case 20: p[1] = sink(2); break;
  case 30: p[2] = sink(3); break;
  case 45: p[5] = sink(4); break;
  default: p[3] = 0; break;
  }
  return p[4];
}
int chain(int x, int *p) {
  if (x == 3) p[0] = sink(7);
  else if (x == 9) p[1] = sink(8);
  else if (x == 11) p[2] = sink(9);
  return p[4];
}
