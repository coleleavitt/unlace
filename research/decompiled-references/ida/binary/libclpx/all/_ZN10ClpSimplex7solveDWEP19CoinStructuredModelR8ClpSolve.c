__int64 __fastcall ClpSimplex::solveDW(
        ClpSimplex *this,
        CoinStructuredModel *a2,
        ClpSolve *a3,
        double a4,
        double a5,
        __m128d si128,
        double a7)
{
  unsigned __int64 v7; // r14
  int v8; // r12d
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  int *v12; // r15
  int v13; // r12d
  int v14; // esi
  __int64 v15; // r13
  int v16; // ebx
  int v17; // eax
  _DWORD *v18; // r14
  unsigned __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rax
  int *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int *v27; // rax
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int *v31; // rcx
  __int64 v32; // rax
  int *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // r15d
  __int64 v37; // rdi
  int v38; // ecx
  unsigned __int64 v39; // rdi
  ClpSimplex *v40; // rax
  __int64 v41; // rbx
  ClpSimplex *v42; // r14
  CoinMessageHandler *v43; // rdi
  int v44; // edx
  int v45; // eax
  char *v46; // r14
  int *v47; // rbx
  int v48; // esi
  int *v49; // rax
  int v50; // r12d
  int v51; // r13d
  int v52; // r11d
  double *v53; // rsi
  double *v54; // r8
  int v55; // r9d
  __int64 v56; // rax
  unsigned int v57; // r12d
  unsigned int v58; // ecx
  __int64 v59; // rdx
  double *v60; // rdi
  double *v61; // rdx
  __m128d v62; // xmm0
  __m128d v63; // xmm1
  __m128d v64; // xmm0
  signed int v65; // r9d
  __int64 v66; // rax
  int v67; // r9d
  double *v68; // rdx
  double *v69; // rax
  __int64 v70; // r9
  __int64 (__fastcall ***v71)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  unsigned __int64 v72; // rax
  int v73; // r9d
  __int64 v74; // rdx
  int v75; // edi
  double *v76; // rsi
  unsigned int v77; // r10d
  unsigned int v78; // ecx
  __int64 v79; // rdx
  __int128 v80; // xmm0
  __int64 v81; // rdx
  int v82; // edi
  int v83; // eax
  int v84; // eax
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // r8
  int v88; // ebx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // r10
  unsigned int v93; // eax
  unsigned int v94; // esi
  unsigned int v95; // r9d
  unsigned int v96; // r8d
  unsigned __int64 v97; // rdi
  double *v98; // rcx
  __int64 v99; // rax
  unsigned int v100; // edx
  __m128i v101; // xmm0
  signed int v102; // eax
  int v103; // edx
  __int64 v104; // rcx
  int v105; // edx
  __int64 v106; // rcx
  int v107; // edx
  __int64 v108; // rcx
  int v109; // edx
  __int64 v110; // rcx
  int v111; // edx
  int v112; // eax
  int v113; // eax
  int v114; // eax
  unsigned __int64 v115; // rbx
  unsigned __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rsi
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 v122; // rcx
  __int64 v123; // rax
  __m128d v124; // xmm1
  __m128d v125; // xmm0
  CoinMessageHandler *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rax
  __int64 v132; // rax
  CoinMessageHandler *v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rax
  __int64 ru_nsignals; // rbx
  unsigned __int64 v140; // r15
  __int64 v141; // rax
  __int64 v142; // rdx
  double v143; // xmm0_8
  __int64 v144; // rdi
  _BYTE *v145; // rsi
  CoinMessageHandler *v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rax
  __int64 ru_nvcsw; // rbx
  int v153; // r12d
  __int64 v154; // r15
  __int64 v155; // rcx
  __int64 v156; // rax
  double v157; // xmm0_8
  double v158; // xmm0_8
  __int64 v159; // rcx
  double v160; // xmm4_8
  unsigned __int64 v161; // rax
  double v162; // xmm0_8
  double v163; // xmm0_8
  double *v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rsi
  double **v168; // rax
  unsigned __int64 v169; // rdi
  char *v170; // rbx
  __int64 *v171; // r14
  CoinPackedMatrix **v172; // r14
  double **v173; // r15
  char *v174; // rax
  __int64 (__fastcall ***v175)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64, double, double, double, double); // rdi
  int v176; // r12d
  double *v177; // r13
  unsigned __int64 v178; // rbx
  int v179; // esi
  __int64 v180; // rax
  unsigned int v181; // ecx
  int v182; // edi
  __int64 v183; // rdx
  unsigned int v184; // r8d
  __int64 v185; // rax
  unsigned int v186; // r8d
  double *v187; // r9
  unsigned __int64 v188; // rdx
  signed int v189; // esi
  __int64 v190; // rdx
  int v191; // esi
  double *v192; // rax
  double *v193; // rax
  ClpSimplex *v194; // rbx
  char *v195; // rbx
  __int64 v196; // r15
  __int64 (__fastcall ***v197)(_QWORD, _QWORD, _QWORD, struct rusage *, _QWORD, __int64); // rdi
  double *v198; // r12
  unsigned __int64 v199; // r13
  int v200; // esi
  unsigned int v201; // edi
  unsigned int v202; // ecx
  __int64 v203; // rdx
  __int64 v204; // rax
  double *v205; // r9
  unsigned __int64 v206; // rdx
  signed int v207; // esi
  __int64 v208; // rdx
  int v209; // esi
  int v210; // eax
  const double *v211; // r14
  double *v212; // r13
  double v213; // xmm1_8
  unsigned __int64 v214; // rax
  double v215; // xmm0_8
  double v216; // xmm5_8
  int v217; // r10d
  double v218; // xmm0_8
  __int64 v219; // rax
  double v220; // xmm2_8
  double v221; // xmm6_8
  CoinMessageHandler *v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rax
  int v230; // esi
  unsigned __int64 v231; // rcx
  unsigned int v232; // r8d
  unsigned int v233; // edx
  __int64 v234; // rax
  __int128 v235; // xmm0
  signed int v236; // eax
  __int64 v237; // rdx
  int v238; // eax
  double *v239; // rdx
  double *v240; // rax
  __int64 v241; // r13
  const double *v242; // r14
  double v243; // xmm1_8
  unsigned __int64 v244; // rax
  double v245; // xmm0_8
  double v246; // xmm5_8
  int v247; // eax
  double v248; // xmm0_8
  int v249; // r11d
  __int64 v250; // rax
  double v251; // xmm2_8
  double v252; // xmm7_8
  int v253; // eax
  double v254; // xmm5_8
  CoinMessageHandler *v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // rax
  __int64 v261; // rax
  __int64 v262; // rax
  int v263; // esi
  unsigned __int64 v264; // rcx
  unsigned int v265; // edx
  unsigned int v266; // r8d
  __int64 v267; // rax
  __int128 v268; // xmm0
  __int64 v269; // rax
  int v270; // esi
  unsigned __int64 v271; // rax
  int ru_msgsnd_word_high; // r9d
  __int64 v273; // rdx
  int v274; // edi
  double *v275; // rsi
  unsigned int v276; // r10d
  unsigned int v277; // ecx
  __int64 v278; // rdx
  __int128 v279; // xmm0
  __int64 v280; // rdx
  int v281; // edi
  void **v282; // r15
  double v283; // xmm0_8
  CoinMessageHandler *v284; // rax
  __int64 v285; // rdx
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // rax
  char *v290; // r13
  unsigned __int64 v291; // rax
  __int64 v292; // r12
  __int64 v293; // r14
  __int64 ru_msgrcv; // rbx
  __int64 v295; // r15
  int v296; // r9d
  __int64 v297; // rsi
  __int64 v298; // rcx
  _BYTE *v299; // rax
  __int64 v300; // xmm0_8
  __int64 v301; // rcx
  __int64 v302; // rsi
  double v303; // xmm0_8
  char *v304; // rbx
  __int64 v305; // rax
  char *v306; // rax
  int v307; // r15d
  __int64 v308; // r12
  int v309; // r15d
  __int64 v310; // rsi
  _BYTE *v311; // rax
  __int64 v312; // rdx
  __int64 v313; // rcx
  _BYTE *v314; // rdx
  char v315; // al
  __int64 v316; // rax
  unsigned __int64 v317; // rax
  __int64 v318; // rsi
  __int64 v319; // rdi
  __int64 v320; // rax
  __int64 v321; // rdx
  __int64 v322; // xmm0_8
  __int64 v323; // rax
  __int64 v324; // rdx
  double v325; // xmm0_8
  __int64 v326; // rax
  double v327; // xmm1_8
  double v328; // xmm0_8
  _BYTE *v329; // r11
  char v330; // cl
  double v331; // xmm0_8
  CoinMessageHandler *v332; // rax
  __int64 v333; // rdx
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  __int64 v337; // rax
  double v338; // xmm0_8
  CoinMessageHandler *v339; // rax
  __int64 v340; // rdx
  __int64 v341; // rcx
  __int64 v342; // r8
  __int64 v343; // r9
  __int64 v344; // rax
  ClpSimplex *v345; // rax
  ClpSimplex *v346; // rbx
  unsigned __int64 v347; // r15
  ClpSimplex *v348; // rdi
  _BYTE *v350; // rcx
  _BYTE *v351; // rcx
  __int64 v352; // rax
  unsigned __int64 v353; // rax
  int v354; // r10d
  double *v355; // rsi
  double *v356; // r8
  int v357; // ebx
  __int64 v358; // rax
  unsigned int v359; // ecx
  unsigned int v360; // r11d
  __int64 v361; // rdx
  __int64 v362; // rax
  double *v363; // rdi
  double *v364; // rdx
  __m128d v365; // xmm1
  __m128d v366; // xmm0
  __m128d v367; // xmm0
  signed int v368; // ebx
  __int64 v369; // rax
  int v370; // ebx
  __int64 v371; // rax
  int *v372; // rbx
  int v373; // esi
  int v374; // edi
  __int64 v375; // rax
  __int64 v376; // r8
  __int64 v377; // r10
  int v378; // edx
  int v379; // edx
  __int64 v380; // rdx
  int v381; // r10d
  unsigned __int64 v382; // rax
  __int64 v383; // rdx
  __int64 v384; // rcx
  _DWORD *v385; // rax
  __int64 v386; // rdx
  unsigned __int64 v387; // rax
  unsigned __int64 v388; // rdi
  __int64 v389; // rax
  __int64 v390; // rax
  __int64 v391; // rbx
  int v392; // eax
  unsigned __int64 v393; // rdx
  unsigned __int64 v394; // rdi
  unsigned int v395; // esi
  unsigned int v396; // ecx
  __int64 v397; // rdx
  __int64 v398; // rdx
  int v399; // eax
  double *v400; // rdx
  double *v401; // rax
  __int64 v402; // [rsp+0h] [rbp-A50h]
  __int64 v403; // [rsp+0h] [rbp-A50h]
  unsigned __int64 v404; // [rsp+0h] [rbp-A50h]
  __int64 v405; // [rsp+0h] [rbp-A50h]
  int v406; // [rsp+Ch] [rbp-A44h]
  int v407; // [rsp+18h] [rbp-A38h]
  __int64 v408; // [rsp+38h] [rbp-A18h]
  __int64 v409; // [rsp+48h] [rbp-A08h]
  int v410; // [rsp+50h] [rbp-A00h]
  bool v411; // [rsp+57h] [rbp-9F9h]
  double v412; // [rsp+58h] [rbp-9F8h]
  void **v413; // [rsp+60h] [rbp-9F0h]
  double v414; // [rsp+68h] [rbp-9E8h]
  char *v415; // [rsp+70h] [rbp-9E0h]
  __int64 v416; // [rsp+78h] [rbp-9D8h]
  ClpSimplex *v417; // [rsp+80h] [rbp-9D0h]
  int v418; // [rsp+88h] [rbp-9C8h]
  int v419; // [rsp+8Ch] [rbp-9C4h]
  _DWORD *v420; // [rsp+90h] [rbp-9C0h]
  __int64 v421; // [rsp+A0h] [rbp-9B0h]
  __int64 v422; // [rsp+A0h] [rbp-9B0h]
  int v423; // [rsp+A8h] [rbp-9A8h]
  __int64 v424; // [rsp+A8h] [rbp-9A8h]
  double *v425; // [rsp+B0h] [rbp-9A0h]
  _DWORD *v426; // [rsp+B8h] [rbp-998h]
  int *v427; // [rsp+C0h] [rbp-990h]
  int v428; // [rsp+C8h] [rbp-988h]
  int v429; // [rsp+CCh] [rbp-984h]
  __int64 v430; // [rsp+D0h] [rbp-980h]
  __int64 v431; // [rsp+D8h] [rbp-978h]
  __int64 v432; // [rsp+D8h] [rbp-978h]
  int *v433; // [rsp+E0h] [rbp-970h]
  int v434; // [rsp+E8h] [rbp-968h]
  char *v435; // [rsp+E8h] [rbp-968h]
  CoinMessages *v436; // [rsp+F8h] [rbp-958h]
  unsigned __int64 v437; // [rsp+100h] [rbp-950h]
  double *v438; // [rsp+100h] [rbp-950h]
  double v439; // [rsp+100h] [rbp-950h]
  __int64 v440; // [rsp+100h] [rbp-950h]
  int v442; // [rsp+110h] [rbp-940h]
  CoinPackedMatrix **v443; // [rsp+118h] [rbp-938h]
  __int64 v444; // [rsp+120h] [rbp-930h]
  void *v445; // [rsp+128h] [rbp-928h]
  unsigned __int64 v446; // [rsp+128h] [rbp-928h]
  int n; // [rsp+130h] [rbp-920h]
  int na; // [rsp+130h] [rbp-920h]
  __int64 nb; // [rsp+130h] [rbp-920h]
  __int64 v450; // [rsp+138h] [rbp-918h]
  int v451; // [rsp+138h] [rbp-918h]
  double *v452; // [rsp+140h] [rbp-910h]
  double *v453; // [rsp+140h] [rbp-910h]
  double *v454; // [rsp+140h] [rbp-910h]
  int v455; // [rsp+148h] [rbp-908h]
  double *v456; // [rsp+148h] [rbp-908h]
  double **v457; // [rsp+150h] [rbp-900h]
  int v458; // [rsp+150h] [rbp-900h]
  double *v459; // [rsp+158h] [rbp-8F8h]
  double *v460; // [rsp+158h] [rbp-8F8h]
  int v461; // [rsp+160h] [rbp-8F0h]
  char *v462; // [rsp+160h] [rbp-8F0h]
  char *v463; // [rsp+160h] [rbp-8F0h]
  int v464; // [rsp+168h] [rbp-8E8h]
  int v465[2]; // [rsp+168h] [rbp-8E8h]
  int ru_msgsnd; // [rsp+168h] [rbp-8E8h]
  unsigned __int64 v467; // [rsp+170h] [rbp-8E0h]
  struct rusage *v468; // [rsp+170h] [rbp-8E0h]
  unsigned __int64 v469; // [rsp+178h] [rbp-8D8h]
  int v470; // [rsp+178h] [rbp-8D8h]
  int v471; // [rsp+178h] [rbp-8D8h]
  int *v474; // [rsp+190h] [rbp-8C0h]
  double v475; // [rsp+190h] [rbp-8C0h]
  int v476; // [rsp+190h] [rbp-8C0h]
  int *v477; // [rsp+190h] [rbp-8C0h]
  char *v478; // [rsp+190h] [rbp-8C0h]
  int IsSet; // [rsp+198h] [rbp-8B8h]
  int v480; // [rsp+198h] [rbp-8B8h]
  double v481; // [rsp+198h] [rbp-8B8h]
  char *v482; // [rsp+198h] [rbp-8B8h]
  int v483; // [rsp+198h] [rbp-8B8h]
  double v484; // [rsp+198h] [rbp-8B8h]
  double v485; // [rsp+198h] [rbp-8B8h]
  int v486; // [rsp+198h] [rbp-8B8h]
  __int64 v487; // [rsp+198h] [rbp-8B8h]
  double *v488; // [rsp+1A8h] [rbp-8A8h] BYREF
  char v489[8]; // [rsp+1B0h] [rbp-8A0h] BYREF
  char v490[8]; // [rsp+1B8h] [rbp-898h] BYREF
  double *v491; // [rsp+1C0h] [rbp-890h] BYREF
  double *v492; // [rsp+1C8h] [rbp-888h] BYREF
  struct rusage v493; // [rsp+1D0h] [rbp-880h] BYREF
  struct rusage v494; // [rsp+260h] [rbp-7F0h] BYREF
  struct rusage usage; // [rsp+330h] [rbp-720h] BYREF
  __int64 v496; // [rsp+3C0h] [rbp-690h]
  __int64 v497; // [rsp+3C8h] [rbp-688h]
  __int64 (__fastcall ***v498)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+3D0h] [rbp-680h]
  double *v499; // [rsp+3E0h] [rbp-670h]
  unsigned __int64 v500; // [rsp+3E8h] [rbp-668h]
  __int64 v501; // [rsp+3F0h] [rbp-660h]
  __int64 v502; // [rsp+438h] [rbp-618h]
  int v503; // [rsp+464h] [rbp-5ECh]
  int v504; // [rsp+470h] [rbp-5E0h]
  CoinMessageHandler *v505; // [rsp+488h] [rbp-5C8h]
  double v506; // [rsp+6B0h] [rbp-3A0h]

  getrusage(RUSAGE_SELF, &usage);
  v7 = *((int *)a2 + 27);
  v8 = *((_DWORD *)a2 + 26);
  v407 = *((_DWORD *)a2 + 3);
  v467 = v7;
  n = *((_DWORD *)a2 + 25);
  v412 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  if ( v7 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_442;
  v9 = *((_DWORD *)a2 + 27);
  v10 = operator new[](16 * v7);
  v474 = (int *)v10;
  if ( v7 )
  {
    v11 = 0;
    do
    {
      ++v11;
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 0;
      *(_BYTE *)(v10 + 8) = 0;
      *(_BYTE *)(v10 + 9) = 0;
      v10 += 16;
      *(_BYTE *)(v10 - 6) = 0;
      *(_BYTE *)(v10 - 5) = 0;
      *(_BYTE *)(v10 - 4) = 0;
      *(_BYTE *)(v10 - 3) = 0;
    }
    while ( v7 != v11 );
  }
  if ( (int)v7 > 0 )
  {
    v12 = v474;
    v464 = v8;
    v13 = 0;
    do
    {
      v14 = v13++;
      v15 = CoinStructuredModel::coinBlock(a2, v14);
      v12 += 4;
      IsSet = CoinModel::whatIsSet((CoinModel *)v15);
      v16 = CoinStructuredModel::rowBlock(a2, (const std::string *)(v15 + 40));
      v17 = CoinStructuredModel::columnBlock(a2, (const std::string *)(v15 + 48));
      *(v12 - 4) = v16;
      *(v12 - 3) = v17;
      *((_BYTE *)v12 - 8) = IsSet & 1;
      *((_BYTE *)v12 - 7) = (IsSet >> 1) & 1;
      *((_BYTE *)v12 - 6) = (IsSet >> 2) & 1;
      *((_BYTE *)v12 - 5) = (IsSet >> 5) & 1;
      *((_BYTE *)v12 - 4) = (IsSet >> 3) & 1;
      *((_BYTE *)v12 - 3) = (IsSet >> 4) & 1;
    }
    while ( v13 != (_DWORD)v7 );
    v8 = v464;
    v9 = v7;
  }
  v428 = n - 1;
  if ( (unsigned __int64)n > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_442;
  v445 = (void *)(4LL * n);
  v18 = (_DWORD *)operator new[]((unsigned __int64)v445);
  if ( n )
  {
    v385 = v18;
    if ( n / 8 > 0 )
    {
      v386 = (unsigned int)(n / 8 - 1);
      do
      {
        *(_OWORD *)v385 = 0;
        v385 += 8;
        *((_OWORD *)v385 - 1) = 0;
      }
      while ( v385 != &v18[8 * v386 + 8] );
      v385 = &v18[8 * (int)v386 + 8];
    }
    switch ( n % 8 )
    {
      case 1:
        goto LABEL_409;
      case 2:
        goto LABEL_408;
      case 3:
        goto LABEL_407;
      case 4:
        goto LABEL_406;
      case 5:
        goto LABEL_405;
      case 6:
        goto LABEL_404;
      case 7:
        v385[6] = 0;
LABEL_404:
        v385[5] = 0;
LABEL_405:
        v385[4] = 0;
LABEL_406:
        v385[3] = 0;
LABEL_407:
        v385[2] = 0;
LABEL_408:
        v385[1] = 0;
LABEL_409:
        *v385 = 0;
        break;
      default:
        break;
    }
  }
  v19 = v8 + 1;
  if ( v19 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_442;
  v20 = v19;
  v21 = operator new[](4 * v19);
  v427 = (int *)v21;
  if ( v8 )
  {
    if ( v8 / 8 > 0 )
    {
      v383 = (unsigned int)(v8 / 8 - 1);
      v384 = v21 + 32 * v383 + 32;
      do
      {
        *(_OWORD *)v21 = 0;
        v21 += 32;
        *(_OWORD *)(v21 - 16) = 0;
      }
      while ( v21 != v384 );
      v21 = (__int64)&v427[8 * (int)v383 + 8];
    }
    switch ( v8 % 8 )
    {
      case 1:
        goto LABEL_397;
      case 2:
        goto LABEL_396;
      case 3:
        goto LABEL_395;
      case 4:
        goto LABEL_394;
      case 5:
        goto LABEL_393;
      case 6:
        goto LABEL_392;
      case 7:
        *(_DWORD *)(v21 + 24) = 0;
LABEL_392:
        *(_DWORD *)(v21 + 20) = 0;
LABEL_393:
        *(_DWORD *)(v21 + 16) = 0;
LABEL_394:
        *(_DWORD *)(v21 + 12) = 0;
LABEL_395:
        *(_DWORD *)(v21 + 8) = 0;
LABEL_396:
        *(_DWORD *)(v21 + 4) = 0;
LABEL_397:
        *(_DWORD *)v21 = 0;
        break;
      default:
        break;
    }
  }
  if ( v9 > 0 )
  {
    v22 = v474;
    do
    {
      v23 = *v22;
      v22 += 4;
      ++v18[v23];
      ++v427[*(v22 - 3)];
    }
    while ( v22 != &v474[4 * (v9 - 1) + 4] );
  }
  v24 = operator new[](4 * v467);
  v25 = -1;
  v452 = (double *)v24;
  v461 = -1;
  if ( n > 0 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( (int)v18[v26] > 1 )
      {
        if ( v25 != -1 )
        {
          v461 = -2;
          break;
        }
        v25 = v26;
      }
      if ( ++v26 == (unsigned int)v428 + 1LL )
      {
        v461 = v25;
        break;
      }
    }
  }
  if ( v8 > 0 )
  {
    v27 = v427;
    v28 = 0;
    do
    {
      v29 = *v27;
      *v27++ = v28;
      v28 += v29;
    }
    while ( v27 != &v427[v8 - 1 + 1] );
  }
  if ( v9 > 0 )
  {
    v30 = 0;
    v31 = v474 + 1;
    do
    {
      v32 = *v31;
      v31 += 4;
      v33 = &v427[v32];
      LODWORD(v32) = *v33;
      *((_DWORD *)v452 + *v33) = v30++;
      *v33 = v32 + 1;
    }
    while ( v30 != v9 );
  }
  if ( v8 > 0 )
    memmove(
      (char *)v427 + v20 * 4 - (4LL * (unsigned int)(v8 - 1) + 4),
      &v427[v20 - 1 - (unsigned int)(v8 - 1) - 1],
      4LL * (unsigned int)(v8 - 1) + 4);
  *v427 = 0;
  if ( v8 > 0 )
  {
    v34 = 0;
    v35 = 0;
    v36 = -1;
    v37 = (unsigned int)(v8 - 1) + 1LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = v427[v34 + 1];
        if ( v38 - (_DWORD)v35 == 1 && v461 == v474[4 * *((int *)v452 + v35)] )
          break;
        ++v34;
        v35 = v38;
        if ( v34 == v37 )
          goto LABEL_38;
      }
      if ( v36 != -1 )
        goto LABEL_440;
      v36 = v34++;
      v35 = v38;
      if ( v34 == v37 )
        goto LABEL_38;
    }
  }
  v36 = -1;
LABEL_38:
  if ( v461 < 0 )
LABEL_440:
    abort();
  operator delete[](v18);
  if ( (unsigned __int64)v8 > 0xFFFFFFFFFFFFFFFLL )
LABEL_442:
    __cxa_throw_bad_array_new_length();
  v443 = (CoinPackedMatrix **)operator new[](8LL * v8);
  v39 = -1;
  if ( (unsigned __int64)v428 <= 0x127350B8812735LL )
    v39 = 1776LL * v428 + 8;
  v415 = (char *)operator new[](v39);
  v40 = (ClpSimplex *)(v415 + 8);
  *(_QWORD *)v415 = v428;
  v41 = v428 - 1LL;
  v417 = (ClpSimplex *)(v415 + 8);
  if ( v41 >= 0 )
  {
    do
    {
      v42 = v40;
      ClpSimplex::ClpSimplex(v40, 0);
      --v41;
      v40 = (ClpSimplex *)((char *)v42 + 1776);
    }
    while ( v41 != -1 );
  }
  ClpSimplex::ClpSimplex((ClpSimplex *)&usage, 0);
  ClpModel::setObjectiveOffset((ClpModel *)&usage, *((double *)a2 + 3));
  v43 = *((CoinMessageHandler **)this + 43);
  v423 = *((_DWORD *)v43 + 26);
  if ( v423 == 7 )
  {
    CoinMessageHandler::setLogLevel(v43, 1);
    CoinMessageHandler::setLogLevel(v505, 1);
    if ( v8 > 0 )
    {
LABEL_46:
      *(_QWORD *)v465 = 0;
      v419 = -1;
      v455 = 0;
      v450 = (unsigned int)(v8 - 1) + 1LL;
      while ( 1 )
      {
        v459 = (double *)&v443[v455];
        *v459 = 0.0;
        v44 = v427[*(_QWORD *)v465];
        v45 = v427[*(_QWORD *)v465 + 1];
        if ( v44 < v45 )
          break;
LABEL_79:
        if ( v36 != v465[0] )
          ++v455;
        if ( ++*(_QWORD *)v465 == v450 )
          goto LABEL_82;
      }
      v46 = (char *)v417 + 1776 * v455;
      v47 = (int *)v452 + v44;
      v469 = (unsigned __int64)v452 + 4 * v44 + 4 * (unsigned __int64)(unsigned int)(v45 - 1 - v44) + 4;
      while ( 1 )
      {
        while ( 1 )
        {
          v480 = *v47;
          v48 = *v47;
          v49 = &v474[4 * *v47];
          v50 = v49[1];
          v51 = *v49;
          if ( v50 == v36 || v461 != v51 )
            break;
          *v459 = *(double *)(CoinStructuredModel::coinBlock(a2, v48) + 304);
LABEL_51:
          if ( ++v47 == (int *)v469 )
            goto LABEL_79;
        }
        v468 = *(struct rusage **)(CoinStructuredModel::coinBlock(a2, v48) + 304);
        CoinStructuredModel::block(
          a2,
          v51,
          v50,
          (const double **)&v488,
          (const double **)&v491,
          (const double **)&v492,
          (const double **)&v493,
          (const double **)&v494);
        if ( v50 == v36 )
        {
          ClpSimplex::loadProblem(
            (ClpSimplex *)&usage,
            (const CoinPackedMatrix *)v468,
            v492,
            (const double *)v493.ru_utime.tv_sec,
            (const double *)v494.ru_utime.tv_sec,
            v488,
            v491,
            nullptr);
          if ( *(double *)this < 0.0 )
          {
            v271 = v498 ? (**v498)(v498, 0, 0, v490, 0, 2) : 0LL;
            ru_msgsnd_word_high = HIDWORD(usage.__ru_msgsnd_word);
            if ( SHIDWORD(usage.__ru_msgsnd_word) > 0 )
            {
              v273 = (v271 >> 3) & 1;
              v274 = 0;
              if ( 2 - (unsigned int)((_DWORD)v273 == 0) > HIDWORD(usage.__ru_msgsnd_word) - 1 )
                goto LABEL_263;
              if ( (_DWORD)v273 )
              {
                v274 = 1;
                *(double *)v271 = -*(double *)v271;
              }
              v275 = (double *)(v271 + 8 * v273);
              v276 = ru_msgsnd_word_high - v273;
              v277 = 0;
              v278 = 0;
              do
              {
                v279 = *(_OWORD *)&v275[v278];
                ++v277;
                *(double *)&v279 = -*(double *)&v279;
                *((double *)&v279 + 1) = -*((double *)&v279 + 1);
                *(_OWORD *)&v275[v278] = v279;
                v278 += 2;
              }
              while ( v276 >> 1 > v277 );
              v274 += v276 & 0xFFFFFFFE;
              if ( (v276 & 0xFFFFFFFE) != v276 )
              {
LABEL_263:
                v280 = v274;
                v281 = v274 + 1;
                *(double *)(v271 + 8 * v280) = -*(double *)(v271 + 8 * v280);
                if ( v281 < ru_msgsnd_word_high )
                  *(double *)(v271 + 8LL * v281) = -*(double *)(v271 + 8LL * v281);
              }
            }
          }
          v419 = v480;
          goto LABEL_51;
        }
        ClpSimplex::loadProblem(
          (ClpSimplex *)v46,
          (const CoinPackedMatrix *)v468,
          v492,
          (const double *)v493.ru_utime.tv_sec,
          (const double *)v494.ru_utime.tv_sec,
          v488,
          v491,
          nullptr);
        v52 = *((_DWORD *)v46 + 27);
        v53 = *((double **)v46 + 22);
        v54 = *((double **)v46 + 23);
        if ( v52 > 0 )
        {
          if ( (v54 >= v53 + 2 || v53 >= v54 + 2) && (unsigned int)v52 > 5 )
          {
            v55 = 0;
            if ( (((unsigned __int64)v53 >> 3) & 1) != 0 )
            {
              v55 = 1;
              *v53 = fmax(-100000000.0, *v53);
              *v54 = fmin(100000000.0, *v54);
            }
            v56 = 0;
            v57 = v52 - (((unsigned __int64)v53 >> 3) & 1);
            v58 = 0;
            v59 = ((unsigned __int64)v53 >> 3) & 1;
            v60 = &v53[v59];
            v61 = &v54[v59];
            a7 = 100000000.0;
            do
            {
              ++v58;
              v62 = _mm_cmplt_pd(*(__m128d *)&v60[v56], (__m128d)xmmword_291BD0);
              *(__m128d *)&v60[v56] = _mm_or_pd(
                                        _mm_andn_pd(v62, *(__m128d *)&v60[v56]),
                                        _mm_and_pd((__m128d)xmmword_291BD0, v62));
              v63 = *(__m128d *)&v61[v56];
              v64 = _mm_cmplt_pd((__m128d)xmmword_291BE0, v63);
              si128 = _mm_and_pd((__m128d)xmmword_291BE0, v64);
              *(__m128d *)&v61[v56] = _mm_or_pd(_mm_andn_pd(v64, v63), si128);
              v56 += 2;
            }
            while ( v57 >> 1 > v58 );
            v65 = (v57 & 0xFFFFFFFE) + v55;
            if ( (v57 & 0xFFFFFFFE) != v57 )
            {
              v66 = v65;
              v67 = v65 + 1;
              v68 = &v53[v66];
              v69 = &v54[v66];
              *v68 = fmax(-100000000.0, *v68);
              si128.m128d_f64[0] = fmin(100000000.0, *v69);
              *v69 = si128.m128d_f64[0];
              if ( v67 < v52 )
              {
                v70 = v67;
                v53[v70] = fmax(-100000000.0, v53[v70]);
                v54[v70] = fmin(100000000.0, v54[v70]);
              }
            }
          }
          else
          {
            v352 = (__int64)&v53[(unsigned int)(v52 - 1) + 1];
            do
            {
              *v53 = fmax(-100000000.0, *v53);
              si128.m128d_f64[0] = *v54;
              if ( *v54 > 100000000.0 )
                *v54 = 100000000.0;
              ++v53;
              ++v54;
            }
            while ( v53 != (double *)v352 );
          }
        }
        if ( *(double *)this < 0.0 )
        {
          v71 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))v46 + 20);
          v72 = v71 ? (**v71)(v71, 0, 0, v489, 0, 2) : 0LL;
          v73 = *((_DWORD *)v46 + 27);
          if ( v73 > 0 )
          {
            v74 = (v72 >> 3) & 1;
            v75 = 0;
            if ( 2 - (unsigned int)((_DWORD)v74 == 0) > v73 - 1 )
              goto LABEL_74;
            if ( (_DWORD)v74 )
            {
              v75 = 1;
              *(double *)v72 = -*(double *)v72;
            }
            v76 = (double *)(v72 + 8 * v74);
            v77 = v73 - v74;
            v78 = 0;
            v79 = 0;
            do
            {
              ++v78;
              *(double *)&v80 = -v76[v79];
              *((double *)&v80 + 1) = -v76[v79 + 1];
              *(_OWORD *)&v76[v79] = v80;
              v79 += 2;
            }
            while ( v77 >> 1 > v78 );
            v75 += v77 & 0xFFFFFFFE;
            if ( (v77 & 0xFFFFFFFE) != v77 )
            {
LABEL_74:
              v81 = v75;
              v82 = v75 + 1;
              *(double *)(v72 + 8 * v81) = -*(double *)(v72 + 8 * v81);
              if ( v73 > v82 )
                *(double *)(v72 + 8LL * v82) = -*(double *)(v72 + 8LL * v82);
            }
          }
        }
        if ( (unsigned int)ClpSimplex::factorizationFrequency(this) == 200 )
        {
          ClpSimplex::defaultFactorizationFrequency((ClpSimplex *)v46);
        }
        else
        {
          v83 = ClpSimplex::factorizationFrequency(this);
          ClpSimplex::setFactorizationFrequency((ClpSimplex *)v46, v83);
        }
        ClpSimplex::setPerturbation((ClpSimplex *)v46, 50);
        ++v47;
        v427[v455] = v480;
        if ( v47 == (int *)v469 )
          goto LABEL_79;
      }
    }
  }
  else if ( v8 > 0 )
  {
    goto LABEL_46;
  }
  v419 = -1;
LABEL_82:
  operator delete[](v452);
  operator delete[](v474);
  ru_msgsnd = usage.ru_msgsnd;
  v84 = v428 * (LODWORD(usage.ru_msgsnd) + 1);
  if ( v84 < 2 * LODWORD(usage.ru_msgsnd) )
    v84 = 2 * LODWORD(usage.ru_msgsnd);
  v85 = v84;
  if ( (unsigned __int64)v84 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v433 = (int *)operator new[](4LL * v84);
  v456 = (double *)operator new[](8 * v85);
  v446 = operator new[]((unsigned __int64)v445);
  if ( (unsigned __int64)v428 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v425 = (double *)operator new[](8LL * v428);
  v86 = v496;
  v87 = v497;
  v418 = HIDWORD(usage.__ru_msgsnd_word);
  if ( ru_msgsnd <= 0 )
  {
    if ( v428 >= 0 )
    {
      v92 = 0;
      v88 = 0;
      goto LABEL_111;
    }
    v88 = 0;
    operator delete[]((void *)v446);
    operator delete[](v425);
    v388 = 4;
  }
  else
  {
    v88 = 0;
    si128.m128d_f64[0] = -1.0e10;
    a7 = -1.0;
    v89 = 0;
    do
    {
      if ( *(double *)(v86 + 8 * v89) > -1.0e10 )
      {
        v90 = v88++;
        v456[v90] = 1.0;
        v433[v90] = v89;
      }
      if ( *(double *)(v87 + 8 * v89) < 1.0e10 )
      {
        v91 = v88++;
        v456[v91] = -1.0;
        v433[v91] = v89;
      }
      ++v89;
    }
    while ( v89 != (unsigned int)(ru_msgsnd - 1) + 1LL );
    if ( v88 <= v428 )
    {
      v92 = 4LL * v88;
      goto LABEL_95;
    }
    operator delete[]((void *)v446);
    operator delete[](v425);
    v387 = v88 + 1;
    if ( v387 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v388 = 4 * v387;
  }
  v446 = operator new[](v388);
  v425 = (double *)operator new[](8LL * v88);
  v92 = 4LL * v88;
LABEL_95:
  if ( v88 )
  {
    v93 = -(int)(v446 >> 2) & 3;
    if ( (unsigned int)(v88 - 1) <= 6 )
    {
      v102 = 0;
    }
    else
    {
      v94 = 0;
      if ( v93 )
      {
        *(_DWORD *)v446 = 0;
        v94 = 1;
        *v425 = 1.0e13;
        if ( v93 != 1 )
        {
          *(_DWORD *)(v446 + 4) = 1;
          v425[1] = 1.0e13;
          v94 = 2;
          if ( v93 != 2 )
          {
            v425[2] = 1.0e13;
            *(_DWORD *)(v446 + 8) = 2;
            v94 = 3;
          }
        }
      }
      v95 = v88 - v93;
      si128 = (__m128d)_mm_load_si128((const __m128i *)&xmmword_289BC0);
      v96 = (v88 - v93) >> 2;
      v97 = v446 + 4LL * v93;
      v98 = &v425[v93];
      v99 = 0;
      v100 = 0;
      v101 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v94), 0), (__m128i)xmmword_289BB0);
      do
      {
        ++v100;
        *(__m128i *)(v97 + v99 * 4) = v101;
        v101 = _mm_add_epi32(v101, (__m128i)si128);
        *(_OWORD *)&v98[v99] = xmmword_293C20;
        *(_OWORD *)&v98[v99 + 2] = xmmword_293C20;
        v99 += 4;
      }
      while ( v96 > v100 );
      v102 = (v95 & 0xFFFFFFFC) + v94;
      if ( (v95 & 0xFFFFFFFC) == v95 )
        goto LABEL_111;
    }
    *(_DWORD *)(v446 + 4LL * v102) = v102;
    v425[v102] = 1.0e13;
    v103 = v102 + 1;
    if ( v102 + 1 < v88 )
    {
      v104 = v103;
      *(_DWORD *)(v446 + 4LL * v103) = v103;
      v105 = v102 + 2;
      v425[v104] = 1.0e13;
      if ( v88 > v102 + 2 )
      {
        v106 = v105;
        *(_DWORD *)(v446 + 4LL * v105) = v105;
        v107 = v102 + 3;
        v425[v106] = 1.0e13;
        if ( v88 > v102 + 3 )
        {
          v108 = v107;
          *(_DWORD *)(v446 + 4LL * v107) = v107;
          v109 = v102 + 4;
          v425[v108] = 1.0e13;
          if ( v88 > v102 + 4 )
          {
            v110 = v109;
            *(_DWORD *)(v446 + 4LL * v109) = v109;
            v111 = v102 + 5;
            v425[v110] = 1.0e13;
            if ( v88 > v102 + 5 )
            {
              v112 = v102 + 6;
              *(_DWORD *)(v446 + 4LL * v111) = v111;
              v425[v111] = 1.0e13;
              if ( v88 > v112 )
              {
                v425[v112] = 1.0e13;
                *(_DWORD *)(v446 + 4LL * v112) = v112;
              }
            }
          }
        }
      }
    }
  }
LABEL_111:
  *(_DWORD *)(v446 + v92) = v88;
  ClpModel::addColumns((ClpModel *)&usage, v88, nullptr, nullptr, v425, (const int *)v446, v433, v456);
  v113 = 100;
  v429 = HIDWORD(usage.__ru_msgsnd_word);
  if ( *((int *)a3 + 19) > 1 )
    v113 = *((_DWORD *)a3 + 19);
  v410 = v113;
  v406 = ru_msgsnd + v428;
  ClpSimplex::resize((ClpSimplex *)&usage, ru_msgsnd + v428, SHIDWORD(usage.__ru_msgsnd_word));
  if ( (unsigned int)ClpSimplex::factorizationFrequency(this) == 200 )
  {
    ClpSimplex::defaultFactorizationFrequency((ClpSimplex *)&usage);
  }
  else
  {
    v114 = ClpSimplex::factorizationFrequency(this);
    ClpSimplex::setFactorizationFrequency((ClpSimplex *)&usage, v114);
  }
  ClpSimplex::setPerturbation((ClpSimplex *)&usage, 50);
  v115 = 2 * (ru_msgsnd + 5 * v428);
  if ( v115 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v116 = 4 * v115;
  v426 = (_DWORD *)operator new[](v116);
  v117 = operator new[](v116);
  v420 = (_DWORD *)v117;
  v118 = v496;
  v119 = v497;
  *(_DWORD *)v446 = 0;
  if ( v428 > 0 )
  {
    v120 = 8LL * ru_msgsnd;
    v121 = v120 + v118;
    v122 = v120 + v119;
    v123 = 0;
    do
    {
      *(_QWORD *)(v121 + 8 * v123) = 0x3FF0000000000000LL;
      *(_QWORD *)(v122 + 8 * v123) = 0x3FF0000000000000LL;
      *(_DWORD *)(v117 + 4 * v123) = -1;
      v426[v123] = v123;
      v433[v123] = ru_msgsnd + v123;
      v456[v123] = 1.0;
      v425[v123] = 1.0e13;
      *(_DWORD *)(v446 + 4 * v123 + 4) = v123 + 1;
      ++v123;
    }
    while ( v123 != (unsigned int)(n - 2) + 1LL );
  }
  ClpModel::addColumns((ClpModel *)&usage, v428, nullptr, nullptr, v425, (const int *)v446, v433, v456);
  getrusage(RUSAGE_SELF, &v494);
  v124.m128d_f64[0] = (double)SLODWORD(v494.ru_utime.tv_sec);
  v125.m128d_f64[0] = (double)SLODWORD(v494.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(v494.ru_utime.tv_sec) - v412;
  sprintf((char *)&v494, "Time to decompose %.2f seconds", v125.m128d_f64[0]);
  v436 = (ClpSimplex *)((char *)this + 416);
  v126 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)this + 43),
                                 92,
                                 (ClpSimplex *)((char *)this + 416));
  v131 = CoinMessageHandler::operator<<(v126, (__int64)&v494, v127, v128, v129, v130, v402);
  CoinMessageHandler::operator<<(v131, 0, v125.m128d_f64[0]);
  v434 = n - 1;
  v470 = 0;
  v475 = 1.0e31;
  v403 = v406;
  v416 = 8LL * v406;
  v408 = (unsigned int)(v429 - 1 - v418);
  v132 = 1776LL * (unsigned int)(n - 2);
  v409 = (unsigned int)(n - 2);
  v421 = (__int64)&v415[v132 + 1784];
  v462 = &v415[v132 + 1892];
  do
  {
    sprintf((char *)&v494, "Start of pass %d", v470);
    v133 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v436);
    v138 = CoinMessageHandler::operator<<(v133, (__int64)&v494, v134, v135, v136, v137, v403);
    CoinMessageHandler::operator<<(v138, 0, v125.m128d_f64[0]);
    if ( v470 )
    {
      ru_nsignals = usage.ru_nsignals;
      v140 = v500;
      if ( v498 )
      {
        v141 = (**v498)(v498, 0, 0, &v491, 0, 2);
        if ( v418 < v429 )
          goto LABEL_123;
      }
      else
      {
        v141 = 0;
        if ( v418 < v429 )
        {
LABEL_123:
          v142 = v418;
          v143 = 0.0;
          v144 = v408 + v418 + 1;
          a7 = 0.1;
          do
          {
            while ( 1 )
            {
              v124.m128d_f64[0] = *(double *)(ru_nsignals + 8 * v142);
              v143 = v143 + v124.m128d_f64[0];
              if ( v124.m128d_f64[0] >= 0.000001 )
                break;
              *(_QWORD *)(v141 + 8 * v142) = 0x416312D000000000LL;
              *(_QWORD *)(v140 + 8 * v142) = 0x3FB999999999999ALL;
              *(_QWORD *)(ru_nsignals + 8 * v142) = 0;
              v145 = (_BYTE *)(v142 + v502);
              ++v142;
              *v145 = *v145 & 0xF8 | 5;
              if ( v142 == v144 )
                goto LABEL_127;
            }
            si128.m128d_f64[0] = (v124.m128d_f64[0] + 1.0) * 0.00001;
            v124.m128d_f64[0] = v124.m128d_f64[0] + si128.m128d_f64[0];
            *(double *)(v140 + 8 * v142++) = v124.m128d_f64[0];
          }
          while ( v142 != v144 );
          goto LABEL_127;
        }
      }
      v143 = 0.0;
LABEL_127:
      sprintf((char *)&v494, "Sum of artificials before solve is %g", v143);
      v146 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v436);
      v151 = CoinMessageHandler::operator<<(v146, (__int64)&v494, v147, v148, v149, v150, v403);
      CoinMessageHandler::operator<<(v151, 0, v143);
    }
    ClpSimplex::scaleObjective((ClpSimplex *)&usage, -1000000000.0);
    ru_nvcsw = usage.ru_nvcsw;
    v153 = usage.ru_msgsnd;
    memset((void *)usage.ru_nvcsw, 0, 8LL * SLODWORD(usage.ru_msgsnd));
    v154 = usage.ru_nsignals;
    (*(void (__fastcall **)(__int64, __int64, __int64, double))(*(_QWORD *)v501 + 360LL))(
      v501,
      usage.ru_nsignals,
      ru_nvcsw,
      1.0);
    if ( v153 > 0 )
    {
      si128.m128d_f64[0] = 0.0;
      v155 = 8LL * (unsigned int)(v153 - 1) + 8;
      v156 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v157 = *(double *)(ru_nvcsw + v156);
          v124.m128d_f64[0] = *(double *)(v497 + v156);
          if ( v157 <= v124.m128d_f64[0] )
            break;
          si128.m128d_f64[0] = si128.m128d_f64[0] + v157 - v124.m128d_f64[0];
LABEL_131:
          v156 += 8;
          if ( v156 == v155 )
            goto LABEL_135;
        }
        v124.m128d_f64[0] = *(double *)(v496 + v156);
        if ( v124.m128d_f64[0] <= v157 )
          goto LABEL_131;
        v156 += 8;
        si128.m128d_f64[0] = si128.m128d_f64[0] - (v157 - v124.m128d_f64[0]);
        if ( v156 == v155 )
        {
LABEL_135:
          v481 = si128.m128d_f64[0];
          v158 = si128.m128d_f64[0];
          goto LABEL_136;
        }
      }
    }
    v158 = 0.0;
    v481 = 0.0;
LABEL_136:
    printf("** suminf %g\n", v158);
    if ( SHIDWORD(usage.__ru_msgsnd_word) <= 0 )
      goto LABEL_144;
    a7 = 0.00001;
    v159 = 8LL * (unsigned int)(HIDWORD(usage.__ru_msgsnd_word) - 1) + 8;
    v160 = v481;
    v161 = 0;
    do
    {
      while ( 1 )
      {
        v124.m128d_f64[0] = *(double *)(v500 + v161);
        v162 = *(double *)(v154 + v161);
        si128.m128d_f64[0] = v124.m128d_f64[0] + 0.00001;
        if ( v162 <= v124.m128d_f64[0] + 0.00001 )
          break;
        v160 = v160 + v162 - v124.m128d_f64[0];
LABEL_139:
        v161 += 8LL;
        if ( v159 == v161 )
          goto LABEL_143;
      }
      v124.m128d_f64[0] = v499[v161 / 8];
      si128.m128d_f64[0] = v124.m128d_f64[0] - 0.00001;
      if ( v124.m128d_f64[0] - 0.00001 <= v162 )
        goto LABEL_139;
      v161 += 8LL;
      v160 = v160 - (v162 - v124.m128d_f64[0]);
    }
    while ( v159 != v161 );
LABEL_143:
    v481 = v160;
LABEL_144:
    printf("** suminf %g\n", v481);
    ClpSimplex::primal((ClpSimplex *)&usage, 0, 0);
    if ( v418 >= v429 )
    {
      v163 = 0.0;
    }
    else
    {
      v163 = 0.0;
      v164 = (double *)(usage.ru_nsignals + 8LL * v418);
      do
        v163 = v163 + *v164++;
      while ( (double *)(usage.ru_nsignals + 8 * (v418 + v408) + 8) != v164 );
    }
    printf("** Sum of artificials after solve is %g\n", v163);
    ClpSimplex::scaleObjective((ClpSimplex *)&usage, -1000000000.0);
    na = v504;
    if ( v504 == 2 && HIDWORD(usage.__ru_msgsnd_word) )
    {
      ClpSimplex::primal((ClpSimplex *)&usage, 1, 0);
      v354 = HIDWORD(usage.__ru_msgsnd_word);
      v355 = v499;
      v356 = (double *)v500;
      if ( SHIDWORD(usage.__ru_msgsnd_word) > 0 )
      {
        if ( (v500 >= (unsigned __int64)(v499 + 2) || (unsigned __int64)v499 >= v500 + 16)
          && HIDWORD(usage.__ru_msgsnd_word) > 5 )
        {
          v357 = 0;
          v358 = ((unsigned __int64)v499 >> 3) & 1;
          if ( (((unsigned __int64)v499 >> 3) & 1) != 0 )
          {
            v357 = 1;
            *v499 = fmax(*v499, -1.0e10);
            *v356 = fmin(*v356, 1.0e10);
          }
          v359 = 0;
          v360 = v354 - v358;
          v361 = (unsigned int)v358;
          v362 = 0;
          v363 = &v355[v361];
          v364 = &v356[v361];
          do
          {
            v365 = *(__m128d *)&v363[v362];
            ++v359;
            v366 = _mm_cmplt_pd((__m128d)xmmword_293C30, v365);
            *(__m128d *)&v363[v362] = _mm_or_pd(_mm_andn_pd(v366, (__m128d)xmmword_293C30), _mm_and_pd(v365, v366));
            v367 = _mm_cmplt_pd(*(__m128d *)&v364[v362], (__m128d)xmmword_28A0A0);
            v124 = _mm_and_pd(*(__m128d *)&v364[v362], v367);
            *(__m128d *)&v364[v362] = _mm_or_pd(_mm_andn_pd(v367, (__m128d)xmmword_28A0A0), v124);
            v362 += 2;
          }
          while ( v360 >> 1 > v359 );
          v368 = (v360 & 0xFFFFFFFE) + v357;
          if ( (v360 & 0xFFFFFFFE) != v360 )
          {
            si128.m128d_f64[0] = -1.0e10;
            v369 = v368;
            v124.m128d_f64[0] = 1.0e10;
            v370 = v368 + 1;
            v355[v369] = fmax(v355[v369], -1.0e10);
            v356[v369] = fmin(v356[v369], 1.0e10);
            if ( v370 < v354 )
            {
              v371 = v370;
              v355[v371] = fmax(v355[v371], -1.0e10);
              v356[v371] = fmin(v356[v371], 1.0e10);
            }
          }
        }
        else
        {
          si128.m128d_f64[0] = -1.0e10;
          v124.m128d_f64[0] = 1.0e10;
          v390 = (__int64)&v499[(unsigned int)(HIDWORD(usage.__ru_msgsnd_word) - 1) + 1];
          do
          {
            while ( 1 )
            {
              *v355 = fmax(*v355, -1.0e10);
              if ( *v356 < 1.0e10 )
                break;
              ++v355;
              *v356++ = 1.0e10;
              if ( (double *)v390 == v355 )
                goto LABEL_358;
            }
            ++v355;
            ++v356;
          }
          while ( (double *)v390 != v355 );
        }
      }
LABEL_358:
      ClpSimplex::primal((ClpSimplex *)&usage, 1, 0);
    }
    if ( !v503 && v470 )
      break;
    v125.m128d_f64[0] = v475 - 0.0000001;
    v414 = *(double *)&usage.ru_utime.tv_sec * *(double *)&usage.ru_majflt - *(double *)&usage.ru_ixrss;
    v411 = v470 > 555 && v414 > v475 - 0.0000001;
    if ( v411 )
      break;
    v434 = HIDWORD(usage.__ru_msgsnd_word) - v429;
    if ( HIDWORD(usage.__ru_msgsnd_word) - v429 > 0 )
    {
      v165 = v502 + v429;
      v166 = 0;
      v167 = (unsigned int)(HIDWORD(usage.__ru_msgsnd_word) - v429 - 1) + 1LL;
      do
      {
        if ( (*(_BYTE *)(v165 + v166) & 7) == 1 )
          v420[v166] = v470;
        ++v166;
      }
      while ( v167 != v166 );
    }
    if ( v434 + v428 > 2 * (ru_msgsnd + 5 * v428) )
    {
      if ( (unsigned __int64)v434 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v372 = (int *)operator new[](4LL * v434);
      if ( v434 <= 0 )
      {
        v373 = 0;
      }
      else
      {
        v373 = 0;
        v374 = 0;
        v375 = 0;
        v376 = (unsigned int)(v434 - 1) + 1LL;
        do
        {
          while ( 1 )
          {
            v379 = v420[v375];
            if ( v379 < v470 - 6 )
              break;
            v377 = v374++;
            v420[v377] = v379;
            v378 = v426[v375++];
            v426[v377] = v378;
            if ( v376 == v375 )
              goto LABEL_366;
          }
          v380 = v373++;
          v381 = v375++ + v429;
          v372[v380] = v381;
        }
        while ( v376 != v375 );
LABEL_366:
        v434 -= v373;
      }
      ClpModel::deleteColumns((ClpModel *)&usage, v373, v372);
      operator delete[](v372);
    }
    if ( na )
    {
      if ( na == 1 )
      {
        v389 = ClpSimplex::infeasibilityRay((ClpSimplex *)&usage, 0);
        v125.m128d_f64[0] = v506;
        v453 = (double *)v389;
        printf("** The sum of infeasibilities is %g\n", v506);
        v411 = 1;
        goto LABEL_159;
      }
      if ( !HIDWORD(usage.__ru_msgsnd_word) )
      {
        v453 = (double *)usage.ru_nvcsw;
        memset((void *)usage.ru_nvcsw, 0, v416);
        goto LABEL_159;
      }
      ClpModel::writeMps((ClpModel *)&usage, "unbounded.mps", 0, 2, 0.0);
      goto LABEL_440;
    }
    v453 = (double *)usage.ru_nvcsw;
LABEL_159:
    if ( !v470 )
    {
      v391 = usage.ru_nvcsw;
      v453 = (double *)usage.ru_nvcsw;
      if ( v406 > 0 )
      {
        v392 = 0;
        v393 = ((unsigned __int64)usage.ru_nvcsw >> 3) & 1;
        if ( (unsigned int)(v406 - 1) <= 1 )
          goto LABEL_435;
        if ( (_DWORD)v393 )
        {
          v392 = 1;
          *(double *)usage.ru_nvcsw = 0.0000001 * *(double *)usage.ru_nvcsw;
        }
        v394 = v391 + 8 * v393;
        v395 = 0;
        v125.m128d_f64[0] = 0.0000001;
        v396 = v406 - v393;
        v397 = 0;
        do
        {
          ++v395;
          v124 = _mm_mul_pd(*(__m128d *)(v394 + v397), (__m128d)xmmword_293C40);
          *(__m128d *)(v394 + v397) = v124;
          v397 += 16;
        }
        while ( v396 >> 1 > v395 );
        v392 += v396 & 0xFFFFFFFE;
        if ( (v396 & 0xFFFFFFFE) != v396 )
        {
LABEL_435:
          v398 = v392;
          v399 = v392 + 1;
          v400 = &v453[v398];
          v125.m128d_f64[0] = 0.0000001 * *v400;
          *v400 = v125.m128d_f64[0];
          if ( v406 > v399 )
          {
            v401 = &v453[v399];
            v125.m128d_f64[0] = 0.0000001 * *v401;
            *v401 = v125.m128d_f64[0];
          }
        }
        v453 = (double *)usage.ru_nvcsw;
      }
    }
    *(_DWORD *)v446 = 0;
    v168 = (double **)operator new[](8LL * v428);
    v457 = v168;
    if ( v428 <= 0 )
    {
      operator delete[](v168);
      if ( !v453 || !v411 )
        goto LABEL_274;
      v442 = 0;
LABEL_376:
      operator delete[](v453);
      goto LABEL_272;
    }
    v169 = *((int *)v415 + 29);
    if ( v169 > 0xFFFFFFFFFFFFFFFLL )
LABEL_438:
      __cxa_throw_bad_array_new_length();
    v170 = v415 + 1892;
    v413 = (void **)v168;
    v171 = (__int64 *)v168;
    while ( 1 )
    {
      *v171 = operator new[](8 * v169);
      if ( v462 == v170 )
        break;
      v169 = *(int *)v170;
      v170 += 1776;
      ++v171;
      if ( v169 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_438;
    }
    v172 = v443;
    v173 = v457;
    v482 = v415 + 116;
    v174 = v415 + 116;
    while ( 2 )
    {
      v175 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64, double, double, double, double))(v174 + 52);
      v176 = *(_DWORD *)v174;
      v177 = *v173;
      if ( v175 )
        v178 = (**v175)(v175, 0, 0, &v492, 0, 2, v125.m128d_f64[0], v124.m128d_f64[0], si128.m128d_f64[0], a7);
      else
        v178 = 0;
      memcpy(v177, (const void *)v178, 8LL * v176);
      CoinPackedMatrix::transposeTimes(*v172, v453, (double *)v178);
      if ( !na )
      {
        if ( v176 > 0 )
        {
          if ( ((unsigned __int64)v177 >= v178 + 16 || v178 >= (unsigned __int64)(v177 + 2)) && (unsigned int)v176 > 9 )
          {
            v179 = 0;
            v180 = (v178 >> 3) & 1;
            if ( ((v178 >> 3) & 1) != 0 )
            {
              v179 = 1;
              *(double *)v178 = *v177 - *(double *)v178;
            }
            v181 = 0;
            v182 = v176 - v180;
            v183 = (v178 >> 3) & 1;
            v184 = v176 - v180;
            v185 = 0;
            v186 = v184 >> 1;
            v187 = &v177[v183];
            v188 = v178 + v183 * 8;
            do
            {
              ++v181;
              v125 = _mm_sub_pd(*(__m128d *)&v187[v185], *(__m128d *)(v188 + v185 * 8));
              *(__m128d *)(v188 + v185 * 8) = v125;
              v185 += 2;
            }
            while ( v186 > v181 );
            v189 = (v182 & 0xFFFFFFFE) + v179;
            if ( (v182 & 0xFFFFFFFE) != v182 )
            {
              v190 = v189;
              v191 = v189 + 1;
              v192 = (double *)(v178 + 8 * v190);
              v125.m128d_f64[0] = v177[v190] - *v192;
              *v192 = v125.m128d_f64[0];
              if ( v176 > v191 )
              {
                v193 = (double *)(v178 + 8LL * v191);
                v125.m128d_f64[0] = v177[v191] - *v193;
                *v193 = v125.m128d_f64[0];
              }
            }
          }
          else
          {
            v353 = 0;
            do
            {
              v125.m128d_f64[0] = v177[v353 / 8] - *(double *)(v178 + v353);
              *(double *)(v178 + v353) = v125.m128d_f64[0];
              v353 += 8LL;
            }
            while ( 8LL * (unsigned int)(v176 - 1) + 8 != v353 );
          }
        }
        goto LABEL_179;
      }
      if ( v176 <= 0 )
        goto LABEL_179;
      v229 = (v178 >> 3) & 1;
      if ( 2 - (unsigned int)((_DWORD)v229 == 0) > v176 - 1 )
      {
        v236 = 0;
        goto LABEL_226;
      }
      v230 = 0;
      if ( (_DWORD)v229 )
      {
        v230 = 1;
        *(double *)v178 = -*(double *)v178;
      }
      v231 = v178 + 8 * v229;
      v232 = v176 - v229;
      v233 = 0;
      v234 = 0;
      do
      {
        v235 = *(_OWORD *)(v231 + v234);
        ++v233;
        v125.m128d_f64[0] = -*(double *)&v235;
        v125.m128d_f64[1] = -*((double *)&v235 + 1);
        *(__m128d *)(v231 + v234) = v125;
        v234 += 16;
      }
      while ( v232 >> 1 > v233 );
      v236 = (v232 & 0xFFFFFFFE) + v230;
      if ( (v232 & 0xFFFFFFFE) == v232 )
      {
LABEL_179:
        if ( v423 == 7 )
          goto LABEL_228;
      }
      else
      {
LABEL_226:
        v237 = v236;
        v238 = v236 + 1;
        v239 = (double *)(v178 + 8 * v237);
        v125.m128d_f64[0] = -*v239;
        *v239 = v125.m128d_f64[0];
        if ( v238 >= v176 )
          goto LABEL_179;
        v240 = (double *)(v178 + 8LL * v238);
        v125.m128d_f64[0] = -*v240;
        *v240 = v125.m128d_f64[0];
        if ( v423 == 7 )
LABEL_228:
          CoinMessageHandler::setLogLevel(*(CoinMessageHandler **)(v482 + 236), 0);
      }
      v482 += 1776;
      ++v173;
      ++v172;
      v174 = v482;
      if ( v462 != v482 )
        continue;
      break;
    }
    v194 = (ClpSimplex *)(v415 + 8);
    if ( v470 )
    {
      do
      {
        ClpSimplex::primal(v194, 0, 0);
        v194 = (ClpSimplex *)((char *)v194 + 1776);
      }
      while ( (ClpSimplex *)v421 != v194 );
    }
    else
    {
      do
      {
        ClpSimplex::dual(v194, 0, 0);
        v194 = (ClpSimplex *)((char *)v194 + 1776);
      }
      while ( (ClpSimplex *)v421 != v194 );
    }
    v195 = v415 + 8;
    v196 = 0;
    v442 = 0;
    do
    {
      v197 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, struct rusage *, _QWORD, __int64))v195 + 20);
      v483 = *((_DWORD *)v195 + 27);
      v198 = v457[v196];
      if ( v197 )
        v199 = (**v197)(v197, 0, 0, &v493, 0, 2);
      else
        v199 = 0;
      v125.m128d_f64[0] = -1000000000.0;
      ClpSimplex::scaleObjective((ClpSimplex *)v195, -1000000000.0);
      if ( (*((_DWORD *)v195 + 80) & 0xFFFFFFFD) != 0 )
      {
        memset((void *)v199, 0, 8LL * v483);
        ClpSimplex::primal((ClpSimplex *)v195, 0, 0);
        if ( na )
        {
          if ( v483 > 0 )
          {
            v262 = (v199 >> 3) & 1;
            v263 = 0;
            if ( 2 - (unsigned int)((_DWORD)v262 == 0) > v483 - 1 )
              goto LABEL_251;
            if ( (_DWORD)v262 )
            {
              v263 = 1;
              *(double *)v199 = -*(double *)v199;
            }
            v264 = v199 + 8 * v262;
            v265 = 0;
            v266 = v483 - v262;
            v267 = 0;
            do
            {
              v268 = *(_OWORD *)(v264 + v267);
              ++v265;
              *(double *)&v268 = -*(double *)&v268;
              *((double *)&v268 + 1) = -*((double *)&v268 + 1);
              *(_OWORD *)(v264 + v267) = v268;
              v267 += 16;
            }
            while ( v266 >> 1 > v265 );
            v263 += v266 & 0xFFFFFFFE;
            if ( (v266 & 0xFFFFFFFE) != v266 )
            {
LABEL_251:
              v269 = v263;
              v270 = v263 + 1;
              *(double *)(v199 + 8 * v269) = -*(double *)(v199 + 8 * v269);
              if ( v483 > v270 )
                *(double *)(v199 + 8LL * v270) = -*(double *)(v199 + 8LL * v270);
            }
          }
        }
        else if ( v483 > 0 )
        {
          if ( ((unsigned __int64)v198 >= v199 + 16 || v199 >= (unsigned __int64)(v198 + 2)) && (unsigned int)v483 > 9 )
          {
            v200 = 0;
            if ( ((v199 >> 3) & 1) != 0 )
            {
              v200 = 1;
              *(double *)v199 = *v198 - *(double *)v199;
            }
            v201 = v483 - ((v199 >> 3) & 1);
            v202 = 0;
            v203 = (v199 >> 3) & 1;
            v204 = 0;
            v205 = &v198[v203];
            v206 = v199 + v203 * 8;
            do
            {
              ++v202;
              *(__m128d *)(v206 + v204 * 8) = _mm_sub_pd(*(__m128d *)&v205[v204], *(__m128d *)(v206 + v204 * 8));
              v204 += 2;
            }
            while ( v201 >> 1 > v202 );
            v207 = (v201 & 0xFFFFFFFE) + v200;
            if ( (v201 & 0xFFFFFFFE) != v201 )
            {
              v208 = v207;
              v209 = v207 + 1;
              *(double *)(v199 + 8 * v208) = v198[v208] - *(double *)(v199 + 8 * v208);
              if ( v483 > v209 )
                *(double *)(v199 + 8LL * v209) = v198[v209] - *(double *)(v199 + 8LL * v209);
            }
          }
          else
          {
            v382 = 0;
            do
            {
              *(double *)(v199 + v382) = v198[v382 / 8] - *(double *)(v199 + v382);
              v382 += 8LL;
            }
            while ( 8LL * (unsigned int)(v483 - 1) + 8 != v382 );
          }
        }
        ClpSimplex::scaleObjective((ClpSimplex *)v195, -1000000000.0);
        ClpSimplex::primal((ClpSimplex *)v195, 1, 0);
        v125.m128d_f64[0] = -1000000000.0;
        ClpSimplex::scaleObjective((ClpSimplex *)v195, -1000000000.0);
      }
      memcpy((void *)v199, v198, 8LL * v483);
      if ( *((_DWORD *)v195 + 77) || !v470 )
      {
        v431 = v442;
        v430 = 4LL * v442;
        v476 = *(_DWORD *)(v446 + v430);
        v210 = *((_DWORD *)v195 + 80);
        if ( v210 )
        {
          if ( v210 != 2 )
            goto LABEL_440;
          v211 = (const double *)ClpModel::unboundedRay((ClpModel *)v195);
          v212 = &v456[v476];
          CoinPackedMatrix::times(v443[v196], v211, v212);
          if ( v483 <= 0 )
          {
            *(double *)&v437 = 0.0;
          }
          else
          {
            v213 = 0.0;
            v214 = 0;
            do
            {
              v215 = v211[v214 / 8] * v198[v214 / 8];
              v214 += 8LL;
              v213 = v213 + v215;
            }
            while ( 8LL * (unsigned int)(v483 - 1) + 8 != v214 );
            *(double *)&v437 = v213;
          }
          if ( ru_msgsnd <= 0 )
          {
            v124.m128d_f64[0] = 0.0;
            v484 = *(double *)&v437;
            *(_QWORD *)&si128.m128d_f64[0] = v437;
            v218 = 1.0e100;
          }
          else
          {
            v124.m128d_f64[0] = 0.0;
            v216 = *(double *)&v437;
            v217 = v476;
            v218 = 1.0e100;
            v219 = 0;
            do
            {
              v220 = v212[v219];
              a7 = fabs(v220);
              if ( a7 > 1.0e-15 )
              {
                v221 = v453[v219];
                v218 = fmin(v218, a7);
                v124.m128d_f64[0] = fmax(v124.m128d_f64[0], a7);
                v456[v217] = v220;
                v433[v217++] = v219;
                v216 = v216 - v221 * v220;
              }
              ++v219;
            }
            while ( (unsigned int)(ru_msgsnd - 1) + 1LL != v219 );
            v484 = v216;
            si128.m128d_f64[0] = v216;
            v476 = v217;
          }
          sprintf(
            (char *)&v494,
            "For subproblem ray %d smallest - %g, largest %g - dj %g",
            v196,
            v218,
            v124.m128d_f64[0],
            si128.m128d_f64[0]);
          v222 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v436);
          v227 = CoinMessageHandler::operator<<(v222, (__int64)&v494, v223, v224, v225, v226, v403);
          CoinMessageHandler::operator<<(v227, 0, v218);
          v125.m128d_f64[0] = -0.000001;
          if ( v484 < -0.000001 )
          {
            ++v442;
            v425[v431] = *(double *)&v437;
            *(_DWORD *)(v446 + v430 + 4) = v476;
            v228 = v434;
            v420[v434++] = v470;
            v426[v228] = v196;
          }
        }
        else
        {
          v241 = v476;
          v242 = *((const double **)v195 + 15);
          v438 = &v456[v476];
          CoinPackedMatrix::times(v443[v196], v242, v438);
          if ( v483 <= 0 )
          {
            v246 = 0.0;
            v485 = 0.0;
          }
          else
          {
            v243 = 0.0;
            v244 = 0;
            do
            {
              v245 = v242[v244 / 8] * v198[v244 / 8];
              v244 += 8LL;
              v243 = v243 + v245;
            }
            while ( 8LL * (unsigned int)(v483 - 1) + 8 != v244 );
            v485 = v243;
            v246 = 0.0;
          }
          if ( !na )
            v246 = v485;
          v247 = ru_msgsnd;
          if ( ru_msgsnd <= 0 )
          {
            v124.m128d_f64[0] = 0.0;
            v248 = 1.0e100;
          }
          else
          {
            v124.m128d_f64[0] = 0.0;
            v248 = 1.0e100;
            v249 = v476;
            v250 = 0;
            do
            {
              v251 = v438[v250];
              a7 = fabs(v251);
              if ( a7 > 1.0e-15 )
              {
                v252 = v453[v250];
                v248 = fmin(v248, a7);
                v124.m128d_f64[0] = fmax(v124.m128d_f64[0], a7);
                v433[v241] = v250;
                v456[v241] = v251;
                v241 = ++v249;
                v246 = v246 - v252 * v251;
              }
              ++v250;
            }
            while ( (unsigned int)(ru_msgsnd - 1) + 1LL != v250 );
            v476 = v249;
            v438 = &v456[v241];
            v247 = ru_msgsnd;
          }
          v253 = v196 + v247;
          v254 = v246 - v453[v253];
          v433[v241] = v253;
          *v438 = 1.0;
          si128.m128d_f64[0] = v254;
          v439 = v254;
          sprintf(
            (char *)&v494,
            "For subproblem %d smallest - %g, largest %g - dj %g",
            v196,
            v248,
            v124.m128d_f64[0],
            v254);
          v255 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v436);
          v260 = CoinMessageHandler::operator<<(v255, (__int64)&v494, v256, v257, v258, v259, v403);
          CoinMessageHandler::operator<<(v260, 0, v248);
          v125.m128d_f64[0] = -0.000001;
          if ( v439 < -0.000001 || !v470 )
          {
            ++v442;
            v425[v431] = v485;
            *(_DWORD *)(v446 + v430 + 4) = v476 + 1;
            v261 = v434;
            v420[v434++] = v470;
            v426[v261] = v196;
          }
        }
      }
      ++v196;
      v195 += 1776;
    }
    while ( v409 + 1 != v196 );
    v282 = v413;
    do
    {
      if ( *v282 )
        operator delete[](*v282);
      ++v282;
    }
    while ( v282 != (void **)&v457[v409 + 1] );
    operator delete[](v457);
    if ( v453 && v411 )
      goto LABEL_376;
LABEL_272:
    if ( v442 )
      ClpModel::addColumns((ClpModel *)&usage, v442, nullptr, nullptr, v425, (const int *)v446, v433, v456);
LABEL_274:
    ++v470;
    v475 = v414;
  }
  while ( v410 != v470 );
  getrusage(RUSAGE_SELF, &v493);
  v283 = (double)SLODWORD(v493.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(v493.ru_utime.tv_sec) - v412;
  sprintf((char *)&v494, "Time at end of D-W %.2f seconds", v283);
  v284 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v436);
  v289 = CoinMessageHandler::operator<<(v284, (__int64)&v494, v285, v286, v287, v288, v403);
  CoinMessageHandler::operator<<(v289, 0, v283);
  ClpSimplex::loadProblem(this, a2, 1, 0);
  if ( v404 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v290 = (char *)operator new[](v416);
  v460 = (double *)operator new[](v416);
  v451 = v429 + v434;
  v291 = v429 + v434;
  if ( v291 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  nb = 8 * v291;
  v463 = (char *)operator new[](8 * v291);
  v292 = usage.ru_nsignals;
  v293 = v496;
  v440 = v497;
  v454 = *((double **)this + 15);
  v424 = *((_QWORD *)this + 22);
  v422 = *((_QWORD *)this + 23);
  ru_msgrcv = usage.ru_msgrcv;
  v444 = *((_QWORD *)this + 14);
  v477 = *(int **)(CoinStructuredModel::coinBlock(a2, v419) + 176);
  v486 = *(_DWORD *)(CoinStructuredModel::coinBlock(a2, v419) + 8);
  v295 = *(_QWORD *)(CoinStructuredModel::coinBlock(a2, v419) + 280);
  v296 = *(_DWORD *)(CoinStructuredModel::coinBlock(a2, v419) + 12);
  if ( v486 > 0 )
  {
    v297 = 0;
    do
    {
      v298 = v477[v297];
      v299 = (_BYTE *)(*((_QWORD *)this + 33) + (int)v298 + *((_DWORD *)this + 27));
      *v299 = *v299 & 0xF8 | *(_BYTE *)(v502 + (int)v297 + HIDWORD(usage.__ru_msgsnd_word)) & 7;
      v300 = *(_QWORD *)(ru_msgrcv + 8 * v297++);
      *(_QWORD *)(v444 + 8 * v298) = v300;
    }
    while ( (unsigned int)(v486 - 1) + 1LL != v297 );
  }
  if ( v296 > 0 )
  {
    v301 = 0;
    do
    {
      v302 = *(int *)(v295 + 4 * v301);
      *(_BYTE *)(v302 + *((_QWORD *)this + 33)) = *(_BYTE *)(v302 + *((_QWORD *)this + 33)) & 0xF8
                                                | *(_BYTE *)(v502 + v301) & 7;
      v303 = *(double *)(v292 + 8 * v301++);
      v454[v302] = v303;
    }
    while ( (unsigned int)(v296 - 1) + 1LL != v301 );
  }
  if ( v428 > 0 )
  {
    v478 = nullptr;
    v304 = v415 + 8;
    v305 = 8LL * v429;
    v432 = v292 + v305;
    v435 = &v463[v305];
    v306 = nullptr;
    do
    {
      v458 = (int)v306;
      v307 = v427[(_QWORD)v306];
      v308 = *(_QWORD *)(CoinStructuredModel::coinBlock(a2, v307) + 176);
      v471 = *(_DWORD *)(CoinStructuredModel::coinBlock(a2, v307) + 8);
      v487 = *(_QWORD *)(CoinStructuredModel::coinBlock(a2, v307) + 280);
      v309 = *(_DWORD *)(CoinStructuredModel::coinBlock(a2, v307) + 12);
      if ( v471 > 0 )
      {
        v310 = 0;
        do
        {
          v311 = (_BYTE *)(*((_QWORD *)this + 33) + *(_DWORD *)(v308 + 4 * v310) + *((_DWORD *)this + 27));
          v312 = (int)v310++ + *((_DWORD *)v304 + 27);
          *v311 = *v311 & 0xF8 | *(_BYTE *)(*((_QWORD *)v304 + 33) + v312) & 7;
        }
        while ( v310 != (unsigned int)(v471 - 1) + 1LL );
      }
      if ( v309 > 0 )
      {
        v313 = 0;
        do
        {
          v314 = (_BYTE *)(*((_QWORD *)this + 33) + *(int *)(v487 + 4 * v313));
          v315 = *(_BYTE *)(*((_QWORD *)v304 + 33) + v313++);
          *v314 = *v314 & 0xF8 | v315 & 7;
        }
        while ( v313 != (unsigned int)(v309 - 1) + 1LL );
      }
      CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)&v493, v443[(_QWORD)v478]);
      CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)&v493);
      memset(v463, 0, nb);
      if ( v451 > v429 )
      {
        v316 = 0;
        do
        {
          if ( v426[v316] == v458 )
            *(_QWORD *)&v435[8 * v316] = *(_QWORD *)(v432 + 8 * v316);
          ++v316;
        }
        while ( (unsigned int)(~v429 + v451) + 1LL != v316 );
      }
      memset(v290, 0, v416);
      (*(void (__fastcall **)(__int64, char *, char *, double))(*(_QWORD *)v501 + 360LL))(v501, v463, v290, 1.0);
      if ( ru_msgsnd > 0 )
      {
        v317 = 0;
        do
        {
          if ( *(double *)(v440 + v317) < 1.0e20 )
            v460[v317 / 8] = *(double *)&v290[v317];
          else
            v460[v317 / 8] = 1.797693134862316e308;
          if ( *(double *)(v293 + v317) <= -1.0e20 )
            *(_QWORD *)&v290[v317] = 0xFFEFFFFFFFFFFFFFLL;
          v317 += 8LL;
        }
        while ( 8LL * (unsigned int)(ru_msgsnd - 1) + 8 != v317 );
      }
      ClpModel::addRows(
        (ClpModel *)v304,
        ru_msgsnd,
        (const double *)v290,
        v460,
        (const int *)v493.ru_idrss,
        (const int *)v493.ru_isrss,
        (const int *)v493.ru_ixrss,
        (const double *)v493.ru_maxrss);
      ClpSimplex::primal((ClpSimplex *)v304, 1, 0);
      v318 = *((_QWORD *)v304 + 15);
      v319 = *((_QWORD *)v304 + 14);
      if ( v471 > 0 )
      {
        v320 = 0;
        do
        {
          v321 = *(int *)(v308 + 4 * v320);
          v322 = *(_QWORD *)(v319 + 8 * v320++);
          *(_QWORD *)(v444 + 8 * v321) = v322;
        }
        while ( v320 != (unsigned int)(v471 - 1) + 1LL );
      }
      if ( v309 > 0 )
      {
        v323 = 0;
        do
        {
          v324 = *(int *)(v487 + 4 * v323);
          v325 = *(double *)(v318 + 8 * v323++);
          v454[v324] = v325;
        }
        while ( (unsigned int)(v309 - 1) + 1LL != v323 );
      }
      v304 += 1776;
      CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)&v493);
      v306 = ++v478;
    }
    while ( (char *)(v409 + 1) != v478 );
  }
  if ( v407 > 0 )
  {
    v326 = 0;
    do
    {
      v327 = v454[v326];
      v328 = *(double *)(v422 + 8 * v326) - 0.00000001;
      if ( v328 <= v327 || v327 <= *(double *)(v424 + 8 * v326) + 0.00000001 )
      {
        if ( v327 < v328 )
        {
          if ( *(double *)(v424 + 8 * v326) + 0.00000001 >= v327 )
          {
            v351 = (_BYTE *)(v326 + *((_QWORD *)this + 33));
            if ( (*v351 & 7) != 1 )
              *v351 = *v351 & 0xF8 | 3;
          }
        }
        else
        {
          v350 = (_BYTE *)(v326 + *((_QWORD *)this + 33));
          if ( (*v350 & 7) != 1 )
            *v350 = *v350 & 0xF8 | 2;
        }
      }
      else
      {
        v329 = (_BYTE *)(v326 + *((_QWORD *)this + 33));
        if ( (*v329 & 7) != 1 )
        {
          v330 = *v329 & 0xF8;
          if ( *(double *)(*((_QWORD *)this + 22) + 8 * v326) > -1.0e30
            || *(double *)(*((_QWORD *)this + 23) + 8 * v326) < 1.0e30 )
          {
            *v329 = v330 | 4;
          }
          else
          {
            *v329 = v330;
          }
        }
      }
      ++v326;
    }
    while ( (unsigned int)(v407 - 1) + 1LL != v326 );
  }
  getrusage(RUSAGE_SELF, &v493);
  v331 = (double)SLODWORD(v493.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(v493.ru_utime.tv_sec) - v412;
  sprintf((char *)&v494, "Time before cleanup of full model %.2f seconds", v331);
  v332 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v436);
  v337 = CoinMessageHandler::operator<<(v332, (__int64)&v494, v333, v334, v335, v336, v404);
  CoinMessageHandler::operator<<(v337, 0, v331);
  ClpSimplex::primal(this, 1, 0);
  getrusage(RUSAGE_SELF, &v493);
  v338 = (double)SLODWORD(v493.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(v493.ru_utime.tv_sec) - v412;
  sprintf((char *)&v494, "Total time %.2f seconds", v338);
  v339 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v436);
  v344 = CoinMessageHandler::operator<<(v339, (__int64)&v494, v340, v341, v342, v343, v405);
  CoinMessageHandler::operator<<(v344, 0, v338);
  operator delete[](v427);
  operator delete[](v463);
  operator delete[](v290);
  operator delete[](v460);
  operator delete[](v426);
  operator delete[](v420);
  operator delete[]((void *)v446);
  operator delete[](v433);
  operator delete[](v456);
  operator delete[](v425);
  operator delete[](v443);
  if ( v415 != (char *)-8LL )
  {
    v345 = (ClpSimplex *)((char *)v417 + 1776 * *(_QWORD *)v415);
    if ( v417 != v345 )
    {
      v346 = (ClpSimplex *)((char *)v345 - 1776);
      v347 = (unsigned __int64)v345
           - 1776
           * ((0x195E8EFDB195E8FLL * ((unsigned __int64)(1776LL * *(_QWORD *)v415 - 1776) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
           - 3552;
      do
      {
        v348 = v346;
        v346 = (ClpSimplex *)((char *)v346 - 1776);
        ClpSimplex::~ClpSimplex(v348);
      }
      while ( (ClpSimplex *)v347 != v346 );
    }
    operator delete[](v415);
  }
  ClpSimplex::~ClpSimplex((ClpSimplex *)&usage);
  return 0;
}

