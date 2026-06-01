void __fastcall sub_2B5A20(__m128i *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  a1[11] = _mm_unpacklo_epi64(
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)));
}
