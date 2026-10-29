__int64 __fastcall sub_561B70(int a1, __int64 *a2, __int64 a3)
{
  char **v3; // rbx
  char **v4; // r12
  char **v5; // r12
  char **v6; // r15
  char **v7; // r15
  char **v8; // r12
  char **v9; // r15
  char **v10; // r15
  char **v11; // r12
  char **v12; // r12
  char **v13; // r12
  char **v14; // r12
  char **v15; // r12
  char **v16; // r12
  char **exception; // r12
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rbx
  int v21; // r13d
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r15d
  unsigned int v26; // edx
  unsigned int *v27; // rax
  unsigned int v28; // r13d
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 *v31; // r14
  _QWORD *v32; // r10
  __int64 v33; // rdx
  unsigned int *v34; // rax
  __int64 *v35; // r9
  __int64 v36; // rdi
  _QWORD *v37; // rcx
  unsigned __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // r14
  int v41; // r8d
  unsigned __int64 v42; // r12
  unsigned int v43; // edx
  __int64 v44; // r13
  __int64 v45; // rbx
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // r15d
  size_t v51; // rsi
  unsigned int *v52; // rax
  unsigned int *v53; // rbx
  __int64 v54; // rax
  int v55; // ecx
  __int64 v56; // rdi
  int v57; // esi
  __int64 v58; // r12
  __int64 v59; // rbx
  __int64 v60; // r13
  __int64 *v61; // r12
  __int64 v62; // rdi
  __int64 v63; // rcx
  _DWORD *v64; // rsi
  __int64 v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // r11
  unsigned int v68; // edi
  __int64 i; // r9
  _DWORD *v70; // rsi
  __int64 v71; // rcx
  char *v72; // r8
  __m128i v73; // xmm4
  __int64 v74; // rdi
  unsigned int v75; // esi
  const __m128i *v76; // rax
  __m128i v77; // xmm1
  __m128i v78; // xmm2
  __m128i v79; // xmm0
  __m128i v80; // xmm2
  unsigned int v81; // edx
  __m128i v82; // xmm0
  __m128i v83; // xmm0
  __m128i v84; // xmm2
  __m128i v85; // xmm1
  unsigned int v86; // eax
  __int64 v87; // r11
  unsigned int v88; // r11d
  __int64 v89; // rdx
  unsigned int v90; // edx
  __int64 v91; // rdx
  __int64 *v92; // r14
  __int64 v93; // rax
  __int64 v94; // r13
  __int64 v95; // r12
  int v96; // edx
  int v97; // ecx
  int v98; // r8d
  int v99; // r9d
  size_t v100; // r14
  _BYTE *v101; // rsi
  size_t v102; // r15
  void *v103; // rcx
  _QWORD *v104; // rsi
  size_t v105; // rdi
  __int64 v106; // rbx
  unsigned int v107; // r14d
  __int64 v108; // rax
  _QWORD *v109; // rax
  unsigned int v110; // edx
  __int64 v111; // rcx
  int v112; // edx
  _QWORD *v113; // rcx
  _QWORD *v114; // rax
  _QWORD *v115; // r15
  unsigned int v116; // ebx
  size_t v117; // rsi
  unsigned int *v118; // rax
  unsigned int v119; // eax
  __int64 v120; // r12
  __int64 v121; // rbx
  _QWORD *v122; // r13
  __int64 v123; // rsi
  bool v124; // zf
  unsigned int *v125; // r15
  unsigned int *v126; // r14
  unsigned __int64 v127; // rax
  __int64 v128; // rbx
  _QWORD *v129; // rcx
  unsigned int v130; // eax
  __int64 v131; // rsi
  int v132; // eax
  _QWORD *v133; // rsi
  __int64 v134; // rax
  unsigned int v135; // r9d
  size_t v136; // rsi
  unsigned int v137; // r13d
  unsigned int *v138; // rax
  __int64 v139; // rsi
  _QWORD *v140; // rax
  __int64 v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  unsigned int v145; // r9d
  _QWORD *v146; // rbx
  __int64 v147; // r8
  unsigned int v148; // r10d
  _QWORD *v149; // r12
  int v150; // esi
  __int64 v151; // rax
  _QWORD *v152; // rdi
  _QWORD *v153; // rax
  _QWORD *v154; // r8
  __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // r13
  __int64 v158; // rbx
  __int64 v159; // r12
  _QWORD *v160; // rax
  __int64 v161; // r15
  __int64 v162; // rbx
  unsigned __int64 v163; // r12
  unsigned __int64 *v164; // rcx
  int v165; // eax
  bool v166; // r13
  unsigned int v167; // eax
  __int64 v168; // rdx
  _QWORD *v169; // rcx
  int v170; // eax
  bool *v171; // rdx
  unsigned int v172; // eax
  __int64 v173; // rcx
  _QWORD *v174; // rax
  __int64 v175; // rcx
  _QWORD *v176; // r11
  __int64 v177; // r8
  __int64 v178; // rdx
  _QWORD *v179; // rsi
  __int64 v180; // rax
  _DWORD *v181; // rax
  unsigned int v182; // r9d
  _DWORD *v183; // rax
  __int64 v184; // rax
  unsigned int v185; // edx
  size_t v186; // rsi
  unsigned int *v187; // rax
  _DWORD *v188; // rcx
  _QWORD *v189; // rax
  _OWORD *v190; // rax
  __int64 v191; // r8
  int v192; // r9d
  _QWORD *v193; // r14
  __int64 *v194; // rbx
  unsigned int v195; // r13d
  __int64 v196; // rax
  __int64 v197; // r15
  __int64 v198; // r12
  _QWORD *v199; // rax
  _QWORD *v200; // rcx
  _QWORD *v201; // r12
  unsigned int v202; // eax
  __int64 v203; // rsi
  __int64 v204; // rcx
  unsigned int v205; // ecx
  size_t v206; // rsi
  unsigned int *v207; // rax
  _DWORD *v208; // rdx
  unsigned int v209; // ecx
  size_t v210; // rsi
  unsigned int *v211; // rax
  unsigned int *v212; // r15
  __int64 v213; // rdx
  unsigned int v214; // eax
  __int64 v215; // rsi
  int v216; // eax
  __int64 *v217; // rsi
  __int64 v218; // rax
  unsigned int v219; // eax
  __int64 v220; // rsi
  int v221; // eax
  __int64 *v222; // rsi
  _QWORD *v223; // rax
  unsigned int v224; // r8d
  size_t v225; // rsi
  unsigned int *v226; // rax
  __int64 v227; // rsi
  unsigned int v228; // r8d
  size_t v229; // rsi
  unsigned int *v230; // rax
  __int64 v231; // rsi
  __int64 v232; // rax
  __int64 v233; // r15
  _QWORD *v234; // rdx
  unsigned int v235; // eax
  __int64 v236; // rcx
  int v237; // eax
  __int64 *v238; // rcx
  int v239; // edi
  __int64 v240; // rax
  __int64 v241; // r15
  unsigned int v242; // eax
  __int64 v243; // rdx
  int v244; // esi
  _QWORD *v245; // rax
  __int64 *v246; // rdx
  unsigned int v247; // eax
  int v248; // edi
  int v249; // r9d
  __int64 v250; // r12
  _QWORD *v251; // rax
  unsigned int v252; // edx
  __int64 v253; // rcx
  int v254; // edx
  __int64 *v255; // rcx
  __int64 *v256; // r12
  unsigned __int64 v257; // r13
  __int64 v258; // rsi
  void *v259; // rdi
  char *v260; // rcx
  char *v261; // rax
  __int64 v262; // rdx
  __int64 *v263; // rbx
  unsigned __int64 v264; // r12
  __int64 v265; // rsi
  __int64 result; // rax
  unsigned int v267; // ecx
  size_t v268; // rsi
  unsigned int *v269; // rax
  __int64 v270; // rcx
  _QWORD *v271; // rax
  _QWORD *v272; // rax
  _QWORD *v273; // rax
  unsigned int v274; // r13d
  unsigned int *v275; // rax
  __int64 v276; // rcx
  unsigned int v277; // r12d
  unsigned int v278; // edx
  unsigned int *v279; // rax
  __int64 v280; // rdx
  unsigned int v281; // r13d
  unsigned int v282; // ecx
  unsigned int *v283; // rdx
  unsigned int v284; // ebx
  unsigned int v285; // ecx
  unsigned int *v286; // rdx
  __int64 v287; // r12
  _QWORD *v288; // rax
  int v289; // r9d
  char *v290; // r15
  char *v291; // rax
  __int64 v292; // rdx
  _QWORD *v293; // rsi
  unsigned int *v294; // rdi
  _QWORD *v295; // rdx
  __int64 v296; // rsi
  size_t v297; // r8
  unsigned __int64 v298; // rdi
  __int64 v299; // rax
  size_t *v300; // r11
  size_t v301; // r8
  _QWORD *v302; // rax
  int v303; // ecx
  _DWORD *v304; // rsi
  size_t *v305; // rax
  __int64 v306; // rdx
  _QWORD *v307; // rax
  _QWORD *v308; // rax
  __int64 v309; // rax
  _QWORD *v310; // rax
  __int64 v311; // rax
  __int64 v312; // rdx
  int v313; // [rsp+0h] [rbp-240h]
  int v314; // [rsp+0h] [rbp-240h]
  std::ios_base *v315; // [rsp+8h] [rbp-238h]
  __int64 v316; // [rsp+8h] [rbp-238h]
  __int64 v317; // [rsp+8h] [rbp-238h]
  int v318; // [rsp+10h] [rbp-230h]
  _BYTE *v319; // [rsp+10h] [rbp-230h]
  void *v320; // [rsp+10h] [rbp-230h]
  int v321; // [rsp+18h] [rbp-228h]
  _QWORD *v322; // [rsp+18h] [rbp-228h]
  void *v323; // [rsp+18h] [rbp-228h]
  __int64 v324; // [rsp+20h] [rbp-220h]
  __int64 *v325; // [rsp+20h] [rbp-220h]
  __int64 v326; // [rsp+28h] [rbp-218h]
  int v327[2]; // [rsp+28h] [rbp-218h]
  __int64 v328; // [rsp+30h] [rbp-210h]
  int v329; // [rsp+30h] [rbp-210h]
  unsigned int *v330; // [rsp+30h] [rbp-210h]
  __int64 v331; // [rsp+38h] [rbp-208h]
  __int64 v332; // [rsp+38h] [rbp-208h]
  int v333; // [rsp+38h] [rbp-208h]
  int v334; // [rsp+40h] [rbp-200h]
  int v335; // [rsp+40h] [rbp-200h]
  int v336; // [rsp+44h] [rbp-1FCh]
  _DWORD *v337; // [rsp+48h] [rbp-1F8h]
  __int64 v338; // [rsp+48h] [rbp-1F8h]
  __int64 v339; // [rsp+48h] [rbp-1F8h]
  __int64 v340; // [rsp+50h] [rbp-1F0h]
  _DWORD *v341; // [rsp+50h] [rbp-1F0h]
  size_t v342; // [rsp+50h] [rbp-1F0h]
  __int64 v343; // [rsp+58h] [rbp-1E8h]
  __int64 *v344; // [rsp+58h] [rbp-1E8h]
  int v345; // [rsp+58h] [rbp-1E8h]
  void *v346; // [rsp+58h] [rbp-1E8h]
  void *v347; // [rsp+58h] [rbp-1E8h]
  __int64 v348; // [rsp+60h] [rbp-1E0h]
  _BYTE *v349; // [rsp+60h] [rbp-1E0h]
  _DWORD *v350; // [rsp+60h] [rbp-1E0h]
  __int64 v351; // [rsp+60h] [rbp-1E0h]
  __int64 v352; // [rsp+60h] [rbp-1E0h]
  size_t v353; // [rsp+60h] [rbp-1E0h]
  size_t v354; // [rsp+60h] [rbp-1E0h]
  size_t *v355; // [rsp+60h] [rbp-1E0h]
  __int64 v356; // [rsp+68h] [rbp-1D8h]
  __int64 *v357; // [rsp+68h] [rbp-1D8h]
  _QWORD *v358; // [rsp+68h] [rbp-1D8h]
  _QWORD *v359; // [rsp+68h] [rbp-1D8h]
  __int64 v360; // [rsp+68h] [rbp-1D8h]
  unsigned int v361; // [rsp+68h] [rbp-1D8h]
  unsigned int v362; // [rsp+68h] [rbp-1D8h]
  _QWORD *v363; // [rsp+68h] [rbp-1D8h]
  __int64 *v365; // [rsp+70h] [rbp-1D0h]
  unsigned int v366; // [rsp+70h] [rbp-1D0h]
  __int64 v367; // [rsp+70h] [rbp-1D0h]
  __int64 v368; // [rsp+70h] [rbp-1D0h]
  __int64 v369; // [rsp+70h] [rbp-1D0h]
  __int64 v370; // [rsp+70h] [rbp-1D0h]
  int v371; // [rsp+70h] [rbp-1D0h]
  unsigned int v372; // [rsp+70h] [rbp-1D0h]
  __int64 v374; // [rsp+78h] [rbp-1C8h]
  int v375; // [rsp+80h] [rbp-1C0h]
  __int64 *v376; // [rsp+80h] [rbp-1C0h]
  void *v377; // [rsp+80h] [rbp-1C0h]
  int v378; // [rsp+80h] [rbp-1C0h]
  unsigned int v379; // [rsp+80h] [rbp-1C0h]
  __int64 *v381; // [rsp+88h] [rbp-1B8h]
  unsigned int v382; // [rsp+88h] [rbp-1B8h]
  int v383; // [rsp+88h] [rbp-1B8h]
  unsigned int v384; // [rsp+88h] [rbp-1B8h]
  size_t v385; // [rsp+88h] [rbp-1B8h]
  __int64 v386; // [rsp+88h] [rbp-1B8h]
  int v387; // [rsp+90h] [rbp-1B0h]
  int v388; // [rsp+90h] [rbp-1B0h]
  unsigned int v389; // [rsp+90h] [rbp-1B0h]
  unsigned int v390; // [rsp+90h] [rbp-1B0h]
  int v391[2]; // [rsp+90h] [rbp-1B0h]
  _DWORD *v392; // [rsp+98h] [rbp-1A8h]
  unsigned int *v393; // [rsp+98h] [rbp-1A8h]
  _DWORD *v394; // [rsp+98h] [rbp-1A8h]
  unsigned int *v395; // [rsp+98h] [rbp-1A8h]
  int v396; // [rsp+A0h] [rbp-1A0h]
  int v397; // [rsp+A8h] [rbp-198h]
  int v398; // [rsp+ACh] [rbp-194h] BYREF
  _DWORD *v399; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v400; // [rsp+B8h] [rbp-188h] BYREF
  __int64 v401; // [rsp+C0h] [rbp-180h] BYREF
  _QWORD *v402; // [rsp+C8h] [rbp-178h] BYREF
  __int64 v403; // [rsp+D0h] [rbp-170h] BYREF
  __int64 v404; // [rsp+D8h] [rbp-168h] BYREF
  __int64 v405; // [rsp+E0h] [rbp-160h] BYREF
  _QWORD *j; // [rsp+E8h] [rbp-158h]
  void *v407; // [rsp+F0h] [rbp-150h]
  size_t v408; // [rsp+F8h] [rbp-148h]
  _QWORD v409[2]; // [rsp+100h] [rbp-140h] BYREF
  __int64 v410[4]; // [rsp+110h] [rbp-130h] BYREF
  void *src; // [rsp+130h] [rbp-110h] BYREF
  size_t n; // [rsp+138h] [rbp-108h]
  size_t v413; // [rsp+140h] [rbp-100h] BYREF
  void *v414; // [rsp+148h] [rbp-F8h]
  __int64 v415; // [rsp+150h] [rbp-F0h]
  _BYTE v416[128]; // [rsp+158h] [rbp-E8h] BYREF
  void *ptr; // [rsp+1D8h] [rbp-68h]
  __int64 v418; // [rsp+1E0h] [rbp-60h]
  int v419; // [rsp+1E8h] [rbp-58h]
  __int128 v420; // [rsp+1F0h] [rbp-50h]
  __int128 v421; // [rsp+200h] [rbp-40h]

  v18 = *(_QWORD *)(*a2 + 40);
  v331 = *a2;
  v19 = *(unsigned int *)(v18 + 24);
  if ( (_DWORD)v19 )
  {
    v392 = nullptr;
    v20 = 0;
    while ( *(_WORD *)(*(_QWORD *)(v18 + 8 * v20 + 32) + 4LL) == 1 )
    {
LABEL_16:
      if ( v19 == ++v20 )
      {
LABEL_17:
        v28 = *(_DWORD *)(v331 + 64);
        if ( v28 )
          goto LABEL_31;
        goto LABEL_18;
      }
    }
    v21 = v20;
    if ( !v392 )
    {
      v22 = (_QWORD *)sub_186B270(0x28u);
      *v22 = 2;
      v23 = (__int64)(v22 + 1);
      v392 = (_DWORD *)v23;
      goto LABEL_6;
    }
    while ( 1 )
    {
      v24 = (unsigned int)*(v392 - 1);
      if ( (_DWORD)v24 == *(v392 - 2) )
      {
        v25 = (unsigned int)(3 * v24 + 1) >> 1;
        v26 = 16 * v25 + 8;
        if ( 16 * (int)v24 + 8 >= v26 || (unsigned int)v24 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&src, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &src);
          sub_233E40((__int64)&src);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v392 - 2, v26);
        *v27 = v25;
        v392 = v27 + 2;
        v23 = (__int64)&v27[4 * v27[1] + 2];
      }
      else
      {
        v23 = (__int64)&v392[4 * v24];
      }
LABEL_6:
      *(_DWORD *)v23 = -1;
      *(_DWORD *)(v23 + 4) = v21;
      *(_BYTE *)(v23 + 8) = 0;
      *(_DWORD *)(v23 + 12) = 0;
      ++*(v392 - 1);
      if ( v19 == v20 + 1 )
        break;
      if ( *(_WORD *)(*(_QWORD *)(v18 + 8 * (v20 + 1) + 32) + 4LL) == 1 )
      {
        v20 += 2;
        if ( v19 == v20 )
          goto LABEL_17;
        v21 = v20;
        if ( *(_WORD *)(*(_QWORD *)(v18 + 8 * v20 + 32) + 4LL) == 1 )
          goto LABEL_16;
      }
      else
      {
        v21 = ++v20;
      }
    }
    v28 = *(_DWORD *)(v331 + 64);
    if ( !v28 )
    {
      v29 = *a2;
      goto LABEL_19;
    }
  }
  else
  {
    v392 = nullptr;
    v28 = *(_DWORD *)(*a2 + 64);
    if ( !v28 )
    {
      v30 = 0;
      v29 = *a2;
      goto LABEL_20;
    }
  }
LABEL_31:
  v40 = 0;
  v356 = v28;
  do
  {
    v41 = v40;
    v42 = *(_QWORD *)(v331 + 8 * v40 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    v43 = *(_DWORD *)(v42 + 24);
    if ( v43 )
    {
      v44 = v43;
      v45 = 0;
      while ( *(_WORD *)(*(_QWORD *)(v42 + 8 * v45 + 32) + 4LL) == 1 )
      {
LABEL_47:
        if ( v44 == ++v45 )
          goto LABEL_48;
      }
      v46 = v45;
      if ( !v392 )
      {
        v387 = v41;
        v47 = sub_186B270(0x28u);
        v41 = v387;
        v48 = v47 + 8;
        v46 = v45;
        *(_QWORD *)(v48 - 8) = 2;
        v392 = (_DWORD *)v48;
        goto LABEL_37;
      }
      while ( 1 )
      {
        v49 = (unsigned int)*(v392 - 1);
        if ( (_DWORD)v49 == *(v392 - 2) )
        {
          v50 = (unsigned int)(3 * v49 + 1) >> 1;
          v51 = 16 * v50 + 8;
          if ( 16 * (int)v49 + 8 >= (unsigned int)v51 || (unsigned int)v49 >= v50 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&src, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, &src);
            sub_233E40((__int64)&src);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v375 = v46;
          v388 = v41;
          v52 = (unsigned int *)sub_186B300(v392 - 2, v51);
          *v52 = v50;
          v392 = v52 + 2;
          v41 = v388;
          v48 = (__int64)&v52[4 * v52[1] + 2];
          v46 = v375;
        }
        else
        {
          v48 = (__int64)&v392[4 * v49];
        }
LABEL_37:
        *(_DWORD *)v48 = v41;
        *(_DWORD *)(v48 + 4) = v46;
        *(_BYTE *)(v48 + 8) = 0;
        *(_DWORD *)(v48 + 12) = 0;
        ++*(v392 - 1);
        if ( v44 == v45 + 1 )
          break;
        if ( *(_WORD *)(*(_QWORD *)(v42 + 8 * (v45 + 1) + 32) + 4LL) == 1 )
        {
          v45 += 2;
          if ( v44 == v45 )
            break;
          v46 = v45;
          if ( *(_WORD *)(*(_QWORD *)(v42 + 8 * v45 + 32) + 4LL) == 1 )
            goto LABEL_47;
        }
        else
        {
          v46 = ++v45;
        }
      }
    }
LABEL_48:
    ++v40;
  }
  while ( v40 != v356 );
LABEL_18:
  v29 = *a2;
  if ( v392 )
  {
LABEL_19:
    v28 = *(v392 - 1);
    v30 = (__int64)v392;
  }
  else
  {
    v30 = 0;
    v28 = 0;
  }
LABEL_20:
  v399 = (_DWORD *)v30;
  v402 = nullptr;
  v31 = a2 + 1;
  sub_561A30(v29, (__int64 *)&v399, &v402);
  v32 = v402;
  if ( (__int64 *)a3 != a2 + 1 )
  {
    if ( v28 )
    {
      v33 = v28;
      v34 = (unsigned int *)v30;
      v35 = a2 + 1;
      do
      {
        v393 = v34;
        v36 = *v35;
        v37 = v32;
        do
        {
          v39 = *v34;
          if ( (int)v39 >= 0 )
            v38 = *(_QWORD *)(v36 + 8 * v39 + 80) & 0xFFFFFFFFFFFFFFF8LL;
          else
            v38 = *(_QWORD *)(v36 + 40);
          if ( *(_QWORD *)(v38 + 8LL * v34[1] + 32) != *v37 )
            *v37 = 0;
          v34 += 4;
          ++v37;
        }
        while ( v34 != (unsigned int *)(v30 + 16LL * v28) );
        ++v35;
        v34 = v393;
      }
      while ( (__int64 *)a3 != v35 );
      v53 = v393;
      goto LABEL_52;
    }
LABEL_357:
    if ( v402 )
      goto LABEL_358;
    goto LABEL_359;
  }
  if ( !v28 )
    goto LABEL_357;
  v53 = v392;
  v33 = v28;
LABEL_52:
  v54 = 0;
  v55 = 0;
  do
  {
    while ( v32[v54] )
    {
      ++v55;
LABEL_54:
      if ( ++v54 == v33 )
        goto LABEL_58;
    }
    if ( !v55 )
      goto LABEL_54;
    v56 = v54;
    v57 = v54++;
    *(__m128i *)&v53[4 * (v57 - v55)] = _mm_loadu_si128((const __m128i *)&v53[4 * v56]);
  }
  while ( v54 != v33 );
LABEL_58:
  v392 = v53;
  if ( v55 )
  {
    if ( v53 )
    {
      *(v53 - 1) = v28 - v55;
      sub_186B220(v32 - 1);
      v389 = *(v53 - 1);
      goto LABEL_61;
    }
    sub_186B220(v32 - 1);
LABEL_372:
    v389 = 0;
    goto LABEL_61;
  }
LABEL_358:
  sub_186B220(v32 - 1);
LABEL_359:
  if ( !v392 )
    goto LABEL_372;
  v389 = *(v392 - 1);
LABEL_61:
  v403 = 0;
  v58 = *a2;
  sub_561A30(*a2, (__int64 *)&v399, &v403);
  v404 = 0;
  v59 = v403;
  sub_561900(v58, (__int64 *)&v399, &v404);
  v60 = v404;
  if ( v389 )
  {
    v343 = v389;
    v348 = 8LL * v389 + 8;
    v174 = (_QWORD *)sub_186B270(v348);
    v61 = v174 + 1;
    v358 = v174;
    *v174 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v389), 224).m128i_u64[0];
    memset(v174 + 1, 0, 8LL * v389);
    v175 = 1;
    v176 = v358;
    v177 = v389;
    if ( v389 != 1 )
    {
      do
      {
        v178 = 0;
        do
        {
          while ( *(_QWORD *)(v59 + 8 * v175) != *(_QWORD *)(v59 + 8 * v178)
               || *(_QWORD *)(v60 + 8 * v175) != *(_QWORD *)(v60 + 8 * v178) )
          {
            if ( v175 == ++v178 )
              goto LABEL_200;
          }
          v179 = (_QWORD *)v176[v175 + 1];
          if ( v179 )
          {
            v180 = *((unsigned int *)v179 - 1);
            if ( (_DWORD)v180 == *((_DWORD *)v179 - 2) )
            {
              v182 = (unsigned int)(3 * v180 + 1) >> 1;
              if ( 4 * (int)v180 + 8 >= 4 * v182 + 8 || (unsigned int)v180 >= v182 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&src, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, &src);
                sub_233E40((__int64)&src);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v338 = v177;
              v340 = v178;
              v343 = v175;
              LODWORD(v348) = (unsigned int)(3 * v180 + 1) >> 1;
              v359 = v176;
              v183 = (_DWORD *)sub_186B300(v179 - 1, 4 * v182 + 8);
              v179 = v183 + 2;
              v176 = v359;
              v175 = v343;
              v178 = v340;
              *v183 = v348;
              v184 = (unsigned int)v183[1];
              v359[v343 + 1] = v179;
              v177 = v338;
              v181 = (_DWORD *)v179 + v184;
            }
            else
            {
              v181 = (_DWORD *)v179 + v180;
            }
          }
          else
          {
            v340 = v177;
            v343 = v178;
            v348 = v175;
            v363 = v176;
            v302 = (_QWORD *)sub_186B270(0x10u);
            v176 = v363;
            v175 = v348;
            *v302 = 2;
            v179 = v302 + 1;
            v178 = v343;
            v177 = v340;
            v363[v348 + 1] = v302 + 1;
            v181 = v302 + 1;
          }
          *v181 = v178++;
          ++*((_DWORD *)v179 - 1);
        }
        while ( v175 != v178 );
LABEL_200:
        ++v175;
      }
      while ( v177 != v175 );
    }
    if ( (__int64 *)a3 != v31 )
    {
      do
      {
LABEL_63:
        v62 = *v31;
        v403 = v59;
        v399 = v392;
        sub_561A30(v62, (__int64 *)&v399, &v403);
        v59 = v403;
        v63 = 1;
        v64 = v392;
        if ( v389 > 1 )
        {
          do
          {
            v65 = v61[v63];
            if ( v65 )
            {
              v66 = *(_DWORD *)(v65 - 4);
              if ( v66 )
              {
                v394 = v64;
                v67 = *(_QWORD *)(v59 + 8 * v63);
                v68 = 0;
                for ( i = 0; ; i = v68 )
                {
                  while ( 1 )
                  {
                    v70 = (_DWORD *)(v65 + 4 * i);
                    if ( v67 == *(_QWORD *)(v59 + 8LL * (unsigned int)*v70) )
                      break;
                    *v70 = *(_DWORD *)(v65 + 4LL * (v66 - 1));
                    v66 = *(_DWORD *)(v65 - 4) - 1;
                    *(_DWORD *)(v65 - 4) = v66;
                    if ( v68 >= v66 )
                      goto LABEL_69;
                  }
                  if ( ++v68 >= v66 )
                    break;
                }
LABEL_69:
                v64 = v394;
              }
            }
            ++v63;
          }
          while ( v63 != v389 );
          v392 = v64;
        }
        ++v31;
      }
      while ( (__int64 *)a3 != v31 );
      if ( !v389 )
      {
LABEL_92:
        if ( v61 )
        {
          v91 = *((unsigned int *)v61 - 1);
          v376 = v61 - 1;
          v92 = &v61[v91];
          if ( (_DWORD)v91 )
          {
            do
            {
              while ( 1 )
              {
                v93 = *v61;
                if ( !*v61 )
                  break;
                ++v61;
                sub_186B220((void *)(v93 - 8));
                if ( v92 == v61 )
                  goto LABEL_96;
              }
              ++v61;
            }
            while ( v61 != v92 );
          }
LABEL_96:
          sub_186B220(v376);
        }
        goto LABEL_97;
      }
    }
    v71 = 0;
    v72 = (char *)(v392 + 2);
    v73 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0);
    while ( 1 )
    {
      v74 = v61[v71];
      if ( v74 )
      {
        v75 = *(_DWORD *)(v74 - 4);
        if ( v75 )
          break;
      }
LABEL_91:
      ++v71;
      v72 += 16;
      if ( (unsigned int)v71 >= v389 )
        goto LABEL_92;
    }
    if ( v75 - 1 <= 2 )
    {
      v86 = v71;
      v81 = 0;
    }
    else
    {
      v76 = (const __m128i *)v61[v71];
      v77 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v71), 0);
      do
      {
        v78 = _mm_loadu_si128(v76++);
        v79 = _mm_cmpgt_epi32(_mm_sub_epi32(v78, v73), _mm_sub_epi32(v77, v73));
        v77 = _mm_or_si128(_mm_and_si128(v77, v79), _mm_andnot_si128(v79, v78));
      }
      while ( v76 != (const __m128i *)(v74 + 16LL * (v75 >> 2)) );
      v80 = _mm_srli_si128(v77, 8);
      v81 = v75 & 0xFFFFFFFC;
      v82 = _mm_cmpgt_epi32(_mm_sub_epi32(v80, v73), _mm_sub_epi32(v77, v73));
      v83 = _mm_or_si128(_mm_andnot_si128(v82, v80), _mm_and_si128(v77, v82));
      v84 = _mm_srli_si128(v83, 4);
      v85 = _mm_cmpgt_epi32(_mm_sub_epi32(v84, v73), _mm_sub_epi32(v83, v73));
      v86 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v85, v84), _mm_and_si128(v83, v85)));
      if ( (v75 & 3) == 0 )
      {
LABEL_89:
        if ( (_DWORD)v71 != v86 )
        {
          *v72 = 1;
          *((_DWORD *)v72 + 1) = v86;
        }
        goto LABEL_91;
      }
    }
    if ( v86 > *(_DWORD *)(v74 + 4LL * v81) )
      v86 = *(_DWORD *)(v74 + 4LL * v81);
    v87 = v81 + 1;
    if ( (unsigned int)v87 < v75 )
    {
      v88 = *(_DWORD *)(v74 + 4 * v87);
      if ( v86 > v88 )
        v86 = v88;
      v89 = v81 + 2;
      if ( (unsigned int)v89 < v75 )
      {
        v90 = *(_DWORD *)(v74 + 4 * v89);
        if ( v86 > v90 )
          v86 = v90;
      }
    }
    goto LABEL_89;
  }
  v61 = nullptr;
  if ( (__int64 *)a3 != v31 )
    goto LABEL_63;
LABEL_97:
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  v400 = 0;
  v399 = v392;
  sub_561900(v331, (__int64 *)&v399, &v400);
  v94 = v389;
  v95 = *(_QWORD *)(*(_QWORD *)(v331 + 40) + 16LL);
  sub_646E00(
    (int)&src,
    v389,
    v96,
    v97,
    v98,
    v99,
    v313,
    v315,
    v318,
    v321,
    v324,
    v326,
    v328,
    v331,
    v334,
    v400,
    v340,
    v343,
    v348,
    (__int64)&src,
    a3,
    a1,
    v95 + 16,
    (int)a2,
    v389,
    (int)v392,
    v396,
    v397,
    (int)v399,
    v400,
    v401,
    (int)v402,
    v403,
    v404);
  v100 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 2 )
    std::__throw_length_error("basic_string::_M_replace");
  v101 = src;
  v102 = n + 3;
  if ( src == &v413 )
  {
    v298 = 31;
    v297 = 30;
    if ( v102 > 0xF )
      goto LABEL_364;
LABEL_104:
    if ( "sc_" >= src && (char *)src + n >= "sc_" )
    {
      std::string::_M_replace_cold();
      v103 = src;
    }
    else
    {
      if ( n )
      {
        if ( n == 1 )
        {
          *((_BYTE *)src + 3) = *(_BYTE *)src;
        }
        else
        {
          v349 = src;
          memmove((char *)src + 3, src, n);
          v101 = v349;
        }
      }
      v101[2] = 95;
      *(_WORD *)v101 = 25459;
      v103 = src;
    }
  }
  else
  {
    if ( v413 >= v102 )
      goto LABEL_104;
    if ( (v102 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v297 = 2 * v413;
    if ( v102 >= 2 * v413 )
    {
      v297 = n + 3;
      v298 = n + 4;
      if ( (__int64)(n + 4) >= 0 )
        goto LABEL_364;
LABEL_375:
      std::__throw_bad_alloc();
    }
    v298 = v297 + 1;
    if ( (v413 & 0x4000000000000000LL) != 0 )
      goto LABEL_375;
LABEL_364:
    v353 = v297;
    v299 = operator new(v298);
    *(_BYTE *)(v299 + 2) = 95;
    v103 = (void *)v299;
    *(_WORD *)v299 = 25459;
    v300 = (size_t *)src;
    v301 = v353;
    if ( v100 )
    {
      if ( v100 == 1 )
      {
        *(_BYTE *)(v299 + 3) = *(_BYTE *)src;
      }
      else
      {
        v342 = v353;
        v355 = (size_t *)src;
        v347 = (void *)v299;
        memcpy((void *)(v299 + 3), src, v100);
        v301 = v342;
        v103 = v347;
        v300 = v355;
      }
    }
    if ( v300 != &v413 )
    {
      v346 = v103;
      v354 = v301;
      operator delete(v300, v413 + 1);
      v103 = v346;
      v301 = v354;
    }
    src = v103;
    v413 = v301;
  }
  n = v100 + 3;
  *((_BYTE *)v103 + v100 + 3) = 0;
  v104 = src;
  v322 = v409;
  v105 = n;
  v407 = v409;
  if ( src == &v413 )
  {
    v303 = n + 1;
    v304 = v409;
    v305 = &v413;
    if ( (unsigned int)(n + 1) >= 8 )
    {
      LODWORD(v311) = 0;
      do
      {
        v312 = (unsigned int)v311;
        v311 = (unsigned int)(v311 + 8);
        *(_QWORD *)((char *)v409 + v312) = *(size_t *)((char *)&v413 + v312);
      }
      while ( (unsigned int)v311 < (v303 & 0xFFFFFFF8) );
      v304 = (_DWORD *)((char *)v409 + v311);
      v305 = (size_t *)((char *)&v413 + v311);
    }
    v306 = 0;
    if ( (v303 & 4) != 0 )
    {
      *v304 = *(_DWORD *)v305;
      v306 = 4;
    }
    if ( (v303 & 2) != 0 )
    {
      *(_WORD *)((char *)v304 + v306) = *(_WORD *)((char *)v305 + v306);
      v306 += 2;
    }
    if ( (v303 & 1) != 0 )
      *((_BYTE *)v304 + v306) = *((_BYTE *)v305 + v306);
    v104 = v409;
  }
  else
  {
    v407 = src;
    v409[0] = v413;
  }
  v408 = v105;
  v106 = *(_QWORD *)(v374 + 24);
  if ( v337 )
    v107 = *(v337 - 1);
  else
    v107 = 0;
  sub_180C5A0(v357, v104);
  v108 = sub_651680(v106, v377, v357, v107, v337, v95);
  *(_QWORD *)v327 = v108;
  if ( v108 )
    ++*(_DWORD *)(v108 + 8);
  v109 = *(_QWORD **)(v374 + 88);
  if ( v109 )
  {
    v110 = *((_DWORD *)v109 - 1);
    if ( v110 == *((_DWORD *)v109 - 2) )
    {
      v284 = (3 * v110 + 1) >> 1;
      v285 = 8 * v284 + 8;
      if ( 8 * v110 + 8 >= v285 || v110 >= v284 )
      {
        v16 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v357, "Overflow encountered when expanding vector");
        *v16 = (char *)off_1C63128;
        sub_2333C0(v16 + 1, v357);
        sub_233E40((__int64)v357);
        __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v286 = (unsigned int *)sub_186B300(v109 - 1, v285);
      v109 = v286 + 2;
      *v286 = v284;
      *(_QWORD *)(v374 + 88) = v286 + 2;
      LODWORD(v286) = v286[1];
      v113 = &v109[(unsigned int)v286];
      v112 = (_DWORD)v286 + 1;
    }
    else
    {
      v111 = v110;
      v112 = v110 + 1;
      v113 = &v109[v111];
    }
  }
  else
  {
    v307 = (_QWORD *)sub_186B270(0x18u);
    *v307 = 2;
    v109 = v307 + 1;
    v112 = 1;
    v113 = v109;
    *(_QWORD *)(v374 + 88) = v109;
  }
  *v113 = *(_QWORD *)v327;
  *((_DWORD *)v109 - 1) = v112;
  j = nullptr;
  v405 = *(_QWORD *)(v374 + 32);
  if ( v390 )
  {
    v114 = (_QWORD *)sub_186B270(0x18u);
    v115 = v114 + 1;
    *v114 = 2;
    for ( j = v114 + 1; ; j = v118 + 2 )
    {
      v119 = *((_DWORD *)v115 - 2);
      if ( v119 >= v390 )
        break;
      v116 = (3 * v119 + 1) >> 1;
      v117 = 8 * v116 + 8;
      if ( 8 * v119 + 8 >= (unsigned int)v117 || v119 >= v116 )
      {
        v11 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v357, "Overflow encountered when expanding vector");
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, v357);
        sub_233E40((__int64)v357);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v118 = (unsigned int *)sub_186B300(v115 - 1, v117);
      v115 = v118 + 2;
      *v118 = v116;
    }
    *((_DWORD *)v115 - 1) = v390;
    memset(v115, 0, 8 * v94);
  }
  else
  {
    v115 = nullptr;
  }
  if ( v381 != v365 )
  {
    while ( 2 )
    {
      v120 = *v381;
      if ( v395 )
      {
        v121 = *(v395 - 1);
        if ( v115 )
        {
          v122 = &v115[*((unsigned int *)v115 - 1)];
          if ( v115 >= v122 )
            goto LABEL_136;
          do
          {
LABEL_132:
            while ( 1 )
            {
              v123 = *v115;
              if ( *v115 )
              {
                v124 = (*(_DWORD *)(v123 + 8))-- == 1;
                if ( v124 )
                  break;
              }
              if ( ++v115 >= v122 )
                goto LABEL_135;
            }
            sub_15D7BC0(v405, v123);
            ++v115;
          }
          while ( v115 < v122 );
LABEL_135:
          v115 = j;
          if ( j )
LABEL_136:
            *((_DWORD *)v115 - 1) = 0;
        }
        if ( (_DWORD)v121 )
        {
          v125 = v395;
          v126 = &v395[4 * v121];
          do
          {
            if ( !*((_BYTE *)v125 + 8) )
            {
              v134 = *v125;
              if ( (int)v134 >= 0 )
                v127 = *(_QWORD *)(v120 + 8 * v134 + 80) & 0xFFFFFFFFFFFFFFF8LL;
              else
                v127 = *(_QWORD *)(v120 + 40);
              v128 = *(_QWORD *)(v127 + 8LL * v125[1] + 32);
              if ( v128 )
                ++*(_DWORD *)(v128 + 8);
              v129 = j;
              if ( j )
              {
                v130 = *((_DWORD *)j - 1);
                if ( v130 == *((_DWORD *)j - 2) )
                {
                  v135 = (3 * v130 + 1) >> 1;
                  v136 = 8 * v135 + 8;
                  v137 = v135;
                  if ( 8 * v130 + 8 >= (unsigned int)v136 || v130 >= v135 )
                  {
                    v12 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v357, "Overflow encountered when expanding vector");
                    *v12 = (char *)off_1C63128;
                    sub_2333C0(v12 + 1, v357);
                    sub_233E40((__int64)v357);
                    __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v138 = (unsigned int *)sub_186B300(j - 1, v136);
                  v139 = v138[1];
                  v129 = v138 + 2;
                  *v138 = v137;
                  j = v129;
                  LODWORD(v138) = v139;
                  v133 = &v129[v139];
                  v132 = (_DWORD)v138 + 1;
                }
                else
                {
                  v131 = v130;
                  v132 = v130 + 1;
                  v133 = &j[v131];
                }
              }
              else
              {
                v140 = (_QWORD *)sub_186B270(0x18u);
                v129 = v140 + 1;
                j = v140 + 1;
                v133 = v140 + 1;
                *v140 = 2;
                v132 = 1;
              }
              *v133 = v128;
              *((_DWORD *)v129 - 1) = v132;
            }
            v125 += 4;
          }
          while ( v126 != v125 );
        }
      }
      else if ( v115 )
      {
        v121 = 0;
        v122 = &v115[*((unsigned int *)v115 - 1)];
        if ( v115 < v122 )
          goto LABEL_132;
        *((_DWORD *)v115 - 1) = 0;
      }
      sub_6549B0(*(_QWORD *)(v374 + 24), *(_QWORD *)v327, &v405);
      if ( v365 == ++v381 )
        break;
      v115 = j;
      continue;
    }
  }
  v141 = *(_QWORD *)(v374 + 24);
  sub_654200(v141, 0);
  v142 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v141 + 2968) + 192LL))(*(_QWORD *)(v141 + 2968));
  v143 = *(unsigned int *)(v142 + 152);
  v144 = v142;
  v145 = 2 * v143;
  if ( 3 * (int)v143 < (unsigned int)(4 * (*(_DWORD *)(v142 + 156) + *(_DWORD *)(v142 + 160))) )
  {
    v287 = v145;
    v351 = v142;
    v371 = 2 * v143;
    v385 = 8LL * v145;
    v288 = (_QWORD *)sub_186B270(v385);
    v289 = v371;
    v147 = v385;
    v146 = v288;
    v144 = v351;
    if ( v371 )
    {
      memset(v288, 0, 8 * v287);
      v144 = v351;
      v147 = v385;
      v289 = v371;
    }
    v290 = *(char **)(v144 + 144);
    v148 = v289 - 1;
    v149 = (_QWORD *)((char *)v146 + v147);
    v291 = &v290[8 * *(unsigned int *)(v144 + 152)];
    if ( v290 != v291 )
    {
      do
      {
        while ( *(_QWORD *)v290 <= 1u )
        {
          v290 += 8;
          if ( v291 == v290 )
            goto LABEL_345;
        }
        v292 = 8LL * (*(_DWORD *)(*(_QWORD *)v290 + 12LL) & v148);
        v293 = &v146[(unsigned __int64)v292 / 8];
        if ( v147 == v292 )
        {
LABEL_349:
          if ( v146 == v293 )
          {
LABEL_376:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v294 = v395;
          v295 = v146;
          while ( *v295 )
          {
            if ( v293 == ++v295 )
              goto LABEL_376;
          }
        }
        else
        {
          v294 = v395;
          v295 = &v146[(unsigned __int64)v292 / 8];
          while ( *v295 )
          {
            if ( v149 == ++v295 )
              goto LABEL_349;
          }
        }
        v296 = *(_QWORD *)v290;
        v290 += 8;
        v395 = v294;
        *v295 = v296;
      }
      while ( v291 != v290 );
LABEL_345:
      v291 = *(char **)(v144 + 144);
    }
    if ( v291 )
    {
      v345 = v289;
      v352 = v147;
      v372 = v289 - 1;
      v386 = v144;
      sub_186B220(v291);
      v289 = v345;
      v147 = v352;
      v148 = v372;
      v144 = v386;
    }
    *(_QWORD *)(v144 + 144) = v146;
    *(_DWORD *)(v144 + 152) = v289;
    *(_DWORD *)(v144 + 160) = 0;
  }
  else
  {
    v146 = *(_QWORD **)(v142 + 144);
    v147 = 8 * v143;
    v148 = v143 - 1;
    v149 = &v146[v143];
  }
  v150 = *(_DWORD *)(*(_QWORD *)v327 + 12LL);
  v151 = 8LL * (v150 & v148);
  v152 = &v146[(unsigned __int64)v151 / 8];
  if ( v151 == v147 )
  {
    v154 = nullptr;
LABEL_173:
    if ( v152 == v146 )
    {
LABEL_181:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v156 = *v146;
        if ( *v146 <= 1u )
          break;
        if ( *(_DWORD *)(v156 + 12) == v150 && *(_QWORD *)v327 == v156 )
        {
          *v146 = *(_QWORD *)v327;
          goto LABEL_182;
        }
        if ( v152 == ++v146 )
          goto LABEL_181;
      }
      if ( !v156 )
        break;
      v154 = v146++;
      if ( v152 == v146 )
        goto LABEL_181;
    }
    if ( v154 )
      goto LABEL_355;
    v154 = v146;
  }
  else
  {
    v153 = &v146[(unsigned __int64)v151 / 8];
    v154 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v155 = *v153;
        if ( *v153 <= 1u )
          break;
        if ( *(_DWORD *)(v155 + 12) == v150 && *(_QWORD *)v327 == v155 )
        {
          *v153 = *(_QWORD *)v327;
          goto LABEL_182;
        }
        if ( ++v153 == v149 )
          goto LABEL_173;
      }
      if ( !v155 )
        break;
      v154 = v153++;
      if ( v153 == v149 )
        goto LABEL_173;
    }
    if ( v154 )
LABEL_355:
      --*(_DWORD *)(v144 + 160);
    else
      v154 = v153;
  }
  *v154 = *(_QWORD *)v327;
  ++*(_DWORD *)(v144 + 156);
LABEL_182:
  v157 = v332;
  v158 = *(unsigned int *)(v332 + 56);
  v401 = *(_QWORD *)(v332 + 40);
  if ( (_DWORD)v158 )
  {
    v159 = *(_QWORD *)(v332 + 80);
    v160 = (_QWORD *)sub_186B270(0x18u);
    v161 = v332;
    v162 = v332 + 8 * v158;
    v163 = v159 & 0xFFFFFFFFFFFFFFF8LL;
    v164 = v160 + 1;
    v341 = nullptr;
    v350 = v160 + 1;
    *v160 = 2;
    v165 = 1;
    while ( 1 )
    {
      *v164 = v163;
      *(v350 - 1) = v165;
      v166 = (*(_QWORD *)(v157 + 80) & 7LL) == 1;
      if ( !v341 )
        break;
      v167 = *(v341 - 1);
      if ( v167 != *(v341 - 2) )
      {
        v168 = v167;
        v169 = v341;
        v170 = v167 + 1;
        v171 = (bool *)v341 + v168;
        goto LABEL_187;
      }
      v185 = (3 * v167 + 1) >> 1;
      v186 = v185 + 8;
      if ( v167 + 8 >= (unsigned int)v186 || v167 >= v185 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v357, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v357);
        sub_233E40((__int64)v357);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v382 = (3 * v167 + 1) >> 1;
      v187 = (unsigned int *)sub_186B300(v341 - 2, v186);
      v188 = v187 + 2;
      v161 += 8;
      v341 = v187 + 2;
      *v187 = v382;
      LODWORD(v187) = v187[1];
      *((_BYTE *)v188 + (unsigned int)v187) = v166;
      *(v188 - 1) = (_DWORD)v187 + 1;
      if ( v161 == v162 )
        goto LABEL_209;
LABEL_188:
      v157 = v161;
      v172 = *(v350 - 1);
      v163 = *(_QWORD *)(v161 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v172 == *(v350 - 2) )
      {
        v205 = (3 * v172 + 1) >> 1;
        v206 = 8 * v205 + 8;
        if ( 8 * v172 + 8 >= (unsigned int)v206 || v172 >= v205 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v357, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v357);
          sub_233E40((__int64)v357);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v384 = (3 * v172 + 1) >> 1;
        v207 = (unsigned int *)sub_186B300(v350 - 2, v206);
        v208 = v207 + 2;
        v350 = v207 + 2;
        *v207 = v384;
        LODWORD(v207) = v207[1];
        v164 = (unsigned __int64 *)&v208[2 * (unsigned int)v207];
        v165 = (_DWORD)v207 + 1;
      }
      else
      {
        v173 = v172;
        v165 = v172 + 1;
        v164 = (unsigned __int64 *)&v350[2 * v173];
      }
    }
    v273 = (_QWORD *)sub_186B270(0xAu);
    *v273 = 2;
    v341 = v273 + 1;
    v171 = (bool *)(v273 + 1);
    v169 = v273 + 1;
    v170 = 1;
LABEL_187:
    v161 += 8;
    *v171 = v166;
    *((_DWORD *)v169 - 1) = v170;
    if ( v161 == v162 )
      goto LABEL_209;
    goto LABEL_188;
  }
  v341 = nullptr;
  v350 = nullptr;
LABEL_209:
  v189 = (_QWORD *)sub_186B270(0x80u);
  *v189 = 0;
  v189[2] = 0;
  v189[4] = 0;
  v189[6] = 0;
  v189[8] = 0;
  v189[10] = 0;
  v189[12] = 0;
  v189[14] = 0;
  src = v189;
  v319 = v416;
  v414 = v416;
  n = 8;
  LODWORD(v413) = 0;
  v415 = 0x1000000000LL;
  v190 = (_OWORD *)sub_186B270(0x40u);
  *v190 = 0;
  v190[1] = 0;
  v190[2] = 0;
  v190[3] = 0;
  ptr = v190;
  v418 = 8;
  v419 = 0;
  v420 = 0;
  v421 = 0;
  sub_6462F0(v357, v332, 1);
  v336 = 0;
  if ( (unsigned __int8)sub_148BA40(v357, &v398) )
    v336 = v398 + 1;
  v316 = *(_QWORD *)(v374 + 32);
  if ( v390 )
  {
    v193 = nullptr;
    v194 = nullptr;
    v195 = 0;
    v383 = 0;
    v325 = &v401;
    while ( 1 )
    {
      v344 = v325;
      v330 = &v395[4 * v195];
      v196 = *v330;
      v378 = v196;
      if ( (_DWORD)v196 != -1 )
        v344 = (__int64 *)&v350[2 * v196];
      v197 = *v344;
      v198 = *(unsigned int *)(*v344 + 24);
      if ( (_DWORD)v198 )
      {
        v199 = (_QWORD *)sub_186B270(0x18u);
        v200 = v199 + 1;
        v191 = v197 + 8 * v198;
        v201 = v199 + 1;
        *v199 = 2;
        v202 = 1;
        while ( 1 )
        {
          v203 = *(_QWORD *)(v197 + 32);
          v197 += 8;
          *v200 = v203;
          *((_DWORD *)v201 - 1) = v202;
          if ( v197 == v191 )
            break;
          if ( *((_DWORD *)v201 - 2) == v202 )
          {
            v209 = (3 * v202 + 1) >> 1;
            v210 = 8 * v209 + 8;
            if ( 8 * v202 + 8 >= (unsigned int)v210 || v202 >= v209 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v410, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v410);
              sub_233E40((__int64)v410);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v360 = v191;
            v366 = (3 * v202 + 1) >> 1;
            v211 = (unsigned int *)sub_186B300(v201 - 1, v210);
            v201 = v211 + 2;
            v191 = v360;
            *v211 = v366;
            LODWORD(v211) = v211[1];
            v200 = &v201[(unsigned int)v211];
            v202 = (_DWORD)v211 + 1;
          }
          else
          {
            v204 = v202++;
            v200 = &v201[v204];
          }
        }
      }
      else
      {
        v201 = nullptr;
      }
      if ( v195 < v390 )
        break;
LABEL_248:
      v232 = sub_15DC610(
               *(_QWORD *)(v374 + 32),
               *(_QWORD *)(*v344 + 16),
               *(_DWORD *)(*(_QWORD *)(*v344 + 16) + 32LL),
               (int)v201,
               v191,
               v192,
               v314,
               v316,
               (int)v319,
               (int)v322,
               (int)v325,
               v327[0],
               (int)v330,
               v332,
               v335,
               v337);
      v233 = v232;
      if ( v232 )
        ++*(_DWORD *)(v232 + 8);
      v234 = *(_QWORD **)(v374 + 88);
      if ( v234 )
      {
        v235 = *((_DWORD *)v234 - 1);
        if ( v235 == *((_DWORD *)v234 - 2) )
        {
          v267 = (3 * v235 + 1) >> 1;
          v268 = 8 * v267 + 8;
          if ( 8 * v235 + 8 >= (unsigned int)v268 || v235 >= v267 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v410, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v410);
            sub_233E40((__int64)v410);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v379 = (3 * v235 + 1) >> 1;
          v269 = (unsigned int *)sub_186B300(v234 - 1, v268);
          v234 = v269 + 2;
          *v269 = v379;
          v270 = v269[1];
          *(_QWORD *)(v374 + 88) = v269 + 2;
          LODWORD(v269) = v270;
          v238 = &v234[v270];
          v237 = (_DWORD)v269 + 1;
        }
        else
        {
          v236 = v235;
          v237 = v235 + 1;
          v238 = &v234[v236];
        }
      }
      else
      {
        v272 = (_QWORD *)sub_186B270(0x18u);
        *v272 = 2;
        v234 = v272 + 1;
        *(_QWORD *)(v374 + 88) = v272 + 1;
        v238 = v272 + 1;
        v237 = 1;
      }
      *v238 = v233;
      *((_DWORD *)v234 - 1) = v237;
      *v344 = v233;
      if ( v201 )
        sub_186B220(v201 - 1);
      if ( v195 >= v390 )
      {
        *(_QWORD *)v391 = *(_QWORD *)(v374 + 32);
        v239 = v391[0];
        goto LABEL_257;
      }
    }
    v212 = &v395[4 * v195];
    while ( 2 )
    {
      if ( v378 != *v212 )
        goto LABEL_248;
      if ( *((_BYTE *)v212 + 8) )
      {
        v213 = v194[v212[3]];
        if ( !v194 )
          goto LABEL_241;
      }
      else
      {
        v218 = sub_15DB5C0(*(_QWORD *)(v374 + 32), (unsigned int)(v336 + v383), *(_QWORD *)&v337[2 * v383]);
        ++v383;
        v213 = v218;
        if ( v218 )
          ++*(_DWORD *)(v218 + 8);
        if ( v193 )
        {
          v219 = *((_DWORD *)v193 - 1);
          if ( v219 == *((_DWORD *)v193 - 2) )
          {
            v228 = (3 * v219 + 1) >> 1;
            v229 = 8 * v228 + 8;
            if ( 8 * v219 + 8 >= (unsigned int)v229 || v219 >= v228 )
            {
              v10 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v410, "Overflow encountered when expanding vector");
              *v10 = (char *)off_1C63128;
              sub_2333C0(v10 + 1, v410);
              sub_233E40((__int64)v410);
              __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v362 = (3 * v219 + 1) >> 1;
            v369 = v213;
            v230 = (unsigned int *)sub_186B300(v193 - 1, v229);
            v231 = v230[1];
            LODWORD(v191) = v362;
            v193 = v230 + 2;
            v213 = v369;
            *v230 = v362;
            LODWORD(v230) = v231;
            v222 = &v193[v231];
            v221 = (_DWORD)v230 + 1;
          }
          else
          {
            v220 = v219;
            v221 = v219 + 1;
            v222 = &v193[v220];
          }
        }
        else
        {
          v370 = v218;
          v271 = (_QWORD *)sub_186B270(0x18u);
          v193 = v271 + 1;
          v213 = v370;
          v222 = v271 + 1;
          *v271 = 2;
          v221 = 1;
        }
        *v222 = v213;
        *((_DWORD *)v193 - 1) = v221;
        if ( !v194 )
        {
LABEL_241:
          v367 = v213;
          v223 = (_QWORD *)sub_186B270(0x18u);
          v213 = v367;
          *v223 = 2;
          v194 = v223 + 1;
          v216 = 1;
          v217 = v194;
          goto LABEL_232;
        }
      }
      v214 = *((_DWORD *)v194 - 1);
      if ( v214 == *((_DWORD *)v194 - 2) )
      {
        v224 = (3 * v214 + 1) >> 1;
        v225 = 8 * v224 + 8;
        if ( 8 * v214 + 8 >= (unsigned int)v225 || v214 >= v224 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v410, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v410);
          sub_233E40((__int64)v410);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v361 = (3 * v214 + 1) >> 1;
        v368 = v213;
        v226 = (unsigned int *)sub_186B300(v194 - 1, v225);
        v227 = v226[1];
        LODWORD(v191) = v361;
        v194 = (__int64 *)(v226 + 2);
        v213 = v368;
        *v226 = v361;
        LODWORD(v226) = v227;
        v217 = &v194[v227];
        v216 = (_DWORD)v226 + 1;
      }
      else
      {
        v215 = v214;
        v216 = v214 + 1;
        v217 = &v194[v215];
      }
LABEL_232:
      *v217 = v213;
      ++v195;
      v212 += 4;
      *((_DWORD *)v194 - 1) = v216;
      v201[*(v212 - 3)] = v213;
      if ( v195 == v390 )
        goto LABEL_248;
      continue;
    }
  }
  *(_QWORD *)v391 = *(_QWORD *)(v374 + 32);
  v193 = nullptr;
  v194 = nullptr;
  v239 = v391[0];
LABEL_257:
  v240 = sub_15DC610(
           v239,
           v327[0],
           *(_DWORD *)(*(_QWORD *)v327 + 32LL),
           (int)v193,
           v191,
           v192,
           v314,
           v316,
           (int)v319,
           (int)v322,
           (int)v325,
           v327[0],
           v329,
           v332,
           v335,
           v337);
  v241 = v240;
  if ( v240 )
    ++*(_DWORD *)(v240 + 8);
  if ( v350 )
  {
    v242 = *(v350 - 1);
    if ( v242 == *(v350 - 2) )
    {
      v277 = (3 * v242 + 1) >> 1;
      v278 = 8 * v277 + 8;
      if ( 8 * v242 + 8 >= v278 || v242 >= v277 )
      {
        v14 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v410, "Overflow encountered when expanding vector");
        *v14 = (char *)off_1C63128;
        sub_2333C0(v14 + 1, v410);
        sub_233E40((__int64)v410);
        __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v279 = (unsigned int *)sub_186B300(v350 - 2, v278);
      v280 = v279[1];
      *v279 = v277;
      v350 = v279 + 2;
      LODWORD(v279) = v280;
      v246 = (__int64 *)&v350[2 * v280];
      v244 = (_DWORD)v279 + 1;
      v245 = v350;
    }
    else
    {
      v243 = v242;
      v244 = v242 + 1;
      v245 = v350;
      v246 = (__int64 *)&v350[2 * v243];
    }
  }
  else
  {
    v310 = (_QWORD *)sub_186B270(0x18u);
    *v310 = 2;
    v245 = v310 + 1;
    v244 = 1;
    v350 = v245;
    v246 = v245;
  }
  *v246 = v241;
  *((_DWORD *)v245 - 1) = v244;
  if ( v341 )
  {
    v247 = *(v341 - 1);
    if ( v247 != *(v341 - 2) )
    {
      *((_BYTE *)v341 + v247) = 0;
      *(v341 - 1) = v247 + 1;
      v248 = *(_QWORD *)(v374 + 24) + 656;
      v249 = v333 + 72;
      goto LABEL_265;
    }
    v274 = (3 * v247 + 1) >> 1;
    if ( v247 + 8 >= v274 + 8 || v247 >= v274 )
    {
      v13 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v410, "Overflow encountered when expanding vector");
      *v13 = (char *)off_1C63128;
      sub_2333C0(v13 + 1, v410);
      sub_233E40((__int64)v410);
      __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v275 = (unsigned int *)sub_186B300(v341 - 2, v274 + 8);
    v276 = v275[1];
    *v275 = v274;
    v341 = v275 + 2;
    *((_BYTE *)v275 + v276 + 8) = 0;
    v275[1] = v276 + 1;
  }
  else
  {
    v309 = sub_186B270(0xAu);
    *(_BYTE *)(v309 + 8) = 0;
    v341 = (_DWORD *)(v309 + 8);
    *(_QWORD *)v309 = 0x100000002LL;
  }
  v248 = *(_QWORD *)(v374 + 24) + 656;
  v249 = v333 + 72;
  v244 = *(v350 - 1);
LABEL_265:
  v250 = sub_62C680(v248, v401, v244, (_DWORD)v350, (_DWORD)v341, v249, 1);
  sub_62A000(*(_QWORD *)(v374 + 56), v250);
  v251 = *(_QWORD **)(v374 + 64);
  if ( v251 )
  {
    v252 = *((_DWORD *)v251 - 1);
    if ( v252 == *((_DWORD *)v251 - 2) )
    {
      v281 = (3 * v252 + 1) >> 1;
      v282 = 8 * v281 + 8;
      if ( 8 * v252 + 8 >= v282 || v252 >= v281 )
      {
        v15 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v410, "Overflow encountered when expanding vector");
        *v15 = (char *)off_1C63128;
        sub_2333C0(v15 + 1, v410);
        sub_233E40((__int64)v410);
        __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v283 = (unsigned int *)sub_186B300(v251 - 1, v282);
      v251 = v283 + 2;
      *v283 = v281;
      *(_QWORD *)(v374 + 64) = v283 + 2;
      LODWORD(v283) = v283[1];
      v255 = &v251[(unsigned int)v283];
      v254 = (_DWORD)v283 + 1;
    }
    else
    {
      v253 = v252;
      v254 = v252 + 1;
      v255 = &v251[v253];
    }
  }
  else
  {
    v308 = (_QWORD *)sub_186B270(0x18u);
    *v308 = 2;
    v251 = v308 + 1;
    v255 = v251;
    *(_QWORD *)(v374 + 64) = v251;
    v254 = 1;
  }
  *v255 = v250;
  *((_DWORD *)v251 - 1) = v254;
  sub_629AF0(v250, *(_QWORD *)(v374 + 24));
  *(_BYTE *)(v374 + 72) = 1;
  if ( v241 )
  {
    v124 = (*(_DWORD *)(v241 + 8))-- == 1;
    if ( v124 )
      sub_15D7BC0(*(_QWORD *)v391, v241);
  }
  if ( v193 )
  {
    v256 = v193;
    v257 = (unsigned __int64)&v193[*((unsigned int *)v193 - 1)];
    if ( (unsigned __int64)v193 < v257 )
    {
      do
      {
        while ( 1 )
        {
          v258 = *v256;
          if ( *v256 )
          {
            v124 = (*(_DWORD *)(v258 + 8))-- == 1;
            if ( v124 )
              break;
          }
          if ( (unsigned __int64)++v256 >= v257 )
            goto LABEL_278;
        }
        ++v256;
        sub_15D7BC0(v317, v258);
      }
      while ( (unsigned __int64)v256 < v257 );
    }
LABEL_278:
    sub_186B220(v193 - 1);
  }
  if ( v194 )
    sub_186B220(v194 - 1);
  if ( *((_QWORD *)&v421 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v421 + 1) - 8LL));
  if ( (_QWORD)v421 )
    sub_186B220((void *)(v421 - 8));
  if ( *((_QWORD *)&v420 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v420 + 1) - 8LL));
  if ( (_QWORD)v420 )
    sub_186B220((void *)(v420 - 8));
  if ( ptr )
    sub_186B220(ptr);
  v259 = v414;
  v260 = (char *)v414 + 8 * (unsigned int)v415;
  v261 = (char *)v414;
  if ( v414 != v260 )
  {
    do
    {
      v262 = *(_QWORD *)v261;
      v261 += 8;
      *(_BYTE *)(v262 + 6) &= ~1u;
    }
    while ( v260 != v261 );
  }
  LODWORD(v415) = 0;
  if ( v259 != v320 && v259 )
    sub_186B220(v259);
  if ( src )
    sub_186B220(src);
  sub_186B220(v341 - 2);
  sub_186B220(v350 - 2);
  v263 = j;
  if ( j )
  {
    v264 = (unsigned __int64)&j[*((unsigned int *)j - 1)];
    if ( (unsigned __int64)j >= v264 )
      goto LABEL_306;
    do
    {
      while ( 1 )
      {
        v265 = *v263;
        if ( *v263 )
        {
          v124 = (*(_DWORD *)(v265 + 8))-- == 1;
          if ( v124 )
            break;
        }
        if ( (unsigned __int64)++v263 >= v264 )
          goto LABEL_305;
      }
      sub_15D7BC0(v405, v265);
      ++v263;
    }
    while ( (unsigned __int64)v263 < v264 );
LABEL_305:
    v263 = j;
    if ( j )
LABEL_306:
      sub_186B220(v263 - 1);
  }
  if ( v407 != v323 )
    operator delete(v407, v409[0] + 1LL);
  if ( v339 )
    sub_186B220((void *)(v339 - 8));
  result = (__int64)v395;
  if ( v395 )
    return sub_186B220(v395 - 2);
  return result;
}

