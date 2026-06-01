__int64 __fastcall sub_B1B6A0(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __int32 v3; // eax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v3 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v3;
  a1[2].m128i_i16[2] = 401;
  a1[2].m128i_i32[2] = 0;
  a1[3].m128i_i64[0] = 0;
  return 401;
}
