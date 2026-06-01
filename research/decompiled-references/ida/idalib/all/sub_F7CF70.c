void __fastcall sub_F7CF70(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r8
  const __m128i *v8; // rdi
  __int64 v9; // rbp
  const __m128i *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  const __m128i *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r10
  const __m128i *v19; // [rsp+0h] [rbp-58h]
  __int64 v20; // [rsp+8h] [rbp-50h]

  v3 = (__int64)a2->m128i_i64 - a1;
  v4 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)a2->m128i_i64 - a1) >> 3);
  v19 = (const __m128i *)((char *)a2 + (_QWORD)a3 - a1);
  if ( (__int64)a2->m128i_i64 - a1 <= 336 )
  {
    sub_F7CC10(a1, (__int64)a2);
  }
  else
  {
    v20 = a1;
    do
    {
      sub_F7CC10(a1, a1 + 392);
      a1 += 392;
    }
    while ( (__int64)a2->m128i_i64 - a1 > 336 );
    sub_F7CC10(a1, (__int64)a2);
    if ( v3 > 392 )
    {
      v5 = 7;
      while ( 1 )
      {
        v6 = 2 * v5;
        if ( v4 < 2 * v5 )
        {
          v7 = (__int64)a3;
          v12 = v4;
          v10 = (const __m128i *)v20;
        }
        else
        {
          v7 = (__int64)a3;
          v8 = (const __m128i *)v20;
          v9 = 7 * v5;
          do
          {
            v11 = sub_F7CDA0(
                    v8,
                    (const __m128i *)((char *)v8 + 56 * v5),
                    (const __m128i *)((char *)v8 + 56 * v5),
                    &v8[v9],
                    v7);
            v8 = (const __m128i *)((char *)v8 + v9 * 16);
            v10 = v8;
            v7 = v11;
            v12 = 0x6DB6DB6DB6DB6DB7LL * (((char *)a2 - (char *)v8) >> 3);
          }
          while ( v6 <= v12 );
        }
        if ( v5 <= v12 )
          v12 = v5;
        v5 *= 4;
        sub_F7CDA0(v10, (const __m128i *)((char *)v10 + 56 * v12), (const __m128i *)((char *)v10 + 56 * v12), a2, v7);
        if ( v4 < v5 )
          break;
        v13 = v20;
        v14 = a3;
        v15 = 56 * v5;
        do
        {
          v16 = sub_F7CDA0(
                  v14,
                  &v14[(unsigned __int64)(56 * v6) / 0x10],
                  &v14[(unsigned __int64)(56 * v6) / 0x10],
                  (const __m128i *)((char *)v14 + v15),
                  v13);
          v14 = (const __m128i *)((char *)v14 + v15);
          v13 = v16;
          v17 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v19 - (char *)v14) >> 3);
        }
        while ( v5 <= v17 );
        v18 = v6;
        if ( v17 <= v6 )
          v18 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v19 - (char *)v14) >> 3);
        sub_F7CDA0(v14, (const __m128i *)((char *)v14 + 56 * v18), (const __m128i *)((char *)v14 + 56 * v18), v19, v16);
        if ( v4 <= v5 )
          return;
      }
      if ( v4 > v6 )
        v4 = v6;
      sub_F7CDA0(a3, (const __m128i *)((char *)a3 + 56 * v4), (const __m128i *)((char *)a3 + 56 * v4), v19, v20);
    }
  }
}
