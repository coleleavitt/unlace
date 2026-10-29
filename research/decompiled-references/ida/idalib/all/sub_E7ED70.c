__m128i *__fastcall sub_E7ED70(__m128i *a1, char *a2, _QWORD *a3)
{
  size_t v4; // rax
  __m128i *v5; // rax

  v4 = strlen(a2);
  v5 = (__m128i *)sub_99BDC0(a3, 0, 0, a2, v4);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)v5->m128i_i64[0] == &v5[1] )
  {
    a1[1] = _mm_loadu_si128(v5 + 1);
  }
  else
  {
    a1->m128i_i64[0] = v5->m128i_i64[0];
    a1[1].m128i_i64[0] = v5[1].m128i_i64[0];
  }
  a1->m128i_i64[1] = v5->m128i_i64[1];
  v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
  v5->m128i_i64[1] = 0;
  v5[1].m128i_i8[0] = 0;
  return a1;
}
