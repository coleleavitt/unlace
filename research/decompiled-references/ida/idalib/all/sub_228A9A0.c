__m128i *__fastcall sub_228A9A0(__m128i *a1, _BYTE *a2, __int64 a3, unsigned int a4)
{
  __m128i *v4; // rbp
  __m128i *v6; // rdx
  __int64 v7; // rcx
  __m128i *v8; // rax
  __m128i *v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  __m128i v11[2]; // [rsp+10h] [rbp-28h] BYREF

  v4 = a1 + 1;
  if ( a4 <= 1 )
  {
    a1->m128i_i64[0] = (__int64)v4;
    sub_2288020(a1, a2, (__int64)&a2[a3]);
    return a1;
  }
  if ( !a2 )
  {
    v11[0].m128i_i8[0] = 0;
    v7 = 0;
    a1->m128i_i64[0] = (__int64)v4;
LABEL_13:
    a1[1] = _mm_load_si128(v11);
    goto LABEL_11;
  }
  v9 = v11;
  sub_2288020(&v9, a2, (__int64)&a2[a3]);
  v6 = v9;
  v7 = v10;
  v8 = (__m128i *)((char *)v9 + v10);
  if ( v9 != (__m128i *)&v9->m128i_i8[v10] )
  {
    do
    {
      if ( v6->m128i_i8[0] == 92 )
        v6->m128i_i8[0] = 47;
      v6 = (__m128i *)((char *)v6 + 1);
    }
    while ( v6 != v8 );
    v8 = v9;
    v7 = v10;
  }
  a1->m128i_i64[0] = (__int64)v4;
  if ( v8 == v11 )
    goto LABEL_13;
  a1->m128i_i64[0] = (__int64)v8;
  a1[1].m128i_i64[0] = v11[0].m128i_i64[0];
LABEL_11:
  a1->m128i_i64[1] = v7;
  return a1;
}
