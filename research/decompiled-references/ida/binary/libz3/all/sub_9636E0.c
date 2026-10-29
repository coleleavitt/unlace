void __fastcall sub_9636E0(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11)
{
  const __m128i *v11; // r11
  const __m128i *v12; // rbp
  __m128i *v13; // rbx
  signed __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r12
  unsigned int v18; // r15d
  __int64 v19; // r14
  __int64 v20; // rcx
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  int v23; // r9d
  int v24; // eax
  int v25; // esi
  __int64 v26; // rax
  __int64 *v27; // r9
  __int64 *i; // rax
  __int64 v29; // rdx
  unsigned int v30; // r9d
  int v31; // edx
  int v32; // eax
  int v33; // esi
  __int64 v34; // rax
  __int64 *v35; // r10
  __int64 *j; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  char *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  const __m128i *v47; // [rsp+8h] [rbp-40h]

  v11 = (const __m128i *)a6;
  v12 = (const __m128i *)a2;
  v13 = (__m128i *)a1;
  if ( a4 > a5 )
  {
    v39 = (char *)a3 - (char *)a2;
    v40 = ((char *)a3 - (char *)a2) >> 4;
    if ( v39 <= 0 )
    {
      v43 = a6;
    }
    else
    {
      v41 = 16 * v40;
      v42 = 0;
      do
      {
        *(__m128i *)&a6[v42] = _mm_loadu_si128((const __m128i *)&a2[v42 / 8]);
        v42 += 16LL;
      }
      while ( v42 != v41 );
      v43 = &a6[v39];
    }
    sub_9633C0(a1, a2, a6, v43, a3, (__int64 **)a11);
    return;
  }
  v14 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 0 )
    return;
  v15 = 0;
  do
  {
    *(__m128i *)&a6[v15 * 8] = _mm_loadu_si128((const __m128i *)&a1[v15]);
    v15 += 2;
  }
  while ( 2 * (((char *)a2 - (char *)a1) >> 4) != v15 );
  v47 = (const __m128i *)&a6[v14];
  if ( a6 == &a6[v14] )
    return;
  if ( a2 == (unsigned __int64 *)a3 )
  {
LABEL_26:
    if ( v11 != v47 && (char *)v47 - (char *)v11 > 0 )
    {
      v38 = 0;
      do
      {
        v13[v38 / 0x10] = _mm_loadu_si128(&v11[v38 / 0x10]);
        v38 += 16LL;
      }
      while ( v38 != (char *)v47 - (char *)v11 );
    }
    return;
  }
  v16 = *(unsigned int *)(a11 + 8);
  v17 = *(__int64 **)a11;
  v18 = v16 - 1;
  v19 = 24 * v16;
  v20 = *(_QWORD *)a11 + 24 * v16;
  while ( 1 )
  {
    v21 = (__m128)_mm_loadu_si128(v12);
    v22 = (__m128)_mm_loadu_si128(v11);
    a9 = _mm_movehl_ps(a9, v21);
    a10 = _mm_movehl_ps(a10, v22);
    v23 = *(_DWORD *)(v21.m128_u64[0] + 12);
    v24 = (*(_DWORD *)(a9.m128_u64[0] + 12) - v23) ^ (v23 << 8);
    v25 = (v24 - v23 + (v24 ^ ((v23 - v24) << 16))) ^ ((v23 - v24) << 10);
    v26 = 24LL * (v18 & v25);
    v27 = &v17[(unsigned __int64)v26 / 8];
    if ( v26 != v19 )
    {
      for ( i = &v17[(unsigned __int64)v26 / 8]; (__int64 *)v20 != i; i += 3 )
      {
        v29 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *((_DWORD *)i + 5) == v25 && v21.m128_u64[0] == v29 && a9.m128_u64[0] == i[1] )
          {
LABEL_41:
            v30 = *((_DWORD *)i + 4);
            goto LABEL_16;
          }
        }
        else if ( !v29 )
        {
          goto LABEL_15;
        }
      }
    }
    if ( v17 != v27 )
    {
      for ( i = v17; v27 != i; i += 3 )
      {
        v44 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *((_DWORD *)i + 5) == v25 && v21.m128_u64[0] == v44 && a9.m128_u64[0] == i[1] )
            goto LABEL_41;
        }
        else if ( !v44 )
        {
          break;
        }
      }
    }
LABEL_15:
    v30 = 0;
LABEL_16:
    v31 = *(_DWORD *)(v22.m128_u64[0] + 12);
    v32 = (*(_DWORD *)(a10.m128_u64[0] + 12) - v31) ^ (v31 << 8);
    v33 = ((v32 ^ ((v31 - v32) << 16)) + v32 - v31) ^ ((v31 - v32) << 10);
    v34 = 24LL * (v33 & v18);
    v35 = &v17[(unsigned __int64)v34 / 8];
    if ( v19 != v34 )
      break;
LABEL_50:
    if ( v17 != v35 )
    {
      for ( j = v17; v35 != j; j += 3 )
      {
        v45 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *((_DWORD *)j + 5) == v33 && v22.m128_u64[0] == v45 && a10.m128_u64[0] == j[1] )
            goto LABEL_37;
        }
        else if ( !v45 )
        {
          break;
        }
      }
    }
LABEL_23:
    if ( v30 )
      goto LABEL_24;
LABEL_38:
    ++v11;
    *v13++ = (__m128i)v22;
    if ( v11 == v47 )
      return;
LABEL_25:
    if ( a3 == v12 )
      goto LABEL_26;
  }
  j = &v17[(unsigned __int64)v34 / 8];
  while ( 1 )
  {
    v37 = *j;
    if ( (unsigned __int64)*j > 1 )
      break;
    if ( !v37 )
      goto LABEL_23;
LABEL_20:
    j += 3;
    if ( (__int64 *)v20 == j )
      goto LABEL_50;
  }
  if ( *((_DWORD *)j + 5) != v33 || v22.m128_u64[0] != v37 || a10.m128_u64[0] != j[1] )
    goto LABEL_20;
LABEL_37:
  if ( *((_DWORD *)j + 4) >= v30 )
    goto LABEL_38;
LABEL_24:
  *v13 = (__m128i)v21;
  ++v12;
  ++v13;
  if ( v11 != v47 )
    goto LABEL_25;
}

