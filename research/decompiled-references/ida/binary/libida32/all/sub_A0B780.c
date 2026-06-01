__int64 __fastcall sub_A0B780(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rdx
  __m128i *v5; // rbx
  int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rcx
  __m128i *i; // rbp
  const __m128i *v10; // rdi
  const __m128i *v11; // rbp
  __m128i *v12; // rbx
  const __m128i *j; // r14
  __m128i v14; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v16; // rdi
  __int64 v18; // rax
  __m128i *v19; // rbp
  __m128i *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *(__m128i **)a1;
    v6 = *(_DWORD *)(a2 + 8);
    if ( v3 > v4 )
    {
      v7 = 11 * v4;
      v8 = 176 * v4;
      if ( v3 <= *(unsigned int *)(a1 + 12) )
      {
        v10 = *(const __m128i **)a2;
        v11 = (const __m128i *)(*(_QWORD *)a2 + v7 * 16);
        if ( v4 )
        {
          v21 = 176 * v4;
          sub_A0B690(v10, (__int64)v11, v5);
          v10 = *(const __m128i **)a2;
          v8 = v21;
          v3 = *(unsigned int *)(a2 + 8);
          v5 = *(__m128i **)a1;
          v11 = (const __m128i *)(*(_QWORD *)a2 + v21);
        }
      }
      else
      {
        for ( i = &v5[v7]; i != v5; sub_9E5F30((__int64)i[1].m128i_i64) )
          i -= 11;
        *(_DWORD *)(a1 + 8) = 0;
        sub_9F7080((__int64 *)a1, v3);
        v10 = *(const __m128i **)a2;
        v3 = *(unsigned int *)(a2 + 8);
        v8 = 0;
        v5 = *(__m128i **)a1;
        v11 = *(const __m128i **)a2;
      }
      v12 = (__m128i *)((char *)v5 + v8);
      for ( j = &v10[11 * v3]; v11 != j; v12[-1].m128i_i64[1] = v11[-1].m128i_i64[1] )
      {
        v14 = _mm_loadu_si128(v11);
        m128i_i64 = (__int64)v11[1].m128i_i64;
        v16 = (__int64)v12[1].m128i_i64;
        v11 += 11;
        v12 += 11;
        v12[-11] = v14;
        sub_9FD0E0(v16, m128i_i64);
      }
LABEL_9:
      *(_DWORD *)(a1 + 8) = v6;
      return a1;
    }
    v18 = *(_QWORD *)a1;
    if ( *(_DWORD *)(a2 + 8) )
    {
      v20 = sub_A0B690(*(const __m128i **)a2, *(_QWORD *)a2 + 176 * v3, v5);
      v4 = *(unsigned int *)(a1 + 8);
      v5 = v20;
      v18 = *(_QWORD *)a1;
    }
    v19 = (__m128i *)(v18 + 176 * v4);
    if ( v5 == v19 )
      goto LABEL_9;
    do
    {
      v19 -= 11;
      sub_9E5F30((__int64)v19[1].m128i_i64);
    }
    while ( v5 != v19 );
    *(_DWORD *)(a1 + 8) = v3;
  }
  return a1;
}

