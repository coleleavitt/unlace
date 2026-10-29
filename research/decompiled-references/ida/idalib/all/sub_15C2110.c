void __fastcall sub_15C2110(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        unsigned int a8)
{
  _QWORD *v10; // rbp
  _QWORD *v11; // r12
  __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // r15d
  _QWORD *v20; // rdi
  _QWORD *k; // rdx
  _QWORD *v22; // rax
  int m; // r11d
  __int64 v24; // rdx
  unsigned int v25; // esi
  _QWORD *v26; // rcx
  __int64 v27; // r8
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // edi
  _WORD *v32; // rcx
  unsigned int v33; // esi
  __int64 *v34; // rax
  unsigned int v35; // ebx
  int v36; // edi
  _WORD *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rbx
  unsigned int v41; // r14d
  __int64 v42; // rsi
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // rdx
  unsigned int v45; // r12d
  __int64 v46; // rdx
  __int64 v47; // r14
  __int64 v48; // r14
  int v49; // eax
  __int64 v50; // r14
  unsigned int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  _BYTE *v54; // r8
  void **p_ptr; // r11
  int v56; // r13d
  __int64 v57; // rbx
  _BYTE *v58; // rsi
  unsigned int *v59; // rax
  int v60; // edi
  char v61; // cl
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  void **v64; // r15
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  unsigned int *v67; // rax
  char *v68; // r12
  char *v69; // r13
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // r10
  unsigned int *v75; // rdx
  _QWORD *v76; // r13
  char *v77; // rbp
  char *v78; // r12
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // ecx
  unsigned int *v82; // rax
  char *v83; // r12
  char *v84; // r13
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r14
  unsigned int v88; // eax
  __int64 v89; // rsi
  __int64 v90; // r12
  unsigned int v91; // eax
  unsigned __int64 *v92; // r11
  int v93; // edx
  unsigned __int64 v94; // rcx
  __int64 *v95; // rdx
  __int64 v96; // rdx
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // r14
  _QWORD *v102; // r11
  __int64 v103; // r8
  _QWORD *kk; // rdx
  _QWORD *v105; // rax
  int mm; // ebx
  __int64 v107; // rdx
  unsigned int v108; // esi
  _QWORD *v109; // rcx
  __int64 v110; // rdi
  int v111; // edx
  int v112; // edi
  int v113; // edi
  unsigned __int64 v114; // r8
  __int64 v115; // rdx
  _QWORD *nn; // rdx
  int v117; // r11d
  int v118; // r14d
  __int64 v119; // r8
  __int64 v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // r14
  __int64 v123; // rdx
  _QWORD *v124; // r15
  int v125; // r8d
  _QWORD *i; // rdx
  _QWORD *v127; // rax
  int j; // r11d
  __int64 v129; // rdx
  unsigned int v130; // esi
  _QWORD *v131; // rcx
  __int64 v132; // rdi
  int v133; // edx
  int v134; // ecx
  int v135; // esi
  unsigned int v136; // ebx
  __int64 *v137; // rdi
  int v138; // r11d
  __int64 v139; // rax
  _QWORD *v140; // rax
  _QWORD *v141; // r11
  __int64 v142; // rdx
  _QWORD *v143; // r8
  int v144; // r15d
  _QWORD *n; // rdx
  _QWORD *v146; // rax
  __int64 v147; // rdx
  unsigned int v148; // esi
  _QWORD *v149; // rcx
  __int64 v150; // rdi
  int v151; // edx
  int v152; // esi
  unsigned int v153; // r14d
  unsigned __int64 v154; // rdi
  unsigned __int64 *v155; // r8
  int v156; // ecx
  int v157; // r12d
  unsigned int v158; // ecx
  __int64 v159; // r14
  int v160; // edx
  _WORD *v161; // r8
  __int64 v162; // r12
  __int64 v163; // rdx
  _QWORD *jj; // rdx
  __int64 v165; // r12
  unsigned __int64 *v166; // r11
  int v167; // ecx
  int v168; // ebx
  unsigned int v169; // ecx
  __int64 *v170; // r11
  int v171; // ecx
  unsigned int v172; // [rsp+8h] [rbp-1C0h]
  unsigned int v173; // [rsp+14h] [rbp-1B4h]
  unsigned __int64 v174; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v175; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v176; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v177; // [rsp+18h] [rbp-1B0h]
  _BYTE *v178; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v179; // [rsp+18h] [rbp-1B0h]
  unsigned int v180; // [rsp+18h] [rbp-1B0h]
  __int64 v181; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v182; // [rsp+18h] [rbp-1B0h]
  __int64 v183; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v184; // [rsp+18h] [rbp-1B0h]
  int ii; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v186; // [rsp+18h] [rbp-1B0h]
  void **v187; // [rsp+18h] [rbp-1B0h]
  _QWORD *v188; // [rsp+18h] [rbp-1B0h]
  unsigned int v189; // [rsp+20h] [rbp-1A8h]
  unsigned int v190; // [rsp+20h] [rbp-1A8h]
  int v191; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v192; // [rsp+20h] [rbp-1A8h]
  int v193; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v194; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v195; // [rsp+20h] [rbp-1A8h]
  unsigned int v196; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v197; // [rsp+20h] [rbp-1A8h]
  int v198; // [rsp+20h] [rbp-1A8h]
  __int64 v199; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v200; // [rsp+20h] [rbp-1A8h]
  int v201; // [rsp+20h] [rbp-1A8h]
  _QWORD *v202; // [rsp+20h] [rbp-1A8h]
  _QWORD *v203; // [rsp+20h] [rbp-1A8h]
  int v204; // [rsp+28h] [rbp-1A0h]
  void **v205; // [rsp+28h] [rbp-1A0h]
  int v206; // [rsp+28h] [rbp-1A0h]
  int v207; // [rsp+28h] [rbp-1A0h]
  unsigned int v208; // [rsp+28h] [rbp-1A0h]
  int v209; // [rsp+28h] [rbp-1A0h]
  int v210; // [rsp+28h] [rbp-1A0h]
  int v211; // [rsp+28h] [rbp-1A0h]
  int v212; // [rsp+28h] [rbp-1A0h]
  _QWORD *v213; // [rsp+28h] [rbp-1A0h]
  void **v214; // [rsp+30h] [rbp-198h]
  _BYTE *v215; // [rsp+30h] [rbp-198h]
  _BYTE *v216; // [rsp+30h] [rbp-198h]
  int v217; // [rsp+30h] [rbp-198h]
  void *v218; // [rsp+40h] [rbp-188h] BYREF
  __int64 v219; // [rsp+48h] [rbp-180h]
  _BYTE v220[48]; // [rsp+50h] [rbp-178h] BYREF
  void *v221; // [rsp+80h] [rbp-148h] BYREF
  __int64 v222; // [rsp+88h] [rbp-140h]
  _BYTE v223[48]; // [rsp+90h] [rbp-138h] BYREF
  void *ptr; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v225; // [rsp+C8h] [rbp-100h]
  char v226; // [rsp+D0h] [rbp-F8h] BYREF
  _BYTE v227[200]; // [rsp+100h] [rbp-C8h] BYREF

  v10 = (_QWORD *)a1;
  v11 = *(_QWORD **)(a1 + 800);
  v173 = a4;
  v12 = *(unsigned int *)(a1 + 816);
  v172 = a5;
  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( !(_DWORD)v12 )
      return;
    a4 = (unsigned int)(v12 - 1);
    v35 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
    v36 = a4 & v35;
    v34 = &v11[2 * ((unsigned int)a4 & v35)];
    v37 = (_WORD *)*v34;
    if ( *v34 != a2 )
    {
      LODWORD(v159) = a4 & v35;
      v160 = 1;
      if ( v37 == (_WORD *)-4096LL )
        return;
      while ( 1 )
      {
        v159 = (unsigned int)a4 & ((_DWORD)v159 + v160);
        v161 = (_WORD *)v11[2 * v159];
        if ( v161 == (_WORD *)a2 )
          break;
        ++v160;
        if ( v161 == (_WORD *)-4096LL )
          return;
      }
    }
    LODWORD(v38) = a4 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
    v39 = v11[2 * (unsigned int)v38];
    if ( v39 != a3 )
    {
      v118 = 1;
      if ( v39 == -4096 )
        return;
      while ( 1 )
      {
        v38 = (unsigned int)a4 & ((_DWORD)v38 + v118);
        v119 = v11[2 * v38];
        if ( v119 == a3 )
          break;
        ++v118;
        if ( v119 == -4096 )
          return;
      }
    }
  }
  else
  {
    if ( !(_DWORD)v12 )
      goto LABEL_3;
    a4 = (unsigned int)(v12 - 1);
    v35 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
    v36 = a4 & v35;
    v34 = &v11[2 * ((unsigned int)a4 & v35)];
    v37 = (_WORD *)*v34;
  }
  if ( (_WORD *)a2 == v37 )
  {
LABEL_24:
    v40 = *((unsigned int *)v34 + 2);
    goto LABEL_25;
  }
  a5 = 1;
  v95 = nullptr;
  if ( v37 != (_WORD *)-4096LL )
  {
    while ( 1 )
    {
      if ( !v95 && v37 == (_WORD *)-8192LL )
        v95 = v34;
      v117 = a5 + 1;
      a5 = (unsigned int)(v36 + a5);
      v36 = a4 & a5;
      v34 = &v11[2 * ((unsigned int)a4 & (unsigned int)a5)];
      v37 = (_WORD *)*v34;
      if ( *v34 == a2 )
        goto LABEL_24;
      if ( v37 == (_WORD *)-4096LL )
        break;
      LODWORD(a5) = v117;
    }
    if ( v95 )
      v34 = v95;
  }
  v30 = *((_DWORD *)v10 + 202) + 1;
  if ( 4 * v30 < (unsigned int)(3 * v12) )
  {
    if ( (int)v12 - *((_DWORD *)v10 + 203) - v30 <= (unsigned int)v12 >> 3 )
    {
      v196 = a6;
      v182 = a3;
      v120 = (((((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
              | ((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4)
              | ((a4 | (a4 >> 1)) >> 2)
              | a4
              | (a4 >> 1)) >> 16)
            | ((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
            | ((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4)
            | ((a4 | (a4 >> 1)) >> 2)
            | a4
            | (a4 >> 1))
           + 1;
      if ( (unsigned int)v120 < 0x40 )
        LODWORD(v120) = 64;
      *((_DWORD *)v10 + 204) = v120;
      v121 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v120, 8, 64, a4, a5, a6);
      a3 = v182;
      a6 = v196;
      v122 = v121;
      v10[100] = v121;
      if ( v11 )
      {
        v123 = *((unsigned int *)v10 + 204);
        v10[101] = 0;
        v183 = 16 * v12;
        v124 = &v11[2 * v12];
        v125 = v123;
        for ( i = &v121[2 * v123]; i != v121; v121 += 2 )
          *v121 = -4096;
        v127 = v11;
        for ( j = v125 - 1; v124 != v127; v127 += 2 )
        {
          v129 = *v127;
          if ( *v127 != -8192 && v129 != -4096 )
          {
            if ( !v125 )
            {
              *(_QWORD *)&dword_0 = *v127;
              BUG();
            }
            v130 = j & (((unsigned int)v129 >> 9) ^ ((unsigned int)v129 >> 4));
            v131 = &v122[2 * v130];
            v132 = *v131;
            if ( v129 != *v131 && v132 != -4096 )
            {
              v212 = 1;
              v203 = nullptr;
              while ( 1 )
              {
                if ( !v203 )
                {
                  if ( v132 != -8192 )
                    v131 = nullptr;
                  v203 = v131;
                }
                v130 = j & (v212 + v130);
                v131 = &v122[2 * v130];
                v132 = *v131;
                if ( v129 == *v131 )
                  break;
                if ( v132 == -4096 )
                {
                  if ( v203 )
                    v131 = v203;
                  break;
                }
                ++v212;
              }
            }
            *v131 = v129;
            v133 = *((_DWORD *)v127 + 2);
            ++*((_DWORD *)v10 + 202);
            *((_DWORD *)v131 + 2) = v133;
          }
        }
        v208 = a6;
        v197 = a3;
        operator delete(v11, v183, 8);
        v134 = *((_DWORD *)v10 + 204);
        v11 = (_QWORD *)v10[100];
        a3 = v197;
        a6 = v208;
        v30 = *((_DWORD *)v10 + 202) + 1;
      }
      else
      {
        v165 = *((unsigned int *)v10 + 204);
        v10[101] = 0;
        v134 = v165;
        v11 = &v121[2 * v165];
        if ( v121 != v11 )
        {
          do
          {
            *v121 = -4096;
            v121 += 2;
          }
          while ( v11 != v121 );
          v11 = v122;
        }
        v30 = 1;
      }
      if ( !v134 )
      {
LABEL_305:
        ++*((_DWORD *)v10 + 202);
        BUG();
      }
      v135 = v134 - 1;
      v136 = (v134 - 1) & v35;
      v34 = &v11[2 * v136];
      v32 = (_WORD *)*v34;
      if ( a2 == *v34 )
      {
LABEL_119:
        *((_DWORD *)v10 + 202) = v30;
        if ( v32 != (_WORD *)-4096LL )
          --*((_DWORD *)v10 + 203);
        goto LABEL_121;
      }
      if ( v32 == (_WORD *)-4096LL )
        goto LABEL_19;
      v137 = &v11[2 * v136];
      v138 = 1;
      v34 = nullptr;
      while ( 1 )
      {
        if ( v32 == (_WORD *)-8192LL && !v34 )
          v34 = v137;
        a5 = (unsigned int)(v138 + 1);
        v136 = v135 & (v138 + v136);
        v137 = &v11[2 * v136];
        v32 = (_WORD *)*v137;
        if ( *v137 == a2 )
        {
          v32 = (_WORD *)a2;
          v34 = &v11[2 * v136];
          goto LABEL_119;
        }
        if ( v32 == (_WORD *)-4096LL )
          break;
        ++v138;
      }
      if ( !v34 )
      {
        v34 = &v11[2 * v136];
        goto LABEL_19;
      }
    }
LABEL_118:
    v32 = (_WORD *)*v34;
    goto LABEL_119;
  }
LABEL_3:
  v189 = a6;
  v174 = a3;
  v13 = (((((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v12 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v12 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v12 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v12 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1);
  v14 = ((v13 >> 16) | v13) + 1;
  if ( (unsigned int)v14 < 0x40 )
    LODWORD(v14) = 64;
  *((_DWORD *)v10 + 204) = v14;
  v15 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v14, 8, 64, a4, a5, a6);
  a3 = v174;
  a6 = v189;
  v16 = v15;
  v10[100] = v15;
  if ( v11 )
  {
    v17 = *((unsigned int *)v10 + 204);
    v10[101] = 0;
    v18 = 2 * v12;
    v19 = v17;
    v20 = &v11[v18];
    for ( k = &v15[2 * v17]; k != v15; v15 += 2 )
      *v15 = -4096;
    v22 = v11;
    for ( m = v19 - 1; v20 != v22; v22 += 2 )
    {
      v24 = *v22;
      if ( *v22 != -8192 && v24 != -4096 )
      {
        if ( !v19 )
        {
          *(_QWORD *)&dword_0 = *v22;
          BUG();
        }
        v25 = m & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
        v26 = &v16[2 * v25];
        v27 = *v26;
        if ( v24 != *v26 && v27 != -4096 )
        {
          v201 = 1;
          v188 = nullptr;
          while ( 1 )
          {
            if ( !v188 )
            {
              if ( v27 != -8192 )
                v26 = nullptr;
              v188 = v26;
            }
            v25 = m & (v201 + v25);
            v26 = &v16[2 * v25];
            v27 = *v26;
            if ( v24 == *v26 )
              break;
            if ( v27 == -4096 )
            {
              if ( v188 )
                v26 = v188;
              break;
            }
            ++v201;
          }
        }
        *v26 = v24;
        v28 = *((_DWORD *)v22 + 2);
        ++*((_DWORD *)v10 + 202);
        *((_DWORD *)v26 + 2) = v28;
      }
    }
    v190 = a6;
    v175 = a3;
    operator delete(v11, v18 * 8, 8);
    v29 = *((_DWORD *)v10 + 204);
    v11 = (_QWORD *)v10[100];
    a3 = v175;
    a6 = v190;
    v30 = *((_DWORD *)v10 + 202) + 1;
  }
  else
  {
    v162 = *((unsigned int *)v10 + 204);
    v10[101] = 0;
    v29 = v162;
    v11 = &v15[2 * v162];
    if ( v15 != v11 )
    {
      do
      {
        *v15 = -4096;
        v15 += 2;
      }
      while ( v11 != v15 );
      v11 = v16;
    }
    v30 = 1;
  }
  if ( !v29 )
    goto LABEL_305;
  v31 = v29 - 1;
  v32 = (_WORD *)a2;
  v33 = v31 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v34 = &v11[2 * v33];
  a5 = *v34;
  if ( *v34 == a2 )
    goto LABEL_119;
  if ( a5 != -4096 )
  {
    v170 = &v11[2 * (v31 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
    v171 = 1;
    v34 = nullptr;
    while ( 1 )
    {
      if ( !v34 && a5 == -8192 )
        v34 = v170;
      v33 = v31 & (v171 + v33);
      v170 = &v11[2 * v33];
      a5 = *v170;
      if ( *v170 == a2 )
      {
        v32 = (_WORD *)a2;
        v34 = &v11[2 * v33];
        goto LABEL_119;
      }
      if ( a5 == -4096 )
        break;
      ++v171;
    }
    if ( !v34 )
    {
      v34 = &v11[2 * v33];
      goto LABEL_19;
    }
    goto LABEL_118;
  }
LABEL_19:
  *((_DWORD *)v10 + 202) = v30;
LABEL_121:
  *((_DWORD *)v34 + 2) = 0;
  v12 = *((unsigned int *)v10 + 204);
  v96 = 0;
  *v34 = a2;
  if ( !(_DWORD)v12 )
    goto LABEL_122;
  a4 = (unsigned int)(v12 - 1);
  v40 = 0;
LABEL_25:
  v41 = ((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4);
  v42 = (unsigned int)a4 & v41;
  v43 = &v11[2 * v42];
  v44 = *v43;
  if ( *v43 != a3 )
  {
    a5 = 1;
    v92 = nullptr;
    if ( v44 != -4096 )
    {
      while ( 1 )
      {
        if ( v44 == -8192 && !v92 )
          v92 = v43;
        v42 = (unsigned int)a4 & ((_DWORD)a5 + (_DWORD)v42);
        v43 = &v11[2 * (unsigned int)v42];
        v44 = *v43;
        if ( *v43 == a3 )
          goto LABEL_26;
        if ( v44 == -4096 )
          break;
        a5 = (unsigned int)(a5 + 1);
      }
      if ( v92 )
        v43 = v92;
    }
    v93 = *((_DWORD *)v10 + 202) + 1;
    if ( 4 * v93 < (unsigned int)(3 * v12) )
    {
      v42 = (unsigned int)v12 >> 3;
      if ( (int)v12 - (v93 + *((_DWORD *)v10 + 203)) <= (unsigned int)v42 )
      {
        v198 = a6;
        v184 = a3;
        v139 = (((((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
                | ((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4)
                | ((a4 | (a4 >> 1)) >> 2)
                | a4
                | (a4 >> 1)) >> 16)
              | ((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
              | ((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4)
              | ((a4 | (a4 >> 1)) >> 2)
              | a4
              | (a4 >> 1))
             + 1;
        if ( (unsigned int)v139 < 0x40 )
          LODWORD(v139) = 64;
        *((_DWORD *)v10 + 204) = v139;
        v140 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v139, 8, 64, a4, a5, a6);
        a3 = v184;
        LODWORD(a6) = v198;
        v141 = v140;
        v10[100] = v140;
        if ( v11 )
        {
          v142 = *((unsigned int *)v10 + 204);
          v10[101] = 0;
          v199 = 16 * v12;
          v143 = &v11[2 * v12];
          v144 = v142;
          for ( n = &v140[2 * v142]; n != v140; v140 += 2 )
            *v140 = -4096;
          v146 = v11;
          for ( ii = v144 - 1; v143 != v146; v146 += 2 )
          {
            v147 = *v146;
            if ( *v146 != -8192 && v147 != -4096 )
            {
              if ( !v144 )
              {
                *(_QWORD *)&dword_0 = *v146;
                BUG();
              }
              v148 = ii & (((unsigned int)v147 >> 9) ^ ((unsigned int)v147 >> 4));
              v149 = &v141[2 * v148];
              v150 = *v149;
              if ( *v149 != v147 && v150 != -4096 )
              {
                v217 = 1;
                v213 = nullptr;
                while ( 1 )
                {
                  if ( !v213 )
                  {
                    if ( v150 != -8192 )
                      v149 = nullptr;
                    v213 = v149;
                  }
                  v148 = ii & (v217 + v148);
                  ++v217;
                  v149 = &v141[2 * v148];
                  v150 = *v149;
                  if ( v147 == *v149 )
                    break;
                  if ( v150 == -4096 )
                  {
                    if ( v213 )
                      v149 = v213;
                    break;
                  }
                }
              }
              *v149 = v147;
              v151 = *((_DWORD *)v146 + 2);
              ++*((_DWORD *)v10 + 202);
              *((_DWORD *)v149 + 2) = v151;
            }
          }
          v209 = a6;
          v186 = a3;
          operator delete(v11, v199, 8);
          v152 = *((_DWORD *)v10 + 204);
          v141 = (_QWORD *)v10[100];
          a3 = v186;
          LODWORD(a6) = v209;
          v93 = *((_DWORD *)v10 + 202) + 1;
        }
        else
        {
          v163 = *((unsigned int *)v10 + 204);
          v10[101] = 0;
          v152 = v163;
          for ( jj = &v140[2 * v163]; jj != v140; v140 += 2 )
            *v140 = -4096;
          v93 = 1;
        }
        if ( !v152 )
          goto LABEL_306;
        v42 = (unsigned int)(v152 - 1);
        v94 = a3;
        v153 = v42 & v41;
        v43 = &v141[2 * v153];
        v154 = *v43;
        if ( *v43 == a3 )
          goto LABEL_111;
        LODWORD(v12) = v40;
        if ( v154 == -4096 )
          goto LABEL_138;
        v155 = &v141[2 * v153];
        v156 = 1;
        v43 = nullptr;
        while ( 1 )
        {
          if ( v154 == -8192 && !v43 )
            v43 = v155;
          v157 = v156 + 1;
          v158 = v42 & (v153 + v156);
          v153 = v158;
          v155 = &v141[2 * v158];
          v154 = *v155;
          if ( *v155 == a3 )
          {
            v94 = a3;
            v43 = v155;
            goto LABEL_111;
          }
          if ( v154 == -4096 )
            break;
          v156 = v157;
        }
        if ( !v43 )
        {
          LODWORD(v12) = v40;
          v43 = &v141[2 * v158];
          goto LABEL_138;
        }
      }
      v94 = *v43;
      goto LABEL_111;
    }
    v96 = (unsigned int)v12;
    LODWORD(v12) = v40;
LABEL_122:
    v206 = a6;
    v194 = a3;
    v180 = v96;
    v97 = (((((((unsigned int)(2 * v96 - 1) | ((unsigned __int64)(unsigned int)(2 * v96 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v96 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v96 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v96 - 1) | ((unsigned __int64)(unsigned int)(2 * v96 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v96 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v96 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v96 - 1) | ((unsigned __int64)(unsigned int)(2 * v96 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v96 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v96 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v96 - 1) | ((unsigned __int64)(unsigned int)(2 * v96 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v96 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v96 - 1) >> 1);
    v98 = ((v97 >> 16) | v97) + 1;
    if ( (unsigned int)v98 < 0x40 )
      LODWORD(v98) = 64;
    *((_DWORD *)v10 + 204) = v98;
    v99 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v98, 8, v96, 64, a5, a6);
    v100 = v180;
    a3 = v194;
    v101 = v99;
    v10[100] = v99;
    LODWORD(a6) = v206;
    if ( v11 )
    {
      v10[101] = 0;
      v181 = 16LL * v180;
      v102 = &v11[2 * v100];
      v103 = *((unsigned int *)v10 + 204);
      for ( kk = &v99[2 * v103]; kk != v99; v99 += 2 )
        *v99 = -4096;
      v105 = v11;
      for ( mm = v103 - 1; v102 != v105; v105 += 2 )
      {
        v107 = *v105;
        if ( *v105 != -4096 && v107 != -8192 )
        {
          if ( !(_DWORD)v103 )
          {
            *(_QWORD *)&dword_0 = *v105;
            BUG();
          }
          v108 = mm & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
          v109 = &v101[2 * v108];
          v110 = *v109;
          if ( *v109 != v107 && v110 != -4096 )
          {
            v211 = 1;
            v202 = nullptr;
            while ( 1 )
            {
              if ( v110 == -8192 )
              {
                if ( v202 )
                  v109 = v202;
                v202 = v109;
              }
              v108 = mm & (v211 + v108);
              v109 = &v101[2 * v108];
              v110 = *v109;
              if ( v107 == *v109 )
                break;
              if ( v110 == -4096 )
              {
                if ( v202 )
                  v109 = v202;
                break;
              }
              ++v211;
            }
          }
          *v109 = v107;
          v111 = *((_DWORD *)v105 + 2);
          ++*((_DWORD *)v10 + 202);
          *((_DWORD *)v109 + 2) = v111;
        }
      }
      v207 = a6;
      v195 = a3;
      operator delete(v11, v181, 8);
      v112 = *((_DWORD *)v10 + 204);
      v101 = (_QWORD *)v10[100];
      a3 = v195;
      LODWORD(a6) = v207;
      v93 = *((_DWORD *)v10 + 202) + 1;
    }
    else
    {
      v115 = *((unsigned int *)v10 + 204);
      v10[101] = 0;
      v112 = v115;
      for ( nn = &v99[2 * v115]; nn != v99; v99 += 2 )
        *v99 = -4096;
      v93 = 1;
    }
    if ( v112 )
    {
      v113 = v112 - 1;
      v94 = a3;
      v40 = (unsigned int)v12;
      v42 = v113 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
      v43 = &v101[2 * v42];
      v114 = *v43;
      if ( *v43 != a3 )
      {
        if ( v114 == -4096 )
        {
LABEL_138:
          *((_DWORD *)v10 + 202) = v93;
          v40 = (unsigned int)v12;
LABEL_113:
          *v43 = a3;
          v45 = 0;
          *((_DWORD *)v43 + 2) = 0;
          goto LABEL_27;
        }
        v166 = &v101[2 * (v113 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4)))];
        v167 = 1;
        v43 = nullptr;
        while ( 1 )
        {
          if ( v114 == -8192 && !v43 )
            v43 = v166;
          v168 = v167 + 1;
          v169 = v42 + v167;
          v42 = v113 & v169;
          v166 = &v101[2 * v42];
          v114 = *v166;
          if ( *v166 == a3 )
          {
            v94 = a3;
            v40 = (unsigned int)v12;
            v43 = &v101[2 * v42];
            goto LABEL_111;
          }
          if ( v114 == -4096 )
            break;
          v167 = v168;
        }
        if ( !v43 )
        {
          v43 = &v101[2 * (v113 & v169)];
          goto LABEL_138;
        }
        v94 = *v43;
        v40 = (unsigned int)v12;
      }
LABEL_111:
      *((_DWORD *)v10 + 202) = v93;
      if ( v94 != -4096 )
        --*((_DWORD *)v10 + 203);
      goto LABEL_113;
    }
LABEL_306:
    ++*((_DWORD *)v10 + 202);
    BUG();
  }
LABEL_26:
  v45 = *((_DWORD *)v43 + 2);
LABEL_27:
  if ( (_DWORD)v40 == v45 )
    return;
  v46 = v10[2];
  if ( (*(_WORD *)a2 & 0x1FD) == 0xF0 && (unsigned int)v40 > v45 )
  {
    v47 = (unsigned int)v40;
    while ( 1 )
    {
      v48 = 16 * v47;
      v49 = *(_DWORD *)(v46 + v48 + 4);
      if ( v49 == 6317 )
      {
        v191 = a6;
        v176 = a3;
        v50 = *v10 + 8LL;
        v51 = sub_EEB7E0(a2, v42, a7);
        v52 = 7068;
        goto LABEL_36;
      }
      if ( v49 == 6193 )
        break;
      if ( v49 == 5744 )
      {
        v90 = *v10 + 8LL;
        v91 = sub_EEB7E0(a2, v42, a7);
        sub_168B9F0(v227, v90, v91, 3878, 0);
        sub_15F7200(v227);
        sub_168B9F0(v227, *v10 + 8LL, *(unsigned int *)(v10[2] + v48 + 12), 5745, 0);
        sub_15F7200(v227);
        return;
      }
      v47 = *(unsigned int *)(v46 + v48);
      if ( (unsigned int)v47 <= v45 )
        goto LABEL_37;
    }
    v191 = a6;
    v176 = a3;
    v87 = *v10 + 8LL;
    v88 = sub_EEB7E0(a2, v42, a7);
    v89 = v87;
    sub_168B9F0(v227, v87, v88, 3878, 0);
    sub_15F7200(v227);
    v50 = *v10 + 8LL;
    v51 = sub_EEB7E0(v176, v89, a7);
    v52 = 6169;
LABEL_36:
    sub_168B9F0(v227, v50, v51, v52, 0);
    sub_15F7200(v227);
    v46 = v10[2];
    a3 = v176;
    LODWORD(a6) = v191;
  }
LABEL_37:
  v53 = v45;
  do
  {
    while ( (unsigned int)v40 < (unsigned int)v53 )
    {
      LODWORD(v53) = *(_DWORD *)(v46 + 16 * v53);
      if ( (_DWORD)v53 == (_DWORD)v40 )
        goto LABEL_40;
    }
    LODWORD(v40) = *(_DWORD *)(v46 + 16 * v40);
  }
  while ( (_DWORD)v40 != (_DWORD)v53 );
LABEL_40:
  if ( (_DWORD)v40 == v45 )
    return;
  v221 = v223;
  v54 = v220;
  p_ptr = &ptr;
  v219 = 0xA00000000LL;
  v218 = v220;
  v56 = v40;
  v222 = 0xA00000000LL;
  ptr = &v226;
  v225 = 0xA00000000LL;
  do
  {
    while ( 1 )
    {
      v57 = 16LL * v45;
      v58 = *(_BYTE **)(*v10 + 232LL);
      v59 = (unsigned int *)(v46 + v57);
      v60 = *(_DWORD *)(v46 + v57 + 4);
      v61 = v58[1];
      if ( (*v58 & 0x20) != 0 && (v61 & 8) != 0 && (_DWORD)a6 )
      {
        if ( v172 == 3878 && ((v60 - 6319) & 0xFFFFFFFD) == 0 )
        {
          v72 = (unsigned int)v225;
          v73 = (unsigned int)v225 + 1LL;
          if ( v73 > HIDWORD(v225) )
          {
            v216 = v54;
            v210 = a6;
            v200 = a3;
            v187 = p_ptr;
            sub_2237220(p_ptr, p_ptr + 2, v73, 4);
            v54 = v216;
            LODWORD(a6) = v210;
            v72 = (unsigned int)v225;
            a3 = v200;
            p_ptr = v187;
          }
          *((_DWORD *)ptr + v72) = v45;
          v46 = v10[2];
          LODWORD(v225) = v225 + 1;
          v59 = (unsigned int *)(v46 + v57);
          goto LABEL_42;
        }
        if ( (v58[1] & 0x10) != 0 && v60 == 6320 )
        {
LABEL_69:
          v65 = (unsigned int)v219;
          v66 = (unsigned int)v219 + 1LL;
          if ( v66 > HIDWORD(v219) )
          {
            v214 = p_ptr;
            v204 = a6;
            v192 = a3;
            v178 = v54;
            sub_2237220(&v218, v54, v66, 4);
            v65 = (unsigned int)v219;
            p_ptr = v214;
            LODWORD(a6) = v204;
            a3 = v192;
            v54 = v178;
          }
          *((_DWORD *)v218 + v65) = v45;
          v46 = v10[2];
          LODWORD(v219) = v219 + 1;
          v59 = (unsigned int *)(v46 + v57);
          goto LABEL_42;
        }
      }
      else if ( (v61 & 0x10) != 0 && v60 == 6320 || (v58[1] & 8) == 0 && v60 == 6319 )
      {
        goto LABEL_69;
      }
      if ( v60 )
        break;
LABEL_42:
      v45 = *v59;
      if ( *v59 == v56 )
        goto LABEL_54;
    }
    v62 = (unsigned int)v222;
    v63 = (unsigned int)v222 + 1LL;
    if ( v63 > HIDWORD(v222) )
    {
      v215 = v54;
      v205 = p_ptr;
      v193 = a6;
      v179 = a3;
      sub_2237220(&v221, v223, v63, 4);
      v54 = v215;
      p_ptr = v205;
      v62 = (unsigned int)v222;
      LODWORD(a6) = v193;
      a3 = v179;
    }
    *((_DWORD *)v221 + v62) = v45;
    v46 = v10[2];
    LODWORD(v222) = v222 + 1;
    v45 = *(_DWORD *)(v46 + 16LL * v45);
  }
  while ( v45 != v56 );
LABEL_54:
  v64 = p_ptr;
  if ( (_DWORD)v225 )
  {
    v177 = a3;
    sub_168B9F0(v227, *v10 + 8LL, v173, (unsigned int)a6, 0);
    sub_15F7200(v227);
    v74 = v177;
    if ( ((_DWORD)v225 || !*((_BYTE *)v10 + 8)) && (_DWORD)v225 )
    {
      v75 = (unsigned int *)ptr;
      v76 = v10;
      v77 = (char *)ptr + 4;
      v78 = (char *)ptr + 4 * (unsigned int)(v225 - 1) + 4;
      while ( 1 )
      {
        v79 = v76[2] + 16LL * *v75;
        v80 = *(unsigned int *)(v79 + 4);
        if ( (_DWORD)v80 )
        {
          sub_168B9F0(v227, *v76 + 8LL, *(unsigned int *)(v79 + 12), v80, 0);
          sub_15F7200(v227);
          v75 = (unsigned int *)v77;
          if ( v78 == v77 )
          {
LABEL_93:
            v10 = v76;
            v74 = v177;
            break;
          }
        }
        else
        {
          v75 = (unsigned int *)v77;
          if ( v78 == v77 )
            goto LABEL_93;
        }
        v77 += 4;
      }
    }
    v81 = v222;
    *(_BYTE *)(v74 + 24) = 1;
    if ( !v81 )
    {
LABEL_56:
      if ( (_DWORD)v219 )
      {
        sub_168B9F0(v227, *v10 + 8LL, v173, a8, 0);
        sub_15F7200(v227);
        if ( (_DWORD)v219 || !*((_BYTE *)v10 + 8) )
        {
          if ( (_DWORD)v219 )
          {
            v67 = (unsigned int *)v218;
            v68 = (char *)v218 + 4;
            v69 = (char *)v218 + 4 * (unsigned int)(v219 - 1) + 4;
            while ( 1 )
            {
              v70 = v10[2] + 16LL * *v67;
              v71 = *(unsigned int *)(v70 + 4);
              if ( (_DWORD)v71 )
              {
                sub_168B9F0(v227, *v10 + 8LL, *(unsigned int *)(v70 + 12), v71, 0);
                sub_15F7200(v227);
              }
              v67 = (unsigned int *)v68;
              if ( v69 == v68 )
                break;
              v68 += 4;
            }
          }
        }
      }
      goto LABEL_57;
    }
  }
  else if ( !(_DWORD)v222 )
  {
    goto LABEL_56;
  }
  sub_168B9F0(v227, *v10 + 8LL, v173, v172, 0);
  sub_15F7200(v227);
  if ( !(_DWORD)v222 && *((_BYTE *)v10 + 8) || !(_DWORD)v222 )
    goto LABEL_56;
  v82 = (unsigned int *)v221;
  v83 = (char *)v221 + 4;
  v84 = (char *)v221 + 4 * (unsigned int)(v222 - 1) + 4;
  while ( 2 )
  {
    v85 = v10[2] + 16LL * *v82;
    v86 = *(unsigned int *)(v85 + 4);
    if ( !(_DWORD)v86 )
    {
      v82 = (unsigned int *)v83;
      if ( v84 == v83 )
        break;
      goto LABEL_100;
    }
    sub_168B9F0(v227, *v10 + 8LL, *(unsigned int *)(v85 + 12), v86, 0);
    sub_15F7200(v227);
    v82 = (unsigned int *)v83;
    if ( v84 != v83 )
    {
LABEL_100:
      v83 += 4;
      continue;
    }
    break;
  }
  if ( !(_DWORD)v222 )
    goto LABEL_56;
LABEL_57:
  if ( ptr != v64 + 2 )
    free(ptr);
  if ( v221 != v223 )
    free(v221);
  if ( v218 != v220 )
    free(v218);
}
