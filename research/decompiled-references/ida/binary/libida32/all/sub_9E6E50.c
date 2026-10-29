__m128i *__fastcall sub_9E6E50(__m128i *a1, __m128i *a2)
{
  __int8 v3; // al
  __m128i *v4; // rdi

  v3 = a2[2].m128i_i8[0];
  if ( a1[2].m128i_i8[0] )
  {
    if ( !v3 )
    {
      a1[2].m128i_i8[0] = 0;
      v4 = (__m128i *)a1->m128i_i64[0];
      if ( v4 != &a1[1] )
        operator delete(v4);
      return a1;
    }
    sub_9E6D90((__int64)a1, a2);
    return a1;
  }
  else
  {
    if ( !v3 )
      return a1;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
    {
      a1[1] = _mm_loadu_si128(a2 + 1);
    }
    else
    {
      a1->m128i_i64[0] = a2->m128i_i64[0];
      a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
    }
    a1->m128i_i64[1] = a2->m128i_i64[1];
    a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
    a2->m128i_i64[1] = 0;
    a2[1].m128i_i8[0] = 0;
    a1[2].m128i_i8[0] = 1;
    return a1;
  }
}

