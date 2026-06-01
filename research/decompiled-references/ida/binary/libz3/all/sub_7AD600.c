void __fastcall sub_7AD600(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  __int64 v7; // rax
  char *v8; // r10
  __int64 v9; // r15
  char *v10; // r11
  __int64 v11; // r12
  __int64 v13; // rcx
  char *v14; // rbp
  __int64 v15; // rax
  _DWORD *v16; // r8
  unsigned int v17; // edi
  char *v18; // r13
  __int64 v19; // rdx
  char *v20; // rsi
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // r14
  size_t v25; // rcx
  int v26; // r8d
  unsigned int v27; // r14d
  __int64 v28; // rax
  _DWORD *v29; // r9
  unsigned int v30; // edi
  char *v31; // rsi
  __int64 v32; // r10
  signed __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rax
  unsigned int v36; // r14d
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  char *v39; // rdx
  int v40; // r13d
  signed __int64 v41; // rdx
  _QWORD *v42; // rbx
  unsigned __int64 v43; // r10
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
  __int64 v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // rdi
  char *v58; // rdi
  __int64 v59; // rsi
  char *v60; // rbx
  __int64 v61; // rdx
  __m128i v62; // xmm0
  unsigned __int64 v63; // rdx
  __int64 *v64; // rcx
  __int64 *v65; // rdx
  __int64 v66; // rsi
  __int64 i; // rdx
  __int64 v68; // rsi
  _QWORD *v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // r11
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  __m128i v76; // xmm0
  unsigned __int64 v77; // rax
  char *v78; // rdx
  char *v79; // rax
  __int64 v80; // rcx
  _DWORD *v81; // rax
  __int64 v82; // rcx
  size_t v83; // r9
  signed __int64 v84; // rdx
  size_t v85; // rcx
  _DWORD *v86; // rax
  char *v87; // rdx
  char *v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rcx
  char *v91; // [rsp+0h] [rbp-78h]
  int v93; // [rsp+18h] [rbp-60h]
  int v94; // [rsp+18h] [rbp-60h]
  int v95; // [rsp+18h] [rbp-60h]
  _QWORD *v96; // [rsp+18h] [rbp-60h]
  int v97; // [rsp+18h] [rbp-60h]
  int v98; // [rsp+18h] [rbp-60h]
  int v99; // [rsp+18h] [rbp-60h]
  int v100; // [rsp+18h] [rbp-60h]
  int v101; // [rsp+18h] [rbp-60h]
  int v102; // [rsp+18h] [rbp-60h]
  __int64 v103; // [rsp+20h] [rbp-58h]
  int v105; // [rsp+30h] [rbp-48h]
  size_t v106; // [rsp+30h] [rbp-48h]
  size_t v107; // [rsp+30h] [rbp-48h]
  size_t v108; // [rsp+30h] [rbp-48h]
  size_t v109; // [rsp+30h] [rbp-48h]
  size_t n; // [rsp+38h] [rbp-40h]
  size_t na; // [rsp+38h] [rbp-40h]

  v7 = a5;
  v8 = a6;
  v9 = a5;
  v10 = a1;
  v11 = a4;
  if ( a4 <= a5 )
    v7 = a4;
  v91 = a1;
  if ( a7 >= v7 )
    goto LABEL_49;
  while ( 2 )
  {
    if ( v11 <= v9 )
    {
      v14 = v91;
      v18 = &a2[8 * (v9 / 2)];
      v22 = v9 / 2;
      v28 = (a2 - v91) >> 3;
      v29 = *(_DWORD **)v18;
      if ( a2 - v91 <= 0 )
      {
        LODWORD(v103) = 0;
LABEL_32:
        v9 -= v9 / 2;
        if ( v22 < v11 )
          goto LABEL_33;
        goto LABEL_13;
      }
      v30 = v29[6];
      while ( 1 )
      {
        while ( 1 )
        {
          v31 = &v14[8 * (v28 >> 1)];
          v32 = *(_QWORD *)v31;
          if ( v30 >= *(_DWORD *)(*(_QWORD *)v31 + 24LL) )
            break;
LABEL_29:
          v28 >>= 1;
LABEL_30:
          if ( v28 <= 0 )
          {
LABEL_31:
            v103 = (v14 - v91) >> 3;
            v11 -= v103;
            goto LABEL_32;
          }
        }
        if ( v30 == *(_DWORD *)(*(_QWORD *)v31 + 24LL) )
        {
          v36 = *(_DWORD *)(v32 + 28);
          if ( v29[7] < v36 )
            goto LABEL_29;
          if ( v29[7] == v36 && v29[8] < *(_DWORD *)(v32 + 32) )
          {
            v28 >>= 1;
            goto LABEL_30;
          }
        }
        v14 = v31 + 8;
        v28 = v28 - (v28 >> 1) - 1;
        if ( v28 <= 0 )
          goto LABEL_31;
      }
    }
    v13 = v11 / 2;
    v14 = &v91[8 * (v11 / 2)];
    v103 = v11 / 2;
    v15 = (a3 - a2) >> 3;
    v16 = *(_DWORD **)v14;
    if ( a3 - a2 <= 0 )
    {
      v11 -= v13;
      if ( a7 >= 0 )
      {
        v18 = a2;
        LODWORD(v22) = 0;
        if ( v11 > 0 )
          goto LABEL_90;
      }
      v18 = a2;
      LODWORD(v22) = 0;
      if ( a7 < v11 )
      {
        if ( v14 == a2 )
        {
          v24 = v14;
          goto LABEL_40;
        }
        goto LABEL_90;
      }
      goto LABEL_14;
    }
    v17 = v16[6];
    v18 = a2;
    do
    {
      while ( 1 )
      {
        v19 = v15 >> 1;
        v20 = &v18[8 * (v15 >> 1)];
        v21 = *(_QWORD *)v20;
        if ( *(_DWORD *)(*(_QWORD *)v20 + 24LL) < v17 )
        {
LABEL_10:
          v18 = v20 + 8;
          v15 = v15 - v19 - 1;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(*(_QWORD *)v20 + 24LL) == v17 )
        {
          v27 = v16[7];
          if ( *(_DWORD *)(v21 + 28) < v27 )
            goto LABEL_10;
          if ( *(_DWORD *)(v21 + 28) == v27 && *(_DWORD *)(v21 + 32) < v16[8] )
            break;
        }
        v15 >>= 1;
        if ( v19 <= 0 )
          goto LABEL_12;
      }
      v18 = v20 + 8;
      v15 = v15 - v19 - 1;
LABEL_11:
      ;
    }
    while ( v15 > 0 );
LABEL_12:
    v11 -= v13;
    v22 = (v18 - a2) >> 3;
    v9 -= v22;
    if ( v22 >= v11 )
      goto LABEL_13;
LABEL_33:
    if ( a7 >= v22 )
    {
      if ( v22 )
      {
        v33 = a2 - v14;
        if ( v18 - a2 > 8 )
        {
          v106 = a2 - v14;
          v94 = v22;
          memmove(a6, a2, v18 - a2);
          v34 = v94;
          if ( a2 - v14 <= 8 )
          {
            if ( v106 == 8 )
              *((_QWORD *)v18 - 1) = *(_QWORD *)v14;
          }
          else
          {
            memmove(&v18[-v106], v14, v106);
            v34 = v94;
          }
          v95 = v34;
          memmove(v14, a6, v18 - a2);
          LODWORD(v22) = v95;
          goto LABEL_39;
        }
        if ( v18 - a2 != 8 )
        {
          if ( v33 <= 8 )
          {
            if ( v33 == 8 )
              *((_QWORD *)v18 - 1) = *(_QWORD *)v14;
          }
          else
          {
            v97 = v22;
            memmove(&v18[-v33], v14, a2 - v14);
            LODWORD(v22) = v97;
          }
          goto LABEL_39;
        }
        v81 = *(_DWORD **)a2;
        *(_QWORD *)a6 = *(_QWORD *)a2;
        if ( v33 > 8 )
        {
          v98 = v22;
          memmove(&v18[-v33], v14, v33);
          LODWORD(v22) = v98;
          goto LABEL_110;
        }
        if ( v33 == 8 )
        {
          *((_QWORD *)v18 - 1) = *(_QWORD *)v14;
LABEL_110:
          v81 = *(_DWORD **)a6;
        }
        *(_QWORD *)v14 = v81;
LABEL_39:
        v24 = &v14[v18 - a2];
        a2 = v18;
        goto LABEL_40;
      }
LABEL_90:
      a2 = v18;
      v24 = v14;
      goto LABEL_40;
    }
LABEL_13:
    if ( a7 >= v11 )
    {
LABEL_14:
      if ( v11 )
      {
        v23 = v18 - a2;
        v24 = &v18[-(a2 - v14)];
        if ( a2 - v14 > 8 )
        {
          n = v18 - a2;
          v105 = v22;
          memmove(a6, v14, a2 - v14);
          v25 = a2 - v14;
          v26 = v105;
          if ( v18 - a2 <= 8 )
          {
            if ( n == 8 )
              *(_QWORD *)v14 = *(_QWORD *)a2;
          }
          else
          {
            memmove(v14, a2, n);
            v26 = v105;
            v25 = a2 - v14;
          }
          v93 = v26;
          memmove(&v18[-(a2 - v14)], a6, v25);
          LODWORD(v22) = v93;
          goto LABEL_19;
        }
        if ( a2 - v14 != 8 )
        {
          if ( v23 <= 8 )
          {
            if ( v23 == 8 )
              *(_QWORD *)v14 = *(_QWORD *)a2;
          }
          else
          {
            v99 = v22;
            memmove(v14, a2, v18 - a2);
            LODWORD(v22) = v99;
          }
          goto LABEL_19;
        }
        v86 = *(_DWORD **)v14;
        *(_QWORD *)a6 = *(_QWORD *)v14;
        if ( v23 > 8 )
        {
          v102 = v22;
          memmove(v14, a2, v18 - a2);
          LODWORD(v22) = v102;
          goto LABEL_125;
        }
        if ( v23 == 8 )
        {
          *(_QWORD *)v14 = *(_QWORD *)a2;
LABEL_125:
          v86 = *(_DWORD **)a6;
        }
        *((_QWORD *)v18 - 1) = v86;
        goto LABEL_19;
      }
LABEL_50:
      a2 = v18;
      v24 = v18;
      goto LABEL_40;
    }
    if ( v14 == a2 )
      goto LABEL_50;
    if ( v18 == a2 )
      goto LABEL_90;
    v37 = (v18 - v14) >> 3;
    v38 = (a2 - v14) >> 3;
    if ( v38 == v37 - v38 )
    {
      v73 = a2 - 8 - v14;
      if ( v73 <= 8 || (unsigned __int64)(v14 + 15 - a2) <= 0x1E )
      {
        v87 = a2;
        v88 = v14;
        do
        {
          v89 = *(_QWORD *)v87;
          v90 = *(_QWORD *)v88;
          v88 += 8;
          v87 += 8;
          *((_QWORD *)v88 - 1) = v89;
          *((_QWORD *)v87 - 1) = v90;
        }
        while ( a2 != v88 );
      }
      else
      {
        v74 = 0;
        v75 = (v73 >> 3) + 1;
        do
        {
          v76 = _mm_loadu_si128((const __m128i *)&v14[v74]);
          *(__m128i *)&v14[v74] = _mm_loadu_si128((const __m128i *)&a2[v74]);
          *(__m128i *)&a2[v74] = v76;
          v74 += 16;
        }
        while ( v74 != 16 * (v75 >> 1) );
        if ( (v75 & 1) != 0 )
        {
          v77 = 8 * (v75 & 0xFFFFFFFFFFFFFFFELL);
          v78 = &a2[v77];
          v79 = &v14[v77];
          v80 = *(_QWORD *)v79;
          *(_QWORD *)v79 = *(_QWORD *)v78;
          *(_QWORD *)v78 = v80;
        }
      }
      v24 = a2;
      goto LABEL_19;
    }
    v39 = v18;
    v107 = (size_t)v18;
    v40 = (int)v14;
    v41 = v39 - a2;
    v42 = v14;
    v24 = &v14[v41];
    while ( 2 )
    {
      v43 = v37 - v38;
      if ( v38 >= (__int64)(v37 - v38) )
      {
LABEL_68:
        v53 = 8 * v37;
        v54 = &v42[v37];
        if ( v43 == 1 )
        {
          LODWORD(v14) = v40;
          v85 = v42[(unsigned __int64)v53 / 8 - 1];
          v18 = (char *)v107;
          if ( v53 - 8 <= 8 )
          {
            if ( v53 == 16 )
              *(v54 - 1) = *v42;
          }
          else
          {
            v109 = v42[(unsigned __int64)v53 / 8 - 1];
            v101 = v22;
            memmove(v42 + 1, v42, v53 - 8);
            LODWORD(v22) = v101;
            v85 = v109;
          }
          *v42 = v85;
          goto LABEL_19;
        }
        v55 = 8 * v38;
        v96 = &v42[v38];
        if ( v38 <= 0 )
        {
          v42 += v38;
          goto LABEL_78;
        }
        if ( (unsigned __int64)(v38 - 1) <= 1 )
        {
          v69 = &v42[v38];
          v70 = 0;
        }
        else
        {
          v56 = v53 - 16;
          v57 = v55 - 16;
          if ( v55 <= v53 - 16 || v53 <= v57 )
          {
            v58 = (char *)v42 + v57;
            v59 = 0;
            v60 = (char *)v42 + v56;
            v61 = 0;
            do
            {
              v62 = _mm_loadu_si128((const __m128i *)&v58[v61]);
              ++v59;
              *(__m128i *)&v58[v61] = _mm_loadu_si128((const __m128i *)&v60[v61]);
              *(__m128i *)&v60[v61] = v62;
              v61 -= 16;
            }
            while ( v59 != (unsigned __int64)v38 >> 1 );
            if ( (v38 & 1) != 0 )
            {
              v63 = -8LL * (v38 & 0xFFFFFFFFFFFFFFFELL) - 8;
              v64 = (_QWORD *)((char *)v96 + v63);
              v65 = (_QWORD *)((char *)v54 + v63);
              v66 = *v64;
              *v64 = *v65;
              *v65 = v66;
            }
            goto LABEL_77;
          }
          v69 = &v42[v38];
          v70 = 0;
        }
        do
        {
          v71 = *(v69 - 1);
          v72 = *(v54 - 1);
          ++v70;
          --v69;
          --v54;
          *v69 = v72;
          *v54 = v71;
        }
        while ( v38 != v70 );
LABEL_77:
        v42 = &v96[v55 / 0xFFFFFFFFFFFFFFF8LL];
LABEL_78:
        v38 = v37 % v43;
        if ( !(v37 % v43) )
        {
LABEL_92:
          LODWORD(v14) = v40;
          v18 = (char *)v107;
          goto LABEL_19;
        }
        v37 = v43;
        continue;
      }
      break;
    }
    while ( v38 != 1 )
    {
      v44 = (unsigned __int64)&v42[v38];
      if ( (__int64)v43 > 0 )
      {
        if ( v43 - 1 <= 1 || v44 < (unsigned __int64)(v42 + 2) && 8 * v38 + 16 > 0 )
        {
          for ( i = 0; i != v43; ++i )
          {
            v68 = v42[i];
            v42[i] = *(_QWORD *)(v44 + 8 * i);
            *(_QWORD *)(v44 + 8 * i) = v68;
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
      v52 = v37 % v38;
      if ( !(v37 % v38) )
        goto LABEL_92;
      v37 = v38;
      v38 -= v52;
      v43 = v37 - v38;
      if ( v38 >= (__int64)(v37 - v38) )
        goto LABEL_68;
    }
    v82 = 8 * v37;
    LODWORD(v14) = v40;
    v83 = *v42;
    v18 = (char *)v107;
    v84 = 8 * v37 - 8;
    if ( v84 <= 8 )
    {
      if ( 8 * v37 == 16 )
        *v42 = v42[1];
    }
    else
    {
      na = 8 * v37;
      v108 = *v42;
      v100 = v22;
      memmove(v42, v42 + 1, v84);
      LODWORD(v22) = v100;
      v83 = v108;
      v82 = na;
    }
    *(_QWORD *)((char *)v42 + v82 - 8) = v83;
LABEL_19:
    a2 = v18;
LABEL_40:
    sub_7AD600((_DWORD)v91, (_DWORD)v14, (_DWORD)v24, v103, v22, (_DWORD)a6, a7);
    v35 = v11;
    if ( v9 <= v11 )
      v35 = v9;
    if ( v35 > a7 )
    {
      v91 = v24;
      continue;
    }
    break;
  }
  v8 = a6;
  v10 = v24;
LABEL_49:
  sub_7AD000(v10, a2, a3, v11, v9, v8);
}

