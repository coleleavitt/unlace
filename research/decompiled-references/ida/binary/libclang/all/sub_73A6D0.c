__int64 __fastcall sub_73A6D0(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, __int32 a5, __int32 a6)
{
  __m128i v6; // xmm0
  __m128i v8; // xmm0

  v6 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 212;
  *a1 = v6;
  v8 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[2].m128i_i64[1] = a4;
  a1[3].m128i_i32[0] = a5;
  a1[3].m128i_i32[1] = a6;
  a1[1] = v8;
  return 212;
}

