_QWORD *__fastcall sub_4C1E00(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 i; // rbx
  __m128i v9; // xmm0
  __int64 v10; // rbx
  const __m128i *v11; // rcx
  const __m128i *v12; // r14
  __int64 v13; // rdi
  void *v14; // rax
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
      v7 = qalloc_or_throw(96 * v5);
      *(_QWORD *)(v4 + 16) = v5;
      *(_QWORD *)v4 = v7;
      for ( i = v7; ; i = *(_QWORD *)v4 )
      {
        v10 = 96 * v6 + i;
        v11 = (const __m128i *)(*a3 + 96 * v6);
        v12 = v11;
        *(_QWORD *)(v10 + 16) = 0;
        *(_QWORD *)(v10 + 24) = -1;
        *(_QWORD *)(v10 + 32) = 0;
        *(_QWORD *)(v10 + 40) = 0;
        *(_OWORD *)v10 = 0;
        if ( (const __m128i *)v10 != v11 )
        {
          *(__m128i *)v10 = _mm_loadu_si128(v11);
          *(__m128i *)(v10 + 16) = _mm_loadu_si128(v11 + 1);
          *(_DWORD *)(v10 + 32) = v11[2].m128i_i32[0];
          v13 = v11[2].m128i_i64[1];
          if ( v13 )
            *(_QWORD *)(v10 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        *(_QWORD *)(v10 + 48) = 0;
        *(_OWORD *)(v10 + 56) = 0;
        if ( v12[3].m128i_i64[1] )
        {
          n = v12[3].m128i_u64[1];
          v14 = (void *)qalloc_or_throw(n);
          *(_QWORD *)(v10 + 48) = v14;
          *(_QWORD *)(v10 + 64) = n;
          memcpy(v14, (const void *)v12[3].m128i_i64[0], n);
          *(_QWORD *)(v10 + 56) = n;
        }
        v9 = _mm_loadu_si128((const __m128i *)((char *)v12 + 72));
        ++v6;
        *(_DWORD *)(v10 + 88) = v12[5].m128i_i32[2];
        *(__m128i *)(v10 + 72) = v9;
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
