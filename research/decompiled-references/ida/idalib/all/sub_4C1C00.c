_QWORD *__fastcall sub_4C1C00(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 i; // rbx
  __int64 v9; // rbx
  const __m128i *v10; // rcx
  const __m128i *v11; // r14
  __int64 v12; // rdi
  void *v13; // rax
  size_t n; // [rsp+8h] [rbp-50h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 24);
  v3 = a1[1];
  if ( v3 < a2 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *a1 + 24 * v3;
        *(_QWORD *)v4 = 0;
        *(_OWORD *)(v4 + 8) = 0;
        v5 = a3[1];
        if ( v5 )
          break;
        if ( a2 == ++v3 )
          goto LABEL_16;
      }
      v6 = 0;
      v7 = qalloc_or_throw(88 * v5);
      *(_QWORD *)(v4 + 16) = v5;
      *(_QWORD *)v4 = v7;
      for ( i = v7; ; i = *(_QWORD *)v4 )
      {
        v9 = 88 * v6 + i;
        v10 = (const __m128i *)(*a3 + 88 * v6);
        v11 = v10;
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 24) = -1;
        *(_QWORD *)(v9 + 32) = 0;
        *(_QWORD *)(v9 + 40) = 0;
        *(_OWORD *)v9 = 0;
        if ( (const __m128i *)v9 != v10 )
        {
          *(__m128i *)v9 = _mm_loadu_si128(v10);
          *(__m128i *)(v9 + 16) = _mm_loadu_si128(v10 + 1);
          *(_DWORD *)(v9 + 32) = v10[2].m128i_i32[0];
          v12 = v10[2].m128i_i64[1];
          if ( v12 )
            *(_QWORD *)(v9 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        *(_QWORD *)(v9 + 48) = 0;
        *(_OWORD *)(v9 + 56) = 0;
        if ( v11[3].m128i_i64[1] )
        {
          n = v11[3].m128i_u64[1];
          v13 = (void *)qalloc_or_throw(n);
          *(_QWORD *)(v9 + 48) = v13;
          *(_QWORD *)(v9 + 64) = n;
          memcpy(v13, (const void *)v11[3].m128i_i64[0], n);
          *(_QWORD *)(v9 + 56) = n;
        }
        ++v6;
        *(_QWORD *)(v9 + 72) = v11[4].m128i_i64[1];
        *(_DWORD *)(v9 + 80) = v11[5].m128i_i32[0];
        if ( v5 == v6 )
          break;
      }
      *(_QWORD *)(v4 + 8) = v5;
      ++v3;
    }
    while ( a2 != v3 );
  }
LABEL_16:
  a1[1] = a2;
  return a1;
}
