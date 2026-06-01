__int64 __fastcall sub_A25B10(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rdx
  __m128i *v6; // rbx
  int v7; // r13d
  __m128i *i; // rbp
  const __m128i *v9; // rbp
  __int8 *v10; // rbx
  const __m128i *v11; // r14
  const __m128i *v12; // rbp
  __m128i v13; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v15; // rdi
  const __m128i *v17; // r15
  __int8 v18; // cl
  __int8 v19; // al
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int8 v22; // al
  __int8 v23; // al
  __int8 v24; // al
  __m128i *v25; // rax
  const __m128i *v26; // r14
  __m128i *v27; // rbp
  __int8 v28; // dl
  __int8 v29; // al
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int8 v32; // al
  __int8 v33; // al
  __int8 v34; // al
  __m128i *v35; // rbp
  unsigned __int64 v36; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(__m128i **)a1;
    v7 = *(_DWORD *)(a2 + 8);
    if ( v3 > v4 )
    {
      if ( v3 <= *(unsigned int *)(a1 + 12) )
      {
        v9 = *(const __m128i **)a2;
        if ( *(_DWORD *)(a1 + 8) )
        {
          v4 *= 88LL;
          v17 = (const __m128i *)((char *)v9 + v4);
          do
          {
            v36 = v4;
            *v6 = _mm_loadu_si128(v9);
            sub_9EE8A0((__int64)v6[1].m128i_i64, (__int64)v9[1].m128i_i64);
            v18 = v9[3].m128i_i8[0];
            v19 = v6[3].m128i_i8[0];
            v20 = (__int64)&v9[3].m128i_i64[1];
            v21 = (__int64)&v6[3].m128i_i64[1];
            v9 = (const __m128i *)((char *)v9 + 88);
            v6 = (__m128i *)((char *)v6 + 88);
            v22 = v18 & 1 | v19 & 0xFE;
            v6[-3].m128i_i8[8] = v22;
            v23 = v9[-3].m128i_i8[8] & 2 | v22 & 0xFD;
            v6[-3].m128i_i8[8] = v23;
            v24 = v9[-3].m128i_i8[8] & 4 | v23 & 0xFB;
            v6[-3].m128i_i8[8] = v24;
            v6[-3].m128i_i8[8] = v9[-3].m128i_i8[8] & 8 | v24 & 0xF7;
            sub_9EE8A0(v21, v20);
            v4 = v36;
          }
          while ( v17 != v9 );
          v3 = *(unsigned int *)(a2 + 8);
          v6 = *(__m128i **)a1;
          v9 = *(const __m128i **)a2;
        }
      }
      else
      {
        for ( i = (__m128i *)((char *)v6 + 88 * v4); i != v6; sub_A09C30((__int64)i[1].m128i_i64) )
          i = (__m128i *)((char *)i - 88);
        *(_DWORD *)(a1 + 8) = 0;
        sub_A188C0(a1, v3);
        v3 = *(unsigned int *)(a2 + 8);
        v6 = *(__m128i **)a1;
        v4 = 0;
        v9 = *(const __m128i **)a2;
      }
      v10 = &v6->m128i_i8[v4];
      v11 = (const __m128i *)((char *)v9 + 88 * v3);
      v12 = (const __m128i *)((char *)v9 + v4);
      while ( v12 != v11 )
      {
        v13 = _mm_loadu_si128(v12);
        m128i_i64 = (__int64)v12[1].m128i_i64;
        v15 = (__int64)(v10 + 16);
        v12 = (const __m128i *)((char *)v12 + 88);
        v10 += 88;
        *(__m128i *)(v10 - 88) = v13;
        sub_A20D90(v15, m128i_i64);
      }
LABEL_9:
      *(_DWORD *)(a1 + 8) = v7;
      return a1;
    }
    v25 = *(__m128i **)a1;
    if ( *(_DWORD *)(a2 + 8) )
    {
      v26 = *(const __m128i **)a2;
      v27 = (__m128i *)((char *)v6 + 88 * v3);
      do
      {
        *v6 = _mm_loadu_si128(v26);
        sub_9EE8A0((__int64)v6[1].m128i_i64, (__int64)v26[1].m128i_i64);
        v28 = v26[3].m128i_i8[0];
        v29 = v6[3].m128i_i8[0];
        v30 = (__int64)&v26[3].m128i_i64[1];
        v31 = (__int64)&v6[3].m128i_i64[1];
        v6 = (__m128i *)((char *)v6 + 88);
        v26 = (const __m128i *)((char *)v26 + 88);
        v32 = v28 & 1 | v29 & 0xFE;
        v6[-3].m128i_i8[8] = v32;
        v33 = v26[-3].m128i_i8[8] & 2 | v32 & 0xFD;
        v6[-3].m128i_i8[8] = v33;
        v34 = v26[-3].m128i_i8[8] & 4 | v33 & 0xFB;
        v6[-3].m128i_i8[8] = v34;
        v6[-3].m128i_i8[8] = v26[-3].m128i_i8[8] & 8 | v34 & 0xF7;
        sub_9EE8A0(v31, v30);
      }
      while ( v6 != v27 );
      v25 = *(__m128i **)a1;
      v4 = *(unsigned int *)(a1 + 8);
    }
    v35 = (__m128i *)((char *)v25 + 88 * v4);
    if ( v6 == v35 )
      goto LABEL_9;
    do
    {
      v35 = (__m128i *)((char *)v35 - 88);
      sub_A09C30((__int64)v35[1].m128i_i64);
    }
    while ( v6 != v35 );
    *(_DWORD *)(a1 + 8) = v3;
  }
  return a1;
}
