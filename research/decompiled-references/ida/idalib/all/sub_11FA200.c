void __fastcall sub_11FA200(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        double a7,
        double a8)
{
  void **v9; // rbx
  const __m128i *v10; // r13
  void **p_ptr; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  char *v14; // rdx
  char *v15; // rbp
  char *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  char *v20; // rdx
  char *v21; // rbp
  char *v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  char *v26; // rdx
  char *v27; // rbp
  char *v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  char *v32; // rdx
  char *v33; // rbp
  char *v34; // r15
  __int64 v35; // rcx
  __int64 v36; // rax
  __m128i *v37; // rbp
  char *v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  char *v42; // rcx
  __m128i *v43; // rdx
  __m128i *v44; // rcx
  __m128i **v45; // r15
  __m128i *v46; // rbp
  __m128i *v47; // r13
  void **v48; // rbx
  __int64 v49; // rsi
  char *v50; // r15
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __m128i *v57; // rcx
  __m128i **v58; // rdx
  __int64 v59; // r8
  void **v60; // r9
  void **v61; // r10
  __m128i **v62; // rbp
  __m128i *v63; // rax
  __m128i **v64; // r15
  void **v65; // rbx
  __int64 v66; // r12
  __int64 v67; // rsi
  char v68; // al
  __int64 v69; // rcx
  __int64 v70; // r8
  unsigned __int64 v71; // rax
  char *v72; // rcx
  __m128i *v73; // rdx
  __m128i *v74; // rcx
  const __m128i **v75; // r15
  __m128i *v76; // rbp
  const __m128i *v77; // r13
  void **v78; // rbx
  __int64 v79; // rsi
  unsigned __int64 v80; // rax
  char *v81; // rdx
  char *v82; // r15
  char *v83; // rdx
  char *v84; // rbx
  char *v85; // r15
  __int64 v86; // rcx
  __m128i *v87; // rcx
  const __m128i **v88; // rdx
  __int64 v89; // r8
  void **v90; // r9
  void **v91; // r10
  const __m128i **v92; // rbp
  const __m128i *v93; // rax
  const __m128i **v94; // r15
  void **v95; // rbx
  __int64 v96; // r12
  __int64 v97; // rsi
  char v98; // al
  unsigned __int64 v99; // rax
  char *v100; // rcx
  const __m128i *v101; // rdx
  const __m128i *v102; // rcx
  __m128 v103; // xmm0
  const __m128i *v104; // r15
  __m128i *v105; // r12
  const __m128i *v106; // rbp
  __int64 v107; // r13
  __m128i *v108; // rbx
  __int64 v109; // rsi
  char *v110; // rdx
  const __m128i *v111; // rax
  __int64 v112; // rcx
  unsigned __int64 v113; // rdx
  const __m128i *v114; // rax
  __int64 v115; // rcx
  unsigned __int64 v116; // rdx
  const __m128i *v117; // rcx
  const __m128i **v118; // rdx
  __int64 v119; // r8
  void **v120; // r9
  const __m128i *v121; // r14
  __m128i *v122; // r13
  void **v123; // r10
  const __m128i **v124; // rbp
  const __m128i *v125; // rax
  const __m128i **v126; // r15
  __m128i *v127; // rbx
  __int64 v128; // r12
  __int64 v129; // rsi
  char v130; // al
  __int64 v131; // rbx
  __int64 v132; // r10
  void *v133; // r13
  __int64 v134; // rdx
  unsigned __int64 v135; // rcx
  __int64 v136; // rsi
  int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // rsi
  _QWORD *v140; // rbx
  void (__fastcall *v141)(_QWORD *); // rax
  __int64 v142; // r13
  __int64 v143; // rbp
  void *v144; // rdi
  _QWORD *v145; // rdi
  _QWORD *v146; // rdi
  void **v147; // r13
  void **v148; // rbp
  void *v149; // rdi
  _QWORD *v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rcx
  unsigned __int64 v153; // rdx
  __int64 v154; // rax
  unsigned __int64 v155; // rax
  char *v156; // rcx
  char *v157; // r15
  char *v158; // rcx
  char *v159; // rbx
  char *v160; // r15
  __int64 v161; // rax
  unsigned __int64 v162; // rdx
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  bool v166; // zf
  __int64 v167; // r15
  __int64 v168; // rax
  char *v169; // rcx
  char *v170; // r15
  char *v171; // rbx
  __int64 v172; // rax
  __int64 v173; // rax
  unsigned __int64 v174; // rdx
  char *v175; // rdx
  char *v176; // r15
  char *v177; // rbx
  __int64 v178; // rbp
  __int64 v179; // rax
  unsigned __int64 v180; // rax
  char *v181; // rdx
  char *v182; // r15
  char *v183; // rdx
  char *v184; // rbx
  char *v185; // r15
  unsigned __int64 v186; // rax
  char *v187; // rdx
  char *v188; // r15
  char *v189; // rdx
  char *v190; // rbx
  char *v191; // r15
  __int64 v192; // rax
  unsigned __int64 v193; // rdx
  char *v194; // rdx
  char *v195; // r15
  char *v196; // rbx
  __int64 v197; // rax
  __int64 v198; // rax
  unsigned __int64 v199; // rdx
  char *v200; // rdx
  char *v201; // r15
  char *v202; // rbx
  __int64 v203; // rax
  __int64 v204; // rax
  unsigned __int64 v205; // rdx
  __int64 v206; // rax
  unsigned __int64 v207; // rbx
  __int64 v208; // rdi
  char *v209; // rdx
  __int64 v210; // rax
  __int64 v211; // rcx
  unsigned __int64 v212; // rdx
  unsigned __int64 v213; // rax
  char *v214; // rsi
  __int64 v215; // rdx
  void **v216; // rax
  void **v217; // rdx
  void **v218; // r15
  void **v219; // rbx
  void *v220; // rbp
  __int64 v221; // rax
  unsigned __int64 v222; // rdx
  void **v223; // rdx
  void **v224; // r15
  void **v225; // rbx
  _BYTE *v226; // rax
  void *v227; // rbp
  __int64 v228; // rax
  unsigned __int64 v229; // rdx
  __int64 v230; // rax
  const __m128i *v232; // [rsp+10h] [rbp-158h] BYREF
  __int64 v233; // [rsp+18h] [rbp-150h]
  __int64 v234; // [rsp+28h] [rbp-140h]
  __int64 v235; // [rsp+30h] [rbp-138h]
  void **v236; // [rsp+38h] [rbp-130h] BYREF
  __m128i *v237; // [rsp+40h] [rbp-128h] BYREF
  void **v238; // [rsp+48h] [rbp-120h]
  void **v239; // [rsp+50h] [rbp-118h]
  __int64 v240; // [rsp+58h] [rbp-110h]
  __int64 v241; // [rsp+60h] [rbp-108h]
  void **v242; // [rsp+68h] [rbp-100h]
  __int64 v243; // [rsp+70h] [rbp-F8h]
  __int64 v244; // [rsp+78h] [rbp-F0h]
  void *v245[2]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v246; // [rsp+90h] [rbp-D8h] BYREF
  int v247; // [rsp+98h] [rbp-D0h]
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v249; // [rsp+A8h] [rbp-C0h]
  _BYTE v250[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v9 = a6;
  v10 = *(const __m128i **)(a1 + 24);
  p_ptr = &ptr;
  v241 = a1;
  v12 = v10->m128i_i64[1];
  v234 = a3;
  v236 = (void **)v12;
  LODWORD(v12) = v10[3].m128i_i32[0];
  v235 = a5;
  LODWORD(v237) = v12;
  LODWORD(ptr) = 3299;
  v13 = sub_21B6DA0(a6, &ptr, 1);
  v14 = (char *)v9[1];
  v15 = &v14[8 * (unsigned int)v13];
  v16 = &v14[8 * HIDWORD(v13)];
  if ( v15 == v16 )
    goto LABEL_5;
  while ( !*(_QWORD *)v15 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v15, 3299) )
  {
    v15 += 8;
    if ( v16 == v15 )
      goto LABEL_5;
  }
  if ( v16 == v15 )
  {
LABEL_5:
    v232 = nullptr;
  }
  else
  {
    do
    {
      v17 = *(_QWORD *)v15;
      v18 = *(_QWORD *)(*(_QWORD *)v15 + 16LL);
      v232 = *(const __m128i **)v15;
      if ( !v18 )
        v18 = v17;
      v15 += 8;
      *(_BYTE *)(v18 + 44) |= 1u;
      if ( v15 == v16 )
        break;
      while ( !*(_QWORD *)v15 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v15, 3299) )
      {
        v15 += 8;
        if ( v16 == v15 )
          goto LABEL_13;
      }
    }
    while ( v16 != v15 );
LABEL_13:
    p_ptr = &ptr;
  }
  LODWORD(ptr) = 3264;
  v19 = sub_21B6DA0(v9, &ptr, 1);
  v20 = (char *)v9[1];
  v21 = &v20[8 * (unsigned int)v19];
  v22 = &v20[8 * HIDWORD(v19)];
  if ( v21 == v22 )
    goto LABEL_18;
  while ( !*(_QWORD *)v21 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v21, 3264) )
  {
    v21 += 8;
    if ( v22 == v21 )
      goto LABEL_18;
  }
  if ( v22 == v21 )
  {
LABEL_18:
    v240 = 0;
  }
  else
  {
    do
    {
      v23 = *(_QWORD *)v21;
      v24 = *(_QWORD *)(*(_QWORD *)v21 + 16LL);
      v240 = *(_QWORD *)v21;
      if ( !v24 )
        v24 = v23;
      v21 += 8;
      *(_BYTE *)(v24 + 44) |= 1u;
      if ( v21 == v22 )
        break;
      while ( !*(_QWORD *)v21 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v21, 3264) )
      {
        v21 += 8;
        if ( v22 == v21 )
          goto LABEL_28;
      }
    }
    while ( v22 != v21 );
LABEL_28:
    p_ptr = &ptr;
  }
  LODWORD(ptr) = 3129;
  v25 = sub_21B6DA0(v9, &ptr, 1);
  v26 = (char *)v9[1];
  v27 = &v26[8 * (unsigned int)v25];
  v28 = &v26[8 * HIDWORD(v25)];
  if ( v27 == v28 )
    goto LABEL_33;
  while ( !*(_QWORD *)v27 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v27, 3129) )
  {
    v27 += 8;
    if ( v28 == v27 )
      goto LABEL_33;
  }
  if ( v28 == v27 )
  {
LABEL_33:
    v244 = 0;
  }
  else
  {
    do
    {
      v29 = *(_QWORD *)v27;
      v30 = *(_QWORD *)(*(_QWORD *)v27 + 16LL);
      v244 = *(_QWORD *)v27;
      if ( !v30 )
        v30 = v29;
      v27 += 8;
      *(_BYTE *)(v30 + 44) |= 1u;
      if ( v27 == v28 )
        break;
      while ( !*(_QWORD *)v27 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v27, 3129) )
      {
        v27 += 8;
        if ( v28 == v27 )
          goto LABEL_43;
      }
    }
    while ( v28 != v27 );
LABEL_43:
    p_ptr = &ptr;
  }
  LODWORD(ptr) = 3132;
  v31 = sub_21B6DA0(v9, &ptr, 1);
  v32 = (char *)v9[1];
  v33 = &v32[8 * (unsigned int)v31];
  v34 = &v32[8 * HIDWORD(v31)];
  if ( v33 == v34 )
    goto LABEL_48;
  while ( !*(_QWORD *)v33 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v33, 3132) )
  {
    v33 += 8;
    if ( v34 == v33 )
      goto LABEL_48;
  }
  if ( v34 == v33 )
  {
LABEL_48:
    v243 = 0;
  }
  else
  {
    do
    {
      v35 = *(_QWORD *)v33;
      v36 = *(_QWORD *)(*(_QWORD *)v33 + 16LL);
      v243 = *(_QWORD *)v33;
      if ( !v36 )
        v36 = v35;
      v33 += 8;
      *(_BYTE *)(v36 + 44) |= 1u;
      if ( v33 == v34 )
        break;
      while ( !*(_QWORD *)v33 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v33, 3132) )
      {
        v33 += 8;
        if ( v34 == v33 )
          goto LABEL_58;
      }
    }
    while ( v34 != v33 );
LABEL_58:
    p_ptr = &ptr;
  }
  v37 = (__m128i *)v245;
  v249 = 0x1000000000LL;
  v38 = v250;
  ptr = v250;
  if ( v236[62] )
  {
    v37 = (__m128i *)v245;
    sub_C05100((__int64)v245, "--sysroot=", (__int64)(v236 + 61));
    v151 = (*((__int64 (__fastcall **)(void **, void *, void *))*v9 + 2))(v9, v245[0], v245[1]);
    v152 = (unsigned int)v249;
    v153 = (unsigned int)v249 + 1LL;
    if ( v153 > HIDWORD(v249) )
    {
      v238 = (void **)v151;
      sub_2237220(&ptr, v250, v153, 8);
      v152 = (unsigned int)v249;
      v151 = (__int64)v238;
    }
    *((_QWORD *)ptr + v152) = v151;
    v154 = (unsigned int)(v249 + 1);
    LODWORD(v249) = v249 + 1;
    if ( v245[0] != &v246 )
    {
      operator delete(v245[0]);
      v154 = (unsigned int)v249;
    }
    if ( v154 + 1 > (unsigned __int64)HIDWORD(v249) )
    {
      sub_2237220(&ptr, v250, v154 + 1, 8);
      v38 = (char *)ptr + 8 * (unsigned int)v249;
    }
    else
    {
      v38 = (char *)ptr + 8 * v154;
    }
  }
  *(_QWORD *)v38 = "--eh-frame-hdr";
  v39 = (unsigned int)(v249 + 1);
  LODWORD(v249) = v249 + 1;
  if ( v232 )
  {
    if ( v39 + 1 > (unsigned __int64)HIDWORD(v249) )
    {
      sub_2237220(&ptr, v250, v39 + 1, 8);
      v39 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v39) = "-Bstatic";
    v40 = (unsigned int)(v249 + 1);
    LODWORD(v249) = v249 + 1;
    if ( (_DWORD)v237 != 37 )
      goto LABEL_64;
  }
  else
  {
    LODWORD(v245[0]) = 3203;
    v155 = sub_21B6DA0(v9, v245, 1);
    v156 = (char *)v9[1];
    v157 = &v156[8 * (unsigned int)v155];
    v158 = &v156[8 * HIDWORD(v155)];
    if ( v157 != v158 )
    {
      v238 = v9;
      v159 = v157;
      v160 = v158;
      while ( !*(_QWORD *)v159 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v159, 3203) )
      {
        v159 += 8;
        if ( v160 == v159 )
        {
          v9 = v238;
          goto LABEL_211;
        }
      }
      v169 = v160;
      v170 = v159;
      v9 = v238;
      if ( v169 != v170 )
      {
        v171 = v169;
        do
        {
          v172 = *(_QWORD *)v170;
          if ( *(_QWORD *)(*(_QWORD *)v170 + 16LL) )
            v172 = *(_QWORD *)(*(_QWORD *)v170 + 16LL);
          v170 += 8;
          *(_BYTE *)(v172 + 44) |= 1u;
          if ( v170 == v171 )
            break;
          while ( !*(_QWORD *)v170 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v170, 3203) )
          {
            v170 += 8;
            if ( v171 == v170 )
              goto LABEL_238;
          }
        }
        while ( v171 != v170 );
LABEL_238:
        v173 = (unsigned int)v249;
        v9 = v238;
        v174 = (unsigned int)v249 + 1LL;
        if ( v174 > HIDWORD(v249) )
        {
          sub_2237220(&ptr, v250, v174, 8);
          v173 = (unsigned int)v249;
        }
        *((_QWORD *)ptr + v173) = "-export-dynamic";
        LODWORD(v249) = v249 + 1;
      }
    }
LABEL_211:
    if ( v240 )
    {
      v161 = (unsigned int)v249;
      v162 = (unsigned int)v249 + 1LL;
      if ( v162 > HIDWORD(v249) )
      {
        sub_2237220(&ptr, v250, v162, 8);
        v161 = (unsigned int)v249;
      }
      *((_QWORD *)ptr + v161) = "-shared";
      v163 = (unsigned int)(v249 + 1);
      LODWORD(v249) = v249 + 1;
    }
    else
    {
      if ( !sub_10DCD30((__int64)v9, 0xCA4u) )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-dynamic-linker");
        sub_10DC5D0((__int64)&ptr, (__int64)"/usr/libexec/ld-elf.so.2");
      }
      v163 = (unsigned int)v249;
    }
    if ( v163 + 1 > (unsigned __int64)HIDWORD(v249) )
    {
      sub_2237220(&ptr, v250, v163 + 1, 8);
      v163 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v163) = "--hash-style=gnu";
    LODWORD(v249) = v249 + 1;
    v164 = (unsigned int)v249;
    if ( (unsigned __int64)(unsigned int)v249 + 1 > HIDWORD(v249) )
    {
      sub_2237220(&ptr, v250, (unsigned int)v249 + 1LL, 8);
      v164 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v164) = "--enable-new-dtags";
    v40 = (unsigned int)(v249 + 1);
    LODWORD(v249) = v249 + 1;
    if ( (_DWORD)v237 != 37 )
    {
LABEL_64:
      if ( *(_DWORD *)(a4 + 8) != 1 )
        goto LABEL_65;
      goto LABEL_225;
    }
  }
  if ( v40 + 1 > (unsigned __int64)HIDWORD(v249) )
  {
    sub_2237220(&ptr, v250, v40 + 1, 8);
    v40 = (unsigned int)v249;
  }
  *((_QWORD *)ptr + v40) = "-m";
  LODWORD(v249) = v249 + 1;
  v165 = (unsigned int)v249;
  if ( (unsigned __int64)(unsigned int)v249 + 1 > HIDWORD(v249) )
  {
    sub_2237220(&ptr, v250, (unsigned int)v249 + 1LL, 8);
    v165 = (unsigned int)v249;
  }
  *((_QWORD *)ptr + v165) = "elf_i386";
  v40 = (unsigned int)(v249 + 1);
  v166 = *(_DWORD *)(a4 + 8) == 1;
  LODWORD(v249) = v249 + 1;
  if ( v166 )
  {
LABEL_225:
    if ( v40 + 1 > (unsigned __int64)HIDWORD(v249) )
    {
      sub_2237220(&ptr, v250, v40 + 1, 8);
      v40 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v40) = "-o";
    v167 = *(_QWORD *)a4;
    LODWORD(v249) = v249 + 1;
    v168 = (unsigned int)v249;
    if ( (unsigned __int64)(unsigned int)v249 + 1 > HIDWORD(v249) )
    {
      sub_2237220(&ptr, v250, (unsigned int)v249 + 1LL, 8);
      v168 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v168) = v167;
    LODWORD(v249) = v249 + 1;
  }
LABEL_65:
  v245[0] = (void *)0xBEB00000BF0LL;
  LODWORD(v245[1]) = 3236;
  v41 = sub_21B6DA0(v9, v245, 3);
  v42 = (char *)v9[1];
  v246 = 0xBEB00000BF0LL;
  v247 = 3236;
  v43 = (__m128i *)&v42[8 * (unsigned int)v41];
  v44 = (__m128i *)&v42[8 * HIDWORD(v41)];
  v237 = v44;
  *(__m128 *)v245 = _mm_loadh_ps((const double *)&v237);
  if ( v43 != v44 )
  {
    v237 = (__m128i *)v10;
    v45 = (__m128i **)v43;
    v242 = (void **)((char *)&v245[1] + 4);
    v238 = v9;
    v239 = &ptr;
    v46 = v44;
    do
    {
      v47 = *v45;
      v48 = v245;
      if ( *v45 )
      {
        do
        {
          v49 = *((unsigned int *)v48 + 4);
          if ( !(_DWORD)v49 )
            break;
          if ( (unsigned __int8)sub_21B9810(v47, v49) )
          {
            v57 = v46;
            v10 = v237;
            v37 = (__m128i *)v245;
            v237 = v57;
            v58 = v45;
            v9 = v238;
            p_ptr = v239;
            v246 = 0xBEB00000BF0LL;
            v247 = 3236;
            *(__m128 *)v245 = _mm_loadh_ps((const double *)&v237);
            if ( v57 == (__m128i *)v45 )
              goto LABEL_73;
            v59 = a2;
            v60 = v238;
            v242 = (void **)((char *)&v245[1] + 4);
            v61 = v239;
            v62 = (__m128i **)v57;
            do
            {
              v63 = *v58;
              v64 = v58 + 1;
              if ( (*v58)[1].m128i_i64[0] )
                v63 = (__m128i *)(*v58)[1].m128i_i64[0];
              v63[2].m128i_i8[12] |= 1u;
              v245[0] = v58 + 1;
              if ( v64 == v62 )
                break;
              while ( 1 )
              {
                v65 = v245;
                if ( *v64 )
                  break;
LABEL_95:
                v245[0] = ++v64;
                if ( v62 == v64 )
                  goto LABEL_96;
              }
              v237 = *v64;
              v66 = v59;
              while ( 1 )
              {
                v67 = *((unsigned int *)v65 + 4);
                if ( !(_DWORD)v67 )
                {
LABEL_94:
                  v59 = v66;
                  goto LABEL_95;
                }
                v239 = v61;
                v238 = v60;
                v68 = sub_21B9810(v237, v67);
                v60 = v238;
                v61 = v239;
                if ( v68 )
                  break;
                v65 = (void **)((char *)v65 + 4);
                if ( v65 == v242 )
                  goto LABEL_94;
              }
              v58 = (__m128i **)v245[0];
              v59 = v66;
            }
            while ( v62 != v245[0] );
LABEL_96:
            v37 = (__m128i *)v245;
            v9 = v60;
            p_ptr = v61;
            a2 = v59;
            goto LABEL_97;
          }
          v48 = (void **)((char *)v48 + 4);
        }
        while ( v242 != v48 );
      }
      v245[0] = ++v45;
    }
    while ( v46 != (__m128i *)v45 );
    v37 = (__m128i *)v245;
    v10 = v237;
    v9 = v238;
    p_ptr = v239;
  }
LABEL_73:
  v50 = "crtbeginS.o";
  if ( !v240 )
  {
    if ( v244 )
    {
      v209 = "gcrt1.o";
      if ( v243 )
      {
        v50 = "crtbeginS.o";
        goto LABEL_317;
      }
    }
    else
    {
      v209 = "Scrt1.o";
      v50 = "crtbeginS.o";
      if ( v243 )
        goto LABEL_317;
      v209 = "crt1.o";
    }
    v50 = (char *)"crtbegin.o";
LABEL_317:
    sub_112D4E0(v245, (__int64)v10, v209);
    v210 = (*((__int64 (__fastcall **)(void **, void *, void *))*v9 + 2))(v9, v245[0], v245[1]);
    v211 = (unsigned int)v249;
    v212 = (unsigned int)v249 + 1LL;
    if ( v212 > HIDWORD(v249) )
    {
      v237 = (__m128i *)v210;
      sub_2237220(p_ptr, p_ptr + 2, v212, 8);
      v211 = (unsigned int)v249;
      v210 = (__int64)v237;
    }
    *((_QWORD *)ptr + v211) = v210;
    LODWORD(v249) = v249 + 1;
    if ( v245[0] != &v246 )
      operator delete(v245[0]);
  }
  sub_112D4E0(v245, (__int64)v10, "crti.o");
  v51 = (*((__int64 (__fastcall **)(void **, void *, void *))*v9 + 2))(v9, v245[0], v245[1]);
  v52 = (unsigned int)v249;
  v53 = (unsigned int)v249 + 1LL;
  if ( v53 > HIDWORD(v249) )
  {
    v237 = (__m128i *)v51;
    sub_2237220(p_ptr, p_ptr + 2, v53, 8);
    v52 = (unsigned int)v249;
    v51 = (__int64)v237;
  }
  *((_QWORD *)ptr + v52) = v51;
  LODWORD(v249) = v249 + 1;
  if ( v245[0] != &v246 )
    operator delete(v245[0]);
  sub_112D4E0(v245, (__int64)v10, v50);
  v54 = (*((__int64 (__fastcall **)(void **, void *, void *))*v9 + 2))(v9, v245[0], v245[1]);
  v55 = (unsigned int)v249;
  v56 = (unsigned int)v249 + 1LL;
  if ( v56 > HIDWORD(v249) )
  {
    v237 = (__m128i *)v54;
    sub_2237220(p_ptr, p_ptr + 2, v56, 8);
    v55 = (unsigned int)v249;
    v54 = (__int64)v237;
  }
  *((_QWORD *)ptr + v55) = v54;
  LODWORD(v249) = v249 + 1;
  if ( v245[0] != &v246 )
    operator delete(v245[0]);
LABEL_97:
  v245[0] = (void *)0xF0000089CLL;
  v245[1] = (void *)0xD1700000CF9LL;
  sub_21B6650(v9, p_ptr, v245, 4);
  sub_112D940((__int64)v10, (__int64)v9, (__int64)p_ptr, v69, v70);
  sub_11C3660((__int64)v10, v235, (__int64)v9, (__int64)p_ptr, v234);
  v245[0] = (void *)0xBDD00000BF0LL;
  LODWORD(v245[1]) = 3236;
  v71 = sub_21B6DA0(v9, v245, 3);
  v72 = (char *)v9[1];
  v246 = 0xBDD00000BF0LL;
  v247 = 3236;
  v73 = (__m128i *)&v72[8 * (unsigned int)v71];
  v74 = (__m128i *)&v72[8 * HIDWORD(v71)];
  v237 = v74;
  *(__m128 *)v245 = _mm_loadh_ps((const double *)&v237);
  if ( v73 != v74 )
  {
    v237 = (__m128i *)v10;
    v75 = (const __m128i **)v73;
    v242 = (void **)((char *)&v245[1] + 4);
    v238 = v9;
    v239 = p_ptr;
    v76 = v74;
    do
    {
      v77 = *v75;
      v78 = v245;
      if ( *v75 )
      {
        do
        {
          v79 = *((unsigned int *)v78 + 4);
          if ( !(_DWORD)v79 )
            break;
          if ( (unsigned __int8)sub_21B9810(v77, v79) )
          {
            v87 = v76;
            v10 = v237;
            v37 = (__m128i *)v245;
            v237 = v87;
            v88 = v75;
            v9 = v238;
            p_ptr = v239;
            v246 = 0xBDD00000BF0LL;
            v247 = 3236;
            *(__m128 *)v245 = _mm_loadh_ps((const double *)&v237);
            if ( v87 == (__m128i *)v75 )
              goto LABEL_105;
            v89 = a2;
            v90 = v238;
            v238 = (void **)((char *)&v245[1] + 4);
            v91 = v239;
            v92 = (const __m128i **)v87;
            do
            {
              v93 = *v88;
              v94 = v88 + 1;
              if ( (*v88)[1].m128i_i64[0] )
                v93 = (const __m128i *)(*v88)[1].m128i_i64[0];
              v93[2].m128i_i8[12] |= 1u;
              v245[0] = v88 + 1;
              if ( v94 == v92 )
                break;
              while ( 1 )
              {
                v95 = v245;
                if ( *v94 )
                  break;
LABEL_126:
                v245[0] = ++v94;
                if ( v92 == v94 )
                  goto LABEL_127;
              }
              v232 = *v94;
              v96 = v89;
              while ( 1 )
              {
                v97 = *((unsigned int *)v95 + 4);
                if ( !(_DWORD)v97 )
                {
LABEL_125:
                  v89 = v96;
                  goto LABEL_126;
                }
                v237 = (__m128i *)v91;
                v236 = v90;
                v98 = sub_21B9810(v232, v97);
                v90 = v236;
                v91 = (void **)v237;
                if ( v98 )
                  break;
                v95 = (void **)((char *)v95 + 4);
                if ( v238 == v95 )
                  goto LABEL_125;
              }
              v88 = (const __m128i **)v245[0];
              v89 = v96;
            }
            while ( v92 != v245[0] );
LABEL_127:
            v37 = (__m128i *)v245;
            v9 = v90;
            p_ptr = v91;
            a2 = v89;
            goto LABEL_128;
          }
          v78 = (void **)((char *)v78 + 4);
        }
        while ( v242 != v78 );
      }
      v245[0] = ++v75;
    }
    while ( v76 != (__m128i *)v75 );
    v37 = (__m128i *)v245;
    v10 = v237;
    v9 = v238;
    p_ptr = v239;
  }
LABEL_105:
  if ( !v232 )
  {
    v228 = (unsigned int)v249;
    v229 = (unsigned int)v249 + 1LL;
    if ( v229 > HIDWORD(v249) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v229, 8);
      v228 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v228) = "-rpath";
    LODWORD(v249) = v249 + 1;
    v230 = (unsigned int)v249;
    if ( (unsigned __int64)(unsigned int)v249 + 1 > HIDWORD(v249) )
    {
      sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v249 + 1LL, 8);
      v230 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v230) = "/usr/lib/gcc80";
    LODWORD(v249) = v249 + 1;
  }
  LODWORD(v245[0]) = 3297;
  v80 = sub_21B6DA0(v9, v245, 1);
  v81 = (char *)v9[1];
  v82 = &v81[8 * (unsigned int)v80];
  v83 = &v81[8 * HIDWORD(v80)];
  if ( v82 == v83 )
    goto LABEL_112;
  v237 = (__m128i *)v9;
  v84 = v82;
  v85 = v83;
  while ( !*(_QWORD *)v84 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v84, 3297) )
  {
    v84 += 8;
    if ( v85 == v84 )
    {
      v9 = (void **)v237;
      goto LABEL_112;
    }
  }
  v175 = v85;
  v176 = v84;
  v9 = (void **)v237;
  if ( v176 == v175 )
  {
LABEL_112:
    v86 = 0;
  }
  else
  {
    v238 = v245;
    v177 = v175;
    do
    {
      v178 = *(_QWORD *)v176;
      v179 = *(_QWORD *)(*(_QWORD *)v176 + 16LL);
      if ( !v179 )
        v179 = *(_QWORD *)v176;
      v176 += 8;
      *(_BYTE *)(v179 + 44) |= 1u;
      if ( v176 == v177 )
        break;
      while ( !*(_QWORD *)v176 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v176, 3297) )
      {
        v176 += 8;
        if ( v177 == v176 )
          goto LABEL_251;
      }
    }
    while ( v176 != v177 );
LABEL_251:
    v86 = v178;
    v9 = (void **)v237;
    v37 = (__m128i *)v238;
  }
  sub_11C50B0(a2, (__int64)p_ptr, (__int64)v10, (__int64)v9, v232 == nullptr && v86 != 0, 0, 0);
  if ( *((_DWORD *)v236 + 4) == 1 )
  {
    if ( sub_112D7B0((__int64)v10, (__int64)v9) )
      (*(void (__fastcall **)(const __m128i *, void **, void **))(v10->m128i_i64[0] + 640))(v10, v9, p_ptr);
    v221 = (unsigned int)v249;
    v222 = (unsigned int)v249 + 1LL;
    if ( v222 > HIDWORD(v249) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v222, 8);
      v221 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v221) = "-lm";
    LODWORD(v249) = v249 + 1;
  }
  sub_21B7CF0(v9, 3306);
  if ( *((_DWORD *)v236 + 4) == 4 )
  {
    v245[0] = (void *)0xBDD00000BF0LL;
    v213 = sub_21B6DA0(v9, v37, 2);
    v214 = (char *)v9[1];
    v215 = (unsigned int)v213;
    v246 = 0xBDD00000BF0LL;
    v216 = (void **)&v214[8 * HIDWORD(v213)];
    v217 = (void **)&v214[8 * v215];
    v236 = v216;
    v238 = v216;
    *(__m128 *)v245 = _mm_loadh_ps((const double *)&v236);
    if ( v217 == v216 )
      goto LABEL_328;
    v237 = v37;
    v218 = v216;
    v236 = v9;
    v219 = v217;
    while ( 1 )
    {
      v220 = *v219;
      if ( *v219 )
      {
        if ( (unsigned __int8)sub_21B9810(*v219, 3056) || (unsigned __int8)sub_21B9810(v220, 3037) )
          break;
      }
      v245[0] = ++v219;
      if ( v218 == v219 )
      {
        v9 = v236;
        v37 = v237;
        goto LABEL_328;
      }
    }
    v223 = v219;
    v9 = v236;
    v236 = v238;
    v37 = v237;
    v246 = 0xBDD00000BF0LL;
    *(__m128 *)v245 = _mm_loadh_ps((const double *)&v236);
    if ( v238 == v223 )
    {
LABEL_328:
      (*(void (__fastcall **)(const __m128i *, void **, void **))(v10->m128i_i64[0] + 320))(v10, v9, p_ptr);
      (*(void (__fastcall **)(const __m128i *, void **, void **))(v10->m128i_i64[0] + 312))(v10, v9, p_ptr);
      sub_10DC5D0((__int64)p_ptr, (__int64)"-lm");
    }
    else
    {
      v236 = v9;
      v224 = v238;
      do
      {
        v225 = v223 + 1;
        v226 = *((_BYTE **)*v223 + 2);
        if ( !v226 )
          v226 = *v223;
        v226[44] |= 1u;
        v245[0] = v223 + 1;
        if ( v225 == v224 )
          break;
        while ( 1 )
        {
          v227 = *v225;
          if ( *v225 )
          {
            if ( (unsigned __int8)sub_21B9810(*v225, 3056) || (unsigned __int8)sub_21B9810(v227, 3037) )
              break;
          }
          v245[0] = ++v225;
          if ( v224 == v225 )
            goto LABEL_343;
        }
        v223 = (void **)v245[0];
      }
      while ( v224 != v245[0] );
LABEL_343:
      v9 = v236;
      v37 = v237;
    }
  }
  LODWORD(v245[0]) = 3178;
  v180 = sub_21B6DA0(v9, v37, 1);
  v181 = (char *)v9[1];
  v182 = &v181[8 * (unsigned int)v180];
  v183 = &v181[8 * HIDWORD(v180)];
  if ( v182 != v183 )
  {
    v236 = v9;
    v184 = v182;
    v185 = v183;
    while ( !*(_QWORD *)v184 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v184, 3178) )
    {
      v184 += 8;
      if ( v185 == v184 )
      {
        v9 = v236;
        goto LABEL_260;
      }
    }
    v194 = v185;
    v195 = v184;
    v9 = v236;
    if ( v194 != v195 )
    {
      v196 = v194;
      do
      {
        v197 = *(_QWORD *)v195;
        if ( *(_QWORD *)(*(_QWORD *)v195 + 16LL) )
          v197 = *(_QWORD *)(*(_QWORD *)v195 + 16LL);
        v195 += 8;
        *(_BYTE *)(v197 + 44) |= 1u;
        if ( v195 == v196 )
          break;
        while ( !*(_QWORD *)v195 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v195, 3178) )
        {
          v195 += 8;
          if ( v196 == v195 )
            goto LABEL_279;
        }
      }
      while ( v196 != v195 );
LABEL_279:
      v198 = (unsigned int)v249;
      v9 = v236;
      v199 = (unsigned int)v249 + 1LL;
      if ( v199 > HIDWORD(v249) )
      {
        sub_2237220(p_ptr, p_ptr + 2, v199, 8);
        v198 = (unsigned int)v249;
      }
      *((_QWORD *)ptr + v198) = "-lpthread";
      LODWORD(v249) = v249 + 1;
    }
  }
LABEL_260:
  LODWORD(v245[0]) = 3044;
  v186 = sub_21B6DA0(v9, v37, 1);
  v187 = (char *)v9[1];
  v188 = &v187[8 * (unsigned int)v186];
  v189 = &v187[8 * HIDWORD(v186)];
  if ( v188 == v189 )
    goto LABEL_266;
  v236 = v9;
  v190 = v188;
  v191 = v189;
  while ( !*(_QWORD *)v190 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v190, 3044) )
  {
    v190 += 8;
    if ( v191 == v190 )
    {
      v9 = v236;
      goto LABEL_266;
    }
  }
  v200 = v191;
  v201 = v190;
  v9 = v236;
  if ( v201 == v200 )
  {
LABEL_266:
    v192 = (unsigned int)v249;
    v193 = (unsigned int)v249 + 1LL;
    if ( v193 > HIDWORD(v249) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v193, 8);
      v192 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v192) = "-lc";
    LODWORD(v249) = v249 + 1;
  }
  else
  {
    v202 = v200;
    do
    {
      v203 = *(_QWORD *)v201;
      if ( *(_QWORD *)(*(_QWORD *)v201 + 16LL) )
        v203 = *(_QWORD *)(*(_QWORD *)v201 + 16LL);
      v201 += 8;
      *(_BYTE *)(v203 + 44) |= 1u;
      if ( v201 == v202 )
        break;
      while ( !*(_QWORD *)v201 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v201, 3044) )
      {
        v201 += 8;
        if ( v202 == v201 )
          goto LABEL_292;
      }
    }
    while ( v201 != v202 );
LABEL_292:
    v9 = v236;
  }
  if ( v232 || sub_10DCD30((__int64)v9, 0xCDDu) )
  {
    v204 = (unsigned int)v249;
    v205 = (unsigned int)v249 + 1LL;
    if ( v205 > HIDWORD(v249) )
    {
      sub_2237220(p_ptr, p_ptr + 2, v205, 8);
      v204 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v204) = "-lgcc";
    LODWORD(v249) = v249 + 1;
    v206 = (unsigned int)v249;
    if ( (unsigned __int64)(unsigned int)v249 + 1 > HIDWORD(v249) )
    {
      sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v249 + 1LL, 8);
      v206 = (unsigned int)v249;
    }
    *((_QWORD *)ptr + v206) = "-lgcc_eh";
    LODWORD(v249) = v249 + 1;
  }
  else if ( sub_10DCD30((__int64)v9, 0xCBEu) )
  {
    sub_10DC5D0((__int64)p_ptr, (__int64)"-lgcc_pic");
    if ( !v240 )
      sub_10DC5D0((__int64)p_ptr, (__int64)"-lgcc");
  }
  else
  {
    sub_10DC5D0((__int64)p_ptr, (__int64)"-lgcc");
    sub_10DC5D0((__int64)p_ptr, (__int64)"--as-needed");
    sub_10DC5D0((__int64)p_ptr, (__int64)"-lgcc_pic");
    sub_10DC5D0((__int64)p_ptr, (__int64)"--no-as-needed");
  }
LABEL_128:
  v245[0] = (void *)0xBEB00000BF0LL;
  LODWORD(v245[1]) = 3236;
  v99 = sub_21B6DA0(v9, v37, 3);
  v100 = (char *)v9[1];
  v246 = 0xBEB00000BF0LL;
  v247 = 3236;
  v101 = (const __m128i *)&v100[8 * (unsigned int)v99];
  v102 = (const __m128i *)&v100[8 * HIDWORD(v99)];
  v232 = v102;
  v103 = _mm_loadh_ps((const double *)&v232);
  *(__m128 *)v245 = v103;
  if ( v101 != v102 )
  {
    v232 = v10;
    v104 = v101;
    v238 = (void **)((char *)&v37->m128i_i64[1] + 4);
    v236 = v9;
    v237 = (__m128i *)p_ptr;
    v105 = v37;
    v106 = v102;
    do
    {
      v107 = v104->m128i_i64[0];
      v108 = v105;
      if ( v104->m128i_i64[0] )
      {
        do
        {
          v109 = v108[1].m128i_u32[0];
          if ( !(_DWORD)v109 )
            break;
          if ( (unsigned __int8)sub_21B9810(v107, v109) )
          {
            v117 = v106;
            v10 = v232;
            v37 = v105;
            v232 = v117;
            v118 = (const __m128i **)v104;
            v9 = v236;
            p_ptr = (void **)v237;
            v246 = 0xBEB00000BF0LL;
            v247 = 3236;
            v103 = _mm_loadh_ps((const double *)&v232);
            *(__m128 *)v245 = v103;
            if ( v117 == v104 )
              goto LABEL_136;
            v119 = a2;
            v120 = v236;
            v121 = v10;
            v238 = (void **)((char *)&v37->m128i_i64[1] + 4);
            v122 = v37;
            v123 = (void **)v237;
            v124 = (const __m128i **)v117;
            do
            {
              v125 = *v118;
              v126 = v118 + 1;
              if ( (*v118)[1].m128i_i64[0] )
                v125 = (const __m128i *)(*v118)[1].m128i_i64[0];
              v125[2].m128i_i8[12] |= 1u;
              v245[0] = v118 + 1;
              if ( v126 == v124 )
                break;
              while ( 1 )
              {
                v127 = v122;
                if ( *v126 )
                  break;
LABEL_159:
                v245[0] = ++v126;
                if ( v124 == v126 )
                  goto LABEL_160;
              }
              v232 = *v126;
              v128 = v119;
              while ( 1 )
              {
                v129 = v127[1].m128i_u32[0];
                if ( !(_DWORD)v129 )
                {
LABEL_158:
                  v119 = v128;
                  goto LABEL_159;
                }
                v237 = (__m128i *)v123;
                v236 = v120;
                v130 = sub_21B9810(v232, v129);
                v120 = v236;
                v123 = (void **)v237;
                if ( v130 )
                  break;
                v127 = (__m128i *)((char *)v127 + 4);
                if ( v127 == (__m128i *)v238 )
                  goto LABEL_158;
              }
              v118 = (const __m128i **)v245[0];
              v119 = v128;
            }
            while ( v245[0] != v124 );
LABEL_160:
            v37 = v122;
            v9 = v120;
            v10 = v121;
            p_ptr = v123;
            a2 = v119;
            goto LABEL_161;
          }
          v108 = (__m128i *)((char *)v108 + 4);
        }
        while ( v108 != (__m128i *)v238 );
      }
      v104 = (const __m128i *)((char *)v104 + 8);
      v245[0] = (void *)v104;
    }
    while ( v106 != v104 );
    v37 = v105;
    v10 = v232;
    v9 = v236;
    p_ptr = (void **)v237;
  }
LABEL_136:
  v110 = "crtendS.o";
  if ( !(v243 | v240) )
    v110 = "crtend.o";
  sub_112D4E0(v37, (__int64)v10, v110);
  v111 = (const __m128i *)(*((__int64 (__fastcall **)(void **, void *, void *))*v9 + 2))(v9, v245[0], v245[1]);
  v112 = (unsigned int)v249;
  v113 = (unsigned int)v249 + 1LL;
  if ( v113 > HIDWORD(v249) )
  {
    v232 = v111;
    sub_2237220(p_ptr, p_ptr + 2, v113, 8);
    v112 = (unsigned int)v249;
    v111 = v232;
  }
  *((_QWORD *)ptr + v112) = v111;
  LODWORD(v249) = v249 + 1;
  if ( v245[0] != &v37[1] )
    operator delete(v245[0]);
  sub_112D4E0(v37, (__int64)v10, "crtn.o");
  v114 = (const __m128i *)(*((__int64 (__fastcall **)(void **, void *, void *))*v9 + 2))(v9, v245[0], v245[1]);
  v115 = (unsigned int)v249;
  v116 = (unsigned int)v249 + 1LL;
  if ( v116 > HIDWORD(v249) )
  {
    v232 = v114;
    sub_2237220(p_ptr, p_ptr + 2, v116, 8);
    v115 = (unsigned int)v249;
    v114 = v232;
  }
  *((_QWORD *)ptr + v115) = v114;
  LODWORD(v249) = v249 + 1;
  if ( v245[0] != &v37[1] )
    operator delete(v245[0]);
LABEL_161:
  (*(void (__fastcall **)(const __m128i *, void **, void **))(v10->m128i_i64[0] + 672))(v10, v9, p_ptr);
  sub_1132E50(v37, (__int64)v10, nullptr);
  v131 = (*((__int64 (__fastcall **)(void **, void *, void *))*v9 + 2))(v9, v245[0], v245[1]);
  if ( v245[0] != &v37[1] )
    operator delete(v245[0]);
  v132 = *(unsigned int *)(v235 + 8);
  v232 = *(const __m128i **)v235;
  v233 = v132;
  v133 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v133, v234, v241, 0x100000000LL, (__int64)"@", v131, (__int64)p_ptr, v232, v233, a4, 1, 0);
  v134 = *(unsigned int *)(a2 + 160);
  v135 = *(unsigned int *)(a2 + 164);
  v245[0] = v133;
  v136 = v134 + 1;
  v137 = v134;
  if ( v134 + 1 > v135 )
  {
    v207 = *(_QWORD *)(a2 + 152);
    v208 = a2 + 152;
    if ( v207 > (unsigned __int64)v37 || (unsigned __int64)v37 >= v207 + 8 * v134 )
    {
      sub_11673D0(v208, v136, v103, a8);
      v134 = *(unsigned int *)(a2 + 160);
      v138 = *(_QWORD *)(a2 + 152);
      v137 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v208, v136, v103, a8);
      v138 = *(_QWORD *)(a2 + 152);
      v134 = *(unsigned int *)(a2 + 160);
      v37 = (__m128i *)((char *)v37 + v138 - v207);
      v137 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v138 = *(_QWORD *)(a2 + 152);
  }
  v139 = v37->m128i_i64[0];
  v37->m128i_i64[0] = 0;
  *(_QWORD *)(v138 + 8 * v134) = v139;
  v140 = v245[0];
  *(_DWORD *)(a2 + 160) = v137 + 1;
  if ( v140 )
  {
    v141 = *(void (__fastcall **)(_QWORD *))(*v140 + 8LL);
    if ( v141 == sub_10D4290 )
    {
      v142 = v140[58];
      v143 = v140[57];
      *v140 = &off_2BA8F30;
      if ( v142 != v143 )
      {
        do
        {
          if ( *(_BYTE *)(v143 + 32) && *(_QWORD *)v143 != v143 + 16 )
            operator delete(*(void **)v143);
          v143 += 40;
        }
        while ( v142 != v143 );
        v143 = v140[57];
      }
      if ( v143 )
        operator delete((void *)v143);
      v144 = (void *)v140[54];
      if ( v144 )
        operator delete(v144);
      v145 = (_QWORD *)v140[50];
      if ( v145 != v140 + 52 )
        operator delete(v145);
      v146 = (_QWORD *)v140[32];
      if ( v146 != v140 + 34 )
        free(v146);
      v147 = (void **)v140[29];
      v148 = (void **)v140[28];
      if ( v147 != v148 )
      {
        do
        {
          while ( *v148 != v148 + 2 )
          {
            operator delete(*v148);
            v148 += 4;
            if ( v148 == v147 )
            {
              v148 = (void **)v140[28];
              goto LABEL_185;
            }
          }
          v148 += 4;
        }
        while ( v147 != v148 );
        v148 = (void **)v140[28];
      }
LABEL_185:
      if ( v148 )
        operator delete(v148);
      v149 = (void *)v140[25];
      if ( v149 )
        operator delete(v149);
      v150 = (_QWORD *)v140[7];
      if ( v150 != v140 + 9 )
        free(v150);
      operator delete(v140, 0x208u);
    }
    else
    {
      v141(v140);
    }
  }
  if ( ptr != p_ptr + 2 )
    free(ptr);
}
