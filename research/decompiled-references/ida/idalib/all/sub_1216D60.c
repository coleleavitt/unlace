__m128i *__fastcall sub_1216D60(__m128i *a1, __m128i *a2)
{
  __m128i *v2; // rdx
  __m128i *result; // rax

  sub_1214140(a1, a2);
  a1[9].m128i_i64[0] = (__int64)a1[10].m128i_i64;
  v2 = (__m128i *)a2[9].m128i_i64[0];
  result = a2 + 10;
  if ( v2 == &a2[10] )
  {
    a1[10] = _mm_loadu_si128(a2 + 10);
  }
  else
  {
    a1[9].m128i_i64[0] = (__int64)v2;
    a1[10].m128i_i64[0] = a2[10].m128i_i64[0];
  }
  a1[9].m128i_i64[1] = a2[9].m128i_i64[1];
  a2[9].m128i_i64[0] = (__int64)result;
  a2[9].m128i_i64[1] = 0;
  a2[10].m128i_i8[0] = 0;
  return result;
}
