__m128i *__fastcall sub_22ABDA0(_QWORD *a1, __m128i *a2)
{
  __m128i *v2; // rbp
  __m128i *v3; // rbx
  __m128i *v5; // [rsp+8h] [rbp-30h] BYREF

  v2 = (__m128i *)(a1 + 1);
  v3 = (__m128i *)a1[2];
  if ( !v3 )
    goto LABEL_8;
  do
  {
    while ( !sub_2234B00((__int64)v3[2].m128i_i64, (__int64)a2) )
    {
      v2 = v3;
      v3 = (__m128i *)v3[1].m128i_i64[0];
      if ( !v3 )
        goto LABEL_6;
    }
    v3 = (__m128i *)v3[1].m128i_i64[1];
  }
  while ( v3 );
LABEL_6:
  if ( a1 + 1 == (_QWORD *)v2 || sub_2234B00((__int64)a2, (__int64)v2[2].m128i_i64) )
  {
LABEL_8:
    v5 = a2;
    v2 = sub_22ABC80(a1, v2, &v5);
  }
  return v2 + 4;
}
