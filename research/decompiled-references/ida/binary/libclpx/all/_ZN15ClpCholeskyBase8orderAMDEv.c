__int64 __fastcall ClpCholeskyBase::orderAMD(ClpCholeskyBase *this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  int *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r10
  char *v11; // rdi
  _DWORD *v12; // r8
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // edx
  __int64 v16; // rax
  char *v17; // rsi
  int v18; // edx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // r8
  int v22; // ecx
  int v23; // esi
  int v24; // r14d
  int v25; // ecx
  int v26; // r15d
  int *v27; // rsi
  _DWORD *v28; // r10
  int v29; // r11d
  int v30; // eax
  int v31; // edx
  __int64 v32; // rax
  char *v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rdx
  int *v36; // r8
  void *v37; // rdi
  int v38; // ebx
  int v39; // edx
  int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // r10
  __int64 v44; // r11
  int *v45; // rbx
  char *v46; // rbp
  char *v47; // r12
  __int64 v48; // rsi
  __int64 v49; // r8
  __int64 v50; // rax
  int *v51; // r9
  int v52; // r14d
  int v53; // edx
  unsigned int v54; // ebx
  __int64 v55; // rdi
  __int64 v56; // rax
  int v57; // r10d
  int *v58; // rcx
  int v59; // edx
  __int64 v60; // rdx
  int v61; // esi
  int v62; // edx
  _DWORD *v63; // r13
  __int64 v64; // rbp
  signed int v65; // r14d
  __int64 v66; // rdx
  int *v67; // rax
  int *v68; // rdx
  int v69; // ecx
  __int64 v70; // rbx
  int v71; // edx
  int v72; // edi
  int v73; // r11d
  int *v74; // rdi
  int v75; // r8d
  __int64 v76; // r9
  signed int v77; // r15d
  int v78; // ebp
  __int64 v79; // rax
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // r14
  __int64 v84; // rdx
  int *v85; // rbx
  int v86; // ecx
  __int64 v87; // rsi
  int v88; // esi
  __int64 v89; // rcx
  __int64 v90; // rsi
  char *v91; // r14
  __int64 v92; // r10
  int v93; // esi
  unsigned int v94; // eax
  unsigned int v95; // r9d
  __int64 v96; // rax
  _DWORD *v97; // rcx
  char *v98; // r10
  __int64 v99; // rax
  unsigned int v100; // edx
  signed int v101; // edx
  int *v102; // rax
  __int64 v103; // rdx
  int v104; // esi
  int v105; // ecx
  int v106; // edx
  __int64 v107; // rsi
  __int64 v108; // rcx
  ClpCholeskyBase *v109; // rax
  void *v110; // rdi
  void *v111; // rdi
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rsi
  int *v116; // rsi
  int v117; // eax
  int v118; // edi
  __int64 v119; // rsi
  __int64 v120; // r8
  __int64 v121; // r10
  int v122; // edi
  __int64 v123; // rax
  unsigned int v124; // r12d
  __int64 v125; // rdi
  __int64 v126; // r10
  unsigned int v127; // r8d
  int v128; // r10d
  int v129; // edi
  unsigned int v130; // r11d
  __int64 v131; // rsi
  unsigned int v132; // r13d
  __int64 v133; // r8
  __int64 v134; // rbp
  unsigned int v135; // r13d
  __int64 v136; // rax
  unsigned int v137; // esi
  int v138; // edi
  int v139; // eax
  int v140; // esi
  signed int v141; // ebp
  int v142; // edi
  int v143; // ebx
  int v144; // eax
  int v145; // ecx
  __int64 v146; // r12
  __int64 v147; // rdx
  int v148; // eax
  int v149; // r10d
  int v150; // edx
  int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // r8
  int v154; // eax
  __int64 v155; // rdx
  int *v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // r11
  _DWORD *v160; // rax
  int v161; // r10d
  int *v162; // r12
  int v163; // eax
  int v164; // esi
  int v165; // r8d
  __int64 v166; // rdx
  int v167; // r9d
  __int64 v168; // rbx
  signed int v169; // eax
  __int64 v170; // rdi
  int v171; // ecx
  __int64 v172; // rcx
  int v173; // edx
  int v174; // ecx
  __int64 v175; // rdi
  __int64 v176; // rcx
  __int64 v177; // rdx
  int v178; // esi
  __int64 v179; // rbx
  __int64 v180; // rcx
  int v181; // edi
  __int64 v182; // rdi
  bool v183; // cl
  int *v184; // rcx
  int v185; // eax
  _DWORD *v186; // r11
  int *v187; // rdx
  int *v188; // rcx
  __int64 v189; // rdx
  _DWORD *v190; // rdx
  _DWORD *v191; // r15
  int v192; // eax
  __int64 v193; // rbx
  int v194; // r13d
  __int64 v195; // rax
  int *v196; // rax
  __int64 v197; // rcx
  int *v198; // rax
  int v199; // ecx
  __int64 v200; // r9
  int v201; // edx
  int *v202; // r14
  int v203; // edi
  int v204; // ebp
  int v205; // esi
  int v206; // eax
  __int64 v207; // rdx
  int *v208; // rax
  int *v209; // rsi
  __int64 v210; // rdx
  __int64 v211; // rax
  __int64 v212; // r8
  _DWORD *v213; // r9
  int v214; // r11d
  int v215; // r10d
  __int64 v216; // rsi
  int *v217; // rsi
  int *v218; // r11
  __int64 v219; // r10
  _DWORD *v220; // r8
  int v221; // r10d
  int v222; // ebx
  __int64 v223; // rcx
  int v224; // r13d
  __int64 v225; // rsi
  __int64 v226; // rax
  __int64 v227; // rdx
  int v228; // edi
  int *v229; // r8
  int v230; // edx
  int v231; // edx
  int *v232; // r8
  int v233; // edi
  __int64 v234; // rax
  int v235; // ebx
  int v236; // edx
  unsigned int v237; // ebx
  __int64 v238; // r9
  __int64 v239; // rbx
  int *v240; // r8
  int *v241; // rsi
  int v242; // eax
  __int64 v243; // rcx
  _DWORD *v244; // r11
  int v245; // edx
  int v246; // ebp
  int v247; // edx
  __int64 i; // rcx
  int v249; // eax
  int v250; // ecx
  int v251; // edx
  int v252; // eax
  int v253; // eax
  int v254; // edi
  __int64 v255; // rsi
  int *v256; // rdi
  __int64 v257; // r10
  int v258; // edi
  int v259; // ebx
  int v260; // r11d
  __int64 v261; // rsi
  unsigned int v262; // ebx
  unsigned int v263; // r13d
  int v264; // r10d
  int v265; // esi
  int v266; // esi
  unsigned int v267; // ebx
  __int64 v268; // r12
  __int64 v269; // r13
  __int64 v270; // rsi
  unsigned int v271; // r8d
  int v272; // esi
  int v273; // r8d
  int v274; // edi
  int v275; // r10d
  int v276; // esi
  int *v277; // r11
  int v278; // eax
  __int64 v279; // rdi
  __int64 v280; // rsi
  __int64 v281; // rdi
  int v282; // edi
  int v283; // r9d
  __int64 v284; // rcx
  int v285; // r10d
  unsigned __int64 v286; // r8
  __int64 v287; // rsi
  __int64 v288; // rax
  int *v289; // rdi
  int v290; // edx
  __int64 v291; // rdx
  int v292; // esi
  __int64 v293; // rdx
  int v294; // eax
  double v295; // xmm4_8
  double v296; // xmm5_8
  __int64 v297; // rdi
  __int64 v298; // r9
  int v299; // r11d
  int v300; // r13d
  __int64 v301; // r12
  __int64 v302; // rdx
  __int64 v303; // rbx
  __int64 v304; // rax
  _DWORD *v305; // r8
  int v306; // esi
  int *v307; // rax
  double v308; // xmm1_8
  int v309; // ecx
  int v310; // ecx
  double v311; // xmm0_8
  double v312; // xmm1_8
  int v313; // eax
  int *v314; // rsi
  int v315; // ecx
  __int64 v316; // rcx
  _DWORD *v317; // rax
  __int64 v318; // r15
  __int64 v319; // r11
  __int64 v320; // r12
  __int64 v321; // rbx
  __int64 v322; // rsi
  _DWORD *v323; // r8
  int v324; // edi
  int v325; // edx
  int v326; // eax
  unsigned __int64 v327; // rdx
  __int64 v328; // rax
  __int64 v329; // r9
  int v330; // edx
  double v331; // xmm2_8
  int *v332; // rsi
  int v333; // eax
  int v334; // eax
  double v335; // xmm0_8
  double v336; // xmm1_8
  int v337; // eax
  int *v338; // rcx
  int v339; // edx
  __int64 v340; // rax
  int v341; // [rsp+0h] [rbp-168h]
  int v342; // [rsp+0h] [rbp-168h]
  __int64 v343; // [rsp+0h] [rbp-168h]
  int v344; // [rsp+0h] [rbp-168h]
  int v345; // [rsp+0h] [rbp-168h]
  __int64 v346; // [rsp+8h] [rbp-160h]
  __int64 v347; // [rsp+10h] [rbp-158h]
  int v348; // [rsp+18h] [rbp-150h]
  __int64 v349; // [rsp+18h] [rbp-150h]
  _DWORD *v350; // [rsp+18h] [rbp-150h]
  __int64 v351; // [rsp+20h] [rbp-148h]
  int v352; // [rsp+28h] [rbp-140h]
  char *v353; // [rsp+28h] [rbp-140h]
  __int64 v354; // [rsp+28h] [rbp-140h]
  int *v355; // [rsp+30h] [rbp-138h]
  __int64 v356; // [rsp+38h] [rbp-130h]
  int *v357; // [rsp+40h] [rbp-128h]
  int v358; // [rsp+48h] [rbp-120h]
  int v359; // [rsp+4Ch] [rbp-11Ch]
  int v360; // [rsp+4Ch] [rbp-11Ch]
  int *v361; // [rsp+50h] [rbp-118h]
  __int64 v362; // [rsp+50h] [rbp-118h]
  _DWORD *v363; // [rsp+50h] [rbp-118h]
  int v364; // [rsp+58h] [rbp-110h]
  int v365; // [rsp+58h] [rbp-110h]
  double v366; // [rsp+58h] [rbp-110h]
  char *v367; // [rsp+60h] [rbp-108h]
  int v368; // [rsp+68h] [rbp-100h]
  double v369; // [rsp+68h] [rbp-100h]
  int *v370; // [rsp+70h] [rbp-F8h]
  __int64 v371; // [rsp+78h] [rbp-F0h]
  int *v372; // [rsp+78h] [rbp-F0h]
  __int64 v373; // [rsp+78h] [rbp-F0h]
  int v374; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v375; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v376; // [rsp+88h] [rbp-E0h]
  int *v377; // [rsp+90h] [rbp-D8h]
  char *v378; // [rsp+98h] [rbp-D0h]
  _DWORD *v379; // [rsp+98h] [rbp-D0h]
  signed int v380; // [rsp+98h] [rbp-D0h]
  int v381; // [rsp+98h] [rbp-D0h]
  __int64 v382; // [rsp+98h] [rbp-D0h]
  int v383; // [rsp+A0h] [rbp-C8h]
  int v384; // [rsp+A4h] [rbp-C4h]
  int v385; // [rsp+A8h] [rbp-C0h]
  int v386; // [rsp+A8h] [rbp-C0h]
  int v387; // [rsp+B0h] [rbp-B8h]
  __int64 v388; // [rsp+B0h] [rbp-B8h]
  int v389; // [rsp+B8h] [rbp-B0h]
  __int64 v390; // [rsp+B8h] [rbp-B0h]
  int v391; // [rsp+C0h] [rbp-A8h]
  int v392; // [rsp+C4h] [rbp-A4h]
  _DWORD *v393; // [rsp+C8h] [rbp-A0h]
  __int64 v394; // [rsp+C8h] [rbp-A0h]
  int v395; // [rsp+D0h] [rbp-98h]
  int v396; // [rsp+D0h] [rbp-98h]
  int v397; // [rsp+D4h] [rbp-94h]
  __int64 v398; // [rsp+D8h] [rbp-90h]
  _DWORD *v399; // [rsp+E0h] [rbp-88h]
  int v400; // [rsp+E8h] [rbp-80h]
  int v401; // [rsp+ECh] [rbp-7Ch]
  _DWORD *v402; // [rsp+F0h] [rbp-78h]
  __int64 v404; // [rsp+100h] [rbp-68h]
  __int64 v405; // [rsp+108h] [rbp-60h]
  int v406; // [rsp+110h] [rbp-58h]
  int v407; // [rsp+114h] [rbp-54h]
  signed int v408; // [rsp+118h] [rbp-50h]
  int v409; // [rsp+11Ch] [rbp-4Ch]
  __int64 v410; // [rsp+120h] [rbp-48h]
  __int64 v411; // [rsp+128h] [rbp-40h]

  v1 = *((int *)this + 11);
  if ( v1 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_342;
  *((_QWORD *)this + 8) = operator new[](4 * v1);
  v2 = *((int *)this + 11);
  if ( v2 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_342;
  *((_QWORD *)this + 9) = operator new[](4 * v2);
  v383 = 2 * (*((_DWORD *)this + 40) + 2 * *((_DWORD *)this + 11) + 5000);
  if ( (unsigned __int64)v383 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_342;
  v3 = operator new[](4LL * v383);
  v4 = *((int *)this + 11);
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_342;
  v5 = (int *)operator new[](4 * v4);
  v6 = *((_DWORD *)this + 11) + 1;
  if ( v6 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_342;
  v7 = operator new[](4 * v6);
  v8 = *((int *)this + 11);
  v9 = v7;
  memset(v5, 0, 4 * v8);
  if ( (int)v8 <= 0 )
  {
    *(_DWORD *)(v9 + 4 * v8) = 1;
    v26 = 1;
    v11 = *((char **)this + 13);
  }
  else
  {
    v10 = *((_QWORD *)this + 12);
    v11 = *((char **)this + 13);
    v12 = v5;
    v13 = (_DWORD *)(v10 + 4);
    do
    {
      *v12 += *v13 - *(v13 - 1) - 1;
      v14 = *(v13 - 1);
      v15 = v14 + 1;
      if ( v14 + 1 < *v13 )
      {
        v16 = v14 + 2;
        v17 = &v11[4 * (v15 - v16)];
        do
        {
          ++v5[*(int *)&v17[4 * v16]];
          v18 = v16++;
        }
        while ( *v13 > v18 );
      }
      ++v13;
      ++v12;
    }
    while ( (_DWORD *)(v10 + 4LL * (unsigned int)(v8 - 1) + 8) != v13 );
    v19 = 1;
    v20 = 0;
    v21 = *((_QWORD *)this + 9);
    do
    {
      v22 = v5[v19 - 1];
      v23 = v20 + 1;
      *(_DWORD *)(v21 + 4 * v19 - 4) = v22;
      v24 = *((_DWORD *)this + 11);
      v5[v19 - 1] = v20;
      v20 += v22;
      v25 = v19;
      *(_DWORD *)(v9 + 4 * v19++ - 4) = v23;
    }
    while ( v24 > v25 );
    v26 = v20 + 1;
    *(_DWORD *)(v9 + 4LL * v24) = v20 + 1;
    if ( v24 > 0 )
    {
      v27 = v5;
      v28 = (_DWORD *)(v10 + 4);
      v29 = 0;
      do
      {
        v30 = *(v28 - 1);
        ++v29;
        v31 = v30 + 1;
        if ( v30 + 1 < *v28 )
        {
          v32 = v30 + 2;
          v33 = &v11[4 * (v31 - v32)];
          do
          {
            v34 = *v27;
            v35 = *(int *)&v33[4 * v32];
            ++*v27;
            v36 = &v5[v35];
            *(_DWORD *)(v3 + 4 * v34) = v35 + 1;
            LODWORD(v35) = *v36;
            *(_DWORD *)(v3 + 4LL * *v36) = v29;
            *v36 = v35 + 1;
            LODWORD(v35) = v32++;
          }
          while ( *v28 > (int)v35 );
        }
        ++v27;
        ++v28;
      }
      while ( v24 != v29 );
    }
  }
  if ( v11 )
    operator delete[](v11);
  v37 = *((void **)this + 12);
  *((_QWORD *)this + 13) = v3;
  if ( v37 )
    operator delete[](v37);
  *((_QWORD *)this + 12) = v9;
  operator delete[](v5);
  v38 = *((_DWORD *)this + 43);
  v39 = 3;
  if ( (unsigned int)(v38 - 1) <= 1 )
    v39 = *((_DWORD *)this + 43);
  v407 = v39;
  v40 = *((_DWORD *)this + 11) * (7 - ((unsigned int)(v38 - 1) >= 2));
  if ( (unsigned __int64)v40 > 0x1FFFFFFFFFFFFFFELL )
LABEL_342:
    __cxa_throw_bad_array_new_length();
  v41 = operator new[](4LL * v40);
  v375 = v41;
  v42 = *((int *)this + 11);
  v400 = *((_DWORD *)this + 11);
  v43 = v41 + 4 * v42;
  v44 = v43 + 4 * v42;
  v346 = v43;
  v45 = (int *)(v44 + 4 * v42);
  v356 = v44;
  v46 = (char *)&v45[v42];
  v357 = v45;
  v367 = v46;
  v47 = &v46[4 * v42];
  if ( (int)v42 <= 0 )
  {
    v351 = *((_QWORD *)this + 12);
    v355 = *((int **)this + 8);
    v347 = *((_QWORD *)this + 9);
    if ( v407 == 3 )
      goto LABEL_79;
  }
  else
  {
    v48 = *((_QWORD *)this + 12);
    v49 = *((_QWORD *)this + 9);
    v50 = 1;
    v51 = *((int **)this + 8);
    v351 = v48;
    v347 = v49;
    v355 = v51;
    do
    {
      v52 = v50;
      *(_DWORD *)(v41 + 4 * v50 - 4) = *(_DWORD *)(v48 + 4 * v50) - *(_DWORD *)(v48 + 4 * v50 - 4);
      *(_DWORD *)(v44 + 4 * v50 - 4) = 0;
      *(_DWORD *)(v49 + 4 * v50 - 4) = 0;
      v51[v50 - 1] = 0;
      v45[v50 - 1] = 0;
      *(_DWORD *)&v47[4 * v50 - 4] = 1;
      *(_DWORD *)(v43 + 4 * v50 - 4) = 1;
      *(_DWORD *)&v46[4 * v50 - 4] = *(_DWORD *)(v41 + 4 * v50 - 4);
      v53 = *((_DWORD *)this + 11);
      ++v50;
    }
    while ( v53 > v52 );
    v400 = *((_DWORD *)this + 11);
    v54 = v53 - 1;
    v55 = *((_QWORD *)this + 13);
    if ( v407 == 3 )
    {
      if ( v53 <= 0 )
        goto LABEL_79;
      v376 = v375;
    }
    else
    {
      v90 = 4LL * v53;
      v91 = &v47[v90];
      v376 = (unsigned __int64)&v47[v90];
      if ( v53 <= 0 )
        goto LABEL_79;
      v92 = 20 * v42 + v90;
      if ( (v92 + 16 <= 0 || v375 + v92 >= v375 + 16) && (unsigned int)v53 > 0xC )
      {
        v93 = 0;
        v94 = -(int)(v375 >> 2) & 3;
        if ( v94 )
        {
          v93 = 1;
          *(_DWORD *)v91 = *(_DWORD *)v375;
          if ( v94 != 1 )
          {
            v93 = 2;
            *((_DWORD *)v91 + 1) = *(_DWORD *)(v375 + 4);
            if ( v94 != 2 )
            {
              v93 = 3;
              *((_DWORD *)v91 + 2) = *(_DWORD *)(v375 + 8);
            }
          }
        }
        v95 = v53 - v94;
        v96 = 4LL * v94;
        v97 = (_DWORD *)(v375 + v96);
        v98 = (char *)(v375 + v92 + v96);
        v99 = 0;
        v100 = 0;
        do
        {
          ++v100;
          *(__m128i *)&v98[v99 * 4] = _mm_load_si128((const __m128i *)&v97[v99]);
          v99 += 4;
        }
        while ( v100 < v95 >> 2 );
        v101 = (v95 & 0xFFFFFFFC) + v93;
        if ( (v95 & 0xFFFFFFFC) != v95 )
        {
          *(_DWORD *)(v376 + 4LL * v101) = *(_DWORD *)(v375 + 4LL * v101);
          if ( v400 > v101 + 1 )
          {
            *(_DWORD *)(v376 + 4LL * (v101 + 1)) = *(_DWORD *)(v375 + 4LL * (v101 + 1));
            if ( v400 > v101 + 2 )
            {
              *(_DWORD *)(v376 + 4LL * (v101 + 2)) = *(_DWORD *)(v375 + 4LL * (v101 + 2));
              if ( v400 > v101 + 3 )
              {
                *(_DWORD *)(v376 + 4LL * (v101 + 3)) = *(_DWORD *)(v375 + 4LL * (v101 + 3));
                if ( v400 > v101 + 4 )
                {
                  *(_DWORD *)(v376 + 4LL * (v101 + 4)) = *(_DWORD *)(v375 + 4LL * (v101 + 4));
                  if ( v400 > v101 + 5 )
                    *(_DWORD *)(v376 + 4LL * (v101 + 5)) = *(_DWORD *)(v375 + 4LL * (v101 + 5));
                }
              }
            }
          }
        }
      }
      else
      {
        v340 = 0;
        do
        {
          *(_DWORD *)(v376 + v340) = *(_DWORD *)(v375 + v340);
          v340 += 4;
        }
        while ( 4LL * v54 + 4 != v340 );
      }
    }
    v56 = 0;
    v57 = 1;
    do
    {
      while ( 1 )
      {
        v60 = *(int *)(v376 + 4 * v56);
        v61 = v56 + 1;
        if ( (int)v60 > 0 )
          break;
        v62 = v57++;
        v355[v56] = -v62;
        *(_DWORD *)(v351 + 4 * v56) = 0;
        *(_DWORD *)&v47[4 * v56++] = 0;
        if ( v400 <= (int)v56 )
          goto LABEL_39;
      }
      v58 = &v357[v60 - 1];
      v59 = *v58;
      if ( *v58 )
        *(_DWORD *)(v49 + 4LL * v59 - 4) = v61;
      *(_DWORD *)(v44 + 4 * v56++) = v59;
      *v58 = v61;
    }
    while ( v400 > (int)v56 );
LABEL_39:
    v391 = v57;
    if ( v400 >= v57 )
    {
      v392 = 1;
      v406 = 0;
      v410 = v54;
      v359 = 2;
      v63 = v47;
      v341 = v26;
      v64 = v55;
      v411 = (__int64)&v47[4 * v54 + 4];
      v65 = v54;
      while ( 1 )
      {
        v66 = v392;
        v67 = &v357[v66 - 1];
        v368 = *v67;
        if ( *v67 <= 0 )
        {
          v68 = &v357[v66];
          v69 = v392;
          do
          {
            v67 = v68++;
            ++v69;
          }
          while ( *(v68 - 1) <= 0 );
          v368 = *(v68 - 1);
          v392 = v69;
        }
        v70 = 4LL * v368;
        v71 = *(_DWORD *)(v356 + v70 - 4);
        v405 = v70;
        v398 = v70 - 4;
        if ( v71 )
          *(_DWORD *)(v347 + 4LL * v71 - 4) = 0;
        *v67 = v71;
        v72 = *(_DWORD *)(v398 + v346);
        v402 = (_DWORD *)(v398 + v346);
        v73 = *(int *)((char *)v355 + v398);
        *(int *)((char *)v355 + v398) = -v391;
        v401 = v72;
        v391 += v72;
        *(_DWORD *)(v398 + v346) = -v72;
        v389 = v73;
        v74 = (int *)(v398 + v351);
        v377 = (int *)&v367[v398];
        v370 = (int *)(v398 + v351);
        if ( v73 )
        {
          v75 = *v74;
          v409 = *(_DWORD *)&v367[v398] - v73;
          v395 = v73 + 1;
          if ( v73 + 1 <= 0 )
          {
            v358 = 0;
            v385 = v341;
            v384 = v341;
            v144 = 0;
            v145 = v341;
          }
          else
          {
            v76 = v64;
            v358 = 0;
            v397 = v73 + 2;
            v364 = 1;
            v77 = v341;
            v404 = v64 + 4;
            v399 = v63;
            v78 = v341;
            v408 = v65;
            do
            {
              if ( v395 == v364 )
              {
                if ( v409 > 0 )
                {
                  v352 = v409;
                  v81 = v75;
                  v378 = &v367[v398];
                  v361 = (int *)(v398 + v351);
                  v390 = v398;
                  v387 = v368;
LABEL_52:
                  v342 = 1;
                  while ( 2 )
                  {
                    v82 = v81++;
                    v83 = *(int *)(v76 + 4 * v82 - 4);
                    v84 = 4 * v83;
                    v85 = (int *)(v346 + 4 * v83 - 4);
                    v86 = *v85;
                    if ( *v85 <= 0 )
                    {
LABEL_56:
                      if ( ++v342 > v352 )
                        goto LABEL_124;
                      continue;
                    }
                    break;
                  }
                  if ( v383 >= v77 )
                  {
LABEL_59:
                    v87 = v77;
                    v358 += v86;
                    ++v77;
                    *(_DWORD *)(v76 + 4 * v87 - 4) = v83;
                    *v85 = -v86;
                    v88 = *(_DWORD *)(v347 + v84 - 4);
                    v89 = *(int *)(v356 + v84 - 4);
                    if ( v88 )
                      *(_DWORD *)(v356 + 4LL * v88 - 4) = v89;
                    else
                      v357[*(int *)(v376 + v84 - 4) - 1] = v89;
                    if ( (_DWORD)v89 )
                      *(_DWORD *)(v347 + 4 * v89 - 4) = v88;
                    goto LABEL_56;
                  }
                  *v377 -= v364;
                  *v370 = v75;
                  if ( !*v377 )
                    v75 = 0;
                  *v370 = v75;
                  *v361 = v81;
                  v113 = v352 - v342;
                  *(_DWORD *)v378 = v352 - v342;
                  if ( v352 != v342 )
                    v113 = *v361;
                  *v361 = v113;
                  v114 = 0;
                  do
                  {
                    v115 = *(int *)(v351 + 4 * v114);
                    if ( (int)v115 > 0 )
                    {
                      v116 = (int *)(v76 + 4 * v115 - 4);
                      *(_DWORD *)(v351 + 4 * v114) = *v116;
                      *v116 = ~(_DWORD)v114;
                    }
                    ++v114;
                  }
                  while ( v410 + 1 != v114 );
                  v348 = 1;
                  v117 = 1;
                  while ( v117 < v78 )
                  {
                    v118 = *(_DWORD *)(v76 + 4LL * v117 - 4);
                    if ( v118 < 0 )
                    {
                      v254 = -v118;
                      ++v117;
                    }
                    else
                    {
                      v119 = v117 + 2;
                      v120 = v119 + (unsigned int)(v78 - 1 - v117);
                      v121 = v76 + 4 * (v117 + 1 - v119);
                      do
                      {
                        if ( v120 == v119 )
                          goto LABEL_104;
                        v122 = *(_DWORD *)(v121 + 4 * v119 - 4);
                        v117 = v119++;
                      }
                      while ( v122 >= 0 );
                      v254 = -v122;
                    }
                    v255 = 4LL * v254;
                    v256 = (int *)(v351 + v255 - 4);
                    v257 = 4LL * v348;
                    *(_DWORD *)(v76 + v257 - 4) = *v256;
                    *v256 = v348;
                    v258 = v348 + 1;
                    v259 = *(_DWORD *)&v367[v255 - 4] + v348;
                    v260 = v259;
                    if ( v348 + 1 >= v259 )
                    {
                      ++v348;
                    }
                    else
                    {
                      v261 = 4LL * v117 - 4;
                      v262 = v259 - v348 - 1;
                      if ( (v257 >= 4LL * v117 + 12 || v261 >= v257 + 16) && v262 > 0xC )
                      {
                        v263 = -(int)((unsigned __int64)(v76 + v261) >> 2) & 3;
                        v264 = v117;
                        if ( v263 + 3 > v260 + -2 - v348 )
                          goto LABEL_238;
                        if ( v263 )
                        {
                          v264 = v117 + 1;
                          *(_DWORD *)(v76 + 4LL * v258 - 4) = *(_DWORD *)(v76 + 4LL * v117 - 4);
                          v258 = v348 + 2;
                          if ( v263 != 1 )
                          {
                            v265 = *(_DWORD *)(v76 + 4LL * v264 - 4);
                            v264 = v117 + 2;
                            *(_DWORD *)(v76 + 4LL * v258 - 4) = v265;
                            v258 = v348 + 3;
                            if ( v263 != 2 )
                            {
                              v266 = *(_DWORD *)(v76 + 4LL * v264 - 4);
                              v264 = v117 + 3;
                              *(_DWORD *)(v76 + 4LL * v258 - 4) = v266;
                              v258 = v348 + 4;
                            }
                          }
                        }
                        v267 = v262 - v263;
                        v268 = v76 + 4 * (v263 + (__int64)v348);
                        v269 = v76 + 4 * (v263 + (__int64)v117) - 4;
                        v270 = 0;
                        v271 = 0;
                        do
                        {
                          ++v271;
                          *(__m128i *)(v268 + v270) = _mm_load_si128((const __m128i *)(v269 + v270));
                          v270 += 16;
                        }
                        while ( v271 < v267 >> 2 );
                        v258 += v267 & 0xFFFFFFFC;
                        v264 += v267 & 0xFFFFFFFC;
                        if ( (v267 & 0xFFFFFFFC) != v267 )
                        {
LABEL_238:
                          *(_DWORD *)(v76 + 4LL * v258 - 4) = *(_DWORD *)(v76 + 4LL * v264 - 4);
                          if ( v260 > v258 + 1 )
                          {
                            *(_DWORD *)(v76 + 4LL * (v258 + 1) - 4) = *(_DWORD *)(v76 + 4LL * (v264 + 1) - 4);
                            if ( v260 > v258 + 2 )
                            {
                              *(_DWORD *)(v76 + 4LL * (v258 + 2) - 4) = *(_DWORD *)(v76 + 4LL * (v264 + 2) - 4);
                              if ( v260 > v258 + 3 )
                              {
                                *(_DWORD *)(v76 + 4LL * (v258 + 3) - 4) = *(_DWORD *)(v76 + 4LL * (v264 + 3) - 4);
                                v272 = v258 + 4;
                                v273 = v264 + 4;
                                if ( v260 > v258 + 4 )
                                {
                                  v274 = v258 + 5;
                                  v275 = v264 + 5;
                                  *(_DWORD *)(v76 + 4LL * v272 - 4) = *(_DWORD *)(v76 + 4LL * v273 - 4);
                                  if ( v260 > v274 )
                                    *(_DWORD *)(v76 + 4LL * v274 - 4) = *(_DWORD *)(v76 + 4LL * v275 - 4);
                                }
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        v280 = v76 + 4LL * v117;
                        v281 = v258 - (__int64)v117;
                        do
                        {
                          *(_DWORD *)(v280 + 4 * v281 - 4) = *(_DWORD *)(v280 - 4);
                          v280 += 4;
                        }
                        while ( v404 + 4 * (v117 + (unsigned __int64)(unsigned int)(v260 + -2 - v348)) != v280 );
                      }
                      v276 = v348;
                      v348 = v260;
                      v117 += v260 + ~v276;
                    }
                  }
LABEL_104:
                  v85 = (int *)(v346 + 4 * v83 - 4);
                  if ( v78 >= v77 )
                  {
                    v77 = v348;
                    v78 = v348;
                  }
                  else
                  {
                    v123 = v78;
                    v124 = v77 - v78;
                    v125 = 4LL * v78 - 4;
                    v126 = 4LL * v348;
                    if ( (v126 - 4 >= 4LL * v78 + 12 || v125 >= v126 + 12) && v124 > 0xC )
                    {
                      v127 = -(int)((unsigned __int64)(v76 + v125) >> 2) & 3;
                      if ( v127 + 3 > v77 - 1 - v78 )
                      {
                        v138 = v348;
LABEL_116:
                        *(_DWORD *)(v76 + 4LL * v138 - 4) = *(_DWORD *)(v76 + 4 * v123 - 4);
                        if ( v78 + 1 < v77 )
                        {
                          *(_DWORD *)(v76 + 4LL * (v138 + 1) - 4) = *(_DWORD *)(v76 + 4LL * (v78 + 1) - 4);
                          if ( v78 + 2 < v77 )
                          {
                            *(_DWORD *)(v76 + 4LL * (v138 + 2) - 4) = *(_DWORD *)(v76 + 4LL * (v78 + 2) - 4);
                            if ( v77 > v78 + 3 )
                            {
                              *(_DWORD *)(v76 + 4LL * (v138 + 3) - 4) = *(_DWORD *)(v76 + 4LL * (v78 + 3) - 4);
                              v139 = v78 + 4;
                              v140 = v138 + 4;
                              if ( v77 > v78 + 4 )
                              {
                                v141 = v78 + 5;
                                v142 = v138 + 5;
                                *(_DWORD *)(v76 + 4LL * v140 - 4) = *(_DWORD *)(v76 + 4LL * v139 - 4);
                                if ( v77 > v141 )
                                  *(_DWORD *)(v76 + 4LL * v142 - 4) = *(_DWORD *)(v76 + 4LL * v141 - 4);
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        if ( v127 )
                        {
                          *(_DWORD *)(v76 + v126 - 4) = *(_DWORD *)(v76 + 4LL * v78 - 4);
                          v128 = v78 + 1;
                          v129 = v348 + 1;
                          if ( v127 != 1 )
                          {
                            *(_DWORD *)(v76 + 4LL * v129 - 4) = *(_DWORD *)(v76 + 4LL * v128 - 4);
                            v128 = v78 + 2;
                            v129 = v348 + 2;
                            if ( v127 != 2 )
                            {
                              *(_DWORD *)(v76 + 4LL * v129 - 4) = *(_DWORD *)(v76 + 4LL * v128 - 4);
                              v128 = v78 + 3;
                              v129 = v348 + 3;
                            }
                          }
                        }
                        else
                        {
                          v129 = v348;
                          v128 = v78;
                        }
                        v130 = v124 - v127;
                        v131 = v127 + (__int64)v348;
                        v132 = v124 - v127;
                        v133 = v76 + 4 * (v127 + (__int64)v78) - 4;
                        v134 = v76 + 4 * v131 - 4;
                        v135 = v132 >> 2;
                        v136 = 0;
                        v137 = 0;
                        do
                        {
                          ++v137;
                          *(__m128i *)(v134 + v136) = _mm_load_si128((const __m128i *)(v133 + v136));
                          v136 += 16;
                        }
                        while ( v137 < v135 );
                        v138 = (v130 & 0xFFFFFFFC) + v129;
                        v78 = (v130 & 0xFFFFFFFC) + v128;
                        if ( (v130 & 0xFFFFFFFC) != v130 )
                        {
                          v123 = v78;
                          goto LABEL_116;
                        }
                      }
                    }
                    else
                    {
                      v279 = v76 + 4LL * v78;
                      do
                      {
                        *(_DWORD *)(v279 + 4 * (v348 - (__int64)v78) - 4) = *(_DWORD *)(v279 - 4);
                        v279 += 4;
                      }
                      while ( v404 + 4 * ((unsigned int)(v77 - 1 - v78) + (__int64)v78) != v279 );
                    }
                    v77 = v348 + v124;
                    v78 = v348;
                  }
                  v81 = *v361;
                  v75 = *v370;
                  goto LABEL_59;
                }
              }
              else
              {
                v79 = v75++;
                v80 = *(int *)(v76 + 4 * v79 - 4);
                v387 = v80;
                v390 = 4 * v80 - 4;
                v378 = &v367[v390];
                v361 = (int *)(v390 + v351);
                v81 = *(_DWORD *)(v390 + v351);
                v352 = *(_DWORD *)&v367[v390];
                if ( v352 > 0 )
                  goto LABEL_52;
LABEL_124:
                if ( v387 != v368 )
                {
                  *(_DWORD *)((char *)v399 + v390) = 0;
                  *v361 = -v368;
                }
              }
              ++v364;
            }
            while ( v364 != v397 );
            v63 = v399;
            v65 = v408;
            v143 = v78;
            v384 = v78;
            v385 = v77;
            v64 = v76;
            v144 = v77 - v143;
            v145 = v77;
          }
          v389 = v144;
          v396 = v145;
        }
        else
        {
          v282 = *v74;
          v384 = v282;
          if ( v282 >= v282 + *v377 )
          {
            v144 = 0;
            v385 = v282;
            v358 = 0;
            v396 = v341;
          }
          else
          {
            v283 = v282;
            v284 = v64 + 4LL * v282;
            v285 = 0;
            v286 = v64 + 4 * (v282 + (unsigned __int64)(unsigned int)(*v377 - 1)) + 4;
            do
            {
              v287 = *(int *)(v284 - 4);
              v288 = 4 * v287;
              v289 = (int *)(v346 + 4 * v287 - 4);
              v290 = *v289;
              if ( *v289 > 0 )
              {
                v285 += v290;
                *v289 = -v290;
                v291 = v283++;
                *(_DWORD *)(v64 + 4 * v291 - 4) = v287;
                v292 = *(_DWORD *)(v347 + v288 - 4);
                v293 = *(int *)(v356 + v288 - 4);
                if ( v292 )
                  *(_DWORD *)(v356 + 4LL * v292 - 4) = v293;
                else
                  v357[*(int *)(v376 + v288 - 4) - 1] = v293;
                if ( (_DWORD)v293 )
                  *(_DWORD *)(v347 + 4 * v293 - 4) = v292;
              }
              v284 += 4;
            }
            while ( v286 != v284 );
            v385 = v283;
            v358 = v285;
            v144 = v283 - v384;
            v396 = v341;
          }
        }
        *v370 = v384;
        *v377 = v144;
        v393 = (_DWORD *)(v375 + v398);
        *(_DWORD *)(v375 + v398) = v358;
        if ( (unsigned int)(v359 + v400) > 0x7FF89EC0 )
        {
          v317 = v63;
          do
          {
            if ( *v317 )
              *v317 = 1;
            ++v317;
          }
          while ( (_DWORD *)v411 != v317 );
          v359 = 2;
        }
        if ( v384 >= v385 )
        {
          *v393 = v358;
          v294 = v406;
          if ( v406 < v358 )
            v294 = v358;
          v359 += v294;
          v221 = v65 - v391;
          v406 = v294;
          if ( v407 != 1 )
          {
            if ( v407 == 2 )
              goto LABEL_275;
            goto LABEL_323;
          }
LABEL_299:
          if ( v384 >= v385 )
            goto LABEL_323;
          v318 = v64 + 4LL * v384;
          v344 = v384;
          v319 = v64 + 4 + 4 * ((unsigned int)(v385 - 1 - v384) + (__int64)v384);
          do
          {
            while ( 1 )
            {
              v320 = *(int *)(v318 - 4);
              v321 = 4 * v320;
              v322 = 4 * v320 - 4;
              v323 = (_DWORD *)(v346 + v322);
              v324 = *(_DWORD *)(v346 + v322);
              if ( v324 < 0 )
                break;
              v318 += 4;
              if ( v319 == v318 )
                goto LABEL_207;
            }
            v325 = v355[(unsigned __int64)v321 / 4 - 1];
            v326 = *(_DWORD *)(v351 + v321 - 4);
            if ( v326 >= v326 + v325 )
            {
              v331 = 2.0;
            }
            else
            {
              v327 = v326 + (unsigned __int64)(unsigned int)(v325 - 1);
              v328 = v64 + 4LL * v326;
              v329 = v64 + 4 + 4 * v327;
              v330 = 0;
              do
              {
                if ( v330 < *(_DWORD *)(v375 + 4LL * *(int *)(v328 - 4) - 4) )
                  v330 = *(_DWORD *)(v375 + 4LL * *(int *)(v328 - 4) - 4);
                v328 += 4;
              }
              while ( v329 != v328 );
              v331 = (double)(v330 - 1) * (double)(v330 - 1) - (double)(v330 - 1);
            }
            v332 = (int *)(v375 + v322);
            *v323 = -v324;
            v333 = *v332 + v358;
            if ( v333 > v221 )
              v333 = v221;
            v334 = v324 + v333;
            if ( v334 <= 0 )
              v334 = 1;
            *v332 = v334;
            v335 = (double)v334 * (double)v334 - (double)v334 - v331;
            if ( v335 < 1.1 )
            {
              v338 = v357;
              v337 = 1;
            }
            else
            {
              v336 = sqrt(v335);
              if ( v335 < 0.0 )
              {
                v382 = v319;
                v374 = v221;
                sqrt(v335);
                v337 = (int)v336;
                v221 = v374;
                v319 = v382;
              }
              else
              {
                v337 = (int)v336;
              }
              v338 = &v357[(int)v336 - 1];
            }
            *(_DWORD *)(v376 + v321 - 4) = v337;
            v339 = *v338;
            if ( *v338 )
              *(_DWORD *)(v347 + 4LL * v339 - 4) = v320;
            *(_DWORD *)(v356 + v321 - 4) = v339;
            *(_DWORD *)(v347 + v321 - 4) = 0;
            *(_DWORD *)(v64 + 4LL * v344 - 4) = v320;
            *v338 = v320;
            if ( v392 <= v337 )
              v337 = v392;
            v318 += 4;
            ++v344;
            v392 = v337;
          }
          while ( v319 != v318 );
LABEL_207:
          v235 = v396;
          v236 = v344 - v384;
          if ( v389 )
            v235 = v344;
          v341 = v235;
          *v402 = v358 + v401;
          *v377 = v236;
          if ( !v236 )
            goto LABEL_325;
          goto LABEL_210;
        }
        v146 = v64 + 4LL * v384;
        v388 = v146;
        v349 = v64 + 4;
        do
        {
          v147 = 4LL * *(int *)(v146 - 4);
          v148 = v355[(unsigned __int64)v147 / 4 - 1];
          if ( v148 > 0 )
          {
            v149 = *(_DWORD *)(v346 + v147 - 4);
            v150 = *(_DWORD *)(v351 + v147 - 4);
            v151 = v150 + v148;
            if ( v150 < v151 )
            {
              v152 = v64 + 4LL * v150;
              v153 = v349 + 4 * ((unsigned int)(v151 - v150 - 1) + (__int64)v150);
              do
              {
                while ( 1 )
                {
                  v155 = *(int *)(v152 - 4);
                  v156 = &v63[v155 - 1];
                  v154 = *v156;
                  if ( v359 > *v156 )
                    break;
                  v154 += v149;
LABEL_136:
                  v152 += 4;
                  *v156 = v154;
                  if ( v153 == v152 )
                    goto LABEL_140;
                }
                if ( !v154 )
                  goto LABEL_136;
                v152 += 4;
                *v156 = v149 + v359 + *(_DWORD *)(v375 + v155 * 4 - 4);
              }
              while ( v153 != v152 );
            }
          }
LABEL_140:
          v146 += 4;
        }
        while ( v64 + 4 + 4 * (v384 + (unsigned __int64)(unsigned int)(v385 - 1 - v384)) != v146 );
        v371 = v146;
        v343 = v64 + 4LL * v384;
        v157 = v343;
        do
        {
          v158 = *(int *)(v157 - 4);
          v365 = v158;
          v158 *= 4;
          v159 = v158 - 4;
          v362 = v158;
          v160 = (_DWORD *)(v158 - 4 + v351);
          v161 = *v160;
          v379 = v160;
          v162 = (int *)((char *)v355 + v159);
          v163 = *(int *)((char *)v355 + v159);
          v164 = v161 + v163;
          if ( v161 >= v161 + v163 )
          {
            v165 = v161;
            v173 = 1;
            v169 = 0;
            v167 = 0;
          }
          else
          {
            v165 = v161;
            v166 = v64 + 4LL * v161;
            v167 = 0;
            v168 = v349 + 4 * (v161 + (unsigned __int64)(unsigned int)(v163 - 1));
            v169 = 0;
            do
            {
              while ( 1 )
              {
                v170 = *(int *)(v166 - 4);
                v171 = v63[v170 - 1];
                if ( v171 )
                {
                  v169 += v170;
                  v167 += v171 - v359;
                  v172 = v165++;
                  *(_DWORD *)(v64 + 4 * v172 - 4) = v170;
                  if ( v169 >= v65 )
                    break;
                }
                v166 += 4;
                if ( v168 == v166 )
                  goto LABEL_149;
              }
              do
                v169 -= v65;
              while ( v169 >= v65 );
              v166 += 4;
            }
            while ( v168 != v166 );
LABEL_149:
            v173 = v165 - v161 + 1;
          }
          *v162 = v173;
          v353 = &v367[v159];
          v174 = v161 + *(_DWORD *)&v367[v159];
          if ( v164 >= v174 )
          {
            v178 = v165;
            v183 = 1;
          }
          else
          {
            v175 = v164;
            v176 = (unsigned int)(v174 - 1 - v164);
            v177 = v64 + 4LL * v164;
            v178 = v165;
            v179 = v349 + 4 * (v175 + v176);
            do
            {
              v180 = *(int *)(v177 - 4);
              v181 = *(_DWORD *)(v346 + 4 * v180 - 4);
              if ( v181 > 0 )
              {
                v169 += v180;
                v167 += v181;
                v182 = v178++;
                for ( *(_DWORD *)(v64 + 4 * v182 - 4) = v180; v169 >= v65; v169 -= v65 )
                  ;
              }
              v177 += 4;
            }
            while ( v179 != v177 );
            v173 = *v162;
            v183 = v178 == v165;
          }
          if ( v173 == 1 && v183 )
          {
            v277 = (int *)(v346 + v159);
            v278 = *v277;
            v358 += *v277;
            v391 -= *v277;
            *v379 = -v368;
            v401 -= v278;
            *v277 = 0;
            *v162 = 0;
          }
          else
          {
            if ( *(_DWORD *)(v375 + v159) > v167 )
              *(_DWORD *)(v375 + v159) = v167;
            v184 = (int *)(v64 + 4LL * v165 - 4);
            v185 = v169 + 1;
            v186 = (_DWORD *)(v356 + v159);
            *(_DWORD *)(v64 + 4LL * v178 - 4) = *v184;
            v187 = (int *)(v64 + 4LL * v161 - 4);
            *v184 = *v187;
            *v187 = v368;
            *(_DWORD *)v353 = v178 - v161 + 1;
            v188 = &v357[v185 - 1];
            v189 = *v188;
            if ( (int)v189 <= 0 )
            {
              *v186 = -(int)v189;
              *v188 = -v365;
            }
            else
            {
              v190 = (_DWORD *)(v347 + 4 * v189 - 4);
              *v186 = *v190;
              *v190 = v365;
            }
            *(_DWORD *)(v347 + v362 - 4) = v185;
          }
          v343 += 4;
          v157 = v343;
        }
        while ( v371 != v343 );
        v191 = v63;
        v354 = v64;
        *v393 = v358;
        v192 = v406;
        v193 = v64 + 4LL * v384;
        v380 = v65;
        if ( v406 < v358 )
          v192 = v358;
        v406 = v192;
        v194 = v192 + v359;
        while ( 2 )
        {
          while ( 2 )
          {
            v195 = 4LL * *(int *)(v193 - 4);
            if ( *(int *)(v346 + v195 - 4) >= 0 )
              goto LABEL_168;
            v196 = &v357[*(int *)(v347 + v195 - 4) - 1];
            v197 = *v196;
            if ( !(_DWORD)v197 )
              goto LABEL_168;
            if ( (int)v197 >= 0 )
            {
              v198 = (int *)(v347 + 4 * v197 - 4);
              v199 = *v198;
              *v198 = 0;
              if ( v199 )
                goto LABEL_173;
              goto LABEL_168;
            }
            *v196 = 0;
            v199 = -(int)v197;
LABEL_173:
            v200 = 4LL * v199 - 4;
            v201 = *(_DWORD *)(v356 + v200);
            if ( !v201 )
            {
LABEL_168:
              v193 += 4;
              if ( v343 == v193 )
                goto LABEL_192;
              continue;
            }
            break;
          }
          v394 = v193;
          v202 = (int *)(v356 + v200);
          while ( 2 )
          {
            v203 = *(_DWORD *)&v367[v200];
            v204 = *(int *)((char *)v355 + v200);
            v205 = *(_DWORD *)(v351 + v200);
            v206 = v205 + 1;
            if ( v203 + v205 > v205 + 1 )
            {
              v207 = v206;
              v208 = (int *)(v354 + 4LL * v206 - 4);
              v209 = (int *)(v354 + 4 * ((unsigned int)(v203 - 2) + v207));
              do
              {
                v210 = *v208++;
                v191[v210 - 1] = v194;
              }
              while ( v209 != v208 );
              v201 = *v202;
              if ( !*v202 )
              {
                ++v194;
                goto LABEL_168;
              }
            }
            v360 = -v199;
            v363 = (_DWORD *)(v346 + v200);
            while ( 2 )
            {
              while ( 1 )
              {
                v211 = 4LL * v201;
                v212 = v211 - 4;
                if ( v203 == *(_DWORD *)&v367[v211 - 4] )
                {
                  v213 = (int *)((char *)v355 + v212);
                  if ( v204 == *(int *)((char *)v355 + v212) )
                  {
                    v214 = *(_DWORD *)(v212 + v351);
                    v372 = (int *)(v212 + v351);
                    v215 = v214 + 1;
                    if ( v203 + v214 <= v214 + 1 )
                      goto LABEL_188;
                    v216 = 4LL * v215;
                    if ( v194 == v191[*(int *)(v354 + v216 - 4) - 1] )
                      break;
                  }
                }
LABEL_180:
                v199 = v201;
                v201 = *(_DWORD *)(v356 + v211 - 4);
                if ( !v201 )
                  goto LABEL_189;
              }
              v217 = (int *)(v354 + v216);
              v218 = (int *)(v354 + 4 * ((unsigned int)(v203 - 2) + (__int64)v215));
              while ( v218 != v217 )
              {
                v219 = *v217++;
                if ( v191[v219 - 1] != v194 )
                  goto LABEL_180;
              }
LABEL_188:
              v220 = (_DWORD *)(v346 + v212);
              *v372 = v360;
              *v363 += *v220;
              *v213 = 0;
              *v220 = 0;
              v201 = *(_DWORD *)(v356 + v211 - 4);
              *(_DWORD *)(v356 + 4LL * v199 - 4) = v201;
              if ( v201 )
                continue;
              break;
            }
LABEL_189:
            ++v194;
            v199 = *v202;
            if ( *v202 )
            {
              v200 = 4LL * v199 - 4;
              v202 = (int *)(v356 + v200);
              v201 = *(_DWORD *)(v356 + v200);
              if ( v201 )
                continue;
            }
            break;
          }
          v193 += 4;
          if ( v343 != v394 + 4 )
            continue;
          break;
        }
LABEL_192:
        v65 = v380;
        v359 = v194;
        v64 = v354;
        v63 = v191;
        v221 = v380 - v391;
        if ( v407 == 1 )
          goto LABEL_299;
        if ( v407 != 2 )
        {
          v222 = v392;
          v223 = v388;
          v224 = v384;
          do
          {
            while ( 1 )
            {
              v225 = *(int *)(v223 - 4);
              v226 = 4 * v225;
              v227 = 4 * v225 - 4;
              v228 = *(_DWORD *)(v346 + v227);
              if ( v228 < 0 )
                break;
              v223 += 4;
              if ( v343 == v223 )
                goto LABEL_206;
            }
            *(_DWORD *)(v346 + v227) = -v228;
            v229 = (int *)(v227 + v375);
            v230 = *(_DWORD *)(v227 + v375) + v358;
            if ( v230 > v221 )
              v230 = v380 - v391;
            v231 = v228 + v230;
            if ( v231 <= 0 )
              v231 = 1;
            *v229 = v231;
            v232 = &v357[v231 - 1];
            v233 = *v232;
            if ( *v232 )
              *(_DWORD *)(v347 + 4LL * v233 - 4) = v225;
            *(_DWORD *)(v356 + v226 - 4) = v233;
            *(_DWORD *)(v347 + v226 - 4) = 0;
            v234 = v224++;
            *(_DWORD *)(v354 + 4 * v234 - 4) = v225;
            *v232 = v225;
            if ( v222 > v231 )
              v222 = v231;
            v223 += 4;
          }
          while ( v343 != v223 );
LABEL_206:
          v344 = v224;
          v65 = v380;
          v63 = v191;
          v392 = v222;
          goto LABEL_207;
        }
LABEL_275:
        if ( v384 < v385 )
        {
          v350 = v63;
          v295 = 1.1;
          v296 = 0.0;
          v297 = v64 + 4 * ((unsigned int)(v385 - 1 - v384) + (__int64)v384) + 4;
          v298 = v346;
          v299 = v392;
          v300 = v384;
          v301 = v64 + 4LL * v384;
          do
          {
            while ( 1 )
            {
              v302 = *(int *)(v301 - 4);
              v303 = 4 * v302;
              v304 = 4 * v302 - 4;
              v305 = (_DWORD *)(v298 + v304);
              v306 = *(_DWORD *)(v298 + v304);
              if ( v306 < 0 )
                break;
              v301 += 4;
              if ( v297 == v301 )
                goto LABEL_292;
            }
            v307 = (int *)(v375 + v304);
            v308 = (double)(*(_DWORD *)(v375 + 4LL * *(int *)(v64 + 4LL * *(int *)(v351 + v303 - 4) - 4) - 4) - 1);
            *v305 = -v306;
            v309 = *v307 + v358;
            if ( v309 > v221 )
              v309 = v221;
            v310 = v306 + v309;
            if ( v310 <= 0 )
              v310 = 1;
            *v307 = v310;
            v311 = (double)v310 * (double)v310 - (double)v310 - (v308 * v308 - v308);
            if ( v295 > v311 )
            {
              v314 = v357;
              v313 = 1;
            }
            else
            {
              v312 = sqrt(v311);
              if ( v296 > v311 )
              {
                v386 = v221;
                v369 = v296;
                v381 = v299;
                v373 = v298;
                v366 = v295;
                v345 = v302;
                sqrt(v311);
                LODWORD(v302) = v345;
                v313 = (int)v312;
                v298 = v373;
                v295 = v366;
                v299 = v381;
                v296 = v369;
                v221 = v386;
              }
              else
              {
                v313 = (int)v312;
              }
              v314 = &v357[(int)v312 - 1];
            }
            *(_DWORD *)(v376 + v303 - 4) = v313;
            v315 = *v314;
            if ( *v314 )
              *(_DWORD *)(v347 + 4LL * v315 - 4) = v302;
            *(_DWORD *)(v356 + v303 - 4) = v315;
            *(_DWORD *)(v347 + v303 - 4) = 0;
            v316 = v300++;
            *(_DWORD *)(v64 + 4 * v316 - 4) = v302;
            *v314 = v302;
            if ( v299 > v313 )
              v299 = v313;
            v301 += 4;
          }
          while ( v297 != v301 );
LABEL_292:
          v344 = v300;
          v392 = v299;
          v63 = v350;
          goto LABEL_207;
        }
LABEL_323:
        *v402 = v358 + v401;
        *v377 = 0;
        if ( v389 )
          v341 = v384;
        else
          v341 = v396;
LABEL_325:
        *v370 = 0;
        *(_DWORD *)((char *)v63 + v405 - 4) = 0;
LABEL_210:
        if ( v400 < v391 )
        {
          v237 = v65;
          goto LABEL_212;
        }
      }
    }
  }
  if ( v400 <= 0 )
    goto LABEL_79;
  v237 = v400 - 1;
LABEL_212:
  v238 = 0;
  v239 = 4LL * v237 + 4;
LABEL_214:
  while ( 2 )
  {
    v240 = v355;
    v241 = &v355[(unsigned __int64)v238 / 4];
    if ( !v355[(unsigned __int64)v238 / 4] )
    {
      v242 = *(_DWORD *)(v351 + v238);
      v243 = 4LL * -v242 - 4;
      v244 = (int *)((char *)v355 + v243);
      v245 = *(int *)((char *)v355 + v243);
      if ( v245 < 0 )
      {
        v246 = *(_DWORD *)(v351 + v238);
      }
      else
      {
        do
        {
          v246 = *(_DWORD *)(v351 + v243);
          v243 = 4LL * -v246 - 4;
          v244 = (int *)((char *)v355 + v243);
          v245 = *(int *)((char *)v355 + v243);
        }
        while ( v245 >= 0 );
      }
      v247 = -v245;
      for ( i = v238; ; v242 = *(_DWORD *)(v351 + i) )
      {
        *(_DWORD *)(v351 + i) = v246;
        v249 = -v242;
        if ( *v241 )
        {
          i = 4LL * v249 - 4;
          v241 = (int *)((char *)v355 + i);
          if ( *(int *)((char *)v355 + i) < 0 )
          {
LABEL_222:
            v238 += 4;
            *v244 = -v247;
            if ( v238 == v239 )
              goto LABEL_223;
            goto LABEL_214;
          }
        }
        else
        {
          *v241 = v247;
          i = 4LL * v249 - 4;
          ++v247;
          v241 = (int *)((char *)v355 + i);
          if ( *(int *)((char *)v355 + i) < 0 )
            goto LABEL_222;
        }
      }
    }
    v238 += 4;
    if ( v238 != v239 )
      continue;
    break;
  }
LABEL_223:
  v250 = 0;
  do
  {
    v251 = *v240;
    v252 = *v240;
    ++v250;
    ++v240;
    v253 = ((v251 >> 31) ^ v252) - (v251 >> 31);
    *(v240 - 1) = v253;
    *(_DWORD *)(v347 + 4LL * v253 - 4) = v250;
  }
  while ( v250 != v400 );
LABEL_79:
  if ( *((int *)this + 11) > 0 )
  {
    v102 = *((int **)this + 9);
    v103 = 1;
    do
    {
      --v102[v103 - 1];
      v104 = v103++;
      v105 = *((_DWORD *)this + 11);
    }
    while ( v105 > v104 );
    if ( v105 > 0 )
    {
      v106 = 0;
      v107 = *((_QWORD *)this + 8);
      do
      {
        v108 = *v102++;
        *(_DWORD *)(v107 + 4 * v108) = v106++;
      }
      while ( *((_DWORD *)this + 11) > v106 );
    }
  }
  operator delete[]((void *)v375);
  v109 = this;
  v110 = *((void **)this + 13);
  if ( v110 )
  {
    operator delete[](v110);
    v109 = this;
  }
  v111 = *((void **)v109 + 12);
  *((_QWORD *)v109 + 13) = 0;
  if ( v111 )
  {
    operator delete[](v111);
    v109 = this;
  }
  *((_QWORD *)v109 + 12) = 0;
  return 0;
}

