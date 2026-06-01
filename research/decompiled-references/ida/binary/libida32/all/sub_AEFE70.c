__int64 __fastcall sub_AEFE70(__m128i *a1, __int64 a2, const __m128i *a3, __int32 a4, __int32 a5, __int32 a6)
{
  __int32 v6; // eax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v6 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v6;
  a1[2].m128i_i16[2] = 230;
  a1[2].m128i_i32[2] = a4;
  a1[2].m128i_i32[3] = a5;
  a1[3].m128i_i32[0] = a6;
  a1[3].m128i_i32[1] = 0;
  return 230;
}

