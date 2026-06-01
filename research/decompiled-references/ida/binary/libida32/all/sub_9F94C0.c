char **__fastcall sub_9F94C0(char **a1, char **a2)
{
  const __m128i *v3; // r14
  const __m128i *v4; // rbp
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  __m128i *v9; // rbx
  const __m128i *v10; // r15
  __m128i v11; // xmm0
  __int64 m128i_i64; // rsi
  __int64 v13; // rdi
  const __m128i *j; // rbx
  char *v16; // r14
  __int64 v17; // rax
  __m128i *v18; // r15
  __int64 v19; // r14
  __m128i v20; // xmm1
  __int64 v21; // rsi
  __int64 v22; // rdi
  char *k; // rbp
  const __m128i *v24; // rbp
  const __m128i *v25; // rbx
  char *i; // rbp
  __int64 v27; // r15
  __m128i *v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // r14
  __m128i v31; // xmm2
  __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // [rsp+4h] [rbp-44h]
  __int64 v35; // [rsp+8h] [rbp-40h]
  unsigned __int64 v36; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = (const __m128i *)*a2;
    v4 = (const __m128i *)(a2 + 2);
    v6 = *a1;
    v7 = *((unsigned int *)a1 + 2);
    if ( a2 + 2 == (char **)*a2 )
    {
      v34 = *((_DWORD *)a2 + 2);
      v8 = v34;
      if ( v34 > v7 )
      {
        if ( v34 > (unsigned __int64)*((unsigned int *)a1 + 3) )
        {
          for ( i = &v6[192 * v7]; i != v6; sub_9E5FF0((__int64)(i + 16)) )
            i -= 192;
          *((_DWORD *)a1 + 2) = 0;
          sub_9F4860((__int64 *)a1, v34);
          v3 = (const __m128i *)*a2;
          v8 = *((unsigned int *)a2 + 2);
          v7 = 0;
          v6 = *a1;
          v4 = (const __m128i *)*a2;
        }
        else if ( *((_DWORD *)a1 + 2) )
        {
          v27 = (__int64)(a2 + 4);
          v28 = (__m128i *)(v6 + 16);
          v29 = 192 * v7;
          v7 = v29;
          v30 = (__int64)&a2[(unsigned __int64)v29 / 8 + 4];
          do
          {
            v31 = _mm_loadu_si128((const __m128i *)(v27 - 16));
            v32 = v27;
            v33 = (__int64)v28;
            v36 = v7;
            v27 += 192;
            v28 += 12;
            v28[-13] = v31;
            sub_9F9310(v33, v32);
            v7 = v36;
          }
          while ( v27 != v30 );
          v3 = (const __m128i *)*a2;
          v8 = *((unsigned int *)a2 + 2);
          v6 = *a1;
          v4 = (const __m128i *)&(*a2)[v29];
        }
        v9 = (__m128i *)&v6[v7];
        v10 = &v3[12 * v8];
        if ( v10 != v4 )
        {
          do
          {
            v11 = _mm_loadu_si128(v4);
            m128i_i64 = (__int64)v4[1].m128i_i64;
            v13 = (__int64)v9[1].m128i_i64;
            v4 += 12;
            v9 += 12;
            v9[-12] = v11;
            sub_9E6510(v13, m128i_i64);
          }
          while ( v10 != v4 );
          v3 = (const __m128i *)*a2;
        }
        *((_DWORD *)a1 + 2) = v34;
        for ( j = &v3[12 * *((unsigned int *)a2 + 2)]; j != v3; sub_9E5FF0((__int64)j[1].m128i_i64) )
          j -= 12;
LABEL_11:
        *((_DWORD *)a2 + 2) = 0;
        return a1;
      }
      v17 = (__int64)*a1;
      if ( v34 )
      {
        v18 = (__m128i *)(v6 + 16);
        v35 = 192LL * v34;
        v19 = (__int64)(a2 + 4);
        do
        {
          v20 = _mm_loadu_si128((const __m128i *)(v19 - 16));
          v21 = v19;
          v22 = (__int64)v18;
          v18 += 12;
          v19 += 192;
          v18[-13] = v20;
          sub_9F9310(v22, v21);
        }
        while ( &v6[v35 + 16] != (char *)v18 );
        v17 = (__int64)*a1;
        v7 = *((unsigned int *)a1 + 2);
        v6 += v35;
      }
      for ( k = (char *)(v17 + 192 * v7); v6 != k; sub_9E5FF0((__int64)(k + 16)) )
        k -= 192;
      v24 = (const __m128i *)*a2;
      *((_DWORD *)a1 + 2) = v34;
      v25 = &v24[12 * *((unsigned int *)a2 + 2)];
      if ( v24 == v25 )
        goto LABEL_11;
      do
      {
        v25 -= 12;
        sub_9E5FF0((__int64)v25[1].m128i_i64);
      }
      while ( v24 != v25 );
      *((_DWORD *)a2 + 2) = 0;
    }
    else
    {
      v16 = &v6[192 * v7];
      if ( v16 != v6 )
      {
        do
        {
          v16 -= 192;
          sub_9E5FF0((__int64)(v16 + 16));
        }
        while ( v16 != v6 );
        v6 = *a1;
      }
      if ( v6 != (char *)(a1 + 2) )
        free(v6);
      *a1 = *a2;
      *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
      *a2 = (char *)v4;
      a2[1] = nullptr;
    }
  }
  return a1;
}

