char *__fastcall sub_4AB080(char *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r13
  const char *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 i; // rbx
  __int64 v10; // rbx
  const __m128i *v11; // rcx
  const __m128i *v12; // r14
  __int64 v13; // rdi
  void *v14; // rax
  size_t n; // [rsp+8h] [rbp-50h]

  if ( *((_QWORD *)a1 + 2) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(_QWORD *)a1, a2, 24);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 < a2 )
  {
    do
    {
      while ( 1 )
      {
        v4 = a1;
        v5 = *(_QWORD *)a1 + 24 * v3;
        *(_QWORD *)v5 = 0;
        *(_OWORD *)(v5 + 8) = 0;
        v6 = a3[1];
        if ( v6 )
          break;
        if ( a2 == ++v3 )
          goto LABEL_16;
      }
      v7 = 0;
      v8 = qalloc_or_throw(80 * v6, a1);
      *(_QWORD *)(v5 + 16) = v6;
      *(_QWORD *)v5 = v8;
      for ( i = v8; ; i = *(_QWORD *)v5 )
      {
        v10 = 80 * v7 + i;
        v11 = (const __m128i *)(*a3 + 80 * v7);
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
          v14 = (void *)qalloc_or_throw(n, v4);
          *(_QWORD *)(v10 + 48) = v14;
          *(_QWORD *)(v10 + 64) = n;
          v4 = (const char *)v12[3].m128i_i64[0];
          memcpy(v14, v4, n);
          *(_QWORD *)(v10 + 56) = n;
        }
        ++v7;
        *(_DWORD *)(v10 + 72) = v12[4].m128i_i32[2];
        *(_DWORD *)(v10 + 76) = v12[4].m128i_i32[3];
        if ( v6 == v7 )
          break;
      }
      *(_QWORD *)(v5 + 8) = v6;
      ++v3;
    }
    while ( a2 != v3 );
  }
LABEL_16:
  *((_QWORD *)a1 + 1) = a2;
  return a1;
}

