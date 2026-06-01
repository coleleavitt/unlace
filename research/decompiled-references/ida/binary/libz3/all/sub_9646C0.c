__m128i *__fastcall sub_9646C0(
        const __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        const __m128i *a4,
        __m128i *a5,
        __int64 **a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const __m128i *v10; // r11
  const __m128i *v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rbp
  unsigned int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rcx
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  int v19; // r10d
  int v20; // eax
  int v21; // esi
  __int64 v22; // rax
  __int64 *v23; // r10
  __int64 *i; // rax
  __int64 v25; // rdx
  unsigned int v26; // r10d
  int v27; // edx
  int v28; // eax
  int v29; // esi
  __int64 v30; // rax
  __int64 *v31; // r12
  __int64 *j; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v37; // eax
  __int64 *v38; // rax
  unsigned __int64 v39; // rdx
  __int64 *v40; // rax
  unsigned __int64 v41; // rdx

  v10 = a3;
  v11 = a1;
  if ( a1 != a2 && a3 != a4 )
  {
    v12 = *((unsigned int *)a6 + 2);
    v13 = *a6;
    v14 = v12 - 1;
    v15 = 24 * v12;
    v16 = (__int64)&(*a6)[3 * v12];
    do
    {
LABEL_4:
      v17 = (__m128)_mm_loadu_si128(v10);
      v18 = (__m128)_mm_loadu_si128(v11);
      a9 = _mm_movehl_ps(a9, v17);
      a10 = _mm_movehl_ps(a10, v18);
      v19 = *(_DWORD *)(v17.m128_u64[0] + 12);
      v20 = (*(_DWORD *)(a9.m128_u64[0] + 12) - v19) ^ (v19 << 8);
      v21 = (v20 - v19 + (v20 ^ ((v19 - v20) << 16))) ^ ((v19 - v20) << 10);
      v22 = 24LL * (v14 & v21);
      v23 = &v13[(unsigned __int64)v22 / 8];
      if ( v22 != v15 )
      {
        for ( i = &v13[(unsigned __int64)v22 / 8]; (__int64 *)v16 != i; i += 3 )
        {
          v25 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *((_DWORD *)i + 5) == v21 && v17.m128_u64[0] == v25 && i[1] == a9.m128_u64[0] )
            {
              v26 = *((_DWORD *)i + 4);
              goto LABEL_12;
            }
          }
          else if ( !v25 )
          {
            goto LABEL_11;
          }
        }
      }
      if ( v13 == v23 )
      {
LABEL_11:
        v26 = 0;
        goto LABEL_12;
      }
      v38 = v13;
      while ( 1 )
      {
        v39 = *v38;
        if ( (unsigned __int64)*v38 > 1 )
          break;
        if ( !v39 )
          goto LABEL_11;
LABEL_42:
        v38 += 3;
        if ( v23 == v38 )
          goto LABEL_11;
      }
      if ( *((_DWORD *)v38 + 5) != v21 || v17.m128_u64[0] != v39 || v38[1] != a9.m128_u64[0] )
        goto LABEL_42;
      v26 = *((_DWORD *)v38 + 4);
LABEL_12:
      v27 = *(_DWORD *)(v18.m128_u64[0] + 12);
      v28 = (*(_DWORD *)(a10.m128_u64[0] + 12) - v27) ^ (v27 << 8);
      v29 = ((v28 ^ ((v27 - v28) << 16)) + v28 - v27) ^ ((v27 - v28) << 10);
      v30 = 24LL * (v29 & v14);
      v31 = &v13[(unsigned __int64)v30 / 8];
      if ( v15 != v30 )
      {
        for ( j = &v13[(unsigned __int64)v30 / 8]; (__int64 *)v16 != j; j += 3 )
        {
          v33 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *((_DWORD *)j + 5) == v29 && v33 == v18.m128_u64[0] && j[1] == a10.m128_u64[0] )
            {
              v37 = *((_DWORD *)j + 4);
              goto LABEL_34;
            }
          }
          else if ( !v33 )
          {
            goto LABEL_19;
          }
        }
      }
      if ( v13 == v31 )
      {
LABEL_19:
        if ( !v26 )
          goto LABEL_35;
        goto LABEL_20;
      }
      v40 = v13;
      while ( 1 )
      {
        v41 = *v40;
        if ( (unsigned __int64)*v40 > 1 )
          break;
        if ( !v41 )
          goto LABEL_19;
LABEL_50:
        v40 += 3;
        if ( v31 == v40 )
          goto LABEL_19;
      }
      if ( *((_DWORD *)v40 + 5) != v29 || v41 != v18.m128_u64[0] || v40[1] != a10.m128_u64[0] )
        goto LABEL_50;
      v37 = *((_DWORD *)v40 + 4);
LABEL_34:
      if ( v37 >= v26 )
      {
LABEL_35:
        *a5 = (__m128i)v18;
        ++v11;
        ++a5;
        if ( a2 == v11 || a4 == v10 )
          break;
        goto LABEL_4;
      }
LABEL_20:
      *a5 = (__m128i)v17;
      ++v10;
      ++a5;
    }
    while ( a4 != v10 && a2 != v11 );
  }
  if ( (char *)a2 - (char *)v11 > 0 )
  {
    v34 = 0;
    do
    {
      a5[v34] = _mm_loadu_si128(&v11[v34]);
      ++v34;
    }
    while ( a2 - v11 != v34 );
    a5 = (__m128i *)((char *)a5 + (char *)a2 - (char *)v11);
  }
  if ( (char *)a4 - (char *)v10 <= 0 )
    return a5;
  v35 = 0;
  do
  {
    a5[v35] = _mm_loadu_si128(&v10[v35]);
    ++v35;
  }
  while ( a4 - v10 != v35 );
  return (__m128i *)((char *)a5 + (char *)a4 - (char *)v10);
}

