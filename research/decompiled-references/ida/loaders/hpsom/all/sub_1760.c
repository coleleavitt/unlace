__int64 __fastcall sub_1760(unsigned int *a1)
{
  __m128i v1; // xmm0
  unsigned int *v2; // rdi
  unsigned int *v3; // rdx
  __int64 result; // rax

  v1 = _mm_cvtsi32_si128(*a1);
  v2 = a1 + 2;
  *(v2 - 2) = _mm_cvtsi128_si32(_mm_or_si128(_mm_srli_epi16(v1, 8u), _mm_slli_epi16(v1, 8u)));
  sub_1750(v2);
  v3[1] = _byteswap_ulong(v3[1]);
  v3[4] = _byteswap_ulong(v3[4]);
  v3[5] = _byteswap_ulong(v3[5]);
  v3[6] = _byteswap_ulong(v3[6]);
  v3[7] = _byteswap_ulong(v3[7]);
  v3[8] = _byteswap_ulong(v3[8]);
  v3[9] = _byteswap_ulong(v3[9]);
  v3[10] = _byteswap_ulong(v3[10]);
  v3[11] = _byteswap_ulong(v3[11]);
  v3[12] = _byteswap_ulong(v3[12]);
  v3[13] = _byteswap_ulong(v3[13]);
  v3[14] = _byteswap_ulong(v3[14]);
  v3[15] = _byteswap_ulong(v3[15]);
  v3[16] = _byteswap_ulong(v3[16]);
  v3[17] = _byteswap_ulong(v3[17]);
  v3[18] = _byteswap_ulong(v3[18]);
  v3[19] = _byteswap_ulong(v3[19]);
  v3[20] = _byteswap_ulong(v3[20]);
  v3[21] = _byteswap_ulong(v3[21]);
  v3[22] = _byteswap_ulong(v3[22]);
  v3[23] = _byteswap_ulong(v3[23]);
  v3[24] = _byteswap_ulong(v3[24]);
  v3[25] = _byteswap_ulong(v3[25]);
  v3[26] = _byteswap_ulong(v3[26]);
  v3[27] = _byteswap_ulong(v3[27]);
  v3[28] = _byteswap_ulong(v3[28]);
  v3[29] = _byteswap_ulong(v3[29]);
  v3[30] = _byteswap_ulong(v3[30]);
  result = _byteswap_ulong(v3[31]);
  v3[31] = result;
  return result;
}

