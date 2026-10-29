__int64 __fastcall sub_A30B80(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rdx
  __m128i *v5; // rbx
  int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // rcx
  __m128i *i; // rbp
  const __m128i *v10; // rdi
  const __m128i *v11; // rbp
  __m128i *v12; // rbx
  const __m128i *j; // r13
  __int64 m128i_i64; // rsi
  __m128i *v16; // rax
  __m128i *v17; // rbp
  __m128i *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *(__m128i **)a1;
    v6 = *(_DWORD *)(a2 + 8);
    if ( v3 > v4 )
    {
      v7 = 20 * v4;
      v8 = 320 * v4;
      if ( v3 <= *(unsigned int *)(a1 + 12) )
      {
        v10 = *(const __m128i **)a2;
        v11 = (const __m128i *)(*(_QWORD *)a2 + v7 * 16);
        if ( v4 )
        {
          v19 = 320 * v4;
          sub_A30850(v10, (__int64)v11, v5);
          v10 = *(const __m128i **)a2;
          v8 = v19;
          v3 = *(unsigned int *)(a2 + 8);
          v5 = *(__m128i **)a1;
          v11 = (const __m128i *)(*(_QWORD *)a2 + v19);
        }
      }
      else
      {
        for ( i = &v5[v7]; i != v5; sub_A1FDC0((__int64)i[1].m128i_i64) )
          i -= 20;
        *(_DWORD *)(a1 + 8) = 0;
        sub_A17440(a1, v3);
        v10 = *(const __m128i **)a2;
        v3 = *(unsigned int *)(a2 + 8);
        v8 = 0;
        v5 = *(__m128i **)a1;
        v11 = *(const __m128i **)a2;
      }
      v12 = (__m128i *)((char *)v5 + v8);
      for ( j = &v10[20 * v3]; j != v11; v12 += 20 )
      {
        *v12 = _mm_loadu_si128(v11);
        sub_A13DB0((__int64)v12[1].m128i_i64, (__int64)v11[1].m128i_i64);
        m128i_i64 = (__int64)v11[12].m128i_i64;
        v11 += 20;
        sub_A140E0((__int64)v12[12].m128i_i64, m128i_i64);
      }
LABEL_9:
      *(_DWORD *)(a1 + 8) = v6;
      return a1;
    }
    v16 = *(__m128i **)a1;
    if ( *(_DWORD *)(a2 + 8) )
    {
      v18 = sub_A30850(*(const __m128i **)a2, *(_QWORD *)a2 + 320 * v3, v5);
      v4 = *(unsigned int *)(a1 + 8);
      v5 = v18;
      v16 = *(__m128i **)a1;
    }
    v17 = &v16[20 * v4];
    if ( v5 == v17 )
      goto LABEL_9;
    do
    {
      v17 -= 20;
      sub_A1FDC0((__int64)v17[1].m128i_i64);
    }
    while ( v5 != v17 );
    *(_DWORD *)(a1 + 8) = v3;
  }
  return a1;
}
