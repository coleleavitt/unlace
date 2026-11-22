/* clang -target armv7a-linux-gnueabihf -mthumb -O2 -nostdlib -fuse-ld=lld
 *   -Wl,-e,main -o funcstart_thumb_arm funcstart_thumb_arm.c; llvm-strip */
__attribute__((noinline)) int a1(int x, int *out) { int s = 0; for (int i = 0; i < x; i++) s += i * x; *out = s; return s; }
__attribute__((noinline)) int a2(int x, int y, int *out) { *out = x; return a1(x, out) * y + 3; }
__attribute__((noinline)) int a3(int *p, int n) { int s = 0; while (n--) s ^= p[n] + a2(n, s, p); return s; }
int main(int c, char **v) { int arr[4] = {c,1,2,3}; return a3(arr, 4); }
