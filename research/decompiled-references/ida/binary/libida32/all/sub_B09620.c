__m128i *__fastcall sub_B09620(__int64 a1, const void *a2, unsigned int a3, const __m128i *a4)
{
  __m128i *v6; // rbx
  __int32 v7; // eax

  v6 = (__m128i *)sub_99FDF0((__int64 *)(a1 + 2352), 72, 3u);
  *v6 = _mm_loadu_si128(a4);
  v6[1] = _mm_loadu_si128(a4 + 1);
  v7 = a4[2].m128i_i32[0];
  v6[2].m128i_i32[2] = 0;
  v6[2].m128i_i32[0] = v7;
  v6[2].m128i_i16[2] = 123;
  LOBYTE(v7) = v6[2].m128i_i8[6];
  v6[3].m128i_i64[0] = 0;
  v6[3].m128i_i32[2] = 0;
  v6[4].m128i_i64[0] = 0;
  v6[2].m128i_i8[6] = v7 & 0xE0 | 0x18;
  if ( (BYTE2(v7) & 0xF0) == 0xF0 && !v6->m128i_i64[0] )
    v6[2].m128i_i8[2] = BYTE2(v7) & 0xF;
  sub_B09360(&v6[3].m128i_u32[2], (__m128i *)v6[4].m128i_i64, a1, a2, a3);
  return v6;
}

