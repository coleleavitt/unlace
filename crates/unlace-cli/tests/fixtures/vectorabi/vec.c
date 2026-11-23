#include <immintrin.h>
__attribute__((noinline)) __m256 addv(__m256 a, __m256 b) { return _mm256_add_ps(a, b); }
__attribute__((noinline)) __m256i addi(__m256i a, __m256i b) { return _mm256_add_epi32(a, b); }
__attribute__((noinline)) __m256 fma3(__m256 a, __m256 b, __m256 c) { return _mm256_fmadd_ps(a, b, c); }
__attribute__((noinline)) __m512 madd(__m512 s, __mmask16 k, __m512 a, __m512 b) { return _mm512_mask_add_ps(s, k, a, b); }
__attribute__((noinline)) __m512 maddz(__mmask16 k, __m512 a, __m512 b) { return _mm512_maskz_add_ps(k, a, b); }
__attribute__((noinline)) __m128 add128(__m128 a, __m128 b) { return _mm_add_ps(a, b); }
