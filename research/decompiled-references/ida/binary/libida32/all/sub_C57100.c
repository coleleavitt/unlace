__int64 __fastcall sub_C57100(const __m128i *a1, __int64 a2)
{
  void **v2; // r14
  const __m128i *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // r11d
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  _WORD *v19; // r12
  unsigned __int64 v20; // rdi
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  void **v24; // r9
  char v25; // cl
  char v26; // r11
  bool v27; // al
  unsigned __int8 **v28; // rax
  __int64 *v29; // rbx
  void *v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __m128i *v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rbp
  unsigned __int64 v39; // rbp
  __int64 v40; // r9
  __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  void *v45; // rdi
  unsigned __int8 **v46; // rax
  __int64 *v47; // rbx
  void *v48; // rax
  unsigned __int64 v49; // rdx
  void *v50; // r8
  __int64 *v51; // r10
  void *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __m128i *v56; // r8
  __int64 v57; // rsi
  __m128 v58; // xmm0
  unsigned __int64 v59; // rbp
  __int64 v60; // r13
  unsigned __int64 v61; // rsi
  void **v62; // rax
  void **v63; // r12
  unsigned __int64 v64; // r14
  int v65; // ecx
  __int64 v66; // rax
  unsigned __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rbx
  unsigned __int64 v74; // rbp
  unsigned __int8 v75; // dl
  void **v76; // rbx
  __int64 v77; // rdx
  unsigned __int8 **v78; // rax
  _QWORD *v79; // rbp
  __m128i v80; // xmm1
  __int64 v81; // rsi
  __int64 v82; // rcx
  int v83; // eax
  unsigned __int8 **v84; // rax
  unsigned __int8 **v85; // rbx
  char v86; // r11
  __int64 v87; // rax
  _QWORD *v88; // rdi
  __int16 v89; // ax
  unsigned __int16 v90; // ax
  unsigned __int64 v91; // rax
  __m128i v92; // xmm2
  const __m128i *v93; // rdx
  unsigned __int8 **v94; // rax
  unsigned __int8 **v95; // rbx
  int v96; // r14d
  unsigned __int64 v97; // rax
  char *v98; // rdx
  unsigned __int8 v99; // al
  unsigned __int64 v100; // r14
  unsigned __int8 **v101; // rax
  unsigned int v102; // eax
  char *v103; // rdx
  unsigned __int8 **v104; // rax
  unsigned __int64 *v105; // rax
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rdx
  unsigned __int64 v111; // r13
  unsigned __int64 v112; // rbp
  unsigned __int8 **v113; // rax
  unsigned __int8 **v114; // rbx
  __int64 *v115; // rbx
  void *v116; // rax
  __m128i si128; // xmm3
  _QWORD *v118; // rax
  __int64 v119; // rax
  unsigned __int8 v120; // dl
  unsigned int v121; // edx
  char v122; // r11
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  _QWORD *v126; // r8
  unsigned __int64 v127; // r10
  char v128; // al
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // r10
  __int64 v136; // rax
  __int64 v137; // rbp
  __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v140; // rax
  int *v141; // rbx
  char v142; // dl
  unsigned __int64 v143; // rax
  __int64 v144; // r10
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rbp
  void **v148; // rsi
  void **v149; // rdi
  __int64 v150; // rdx
  char v151; // al
  char v152; // al
  char v153; // al
  bool v154; // zf
  _WORD *v155; // rax
  __int64 v156; // rax
  unsigned __int64 v157; // rbx
  unsigned int v158; // eax
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // r8
  __int64 v162; // r9
  unsigned __int64 v163; // rax
  int v164; // eax
  unsigned __int8 **v165; // r13
  __int64 v166; // r15
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  unsigned int v170; // ebp
  int v171; // ebx
  unsigned __int8 **v172; // rax
  unsigned __int8 **v173; // r12
  unsigned __int8 **v174; // rax
  unsigned __int8 **v175; // rax
  __int64 v176; // r10
  unsigned __int8 **v177; // rbx
  unsigned __int8 **v178; // rax
  unsigned __int8 **v179; // rbx
  __int64 v180; // [rsp+0h] [rbp-1C8h]
  __int64 v181; // [rsp+0h] [rbp-1C8h]
  __int64 v182; // [rsp+0h] [rbp-1C8h]
  __int64 v183; // [rsp+8h] [rbp-1C0h]
  __int64 v184; // [rsp+8h] [rbp-1C0h]
  char v185; // [rsp+10h] [rbp-1B8h]
  void **v186; // [rsp+10h] [rbp-1B8h]
  __int64 *v187; // [rsp+10h] [rbp-1B8h]
  unsigned int v188; // [rsp+10h] [rbp-1B8h]
  char v189; // [rsp+10h] [rbp-1B8h]
  char v190; // [rsp+10h] [rbp-1B8h]
  void **v191; // [rsp+18h] [rbp-1B0h] BYREF
  void **v192; // [rsp+20h] [rbp-1A8h]
  __int64 *v193; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v194; // [rsp+30h] [rbp-198h]
  unsigned __int64 v195; // [rsp+38h] [rbp-190h]
  unsigned __int64 *v196; // [rsp+40h] [rbp-188h]
  unsigned int v197; // [rsp+48h] [rbp-180h]
  _BYTE v198[12]; // [rsp+4Ch] [rbp-17Ch]
  __int64 *v199; // [rsp+58h] [rbp-170h]
  _WORD *v200; // [rsp+60h] [rbp-168h]
  const __m128i *v201; // [rsp+68h] [rbp-160h]
  _QWORD *v202; // [rsp+70h] [rbp-158h]
  unsigned __int64 v203; // [rsp+78h] [rbp-150h]
  __int64 v204; // [rsp+84h] [rbp-144h] BYREF
  char v205; // [rsp+8Ch] [rbp-13Ch]
  void *v206; // [rsp+90h] [rbp-138h] BYREF
  unsigned int v207; // [rsp+98h] [rbp-130h]
  char v208; // [rsp+9Ch] [rbp-12Ch]
  void *v209; // [rsp+A0h] [rbp-128h] BYREF
  unsigned int v210; // [rsp+A8h] [rbp-120h]
  void *v211[2]; // [rsp+B0h] [rbp-118h] BYREF
  void **v212; // [rsp+C0h] [rbp-108h]
  unsigned __int64 v213; // [rsp+C8h] [rbp-100h]
  void *v214[2]; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v215; // [rsp+E0h] [rbp-E8h] BYREF
  int v216; // [rsp+E8h] [rbp-E0h]
  __int64 v217[2]; // [rsp+ECh] [rbp-DCh] BYREF
  void *v218[2]; // [rsp+100h] [rbp-C8h] BYREF
  _QWORD *v219; // [rsp+110h] [rbp-B8h]
  __int64 v220; // [rsp+118h] [rbp-B0h]
  __int64 v221; // [rsp+128h] [rbp-A0h]
  void *ptr; // [rsp+130h] [rbp-98h]
  __int64 v223; // [rsp+138h] [rbp-90h]
  _BYTE v224[136]; // [rsp+140h] [rbp-88h] BYREF

  v2 = (void **)a2;
  v3 = a1;
  if ( *(char *)(sub_E0E500(a1->m128i_i64[0]) + 1) >= 0 )
    sub_E0FF50(a1->m128i_i64[0], a2, 2445, 0);
  v6 = *(_DWORD *)(a1->m128i_i64[0] + 900);
  if ( v6 )
    return 0;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 42 )
    v10 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v4, v5);
  v11 = *(_QWORD *)(v10 + 32);
  v180 = v11;
  if ( *(_DWORD *)(a2 + 4) == 1
    && (unsigned __int8)sub_F3F560(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2
                                                                     + 8LL
                                                                     * (((*(_QWORD *)a2 >> 20) & 1)
                                                                      + ((*(_QWORD *)a2 >> 24) & 1))
                                                                     + 56)
                                                         + 8LL)
                                             & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v33 = (void *)a1->m128i_i64[0];
    v223 = 0x800000000LL;
    v34 = *(_QWORD *)a2;
    v214[0] = v33;
    v218[0] = nullptr;
    v218[1] = nullptr;
    v35 = (v34 >> 20) & 1;
    v219 = nullptr;
    LOBYTE(v220) = v220 | 1;
    v36 = *(__m128i **)(a2 + 8 * ((unsigned int)v35 + ((v34 >> 24) & 1)) + 56);
    ptr = v224;
    v221 = 0;
    v224[65] = 0;
    v214[1] = v218;
    LOBYTE(v215) = 0;
    v7 = sub_C38AE0((const __m128i *)v214, v36, v35, (unsigned __int64)v218, v31, v32);
    if ( !(_BYTE)v7 )
    {
      if ( ptr != v224 )
        free(ptr);
      return v7;
    }
    if ( ptr != v224 )
      free(ptr);
    v17 = 0;
    LOBYTE(v16) = 0;
    goto LABEL_12;
  }
  LOBYTE(v12) = sub_B50DB0(v9);
  v7 = v12;
  if ( !(_BYTE)v12 )
  {
    if ( *(_DWORD *)(a2 + 4) )
    {
      v28 = (unsigned __int8 **)sub_E0FED0(a1->m128i_i64[0], a2, 2451, 0);
      v29 = (__int64 *)v28;
      if ( !v28 )
        return 0;
      sub_BED5E0(v28, 0);
      v30 = *(void **)(a2 + 40);
      LOBYTE(v218[1]) = 1;
      v218[0] = v30;
      sub_AC88D0(v29, (__int64 *)v218);
      return v7;
    }
    LOBYTE(v13) = sub_B523A0(v9, nullptr, nullptr);
    LOBYTE(v16) = 0;
    v17 = v13;
    if ( !(_BYTE)v13 )
    {
      v94 = (unsigned __int8 **)sub_E0FED0(a1->m128i_i64[0], a2, 2449, 0);
      v95 = v94;
      if ( !v94 )
        return 0;
      sub_BED5E0(v94, (*(_BYTE *)(v9 + 28) & 0x7Fu) - 35 <= 3);
      sub_AC60B0(v95, v9, 0xAu);
      return v7;
    }
    goto LABEL_12;
  }
  v37 = a1->m128i_i64[0];
  v38 = *(_QWORD *)(*(_QWORD *)(v3->m128i_i64[0] + 32) + 24LL);
  if ( v38 )
  {
    v39 = v38 + 72;
    do
    {
      while ( 1 )
      {
        if ( sub_B6AE60(v39) )
          goto LABEL_46;
        v41 = *(_QWORD *)(sub_B68470(v39) + 16);
        if ( (v41 & 4) != 0 )
          break;
        v39 = v41 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v39 )
          goto LABEL_39;
      }
      v39 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( v39 );
LABEL_39:
    v37 = v3->m128i_i64[0];
  }
  if ( (*(_BYTE *)(sub_E0E500(v37) + 2) & 2) != 0 )
  {
LABEL_46:
    v45 = (void *)v3->m128i_i64[0];
  }
  else
  {
    v45 = (void *)v3->m128i_i64[0];
    if ( !*(_BYTE *)(*(_QWORD *)(v3->m128i_i64[0] + 32) + 200LL) || (*(_BYTE *)(v9 + 29) & 1) == 0 )
      goto LABEL_43;
    v105 = sub_B68690(v9, a2, v42, v43, v44, v40);
    v106 = *v105;
    v107 = *v105 + 8LL * *((unsigned int *)v105 + 2);
    if ( *v105 >= v107 )
    {
      v45 = (void *)v3->m128i_i64[0];
      if ( v106 == v107 )
        goto LABEL_43;
      while ( *(_WORD *)(*(_QWORD *)v107 + 36LL) != 247 )
      {
        v107 += 8LL;
        if ( v106 == v107 )
          goto LABEL_43;
      }
    }
    else
    {
      v108 = *v105;
      while ( *(_WORD *)(*(_QWORD *)v108 + 36LL) != 247 )
      {
        v108 += 8LL;
        if ( v107 == v108 )
        {
          v45 = (void *)v3->m128i_i64[0];
          goto LABEL_43;
        }
      }
      v45 = (void *)v3->m128i_i64[0];
      if ( v107 == v108 )
      {
LABEL_43:
        v46 = (unsigned __int8 **)sub_E0FED0(v45, a2, 2451, 0);
        v47 = (__int64 *)v46;
        if ( v46 )
        {
          sub_BED5E0(v46, 1);
          v48 = *(void **)(a2 + 40);
LABEL_45:
          v218[0] = v48;
          LOBYTE(v218[1]) = 1;
          sub_AC88D0(v47, (__int64 *)v218);
        }
        return 0;
      }
    }
  }
  v49 = *(_QWORD *)a2;
  v50 = (void *)v3->m128i_i64[1];
  v218[0] = v45;
  LOBYTE(v219) = 0;
  v218[1] = v50;
  v16 = sub_C24FB0(
          (__m128i *)v218,
          *(_QWORD *)(a2 + 8LL * (((v49 & 0x100000) != 0) + (BYTE3(v49) & 1u)) + 56),
          (v49 & 0x100000) != 0,
          v49 >> 24,
          (__int64)v50,
          v40);
  if ( !(_BYTE)v16 || (*(_BYTE *)(v3->m128i_i64[1] + 24) & 1) != 0 )
    return 0;
  v17 = v16;
  v7 = 0;
LABEL_12:
  v183 = 0;
  v18 = (unsigned __int64)*v2;
  if ( ((unsigned int)*v2 & 0x1000000) != 0 )
    v183 = (__int64)v2[((v18 >> 20) & 1) + 7];
  if ( (v18 & 0x100000) != 0 )
  {
    v19 = v2[7];
    if ( v19 )
    {
      v20 = (unsigned __int64)v2[7];
      if ( (*v19 & 0x1FF) == 0x4F )
      {
        v21 = (v19[1] >> 3) & 0x7F;
        if ( v21 == 27 || v21 == 5 )
        {
          do
          {
            v20 = *(_QWORD *)(v20 + 16);
            if ( (*(_WORD *)v20 & 0x1FF) != 0x4F )
              break;
            v22 = (*(_WORD *)(v20 + 2) >> 3) & 0x7F;
          }
          while ( v22 == 5 || v22 == 27 );
        }
      }
      v23 = v3->m128i_i64[0];
      LOBYTE(v197) = v17;
      v185 = v16;
      v207 = 1;
      v206 = nullptr;
      v208 = 0;
      LOBYTE(v191) = sub_C23520(v20, (__int64)&v206, v23, v17, v14, v15);
      if ( !(_BYTE)v191 )
        goto LABEL_94;
      v24 = (void **)v3->m128i_i64[0];
      v25 = v197;
      v26 = v185;
      if ( !v208 )
      {
        v192 = (void **)v3->m128i_i64[0];
        v27 = sub_BEC670((__int64 *)&v206);
        v25 = v197;
        v26 = v185;
        v24 = v192;
        if ( v27 )
        {
          if ( (_BYTE)v7 )
          {
            sub_C006A0(v3->m128i_i64[1], (__int64)v192[2], (__int64)v2[1]);
          }
          else
          {
            v214[0] = (void *)sub_E0FED0(v192, v19, 2448, 0);
            if ( v214[0] )
            {
              sub_BF6570((unsigned __int8 ***)v214, (__int64)&v206);
              v115 = (__int64 *)v214[0];
              v116 = (void *)sub_EC8B80(v19);
              if ( v115 )
              {
                v218[0] = v116;
                LOBYTE(v218[1]) = 1;
                sub_AC88D0(v115, (__int64 *)v218);
              }
            }
          }
          goto LABEL_95;
        }
      }
      v51 = (__int64 *)v206;
      if ( v207 > 0x40 )
        v51 = *(__int64 **)v206;
      v52 = v24[2];
      v193 = v51;
      LOBYTE(v192) = v25;
      LOBYTE(v194) = v26;
      v186 = v24;
      v197 = sub_F32F70(v52, v11, &v206);
      LODWORD(v195) = sub_BDCD00((unsigned __int64)v19, v11, v53, v54, v55);
      LOBYTE(v197) = ((unsigned __int64)v193 > 0xFFFFFFFF) | (v197 > (unsigned int)sub_F33280(v186[2]));
      if ( (_BYTE)v197 )
      {
        if ( !(_BYTE)v192 )
        {
LABEL_56:
          sub_C006A0(v3->m128i_i64[1], *(_QWORD *)(v3->m128i_i64[0] + 16), (__int64)v2[1]);
          v7 = (unsigned __int8)v191;
LABEL_95:
          if ( v207 > 0x40 && v206 )
            operator delete[](v206);
          return v7;
        }
        v104 = (unsigned __int8 **)sub_E0FF40(v186, (unsigned int)v195, 2452, 0);
        if ( v104 )
          sub_AC60B0(v104, (__int64)v193, 3u);
LABEL_94:
        v7 = 0;
        goto LABEL_95;
      }
      v86 = v194;
      v87 = *((_QWORD *)v186[2] + 290);
      if ( (unsigned __int64)v193 > *(unsigned int *)(v87 + 136) )
      {
        if ( !(_BYTE)v192 )
          goto LABEL_56;
        v184 = *(unsigned int *)(v87 + 136);
        v84 = (unsigned __int8 **)sub_E0FF40(v186, (unsigned int)v195, 2447, 0);
        v85 = v84;
        if ( v84 )
        {
          sub_AC60B0(v84, (__int64)v193, 3u);
          sub_AC60B0(v85, v184, 3u);
        }
        goto LABEL_94;
      }
      v88 = *(_QWORD **)(v3->m128i_i64[0] + 16);
      if ( v183
        && (v89 = *(_WORD *)v183,
            BYTE1(v197) = HIBYTE(*(_WORD *)v183),
            v90 = v89 & 0x1FF,
            LOBYTE(v197) = v90 == 100 || v90 == 54,
            !(_BYTE)v197) )
      {
        if ( (unsigned int)v90 - 113 > 1 )
        {
          v119 = sub_A4E300(v88, *(_QWORD *)(v183 + 8));
          if ( !v119 || (unsigned int)*(unsigned __int8 *)(v119 + 16) - 2 > 1 )
            BUG();
          v120 = *(_BYTE *)(v119 + 19);
          if ( (v120 & 2) != 0 )
            v121 = *(_DWORD *)(*(_QWORD *)(v119 + 40) + 8LL);
          else
            v121 = 8 * ((v120 >> 2) & 0x1F);
          LOBYTE(v193) = v194;
          if ( v207 >= v121 )
            v121 = v207;
          v192 = v218;
          v188 = v121;
          sub_A39D90((__int64)v218, v119);
          v191 = &v209;
          sub_21E2F90(&v209, v218, v188);
          v122 = (char)v193;
          if ( LODWORD(v218[1]) > 0x40 && v218[0] )
          {
            operator delete[](v218[0]);
            v122 = (char)v193;
          }
          LOBYTE(v193) = v122;
          sub_21E2F90(v211, &v206, v188);
          v123 = sub_21E2070(v191, v211);
          v86 = (char)v193;
          if ( v123 > 0 )
          {
            if ( (_BYTE)v7 )
            {
              sub_C006A0(v3->m128i_i64[1], *(_QWORD *)(v3->m128i_i64[0] + 16), (__int64)v2[1]);
            }
            else
            {
              v165 = (unsigned __int8 **)sub_E0FED0(v3->m128i_i64[0], v19, 2453, 0);
              sub_BFA170(v214, (int)v211, 10, 0, 0, 1u, 0);
              if ( v165 )
              {
                sub_AC84E0(v165, (_BYTE *)v214[0], (signed __int64)v214[1]);
                sub_BFA170(v192, (int)v191, 10, 0, 0, 1u, 0);
                sub_AC84E0(v165, (_BYTE *)v218[0], (signed __int64)v218[1]);
                v205 = 1;
                v204 = sub_EC8B80(v19);
                sub_AC88D0((__int64 *)v165, &v204);
              }
              else
              {
                sub_BFA170(v192, (int)v191, 10, 0, 0, 1u, 0);
              }
              if ( v218[0] != v192 + 2 )
                operator delete(v218[0]);
              if ( v214[0] != &v215 )
                operator delete(v214[0]);
            }
            if ( LODWORD(v211[1]) > 0x40 && v211[0] )
              operator delete[](v211[0]);
            if ( v210 > 0x40 && v209 )
              operator delete[](v209);
            goto LABEL_95;
          }
          if ( v210 <= 0x40 )
          {
            v153 = v209 == v211[0];
          }
          else
          {
            LOBYTE(v192) = (_BYTE)v193;
            v153 = sub_21E2030(v191, v211);
            v86 = (char)v193;
          }
          v154 = v153 == 0;
          v155 = nullptr;
          if ( v154 )
            v155 = (_WORD *)v183;
          v19 = v155;
          if ( LODWORD(v211[1]) > 0x40 && v211[0] )
          {
            v189 = v86;
            operator delete[](v211[0]);
            v86 = v189;
          }
          if ( v210 > 0x40 && v209 )
          {
            v190 = v86;
            operator delete[](v209);
            v86 = v190;
          }
          v187 = nullptr;
          v88 = *(_QWORD **)(v3->m128i_i64[0] + 16);
        }
        else
        {
          v187 = (__int64 *)v183;
          v19 = nullptr;
        }
      }
      else
      {
        v187 = nullptr;
        v19 = nullptr;
      }
      LOBYTE(v191) = v86;
      v91 = sub_A4D230((__int64)v88, v11, (__int64)&v206, nullptr, 0, 0);
      LOBYTE(v16) = (_BYTE)v191;
      v180 = v91;
      if ( v207 > 0x40 && v206 )
      {
        operator delete[](v206);
        LOBYTE(v16) = (_BYTE)v191;
      }
    }
    else
    {
      v187 = nullptr;
      LOBYTE(v197) = 0;
    }
  }
  else
  {
    LOBYTE(v197) = 0;
    v19 = nullptr;
    v187 = nullptr;
  }
  v56 = (__m128i *)v3->m128i_i64[1];
  if ( !(_BYTE)v16 )
  {
    v79 = sub_C01D70(v3->m128i_i64[0], (__int64)v2, v180, v3->m128i_i64[1]);
    if ( !v79 )
      return 0;
    goto LABEL_85;
  }
  v57 = v3->m128i_i64[0];
  v191 = v2;
  v215 = v180;
  memset(v217, 0, 12);
  v58 = _mm_loadh_ps((const double *)&v191);
  v193 = (__int64 *)v211;
  *(__m128 *)v214 = v58;
  v216 = 8;
  sub_BF8730((__m128i *)v211, v57, v2, 8u, v56, v180);
  v59 = v213;
  if ( (v213 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v60 = v3->m128i_i64[1];
  v61 = *(unsigned __int8 *)(v60 + 24);
  if ( (v61 & 1) != 0 )
    return 0;
  v62 = (void **)v3->m128i_i64[0];
  v194 = v60 + 24;
  v191 = v62;
  if ( sub_BEC880(v60 + 24) || (LODWORD(v192) = *(_DWORD *)(v60 + 56), (_DWORD)v192 == 1) && (v61 &= 4u, (_DWORD)v61) )
  {
    v76 = v191;
    if ( (*(_BYTE *)(sub_E0E500(v191) + 1) & 0x10) != 0 )
    {
      v77 = !sub_BEC880(v194) ? 2375 : 2370;
LABEL_82:
      v78 = (unsigned __int8 **)sub_E0FED0(v76, v2, v77, 0);
      if ( v78 )
        sub_BED5E0(v78, v216);
      return 0;
    }
LABEL_236:
    sub_E0FED0(v191, v2, 108, 0);
    return 0;
  }
  v201 = v3;
  v196 = (unsigned __int64 *)v218;
  *(_DWORD *)&v198[8] = 0;
  v200 = v19;
  v63 = v212;
  v199 = (__int64 *)(v191 + 103);
  v194 = 0;
  v195 = (unsigned __int64)v2;
  v64 = v59;
  *(_QWORD *)v198 = (unsigned int)((_DWORD)v192 - 1);
  while ( 1 )
  {
    if ( *(_DWORD *)v63 )
    {
      if ( *(_DWORD *)v63 == 1 )
      {
        v65 = v216;
        if ( ((1LL << v216) & 0x19) != 0 )
        {
LABEL_127:
          v192 = v63;
          v100 = v195;
          if ( (!v6 || v65 != 10) && !*((_BYTE *)v191 + 914) )
          {
            v101 = (unsigned __int8 **)sub_E0FED0(v191, v195, 2372, 0);
            v47 = (__int64 *)v101;
            if ( v101 )
            {
              sub_BED5E0(v101, v216);
              sub_BED5E0((unsigned __int8 **)v47, *(_DWORD *)v192 == 1);
              v48 = (void *)sub_EC8B80(v100);
              goto LABEL_45;
            }
          }
          return 0;
        }
      }
    }
    else
    {
      v65 = v216;
      if ( v216 != 8 || (_DWORD)v192 != v6 )
        goto LABEL_127;
    }
    if ( (v64 & 1) != 0
      || (v66 = *(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 1LL,
          (v61 = (unsigned int)v66 | v64 & 4 | *(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v61 = (unsigned __int64)v196;
        si128 = _mm_load_si128((const __m128i *)v211);
        v219 = *(_QWORD **)(v60 + 48);
        *(__m128i *)v218 = si128;
        v220 = v6;
        v118 = sub_C0B700(v199, v196);
        if ( v118 )
        {
          v61 = *((unsigned int *)v118 + 8);
          if ( (_DWORD)v61 )
            v64 = *(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | v64 & 2
                | byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 2;
        }
      }
    }
    if ( (_DWORD)v192 == v6 )
      goto LABEL_140;
    v67 = v64 & 0xFFFFFFFFFFFFFFF0LL;
    v68 = *(_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF0LL);
    v69 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v6 == *(_DWORD *)v198 )
      break;
LABEL_72:
    if ( (unsigned __int8)(v69 - 2) <= 4u )
      goto LABEL_73;
    if ( (_BYTE)v69 == 14 )
    {
      v146 = *(_QWORD *)(v60 + 48);
      v147 = v64;
      v192 = v63;
      v2 = (void **)v195;
      if ( *(_QWORD *)(v146 + 8LL * v6) <= 1u )
      {
        if ( *(_BYTE *)(v68 + 16) != 14 )
          v68 = sub_F3F310(v68, v61, v146, v6);
        sub_BEBA20(v147, *(_QWORD *)(v68 + 32), 0);
        v148 = (void **)v214[1];
        v149 = (void **)v214[0];
        v150 = 2397;
LABEL_230:
        sub_E0FED0(v149, v148, v150, 0);
        return 0;
      }
LABEL_80:
      v76 = v191;
      if ( (*(_BYTE *)(sub_E0E500(v191) + 1) & 0x10) != 0 )
      {
        v77 = 2370;
        goto LABEL_82;
      }
      v150 = 108;
      v148 = v2;
      v149 = v191;
      goto LABEL_230;
    }
LABEL_162:
    v194 = v67;
    v109 = (unsigned int)*(unsigned __int8 *)(v68 + 16) - 57;
    if ( (unsigned int)v109 <= 1 || (v68 = sub_BECCF0(v68, v61, v69, v109), v126 = (_QWORD *)v194, v68) )
    {
      v110 = *(_QWORD *)(v60 + 48);
      v3 = v201;
      v192 = v63;
      v2 = (void **)v195;
      v19 = v200;
      v111 = *(_QWORD *)(v110 + 8LL * v6);
      v112 = *(unsigned int *)(v68 + 20);
      if ( v111 == v112 )
        goto LABEL_80;
      if ( v111 > v112 )
      {
        v113 = (unsigned __int8 **)sub_E0FF50(v191, v195, 2381, 0);
        v114 = v113;
        if ( v113 )
        {
          sub_AC60B0(v113, v111, 3u);
          sub_BED5E0(v114, 0);
          sub_AC60B0(v114, v112, 3u);
        }
        return 0;
      }
      if ( !(unsigned __int8)sub_BF5AA0(
                               (__int64 *)v214,
                               (__int64)v192[1] + 56 * (unsigned int)v111,
                               *(_QWORD *)(v68 + 32)) )
        return 0;
LABEL_268:
      v79 = *(_QWORD **)((char *)v217 + 4);
      BYTE4(v218[0]) &= ~1u;
      LODWORD(v218[0]) = 0;
      sub_A2BFE0(*(__int64 *)((char *)v217 + 4), (__int64)v218);
      if ( LODWORD(v218[0]) > 1 )
        sub_A2BBA0((int *)v218);
LABEL_85:
      if ( (_BYTE)v197 )
      {
        LOWORD(v218[0]) = (__int64)v218[0] & 0xFE00 | 0x36;
        if ( unk_2CAD564 )
          sub_EC5E10(54);
        *(_WORD *)((char *)v218 + 1) &= 0xF801u;
        v218[1] = (void *)v180;
        v99 = sub_B3F3F0((__int64)v218);
        BYTE1(v218[0]) = (v99 << 6) | BYTE1(v218[0]) & 0x3F;
        BYTE2(v218[0]) = BYTE2(v218[0]) & 0xF8 | (v99 >> 2) & 7;
        v81 = v3->m128i_i64[0];
        v7 = sub_C2BC60((__int64)v79, v3->m128i_i64[0], (const __m128i *)v3->m128i_i64[1], (__int64)v218);
        if ( !(_BYTE)v7 )
          return v7;
      }
      else if ( v19 )
      {
        v80 = _mm_loadu_si128(v3);
        v81 = (__int64)v19;
        v219 = v79;
        *(__m128i *)v218 = v80;
        if ( !(unsigned __int8)sub_C38980((__int64 *)v218, (__int64)v19, v180) )
          return 0;
      }
      else
      {
        v81 = (__int64)v187;
        if ( v187 )
        {
          v92 = _mm_loadu_si128(v3);
          v93 = (const __m128i *)v3->m128i_i64[1];
          v219 = v79;
          *(__m128i *)v218 = v92;
          if ( !(unsigned __int8)sub_C54A90((__int64 *)v218, v187, v93, (__int64)v79, v180) )
            return 0;
        }
        else if ( v183 )
        {
          v81 = v3->m128i_i64[0];
          if ( !(unsigned __int8)sub_C2BC60((__int64)v79, v3->m128i_i64[0], (const __m128i *)v3->m128i_i64[1], v183) )
            return 0;
        }
        else
        {
          v81 = (__int64)v79;
          if ( !(unsigned __int8)sub_C02A80(v180, (__int64)v79) )
            return 0;
        }
      }
      v82 = *(_QWORD *)(v180 & 0xFFFFFFFFFFFFFFF0LL);
      v83 = *(unsigned __int8 *)(v82 + 16);
      if ( (unsigned __int8)(v83 - 2) <= 4u
        || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v82 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u
        && (v82 = sub_F3F310(*(_QWORD *)(v180 & 0xFFFFFFFFFFFFFFF0LL), v81, (unsigned int)(v83 - 2), v82)) != 0 )
      {
        sub_BEE6B0(v3->m128i_i64[1], v3->m128i_i64[0], (__int64)v2, v82);
      }
      return 1;
    }
    v127 = *(_QWORD *)(*(_QWORD *)(v60 + 48) + 8LL * v6) & 0xFFFFFFFFFFFFFFF8LL;
    v194 = v127;
    if ( v127 && (*(_BYTE *)(v127 + 28) & 0x7Fu) - 49 <= 2 )
    {
      if ( (*(_BYTE *)(v127 + 68) & 2) != 0 )
      {
        v61 = (unsigned __int64)v191;
        v203 = v127;
        v202 = v126;
        v128 = sub_BEDB70(v193, (__int64)v191, v216);
        v126 = v202;
        v127 = v203;
        if ( !v128 )
        {
          v181 = v203;
          v175 = (unsigned __int8 **)sub_E0FED0(v191, v195, 2368, 1);
          v176 = v181;
          v177 = v175;
          if ( v175 )
          {
            sub_BED5E0(v175, v216);
            sub_AC60B0(v177, v181, 0xAu);
            v176 = v181;
          }
          sub_E10070(v191, *(unsigned int *)(v176 + 24), 103);
          return 0;
        }
      }
      v129 = *v126;
      v202 = (_QWORD *)v127;
      v130 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v129 + 8) & 0xFFFFFFFFFFFFFFF0LL), v61, v124, v125, v126);
      v135 = (__int64)v202;
      if ( *(_BYTE *)(v130 + 73) >> 5 == 2 )
      {
        v136 = (__int64)v63[1];
        v137 = v136;
        if ( !v136 )
          goto LABEL_217;
        v138 = (__int64)v63[1];
        if ( *(char *)(v136 + 29) < 0 )
        {
          v139 = sub_B4E9E0((__int64)v63[1]);
          v135 = (__int64)v202;
          v138 = v139;
        }
        v140 = v135;
        if ( *(char *)(v135 + 29) < 0 )
        {
          v202 = (_QWORD *)v135;
          v140 = sub_B4E9E0(v135);
          v135 = (__int64)v202;
        }
        if ( v140 != v138 )
        {
LABEL_217:
          if ( v6 != *(_DWORD *)v198 || v216 != 8 )
          {
            v182 = v135;
            if ( v216 != 10 )
            {
              v178 = (unsigned __int8 **)sub_E0FED0(v191, v195, 2367, 0);
              v179 = v178;
              if ( v178 )
              {
                sub_BED5E0(v178, v216);
                sub_AC60B0(v179, v182, 0xAu);
                sub_BED5E0(v179, v137 == 0);
                sub_AC60B0(v179, v137, 0xAu);
              }
            }
            return 0;
          }
          v141 = (int *)v196;
          v202 = (_QWORD *)v135;
          BYTE4(v218[0]) &= ~1u;
          LODWORD(v218[0]) = 0;
          sub_A31050((__int64)v63, v135, (int *)v196);
          v135 = (__int64)v202;
          if ( LODWORD(v218[0]) > 1 )
          {
            sub_A2BBA0(v141);
            v135 = (__int64)v202;
          }
        }
        v63 = (void **)v63[2];
      }
      else
      {
        v164 = sub_BF9790((__int64)v202, v61, v131, v132, v133, v134);
        v135 = (__int64)v202;
        v63 = (void **)((char *)v63[1] + 56 * (unsigned int)(*((_DWORD *)v63 + 4) + v164));
      }
      v142 = *(_BYTE *)(v135 + 68);
      v61 = *(_QWORD *)(v135 + 48);
      v202 = (_QWORD *)v135;
      v143 = sub_BEBA20(v64, v61, (v142 & 2) != 0);
      v144 = (__int64)v202;
      v64 = v143;
      v145 = v202[6];
      if ( (v145 & 4) != 0 )
      {
        *(_QWORD *)&v198[4] = v202;
      }
      else
      {
        if ( (byte_8[v145 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          v144 = *(_QWORD *)&v198[4];
        *(_QWORD *)&v198[4] = v144;
      }
    }
    else
    {
      v156 = sub_F3F530(*v126);
      v157 = *(_QWORD *)(*(_QWORD *)(v60 + 48) + 8LL * v6) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v157
        && (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)(v60 + 48) + 8LL * v6) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 >= 3 )
      {
        v157 = 0;
      }
      v158 = sub_C0CE80(v156, v157);
      v159 = (__int64)v63[1];
      v63 = (void **)(v159 + 56LL * v158);
      v61 = sub_A56C90((__int64)v191[2], v157, v160, v159, v161, v162);
      v163 = sub_BEBA20(v64, v61, 0);
      v194 = 0;
      v64 = v163;
    }
LABEL_120:
    ++v6;
  }
  if ( (_BYTE)v69 != 14 )
  {
    v69 = (unsigned int)(v69 - 2);
    if ( (unsigned __int8)v69 > 4u )
      goto LABEL_162;
LABEL_73:
    v70 = sub_A4E300(v191[2], v64);
    v73 = v70;
    if ( !v70 || (unsigned int)*(unsigned __int8 *)(v70 + 16) - 2 > 1 )
      BUG();
    v61 = *(_QWORD *)(v70 + 40);
    v74 = *(_QWORD *)(*(_QWORD *)(v60 + 48) + 8LL * v6);
    v75 = *(_BYTE *)(v70 + 19);
    if ( (v75 & 2) != 0 )
    {
      LODWORD(v218[1]) = *(_DWORD *)(v61 + 8);
      if ( LODWORD(v218[1]) <= 0x40 )
      {
        v218[0] = *(void **)v61;
        goto LABEL_78;
      }
      sub_21E17D0(v196);
      v96 = (int)v218[1];
    }
    else
    {
      v96 = 8 * ((v75 >> 2) & 0x1F);
      LODWORD(v218[1]) = v96;
      if ( v96 > 64 )
      {
        sub_21E1730(v196, v61, 0);
        v96 = (int)v218[1];
      }
      else
      {
        v218[0] = (void *)v61;
      }
    }
    if ( (unsigned int)v96 <= 0x40 )
    {
LABEL_78:
      if ( (void *)v74 >= v218[0] )
      {
        v2 = (void **)v195;
        goto LABEL_80;
      }
      goto LABEL_118;
    }
    if ( v96 - (unsigned int)sub_21E2A40(v196) <= 0x40 )
    {
      if ( v74 >= *(_QWORD *)v218[0] )
      {
        v2 = (void **)v195;
        if ( v218[0] )
          operator delete[](v218[0]);
        goto LABEL_80;
      }
    }
    else if ( !v218[0] )
    {
      goto LABEL_118;
    }
    operator delete[](v218[0]);
LABEL_118:
    v97 = *((unsigned int *)v63 + 4);
    v64 = *(_QWORD *)(v73 + 32);
    if ( v74 >= v97 )
    {
      if ( (unsigned int)v216 <= 1 || v216 == 10 )
      {
        v194 = 0;
        v63 = (void **)((char *)v63[1] + 56 * v97);
      }
      else
      {
        v102 = sub_BDCD00(v195, v61, (unsigned int)v216, v71, v72);
        if ( !(unsigned __int8)sub_BF5C40((__int64)v191, v73, v102) )
          return 0;
        v61 = (unsigned int)v74;
        sub_BEBFB0((__int64)v63, v74);
        v103 = (char *)v63[1];
        v194 = 0;
        v63 = (void **)&v103[56 * (unsigned int)v74];
      }
    }
    else
    {
      v98 = (char *)v63[1];
      v194 = 0;
      v63 = (void **)&v98[56 * v74];
    }
    goto LABEL_120;
  }
LABEL_140:
  if ( (v64 & 4) != 0 || (v67 = v64 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
  {
    if ( !sub_BEDB40(v216) )
    {
      v67 = v64 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_144;
    }
    v2 = (void **)v195;
    if ( (*(_BYTE *)(sub_E0E500(v191) + 1) & 8) == 0 )
      goto LABEL_236;
    v170 = 0;
    if ( *(_QWORD *)&v198[4] )
    {
      v170 = *(_DWORD *)(*(_QWORD *)&v198[4] + 24LL);
      v171 = 2;
LABEL_276:
      v172 = (unsigned __int8 **)sub_E0FED0(v191, v2, 2376, 1);
      v173 = v172;
      if ( v172 )
      {
        sub_BED5E0(v172, v216);
        sub_BED5E0(v173, v171);
        sub_AC60B0(v173, *(__int64 *)&v198[4], 0xAu);
      }
      v174 = (unsigned __int8 **)sub_E10070(v191, v170, 2506);
      if ( v174 )
        sub_BED5E0(v174, v171);
      return 0;
    }
    if ( v211[0] )
    {
      if ( ((__int64)v211[0] & 3) != 0 )
      {
        if ( ((__int64)v211[0] & 3) == 1 && ((unsigned __int64)v211[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v171 = 0;
          v170 = sub_BDCD00((unsigned __int64)v211[0] & 0xFFFFFFFFFFFFFFFCLL, v61, 0, v168, v169);
          goto LABEL_276;
        }
      }
      else if ( ((unsigned __int64)v211[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        *(_QWORD *)&v198[4] = (unsigned __int64)v211[0] & 0xFFFFFFFFFFFFFFFCLL;
        v170 = *(_DWORD *)(((unsigned __int64)v211[0] & 0xFFFFFFFFFFFFFFFCLL) + 24);
        v171 = 1;
        goto LABEL_276;
      }
    }
    v171 = 0;
    goto LABEL_276;
  }
LABEL_144:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v67 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v61 = (unsigned __int64)v191;
    v202 = (_QWORD *)v67;
    v151 = sub_BEDB70(v193, (__int64)v191, v216);
    v67 = (unsigned __int64)v202;
    if ( !v151 )
    {
      v61 = v195;
      v152 = sub_C04AA0((__int64)v191, v195, (unsigned int)v216, v64);
      v67 = (unsigned __int64)v202;
      if ( v152 )
        return 0;
    }
  }
  if ( (_DWORD)v192 != v6 )
  {
    v68 = *(_QWORD *)v67;
    v69 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v67 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_72;
  }
  v192 = v63;
  v166 = (__int64)v63;
  v167 = v64;
  v19 = v200;
  v3 = v201;
  v2 = (void **)v195;
  if ( (unsigned __int8)sub_BF5AA0((__int64 *)v214, v166, v167)
    && (((1LL << v216) & 0x4E3) != 0
     || !v194
     || (*(_BYTE *)(v194 + 68) & 1) == 0
     || (unsigned __int8)sub_BEF010((__int64)v191, (__int64)v2, v166, v194)) )
  {
    goto LABEL_268;
  }
  return 0;
}

