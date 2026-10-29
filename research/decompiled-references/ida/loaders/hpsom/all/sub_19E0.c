unsigned int *__fastcall sub_19E0(unsigned int *a1)
{
  __m128i v2; // xmm0
  unsigned int v3; // edx
  __m128i v4; // xmm5
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  unsigned int v7; // edx

  *a1 = _byteswap_ulong(*a1);
  a1[1] = _byteswap_ulong(a1[1]);
  a1[2] = _byteswap_ulong(a1[2]);
  a1[3] = _byteswap_ulong(a1[3]);
  a1[4] = _byteswap_ulong(a1[4]);
  a1[5] = _byteswap_ulong(a1[5]);
  a1[6] = _byteswap_ulong(a1[6]);
  a1[7] = _byteswap_ulong(a1[7]);
  a1[8] = _byteswap_ulong(a1[8]);
  a1[9] = _byteswap_ulong(a1[9]);
  a1[10] = _byteswap_ulong(a1[10]);
  a1[11] = _byteswap_ulong(a1[11]);
  a1[12] = _byteswap_ulong(a1[12]);
  a1[13] = _byteswap_ulong(a1[13]);
  a1[14] = _byteswap_ulong(a1[14]);
  a1[15] = _byteswap_ulong(a1[15]);
  v2 = _mm_cvtsi32_si128(a1[18]);
  a1[16] = _byteswap_ulong(a1[16]);
  a1[17] = _byteswap_ulong(a1[17]);
  v3 = a1[19];
  a1[18] = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi16(v2, 8u), _mm_slli_epi16(v2, 8u)));
  v4 = _mm_cvtsi32_si128(_byteswap_ulong(a1[26]));
  v5 = _mm_unpacklo_epi64(
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v3)), _mm_cvtsi32_si128(_byteswap_ulong(a1[20]))),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(a1[21])), _mm_cvtsi32_si128(_byteswap_ulong(a1[22]))));
  v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(a1[23])), _mm_cvtsi32_si128(_byteswap_ulong(a1[24])));
  v7 = _byteswap_ulong(a1[25]);
  *(__m128i *)(a1 + 19) = v5;
  a1[27] = _byteswap_ulong(a1[27]);
  *(__m128i *)(a1 + 23) = _mm_unpacklo_epi64(v6, _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), v4));
  return a1;
}

