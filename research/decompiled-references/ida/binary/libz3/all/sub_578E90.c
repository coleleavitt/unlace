_QWORD *__fastcall sub_578E90(__m128i *a1, unsigned __int64 a2)
{
  __m128i v2; // xmm0
  _QWORD *v3; // rax
  _QWORD *result; // rax
  __m128i v5[3]; // [rsp+8h] [rbp-30h] BYREF

  sub_180C5A0(v5, "product_relation");
  v2 = _mm_loadl_epi64(v5);
  a1[2].m128i_i64[1] = (__int64)a1;
  a1->m128i_i32[2] = -1;
  a1[2].m128i_i32[0] = 3;
  a1->m128i_i64[0] = (__int64)&off_1C51520;
  a1[3].m128i_i64[0] = 0;
  a1[1] = _mm_unpacklo_epi64(v2, (__m128i)a2);
  v3 = (_QWORD *)sub_186B270(0xC0u);
  *v3 = 0;
  v3[1] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[9] = 0;
  v3[10] = 0;
  v3[12] = 0;
  v3[13] = 0;
  v3[15] = 0;
  v3[16] = 0;
  v3[18] = 0;
  v3[19] = 0;
  v3[21] = 0;
  v3[22] = 0;
  a1[3].m128i_i64[1] = (__int64)v3;
  a1[4].m128i_i64[0] = 8;
  a1[4].m128i_i32[2] = 0;
  result = (_QWORD *)sub_186B270(0xC0u);
  *result = 0;
  result[1] = 0;
  result[3] = 0;
  result[4] = 0;
  result[6] = 0;
  result[7] = 0;
  result[9] = 0;
  result[10] = 0;
  result[12] = 0;
  result[13] = 0;
  result[15] = 0;
  result[16] = 0;
  result[18] = 0;
  result[19] = 0;
  result[21] = 0;
  result[22] = 0;
  a1[5].m128i_i64[0] = (__int64)result;
  a1[5].m128i_i64[1] = 8;
  a1[6].m128i_i32[0] = 0;
  return result;
}

