void __fastcall sub_A78200(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  char *v11; // r8
  char *v12; // r12
  char *v13; // rbp
  __int64 k; // rax
  char *v15; // rcx
  __int64 v16; // r14
  size_t v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 i; // rax
  char *v21; // rcx
  size_t v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rsi
  __m128i v31; // xmm0
  unsigned __int64 v32; // rdx
  __int64 *v33; // rdi
  __int64 *v34; // rdx
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  _QWORD *v38; // r9
  __int64 v39; // r11
  __int64 v40; // rdx
  _QWORD *v41; // rdi
  __int64 v42; // rsi
  char *v43; // rbx
  __int64 v44; // rdx
  __m128i v45; // xmm0
  unsigned __int64 v46; // rdx
  __int64 *v47; // rcx
  __int64 *v48; // rdx
  __int64 v49; // rsi
  __int64 j; // rdx
  __int64 v51; // rsi
  _QWORD *v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // r10
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __m128i v59; // xmm0
  unsigned __int64 v60; // rax
  char *v61; // rdx
  char *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  size_t v66; // r8
  signed __int64 v67; // rdx
  size_t v68; // rcx
  __int64 v69; // rax
  char *v70; // rax
  char *v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rsi
  char *n; // [rsp+0h] [rbp-78h]
  __int64 na; // [rsp+0h] [rbp-78h]
  char *v76; // [rsp+8h] [rbp-70h]
  __int64 v77; // [rsp+10h] [rbp-68h]
  __int64 v79; // [rsp+28h] [rbp-50h]
  size_t v80; // [rsp+28h] [rbp-50h]
  size_t v81; // [rsp+28h] [rbp-50h]
  size_t v82; // [rsp+28h] [rbp-50h]
  char *src; // [rsp+38h] [rbp-40h]
  void *srca; // [rsp+38h] [rbp-40h]

  v8 = a4;
  v9 = a5;
  if ( a4 <= a5 )
    v9 = a4;
  v76 = a1;
  if ( a7 >= v9 )
  {
    sub_A78000(a1, a2, a3, a4, a5, a6);
    return;
  }
  v10 = a5;
  v11 = a2;
  if ( a4 > a5 )
    goto LABEL_5;
  while ( 2 )
  {
    v13 = v76;
    v16 = v10 / 2;
    v12 = &v11[8 * (v10 / 2)];
    for ( i = (v11 - v76) >> 3; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v21 = &v13[8 * (i >> 1)];
        if ( *(_QWORD *)v12 < *(_QWORD *)v21 )
          break;
        v13 = v21 + 8;
        i = i - (i >> 1) - 1;
        if ( i <= 0 )
          goto LABEL_25;
      }
    }
LABEL_25:
    v77 = (v13 - v76) >> 3;
    v8 -= v77;
    if ( v8 > v16 )
      goto LABEL_10;
LABEL_26:
    if ( a7 >= v8 )
    {
      n = v12;
      if ( !v8 )
        goto LABEL_17;
      v22 = v11 - v13;
      v23 = v12 - v11;
      n = &v12[-(v11 - v13)];
      if ( v11 - v13 > 8 )
      {
        src = v11;
        v79 = v12 - v11;
        memmove(a6, v13, v11 - v13);
        if ( v79 <= 8 )
        {
          if ( v79 == 8 )
            *(_QWORD *)v13 = *(_QWORD *)src;
        }
        else
        {
          memmove(v13, src, v79);
        }
        memmove(n, a6, v22);
        goto LABEL_17;
      }
      if ( v11 - v13 != 8 )
      {
        if ( v23 <= 8 )
        {
          if ( v23 == 8 )
            *(_QWORD *)v13 = *(_QWORD *)v11;
        }
        else
        {
          memmove(v13, v11, v12 - v11);
        }
        goto LABEL_17;
      }
      v69 = *(_QWORD *)v13;
      *(_QWORD *)a6 = *(_QWORD *)v13;
      if ( v23 <= 8 )
      {
        if ( v23 != 8 )
          goto LABEL_106;
        *(_QWORD *)v13 = *(_QWORD *)v11;
      }
      else
      {
        memmove(v13, v11, v12 - v11);
      }
      v69 = *(_QWORD *)a6;
LABEL_106:
      *((_QWORD *)v12 - 1) = v69;
      goto LABEL_17;
    }
    if ( v13 == v11 )
    {
      n = v12;
      goto LABEL_17;
    }
    if ( v12 == v11 )
    {
      n = v13;
      goto LABEL_17;
    }
    v24 = (v12 - v13) >> 3;
    v25 = (v11 - v13) >> 3;
    if ( v25 == v24 - v25 )
    {
      v56 = v11 - 8 - v13;
      if ( v56 <= 8 || (unsigned __int64)(v13 + 15 - v11) <= 0x1E )
      {
        v70 = v11;
        v71 = v13;
        do
        {
          v72 = *(_QWORD *)v71;
          v73 = *(_QWORD *)v70;
          v70 += 8;
          v71 += 8;
          *((_QWORD *)v71 - 1) = v73;
          *((_QWORD *)v70 - 1) = v72;
        }
        while ( v70 != &v11[v11 - v13] );
      }
      else
      {
        v57 = 0;
        v58 = (v56 >> 3) + 1;
        do
        {
          v59 = _mm_loadu_si128((const __m128i *)&v13[v57]);
          *(__m128i *)&v13[v57] = _mm_loadu_si128((const __m128i *)&v11[v57]);
          *(__m128i *)&v11[v57] = v59;
          v57 += 16;
        }
        while ( v57 != 16 * (v58 >> 1) );
        if ( (v58 & 1) != 0 )
        {
          v60 = 8 * (v58 & 0xFFFFFFFFFFFFFFFELL);
          v61 = &v11[v60];
          v62 = &v13[v60];
          v63 = *(_QWORD *)v62;
          *(_QWORD *)v62 = *(_QWORD *)v61;
          *(_QWORD *)v61 = v63;
        }
      }
      n = v11;
      goto LABEL_17;
    }
    v26 = v13;
    n = &v13[v12 - v11];
    while ( 1 )
    {
      v27 = v24 - v25;
      if ( v25 < (__int64)(v24 - v25) )
        break;
LABEL_53:
      v37 = 8 * v24;
      v38 = &v26[v24];
      if ( v27 == 1 )
      {
        v68 = v26[(unsigned __int64)v37 / 8 - 1];
        if ( v37 - 8 <= 8 )
        {
          if ( v37 == 16 )
            *(v38 - 1) = *v26;
        }
        else
        {
          v82 = v26[(unsigned __int64)v37 / 8 - 1];
          memmove(v26 + 1, v26, v37 - 8);
          v68 = v82;
        }
        *v26 = v68;
        goto LABEL_17;
      }
      v39 = 8 * v25;
      v80 = (size_t)&v26[v25];
      if ( v25 > 0 )
      {
        if ( (unsigned __int64)(v25 - 1) <= 1 )
        {
          v52 = &v26[v25];
          v53 = 0;
        }
        else
        {
          v40 = v37 - 16;
          if ( v37 <= v39 - 16 || v39 <= v40 )
          {
            v41 = &v26[(unsigned __int64)v39 / 8 - 2];
            v42 = 0;
            v43 = (char *)v26 + v40;
            v44 = 0;
            do
            {
              v45 = _mm_loadu_si128((const __m128i *)&v41[v44]);
              ++v42;
              *(__m128i *)&v41[v44] = _mm_loadu_si128((const __m128i *)&v43[v44 * 8]);
              *(__m128i *)&v43[v44 * 8] = v45;
              v44 -= 2;
            }
            while ( v42 != (unsigned __int64)v25 >> 1 );
            if ( (v25 & 1) != 0 )
            {
              v46 = -8LL * (v25 & 0xFFFFFFFFFFFFFFFELL) - 8;
              v47 = (__int64 *)(v80 + v46);
              v48 = (_QWORD *)((char *)v38 + v46);
              v49 = *v47;
              *v47 = *v48;
              *v48 = v49;
            }
            goto LABEL_62;
          }
          v52 = &v26[v25];
          v53 = 0;
        }
        do
        {
          v54 = *(v52 - 1);
          v55 = *(v38 - 1);
          ++v53;
          --v52;
          --v38;
          *v52 = v55;
          *v38 = v54;
        }
        while ( v25 != v53 );
LABEL_62:
        v26 = (_QWORD *)(v80 - v39);
        goto LABEL_63;
      }
      v26 += v25;
LABEL_63:
      v25 = v24 % v27;
      if ( !(v24 % v27) )
        goto LABEL_17;
      v24 = v27;
    }
    while ( v25 != 1 )
    {
      v28 = (unsigned __int64)&v26[v25];
      if ( (__int64)v27 > 0 )
      {
        if ( v27 - 1 <= 1 || v28 < (unsigned __int64)(v26 + 2) && 8 * v25 + 16 > 0 )
        {
          for ( j = 0; j != v27; ++j )
          {
            v51 = v26[j];
            v26[j] = *(_QWORD *)(v28 + 8 * j);
            *(_QWORD *)(v28 + 8 * j) = v51;
          }
        }
        else
        {
          v29 = 0;
          v30 = 0;
          do
          {
            v31 = _mm_loadu_si128((const __m128i *)&v26[v29]);
            ++v30;
            *(__m128i *)&v26[v29] = _mm_loadu_si128((const __m128i *)(v28 + v29 * 8));
            *(__m128i *)(v28 + v29 * 8) = v31;
            v29 += 2;
          }
          while ( v30 != v27 >> 1 );
          if ( (v27 & 1) != 0 )
          {
            v32 = v27 & 0xFFFFFFFFFFFFFFFELL;
            v33 = (__int64 *)(v32 * 8 + v28);
            v34 = &v26[v32];
            v35 = *v34;
            *v34 = *v33;
            *v33 = v35;
          }
        }
        v26 += v27;
      }
      v36 = v24 % v25;
      if ( !(v24 % v25) )
        goto LABEL_17;
      v24 = v25;
      v25 -= v36;
      v27 = v24 - v25;
      if ( v25 >= (__int64)(v24 - v25) )
        goto LABEL_53;
    }
    v65 = 8 * v24;
    v66 = *v26;
    v67 = 8 * v24 - 8;
    if ( v67 <= 8 )
    {
      if ( 8 * v24 == 16 )
        *v26 = v26[1];
    }
    else
    {
      srca = (void *)(8 * v24);
      v81 = *v26;
      memmove(v26, v26 + 1, v67);
      v66 = v81;
      v65 = (__int64)srca;
    }
    *(_QWORD *)((char *)v26 + v65 - 8) = v66;
LABEL_17:
    v10 -= v16;
    sub_A78200((_DWORD)v76, (_DWORD)v13, (_DWORD)n, v77, v16, (_DWORD)a6, a7);
    v19 = v10;
    if ( v8 <= v10 )
      v19 = v8;
    if ( v19 > a7 )
    {
      v11 = v12;
      v76 = n;
      if ( v8 <= v10 )
        continue;
LABEL_5:
      v12 = v11;
      v77 = v8 / 2;
      v13 = &v76[8 * (v8 / 2)];
      for ( k = (a3 - v11) >> 3; k > 0; k >>= 1 )
      {
        while ( 1 )
        {
          v15 = &v12[8 * (k >> 1)];
          if ( *(_QWORD *)v15 >= *(_QWORD *)v13 )
            break;
          v12 = v15 + 8;
          k = k - (k >> 1) - 1;
          if ( k <= 0 )
            goto LABEL_9;
        }
      }
LABEL_9:
      v16 = (v12 - v11) >> 3;
      v8 -= v77;
      if ( v8 > v16 )
      {
LABEL_10:
        if ( a7 >= v16 )
        {
          n = v13;
          if ( !v16 )
            goto LABEL_17;
          v17 = v12 - v11;
          v18 = v11 - v13;
          if ( v12 - v11 > 8 )
          {
            na = v11 - v13;
            memmove(a6, v11, v12 - v11);
            if ( na <= 8 )
            {
              if ( na == 8 )
                *((_QWORD *)v12 - 1) = *(_QWORD *)v13;
            }
            else
            {
              memmove(&v12[-na], v13, na);
            }
            memmove(v13, a6, v17);
            goto LABEL_16;
          }
          if ( v12 - v11 != 8 )
          {
            if ( v18 <= 8 )
            {
              if ( v18 == 8 )
                *((_QWORD *)v12 - 1) = *(_QWORD *)v13;
            }
            else
            {
              memmove(&v12[-v18], v13, v11 - v13);
            }
            goto LABEL_16;
          }
          v64 = *(_QWORD *)v11;
          *(_QWORD *)a6 = *(_QWORD *)v11;
          if ( v18 > 8 )
          {
            memmove(&v12[-v18], v13, v11 - v13);
            goto LABEL_89;
          }
          if ( v18 == 8 )
          {
            *((_QWORD *)v12 - 1) = *(_QWORD *)v13;
LABEL_89:
            v64 = *(_QWORD *)a6;
          }
          *(_QWORD *)v13 = v64;
LABEL_16:
          n = &v13[v17];
          goto LABEL_17;
        }
      }
      goto LABEL_26;
    }
    break;
  }
  sub_A78000(n, v12, a3, v8, v10, a6);
}

