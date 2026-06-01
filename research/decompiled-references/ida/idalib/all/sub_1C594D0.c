void __fastcall sub_1C594D0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rax
  signed __int64 v17; // rdx
  unsigned __int64 v18; // r10
  const __m128i *v19; // [rsp+0h] [rbp-58h]
  __int64 v20; // [rsp+8h] [rbp-50h]

  v3 = (__int64)a2->m128i_i64 - a1;
  v4 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a2->m128i_i64 - a1) >> 3);
  v19 = (const __m128i *)((char *)a2 + a3 - a1);
  if ( (__int64)a2->m128i_i64 - a1 <= 144 )
  {
    sub_1C53400(a1, (__int64)a2);
  }
  else
  {
    v20 = a1;
    do
    {
      sub_1C53400(a1, a1 + 168);
      a1 += 168;
    }
    while ( (__int64)a2->m128i_i64 - a1 > 144 );
    sub_1C53400(a1, (__int64)a2);
    if ( v3 > 168 )
    {
      v5 = 7;
      while ( 1 )
      {
        v6 = 2 * v5;
        if ( v4 < 2 * v5 )
        {
          v7 = a3;
          v12 = v4;
          v10 = v20;
        }
        else
        {
          v7 = a3;
          v8 = v20;
          v9 = 48 * v5;
          do
          {
            v11 = sub_1C532A0(v8, v8 + 24 * v5, (const __m128i *)(v8 + 24 * v5), (const __m128i *)(v8 + v9), v7);
            v8 += v9;
            v10 = v8;
            v7 = v11;
            v12 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a2->m128i_i64 - v8) >> 3);
          }
          while ( v6 <= v12 );
        }
        if ( v12 > v5 )
          v12 = v5;
        v5 *= 4;
        sub_1C532A0(v10, v10 + 24 * v12, (const __m128i *)(v10 + 24 * v12), a2, v7);
        if ( v4 < v5 )
          break;
        v13 = v20;
        v14 = a3;
        v15 = 24 * v5;
        do
        {
          v16 = sub_1C532A0(v14, v14 + 24 * v6, (const __m128i *)(v14 + 24 * v6), (const __m128i *)(v14 + v15), v13);
          v14 += v15;
          v13 = v16;
          v17 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v19->m128i_i64 - v14) >> 3);
        }
        while ( v5 <= v17 );
        v18 = v6;
        if ( v17 <= v6 )
          v18 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v19->m128i_i64 - v14) >> 3);
        sub_1C532A0(v14, v14 + 24 * v18, (const __m128i *)(v14 + 24 * v18), v19, v16);
        if ( v4 <= v5 )
          return;
      }
      if ( v4 > v6 )
        v4 = v6;
      sub_1C532A0(a3, a3 + 24 * v4, (const __m128i *)(a3 + 24 * v4), v19, v20);
    }
  }
}
