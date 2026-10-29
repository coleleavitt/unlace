__int64 __fastcall sub_E9EA70(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned int v8; // r12d
  unsigned int v9; // eax
  unsigned int v10; // r13d
  unsigned int v11; // ebp
  __int64 v12; // r14
  __int64 v13; // r13
  const __m128i *v14; // rax
  __int64 v15; // r12
  const __m128i *v16; // r14
  const __m128i *v17; // r13
  unsigned __int8 v18; // bp
  __int32 v19; // eax
  __int64 *v20; // r15
  unsigned __int8 v21; // bp
  unsigned __int8 v22; // bl
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // ebx
  unsigned int *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // r14
  __int64 *v38; // r13
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r12
  int v43; // ebp
  unsigned __int8 v44; // r13
  unsigned __int8 v45; // al
  __int64 v46; // r8
  __int64 v47; // r15
  unsigned __int8 v48; // r14
  __int64 v49; // r9
  __int64 v50; // r10
  void *v51; // rax
  void *v52; // rax
  _QWORD *v53; // r10
  __int64 v54; // rbp
  unsigned int v55; // edx
  __int64 v56; // r12
  __int64 v57; // r15
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 *v60; // r14
  unsigned __int8 v61; // r15
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rbp
  __int64 v66; // rax
  unsigned __int64 v67; // r9
  unsigned __int64 v68; // r12
  __int64 *v69; // rbp
  __int64 *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  void *v73; // rax
  void *v74; // rax
  __int64 v75; // rdi
  char v76; // dl
  __int64 v77; // rsi
  char v78; // al
  int v79; // edx
  char v80; // al
  unsigned __int8 v81; // bp
  __int64 v82; // rcx
  __int64 v83; // rbx
  int v84; // eax
  int v85; // edx
  int v86; // eax
  int v87; // esi
  __int64 v88; // rbp
  __int64 v89; // r13
  const char *v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rbx
  const char *v93; // r15
  const char *v94; // rax
  size_t v95; // rdx
  char v96; // al
  int v97; // ebx
  unsigned __int64 v98; // rbx
  int v99; // r12d
  __int64 v100; // rbx
  __int64 v101; // r15
  unsigned int v102; // ebp
  __int64 v103; // rax
  __int64 v104; // rax
  _BOOL8 v105; // rsi
  _BOOL8 v106; // rsi
  __int64 v107; // rax
  _BOOL8 v108; // r12
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // r12
  __int64 v112; // rbp
  __int64 v113; // rax
  __int64 v114; // rax
  unsigned __int8 v115; // dl
  __int64 v116; // rbp
  unsigned int v117; // eax
  __int64 v118; // rbx
  unsigned int v119; // eax
  __int64 v120; // r12
  unsigned int v121; // eax
  __int64 v122; // r12
  unsigned int v123; // eax
  __int64 v124; // rsi
  __int64 v125; // rax
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // rdx
  __int64 v128; // r12
  __int64 v129; // rbx
  unsigned __int64 v130; // rax
  _BOOL8 v131; // rsi
  bool v132; // r8
  bool v133; // r12
  bool v134; // r9
  _BOOL8 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rsi
  __int64 v138; // r15
  int v139; // ebx
  __int64 v140; // rax
  __int64 v141; // rdx
  unsigned __int64 v142; // rcx
  const __m128i *v143; // rax
  const __m128i *v144; // rax
  int v145; // edx
  int v146; // ecx
  int v147; // r8d
  int v148; // r9d
  int v149; // ebx
  int v150; // edx
  int v151; // ecx
  int v152; // r8d
  int v153; // r9d
  __int64 v154; // rax
  __int64 v155; // rdx
  unsigned __int64 v156; // rcx
  const __m128i *v157; // rax
  const __m128i *v158; // rax
  int v159; // edx
  int v160; // ecx
  int v161; // r8d
  int v162; // r9d
  int v163; // ebx
  int v164; // edx
  int v165; // ecx
  int v166; // r8d
  int v167; // r9d
  char v168; // bl
  unsigned __int8 v169; // bp
  unsigned int v170; // edx
  __int64 v171; // r15
  int v172; // ebx
  __int64 v173; // rax
  __int64 v174; // rdx
  unsigned __int64 v175; // rcx
  const __m128i *v176; // rax
  const __m128i *v177; // rax
  int v178; // edx
  int v179; // ecx
  int v180; // r8d
  int v181; // r9d
  int v182; // ebx
  int v183; // edx
  int v184; // ecx
  int v185; // r8d
  int v186; // r9d
  unsigned __int8 v187; // bl
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // rcx
  unsigned __int8 v192; // bl
  __int64 v193; // rdx
  __int64 v194; // rcx
  unsigned __int64 v195; // rax
  __int64 v196; // r12
  __int64 v197; // rbx
  void *v198; // rdx
  unsigned int v199; // r12d
  __int64 v200; // rdx
  __int64 v201; // rcx
  unsigned int v202; // eax
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // rsi
  __int64 v206; // r13
  unsigned int v207; // r14d
  int v208; // r12d
  __int64 v209; // rbp
  __int64 v210; // rcx
  __int64 v211; // r15
  __int64 v212; // rax
  int v213; // eax
  __int64 v214; // rax
  __int64 v215; // rbx
  __int64 v216; // r15
  __int64 v217; // rbp
  unsigned __int64 v218; // r12
  int v219; // ebp
  unsigned int *v220; // rbx
  __int64 v221; // rax
  int v222; // esi
  int v223; // r8d
  int v224; // r9d
  int v225; // edx
  int v226; // r12d
  __int64 v227; // rbx
  int v228; // edx
  int v229; // ecx
  int v230; // r8d
  int v231; // r9d
  int v232; // eax
  unsigned __int64 v233; // rax
  unsigned int v234; // edx
  unsigned __int64 v235; // rax
  unsigned __int64 v236; // rax
  unsigned int v237; // edx
  unsigned __int64 v238; // rax
  int v239; // ebx
  bool v240; // al
  void *v241; // rax
  void *v242; // rax
  __int64 v243; // r15
  unsigned int v244; // ebx
  __int64 v245; // rsi
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // rbp
  __int64 v249; // rbx
  char v250; // al
  unsigned int v251; // eax
  unsigned int v252; // eax
  unsigned __int8 v253; // al
  unsigned __int8 v254; // al
  __int64 *v255; // [rsp+8h] [rbp-330h]
  __int64 v256; // [rsp+8h] [rbp-330h]
  __int64 v257; // [rsp+8h] [rbp-330h]
  __int64 v258; // [rsp+8h] [rbp-330h]
  __int64 v259; // [rsp+8h] [rbp-330h]
  bool v260; // [rsp+8h] [rbp-330h]
  bool v261; // [rsp+8h] [rbp-330h]
  bool v262; // [rsp+8h] [rbp-330h]
  unsigned int v263; // [rsp+8h] [rbp-330h]
  __int64 v264; // [rsp+8h] [rbp-330h]
  int v265; // [rsp+10h] [rbp-328h]
  __int64 v266; // [rsp+10h] [rbp-328h]
  unsigned __int8 v267; // [rsp+10h] [rbp-328h]
  __int64 v268; // [rsp+10h] [rbp-328h]
  __int64 v269; // [rsp+10h] [rbp-328h]
  bool v270; // [rsp+10h] [rbp-328h]
  bool v271; // [rsp+10h] [rbp-328h]
  __int64 v272; // [rsp+10h] [rbp-328h]
  __int64 v273; // [rsp+10h] [rbp-328h]
  unsigned int v274; // [rsp+18h] [rbp-320h]
  __int64 v275; // [rsp+18h] [rbp-320h]
  unsigned __int64 v276; // [rsp+18h] [rbp-320h]
  unsigned int v277; // [rsp+18h] [rbp-320h]
  int v278; // [rsp+18h] [rbp-320h]
  bool v279; // [rsp+18h] [rbp-320h]
  __int64 v280; // [rsp+18h] [rbp-320h]
  unsigned __int64 v281; // [rsp+18h] [rbp-320h]
  unsigned int *v282; // [rsp+18h] [rbp-320h]
  __int64 *v283; // [rsp+18h] [rbp-320h]
  int v284; // [rsp+18h] [rbp-320h]
  __int64 v285; // [rsp+20h] [rbp-318h]
  __int64 v286; // [rsp+20h] [rbp-318h]
  int v287; // [rsp+20h] [rbp-318h]
  unsigned __int32 v288; // [rsp+28h] [rbp-310h]
  __int64 v289; // [rsp+28h] [rbp-310h]
  unsigned int v290; // [rsp+28h] [rbp-310h]
  int v291; // [rsp+28h] [rbp-310h]
  __int64 v292; // [rsp+30h] [rbp-308h]
  int v293; // [rsp+30h] [rbp-308h]
  int v294; // [rsp+30h] [rbp-308h]
  __int64 *v295; // [rsp+30h] [rbp-308h]
  unsigned __int32 v296; // [rsp+38h] [rbp-300h]
  __int64 v297; // [rsp+38h] [rbp-300h]
  char v300; // [rsp+48h] [rbp-2F0h]
  __int64 v302; // [rsp+68h] [rbp-2D0h]
  __int64 v303; // [rsp+70h] [rbp-2C8h]
  __int64 v304; // [rsp+78h] [rbp-2C0h]
  int v305; // [rsp+84h] [rbp-2B4h]
  __int64 v306; // [rsp+88h] [rbp-2B0h]
  char v307; // [rsp+9Fh] [rbp-299h] BYREF
  void **v308; // [rsp+A0h] [rbp-298h] BYREF
  _QWORD *v309; // [rsp+A8h] [rbp-290h]
  __int64 v310; // [rsp+B0h] [rbp-288h] BYREF
  __int64 v311; // [rsp+B8h] [rbp-280h]
  int v312; // [rsp+C0h] [rbp-278h]
  int v313; // [rsp+C4h] [rbp-274h]
  _QWORD v314[4]; // [rsp+D0h] [rbp-268h] BYREF
  void *v315; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v316; // [rsp+F8h] [rbp-240h]
  __int64 v317; // [rsp+100h] [rbp-238h] BYREF
  void *v318; // [rsp+110h] [rbp-228h] BYREF
  __int64 v319; // [rsp+118h] [rbp-220h]
  __int64 v320; // [rsp+120h] [rbp-218h] BYREF
  __int64 *v321; // [rsp+130h] [rbp-208h] BYREF
  __int64 v322; // [rsp+138h] [rbp-200h]
  int v323; // [rsp+140h] [rbp-1F8h]
  __int64 v324; // [rsp+148h] [rbp-1F0h]
  void ***v325; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v326; // [rsp+158h] [rbp-1E0h]
  int v327; // [rsp+160h] [rbp-1D8h]
  __int64 v328; // [rsp+168h] [rbp-1D0h]
  __m128i v329; // [rsp+170h] [rbp-1C8h] BYREF
  void *v330; // [rsp+180h] [rbp-1B8h]
  __int64 v331; // [rsp+188h] [rbp-1B0h]
  __int64 v332; // [rsp+190h] [rbp-1A8h]
  void *v333; // [rsp+1C0h] [rbp-178h] BYREF
  __int64 v334; // [rsp+1C8h] [rbp-170h]
  _QWORD v335[8]; // [rsp+1D0h] [rbp-168h] BYREF
  __m128i ptr; // [rsp+210h] [rbp-128h] BYREF
  _QWORD v337[8]; // [rsp+220h] [rbp-118h] BYREF
  void *v338[2]; // [rsp+260h] [rbp-D8h] BYREF
  _QWORD v339[8]; // [rsp+270h] [rbp-C8h] BYREF
  void *v340; // [rsp+2B0h] [rbp-88h] BYREF
  unsigned int v341; // [rsp+2B8h] [rbp-80h]
  _BYTE v342[120]; // [rsp+2C0h] [rbp-78h] BYREF

  if ( a3 == a2 )
    return 0;
  sub_E9C270((__int64)&v315, a2);
  sub_E9C270((__int64)&v318, a3);
  v7 = *(_QWORD *)(a2 + 128);
  if ( v7 != a4 )
  {
    v335[0] = a1;
    v329.m128i_i64[1] = (__int64)a1;
    v8 = *(_DWORD *)(a4 + 16);
    v333 = (void *)a2;
    v334 = (__int64)&v315;
    v329.m128i_i64[0] = (__int64)&v318;
    v9 = *(_DWORD *)(v7 + 16);
    v274 = v9;
    if ( v9 != v8 )
    {
      if ( v9 )
      {
        if ( (*(_BYTE *)(v7 + 24) & 1) != 0 )
          v29 = (unsigned int *)sub_B96980(v7);
        else
          v29 = *(unsigned int **)(v7 + 24);
        v30 = v29[6 * v274 - 5];
        v31 = *v29;
      }
      else
      {
        v30 = 0;
        v31 = 0;
      }
      sub_E98F90((__int64)&v340, (__int64)&v333, *(unsigned int *)(a2 + 24), (v30 << 32) | v31, 0);
      sub_AE9DF0((unsigned __int8 **)&v340, v274, 3u);
      sub_AEA040((__int64)&v340);
      v32 = sub_E97B50(a4);
      sub_E99040((__int64)&v340, &v329, (_QWORD *)v329.m128i_i64[1], *(_DWORD *)(a3 + 24), v32, 0);
      sub_AE9DF0((unsigned __int8 **)&v340, v8, 3u);
      sub_AEA040((__int64)&v340);
      goto LABEL_28;
    }
    v10 = *(_DWORD *)(v7 + 20);
    v11 = *(_DWORD *)(a4 + 20);
    if ( v10 != v11 )
    {
      v58 = sub_E97B50(v7);
      sub_E98F90((__int64)&v340, (__int64)&v333, *(unsigned int *)(a2 + 24), v58, 1u);
      sub_AE9DF0((unsigned __int8 **)&v340, v10, 3u);
      sub_AEA040((__int64)&v340);
      v59 = sub_E97B50(a4);
      sub_E99040((__int64)&v340, &v329, (_QWORD *)v329.m128i_i64[1], *(_DWORD *)(a3 + 24), v59, 1u);
      sub_AE9DF0((unsigned __int8 **)&v340, v11, 3u);
      sub_AEA040((__int64)&v340);
      goto LABEL_28;
    }
    v12 = (*(_BYTE *)(v7 + 24) & 1) != 0 ? sub_B96980(v7) : *(_QWORD *)(v7 + 24);
    v13 = (*(_BYTE *)(a4 + 24) & 1) != 0 ? sub_B96980(a4) : *(_QWORD *)(a4 + 24);
    if ( v274 )
    {
      v14 = (const __m128i *)v12;
      LODWORD(v15) = 0;
      v16 = (const __m128i *)v13;
      v17 = v14;
      while ( 1 )
      {
        ptr = _mm_loadu_si128(v17);
        v337[0] = v17[1].m128i_i64[0];
        v18 = v17->m128i_u8[12];
        v296 = v17->m128i_i32[0];
        v19 = v17->m128i_i32[1];
        v20 = (__int64 *)v17[1].m128i_i64[0];
        *(__m128i *)v338 = _mm_loadu_si128(v16);
        LODWORD(v292) = v19;
        v21 = (v18 >> 2) & 3;
        v339[0] = v16[1].m128i_i64[0];
        v288 = v16->m128i_i32[0];
        LODWORD(v285) = v16->m128i_i32[1];
        v22 = ((unsigned __int8)v16->m128i_i8[12] >> 2) & 3;
        v255 = (__int64 *)v16[1].m128i_i64[0];
        v23 = *(_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v23 + 8) & 0xF) != 0 )
          v23 = sub_F64F00(*v20);
        v265 = sub_E98500(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v24 = *(_QWORD *)(*v255 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v24 + 8) & 0xF) != 0 )
          v24 = sub_F64F00(*v255);
        v15 = (unsigned int)(v15 + 1);
        if ( v265 != (unsigned int)sub_E98500(v24 & 0xFFFFFFFFFFFFFFF0LL) )
          break;
        if ( (ptr.m128i_i8[12] & 1) != (BYTE4(v338[1]) & 1) )
        {
          v60 = v20;
          v61 = BYTE4(v338[1]) & 1;
          v267 = ptr.m128i_i8[12] & 1;
          sub_E98F90((__int64)&v340, (__int64)&v333, *(unsigned int *)(a2 + 24), (v292 << 32) | v296, 3u);
          sub_AE9DF0((unsigned __int8 **)&v340, v15, 3u);
          sub_E97E40((unsigned __int8 **)&v340, v267);
          v62 = sub_E97B90(v60);
          sub_AE9DF0((unsigned __int8 **)&v340, v62, 8u);
          sub_AEA040((__int64)&v340);
          sub_E99040(
            (__int64)&v340,
            &v329,
            (_QWORD *)v329.m128i_i64[1],
            *(_DWORD *)(a3 + 24),
            v288 | (unsigned __int64)(v285 << 32),
            3u);
          sub_AE9DF0((unsigned __int8 **)&v340, v15, 3u);
          sub_E97E40((unsigned __int8 **)&v340, v61);
          goto LABEL_20;
        }
        if ( v22 != v21 )
        {
          sub_E98F90((__int64)&v340, (__int64)&v333, *(unsigned int *)(a2 + 24), (v292 << 32) | v296, 4u);
          sub_AE9DF0((unsigned __int8 **)&v340, v15, 3u);
          v63 = sub_E97B90(v20);
          sub_AE9DF0((unsigned __int8 **)&v340, v63, 8u);
          sub_E97E40((unsigned __int8 **)&v340, v21);
          sub_AEA040((__int64)&v340);
          sub_E99040(
            (__int64)&v340,
            &v329,
            (_QWORD *)v329.m128i_i64[1],
            *(_DWORD *)(a3 + 24),
            v288 | (unsigned __int64)(v285 << 32),
            4u);
          sub_AE9DF0((unsigned __int8 **)&v340, v15, 3u);
          v64 = sub_E97B90(v255);
          sub_AE9DF0((unsigned __int8 **)&v340, v64, 8u);
          sub_E97E40((unsigned __int8 **)&v340, v22);
          sub_AEA040((__int64)&v340);
          goto LABEL_28;
        }
        v17 = (const __m128i *)((char *)v17 + 24);
        v16 = (const __m128i *)((char *)v16 + 24);
        if ( v274 == (_DWORD)v15 )
          goto LABEL_33;
      }
      sub_E98F90((__int64)&v340, (__int64)&v333, *(unsigned int *)(a2 + 24), (v292 << 32) | v296, 2u);
      sub_AE9DF0((unsigned __int8 **)&v340, v15, 3u);
      v25 = sub_E97B90(v20);
      sub_AE9DF0((unsigned __int8 **)&v340, v25, 8u);
      sub_AEA040((__int64)&v340);
      sub_E99040(
        (__int64)&v340,
        &v329,
        (_QWORD *)v329.m128i_i64[1],
        *(_DWORD *)(a3 + 24),
        v288 | (unsigned __int64)(v285 << 32),
        2u);
      sub_AE9DF0((unsigned __int8 **)&v340, v15, 3u);
LABEL_20:
      v26 = sub_E97B90(v255);
      sub_AE9DF0((unsigned __int8 **)&v340, v26, 8u);
      sub_AEA040((__int64)&v340);
      goto LABEL_28;
    }
  }
LABEL_33:
  v33 = sub_B97230(a2);
  v34 = sub_B97230(a3);
  if ( v33 )
  {
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 56);
      v36 = *(_QWORD *)(v33 + 56);
      v37 = (__int64 *)(v35 + 24);
      v38 = (__int64 *)(v36 + 24);
      v39 = v35 + 24 + 8LL * (*(_DWORD *)(v35 + 20) & 0x1FFFFFFF);
      v40 = *(_DWORD *)(v36 + 20) & 0x1FFFFFFF;
      if ( v37 != (__int64 *)v39 && v38 != (__int64 *)(v36 + 24 + 8 * v40) )
      {
        v256 = v36 + 24 + 8 * v40;
        while ( 1 )
        {
          v41 = *v38;
          v42 = *v37;
          v43 = sub_E98680(*v38);
          if ( v43 != (unsigned int)sub_E98680(v42) )
            break;
          ++v37;
          ++v38;
          if ( v39 == (_QWORD)v37 || v256 == (_QWORD)v38 )
            goto LABEL_45;
        }
        v44 = sub_E97BE0(v41);
        v45 = sub_E97BE0(v42);
        v46 = *(_QWORD *)(v41 + 40);
        v47 = *(_QWORD *)(v42 + 40);
        v48 = v45;
        if ( v47 != v46 )
        {
          if ( v47 )
          {
            v49 = 1;
            if ( !v46 )
            {
              v50 = 0;
              v49 = 1;
LABEL_43:
              v257 = v49;
              v275 = *(_QWORD *)(v41 + 40);
              v266 = v50;
              sub_FC70B0(&v340, *a1, *(unsigned int *)(v41 + 24), 2341);
              sub_E98080((unsigned __int8 **)&v340, a2);
              sub_E97E40((unsigned __int8 **)&v340, v316 == 0);
              sub_AEC220((unsigned __int8 **)&v340, v315, v316);
              v51 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
              LOBYTE(v338[1]) = 1;
              v338[0] = v51;
              sub_AEC610((__int64 *)&v340, (__int64 *)v338);
              sub_E97E40((unsigned __int8 **)&v340, v266);
              sub_E97E40((unsigned __int8 **)&v340, v44);
              sub_E982C0((unsigned __int8 **)&v340, v275);
              sub_AEA040((__int64)&v340);
              sub_FC70B0(&v340, *a1, *(unsigned int *)(v42 + 24), 2523);
              sub_AEC220((unsigned __int8 **)&v340, v318, v319);
              v52 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
              LOBYTE(v338[1]) = 1;
              v338[0] = v52;
              sub_AEC610((__int64 *)&v340, (__int64 *)v338);
              sub_E97E40((unsigned __int8 **)&v340, v257);
              sub_E97E40((unsigned __int8 **)&v340, v48);
              sub_E982C0((unsigned __int8 **)&v340, v47);
              sub_AEA040((__int64)&v340);
              goto LABEL_28;
            }
          }
          else
          {
            v49 = 0;
            if ( !v46 )
            {
              v50 = 0;
              v49 = 0;
              goto LABEL_43;
            }
          }
          v50 = 1;
          goto LABEL_43;
        }
        v50 = (v44 == v45) + 2LL;
        v49 = v50;
        goto LABEL_43;
      }
    }
  }
LABEL_45:
  v333 = v335;
  ptr.m128i_i64[0] = (__int64)v337;
  v334 = 0x400000000LL;
  ptr.m128i_i64[1] = 0x400000000LL;
  sub_E98740((__int64)&v333, a2, a2 + 64);
  sub_E98740((__int64)&ptr, a3, a2 + 64);
  sub_E9E370((__int64)&v310, (__int64 **)&v333, (__int64 **)&ptr);
  v54 = v312;
  LOBYTE(v55) = v312 == 15 || v313 == 15;
  v56 = v55;
  if ( (_BYTE)v55 )
  {
    sub_E9E6B0(a1, v53, a2, v315, v316, a3, v318, v319);
    goto LABEL_62;
  }
  if ( v312 != v313 )
  {
    sub_E9E810(a1, v53, a2, v315, v316, a3, v318, v319);
    goto LABEL_62;
  }
  v57 = v310;
  v258 = v311;
  v308 = &v318;
  v314[0] = a2;
  v314[1] = &v315;
  v314[2] = a1;
  v309 = a1;
  switch ( v312 )
  {
    case 4:
      v276 = *(_QWORD *)(v310 + 40) & 0xFFFFFFFFFFFFFFFCLL;
      v98 = *(_QWORD *)(v311 + 40) & 0xFFFFFFFFFFFFFFFCLL;
      v99 = sub_E985C0(v276);
      if ( v99 == (unsigned int)sub_E985C0(v98) )
      {
        v100 = *(_QWORD *)(v57 + 48);
        v269 = *(_QWORD *)(v258 + 48);
        if ( (v100 != 0) == (v269 != 0) )
        {
          if ( !v100 )
            goto LABEL_67;
          v278 = sub_E985C0(v100);
          if ( v278 == (unsigned int)sub_E985C0(v269) )
            goto LABEL_67;
          v116 = sub_EEC8C0(v100);
          v117 = sub_EEB7E0(v100);
          sub_E99300((__int64)&v340, (__int64)v314, v117, v116, 1u);
          sub_AEA040((__int64)&v340);
          v118 = sub_EEC8C0(v269);
          v119 = sub_EEB7E0(v269);
          sub_E993B0((__int64)&v340, (_BYTE ***)&v308, v309, v119, v118, 1u);
          sub_AEA040((__int64)&v340);
        }
        else
        {
          if ( v100 )
          {
            v277 = sub_EEB7E0(v100);
            v101 = sub_EEC8C0(v100);
          }
          else
          {
            v277 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
            v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
          }
          if ( v269 )
          {
            v102 = sub_EEB7E0(v269);
            v103 = sub_EEC8C0(v269);
          }
          else
          {
            v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v258 + 16LL))(v258);
            v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v258 + 16LL))(v258);
          }
          v259 = v103;
          sub_E99300((__int64)&v340, (__int64)v314, v277, v101, 2u);
          sub_E97E40((unsigned __int8 **)&v340, v100 == 0);
          sub_AEA040((__int64)&v340);
          sub_E993B0((__int64)&v340, (_BYTE ***)&v308, v309, v102, v259, 2u);
          sub_E97E40((unsigned __int8 **)&v340, v269 == 0);
          sub_AEA040((__int64)&v340);
        }
      }
      else
      {
        v120 = sub_EEC8C0(v276);
        v121 = sub_EEB7E0(v276);
        sub_E99300((__int64)&v340, (__int64)v314, v121, v120, 0);
        sub_AEA040((__int64)&v340);
        v122 = sub_EEC8C0(v98);
        v123 = sub_EEB7E0(v98);
        sub_E993B0((__int64)&v340, (_BYTE ***)&v308, v309, v123, v122, 0);
        sub_AEA040((__int64)&v340);
      }
      goto LABEL_62;
    case 5:
      if ( !(unsigned __int8)sub_E9C2C0((__int64)a1, a2, (__int64)v315, v316, (__int64)v318, v319, v310, v311) )
        goto LABEL_67;
      goto LABEL_62;
    case 6:
      v75 = *(_QWORD *)(v310 + 40);
      v76 = *(_BYTE *)(v310 + 28) & 0x7F;
      v77 = *(_QWORD *)(v311 + 40);
      v78 = *(_BYTE *)(v311 + 28) & 0x7F;
      if ( v76 == 38 )
      {
        if ( v78 != 38 )
        {
          v322 = v310;
          v321 = v314;
          v325 = &v308;
          v323 = 1;
          v324 = v75;
          v326 = v311;
          if ( v78 == 36 )
            v327 = 2;
          else
            v327 = 0;
          v328 = v77;
          goto LABEL_114;
        }
        v322 = v310;
        v321 = v314;
        v325 = &v308;
        v323 = 1;
        v324 = v75;
        v326 = v311;
        v327 = 1;
        v328 = v77;
      }
      else
      {
        v79 = 2 * (v76 == 36);
        if ( v78 == 38 )
        {
          v322 = v310;
          v321 = v314;
          v325 = &v308;
          v323 = v79;
          v324 = v75;
          v326 = v311;
          v327 = 1;
          v328 = v77;
          goto LABEL_114;
        }
        v322 = v310;
        v321 = v314;
        v323 = v79;
        v324 = v75;
        v325 = &v308;
        v326 = v311;
        v327 = 2 * (v78 == 36);
        v328 = v77;
        if ( v327 != v79 )
        {
LABEL_114:
          sub_E9B5C0((__int64)&v340, &v321, 3u);
          sub_AEA040((__int64)&v340);
          sub_E9A600((__int64)&v340, (__int64 *)&v325, 3u);
          sub_AEA040((__int64)&v340);
          goto LABEL_62;
        }
      }
      if ( v75 != v77 )
        goto LABEL_114;
      v80 = *(_BYTE *)(v311 + 82) & 0x40;
      if ( (*(_BYTE *)(v310 + 82) & 0x40) == 0 || (*(_BYTE *)(v310 + 83) & 2) != 0 )
      {
        if ( !v80 )
        {
          v126 = *(_QWORD *)(v311 + 80);
          goto LABEL_143;
        }
      }
      else
      {
        if ( !v80 )
        {
          v81 = 1;
LABEL_78:
          sub_E9B5C0((__int64)&v340, &v321, 4u);
          sub_E97E40((unsigned __int8 **)&v340, v81);
          sub_AEA040((__int64)&v340);
          sub_E9A600((__int64)&v340, (__int64 *)&v325, 4u);
          goto LABEL_79;
        }
        LOBYTE(v56) = 1;
      }
      v126 = *(_QWORD *)(v311 + 80);
      if ( ((v126 & 0x2000000) == 0) != (_BYTE)v56 )
      {
        v81 = v56;
        LOBYTE(v56) = (v126 & 0x2000000) == 0;
        goto LABEL_78;
      }
LABEL_143:
      v127 = *(_QWORD *)(v310 + 80);
      v128 = (v126 >> 26) & 1;
      v129 = (v127 >> 26) & 1;
      if ( ((v126 & 0x4000000) != 0) != ((v127 & 0x4000000) != 0) )
      {
        sub_E9B5C0((__int64)&v340, &v321, 5u);
        sub_E97E40((unsigned __int8 **)&v340, (unsigned __int8)v129);
        sub_AEA040((__int64)&v340);
        v170 = 5;
LABEL_183:
        sub_E9A600((__int64)&v340, (__int64 *)&v325, v170);
        sub_E97E40((unsigned __int8 **)&v340, (unsigned __int8)v128);
        sub_AEA040((__int64)&v340);
        goto LABEL_62;
      }
      v130 = v126 >> 16;
      v131 = (v127 & 0x80000) != 0;
      v132 = (v127 & 0x40000) != 0;
      v133 = (v130 & 8) != 0;
      v134 = (v127 & 0x80000) != 0;
      v135 = (v130 & 4) != 0;
      v136 = ((unsigned __int8)v130 | BYTE2(v127)) & 4;
      if ( (_DWORD)v136 && (v135 != v132 || v133 != v131) )
      {
        v279 = v132;
        v270 = (v130 & 4) != 0;
        v260 = v134;
        sub_E9B5C0((__int64)&v340, &v321, 6u);
        sub_E97E40((unsigned __int8 **)&v340, v260);
        sub_E97E40((unsigned __int8 **)&v340, v279);
        sub_AEA040((__int64)&v340);
        sub_E9A600((__int64)&v340, (__int64 *)&v325, 6u);
        sub_E97E40((unsigned __int8 **)&v340, v133);
        v137 = v270;
LABEL_148:
        sub_E97E40((unsigned __int8 **)&v340, v137);
        sub_AEA040((__int64)&v340);
        goto LABEL_62;
      }
      LOBYTE(v135) = *(_BYTE *)(v310 + 81) >> 5 == 2;
      v271 = v135;
      LOBYTE(v56) = *(_BYTE *)(v311 + 81) >> 5 == 2;
      if ( v135 != (_BYTE)v56 )
      {
        sub_E9B5C0((__int64)&v340, &v321, 7u);
        sub_E97E40((unsigned __int8 **)&v340, v271);
        sub_AEA040((__int64)&v340);
        sub_E9A600((__int64)&v340, (__int64 *)&v325, 7u);
LABEL_79:
        sub_E97E40((unsigned __int8 **)&v340, (unsigned __int8)v56);
        sub_AEA040((__int64)&v340);
        goto LABEL_62;
      }
      v187 = sub_AED540(v310, v131, v136, v135);
      LOBYTE(v128) = sub_AED540(v258, v131, v188, v189);
      if ( v187 != (_BYTE)v128 )
      {
        sub_E9B5C0((__int64)&v340, &v321, 8u);
        sub_E97E40((unsigned __int8 **)&v340, v187);
        sub_AEA040((__int64)&v340);
        v170 = 8;
        goto LABEL_183;
      }
      v192 = sub_E9C200(v57, v131, v190, v191);
      LOBYTE(v128) = sub_E9C200(v258, v131, v193, v194);
      if ( v192 != (_BYTE)v128 )
      {
        sub_E9B5C0((__int64)&v340, &v321, 9u);
        sub_E97E40((unsigned __int8 **)&v340, v192);
        sub_AEA040((__int64)&v340);
        v170 = 9;
        goto LABEL_183;
      }
      v196 = (*(_QWORD *)(v57 + 80) >> 17) & 1LL;
      v195 = *(_QWORD *)(v258 + 80);
      v197 = (v195 >> 17) & 1;
      if ( ((v195 & 0x20000) != 0) != ((*(_QWORD *)(v57 + 80) & 0x20000LL) != 0) )
      {
        sub_E9B5C0((__int64)&v340, &v321, 0xAu);
        sub_E97E40((unsigned __int8 **)&v340, (unsigned __int8)v196);
        sub_AEA040((__int64)&v340);
        sub_E9A600((__int64)&v340, (__int64 *)&v325, 0xAu);
        sub_E97E40((unsigned __int8 **)&v340, (unsigned __int8)v197);
        sub_AEA040((__int64)&v340);
        goto LABEL_62;
      }
      v339[3] = v57;
      v198 = (void *)*a1;
      v339[0] = a2;
      v338[1] = &v307;
      v329.m128i_i64[1] = (__int64)&v307;
      v339[1] = v315;
      v330 = v318;
      v338[0] = v198;
      v339[2] = v316;
      v329.m128i_i64[0] = (__int64)v198;
      v331 = v319;
      v332 = v258;
      v199 = sub_B76070(v57, v131, (__int64)v198, v316);
      v202 = sub_B76070(v258, v131, v200, v201);
      v205 = 0;
      if ( v199 != v202 )
      {
        v263 = v202;
        sub_E99EB0((__int64)&v340, (__int64)v338, 0);
        sub_AE9DF0((unsigned __int8 **)&v340, v199, 3u);
        sub_AEA040((__int64)&v340);
        sub_E99FA0((__int64)&v340, (__int64)&v329, 0);
        v124 = v263;
LABEL_135:
        sub_AE9DF0((unsigned __int8 **)&v340, v124, 3u);
        sub_AEA040((__int64)&v340);
        goto LABEL_62;
      }
      v206 = v57;
      v207 = v199;
      v208 = v54;
      v209 = 0;
      while ( (unsigned int)v209 < v207 )
      {
        v210 = *(_QWORD *)(*(_QWORD *)(v206 + 120) + 8 * v209);
        v211 = *(_QWORD *)(*(_QWORD *)(v258 + 120) + 8 * v209);
        v212 = *(_QWORD *)(v210 + 48);
        v205 = *(_QWORD *)(v211 + 48);
        v280 = v212;
        v272 = v205;
        if ( v212 != v205 )
        {
          v297 = *(_QWORD *)(*(_QWORD *)(v206 + 120) + 8 * v209);
          v293 = sub_E98500(v212);
          v213 = sub_E98500(v205);
          v210 = v297;
          if ( v293 != v213 )
          {
            v243 = *(_QWORD *)(v280 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v243 + 16) == 1
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v243 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 1
              && (v243 = sub_F63050(*(_QWORD *)(v280 & 0xFFFFFFFFFFFFFFF0LL), v205, v203, v297)) != 0 )
            {
              sub_E99EB0((__int64)&v340, (__int64)v338, 1u);
              v244 = v209 + 1;
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v209 + 1), 3u);
              sub_AE9DF0((unsigned __int8 **)&v340, v280, 8u);
              sub_E97E40((unsigned __int8 **)&v340, 1);
              v245 = *(_QWORD *)(v243 + 32);
              sub_AE9DF0((unsigned __int8 **)&v340, v245, 8u);
              sub_AEA040((__int64)&v340);
            }
            else
            {
              sub_E99EB0((__int64)&v340, (__int64)v338, 1u);
              v244 = v209 + 1;
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v209 + 1), 3u);
              sub_AE9DF0((unsigned __int8 **)&v340, v280, 8u);
              v245 = 0;
              sub_E97E40((unsigned __int8 **)&v340, 0);
              sub_AEA040((__int64)&v340);
            }
            v248 = *(_QWORD *)(v272 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v248 + 16) == 1
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v248 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 1
              && (v248 = sub_F63050(*(_QWORD *)(v272 & 0xFFFFFFFFFFFFFFF0LL), v245, v246, v247)) != 0 )
            {
              sub_E99FA0((__int64)&v340, (__int64)&v329, 1u);
              sub_AE9DF0((unsigned __int8 **)&v340, v244, 3u);
              sub_AE9DF0((unsigned __int8 **)&v340, v272, 8u);
              sub_E97E40((unsigned __int8 **)&v340, 1);
              sub_AE9DF0((unsigned __int8 **)&v340, *(_QWORD *)(v248 + 32), 8u);
              sub_AEA040((__int64)&v340);
            }
            else
            {
              sub_E99FA0((__int64)&v340, (__int64)&v329, 1u);
              sub_AE9DF0((unsigned __int8 **)&v340, v244, 3u);
              sub_AE9DF0((unsigned __int8 **)&v340, v272, 8u);
              sub_E97E40((unsigned __int8 **)&v340, 0);
              sub_AEA040((__int64)&v340);
            }
            goto LABEL_62;
          }
        }
        v214 = *(_QWORD *)(v210 + 40);
        v204 = *(_QWORD *)(v211 + 40);
        v215 = (unsigned int)++v209;
        if ( v214 != v204 )
        {
          v273 = *(_QWORD *)(v211 + 40);
          v264 = v214;
          sub_E99EB0((__int64)&v340, (__int64)v338, 2u);
          sub_AE9DF0((unsigned __int8 **)&v340, v215, 3u);
          sub_E982C0((unsigned __int8 **)&v340, v264);
          sub_AEA040((__int64)&v340);
          sub_E99FA0((__int64)&v340, (__int64)&v329, 2u);
          sub_AE9DF0((unsigned __int8 **)&v340, v215, 3u);
          sub_E982C0((unsigned __int8 **)&v340, v273);
          sub_AEA040((__int64)&v340);
          goto LABEL_62;
        }
      }
      v216 = 0;
      v294 = v208;
      v290 = sub_B76070(v206, v205, v203, v204);
      while ( (unsigned int)v216 < v290 )
      {
        v217 = *(_QWORD *)(*(_QWORD *)(v258 + 120) + 8 * v216);
        v218 = sub_B73640(*(_QWORD *)(*(_QWORD *)(v206 + 120) + 8 * v216));
        v281 = sub_B73640(v217);
        if ( (v218 == 0) != (v281 == 0) )
        {
          sub_E9B5C0((__int64)&v340, &v321, 0xBu);
          sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v216 + 1), 3u);
          sub_E97E40((unsigned __int8 **)&v340, v218 == 0);
          if ( v218 )
          {
            v233 = sub_EEC8C0(v218);
            v234 = v233;
            v235 = HIDWORD(v233);
          }
          else
          {
            LODWORD(v235) = 0;
            v234 = 0;
          }
          v338[0] = (void *)__PAIR64__(v235, v234);
          LOBYTE(v338[1]) = 1;
          sub_AEC610((__int64 *)&v340, (__int64 *)v338);
          sub_AEA040((__int64)&v340);
          sub_E9A600((__int64)&v340, (__int64 *)&v325, 0xBu);
          sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v216 + 1), 3u);
          sub_E97E40((unsigned __int8 **)&v340, v281 == 0);
          if ( v281 )
          {
            v236 = sub_EEC8C0(v281);
            v237 = v236;
            v238 = HIDWORD(v236);
          }
          else
          {
            LODWORD(v238) = 0;
            v237 = 0;
          }
          v338[0] = (void *)__PAIR64__(v238, v237);
          LOBYTE(v338[1]) = 1;
          sub_AEC610((__int64 *)&v340, (__int64 *)v338);
          sub_AEA040((__int64)&v340);
          goto LABEL_62;
        }
        if ( v218 )
        {
          if ( v281 )
          {
            v219 = sub_E985C0(v218);
            if ( v219 != (unsigned int)sub_E985C0(v281) )
            {
              sub_E9B5C0((__int64)&v340, &v321, 0xCu);
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v216 + 1), 3u);
              v241 = (void *)sub_EEC8C0(v218);
              LOBYTE(v338[1]) = 1;
              v338[0] = v241;
              sub_AEC610((__int64 *)&v340, (__int64 *)v338);
              sub_AEA040((__int64)&v340);
              sub_E9A600((__int64)&v340, (__int64 *)&v325, 0xCu);
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v216 + 1), 3u);
              v242 = (void *)sub_EEC8C0(v281);
              LOBYTE(v338[1]) = 1;
              v338[0] = v242;
              sub_AEC610((__int64 *)&v340, (__int64 *)v338);
              sub_AEA040((__int64)&v340);
              goto LABEL_62;
            }
          }
        }
        ++v216;
      }
      v54 = v294;
      v57 = v206;
      v220 = (unsigned int *)sub_B77B50(v206);
      v221 = sub_B77B50(v258);
      if ( (v220 != nullptr) != (v221 != 0) )
      {
        v262 = v221 != 0;
        sub_E9B5C0((__int64)&v340, &v321, 0xDu);
        sub_E97E40((unsigned __int8 **)&v340, v220 != nullptr);
        sub_AEA040((__int64)&v340);
        sub_E9A600((__int64)&v340, (__int64 *)&v325, 0xDu);
        v137 = v262;
        goto LABEL_148;
      }
      if ( v220 )
      {
        v282 = (unsigned int *)v221;
        sub_E97C30((__int64)v338, v220);
        v222 = (int)v282;
        sub_E97C30((__int64)&v340, v282);
        v225 = 0;
        if ( LODWORD(v338[1]) != v341 )
        {
          sub_E9B5C0((__int64)&v329, &v321, 0xEu);
          sub_AE9DF0((unsigned __int8 **)&v329, LODWORD(v338[1]), 3u);
          sub_AEA040((__int64)&v329);
          sub_E9A600((__int64)&v329, (__int64 *)&v325, 0xEu);
          sub_AE9DF0((unsigned __int8 **)&v329, v341, 3u);
          sub_AEA040((__int64)&v329);
LABEL_226:
          if ( v340 != v342 )
            free(v340);
          if ( v338[0] != v339 )
            free(v338[0]);
          goto LABEL_62;
        }
        v226 = (int)v338[1];
        v227 = 0;
        while ( v226 != (_DWORD)v227 )
        {
          v283 = *((__int64 **)v340 + v227);
          v295 = *((__int64 **)v338[0] + v227);
          v291 = sub_E97A80(v295, v222, v225, (int)v283, v223, v224);
          v232 = sub_E97A80(v283, v222, v228, v229, v230, v231);
          v225 = ++v227;
          if ( v291 != v232 )
          {
            sub_E9B5C0((__int64)&v329, &v321, 0xFu);
            sub_F21D50(&v329, v295);
            sub_AE9DF0((unsigned __int8 **)&v329, (unsigned int)v227, 3u);
            sub_AEA040((__int64)&v329);
            sub_E9A600((__int64)&v329, (__int64 *)&v325, 0xFu);
            sub_F21D50(&v329, v283);
            sub_AE9DF0((unsigned __int8 **)&v329, (unsigned int)v227, 3u);
            sub_AEA040((__int64)&v329);
            goto LABEL_226;
          }
        }
        v54 = (int)v54;
        if ( v340 != v342 )
          free(v340);
        if ( v338[0] != v339 )
          free(v338[0]);
      }
      v239 = sub_E988D0(v206);
      v287 = sub_B77F30(v206);
      v284 = sub_E988D0(v258);
      v240 = v284 != (unsigned int)sub_B77F30(v258);
      if ( (v239 != v287) == v240 )
      {
        if ( v239 == v287 )
          goto LABEL_67;
        sub_E9B5C0((__int64)&v340, &v321, 0x11u);
        sub_AEA040((__int64)&v340);
        sub_E9A600((__int64)&v340, (__int64 *)&v325, 0x11u);
        sub_AEA040((__int64)&v340);
      }
      else
      {
        v261 = v240;
        sub_E9B5C0((__int64)&v340, &v321, 0x10u);
        sub_E97E40((unsigned __int8 **)&v340, v239 != v287);
        sub_AEA040((__int64)&v340);
        sub_E9A600((__int64)&v340, (__int64 *)&v325, 0x10u);
        sub_E97E40((unsigned __int8 **)&v340, v261);
        sub_AEA040((__int64)&v340);
      }
LABEL_62:
      if ( (_QWORD *)ptr.m128i_i64[0] != v337 )
        free((void *)ptr.m128i_i64[0]);
      if ( v333 != v335 )
        free(v333);
LABEL_28:
      if ( v318 != &v320 )
        operator delete(v318);
      v27 = 1;
      if ( v315 != &v317 )
        operator delete(v315);
      return v27;
    case 7:
    case 8:
      if ( (unsigned __int8)sub_E9C8F0(a1, a2, v315, v316, v318, v319, v310, v311, v312 == 7) )
        goto LABEL_62;
      goto LABEL_67;
    case 9:
      if ( !(unsigned __int8)sub_E9CD60((__int64)a1, a2, (__int64)v315, v316, (__int64)v318, v319, v310, v311) )
        goto LABEL_67;
      goto LABEL_62;
    case 10:
      v65 = *(_QWORD *)(v310 + 40);
      if ( v65 )
      {
        if ( (v65 & 4) != 0 )
        {
          v67 = 0;
          v66 = *(_QWORD *)(v311 + 40);
          if ( !v66 )
          {
            v69 = (__int64 *)(v65 & 0xFFFFFFFFFFFFFFF8LL);
            goto LABEL_122;
          }
          goto LABEL_56;
        }
        v66 = *(_QWORD *)(v311 + 40);
        v67 = v65 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v66 )
        {
LABEL_56:
          if ( (v66 & 4) == 0 )
          {
            v68 = v66 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v65 & 4) == 0 )
            {
              v69 = nullptr;
LABEL_121:
              v70 = nullptr;
              if ( v67 )
              {
LABEL_60:
                v268 = v67;
                if ( v68 )
                {
                  v71 = sub_BA5880(v310);
                  sub_E99300((__int64)&v340, (__int64)v314, *(unsigned int *)(v57 + 56), v71, 0x14u);
                  sub_E98080((unsigned __int8 **)&v340, v268);
                  sub_AEA040((__int64)&v340);
                  v72 = sub_BA5880(v258);
                  sub_E993B0((__int64)&v340, (_BYTE ***)&v308, v309, *(_DWORD *)(v258 + 56), v72, 0x14u);
                  sub_E98080((unsigned __int8 **)&v340, v68);
                  sub_AEA040((__int64)&v340);
                  goto LABEL_62;
                }
LABEL_126:
                if ( v69 && v70 )
                {
                  v111 = *v69;
                  v112 = *v70;
                  v113 = sub_BA5880(v310);
                  sub_E99300((__int64)&v340, (__int64)v314, *(unsigned int *)(v57 + 56), v113, 0x13u);
                  sub_AE9DF0((unsigned __int8 **)&v340, v111, 8u);
                  sub_AEA040((__int64)&v340);
                  v114 = sub_BA5880(v258);
                  sub_E993B0((__int64)&v340, (_BYTE ***)&v308, v309, *(_DWORD *)(v258 + 56), v114, 0x13u);
                  v115 = 8;
LABEL_129:
                  sub_AE9DF0((unsigned __int8 **)&v340, v112, v115);
                  sub_AEA040((__int64)&v340);
                  goto LABEL_62;
                }
                goto LABEL_140;
              }
LABEL_122:
              v108 = 1;
LABEL_123:
              v109 = sub_BA5880(v310);
              sub_E99300((__int64)&v340, (__int64)v314, *(unsigned int *)(v57 + 56), v109, 0x12u);
              sub_E97E40((unsigned __int8 **)&v340, v69 == nullptr);
              sub_AEA040((__int64)&v340);
              v110 = sub_BA5880(v258);
              sub_E993B0((__int64)&v340, (_BYTE ***)&v308, v309, *(_DWORD *)(v258 + 56), v110, 0x12u);
              sub_E97E40((unsigned __int8 **)&v340, v108);
              sub_AEA040((__int64)&v340);
              goto LABEL_62;
            }
LABEL_58:
            v69 = (__int64 *)(v65 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v66 & 4) != 0 )
            {
              v70 = (__int64 *)(v66 & 0xFFFFFFFFFFFFFFF8LL);
              if ( !v67 )
                goto LABEL_126;
              goto LABEL_60;
            }
            goto LABEL_121;
          }
          v68 = 0;
          if ( (v65 & 4) != 0 )
            goto LABEL_58;
          v70 = (__int64 *)(v66 & 0xFFFFFFFFFFFFFFF8LL);
          v69 = nullptr;
          if ( v67 )
            goto LABEL_126;
LABEL_140:
          v108 = v70 == nullptr;
          goto LABEL_123;
        }
        v70 = nullptr;
        if ( (v65 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
LABEL_173:
          v108 = 1;
          v69 = nullptr;
          goto LABEL_123;
        }
      }
      else
      {
        v125 = *(_QWORD *)(v311 + 40);
        if ( !v125 )
          goto LABEL_173;
        v69 = nullptr;
        if ( (v125 & 4) == 0 )
          goto LABEL_122;
        v70 = (__int64 *)(v125 & 0xFFFFFFFFFFFFFFF8LL);
      }
      v69 = nullptr;
      goto LABEL_140;
    case 11:
      v82 = *(_QWORD *)(v310 + 56);
      v83 = *(_QWORD *)(v311 + 56);
      v321 = v314;
      v325 = &v308;
      v302 = v82;
      v84 = *(_DWORD *)(v83 + 20);
      v303 = v83;
      v85 = *(_DWORD *)(v82 + 20) & 0x1FFFFFFF;
      v322 = v310;
      v86 = v84 & 0x1FFFFFFF;
      v326 = v311;
      if ( v86 != v85 )
      {
        sub_E9AB40((__int64)&v340, &v321, 0x15u);
        sub_AE9DF0((unsigned __int8 **)&v340, *(_DWORD *)(v302 + 20) & 0x1FFFFFFF, 3u);
        sub_AEA040((__int64)&v340);
        sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x15u);
        v124 = *(_DWORD *)(v83 + 20) & 0x1FFFFFFF;
        goto LABEL_135;
      }
      if ( !v86 )
        goto LABEL_67;
      v289 = *(_QWORD *)(v82 + 24);
      v286 = *(_QWORD *)(v83 + 24);
      v87 = *(_BYTE *)(v286 + 28) & 0x7F;
      if ( (_BYTE)v87 == (*(_BYTE *)(v289 + 28) & 0x7F) )
      {
        v306 = v310;
        v304 = (unsigned int)(v86 - 1);
        v300 = v56;
        v56 = *(_QWORD *)(v83 + 24);
        v305 = v312;
        v88 = *(_QWORD *)(v82 + 24);
        v89 = 0;
        while ( 1 )
        {
          v90 = sub_995750(v56);
          v92 = v91;
          v93 = v90;
          v94 = sub_995750(v88);
          if ( v95 != v92 || v95 && (v87 = (int)v93, memcmp(v94, v93, v95)) )
          {
            sub_E9AB40((__int64)&v340, &v321, 0x17u);
            sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
            v104 = *(_QWORD *)(v88 + 40);
            v105 = 0;
            if ( (v104 & 7) == 0 )
              v105 = (v104 & 0xFFFFFFFFFFFFFFF8LL) != 0;
            sub_E97E40((unsigned __int8 **)&v340, v105);
            sub_E98080((unsigned __int8 **)&v340, v88);
            sub_AEA040((__int64)&v340);
            sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x17u);
            sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
            v106 = 0;
            v107 = *(_QWORD *)(v56 + 40);
            if ( (v107 & 7) == 0 )
              v106 = (v107 & 0xFFFFFFFFFFFFFFF8LL) != 0;
            sub_E97E40((unsigned __int8 **)&v340, v106);
            sub_E98080((unsigned __int8 **)&v340, v56);
            sub_AEA040((__int64)&v340);
            goto LABEL_62;
          }
          v96 = *(_BYTE *)(v88 + 28) & 0x7F;
          if ( v96 == 67 )
          {
            if ( (*(_BYTE *)(v56 + 28) & 0x7F) != 0x43 )
              goto LABEL_91;
            v154 = *(_QWORD *)(v56 + 72);
            v155 = *(_QWORD *)(v88 + 72);
            v156 = v154 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v155 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v155 >> 1) & 3) == 1 )
            {
              if ( v156 && ((v154 >> 1) & 3) != 1 )
              {
LABEL_180:
                v169 = 0;
                LOBYTE(v56) = 1;
LABEL_181:
                sub_E9AB40((__int64)&v340, &v321, 0x18u);
                sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
                sub_E97E40((unsigned __int8 **)&v340, v169);
                sub_AEA040((__int64)&v340);
                sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x18u);
                sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
                goto LABEL_79;
              }
            }
            else
            {
              if ( !v156 || ((v154 >> 1) & 3) == 1 )
              {
LABEL_278:
                LOBYTE(v56) = v300;
                v169 = 1;
                goto LABEL_181;
              }
              v157 = (const __m128i *)sub_A5EDD0(v88);
              v329 = _mm_loadu_si128(v157);
              v330 = (void *)v157[1].m128i_i64[0];
              v158 = (const __m128i *)sub_A5EDD0(v56);
              *(__m128i *)v338 = _mm_loadu_si128(v158);
              v339[0] = v158[1].m128i_i64[0];
              v163 = sub_E97A80(v329.m128i_i64, v87, v159, v160, v161, v162);
              if ( v163 != (unsigned int)sub_E97A80((__int64 *)v338, v87, v164, v165, v166, v167) )
                goto LABEL_277;
            }
            v168 = sub_BBE5D0(v88);
            if ( v168 != sub_BBE5D0(v56) )
            {
              sub_E9AB40((__int64)&v340, &v321, 0x1Bu);
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
              v253 = sub_BBE5D0(v88);
              sub_E97E40((unsigned __int8 **)&v340, v253);
              sub_AEA040((__int64)&v340);
              sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x1Bu);
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
              v254 = sub_BBE5D0(v56);
              sub_E97E40((unsigned __int8 **)&v340, v254);
              sub_AEA040((__int64)&v340);
              goto LABEL_62;
            }
            v96 = *(_BYTE *)(v88 + 28) & 0x7F;
          }
          if ( v96 == 68 )
          {
            if ( (*(_BYTE *)(v56 + 28) & 0x7F) != 0x44 )
              goto LABEL_91;
            v138 = *(_QWORD *)(v56 + 56);
            v139 = sub_E98810(*(_QWORD *)(v88 + 56));
            if ( v139 != (unsigned int)sub_E98810(v138) )
              goto LABEL_205;
            v140 = *(_QWORD *)(v56 + 72);
            v141 = *(_QWORD *)(v88 + 72);
            v142 = v140 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v141 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v141 >> 1) & 3) == 1 )
            {
              if ( v142 && ((v140 >> 1) & 3) != 1 )
                goto LABEL_180;
            }
            else
            {
              if ( !v142 || ((v140 >> 1) & 3) == 1 )
                goto LABEL_278;
              v143 = (const __m128i *)sub_A5EFB0(v88);
              v329 = _mm_loadu_si128(v143);
              v330 = (void *)v143[1].m128i_i64[0];
              v144 = (const __m128i *)sub_A5EFB0(v56);
              *(__m128i *)v338 = _mm_loadu_si128(v144);
              v339[0] = v144[1].m128i_i64[0];
              v149 = sub_E97A80(v329.m128i_i64, v87, v145, v146, v147, v148);
              if ( v149 != (unsigned int)sub_E97A80((__int64 *)v338, v87, v150, v151, v152, v153) )
                goto LABEL_277;
            }
            if ( ((*(_BYTE *)(v56 + 80) & 2) != 0) != ((*(_BYTE *)(v88 + 80) & 2) != 0) )
            {
              sub_E9AB40((__int64)&v340, &v321, 0x1Bu);
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
              sub_E97E40((unsigned __int8 **)&v340, (*(_BYTE *)(v88 + 80) & 2) != 0);
              sub_AEA040((__int64)&v340);
              sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x1Bu);
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
              sub_E97E40((unsigned __int8 **)&v340, (*(_BYTE *)(v56 + 80) & 2) != 0);
              sub_AEA040((__int64)&v340);
              goto LABEL_62;
            }
            v96 = *(_BYTE *)(v88 + 28) & 0x7F;
          }
          if ( v96 == 47 && (*(_BYTE *)(v56 + 28) & 0x7F) == 0x2F )
          {
            v171 = *(_QWORD *)(v56 + 48);
            v172 = sub_E98500(*(_QWORD *)(v88 + 48));
            if ( v172 != (unsigned int)sub_E98500(v171) )
            {
LABEL_205:
              sub_E9AB40((__int64)&v340, &v321, 0x1Au);
              v112 = (unsigned int)(v89 + 1);
              sub_AE9DF0((unsigned __int8 **)&v340, v112, 3u);
              sub_AEA040((__int64)&v340);
              sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x1Au);
              v115 = 3;
              goto LABEL_129;
            }
            v173 = *(_QWORD *)(v56 + 72);
            v174 = *(_QWORD *)(v88 + 72);
            v175 = v173 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v174 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v174 >> 1) & 3) == 1 )
            {
              if ( v175 && ((v173 >> 1) & 3) != 1 )
                goto LABEL_180;
            }
            else
            {
              if ( !v175 || ((v173 >> 1) & 3) == 1 )
                goto LABEL_278;
              v176 = (const __m128i *)sub_A5EEA0(v88);
              v329 = _mm_loadu_si128(v176);
              v330 = (void *)v176[1].m128i_i64[0];
              v177 = (const __m128i *)sub_A5EEA0(v56);
              *(__m128i *)v338 = _mm_loadu_si128(v177);
              v339[0] = v177[1].m128i_i64[0];
              v182 = sub_E97A80(v329.m128i_i64, v87, v178, v179, v180, v181);
              if ( v182 != (unsigned int)sub_E97A80((__int64 *)v338, v87, v183, v184, v185, v186) )
              {
LABEL_277:
                sub_E9AB40((__int64)&v340, &v321, 0x19u);
                sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
                sub_F21D50(&v340, &v329);
                sub_AEA040((__int64)&v340);
                sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x19u);
                sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
                sub_F21D50(&v340, v338);
                sub_AEA040((__int64)&v340);
                goto LABEL_62;
              }
            }
            if ( *(_BYTE *)(v88 + 80) != *(_BYTE *)(v56 + 80) )
            {
              sub_E9AB40((__int64)&v340, &v321, 0x1Bu);
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
              sub_E97E40((unsigned __int8 **)&v340, *(unsigned __int8 *)(v88 + 80));
              sub_AEA040((__int64)&v340);
              sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x1Bu);
              sub_AE9DF0((unsigned __int8 **)&v340, (unsigned int)(v89 + 1), 3u);
              sub_E97E40((unsigned __int8 **)&v340, *(unsigned __int8 *)(v56 + 80));
              sub_AEA040((__int64)&v340);
              goto LABEL_62;
            }
          }
LABEL_91:
          v97 = v89 + 1;
          if ( v304 == v89 )
          {
            v54 = v305;
            v57 = v306;
LABEL_67:
            sub_FC70B0(&v340, *a1, *(unsigned int *)(v57 + 24), 2335);
            sub_E98080((unsigned __int8 **)&v340, a2);
            sub_E97E40((unsigned __int8 **)&v340, v316 == 0);
            sub_AEC220((unsigned __int8 **)&v340, v315, v316);
            sub_E97E40((unsigned __int8 **)&v340, v54);
            v73 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
            LOBYTE(v338[1]) = 1;
            v338[0] = v73;
            sub_AEC610((__int64 *)&v340, (__int64 *)v338);
            sub_AEA040((__int64)&v340);
            sub_FC70B0(&v340, *a1, *(unsigned int *)(v258 + 24), 2517);
            sub_E97E40((unsigned __int8 **)&v340, v319 == 0);
            sub_AEC220((unsigned __int8 **)&v340, v318, v319);
            sub_E97E40((unsigned __int8 **)&v340, v54);
            v74 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v258 + 16LL))(v258);
            LOBYTE(v338[1]) = 1;
            v338[0] = v74;
            sub_AEC610((__int64 *)&v340, (__int64 *)v338);
            sub_AEA040((__int64)&v340);
            goto LABEL_62;
          }
          v88 = *(_QWORD *)(v302 + 8 * v89 + 32);
          v56 = *(_QWORD *)(v303 + 8 * v89++ + 32);
          if ( (*(_BYTE *)(v56 + 28) & 0x7F) != (*(_BYTE *)(v88 + 28) & 0x7F) )
          {
            v286 = v56;
            v289 = v88;
            goto LABEL_262;
          }
        }
      }
      v97 = 0;
LABEL_262:
      v249 = (unsigned int)(v97 + 1);
      sub_E9AB40((__int64)v338, &v321, 0x16u);
      sub_AE9DF0((unsigned __int8 **)v338, v249, 3u);
      v250 = *(_BYTE *)(v289 + 28) & 0x7F;
      switch ( v250 )
      {
        case 'C':
          v251 = 0;
          break;
        case 'D':
          v251 = 2;
          break;
        case '/':
          v251 = 1;
          break;
        default:
          goto LABEL_270;
      }
      v56 = (__int64)&v340;
      sub_E97E40((unsigned __int8 **)v338, v251);
      sub_AEA040((__int64)v338);
      sub_E9A080((__int64)&v340, (__int64 *)&v325, 0x16u);
      sub_AE9DF0((unsigned __int8 **)&v340, v249, 3u);
      v250 = *(_BYTE *)(v286 + 28) & 0x7F;
      if ( v250 == 67 )
      {
        v252 = 0;
        goto LABEL_268;
      }
      if ( v250 == 68 )
      {
        v252 = 2;
LABEL_268:
        sub_E97E40((unsigned __int8 **)v56, v252);
        sub_AEA040(v56);
        goto LABEL_62;
      }
LABEL_270:
      while ( v250 != 47 )
        ;
      v252 = 1;
      goto LABEL_268;
    default:
      goto LABEL_67;
  }
}
