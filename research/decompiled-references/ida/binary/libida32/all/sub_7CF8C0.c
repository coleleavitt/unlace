char *__fastcall sub_7CF8C0(char *a1, unsigned __int64 a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 v4; // r12
  const char *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 i; // rbx
  __int64 v11; // rbx
  const __m128i *v12; // rcx
  __m128i v13; // xmm1
  __int64 *v14; // r13
  void *v15; // rax
  void *v16; // rax
  size_t na; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+8h] [rbp-50h]

  if ( *((_QWORD *)a1 + 2) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(_QWORD *)a1, a2, 24);
  v3 = 0;
  v4 = *((_QWORD *)a1 + 1);
  if ( v4 < a2 )
  {
    do
    {
      while ( 1 )
      {
        v5 = a1;
        v6 = *(_QWORD *)a1 + 24 * v4;
        *(_QWORD *)v6 = 0;
        *(_OWORD *)(v6 + 8) = v3;
        v7 = a3[1];
        if ( v7 )
          break;
        if ( a2 == ++v4 )
          goto LABEL_15;
      }
      v8 = 0;
      v9 = qalloc_or_throw(80 * v7, a1);
      *(_QWORD *)(v6 + 16) = v7;
      v3 = 0;
      *(_QWORD *)v6 = v9;
      for ( i = v9; ; i = *(_QWORD *)v6 )
      {
        v11 = 80 * v8 + i;
        v12 = (const __m128i *)(*a3 + 80 * v8);
        v13 = _mm_loadu_si128(v12);
        *(_QWORD *)(v11 + 16) = 0;
        v14 = (__int64 *)v12;
        *(_OWORD *)(v11 + 24) = v3;
        *(__m128i *)v11 = v13;
        if ( v12[1].m128i_i64[1] )
        {
          na = v12[1].m128i_u64[1];
          v15 = (void *)qalloc_or_throw(na, v5);
          *(_QWORD *)(v11 + 16) = v15;
          *(_QWORD *)(v11 + 32) = na;
          v5 = (const char *)v14[2];
          memcpy(v15, v5, na);
          v3 = 0;
          *(_QWORD *)(v11 + 24) = na;
        }
        *(_QWORD *)(v11 + 40) = 0;
        *(_OWORD *)(v11 + 48) = v3;
        if ( v14[6] )
        {
          n = v14[6];
          v16 = (void *)qalloc_or_throw(n, v5);
          *(_QWORD *)(v11 + 40) = v16;
          *(_QWORD *)(v11 + 56) = n;
          v5 = (const char *)v14[5];
          memcpy(v16, v5, n);
          v3 = 0;
          *(_QWORD *)(v11 + 48) = n;
        }
        ++v8;
        *(_QWORD *)(v11 + 64) = v14[8];
        *(_QWORD *)(v11 + 72) = v14[9];
        if ( v7 == v8 )
          break;
      }
      *(_QWORD *)(v6 + 8) = v7;
      ++v4;
    }
    while ( a2 != v4 );
  }
LABEL_15:
  *((_QWORD *)a1 + 1) = a2;
  return a1;
}

