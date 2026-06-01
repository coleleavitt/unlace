__int64 __fastcall sub_53F740(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int *a5, _DWORD *a6)
{
  __int64 (__fastcall *v6)(__int64); // rax
  char v7; // al
  __int64 (__fastcall *v8)(__int64); // rax
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rax
  _QWORD *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r13
  void *v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // r12
  unsigned int v21; // eax
  __int64 v22; // rbp
  void *v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // r12
  unsigned int v31; // r15d
  _QWORD *v32; // rbp
  void *v33; // r14
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 result; // rax
  unsigned int v38; // r12d
  size_t v39; // rdi
  unsigned int *v40; // rsi
  __int64 v41; // rax
  _DWORD *v42; // r9
  _DWORD *v43; // rdx
  _QWORD *v44; // rdi
  _QWORD *i; // rax
  int v46; // ecx
  char v47; // r8
  __int64 v48; // rcx
  char v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // r14
  void *v53; // r12
  _QWORD *v54; // rsi
  __int64 v55; // r12
  unsigned int v56; // edx
  unsigned int v57; // eax
  unsigned int v58; // r12d
  size_t v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rsi
  _DWORD *v63; // r15
  __int64 v64; // rdx
  _QWORD *v65; // rax
  _QWORD *v66; // rdi
  int v67; // ecx
  char v68; // r8
  __int64 v69; // rcx
  char v70; // r8
  __int64 v71; // rcx
  __int64 v72; // r14
  __int64 v73; // r13
  _QWORD *v74; // r14
  void *v75; // r12
  _QWORD *v76; // rsi
  __int64 v77; // r13
  _QWORD *v78; // rdx
  __int64 v79; // rax
  unsigned __int64 v80; // r12
  __int64 v81; // rax
  __int64 *v82; // r13
  unsigned int v83; // ebx
  __int64 v84; // rax
  _QWORD *v85; // r14
  __int64 v86; // r12
  _QWORD *v87; // r13
  int v88; // eax
  void *v89; // r15
  __int64 v90; // r15
  __int64 v91; // r12
  __int64 v92; // rax
  _QWORD *v93; // r12
  void *v94; // r13
  int v95; // eax
  _QWORD *v96; // rdx
  _BYTE *v97; // r12
  unsigned int v98; // eax
  __int64 v99; // rcx
  int v100; // eax
  _BYTE *v101; // rcx
  __int64 v102; // rax
  _QWORD *v103; // r13
  _QWORD *v104; // r12
  void *v105; // r14
  _QWORD *v106; // rsi
  __int64 v107; // rax
  _QWORD *v108; // rax
  _QWORD *v109; // rbp
  unsigned int v110; // ebx
  unsigned int k; // eax
  unsigned int v112; // r12d
  size_t v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v116; // r8
  _DWORD *v117; // r14
  __int64 v118; // rdx
  _QWORD *v119; // rax
  _QWORD *v120; // rsi
  int v121; // ecx
  char v122; // di
  __int64 v123; // rcx
  char v124; // di
  __int64 v125; // rcx
  __int64 v126; // r13
  __int64 v127; // r15
  _QWORD *v128; // r13
  void *v129; // r12
  _QWORD *v130; // rsi
  _QWORD *v131; // rax
  unsigned int v132; // r15d
  __int64 m; // r14
  int *v134; // r14
  void *v135; // rbx
  _QWORD *v136; // r13
  int v137; // eax
  int v138; // eax
  unsigned __int64 v139; // r12
  __int64 v140; // rax
  __int64 *v141; // r13
  unsigned int v142; // ebx
  __int64 v143; // rax
  _QWORD *v144; // r14
  __int64 v145; // r12
  _QWORD *v146; // r13
  int v147; // eax
  void *v148; // r15
  __int64 v149; // r13
  __int64 v150; // r12
  __int64 v151; // rax
  __int64 v152; // r12
  void *v153; // r14
  int v154; // eax
  _QWORD *v155; // rdx
  _BYTE *v156; // r12
  unsigned int v157; // eax
  __int64 v158; // rcx
  int v159; // eax
  _BYTE *v160; // rcx
  __int64 v161; // rax
  _QWORD *v162; // r13
  _QWORD *v163; // r12
  void *v164; // r14
  _QWORD *v165; // rsi
  _QWORD *v166; // rax
  _QWORD *v167; // rbp
  unsigned int v168; // ebx
  unsigned int n; // eax
  unsigned int v170; // r13d
  size_t v171; // rdi
  __int64 v172; // rax
  __int64 v173; // rsi
  _DWORD *v174; // r8
  _DWORD *v175; // r14
  __int64 v176; // rdx
  _QWORD *v177; // rax
  _QWORD *v178; // rsi
  int v179; // ecx
  char v180; // di
  __int64 v181; // rcx
  char v182; // di
  __int64 v183; // rcx
  __int64 v184; // r12
  _DWORD *v185; // r15
  _QWORD *v186; // r12
  void *v187; // r13
  _QWORD *v188; // rsi
  _QWORD *v189; // rax
  void *v190; // r13
  _QWORD *v191; // rax
  int v192; // edx
  __int64 v193; // rdx
  char v194; // di
  char v195; // cl
  char v196; // si
  char v197; // di
  __int64 v198; // rdx
  void *v199; // r13
  _QWORD *v200; // rax
  int v201; // edx
  __int64 v202; // rdx
  char v203; // di
  char v204; // cl
  char v205; // si
  char v206; // di
  __int64 v207; // rdx
  unsigned __int64 v208; // r12
  __int64 v209; // rax
  _QWORD *v210; // r14
  unsigned int v211; // r12d
  _QWORD *v212; // rax
  __m128i v213; // xmm5
  _QWORD *v214; // r12
  _QWORD *v215; // r13
  _QWORD *v216; // r14
  int v217; // eax
  void *v218; // r15
  void *v219; // rdi
  _QWORD *v220; // rsi
  __int64 v221; // rax
  _QWORD *v222; // rax
  void *v223; // r14
  __int64 v224; // rdx
  __int64 v225; // rdx
  _QWORD *v226; // rdx
  unsigned int v227; // eax
  __int64 v228; // rcx
  int v229; // eax
  _BYTE *v230; // rcx
  __int64 v231; // rax
  _QWORD *v232; // r13
  _QWORD *v233; // r12
  void *v234; // r14
  _QWORD *v235; // rsi
  __int64 v236; // rsi
  __int64 v237; // rdi
  bool v238; // zf
  __int64 v239; // rcx
  __int64 v240; // rdx
  __int64 v241; // rsi
  __int64 v242; // rdi
  unsigned int v243; // r13d
  unsigned int *v244; // rax
  __int64 v245; // rcx
  unsigned int v246; // edx
  unsigned int *v247; // r15
  unsigned __int64 v248; // r14
  __int64 v249; // rsi
  __int64 *v250; // rdx
  unsigned __int64 v251; // rax
  unsigned __int64 v252; // rdx
  __int64 v253; // rax
  __m128i v254; // xmm0
  unsigned __int64 v255; // rdx
  __int64 *v256; // rax
  __int64 v257; // rdi
  __int64 *v258; // r12
  __int64 *v259; // r14
  __int64 v260; // r15
  __int64 v261; // rcx
  __int64 v262; // r13
  void *v263; // rbp
  __int64 v264; // rsi
  unsigned int v265; // r13d
  unsigned int *v266; // rax
  __int64 v267; // rcx
  unsigned int v268; // r14d
  unsigned int v269; // edx
  unsigned int *v270; // rbx
  unsigned __int64 v271; // r15
  __int64 v272; // rsi
  __int64 *v273; // rdx
  unsigned __int64 v274; // rax
  unsigned __int64 v275; // rdx
  __int64 v276; // rax
  __m128i v277; // xmm0
  unsigned __int64 v278; // rax
  __int64 v279; // rdi
  __int64 *v280; // rbp
  __int64 *v281; // r15
  __int64 v282; // r12
  __int64 v283; // rcx
  __int64 v284; // r14
  void *v285; // rbx
  __int64 v286; // rsi
  unsigned int v287; // r14d
  unsigned int v288; // edx
  unsigned int *v289; // r8
  int *v290; // r15
  __int64 v291; // rax
  _DWORD *v292; // rdx
  int *v293; // rdi
  int *ii; // rax
  int v295; // ecx
  char v296; // r9
  __int64 v297; // rcx
  char v298; // r9
  __int64 v299; // rcx
  __int64 v300; // rax
  int *v301; // r12
  int *v302; // rbp
  _DWORD *v303; // r15
  void *v304; // r13
  int *v305; // rsi
  unsigned int v306; // r14d
  unsigned int v307; // edx
  unsigned int *v308; // rbx
  unsigned __int64 v309; // r15
  __int64 v310; // rsi
  __int64 *v311; // rdx
  unsigned __int64 v312; // rax
  unsigned __int64 v313; // rdx
  __int64 v314; // rax
  __m128i v315; // xmm0
  unsigned __int64 v316; // rdx
  __int64 *v317; // rax
  __int64 v318; // rdi
  __int64 *v319; // r12
  __int64 *v320; // r15
  __int64 v321; // r14
  __int64 v322; // rcx
  __int64 v323; // rbp
  void *v324; // rbx
  __int64 v325; // rsi
  unsigned int v326; // r13d
  unsigned int v327; // edx
  unsigned int *v328; // rsi
  _DWORD *v329; // r8
  int *v330; // r14
  __int64 v331; // rax
  _DWORD *v332; // rdx
  int *v333; // rdi
  int *j; // rax
  int v335; // ecx
  char v336; // r9
  __int64 v337; // rcx
  char v338; // r9
  __int64 v339; // rcx
  __int64 v340; // rax
  int *v341; // r12
  int *v342; // rbp
  unsigned int *v343; // r14
  void *v344; // r13
  int *v345; // rsi
  unsigned int v346; // r13d
  unsigned int *v347; // rax
  __int64 v348; // rcx
  __int64 v349; // rax
  __int64 v350; // r13
  _QWORD *v351; // r12
  _QWORD *v352; // r14
  void *v353; // r13
  _QWORD *v354; // rsi
  _QWORD *v355; // rax
  _QWORD *v356; // rax
  _QWORD *v357; // r12
  _QWORD *v358; // rax
  _QWORD *v359; // rax
  __int64 *v360; // rax
  _DWORD *v361; // rdi
  __int64 v362; // r8
  __int64 *v363; // rax
  _DWORD *v364; // rdi
  __int64 v365; // r8
  __int64 *v366; // rax
  _DWORD *v367; // rdi
  __int64 v368; // r8
  char **v369; // r12
  char **v370; // r12
  char **exception; // r12
  char **v372; // r12
  char **v373; // r12
  char **v374; // r12
  char **v375; // r12
  char **v376; // r13
  char **v377; // r12
  char **v378; // r12
  char **v379; // r12
  char **v380; // r12
  unsigned int *v381; // [rsp+0h] [rbp-108h]
  unsigned int v382; // [rsp+0h] [rbp-108h]
  _QWORD *v383; // [rsp+0h] [rbp-108h]
  unsigned int v384; // [rsp+0h] [rbp-108h]
  _QWORD *v385; // [rsp+0h] [rbp-108h]
  unsigned int v386; // [rsp+0h] [rbp-108h]
  unsigned int v387; // [rsp+Ch] [rbp-FCh]
  unsigned int v389; // [rsp+18h] [rbp-F0h]
  _DWORD *v390; // [rsp+18h] [rbp-F0h]
  unsigned int v391; // [rsp+18h] [rbp-F0h]
  unsigned int v392; // [rsp+18h] [rbp-F0h]
  unsigned int *v393; // [rsp+18h] [rbp-F0h]
  __int64 *v395; // [rsp+28h] [rbp-E0h]
  _QWORD *v396; // [rsp+28h] [rbp-E0h]
  unsigned int v397; // [rsp+28h] [rbp-E0h]
  unsigned int v398; // [rsp+28h] [rbp-E0h]
  _QWORD *v399; // [rsp+28h] [rbp-E0h]
  _QWORD *v400; // [rsp+28h] [rbp-E0h]
  unsigned int *v401; // [rsp+28h] [rbp-E0h]
  unsigned int *v402; // [rsp+28h] [rbp-E0h]
  _QWORD *v403; // [rsp+28h] [rbp-E0h]
  unsigned int *v404; // [rsp+28h] [rbp-E0h]
  _QWORD *v405; // [rsp+28h] [rbp-E0h]
  unsigned int v406; // [rsp+30h] [rbp-D8h]
  _DWORD *v407; // [rsp+30h] [rbp-D8h]
  unsigned int v409; // [rsp+40h] [rbp-C8h]
  unsigned int v410; // [rsp+40h] [rbp-C8h]
  unsigned int *v411; // [rsp+40h] [rbp-C8h]
  unsigned int v412; // [rsp+40h] [rbp-C8h]
  unsigned int v413; // [rsp+48h] [rbp-C0h]
  unsigned int v414; // [rsp+48h] [rbp-C0h]
  _QWORD *v415; // [rsp+48h] [rbp-C0h]
  _DWORD *v416; // [rsp+48h] [rbp-C0h]
  _DWORD *v417; // [rsp+48h] [rbp-C0h]
  _DWORD *v418; // [rsp+50h] [rbp-B8h]
  _DWORD *v419; // [rsp+50h] [rbp-B8h]
  unsigned int *v420; // [rsp+50h] [rbp-B8h]
  _QWORD *v421; // [rsp+58h] [rbp-B0h]
  _QWORD *v422; // [rsp+58h] [rbp-B0h]
  _QWORD *v423; // [rsp+58h] [rbp-B0h]
  _DWORD *v424; // [rsp+58h] [rbp-B0h]
  __int64 v425; // [rsp+60h] [rbp-A8h]
  _DWORD *v426; // [rsp+60h] [rbp-A8h]
  int v427; // [rsp+68h] [rbp-A0h]
  __int64 v431; // [rsp+90h] [rbp-78h] BYREF
  __int64 v432; // [rsp+98h] [rbp-70h]
  __int64 v433; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v434; // [rsp+A8h] [rbp-60h]
  __int64 v435; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v436; // [rsp+B8h] [rbp-50h]
  __int64 v437; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v438; // [rsp+C8h] [rbp-40h]

  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v6 == sub_539710 )
    v7 = *(_BYTE *)(a2 + 80);
  else
    v7 = v6(a2);
  if ( v7
    || ((v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL), v8 != sub_539710)
      ? (v9 = v8(a3))
      : (v9 = *(_BYTE *)(a3 + 80)),
        v9) )
  {
    result = a1;
    *(_BYTE *)(a1 + 80) = 1;
    return result;
  }
  if ( !*(_BYTE *)(a2 + 112) )
  {
    sub_538A20(*(_DWORD **)(a2 + 32), (unsigned __int64 *)(a2 + 88), (__int64 *)(a2 + 120));
    *(_BYTE *)(a2 + 112) = 1;
  }
  if ( !*(_BYTE *)(a3 + 112) )
  {
    sub_538A20(*(_DWORD **)(a3 + 32), (unsigned __int64 *)(a3 + 88), (__int64 *)(a3 + 120));
    *(_BYTE *)(a3 + 112) = 1;
  }
  v10 = *(_QWORD *)(a2 + 16);
  if ( v10 )
    v427 = *(_DWORD *)(v10 - 4);
  else
    v427 = 0;
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
    v387 = *(_DWORD *)(v11 - 4);
  else
    v387 = 0;
  v12 = *(_QWORD **)(a1 + 88);
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 )
    {
      v14 = &v12[v13];
      do
      {
        v15 = *v12;
        if ( *v12 )
        {
          v16 = *(unsigned int *)(v15 - 4);
          if ( (_DWORD)v16 )
          {
            v17 = v15 + 32 * v16;
            do
            {
              v18 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v15);
              v19 = v15 + 16;
              v15 += 32;
              sub_182CBA0(v18, v19);
            }
            while ( v15 != v17 );
            v15 = *v12;
          }
          sub_186B220((void *)(v15 - 8));
        }
        ++v12;
      }
      while ( v12 != v14 );
      v12 = *(_QWORD **)(a1 + 88);
    }
    *((_DWORD *)v12 - 1) = 0;
  }
  v20 = *(_QWORD *)(a1 + 96);
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 - 4);
    if ( v21 )
    {
      v22 = v20 + 32LL * v21;
      do
      {
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20);
        v24 = v20 + 16;
        v20 += 32;
        sub_182CBA0(v23, v24);
      }
      while ( v20 != v22 );
      v20 = *(_QWORD *)(a1 + 96);
    }
    *(_DWORD *)(v20 - 4) = 0;
  }
  v25 = *(_QWORD *)(a1 + 104);
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  v409 = 0;
  v26 = *(_QWORD *)(a2 + 88);
  v425 = 32LL * v387;
  if ( v26 )
  {
    while ( 1 )
    {
      if ( v409 >= *(_DWORD *)(v26 - 4) )
        goto LABEL_101;
      v27 = (__int64 *)(v26 + 8LL * v409);
      v28 = *v27;
      v395 = v27;
      if ( !*v27 || !*(_DWORD *)(v28 - 4) )
        break;
      v29 = (_QWORD *)sub_186B270(0x48u);
      v30 = v29 + 1;
      v31 = 0;
      v32 = v29 + 1;
      *v29 = 2;
      while ( 1 )
      {
        *v30 = 0;
        v33 = qword_1C7F2C0;
        v30[1] = 0;
        v30[2] = 1;
        v30[3] = 0;
        if ( (*(_BYTE *)(v28 + 4) & 1) != 0 )
          sub_182C690(v33, v30, v28);
        else
          *(_DWORD *)v30 = *(_DWORD *)v28;
        if ( (*(_BYTE *)(v28 + 20) & 1) != 0 )
        {
          sub_182C690(v33, v30 + 2, v28 + 16);
        }
        else
        {
          v34 = *(_DWORD *)(v28 + 16);
          *((_BYTE *)v30 + 20) &= ~1u;
          *((_DWORD *)v30 + 4) = v34;
        }
        ++*((_DWORD *)v32 - 1);
        ++v31;
        v35 = *v395;
        if ( !*v395 || v31 >= *(_DWORD *)(v35 - 4) )
          break;
        v28 = v35 + 32LL * v31;
        v36 = *((unsigned int *)v32 - 1);
        if ( (_DWORD)v36 == *((_DWORD *)v32 - 2) )
        {
          v38 = (unsigned int)(3 * v36 + 1) >> 1;
          v413 = v38;
          v39 = 32 * v38 + 8;
          if ( 32 * (int)v36 + 8 >= (unsigned int)v39 || (unsigned int)v36 >= v38 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (unsigned int *)sub_186B270(v39);
          v41 = *((unsigned int *)v32 - 1);
          v42 = v40 + 2;
          v40[1] = v41;
          v43 = v40 + 2;
          v44 = &v32[4 * v41];
          for ( i = v32; v44 != i; *((_QWORD *)v43 - 1) = v50 )
          {
            v46 = *(_DWORD *)i;
            v47 = *((_BYTE *)i + 4);
            i += 4;
            v43 += 8;
            *(v43 - 8) = v46;
            *((_BYTE *)v43 - 28) = v47 & 3 | *(_BYTE *)(v43 - 7) & 0xFC;
            v48 = *(i - 3);
            *(i - 3) = 0;
            *((_QWORD *)v43 - 3) = v48;
            v49 = *((_BYTE *)i - 12);
            *(v43 - 4) = *((_DWORD *)i - 4);
            *((_BYTE *)v43 - 12) = v49 & 3 | *(_BYTE *)(v43 - 3) & 0xFC;
            v50 = *(i - 1);
            *(i - 1) = 0;
          }
          v51 = *((unsigned int *)v32 - 1);
          if ( (_DWORD)v51 )
          {
            v381 = v40;
            v418 = v40 + 2;
            v52 = &v32[4 * v51];
            v421 = v32;
            do
            {
              v53 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v32);
              v54 = v32 + 2;
              v32 += 4;
              sub_182CBA0(v53, v54);
            }
            while ( v32 != v52 );
            v40 = v381;
            v42 = v418;
            v32 = v421;
          }
          v422 = v42;
          sub_186B220(v32 - 1);
          v55 = v40[1];
          v32 = v422;
          *v40 = v413;
          v30 = &v422[4 * v55];
        }
        else
        {
          v30 = &v32[4 * v36];
        }
      }
      v414 = *((_DWORD *)v32 - 1);
      if ( v414 < v387 )
      {
        v56 = *((_DWORD *)v32 - 2);
        v57 = v387;
        if ( v56 < v387 )
          goto LABEL_63;
        goto LABEL_72;
      }
      v350 = 32LL * v414;
      v351 = &v32[(unsigned __int64)v425 / 8];
      v352 = &v32[(unsigned __int64)v350 / 8];
      if ( v425 != v350 )
      {
        do
        {
          v353 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v351);
          v354 = v351 + 2;
          v351 += 4;
          sub_182CBA0(v353, v354);
        }
        while ( v352 != v351 );
      }
      *((_DWORD *)v32 - 1) = v387;
      v80 = *(_QWORD *)(a1 + 88);
      if ( !v80 )
      {
LABEL_318:
        v81 = sub_186B270(0x18u);
        *(_QWORD *)v81 = 2;
        v80 = v81 + 8;
        *(_QWORD *)(a1 + 88) = v81 + 8;
        v82 = (__int64 *)(v81 + 8);
        LODWORD(v81) = 0;
        goto LABEL_76;
      }
LABEL_75:
      LODWORD(v81) = *(_DWORD *)(v80 - 4);
      v82 = (__int64 *)(v80 + 8LL * (unsigned int)v81);
      if ( (_DWORD)v81 == *(_DWORD *)(v80 - 8) )
      {
        v268 = (unsigned int)(3 * v81 + 1) >> 1;
        v269 = 8 * v268 + 8;
        if ( 8 * (int)v81 + 8 >= v269 || (unsigned int)v81 >= v268 )
        {
          v379 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v435, "Overflow encountered when expanding vector");
          *v379 = (char *)off_1C63128;
          sub_2333C0(v379 + 1, &v435);
          sub_233E40((__int64)&v435);
          __cxa_throw(v379, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v270 = (unsigned int *)sub_186B270(v269);
        v80 = (unsigned __int64)(v270 + 2);
        v271 = *(_QWORD *)(a1 + 88);
        if ( v271 )
        {
          v272 = *(unsigned int *)(v271 - 4);
          v270[1] = v272;
          v273 = (__int64 *)(v271 + 8 * v272);
          if ( (__int64 *)v271 != v273 )
          {
            v274 = 8 * v272 - 8;
            if ( v274 <= 8 || v80 < v271 + 16 && v271 < (unsigned __int64)(v270 + 6) )
            {
              v363 = (__int64 *)v271;
              v364 = v270 + 2;
              do
              {
                v365 = *v363;
                *v363++ = 0;
                v364 += 2;
                *((_QWORD *)v364 - 1) = v365;
              }
              while ( v273 != v363 );
            }
            else
            {
              v275 = (v274 >> 3) + 1;
              v276 = 0;
              do
              {
                v277 = _mm_loadu_si128((const __m128i *)(v271 + v276 * 4));
                *(_OWORD *)(v271 + v276 * 4) = 0;
                *(__m128i *)&v270[v276 + 2] = v277;
                v276 += 4;
              }
              while ( v276 != 4 * (v275 >> 1) );
              if ( (v275 & 1) != 0 )
              {
                v278 = 8 * (v275 & 0xFFFFFFFFFFFFFFFELL);
                v279 = *(_QWORD *)(v271 + v278);
                *(_QWORD *)(v271 + v278) = 0;
                *(_QWORD *)&v270[v278 / 4 + 2] = v279;
              }
            }
          }
          if ( (_DWORD)v272 )
          {
            v384 = v268;
            v402 = v270;
            v419 = v270 + 2;
            v415 = v32;
            v280 = (__int64 *)v271;
            v281 = (__int64 *)(v271 + 8 * v272);
            do
            {
              v282 = *v280;
              if ( *v280 )
              {
                v283 = *(unsigned int *)(v282 - 4);
                if ( (_DWORD)v283 )
                {
                  v284 = v282 + 32 * v283;
                  do
                  {
                    v285 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v282);
                    v286 = v282 + 16;
                    v282 += 32;
                    sub_182CBA0(v285, v286);
                  }
                  while ( v282 != v284 );
                  v282 = *v280;
                }
                sub_186B220((void *)(v282 - 8));
              }
              ++v280;
            }
            while ( v280 != v281 );
            v268 = v384;
            v270 = v402;
            v32 = v415;
            v80 = (unsigned __int64)v419;
            v271 = *(_QWORD *)(a1 + 88);
          }
          sub_186B220((void *)(v271 - 8));
          v81 = v270[1];
          v82 = (__int64 *)(v80 + 8 * v81);
        }
        else
        {
          v270[1] = 0;
          v82 = (__int64 *)(v270 + 2);
          LODWORD(v81) = 0;
        }
        *v270 = v268;
        *(_QWORD *)(a1 + 88) = v80;
      }
LABEL_76:
      *v82 = 0;
      if ( v32 )
      {
        v83 = *((_DWORD *)v32 - 1);
        v397 = *((_DWORD *)v32 - 2);
        v84 = sub_186B270(32LL * v397 + 8) + 8;
        v85 = &v32[4 * *((unsigned int *)v32 - 1)];
        *(_QWORD *)(v84 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v397), _mm_cvtsi32_si128(v83)).m128i_u64[0];
        *v82 = v84;
        if ( v85 != v32 )
        {
          v86 = v84;
          v87 = v32;
          while ( 1 )
          {
            *(_BYTE *)(v86 + 4) &= 0xFCu;
            v89 = qword_1C7F2C0;
            *(_BYTE *)(v86 + 20) &= 0xFCu;
            *(_DWORD *)v86 = 0;
            *(_QWORD *)(v86 + 8) = 0;
            *(_DWORD *)(v86 + 16) = 1;
            *(_QWORD *)(v86 + 24) = 0;
            if ( (*((_BYTE *)v87 + 4) & 1) != 0 )
            {
              sub_182C690(v89, v86, v87);
              if ( (*((_BYTE *)v87 + 20) & 1) != 0 )
                goto LABEL_83;
LABEL_80:
              v88 = *((_DWORD *)v87 + 4);
              v87 += 4;
              *(_BYTE *)(v86 + 20) &= ~1u;
              v86 += 32;
              *(_DWORD *)(v86 - 16) = v88;
              if ( v85 == v87 )
                break;
            }
            else
            {
              *(_DWORD *)v86 = *(_DWORD *)v87;
              if ( (*((_BYTE *)v87 + 20) & 1) == 0 )
                goto LABEL_80;
LABEL_83:
              sub_182C690(v89, v86 + 16, v87 + 2);
              v87 += 4;
              v86 += 32;
              if ( v85 == v87 )
                break;
            }
          }
        }
        v80 = *(_QWORD *)(a1 + 88);
        LODWORD(v81) = *(_DWORD *)(v80 - 4);
      }
      *(_DWORD *)(v80 - 4) = v81 + 1;
      v90 = *(_QWORD *)(a2 + 96) + 32LL * v409;
      v91 = *(_QWORD *)(a1 + 96);
      if ( v91 )
      {
        v92 = *(unsigned int *)(v91 - 4);
        if ( (_DWORD)v92 == *(_DWORD *)(v91 - 8) )
        {
          v326 = (unsigned int)(3 * v92 + 1) >> 1;
          v327 = 32 * v326 + 8;
          if ( 32 * (int)v92 + 8 >= v327 || (unsigned int)v92 >= v326 )
          {
            v370 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v370 = (char *)off_1C63128;
            sub_2333C0(v370 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v370, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v328 = (unsigned int *)sub_186B270(v327);
          v329 = v328 + 2;
          v330 = *(int **)(a1 + 96);
          if ( v330 )
          {
            v331 = (unsigned int)*(v330 - 1);
            v332 = v328 + 2;
            v328[1] = v331;
            v333 = &v330[8 * v331];
            for ( j = v330; v333 != j; *((_QWORD *)v332 - 1) = v339 )
            {
              v335 = *j;
              v336 = *((_BYTE *)j + 4);
              j += 8;
              v332 += 8;
              *(v332 - 8) = v335;
              *((_BYTE *)v332 - 28) = v336 & 3 | *(_BYTE *)(v332 - 7) & 0xFC;
              v337 = *((_QWORD *)j - 3);
              *((_QWORD *)j - 3) = 0;
              *((_QWORD *)v332 - 3) = v337;
              v338 = *((_BYTE *)j - 12);
              *(v332 - 4) = *(j - 4);
              *((_BYTE *)v332 - 12) = v338 & 3 | *(_BYTE *)(v332 - 3) & 0xFC;
              v339 = *((_QWORD *)j - 1);
              *((_QWORD *)j - 1) = 0;
            }
            v340 = (unsigned int)*(v330 - 1);
            if ( (_DWORD)v340 )
            {
              v386 = v326;
              v416 = v328 + 2;
              v341 = &v330[8 * v340];
              v405 = v32;
              v342 = v330;
              v343 = v328;
              do
              {
                v344 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v342);
                v345 = v342 + 4;
                v342 += 8;
                sub_182CBA0(v344, v345);
              }
              while ( v342 != v341 );
              v328 = v343;
              v326 = v386;
              v32 = v405;
              v329 = v416;
              v330 = *(int **)(a1 + 96);
            }
            v417 = v329;
            sub_186B220(v330 - 2);
            v329 = v417;
            v93 = &v417[8 * v328[1]];
          }
          else
          {
            v328[1] = 0;
            v93 = v328 + 2;
          }
          *v328 = v326;
          *(_QWORD *)(a1 + 96) = v329;
        }
        else
        {
          v93 = (_QWORD *)(32 * v92 + v91);
        }
      }
      else
      {
        v357 = (_QWORD *)sub_186B270(0x48u);
        *v357 = 2;
        v93 = v357 + 1;
        *(_QWORD *)(a1 + 96) = v93;
      }
      *v93 = 0;
      v93[1] = 0;
      v93[2] = 1;
      v94 = qword_1C7F2C0;
      v93[3] = 0;
      if ( (*(_BYTE *)(v90 + 4) & 1) != 0 )
        sub_182C690(v94, v93, v90);
      else
        *(_DWORD *)v93 = *(_DWORD *)v90;
      if ( (*(_BYTE *)(v90 + 20) & 1) != 0 )
      {
        sub_182C690(v94, v93 + 2, v90 + 16);
      }
      else
      {
        v95 = *(_DWORD *)(v90 + 16);
        *((_BYTE *)v93 + 20) &= ~1u;
        *((_DWORD *)v93 + 4) = v95;
      }
      v96 = *(_QWORD **)(a1 + 104);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 96) - 4LL);
      v97 = (_BYTE *)(*(_QWORD *)(a2 + 104) + v409);
      if ( v96 )
      {
        v98 = *((_DWORD *)v96 - 1);
        if ( v98 == *((_DWORD *)v96 - 2) )
        {
          v346 = (3 * v98 + 1) >> 1;
          if ( v98 + 8 >= v346 + 8 || v98 >= v346 )
          {
            v369 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v369 = (char *)off_1C63128;
            sub_2333C0(v369 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v369, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v347 = (unsigned int *)sub_186B300(v96 - 1, v346 + 8);
          v348 = v347[1];
          v96 = v347 + 2;
          *v347 = v346;
          LODWORD(v347) = v348;
          *(_QWORD *)(a1 + 104) = v96;
          v101 = (char *)v96 + v348;
          v100 = (_DWORD)v347 + 1;
        }
        else
        {
          v99 = v98;
          v100 = v98 + 1;
          v101 = (char *)v96 + v99;
        }
      }
      else
      {
        v355 = (_QWORD *)sub_186B270(0xAu);
        *v355 = 2;
        v96 = v355 + 1;
        *(_QWORD *)(a1 + 104) = v355 + 1;
        v101 = v355 + 1;
        v100 = 1;
      }
      *v101 = *v97;
      *((_DWORD *)v96 - 1) = v100;
      if ( v32 )
      {
        v102 = *((unsigned int *)v32 - 1);
        if ( (_DWORD)v102 )
        {
          v103 = v32;
          v104 = &v32[4 * v102];
          do
          {
            v105 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v103);
            v106 = v103 + 2;
            v103 += 4;
            sub_182CBA0(v105, v106);
          }
          while ( v103 != v104 );
        }
        sub_186B220(v32 - 1);
      }
      ++v409;
      v26 = *(_QWORD *)(a2 + 88);
      if ( !v26 )
        goto LABEL_101;
    }
    if ( !v387 )
    {
      v32 = nullptr;
      goto LABEL_74;
    }
    v349 = sub_186B270(0x48u);
    v56 = 2;
    v32 = (_QWORD *)(v349 + 8);
    *(_QWORD *)v349 = 2;
    if ( v387 <= 2 )
    {
      *(_DWORD *)(v349 + 4) = v387;
      v78 = &v32[(unsigned __int64)v425 / 8];
      v79 = v349 + 8;
    }
    else
    {
      v414 = 0;
      do
      {
LABEL_63:
        v58 = (3 * v56 + 1) >> 1;
        v59 = 32 * v58 + 8;
        if ( 32 * v56 + 8 >= (unsigned int)v59 || v56 >= v58 )
        {
          v372 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v435, "Overflow encountered when expanding vector");
          *v372 = (char *)off_1C63128;
          sub_2333C0(v372 + 1, &v435);
          sub_233E40((__int64)&v435);
          __cxa_throw(v372, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v60 = sub_186B270(v59);
        v61 = *((unsigned int *)v32 - 1);
        v62 = v60 + 8;
        v63 = (_DWORD *)v60;
        v64 = v60 + 8;
        *(_DWORD *)(v60 + 4) = v61;
        v65 = v32;
        v66 = &v32[4 * v61];
        if ( v66 != v32 )
        {
          do
          {
            v67 = *(_DWORD *)v65;
            v68 = *((_BYTE *)v65 + 4);
            v65 += 4;
            v64 += 32;
            *(_DWORD *)(v64 - 32) = v67;
            *(_BYTE *)(v64 - 28) = v68 & 3 | *(_BYTE *)(v64 - 28) & 0xFC;
            v69 = *(v65 - 3);
            *(v65 - 3) = 0;
            *(_QWORD *)(v64 - 24) = v69;
            v70 = *((_BYTE *)v65 - 12);
            *(_DWORD *)(v64 - 16) = *((_DWORD *)v65 - 4);
            *(_BYTE *)(v64 - 12) = v70 & 3 | *(_BYTE *)(v64 - 12) & 0xFC;
            v71 = *(v65 - 1);
            *(v65 - 1) = 0;
            *(_QWORD *)(v64 - 8) = v71;
          }
          while ( v66 != v65 );
        }
        v72 = *((unsigned int *)v32 - 1);
        if ( (_DWORD)v72 )
        {
          v382 = v58;
          v73 = v62;
          v396 = v32;
          v74 = &v32[4 * v72];
          do
          {
            v75 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v32);
            v76 = v32 + 2;
            v32 += 4;
            sub_182CBA0(v75, v76);
          }
          while ( v32 != v74 );
          v58 = v382;
          v32 = v396;
          v62 = v73;
        }
        sub_186B220(v32 - 1);
        v57 = v387;
        *v63 = v58;
        v32 = (_QWORD *)v62;
        v56 = *(_DWORD *)(v62 - 8);
      }
      while ( v56 < v387 );
LABEL_72:
      *((_DWORD *)v32 - 1) = v57;
      v77 = 32LL * v414;
      v78 = &v32[(unsigned __int64)v425 / 8];
      v79 = (__int64)&v32[(unsigned __int64)v77 / 8];
      if ( v77 == v425 )
      {
LABEL_74:
        v80 = *(_QWORD *)(a1 + 88);
        if ( !v80 )
          goto LABEL_318;
        goto LABEL_75;
      }
    }
    do
    {
      *(_OWORD *)(v79 + 16) = 0;
      v79 += 32;
      *(_OWORD *)(v79 - 32) = 0;
      *(_DWORD *)(v79 - 16) = 1;
      *(_BYTE *)(v79 - 28) = 0;
      *(_BYTE *)(v79 - 12) = 0;
    }
    while ( v78 != (_QWORD *)v79 );
    goto LABEL_74;
  }
LABEL_101:
  v107 = *(_QWORD *)(a3 + 88);
  if ( v107 )
  {
    v406 = 0;
    do
    {
      if ( v406 >= *(_DWORD *)(v107 - 4) )
        break;
      if ( v387 )
      {
        v108 = (_QWORD *)sub_186B270(0x48u);
        v109 = v108 + 1;
        *v108 = 2;
        v110 = v387;
        for ( k = *(_DWORD *)v108; k < v387; k = *((_DWORD *)v399 - 2) )
        {
          v112 = (3 * k + 1) >> 1;
          v113 = 32 * v112 + 8;
          if ( 32 * k + 8 >= (unsigned int)v113 || k >= v112 )
          {
            v373 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v373 = (char *)off_1C63128;
            sub_2333C0(v373 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v373, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v114 = sub_186B270(v113);
          v115 = *((unsigned int *)v109 - 1);
          v116 = v114 + 8;
          v117 = (_DWORD *)v114;
          v118 = v114 + 8;
          *(_DWORD *)(v114 + 4) = v115;
          v119 = v109;
          v120 = &v109[4 * v115];
          if ( v120 != v109 )
          {
            do
            {
              v121 = *(_DWORD *)v119;
              v122 = *((_BYTE *)v119 + 4);
              v119 += 4;
              v118 += 32;
              *(_DWORD *)(v118 - 32) = v121;
              *(_BYTE *)(v118 - 28) = v122 & 3 | *(_BYTE *)(v118 - 28) & 0xFC;
              v123 = *(v119 - 3);
              *(v119 - 3) = 0;
              *(_QWORD *)(v118 - 24) = v123;
              v124 = *((_BYTE *)v119 - 12);
              *(_DWORD *)(v118 - 16) = *((_DWORD *)v119 - 4);
              *(_BYTE *)(v118 - 12) = v124 & 3 | *(_BYTE *)(v118 - 12) & 0xFC;
              v125 = *(v119 - 1);
              *(v119 - 1) = 0;
              *(_QWORD *)(v118 - 8) = v125;
            }
            while ( v120 != v119 );
          }
          v126 = *((unsigned int *)v109 - 1);
          if ( (_DWORD)v126 )
          {
            v383 = v109;
            v127 = v116;
            v398 = v112;
            v128 = &v109[4 * v126];
            do
            {
              v129 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v109);
              v130 = v109 + 2;
              v109 += 4;
              sub_182CBA0(v129, v130);
            }
            while ( v109 != v128 );
            v109 = v383;
            v112 = v398;
            v116 = v127;
          }
          v399 = (_QWORD *)v116;
          sub_186B220(v109 - 1);
          v110 = v387;
          *v117 = v112;
          v109 = v399;
        }
        *((_DWORD *)v109 - 1) = v110;
        v131 = v109;
        do
        {
          v131 += 4;
          *((_OWORD *)v131 - 1) = 0;
          *((_OWORD *)v131 - 2) = 0;
          *((_DWORD *)v131 - 4) = 1;
          *((_BYTE *)v131 - 28) = 0;
          *((_BYTE *)v131 - 12) = 0;
        }
        while ( &v109[4 * v387] != v131 );
        v107 = *(_QWORD *)(a3 + 88);
      }
      else
      {
        v109 = nullptr;
      }
      v132 = 0;
      for ( m = *(_QWORD *)(v107 + 8LL * v406); m; m = *(_QWORD *)(*(_QWORD *)(a3 + 88) + 8LL * v406) )
      {
        if ( v132 >= *(_DWORD *)(m - 4) )
          break;
        v134 = (int *)(32LL * v132 + m);
        v135 = qword_1C7F2C0;
        v136 = &v109[4 * v427 + 4 * v132];
        if ( (v134[1] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v109[4 * v427 + 4 * v132], v134);
        }
        else
        {
          v137 = *v134;
          *((_BYTE *)v136 + 4) &= ~1u;
          *(_DWORD *)v136 = v137;
        }
        if ( (v134[5] & 1) != 0 )
        {
          sub_182C690(v135, v136 + 2, v134 + 4);
        }
        else
        {
          v138 = v134[4];
          *((_BYTE *)v136 + 20) &= ~1u;
          *((_DWORD *)v136 + 4) = v138;
        }
        ++v132;
      }
      v139 = *(_QWORD *)(a1 + 88);
      if ( v139 )
      {
        LODWORD(v140) = *(_DWORD *)(v139 - 4);
        v141 = (__int64 *)(v139 + 8LL * (unsigned int)v140);
        if ( (_DWORD)v140 == *(_DWORD *)(v139 - 8) )
        {
          v306 = (unsigned int)(3 * v140 + 1) >> 1;
          v307 = 8 * v306 + 8;
          if ( 8 * (int)v140 + 8 >= v307 || (unsigned int)v140 >= v306 )
          {
            v378 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v378 = (char *)off_1C63128;
            sub_2333C0(v378 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v378, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v308 = (unsigned int *)sub_186B270(v307);
          v139 = (unsigned __int64)(v308 + 2);
          v309 = *(_QWORD *)(a1 + 88);
          if ( v309 )
          {
            v310 = *(unsigned int *)(v309 - 4);
            v308[1] = v310;
            v311 = (__int64 *)(v309 + 8 * v310);
            if ( (__int64 *)v309 != v311 )
            {
              v312 = 8 * v310 - 8;
              if ( v312 <= 8 || v139 < v309 + 16 && v309 < (unsigned __int64)(v308 + 6) )
              {
                v366 = (__int64 *)v309;
                v367 = v308 + 2;
                do
                {
                  v368 = *v366;
                  *v366++ = 0;
                  v367 += 2;
                  *((_QWORD *)v367 - 1) = v368;
                }
                while ( v311 != v366 );
              }
              else
              {
                v313 = (v312 >> 3) + 1;
                v314 = 0;
                do
                {
                  v315 = _mm_loadu_si128((const __m128i *)(v309 + v314 * 4));
                  *(_OWORD *)(v309 + v314 * 4) = 0;
                  *(__m128i *)&v308[v314 + 2] = v315;
                  v314 += 4;
                }
                while ( v314 != 4 * (v313 >> 1) );
                if ( (v313 & 1) != 0 )
                {
                  v316 = v313 & 0xFFFFFFFFFFFFFFFELL;
                  v317 = (__int64 *)(v309 + 8 * v316);
                  v318 = *v317;
                  *v317 = 0;
                  *(_QWORD *)(v139 + 8 * v316) = v318;
                }
              }
            }
            if ( (_DWORD)v310 )
            {
              v385 = v109;
              v412 = v306;
              v420 = v308;
              v424 = v308 + 2;
              v319 = (__int64 *)v309;
              v320 = (__int64 *)(v309 + 8 * v310);
              do
              {
                v321 = *v319;
                if ( *v319 )
                {
                  v322 = *(unsigned int *)(v321 - 4);
                  if ( (_DWORD)v322 )
                  {
                    v323 = v321 + 32 * v322;
                    do
                    {
                      v324 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v321);
                      v325 = v321 + 16;
                      v321 += 32;
                      sub_182CBA0(v324, v325);
                    }
                    while ( v321 != v323 );
                    v321 = *v319;
                  }
                  sub_186B220((void *)(v321 - 8));
                }
                ++v319;
              }
              while ( v319 != v320 );
              v109 = v385;
              v306 = v412;
              v308 = v420;
              v139 = (unsigned __int64)v424;
              v309 = *(_QWORD *)(a1 + 88);
            }
            sub_186B220((void *)(v309 - 8));
            v140 = v308[1];
            v141 = (__int64 *)(v139 + 8 * v140);
          }
          else
          {
            v308[1] = 0;
            v141 = (__int64 *)(v308 + 2);
            LODWORD(v140) = 0;
          }
          *v308 = v306;
          *(_QWORD *)(a1 + 88) = v139;
        }
      }
      else
      {
        v140 = sub_186B270(0x18u);
        *(_QWORD *)v140 = 2;
        v139 = v140 + 8;
        *(_QWORD *)(a1 + 88) = v140 + 8;
        v141 = (__int64 *)(v140 + 8);
        LODWORD(v140) = 0;
      }
      *v141 = 0;
      if ( v109 )
      {
        v142 = *((_DWORD *)v109 - 1);
        v410 = *((_DWORD *)v109 - 2);
        v143 = sub_186B270(32LL * v410 + 8) + 8;
        v144 = &v109[4 * *((unsigned int *)v109 - 1)];
        *(_QWORD *)(v143 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v410), _mm_cvtsi32_si128(v142)).m128i_u64[0];
        *v141 = v143;
        if ( v144 != v109 )
        {
          v145 = v143;
          v146 = v109;
          while ( 1 )
          {
            *(_BYTE *)(v145 + 4) &= 0xFCu;
            v148 = qword_1C7F2C0;
            *(_BYTE *)(v145 + 20) &= 0xFCu;
            *(_DWORD *)v145 = 0;
            *(_QWORD *)(v145 + 8) = 0;
            *(_DWORD *)(v145 + 16) = 1;
            *(_QWORD *)(v145 + 24) = 0;
            if ( (*((_BYTE *)v146 + 4) & 1) != 0 )
            {
              sub_182C690(v148, v145, v146);
              if ( (*((_BYTE *)v146 + 20) & 1) != 0 )
                goto LABEL_134;
LABEL_131:
              v147 = *((_DWORD *)v146 + 4);
              v146 += 4;
              *(_BYTE *)(v145 + 20) &= ~1u;
              v145 += 32;
              *(_DWORD *)(v145 - 16) = v147;
              if ( v144 == v146 )
                break;
            }
            else
            {
              *(_DWORD *)v145 = *(_DWORD *)v146;
              if ( (*((_BYTE *)v146 + 20) & 1) == 0 )
                goto LABEL_131;
LABEL_134:
              sub_182C690(v148, v145 + 16, v146 + 2);
              v146 += 4;
              v145 += 32;
              if ( v144 == v146 )
                break;
            }
          }
        }
        v139 = *(_QWORD *)(a1 + 88);
        LODWORD(v140) = *(_DWORD *)(v139 - 4);
      }
      *(_DWORD *)(v139 - 4) = v140 + 1;
      v149 = *(_QWORD *)(a3 + 96) + 32LL * v406;
      v150 = *(_QWORD *)(a1 + 96);
      if ( !v150 || (v151 = *(unsigned int *)(v150 - 4), (_DWORD)v151 == *(_DWORD *)(v150 - 8)) )
      {
        sub_53D790((__int64 *)(a1 + 96));
        v150 = *(_QWORD *)(a1 + 96);
        v151 = *(unsigned int *)(v150 - 4);
      }
      v152 = 32 * v151 + v150;
      *(_QWORD *)v152 = 0;
      v153 = qword_1C7F2C0;
      *(_QWORD *)(v152 + 8) = 0;
      *(_QWORD *)(v152 + 16) = 1;
      *(_QWORD *)(v152 + 24) = 0;
      if ( (*(_BYTE *)(v149 + 4) & 1) != 0 )
        sub_182C690(v153, v152, v149);
      else
        *(_DWORD *)v152 = *(_DWORD *)v149;
      if ( (*(_BYTE *)(v149 + 20) & 1) != 0 )
      {
        sub_182C690(v153, v152 + 16, v149 + 16);
      }
      else
      {
        v154 = *(_DWORD *)(v149 + 16);
        *(_BYTE *)(v152 + 20) &= ~1u;
        *(_DWORD *)(v152 + 16) = v154;
      }
      v155 = *(_QWORD **)(a1 + 104);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 96) - 4LL);
      v156 = (_BYTE *)(*(_QWORD *)(a3 + 104) + v406);
      if ( v155 )
      {
        v157 = *((_DWORD *)v155 - 1);
        if ( v157 == *((_DWORD *)v155 - 2) )
        {
          v265 = (3 * v157 + 1) >> 1;
          if ( v157 + 8 >= v265 + 8 || v157 >= v265 )
          {
            v375 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v375 = (char *)off_1C63128;
            sub_2333C0(v375 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v375, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v266 = (unsigned int *)sub_186B300(v155 - 1, v265 + 8);
          v267 = v266[1];
          v155 = v266 + 2;
          *v266 = v265;
          LODWORD(v266) = v267;
          *(_QWORD *)(a1 + 104) = v155;
          v160 = (char *)v155 + v267;
          v159 = (_DWORD)v266 + 1;
        }
        else
        {
          v158 = v157;
          v159 = v157 + 1;
          v160 = (char *)v155 + v158;
        }
      }
      else
      {
        v356 = (_QWORD *)sub_186B270(0xAu);
        *v356 = 2;
        v155 = v356 + 1;
        *(_QWORD *)(a1 + 104) = v356 + 1;
        v160 = v356 + 1;
        v159 = 1;
      }
      *v160 = *v156;
      *((_DWORD *)v155 - 1) = v159;
      if ( v109 )
      {
        v161 = *((unsigned int *)v109 - 1);
        if ( (_DWORD)v161 )
        {
          v162 = v109;
          v163 = &v109[4 * v161];
          do
          {
            v164 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v162);
            v165 = v162 + 2;
            v162 += 4;
            sub_182CBA0(v164, v165);
          }
          while ( v162 != v163 );
        }
        sub_186B220(v109 - 1);
      }
      ++v406;
      v107 = *(_QWORD *)(a3 + 88);
    }
    while ( v107 );
  }
  if ( a4 )
  {
    v407 = a6;
    v411 = a5;
    while ( 1 )
    {
      if ( v387 )
      {
        v166 = (_QWORD *)sub_186B270(0x48u);
        v167 = v166 + 1;
        *v166 = 2;
        v168 = v387;
        for ( n = *(_DWORD *)v166; n < v387; n = *(v390 - 2) )
        {
          v170 = (3 * n + 1) >> 1;
          v171 = 32 * v170 + 8;
          if ( 32 * n + 8 >= (unsigned int)v171 || n >= v170 )
          {
            v374 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v374 = (char *)off_1C63128;
            sub_2333C0(v374 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v374, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v172 = sub_186B270(v171);
          v173 = *((unsigned int *)v167 - 1);
          v174 = (_DWORD *)(v172 + 8);
          v175 = (_DWORD *)v172;
          v176 = v172 + 8;
          *(_DWORD *)(v172 + 4) = v173;
          v177 = v167;
          v178 = &v167[4 * v173];
          if ( v178 != v167 )
          {
            do
            {
              v179 = *(_DWORD *)v177;
              v180 = *((_BYTE *)v177 + 4);
              v177 += 4;
              v176 += 32;
              *(_DWORD *)(v176 - 32) = v179;
              *(_BYTE *)(v176 - 28) = v180 & 3 | *(_BYTE *)(v176 - 28) & 0xFC;
              v181 = *(v177 - 3);
              *(v177 - 3) = 0;
              *(_QWORD *)(v176 - 24) = v181;
              v182 = *((_BYTE *)v177 - 12);
              *(_DWORD *)(v176 - 16) = *((_DWORD *)v177 - 4);
              *(_BYTE *)(v176 - 12) = v182 & 3 | *(_BYTE *)(v176 - 12) & 0xFC;
              v183 = *(v177 - 1);
              *(v177 - 1) = 0;
              *(_QWORD *)(v176 - 8) = v183;
            }
            while ( v178 != v177 );
          }
          v184 = *((unsigned int *)v167 - 1);
          if ( (_DWORD)v184 )
          {
            v389 = v170;
            v185 = v174;
            v400 = v167;
            v186 = &v167[4 * v184];
            do
            {
              v187 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v167);
              v188 = v167 + 2;
              v167 += 4;
              sub_182CBA0(v187, v188);
            }
            while ( v167 != v186 );
            v170 = v389;
            v167 = v400;
            v174 = v185;
          }
          v390 = v174;
          sub_186B220(v167 - 1);
          v168 = v387;
          *v175 = v170;
          v167 = v390;
        }
        *((_DWORD *)v167 - 1) = v168;
        v189 = v167;
        do
        {
          *((_OWORD *)v189 + 1) = 0;
          v189 += 4;
          *((_OWORD *)v189 - 2) = 0;
          *((_DWORD *)v189 - 4) = 1;
          *((_BYTE *)v189 - 28) = 0;
          *((_BYTE *)v189 - 12) = 0;
        }
        while ( &v167[4 * v387] != v189 );
      }
      else
      {
        v167 = nullptr;
      }
      v435 = 1;
      v436 = 0;
      v437 = 1;
      v438 = 0;
      sub_182CBA0(qword_1C7F2C0, &v437);
      v190 = qword_1C7F2C0;
      v191 = &v167[4 * *v411];
      v192 = *(_DWORD *)v191;
      *(_DWORD *)v191 = v435;
      LODWORD(v435) = v192;
      v193 = v191[1];
      v191[1] = v436;
      v436 = v193;
      v194 = *((_BYTE *)v191 + 4);
      LOBYTE(v193) = v194 & 2;
      v194 &= ~2u;
      v195 = BYTE4(v435) & 1;
      LOBYTE(v193) = v194 & 1 | BYTE4(v435) & 0xFC | v193 & 0xFE;
      v196 = v194 & 0xFE | BYTE4(v435) & 2;
      v197 = *((_BYTE *)v191 + 20);
      BYTE4(v435) = v193;
      LODWORD(v193) = *((_DWORD *)v191 + 4);
      *((_BYTE *)v191 + 4) = v196 | v195;
      LODWORD(v437) = v193;
      v198 = v191[3];
      v191[3] = v438;
      v438 = v198;
      LOBYTE(v198) = BYTE4(v437);
      *((_DWORD *)v191 + 4) = 1;
      *((_BYTE *)v191 + 20) = v197 & 0xFC | v198 & 2;
      BYTE4(v437) = v197 & 1 | v197 & 2 | v198 & 0xFC;
      sub_182CBA0(v190, &v435);
      sub_182CBA0(v190, &v437);
      v435 = 0xFFFFFFFFLL;
      v436 = 0;
      v437 = 1;
      v438 = 0;
      sub_182CBA0(qword_1C7F2C0, &v437);
      v199 = qword_1C7F2C0;
      v200 = &v167[4 * (unsigned int)(*v407 + v427)];
      v201 = *(_DWORD *)v200;
      *(_DWORD *)v200 = v435;
      LODWORD(v435) = v201;
      v202 = v200[1];
      v200[1] = v436;
      v436 = v202;
      v203 = *((_BYTE *)v200 + 4);
      LOBYTE(v202) = v203 & 2;
      v203 &= ~2u;
      v204 = BYTE4(v435) & 1;
      LOBYTE(v202) = v203 & 1 | BYTE4(v435) & 0xFC | v202 & 0xFE;
      v205 = v203 & 0xFE | BYTE4(v435) & 2;
      v206 = *((_BYTE *)v200 + 20);
      BYTE4(v435) = v202;
      LODWORD(v202) = *((_DWORD *)v200 + 4);
      *((_BYTE *)v200 + 4) = v205 | v204;
      LODWORD(v437) = v202;
      v207 = v200[3];
      v200[3] = v438;
      v438 = v207;
      LOBYTE(v207) = BYTE4(v437);
      *((_DWORD *)v200 + 4) = 1;
      *((_BYTE *)v200 + 20) = v206 & 0xFC | v207 & 2;
      BYTE4(v437) = v206 & 1 | v206 & 2 | v207 & 0xFC;
      sub_182CBA0(v199, &v435);
      sub_182CBA0(v199, &v437);
      v208 = *(_QWORD *)(a1 + 88);
      if ( v208 )
      {
        LODWORD(v209) = *(_DWORD *)(v208 - 4);
        v210 = (_QWORD *)(v208 + 8LL * (unsigned int)v209);
        if ( (_DWORD)v209 == *(_DWORD *)(v208 - 8) )
        {
          v392 = (unsigned int)(3 * v209 + 1) >> 1;
          v246 = 8 * v392 + 8;
          if ( 8 * (int)v209 + 8 >= v246 || (unsigned int)v209 >= (unsigned int)(3 * v209 + 1) >> 1 )
          {
            v380 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v380 = (char *)off_1C63128;
            sub_2333C0(v380 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v380, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v247 = (unsigned int *)sub_186B270(v246);
          v208 = (unsigned __int64)(v247 + 2);
          v248 = *(_QWORD *)(a1 + 88);
          if ( v248 )
          {
            v249 = *(unsigned int *)(v248 - 4);
            v247[1] = v249;
            v250 = (__int64 *)(v248 + 8 * v249);
            if ( (__int64 *)v248 != v250 )
            {
              v251 = 8 * v249 - 8;
              if ( v251 <= 8 || v248 < (unsigned __int64)(v247 + 6) && v208 < v248 + 16 )
              {
                v360 = (__int64 *)v248;
                v361 = v247 + 2;
                do
                {
                  v362 = *v360;
                  *v360++ = 0;
                  v361 += 2;
                  *((_QWORD *)v361 - 1) = v362;
                }
                while ( v250 != v360 );
              }
              else
              {
                v252 = (v251 >> 3) + 1;
                v253 = 0;
                do
                {
                  v254 = _mm_loadu_si128((const __m128i *)(v248 + v253 * 4));
                  *(_OWORD *)(v248 + v253 * 4) = 0;
                  *(__m128i *)&v247[v253 + 2] = v254;
                  v253 += 4;
                }
                while ( 4 * (v252 >> 1) != v253 );
                if ( (v252 & 1) != 0 )
                {
                  v255 = v252 & 0xFFFFFFFFFFFFFFFELL;
                  v256 = (__int64 *)(v248 + 8 * v255);
                  v257 = *v256;
                  *v256 = 0;
                  *(_QWORD *)(v208 + 8 * v255) = v257;
                }
              }
            }
            if ( (_DWORD)v249 )
            {
              v401 = v247;
              v423 = v167;
              v426 = v247 + 2;
              v258 = (__int64 *)v248;
              v259 = (__int64 *)(v248 + 8 * v249);
              do
              {
                v260 = *v258;
                if ( *v258 )
                {
                  v261 = *(unsigned int *)(v260 - 4);
                  if ( (_DWORD)v261 )
                  {
                    v262 = v260 + 32 * v261;
                    do
                    {
                      v263 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v260);
                      v264 = v260 + 16;
                      v260 += 32;
                      sub_182CBA0(v263, v264);
                    }
                    while ( v260 != v262 );
                    v260 = *v258;
                  }
                  sub_186B220((void *)(v260 - 8));
                }
                ++v258;
              }
              while ( v259 != v258 );
              v247 = v401;
              v167 = v423;
              v208 = (unsigned __int64)v426;
              v248 = *(_QWORD *)(a1 + 88);
            }
            sub_186B220((void *)(v248 - 8));
            v209 = v247[1];
            v210 = (_QWORD *)(v208 + 8 * v209);
          }
          else
          {
            v247[1] = 0;
            v210 = v247 + 2;
            LODWORD(v209) = 0;
          }
          *(_QWORD *)(a1 + 88) = v208;
          *v247 = v392;
        }
      }
      else
      {
        v209 = sub_186B270(0x18u);
        *(_QWORD *)v209 = 2;
        v208 = v209 + 8;
        *(_QWORD *)(a1 + 88) = v209 + 8;
        v210 = (_QWORD *)(v209 + 8);
        LODWORD(v209) = 0;
      }
      *v210 = 0;
      if ( !v167 )
        goto LABEL_177;
      v211 = *((_DWORD *)v167 - 1);
      v391 = *((_DWORD *)v167 - 2);
      v212 = (_QWORD *)sub_186B270(32LL * v391 + 8);
      v213 = _mm_cvtsi32_si128(v211);
      v214 = v212 + 1;
      v215 = v167;
      *v212 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v391), v213).m128i_u64[0];
      *v210 = v212 + 1;
      v216 = &v167[4 * *((unsigned int *)v167 - 1)];
      if ( v216 != v167 )
        break;
LABEL_176:
      v208 = *(_QWORD *)(a1 + 88);
      LODWORD(v209) = *(_DWORD *)(v208 - 4);
LABEL_177:
      v219 = qword_1C7F2C0;
      *(_DWORD *)(v208 - 4) = v209 + 1;
      v431 = 0;
      v432 = 0;
      v433 = 1;
      v434 = 0;
      sub_182CBA0(v219, &v433);
      BYTE4(v433) &= ~1u;
      LODWORD(v433) = 1;
      v220 = *(_QWORD **)(a1 + 96);
      if ( v220 )
      {
        v221 = *((unsigned int *)v220 - 1);
        if ( (_DWORD)v221 == *((_DWORD *)v220 - 2) )
        {
          v287 = (unsigned int)(3 * v221 + 1) >> 1;
          v288 = 32 * v287 + 8;
          if ( 32 * (int)v221 + 8 >= v288 || (unsigned int)v221 >= v287 )
          {
            v377 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v377 = (char *)off_1C63128;
            sub_2333C0(v377 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v377, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v289 = (unsigned int *)sub_186B270(v288);
          v220 = v289 + 2;
          v290 = *(int **)(a1 + 96);
          if ( v290 )
          {
            v291 = (unsigned int)*(v290 - 1);
            v292 = v289 + 2;
            v289[1] = v291;
            v293 = &v290[8 * v291];
            for ( ii = v290; v293 != ii; *((_QWORD *)v292 - 1) = v299 )
            {
              v295 = *ii;
              v296 = *((_BYTE *)ii + 4);
              ii += 8;
              v292 += 8;
              *(v292 - 8) = v295;
              *((_BYTE *)v292 - 28) = v296 & 3 | *(_BYTE *)(v292 - 7) & 0xFC;
              v297 = *((_QWORD *)ii - 3);
              *((_QWORD *)ii - 3) = 0;
              *((_QWORD *)v292 - 3) = v297;
              v298 = *((_BYTE *)ii - 12);
              *(v292 - 4) = *(ii - 4);
              *((_BYTE *)v292 - 12) = v298 & 3 | *(_BYTE *)(v292 - 3) & 0xFC;
              v299 = *((_QWORD *)ii - 1);
              *((_QWORD *)ii - 1) = 0;
            }
            v300 = (unsigned int)*(v290 - 1);
            v301 = &v290[8 * v300];
            if ( (_DWORD)v300 )
            {
              v393 = v289;
              v403 = v167;
              v302 = v290;
              v303 = v289 + 2;
              do
              {
                v304 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v302);
                v305 = v302 + 4;
                v302 += 8;
                sub_182CBA0(v304, v305);
              }
              while ( v302 != v301 );
              v220 = v303;
              v289 = v393;
              v167 = v403;
              v290 = *(int **)(a1 + 96);
            }
            v404 = v289;
            sub_186B220(v290 - 2);
            v289 = v404;
            v222 = &v220[4 * v404[1]];
          }
          else
          {
            v289[1] = 0;
            v222 = v289 + 2;
          }
          *v289 = v287;
          *(_QWORD *)(a1 + 96) = v220;
        }
        else
        {
          v222 = &v220[4 * v221];
        }
      }
      else
      {
        v358 = (_QWORD *)sub_186B270(0x48u);
        *v358 = 2;
        v220 = v358 + 1;
        *(_QWORD *)(a1 + 96) = v358 + 1;
        v222 = v358 + 1;
      }
      v223 = qword_1C7F2C0;
      *(_DWORD *)v222 = v431;
      *((_BYTE *)v222 + 4) = BYTE4(v431) & 3 | *((_BYTE *)v222 + 4) & 0xFC;
      v224 = v432;
      v432 = 0;
      v222[1] = v224;
      *((_DWORD *)v222 + 4) = v433;
      *((_BYTE *)v222 + 20) = BYTE4(v433) & 3 | *((_BYTE *)v222 + 20) & 0xFC;
      v225 = v434;
      v434 = 0;
      v222[3] = v225;
      ++*((_DWORD *)v220 - 1);
      sub_182CBA0(v223, &v431);
      sub_182CBA0(v223, &v433);
      v226 = *(_QWORD **)(a1 + 104);
      if ( v226 )
      {
        v227 = *((_DWORD *)v226 - 1);
        if ( v227 == *((_DWORD *)v226 - 2) )
        {
          v243 = (3 * v227 + 1) >> 1;
          if ( v227 + 8 >= v243 + 8 || v227 >= v243 )
          {
            v376 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v435, "Overflow encountered when expanding vector");
            *v376 = (char *)off_1C63128;
            sub_2333C0(v376 + 1, &v435);
            sub_233E40((__int64)&v435);
            __cxa_throw(v376, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v244 = (unsigned int *)sub_186B300(v226 - 1, v243 + 8);
          v245 = v244[1];
          v226 = v244 + 2;
          *v244 = v243;
          LODWORD(v244) = v245;
          *(_QWORD *)(a1 + 104) = v226;
          v230 = (char *)v226 + v245;
          v229 = (_DWORD)v244 + 1;
        }
        else
        {
          v228 = v227;
          v229 = v227 + 1;
          v230 = (char *)v226 + v228;
        }
      }
      else
      {
        v359 = (_QWORD *)sub_186B270(0xAu);
        *v359 = 2;
        v226 = v359 + 1;
        *(_QWORD *)(a1 + 104) = v359 + 1;
        v230 = v359 + 1;
        v229 = 1;
      }
      *v230 = 1;
      *((_DWORD *)v226 - 1) = v229;
      if ( v167 )
      {
        v231 = *((unsigned int *)v167 - 1);
        if ( (_DWORD)v231 )
        {
          v232 = v167;
          v233 = &v167[4 * v231];
          do
          {
            v234 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v232);
            v235 = v232 + 2;
            v232 += 4;
            sub_182CBA0(v234, v235);
          }
          while ( v233 != v232 );
        }
        sub_186B220(v167 - 1);
      }
      ++v407;
      ++v411;
      if ( &a6[a4] == v407 )
        goto LABEL_189;
    }
    while ( 1 )
    {
      *((_BYTE *)v214 + 4) &= 0xFCu;
      v218 = qword_1C7F2C0;
      *((_BYTE *)v214 + 20) &= 0xFCu;
      *(_DWORD *)v214 = 0;
      v214[1] = 0;
      *((_DWORD *)v214 + 4) = 1;
      v214[3] = 0;
      if ( (*((_BYTE *)v215 + 4) & 1) != 0 )
      {
        sub_182C690(v218, v214, v215);
        if ( (*((_BYTE *)v215 + 20) & 1) != 0 )
          goto LABEL_175;
LABEL_172:
        v217 = *((_DWORD *)v215 + 4);
        v215 += 4;
        *((_BYTE *)v214 + 20) &= ~1u;
        v214 += 4;
        *((_DWORD *)v214 - 4) = v217;
        if ( v216 == v215 )
          goto LABEL_176;
      }
      else
      {
        *(_DWORD *)v214 = *(_DWORD *)v215;
        if ( (*((_BYTE *)v215 + 20) & 1) == 0 )
          goto LABEL_172;
LABEL_175:
        sub_182C690(v218, v214 + 2, v215 + 2);
        v215 += 4;
        v214 += 4;
        if ( v216 == v215 )
          goto LABEL_176;
      }
    }
  }
LABEL_189:
  *(_BYTE *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  result = *(_QWORD *)(a2 + 64);
  if ( !result || (v236 = *(_QWORD *)(a1 + 64), result == v236) )
  {
    result = a3;
    v239 = *(_QWORD *)(a3 + 64);
    goto LABEL_198;
  }
  if ( !v236 || (v237 = *(_QWORD *)(a1 + 72), v238 = *(_DWORD *)(v236 + 8) == 1, --*(_DWORD *)(v236 + 8), !v238) )
  {
    *(_QWORD *)(a1 + 64) = result;
    v239 = *(_QWORD *)(a3 + 64);
LABEL_194:
    ++*(_DWORD *)(result + 8);
LABEL_198:
    v240 = v239;
    if ( v239 )
    {
      result = a1;
      v241 = *(_QWORD *)(a1 + 64);
      if ( v239 != v241 )
      {
        if ( !v241 )
          goto LABEL_202;
        v242 = *(_QWORD *)(a1 + 72);
        v238 = (*(_DWORD *)(v241 + 8))-- == 1;
        if ( !v238 )
          goto LABEL_202;
        sub_15D7BC0(v242, v241);
        v240 = *(_QWORD *)(a3 + 64);
        result = a1;
        *(_QWORD *)(a1 + 64) = v240;
        if ( v240 )
          goto LABEL_203;
      }
    }
    return result;
  }
  sub_15D7BC0(v237, v236);
  result = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 64) = result;
  v239 = *(_QWORD *)(a3 + 64);
  v240 = v239;
  if ( result )
    goto LABEL_194;
  if ( v239 )
  {
LABEL_202:
    result = a1;
    *(_QWORD *)(a1 + 64) = v239;
LABEL_203:
    ++*(_DWORD *)(v240 + 8);
  }
  return result;
}

