__m128i *__fastcall sub_12182E0(__m128i *a1, _QWORD *a2, __int64 a3)
{
  __m128i *v3; // rax

  v3 = (__m128i *)sub_9EE560(a2, *(_BYTE **)a3, *(_QWORD *)(a3 + 8));
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)v3->m128i_i64[0] == &v3[1] )
  {
    a1[1] = _mm_loadu_si128(v3 + 1);
  }
  else
  {
    a1->m128i_i64[0] = v3->m128i_i64[0];
    a1[1].m128i_i64[0] = v3[1].m128i_i64[0];
  }
  a1->m128i_i64[1] = v3->m128i_i64[1];
  v3->m128i_i64[0] = (__int64)v3[1].m128i_i64;
  v3->m128i_i64[1] = 0;
  v3[1].m128i_i8[0] = 0;
  return a1;
}
