/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467420
// Address: 0x0000000000467420

//----- (0000000000467420) ----------------------------------------------------
__int64 __fastcall sub_467420(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char v13; // al
  __int64 v15; // rdx
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  unsigned int v25; // r14d
  void *v27; // rax
  char *v28; // rdi
  __m128i v29; // xmm0
  void *v30; // r14
  __m128i v31; // xmm0
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 (*v40)(); // rax
  void *v41; // rdi
  int v42; // eax
  int v43; // r12d
  char *v44; // r12
  int v45; // eax
  unsigned __int64 v46; // rdx
  size_t v47; // r13
  unsigned __int64 v48; // rsi
  char *v49; // rdi
  void *v50; // rsi
  int v51; // eax
  unsigned __int64 v52; // rdx
  size_t v53; // r13
  void *v54; // rax
  unsigned __int64 v55; // rsi
  void *v56; // rdi
  unsigned __int64 v57; // r13
  unsigned __int64 v58; // rax
  int v59; // r8d
  __m128i *v60; // rsi
  unsigned __int64 v61; // rdx
  __int64 v62; // rdi
  size_t v63; // rdi
  unsigned __int64 v64; // rdx
  __int64 v65; // r14
  __int64 v66; // r13
  unsigned __int64 *v67; // rdi
  char *v68; // rsi
  unsigned int v69; // eax
  __int64 v70; // rdi
  unsigned int v71; // r14d
  const char *v72; // rsi
  char *v73; // rdi
  __int64 v74; // r13
  __int64 v75; // r12
  char *v76; // rax
  void *v77; // rdi
  char *v78; // r14
  void *v79; // rdi
  void *v80; // rdi
  void *v81; // rsi
  char *v82; // rax
  unsigned int v83; // eax
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r9
  __m128 v87; // xmm4
  __m128 v88; // xmm5
  const char *v89; // r13
  char *v90; // rax
  __m128 v91; // xmm0
  __int64 (*v92)(); // r14
  __int64 v93; // r12
  __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  __m128 v97; // xmm4
  __m128 v98; // xmm5
  __int64 v99; // rdi
  __int64 v100; // r14
  __int64 (*v101)(); // rax
  char *v102; // rdx
  __int64 v103; // r12
  __int64 v104; // r14
  char *v105; // rax
  void *v106; // rdi
  unsigned int v107; // eax
  unsigned int v108; // eax
  __int64 v109; // r12
  char **v110; // rdx
  __int64 *v111; // rdi
  __int64 v112; // rax
  char *v113; // rdx
  __int64 v114; // r12
  __int64 v115; // r14
  char *v116; // rax
  void *v117; // rdi
  char *v118; // rdx
  __int64 v119; // r12
  __int64 v120; // r14
  char *v121; // rax
  void *v122; // rdi
  unsigned int v123; // eax
  __int64 v124; // rdi
  __int64 (*v125)(); // rcx
  int v126; // eax
  char *v127; // rdi
  void *v128; // r14
  __m128i si128; // xmm0
  __int64 v130; // r9
  __m128 v131; // xmm4
  __m128 v132; // xmm5
  unsigned int v133; // r12d
  __int64 v134; // r12
  unsigned __int64 v135; // r13
  size_t v136; // rax
  __int64 v137; // rdi
  __m128 v138; // xmm0
  __int64 v139; // rax
  __int64 v140; // r8
  __int64 v141; // r9
  __m128 v142; // xmm4
  __m128 v143; // xmm5
  __int64 v144; // r14
  bool v145; // r12
  unsigned int v146; // r12d
  unsigned int v147; // eax
  __int64 v148; // rdi
  unsigned int v149; // r13d
  unsigned int v150; // eax
  __int64 v151; // r8
  __int64 v152; // r9
  __m128 v153; // xmm4
  __m128 v154; // xmm5
  unsigned int v155; // r14d
  __int64 v156; // rcx
  const char *v157; // rsi
  unsigned int v158; // r12d
  unsigned int v159; // eax
  char *v160; // rdx
  unsigned int v161; // r14d
  char *v162; // rax
  char v163; // dl
  __int64 v164; // rdi
  __int64 v165; // rdx
  unsigned int v166; // r8d
  unsigned int i; // edx
  __int64 v168; // rcx
  int v169; // eax
  char *v170; // rdx
  char *v171; // rax
  char v172; // dl
  __int64 v173; // rdi
  __int64 v174; // rdx
  unsigned int v175; // r8d
  unsigned int j; // edx
  __int64 v177; // rcx
  int v178; // eax
  void *v179; // rdx
  size_t v180; // r13
  char *v181; // rdi
  void *v182; // rsi
  __int64 v183; // rdi
  unsigned int v184; // eax
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __m128 v188; // xmm4
  __m128 v189; // xmm5
  signed int v190; // r14d
  unsigned int v191; // r12d
  unsigned int v192; // r13d
  int v193; // eax
  __int64 v194; // rdx
  int v195; // r14d
  size_t v196; // rdx
  int v197; // eax
  int v198; // eax
  char *v199; // r8
  void *v200; // rsi
  unsigned int v201; // eax
  __int64 v202; // r8
  __int64 v203; // r9
  __m128 v204; // xmm4
  __m128 v205; // xmm5
  unsigned int v206; // r14d
  const char *v207; // rsi
  void *v208; // rdi
  __int64 v209; // r12
  __int64 v210; // r14
  char *v211; // rdx
  char *v212; // rax
  void *v213; // rdi
  unsigned int v214; // r12d
  __int64 v215; // rax
  __int64 v216; // rdi
  __int64 v217; // r14
  unsigned int v218; // r13d
  __int64 v219; // r8
  __int64 v220; // r9
  __m128 v221; // xmm4
  __m128 v222; // xmm5
  const char *v223; // rsi
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __m128 v228; // xmm4
  __m128 v229; // xmm5
  __int64 v230; // r12
  unsigned __int64 v231; // r14
  unsigned __int8 *v232; // rax
  void *v233; // rsi
  unsigned __int8 *v234; // r13
  __int64 v235; // rdi
  __m128 v236; // xmm0
  __int64 v237; // rax
  __int64 v238; // r8
  __int64 v239; // r9
  __m128 v240; // xmm4
  __m128 v241; // xmm5
  __int64 v242; // r14
  unsigned int v243; // eax
  signed int v244; // r14d
  char *v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  __m128 v250; // xmm4
  __m128 v251; // xmm5
  unsigned int v252; // r14d
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  __m128 v257; // xmm4
  __m128 v258; // xmm5
  signed int v259; // eax
  double v260; // xmm4_8
  double v261; // xmm5_8
  __int64 v262; // rdi
  unsigned int v263; // eax
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __m128 v268; // xmm4
  __m128 v269; // xmm5
  signed int v270; // r14d
  void *v271; // rdi
  char *v272; // rax
  char *v273; // rax
  char *v274; // rax
  char *v275; // rax
  __m128 v276; // xmm0
  bool v277; // dl
  char *v278; // rax
  __m128 v279; // xmm4
  __m128 v280; // xmm5
  int v281; // r12d
  __int64 v282; // rdx
  void *v283; // rsi
  __int64 v284; // rdi
  _BYTE *v285; // r14
  unsigned __int64 v286; // rdx
  char *v287; // rcx
  __int64 v288; // rdi
  int v289; // eax
  bool v290; // zf
  char *v291; // r9
  char *v292; // r8
  char *v293; // rcx
  char *v294; // rdx
  __int64 v295; // r12
  __int64 v296; // r14
  char *v297; // rax
  void *v298; // rdi
  unsigned int v299; // eax
  __int64 v300; // rdx
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  __m128 v304; // xmm4
  __m128 v305; // xmm5
  __int64 v306; // r12
  int v307; // eax
  const char *v308; // r12
  size_t v309; // rsi
  char *v310; // rdx
  _QWORD *v311; // r14
  char *v312; // rax
  _QWORD *v313; // r14
  unsigned int v314; // r12d
  __int64 v315; // rdi
  __m128 v316; // xmm0
  unsigned int v317; // eax
  __int64 v318; // r8
  __int64 v319; // r9
  __m128 v320; // xmm4
  __m128 v321; // xmm5
  unsigned int v322; // r14d
  __int64 v323; // rdx
  __int64 v324; // rcx
  __int64 v325; // r8
  __int64 v326; // r9
  __m128 v327; // xmm4
  __m128 v328; // xmm5
  const char *v329; // rsi
  char *v330; // rdi
  __int64 v331; // rdi
  unsigned int v332; // r13d
  const char *v333; // rsi
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __m128 v338; // xmm4
  __m128 v339; // xmm5
  char *v340; // rdx
  __int64 v341; // r12
  __int64 v342; // r14
  char *v343; // rax
  void *v344; // rdi
  unsigned int v345; // r12d
  __int64 v346; // r14
  unsigned int v347; // eax
  __int64 v348; // r8
  __int64 v349; // r9
  __m128 v350; // xmm4
  __m128 v351; // xmm5
  unsigned int v352; // r13d
  __int64 v353; // r12
  unsigned int v354; // eax
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __m128 v358; // xmm4
  __m128 v359; // xmm5
  __int64 v360; // rdi
  unsigned int v361; // eax
  __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // r9
  __m128 v365; // xmm4
  __m128 v366; // xmm5
  signed int v367; // r12d
  unsigned int v368; // r14d
  const char *v369; // rsi
  char *v370; // rdi
  __int64 v371; // r13
  __int64 v372; // r12
  char *v373; // rax
  void *v374; // rdi
  char *v375; // r14
  void *v376; // rdi
  _BYTE *v377; // rax
  __int64 v378; // rdi
  char v379; // si
  _BOOL4 v380; // esi
  char v381; // dl
  __m128 v382; // xmm0
  char v383; // r13
  double (__fastcall *v384)(__int64, void **, _BOOL4, void **); // rax
  void **v385; // rcx
  double v386; // xmm4_8
  double v387; // xmm5_8
  __int64 v388; // rax
  __int64 v389; // rcx
  __int64 v390; // r8
  __int64 v391; // r9
  __m128 v392; // xmm4
  __m128 v393; // xmm5
  int v394; // eax
  _QWORD *v395; // rdi
  char **v396; // rdx
  __int64 *v397; // rsi
  char *v398; // rdx
  __int64 v399; // r12
  __int64 v400; // r14
  char *v401; // rax
  void *v402; // rdi
  __int64 v403; // r14
  __int64 v404; // r13
  __int64 v405; // r12
  size_t v406; // rax
  void *v407; // rdi
  void *v408; // rdi
  __int64 v409; // rdi
  unsigned int v410; // eax
  __int64 v411; // rdx
  __int64 v412; // rcx
  __int64 v413; // r8
  __int64 v414; // r9
  __m128 v415; // xmm4
  __m128 v416; // xmm5
  signed int v417; // r14d
  void *v418; // r12
  unsigned int v419; // r14d
  __int64 v420; // r9
  __m128 v421; // xmm4
  __m128 v422; // xmm5
  unsigned int v423; // r12d
  __int64 v424; // r13
  __int64 v425; // r14
  unsigned int v426; // eax
  __int64 v427; // r9
  __m128 v428; // xmm4
  __m128 v429; // xmm5
  const char *v430; // r13
  char *v431; // rax
  int v432; // r12d
  __int64 v433; // r9
  __m128 v434; // xmm4
  __m128 v435; // xmm5
  FILE *v436; // rdi
  __int64 v437; // r14
  unsigned int v438; // r12d
  _QWORD *v439; // r13
  __int64 v440; // rdx
  __int64 v441; // rcx
  __int64 v442; // r8
  __int64 v443; // r9
  __m128 v444; // xmm4
  __m128 v445; // xmm5
  __int64 v446; // rdx
  _QWORD *v447; // r14
  void *v448; // rdi
  _QWORD *v449; // rax
  void *v450; // rdi
  __int64 v451; // rsi
  signed int v452; // eax
  __int64 v453; // rdx
  __int64 v454; // rcx
  __int64 v455; // r8
  __int64 v456; // r9
  __m128 v457; // xmm4
  __m128 v458; // xmm5
  unsigned int v459; // r14d
  __int64 v460; // r13
  FILE *v461; // r12
  int v462; // eax
  __int64 v463; // r13
  size_t v464; // r8
  void *v465; // rsi
  unsigned __int64 v466; // rdx
  size_t v467; // rdx
  void *v468; // rax
  char *v469; // rdx
  char *v470; // rax
  char v471; // dl
  __int64 v472; // rdi
  __int64 v473; // rdx
  unsigned int v474; // r8d
  unsigned int k; // edx
  __int64 v476; // rcx
  unsigned int v477; // eax
  char *v478; // rdx
  unsigned int v479; // r13d
  char *v480; // rax
  char v481; // dl
  __int64 v482; // rdi
  __int64 v483; // rdx
  unsigned int v484; // r8d
  unsigned int m; // edx
  __int64 v486; // rcx
  char *v487; // rsi
  char *v488; // rsi
  unsigned __int64 v489; // rdx
  size_t v490; // rax
  size_t v491; // r13
  size_t v492; // rax
  size_t v493; // r13
  void *v494; // rdi
  size_t v495; // r12
  unsigned int v496; // r12d
  int *v497; // rax
  const char *v498; // rsi
  void *v499; // rax
  void *v500; // rsi
  void *v501; // r13
  int *v502; // rax
  __int64 v503; // rdx
  __int64 v504; // rdx
  char *v505; // rax
  char *v506; // rax
  int *v507; // rax
  const char *v508; // rsi
  const char *v509; // rsi
  const char *v510; // rsi
  const char *v511; // rsi
  __int64 v512; // rdx
  __int32 v513; // r13d
  unsigned __int8 v514; // r12
  unsigned int v515; // r13d
  int v516; // r12d
  __int64 v517; // rax
  __int64 v518; // r14
  const char *v519; // rsi
  __int32 v520; // r12d
  char *v521; // r14
  const char *v522; // rsi
  __int64 v523; // rdx
  __int64 v524; // rcx
  __int64 v525; // r8
  __int64 v526; // r9
  __m128 v527; // xmm4
  __m128 v528; // xmm5
  char v529; // al
  FILE *v530; // rax
  __int64 v531; // rsi
  __int64 v532; // rcx
  __int64 v533; // r8
  __int64 v534; // r9
  __m128 v535; // xmm4
  __m128 v536; // xmm5
  __int64 v537; // rdx
  unsigned int v538; // esi
  void *v539; // rdi
  unsigned int v540; // r13d
  unsigned __int8 v541; // al
  int v542; // eax
  __int64 v543; // rax
  __int64 v544; // r12
  __int64 v545; // r14
  char *v546; // rsi
  void *v547; // rax
  void *v548; // rax
  size_t v549; // rax
  __int64 v550; // r8
  __int64 v551; // r9
  __m128 v552; // xmm4
  __m128 v553; // xmm5
  void *v554; // rax
  _QWORD *v555; // rsi
  char *v556; // rax
  __int64 v557; // rax
  int *v558; // rax
  __int64 v559; // rdx
  char *v560; // rax
  char *v561; // rcx
  char v562; // [rsp+0h] [rbp-31D0h]
  char v563; // [rsp+0h] [rbp-31D0h]
  char v564; // [rsp+0h] [rbp-31D0h]
  unsigned int v565; // [rsp+4h] [rbp-31CCh]
  __int64 v566; // [rsp+8h] [rbp-31C8h]
  __int64 v567; // [rsp+10h] [rbp-31C0h]
  void *v568; // [rsp+18h] [rbp-31B8h]
  size_t v569; // [rsp+20h] [rbp-31B0h]
  unsigned __int64 v570; // [rsp+28h] [rbp-31A8h]
  int v571; // [rsp+30h] [rbp-31A0h]
  char *p_ptr; // [rsp+38h] [rbp-3198h] BYREF
  char *v573; // [rsp+40h] [rbp-3190h]
  size_t v574; // [rsp+48h] [rbp-3188h]
  char *s1; // [rsp+50h] [rbp-3180h]
  unsigned int v576; // [rsp+58h] [rbp-3178h]
  char v577; // [rsp+5Fh] [rbp-3171h]
  size_t n[2]; // [rsp+60h] [rbp-3170h] BYREF
  _BYTE *v579; // [rsp+70h] [rbp-3160h] BYREF
  unsigned __int8 *v580; // [rsp+78h] [rbp-3158h] BYREF
  void *src; // [rsp+80h] [rbp-3150h] BYREF
  char *v582; // [rsp+88h] [rbp-3148h]
  void *v583; // [rsp+90h] [rbp-3140h] BYREF
  __int128 v584; // [rsp+98h] [rbp-3138h]
  __m128i v585[2]; // [rsp+B0h] [rbp-3120h] BYREF
  void *v586; // [rsp+D0h] [rbp-3100h] BYREF
  __int128 v587; // [rsp+D8h] [rbp-30F8h]
  void *ptr; // [rsp+F0h] [rbp-30E0h] BYREF
  __m128i v589; // [rsp+F8h] [rbp-30D8h] BYREF
  void *v590; // [rsp+108h] [rbp-30C8h]
  void *v591[3]; // [rsp+110h] [rbp-30C0h] BYREF
  __int128 v592; // [rsp+128h] [rbp-30A8h]
  int v593; // [rsp+138h] [rbp-3098h]
  __int64 v594; // [rsp+140h] [rbp-3090h] BYREF
  void *dest[8]; // [rsp+148h] [rbp-3088h] BYREF
  _BYTE v596[5]; // [rsp+18Bh] [rbp-3045h] BYREF
  unsigned __int8 v597[4096]; // [rsp+190h] [rbp-3040h] BYREF
  unsigned __int8 v598[4096]; // [rsp+1190h] [rbp-2040h] BYREF
  char s[4104]; // [rsp+2190h] [rbp-1040h] BYREF
  unsigned __int64 v600; // [rsp+3198h] [rbp-38h]

  v13 = *(_BYTE *)(a2 + 289);
  v600 = __readfsqword(0x28u);
  *(_BYTE *)(a2 + 289) = 0;
  v15 = *a3;
  v577 = v13;
  src = (char *)a3 + 5;
  v582 = (char *)a3 + v15 + 5;
  sub_470050(a1, 0);
  switch ( *((_BYTE *)a3 + 4) )
  {
    case 5:
      v330 = *(char **)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        j__free(v330);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
      goto LABEL_5;
    case 0xA:
      v306 = *(_QWORD *)(a2 + 440);
      n[0] = (size_t)&src;
      *(_QWORD *)(v306 + 800) = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582);
      v307 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      LOBYTE(s1) = v307 != 0;
      if ( v307 )
        *(_BYTE *)(a2 + 184) = 1;
      v308 = (const char *)src;
      v309 = (size_t)v582;
      v310 = (char *)src;
      do
      {
        if ( v310 >= v582 )
        {
          v311 = *(_QWORD **)(a2 + 440);
LABEL_314:
          v311[102] = 0;
          goto LABEL_315;
        }
        ++v310;
      }
      while ( *(v310 - 1) );
      v311 = *(_QWORD **)(a2 + 440);
      src = v310;
      if ( !v308 )
      {
        v308 = v310;
        goto LABEL_314;
      }
      v573 = v582;
      v574 = (size_t)v310;
      v490 = strlen(v308);
      v491 = v490;
      if ( !v490 )
      {
        v308 = (const char *)v574;
        v309 = (size_t)v573;
        goto LABEL_314;
      }
      v539 = (void *)v311[101];
      v574 = v490 + 1;
      if ( v311[103] < v490 + 1 )
      {
        v547 = sub_481540((__int64)(v311 + 101), v539, v574, 1u);
        v311[101] = v547;
        v539 = v547;
      }
      v311[102] = v574;
      memmove(v539, v308, v491);
      *(_BYTE *)(v311[101] + v491) = 0;
      v309 = (size_t)v582;
      v308 = (const char *)src;
LABEL_315:
      v312 = (char *)v308;
      do
      {
        if ( (unsigned __int64)v312 >= v309 )
        {
          v313 = *(_QWORD **)(a2 + 440);
LABEL_319:
          v313[105] = 0;
          goto LABEL_320;
        }
        ++v312;
      }
      while ( *(v312 - 1) );
      v313 = *(_QWORD **)(a2 + 440);
      src = v312;
      if ( !v308 )
        goto LABEL_319;
      v574 = v309;
      v492 = strlen(v308);
      v493 = v492;
      if ( !v492 )
        goto LABEL_319;
      v494 = (void *)v313[104];
      v574 = v492 + 1;
      if ( v313[106] < v492 + 1 )
      {
        v548 = sub_481540((__int64)(v313 + 104), v494, v574, 1u);
        v313[104] = v548;
        v494 = v548;
      }
      v313[105] = v574;
      memmove(v494, v308, v493);
      *(_BYTE *)(v313[104] + v493) = 0;
      v309 = (size_t)v582;
LABEL_320:
      v314 = (unsigned __int8)s1;
      *(_DWORD *)(*(_QWORD *)(a2 + 440) + 856LL) = sub_47FD50((unsigned __int64 *)n[0], v309);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 440) + 96LL))(*(_QWORD *)(a2 + 440), v314);
      v315 = *(_QWORD *)(a2 + 440);
      v316 = 0;
      ptr = nullptr;
      v589 = 0;
      v586 = nullptr;
      v317 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v315 + 104LL))(v315, &v586, &ptr);
      v322 = v317;
      if ( *(_BYTE *)(a2 + 184) )
        *(double *)v316.m128_u64 = sub_410EA0(
                                     (int)"init(debug_debugger=%d) => %d (add_debugger_flags=0x%llX)\n",
                                     v314,
                                     v317,
                                     (__int64)v586,
                                     v318,
                                     v319,
                                     (__m128)0LL,
                                     a5,
                                     a6,
                                     a7,
                                     v320,
                                     v321,
                                     a10,
                                     a11,
                                     v562);
      sub_45BD90((char **)a1, v322);
      sub_45BEA0((char **)a1, (unsigned __int64)v586);
      if ( v322 == 1 )
      {
        if ( *(_BYTE *)(a2 + 184) )
          sub_410EA0(
            (int)"init() => idaregs.nregs %zu\n",
            *(_QWORD *)(*(_QWORD *)(a2 + 440) + 680LL),
            v323,
            v324,
            v325,
            v326,
            v316,
            a5,
            a6,
            a7,
            v327,
            v328,
            a10,
            a11,
            v562);
        sub_46D000(a1, *(_QWORD *)(a2 + 440) + 672LL);
      }
      else
      {
        v329 = ::s1;
        if ( v589.m128i_i64[0] )
          v329 = (const char *)ptr;
        sub_45BFB0((char **)a1, v329);
      }
      v41 = ptr;
      if ( ptr )
      {
LABEL_327:
        v589.m128i_i64[0] = 0;
        j__free(v41);
      }
LABEL_5:
      if ( v577 )
LABEL_9:
        *(_BYTE *)(a2 + 289) = 1;
      return a1;
    case 0xB:
      goto LABEL_5;
    case 0xC:
      v331 = *(_QWORD *)(a2 + 440);
      v586 = nullptr;
      ptr = nullptr;
      v587 = 0;
      v589 = 0;
      v332 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v331 + 72LL))(v331, &v586, &ptr);
      sub_45BD90((char **)a1, v332);
      if ( v332 == 1 )
      {
        sub_46B9C0(a1, &v586);
      }
      else
      {
        v333 = ::s1;
        if ( v589.m128i_i64[0] )
          v333 = (const char *)ptr;
        sub_45BFB0((char **)a1, v333);
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"get_processes() => %d\n",
          v332,
          v334,
          v335,
          v336,
          v337,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v338,
          v339,
          a10,
          a11,
          v562);
      if ( ptr )
      {
        v589.m128i_i64[0] = 0;
        j__free(ptr);
      }
      v340 = (char *)v586;
      if ( v586 )
      {
        v341 = v587;
        if ( (_QWORD)v587 )
        {
          v342 = 0;
          do
          {
            v343 = &v340[32 * v342];
            v344 = *((void **)v343 + 1);
            if ( v344 )
            {
              *((_QWORD *)v343 + 2) = 0;
              j__free(v344);
              v340 = (char *)v586;
            }
            ++v342;
          }
          while ( v341 != v342 );
        }
        *(_QWORD *)&v587 = 0;
        j__free(v340);
      }
      goto LABEL_5;
    case 0xD:
      v272 = (char *)src;
      v573 = (char *)src;
      while ( v272 < v582 )
      {
        if ( !*v272++ )
        {
          v504 = (__int64)v573;
          src = v272;
          v573 = v272;
          v567 = v504;
          goto LABEL_265;
        }
      }
      v567 = 0;
LABEL_265:
      v273 = v573;
      while ( v273 < v582 )
      {
        if ( !*v273++ )
        {
          v503 = (__int64)v573;
          src = v273;
          v573 = v273;
          v566 = v503;
          goto LABEL_269;
        }
      }
      v566 = 0;
LABEL_269:
      v274 = v573;
      while ( v274 < v582 )
      {
        if ( !*v274++ )
        {
          src = v274;
          goto LABEL_273;
        }
      }
      v573 = nullptr;
LABEL_273:
      v576 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v275 = (char *)src;
      v568 = src;
      do
      {
        if ( v275 >= v582 )
        {
          n[0] = (size_t)&src;
          v568 = nullptr;
          goto LABEL_277;
        }
        ++v275;
      }
      while ( *(v275 - 1) );
      n[0] = (size_t)&src;
      src = v275;
LABEL_277:
      v565 = sub_47FD50((unsigned __int64 *)n[0], (unsigned __int64)v582);
      v276 = 0;
      v277 = 0;
      v278 = (char *)src;
      LOBYTE(v590) = 1;
      v586 = nullptr;
      ptr = nullptr;
      v587 = 0;
      v589 = 0;
      if ( src < v582 )
      {
        v277 = *(_BYTE *)src != 0;
        v278 = (char *)src + 1;
      }
      src = v278;
      LOBYTE(v590) = v277;
      s1 = (char *)&ptr;
      LODWORD(v574) = sub_47FD50((unsigned __int64 *)n[0], (unsigned __int64)v582);
      v281 = 0;
      p_ptr = (char *)&ptr;
      if ( (int)v574 > 0 )
      {
        do
        {
          if ( src >= v582 )
            break;
          v282 = v589.m128i_i64[0];
          v283 = ptr;
          if ( v589.m128i_i64[1] < (unsigned __int64)(v589.m128i_i64[0] + 1) )
          {
            s1 = p_ptr;
            ptr = sub_481540((__int64)p_ptr, ptr, v589.m128i_i64[0] + 1, 0x18u);
            v282 = v589.m128i_i64[0];
            v283 = ptr;
          }
          v276 = 0;
          v284 = (__int64)v283 + 24 * v282;
          *(_QWORD *)v284 = 0;
          v285 = src;
          *(_OWORD *)(v284 + 8) = 0;
          ++v589.m128i_i64[0];
          v286 = (unsigned __int64)v285;
          do
          {
            if ( v286 >= (unsigned __int64)v582 )
              goto LABEL_286;
            v287 = (char *)(v286 + 1);
            v286 = (unsigned __int64)v287;
          }
          while ( *(v287 - 1) );
          src = v287;
          if ( v285 )
          {
            v463 = *(_QWORD *)(v284 + 8);
            n[0] = v287 - v285 - 1;
            v464 = n[0];
            if ( v463 )
            {
              --v463;
              v464 = v287 - v285 - 1 + v463;
            }
            v465 = *(void **)v284;
            v466 = v464 + 1;
            if ( v464 != -1 )
            {
              v569 = v464;
              v570 = v464 + 1;
              s1 = p_ptr;
              v468 = sub_481540(v284, v465, v466, 1u);
              v464 = v569;
              v465 = v468;
              v466 = v570;
              *(_QWORD *)v284 = v468;
            }
            *(_QWORD *)(v284 + 8) = v466;
            v467 = n[0];
            *((_BYTE *)v465 + v464) = 0;
            memmove((void *)(*(_QWORD *)v284 + v463), v285, v467);
          }
LABEL_286:
          ++v281;
        }
        while ( (_DWORD)v574 != v281 );
      }
      if ( v573 != nullptr && v567 != 0 && v568 )
      {
        v288 = *(_QWORD *)(a2 + 440);
        s1 = (char *)&ptr;
        v289 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, void **, char *, _QWORD, void *, _QWORD, void **))(*(_QWORD *)v288 + 128LL))(
                 v288,
                 v567,
                 v566,
                 &ptr,
                 v573,
                 v576,
                 v568,
                 v565,
                 &v586);
        v290 = *(_BYTE *)(a2 + 184) == 0;
        LODWORD(n[0]) = v289;
        if ( !v290 )
        {
          v291 = " hide_window";
          v292 = " under_gui";
          v293 = " is_dll";
          if ( (v576 & 0x20) == 0 )
            v291 = "";
          if ( (v576 & 2) == 0 )
            v292 = "";
          if ( (v576 & 1) == 0 )
            v293 = "";
          *(double *)v276.m128_u64 = sub_410EA0(
                                       (int)"start_process(path=%s args=%s flags=%s%s%s\n"
                                            "              sdir=%s\n"
                                            "              input=%s crc32=%x) => %d\n",
                                       v567,
                                       v566,
                                       (__int64)v293,
                                       (__int64)v292,
                                       (__int64)v291,
                                       v276,
                                       a5,
                                       a6,
                                       a7,
                                       v279,
                                       v280,
                                       a10,
                                       a11,
                                       (char)v573);
        }
      }
      else
      {
        LODWORD(n[0]) = -3;
      }
      s1 = (char *)&ptr;
      sub_4604C0(
        a2,
        (char **)a1,
        n[0],
        (__int64)&v586,
        *(double *)v276.m128_u64,
        a5,
        a6,
        a7,
        *(double *)v279.m128_u64,
        *(double *)v280.m128_u64,
        a10,
        a11);
      v294 = (char *)ptr;
      if ( ptr )
      {
        v295 = v589.m128i_i64[0];
        if ( v589.m128i_i64[0] )
        {
          v296 = 0;
          do
          {
            v297 = &v294[24 * v296];
            v298 = *(void **)v297;
            if ( *(_QWORD *)v297 )
            {
              *((_QWORD *)v297 + 1) = 0;
              j__free(v298);
              v294 = (char *)ptr;
            }
            ++v296;
          }
          while ( v295 != v296 );
        }
        v589.m128i_i64[0] = 0;
        j__free(v294);
      }
      v73 = (char *)v586;
      if ( !v586 )
        goto LABEL_5;
      goto LABEL_305;
    case 0xE:
      v262 = *(_QWORD *)(a2 + 440);
      ptr = nullptr;
      v589 = 0;
      v263 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v262 + 160LL))(v262, &ptr);
      v270 = v263;
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"exit_process() => %d\n",
          v263,
          v264,
          v265,
          v266,
          v267,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v268,
          v269,
          a10,
          a11,
          v562);
      sub_45BD90((char **)a1, v270);
      if ( v270 < 0 )
      {
        v510 = ::s1;
        if ( v589.m128i_i64[0] )
          v510 = (const char *)ptr;
        sub_45BFB0((char **)a1, v510);
      }
      v271 = ptr;
      if ( ptr )
        goto LABEL_260;
      goto LABEL_5;
    case 0xF:
      v589 = 0;
      ptr = nullptr;
      v259 = sub_460410(a2, (__int64)&ptr, (unsigned __int64 *)&src, (__m128)0LL, a5, a6, a7, v16, v17, a10, a11);
      sub_4604C0(a2, (char **)a1, v259, (__int64)&ptr, 0.0, a5, a6, a7, v260, v261, a10, a11);
      v41 = ptr;
      if ( ptr )
        goto LABEL_327;
      goto LABEL_5;
    case 0x10:
      v252 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 440) + 120LL))(*(_QWORD *)(a2 + 440));
      sub_45BD90((char **)a1, v252);
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"detach_process() => %d\n",
          v252,
          v253,
          v254,
          v255,
          v256,
          a4,
          a5,
          a6,
          a7,
          v257,
          v258,
          a10,
          a11,
          v562);
      goto LABEL_5;
    case 0x11:
      v243 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      if ( *(_BYTE *)(a2 + 288) )
      {
        sub_45BD90((char **)a1, 0);
      }
      else
      {
        v244 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a2 + 440) + 136LL))(
                 *(_QWORD *)(a2 + 440),
                 a2 + 296,
                 v243);
        sub_45BD90((char **)a1, v244);
        if ( v244 > 0 )
        {
          sub_46C160((char **)a1, (unsigned int *)(a2 + 296));
          if ( *(_BYTE *)(a2 + 184) )
          {
            v245 = sub_456D20(a2 + 296, s, 1024, *(double *)a4.m128_u64, *(double *)a5.m128_u64, *(double *)a6.m128_u64);
            sub_410EA0(
              (int)"got event: %s\n",
              (__int64)v245,
              v246,
              v247,
              v248,
              v249,
              a4,
              a5,
              a6,
              a7,
              v250,
              v251,
              a10,
              a11,
              v562);
          }
          goto LABEL_5;
        }
      }
      if ( *(_BYTE *)(a2 + 288) )
        goto LABEL_5;
      goto LABEL_9;
    case 0x12:
      v409 = *(_QWORD *)(a2 + 440);
      ptr = nullptr;
      v589 = 0;
      v410 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v409 + 152LL))(v409, &ptr);
      v417 = v410;
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"prepare_to_pause_process() => %d\n",
          v410,
          v411,
          v412,
          v413,
          v414,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v415,
          v416,
          a10,
          a11,
          v562);
      sub_45BD90((char **)a1, v417);
      if ( v417 < 0 )
      {
        v508 = ::s1;
        if ( v589.m128i_i64[0] )
          v508 = (const char *)ptr;
        sub_45BFB0((char **)a1, v508);
      }
      v271 = ptr;
      if ( ptr )
      {
LABEL_260:
        v589.m128i_i64[0] = 0;
        j__free(v271);
      }
      goto LABEL_5;
    case 0x13:
      v377 = src;
      v378 = *(_QWORD *)(a2 + 440);
      if ( src >= v582 )
      {
        v380 = 0;
      }
      else
      {
        v379 = *(_BYTE *)src;
        src = (char *)src + 1;
        v380 = v379 != 0;
        if ( v377 + 1 < v582 )
        {
          v381 = v377[1];
          v382 = 0;
          v586 = nullptr;
          ptr = nullptr;
          v587 = 0;
          v383 = v381;
          v589 = 0;
          src = v377 + 2;
          v384 = *(double (__fastcall **)(__int64, void **, _BOOL4, void **))(*(_QWORD *)v378 + 192LL);
          if ( v381 )
            v385 = &ptr;
          else
            v385 = nullptr;
LABEL_371:
          *(double *)v382.m128_u64 = v384(v378, &v586, v380, v385);
          sub_460FD0(a2, (__int64 **)&v586, v382, a5, a6, a7, v386, v387, a10, a11);
          v388 = sub_4570D0(*(_QWORD *)(a2 + 440));
          if ( v388 )
          {
            v394 = sub_460720(
                     a2,
                     *(size_t **)v388,
                     *(char ***)(v388 + 24),
                     *(_DWORD *)(v388 + 8),
                     v382,
                     a5,
                     a6,
                     a7,
                     *(double *)v392.m128_u64,
                     *(double *)v393.m128_u64,
                     a10,
                     a11);
            v395 = *(_QWORD **)(a2 + 440);
            LODWORD(s1) = v394;
            sub_4570E0(v395);
          }
          else
          {
            LODWORD(s1) = 0;
          }
          if ( v383 )
          {
            v520 = v589.m128i_i32[0];
            sub_45BD90((char **)a1, v589.m128i_u32[0]);
            if ( v520 )
            {
              LODWORD(n[0]) = 0;
              do
              {
                v521 = (char *)ptr + 32 * SLODWORD(n[0]);
                sub_45BD90((char **)a1, *(_DWORD *)v521);
                v522 = ::s1;
                if ( *((_QWORD *)v521 + 2) )
                  v522 = *((const char **)v521 + 1);
                sub_45BFB0((char **)a1, v522);
                ++LODWORD(n[0]);
              }
              while ( LODWORD(n[0]) != v520 );
            }
          }
          if ( *(_BYTE *)(a2 + 184) )
          {
            v396 = off_4C3560;
            v397 = (__int64 *)off_4C3560[(int)s1];
            if ( !v397 )
            {
              sub_485490((char *)qword_4C8310, 16, "RPC_%d", (_DWORD)s1);
              v397 = qword_4C8310;
            }
            sub_410EA0(
              (int)"stopped_at_debug_event => %s\n",
              (__int64)v397,
              (__int64)v396,
              v389,
              v390,
              v391,
              v382,
              a5,
              a6,
              a7,
              v392,
              v393,
              a10,
              a11,
              v562);
          }
          v398 = (char *)ptr;
          if ( ptr )
          {
            v399 = v589.m128i_i64[0];
            if ( v589.m128i_i64[0] )
            {
              v400 = 0;
              do
              {
                v401 = &v398[32 * v400];
                v402 = *((void **)v401 + 1);
                if ( v402 )
                {
                  *((_QWORD *)v401 + 2) = 0;
                  j__free(v402);
                  v398 = (char *)ptr;
                }
                ++v400;
              }
              while ( v399 != v400 );
            }
            v589.m128i_i64[0] = 0;
            j__free(v398);
          }
          v370 = (char *)v586;
          if ( v586 )
          {
            v403 = v587;
            if ( (_QWORD)v587 )
            {
              v404 = 0;
              v405 = 0;
              do
              {
                v406 = (size_t)&v370[v404];
                v407 = *(void **)&v370[v404 + 32];
                n[0] = v406;
                if ( v407 )
                {
                  *(_QWORD *)(v406 + 40) = 0;
                  j__free(v407);
                }
                v408 = *(void **)(n[0] + 8);
                if ( v408 )
                {
                  *(_QWORD *)(n[0] + 16) = 0;
                  j__free(v408);
                }
                ++v405;
                v370 = (char *)v586;
                v404 += 56;
              }
              while ( v403 != v405 );
            }
LABEL_366:
            *(_QWORD *)&v587 = 0;
            j__free(v370);
          }
          goto LABEL_5;
        }
        ++v377;
      }
      v382 = 0;
      src = v377;
      v383 = 0;
      v385 = nullptr;
      v586 = nullptr;
      ptr = nullptr;
      v587 = 0;
      v589 = 0;
      v384 = *(double (__fastcall **)(__int64, void **, _BOOL4, void **))(*(_QWORD *)v378 + 192LL);
      goto LABEL_371;
    case 0x14:
      sub_46BF40(a2 + 296, (unsigned __int64 *)&src);
      v299 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 168LL))(
               *(_QWORD *)(a2 + 440),
               a2 + 296);
      v25 = v299;
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"continue_after_event(...) => %d\n",
          v299,
          v300,
          v301,
          v302,
          v303,
          a4,
          a5,
          a6,
          a7,
          v304,
          v305,
          a10,
          a11,
          v562);
      goto LABEL_4;
    case 0x15:
      v18 = (unsigned int)sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 200LL))(*(_QWORD *)(a2 + 440), v18);
      v25 = v19;
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"thread_suspend(tid=%d) => %d\n",
          (unsigned int)v18,
          v19,
          v20,
          v21,
          v22,
          a4,
          a5,
          a6,
          a7,
          v23,
          v24,
          a10,
          a11,
          v562);
      goto LABEL_4;
    case 0x16:
      v353 = (unsigned int)sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v354 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 208LL))(*(_QWORD *)(a2 + 440), v353);
      v25 = v354;
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"thread_continue(tid=%d) => %d\n",
          (unsigned int)v353,
          v354,
          v355,
          v356,
          v357,
          a4,
          a5,
          a6,
          a7,
          v358,
          v359,
          a10,
          a11,
          v562);
LABEL_4:
      sub_45BD90((char **)a1, v25);
      goto LABEL_5;
    case 0x17:
      v345 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v346 = (unsigned int)sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v347 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a2 + 440) + 216LL))(
               *(_QWORD *)(a2 + 440),
               v345,
               v346);
      v352 = v347;
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"set_resume_mode(tid=%d, resmod=%d) => %d\n",
          v345,
          (unsigned int)v346,
          v347,
          v348,
          v349,
          a4,
          a5,
          a6,
          a7,
          v350,
          v351,
          a10,
          a11,
          v562);
      sub_45BD90((char **)a1, v352);
      goto LABEL_5;
    case 0x18:
      v360 = *(_QWORD *)(a2 + 440);
      v586 = nullptr;
      v587 = 0;
      ptr = nullptr;
      v589 = 0;
      v361 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v360 + 256LL))(v360, &v586, &ptr);
      v367 = v587;
      v368 = v361;
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"get_memory_info() => %d (qty=%d)\n",
          v361,
          (unsigned int)v587,
          v362,
          v363,
          v364,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v365,
          v366,
          a10,
          a11,
          v562);
      sub_45BD90((char **)a1, v368 + 4);
      if ( v368 == 1 )
      {
        sub_45BD90((char **)a1, v367);
        if ( v367 > 0 )
        {
          v543 = 0;
          v544 = 80LL * (unsigned int)v367;
          do
          {
            v545 = v543;
            sub_46B7E0((char **)a1, (__int64)v586 + v543);
            v543 = v545 + 80;
          }
          while ( v545 + 80 != v544 );
        }
      }
      else
      {
        v369 = ::s1;
        if ( v589.m128i_i64[0] )
          v369 = (const char *)ptr;
        sub_45BFB0((char **)a1, v369);
      }
      if ( ptr )
      {
        v589.m128i_i64[0] = 0;
        j__free(ptr);
      }
      v370 = (char *)v586;
      if ( !v586 )
        goto LABEL_5;
      v371 = v587;
      if ( (_QWORD)v587 )
      {
        v372 = 0;
        do
        {
          v373 = &v370[80 * v372];
          v374 = *((void **)v373 + 5);
          v375 = v373;
          if ( v374 )
          {
            *((_QWORD *)v373 + 6) = 0;
            j__free(v374);
          }
          v376 = *((void **)v375 + 2);
          if ( v376 )
          {
            *((_QWORD *)v375 + 3) = 0;
            j__free(v376);
          }
          ++v372;
          v370 = (char *)v586;
        }
        while ( v371 != v372 );
      }
      goto LABEL_366;
    case 0x19:
      v134 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582) - 1;
      v135 = (unsigned int)sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v136 = operator new[](v135);
      v137 = *(_QWORD *)(a2 + 440);
      v138 = 0;
      n[0] = v136;
      ptr = nullptr;
      v589 = 0;
      v139 = (*(__int64 (__fastcall **)(__int64, __int64, size_t, unsigned __int64, void **))(*(_QWORD *)v137 + 288LL))(
               v137,
               v134,
               v136,
               v135,
               &ptr);
      v144 = v139;
      if ( *(_BYTE *)(a2 + 184) )
      {
        v531 = v134;
        *(double *)v138.m128_u64 = sub_410EA0(
                                     (int)"read_memory(ea=%a size=%zu) => %zd",
                                     v134,
                                     v135,
                                     v139,
                                     v140,
                                     v141,
                                     (__m128)0LL,
                                     a5,
                                     a6,
                                     a7,
                                     v142,
                                     v143,
                                     a10,
                                     a11,
                                     v562);
        v537 = *(unsigned __int8 *)(a2 + 184);
        v145 = v144 > 0;
        if ( v135 == 1 && v144 > 0 )
        {
          if ( (_BYTE)v537 )
            sub_410EA0(
              (int)" (0x%02X)\n",
              *(unsigned __int8 *)n[0],
              v537,
              v532,
              v533,
              v534,
              v138,
              a5,
              a6,
              a7,
              v535,
              v536,
              a10,
              a11,
              v564);
          goto LABEL_143;
        }
        if ( (_BYTE)v537 )
          sub_410EA0((int)"\n", v531, v537, v532, v533, v534, v138, a5, a6, a7, v535, v536, a10, a11, v564);
      }
      else
      {
        v145 = v139 > 0;
        if ( v135 == 1 && v139 > 0 )
        {
LABEL_143:
          sub_45BD90((char **)a1, v144);
          goto LABEL_144;
        }
      }
      sub_45BD90((char **)a1, v144);
      if ( !v145 )
      {
        v498 = ::s1;
        if ( v589.m128i_i64[0] )
          v498 = (const char *)ptr;
        sub_45BFB0((char **)a1, v498);
LABEL_145:
        if ( n[0] )
          operator delete[]((void *)n[0]);
        v41 = ptr;
        if ( ptr )
          goto LABEL_327;
        goto LABEL_5;
      }
LABEL_144:
      sub_45BB20((char **)a1, (const void *)n[0], v144);
      goto LABEL_145;
    case 0x1A:
      v230 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582) - 1;
      v231 = (unsigned int)sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      n[0] = v231;
      v232 = (unsigned __int8 *)operator new[](v231);
      v233 = src;
      v234 = v232;
      if ( v582 >= (char *)src + v231 && (char *)src + v231 >= src )
      {
        src = (char *)src + v231;
        memcpy(v232, v233, v231);
      }
      v235 = *(_QWORD *)(a2 + 440);
      v236 = 0;
      v589 = 0;
      ptr = nullptr;
      v237 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, size_t, void **))(*(_QWORD *)v235 + 296LL))(
               v235,
               v230,
               v234,
               n[0],
               &ptr);
      v242 = v237;
      if ( *(_BYTE *)(a2 + 184) )
      {
        *(double *)v236.m128_u64 = sub_410EA0(
                                     (int)"write_memory(ea=%a size=%zu) => %zd",
                                     v230,
                                     n[0],
                                     v237,
                                     v238,
                                     v239,
                                     (__m128)0LL,
                                     a5,
                                     a6,
                                     a7,
                                     v240,
                                     v241,
                                     a10,
                                     a11,
                                     v562);
        v529 = *(_BYTE *)(a2 + 184);
        if ( v242 && n[0] == 1 )
        {
          if ( v529 )
            sub_410EA0((int)" (0x%02X)\n", *v234, v523, v524, v525, v526, v236, a5, a6, a7, v527, v528, a10, a11, v563);
        }
        else if ( v529 )
        {
          sub_410EA0((int)"\n", v230, v523, v524, v525, v526, v236, a5, a6, a7, v527, v528, a10, a11, v563);
        }
      }
      sub_45BD90((char **)a1, v242);
      if ( v242 <= 0 )
      {
        v509 = ::s1;
        if ( v589.m128i_i64[0] )
          v509 = (const char *)ptr;
        sub_45BFB0((char **)a1, v509);
      }
      if ( v234 )
        operator delete[](v234);
      v41 = ptr;
      if ( ptr )
        goto LABEL_327;
      goto LABEL_5;
    case 0x1B:
      if ( !(unsigned int)sub_45F780(
                            a2,
                            a1,
                            (unsigned __int64 *)&src,
                            *(double *)a4.m128_u64,
                            a5,
                            a6,
                            a7,
                            v16,
                            v17,
                            a10,
                            a11)
        && *(_BYTE *)(a2 + 184) )
      {
        sub_410EA0(
          (int)"rpc_update_bpts failed!\n",
          a1,
          v224,
          v225,
          v226,
          v227,
          a4,
          a5,
          a6,
          a7,
          v228,
          v229,
          a10,
          a11,
          v562);
      }
      goto LABEL_5;
    case 0x1C:
      sub_466DD0(a2, (char **)a1, (unsigned __int64 *)&src, *(double *)a4.m128_u64, a5, a6, a7, v16, v17, a10, a11);
      goto LABEL_5;
    case 0x1D:
      v214 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v215 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582);
      v216 = *(_QWORD *)(a2 + 440);
      ptr = nullptr;
      v589 = 0;
      v217 = v215 - 1;
      v218 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, void **))(*(_QWORD *)v216 + 360LL))(
               v216,
               v214,
               v215 - 1,
               &ptr);
      sub_45BD90((char **)a1, v218);
      if ( v218 != 1 )
      {
        v223 = ::s1;
        if ( v589.m128i_i64[0] )
          v223 = (const char *)ptr;
        sub_45BFB0((char **)a1, v223);
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"eval_lowcnd(tid=%d, ea=%a) => %d\n",
          v214,
          v217,
          v218,
          v219,
          v220,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v221,
          v222,
          a10,
          a11,
          v562);
      v41 = ptr;
      if ( ptr )
        goto LABEL_327;
      goto LABEL_5;
    case 0x1E:
      v423 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v424 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582) - 1;
      v425 = (unsigned int)sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582) - 1;
      v426 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a2 + 440) + 304LL))(
               *(_QWORD *)(a2 + 440),
               v423,
               v424,
               v425);
      v290 = *(_BYTE *)(a2 + 184) == 0;
      LODWORD(n[0]) = v426;
      if ( !v290 )
        sub_410EA0(
          (int)"isok_bpt(type=%d ea=%a len=%d) => %d\n",
          v423,
          v424,
          (unsigned int)v425,
          v426,
          v427,
          a4,
          a5,
          a6,
          a7,
          v428,
          v429,
          a10,
          a11,
          v562);
      sub_45BD90((char **)a1, n[0]);
      goto LABEL_5;
    case 0x1F:
      memset(v585, 0, 24);
      v586 = nullptr;
      ptr = nullptr;
      v587 = 0;
      v589 = 0;
      v191 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v192 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v193 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v194 = *(_QWORD *)(a2 + 440);
      LODWORD(n[0]) = v193;
      v195 = *(_QWORD *)(v194 + 680);
      if ( !*(_QWORD *)(v194 + 680) )
        v195 = *(_DWORD *)(v194 + 776);
      if ( SLODWORD(n[0]) <= 0 || SLODWORD(n[0]) > v195 )
      {
        sub_4172B0(
          (__int64)v585,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v191,
          v192,
          LODWORD(n[0]),
          v195);
        sub_45BD90((char **)a1, 0);
        goto LABEL_211;
      }
      v196 = v587;
      v197 = LODWORD(n[0]) + 14;
      if ( LODWORD(n[0]) + 7 >= 0 )
        v197 = LODWORD(n[0]) + 7;
      v198 = v197 >> 3;
      v199 = (char *)v198;
      if ( (unsigned __int64)v587 < v198 )
      {
        v546 = (char *)v586;
        if ( *((_QWORD *)&v587 + 1) < (unsigned __int64)v198 )
        {
          s1 = (char *)v198;
          v586 = sub_481540((__int64)&v586, v586, v198, 1u);
          v196 = v587;
          v546 = (char *)v586;
          v199 = s1;
        }
        s1 = v199;
        memset(&v546[v196], 0, (size_t)&v199[-v196]);
        v199 = s1;
      }
      else if ( v198 == (_QWORD)v587 )
      {
        goto LABEL_205;
      }
      *(_QWORD *)&v587 = v199;
      v196 = (size_t)v199;
LABEL_205:
      v200 = src;
      if ( v582 >= (char *)src + v196 && (char *)src + v196 >= src )
      {
        src = (char *)src + v196;
        memcpy(v586, v200, v196);
      }
      sub_4587A0(&ptr, v195);
      v201 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, __m128i *))(**(_QWORD **)(a2 + 440) + 224LL))(
               *(_QWORD *)(a2 + 440),
               v191,
               v192,
               ptr,
               v585);
      v206 = v201;
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"read_regs(tid=%d, mask=%x) => %d\n",
          v191,
          v192,
          v201,
          v202,
          v203,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v204,
          v205,
          a10,
          a11,
          v562);
      sub_45BD90((char **)a1, v206);
      if ( v206 == 1 )
      {
        sub_46CE10((char **)a1, (__int64)ptr, n[0], (__int64)v586);
        goto LABEL_214;
      }
LABEL_211:
      v207 = ::s1;
      if ( v585[0].m128i_i64[1] )
        v207 = (const char *)v585[0].m128i_i64[0];
      sub_45BFB0((char **)a1, v207);
LABEL_214:
      v208 = ptr;
      if ( ptr )
      {
        v209 = v589.m128i_i64[0];
        if ( v589.m128i_i64[0] )
        {
          v210 = 0;
          v211 = (char *)ptr;
          do
          {
            v212 = &v211[32 * v210];
            if ( *(int *)v212 >= -1 )
            {
              v213 = *((void **)v212 + 1);
              if ( v213 )
              {
                *((_QWORD *)v212 + 2) = 0;
                j__free(v213);
                v211 = (char *)ptr;
              }
            }
            ++v210;
          }
          while ( v209 != v210 );
          v208 = v211;
        }
        v589.m128i_i64[0] = 0;
        j__free(v208);
      }
      if ( v586 )
      {
        *(_QWORD *)&v587 = 0;
        j__free(v586);
      }
      if ( v585[0].m128i_i64[0] )
      {
        v585[0].m128i_i64[1] = 0;
        j__free((void *)v585[0].m128i_i64[0]);
      }
      goto LABEL_5;
    case 0x20:
      v158 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v159 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v160 = (char *)src;
      v161 = v159;
      LODWORD(v594) = -2;
      dest[0] = (void *)-1LL;
      *(_OWORD *)&dest[1] = 0;
      if ( src >= v582 )
        goto LABEL_188;
      v162 = (char *)src + 1;
      if ( v582 < (char *)src + 1 )
      {
        v596[0] = 0;
      }
      else
      {
        src = (char *)src + 1;
        v163 = *v160;
        v596[0] = v163;
        if ( v163 < 0 )
        {
          if ( (~v163 & 0xC0) != 0 )
          {
            v164 = 2;
            v165 = 1;
          }
          else if ( (~v163 & 0xE0) != 0 )
          {
            v164 = 4;
            v165 = 3;
          }
          else
          {
            v164 = 5;
            v165 = 4;
          }
          if ( !__CFADD__(v165, v162) && v582 >= &v162[v165] )
          {
            src = &v162[v165];
            v166 = v165;
            for ( i = 0; i < v166; ++i )
            {
              v168 = i;
              v596[v168 + 1] = v162[v168];
            }
          }
LABEL_169:
          v579 = v596;
          v169 = sub_47FD50((unsigned __int64 *)&v579, (unsigned __int64)&v596[v164]) - 3;
          LODWORD(v594) = v169;
          if ( v169 != -2 )
          {
            if ( v169 == -3 )
              goto LABEL_188;
            memset(dest, 0, 24);
            if ( v169 < -1 )
            {
              if ( !byte_4C94E1 )
                sub_481AC0(3216);
              BUG();
            }
            v170 = (char *)src;
            v171 = (char *)src + 1;
            if ( v582 < (char *)src + 1 )
            {
              s[0] = 0;
            }
            else
            {
              src = (char *)src + 1;
              v172 = *v170;
              s[0] = v172;
              if ( v172 < 0 )
              {
                if ( (~v172 & 0xC0) != 0 )
                {
                  v173 = 2;
                  v174 = 1;
                }
                else if ( (~v172 & 0xE0) != 0 )
                {
                  v173 = 4;
                  v174 = 3;
                }
                else
                {
                  v173 = 5;
                  v174 = 4;
                }
                if ( !__CFADD__(v174, v171) && v582 >= &v171[v174] )
                {
                  src = &v171[v174];
                  v175 = v174;
                  for ( j = 0; j < v175; ++j )
                  {
                    v177 = j;
                    s[v177 + 1] = v171[v177];
                  }
                }
                goto LABEL_181;
              }
            }
            v173 = 1;
LABEL_181:
            v586 = s;
            v178 = sub_47FD50((unsigned __int64 *)&v586, (unsigned __int64)&s[v173]);
            v179 = dest[1];
            v180 = v178;
            v181 = (char *)dest[0];
            if ( dest[1] < (void *)v178 )
            {
              if ( dest[2] < (void *)v178 )
              {
                dest[0] = sub_481540((__int64)dest, dest[0], v178, 1u);
                v179 = dest[1];
                v181 = (char *)dest[0];
              }
              memset(&v181[(_QWORD)v179], 0, v180 - (_QWORD)v179);
              dest[1] = (void *)v180;
              v181 = (char *)dest[0];
            }
            else
            {
              if ( (void *)v178 != dest[1] )
                dest[1] = (void *)v178;
              if ( !v178 )
                goto LABEL_188;
            }
            v182 = src;
            if ( v582 >= (char *)src + v180 && (char *)src + v180 >= src )
            {
              src = (char *)src + v180;
              memcpy(v181, v182, v180);
            }
LABEL_188:
            v183 = *(_QWORD *)(a2 + 440);
            v589 = 0;
            ptr = nullptr;
            v184 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, void **))(*(_QWORD *)v183 + 232LL))(
                     v183,
                     v158,
                     v161,
                     &v594,
                     &ptr);
            v190 = v184;
            if ( *(_BYTE *)(a2 + 184) )
              sub_410EA0(
                (int)"write_reg(tid=%d) => %d\n",
                v158,
                v184,
                v185,
                v186,
                v187,
                (__m128)0LL,
                a5,
                a6,
                a7,
                v188,
                v189,
                a10,
                a11,
                v562);
            sub_45BD90((char **)a1, v190);
            if ( v190 < 0 )
            {
              v511 = ::s1;
              if ( v589.m128i_i64[0] )
                v511 = (const char *)ptr;
              sub_45BFB0((char **)a1, v511);
            }
            if ( ptr )
            {
              v589.m128i_i64[0] = 0;
              j__free(ptr);
            }
            if ( (int)v594 >= -1 && dest[0] )
            {
              dest[1] = nullptr;
              j__free(dest[0]);
            }
            goto LABEL_5;
          }
          v469 = (char *)src;
          v470 = (char *)src + 1;
          if ( v582 < (char *)src + 1 )
          {
            v597[0] = 0;
          }
          else
          {
            src = (char *)src + 1;
            v471 = *v469;
            v597[0] = v471;
            if ( v471 < 0 )
            {
              if ( (~v471 & 0xC0) != 0 )
              {
                v472 = 2;
                v473 = 1;
              }
              else if ( (~v471 & 0xE0) != 0 )
              {
                v472 = 4;
                v473 = 3;
              }
              else
              {
                v472 = 5;
                v473 = 4;
              }
              if ( !__CFADD__(v473, v470) && v582 >= &v470[v473] )
              {
                src = &v470[v473];
                v474 = v473;
                for ( k = 0; k < v474; ++k )
                {
                  v476 = k;
                  v597[v476 + 1] = v470[v476];
                }
              }
LABEL_454:
              v580 = v597;
              v477 = sub_47FD50((unsigned __int64 *)&v580, (unsigned __int64)&v597[v472]);
              v478 = (char *)src;
              v479 = v477;
              v480 = (char *)src + 1;
              if ( v582 < (char *)src + 1 )
              {
                v598[0] = 0;
              }
              else
              {
                src = (char *)src + 1;
                v481 = *v478;
                v598[0] = v481;
                if ( v481 < 0 )
                {
                  if ( (~v481 & 0xC0) != 0 )
                  {
                    v482 = 2;
                    v483 = 1;
                  }
                  else if ( (~v481 & 0xE0) != 0 )
                  {
                    v482 = 4;
                    v483 = 3;
                  }
                  else
                  {
                    v482 = 5;
                    v483 = 4;
                  }
                  if ( !__CFADD__(v483, v480) && v582 >= &v480[v483] )
                  {
                    src = &v480[v483];
                    v484 = v483;
                    for ( m = 0; m < v484; ++m )
                    {
                      v486 = m;
                      v598[v486 + 1] = v480[v486];
                    }
                  }
                  goto LABEL_463;
                }
              }
              v482 = 1;
LABEL_463:
              v583 = v598;
              dest[0] = (void *)((v479
                                | (unsigned __int64)(sub_47FD50(
                                                       (unsigned __int64 *)&v583,
                                                       (unsigned __int64)&v598[v482]) << 32))
                               - 1);
              goto LABEL_188;
            }
          }
          v472 = 1;
          goto LABEL_454;
        }
      }
      v164 = 1;
      goto LABEL_169;
    case 0x21:
      v146 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v147 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v148 = *(_QWORD *)(a2 + 440);
      v149 = v147;
      ptr = nullptr;
      v589 = 0;
      v150 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, _QWORD, void **))(*(_QWORD *)v148 + 240LL))(
               v148,
               &v586,
               v146,
               v147,
               &ptr);
      v155 = v150;
      if ( *(_BYTE *)(a2 + 184) )
      {
        v156 = -1;
        if ( v150 == 1 )
          v156 = (__int64)v586;
        sub_410EA0(
          (int)"get_thread_sreg_base(tid=%d, %d) => %a\n",
          v146,
          v149,
          v156,
          v151,
          v152,
          (__m128)0LL,
          a5,
          a6,
          a7,
          v153,
          v154,
          a10,
          a11,
          v562);
      }
      sub_45BD90((char **)a1, v155);
      if ( v155 == 1 )
      {
        sub_45BEA0((char **)a1, (unsigned __int64)v586 + 1);
      }
      else
      {
        v157 = ::s1;
        if ( v589.m128i_i64[0] )
          v157 = (const char *)ptr;
        sub_45BFB0((char **)a1, v157);
      }
      v41 = ptr;
      if ( ptr )
        goto LABEL_327;
      goto LABEL_5;
    case 0x22:
      v438 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v439 = sub_46C3C0(v438, (unsigned __int64 *)&src);
      (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a2 + 440) + 184LL))(
        *(_QWORD *)(a2 + 440),
        v439,
        v438);
      if ( v439 )
      {
        v446 = *(v439 - 1);
        if ( v439 == &v439[7 * v446] )
        {
          v451 = 0;
        }
        else
        {
          v447 = &v439[7 * v446];
          do
          {
            v448 = (void *)*(v447 - 3);
            v449 = v447 - 7;
            v447 -= 7;
            if ( v448 )
            {
              v449[5] = 0;
              j__free(v448);
            }
            v450 = (void *)v447[1];
            if ( v450 )
            {
              v447[2] = 0;
              j__free(v450);
            }
          }
          while ( v439 != v447 );
          v451 = 56LL * *(v439 - 1);
        }
        operator delete[](v439 - 1, v451 + 8);
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"set_exception_info(qty=%d)\n",
          v438,
          v440,
          v441,
          v442,
          v443,
          a4,
          a5,
          a6,
          a7,
          v444,
          v445,
          a10,
          a11,
          v562);
      goto LABEL_5;
    case 0x23:
      v430 = (const char *)src;
      v431 = (char *)src;
      do
      {
        if ( v431 >= v582 )
        {
          v430 = nullptr;
          goto LABEL_413;
        }
        ++v431;
      }
      while ( *(v431 - 1) );
      src = v431;
LABEL_413:
      v432 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      LODWORD(n[0]) = sub_46D820(a2);
      if ( LODWORD(n[0]) == -1 )
        goto LABEL_496;
      if ( v432 )
      {
        v436 = sub_47F9F0(v430);
        *(_QWORD *)(a2 + 8LL * SLODWORD(n[0]) + 8) = v436;
        if ( v436 )
        {
          v437 = sub_47A370(v436);
          if ( !*(_BYTE *)(a2 + 184) )
          {
            sub_45BD90((char **)a1, n[0]);
LABEL_418:
            sub_45BEA0((char **)a1, v437);
            goto LABEL_5;
          }
          goto LABEL_498;
        }
      }
      else
      {
        if ( (unsigned __int8)sub_480530((char *)v597, 0x1000u, v430) )
        {
          if ( !sub_480B50((char *)v597) )
          {
            s1 = (char *)v598;
            sub_4806D0(v598, 4096, v597);
            sub_480690(s, 0x1000u);
            v549 = strlen(s);
            if ( !strncmp((const char *)v598, s, v549) )
            {
              a4 = 0;
              v586 = nullptr;
              v587 = 0;
              do
              {
                if ( sub_480B50(s1) )
                  break;
                ptr = nullptr;
                v589 = 0;
                v574 = strlen(s1);
                v573 = (char *)(v574 + 1);
                ptr = sub_481540((__int64)&ptr, nullptr, v574 + 1, 1u);
                v589.m128i_i64[0] = (__int64)v573;
                memmove(ptr, s1, v574);
                a7 = 0;
                *((_BYTE *)ptr + v574) = 0;
                v554 = ptr;
                v555 = v586;
                ptr = nullptr;
                v574 = (size_t)v554;
                v556 = (char *)v589.m128i_i64[1];
                v573 = (char *)v589.m128i_i64[0];
                v589 = 0;
                p_ptr = v556;
                v557 = v587;
                if ( *((_QWORD *)&v587 + 1) < (unsigned __int64)(v587 + 1) )
                {
                  v586 = sub_481540((__int64)&v586, v586, v587 + 1, 0x18u);
                  v555 = v586;
                  v557 = v587;
                }
                memmove(v555 + 3, v555, 24 * v557);
                a4 = _mm_loadh_ps((const double *)&p_ptr);
                *v555 = v574;
                *(__m128 *)(v555 + 1) = a4;
                *(_QWORD *)&v587 = v587 + 1;
                if ( ptr )
                {
                  v589.m128i_i64[0] = 0;
                  j__free(ptr);
                }
              }
              while ( (unsigned __int8)sub_480530(s1, 0x1000u, s1) );
              v559 = 0;
              v574 = v587;
              if ( (_QWORD)v587 )
              {
                do
                {
                  v560 = (char *)v586 + 24 * v559;
                  v561 = (char *)::s1;
                  if ( *((_QWORD *)v560 + 1) )
                    v561 = *(char **)v560;
                  if ( *(_BYTE *)(a2 + 184) )
                  {
                    v573 = (char *)v559;
                    s1 = v561;
                    *(double *)a4.m128_u64 = sub_410EA0(
                                               (int)"open_file() creating directory %s\n",
                                               (__int64)v561,
                                               v559,
                                               (__int64)v561,
                                               v550,
                                               v551,
                                               a4,
                                               a5,
                                               a6,
                                               a7,
                                               v552,
                                               v553,
                                               a10,
                                               a11,
                                               v562);
                    v559 = (__int64)v573;
                    v561 = s1;
                  }
                  s1 = (char *)v559;
                  if ( (unsigned int)sub_480980(v561, 0x1FFu) )
                    break;
                  v559 = (__int64)(s1 + 1);
                }
                while ( s1 + 1 != (char *)v574 );
              }
              sub_416180((char **)&v586);
            }
          }
        }
        v530 = sub_47FA50(v430);
        *(_QWORD *)(a2 + 8LL * SLODWORD(n[0]) + 8) = v530;
        if ( v530 )
        {
          if ( !*(_BYTE *)(a2 + 184) )
          {
            sub_45BD90((char **)a1, n[0]);
            v437 = 0;
            goto LABEL_418;
          }
          v437 = 0;
          goto LABEL_498;
        }
      }
LABEL_496:
      if ( !*(_BYTE *)(a2 + 184) )
      {
        sub_45BD90((char **)a1, 0xFFFFFFFF);
        goto LABEL_499;
      }
      LODWORD(n[0]) = -1;
      v437 = 0;
LABEL_498:
      v290 = v432 == 0;
      v496 = n[0];
      sub_410EA0(
        (int)"open_file('%s', %d) => %d %lld\n",
        (__int64)v430,
        !v290,
        LODWORD(n[0]),
        v437,
        v433,
        a4,
        a5,
        a6,
        a7,
        v434,
        v435,
        a10,
        a11,
        v562);
      sub_45BD90((char **)a1, v496);
      if ( v496 != -1 )
        goto LABEL_418;
LABEL_499:
      v497 = __errno_location();
      sub_45BD90((char **)a1, *v497);
      goto LABEL_5;
    case 0x24:
      v452 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v459 = v452;
      if ( (unsigned int)v452 <= 0xF )
      {
        v460 = v452;
        v461 = *(FILE **)(a2 + 8LL * v452 + 8);
        if ( v461 )
        {
          v462 = fileno(*(FILE **)(a2 + 8LL * v452 + 8));
          fchmod(v462, 0x1EDu);
          sub_480D70(v461);
          *(_QWORD *)(a2 + 8 * v460 + 8) = 0;
        }
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0((int)"close_file(%d)\n", v459, v453, v454, v455, v456, a4, a5, a6, a7, v457, v458, a10, a11, v562);
      goto LABEL_5;
    case 0x25:
      LODWORD(s1) = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v574 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582);
      LODWORD(n[0]) = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      if ( SLODWORD(n[0]) <= 0 )
      {
        sub_45BD90((char **)a1, 0);
        if ( LODWORD(n[0]) )
        {
          v507 = __errno_location();
          sub_45BD90((char **)a1, *v507);
        }
        v419 = 0;
      }
      else
      {
        v418 = (void *)operator new[](LODWORD(n[0]));
        sub_480D20(*(FILE **)(a2 + 8LL * (int)s1 + 8), v574, 0);
        v419 = sub_480BA0(*(FILE **)(a2 + 8LL * (int)s1 + 8), v418, LODWORD(n[0]));
        sub_45BD90((char **)a1, v419);
        if ( LODWORD(n[0]) == v419 )
        {
          sub_45BB20((char **)a1, v418, SLODWORD(n[0]));
        }
        else
        {
          v538 = *__errno_location();
          sub_45BD90((char **)a1, v538);
        }
        if ( v418 )
          operator delete[](v418);
      }
      if ( *(_BYTE *)(a2 + 184) )
        sub_410EA0(
          (int)"read_file(%d, 0x%llX, %d) => %d\n",
          (unsigned int)s1,
          v574,
          LODWORD(n[0]),
          v419,
          v420,
          a4,
          a5,
          a6,
          a7,
          v421,
          v422,
          a10,
          a11,
          v562);
      goto LABEL_5;
    case 0x26:
      LODWORD(s1) = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v574 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582);
      LODWORD(n[0]) = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      if ( LODWORD(n[0]) )
      {
        v499 = (void *)operator new[](LODWORD(n[0]));
        v500 = src;
        v501 = v499;
        if ( v582 >= (char *)src + LODWORD(n[0]) && (char *)src + LODWORD(n[0]) >= src )
        {
          src = (char *)src + LODWORD(n[0]);
          memcpy(v499, v500, LODWORD(n[0]));
        }
        sub_480D20(*(FILE **)(a2 + 8LL * (int)s1 + 8), v574, 0);
        if ( v501 )
        {
          v133 = sub_480C40(*(FILE **)(a2 + 8LL * (int)s1 + 8), v501, LODWORD(n[0]));
          sub_45BD90((char **)a1, n[0]);
          if ( v133 != LODWORD(n[0]) )
          {
            v502 = __errno_location();
            sub_45BD90((char **)a1, *v502);
          }
          operator delete[](v501);
LABEL_138:
          if ( *(_BYTE *)(a2 + 184) )
            sub_410EA0(
              (int)"write_file(%d, 0x%llX, %u) => %u\n",
              (unsigned int)s1,
              v574,
              LODWORD(n[0]),
              v133,
              v130,
              a4,
              a5,
              a6,
              a7,
              v131,
              v132,
              a10,
              a11,
              v562);
          goto LABEL_5;
        }
        sub_45BD90((char **)a1, n[0]);
        v558 = __errno_location();
        sub_45BD90((char **)a1, *v558);
      }
      else
      {
        sub_480D20(*(FILE **)(a2 + 8LL * (int)s1 + 8), v574, 0);
        sub_45BD90((char **)a1, 0);
      }
      v133 = 0;
      goto LABEL_138;
    case 0x27:
      v126 = sub_46F8C0(a2 + 192, (char **)a1, src, (unsigned __int64)v582);
      if ( !v126 )
        goto LABEL_5;
      sub_470050((__int64)&ptr, v126);
      v27 = ptr;
      v127 = *(char **)a1;
      ptr = nullptr;
      v29 = _mm_loadu_si128(&v589);
      v589 = 0;
      v128 = v27;
      if ( v127 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        *(__m128i *)n = v29;
        j__free(v127);
        si128 = _mm_load_si128((const __m128i *)n);
        v32 = ptr;
        *(_QWORD *)a1 = v128;
        *(__m128i *)(a1 + 8) = si128;
        if ( v32 )
        {
LABEL_12:
          v589.m128i_i64[0] = 0;
          j__free(v32);
        }
      }
      else
      {
LABEL_490:
        *(_QWORD *)a1 = v27;
        *(__m128i *)(a1 + 8) = v29;
      }
      goto LABEL_5;
    case 0x28:
      ptr = nullptr;
      v589 = 0;
      v123 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v124 = *(_QWORD *)(a2 + 440);
      v125 = *(__int64 (**)())(*(_QWORD *)v124 + 416LL);
      if ( v125 == sub_40C050 )
      {
        sub_45BD90((char **)a1, 0);
      }
      else
      {
        v540 = ((__int64 (__fastcall *)(__int64, _QWORD, void **))v125)(v124, v123, &ptr);
        sub_45BD90((char **)a1, v540);
        if ( v540 == 1 )
          sub_46C600((char **)a1, &ptr);
      }
      v41 = ptr;
      if ( ptr )
        goto LABEL_327;
      goto LABEL_5;
    case 0x29:
      n[0] = (size_t)&src;
      p_ptr = (char *)(sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582) - 1);
      LODWORD(v574) = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      LODWORD(v573) = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v108 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v109 = v108;
      v583 = nullptr;
      memset(v585, 0, 24);
      ptr = nullptr;
      v590 = nullptr;
      memset(v591, 0, sizeof(v591));
      v571 = v108 & 1;
      v584 = 0;
      v589 = 0;
      if ( (v108 & 1) != 0 )
        v110 = nullptr;
      else
        v110 = (char **)v585;
      s1 = (char *)&ptr;
      sub_46CA80((char **)&v583, (char **)&ptr, v110, (unsigned __int64 *)n[0]);
      v111 = *(__int64 **)(a2 + 440);
      v586 = nullptr;
      v587 = 0;
      v594 = 0xFFFFFFFFLL;
      dest[0] = (void *)-1LL;
      memset(&dest[1], 0, 56);
      v112 = *v111;
      n[0] = (size_t)&v594;
      s1 = (char *)(*(__int64 (__fastcall **)(__int64 *, char *, _QWORD, _QWORD, void **, void **, __m128i *, void **, __int64 *, __int64))(v112 + 424))(
                     v111,
                     p_ptr,
                     (unsigned int)v574,
                     (unsigned int)v573,
                     &v583,
                     &ptr,
                     v585,
                     &v586,
                     &v594,
                     v109);
      sub_45BEA0((char **)a1, (unsigned __int64)(s1 + 1));
      if ( s1 == (char *)-1LL )
      {
        if ( (v109 & 2) != 0 )
          sub_46C160((char **)a1, (unsigned int *)n[0]);
        v519 = ::s1;
        if ( (_QWORD)v587 )
          v519 = (const char *)v586;
        sub_45BFB0((char **)a1, v519);
      }
      else if ( !v571 )
      {
        sub_46CC00(a1, (__int64)v585, 1);
      }
      sub_478720(n[0]);
      if ( v586 )
      {
        *(_QWORD *)&v587 = 0;
        j__free(v586);
      }
      if ( v591[0] )
      {
        v591[1] = nullptr;
        j__free(v591[0]);
      }
      if ( ptr )
      {
        v589.m128i_i64[0] = 0;
        j__free(ptr);
      }
      v113 = (char *)v585[0].m128i_i64[0];
      if ( v585[0].m128i_i64[0] )
      {
        v114 = v585[0].m128i_i64[1];
        if ( v585[0].m128i_i64[1] )
        {
          v115 = 0;
          do
          {
            v116 = &v113[32 * v115];
            v117 = *((void **)v116 + 1);
            if ( v117 )
            {
              *((_QWORD *)v116 + 2) = 0;
              j__free(v117);
              v113 = (char *)v585[0].m128i_i64[0];
            }
            ++v115;
          }
          while ( v114 != v115 );
        }
        v585[0].m128i_i64[1] = 0;
        j__free(v113);
      }
      v118 = (char *)v583;
      if ( v583 )
      {
        v119 = v584;
        if ( (_QWORD)v584 )
        {
          v120 = 0;
          do
          {
            v121 = &v118[32 * v120];
            v122 = *((void **)v121 + 1);
            if ( v122 )
            {
              *((_QWORD *)v121 + 2) = 0;
              j__free(v122);
              v118 = (char *)v583;
            }
            ++v120;
          }
          while ( v119 != v120 );
        }
        *(_QWORD *)&v584 = 0;
        j__free(v118);
      }
      goto LABEL_5;
    case 0x2A:
      v107 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v83 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 440) + 432LL))(*(_QWORD *)(a2 + 440), v107);
      goto LABEL_101;
    case 0x2B:
      v81 = src;
      v82 = (char *)src;
      while ( v82 < v582 )
      {
        if ( !*v82++ )
        {
          src = v82;
LABEL_81:
          v83 = (*(__int64 (__fastcall **)(_QWORD, void *, char *))(**(_QWORD **)(a2 + 440) + 536LL))(
                  *(_QWORD *)(a2 + 440),
                  v81,
                  v582);
LABEL_101:
          sub_45BD90((char **)a1, v83);
          goto LABEL_5;
        }
      }
      v81 = nullptr;
      goto LABEL_81;
    case 0x2C:
      v94 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582);
      v99 = *(_QWORD *)(a2 + 440);
      v100 = v94 - 1;
      ptr = nullptr;
      v589 = 0;
      v101 = *(__int64 (**)())(*(_QWORD *)v99 + 264LL);
      if ( v101 == sub_40BFB0 )
      {
        if ( !*(_BYTE *)(a2 + 184) )
        {
          sub_45BD90((char **)a1, 1u);
          goto LABEL_93;
        }
        LODWORD(n[0]) = 0;
        v515 = 0;
        v516 = -1;
      }
      else
      {
        v542 = ((__int64 (__fastcall *)(__int64, void **, __int64))v101)(v99, &ptr, v100);
        v515 = v589.m128i_i32[0];
        v290 = *(_BYTE *)(a2 + 184) == 0;
        v516 = v542;
        LODWORD(n[0]) = v589.m128i_i32[0];
        if ( v290 )
        {
LABEL_551:
          sub_45BD90((char **)a1, v516 + 2);
          if ( v516 > 0 )
          {
            sub_45BD90((char **)a1, v515);
            if ( SLODWORD(n[0]) > 0 )
            {
              v517 = 0;
              do
              {
                v518 = v517;
                sub_46B910((char **)a1, (__int64 *)((char *)ptr + v517));
                v517 = v518 + 40;
              }
              while ( 40LL * SLODWORD(n[0]) != v518 + 40 );
            }
          }
LABEL_93:
          v102 = (char *)ptr;
          if ( ptr )
          {
            v103 = v589.m128i_i64[0];
            if ( v589.m128i_i64[0] )
            {
              v104 = 0;
              do
              {
                v105 = &v102[40 * v104];
                v106 = *((void **)v105 + 2);
                if ( v106 )
                {
                  *((_QWORD *)v105 + 3) = 0;
                  j__free(v106);
                  v102 = (char *)ptr;
                }
                ++v104;
              }
              while ( v103 != v104 );
            }
            v589.m128i_i64[0] = 0;
            j__free(v102);
          }
          goto LABEL_5;
        }
      }
      sub_410EA0(
        (int)"get_scattered_image(base=%a) => %d (qty=%d)\n",
        v100,
        (unsigned int)v516,
        LODWORD(n[0]),
        v95,
        v96,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v97,
        v98,
        a10,
        a11,
        v562);
      goto LABEL_551;
    case 0x2D:
      v33 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582);
      v38 = *(_QWORD *)(a2 + 440);
      ptr = nullptr;
      v589 = 0;
      v39 = v33 - 1;
      v40 = *(__int64 (**)())(*(_QWORD *)v38 + 272LL);
      if ( v40 == sub_40BFC0 )
      {
        if ( !*(_BYTE *)(a2 + 184) )
        {
          sub_45BD90((char **)a1, 0);
          goto LABEL_18;
        }
        v512 = 0;
        v513 = 0;
        v514 = 0;
      }
      else
      {
        v541 = ((__int64 (__fastcall *)(__int64, void **, __int64))v40)(v38, &ptr, v39);
        v513 = v589.m128i_i32[0];
        v514 = v541;
        v512 = v541;
        if ( !*(_BYTE *)(a2 + 184) )
        {
LABEL_547:
          sub_45BD90((char **)a1, v514);
          if ( v514 )
            sub_45C0D0(a1, ptr, v513);
LABEL_18:
          v41 = ptr;
          if ( ptr )
            goto LABEL_327;
          goto LABEL_5;
        }
      }
      sub_410EA0(
        (int)"get_image_uuid(base=%a) => %d (size=%d)\n",
        v39,
        v512,
        (unsigned int)v513,
        v34,
        v35,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v36,
        v37,
        a10,
        a11,
        v562);
      goto LABEL_547;
    case 0x2E:
      v84 = sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582);
      v89 = (const char *)src;
      n[0] = v84 - 1;
      v90 = (char *)src;
      while ( v90 < v582 )
      {
        if ( !*v90++ )
        {
          src = v90;
          v91 = 0;
          v574 = *(_QWORD *)(a2 + 440);
          v92 = *(__int64 (**)())(*(_QWORD *)v574 + 280LL);
          v589 = 0;
          ptr = nullptr;
          if ( v89 )
          {
            s1 = (char *)&ptr;
            v495 = strlen(v89);
            v573 = (char *)(v495 + 1);
            ptr = sub_481540((__int64)&ptr, nullptr, v495 + 1, 1u);
            v589.m128i_i64[0] = v495 + 1;
            memmove(ptr, v89, v495);
            *((_BYTE *)ptr + v495) = 0;
            v93 = -1;
            if ( v92 == sub_40BFD0 )
            {
LABEL_494:
              if ( ptr )
              {
                v589.m128i_i64[0] = 0;
                j__free(ptr);
              }
              goto LABEL_87;
            }
LABEL_606:
            v93 = ((__int64 (__fastcall *)(size_t, size_t, char *))v92)(v574, n[0], s1);
            goto LABEL_494;
          }
LABEL_86:
          v89 = nullptr;
          v93 = -1;
          if ( v92 == sub_40BFD0 )
          {
LABEL_87:
            if ( *(_BYTE *)(a2 + 184) )
              sub_410EA0(
                (int)"get_segm_start(base=%a, segname=%s) => %a\n",
                n[0],
                (__int64)v89,
                v93,
                v85,
                v86,
                v91,
                a5,
                a6,
                a7,
                v87,
                v88,
                a10,
                a11,
                v562);
            sub_45BEA0((char **)a1, v93 + 1);
            goto LABEL_5;
          }
          s1 = (char *)&ptr;
          goto LABEL_606;
        }
      }
      v91 = 0;
      v574 = *(_QWORD *)(a2 + 440);
      v92 = *(__int64 (**)())(*(_QWORD *)v574 + 280LL);
      v589 = 0;
      ptr = nullptr;
      goto LABEL_86;
    case 0x2F:
      n[0] = (size_t)&src;
      v573 = (char *)(sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582) - 1);
      p_ptr = (char *)(sub_47FE70((unsigned __int64 *)&src, (unsigned __int64)v582) - 1);
      v42 = sub_47FD50((unsigned __int64 *)&src, (unsigned __int64)v582);
      v586 = nullptr;
      v43 = v42;
      v587 = 0;
      if ( !v42 )
        goto LABEL_59;
      ptr = nullptr;
      v590 = nullptr;
      v593 = -1;
      s1 = (char *)&ptr;
      v589 = 0;
      memset(v591, 0, sizeof(v591));
      v592 = 0;
      sub_467280((__int64)&v586, v42, (__int64)&ptr);
      if ( v591[2] )
      {
        *(_QWORD *)&v592 = 0;
        j__free(v591[2]);
      }
      if ( v590 )
      {
        v591[0] = nullptr;
        j__free(v590);
      }
      if ( ptr )
      {
        v589.m128i_i64[0] = 0;
        j__free(ptr);
      }
      if ( v43 <= 0 )
        goto LABEL_59;
      s1 = nullptr;
      v574 = 80LL * (unsigned int)v43;
      break;
    case 0x30:
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 440) + 680LL) )
      {
        sub_45BD90((char **)a1, 1u);
        sub_46D000(a1, *(_QWORD *)(a2 + 440) + 672LL);
      }
      else
      {
        sub_45BD90((char **)a1, 0);
      }
      goto LABEL_5;
    default:
      sub_470050((__int64)&ptr, 1);
      v27 = ptr;
      v28 = *(char **)a1;
      ptr = nullptr;
      v29 = _mm_loadu_si128(&v589);
      v589 = 0;
      v30 = v27;
      if ( !v28 )
        goto LABEL_490;
      *(_QWORD *)(a1 + 8) = 0;
      *(__m128i *)n = v29;
      j__free(v28);
      v31 = _mm_load_si128((const __m128i *)n);
      v32 = ptr;
      *(_QWORD *)a1 = v30;
      *(__m128i *)(a1 + 8) = v31;
      if ( v32 )
        goto LABEL_12;
      goto LABEL_5;
  }
  while ( 1 )
  {
    v44 = &s1[(_QWORD)v586];
    v45 = sub_47FD50((unsigned __int64 *)n[0], (unsigned __int64)v582);
    if ( !v45 )
      goto LABEL_36;
    v46 = *((_QWORD *)v44 + 1);
    v47 = v45;
    if ( v46 < v45 )
    {
      v488 = *(char **)v44;
      if ( *((_QWORD *)v44 + 2) < (unsigned __int64)v45 )
      {
        v506 = (char *)sub_481540((__int64)v44, v488, v45, 1u);
        *(_QWORD *)v44 = v506;
        v46 = *((_QWORD *)v44 + 1);
        v488 = v506;
      }
      memset(&v488[v46], 0, v47 - v46);
      *((_QWORD *)v44 + 1) = v47;
    }
    else if ( v45 != v46 )
    {
      *((_QWORD *)v44 + 1) = v45;
    }
    v48 = (unsigned __int64)v582;
    if ( !__CFADD__(v47, src) && v582 >= (char *)src + v47 )
      break;
LABEL_37:
    v51 = sub_47FD50((unsigned __int64 *)n[0], v48);
    if ( !v51 )
      goto LABEL_44;
    v52 = *((_QWORD *)v44 + 4);
    v53 = v51;
    if ( v52 < v51 )
    {
      v487 = *((char **)v44 + 3);
      if ( *((_QWORD *)v44 + 5) < (unsigned __int64)v51 )
      {
        v505 = (char *)sub_481540((__int64)(v44 + 24), v487, v51, 1u);
        *((_QWORD *)v44 + 3) = v505;
        v52 = *((_QWORD *)v44 + 4);
        v487 = v505;
      }
      memset(&v487[v52], 0, v53 - v52);
      *((_QWORD *)v44 + 4) = v53;
    }
    else if ( v51 != v52 )
    {
      *((_QWORD *)v44 + 4) = v51;
    }
    v54 = src;
    v55 = (unsigned __int64)v582;
    if ( !__CFADD__(v53, src) && v582 >= (char *)src + v53 )
    {
      v56 = *((void **)v44 + 3);
      src = (char *)src + v53;
      memcpy(v56, v54, v53);
LABEL_44:
      v55 = (unsigned __int64)v582;
    }
    v57 = (int)sub_47FD50((unsigned __int64 *)n[0], v55);
    v58 = *((_QWORD *)v44 + 7);
    v59 = v57;
    if ( v57 != v58 )
    {
      v585[0] = 0;
      if ( v57 >= v58 )
      {
        v60 = *((__m128i **)v44 + 6);
        v61 = *((_QWORD *)v44 + 8);
        v62 = (__int64)(v44 + 48);
        if ( v585 < v60 || v585 >= &v60[v61] )
        {
          if ( v61 < v57 )
          {
            *((_QWORD *)v44 + 6) = sub_481540(v62, v60, v57, 0x10u);
            v59 = v57;
            v58 = *((_QWORD *)v44 + 7);
          }
          if ( v58 < v57 )
          {
            v63 = n[0];
            do
            {
              v489 = v58++;
              *(__m128i *)(*((_QWORD *)v44 + 6) + 16 * v489) = _mm_load_si128(v585);
            }
            while ( v57 != v58 );
LABEL_54:
            n[0] = v63;
          }
        }
        else
        {
          if ( v61 < v57 )
          {
            *((_QWORD *)v44 + 6) = sub_481540(v62, v60, v57, 0x10u);
            v59 = v57;
            v58 = *((_QWORD *)v44 + 7);
          }
          if ( v58 < v57 )
          {
            v63 = n[0];
            do
            {
              v64 = v58++;
              *(_OWORD *)(*((_QWORD *)v44 + 6) + 16 * v64) = 0;
            }
            while ( v57 != v58 );
            goto LABEL_54;
          }
        }
      }
      *((_QWORD *)v44 + 7) = v57;
    }
    v65 = 0;
    v66 = 16LL * (unsigned int)v59;
    if ( v59 > 0 )
    {
      do
      {
        v67 = (unsigned __int64 *)n[0];
        *(_QWORD *)(*((_QWORD *)v44 + 6) + v65) = sub_47FE70((unsigned __int64 *)n[0], (unsigned __int64)v582) - 1;
        *(_QWORD *)(*((_QWORD *)v44 + 6) + v65 + 8) = sub_47FE70(v67, (unsigned __int64)v582) - 1;
        v65 += 16;
      }
      while ( v66 != v65 );
    }
    s1 += 80;
    v68 = (char *)v574;
    *((_DWORD *)v44 + 18) = sub_47FD50((unsigned __int64 *)n[0], (unsigned __int64)v582);
    if ( s1 == v68 )
    {
LABEL_59:
      v69 = sub_47FD50((unsigned __int64 *)n[0], (unsigned __int64)v582);
      v70 = *(_QWORD *)(a2 + 440);
      v589 = 0;
      ptr = nullptr;
      v71 = (*(__int64 (__fastcall **)(__int64, void **, char *, char *, void **, _QWORD, void **))(*(_QWORD *)v70
                                                                                                  + 576LL))(
              v70,
              &v583,
              v573,
              p_ptr,
              &v586,
              v69,
              &ptr);
      sub_45BD90((char **)a1, v71);
      if ( v71 == 1 )
      {
        sub_45BEA0((char **)a1, (unsigned __int64)v583 + 1);
      }
      else if ( v71 != -1 )
      {
        v72 = ::s1;
        if ( v589.m128i_i64[0] )
          v72 = (const char *)ptr;
        sub_45BFB0((char **)a1, v72);
      }
      if ( ptr )
      {
        v589.m128i_i64[0] = 0;
        j__free(ptr);
      }
      v73 = (char *)v586;
      if ( !v586 )
        goto LABEL_5;
      v74 = v587;
      if ( (_QWORD)v587 )
      {
        v75 = 0;
        do
        {
          v76 = &v73[80 * v75];
          v77 = *((void **)v76 + 6);
          v78 = v76;
          if ( v77 )
          {
            *((_QWORD *)v76 + 7) = 0;
            j__free(v77);
          }
          v79 = *((void **)v78 + 3);
          if ( v79 )
          {
            *((_QWORD *)v78 + 4) = 0;
            j__free(v79);
          }
          v80 = *(void **)v78;
          if ( *(_QWORD *)v78 )
          {
            *((_QWORD *)v78 + 1) = 0;
            j__free(v80);
          }
          ++v75;
          v73 = (char *)v586;
        }
        while ( v74 != v75 );
      }
LABEL_305:
      *(_QWORD *)&v587 = 0;
      j__free(v73);
      goto LABEL_5;
    }
  }
  v49 = *(char **)v44;
  v50 = src;
  src = (char *)src + v47;
  memcpy(v49, v50, v47);
LABEL_36:
  v48 = (unsigned __int64)v582;
  goto LABEL_37;
}
// 468575: conditional instruction was optimized away because edx.4 is in (==1|3..4)
// 468670: conditional instruction was optimized away because edx.4 is in (==1|3..4)
// 469F69: conditional instruction was optimized away because edx.4 is in (==1|3..4)
// 46A029: conditional instruction was optimized away because edx.4 is in (==1|3..4)
// 4674E3: variable 'v20' is possibly undefined
// 4674E3: variable 'v21' is possibly undefined
// 4674E3: variable 'v22' is possibly undefined
// 4674E3: variable 'v23' is possibly undefined
// 4674E3: variable 'v24' is possibly undefined
// 4674E3: variable 'v562' is possibly undefined
// 467C8A: variable 'v85' is possibly undefined
// 467C8A: variable 'v86' is possibly undefined
// 467C8A: variable 'v87' is possibly undefined
// 467C8A: variable 'v88' is possibly undefined
// 4682A8: variable 'v130' is possibly undefined
// 4682A8: variable 'v131' is possibly undefined
// 4682A8: variable 'v132' is possibly undefined
// 468443: variable 'v151' is possibly undefined
// 468443: variable 'v152' is possibly undefined
// 468443: variable 'v153' is possibly undefined
// 468443: variable 'v154' is possibly undefined
// 468754: variable 'v185' is possibly undefined
// 468754: variable 'v186' is possibly undefined
// 468754: variable 'v187' is possibly undefined
// 468754: variable 'v188' is possibly undefined
// 468754: variable 'v189' is possibly undefined
// 46AD40: variable 'v202' is possibly undefined
// 46AD40: variable 'v203' is possibly undefined
// 46AD40: variable 'v204' is possibly undefined
// 46AD40: variable 'v205' is possibly undefined
// 46AA0D: variable 'v219' is possibly undefined
// 46AA0D: variable 'v220' is possibly undefined
// 46AA0D: variable 'v221' is possibly undefined
// 46AA0D: variable 'v222' is possibly undefined
// 468AD5: variable 'v16' is possibly undefined
// 468AD5: variable 'v17' is possibly undefined
// 468AF6: variable 'v224' is possibly undefined
// 468AF6: variable 'v225' is possibly undefined
// 468AF6: variable 'v226' is possibly undefined
// 468AF6: variable 'v227' is possibly undefined
// 468AF6: variable 'v228' is possibly undefined
// 468AF6: variable 'v229' is possibly undefined
// 468CAA: variable 'v246' is possibly undefined
// 468CAA: variable 'v247' is possibly undefined
// 468CAA: variable 'v248' is possibly undefined
// 468CAA: variable 'v249' is possibly undefined
// 468CAA: variable 'v250' is possibly undefined
// 468CAA: variable 'v251' is possibly undefined
// 468CEB: variable 'v253' is possibly undefined
// 468CEB: variable 'v254' is possibly undefined
// 468CEB: variable 'v255' is possibly undefined
// 468CEB: variable 'v256' is possibly undefined
// 468CEB: variable 'v257' is possibly undefined
// 468CEB: variable 'v258' is possibly undefined
// 468D32: variable 'v260' is possibly undefined
// 468D32: variable 'v261' is possibly undefined
// 468DA4: variable 'v264' is possibly undefined
// 468DA4: variable 'v265' is possibly undefined
// 468DA4: variable 'v266' is possibly undefined
// 468DA4: variable 'v267' is possibly undefined
// 468DA4: variable 'v268' is possibly undefined
// 468DA4: variable 'v269' is possibly undefined
// 469119: variable 'v279' is possibly undefined
// 469119: variable 'v280' is possibly undefined
// 469217: variable 'v300' is possibly undefined
// 469217: variable 'v301' is possibly undefined
// 469217: variable 'v302' is possibly undefined
// 469217: variable 'v303' is possibly undefined
// 469217: variable 'v304' is possibly undefined
// 469217: variable 'v305' is possibly undefined
// 46939A: variable 'v318' is possibly undefined
// 46939A: variable 'v319' is possibly undefined
// 46939A: variable 'v320' is possibly undefined
// 46939A: variable 'v321' is possibly undefined
// 46A998: variable 'v334' is possibly undefined
// 46A998: variable 'v335' is possibly undefined
// 46A998: variable 'v336' is possibly undefined
// 46A998: variable 'v337' is possibly undefined
// 46A998: variable 'v338' is possibly undefined
// 46A998: variable 'v339' is possibly undefined
// 4695BE: variable 'v348' is possibly undefined
// 4695BE: variable 'v349' is possibly undefined
// 4695BE: variable 'v350' is possibly undefined
// 4695BE: variable 'v351' is possibly undefined
// 46961F: variable 'v355' is possibly undefined
// 46961F: variable 'v356' is possibly undefined
// 46961F: variable 'v357' is possibly undefined
// 46961F: variable 'v358' is possibly undefined
// 46961F: variable 'v359' is possibly undefined
// 469697: variable 'v362' is possibly undefined
// 469697: variable 'v363' is possibly undefined
// 469697: variable 'v364' is possibly undefined
// 469697: variable 'v365' is possibly undefined
// 469697: variable 'v366' is possibly undefined
// 469817: variable 'v386' is possibly undefined
// 469817: variable 'v387' is possibly undefined
// 46983E: variable 'v392' is possibly undefined
// 46983E: variable 'v393' is possibly undefined
// 46988B: variable 'v396' is possibly undefined
// 46988B: variable 'v389' is possibly undefined
// 46988B: variable 'v390' is possibly undefined
// 46988B: variable 'v391' is possibly undefined
// 4699D4: variable 'v411' is possibly undefined
// 4699D4: variable 'v412' is possibly undefined
// 4699D4: variable 'v413' is possibly undefined
// 4699D4: variable 'v414' is possibly undefined
// 4699D4: variable 'v415' is possibly undefined
// 4699D4: variable 'v416' is possibly undefined
// 469B0C: variable 'v420' is possibly undefined
// 469B0C: variable 'v421' is possibly undefined
// 469B0C: variable 'v422' is possibly undefined
// 469B9C: variable 'v427' is possibly undefined
// 469B9C: variable 'v428' is possibly undefined
// 469B9C: variable 'v429' is possibly undefined
// 469D54: variable 'v440' is possibly undefined
// 469D54: variable 'v441' is possibly undefined
// 469D54: variable 'v442' is possibly undefined
// 469D54: variable 'v443' is possibly undefined
// 469D54: variable 'v444' is possibly undefined
// 469D54: variable 'v445' is possibly undefined
// 469DC6: variable 'v453' is possibly undefined
// 469DC6: variable 'v454' is possibly undefined
// 469DC6: variable 'v455' is possibly undefined
// 469DC6: variable 'v456' is possibly undefined
// 469DC6: variable 'v457' is possibly undefined
// 469DC6: variable 'v458' is possibly undefined
// 46A3CA: variable 'v433' is possibly undefined
// 46A3CA: variable 'v434' is possibly undefined
// 46A3CA: variable 'v435' is possibly undefined
// 46A44C: variable 'v532' is possibly undefined
// 46A44C: variable 'v533' is possibly undefined
// 46A44C: variable 'v534' is possibly undefined
// 46A44C: variable 'v535' is possibly undefined
// 46A44C: variable 'v536' is possibly undefined
// 46A44C: variable 'v564' is possibly undefined
// 46A78A: variable 'v34' is possibly undefined
// 46A78A: variable 'v35' is possibly undefined
// 46A78A: variable 'v36' is possibly undefined
// 46A78A: variable 'v37' is possibly undefined
// 46A7E3: variable 'v95' is possibly undefined
// 46A7E3: variable 'v96' is possibly undefined
// 46A7E3: variable 'v97' is possibly undefined
// 46A7E3: variable 'v98' is possibly undefined
// 46A8C3: variable 'v323' is possibly undefined
// 46A8C3: variable 'v324' is possibly undefined
// 46A8C3: variable 'v325' is possibly undefined
// 46A8C3: variable 'v326' is possibly undefined
// 46A8C3: variable 'v327' is possibly undefined
// 46A8C3: variable 'v328' is possibly undefined
// 46A9B8: variable 'v238' is possibly undefined
// 46A9B8: variable 'v239' is possibly undefined
// 46A9B8: variable 'v240' is possibly undefined
// 46A9B8: variable 'v241' is possibly undefined
// 46A9F1: variable 'v523' is possibly undefined
// 46A9F1: variable 'v524' is possibly undefined
// 46A9F1: variable 'v525' is possibly undefined
// 46A9F1: variable 'v526' is possibly undefined
// 46A9F1: variable 'v527' is possibly undefined
// 46A9F1: variable 'v528' is possibly undefined
// 46A9F1: variable 'v563' is possibly undefined
// 46AA96: variable 'v140' is possibly undefined
// 46AA96: variable 'v141' is possibly undefined
// 46AA96: variable 'v142' is possibly undefined
// 46AA96: variable 'v143' is possibly undefined
// 46B13A: variable 'v550' is possibly undefined
// 46B13A: variable 'v551' is possibly undefined
// 46B13A: variable 'v552' is possibly undefined
// 46B13A: variable 'v553' is possibly undefined
// 40BFB0: using guessed type __int64 sub_40BFB0();
// 40BFC0: using guessed type __int64 sub_40BFC0();
// 40BFD0: using guessed type __int64 sub_40BFD0();
// 40C050: using guessed type __int64 sub_40C050();
// 46D000: using guessed type __int64 __fastcall sub_46D000(_QWORD, _QWORD);
// 4C3560: using guessed type char *off_4C3560[6];
// 4C8310: using guessed type __int64 qword_4C8310[2];
// 4C94E1: using guessed type char byte_4C94E1;
