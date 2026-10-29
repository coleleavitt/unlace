void __fastcall sub_9603B0(
        const __m128i *src,
        __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 **a7)
{
  const __m128i *v7; // rbp
  __m128i *v8; // rbx
  size_t v9; // r13
  __int64 v10; // rax
  __int64 *v11; // r10
  const __m128i *v12; // r11
  unsigned int v13; // r14d
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r12
  int v19; // edi
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // esi
  __int64 v24; // rax
  __int64 *v25; // rdi
  __int64 *k; // rax
  __int64 v27; // rdx
  unsigned int v28; // r12d
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // r13
  int v32; // esi
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // esi
  __int64 v37; // rax
  __int64 *v38; // rdi
  __int64 *m; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  signed __int64 v42; // rdx
  __m128i *v43; // rdi
  const __m128i *v44; // rsi
  size_t v45; // r13
  __m128i *v46; // r11
  __int64 v47; // rax
  const __m128i *v48; // r8
  __int64 *v49; // rbp
  const __m128i *v50; // r11
  unsigned int v51; // r15d
  __int64 v52; // r14
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // r10
  __int64 v56; // r12
  int v57; // edi
  int v58; // edx
  int v59; // eax
  int v60; // edx
  int v61; // esi
  __int64 v62; // rax
  __int64 *v63; // rdi
  __int64 *i; // rax
  __int64 v65; // rdx
  unsigned int v66; // r12d
  __int64 v67; // r9
  __int64 v68; // r10
  __int64 v69; // r13
  int v70; // esi
  int v71; // eax
  int v72; // edx
  int v73; // eax
  int v74; // esi
  __int64 v75; // rax
  __int64 *v76; // rdi
  __int64 *j; // rax
  __int64 v78; // rdx
  __m128i *v79; // rax
  unsigned int v80; // edx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __m128i v83; // xmm0
  __int64 v84; // rdx
  __int64 v85; // rdx
  __m128i v86; // xmm0
  __m128i *dest; // [rsp+0h] [rbp-48h]
  const __m128i *desta; // [rsp+0h] [rbp-48h]
  __m128i *v89; // [rsp+8h] [rbp-40h]
  const __m128i *v90; // [rsp+8h] [rbp-40h]

  v7 = a2;
  v8 = a3;
  dest = (__m128i *)src;
  if ( a4 > a5 )
  {
    v45 = (char *)a3 - (char *)a2;
    if ( (char *)a3 - (char *)a2 <= 24 )
    {
      if ( (char *)a3 - (char *)a2 == 24 )
      {
        v86 = _mm_loadu_si128(a2);
        v46 = (__m128i *)((char *)a6 + 24);
        *a6 = v86;
        a6[1].m128i_i64[0] = a2[1].m128i_i64[0];
        if ( a2 == src )
        {
          *(__m128i *)((char *)a3 - 24) = v86;
          a3[-1].m128i_i64[1] = a6[1].m128i_i64[0];
          return;
        }
      }
      else
      {
        v46 = (__m128i *)((char *)a6 + v45);
        if ( a2 == src )
          return;
      }
    }
    else
    {
      a6 = (__m128i *)memmove(a6, a2, (char *)a3 - (char *)a2);
      v46 = (__m128i *)((char *)a6 + v45);
      if ( a2 == src )
      {
        memmove(a2, a6, v45);
        return;
      }
    }
    if ( a6 == v46 )
      return;
    v47 = *((unsigned int *)a7 + 2);
    v48 = (__m128i *)((char *)a2 - 24);
    v49 = *a7;
    v50 = (__m128i *)((char *)v46 - 24);
    v90 = a6;
    v51 = v47 - 1;
    v52 = 32 * v47;
    v53 = (__int64)&(*a7)[4 * v47];
    while ( 1 )
    {
      v54 = v50->m128i_i64[0];
      v55 = v50->m128i_i64[1];
      v56 = v50[1].m128i_i64[0];
      v57 = *(_DWORD *)(v50->m128i_i64[0] + 12);
      v58 = (*(_DWORD *)(v55 + 12) - v57) ^ (v57 << 8);
      v59 = (v58 - v57 + (v58 ^ ((v57 - v58) << 16))) ^ ((v57 - v58) << 10);
      v60 = (*(_DWORD *)(v56 + 12) - v59) ^ (v59 << 8);
      v61 = (v60 - v59 + (v60 ^ ((v59 - v60) << 16))) ^ ((v59 - v60) << 10);
      v62 = 32LL * (v61 & v51);
      v63 = &v49[(unsigned __int64)v62 / 8];
      if ( v62 != v52 )
        break;
LABEL_69:
      if ( v49 != v63 )
      {
        for ( i = v49; v63 != i; i += 4 )
        {
          v82 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *((_DWORD *)i + 7) == v61 && v54 == v82 && v55 == i[1] && v56 == i[2] )
              goto LABEL_55;
          }
          else if ( !v82 )
          {
            break;
          }
        }
      }
LABEL_41:
      v66 = 0;
LABEL_42:
      v67 = v48->m128i_i64[0];
      v68 = v48->m128i_i64[1];
      v69 = v48[1].m128i_i64[0];
      v70 = *(_DWORD *)(v48->m128i_i64[0] + 12);
      v71 = (*(_DWORD *)(v68 + 12) - v70) ^ (v70 << 8);
      v72 = ((v71 ^ ((v70 - v71) << 16)) + v71 - v70) ^ ((v70 - v71) << 10);
      v73 = (*(_DWORD *)(v69 + 12) - v72) ^ (v72 << 8);
      v74 = ((v73 ^ ((v72 - v73) << 16)) + v73 - v72) ^ ((v72 - v73) << 10);
      v75 = 32LL * (v74 & v51);
      v76 = &v49[(unsigned __int64)v75 / 8];
      if ( v52 != v75 )
      {
        for ( j = &v49[(unsigned __int64)v75 / 8]; (__int64 *)v53 != j; j += 4 )
        {
          v78 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *((_DWORD *)j + 7) == v74 && v67 == v78 && v68 == j[1] && v69 == j[2] )
            {
LABEL_58:
              v80 = *((_DWORD *)j + 6);
              v79 = (__m128i *)((char *)v8 - 24);
              if ( v80 >= v66 )
                goto LABEL_59;
LABEL_50:
              *(__m128i *)((char *)v8 - 24) = _mm_loadu_si128(v48);
              v79[1].m128i_i64[0] = v48[1].m128i_i64[0];
              if ( dest != v48 )
              {
                v48 = (const __m128i *)((char *)v48 - 24);
                goto LABEL_52;
              }
              v42 = (char *)&v50[1].m128i_u64[1] - (char *)v90;
              if ( v42 <= 24 )
              {
                if ( v42 == 24 )
                {
                  v8[-3] = _mm_loadu_si128(v90);
                  v8[-2].m128i_i64[0] = v90[1].m128i_i64[0];
                }
                return;
              }
              v44 = v90;
              v43 = (__m128i *)((char *)v79 - v42);
LABEL_29:
              memmove(v43, v44, v42);
              return;
            }
          }
          else if ( !v78 )
          {
            goto LABEL_49;
          }
        }
      }
      if ( v49 != v76 )
      {
        for ( j = v49; v76 != j; j += 4 )
        {
          v81 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *((_DWORD *)j + 7) == v74 && v67 == v81 && v68 == j[1] && v69 == j[2] )
              goto LABEL_58;
          }
          else if ( !v81 )
          {
            break;
          }
        }
      }
LABEL_49:
      v79 = (__m128i *)((char *)v8 - 24);
      if ( v66 )
        goto LABEL_50;
LABEL_59:
      *(__m128i *)((char *)v8 - 24) = _mm_loadu_si128(v50);
      v79[1].m128i_i64[0] = v50[1].m128i_i64[0];
      if ( v90 == v50 )
        return;
      v50 = (const __m128i *)((char *)v50 - 24);
LABEL_52:
      v8 = v79;
    }
    i = &v49[(unsigned __int64)v62 / 8];
    while ( 1 )
    {
      v65 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 7) == v61 && v54 == v65 && v55 == i[1] && v56 == i[2] )
        {
LABEL_55:
          v66 = *((_DWORD *)i + 6);
          goto LABEL_42;
        }
      }
      else if ( !v65 )
      {
        goto LABEL_41;
      }
      i += 4;
      if ( (__int64 *)v53 == i )
        goto LABEL_69;
    }
  }
  v9 = (char *)a2 - (char *)src;
  if ( (char *)a2 - (char *)src <= 24 )
  {
    if ( (char *)a2 - (char *)src == 24 )
    {
      *a6 = _mm_loadu_si128(src);
      a6[1].m128i_i64[0] = src[1].m128i_i64[0];
    }
  }
  else
  {
    a6 = (__m128i *)memmove(a6, src, v9);
  }
  v89 = (__m128i *)((char *)a6 + v9);
  if ( a6 == (__m128i *)&a6->m128i_i8[v9] || a2 == v8 )
  {
LABEL_26:
    if ( v89 == a6 )
      return;
    v42 = (char *)v89 - (char *)a6;
    if ( (char *)v89 - (char *)a6 <= 24 )
    {
      if ( (char *)v89 - (char *)a6 == 24 )
      {
        *dest = _mm_loadu_si128(a6);
        dest[1].m128i_i64[0] = a6[1].m128i_i64[0];
      }
      return;
    }
    v43 = dest;
    v44 = a6;
    goto LABEL_29;
  }
  v10 = *((unsigned int *)a7 + 2);
  v11 = *a7;
  v12 = src;
  desta = v8;
  v13 = v10 - 1;
  v14 = 32 * v10;
  v15 = (__int64)&(*a7)[4 * v10];
  while ( 1 )
  {
    v16 = v7->m128i_i64[0];
    v17 = v7->m128i_i64[1];
    v18 = v7[1].m128i_i64[0];
    v19 = *(_DWORD *)(v7->m128i_i64[0] + 12);
    v20 = (*(_DWORD *)(v17 + 12) - v19) ^ (v19 << 8);
    v21 = (v20 - v19 + (v20 ^ ((v19 - v20) << 16))) ^ ((v19 - v20) << 10);
    v22 = (*(_DWORD *)(v18 + 12) - v21) ^ (v21 << 8);
    v23 = (v22 - v21 + (v22 ^ ((v21 - v22) << 16))) ^ ((v21 - v22) << 10);
    v24 = 32LL * (v23 & v13);
    v25 = &v11[(unsigned __int64)v24 / 8];
    if ( v24 != v14 )
    {
      for ( k = &v11[(unsigned __int64)v24 / 8]; (__int64 *)v15 != k; k += 4 )
      {
        v27 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *((_DWORD *)k + 7) == v23 && v16 == v27 && v17 == k[1] && v18 == k[2] )
          {
LABEL_85:
            v28 = *((_DWORD *)k + 6);
            goto LABEL_15;
          }
        }
        else if ( !v27 )
        {
          goto LABEL_14;
        }
      }
    }
    if ( v11 != v25 )
    {
      for ( k = v11; v25 != k; k += 4 )
      {
        v84 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *((_DWORD *)k + 7) == v23 && v16 == v84 && v17 == k[1] && v18 == k[2] )
            goto LABEL_85;
        }
        else if ( !v84 )
        {
          break;
        }
      }
    }
LABEL_14:
    v28 = 0;
LABEL_15:
    v29 = a6->m128i_i64[0];
    v30 = a6->m128i_i64[1];
    v31 = a6[1].m128i_i64[0];
    v32 = *(_DWORD *)(a6->m128i_i64[0] + 12);
    v33 = (*(_DWORD *)(v30 + 12) - v32) ^ (v32 << 8);
    v34 = ((v33 ^ ((v32 - v33) << 16)) + v33 - v32) ^ ((v32 - v33) << 10);
    v35 = (*(_DWORD *)(v31 + 12) - v34) ^ (v34 << 8);
    v36 = ((v35 ^ ((v34 - v35) << 16)) + v35 - v34) ^ ((v34 - v35) << 10);
    v37 = 32LL * (v36 & v13);
    v38 = &v11[(unsigned __int64)v37 / 8];
    if ( v14 != v37 )
      break;
LABEL_99:
    if ( v11 != v38 )
    {
      for ( m = v11; v38 != m; m += 4 )
      {
        v85 = *m;
        if ( (unsigned __int64)*m > 1 )
        {
          if ( *((_DWORD *)m + 7) == v36 && v29 == v85 && v30 == m[1] && v31 == m[2] )
            goto LABEL_88;
        }
        else if ( !v85 )
        {
          break;
        }
      }
    }
LABEL_22:
    if ( v28 )
      goto LABEL_23;
LABEL_89:
    v83 = _mm_loadu_si128(a6);
    v12 = (const __m128i *)((char *)v12 + 24);
    a6 = (__m128i *)((char *)a6 + 24);
    *(__m128i *)((char *)v12 - 24) = v83;
    v12[-1].m128i_i64[1] = a6[-1].m128i_i64[1];
    if ( v89 == a6 )
      return;
LABEL_24:
    if ( desta == v7 )
    {
      dest = (__m128i *)v12;
      goto LABEL_26;
    }
  }
  m = &v11[(unsigned __int64)v37 / 8];
  while ( 1 )
  {
    v40 = *m;
    if ( (unsigned __int64)*m > 1 )
      break;
    if ( !v40 )
      goto LABEL_22;
LABEL_19:
    m += 4;
    if ( (__int64 *)v15 == m )
      goto LABEL_99;
  }
  if ( *((_DWORD *)m + 7) != v36 || v29 != v40 || v30 != m[1] || v31 != m[2] )
    goto LABEL_19;
LABEL_88:
  if ( *((_DWORD *)m + 6) >= v28 )
    goto LABEL_89;
LABEL_23:
  v41 = _mm_loadu_si128(v7);
  v12 = (const __m128i *)((char *)v12 + 24);
  v7 = (const __m128i *)((char *)v7 + 24);
  *(__m128i *)((char *)v12 - 24) = v41;
  v12[-1].m128i_i64[1] = v7[-1].m128i_i64[1];
  if ( v89 != a6 )
    goto LABEL_24;
}

