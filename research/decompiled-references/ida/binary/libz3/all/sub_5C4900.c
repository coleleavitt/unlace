__int64 __fastcall sub_5C4900(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rbx
  int v4; // r14d
  char v5; // r9
  __int64 *v6; // r13
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 *v25; // rcx
  int v26; // edi
  unsigned int v27; // r11d
  __int64 *v28; // rsi
  __int64 v29; // r11
  __int64 *v30; // r8
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // edi
  unsigned int v38; // edx
  __int64 *v39; // rsi
  __int64 v40; // rdx
  __int64 *v41; // r8
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 *v44; // r13
  __int64 v45; // rax
  __int64 *v46; // rbp
  __int64 *v47; // rbx
  __int64 *v48; // r12
  __int64 v49; // rsi
  __int64 v50; // rdi
  bool v51; // zf
  __int64 *v52; // r13
  __int64 v53; // rax
  __int64 v54; // rbp
  __int64 *v55; // rbx
  __int64 *v56; // r12
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 *v59; // rbx
  unsigned __int64 v60; // rbp
  __int64 v61; // rsi
  unsigned __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v67; // rax
  _QWORD *v68; // rdx
  unsigned int v69; // ecx
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rax
  __int64 v73; // r13
  _QWORD *v74; // rax
  _QWORD *v75; // rbp
  __int64 v76; // rax
  __int64 *v77; // rax
  __int64 *v78; // rsi
  unsigned int v79; // eax
  __int64 v80; // rdx
  int v81; // eax
  __int64 **v82; // rdx
  __int64 v83; // r15
  __int64 *v84; // rcx
  __int64 v85; // r9
  __int64 v86; // rax
  int v87; // edi
  unsigned int v88; // edx
  __int64 *v89; // rsi
  __int64 v90; // rdx
  __int64 *v91; // r8
  __int64 *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rax
  void *v96; // r8
  __int64 *v97; // rcx
  __int64 v98; // r9
  __int64 v99; // rax
  int v100; // esi
  unsigned int v101; // edx
  __int64 *v102; // r11
  __int64 v103; // rdx
  __int64 *v104; // rdi
  __int64 *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rsi
  __int64 v108; // r14
  unsigned int v109; // eax
  int v110; // edx
  int v111; // ecx
  int v112; // r8d
  int v113; // r9d
  __int64 *v114; // rdi
  unsigned int j; // r15d
  __int64 *v116; // rsi
  unsigned int v117; // eax
  __int64 v118; // rdx
  int v119; // eax
  __int64 *v120; // rdx
  __int64 v121; // r15
  __int64 *v122; // r15
  __int64 v123; // rax
  unsigned __int64 v124; // rbx
  __int64 v125; // rsi
  __int64 v126; // rdi
  __int64 v127; // rax
  unsigned int v128; // edx
  __int64 v129; // rax
  __int64 *v130; // r15
  _DWORD *v131; // r8
  __int64 v132; // r9
  __int64 *v133; // rdx
  __int64 v134; // rcx
  __int64 *v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 *v138; // rax
  __int64 *v139; // rbp
  __int64 *v140; // r15
  __int64 *v141; // rbx
  __int64 *v142; // r12
  __int64 *v143; // r13
  __int64 v144; // rsi
  __int64 v145; // rdi
  unsigned int v146; // edx
  unsigned int v147; // ecx
  unsigned int *v148; // rax
  unsigned int v149; // edi
  unsigned int v150; // edx
  __int64 v151; // rax
  __int64 *v152; // r15
  _DWORD *v153; // r8
  __int64 v154; // r9
  __int64 *v155; // rdx
  __int64 v156; // rcx
  int v157; // r11d
  __int64 *v158; // rdi
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // r9
  __int64 *v162; // rbp
  __int64 *v163; // rax
  __int64 *v164; // rbx
  __int64 *v165; // r15
  __int64 *v166; // r12
  __int64 *v167; // r13
  __int64 v168; // rsi
  __int64 v169; // rdi
  __int64 v170; // rax
  _QWORD *v171; // rax
  unsigned int v172; // edx
  __int64 v173; // rcx
  int v174; // edx
  __int64 *v175; // rcx
  __int64 v176; // rdi
  _QWORD *v177; // rax
  unsigned int v178; // edx
  __int64 v179; // rcx
  int v180; // edx
  __int64 *v181; // rcx
  __int64 v182; // rax
  __m128i *v183; // rcx
  __m128i *v184; // r8
  int v185; // r9d
  __m128i v186; // xmm0
  __int64 v187; // rax
  __m128i *v188; // rdi
  __m128i *v189; // rax
  __m128i *v190; // rsi
  __int64 v191; // rdx
  __int64 v192; // rax
  _QWORD *v193; // rsi
  _QWORD *v194; // rsi
  __m128i *v195; // rax
  __m128i *v196; // r11
  const __m128i *v197; // r9
  __m128i *v198; // rax
  __int64 v199; // rdx
  __m128i *v200; // rsi
  __m128i *v201; // rdx
  unsigned int v202; // ecx
  size_t v203; // rsi
  unsigned int *v204; // rdx
  unsigned int v205; // ecx
  size_t v206; // rsi
  unsigned int *v207; // rdx
  int v208; // edx
  __int64 v209; // rax
  __int64 *v210; // rdx
  unsigned int v211; // ecx
  __int64 *v212; // r8
  __int64 v213; // rcx
  __int64 *v214; // rsi
  __int64 *v215; // rcx
  __int64 v216; // rdi
  int v217; // eax
  __int64 v218; // rax
  __m128i *v219; // rcx
  __m128i *v220; // r8
  int v221; // r9d
  __int64 v222; // rax
  __m128i *v223; // rdi
  __m128i *v224; // rax
  __m128i *v225; // rsi
  __int64 v226; // rdx
  __int64 v227; // rax
  __int64 v228; // rdi
  int v229; // eax
  __m128i *v230; // rax
  __m128i *v231; // rcx
  const __m128i *v232; // r8
  __m128i *v233; // rax
  unsigned int v234; // eax
  __int64 v235; // rax
  __m128i *v236; // rdx
  __m128i *v237; // rax
  __m128i *v238; // rax
  __m128i *v239; // r11
  const __m128i *v240; // r9
  __m128i *v241; // rax
  __int64 v242; // rdx
  __m128i *v243; // rsi
  __m128i *v244; // rdx
  _QWORD *v245; // rax
  _QWORD *v246; // rax
  char **v247; // r12
  char **v248; // r12
  char **v249; // r12
  char **v250; // r12
  char **v251; // r12
  char **exception; // rbp
  __int64 v253; // [rsp+0h] [rbp-188h]
  __int64 v254; // [rsp+8h] [rbp-180h]
  _QWORD *v255; // [rsp+10h] [rbp-178h]
  __int64 v256; // [rsp+10h] [rbp-178h]
  unsigned int v257; // [rsp+18h] [rbp-170h]
  __int64 *v258; // [rsp+18h] [rbp-170h]
  void *v259; // [rsp+18h] [rbp-170h]
  size_t v260; // [rsp+18h] [rbp-170h]
  unsigned int v261; // [rsp+18h] [rbp-170h]
  unsigned int v262; // [rsp+18h] [rbp-170h]
  int v263; // [rsp+18h] [rbp-170h]
  int v264; // [rsp+18h] [rbp-170h]
  size_t v265; // [rsp+18h] [rbp-170h]
  __int64 v266; // [rsp+20h] [rbp-168h]
  unsigned __int64 v267; // [rsp+20h] [rbp-168h]
  unsigned int v268; // [rsp+20h] [rbp-168h]
  __m128i *v269; // [rsp+20h] [rbp-168h]
  __m128i *v270; // [rsp+20h] [rbp-168h]
  int *v271; // [rsp+28h] [rbp-160h]
  __int64 *v272; // [rsp+28h] [rbp-160h]
  unsigned int v273; // [rsp+28h] [rbp-160h]
  __int64 *v274; // [rsp+28h] [rbp-160h]
  unsigned int v275; // [rsp+28h] [rbp-160h]
  __int64 *v276; // [rsp+28h] [rbp-160h]
  size_t v277; // [rsp+28h] [rbp-160h]
  int v278[2]; // [rsp+30h] [rbp-158h]
  __int64 *v279; // [rsp+38h] [rbp-150h]
  unsigned int v280; // [rsp+38h] [rbp-150h]
  __int64 *v281; // [rsp+38h] [rbp-150h]
  int v282[2]; // [rsp+38h] [rbp-150h]
  int v283[2]; // [rsp+38h] [rbp-150h]
  int v284[2]; // [rsp+38h] [rbp-150h]
  __int64 v285; // [rsp+50h] [rbp-138h]
  _DWORD *v286; // [rsp+50h] [rbp-138h]
  __m128i *v287; // [rsp+50h] [rbp-138h]
  __int64 *v288; // [rsp+50h] [rbp-138h]
  __int64 *v289; // [rsp+50h] [rbp-138h]
  __int64 *v290; // [rsp+58h] [rbp-130h]
  unsigned int v291; // [rsp+58h] [rbp-130h]
  __int64 *v292; // [rsp+58h] [rbp-130h]
  __m128i *v293; // [rsp+58h] [rbp-130h]
  _QWORD *v294; // [rsp+60h] [rbp-128h]
  const __m128i *v295; // [rsp+60h] [rbp-128h]
  __int64 v296; // [rsp+68h] [rbp-120h]
  __int64 *v297; // [rsp+68h] [rbp-120h]
  __int64 v298; // [rsp+70h] [rbp-118h]
  _DWORD *v299; // [rsp+70h] [rbp-118h]
  __int64 v300; // [rsp+78h] [rbp-110h]
  _QWORD *v301; // [rsp+80h] [rbp-108h]
  __int64 v302; // [rsp+88h] [rbp-100h]
  char v303; // [rsp+90h] [rbp-F8h]
  __int64 v304; // [rsp+98h] [rbp-F0h] BYREF
  int v305[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 *v306; // [rsp+A8h] [rbp-E0h] BYREF
  int v307[2]; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v308; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v309; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v310; // [rsp+C8h] [rbp-C0h]
  __int64 v311; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 *v312; // [rsp+D8h] [rbp-B0h]
  __int64 v313; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v314; // [rsp+E8h] [rbp-A0h]
  __int64 v315; // [rsp+F0h] [rbp-98h] BYREF
  unsigned __int64 v316; // [rsp+F8h] [rbp-90h]
  __int64 v317; // [rsp+100h] [rbp-88h] BYREF
  __int64 v318; // [rsp+108h] [rbp-80h]
  char v319[8]; // [rsp+110h] [rbp-78h] BYREF
  void *v320; // [rsp+118h] [rbp-70h]
  void *ptr; // [rsp+120h] [rbp-68h]
  __int64 v322[11]; // [rsp+130h] [rbp-58h] BYREF

  v2 = a1;
  v3 = (__int64 *)a2;
  sub_1624F90(v319, *(_QWORD *)(a1 + 24));
  v308 = *(_QWORD *)(a1 + 24);
  v304 = 0;
  *(_QWORD *)v307 = 0;
  v309 = 0;
  v310 = v308;
  v311 = v308;
  v312 = nullptr;
  *(_QWORD *)v305 = 0;
  v306 = nullptr;
  v279 = &v304;
  HIBYTE(v254) = sub_15E9C00(
                   v308,
                   a2,
                   (unsigned int)&v311,
                   (unsigned int)&v309,
                   (unsigned int)&v304,
                   (unsigned int)&v306);
  if ( !HIBYTE(v254) )
    goto LABEL_34;
  v4 = *(_DWORD *)(a2 + 24);
  LODWORD(v255) = v4 - 1;
  if ( v4 == 1 )
    goto LABEL_17;
  v5 = HIBYTE(v254);
  v6 = (__int64 *)(a2 + 32);
  v7 = a2 + 8LL * (unsigned int)(v4 - 2) + 40;
  do
  {
    v8 = *v6;
    v9 = *(unsigned int *)(v2 + 160);
    v10 = *(__int64 **)(v2 + 152);
    v11 = *(_DWORD *)(*v6 + 12);
    v12 = v9 - 1;
    v9 *= 16;
    v13 = (__int64 *)((char *)v10 + v9);
    v14 = 16LL * (v11 & v12);
    v15 = &v10[(unsigned __int64)v14 / 8];
    if ( v14 != v9 )
    {
      for ( i = &v10[(unsigned __int64)v14 / 8]; v13 != i; i += 2 )
      {
        v17 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v17 + 12) == v11 && v8 == v17 )
            goto LABEL_15;
        }
        else if ( !v17 )
        {
          goto LABEL_11;
        }
      }
    }
    if ( v10 == v15 )
    {
LABEL_11:
      v18 = *(_QWORD **)(v2 + 144);
      if ( !v18 )
        goto LABEL_94;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v67 = *v10;
      if ( (unsigned __int64)*v10 <= 1 )
        break;
      if ( *(_DWORD *)(v67 + 12) == v11 && v8 == v67 )
        goto LABEL_15;
LABEL_90:
      v10 += 2;
      if ( v15 == v10 )
        goto LABEL_11;
    }
    if ( v67 )
      goto LABEL_90;
    v18 = *(_QWORD **)(v2 + 144);
    if ( !v18 )
    {
LABEL_94:
      v68 = (_QWORD *)sub_186B270(0x18u);
      *v68 = 2;
      v21 = 1;
      v18 = v68 + 1;
      *(_QWORD *)(v2 + 144) = v18;
      v22 = v18;
      goto LABEL_14;
    }
LABEL_12:
    v19 = *((_DWORD *)v18 - 1);
    if ( v19 == *((_DWORD *)v18 - 2) )
    {
      v69 = (3 * v19 + 1) >> 1;
      v70 = 8 * v69 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v70 || v19 >= v69 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v322, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v322);
        sub_233E40((__int64)v322);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v257 = (3 * v19 + 1) >> 1;
      v71 = (unsigned int *)sub_186B300(v18 - 1, v70);
      v18 = v71 + 2;
      *(_QWORD *)(v2 + 144) = v71 + 2;
      *v71 = v257;
      LODWORD(v71) = v71[1];
      v22 = &v18[(unsigned int)v71];
      v21 = (_DWORD)v71 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v18[v20];
    }
LABEL_14:
    *v22 = v8;
    v5 = 0;
    *((_DWORD *)v18 - 1) = v21;
LABEL_15:
    ++v6;
  }
  while ( (__int64 *)v7 != v6 );
  if ( !v5 )
    goto LABEL_34;
LABEL_17:
  v23 = v3[4];
  v24 = *(unsigned int *)(v2 + 160);
  v25 = *(__int64 **)(v2 + 152);
  v26 = *(_DWORD *)(v23 + 12);
  v27 = v24 - 1;
  v24 *= 16;
  v28 = (__int64 *)((char *)v25 + v24);
  v29 = 16LL * (v26 & v27);
  v30 = &v25[(unsigned __int64)v29 / 8];
  v31 = &v25[(unsigned __int64)v29 / 8];
  if ( v29 == v24 )
  {
LABEL_98:
    if ( v25 == v30 )
      goto LABEL_24;
    while ( 1 )
    {
      v72 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
      {
        if ( *(_DWORD *)(v72 + 12) == v26 && v23 == v72 )
        {
          v31 = v25;
          goto LABEL_26;
        }
      }
      else if ( !v72 )
      {
        goto LABEL_24;
      }
      v25 += 2;
      if ( v30 == v25 )
        goto LABEL_24;
    }
  }
  while ( 2 )
  {
    v32 = *v31;
    if ( (unsigned __int64)*v31 <= 1 )
    {
      if ( !v32 )
        goto LABEL_24;
LABEL_21:
      v31 += 2;
      if ( v28 == v31 )
        goto LABEL_98;
      continue;
    }
    break;
  }
  if ( *(_DWORD *)(v32 + 12) != v26 || v23 != v32 )
    goto LABEL_21;
LABEL_26:
  v33 = v31[1];
  v34 = *(__int64 **)(v2 + 120);
  v35 = *(_QWORD *)(v23 + 8LL * (unsigned int)(*(_DWORD *)(v23 + 24) - 1) + 32);
  v36 = *(unsigned int *)(v2 + 128);
  v37 = *(_DWORD *)(v35 + 12);
  v38 = v36 - 1;
  v36 *= 16;
  v39 = (__int64 *)((char *)v34 + v36);
  v40 = 16LL * (v37 & v38);
  v41 = &v34[(unsigned __int64)v40 / 8];
  if ( v40 == v36 )
  {
LABEL_130:
    while ( v41 != v34 )
    {
      v95 = *v34;
      if ( (unsigned __int64)*v34 > 1 )
      {
        if ( *(_DWORD *)(v95 + 12) == v37 && v35 == v95 )
        {
          v42 = v34;
          goto LABEL_107;
        }
      }
      else if ( !v95 )
      {
        break;
      }
      v34 += 2;
    }
LABEL_33:
    HIBYTE(v254) = 0;
    goto LABEL_34;
  }
  v42 = &v34[(unsigned __int64)v40 / 8];
  while ( 2 )
  {
    v43 = *v42;
    if ( (unsigned __int64)*v42 <= 1 )
    {
      if ( !v43 )
        goto LABEL_33;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(v43 + 12) != v37 || v35 != v43 )
    {
LABEL_30:
      v42 += 2;
      if ( v39 == v42 )
        goto LABEL_130;
      continue;
    }
    break;
  }
LABEL_107:
  v73 = v42[1];
  v74 = (_QWORD *)sub_186B270(0x18u);
  v74[1] = v33;
  v75 = v74 + 1;
  v313 = 0;
  *v74 = 0x100000002LL;
  v76 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)v278 = v76;
  v314 = v76;
  if ( v73 )
    sub_62A000(v76, v73);
  v77 = *(__int64 **)(v2 + 24);
  v78 = *(__int64 **)v305;
  v318 = 0;
  v258 = v77;
  if ( *(_QWORD *)v305 )
  {
    v79 = *(_DWORD *)(*(_QWORD *)v305 - 4LL);
    if ( v79 == *(_DWORD *)(*(_QWORD *)v305 - 8LL) )
    {
      v149 = (3 * v79 + 1) >> 1;
      LODWORD(v266) = v149;
      v150 = 16 * v149 + 8;
      if ( 16 * v79 + 8 >= v150 || v79 >= v149 )
      {
        v247 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v322, "Overflow encountered when expanding vector");
        *v247 = (char *)off_1C63128;
        sub_2333C0(v247 + 1, v322);
        sub_233E40((__int64)v322);
        __cxa_throw(v247, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v151 = sub_186B270(v150);
      v152 = *(__int64 **)v305;
      v153 = (_DWORD *)v151;
      v78 = (__int64 *)(v151 + 8);
      if ( *(_QWORD *)v305 )
      {
        v154 = *(unsigned int *)(*(_QWORD *)v305 - 4LL);
        v155 = *(__int64 **)v305;
        v156 = v151 + 8;
        *(_DWORD *)(v151 + 4) = v154;
        v157 = v154;
        v158 = &v152[2 * v154];
        if ( v158 != v152 )
        {
          do
          {
            v159 = *v155;
            v155 += 2;
            v156 += 16;
            *(_QWORD *)(v156 - 16) = v159;
            v160 = *(v155 - 1);
            *(v155 - 1) = 0;
            *(_QWORD *)(v156 - 8) = v160;
          }
          while ( v158 != v155 );
        }
        v161 = 2 * v154;
        if ( v157 )
        {
          v272 = v78;
          v286 = v153;
          v290 = (__int64 *)v73;
          v296 = v2;
          v294 = v75;
          v162 = &v152[v161];
          v163 = v3;
          v164 = v152;
          v165 = v163;
          do
          {
            v166 = (__int64 *)v164[1];
            if ( v166 )
            {
              v167 = &v166[*((unsigned int *)v166 - 1)];
              if ( v166 >= v167 )
                goto LABEL_230;
              do
              {
                while ( 1 )
                {
                  v168 = *v166;
                  if ( *v166 )
                  {
                    v169 = *v164;
                    v51 = (*(_DWORD *)(v168 + 8))-- == 1;
                    if ( v51 )
                      break;
                  }
                  if ( ++v166 >= v167 )
                    goto LABEL_229;
                }
                sub_15D7BC0(v169, v168);
                ++v166;
              }
              while ( v166 < v167 );
LABEL_229:
              v166 = (__int64 *)v164[1];
              if ( v166 )
LABEL_230:
                sub_186B220(v166 - 1);
            }
            v164 += 2;
          }
          while ( v164 != v162 );
          v3 = v165;
          v78 = v272;
          v153 = v286;
          v73 = (__int64)v290;
          v75 = v294;
          v2 = v296;
          v152 = *(__int64 **)v305;
        }
        v285 = (__int64)v153;
        LODWORD(v271) = (_DWORD)v78;
        sub_186B220(v152 - 1);
        v153 = (_DWORD *)v285;
        v82 = (__int64 **)&v78[2 * *(unsigned int *)(v285 + 4)];
        v81 = *(_DWORD *)(v285 + 4) + 1;
      }
      else
      {
        *(_DWORD *)(v151 + 4) = 0;
        v82 = (__int64 **)(v151 + 8);
        v81 = 1;
      }
      *(_QWORD *)v305 = v78;
      *v153 = v266;
    }
    else
    {
      v80 = v79;
      v81 = v79 + 1;
      v82 = (__int64 **)(*(_QWORD *)v305 + 16 * v80);
    }
  }
  else
  {
    v194 = (_QWORD *)sub_186B270(0x28u);
    *v194 = 2;
    v81 = 1;
    v78 = v194 + 1;
    *(_QWORD *)v305 = v78;
    v82 = (__int64 **)v78;
  }
  v82[1] = nullptr;
  *v82 = v258;
  *((_DWORD *)v78 - 1) = v81;
  if ( (unsigned int)v255 > 1 )
  {
    v83 = 0;
    v255 = v3 + 5;
    v285 = (__int64)&v3[(unsigned int)(v4 - 3) + 6];
    v266 = v2 + 176;
    v271 = v305;
    while ( 1 )
    {
      v84 = *(__int64 **)(v2 + 152);
      v85 = *v255;
      v86 = *(unsigned int *)(v2 + 160);
      v87 = *(_DWORD *)(*v255 + 12LL);
      v88 = v86 - 1;
      v86 *= 16;
      v89 = (__int64 *)((char *)v84 + v86);
      v90 = 16LL * (v87 & v88);
      v91 = &v84[(unsigned __int64)v90 / 8];
      if ( v90 == v86 )
      {
LABEL_122:
        while ( v91 != v84 )
        {
          v94 = *v84;
          if ( (unsigned __int64)*v84 > 1 )
          {
            if ( *(_DWORD *)(v94 + 12) == v87 && v85 == v94 )
            {
              v92 = v84;
              goto LABEL_139;
            }
          }
          else if ( !v94 )
          {
            break;
          }
          v84 += 2;
        }
LABEL_24:
        BUG();
      }
      v92 = &v84[(unsigned __int64)v90 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v93 = *v92;
          if ( (unsigned __int64)*v92 > 1 )
            break;
          if ( !v93 )
            goto LABEL_24;
          v92 += 2;
          if ( v89 == v92 )
            goto LABEL_122;
        }
        if ( *(_DWORD *)(v93 + 12) == v87 && v85 == v93 )
          break;
        v92 += 2;
        if ( v89 == v92 )
          goto LABEL_122;
      }
LABEL_139:
      v96 = (void *)v92[1];
      v97 = *(__int64 **)(v2 + 120);
      v98 = *(_QWORD *)(v85 + 8LL * (unsigned int)(*(_DWORD *)(v85 + 24) - 1) + 32);
      v99 = *(unsigned int *)(v2 + 128);
      v100 = *(_DWORD *)(v98 + 12);
      v101 = v99 - 1;
      v99 *= 16;
      v102 = (__int64 *)((char *)v97 + v99);
      v103 = 16LL * (v100 & v101);
      v104 = &v97[(unsigned __int64)v103 / 8];
      if ( v103 == v99 )
      {
LABEL_184:
        while ( v104 != v97 )
        {
          v127 = *v97;
          if ( (unsigned __int64)*v97 > 1 )
          {
            if ( *(_DWORD *)(v127 + 12) == v100 && v98 == v127 )
            {
              v105 = v97;
              goto LABEL_154;
            }
          }
          else if ( !v127 )
          {
            break;
          }
          v97 += 2;
        }
LABEL_146:
        v107 = v313;
        HIBYTE(v254) = 0;
        if ( v313 )
LABEL_147:
          sub_62A410(v314, v107);
        if ( v83 )
          goto LABEL_149;
        goto LABEL_150;
      }
      v105 = &v97[(unsigned __int64)v103 / 8];
      while ( 1 )
      {
        v106 = *v105;
        if ( (unsigned __int64)*v105 > 1 )
          break;
        if ( !v106 )
          goto LABEL_146;
LABEL_143:
        v105 += 2;
        if ( v102 == v105 )
          goto LABEL_184;
      }
      if ( *(_DWORD *)(v106 + 12) != v100 || v98 != v106 )
        goto LABEL_143;
LABEL_154:
      v108 = v105[1];
      v109 = *((_DWORD *)v75 - 1);
      if ( v109 == *((_DWORD *)v75 - 2) )
      {
        v146 = (3 * v109 + 1) >> 1;
        v147 = 8 * v146 + 8;
        if ( 8 * v109 + 8 >= v147 || v109 >= v146 )
        {
          v250 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v322, "Overflow encountered when expanding vector");
          *v250 = (char *)off_1C63128;
          sub_2333C0(v250 + 1, v322);
          sub_233E40((__int64)v322);
          __cxa_throw(v250, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v291 = (3 * v109 + 1) >> 1;
        v259 = v96;
        v148 = (unsigned int *)sub_186B300(v75 - 1, v147);
        v75 = v148 + 2;
        v96 = v259;
        *v148 = v291;
        v109 = v148[1];
      }
      v75[v109] = v96;
      *((_DWORD *)v75 - 1) = v109 + 1;
      if ( v108 )
        sub_62A000(*(_QWORD *)v278, v108);
      if ( v83 )
        sub_62A410(*(_QWORD *)v278, v83);
      if ( !(unsigned __int8)sub_6008C0(v266, v73, 0, v108) )
      {
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      sub_5FF6F0(v266, v73, 0, v108, &v313);
      v258 = &v315;
      sub_5FEED0(&v315, v266, v73, 1);
      v114 = *(__int64 **)v305;
      for ( j = 0; *(_QWORD *)v305; ++j )
      {
        if ( j >= *((_DWORD *)v114 - 1) )
          break;
        sub_647C70(
          16 * j + (_DWORD)v114,
          (_DWORD)v258,
          v110,
          v111,
          v112,
          v113,
          v253,
          v254,
          (_DWORD)v255,
          (__int64)v258,
          v266,
          (_DWORD)v271,
          v278[0],
          (__int64)v279);
        v114 = *(__int64 **)v305;
      }
      v290 = &v317;
      sub_5FEED0(&v317, v266, v108, 0);
      v116 = *(__int64 **)v305;
      if ( *(_QWORD *)v305 )
      {
        v117 = *(_DWORD *)(*(_QWORD *)v305 - 4LL);
        if ( v117 == *(_DWORD *)(*(_QWORD *)v305 - 8LL) )
        {
          LODWORD(v294) = (3 * v117 + 1) >> 1;
          v128 = 16 * (_DWORD)v294 + 8;
          if ( 16 * v117 + 8 >= v128 || v117 >= (3 * v117 + 1) >> 1 )
          {
            v251 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v322, "Overflow encountered when expanding vector");
            *v251 = (char *)off_1C63128;
            sub_2333C0(v251 + 1, v322);
            sub_233E40((__int64)v322);
            __cxa_throw(v251, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v129 = sub_186B270(v128);
          v130 = *(__int64 **)v305;
          v131 = (_DWORD *)v129;
          v116 = (__int64 *)(v129 + 8);
          if ( *(_QWORD *)v305 )
          {
            v132 = *(unsigned int *)(*(_QWORD *)v305 - 4LL);
            v133 = *(__int64 **)v305;
            v134 = v129 + 8;
            *(_DWORD *)(v129 + 4) = v132;
            v135 = &v130[2 * v132];
            if ( v130 != v135 )
            {
              do
              {
                v136 = *v133;
                v133 += 2;
                v134 += 16;
                *(_QWORD *)(v134 - 16) = v136;
                v137 = *(v133 - 1);
                *(v133 - 1) = 0;
                *(_QWORD *)(v134 - 8) = v137;
              }
              while ( v133 != v135 );
            }
            v138 = &v130[2 * v132];
            if ( (_DWORD)v132 )
            {
              v297 = v116;
              v299 = v131;
              v300 = v73;
              v302 = v2;
              v301 = v75;
              v139 = v130;
              v140 = v3;
              v141 = v138;
              do
              {
                v142 = (__int64 *)v139[1];
                if ( v142 )
                {
                  v143 = &v142[*((unsigned int *)v142 - 1)];
                  if ( v142 >= v143 )
                    goto LABEL_207;
                  do
                  {
                    while ( 1 )
                    {
                      v144 = *v142;
                      if ( *v142 )
                      {
                        v145 = *v139;
                        v51 = (*(_DWORD *)(v144 + 8))-- == 1;
                        if ( v51 )
                          break;
                      }
                      if ( ++v142 >= v143 )
                        goto LABEL_206;
                    }
                    sub_15D7BC0(v145, v144);
                    ++v142;
                  }
                  while ( v142 < v143 );
LABEL_206:
                  v142 = (__int64 *)v139[1];
                  if ( v142 )
LABEL_207:
                    sub_186B220(v142 - 1);
                }
                v139 += 2;
              }
              while ( v139 != v141 );
              v3 = v140;
              v116 = v297;
              v131 = v299;
              v73 = v300;
              v75 = v301;
              v2 = v302;
              v130 = *(__int64 **)v305;
            }
            v298 = (__int64)v131;
            LODWORD(v296) = (_DWORD)v116;
            sub_186B220(v130 - 1);
            v131 = (_DWORD *)v298;
            v120 = &v116[2 * *(unsigned int *)(v298 + 4)];
            v119 = *(_DWORD *)(v298 + 4) + 1;
          }
          else
          {
            *(_DWORD *)(v129 + 4) = 0;
            v120 = (__int64 *)(v129 + 8);
            v119 = 1;
          }
          *(_QWORD *)v305 = v116;
          *v131 = (_DWORD)v294;
        }
        else
        {
          v118 = v117;
          v119 = v117 + 1;
          v120 = (__int64 *)(*(_QWORD *)v305 + 16 * v118);
        }
      }
      else
      {
        v193 = (_QWORD *)sub_186B270(0x28u);
        *v193 = 2;
        v119 = 1;
        v116 = v193 + 1;
        *(_QWORD *)v305 = v116;
        v120 = v116;
      }
      v121 = v313;
      *v120 = v317;
      v120[1] = v318;
      *((_DWORD *)v116 - 1) = v119;
      if ( v121 != v73 )
      {
        if ( v73 )
        {
          sub_62A410(*(_QWORD *)v278, v73);
          v121 = v313;
        }
        if ( v121 )
          sub_62A000(*(_QWORD *)v278, v121);
        v73 = v121;
      }
      v122 = (__int64 *)v316;
      if ( v316 )
      {
        v123 = *(unsigned int *)(v316 - 4);
        if ( v316 >= v316 + 8 * v123 )
          goto LABEL_181;
        v258 = v3;
        v124 = v316 + 8 * v123;
        do
        {
          while ( 1 )
          {
            v125 = *v122;
            if ( *v122 )
            {
              v126 = v315;
              v51 = (*(_DWORD *)(v125 + 8))-- == 1;
              if ( v51 )
                break;
            }
            if ( (unsigned __int64)++v122 >= v124 )
              goto LABEL_180;
          }
          sub_15D7BC0(v126, v125);
          ++v122;
        }
        while ( (unsigned __int64)v122 < v124 );
LABEL_180:
        v122 = (__int64 *)v316;
        v3 = v258;
        if ( v316 )
LABEL_181:
          sub_186B220(v122 - 1);
      }
      if ( ++v255 == (_QWORD *)v285 )
        goto LABEL_236;
      v83 = v108;
    }
  }
  v108 = 0;
LABEL_236:
  sub_62E310(*(_QWORD *)(v2 + 32), v73, v307);
  v170 = sub_15E9440(
           *(_QWORD *)(v2 + 24),
           *((_DWORD *)v75 - 1),
           (int)v75,
           v307[0],
           (int)v279,
           (int)v305,
           v253,
           v254,
           (int)v255,
           v258,
           v266,
           (int)v271,
           v278[0],
           (int)v279,
           (int)&v306,
           (__int64)&v311,
           v285,
           (int)v290,
           (int)v294,
           v296,
           v298,
           v300,
           (char)v301,
           v302,
           v303);
  v256 = v170;
  if ( v170 )
    ++*(_DWORD *)(v170 + 8);
  v171 = *(_QWORD **)(v2 + 64);
  if ( v171 )
  {
    v172 = *((_DWORD *)v171 - 1);
    if ( v172 == *((_DWORD *)v171 - 2) )
    {
      v205 = (3 * v172 + 1) >> 1;
      v206 = 8 * v205 + 8;
      if ( 8 * v172 + 8 >= (unsigned int)v206 || v172 >= v205 )
      {
        v248 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v322, "Overflow encountered when expanding vector");
        *v248 = (char *)off_1C63128;
        sub_2333C0(v248 + 1, v322);
        sub_233E40((__int64)v322);
        __cxa_throw(v248, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v262 = (3 * v172 + 1) >> 1;
      v207 = (unsigned int *)sub_186B300(v171 - 1, v206);
      v171 = v207 + 2;
      *(_QWORD *)(v2 + 64) = v207 + 2;
      *v207 = v262;
      LODWORD(v207) = v207[1];
      v175 = &v171[(unsigned int)v207];
      v174 = (_DWORD)v207 + 1;
    }
    else
    {
      v173 = v172;
      v174 = v172 + 1;
      v175 = &v171[v173];
    }
  }
  else
  {
    v246 = (_QWORD *)sub_186B270(0x18u);
    *v246 = 2;
    v171 = v246 + 1;
    v174 = 1;
    *(_QWORD *)(v2 + 64) = v171;
    v175 = v171;
  }
  *v175 = v256;
  v176 = *(_QWORD *)(v2 + 40);
  *((_DWORD *)v171 - 1) = v174;
  sub_62A000(v176, v73);
  v177 = *(_QWORD **)(v2 + 48);
  if ( v177 )
  {
    v178 = *((_DWORD *)v177 - 1);
    if ( v178 == *((_DWORD *)v177 - 2) )
    {
      v202 = (3 * v178 + 1) >> 1;
      v203 = 8 * v202 + 8;
      if ( 8 * v178 + 8 >= (unsigned int)v203 || v178 >= v202 )
      {
        v249 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v322, "Overflow encountered when expanding vector");
        *v249 = (char *)off_1C63128;
        sub_2333C0(v249 + 1, v322);
        sub_233E40((__int64)v322);
        __cxa_throw(v249, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v261 = (3 * v178 + 1) >> 1;
      v204 = (unsigned int *)sub_186B300(v177 - 1, v203);
      v177 = v204 + 2;
      *(_QWORD *)(v2 + 48) = v204 + 2;
      *v204 = v261;
      LODWORD(v204) = v204[1];
      v181 = &v177[(unsigned int)v204];
      v180 = (_DWORD)v204 + 1;
    }
    else
    {
      v179 = v178;
      v180 = v178 + 1;
      v181 = &v177[v179];
    }
  }
  else
  {
    v245 = (_QWORD *)sub_186B270(0x18u);
    *v245 = 2;
    v177 = v245 + 1;
    v180 = 1;
    *(_QWORD *)(v2 + 48) = v177;
    v181 = v177;
  }
  *v181 = v73;
  *((_DWORD *)v177 - 1) = v180;
  v267 = v309;
  v182 = *(unsigned int *)(v2 + 128);
  v273 = 2 * v182;
  if ( 3 * (int)v182 < (unsigned int)(4 * (*(_DWORD *)(v2 + 132) + *(_DWORD *)(v2 + 136))) )
  {
    v260 = 16LL * v273;
    v195 = (__m128i *)sub_186B270(v260);
    v183 = v195;
    v196 = &v195[v260 / 0x10];
    if ( v273 )
    {
      if ( (v260 & 0x10) == 0 || (*v195 = 0, ++v195, v195 != v196) )
      {
        do
        {
          *v195 = 0;
          v195 += 2;
          v195[-1] = 0;
        }
        while ( v195 != v196 );
      }
    }
    v197 = *(const __m128i **)(v2 + 120);
    v184 = v196;
    v280 = v273 - 1;
    v198 = (__m128i *)&v197[*(unsigned int *)(v2 + 128)];
    if ( v197 != v198 )
    {
      do
      {
        if ( v197->m128i_i64[0] > 1uLL )
        {
          v199 = 16LL * (*(_DWORD *)(v197->m128i_i64[0] + 12) & v280);
          v200 = &v183[(unsigned __int64)v199 / 0x10];
          if ( v260 == v199 )
          {
LABEL_278:
            if ( v183 == v200 )
            {
LABEL_386:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v201 = v183;
            while ( v201->m128i_i64[0] )
            {
              if ( v200 == ++v201 )
                goto LABEL_386;
            }
          }
          else
          {
            v201 = &v183[(unsigned __int64)v199 / 0x10];
            while ( v201->m128i_i64[0] )
            {
              if ( v196 == ++v201 )
                goto LABEL_278;
            }
          }
          *v201 = _mm_loadu_si128(v197);
        }
        ++v197;
      }
      while ( v198 != v197 );
      v198 = *(__m128i **)(v2 + 120);
    }
    if ( v198 )
    {
      v292 = (__int64 *)v196;
      v287 = v183;
      sub_186B220(v198);
      v184 = (__m128i *)v292;
      v183 = v287;
    }
    *(_QWORD *)(v2 + 120) = v183;
    *(_DWORD *)(v2 + 136) = 0;
    *(_DWORD *)(v2 + 128) = v273;
  }
  else
  {
    v280 = v182 - 1;
    v183 = *(__m128i **)(v2 + 120);
    v260 = 16 * v182;
    v184 = &v183[v182];
  }
  v185 = *(_DWORD *)(v267 + 12);
  v186 = _mm_unpacklo_epi64((__m128i)v267, (__m128i)(unsigned __int64)v73);
  v187 = 16LL * (v185 & v280);
  v188 = &v183[(unsigned __int64)v187 / 0x10];
  if ( v187 == v260 )
  {
    v190 = nullptr;
    while ( 1 )
    {
LABEL_257:
      if ( v188 == v183 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v192 = v183->m128i_i64[0];
      if ( v183->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v192 + 12) == v185 && v267 == v192 )
        {
          *v183 = v186;
          goto LABEL_294;
        }
      }
      else
      {
        if ( !v192 )
        {
          if ( v190 )
          {
            --*(_DWORD *)(v2 + 136);
            v183 = v190;
          }
          *v183 = v186;
          ++*(_DWORD *)(v2 + 132);
          goto LABEL_294;
        }
        v190 = v183;
      }
      ++v183;
    }
  }
  v189 = &v183[(unsigned __int64)v187 / 0x10];
  v190 = nullptr;
  while ( 2 )
  {
    v191 = v189->m128i_i64[0];
    if ( v189->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v191 + 12) == v185 && v267 == v191 )
      {
        *v189 = v186;
        goto LABEL_294;
      }
      goto LABEL_250;
    }
    if ( v191 )
    {
      v190 = v189;
LABEL_250:
      if ( ++v189 == v184 )
        goto LABEL_257;
      continue;
    }
    break;
  }
  if ( v190 )
  {
    --*(_DWORD *)(v2 + 136);
    v189 = v190;
  }
  *v189 = v186;
  ++*(_DWORD *)(v2 + 132);
LABEL_294:
  v208 = *(_DWORD *)(v2 + 80);
  v263 = 2 * v208;
  if ( 3 * v208 < (unsigned int)(4 * (*(_DWORD *)(v2 + 84) + *(_DWORD *)(v2 + 88))) )
  {
    v277 = 16LL * (unsigned int)(2 * v208);
    v230 = (__m128i *)sub_186B270(v277);
    v231 = v230;
    v269 = &v230[v277 / 0x10];
    if ( v263 )
    {
      if ( (v277 & 0x10) == 0 || (*v230 = 0, ++v230, v230 != v269) )
      {
        do
        {
          *v230 = 0;
          v230 += 2;
          v230[-1] = 0;
        }
        while ( v230 != v269 );
      }
    }
    v232 = *(const __m128i **)(v2 + 72);
    v233 = (__m128i *)&v232[*(unsigned int *)(v2 + 80)];
    *(_QWORD *)v283 = v233;
    if ( v232 != v233 )
    {
      do
      {
        if ( v232->m128i_i64[0] > 1uLL )
        {
          v295 = v232;
          v293 = v231;
          v234 = sub_62A5E0(v232->m128i_i64[0]);
          v232 = v295;
          v231 = v293;
          v235 = 16LL * ((v263 - 1) & v234);
          v236 = &v293[(unsigned __int64)v235 / 0x10];
          if ( v277 == v235 )
          {
LABEL_391:
            if ( v293 == v236 )
            {
LABEL_397:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v237 = v293;
            while ( v237->m128i_i64[0] )
            {
              if ( v236 == ++v237 )
                goto LABEL_397;
            }
          }
          else
          {
            v237 = &v293[(unsigned __int64)v235 / 0x10];
            while ( v237->m128i_i64[0] )
            {
              if ( v269 == ++v237 )
                goto LABEL_391;
            }
          }
          *v237 = _mm_loadu_si128(v295);
        }
        ++v232;
      }
      while ( *(const __m128i **)v283 != v232 );
      v233 = *(__m128i **)(v2 + 72);
    }
    if ( v233 )
    {
      v270 = v231;
      sub_186B220(v233);
      v231 = v270;
    }
    *(_QWORD *)(v2 + 72) = v231;
    *(_DWORD *)(v2 + 88) = 0;
    *(_DWORD *)(v2 + 80) = v263;
  }
  v264 = sub_62A5E0(v73);
  v209 = *(unsigned int *)(v2 + 80);
  v210 = *(__int64 **)(v2 + 72);
  v211 = v209 - 1;
  v209 *= 16;
  v212 = (__int64 *)((char *)v210 + v209);
  v213 = 16LL * (v264 & v211);
  v214 = &v210[(unsigned __int64)v213 / 8];
  if ( v213 != v209 )
  {
    v210 = (__int64 *)((char *)v210 + v213);
    v215 = nullptr;
    while ( 1 )
    {
      v216 = *v210;
      if ( (unsigned __int64)*v210 <= 1 )
      {
        if ( !v216 )
          goto LABEL_332;
        v215 = v210;
      }
      else
      {
        v288 = v215;
        v281 = v210;
        v274 = v212;
        v217 = sub_62A5E0(v216);
        v212 = v274;
        v210 = v281;
        v215 = v288;
        if ( v264 == v217 && *v281 == v73 )
          goto LABEL_303;
      }
      v210 += 2;
      if ( v212 == v210 )
      {
        v210 = *(__int64 **)(v2 + 72);
        goto LABEL_327;
      }
    }
  }
  v215 = nullptr;
LABEL_327:
  while ( 2 )
  {
    if ( v214 == v210 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v228 = *v210;
    if ( (unsigned __int64)*v210 > 1 )
    {
      *(_QWORD *)v282 = v215;
      v276 = v210;
      v229 = sub_62A5E0(v228);
      v210 = v276;
      v215 = *(__int64 **)v282;
      if ( v264 == v229 && *v276 == v73 )
      {
LABEL_303:
        *v210 = v73;
        v210[1] = 0;
        goto LABEL_304;
      }
      goto LABEL_326;
    }
    if ( v228 )
    {
      v215 = v210;
LABEL_326:
      v210 += 2;
      continue;
    }
    break;
  }
LABEL_332:
  if ( v215 )
  {
    --*(_DWORD *)(v2 + 88);
    v210 = v215;
  }
  *v210 = v73;
  v210[1] = 0;
  ++*(_DWORD *)(v2 + 84);
LABEL_304:
  v322[0] = 0;
  sub_5C31C0((_DWORD *)(v2 + 96), v73, v322);
  if ( v322[0] )
    sub_186B220((void *)(v322[0] - 8));
  v218 = *(unsigned int *)(v2 + 160);
  v268 = 2 * v218;
  if ( 3 * (int)v218 < (unsigned int)(4 * (*(_DWORD *)(v2 + 164) + *(_DWORD *)(v2 + 168))) )
  {
    v265 = 16LL * v268;
    v238 = (__m128i *)sub_186B270(v265);
    v219 = v238;
    v239 = &v238[v265 / 0x10];
    if ( v268 )
    {
      if ( (v265 & 0x10) == 0 || (*v238 = 0, ++v238, v239 != v238) )
      {
        do
        {
          *v238 = 0;
          v238 += 2;
          v238[-1] = 0;
        }
        while ( v239 != v238 );
      }
    }
    v240 = *(const __m128i **)(v2 + 152);
    v220 = v239;
    v275 = v268 - 1;
    v241 = (__m128i *)&v240[*(unsigned int *)(v2 + 160)];
    if ( v240 != v241 )
    {
      do
      {
        if ( v240->m128i_i64[0] > 1uLL )
        {
          v242 = 16LL * (*(_DWORD *)(v240->m128i_i64[0] + 12) & v275);
          v243 = &v219[(unsigned __int64)v242 / 0x10];
          if ( v265 == v242 )
          {
LABEL_373:
            if ( v219 == v243 )
            {
LABEL_385:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v244 = v219;
            while ( v244->m128i_i64[0] )
            {
              if ( v243 == ++v244 )
                goto LABEL_385;
            }
          }
          else
          {
            v244 = &v219[(unsigned __int64)v242 / 0x10];
            while ( v244->m128i_i64[0] )
            {
              if ( v239 == ++v244 )
                goto LABEL_373;
            }
          }
          *v244 = _mm_loadu_si128(v240);
        }
        ++v240;
      }
      while ( v241 != v240 );
      v241 = *(__m128i **)(v2 + 152);
    }
    if ( v241 )
    {
      v289 = (__int64 *)v239;
      *(_QWORD *)v284 = v219;
      sub_186B220(v241);
      v220 = (__m128i *)v289;
      v219 = *(__m128i **)v284;
    }
    *(_QWORD *)(v2 + 152) = v219;
    *(_DWORD *)(v2 + 168) = 0;
    *(_DWORD *)(v2 + 160) = v268;
  }
  else
  {
    v275 = v218 - 1;
    v219 = *(__m128i **)(v2 + 152);
    v265 = 16 * v218;
    v220 = &v219[v218];
  }
  v221 = *((_DWORD *)v3 + 3);
  v222 = 16LL * (v221 & v275);
  v223 = &v219[(unsigned __int64)v222 / 0x10];
  if ( v222 == v265 )
  {
    v225 = nullptr;
    while ( 1 )
    {
LABEL_319:
      if ( v223 == v219 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v227 = v219->m128i_i64[0];
      if ( v219->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v227 + 12) == v221 && v3 == (__int64 *)v227 )
        {
          v219->m128i_i64[0] = (__int64)v3;
          v219->m128i_i64[1] = v256;
          goto LABEL_336;
        }
      }
      else
      {
        if ( !v227 )
        {
          if ( v225 )
          {
            --*(_DWORD *)(v2 + 168);
            v219 = v225;
          }
          v219->m128i_i64[0] = (__int64)v3;
          v219->m128i_i64[1] = v256;
          ++*(_DWORD *)(v2 + 164);
          goto LABEL_336;
        }
        v225 = v219;
      }
      ++v219;
    }
  }
  v224 = &v219[(unsigned __int64)v222 / 0x10];
  v225 = nullptr;
  while ( 2 )
  {
    v226 = v224->m128i_i64[0];
    if ( v224->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v226 + 12) == v221 && v3 == (__int64 *)v226 )
      {
        v224->m128i_i64[0] = (__int64)v3;
        v224->m128i_i64[1] = v256;
        goto LABEL_336;
      }
      goto LABEL_312;
    }
    if ( v226 )
    {
      v225 = v224;
LABEL_312:
      if ( ++v224 == v220 )
        goto LABEL_319;
      continue;
    }
    break;
  }
  if ( v225 )
  {
    --*(_DWORD *)(v2 + 168);
    v224 = v225;
  }
  v224->m128i_i64[0] = (__int64)v3;
  v224->m128i_i64[1] = v256;
  ++*(_DWORD *)(v2 + 164);
LABEL_336:
  v107 = v313;
  v83 = v108;
  --*(_DWORD *)(*(_QWORD *)(v2 + 144) - 4LL);
  if ( v107 )
    goto LABEL_147;
  if ( !v108 )
  {
LABEL_151:
    sub_62A410(*(_QWORD *)v278, v73);
    goto LABEL_152;
  }
LABEL_149:
  sub_62A410(*(_QWORD *)v278, v83);
LABEL_150:
  if ( v73 )
    goto LABEL_151;
LABEL_152:
  sub_186B220(v75 - 1);
LABEL_34:
  v44 = v306;
  if ( v306 )
  {
    v45 = *((unsigned int *)v306 - 1);
    if ( (_DWORD)v45 )
    {
      v46 = &v306[2 * v45];
      do
      {
        v47 = (__int64 *)v44[1];
        if ( v47 )
        {
          v48 = &v47[*((unsigned int *)v47 - 1)];
          if ( v47 >= v48 )
            goto LABEL_45;
          do
          {
            while ( 1 )
            {
              v49 = *v47;
              if ( *v47 )
              {
                v50 = *v44;
                v51 = (*(_DWORD *)(v49 + 8))-- == 1;
                if ( v51 )
                  break;
              }
              if ( ++v47 >= v48 )
                goto LABEL_44;
            }
            sub_15D7BC0(v50, v49);
            ++v47;
          }
          while ( v47 < v48 );
LABEL_44:
          v47 = (__int64 *)v44[1];
          if ( v47 )
LABEL_45:
            sub_186B220(v47 - 1);
        }
        v44 += 2;
      }
      while ( v44 != v46 );
      v44 = v306;
    }
    sub_186B220(v44 - 1);
  }
  v52 = *(__int64 **)v305;
  if ( *(_QWORD *)v305 )
  {
    v53 = *(unsigned int *)(*(_QWORD *)v305 - 4LL);
    if ( (_DWORD)v53 )
    {
      v54 = *(_QWORD *)v305 + 16 * v53;
      do
      {
        v55 = (__int64 *)v52[1];
        if ( v55 )
        {
          v56 = &v55[*((unsigned int *)v55 - 1)];
          if ( v55 >= v56 )
            goto LABEL_60;
          do
          {
            while ( 1 )
            {
              v57 = *v55;
              if ( *v55 )
              {
                v58 = *v52;
                v51 = (*(_DWORD *)(v57 + 8))-- == 1;
                if ( v51 )
                  break;
              }
              if ( ++v55 >= v56 )
                goto LABEL_59;
            }
            sub_15D7BC0(v58, v57);
            ++v55;
          }
          while ( v55 < v56 );
LABEL_59:
          v55 = (__int64 *)v52[1];
          if ( v55 )
LABEL_60:
            sub_186B220(v55 - 1);
        }
        v52 += 2;
      }
      while ( v52 != (__int64 *)v54 );
      v52 = *(__int64 **)v305;
    }
    sub_186B220(v52 - 1);
  }
  v59 = v312;
  if ( v312 )
  {
    v60 = (unsigned __int64)&v312[*((unsigned int *)v312 - 1)];
    if ( (unsigned __int64)v312 >= v60 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v61 = *v59;
        if ( *v59 )
        {
          v51 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v51 )
            break;
        }
        if ( (unsigned __int64)++v59 >= v60 )
          goto LABEL_71;
      }
      sub_15D7BC0(v311, v61);
      ++v59;
    }
    while ( (unsigned __int64)v59 < v60 );
LABEL_71:
    v59 = v312;
    if ( v312 )
LABEL_72:
      sub_186B220(v59 - 1);
  }
  v62 = v309;
  if ( v309 )
  {
    v63 = v310;
    v51 = (*(_DWORD *)(v309 + 8))-- == 1;
    if ( v51 )
      sub_15D7BC0(v63, v62);
  }
  v64 = *(_QWORD *)v307;
  if ( *(_QWORD *)v307 )
  {
    v65 = v308;
    v51 = (*(_DWORD *)(*(_QWORD *)v307 + 8LL))-- == 1;
    if ( v51 )
      sub_15D7BC0(v65, v64);
  }
  if ( v304 )
    sub_186B220((void *)(v304 - 8));
  if ( ptr )
    sub_186B220(ptr);
  if ( v320 )
    sub_186B220(v320);
  return HIBYTE(v254);
}

