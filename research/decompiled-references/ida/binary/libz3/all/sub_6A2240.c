__int64 __fastcall sub_6A2240(__int64 a1, unsigned int a2, __int64 a3, __m128 a4)
{
  _QWORD *v7; // r13
  _QWORD *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rdi
  int v15; // ecx
  __int64 v16; // rsi
  char *v17; // rax
  char *v18; // rdx
  unsigned int v19; // r13d
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rdx
  char *v23; // rdi
  int v24; // edx
  __int64 v25; // rsi
  char *v26; // rcx
  char *v27; // rax
  unsigned int v28; // r13d
  unsigned int v29; // r13d
  __int64 v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx
  void (__fastcall ***v33)(void *); // r13
  char *v34; // rsi
  unsigned __int64 v35; // r13
  _BYTE *v36; // r14
  __int64 *v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rdx
  int v40; // ecx
  _DWORD *v41; // rax
  _DWORD *v42; // rax
  __int64 v43; // r12
  __int64 v44; // r13
  int v45; // eax
  int v46; // r8d
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // r13
  _QWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 *v54; // rcx
  _QWORD *v55; // r15
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // r13
  size_t v59; // rcx
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 *v64; // rcx
  _QWORD *v65; // r15
  _QWORD *v66; // rax
  size_t v67; // rdx
  _QWORD *v68; // r13
  _QWORD *v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rcx
  int v72; // eax
  _QWORD *v73; // rcx
  _DWORD *v74; // rdx
  unsigned int v75; // eax
  unsigned int v76; // eax
  int v77; // eax
  __int64 v78; // rcx
  unsigned int v79; // r8d
  __int64 v80; // rcx
  __m128 *v81; // r13
  size_t v82; // rdx
  int v83; // esi
  __int64 v84; // r8
  __m128 *v85; // rdi
  __m128 *v86; // rax
  __m128 *v87; // rcx
  size_t v88; // r11
  unsigned __int64 v89; // rdx
  __m128 *v90; // rax
  __m128 *v91; // rdx
  unsigned __int64 v92; // rax
  _QWORD *v93; // rax
  int v94; // eax
  __int64 *v95; // rdx
  unsigned int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rdi
  __int64 v99; // rdx
  int v100; // edx
  __int64 *v101; // r12
  __int64 *i; // r15
  int v103; // eax
  const void *v104; // rdi
  void *v105; // rsi
  void (__fastcall ***v106)(_QWORD); // r12
  int v107; // eax
  __int64 v108; // rsi
  int v109; // r9d
  __int64 v110; // rax
  int v111; // esi
  __int64 v112; // r12
  __int64 v113; // rax
  int v114; // eax
  __int64 *v115; // rbx
  unsigned __int64 v116; // r12
  int v117; // r15d
  __int64 v118; // rsi
  unsigned int v120; // ecx
  size_t v121; // rsi
  unsigned int v122; // r15d
  unsigned int *v123; // rax
  __int64 v124; // rdx
  unsigned int v125; // r13d
  size_t v126; // rsi
  unsigned int *v127; // rax
  unsigned int v128; // r13d
  size_t v129; // rsi
  unsigned int *v130; // rax
  __int64 v131; // rsi
  unsigned int v132; // ecx
  size_t v133; // rsi
  __int64 v134; // rax
  int v135; // ecx
  unsigned int v136; // ecx
  size_t v137; // rsi
  __int64 v138; // rax
  int v139; // ecx
  unsigned int v140; // r15d
  size_t v141; // rsi
  unsigned int *v142; // rax
  __int64 v143; // rcx
  size_t v144; // rax
  int v145; // r9d
  __m128 *v146; // rdi
  __m128 *v147; // rdx
  __m128 *v148; // rax
  __m128 *v149; // rdx
  size_t v150; // rsi
  const __m128i *v151; // r15
  __m128i *v152; // r10
  size_t v153; // rdi
  __int64 v154; // rdx
  __m128i *v155; // rsi
  __m128i *v156; // rdx
  __m128i v157; // xmm0
  size_t v158; // rax
  __int64 v159; // rax
  _QWORD *v160; // rax
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  unsigned __int64 v164; // r13
  unsigned __int64 v165; // rdi
  _BYTE *v166; // rax
  _BYTE *v167; // rdi
  unsigned int v168; // esi
  unsigned int v169; // esi
  _BYTE *v170; // r15
  void (__fastcall *v171)(__int64, const char *); // rax
  size_t v172; // rax
  _BYTE *v173; // r12
  size_t v174; // r13
  size_t v175; // rax
  void (__fastcall ***v176)(void *); // r13
  _QWORD *v177; // r12
  _QWORD *v178; // r13
  __int64 v179; // rsi
  __int64 v180; // rdi
  __int64 v181; // rax
  int *v182; // r12
  int *v183; // r13
  __int64 v184; // rax
  int v185; // edi
  char *v186; // rdx
  unsigned int v187; // ecx
  char *v188; // rsi
  __int64 v189; // rcx
  char *v190; // r8
  char *v191; // rax
  int v192; // ecx
  size_t v193; // r9
  __int64 v194; // rax
  __int64 *v195; // rcx
  int v196; // edi
  unsigned int v197; // edx
  __int64 *v198; // rsi
  __int64 v199; // rdx
  __int64 *v200; // r8
  __int64 *v201; // rax
  __int64 v202; // rdx
  _QWORD *v203; // rax
  unsigned int v204; // edx
  __int64 v205; // rcx
  int v206; // edx
  size_t *v207; // rcx
  __int64 *v208; // r15
  __int64 *v209; // r12
  __int64 v210; // rax
  int v211; // eax
  unsigned int v212; // r15d
  unsigned int v213; // ecx
  unsigned int *v214; // rdx
  __int64 v215; // rcx
  _QWORD *v216; // rax
  size_t v217; // rcx
  unsigned __int64 v218; // rdi
  _BYTE *v219; // rax
  size_t v220; // rcx
  _BYTE *v221; // rdi
  __int64 v222; // rax
  char **v223; // r12
  char **v224; // r12
  char **v225; // r12
  char **v226; // r12
  char **exception; // r12
  char **v228; // r12
  char **v229; // r12
  int v230; // [rsp-10h] [rbp-130h]
  int v231; // [rsp-8h] [rbp-128h]
  int v232; // [rsp+0h] [rbp-120h]
  int v233; // [rsp+0h] [rbp-120h]
  int v234; // [rsp+8h] [rbp-118h]
  int v235; // [rsp+8h] [rbp-118h]
  int v236; // [rsp+10h] [rbp-110h]
  int v237; // [rsp+10h] [rbp-110h]
  int v238; // [rsp+18h] [rbp-108h]
  int v239; // [rsp+18h] [rbp-108h]
  _BYTE *v240; // [rsp+20h] [rbp-100h]
  int v241; // [rsp+20h] [rbp-100h]
  __int64 v242; // [rsp+28h] [rbp-F8h]
  char v243; // [rsp+28h] [rbp-F8h]
  int v244; // [rsp+30h] [rbp-F0h]
  int v245; // [rsp+30h] [rbp-F0h]
  int v246[2]; // [rsp+38h] [rbp-E8h]
  int v247; // [rsp+38h] [rbp-E8h]
  int v248; // [rsp+40h] [rbp-E0h]
  __int64 *v249; // [rsp+40h] [rbp-E0h]
  int v250; // [rsp+40h] [rbp-E0h]
  __int64 v251; // [rsp+40h] [rbp-E0h]
  __int64 v252; // [rsp+48h] [rbp-D8h]
  void *v253; // [rsp+48h] [rbp-D8h]
  __int64 v254; // [rsp+50h] [rbp-D0h]
  __int64 v255; // [rsp+58h] [rbp-C8h] BYREF
  size_t n; // [rsp+60h] [rbp-C0h]
  __int64 v257; // [rsp+68h] [rbp-B8h]
  int v258; // [rsp+70h] [rbp-B0h]
  int v259; // [rsp+78h] [rbp-A8h]
  __int64 v260; // [rsp+80h] [rbp-A0h]
  __int64 v261; // [rsp+88h] [rbp-98h]
  void *src; // [rsp+90h] [rbp-90h]
  size_t v263; // [rsp+98h] [rbp-88h]
  __int64 v264; // [rsp+A0h] [rbp-80h]
  void *v265; // [rsp+A8h] [rbp-78h]
  int v266; // [rsp+B0h] [rbp-70h]
  __int64 v267; // [rsp+B8h] [rbp-68h]
  void *ptr; // [rsp+D0h] [rbp-50h] BYREF

  *(_QWORD *)v246 = a1 + 96;
  sub_11C7890(a1 + 96);
  v7 = *(_QWORD **)(a1 + 4592);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a1 + 4584);
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_8;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_8:
    v7 = *(_QWORD **)(a1 + 4592);
    if ( v7 )
LABEL_9:
      *((_DWORD *)v7 - 1) = 0;
  }
  v12 = *(_QWORD *)(a1 + 4536);
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  v13 = *(_QWORD *)(a1 + 4528);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  if ( *(_DWORD *)(a1 + 4516) || *(_DWORD *)(a1 + 4520) )
  {
    v14 = *(char **)(a1 + 4504);
    v15 = 0;
    v16 = *(unsigned int *)(a1 + 4512);
    v17 = v14;
    v18 = &v14[16 * v16];
    if ( v14 == v18 )
      goto LABEL_28;
    do
    {
      while ( *(_QWORD *)v17 )
      {
        *(_QWORD *)v17 = 0;
        v17 += 16;
        if ( v18 == v17 )
          goto LABEL_21;
      }
      v17 += 16;
      ++v15;
    }
    while ( v18 != v17 );
LABEL_21:
    if ( (unsigned int)v16 <= 0x10 || 3 * (int)v16 >= (unsigned int)(4 * v15) )
      goto LABEL_28;
    if ( v14 )
    {
      sub_186B220(v14);
      v19 = *(_DWORD *)(a1 + 4512);
      *(_QWORD *)(a1 + 4504) = 0;
      v19 >>= 1;
      v20 = v19;
      *(_DWORD *)(a1 + 4512) = v19;
      v21 = sub_186B270(16LL * v19);
      if ( !v19 )
      {
LABEL_27:
        *(_QWORD *)(a1 + 4504) = v21;
LABEL_28:
        *(_QWORD *)(a1 + 4516) = 0;
        goto LABEL_29;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 4504) = 0;
      v169 = (unsigned int)v16 >> 1;
      v20 = v169;
      *(_DWORD *)(a1 + 4512) = v169;
      v21 = sub_186B270(16LL * v169);
    }
    v22 = (_QWORD *)v21;
    do
    {
      *v22 = 0;
      v22 += 2;
      *((_DWORD *)v22 - 2) = -2;
    }
    while ( v22 != (_QWORD *)(v21 + 16 * v20) );
    goto LABEL_27;
  }
LABEL_29:
  if ( !*(_DWORD *)(a1 + 4492) && !*(_DWORD *)(a1 + 4496) )
    goto LABEL_48;
  v23 = *(char **)(a1 + 4480);
  v24 = 0;
  v25 = *(unsigned int *)(a1 + 4488);
  v26 = &v23[24 * v25];
  v27 = v23;
  if ( v23 != v26 )
  {
    do
    {
      while ( *((_DWORD *)v27 + 1) )
      {
        *((_DWORD *)v27 + 1) = 0;
        v27 += 24;
        if ( v26 == v27 )
          goto LABEL_36;
      }
      v27 += 24;
      ++v24;
    }
    while ( v26 != v27 );
LABEL_36:
    if ( (unsigned int)v25 > 0x10 && 3 * (int)v25 < (unsigned int)(4 * v24) )
    {
      if ( v23 )
      {
        sub_186B220(v23);
        v28 = *(_DWORD *)(a1 + 4488);
        *(_QWORD *)(a1 + 4480) = 0;
        v29 = v28 >> 1;
        *(_DWORD *)(a1 + 4488) = v29;
        v30 = sub_186B270(24LL * v29);
        if ( !v29 )
        {
LABEL_46:
          *(_QWORD *)(a1 + 4480) = v30;
          goto LABEL_47;
        }
        if ( v29 == 1 )
        {
          v32 = (_QWORD *)v30;
LABEL_45:
          *v32 = 0;
          goto LABEL_46;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 4480) = 0;
        v168 = (unsigned int)v25 >> 1;
        *(_DWORD *)(a1 + 4488) = v168;
        v29 = v168;
        v30 = sub_186B270(24LL * v168);
      }
      v31 = (_QWORD *)v30;
      do
      {
        *v31 = 0;
        v31 += 6;
        *(v31 - 3) = 0;
      }
      while ( (_QWORD *)(v30 + 48LL * (v29 >> 1)) != v31 );
      if ( (v29 & 1) == 0 )
        goto LABEL_46;
      v32 = (_QWORD *)(v30 + 24LL * (v29 & 0x7FFFFFFE));
      goto LABEL_45;
    }
  }
LABEL_47:
  *(_QWORD *)(a1 + 4492) = 0;
LABEL_48:
  v33 = *(void (__fastcall ****)(void *))(a1 + 4696);
  if ( v33 )
  {
    v11 = (*((_DWORD *)v33 + 2))-- == 1;
    if ( v11 )
    {
      (**v33)(v33);
      sub_186B220(v33);
    }
  }
  v34 = *(char **)(a1 + 4712);
  *(_QWORD *)(a1 + 4696) = 0;
  v234 = a1 + 4712;
  v240 = (_BYTE *)(a1 + 4728);
  if ( v34 == (char *)(a1 + 4728) || (v35 = *(_QWORD *)(a1 + 4728), v35 > 0xE) )
  {
    if ( "no reason given" < v34 || &v34[*(_QWORD *)(a1 + 4720)] < "no reason given" )
    {
      qmemcpy(v34, "no reason given", 15);
      v36 = *(_BYTE **)(a1 + 4712);
    }
    else
    {
      std::string::_M_replace_cold();
      v36 = *(_BYTE **)(a1 + 4712);
    }
  }
  else
  {
    v164 = 2 * v35;
    v165 = v164 + 1;
    if ( v164 <= 0xF )
    {
      v164 = 15;
      v165 = 16;
    }
    v166 = (_BYTE *)operator new(v165);
    v167 = *(_BYTE **)(a1 + 4712);
    v36 = v166;
    qmemcpy(v166, "no reason given", 15);
    if ( v240 != v167 )
      operator delete(v167, *(_QWORD *)(a1 + 4728) + 1LL);
    *(_QWORD *)(a1 + 4712) = v36;
    *(_QWORD *)(a1 + 4728) = v164;
  }
  *(_QWORD *)(a1 + 4720) = 15;
  v36[15] = 0;
  v11 = *(_BYTE *)(a1 + 3280) == 0;
  *(_BYTE *)(a1 + 4744) = 0;
  if ( !v11 )
  {
    LODWORD(v257) = -1;
    return (unsigned int)v257;
  }
  v242 = *(_QWORD *)(a1 + 8);
  v260 = v242;
  if ( !a2 )
  {
    v37 = *(__int64 **)(a1 + 4624);
    v107 = *(_DWORD *)(a1 + 4560);
    if ( v37 )
    {
      if ( *((_DWORD *)v37 - 1) != v107 )
      {
        v37 = nullptr;
        goto LABEL_129;
      }
    }
    else if ( v107 )
    {
      goto LABEL_129;
    }
    goto LABEL_268;
  }
  v257 = a3;
  v37 = nullptr;
  v254 = a3 + 8LL * a2;
  do
  {
    v38 = *(_QWORD *)v257;
    v11 = *(_WORD *)(*(_QWORD *)v257 + 4LL) == 0;
    v255 = *(_QWORD *)v257;
    if ( !v11 )
      goto LABEL_64;
    v39 = *(_QWORD *)(v38 + 16);
    v40 = *(_DWORD *)(v38 + 24);
    v41 = *(_DWORD **)(v39 + 24);
    if ( v41 )
    {
      if ( !*v41 && v41[1] == 8 && v40 == 1 )
      {
        v159 = *(_QWORD *)(v38 + 32);
        if ( *(_WORD *)(v159 + 4) || *(_DWORD *)(v159 + 24) )
          goto LABEL_64;
        v42 = *(_DWORD **)(*(_QWORD *)(v159 + 16) + 24LL);
        if ( !v42 )
        {
LABEL_194:
          v47 = v255;
          goto LABEL_108;
        }
      }
      else
      {
        if ( v40 )
          goto LABEL_64;
        v42 = *(_DWORD **)(v39 + 24);
      }
      if ( *v42 == -1 )
        goto LABEL_194;
    }
    else if ( !v40 )
    {
      v47 = v38;
      goto LABEL_108;
    }
LABEL_64:
    v43 = *(_QWORD *)(a1 + 8);
    v44 = *(_QWORD *)(v43 + 840);
    sub_180C5A0(&ptr, "dep");
    v45 = sub_15E3D10(
            v43,
            (int)&ptr,
            (int)&qword_18D6CD0,
            0,
            0,
            v44,
            1,
            v231,
            v232,
            v234,
            v236,
            v238,
            (int)v240,
            v242,
            v244,
            v246[0],
            (int)&ptr,
            v252,
            v254,
            v255,
            n,
            v257,
            v258,
            v259,
            v260,
            v261,
            (int)src,
            v263,
            v264,
            v265,
            v266,
            v267);
    v47 = sub_15DC610(v43, v45, 0, 0, v46, v230, v233, v235, v237, v239, v241, v243, v245, v247, v248, v253);
    v48 = sub_15E1B70(*(_QWORD *)(a1 + 8));
    v49 = v48;
    if ( v48 )
      ++*(_DWORD *)(v48 + 8);
    v50 = *(_QWORD **)(a1 + 4624);
    if ( v50 )
    {
      v51 = *((_DWORD *)v50 - 1);
      if ( v51 == *((_DWORD *)v50 - 2) )
      {
        v140 = (3 * v51 + 1) >> 1;
        v141 = 8 * v140 + 8;
        if ( 8 * v51 + 8 >= (unsigned int)v141 || v51 >= v140 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v249, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v249);
          sub_233E40((__int64)v249);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v142 = (unsigned int *)sub_186B300(v50 - 1, v141);
        v143 = v142[1];
        v50 = v142 + 2;
        *v142 = v140;
        *(_QWORD *)(a1 + 4624) = v142 + 2;
        LODWORD(v142) = v143;
        v54 = &v50[v143];
        v53 = (_DWORD)v142 + 1;
      }
      else
      {
        v52 = v51;
        v53 = v51 + 1;
        v54 = &v50[v52];
      }
    }
    else
    {
      v163 = (_QWORD *)sub_186B270(0x18u);
      v50 = v163 + 1;
      *v163 = 2;
      v53 = 1;
      *(_QWORD *)(a1 + 4624) = v50;
      v54 = v50;
    }
    *v54 = v49;
    v55 = *(_QWORD **)(a1 + 4432);
    *((_DWORD *)v50 - 1) = v53;
    v56 = *(_QWORD *)(a1 + 4448);
    if ( v56 )
      v57 = *(_DWORD *)(v56 - 4);
    else
      v57 = 0;
    LODWORD(v252) = v57;
    n = a1 + 4440;
    v58 = sub_180C100(v55 + 2, 24);
    v59 = n;
    *(_QWORD *)v58 = off_1C52DE0;
    *(_DWORD *)(v58 + 16) = v252;
    v60 = (_QWORD *)*v55;
    *(_QWORD *)(v58 + 8) = v59;
    if ( v60 )
    {
      v61 = *((_DWORD *)v60 - 1);
      if ( v61 == *((_DWORD *)v60 - 2) )
      {
        v136 = (3 * v61 + 1) >> 1;
        v137 = 8 * v136 + 8;
        if ( 8 * v61 + 8 >= (unsigned int)v137 || v61 >= v136 )
        {
          v228 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v249, "Overflow encountered when expanding vector");
          *v228 = (char *)off_1C63128;
          sub_2333C0(v228 + 1, v249);
          sub_233E40((__int64)v249);
          __cxa_throw(v228, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(n) = (3 * v61 + 1) >> 1;
        v138 = sub_186B300(v60 - 1, v137);
        v139 = n;
        v60 = (_QWORD *)(v138 + 8);
        *v55 = v138 + 8;
        *(_DWORD *)v138 = v139;
        LODWORD(v138) = *(_DWORD *)(v138 + 4);
        v64 = &v60[(unsigned int)v138];
        v63 = v138 + 1;
      }
      else
      {
        v62 = v61;
        v63 = v61 + 1;
        v64 = &v60[v62];
      }
    }
    else
    {
      v162 = (_QWORD *)sub_186B270(0x18u);
      v60 = v162 + 1;
      *v162 = 2;
      v63 = 1;
      *v55 = v60;
      v64 = v60;
    }
    *v64 = v58;
    v65 = *(_QWORD **)(a1 + 4432);
    *((_DWORD *)v60 - 1) = v63;
    n = a1 + 4456;
    v66 = (_QWORD *)sub_180C100(v65 + 2, 24);
    v67 = n;
    v68 = v66;
    *v66 = off_1C52E08;
    v66[1] = v67;
    v69 = (_QWORD *)*v65;
    v66[2] = v47;
    if ( v69 )
    {
      v70 = *((_DWORD *)v69 - 1);
      if ( v70 == *((_DWORD *)v69 - 2) )
      {
        v132 = (3 * v70 + 1) >> 1;
        v133 = 8 * v132 + 8;
        if ( 8 * v70 + 8 >= (unsigned int)v133 || v70 >= v132 )
        {
          v223 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v249, "Overflow encountered when expanding vector");
          *v223 = (char *)off_1C63128;
          sub_2333C0(v223 + 1, v249);
          sub_233E40((__int64)v249);
          __cxa_throw(v223, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(n) = (3 * v70 + 1) >> 1;
        v134 = sub_186B300(v69 - 1, v133);
        v135 = n;
        v69 = (_QWORD *)(v134 + 8);
        *v65 = v134 + 8;
        *(_DWORD *)v134 = v135;
        LODWORD(v134) = *(_DWORD *)(v134 + 4);
        v73 = &v69[(unsigned int)v134];
        v72 = v134 + 1;
      }
      else
      {
        v71 = v70;
        v72 = v70 + 1;
        v73 = &v69[v71];
      }
    }
    else
    {
      v161 = (_QWORD *)sub_186B270(0x18u);
      v69 = v161 + 1;
      *v161 = 2;
      v72 = 1;
      *v65 = v69;
      v73 = v69;
    }
    *v73 = v68;
    *((_DWORD *)v69 - 1) = v72;
    if ( v47 )
      ++*(_DWORD *)(v47 + 8);
    v74 = *(_DWORD **)(a1 + 4448);
    if ( v74 )
    {
      v75 = *(v74 - 1);
      if ( v75 == *(v74 - 2) )
      {
        v128 = (3 * v75 + 1) >> 1;
        v129 = 8 * v128 + 8;
        if ( 8 * v75 + 8 >= (unsigned int)v129 || v75 >= v128 )
        {
          v224 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v249, "Overflow encountered when expanding vector");
          *v224 = (char *)off_1C63128;
          sub_2333C0(v224 + 1, v249);
          sub_233E40((__int64)v249);
          __cxa_throw(v224, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v130 = (unsigned int *)sub_186B300(v74 - 2, v129);
        v131 = v130[1];
        v74 = v130 + 2;
        *v130 = v128;
        *(_QWORD *)(a1 + 4448) = v130 + 2;
        *(_QWORD *)&v130[2 * v131 + 2] = v47;
        v130[1] = v131 + 1;
      }
      else
      {
        *(_QWORD *)&v74[2 * v75] = v47;
        *(v74 - 1) = v75 + 1;
      }
    }
    else
    {
      v160 = (_QWORD *)sub_186B270(0x18u);
      v74 = v160 + 1;
      v160[1] = v47;
      *(_QWORD *)(a1 + 4448) = v160 + 1;
      *v160 = 0x100000002LL;
    }
    ++*(_DWORD *)(v255 + 8);
    v76 = *(v74 - 2);
    if ( *(v74 - 1) == v76 )
    {
      v125 = (3 * v76 + 1) >> 1;
      v126 = 8 * v125 + 8;
      if ( 8 * v76 + 8 >= (unsigned int)v126 || v76 >= v125 )
      {
        v225 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v249, "Overflow encountered when expanding vector");
        *v225 = (char *)off_1C63128;
        sub_2333C0(v225 + 1, v249);
        sub_233E40((__int64)v249);
        __cxa_throw(v225, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v127 = (unsigned int *)sub_186B300(v74 - 2, v126);
      v74 = v127 + 2;
      *v127 = v125;
      *(_QWORD *)(a1 + 4448) = v127 + 2;
    }
    v77 = *(v74 - 1);
    *(_QWORD *)&v74[2 * v77] = v255;
    *(v74 - 1) = v77 + 1;
    v78 = *(unsigned int *)(a1 + 4464);
    if ( 3 * (int)v78 < (unsigned int)(4 * (*(_DWORD *)(a1 + 4468) + *(_DWORD *)(a1 + 4472))) )
    {
      v250 = 2 * v78;
      v252 = 16LL * (unsigned int)(2 * v78);
      v144 = sub_186B270(v252);
      v80 = v252;
      v145 = v250;
      v146 = (__m128 *)v144;
      v147 = (__m128 *)v144;
      n = v144;
      v148 = (__m128 *)(v252 + v144);
      if ( v250 )
      {
        if ( (((_BYTE)v148 - (_BYTE)v146) & 0x10) == 0 )
        {
          *v147 = 0;
          v149 = v147 + 2;
          v150 = (size_t)v146;
          v149[-1] = 0;
          if ( v149 == v148 )
          {
LABEL_168:
            n = v150;
            goto LABEL_169;
          }
          do
          {
LABEL_167:
            *v149 = 0;
            v149 += 2;
            v149[-1] = 0;
          }
          while ( v149 != v148 );
          goto LABEL_168;
        }
        v149 = v146 + 1;
        v150 = (size_t)v146;
        *v146 = 0;
        if ( &v146[1] != v148 )
          goto LABEL_167;
      }
LABEL_169:
      v151 = *(const __m128i **)(a1 + 4456);
      v79 = v250 - 1;
      v81 = v148;
      v152 = (__m128i *)&v151[*(unsigned int *)(a1 + 4464)];
      if ( v151 != v152 )
      {
        do
        {
          while ( v151->m128i_i64[0] <= 1uLL )
          {
            if ( v152 == ++v151 )
              goto LABEL_178;
          }
          v153 = n;
          v154 = 16LL * (*(_DWORD *)(v151->m128i_i64[0] + 12) & v79);
          v155 = (__m128i *)(n + v154);
          if ( v252 == v154 )
          {
LABEL_182:
            v153 = n;
            if ( (__m128i *)n == v155 )
            {
LABEL_195:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v156 = (__m128i *)n;
            while ( v156->m128i_i64[0] )
            {
              if ( v155 == ++v156 )
                goto LABEL_195;
            }
          }
          else
          {
            v156 = (__m128i *)(n + v154);
            while ( v156->m128i_i64[0] )
            {
              if ( v148 == (__m128 *)++v156 )
                goto LABEL_182;
            }
          }
          v157 = _mm_loadu_si128(v151++);
          n = v153;
          *v156 = v157;
        }
        while ( v152 != v151 );
LABEL_178:
        v152 = *(__m128i **)(a1 + 4456);
      }
      if ( v152 )
      {
        v244 = v250;
        v251 = v252;
        LODWORD(v252) = v145 - 1;
        sub_186B220(v152);
        v145 = v244;
        v80 = v251;
        v79 = v252;
      }
      v158 = n;
      *(_DWORD *)(a1 + 4464) = v145;
      *(_DWORD *)(a1 + 4472) = 0;
      *(_QWORD *)(a1 + 4456) = v158;
      v82 = v158;
      goto LABEL_85;
    }
    v79 = v78 - 1;
    v80 = 16 * v78;
    n = *(_QWORD *)(a1 + 4456);
    v81 = (__m128 *)(n + v80);
    v82 = n;
LABEL_85:
    v83 = *(_DWORD *)(v47 + 12);
    a4 = _mm_loadh_ps((const double *)&v255);
    v84 = 16LL * (v83 & v79);
    v85 = (__m128 *)(v82 + v84);
    if ( v84 == v80 )
    {
      v87 = nullptr;
      v90 = (__m128 *)v82;
LABEL_94:
      if ( v85 == v90 )
      {
LABEL_102:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v91 = v90;
      while ( 1 )
      {
        while ( 1 )
        {
          v92 = v91->m128_u64[0];
          if ( v91->m128_u64[0] > 1 )
            break;
          if ( !v92 )
          {
            n = (size_t)v91;
            v86 = v91;
            goto LABEL_105;
          }
          v87 = v91++;
          if ( v85 == v91 )
            goto LABEL_102;
        }
        if ( *(_DWORD *)(v92 + 12) == v83 && v47 == v92 )
          break;
        if ( v85 == ++v91 )
          goto LABEL_102;
      }
      v86 = v91;
LABEL_198:
      *v86 = a4;
    }
    else
    {
      v86 = (__m128 *)(v82 + v84);
      v87 = nullptr;
      v88 = v82;
      while ( 1 )
      {
        while ( 1 )
        {
          v89 = v86->m128_u64[0];
          if ( v86->m128_u64[0] <= 1 )
            break;
          if ( *(_DWORD *)(v89 + 12) == v83 && v47 == v89 )
            goto LABEL_198;
          if ( ++v86 == v81 )
          {
LABEL_93:
            n = v88;
            v90 = (__m128 *)v88;
            goto LABEL_94;
          }
        }
        if ( !v89 )
          break;
        v87 = v86++;
        if ( v86 == v81 )
          goto LABEL_93;
      }
LABEL_105:
      if ( v87 )
        --*(_DWORD *)(a1 + 4472);
      else
        v87 = v86;
      *v87 = a4;
      ++*(_DWORD *)(a1 + 4468);
    }
LABEL_108:
    ++*(_DWORD *)(v47 + 8);
    if ( v37 )
    {
      v96 = *((_DWORD *)v37 - 1);
      if ( v96 == *((_DWORD *)v37 - 2) )
      {
        v120 = (3 * v96 + 1) >> 1;
        v121 = 8 * v120 + 8;
        v122 = v120;
        if ( 8 * v96 + 8 >= (unsigned int)v121 || v96 >= v120 )
        {
          v229 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
          *v229 = (char *)off_1C63128;
          sub_2333C0(v229 + 1, &ptr);
          sub_233E40((__int64)&ptr);
          __cxa_throw(v229, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v123 = (unsigned int *)sub_186B300(v37 - 1, v121);
        v124 = v123[1];
        v37 = (__int64 *)(v123 + 2);
        *v123 = v122;
        LODWORD(v123) = v124;
        v95 = &v37[v124];
        v94 = (_DWORD)v123 + 1;
      }
      else
      {
        v97 = v96;
        v94 = v96 + 1;
        v95 = &v37[v97];
      }
    }
    else
    {
      v93 = (_QWORD *)sub_186B270(0x18u);
      v37 = v93 + 1;
      *v93 = 2;
      v94 = 1;
      v95 = v37;
    }
    v257 += 8;
    v98 = v257;
    *v95 = v47;
    *((_DWORD *)v37 - 1) = v94;
  }
  while ( v98 != v254 );
  v99 = *(_QWORD *)(a1 + 4624);
  if ( v99 )
    v100 = *(_DWORD *)(v99 - 4);
  else
    v100 = 0;
  if ( *(_DWORD *)(a1 + 4560) == v100 && !v94 )
    goto LABEL_116;
LABEL_129:
  *(_BYTE *)(a1 + 4744) = 0;
  sub_11C7890(*(_QWORD *)v246);
  v108 = *(_QWORD *)(a1 + 8);
  v257 = a1 + 4648;
  sub_786C50(a1 + 4544, v108, a1 + 4360, v246[0], a1 + 4648, a1 + 4504, 1);
  v110 = *(_QWORD *)(a1 + 4624);
  if ( v110 )
    v111 = *(_DWORD *)(v110 - 4);
  else
    v111 = 0;
  sub_787B60(
    a1 + 4544,
    v111 - *(_DWORD *)(a1 + 4560),
    v110 + 8 * *(_DWORD *)(a1 + 4560),
    v110 + 8 * *(_DWORD *)(a1 + 4560),
    v231,
    v109);
  v112 = *(_QWORD *)(a1 + 4704);
  if ( !v112 )
  {
    v112 = sub_186B270(0x68u);
    sub_781140(v112, *(_QWORD *)(a1 + 8));
    v176 = *(void (__fastcall ****)(void *))(a1 + 4704);
    ++*(_DWORD *)(v112 + 8);
    if ( v176 )
    {
      v11 = (*((_DWORD *)v176 + 2))-- == 1;
      if ( v11 )
      {
        (**v176)(v176);
        sub_186B220(v176);
      }
    }
    *(_QWORD *)(a1 + 4704) = v112;
  }
  sub_7826B0(v112, *(_QWORD *)v246, v257);
  v113 = *(_QWORD *)(a1 + 4624);
  if ( v113 )
    v114 = *(_DWORD *)(v113 - 4);
  else
    v114 = 0;
  *(_DWORD *)(a1 + 4560) = v114;
  if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
  {
    if ( v37 )
    {
      v208 = &v37[*((unsigned int *)v37 - 1)];
      if ( v208 != v37 )
      {
        v209 = v37;
        do
          sub_6A00E0(a1, *v209++);
        while ( v208 != v209 );
      }
LABEL_116:
      v101 = *(__int64 **)(a1 + 4576);
      if ( v101 )
      {
        for ( i = &v101[*((unsigned int *)v101 - 1)]; i != v101; ++v101 )
          sub_6A00E0(a1, *v101);
      }
      v103 = sub_11CC760(v246[0]);
      LODWORD(v257) = v103;
      if ( v103 != -1 )
      {
        if ( v103 == 1 )
        {
          sub_69D240(a1, *(double *)a4.m128_u64);
LABEL_214:
          LODWORD(v257) = 1;
          goto LABEL_136;
        }
        v104 = *(const void **)(a1 + 624);
        if ( v104 )
        {
          v105 = __dynamic_cast(
                   v104,
                   (const struct __class_type_info *)&`typeinfo for'sat::extension,
                   (const struct __class_type_info *)&`typeinfo for'euf::solver,
                   0);
          if ( v105 )
          {
            sub_791ED0(&ptr, v105);
            v106 = (void (__fastcall ***)(_QWORD))ptr;
            if ( ptr )
            {
              v11 = (*((_DWORD *)ptr + 4))-- == 1;
              if ( v11 )
              {
                (**v106)(v106);
                sub_186B220(v106);
              }
              goto LABEL_214;
            }
          }
        }
        v170 = *(_BYTE **)(a1 + 3896);
        v171 = *(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a1 + 56LL);
        if ( v171 != sub_69B6E0 )
        {
          v171(a1, *(const char **)(a1 + 3896));
          goto LABEL_136;
        }
        v172 = strlen(*(const char **)(a1 + 3896));
        v173 = *(_BYTE **)(a1 + 4712);
        v174 = v172;
        if ( v240 == v173 )
        {
          if ( v172 <= 0xF )
            goto LABEL_220;
          if ( v172 > 0x1D )
          {
            v173 = (_BYTE *)operator new(v172 + 1);
            v220 = v174;
          }
          else
          {
            v173 = (_BYTE *)operator new(0x1Fu);
            v220 = 30;
          }
        }
        else
        {
          v175 = *(_QWORD *)(a1 + 4728);
          if ( v175 >= v174 )
          {
LABEL_220:
            if ( v170 >= v173 && &v173[*(_QWORD *)(a1 + 4720)] >= v170 )
            {
              std::string::_M_replace_cold();
            }
            else
            {
              if ( !v174 )
              {
LABEL_225:
                *(_QWORD *)(a1 + 4720) = v174;
                v173[v174] = 0;
                goto LABEL_136;
              }
              if ( v174 != 1 )
              {
                memcpy(*(void **)(a1 + 4712), v170, v174);
                v173 = *(_BYTE **)(a1 + 4712);
                goto LABEL_225;
              }
              *v173 = *v170;
            }
            v173 = *(_BYTE **)(a1 + 4712);
            goto LABEL_225;
          }
          v217 = 2 * v175;
          if ( v174 < 2 * v175 )
          {
            v218 = v217 + 1;
            if ( (v175 & 0x4000000000000000LL) != 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v218 = v174 + 1;
            v217 = v174;
          }
          n = v217;
          v219 = (_BYTE *)operator new(v218);
          v220 = n;
          v173 = v219;
          if ( v174 == 1 )
          {
            *v219 = *v170;
            goto LABEL_306;
          }
        }
        n = v220;
        memcpy(v173, v170, v174);
        v220 = n;
LABEL_306:
        v221 = *(_BYTE **)(a1 + 4712);
        if ( v240 != v221 )
        {
          v222 = *(_QWORD *)(a1 + 4728);
          n = v220;
          operator delete(v221, v222 + 1);
          v220 = n;
        }
        *(_QWORD *)(a1 + 4712) = v173;
        *(_QWORD *)(a1 + 4728) = v220;
        goto LABEL_225;
      }
      v177 = *(_QWORD **)(a1 + 4592);
      if ( v177 )
      {
        v178 = &v177[*((unsigned int *)v177 - 1)];
        if ( v177 >= v178 )
          goto LABEL_242;
        do
        {
          v179 = *v177;
          if ( *v177 )
          {
            v180 = *(_QWORD *)(a1 + 4584);
            v11 = (*(_DWORD *)(v179 + 8))-- == 1;
            if ( v11 )
              sub_15D7BC0(v180, v179);
          }
          ++v177;
        }
        while ( v177 < v178 );
        v177 = *(_QWORD **)(a1 + 4592);
        if ( v177 )
LABEL_242:
          *((_DWORD *)v177 - 1) = 0;
      }
      v181 = *(_QWORD *)(a1 + 4528);
      if ( !v181 )
        goto LABEL_136;
      if ( !*(_DWORD *)(v181 - 4) )
        goto LABEL_136;
      v182 = *(int **)(a1 + 4064);
      if ( !v182 )
        goto LABEL_136;
      v183 = &v182[*(v182 - 1)];
      if ( v182 == v183 )
        goto LABEL_136;
LABEL_247:
      v184 = *(unsigned int *)(a1 + 4488);
      v185 = *v182;
      v186 = *(char **)(a1 + 4480);
      v187 = v184 - 1;
      v184 *= 24;
      v188 = &v186[v184];
      v189 = 24LL * (*v182 & v187);
      v190 = &v186[v189];
      if ( v189 == v184 )
      {
LABEL_283:
        while ( v190 != v186 )
        {
          v211 = *((_DWORD *)v186 + 1);
          if ( v211 == 2 )
          {
            if ( v185 == *(_DWORD *)v186 && v185 == *((_DWORD *)v186 + 2) )
            {
              v191 = v186;
              goto LABEL_254;
            }
          }
          else if ( !v211 )
          {
            break;
          }
          v186 += 24;
        }
LABEL_319:
        BUG();
      }
      v191 = &v186[v189];
      while ( 1 )
      {
        v192 = *((_DWORD *)v191 + 1);
        if ( v192 == 2 )
        {
          if ( v185 == *(_DWORD *)v191 && v185 == *((_DWORD *)v191 + 2) )
          {
LABEL_254:
            v193 = *((_QWORD *)v191 + 2);
            v194 = *(unsigned int *)(a1 + 4464);
            v195 = *(__int64 **)(a1 + 4456);
            v196 = *(_DWORD *)(v193 + 12);
            v197 = v194 - 1;
            v194 *= 16;
            v198 = (__int64 *)((char *)v195 + v194);
            v199 = 16LL * (v196 & v197);
            v200 = &v195[(unsigned __int64)v199 / 8];
            if ( v199 == v194 )
            {
LABEL_275:
              while ( v200 != v195 )
              {
                v210 = *v195;
                if ( (unsigned __int64)*v195 > 1 )
                {
                  if ( *(_DWORD *)(v210 + 12) == v196 && v193 == v210 )
                  {
                    v201 = v195;
                    goto LABEL_294;
                  }
                }
                else if ( !v210 )
                {
                  break;
                }
                v195 += 2;
              }
LABEL_261:
              ++*(_DWORD *)(v193 + 8);
              goto LABEL_262;
            }
            v201 = &v195[(unsigned __int64)v199 / 8];
            while ( 2 )
            {
              v202 = *v201;
              if ( (unsigned __int64)*v201 <= 1 )
              {
                if ( !v202 )
                  goto LABEL_261;
                goto LABEL_258;
              }
              if ( *(_DWORD *)(v202 + 12) != v196 || v193 != v202 )
              {
LABEL_258:
                v201 += 2;
                if ( v198 == v201 )
                  goto LABEL_275;
                continue;
              }
              break;
            }
LABEL_294:
            v193 = v201[1];
            if ( v193 )
              goto LABEL_261;
LABEL_262:
            v203 = *(_QWORD **)(a1 + 4592);
            if ( v203 )
            {
              v204 = *((_DWORD *)v203 - 1);
              if ( v204 == *((_DWORD *)v203 - 2) )
              {
                v212 = (3 * v204 + 1) >> 1;
                v213 = 8 * v212 + 8;
                if ( 8 * v204 + 8 >= v213 || v204 >= v212 )
                {
                  v226 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
                  *v226 = (char *)off_1C63128;
                  sub_2333C0(v226 + 1, &ptr);
                  sub_233E40((__int64)&ptr);
                  __cxa_throw(v226, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                n = v193;
                v214 = (unsigned int *)sub_186B300(v203 - 1, v213);
                v203 = v214 + 2;
                v193 = n;
                v215 = v214[1];
                *v214 = v212;
                *(_QWORD *)(a1 + 4592) = v214 + 2;
                LODWORD(v214) = v215;
                v207 = &v203[v215];
                v206 = (_DWORD)v214 + 1;
              }
              else
              {
                v205 = v204;
                v206 = v204 + 1;
                v207 = &v203[v205];
              }
            }
            else
            {
              n = v193;
              v216 = (_QWORD *)sub_186B270(0x18u);
              *v216 = 2;
              v203 = v216 + 1;
              v206 = 1;
              v193 = n;
              *(_QWORD *)(a1 + 4592) = v203;
              v207 = v203;
            }
            ++v182;
            *v207 = v193;
            *((_DWORD *)v203 - 1) = v206;
            if ( v183 == v182 )
              goto LABEL_136;
            goto LABEL_247;
          }
        }
        else if ( !v192 )
        {
          goto LABEL_319;
        }
        v191 += 24;
        if ( v188 == v191 )
          goto LABEL_283;
      }
    }
LABEL_268:
    v37 = nullptr;
    goto LABEL_116;
  }
  LODWORD(v257) = 0;
LABEL_136:
  if ( v37 )
  {
    v115 = v37;
    v116 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
    if ( (unsigned __int64)v37 < v116 )
    {
      v117 = v257;
      do
      {
        while ( 1 )
        {
          v118 = *v115;
          if ( *v115 )
          {
            v11 = (*(_DWORD *)(v118 + 8))-- == 1;
            if ( v11 )
              break;
          }
          if ( (unsigned __int64)++v115 >= v116 )
            goto LABEL_143;
        }
        ++v115;
        sub_15D7BC0(v242, v118);
      }
      while ( (unsigned __int64)v115 < v116 );
LABEL_143:
      LODWORD(v257) = v117;
    }
    sub_186B220(v37 - 1);
  }
  return (unsigned int)v257;
}

