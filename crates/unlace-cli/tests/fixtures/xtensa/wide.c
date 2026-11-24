/* Built with xtensa-elf-gcc 15.3 (windowed ABI, XCHAL_HAVE_BE 0): -O2 -c. */
long long w_add7(long long x) { return x + 7; }
long long w_add(long long x, long long y) { return x + y; }
unsigned long long w_mul3(unsigned long long a, unsigned long long b) { return a * b + (a >> 3); }
long long ext64(long long);
long long w_call7(long long x) { return ext64(x) + 7; }
