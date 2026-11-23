/* vexret_avx_x86_64: AVX-encoded scalar double arithmetic returned in xmm0.
 * gcc -O0 -mavx -shared -fPIC -fno-strict-aliasing -o vexret_avx_x86_64 vexret_avx_x86_64.c */
double scale = 1.5;
float ratio = 0.25f;
double grow(double k) { scale = scale * k - k; return scale; }
float shrink(float k) { ratio = ratio * k + k; return ratio; }
