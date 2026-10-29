__int64 __fastcall sub_73BE90(__m128i *a1, __int64 a2, const __m128i *a3, __int32 a4, __int32 a5)
{
  __m128i v5; // xmm0
  __m128i v7; // xmm0

  v5 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 100;
  *a1 = v5;
  v7 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[2].m128i_i32[1] = a4;
  a1[2].m128i_i32[2] = a5;
  a1[1] = v7;
  return 100;
}

