__int64 __fastcall sub_AF5F20(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int32 v7; // eax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v7 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v7;
  a1[2].m128i_i16[2] = 440;
  a1[2].m128i_i64[1] = a4;
  a1[3].m128i_i64[0] = a5;
  a1[3].m128i_i64[1] = a6;
  a1[4].m128i_i8[0] = a7;
  return a7;
}

