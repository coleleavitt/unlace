void __fastcall sub_1296710(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        double a7,
        double a8)
{
  void **v8; // rbx
  __int64 v9; // r13
  void **v10; // r12
  unsigned __int64 v11; // rax
  char *v12; // rdx
  __int64 *v13; // rbp
  __int64 *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  char *v18; // rdx
  char **v19; // r14
  char **v20; // r15
  char *v21; // rbp
  unsigned __int64 v22; // rax
  char *v23; // rdx
  char *v24; // r14
  char *v25; // rdx
  char *v26; // r15
  __int64 v27; // r15
  char *v28; // rax
  void **v29; // rdx
  void **v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdi
  char v34; // al
  void **p_ptr; // r14
  bool v36; // zf
  char *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  char *v44; // rdx
  char *v45; // r15
  char *v46; // rdx
  char *v47; // rbx
  char *v48; // r15
  unsigned __int64 v49; // rax
  char *v50; // rcx
  void **v51; // rdx
  void **v52; // rcx
  void **v53; // r15
  void **v54; // rbp
  void *v55; // r13
  void **v56; // rbx
  __int64 v57; // rsi
  char *v58; // r15
  __m128i *v59; // rbp
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  void **v66; // rcx
  void ***v67; // rdx
  void **v68; // r8
  void **v69; // r9
  void ***v70; // rbx
  __int64 v71; // r14
  void **v72; // r13
  void **v73; // rax
  void ***v74; // rbp
  void **v75; // r12
  void **v76; // r15
  __int64 v77; // rsi
  char v78; // al
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned int v81; // ecx
  unsigned __int64 v82; // rax
  char *v83; // rcx
  void **v84; // rdx
  void **v85; // rcx
  void **v86; // r15
  void **v87; // rbp
  void *v88; // r13
  void **v89; // rbx
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rax
  void **v93; // rcx
  __int64 *v94; // rdx
  void **v95; // r9
  char *v96; // r8
  void **v97; // r10
  __int64 *v98; // rbp
  __int64 v99; // rax
  __int64 *v100; // r15
  void **v101; // rbx
  char *v102; // r12
  __int64 v103; // rsi
  char v104; // al
  unsigned __int64 v105; // rax
  char *v106; // rcx
  __int64 *v107; // rdx
  __int64 *v108; // rcx
  __m128 v109; // xmm0
  __int64 *v110; // r15
  __m128i *v111; // r12
  __int64 *v112; // rbp
  __int64 v113; // r13
  __m128i *v114; // rbx
  __int64 v115; // rsi
  char *v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rcx
  unsigned __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rcx
  unsigned __int64 v122; // rdx
  __int64 *v123; // rcx
  __int64 *v124; // rdx
  void **v125; // r9
  void **v126; // r8
  __int64 v127; // r14
  __m128i *v128; // r13
  void **v129; // r10
  __int64 *v130; // rbp
  __int64 v131; // rax
  __int64 *v132; // r15
  __m128i *v133; // rbx
  void **v134; // r12
  __int64 v135; // rsi
  char v136; // al
  __int64 v137; // rbx
  __int64 v138; // r10
  void *v139; // r13
  __int64 v140; // rdx
  __int64 v141; // rsi
  int v142; // eax
  __int64 v143; // rcx
  __int64 v144; // rsi
  _QWORD *v145; // rbx
  void (__fastcall *v146)(_QWORD *); // rax
  __int64 v147; // r13
  __int64 v148; // rbp
  void *v149; // rdi
  _QWORD *v150; // rdi
  _QWORD *v151; // rdi
  void **v152; // r13
  void **v153; // rbp
  void *v154; // rdi
  _QWORD *v155; // rdi
  void **v156; // rbp
  void **v157; // rbx
  void **v158; // rbp
  void **v159; // rbx
  void **v160; // rbp
  void **v161; // rbx
  void **v162; // rbp
  void **v163; // rbx
  void **v164; // rbp
  void **v165; // rbx
  char *v166; // rdx
  char *v167; // r15
  char *v168; // rbx
  __int64 v169; // rax
  __int64 v170; // rax
  unsigned __int64 v171; // rdx
  __int64 v172; // rax
  unsigned __int64 v173; // rdx
  __int64 v174; // r15
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rcx
  unsigned __int64 v178; // rdx
  __int64 v179; // rax
  __int64 v180; // rax
  unsigned __int64 v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rcx
  unsigned __int64 v184; // rdx
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  __int64 v187; // rax
  unsigned __int64 v188; // rdx
  __int64 v189; // rax
  unsigned __int64 v190; // rdx
  __int64 v191; // rax
  __int64 v192; // rax
  unsigned __int64 v193; // rdx
  unsigned __int64 v194; // rdx
  __int64 v195; // rax
  unsigned __int64 v196; // rdx
  unsigned __int64 v197; // rdx
  __int64 v198; // rax
  unsigned __int64 v199; // rdx
  unsigned __int64 v200; // rdx
  __int64 v201; // rax
  unsigned __int64 v202; // rdx
  unsigned __int64 v203; // rdx
  __int64 v204; // rax
  unsigned __int64 v205; // rdx
  unsigned int v206; // eax
  __int64 v207; // rax
  unsigned __int64 v208; // rdx
  unsigned int v209; // eax
  __int64 v210; // rax
  unsigned __int64 v211; // rdx
  unsigned __int64 v212; // rdx
  __int64 v213; // rax
  unsigned __int64 v214; // rdx
  __int64 v215; // rax
  __int64 v216; // rcx
  unsigned __int64 v217; // rdx
  unsigned __int64 v218; // rbx
  __int64 v219; // rdi
  unsigned __int64 v220; // rax
  char *v221; // rsi
  __int64 v222; // rdx
  void **v223; // rax
  void **v224; // rdx
  void **v225; // r15
  char *v226; // rbx
  __int64 v227; // rbp
  char *v228; // rsi
  char *v229; // r15
  char *v230; // rdx
  char *v231; // rbx
  __int64 v232; // rax
  __int64 v233; // rbp
  const __m128i *v237; // [rsp+20h] [rbp-2A8h]
  __int64 v238; // [rsp+28h] [rbp-2A0h]
  __int64 v240; // [rsp+38h] [rbp-290h] BYREF
  void **v241; // [rsp+40h] [rbp-288h] BYREF
  void **v242; // [rsp+48h] [rbp-280h] BYREF
  char *v243; // [rsp+50h] [rbp-278h]
  void **v244; // [rsp+58h] [rbp-270h]
  __int64 v245; // [rsp+60h] [rbp-268h]
  void **v246; // [rsp+68h] [rbp-260h]
  unsigned __int64 v247; // [rsp+70h] [rbp-258h]
  bool v248; // [rsp+7Dh] [rbp-24Bh]
  char v249; // [rsp+7Eh] [rbp-24Ah]
  char v250; // [rsp+7Fh] [rbp-249h]
  void *v251[2]; // [rsp+80h] [rbp-248h] BYREF
  __int64 v252; // [rsp+90h] [rbp-238h] BYREF
  int v253; // [rsp+98h] [rbp-230h]
  void *ptr; // [rsp+A0h] [rbp-228h] BYREF
  __int64 v255; // [rsp+A8h] [rbp-220h]
  _BYTE v256[128]; // [rsp+B0h] [rbp-218h] BYREF
  void *v257[2]; // [rsp+130h] [rbp-198h] BYREF
  __int64 v258; // [rsp+140h] [rbp-188h]
  int v259; // [rsp+148h] [rbp-180h]
  __int16 v260; // [rsp+150h] [rbp-178h]
  void *v261; // [rsp+170h] [rbp-158h]
  void *v262; // [rsp+198h] [rbp-130h]
  void **v263; // [rsp+1A0h] [rbp-128h]
  void *v264; // [rsp+1B0h] [rbp-118h]
  void **v265; // [rsp+1B8h] [rbp-110h]
  void *v266; // [rsp+1C8h] [rbp-100h]
  void **v267; // [rsp+1D0h] [rbp-F8h]
  void *v268; // [rsp+1E0h] [rbp-E8h]
  void **v269; // [rsp+1E8h] [rbp-E0h]
  void *v270; // [rsp+1F8h] [rbp-D0h]
  void **v271; // [rsp+200h] [rbp-C8h]
  char v272; // [rsp+230h] [rbp-98h]
  void *v273; // [rsp+240h] [rbp-88h]
  void *v274; // [rsp+270h] [rbp-58h]

  v8 = a6;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = v257;
  v245 = a1;
  v241 = *(void ***)(v9 + 8);
  LODWORD(v242) = *(_DWORD *)(v9 + 48);
  LODWORD(v257[0]) = 3299;
  v11 = sub_21B6DA0(a6, v257, 1);
  v12 = (char *)v8[1];
  v13 = (__int64 *)&v12[8 * (unsigned int)v11];
  v14 = (__int64 *)&v12[8 * HIDWORD(v11)];
  if ( v13 == v14 )
    goto LABEL_5;
  while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3299) )
  {
    if ( v14 == ++v13 )
      goto LABEL_5;
  }
  if ( v14 == v13 )
  {
LABEL_5:
    v240 = 0;
  }
  else
  {
    do
    {
      v15 = *v13;
      v16 = *(_QWORD *)(*v13 + 16);
      if ( !v16 )
        v16 = *v13;
      ++v13;
      *(_BYTE *)(v16 + 44) |= 1u;
      if ( v13 == v14 )
        break;
      while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3299) )
      {
        if ( v14 == ++v13 )
          goto LABEL_13;
      }
    }
    while ( v14 != v13 );
LABEL_13:
    v240 = v15;
  }
  LODWORD(v257[0]) = 3264;
  v17 = sub_21B6DA0(v8, v257, 1);
  v18 = (char *)v8[1];
  v19 = (char **)&v18[8 * (unsigned int)v17];
  v20 = (char **)&v18[8 * HIDWORD(v17)];
  if ( v19 == v20 )
    goto LABEL_18;
  while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3264) )
  {
    if ( v20 == ++v19 )
      goto LABEL_18;
  }
  if ( v20 == v19 )
  {
LABEL_18:
    v21 = nullptr;
  }
  else
  {
    do
    {
      v21 = *v19;
      v28 = *((char **)*v19 + 2);
      if ( !v28 )
        v28 = *v19;
      ++v19;
      v28[44] |= 1u;
      if ( v19 == v20 )
        break;
      while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3264) )
      {
        if ( v20 == ++v19 )
          goto LABEL_19;
      }
    }
    while ( v20 != v19 );
  }
LABEL_19:
  LODWORD(v257[0]) = 3132;
  v22 = sub_21B6DA0(v8, v257, 1);
  v23 = (char *)v8[1];
  v24 = &v23[8 * (unsigned int)v22];
  v25 = &v23[8 * HIDWORD(v22)];
  if ( v24 == v25 )
    goto LABEL_24;
  v26 = v25;
  while ( !*(_QWORD *)v24 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v24, 3132) )
  {
    v24 += 8;
    if ( v26 == v24 )
      goto LABEL_24;
  }
  if ( v26 == v24 )
  {
LABEL_24:
    v27 = 0;
  }
  else
  {
    v29 = v257;
    v30 = v8;
    do
    {
      v31 = *(_QWORD *)v24;
      v32 = *(_QWORD *)(*(_QWORD *)v24 + 16LL);
      if ( !v32 )
        v32 = *(_QWORD *)v24;
      v24 += 8;
      *(_BYTE *)(v32 + 44) |= 1u;
      if ( v24 == v26 )
        break;
      while ( 1 )
      {
        v33 = *(_QWORD *)v24;
        if ( *(_QWORD *)v24 )
        {
          v243 = (char *)v29;
          v34 = sub_21B9810(v33, 3132);
          v29 = (void **)v243;
          if ( v34 )
            break;
        }
        v24 += 8;
        if ( v26 == v24 )
          goto LABEL_45;
      }
    }
    while ( v26 != v24 );
LABEL_45:
    v27 = v31;
    v8 = v30;
    v10 = v29;
  }
  p_ptr = &ptr;
  v247 = (unsigned __int64)v21 | v27;
  v36 = v241[62] == nullptr;
  v255 = 0x1000000000LL;
  v37 = v256;
  ptr = v256;
  if ( !v36 )
  {
    v243 = v256;
    sub_C05100((__int64)v10, "--sysroot=", (__int64)(v241 + 61));
    v176 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v257[0], v257[1]);
    v177 = (unsigned int)v255;
    v178 = (unsigned int)v255 + 1LL;
    if ( v178 > HIDWORD(v255) )
    {
      v228 = v243;
      v243 = (char *)v176;
      sub_2237220(&ptr, v228, v178, 8);
      v177 = (unsigned int)v255;
      v176 = (__int64)v243;
    }
    *((_QWORD *)ptr + v177) = v176;
    v179 = (unsigned int)(v255 + 1);
    LODWORD(v255) = v255 + 1;
    if ( v257[0] != v10 + 2 )
    {
      operator delete(v257[0]);
      v179 = (unsigned int)v255;
    }
    if ( v179 + 1 > (unsigned __int64)HIDWORD(v255) )
    {
      sub_2237220(&ptr, v256, v179 + 1, 8);
      v37 = (char *)ptr + 8 * (unsigned int)v255;
    }
    else
    {
      v37 = (char *)ptr + 8 * v179;
    }
  }
  *(_QWORD *)v37 = "--eh-frame-hdr";
  v38 = (unsigned int)(v255 + 1);
  LODWORD(v255) = v255 + 1;
  if ( v240 )
  {
    if ( v38 + 1 > (unsigned __int64)HIDWORD(v255) )
    {
      sub_2237220(&ptr, v256, v38 + 1, 8);
      v38 = (unsigned int)v255;
    }
    *((_QWORD *)ptr + v38) = "-Bstatic";
    LODWORD(v255) = v255 + 1;
    if ( v27 )
    {
      sub_21B7F70(v8, &ptr, 3132);
      v39 = (unsigned int)v255;
      v40 = (unsigned int)v255 + 1LL;
      if ( v40 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v40, 8);
        v39 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v39) = "--no-dynamic-linker";
      LODWORD(v255) = v255 + 1;
    }
  }
  else
  {
    if ( sub_10DCD30((__int64)v8, 0xC83u) )
    {
      v185 = (unsigned int)v255;
      v186 = (unsigned int)v255 + 1LL;
      if ( v186 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v186, 8);
        v185 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v185) = "-export-dynamic";
      LODWORD(v255) = v255 + 1;
    }
    if ( v21 )
    {
      v187 = (unsigned int)v255;
      v188 = (unsigned int)v255 + 1LL;
      if ( v188 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v188, 8);
        v187 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v187) = "-shared";
      LODWORD(v255) = v255 + 1;
    }
    else if ( !sub_10DCD30((__int64)v8, 0xCA4u) )
    {
      sub_21B7F70(v8, &ptr, 3132);
      sub_10DC5D0((__int64)&ptr, (__int64)"-dynamic-linker");
      sub_10DC5D0((__int64)&ptr, (__int64)"/libexec/ld.elf_so");
    }
  }
  switch ( (int)v242 )
  {
    case 1:
    case 35:
      v204 = (unsigned int)v255;
      v205 = (unsigned int)v255 + 1LL;
      if ( v205 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v205, 8);
        v204 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v204) = "-m";
      v206 = *(_DWORD *)(v9 + 64);
      LODWORD(v255) = v255 + 1;
      if ( v206 == 7 )
        goto LABEL_366;
      if ( v206 <= 7 )
      {
        if ( v206 != 5 )
          goto LABEL_329;
        goto LABEL_361;
      }
      if ( v206 == 15 )
      {
LABEL_361:
        sub_10DC5D0((__int64)&ptr, (__int64)"armelf_nbsd_eabi");
        goto LABEL_59;
      }
      if ( v206 != 16 )
      {
LABEL_329:
        sub_10DC5D0((__int64)&ptr, (__int64)"armelf_nbsd");
        goto LABEL_59;
      }
LABEL_366:
      sub_10DC5D0((__int64)&ptr, (__int64)"armelf_nbsd_eabihf");
LABEL_59:
      if ( (unsigned int)(*(_DWORD *)(v9 + 48) - 27) > 1 )
        goto LABEL_68;
      v41 = (unsigned int)v255;
      v42 = (unsigned int)v255 + 1LL;
      if ( v42 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v42, 8);
        v41 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v41) = "-X";
      LODWORD(v255) = v255 + 1;
      LODWORD(v257[0]) = 2700;
      v43 = sub_21B6DA0(v8, v10, 1);
      v44 = (char *)v8[1];
      v45 = &v44[8 * (unsigned int)v43];
      v46 = &v44[8 * HIDWORD(v43)];
      if ( v45 == v46 )
        goto LABEL_68;
      v242 = v8;
      v47 = v45;
      v48 = v46;
      while ( !*(_QWORD *)v47 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v47, 2700) )
      {
        v47 += 8;
        if ( v48 == v47 )
        {
          v8 = v242;
          goto LABEL_68;
        }
      }
      v166 = v48;
      v167 = v47;
      v8 = v242;
      if ( v166 == v167 )
      {
LABEL_68:
        if ( *(_DWORD *)(a4 + 8) != 1 )
          goto LABEL_69;
        goto LABEL_271;
      }
      v168 = v166;
      do
      {
        v169 = *(_QWORD *)v167;
        if ( *(_QWORD *)(*(_QWORD *)v167 + 16LL) )
          v169 = *(_QWORD *)(*(_QWORD *)v167 + 16LL);
        v167 += 8;
        *(_BYTE *)(v169 + 44) |= 1u;
        if ( v167 == v168 )
          break;
        while ( !*(_QWORD *)v167 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v167, 2700) )
        {
          v167 += 8;
          if ( v168 == v167 )
            goto LABEL_268;
        }
      }
      while ( v168 != v167 );
LABEL_268:
      v170 = (unsigned int)v255;
      v8 = v242;
      v171 = (unsigned int)v255 + 1LL;
      if ( v171 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v171, 8);
        v170 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v170) = "--no-relax";
      LODWORD(v255) = v255 + 1;
      if ( *(_DWORD *)(a4 + 8) == 1 )
      {
LABEL_271:
        v172 = (unsigned int)v255;
        v173 = (unsigned int)v255 + 1LL;
        if ( v173 > HIDWORD(v255) )
        {
          sub_2237220(&ptr, v256, v173, 8);
          v172 = (unsigned int)v255;
        }
        *((_QWORD *)ptr + v172) = "-o";
        v174 = *(_QWORD *)a4;
        LODWORD(v255) = v255 + 1;
        v175 = (unsigned int)v255;
        if ( (unsigned __int64)(unsigned int)v255 + 1 > HIDWORD(v255) )
        {
          sub_2237220(&ptr, v256, (unsigned int)v255 + 1LL, 8);
          v175 = (unsigned int)v255;
        }
        *((_QWORD *)ptr + v175) = v174;
        LODWORD(v255) = v255 + 1;
      }
LABEL_69:
      v257[0] = (void *)0xBEB00000BF0LL;
      LODWORD(v257[1]) = 3236;
      v49 = sub_21B6DA0(v8, v10, 3);
      v50 = (char *)v8[1];
      v258 = 0xBEB00000BF0LL;
      v259 = 3236;
      v51 = (void **)&v50[8 * (unsigned int)v49];
      v52 = (void **)&v50[8 * HIDWORD(v49)];
      v242 = v52;
      *(__m128 *)v257 = _mm_loadh_ps((const double *)&v242);
      if ( v51 != v52 )
      {
        v242 = (void **)v9;
        v53 = v51;
        v246 = (void **)((char *)v10 + 12);
        v244 = v8;
        v243 = v21;
        v54 = v52;
        do
        {
          v55 = *v53;
          v56 = v10;
          if ( *v53 )
          {
            do
            {
              v57 = *((unsigned int *)v56 + 4);
              if ( !(_DWORD)v57 )
                break;
              if ( (unsigned __int8)sub_21B9810(v55, v57) )
              {
                v66 = v54;
                v9 = (__int64)v242;
                v67 = (void ***)v53;
                v21 = v243;
                v242 = v66;
                v8 = v244;
                v258 = 0xBEB00000BF0LL;
                v259 = 3236;
                *(__m128 *)v257 = _mm_loadh_ps((const double *)&v242);
                if ( v66 == v53 )
                  goto LABEL_77;
                v68 = v244;
                v69 = &ptr;
                v70 = (void ***)v66;
                v244 = (void **)((char *)v10 + 12);
                v71 = v9;
                v72 = v10;
                do
                {
                  v73 = *v67;
                  v74 = v67 + 1;
                  if ( (*v67)[2] )
                    v73 = (void **)(*v67)[2];
                  *((_BYTE *)v73 + 44) |= 1u;
                  v257[0] = v67 + 1;
                  if ( v74 == v70 )
                    break;
                  while ( 1 )
                  {
                    v75 = v72;
                    if ( *v74 )
                      break;
LABEL_100:
                    v257[0] = ++v74;
                    if ( v70 == v74 )
                      goto LABEL_101;
                  }
                  v242 = *v74;
                  v76 = v68;
                  while ( 1 )
                  {
                    v77 = *((unsigned int *)v75 + 4);
                    if ( !(_DWORD)v77 )
                    {
LABEL_99:
                      v68 = v76;
                      goto LABEL_100;
                    }
                    v243 = (char *)v69;
                    v78 = sub_21B9810(v242, v77);
                    v69 = (void **)v243;
                    if ( v78 )
                      break;
                    v75 = (void **)((char *)v75 + 4);
                    if ( v244 == v75 )
                      goto LABEL_99;
                  }
                  v67 = (void ***)v257[0];
                  v68 = v76;
                }
                while ( v70 != v257[0] );
LABEL_101:
                v10 = v72;
                v8 = v68;
                v9 = v71;
                p_ptr = v69;
                v59 = (__m128i *)v251;
                goto LABEL_102;
              }
              v56 = (void **)((char *)v56 + 4);
            }
            while ( v246 != v56 );
          }
          v257[0] = ++v53;
        }
        while ( v54 != v53 );
        v9 = (__int64)v242;
        v21 = v243;
        v8 = v244;
      }
LABEL_77:
      if ( v21 )
      {
        v58 = "crtbeginS.o";
        v59 = (__m128i *)v251;
      }
      else
      {
        v59 = (__m128i *)v251;
        v58 = (char *)"crtbegin.o";
        if ( v247 )
          v58 = "crtbeginS.o";
        sub_112D4E0(v251, v9, "crt0.o");
        v260 = 260;
        v257[0] = v251;
        v215 = sub_10DA6C0((__int64)v8, (__int64)v10);
        v216 = (unsigned int)v255;
        v217 = (unsigned int)v255 + 1LL;
        if ( v217 > HIDWORD(v255) )
        {
          v242 = (void **)v215;
          sub_2237220(&ptr, v256, v217, 8);
          v216 = (unsigned int)v255;
          v215 = (__int64)v242;
        }
        *((_QWORD *)ptr + v216) = v215;
        LODWORD(v255) = v255 + 1;
        if ( v251[0] != &v252 )
          operator delete(v251[0]);
      }
      sub_112D4E0(v10, v9, "crti.o");
      v60 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v257[0], v257[1]);
      v61 = (unsigned int)v255;
      v62 = (unsigned int)v255 + 1LL;
      if ( v62 > HIDWORD(v255) )
      {
        v242 = (void **)v60;
        sub_2237220(&ptr, v256, v62, 8);
        v61 = (unsigned int)v255;
        v60 = (__int64)v242;
      }
      *((_QWORD *)ptr + v61) = v60;
      LODWORD(v255) = v255 + 1;
      if ( v257[0] != v10 + 2 )
        operator delete(v257[0]);
      sub_112D4E0(v10, v9, v58);
      v63 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v257[0], v257[1]);
      v64 = (unsigned int)v255;
      v65 = (unsigned int)v255 + 1LL;
      if ( v65 > HIDWORD(v255) )
      {
        v242 = (void **)v63;
        sub_2237220(&ptr, v256, v65, 8);
        v64 = (unsigned int)v255;
        v63 = (__int64)v242;
      }
      *((_QWORD *)ptr + v64) = v63;
      LODWORD(v255) = v255 + 1;
      if ( v257[0] != v10 + 2 )
        operator delete(v257[0]);
LABEL_102:
      v257[0] = (void *)0xF0000089CLL;
      v257[1] = (void *)0xD1700000CF9LL;
      sub_21B6650(v8, p_ptr, v10, 4);
      sub_112D940(v9, (__int64)v8, (__int64)p_ptr, v79, v80);
      v249 = sub_11C3BD0((__int64 **)v9, (__int64)v8, (__int64)p_ptr);
      v250 = sub_11BDB50(v9, (__int64)v8, (__int64)p_ptr);
      sub_11C3660(v9, a5, (__int64)v8, (__int64)p_ptr, a3);
      sub_112C5F0((__int64)v10, v9, (__int64)v8);
      if ( v272 )
      {
        v180 = (unsigned int)v255;
        v181 = (unsigned int)v255 + 1LL;
        if ( v181 > HIDWORD(v255) )
        {
          sub_2237220(p_ptr, p_ptr + 2, v181, 8);
          v180 = (unsigned int)v255;
        }
        *((_QWORD *)ptr + v180) = "-rpath";
        LODWORD(v255) = v255 + 1;
        (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v9 + 296LL))(v251, v9);
        v182 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v251[0], v251[1]);
        v183 = (unsigned int)v255;
        v184 = (unsigned int)v255 + 1LL;
        if ( v184 > HIDWORD(v255) )
        {
          v242 = (void **)v182;
          sub_2237220(p_ptr, p_ptr + 2, v184, 8);
          v183 = (unsigned int)v255;
          v182 = (__int64)v242;
        }
        *((_QWORD *)ptr + v183) = v182;
        LODWORD(v255) = v255 + 1;
        if ( v251[0] != &v252 )
          operator delete(v251[0]);
      }
      v81 = *(_DWORD *)(v9 + 48);
      v248 = 1;
      if ( v81 <= 0x26 )
        v248 = ((1LL << v81) & 0x7879A0001ELL) == 0;
      v251[0] = (void *)0xBDD00000BF0LL;
      LODWORD(v251[1]) = 3236;
      v82 = sub_21B6DA0(v8, v251, 3);
      v83 = (char *)v8[1];
      v252 = 0xBDD00000BF0LL;
      v253 = 3236;
      v84 = (void **)&v83[8 * (unsigned int)v82];
      v85 = (void **)&v83[8 * HIDWORD(v82)];
      v242 = v85;
      *(__m128 *)v251 = _mm_loadh_ps((const double *)&v242);
      if ( v84 != v85 )
      {
        v242 = (void **)v9;
        v86 = v84;
        v246 = (void **)((char *)&v251[1] + 4);
        v243 = (char *)v8;
        v244 = v10;
        v87 = v85;
        do
        {
          v88 = *v86;
          v89 = v251;
          if ( *v86 )
          {
            do
            {
              v90 = *((unsigned int *)v89 + 4);
              if ( !(_DWORD)v90 )
                break;
              if ( (unsigned __int8)sub_21B9810(v88, v90) )
              {
                v93 = v87;
                v9 = (__int64)v242;
                v59 = (__m128i *)v251;
                v242 = v93;
                v94 = (__int64 *)v86;
                v8 = (void **)v243;
                v10 = v244;
                v252 = 0xBDD00000BF0LL;
                v253 = 3236;
                *(__m128 *)v251 = _mm_loadh_ps((const double *)&v242);
                if ( v93 == v86 )
                  goto LABEL_113;
                v95 = p_ptr;
                v96 = v243;
                v243 = (char *)&v251[1] + 4;
                v97 = v244;
                v98 = (__int64 *)v93;
                do
                {
                  v99 = *v94;
                  v100 = v94 + 1;
                  if ( *(_QWORD *)(*v94 + 16) )
                    v99 = *(_QWORD *)(*v94 + 16);
                  *(_BYTE *)(v99 + 44) |= 1u;
                  v251[0] = v94 + 1;
                  if ( v100 == v98 )
                    break;
                  while ( 1 )
                  {
                    v101 = v251;
                    if ( *v100 )
                      break;
LABEL_141:
                    v251[0] = ++v100;
                    if ( v98 == v100 )
                      goto LABEL_142;
                  }
                  v240 = *v100;
                  v102 = v96;
                  while ( 1 )
                  {
                    v103 = *((unsigned int *)v101 + 4);
                    if ( !(_DWORD)v103 )
                    {
LABEL_140:
                      v96 = v102;
                      goto LABEL_141;
                    }
                    v242 = v97;
                    v241 = v95;
                    v104 = sub_21B9810(v240, v103);
                    v95 = v241;
                    v97 = v242;
                    if ( v104 )
                      break;
                    v101 = (void **)((char *)v101 + 4);
                    if ( v101 == (void **)v243 )
                      goto LABEL_140;
                  }
                  v94 = (__int64 *)v251[0];
                  v96 = v102;
                }
                while ( v98 != v251[0] );
LABEL_142:
                v59 = (__m128i *)v251;
                v8 = (void **)v96;
                v10 = v97;
                p_ptr = v95;
                goto LABEL_143;
              }
              v89 = (void **)((char *)v89 + 4);
            }
            while ( v246 != v89 );
          }
          v251[0] = ++v86;
        }
        while ( v87 != v86 );
        v59 = (__m128i *)v251;
        v9 = (__int64)v242;
        v8 = (void **)v243;
        v10 = v244;
      }
LABEL_113:
      v91 = sub_10DCD30((__int64)v8, 0xCE1u);
      sub_11C50B0(a2, (__int64)p_ptr, v9, (__int64)v8, v91 != 0 && v240 == 0, 0, 0);
      if ( *((_DWORD *)v241 + 4) == 1 )
      {
        if ( sub_112D7B0(v9, (__int64)v8) )
          (*(void (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v9 + 640LL))(v9, v8, p_ptr);
        sub_10DC5D0((__int64)p_ptr, (__int64)"-lm");
      }
      sub_21B7CF0(v8, 3306);
      if ( *((_DWORD *)v241 + 4) == 4 )
      {
        v251[0] = (void *)0xBDD00000BF0LL;
        v220 = sub_21B6DA0(v8, v251, 2);
        v221 = (char *)v8[1];
        v222 = (unsigned int)v220;
        v252 = 0xBDD00000BF0LL;
        v223 = (void **)&v221[8 * HIDWORD(v220)];
        v224 = (void **)&v221[8 * v222];
        v241 = v223;
        v243 = (char *)v223;
        *(__m128 *)v251 = _mm_loadh_ps((const double *)&v241);
        if ( v224 == v223 )
          goto LABEL_379;
        v242 = v251;
        v225 = v223;
        v241 = v8;
        v226 = (char *)v224;
        while ( 1 )
        {
          v227 = *(_QWORD *)v226;
          if ( *(_QWORD *)v226 )
          {
            if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v226, 3056) || (unsigned __int8)sub_21B9810(v227, 3037) )
              break;
          }
          v226 += 8;
          v251[0] = v226;
          if ( v225 == (void **)v226 )
          {
            v8 = v241;
            v59 = (__m128i *)v242;
            goto LABEL_379;
          }
        }
        v229 = v243;
        v230 = v226;
        v8 = v241;
        v241 = (void **)v243;
        v59 = (__m128i *)v242;
        v252 = 0xBDD00000BF0LL;
        *(__m128 *)v251 = _mm_loadh_ps((const double *)&v241);
        if ( v230 == v243 )
        {
LABEL_379:
          (*(void (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v9 + 320LL))(v9, v8, p_ptr);
          (*(void (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v9 + 312LL))(v9, v8, p_ptr);
          sub_10DC5D0((__int64)p_ptr, (__int64)"-lm");
        }
        else
        {
          v241 = v8;
          do
          {
            v231 = v230 + 8;
            v232 = *(_QWORD *)(*(_QWORD *)v230 + 16LL);
            if ( !v232 )
              v232 = *(_QWORD *)v230;
            *(_BYTE *)(v232 + 44) |= 1u;
            v251[0] = v230 + 8;
            if ( v231 == v229 )
              break;
            while ( 1 )
            {
              v233 = *(_QWORD *)v231;
              if ( *(_QWORD *)v231 )
              {
                if ( (unsigned __int8)sub_21B9810(*(_QWORD *)v231, 3056) || (unsigned __int8)sub_21B9810(v233, 3037) )
                  break;
              }
              v231 += 8;
              v251[0] = v231;
              if ( v229 == v231 )
                goto LABEL_389;
            }
            v230 = (char *)v251[0];
          }
          while ( v229 != v251[0] );
LABEL_389:
          v8 = v241;
          v59 = (__m128i *)v242;
        }
      }
      if ( v249 )
        sub_11BC1D0(v9, (__int64)v8, (__int64)p_ptr);
      if ( v250 )
        sub_11BC020(v9, (__int64)v8, (__int64)p_ptr);
      v36 = sub_10DCD30((__int64)v8, 0xC6Au) == 0;
      v92 = (unsigned int)v255;
      if ( !v36 )
      {
        if ( (unsigned __int64)(unsigned int)v255 + 1 > HIDWORD(v255) )
        {
          sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v255 + 1LL, 8);
          v92 = (unsigned int)v255;
        }
        *((_QWORD *)ptr + v92) = "-lpthread";
        v92 = (unsigned int)(v255 + 1);
        LODWORD(v255) = v255 + 1;
      }
      if ( v92 + 1 > (unsigned __int64)HIDWORD(v255) )
      {
        sub_2237220(p_ptr, p_ptr + 2, v92 + 1, 8);
        v92 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v92) = "-lc";
      LODWORD(v255) = v255 + 1;
      if ( v248 )
      {
        if ( v240 )
        {
          sub_10DC5D0((__int64)p_ptr, (__int64)"-lgcc_eh");
          sub_10DC5D0((__int64)p_ptr, (__int64)"-lc");
          sub_10DC5D0((__int64)p_ptr, (__int64)"-lgcc");
        }
        else
        {
          sub_10DC5D0((__int64)p_ptr, (__int64)"-lgcc");
          sub_10DC5D0((__int64)p_ptr, (__int64)"--as-needed");
          sub_10DC5D0((__int64)p_ptr, (__int64)"-lgcc_s");
          sub_10DC5D0((__int64)p_ptr, (__int64)"--no-as-needed");
        }
      }
LABEL_143:
      v251[0] = (void *)0xBEB00000BF0LL;
      LODWORD(v251[1]) = 3236;
      v105 = sub_21B6DA0(v8, v59, 3);
      v106 = (char *)v8[1];
      v252 = 0xBEB00000BF0LL;
      v253 = 3236;
      v107 = (__int64 *)&v106[8 * (unsigned int)v105];
      v108 = (__int64 *)&v106[8 * HIDWORD(v105)];
      v240 = (__int64)v108;
      v109 = _mm_loadh_ps((const double *)&v240);
      *(__m128 *)v251 = v109;
      if ( v107 != v108 )
      {
        v240 = v9;
        v110 = v107;
        v243 = &v59->m128i_i8[12];
        v241 = v8;
        v242 = v10;
        v111 = v59;
        v112 = v108;
        do
        {
          v113 = *v110;
          v114 = v111;
          if ( *v110 )
          {
            do
            {
              v115 = v114[1].m128i_u32[0];
              if ( !(_DWORD)v115 )
                break;
              if ( (unsigned __int8)sub_21B9810(v113, v115) )
              {
                v123 = v112;
                v9 = v240;
                v59 = v111;
                v240 = (__int64)v123;
                v124 = v110;
                v8 = v241;
                v10 = v242;
                v252 = 0xBEB00000BF0LL;
                v253 = 3236;
                v109 = _mm_loadh_ps((const double *)&v240);
                *(__m128 *)v251 = v109;
                if ( v110 == v123 )
                  goto LABEL_151;
                v125 = p_ptr;
                v126 = v241;
                v127 = v9;
                v243 = &v59->m128i_i8[12];
                v128 = v59;
                v129 = v242;
                v130 = v123;
                do
                {
                  v131 = *v124;
                  v132 = v124 + 1;
                  if ( *(_QWORD *)(*v124 + 16) )
                    v131 = *(_QWORD *)(*v124 + 16);
                  *(_BYTE *)(v131 + 44) |= 1u;
                  v251[0] = v124 + 1;
                  if ( v132 == v130 )
                    break;
                  while ( 1 )
                  {
                    v133 = v128;
                    if ( *v132 )
                      break;
LABEL_174:
                    v251[0] = ++v132;
                    if ( v130 == v132 )
                      goto LABEL_175;
                  }
                  v240 = *v132;
                  v134 = v126;
                  while ( 1 )
                  {
                    v135 = v133[1].m128i_u32[0];
                    if ( !(_DWORD)v135 )
                    {
LABEL_173:
                      v126 = v134;
                      goto LABEL_174;
                    }
                    v242 = v129;
                    v241 = v125;
                    v136 = sub_21B9810(v240, v135);
                    v125 = v241;
                    v129 = v242;
                    if ( v136 )
                      break;
                    v133 = (__m128i *)((char *)v133 + 4);
                    if ( v243 == (char *)v133 )
                      goto LABEL_173;
                  }
                  v124 = (__int64 *)v251[0];
                  v126 = v134;
                }
                while ( v130 != v251[0] );
LABEL_175:
                v59 = v128;
                v8 = v126;
                v9 = v127;
                v10 = v129;
                p_ptr = v125;
                goto LABEL_176;
              }
              v114 = (__m128i *)((char *)v114 + 4);
            }
            while ( v243 != (char *)v114 );
          }
          v251[0] = ++v110;
        }
        while ( v112 != v110 );
        v59 = v111;
        v9 = v240;
        v8 = v241;
        v10 = v242;
      }
LABEL_151:
      v116 = "crtendS.o";
      if ( !v247 )
        v116 = "crtend.o";
      sub_112D4E0(v59, v9, v116);
      v117 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v251[0], v251[1]);
      v118 = (unsigned int)v255;
      v119 = (unsigned int)v255 + 1LL;
      if ( v119 > HIDWORD(v255) )
      {
        v240 = v117;
        sub_2237220(p_ptr, p_ptr + 2, v119, 8);
        v118 = (unsigned int)v255;
        v117 = v240;
      }
      *((_QWORD *)ptr + v118) = v117;
      LODWORD(v255) = v255 + 1;
      if ( v251[0] != &v59[1] )
        operator delete(v251[0]);
      sub_112D4E0(v59, v9, "crtn.o");
      v120 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v251[0], v251[1]);
      v121 = (unsigned int)v255;
      v122 = (unsigned int)v255 + 1LL;
      if ( v122 > HIDWORD(v255) )
      {
        v240 = v120;
        sub_2237220(p_ptr, p_ptr + 2, v122, 8);
        v121 = (unsigned int)v255;
        v120 = v240;
      }
      *((_QWORD *)ptr + v121) = v120;
      LODWORD(v255) = v255 + 1;
      if ( v251[0] != &v59[1] )
        operator delete(v251[0]);
LABEL_176:
      (*(void (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v9 + 672LL))(v9, v8, p_ptr);
      sub_1132E50(v59, v9, nullptr);
      v137 = (*((__int64 (__fastcall **)(void **, void *, void *))*v8 + 2))(v8, v251[0], v251[1]);
      if ( v251[0] != &v59[1] )
        operator delete(v251[0]);
      v138 = *(unsigned int *)(a5 + 8);
      v237 = *(const __m128i **)a5;
      v238 = v138;
      v139 = (void *)operator new(0x208u);
      sub_1106AE0((__int64)v139, a3, v245, 0x100000000LL, (__int64)"@", v137, (__int64)p_ptr, v237, v238, a4, 1, 0);
      v251[0] = v139;
      v140 = *(unsigned int *)(a2 + 160);
      v141 = v140 + 1;
      v142 = *(_DWORD *)(a2 + 160);
      if ( v140 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
      {
        v218 = *(_QWORD *)(a2 + 152);
        v219 = a2 + 152;
        if ( v218 > (unsigned __int64)v59 )
        {
          sub_11673D0(v219, v141, v109, a8);
          v140 = *(unsigned int *)(a2 + 160);
          v143 = *(_QWORD *)(a2 + 152);
          v142 = *(_DWORD *)(a2 + 160);
        }
        else
        {
          if ( (unsigned __int64)v59 < v218 + 8 * v140 )
          {
            sub_11673D0(v219, v141, v109, a8);
            v143 = *(_QWORD *)(a2 + 152);
            v140 = *(unsigned int *)(a2 + 160);
            v59 = (__m128i *)((char *)v59 + v143 - v218);
          }
          else
          {
            sub_11673D0(v219, v141, v109, a8);
            v140 = *(unsigned int *)(a2 + 160);
            v143 = *(_QWORD *)(a2 + 152);
          }
          v142 = *(_DWORD *)(a2 + 160);
        }
      }
      else
      {
        v143 = *(_QWORD *)(a2 + 152);
      }
      v144 = v59->m128i_i64[0];
      v59->m128i_i64[0] = 0;
      *(_QWORD *)(v143 + 8 * v140) = v144;
      v145 = v251[0];
      *(_DWORD *)(a2 + 160) = v142 + 1;
      if ( v145 )
      {
        v146 = *(void (__fastcall **)(_QWORD *))(*v145 + 8LL);
        if ( v146 == sub_10D4290 )
        {
          v147 = v145[58];
          v148 = v145[57];
          *v145 = &off_2BA8F30;
          if ( v147 != v148 )
          {
            do
            {
              if ( *(_BYTE *)(v148 + 32) && *(_QWORD *)v148 != v148 + 16 )
                operator delete(*(void **)v148);
              v148 += 40;
            }
            while ( v147 != v148 );
            v148 = v145[57];
          }
          if ( v148 )
            operator delete((void *)v148);
          v149 = (void *)v145[54];
          if ( v149 )
            operator delete(v149);
          v150 = (_QWORD *)v145[50];
          if ( v150 != v145 + 52 )
            operator delete(v150);
          v151 = (_QWORD *)v145[32];
          if ( v151 != v145 + 34 )
            free(v151);
          v152 = (void **)v145[29];
          v153 = (void **)v145[28];
          if ( v152 != v153 )
          {
            do
            {
              while ( *v153 != v153 + 2 )
              {
                operator delete(*v153);
                v153 += 4;
                if ( v153 == v152 )
                {
                  v153 = (void **)v145[28];
                  goto LABEL_200;
                }
              }
              v153 += 4;
            }
            while ( v152 != v153 );
            v153 = (void **)v145[28];
          }
LABEL_200:
          if ( v153 )
            operator delete(v153);
          v154 = (void *)v145[25];
          if ( v154 )
            operator delete(v154);
          v155 = (_QWORD *)v145[7];
          if ( v155 != v145 + 9 )
            free(v155);
          operator delete(v145, 0x208u);
        }
        else
        {
          v146(v145);
        }
      }
      if ( v274 != v10 + 42 )
        operator delete(v274);
      if ( v273 != v10 + 36 )
        operator delete(v273);
      v156 = v271;
      v157 = (void **)v270;
      if ( v271 != v270 )
      {
        do
        {
          while ( *v157 != v157 + 2 )
          {
            operator delete(*v157);
            v157 += 4;
            if ( v157 == v156 )
              goto LABEL_214;
          }
          v157 += 4;
        }
        while ( v156 != v157 );
LABEL_214:
        v157 = (void **)v270;
      }
      if ( v157 )
        operator delete(v157);
      v158 = v269;
      v159 = (void **)v268;
      if ( v269 != v268 )
      {
        do
        {
          while ( *v159 != v159 + 2 )
          {
            operator delete(*v159);
            v159 += 4;
            if ( v159 == v158 )
              goto LABEL_220;
          }
          v159 += 4;
        }
        while ( v158 != v159 );
LABEL_220:
        v159 = (void **)v268;
      }
      if ( v159 )
        operator delete(v159);
      v160 = v267;
      v161 = (void **)v266;
      if ( v267 != v266 )
      {
        do
        {
          while ( *v161 != v161 + 2 )
          {
            operator delete(*v161);
            v161 += 4;
            if ( v161 == v160 )
              goto LABEL_226;
          }
          v161 += 4;
        }
        while ( v160 != v161 );
LABEL_226:
        v161 = (void **)v266;
      }
      if ( v161 )
        operator delete(v161);
      v162 = v265;
      v163 = (void **)v264;
      if ( v265 != v264 )
      {
        do
        {
          while ( *v163 != v163 + 2 )
          {
            operator delete(*v163);
            v163 += 4;
            if ( v162 == v163 )
              goto LABEL_232;
          }
          v163 += 4;
        }
        while ( v162 != v163 );
LABEL_232:
        v163 = (void **)v264;
      }
      if ( v163 )
        operator delete(v163);
      v164 = v263;
      v165 = (void **)v262;
      if ( v263 != v262 )
      {
        do
        {
          while ( *v165 != v165 + 2 )
          {
            operator delete(*v165);
            v165 += 4;
            if ( v165 == v164 )
              goto LABEL_238;
          }
          v165 += 4;
        }
        while ( v164 != v165 );
LABEL_238:
        v165 = (void **)v262;
      }
      if ( v165 )
        operator delete(v165);
      if ( v261 )
        operator delete(v261);
      if ( ptr != p_ptr + 2 )
        free(ptr);
      return;
    case 2:
    case 36:
      sub_113F900((__int64)v8, (__int64)&ptr, v9 + 1760);
      v207 = (unsigned int)v255;
      v208 = (unsigned int)v255 + 1LL;
      if ( v208 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v208, 8);
        v207 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v207) = "-m";
      v209 = *(_DWORD *)(v9 + 64);
      LODWORD(v255) = v255 + 1;
      if ( v209 == 7 )
        goto LABEL_367;
      if ( v209 <= 7 )
      {
        if ( v209 != 5 )
          goto LABEL_336;
      }
      else if ( v209 != 15 )
      {
        if ( v209 == 16 )
        {
LABEL_367:
          sub_10DC5D0((__int64)&ptr, (__int64)"armelfb_nbsd_eabihf");
          goto LABEL_59;
        }
LABEL_336:
        sub_10DC5D0((__int64)&ptr, (__int64)"armelfb_nbsd");
        goto LABEL_59;
      }
      sub_10DC5D0((__int64)&ptr, (__int64)"armelfb_nbsd_eabi");
      goto LABEL_59;
    case 18:
    case 19:
      if ( (unsigned __int8)sub_11543B0((__int64)v8, "32") )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-m");
        if ( (_DWORD)v242 == 18 )
          sub_10DC5D0((__int64)&ptr, (__int64)"elf32btsmip");
        else
          sub_10DC5D0((__int64)&ptr, (__int64)"elf32ltsmip");
      }
      else if ( (unsigned __int8)sub_11543B0((__int64)v8, "64") )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-m");
        if ( (_DWORD)v242 == 18 )
          sub_10DC5D0((__int64)&ptr, (__int64)"elf64btsmip");
        else
          sub_10DC5D0((__int64)&ptr, (__int64)"elf64ltsmip");
      }
      goto LABEL_59;
    case 21:
      v210 = (unsigned int)v255;
      v211 = (unsigned int)v255 + 1LL;
      if ( v211 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v211, 8);
        v210 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v210) = "-m";
      LODWORD(v255) = v255 + 1;
      v212 = (unsigned int)v255 + 1LL;
      if ( v212 > HIDWORD(v255) )
        sub_2237220(&ptr, v256, v212, 8);
      *((_QWORD *)ptr + (unsigned int)v255) = "elf32ppc_nbsd";
      LODWORD(v255) = v255 + 1;
      goto LABEL_59;
    case 23:
    case 24:
      v213 = (unsigned int)v255;
      v214 = (unsigned int)v255 + 1LL;
      if ( v214 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v214, 8);
        v213 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v213) = "-m";
      LODWORD(v255) = v255 + 1;
      sub_10DC5D0((__int64)&ptr, (__int64)"elf64ppc");
      goto LABEL_59;
    case 27:
      v192 = (unsigned int)v255;
      v193 = (unsigned int)v255 + 1LL;
      if ( v193 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v193, 8);
        v192 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v192) = "-m";
      LODWORD(v255) = v255 + 1;
      v194 = (unsigned int)v255 + 1LL;
      if ( v194 > HIDWORD(v255) )
        sub_2237220(&ptr, v256, v194, 8);
      *((_QWORD *)ptr + (unsigned int)v255) = "elf32lriscv";
      LODWORD(v255) = v255 + 1;
      goto LABEL_59;
    case 28:
      v195 = (unsigned int)v255;
      v196 = (unsigned int)v255 + 1LL;
      if ( v196 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v196, 8);
        v195 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v195) = "-m";
      LODWORD(v255) = v255 + 1;
      v197 = (unsigned int)v255 + 1LL;
      if ( v197 > HIDWORD(v255) )
        sub_2237220(&ptr, v256, v197, 8);
      *((_QWORD *)ptr + (unsigned int)v255) = "elf64lriscv";
      LODWORD(v255) = v255 + 1;
      goto LABEL_59;
    case 29:
      v198 = (unsigned int)v255;
      v199 = (unsigned int)v255 + 1LL;
      if ( v199 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v199, 8);
        v198 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v198) = "-m";
      LODWORD(v255) = v255 + 1;
      v200 = (unsigned int)v255 + 1LL;
      if ( v200 > HIDWORD(v255) )
        sub_2237220(&ptr, v256, v200, 8);
      *((_QWORD *)ptr + (unsigned int)v255) = "elf32_sparc";
      LODWORD(v255) = v255 + 1;
      goto LABEL_59;
    case 30:
      v201 = (unsigned int)v255;
      v202 = (unsigned int)v255 + 1LL;
      if ( v202 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v202, 8);
        v201 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v201) = "-m";
      LODWORD(v255) = v255 + 1;
      v203 = (unsigned int)v255 + 1LL;
      if ( v203 > HIDWORD(v255) )
        sub_2237220(&ptr, v256, v203, 8);
      *((_QWORD *)ptr + (unsigned int)v255) = "elf64_sparc";
      LODWORD(v255) = v255 + 1;
      goto LABEL_59;
    case 37:
      v189 = (unsigned int)v255;
      v190 = (unsigned int)v255 + 1LL;
      if ( v190 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, v190, 8);
        v189 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v189) = "-m";
      LODWORD(v255) = v255 + 1;
      v191 = (unsigned int)v255;
      if ( (unsigned __int64)(unsigned int)v255 + 1 > HIDWORD(v255) )
      {
        sub_2237220(&ptr, v256, (unsigned int)v255 + 1LL, 8);
        v191 = (unsigned int)v255;
      }
      *((_QWORD *)ptr + v191) = "elf_i386";
      LODWORD(v255) = v255 + 1;
      goto LABEL_59;
    default:
      goto LABEL_59;
  }
}
