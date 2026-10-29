__int64 __fastcall sub_B197D0(__m128i *a1, __int64 a2, const __m128i *a3, __int32 a4, __int32 a5)
{
  __int32 v5; // eax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v5 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v5;
  a1[2].m128i_i16[2] = 365;
  a1[2].m128i_i32[2] = a4;
  a1[2].m128i_i32[3] = a5;
  return 365;
}
