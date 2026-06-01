void __fastcall sub_95EE00(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r14
  __int64 v7; // r11
  __int64 v10; // r12
  __int64 v11; // r10
  char *v12; // rbp
  __int64 v13; // r9
  __int64 v14; // r13
  int v15; // edx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rcx
  int v23; // edi
  unsigned int v24; // r11d
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 k; // rax
  __int64 v30; // rdx
  unsigned int v31; // r9d
  int v32; // edi
  int v33; // edx
  int v34; // eax
  __int64 v35; // r11
  __int64 *v36; // rdx
  __int64 *m; // rdi
  __int64 v38; // r8
  char *v39; // r13
  char *v40; // rcx
  __int64 v41; // rbp
  char *v42; // rdi
  __int64 v43; // r11
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r12
  __int64 v48; // rbp
  unsigned __int64 v49; // r8
  char *v50; // rdx
  _QWORD *v51; // r10
  __int64 v52; // r9
  __int64 v53; // rbx
  __m128i v54; // xmm0
  unsigned __int64 v55; // rdx
  __int64 v56; // r10
  __int64 v57; // rbx
  __int64 v58; // rdx
  char *v59; // rdx
  __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // rcx
  __m128i v63; // xmm0
  unsigned int v64; // eax
  __int64 *v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rsi
  unsigned int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rax
  char *v71; // rdx
  char *v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r10
  __int64 v75; // rbx
  __int64 v76; // rbx
  __int64 v77; // r10
  __int64 v78; // r9
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbx
  char *v83; // rsi
  __int64 v84; // r8
  __int64 v85; // r12
  char *v86; // r14
  char *v87; // rbp
  __int64 v88; // r9
  __int64 v89; // r10
  int v90; // ecx
  int v91; // eax
  int v92; // edi
  int v93; // edx
  int v94; // eax
  __int64 *v95; // rcx
  int v96; // edi
  __int64 v97; // rax
  unsigned int v98; // r11d
  __int64 v99; // rbx
  __int64 v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // r13
  __int64 n; // rax
  __int64 v104; // rdx
  unsigned int v105; // r12d
  __int64 v106; // rbp
  __int64 v107; // r8
  int v108; // edx
  char *v109; // r11
  __int64 v110; // rdi
  __int64 v111; // r13
  int v112; // eax
  int v113; // ebx
  int v114; // ecx
  int v115; // eax
  __int64 v116; // rdx
  int v117; // ebx
  unsigned int v118; // r9d
  __int64 v119; // rax
  __int64 v120; // r10
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r12
  __int64 i; // rcx
  __int64 v125; // rsi
  int v126; // ebx
  int v127; // esi
  int v128; // ecx
  __int64 v129; // r9
  __int64 v130; // rsi
  __int64 *j; // r9
  __int64 v132; // r10
  unsigned int v133; // eax
  __int64 v134; // rdx
  __int64 *v135; // rcx
  unsigned __int64 v136; // rsi
  int v137; // edx
  int v138; // eax
  int v139; // edi
  __int64 v140; // rax
  __int64 *v141; // r11
  __int64 *ii; // rax
  __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rdx
  char *v146; // rsi
  __int64 v147; // rax
  unsigned __int64 v148; // rdx
  unsigned __int64 v149; // rcx
  __m128i v150; // xmm0
  char *v151; // rdx
  char *v152; // rax
  __int64 v153; // rsi
  __int64 v154; // r8
  __int64 v155; // r8
  __int64 v156; // rsi
  __int64 v157; // [rsp+0h] [rbp-88h]
  unsigned __int64 v158; // [rsp+0h] [rbp-88h]
  __int64 v159; // [rsp+0h] [rbp-88h]
  unsigned int v160; // [rsp+0h] [rbp-88h]
  __int64 v161; // [rsp+8h] [rbp-80h]
  __int64 v162; // [rsp+8h] [rbp-80h]
  char *v163; // [rsp+10h] [rbp-78h]
  char *v164; // [rsp+18h] [rbp-70h]
  __int64 v165; // [rsp+20h] [rbp-68h]
  char *v166; // [rsp+20h] [rbp-68h]
  char *v168; // [rsp+30h] [rbp-58h]
  char *v169; // [rsp+30h] [rbp-58h]
  char *v170; // [rsp+38h] [rbp-50h]
  char *v171; // [rsp+38h] [rbp-50h]
  __int64 v172; // [rsp+40h] [rbp-48h]
  __int64 v173; // [rsp+40h] [rbp-48h]

  if ( !a5 || !a4 )
    return;
  v6 = a5;
  v7 = a4;
  if ( a4 + a5 == 2 )
    goto LABEL_86;
  while ( 1 )
  {
    if ( v7 <= v6 )
    {
      v163 = a1;
      v169 = a1;
      v171 = a2;
      v106 = (a2 - a1) >> 4;
      v173 = v7;
      v164 = &a2[16 * (v6 / 2)];
      v107 = *(_QWORD *)v164;
      v162 = *((_QWORD *)v164 + 1);
LABEL_95:
      if ( v106 <= 0 )
        goto LABEL_113;
      while ( 1 )
      {
        v108 = *(_DWORD *)(v107 + 12);
        v109 = &v163[16 * (v106 >> 1)];
        v110 = *(_QWORD *)v109;
        v111 = *((_QWORD *)v109 + 1);
        v112 = (*(_DWORD *)(v162 + 12) - v108) ^ (v108 << 8);
        v113 = (v108 - v112) << 10;
        v114 = v112 ^ ((v108 - v112) << 16);
        v115 = v112 - v108;
        v116 = *((unsigned int *)a6 + 2);
        v117 = (v114 + v115) ^ v113;
        v118 = v116 - 1;
        v119 = *a6;
        v120 = 24 * v116;
        v121 = *a6 + 24 * v116;
        v122 = 24LL * (v118 & v117);
        v123 = *a6 + v122;
        if ( v122 != v120 )
        {
          for ( i = *a6 + v122; v121 != i; i += 24 )
          {
            v125 = *(_QWORD *)i;
            if ( *(_QWORD *)i > 1u )
            {
              if ( *(_DWORD *)(i + 20) == v117 && v107 == v125 && v162 == *(_QWORD *)(i + 8) )
              {
                v160 = *(_DWORD *)(i + 16);
                goto LABEL_104;
              }
            }
            else if ( !v125 )
            {
              goto LABEL_103;
            }
          }
        }
        if ( v119 == v123 )
        {
LABEL_103:
          v160 = 0;
          goto LABEL_104;
        }
        v135 = (__int64 *)*a6;
        while ( 1 )
        {
          v136 = *v135;
          if ( (unsigned __int64)*v135 > 1 )
            break;
          if ( !v136 )
            goto LABEL_103;
LABEL_133:
          v135 += 3;
          if ( (__int64 *)v123 == v135 )
            goto LABEL_103;
        }
        if ( *((_DWORD *)v135 + 5) != v117 || v107 != v136 || v162 != v135[1] )
          goto LABEL_133;
        v160 = *((_DWORD *)v135 + 4);
LABEL_104:
        v126 = *(_DWORD *)(v110 + 12);
        v127 = (*(_DWORD *)(v111 + 12) - v126) ^ (v126 << 8);
        v128 = ((v127 ^ ((v126 - v127) << 16)) + v127 - v126) ^ ((v126 - v127) << 10);
        v129 = 24LL * (v128 & v118);
        v130 = v119 + v129;
        if ( v120 != v129 )
        {
          for ( j = (__int64 *)(v119 + v129); (__int64 *)v121 != j; j += 3 )
          {
            v132 = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *((_DWORD *)j + 5) == v128 && v110 == v132 && v111 == j[1] )
              {
                v133 = *((_DWORD *)j + 4);
                goto LABEL_119;
              }
            }
            else if ( !v132 )
            {
              goto LABEL_111;
            }
          }
        }
        while ( v130 != v119 )
        {
          v134 = *(_QWORD *)v119;
          if ( *(_QWORD *)v119 > 1u )
          {
            if ( *(_DWORD *)(v119 + 20) == v128 && v110 == v134 && v111 == *(_QWORD *)(v119 + 8) )
            {
              v133 = *(_DWORD *)(v119 + 16);
LABEL_119:
              if ( v133 >= v160 )
                goto LABEL_112;
LABEL_120:
              v106 >>= 1;
              goto LABEL_95;
            }
          }
          else if ( !v134 )
          {
            break;
          }
          v119 += 24;
        }
LABEL_111:
        if ( v160 )
          goto LABEL_120;
LABEL_112:
        v106 = v106 - (v106 >> 1) - 1;
        v163 = v109 + 16;
        if ( v106 <= 0 )
        {
LABEL_113:
          v42 = v169;
          v39 = v171;
          v40 = v163;
          v44 = v6 / 2;
          v43 = v173;
          v41 = (v163 - v169) >> 4;
          if ( v163 != v171 )
            goto LABEL_25;
          goto LABEL_114;
        }
      }
    }
    v164 = a2;
    v168 = a1;
    v170 = a2;
    v172 = v7;
    v10 = (a3 - (__int64)a2) >> 4;
    v165 = v7 / 2;
    v163 = &a1[16 * (v7 / 2)];
    v11 = *(_QWORD *)v163;
    v157 = *((_QWORD *)v163 + 1);
LABEL_6:
    if ( v10 <= 0 )
      goto LABEL_24;
    do
    {
      v12 = &v164[16 * (v10 >> 1)];
      v13 = *(_QWORD *)v12;
      v14 = *((_QWORD *)v12 + 1);
      v15 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
      v16 = (*(_DWORD *)(v14 + 12) - v15) ^ (v15 << 8);
      v17 = (v15 - v16) << 10;
      v18 = v16 ^ ((v15 - v16) << 16);
      v19 = v16 - v15;
      v20 = *((unsigned int *)a6 + 2);
      v21 = v18 + v19;
      v22 = (__int64 *)*a6;
      v23 = v21 ^ v17;
      v24 = v20 - 1;
      v25 = 24 * v20;
      v26 = *a6 + 24 * v20;
      v27 = 24LL * (((_DWORD)v20 - 1) & (unsigned int)v23);
      v28 = *a6 + v27;
      if ( v27 != 24 * v20 )
      {
        for ( k = *a6 + v27; v26 != k; k += 24 )
        {
          v30 = *(_QWORD *)k;
          if ( *(_QWORD *)k > 1u )
          {
            if ( *(_DWORD *)(k + 20) == v23 && v13 == v30 && v14 == *(_QWORD *)(k + 8) )
            {
              v31 = *(_DWORD *)(k + 16);
              goto LABEL_15;
            }
          }
          else if ( !v30 )
          {
            goto LABEL_14;
          }
        }
      }
      if ( v22 == (__int64 *)v28 )
      {
LABEL_14:
        v31 = 0;
        goto LABEL_15;
      }
      v65 = (__int64 *)*a6;
      while ( 1 )
      {
        v66 = *v65;
        if ( (unsigned __int64)*v65 > 1 )
          break;
        if ( !v66 )
          goto LABEL_14;
LABEL_54:
        v65 += 3;
        if ( (__int64 *)v28 == v65 )
          goto LABEL_14;
      }
      if ( *((_DWORD *)v65 + 5) != v23 || v13 != v66 || v14 != v65[1] )
        goto LABEL_54;
      v31 = *((_DWORD *)v65 + 4);
LABEL_15:
      v32 = *(_DWORD *)(v11 + 12);
      v33 = (*(_DWORD *)(v157 + 12) - v32) ^ (v32 << 8);
      v34 = ((v33 ^ ((v32 - v33) << 16)) + v33 - v32) ^ ((v32 - v33) << 10);
      v35 = v34 & v24;
      v36 = &v22[3 * v35];
      if ( v25 != 24 * v35 )
      {
        for ( m = &v22[3 * v35]; (__int64 *)v26 != m; m += 3 )
        {
          v38 = *m;
          if ( (unsigned __int64)*m > 1 )
          {
            if ( *((_DWORD *)m + 5) == v34 && v11 == v38 && v157 == m[1] )
            {
              v64 = *((_DWORD *)m + 4);
              goto LABEL_46;
            }
          }
          else if ( !v38 )
          {
            goto LABEL_22;
          }
        }
      }
      while ( v36 != v22 )
      {
        v67 = *v22;
        if ( (unsigned __int64)*v22 > 1 )
        {
          if ( *((_DWORD *)v22 + 5) == v34 && v11 == v67 && v157 == v22[1] )
          {
            v64 = *((_DWORD *)v22 + 4);
LABEL_46:
            if ( v64 < v31 )
              goto LABEL_23;
LABEL_47:
            v10 >>= 1;
            goto LABEL_6;
          }
        }
        else if ( !v67 )
        {
          break;
        }
        v22 += 3;
      }
LABEL_22:
      if ( !v31 )
        goto LABEL_47;
LABEL_23:
      v10 = v10 - (v10 >> 1) - 1;
      v164 = v12 + 16;
    }
    while ( v10 > 0 );
LABEL_24:
    v39 = v170;
    v40 = v163;
    v41 = v165;
    v42 = v168;
    v43 = v172;
    v44 = (v164 - v170) >> 4;
    if ( v163 == v170 )
    {
LABEL_114:
      v39 = v164;
      v83 = v40;
      goto LABEL_83;
    }
LABEL_25:
    if ( v164 == v39 )
    {
      v39 = v40;
      v83 = v40;
    }
    else
    {
      v45 = (v164 - v40) >> 4;
      v46 = (v39 - v40) >> 4;
      if ( v46 == v45 - v46 )
      {
        v146 = v40;
        if ( (unsigned __int64)(v40 + 15 - v39) <= 0x1E )
        {
          v151 = &v39[v39 - v40];
          v152 = v39;
          do
          {
            v153 = *(_QWORD *)v40;
            v154 = *(_QWORD *)v152;
            v152 += 16;
            v40 += 16;
            *((_QWORD *)v40 - 2) = v154;
            v155 = *((_QWORD *)v152 - 1);
            *((_QWORD *)v152 - 2) = v153;
            v156 = *((_QWORD *)v40 - 1);
            *((_QWORD *)v40 - 1) = v155;
            *((_QWORD *)v152 - 1) = v156;
          }
          while ( v151 != v152 );
        }
        else
        {
          v147 = 0;
          v148 = 0;
          v149 = ((unsigned __int64)(v39 - 16 - v40) >> 4) + 1;
          do
          {
            v150 = _mm_loadu_si128((const __m128i *)&v146[v147]);
            ++v148;
            *(__m128i *)&v146[v147] = _mm_loadu_si128((const __m128i *)&v39[v147]);
            *(__m128i *)&v39[v147] = v150;
            v147 += 16;
          }
          while ( v148 < v149 );
        }
        v83 = v163;
      }
      else
      {
        v47 = v41;
        v48 = v44;
        while ( 1 )
        {
          v49 = v45 - v46;
          if ( v46 < (__int64)(v45 - v46) )
            break;
LABEL_37:
          v56 = 16 * v45;
          v57 = 16 * v49;
          v166 = &v40[16 * v45];
          if ( v46 <= 0 )
          {
            v40 = &v166[-16 * v49];
            v46 = v45 % v49;
            if ( !(v45 % v49) )
              goto LABEL_82;
          }
          else
          {
            v161 = v56 - v57;
            v58 = v56 - 16;
            if ( v56 - 16 - v57 < v56 && v58 < v161 )
            {
              v71 = &v166[-16 * v49];
              v72 = &v40[16 * v45];
              v73 = 0;
              do
              {
                v74 = *((_QWORD *)v71 - 2);
                v75 = *((_QWORD *)v72 - 2);
                ++v73;
                v71 -= 16;
                v72 -= 16;
                *(_QWORD *)v71 = v75;
                v76 = *((_QWORD *)v72 + 1);
                *(_QWORD *)v72 = v74;
                v77 = *((_QWORD *)v71 + 1);
                *((_QWORD *)v71 + 1) = v76;
                *((_QWORD *)v72 + 1) = v77;
              }
              while ( v73 != v46 );
            }
            else
            {
              v59 = &v40[v58];
              v60 = 0;
              v61 = (__int64)&v40[v161 - 16];
              v62 = 0;
              do
              {
                v63 = _mm_loadu_si128((const __m128i *)(v61 + v62));
                ++v60;
                *(__m128i *)(v61 + v62) = _mm_loadu_si128((const __m128i *)&v59[v62]);
                *(__m128i *)&v59[v62] = v63;
                v62 -= 16;
              }
              while ( v60 != v46 );
            }
            v40 = &v166[-16 * v49 + -16 * v46];
            v46 = v45 % v49;
            if ( !(v45 % v49) )
              goto LABEL_82;
          }
          v45 = v49;
        }
        while ( 1 )
        {
          v50 = &v40[16 * v46];
          if ( (__int64)v49 > 0 )
          {
            v51 = v40 + 16;
            if ( v50 < v40 + 16 && 16 * v46 + 16 > 0 )
            {
              v158 = v45;
              v78 = 0;
              do
              {
                v79 = *(_QWORD *)v40;
                v80 = *(_QWORD *)v50;
                ++v78;
                v40 += 16;
                v50 += 16;
                *((_QWORD *)v40 - 2) = v80;
                v81 = *((_QWORD *)v50 - 1);
                *((_QWORD *)v50 - 2) = v79;
                v82 = *((_QWORD *)v40 - 1);
                *((_QWORD *)v40 - 1) = v81;
                *((_QWORD *)v50 - 1) = v82;
              }
              while ( v49 != v78 );
              v45 = v158;
            }
            else
            {
              v52 = 0;
              v53 = 0;
              do
              {
                v54 = _mm_loadu_si128((const __m128i *)&v40[v52]);
                ++v53;
                *(__m128i *)&v40[v52] = _mm_loadu_si128((const __m128i *)&v50[v52]);
                *(__m128i *)&v50[v52] = v54;
                v52 += 16;
              }
              while ( v53 != v49 );
            }
            v40 = (char *)&v51[2 * v49 - 2];
          }
          v55 = v45 % v46;
          if ( !(v45 % v46) )
            break;
          v45 = v46;
          v46 -= v55;
          v49 = v45 - v46;
          if ( v46 >= (__int64)(v45 - v46) )
            goto LABEL_37;
        }
LABEL_82:
        v83 = v163;
        v44 = v48;
        v41 = v47;
        v39 = &v163[v164 - v39];
      }
    }
LABEL_83:
    v159 = v43;
    v6 -= v44;
    sub_95EE00(v42, v83, v39, v41, v44, a6);
    v7 = v159 - v41;
    if ( v159 == v41 || !v6 )
      break;
    a1 = v39;
    a2 = v164;
    if ( v7 + v6 == 2 )
    {
LABEL_86:
      v84 = *(_QWORD *)a2;
      v85 = *((_QWORD *)a2 + 1);
      v86 = a1;
      v87 = a2;
      v88 = *(_QWORD *)a1;
      v89 = *((_QWORD *)a1 + 1);
      v90 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
      v91 = (*(_DWORD *)(v85 + 12) - v90) ^ (v90 << 8);
      v92 = (v90 - v91) << 10;
      v93 = v91 ^ ((v90 - v91) << 16);
      v94 = v91 - v90;
      v95 = (__int64 *)*a6;
      v96 = (v93 + v94) ^ v92;
      v97 = *((unsigned int *)a6 + 2);
      v98 = v97 - 1;
      v99 = 24 * v97;
      v100 = *a6 + 24 * v97;
      v101 = 24LL * (((_DWORD)v97 - 1) & (unsigned int)v96);
      v102 = *a6 + v101;
      if ( v101 != 24 * v97 )
      {
        for ( n = *a6 + v101; v100 != n; n += 24 )
        {
          v104 = *(_QWORD *)n;
          if ( *(_QWORD *)n > 1u )
          {
            if ( *(_DWORD *)(n + 20) == v96 && v84 == v104 && v85 == *(_QWORD *)(n + 8) )
            {
LABEL_142:
              v105 = *(_DWORD *)(n + 16);
              goto LABEL_143;
            }
          }
          else if ( !v104 )
          {
            goto LABEL_93;
          }
        }
      }
      if ( v95 != (__int64 *)v102 )
      {
        for ( n = *a6; v102 != n; n += 24 )
        {
          v145 = *(_QWORD *)n;
          if ( *(_QWORD *)n > 1u )
          {
            if ( *(_DWORD *)(n + 20) == v96 && v84 == v145 && v85 == *(_QWORD *)(n + 8) )
              goto LABEL_142;
          }
          else if ( !v145 )
          {
            break;
          }
        }
      }
LABEL_93:
      v105 = 0;
LABEL_143:
      v137 = *(_DWORD *)(v88 + 12);
      v138 = (*(_DWORD *)(v89 + 12) - v137) ^ (v137 << 8);
      v139 = ((v138 ^ ((v137 - v138) << 16)) + v138 - v137) ^ ((v137 - v138) << 10);
      v140 = 24LL * (v139 & v98);
      v141 = &v95[(unsigned __int64)v140 / 8];
      if ( v99 != v140 )
      {
        for ( ii = &v95[(unsigned __int64)v140 / 8]; (__int64 *)v100 != ii; ii += 3 )
        {
          v143 = *ii;
          if ( (unsigned __int64)*ii > 1 )
          {
            if ( *((_DWORD *)ii + 5) == v139 && v88 == v143 && v89 == ii[1] )
            {
LABEL_71:
              v68 = *((_DWORD *)ii + 4);
              goto LABEL_72;
            }
          }
          else if ( !v143 )
          {
            goto LABEL_150;
          }
        }
      }
      for ( ; v141 != v95; v95 += 3 )
      {
        v144 = *v95;
        if ( (unsigned __int64)*v95 > 1 )
        {
          if ( *((_DWORD *)v95 + 5) == v139 && v88 == v144 && v89 == v95[1] )
          {
            ii = v95;
            goto LABEL_71;
          }
        }
        else if ( !v144 )
        {
          v68 = 0;
          goto LABEL_72;
        }
      }
LABEL_150:
      v68 = 0;
LABEL_72:
      if ( v68 < v105 )
      {
        *(_QWORD *)v86 = v84;
        v69 = *((_QWORD *)v87 + 1);
        *(_QWORD *)v87 = v88;
        v70 = *((_QWORD *)v86 + 1);
        *((_QWORD *)v86 + 1) = v69;
        *((_QWORD *)v87 + 1) = v70;
      }
      return;
    }
  }
}

