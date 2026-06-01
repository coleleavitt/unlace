__int64 __fastcall sub_74B4A0(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __m128i v4; // xmm0
  __m128i v6; // xmm0

  v4 = _mm_loadu_si128(a3);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[2].m128i_i16[0] = 22;
  *a1 = v4;
  v6 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i64[1] = a4;
  a1[1] = v6;
  return 22;
}

