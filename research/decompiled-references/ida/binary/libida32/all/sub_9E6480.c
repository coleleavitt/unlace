const __m128i *__fastcall sub_9E6480(__m128i *a1, const __m128i *a2)
{
  __int8 v2; // al
  const __m128i *v3; // rdx
  const __m128i *result; // rax

  sub_9E61E0((__int64)a1, (__int64)a2);
  v2 = a2[4].m128i_i8[8] & 1 | a1[4].m128i_i8[8] & 0xFE;
  a1[4].m128i_i8[8] = v2;
  a1[4].m128i_i8[8] = a2[4].m128i_i8[8] & 6 | v2 & 0xF9;
  a1[5].m128i_i64[0] = (__int64)a1[6].m128i_i64;
  v3 = (const __m128i *)a2[5].m128i_i64[0];
  result = a2 + 6;
  if ( v3 == &a2[6] )
  {
    a1[6] = _mm_loadu_si128(a2 + 6);
  }
  else
  {
    a1[5].m128i_i64[0] = (__int64)v3;
    a1[6].m128i_i64[0] = a2[6].m128i_i64[0];
  }
  a1[5].m128i_i64[1] = a2[5].m128i_i64[1];
  a2[5].m128i_i64[0] = (__int64)result;
  a2[5].m128i_i64[1] = 0;
  a2[6].m128i_i8[0] = 0;
  return result;
}

