#include <emmintrin.h>
__attribute__((noinline)) __m128 add128(__m128 a, __m128 b) { return _mm_add_ps(a, b); }
__attribute__((noinline)) __m128i add128i(__m128i a, __m128i b) { return _mm_add_epi32(a, b); }
__attribute__((noinline)) __m128d mul128d(__m128d a, __m128d b) { return _mm_mul_pd(a, b); }
