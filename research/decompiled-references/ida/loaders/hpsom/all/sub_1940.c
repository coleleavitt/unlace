void __fastcall sub_1940(unsigned int *a1)
{
  __m128i v1; // xmm0
  unsigned int v2; // edx

  v1 = _mm_cvtsi32_si128(a1[6]);
  *a1 = _byteswap_ulong(*a1);
  a1[2] = _byteswap_ulong(a1[2]);
  v2 = a1[3];
  a1[6] = _mm_cvtsi128_si32(_mm_or_si128(_mm_slli_epi16(v1, 8u), _mm_srli_epi16(v1, 8u)));
  a1[3] = _byteswap_ulong(v2);
  a1[4] = _byteswap_ulong(a1[4]);
  a1[5] = _byteswap_ulong(a1[5]);
  a1[7] = _byteswap_ulong(a1[7]);
  a1[8] = _byteswap_ulong(a1[8]);
  a1[9] = _byteswap_ulong(a1[9]);
}

