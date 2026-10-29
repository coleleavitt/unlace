unsigned __int64 __fastcall sub_1B67640(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        double a7,
        __m128 a8,
        int a9,
        __int64 a10)
{
  unsigned __int64 v10; // r14
  __int16 v11; // ax
  unsigned __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 *v19; // rax
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdi
  unsigned int v25; // r12d
  __int64 v26; // rax
  unsigned int *v27; // rbp
  __int64 v28; // rbx
  __m128 v29; // xmm0
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  void **v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  void **v37; // rbp
  __int64 v38; // rbx
  _QWORD *v39; // rax
  void **v40; // r12
  __int64 *v41; // r14
  __int64 *i; // r15
  __int64 *v43; // rax
  int v44; // eax
  __int64 v45; // rbx
  __int64 *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r15
  char v49; // al
  _QWORD *v50; // r14
  unsigned __int8 v51; // r13
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // rbx
  void *v55; // rdi
  int v56; // edx
  char ***v57; // r15
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  __int64 v60; // r14
  char *v61; // r12
  char *v62; // r13
  __int64 v63; // rdx
  char *v64; // rbp
  __int64 v65; // rsi
  char *v66; // r14
  unsigned __int64 v67; // r12
  char *v68; // rbx
  void *v69; // rdi
  char *v70; // rax
  char *v71; // rdx
  int v72; // edx
  unsigned int v73; // eax
  int v74; // edx
  int v75; // edx
  int v76; // eax
  __int64 v77; // rcx
  int v78; // eax
  int v79; // eax
  int v80; // eax
  __int64 v81; // rdx
  char *v82; // rsi
  char *v83; // rdx
  __int64 v84; // r14
  __int64 *v85; // r12
  __int64 v86; // rdx
  __int64 *v87; // rax
  __int64 v88; // rcx
  _DWORD *v89; // rax
  __int64 v90; // r8
  __int64 v91; // r9
  void **v92; // r14
  __int64 v93; // rcx
  unsigned __int64 v94; // rdx
  void **v95; // r10
  void *v96; // rdi
  unsigned int v97; // ebx
  int v98; // eax
  unsigned int v99; // ebx
  void *v100; // rax
  unsigned int v101; // ebx
  void *v102; // rax
  _DWORD *v103; // rbx
  __int64 v104; // rdx
  void **v105; // rbx
  __int64 v106; // rsi
  void **v107; // rdx
  void **v108; // r14
  void **v109; // rbp
  void *v110; // rdi
  char v111; // al
  unsigned int v112; // ebx
  __int64 v113; // rdi
  __int64 v114; // rax
  void **v115; // rbx
  void **v116; // rdx
  __int64 v117; // r10
  unsigned __int64 v118; // r12
  unsigned __int64 v119; // rbp
  void **v120; // r14
  int v121; // eax
  unsigned int v122; // eax
  __int64 *v123; // rax
  __int64 v124; // rdx
  void **v125; // r14
  void **v126; // rbx
  __int64 v127; // rsi
  void *v128; // rdi
  int v129; // edx
  int v130; // eax
  unsigned int v131; // ecx
  int v132; // eax
  int v133; // edx
  int v134; // eax
  unsigned int v135; // ecx
  int v136; // eax
  int v137; // edx
  int v138; // eax
  unsigned int v139; // ecx
  int v140; // eax
  int v141; // edx
  int v142; // eax
  unsigned int v143; // ecx
  int v144; // eax
  char **v145; // rcx
  int v146; // eax
  size_t v147; // rdx
  const void *v148; // rsi
  size_t v149; // rdx
  const void *v150; // rsi
  size_t v151; // rdx
  void *v152; // rsi
  signed __int64 v153; // r14
  char *v154; // rbx
  int v155; // ecx
  char **v156; // rsi
  char **v157; // rax
  int v158; // ecx
  char **v159; // rsi
  char **v160; // rax
  int v161; // ecx
  char **v162; // rsi
  char **v163; // rax
  int v164; // ecx
  char **v165; // rsi
  char **v166; // rax
  __int64 *v167; // rbx
  char *v168; // r14
  int v169; // edx
  __int64 v170; // rax
  char *v171; // rax
  __int64 v172; // rdx
  size_t v173; // rax
  __int64 *v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // r12
  __int64 v178; // rax
  _QWORD *v179; // rax
  unsigned int v180; // eax
  __int64 *v181; // rbp
  __int64 v182; // [rsp-10h] [rbp-988h]
  __int64 v183; // [rsp-8h] [rbp-980h]
  __int64 v184; // [rsp+0h] [rbp-978h] BYREF
  unsigned __int64 v185; // [rsp+8h] [rbp-970h]
  __int64 v186; // [rsp+10h] [rbp-968h]
  __int64 *v187; // [rsp+18h] [rbp-960h]
  _BYTE *v188; // [rsp+20h] [rbp-958h]
  void **v189; // [rsp+28h] [rbp-950h]
  __int64 v190; // [rsp+30h] [rbp-948h]
  __int64 v191; // [rsp+38h] [rbp-940h]
  unsigned int v192; // [rsp+44h] [rbp-934h]
  _QWORD *v193; // [rsp+48h] [rbp-930h]
  unsigned __int64 *v194; // [rsp+50h] [rbp-928h]
  unsigned __int64 v195; // [rsp+58h] [rbp-920h]
  __int64 v196; // [rsp+60h] [rbp-918h]
  void **v197; // [rsp+68h] [rbp-910h]
  __int64 *p_ptr; // [rsp+70h] [rbp-908h]
  unsigned __int64 v199; // [rsp+78h] [rbp-900h]
  void **v200; // [rsp+80h] [rbp-8F8h]
  void ***v201; // [rsp+88h] [rbp-8F0h]
  unsigned __int64 v202; // [rsp+90h] [rbp-8E8h]
  __m128 *v203; // [rsp+98h] [rbp-8E0h]
  __int64 v204; // [rsp+A8h] [rbp-8D0h]
  void **v205; // [rsp+B0h] [rbp-8C8h] BYREF
  __int64 v206; // [rsp+B8h] [rbp-8C0h]
  __int64 v207; // [rsp+C0h] [rbp-8B8h]
  __m128 v208; // [rsp+D0h] [rbp-8A8h] BYREF
  __m128 v209; // [rsp+E0h] [rbp-898h]
  void *v210; // [rsp+F0h] [rbp-888h] BYREF
  __int64 v211; // [rsp+F8h] [rbp-880h]
  char v212; // [rsp+100h] [rbp-878h] BYREF
  _BYTE v213[224]; // [rsp+120h] [rbp-858h] BYREF
  void *v214; // [rsp+200h] [rbp-778h] BYREF
  __int64 v215; // [rsp+208h] [rbp-770h]
  int v216; // [rsp+210h] [rbp-768h] BYREF
  char v217; // [rsp+214h] [rbp-764h]
  char v218; // [rsp+215h] [rbp-763h]
  bool v219; // [rsp+216h] [rbp-762h]
  char v220; // [rsp+218h] [rbp-760h]
  int v221; // [rsp+240h] [rbp-738h]
  void *v222; // [rsp+248h] [rbp-730h]
  __int64 v223; // [rsp+250h] [rbp-728h]
  void *v224; // [rsp+2D8h] [rbp-6A0h]
  __int64 v225; // [rsp+2E0h] [rbp-698h]
  __int64 v226; // [rsp+308h] [rbp-670h]
  void **v227; // [rsp+310h] [rbp-668h]
  unsigned int v228; // [rsp+318h] [rbp-660h]
  void *ptr; // [rsp+370h] [rbp-608h] BYREF
  __int64 v230; // [rsp+378h] [rbp-600h]
  _BYTE v231[1528]; // [rsp+380h] [rbp-5F8h] BYREF

  v10 = a2 & 0xFFFFFFFFFFFFFFFELL;
  v11 = *(_WORD *)(a2 & 0xFFFFFFFFFFFFFFFELL);
  v187 = a1;
  v185 = a2;
  v191 = a3;
  v192 = a4;
  v194 = a5;
  v195 = a6;
  if ( ((v11 + 423) & 0x1FFu) > 4 )
    return v185;
  v14 = sub_BFBC70(*(_QWORD *)(v10 + 32));
  v196 = v14;
  if ( !v14 || (*(_BYTE *)(v14 + 28) & 0x7Fu) - 34 > 5 )
    return v185;
  if ( *(_DWORD *)(sub_168B6E0((__int64)v187) + 64) > 0x31u && *(_DWORD *)(sub_168B6E0((__int64)v187) + 64) <= 0x3Cu )
  {
    v170 = *(_QWORD *)(v196 + 40);
    if ( (v170 & 7) == 0 && (v170 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v171 = (char *)sub_995750(v196);
      v230 = v172;
      ptr = v171;
      v173 = j__strlen("omp_");
      a2 = (__int64)"omp_";
      p_ptr = (__int64 *)&ptr;
      if ( (unsigned __int8)sub_2246340(&ptr, "omp_", v173) )
      {
        if ( v191 && (*(_BYTE *)(v191 + 11) & 4) != 0 )
        {
          a2 = (__int64)v187;
          sub_168B9F0((__int64)p_ptr, v187, v192, 0x1216u, 0);
          sub_15F7200(p_ptr);
        }
      }
    }
  }
  if ( (*(_BYTE *)(v196 + 29) & 1) == 0 )
    return v185;
  v19 = sub_B8C3D0(v196, a2, v15, v16, v17, v18);
  v20 = (__int64 *)*v19;
  v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
  if ( *v19 >= v21 )
  {
    if ( v20 != (__int64 *)v21 )
    {
      if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 296 )
        goto LABEL_13;
      v174 = (__int64 *)(v21 + 8);
      while ( v20 != v174 )
      {
        v175 = *v174++;
        if ( *(_WORD *)(v175 + 36) == 296 )
          goto LABEL_13;
      }
    }
    return v185;
  }
  v22 = *v19;
  while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 296 )
  {
    v22 += 8LL;
    if ( v21 == v22 )
      return v185;
  }
  if ( v21 == v22 )
    return v185;
LABEL_13:
  v184 = v10;
  v23 = sub_168B6C0((__int64)v187);
  v24 = *v187;
  v193 = (_QWORD *)v23;
  v25 = *((_DWORD *)v187 + 132);
  v208 = _mm_loadh_ps((const double *)&v184);
  v184 = (__int64)sub_1B22F10;
  v26 = v187[1];
  v27 = *(unsigned int **)(v26 + 27680);
  v28 = *(unsigned int *)(v26 + 27688);
  v29 = _mm_loadh_ps((const double *)&v184);
  v209 = v29;
  v30 = sub_15F1640(v24, 0);
  v31 = v23;
  v188 = v213;
  v203 = &v208;
  sub_EB7D30((__int64)v213, v23, (__m128i *)&v208, v30, v27, v28, v25);
  v32 = &ptr;
  v33 = (__int64)v231;
  p_ptr = (__int64 *)&ptr;
  v34 = *(_QWORD *)(v196 + 48);
  ptr = v231;
  v202 = v34;
  v197 = &v210;
  v210 = &v212;
  v211 = 0x400000000LL;
  v230 = 0x400000000LL;
  v35 = v182;
  v36 = v183;
  v37 = &v214;
  v199 = v10;
  v184 = (__int64)&v216;
  do
  {
    v38 = v196;
    if ( (*(_BYTE *)(v196 + 29) & 1) == 0 )
      goto LABEL_22;
    v39 = sub_B8C3D0(v196, v31, v33, (__int64)v32, v35, v36);
    v33 = *((unsigned int *)v39 + 2);
    v40 = (void **)(*v39 + 8 * v33);
    if ( (*(_BYTE *)(v38 + 29) & 1) != 0 )
      v41 = (__int64 *)*sub_B8C3D0(v38, v31, v33, (__int64)v32, v35, v36);
    else
      v41 = nullptr;
    for ( i = v41; ; ++i )
    {
      if ( i < (__int64 *)v40 )
      {
        v43 = i;
        while ( 1 )
        {
          v33 = *v43;
          if ( *(_WORD *)(*v43 + 36) == 296 )
            goto LABEL_76;
          if ( v40 == (void **)++v43 )
            goto LABEL_22;
        }
      }
      if ( i == (__int64 *)v40 )
        goto LABEL_22;
      if ( *((_WORD *)*v40 + 18) != 296 )
        break;
LABEL_76:
      v86 = *i;
      if ( *(_WORD *)(*i + 36) != 296 )
      {
        v87 = i + 1;
        do
        {
          v86 = *v87;
          i = v87++;
        }
        while ( *(_WORD *)(v86 + 36) != 296 );
      }
      v29 = 0;
      v88 = (__int64)(v37 + 46);
      v186 = *(_QWORD *)(v86 + 40);
      v214 = (void *)v184;
      *(_OWORD *)v184 = 0;
      v215 = 0x600000002LL;
      v221 = 80;
      v223 = 0x800000000LL;
      v225 = 0x800000000LL;
      v226 = 1;
      v222 = v37 + 11;
      v224 = v37 + 29;
      v89 = v37 + 34;
      do
      {
        *v89 = -1;
        v89 += 6;
      }
      while ( v89 != (_DWORD *)v88 );
      sub_EBB620(*(_QWORD *)(v86 + 48), (__int64)v193, (__int64)v37, v88, v35, v36);
      if ( !(unsigned __int8)sub_20F35E0(v37, v188, 0) )
      {
        sub_1505E60((__int64)v37);
        continue;
      }
      v92 = v37;
      v93 = HIDWORD(v230);
      v94 = (unsigned int)v230 + 1LL;
      v95 = (void **)((char *)ptr + 368 * (unsigned int)v230);
      if ( v94 > HIDWORD(v230) )
      {
        if ( ptr > v37 || v95 <= v37 )
        {
          v167 = p_ptr + 2;
          v168 = (char *)sub_2237400(p_ptr, p_ptr + 2, v94, 368, &v205);
          sub_15181F0(p_ptr, (__int64)v168);
          v169 = (int)v205;
          if ( ptr == v167 )
          {
            ptr = v168;
          }
          else
          {
            v189 = v205;
            free(ptr);
            ptr = v168;
            v169 = (int)v189;
          }
          HIDWORD(v230) = v169;
          v95 = (void **)&v168[368 * (unsigned int)v230];
          v92 = v37;
        }
        else
        {
          v153 = (char *)v37 - (_BYTE *)ptr;
          v189 = (void **)(p_ptr + 2);
          v154 = (char *)sub_2237400(p_ptr, p_ptr + 2, v94, 368, &v205);
          sub_15181F0(p_ptr, (__int64)v154);
          if ( ptr == v189 )
          {
            ptr = v154;
            HIDWORD(v230) = (_DWORD)v205;
          }
          else
          {
            v189 = v205;
            free(ptr);
            ptr = v154;
            HIDWORD(v230) = (_DWORD)v189;
          }
          v92 = (void **)&v154[v153];
          v95 = (void **)&v154[368 * (unsigned int)v230];
        }
      }
      v96 = v95 + 2;
      v95[1] = (void *)0x600000000LL;
      v97 = *((_DWORD *)v92 + 2);
      *v95 = v95 + 2;
      if ( v97 && v92 != v95 )
      {
        v151 = 8LL * v97;
        if ( v97 <= 6uLL
          || (v189 = v95,
              sub_2237220(v95, v95 + 2, v97, 8),
              v95 = v189,
              v151 = 8LL * *((unsigned int *)v92 + 2),
              v96 = *v189,
              v151) )
        {
          v152 = *v92;
          v189 = v95;
          memcpy(v96, v152, v151);
          v95 = v189;
        }
        *((_DWORD *)v95 + 2) = v97;
      }
      v98 = *((_DWORD *)v92 + 16);
      v95[10] = (void *)0x800000000LL;
      *((_DWORD *)v95 + 16) = v98;
      v99 = *((_DWORD *)v92 + 20);
      v100 = v95 + 11;
      v95[9] = v95 + 11;
      if ( v99 && v95 + 9 != v92 + 9 )
      {
        v149 = 16LL * v99;
        if ( v99 <= 8uLL
          || (v189 = v95,
              sub_2237220(v95 + 9, v95 + 11, v99, 16),
              v95 = v189,
              v149 = 16LL * *((unsigned int *)v92 + 20),
              v100 = v189[9],
              v149) )
        {
          v150 = v92[9];
          v189 = v95;
          memcpy(v100, v150, v149);
          v95 = v189;
        }
        *((_DWORD *)v95 + 20) = v99;
      }
      v95[28] = (void *)0x800000000LL;
      v101 = *((_DWORD *)v92 + 56);
      v102 = v95 + 29;
      v95[27] = v95 + 29;
      if ( v101 && v95 + 27 != v92 + 27 )
      {
        v147 = 4LL * v101;
        if ( v101 <= 8uLL
          || (v189 = v95,
              sub_2237220(v95 + 27, v95 + 29, v101, 4),
              v95 = v189,
              v147 = 4LL * *((unsigned int *)v92 + 56),
              v102 = v189[27],
              v147) )
        {
          v148 = v92[27];
          v189 = v95;
          memcpy(v102, v148, v147);
          v95 = v189;
        }
        *((_DWORD *)v95 + 56) = v101;
      }
      v103 = v95 + 34;
      v95[33] = &dword_0 + 1;
      do
      {
        *v103 = -1;
        v103 += 6;
      }
      while ( v103 != (_DWORD *)(v95 + 46) );
      if ( ((_BYTE)v95[33] & 1) != 0 )
      {
        v107 = v95 + 46;
        v189 = v92;
        v105 = v95 + 34;
        v108 = v95;
        v190 = (__int64)v37;
        v109 = v95 + 46;
        goto LABEL_94;
      }
      v104 = *((unsigned int *)v95 + 70);
      v105 = (void **)v95[34];
      v106 = 3 * v104;
      if ( !(_DWORD)v104 )
        goto LABEL_144;
      v107 = &v105[v106];
      if ( v105 == &v105[v106] )
        goto LABEL_144;
      v189 = v92;
      v108 = v95;
      v190 = (__int64)v37;
      v109 = &v105[v106];
      do
      {
LABEL_94:
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)v105 + 2) > 1 && *((_DWORD *)v105 + 4) > 0x40u )
          {
            v110 = v105[1];
            if ( v110 )
              break;
          }
          v105 += 3;
          if ( v105 == v109 )
            goto LABEL_98;
        }
        operator delete[](v110);
        v105 += 3;
      }
      while ( v105 != v109 );
LABEL_98:
      v95 = v108;
      v37 = (void **)v190;
      v92 = v189;
      if ( ((_BYTE)v95[33] & 1) == 0 )
      {
        v105 = (void **)v95[34];
        v106 = 3LL * *((unsigned int *)v95 + 70);
LABEL_144:
        v189 = v95;
        operator delete(v105, v106 * 8, 8);
        v95 = v189;
      }
      v111 = *((_BYTE *)v95 + 264) | 1;
      *((_BYTE *)v95 + 264) = v111;
      if ( ((_BYTE)v92[33] & 1) == 0 && *((_DWORD *)v92 + 70) > 4u )
      {
        *((_BYTE *)v95 + 264) = v111 & 0xFE;
        if ( ((_BYTE)v92[33] & 1) != 0 )
        {
          v113 = 96;
          v112 = 4;
        }
        else
        {
          v112 = *((_DWORD *)v92 + 70);
          v113 = 24LL * v112;
        }
        v189 = v95;
        v114 = sub_22300B0(v113, 8, v107, v93, v90, v91);
        v95 = v189;
        v189[34] = (void *)v114;
        *((_DWORD *)v95 + 70) = v112;
      }
      v115 = v95 + 34;
      *((_DWORD *)v95 + 66) = (_DWORD)v92[33] & 0xFFFFFFFE | (_DWORD)v95[33] & 1;
      *((_DWORD *)v95 + 67) = *((_DWORD *)v92 + 67);
      if ( ((_BYTE)v95[33] & 1) == 0 )
        v115 = (void **)v95[34];
      v116 = v92 + 34;
      if ( ((_BYTE)v92[33] & 1) == 0 )
        v116 = (void **)v92[34];
      if ( ((_BYTE)v95[33] & 1) != 0 )
      {
        v117 = 4;
      }
      else
      {
        v117 = *((unsigned int *)v95 + 70);
        if ( !v117 )
          goto LABEL_123;
      }
      v189 = v40;
      v190 = (__int64)v37;
      v118 = 0;
      v119 = v117;
      v120 = v116;
      do
      {
        v121 = *(_DWORD *)v120;
        *(_DWORD *)v115 = *(_DWORD *)v120;
        if ( (unsigned int)(v121 + 2) > 1 )
        {
          v122 = *((_DWORD *)v120 + 4);
          *((_DWORD *)v115 + 4) = v122;
          if ( v122 > 0x40 )
            sub_2205510(v115 + 1);
          else
            v115[1] = v120[1];
        }
        ++v118;
        v120 += 3;
        v115 += 3;
      }
      while ( v118 < v119 );
      v40 = v189;
      v37 = (void **)v190;
LABEL_123:
      v125 = v37 + 46;
      v126 = v37 + 34;
      LODWORD(v230) = v230 + 1;
      sub_14B7B40((__int64)v197, v186);
      if ( (v226 & 1) != 0
        || (v33 = v228, v126 = v227, v127 = 3LL * v228, v228) && (v125 = &v227[v127], v227 != &v227[v127]) )
      {
        do
        {
          while ( 1 )
          {
            if ( (unsigned int)(*(_DWORD *)v126 + 2) > 1 && *((_DWORD *)v126 + 4) > 0x40u )
            {
              v128 = v126[1];
              if ( v128 )
                break;
            }
            v126 += 3;
            if ( v126 == v125 )
              goto LABEL_132;
          }
          operator delete[](v128);
          v126 += 3;
        }
        while ( v126 != v125 );
LABEL_132:
        if ( (v226 & 1) != 0 )
          goto LABEL_133;
        v126 = v227;
        v127 = 3LL * v228;
      }
      operator delete(v126, v127 * 8, 8);
LABEL_133:
      if ( v224 != v37 + 29 )
        free(v224);
      if ( v222 != v37 + 11 )
        free(v222);
      if ( v214 != (void *)v184 )
        free(v214);
    }
    v123 = (__int64 *)(v40 + 1);
    while ( 1 )
    {
      v33 = (__int64)v123;
      if ( i == v123 )
        break;
      v124 = *v123++;
      if ( *(_WORD *)(v124 + 36) == 296 )
        goto LABEL_76;
    }
LABEL_22:
    if ( (*(_BYTE *)(v196 + 104) & 3) != 0 )
      break;
    v31 = v196;
    v196 = (__int64)sub_7053D0((__int64 *)(v196 + 104), v196, v33, (__int64)v32, v35, v36);
  }
  while ( v196 );
  v201 = &v205;
  v189 = &v214;
  v190 = v199;
LABEL_25:
  v44 = sub_20F3600(p_ptr, v188);
  if ( v44 >= 0 )
  {
    v45 = v44;
    v186 = 8LL * v44;
    v46 = *(__int64 **)((char *)v210 + v186);
    v47 = *v187;
    v48 = v46[2];
    v214 = (void *)v47;
    v215 = v47;
    v216 = *(_DWORD *)(v47 + 11200);
    v217 = *(_BYTE *)(v47 + 12592);
    v218 = *(_BYTE *)(v47 + 11248);
    v219 = *(_DWORD *)(*(_QWORD *)(v47 + 264) + 204LL) == 0;
    v49 = *(_BYTE *)(v47 + 10024);
    *(_BYTE *)(v47 + 12592) = 1;
    *(_BYTE *)(v47 + 11248) = 1;
    v220 = v49;
    *(_BYTE *)(v47 + 10024) = 1;
    if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 35 <= 3 )
    {
      LOWORD(v184) = *(_WORD *)v190;
      if ( (v184 & 0x1FF) != 0x5C )
        BUG();
      v50 = v193;
      v51 = *(_BYTE *)(v190 + 1);
      v184 = v193[2386];
      v52 = sub_C94680(v190);
      LODWORD(v206) = 0;
      v205 = nullptr;
      v201[2] = nullptr;
      v204 = v48 | (*(_BYTE *)(v48 + 29) >> 5) & 3;
      v46 = sub_C0C460(v50, v52, 0, 0, 0, 0, 0, v48, v204, 0, v206, v207, 0, v184, (v51 >> 1) & 3, (v51 >> 3) & 7, 0);
    }
    v53 = sub_192A5E0(*v187, v191, (unsigned __int16 *)v46, v192, v194, v195, v29, a8, a9, a10, 0, 0);
    v199 = v53;
    if ( v53 >= 2 )
    {
      v196 = v53 & 0xFFFFFFFFFFFFFFFELL;
      LOWORD(v184) = *(_WORD *)(v53 & 0xFFFFFFFFFFFFFFFELL);
      if ( (((_WORD)v184 + 423) & 0x1FFu) > 4 )
        goto LABEL_31;
      v176 = sub_BFBC70(*(_QWORD *)(v196 + 32));
      v177 = v176;
      if ( !v176 || (*(_BYTE *)(v176 + 28) & 0x7Fu) - 34 > 5 )
      {
        sub_168B6C0((__int64)v187);
        BUG();
      }
      v178 = sub_168B6C0((__int64)v187);
      v199 = sub_AAA8C0(v178, v202, *(_QWORD *)(v177 + 48), 0, 0, 1, 0) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v199 )
      {
        v84 = v190;
        v200 = &v214;
        sub_1AF2A30((__int64)&v214);
LABEL_223:
        v214 = (void *)v196;
        v179 = (_QWORD *)sub_168B6C0((__int64)v187);
        v12 = sub_C0B960(v179, v84, v200, 1, 0);
        v180 = v230;
        goto LABEL_224;
      }
    }
    v196 = 0;
LABEL_31:
    v54 = 368 * (v45 + 1);
    v200 = v189;
    sub_1AF2A30((__int64)v189);
    v55 = ptr;
    v56 = v230;
    v57 = (char ***)((char *)ptr + v54);
    v58 = 368LL * (unsigned int)v230 - v54;
    v59 = 0xD37A6F4DE9BD37A7LL * (v58 >> 4);
    if ( v58 <= 0 )
      goto LABEL_59;
    while ( 1 )
    {
      v60 = (__int64)(v57 - 46);
      v61 = (char *)(v57 + 33);
      v62 = (char *)(v57 - 13);
      sub_9B8670(v57 - 46, v57);
      *((_DWORD *)v57 - 76) = *((_DWORD *)v57 + 16);
      sub_10E09B0(v57 - 37, v57 + 9);
      sub_1B51BA0(v57 - 19, v57 + 27);
      if ( (*(_BYTE *)(v57 - 13) & 1) != 0 )
      {
        v184 = (__int64)(v57 - 46);
        v64 = (char *)(v57 - 12);
        v66 = (char *)(v57 + 33);
        v67 = v59;
        v68 = (char *)v57;
        goto LABEL_37;
      }
      v63 = *((unsigned int *)v57 - 22);
      v64 = (char *)*(v57 - 12);
      v65 = 24 * v63;
      if ( !(_DWORD)v63 || v64 == &v64[v65] )
        goto LABEL_74;
      v184 = (__int64)(v57 - 46);
      v66 = (char *)(v57 + 33);
      v67 = v59;
      v68 = &v64[v65];
      do
      {
LABEL_37:
        while ( 1 )
        {
          if ( (unsigned int)(*(_DWORD *)v64 + 2) > 1 && *((_DWORD *)v64 + 4) > 0x40u )
          {
            v69 = *((void **)v64 + 1);
            if ( v69 )
              break;
          }
          v64 += 24;
          if ( v64 == v68 )
            goto LABEL_41;
        }
        operator delete[](v69);
        v64 += 24;
      }
      while ( v64 != v68 );
LABEL_41:
      v59 = v67;
      v61 = v66;
      v60 = v184;
      if ( (*(_BYTE *)(v184 + 264) & 1) == 0 )
        break;
LABEL_42:
      *(_DWORD *)(v60 + 264) = 1;
      *((_DWORD *)v57 - 25) = 0;
      if ( (*(_BYTE *)(v60 + 264) & 1) != 0 )
      {
        v70 = (char *)(v57 - 12);
        v71 = (char *)v57;
      }
      else
      {
        v70 = (char *)*(v57 - 12);
        v71 = &v70[24 * *((unsigned int *)v57 - 22)];
        if ( v71 == v70 )
        {
          v72 = 0;
          goto LABEL_46;
        }
      }
      do
      {
        *(_DWORD *)v70 = -1;
        v70 += 24;
      }
      while ( v71 != v70 );
      v72 = *(_DWORD *)(v60 + 264) >> 1;
LABEL_46:
      v73 = (_DWORD)v57[33] & 0xFFFFFFFE;
      *((_DWORD *)v57 + 66) = (_DWORD)v57[33] & 1 | (2 * v72);
      *(_DWORD *)(v60 + 264) = v73 | *(_DWORD *)(v60 + 264) & 1;
      v74 = *((_DWORD *)v57 + 67);
      *((_DWORD *)v57 + 67) = *((_DWORD *)v57 - 25);
      *((_DWORD *)v57 - 25) = v74;
      if ( (*(_BYTE *)(v60 + 264) & 1) != 0 )
      {
        if ( ((_BYTE)v57[33] & 1) != 0 )
        {
          v129 = *((_DWORD *)v57 - 24);
          v130 = *((_DWORD *)v57 + 68);
          v131 = v129 + 2;
          if ( v130 == -1 || v130 == -2 )
          {
            *((_DWORD *)v57 - 24) = v130;
            *((_DWORD *)v57 + 68) = v129;
            if ( v131 > 1 )
            {
              *((_DWORD *)v57 + 72) = *((_DWORD *)v57 - 20);
              v57[35] = *(v57 - 11);
            }
          }
          else if ( v131 > 1 )
          {
            v158 = *((_DWORD *)v57 - 20);
            v159 = *(v57 - 11);
            *((_DWORD *)v57 - 24) = v130;
            v160 = v57[35];
            *((_DWORD *)v57 + 68) = v129;
            v57[35] = v159;
            *(v57 - 11) = v160;
            LODWORD(v160) = *((_DWORD *)v57 + 72);
            *((_DWORD *)v57 + 72) = v158;
            *((_DWORD *)v57 - 20) = (_DWORD)v160;
          }
          else
          {
            *((_DWORD *)v57 - 24) = v130;
            v132 = *((_DWORD *)v57 + 72);
            *((_DWORD *)v57 + 68) = v129;
            *((_DWORD *)v57 - 20) = v132;
            *(v57 - 11) = v57[35];
          }
          v133 = *((_DWORD *)v57 - 18);
          v134 = *((_DWORD *)v57 + 74);
          v135 = v133 + 2;
          if ( v134 == -1 || v134 == -2 )
          {
            *((_DWORD *)v57 - 18) = v134;
            *((_DWORD *)v57 + 74) = v133;
            if ( v135 > 1 )
            {
              *((_DWORD *)v57 + 78) = *((_DWORD *)v57 - 14);
              v57[38] = *(v57 - 8);
            }
          }
          else if ( v135 > 1 )
          {
            v155 = *((_DWORD *)v57 - 14);
            v156 = *(v57 - 8);
            *((_DWORD *)v57 - 18) = v134;
            v157 = v57[38];
            *((_DWORD *)v57 + 74) = v133;
            v57[38] = v156;
            *(v57 - 8) = v157;
            LODWORD(v157) = *((_DWORD *)v57 + 78);
            *((_DWORD *)v57 + 78) = v155;
            *((_DWORD *)v57 - 14) = (_DWORD)v157;
          }
          else
          {
            *((_DWORD *)v57 - 18) = v134;
            v136 = *((_DWORD *)v57 + 78);
            *((_DWORD *)v57 + 74) = v133;
            *((_DWORD *)v57 - 14) = v136;
            *(v57 - 8) = v57[38];
          }
          v137 = *((_DWORD *)v57 - 12);
          v138 = *((_DWORD *)v57 + 80);
          v139 = v137 + 2;
          if ( v138 == -1 || v138 == -2 )
          {
            *((_DWORD *)v57 - 12) = v138;
            *((_DWORD *)v57 + 80) = v137;
            if ( v139 > 1 )
            {
              *((_DWORD *)v57 + 84) = *((_DWORD *)v57 - 8);
              v57[41] = *(v57 - 5);
            }
          }
          else if ( v139 > 1 )
          {
            v164 = *((_DWORD *)v57 - 8);
            v165 = *(v57 - 5);
            *((_DWORD *)v57 - 12) = v138;
            v166 = v57[41];
            *((_DWORD *)v57 + 80) = v137;
            v57[41] = v165;
            *(v57 - 5) = v166;
            LODWORD(v166) = *((_DWORD *)v57 + 84);
            *((_DWORD *)v57 + 84) = v164;
            *((_DWORD *)v57 - 8) = (_DWORD)v166;
          }
          else
          {
            *((_DWORD *)v57 - 12) = v138;
            v140 = *((_DWORD *)v57 + 84);
            *((_DWORD *)v57 + 80) = v137;
            *((_DWORD *)v57 - 8) = v140;
            *(v57 - 5) = v57[41];
          }
          v141 = *((_DWORD *)v57 - 6);
          v142 = *((_DWORD *)v57 + 86);
          v143 = v141 + 2;
          if ( v142 == -1 || v142 == -2 )
          {
            *((_DWORD *)v57 - 6) = v142;
            *((_DWORD *)v57 + 86) = v141;
            if ( v143 > 1 )
            {
              *((_DWORD *)v57 + 90) = *((_DWORD *)v57 - 2);
              v57[44] = *(v57 - 2);
            }
          }
          else if ( v143 > 1 )
          {
            v161 = *((_DWORD *)v57 - 2);
            v162 = *(v57 - 2);
            *((_DWORD *)v57 - 6) = v142;
            v163 = v57[44];
            *((_DWORD *)v57 + 86) = v141;
            v57[44] = v162;
            *(v57 - 2) = v163;
            LODWORD(v163) = *((_DWORD *)v57 + 90);
            *((_DWORD *)v57 + 90) = v161;
            *((_DWORD *)v57 - 2) = (_DWORD)v163;
          }
          else
          {
            *((_DWORD *)v57 - 6) = v142;
            v144 = *((_DWORD *)v57 + 90);
            *((_DWORD *)v57 + 86) = v141;
            *((_DWORD *)v57 - 2) = v144;
            *(v57 - 2) = v57[44];
          }
          goto LABEL_57;
        }
        v75 = *((_DWORD *)v57 + 70);
        v62 = v61;
        v61 = (char *)(v57 - 13);
LABEL_48:
        *v62 |= 1u;
        v76 = *((_DWORD *)v61 + 2);
        v77 = *((_QWORD *)v62 + 1);
        *((_DWORD *)v62 + 2) = v76;
        if ( (unsigned int)(v76 + 2) > 1 )
        {
          *((_DWORD *)v62 + 6) = *((_DWORD *)v61 + 6);
          *((_QWORD *)v62 + 2) = *((_QWORD *)v61 + 2);
        }
        v78 = *((_DWORD *)v61 + 8);
        *((_DWORD *)v62 + 8) = v78;
        if ( (unsigned int)(v78 + 2) > 1 )
        {
          *((_DWORD *)v62 + 12) = *((_DWORD *)v61 + 12);
          *((_QWORD *)v62 + 5) = *((_QWORD *)v61 + 5);
        }
        v79 = *((_DWORD *)v61 + 14);
        *((_DWORD *)v62 + 14) = v79;
        if ( (unsigned int)(v79 + 2) > 1 )
        {
          *((_DWORD *)v62 + 18) = *((_DWORD *)v61 + 18);
          *((_QWORD *)v62 + 8) = *((_QWORD *)v61 + 8);
        }
        v80 = *((_DWORD *)v61 + 20);
        *((_DWORD *)v62 + 20) = v80;
        if ( (unsigned int)(v80 + 2) > 1 )
        {
          *((_DWORD *)v62 + 24) = *((_DWORD *)v61 + 24);
          *((_QWORD *)v62 + 11) = *((_QWORD *)v61 + 11);
        }
        *v61 &= ~1u;
        *((_QWORD *)v61 + 1) = v77;
        *((_DWORD *)v61 + 4) = v75;
        goto LABEL_57;
      }
      v75 = *((_DWORD *)v57 - 22);
      if ( ((_BYTE)v57[33] & 1) != 0 )
        goto LABEL_48;
      v145 = v57[34];
      v57[34] = *(v57 - 12);
      v146 = *((_DWORD *)v57 + 70);
      *(v57 - 12) = v145;
      *((_DWORD *)v57 - 22) = v146;
      *((_DWORD *)v57 + 70) = v75;
LABEL_57:
      v57 += 46;
      if ( !--v59 )
      {
        v56 = v230;
        v55 = ptr;
LABEL_59:
        v81 = (unsigned int)(v56 - 1);
        LODWORD(v230) = v81;
        sub_1505E60((__int64)v55 + 368 * v81);
        v82 = (char *)v210 + v186 + 8;
        v83 = (char *)v210 + 8 * (unsigned int)v211;
        if ( v83 == v82 )
        {
          LODWORD(v211) = v211 - 1;
          if ( !(_DWORD)v230 )
          {
LABEL_61:
            v84 = v190;
            if ( v199 <= 1 )
            {
              v12 = v185;
              v85 = (__int64 *)ptr;
              goto LABEL_63;
            }
            goto LABEL_223;
          }
        }
        else
        {
          memmove((char *)v210 + v186, v82, v83 - v82);
          LODWORD(v211) = v211 - 1;
          if ( !(_DWORD)v230 )
            goto LABEL_61;
        }
        goto LABEL_25;
      }
    }
    v64 = (char *)*(v57 - 12);
    v65 = 24LL * *((unsigned int *)v57 - 22);
LABEL_74:
    operator delete(v64, v65, 8);
    goto LABEL_42;
  }
  v12 = v185;
  v180 = v230;
LABEL_224:
  v181 = (__int64 *)ptr;
  v85 = (__int64 *)((char *)ptr + 368 * v180);
  if ( ptr != v85 )
  {
    do
    {
      v85 -= 46;
      sub_1505E60((__int64)v85);
    }
    while ( v181 != v85 );
    v85 = (__int64 *)ptr;
  }
LABEL_63:
  if ( v85 != p_ptr + 2 )
    free(v85);
  if ( v210 != v197 + 2 )
    free(v210);
  sub_EB4CB0((__int64)v188);
  if ( v209.m128_u64[0] )
    ((void (__fastcall *)(__m128 *, __m128 *, __int64))v209.m128_u64[0])(v203, v203, 3);
  return v12;
}
