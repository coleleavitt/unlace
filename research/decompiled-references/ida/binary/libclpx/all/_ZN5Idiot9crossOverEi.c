void __fastcall Idiot::crossOver(Idiot *this, char a2, double a3, double a4, __m128d a5)
{
  Idiot *v5; // r14
  ClpSimplex *v6; // rdi
  ClpPackedMatrix *v7; // rbx
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v10)(ClpPackedMatrix *); // rdx
  __int64 v11; // r11
  __int64 (__fastcall *v12)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v13)(ClpPackedMatrix *); // rax
  __int64 v14; // r12
  __int64 v15; // rdi
  unsigned __int64 v16; // r11
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // r10
  _QWORD *v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  ClpPresolve *v21; // r11
  double v22; // xmm4_8
  int v23; // eax
  int v24; // eax
  ClpPresolve *v25; // r11
  double v26; // xmm4_8
  __int64 v27; // rsi
  __int64 v28; // r10
  __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // r13
  __int64 v32; // r10
  __int64 v33; // r9
  char *v34; // r11
  __int64 v35; // r14
  double v36; // xmm0_8
  double v37; // xmm1_8
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // r8
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  double v45; // xmm0_8
  ClpModel *v46; // r10
  __m128d v47; // xmm1
  __int64 v48; // rcx
  __int64 v49; // rax
  double v50; // xmm0_8
  __int64 v51; // rax
  int v52; // esi
  unsigned int v53; // edx
  int v54; // edi
  unsigned int v55; // r8d
  double *v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // r8d
  signed int v59; // eax
  __int64 v60; // rdx
  int v61; // eax
  int v62; // esi
  unsigned __int64 v63; // rax
  unsigned int v64; // r8d
  unsigned int v65; // edx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // esi
  __int64 v70; // rdx
  __int64 v71; // rax
  int v72; // esi
  unsigned int v73; // edi
  __int64 v74; // rax
  char *v75; // r9
  double *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rax
  double *v79; // r8
  unsigned int v80; // ecx
  signed int v81; // esi
  CoinFactorization *v82; // rdi
  __int64 v83; // rdx
  double v84; // xmm0_8
  int v85; // eax
  int v86; // esi
  ClpPresolve *v87; // r11
  double v88; // xmm4_8
  ClpPresolve *v89; // r13
  int v90; // edx
  double *v91; // rdi
  _BYTE *v92; // rcx
  __int64 v93; // r13
  ClpPresolve *v94; // r11
  __m128i v95; // xmm3
  __int64 *v96; // r8
  double *v97; // rax
  __m128i v98; // xmm5
  __m128i v99; // xmm4
  ClpPresolve *v100; // r11
  __int64 v101; // r14
  __int64 v102; // rdx
  int v103; // ecx
  int v104; // esi
  double v105; // xmm0_8
  __int64 v106; // r9
  int v107; // edi
  bool v108; // zf
  __int64 v109; // rax
  double v110; // xmm1_8
  double v111; // xmm7_8
  double v112; // xmm1_8
  double v113; // xmm0_8
  double v114; // xmm1_8
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 i; // rax
  double v120; // xmm1_8
  ClpPresolve *v121; // rdi
  __int64 v122; // rdx
  __int64 v123; // rsi
  double v124; // xmm6_8
  double v125; // xmm1_8
  int *v126; // rcx
  double v127; // xmm0_8
  _BYTE *v128; // rdx
  double v129; // xmm1_8
  double v130; // xmm0_8
  char v131; // al
  char v132; // cl
  char v133; // al
  char v134; // cl
  ClpModel *v135; // r13
  double v136; // xmm3_8
  int v137; // ecx
  int v138; // eax
  __int64 v139; // rdx
  __int64 k; // rcx
  const void *v141; // rdi
  _DWORD *v142; // rax
  int v143; // eax
  char v144; // di
  double *v145; // r12
  unsigned __int64 v146; // rax
  ClpModel *v147; // rcx
  double *v148; // rdi
  int v149; // r8d
  __int64 v150; // rax
  unsigned int v151; // edx
  int v152; // r9d
  __int64 v153; // rsi
  unsigned int v154; // edi
  double *v155; // r10
  double *v156; // rsi
  __int64 v157; // rax
  signed int v158; // r8d
  __int64 v159; // rax
  int v160; // r8d
  double *v161; // r13
  unsigned __int64 v162; // rax
  CoinFactorization *v163; // r8
  double *v164; // rax
  double v165; // xmm1_8
  double *v166; // rdi
  double *v167; // rax
  double v168; // xmm0_8
  __int64 *v169; // rdx
  __int64 *v170; // rax
  __int64 v171; // rcx
  __int64 v172; // xmm0_8
  __int64 v173; // rax
  __int64 *v174; // rcx
  __int64 *v175; // rax
  __int64 v176; // rdi
  __int64 v177; // rax
  ClpModel *v178; // r13
  ClpModel *v179; // rbx
  ClpModel *v180; // rax
  char v181; // bl
  int v182; // eax
  ClpPresolve *v183; // rdi
  double v184; // xmm1_8
  double v185; // xmm1_8
  _BYTE *v186; // rsi
  _QWORD *v187; // rax
  __int64 *v188; // rdx
  __int64 v189; // xmm0_8
  __int64 v190; // rax
  _QWORD *v191; // rcx
  _QWORD *v192; // rax
  CoinPackedMatrix *v193; // rdx
  CoinPackedMatrix *v194; // rax
  __int64 v195; // rcx
  __int64 v196; // xmm0_8
  __int64 v197; // rax
  CoinPackedMatrix *v198; // rcx
  int v199; // eax
  __int64 v200; // rax
  double v201; // xmm4_8
  double v202; // xmm5_8
  __int64 v203; // rsi
  double v204; // xmm13_8
  __int64 v205; // r9
  double v206; // xmm1_8
  double v207; // xmm12_8
  int v208; // esi
  double v209; // xmm6_8
  double *v210; // r9
  double v211; // xmm0_8
  double v212; // xmm2_8
  double v213; // xmm14_8
  _BYTE *v214; // rsi
  _BYTE *v215; // rdx
  double v216; // xmm0_8
  double v217; // xmm14_8
  CoinFactorization *v218; // rax
  __int64 *v219; // rdx
  __int64 v220; // rsi
  __int64 v221; // xmm0_8
  __int64 v222; // rax
  _QWORD *v223; // rcx
  __int64 v224; // rax
  __int64 v225; // rax
  ClpModel *v226; // r8
  CoinPackedMatrix *v227; // rdi
  CoinPackedMatrix *v228; // rdx
  _QWORD *v229; // rax
  __int64 v230; // xmm0_8
  __int64 v231; // rax
  const void *v232; // rdi
  ClpPackedMatrix *v233; // rbx
  double *v234; // rsi
  double v235; // xmm4_8
  char *v236; // r13
  double v237; // xmm0_8
  CoinPackedMatrix *v238; // rsi
  __int64 v239; // rax
  int v240; // ecx
  int v241; // esi
  int v242; // edx
  int v243; // ecx
  __int128 v244; // xmm1
  int v245; // ecx
  __int64 v246; // rdx
  unsigned __int64 v247; // rax
  double v248; // xmm0_8
  double v249; // xmm0_8
  unsigned __int64 v250; // rax
  double v251; // xmm1_8
  double v252; // xmm2_8
  double v253; // xmm2_8
  __int64 v254; // rax
  int v255; // r8d
  int v256; // edx
  double v257; // xmm4_8
  double v258; // xmm2_8
  double v259; // xmm3_8
  double v260; // xmm5_8
  __int64 v261; // rdx
  char *v262; // rcx
  char *v263; // rsi
  char *v264; // r8
  char *v265; // rdx
  __int64 v266; // rax
  ClpModel *v267; // r12
  const void *v268; // rdi
  ClpPackedMatrix *v269; // rbx
  ClpModel *v270; // r12
  const void *v271; // rdi
  ClpPackedMatrix *v272; // rbx
  ClpModel *v273; // rbx
  ClpModel *v274; // rbx
  __int64 v275; // rdx
  char *v276; // rcx
  char *v277; // rsi
  char *v278; // r8
  char *v279; // rdx
  __int64 v280; // rax
  CoinMessageHandler *v281; // rax
  __int64 v282; // rdx
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // r9
  __int64 v286; // rax
  void **v287; // rbx
  int v288; // ebx
  double *v289; // r12
  double *v290; // rdi
  unsigned int v291; // r13d
  __int64 v292; // rax
  __int64 v293; // rcx
  int v294; // ebx
  double *v295; // rsi
  __m128i si128; // xmm7
  unsigned int v297; // r11d
  size_t v298; // r9
  double *v299; // r8
  double *v300; // rcx
  unsigned int v301; // edx
  unsigned __int64 v302; // rax
  __m128d v303; // xmm1
  __m128d v304; // xmm0
  signed int v305; // r13d
  int v306; // edx
  int v307; // edx
  int v308; // r13d
  int v309; // ecx
  char *v310; // r13
  int *v311; // rbx
  int v312; // eax
  __int64 v313; // rcx
  __int64 v314; // rax
  ClpModel *v315; // rax
  __int64 v316; // rdi
  __int64 (__fastcall *v317)(double, double, double); // rax
  int v318; // eax
  __int64 v319; // rsi
  _BYTE *v320; // rax
  char v321; // dl
  double v322; // xmm1_8
  double v323; // xmm0_8
  CoinFactorization *v324; // rsi
  CoinFactorization *v325; // rdx
  _QWORD *v326; // rax
  __int64 v327; // rdi
  __int64 v328; // xmm0_8
  __int64 v329; // rax
  __int64 v330; // rax
  __int64 v331; // rdx
  __int64 v332; // rcx
  __int64 v333; // rax
  double v334; // xmm1_8
  __int64 j; // rax
  double v336; // xmm2_8
  __int64 v337; // xmm6_8
  double v338; // xmm7_8
  __int64 v339; // rsi
  double v340; // xmm6_8
  int *v341; // rcx
  double v342; // xmm2_8
  int v343; // edi
  unsigned __int64 v344; // rax
  double v345; // xmm0_8
  double v346; // xmm1_8
  int v347; // r13d
  unsigned __int64 v348; // rax
  double v349; // xmm1_8
  double v350; // xmm2_8
  __int64 v351; // rax
  double *v352; // rcx
  int v353; // edx
  int v354; // eax
  double *v355; // rcx
  double *v356; // rax
  double v357; // xmm1_8
  double *v358; // rdi
  double *v359; // rax
  double v360; // xmm0_8
  __int64 v361; // rax
  __int64 v362; // rdx
  double v363; // xmm3_8
  double v364; // xmm0_8
  char v365; // r10
  char v366; // dl
  __int64 v367; // rax
  double v368; // xmm1_8
  _BYTE *v369; // rcx
  char v370; // dl
  signed int v371; // eax
  __m128i *v372; // rcx
  unsigned int v373; // edx
  __m128i v374; // xmm0
  int v375; // edx
  int v376; // eax
  char *v377; // rax
  __int64 v378; // rdx
  signed int v379; // eax
  unsigned int v380; // edx
  __m128i *v381; // rcx
  __m128i v382; // xmm7
  __m128i v383; // xmm0
  int v384; // edx
  int v385; // eax
  double v386; // xmm1_8
  double *v387; // rax
  double v388; // xmm0_8
  unsigned __int64 v389; // rax
  unsigned int v390; // eax
  __int64 v391; // [rsp+0h] [rbp-760h]
  __m128i v392; // [rsp+10h] [rbp-750h]
  __m128i v393; // [rsp+10h] [rbp-750h]
  __m128i v394; // [rsp+20h] [rbp-740h]
  __m128i v395; // [rsp+20h] [rbp-740h]
  __int64 v396; // [rsp+30h] [rbp-730h]
  ClpPresolve *v397; // [rsp+30h] [rbp-730h]
  ClpPresolve *v398; // [rsp+30h] [rbp-730h]
  int v399; // [rsp+40h] [rbp-720h]
  int v400; // [rsp+40h] [rbp-720h]
  __int64 v401; // [rsp+48h] [rbp-718h]
  __int64 *v402; // [rsp+48h] [rbp-718h]
  __int64 *v403; // [rsp+48h] [rbp-718h]
  __int64 v404; // [rsp+50h] [rbp-710h]
  __m128i v405; // [rsp+50h] [rbp-710h]
  __m128i v406; // [rsp+50h] [rbp-710h]
  __int64 *v407; // [rsp+60h] [rbp-700h]
  int v408; // [rsp+60h] [rbp-700h]
  __int64 *v409; // [rsp+60h] [rbp-700h]
  __m128i v410; // [rsp+60h] [rbp-700h]
  __m128i v411; // [rsp+60h] [rbp-700h]
  __int64 v412; // [rsp+70h] [rbp-6F0h]
  int v413; // [rsp+7Ch] [rbp-6E4h]
  int v414; // [rsp+7Ch] [rbp-6E4h]
  unsigned __int64 v415; // [rsp+80h] [rbp-6E0h]
  unsigned int v416; // [rsp+80h] [rbp-6E0h]
  double *v417; // [rsp+88h] [rbp-6D8h]
  unsigned int v418; // [rsp+88h] [rbp-6D8h]
  unsigned int v419; // [rsp+90h] [rbp-6D0h]
  int v420; // [rsp+94h] [rbp-6CCh]
  CoinFactorization *v421; // [rsp+98h] [rbp-6C8h]
  CoinPackedMatrix *v422; // [rsp+A0h] [rbp-6C0h]
  __int64 v423; // [rsp+A8h] [rbp-6B8h]
  unsigned int v424; // [rsp+A8h] [rbp-6B8h]
  __int64 v425; // [rsp+B0h] [rbp-6B0h]
  __int64 v426; // [rsp+B8h] [rbp-6A8h]
  __int64 v427; // [rsp+B8h] [rbp-6A8h]
  int *v428; // [rsp+C0h] [rbp-6A0h]
  ClpModel *v429; // [rsp+C0h] [rbp-6A0h]
  int v430; // [rsp+C0h] [rbp-6A0h]
  void *v431; // [rsp+C0h] [rbp-6A0h]
  double *v432; // [rsp+C0h] [rbp-6A0h]
  __int64 *v433; // [rsp+C8h] [rbp-698h]
  _QWORD *v434; // [rsp+D0h] [rbp-690h]
  signed __int64 n; // [rsp+D8h] [rbp-688h]
  size_t na; // [rsp+D8h] [rbp-688h]
  double *v437; // [rsp+E0h] [rbp-680h]
  double *v438; // [rsp+E0h] [rbp-680h]
  __int64 *src; // [rsp+E8h] [rbp-678h]
  double *v440; // [rsp+F0h] [rbp-670h]
  ClpModel **v441; // [rsp+100h] [rbp-660h]
  int *v442; // [rsp+100h] [rbp-660h]
  char *v443; // [rsp+100h] [rbp-660h]
  int v444; // [rsp+100h] [rbp-660h]
  int v445; // [rsp+108h] [rbp-658h]
  int v446; // [rsp+10Ch] [rbp-654h]
  size_t v447; // [rsp+110h] [rbp-650h]
  size_t v448; // [rsp+110h] [rbp-650h]
  __int64 v449; // [rsp+110h] [rbp-650h]
  size_t v450; // [rsp+110h] [rbp-650h]
  int v451; // [rsp+110h] [rbp-650h]
  CoinPackedMatrix *v452; // [rsp+118h] [rbp-648h]
  CoinPackedMatrix *v453; // [rsp+118h] [rbp-648h]
  CoinPackedMatrix *v454; // [rsp+118h] [rbp-648h]
  ClpPresolve *v455; // [rsp+120h] [rbp-640h]
  ClpPresolve *v456; // [rsp+120h] [rbp-640h]
  ClpPresolve *v457; // [rsp+120h] [rbp-640h]
  ClpPresolve *v458; // [rsp+120h] [rbp-640h]
  char v459; // [rsp+120h] [rbp-640h]
  ClpPresolve *v460; // [rsp+120h] [rbp-640h]
  int v461; // [rsp+120h] [rbp-640h]
  ClpPresolve *v462; // [rsp+120h] [rbp-640h]
  ClpPresolve *v463; // [rsp+120h] [rbp-640h]
  int v464; // [rsp+128h] [rbp-638h]
  unsigned __int64 v465; // [rsp+128h] [rbp-638h]
  ClpPresolve *v466; // [rsp+128h] [rbp-638h]
  bool v467; // [rsp+133h] [rbp-62Dh]
  char v468; // [rsp+133h] [rbp-62Dh]
  int v469; // [rsp+134h] [rbp-62Ch]
  int v470; // [rsp+138h] [rbp-628h]
  CoinFactorization *v471; // [rsp+140h] [rbp-620h]
  CoinFactorization *v472; // [rsp+140h] [rbp-620h]
  double v473; // [rsp+140h] [rbp-620h]
  int v474; // [rsp+140h] [rbp-620h]
  int v475; // [rsp+140h] [rbp-620h]
  CoinFactorization *v476; // [rsp+140h] [rbp-620h]
  unsigned __int64 v477; // [rsp+148h] [rbp-618h]
  unsigned __int64 v478; // [rsp+148h] [rbp-618h]
  unsigned __int64 v479; // [rsp+148h] [rbp-618h]
  unsigned __int64 v480; // [rsp+148h] [rbp-618h]
  unsigned __int64 v481; // [rsp+148h] [rbp-618h]
  unsigned __int64 v482; // [rsp+148h] [rbp-618h]
  bool v483; // [rsp+148h] [rbp-618h]
  double v484; // [rsp+148h] [rbp-618h]
  unsigned __int64 v485; // [rsp+148h] [rbp-618h]
  unsigned __int64 v486; // [rsp+148h] [rbp-618h]
  unsigned __int64 v487; // [rsp+148h] [rbp-618h]
  unsigned __int64 v488; // [rsp+148h] [rbp-618h]
  int v489; // [rsp+150h] [rbp-610h]
  bool v490; // [rsp+150h] [rbp-610h]
  int v491; // [rsp+154h] [rbp-60Ch]
  unsigned __int64 s; // [rsp+158h] [rbp-608h]
  ClpPresolve *sa; // [rsp+158h] [rbp-608h]
  double *sb; // [rsp+158h] [rbp-608h]
  ClpModel *sc; // [rsp+158h] [rbp-608h]
  void *sg; // [rsp+158h] [rbp-608h]
  void *sh; // [rsp+158h] [rbp-608h]
  double sd; // [rsp+158h] [rbp-608h]
  ClpModel *se; // [rsp+158h] [rbp-608h]
  double *sf; // [rsp+158h] [rbp-608h]
  _BYTE v501[96]; // [rsp+160h] [rbp-600h] BYREF
  int v502; // [rsp+1C0h] [rbp-5A0h]
  char v503[208]; // [rsp+1D0h] [rbp-590h] BYREF
  _BYTE v504[868]; // [rsp+2A0h] [rbp-4C0h] BYREF
  int v505; // [rsp+604h] [rbp-15Ch]

  v5 = this;
  v108 = *((_DWORD *)this + 37) == 2;
  v6 = *(ClpSimplex **)this;
  if ( v108 )
  {
    ClpSimplex::allSlackBasis(v6, 0);
    return;
  }
  v7 = *((ClpPackedMatrix **)v6 + 24);
  v8 = *(_QWORD **)v7;
  v9 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v7 + 48LL);
  if ( v9 == ClpPackedMatrix::getIndices )
  {
    v10 = (__int64 (__fastcall *)(ClpPackedMatrix *))v8[7];
    v426 = *(_QWORD *)(*((_QWORD *)v7 + 11) + 40LL);
    if ( v10 == ClpPackedMatrix::getVectorStarts )
      goto LABEL_4;
LABEL_309:
    v11 = v10(v7);
    v8 = *(_QWORD **)v7;
    v12 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v7 + 64LL);
    if ( v12 == ClpPackedMatrix::getVectorLengths )
      goto LABEL_5;
    goto LABEL_310;
  }
  v426 = v9(*((ClpPackedMatrix **)v6 + 24));
  v8 = *(_QWORD **)v7;
  v10 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v7 + 56LL);
  if ( v10 != ClpPackedMatrix::getVectorStarts )
    goto LABEL_309;
LABEL_4:
  v11 = *(_QWORD *)(*((_QWORD *)v7 + 11) + 48LL);
  v12 = (__int64 (__fastcall *)(ClpPackedMatrix *))v8[8];
  if ( v12 == ClpPackedMatrix::getVectorLengths )
  {
LABEL_5:
    v425 = *(_QWORD *)(*((_QWORD *)v7 + 11) + 56LL);
    goto LABEL_6;
  }
LABEL_310:
  sh = (void *)v11;
  v225 = v12(v7);
  v11 = (__int64)sh;
  v425 = v225;
  v8 = *(_QWORD **)v7;
LABEL_6:
  v13 = (__int64 (__fastcall *)(ClpPackedMatrix *))v8[5];
  if ( v13 == ClpPackedMatrix::getElements )
  {
    v14 = *(_QWORD *)(*((_QWORD *)v7 + 11) + 32LL);
  }
  else
  {
    sg = (void *)v11;
    v224 = v13(v7);
    v11 = (__int64)sg;
    v14 = v224;
  }
  v477 = v11;
  v452 = *(CoinPackedMatrix **)(*(_QWORD *)v5 + 152LL);
  (***(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)v5 + 360LL))(*(_QWORD *)(*(_QWORD *)v5 + 360LL), 140);
  v15 = *(_QWORD *)v5;
  v423 = 0;
  v16 = v477;
  v17 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))(*(_QWORD *)v5 + 160LL);
  v18 = *(_QWORD **)(*(_QWORD *)v5 + 176LL);
  v19 = *(_QWORD *)(*(_QWORD *)v5 + 120LL);
  v491 = *(_DWORD *)(*(_QWORD *)v5 + 104LL);
  v470 = *(_DWORD *)(*(_QWORD *)v5 + 108LL);
  src = *(__int64 **)(*(_QWORD *)v5 + 184LL);
  v471 = *(CoinFactorization **)(*(_QWORD *)v5 + 144LL);
  v412 = *((_QWORD *)v5 + 13);
  s = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v17 )
  {
    v20 = (**v17)(v17, 0, 0, v504, 0, 2);
    v15 = *(_QWORD *)v5;
    v16 = v477;
    v423 = v20;
  }
  v478 = v16;
  v489 = sub_1994E0(v15);
  v21 = (ClpPresolve *)v478;
  v22 = 1.0e-10;
  v469 = a2 & 7;
  if ( (*((_DWORD *)v5 + 36) & 0x80u) == 0 )
    v22 = 0.000001;
  v23 = *((_DWORD *)v5 + 36) & 0x2000;
  v445 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    if ( (a2 & 7u) > 2 )
    {
      if ( v23 )
      {
        v467 = 1;
        v445 = 0;
        v421 = nullptr;
        v422 = nullptr;
        v434 = nullptr;
        v433 = nullptr;
        v415 = v491;
        n = 8LL * v491;
        goto LABEL_18;
      }
      goto LABEL_16;
    }
    if ( !v23 )
    {
      v23 = 1;
      goto LABEL_16;
    }
    v467 = 1;
    v445 = 1;
  }
  else
  {
    v467 = 1;
    if ( !v23 )
    {
LABEL_16:
      v445 = v23;
      v467 = *((_DWORD *)v5 + 30) > 1000000;
      if ( (a2 & 7u) > 2 )
      {
LABEL_17:
        v421 = nullptr;
        v422 = nullptr;
        v434 = nullptr;
        v433 = nullptr;
        v415 = v491;
        n = 8LL * v491;
        goto LABEL_18;
      }
      goto LABEL_165;
    }
    if ( (a2 & 7u) > 2 )
      goto LABEL_17;
  }
LABEL_165:
  v465 = v478;
  v484 = v22;
  if ( (unsigned __int64)v470 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_670;
  v433 = (__int64 *)operator new[](8LL * v470);
  v434 = (_QWORD *)operator new[](8LL * v470);
  v169 = v433;
  v170 = src;
  v22 = v484;
  v21 = (ClpPresolve *)v465;
  if ( v433 != src && v470 )
  {
    if ( v470 >> 3 <= 0 )
    {
      v175 = v433;
      v174 = src;
    }
    else
    {
      v171 = (unsigned int)((v470 >> 3) - 1);
      do
      {
        v172 = *v170;
        v170 += 8;
        v169 += 8;
        *(v169 - 8) = v172;
        *(v169 - 7) = *(v170 - 7);
        *(v169 - 6) = *(v170 - 6);
        *(v169 - 5) = *(v170 - 5);
        *(v169 - 4) = *(v170 - 4);
        *(v169 - 3) = *(v170 - 3);
        *(v169 - 2) = *(v170 - 2);
        *(v169 - 1) = *(v170 - 1);
      }
      while ( v170 != &src[8 * v171 + 8] );
      v173 = ((int)v171 + 1LL) << 6;
      v174 = (__int64 *)((char *)src + v173);
      v175 = (__int64 *)((char *)v433 + v173);
    }
    switch ( v470 % 8 )
    {
      case 1:
        goto LABEL_216;
      case 2:
        goto LABEL_215;
      case 3:
        goto LABEL_214;
      case 4:
        goto LABEL_213;
      case 5:
        goto LABEL_212;
      case 6:
        goto LABEL_211;
      case 7:
        v175[6] = v174[6];
LABEL_211:
        v175[5] = v174[5];
LABEL_212:
        v175[4] = v174[4];
LABEL_213:
        v175[3] = v174[3];
LABEL_214:
        v175[2] = v174[2];
LABEL_215:
        v175[1] = v174[1];
LABEL_216:
        *v175 = *v174;
        break;
      default:
        break;
    }
  }
  if ( v434 != v18 && v470 )
  {
    if ( v470 >> 3 <= 0 )
    {
      v192 = v434;
      v191 = v18;
    }
    else
    {
      v187 = v434;
      v188 = v18;
      do
      {
        v189 = *v188;
        v187 += 8;
        v188 += 8;
        *(v187 - 8) = v189;
        *(v187 - 7) = *(v188 - 7);
        *(v187 - 6) = *(v188 - 6);
        *(v187 - 5) = *(v188 - 5);
        *(v187 - 4) = *(v188 - 4);
        *(v187 - 3) = *(v188 - 3);
        *(v187 - 2) = *(v188 - 2);
        *(v187 - 1) = *(v188 - 1);
      }
      while ( v187 != &v434[8 * (unsigned int)((v470 >> 3) - 1) + 8] );
      v190 = ((v470 >> 3) - 1 + 1LL) << 6;
      v191 = (_QWORD *)((char *)v18 + v190);
      v192 = (_QWORD *)((char *)v434 + v190);
    }
    switch ( v470 % 8 )
    {
      case 1:
        goto LABEL_230;
      case 2:
        goto LABEL_229;
      case 3:
        goto LABEL_228;
      case 4:
        goto LABEL_227;
      case 5:
        goto LABEL_226;
      case 6:
        goto LABEL_225;
      case 7:
        v192[6] = v191[6];
LABEL_225:
        v192[5] = v191[5];
LABEL_226:
        v192[4] = v191[4];
LABEL_227:
        v192[3] = v191[3];
LABEL_228:
        v192[2] = v191[2];
LABEL_229:
        v192[1] = v191[1];
LABEL_230:
        *v192 = *v191;
        break;
      default:
        break;
    }
  }
  v415 = v491;
  if ( v467 )
  {
    if ( (unsigned __int64)v491 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_670;
    n = 8LL * v491;
    v422 = (CoinPackedMatrix *)operator new[](n);
    v421 = (CoinFactorization *)operator new[](n);
    v193 = v452;
    v194 = v422;
    v21 = (ClpPresolve *)v465;
    if ( v422 != v452 && v491 )
    {
      if ( v491 >> 3 <= 0 )
      {
        v198 = v452;
      }
      else
      {
        v195 = (unsigned int)((v491 >> 3) - 1);
        do
        {
          v196 = *(_QWORD *)v193;
          v194 = (CoinPackedMatrix *)((char *)v194 + 64);
          v193 = (CoinPackedMatrix *)((char *)v193 + 64);
          *((_QWORD *)v194 - 8) = v196;
          *((_QWORD *)v194 - 7) = *((_QWORD *)v193 - 7);
          *((_QWORD *)v194 - 6) = *((_QWORD *)v193 - 6);
          *((_QWORD *)v194 - 5) = *((_QWORD *)v193 - 5);
          *((_QWORD *)v194 - 4) = *((_QWORD *)v193 - 4);
          *((_QWORD *)v194 - 3) = *((_QWORD *)v193 - 3);
          *((_QWORD *)v194 - 2) = *((_QWORD *)v193 - 2);
          *((_QWORD *)v194 - 1) = *((_QWORD *)v193 - 1);
        }
        while ( v194 != (CoinPackedMatrix *)((char *)v422 + 64 * v195 + 64) );
        v197 = ((int)v195 + 1LL) << 6;
        v198 = (CoinPackedMatrix *)((char *)v452 + v197);
        v194 = (CoinPackedMatrix *)((char *)v422 + v197);
      }
      switch ( v491 % 8 )
      {
        case 1:
          goto LABEL_290;
        case 2:
          goto LABEL_289;
        case 3:
          goto LABEL_288;
        case 4:
          goto LABEL_287;
        case 5:
          goto LABEL_286;
        case 6:
          goto LABEL_285;
        case 7:
          *((_QWORD *)v194 + 6) = *((_QWORD *)v198 + 6);
LABEL_285:
          *((_QWORD *)v194 + 5) = *((_QWORD *)v198 + 5);
LABEL_286:
          *((_QWORD *)v194 + 4) = *((_QWORD *)v198 + 4);
LABEL_287:
          *((_QWORD *)v194 + 3) = *((_QWORD *)v198 + 3);
LABEL_288:
          *((_QWORD *)v194 + 2) = *((_QWORD *)v198 + 2);
LABEL_289:
          *((_QWORD *)v194 + 1) = *((_QWORD *)v198 + 1);
LABEL_290:
          *(_QWORD *)v194 = *(_QWORD *)v198;
          break;
        default:
          break;
      }
    }
    v218 = v421;
    v219 = (__int64 *)v471;
    if ( v421 != v471 && v491 )
    {
      if ( v491 >> 3 <= 0 )
      {
        v223 = v471;
      }
      else
      {
        v220 = (unsigned int)((v491 >> 3) - 1);
        do
        {
          v221 = *v219;
          v218 = (CoinFactorization *)((char *)v218 + 64);
          v219 += 8;
          *((_QWORD *)v218 - 8) = v221;
          *((_QWORD *)v218 - 7) = *(v219 - 7);
          *((_QWORD *)v218 - 6) = *(v219 - 6);
          *((_QWORD *)v218 - 5) = *(v219 - 5);
          *((_QWORD *)v218 - 4) = *(v219 - 4);
          *((_QWORD *)v218 - 3) = *(v219 - 3);
          *((_QWORD *)v218 - 2) = *(v219 - 2);
          *((_QWORD *)v218 - 1) = *(v219 - 1);
        }
        while ( v218 != (CoinFactorization *)((char *)v421 + 64 * v220 + 64) );
        v222 = ((int)v220 + 1LL) << 6;
        v223 = (_QWORD *)((char *)v471 + v222);
        v218 = (CoinFactorization *)((char *)v421 + v222);
      }
      switch ( v491 % 8 )
      {
        case 1:
          goto LABEL_304;
        case 2:
          goto LABEL_303;
        case 3:
          goto LABEL_302;
        case 4:
          goto LABEL_301;
        case 5:
          goto LABEL_300;
        case 6:
          goto LABEL_299;
        case 7:
          *((_QWORD *)v218 + 6) = v223[6];
LABEL_299:
          *((_QWORD *)v218 + 5) = v223[5];
LABEL_300:
          *((_QWORD *)v218 + 4) = v223[4];
LABEL_301:
          *((_QWORD *)v218 + 3) = v223[3];
LABEL_302:
          *((_QWORD *)v218 + 2) = v223[2];
LABEL_303:
          *((_QWORD *)v218 + 1) = v223[1];
LABEL_304:
          *(_QWORD *)v218 = *v223;
          break;
        default:
          break;
      }
    }
    v22 = fmax(v484, 0.00001 * (*(double *)(*(_QWORD *)v5 + 896LL) / (double)*(int *)(*(_QWORD *)v5 + 104LL)));
  }
  else
  {
    v421 = nullptr;
    v422 = nullptr;
    n = 8LL * v491;
  }
LABEL_18:
  if ( v489 < 0 )
  {
    v485 = (unsigned __int64)v21;
    *(double *)&v462 = v22;
    memset((void *)s, 0, n);
    v24 = v470;
    v25 = (ClpPresolve *)v485;
    if ( v470 <= 0 )
    {
      v420 = *(_DWORD *)(*(_QWORD *)v5 + 1308LL);
      v419 = *(_DWORD *)(*(_QWORD *)v5 + 336LL);
      ClpModel::setSpecialOptions(*(ClpModel **)v5, v419 | 0x2000);
      ClpSimplex::createStatus(*(ClpSimplex **)v5);
      v446 = 0;
      v87 = (ClpPresolve *)v485;
      v413 = v489;
      v464 = v470;
      goto LABEL_68;
    }
    v464 = v470;
    v446 = 0;
    v26 = *(double *)&v462;
    v413 = v489;
    goto LABEL_21;
  }
  v413 = v489 + v491;
  if ( v489 )
  {
    v455 = v21;
    *(double *)&v479 = v22;
    memset((void *)s, 0, n);
    v24 = v489;
    v25 = v455;
    v26 = *(double *)&v479;
    v446 = 0;
    v464 = v489;
LABEL_21:
    v447 = (size_t)v25;
    v441 = (ClpModel **)v5;
    v27 = 0;
    v28 = 4LL * v446;
    v456 = (ClpPresolve *)v446;
    v29 = 4LL * (unsigned int)(v24 - 1 - v446) + 4;
    v30 = v446;
    v31 = (char *)v25 + v28;
    v32 = v425 + v28;
    v33 = v19 + v30 * 8;
    v34 = (char *)&v18[v30];
    v35 = v29;
    do
    {
      v36 = *(double *)&v34[2 * v27];
      v37 = *(double *)(v33 + 2 * v27);
      a5.m128d_f64[0] = v36 + v26;
      if ( v36 + v26 > v37 )
      {
        *(double *)(v33 + 2 * v27) = v36;
        v37 = v36;
      }
      v38 = *(int *)&v31[v27];
      v39 = *(_DWORD *)(v32 + v27);
      if ( (int)v38 < (int)v38 + v39 )
      {
        v40 = v426 + 4 * v38;
        v41 = v14 + 8 * v38;
        v42 = 0;
        v43 = (unsigned int)(v39 - 1) + 1LL;
        do
        {
          v44 = *(int *)(v40 + 4 * v42);
          v45 = *(double *)(v41 + 8 * v42++);
          *(double *)(s + 8 * v44) = v45 * v37 + *(double *)(s + 8 * v44);
        }
        while ( v43 != v42 );
      }
      v27 += 4;
    }
    while ( v35 != v27 );
    v5 = (Idiot *)v441;
    v25 = (ClpPresolve *)v447;
    v46 = *v441;
    if ( v489 < 0 )
      goto LABEL_270;
    goto LABEL_29;
  }
  v466 = v21;
  *(double *)&v486 = v22;
  memset((void *)s, 0, n);
  v26 = *(double *)&v486;
  v25 = v466;
  if ( v491 < v470 )
  {
    v446 = v491;
    v464 = v470;
    v24 = v470;
    goto LABEL_21;
  }
  v46 = *(ClpModel **)v5;
  v464 = v470;
  v446 = v491;
LABEL_29:
  if ( v491 > 0 )
  {
    v47 = (__m128d)0x3FF0000000000000uLL;
    v48 = (unsigned int)(v491 - 1);
    v49 = 0;
    do
    {
      v50 = *(double *)(s + v49);
      a5 = (__m128d)*(unsigned __int64 *)((char *)v471 + v49);
      if ( v50 * v47.m128d_f64[0] > a5.m128d_f64[0] && v50 > 0.00000001 )
      {
        a5.m128d_f64[0] = a5.m128d_f64[0] / v50;
        v47 = a5;
      }
      v49 += 8;
    }
    while ( 8 * v48 + 8 != v49 );
    v51 = (s >> 3) & 1;
    if ( (unsigned int)v48 <= 1 )
    {
      v59 = 0;
    }
    else
    {
      v52 = 0;
      if ( (_DWORD)v51 )
      {
        v52 = 1;
        *(double *)s = *(double *)s * v47.m128d_f64[0];
      }
      v53 = 0;
      a5 = _mm_unpacklo_pd(v47, v47);
      v54 = v491 - v51;
      v55 = v491 - v51;
      v56 = (double *)(s + 8 * v51);
      v57 = 0;
      v58 = v55 >> 1;
      do
      {
        ++v53;
        *(__m128d *)&v56[v57] = _mm_mul_pd(*(__m128d *)&v56[v57], a5);
        v57 += 2;
      }
      while ( v53 < v58 );
      v59 = (v54 & 0xFFFFFFFE) + v52;
      if ( (v54 & 0xFFFFFFFE) == v54 )
      {
LABEL_43:
        if ( v446 >= v464 )
          goto LABEL_53;
LABEL_44:
        v456 = (ClpPresolve *)v446;
        v62 = v446;
        v63 = ((unsigned __int64)(v19 + 8LL * v446) >> 3) & 1;
        if ( (unsigned int)(v464 - 1 - v446) <= 1 )
          goto LABEL_50;
        if ( (_DWORD)v63 )
        {
          v62 = v446 + 1;
          *(double *)(v19 + 8LL * v446) = *(double *)(v19 + 8LL * v446) * v47.m128d_f64[0];
        }
        v64 = v464 - v446 - v63;
        v65 = 0;
        a5 = _mm_unpacklo_pd(v47, v47);
        v66 = v19 + 8 * (v446 + v63);
        v67 = 0;
        do
        {
          ++v65;
          *(__m128d *)(v66 + v67) = _mm_mul_pd(*(__m128d *)(v66 + v67), a5);
          v67 += 16;
        }
        while ( v65 < v64 >> 1 );
        v62 += v64 & 0xFFFFFFFE;
        if ( (v64 & 0xFFFFFFFE) != v64 )
        {
LABEL_50:
          v68 = v62;
          v69 = v62 + 1;
          *(double *)(v19 + 8 * v68) = *(double *)(v19 + 8 * v68) * v47.m128d_f64[0];
          if ( v69 < v464 )
            *(double *)(v19 + 8LL * v69) = v47.m128d_f64[0] * *(double *)(v19 + 8LL * v69);
        }
        if ( v491 > 0 )
        {
LABEL_53:
          v70 = 8LL * v489;
          if ( (v19 + v70 >= s + 16 || s >= v19 + v70 + 16)
            && ((unsigned __int64)v471 >= v19 + v70 + 16 || v19 + v70 >= (unsigned __int64)v471 + 16)
            && v491 > 14 )
          {
            v71 = ((unsigned __int64)v471 >> 3) & 1;
            if ( 2 - (unsigned int)((_DWORD)v71 == 0) > v491 - 1 )
            {
              v86 = 1;
              v82 = v471;
              *(double *)(v19 + 8LL * v489) = *(double *)v471 - *(double *)s;
LABEL_62:
              *(double *)(v19 + 8LL * (v489 + v86)) = *((double *)v82 + v86) - *(double *)(s + 8LL * v86);
              goto LABEL_63;
            }
            v72 = 0;
            if ( (_DWORD)v71 )
            {
              v72 = 1;
              *(double *)(v19 + 8LL * v489) = *(double *)v471 - *(double *)s;
            }
            v73 = v491 - v71;
            v74 = 8 * v71;
            v75 = (char *)v471 + v74;
            v76 = (double *)(v74 + s);
            v77 = v19 + v74 + v70;
            v78 = 0;
            v79 = v76;
            v80 = 0;
            do
            {
              ++v80;
              *(__m128d *)(v77 + v78 * 8) = _mm_sub_pd(*(__m128d *)&v75[v78 * 8], *(__m128d *)&v79[v78]);
              v78 += 2;
            }
            while ( v80 < v73 >> 1 );
            v81 = (v73 & 0xFFFFFFFE) + v72;
            if ( (v73 & 0xFFFFFFFE) != v73 )
            {
              v82 = v471;
              v83 = v81;
              v84 = *((double *)v471 + v81);
              v85 = v81 + v489;
              v86 = v81 + 1;
              *(double *)(v19 + 8LL * v85) = v84 - *(double *)(s + 8 * v83);
              if ( v491 > v86 )
                goto LABEL_62;
            }
          }
          else
          {
            v333 = 0;
            do
            {
              *(double *)(v19 + v70 + 8 * v333) = *((double *)v471 + v333) - *(double *)(s + 8 * v333);
              ++v333;
            }
            while ( v491 > (int)v333 );
          }
LABEL_63:
          v457 = v25;
          *(double *)&v480 = v26;
          v420 = *((_DWORD *)v46 + 327);
          v419 = *((_DWORD *)v46 + 84);
          ClpModel::setSpecialOptions(v46, v419 | 0x2000);
          ClpSimplex::createStatus(*(ClpSimplex **)v5);
          v87 = v457;
          if ( v446 >= v464 )
            goto LABEL_68;
          v88 = *(double *)&v480;
          v89 = (ClpPresolve *)v446;
          if ( v469 > 1 )
            goto LABEL_65;
          goto LABEL_271;
        }
LABEL_270:
        v450 = (size_t)v25;
        *(double *)&v487 = v26;
        v420 = *((_DWORD *)v46 + 327);
        v419 = *((_DWORD *)v46 + 84);
        ClpModel::setSpecialOptions(v46, v419 | 0x2000);
        ClpSimplex::createStatus(*(ClpSimplex **)v5);
        v88 = *(double *)&v487;
        v87 = (ClpPresolve *)v450;
        v89 = v456;
        if ( v469 > 1 )
        {
LABEL_65:
          v90 = v446;
          v91 = (double *)s;
          do
          {
            ++v90;
            v92 = (char *)v89 + *(_QWORD *)(*(_QWORD *)v5 + 264LL);
            v89 = (ClpPresolve *)((char *)v89 + 1);
            *v92 = *v92 & 0xF8 | 4;
          }
          while ( v464 > v90 );
LABEL_67:
          s = (unsigned __int64)v91;
          goto LABEL_68;
        }
LABEL_271:
        v91 = (double *)s;
        do
        {
          v216 = *(double *)(v19 + 8LL * (_QWORD)v89);
          a5.m128d_f64[0] = *(double *)&v18[(_QWORD)v89] + v88;
          if ( a5.m128d_f64[0] > v216 )
          {
            src[(_QWORD)v89] = v18[(_QWORD)v89];
            *(_QWORD *)(v19 + 8LL * (_QWORD)v89) = v18[(_QWORD)v89];
          }
          else
          {
            a5.m128d_f64[0] = *(double *)&src[(_QWORD)v89] - v88;
            if ( v216 > a5.m128d_f64[0] )
            {
              v18[(_QWORD)v89] = src[(_QWORD)v89];
              *(_QWORD *)(v19 + 8LL * (_QWORD)v89) = src[(_QWORD)v89];
            }
          }
          v215 = (char *)v89 + *(_QWORD *)(*(_QWORD *)v5 + 264LL);
          v89 = (ClpPresolve *)((char *)v89 + 1);
          *v215 = *v215 & 0xF8 | 4;
        }
        while ( v464 > (int)v89 );
        goto LABEL_67;
      }
    }
    v60 = v59;
    v61 = v59 + 1;
    *(double *)(s + 8 * v60) = *(double *)(s + 8 * v60) * v47.m128d_f64[0];
    if ( v491 > v61 )
      *(double *)(s + 8LL * v61) = *(double *)(s + 8LL * v61) * v47.m128d_f64[0];
    goto LABEL_43;
  }
  if ( v446 < v464 )
  {
    v47 = (__m128d)0x3FF0000000000000uLL;
    goto LABEL_44;
  }
  v488 = (unsigned __int64)v25;
  v420 = *((_DWORD *)v46 + 327);
  v390 = *((_DWORD *)v46 + 84);
  v419 = v390;
  BYTE1(v390) |= 0x20u;
  ClpModel::setSpecialOptions(v46, v390);
  ClpSimplex::createStatus(*(ClpSimplex **)v5);
  v87 = (ClpPresolve *)v488;
LABEL_68:
  if ( (*((_BYTE *)v5 + 145) & 0x40) == 0 )
    goto LABEL_117;
  v458 = v87;
  v442 = (int *)(*((_QWORD *)v5 + 13) + 4LL * v470);
  v93 = (__int64)&v442[v415 + v415];
  v448 = (size_t)&v442[v415];
  if ( (unsigned __int64)v470 > 0xFFFFFFFFFFFFFFFLL )
LABEL_670:
    __cxa_throw_bad_array_new_length();
  v417 = (double *)operator new[](8LL * v470);
  v428 = (int *)operator new[](4LL * v470);
  v94 = v458;
  if ( v491 <= 0 )
    goto LABEL_116;
  v95 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  v96 = src;
  v97 = (double *)s;
  v98 = v95;
  v99 = _mm_loadl_epi64((const __m128i *)&xmmword_289BF0);
  sa = v458;
  v100 = v5;
  v101 = 0;
  v481 = (unsigned __int64)v97;
  do
  {
    v102 = v442[v101];
    v103 = *(_DWORD *)(v448 + 4 * v101);
    if ( (int)v102 >= 0 )
    {
      a5.m128d_f64[0] = 0.0;
      v176 = 4LL * (int)v102;
      v104 = 0;
      v105 = *(double *)(v14 + 8LL * *(int *)((char *)sa + v176)) * *(double *)(v19 + 8LL * (int)v102) + 0.0;
      if ( *(double *)&v18[(int)v102] == 0.0 )
      {
        while ( 1 )
        {
          v177 = *(int *)(v93 + v176);
          ++v104;
          if ( (int)v177 < 0 )
            break;
          v176 = 4 * v177;
          v105 = v105 + *(double *)(v14 + 8LL * *((int *)sa + v177)) * *(double *)(v19 + 8 * v177);
          if ( *(double *)&v18[v177] != 0.0 )
            goto LABEL_176;
        }
        v459 = 1;
      }
      else
      {
LABEL_176:
        v459 = 0;
      }
      if ( v103 < 0 )
      {
        v107 = 0;
        goto LABEL_80;
      }
    }
    else
    {
      if ( v103 < 0 )
        goto LABEL_114;
      a5.m128d_f64[0] = 0.0;
      v104 = 0;
      v459 = 1;
      v105 = 0.0;
    }
    v106 = 4LL * v103;
    v107 = 0;
    v108 = *(double *)&v18[v103] == 0.0;
    v105 = v105 + *(double *)(v14 + 8LL * *(int *)((char *)sa + v106)) * *(double *)(v19 + 8LL * v103);
    while ( v108 )
    {
      v109 = *(int *)(v93 + v106);
      ++v107;
      if ( (int)v109 < 0 )
        goto LABEL_80;
      v106 = 4 * v109;
      v108 = *(double *)&v18[v109] == 0.0;
      v105 = v105 + *(double *)(v14 + 8LL * *((int *)sa + v109)) * *(double *)(v19 + 8 * v109);
    }
    v459 = 0;
LABEL_80:
    v110 = *(double *)(v481 + 8 * v101);
    v111 = *((double *)v471 + v101);
    if ( (v110 - v111 < 0.0000001 || *((double *)v452 + v101) - v110 < 0.0000001) && v107 + v104 <= 1 )
    {
      v182 = 0;
      if ( (int)v102 >= 0 )
        goto LABEL_197;
      if ( v103 < 0 )
        goto LABEL_114;
      v183 = sa;
      goto LABEL_203;
    }
    if ( !v459 )
    {
      v182 = 0;
      if ( (int)v102 >= 0 )
      {
LABEL_197:
        v183 = sa;
        do
        {
          v184 = *(double *)(v19 + 8 * v102);
          a5.m128d_f64[0] = *(double *)&v18[v102] + 0.00000001;
          if ( v184 > a5.m128d_f64[0] )
          {
            a5.m128d_f64[0] = *(double *)&v96[v102] - 0.00000001;
            if ( a5.m128d_f64[0] > v184 )
            {
              ++v182;
              *(_BYTE *)(v102 + *(_QWORD *)(*(_QWORD *)v100 + 264LL)) = *(_BYTE *)(v102
                                                                                 + *(_QWORD *)(*(_QWORD *)v100 + 264LL))
                                                                      & 0xF8
                                                                      | 1;
            }
          }
          v102 = *(int *)(v93 + 4 * v102);
        }
        while ( (int)v102 >= 0 );
        v103 = *(_DWORD *)(v448 + 4 * v101);
        if ( v103 < 0 )
          goto LABEL_208;
        goto LABEL_203;
      }
      if ( v103 < 0 )
        goto LABEL_114;
      v183 = sa;
      do
      {
LABEL_203:
        v185 = *(double *)(v19 + 8LL * v103);
        a5.m128d_f64[0] = *(double *)&v18[v103] + 0.00000001;
        if ( v185 > a5.m128d_f64[0] )
        {
          a5.m128d_f64[0] = *(double *)&v96[v103] - 0.00000001;
          if ( a5.m128d_f64[0] > v185 )
          {
            ++v182;
            v186 = (_BYTE *)(v103 + *(_QWORD *)(*(_QWORD *)v100 + 264LL));
            *v186 = *v186 & 0xF8 | 1;
          }
        }
        v103 = *(_DWORD *)(v93 + 4LL * v103);
      }
      while ( v103 >= 0 );
      sa = v183;
LABEL_208:
      if ( !v182 )
        goto LABEL_114;
      v128 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)v100 + 264LL) + *(_DWORD *)(*(_QWORD *)v100 + 108LL) + (int)v101);
      *(_QWORD *)&v129 = COERCE_UNSIGNED_INT64(*(double *)(v481 + 8 * v101) - *((double *)v471 + v101))
                       & v95.m128i_i64[0];
      *(_QWORD *)&v130 = COERCE_UNSIGNED_INT64(*(double *)(v481 + 8 * v101) - *((double *)v452 + v101))
                       & v95.m128i_i64[0];
      v131 = *v128 & 0xF8;
      goto LABEL_111;
    }
    v112 = v110 - v105;
    v113 = v112;
    if ( v111 > -1.0e20 )
      v111 = v111 - v112;
    v114 = *((double *)v452 + v101);
    if ( v114 < 1.0e20 )
      v114 = v114 - v113;
    v115 = (int)v102;
    if ( (int)v102 < 0 )
    {
      if ( v103 < 0 )
      {
        if ( v111 > 0.0 )
        {
LABEL_547:
          v397 = v100;
          v402 = v96;
          v405 = v99;
          v410 = v98;
          CoinSort_2<double,int>(v417, v417, v428);
          v96 = v402;
          v100 = v397;
          *(double *)(v481 + 8 * v101) = v113;
          v98 = v410;
          v99 = v405;
          goto LABEL_114;
        }
        goto LABEL_242;
      }
    }
    else
    {
      do
      {
        *(_QWORD *)(v19 + 8 * v115) = 0;
        v115 = *(int *)(v93 + 4 * v115);
      }
      while ( (int)v115 >= 0 );
      if ( v103 < 0 )
        goto LABEL_94;
    }
    v116 = v103;
    do
    {
      *(_QWORD *)(v19 + 8 * v116) = 0;
      v116 = *(int *)(v93 + 4 * v116);
    }
    while ( (int)v116 >= 0 );
    if ( (int)v102 < 0 )
    {
LABEL_97:
      v118 = v103;
      do
        LODWORD(v118) = *(_DWORD *)(v93 + 4 * v118);
      while ( (int)v118 >= 0 );
      goto LABEL_99;
    }
LABEL_94:
    v117 = (int)v102;
    do
      LODWORD(v117) = *(_DWORD *)(v93 + 4 * v117);
    while ( (int)v117 >= 0 );
    if ( v103 >= 0 )
      goto LABEL_97;
LABEL_99:
    if ( v111 > 0.0 )
    {
      if ( (int)v102 < 0 )
        goto LABEL_547;
      for ( i = 1; ; ++i )
      {
        v120 = *(double *)(v423 + 8LL * (int)v102) / *(double *)(v14 + 8LL * *((int *)sa + (int)v102));
        v428[i - 1] = v102;
        LODWORD(v102) = *(_DWORD *)(v93 + 4LL * (int)v102);
        v417[i - 1] = v120;
        if ( (int)v102 < 0 )
          break;
      }
      v392 = v99;
      v399 = i;
      v394 = v98;
      v407 = v96;
      v460 = v100;
      CoinSort_2<double,int>(v417, &v417[(int)i], v428);
      v121 = sa;
      v96 = v407;
      v100 = v460;
      v122 = *v428;
      v98 = v394;
      v123 = 8 * v122;
      v124 = *(double *)&v407[v122];
      v99 = v392;
      a5.m128d_f64[0] = *(double *)(v14 + 8LL * *((int *)sa + v122));
      v125 = v124 * a5.m128d_f64[0];
      if ( v111 >= v124 * a5.m128d_f64[0] )
      {
        v126 = v428 + 1;
        while ( 1 )
        {
          v111 = v111 - v125;
          *(double *)(v19 + v123) = v124;
          v113 = v113 + v125;
          if ( v111 < 0.0000001 || &v428[v399 - 1 + 1] == v126 )
            break;
          v122 = *v126++;
          v124 = *(double *)&v407[v122];
          a5.m128d_f64[0] = *(double *)(v14 + 8LL * *((int *)sa + v122));
          v123 = 8 * v122;
          v125 = v124 * a5.m128d_f64[0];
          if ( v111 < v124 * a5.m128d_f64[0] )
            goto LABEL_109;
        }
LABEL_306:
        sa = v121;
LABEL_243:
        *(double *)(v481 + 8 * v101) = v113;
        goto LABEL_114;
      }
LABEL_109:
      v127 = v113 + v111;
      *(double *)(v19 + v123) = v111 / a5.m128d_f64[0];
      goto LABEL_110;
    }
LABEL_242:
    if ( v114 >= 0.0 )
      goto LABEL_243;
    *(_QWORD *)&v334 = *(_QWORD *)&v114 ^ v99.m128i_i64[0];
    if ( v103 < 0 )
    {
      v398 = v100;
      v403 = v96;
      v406 = v99;
      v411 = v98;
      CoinSort_2<double,int>(v417, v417, v428);
      v96 = v403;
      v100 = v398;
      v98 = v411;
      v99 = v406;
      goto LABEL_243;
    }
    for ( j = 1; ; ++j )
    {
      v336 = *(double *)(v423 + 8LL * v103);
      v337 = *(_QWORD *)(v14 + 8LL * *((int *)sa + v103));
      v428[j - 1] = v103;
      v103 = *(_DWORD *)(v93 + 4LL * v103);
      v417[j - 1] = v336 / COERCE_DOUBLE(v337 ^ v99.m128i_i64[0]);
      if ( v103 < 0 )
        break;
    }
    v393 = v99;
    v400 = j;
    v395 = v98;
    v409 = v96;
    v463 = v100;
    CoinSort_2<double,int>(v417, &v417[(int)j], v428);
    v121 = sa;
    v99 = v393;
    v96 = v409;
    v100 = v463;
    v122 = *v428;
    v338 = *(double *)&v409[v122];
    v339 = 8 * v122;
    v98 = v395;
    *(_QWORD *)&a5.m128d_f64[0] = *(_QWORD *)(v14 + 8LL * *((int *)sa + v122)) ^ v393.m128i_i64[0];
    v340 = a5.m128d_f64[0] * v338;
    if ( v334 >= a5.m128d_f64[0] * v338 )
    {
      v341 = v428 + 1;
      do
      {
        v334 = v334 - v340;
        *(double *)(v19 + v339) = v338;
        v113 = v113 + v340;
        if ( v334 < 0.0000001 || &v428[v400 - 1 + 1] == v341 )
          goto LABEL_306;
        v122 = *v341++;
        v338 = *(double *)&v409[v122];
        v339 = 8 * v122;
        *(_QWORD *)&a5.m128d_f64[0] = *(_QWORD *)(v14 + 8LL * *((int *)sa + v122)) ^ v393.m128i_i64[0];
        v340 = v338 * a5.m128d_f64[0];
      }
      while ( v334 >= v338 * a5.m128d_f64[0] );
    }
    v127 = v113 + v334;
    *(double *)(v19 + v339) = v334 / a5.m128d_f64[0];
LABEL_110:
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v100 + 264LL) + v122) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v100 + 264LL) + v122)
                                                            & 0xF8
                                                            | 1;
    *(double *)(v481 + 8 * v101) = v127;
    v128 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)v100 + 264LL) + *(_DWORD *)(*(_QWORD *)v100 + 108LL) + (int)v101);
    *(_QWORD *)&v129 = COERCE_UNSIGNED_INT64(v127 - *((double *)v471 + v101)) & v98.m128i_i64[0];
    *(_QWORD *)&v130 = COERCE_UNSIGNED_INT64(v127 - *((double *)v452 + v101)) & v98.m128i_i64[0];
    v131 = *v128 & 0xF8;
LABEL_111:
    v132 = v131;
    v133 = v131 | 2;
    v134 = v132 | 3;
    if ( v130 > v129 )
      v133 = v134;
    *v128 = v133;
LABEL_114:
    ++v101;
  }
  while ( (unsigned int)(v491 - 1) + 1LL != v101 );
  v5 = v100;
  v94 = sa;
  s = v481;
LABEL_116:
  v482 = (unsigned __int64)v94;
  operator delete[](v417);
  operator delete[](v428);
  v87 = (ClpPresolve *)v482;
LABEL_117:
  v135 = *(ClpModel **)v5;
  v136 = -1.0;
  if ( **(double **)v5 != -1.0 )
    v136 = 1.0;
  v137 = 0;
  v461 = *((_DWORD *)v5 + 30);
  if ( v489 >= 0 )
  {
    if ( v491 > 0 )
    {
      do
      {
        v138 = v137 + *((_DWORD *)v135 + 27);
        ++v137;
        *(_BYTE *)(*((_QWORD *)v135 + 33) + v138) = *(_BYTE *)(*((_QWORD *)v135 + 33) + v138) & 0xF8 | 4;
        v135 = *(ClpModel **)v5;
      }
      while ( v137 != v491 );
    }
    if ( v489 < v413 )
    {
      v139 = v489;
      for ( k = v489 + 1LL; ; ++k )
      {
        *(_BYTE *)(*((_QWORD *)v135 + 33) + v139) = *(_BYTE *)(*((_QWORD *)v135 + 33) + v139) & 0xF8 | 1;
        v139 = k;
        v135 = *(ClpModel **)v5;
        if ( v489 + 1LL + (unsigned int)(~v489 + v413) == k )
          break;
      }
    }
    goto LABEL_126;
  }
  if ( v491 > 0 )
  {
    while ( 1 )
    {
      v199 = v137 + *((_DWORD *)v135 + 27);
      ++v137;
      *(_BYTE *)(*((_QWORD *)v135 + 33) + v199) = *(_BYTE *)(*((_QWORD *)v135 + 33) + v199) & 0xF8 | 1;
      if ( v137 == v491 )
        break;
      v135 = *(ClpModel **)v5;
    }
    v135 = *(ClpModel **)v5;
  }
  if ( v470 > 0 )
  {
    v200 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v425 + 4 * v200) == 1 )
      {
        v201 = *(double *)&v18[v200];
        v202 = *(double *)&src[v200];
        if ( v202 > v201 + 0.00001 )
          break;
      }
LABEL_251:
      if ( (unsigned int)(v470 - 1) + 1LL == ++v200 )
        goto LABEL_126;
    }
    v203 = *((int *)v87 + v200);
    v204 = *(double *)(v19 + 8 * v200);
    v205 = *(int *)(v426 + 4 * v203);
    v206 = *(double *)(v14 + 8 * v203);
    v207 = *((double *)v471 + v205);
    v208 = *(_DWORD *)(v426 + 4 * v203);
    v209 = *((double *)v452 + v205);
    v210 = (double *)(s + 8 * v205);
    v211 = *v210;
    if ( *v210 > v209 )
    {
      v212 = (v209 - v211) / v206;
      v213 = v204 + v212;
      if ( v206 > 0.0 )
      {
        if ( v201 > v213 )
          goto LABEL_257;
LABEL_258:
        *v210 = v211 + v206 * v212;
        a5.m128d_f64[0] = v212 + *(double *)(v19 + 8 * v200);
        *(double *)(v19 + 8 * v200) = a5.m128d_f64[0];
        if ( v209 - v207 < 0.0000001 )
        {
          v214 = (_BYTE *)(*((_QWORD *)v135 + 33) + *((_DWORD *)v135 + 27) + v208);
          if ( (*v214 & 7) == 1 )
          {
            *v214 = *v214 & 0xF8 | 4;
            *(_BYTE *)(v200 + *(_QWORD *)(*(_QWORD *)v5 + 264LL)) = *(_BYTE *)(v200 + *(_QWORD *)(*(_QWORD *)v5 + 264LL))
                                                                  & 0xF8
                                                                  | 1;
            v135 = *(ClpModel **)v5;
          }
        }
        goto LABEL_251;
      }
      if ( v213 <= v202 )
        goto LABEL_258;
LABEL_283:
      v212 = fmax(0.0, v202 - v204);
      goto LABEL_258;
    }
    if ( v207 <= v211 )
    {
      v342 = *(double *)(v423 + 8 * v200) * v136;
      if ( v342 <= 0.0 )
      {
        if ( v342 >= 0.0 )
        {
          v212 = 0.0;
          goto LABEL_258;
        }
        if ( v206 > 0.0 )
        {
          v212 = (v209 - v211) / v206;
          if ( v204 + v212 <= v202 )
            goto LABEL_258;
          goto LABEL_283;
        }
        v212 = (v207 - v211) / v206;
        if ( v201 <= v204 + v212 )
          goto LABEL_258;
      }
      else
      {
        if ( v206 <= 0.0 )
        {
          v212 = (v209 - v211) / v206;
          if ( v204 + v212 <= v202 )
            goto LABEL_258;
          goto LABEL_283;
        }
        v212 = (v207 - v211) / v206;
        if ( v201 <= v204 + v212 )
          goto LABEL_258;
      }
    }
    else
    {
      v212 = (v207 - v211) / v206;
      v217 = v204 + v212;
      if ( v206 > 0.0 )
      {
        if ( v217 <= v202 )
          goto LABEL_258;
        goto LABEL_283;
      }
      if ( v201 <= v217 )
        goto LABEL_258;
    }
LABEL_257:
    v212 = fmin(0.0, v201 - v204);
    goto LABEL_258;
  }
LABEL_126:
  v141 = *((const void **)v135 + 24);
  v490 = 0;
  if ( v141 )
  {
    v142 = __dynamic_cast(
             v141,
             (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
             (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
             0);
    if ( v142 )
      v490 = (v142[25] & 0x10) != 0;
  }
  v143 = *((_DWORD *)v5 + 36);
  v144 = v467;
  v483 = 1;
  if ( (v143 & 0x8000) != 0 )
    v144 = 1;
  v468 = v144;
  if ( (v143 & 0x10000) == 0 )
    v483 = v461 > 1000000;
  if ( v469 > 2 )
    goto LABEL_195;
  ClpPresolve::ClpPresolve((ClpPresolve *)v501);
  if ( !v445 )
  {
    v178 = *(ClpModel **)v5;
    sc = nullptr;
    goto LABEL_180;
  }
  if ( v415 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v145 = (double *)operator new[](n);
  v146 = 2 * v470;
  if ( v146 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v443 = (char *)operator new[](8 * v146);
  v449 = 8LL * v470;
  memcpy(v443, v18, v449);
  memcpy(&v443[v449], src, v449);
  v147 = *(ClpModel **)v5;
  if ( v144 )
  {
    v148 = *((double **)v147 + 16);
    v437 = v148;
    if ( v491 > 0 )
    {
      if ( (v148 >= v145 + 2 || v145 >= v148 + 2) && (unsigned int)v491 > 0xD )
      {
        v149 = 0;
        v150 = ((unsigned __int64)v148 >> 3) & 1;
        if ( (((unsigned __int64)v148 >> 3) & 1) != 0 )
        {
          v149 = v445;
          *v145 = fabs(*v148);
        }
        v151 = 0;
        v152 = v491 - v150;
        v153 = ((unsigned __int64)v148 >> 3) & 1;
        v154 = (unsigned int)(v491 - v150) >> 1;
        v155 = &v437[v153];
        v156 = &v145[v153];
        v157 = 0;
        do
        {
          ++v151;
          *(__m128d *)&v156[v157] = _mm_and_pd(*(__m128d *)&v155[v157], (__m128d)xmmword_28E010);
          v157 += 2;
        }
        while ( v151 < v154 );
        v158 = (v152 & 0xFFFFFFFE) + v149;
        if ( (v152 & 0xFFFFFFFE) != v152 )
        {
          v159 = v158;
          v160 = v158 + 1;
          v145[v159] = fabs(v437[v159]);
          if ( v491 > v160 )
            v145[v160] = fabs(v437[v160]);
        }
      }
      else
      {
        v389 = 0;
        do
        {
          v145[v389 / 8] = fabs(v148[v389 / 8]);
          v389 += 8LL;
        }
        while ( 8LL * (unsigned int)(v491 - 1) + 8 != v389 );
      }
    }
    v161 = &v145[(unsigned __int64)n / 8];
    if ( &v145[(unsigned __int64)n / 8] != v145 )
    {
      _BitScanReverse64(&v162, n >> 3);
      sub_19A6F0(v145, (char *)&v145[(unsigned __int64)n / 8], 2 * (63LL - (int)(v162 ^ 0x3F)));
      v163 = (CoinFactorization *)(v145 + 1);
      if ( n > 128 )
      {
        v355 = v145 + 16;
        sf = v145 + 1;
        v356 = v145 + 1;
        do
        {
          v357 = *v356;
          if ( *v145 > *v356 )
          {
            if ( v356 != v145 )
            {
              v432 = v355;
              v476 = v163;
              memmove(v163, v145, (char *)v356 - (char *)v145);
              v355 = v432;
              v163 = v476;
            }
            *v145 = v357;
          }
          else
          {
            v358 = v356;
            v359 = v356 - 1;
            v360 = *(v358 - 1);
            if ( v360 > v357 )
            {
              while ( 1 )
              {
                v359[1] = v360;
                v360 = *(v359 - 1);
                if ( v360 <= v357 )
                  break;
                --v359;
              }
              sf = v358;
            }
            else
            {
              v359 = v358;
            }
            *v359 = v357;
          }
          v356 = ++sf;
        }
        while ( v355 != sf );
        v234 = sf;
        v147 = *(ClpModel **)v5;
        if ( v161 != sf )
        {
          do
          {
            v386 = *v234;
            v387 = v234 - 1;
            v388 = *(v234 - 1);
            if ( v388 > *v234 )
            {
              while ( 1 )
              {
                v387[1] = v388;
                v388 = *(v387 - 1);
                if ( v388 <= v386 )
                  break;
                --v387;
              }
            }
            else
            {
              v387 = v234;
            }
            *v387 = v386;
            v108 = v161 == ++v234;
          }
          while ( !v108 );
        }
      }
      else
      {
        v147 = *(ClpModel **)v5;
        if ( v161 != (double *)v163 )
        {
          v164 = v145 + 1;
          sb = v145 + 1;
          do
          {
            v165 = *v164;
            if ( *v145 > *v164 )
            {
              if ( v164 != v145 )
              {
                v429 = v147;
                v472 = v163;
                memmove(v163, v145, (char *)v164 - (char *)v145);
                v147 = v429;
                v163 = v472;
              }
              *v145 = v165;
            }
            else
            {
              v166 = v164;
              v167 = v164 - 1;
              v168 = *(v166 - 1);
              if ( v168 > v165 )
              {
                while ( 1 )
                {
                  v167[1] = v168;
                  v168 = *(v167 - 1);
                  if ( v168 <= v165 )
                    break;
                  --v167;
                }
                sb = v166;
              }
              else
              {
                v167 = v166;
              }
              *v167 = v165;
            }
            v164 = ++sb;
          }
          while ( v161 != sb );
        }
      }
    }
    a5.m128d_f64[0] = v145[(unsigned __int64)n / 8 - 1];
    v235 = 0.00001 * a5.m128d_f64[0];
    v473 = 0.00001 * a5.m128d_f64[0];
    if ( 0.00001 * a5.m128d_f64[0] < 0.0001 )
    {
      v473 = 0.0001;
      sd = 0.01;
    }
    else if ( v235 < 0.01 )
    {
      sd = 100.0 * v235;
    }
    else
    {
      v473 = 0.01;
      sd = 1.0;
    }
    v236 = *((char **)v147 + 19);
    v453 = *((CoinPackedMatrix **)v147 + 18);
    if ( v491 <= 0 )
    {
LABEL_340:
      v241 = v491;
      v242 = 0;
      v243 = 0;
    }
    else
    {
      v237 = *v145;
      if ( *v145 >= v473 )
      {
        v241 = -1;
        v240 = 0;
      }
      else
      {
        v238 = *((CoinPackedMatrix **)v147 + 18);
        v239 = 1;
        do
        {
          v240 = v239;
          if ( (unsigned int)(v491 - 1) + 1LL == v239 )
          {
            v453 = v238;
            goto LABEL_340;
          }
          v237 = v145[v239++];
        }
        while ( v237 < v473 );
        v453 = v238;
        v241 = v240 - 1;
      }
      if ( v237 >= sd )
      {
        v354 = v241;
        v242 = 0;
LABEL_544:
        v243 = v491 - v354;
      }
      else
      {
        v351 = v240 + 1;
        v352 = &v145[v240 - v351];
        while ( 1 )
        {
          v353 = v351;
          if ( (int)v351 >= v491 )
            break;
          if ( v352[++v351] >= sd )
          {
            v354 = v353 - 1;
            v242 = v353 - 1 - v241;
            goto LABEL_544;
          }
        }
        v243 = 0;
        v242 = v491 - v241;
      }
    }
    *(double *)&v244 = sd;
    printf("%d < %g, %d < %g, %d <= %g\n", v241, v473, v242, sd, v243, a5.m128d_f64[0]);
    memset(v145, 0, n);
    if ( v470 > 0 )
    {
      v245 = 0;
      v246 = 8LL * (unsigned int)(v470 - 1) + 8;
      a5.m128d_f64[0] = 0.00000001;
      v247 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          *(_QWORD *)&v244 = v18[v247 / 8];
          v248 = *(double *)(v19 + v247);
          if ( *(double *)&v244 + 0.00000001 <= v248 )
            break;
          src[v247 / 8] = v244;
          ++v245;
          *(_QWORD *)(v19 + v247) = v18[v247 / 8];
LABEL_344:
          v247 += 8LL;
          if ( v246 == v247 )
            goto LABEL_348;
        }
        *(_QWORD *)&v244 = src[v247 / 8];
        if ( v248 <= *(double *)&v244 - 0.00000001 )
          goto LABEL_344;
        v18[v247 / 8] = v244;
        ++v245;
        *(_QWORD *)(v19 + v247) = v244;
        v247 += 8LL;
        if ( v246 == v247 )
        {
LABEL_348:
          v430 = v245;
          goto LABEL_349;
        }
      }
    }
    v430 = 0;
LABEL_349:
    (*(void (__fastcall **)(_QWORD, __int64, double *, double))(**(_QWORD **)(*(_QWORD *)v5 + 192LL) + 360LL))(
      *(_QWORD *)(*(_QWORD *)v5 + 192LL),
      v19,
      v145,
      1.0);
    if ( v236 )
    {
      v422 = (CoinPackedMatrix *)operator new[](n);
      memcpy(v422, v236, n);
    }
    else
    {
      v422 = nullptr;
    }
    if ( v453 )
    {
      v421 = (CoinFactorization *)operator new[](n);
      memcpy(v421, v453, n);
    }
    else
    {
      v421 = nullptr;
    }
    if ( v491 <= 0 )
    {
      v249 = 0.0;
      v255 = 0;
      v256 = 0;
    }
    else
    {
      v249 = 0.0;
      v250 = 0;
      do
      {
        v251 = v145[v250 / 8];
        v252 = *(double *)&v236[v250];
        if ( v251 > v252 )
          v249 = v249 + v251 - v252;
        v253 = *(double *)((char *)v453 + v250);
        if ( v253 > v251 )
          v249 = v249 + v253 - v251;
        v250 += 8LL;
      }
      while ( 8LL * (unsigned int)(v491 - 1) + 8 != v250 );
      v254 = 0;
      v255 = 0;
      v256 = 0;
      v257 = fmin(0.001, v249 / (double)v491 * 0.1);
      do
      {
        v259 = *((double *)v453 + v254);
        v258 = *(double *)&v236[8 * v254];
        *(double *)&v244 = v145[v254];
        if ( v258 > v259 + v257 )
        {
          v260 = v437[v254];
          if ( -sd <= v260 || v257 <= v258 - *(double *)&v244 )
          {
            if ( v260 <= sd || v257 <= *(double *)&v244 - v259 )
            {
              if ( v473 > fabs(v260) && *(double *)&v244 - v259 > v257 )
                v255 += v258 - *(double *)&v244 > v257;
            }
            else
            {
              *((_QWORD *)v453 + v254) = v244;
              v258 = *(double *)&v244;
              *(_QWORD *)&v236[8 * v254] = v244;
              ++v256;
              *(double *)&v244 = v145[v254];
            }
          }
          else
          {
            *(_QWORD *)&v236[8 * v254] = v244;
            ++v256;
            *((_QWORD *)v453 + v254) = v244;
            *(double *)&v244 = v145[v254];
            v258 = *(double *)&v236[8 * v254];
          }
        }
        if ( *(double *)&v244 > v258 )
        {
          *(_QWORD *)&v236[8 * v254] = v244;
          *(double *)&v244 = v145[v254];
        }
        a5.m128d_f64[0] = *((double *)v453 + v254);
        if ( a5.m128d_f64[0] > *(double *)&v244 )
          *((_QWORD *)v453 + v254) = v244;
        ++v254;
      }
      while ( v491 > (int)v254 );
    }
    sprintf(
      v503,
      "sum of infeasibilities %g - %d fixed rows, %d fixed columns - might free %d rows",
      v249,
      v256,
      v430,
      v255);
  }
  else
  {
    se = *(ClpModel **)v5;
    memset(v145, 0, n);
    if ( v470 <= 0 )
    {
      v347 = 0;
    }
    else
    {
      v343 = 0;
      a5.m128d_f64[0] = 0.00000001;
      v344 = 0;
      do
      {
        v345 = *(double *)(v19 + v344);
        if ( *(double *)&v18[v344 / 8] + 0.00000001 > v345 )
        {
          src[v344 / 8] = v18[v344 / 8];
          ++v343;
          *(_QWORD *)(v19 + v344) = v18[v344 / 8];
        }
        else
        {
          v346 = *(double *)&src[v344 / 8];
          if ( v345 > v346 - 0.00000001 )
          {
            *(double *)&v18[v344 / 8] = v346;
            ++v343;
            *(double *)(v19 + v344) = v346;
          }
        }
        v344 += 8LL;
      }
      while ( 8LL * (unsigned int)(v470 - 1) + 8 != v344 );
      v347 = v343;
    }
    (*(void (__fastcall **)(_QWORD, __int64, double *, double))(**((_QWORD **)se + 24) + 360LL))(
      *((_QWORD *)se + 24),
      v19,
      v145,
      1.0);
    if ( v491 <= 0 )
    {
      v249 = 0.0;
    }
    else
    {
      v249 = 0.0;
      v348 = 0;
      do
      {
        v349 = v145[v348 / 8];
        v350 = *(double *)((char *)v452 + v348);
        if ( v349 > v350 )
          v249 = v249 + v349 - v350;
        a5.m128d_f64[0] = *(double *)((char *)v471 + v348);
        if ( a5.m128d_f64[0] > v349 )
        {
          a5.m128d_f64[0] = a5.m128d_f64[0] - v349;
          v249 = v249 + a5.m128d_f64[0];
        }
        v348 += 8LL;
      }
      while ( 8LL * (unsigned int)(v491 - 1) + 8 != v348 );
    }
    *(double *)&v244 = v249 / (double)v491;
    sprintf(v503, "sum of infeasibilities %g - average %g, %d fixed columns", v249, *(double *)&v244, v347);
  }
  v281 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *(CoinMessageHandler **)(*(_QWORD *)v5 + 344LL),
                                 92,
                                 (const CoinMessages *)(*(_QWORD *)v5 + 416LL));
  v286 = CoinMessageHandler::operator<<(v281, (__int64)v503, v282, v283, v284, v285, v391);
  CoinMessageHandler::operator<<(v286, 0, v249);
  operator delete[](v145);
  v287 = *(void ***)v5;
  sc = *(ClpModel **)v5;
  v502 |= 0x4000u;
  *(_QWORD *)v5 = ClpPresolve::presolvedModel(
                    (ClpPresolve *)v501,
                    (ClpSimplex *)v287,
                    0.00000001,
                    0,
                    5,
                    0,
                    0,
                    nullptr,
                    nullptr);
  memcpy(v287[22], v443, v449);
  memcpy(v287[23], &v443[v449], v449);
  operator delete[](v443);
  v178 = *(ClpModel **)v5;
  if ( !*(_QWORD *)v5 )
    goto LABEL_374;
  if ( (*((_BYTE *)v5 + 146) & 4) != 0 )
  {
    v288 = *((_DWORD *)v178 + 27);
    v289 = *((double **)v178 + 23);
    v438 = *((double **)v178 + 22);
    v444 = *((_DWORD *)v178 + 26);
    v451 = v288;
    v401 = *((_QWORD *)v178 + 18);
    v474 = v444 + 2 * v288;
    v396 = *((_QWORD *)v178 + 19);
    v404 = *((_QWORD *)v178 + 14);
    na = *((_QWORD *)v178 + 15);
    if ( (unsigned __int64)v474 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v440 = (double *)operator new[](4LL * v474);
    v290 = *(double **)(*(_QWORD *)v5 + 136LL);
    if ( v288 <= 0 )
    {
      v431 = (void *)v288;
    }
    else
    {
      v431 = (void *)v288;
      if ( (v289 >= v290 + 4 || v290 >= v289 + 4)
        && (unsigned int)v288 > 8
        && (na >= (unsigned __int64)(v290 + 4) || (unsigned __int64)v290 >= na + 32)
        && (v438 >= v290 + 4 || v290 >= v438 + 4)
        && (v290 >= (double *)((char *)v440 + 4 * v288) || v440 >= &v290[v288]) )
      {
        v291 = 0;
        v292 = (na >> 3) & 1;
        if ( ((na >> 3) & 1) != 0 )
        {
          v291 = v445;
          *v290 = -fmin(*v289 - *(double *)na, *(double *)na - *v438);
          *(_DWORD *)v440 = 0;
        }
        v293 = (na >> 3) & 1;
        v294 = v288 - v292;
        v295 = &v289[v293];
        si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
        v297 = (unsigned int)(v451 - v292) >> 2;
        v298 = na + v293 * 8;
        a5 = (__m128d)_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v291), 0), (__m128i)xmmword_289BB0);
        v299 = &v438[v293];
        v300 = &v290[v293];
        v301 = 0;
        v302 = 0;
        do
        {
          ++v301;
          v303 = _mm_min_pd(
                   _mm_sub_pd(*(__m128d *)&v295[v302 / 4], *(__m128d *)(v298 + 2 * v302)),
                   _mm_sub_pd(*(__m128d *)(v298 + 2 * v302), *(__m128d *)&v299[v302 / 4]));
          v304 = _mm_min_pd(
                   _mm_sub_pd(*(__m128d *)&v295[v302 / 4 + 2], *(__m128d *)(v298 + 2 * v302 + 16)),
                   _mm_sub_pd(*(__m128d *)(v298 + 2 * v302 + 16), *(__m128d *)&v299[v302 / 4 + 2]));
          *(double *)&v244 = -v303.m128d_f64[0];
          *((double *)&v244 + 1) = -v303.m128d_f64[1];
          v304.m128d_f64[0] = -v304.m128d_f64[0];
          v304.m128d_f64[1] = -v304.m128d_f64[1];
          *(_OWORD *)&v300[v302 / 4] = v244;
          *(__m128d *)&v300[v302 / 4 + 2] = v304;
          *(__m128d *)((char *)v440 + 4 * ((na >> 3) & 1) + v302) = a5;
          a5 = (__m128d)_mm_add_epi32((__m128i)a5, si128);
          v302 += 16LL;
        }
        while ( v301 < v297 );
        v305 = (v294 & 0xFFFFFFFC) + v291;
        if ( (v294 & 0xFFFFFFFC) != v294 )
        {
          v306 = v305 + 1;
          a5.m128d_f64[0] = -0.0;
          *(double *)&v244 = fmin(v289[v305] - *(double *)(na + 8LL * v305), *(double *)(na + 8LL * v305) - v438[v305]);
          v290[v305] = -*(double *)&v244;
          *((_DWORD *)v440 + v305) = v305;
          if ( v451 > v305 + 1 )
          {
            *(double *)&v244 = fmin(
                                 v289[v306] - *(double *)(na + 8LL * v306),
                                 *(double *)(na + 8LL * v306) - v438[v306]);
            v290[v306] = -*(double *)&v244;
            *((_DWORD *)v440 + v306) = v306;
            v307 = v305 + 2;
            if ( v451 > v305 + 2 )
            {
              v308 = v305 + 3;
              *(double *)&v244 = fmin(
                                   v289[v307] - *(double *)(na + 8LL * v307),
                                   *(double *)(na + 8LL * v307) - v438[v307]);
              v290[v307] = -*(double *)&v244;
              *((_DWORD *)v440 + v307) = v307;
              if ( v451 > v308 )
              {
                *(double *)&v244 = fmin(
                                     v289[v308] - *(double *)(na + 8LL * v308),
                                     *(double *)(na + 8LL * v308) - v438[v308]);
                v290[v308] = -*(double *)&v244;
                *((_DWORD *)v440 + v308) = v308;
              }
            }
          }
        }
      }
      else
      {
        a5.m128d_f64[0] = -0.0;
        v361 = 0;
        v362 = (unsigned int)(v288 - 1) + 1LL;
        do
        {
          while ( 1 )
          {
            v363 = *(double *)(na + 8 * v361);
            v364 = v289[v361] - v363;
            *(double *)&v244 = v363 - v438[v361];
            if ( *(double *)&v244 > v364 )
              break;
            *(double *)&v244 = -*(double *)&v244;
            *(_QWORD *)&v290[v361] = v244;
            *((_DWORD *)v440 + v361) = v361;
            if ( ++v361 == v362 )
              goto LABEL_441;
          }
          v290[v361] = -v364;
          *((_DWORD *)v440 + v361) = v361;
          ++v361;
        }
        while ( v362 != v361 );
      }
    }
LABEL_441:
    CoinSort_2<double,int>(v290, &v290[(_QWORD)v431], v440);
    v309 = v451;
    if ( v444 <= v451 )
      v309 = v444;
    v310 = (char *)v440 + 4 * (_QWORD)v431;
    v311 = (int *)&v310[4 * (_QWORD)v431];
    v312 = v474 - v451;
    if ( v474 - v451 > 0 )
    {
      v475 = v309;
      memset(v310, 255, 4LL * (unsigned int)(v312 - 1) + 4);
      v309 = v475;
    }
    if ( v309 > 0 )
    {
      v313 = (unsigned int)(v309 - 1) + 1LL;
      v314 = 0;
      do
      {
        *(_DWORD *)&v310[4 * *((int *)v440 + v314)] = v314;
        ++v314;
      }
      while ( v313 != v314 );
    }
    CoinFactorization::CoinFactorization((CoinFactorization *)v504);
    CoinFactorization::pivotTolerance((CoinFactorization *)v504, 0.1);
    v315 = *(ClpModel **)v5;
    v505 = 0;
    v316 = *((_QWORD *)v315 + 24);
    if ( v316 )
    {
      v317 = **(__int64 (__fastcall ***)(double, double, double))v316;
      if ( (char *)v317 == (char *)ClpPackedMatrix::getPackedMatrix )
        v454 = *(CoinPackedMatrix **)(v316 + 88);
      else
        v454 = (CoinPackedMatrix *)v317(0.1, *(double *)&v244, a5.m128d_f64[0]);
    }
    else
    {
      v454 = nullptr;
    }
    v416 = v444 - 1;
    v408 = -(__int64)((unsigned __int64)v311 >> 2) & 3;
    v414 = v444 - v408;
    v424 = (v444 - v408) & 0xFFFFFFFC;
    v418 = (unsigned int)(v444 - v408) >> 2;
    v427 = (unsigned int)(v451 - 1);
    while ( 1 )
    {
      v318 = CoinFactorization::factorize((CoinFactorization *)v504, v454, v311, (int *)v310, 1.0);
      if ( v318 == -99 )
        break;
      if ( v318 == -1 )
      {
        CoinFactorization::pivotTolerance((CoinFactorization *)v504, 0.99);
        if ( v444 > 0 )
        {
          v371 = 0;
          if ( v416 <= 5 )
            goto LABEL_600;
          if ( (-(__int64)((unsigned __int64)v311 >> 2) & 3) != 0 )
          {
            *v311 = 0;
            v371 = v445;
            if ( v408 != 1 )
            {
              v311[1] = 1;
              v371 = 2;
              if ( v408 != 2 )
              {
                v311[2] = 2;
                v371 = 3;
              }
            }
          }
          v372 = (__m128i *)((char *)&v440[(_QWORD)v431] + 4 * (-(__int64)((unsigned __int64)v311 >> 2) & 3));
          v373 = 0;
          v374 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v371), 0), (__m128i)xmmword_289BB0);
          do
          {
            ++v373;
            ++v372;
            v372[-1] = v374;
            v374 = _mm_add_epi32(v374, (__m128i)xmmword_289BC0);
          }
          while ( v373 < v418 );
          v371 += v424;
          if ( v424 != v414 )
          {
LABEL_600:
            v311[v371] = v371;
            if ( v371 + 1 < v444 )
            {
              v311[v371 + 1] = v371 + 1;
              if ( v371 + 2 < v444 )
              {
                v311[v371 + 2] = v371 + 2;
                if ( v371 + 3 < v444 )
                {
                  v311[v371 + 3] = v371 + 3;
                  v375 = v371 + 4;
                  if ( v371 + 4 < v444 )
                  {
                    v376 = v371 + 5;
                    v311[v375] = v375;
                    if ( v444 > v376 )
                      v311[v376] = v376;
                  }
                }
              }
            }
          }
        }
        if ( v451 > 0 )
        {
          v377 = (char *)v440 + 4 * (_QWORD)v431;
          do
          {
            v378 = *(int *)v377;
            if ( (int)v378 >= 0 )
              v311[v378] = -1;
            v377 += 4;
          }
          while ( &v310[4 * v427 + 4] != v377 );
        }
      }
      else if ( !v318 )
      {
        if ( v444 > 0 )
          goto LABEL_456;
        goto LABEL_574;
      }
    }
    if ( v444 > 0 )
    {
      v379 = 0;
      if ( v416 <= 5 )
        goto LABEL_622;
      if ( (-(__int64)((unsigned __int64)v311 >> 2) & 3) != 0 )
      {
        *v311 = 0;
        v379 = v445;
        if ( v408 != 1 )
        {
          v311[1] = 1;
          v379 = 2;
          if ( v408 != 2 )
          {
            v311[2] = 2;
            v379 = 3;
          }
        }
      }
      v380 = 0;
      v381 = (__m128i *)((char *)&v440[(_QWORD)v431] + 4 * (-(__int64)((unsigned __int64)v311 >> 2) & 3));
      v382 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v383 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v379), 0), (__m128i)xmmword_289BB0);
      do
      {
        ++v380;
        ++v381;
        v381[-1] = v383;
        v383 = _mm_add_epi32(v383, v382);
      }
      while ( v380 < v418 );
      v379 += v424;
      if ( v424 != v414 )
      {
LABEL_622:
        v311[v379] = v379;
        if ( v444 > v379 + 1 )
        {
          v311[v379 + 1] = v379 + 1;
          if ( v444 > v379 + 2 )
          {
            v311[v379 + 2] = v379 + 2;
            if ( v444 > v379 + 3 )
            {
              v311[v379 + 3] = v379 + 3;
              v384 = v379 + 4;
              if ( v379 + 4 < v444 )
              {
                v385 = v379 + 5;
                v311[v384] = v384;
                if ( v385 < v444 )
                  v311[v385] = v385;
              }
            }
          }
        }
      }
      if ( v451 > 0 )
        memset(v310, 255, 4 * v427 + 4);
LABEL_456:
      v319 = 0;
      do
      {
        v320 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)v5 + 264LL) + (int)v319 + *(_DWORD *)(*(_QWORD *)v5 + 108LL));
        v321 = *v320 & 0xF8;
        if ( v311[v319] >= 0 )
        {
          *v320 = v321 | 1;
        }
        else
        {
          v322 = *(double *)(v401 + 8 * v319);
          v323 = *(double *)(v396 + 8 * v319);
          if ( v322 == v323 )
          {
            *v320 = v321 | 5;
          }
          else
          {
            v365 = v321 | 3;
            v366 = v321 | 2;
            if ( v323 - *(double *)(v404 + 8 * v319) > *(double *)(v404 + 8 * v319) - v322 )
              v366 = v365;
            *v320 = v366;
          }
        }
        ++v319;
      }
      while ( v444 > (int)v319 );
LABEL_574:
      if ( v451 <= 0 )
        goto LABEL_582;
      goto LABEL_575;
    }
    if ( v451 <= 0 )
      goto LABEL_582;
    memset(v310, 255, 4 * v427 + 4);
LABEL_575:
    v367 = 0;
    do
    {
      v368 = *(double *)(na + 8 * v367);
      v369 = (_BYTE *)(v367 + *(_QWORD *)(*(_QWORD *)v5 + 264LL));
      v370 = *v369 & 0xF8;
      if ( v368 > v289[v367] - 0.0000001 || v438[v367] + 0.0000001 > v368 )
      {
        *v369 = v370 | 5;
      }
      else if ( *(int *)&v310[4 * v367] < 0 )
      {
        *v369 = v370 | 4;
      }
      else
      {
        *v369 = v370 | 1;
      }
      ++v367;
    }
    while ( v451 > (int)v367 );
LABEL_582:
    operator delete[](v440);
    CoinFactorization::~CoinFactorization((CoinFactorization *)v504);
    v178 = *(ClpModel **)v5;
  }
LABEL_180:
  if ( !v178 )
  {
LABEL_374:
    *(_QWORD *)v5 = sc;
    if ( v483 )
    {
      ClpSimplex::primal(sc, 2, 0);
      v181 = 0;
      v469 = 1;
      sc = nullptr;
      goto LABEL_188;
    }
    if ( !v468 )
    {
      sc = nullptr;
      goto LABEL_377;
    }
    v226 = sc;
    v181 = 0;
    sc = nullptr;
    v469 = 1;
LABEL_317:
    v227 = *((CoinPackedMatrix **)v226 + 19);
    v228 = v422;
    if ( v227 != v422 && v491 )
    {
      if ( v491 >> 3 > 0 )
      {
        v229 = *((_QWORD **)v226 + 19);
        do
        {
          v230 = *(_QWORD *)v228;
          v229 += 8;
          v228 = (CoinPackedMatrix *)((char *)v228 + 64);
          *(v229 - 8) = v230;
          *(v229 - 7) = *((_QWORD *)v228 - 7);
          *(v229 - 6) = *((_QWORD *)v228 - 6);
          *(v229 - 5) = *((_QWORD *)v228 - 5);
          *(v229 - 4) = *((_QWORD *)v228 - 4);
          *(v229 - 3) = *((_QWORD *)v228 - 3);
          *(v229 - 2) = *((_QWORD *)v228 - 2);
          *(v229 - 1) = *((_QWORD *)v228 - 1);
        }
        while ( v229 != (_QWORD *)((char *)v227 + 64 * (unsigned int)((v491 >> 3) - 1) + 64) );
        v231 = ((v491 >> 3) - 1 + 1LL) << 6;
        v228 = (CoinPackedMatrix *)((char *)v422 + v231);
        v227 = (CoinPackedMatrix *)((char *)v227 + v231);
      }
      switch ( v491 % 8 )
      {
        case 1:
          goto LABEL_468;
        case 2:
          goto LABEL_467;
        case 3:
          goto LABEL_466;
        case 4:
          goto LABEL_465;
        case 5:
          goto LABEL_464;
        case 6:
          goto LABEL_463;
        case 7:
          *((_QWORD *)v227 + 6) = *((_QWORD *)v228 + 6);
LABEL_463:
          *((_QWORD *)v227 + 5) = *((_QWORD *)v228 + 5);
LABEL_464:
          *((_QWORD *)v227 + 4) = *((_QWORD *)v228 + 4);
LABEL_465:
          *((_QWORD *)v227 + 3) = *((_QWORD *)v228 + 3);
LABEL_466:
          *((_QWORD *)v227 + 2) = *((_QWORD *)v228 + 2);
LABEL_467:
          *((_QWORD *)v227 + 1) = *((_QWORD *)v228 + 1);
LABEL_468:
          *(_QWORD *)v227 = *(_QWORD *)v228;
          break;
        default:
          break;
      }
    }
    v324 = *((CoinFactorization **)v226 + 18);
    v325 = v421;
    if ( v421 != v324 && v491 )
    {
      if ( v491 >> 3 > 0 )
      {
        v326 = *((_QWORD **)v226 + 18);
        v327 = (unsigned int)((v491 >> 3) - 1);
        do
        {
          v328 = *(_QWORD *)v325;
          v326 += 8;
          v325 = (CoinFactorization *)((char *)v325 + 64);
          *(v326 - 8) = v328;
          *(v326 - 7) = *((_QWORD *)v325 - 7);
          *(v326 - 6) = *((_QWORD *)v325 - 6);
          *(v326 - 5) = *((_QWORD *)v325 - 5);
          *(v326 - 4) = *((_QWORD *)v325 - 4);
          *(v326 - 3) = *((_QWORD *)v325 - 3);
          *(v326 - 2) = *((_QWORD *)v325 - 2);
          *(v326 - 1) = *((_QWORD *)v325 - 1);
        }
        while ( v326 != (_QWORD *)((char *)v324 + 64 * v327 + 64) );
        v329 = ((int)v327 + 1LL) << 6;
        v325 = (CoinFactorization *)((char *)v421 + v329);
        v324 = (CoinFactorization *)((char *)v324 + v329);
      }
      switch ( v491 % 8 )
      {
        case 1:
          goto LABEL_482;
        case 2:
          goto LABEL_481;
        case 3:
          goto LABEL_480;
        case 4:
          goto LABEL_479;
        case 5:
          goto LABEL_478;
        case 6:
          goto LABEL_477;
        case 7:
          *((_QWORD *)v324 + 6) = *((_QWORD *)v325 + 6);
LABEL_477:
          *((_QWORD *)v324 + 5) = *((_QWORD *)v325 + 5);
LABEL_478:
          *((_QWORD *)v324 + 4) = *((_QWORD *)v325 + 4);
LABEL_479:
          *((_QWORD *)v324 + 3) = *((_QWORD *)v325 + 3);
LABEL_480:
          *((_QWORD *)v324 + 2) = *((_QWORD *)v325 + 2);
LABEL_481:
          *((_QWORD *)v324 + 1) = *((_QWORD *)v325 + 1);
LABEL_482:
          *(_QWORD *)v324 = *(_QWORD *)v325;
          break;
        default:
          break;
      }
    }
    if ( v422 )
      operator delete[](v422);
    if ( v421 )
      operator delete[](v421);
    goto LABEL_189;
  }
  if ( 2 * (*((_DWORD *)sc + 27) + 2 * *((_DWORD *)sc + 26)) <= 3
                                                              * (*((_DWORD *)v178 + 27) + 2 * *((_DWORD *)v178 + 26)) )
  {
    if ( !v490 )
    {
      if ( !v483 )
      {
        ClpSimplex::primal(v178, 1, 0);
        if ( v445 )
        {
LABEL_184:
          ClpSimplex::primal(*(ClpSimplex **)v5, 1, 0);
          v483 = 0;
LABEL_185:
          ClpPresolve::postsolve((ClpPresolve *)v501, 1);
          v179 = *(ClpModel **)v5;
          if ( *(_QWORD *)v5 )
          {
            ClpSimplex::~ClpSimplex(*(ClpSimplex **)v5);
            operator delete(v179);
          }
          v180 = sc;
          v181 = 1;
          sc = nullptr;
          *(_QWORD *)v5 = v180;
          goto LABEL_188;
        }
        v181 = 0;
LABEL_315:
        if ( !v468 )
          goto LABEL_189;
        goto LABEL_316;
      }
      ClpSimplex::primal(v178, 2, 0);
      if ( v445 )
        goto LABEL_185;
LABEL_314:
      v181 = 0;
      goto LABEL_315;
    }
LABEL_325:
    v232 = *((const void **)v178 + 24);
    v233 = nullptr;
    if ( v232 )
      v233 = (ClpPackedMatrix *)__dynamic_cast(
                                  v232,
                                  (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                                  (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
                                  0);
    *((_DWORD *)v233 + 25) |= 0x10u;
    ClpSimplex::primal(v178, 1, 0);
    ClpPackedMatrix::releaseSpecialColumnCopy(v233);
    if ( v445 )
    {
      if ( v483 )
        goto LABEL_185;
      goto LABEL_184;
    }
    goto LABEL_314;
  }
  if ( v490 )
  {
    v483 = 0;
    goto LABEL_325;
  }
  ClpSimplex::primal(v178, 1, 0);
  if ( v445 )
    goto LABEL_184;
  v181 = 0;
  v483 = 0;
LABEL_188:
  if ( v468 )
  {
LABEL_316:
    v226 = *(ClpModel **)v5;
    goto LABEL_317;
  }
LABEL_189:
  if ( v469 == 2 )
    goto LABEL_190;
  if ( v469 )
  {
    v468 = v483;
LABEL_377:
    if ( v446 < v464 )
    {
      v261 = v446;
      v262 = (char *)&v18[v261];
      v263 = (char *)&src[v261];
      v264 = (char *)&v433[v261];
      v265 = (char *)&v434[v261];
      v266 = 0;
      do
      {
        if ( *(double *)&v263[v266] - *(double *)&v262[v266] < 0.00001
          && *(double *)&v264[v266] - *(double *)&v265[v266] > 0.00001 )
        {
          *(_QWORD *)&v263[v266] = *(_QWORD *)&v264[v266];
          *(_QWORD *)&v262[v266] = *(_QWORD *)&v265[v266];
        }
        v266 += 8;
      }
      while ( 8LL * (unsigned int)(v464 - 1 - v446) + 8 != v266 );
    }
    if ( v433 )
      operator delete[](v433);
    if ( v434 )
      operator delete[](v434);
    if ( !v468 )
    {
      v267 = *(ClpModel **)v5;
      v433 = nullptr;
      v434 = nullptr;
      v469 = 0;
      goto LABEL_389;
    }
    goto LABEL_583;
  }
  if ( v446 < v464 )
  {
    v330 = v446;
    v331 = v446 + 1LL;
    v332 = v331 + (unsigned int)(v464 - 1 - v446);
    while ( 1 )
    {
      if ( *(int *)(v412 + 4 * v330) > 0
        && *(double *)&src[v330] - *(double *)&v18[v330] < 0.00001
        && *(double *)&v433[v330] - *(double *)&v434[v330] > 0.00001 )
      {
        src[v330] = v433[v330];
        v18[v330] = v434[v330];
      }
      v330 = v331;
      if ( v332 == v331 )
        break;
      ++v331;
    }
  }
  if ( v483 )
  {
LABEL_583:
    ClpPresolve::~ClpPresolve((ClpPresolve *)v501);
    return;
  }
  v267 = *(ClpModel **)v5;
  v468 = 1;
  if ( v181 )
  {
    sc = *(ClpModel **)v5;
    v468 = v181;
    v267 = (ClpModel *)ClpPresolve::presolvedModel((ClpPresolve *)v501, v267, 0.00000001, 0, 5, 0, 0, nullptr, nullptr);
    v469 = 1;
    *(_QWORD *)v5 = v267;
  }
LABEL_389:
  if ( v490 )
  {
    v268 = *((const void **)v267 + 24);
    v269 = nullptr;
    if ( v268 )
      v269 = (ClpPackedMatrix *)__dynamic_cast(
                                  v268,
                                  (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                                  (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
                                  0);
    *((_DWORD *)v269 + 25) |= 0x10u;
    ClpSimplex::primal(v267, 1, 0);
    ClpPackedMatrix::releaseSpecialColumnCopy(v269);
  }
  else
  {
    ClpSimplex::primal(v267, 1, 0);
  }
  if ( v469 )
  {
    ClpPresolve::postsolve((ClpPresolve *)v501, 1);
    v274 = *(ClpModel **)v5;
    if ( *(_QWORD *)v5 )
    {
      ClpSimplex::~ClpSimplex(*(ClpSimplex **)v5);
      operator delete(v274);
    }
    *(_QWORD *)v5 = sc;
    if ( !v468 )
    {
LABEL_420:
      v270 = (ClpModel *)ClpPresolve::presolvedModel((ClpPresolve *)v501, sc, 0.00000001, 0, 5, 0, 0, nullptr, nullptr);
      v469 = 1;
      *(_QWORD *)v5 = v270;
      goto LABEL_396;
    }
    sc = nullptr;
LABEL_408:
    if ( v446 < v464 )
    {
      v275 = v446;
      v276 = (char *)&v18[v275];
      v277 = (char *)&src[v275];
      v278 = (char *)&v433[v275];
      v279 = (char *)&v434[v275];
      v280 = 0;
      do
      {
        if ( *(double *)&v277[v280] - *(double *)&v276[v280] < 0.00001
          && *(double *)&v278[v280] - *(double *)&v279[v280] > 0.00001 )
        {
          *(_QWORD *)&v277[v280] = *(_QWORD *)&v278[v280];
          *(_QWORD *)&v276[v280] = *(_QWORD *)&v279[v280];
        }
        v280 += 8;
      }
      while ( v280 != 8LL * (unsigned int)(v464 - 1 - v446) + 8 );
    }
    if ( v433 )
      operator delete[](v433);
    if ( v434 )
      operator delete[](v434);
    v270 = *(ClpModel **)v5;
    v433 = nullptr;
    v434 = nullptr;
    if ( !v469 )
      goto LABEL_396;
    sc = *(ClpModel **)v5;
    goto LABEL_420;
  }
  if ( v468 )
    goto LABEL_408;
  v270 = *(ClpModel **)v5;
LABEL_396:
  if ( v490 )
  {
    v271 = *((const void **)v270 + 24);
    v272 = nullptr;
    if ( v271 )
      v272 = (ClpPackedMatrix *)__dynamic_cast(
                                  v271,
                                  (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                                  (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
                                  0);
    *((_DWORD *)v272 + 25) |= 0x10u;
    ClpSimplex::primal(v270, 1, 0);
    ClpPackedMatrix::releaseSpecialColumnCopy(v272);
  }
  else
  {
    ClpSimplex::primal(v270, 1, 0);
  }
  if ( v469 )
  {
    ClpPresolve::postsolve((ClpPresolve *)v501, 1);
    v273 = *(ClpModel **)v5;
    if ( *(_QWORD *)v5 )
    {
      ClpSimplex::~ClpSimplex(*(ClpSimplex **)v5);
      operator delete(v273);
    }
    *(_QWORD *)v5 = sc;
  }
LABEL_190:
  if ( v433 )
    operator delete[](v433);
  if ( v434 )
    operator delete[](v434);
  ClpPresolve::~ClpPresolve((ClpPresolve *)v501);
  v135 = *(ClpModel **)v5;
LABEL_195:
  ClpModel::setSpecialOptions(v135, v419);
  ClpSimplex::setPerturbation(*(ClpSimplex **)v5, v420);
}

