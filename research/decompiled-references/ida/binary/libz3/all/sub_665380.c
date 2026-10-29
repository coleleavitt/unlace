_OWORD *__fastcall sub_665380(__m128i *a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *result; // rax

  a1[1].m128i_i64[0] = 0;
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  v2 = (_OWORD *)sub_186B270(0x80u);
  a1[1].m128i_i64[1] = (__int64)v2;
  a1[2].m128i_i32[2] = 0;
  a1[2].m128i_i64[0] = 8;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  result = (_OWORD *)sub_186B270(0x80u);
  a1[3].m128i_i64[0] = (__int64)result;
  a1[3].m128i_i64[1] = 8;
  a1[4].m128i_i32[0] = 0;
  a1[4].m128i_i64[1] = a2;
  a1[5].m128i_i64[0] = 0;
  a1[5].m128i_i64[1] = 0;
  a1[6].m128i_i64[0] = 0;
  a1[6].m128i_i64[1] = 0;
  a1[7].m128i_i64[0] = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  return result;
}

