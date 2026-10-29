__int64 __fastcall CoinFactorization::gutsOfCopy(CoinFactorization *this, const CoinFactorization *a2)
{
  const CoinFactorization *v2; // rbp
  const CoinArrayWithLength *v4; // rsi
  int v5; // eax
  int v6; // r12d
  int v7; // edx
  __int64 v8; // r15
  CoinArrayWithLength *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // xmm0_8
  int v14; // edx
  int v15; // esi
  int v16; // r12d
  int v17; // r12d
  __int64 v18; // xmm0_8
  int v19; // edx
  __int64 v20; // xmm0_8
  int v21; // edx
  __int64 v22; // xmm0_8
  int v23; // edx
  __int128 v24; // xmm2
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm3
  __int128 v28; // xmm2
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  int v31; // edx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  unsigned __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // rdi
  _QWORD *v38; // r8
  int v39; // r9d
  _QWORD *v40; // rcx
  __int64 *v41; // rdx
  __int64 v42; // xmm0_8
  __int64 v43; // rdx
  __m128i *v44; // rax
  __m128i *v45; // rdi
  unsigned int v46; // esi
  const __m128i *v47; // rdx
  __m128i *v48; // rcx
  __m128i v49; // xmm1
  __m128i v50; // xmm0
  __int64 v51; // rdx
  bool v52; // cc
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // edx
  int v60; // ecx
  _QWORD *v61; // r10
  _QWORD *v62; // r9
  __int64 v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // rdi
  __int64 v66; // xmm0_8
  __int64 v67; // rdi
  _DWORD *v68; // rdi
  _DWORD *v69; // rsi
  unsigned int v70; // r8d
  const __m128i *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __m128i v74; // xmm1
  __m128i v75; // xmm0
  __int64 v76; // r8
  __m128i *v77; // rsi
  __int64 *v78; // r9
  int v79; // ecx
  __int64 *v80; // rdi
  int v81; // edx
  __m128i *v82; // rsi
  __int64 *v83; // rax
  __int64 *v84; // rdx
  __int64 v85; // r8
  __int64 v86; // xmm0_8
  __int64 v87; // r8
  __m128i *v88; // rax
  __int64 v89; // r12
  __int64 v90; // r13
  __int64 v91; // r14
  __m128i *v92; // rsi
  int v93; // edx
  __int64 v94; // r10
  int v95; // esi
  __int64 v96; // rcx
  _DWORD *v97; // rax
  _DWORD *v98; // rdx
  unsigned int v99; // r8d
  __int64 v100; // rdi
  __int64 v101; // r8
  __m128i v102; // xmm0
  __int64 v103; // r8
  int *v104; // rax
  int *v105; // rdx
  unsigned int v106; // edi
  __int64 v107; // rcx
  __int64 v108; // rdi
  __m128i v109; // xmm0
  __int64 v110; // rdi
  int v111; // eax
  __int64 v112; // r10
  __int64 v113; // r11
  __int64 v114; // r9
  int v115; // esi
  __int64 v116; // r8
  _DWORD *v117; // rax
  _DWORD *v118; // rcx
  unsigned int v119; // edi
  __int64 v120; // rdx
  __int64 v121; // rdi
  __m128i v122; // xmm0
  __int64 v123; // rdi
  int v124; // eax
  int v125; // eax
  __m128i *v126; // rdi
  int v127; // ecx
  int v128; // edx
  const __m128i *v129; // rsi
  unsigned int v130; // r8d
  __m128i *v131; // rax
  const __m128i *v132; // rdx
  __int64 v133; // r9
  __m128i v134; // xmm1
  __m128i v135; // xmm0
  __int64 v136; // rax
  int v137; // ecx
  __int64 *v138; // r10
  __int64 *v139; // rsi
  int v140; // eax
  __int64 *v141; // rdx
  __int64 *v142; // rax
  __int64 v143; // xmm0_8
  __int64 v144; // rax
  __m128i *v145; // rdi
  const __m128i *v146; // rsi
  int v147; // eax
  unsigned int v148; // r8d
  __m128i *v149; // rax
  const __m128i *v150; // rdx
  __int64 v151; // r9
  __m128i v152; // xmm1
  __m128i v153; // xmm0
  __int64 v154; // rax
  __int64 result; // rax
  _DWORD *v156; // rdx
  int *v157; // r8
  _DWORD *v158; // r13
  int v159; // eax
  _DWORD *v160; // rdi
  int *v161; // r9
  _DWORD *v162; // rbp
  int v163; // eax
  int *v164; // rcx
  int *v165; // r8
  int v166; // r11d
  __m128i *v167; // r8
  int v168; // eax
  bool v169; // cl
  __int64 v170; // rsi
  int v171; // edx
  const __m128i *v172; // rdi
  unsigned int v173; // r9d
  const __m128i *v174; // rdx
  __m128i *v175; // rcx
  __int64 v176; // r10
  __m128i v177; // xmm1
  __m128i v178; // xmm0
  __int64 v179; // rdx
  __m128i *v180; // rax
  __int64 *v181; // r11
  __int64 *v182; // r9
  int v183; // esi
  __int64 *v184; // rsi
  __int64 *v185; // rdi
  __int64 v186; // r10
  __int64 v187; // xmm0_8
  __int64 v188; // rsi
  const __m128i *v189; // rdi
  __m128i *v190; // r8
  unsigned int v191; // r9d
  const __m128i *v192; // rdx
  __m128i *v193; // rcx
  __int64 v194; // r10
  __m128i v195; // xmm1
  __m128i v196; // xmm0
  __int64 v197; // rdx
  __m128i *v198; // rdi
  const __m128i *v199; // rsi
  int v200; // r8d
  unsigned int v201; // r8d
  const __m128i *v202; // rdx
  __m128i *v203; // rcx
  __int64 v204; // r9
  __m128i v205; // xmm1
  __m128i v206; // xmm0
  __int64 v207; // rdx
  __m128i *v208; // rdi
  const __m128i *v209; // rsi
  unsigned int v210; // r8d
  const __m128i *v211; // rdx
  __m128i *v212; // rcx
  __int64 v213; // r9
  __m128i v214; // xmm1
  __m128i v215; // xmm0
  __int64 v216; // rdx
  __m128i *v217; // rdi
  const __m128i *v218; // rsi
  unsigned int v219; // r8d
  const __m128i *v220; // rdx
  __m128i *v221; // rcx
  __int64 v222; // r9
  __m128i v223; // xmm1
  __m128i v224; // xmm0
  __int64 v225; // rdx
  __m128i *v226; // rdi
  const __m128i *v227; // rsi
  unsigned int v228; // r8d
  const __m128i *v229; // rdx
  __m128i *v230; // rcx
  __int64 v231; // r9
  __m128i v232; // xmm1
  __m128i v233; // xmm0
  __int64 v234; // rdx
  __m128i *v235; // rdi
  const __m128i *v236; // rsi
  __int64 v237; // r9
  unsigned int v238; // r8d
  const __m128i *v239; // rdx
  __m128i *v240; // rcx
  __int64 v241; // r8
  __m128i v242; // xmm1
  __m128i v243; // xmm0
  __int64 v244; // rdx
  __m128i *v245; // rdi
  const __m128i *v246; // rsi
  unsigned int v247; // ecx
  const __m128i *v248; // rdx
  __m128i *v249; // r8
  __int64 v250; // rcx
  __m128i v251; // xmm1
  __m128i v252; // xmm0
  __int64 v253; // rdx
  __m128i *v254; // rdi
  const __m128i *v255; // rsi
  unsigned int v256; // ecx
  const __m128i *v257; // rdx
  __m128i *v258; // r8
  __int64 v259; // rcx
  __m128i v260; // xmm1
  __m128i v261; // xmm0
  __int64 v262; // rdx
  __int64 v263; // r12
  const __m128i *v264; // rsi
  __m128i *v265; // rdi
  __int64 v266; // r8
  unsigned int v267; // r10d
  const __m128i *v268; // rdx
  __m128i *v269; // rcx
  __int64 v270; // r11
  __m128i v271; // xmm1
  __m128i v272; // xmm0
  __int64 v273; // rdx
  __int64 v274; // r13
  const __m128i *v275; // rsi
  __m128i *v276; // rdi
  __int64 v277; // r11
  unsigned int v278; // r10d
  const __m128i *v279; // rdx
  __m128i *v280; // rcx
  __int64 v281; // r14
  __m128i v282; // xmm1
  __m128i v283; // xmm0
  __int64 v284; // rdx
  __m128i *v285; // rsi
  const __m128i *v286; // rcx
  int v287; // edx
  int v288; // r10d
  unsigned int v289; // edi
  const __m128i *v290; // rax
  __m128i *v291; // rdx
  __int64 v292; // r14
  __m128i v293; // xmm1
  __m128i v294; // xmm0
  __int64 v295; // rax
  const __m128i *v296; // rax
  __int64 v297; // rdx
  __m128i *v298; // rcx
  int v299; // esi
  __m128i *v300; // r9
  __m128i *v301; // rsi
  __int64 v302; // rdx
  int v303; // ecx
  const __m128i *v304; // r8
  const __m128i *v305; // rdi
  int v306; // eax
  bool v307; // zf
  int v308; // eax
  bool v309; // dl
  unsigned int v310; // r11d
  const __m128i *v311; // rdx
  __m128i *v312; // rcx
  __int64 v313; // r11
  __m128i v314; // xmm1
  __m128i v315; // xmm0
  __int64 v316; // rdx
  __int64 v317; // r10
  const __m128i *v318; // rsi
  __m128i *v319; // rdi
  __int64 v320; // r11
  unsigned int v321; // r12d
  __m128i *v322; // rdx
  const __m128i *v323; // rcx
  __int64 v324; // r13
  __m128i v325; // xmm1
  __m128i v326; // xmm0
  __int64 v327; // rdx
  __int64 v328; // rdx
  int *v329; // rax
  int v330; // r9d
  __m128i *v331; // rax
  const __m128i *v332; // rdx
  __int32 v333; // r8d
  __m128i *v334; // rdx
  const __m128i *v335; // rdi
  const __m128i *v336; // rax
  __int32 v337; // ecx
  __m128i *v338; // rcx
  const __m128i *v339; // rdx
  __int32 v340; // r10d
  __m128i *v341; // r8
  const __m128i *v342; // rdx
  __int32 v343; // r11d
  __m128i *v344; // rcx
  const __m128i *v345; // rdx
  __int32 v346; // r8d
  __m128i *v347; // r8
  const __m128i *v348; // rdx
  __int32 v349; // r11d
  __m128i *v350; // rcx
  const __m128i *v351; // rdx
  __int32 v352; // r13d
  __m128i *v353; // rcx
  const __m128i *v354; // rdx
  __int32 v355; // r8d
  __m128i *v356; // rcx
  const __m128i *v357; // rdx
  __int32 v358; // r8d
  __m128i *v359; // rcx
  const __m128i *v360; // rdx
  __int32 v361; // r12d
  __m128i *v362; // rcx
  const __m128i *v363; // rdx
  __int32 v364; // r14d
  __m128i *v365; // rax
  const __m128i *v366; // rdx
  __int32 v367; // r8d
  __m128i *v368; // rcx
  const __m128i *v369; // rdx
  __int32 v370; // r8d
  __int64 v371; // r10
  int *v372; // rcx
  __m128i *v373; // rsi
  __m128i *v374; // r10
  int v375; // edx
  __m128i *v376; // rcx
  const __m128i *v377; // rdx
  __int32 v378; // eax
  __m128i *v379; // rcx
  const __m128i *v380; // rdx
  __int32 v381; // r9d
  __m128i *v382; // rcx
  const __m128i *v383; // rdx
  __int32 v384; // r9d
  __m128i *v385; // [rsp+0h] [rbp-68h]
  __m128i *v386; // [rsp+0h] [rbp-68h]
  _DWORD *v387; // [rsp+0h] [rbp-68h]
  __m128i *v388; // [rsp+8h] [rbp-60h]
  __m128i *v389; // [rsp+8h] [rbp-60h]
  __m128i *v390; // [rsp+10h] [rbp-58h]
  __m128i *v391; // [rsp+10h] [rbp-58h]
  __m128i *v392; // [rsp+18h] [rbp-50h]
  __m128i *v393; // [rsp+18h] [rbp-50h]
  const CoinFactorization *v394; // [rsp+20h] [rbp-48h]
  const __m128i *v395; // [rsp+20h] [rbp-48h]
  int v396; // [rsp+20h] [rbp-48h]

  v2 = a2;
  v4 = (const CoinFactorization *)((char *)a2 + 600);
  v5 = *((_DWORD *)v4 - 2);
  v6 = 4 * (v5 + 4);
  CoinArrayWithLength::allocate((CoinFactorization *)((char *)this + 600), v4, 8 * (v5 + 4));
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 624),
    (const CoinFactorization *)((char *)v2 + 624),
    v6);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 712),
    (const CoinFactorization *)((char *)v2 + 712),
    8 * *((_DWORD *)v2 + 177));
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 736),
    (const CoinFactorization *)((char *)v2 + 736),
    4 * *((_DWORD *)v2 + 177));
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 760),
    (const CoinFactorization *)((char *)v2 + 760),
    4 * *((_DWORD *)v2 + 8) + 4);
  if ( *((_QWORD *)v2 + 32) && *((int *)v2 + 66) >= -1 )
    v7 = *((_DWORD *)v2 + 16) + *((_DWORD *)v2 + 13) + 2;
  else
    v7 = *((_DWORD *)v2 + 16) + 1;
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 816),
    (const CoinFactorization *)((char *)v2 + 816),
    4 * v7);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 552),
    (const CoinFactorization *)((char *)v2 + 552),
    8 * *((_DWORD *)v2 + 10) + 8);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 128),
    (const CoinFactorization *)((char *)v2 + 128),
    4 * *((_DWORD *)v2 + 10) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 104),
    (const CoinFactorization *)((char *)v2 + 104),
    4 * *((_DWORD *)v2 + 10) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 152),
    (const CoinFactorization *)((char *)v2 + 152),
    4 * *((_DWORD *)v2 + 10) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 280),
    (const CoinFactorization *)((char *)v2 + 280),
    4 * *((_DWORD *)v2 + 10) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 648),
    (const CoinFactorization *)((char *)v2 + 648),
    4 * *((_DWORD *)v2 + 13) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 232),
    (const CoinFactorization *)((char *)v2 + 232),
    4 * *((_DWORD *)v2 + 13) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 80),
    (const CoinFactorization *)((char *)v2 + 80),
    4 * *((_DWORD *)v2 + 13) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 352),
    (const CoinFactorization *)((char *)v2 + 352),
    4 * *((_DWORD *)v2 + 13) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 376),
    (const CoinFactorization *)((char *)v2 + 376),
    4 * *((_DWORD *)v2 + 13) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 504),
    (const CoinFactorization *)((char *)v2 + 504),
    v6);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 400),
    (const CoinFactorization *)((char *)v2 + 400),
    4 * *((_DWORD *)v2 + 10) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 424),
    (const CoinFactorization *)((char *)v2 + 424),
    4 * *((_DWORD *)v2 + 10) + 4);
  v8 = *((_QWORD *)v2 + 84);
  v9 = (CoinFactorization *)((char *)this + 672);
  if ( *((int *)v2 + 170) <= -2 )
    v8 = 0;
  CoinArrayWithLength::allocate(v9, (const CoinFactorization *)((char *)v2 + 672), v6);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 184),
    (const CoinFactorization *)((char *)v2 + 184),
    4 * *((_DWORD *)v2 + 10) + 4);
  CoinArrayWithLength::allocate(
    (CoinFactorization *)((char *)this + 208),
    (const CoinFactorization *)((char *)v2 + 208),
    4 * *((_DWORD *)v2 + 10) + 4);
  v12 = *((_DWORD *)v2 + 262);
  if ( v12 )
  {
    CoinArrayWithLength::allocate(
      (CoinFactorization *)((char *)this + 1104),
      (const CoinFactorization *)((char *)v2 + 1104),
      *((_DWORD *)v2 + 177));
    CoinArrayWithLength::allocate(
      (CoinFactorization *)((char *)this + 1080),
      (const CoinFactorization *)((char *)v2 + 1080),
      *((_DWORD *)v2 + 177));
    CoinArrayWithLength::allocate(
      (CoinFactorization *)((char *)this + 1056),
      (const CoinFactorization *)((char *)v2 + 1056),
      *((_DWORD *)v2 + 8) + 1);
    v12 = *((_DWORD *)v2 + 262);
  }
  v13 = *((_QWORD *)v2 + 3);
  *((_DWORD *)this + 45) = *((_DWORD *)v2 + 45);
  v14 = *((_DWORD *)v2 + 125);
  *((_QWORD *)this + 3) = v13;
  *((_DWORD *)this + 125) = v14;
  *((__m128i *)this + 36) = _mm_loadu_si128((const __m128i *)v2 + 36);
  v15 = *((_DWORD *)v2 + 176);
  *((_DWORD *)this + 148) = *((_DWORD *)v2 + 148);
  v16 = *((_DWORD *)v2 + 177);
  *(__m128i *)((char *)this + 696) = _mm_loadu_si128((const __m128i *)((char *)v2 + 696));
  v17 = v16 - v15;
  *((_DWORD *)this + 197) = *((_DWORD *)v2 + 197);
  v18 = *(_QWORD *)v2;
  *((_DWORD *)this + 198) = *((_DWORD *)v2 + 198);
  v19 = *((_DWORD *)v2 + 199);
  *(_QWORD *)this = v18;
  v20 = *((_QWORD *)v2 + 1);
  *((_DWORD *)this + 199) = v19;
  v21 = *((_DWORD *)v2 + 8);
  *((_QWORD *)this + 1) = v20;
  v22 = *((_QWORD *)v2 + 2);
  *((_DWORD *)this + 8) = v21;
  v23 = *((_DWORD *)v2 + 9);
  *((_QWORD *)this + 2) = v22;
  *((_DWORD *)this + 9) = v23;
  *((_DWORD *)this + 10) = *((_DWORD *)v2 + 10);
  v24 = *((_OWORD *)v2 + 59);
  *((_DWORD *)this + 11) = *((_DWORD *)v2 + 11);
  v25 = *((_OWORD *)v2 + 60);
  *((_DWORD *)this + 12) = *((_DWORD *)v2 + 12);
  v26 = *((_OWORD *)v2 + 61);
  *((_DWORD *)this + 13) = *((_DWORD *)v2 + 13);
  v27 = *((_OWORD *)v2 + 58);
  *((_DWORD *)this + 16) = *((_DWORD *)v2 + 16);
  *((_DWORD *)this + 14) = *((_DWORD *)v2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)v2 + 15);
  *((_DWORD *)this + 17) = *((_DWORD *)v2 + 17);
  *((_DWORD *)this + 124) = *((_DWORD *)v2 + 124);
  *((_DWORD *)this + 18) = *((_DWORD *)v2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)v2 + 19);
  *((_DWORD *)this + 44) = *((_DWORD *)v2 + 44);
  LOBYTE(v23) = *((_BYTE *)v2 + 784);
  *((_OWORD *)this + 59) = v24;
  *((_OWORD *)this + 60) = v25;
  *((_OWORD *)this + 61) = v26;
  *((_OWORD *)this + 58) = v27;
  *((_BYTE *)this + 784) = v23;
  v28 = *(_OWORD *)((char *)v2 + 1000);
  *((_DWORD *)this + 248) = *((_DWORD *)v2 + 248);
  v29 = *(_OWORD *)((char *)v2 + 1016);
  v30 = *(_OWORD *)((char *)v2 + 1032);
  *((_DWORD *)this + 249) = *((_DWORD *)v2 + 249);
  v31 = *((_DWORD *)v2 + 288);
  *((_DWORD *)this + 262) = v12;
  v32 = *((_DWORD *)v2 + 263);
  *(_OWORD *)((char *)this + 1000) = v28;
  *((_DWORD *)this + 288) = v31;
  v33 = *((_DWORD *)v2 + 217);
  *(_OWORD *)((char *)this + 1016) = v29;
  *(_OWORD *)((char *)this + 1032) = v30;
  *((_DWORD *)this + 263) = v32;
  v34 = *((_DWORD *)v2 + 216);
  *((_DWORD *)this + 217) = v33;
  *((_DWORD *)this + 216) = v34;
  if ( v34 )
  {
    v35 = v34 * v34;
    if ( v35 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_654;
    v36 = (_QWORD *)operator new[](8 * v35);
    v37 = *((int *)this + 216);
    *((_QWORD *)this + 106) = v36;
    *((_QWORD *)this + 105) = v36;
    v38 = *((_QWORD **)v2 + 106);
    v39 = v37 * v37;
    if ( (_DWORD)v37 * (_DWORD)v37 && v38 != v36 )
    {
      if ( v39 >> 3 > 0 )
      {
        v40 = v36;
        v41 = *((__int64 **)v2 + 106);
        do
        {
          v42 = *v41;
          v41 += 8;
          v40 += 8;
          *(v40 - 8) = v42;
          *(v40 - 7) = *(v41 - 7);
          *(v40 - 6) = *(v41 - 6);
          *(v40 - 5) = *(v41 - 5);
          *(v40 - 4) = *(v41 - 4);
          *(v40 - 3) = *(v41 - 3);
          *(v40 - 2) = *(v41 - 2);
          *(v40 - 1) = *(v41 - 1);
        }
        while ( v41 != &v38[8 * (unsigned int)((v39 >> 3) - 1) + 8] );
        v43 = ((v39 >> 3) - 1 + 1LL) << 6;
        v38 = (_QWORD *)((char *)v38 + v43);
        v36 = (_QWORD *)((char *)v36 + v43);
      }
      switch ( v39 & 7 )
      {
        case 0:
          break;
        case 1:
          goto LABEL_24;
        case 2:
          goto LABEL_23;
        case 3:
          goto LABEL_22;
        case 4:
          goto LABEL_21;
        case 5:
          goto LABEL_20;
        case 6:
          goto LABEL_19;
        case 7:
          v36[6] = v38[6];
LABEL_19:
          v36[5] = v38[5];
LABEL_20:
          v36[4] = v38[4];
LABEL_21:
          v36[3] = v38[3];
LABEL_22:
          v36[2] = v38[2];
LABEL_23:
          v36[1] = v38[1];
LABEL_24:
          *v36 = *v38;
          break;
      }
    }
    if ( v37 > 0x1FFFFFFFFFFFFFFELL )
LABEL_654:
      __cxa_throw_bad_array_new_length();
    v44 = (__m128i *)operator new[](4 * v37);
    v10 = *((unsigned int *)this + 216);
    *((_QWORD *)this + 107) = v44;
    v45 = *((__m128i **)v2 + 107);
    if ( !(_DWORD)v10 || v45 == v44 )
    {
      v15 = *((_DWORD *)this + 176);
    }
    else
    {
      v46 = (int)v10 >> 3;
      if ( (int)v10 >> 3 > 0 )
      {
        if ( (v45 >= &v44[2] || v44 >= &v45[2]) && v46 > 1 )
        {
          v47 = *((const __m128i **)v2 + 107);
          v48 = v44;
          v11 = v46 - 1;
          do
          {
            v49 = _mm_loadu_si128(v47);
            v47 += 2;
            v48 += 2;
            v50 = _mm_loadu_si128(v47 - 1);
            v48[-2] = v49;
            v48[-1] = v50;
          }
          while ( v47 != &v45[2 * v11 + 2] );
        }
        else
        {
          v371 = v46 - 1;
          v372 = *((int **)v2 + 107);
          v373 = v44;
          v11 = v371;
          v374 = &v45[2 * v371 + 2];
          do
          {
            v375 = *v372;
            v372 += 8;
            v373 += 2;
            v373[-2].m128i_i32[0] = v375;
            v373[-2].m128i_i32[1] = *(v372 - 7);
            v373[-2].m128i_i32[2] = *(v372 - 6);
            v373[-2].m128i_i32[3] = *(v372 - 5);
            v373[-1].m128i_i32[0] = *(v372 - 4);
            v373[-1].m128i_i32[1] = *(v372 - 3);
            v373[-1].m128i_i32[2] = *(v372 - 2);
            v373[-1].m128i_i32[3] = *(v372 - 1);
          }
          while ( v372 != (int *)v374 );
        }
        v51 = 32 * ((int)v11 + 1LL);
        v45 = (__m128i *)((char *)v45 + v51);
        v44 = (__m128i *)((char *)v44 + v51);
      }
      v15 = *((_DWORD *)this + 176);
      switch ( (int)v10 % 8 )
      {
        case 1:
          goto LABEL_41;
        case 2:
          goto LABEL_40;
        case 3:
          goto LABEL_39;
        case 4:
          goto LABEL_38;
        case 5:
          goto LABEL_37;
        case 6:
          goto LABEL_36;
        case 7:
          v44[1].m128i_i32[2] = v45[1].m128i_i32[2];
LABEL_36:
          v44[1].m128i_i32[1] = v45[1].m128i_i32[1];
LABEL_37:
          v44[1].m128i_i32[0] = v45[1].m128i_i32[0];
LABEL_38:
          v44->m128i_i32[3] = v45->m128i_i32[3];
LABEL_39:
          v44->m128i_i32[2] = v45->m128i_i32[2];
LABEL_40:
          v44->m128i_i32[1] = v45->m128i_i32[1];
LABEL_41:
          v44->m128i_i32[0] = v45->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
  v52 = *((_DWORD *)this + 180) <= -2;
  v53 = *((_QWORD *)this + 89);
  *((_DWORD *)this + 199) = v17;
  if ( v52 )
    v53 = 0;
  v52 = *((_DWORD *)this + 186) <= -2;
  *((_QWORD *)this + 100) = v53 + 8LL * v15;
  v54 = *((_QWORD *)this + 92);
  if ( v52 )
    v54 = 0;
  *((_QWORD *)this + 101) = v54 + 4LL * v15;
  CoinArrayWithLength::operator=((char *)this + 872, (char *)v2 + 872, v54, 0, v10, v11);
  CoinArrayWithLength::operator=((char *)this + 896, (char *)v2 + 896, v55, v56, v57, v58);
  v59 = *((_DWORD *)this + 9);
  if ( !v59 )
  {
    v390 = *((__m128i **)this + 81);
    v392 = *((__m128i **)this + 29);
    v385 = *((__m128i **)this + 23);
    v388 = *((__m128i **)this + 26);
    goto LABEL_48;
  }
  v167 = *((__m128i **)this + 23);
  v388 = *((__m128i **)this + 26);
  v385 = v167;
  v168 = v59 + 1;
  v169 = v59 == -1;
  if ( v8 )
  {
    v170 = *((_QWORD *)v2 + 23);
    v171 = *((_DWORD *)v2 + 48);
    if ( *((int *)this + 48) < -1 )
    {
      v167 = nullptr;
      if ( v171 < -1 )
        goto LABEL_280;
    }
    else
    {
      v172 = nullptr;
      if ( v171 < -1 )
      {
LABEL_240:
        if ( v172 != v167 && !v169 )
        {
          v173 = v168 >> 3;
          if ( v168 >> 3 > 0 )
          {
            if ( (v172 >= &v167[2] || v167 >= &v172[2]) && v173 > 1 )
            {
              v174 = v172;
              v175 = v167;
              v176 = v173 - 1;
              do
              {
                v177 = _mm_loadu_si128(v174);
                v174 += 2;
                v175 += 2;
                v178 = _mm_loadu_si128(v174 - 1);
                v175[-2] = v177;
                v175[-1] = v178;
              }
              while ( v174 != &v172[2 * v176 + 2] );
            }
            else
            {
              v379 = v167;
              v380 = v172;
              v176 = v173 - 1;
              do
              {
                v381 = v380->m128i_i32[0];
                v380 += 2;
                v379 += 2;
                v379[-2].m128i_i32[0] = v381;
                v379[-2].m128i_i32[1] = v380[-2].m128i_i32[1];
                v379[-2].m128i_i32[2] = v380[-2].m128i_i32[2];
                v379[-2].m128i_i32[3] = v380[-2].m128i_i32[3];
                v379[-1].m128i_i32[0] = v380[-1].m128i_i32[0];
                v379[-1].m128i_i32[1] = v380[-1].m128i_i32[1];
                v379[-1].m128i_i32[2] = v380[-1].m128i_i32[2];
                v379[-1].m128i_i32[3] = v380[-1].m128i_i32[3];
              }
              while ( &v172[2 * v176 + 2] != v380 );
            }
            v179 = 32 * ((int)v176 + 1LL);
            v172 = (const __m128i *)((char *)v172 + v179);
            v167 = (__m128i *)((char *)v167 + v179);
          }
          switch ( v168 % 8 )
          {
            case 1:
              goto LABEL_278;
            case 2:
              goto LABEL_277;
            case 3:
              goto LABEL_276;
            case 4:
              goto LABEL_275;
            case 5:
              goto LABEL_274;
            case 6:
              goto LABEL_273;
            case 7:
              v167[1].m128i_i32[2] = v172[1].m128i_i32[2];
LABEL_273:
              v167[1].m128i_i32[1] = v172[1].m128i_i32[1];
LABEL_274:
              v167[1].m128i_i32[0] = v172[1].m128i_i32[0];
LABEL_275:
              v167->m128i_i32[3] = v172->m128i_i32[3];
LABEL_276:
              v167->m128i_i32[2] = v172->m128i_i32[2];
LABEL_277:
              v167->m128i_i32[1] = v172->m128i_i32[1];
LABEL_278:
              v167->m128i_i32[0] = v172->m128i_i32[0];
              break;
            default:
              break;
          }
          v168 = *((_DWORD *)this + 9) + 1;
          v169 = v168 == 0;
        }
LABEL_280:
        v189 = *((const __m128i **)v2 + 26);
        if ( *((int *)this + 54) < -1 )
        {
          v190 = nullptr;
          if ( *((int *)v2 + 54) < -1 )
          {
LABEL_256:
            v180 = nullptr;
            if ( *((int *)v2 + 48) <= -2 )
              v170 = 0;
            if ( *((int *)this + 48) > -2 )
              v180 = v385;
            v180->m128i_i32[*((int *)this + 10)] = *(_DWORD *)(v170 + 4LL * *((int *)this + 10));
            v59 = *((_DWORD *)this + 9);
            v168 = v59 + 1;
            v169 = v59 == -1;
            goto LABEL_261;
          }
        }
        else
        {
          v190 = v388;
          if ( *((int *)v2 + 54) < -1 )
            v189 = nullptr;
        }
        if ( v189 != v190 && !v169 )
        {
          v191 = v168 >> 3;
          if ( v168 >> 3 > 0 )
          {
            if ( (v190 >= &v189[2] || v189 >= &v190[2]) && v191 > 1 )
            {
              v192 = v189;
              v193 = v190;
              v194 = v191 - 1;
              do
              {
                v195 = _mm_loadu_si128(v192);
                v192 += 2;
                v193 += 2;
                v196 = _mm_loadu_si128(v192 - 1);
                v193[-2] = v195;
                v193[-1] = v196;
              }
              while ( v192 != &v189[2 * v194 + 2] );
            }
            else
            {
              v382 = v190;
              v383 = v189;
              v194 = v191 - 1;
              do
              {
                v384 = v383->m128i_i32[0];
                v383 += 2;
                v382 += 2;
                v382[-2].m128i_i32[0] = v384;
                v382[-2].m128i_i32[1] = v383[-2].m128i_i32[1];
                v382[-2].m128i_i32[2] = v383[-2].m128i_i32[2];
                v382[-2].m128i_i32[3] = v383[-2].m128i_i32[3];
                v382[-1].m128i_i32[0] = v383[-1].m128i_i32[0];
                v382[-1].m128i_i32[1] = v383[-1].m128i_i32[1];
                v382[-1].m128i_i32[2] = v383[-1].m128i_i32[2];
                v382[-1].m128i_i32[3] = v383[-1].m128i_i32[3];
              }
              while ( &v189[2 * v194 + 2] != v383 );
            }
            v197 = 32 * ((int)v194 + 1LL);
            v189 = (const __m128i *)((char *)v189 + v197);
            v190 = (__m128i *)((char *)v190 + v197);
          }
          switch ( v168 % 8 )
          {
            case 1:
              goto LABEL_255;
            case 2:
              goto LABEL_254;
            case 3:
              goto LABEL_253;
            case 4:
              goto LABEL_252;
            case 5:
              goto LABEL_251;
            case 6:
              goto LABEL_250;
            case 7:
              v190[1].m128i_i32[2] = v189[1].m128i_i32[2];
LABEL_250:
              v190[1].m128i_i32[1] = v189[1].m128i_i32[1];
LABEL_251:
              v190[1].m128i_i32[0] = v189[1].m128i_i32[0];
LABEL_252:
              v190->m128i_i32[3] = v189->m128i_i32[3];
LABEL_253:
              v190->m128i_i32[2] = v189->m128i_i32[2];
LABEL_254:
              v190->m128i_i32[1] = v189->m128i_i32[1];
LABEL_255:
              v190->m128i_i32[0] = v189->m128i_i32[0];
              break;
            default:
              goto LABEL_256;
          }
        }
        goto LABEL_256;
      }
    }
    v172 = *((const __m128i **)v2 + 23);
    goto LABEL_240;
  }
LABEL_261:
  v181 = *((__int64 **)this + 69);
  v182 = *((__int64 **)v2 + 69);
  v183 = *((_DWORD *)v2 + 140);
  if ( *((int *)this + 140) < -1 )
  {
    v181 = nullptr;
    if ( v183 < -1 )
      goto LABEL_299;
  }
  else if ( v183 <= -2 )
  {
    v182 = nullptr;
  }
  if ( v59 && v182 != v181 )
  {
    if ( v59 >> 3 > 0 )
    {
      v184 = v181;
      v185 = v182;
      v186 = (unsigned int)((v59 >> 3) - 1);
      do
      {
        v187 = *v185;
        v184 += 8;
        v185 += 8;
        *(v184 - 8) = v187;
        *(v184 - 7) = *(v185 - 7);
        *(v184 - 6) = *(v185 - 6);
        *(v184 - 5) = *(v185 - 5);
        *(v184 - 4) = *(v185 - 4);
        *(v184 - 3) = *(v185 - 3);
        *(v184 - 2) = *(v185 - 2);
        *(v184 - 1) = *(v185 - 1);
      }
      while ( v184 != &v181[8 * v186 + 8] );
      v188 = ((int)v186 + 1LL) << 6;
      v182 = (__int64 *)((char *)v182 + v188);
      v181 = (__int64 *)((char *)v181 + v188);
    }
    switch ( v59 % 8 )
    {
      case 1:
        goto LABEL_298;
      case 2:
        goto LABEL_297;
      case 3:
        goto LABEL_296;
      case 4:
        goto LABEL_295;
      case 5:
        goto LABEL_294;
      case 6:
        goto LABEL_293;
      case 7:
        v181[6] = v182[6];
LABEL_293:
        v181[5] = v182[5];
LABEL_294:
        v181[4] = v182[4];
LABEL_295:
        v181[3] = v182[3];
LABEL_296:
        v181[2] = v182[2];
LABEL_297:
        v181[1] = v182[1];
LABEL_298:
        *v181 = *v182;
        break;
      default:
        break;
    }
  }
LABEL_299:
  v198 = *((__m128i **)this + 16);
  v199 = *((const __m128i **)v2 + 16);
  v200 = *((_DWORD *)v2 + 34);
  if ( *((int *)this + 34) < -1 )
  {
    v198 = nullptr;
    if ( v200 < -1 )
      goto LABEL_319;
  }
  else if ( v200 <= -2 )
  {
    v199 = nullptr;
  }
  if ( v199 != v198 && !v169 )
  {
    v201 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v199 >= &v198[2] || v198 >= &v199[2]) && v201 > 1 )
      {
        v202 = v199;
        v203 = v198;
        v204 = v201 - 1;
        do
        {
          v205 = _mm_loadu_si128(v202);
          v202 += 2;
          v203 += 2;
          v206 = _mm_loadu_si128(v202 - 1);
          v203[-2] = v205;
          v203[-1] = v206;
        }
        while ( v202 != &v199[2 * v204 + 2] );
      }
      else
      {
        v353 = v198;
        v354 = v199;
        v204 = v201 - 1;
        do
        {
          v355 = v354->m128i_i32[0];
          v354 += 2;
          v353 += 2;
          v353[-2].m128i_i32[0] = v355;
          v353[-2].m128i_i32[1] = v354[-2].m128i_i32[1];
          v353[-2].m128i_i32[2] = v354[-2].m128i_i32[2];
          v353[-2].m128i_i32[3] = v354[-2].m128i_i32[3];
          v353[-1].m128i_i32[0] = v354[-1].m128i_i32[0];
          v353[-1].m128i_i32[1] = v354[-1].m128i_i32[1];
          v353[-1].m128i_i32[2] = v354[-1].m128i_i32[2];
          v353[-1].m128i_i32[3] = v354[-1].m128i_i32[3];
        }
        while ( &v199[2 * v204 + 2] != v354 );
      }
      v207 = 32 * ((int)v204 + 1LL);
      v199 = (const __m128i *)((char *)v199 + v207);
      v198 = (__m128i *)((char *)v198 + v207);
    }
    switch ( v168 % 8 )
    {
      case 1:
        goto LABEL_317;
      case 2:
        goto LABEL_316;
      case 3:
        goto LABEL_315;
      case 4:
        goto LABEL_314;
      case 5:
        goto LABEL_313;
      case 6:
        goto LABEL_312;
      case 7:
        v198[1].m128i_i32[2] = v199[1].m128i_i32[2];
LABEL_312:
        v198[1].m128i_i32[1] = v199[1].m128i_i32[1];
LABEL_313:
        v198[1].m128i_i32[0] = v199[1].m128i_i32[0];
LABEL_314:
        v198->m128i_i32[3] = v199->m128i_i32[3];
LABEL_315:
        v198->m128i_i32[2] = v199->m128i_i32[2];
LABEL_316:
        v198->m128i_i32[1] = v199->m128i_i32[1];
LABEL_317:
        v198->m128i_i32[0] = v199->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
    v168 = v59 + 1;
    v169 = v59 == -1;
  }
LABEL_319:
  v208 = *((__m128i **)this + 13);
  v209 = *((const __m128i **)v2 + 13);
  if ( *((int *)this + 28) < -1 )
  {
    v208 = nullptr;
    if ( *((int *)v2 + 28) < -1 )
      goto LABEL_339;
  }
  else if ( *((int *)v2 + 28) <= -2 )
  {
    v209 = nullptr;
  }
  if ( v209 != v208 && !v169 )
  {
    v210 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v209 >= &v208[2] || v208 >= &v209[2]) && v210 > 1 )
      {
        v211 = v209;
        v212 = v208;
        v213 = v210 - 1;
        do
        {
          v214 = _mm_loadu_si128(v211);
          v211 += 2;
          v212 += 2;
          v215 = _mm_loadu_si128(v211 - 1);
          v212[-2] = v214;
          v212[-1] = v215;
        }
        while ( v211 != &v209[2 * v213 + 2] );
      }
      else
      {
        v356 = v208;
        v357 = v209;
        v213 = v210 - 1;
        do
        {
          v358 = v357->m128i_i32[0];
          v357 += 2;
          v356 += 2;
          v356[-2].m128i_i32[0] = v358;
          v356[-2].m128i_i32[1] = v357[-2].m128i_i32[1];
          v356[-2].m128i_i32[2] = v357[-2].m128i_i32[2];
          v356[-2].m128i_i32[3] = v357[-2].m128i_i32[3];
          v356[-1].m128i_i32[0] = v357[-1].m128i_i32[0];
          v356[-1].m128i_i32[1] = v357[-1].m128i_i32[1];
          v356[-1].m128i_i32[2] = v357[-1].m128i_i32[2];
          v356[-1].m128i_i32[3] = v357[-1].m128i_i32[3];
        }
        while ( &v209[2 * v213 + 2] != v357 );
      }
      v216 = 32 * ((int)v213 + 1LL);
      v209 = (const __m128i *)((char *)v209 + v216);
      v208 = (__m128i *)((char *)v208 + v216);
    }
    switch ( v168 % 8 )
    {
      case 1:
        goto LABEL_337;
      case 2:
        goto LABEL_336;
      case 3:
        goto LABEL_335;
      case 4:
        goto LABEL_334;
      case 5:
        goto LABEL_333;
      case 6:
        goto LABEL_332;
      case 7:
        v208[1].m128i_i32[2] = v209[1].m128i_i32[2];
LABEL_332:
        v208[1].m128i_i32[1] = v209[1].m128i_i32[1];
LABEL_333:
        v208[1].m128i_i32[0] = v209[1].m128i_i32[0];
LABEL_334:
        v208->m128i_i32[3] = v209->m128i_i32[3];
LABEL_335:
        v208->m128i_i32[2] = v209->m128i_i32[2];
LABEL_336:
        v208->m128i_i32[1] = v209->m128i_i32[1];
LABEL_337:
        v208->m128i_i32[0] = v209->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
    v168 = v59 + 1;
    v169 = v59 == -1;
  }
LABEL_339:
  v217 = *((__m128i **)this + 19);
  v218 = *((const __m128i **)v2 + 19);
  if ( *((int *)this + 40) < -1 )
  {
    v217 = nullptr;
    if ( *((int *)v2 + 40) < -1 )
      goto LABEL_359;
  }
  else if ( *((int *)v2 + 40) <= -2 )
  {
    v218 = nullptr;
  }
  if ( v218 != v217 && !v169 )
  {
    v219 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v218 >= &v217[2] || v217 >= &v218[2]) && v219 > 1 )
      {
        v220 = v218;
        v221 = v217;
        v222 = v219 - 1;
        do
        {
          v223 = _mm_loadu_si128(v220);
          v220 += 2;
          v221 += 2;
          v224 = _mm_loadu_si128(v220 - 1);
          v221[-2] = v223;
          v221[-1] = v224;
        }
        while ( v220 != &v218[2 * v222 + 2] );
      }
      else
      {
        v368 = v217;
        v369 = v218;
        v222 = v219 - 1;
        do
        {
          v370 = v369->m128i_i32[0];
          v369 += 2;
          v368 += 2;
          v368[-2].m128i_i32[0] = v370;
          v368[-2].m128i_i32[1] = v369[-2].m128i_i32[1];
          v368[-2].m128i_i32[2] = v369[-2].m128i_i32[2];
          v368[-2].m128i_i32[3] = v369[-2].m128i_i32[3];
          v368[-1].m128i_i32[0] = v369[-1].m128i_i32[0];
          v368[-1].m128i_i32[1] = v369[-1].m128i_i32[1];
          v368[-1].m128i_i32[2] = v369[-1].m128i_i32[2];
          v368[-1].m128i_i32[3] = v369[-1].m128i_i32[3];
        }
        while ( &v218[2 * v222 + 2] != v369 );
      }
      v225 = 32 * ((int)v222 + 1LL);
      v218 = (const __m128i *)((char *)v218 + v225);
      v217 = (__m128i *)((char *)v217 + v225);
    }
    switch ( v168 % 8 )
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
        v217[1].m128i_i32[2] = v218[1].m128i_i32[2];
LABEL_352:
        v217[1].m128i_i32[1] = v218[1].m128i_i32[1];
LABEL_353:
        v217[1].m128i_i32[0] = v218[1].m128i_i32[0];
LABEL_354:
        v217->m128i_i32[3] = v218->m128i_i32[3];
LABEL_355:
        v217->m128i_i32[2] = v218->m128i_i32[2];
LABEL_356:
        v217->m128i_i32[1] = v218->m128i_i32[1];
LABEL_357:
        v217->m128i_i32[0] = v218->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
    v168 = v59 + 1;
    v169 = v59 == -1;
  }
LABEL_359:
  v226 = *((__m128i **)this + 35);
  v227 = *((const __m128i **)v2 + 35);
  if ( *((int *)this + 72) < -1 )
  {
    v226 = nullptr;
    if ( *((int *)v2 + 72) < -1 )
      goto LABEL_379;
  }
  else if ( *((int *)v2 + 72) <= -2 )
  {
    v227 = nullptr;
  }
  if ( v227 != v226 && !v169 )
  {
    v228 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v227 >= &v226[2] || v226 >= &v227[2]) && v228 > 1 )
      {
        v229 = v227;
        v230 = v226;
        v231 = v228 - 1;
        do
        {
          v232 = _mm_loadu_si128(v229);
          v229 += 2;
          v230 += 2;
          v233 = _mm_loadu_si128(v229 - 1);
          v230[-2] = v232;
          v230[-1] = v233;
        }
        while ( v229 != &v227[2 * v231 + 2] );
      }
      else
      {
        v344 = v226;
        v345 = v227;
        v231 = v228 - 1;
        do
        {
          v346 = v345->m128i_i32[0];
          v345 += 2;
          v344 += 2;
          v344[-2].m128i_i32[0] = v346;
          v344[-2].m128i_i32[1] = v345[-2].m128i_i32[1];
          v344[-2].m128i_i32[2] = v345[-2].m128i_i32[2];
          v344[-2].m128i_i32[3] = v345[-2].m128i_i32[3];
          v344[-1].m128i_i32[0] = v345[-1].m128i_i32[0];
          v344[-1].m128i_i32[1] = v345[-1].m128i_i32[1];
          v344[-1].m128i_i32[2] = v345[-1].m128i_i32[2];
          v344[-1].m128i_i32[3] = v345[-1].m128i_i32[3];
        }
        while ( &v227[2 * v231 + 2] != v345 );
      }
      v234 = 32 * ((int)v231 + 1LL);
      v227 = (const __m128i *)((char *)v227 + v234);
      v226 = (__m128i *)((char *)v226 + v234);
    }
    switch ( v168 % 8 )
    {
      case 1:
        goto LABEL_377;
      case 2:
        goto LABEL_376;
      case 3:
        goto LABEL_375;
      case 4:
        goto LABEL_374;
      case 5:
        goto LABEL_373;
      case 6:
        goto LABEL_372;
      case 7:
        v226[1].m128i_i32[2] = v227[1].m128i_i32[2];
LABEL_372:
        v226[1].m128i_i32[1] = v227[1].m128i_i32[1];
LABEL_373:
        v226[1].m128i_i32[0] = v227[1].m128i_i32[0];
LABEL_374:
        v226->m128i_i32[3] = v227->m128i_i32[3];
LABEL_375:
        v226->m128i_i32[2] = v227->m128i_i32[2];
LABEL_376:
        v226->m128i_i32[1] = v227->m128i_i32[1];
LABEL_377:
        v226->m128i_i32[0] = v227->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
    v168 = v59 + 1;
    v169 = v59 == -1;
  }
LABEL_379:
  v235 = *((__m128i **)this + 81);
  v236 = *((const __m128i **)v2 + 81);
  v390 = v235;
  if ( *((int *)this + 164) < -1 )
  {
    v235 = nullptr;
    v237 = *((_QWORD *)v2 + 81);
    if ( *((int *)v2 + 164) < -1 )
      goto LABEL_399;
  }
  else if ( *((int *)v2 + 164) < -1 )
  {
    v237 = *((_QWORD *)v2 + 81);
    v236 = nullptr;
    goto LABEL_382;
  }
  v237 = *((_QWORD *)v2 + 81);
LABEL_382:
  if ( v236 != v235 && !v169 )
  {
    v238 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v236 >= &v235[2] || v235 >= &v236[2]) && v238 > 1 )
      {
        v239 = v236;
        v240 = v235;
        v241 = v238 - 1;
        do
        {
          v242 = _mm_loadu_si128(v239);
          v239 += 2;
          v240 += 2;
          v243 = _mm_loadu_si128(v239 - 1);
          v240[-2] = v242;
          v240[-1] = v243;
        }
        while ( v239 != &v236[2 * v241 + 2] );
      }
      else
      {
        v338 = v235;
        v339 = v236;
        v241 = v238 - 1;
        do
        {
          v340 = v339->m128i_i32[0];
          v339 += 2;
          v338 += 2;
          v338[-2].m128i_i32[0] = v340;
          v338[-2].m128i_i32[1] = v339[-2].m128i_i32[1];
          v338[-2].m128i_i32[2] = v339[-2].m128i_i32[2];
          v338[-2].m128i_i32[3] = v339[-2].m128i_i32[3];
          v338[-1].m128i_i32[0] = v339[-1].m128i_i32[0];
          v338[-1].m128i_i32[1] = v339[-1].m128i_i32[1];
          v338[-1].m128i_i32[2] = v339[-1].m128i_i32[2];
          v338[-1].m128i_i32[3] = v339[-1].m128i_i32[3];
        }
        while ( &v236[2 * v241 + 2] != v339 );
      }
      v244 = 32 * ((int)v241 + 1LL);
      v236 = (const __m128i *)((char *)v236 + v244);
      v235 = (__m128i *)((char *)v235 + v244);
    }
    switch ( v168 % 8 )
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
        v235[1].m128i_i32[2] = v236[1].m128i_i32[2];
LABEL_392:
        v235[1].m128i_i32[1] = v236[1].m128i_i32[1];
LABEL_393:
        v235[1].m128i_i32[0] = v236[1].m128i_i32[0];
LABEL_394:
        v235->m128i_i32[3] = v236->m128i_i32[3];
LABEL_395:
        v235->m128i_i32[2] = v236->m128i_i32[2];
LABEL_396:
        v235->m128i_i32[1] = v236->m128i_i32[1];
LABEL_397:
        v235->m128i_i32[0] = v236->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
    v168 = v59 + 1;
    v169 = v59 == -1;
  }
LABEL_399:
  v245 = *((__m128i **)this + 29);
  v246 = *((const __m128i **)v2 + 29);
  v392 = v245;
  if ( *((int *)this + 60) < -1 )
  {
    v245 = nullptr;
    if ( *((int *)v2 + 60) < -1 )
      goto LABEL_419;
  }
  else if ( *((int *)v2 + 60) < -1 )
  {
    v246 = nullptr;
  }
  if ( v246 != v245 && !v169 )
  {
    v247 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v246 >= &v245[2] || v245 >= &v246[2]) && v247 > 1 )
      {
        v248 = v246;
        v249 = v245;
        v250 = v247 - 1;
        do
        {
          v251 = _mm_loadu_si128(v248);
          v248 += 2;
          v249 += 2;
          v252 = _mm_loadu_si128(v248 - 1);
          v249[-2] = v251;
          v249[-1] = v252;
        }
        while ( v248 != &v246[2 * v250 + 2] );
      }
      else
      {
        v341 = v245;
        v342 = v246;
        v250 = v247 - 1;
        do
        {
          v343 = v342->m128i_i32[0];
          v342 += 2;
          v341 += 2;
          v341[-2].m128i_i32[0] = v343;
          v341[-2].m128i_i32[1] = v342[-2].m128i_i32[1];
          v341[-2].m128i_i32[2] = v342[-2].m128i_i32[2];
          v341[-2].m128i_i32[3] = v342[-2].m128i_i32[3];
          v341[-1].m128i_i32[0] = v342[-1].m128i_i32[0];
          v341[-1].m128i_i32[1] = v342[-1].m128i_i32[1];
          v341[-1].m128i_i32[2] = v342[-1].m128i_i32[2];
          v341[-1].m128i_i32[3] = v342[-1].m128i_i32[3];
        }
        while ( &v246[2 * v250 + 2] != v342 );
      }
      v253 = 32 * ((int)v250 + 1LL);
      v246 = (const __m128i *)((char *)v246 + v253);
      v245 = (__m128i *)((char *)v245 + v253);
    }
    switch ( v168 % 8 )
    {
      case 1:
        goto LABEL_417;
      case 2:
        goto LABEL_416;
      case 3:
        goto LABEL_415;
      case 4:
        goto LABEL_414;
      case 5:
        goto LABEL_413;
      case 6:
        goto LABEL_412;
      case 7:
        v245[1].m128i_i32[2] = v246[1].m128i_i32[2];
LABEL_412:
        v245[1].m128i_i32[1] = v246[1].m128i_i32[1];
LABEL_413:
        v245[1].m128i_i32[0] = v246[1].m128i_i32[0];
LABEL_414:
        v245->m128i_i32[3] = v246->m128i_i32[3];
LABEL_415:
        v245->m128i_i32[2] = v246->m128i_i32[2];
LABEL_416:
        v245->m128i_i32[1] = v246->m128i_i32[1];
LABEL_417:
        v245->m128i_i32[0] = v246->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
    v168 = v59 + 1;
    v169 = v59 == -1;
  }
LABEL_419:
  v254 = *((__m128i **)this + 10);
  v255 = *((const __m128i **)v2 + 10);
  if ( *((int *)this + 22) < -1 )
  {
    v254 = nullptr;
    if ( *((int *)v2 + 22) < -1 )
      goto LABEL_439;
  }
  else if ( *((int *)v2 + 22) <= -2 )
  {
    v255 = nullptr;
  }
  if ( v255 != v254 && !v169 )
  {
    v256 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v255 >= &v254[2] || v254 >= &v255[2]) && v256 > 1 )
      {
        v257 = v255;
        v258 = v254;
        v259 = v256 - 1;
        do
        {
          v260 = _mm_loadu_si128(v257);
          v257 += 2;
          v258 += 2;
          v261 = _mm_loadu_si128(v257 - 1);
          v258[-2] = v260;
          v258[-1] = v261;
        }
        while ( v257 != &v255[2 * v259 + 2] );
      }
      else
      {
        v347 = v254;
        v348 = v255;
        v259 = v256 - 1;
        do
        {
          v349 = v348->m128i_i32[0];
          v348 += 2;
          v347 += 2;
          v347[-2].m128i_i32[0] = v349;
          v347[-2].m128i_i32[1] = v348[-2].m128i_i32[1];
          v347[-2].m128i_i32[2] = v348[-2].m128i_i32[2];
          v347[-2].m128i_i32[3] = v348[-2].m128i_i32[3];
          v347[-1].m128i_i32[0] = v348[-1].m128i_i32[0];
          v347[-1].m128i_i32[1] = v348[-1].m128i_i32[1];
          v347[-1].m128i_i32[2] = v348[-1].m128i_i32[2];
          v347[-1].m128i_i32[3] = v348[-1].m128i_i32[3];
        }
        while ( &v255[2 * v259 + 2] != v348 );
      }
      v262 = 32 * ((int)v259 + 1LL);
      v255 = (const __m128i *)((char *)v255 + v262);
      v254 = (__m128i *)((char *)v254 + v262);
    }
    switch ( v168 % 8 )
    {
      case 1:
        goto LABEL_437;
      case 2:
        goto LABEL_436;
      case 3:
        goto LABEL_435;
      case 4:
        goto LABEL_434;
      case 5:
        goto LABEL_433;
      case 6:
        goto LABEL_432;
      case 7:
        v254[1].m128i_i32[2] = v255[1].m128i_i32[2];
LABEL_432:
        v254[1].m128i_i32[1] = v255[1].m128i_i32[1];
LABEL_433:
        v254[1].m128i_i32[0] = v255[1].m128i_i32[0];
LABEL_434:
        v254->m128i_i32[3] = v255->m128i_i32[3];
LABEL_435:
        v254->m128i_i32[2] = v255->m128i_i32[2];
LABEL_436:
        v254->m128i_i32[1] = v255->m128i_i32[1];
LABEL_437:
        v254->m128i_i32[0] = v255->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
    v168 = v59 + 1;
    v169 = v59 == -1;
  }
LABEL_439:
  v263 = *((_QWORD *)this + 44);
  v264 = *((const __m128i **)v2 + 44);
  if ( *((int *)this + 90) < -1 )
  {
    v265 = nullptr;
    v266 = *((_QWORD *)v2 + 44);
    if ( *((int *)v2 + 90) < -1 )
      goto LABEL_459;
  }
  else
  {
    v265 = *((__m128i **)this + 44);
    if ( *((int *)v2 + 90) < -1 )
    {
      v266 = *((_QWORD *)v2 + 44);
      v264 = nullptr;
      goto LABEL_442;
    }
  }
  v266 = *((_QWORD *)v2 + 44);
LABEL_442:
  if ( v264 != v265 && !v169 )
  {
    v267 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v264 >= &v265[2] || v265 >= &v264[2]) && v267 > 1 )
      {
        v268 = v264;
        v269 = v265;
        v270 = v267 - 1;
        do
        {
          v271 = _mm_loadu_si128(v268);
          v268 += 2;
          v269 += 2;
          v272 = _mm_loadu_si128(v268 - 1);
          v269[-2] = v271;
          v269[-1] = v272;
        }
        while ( v268 != &v264[2 * v270 + 2] );
      }
      else
      {
        v350 = v265;
        v351 = v264;
        v270 = v267 - 1;
        do
        {
          v352 = v351->m128i_i32[0];
          v351 += 2;
          v350 += 2;
          v350[-2].m128i_i32[0] = v352;
          v350[-2].m128i_i32[1] = v351[-2].m128i_i32[1];
          v350[-2].m128i_i32[2] = v351[-2].m128i_i32[2];
          v350[-2].m128i_i32[3] = v351[-2].m128i_i32[3];
          v350[-1].m128i_i32[0] = v351[-1].m128i_i32[0];
          v350[-1].m128i_i32[1] = v351[-1].m128i_i32[1];
          v350[-1].m128i_i32[2] = v351[-1].m128i_i32[2];
          v350[-1].m128i_i32[3] = v351[-1].m128i_i32[3];
        }
        while ( &v264[2 * v270 + 2] != v351 );
      }
      v273 = 32 * ((int)v270 + 1LL);
      v264 = (const __m128i *)((char *)v264 + v273);
      v265 = (__m128i *)((char *)v265 + v273);
    }
    switch ( v168 % 8 )
    {
      case 1:
        goto LABEL_457;
      case 2:
        goto LABEL_456;
      case 3:
        goto LABEL_455;
      case 4:
        goto LABEL_454;
      case 5:
        goto LABEL_453;
      case 6:
        goto LABEL_452;
      case 7:
        v265[1].m128i_i32[2] = v264[1].m128i_i32[2];
LABEL_452:
        v265[1].m128i_i32[1] = v264[1].m128i_i32[1];
LABEL_453:
        v265[1].m128i_i32[0] = v264[1].m128i_i32[0];
LABEL_454:
        v265->m128i_i32[3] = v264->m128i_i32[3];
LABEL_455:
        v265->m128i_i32[2] = v264->m128i_i32[2];
LABEL_456:
        v265->m128i_i32[1] = v264->m128i_i32[1];
LABEL_457:
        v265->m128i_i32[0] = v264->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
    v168 = v59 + 1;
    v169 = v59 == -1;
  }
LABEL_459:
  v274 = *((_QWORD *)this + 47);
  v275 = *((const __m128i **)v2 + 47);
  if ( *((int *)this + 96) < -1 )
  {
    v276 = nullptr;
    v277 = *((_QWORD *)v2 + 47);
    if ( *((int *)v2 + 96) < -1 )
      goto LABEL_479;
  }
  else
  {
    v276 = *((__m128i **)this + 47);
    if ( *((int *)v2 + 96) < -1 )
    {
      v277 = *((_QWORD *)v2 + 47);
      v275 = nullptr;
      goto LABEL_462;
    }
  }
  v277 = *((_QWORD *)v2 + 47);
LABEL_462:
  if ( v275 != v276 && !v169 )
  {
    v278 = v168 >> 3;
    if ( v168 >> 3 > 0 )
    {
      if ( (v275 >= &v276[2] || v276 >= &v275[2]) && v278 > 1 )
      {
        v279 = v275;
        v280 = v276;
        v281 = v278 - 1;
        do
        {
          v282 = _mm_loadu_si128(v279);
          v279 += 2;
          v280 += 2;
          v283 = _mm_loadu_si128(v279 - 1);
          v280[-2] = v282;
          v280[-1] = v283;
        }
        while ( v279 != &v275[2 * v281 + 2] );
      }
      else
      {
        v376 = v276;
        v396 = v168;
        v281 = v278 - 1;
        v377 = v275;
        do
        {
          v378 = v377->m128i_i32[0];
          v377 += 2;
          v376 += 2;
          v376[-2].m128i_i32[0] = v378;
          v376[-2].m128i_i32[1] = v377[-2].m128i_i32[1];
          v376[-2].m128i_i32[2] = v377[-2].m128i_i32[2];
          v376[-2].m128i_i32[3] = v377[-2].m128i_i32[3];
          v376[-1].m128i_i32[0] = v377[-1].m128i_i32[0];
          v376[-1].m128i_i32[1] = v377[-1].m128i_i32[1];
          v376[-1].m128i_i32[2] = v377[-1].m128i_i32[2];
          v376[-1].m128i_i32[3] = v377[-1].m128i_i32[3];
        }
        while ( &v275[2 * v281 + 2] != v377 );
        v168 = v396;
      }
      v284 = 32 * ((int)v281 + 1LL);
      v275 = (const __m128i *)((char *)v275 + v284);
      v276 = (__m128i *)((char *)v276 + v284);
    }
    switch ( v168 % 8 )
    {
      case 1:
        goto LABEL_477;
      case 2:
        goto LABEL_476;
      case 3:
        goto LABEL_475;
      case 4:
        goto LABEL_474;
      case 5:
        goto LABEL_473;
      case 6:
        goto LABEL_472;
      case 7:
        v276[1].m128i_i32[2] = v275[1].m128i_i32[2];
LABEL_472:
        v276[1].m128i_i32[1] = v275[1].m128i_i32[1];
LABEL_473:
        v276[1].m128i_i32[0] = v275[1].m128i_i32[0];
LABEL_474:
        v276->m128i_i32[3] = v275->m128i_i32[3];
LABEL_475:
        v276->m128i_i32[2] = v275->m128i_i32[2];
LABEL_476:
        v276->m128i_i32[1] = v275->m128i_i32[1];
LABEL_477:
        v276->m128i_i32[0] = v275->m128i_i32[0];
        break;
      default:
        break;
    }
    v59 = *((_DWORD *)this + 9);
  }
LABEL_479:
  v285 = *((__m128i **)this + 102);
  v286 = *((const __m128i **)v2 + 102);
  if ( *((int *)this + 206) <= -2 )
    v285 = nullptr;
  v287 = v59 - *((_DWORD *)this + 11);
  if ( *((int *)v2 + 206) <= -2 )
    v286 = nullptr;
  v288 = v287 + 1;
  if ( v287 != -1 && v286 != v285 )
  {
    v289 = v288 >> 3;
    if ( v288 >> 3 > 0 )
    {
      if ( (v286 >= &v285[2] || v285 >= &v286[2]) && v289 > 1 )
      {
        v290 = v286;
        v291 = v285;
        v292 = v289 - 1;
        do
        {
          v293 = _mm_loadu_si128(v290);
          v290 += 2;
          v291 += 2;
          v294 = _mm_loadu_si128(v290 - 1);
          v291[-2] = v293;
          v291[-1] = v294;
        }
        while ( v290 != &v286[2 * v292 + 2] );
      }
      else
      {
        v334 = v285;
        v395 = v286;
        v292 = v289 - 1;
        v335 = &v286[2 * v292 + 2];
        v336 = v286;
        do
        {
          v337 = v336->m128i_i32[0];
          v336 += 2;
          v334 += 2;
          v334[-2].m128i_i32[0] = v337;
          v334[-2].m128i_i32[1] = v336[-2].m128i_i32[1];
          v334[-2].m128i_i32[2] = v336[-2].m128i_i32[2];
          v334[-2].m128i_i32[3] = v336[-2].m128i_i32[3];
          v334[-1].m128i_i32[0] = v336[-1].m128i_i32[0];
          v334[-1].m128i_i32[1] = v336[-1].m128i_i32[1];
          v334[-1].m128i_i32[2] = v336[-1].m128i_i32[2];
          v334[-1].m128i_i32[3] = v336[-1].m128i_i32[3];
        }
        while ( v335 != v336 );
        v286 = v395;
      }
      v295 = 32 * ((int)v292 + 1LL);
      v286 = (const __m128i *)((char *)v286 + v295);
      v285 = (__m128i *)((char *)v285 + v295);
    }
    switch ( v288 % 8 )
    {
      case 1:
        goto LABEL_498;
      case 2:
        goto LABEL_497;
      case 3:
        goto LABEL_496;
      case 4:
        goto LABEL_495;
      case 5:
        goto LABEL_494;
      case 6:
        goto LABEL_493;
      case 7:
        v285[1].m128i_i32[2] = v286[1].m128i_i32[2];
LABEL_493:
        v285[1].m128i_i32[1] = v286[1].m128i_i32[1];
LABEL_494:
        v285[1].m128i_i32[0] = v286[1].m128i_i32[0];
LABEL_495:
        v285->m128i_i32[3] = v286->m128i_i32[3];
LABEL_496:
        v285->m128i_i32[2] = v286->m128i_i32[2];
LABEL_497:
        v285->m128i_i32[1] = v286->m128i_i32[1];
LABEL_498:
        v285->m128i_i32[0] = v286->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v296 = nullptr;
  v297 = *((int *)this + 13);
  v298 = v390;
  if ( *((int *)v2 + 164) <= -2 )
    v237 = 0;
  v299 = *(_DWORD *)(v237 + 4 * v297);
  v300 = *((__m128i **)this + 50);
  if ( *((int *)this + 164) <= -2 )
    v298 = nullptr;
  v298->m128i_i32[v297] = v299;
  v301 = nullptr;
  v302 = *((int *)this + 13);
  if ( *((int *)v2 + 90) <= -2 )
    v266 = 0;
  v303 = *(_DWORD *)(v266 + 4 * v302);
  v304 = *((const __m128i **)v2 + 50);
  if ( *((int *)this + 90) <= -2 )
    v263 = 0;
  *(_DWORD *)(v263 + 4 * v302) = v303;
  if ( *((int *)v2 + 96) <= -2 )
    v277 = 0;
  if ( *((int *)this + 96) <= -2 )
    v274 = 0;
  *(_DWORD *)(v274 + 4LL * *((int *)this + 13)) = *(_DWORD *)(v277 + 4LL * *((int *)this + 13));
  if ( *((int *)this + 102) > -2 )
    v301 = v300;
  if ( *((int *)v2 + 102) > -2 )
    v296 = v304;
  v305 = v296;
  v306 = *((_DWORD *)this + 9);
  v307 = v306 == -1;
  v308 = v306 + 1;
  v309 = v307;
  if ( v301 != v305 && !v307 )
  {
    v310 = v308 >> 3;
    if ( v308 >> 3 > 0 )
    {
      if ( (v305 >= &v301[2] || v301 >= &v305[2]) && v310 > 1 )
      {
        v311 = v305;
        v312 = v301;
        v313 = v310 - 1;
        do
        {
          v314 = _mm_loadu_si128(v311);
          v311 += 2;
          v312 += 2;
          v315 = _mm_loadu_si128(v311 - 1);
          v312[-2] = v314;
          v312[-1] = v315;
        }
        while ( v311 != &v305[2 * v313 + 2] );
      }
      else
      {
        v359 = v301;
        v360 = v305;
        v313 = v310 - 1;
        do
        {
          v361 = v360->m128i_i32[0];
          v360 += 2;
          v359 += 2;
          v359[-2].m128i_i32[0] = v361;
          v359[-2].m128i_i32[1] = v360[-2].m128i_i32[1];
          v359[-2].m128i_i32[2] = v360[-2].m128i_i32[2];
          v359[-2].m128i_i32[3] = v360[-2].m128i_i32[3];
          v359[-1].m128i_i32[0] = v360[-1].m128i_i32[0];
          v359[-1].m128i_i32[1] = v360[-1].m128i_i32[1];
          v359[-1].m128i_i32[2] = v360[-1].m128i_i32[2];
          v359[-1].m128i_i32[3] = v360[-1].m128i_i32[3];
        }
        while ( v360 != &v305[2 * v313 + 2] );
      }
      v316 = 32 * ((int)v313 + 1LL);
      v305 = (const __m128i *)((char *)v305 + v316);
      v301 = (__m128i *)((char *)v301 + v316);
    }
    switch ( v308 % 8 )
    {
      case 1:
        goto LABEL_530;
      case 2:
        goto LABEL_529;
      case 3:
        goto LABEL_528;
      case 4:
        goto LABEL_527;
      case 5:
        goto LABEL_526;
      case 6:
        goto LABEL_525;
      case 7:
        v301[1].m128i_i32[2] = v305[1].m128i_i32[2];
LABEL_525:
        v301[1].m128i_i32[1] = v305[1].m128i_i32[1];
LABEL_526:
        v301[1].m128i_i32[0] = v305[1].m128i_i32[0];
LABEL_527:
        v301->m128i_i32[3] = v305->m128i_i32[3];
LABEL_528:
        v301->m128i_i32[2] = v305->m128i_i32[2];
LABEL_529:
        v301->m128i_i32[1] = v305->m128i_i32[1];
LABEL_530:
        v301->m128i_i32[0] = v305->m128i_i32[0];
        break;
      default:
        break;
    }
    v308 = *((_DWORD *)this + 9) + 1;
    v309 = v308 == 0;
  }
  v317 = *((_QWORD *)this + 53);
  v318 = *((const __m128i **)v2 + 53);
  if ( *((int *)this + 108) >= -1 )
  {
    if ( *((int *)v2 + 108) < -1 )
    {
      v320 = *((_QWORD *)v2 + 53);
      v319 = *((__m128i **)this + 53);
      v318 = nullptr;
      goto LABEL_536;
    }
    v319 = *((__m128i **)this + 53);
LABEL_535:
    v320 = *((_QWORD *)v2 + 53);
LABEL_536:
    if ( v318 != v319 && !v309 )
    {
      v321 = v308 >> 3;
      if ( v308 >> 3 > 0 )
      {
        if ( (v318 >= &v319[2] || v319 >= &v318[2]) && v321 > 1 )
        {
          v322 = v319;
          v323 = v318;
          v324 = v321 - 1;
          do
          {
            v325 = _mm_loadu_si128(v323);
            v322 += 2;
            v323 += 2;
            v326 = _mm_loadu_si128(v323 - 1);
            v322[-2] = v325;
            v322[-1] = v326;
          }
          while ( &v319[2 * v324 + 2] != v322 );
        }
        else
        {
          v362 = v319;
          v324 = v321 - 1;
          v363 = v318;
          do
          {
            v364 = v363->m128i_i32[0];
            v363 += 2;
            v362 += 2;
            v362[-2].m128i_i32[0] = v364;
            v362[-2].m128i_i32[1] = v363[-2].m128i_i32[1];
            v362[-2].m128i_i32[2] = v363[-2].m128i_i32[2];
            v362[-2].m128i_i32[3] = v363[-2].m128i_i32[3];
            v362[-1].m128i_i32[0] = v363[-1].m128i_i32[0];
            v362[-1].m128i_i32[1] = v363[-1].m128i_i32[1];
            v362[-1].m128i_i32[2] = v363[-1].m128i_i32[2];
            v362[-1].m128i_i32[3] = v363[-1].m128i_i32[3];
          }
          while ( v363 != &v318[2 * v324 + 2] );
        }
        v327 = 32 * ((int)v324 + 1LL);
        v318 = (const __m128i *)((char *)v318 + v327);
        v319 = (__m128i *)((char *)v319 + v327);
      }
      switch ( v308 % 8 )
      {
        case 1:
          goto LABEL_551;
        case 2:
          goto LABEL_550;
        case 3:
          goto LABEL_549;
        case 4:
          goto LABEL_548;
        case 5:
          goto LABEL_547;
        case 6:
          goto LABEL_546;
        case 7:
          v319[1].m128i_i32[2] = v318[1].m128i_i32[2];
LABEL_546:
          v319[1].m128i_i32[1] = v318[1].m128i_i32[1];
LABEL_547:
          v319[1].m128i_i32[0] = v318[1].m128i_i32[0];
LABEL_548:
          v319->m128i_i32[3] = v318->m128i_i32[3];
LABEL_549:
          v319->m128i_i32[2] = v318->m128i_i32[2];
LABEL_550:
          v319->m128i_i32[1] = v318->m128i_i32[1];
LABEL_551:
          v319->m128i_i32[0] = v318->m128i_i32[0];
          break;
        default:
          goto LABEL_552;
      }
    }
    goto LABEL_552;
  }
  v319 = nullptr;
  v320 = *((_QWORD *)v2 + 53);
  if ( *((int *)v2 + 108) >= -1 )
    goto LABEL_535;
LABEL_552:
  if ( *((int *)v2 + 102) <= -2 )
    v304 = nullptr;
  if ( *((int *)this + 102) <= -2 )
    v300 = nullptr;
  v300->m128i_i32[*((int *)this + 10)] = v304->m128i_i32[*((int *)this + 10)];
  if ( *((int *)v2 + 108) <= -2 )
    v320 = 0;
  if ( *((int *)this + 108) <= -2 )
    v317 = 0;
  *(_DWORD *)(v317 + 4LL * *((int *)this + 10)) = *(_DWORD *)(v320 + 4LL * *((int *)this + 10));
LABEL_48:
  v60 = *((_DWORD *)this + 198);
  v61 = *((_QWORD **)this + 100);
  v62 = *((_QWORD **)v2 + 100);
  if ( v61 != v62 && v60 )
  {
    if ( v60 >> 3 > 0 )
    {
      v63 = *((_QWORD *)this + 100);
      v64 = *((__int64 **)v2 + 100);
      v65 = (unsigned int)((v60 >> 3) - 1);
      do
      {
        v66 = *v64;
        v64 += 8;
        v63 += 64;
        *(_QWORD *)(v63 - 64) = v66;
        *(_QWORD *)(v63 - 56) = *(v64 - 7);
        *(_QWORD *)(v63 - 48) = *(v64 - 6);
        *(_QWORD *)(v63 - 40) = *(v64 - 5);
        *(_QWORD *)(v63 - 32) = *(v64 - 4);
        *(_QWORD *)(v63 - 24) = *(v64 - 3);
        *(_QWORD *)(v63 - 16) = *(v64 - 2);
        *(_QWORD *)(v63 - 8) = *(v64 - 1);
      }
      while ( &v62[8 * v65 + 8] != v64 );
      v67 = ((int)v65 + 1LL) << 6;
      v62 = (_QWORD *)((char *)v62 + v67);
      v61 = (_QWORD *)((char *)v61 + v67);
    }
    switch ( v60 % 8 )
    {
      case 1:
        goto LABEL_61;
      case 2:
        goto LABEL_60;
      case 3:
        goto LABEL_59;
      case 4:
        goto LABEL_58;
      case 5:
        goto LABEL_57;
      case 6:
        goto LABEL_56;
      case 7:
        v61[6] = v62[6];
LABEL_56:
        v61[5] = v62[5];
LABEL_57:
        v61[4] = v62[4];
LABEL_58:
        v61[3] = v62[3];
LABEL_59:
        v61[2] = v62[2];
LABEL_60:
        v61[1] = v62[1];
LABEL_61:
        *v61 = *v62;
        break;
      default:
        break;
    }
  }
  v68 = *((_DWORD **)this + 101);
  v69 = *((_DWORD **)v2 + 101);
  if ( v68 != v69 && v60 )
  {
    v70 = v60 >> 3;
    if ( v60 >> 3 > 0 )
    {
      if ( (v68 >= v69 + 8 || v69 >= v68 + 8) && v70 > 1 )
      {
        v71 = *((const __m128i **)v2 + 101);
        v72 = *((_QWORD *)this + 101);
        v73 = v70 - 1;
        do
        {
          v74 = _mm_loadu_si128(v71);
          v71 += 2;
          v72 += 32;
          v75 = _mm_loadu_si128(v71 - 1);
          *(__m128i *)(v72 - 32) = v74;
          *(__m128i *)(v72 - 16) = v75;
        }
        while ( v71 != (const __m128i *)&v69[8 * v73 + 8] );
      }
      else
      {
        v328 = *((_QWORD *)this + 101);
        v329 = *((int **)v2 + 101);
        v73 = v70 - 1;
        do
        {
          v330 = *v329;
          v329 += 8;
          v328 += 32;
          *(_DWORD *)(v328 - 32) = v330;
          *(_DWORD *)(v328 - 28) = *(v329 - 7);
          *(_DWORD *)(v328 - 24) = *(v329 - 6);
          *(_DWORD *)(v328 - 20) = *(v329 - 5);
          *(_DWORD *)(v328 - 16) = *(v329 - 4);
          *(_DWORD *)(v328 - 12) = *(v329 - 3);
          *(_DWORD *)(v328 - 8) = *(v329 - 2);
          *(_DWORD *)(v328 - 4) = *(v329 - 1);
        }
        while ( v329 != &v69[8 * v73 + 8] );
      }
      v76 = 32 * ((int)v73 + 1LL);
      v69 = (_DWORD *)((char *)v69 + v76);
      v68 = (_DWORD *)((char *)v68 + v76);
    }
    switch ( v60 % 8 )
    {
      case 1:
        goto LABEL_77;
      case 2:
        goto LABEL_76;
      case 3:
        goto LABEL_75;
      case 4:
        goto LABEL_74;
      case 5:
        goto LABEL_73;
      case 6:
        goto LABEL_72;
      case 7:
        v68[6] = v69[6];
LABEL_72:
        v68[5] = v69[5];
LABEL_73:
        v68[4] = v69[4];
LABEL_74:
        v68[3] = v69[3];
LABEL_75:
        v68[2] = v69[2];
LABEL_76:
        v68[1] = v69[1];
LABEL_77:
        *v68 = *v69;
        break;
      default:
        break;
    }
  }
  v77 = v390;
  v78 = *((__int64 **)this + 75);
  v79 = *((_DWORD *)this + 146);
  v80 = *((__int64 **)v2 + 75);
  v81 = *((_DWORD *)v2 + 152);
  if ( *((int *)this + 164) <= -2 )
    v77 = nullptr;
  v391 = v77;
  v82 = v392;
  if ( *((int *)this + 60) <= -2 )
    v82 = nullptr;
  v393 = v82;
  if ( *((int *)this + 152) < -1 )
  {
    v78 = nullptr;
    if ( v81 < -1 )
      goto LABEL_99;
  }
  else if ( v81 <= -2 )
  {
    v80 = nullptr;
  }
  if ( v79 && v80 != v78 )
  {
    if ( v79 >> 3 > 0 )
    {
      v83 = v78;
      v84 = v80;
      v85 = (unsigned int)((v79 >> 3) - 1);
      do
      {
        v86 = *v84;
        v83 += 8;
        v84 += 8;
        *(v83 - 8) = v86;
        *(v83 - 7) = *(v84 - 7);
        *(v83 - 6) = *(v84 - 6);
        *(v83 - 5) = *(v84 - 5);
        *(v83 - 4) = *(v84 - 4);
        *(v83 - 3) = *(v84 - 3);
        *(v83 - 2) = *(v84 - 2);
        *(v83 - 1) = *(v84 - 1);
      }
      while ( &v78[8 * v85 + 8] != v83 );
      v87 = ((int)v85 + 1LL) << 6;
      v80 = (__int64 *)((char *)v80 + v87);
      v78 = (__int64 *)((char *)v78 + v87);
    }
    switch ( v79 % 8 )
    {
      case 1:
        goto LABEL_98;
      case 2:
        goto LABEL_97;
      case 3:
        goto LABEL_96;
      case 4:
        goto LABEL_95;
      case 5:
        goto LABEL_94;
      case 6:
        goto LABEL_93;
      case 7:
        v78[6] = v80[6];
LABEL_93:
        v78[5] = v80[5];
LABEL_94:
        v78[4] = v80[4];
LABEL_95:
        v78[3] = v80[3];
LABEL_96:
        v78[2] = v80[2];
LABEL_97:
        v78[1] = v80[1];
LABEL_98:
        *v78 = *v80;
        break;
      default:
        break;
    }
  }
LABEL_99:
  v88 = nullptr;
  v89 = *((_QWORD *)v2 + 63);
  v90 = *((_QWORD *)this + 84);
  v91 = *((_QWORD *)this + 63);
  v92 = v385;
  v93 = *((_DWORD *)this + 9);
  if ( *((int *)v2 + 128) <= -2 )
    v89 = 0;
  if ( *((int *)this + 170) <= -2 )
    v90 = 0;
  if ( *((int *)this + 128) <= -2 )
    v91 = 0;
  if ( *((int *)this + 48) <= -2 )
    v92 = nullptr;
  if ( *((int *)this + 54) > -2 )
    v88 = v388;
  v386 = v92;
  v389 = v88;
  if ( v93 > 0 )
  {
    v94 = 1;
    v394 = v2;
    do
    {
      v95 = v389->m128i_i32[v94 - 1];
      v96 = 4LL * v386->m128i_i32[v94 - 1];
      v97 = (_DWORD *)(v91 + v96);
      v98 = (_DWORD *)(v89 + v96);
      if ( v91 + v96 != v89 + v96 && v95 )
      {
        v99 = v95 >> 3;
        if ( v95 >> 3 > 0 )
        {
          if ( ((unsigned __int64)v98 >= v91 + v96 + 32 || (unsigned __int64)v97 >= v89 + v96 + 32) && v99 > 1 )
          {
            v100 = 0;
            v101 = v99 - 1;
            do
            {
              v102 = _mm_loadu_si128((const __m128i *)&v98[v100 + 4]);
              *(__m128i *)&v97[v100] = _mm_loadu_si128((const __m128i *)&v98[v100]);
              *(__m128i *)&v97[v100 + 4] = v102;
              v100 += 8;
            }
            while ( 8 * (v101 + 1) != v100 );
          }
          else
          {
            v160 = (_DWORD *)(v91 + v96);
            v161 = (int *)(v89 + v96);
            v101 = v99 - 1;
            v162 = &v97[8 * v101 + 8];
            do
            {
              v163 = *v161;
              v160 += 8;
              v161 += 8;
              *(v160 - 8) = v163;
              *(v160 - 7) = *(v161 - 7);
              *(v160 - 6) = *(v161 - 6);
              *(v160 - 5) = *(v161 - 5);
              *(v160 - 4) = *(v161 - 4);
              *(v160 - 3) = *(v161 - 3);
              *(v160 - 2) = *(v161 - 2);
              *(v160 - 1) = *(v161 - 1);
            }
            while ( v162 != v160 );
            v97 = (_DWORD *)(v91 + v96);
          }
          v103 = 32 * ((int)v101 + 1LL);
          v98 = (_DWORD *)((char *)v98 + v103);
          v97 = (_DWORD *)((char *)v97 + v103);
        }
        switch ( v95 % 8 )
        {
          case 1:
            goto LABEL_126;
          case 2:
            goto LABEL_125;
          case 3:
            goto LABEL_124;
          case 4:
            goto LABEL_123;
          case 5:
            goto LABEL_122;
          case 6:
            goto LABEL_121;
          case 7:
            v97[6] = v98[6];
LABEL_121:
            v97[5] = v98[5];
LABEL_122:
            v97[4] = v98[4];
LABEL_123:
            v97[3] = v98[3];
LABEL_124:
            v97[2] = v98[2];
LABEL_125:
            v97[1] = v98[1];
LABEL_126:
            *v97 = *v98;
            break;
          default:
            break;
        }
      }
      v104 = (int *)(v90 + v96);
      v105 = (int *)(v8 + v96);
      if ( v90 + v96 != v8 + v96 && v95 )
      {
        v106 = v95 >> 3;
        if ( v95 >> 3 > 0 )
        {
          if ( ((unsigned __int64)v104 >= v8 + v96 + 32 || (unsigned __int64)v105 >= v90 + v96 + 32) && v106 > 1 )
          {
            v107 = 0;
            v108 = v106 - 1;
            do
            {
              v109 = _mm_loadu_si128((const __m128i *)&v105[v107 + 4]);
              *(__m128i *)&v104[v107] = _mm_loadu_si128((const __m128i *)&v105[v107]);
              *(__m128i *)&v104[v107 + 4] = v109;
              v107 += 8;
            }
            while ( v107 != 8 * (v108 + 1) );
          }
          else
          {
            v164 = (int *)(v90 + v96);
            v165 = v105;
            v108 = v106 - 1;
            do
            {
              v166 = *v165;
              v164 += 8;
              v165 += 8;
              *(v164 - 8) = v166;
              *(v164 - 7) = *(v165 - 7);
              *(v164 - 6) = *(v165 - 6);
              *(v164 - 5) = *(v165 - 5);
              *(v164 - 4) = *(v165 - 4);
              *(v164 - 3) = *(v165 - 3);
              *(v164 - 2) = *(v165 - 2);
              *(v164 - 1) = *(v165 - 1);
            }
            while ( &v104[8 * v108 + 8] != v164 );
          }
          v110 = 32 * ((int)v108 + 1LL);
          v105 = (int *)((char *)v105 + v110);
          v104 = (int *)((char *)v104 + v110);
        }
        switch ( v95 % 8 )
        {
          case 1:
            goto LABEL_142;
          case 2:
            goto LABEL_141;
          case 3:
            goto LABEL_140;
          case 4:
            goto LABEL_139;
          case 5:
            goto LABEL_138;
          case 6:
            goto LABEL_137;
          case 7:
            v104[6] = v105[6];
LABEL_137:
            v104[5] = v105[5];
LABEL_138:
            v104[4] = v105[4];
LABEL_139:
            v104[3] = v105[3];
LABEL_140:
            v104[2] = v105[2];
LABEL_141:
            v104[1] = v105[1];
LABEL_142:
            *v104 = *v105;
            break;
          default:
            break;
        }
      }
      v93 = *((_DWORD *)this + 9);
      v111 = v94++;
    }
    while ( v93 > v111 );
    v2 = v394;
  }
  v112 = *((_QWORD *)v2 + 78);
  v113 = *((_QWORD *)this + 78);
  if ( *((int *)v2 + 158) <= -2 )
    v112 = 0;
  if ( *((int *)this + 158) <= -2 )
    v113 = 0;
  if ( v93 > 0 )
  {
    v114 = 1;
    do
    {
      v115 = v393->m128i_i32[v114 - 1];
      v116 = 4LL * v391->m128i_i32[v114 - 1];
      v117 = (_DWORD *)(v113 + v116);
      v118 = (_DWORD *)(v112 + v116);
      if ( v115 && v117 != v118 )
      {
        v119 = v115 >> 3;
        if ( v115 >> 3 > 0 )
        {
          if ( ((unsigned __int64)v118 >= v113 + v116 + 32 || (unsigned __int64)v117 >= v112 + v116 + 32) && v119 > 1 )
          {
            v120 = 0;
            v121 = v119 - 1;
            do
            {
              v122 = _mm_loadu_si128((const __m128i *)&v118[v120 + 4]);
              *(__m128i *)&v117[v120] = _mm_loadu_si128((const __m128i *)&v118[v120]);
              *(__m128i *)&v117[v120 + 4] = v122;
              v120 += 8;
            }
            while ( v120 != 8 * (v121 + 1) );
          }
          else
          {
            v156 = (_DWORD *)(v113 + v116);
            v157 = (int *)(v112 + v116);
            v387 = v117;
            v121 = v119 - 1;
            v158 = &v117[8 * v121 + 8];
            do
            {
              v159 = *v157;
              v156 += 8;
              v157 += 8;
              *(v156 - 8) = v159;
              *(v156 - 7) = *(v157 - 7);
              *(v156 - 6) = *(v157 - 6);
              *(v156 - 5) = *(v157 - 5);
              *(v156 - 4) = *(v157 - 4);
              *(v156 - 3) = *(v157 - 3);
              *(v156 - 2) = *(v157 - 2);
              *(v156 - 1) = *(v157 - 1);
            }
            while ( v156 != v158 );
            v117 = v387;
          }
          v123 = 32 * ((int)v121 + 1LL);
          v118 = (_DWORD *)((char *)v118 + v123);
          v117 = (_DWORD *)((char *)v117 + v123);
        }
        switch ( v115 % 8 )
        {
          case 1:
            goto LABEL_166;
          case 2:
            goto LABEL_165;
          case 3:
            goto LABEL_164;
          case 4:
            goto LABEL_163;
          case 5:
            goto LABEL_162;
          case 6:
            goto LABEL_161;
          case 7:
            v117[6] = v118[6];
LABEL_161:
            v117[5] = v118[5];
LABEL_162:
            v117[4] = v118[4];
LABEL_163:
            v117[3] = v118[3];
LABEL_164:
            v117[2] = v118[2];
LABEL_165:
            v117[1] = v118[1];
LABEL_166:
            *v117 = *v118;
            break;
          default:
            break;
        }
        v93 = *((_DWORD *)this + 9);
      }
      v124 = v114++;
    }
    while ( v124 < v93 );
  }
  v125 = *((_DWORD *)this + 8);
  if ( v125 )
  {
    v126 = *((__m128i **)this + 95);
    v127 = v125 + 1;
    v128 = *((_DWORD *)v2 + 192);
    v129 = *((const __m128i **)v2 + 95);
    if ( *((int *)this + 192) < -1 )
    {
      v126 = nullptr;
      if ( v128 < -1 )
        goto LABEL_189;
    }
    else if ( v128 <= -2 )
    {
      v129 = nullptr;
    }
    if ( v125 != -1 && v129 != v126 )
    {
      v130 = v127 >> 3;
      if ( v127 >> 3 > 0 )
      {
        if ( (v126 >= &v129[2] || v129 >= &v126[2]) && v130 > 1 )
        {
          v131 = v126;
          v132 = v129;
          v133 = v130 - 1;
          do
          {
            v134 = _mm_loadu_si128(v132);
            v131 += 2;
            v132 += 2;
            v135 = _mm_loadu_si128(v132 - 1);
            v131[-2] = v134;
            v131[-1] = v135;
          }
          while ( &v126[2 * v133 + 2] != v131 );
        }
        else
        {
          v365 = v126;
          v366 = v129;
          v133 = v130 - 1;
          do
          {
            v367 = v366->m128i_i32[0];
            v365 += 2;
            v366 += 2;
            v365[-2].m128i_i32[0] = v367;
            v365[-2].m128i_i32[1] = v366[-2].m128i_i32[1];
            v365[-2].m128i_i32[2] = v366[-2].m128i_i32[2];
            v365[-2].m128i_i32[3] = v366[-2].m128i_i32[3];
            v365[-1].m128i_i32[0] = v366[-1].m128i_i32[0];
            v365[-1].m128i_i32[1] = v366[-1].m128i_i32[1];
            v365[-1].m128i_i32[2] = v366[-1].m128i_i32[2];
            v365[-1].m128i_i32[3] = v366[-1].m128i_i32[3];
          }
          while ( v365 != &v126[2 * v133 + 2] );
        }
        v136 = 32 * ((int)v133 + 1LL);
        v129 = (const __m128i *)((char *)v129 + v136);
        v126 = (__m128i *)((char *)v126 + v136);
      }
      switch ( v127 % 8 )
      {
        case 1:
          goto LABEL_188;
        case 2:
          goto LABEL_187;
        case 3:
          goto LABEL_186;
        case 4:
          goto LABEL_185;
        case 5:
          goto LABEL_184;
        case 6:
          goto LABEL_183;
        case 7:
          v126[1].m128i_i32[2] = v129[1].m128i_i32[2];
LABEL_183:
          v126[1].m128i_i32[1] = v129[1].m128i_i32[1];
LABEL_184:
          v126[1].m128i_i32[0] = v129[1].m128i_i32[0];
LABEL_185:
          v126->m128i_i32[3] = v129->m128i_i32[3];
LABEL_186:
          v126->m128i_i32[2] = v129->m128i_i32[2];
LABEL_187:
          v126->m128i_i32[1] = v129->m128i_i32[1];
LABEL_188:
          v126->m128i_i32[0] = v129->m128i_i32[0];
          break;
        default:
          break;
      }
    }
  }
LABEL_189:
  v137 = *((_DWORD *)this + 176);
  v138 = *((__int64 **)this + 89);
  v139 = *((__int64 **)v2 + 89);
  v140 = *((_DWORD *)v2 + 180);
  if ( *((int *)this + 180) < -1 )
  {
    v138 = nullptr;
    if ( v140 < -1 )
      goto LABEL_206;
  }
  else if ( v140 <= -2 )
  {
    v139 = nullptr;
  }
  if ( v139 != v138 && v137 )
  {
    if ( v137 >> 3 > 0 )
    {
      v141 = v139;
      v142 = v138;
      do
      {
        v143 = *v141;
        v142 += 8;
        v141 += 8;
        *(v142 - 8) = v143;
        *(v142 - 7) = *(v141 - 7);
        *(v142 - 6) = *(v141 - 6);
        *(v142 - 5) = *(v141 - 5);
        *(v142 - 4) = *(v141 - 4);
        *(v142 - 3) = *(v141 - 3);
        *(v142 - 2) = *(v141 - 2);
        *(v142 - 1) = *(v141 - 1);
      }
      while ( v142 != &v138[8 * (unsigned int)((v137 >> 3) - 1) + 8] );
      v144 = ((v137 >> 3) - 1 + 1LL) << 6;
      v139 = (__int64 *)((char *)v139 + v144);
      v138 = (__int64 *)((char *)v138 + v144);
    }
    switch ( v137 % 8 )
    {
      case 1:
        goto LABEL_205;
      case 2:
        goto LABEL_204;
      case 3:
        goto LABEL_203;
      case 4:
        goto LABEL_202;
      case 5:
        goto LABEL_201;
      case 6:
        goto LABEL_200;
      case 7:
        v138[6] = v139[6];
LABEL_200:
        v138[5] = v139[5];
LABEL_201:
        v138[4] = v139[4];
LABEL_202:
        v138[3] = v139[3];
LABEL_203:
        v138[2] = v139[2];
LABEL_204:
        v138[1] = v139[1];
LABEL_205:
        *v138 = *v139;
        break;
      default:
        break;
    }
  }
LABEL_206:
  v145 = *((__m128i **)this + 92);
  v146 = *((const __m128i **)v2 + 92);
  v147 = *((_DWORD *)v2 + 186);
  if ( *((int *)this + 186) < -1 )
  {
    v145 = nullptr;
    if ( v147 < -1 )
      goto LABEL_225;
  }
  else if ( v147 <= -2 )
  {
    v146 = nullptr;
  }
  if ( v146 != v145 && v137 )
  {
    v148 = v137 >> 3;
    if ( v137 >> 3 > 0 )
    {
      if ( (v145 >= &v146[2] || v146 >= &v145[2]) && v148 > 1 )
      {
        v149 = v145;
        v150 = v146;
        v151 = v148 - 1;
        do
        {
          v152 = _mm_loadu_si128(v150);
          v149 += 2;
          v150 += 2;
          v153 = _mm_loadu_si128(v150 - 1);
          v149[-2] = v152;
          v149[-1] = v153;
        }
        while ( v149 != &v145[2 * v151 + 2] );
      }
      else
      {
        v331 = v145;
        v332 = v146;
        v151 = v148 - 1;
        do
        {
          v333 = v332->m128i_i32[0];
          v331 += 2;
          v332 += 2;
          v331[-2].m128i_i32[0] = v333;
          v331[-2].m128i_i32[1] = v332[-2].m128i_i32[1];
          v331[-2].m128i_i32[2] = v332[-2].m128i_i32[2];
          v331[-2].m128i_i32[3] = v332[-2].m128i_i32[3];
          v331[-1].m128i_i32[0] = v332[-1].m128i_i32[0];
          v331[-1].m128i_i32[1] = v332[-1].m128i_i32[1];
          v331[-1].m128i_i32[2] = v332[-1].m128i_i32[2];
          v331[-1].m128i_i32[3] = v332[-1].m128i_i32[3];
        }
        while ( &v145[2 * v151 + 2] != v331 );
      }
      v154 = 32 * ((int)v151 + 1LL);
      v146 = (const __m128i *)((char *)v146 + v154);
      v145 = (__m128i *)((char *)v145 + v154);
    }
    switch ( v137 % 8 )
    {
      case 1:
        goto LABEL_224;
      case 2:
        goto LABEL_223;
      case 3:
        goto LABEL_222;
      case 4:
        goto LABEL_221;
      case 5:
        goto LABEL_220;
      case 6:
        goto LABEL_219;
      case 7:
        v145[1].m128i_i32[2] = v146[1].m128i_i32[2];
LABEL_219:
        v145[1].m128i_i32[1] = v146[1].m128i_i32[1];
LABEL_220:
        v145[1].m128i_i32[0] = v146[1].m128i_i32[0];
LABEL_221:
        v145->m128i_i32[3] = v146->m128i_i32[3];
LABEL_222:
        v145->m128i_i32[2] = v146->m128i_i32[2];
LABEL_223:
        v145->m128i_i32[1] = v146->m128i_i32[1];
LABEL_224:
        v145->m128i_i32[0] = v146->m128i_i32[0];
        break;
      default:
        break;
    }
  }
LABEL_225:
  result = *((unsigned int *)v2 + 262);
  if ( (_DWORD)result )
    return CoinFactorization::goSparse(this);
  return result;
}

