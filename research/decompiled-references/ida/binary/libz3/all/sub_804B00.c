void __fastcall sub_804B00(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, __int64 *a6, __int64 a7)
{
  __int64 v7; // r11
  __int64 v8; // r10
  char *v9; // r15
  __int64 v10; // rax
  char *v11; // r13
  __int64 v12; // r12
  __int64 v13; // r14
  char *v14; // r8
  char *v15; // rbp
  __int64 v16; // r10
  __int64 v17; // rax
  char *v18; // rsi
  __int64 v19; // rcx
  __int16 v20; // di
  unsigned int v21; // edi
  __int16 v22; // r9
  unsigned int v23; // ecx
  __int64 v24; // r15
  size_t v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r11
  __int64 v29; // rax
  __int16 v30; // di
  __int64 v31; // rdx
  char *v32; // rsi
  __int64 v33; // rcx
  __int16 v34; // r9
  unsigned int v35; // r10d
  unsigned int v36; // edi
  size_t v37; // rbx
  __int64 v38; // rcx
  __int16 v39; // cx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rbx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rsi
  __m128i v47; // xmm0
  unsigned __int64 v48; // rdx
  __int64 *v49; // rdi
  __int64 *v50; // rdx
  __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  __int64 v53; // rsi
  _QWORD *v54; // r9
  __int64 v55; // r11
  __int64 v56; // rdx
  _QWORD *v57; // rdi
  __int64 v58; // rsi
  char *v59; // rbx
  __int64 v60; // rdx
  __m128i v61; // xmm0
  unsigned __int64 v62; // rdx
  __int64 *v63; // rcx
  __int64 *v64; // rdx
  __int64 v65; // rsi
  __int64 i; // rdx
  __int64 v67; // rsi
  _QWORD *v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // r10
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  __m128i v75; // xmm0
  unsigned __int64 v76; // rax
  char *v77; // rdx
  char *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  size_t v82; // r8
  signed __int64 v83; // rdx
  size_t v84; // rcx
  __int64 v85; // rax
  char *v86; // rax
  char *v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rsi
  char *v90; // [rsp+0h] [rbp-78h]
  char *n; // [rsp+8h] [rbp-70h]
  __int64 na; // [rsp+8h] [rbp-70h]
  __int64 v94; // [rsp+18h] [rbp-60h]
  __int64 v95; // [rsp+28h] [rbp-50h]
  size_t v96; // [rsp+28h] [rbp-50h]
  size_t v97; // [rsp+28h] [rbp-50h]
  size_t v98; // [rsp+28h] [rbp-50h]
  char *src; // [rsp+38h] [rbp-40h]
  void *srca; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v8 = a4;
  v9 = a1;
  v10 = a5;
  v11 = a2;
  if ( a4 <= a5 )
    v10 = a4;
  v90 = a1;
  if ( a7 >= v10 )
    goto LABEL_59;
  v12 = a4;
  v13 = a5;
  v14 = a2;
  if ( v7 < a4 )
  {
LABEL_5:
    v11 = v14;
    v15 = &v90[8 * (v12 / 2)];
    v94 = v12 / 2;
    v16 = *(_QWORD *)v15;
    v17 = (a3 - v14) >> 3;
LABEL_6:
    if ( v17 <= 0 )
    {
LABEL_14:
      v24 = (v11 - v14) >> 3;
      v12 -= v94;
      if ( v12 <= v24 )
        goto LABEL_36;
LABEL_15:
      if ( a7 < v24 )
        goto LABEL_36;
      n = v15;
      if ( !v24 )
        goto LABEL_22;
      v25 = v11 - v14;
      v26 = v14 - v15;
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
        memmove(v15, a6, v25);
        goto LABEL_21;
      }
      if ( v11 - v14 != 8 )
      {
        if ( v26 <= 8 )
        {
          if ( v26 == 8 )
            *((_QWORD *)v11 - 1) = *(_QWORD *)v15;
        }
        else
        {
          memmove(&v11[-v26], v15, v14 - v15);
        }
        goto LABEL_21;
      }
      v80 = *(_QWORD *)v14;
      *a6 = *(_QWORD *)v14;
      if ( v26 > 8 )
      {
        memmove(&v11[-v26], v15, v14 - v15);
        goto LABEL_112;
      }
      if ( v26 == 8 )
      {
        *((_QWORD *)v11 - 1) = *(_QWORD *)v15;
LABEL_112:
        v80 = *a6;
      }
      *(_QWORD *)v15 = v80;
LABEL_21:
      n = &v15[v25];
      goto LABEL_22;
    }
    while ( 1 )
    {
      v18 = &v11[8 * (v17 >> 1)];
      v19 = *(_QWORD *)v18;
      v20 = *(_WORD *)(*(_QWORD *)v18 + 4LL);
      if ( v20 )
      {
        if ( v20 != 2 )
        {
          v39 = *(_WORD *)(v16 + 4);
          if ( !v39 )
          {
            v21 = 1;
LABEL_48:
            v23 = *(unsigned __int16 *)(v16 + 28);
            goto LABEL_12;
          }
          if ( v39 != 2 )
          {
LABEL_42:
            v17 >>= 1;
            goto LABEL_6;
          }
          v21 = 1;
LABEL_11:
          v23 = *(_DWORD *)(v16 + 40);
          goto LABEL_12;
        }
        v21 = *(_DWORD *)(v19 + 40);
      }
      else
      {
        v21 = *(unsigned __int16 *)(v19 + 28);
      }
      v22 = *(_WORD *)(v16 + 4);
      if ( !v22 )
        goto LABEL_48;
      v23 = 1;
      if ( v22 == 2 )
        goto LABEL_11;
LABEL_12:
      if ( v21 >= v23 )
        goto LABEL_42;
      v11 = v18 + 8;
      v17 = v17 - (v17 >> 1) - 1;
      if ( v17 <= 0 )
        goto LABEL_14;
    }
  }
  while ( 2 )
  {
    v15 = v90;
    v11 = &v14[8 * (v13 / 2)];
    v24 = v13 / 2;
    v28 = *(_QWORD *)v11;
    v29 = (v14 - v90) >> 3;
LABEL_27:
    if ( v29 > 0 )
    {
      while ( 1 )
      {
        v30 = *(_WORD *)(v28 + 4);
        v31 = v29 >> 1;
        v32 = &v15[8 * (v29 >> 1)];
        v33 = *(_QWORD *)v32;
        v34 = *(_WORD *)(*(_QWORD *)v32 + 4LL);
        if ( !v30 )
          break;
        if ( v30 == 2 )
        {
          v35 = *(_DWORD *)(v28 + 40);
LABEL_30:
          if ( v34 )
          {
            v36 = 1;
            if ( v34 != 2 )
              goto LABEL_33;
            goto LABEL_32;
          }
          goto LABEL_52;
        }
        if ( v34 )
        {
          if ( v34 != 2 )
          {
LABEL_50:
            v15 = v32 + 8;
            v29 = v29 - v31 - 1;
            goto LABEL_27;
          }
          v35 = 1;
LABEL_32:
          v36 = *(_DWORD *)(v33 + 40);
          goto LABEL_33;
        }
        v35 = 1;
LABEL_52:
        v36 = *(unsigned __int16 *)(v33 + 28);
LABEL_33:
        if ( v35 >= v36 )
          goto LABEL_50;
        v29 >>= 1;
        if ( v31 <= 0 )
          goto LABEL_35;
      }
      v35 = *(unsigned __int16 *)(v28 + 28);
      goto LABEL_30;
    }
LABEL_35:
    v94 = (v15 - v90) >> 3;
    v12 -= v94;
    if ( v12 > v24 )
      goto LABEL_15;
LABEL_36:
    if ( a7 >= v12 )
    {
      n = v11;
      if ( !v12 )
        goto LABEL_22;
      v37 = v14 - v15;
      v38 = v11 - v14;
      n = &v11[-(v14 - v15)];
      if ( v14 - v15 > 8 )
      {
        src = v14;
        v95 = v11 - v14;
        memmove(a6, v15, v14 - v15);
        if ( v95 <= 8 )
        {
          if ( v95 == 8 )
            *(_QWORD *)v15 = *(_QWORD *)src;
        }
        else
        {
          memmove(v15, src, v95);
        }
        memmove(n, a6, v37);
        goto LABEL_22;
      }
      if ( v14 - v15 != 8 )
      {
        if ( v38 <= 8 )
        {
          if ( v38 == 8 )
            *(_QWORD *)v15 = *(_QWORD *)v14;
        }
        else
        {
          memmove(v15, v14, v11 - v14);
        }
        goto LABEL_22;
      }
      v85 = *(_QWORD *)v15;
      *a6 = *(_QWORD *)v15;
      if ( v38 > 8 )
      {
        memmove(v15, v14, v11 - v14);
        goto LABEL_128;
      }
      if ( v38 == 8 )
      {
        *(_QWORD *)v15 = *(_QWORD *)v14;
LABEL_128:
        v85 = *a6;
      }
      *((_QWORD *)v11 - 1) = v85;
      goto LABEL_22;
    }
    if ( v15 == v14 )
    {
      n = v11;
      goto LABEL_22;
    }
    if ( v11 == v14 )
    {
      n = v15;
      goto LABEL_22;
    }
    v40 = (v11 - v15) >> 3;
    v41 = (v14 - v15) >> 3;
    if ( v41 == v40 - v41 )
    {
      v72 = v14 - 8 - v15;
      if ( v72 <= 8 || (unsigned __int64)(v15 + 15 - v14) <= 0x1E )
      {
        v86 = v14;
        v87 = v15;
        do
        {
          v88 = *(_QWORD *)v87;
          v89 = *(_QWORD *)v86;
          v86 += 8;
          v87 += 8;
          *((_QWORD *)v87 - 1) = v89;
          *((_QWORD *)v86 - 1) = v88;
        }
        while ( v86 != &v14[v14 - v15] );
      }
      else
      {
        v73 = 0;
        v74 = (v72 >> 3) + 1;
        do
        {
          v75 = _mm_loadu_si128((const __m128i *)&v15[v73]);
          *(__m128i *)&v15[v73] = _mm_loadu_si128((const __m128i *)&v14[v73]);
          *(__m128i *)&v14[v73] = v75;
          v73 += 16;
        }
        while ( v73 != 16 * (v74 >> 1) );
        if ( (v74 & 1) != 0 )
        {
          v76 = 8 * (v74 & 0xFFFFFFFFFFFFFFFELL);
          v77 = &v14[v76];
          v78 = &v15[v76];
          v79 = *(_QWORD *)v78;
          *(_QWORD *)v78 = *(_QWORD *)v77;
          *(_QWORD *)v77 = v79;
        }
      }
      n = v14;
      goto LABEL_22;
    }
    n = &v15[v11 - v14];
    v42 = v15;
    while ( 2 )
    {
      v43 = v40 - v41;
      if ( v41 >= (__int64)(v40 - v41) )
      {
LABEL_77:
        v53 = 8 * v40;
        v54 = &v42[v40];
        if ( v43 == 1 )
        {
          v84 = v42[(unsigned __int64)v53 / 8 - 1];
          if ( v53 - 8 <= 8 )
          {
            if ( v53 == 16 )
              *(v54 - 1) = *v42;
          }
          else
          {
            v98 = v42[(unsigned __int64)v53 / 8 - 1];
            memmove(v42 + 1, v42, v53 - 8);
            v84 = v98;
          }
          *v42 = v84;
          goto LABEL_22;
        }
        v55 = 8 * v41;
        v96 = (size_t)&v42[v41];
        if ( v41 <= 0 )
        {
          v42 += v41;
          goto LABEL_87;
        }
        if ( (unsigned __int64)(v41 - 1) <= 1 )
        {
          v68 = &v42[v41];
          v69 = 0;
        }
        else
        {
          v56 = v53 - 16;
          if ( v53 <= v55 - 16 || v55 <= v56 )
          {
            v57 = &v42[(unsigned __int64)v55 / 8 - 2];
            v58 = 0;
            v59 = (char *)v42 + v56;
            v60 = 0;
            do
            {
              v61 = _mm_loadu_si128((const __m128i *)&v57[v60]);
              ++v58;
              *(__m128i *)&v57[v60] = _mm_loadu_si128((const __m128i *)&v59[v60 * 8]);
              *(__m128i *)&v59[v60 * 8] = v61;
              v60 -= 2;
            }
            while ( v58 != (unsigned __int64)v41 >> 1 );
            if ( (v41 & 1) != 0 )
            {
              v62 = -8LL * (v41 & 0xFFFFFFFFFFFFFFFELL) - 8;
              v63 = (__int64 *)(v96 + v62);
              v64 = (_QWORD *)((char *)v54 + v62);
              v65 = *v63;
              *v63 = *v64;
              *v64 = v65;
            }
            goto LABEL_86;
          }
          v68 = &v42[v41];
          v69 = 0;
        }
        do
        {
          v70 = *(v68 - 1);
          v71 = *(v54 - 1);
          ++v69;
          --v68;
          --v54;
          *v68 = v71;
          *v54 = v70;
        }
        while ( v41 != v69 );
LABEL_86:
        v42 = (_QWORD *)(v96 - v55);
LABEL_87:
        v41 = v40 % v43;
        if ( !(v40 % v43) )
          goto LABEL_22;
        v40 = v43;
        continue;
      }
      break;
    }
    while ( v41 != 1 )
    {
      v44 = (unsigned __int64)&v42[v41];
      if ( (__int64)v43 > 0 )
      {
        if ( v43 - 1 <= 1 || v44 < (unsigned __int64)(v42 + 2) && 8 * v41 + 16 > 0 )
        {
          for ( i = 0; i != v43; ++i )
          {
            v67 = v42[i];
            v42[i] = *(_QWORD *)(v44 + 8 * i);
            *(_QWORD *)(v44 + 8 * i) = v67;
          }
        }
        else
        {
          v45 = 0;
          v46 = 0;
          do
          {
            v47 = _mm_loadu_si128((const __m128i *)&v42[v45]);
            ++v46;
            *(__m128i *)&v42[v45] = _mm_loadu_si128((const __m128i *)(v44 + v45 * 8));
            *(__m128i *)(v44 + v45 * 8) = v47;
            v45 += 2;
          }
          while ( v43 >> 1 != v46 );
          if ( (v43 & 1) != 0 )
          {
            v48 = v43 & 0xFFFFFFFFFFFFFFFELL;
            v49 = (__int64 *)(v48 * 8 + v44);
            v50 = &v42[v48];
            v51 = *v50;
            *v50 = *v49;
            *v49 = v51;
          }
        }
        v42 += v43;
      }
      v52 = v40 % v41;
      if ( !(v40 % v41) )
        goto LABEL_22;
      v40 = v41;
      v41 -= v52;
      v43 = v40 - v41;
      if ( v41 >= (__int64)(v40 - v41) )
        goto LABEL_77;
    }
    v81 = 8 * v40;
    v82 = *v42;
    v83 = 8 * v40 - 8;
    if ( v83 <= 8 )
    {
      if ( 8 * v40 == 16 )
        *v42 = v42[1];
    }
    else
    {
      srca = (void *)(8 * v40);
      v97 = *v42;
      memmove(v42, v42 + 1, v83);
      v82 = v97;
      v81 = (__int64)srca;
    }
    *(_QWORD *)((char *)v42 + v81 - 8) = v82;
LABEL_22:
    v13 -= v24;
    sub_804B00((_DWORD)v90, (_DWORD)v15, (_DWORD)n, v94, v24, (_DWORD)a6, a7);
    v27 = v13;
    if ( v12 <= v13 )
      v27 = v12;
    if ( v27 > a7 )
    {
      v14 = v11;
      v90 = n;
      if ( v13 < v12 )
        goto LABEL_5;
      continue;
    }
    break;
  }
  v9 = n;
  v8 = v12;
  v7 = v13;
LABEL_59:
  sub_8041D0(v9, v11, a3, v8, v7, (char *)a6);
}

