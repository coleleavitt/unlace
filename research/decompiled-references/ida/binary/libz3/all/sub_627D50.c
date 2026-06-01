__m128i *__fastcall sub_627D50(const __m128i *a1)
{
  __m128i *result; // rax
  __m128i v2; // xmm0

  result = (__m128i *)sub_186B270(0x60u);
  v2 = _mm_loadl_epi64(a1 + 2);
  result->m128i_i32[2] = 0;
  result[1].m128i_i64[0] = 0;
  result[1].m128i_i8[8] = 1;
  result->m128i_i64[0] = (__int64)&off_1C68A28;
  result[3].m128i_i64[0] = 0;
  result[4].m128i_i64[0] = 0;
  result[4].m128i_i64[1] = 0;
  result[5].m128i_i64[0] = 0;
  result[5].m128i_i64[1] = 0;
  result[2] = _mm_unpacklo_epi64(v2, v2);
  result[3].m128i_i64[1] = v2.m128i_i64[0];
  return result;
}

