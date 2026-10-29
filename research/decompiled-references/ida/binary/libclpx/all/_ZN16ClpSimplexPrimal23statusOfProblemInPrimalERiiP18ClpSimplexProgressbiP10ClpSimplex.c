__int64 __fastcall ClpSimplexPrimal::statusOfProblemInPrimal(
        ClpSimplexPrimal *this,
        int *a2,
        int a3,
        ClpSimplexProgress *a4,
        char a5,
        _BOOL4 a6,
        double a7,
        __m128i a8,
        ClpSimplex *a9)
{
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // r14d
  char v15; // bp
  int v16; // r10d
  int v17; // r12d
  double v18; // xmm0_8
  __int64 v19; // rdi
  int v20; // r12d
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r8
  double v24; // xmm0_8
  int v25; // r12d
  __int64 v26; // rcx
  double *v27; // rdx
  double v28; // xmm0_8
  int v29; // ecx
  __int64 v30; // r12
  __int64 v31; // r9
  _BYTE *v32; // rdi
  __int64 v33; // rdx
  unsigned int v34; // esi
  int v35; // esi
  int v36; // eax
  __m128i v37; // xmm2
  unsigned int v38; // r13d
  __m128i *v39; // r9
  unsigned int v40; // edx
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm3
  __m128i v44; // xmm1
  __m128i v45; // xmm0
  __m128i v46; // xmm6
  __m128i v47; // xmm2
  __m128i v48; // xmm2
  __int64 v49; // rax
  bool v50; // dl
  char *v51; // rdi
  int v52; // ecx
  int v53; // esi
  __int64 *v54; // r9
  int v55; // r10d
  unsigned int v56; // ecx
  __int64 v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rax
  char *v60; // rdx
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // eax
  __int64 result; // rax
  __int64 v66; // r8
  __int64 v67; // rax
  CoinFactorization *v68; // rdi
  int v69; // r12d
  __int64 v70; // rax
  int v71; // eax
  double v72; // xmm1_8
  int v73; // eax
  double v74; // xmm0_8
  double v75; // xmm4_8
  double v76; // xmm2_8
  double v77; // xmm3_8
  int v78; // eax
  double v79; // xmm2_8
  double v80; // xmm2_8
  double v81; // xmm3_8
  int v82; // eax
  double v83; // xmm0_8
  double v84; // xmm2_8
  double v85; // xmm3_8
  int v86; // eax
  double v87; // xmm2_8
  double v88; // xmm2_8
  double v89; // xmm0_8
  __int64 *v90; // rdi
  __int64 *v91; // r11
  __int64 *v92; // rbp
  __int64 *v93; // rax
  __int64 *v94; // rdx
  __int64 v95; // r10
  __int64 v96; // xmm0_8
  __int64 v97; // r10
  __int64 *v98; // rsi
  __int64 v99; // rdx
  __int64 *v100; // rax
  __int64 v101; // r10
  __int64 v102; // xmm0_8
  __int64 v103; // r10
  __int64 v104; // rax
  CoinFactorization *v105; // rdi
  int v106; // ebp
  int v107; // eax
  char v108; // r14
  int v109; // edx
  CoinMessageHandler *v110; // rdi
  CoinMessageHandler *v111; // rax
  CoinMessageHandler *v112; // rax
  CoinMessageHandler *v113; // rax
  CoinMessageHandler *v114; // rax
  double v115; // xmm0_8
  CoinMessageHandler *v116; // rax
  CoinMessageHandler *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  int v120; // edx
  double v121; // xmm5_8
  int v122; // ecx
  __int64 v123; // rax
  __int64 v124; // rdi
  int v125; // edx
  int v126; // eax
  int v127; // ecx
  int v128; // eax
  double v129; // xmm1_8
  __int64 v130; // rax
  double v131; // xmm0_8
  int v132; // eax
  __int64 v133; // rdi
  void (__fastcall *v134)(__int64, ClpSimplexPrimal *, __int64); // rax
  CoinFactorization **v135; // rdi
  __int64 v136; // rdi
  int v137; // edx
  int v138; // eax
  int v139; // esi
  __int64 v140; // rdx
  double *v141; // rdi
  int v142; // eax
  double *i; // r9
  int v144; // r8d
  void *v145; // rdi
  __int64 v146; // rax
  double v147; // xmm0_8
  double v148; // xmm0_8
  __int64 v149; // rax
  ClpNonLinearCost *v150; // rdi
  __int64 (__fastcall ***v151)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64); // rdi
  double *v152; // rax
  __int64 v153; // rcx
  int v154; // edx
  double v155; // xmm0_8
  __int64 v156; // rsi
  unsigned __int64 v157; // rdx
  double v158; // xmm1_8
  int v159; // eax
  double v160; // xmm0_8
  double v161; // xmm1_8
  double v162; // xmm0_8
  int v163; // eax
  bool v164; // bp
  CoinMessageHandler *v165; // rax
  double v166; // xmm0_8
  __int64 v167; // rax
  int v168; // eax
  int v169; // eax
  double v170; // xmm0_8
  double v171; // xmm1_8
  __int64 v172; // rdx
  int v173; // edx
  char *v174; // rcx
  char *v175; // rsi
  __int64 v176; // rax
  unsigned int v177; // r9d
  __int64 v178; // rax
  unsigned int v179; // edi
  __int64 v180; // rax
  char *v181; // rdi
  char *v182; // rax
  __int64 v183; // r9
  __int64 v184; // rax
  CoinOtherFactorization *v185; // rdi
  int v186; // edx
  int v187; // eax
  double v188; // xmm0_8
  double v189; // xmm1_8
  char *v190; // rdx
  __int64 *v191; // rax
  char v192; // si
  int v193; // esi
  int v194; // r9d
  _BYTE *v195; // rcx
  _BYTE *v196; // rdi
  int v197; // r8d
  unsigned int v198; // esi
  __int64 v199; // rax
  unsigned int v200; // edx
  __int64 v201; // rax
  _BYTE *v202; // rdx
  _BYTE *v203; // rax
  __int64 v204; // rsi
  __int64 v205; // rax
  __int64 *v206; // rcx
  __int64 *v207; // r8
  __int64 *v208; // rdi
  __int64 v209; // rdx
  __int64 *v210; // rax
  __int64 v211; // r11
  __int64 v212; // xmm0_8
  __int64 v213; // rax
  __int64 *v214; // rdi
  __int64 v215; // rdx
  __int64 *v216; // rax
  __int64 v217; // r9
  __int64 v218; // xmm0_8
  __int64 v219; // rax
  __int64 v220; // rax
  double v221; // xmm0_8
  double v222; // xmm7_8
  double v223; // xmm0_8
  __int64 v224; // rax
  __int64 v225; // rdx
  int v226; // eax
  int v227; // esi
  int v228; // esi
  __int64 v229; // rax
  __int64 v230; // rax
  __int64 v231; // rdx
  int v232; // eax
  __int64 v233; // rax
  _BYTE *v234; // rdi
  __int64 (__fastcall *v235)(ClpPrimalColumnPivot *); // rax
  __int64 v237; // rax
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 (__fastcall ***v241)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64, double); // rdi
  double v242; // xmm1_8
  double v243; // xmm1_8
  void *v244; // rax
  double *v245; // rsi
  unsigned __int64 v246; // r8
  int v247; // r10d
  double *v248; // rdi
  __int64 v249; // rax
  unsigned int v250; // edx
  __m128d v251; // xmm2
  unsigned int v252; // r11d
  __int64 v253; // rax
  __int64 v254; // rcx
  double *v255; // r10
  double *v256; // r9
  double *v257; // rcx
  signed int v258; // eax
  __int64 v259; // rdx
  int v260; // eax
  __int64 v261; // rax
  double v262; // xmm2_8
  __int64 v263; // rcx
  double v264; // xmm3_8
  double v265; // xmm4_8
  double v266; // xmm10_8
  __int64 v267; // rdx
  double v268; // xmm0_8
  double v269; // xmm1_8
  double v270; // xmm5_8
  double v271; // xmm2_8
  ClpNonLinearCost *v272; // rdi
  unsigned int v273; // eax
  double v274; // xmm0_8
  void *v275; // rdi
  unsigned __int64 v276; // rax
  __int64 *v277; // rax
  int v278; // esi
  __int64 *v279; // rdi
  __int64 *v280; // rdx
  __int64 *v281; // rcx
  __int64 v282; // r8
  __int64 v283; // xmm0_8
  __int64 v284; // rdx
  int v285; // eax
  __int64 v286; // rax
  CoinFactorization *v287; // rdi
  __int64 v288; // rax
  int v289; // edi
  __int64 *v290; // rsi
  __int64 *v291; // r10
  int v292; // ecx
  __int64 *v293; // r9
  __int64 v294; // rdx
  __int64 *v295; // rax
  __int64 v296; // r12
  __int64 v297; // xmm0_8
  __int64 v298; // rax
  _BYTE *v299; // rdi
  void *v300; // rdi
  unsigned __int64 v301; // rax
  __int64 v302; // rax
  int v303; // ecx
  int v304; // r9d
  _BYTE *v305; // rsi
  int v306; // r8d
  unsigned int v307; // ecx
  __int64 v308; // rax
  unsigned int v309; // edx
  __int64 v310; // rax
  _BYTE *v311; // rdx
  _BYTE *v312; // rax
  __int64 v313; // rcx
  __int64 v314; // rax
  _QWORD *v315; // rsi
  _QWORD *v316; // r8
  _QWORD *v317; // rdi
  _QWORD *v318; // rax
  __int64 *v319; // rdx
  __int64 v320; // r11
  __int64 v321; // xmm0_8
  __int64 v322; // rax
  _QWORD *v323; // rdi
  _QWORD *v324; // rdx
  __int64 *v325; // rax
  __int64 v326; // r9
  __int64 v327; // xmm0_8
  __int64 v328; // rax
  __int64 v329; // rax
  ClpNonLinearCost *v330; // rdi
  double v331; // xmm0_8
  double *v332; // rdi
  double v333; // xmm2_8
  char v334; // al
  void *v335; // r12
  ClpNonLinearCost *v336; // r12
  int v337; // eax
  __int64 v338; // rax
  CoinFactorization *v339; // rdi
  CoinMessageHandler *v340; // rax
  double v341; // xmm0_8
  __int64 v342; // rax
  bool v343; // cl
  double v344; // xmm1_8
  int v345; // edi
  double *v346; // rsi
  __int64 v347; // rdx
  unsigned int v348; // r9d
  unsigned int v349; // ecx
  __m128d v350; // xmm2
  __int64 v351; // rax
  unsigned __int64 v352; // r10
  double *v353; // rax
  signed int v354; // eax
  __int64 v355; // rdx
  int v356; // eax
  CoinOtherFactorization *v357; // rdi
  __int64 *v358; // rdi
  __int64 v359; // rdx
  __int64 *v360; // rax
  __int64 v361; // r10
  __int64 v362; // xmm0_8
  __int64 v363; // rax
  char v364; // al
  double *v365; // rdi
  double v366; // xmm4_8
  double v367; // xmm6_8
  void *v368; // rdi
  unsigned __int64 v369; // rax
  __int64 v370; // rax
  __int64 (__fastcall ***v371)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64); // rdi
  unsigned __int64 v372; // r15
  unsigned __int64 v373; // r15
  void *v374; // r12
  __int64 (__fastcall ***v375)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64); // rdi
  size_t v376; // r15
  void *v377; // rax
  __int64 (__fastcall ***v378)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64); // rdi
  void *v379; // rax
  size_t v380; // r14
  int v381; // esi
  double *v382; // rcx
  double *v383; // rdx
  unsigned int v384; // edi
  __int64 v385; // r9
  __int64 v386; // rax
  unsigned int v387; // r11d
  double *v388; // r10
  double *v389; // rax
  __int128 v390; // xmm0
  signed int v391; // eax
  __int64 v392; // rdi
  double v393; // xmm0_8
  int v394; // eax
  __int64 v395; // rax
  double v396; // xmm0_8
  int v397; // esi
  __int64 v398; // rcx
  CoinFactorization *v399; // rdi
  int v400; // eax
  double v401; // xmm0_8
  double v402; // xmm0_8
  double v403; // xmm0_8
  __int64 v404; // rax
  __int64 v405; // rax
  double *v406; // rdi
  char *v407; // rdx
  _BYTE *v408; // rax
  char v409; // r9
  __int64 v410; // r10
  unsigned __int64 v411; // rax
  double *v412; // r9
  void *v413; // r11
  double *v414; // rcx
  double v415; // xmm0_8
  double v416; // xmm1_8
  double *v417; // rax
  _BYTE *v418; // rdx
  char *v419; // rax
  char v420; // r9
  double *v421; // rdi
  double v422; // xmm0_8
  __int64 v423; // rdx
  double v424; // xmm1_8
  CoinMessageHandler *v425; // rax
  double v426; // xmm0_8
  __int64 v427; // rax
  char *v428; // rdi
  char *v429; // rax
  char v430; // r8
  unsigned __int64 v431; // rax
  double v432; // xmm1_8
  double *v433; // rax
  double v434; // xmm0_8
  double v435; // xmm0_8
  double v436; // xmm1_8
  double *v437; // rax
  __int64 v438; // rsi
  unsigned __int64 v439; // rax
  int v440; // eax
  unsigned __int64 v441; // rax
  double *v442; // rdi
  double src; // [rsp+0h] [rbp-C8h]
  CoinMessageHandler *srcf; // [rsp+0h] [rbp-C8h]
  void *srca; // [rsp+0h] [rbp-C8h]
  char srcb; // [rsp+0h] [rbp-C8h]
  double srcc; // [rsp+0h] [rbp-C8h]
  double *srcd; // [rsp+0h] [rbp-C8h]
  char srcg; // [rsp+0h] [rbp-C8h]
  char srch; // [rsp+0h] [rbp-C8h]
  void *srce; // [rsp+0h] [rbp-C8h]
  char v453; // [rsp+10h] [rbp-B8h]
  double v454; // [rsp+18h] [rbp-B0h]
  double v455; // [rsp+20h] [rbp-A8h]
  int v456; // [rsp+20h] [rbp-A8h]
  bool v457; // [rsp+20h] [rbp-A8h]
  double v458; // [rsp+20h] [rbp-A8h]
  int v459; // [rsp+20h] [rbp-A8h]
  int v460; // [rsp+20h] [rbp-A8h]
  bool v461[8]; // [rsp+20h] [rbp-A8h]
  int v463; // [rsp+2Ch] [rbp-9Ch]
  int v464; // [rsp+30h] [rbp-98h]
  int v465; // [rsp+34h] [rbp-94h]
  double v467; // [rsp+40h] [rbp-88h]
  double v468; // [rsp+40h] [rbp-88h]
  double v469; // [rsp+48h] [rbp-80h]
  double v470; // [rsp+48h] [rbp-80h]
  __int64 v471; // [rsp+48h] [rbp-80h]
  double v472; // [rsp+50h] [rbp-78h]
  int v473; // [rsp+50h] [rbp-78h]
  int v474; // [rsp+50h] [rbp-78h]
  double *v475; // [rsp+50h] [rbp-78h]
  double *v476; // [rsp+50h] [rbp-78h]
  double *v477; // [rsp+50h] [rbp-78h]
  double v478; // [rsp+58h] [rbp-70h]
  unsigned __int64 v479; // [rsp+58h] [rbp-70h]
  int v480; // [rsp+58h] [rbp-70h]
  __int64 v481; // [rsp+58h] [rbp-70h]
  double *v482; // [rsp+58h] [rbp-70h]
  void *v483; // [rsp+58h] [rbp-70h]
  double v484; // [rsp+60h] [rbp-68h]
  int v485; // [rsp+60h] [rbp-68h]
  int v486; // [rsp+60h] [rbp-68h]
  void *v487; // [rsp+60h] [rbp-68h]
  double *v488; // [rsp+60h] [rbp-68h]
  double v489; // [rsp+68h] [rbp-60h]
  double *v490; // [rsp+68h] [rbp-60h]
  int v491; // [rsp+70h] [rbp-58h]
  int v492; // [rsp+78h] [rbp-50h]
  int v493; // [rsp+7Ch] [rbp-4Ch]
  int v494; // [rsp+84h] [rbp-44h] BYREF
  _DWORD v495[16]; // [rsp+88h] [rbp-40h] BYREF

  v463 = a3;
  v12 = *((_QWORD *)this + 158);
  v492 = *((_DWORD *)this + 337);
  v13 = *(_QWORD *)(v12 + 8);
  v467 = *((double *)this + 113);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 68);
    if ( a3 != 2 )
    {
LABEL_3:
      v465 = *(_DWORD *)(v13 + 1048);
      goto LABEL_4;
    }
  }
  else
  {
    v465 = 0;
    v14 = *(_DWORD *)(*(_QWORD *)(v12 + 16) + 52LL);
    if ( v463 != 2 )
      goto LABEL_4;
  }
  v193 = *((_DWORD *)this + 27);
  v194 = *((_DWORD *)this + 26);
  v195 = *((_BYTE **)this + 33);
  v196 = *((_BYTE **)this + 164);
  v197 = v193 + v194;
  if ( v194 + v193 && v195 != v196 )
  {
    v198 = v197 >> 3;
    if ( v197 >> 3 > 0 )
    {
      if ( (v196 >= v195 + 16 || v195 >= v196 + 16) && v198 > 1 )
      {
        v199 = 0;
        v200 = 0;
        do
        {
          ++v200;
          *(__m128i *)&v195[v199] = _mm_loadu_si128((const __m128i *)&v196[v199]);
          v199 += 16;
        }
        while ( v198 >> 1 > v200 );
        v201 = 8LL * (v198 & 0xFFFFFFFE);
        v202 = &v196[v201];
        v203 = &v195[v201];
        if ( (v198 & 0xFFFFFFFE) != v198 )
        {
          *v203 = *v202;
          v203[1] = v202[1];
          v203[2] = v202[2];
          v203[3] = v202[3];
          v203[4] = v202[4];
          v203[5] = v202[5];
          v203[6] = v202[6];
          v203[7] = v202[7];
        }
        LODWORD(v204) = v198 - 1;
      }
      else
      {
        v418 = *((_BYTE **)this + 33);
        v204 = v198 - 1;
        v419 = *((char **)this + 164);
        do
        {
          v420 = *v419;
          v418 += 8;
          v419 += 8;
          *(v418 - 8) = v420;
          *(v418 - 7) = *(v419 - 7);
          *(v418 - 6) = *(v419 - 6);
          *(v418 - 5) = *(v419 - 5);
          *(v418 - 4) = *(v419 - 4);
          *(v418 - 3) = *(v419 - 3);
          *(v418 - 2) = *(v419 - 2);
          *(v418 - 1) = *(v419 - 1);
        }
        while ( v418 != &v195[8 * v204 + 8] );
      }
      v205 = 8LL * (int)v204 + 8;
      v196 += v205;
      v195 += v205;
    }
    switch ( v197 % 8 )
    {
      case 1:
        goto LABEL_342;
      case 2:
        goto LABEL_341;
      case 3:
        goto LABEL_340;
      case 4:
        goto LABEL_339;
      case 5:
        goto LABEL_338;
      case 6:
        goto LABEL_337;
      case 7:
        v195[6] = v196[6];
LABEL_337:
        v195[5] = v196[5];
LABEL_338:
        v195[4] = v196[4];
LABEL_339:
        v195[3] = v196[3];
LABEL_340:
        v195[2] = v196[2];
LABEL_341:
        v195[1] = v196[1];
LABEL_342:
        *v195 = *v196;
        break;
      default:
        break;
    }
    v194 = *((_DWORD *)this + 26);
    v193 = *((_DWORD *)this + 27);
  }
  v206 = *((__int64 **)this + 159);
  v207 = *((__int64 **)this + 151);
  v208 = &v206[v193];
  if ( v194 && v207 != v208 )
  {
    if ( v194 >> 3 > 0 )
    {
      v209 = *((_QWORD *)this + 151);
      v210 = &v206[v193];
      v211 = (unsigned int)((v194 >> 3) - 1);
      do
      {
        v212 = *v210;
        v210 += 8;
        v209 += 64;
        *(_QWORD *)(v209 - 64) = v212;
        *(_QWORD *)(v209 - 56) = *(v210 - 7);
        *(_QWORD *)(v209 - 48) = *(v210 - 6);
        *(_QWORD *)(v209 - 40) = *(v210 - 5);
        *(_QWORD *)(v209 - 32) = *(v210 - 4);
        *(_QWORD *)(v209 - 24) = *(v210 - 3);
        *(_QWORD *)(v209 - 16) = *(v210 - 2);
        *(_QWORD *)(v209 - 8) = *(v210 - 1);
      }
      while ( v210 != &v208[8 * v211 + 8] );
      v213 = ((int)v211 + 1LL) << 6;
      v208 = (__int64 *)((char *)v208 + v213);
      v207 = (__int64 *)((char *)v207 + v213);
    }
    switch ( v194 % 8 )
    {
      case 1:
        goto LABEL_357;
      case 2:
        goto LABEL_356;
      case 3:
        goto LABEL_355;
      case 4:
        goto LABEL_354;
      case 5:
        goto LABEL_353;
      case 6:
        goto LABEL_352;
      case 7:
        v207[6] = v208[6];
LABEL_352:
        v207[5] = v208[5];
LABEL_353:
        v207[4] = v208[4];
LABEL_354:
        v207[3] = v208[3];
LABEL_355:
        v207[2] = v208[2];
LABEL_356:
        v207[1] = v208[1];
LABEL_357:
        *v207 = *v208;
        break;
      default:
        break;
    }
  }
  v214 = *((__int64 **)this + 152);
  if ( v193 && v206 != v214 )
  {
    if ( v193 >> 3 > 0 )
    {
      v215 = *((_QWORD *)this + 152);
      v216 = v206;
      v217 = (unsigned int)((v193 >> 3) - 1);
      v207 = &v206[8 * v217 + 8];
      do
      {
        v218 = *v216;
        v216 += 8;
        v215 += 64;
        *(_QWORD *)(v215 - 64) = v218;
        *(_QWORD *)(v215 - 56) = *(v216 - 7);
        *(_QWORD *)(v215 - 48) = *(v216 - 6);
        *(_QWORD *)(v215 - 40) = *(v216 - 5);
        *(_QWORD *)(v215 - 32) = *(v216 - 4);
        *(_QWORD *)(v215 - 24) = *(v216 - 3);
        *(_QWORD *)(v215 - 16) = *(v216 - 2);
        *(_QWORD *)(v215 - 8) = *(v216 - 1);
      }
      while ( v216 != v207 );
      v219 = ((int)v217 + 1LL) << 6;
      v206 = (__int64 *)((char *)v206 + v219);
      v214 = (__int64 *)((char *)v214 + v219);
    }
    switch ( v193 % 8 )
    {
      case 1:
        goto LABEL_371;
      case 2:
        goto LABEL_370;
      case 3:
        goto LABEL_369;
      case 4:
        goto LABEL_368;
      case 5:
        goto LABEL_367;
      case 6:
        goto LABEL_366;
      case 7:
        v214[6] = v206[6];
LABEL_366:
        v214[5] = v206[5];
LABEL_367:
        v214[4] = v206[4];
LABEL_368:
        v214[3] = v206[3];
LABEL_369:
        v214[2] = v206[2];
LABEL_370:
        v214[1] = v206[1];
LABEL_371:
        *v214 = *v206;
        break;
      default:
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, int *, __int64 *))(**((_QWORD **)this + 24) + 320LL))(
    *((_QWORD *)this + 24),
    this,
    6,
    &v494,
    v207);
  v220 = *((_QWORD *)this + 158);
  ++*((_DWORD *)this + 324);
  *((_DWORD *)this + 326) = 1;
  *((_DWORD *)this + 292) = -1;
  v13 = *(_QWORD *)(v220 + 8);
  if ( v13 )
    goto LABEL_3;
  v465 = 0;
LABEL_4:
  v464 = *((_DWORD *)this + 80);
  src = 1.797693134862316e308;
  if ( *((_DWORD *)this + 77) )
    src = *(double *)(*((_QWORD *)this + 165) + 32LL);
  v15 = a5;
  v16 = *((_DWORD *)this + 80);
  v17 = 0;
LABEL_7:
  if ( v16 < -2 )
  {
LABEL_8:
    if ( v16 == -4 )
      goto LABEL_60;
    goto LABEL_9;
  }
  while ( 1 )
  {
LABEL_60:
    if ( v15
      && ((*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64))(**((_QWORD **)this + 156) + 16LL))(
            *((_QWORD *)this + 156),
            this,
            1),
          v463)
      || *((_DWORD *)this + 26) == v17 )
    {
      result = ClpSimplex::internalFactorize(this, 1);
      if ( (_DWORD)result )
      {
        if ( *((_DWORD *)this + 78) == 10 )
        {
          *((_DWORD *)this + 80) = 5;
          return result;
        }
        if ( v463 == 1
          && (a8.m128i_i64[0] = *((_QWORD *)this + 95), *(double *)a8.m128i_i64 <= 1000.0)
          && (a8.m128i_i64[0] = *((_QWORD *)this + 96), *(double *)a8.m128i_i64 <= 1000.0) )
        {
          v173 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
          v174 = *((char **)this + 33);
          v175 = *((char **)this + 164);
          if ( v173 > 0 )
          {
            v176 = 0;
            do
            {
              while ( (v174[v176] & 0x40) != 0 )
              {
                v175[v176++] |= 0x40u;
                v173 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
                v174 = *((char **)this + 33);
                v175 = *((char **)this + 164);
                if ( v173 <= (int)v176 )
                  goto LABEL_288;
              }
              ++v176;
            }
            while ( v173 > (int)v176 );
          }
LABEL_288:
          if ( v173 && v174 != v175 )
          {
            v177 = v173 >> 3;
            if ( v173 >> 3 > 0 )
            {
              if ( (v175 >= v174 + 16 || v174 >= v175 + 16) && v177 > 1 )
              {
                v178 = 0;
                v179 = 0;
                do
                {
                  ++v179;
                  *(__m128i *)&v174[v178] = _mm_loadu_si128((const __m128i *)&v175[v178]);
                  v178 += 16;
                }
                while ( v177 >> 1 > v179 );
                v180 = 8LL * (v177 & 0xFFFFFFFE);
                v181 = &v175[v180];
                v182 = &v174[v180];
                if ( (v177 & 0xFFFFFFFE) != v177 )
                {
                  *v182 = *v181;
                  v182[1] = v181[1];
                  v182[2] = v181[2];
                  v182[3] = v181[3];
                  v182[4] = v181[4];
                  v182[5] = v181[5];
                  v182[6] = v181[6];
                  v182[7] = v181[7];
                }
                LODWORD(v183) = v177 - 1;
              }
              else
              {
                v428 = v175;
                v183 = v177 - 1;
                v429 = v174;
                do
                {
                  v430 = *v428;
                  v429 += 8;
                  v428 += 8;
                  *(v429 - 8) = v430;
                  *(v429 - 7) = *(v428 - 7);
                  *(v429 - 6) = *(v428 - 6);
                  *(v429 - 5) = *(v428 - 5);
                  *(v429 - 4) = *(v428 - 4);
                  *(v429 - 3) = *(v428 - 3);
                  *(v429 - 2) = *(v428 - 2);
                  v66 = (unsigned __int8)*(v428 - 1);
                  *(v429 - 1) = v66;
                }
                while ( v429 != &v174[8 * v183 + 8] );
              }
              v184 = 8LL * (int)v183 + 8;
              v175 += v184;
              v174 += v184;
            }
            switch ( v173 % 8 )
            {
              case 1:
                goto LABEL_479;
              case 2:
                goto LABEL_478;
              case 3:
                goto LABEL_477;
              case 4:
                goto LABEL_476;
              case 5:
                goto LABEL_475;
              case 6:
                goto LABEL_474;
              case 7:
                v174[6] = v175[6];
LABEL_474:
                v174[5] = v175[5];
LABEL_475:
                v174[4] = v175[4];
LABEL_476:
                v174[3] = v175[3];
LABEL_477:
                v174[2] = v175[2];
LABEL_478:
                v174[1] = v175[1];
LABEL_479:
                *v174 = *v175;
                break;
              default:
                break;
            }
          }
          if ( v14 <= 1 )
          {
            v397 = *((_DWORD *)this + 288);
            if ( v397 >= 0 && (*(_BYTE *)(*((_QWORD *)this + 33) + v397) & 7) != 1
              || (v397 = *((_DWORD *)this + 290), v397 >= 0) && (*(_BYTE *)(*((_QWORD *)this + 33) + v397) & 7) != 1 )
            {
              ClpSimplex::setFlagged(this, v397);
            }
            v398 = *((_QWORD *)this + 158);
            v399 = *(CoinFactorization **)(v398 + 8);
            v400 = 1664525 * *((_DWORD *)this + 89) + 1013904223;
            *(double *)a8.m128i_i64 = (double)v400 * 2.328306436538696e-10 * 0.499 + 0.5;
            if ( v399 )
            {
              v401 = *(double *)v399;
              *((_DWORD *)this + 89) = v400;
              *(double *)a8.m128i_i64 = fmax(*(double *)a8.m128i_i64, v401);
              CoinFactorization::pivotTolerance(v399, *(double *)a8.m128i_i64);
            }
            else
            {
              v421 = *(double **)(v398 + 16);
              if ( v421 )
              {
                v422 = v421[1];
                *((_DWORD *)this + 89) = v400;
                *(double *)a8.m128i_i64 = fmax(*(double *)a8.m128i_i64, v422);
                CoinOtherFactorization::pivotTolerance((CoinOtherFactorization *)v421, *(double *)a8.m128i_i64);
              }
              else
              {
                *((_DWORD *)this + 89) = v400;
              }
            }
          }
          else
          {
            v286 = *((_QWORD *)this + 158);
            v287 = *(CoinFactorization **)(v286 + 8);
            if ( v287 )
            {
              CoinFactorization::pivotTolerance(v287, 0.99);
            }
            else
            {
              v357 = *(CoinOtherFactorization **)(v286 + 16);
              if ( v357 )
                CoinOtherFactorization::pivotTolerance(v357, 0.99);
            }
          }
          v288 = *((int *)this + 27);
          v289 = *((_DWORD *)this + 26);
          v290 = *((__int64 **)this + 159);
          v291 = *((__int64 **)this + 151);
          v292 = *((_DWORD *)this + 27);
          v293 = &v290[v288];
          if ( v289 && v291 != v293 )
          {
            if ( v289 >> 3 > 0 )
            {
              v294 = *((_QWORD *)this + 151);
              v295 = &v290[v288];
              v296 = (unsigned int)((v289 >> 3) - 1);
              do
              {
                v297 = *v295;
                v295 += 8;
                v294 += 64;
                *(_QWORD *)(v294 - 64) = v297;
                *(_QWORD *)(v294 - 56) = *(v295 - 7);
                *(_QWORD *)(v294 - 48) = *(v295 - 6);
                *(_QWORD *)(v294 - 40) = *(v295 - 5);
                *(_QWORD *)(v294 - 32) = *(v295 - 4);
                *(_QWORD *)(v294 - 24) = *(v295 - 3);
                *(_QWORD *)(v294 - 16) = *(v295 - 2);
                *(_QWORD *)(v294 - 8) = *(v295 - 1);
              }
              while ( v295 != &v293[8 * v296 + 8] );
              v298 = ((int)v296 + 1LL) << 6;
              v293 = (__int64 *)((char *)v293 + v298);
              v291 = (__int64 *)((char *)v291 + v298);
            }
            switch ( v289 % 8 )
            {
              case 1:
                goto LABEL_616;
              case 2:
                goto LABEL_615;
              case 3:
                goto LABEL_614;
              case 4:
                goto LABEL_613;
              case 5:
                goto LABEL_612;
              case 6:
                goto LABEL_611;
              case 7:
                v291[6] = v293[6];
LABEL_611:
                v291[5] = v293[5];
LABEL_612:
                v291[4] = v293[4];
LABEL_613:
                v291[3] = v293[3];
LABEL_614:
                v291[2] = v293[2];
LABEL_615:
                v291[1] = v293[1];
LABEL_616:
                *v291 = *v293;
                break;
              default:
                break;
            }
          }
          v358 = *((__int64 **)this + 152);
          if ( v292 && v290 != v358 )
          {
            if ( v292 >> 3 > 0 )
            {
              v359 = *((_QWORD *)this + 152);
              v360 = v290;
              v361 = (unsigned int)((v292 >> 3) - 1);
              v293 = &v290[8 * v361 + 8];
              do
              {
                v362 = *v360;
                v360 += 8;
                v359 += 64;
                *(_QWORD *)(v359 - 64) = v362;
                *(_QWORD *)(v359 - 56) = *(v360 - 7);
                *(_QWORD *)(v359 - 48) = *(v360 - 6);
                *(_QWORD *)(v359 - 40) = *(v360 - 5);
                *(_QWORD *)(v359 - 32) = *(v360 - 4);
                *(_QWORD *)(v359 - 24) = *(v360 - 3);
                *(_QWORD *)(v359 - 16) = *(v360 - 2);
                *(_QWORD *)(v359 - 8) = *(v360 - 1);
              }
              while ( v293 != v360 );
              v363 = ((int)v361 + 1LL) << 6;
              v290 = (__int64 *)((char *)v290 + v363);
              v358 = (__int64 *)((char *)v358 + v363);
            }
            switch ( v292 % 8 )
            {
              case 1:
                goto LABEL_630;
              case 2:
                goto LABEL_629;
              case 3:
                goto LABEL_628;
              case 4:
                goto LABEL_627;
              case 5:
                goto LABEL_626;
              case 6:
                goto LABEL_625;
              case 7:
                v358[6] = v290[6];
LABEL_625:
                v358[5] = v290[5];
LABEL_626:
                v358[4] = v290[4];
LABEL_627:
                v358[3] = v290[3];
LABEL_628:
                v358[2] = v290[2];
LABEL_629:
                v358[1] = v290[1];
LABEL_630:
                *v358 = *v290;
                break;
              default:
                break;
            }
          }
          (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, int *, __int64, __int64 *))(**((_QWORD **)this + 24)
                                                                                                 + 320LL))(
            *((_QWORD *)this + 24),
            this,
            6,
            &v494,
            v66,
            v293);
          (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, int *))(**((_QWORD **)this + 24) + 320LL))(
            *((_QWORD *)this + 24),
            this,
            5,
            &v494);
          *((_DWORD *)this + 326) = 1;
          v463 = 2;
          if ( (unsigned int)ClpSimplex::internalFactorize(this, 2) )
            *((_QWORD *)this + 95) = 0x40C3880000000000LL;
        }
        else
        {
          v67 = *((_QWORD *)this + 158);
          v68 = *(CoinFactorization **)(v67 + 8);
          if ( v68 )
          {
            v69 = *((_DWORD *)v68 + 217);
            *((_DWORD *)v68 + 217) = 0;
            CoinFactorization::pivotTolerance(v68, 0.99);
          }
          else
          {
            v185 = *(CoinOtherFactorization **)(v67 + 16);
            if ( v185 )
              CoinOtherFactorization::pivotTolerance(v185, 0.99);
            v69 = 0;
          }
          **((_DWORD **)this + 157) = -1;
          ClpSimplex::internalFactorize(this, 2);
          v70 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
          if ( v70 )
            *(_DWORD *)(v70 + 868) = v69;
          (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, int *))(**((_QWORD **)this + 24) + 320LL))(
            *((_QWORD *)this + 24),
            this,
            6,
            &v494);
        }
        ++*((_DWORD *)this + 324);
      }
    }
    if ( *((_DWORD *)this + 80) != -4 )
      *((_DWORD *)this + 80) = -3;
LABEL_9:
    v18 = *((double *)a4 + 10);
    if ( v18 < 0.1 )
    {
      a8.m128i_i64[0] = 0x3E7AD7F29ABCAF48LL;
      if ( *((double *)this + 110) == 0.0000001 )
      {
        v64 = *((_DWORD *)a4 + 67);
        if ( v64 > 0 && *((_DWORD *)a4 + 71) - v64 > 25 )
        {
          v71 = *((_DWORD *)a4 + 62);
          if ( v71 )
          {
            if ( v18 <= 0.1 )
            {
              v72 = (double)v71;
              v73 = *((_DWORD *)a4 + 63);
              v74 = v18 / v72;
              v75 = fmax(0.0, v74);
              *(double *)a8.m128i_i64 = fmin(1.797693134862316e308, v74);
              v18 = v75;
              if ( v73 )
              {
                v76 = *((double *)a4 + 11);
                if ( v76 <= 0.1 )
                {
                  v77 = (double)v73;
                  v78 = *((_DWORD *)a4 + 64);
                  v79 = v76 / v77;
                  v18 = fmax(v75, v79);
                  *(double *)a8.m128i_i64 = fmin(*(double *)a8.m128i_i64, v79);
                  v80 = v18;
                  if ( v78 )
                  {
                    v18 = *((double *)a4 + 12);
                    if ( v18 <= 0.1 )
                    {
                      v81 = (double)v78;
                      v82 = *((_DWORD *)a4 + 65);
                      v83 = v18 / v81;
                      *(double *)a8.m128i_i64 = fmin(*(double *)a8.m128i_i64, v83);
                      v18 = fmax(v80, v83);
                      if ( v82 )
                      {
                        v84 = *((double *)a4 + 13);
                        if ( v84 <= 0.1 )
                        {
                          v85 = (double)v82;
                          v86 = *((_DWORD *)a4 + 66);
                          v87 = v84 / v85;
                          v18 = fmax(v18, v87);
                          *(double *)a8.m128i_i64 = fmin(*(double *)a8.m128i_i64, v87);
                          v88 = v18;
                          if ( v86 )
                          {
                            v18 = *((double *)a4 + 14);
                            if ( v18 <= 0.1 )
                            {
                              v89 = v18 / (double)v86;
                              *(double *)a8.m128i_i64 = fmin(*(double *)a8.m128i_i64, v89);
                              v18 = fmax(v88, v89);
                              if ( *(double *)a8.m128i_i64 < 0.00001 )
                              {
                                a8.m128i_i64[0] = 0x3F50624DD2F1A9FCLL;
                                if ( v18 < 0.001 )
                                {
                                  *((_DWORD *)this + 182) |= 0x400000u;
                                  *((_QWORD *)this + 110) = 0x3EB0C6F7A0B5ED8DLL;
                                  *((_QWORD *)this + 4) = 0x3EB0C6F7A0B5ED8DLL;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v19 = *((_QWORD *)this + 24);
    v494 = 4;
    (*(void (__fastcall **)(__int64, ClpSimplexPrimal *, __int64, int *, double, double))(*(_QWORD *)v19 + 320LL))(
      v19,
      this,
      9,
      &v494,
      v18,
      *(double *)a8.m128i_i64);
    v20 = *((_DWORD *)this + 306);
    v21 = *((_DWORD *)this + 337);
    v455 = *((double *)this + 111);
    if ( a6 && v21 < 0 )
    {
      *((_QWORD *)this + 95) = 0x416312D000000000LL;
      *((_QWORD *)this + 96) = 0x416312D000000000LL;
    }
    v22 = ClpSimplex::gutsOfSolution(this, nullptr, nullptr, v21 >= 0);
    v24 = *(double *)(*((_QWORD *)this + 165) + 32LL);
    if ( src != 0.0 || v24 == 0.0 || v455 / (double)(v20 + 10) >= 0.1 || (v25 = 3, v14 <= 10) )
      v25 = 0;
    if ( src < 0.000001 && v24 > 0.001 && v14 > 10 )
      v25 = 4;
    if ( v22 )
      v25 = 1;
    if ( v24 > 10000000.0 )
    {
      *(double *)a8.m128i_i64 = src * 100.0;
      if ( v24 > src * 100.0 )
      {
        v26 = *((_QWORD *)this + 158);
        v27 = *(double **)(v26 + 8);
        if ( v27 )
        {
          v28 = *v27;
        }
        else
        {
          v140 = *(_QWORD *)(v26 + 16);
          if ( !v140 )
            goto LABEL_31;
          v28 = *(double *)(v140 + 8);
        }
        a8.m128i_i64[0] = 0x3FBC28F5C28F5C29LL;
        if ( v28 < 0.11 )
          goto LABEL_31;
      }
    }
    a8.m128i_i64[0] = *((_QWORD *)this + 95);
    if ( *(double *)a8.m128i_i64 <= 1.0e10 )
      break;
    a8.m128i_i64[0] = *((_QWORD *)this + 96);
    if ( *(double *)a8.m128i_i64 <= 1.0e10 )
      break;
LABEL_31:
    v25 = 2;
    *((_DWORD *)this + 80) = v464;
    if ( v14 )
      goto LABEL_66;
LABEL_32:
    v15 = 1;
    if ( v22 != -123456789 )
      goto LABEL_33;
    v51 = *((char **)this + 164);
    if ( v51 )
      goto LABEL_67;
    v29 = *((_DWORD *)this + 26);
    v16 = v464;
    if ( v29 <= 0 )
    {
LABEL_213:
      v17 = 0;
      goto LABEL_7;
    }
LABEL_35:
    v30 = *((int *)this + 27);
    v31 = *((_QWORD *)this + 33);
    v32 = (_BYTE *)(v31 + v30);
    v33 = -((_DWORD)v31 + (_DWORD)v30) & 0xF;
    v34 = v33 + 15;
    if ( (unsigned int)(v33 + 15) < 0x11 )
      v34 = 17;
    if ( v34 > v29 - 1 )
    {
      LODWORD(v49) = 0;
      v17 = 0;
    }
    else
    {
      if ( (_DWORD)v33 )
      {
        v35 = (*v32 & 7) == 1;
        if ( (_DWORD)v33 == 1 )
        {
          v36 = 1;
        }
        else
        {
          v35 += (*(_BYTE *)(v31 + (int)v30 + 1) & 7) == 1;
          if ( (_DWORD)v33 == 2 )
          {
            v36 = 2;
          }
          else
          {
            v35 += (*(_BYTE *)(v31 + (int)v30 + 2) & 7) == 1;
            if ( (_DWORD)v33 == 3 )
            {
              v36 = 3;
            }
            else
            {
              v35 += (*(_BYTE *)(v31 + (int)v30 + 3) & 7) == 1;
              if ( (_DWORD)v33 == 4 )
              {
                v36 = 4;
              }
              else
              {
                v35 += (*(_BYTE *)(v31 + (int)v30 + 4) & 7) == 1;
                if ( (_DWORD)v33 == 5 )
                {
                  v36 = 5;
                }
                else
                {
                  v35 += (*(_BYTE *)(v31 + (int)v30 + 5) & 7) == 1;
                  if ( (_DWORD)v33 == 6 )
                  {
                    v36 = 6;
                  }
                  else
                  {
                    v35 += (*(_BYTE *)(v31 + (int)v30 + 6) & 7) == 1;
                    if ( (_DWORD)v33 == 7 )
                    {
                      v36 = 7;
                    }
                    else
                    {
                      v35 += (*(_BYTE *)(v31 + (int)v30 + 7) & 7) == 1;
                      if ( (_DWORD)v33 == 8 )
                      {
                        v36 = 8;
                      }
                      else
                      {
                        v35 += (*(_BYTE *)(v31 + (int)v30 + 8) & 7) == 1;
                        if ( (_DWORD)v33 == 9 )
                        {
                          v36 = 9;
                        }
                        else
                        {
                          v35 += (*(_BYTE *)(v31 + (int)v30 + 9) & 7) == 1;
                          if ( (_DWORD)v33 == 10 )
                          {
                            v36 = 10;
                          }
                          else
                          {
                            v35 += (*(_BYTE *)(v31 + (int)v30 + 10) & 7) == 1;
                            if ( (_DWORD)v33 == 11 )
                            {
                              v36 = 11;
                            }
                            else
                            {
                              v35 += (*(_BYTE *)(v31 + (int)v30 + 11) & 7) == 1;
                              if ( (_DWORD)v33 == 12 )
                              {
                                v36 = 12;
                              }
                              else
                              {
                                v35 += (*(_BYTE *)(v31 + (int)v30 + 12) & 7) == 1;
                                if ( (_DWORD)v33 == 13 )
                                {
                                  v36 = 13;
                                }
                                else
                                {
                                  v35 += (*(_BYTE *)(v31 + (int)v30 + 13) & 7) == 1;
                                  if ( (_DWORD)v33 == 14 )
                                  {
                                    v36 = 14;
                                  }
                                  else
                                  {
                                    v35 += (*(_BYTE *)(v31 + *((_DWORD *)this + 27) + 14) & 7) == 1;
                                    v36 = 15;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v36 = 0;
        v35 = 0;
      }
      v37 = 0;
      v38 = v29 - v33;
      v39 = (__m128i *)(v30 + v33 + v31);
      v40 = 0;
      do
      {
        ++v40;
        v41 = _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_290800), *v39++);
        v42 = _mm_and_si128(_mm_cmpeq_epi8(v41, (__m128i)xmmword_28D010), (__m128i)xmmword_28D010);
        v43 = _mm_cmpgt_epi8((__m128i)0LL, v42);
        v44 = _mm_unpacklo_epi8(v42, v43);
        v45 = _mm_unpackhi_epi8(v42, v43);
        v46 = _mm_cmpgt_epi16((__m128i)0LL, v44);
        v47 = _mm_add_epi32(_mm_add_epi32(v37, _mm_unpacklo_epi16(v44, v46)), _mm_unpackhi_epi16(v44, v46));
        a8 = _mm_cmpgt_epi16((__m128i)0LL, v45);
        v37 = _mm_add_epi32(_mm_add_epi32(v47, _mm_unpacklo_epi16(v45, a8)), _mm_unpackhi_epi16(v45, a8));
      }
      while ( v40 < v38 >> 4 );
      v48 = _mm_add_epi32(v37, _mm_srli_si128(v37, 8));
      LODWORD(v49) = (v38 & 0xFFFFFFF0) + v36;
      v17 = v35 + _mm_cvtsi128_si32(_mm_add_epi32(v48, _mm_srli_si128(v48, 4)));
      if ( (v38 & 0xFFFFFFF0) == v38 )
        goto LABEL_7;
    }
    v49 = (int)v49;
    do
    {
      v50 = (v32[v49++] & 7) == 1;
      v17 += v50;
    }
    while ( v29 > (int)v49 );
    if ( v16 < -2 )
      goto LABEL_8;
  }
  if ( !v25 )
  {
LABEL_33:
    if ( !v22 )
      goto LABEL_150;
    goto LABEL_34;
  }
  *((_DWORD *)this + 80) = v464;
  if ( !v14 )
    goto LABEL_32;
LABEL_66:
  v51 = *((char **)this + 164);
LABEL_67:
  v52 = *((_DWORD *)this + 27);
  v53 = *((_DWORD *)this + 26);
  v54 = *((__int64 **)this + 33);
  v55 = v52 + v53;
  if ( v53 + v52 && v54 != (__int64 *)v51 )
  {
    v56 = v55 >> 3;
    if ( v55 >> 3 > 0 )
    {
      if ( (v51 >= (char *)v54 + 16 || v54 >= (__int64 *)v51 + 2) && v56 > 1 )
      {
        v57 = 0;
        v58 = 0;
        do
        {
          ++v58;
          *(__m128i *)&v54[v57] = _mm_loadu_si128((const __m128i *)&v51[v57 * 8]);
          v57 += 2;
        }
        while ( v58 < v56 >> 1 );
        v59 = v56 & 0xFFFFFFFE;
        v60 = &v51[v59 * 8];
        v61 = &v54[v59];
        if ( (v56 & 0xFFFFFFFE) != v56 )
        {
          *(_BYTE *)v61 = *v60;
          *((_BYTE *)v61 + 1) = v60[1];
          *((_BYTE *)v61 + 2) = v60[2];
          *((_BYTE *)v61 + 3) = v60[3];
          *((_BYTE *)v61 + 4) = v60[4];
          *((_BYTE *)v61 + 5) = v60[5];
          *((_BYTE *)v61 + 6) = v60[6];
          *((_BYTE *)v61 + 7) = v60[7];
        }
        LODWORD(v62) = v56 - 1;
      }
      else
      {
        v190 = v51;
        v62 = v56 - 1;
        v191 = *((__int64 **)this + 33);
        do
        {
          v192 = *v190;
          ++v191;
          v190 += 8;
          *((_BYTE *)v191 - 8) = v192;
          *((_BYTE *)v191 - 7) = *(v190 - 7);
          *((_BYTE *)v191 - 6) = *(v190 - 6);
          *((_BYTE *)v191 - 5) = *(v190 - 5);
          *((_BYTE *)v191 - 4) = *(v190 - 4);
          *((_BYTE *)v191 - 3) = *(v190 - 3);
          *((_BYTE *)v191 - 2) = *(v190 - 2);
          *((_BYTE *)v191 - 1) = *(v190 - 1);
        }
        while ( &v54[v62 + 1] != v191 );
      }
      v63 = 8LL * (int)v62 + 8;
      v51 += v63;
      v54 = (__int64 *)((char *)v54 + v63);
    }
    switch ( v55 % 8 )
    {
      case 1:
        goto LABEL_112;
      case 2:
        goto LABEL_111;
      case 3:
        goto LABEL_110;
      case 4:
        goto LABEL_109;
      case 5:
        goto LABEL_108;
      case 6:
        goto LABEL_107;
      case 7:
        *((_BYTE *)v54 + 6) = v51[6];
LABEL_107:
        *((_BYTE *)v54 + 5) = v51[5];
LABEL_108:
        *((_BYTE *)v54 + 4) = v51[4];
LABEL_109:
        *((_BYTE *)v54 + 3) = v51[3];
LABEL_110:
        *((_BYTE *)v54 + 2) = v51[2];
LABEL_111:
        *((_BYTE *)v54 + 1) = v51[1];
LABEL_112:
        *(_BYTE *)v54 = *v51;
        break;
      default:
        break;
    }
    v53 = *((_DWORD *)this + 26);
    v52 = *((_DWORD *)this + 27);
  }
  v90 = *((__int64 **)this + 159);
  v91 = *((__int64 **)this + 151);
  v92 = &v90[v52];
  if ( v53 && v91 != v92 )
  {
    if ( v53 >> 3 > 0 )
    {
      v93 = *((__int64 **)this + 151);
      v94 = &v90[v52];
      v95 = (unsigned int)((v53 >> 3) - 1);
      v54 = &v91[8 * v95 + 8];
      do
      {
        v96 = *v94;
        v93 += 8;
        v94 += 8;
        *(v93 - 8) = v96;
        *(v93 - 7) = *(v94 - 7);
        *(v93 - 6) = *(v94 - 6);
        *(v93 - 5) = *(v94 - 5);
        *(v93 - 4) = *(v94 - 4);
        *(v93 - 3) = *(v94 - 3);
        *(v93 - 2) = *(v94 - 2);
        *(v93 - 1) = *(v94 - 1);
      }
      while ( v54 != v93 );
      v97 = ((int)v95 + 1LL) << 6;
      v92 = (__int64 *)((char *)v92 + v97);
      v91 = (__int64 *)((char *)v91 + v97);
    }
    switch ( v53 % 8 )
    {
      case 1:
        goto LABEL_127;
      case 2:
        goto LABEL_126;
      case 3:
        goto LABEL_125;
      case 4:
        goto LABEL_124;
      case 5:
        goto LABEL_123;
      case 6:
        goto LABEL_122;
      case 7:
        v91[6] = v92[6];
LABEL_122:
        v91[5] = v92[5];
LABEL_123:
        v91[4] = v92[4];
LABEL_124:
        v91[3] = v92[3];
LABEL_125:
        v91[2] = v92[2];
LABEL_126:
        v91[1] = v92[1];
LABEL_127:
        *v91 = *v92;
        break;
      default:
        break;
    }
  }
  v98 = *((__int64 **)this + 152);
  if ( v52 && v90 != v98 )
  {
    if ( v52 >> 3 > 0 )
    {
      v99 = *((_QWORD *)this + 152);
      v100 = v90;
      v101 = (unsigned int)((v52 >> 3) - 1);
      v54 = &v90[8 * v101 + 8];
      do
      {
        v102 = *v100;
        v100 += 8;
        v99 += 64;
        *(_QWORD *)(v99 - 64) = v102;
        *(_QWORD *)(v99 - 56) = *(v100 - 7);
        *(_QWORD *)(v99 - 48) = *(v100 - 6);
        *(_QWORD *)(v99 - 40) = *(v100 - 5);
        *(_QWORD *)(v99 - 32) = *(v100 - 4);
        *(_QWORD *)(v99 - 24) = *(v100 - 3);
        *(_QWORD *)(v99 - 16) = *(v100 - 2);
        *(_QWORD *)(v99 - 8) = *(v100 - 1);
      }
      while ( v54 != v100 );
      v103 = ((int)v101 + 1LL) << 6;
      v90 = (__int64 *)((char *)v90 + v103);
      v98 = (__int64 *)((char *)v98 + v103);
    }
    switch ( v52 % 8 )
    {
      case 1:
        goto LABEL_141;
      case 2:
        goto LABEL_140;
      case 3:
        goto LABEL_139;
      case 4:
        goto LABEL_138;
      case 5:
        goto LABEL_137;
      case 6:
        goto LABEL_136;
      case 7:
        v98[6] = v90[6];
LABEL_136:
        v98[5] = v90[5];
LABEL_137:
        v98[4] = v90[4];
LABEL_138:
        v98[3] = v90[3];
LABEL_139:
        v98[2] = v90[2];
LABEL_140:
        v98[1] = v90[1];
LABEL_141:
        *v98 = *v90;
        break;
      default:
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, int *, __int64, __int64 *))(**((_QWORD **)this + 24)
                                                                                         + 320LL))(
    *((_QWORD *)this + 24),
    this,
    6,
    &v494,
    v23,
    v54);
  if ( v25 > 2 )
  {
    v137 = *((_DWORD *)this + 326);
    v138 = v14 / 2;
    if ( v137 < 0 )
    {
      if ( v138 >= 100 )
        v138 = 100;
      *((_DWORD *)this + 326) = v138;
    }
    else
    {
      if ( v138 < 3 )
        v138 = 3;
      if ( v138 > v137 )
        v138 = *((_DWORD *)this + 326);
      *((_DWORD *)this + 326) = v138;
    }
  }
  else
  {
    v104 = *((_QWORD *)this + 158);
    v105 = *(CoinFactorization **)(v104 + 8);
    if ( v105 )
    {
      *(double *)a8.m128i_i64 = fmin(0.99, 1.01 * *(double *)v105);
      CoinFactorization::pivotTolerance(v105, *(double *)a8.m128i_i64);
    }
    else
    {
      v141 = *(double **)(v104 + 16);
      if ( v141 )
      {
        *(double *)a8.m128i_i64 = fmin(0.99, 1.01 * v141[1]);
        CoinOtherFactorization::pivotTolerance((CoinOtherFactorization *)v141, *(double *)a8.m128i_i64);
      }
    }
    *((_DWORD *)this + 326) = 1;
  }
  ++*((_DWORD *)this + 324);
  *((_DWORD *)this + 292) = -1;
  if ( v14 == 1 )
  {
    if ( (v139 = *((_DWORD *)this + 288), v139 >= 0) && (*(_BYTE *)(*((_QWORD *)this + 33) + v139) & 7) != 1
      || (v139 = *((_DWORD *)this + 290), v139 >= 0) && (*(_BYTE *)(*((_QWORD *)this + 33) + v139) & 7) != 1 )
    {
      ClpSimplex::setFlagged(this, v139);
    }
  }
  if ( (unsigned int)ClpSimplex::internalFactorize(this, 2) )
    *((_QWORD *)this + 95) = 0x40C3880000000000LL;
  v14 = 0;
  v15 = 1;
  v22 = ClpSimplex::gutsOfSolution(this, nullptr, nullptr, *((_DWORD *)this + 337) >= 0);
  v463 = 2;
  if ( v22 )
  {
LABEL_34:
    v29 = *((_DWORD *)this + 26);
    v16 = *((_DWORD *)this + 80);
    if ( v29 <= 0 )
      goto LABEL_213;
    goto LABEL_35;
  }
LABEL_150:
  v453 = v15;
  v106 = v22;
  if ( *((_DWORD *)this + 77) == (unsigned int)ClpSimplexProgress::lastIterationNumber(a4, 0) )
  {
    v234 = *((_BYTE **)this + 156);
    v235 = *(__int64 (__fastcall **)(ClpPrimalColumnPivot *))(*(_QWORD *)v234 + 40LL);
    if ( v235 == ClpPrimalColumnPivot::looksOptimal ? v234[20] : ((__int64 (*)(void))v235)() )
    {
      *((_DWORD *)this + 306) = 0;
      *((_QWORD *)this + 111) = 0;
    }
  }
  if ( (*((_BYTE *)this + 337) & 4) != 0 && !*((_DWORD *)this + 308) )
  {
    v107 = *((_DWORD *)this + 306);
    if ( v107 )
    {
      if ( *((int *)this + 77) > 300 && *((double *)this + 111) / (double)v107 < 0.0001 )
      {
        *((_DWORD *)this + 306) = 0;
        *((_QWORD *)this + 111) = 0;
      }
    }
  }
  v108 = !a6;
  if ( v463 == 2 || a6 )
  {
    v109 = *(_DWORD *)(*((_QWORD *)this + 165) + 112LL);
    goto LABEL_160;
  }
  v142 = ClpSimplexProgress::looping(a4);
  if ( v142 >= 0 )
  {
    result = *((unsigned int *)this + 80);
    if ( (_DWORD)result )
      result = *(unsigned int *)(*((_QWORD *)this + 165) + 112LL);
    else
      *((_QWORD *)this + 112) = 0;
    *((_DWORD *)this + 308) = result;
    *((_DWORD *)this + 80) = 10;
    return result;
  }
  v272 = *((ClpNonLinearCost **)this + 165);
  v109 = *((_DWORD *)v272 + 28);
  if ( v142 == -1 )
  {
LABEL_160:
    if ( !v109 && *((int *)a4 + 76) < 0 )
    {
      ClpSimplex::createRim(this, 4, 0, 0);
      v335 = *((void **)this + 165);
      if ( v335 )
      {
        ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
        operator delete(v335);
      }
      v336 = (ClpNonLinearCost *)operator new(0x98u);
      ClpNonLinearCost::ClpNonLinearCost(v336, this, 1);
      *((_QWORD *)this + 165) = v336;
      v337 = *((int *)a4 + 76) >> 31;
      *((_DWORD *)a4 + 76) ^= v337;
      *((_DWORD *)a4 + 76) -= v337;
      ClpSimplex::gutsOfSolution(this, nullptr, nullptr, a6);
    }
  }
  else
  {
    if ( v109 )
    {
      if ( *((int *)a4 + 73) > 5 )
      {
        v273 = *((_DWORD *)a4 + 76);
        if ( v273 <= 9 )
        {
          *((_DWORD *)a4 + 76) = ~v273;
          ClpNonLinearCost::zapCosts(v272);
        }
      }
    }
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
  }
  v110 = *((CoinMessageHandler **)this + 43);
  *((_DWORD *)this + 336) = 0;
  v111 = (CoinMessageHandler *)CoinMessageHandler::message(v110, 6, (ClpSimplexPrimal *)((char *)this + 416));
  srcf = (CoinMessageHandler *)CoinMessageHandler::operator<<(v111);
  ClpNonLinearCost::feasibleReportCost(*((ClpNonLinearCost **)this + 165));
  CoinMessageHandler::operator<<(srcf);
  v112 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                 *((CoinMessageHandler **)this + 43),
                                 *(_DWORD *)(*((_QWORD *)this + 165) + 112LL) > 0);
  v113 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v112);
  CoinMessageHandler::operator<<(v113);
  v114 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                 *((CoinMessageHandler **)this + 43),
                                 *((double *)this + 111) > 0.0);
  v115 = *((double *)this + 111);
  v116 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v114);
  CoinMessageHandler::operator<<(v116);
  v117 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                 *((CoinMessageHandler **)this + 43),
                                 *((_DWORD *)this + 307) < *((_DWORD *)this + 306));
  CoinMessageHandler::operator<<(v117);
  v118 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), -1);
  CoinMessageHandler::operator<<(v118, 0, v115);
  if ( *((_DWORD *)this + 308) )
  {
    ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, a6);
    ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
    v119 = *((_QWORD *)this + 165);
    v120 = *(_DWORD *)(v119 + 112);
    if ( v120 > 0 )
      goto LABEL_164;
  }
  else
  {
    v119 = *((_QWORD *)this + 165);
    v120 = *(_DWORD *)(v119 + 112);
    if ( v120 > 0 )
    {
LABEL_164:
      if ( *((double *)a4 + 15) != 0.0 || a6 || *((double *)this + 113) != 1.0e10 )
      {
        v121 = *(double *)(v119 + 32);
        goto LABEL_167;
      }
      srcd = *((double **)this + 147);
      v471 = *((_QWORD *)this + 129);
      v459 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26) + *((_DWORD *)this + 338);
      if ( (unsigned __int64)v459 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_764;
      *((_QWORD *)this + 147) = operator new[](8LL * v459);
      v237 = operator new[](8LL * v459);
      v238 = *((int *)this + 27);
      v239 = *((_QWORD *)this + 147);
      v240 = 0;
      v241 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64, double))this + 20);
      v242 = *(double *)this;
      *((_QWORD *)this + 129) = v237;
      *((_QWORD *)this + 131) = v237;
      *((_QWORD *)this + 149) = v239;
      v243 = v242 * *((double *)this + 11);
      v238 *= 8;
      v244 = (void *)(v238 + v237);
      *((_QWORD *)this + 148) = v238 + v239;
      *((_QWORD *)this + 130) = v244;
      if ( v241 )
      {
        v240 = (**v241)(v241, 0, 0, v495, 0, 2, 1.0e10);
        v244 = *((void **)this + 130);
      }
      v479 = v240;
      memset(v244, 0, 8LL * *((int *)this + 26));
      v245 = *((double **)this + 29);
      v246 = v479;
      if ( v245 )
      {
        v247 = *((_DWORD *)this + 27);
        v473 = v247;
        if ( v247 > 0 )
        {
          v248 = *((double **)this + 129);
          if ( (unsigned int)v247 > 0xA
            && (v245 >= v248 + 2 || v248 >= v245 + 2)
            && (v479 >= (unsigned __int64)(v248 + 2) || (unsigned __int64)v248 >= v479 + 16) )
          {
            v480 = 0;
            v249 = (v246 >> 3) & 1;
            if ( ((v246 >> 3) & 1) != 0 )
            {
              v480 = 1;
              *v248 = *(double *)v246 * v243 * *v245;
            }
            v250 = 0;
            v251 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v243, (__m128d)*(unsigned __int64 *)&v243);
            v485 = v247 - v249;
            v252 = (unsigned int)(v247 - v249) >> 1;
            v253 = 0;
            v254 = (v246 >> 3) & 1;
            v255 = (double *)(v246 + v254 * 8);
            v256 = &v245[v254];
            v257 = &v248[v254];
            do
            {
              ++v250;
              *(__m128d *)&v257[v253] = _mm_mul_pd(_mm_mul_pd(*(__m128d *)&v255[v253], v251), *(__m128d *)&v256[v253]);
              v253 += 2;
            }
            while ( v250 < v252 );
            v258 = (v485 & 0xFFFFFFFE) + v480;
            if ( (v485 & 0xFFFFFFFE) != v485 )
            {
              v259 = v258;
              v260 = v258 + 1;
              v248[v259] = *(double *)(v246 + 8 * v259) * v243 * v245[v259];
              if ( v260 < v473 )
                v248[v260] = v245[v260] * (v243 * *(double *)(v246 + 8LL * v260));
            }
          }
          else
          {
            v431 = 0;
            do
            {
              v248[v431 / 8] = *(double *)(v479 + v431) * v243 * v245[v431 / 8];
              v431 += 8LL;
            }
            while ( 8LL * (unsigned int)(v247 - 1) + 8 != v431 );
          }
        }
      }
      else
      {
        v345 = *((_DWORD *)this + 27);
        if ( v345 > 0 )
        {
          v346 = *((double **)this + 129);
          if ( (v479 >= (unsigned __int64)(v346 + 2) || (unsigned __int64)v346 >= v479 + 16) && (unsigned int)v345 > 0xE )
          {
            v474 = 0;
            if ( ((v479 >> 3) & 1) != 0 )
            {
              v474 = 1;
              *v346 = *(double *)v479 * v243;
            }
            v347 = 0;
            v348 = v345 - ((v479 >> 3) & 1);
            v349 = 0;
            v350 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v243, (__m128d)*(unsigned __int64 *)&v243);
            v351 = (v479 >> 3) & 1;
            v352 = v479 + v351 * 8;
            v353 = &v346[v351];
            do
            {
              ++v349;
              *(__m128d *)&v353[v347] = _mm_mul_pd(*(__m128d *)(v352 + v347 * 8), v350);
              v347 += 2;
            }
            while ( v349 < v348 >> 1 );
            v354 = (v348 & 0xFFFFFFFE) + v474;
            if ( (v348 & 0xFFFFFFFE) != v348 )
            {
              v355 = v354;
              v356 = v354 + 1;
              v346[v355] = *(double *)(v479 + 8 * v355) * v243;
              if ( v356 < v345 )
                v346[v356] = v243 * *(double *)(v479 + 8LL * v356);
            }
          }
          else
          {
            v441 = 0;
            do
            {
              v346[v441 / 8] = *(double *)(v479 + v441) * v243;
              v441 += 8LL;
            }
            while ( 8LL * (unsigned int)(v345 - 1) + 8 != v441 );
          }
        }
      }
      ClpSimplex::computeDuals(this, nullptr);
      if ( v459 > 0 )
      {
        v144 = 0;
        v261 = 0;
        while ( 1 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v261) & 7) == 1
            || (*(_BYTE *)(*((_QWORD *)this + 33) + v261) & 0x40) != 0 )
          {
            goto LABEL_438;
          }
          v264 = *((double *)this + 110);
          v265 = *(double *)(*((_QWORD *)this + 150) + 8 * v261);
          v266 = v265 - *(double *)(*((_QWORD *)this + 123) + 8 * v261);
          v267 = *((_QWORD *)this + 147);
          v268 = *(double *)(v267 + 8 * v261);
          v269 = srcd[v261] - v268;
          v270 = v268 * v269;
          if ( *(double *)(*((_QWORD *)this + 126) + 8 * v261) - v265 > v264 )
          {
            v262 = *((double *)this + 109);
            if ( v266 <= v264 )
            {
              if ( v270 > v262 || -v262 <= v270 )
                goto LABEL_438;
            }
            else if ( v270 > v262 || -v262 <= v270 )
            {
              goto LABEL_438;
            }
          }
          else
          {
            if ( v266 <= v264 )
              goto LABEL_438;
            v271 = *((double *)this + 109);
            if ( v270 > v271 || -v271 <= v270 )
              goto LABEL_438;
          }
          v263 = v144++;
          *(double *)(v267 + 8 * v263) = v268 / v269;
LABEL_438:
          ++v261;
          *((_QWORD *)a4 + 15) = 0xBFF0000000000000LL;
          if ( (unsigned int)(v459 - 1) + 1LL == v261 )
          {
            i = *((double **)this + 147);
            if ( !v144 )
              goto LABEL_232;
            v410 = v144;
            *(_QWORD *)v461 = &i[v410];
            if ( &i[v410] != i )
            {
              v486 = v144;
              v481 = 8LL * v144;
              _BitScanReverse64(&v411, (v410 * 8) >> 3);
              v475 = *((double **)this + 147);
              sub_16CBD0(i, (char *)&i[v410], 2 * (63LL - (int)(v411 ^ 0x3F)));
              v412 = v475;
              v144 = v486;
              v413 = v475 + 1;
              v414 = v475 + 1;
              if ( (v481 - 128 < 0) ^ __OFADD__(-128, v481) | (v481 == 128) )
              {
                if ( *(void **)v461 != v413 )
                {
                  do
                  {
                    v435 = *v414;
                    if ( *v412 > *v414 )
                    {
                      if ( v414 != v412 )
                      {
                        v491 = v144;
                        v488 = v414;
                        v483 = v413;
                        v477 = v412;
                        memmove(v413, v412, (char *)v414 - (char *)v412);
                        v144 = v491;
                        v414 = v488;
                        v413 = v483;
                        v412 = v477;
                      }
                      *v412 = v435;
                    }
                    else
                    {
                      v436 = *(v414 - 1);
                      v437 = v414 - 1;
                      if ( v436 > v435 )
                      {
                        while ( 1 )
                        {
                          v437[1] = v436;
                          v436 = *(v437 - 1);
                          if ( v436 <= v435 )
                            break;
                          --v437;
                        }
                      }
                      else
                      {
                        v437 = v414;
                      }
                      *v437 = v435;
                    }
                    ++v414;
                  }
                  while ( *(double **)v461 != v414 );
                }
                i = *((double **)this + 147);
              }
              else
              {
                v476 = v475 + 16;
                do
                {
                  v415 = *v414;
                  if ( *v412 > *v414 )
                  {
                    if ( v414 != v412 )
                    {
                      v493 = v144;
                      v490 = v414;
                      v487 = v413;
                      v482 = v412;
                      memmove(v413, v412, (char *)v414 - (char *)v412);
                      v144 = v493;
                      v414 = v490;
                      v413 = v487;
                      v412 = v482;
                    }
                    *v412 = v415;
                  }
                  else
                  {
                    v416 = *(v414 - 1);
                    v417 = v414 - 1;
                    if ( v416 > v415 )
                    {
                      while ( 1 )
                      {
                        v417[1] = v416;
                        v416 = *(v417 - 1);
                        if ( v416 <= v415 )
                          break;
                        --v417;
                      }
                    }
                    else
                    {
                      v417 = v414;
                    }
                    *v417 = v415;
                  }
                  ++v414;
                }
                while ( v476 != v414 );
                for ( i = *((double **)this + 147); *(double **)v461 != v414; *v433 = v432 )
                {
                  v432 = *v414;
                  v433 = v414 - 1;
                  v434 = *(v414 - 1);
                  if ( v434 > *v414 )
                  {
                    while ( 1 )
                    {
                      v433[1] = v434;
                      v434 = *(v433 - 1);
                      if ( v434 <= v432 )
                        break;
                      --v433;
                    }
                  }
                  else
                  {
                    v433 = v414;
                  }
                  ++v414;
                }
              }
            }
            v402 = -*i * *((double *)this + 113) * 1000.0;
            if ( v402 <= 1000.0 )
              v403 = 1000.0;
            else
              v403 = fmin(v402, 1.0000001e10);
            *((double *)this + 113) = v403;
            goto LABEL_679;
          }
        }
      }
      i = *((double **)this + 147);
LABEL_232:
      v144 = 0;
      if ( i )
      {
LABEL_679:
        v460 = v144;
        operator delete[](i);
        v144 = v460;
      }
      v145 = *((void **)this + 129);
      if ( v145 )
      {
        v456 = v144;
        operator delete[](v145);
        v144 = v456;
      }
      v146 = *((int *)this + 27);
      *((_QWORD *)this + 147) = srcd;
      *((_QWORD *)this + 149) = srcd;
      *((_QWORD *)this + 129) = v471;
      *((_QWORD *)this + 131) = v471;
      *((_QWORD *)this + 148) = &srcd[v146];
      *((_QWORD *)this + 130) = v471 + 8 * v146;
      if ( v144 || *(int *)(*((_QWORD *)this + 24) + 52LL) > 14 )
        ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
      v119 = *((_QWORD *)this + 165);
      v120 = *(_DWORD *)(v119 + 112);
    }
  }
  v121 = *(double *)(v119 + 32);
  if ( !v120 && *((double *)this + 113) == 1.0e10 && !a6 )
  {
    v147 = 100.0 * *((double *)this + 111);
    if ( v147 > 100000000.0 )
      v148 = fmin(v147, 1.00000001e10);
    else
      v148 = 100000000.0;
    *((double *)this + 113) = v148;
    ClpSimplexProgress::reset(a4);
    v121 = 1.123456e10;
    v489 = 1.1233436543999e10;
    goto LABEL_377;
  }
LABEL_167:
  if ( v121 <= 1.0 )
    goto LABEL_168;
  v148 = (v121 + 10.0) * 0.0001;
  v489 = v121 - v148;
LABEL_377:
  v484 = v121;
  ClpSimplexProgress::lastInfeasibility(a4, 1);
  srcc = v148;
  ClpSimplexProgress::lastInfeasibility(a4, 3);
  v458 = v148;
  ClpSimplexProgress::lastObjective(a4, 0);
  v469 = v148;
  ClpSimplexProgress::lastInfeasibility(a4, 0);
  v478 = v148;
  v221 = (*((double *)this + 113) + *((double *)this + 113)) * v148;
  v472 = v469 + v221;
  ClpSimplexProgress::lastObjective(a4, 1);
  v470 = (*((double *)this + 113) + *((double *)this + 113)) * srcc + v221;
  ClpSimplexProgress::lastObjective(a4, 3);
  v222 = *((double *)this + 113);
  v223 = v221 + (v222 + v222) * v458;
  if ( v472 - fmax(fabs(v472), COERCE_DOUBLE(*(_QWORD *)&v470 & 0x7FFFFFFFFFFFFFFFLL)) * 0.00001 - 0.0000001 <= v470
    || *((int *)this + 337) >= 0
    || v478 < srcc )
  {
    if ( v472 - fmax(fabs(v472), fabs(v223)) * 0.00001 - 0.0000001 <= v223 || *((int *)this + 337) >= 0 || v478 < srcc )
    {
      if ( (v489 > srcc || v484 == 1.123456e10) && v222 < 1.0e14 )
      {
        *((double *)this + 113) = v222 * 1.5;
        ClpSimplexProgress::reset(a4);
        if ( *(_DWORD *)(*((_QWORD *)this + 43) + 104LL) == 63 )
          printf("increasing weight to %g\n", *((double *)this + 113));
        ClpSimplex::gutsOfSolution(this, nullptr, nullptr, a6);
      }
    }
    else
    {
      if ( *(_DWORD *)(*((_QWORD *)this + 43) + 104LL) == 63 )
        printf("lastobj3 %g this3 %g force %d\n", v223, v472, *((_DWORD *)this + 326));
      v230 = *((_QWORD *)this + 158);
      v231 = *(_QWORD *)(v230 + 8);
      if ( v231 )
        v232 = *(_DWORD *)(v231 + 64);
      else
        v232 = *(_DWORD *)(*(_QWORD *)(v230 + 16) + 48LL);
      if ( v232 > 10 )
      {
        if ( *((int *)this + 326) >= 0 )
          v232 = *((_DWORD *)this + 326);
        v228 = 2 * v232 / 3u;
        if ( !v228 )
          v228 = 1;
        v233 = *((_QWORD *)this + 43);
        *((_DWORD *)this + 326) = v228;
        if ( *(_DWORD *)(v233 + 104) == 63 )
          goto LABEL_390;
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 43) + 104LL) == 63 )
      printf("lastobj %g this %g force %d\n", v470, v472, *((_DWORD *)this + 326));
    v224 = *((_QWORD *)this + 158);
    v225 = *(_QWORD *)(v224 + 8);
    if ( v225 )
      v226 = *(_DWORD *)(v225 + 64);
    else
      v226 = *(_DWORD *)(*(_QWORD *)(v224 + 16) + 48LL);
    if ( v226 > 10 )
    {
      v227 = *((_DWORD *)this + 326);
      if ( v227 < 0 )
        v227 = v226;
      v228 = v227 >> 2;
      if ( v228 <= 0 )
        v228 = 1;
      v229 = *((_QWORD *)this + 43);
      *((_DWORD *)this + 326) = v228;
      if ( *(_DWORD *)(v229 + 104) == 63 )
LABEL_390:
        printf("Reducing factorization frequency to %d\n", v228);
    }
  }
LABEL_168:
  v122 = *((_DWORD *)this + 84);
  if ( *((double *)this + 114) != 0.0
    || *((double *)this + 115) != 0.0
    || *((double *)a4 + 4) < *((double *)a4 + 3) - (fabs(*((double *)this + 9)) + 10.0) * 0.000000001 )
  {
LABEL_170:
    if ( *((_DWORD *)this + 306) )
      goto LABEL_307;
    v123 = *((_QWORD *)this + 165);
LABEL_172:
    v108 |= *(double *)(v123 + 32) == 0.0;
LABEL_173:
    if ( !v108 && *((int *)this + 337) >= 0 )
    {
      if ( *((_DWORD *)this + 80) == -5 )
      {
LABEL_452:
        if ( !*(_DWORD *)(*((_QWORD *)this + 165) + 112LL) )
        {
          *((_DWORD *)this + 80) = 2;
          v108 = 0;
          goto LABEL_177;
        }
        v274 = *((double *)this + 113);
        if ( v274 >= 1.0e18 && *((_DWORD *)this + 327) == 101 )
        {
          *((_QWORD *)this + 113) = 0x42A2309CE5400000LL;
          ClpSimplexProgress::reset(a4);
          ClpSimplexPrimal::unPerturb(this);
          v274 = *((double *)this + 113);
        }
        if ( v274 >= 1.0e18 )
        {
          v275 = *((void **)this + 27);
          *((_DWORD *)this + 80) = 1;
          if ( v275 )
            operator delete[](v275);
          v276 = *((int *)this + 26);
          if ( v276 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_764;
          v277 = (__int64 *)operator new[](8 * v276);
          v278 = *((_DWORD *)this + 26);
          v279 = *((__int64 **)this + 16);
          *((_QWORD *)this + 27) = v277;
          v108 = v278 == 0 || v279 == v277;
          if ( v108 )
          {
LABEL_313:
            v108 = 0;
            goto LABEL_314;
          }
          if ( v278 >> 3 > 0 )
          {
            v280 = v277;
            v281 = v279;
            v282 = (unsigned int)((v278 >> 3) - 1);
            do
            {
              v283 = *v281;
              v280 += 8;
              v281 += 8;
              *(v280 - 8) = v283;
              *(v280 - 7) = *(v281 - 7);
              *(v280 - 6) = *(v281 - 6);
              *(v280 - 5) = *(v281 - 5);
              *(v280 - 4) = *(v281 - 4);
              *(v280 - 3) = *(v281 - 3);
              *(v280 - 2) = *(v281 - 2);
              *(v280 - 1) = *(v281 - 1);
            }
            while ( &v277[8 * v282 + 8] != v280 );
            v284 = ((int)v282 + 1LL) << 6;
            v279 = (__int64 *)((char *)v279 + v284);
            v277 = (__int64 *)((char *)v277 + v284);
          }
          switch ( v278 % 8 )
          {
            case 1:
              goto LABEL_639;
            case 2:
              goto LABEL_638;
            case 3:
              goto LABEL_637;
            case 4:
              goto LABEL_636;
            case 5:
              goto LABEL_635;
            case 6:
              goto LABEL_634;
            case 7:
              v277[6] = v279[6];
LABEL_634:
              v277[5] = v279[5];
LABEL_635:
              v277[4] = v279[4];
LABEL_636:
              v277[3] = v279[3];
LABEL_637:
              v277[2] = v279[2];
LABEL_638:
              v277[1] = v279[1];
LABEL_639:
              *v277 = *v279;
              break;
            default:
              break;
          }
LABEL_314:
          if ( *((_DWORD *)this + 80) )
            goto LABEL_177;
          goto LABEL_315;
        }
        *((double *)this + 113) = v274 * 5.0;
        ClpSimplexProgress::reset(a4);
        ++*((_DWORD *)this + 324);
        v340 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)this + 43),
                                       18,
                                       (ClpSimplexPrimal *)((char *)this + 416));
        v341 = *((double *)this + 113);
        v342 = CoinMessageHandler::operator<<(v340);
        CoinMessageHandler::operator<<(v342, 0, v341);
        ClpSimplex::createRim(this, 4, 0, 0);
        v343 = a6;
LABEL_594:
        ClpSimplex::gutsOfSolution(this, nullptr, nullptr, v343);
        v108 = 0;
        *((_DWORD *)this + 80) = -1;
        goto LABEL_177;
      }
      goto LABEL_176;
    }
    v149 = *((_QWORD *)this + 165);
    if ( !*(_DWORD *)(v149 + 112) || *(double *)(v149 + 32) <= 0.001 && *((double *)this + 115) == 0.0 )
    {
      if ( *((_DWORD *)this + 327) == 101 )
      {
        srcg = v122;
        v108 = ClpSimplexPrimal::unPerturb(this);
        LOBYTE(v122) = srcg;
        if ( (*((int *)this + 26) > 20000 || *((_DWORD *)this + 306)) && !*((_DWORD *)this + 320) )
          v108 = 0;
        *a2 = -1;
      }
      else
      {
        v108 = 0;
      }
      srcb = v122;
      v163 = ClpSimplexPrimal::unflag(this);
      if ( *a2 == *((_DWORD *)this + 77) )
      {
        v164 = v163 != 0;
        if ( !v163 )
        {
          v330 = *((ClpNonLinearCost **)this + 165);
          v454 = *((double *)this + 110);
          v331 = v454 + v454 + fmin(0.0001, *((double *)this + 95));
          *((double *)this + 110) = v331;
          ClpNonLinearCost::checkInfeasibilities(v330, v331);
          v332 = *((double **)this + 165);
          v333 = v332[4];
          *((double *)this + 110) = v454;
          ClpNonLinearCost::checkInfeasibilities((ClpNonLinearCost *)v332, v454);
          v334 = 1;
          if ( v333 != 0.0 )
            v334 = v164;
          if ( !v334 && (srcb & 1) == 0 )
          {
            *((_DWORD *)this + 80) = 1;
            goto LABEL_177;
          }
          *((_DWORD *)this + 80) = 0;
          v172 = *((_QWORD *)this + 165);
          goto LABEL_316;
        }
      }
      v165 = (CoinMessageHandler *)CoinMessageHandler::message(
                                     *((CoinMessageHandler **)this + 43),
                                     19,
                                     (ClpSimplexPrimal *)((char *)this + 416));
      v166 = *((double *)this + 110);
      v167 = CoinMessageHandler::operator<<(v165);
      CoinMessageHandler::operator<<(v167, 0, v166);
      v168 = *((_DWORD *)this + 320);
      if ( v168 > 3 )
      {
        *((_DWORD *)this + 80) = 0;
        if ( *a2 >= *((_DWORD *)this + 77) )
        {
LABEL_315:
          v172 = *((_QWORD *)this + 165);
          goto LABEL_316;
        }
        v329 = CoinMessageHandler::message(
                 *((CoinMessageHandler **)this + 43),
                 13,
                 (ClpSimplexPrimal *)((char *)this + 416));
        CoinMessageHandler::operator<<(v329, 0, v166);
        goto LABEL_314;
      }
      v169 = v168 + 1;
      ++*((_DWORD *)this + 324);
      *((_DWORD *)this + 320) = v169;
      if ( v169 == 1 )
      {
        v405 = *((_QWORD *)this + 158);
        v406 = *(double **)(v405 + 8);
        if ( v406 )
          CoinFactorization::zeroTolerance((CoinFactorization *)v406, fmin(v406[1], 1.0e-15));
        else
          CoinOtherFactorization::zeroTolerance(
            *(CoinOtherFactorization **)(v405 + 16),
            fmin(*(double *)(*(_QWORD *)(v405 + 16) + 16LL), 1.0e-15));
      }
      *a2 = *((_DWORD *)this + 77);
      v170 = *((double *)this + 110);
      v171 = *((double *)this + 4);
      if ( v170 != v171 )
      {
        v404 = CoinMessageHandler::message(
                 *((CoinMessageHandler **)this + 43),
                 17,
                 (ClpSimplexPrimal *)((char *)this + 416));
        CoinMessageHandler::operator<<(v404, 0, v170);
        v171 = *((double *)this + 4);
        v170 = *((double *)this + 110);
      }
      *((double *)this + 110) = v171;
      ClpSimplex::createRim(this, 4, 0, 0);
      ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), v170);
      ClpSimplex::gutsOfSolution(this, nullptr, nullptr, a6);
      if ( *((double *)this + 114) == 0.0 && *((double *)this + 115) == 0.0 )
      {
        *((_DWORD *)this + 306) = 0;
        *((_QWORD *)this + 111) = 0;
        *((_DWORD *)this + 308) = 0;
        *((_QWORD *)this + 112) = 0;
      }
      else if ( *((_DWORD *)this + 306) )
      {
        goto LABEL_176;
      }
      v172 = *((_QWORD *)this + 165);
      if ( !*(_DWORD *)(v172 + 112) && *a2 >= 0 )
      {
        *((_DWORD *)this + 80) = 0;
        goto LABEL_316;
      }
LABEL_176:
      *((_DWORD *)this + 80) = -1;
      goto LABEL_177;
    }
    srca = *((void **)this + 113);
    ClpSimplex::createRim(this, 4, 0, 0);
    ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), 0.0);
    v457 = a6;
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, a6);
    ClpSimplex::createRim(this, 4, 0, 0);
    ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
    v150 = *((ClpNonLinearCost **)this + 165);
    if ( !*((_DWORD *)v150 + 28) )
    {
      *((_DWORD *)this + 80) = -1;
      v396 = *((double *)this + 110);
      v108 = 0;
      *((_QWORD *)this + 113) = srca;
      ClpNonLinearCost::checkInfeasibilities(v150, v396);
      goto LABEL_314;
    }
    *((_QWORD *)this + 113) = 0x46293E5939A08CEALL;
    if ( a6 )
      LOBYTE(a6) = *((_DWORD *)this + 337) >= 0;
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, a6);
    v468 = fmax(*(double *)&srca, v467);
    *((double *)this + 113) = v468;
    if ( v468 >= 1.0e18 )
    {
      if ( *((_DWORD *)this + 327) == 101 )
      {
LABEL_642:
        v364 = ClpSimplexPrimal::unPerturb(this);
        v365 = *((double **)this + 165);
        v108 = v364;
        if ( v365[4] <= 0.1 )
        {
          ClpNonLinearCost::checkInfeasibilities((ClpNonLinearCost *)v365, *((double *)this + 110));
          *((_DWORD *)this + 306) = 1;
          *((_DWORD *)this + 80) = -1;
          if ( v108 )
            goto LABEL_177;
          v468 = *((double *)this + 113);
          v367 = v468;
        }
        else
        {
          ClpNonLinearCost::checkInfeasibilities((ClpNonLinearCost *)v365, *((double *)this + 110));
          v366 = *((double *)this + 113);
          *((_DWORD *)this + 306) = 1;
          *((_DWORD *)this + 80) = -1;
          v468 = v366;
          v367 = v366;
        }
        if ( v367 < 1.0e18 )
        {
LABEL_255:
          if ( v468 >= 1.0e18 )
            goto LABEL_267;
          v151 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64))this + 20);
          v152 = nullptr;
          if ( v151 )
          {
            v152 = (double *)(**v151)(v151, 0, 0, v495, 0, 2);
            v468 = *((double *)this + 113);
          }
          v153 = *((_QWORD *)this + 29);
          v154 = *((_DWORD *)this + 27);
          if ( v153 )
          {
            if ( v154 > 0 )
            {
              v155 = 0.0;
              v156 = 8LL * (unsigned int)(v154 - 1) + 8;
              v157 = 0;
              do
              {
                v158 = *(double *)(v153 + v157) * v152[v157 / 8];
                v157 += 8LL;
                v155 = fmax(v155, fabs(v158));
              }
              while ( v156 != v157 );
              goto LABEL_262;
            }
          }
          else if ( v154 > 0 )
          {
            v155 = 0.0;
            v423 = (__int64)&v152[(unsigned int)(v154 - 1) + 1];
            do
            {
              v424 = *v152++;
              v155 = fmax(v155, fabs(v424));
            }
            while ( v152 != (double *)v423 );
LABEL_262:
            v159 = *((_DWORD *)this + 306);
            v160 = (v155 + 0.000001) * 1.0e12;
            if ( !v159 )
              goto LABEL_265;
            v161 = *((double *)this + 111) / (double)v159;
            if ( v160 > v161 )
              goto LABEL_265;
            goto LABEL_264;
          }
          v440 = *((_DWORD *)this + 306);
          v162 = 1000000.0;
          if ( !v440 || (v161 = *((double *)this + 111) / (double)v440, v162 = 1000000.0, v161 < 1000000.0) )
          {
LABEL_266:
            if ( v162 > v468 )
            {
              *((double *)this + 113) = v468 * 5.0;
              ClpSimplexProgress::reset(a4);
              ++*((_DWORD *)this + 324);
              v425 = (CoinMessageHandler *)CoinMessageHandler::message(
                                             *((CoinMessageHandler **)this + 43),
                                             18,
                                             (ClpSimplexPrimal *)((char *)this + 416));
              v426 = *((double *)this + 113);
              v427 = CoinMessageHandler::operator<<(v425);
              CoinMessageHandler::operator<<(v427, 0, v426);
              ClpSimplex::createRim(this, 4, 0, 0);
              ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), 0.0);
              v343 = v457;
              goto LABEL_594;
            }
LABEL_267:
            *((_DWORD *)this + 80) = 1;
            v108 = 0;
            goto LABEL_177;
          }
LABEL_264:
          v160 = v161;
LABEL_265:
          v162 = fmin(v160, 1.0e18);
          goto LABEL_266;
        }
LABEL_645:
        v368 = *((void **)this + 27);
        if ( v368 )
          operator delete[](v368);
        if ( (*((_DWORD *)this + 84) & 0x3000000) != 0 )
        {
          *((_QWORD *)this + 27) = 0;
        }
        else
        {
          v369 = *((int *)this + 26);
          if ( v369 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_764;
          v370 = operator new[](8 * v369);
          v371 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64))this + 20);
          *((_QWORD *)this + 27) = v370;
          v372 = *((int *)this + 27);
          if ( v371 )
          {
            srce = (void *)(**v371)(v371, 0, 0, v495, 0, 2);
            if ( srce )
            {
              if ( v372 > 0xFFFFFFFFFFFFFFFLL )
                goto LABEL_764;
              v373 = 8 * v372;
              v374 = (void *)operator new[](v373);
              memcpy(v374, srce, v373);
            }
            else
            {
              v374 = nullptr;
            }
            v375 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64))this + 20);
            v376 = 8LL * *((int *)this + 27);
            if ( v375 )
              v377 = (void *)(**v375)(v375, 0, 0, v495, 0, 2);
            else
              v377 = nullptr;
          }
          else
          {
            v376 = 8 * v372;
            v374 = nullptr;
            v377 = nullptr;
          }
          memset(v377, 0, v376);
          *((_QWORD *)this + 113) = 0x3FF0000000000000LL;
          ClpSimplex::createRim(this, 4, 0, 0);
          ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
          ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
          v378 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, __int64))this + 20);
          v379 = nullptr;
          v380 = 8LL * *((int *)this + 27);
          if ( v378 )
            v379 = (void *)(**v378)(v378, 0, 0, v495, 0, 2);
          memcpy(v379, v374, v380);
          operator delete[](v374);
          v381 = *((_DWORD *)this + 26);
          if ( v381 > 0 )
          {
            v382 = *((double **)this + 27);
            v383 = *((double **)this + 16);
            if ( (v382 >= v383 + 2 || v383 >= v382 + 2) && (unsigned int)v381 > 0xD )
            {
              if ( (((unsigned __int64)v383 >> 3) & 1) != 0 )
              {
                v106 = 1;
                *v382 = -*v383;
              }
              v384 = v381 - (((unsigned __int64)v383 >> 3) & 1);
              v385 = 0;
              v386 = ((unsigned __int64)v383 >> 3) & 1;
              v387 = 0;
              v388 = &v383[v386];
              v389 = &v382[v386];
              do
              {
                ++v387;
                *(double *)&v390 = -v388[v385];
                *((double *)&v390 + 1) = -v388[v385 + 1];
                *(_OWORD *)&v389[v385] = v390;
                v385 += 2;
              }
              while ( v387 < v384 >> 1 );
              v391 = (v384 & 0xFFFFFFFE) + v106;
              if ( (v384 & 0xFFFFFFFE) != v384 )
              {
                v392 = v391;
                v393 = v383[v391];
                v394 = v391 + 1;
                v382[v392] = -v393;
                if ( v381 > v394 )
                  v382[v394] = -v383[v394];
              }
            }
            else
            {
              v438 = 8LL * (unsigned int)(v381 - 1) + 8;
              v439 = 0;
              do
              {
                v382[v439 / 8] = -v383[v439 / 8];
                v439 += 8LL;
              }
              while ( v439 != v438 );
            }
          }
        }
        *((_QWORD *)this + 113) = 0;
        ClpSimplex::createRim(this, 4, 0, 0);
        ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
        ClpSimplex::gutsOfSolution(this, nullptr, nullptr, v457);
        *((_QWORD *)this + 113) = 0x46293E5939A08CEALL;
        v395 = *((_QWORD *)this + 165);
        *((_QWORD *)this + 112) = *(_QWORD *)(v395 + 32);
        *((_DWORD *)this + 308) = *(_DWORD *)(v395 + 112);
        goto LABEL_267;
      }
      if ( *((_DWORD *)this + 306) )
        goto LABEL_645;
    }
    else
    {
      if ( *((_DWORD *)this + 306) )
        goto LABEL_255;
      if ( *((_DWORD *)this + 327) == 101 )
        goto LABEL_642;
    }
    if ( *((double *)this + 96) > 0.01 && (*((_DWORD *)this + 182) & 0x2100) == 0 )
    {
      v338 = *((_QWORD *)this + 158);
      v339 = *(CoinFactorization **)(v338 + 8);
      if ( v339 )
      {
        v108 = 1;
        CoinFactorization::pivotTolerance(v339, fmax(0.9, *(double *)v339));
      }
      else
      {
        v442 = *(double **)(v338 + 16);
        v108 = 1;
        if ( v442 )
          CoinOtherFactorization::pivotTolerance((CoinOtherFactorization *)v442, fmax(0.9, v442[1]));
      }
      goto LABEL_314;
    }
    goto LABEL_645;
  }
  v123 = *((_QWORD *)this + 165);
  *((_DWORD *)this + 306) = 0;
  *((_QWORD *)this + 111) = 0;
  *((_DWORD *)this + 308) = 0;
  *((_QWORD *)this + 112) = 0;
  v186 = *(_DWORD *)(v123 + 112);
  if ( !a9 )
  {
    if ( !v186 )
      goto LABEL_172;
    goto LABEL_595;
  }
  *((_DWORD *)this + 306) = -776;
  if ( v186 )
  {
LABEL_595:
    v344 = *(double *)(v123 + 32);
    if ( v344 / (double)v186 > fmin(0.01, *((double *)this + 95)) + *((double *)this + 110) )
    {
      *((double *)this + 115) = v344;
      *((_DWORD *)this + 308) = v186;
      *((double *)this + 112) = v344;
      srch = v122;
      ClpSimplexPrimal::unflag(this);
      LOBYTE(v122) = srch;
    }
    goto LABEL_170;
  }
LABEL_307:
  v187 = *((_DWORD *)this + 80);
  if ( v187 == -4 )
    goto LABEL_173;
  if ( v187 == -5 )
    goto LABEL_452;
  *((_DWORD *)this + 80) = -1;
  v108 &= v463 == 3;
  if ( !v108 )
    goto LABEL_177;
  ClpSimplexPrimal::unflag(this);
  v188 = *((double *)this + 111);
  if ( v188 >= 0.001
    && v188 / (double)*((int *)this + 306) >= 0.00001
    && *((_DWORD *)this + 77) != (unsigned int)ClpSimplexProgress::lastIterationNumber(a4, 0)
    || *((_DWORD *)this + 308) )
  {
    goto LABEL_313;
  }
  v285 = *((_DWORD *)this + 320);
  if ( v285 <= 3 )
  {
    ++*((_DWORD *)this + 324);
    v108 = 0;
    *((_DWORD *)this + 320) = v285 + 1;
    goto LABEL_314;
  }
  v172 = *((_QWORD *)this + 165);
  v108 = 0;
  *((_QWORD *)this + 40) = 0x500000000LL;
LABEL_316:
  v189 = (*(double *)(*((_QWORD *)this + 20) + 8LL) + *(double *)(v172 + 8))
       / (*((double *)this + 11)
        * *((double *)this + 12));
  if ( fabs(v189 - *((double *)this + 9)) > fmax(fabs(v189), fabs(*((double *)this + 9))) * 1.0e-10 + 0.00000001 )
    *((double *)this + 9) = v189;
LABEL_177:
  (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, int *))(**((_QWORD **)this + 24) + 320LL))(
    *((_QWORD *)this + 24),
    this,
    5,
    &v494);
  if ( (unsigned int)v463 <= 1 )
  {
    v299 = *((_BYTE **)this + 164);
    if ( v463 == 1 )
    {
      if ( v299 )
      {
LABEL_499:
        v303 = *((_DWORD *)this + 27);
        v304 = *((_DWORD *)this + 26);
        v305 = *((_BYTE **)this + 33);
        v306 = v303 + v304;
        if ( v304 + v303 && v305 != v299 )
        {
          v307 = v306 >> 3;
          if ( v306 >> 3 > 0 )
          {
            if ( (v299 >= v305 + 16 || v305 >= v299 + 16) && v307 > 1 )
            {
              v308 = 0;
              v309 = 0;
              do
              {
                ++v309;
                *(__m128i *)&v299[v308] = _mm_loadu_si128((const __m128i *)&v305[v308]);
                v308 += 16;
              }
              while ( v309 < v307 >> 1 );
              v310 = 8LL * (v307 & 0xFFFFFFFE);
              v311 = &v305[v310];
              v312 = &v299[v310];
              if ( v307 != (v307 & 0xFFFFFFFE) )
              {
                *v312 = *v311;
                v312[1] = v311[1];
                v312[2] = v311[2];
                v312[3] = v311[3];
                v312[4] = v311[4];
                v312[5] = v311[5];
                v312[6] = v311[6];
                v312[7] = v311[7];
              }
              LODWORD(v313) = v307 - 1;
            }
            else
            {
              v407 = *((char **)this + 33);
              v313 = v307 - 1;
              v408 = v299;
              do
              {
                v409 = *v407;
                v408 += 8;
                v407 += 8;
                *(v408 - 8) = v409;
                *(v408 - 7) = *(v407 - 7);
                *(v408 - 6) = *(v407 - 6);
                *(v408 - 5) = *(v407 - 5);
                *(v408 - 4) = *(v407 - 4);
                *(v408 - 3) = *(v407 - 3);
                *(v408 - 2) = *(v407 - 2);
                *(v408 - 1) = *(v407 - 1);
              }
              while ( &v299[8 * v313 + 8] != v408 );
            }
            v314 = 8LL * (int)v313 + 8;
            v305 += v314;
            v299 += v314;
          }
          switch ( v306 % 8 )
          {
            case 1:
              goto LABEL_517;
            case 2:
              goto LABEL_516;
            case 3:
              goto LABEL_515;
            case 4:
              goto LABEL_514;
            case 5:
              goto LABEL_513;
            case 6:
              goto LABEL_512;
            case 7:
              v299[6] = v305[6];
LABEL_512:
              v299[5] = v305[5];
LABEL_513:
              v299[4] = v305[4];
LABEL_514:
              v299[3] = v305[3];
LABEL_515:
              v299[2] = v305[2];
LABEL_516:
              v299[1] = v305[1];
LABEL_517:
              *v299 = *v305;
              break;
            default:
              break;
          }
          v303 = *((_DWORD *)this + 27);
          v304 = *((_DWORD *)this + 26);
        }
        v315 = *((_QWORD **)this + 159);
        v316 = *((_QWORD **)this + 151);
        v317 = &v315[v303];
        if ( v304 && v317 != v316 )
        {
          if ( v304 >> 3 > 0 )
          {
            v318 = &v315[v303];
            v319 = *((__int64 **)this + 151);
            v320 = (unsigned int)((v304 >> 3) - 1);
            do
            {
              v321 = *v319;
              v318 += 8;
              v319 += 8;
              *(v318 - 8) = v321;
              *(v318 - 7) = *(v319 - 7);
              *(v318 - 6) = *(v319 - 6);
              *(v318 - 5) = *(v319 - 5);
              *(v318 - 4) = *(v319 - 4);
              *(v318 - 3) = *(v319 - 3);
              *(v318 - 2) = *(v319 - 2);
              *(v318 - 1) = *(v319 - 1);
            }
            while ( v318 != &v317[8 * v320 + 8] );
            v322 = ((int)v320 + 1LL) << 6;
            v316 = (_QWORD *)((char *)v316 + v322);
            v317 = (_QWORD *)((char *)v317 + v322);
          }
          switch ( v304 % 8 )
          {
            case 1:
              goto LABEL_532;
            case 2:
              goto LABEL_531;
            case 3:
              goto LABEL_530;
            case 4:
              goto LABEL_529;
            case 5:
              goto LABEL_528;
            case 6:
              goto LABEL_527;
            case 7:
              v317[6] = v316[6];
LABEL_527:
              v317[5] = v316[5];
LABEL_528:
              v317[4] = v316[4];
LABEL_529:
              v317[3] = v316[3];
LABEL_530:
              v317[2] = v316[2];
LABEL_531:
              v317[1] = v316[1];
LABEL_532:
              *v317 = *v316;
              break;
            default:
              break;
          }
        }
        v323 = *((_QWORD **)this + 152);
        if ( v303 && v315 != v323 )
        {
          if ( v303 >> 3 > 0 )
          {
            v324 = v315;
            v325 = *((__int64 **)this + 152);
            v326 = (unsigned int)((v303 >> 3) - 1);
            do
            {
              v327 = *v325;
              v325 += 8;
              v324 += 8;
              *(v324 - 8) = v327;
              *(v324 - 7) = *(v325 - 7);
              *(v324 - 6) = *(v325 - 6);
              *(v324 - 5) = *(v325 - 5);
              *(v324 - 4) = *(v325 - 4);
              *(v324 - 3) = *(v325 - 3);
              *(v324 - 2) = *(v325 - 2);
              *(v324 - 1) = *(v325 - 1);
            }
            while ( v325 != &v323[8 * v326 + 8] );
            v328 = ((int)v326 + 1LL) << 6;
            v323 = (_QWORD *)((char *)v323 + v328);
            v315 = (_QWORD *)((char *)v315 + v328);
          }
          switch ( v303 % 8 )
          {
            case 1:
              goto LABEL_546;
            case 2:
              goto LABEL_545;
            case 3:
              goto LABEL_544;
            case 4:
              goto LABEL_543;
            case 5:
              goto LABEL_542;
            case 6:
              goto LABEL_541;
            case 7:
              v315[6] = v323[6];
LABEL_541:
              v315[5] = v323[5];
LABEL_542:
              v315[4] = v323[4];
LABEL_543:
              v315[3] = v323[3];
LABEL_544:
              v315[2] = v323[2];
LABEL_545:
              v315[1] = v323[1];
LABEL_546:
              *v315 = *v323;
              break;
            default:
              goto LABEL_178;
          }
        }
        goto LABEL_178;
      }
    }
    else if ( v299 )
    {
      operator delete[](v299);
    }
    v300 = *((void **)this + 159);
    if ( v300 )
      operator delete[](v300);
    *((_QWORD *)this + 164) = operator new[](*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
    v301 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    if ( v301 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v302 = operator new[](8 * v301);
      v299 = *((_BYTE **)this + 164);
      *((_QWORD *)this + 159) = v302;
      goto LABEL_499;
    }
LABEL_764:
    __cxa_throw_bad_array_new_length();
  }
LABEL_178:
  v124 = *((_QWORD *)this + 161);
  if ( (*((_DWORD *)this + 84) & 0x3000000) != 0
    && v124
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v124 + 8LL))(v124) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 16LL))(*((_QWORD *)this + 161));
    *((_DWORD *)this + 80) = 3;
  }
  else if ( *((int *)this + 80) < 0 && !*((_DWORD *)this + 324) )
  {
    *((_DWORD *)this + 80) = 4;
  }
  v125 = *((_DWORD *)this + 77);
  v126 = *((_DWORD *)this + 182);
  v127 = *((_DWORD *)this + 332) + 100;
  *((_DWORD *)this + 293) = v125;
  if ( v125 > v127 )
  {
    v126 &= ~0x10u;
    *((_DWORD *)this + 182) = v126;
  }
  v128 = v126 & 0x100;
  if ( !v128 && v108 )
  {
    *((_DWORD *)this + 80) = 10;
  }
  else if ( v125 > 1000 )
  {
    v129 = *((double *)this + 95);
    if ( v129 > 1000000.0 && *((double *)this + 96) > 1000000.0 )
    {
      *((_DWORD *)this + 80) = 10;
      if ( v128 )
      {
        v130 = *((_QWORD *)this + 165);
        v131 = *(double *)(v130 + 32);
        if ( v131 > 100.0 )
        {
          v132 = *(_DWORD *)(v130 + 112);
          *((double *)this + 112) = v131;
          *((_DWORD *)this + 308) = v132;
          if ( v132 )
          {
            if ( v129 < 0.1 )
              *((_DWORD *)this + 80) = 1;
          }
        }
      }
    }
  }
  if ( *((int *)this + 337) >= 0 && v492 >= 0 )
  {
    if ( v125 )
    {
      *((_DWORD *)this + 337) = v492;
    }
    else
    {
      *((_DWORD *)this + 337) = -1;
      ClpSimplexPrimal::nextSuperBasic(this, 1, nullptr);
    }
  }
  if ( v453 )
  {
    v133 = *((_QWORD *)this + 156);
    v134 = *(void (__fastcall **)(__int64, ClpSimplexPrimal *, __int64))(*(_QWORD *)v133 + 16LL);
    if ( v464 < -2 )
      v134(v133, this, 3);
    else
      v134(v133, this, 2 * (unsigned int)(v463 > 1) + 2);
    if ( v465 )
    {
      v135 = *((CoinFactorization ***)this + 158);
      if ( v135[1] )
      {
        CoinFactorization::sparseThreshold(v135[1], 0);
        v135 = *((CoinFactorization ***)this + 158);
      }
      ClpFactorization::goSparse((ClpFactorization *)v135);
    }
  }
  if ( *((_DWORD *)this + 80) == 1 )
    ClpSimplex::computeObjectiveValue(this, 1);
  v136 = *((_QWORD *)this + 24);
  v495[0] = -999;
  return (*(__int64 (__fastcall **)(__int64, ClpSimplexPrimal *, _DWORD *, _DWORD *))(*(_QWORD *)v136 + 352LL))(
           v136,
           this,
           v495,
           v495);
}

