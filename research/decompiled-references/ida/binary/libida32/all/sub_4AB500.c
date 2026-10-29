char *__fastcall sub_4AB500(char *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r13
  const char *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 i; // rbx
  __m128i v10; // xmm0
  __int64 v11; // rbx
  const __m128i *v12; // rcx
  const __m128i *v13; // r14
  __int64 v14; // rdi
  void *v15; // rax
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
      v8 = qalloc_or_throw(96 * v6, a1);
      *(_QWORD *)(v5 + 16) = v6;
      *(_QWORD *)v5 = v8;
      for ( i = v8; ; i = *(_QWORD *)v5 )
      {
        v11 = 96 * v7 + i;
        v12 = (const __m128i *)(*a3 + 96 * v7);
        v13 = v12;
        *(_QWORD *)(v11 + 16) = 0;
        *(_QWORD *)(v11 + 24) = -1;
        *(_QWORD *)(v11 + 32) = 0;
        *(_QWORD *)(v11 + 40) = 0;
        *(_OWORD *)v11 = 0;
        if ( (const __m128i *)v11 != v12 )
        {
          *(__m128i *)v11 = _mm_loadu_si128(v12);
          *(__m128i *)(v11 + 16) = _mm_loadu_si128(v12 + 1);
          *(_DWORD *)(v11 + 32) = v12[2].m128i_i32[0];
          v14 = v12[2].m128i_i64[1];
          if ( v14 )
            *(_QWORD *)(v11 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        *(_QWORD *)(v11 + 48) = 0;
        *(_OWORD *)(v11 + 56) = 0;
        if ( v13[3].m128i_i64[1] )
        {
          n = v13[3].m128i_u64[1];
          v15 = (void *)qalloc_or_throw(n, v4);
          *(_QWORD *)(v11 + 48) = v15;
          *(_QWORD *)(v11 + 64) = n;
          v4 = (const char *)v13[3].m128i_i64[0];
          memcpy(v15, v4, n);
          *(_QWORD *)(v11 + 56) = n;
        }
        v10 = _mm_loadu_si128((const __m128i *)((char *)v13 + 72));
        ++v7;
        *(_DWORD *)(v11 + 88) = v13[5].m128i_i32[2];
        *(__m128i *)(v11 + 72) = v10;
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

