
int g(int x);
int f(int a, int b) { if (a < b) return b - a; return a * 3 + b; }
int sum(int *p, int n) { int s = 0; for (int i = 0; i < n; i++) s += p[i]; return s; }
int k(int a) { return g(a + 1) + 2; }
int g(int x) { return x ^ 0x5a; }
void main(void) { volatile int r = f(1,2) + sum(0, 0) + k(3); }
