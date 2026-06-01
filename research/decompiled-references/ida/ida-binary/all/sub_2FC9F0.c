__m128i *__fastcall sub_2FC9F0(__m128i *a1, _QWORD *a2, __int64 a3, __int64 a4, signed __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 i; // rsi

  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  if ( a2 )
  {
    v6 = a2;
    for ( i = 0; ; i = a1[1].m128i_i64[0] )
    {
      sub_2FB690(a1, i, (__int64)v6, a4, a5, a6);
      if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
        sub_2F8810(a1, 0, 0, 0, a5, a6);
      v6 = (_QWORD *)*v6;
      if ( !v6 )
        break;
    }
  }
  return a1;
}
