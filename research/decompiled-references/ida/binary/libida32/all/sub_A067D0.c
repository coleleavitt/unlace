__int64 __fastcall sub_A067D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  __m128i *v5; // rbp
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rcx
  __m128i *i; // r14
  const __m128i *v10; // rdi
  const __m128i *v11; // r14
  __int8 *v12; // r13
  const __m128i *j; // rbp
  __m128i v14; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v16; // rdi
  char v17; // al
  __m128i *v19; // rcx
  __m128i *v20; // r13
  __m128i *v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *(__m128i **)a1;
    v6 = *(_DWORD *)(a2 + 8);
    if ( v3 > v4 )
    {
      v7 = 136 * v4;
      v8 = 136 * v4;
      if ( v3 <= *(unsigned int *)(a1 + 12) )
      {
        v10 = *(const __m128i **)a2;
        v11 = (const __m128i *)(*(_QWORD *)a2 + v7);
        if ( v4 )
        {
          v22 = 136 * v4;
          sub_A066B0(v10, (__int64)v11, v5);
          v10 = *(const __m128i **)a2;
          v8 = v22;
          v3 = *(unsigned int *)(a2 + 8);
          v5 = *(__m128i **)a1;
          v11 = (const __m128i *)(*(_QWORD *)a2 + v22);
        }
      }
      else
      {
        for ( i = (__m128i *)((char *)v5 + v7); i != v5; sub_9E5FA0((__int64)i[1].m128i_i64) )
          i = (__m128i *)((char *)i - 136);
        *(_DWORD *)(a1 + 8) = 0;
        sub_9F1890(a1, v3);
        v10 = *(const __m128i **)a2;
        v3 = *(unsigned int *)(a2 + 8);
        v8 = 0;
        v5 = *(__m128i **)a1;
        v11 = *(const __m128i **)a2;
      }
      v12 = &v5->m128i_i8[v8];
      for ( j = (const __m128i *)((char *)v10 + 136 * v3); j != v11; *(v12 - 8) = v11[-1].m128i_i8[8] & 2 | v17 & 0xFD )
      {
        v14 = _mm_loadu_si128(v11);
        m128i_i64 = (__int64)v11[1].m128i_i64;
        v16 = (__int64)(v12 + 16);
        v11 = (const __m128i *)((char *)v11 + 136);
        v12 += 136;
        *(__m128i *)(v12 - 136) = v14;
        sub_9EDF30(v16, m128i_i64);
        v17 = v11[-1].m128i_i8[8] & 1 | *(v12 - 8) & 0xFE;
        *(v12 - 8) = v17;
      }
LABEL_9:
      *(_DWORD *)(a1 + 8) = v6;
      return a1;
    }
    v19 = *(__m128i **)a1;
    if ( *(_DWORD *)(a2 + 8) )
    {
      v21 = sub_A066B0(*(const __m128i **)a2, *(_QWORD *)a2 + 136 * v3, v5);
      v19 = *(__m128i **)a1;
      v5 = v21;
      v4 = *(unsigned int *)(a1 + 8);
    }
    v20 = (__m128i *)((char *)v19 + 136 * v4);
    if ( v5 == v20 )
      goto LABEL_9;
    do
    {
      v20 = (__m128i *)((char *)v20 - 136);
      sub_9E5FA0((__int64)v20[1].m128i_i64);
    }
    while ( v5 != v20 );
    *(_DWORD *)(a1 + 8) = v6;
  }
  return a1;
}

