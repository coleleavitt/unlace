__m128i *__fastcall sub_FA3FC0(__m128i *a1)
{
  __m128i *result; // rax
  __m128i *v2; // rdx
  __m128i v3; // xmm0
  __m128i si128; // xmm1
  __m128i v5; // xmm0
  __m128i v6; // [rsp+0h] [rbp-10h] BYREF

  result = a1;
  do
  {
    result->m128i_i8[0] = 0;
    result[6].m128i_i64[0] = (__int64)result[7].m128i_i64;
    result[8].m128i_i64[0] = (__int64)result[9].m128i_i64;
    result[10].m128i_i64[0] = (__int64)result[11].m128i_i64;
    result[12].m128i_i64[0] = (__int64)result[13].m128i_i64;
    result[14].m128i_i64[0] = (__int64)result[15].m128i_i64;
    result[16].m128i_i64[0] = (__int64)result[17].m128i_i64;
    result[18].m128i_i64[0] = (__int64)result[19].m128i_i64;
    result[20].m128i_i64[0] = (__int64)result[21].m128i_i64;
    result[22].m128i_i64[0] = (__int64)result[23].m128i_i64;
    result[24].m128i_i64[0] = (__int64)result[25].m128i_i64;
    result[26].m128i_i64[0] = (__int64)result[27].m128i_i64;
    v2 = result + 34;
    result += 58;
    result[-52].m128i_i64[1] = 0;
    result[-51].m128i_i8[0] = 0;
    result[-50].m128i_i64[1] = 0;
    result[-49].m128i_i8[0] = 0;
    result[-48].m128i_i64[1] = 0;
    result[-47].m128i_i8[0] = 0;
    result[-46].m128i_i64[1] = 0;
    result[-45].m128i_i8[0] = 0;
    result[-44].m128i_i64[1] = 0;
    result[-43].m128i_i8[0] = 0;
    result[-42].m128i_i64[1] = 0;
    result[-41].m128i_i8[0] = 0;
    result[-40].m128i_i64[1] = 0;
    result[-39].m128i_i8[0] = 0;
    result[-38].m128i_i64[1] = 0;
    result[-37].m128i_i8[0] = 0;
    result[-36].m128i_i64[1] = 0;
    result[-35].m128i_i8[0] = 0;
    result[-34].m128i_i64[1] = 0;
    result[-33].m128i_i8[0] = 0;
    result[-32].m128i_i32[2] = 0;
    result[-32].m128i_i32[3] = 8;
    result[-25].m128i_i64[0] = (__int64)v2;
    result[-25].m128i_i32[2] = 0;
    result[-25].m128i_i32[3] = 6;
  }
  while ( result != &a1[928] );
  v6.m128i_i64[0] = (__int64)a1;
  v3 = _mm_loadl_epi64(&v6);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2385170);
  a1[936].m128i_i32[0] = 16;
  v5 = _mm_unpacklo_epi64(v3, v3);
  a1[928] = _mm_add_epi64(si128, v5);
  a1[929] = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_2385180), v5);
  a1[930] = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_2385190), v5);
  a1[931] = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23851A0), v5);
  a1[932] = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23851B0), v5);
  a1[933] = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23851C0), v5);
  a1[934] = _mm_add_epi64(_mm_load_si128((const __m128i *)&xmmword_23851D0), v5);
  a1[935] = _mm_add_epi64(v5, (__m128i)xmmword_23851E0);
  return result;
}

