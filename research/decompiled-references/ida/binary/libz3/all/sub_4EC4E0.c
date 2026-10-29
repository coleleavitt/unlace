_QWORD *__fastcall sub_4EC4E0(__m128i *a1, unsigned __int64 a2)
{
  __m128i v2; // xmm0
  __int64 *v3; // rax
  __int64 v4; // rsi
  _QWORD *result; // rax
  __m128i v6[2]; // [rsp+8h] [rbp-20h] BYREF

  sub_180C5A0(v6, "doc");
  v2 = _mm_loadl_epi64(v6);
  a1->m128i_i64[0] = (__int64)&off_1C4FD08;
  v3 = *(__int64 **)(a2 + 8);
  a1->m128i_i32[2] = -1;
  a1[1] = _mm_unpacklo_epi64(v2, (__m128i)a2);
  v4 = *v3;
  a1[2].m128i_i32[0] = 0;
  a1[2].m128i_i64[1] = v4;
  sub_16744A0(&a1[3], v4);
  sub_1624F90(&a1[4].m128i_u64[1], a1[2].m128i_i64[1]);
  result = (_QWORD *)sub_186B270(0xC0u);
  *result = 0;
  result[3] = 0;
  result[6] = 0;
  result[9] = 0;
  result[12] = 0;
  result[15] = 0;
  result[18] = 0;
  result[21] = 0;
  a1[6].m128i_i64[1] = (__int64)result;
  a1[7].m128i_i64[0] = 8;
  a1[7].m128i_i32[2] = 0;
  a1[8].m128i_i8[0] = 0;
  return result;
}

