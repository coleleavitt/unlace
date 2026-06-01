__int64 __fastcall sub_9F8800(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __m128i *v5; // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbx
  __m128i *v11; // r13
  const __m128i *v12; // r14
  const __m128i *m; // rbx
  const __m128i *v14; // rax
  const __m128i *v15; // rdx
  __m128i *v16; // rbx
  __m128i *v18; // rax
  __m128i *i; // rbx
  __int64 v20; // r13
  __int64 j; // rbx
  __m128i *k; // rbx
  __int64 v23; // rbx
  __m128i *v24; // rax
  int v25; // [rsp+Ch] [rbp-3Ch]

  if ( a1 == a2 )
    return a1;
  v2 = *(_QWORD *)a2;
  v3 = a2 + 16;
  v5 = *(__m128i **)a1;
  v6 = *(unsigned int *)(a1 + 8);
  if ( a2 + 16 == *(_QWORD *)a2 )
  {
    v7 = *(unsigned int *)(a2 + 8);
    v25 = v7;
    if ( v7 <= v6 )
    {
      v18 = *(__m128i **)a1;
      if ( v7 )
      {
        v24 = sub_9F8570(v3, v3 + 176 * v7, v5);
        v6 = *(unsigned int *)(a1 + 8);
        v5 = v24;
        v18 = *(__m128i **)a1;
      }
      for ( i = &v18[11 * v6]; v5 != i; sub_9E5F30((__int64)i[1].m128i_i64) )
        i -= 11;
      v20 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = v7;
      for ( j = v20 + 176LL * *(unsigned int *)(a2 + 8); v20 != j; sub_9E5F30(j + 16) )
        j -= 176;
    }
    else
    {
      v8 = 11 * v6;
      v9 = 11 * v6;
      if ( v7 > *(unsigned int *)(a1 + 12) )
      {
        for ( k = &v5[v8]; k != v5; sub_9E5F30((__int64)k[1].m128i_i64) )
          k -= 11;
        *(_DWORD *)(a1 + 8) = 0;
        v9 = 0;
        sub_9F7080((__int64 *)a1, v7);
        v2 = *(_QWORD *)a2;
        v7 = *(unsigned int *)(a2 + 8);
        v5 = *(__m128i **)a1;
        v10 = *(_QWORD *)a2;
      }
      else
      {
        v10 = v2 + v8 * 16;
        if ( *(_DWORD *)(a1 + 8) )
        {
          sub_9F8570(v2, v10, v5);
          v2 = *(_QWORD *)a2;
          v7 = *(unsigned int *)(a2 + 8);
          v5 = *(__m128i **)a1;
          v10 = *(_QWORD *)a2 + v9 * 16;
        }
      }
      v11 = &v5[v9];
      v12 = (const __m128i *)(v2 + 176 * v7);
      if ( v12 != (const __m128i *)v10 )
      {
        for ( m = (const __m128i *)(v10 + 144); ; m += 11 )
        {
          *v11 = _mm_loadu_si128(m - 9);
          sub_9E61E0((__int64)v11[1].m128i_i64, (__int64)m[-8].m128i_i64);
          v11[7].m128i_i8[8] = 0;
          if ( m[-2].m128i_i8[8] )
          {
            v11[5].m128i_i64[1] = (__int64)&v11[6].m128i_i64[1];
            v15 = (const __m128i *)m[-4].m128i_i64[1];
            if ( &m[-3].m128i_u64[1] == (unsigned __int64 *)v15 )
            {
              *(__m128i *)((char *)v11 + 104) = _mm_loadu_si128((const __m128i *)((char *)m - 40));
            }
            else
            {
              v11[5].m128i_i64[1] = (__int64)v15;
              v11[6].m128i_i64[1] = m[-3].m128i_i64[1];
            }
            v11[6].m128i_i64[0] = m[-3].m128i_i64[0];
            m[-4].m128i_i64[1] = (__int64)&m[-3].m128i_i64[1];
            m[-3].m128i_i64[0] = 0;
            m[-3].m128i_i8[8] = 0;
            v11[7].m128i_i8[8] = 1;
          }
          v11[10].m128i_i8[0] = 0;
          if ( m[1].m128i_i8[0] )
          {
            v11[8].m128i_i64[0] = (__int64)v11[9].m128i_i64;
            v14 = (const __m128i *)m[-1].m128i_i64[0];
            if ( v14 == m )
            {
              v11[9] = _mm_loadu_si128(m);
            }
            else
            {
              v11[8].m128i_i64[0] = (__int64)v14;
              v11[9].m128i_i64[0] = m->m128i_i64[0];
            }
            v11[8].m128i_i64[1] = m[-1].m128i_i64[1];
            m[-1].m128i_i64[0] = (__int64)m;
            m[-1].m128i_i64[1] = 0;
            m->m128i_i8[0] = 0;
            v11[10].m128i_i8[0] = 1;
          }
          v11 += 11;
          v11[-1].m128i_i64[1] = m[1].m128i_i64[1];
          if ( v12 == &m[2] )
            break;
        }
        v2 = *(_QWORD *)a2;
      }
      *(_DWORD *)(a1 + 8) = v25;
      v23 = v2 + 176LL * *(unsigned int *)(a2 + 8);
      if ( v23 != v2 )
      {
        do
        {
          v23 -= 176;
          sub_9E5F30(v23 + 16);
        }
        while ( v23 != v2 );
        *(_DWORD *)(a2 + 8) = 0;
        return a1;
      }
    }
    *(_DWORD *)(a2 + 8) = 0;
    return a1;
  }
  v16 = &v5[11 * v6];
  if ( v16 != v5 )
  {
    do
    {
      v16 -= 11;
      sub_9E5F30((__int64)v16[1].m128i_i64);
    }
    while ( v16 != v5 );
    v5 = *(__m128i **)a1;
  }
  if ( v5 != (__m128i *)(a1 + 16) )
    free(v5);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)a2 = v3;
  *(_QWORD *)(a2 + 8) = 0;
  return a1;
}

