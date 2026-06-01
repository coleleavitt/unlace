void __fastcall Idiot::solve2(Idiot *this, CoinMessageHandler *a2, const CoinMessages *a3, __m128i a4)
{
  int v5; // eax
  bool v6; // zf
  bool v7; // cc
  int v8; // eax
  double v9; // xmm6_8
  int v10; // eax
  double v11; // xmm4_8
  __int64 v12; // rax
  __int64 v13; // rdx
  Idiot *v14; // rbp
  __int64 (__fastcall *v15)(ClpPackedMatrix *); // rcx
  _QWORD *v16; // rbx
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD, __m128i *, _QWORD, __int64); // rdi
  double *v20; // r12
  unsigned __int64 *v21; // rdi
  double *v22; // rax
  double *v23; // rdx
  __int64 v24; // rcx
  double v25; // xmm0_8
  __int64 v26; // rax
  _QWORD *v27; // rax
  double *v28; // rax
  __int64 v29; // r8
  double *v30; // r15
  unsigned __int64 *v31; // rdi
  double *v32; // rdx
  __int64 v33; // rcx
  double *v34; // rsi
  double v35; // xmm0_8
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  double *v38; // rax
  int v39; // esi
  unsigned __int64 *v40; // rdi
  double *v41; // rdx
  __int64 v42; // rcx
  double *v43; // rsi
  double v44; // xmm0_8
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rsi
  void *v50; // rdi
  __int64 v51; // rax
  unsigned int v52; // edx
  int v53; // ecx
  int v54; // edi
  __m128i v55; // xmm1
  __m128i si128; // xmm2
  unsigned int v57; // esi
  const __m128i *v58; // rdx
  unsigned int v59; // eax
  __m128i v60; // xmm0
  __m128i v61; // xmm1
  int v62; // eax
  signed int v63; // edx
  int v64; // ecx
  int v65; // edx
  __int64 v66; // r10
  __int64 v67; // rcx
  int v68; // eax
  double v69; // xmm6_8
  int v70; // eax
  bool v71; // zf
  int v72; // ecx
  void *v73; // r10
  int v74; // eax
  __int64 v75; // rax
  int v76; // edi
  unsigned __int64 v77; // rdx
  unsigned int v78; // esi
  unsigned int v79; // eax
  signed int v80; // eax
  int v81; // edx
  int v82; // eax
  int v83; // r11d
  double *v84; // rcx
  int v85; // r9d
  __int64 v86; // rdi
  int v87; // eax
  int v88; // edx
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // edx
  int v95; // edi
  double v96; // xmm1_8
  int v97; // edx
  double v98; // xmm0_8
  int *v99; // rax
  __int64 v100; // rdi
  double *v101; // rdx
  double v102; // xmm0_8
  double *v103; // rax
  int v104; // eax
  double *v105; // rdx
  double *v106; // rax
  __int128 v107; // xmm2
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm3
  __int64 v111; // rax
  double *v112; // rdx
  double *v113; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // r10
  unsigned __int64 v116; // r8
  _DWORD *v117; // r11
  unsigned int v118; // eax
  unsigned int v119; // r9d
  __int64 v120; // rdi
  unsigned int v121; // edx
  __int64 v122; // rsi
  __int64 v123; // rax
  unsigned int v124; // edx
  signed int v125; // eax
  signed int v126; // eax
  signed int v127; // eax
  signed int v128; // eax
  signed int v129; // eax
  __int64 v130; // rax
  int *v131; // r8
  int *v132; // r11
  __int64 v133; // r9
  __int64 v134; // rdi
  __int64 v135; // rdx
  int *v136; // rdi
  __int64 v137; // rdx
  __int64 v138; // rbp
  int *v139; // rdx
  int v140; // esi
  int *v141; // rdi
  int v142; // esi
  __int64 i; // r15
  int *v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rsi
  int *v147; // rdi
  int v148; // eax
  int v149; // esi
  int *v150; // rdi
  int v151; // esi
  __int64 j; // r15
  int *v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rsi
  int *v156; // rdi
  int v157; // eax
  int v158; // eax
  int v159; // eax
  __m128i v160; // xmm6
  double v161; // xmm3_8
  __m128 v162; // xmm1
  __m128i v163; // xmm0
  unsigned int v164; // r9d
  int v165; // edi
  __int64 v166; // r13
  __int64 v167; // rdx
  __int64 v168; // rsi
  double *v169; // r10
  int v170; // r11d
  unsigned int v171; // edx
  unsigned int v172; // r8d
  __int64 v173; // rax
  unsigned __int64 v174; // rcx
  __int64 v175; // rsi
  __int64 v176; // rax
  signed int v177; // edx
  __int64 v178; // rax
  int v179; // edx
  CoinMessageHandler *v180; // rax
  CoinMessageHandler *v181; // rax
  CoinMessageHandler *v182; // rax
  CoinMessageHandler *v183; // rax
  CoinMessageHandler *v184; // rax
  CoinMessageHandler *v185; // rax
  __int64 v186; // rax
  __int128 v187; // xmm4
  __m128d v188; // xmm0
  int v189; // r8d
  __int64 v190; // rax
  _BOOL4 v191; // esi
  __int64 v192; // rax
  ClpModel *v193; // rdx
  unsigned __int64 v194; // r11
  _BOOL4 v195; // esi
  _BOOL4 v196; // ecx
  __m128d v197; // xmm5
  __int64 v198; // rax
  double v199; // xmm2_8
  __int64 v200; // rsi
  unsigned int v201; // edi
  int v202; // ecx
  int v203; // r13d
  double v204; // xmm8_8
  int v205; // eax
  double v206; // xmm2_8
  double *v207; // rdx
  double *v208; // rax
  __int128 v209; // xmm2
  __int128 v210; // xmm1
  __int128 v211; // xmm0
  __int128 v212; // xmm3
  double *v213; // rax
  double *v214; // rdx
  __int64 v215; // rsi
  double *v216; // rcx
  __int64 v217; // rax
  signed int v218; // eax
  __int64 v219; // rdx
  int v220; // eax
  double *v221; // rdi
  char *v222; // rsi
  __int64 v223; // rax
  CoinMessageHandler *v224; // rax
  CoinMessageHandler *v225; // rax
  CoinMessageHandler *v226; // rax
  CoinMessageHandler *v227; // rax
  CoinMessageHandler *v228; // rax
  CoinMessageHandler *v229; // rax
  __int64 v230; // rax
  int v231; // eax
  int *v232; // rdi
  double v233; // xmm3_8
  unsigned __int64 v234; // rax
  double v235; // xmm0_8
  __m128d v236; // xmm4
  double v237; // xmm1_8
  _BOOL4 v238; // edi
  int v239; // esi
  __int64 v240; // rax
  __m128i v241; // xmm6
  __m128d v242; // xmm10
  unsigned int v243; // edx
  __m128d v244; // xmm11
  __m128d v245; // xmm4
  __m128i v246; // xmm6
  int v247; // eax
  double *v248; // rsi
  int v249; // esi
  double *v250; // rdi
  double v251; // xmm1_8
  int v252; // esi
  double *v253; // rdi
  double v254; // xmm1_8
  int v255; // esi
  double *v256; // rdi
  double *v257; // rsi
  double *v258; // rax
  __int128 v259; // xmm5
  _BOOL4 v260; // ecx
  __m128d *v261; // rax
  __m128i v262; // xmm2
  __m128d v263; // xmm0
  __m128i v264; // xmm2
  int v265; // eax
  __int64 v266; // rsi
  __int64 v267; // rax
  double v268; // xmm0_8
  double v269; // xmm3_8
  double v270; // xmm0_8
  _BYTE *v271; // rcx
  unsigned __int64 v272; // rax
  __int64 v273; // rax
  __m128d v274; // xmm4
  int v275; // eax
  __int64 v276; // rsi
  double v277; // xmm1_8
  int v278; // eax
  double v279; // xmm1_8
  unsigned __int64 v280; // r11
  ClpModel *v281; // rax
  double *v282; // r9
  unsigned __int64 v283; // r10
  __int64 v284; // rax
  __int64 v285; // rdx
  unsigned __int64 v286; // rsi
  unsigned int v287; // r9d
  unsigned int v288; // ecx
  double *v289; // r8
  double *v290; // rdi
  double *v291; // rdx
  __int64 v292; // rax
  signed int v293; // eax
  __int64 v294; // rdx
  int v295; // eax
  double *v296; // rcx
  double *v297; // rdx
  __int64 v298; // rax
  double *v299; // rdx
  double *v300; // rcx
  double *v301; // rax
  int v302; // edi
  unsigned int v303; // ecx
  char *v304; // rsi
  unsigned __int64 v305; // rdx
  __int64 v306; // rax
  __m128d v307; // xmm4
  signed int v308; // eax
  __int64 v309; // rdx
  int v310; // eax
  double *v311; // rcx
  double *v312; // rdx
  __int64 v313; // rax
  double *v314; // rcx
  double *v315; // rdx
  double *v316; // rax
  ClpModel *v317; // r11
  __int64 (__fastcall ***v318)(_QWORD, _QWORD, _QWORD, __int128 *, _QWORD, __int64, double, double, double, double, double, double, double); // rdi
  __int64 v319; // rax
  double v320; // xmm0_8
  unsigned __int64 v321; // rsi
  __int64 v322; // rax
  int v323; // edx
  double v324; // xmm2_8
  int *v325; // r8
  double *v326; // rdi
  __int64 v327; // rax
  double v328; // xmm1_8
  unsigned __int64 v329; // rax
  double v330; // xmm1_8
  int v331; // ecx
  __int64 v332; // rax
  unsigned int v333; // edx
  __m128d v334; // xmm2
  signed int v335; // eax
  __int64 v336; // rcx
  int v337; // eax
  __int64 v338; // rcx
  ClpModel *v339; // r9
  __int64 v340; // rbp
  double *v341; // r8
  double *v342; // r13
  double *v343; // r11
  __int64 v344; // rax
  int v345; // edx
  double v346; // xmm1_8
  char *v347; // r10
  char *v348; // rdi
  __int64 v349; // rax
  __int64 v350; // rsi
  __int64 v351; // rdx
  double v352; // xmm0_8
  unsigned __int64 v353; // rax
  double v354; // xmm0_8
  double v355; // xmm1_8
  double v356; // xmm2_8
  double v357; // xmm2_8
  Idiot *v358; // rbp
  __int64 v359; // rax
  int v360; // r8d
  unsigned int v361; // edx
  __int64 v362; // rsi
  int v363; // r10d
  unsigned int v364; // r9d
  unsigned __int64 v365; // rdi
  __int64 v366; // rsi
  __int64 v367; // rax
  __int64 v368; // rdx
  int v369; // r8d
  unsigned __int64 v370; // rdi
  __int64 v371; // rax
  int v372; // edx
  double v373; // xmm1_8
  int *v374; // r9
  double *v375; // r8
  __int64 v376; // rax
  double v377; // xmm0_8
  int v378; // eax
  _QWORD *v379; // rcx
  _QWORD *v380; // r8
  _QWORD *v381; // rax
  __int64 *v382; // rdx
  __int64 v383; // rdi
  __int64 v384; // xmm0_8
  __int64 v385; // rax
  _QWORD *v386; // rdx
  double *v387; // rsi
  double *v388; // rdx
  _QWORD *v389; // rax
  __int64 v390; // xmm0_8
  __int64 v391; // rax
  __int64 *v392; // r8
  __int64 *v393; // rdx
  __int64 *v394; // rax
  __int64 v395; // rdi
  __int64 v396; // xmm0_8
  __int64 v397; // rax
  double *v398; // rsi
  double *v399; // rax
  __int64 v400; // rdx
  __int64 v401; // xmm0_8
  __int64 v402; // rax
  double *v403; // rdx
  __int64 (__fastcall ***v404)(_QWORD, _QWORD, _QWORD, __int128 *, _QWORD, __int64, double, double, double, double, double, double, double); // rdi
  __int64 v405; // rax
  __int64 (__fastcall ***v406)(_QWORD, _QWORD, _QWORD, __m128i *, _QWORD, __int64, double); // rdi
  __int64 v407; // rax
  __int64 v408; // rdx
  __int64 v409; // rdx
  void *v410; // rax
  unsigned __int64 v411; // rax
  unsigned __int64 v412; // rax
  unsigned __int64 v413; // rax
  unsigned __int64 v414; // rax
  double *v415; // rdx
  double *v416; // rax
  __int128 v417; // xmm2
  __int128 v418; // xmm1
  __int128 v419; // xmm0
  __int128 v420; // xmm3
  double *v421; // rax
  double *v422; // rdx
  __int64 v423; // rax
  double *v424; // rdx
  _QWORD *v425; // r13
  __int64 v426; // rsi
  __int64 v427; // rax
  __int64 v428; // xmm0_8
  __int64 v429; // rax
  _QWORD *v430; // rax
  double *v431; // rdx
  __int64 v432; // rsi
  __int64 v433; // rax
  __int64 v434; // xmm0_8
  __int64 v435; // rax
  _QWORD *v436; // rax
  _QWORD *v437; // rdx
  __int64 v438; // rsi
  __int64 *v439; // rax
  __int64 v440; // xmm0_8
  __int64 v441; // rax
  _QWORD *v442; // rax
  __int64 v443; // rax
  double v444; // xmm0_8
  double v445; // xmm1_8
  double v446; // xmm1_8
  ClpModel *v447; // r8
  __int64 v448; // rdx
  unsigned __int64 *v449; // rsi
  __int64 v450; // rdi
  unsigned __int64 v451; // rax
  unsigned __int64 *v452; // rdx
  double *v453; // rdx
  __int64 v454; // rdi
  unsigned __int64 *v455; // rax
  double v456; // xmm0_8
  __int64 v457; // rax
  _QWORD *v458; // rax
  unsigned __int64 *v459; // rdx
  double *v460; // rsi
  __int64 v461; // rdi
  double *v462; // rax
  double v463; // xmm0_8
  __int64 v464; // rax
  _QWORD *v465; // rax
  __int64 v466; // rdx
  unsigned __int64 v467; // rax
  double v468; // xmm1_8
  double v469; // xmm0_8
  double v470; // xmm1_8
  double v471; // xmm1_8
  unsigned __int64 v472; // rax
  double *v473; // r14
  __int64 v474; // rax
  double v475; // xmm1_8
  int v476; // edx
  int v477; // eax
  __int64 v478; // rsi
  int *v479; // rdi
  __int64 v480; // rdx
  double *v481; // r8
  int *v482; // rdx
  __int64 v483; // rax
  int v484; // [rsp+0h] [rbp-3A8h]
  int v485; // [rsp+4h] [rbp-3A4h]
  double *v486; // [rsp+8h] [rbp-3A0h]
  ClpModel *v487; // [rsp+10h] [rbp-398h]
  int v488; // [rsp+10h] [rbp-398h]
  int v489; // [rsp+10h] [rbp-398h]
  ClpModel *v490; // [rsp+10h] [rbp-398h]
  ClpModel *v491; // [rsp+10h] [rbp-398h]
  ClpModel *v492; // [rsp+10h] [rbp-398h]
  double *v493; // [rsp+18h] [rbp-390h]
  double *v494; // [rsp+18h] [rbp-390h]
  double *v495; // [rsp+18h] [rbp-390h]
  double *v496; // [rsp+20h] [rbp-388h]
  double *v497; // [rsp+20h] [rbp-388h]
  signed __int64 v498; // [rsp+28h] [rbp-380h]
  double v499; // [rsp+28h] [rbp-380h]
  int v500; // [rsp+28h] [rbp-380h]
  int v501; // [rsp+30h] [rbp-378h]
  int v502; // [rsp+30h] [rbp-378h]
  double *v503; // [rsp+38h] [rbp-370h]
  int *v504; // [rsp+38h] [rbp-370h]
  double *v505; // [rsp+38h] [rbp-370h]
  double *v506; // [rsp+38h] [rbp-370h]
  double *v507; // [rsp+38h] [rbp-370h]
  double *v508; // [rsp+38h] [rbp-370h]
  double v509; // [rsp+40h] [rbp-368h]
  int v510; // [rsp+40h] [rbp-368h]
  int v511; // [rsp+40h] [rbp-368h]
  double v512; // [rsp+40h] [rbp-368h]
  Idiot *v513; // [rsp+40h] [rbp-368h]
  size_t v514; // [rsp+48h] [rbp-360h]
  int v515; // [rsp+48h] [rbp-360h]
  int v516; // [rsp+48h] [rbp-360h]
  double v517; // [rsp+50h] [rbp-358h]
  double *v518; // [rsp+50h] [rbp-358h]
  __int64 s; // [rsp+58h] [rbp-350h]
  double v520; // [rsp+60h] [rbp-348h]
  int v521; // [rsp+68h] [rbp-340h]
  unsigned __int64 v522; // [rsp+70h] [rbp-338h]
  double v523; // [rsp+78h] [rbp-330h]
  _QWORD *v524; // [rsp+80h] [rbp-328h]
  void *v525; // [rsp+80h] [rbp-328h]
  void *v526; // [rsp+80h] [rbp-328h]
  void *v527; // [rsp+80h] [rbp-328h]
  __int64 v528; // [rsp+80h] [rbp-328h]
  double *v529; // [rsp+88h] [rbp-320h]
  __int64 v530; // [rsp+90h] [rbp-318h]
  int *v531; // [rsp+90h] [rbp-318h]
  int *v532; // [rsp+90h] [rbp-318h]
  int *v533; // [rsp+90h] [rbp-318h]
  __int64 v534; // [rsp+A0h] [rbp-308h]
  __int64 v535; // [rsp+A0h] [rbp-308h]
  int *v536; // [rsp+A0h] [rbp-308h]
  __int64 v537; // [rsp+A0h] [rbp-308h]
  __int64 v538; // [rsp+A0h] [rbp-308h]
  int *v539; // [rsp+A0h] [rbp-308h]
  double v540; // [rsp+A8h] [rbp-300h]
  double v541; // [rsp+A8h] [rbp-300h]
  int v542; // [rsp+B0h] [rbp-2F8h]
  int *v543; // [rsp+B0h] [rbp-2F8h]
  int *v544; // [rsp+B0h] [rbp-2F8h]
  int *v545; // [rsp+B0h] [rbp-2F8h]
  void *v546; // [rsp+C0h] [rbp-2E8h]
  __int64 v547; // [rsp+C0h] [rbp-2E8h]
  double v548; // [rsp+C8h] [rbp-2E0h]
  double v549; // [rsp+D0h] [rbp-2D8h]
  unsigned int v550; // [rsp+D0h] [rbp-2D8h]
  int *v551; // [rsp+D0h] [rbp-2D8h]
  double *v552; // [rsp+D0h] [rbp-2D8h]
  int *v553; // [rsp+D8h] [rbp-2D0h]
  double v554; // [rsp+D8h] [rbp-2D0h]
  __int64 v555; // [rsp+D8h] [rbp-2D0h]
  double v556; // [rsp+E0h] [rbp-2C8h]
  double v557; // [rsp+E8h] [rbp-2C0h]
  _DWORD *v558; // [rsp+E8h] [rbp-2C0h]
  int v559; // [rsp+F0h] [rbp-2B8h]
  int v560; // [rsp+F4h] [rbp-2B4h]
  int v561; // [rsp+F8h] [rbp-2B0h]
  int v562; // [rsp+F8h] [rbp-2B0h]
  __int64 v563; // [rsp+F8h] [rbp-2B0h]
  int v564; // [rsp+100h] [rbp-2A8h]
  int v565; // [rsp+100h] [rbp-2A8h]
  void *v566; // [rsp+100h] [rbp-2A8h]
  bool v567; // [rsp+108h] [rbp-2A0h]
  double *v568; // [rsp+108h] [rbp-2A0h]
  double v569; // [rsp+110h] [rbp-298h]
  __int64 v570; // [rsp+118h] [rbp-290h]
  int v571; // [rsp+128h] [rbp-280h]
  unsigned int v572; // [rsp+12Ch] [rbp-27Ch]
  double *v573; // [rsp+138h] [rbp-270h]
  double *v574; // [rsp+140h] [rbp-268h]
  int v576; // [rsp+150h] [rbp-258h]
  int v577; // [rsp+154h] [rbp-254h]
  __int64 v578; // [rsp+158h] [rbp-250h]
  __int64 v579; // [rsp+160h] [rbp-248h]
  int v580; // [rsp+168h] [rbp-240h]
  int v581; // [rsp+16Ch] [rbp-23Ch]
  double v582; // [rsp+178h] [rbp-230h]
  size_t n; // [rsp+180h] [rbp-228h]
  double *v584; // [rsp+188h] [rbp-220h]
  unsigned int v585; // [rsp+190h] [rbp-218h]
  int v586; // [rsp+194h] [rbp-214h]
  __int64 v587; // [rsp+198h] [rbp-210h]
  int v588; // [rsp+1A0h] [rbp-208h]
  unsigned int v589; // [rsp+1A4h] [rbp-204h]
  int v590; // [rsp+1A8h] [rbp-200h]
  unsigned int v591; // [rsp+1ACh] [rbp-1FCh]
  int v592; // [rsp+1B0h] [rbp-1F8h]
  int v593; // [rsp+1B0h] [rbp-1F8h]
  int v594; // [rsp+1B4h] [rbp-1F4h]
  unsigned __int64 v595; // [rsp+1B8h] [rbp-1F0h]
  CoinMessages *v596; // [rsp+1C0h] [rbp-1E8h]
  int v597; // [rsp+1C8h] [rbp-1E0h]
  unsigned int v598; // [rsp+1CCh] [rbp-1DCh]
  unsigned int v599; // [rsp+1D0h] [rbp-1D8h]
  int v600; // [rsp+1D4h] [rbp-1D4h]
  __int64 v601; // [rsp+1D8h] [rbp-1D0h]
  unsigned int v602; // [rsp+1E4h] [rbp-1C4h]
  double *v603; // [rsp+1E8h] [rbp-1C0h]
  double v604; // [rsp+1F0h] [rbp-1B8h]
  int v605; // [rsp+1F8h] [rbp-1B0h]
  unsigned int v606; // [rsp+1FCh] [rbp-1ACh]
  double v607; // [rsp+200h] [rbp-1A8h]
  int v608; // [rsp+208h] [rbp-1A0h]
  unsigned int v609; // [rsp+20Ch] [rbp-19Ch]
  unsigned int v610; // [rsp+21Ch] [rbp-18Ch]
  unsigned int v611; // [rsp+228h] [rbp-180h]
  int v612; // [rsp+22Ch] [rbp-17Ch]
  unsigned __int64 v613; // [rsp+238h] [rbp-170h]
  __int64 v614; // [rsp+240h] [rbp-168h]
  int v615; // [rsp+248h] [rbp-160h]
  unsigned int v616; // [rsp+258h] [rbp-150h]
  unsigned int v617; // [rsp+25Ch] [rbp-14Ch]
  char v618; // [rsp+262h] [rbp-146h]
  char v619; // [rsp+263h] [rbp-145h]
  int v620; // [rsp+264h] [rbp-144h]
  __int64 v621; // [rsp+268h] [rbp-140h]
  int v622; // [rsp+270h] [rbp-138h]
  int v623; // [rsp+274h] [rbp-134h]
  __int64 v624; // [rsp+278h] [rbp-130h]
  int v625[4]; // [rsp+280h] [rbp-128h] BYREF
  __m128i v626; // [rsp+290h] [rbp-118h] BYREF
  __m128i v627; // [rsp+2A0h] [rbp-108h] BYREF
  __m128i v628; // [rsp+2B0h] [rbp-F8h] BYREF
  int v629; // [rsp+2C4h] [rbp-E4h] BYREF
  double v630; // [rsp+2C8h] [rbp-E0h] BYREF
  __int64 v631; // [rsp+2D4h] [rbp-D4h]
  int v632; // [rsp+2DCh] [rbp-CCh]
  __int128 v633; // [rsp+2E0h] [rbp-C8h] BYREF
  __m128i v634; // [rsp+2F0h] [rbp-B8h] BYREF
  __m128i v635; // [rsp+300h] [rbp-A8h] BYREF
  __m128i v636; // [rsp+310h] [rbp-98h] BYREF
  __m128i v637; // [rsp+320h] [rbp-88h] BYREF
  __m128i v638; // [rsp+330h] [rbp-78h] BYREF
  __m128i v639; // [rsp+340h] [rbp-68h]
  __m128i v640; // [rsp+350h] [rbp-58h]
  __m128i v641; // [rsp+360h] [rbp-48h]

  v597 = *((_DWORD *)this + 28);
  v559 = *((_DWORD *)this + 29);
  v590 = *((_DWORD *)this + 31);
  v620 = *((_DWORD *)this + 30);
  *((_DWORD *)this + 30) = v620 % 1000000;
  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 26);
    v6 = v5 == 0;
    if ( v5 <= 0 )
    {
      v159 = 7;
      if ( v6 )
        v159 = *((_DWORD *)a2 + 26);
      v590 = v159;
    }
    else
    {
      v7 = v5 <= 2;
      v8 = 1;
      if ( !v7 )
        v8 = 7;
      v590 = v8;
    }
  }
  v9 = *((double *)this + 1);
  v10 = *((_DWORD *)this + 35);
  v11 = *((double *)this + 4);
  v629 = 0;
  v540 = v9;
  v631 = 0x200000000LL;
  v632 = 128;
  v592 = v10;
  v607 = v11;
  v509 = *((double *)this + 2);
  v523 = *((double *)this + 3);
  v501 = *((_DWORD *)this + 36);
  v548 = *((double *)this + 7);
  v517 = *((double *)this + 6);
  v520 = *((double *)this + 5);
  v604 = *((double *)this + 8);
  v556 = 1.0e-10;
  if ( (v501 & 0x80u) == 0 )
    v556 = 0.000001;
  v12 = *(_QWORD *)this;
  v13 = *(_QWORD *)(*(_QWORD *)this + 192LL);
  if ( !v13 )
    BUG();
  v596 = a3;
  v14 = this;
  v15 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v13;
  if ( v15 == ClpPackedMatrix::getPackedMatrix )
  {
    v16 = *(_QWORD **)(v13 + 88);
    v524 = v16;
  }
  else
  {
    v524 = (_QWORD *)v15((ClpPackedMatrix *)v13);
    v12 = *(_QWORD *)this;
    v16 = v524;
  }
  v17 = v16[4];
  v18 = 0;
  v534 = v16[5];
  v530 = v16[6];
  v487 = (ClpModel *)v16[7];
  v19 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __m128i *, _QWORD, __int64))(v12 + 160);
  v484 = *(_DWORD *)(v12 + 104);
  v485 = *(_DWORD *)(v12 + 108);
  if ( v19 )
  {
    v18 = (**v19)(v19, 0, 0, &v638, 0, 2);
    v12 = *(_QWORD *)v14;
  }
  v496 = *(double **)(v12 + 184);
  v493 = *(double **)(v12 + 176);
  if ( (unsigned __int64)v484 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_770;
  n = 8LL * v484;
  v20 = (double *)operator new[](n);
  v21 = *(unsigned __int64 **)(*(_QWORD *)v14 + 152LL);
  if ( v20 != (double *)v21 && v484 )
  {
    if ( v484 >> 3 <= 0 )
    {
      v27 = v20;
    }
    else
    {
      v22 = v20;
      v23 = *(double **)(*(_QWORD *)v14 + 152LL);
      v24 = (unsigned int)((v484 >> 3) - 1);
      do
      {
        v25 = *v23;
        v22 += 8;
        v23 += 8;
        *(v22 - 8) = v25;
        *(v22 - 7) = *(v23 - 7);
        *(v22 - 6) = *(v23 - 6);
        *(v22 - 5) = *(v23 - 5);
        *(v22 - 4) = *(v23 - 4);
        *(v22 - 3) = *(v23 - 3);
        *(v22 - 2) = *(v23 - 2);
        a4.m128i_i64[0] = *(__int64 *)(v23 - 1);
        *(v22 - 1) = *(double *)a4.m128i_i64;
      }
      while ( v22 != &v20[8 * v24 + 8] );
      v26 = ((int)v24 + 1LL) << 6;
      v21 = (unsigned __int64 *)((char *)v21 + v26);
      v27 = (_QWORD *)((char *)v20 + v26);
    }
    switch ( v484 % 8 )
    {
      case 1:
        goto LABEL_28;
      case 2:
        goto LABEL_27;
      case 3:
        goto LABEL_26;
      case 4:
        goto LABEL_25;
      case 5:
        goto LABEL_24;
      case 6:
        goto LABEL_23;
      case 7:
        v27[6] = v21[6];
LABEL_23:
        v27[5] = v21[5];
LABEL_24:
        v27[4] = v21[4];
LABEL_25:
        v27[3] = v21[3];
LABEL_26:
        v27[2] = v21[2];
LABEL_27:
        v27[1] = v21[1];
LABEL_28:
        a4.m128i_i64[0] = *v21;
        *v27 = *v21;
        break;
      default:
        break;
    }
  }
  v28 = (double *)operator new[](n);
  v29 = *(_QWORD *)v14;
  v30 = v28;
  v31 = *(unsigned __int64 **)(*(_QWORD *)v14 + 144LL);
  if ( v28 != (double *)v31 && v484 )
  {
    if ( v484 >> 3 > 0 )
    {
      v32 = *(double **)(*(_QWORD *)v14 + 144LL);
      v33 = (unsigned int)((v484 >> 3) - 1);
      v34 = &v28[8 * v33 + 8];
      do
      {
        v35 = *v32;
        v28 += 8;
        v32 += 8;
        *(v28 - 8) = v35;
        *(v28 - 7) = *(v32 - 7);
        *(v28 - 6) = *(v32 - 6);
        *(v28 - 5) = *(v32 - 5);
        *(v28 - 4) = *(v32 - 4);
        *(v28 - 3) = *(v32 - 3);
        *(v28 - 2) = *(v32 - 2);
        a4.m128i_i64[0] = *(__int64 *)(v32 - 1);
        *(v28 - 1) = *(double *)a4.m128i_i64;
      }
      while ( v28 != v34 );
      v36 = ((int)v33 + 1LL) << 6;
      v31 = (unsigned __int64 *)((char *)v31 + v36);
      v28 = (double *)((char *)v30 + v36);
    }
    switch ( v484 % 8 )
    {
      case 1:
        goto LABEL_42;
      case 2:
        goto LABEL_41;
      case 3:
        goto LABEL_40;
      case 4:
        goto LABEL_39;
      case 5:
        goto LABEL_38;
      case 6:
        goto LABEL_37;
      case 7:
        *((_QWORD *)v28 + 6) = v31[6];
LABEL_37:
        *((_QWORD *)v28 + 5) = v31[5];
LABEL_38:
        *((_QWORD *)v28 + 4) = v31[4];
LABEL_39:
        *((_QWORD *)v28 + 3) = v31[3];
LABEL_40:
        *((_QWORD *)v28 + 2) = v31[2];
LABEL_41:
        *((_QWORD *)v28 + 1) = v31[1];
LABEL_42:
        a4.m128i_i64[0] = *v31;
        *(_QWORD *)v28 = *v31;
        break;
      default:
        break;
    }
  }
  v570 = v29 + 356;
  if ( (unsigned __int64)v485 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_770;
  v514 = 8LL * v485;
  v574 = (double *)operator new[](v514);
  s = operator new[](n);
  v37 = operator new[](n);
  v38 = (double *)operator new[](v514);
  v486 = v38;
  v39 = v485;
  v40 = *(unsigned __int64 **)(*(_QWORD *)v14 + 120LL);
  if ( v38 != (double *)v40 && v485 )
  {
    if ( v485 >> 3 > 0 )
    {
      v41 = *(double **)(*(_QWORD *)v14 + 120LL);
      v42 = (unsigned int)((v485 >> 3) - 1);
      v43 = &v38[8 * v42 + 8];
      do
      {
        v44 = *v41;
        v38 += 8;
        v41 += 8;
        *(v38 - 8) = v44;
        *(v38 - 7) = *(v41 - 7);
        *(v38 - 6) = *(v41 - 6);
        *(v38 - 5) = *(v41 - 5);
        *(v38 - 4) = *(v41 - 4);
        *(v38 - 3) = *(v41 - 3);
        *(v38 - 2) = *(v41 - 2);
        a4.m128i_i64[0] = *(__int64 *)(v41 - 1);
        *(v38 - 1) = *(double *)a4.m128i_i64;
      }
      while ( v38 != v43 );
      v39 = v485;
      v45 = ((int)v42 + 1LL) << 6;
      v40 = (unsigned __int64 *)((char *)v40 + v45);
      v38 = (double *)((char *)v486 + v45);
    }
    switch ( v39 % 8 )
    {
      case 1:
        goto LABEL_57;
      case 2:
        goto LABEL_56;
      case 3:
        goto LABEL_55;
      case 4:
        goto LABEL_54;
      case 5:
        goto LABEL_53;
      case 6:
        goto LABEL_52;
      case 7:
        *((_QWORD *)v38 + 6) = v40[6];
LABEL_52:
        *((_QWORD *)v38 + 5) = v40[5];
LABEL_53:
        *((_QWORD *)v38 + 4) = v40[4];
LABEL_54:
        *((_QWORD *)v38 + 3) = v40[3];
LABEL_55:
        *((_QWORD *)v38 + 2) = v40[2];
LABEL_56:
        *((_QWORD *)v38 + 1) = v40[1];
LABEL_57:
        a4.m128i_i64[0] = *v40;
        *(_QWORD *)v38 = *v40;
        break;
      default:
        break;
    }
  }
  v522 = operator new[](n);
  v529 = (double *)operator new[](v514);
  v46 = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
  if ( v46 > 0 )
  {
    v47 = (unsigned int)(v46 - 1);
    v48 = 0;
    v49 = v47 + 1;
    do
    {
      *(double *)a4.m128i_i64 = v496[v48];
      if ( *(double *)a4.m128i_i64 == v493[v48] )
        *(_BYTE *)(v48 + *(_QWORD *)(*(_QWORD *)v14 + 264LL)) = *(_BYTE *)(v48 + *(_QWORD *)(*(_QWORD *)v14 + 264LL))
                                                              & 0xF8
                                                              | 5;
      ++v48;
    }
    while ( v48 != v49 );
  }
  v50 = *((void **)v14 + 13);
  if ( v50 )
    operator delete[](v50);
  if ( v485 <= 0 )
  {
    v589 = v485 - 1;
LABEL_94:
    v498 = 4LL * v485;
    v66 = operator new[](v498);
    *((_QWORD *)v14 + 13) = v66;
    v619 = 0;
    goto LABEL_95;
  }
  v589 = v485 - 1;
  v51 = -(int)((unsigned __int64)v487 >> 2) & 3;
  v52 = v51 + 3;
  if ( (unsigned int)(v51 + 3) < 5 )
    v52 = 5;
  if ( v52 > v485 - 1 )
  {
    v62 = 0;
    v63 = 0;
  }
  else
  {
    if ( (_DWORD)v51 )
    {
      v53 = 1;
      v54 = *(_DWORD *)v487 == 1;
      if ( (_DWORD)v51 != 1 )
      {
        v53 = 2;
        v54 += *((_DWORD *)v487 + 1) == 1;
        if ( (_DWORD)v51 != 2 )
        {
          v53 = 3;
          v54 += *((_DWORD *)v487 + 2) == 1;
        }
      }
    }
    else
    {
      v54 = 0;
      v53 = 0;
    }
    v55 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v57 = v485 - v51;
    v58 = (const __m128i *)((char *)v487 + 4 * v51);
    v59 = 0;
    do
    {
      v60 = _mm_load_si128(v58);
      ++v59;
      ++v58;
      v55 = _mm_sub_epi32(v55, _mm_cmpeq_epi32(v60, si128));
    }
    while ( v57 >> 2 > v59 );
    v61 = _mm_add_epi32(v55, _mm_srli_si128(v55, 8));
    a4 = _mm_srli_si128(v61, 4);
    v62 = v54 + _mm_cvtsi128_si32(_mm_add_epi32(v61, a4));
    v63 = (v57 & 0xFFFFFFFC) + v53;
    if ( (v57 & 0xFFFFFFFC) == v57 )
      goto LABEL_92;
  }
  if ( *((_DWORD *)v487 + v63) == 1 )
    ++v62;
  if ( v485 > v63 + 1 )
  {
    if ( *((_DWORD *)v487 + v63 + 1) == 1 )
    {
      ++v62;
      v64 = v63 + 2;
      if ( v485 > v63 + 2 )
        goto LABEL_81;
    }
    else
    {
      v64 = v63 + 2;
      if ( v485 > v63 + 2 )
      {
LABEL_81:
        if ( *((_DWORD *)v487 + v64) == 1 )
          ++v62;
        if ( v485 > v63 + 3 )
        {
          if ( *((_DWORD *)v487 + v63 + 3) == 1 )
            ++v62;
          if ( v485 > v63 + 4 )
          {
            if ( *((_DWORD *)v487 + v63 + 4) == 1 )
              ++v62;
            v65 = v63 + 5;
            if ( v485 > v65 && *((_DWORD *)v487 + v65) == 1 )
              ++v62;
          }
        }
      }
    }
  }
LABEL_92:
  if ( !v62 )
    goto LABEL_94;
  v542 = *((_DWORD *)v14 + 36) & 0x80000;
  if ( v542 )
    goto LABEL_94;
  v114 = (int)((n >> 2) + 2 * (v485 + v484));
  if ( v114 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_770;
  v115 = operator new[](4 * v114);
  *((_QWORD *)v14 + 13) = v115;
  v116 = v115 + 4LL * v485;
  v498 = 4LL * v485;
  v117 = (_DWORD *)(v116 + 4LL * v484);
  if ( v484 <= 0 )
  {
    v547 = v485 + (__int64)v484;
  }
  else
  {
    v547 = v484 + (__int64)v485;
    if ( (v498 >= 4 * v547 + 16 || 4 * v547 >= v498 + 16) && (unsigned int)v484 > 0xE )
    {
      v118 = -(int)(v116 >> 2) & 3;
      if ( v118 )
      {
        *(_DWORD *)v116 = -1;
        v542 = 1;
        *v117 = -1;
        if ( v118 != 1 )
        {
          *(_DWORD *)(v116 + 4) = -1;
          v542 = 2;
          v117[1] = -1;
          if ( v118 != 2 )
          {
            *(_DWORD *)(v116 + 8) = -1;
            v542 = 3;
            v117[2] = -1;
          }
        }
      }
      a4.m128i_i64[0] = -1;
      v550 = v484 - v118;
      v119 = (v484 - v118) >> 2;
      v120 = v115 + 4 * (v118 + (__int64)v485);
      v121 = 0;
      v122 = v115 + 4 * (v118 + v547);
      v123 = 0;
      do
      {
        ++v121;
        *(_OWORD *)(v120 + v123) = -1;
        *(_OWORD *)(v122 + v123) = -1;
        v123 += 16;
      }
      while ( v119 > v121 );
      v124 = (v550 & 0xFFFFFFFC) + v542;
      if ( (v550 & 0xFFFFFFFC) != v550 )
      {
        *(_DWORD *)(v116 + 4LL * (int)v124) = -1;
        v117[v124] = -1;
        v125 = v124 + 1;
        if ( (int)(v124 + 1) < v484 )
        {
          *(_DWORD *)(v116 + 4LL * v125) = -1;
          v117[v125] = -1;
          v126 = v124 + 2;
          if ( (int)(v124 + 2) < v484 )
          {
            *(_DWORD *)(v116 + 4LL * v126) = -1;
            v117[v126] = -1;
            v127 = v124 + 3;
            if ( v484 > (int)(v124 + 3) )
            {
              *(_DWORD *)(v116 + 4LL * v127) = -1;
              v117[v127] = -1;
              v128 = v124 + 4;
              if ( v484 > (int)(v124 + 4) )
              {
                *(_DWORD *)(v116 + 4LL * v128) = -1;
                v117[v128] = -1;
                v129 = v124 + 5;
                if ( v484 > (int)(v124 + 5) )
                {
                  *(_DWORD *)(v116 + 4LL * v129) = -1;
                  v117[v129] = -1;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v414 = 0;
      do
      {
        *(_DWORD *)(v116 + v414) = -1;
        v117[v414 / 4] = -1;
        v414 += 4LL;
      }
      while ( v414 != 4LL * (unsigned int)(v484 - 1) + 4 );
    }
  }
  v558 = &v117[v484];
  v553 = (int *)(v116 + 4LL * v484);
  v551 = (int *)(v115 + 4LL * v485);
  v505 = (double *)v115;
  memset((void *)(v115 + 4 * (v484 + v547)), 255, 4 * (v589 + 1LL));
  v130 = 0;
  v131 = v551;
  v132 = v553;
  v133 = v589 + 1LL;
  do
  {
    while ( *((_DWORD *)v487 + v130) != 1 )
    {
LABEL_170:
      if ( v133 == ++v130 )
        goto LABEL_175;
    }
    v134 = *(int *)(v530 + 4 * v130);
    a4.m128i_i64[0] = *(_QWORD *)(v17 + 8 * v134);
    v135 = *(int *)(v534 + 4 * v134);
    if ( *(double *)a4.m128i_i64 > 0.0 )
    {
      v136 = &v551[v135];
      v137 = v551[v135];
      if ( (_DWORD)v137 == -1 )
        goto LABEL_174;
      do
      {
        v232 = &v558[v137];
        v137 = *v232;
      }
      while ( (int)v137 >= 0 );
      goto LABEL_292;
    }
    v136 = &v553[v135];
    v408 = v553[v135];
    if ( (_DWORD)v408 != -1 )
    {
      do
      {
        v232 = &v558[v408];
        v409 = *v232;
        if ( (int)v409 < 0 )
          break;
        v232 = &v558[v409];
        v408 = *v232;
      }
      while ( (int)v408 >= 0 );
LABEL_292:
      *v232 = v130;
      goto LABEL_170;
    }
LABEL_174:
    *v136 = v130++;
  }
  while ( v133 != v130 );
LABEL_175:
  v66 = (__int64)v505;
  if ( v484 > 0 )
  {
    v506 = (double *)v14;
    v138 = v530;
    v139 = (int *)v66;
    v552 = v30;
    v490 = (ClpModel *)&v131[v484 - 1 + 1];
    while ( 1 )
    {
      v140 = *v131;
      if ( *v131 >= 0 )
      {
        v141 = &v558[v140];
        *(double *)a4.m128i_i64 = *(double *)(v18 + 8LL * v140) / *(double *)(v17 + 8LL * *(int *)(v138 + 4LL * v140));
        *v529 = *(double *)a4.m128i_i64;
        *v139 = v140;
        v142 = *v141;
        if ( *v141 < 0 )
        {
          *v141 = -2;
          v545 = v132;
          v539 = v131;
          CoinSort_2<double,int>(v529, v529 + 1, v139);
          v131 = v539;
          v132 = v545;
          v139 = *((int **)v506 + 13);
          *v539 = *v139;
        }
        else
        {
          for ( i = 2; ; ++i )
          {
            *(double *)a4.m128i_i64 = *(double *)(v18 + 8LL * v142)
                                    / *(double *)(v17 + 8LL * *(int *)(v138 + 4LL * v142));
            v529[i - 1] = *(double *)a4.m128i_i64;
            v139[i - 1] = v142;
            v142 = v558[v142];
            if ( v142 < 0 )
              break;
          }
          v144 = v139;
          do
          {
            v145 = *v144++;
            v558[v145] = -2;
          }
          while ( v144 != &v139[(unsigned int)(i - 1) + 1] );
          v536 = v131;
          v532 = v132;
          CoinSort_2<double,int>(v529, &v529[(int)i], v139);
          v131 = v536;
          v132 = v532;
          v139 = *((int **)v506 + 13);
          v146 = *v139;
          v147 = v139 + 1;
          *v536 = v146;
          do
          {
            v148 = *v147++;
            v558[v146] = v148;
            v146 = v148;
          }
          while ( v147 != &v139[(unsigned int)(i - 2) + 2] );
        }
      }
      v149 = *v132;
      if ( *v132 < 0 )
        goto LABEL_195;
      v150 = &v558[v149];
      *(double *)a4.m128i_i64 = -*(double *)(v18 + 8LL * v149) / *(double *)(v17 + 8LL * *(int *)(v138 + 4LL * v149));
      *v529 = *(double *)a4.m128i_i64;
      *v139 = v149;
      v151 = *v150;
      if ( *v150 < 0 )
      {
        *v150 = -2;
        v544 = v132;
        v538 = (__int64)v131;
        CoinSort_2<double,int>(v529, v529 + 1, v139);
        v139 = *((int **)v506 + 13);
        v132 = v544 + 1;
        v131 = (int *)(v538 + 4);
        *v544 = *v139;
        if ( (ClpModel *)(v538 + 4) == v490 )
        {
LABEL_196:
          v30 = v552;
          v66 = (__int64)v139;
          v14 = (Idiot *)v506;
          v619 = 1;
          goto LABEL_95;
        }
      }
      else
      {
        for ( j = 2; ; ++j )
        {
          *(double *)a4.m128i_i64 = -*(double *)(v18 + 8LL * v151)
                                  / *(double *)(v17 + 8LL * *(int *)(v138 + 4LL * v151));
          v529[j - 1] = *(double *)a4.m128i_i64;
          v139[j - 1] = v151;
          v151 = v558[v151];
          if ( v151 < 0 )
            break;
        }
        v153 = v139;
        do
        {
          v154 = *v153++;
          v558[v154] = -2;
        }
        while ( v153 != &v139[(unsigned int)(j - 1) + 1] );
        v537 = (__int64)v131;
        v533 = v132;
        CoinSort_2<double,int>(v529, &v529[(int)j], v139);
        v132 = v533;
        v131 = (int *)v537;
        v139 = *((int **)v506 + 13);
        v155 = *v139;
        v156 = v139 + 1;
        *v533 = v155;
        do
        {
          v157 = *v156++;
          v558[v155] = v157;
          v155 = v157;
        }
        while ( v156 != &v139[(unsigned int)(j - 2) + 2] );
LABEL_195:
        ++v131;
        ++v132;
        if ( v131 == (int *)v490 )
          goto LABEL_196;
      }
    }
  }
  v619 = 1;
LABEL_95:
  v67 = *(_QWORD *)v14;
  v549 = -1.0;
  if ( **(double **)v14 != -1.0 )
    v549 = 1.0;
  v68 = v592;
  v69 = *(double *)(v67 + 40);
  if ( !v592 )
    v68 = v559;
  v546 = (void *)v66;
  v503 = *(double **)v14;
  v557 = *(double *)(v67 + 40);
  v593 = v68;
  v488 = *((_DWORD *)v14 + 36) & 3;
  memset((void *)s, 0, n);
  v70 = sub_1994E0((__int64)v503);
  v71 = v70 == 0;
  v72 = v70;
  v73 = v546;
  v543 = (int *)v524[5];
  v531 = (int *)v524[6];
  v535 = v524[7];
  v603 = (double *)v524[4];
  if ( v70 < 0 )
  {
    v560 = 0;
    v571 = v485;
  }
  else
  {
    v74 = 0;
    if ( v71 )
    {
      v72 = v485;
      v74 = v484;
    }
    v571 = v72;
    v560 = v74;
  }
  if ( v69 != 0.0 && v590 > 2 )
  {
    *(double *)a4.m128i_i64 = v69;
    printf("** Objective offset is %g\n", v69);
    v73 = v546;
  }
  if ( v484 > 0 )
  {
    v75 = (v37 >> 3) & 1;
    if ( (unsigned int)(v484 - 1) <= 4 )
    {
      v80 = 0;
      goto LABEL_113;
    }
    v76 = 0;
    if ( (_DWORD)v75 )
    {
      v76 = 1;
      *(_QWORD *)v37 = 0x465F8DEF8808B024LL;
    }
    v77 = v37 + 8 * v75;
    a4.m128i_i64[0] = 0x465F8DEF8808B024LL;
    v78 = v484 - v75;
    v79 = 0;
    do
    {
      ++v79;
      v77 += 16LL;
      *(_OWORD *)(v77 - 16) = xmmword_2946C0;
    }
    while ( v78 >> 1 > v79 );
    v80 = (v78 & 0xFFFFFFFE) + v76;
    if ( (v78 & 0xFFFFFFFE) != v78 )
    {
LABEL_113:
      a4.m128i_i64[0] = 0x465F8DEF8808B024LL;
      *(_QWORD *)(v37 + 8LL * v80) = 0x465F8DEF8808B024LL;
      if ( v80 + 1 < v484 )
      {
        *(_QWORD *)(v37 + 8LL * (v80 + 1)) = 0x465F8DEF8808B024LL;
        if ( v484 > v80 + 2 )
        {
          *(_QWORD *)(v37 + 8LL * (v80 + 2)) = 0x465F8DEF8808B024LL;
          v81 = v80 + 3;
          if ( v484 > v80 + 3 )
          {
            v82 = v80 + 4;
            *(_QWORD *)(v37 + 8LL * v81) = 0x465F8DEF8808B024LL;
            if ( v82 < v484 )
              *(_QWORD *)(v37 + 8LL * v82) = 0x465F8DEF8808B024LL;
          }
        }
      }
    }
  }
  v83 = *((_DWORD *)v14 + 36);
  if ( v485 <= 0 )
  {
    v618 = 0;
    v504 = nullptr;
    if ( (v83 & 0x20000) == 0 )
      goto LABEL_137;
LABEL_607:
    v406 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __m128i *, _QWORD, __int64, double))(*(_QWORD *)v14
                                                                                                  + 160LL);
    if ( v406 )
    {
      v526 = v73;
      v407 = (**v406)(v406, 0, 0, &v638, 0, 2, *(double *)a4.m128i_i64);
      v73 = v526;
      if ( v18 != v407 )
        goto LABEL_609;
    }
    else if ( v18 )
    {
      goto LABEL_609;
    }
    if ( v18 )
    {
      v527 = v73;
      v410 = (void *)operator new[](v514);
      v18 = (__int64)memcpy(v410, (const void *)v18, v514);
      v73 = v527;
    }
LABEL_609:
    if ( v485 > 0 )
      goto LABEL_130;
    if ( v484 > 0 )
      goto LABEL_138;
    goto LABEL_611;
  }
  v84 = nullptr;
  v85 = 1;
  a4.m128i_i64[0] = 0x3FF0000000000000LL;
  v86 = 4 * (v589 + 1LL);
  do
  {
    while ( 1 )
    {
      v87 = *(_DWORD *)((char *)v84 + (_QWORD)v531);
      v88 = *(_DWORD *)((char *)v84 + v535);
      if ( v87 < v87 + v88 )
        break;
LABEL_125:
      v84 = (double *)((char *)v84 + 4);
      if ( v84 == (double *)v86 )
        goto LABEL_126;
    }
    v89 = v87;
    v6 = v603[v87] == 1.0;
    v90 = v87;
    if ( v6 )
    {
      v91 = (__int64)&v603[v90 + 1];
      v92 = (__int64)&v603[(unsigned int)(v88 - 1) + 1 + v89];
      while ( v91 != v92 )
      {
        v91 += 8;
        if ( *(double *)(v91 - 8) != 1.0 )
          goto LABEL_150;
      }
      goto LABEL_125;
    }
LABEL_150:
    v84 = (double *)((char *)v84 + 4);
    v85 = 0;
  }
  while ( v84 != (double *)v86 );
LABEL_126:
  if ( v85 )
  {
    v618 = 0;
    v504 = nullptr;
    goto LABEL_129;
  }
  if ( (v83 & 0x20) == 0 || (v507 = v84, *(int *)(*(_QWORD *)v14 + 256LL) <= 0) )
  {
    v618 = 0;
    v504 = (int *)v603;
    goto LABEL_129;
  }
  v525 = v73;
  ClpModel::setRowScale(*(ClpModel **)v14, nullptr);
  ClpModel::setColumnScale(*(ClpModel **)v14, nullptr);
  v158 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**(_QWORD **)(*(_QWORD *)v14 + 192LL) + 152LL))(
           *(_QWORD *)(*(_QWORD *)v14 + 192LL),
           *(_QWORD *)v14,
           0,
           1.0);
  v73 = v525;
  if ( v158 )
  {
    v83 = *((_DWORD *)v14 + 36);
    v618 = 0;
    v504 = (int *)v603;
    goto LABEL_129;
  }
  v568 = v507;
  v566 = v525;
  v508 = *(double **)(*(_QWORD *)v14 + 224LL);
  v563 = *(_QWORD *)(*(_QWORD *)v14 + 232LL);
  v528 = operator new[](v514);
  v555 = operator new[](v514);
  v423 = operator new[](v514);
  v424 = v493;
  v425 = (_QWORD *)v423;
  if ( (double *)v528 != v493 )
  {
    if ( v485 >> 3 )
    {
      v426 = (unsigned int)((v485 >> 3) - 1);
      v427 = v528;
      do
      {
        v428 = *(_QWORD *)v424;
        v427 += 64;
        v424 += 8;
        *(_QWORD *)(v427 - 64) = v428;
        *(double *)(v427 - 56) = *(v424 - 7);
        *(double *)(v427 - 48) = *(v424 - 6);
        *(double *)(v427 - 40) = *(v424 - 5);
        *(double *)(v427 - 32) = *(v424 - 4);
        *(double *)(v427 - 24) = *(v424 - 3);
        *(double *)(v427 - 16) = *(v424 - 2);
        *(double *)(v427 - 8) = *(v424 - 1);
      }
      while ( v427 != ((v426 + 1) << 6) + v528 );
      v429 = ((int)v426 + 1LL) << 6;
      v493 = (double *)((char *)v493 + v429);
      v430 = (_QWORD *)(v528 + v429);
    }
    else
    {
      v430 = (_QWORD *)v528;
    }
    switch ( v485 & 7 )
    {
      case 0:
        break;
      case 1:
        goto LABEL_681;
      case 2:
        goto LABEL_680;
      case 3:
        goto LABEL_679;
      case 4:
        goto LABEL_678;
      case 5:
        goto LABEL_677;
      case 6:
        goto LABEL_676;
      case 7:
        v430[6] = *((_QWORD *)v493 + 6);
LABEL_676:
        v430[5] = *((_QWORD *)v493 + 5);
LABEL_677:
        v430[4] = *((_QWORD *)v493 + 4);
LABEL_678:
        v430[3] = *((_QWORD *)v493 + 3);
LABEL_679:
        v430[2] = *((_QWORD *)v493 + 2);
LABEL_680:
        v430[1] = *((_QWORD *)v493 + 1);
LABEL_681:
        *v430 = *(_QWORD *)v493;
        break;
    }
  }
  v431 = v496;
  if ( (double *)v555 != v496 )
  {
    if ( v485 >> 3 )
    {
      v432 = (unsigned int)((v485 >> 3) - 1);
      v433 = v555;
      do
      {
        v434 = *(_QWORD *)v431;
        v433 += 64;
        v431 += 8;
        *(_QWORD *)(v433 - 64) = v434;
        *(double *)(v433 - 56) = *(v431 - 7);
        *(double *)(v433 - 48) = *(v431 - 6);
        *(double *)(v433 - 40) = *(v431 - 5);
        *(double *)(v433 - 32) = *(v431 - 4);
        *(double *)(v433 - 24) = *(v431 - 3);
        *(double *)(v433 - 16) = *(v431 - 2);
        *(double *)(v433 - 8) = *(v431 - 1);
      }
      while ( v433 != ((v432 + 1) << 6) + v555 );
      v435 = ((int)v432 + 1LL) << 6;
      v496 = (double *)((char *)v496 + v435);
      v436 = (_QWORD *)(v555 + v435);
    }
    else
    {
      v436 = (_QWORD *)v555;
    }
    switch ( v485 & 7 )
    {
      case 0:
        break;
      case 1:
        goto LABEL_694;
      case 2:
        goto LABEL_693;
      case 3:
        goto LABEL_692;
      case 4:
        goto LABEL_691;
      case 5:
        goto LABEL_690;
      case 6:
        goto LABEL_689;
      case 7:
        v436[6] = *((_QWORD *)v496 + 6);
LABEL_689:
        v436[5] = *((_QWORD *)v496 + 5);
LABEL_690:
        v436[4] = *((_QWORD *)v496 + 4);
LABEL_691:
        v436[3] = *((_QWORD *)v496 + 3);
LABEL_692:
        v436[2] = *((_QWORD *)v496 + 2);
LABEL_693:
        v436[1] = *((_QWORD *)v496 + 1);
LABEL_694:
        *v436 = *(_QWORD *)v496;
        break;
    }
  }
  if ( v425 != (_QWORD *)v18 )
  {
    if ( v485 >> 3 )
    {
      v437 = v425;
      v438 = (unsigned int)((v485 >> 3) - 1);
      v439 = (__int64 *)v18;
      do
      {
        v440 = *v439;
        v439 += 8;
        v437 += 8;
        *(v437 - 8) = v440;
        *(v437 - 7) = *(v439 - 7);
        *(v437 - 6) = *(v439 - 6);
        *(v437 - 5) = *(v439 - 5);
        *(v437 - 4) = *(v439 - 4);
        *(v437 - 3) = *(v439 - 3);
        *(v437 - 2) = *(v439 - 2);
        *(v437 - 1) = *(v439 - 1);
      }
      while ( v439 != (__int64 *)(v18 + ((v438 + 1) << 6)) );
      v441 = ((int)v438 + 1LL) << 6;
      v18 += v441;
      v442 = (_QWORD *)((char *)v425 + v441);
    }
    else
    {
      v442 = v425;
    }
    switch ( v485 & 7 )
    {
      case 0:
        break;
      case 1:
        goto LABEL_707;
      case 2:
        goto LABEL_706;
      case 3:
        goto LABEL_705;
      case 4:
        goto LABEL_704;
      case 5:
        goto LABEL_703;
      case 6:
        goto LABEL_702;
      case 7:
        v442[6] = *(_QWORD *)(v18 + 48);
LABEL_702:
        v442[5] = *(_QWORD *)(v18 + 40);
LABEL_703:
        v442[4] = *(_QWORD *)(v18 + 32);
LABEL_704:
        v442[3] = *(_QWORD *)(v18 + 24);
LABEL_705:
        v442[2] = *(_QWORD *)(v18 + 16);
LABEL_706:
        v442[1] = *(_QWORD *)(v18 + 8);
LABEL_707:
        *v442 = *(_QWORD *)v18;
        break;
    }
  }
  v443 = 0;
  do
  {
    v444 = 1.0 / *(double *)(v563 + v443 * 8);
    v445 = *(double *)(v528 + v443 * 8);
    if ( v445 > -1.0e50 )
      *(double *)(v528 + v443 * 8) = v445 * v444;
    v446 = *(double *)(v555 + v443 * 8);
    if ( v446 < 1.0e50 )
      *(double *)(v555 + v443 * 8) = v446 * v444;
    v486[v443] = v444 * v486[v443];
    *(double *)a4.m128i_i64 = *(double *)&v425[v443] * *(double *)(v563 + v443 * 8);
    v425[v443++] = a4.m128i_i64[0];
  }
  while ( v443 != v589 + 1LL );
  v447 = *(ClpModel **)v14;
  v448 = *(_QWORD *)(*(_QWORD *)v14 + 144LL);
  v449 = *(unsigned __int64 **)(*(_QWORD *)v14 + 152LL);
  if ( v484 > 0 )
  {
    v450 = 8LL * (unsigned int)(v484 - 1) + 8;
    v451 = 0;
    do
    {
      while ( 1 )
      {
        *(double *)a4.m128i_i64 = v508[v451 / 8];
        if ( *(double *)(v448 + v451) != *(double *)&v449[v451 / 8] )
          break;
        *(double *)a4.m128i_i64 = *(double *)a4.m128i_i64 + *(double *)a4.m128i_i64;
        v508[v451 / 8] = *(double *)a4.m128i_i64;
        v451 += 8LL;
        if ( v451 == v450 )
          goto LABEL_718;
      }
      v451 += 8LL;
    }
    while ( v451 != v450 );
LABEL_718:
    v449 = *((unsigned __int64 **)v447 + 19);
  }
  v452 = v449;
  if ( v20 != (double *)v449 && v484 )
  {
    if ( v484 >> 3 <= 0 )
    {
      v458 = v20;
    }
    else
    {
      v453 = v20;
      v454 = (unsigned int)((v484 >> 3) - 1);
      v455 = v449;
      do
      {
        v456 = *(double *)v455;
        v455 += 8;
        v453 += 8;
        *(v453 - 8) = v456;
        *((_QWORD *)v453 - 7) = *(v455 - 7);
        *((_QWORD *)v453 - 6) = *(v455 - 6);
        *((_QWORD *)v453 - 5) = *(v455 - 5);
        *((_QWORD *)v453 - 4) = *(v455 - 4);
        *((_QWORD *)v453 - 3) = *(v455 - 3);
        *((_QWORD *)v453 - 2) = *(v455 - 2);
        a4.m128i_i64[0] = *(v455 - 1);
        *(v453 - 1) = *(double *)a4.m128i_i64;
      }
      while ( v455 != &v449[8 * v454 + 8] );
      v457 = ((int)v454 + 1LL) << 6;
      v452 = (unsigned __int64 *)((char *)v449 + v457);
      v458 = (_QWORD *)((char *)v20 + v457);
    }
    switch ( v484 % 8 )
    {
      case 1:
        goto LABEL_734;
      case 2:
        goto LABEL_733;
      case 3:
        goto LABEL_732;
      case 4:
        goto LABEL_731;
      case 5:
        goto LABEL_730;
      case 6:
        goto LABEL_729;
      case 7:
        v458[6] = v452[6];
LABEL_729:
        v458[5] = v452[5];
LABEL_730:
        v458[4] = v452[4];
LABEL_731:
        v458[3] = v452[3];
LABEL_732:
        v458[2] = v452[2];
LABEL_733:
        v458[1] = v452[1];
LABEL_734:
        a4.m128i_i64[0] = *v452;
        *v458 = *v452;
        break;
      default:
        break;
    }
  }
  v459 = *((unsigned __int64 **)v447 + 18);
  if ( v30 != (double *)v459 && v484 )
  {
    if ( v484 >> 3 <= 0 )
    {
      v465 = v30;
    }
    else
    {
      v460 = *((double **)v447 + 18);
      v461 = (unsigned int)((v484 >> 3) - 1);
      v462 = v30;
      do
      {
        v463 = *v460;
        v462 += 8;
        v460 += 8;
        *(v462 - 8) = v463;
        *(v462 - 7) = *(v460 - 7);
        *(v462 - 6) = *(v460 - 6);
        *(v462 - 5) = *(v460 - 5);
        *(v462 - 4) = *(v460 - 4);
        *(v462 - 3) = *(v460 - 3);
        *(v462 - 2) = *(v460 - 2);
        a4.m128i_i64[0] = *(__int64 *)(v460 - 1);
        *(v462 - 1) = *(double *)a4.m128i_i64;
      }
      while ( v462 != &v30[8 * v461 + 8] );
      v464 = ((int)v461 + 1LL) << 6;
      v459 = (unsigned __int64 *)((char *)v459 + v464);
      v465 = (_QWORD *)((char *)v30 + v464);
    }
    switch ( v484 % 8 )
    {
      case 1:
        goto LABEL_748;
      case 2:
        goto LABEL_747;
      case 3:
        goto LABEL_746;
      case 4:
        goto LABEL_745;
      case 5:
        goto LABEL_744;
      case 6:
        goto LABEL_743;
      case 7:
        v465[6] = v459[6];
LABEL_743:
        v465[5] = v459[5];
LABEL_744:
        v465[4] = v459[4];
LABEL_745:
        v465[3] = v459[3];
LABEL_746:
        v465[2] = v459[2];
LABEL_747:
        v465[1] = v459[1];
LABEL_748:
        a4.m128i_i64[0] = *v459;
        *v465 = *v459;
        break;
      default:
        break;
    }
  }
  if ( v484 > 0 )
  {
    v466 = 8LL * (unsigned int)(v484 - 1) + 8;
    v467 = 0;
    do
    {
      while ( 1 )
      {
        v468 = v30[v467 / 8];
        v469 = v508[v467 / 8];
        if ( v468 > -1.0e50 )
          v30[v467 / 8] = v468 * v469;
        v470 = v20[v467 / 8];
        if ( v470 >= 1.0e50 )
          break;
        v471 = v470 * v469;
        *(double *)a4.m128i_i64 = v469 * *(double *)(v37 + v467);
        v20[v467 / 8] = v471;
        *(_QWORD *)(v37 + v467) = a4.m128i_i64[0];
        v467 += 8LL;
        if ( v466 == v467 )
          goto LABEL_755;
      }
      *(double *)a4.m128i_i64 = v469 * *(double *)(v37 + v467);
      *(_QWORD *)(v37 + v467) = a4.m128i_i64[0];
      v467 += 8LL;
    }
    while ( v467 != v466 );
  }
LABEL_755:
  v495 = v508;
  v472 = v531[(unsigned __int64)v498 / 4 - 1] + *(_DWORD *)(v535 + v498 - 4);
  if ( v472 > 0xFFFFFFFFFFFFFFFLL )
LABEL_770:
    __cxa_throw_bad_array_new_length();
  v473 = nullptr;
  v474 = operator new[](8 * v472);
  v73 = v566;
  v504 = (int *)v474;
  do
  {
    v475 = *(double *)(v563 + 2LL * (_QWORD)v473);
    v476 = *(_DWORD *)((char *)v473 + v535);
    v477 = *(_DWORD *)((char *)v473 + (_QWORD)v531);
    if ( v477 < v477 + v476 )
    {
      v478 = (unsigned int)(v476 - 1) + 1LL;
      v479 = &v543[v477];
      v480 = 2LL * v477;
      v481 = &v603[(unsigned __int64)v480 / 2];
      v482 = &v504[v480];
      v483 = 0;
      do
      {
        *(double *)a4.m128i_i64 = v481[v483] * v475 * v495[v479[v483]];
        *(_QWORD *)&v482[2 * v483++] = a4.m128i_i64[0];
      }
      while ( v483 != v478 );
    }
    v473 = (double *)((char *)v473 + 4);
  }
  while ( v473 != v568 );
  v83 = *((_DWORD *)v14 + 36);
  v18 = (__int64)v425;
  v618 = 1;
  v496 = (double *)v555;
  v493 = (double *)v528;
LABEL_129:
  if ( (v83 & 0x20000) != 0 )
    goto LABEL_607;
LABEL_130:
  v93 = 0;
  do
  {
    v94 = *(_DWORD *)(v535 + 4 * v93);
    v95 = v531[v93];
    v96 = (double)v94;
    v97 = v95 + v94;
    v98 = *(double *)(v18 + 8 * v93) / v96;
    if ( v95 < v97 )
    {
      v99 = &v543[v95];
      v100 = (__int64)&v543[(unsigned int)(v97 - v95 - 1) + 1 + (__int64)v95];
      do
      {
        v101 = (double *)(v37 + 8LL * *v99);
        if ( *v101 > v98 )
          *v101 = v98;
        ++v99;
      }
      while ( v99 != (int *)v100 );
    }
    ++v93;
  }
  while ( v485 > (int)v93 );
LABEL_137:
  if ( v484 > 0 )
  {
LABEL_138:
    v102 = 0.0;
    v103 = (double *)v37;
    v585 = v484 - 1;
    do
      v102 = v102 + *v103++;
    while ( v103 != (double *)(v37 + 8LL * (unsigned int)(v484 - 1) + 8) );
    goto LABEL_140;
  }
LABEL_611:
  v585 = v484 - 1;
LABEL_140:
  v577 = v501 & 4;
  if ( (v501 & 4) != 0 )
  {
    v523 = 1.0e-10;
    v541 = 0.00001;
  }
  else
  {
    v541 = v540 * 100.0 + 1.0;
  }
  memset(v73, 0, v498);
  v104 = *((_DWORD *)&v631 + v488) | 0x40;
  if ( (v501 & 8) == 0 )
    v104 = *((_DWORD *)&v631 + v488);
  v489 = v104;
  v581 = v485 >> 3;
  v580 = v485 % 8;
  v612 = (v485 >> 3) - 1;
  v567 = v485 == 0 || v574 == v486;
  if ( !v567 )
  {
    if ( v485 >> 3 <= 0 )
    {
      v113 = v574;
      v112 = v486;
    }
    else
    {
      v105 = v486;
      v106 = v574;
      do
      {
        v107 = *((_OWORD *)v105 + 1);
        v106 += 8;
        v105 += 8;
        v108 = *((_OWORD *)v105 - 2);
        v109 = *((_OWORD *)v105 - 1);
        v110 = *((_OWORD *)v105 - 4);
        *((_OWORD *)v106 - 3) = v107;
        *((_OWORD *)v106 - 4) = v110;
        *((_OWORD *)v106 - 2) = v108;
        *((_OWORD *)v106 - 1) = v109;
      }
      while ( v106 != &v574[8 * (unsigned int)((v485 >> 3) - 1) + 8] );
      v111 = (v612 + 1LL) << 6;
      v112 = (double *)((char *)v486 + v111);
      v113 = (double *)((char *)v574 + v111);
    }
    switch ( v580 )
    {
      case 1:
        goto LABEL_211;
      case 2:
        goto LABEL_210;
      case 3:
        goto LABEL_209;
      case 4:
        goto LABEL_208;
      case 5:
        goto LABEL_207;
      case 6:
        goto LABEL_206;
      case 7:
        v113[6] = v112[6];
LABEL_206:
        v113[5] = v112[5];
LABEL_207:
        v113[4] = v112[4];
LABEL_208:
        v113[3] = v112[3];
LABEL_209:
        v113[2] = v112[2];
LABEL_210:
        v113[1] = v112[1];
LABEL_211:
        *v113 = *v112;
        break;
      default:
        break;
    }
  }
  *(double *)v160.m128i_i64 = v541;
  v161 = v557;
  *(double *)v162.m128_u64 = v523;
  Idiot::IdiSolve(
    (int)v625,
    (int)v14,
    v484,
    v485,
    v37,
    (int)v486,
    (double *)v522,
    v529,
    v18,
    v30,
    v20,
    v493,
    v496,
    v504,
    v543,
    v531,
    v535,
    s,
    0,
    v489,
    v570);
  v638 = _mm_loadu_si128((const __m128i *)v625);
  v163 = _mm_loadu_si128(&v626);
  v630 = 1.797693134862316e308;
  v639 = v163;
  v640 = _mm_loadu_si128(&v627);
  v641 = _mm_loadu_si128(&v628);
  v561 = Idiot::cleanIteration(
           v14,
           0,
           v560,
           v571,
           v486,
           v493,
           v556,
           v496,
           v30,
           v20,
           (const double *)v18,
           (const double *)v504,
           (double *)&v638.m128i_i64[1],
           (double *)v638.m128i_i64,
           &v630);
  v165 = *((_DWORD *)v14 + 36);
  v166 = 4LL * v484 + 8;
  v167 = 2 * (v498 + 4LL * v484);
  v578 = v167;
  if ( (v165 & 0x4000) != 0 )
  {
    v168 = *((_QWORD *)v14 + 13);
    if ( v484 > 0 )
    {
      v169 = (double *)(v168 + v167);
      if ( (v168 + v167 >= v37 + 16 || v37 >= v168 + 2 * (v166 + v498)) && (unsigned int)v484 > 9 )
      {
        v170 = 0;
        if ( ((v37 >> 3) & 1) != 0 )
        {
          v170 = 1;
          *(double *)v37 = *(double *)v37 + *v169;
        }
        v171 = 0;
        v172 = v484 - ((v37 >> 3) & 1);
        v173 = 8 * ((v37 >> 3) & 1);
        v174 = v37 + v173;
        v164 = v172 >> 1;
        v175 = v578 + v173 + v168;
        v176 = 0;
        do
        {
          ++v171;
          *(__m128d *)(v174 + v176) = _mm_add_pd(*(__m128d *)(v175 + v176), *(__m128d *)(v174 + v176));
          v176 += 16;
        }
        while ( v164 > v171 );
        v177 = (v172 & 0xFFFFFFFE) + v170;
        if ( (v172 & 0xFFFFFFFE) != v172 )
        {
          v178 = v177;
          v179 = v177 + 1;
          *(double *)(v37 + 8 * v178) = *(double *)(v37 + 8 * v178) + v169[v178];
          if ( v179 < v484 )
            *(double *)(v37 + 8LL * v179) = *(double *)(v37 + 8LL * v179) + v169[v179];
        }
      }
      else
      {
        v412 = 0;
        do
        {
          *(double *)(v37 + v412) = *(double *)(v37 + v412) + v169[v412 / 8];
          v412 += 8LL;
        }
        while ( v412 != 8LL * v585 + 8 );
      }
    }
  }
  if ( (*((_BYTE *)v14 + 124) & 1) != 0 )
  {
    if ( a2 )
    {
      v180 = (CoinMessageHandler *)CoinMessageHandler::message(a2, 51, v596);
      v181 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v180);
      v182 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v181);
      v183 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v182);
      v184 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v183);
      v185 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v184);
      v186 = CoinMessageHandler::operator<<(v185);
      CoinMessageHandler::operator<<(v186, 0, v509);
    }
    else
    {
      v162.m128_u64[0] = v638.m128i_u64[1];
      printf(
        "Iteration %d infeasibility %g, objective %g - mu %g, its %d, %d interior\n",
        0,
        *(double *)v638.m128i_i64,
        *(double *)&v638.m128i_i64[1],
        v509,
        v641.m128i_i32[2],
        v561);
    }
    v165 = *((_DWORD *)v14 + 36);
  }
  *(_QWORD *)&v187 = v638.m128i_i64[0];
  v582 = *(double *)v638.m128i_i64;
  if ( (v165 & 0x400) != 0 )
    v548 = 0.5 * *(double *)v638.m128i_i64;
  if ( v548 <= *(double *)v638.m128i_i64 )
  {
    *(_QWORD *)&v188.m128d_f64[0] = v638.m128i_i64[0];
  }
  else
  {
    *(double *)v638.m128i_i64 = v548;
    v188.m128d_f64[0] = v548;
  }
  v189 = v166 + v498;
  v576 = v501 & 0x1000;
  v588 = v501 & 0x800;
  v586 = v501 & 0x40;
  v190 = ((unsigned int)v612 + 1LL) << 6;
  v621 = v190;
  v573 = (double *)((char *)v486 + v190);
  v584 = (double *)((char *)v574 + v190);
  v579 = 8LL * v585 + 8;
  v587 = 2 * (v166 + v498);
  v191 = (v37 & 8) != 0;
  v600 = v484 - v191;
  v591 = v191 + 1;
  v598 = (v484 - v191) & 0xFFFFFFFE;
  v599 = (unsigned int)(v484 - v191) >> 1;
  v192 = 8LL * ((v37 & 8) != 0);
  v610 = v598 + v191;
  LODWORD(v193) = v192 + v578;
  v624 = v192;
  v194 = v37 + v192;
  v601 = v192 + v578;
  v195 = (v18 & 8) != 0;
  v608 = v485 - v195;
  v606 = (v485 - v195) & 0xFFFFFFFC;
  v609 = (unsigned int)(v485 - v195) >> 2;
  v611 = v606 + v195;
  v196 = (s & 8) != 0;
  v569 = 0.0;
  v615 = v484 - v196;
  v564 = -1;
  v197.m128d_f64[0] = 0.00001;
  v617 = (unsigned int)(v484 - v196) >> 1;
  v605 = 0;
  v198 = 8LL * ((s & 8) != 0);
  v199 = 1.0e50;
  v200 = v198 + s;
  v613 = v37 + v198;
  LODWORD(v198) = v484 - v196;
  v201 = (v484 - v196) & 0xFFFFFFFE;
  v202 = v201 + v196;
  v616 = v201;
  v614 = v200;
  v622 = v198 & 0xFFFFFFFC;
  v203 = 0;
  v204 = v509;
  v623 = v202;
  v602 = (unsigned int)v198 >> 2;
  v562 = 50;
  v499 = 1.0e31;
  v554 = 1.0e31;
  v594 = 0;
  v572 = 0;
  v502 = 0;
  v521 = 0;
  v595 = v194;
  while ( 2 )
  {
    if ( v204 <= v520 || v188.m128d_f64[0] <= v517 )
    {
      *(double *)&v187 = v517;
      if ( v517 < v188.m128d_f64[0]
        || (*(double *)v162.m128_u64 = v517,
            v188.m128d_f64[0] = v604,
            !(unsigned int)Idiot::dropping(
                             (int)v14,
                             (int)&v629,
                             (int)v193,
                             v202,
                             v189,
                             v164,
                             v638.m128i_i64[0],
                             v638.m128i_i64[1],
                             v639.m128i_i64[0])) )
      {
        if ( v502 > 1 && *((_DWORD *)v14 + 34) <= (signed int)v572 )
        {
LABEL_440:
          v280 = v595;
          v512 = v204;
          goto LABEL_441;
        }
      }
      *(_QWORD *)&v188.m128d_f64[0] = v638.m128i_i64[0];
    }
    v162.m128_u64[0] = *((_QWORD *)v14 + 10);
    if ( *(double *)v162.m128_u64 >= v188.m128d_f64[0] )
      goto LABEL_440;
    ++v203;
    ++v502;
    v205 = v489;
    BYTE1(v205) = BYTE1(v489) | 1;
    if ( !v576 )
      v205 = v489;
    v489 = v205;
    if ( v203 > 2 && v577 )
    {
      v206 = fabs(v199) + 10.0;
      v523 = v206 * *((double *)v14 + 3);
      v541 = *((double *)v14 + 1) * v206 + *((double *)v14 + 1) * v206;
    }
    if ( !v567 )
    {
      if ( v581 <= 0 )
      {
        v213 = v574;
        v214 = v486;
      }
      else
      {
        v207 = v574;
        v208 = v486;
        do
        {
          v209 = *((_OWORD *)v208 + 1);
          v208 += 8;
          v207 += 8;
          v210 = *((_OWORD *)v208 - 2);
          v211 = *((_OWORD *)v208 - 1);
          v212 = *((_OWORD *)v208 - 4);
          *((_OWORD *)v207 - 3) = v209;
          *((_OWORD *)v207 - 4) = v212;
          *((_OWORD *)v207 - 2) = v210;
          *((_OWORD *)v207 - 1) = v211;
        }
        while ( v208 != v573 );
        v213 = v584;
        v214 = v573;
      }
      switch ( v580 )
      {
        case 1:
          goto LABEL_256;
        case 2:
          goto LABEL_255;
        case 3:
          goto LABEL_254;
        case 4:
          goto LABEL_253;
        case 5:
          goto LABEL_252;
        case 6:
          goto LABEL_251;
        case 7:
          v213[6] = v214[6];
LABEL_251:
          v213[5] = v214[5];
LABEL_252:
          v213[4] = v214[4];
LABEL_253:
          v213[3] = v214[3];
LABEL_254:
          v213[2] = v214[2];
LABEL_255:
          v213[1] = v214[1];
LABEL_256:
          *v213 = *v214;
          break;
        default:
          break;
      }
    }
    *(double *)v160.m128i_i64 = v541;
    v199 = v549;
    *(double *)v162.m128_u64 = v523;
    Idiot::IdiSolve(
      (int)v625,
      (int)v14,
      v484,
      v485,
      v37,
      (int)v486,
      (double *)v522,
      v529,
      v18,
      v30,
      v20,
      v493,
      v496,
      v504,
      v543,
      v531,
      v535,
      s,
      v559,
      v489,
      v570);
    v634 = _mm_loadu_si128((const __m128i *)v625);
    v635 = _mm_loadu_si128(&v626);
    v636 = _mm_loadu_si128(&v627);
    v637 = _mm_loadu_si128(&v628);
    v189 = Idiot::cleanIteration(
             v14,
             v203,
             v560,
             v571,
             v486,
             v493,
             v556,
             v496,
             v30,
             v20,
             (const double *)v18,
             (const double *)v504,
             (double *)&v634.m128i_i64[1],
             (double *)v634.m128i_i64,
             &v630);
    if ( (*((_BYTE *)v14 + 145) & 0x40) != 0 )
    {
      v215 = *((_QWORD *)v14 + 13);
      if ( v484 > 0 )
      {
        v216 = (double *)(v215 + v578);
        if ( (v37 >= v215 + v587 || v215 + v578 >= v37 + 16) && (unsigned int)v484 > 9 )
        {
          if ( v591 > v585 )
          {
            v218 = 0;
            goto LABEL_268;
          }
          if ( (v37 & 8) != 0 )
            *(double *)v37 = *(double *)v37 + *v216;
          LODWORD(v193) = 0;
          v164 = v599;
          v217 = 0;
          do
          {
            LODWORD(v193) = (_DWORD)v193 + 1;
            *(__m128d *)(v595 + v217) = _mm_add_pd(*(__m128d *)(v215 + v601 + v217), *(__m128d *)(v595 + v217));
            v217 += 16;
          }
          while ( v599 > (unsigned int)v193 );
          if ( v598 != v600 )
          {
            v218 = v610;
LABEL_268:
            v219 = v218;
            v220 = v218 + 1;
            v193 = (ClpModel *)(8 * v219);
            v221 = (double *)((char *)v193 + v37);
            v222 = (char *)v193 + v215;
            LODWORD(v193) = v578;
            *v221 = *v221 + *(double *)&v222[v578];
            if ( v484 > v220 )
            {
              v223 = 8LL * v220;
              LODWORD(v193) = v37 + v223;
              *(double *)(v37 + v223) = *(double *)(v37 + v223) + v216[(unsigned __int64)v223 / 8];
            }
          }
        }
        else
        {
          LODWORD(v193) = 8 * v585 + 8;
          v272 = 0;
          do
          {
            *(double *)(v37 + v272) = *(double *)(v37 + v272) + v216[v272 / 8];
            v272 += 8LL;
          }
          while ( v272 != v579 );
        }
      }
    }
    else
    {
      v630 = 0.0;
      if ( v484 > 0 )
      {
        v233 = 0.0;
        LODWORD(v193) = 8 * v585 + 8;
        v234 = 0;
        do
        {
          v199 = *(double *)(v37 + v234);
          v235 = v30[v234 / 8] - v199;
          *(double *)v162.m128_u64 = v199 - v20[v234 / 8];
          v234 += 8LL;
          *(double *)v160.m128i_i64 = fmax(0.0, v235);
          v233 = fmax(v233, fmax(*(double *)v160.m128i_i64, *(double *)v162.m128_u64));
        }
        while ( v234 != v579 );
        v630 = v233;
      }
    }
    if ( (*((_BYTE *)v14 + 124) & 1) != 0 )
    {
      if ( a2 )
      {
        v510 = v189;
        v224 = (CoinMessageHandler *)CoinMessageHandler::message(a2, 51, v596);
        v225 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v224);
        v226 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v225);
        v227 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v226);
        v228 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v227);
        v229 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v228);
        v230 = CoinMessageHandler::operator<<(v229);
        CoinMessageHandler::operator<<(v230, 0, v204);
        v189 = v510;
      }
      else
      {
        v199 = v204;
        v162.m128_u64[0] = v634.m128i_u64[1];
        v515 = v189;
        printf(
          "Iteration %d infeasibility %g, objective %g - mu %g, its %d, %d interior\n",
          v203,
          *(double *)v634.m128i_i64,
          *(double *)&v634.m128i_i64[1],
          v204,
          v637.m128i_i32[2],
          v189);
        v189 = v515;
      }
    }
    v161 = *(double *)v634.m128i_i64;
    if ( v562 < v203 )
    {
      if ( (v188.m128d_f64[0] = 0.0001, *(double *)v634.m128i_i64 < 0.0001) && *((int *)v14 + 30) <= 199 && v564 == v189
        || (v188.m128d_f64[0] = 0.00000001, *(double *)v634.m128i_i64 < 0.00000001)
        || v630 < 0.00000001 )
      {
        if ( (*((_BYTE *)v14 + 146) & 2) == 0 )
          goto LABEL_440;
        v164 = v485;
        if ( v485 > 0 )
        {
          if ( v589 <= 5 )
          {
            LODWORD(v193) = 0;
            v265 = 0;
LABEL_370:
            if ( *(double *)(v18 + 8LL * (int)v193) != 0.0 )
              ++v265;
            if ( (int)v193 + 1 < v485 )
            {
              if ( *(double *)(v18 + 8LL * ((int)v193 + 1)) != 0.0 )
                ++v265;
              if ( (int)v193 + 2 < v485 )
              {
                if ( *(double *)(v18 + 8LL * ((int)v193 + 2)) != 0.0 )
                  ++v265;
                if ( v485 > (int)v193 + 3 )
                {
                  if ( *(double *)(v18 + 8LL * ((int)v193 + 3)) != 0.0 )
                    ++v265;
                  if ( v485 > (int)v193 + 4 )
                  {
                    if ( *(double *)(v18 + 8LL * ((int)v193 + 4)) != 0.0 )
                      ++v265;
                    LODWORD(v193) = (_DWORD)v193 + 5;
                    if ( v485 > (int)v193 && *(double *)(v18 + 8LL * (int)v193) != 0.0 )
                      ++v265;
                  }
                }
              }
            }
          }
          else
          {
            v260 = 0;
            if ( (v18 & 8) != 0 )
              v260 = *(double *)v18 != 0.0;
            v261 = (__m128d *)(v18 + 8LL * ((v18 & 8) != 0));
            v262 = 0;
            *(_QWORD *)&v187 = 0;
            LODWORD(v193) = 0;
            do
            {
              v263 = *v261;
              LODWORD(v193) = (_DWORD)v193 + 1;
              v261 += 2;
              v162 = (__m128)_mm_and_si128((__m128i)_mm_cmpneq_pd(v261[-1], (__m128d)0LL), (__m128i)xmmword_28D790);
              v262 = _mm_add_epi32(
                       v262,
                       (__m128i)_mm_shuffle_ps(
                                  (__m128)_mm_and_si128(
                                            (__m128i)_mm_cmpneq_pd(v263, (__m128d)0LL),
                                            (__m128i)xmmword_28D790),
                                  v162,
                                  136));
            }
            while ( v609 > (unsigned int)v193 );
            v264 = _mm_add_epi32(v262, _mm_srli_si128(v262, 8));
            v265 = v260 + _mm_cvtsi128_si32(_mm_add_epi32(v264, _mm_srli_si128(v264, 4)));
            if ( v606 != v608 )
            {
              LODWORD(v193) = v611;
              goto LABEL_370;
            }
          }
          if ( 10 * v265 < v485 )
          {
            v197.m128d_f64[0] = 0.25;
            v164 = (unsigned int)v493;
            v266 = v589 + 1LL;
            v267 = 0;
            do
            {
              while ( 1 )
              {
                if ( *(double *)(v18 + 8 * v267) == 0.0 )
                {
                  v268 = v486[v267];
                  *(double *)v162.m128_u64 = v493[v267] + 0.000000001;
                  if ( *(double *)v162.m128_u64 <= v268 )
                  {
                    *(double *)v162.m128_u64 = v496[v267] - 0.000000001;
                    if ( v268 <= *(double *)v162.m128_u64 )
                      break;
                  }
                }
                v193 = *(ClpModel **)v14;
                *(_QWORD *)(v18 + 8 * v267) = 0;
                v271 = (_BYTE *)(v267 + *((_QWORD *)v193 + 33));
                ++v267;
                LODWORD(v193) = *v271 & 0xF8 | 5;
                *v271 = *v271 & 0xF8 | 5;
                if ( v267 == v266 )
                  goto LABEL_396;
              }
              *(_QWORD *)(v18 + 8 * v267) = 0;
              v269 = v496[v267];
              *(double *)v160.m128i_i64 = v493[v267];
              v270 = v486[v267];
              *(double *)v162.m128_u64 = v269 - *(double *)v160.m128i_i64;
              *(double *)&v187 = (v269 - *(double *)v160.m128i_i64) * 0.25;
              if ( v270 <= v269 - *(double *)&v187 )
              {
                *(double *)&v187 = *(double *)&v187 + *(double *)v160.m128i_i64;
                if ( *(double *)&v187 > v270 )
                {
                  *(double *)v162.m128_u64 = *(double *)v162.m128_u64 / (v270 - *(double *)v160.m128i_i64);
                  *(_QWORD *)(v18 + 8 * v267) = v162.m128_u64[0];
                }
              }
              else
              {
                *(double *)v162.m128_u64 = *(double *)v162.m128_u64 / (v270 - v269);
                *(_QWORD *)(v18 + 8 * v267) = v162.m128_u64[0];
              }
              ++v267;
            }
            while ( v267 != v266 );
LABEL_396:
            v161 = *(double *)v634.m128i_i64;
            v562 = 100;
          }
        }
      }
    }
    v231 = *((_DWORD *)v14 + 37);
    v199 = *(double *)&v635.m128i_i64[1];
    v202 = *((_DWORD *)v14 + 30);
    if ( v231 == 1 && v203 > 10 )
    {
      *(double *)v160.m128i_i64 = v554;
      LODWORD(v193) = 1;
      LOBYTE(v193) = v559 != 7;
      if ( v559 != 7 && v554 != v499 && v161 > 1.0 && fmin(v161, v554) > v499 * 0.95 )
      {
        if ( v202 > v203 )
          v202 = v203;
        *((_DWORD *)v14 + 30) = v202;
      }
      v188.m128d_f64[0] = v161;
    }
    else
    {
      v188.m128d_f64[0] = v161;
      if ( v203 == 1 )
      {
        LODWORD(v193) = *((_DWORD *)v14 + 36) & 0x400;
        if ( (_DWORD)v193 )
        {
          if ( v204 >= 1.0e-10 )
          {
            v188.m128d_f64[0] = v161;
          }
          else
          {
            v188.m128d_f64[0] = v582 * 0.8;
            *(double *)v634.m128i_i64 = v582 * 0.8;
          }
        }
        if ( v202 > 49 || *((double *)v14 + 11) <= 0.0 )
        {
          v188.m128d_f64[0] = v188.m128d_f64[0] * 0.8;
          v634.m128i_i64[0] = *(_QWORD *)&v188.m128d_f64[0];
        }
        *(double *)v162.m128_u64 = v582 * 0.9;
        if ( v188.m128d_f64[0] <= v582 * 0.9 || v188.m128d_f64[0] <= v548 )
        {
          if ( (_DWORD)v193 )
            v204 = v204 * 0.1;
          v502 = 0;
          v559 = v593;
        }
        else
        {
          if ( v202 > 49 )
            v204 = v204 * 0.7;
          else
            v204 = v204 * 0.1;
          v162.m128_u64[0] = 0x39B4484BFEEBC2A0LL;
          ++v605;
          if ( v204 < 1.0e-30 || v231 && v605 > 10 )
          {
            v280 = v595;
            v512 = v204;
            *((_DWORD *)v14 + 37) = 2;
            v203 = 0;
            goto LABEL_441;
          }
          v203 = 0;
          if ( !v567 )
          {
            v258 = v486;
            v193 = (ClpModel *)v574;
            if ( v581 > 0 )
            {
              do
              {
                v259 = *((_OWORD *)v193 + 1);
                v258 += 8;
                v193 = (ClpModel *)((char *)v193 + 64);
                v187 = *((_OWORD *)v193 - 2);
                v162 = *((__m128 *)v193 - 1);
                v160 = *((__m128i *)v193 - 4);
                *((_OWORD *)v258 - 3) = v259;
                *((__m128i *)v258 - 4) = v160;
                *((_OWORD *)v258 - 2) = v187;
                *((__m128 *)v258 - 1) = v162;
              }
              while ( v258 != v573 );
              v258 = v573;
              v193 = (ClpModel *)v584;
            }
            switch ( v580 )
            {
              case 1:
                goto LABEL_360;
              case 2:
                goto LABEL_359;
              case 3:
                goto LABEL_358;
              case 4:
                goto LABEL_357;
              case 5:
                goto LABEL_356;
              case 6:
                goto LABEL_355;
              case 7:
                v258[6] = *((double *)v193 + 6);
LABEL_355:
                v258[5] = *((double *)v193 + 5);
LABEL_356:
                v258[4] = *((double *)v193 + 4);
LABEL_357:
                v258[3] = *((double *)v193 + 3);
LABEL_358:
                v258[2] = *((double *)v193 + 2);
LABEL_359:
                v258[1] = *((double *)v193 + 1);
LABEL_360:
                v162.m128_u64[0] = *(_QWORD *)v193;
                v203 = 0;
                *v258 = *(double *)v193;
                break;
              default:
                v203 = 0;
                break;
            }
          }
        }
      }
    }
    v197.m128d_f64[0] = fmin(v499, v188.m128d_f64[0]);
    v499 = v197.m128d_f64[0];
    if ( (unsigned int)(v202 - 101) <= 0x62 && v202 - 100 == v203 )
    {
      v204 = v204 * 10.0;
      v521 = 0;
      v160.m128i_i64[0] = 0x408F400000000000LL;
      v499 = 1000.0;
    }
    else if ( !v203 )
    {
      goto LABEL_285;
    }
    if ( v586 )
    {
      v236.m128d_f64[0] = 0.0;
      v237 = v517;
    }
    else
    {
      v236.m128d_f64[0] = v161;
      v237 = -1.0;
    }
    if ( v188.m128d_f64[0] > v548 )
    {
      if ( v188.m128d_f64[0] > (1.0 - *((double *)v14 + 11)) * *(double *)v638.m128i_i64
        || (++v521, v521 == v597)
        || v188.m128d_f64[0] > *(double *)v638.m128i_i64 * 0.9
        && (v197.m128d_f64[0] = fmax(fabs(*(double *)&v639.m128i_i64[1]), fabs(v199)),
            v199 > *(double *)&v639.m128i_i64[1] - *((double *)v14 + 12) * v197.m128d_f64[0]) )
      {
LABEL_410:
        v204 = v204 * v607;
        v569 = 0.0;
        v635.m128i_i64[1] = 0x4C63E9E4E4C2F344LL;
        if ( v588 )
        {
          v572 = 0;
          v502 = 0;
          v521 = 0;
        }
        else
        {
          v565 = v202;
          v511 = v189;
          memset((void *)s, 0, n);
          v572 = 0;
          v502 = 0;
          v521 = 0;
          v189 = v511;
          v202 = v565;
        }
      }
      else
      {
        v569 = 0.0;
      }
    }
    else
    {
      if ( ++v521 == v597 && v188.m128d_f64[0] > v237 )
        goto LABEL_410;
      v569 = 0.0;
      if ( *((int *)v14 + 34) >= 0 )
      {
        ++v572;
        v569 = 1.0 / v204;
        if ( !v577 )
          v523 = *((double *)v14 + 3) / 50.0;
        if ( (int)v572 > 4 )
        {
          LODWORD(v193) = v572 / 0xA;
          if ( v572 == 10 * (v572 / 0xA) && (*(double *)v160.m128i_i64 = v517, v236.m128d_f64[0] > v517) )
          {
            *(double *)v160.m128i_i64 = v517 * 1.5;
            v517 = v517 * 1.5;
          }
          else
          {
            LODWORD(v193) = v572 / 5;
            if ( v572 == 5 * (v572 / 5) )
            {
              *(double *)v160.m128i_i64 = v517;
              v197 = (__m128d)0x3FF8000000000000uLL;
              v197.m128d_f64[0] = 1.5 * v517;
              v279 = _mm_cmpge_sd(v197, v236).m128d_f64[0];
              *(_QWORD *)&v517 = ~*(_QWORD *)&v279 & COERCE_UNSIGNED_INT64(1.5 * v517)
                               | *(_QWORD *)&v517 & *(_QWORD *)&v279;
            }
          }
        }
        if ( v588 )
        {
          if ( v484 > 0 )
          {
            if ( v585 <= 1 )
            {
              v275 = 0;
            }
            else
            {
              if ( (s & 8) != 0 )
                *(double *)s = v569 * *(double *)v37 + *(double *)s;
              v273 = 0;
              LODWORD(v193) = 0;
              v274 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v569, (__m128d)*(unsigned __int64 *)&v569);
              v164 = v617;
              do
              {
                LODWORD(v193) = (_DWORD)v193 + 1;
                *(__m128d *)(v614 + v273) = _mm_add_pd(
                                              _mm_mul_pd(*(__m128d *)(v613 + v273), v274),
                                              *(__m128d *)(v614 + v273));
                v273 += 16;
              }
              while ( v617 > (unsigned int)v193 );
              if ( v616 == v615 )
                goto LABEL_334;
              v275 = v623;
            }
            v276 = v275;
            *(double *)v160.m128i_i64 = 1.0 / v204;
            v277 = *(double *)(v37 + 8LL * v275);
            v278 = v275 + 1;
            v193 = (ClpModel *)(s + 8 * v276);
            *(double *)v193 = v277 * v569 + *(double *)v193;
            if ( v278 < v484 )
            {
              *(double *)v160.m128i_i64 = v569 * *(double *)(v37 + 8LL * v278);
              v193 = (ClpModel *)(s + 8LL * v278);
              *(double *)v193 = *(double *)v193 + *(double *)v160.m128i_i64;
            }
          }
        }
        else
        {
          if ( v484 <= 0 )
            goto LABEL_333;
          if ( v585 <= 4 )
          {
            v247 = 0;
            LODWORD(v193) = 0;
            goto LABEL_317;
          }
          if ( (s & 8) != 0 )
          {
            v238 = *(double *)s != 0.0;
            *(double *)s = v569 * *(double *)v37 + *(double *)s;
            v239 = 1;
          }
          else
          {
            v238 = 0;
            v239 = 0;
          }
          v240 = 0;
          v241 = 0;
          v164 = v614;
          v242 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v569, (__m128d)*(unsigned __int64 *)&v569);
          v243 = 0;
          do
          {
            v244 = *(__m128d *)(v614 + v240);
            ++v243;
            v197 = (__m128d)_mm_shuffle_ps(
                              (__m128)_mm_and_si128((__m128i)_mm_cmpneq_pd(v244, (__m128d)0LL), (__m128i)xmmword_28D790),
                              (__m128)_mm_and_si128(
                                        (__m128i)_mm_cmpneq_pd(*(__m128d *)(v614 + v240 + 16), (__m128d)0LL),
                                        (__m128i)xmmword_28D790),
                              136);
            v245 = _mm_mul_pd(*(__m128d *)(v613 + v240), v242);
            v241 = _mm_add_epi32(v241, (__m128i)v197);
            *(__m128d *)(v614 + v240 + 16) = _mm_add_pd(
                                               _mm_mul_pd(*(__m128d *)(v613 + v240 + 16), v242),
                                               *(__m128d *)(v614 + v240 + 16));
            *(__m128d *)(v614 + v240) = _mm_add_pd(v245, v244);
            v240 += 32;
          }
          while ( v602 > v243 );
          v246 = _mm_add_epi32(v241, _mm_srli_si128(v241, 8));
          v160 = _mm_add_epi32(v246, _mm_srli_si128(v246, 4));
          v247 = v238 + _mm_cvtsi128_si32(v160);
          LODWORD(v193) = v622 + v239;
          if ( v615 != v622 )
          {
LABEL_317:
            v248 = (double *)(s + 8LL * (int)v193);
            if ( *v248 != 0.0 )
              ++v247;
            *v248 = v569 * *(double *)(v37 + 8LL * (int)v193) + *v248;
            v249 = (_DWORD)v193 + 1;
            if ( (int)v193 + 1 < v484 )
            {
              v250 = (double *)(s + 8LL * v249);
              if ( *v250 != 0.0 )
                ++v247;
              v251 = v569 * *(double *)(v37 + 8LL * v249);
              v252 = (_DWORD)v193 + 2;
              *v250 = v251 + *v250;
              if ( (int)v193 + 2 < v484 )
              {
                v253 = (double *)(s + 8LL * v252);
                if ( *v253 != 0.0 )
                  ++v247;
                v254 = v569 * *(double *)(v37 + 8LL * v252);
                v255 = (_DWORD)v193 + 3;
                *v253 = v254 + *v253;
                if ( (int)v193 + 3 < v484 )
                {
                  v256 = (double *)(s + 8LL * v255);
                  if ( *v256 != 0.0 )
                    ++v247;
                  LODWORD(v193) = (_DWORD)v193 + 4;
                  *v256 = v569 * *(double *)(v37 + 8LL * v255) + *v256;
                  if ( (int)v193 < v484 )
                  {
                    v257 = (double *)(s + 8LL * (int)v193);
                    if ( *v257 != 0.0 )
                      ++v247;
                    *v257 = v569 * *(double *)(v37 + 8LL * (int)v193) + *v257;
                  }
                }
              }
            }
          }
          if ( !v247 )
          {
LABEL_333:
            v502 = 0;
            v635.m128i_i64[1] = 0x465F8DEF8808B024LL;
          }
        }
      }
    }
LABEL_334:
    *(double *)&v187 = v548;
    v638 = _mm_load_si128(&v634);
    v639 = _mm_load_si128(&v635);
    v640 = _mm_load_si128(&v636);
    v162 = (__m128)_mm_load_si128(&v637);
    v641 = (__m128i)v162;
    if ( v548 > v188.m128d_f64[0] && !v594 )
    {
      v502 = 0;
      v594 = 1;
      v635.m128i_i64[1] = 0x465F8DEF8808B024LL;
    }
LABEL_285:
    if ( v203 < v202 )
    {
LABEL_290:
      *(_QWORD *)&v188.m128d_f64[0] = v638.m128i_i64[0];
      v564 = v189;
      v554 = v161;
      continue;
    }
    break;
  }
  if ( v204 > 1.0e-12 && v202 <= 39 && v188.m128d_f64[0] > 1.0 )
  {
    v520 = 0.0;
    v204 = 1.0e-30;
    *((_DWORD *)v14 + 30) = v203 + 1;
    goto LABEL_290;
  }
  v280 = v595;
  v512 = v204;
  if ( v590 > 2 )
  {
    puts("Exiting due to number of major iterations");
    v280 = v595;
  }
LABEL_441:
  *((_DWORD *)v14 + 30) = v620;
  v281 = *(ClpModel **)v14;
  v491 = *(ClpModel **)v14;
  if ( v618 )
  {
    v282 = *((double **)v281 + 28);
    v283 = *((_QWORD *)v281 + 29);
    if ( v485 > 0 )
    {
      if ( (unsigned int)v485 > 6
        && ((unsigned __int64)v574 >= v283 + 16 || v283 >= (unsigned __int64)(v574 + 2))
        && (v283 >= (unsigned __int64)(v486 + 2) || (unsigned __int64)v486 >= v283 + 16)
        && ((unsigned __int64)v529 >= v283 + 16 || v283 >= (unsigned __int64)(v529 + 2)) )
      {
        v284 = (v283 >> 3) & 1;
        if ( v589 < (int)v284 + 1 )
        {
          v293 = 0;
          goto LABEL_451;
        }
        v500 = 0;
        if ( (_DWORD)v284 )
        {
          v500 = 1;
          *v486 = *v486 * *(double *)v283;
          *v574 = *v574 * *(double *)v283;
          *v529 = *v529 / *(double *)v283;
        }
        v518 = v282;
        v285 = (v283 >> 3) & 1;
        v286 = v283 + v285 * 8;
        v516 = v485 - v284;
        v287 = (unsigned int)(v485 - v284) >> 1;
        v288 = 0;
        v289 = &v486[v285];
        v290 = &v574[v285];
        v291 = &v529[v285];
        v292 = 0;
        do
        {
          ++v288;
          *(__m128d *)&v289[v292] = _mm_mul_pd(*(__m128d *)&v289[v292], *(__m128d *)(v286 + v292 * 8));
          *(__m128d *)&v290[v292] = _mm_mul_pd(*(__m128d *)&v290[v292], *(__m128d *)(v286 + v292 * 8));
          v188 = _mm_div_pd(*(__m128d *)&v291[v292], *(__m128d *)(v286 + v292 * 8));
          *(__m128d *)&v291[v292] = v188;
          v292 += 2;
        }
        while ( v287 > v288 );
        v282 = v518;
        v293 = (v516 & 0xFFFFFFFE) + v500;
        if ( (v516 & 0xFFFFFFFE) != v516 )
        {
LABEL_451:
          v294 = v293;
          v295 = v293 + 1;
          v296 = (double *)(v283 + v294 * 8);
          v486[v294] = v486[v294] * *(double *)(v283 + v294 * 8);
          v574[v294] = v574[v294] * *(double *)(v283 + v294 * 8);
          v297 = &v529[v294];
          v188.m128d_f64[0] = *v297 / *v296;
          *v297 = v188.m128d_f64[0];
          if ( v295 < v485 )
          {
            v298 = v295;
            v299 = (double *)(v283 + v298 * 8);
            v486[v298] = v486[v298] * *(double *)(v283 + v298 * 8);
            v300 = &v574[v298];
            v301 = &v529[v298];
            *v300 = *v300 * *v299;
            v188.m128d_f64[0] = *v301 / *v299;
            *v301 = v188.m128d_f64[0];
          }
        }
      }
      else
      {
        v413 = 0;
        do
        {
          v486[v413 / 8] = v486[v413 / 8] * *(double *)(v283 + v413);
          v574[v413 / 8] = v574[v413 / 8] * *(double *)(v283 + v413);
          v188.m128d_f64[0] = v529[v413 / 8] / *(double *)(v283 + v413);
          v529[v413 / 8] = v188.m128d_f64[0];
          v413 += 8LL;
        }
        while ( v413 != 8LL * v589 + 8 );
      }
    }
    if ( v484 > 0 )
    {
      if ( (unsigned int)v484 > 8
        && (v37 >= (unsigned __int64)(v282 + 2) || (unsigned __int64)v282 >= v37 + 16)
        && (v522 >= (unsigned __int64)(v282 + 2) || (unsigned __int64)v282 >= v522 + 16) )
      {
        if ( v591 > v585 )
        {
          v308 = 0;
          goto LABEL_462;
        }
        v302 = 0;
        if ( (v37 & 8) != 0 )
        {
          v302 = 1;
          *(double *)v37 = *(double *)v37 / *v282;
          *(double *)v522 = *(double *)v522 * *v282;
        }
        v303 = 0;
        v304 = (char *)v282 + v624;
        v305 = v522 + v624;
        v306 = 0;
        do
        {
          ++v303;
          v307 = *(__m128d *)(v305 + v306);
          *(__m128d *)(v280 + v306) = _mm_div_pd(*(__m128d *)(v280 + v306), *(__m128d *)&v304[v306]);
          v188 = _mm_mul_pd(*(__m128d *)&v304[v306], v307);
          *(__m128d *)(v305 + v306) = v188;
          v306 += 16;
        }
        while ( v599 > v303 );
        v308 = v598 + v302;
        if ( v598 != v600 )
        {
LABEL_462:
          v309 = v308;
          v310 = v308 + 1;
          v309 *= 8;
          v311 = (double *)((char *)v282 + v309);
          *(double *)(v37 + v309) = *(double *)(v37 + v309) / *(double *)((char *)v282 + v309);
          v312 = (double *)(v522 + v309);
          v188.m128d_f64[0] = *v312 * *v311;
          *v312 = v188.m128d_f64[0];
          if ( v484 > v310 )
          {
            v313 = 8LL * v310;
            v314 = (double *)(v37 + v313);
            v315 = &v282[(unsigned __int64)v313 / 8];
            v316 = (double *)(v522 + v313);
            *v314 = *v314 / *v315;
            v188.m128d_f64[0] = *v316 * *v315;
            *v316 = v188.m128d_f64[0];
          }
        }
      }
      else
      {
        v411 = 0;
        do
        {
          *(double *)(v37 + v411) = *(double *)(v37 + v411) / v282[v411 / 8];
          v188.m128d_f64[0] = *(double *)(v522 + v411) * v282[v411 / 8];
          *(double *)(v522 + v411) = v188.m128d_f64[0];
          v411 += 8LL;
        }
        while ( v411 != v579 );
      }
    }
    if ( v504 )
    {
      operator delete[](v504);
      v491 = *(ClpModel **)v14;
    }
    ClpModel::setRowScale(v491, nullptr);
    ClpModel::setColumnScale(*(ClpModel **)v14, nullptr);
    if ( v493 )
      operator delete[](v493);
    if ( v496 )
      operator delete[](v496);
    if ( v18 )
      operator delete[]((void *)v18);
    v317 = *(ClpModel **)v14;
    v18 = 0;
    v493 = *(double **)(*(_QWORD *)v14 + 176LL);
    v496 = *(double **)(*(_QWORD *)v14 + 184LL);
    v318 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __int128 *, _QWORD, __int64, double, double, double, double, double, double, double))(*(_QWORD *)v14 + 160LL);
    if ( v318 )
    {
LABEL_473:
      v319 = (**v318)(
               v318,
               0,
               0,
               &v633,
               0,
               2,
               v188.m128d_f64[0],
               *(double *)v162.m128_u64,
               v199,
               v161,
               *(double *)&v187,
               v197.m128d_f64[0],
               *(double *)v160.m128i_i64);
      v317 = *(ClpModel **)v14;
      v18 = v319;
    }
  }
  else
  {
    v404 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __int128 *, _QWORD, __int64, double, double, double, double, double, double, double))v281
           + 20);
    v405 = 0;
    if ( v404 )
      v405 = (**v404)(
               v404,
               0,
               0,
               &v633,
               0,
               2,
               v188.m128d_f64[0],
               *(double *)v162.m128_u64,
               v199,
               v161,
               *(double *)&v187,
               v197.m128d_f64[0],
               *(double *)v160.m128i_i64);
    if ( v405 == v18 )
    {
      v317 = *(ClpModel **)v14;
    }
    else
    {
      if ( v18 )
        operator delete[]((void *)v18);
      v317 = *(ClpModel **)v14;
      v18 = 0;
      v318 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __int128 *, _QWORD, __int64, double, double, double, double, double, double, double))(*(_QWORD *)v14 + 160LL);
      if ( v318 )
        goto LABEL_473;
    }
  }
  if ( v588 )
  {
    v320 = *((double *)v317 + 5);
    if ( v485 > 0 )
    {
      v321 = 0;
      do
      {
        v322 = v531[v321 / 4];
        v323 = *(_DWORD *)(v535 + v321);
        v324 = *(double *)(v18 + 2 * v321) * v549;
        if ( (int)v322 < (int)v322 + v323 )
        {
          v325 = &v543[v322];
          v326 = &v603[v322];
          v327 = 0;
          do
          {
            v328 = *(double *)(s + 8LL * v325[v327]) * v326[v327];
            ++v327;
            v324 = v324 - v328;
          }
          while ( v327 != (unsigned int)(v323 - 1) + 1LL );
        }
        *(double *)(v18 + 2 * v321) = v324;
        v321 += 4LL;
      }
      while ( v321 != 4LL * v589 + 4 );
    }
    if ( v484 > 0 )
    {
      v329 = 0;
      do
      {
        v330 = *(double *)(s + v329) * v20[v329 / 8];
        v329 += 8LL;
        v320 = v320 + v330;
      }
      while ( v329 != v579 );
    }
    ClpModel::setDblParam(v317, 4);
    v317 = *(ClpModel **)v14;
  }
  if ( v569 != 0.0 && v484 > 0 )
  {
    if ( v585 <= 1 )
    {
      v335 = 0;
      goto LABEL_493;
    }
    v331 = 0;
    if ( (s & 8) != 0 )
    {
      v331 = 1;
      *(double *)s = *(double *)s - v569 * *(double *)v37;
    }
    v332 = 0;
    v333 = 0;
    v334 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v569, (__m128d)*(unsigned __int64 *)&v569);
    do
    {
      ++v333;
      *(__m128d *)(v614 + v332) = _mm_sub_pd(*(__m128d *)(v614 + v332), _mm_mul_pd(*(__m128d *)(v613 + v332), v334));
      v332 += 16;
    }
    while ( v617 > v333 );
    v335 = v616 + v331;
    if ( v616 != v615 )
    {
LABEL_493:
      v336 = v335;
      v337 = v335 + 1;
      *(double *)(s + 8 * v336) = *(double *)(s + 8 * v336) - *(double *)(v37 + 8 * v336) * v569;
      if ( v484 > v337 )
        *(double *)(s + 8LL * v337) = *(double *)(s + 8LL * v337) - v569 * *(double *)(v37 + 8LL * v337);
    }
  }
  *((double *)v14 + 9) = v512;
  if ( v619 )
    *((_DWORD *)v14 + 36) |= 0x4000u;
  Idiot::cleanIteration(
    v14,
    v203,
    v560,
    v571,
    v486,
    v493,
    v556,
    v496,
    *((const double **)v317 + 18),
    *((const double **)v317 + 19),
    (const double *)v18,
    v603,
    (double *)&v638.m128i_i64[1],
    (double *)v638.m128i_i64,
    &v630);
  *(_QWORD *)(*(_QWORD *)v14 + 896LL) = v638.m128i_i64[0];
  v633 = 0;
  v338 = 4LL * v589 + 4;
  v339 = (ClpModel *)v603;
  v513 = v14;
  v340 = 0;
  v341 = (double *)v543;
  while ( 2 )
  {
    if ( v340 )
    {
      if ( (_DWORD)v340 != 2 || *((double *)&v633 + 1) <= *(double *)&v633 || v567 )
      {
LABEL_500:
        v342 = v486;
      }
      else
      {
        if ( v581 <= 0 )
        {
          v421 = v486;
          v422 = v574;
        }
        else
        {
          v415 = v486;
          v416 = v574;
          do
          {
            v417 = *((_OWORD *)v416 + 1);
            v415 += 8;
            v416 += 8;
            v418 = *((_OWORD *)v416 - 2);
            v419 = *((_OWORD *)v416 - 1);
            v420 = *((_OWORD *)v416 - 4);
            *((_OWORD *)v415 - 3) = v417;
            *((_OWORD *)v415 - 4) = v420;
            *((_OWORD *)v415 - 2) = v418;
            *((_OWORD *)v415 - 1) = v419;
          }
          while ( v416 != v584 );
          v421 = v573;
          v422 = v584;
        }
        switch ( v580 )
        {
          case 1:
            goto LABEL_778;
          case 2:
            goto LABEL_777;
          case 3:
            goto LABEL_776;
          case 4:
            goto LABEL_775;
          case 5:
            goto LABEL_774;
          case 6:
            goto LABEL_773;
          case 7:
            v421[6] = v422[6];
LABEL_773:
            v421[5] = v422[5];
LABEL_774:
            v421[4] = v422[4];
LABEL_775:
            v421[3] = v422[3];
LABEL_776:
            v421[2] = v422[2];
LABEL_777:
            v421[1] = v422[1];
LABEL_778:
            v342 = v486;
            *v421 = *v422;
            break;
          default:
            goto LABEL_500;
        }
      }
    }
    else
    {
      v342 = v574;
    }
    v497 = (double *)v338;
    v494 = v341;
    v492 = v339;
    memset((void *)v37, 0, n);
    v343 = nullptr;
    v339 = v492;
    v341 = v494;
    v338 = (__int64)v497;
    if ( v485 > 0 )
    {
      do
      {
        v344 = *(int *)((char *)v343 + (_QWORD)v531);
        v345 = *(_DWORD *)((char *)v343 + v535);
        v346 = *(double *)((char *)v342 + 2 * (_QWORD)v343);
        if ( (int)v344 < (int)v344 + v345 )
        {
          v347 = (char *)v494 + 4 * v344;
          v348 = (char *)v492 + 8 * v344;
          v349 = 0;
          v350 = (unsigned int)(v345 - 1) + 1LL;
          do
          {
            v351 = *(int *)&v347[4 * v349];
            v352 = *(double *)&v348[8 * v349++];
            *(double *)(v37 + 8 * v351) = v352 * v346 + *(double *)(v37 + 8 * v351);
          }
          while ( v349 != v350 );
        }
        v343 = (double *)((char *)v343 + 4);
      }
      while ( v343 != v497 );
    }
    if ( v484 > 0 )
    {
      v353 = 0;
      v354 = 0.0;
      while ( 1 )
      {
        while ( 1 )
        {
          v355 = *(double *)(v37 + v353);
          v356 = v20[v353 / 8];
          if ( v355 <= v356 )
            break;
          v354 = fmax(v355 - v356, v354);
LABEL_509:
          v353 += 8LL;
          if ( v353 == v579 )
            goto LABEL_513;
        }
        v357 = v30[v353 / 8];
        if ( v357 <= v355 )
          goto LABEL_509;
        v353 += 8LL;
        v354 = fmax(v357 - v355, v354);
        if ( v353 == v579 )
          goto LABEL_513;
      }
    }
    v354 = 0.0;
LABEL_513:
    if ( v340 != 2 )
    {
      *((double *)&v633 + v340) = v354;
      if ( v590 <= 2 )
        goto LABEL_515;
      goto LABEL_593;
    }
    if ( v590 > 2 )
    {
LABEL_593:
      printf("largest infeasibility is %g\n", v354);
      v338 = (__int64)v497;
      v341 = v494;
      v339 = v492;
LABEL_515:
      if ( ++v340 == 3 )
        break;
      continue;
    }
    break;
  }
  v358 = v513;
  if ( v484 > 0 )
  {
    v359 = (v522 >> 3) & 1;
    v360 = 0;
    if ( 2 - (unsigned int)((_DWORD)v359 == 0) > v585 )
      goto LABEL_523;
    if ( (_DWORD)v359 )
    {
      v360 = 1;
      *(double *)v522 = *(double *)v522 - *(double *)s;
    }
    v361 = 0;
    v362 = 8 * ((v522 >> 3) & 1);
    v363 = v484 - v359;
    v364 = (unsigned int)(v484 - v359) >> 1;
    v365 = v522 + v362;
    v366 = s + v362;
    v367 = 0;
    do
    {
      ++v361;
      *(__m128d *)(v365 + v367) = _mm_sub_pd(*(__m128d *)(v365 + v367), *(__m128d *)(v366 + v367));
      v367 += 16;
    }
    while ( v364 > v361 );
    v360 += v363 & 0xFFFFFFFE;
    if ( (v363 & 0xFFFFFFFE) != v363 )
    {
LABEL_523:
      v368 = v360;
      v369 = v360 + 1;
      *(double *)(v522 + 8 * v368) = *(double *)(v522 + 8 * v368) - *(double *)(s + 8 * v368);
      if ( v484 > v369 )
        *(double *)(v522 + 8LL * v369) = *(double *)(v522 + 8LL * v369) - *(double *)(s + 8LL * v369);
    }
  }
  if ( v485 > 0 )
  {
    v370 = 0;
    do
    {
      v371 = v531[v370 / 4];
      v372 = *(_DWORD *)(v535 + v370);
      v373 = *(double *)(v18 + 2 * v370) * v549;
      if ( (int)v371 < (int)v371 + v372 )
      {
        v374 = &v543[v371];
        v375 = &v603[v371];
        v376 = 0;
        do
        {
          v377 = *(double *)(v522 + 8LL * v374[v376]) * v375[v376];
          ++v376;
          v373 = v373 - v377;
        }
        while ( v376 != (unsigned int)(v372 - 1) + 1LL );
      }
      v529[v370 / 4] = v373;
      v370 += 4LL;
    }
    while ( v370 != v338 );
    v358 = v513;
  }
  v378 = *((_DWORD *)v358 + 36);
  if ( (v378 & 0x400) != 0 && *(double *)v638.m128i_i64 > v582 * 0.01 * ((double)v485 / (double)v484) )
  {
    BYTE1(v378) &= ~4u;
    *((_DWORD *)v358 + 36) = v378;
  }
  operator delete[](v574);
  operator delete[]((void *)s);
  v379 = *(_QWORD **)v358;
  v380 = *(_QWORD **)(*(_QWORD *)v358 + 112LL);
  if ( (_QWORD *)v37 != v380 && v484 )
  {
    if ( v484 >> 3 <= 0 )
    {
      v386 = (_QWORD *)v37;
    }
    else
    {
      v381 = *(_QWORD **)(*(_QWORD *)v358 + 112LL);
      v382 = (__int64 *)v37;
      v383 = (unsigned int)((v484 >> 3) - 1);
      do
      {
        v384 = *v382;
        v381 += 8;
        v382 += 8;
        *(v381 - 8) = v384;
        *(v381 - 7) = *(v382 - 7);
        *(v381 - 6) = *(v382 - 6);
        *(v381 - 5) = *(v382 - 5);
        *(v381 - 4) = *(v382 - 4);
        *(v381 - 3) = *(v382 - 3);
        *(v381 - 2) = *(v382 - 2);
        *(v381 - 1) = *(v382 - 1);
      }
      while ( v381 != &v380[8 * v383 + 8] );
      v385 = ((int)v383 + 1LL) << 6;
      v386 = (_QWORD *)(v37 + v385);
      v380 = (_QWORD *)((char *)v380 + v385);
    }
    switch ( v484 % 8 )
    {
      case 1:
        goto LABEL_548;
      case 2:
        goto LABEL_547;
      case 3:
        goto LABEL_546;
      case 4:
        goto LABEL_545;
      case 5:
        goto LABEL_544;
      case 6:
        goto LABEL_543;
      case 7:
        v380[6] = v386[6];
LABEL_543:
        v380[5] = v386[5];
LABEL_544:
        v380[4] = v386[4];
LABEL_545:
        v380[3] = v386[3];
LABEL_546:
        v380[2] = v386[2];
LABEL_547:
        v380[1] = v386[1];
LABEL_548:
        *v380 = *v386;
        break;
      default:
        break;
    }
  }
  v387 = (double *)v379[15];
  v388 = v486;
  if ( v486 != v387 && v485 )
  {
    if ( v581 > 0 )
    {
      v389 = (_QWORD *)v379[15];
      do
      {
        v390 = *(_QWORD *)v388;
        v389 += 8;
        v388 += 8;
        *(v389 - 8) = v390;
        *(v389 - 7) = *((_QWORD *)v388 - 7);
        *(v389 - 6) = *((_QWORD *)v388 - 6);
        *(v389 - 5) = *((_QWORD *)v388 - 5);
        *(v389 - 4) = *((_QWORD *)v388 - 4);
        *(v389 - 3) = *((_QWORD *)v388 - 3);
        *(v389 - 2) = *((_QWORD *)v388 - 2);
        *(v389 - 1) = *((_QWORD *)v388 - 1);
      }
      while ( v389 != (_QWORD *)((char *)v387 + v621) );
      v391 = (v612 + 1LL) << 6;
      v388 = (double *)((char *)v486 + v391);
      v387 = (double *)((char *)v387 + v391);
    }
    switch ( v580 )
    {
      case 1:
        goto LABEL_562;
      case 2:
        goto LABEL_561;
      case 3:
        goto LABEL_560;
      case 4:
        goto LABEL_559;
      case 5:
        goto LABEL_558;
      case 6:
        goto LABEL_557;
      case 7:
        v387[6] = v388[6];
LABEL_557:
        v387[5] = v388[5];
LABEL_558:
        v387[4] = v388[4];
LABEL_559:
        v387[3] = v388[3];
LABEL_560:
        v387[2] = v388[2];
LABEL_561:
        v387[1] = v388[1];
LABEL_562:
        *v387 = *v388;
        break;
      default:
        break;
    }
  }
  v392 = (__int64 *)v379[16];
  v393 = (__int64 *)v522;
  if ( (__int64 *)v522 != v392 && v484 )
  {
    if ( v484 >> 3 > 0 )
    {
      v394 = (__int64 *)v379[16];
      v395 = (unsigned int)((v484 >> 3) - 1);
      do
      {
        v396 = *v393;
        v394 += 8;
        v393 += 8;
        *(v394 - 8) = v396;
        *(v394 - 7) = *(v393 - 7);
        *(v394 - 6) = *(v393 - 6);
        *(v394 - 5) = *(v393 - 5);
        *(v394 - 4) = *(v393 - 4);
        *(v394 - 3) = *(v393 - 3);
        *(v394 - 2) = *(v393 - 2);
        *(v394 - 1) = *(v393 - 1);
      }
      while ( v394 != &v392[8 * v395 + 8] );
      v397 = ((int)v395 + 1LL) << 6;
      v393 = (__int64 *)(v522 + v397);
      v392 = (__int64 *)((char *)v392 + v397);
    }
    switch ( v484 % 8 )
    {
      case 1:
        goto LABEL_576;
      case 2:
        goto LABEL_575;
      case 3:
        goto LABEL_574;
      case 4:
        goto LABEL_573;
      case 5:
        goto LABEL_572;
      case 6:
        goto LABEL_571;
      case 7:
        v392[6] = v393[6];
LABEL_571:
        v392[5] = v393[5];
LABEL_572:
        v392[4] = v393[4];
LABEL_573:
        v392[3] = v393[3];
LABEL_574:
        v392[2] = v393[2];
LABEL_575:
        v392[1] = v393[1];
LABEL_576:
        *v392 = *v393;
        break;
      default:
        break;
    }
  }
  v398 = (double *)v379[17];
  v399 = v529;
  if ( v529 != v398 && v485 )
  {
    if ( v581 <= 0 )
    {
      v403 = v529;
    }
    else
    {
      v400 = v379[17];
      do
      {
        v401 = *(_QWORD *)v399;
        v399 += 8;
        v400 += 64;
        *(_QWORD *)(v400 - 64) = v401;
        *(double *)(v400 - 56) = *(v399 - 7);
        *(double *)(v400 - 48) = *(v399 - 6);
        *(double *)(v400 - 40) = *(v399 - 5);
        *(double *)(v400 - 32) = *(v399 - 4);
        *(double *)(v400 - 24) = *(v399 - 3);
        *(double *)(v400 - 16) = *(v399 - 2);
        *(double *)(v400 - 8) = *(v399 - 1);
      }
      while ( v399 != (double *)((char *)v529 + v621) );
      v402 = (v612 + 1LL) << 6;
      v403 = (double *)((char *)v529 + v402);
      v398 = (double *)((char *)v398 + v402);
    }
    switch ( v580 )
    {
      case 1:
        goto LABEL_590;
      case 2:
        goto LABEL_589;
      case 3:
        goto LABEL_588;
      case 4:
        goto LABEL_587;
      case 5:
        goto LABEL_586;
      case 6:
        goto LABEL_585;
      case 7:
        v398[6] = v403[6];
LABEL_585:
        v398[5] = v403[5];
LABEL_586:
        v398[4] = v403[4];
LABEL_587:
        v398[3] = v403[3];
LABEL_588:
        v398[2] = v403[2];
LABEL_589:
        v398[1] = v403[1];
LABEL_590:
        *v398 = *v403;
        break;
      default:
        break;
    }
  }
  operator delete[]((void *)v37);
  operator delete[](v486);
  operator delete[]((void *)v522);
  operator delete[](v529);
  operator delete[](v30);
  operator delete[](v20);
}

