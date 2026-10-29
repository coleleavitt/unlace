/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BBE00
// Address: 0x080BBE00

//----- (080BBE00) --------------------------------------------------------
int __cdecl sub_80BBE00(const __m128i a1)
{
  __m128i v1; // xmm0
  __int64 v2; // rax
  __m128i v3; // xmm2
  __m128i v4; // xmm1
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __m128i v8; // [esp+0h] [ebp-3Ch]
  __m128i v9; // [esp+10h] [ebp-2Ch]

  v1 = _mm_loadl_epi64(&a1);
  v2 = 1000LL * a1.m128i_u32[2];
  v3 = _mm_cvtsi32_si128(HIDWORD(v2));
  v9 = _mm_srli_epi64(v1, 0x20u);
  v4 = _mm_cvtsi32_si128(v2);
  v5 = 1000000LL * (unsigned int)_mm_cvtsi128_si32(v9);
  v8.m128i_i64[0] = _mm_add_epi64(
                      _mm_unpacklo_epi32(v4, v3),
                      _mm_and_si128(v1, _mm_load_si128((const __m128i *)&xmmword_80DE190))).m128i_u64[0];
  v6 = _mm_add_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(HIDWORD(v5))), v8).m128i_u64[0]
     % 0xF4240;
  return _mm_cvtsi128_si32(
           _mm_or_si128(
             _mm_slli_epi64(
               _mm_add_epi64(
                 _mm_unpacklo_epi32(
                   _mm_cvtsi32_si128(v8.m128i_i64[0] / 0xF4240uLL),
                   _mm_cvtsi32_si128((v8.m128i_i64[0] / 0xF4240uLL) >> 32)),
                 v9),
               0x20u),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(HIDWORD(v6)))));
}
// 80BBE6C: variable 'v8' is possibly undefined
// 80DE190: using guessed type __int128 xmmword_80DE190;
