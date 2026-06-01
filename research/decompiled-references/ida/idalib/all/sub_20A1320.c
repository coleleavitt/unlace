void __fastcall sub_20A1320(__int64 a1, const __m128i *a2, const __m128i *a3, const __m128i *a4)
{
  const __m128i *v5; // rbp
  const __m128i *v6; // rcx
  __int64 v8; // rsi
  const __m128i *v9; // rdx
  __int64 v10; // rax
  const __m128i *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i *v14; // rcx
  const __m128i *v15; // rdx
  __int64 v16; // rax
  const __m128i *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx

  if ( a2 == a4 )
  {
    v19 = *(unsigned int *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)v19 )
    {
      sub_2237220(a1, a1 + 16, v19, 24);
      LODWORD(v19) = *(_DWORD *)(a1 + 8);
    }
    *(_DWORD *)(a1 + 8) = v19;
  }
  else
  {
    v5 = a2;
    v6 = a2;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = (const __m128i *)((char *)v6 + 24);
          if ( a3 != (const __m128i *)&v6[1].m128i_u64[1] )
            break;
          v6 = a3;
          ++v8;
          if ( a4 == a3 )
            goto LABEL_11;
        }
        v10 = v6[1].m128i_i64[1];
        if ( v10 == -8192 || v10 == -4096 )
          break;
        v6 = (const __m128i *)((char *)v6 + 24);
        ++v8;
        if ( a4 == v9 )
          goto LABEL_11;
      }
      v11 = v6 + 3;
      do
      {
        v6 = v11;
        if ( a3 == v11 )
          break;
        v12 = v11->m128i_i64[0];
        v11 = (const __m128i *)((char *)v11 + 24);
      }
      while ( v12 == -8192 || v12 == -4096 );
      ++v8;
    }
    while ( a4 != v6 );
LABEL_11:
    v13 = *(unsigned int *)(a1 + 8);
    if ( v13 + v8 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      sub_2237220(a1, a1 + 16, v13 + v8, 24);
      v13 = *(unsigned int *)(a1 + 8);
    }
    v14 = (__m128i *)(*(_QWORD *)a1 + 24 * v13);
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = (const __m128i *)((char *)v5 + 24);
          *v14 = _mm_loadu_si128(v5);
          v14[1].m128i_i64[0] = v5[1].m128i_i64[0];
          if ( a3 != (const __m128i *)&v5[1].m128i_u64[1] )
            break;
          v5 = a3;
          v14 = (__m128i *)((char *)v14 + 24);
          if ( a4 == a3 )
            goto LABEL_22;
        }
        v16 = v5[1].m128i_i64[1];
        if ( v16 == -8192 || v16 == -4096 )
          break;
        v5 = (const __m128i *)((char *)v5 + 24);
        v14 = (__m128i *)((char *)v14 + 24);
        if ( a4 == v15 )
          goto LABEL_22;
      }
      v17 = v5 + 3;
      do
      {
        v5 = v17;
        if ( a3 == v17 )
          break;
        v18 = v17->m128i_i64[0];
        v17 = (const __m128i *)((char *)v17 + 24);
      }
      while ( v18 == -8192 || v18 == -4096 );
      v14 = (__m128i *)((char *)v14 + 24);
    }
    while ( a4 != v5 );
LABEL_22:
    *(_DWORD *)(a1 + 8) += v8;
  }
}
