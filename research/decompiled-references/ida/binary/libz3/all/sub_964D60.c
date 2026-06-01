__int64 __fastcall sub_964D60(
        const __m128i *src,
        const __m128i *a2,
        const __m128i *a3,
        const __m128i *a4,
        __m128i *a5,
        __int64 **a6)
{
  const __m128i *v6; // r10
  const __m128i *v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // r11
  unsigned int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v15; // r13
  int v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // esi
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 *i; // rax
  __int64 v24; // rdx
  unsigned int v25; // r13d
  __int64 v26; // r9
  __int64 v27; // rbp
  __int64 v28; // r14
  int v29; // esi
  int v30; // eax
  int v31; // edx
  int v32; // eax
  int v33; // esi
  __int64 v34; // rax
  __int64 *v35; // rdi
  __int64 *j; // rax
  __int64 v37; // rdx
  __m128i v38; // xmm0
  signed __int64 v39; // rbp
  __m128i *v40; // r8
  unsigned int v42; // eax
  __m128i v43; // xmm0
  __int64 *v44; // rax
  unsigned __int64 v45; // rdx
  __int64 *v46; // rax
  unsigned __int64 v47; // rdx

  v6 = src;
  v7 = a3;
  if ( src == a2 || a3 == a4 )
    goto LABEL_23;
  v8 = *((unsigned int *)a6 + 2);
  v9 = *a6;
  v10 = v8 - 1;
  v11 = 32 * v8;
  v12 = (__int64)&(*a6)[(unsigned __int64)v11 / 8];
  do
  {
    v13 = v7->m128i_i64[0];
    v14 = v7->m128i_i64[1];
    v15 = v7[1].m128i_i64[0];
    v16 = *(_DWORD *)(v7->m128i_i64[0] + 12);
    v17 = (*(_DWORD *)(v14 + 12) - v16) ^ (v16 << 8);
    v18 = (v17 - v16 + (v17 ^ ((v16 - v17) << 16))) ^ ((v16 - v17) << 10);
    v19 = (*(_DWORD *)(v15 + 12) - v18) ^ (v18 << 8);
    v20 = (v19 - v18 + (v19 ^ ((v18 - v19) << 16))) ^ ((v18 - v19) << 10);
    v21 = 32LL * (v20 & v10);
    v22 = &v9[(unsigned __int64)v21 / 8];
    if ( v21 != v11 )
    {
      for ( i = &v9[(unsigned __int64)v21 / 8]; (__int64 *)v12 != i; i += 4 )
      {
        v24 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *((_DWORD *)i + 7) == v20 && v13 == v24 && v14 == i[1] && v15 == i[2] )
          {
            v25 = *((_DWORD *)i + 6);
            goto LABEL_12;
          }
        }
        else if ( !v24 )
        {
          goto LABEL_11;
        }
      }
    }
    if ( v9 == v22 )
    {
LABEL_11:
      v25 = 0;
      goto LABEL_12;
    }
    v44 = v9;
    while ( 1 )
    {
      v45 = *v44;
      if ( (unsigned __int64)*v44 > 1 )
        break;
      if ( !v45 )
        goto LABEL_11;
LABEL_40:
      v44 += 4;
      if ( v22 == v44 )
        goto LABEL_11;
    }
    if ( *((_DWORD *)v44 + 7) != v20 || v13 != v45 || v14 != v44[1] || v15 != v44[2] )
      goto LABEL_40;
    v25 = *((_DWORD *)v44 + 6);
LABEL_12:
    v26 = v6->m128i_i64[0];
    v27 = v6->m128i_i64[1];
    v28 = v6[1].m128i_i64[0];
    v29 = *(_DWORD *)(v6->m128i_i64[0] + 12);
    v30 = (*(_DWORD *)(v27 + 12) - v29) ^ (v29 << 8);
    v31 = ((v30 ^ ((v29 - v30) << 16)) + v30 - v29) ^ ((v29 - v30) << 10);
    v32 = (*(_DWORD *)(v28 + 12) - v31) ^ (v31 << 8);
    v33 = ((v32 ^ ((v31 - v32) << 16)) + v32 - v31) ^ ((v31 - v32) << 10);
    v34 = 32LL * (v33 & v10);
    v35 = &v9[(unsigned __int64)v34 / 8];
    if ( v11 != v34 )
    {
      for ( j = &v9[(unsigned __int64)v34 / 8]; (__int64 *)v12 != j; j += 4 )
      {
        v37 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *((_DWORD *)j + 7) == v33 && v26 == v37 && v27 == j[1] && v28 == j[2] )
          {
            v42 = *((_DWORD *)j + 6);
            goto LABEL_34;
          }
        }
        else if ( !v37 )
        {
          goto LABEL_19;
        }
      }
    }
    if ( v9 == v35 )
    {
LABEL_19:
      if ( !v25 )
        goto LABEL_35;
      goto LABEL_20;
    }
    v46 = v9;
    while ( 2 )
    {
      v47 = *v46;
      if ( (unsigned __int64)*v46 <= 1 )
      {
        if ( !v47 )
          goto LABEL_19;
        goto LABEL_48;
      }
      if ( *((_DWORD *)v46 + 7) != v33 || v26 != v47 || v27 != v46[1] || v28 != v46[2] )
      {
LABEL_48:
        v46 += 4;
        if ( v35 == v46 )
          goto LABEL_19;
        continue;
      }
      break;
    }
    v42 = *((_DWORD *)v46 + 6);
LABEL_34:
    if ( v42 >= v25 )
    {
LABEL_35:
      v43 = _mm_loadu_si128(v6);
      v6 = (const __m128i *)((char *)v6 + 24);
      *a5 = v43;
      a5[1].m128i_i64[0] = v6[-1].m128i_i64[1];
      goto LABEL_21;
    }
LABEL_20:
    v38 = _mm_loadu_si128(v7);
    v7 = (const __m128i *)((char *)v7 + 24);
    *a5 = v38;
    a5[1].m128i_i64[0] = v7[-1].m128i_i64[1];
LABEL_21:
    a5 = (__m128i *)((char *)a5 + 24);
  }
  while ( v6 != a2 && v7 != a4 );
LABEL_23:
  v39 = (char *)a2 - (char *)v6;
  if ( (char *)a2 - (char *)v6 <= 24 )
  {
    if ( (char *)a2 - (char *)v6 == 24 )
    {
      *a5 = _mm_loadu_si128(v6);
      a5[1].m128i_i64[0] = v6[1].m128i_i64[0];
    }
  }
  else
  {
    a5 = (__m128i *)memmove(a5, v6, (char *)a2 - (char *)v6);
  }
  v40 = (__m128i *)((char *)a5 + v39);
  if ( (char *)a4 - (char *)v7 <= 24 )
  {
    if ( (char *)a4 - (char *)v7 == 24 )
    {
      *v40 = _mm_loadu_si128(v7);
      v40[1].m128i_i64[0] = v7[1].m128i_i64[0];
    }
  }
  else
  {
    v40 = (__m128i *)memmove(v40, v7, (char *)a4 - (char *)v7);
  }
  return (__int64)v40 + (char *)a4 - (char *)v7;
}

