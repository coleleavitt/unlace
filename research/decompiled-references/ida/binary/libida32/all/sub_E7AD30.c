__int64 __fastcall sub_E7AD30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // r10
  __int64 v56; // rsi
  __int64 v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // r12
  __int64 v60; // r15
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 *v63; // r14
  unsigned __int8 v64; // r15
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rbp
  __int64 v69; // rax
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // r12
  __int64 *v72; // rbp
  __int64 *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  void *v76; // rax
  void *v77; // rax
  __int64 v78; // rdi
  char v79; // dl
  __int64 v80; // rsi
  char v81; // al
  int v82; // edx
  char v83; // al
  unsigned __int8 v84; // bp
  __int64 v85; // rcx
  __int64 v86; // rbx
  int v87; // eax
  int v88; // edx
  int v89; // eax
  int v90; // esi
  __int64 v91; // rbp
  __int64 v92; // r13
  const char *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rbx
  const char *v96; // r15
  const char *v97; // rax
  size_t v98; // rdx
  char v99; // al
  int v100; // ebx
  unsigned __int64 v101; // rbx
  int v102; // r12d
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rbx
  __int64 v112; // r15
  unsigned int v113; // ebp
  __int64 v114; // rax
  __int64 v115; // rax
  _BOOL8 v116; // rsi
  _BOOL8 v117; // rsi
  __int64 v118; // rax
  _BOOL8 v119; // r12
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // r12
  __int64 v123; // rbp
  __int64 v124; // rax
  __int64 v125; // rax
  unsigned __int8 v126; // dl
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rbp
  unsigned int v132; // eax
  __int64 v133; // rbx
  unsigned int v134; // eax
  __int64 v135; // r12
  unsigned int v136; // eax
  __int64 v137; // r12
  unsigned int v138; // eax
  __int64 v139; // rsi
  __int64 v140; // rax
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rdx
  __int64 v143; // r12
  __int64 v144; // rbx
  unsigned __int64 v145; // rax
  _BOOL8 v146; // rsi
  bool v147; // r8
  bool v148; // r12
  bool v149; // r9
  _BOOL8 v150; // rcx
  __int64 v151; // rdx
  __int64 v152; // rsi
  __int64 v153; // r15
  int v154; // ebx
  __int64 v155; // rax
  __int64 v156; // rdx
  unsigned __int64 v157; // rcx
  const __m128i *v158; // rax
  const __m128i *v159; // rax
  int v160; // edx
  int v161; // ecx
  int v162; // r8d
  int v163; // r9d
  int v164; // ebx
  int v165; // edx
  int v166; // ecx
  int v167; // r8d
  int v168; // r9d
  __int64 v169; // rax
  __int64 v170; // rdx
  unsigned __int64 v171; // rcx
  const __m128i *v172; // rax
  const __m128i *v173; // rax
  int v174; // edx
  int v175; // ecx
  int v176; // r8d
  int v177; // r9d
  int v178; // ebx
  int v179; // edx
  int v180; // ecx
  int v181; // r8d
  int v182; // r9d
  char v183; // bl
  unsigned __int8 v184; // bp
  unsigned int v185; // edx
  __int64 v186; // r15
  int v187; // ebx
  __int64 v188; // rax
  __int64 v189; // rdx
  unsigned __int64 v190; // rcx
  const __m128i *v191; // rax
  const __m128i *v192; // rax
  int v193; // edx
  int v194; // ecx
  int v195; // r8d
  int v196; // r9d
  int v197; // ebx
  int v198; // edx
  int v199; // ecx
  int v200; // r8d
  int v201; // r9d
  unsigned __int8 v202; // bl
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // rdx
  __int64 v206; // rcx
  unsigned __int8 v207; // bl
  __int64 v208; // rdx
  __int64 v209; // rcx
  unsigned __int64 v210; // rax
  __int64 v211; // r12
  __int64 v212; // rbx
  void *v213; // rdx
  unsigned int v214; // r12d
  __int64 v215; // rdx
  __int64 v216; // rcx
  unsigned int v217; // eax
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // rsi
  __int64 v221; // r13
  unsigned int v222; // r14d
  int v223; // r12d
  __int64 v224; // rbp
  __int64 v225; // rcx
  __int64 v226; // r15
  __int64 v227; // rax
  int v228; // eax
  __int64 v229; // rax
  __int64 v230; // rbx
  __int64 v231; // r15
  __int64 v232; // rbp
  unsigned __int64 v233; // r12
  __int64 v234; // rdx
  __int64 v235; // r8
  __int64 v236; // r9
  _BOOL8 v237; // rcx
  int v238; // ebp
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // r8
  __int64 v242; // r9
  unsigned int *v243; // rbx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // rcx
  int v249; // r12d
  __int64 v250; // rbx
  int v251; // edx
  int v252; // ecx
  int v253; // r8d
  int v254; // r9d
  int v255; // eax
  unsigned __int64 v256; // rax
  unsigned int v257; // edx
  unsigned __int64 v258; // rax
  unsigned __int64 v259; // rax
  unsigned int v260; // edx
  unsigned __int64 v261; // rax
  int v262; // ebx
  __int64 v263; // rdx
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  bool v267; // al
  void *v268; // rax
  void *v269; // rax
  __int64 v270; // r15
  unsigned int v271; // ebx
  __int64 v272; // rsi
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // rbp
  __int64 v276; // rbx
  char v277; // al
  unsigned int v278; // eax
  unsigned int v279; // eax
  unsigned __int8 v280; // al
  unsigned __int8 v281; // al
  __int64 *v282; // [rsp+8h] [rbp-330h]
  __int64 v283; // [rsp+8h] [rbp-330h]
  __int64 v284; // [rsp+8h] [rbp-330h]
  __int64 v285; // [rsp+8h] [rbp-330h]
  __int64 v286; // [rsp+8h] [rbp-330h]
  bool v287; // [rsp+8h] [rbp-330h]
  bool v288; // [rsp+8h] [rbp-330h]
  bool v289; // [rsp+8h] [rbp-330h]
  unsigned int v290; // [rsp+8h] [rbp-330h]
  __int64 v291; // [rsp+8h] [rbp-330h]
  int v292; // [rsp+10h] [rbp-328h]
  __int64 v293; // [rsp+10h] [rbp-328h]
  unsigned __int8 v294; // [rsp+10h] [rbp-328h]
  __int64 v295; // [rsp+10h] [rbp-328h]
  __int64 v296; // [rsp+10h] [rbp-328h]
  bool v297; // [rsp+10h] [rbp-328h]
  bool v298; // [rsp+10h] [rbp-328h]
  __int64 v299; // [rsp+10h] [rbp-328h]
  __int64 v300; // [rsp+10h] [rbp-328h]
  unsigned int v301; // [rsp+18h] [rbp-320h]
  __int64 v302; // [rsp+18h] [rbp-320h]
  unsigned __int64 v303; // [rsp+18h] [rbp-320h]
  unsigned int v304; // [rsp+18h] [rbp-320h]
  int v305; // [rsp+18h] [rbp-320h]
  bool v306; // [rsp+18h] [rbp-320h]
  __int64 v307; // [rsp+18h] [rbp-320h]
  unsigned __int64 v308; // [rsp+18h] [rbp-320h]
  unsigned int *v309; // [rsp+18h] [rbp-320h]
  __int64 *v310; // [rsp+18h] [rbp-320h]
  int v311; // [rsp+18h] [rbp-320h]
  __int64 v312; // [rsp+20h] [rbp-318h]
  __int64 v313; // [rsp+20h] [rbp-318h]
  int v314; // [rsp+20h] [rbp-318h]
  unsigned __int32 v315; // [rsp+28h] [rbp-310h]
  __int64 v316; // [rsp+28h] [rbp-310h]
  unsigned int v317; // [rsp+28h] [rbp-310h]
  int v318; // [rsp+28h] [rbp-310h]
  __int64 v319; // [rsp+30h] [rbp-308h]
  int v320; // [rsp+30h] [rbp-308h]
  int v321; // [rsp+30h] [rbp-308h]
  __int64 *v322; // [rsp+30h] [rbp-308h]
  unsigned __int32 v323; // [rsp+38h] [rbp-300h]
  __int64 v324; // [rsp+38h] [rbp-300h]
  char v327; // [rsp+48h] [rbp-2F0h]
  __int64 v329; // [rsp+68h] [rbp-2D0h]
  __int64 v330; // [rsp+70h] [rbp-2C8h]
  __int64 v331; // [rsp+78h] [rbp-2C0h]
  int v332; // [rsp+84h] [rbp-2B4h]
  __int64 v333; // [rsp+88h] [rbp-2B0h]
  char v334; // [rsp+9Fh] [rbp-299h] BYREF
  void **v335; // [rsp+A0h] [rbp-298h] BYREF
  _QWORD *v336; // [rsp+A8h] [rbp-290h]
  __int64 v337; // [rsp+B0h] [rbp-288h] BYREF
  __int64 v338; // [rsp+B8h] [rbp-280h]
  int v339; // [rsp+C0h] [rbp-278h]
  unsigned int v340; // [rsp+C4h] [rbp-274h]
  _QWORD v341[4]; // [rsp+D0h] [rbp-268h] BYREF
  void *v342; // [rsp+F0h] [rbp-248h] BYREF
  __int64 v343; // [rsp+F8h] [rbp-240h]
  __int64 v344; // [rsp+100h] [rbp-238h] BYREF
  void *v345; // [rsp+110h] [rbp-228h] BYREF
  __int64 v346; // [rsp+118h] [rbp-220h]
  __int64 v347; // [rsp+120h] [rbp-218h] BYREF
  __int64 *v348; // [rsp+130h] [rbp-208h] BYREF
  __int64 v349; // [rsp+138h] [rbp-200h]
  int v350; // [rsp+140h] [rbp-1F8h]
  __int64 v351; // [rsp+148h] [rbp-1F0h]
  void ***v352; // [rsp+150h] [rbp-1E8h] BYREF
  __int64 v353; // [rsp+158h] [rbp-1E0h]
  int v354; // [rsp+160h] [rbp-1D8h]
  __int64 v355; // [rsp+168h] [rbp-1D0h]
  __m128i v356; // [rsp+170h] [rbp-1C8h] BYREF
  void *v357; // [rsp+180h] [rbp-1B8h]
  __int64 v358; // [rsp+188h] [rbp-1B0h]
  __int64 v359; // [rsp+190h] [rbp-1A8h]
  void *v360; // [rsp+1C0h] [rbp-178h] BYREF
  __int64 v361; // [rsp+1C8h] [rbp-170h]
  _QWORD v362[8]; // [rsp+1D0h] [rbp-168h] BYREF
  __m128i ptr; // [rsp+210h] [rbp-128h] BYREF
  _QWORD v364[8]; // [rsp+220h] [rbp-118h] BYREF
  void *v365[2]; // [rsp+260h] [rbp-D8h] BYREF
  _QWORD v366[8]; // [rsp+270h] [rbp-C8h] BYREF
  void *v367; // [rsp+2B0h] [rbp-88h] BYREF
  unsigned int v368; // [rsp+2B8h] [rbp-80h]
  _BYTE v369[120]; // [rsp+2C0h] [rbp-78h] BYREF

  if ( a3 == a2 )
    return 0;
  sub_E78530((__int64)&v342, a2);
  sub_E78530((__int64)&v345, a3);
  v7 = *(_QWORD *)(a2 + 128);
  if ( v7 != a4 )
  {
    v362[0] = a1;
    v356.m128i_i64[1] = (__int64)a1;
    v8 = *(_DWORD *)(a4 + 16);
    v360 = (void *)a2;
    v361 = (__int64)&v342;
    v356.m128i_i64[0] = (__int64)&v345;
    v9 = *(_DWORD *)(v7 + 16);
    v301 = v9;
    if ( v9 != v8 )
    {
      if ( v9 )
      {
        if ( (*(_BYTE *)(v7 + 24) & 1) != 0 )
          v29 = (unsigned int *)sub_B72C40(v7);
        else
          v29 = *(unsigned int **)(v7 + 24);
        v30 = v29[6 * v301 - 5];
        v31 = *v29;
      }
      else
      {
        v30 = 0;
        v31 = 0;
      }
      sub_E75250((__int64)&v367, (__int64)&v360, *(unsigned int *)(a2 + 24), (v30 << 32) | v31, 0);
      sub_AC60B0((unsigned __int8 **)&v367, v301, 3u);
      sub_AC6300((__int64)&v367);
      v32 = sub_E73E10(a4);
      sub_E75300((__int64)&v367, &v356, (_QWORD *)v356.m128i_i64[1], *(_DWORD *)(a3 + 24), v32, 0);
      sub_AC60B0((unsigned __int8 **)&v367, v8, 3u);
      sub_AC6300((__int64)&v367);
      goto LABEL_28;
    }
    v10 = *(_DWORD *)(v7 + 20);
    v11 = *(_DWORD *)(a4 + 20);
    if ( v10 != v11 )
    {
      v61 = sub_E73E10(v7);
      sub_E75250((__int64)&v367, (__int64)&v360, *(unsigned int *)(a2 + 24), v61, 1u);
      sub_AC60B0((unsigned __int8 **)&v367, v10, 3u);
      sub_AC6300((__int64)&v367);
      v62 = sub_E73E10(a4);
      sub_E75300((__int64)&v367, &v356, (_QWORD *)v356.m128i_i64[1], *(_DWORD *)(a3 + 24), v62, 1u);
      sub_AC60B0((unsigned __int8 **)&v367, v11, 3u);
      sub_AC6300((__int64)&v367);
      goto LABEL_28;
    }
    v12 = (*(_BYTE *)(v7 + 24) & 1) != 0 ? sub_B72C40(v7) : *(_QWORD *)(v7 + 24);
    v13 = (*(_BYTE *)(a4 + 24) & 1) != 0 ? sub_B72C40(a4) : *(_QWORD *)(a4 + 24);
    if ( v301 )
    {
      v14 = (const __m128i *)v12;
      LODWORD(v15) = 0;
      v16 = (const __m128i *)v13;
      v17 = v14;
      while ( 1 )
      {
        ptr = _mm_loadu_si128(v17);
        v364[0] = v17[1].m128i_i64[0];
        v18 = v17->m128i_u8[12];
        v323 = v17->m128i_i32[0];
        v19 = v17->m128i_i32[1];
        v20 = (__int64 *)v17[1].m128i_i64[0];
        *(__m128i *)v365 = _mm_loadu_si128(v16);
        LODWORD(v319) = v19;
        v21 = (v18 >> 2) & 3;
        v366[0] = v16[1].m128i_i64[0];
        v315 = v16->m128i_i32[0];
        LODWORD(v312) = v16->m128i_i32[1];
        v22 = ((unsigned __int8)v16->m128i_i8[12] >> 2) & 3;
        v282 = (__int64 *)v16[1].m128i_i64[0];
        v23 = *(_QWORD *)(*v20 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v23 + 8) & 0xF) != 0 )
          v23 = sub_F411C0(*v20);
        v292 = sub_E747C0(v23 & 0xFFFFFFFFFFFFFFF0LL);
        v24 = *(_QWORD *)(*v282 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v24 + 8) & 0xF) != 0 )
          v24 = sub_F411C0(*v282);
        v15 = (unsigned int)(v15 + 1);
        if ( v292 != (unsigned int)sub_E747C0(v24 & 0xFFFFFFFFFFFFFFF0LL) )
          break;
        if ( (ptr.m128i_i8[12] & 1) != (BYTE4(v365[1]) & 1) )
        {
          v63 = v20;
          v64 = BYTE4(v365[1]) & 1;
          v294 = ptr.m128i_i8[12] & 1;
          sub_E75250((__int64)&v367, (__int64)&v360, *(unsigned int *)(a2 + 24), (v319 << 32) | v323, 3u);
          sub_AC60B0((unsigned __int8 **)&v367, v15, 3u);
          sub_E74100((unsigned __int8 **)&v367, v294);
          v65 = sub_E73E50(v63);
          sub_AC60B0((unsigned __int8 **)&v367, v65, 8u);
          sub_AC6300((__int64)&v367);
          sub_E75300(
            (__int64)&v367,
            &v356,
            (_QWORD *)v356.m128i_i64[1],
            *(_DWORD *)(a3 + 24),
            v315 | (unsigned __int64)(v312 << 32),
            3u);
          sub_AC60B0((unsigned __int8 **)&v367, v15, 3u);
          sub_E74100((unsigned __int8 **)&v367, v64);
          goto LABEL_20;
        }
        if ( v22 != v21 )
        {
          sub_E75250((__int64)&v367, (__int64)&v360, *(unsigned int *)(a2 + 24), (v319 << 32) | v323, 4u);
          sub_AC60B0((unsigned __int8 **)&v367, v15, 3u);
          v66 = sub_E73E50(v20);
          sub_AC60B0((unsigned __int8 **)&v367, v66, 8u);
          sub_E74100((unsigned __int8 **)&v367, v21);
          sub_AC6300((__int64)&v367);
          sub_E75300(
            (__int64)&v367,
            &v356,
            (_QWORD *)v356.m128i_i64[1],
            *(_DWORD *)(a3 + 24),
            v315 | (unsigned __int64)(v312 << 32),
            4u);
          sub_AC60B0((unsigned __int8 **)&v367, v15, 3u);
          v67 = sub_E73E50(v282);
          sub_AC60B0((unsigned __int8 **)&v367, v67, 8u);
          sub_E74100((unsigned __int8 **)&v367, v22);
          sub_AC6300((__int64)&v367);
          goto LABEL_28;
        }
        v17 = (const __m128i *)((char *)v17 + 24);
        v16 = (const __m128i *)((char *)v16 + 24);
        if ( v301 == (_DWORD)v15 )
          goto LABEL_33;
      }
      sub_E75250((__int64)&v367, (__int64)&v360, *(unsigned int *)(a2 + 24), (v319 << 32) | v323, 2u);
      sub_AC60B0((unsigned __int8 **)&v367, v15, 3u);
      v25 = sub_E73E50(v20);
      sub_AC60B0((unsigned __int8 **)&v367, v25, 8u);
      sub_AC6300((__int64)&v367);
      sub_E75300(
        (__int64)&v367,
        &v356,
        (_QWORD *)v356.m128i_i64[1],
        *(_DWORD *)(a3 + 24),
        v315 | (unsigned __int64)(v312 << 32),
        2u);
      sub_AC60B0((unsigned __int8 **)&v367, v15, 3u);
LABEL_20:
      v26 = sub_E73E50(v282);
      sub_AC60B0((unsigned __int8 **)&v367, v26, 8u);
      sub_AC6300((__int64)&v367);
      goto LABEL_28;
    }
  }
LABEL_33:
  v33 = sub_B734F0(a2);
  v34 = sub_B734F0(a3);
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
        v283 = v36 + 24 + 8 * v40;
        while ( 1 )
        {
          v41 = *v38;
          v42 = *v37;
          v43 = sub_E74940(*v38);
          if ( v43 != (unsigned int)sub_E74940(v42) )
            break;
          ++v37;
          ++v38;
          if ( v39 == (_QWORD)v37 || v283 == (_QWORD)v38 )
            goto LABEL_45;
        }
        v44 = sub_E73EA0(v41);
        v45 = sub_E73EA0(v42);
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
              v284 = v49;
              v302 = *(_QWORD *)(v41 + 40);
              v293 = v50;
              sub_FA3370(&v367, *a1, *(unsigned int *)(v41 + 24), 2341);
              sub_E74340((unsigned __int8 **)&v367, a2);
              sub_E74100((unsigned __int8 **)&v367, v343 == 0);
              sub_AC84E0((unsigned __int8 **)&v367, v342, v343);
              v51 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
              LOBYTE(v365[1]) = 1;
              v365[0] = v51;
              sub_AC88D0((__int64 *)&v367, (__int64 *)v365);
              sub_E74100((unsigned __int8 **)&v367, v293);
              sub_E74100((unsigned __int8 **)&v367, v44);
              sub_E74580((unsigned __int8 **)&v367, v302);
              sub_AC6300((__int64)&v367);
              sub_FA3370(&v367, *a1, *(unsigned int *)(v42 + 24), 2523);
              sub_AC84E0((unsigned __int8 **)&v367, v345, v346);
              v52 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
              LOBYTE(v365[1]) = 1;
              v365[0] = v52;
              sub_AC88D0((__int64 *)&v367, (__int64 *)v365);
              sub_E74100((unsigned __int8 **)&v367, v284);
              sub_E74100((unsigned __int8 **)&v367, v48);
              sub_E74580((unsigned __int8 **)&v367, v47);
              sub_AC6300((__int64)&v367);
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
  v360 = v362;
  ptr.m128i_i64[0] = (__int64)v364;
  v361 = 0x400000000LL;
  ptr.m128i_i64[1] = 0x400000000LL;
  sub_E74A00((__int64)&v360, a2, a2 + 64);
  sub_E74A00((__int64)&ptr, a3, a2 + 64);
  sub_E7A630((__int64)&v337, (__int64 **)&v360, (__int64 **)&ptr);
  v56 = v340;
  v57 = v339;
  LOBYTE(v58) = v339 == 15 || v340 == 15;
  v59 = (unsigned int)v58;
  if ( (_BYTE)v58 )
  {
    sub_E7A970(a1, v55, a2, v342, v343, a3, v345, v346);
    goto LABEL_62;
  }
  if ( v339 != v340 )
  {
    sub_E7AAD0(a1, v55, a2, v342, v343, a3, v345, v346);
    goto LABEL_62;
  }
  v60 = v337;
  v285 = v338;
  v335 = &v345;
  v341[0] = a2;
  v341[1] = &v342;
  v341[2] = a1;
  v336 = a1;
  switch ( v339 )
  {
    case 4:
      v303 = *(_QWORD *)(v337 + 40) & 0xFFFFFFFFFFFFFFFCLL;
      v101 = *(_QWORD *)(v338 + 40) & 0xFFFFFFFFFFFFFFFCLL;
      v102 = sub_E74880(v303, v340, v58, (__int64)&v345, v53, v54);
      if ( v102 == (unsigned int)sub_E74880(v101, v56, v103, v104, v105, v106) )
      {
        v111 = *(_QWORD *)(v60 + 48);
        v296 = *(_QWORD *)(v285 + 48);
        if ( (v111 != 0) == (v296 != 0) )
        {
          if ( !v111 )
            goto LABEL_67;
          LOBYTE(v107) = 1;
          v305 = sub_E74880(v111, v56, v107, v108, v109, v110);
          if ( v305 == (unsigned int)sub_E74880(v296, v56, v127, v128, v129, v130) )
            goto LABEL_67;
          v131 = sub_EC8B80(v111);
          v132 = sub_EC7AA0(v111);
          sub_E755C0((__int64)&v367, (__int64)v341, v132, v131, 1u);
          sub_AC6300((__int64)&v367);
          v133 = sub_EC8B80(v296);
          v134 = sub_EC7AA0(v296);
          sub_E75670((__int64)&v367, (_BYTE ***)&v335, v336, v134, v133, 1u);
          sub_AC6300((__int64)&v367);
        }
        else
        {
          if ( v111 )
          {
            v304 = sub_EC7AA0(v111);
            v112 = sub_EC8B80(v111);
          }
          else
          {
            v304 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
            v112 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
          }
          if ( v296 )
          {
            v113 = sub_EC7AA0(v296);
            v114 = sub_EC8B80(v296);
          }
          else
          {
            v113 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v285 + 16LL))(v285);
            v114 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v285 + 16LL))(v285);
          }
          v286 = v114;
          sub_E755C0((__int64)&v367, (__int64)v341, v304, v112, 2u);
          sub_E74100((unsigned __int8 **)&v367, v111 == 0);
          sub_AC6300((__int64)&v367);
          sub_E75670((__int64)&v367, (_BYTE ***)&v335, v336, v113, v286, 2u);
          sub_E74100((unsigned __int8 **)&v367, v296 == 0);
          sub_AC6300((__int64)&v367);
        }
      }
      else
      {
        v135 = sub_EC8B80(v303);
        v136 = sub_EC7AA0(v303);
        sub_E755C0((__int64)&v367, (__int64)v341, v136, v135, 0);
        sub_AC6300((__int64)&v367);
        v137 = sub_EC8B80(v101);
        v138 = sub_EC7AA0(v101);
        sub_E75670((__int64)&v367, (_BYTE ***)&v335, v336, v138, v137, 0);
        sub_AC6300((__int64)&v367);
      }
      goto LABEL_62;
    case 5:
      if ( !(unsigned __int8)sub_E78580((__int64)a1, a2, (__int64)v342, v343, (__int64)v345, v346, v337, v338) )
        goto LABEL_67;
      goto LABEL_62;
    case 6:
      v78 = *(_QWORD *)(v337 + 40);
      v79 = *(_BYTE *)(v337 + 28) & 0x7F;
      v80 = *(_QWORD *)(v338 + 40);
      v81 = *(_BYTE *)(v338 + 28) & 0x7F;
      if ( v79 == 38 )
      {
        if ( v81 != 38 )
        {
          v349 = v337;
          v348 = v341;
          v352 = &v335;
          v350 = 1;
          v351 = v78;
          v353 = v338;
          if ( v81 == 36 )
            v354 = 2;
          else
            v354 = 0;
          v355 = v80;
          goto LABEL_114;
        }
        v349 = v337;
        v348 = v341;
        v352 = &v335;
        v350 = 1;
        v351 = v78;
        v353 = v338;
        v354 = 1;
        v355 = v80;
      }
      else
      {
        v82 = 2 * (v79 == 36);
        if ( v81 == 38 )
        {
          v349 = v337;
          v348 = v341;
          v352 = &v335;
          v350 = v82;
          v351 = v78;
          v353 = v338;
          v354 = 1;
          v355 = v80;
          goto LABEL_114;
        }
        v349 = v337;
        v348 = v341;
        v350 = v82;
        v351 = v78;
        v352 = &v335;
        v353 = v338;
        v354 = 2 * (v81 == 36);
        v355 = v80;
        if ( v354 != v82 )
        {
LABEL_114:
          sub_E77880((__int64)&v367, &v348, 3u);
          sub_AC6300((__int64)&v367);
          sub_E768C0((__int64)&v367, (__int64 *)&v352, 3u);
          sub_AC6300((__int64)&v367);
          goto LABEL_62;
        }
      }
      if ( v78 != v80 )
        goto LABEL_114;
      v83 = *(_BYTE *)(v338 + 82) & 0x40;
      if ( (*(_BYTE *)(v337 + 82) & 0x40) == 0 || (*(_BYTE *)(v337 + 83) & 2) != 0 )
      {
        if ( !v83 )
        {
          v141 = *(_QWORD *)(v338 + 80);
          goto LABEL_143;
        }
      }
      else
      {
        if ( !v83 )
        {
          v84 = 1;
LABEL_78:
          sub_E77880((__int64)&v367, &v348, 4u);
          sub_E74100((unsigned __int8 **)&v367, v84);
          sub_AC6300((__int64)&v367);
          sub_E768C0((__int64)&v367, (__int64 *)&v352, 4u);
          goto LABEL_79;
        }
        LOBYTE(v59) = 1;
      }
      v141 = *(_QWORD *)(v338 + 80);
      if ( ((v141 & 0x2000000) == 0) != (_BYTE)v59 )
      {
        v84 = v59;
        LOBYTE(v59) = (v141 & 0x2000000) == 0;
        goto LABEL_78;
      }
LABEL_143:
      v142 = *(_QWORD *)(v337 + 80);
      v143 = (v141 >> 26) & 1;
      v144 = (v142 >> 26) & 1;
      if ( ((v141 & 0x4000000) != 0) != ((v142 & 0x4000000) != 0) )
      {
        sub_E77880((__int64)&v367, &v348, 5u);
        sub_E74100((unsigned __int8 **)&v367, (unsigned __int8)v144);
        sub_AC6300((__int64)&v367);
        v185 = 5;
LABEL_183:
        sub_E768C0((__int64)&v367, (__int64 *)&v352, v185);
        sub_E74100((unsigned __int8 **)&v367, (unsigned __int8)v143);
        sub_AC6300((__int64)&v367);
        goto LABEL_62;
      }
      v145 = v141 >> 16;
      v146 = (v142 & 0x80000) != 0;
      v147 = (v142 & 0x40000) != 0;
      v148 = (v145 & 8) != 0;
      v149 = (v142 & 0x80000) != 0;
      v150 = (v145 & 4) != 0;
      v151 = ((unsigned __int8)v145 | BYTE2(v142)) & 4;
      if ( (_DWORD)v151 && (v150 != v147 || v148 != v146) )
      {
        v306 = v147;
        v297 = (v145 & 4) != 0;
        v287 = v149;
        sub_E77880((__int64)&v367, &v348, 6u);
        sub_E74100((unsigned __int8 **)&v367, v287);
        sub_E74100((unsigned __int8 **)&v367, v306);
        sub_AC6300((__int64)&v367);
        sub_E768C0((__int64)&v367, (__int64 *)&v352, 6u);
        sub_E74100((unsigned __int8 **)&v367, v148);
        v152 = v297;
LABEL_148:
        sub_E74100((unsigned __int8 **)&v367, v152);
        sub_AC6300((__int64)&v367);
        goto LABEL_62;
      }
      LOBYTE(v150) = *(_BYTE *)(v337 + 81) >> 5 == 2;
      v298 = v150;
      LOBYTE(v59) = *(_BYTE *)(v338 + 81) >> 5 == 2;
      if ( v150 != (_BYTE)v59 )
      {
        sub_E77880((__int64)&v367, &v348, 7u);
        sub_E74100((unsigned __int8 **)&v367, v298);
        sub_AC6300((__int64)&v367);
        sub_E768C0((__int64)&v367, (__int64 *)&v352, 7u);
LABEL_79:
        sub_E74100((unsigned __int8 **)&v367, (unsigned __int8)v59);
        sub_AC6300((__int64)&v367);
        goto LABEL_62;
      }
      v202 = sub_AC9800(v337, v146, v151, v150);
      LOBYTE(v143) = sub_AC9800(v285, v146, v203, v204);
      if ( v202 != (_BYTE)v143 )
      {
        sub_E77880((__int64)&v367, &v348, 8u);
        sub_E74100((unsigned __int8 **)&v367, v202);
        sub_AC6300((__int64)&v367);
        v185 = 8;
        goto LABEL_183;
      }
      v207 = sub_E784C0(v60, v146, v205, v206);
      LOBYTE(v143) = sub_E784C0(v285, v146, v208, v209);
      if ( v207 != (_BYTE)v143 )
      {
        sub_E77880((__int64)&v367, &v348, 9u);
        sub_E74100((unsigned __int8 **)&v367, v207);
        sub_AC6300((__int64)&v367);
        v185 = 9;
        goto LABEL_183;
      }
      v211 = (*(_QWORD *)(v60 + 80) >> 17) & 1LL;
      v210 = *(_QWORD *)(v285 + 80);
      v212 = (v210 >> 17) & 1;
      if ( ((v210 & 0x20000) != 0) != ((*(_QWORD *)(v60 + 80) & 0x20000LL) != 0) )
      {
        sub_E77880((__int64)&v367, &v348, 0xAu);
        sub_E74100((unsigned __int8 **)&v367, (unsigned __int8)v211);
        sub_AC6300((__int64)&v367);
        sub_E768C0((__int64)&v367, (__int64 *)&v352, 0xAu);
        sub_E74100((unsigned __int8 **)&v367, (unsigned __int8)v212);
        sub_AC6300((__int64)&v367);
        goto LABEL_62;
      }
      v366[3] = v60;
      v213 = (void *)*a1;
      v366[0] = a2;
      v365[1] = &v334;
      v356.m128i_i64[1] = (__int64)&v334;
      v366[1] = v342;
      v357 = v345;
      v365[0] = v213;
      v366[2] = v343;
      v356.m128i_i64[0] = (__int64)v213;
      v358 = v346;
      v359 = v285;
      v214 = sub_B52330(v60, v146, (__int64)v213, v343);
      v217 = sub_B52330(v285, v146, v215, v216);
      v220 = 0;
      if ( v214 != v217 )
      {
        v290 = v217;
        sub_E76170((__int64)&v367, (__int64)v365, 0);
        sub_AC60B0((unsigned __int8 **)&v367, v214, 3u);
        sub_AC6300((__int64)&v367);
        sub_E76260((__int64)&v367, (__int64)&v356, 0);
        v139 = v290;
LABEL_135:
        sub_AC60B0((unsigned __int8 **)&v367, v139, 3u);
        sub_AC6300((__int64)&v367);
        goto LABEL_62;
      }
      v221 = v60;
      v222 = v214;
      v223 = v57;
      v224 = 0;
      while ( (unsigned int)v224 < v222 )
      {
        v225 = *(_QWORD *)(*(_QWORD *)(v221 + 120) + 8 * v224);
        v226 = *(_QWORD *)(*(_QWORD *)(v285 + 120) + 8 * v224);
        v227 = *(_QWORD *)(v225 + 48);
        v220 = *(_QWORD *)(v226 + 48);
        v307 = v227;
        v299 = v220;
        if ( v227 != v220 )
        {
          v324 = *(_QWORD *)(*(_QWORD *)(v221 + 120) + 8 * v224);
          v320 = sub_E747C0(v227);
          v228 = sub_E747C0(v220);
          v225 = v324;
          if ( v320 != v228 )
          {
            v270 = *(_QWORD *)(v307 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v270 + 16) == 1
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v270 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 1
              && (v270 = sub_F3F310(*(_QWORD *)(v307 & 0xFFFFFFFFFFFFFFF0LL), v220, v218, v324)) != 0 )
            {
              sub_E76170((__int64)&v367, (__int64)v365, 1u);
              v271 = v224 + 1;
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v224 + 1), 3u);
              sub_AC60B0((unsigned __int8 **)&v367, v307, 8u);
              sub_E74100((unsigned __int8 **)&v367, 1);
              v272 = *(_QWORD *)(v270 + 32);
              sub_AC60B0((unsigned __int8 **)&v367, v272, 8u);
              sub_AC6300((__int64)&v367);
            }
            else
            {
              sub_E76170((__int64)&v367, (__int64)v365, 1u);
              v271 = v224 + 1;
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v224 + 1), 3u);
              sub_AC60B0((unsigned __int8 **)&v367, v307, 8u);
              v272 = 0;
              sub_E74100((unsigned __int8 **)&v367, 0);
              sub_AC6300((__int64)&v367);
            }
            v275 = *(_QWORD *)(v299 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v275 + 16) == 1
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v275 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 1
              && (v275 = sub_F3F310(*(_QWORD *)(v299 & 0xFFFFFFFFFFFFFFF0LL), v272, v273, v274)) != 0 )
            {
              sub_E76260((__int64)&v367, (__int64)&v356, 1u);
              sub_AC60B0((unsigned __int8 **)&v367, v271, 3u);
              sub_AC60B0((unsigned __int8 **)&v367, v299, 8u);
              sub_E74100((unsigned __int8 **)&v367, 1);
              sub_AC60B0((unsigned __int8 **)&v367, *(_QWORD *)(v275 + 32), 8u);
              sub_AC6300((__int64)&v367);
            }
            else
            {
              sub_E76260((__int64)&v367, (__int64)&v356, 1u);
              sub_AC60B0((unsigned __int8 **)&v367, v271, 3u);
              sub_AC60B0((unsigned __int8 **)&v367, v299, 8u);
              sub_E74100((unsigned __int8 **)&v367, 0);
              sub_AC6300((__int64)&v367);
            }
            goto LABEL_62;
          }
        }
        v229 = *(_QWORD *)(v225 + 40);
        v219 = *(_QWORD *)(v226 + 40);
        v230 = (unsigned int)++v224;
        if ( v229 != v219 )
        {
          v300 = *(_QWORD *)(v226 + 40);
          v291 = v229;
          sub_E76170((__int64)&v367, (__int64)v365, 2u);
          sub_AC60B0((unsigned __int8 **)&v367, v230, 3u);
          sub_E74580((unsigned __int8 **)&v367, v291);
          sub_AC6300((__int64)&v367);
          sub_E76260((__int64)&v367, (__int64)&v356, 2u);
          sub_AC60B0((unsigned __int8 **)&v367, v230, 3u);
          sub_E74580((unsigned __int8 **)&v367, v300);
          sub_AC6300((__int64)&v367);
          goto LABEL_62;
        }
      }
      v231 = 0;
      v321 = v223;
      v317 = sub_B52330(v221, v220, v218, v219);
      while ( (unsigned int)v231 < v317 )
      {
        v232 = *(_QWORD *)(*(_QWORD *)(v285 + 120) + 8 * v231);
        v233 = sub_B4F900(*(_QWORD *)(*(_QWORD *)(v221 + 120) + 8 * v231));
        v308 = sub_B4F900(v232);
        v237 = v308 == 0;
        if ( (v233 == 0) != v237 )
        {
          sub_E77880((__int64)&v367, &v348, 0xBu);
          sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v231 + 1), 3u);
          sub_E74100((unsigned __int8 **)&v367, v233 == 0);
          if ( v233 )
          {
            v256 = sub_EC8B80(v233);
            v257 = v256;
            v258 = HIDWORD(v256);
          }
          else
          {
            LODWORD(v258) = 0;
            v257 = 0;
          }
          v365[0] = (void *)__PAIR64__(v258, v257);
          LOBYTE(v365[1]) = 1;
          sub_AC88D0((__int64 *)&v367, (__int64 *)v365);
          sub_AC6300((__int64)&v367);
          sub_E768C0((__int64)&v367, (__int64 *)&v352, 0xBu);
          sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v231 + 1), 3u);
          sub_E74100((unsigned __int8 **)&v367, v308 == 0);
          if ( v308 )
          {
            v259 = sub_EC8B80(v308);
            v260 = v259;
            v261 = HIDWORD(v259);
          }
          else
          {
            LODWORD(v261) = 0;
            v260 = 0;
          }
          v365[0] = (void *)__PAIR64__(v261, v260);
          LOBYTE(v365[1]) = 1;
          sub_AC88D0((__int64 *)&v367, (__int64 *)v365);
          sub_AC6300((__int64)&v367);
          goto LABEL_62;
        }
        if ( v233 )
        {
          if ( v308 )
          {
            v238 = sub_E74880(v233, v220, v234, v237, v235, v236);
            if ( v238 != (unsigned int)sub_E74880(v308, v220, v239, v240, v241, v242) )
            {
              sub_E77880((__int64)&v367, &v348, 0xCu);
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v231 + 1), 3u);
              v268 = (void *)sub_EC8B80(v233);
              LOBYTE(v365[1]) = 1;
              v365[0] = v268;
              sub_AC88D0((__int64 *)&v367, (__int64 *)v365);
              sub_AC6300((__int64)&v367);
              sub_E768C0((__int64)&v367, (__int64 *)&v352, 0xCu);
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v231 + 1), 3u);
              v269 = (void *)sub_EC8B80(v308);
              LOBYTE(v365[1]) = 1;
              v365[0] = v269;
              sub_AC88D0((__int64 *)&v367, (__int64 *)v365);
              sub_AC6300((__int64)&v367);
              goto LABEL_62;
            }
          }
        }
        ++v231;
      }
      v57 = v321;
      v60 = v221;
      v243 = (unsigned int *)sub_B53E10(v221);
      v244 = sub_B53E10(v285);
      LOBYTE(v248) = v244 != 0;
      if ( (v243 != nullptr) != (v244 != 0) )
      {
        v289 = v244 != 0;
        sub_E77880((__int64)&v367, &v348, 0xDu);
        sub_E74100((unsigned __int8 **)&v367, v243 != nullptr);
        sub_AC6300((__int64)&v367);
        sub_E768C0((__int64)&v367, (__int64 *)&v352, 0xDu);
        v152 = v289;
        goto LABEL_148;
      }
      if ( v243 )
      {
        v309 = (unsigned int *)v244;
        sub_E73EF0((__int64)v365, v243);
        v220 = (__int64)v309;
        sub_E73EF0((__int64)&v367, v309);
        v245 = 0;
        if ( LODWORD(v365[1]) != v368 )
        {
          sub_E77880((__int64)&v356, &v348, 0xEu);
          sub_AC60B0((unsigned __int8 **)&v356, LODWORD(v365[1]), 3u);
          sub_AC6300((__int64)&v356);
          sub_E768C0((__int64)&v356, (__int64 *)&v352, 0xEu);
          sub_AC60B0((unsigned __int8 **)&v356, v368, 3u);
          sub_AC6300((__int64)&v356);
LABEL_226:
          if ( v367 != v369 )
            free(v367);
          if ( v365[0] != v366 )
            free(v365[0]);
          goto LABEL_62;
        }
        v249 = (int)v365[1];
        v250 = 0;
        while ( v249 != (_DWORD)v250 )
        {
          v310 = *((__int64 **)v367 + v250);
          v322 = *((__int64 **)v365[0] + v250);
          v318 = sub_E73D40(v322, v220, v245, (int)v310, v246, v247);
          v255 = sub_E73D40(v310, v220, v251, v252, v253, v254);
          v245 = (unsigned int)++v250;
          if ( v318 != v255 )
          {
            sub_E77880((__int64)&v356, &v348, 0xFu);
            sub_EFE010(&v356, v322);
            sub_AC60B0((unsigned __int8 **)&v356, (unsigned int)v250, 3u);
            sub_AC6300((__int64)&v356);
            sub_E768C0((__int64)&v356, (__int64 *)&v352, 0xFu);
            sub_EFE010(&v356, v310);
            sub_AC60B0((unsigned __int8 **)&v356, (unsigned int)v250, 3u);
            sub_AC6300((__int64)&v356);
            goto LABEL_226;
          }
        }
        v57 = (int)v57;
        if ( v367 != v369 )
          free(v367);
        if ( v365[0] != v366 )
          free(v365[0]);
      }
      v262 = sub_E74B90(v221, v220, v245, v248, v246, v247);
      v314 = sub_B541F0(v221);
      v311 = sub_E74B90(v285, v220, v263, v264, v265, v266);
      v267 = v311 != (unsigned int)sub_B541F0(v285);
      if ( (v262 != v314) == v267 )
      {
        if ( v262 == v314 )
          goto LABEL_67;
        sub_E77880((__int64)&v367, &v348, 0x11u);
        sub_AC6300((__int64)&v367);
        sub_E768C0((__int64)&v367, (__int64 *)&v352, 0x11u);
        sub_AC6300((__int64)&v367);
      }
      else
      {
        v288 = v267;
        sub_E77880((__int64)&v367, &v348, 0x10u);
        sub_E74100((unsigned __int8 **)&v367, v262 != v314);
        sub_AC6300((__int64)&v367);
        sub_E768C0((__int64)&v367, (__int64 *)&v352, 0x10u);
        sub_E74100((unsigned __int8 **)&v367, v288);
        sub_AC6300((__int64)&v367);
      }
LABEL_62:
      if ( (_QWORD *)ptr.m128i_i64[0] != v364 )
        free((void *)ptr.m128i_i64[0]);
      if ( v360 != v362 )
        free(v360);
LABEL_28:
      if ( v345 != &v347 )
        operator delete(v345);
      v27 = 1;
      if ( v342 != &v344 )
        operator delete(v342);
      return v27;
    case 7:
    case 8:
      if ( (unsigned __int8)sub_E78BB0(a1, a2, v342, v343, v345, v346, v337, v338, v339 == 7) )
        goto LABEL_62;
      goto LABEL_67;
    case 9:
      if ( !(unsigned __int8)sub_E79020((__int64)a1, a2, (__int64)v342, v343, (__int64)v345, v346, v337, v338) )
        goto LABEL_67;
      goto LABEL_62;
    case 10:
      v68 = *(_QWORD *)(v337 + 40);
      if ( v68 )
      {
        if ( (v68 & 4) != 0 )
        {
          v70 = 0;
          v69 = *(_QWORD *)(v338 + 40);
          if ( !v69 )
          {
            v72 = (__int64 *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
            goto LABEL_122;
          }
          goto LABEL_56;
        }
        v69 = *(_QWORD *)(v338 + 40);
        v70 = v68 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v69 )
        {
LABEL_56:
          if ( (v69 & 4) == 0 )
          {
            v71 = v69 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v68 & 4) == 0 )
            {
              v72 = nullptr;
LABEL_121:
              v73 = nullptr;
              if ( v70 )
              {
LABEL_60:
                v295 = v70;
                if ( v71 )
                {
                  v74 = sub_B81B40(v337);
                  sub_E755C0((__int64)&v367, (__int64)v341, *(unsigned int *)(v60 + 56), v74, 0x14u);
                  sub_E74340((unsigned __int8 **)&v367, v295);
                  sub_AC6300((__int64)&v367);
                  v75 = sub_B81B40(v285);
                  sub_E75670((__int64)&v367, (_BYTE ***)&v335, v336, *(_DWORD *)(v285 + 56), v75, 0x14u);
                  sub_E74340((unsigned __int8 **)&v367, v71);
                  sub_AC6300((__int64)&v367);
                  goto LABEL_62;
                }
LABEL_126:
                if ( v72 && v73 )
                {
                  v122 = *v72;
                  v123 = *v73;
                  v124 = sub_B81B40(v337);
                  sub_E755C0((__int64)&v367, (__int64)v341, *(unsigned int *)(v60 + 56), v124, 0x13u);
                  sub_AC60B0((unsigned __int8 **)&v367, v122, 8u);
                  sub_AC6300((__int64)&v367);
                  v125 = sub_B81B40(v285);
                  sub_E75670((__int64)&v367, (_BYTE ***)&v335, v336, *(_DWORD *)(v285 + 56), v125, 0x13u);
                  v126 = 8;
LABEL_129:
                  sub_AC60B0((unsigned __int8 **)&v367, v123, v126);
                  sub_AC6300((__int64)&v367);
                  goto LABEL_62;
                }
                goto LABEL_140;
              }
LABEL_122:
              v119 = 1;
LABEL_123:
              v120 = sub_B81B40(v337);
              sub_E755C0((__int64)&v367, (__int64)v341, *(unsigned int *)(v60 + 56), v120, 0x12u);
              sub_E74100((unsigned __int8 **)&v367, v72 == nullptr);
              sub_AC6300((__int64)&v367);
              v121 = sub_B81B40(v285);
              sub_E75670((__int64)&v367, (_BYTE ***)&v335, v336, *(_DWORD *)(v285 + 56), v121, 0x12u);
              sub_E74100((unsigned __int8 **)&v367, v119);
              sub_AC6300((__int64)&v367);
              goto LABEL_62;
            }
LABEL_58:
            v72 = (__int64 *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v69 & 4) != 0 )
            {
              v73 = (__int64 *)(v69 & 0xFFFFFFFFFFFFFFF8LL);
              if ( !v70 )
                goto LABEL_126;
              goto LABEL_60;
            }
            goto LABEL_121;
          }
          v71 = 0;
          if ( (v68 & 4) != 0 )
            goto LABEL_58;
          v73 = (__int64 *)(v69 & 0xFFFFFFFFFFFFFFF8LL);
          v72 = nullptr;
          if ( v70 )
            goto LABEL_126;
LABEL_140:
          v119 = v73 == nullptr;
          goto LABEL_123;
        }
        v73 = nullptr;
        if ( (v68 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
LABEL_173:
          v119 = 1;
          v72 = nullptr;
          goto LABEL_123;
        }
      }
      else
      {
        v140 = *(_QWORD *)(v338 + 40);
        if ( !v140 )
          goto LABEL_173;
        v72 = nullptr;
        if ( (v140 & 4) == 0 )
          goto LABEL_122;
        v73 = (__int64 *)(v140 & 0xFFFFFFFFFFFFFFF8LL);
      }
      v72 = nullptr;
      goto LABEL_140;
    case 11:
      v85 = *(_QWORD *)(v337 + 56);
      v86 = *(_QWORD *)(v338 + 56);
      v348 = v341;
      v352 = &v335;
      v329 = v85;
      v87 = *(_DWORD *)(v86 + 20);
      v330 = v86;
      v88 = *(_DWORD *)(v85 + 20) & 0x1FFFFFFF;
      v349 = v337;
      v89 = v87 & 0x1FFFFFFF;
      v353 = v338;
      if ( v89 != v88 )
      {
        sub_E76E00((__int64)&v367, &v348, 0x15u);
        sub_AC60B0((unsigned __int8 **)&v367, *(_DWORD *)(v329 + 20) & 0x1FFFFFFF, 3u);
        sub_AC6300((__int64)&v367);
        sub_E76340((__int64)&v367, (__int64 *)&v352, 0x15u);
        v139 = *(_DWORD *)(v86 + 20) & 0x1FFFFFFF;
        goto LABEL_135;
      }
      if ( !v89 )
        goto LABEL_67;
      v316 = *(_QWORD *)(v85 + 24);
      v313 = *(_QWORD *)(v86 + 24);
      v90 = *(_BYTE *)(v313 + 28) & 0x7F;
      if ( (_BYTE)v90 == (*(_BYTE *)(v316 + 28) & 0x7F) )
      {
        v333 = v337;
        v331 = (unsigned int)(v89 - 1);
        v327 = v59;
        v59 = *(_QWORD *)(v86 + 24);
        v332 = v339;
        v91 = *(_QWORD *)(v85 + 24);
        v92 = 0;
        while ( 1 )
        {
          v93 = sub_971A10(v59);
          v95 = v94;
          v96 = v93;
          v97 = sub_971A10(v91);
          if ( v98 != v95 || v98 && (v90 = (int)v96, memcmp(v97, v96, v98)) )
          {
            sub_E76E00((__int64)&v367, &v348, 0x17u);
            sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
            v115 = *(_QWORD *)(v91 + 40);
            v116 = 0;
            if ( (v115 & 7) == 0 )
              v116 = (v115 & 0xFFFFFFFFFFFFFFF8LL) != 0;
            sub_E74100((unsigned __int8 **)&v367, v116);
            sub_E74340((unsigned __int8 **)&v367, v91);
            sub_AC6300((__int64)&v367);
            sub_E76340((__int64)&v367, (__int64 *)&v352, 0x17u);
            sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
            v117 = 0;
            v118 = *(_QWORD *)(v59 + 40);
            if ( (v118 & 7) == 0 )
              v117 = (v118 & 0xFFFFFFFFFFFFFFF8LL) != 0;
            sub_E74100((unsigned __int8 **)&v367, v117);
            sub_E74340((unsigned __int8 **)&v367, v59);
            sub_AC6300((__int64)&v367);
            goto LABEL_62;
          }
          v99 = *(_BYTE *)(v91 + 28) & 0x7F;
          if ( v99 == 67 )
          {
            if ( (*(_BYTE *)(v59 + 28) & 0x7F) != 0x43 )
              goto LABEL_91;
            v169 = *(_QWORD *)(v59 + 72);
            v170 = *(_QWORD *)(v91 + 72);
            v171 = v169 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v170 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v170 >> 1) & 3) == 1 )
            {
              if ( v171 && ((v169 >> 1) & 3) != 1 )
              {
LABEL_180:
                v184 = 0;
                LOBYTE(v59) = 1;
LABEL_181:
                sub_E76E00((__int64)&v367, &v348, 0x18u);
                sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
                sub_E74100((unsigned __int8 **)&v367, v184);
                sub_AC6300((__int64)&v367);
                sub_E76340((__int64)&v367, (__int64 *)&v352, 0x18u);
                sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
                goto LABEL_79;
              }
            }
            else
            {
              if ( !v171 || ((v169 >> 1) & 3) == 1 )
              {
LABEL_278:
                LOBYTE(v59) = v327;
                v184 = 1;
                goto LABEL_181;
              }
              v172 = (const __m128i *)sub_A3B090(v91);
              v356 = _mm_loadu_si128(v172);
              v357 = (void *)v172[1].m128i_i64[0];
              v173 = (const __m128i *)sub_A3B090(v59);
              *(__m128i *)v365 = _mm_loadu_si128(v173);
              v366[0] = v173[1].m128i_i64[0];
              v178 = sub_E73D40(v356.m128i_i64, v90, v174, v175, v176, v177);
              if ( v178 != (unsigned int)sub_E73D40((__int64 *)v365, v90, v179, v180, v181, v182) )
                goto LABEL_277;
            }
            v183 = sub_B9A890(v91);
            if ( v183 != sub_B9A890(v59) )
            {
              sub_E76E00((__int64)&v367, &v348, 0x1Bu);
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
              v280 = sub_B9A890(v91);
              sub_E74100((unsigned __int8 **)&v367, v280);
              sub_AC6300((__int64)&v367);
              sub_E76340((__int64)&v367, (__int64 *)&v352, 0x1Bu);
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
              v281 = sub_B9A890(v59);
              sub_E74100((unsigned __int8 **)&v367, v281);
              sub_AC6300((__int64)&v367);
              goto LABEL_62;
            }
            v99 = *(_BYTE *)(v91 + 28) & 0x7F;
          }
          if ( v99 == 68 )
          {
            if ( (*(_BYTE *)(v59 + 28) & 0x7F) != 0x44 )
              goto LABEL_91;
            v153 = *(_QWORD *)(v59 + 56);
            v154 = sub_E74AD0(*(_QWORD *)(v91 + 56));
            if ( v154 != (unsigned int)sub_E74AD0(v153) )
              goto LABEL_205;
            v155 = *(_QWORD *)(v59 + 72);
            v156 = *(_QWORD *)(v91 + 72);
            v157 = v155 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v156 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v156 >> 1) & 3) == 1 )
            {
              if ( v157 && ((v155 >> 1) & 3) != 1 )
                goto LABEL_180;
            }
            else
            {
              if ( !v157 || ((v155 >> 1) & 3) == 1 )
                goto LABEL_278;
              v158 = (const __m128i *)sub_A3B270(v91);
              v356 = _mm_loadu_si128(v158);
              v357 = (void *)v158[1].m128i_i64[0];
              v159 = (const __m128i *)sub_A3B270(v59);
              *(__m128i *)v365 = _mm_loadu_si128(v159);
              v366[0] = v159[1].m128i_i64[0];
              v164 = sub_E73D40(v356.m128i_i64, v90, v160, v161, v162, v163);
              if ( v164 != (unsigned int)sub_E73D40((__int64 *)v365, v90, v165, v166, v167, v168) )
                goto LABEL_277;
            }
            if ( ((*(_BYTE *)(v59 + 80) & 2) != 0) != ((*(_BYTE *)(v91 + 80) & 2) != 0) )
            {
              sub_E76E00((__int64)&v367, &v348, 0x1Bu);
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
              sub_E74100((unsigned __int8 **)&v367, (*(_BYTE *)(v91 + 80) & 2) != 0);
              sub_AC6300((__int64)&v367);
              sub_E76340((__int64)&v367, (__int64 *)&v352, 0x1Bu);
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
              sub_E74100((unsigned __int8 **)&v367, (*(_BYTE *)(v59 + 80) & 2) != 0);
              sub_AC6300((__int64)&v367);
              goto LABEL_62;
            }
            v99 = *(_BYTE *)(v91 + 28) & 0x7F;
          }
          if ( v99 == 47 && (*(_BYTE *)(v59 + 28) & 0x7F) == 0x2F )
          {
            v186 = *(_QWORD *)(v59 + 48);
            v187 = sub_E747C0(*(_QWORD *)(v91 + 48));
            if ( v187 != (unsigned int)sub_E747C0(v186) )
            {
LABEL_205:
              sub_E76E00((__int64)&v367, &v348, 0x1Au);
              v123 = (unsigned int)(v92 + 1);
              sub_AC60B0((unsigned __int8 **)&v367, v123, 3u);
              sub_AC6300((__int64)&v367);
              sub_E76340((__int64)&v367, (__int64 *)&v352, 0x1Au);
              v126 = 3;
              goto LABEL_129;
            }
            v188 = *(_QWORD *)(v59 + 72);
            v189 = *(_QWORD *)(v91 + 72);
            v190 = v188 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v189 & 0xFFFFFFFFFFFFFFF8LL) == 0 || ((v189 >> 1) & 3) == 1 )
            {
              if ( v190 && ((v188 >> 1) & 3) != 1 )
                goto LABEL_180;
            }
            else
            {
              if ( !v190 || ((v188 >> 1) & 3) == 1 )
                goto LABEL_278;
              v191 = (const __m128i *)sub_A3B160(v91);
              v356 = _mm_loadu_si128(v191);
              v357 = (void *)v191[1].m128i_i64[0];
              v192 = (const __m128i *)sub_A3B160(v59);
              *(__m128i *)v365 = _mm_loadu_si128(v192);
              v366[0] = v192[1].m128i_i64[0];
              v197 = sub_E73D40(v356.m128i_i64, v90, v193, v194, v195, v196);
              if ( v197 != (unsigned int)sub_E73D40((__int64 *)v365, v90, v198, v199, v200, v201) )
              {
LABEL_277:
                sub_E76E00((__int64)&v367, &v348, 0x19u);
                sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
                sub_EFE010(&v367, &v356);
                sub_AC6300((__int64)&v367);
                sub_E76340((__int64)&v367, (__int64 *)&v352, 0x19u);
                sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
                sub_EFE010(&v367, v365);
                sub_AC6300((__int64)&v367);
                goto LABEL_62;
              }
            }
            if ( *(_BYTE *)(v91 + 80) != *(_BYTE *)(v59 + 80) )
            {
              sub_E76E00((__int64)&v367, &v348, 0x1Bu);
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
              sub_E74100((unsigned __int8 **)&v367, *(unsigned __int8 *)(v91 + 80));
              sub_AC6300((__int64)&v367);
              sub_E76340((__int64)&v367, (__int64 *)&v352, 0x1Bu);
              sub_AC60B0((unsigned __int8 **)&v367, (unsigned int)(v92 + 1), 3u);
              sub_E74100((unsigned __int8 **)&v367, *(unsigned __int8 *)(v59 + 80));
              sub_AC6300((__int64)&v367);
              goto LABEL_62;
            }
          }
LABEL_91:
          v100 = v92 + 1;
          if ( v331 == v92 )
          {
            v57 = v332;
            v60 = v333;
LABEL_67:
            sub_FA3370(&v367, *a1, *(unsigned int *)(v60 + 24), 2335);
            sub_E74340((unsigned __int8 **)&v367, a2);
            sub_E74100((unsigned __int8 **)&v367, v343 == 0);
            sub_AC84E0((unsigned __int8 **)&v367, v342, v343);
            sub_E74100((unsigned __int8 **)&v367, v57);
            v76 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
            LOBYTE(v365[1]) = 1;
            v365[0] = v76;
            sub_AC88D0((__int64 *)&v367, (__int64 *)v365);
            sub_AC6300((__int64)&v367);
            sub_FA3370(&v367, *a1, *(unsigned int *)(v285 + 24), 2517);
            sub_E74100((unsigned __int8 **)&v367, v346 == 0);
            sub_AC84E0((unsigned __int8 **)&v367, v345, v346);
            sub_E74100((unsigned __int8 **)&v367, v57);
            v77 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v285 + 16LL))(v285);
            LOBYTE(v365[1]) = 1;
            v365[0] = v77;
            sub_AC88D0((__int64 *)&v367, (__int64 *)v365);
            sub_AC6300((__int64)&v367);
            goto LABEL_62;
          }
          v91 = *(_QWORD *)(v329 + 8 * v92 + 32);
          v59 = *(_QWORD *)(v330 + 8 * v92++ + 32);
          if ( (*(_BYTE *)(v59 + 28) & 0x7F) != (*(_BYTE *)(v91 + 28) & 0x7F) )
          {
            v313 = v59;
            v316 = v91;
            goto LABEL_262;
          }
        }
      }
      v100 = 0;
LABEL_262:
      v276 = (unsigned int)(v100 + 1);
      sub_E76E00((__int64)v365, &v348, 0x16u);
      sub_AC60B0((unsigned __int8 **)v365, v276, 3u);
      v277 = *(_BYTE *)(v316 + 28) & 0x7F;
      switch ( v277 )
      {
        case 'C':
          v278 = 0;
          break;
        case 'D':
          v278 = 2;
          break;
        case '/':
          v278 = 1;
          break;
        default:
          goto LABEL_270;
      }
      v59 = (__int64)&v367;
      sub_E74100((unsigned __int8 **)v365, v278);
      sub_AC6300((__int64)v365);
      sub_E76340((__int64)&v367, (__int64 *)&v352, 0x16u);
      sub_AC60B0((unsigned __int8 **)&v367, v276, 3u);
      v277 = *(_BYTE *)(v313 + 28) & 0x7F;
      if ( v277 == 67 )
      {
        v279 = 0;
        goto LABEL_268;
      }
      if ( v277 == 68 )
      {
        v279 = 2;
LABEL_268:
        sub_E74100((unsigned __int8 **)v59, v279);
        sub_AC6300(v59);
        goto LABEL_62;
      }
LABEL_270:
      while ( v277 != 47 )
        ;
      v279 = 1;
      goto LABEL_268;
    default:
      goto LABEL_67;
  }
}

