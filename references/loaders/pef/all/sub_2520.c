void __fastcall sub_2520(unsigned int *a1)
{
  __m128i v1; // xmm0
  unsigned int v2; // edx
  __m128i v3; // xmm0

  v1 = _mm_unpacklo_epi64(
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(a1[3])), _mm_cvtsi32_si128(_byteswap_ulong(a1[4]))),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(a1[5])), _mm_cvtsi32_si128(_byteswap_ulong(a1[6]))));
  a1[7] = _byteswap_ulong(a1[7]);
  v2 = a1[9];
  *(__m128i *)(a1 + 3) = v1;
  v3 = _mm_cvtsi32_si128(a1[8]);
  a1[9] = _byteswap_ulong(v2);
  a1[8] = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi16(v3, 8u), _mm_slli_epi16(v3, 8u)));
}
