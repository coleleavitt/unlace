__int64 __fastcall sub_740D20(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm0

  v3 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 65;
  *a1 = v3;
  v5 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[1] = v5;
  return 65;
}

