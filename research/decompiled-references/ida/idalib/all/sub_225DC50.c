__m128i *__fastcall sub_225DC50(__int64 a1, __m128i *a2)
{
  __m128i *v3; // rbx
  __int64 v4; // rax
  __m128i *v5; // rcx
  unsigned __int64 v6; // rdx
  __m128i *result; // rax
  __m128i *v8; // rcx
  __int8 v9; // dl
  __m128i *v10; // r14
  __m128i *v11; // rax
  const __m128i *v12; // rdx
  __m128i *v13; // r12
  __m128i *v14; // rbp
  const __m128i *v15; // rax
  __int64 m128i_i64; // rcx
  unsigned __int64 v17; // rdi
  __m128i *v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rsi
  const __m128i *v21; // rsi
  __int64 v22; // r13
  void *v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  char v26; // [rsp+Fh] [rbp-59h]
  unsigned __int64 v27; // [rsp+10h] [rbp-58h]
  int v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = a2;
  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(__m128i **)a1;
  v6 = v4 + 1;
  result = (__m128i *)(*(_QWORD *)a1 + 72 * v4);
  if ( v6 > *(unsigned int *)(a1 + 12) )
  {
    v27 = -1;
    v26 = 0;
    if ( v5 <= a2 && result > a2 )
    {
      v26 = 1;
      v27 = 0x8E38E38E38E38E39LL * (((char *)a2 - (char *)v5) >> 3);
    }
    v10 = (__m128i *)(a1 + 16);
    v11 = (__m128i *)sub_2237400(a1, (void *)(a1 + 16), v6, 72, v29);
    v12 = *(const __m128i **)a1;
    v13 = v11;
    v14 = (__m128i *)(*(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v14 )
    {
      v15 = v12 + 1;
      m128i_i64 = (__int64)v12[3].m128i_i64;
      v17 = (unsigned __int64)&v12[5].m128i_u64[1] + (((char *)v14 - (char *)v12 - 72) & 0xFFFFFFFFFFFFFFF8LL);
      v18 = v13;
      do
      {
        v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
        v21 = (const __m128i *)v15[-1].m128i_i64[0];
        if ( v15 == v21 )
        {
          v18[1] = _mm_loadu_si128(v15);
        }
        else
        {
          v18->m128i_i64[0] = (__int64)v21;
          v18[1].m128i_i64[0] = v15->m128i_i64[0];
        }
        v18->m128i_i64[1] = v15[-1].m128i_i64[1];
        v15[-1].m128i_i64[0] = (__int64)v15;
        v15[-1].m128i_i64[1] = 0;
        v15->m128i_i8[0] = 0;
        v18[2].m128i_i64[0] = (__int64)v18[3].m128i_i64;
        v19 = v15[1].m128i_i64[0];
        if ( v19 == m128i_i64 )
        {
          v18[3] = _mm_loadu_si128(v15 + 2);
        }
        else
        {
          v18[2].m128i_i64[0] = v19;
          v18[3].m128i_i64[0] = v15[2].m128i_i64[0];
        }
        v20 = v15[1].m128i_i64[1];
        v15 = (const __m128i *)((char *)v15 + 72);
        v18 = (__m128i *)((char *)v18 + 72);
        v18[-2].m128i_i64[0] = v20;
        LOBYTE(v20) = v15[-2].m128i_i8[8];
        v15[-4].m128i_i64[1] = m128i_i64;
        m128i_i64 += 72;
        v15[-3].m128i_i64[0] = 0;
        v15[-3].m128i_i8[8] = 0;
        v18[-1].m128i_i8[8] = v20;
      }
      while ( (const __m128i *)v17 != v15 );
      v14 = *(__m128i **)a1;
      v22 = *(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8);
      if ( v22 != *(_QWORD *)a1 )
      {
        do
        {
          while ( 1 )
          {
            v22 -= 72;
            v23 = *(void **)(v22 + 32);
            if ( v23 != (void *)(v22 + 48) )
              operator delete(v23);
            if ( *(_QWORD *)v22 == v22 + 16 )
              break;
            operator delete(*(void **)v22);
            if ( (__m128i *)v22 == v14 )
              goto LABEL_26;
          }
        }
        while ( (__m128i *)v22 != v14 );
LABEL_26:
        v14 = *(__m128i **)a1;
      }
    }
    v24 = v29[0];
    if ( v14 != v10 )
    {
      v28 = v29[0];
      free(v14);
      v24 = v28;
    }
    *(_DWORD *)(a1 + 12) = v24;
    v25 = *(unsigned int *)(a1 + 8);
    *(_QWORD *)a1 = v13;
    result = (__m128i *)((char *)v13 + 72 * v25);
    if ( v26 )
      v3 = (__m128i *)((char *)v13 + 72 * v27);
  }
  result->m128i_i64[0] = (__int64)result[1].m128i_i64;
  if ( (__m128i *)v3->m128i_i64[0] == &v3[1] )
  {
    result[1] = _mm_loadu_si128(v3 + 1);
  }
  else
  {
    result->m128i_i64[0] = v3->m128i_i64[0];
    result[1].m128i_i64[0] = v3[1].m128i_i64[0];
  }
  result->m128i_i64[1] = v3->m128i_i64[1];
  v3->m128i_i64[0] = (__int64)v3[1].m128i_i64;
  v3->m128i_i64[1] = 0;
  v3[1].m128i_i8[0] = 0;
  result[2].m128i_i64[0] = (__int64)result[3].m128i_i64;
  v8 = (__m128i *)v3[2].m128i_i64[0];
  if ( v8 == &v3[3] )
  {
    result[3] = _mm_loadu_si128(v3 + 3);
  }
  else
  {
    result[2].m128i_i64[0] = (__int64)v8;
    result[3].m128i_i64[0] = v3[3].m128i_i64[0];
  }
  result[2].m128i_i64[1] = v3[2].m128i_i64[1];
  v3[2].m128i_i64[0] = (__int64)v3[3].m128i_i64;
  v9 = v3[4].m128i_i8[0];
  v3[2].m128i_i64[1] = 0;
  v3[3].m128i_i8[0] = 0;
  result[4].m128i_i8[0] = v9;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
