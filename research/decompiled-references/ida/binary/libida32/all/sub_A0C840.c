__int64 __fastcall sub_A0C840(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rdx
  __m128i *v6; // rbx
  __m128i *i; // r12
  const __m128i *v8; // r14
  __m128i *v9; // rbx
  const __m128i *v10; // r12
  const __m128i *v11; // r14
  __int8 v12; // dl
  __int8 v13; // al
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int8 v16; // al
  const __m128i *v18; // r12
  __int8 v19; // cl
  __int8 v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int8 v23; // al
  __m128i *v24; // rax
  const __m128i *v25; // r14
  __m128i *v26; // r12
  __int8 v27; // dl
  __int8 v28; // al
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int8 v31; // al
  __m128i *v32; // r12
  unsigned int v33; // [rsp+4h] [rbp-44h]
  unsigned __int64 v34; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(__m128i **)a1;
    v33 = *(_DWORD *)(a2 + 8);
    v3 = v33;
    if ( v33 > v4 )
    {
      if ( v33 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        v8 = *(const __m128i **)a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v4 *= 328LL;
          v18 = (const __m128i *)((char *)v8 + v4);
          do
          {
            v34 = v4;
            *v6 = _mm_loadu_si128(v8);
            sub_A0C570((__int64)v6[1].m128i_i64, (__int64)v8[1].m128i_i64);
            v19 = v8[12].m128i_i8[0];
            v20 = v6[12].m128i_i8[0];
            v21 = (__int64)&v8[12].m128i_i64[1];
            v22 = (__int64)&v6[12].m128i_i64[1];
            v8 = (const __m128i *)((char *)v8 + 328);
            v6 = (__m128i *)((char *)v6 + 328);
            v23 = v19 & 1 | v20 & 0xFE;
            v6[-9].m128i_i8[8] = v23;
            v6[-9].m128i_i8[8] = v8[-9].m128i_i8[8] & 2 | v23 & 0xFD;
            sub_A0BD90(v22, v21);
            v4 = v34;
          }
          while ( v18 != v8 );
          v3 = *(unsigned int *)(a2 + 8);
          v6 = *(__m128i **)a1;
          v8 = *(const __m128i **)a2;
        }
      }
      else
      {
        for ( i = (__m128i *)((char *)v6 + 328 * v4); i != v6; sub_9FC040((__int64)i[1].m128i_i64) )
          i = (__m128i *)((char *)i - 328);
        *(_DWORD *)(a1 + 8) = 0;
        sub_9F2580(a1, v33);
        v3 = *(unsigned int *)(a2 + 8);
        v6 = *(__m128i **)a1;
        v4 = 0;
        v8 = *(const __m128i **)a2;
      }
      v9 = (__m128i *)((char *)v6 + v4);
      v10 = (const __m128i *)((char *)v8 + 328 * v3);
      v11 = (const __m128i *)((char *)v8 + v4);
      while ( v11 != v10 )
      {
        *v9 = _mm_loadu_si128(v11);
        sub_9F0070((__int64)v9[1].m128i_i64, (__int64)v11[1].m128i_i64);
        v12 = v11[12].m128i_i8[0];
        v13 = v9[12].m128i_i8[0];
        v14 = (__int64)&v11[12].m128i_i64[1];
        v15 = (__int64)&v9[12].m128i_i64[1];
        v11 = (const __m128i *)((char *)v11 + 328);
        v9 = (__m128i *)((char *)v9 + 328);
        v16 = v12 & 1 | v13 & 0xFE;
        v9[-9].m128i_i8[8] = v16;
        v9[-9].m128i_i8[8] = v11[-9].m128i_i8[8] & 2 | v16 & 0xFD;
        sub_9F03A0(v15, v14);
      }
LABEL_9:
      *(_DWORD *)(a1 + 8) = v33;
      return a1;
    }
    v24 = *(__m128i **)a1;
    if ( v33 )
    {
      v25 = *(const __m128i **)a2;
      v26 = (__m128i *)((char *)v6 + 328 * v33);
      do
      {
        *v6 = _mm_loadu_si128(v25);
        sub_A0C570((__int64)v6[1].m128i_i64, (__int64)v25[1].m128i_i64);
        v27 = v25[12].m128i_i8[0];
        v28 = v6[12].m128i_i8[0];
        v29 = (__int64)&v25[12].m128i_i64[1];
        v30 = (__int64)&v6[12].m128i_i64[1];
        v6 = (__m128i *)((char *)v6 + 328);
        v25 = (const __m128i *)((char *)v25 + 328);
        v31 = v27 & 1 | v28 & 0xFE;
        v6[-9].m128i_i8[8] = v31;
        v6[-9].m128i_i8[8] = v25[-9].m128i_i8[8] & 2 | v31 & 0xFD;
        sub_A0BD90(v30, v29);
      }
      while ( v6 != v26 );
      v24 = *(__m128i **)a1;
      v4 = *(unsigned int *)(a1 + 8);
    }
    v32 = (__m128i *)((char *)v24 + 328 * v4);
    if ( v6 == v32 )
      goto LABEL_9;
    do
    {
      v32 = (__m128i *)((char *)v32 - 328);
      sub_9FC040((__int64)v32[1].m128i_i64);
    }
    while ( v6 != v32 );
    *(_DWORD *)(a1 + 8) = v33;
  }
  return a1;
}

