char __fastcall sub_1A9DDF0(__int64 *a1, __int64 a2, __int64 a3, __m128 a4, double a5)
{
  char result; // al
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // r12
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rsi
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // ebp
  char v38; // r15
  char v39; // r9
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // esi
  __int64 *v44; // rax
  __int64 v45; // rdx
  int v46; // ebp
  size_t v47; // rax
  char *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int16 v51; // r14
  __int16 v52; // bp
  __int64 v53; // rsi
  __int64 v54; // r12
  __int64 v55; // rbp
  unsigned __int64 v56; // rcx
  int v57; // edx
  __int64 v58; // r13
  unsigned __int64 v59; // rdi
  unsigned int i; // eax
  __int64 *v61; // rsi
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // r9
  unsigned int v68; // r11d
  _QWORD *v69; // rcx
  _QWORD *ii; // rdx
  __int64 v71; // rcx
  unsigned int v72; // ebx
  __int64 v73; // rsi
  int v74; // r8d
  int v75; // r13d
  _QWORD *v76; // r12
  unsigned int jj; // edx
  _QWORD *v78; // rdi
  __int64 v79; // r10
  int v80; // esi
  bool v81; // zf
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  char *v84; // rcx
  const __m128i *v85; // rdx
  __m128 *v86; // rax
  _BYTE *v87; // rbp
  int v88; // edx
  int v89; // eax
  _QWORD *n; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r15
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  _QWORD *v115; // rax
  unsigned __int64 v116; // rdx
  __int64 v117; // rcx
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rdi
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // r11
  unsigned int v123; // r9d
  _QWORD *v124; // rcx
  _QWORD *j; // rdx
  __int64 v126; // rcx
  __int64 v127; // rsi
  int v128; // r8d
  int v129; // r13d
  _QWORD *v130; // r12
  unsigned int k; // edx
  _QWORD *v132; // rdi
  __int64 v133; // r10
  int v134; // edx
  _QWORD *m; // rdx
  unsigned int v136; // edx
  int v137; // eax
  const char *v138; // r14
  size_t v139; // r15
  unsigned int v140; // edx
  unsigned __int64 v141; // [rsp+0h] [rbp-188h]
  __int64 v142; // [rsp+0h] [rbp-188h]
  unsigned __int8 v143; // [rsp+0h] [rbp-188h]
  __int64 v144; // [rsp+0h] [rbp-188h]
  __int64 v145; // [rsp+0h] [rbp-188h]
  char *v148; // [rsp+20h] [rbp-168h]
  __int64 v149; // [rsp+20h] [rbp-168h]
  unsigned int v150; // [rsp+20h] [rbp-168h]
  unsigned __int64 v151; // [rsp+30h] [rbp-158h]
  __int64 v152; // [rsp+30h] [rbp-158h]
  __int64 v153; // [rsp+38h] [rbp-150h]
  unsigned __int8 v154; // [rsp+4Eh] [rbp-13Ah] BYREF
  char v155; // [rsp+4Fh] [rbp-139h] BYREF
  _QWORD *v156; // [rsp+50h] [rbp-138h] BYREF
  __int64 v157; // [rsp+58h] [rbp-130h]
  unsigned int v158; // [rsp+60h] [rbp-128h]
  void *ptr; // [rsp+68h] [rbp-120h] BYREF
  __int64 v160; // [rsp+70h] [rbp-118h]
  char v161[8]; // [rsp+78h] [rbp-110h] BYREF
  __int64 v162; // [rsp+80h] [rbp-108h] BYREF
  int v163; // [rsp+88h] [rbp-100h]
  void *v164; // [rsp+98h] [rbp-F0h]
  char v165; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v166; // [rsp+C0h] [rbp-C8h] BYREF
  _QWORD *v167; // [rsp+C8h] [rbp-C0h]
  __int64 v168; // [rsp+D0h] [rbp-B8h]
  unsigned __int8 *v169[11]; // [rsp+E0h] [rbp-A8h] BYREF
  char v170; // [rsp+138h] [rbp-50h]
  unsigned int v171; // [rsp+140h] [rbp-48h]
  char v172; // [rsp+144h] [rbp-44h]

  result = *(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6;
  if ( result )
    return result;
  v156 = nullptr;
  v157 = 0;
  v158 = 0;
  ptr = v161;
  v160 = 0;
  v7 = sub_B8E970(a3 + 48);
  v12 = v7;
  if ( !v7 )
    goto LABEL_7;
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x4B )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v13;
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x4B )
        goto LABEL_156;
    }
LABEL_7:
    v14 = *(_QWORD *)(a3 + 120);
    if ( v14 )
      goto LABEL_8;
    goto LABEL_162;
  }
LABEL_156:
  v116 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  v117 = *(_QWORD *)(v12 + 40) & 7LL;
  if ( (*(_QWORD *)(v12 + 40) & 7) != 0 )
    v116 = 0;
  LODWORD(v167) = (*(_WORD *)(v12 + 72) & 0x4000) != 0;
  v166 = v116;
  *(_QWORD *)sub_1A9D420((__int64)&v156, (__int64)&v166, v116, v117, v10, v11) = v12;
  while ( 1 )
  {
    v118 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v12 = v118;
    if ( !v118 )
      break;
    if ( (*(_BYTE *)(v118 + 28) & 0x7F) == 0x4B )
      goto LABEL_156;
  }
  v14 = *(_QWORD *)(a3 + 120);
  if ( !v14 )
  {
LABEL_162:
    sub_A794E0((__int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96), v8, v9, v10, v11);
    v14 = *(_QWORD *)(a3 + 120);
  }
LABEL_8:
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v15 )
  {
    if ( (*(_BYTE *)(v15 + 72) & 1) != 0 )
    {
      sub_BA8900(a3);
      v15 = *(_QWORD *)(a3 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v16 = *(_QWORD *)(v15 + 56);
  }
  else
  {
    v16 = 0;
  }
  v166 = v16;
  sub_1A93120(&v166);
  v19 = v166;
  if ( v166 )
  {
LABEL_13:
    v20 = sub_B8E970(v19 + 48);
    v21 = v20;
    if ( !v20 )
    {
LABEL_18:
      while ( 1 )
      {
        v19 = *(_QWORD *)(v19 + 128);
        if ( !v19 )
          goto LABEL_23;
        while ( *(char *)(v19 + 28) >= 0 )
        {
          v23 = *(_QWORD *)(v19 + 40);
          if ( (v23 & 7) != 0 || (v23 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_13;
          v19 = *(_QWORD *)(v19 + 128);
          if ( !v19 )
            goto LABEL_23;
        }
      }
    }
    if ( (*(_BYTE *)(v20 + 28) & 0x7F) != 0x4B )
    {
      do
      {
        v22 = *(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v21 = v22;
        if ( !v22 )
          goto LABEL_18;
      }
      while ( (*(_BYTE *)(v22 + 28) & 0x7F) != 0x4B );
    }
LABEL_64:
    v54 = v158;
    v55 = (__int64)v156;
    v56 = *(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v21 + 40) & 7) != 0 )
      v56 = 0;
    v57 = (*(_WORD *)(v21 + 72) & 0x4000) != 0;
    v163 = v57;
    v162 = v56;
    if ( v158 )
    {
      v18 = 1;
      v58 = 0;
      v59 = v158 - 1;
      for ( i = v59
              & (((0xBF58476D1CE4E5B9LL
                 * ((unsigned int)(37 * v57)
                  | ((unsigned __int64)(((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4)) << 32))) >> 31)
               ^ (756364221 * v57)); ; i = v59 & v89 )
      {
        v61 = &v156[3 * i];
        v17 = *v61;
        if ( v56 == *v61 && v57 == *((_DWORD *)v61 + 2) )
        {
          v62 = *((unsigned int *)v61 + 4);
          goto LABEL_77;
        }
        if ( v17 == -4096 )
          break;
        if ( v17 == -8192 && *((_DWORD *)v61 + 2) == -2 && !v58 )
          v58 = (__int64)&v156[3 * i];
LABEL_121:
        v89 = v18 + i;
        v18 = (unsigned int)(v18 + 1);
      }
      if ( *((_DWORD *)v61 + 2) != -1 )
        goto LABEL_121;
      if ( !v58 )
        v58 = (__int64)&v156[3 * i];
      v80 = v157 + 1;
      v17 = (unsigned int)(4 * (v157 + 1));
      v166 = v58;
      if ( (unsigned int)v17 < 3 * v158 )
      {
        v17 = v158 >> 3;
        if ( v158 - HIDWORD(v157) - v80 > (unsigned int)v17 )
        {
LABEL_105:
          v81 = *(_QWORD *)v58 == -4096;
          LODWORD(v157) = v80;
          if ( !v81 || *(_DWORD *)(v58 + 8) != -1 )
            --HIDWORD(v157);
          *(_DWORD *)(v58 + 8) = v57;
          *(_DWORD *)(v58 + 16) = 0;
          *(_QWORD *)v58 = v56;
          v168 = 0;
          v166 = v162;
          LODWORD(v167) = v163;
          v82 = (unsigned int)v160;
          v83 = (unsigned int)v160 + 1LL;
          if ( v83 > HIDWORD(v160) )
          {
            v87 = ptr;
            if ( ptr > &v166 || &v166 >= (__int64 *)((char *)ptr + 24 * (unsigned int)v160) )
            {
              sub_2237220(&ptr, v161, v83, 24);
              v84 = (char *)ptr;
              v82 = (unsigned int)v160;
              v85 = (const __m128i *)&v166;
            }
            else
            {
              sub_2237220(&ptr, v161, v83, 24);
              v84 = (char *)ptr;
              v82 = (unsigned int)v160;
              v85 = (const __m128i *)((char *)ptr + (char *)&v166 - v87);
            }
          }
          else
          {
            v84 = (char *)ptr;
            v85 = (const __m128i *)&v166;
          }
          a4 = (__m128)_mm_loadu_si128(v85);
          v86 = (__m128 *)&v84[24 * v82];
          *v86 = a4;
          v86[1].m128_u64[0] = v85[1].m128i_u64[0];
          v62 = (unsigned int)v160;
          LODWORD(v160) = v160 + 1;
          *(_DWORD *)(v58 + 16) = v62;
LABEL_77:
          *((_QWORD *)ptr + 3 * v62 + 2) = v21;
          while ( 1 )
          {
            v63 = *(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v21 = v63;
            if ( !v63 )
              goto LABEL_18;
            if ( (*(_BYTE *)(v63 + 28) & 0x7F) == 0x4B )
              goto LABEL_64;
          }
        }
        v119 = (v59 >> 1) | v59;
        v120 = (((((((v119 | (v119 >> 2)) >> 4) | v119 | (v119 >> 2)) >> 8)
                | ((v119 | (v119 >> 2)) >> 4)
                | v119
                | (v119 >> 2)) >> 16)
              | ((((v119 | (v119 >> 2)) >> 4) | v119 | (v119 >> 2)) >> 8)
              | ((v119 | (v119 >> 2)) >> 4)
              | v119
              | (v119 >> 2))
             + 1;
        if ( (unsigned int)v120 < 0x40 )
          LODWORD(v120) = 64;
        v158 = v120;
        v121 = (_QWORD *)sub_22300B0(24LL * (unsigned int)v120, 8, 64, v56, v17, v18);
        v156 = v121;
        if ( v55 )
        {
          v157 = 0;
          v152 = 24 * v54;
          v122 = v55 + 24 * v54;
          v123 = v158;
          v124 = &v121[3 * v158];
          for ( j = v121; v124 != j; *((_DWORD *)j - 4) = -1 )
          {
            *j = -4096;
            j += 3;
          }
          v126 = v55;
          v150 = v123 - 1;
          while ( 1 )
          {
            v127 = *(_QWORD *)v126;
            if ( *(_QWORD *)v126 == -4096 )
            {
              if ( *(_DWORD *)(v126 + 8) != -1 )
                goto LABEL_175;
            }
            else if ( v127 != -8192 || *(_DWORD *)(v126 + 8) != -2 )
            {
LABEL_175:
              if ( !v123 )
              {
                *(_QWORD *)&dword_0 = *(_QWORD *)v126;
                BUG();
              }
              v128 = *(_DWORD *)(v126 + 8);
              v129 = 1;
              v130 = nullptr;
              for ( k = v150
                      & (((0xBF58476D1CE4E5B9LL
                         * ((unsigned int)(37 * v128)
                          | ((unsigned __int64)(((unsigned int)v127 >> 9) ^ ((unsigned int)v127 >> 4)) << 32))) >> 31)
                       ^ (756364221 * v128)); ; k = v150 & v136 )
              {
                v132 = &v121[3 * k];
                v133 = *v132;
                if ( v127 == *v132 && v128 == *((_DWORD *)v132 + 2) )
                  break;
                if ( v133 == -4096 )
                {
                  if ( *((_DWORD *)v132 + 2) == -1 )
                  {
                    if ( v130 )
                      v132 = v130;
                    break;
                  }
                }
                else if ( v133 == -8192 && *((_DWORD *)v132 + 2) == -2 && !v130 )
                {
                  v130 = &v121[3 * k];
                }
                v136 = v129 + k;
                ++v129;
              }
              *((_DWORD *)v132 + 2) = v128;
              v134 = *(_DWORD *)(v126 + 16);
              *v132 = v127;
              *((_DWORD *)v132 + 4) = v134;
              LODWORD(v157) = v157 + 1;
            }
            v126 += 24;
            if ( v122 == v126 )
            {
              operator delete(v55, v152, 8);
              goto LABEL_104;
            }
          }
        }
        v157 = 0;
        for ( m = &v121[3 * v158]; m != v121; *((_DWORD *)v121 - 4) = -1 )
        {
          *v121 = -4096;
          v121 += 3;
        }
LABEL_104:
        sub_BAA060((__int64 *)&v156, &v162, &v166);
        v56 = v162;
        v57 = v163;
        v58 = v166;
        v80 = v157 + 1;
        goto LABEL_105;
      }
    }
    else
    {
      v166 = 0;
    }
    v64 = (((((((2 * v158 - 1) | ((unsigned __int64)(2 * v158 - 1) >> 1)) >> 2)
            | (2 * v158 - 1)
            | ((unsigned __int64)(2 * v158 - 1) >> 1)) >> 4)
          | (((2 * v158 - 1) | ((unsigned __int64)(2 * v158 - 1) >> 1)) >> 2)
          | (2 * v158 - 1)
          | ((unsigned __int64)(2 * v158 - 1) >> 1)) >> 8)
        | (((((2 * v158 - 1) | ((unsigned __int64)(2 * v158 - 1) >> 1)) >> 2)
          | (2 * v158 - 1)
          | ((unsigned __int64)(2 * v158 - 1) >> 1)) >> 4)
        | (((2 * v158 - 1) | ((unsigned __int64)(2 * v158 - 1) >> 1)) >> 2)
        | (2 * v158 - 1)
        | ((unsigned __int64)(2 * v158 - 1) >> 1);
    v65 = ((v64 >> 16) | v64) + 1;
    if ( (unsigned int)v65 < 0x40 )
      LODWORD(v65) = 64;
    v158 = v65;
    v66 = (_QWORD *)sub_22300B0(24LL * (unsigned int)v65, 8, 64, v56, v17, v18);
    v156 = v66;
    if ( !v55 )
    {
      v157 = 0;
      for ( n = &v66[3 * v158]; n != v66; *((_DWORD *)v66 - 4) = -1 )
      {
        *v66 = -4096;
        v66 += 3;
      }
      goto LABEL_104;
    }
    v157 = 0;
    v149 = 24 * v54;
    v67 = v55 + 24 * v54;
    v68 = v158;
    v69 = &v66[3 * v158];
    for ( ii = v66; v69 != ii; *((_DWORD *)ii - 4) = -1 )
    {
      *ii = -4096;
      ii += 3;
    }
    v71 = v55;
    if ( v55 == v67 )
      goto LABEL_103;
    v151 = v21;
    v72 = v68 - 1;
LABEL_89:
    v73 = *(_QWORD *)v71;
    if ( *(_QWORD *)v71 == -4096 )
    {
      if ( *(_DWORD *)(v71 + 8) == -1 )
        goto LABEL_101;
    }
    else if ( v73 == -8192 && *(_DWORD *)(v71 + 8) == -2 )
    {
      goto LABEL_101;
    }
    if ( !v68 )
    {
      *(_QWORD *)&dword_0 = *(_QWORD *)v71;
      BUG();
    }
    v74 = *(_DWORD *)(v71 + 8);
    v75 = 1;
    v76 = nullptr;
    for ( jj = v72
             & (((0xBF58476D1CE4E5B9LL
                * ((unsigned int)(37 * v74)
                 | ((unsigned __int64)(((unsigned int)v73 >> 9) ^ ((unsigned int)v73 >> 4)) << 32))) >> 31)
              ^ (756364221 * v74)); ; jj = v72 & v140 )
    {
      v78 = &v66[3 * jj];
      v79 = *v78;
      if ( v73 == *v78 && v74 == *((_DWORD *)v78 + 2) )
        goto LABEL_118;
      if ( v79 == -4096 )
      {
        if ( *((_DWORD *)v78 + 2) == -1 )
        {
          if ( v76 )
            v78 = v76;
LABEL_118:
          *((_DWORD *)v78 + 2) = v74;
          v88 = *(_DWORD *)(v71 + 16);
          *v78 = v73;
          *((_DWORD *)v78 + 4) = v88;
          LODWORD(v157) = v157 + 1;
LABEL_101:
          v71 += 24;
          if ( v67 == v71 )
          {
            v21 = v151;
LABEL_103:
            operator delete(v55, v149, 8);
            goto LABEL_104;
          }
          goto LABEL_89;
        }
      }
      else if ( v79 == -8192 && *((_DWORD *)v78 + 2) == -2 && !v76 )
      {
        v76 = &v66[3 * jj];
      }
      v140 = v75 + jj;
      ++v75;
    }
  }
LABEL_23:
  v24 = (char *)ptr;
  v148 = (char *)ptr + 24 * (unsigned int)v160;
  if ( v148 == ptr )
    goto LABEL_130;
  do
  {
    v50 = *((_QWORD *)v24 + 2);
    v51 = *(_WORD *)(v50 + 74);
    v52 = *(_WORD *)(v50 + 72);
    if ( (v51 & 0x140) != 0 )
      goto LABEL_43;
    v53 = *(_QWORD *)(v50 + 80);
    if ( (v52 & 0x4000) != 0 )
      v25 = sub_BAA9D0(a2, v53, 0, 0, v17, v18);
    else
      v25 = sub_BAA9D0(a2, v53, 1, 0, v17, v18);
    v141 = v25;
    v27 = *(_QWORD *)(v50 + 88);
    if ( (*(_BYTE *)(v50 + 73) & 0x40) != 0 )
      v28 = sub_BAA9D0(a2, v27, 0, 0, v25, v26);
    else
      v28 = sub_BAA9D0(a2, v27, 1, 0, v25, v26);
    v17 = v141;
    v29 = v28;
    if ( !v141 || (*(_BYTE *)(v141 + 58) & 0x10) != 0 )
    {
      if ( !v28 || (*(_BYTE *)(v28 + 58) & 0x10) != 0 )
        goto LABEL_43;
LABEL_38:
      v31 = *(_DWORD *)(v29 + 24);
      v32 = 0;
      sub_168B9F0((__int64)&v166, a1, v31, 0x1A98u, 0);
      if ( (*(_QWORD *)(v50 + 40) & 7) == 0 )
        v32 = *(_QWORD *)(v50 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v170 )
      {
        sub_AE9DF0(v169, v32, 5u);
        if ( !v170 )
          goto LABEL_145;
      }
      else
      {
        if ( !v172 )
        {
LABEL_42:
          sub_15F7200(&v166);
          sub_168B9F0((__int64)&v166, a1, *(_DWORD *)(v50 + 24), 0x189Au, 0);
          sub_15F7200(&v166);
          goto LABEL_43;
        }
        v144 = sub_168B9E0(&v166);
        v95 = v168;
        if ( v168 )
          v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
        v162 = v95;
        v96 = sub_1587BC0(v144, &v162, v91, v92, v93, v94);
        sub_AE9DF0((unsigned __int8 **)(*v96 + 32LL * v171 + 8), v32, 5u);
        if ( !v170 )
        {
LABEL_145:
          if ( v172 )
          {
            v101 = sub_168B9E0(&v166);
            v102 = v168;
            if ( v168 )
              v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
            v162 = v102;
            v103 = sub_1587BC0(v101, &v162, v97, v98, v99, v100);
            sub_AE9DF0((unsigned __int8 **)(*v103 + 32LL * v171 + 8), 1, 2u);
          }
          goto LABEL_42;
        }
      }
      sub_AE9DF0(v169, 1, 2u);
      goto LABEL_42;
    }
    if ( v28 && (*(_BYTE *)(v28 + 58) & 0x10) != 0 )
      v29 = 0;
    sub_168B9F0((__int64)&v166, a1, *(_DWORD *)(v141 + 24), 0x1A98u, 0);
    v30 = 0;
    if ( (*(_QWORD *)(v50 + 40) & 7) == 0 )
      v30 = *(_QWORD *)(v50 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    v142 = v30;
    if ( v170 )
    {
      sub_AE9DF0(v169, v30, 5u);
      if ( v170 )
        goto LABEL_136;
    }
    else
    {
      if ( !v172 )
        goto LABEL_37;
      v153 = sub_168B9E0(&v166);
      v108 = v168;
      if ( v168 )
        v108 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
      v162 = v108;
      v109 = sub_1587BC0(v153, &v162, v104, v105, v106, v107);
      sub_AE9DF0((unsigned __int8 **)(*v109 + 32LL * v171 + 8), v142, 5u);
      if ( v170 )
      {
LABEL_136:
        sub_AE9DF0(v169, 0, 2u);
        goto LABEL_37;
      }
    }
    if ( v172 )
    {
      v145 = sub_168B9E0(&v166);
      v114 = v168;
      if ( v168 )
        v114 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v168 + 32LL))(v168);
      v162 = v114;
      v115 = sub_1587BC0(v145, &v162, v110, v111, v112, v113);
      sub_AE9DF0((unsigned __int8 **)(*v115 + 32LL * v171 + 8), 0, 2u);
    }
LABEL_37:
    sub_15F7200(&v166);
    sub_168B9F0((__int64)&v166, a1, *(_DWORD *)(v50 + 24), 0x189Au, 0);
    sub_15F7200(&v166);
    if ( v29 )
      goto LABEL_38;
LABEL_43:
    if ( (v52 & 0x48) == 8 )
    {
      v33 = *(_QWORD *)(v50 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v50 + 40) & 7) != 0 )
        v33 = 0;
      v34 = (_QWORD *)sub_BA91C0(a2, v33, ((*(_BYTE *)(v50 + 73) & 0x40) != 0) + 1);
      if ( v34 )
      {
        if ( v34[7] )
        {
          v35 = v34[8];
          v36 = v34[9];
          if ( !v35 || (*(_BYTE *)(v35 + 58) & 0x10) != 0 )
          {
            if ( v36 && (*(_BYTE *)(v36 + 58) & 0x10) == 0 )
            {
              v37 = *(_DWORD *)(v36 + 24);
              v38 = 1;
              v39 = 0;
LABEL_53:
              v143 = v39;
              sub_168B9F0((__int64)&v166, a1, v37, 0x1986u, 0);
              v40 = *(_QWORD *)(v50 + 40) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(v50 + 40) & 7) != 0 )
                v40 = 0;
              v162 = v40;
              v41 = sub_18175F0((__int64)&v166, &v162);
              v154 = v143;
              v42 = sub_1588420(v41, &v154);
              v155 = v38;
              sub_1588420(v42, (unsigned __int8 *)&v155);
              sub_15F7200(&v166);
              v43 = *(_DWORD *)(v50 + 52);
              if ( !v43 )
              {
                v44 = *(__int64 **)(v50 + 64);
                v45 = *v44;
                v167 = v44 + 1;
                v166 = v45;
                v46 = sub_F6CCB0(&v166, a4);
                sub_168B9F0((__int64)&v166, a1, *(_DWORD *)(v50 + 24), 0x16A5u, 0);
                v47 = j__strlen("(nonatomic) ");
                v48 = "(nonatomic) ";
                v49 = v47;
                goto LABEL_57;
              }
              if ( (v51 & 0x100) != 0 )
              {
                sub_168B9F0((__int64)&v166, a1, v37, 0x16A5u, 0);
              }
              else
              {
                v137 = sub_15F0EF0(*a1, v43, 0, (__m128i)a4, a5);
                v81 = v51 == 0;
                v138 = "nonatomic";
                if ( !v81 )
                  v138 = "nonatomic, ";
                v46 = v137;
                v139 = j__strlen(v138);
                sub_168B9F0((__int64)&v166, a1, *(_DWORD *)(v50 + 24), 0x16A5u, 0);
                v48 = (char *)v138;
                v49 = v139;
LABEL_57:
                sub_9EC740((__int64)&v162, v46, v48, v49, 0);
                sub_1589170((__int64)&v166, &v162);
                if ( v164 != &v165 )
                  operator delete(v164);
              }
              sub_15F7200(&v166);
              sub_168B9F0((__int64)&v166, a1, *(_DWORD *)(v50 + 24), 0x189Au, 0);
              sub_15F7200(&v166);
            }
          }
          else if ( !v36 || (*(_BYTE *)(v36 + 58) & 0x10) != 0 )
          {
            v37 = *(_DWORD *)(v35 + 24);
            v38 = 0;
            v39 = 1;
            goto LABEL_53;
          }
        }
      }
    }
    v24 += 24;
  }
  while ( v24 != v148 );
  v24 = (char *)ptr;
LABEL_130:
  if ( v24 != v161 )
    free(v24);
  return operator delete(v156, 24LL * v158, 8);
}
