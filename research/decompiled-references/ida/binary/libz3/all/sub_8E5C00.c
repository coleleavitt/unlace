void __fastcall sub_8E5C00(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  __int64 v7; // r11
  __int64 v8; // r15
  char *v9; // r10
  __int64 v10; // rax
  char *v11; // r13
  char *v12; // rbp
  __int64 v13; // r12
  char *v14; // r8
  char *v15; // rbp
  __int64 k; // rax
  char *v17; // r9
  __int64 v18; // r14
  size_t v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 i; // rax
  char *v23; // r9
  size_t v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rsi
  __m128i v33; // xmm0
  unsigned __int64 v34; // rdx
  __int64 *v35; // rdi
  __int64 *v36; // rdx
  __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  __int64 v39; // rsi
  _QWORD *v40; // r9
  __int64 v41; // r11
  __int64 v42; // rdx
  _QWORD *v43; // rdi
  __int64 v44; // rsi
  char *v45; // rbx
  __int64 v46; // rdx
  __m128i v47; // xmm0
  unsigned __int64 v48; // rdx
  __int64 *v49; // rcx
  __int64 *v50; // rdx
  __int64 v51; // rsi
  __int64 j; // rdx
  __int64 v53; // rsi
  _QWORD *v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // r10
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __m128i v61; // xmm0
  unsigned __int64 v62; // rax
  char *v63; // rdx
  char *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  size_t v68; // r8
  signed __int64 v69; // rdx
  size_t v70; // rcx
  __int64 v71; // rax
  char *v72; // rax
  char *v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rsi
  char *v76; // [rsp+0h] [rbp-78h]
  char *n; // [rsp+8h] [rbp-70h]
  __int64 na; // [rsp+8h] [rbp-70h]
  __int64 v79; // [rsp+10h] [rbp-68h]
  __int64 v81; // [rsp+28h] [rbp-50h]
  size_t v82; // [rsp+28h] [rbp-50h]
  size_t v83; // [rsp+28h] [rbp-50h]
  size_t v84; // [rsp+28h] [rbp-50h]
  char *src; // [rsp+38h] [rbp-40h]
  void *srca; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v8 = a4;
  v9 = a6;
  v10 = a5;
  v11 = a2;
  v12 = a1;
  if ( a4 <= a5 )
    v10 = a4;
  v76 = a1;
  if ( a7 < v10 )
  {
    v13 = a5;
    v14 = a2;
    if ( a4 > v7 )
      goto LABEL_5;
LABEL_21:
    v15 = v76;
    v11 = &v14[8 * (v13 / 2)];
    v18 = v13 / 2;
    for ( i = (v14 - v76) >> 3; i > 0; i >>= 1 )
    {
      while ( 1 )
      {
        v23 = &v15[8 * (i >> 1)];
        if ( *(_DWORD *)(*(_QWORD *)v23 + 4LL * (*(_DWORD *)(*(_QWORD *)v23 + 4LL) & 0xFFFFFF) + 8) < *(_DWORD *)(*(_QWORD *)v11 + 4LL * (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 0xFFFFFF) + 8) )
          break;
        v15 = v23 + 8;
        i = i - (i >> 1) - 1;
        if ( i <= 0 )
          goto LABEL_25;
      }
    }
LABEL_25:
    v79 = (v15 - v76) >> 3;
    v8 -= v79;
    if ( v8 > v18 )
      goto LABEL_10;
    while ( 1 )
    {
      if ( a7 >= v8 )
      {
        n = v11;
        if ( !v8 )
          goto LABEL_17;
        v24 = v14 - v15;
        v25 = v11 - v14;
        n = &v11[-(v14 - v15)];
        if ( v14 - v15 > 8 )
        {
          src = v14;
          v81 = v11 - v14;
          memmove(a6, v15, v14 - v15);
          if ( v81 <= 8 )
          {
            if ( v81 == 8 )
              *(_QWORD *)v15 = *(_QWORD *)src;
          }
          else
          {
            memmove(v15, src, v81);
          }
          memmove(n, a6, v24);
          goto LABEL_17;
        }
        if ( v14 - v15 != 8 )
        {
          if ( v25 <= 8 )
          {
            if ( v25 == 8 )
              *(_QWORD *)v15 = *(_QWORD *)v14;
          }
          else
          {
            memmove(v15, v14, v11 - v14);
          }
          goto LABEL_17;
        }
        v71 = *(_QWORD *)v15;
        *(_QWORD *)a6 = *(_QWORD *)v15;
        if ( v25 > 8 )
        {
          memmove(v15, v14, v11 - v14);
          goto LABEL_104;
        }
        if ( v25 == 8 )
        {
          *(_QWORD *)v15 = *(_QWORD *)v14;
LABEL_104:
          v71 = *(_QWORD *)a6;
        }
        *((_QWORD *)v11 - 1) = v71;
        goto LABEL_17;
      }
      if ( v15 == v14 )
      {
        n = v11;
        goto LABEL_17;
      }
      if ( v11 == v14 )
      {
        n = v15;
        goto LABEL_17;
      }
      v26 = (v11 - v15) >> 3;
      v27 = (v14 - v15) >> 3;
      if ( v27 == v26 - v27 )
      {
        v58 = v14 - 8 - v15;
        if ( v58 <= 8 || (unsigned __int64)(v15 + 15 - v14) <= 0x1E )
        {
          v72 = v14;
          v73 = v15;
          do
          {
            v74 = *(_QWORD *)v73;
            v75 = *(_QWORD *)v72;
            v72 += 8;
            v73 += 8;
            *((_QWORD *)v73 - 1) = v75;
            *((_QWORD *)v72 - 1) = v74;
          }
          while ( v72 != &v14[v14 - v15] );
        }
        else
        {
          v59 = 0;
          v60 = (v58 >> 3) + 1;
          do
          {
            v61 = _mm_loadu_si128((const __m128i *)&v15[v59]);
            *(__m128i *)&v15[v59] = _mm_loadu_si128((const __m128i *)&v14[v59]);
            *(__m128i *)&v14[v59] = v61;
            v59 += 16;
          }
          while ( v59 != 16 * (v60 >> 1) );
          if ( (v60 & 1) != 0 )
          {
            v62 = 8 * (v60 & 0xFFFFFFFFFFFFFFFELL);
            v63 = &v14[v62];
            v64 = &v15[v62];
            v65 = *(_QWORD *)v64;
            *(_QWORD *)v64 = *(_QWORD *)v63;
            *(_QWORD *)v63 = v65;
          }
        }
        n = v14;
        goto LABEL_17;
      }
      n = &v15[v11 - v14];
      v28 = v15;
      while ( 1 )
      {
        v29 = v26 - v27;
        if ( v27 < (__int64)(v26 - v27) )
          break;
LABEL_53:
        v39 = 8 * v26;
        v40 = &v28[v26];
        if ( v29 == 1 )
        {
          v70 = v28[(unsigned __int64)v39 / 8 - 1];
          if ( v39 - 8 <= 8 )
          {
            if ( v39 == 16 )
              *(v40 - 1) = *v28;
          }
          else
          {
            v84 = v28[(unsigned __int64)v39 / 8 - 1];
            memmove(v28 + 1, v28, v39 - 8);
            v70 = v84;
          }
          *v28 = v70;
          goto LABEL_17;
        }
        v41 = 8 * v27;
        v82 = (size_t)&v28[v27];
        if ( v27 > 0 )
        {
          if ( (unsigned __int64)(v27 - 1) <= 1 )
          {
            v54 = &v28[v27];
            v55 = 0;
          }
          else
          {
            v42 = v39 - 16;
            if ( v39 <= v41 - 16 || v41 <= v42 )
            {
              v43 = &v28[(unsigned __int64)v41 / 8 - 2];
              v44 = 0;
              v45 = (char *)v28 + v42;
              v46 = 0;
              do
              {
                v47 = _mm_loadu_si128((const __m128i *)&v43[v46]);
                ++v44;
                *(__m128i *)&v43[v46] = _mm_loadu_si128((const __m128i *)&v45[v46 * 8]);
                *(__m128i *)&v45[v46 * 8] = v47;
                v46 -= 2;
              }
              while ( (unsigned __int64)v27 >> 1 != v44 );
              if ( (v27 & 1) != 0 )
              {
                v48 = -8LL * (v27 & 0xFFFFFFFFFFFFFFFELL) - 8;
                v49 = (__int64 *)(v48 + v82);
                v50 = (_QWORD *)((char *)v40 + v48);
                v51 = *v49;
                *v49 = *v50;
                *v50 = v51;
              }
              goto LABEL_62;
            }
            v54 = &v28[v27];
            v55 = 0;
          }
          do
          {
            v56 = *(v54 - 1);
            v57 = *(v40 - 1);
            ++v55;
            --v54;
            --v40;
            *v54 = v57;
            *v40 = v56;
          }
          while ( v27 != v55 );
LABEL_62:
          v28 = (_QWORD *)(v82 - v41);
          goto LABEL_63;
        }
        v28 += v27;
LABEL_63:
        v27 = v26 % v29;
        if ( !(v26 % v29) )
          goto LABEL_17;
        v26 = v29;
      }
      while ( v27 != 1 )
      {
        v30 = (unsigned __int64)&v28[v27];
        if ( (__int64)v29 > 0 )
        {
          if ( v29 - 1 <= 1 || 8 * v27 + 16 > 0 && v30 < (unsigned __int64)(v28 + 2) )
          {
            for ( j = 0; j != v29; ++j )
            {
              v53 = v28[j];
              v28[j] = *(_QWORD *)(v30 + 8 * j);
              *(_QWORD *)(v30 + 8 * j) = v53;
            }
          }
          else
          {
            v31 = 0;
            v32 = 0;
            do
            {
              v33 = _mm_loadu_si128((const __m128i *)&v28[v31]);
              ++v32;
              *(__m128i *)&v28[v31] = _mm_loadu_si128((const __m128i *)(v30 + v31 * 8));
              *(__m128i *)(v30 + v31 * 8) = v33;
              v31 += 2;
            }
            while ( v29 >> 1 != v32 );
            if ( (v29 & 1) != 0 )
            {
              v34 = v29 & 0xFFFFFFFFFFFFFFFELL;
              v35 = (__int64 *)(v34 * 8 + v30);
              v36 = &v28[v34];
              v37 = *v36;
              *v36 = *v35;
              *v35 = v37;
            }
          }
          v28 += v29;
        }
        v38 = v26 % v27;
        if ( !(v26 % v27) )
          goto LABEL_17;
        v26 = v27;
        v27 -= v38;
        v29 = v26 - v27;
        if ( v27 >= (__int64)(v26 - v27) )
          goto LABEL_53;
      }
      v67 = 8 * v26;
      v68 = *v28;
      v69 = 8 * v26 - 8;
      if ( v69 <= 8 )
      {
        if ( 8 * v26 == 16 )
          *v28 = v28[1];
      }
      else
      {
        srca = (void *)(8 * v26);
        v83 = *v28;
        memmove(v28, v28 + 1, v69);
        v68 = v83;
        v67 = (__int64)srca;
      }
      *(_QWORD *)((char *)v28 + v67 - 8) = v68;
LABEL_17:
      v13 -= v18;
      sub_8E5C00((_DWORD)v76, (_DWORD)v15, (_DWORD)n, v79, v18, (_DWORD)a6, a7);
      v21 = v13;
      if ( v8 <= v13 )
        v21 = v8;
      if ( v21 <= a7 )
      {
        v12 = n;
        v9 = a6;
        v7 = v13;
        break;
      }
      v14 = v11;
      v76 = n;
      if ( v8 <= v13 )
        goto LABEL_21;
LABEL_5:
      v11 = v14;
      v15 = &v76[8 * (v8 / 2)];
      v79 = v8 / 2;
      for ( k = (a3 - v14) >> 3; k > 0; k >>= 1 )
      {
        while ( 1 )
        {
          v17 = &v11[8 * (k >> 1)];
          if ( *(_DWORD *)(*(_QWORD *)v15 + 4LL * (*(_DWORD *)(*(_QWORD *)v15 + 4LL) & 0xFFFFFF) + 8) >= *(_DWORD *)(*(_QWORD *)v17 + 4LL * (*(_DWORD *)(*(_QWORD *)v17 + 4LL) & 0xFFFFFF) + 8) )
            break;
          v11 = v17 + 8;
          k = k - (k >> 1) - 1;
          if ( k <= 0 )
            goto LABEL_9;
        }
      }
LABEL_9:
      v18 = (v11 - v14) >> 3;
      v8 -= v79;
      if ( v8 > v18 )
      {
LABEL_10:
        if ( a7 >= v18 )
        {
          n = v15;
          if ( !v18 )
            goto LABEL_17;
          v19 = v11 - v14;
          v20 = v14 - v15;
          if ( v11 - v14 > 8 )
          {
            na = v14 - v15;
            memmove(a6, v14, v11 - v14);
            if ( na <= 8 )
            {
              if ( na == 8 )
                *((_QWORD *)v11 - 1) = *(_QWORD *)v15;
            }
            else
            {
              memmove(&v11[-na], v15, na);
            }
            memmove(v15, a6, v19);
            goto LABEL_16;
          }
          if ( v11 - v14 != 8 )
          {
            if ( v20 <= 8 )
            {
              if ( v20 == 8 )
                *((_QWORD *)v11 - 1) = *(_QWORD *)v15;
            }
            else
            {
              memmove(&v11[-v20], v15, v14 - v15);
            }
            goto LABEL_16;
          }
          v66 = *(_QWORD *)v14;
          *(_QWORD *)a6 = *(_QWORD *)v14;
          if ( v20 > 8 )
          {
            memmove(&v11[-v20], v15, v14 - v15);
            goto LABEL_88;
          }
          if ( v20 == 8 )
          {
            *((_QWORD *)v11 - 1) = *(_QWORD *)v15;
LABEL_88:
            v66 = *(_QWORD *)a6;
          }
          *(_QWORD *)v15 = v66;
LABEL_16:
          n = &v15[v19];
          goto LABEL_17;
        }
      }
    }
  }
  sub_8E5180(v12, v11, a3, v8, v7, v9);
}

