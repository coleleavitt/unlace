__int64 __fastcall sub_75C610(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int8 a6,
        unsigned int a7)
{
  __m128i v7; // xmm0
  __m128i v9; // xmm0

  v7 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 374;
  *a1 = v7;
  v9 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[2].m128i_i64[1] = a4;
  a1[3].m128i_i64[0] = a5;
  a1[3].m128i_i8[8] = a6;
  a1[3].m128i_i8[9] = a7;
  a1[1] = v9;
  return a7;
}

