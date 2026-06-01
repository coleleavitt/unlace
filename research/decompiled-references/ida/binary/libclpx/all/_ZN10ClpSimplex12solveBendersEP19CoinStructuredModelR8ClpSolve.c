__int64 __fastcall ClpSimplex::solveBenders(
        ClpSimplex *this,
        CoinStructuredModel *a2,
        ClpSolve *a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  int v7; // r12d
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  int v12; // r12d
  int v13; // esi
  __int64 v14; // r15
  int IsSet; // ebx
  _DWORD *v16; // r14
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  struct rusage *v19; // rax
  __int64 tv_sec_high; // rdx
  __int64 v21; // rax
  int v22; // ecx
  int *v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  struct rusage *v27; // rcx
  __int64 tv_sec_low; // rax
  int *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // edx
  unsigned __int64 v34; // rdi
  ClpSimplex *v35; // rax
  __int64 v36; // rbx
  ClpSimplex *v37; // r15
  unsigned __int64 v38; // rax
  _DWORD *v39; // rbx
  __int64 v40; // rdx
  unsigned int v41; // eax
  bool v42; // cc
  int v43; // eax
  __m128i *v44; // rcx
  __m128i si128; // xmm0
  unsigned int v46; // edi
  unsigned int v47; // edx
  int v48; // edx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rdx
  int *v53; // r15
  int *v54; // rbx
  int v55; // esi
  int *v56; // rax
  int v57; // r12d
  int v58; // r13d
  const CoinPackedMatrix *v59; // r14
  __int64 (__fastcall ***v60)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  unsigned __int64 v61; // rax
  int v62; // r9d
  __int64 v63; // rdx
  int v64; // edi
  double *v65; // rsi
  unsigned int v66; // r10d
  unsigned int v67; // ecx
  __int64 v68; // rdx
  __int128 v69; // xmm1
  __int64 v70; // rdx
  int v71; // edi
  int v72; // eax
  int v73; // eax
  __int64 v74; // rbx
  unsigned __int64 v75; // rax
  int v76; // eax
  int v77; // eax
  unsigned __int64 v78; // rbx
  unsigned __int64 v79; // rbx
  __int64 v80; // rbx
  __int64 v81; // r12
  unsigned __int64 v82; // rax
  __int64 v83; // r13
  char *v84; // r15
  void *v85; // rax
  const void *v86; // rsi
  size_t v87; // rbx
  size_t v88; // r12
  char *v89; // rax
  char *v90; // rax
  char *v91; // rax
  int v92; // r12d
  unsigned __int64 v93; // rdi
  int *v94; // r13
  __int64 v95; // rax
  unsigned __int64 v96; // r12
  int *v97; // r14
  __int64 v98; // rax
  double *v99; // r12
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // esi
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rdx
  unsigned __int64 v106; // rax
  int ru_msgsnd_word_high; // r9d
  __int64 v108; // rdx
  int v109; // edi
  double *v110; // rsi
  unsigned int v111; // r10d
  unsigned int v112; // ecx
  __int64 v113; // rdx
  __int128 v114; // xmm0
  __int64 v115; // rdx
  int v116; // edi
  double v117; // xmm1_8
  __m128i v118; // xmm0
  CoinMessageHandler *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  int v125; // r15d
  __int64 v126; // r12
  _QWORD *v127; // r13
  unsigned __int64 v128; // rbx
  const void **v129; // r14
  unsigned __int64 v130; // rbx
  void *v131; // rax
  void *v132; // rcx
  __int64 v133; // rax
  double v134; // xmm2_8
  __int64 v135; // rax
  int v136; // esi
  __int64 v137; // rcx
  __int64 v138; // r10
  _DWORD *v139; // r10
  unsigned int v140; // edx
  unsigned int v141; // r14d
  size_t v142; // rcx
  unsigned int v143; // r8d
  __int64 v144; // rax
  unsigned int v145; // edi
  unsigned int v146; // edx
  unsigned int v147; // edi
  char *v148; // r9
  __int64 v149; // rax
  signed int v150; // eax
  int v151; // edx
  __int64 v152; // rcx
  int v153; // edx
  __int64 v154; // rcx
  int v155; // edx
  __int64 v156; // rcx
  int v157; // edx
  __int64 v158; // rcx
  int v159; // edx
  int v160; // eax
  __int64 v161; // rbx
  int v162; // r14d
  unsigned __int64 v163; // rax
  void *v164; // rax
  const void *v165; // rsi
  size_t v166; // rbx
  const ClpSimplex *v167; // r13
  char *v168; // rax
  size_t v169; // r14
  char *v170; // rax
  char *v171; // rax
  CoinMessageHandler *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rax
  __int64 v178; // rdi
  int v179; // esi
  __int64 v180; // rax
  __int128 v181; // xmm1
  CoinMessageHandler *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rax
  double v188; // xmm7_8
  __int64 v189; // rcx
  __int64 v190; // rax
  __int64 v191; // rsi
  __int64 v192; // r15
  __int64 (__fastcall ***v193)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64); // rdi
  __int64 v194; // rbx
  int *v195; // rsi
  void *v196; // r13
  int v197; // edx
  int v198; // eax
  __int64 v199; // r12
  double v200; // r13
  char *v201; // r12
  int v202; // r14d
  char *v203; // r13
  size_t v204; // rbx
  char *v205; // rsi
  char *v206; // r13
  _QWORD *v207; // r9
  double *v208; // rbx
  double *v209; // r14
  unsigned __int64 v210; // rax
  __int64 v211; // rcx
  double v212; // xmm0_8
  __int64 v213; // rax
  int *v214; // rax
  char *v215; // rbx
  __int64 v216; // r12
  int v217; // eax
  unsigned int v218; // edx
  double *v219; // rax
  int v220; // edi
  double *v221; // rax
  double v222; // xmm0_8
  int v223; // r15d
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rbx
  int v227; // eax
  int v228; // ecx
  CoinMessageHandler *v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  __int64 v234; // rax
  unsigned int v235; // r15d
  char *v236; // rbx
  __int64 v237; // r15
  int v238; // esi
  int v239; // eax
  unsigned int *v240; // rcx
  unsigned int v241; // eax
  __int64 v242; // rdx
  double v243; // r13
  int v244; // eax
  __int64 v245; // r14
  int v246; // r12d
  __int64 v247; // rax
  double v248; // xmm2_8
  __int64 v249; // rsi
  double v250; // xmm3_8
  double v251; // xmm0_8
  __int64 v252; // r14
  double *v253; // r12
  __int64 v254; // rax
  int v255; // esi
  double *v256; // rcx
  unsigned int v257; // edx
  unsigned int v258; // r8d
  __int64 v259; // rax
  unsigned int v260; // eax
  double *v261; // rdx
  int v262; // eax
  __int64 v263; // rsi
  __int64 v264; // rax
  int v265; // edi
  double *v266; // rcx
  unsigned int v267; // edx
  unsigned int v268; // r8d
  __int64 v269; // rax
  __int128 v270; // xmm1
  unsigned int v271; // eax
  double *v272; // rdx
  int v273; // eax
  __int64 v274; // rsi
  __int64 v275; // rax
  double v276; // xmm7_8
  double v277; // xmm0_8
  double v278; // xmm1_8
  unsigned __int64 v279; // r14
  unsigned __int64 v280; // r14
  unsigned __int64 *v281; // r13
  int v282; // eax
  __int64 v283; // r14
  __m128d v284; // xmm6
  char v285; // al
  __m128d v286; // rt1
  double v287; // xmm5_8
  double v288; // xmm1_8
  double v289; // xmm0_8
  double v290; // xmm0_8
  double v291; // xmm0_8
  double v292; // xmm6_8
  int v293; // r10d
  double v294; // xmm7_8
  double v295; // xmm5_8
  __int64 v296; // rax
  double v297; // xmm0_8
  double v298; // xmm8_8
  int v299; // r13d
  CoinMessageHandler *v300; // rax
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v305; // rax
  __int64 v306; // rax
  __int64 v307; // rax
  __int64 v308; // r13
  __int64 v309; // rsi
  char v310; // al
  double v311; // xmm0_8
  __int64 (__fastcall ***v312)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64); // rdi
  __int64 v313; // rax
  double v314; // xmm3_8
  __int64 v315; // rdx
  double v316; // xmm0_8
  char v317; // cl
  double v318; // xmm0_8
  double v319; // xmm6_8
  double v320; // xmm2_8
  __int64 v321; // rax
  double v322; // xmm4_8
  int v323; // r11d
  double v324; // xmm0_8
  double v325; // xmm7_8
  __int64 v326; // rdx
  __int64 v327; // rax
  double v328; // xmm5_8
  double *v329; // rdx
  int v330; // r12d
  CoinMessageHandler *v331; // rax
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // r9
  __int64 v336; // rax
  double v337; // xmm1_8
  __int64 v338; // rax
  __int64 v339; // rdi
  double v340; // xmm0_8
  double v341; // xmm7_8
  __int64 v342; // rax
  __int64 v343; // rax
  int v344; // esi
  double *v345; // rcx
  unsigned int v346; // edx
  unsigned int v347; // r8d
  __int64 v348; // rax
  unsigned int v349; // eax
  double *v350; // rdx
  int v351; // eax
  struct timeval v352; // xmm0
  CoinMessageHandler *v353; // rax
  __int64 v354; // rdx
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 v358; // rax
  int v359; // ecx
  __int64 v360; // rdx
  __int64 v361; // rsi
  __int64 v362; // rax
  double *v363; // rdi
  int *v364; // r8
  int v365; // r14d
  int v366; // eax
  double v367; // xmm0_8
  CoinMessageHandler *v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  __int64 v373; // rax
  void **v374; // r15
  __int64 v375; // rbx
  bool v376; // zf
  void **v377; // rbx
  void **v378; // r15
  __int64 v379; // rbx
  const double *v380; // r15
  int v381; // r13d
  __int64 v382; // r12
  int v383; // r9d
  __int64 v384; // rcx
  __int64 v385; // rsi
  double v386; // xmm0_8
  __int64 v387; // rsi
  _BYTE *v388; // rax
  __int64 v389; // rdx
  char *v390; // rbx
  int v391; // r13d
  __int64 v392; // r12
  int v393; // r14d
  int v394; // r10d
  __int64 v395; // r9
  __int64 v396; // rcx
  __int64 v397; // rsi
  double v398; // xmm0_8
  __int64 v399; // rsi
  _BYTE *v400; // rax
  __int64 v401; // rdx
  int v402; // ecx
  double *v403; // rdx
  __m128i v404; // xmm0
  int v405; // r9d
  int v406; // edi
  __int64 v407; // rcx
  _BYTE *v408; // r8
  __int64 v409; // rsi
  unsigned int v410; // eax
  int v411; // edx
  int v412; // eax
  double *v413; // rbx
  __int64 v414; // r12
  int v415; // ecx
  int v416; // r15d
  double v417; // xmm0_8
  struct timeval v418; // xmm0
  CoinMessageHandler *v419; // rax
  __int64 v420; // rdx
  __int64 v421; // rcx
  __int64 v422; // r8
  __int64 v423; // r9
  __int64 v424; // rax
  int v425; // r12d
  double v426; // xmm3_8
  __int64 v427; // rax
  int v428; // r8d
  __int64 v429; // rdx
  __int64 v430; // rax
  double *v431; // rdx
  int v432; // ebx
  int *v433; // r14
  int v434; // edi
  int v435; // esi
  __int64 v436; // rax
  __int64 v437; // r8
  __int64 v438; // rdx
  __int64 v439; // rcx
  int v440; // r9d
  int v441; // r9d
  __int64 v442; // rcx
  int v443; // r12d
  CoinMessageHandler *v444; // rax
  __int64 v445; // rdx
  __int64 v446; // rcx
  __int64 v447; // r8
  __int64 v448; // r9
  __int64 v449; // rax
  __int64 v450; // r15
  _DWORD *v451; // r12
  __int64 v452; // rax
  __int64 v453; // rbx
  int *v454; // r13
  double *v455; // r14
  CoinMessageHandler *v456; // rax
  __int64 v457; // rdx
  __int64 v458; // rcx
  __int64 v459; // r8
  __int64 v460; // r9
  __int64 v461; // rax
  int v462; // r9d
  __int64 v463; // rdx
  __int64 v464; // r10
  int v465; // ecx
  int v466; // ecx
  int v467; // r10d
  __int64 v468; // rcx
  __int64 v469; // r15
  __int64 (__fastcall ***v470)(_QWORD, double, double); // rdi
  _QWORD *v471; // rax
  __int64 (__fastcall ***v472)(_QWORD, _QWORD, _QWORD, struct rusage *, _QWORD, __int64); // rdi
  int v473; // r14d
  __int64 v474; // r12
  int v475; // eax
  unsigned __int64 v476; // rax
  char *v477; // rbx
  unsigned __int64 v478; // rax
  char *v479; // r11
  __int64 v480; // r9
  __int64 v481; // rax
  int v482; // edx
  int v483; // esi
  __int64 v484; // rdi
  unsigned __int64 v485; // r10
  __int64 v486; // rcx
  unsigned int v487; // esi
  __int64 v488; // r10
  __int64 v489; // rcx
  unsigned int v490; // edi
  __int128 v491; // xmm1
  int v492; // edx
  __int64 v493; // rsi
  double v494; // xmm2_8
  __int64 v495; // rdx
  int v496; // ecx
  __int64 v497; // rdi
  char *v498; // r9
  __int64 v499; // r8
  __int64 v500; // rdx
  __int64 v501; // rcx
  double v502; // xmm3_8
  char *v503; // rax
  __int64 v504; // rax
  _OWORD *v505; // rdx
  _DWORD *v506; // rax
  int v507; // ebx
  _OWORD *v508; // rdx
  __int64 v509; // rax
  _DWORD *v510; // rax
  double *v511; // rsi
  __int64 v512; // rax
  double *v513; // rax
  double *v514; // rax
  int v515; // ebx
  double *v516; // r15
  CoinMessageHandler *v517; // rax
  __int64 v518; // rdx
  __int64 v519; // rcx
  __int64 v520; // r8
  __int64 v521; // r9
  __int64 v522; // rax
  int v523; // r14d
  int v524; // r13d
  void **v525; // r12
  int v526; // ebx
  __m128i v527; // xmm2
  int v528; // r10d
  __m128i v529; // xmm6
  __int64 v530; // rcx
  unsigned int v531; // r11d
  unsigned int v532; // esi
  __m128i v533; // xmm4
  __m128i v534; // xmm0
  __m128i v535; // xmm3
  __m128i v536; // xmm1
  __m128i v537; // xmm0
  __m128i v538; // xmm3
  __m128i v539; // xmm2
  __m128i v540; // xmm1
  __m128i v541; // xmm2
  int v542; // edx
  __int64 v543; // rax
  bool v544; // cl
  _BYTE *v545; // r8
  __int64 v546; // rcx
  unsigned int v547; // eax
  int v548; // esi
  int v549; // eax
  __m128i v550; // xmm2
  int v551; // ebx
  __m128i v552; // xmm6
  unsigned int v553; // r11d
  const __m128i *v554; // rcx
  unsigned int v555; // r10d
  __m128i v556; // xmm4
  __m128i v557; // xmm0
  __m128i v558; // xmm3
  __m128i v559; // xmm1
  __m128i v560; // xmm0
  __m128i v561; // xmm3
  __m128i v562; // xmm2
  __m128i v563; // xmm1
  __m128i v564; // xmm2
  int v565; // ecx
  __int64 v566; // rax
  bool v567; // si
  int v568; // r8d
  CoinMessageHandler *v569; // rax
  __int64 v570; // rdx
  __int64 v571; // rcx
  __int64 v572; // r8
  __int64 v573; // r9
  __int64 v574; // rax
  double v575; // xmm0_8
  CoinMessageHandler *v576; // rax
  __int64 v577; // rdx
  __int64 v578; // rcx
  __int64 v579; // r8
  __int64 v580; // r9
  __int64 v581; // rax
  double v582; // xmm0_8
  CoinMessageHandler *v583; // rax
  __int64 v584; // rdx
  __int64 v585; // rcx
  __int64 v586; // r8
  __int64 v587; // r9
  __int64 v588; // rax
  ClpModel *v589; // rax
  ClpSimplex *v590; // rbx
  unsigned __int64 v591; // r15
  ClpSimplex *v592; // rdi
  int v594; // eax
  __int64 v595; // [rsp+0h] [rbp-A70h]
  __int64 v596; // [rsp+0h] [rbp-A70h]
  __int64 v597; // [rsp+0h] [rbp-A70h]
  __int64 v598; // [rsp+0h] [rbp-A70h]
  __int64 v599; // [rsp+0h] [rbp-A70h]
  __int64 v600; // [rsp+0h] [rbp-A70h]
  double v602; // [rsp+18h] [rbp-A58h]
  _DWORD *v603; // [rsp+28h] [rbp-A48h]
  char *v604; // [rsp+30h] [rbp-A40h]
  int v605; // [rsp+40h] [rbp-A30h]
  int v606; // [rsp+44h] [rbp-A2Ch]
  int ru_msgsnd; // [rsp+48h] [rbp-A28h]
  int v608; // [rsp+4Ch] [rbp-A24h]
  double v609; // [rsp+50h] [rbp-A20h]
  double v610; // [rsp+58h] [rbp-A18h]
  ClpModel *v611; // [rsp+60h] [rbp-A10h]
  _DWORD *v612; // [rsp+70h] [rbp-A00h]
  char *v613; // [rsp+78h] [rbp-9F8h]
  const void **v614; // [rsp+80h] [rbp-9F0h]
  _DWORD *v615; // [rsp+88h] [rbp-9E8h]
  double *v616; // [rsp+90h] [rbp-9E0h]
  _DWORD *v617; // [rsp+98h] [rbp-9D8h]
  int v618; // [rsp+A0h] [rbp-9D0h]
  int v619; // [rsp+A4h] [rbp-9CCh]
  __int64 v620; // [rsp+A8h] [rbp-9C8h]
  __int64 v621; // [rsp+B0h] [rbp-9C0h]
  __int64 v622; // [rsp+C8h] [rbp-9A8h]
  double v623; // [rsp+C8h] [rbp-9A8h]
  __int64 v624; // [rsp+D0h] [rbp-9A0h]
  double v625; // [rsp+D0h] [rbp-9A0h]
  CoinMessages *v626; // [rsp+D8h] [rbp-998h]
  __int64 v627; // [rsp+E0h] [rbp-990h]
  double v628; // [rsp+E0h] [rbp-990h]
  __int64 v629; // [rsp+E0h] [rbp-990h]
  int v630; // [rsp+E8h] [rbp-988h]
  __int64 v631; // [rsp+E8h] [rbp-988h]
  double *v632; // [rsp+F0h] [rbp-980h]
  __int64 v633; // [rsp+F0h] [rbp-980h]
  __int64 v634; // [rsp+F0h] [rbp-980h]
  size_t n; // [rsp+100h] [rbp-970h]
  double *na; // [rsp+100h] [rbp-970h]
  size_t nb; // [rsp+100h] [rbp-970h]
  int nc; // [rsp+100h] [rbp-970h]
  int nd; // [rsp+100h] [rbp-970h]
  CoinPackedMatrix **v640; // [rsp+108h] [rbp-968h]
  char *v641; // [rsp+110h] [rbp-960h]
  char *v642; // [rsp+110h] [rbp-960h]
  int *v643; // [rsp+118h] [rbp-958h]
  int v644; // [rsp+120h] [rbp-950h]
  int v645[2]; // [rsp+120h] [rbp-950h]
  int *v646; // [rsp+128h] [rbp-948h]
  __int64 v647; // [rsp+130h] [rbp-940h]
  int v648; // [rsp+130h] [rbp-940h]
  __int64 v649; // [rsp+130h] [rbp-940h]
  double *v650; // [rsp+138h] [rbp-938h]
  double *ru_nsignals; // [rsp+138h] [rbp-938h]
  double *v652; // [rsp+138h] [rbp-938h]
  int v653; // [rsp+140h] [rbp-930h]
  int v654; // [rsp+140h] [rbp-930h]
  __int64 v655; // [rsp+140h] [rbp-930h]
  double v656; // [rsp+140h] [rbp-930h]
  __int64 v657; // [rsp+140h] [rbp-930h]
  int v659; // [rsp+150h] [rbp-920h]
  void **v660; // [rsp+150h] [rbp-920h]
  int v661; // [rsp+150h] [rbp-920h]
  double v662; // [rsp+150h] [rbp-920h]
  double *v663; // [rsp+160h] [rbp-910h]
  double *v664; // [rsp+160h] [rbp-910h]
  double *v665; // [rsp+168h] [rbp-908h]
  double *v666; // [rsp+168h] [rbp-908h]
  int *v667; // [rsp+170h] [rbp-900h]
  bool v668; // [rsp+170h] [rbp-900h]
  int *v669; // [rsp+170h] [rbp-900h]
  double v670; // [rsp+170h] [rbp-900h]
  double v671; // [rsp+170h] [rbp-900h]
  int *v672; // [rsp+170h] [rbp-900h]
  _DWORD *v673; // [rsp+178h] [rbp-8F8h]
  int v674; // [rsp+178h] [rbp-8F8h]
  int v675; // [rsp+178h] [rbp-8F8h]
  __int64 v676; // [rsp+178h] [rbp-8F8h]
  int v677; // [rsp+180h] [rbp-8F0h]
  int v678; // [rsp+184h] [rbp-8ECh]
  double *v679; // [rsp+188h] [rbp-8E8h]
  double *v680; // [rsp+188h] [rbp-8E8h]
  double v681; // [rsp+188h] [rbp-8E8h]
  int v682; // [rsp+190h] [rbp-8E0h]
  int v683; // [rsp+190h] [rbp-8E0h]
  char *v684; // [rsp+190h] [rbp-8E0h]
  char *v685; // [rsp+190h] [rbp-8E0h]
  double v686; // [rsp+190h] [rbp-8E0h]
  unsigned int *v687; // [rsp+190h] [rbp-8E0h]
  __int64 v688; // [rsp+190h] [rbp-8E0h]
  struct rusage *v689; // [rsp+198h] [rbp-8D8h]
  int v690; // [rsp+198h] [rbp-8D8h]
  unsigned __int64 v692; // [rsp+1A8h] [rbp-8C8h]
  unsigned __int64 v693; // [rsp+1A8h] [rbp-8C8h]
  int v694; // [rsp+1A8h] [rbp-8C8h]
  __int64 v695; // [rsp+1A8h] [rbp-8C8h]
  const double *v696; // [rsp+1A8h] [rbp-8C8h]
  double v697; // [rsp+1A8h] [rbp-8C8h]
  double v698; // [rsp+1A8h] [rbp-8C8h]
  double v699; // [rsp+1A8h] [rbp-8C8h]
  int v700; // [rsp+1A8h] [rbp-8C8h]
  int v701; // [rsp+1A8h] [rbp-8C8h]
  int v702; // [rsp+1B0h] [rbp-8C0h]
  int v703; // [rsp+1B0h] [rbp-8C0h]
  __int64 v704; // [rsp+1B0h] [rbp-8C0h]
  double v705; // [rsp+1B0h] [rbp-8C0h]
  size_t v706; // [rsp+1B0h] [rbp-8C0h]
  double v707; // [rsp+1B0h] [rbp-8C0h]
  double v708; // [rsp+1B0h] [rbp-8C0h]
  double v709; // [rsp+1B0h] [rbp-8C0h]
  int *v710; // [rsp+1B0h] [rbp-8C0h]
  size_t v711; // [rsp+1B0h] [rbp-8C0h]
  int src; // [rsp+1B8h] [rbp-8B8h]
  int srcr; // [rsp+1B8h] [rbp-8B8h]
  int srca; // [rsp+1B8h] [rbp-8B8h]
  void *srcb; // [rsp+1B8h] [rbp-8B8h]
  void *srcc; // [rsp+1B8h] [rbp-8B8h]
  int *srcd; // [rsp+1B8h] [rbp-8B8h]
  double *srce; // [rsp+1B8h] [rbp-8B8h]
  int srcf; // [rsp+1B8h] [rbp-8B8h]
  int srcg; // [rsp+1B8h] [rbp-8B8h]
  void *srch; // [rsp+1B8h] [rbp-8B8h]
  double srci; // [rsp+1B8h] [rbp-8B8h]
  void *srcj; // [rsp+1B8h] [rbp-8B8h]
  double srck; // [rsp+1B8h] [rbp-8B8h]
  double srcl; // [rsp+1B8h] [rbp-8B8h]
  int srcm; // [rsp+1B8h] [rbp-8B8h]
  int *srcn; // [rsp+1B8h] [rbp-8B8h]
  _DWORD *srco; // [rsp+1B8h] [rbp-8B8h]
  int srcp; // [rsp+1B8h] [rbp-8B8h]
  char *srcq; // [rsp+1B8h] [rbp-8B8h]
  char v731[8]; // [rsp+1C8h] [rbp-8A8h] BYREF
  char v732[8]; // [rsp+1D0h] [rbp-8A0h] BYREF
  double *v733; // [rsp+1D8h] [rbp-898h] BYREF
  double *v734; // [rsp+1E0h] [rbp-890h] BYREF
  double *v735; // [rsp+1E8h] [rbp-888h] BYREF
  struct rusage v736; // [rsp+1F0h] [rbp-880h] BYREF
  struct rusage v737; // [rsp+280h] [rbp-7F0h] BYREF
  struct rusage usage; // [rsp+350h] [rbp-720h] BYREF
  __int64 (__fastcall ***v739)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // [rsp+3F0h] [rbp-680h]
  __int64 v740; // [rsp+400h] [rbp-670h]
  double *v741; // [rsp+428h] [rbp-648h]
  __int64 v742; // [rsp+458h] [rbp-618h]
  int v743; // [rsp+484h] [rbp-5ECh]
  int v744; // [rsp+490h] [rbp-5E0h]
  double v745; // [rsp+6C8h] [rbp-3A8h]
  double v746; // [rsp+6D0h] [rbp-3A0h]

  getrusage(RUSAGE_SELF, &usage);
  v7 = *((_DWORD *)a2 + 25);
  v8 = *((int *)a2 + 27);
  v606 = *((_DWORD *)a2 + 26);
  src = *((_DWORD *)a2 + 27);
  v692 = v8;
  v602 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  if ( v8 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_780;
  v9 = operator new[](16 * v8);
  v689 = (struct rusage *)v9;
  v10 = v9;
  if ( v8 )
  {
    v11 = 0;
    do
    {
      ++v11;
      *(_DWORD *)v9 = 0;
      *(_DWORD *)(v9 + 4) = 0;
      *(_BYTE *)(v9 + 8) = 0;
      *(_BYTE *)(v9 + 9) = 0;
      v9 += 16;
      *(_BYTE *)(v9 - 6) = 0;
      *(_BYTE *)(v9 - 5) = 0;
      *(_BYTE *)(v9 - 4) = 0;
      *(_BYTE *)(v9 - 3) = 0;
    }
    while ( v8 != v11 );
    v10 = (__int64)v689;
  }
  if ( src > 0 )
  {
    v682 = v7;
    v12 = 0;
    v702 = src;
    do
    {
      v13 = v12++;
      v14 = CoinStructuredModel::coinBlock(a2, v13);
      v10 += 16;
      IsSet = CoinModel::whatIsSet((CoinModel *)v14);
      srcr = CoinStructuredModel::rowBlock(a2, (const std::string *)(v14 + 40));
      *(_DWORD *)(v10 - 12) = CoinStructuredModel::columnBlock(a2, (const std::string *)(v14 + 48));
      *(_BYTE *)(v10 - 8) = IsSet & 1;
      *(_DWORD *)(v10 - 16) = srcr;
      *(_BYTE *)(v10 - 7) = (IsSet >> 1) & 1;
      *(_BYTE *)(v10 - 6) = (IsSet >> 2) & 1;
      *(_BYTE *)(v10 - 5) = (IsSet >> 5) & 1;
      *(_BYTE *)(v10 - 3) = (IsSet >> 4) & 1;
      *(_BYTE *)(v10 - 4) = (IsSet >> 3) & 1;
    }
    while ( v12 != v702 );
    v7 = v682;
    src = v702;
  }
  v678 = v606 - 1;
  if ( (unsigned __int64)v606 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_780;
  v641 = (char *)(4LL * v606);
  v16 = (_DWORD *)operator new[]((unsigned __int64)v641);
  if ( v606 )
  {
    v507 = v606;
    if ( v606 / 8 <= 0 )
    {
      v510 = v16;
    }
    else
    {
      v508 = v16;
      v509 = (unsigned int)(v606 / 8 - 1);
      do
      {
        *v508 = 0;
        v508 += 2;
        *(v508 - 1) = 0;
      }
      while ( &v16[8 * v509 + 8] != (_DWORD *)v508 );
      v507 = v606;
      v510 = &v16[8 * (int)v509 + 8];
    }
    switch ( v507 % 8 )
    {
      case 1:
        goto LABEL_680;
      case 2:
        goto LABEL_679;
      case 3:
        goto LABEL_678;
      case 4:
        goto LABEL_677;
      case 5:
        goto LABEL_676;
      case 6:
        goto LABEL_675;
      case 7:
        v510[6] = 0;
LABEL_675:
        v510[5] = 0;
LABEL_676:
        v510[4] = 0;
LABEL_677:
        v510[3] = 0;
LABEL_678:
        v510[2] = 0;
LABEL_679:
        v510[1] = 0;
LABEL_680:
        *v510 = 0;
        break;
      default:
        break;
    }
  }
  v17 = v7 + 1;
  if ( v17 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_780;
  v18 = 4 * v17;
  v603 = (_DWORD *)operator new[](v18);
  if ( v7 )
  {
    if ( v7 / 8 <= 0 )
    {
      v506 = v603;
    }
    else
    {
      v504 = (unsigned int)(v7 / 8 - 1);
      v505 = v603;
      do
      {
        *v505 = 0;
        v505 += 2;
        *(v505 - 1) = 0;
      }
      while ( &v603[8 * v504 + 8] != (_DWORD *)v505 );
      v506 = &v603[8 * (int)v504 + 8];
    }
    switch ( v7 % 8 )
    {
      case 1:
        goto LABEL_673;
      case 2:
        goto LABEL_672;
      case 3:
        goto LABEL_671;
      case 4:
        goto LABEL_670;
      case 5:
        goto LABEL_669;
      case 6:
        goto LABEL_668;
      case 7:
        v506[6] = 0;
LABEL_668:
        v506[5] = 0;
LABEL_669:
        v506[4] = 0;
LABEL_670:
        v506[3] = 0;
LABEL_671:
        v506[2] = 0;
LABEL_672:
        v506[1] = 0;
LABEL_673:
        *v506 = 0;
        break;
      default:
        break;
    }
  }
  if ( src > 0 )
  {
    v19 = v689;
    do
    {
      tv_sec_high = SHIDWORD(v19->ru_utime.tv_sec);
      v19 = (struct rusage *)((char *)v19 + 16);
      ++v16[tv_sec_high];
      ++v603[SLODWORD(v19[-1].ru_nvcsw)];
    }
    while ( &v689->ru_stime + (unsigned int)(src - 1) != (struct timeval *)v19 );
  }
  v650 = (double *)operator new[](4 * v692);
  v683 = -1;
  if ( v606 > 0 )
  {
    v21 = 0;
    v22 = -1;
    while ( 1 )
    {
      if ( (int)v16[v21] > 1 )
      {
        if ( v22 != -1 )
        {
          v683 = -2;
          break;
        }
        v22 = v21;
      }
      if ( (unsigned int)v678 + 1LL == ++v21 )
      {
        v683 = v22;
        break;
      }
    }
  }
  if ( v7 > 0 )
  {
    v23 = v603;
    v24 = 0;
    do
    {
      v25 = *v23;
      *v23++ = v24;
      v24 += v25;
    }
    while ( &v603[v7 - 1 + 1] != v23 );
  }
  v26 = 0;
  v27 = v689;
  if ( src > 0 )
  {
    do
    {
      tv_sec_low = SLODWORD(v27->ru_utime.tv_sec);
      v27 = (struct rusage *)((char *)v27 + 16);
      v29 = &v603[tv_sec_low];
      LODWORD(tv_sec_low) = *v29;
      *((_DWORD *)v650 + *v29) = v26++;
      *v29 = tv_sec_low + 1;
    }
    while ( v26 != src );
  }
  if ( v7 > 0 )
    memmove(
      (char *)v603 + v18 - (4LL * (unsigned int)(v7 - 1) + 4),
      (char *)v603 + v18 - 4 - (4LL * (unsigned int)(v7 - 1) + 4),
      4LL * (unsigned int)(v7 - 1) + 4);
  *v603 = 0;
  if ( v7 > 0 )
  {
    v30 = 0;
    v31 = 0;
    v703 = -1;
    v32 = (unsigned int)(v7 - 1) + 1LL;
    while ( 1 )
    {
      while ( 1 )
      {
        v33 = v603[v31 + 1];
        if ( v33 - (_DWORD)v30 == 1 && v683 == *((_DWORD *)&v689->ru_utime.tv_sec + 4 * *((int *)v650 + v30) + 1) )
          break;
        ++v31;
        v30 = v33;
        if ( v32 == v31 )
          goto LABEL_38;
      }
      if ( v703 != -1 )
        goto LABEL_751;
      v703 = v31++;
      v30 = v33;
      if ( v32 == v31 )
        goto LABEL_38;
    }
  }
  v703 = -1;
LABEL_38:
  if ( v683 < 0 )
LABEL_751:
    abort();
  operator delete[](v16);
  if ( (unsigned __int64)v7 > 0xFFFFFFFFFFFFFFFLL )
LABEL_780:
    __cxa_throw_bad_array_new_length();
  v640 = (CoinPackedMatrix **)operator new[](8LL * v7);
  v34 = -1;
  if ( (unsigned __int64)v678 <= 0x127350B8812735LL )
    v34 = 1776LL * v678 + 8;
  v604 = (char *)operator new[](v34);
  v35 = (ClpSimplex *)(v604 + 8);
  *(_QWORD *)v604 = v678;
  v36 = v678 - 1LL;
  v611 = (ClpModel *)(v604 + 8);
  if ( v36 >= 0 )
  {
    do
    {
      v37 = v35;
      ClpSimplex::ClpSimplex(v35, 0);
      --v36;
      v35 = (ClpSimplex *)((char *)v37 + 1776);
    }
    while ( v36 != -1 );
  }
  ClpSimplex::ClpSimplex((ClpSimplex *)&usage, 0);
  ClpModel::setObjectiveOffset((ClpModel *)&usage, *((double *)a2 + 3));
  if ( (unsigned __int64)v678 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  n = (size_t)(v641 - 4);
  v38 = operator new[]((unsigned __int64)(v641 - 4));
  v617 = (_DWORD *)v38;
  if ( v678 > 0 )
  {
    v39 = (_DWORD *)v38;
    v40 = -(int)(v38 >> 2) & 3;
    v41 = v40 + 3;
    if ( (unsigned int)(v40 + 3) < 5 )
      v41 = 5;
    v42 = v41 <= v606 - 2;
    v43 = 0;
    if ( !v42 )
      goto LABEL_56;
    if ( (_DWORD)v40 )
    {
      *v39 = 9999999;
      v43 = 1;
      if ( (_DWORD)v40 != 1 )
      {
        v39[1] = 9999999;
        v43 = 2;
        if ( (_DWORD)v40 != 2 )
        {
          v39[2] = 9999999;
          v43 = 3;
        }
      }
    }
    v44 = (__m128i *)&v39[v40];
    si128 = _mm_load_si128((const __m128i *)&xmmword_293C50);
    v46 = v678 - v40;
    v47 = 0;
    do
    {
      ++v47;
      ++v44;
      v44[-1] = si128;
    }
    while ( v46 >> 2 > v47 );
    v43 += v46 & 0xFFFFFFFC;
    if ( (v46 & 0xFFFFFFFC) != v46 )
    {
LABEL_56:
      v617[v43] = 9999999;
      if ( v678 > v43 + 1 )
      {
        v617[v43 + 1] = 9999999;
        if ( v678 > v43 + 2 )
        {
          v617[v43 + 2] = 9999999;
          if ( v678 > v43 + 3 )
          {
            v617[v43 + 3] = 9999999;
            v48 = v43 + 4;
            if ( v678 > v43 + 4 )
            {
              v49 = v43 + 5;
              v617[v48] = 9999999;
              if ( v678 > v49 )
                v617[v49] = 9999999;
            }
          }
        }
      }
    }
  }
  if ( v7 > 0 )
  {
    v665 = nullptr;
    v618 = -1;
    v653 = 0;
    v647 = (unsigned int)(v7 - 1) + 1LL;
    while ( 1 )
    {
      v679 = (double *)&v640[v653];
      *v679 = 0.0;
      v50 = v603[(_QWORD)v665];
      v51 = v603[(_QWORD)v665 + 1];
      if ( v50 < v51 )
        break;
LABEL_87:
      if ( v703 != (_DWORD)v665 )
        ++v653;
      v665 = (double *)((char *)v665 + 1);
      if ( (double *)v647 == v665 )
        goto LABEL_90;
    }
    v52 = v653;
    v53 = (int *)((char *)v611 + 1776 * v653);
    v667 = &v603[v52];
    v673 = &v617[v52];
    v54 = (int *)v650 + v50;
    v693 = (unsigned __int64)v650 + 4 * v50 + 4 * (unsigned __int64)(unsigned int)(v51 - 1 - v50) + 4;
    while ( 1 )
    {
      while ( 1 )
      {
        srca = *v54;
        v55 = *v54;
        v56 = (int *)(&v689->ru_utime + *v54);
        v57 = *v56;
        v58 = v56[1];
        if ( *v56 == v703 || v683 != v58 )
          break;
        *v679 = *(double *)(CoinStructuredModel::coinBlock(a2, v55) + 304);
LABEL_68:
        if ( (int *)v693 == ++v54 )
          goto LABEL_87;
      }
      v59 = *(const CoinPackedMatrix **)(CoinStructuredModel::coinBlock(a2, v55) + 304);
      CoinStructuredModel::block(
        a2,
        v57,
        v58,
        (const double **)&v735,
        (const double **)&v736,
        (const double **)&v733,
        (const double **)&v734,
        (const double **)&v737);
      if ( v57 == v703 )
      {
        ClpSimplex::loadProblem(
          (ClpSimplex *)&usage,
          v59,
          v733,
          v734,
          (const double *)v737.ru_utime.tv_sec,
          v735,
          (const double *)v736.ru_utime.tv_sec,
          nullptr);
        if ( *(double *)this < 0.0 )
        {
          v106 = v739 ? (**v739)(v739, 0, 0, v732, 0, 2) : 0LL;
          ru_msgsnd_word_high = HIDWORD(usage.__ru_msgsnd_word);
          if ( SHIDWORD(usage.__ru_msgsnd_word) > 0 )
          {
            v108 = (v106 >> 3) & 1;
            v109 = 0;
            if ( 2 - (unsigned int)((_DWORD)v108 == 0) > HIDWORD(usage.__ru_msgsnd_word) - 1 )
              goto LABEL_132;
            if ( (_DWORD)v108 )
            {
              v109 = 1;
              *(double *)v106 = -*(double *)v106;
            }
            v110 = (double *)(v106 + 8 * v108);
            v111 = ru_msgsnd_word_high - v108;
            v112 = 0;
            v113 = 0;
            do
            {
              v114 = *(_OWORD *)&v110[v113];
              ++v112;
              *(double *)&v114 = -*(double *)&v114;
              *((double *)&v114 + 1) = -*((double *)&v114 + 1);
              *(_OWORD *)&v110[v113] = v114;
              v113 += 2;
            }
            while ( v111 >> 1 > v112 );
            v109 += v111 & 0xFFFFFFFE;
            if ( (v111 & 0xFFFFFFFE) != v111 )
            {
LABEL_132:
              v115 = v109;
              v116 = v109 + 1;
              *(double *)(v106 + 8 * v115) = -*(double *)(v106 + 8 * v115);
              if ( ru_msgsnd_word_high > v116 )
                *(double *)(v106 + 8LL * v116) = -*(double *)(v106 + 8LL * v116);
            }
          }
        }
        v618 = srca;
        goto LABEL_68;
      }
      ClpSimplex::loadProblem(
        (ClpSimplex *)v53,
        v59,
        v733,
        v734,
        (const double *)v737.ru_utime.tv_sec,
        v735,
        (const double *)v736.ru_utime.tv_sec,
        nullptr);
      if ( *(double *)this < 0.0 )
      {
        v60 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))v53 + 20);
        v61 = v60 ? (**v60)(v60, 0, 0, v731, 0, 2) : 0LL;
        v62 = v53[27];
        if ( v62 > 0 )
        {
          v63 = (v61 >> 3) & 1;
          v64 = 0;
          if ( 2 - (unsigned int)((_DWORD)v63 == 0) > v62 - 1 )
            goto LABEL_81;
          if ( (_DWORD)v63 )
          {
            v64 = 1;
            *(double *)v61 = -*(double *)v61;
          }
          v65 = (double *)(v61 + 8 * v63);
          v66 = v62 - v63;
          v67 = 0;
          v68 = 0;
          do
          {
            ++v67;
            *(double *)&v69 = -v65[v68];
            *((double *)&v69 + 1) = -v65[v68 + 1];
            *(_OWORD *)&v65[v68] = v69;
            v68 += 2;
          }
          while ( v66 >> 1 > v67 );
          v64 += v66 & 0xFFFFFFFE;
          if ( (v66 & 0xFFFFFFFE) != v66 )
          {
LABEL_81:
            v70 = v64;
            v71 = v64 + 1;
            *(double *)(v61 + 8 * v70) = -*(double *)(v61 + 8 * v70);
            if ( v62 > v71 )
              *(double *)(v61 + 8LL * v71) = -*(double *)(v61 + 8LL * v71);
          }
        }
      }
      if ( (unsigned int)ClpSimplex::factorizationFrequency(this) == 200 )
      {
        ClpSimplex::defaultFactorizationFrequency((ClpSimplex *)v53);
      }
      else
      {
        v72 = ClpSimplex::factorizationFrequency(this);
        ClpSimplex::setFactorizationFrequency((ClpSimplex *)v53, v72);
      }
      ClpSimplex::setPerturbation((ClpSimplex *)v53, 50);
      *v673 = v53[27];
      if ( *((int *)this + 74) <= 999999 )
      {
        puts("** Adding artificials");
        v92 = 2 * v53[26];
        v659 = v53[26];
        v93 = v92 + 1;
        if ( v93 > 0x1FFFFFFFFFFFFFFELL )
          __cxa_throw_bad_array_new_length();
        v94 = (int *)operator new[](4 * v93);
        if ( (unsigned __int64)v92 > 0x1FFFFFFFFFFFFFFELL )
          __cxa_throw_bad_array_new_length();
        v95 = operator new[](4LL * v92);
        v96 = 8LL * v92;
        v97 = (int *)v95;
        v98 = operator new[](v96);
        *v94 = 0;
        v664 = (double *)v98;
        v99 = (double *)operator new[](v96);
        v100 = *((_QWORD *)v53 + 18);
        v101 = *((_QWORD *)v53 + 19);
        if ( v659 > 0 )
        {
          a7 = 100000.0;
          v102 = 0;
          a6 = -1.0e20;
          v103 = 0;
          do
          {
            if ( *(double *)(v100 + 8 * v103) > -1.0e20 )
            {
              v104 = v102++;
              v664[v104] = 1.0;
              v97[v104] = v103;
              v94[v104 + 1] = v102;
              v99[v104] = 100000.0;
            }
            if ( *(double *)(v101 + 8 * v103) < 1.0e20 )
            {
              v105 = v102++;
              v664[v105] = -1.0;
              v97[v105] = v103;
              v94[v105 + 1] = v102;
              v99[v105] = 100000.0;
            }
            ++v103;
          }
          while ( (unsigned int)(v659 - 1) + 1LL != v103 );
          if ( v102 )
            ClpModel::addColumns((ClpModel *)v53, v102, nullptr, nullptr, v99, v94, v97, v664);
        }
        operator delete[](v94);
        operator delete[](v97);
        operator delete[](v664);
        operator delete[](v99);
      }
      ++v54;
      *v667 = srca;
      if ( (int *)v693 == v54 )
        goto LABEL_87;
    }
  }
  v618 = -1;
LABEL_90:
  operator delete[](v650);
  operator delete[](v689);
  v677 = HIDWORD(usage.__ru_msgsnd_word);
  std::string::string();
  ClpModel::setStrParam();
  if ( (_UNKNOWN *)(v737.ru_utime.tv_sec - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v594 = _InterlockedExchangeAdd((volatile signed __int32 *)(v737.ru_utime.tv_sec - 24 + 16), 0xFFFFFFFF);
    }
    else
    {
      v594 = *(_DWORD *)(v737.ru_utime.tv_sec - 8);
      *(_DWORD *)(v737.ru_utime.tv_sec - 8) = v594 - 1;
    }
    if ( v594 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v73 = v678 * (v677 + 1);
  if ( v73 < 2 * v677 )
    v73 = 2 * v677;
  v74 = v73;
  if ( (unsigned __int64)v73 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v646 = (int *)operator new[](4LL * v73);
  v666 = (double *)operator new[](8 * v74);
  v75 = 2 * v678 + 1;
  if ( v75 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v643 = (int *)operator new[](4 * v75);
  v613 = &v641[(_QWORD)v643];
  srcb = (void *)(8LL * v678);
  v616 = (double *)operator new[]((unsigned __int64)srcb);
  v690 = *(_DWORD *)(*((_QWORD *)this + 43) + 104LL);
  v76 = 100;
  if ( *((int *)a3 + 19) > 1 )
    v76 = *((_DWORD *)a3 + 19);
  v619 = v76;
  ru_msgsnd = usage.ru_msgsnd;
  if ( (unsigned int)ClpSimplex::factorizationFrequency(this) == 200 )
  {
    ClpSimplex::defaultFactorizationFrequency((ClpSimplex *)&usage);
  }
  else
  {
    v77 = ClpSimplex::factorizationFrequency(this);
    ClpSimplex::setFactorizationFrequency((ClpSimplex *)&usage, v77);
  }
  ClpSimplex::setPerturbation((ClpSimplex *)&usage, 50);
  v78 = 2 * (v677 + 5 * v678);
  v605 = 2 * (v677 + 5 * v678);
  if ( v78 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v79 = 4 * v78;
  v612 = (_DWORD *)operator new[](v79);
  v615 = (_DWORD *)operator new[](v79);
  v642 = (char *)operator new[](n);
  memset(v642, 0, n);
  v663 = (double *)operator new[]((unsigned __int64)srcb);
  *v646 = 0;
  if ( v678 > 0 )
  {
    v80 = *((int *)v604 + 28);
    v81 = *((int *)v604 + 29);
    v82 = (int)v80 + 2 * ((int)v80 + (int)v81);
    if ( v82 > 0xFFFFFFFFFFFFFFFLL )
LABEL_781:
      __cxa_throw_bad_array_new_length();
    v83 = 0;
    v84 = v604 + 8;
    while ( 1 )
    {
      v85 = (void *)operator new[](8 * v82);
      v86 = *((const void **)v84 + 18);
      v87 = 8 * v80;
      v88 = 8 * v81;
      *(_QWORD *)&v663[v83] = v85;
      v89 = (char *)memcpy(v85, v86, v87);
      v90 = (char *)memcpy(&v89[v87], *((const void **)v84 + 22), v88);
      v91 = (char *)memcpy(&v90[v88], *((const void **)v84 + 19), v87);
      memcpy(&v91[v87], *((const void **)v84 + 23), v88);
      v616[v83] = 1.0;
      v646[v83 + 1] = 0;
      v615[v83] = -1;
      v612[v83] = v83;
      if ( v690 <= 1 )
      {
        CoinMessages::setDetailMessage((CoinMessages *)(v84 + 416), 2, 6);
        CoinMessages::setDetailMessage((CoinMessages *)(v84 + 416), 2, 14);
        CoinMessages::setDetailMessage((CoinMessages *)(v84 + 416), 2, 0);
      }
      ClpModel::scaling((ClpModel *)v84, *((_DWORD *)this + 64));
      if ( v84 == &v604[1776 * (v606 - 2) + 8] )
        break;
      ++v83;
      v80 = *((int *)v84 + 470);
      v81 = *((int *)v84 + 471);
      v84 += 1776;
      v82 = (int)v80 + 2 * ((int)v80 + (int)v81);
      if ( v82 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_781;
    }
  }
  ClpModel::addColumns((ClpModel *)&usage, v678, nullptr, nullptr, v616, v646, nullptr, nullptr);
  getrusage(RUSAGE_SELF, &v737);
  v117 = (double)SLODWORD(v737.ru_utime.tv_sec);
  *(double *)v118.m128i_i64 = (double)SLODWORD(v737.ru_utime.tv_usec) * 0.000001
                            + (double)SLODWORD(v737.ru_utime.tv_sec)
                            - v602;
  sprintf((char *)&v737, "Time to decompose %.2f seconds", *(double *)v118.m128i_i64);
  v626 = (ClpSimplex *)((char *)this + 416);
  v119 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)this + 43),
                                 92,
                                 (ClpSimplex *)((char *)this + 416));
  v124 = CoinMessageHandler::operator<<(v119, (__int64)&v737, v120, v121, v122, v123, v595);
  CoinMessageHandler::operator<<(v124, 0, *(double *)v118.m128i_i64);
  v125 = *((_DWORD *)this + 74) - 100000;
  if ( (unsigned int)v125 > 0x3E6 )
  {
    v614 = (const void **)operator new[]((unsigned __int64)srcb);
    if ( v678 <= 0 )
      goto LABEL_179;
    v125 = 0;
    goto LABEL_138;
  }
  printf("ixxxxxx %d\n", v125);
  v614 = (const void **)operator new[]((unsigned __int64)srcb);
  if ( v678 > 0 )
  {
LABEL_138:
    v126 = 0;
    v127 = v604 + 168;
    do
    {
      if ( *v127 )
      {
        v128 = (int)v617[v126];
        srcc = (void *)(**(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64))*v127)(
                         *v127,
                         0,
                         0,
                         &v733,
                         0,
                         2);
        v129 = &v614[v126];
        if ( srcc )
        {
          if ( v128 > 0xFFFFFFFFFFFFFFFLL )
            __cxa_throw_bad_array_new_length();
          v130 = 8 * v128;
          v131 = (void *)operator new[](v130);
          v132 = memcpy(v131, srcc, v130);
        }
        else
        {
          v132 = nullptr;
        }
      }
      else
      {
        v132 = nullptr;
        v129 = &v614[v126];
      }
      ++v126;
      v127 += 222;
      *v129 = v132;
    }
    while ( v678 > (int)v126 );
  }
  if ( !v125 )
    goto LABEL_179;
  if ( v678 <= v125 )
    v125 = v606 - 1;
  if ( v125 <= 0 )
    goto LABEL_179;
  v167 = (const ClpSimplex *)(v604 + 8);
  v660 = (void **)v663;
  v629 = (__int64)&v604[1776 * (v125 - 1) + 1784];
  do
  {
    v469 = operator new(0x6F0u);
    ClpSimplex::ClpSimplex((ClpSimplex *)v469, v167, -1);
    v470 = *(__int64 (__fastcall ****)(_QWORD, double, double))(v469 + 192);
    if ( !v470 )
      BUG();
    v701 = *(_DWORD *)(v469 + 104);
    v471 = (_QWORD *)(**v470)(v470, *(double *)v118.m128i_i64, v117);
    v472 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, struct rusage *, _QWORD, __int64))(v469 + 160);
    v473 = *(_DWORD *)(v469 + 108);
    v474 = *(_QWORD *)(v469 + 184);
    v652 = (double *)v471[5];
    v676 = v471[7];
    v657 = v471[6];
    v688 = v471[4];
    v634 = *(_QWORD *)(v469 + 144);
    v631 = *(_QWORD *)(v469 + 152);
    srcq = *(char **)(v469 + 176);
    if ( v472 )
      v649 = (**v472)(v472, 0, 0, &v736, 0, 2);
    else
      v649 = 0;
    v475 = v701;
    if ( v701 < v473 )
      v475 = v473;
    v476 = v473 + v475;
    if ( v476 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v477 = (char *)operator new[](8 * v476);
    v478 = 2 * v473 + 1;
    if ( v478 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v711 = operator new[](4 * v478);
    memset(v477, 0, 8LL * v701);
    *(_QWORD *)v645 = v473;
    v479 = &v477[8 * v473];
    v672 = (int *)(v711 + 4LL * v473 + 4);
    if ( v473 <= 0 )
    {
      if ( v701 > 0 )
      {
        v118.m128i_i64[0] = 0xFFEFFFFFFFFFFFFFLL;
        goto LABEL_146;
      }
      goto LABEL_652;
    }
    v118.m128i_i64[0] = 0xFFEFFFFFFFFFFFFFLL;
    v480 = 4LL * (unsigned int)(v473 - 1) + 4;
    a7 = 1.797693134862316e308;
    v481 = 0;
    do
    {
      while ( *(double *)&srcq[2 * v481] != -1.797693134862316e308
           || *(double *)(v474 + 2 * v481) == 1.797693134862316e308 )
      {
        v481 += 4;
        if ( v480 == v481 )
          goto LABEL_640;
      }
      v482 = *(_DWORD *)(v657 + v481);
      v483 = *(_DWORD *)(v676 + v481);
      nd = v482 + v483;
      if ( v482 < v482 + v483 )
      {
        v484 = v482;
        v485 = v688 + 8LL * v482;
        v486 = (v485 >> 3) & 1;
        if ( 2 - (unsigned int)((_DWORD)v486 == 0) > v483 - 1 )
          goto LABEL_637;
        if ( (_DWORD)v486 )
        {
          ++v482;
          *(double *)v485 = -*(double *)v485;
        }
        v487 = v483 - v486;
        v488 = v688 + 8 * (v484 + v486);
        v489 = 0;
        v490 = 0;
        do
        {
          v491 = *(_OWORD *)(v488 + v489);
          ++v490;
          *(double *)&v491 = -*(double *)&v491;
          *((double *)&v491 + 1) = -*((double *)&v491 + 1);
          *(_OWORD *)(v488 + v489) = v491;
          v489 += 16;
        }
        while ( v490 < v487 >> 1 );
        v482 += v487 & 0xFFFFFFFE;
        if ( (v487 & 0xFFFFFFFE) != v487 )
        {
          v484 = v482;
LABEL_637:
          v492 = v482 + 1;
          *(double *)(v688 + 8 * v484) = -*(double *)(v688 + 8 * v484);
          if ( nd > v492 )
            *(double *)(v688 + 8LL * v492) = -*(double *)(v688 + 8LL * v492);
        }
      }
      *(double *)(v649 + 2 * v481) = -*(double *)(v649 + 2 * v481);
      *(double *)&srcq[2 * v481] = -*(double *)(v474 + 2 * v481);
      *(_QWORD *)(v474 + 2 * v481) = 0x7FEFFFFFFFFFFFFFLL;
      v481 += 4;
    }
    while ( v480 != v481 );
LABEL_640:
    v479 = &v477[8 * v473];
    v493 = 0;
    do
    {
      v494 = *(double *)&srcq[2 * v493];
      if ( v494 != 0.0 )
      {
        v495 = *(int *)(v657 + v493);
        v496 = *(_DWORD *)(v676 + v493);
        if ( (int)v495 < (int)v495 + v496 )
        {
          v497 = (unsigned int)(v496 - 1) + 1LL;
          v498 = (char *)v652 + 4 * v495;
          v499 = v688 + 8 * v495;
          v500 = 0;
          do
          {
            v501 = *(int *)&v498[4 * v500];
            v502 = *(double *)(v499 + 8 * v500++);
            a7 = v502 * v494;
            *(double *)&v477[8 * v501] = *(double *)&v477[8 * v501] - a7;
          }
          while ( v497 != v500 );
        }
      }
      v493 += 4;
    }
    while ( v481 != v493 );
    a6 = 0.0;
    if ( v701 <= 0 )
    {
LABEL_154:
      v117 = 1.797693134862316e308;
      v135 = 0;
      v136 = 0;
      do
      {
        v118.m128i_i64[0] = *(_QWORD *)(v474 + 8 * v135);
        v137 = v136;
        v138 = 4LL * v136;
        if ( *(double *)v118.m128i_i64 != 0.0 && *(double *)v118.m128i_i64 < 1.797693134862316e308 )
        {
          *(_QWORD *)&v477[8 * v136++] = v118.m128i_i64[0];
          v138 += 4;
          v672[v137] = v135;
          *(_QWORD *)(v474 + 8 * v135) = 0x7FEFFFFFFFFFFFFFLL;
        }
        ++v135;
      }
      while ( v473 > (int)v135 );
      v139 = (_DWORD *)(v711 + v138);
      if ( v136 )
      {
        v140 = -(int)(v711 >> 2) & 3;
        if ( (unsigned int)(v136 - 1) <= 6 )
        {
          v150 = 0;
        }
        else
        {
          v141 = 0;
          if ( v140 )
          {
            *(_DWORD *)v711 = 0;
            v141 = 1;
            *(_QWORD *)v479 = 0x3FF0000000000000LL;
            if ( v140 != 1 )
            {
              *(_DWORD *)(v711 + 4) = 1;
              *((_QWORD *)v479 + 1) = 0x3FF0000000000000LL;
              v141 = 2;
              if ( v140 != 2 )
              {
                *((_QWORD *)v479 + 2) = 0x3FF0000000000000LL;
                *(_DWORD *)(v711 + 8) = 2;
                v141 = 3;
              }
            }
          }
          v142 = v711 + 4LL * v140;
          v143 = v136 - v140;
          v144 = *(_QWORD *)v645 + v140;
          v145 = v136 - v140;
          v146 = 0;
          v147 = v145 >> 2;
          v148 = &v477[8 * v144];
          v149 = 0;
          v118 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v141), 0), (__m128i)xmmword_289BB0);
          do
          {
            ++v146;
            *(__m128i *)(v142 + v149) = v118;
            v118 = _mm_add_epi32(v118, (__m128i)xmmword_289BC0);
            *(_OWORD *)&v148[2 * v149] = xmmword_289DC0;
            *(_OWORD *)&v148[2 * v149 + 16] = xmmword_289DC0;
            v149 += 16;
          }
          while ( v146 < v147 );
          v150 = (v143 & 0xFFFFFFFC) + v141;
          if ( (v143 & 0xFFFFFFFC) == v143 )
            goto LABEL_175;
        }
        v118.m128i_i64[0] = 0x3FF0000000000000LL;
        *(_QWORD *)&v479[8 * v150] = 0x3FF0000000000000LL;
        *(_DWORD *)(v711 + 4LL * v150) = v150;
        v151 = v150 + 1;
        if ( v136 > v150 + 1 )
        {
          v152 = v151;
          *(_DWORD *)(v711 + 4LL * v151) = v151;
          v153 = v150 + 2;
          *(_QWORD *)&v479[8 * v152] = 0x3FF0000000000000LL;
          if ( v136 > v150 + 2 )
          {
            v154 = v153;
            *(_DWORD *)(v711 + 4LL * v153) = v153;
            v155 = v150 + 3;
            *(_QWORD *)&v479[8 * v154] = 0x3FF0000000000000LL;
            if ( v136 > v150 + 3 )
            {
              v156 = v155;
              *(_DWORD *)(v711 + 4LL * v155) = v155;
              v157 = v150 + 4;
              *(_QWORD *)&v479[8 * v156] = 0x3FF0000000000000LL;
              if ( v136 > v150 + 4 )
              {
                v158 = v157;
                *(_DWORD *)(v711 + 4LL * v157) = v157;
                v159 = v150 + 5;
                *(_QWORD *)&v479[8 * v158] = 0x3FF0000000000000LL;
                if ( v136 > v150 + 5 )
                {
                  v160 = v150 + 6;
                  *(_DWORD *)(v711 + 4LL * v159) = v159;
                  *(_QWORD *)&v479[8 * v159] = 0x3FF0000000000000LL;
                  if ( v136 > v160 )
                  {
                    *(_QWORD *)&v479[8 * v160] = 0x3FF0000000000000LL;
                    *(_DWORD *)(v711 + 4LL * v160) = v160;
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
LABEL_146:
      v133 = 0;
      v117 = 1.797693134862316e308;
      do
      {
        v134 = *(double *)(v634 + 8 * v133);
        a7 = *(double *)&v477[8 * v133];
        if ( v134 > -1.797693134862316e308 )
          *(double *)(v634 + 8 * v133) = v134 - a7;
        a6 = *(double *)(v631 + 8 * v133);
        if ( a6 < 1.797693134862316e308 )
        {
          a6 = a6 - a7;
          *(double *)(v631 + 8 * v133) = a6;
        }
        ++v133;
      }
      while ( v701 > (int)v133 );
      if ( v473 > 0 )
      {
        a6 = 0.0;
        goto LABEL_154;
      }
LABEL_652:
      v139 = (_DWORD *)v711;
      v136 = 0;
    }
LABEL_175:
    *v139 = v136;
    ClpModel::addRows(
      (ClpModel *)v469,
      v136,
      nullptr,
      (const double *)v477,
      (const int *)v711,
      v672,
      (const double *)v479);
    operator delete[]((void *)v711);
    operator delete[](v477);
    ClpSimplex::operator=(v167, (ClpSimplex *)v469);
    ClpSimplex::~ClpSimplex((ClpSimplex *)v469);
    operator delete((void *)v469);
    if ( *v660 )
      operator delete[](*v660);
    v161 = *((int *)v167 + 26);
    v162 = *((_DWORD *)v167 + 27);
    v163 = (int)v161 + 2 * ((int)v161 + v162);
    if ( v163 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v164 = (void *)operator new[](8 * v163);
    v165 = *((const void **)v167 + 18);
    v166 = 8 * v161;
    v167 = (const ClpSimplex *)((char *)v167 + 1776);
    *v660 = v164;
    v168 = (char *)memcpy(v164, v165, v166);
    v169 = 8LL * v162;
    v170 = (char *)memcpy(&v168[v166], *((const void **)v167 - 200), v169);
    v171 = (char *)memcpy(&v170[v169], *((const void **)v167 - 203), v166);
    memcpy(&v171[v166], *((const void **)v167 - 199), v169);
    ++v660;
  }
  while ( v167 != (const ClpSimplex *)v629 );
LABEL_179:
  v608 = 0;
  v644 = 999;
  v668 = 0;
  v648 = 0;
  v610 = 0.000001;
  v609 = -1.0e31;
  do
  {
    sprintf((char *)&v737, "Start of pass %d", v648);
    v172 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v626);
    v177 = CoinMessageHandler::operator<<(v172, (__int64)&v737, v173, v174, v175, v176, v596);
    CoinMessageHandler::operator<<(v177, 0, *(double *)v118.m128i_i64);
    v178 = v740;
    if ( v678 > 0 )
    {
      v179 = 0;
      v180 = 0;
      do
      {
        if ( *(_DWORD *)&v642[4 * v180] == 1 )
        {
          ++v179;
          *(_QWORD *)(v178 + 8LL * (v677 + (int)v180)) = 0xFFEFFFFFFFFFFFFFLL;
          *(_DWORD *)&v642[4 * v180] = 3;
        }
        ++v180;
      }
      while ( (unsigned int)(v606 - 2) + 1LL != v180 );
      if ( v179 )
        v609 = -1.0e31;
    }
    ClpSimplex::dual((ClpSimplex *)&usage, 0, 0);
    if ( v619 == 5000 )
    {
      if ( !*((_DWORD *)this + 64) )
        goto LABEL_189;
LABEL_556:
      v432 = v743;
      ClpModel::scaling((ClpModel *)&usage, 0);
      ClpSimplex::primal((ClpSimplex *)&usage, 0, 0);
      v743 += v432;
      ClpModel::scaling((ClpModel *)&usage, *((_DWORD *)this + 64));
      goto LABEL_189;
    }
    if ( v619 == 4000 && !*((_DWORD *)this + 64) )
      goto LABEL_556;
LABEL_189:
    v674 = v744;
    *(double *)v118.m128i_i64 = *(double *)&usage.ru_utime.tv_sec * *(double *)&usage.ru_majflt
                              - *(double *)&usage.ru_ixrss;
    *(double *)&v181 = *(double *)v118.m128i_i64 - v609;
    sprintf(
      (char *)&v737,
      "Pass %d objective %g change %g",
      v648,
      *(double *)v118.m128i_i64,
      *(double *)v118.m128i_i64 - v609);
    v182 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v626);
    v187 = CoinMessageHandler::operator<<(v182, (__int64)&v737, v183, v184, v185, v186, v597);
    CoinMessageHandler::operator<<(v187, 0, *(double *)v118.m128i_i64);
    if ( !v674 )
    {
      if ( v743 || !v648 )
      {
        if ( !v608 && v610 > 0.000001 )
        {
          v610 = fmax(v610 * 0.9, 0.000001);
          printf("Reducing sub primal tolerance to %g\n", v610);
        }
      }
      else
      {
        if ( !(v608 | v644) )
          break;
        v188 = v610;
        if ( v610 > 0.01 || v648 > 5555 )
          break;
        v668 = v608 != 0 && v644 == 0;
        if ( v668 )
        {
          v610 = v610 + v610;
          printf("Doubling sub primal tolerance to %g\n", v610);
          v668 = 0;
        }
        else
        {
          v610 = v610 * 1.2;
          printf("Increasing sub primal tolerance to %g\n", v188 * 1.2);
        }
      }
      *(double *)&v181 = v609 + 0.0000001;
      *(double *)v118.m128i_i64 = *(double *)&usage.ru_utime.tv_sec * *(double *)&usage.ru_majflt
                                - *(double *)&usage.ru_ixrss;
      if ( v609 + 0.0000001 > *(double *)v118.m128i_i64 && v648 > 5555 )
        break;
      v609 = *(double *)&usage.ru_utime.tv_sec * *(double *)&usage.ru_majflt - *(double *)&usage.ru_ixrss;
    }
    v630 = LODWORD(usage.ru_msgsnd) - ru_msgsnd;
    if ( LODWORD(usage.ru_msgsnd) - ru_msgsnd > 0 )
    {
      v189 = v742 + ru_msgsnd;
      v190 = 0;
      v191 = (unsigned int)(LODWORD(usage.ru_msgsnd) - ru_msgsnd - 1) + 1LL;
      do
      {
        if ( (*(_BYTE *)(v189 + v190) & 7) != 1 )
          v615[v190] = v648;
        ++v190;
      }
      while ( v191 != v190 );
    }
    if ( v605 - v678 < v630 )
    {
      if ( (unsigned __int64)v630 > 0x1FFFFFFFFFFFFFFELL )
        __cxa_throw_bad_array_new_length();
      v433 = (int *)operator new[](4LL * v630);
      if ( v630 <= 0 )
      {
        v443 = v630;
        v435 = 0;
      }
      else
      {
        v434 = 0;
        v435 = 0;
        v436 = 0;
        v437 = (unsigned int)(v630 - 1) + 1LL;
        v438 = v742 + SHIDWORD(usage.__ru_msgsnd_word) + (__int64)ru_msgsnd;
        do
        {
          while ( 1 )
          {
            v441 = ru_msgsnd + v436;
            if ( (*(_BYTE *)(v438 + v436) & 7) == 1 )
              break;
            v439 = v434++;
            v615[v439] = v615[v436];
            v440 = v612[v436++];
            v612[v439] = v440;
            if ( v437 == v436 )
              goto LABEL_564;
          }
          ++v436;
          v442 = v435++;
          v433[v442] = v441;
        }
        while ( v437 != v436 );
LABEL_564:
        v443 = v630 - v435;
        if ( v605 - v678 < v630 - v435 )
        {
          v463 = 0;
          do
          {
            while ( 1 )
            {
              v466 = v615[v463];
              if ( v466 < v648 - 6 )
                break;
              v464 = v434++;
              v615[v464] = v466;
              v465 = v612[v463++];
              v612[v464] = v465;
              if ( v436 == v463 )
                goto LABEL_606;
            }
            v467 = ru_msgsnd + v463++;
            v468 = v435++;
            v433[v468] = v467;
          }
          while ( v436 != v463 );
LABEL_606:
          v443 = v630 - v435;
        }
      }
      ClpModel::deleteRows((ClpModel *)&usage, v435, v433);
      operator delete[](v433);
      v630 = v443;
    }
    if ( !v674 )
    {
      ru_nsignals = (double *)usage.ru_nsignals;
      goto LABEL_208;
    }
    if ( v674 == 2 )
    {
      if ( LODWORD(usage.ru_msgsnd) )
      {
        *(double *)v118.m128i_i64 = v745;
        ru_nsignals = v741;
        sprintf((char *)&v737, "The sum of dual infeasibilities is %g", v745);
        v456 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v626);
        v461 = CoinMessageHandler::operator<<(v456, (__int64)&v737, v457, v458, v459, v460, v596);
        CoinMessageHandler::operator<<(v461, 0, *(double *)v118.m128i_i64);
      }
      else
      {
LABEL_587:
        ru_nsignals = (double *)usage.ru_nsignals;
        memset((void *)usage.ru_nsignals, 0, 8LL * v677);
      }
LABEL_208:
      if ( v678 <= 0 )
        goto LABEL_533;
      goto LABEL_209;
    }
    if ( !LODWORD(usage.ru_msgsnd) )
      goto LABEL_587;
    printf("Master infeasible - sum %g\n", v746);
    v118.m128i_i64[0] = 0;
    v744 = 0;
    ru_nsignals = (double *)usage.ru_nsignals;
    ClpModel::writeMps((ClpModel *)&usage, "inf.mps", 0, 2, 0.0);
    if ( v678 <= 0 )
    {
LABEL_533:
      if ( !v648 )
        goto LABEL_687;
      v608 = 0;
      if ( v690 > 2 )
        goto LABEL_535;
LABEL_302:
      *v643 = 0;
      if ( v678 <= 0 )
        goto LABEL_610;
LABEL_303:
      v236 = v604 + 8;
      v237 = 0;
      v644 = 0;
      v687 = (unsigned int *)v642;
      while ( 2 )
      {
        v242 = *((int *)v236 + 27);
        srcf = *((_DWORD *)v236 + 26);
        v243 = v663[v237];
        v244 = *((_DWORD *)v236 + 81);
        *((_DWORD *)v236 + 81) = 0;
        if ( v244 == 99 )
        {
LABEL_309:
          v240 = v687;
          v241 = *v687;
          goto LABEL_307;
        }
        v238 = *((_DWORD *)v236 + 80);
        v239 = *((_DWORD *)v236 + 77);
        if ( v238 != 1 )
        {
          if ( !v239 )
          {
            v240 = v687;
            v241 = *v687;
            if ( (*v687 & 4) == 0 )
              goto LABEL_307;
          }
          v706 = *(_QWORD *)&v243 + 8 * (srcf + v242);
          v624 = v644;
          v627 = v644;
          v661 = v643[v627];
          if ( v238 )
            goto LABEL_751;
          v245 = v661;
          v696 = *((const double **)v236 + 16);
          v632 = &v666[v661];
          CoinPackedMatrix::transposeTimes(v640[v237], v696, v632);
          v246 = *((_DWORD *)v236 + 27);
          if ( srcf <= 0 )
          {
            v623 = 0.0;
          }
          else
          {
            v247 = 0;
            v248 = 0.0;
            v249 = (unsigned int)(srcf - 1) + 1LL;
            do
            {
              while ( 1 )
              {
                if ( (*(_BYTE *)(*((_QWORD *)v236 + 33) + v246 + (int)v247) & 7) == 1 )
                {
                  v696[v247] = 0.0;
                  v250 = 0.0;
                  v246 = *((_DWORD *)v236 + 27);
                }
                else
                {
                  v250 = v696[v247];
                }
                *(_QWORD *)&v181 = *(_QWORD *)(v706 + 8 * v247);
                v251 = *(double *)(*(_QWORD *)&v243 + 8 * v247);
                if ( *(double *)&v181 > v251 && (*(_BYTE *)(*((_QWORD *)v236 + 33) + v246 + (int)v247) & 7) == 2 )
                  break;
                ++v247;
                v248 = v248 + v251 * v250;
                if ( v249 == v247 )
                  goto LABEL_395;
              }
              *(double *)&v181 = *(double *)&v181 * v250;
              ++v247;
              v248 = v248 + *(double *)&v181;
            }
            while ( v249 != v247 );
LABEL_395:
            v623 = v248;
          }
          v308 = *((_QWORD *)v236 + 17);
          v655 = *((_QWORD *)v236 + 22);
          nb = *((_QWORD *)v236 + 23);
          if ( v246 > 0 )
          {
            v309 = *((_QWORD *)v236 + 33);
            srcj = nullptr;
            v698 = 0.0;
            while ( 1 )
            {
              v310 = *((_BYTE *)srcj + v309) & 7;
              if ( v690 <= 2 )
                goto LABEL_406;
              if ( v310 != 1 )
                break;
LABEL_401:
              srcj = (char *)srcj + 1;
              if ( (void *)((unsigned int)(v246 - 1) + 1LL) == srcj )
              {
                v312 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64))v236 + 20);
                if ( v312 )
                  goto LABEL_409;
                v313 = 0;
                v314 = 0.0;
LABEL_411:
                v315 = 0;
                do
                {
                  while ( 1 )
                  {
                    v316 = *(double *)(v308 + 8 * v315) - *(double *)(v313 + 8 * v315);
                    v317 = *(_BYTE *)(v309 + v315) & 7;
                    if ( v317 != 5 && v317 != 3 )
                      break;
                    v318 = v316 * *(double *)(v655 + 8 * v315++);
                    v314 = v314 + v318;
                    if ( v246 <= (int)v315 )
                      goto LABEL_418;
                  }
                  if ( v317 == 2 )
                    v314 = v314 + v316 * *(double *)(nb + 8 * v315);
                  ++v315;
                }
                while ( v246 > (int)v315 );
                goto LABEL_418;
              }
            }
            v311 = *(double *)(*((_QWORD *)v236 + 15) + 8LL * (_QWORD)srcj);
            *(_QWORD *)&v181 = fabs(v311);
            if ( *(double *)&v181 > 0.00001 )
            {
              printf("zz %d has value %g\n", (_DWORD)srcj, v311);
              v309 = *((_QWORD *)v236 + 33);
              v310 = *((_BYTE *)srcj + v309) & 7;
            }
LABEL_406:
            if ( v310 == 5 || v310 == 3 )
            {
              v698 = *(double *)(v655 + 8LL * (_QWORD)srcj) * *(double *)(v308 + 8LL * (_QWORD)srcj) + v698;
            }
            else if ( v310 == 2 )
            {
              v698 = *(double *)(nb + 8LL * (_QWORD)srcj) * *(double *)(v308 + 8LL * (_QWORD)srcj) + v698;
            }
            goto LABEL_401;
          }
          v312 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64))v236 + 20);
          if ( v312 )
          {
            v698 = 0.0;
LABEL_409:
            v313 = (**v312)(v312, 0, 0, &v735, 0, 2);
            v314 = 0.0;
            if ( v246 > 0 )
            {
              v309 = *((_QWORD *)v236 + 33);
              goto LABEL_411;
            }
          }
          else
          {
            v314 = 0.0;
            v698 = 0.0;
          }
LABEL_418:
          if ( v690 > 3 )
          {
            *(double *)&v181 = *((double *)v236 + 9) * *(double *)v236 - *((double *)v236 + 5);
            printf("objValue %g from lp %g, obj2 %g, obj3 %g\n", v623, *(double *)&v181, v698, v314);
          }
          v656 = v698 + v623;
          v319 = -(v698 + v623);
          v699 = v319;
          if ( v677 <= 0 )
          {
            a7 = 0.0;
            v320 = v319;
            v329 = &v666[v661];
            v327 = v661;
            nc = v661;
            v709 = 0.0;
            srck = 1.0e100;
            v328 = 0.0;
          }
          else
          {
            v320 = v319;
            v321 = 0;
            v322 = 1.0e100;
            v323 = v661;
            a7 = 0.0;
            do
            {
              v324 = v632[v321];
              *(_QWORD *)&v181 = fabs(v324);
              if ( *(double *)&v181 > 1.0e-12 )
              {
                v325 = ru_nsignals[v321];
                v326 = v323;
                v322 = fmin(v322, *(double *)&v181);
                a7 = fmax(a7, *(double *)&v181);
                v646[v323++] = v321;
                v320 = v320 + v325 * v324;
                v666[v326] = -v324;
              }
              ++v321;
            }
            while ( (unsigned int)(v677 - 1) + 1LL != v321 );
            v327 = v323;
            v709 = a7;
            srck = v322;
            v328 = a7;
            nc = v323;
            v329 = &v666[v323];
          }
          a6 = v320 + ru_nsignals[v677 + (int)v237];
          v646[v327] = v677 + v237;
          *v329 = -1.0;
          v330 = nc + 1;
          v671 = a6;
          if ( v328 > 100000000.0 || srck < 0.00000001 )
          {
            *(double *)&v181 = v709;
            sprintf((char *)&v737, "For subproblem %d smallest - %g, largest %g - infeas %g", v237, srck, v709, a6);
            v331 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v626);
            v336 = CoinMessageHandler::operator<<(v331, (__int64)&v737, v332, v333, v334, v335, v596);
            CoinMessageHandler::operator<<(v336, 0, srck);
            a7 = 1.0e-12 * v709;
            if ( 1.0e-12 * v709 > srck )
            {
              v418 = (struct timeval)_mm_load_si128((const __m128i *)&xmmword_293C70);
              v737.ru_stime.tv_sec = 0x73746E656D656CLL;
              v737.ru_utime = v418;
              v419 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v626);
              v424 = CoinMessageHandler::operator<<(v419, (__int64)&v737, v420, v421, v422, v423, v596);
              CoinMessageHandler::operator<<(v424, 0, *(double *)&v418.tv_sec);
              v425 = v661;
              if ( v661 >= nc )
              {
                v431 = &v666[v661];
                v430 = v661;
                srck = v709;
              }
              else
              {
                v426 = v709;
                a6 = 1.0e-12 * v709;
                v427 = 0;
                do
                {
                  *(_QWORD *)&v181 = fabs(v632[v427]);
                  if ( *(double *)&v181 > 1.0e-12 * v709 )
                  {
                    v428 = v646[v661 + v427];
                    v426 = fmin(v426, *(double *)&v181);
                    v429 = v425;
                    v666[v425++] = v632[v427];
                    v646[v429] = v428;
                  }
                  ++v427;
                }
                while ( (unsigned int)(~v661 + nc) + 1LL != v427 );
                v430 = v425;
                srck = v426;
                v431 = &v666[v425];
              }
              a7 = -1.0;
              v330 = v425 + 1;
              *v431 = -1.0;
              v646[v430] = v677 + v237;
            }
          }
          if ( srck > 1000000.0 || (*(_QWORD *)&v181 = fabs(v656), *(double *)&v181 > 0.01 * *((double *)this + 94)) )
          {
            if ( v661 + 1 < v330 )
            {
              srcl = 1.0 / srck;
              if ( fabs(v656 * srcl) > 0.01 * *((double *)this + 94) )
              {
                printf("** scale before obj scale %g\n", srcl);
                srcl = 0.01 * *((double *)this + 94) / fabs(v656);
              }
              printf("** scale %g infeas %g\n", srcl, v671);
              a6 = srcl;
              v656 = v656 * srcl;
              v337 = -v656;
              v699 = -v656;
              if ( v661 >= v330 - 1 )
              {
                v341 = srcl;
              }
              else
              {
                v338 = 0;
                do
                {
                  v339 = v646[v661 + v338];
                  v340 = v632[v338] * srcl;
                  v632[v338++] = v340;
                  v337 = v337 - v340 * ru_nsignals[v339];
                }
                while ( (unsigned int)(v330 - v661 - 2) + 1LL != v338 );
                v341 = srcl;
              }
              v666[v330 - 1] = v666[v330 - 1] * v341;
              v671 = ru_nsignals[v677 + (int)v237] * v341 + v337;
              *(double *)&v181 = v671 / v341;
              printf("** new infeas %g - scales to %g\n", v671, v671 / v341);
            }
          }
          v118.m128i_i64[0] = 0xBEB0C6F7A0B5ED8DLL;
          if ( v671 < -0.000001 || (v240 = (unsigned int *)&v642[4 * v237], v241 = *v687, (*v687 & 4) != 0) )
          {
            if ( v690 > 3 )
            {
              printf(
                "objValue %g objectiveValue() %g\n",
                v656,
                *((double *)v236 + 9) * *(double *)v236 - *((double *)v236 + 5));
              if ( v661 < v330 )
                goto LABEL_443;
              v118.m128i_i64[0] = 0;
            }
            else
            {
              if ( v661 >= v330 )
                goto LABEL_446;
LABEL_443:
              v118.m128i_i64[0] = 0;
              do
              {
                *(double *)&v181 = ru_nsignals[v646[v245]] * v666[v245];
                ++v245;
                *(double *)v118.m128i_i64 = *(double *)v118.m128i_i64 + *(double *)&v181;
              }
              while ( v330 > (int)v245 );
              if ( v690 <= 3 )
              {
LABEL_446:
                if ( v690 > 1 )
                  printf("Cut for block %d has %d elements\n", v237, v330 - 1 - v661);
                ++v644;
                *(_DWORD *)&v613[4 * v624] = v237;
                v616[v624] = v699;
                v643[v627 + 1] = v330;
                v342 = v630;
                v615[v630++] = v648;
                v612[v342] = v237;
                v240 = (unsigned int *)&v642[4 * v237];
                v241 = *v687;
                goto LABEL_307;
              }
            }
            *(double *)&v181 = v699;
            printf("Sum %g rhs %g\n", *(double *)v118.m128i_i64, v699);
            goto LABEL_446;
          }
LABEL_307:
          ++v237;
          v236 += 1776;
          ++v687;
          *v240 = v241 & 0xFFFFFFFB;
          if ( v678 <= (int)v237 )
          {
            if ( v644 )
            {
              sprintf((char *)&v737, "%d cuts added with %d elements", v644, v643[v644]);
              v444 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v626);
              v449 = CoinMessageHandler::operator<<(v444, (__int64)&v737, v445, v446, v447, v448, v596);
              CoinMessageHandler::operator<<(v449, 0, *(double *)v118.m128i_i64);
              if ( v690 > 2 )
              {
                v450 = 0;
                v451 = v643 + 1;
                do
                {
                  printf(
                    "Cut %d block %d thetac %d ",
                    v450,
                    *(_DWORD *)&v613[4 * v450],
                    *(_DWORD *)&v613[4 * v450] + v677);
                  v452 = (int)*(v451 - 1);
                  if ( *v451 > (int)v452 )
                  {
                    srcp = 0;
                    v453 = (int)v452 + 1;
                    v454 = &v646[v452 - v453];
                    v455 = &v666[v452 - v453];
                    while ( 1 )
                    {
                      ++srcp;
                      printf("(%d,%g) ", v454[v453], v455[v453]);
                      if ( *v451 <= (int)v453 )
                        break;
                      if ( srcp == 12 )
                      {
                        putchar(10);
                        srcp = 0;
                      }
                      ++v453;
                    }
                  }
                  *(double *)v118.m128i_i64 = v616[v450];
                  printf(" <= %g\n", *(double *)v118.m128i_i64);
                  ++v450;
                  ++v451;
                }
                while ( (unsigned int)(v644 - 1) + 1LL != v450 );
              }
              ClpModel::addRows((ClpModel *)&usage, v644, nullptr, v616, v643, v646, v666);
            }
            goto LABEL_469;
          }
          continue;
        }
        break;
      }
      if ( !v239 )
        *v687 |= 4u;
      v252 = *(_QWORD *)&v243 + 8 * (srcf + v242);
      v621 = v644;
      v620 = v644;
      v654 = v643[v620];
      v253 = (double *)ClpSimplex::infeasibilityRay((ClpSimplex *)v236, 0);
      if ( *((int *)v236 + 325) <= 0 )
      {
        if ( srcf <= 0 )
          goto LABEL_331;
        v343 = ((unsigned __int64)v253 >> 3) & 1;
        if ( 2 - (unsigned int)((_DWORD)v343 == 0) > srcf - 1 )
        {
          v349 = 0;
        }
        else
        {
          v344 = 0;
          if ( (_DWORD)v343 )
          {
            v344 = 1;
            *v253 = -*v253;
          }
          v345 = &v253[v343];
          v346 = 0;
          v347 = srcf - v343;
          v348 = 0;
          do
          {
            ++v346;
            *(double *)&v181 = -v345[v348];
            *((double *)&v181 + 1) = -v345[v348 + 1];
            *(_OWORD *)&v345[v348] = v181;
            v348 += 2;
          }
          while ( v346 < v347 >> 1 );
          v349 = (v347 & 0xFFFFFFFE) + v344;
          if ( (v347 & 0xFFFFFFFE) == v347 )
            goto LABEL_331;
        }
        *(_QWORD *)&v181 = 0x8000000000000000LL;
        v350 = &v253[v349];
        v351 = v349 + 1;
        *v350 = -*v350;
        if ( srcf > v351 )
          v253[v351] = -v253[v351];
        goto LABEL_331;
      }
      if ( srcf > 0 )
      {
        v254 = ((unsigned __int64)v253 >> 3) & 1;
        if ( (unsigned int)(srcf - 1) <= 1 )
        {
          v260 = 0;
          goto LABEL_329;
        }
        v255 = 0;
        if ( (_DWORD)v254 )
        {
          v255 = 1;
          *v253 = -0.00001 * *v253;
        }
        v256 = &v253[v254];
        v257 = 0;
        *(_QWORD *)&v181 = 0xBEE4F8B588E368F1LL;
        v258 = srcf - v254;
        v259 = 0;
        do
        {
          ++v257;
          *(__m128d *)&v256[v259] = _mm_mul_pd(*(__m128d *)&v256[v259], (__m128d)xmmword_293C60);
          v259 += 2;
        }
        while ( v257 < v258 >> 1 );
        v260 = (v258 & 0xFFFFFFFE) + v255;
        if ( (v258 & 0xFFFFFFFE) != v258 )
        {
LABEL_329:
          v261 = &v253[v260];
          v262 = v260 + 1;
          *(double *)&v181 = *v261 * -0.00001;
          *(_QWORD *)v261 = v181;
          if ( srcf > v262 )
            v253[v262] = -0.00001 * v253[v262];
        }
      }
LABEL_331:
      na = &v666[v654];
      CoinPackedMatrix::transposeTimes(v640[v237], v253, na);
      if ( srcf > 0 )
      {
        v263 = (unsigned int)(srcf - 1);
        v264 = ((unsigned __int64)v253 >> 3) & 1;
        if ( (int)v264 + 1 > (unsigned int)v263 )
        {
          v271 = 0;
          goto LABEL_338;
        }
        v265 = 0;
        if ( (_DWORD)v264 )
        {
          v265 = 1;
          *v253 = -*v253;
        }
        v266 = &v253[v264];
        v267 = 0;
        v268 = srcf - v264;
        v269 = 0;
        do
        {
          ++v267;
          *(double *)&v270 = -v266[v269];
          *((double *)&v270 + 1) = -v266[v269 + 1];
          *(_OWORD *)&v266[v269] = v270;
          v269 += 2;
        }
        while ( v267 < v268 >> 1 );
        v271 = (v268 & 0xFFFFFFFE) + v265;
        if ( (v268 & 0xFFFFFFFE) != v268 )
        {
LABEL_338:
          v272 = &v253[v271];
          v273 = v271 + 1;
          *v272 = -*v272;
          if ( srcf > v273 )
            v253[v273] = -v253[v273];
        }
        v274 = v263 + 1;
        v275 = 0;
        v276 = 0.0;
        a7 = -0.0;
        a6 = 1.0e20;
        while ( 1 )
        {
LABEL_344:
          v277 = v253[v275];
          if ( (*(_BYTE *)(*((_QWORD *)v236 + 33) + (int)v275 + *((_DWORD *)v236 + 27)) & 7) == 1
            && fabs(v277) < 0.0000001 )
          {
            v253[v275] = 0.0;
            v277 = 0.0;
          }
          v278 = *((double *)this + 109);
          if ( v277 > v278 )
            break;
          *(double *)&v181 = -v278;
          if ( *(double *)&v181 > v277 )
          {
            *(_QWORD *)&v181 = *(_QWORD *)(*(_QWORD *)&v243 + 8 * v275);
            if ( *(double *)&v181 < -1.0e20 )
            {
              v253[v275] = 0.0;
              v277 = 0.0;
              *(_QWORD *)&v181 = *(_QWORD *)(*(_QWORD *)&v243 + 8 * v275);
            }
            goto LABEL_343;
          }
          v253[v275++] = 0.0;
          if ( v274 == v275 )
          {
LABEL_352:
            v628 = v276;
            goto LABEL_353;
          }
        }
        *(_QWORD *)&v181 = *(_QWORD *)(v252 + 8 * v275);
        if ( *(double *)&v181 > 1.0e20 )
        {
          v253[v275] = 0.0;
          v277 = 0.0;
          *(_QWORD *)&v181 = *(_QWORD *)(v252 + 8 * v275);
        }
LABEL_343:
        ++v275;
        v276 = v276 + v277 * *(double *)&v181;
        if ( v274 == v275 )
          goto LABEL_352;
        goto LABEL_344;
      }
      v628 = 0.0;
LABEL_353:
      v279 = *((int *)v236 + 27);
      srcg = *((_DWORD *)v236 + 27);
      if ( v279 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v280 = 8 * v279;
      v281 = (unsigned __int64 *)operator new[](v280);
      memset(v281, 0, v280);
      (*(void (__fastcall **)(_QWORD, double *, unsigned __int64 *, double, double, double, double))(**((_QWORD **)v236 + 24) + 376LL))(
        *((_QWORD *)v236 + 24),
        v253,
        v281,
        -1.0,
        *(double *)&v181,
        a6,
        a7);
      v669 = *((int **)v236 + 22);
      v633 = *((_QWORD *)v236 + 23);
      v622 = *((_QWORD *)v236 + 15);
      v282 = srcg;
      if ( srcg <= 0 )
      {
        v290 = 0.0;
        v662 = 0.0;
        v697 = 0.0;
      }
      else
      {
        srch = nullptr;
        v283 = (unsigned int)(v282 - 1) + 1LL;
        v662 = 0.0;
        v697 = 0.0;
        do
        {
          v284 = (__m128d)v281[(_QWORD)srch];
          v285 = *((_BYTE *)srch + *((_QWORD *)v236 + 33)) & 7;
          if ( v285 == 1 )
          {
            v286.m128d_f64[0] = 0.0000001;
            *(_QWORD *)&v287 = *(_QWORD *)&v284.m128d_f64[0]
                             & *(_QWORD *)&_mm_cmpge_sd(_mm_and_pd(v284, (__m128d)xmmword_289DB0), v286).m128d_f64[0];
            v707 = v287;
            *(_QWORD *)&v181 = *(_QWORD *)(v622 + 8LL * (_QWORD)srch);
            v625 = v287 * *(double *)&v181;
            if ( v690 > 2 && fabs(v287 * *(double *)&v181) > 0.001 )
            {
              a7 = *(double *)(v633 + 8LL * (_QWORD)srch);
              a6 = *(double *)&v669[2 * (_QWORD)srch];
              printf("Basic %d arrayval %g primal %g bounds %g %g\n", (_DWORD)srch, v287, *(double *)&v181, a6, a7);
            }
            if ( v707 < 0.0 )
            {
              v625 = v707 * *(double *)&v669[2 * (_QWORD)srch];
            }
            else if ( v707 > 0.0 )
            {
              v288 = *(double *)(v633 + 8LL * (_QWORD)srch);
              v289 = *(double *)(v622 + 8LL * (_QWORD)srch) - v288;
              if ( v690 > 2 )
              {
                a7 = 0.001;
                if ( v289 < 0.001 )
                {
                  printf("small diff %g\n", v289);
                  v288 = *(double *)(v633 + 8LL * (_QWORD)srch);
                }
              }
              *(double *)&v181 = v288 * v707;
              v625 = *(double *)&v181;
            }
            v697 = v697 + v625;
          }
          else if ( ((v285 - 3) & 0xFD) != 0 )
          {
            if ( v285 == 2 )
              v662 = v284.m128d_f64[0] * *(double *)(v633 + 8LL * (_QWORD)srch) + v662;
          }
          else
          {
            v697 = v284.m128d_f64[0] * *(double *)&v669[2 * (_QWORD)srch] + v697;
          }
          srch = (char *)srch + 1;
        }
        while ( (void *)v283 != srch );
        v290 = v697 + v662;
      }
      v291 = v290 + v628;
      if ( v690 > 2 )
      {
        a6 = v291;
        *(double *)&v181 = v662;
        printf("Inf Offsets %g %g - new Objvalue %g\n", v697, v662, v291);
      }
      v708 = fabs(v697) * 0.000000001 + v291;
      operator delete[](v281);
      if ( v253 )
        operator delete[](v253);
      if ( v677 <= 0 )
      {
        v118.m128i_i64[0] = 0xBEB0C6F7A0B5ED8DLL;
        if ( v708 >= -0.000001 )
          goto LABEL_309;
        v299 = v654;
      }
      else
      {
        v292 = fabs(v697) * 0.000000001 + v291;
        v293 = v654;
        v294 = 0.0;
        v295 = 1.0e100;
        v296 = 0;
        a6 = NAN;
        do
        {
          *(_QWORD *)&v181 = fabs(na[v296]);
          if ( *(double *)&v181 > 1.0e-12 )
          {
            v297 = -na[v296];
            v295 = fmin(v295, *(double *)&v181);
            v298 = ru_nsignals[v296];
            v294 = fmax(v294, *(double *)&v181);
            v646[v293] = v296;
            v666[v293++] = v297;
            v292 = v292 - v298 * v297;
          }
          ++v296;
        }
        while ( (unsigned int)(v677 - 1) + 1LL != v296 );
        srci = v295;
        v299 = v293;
        if ( v294 <= 100000000.0 && v295 >= 0.00000001 )
        {
          a7 = 1.0e-12 * v294;
          v670 = 1.0e-12 * v294;
        }
        else
        {
          a6 = v292;
          *(double *)&v181 = v294;
          sprintf((char *)&v737, "For subproblem ray %d smallest - %g, largest %g - infeas %g", v237, v295, v294, v292);
          v300 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v626);
          v305 = CoinMessageHandler::operator<<(v300, (__int64)&v737, v301, v302, v303, v304, v596);
          CoinMessageHandler::operator<<(v305, 0, srci);
          v670 = v294 * 1.0e-12;
          a7 = v294 * 1.0e-12;
        }
        if ( a7 > srci )
        {
          v352 = (struct timeval)_mm_load_si128((const __m128i *)&xmmword_293C70);
          v737.ru_stime.tv_sec = 0x73746E656D656CLL;
          v737.ru_utime = v352;
          v353 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v626);
          v358 = CoinMessageHandler::operator<<(v353, (__int64)&v737, v354, v355, v356, v357, v596);
          CoinMessageHandler::operator<<(v358, 0, *(double *)&v352.tv_sec);
          v359 = v654;
          if ( v299 - 1 <= v654 )
          {
            v363 = &v666[v654];
            v299 = v654 + 1;
            v364 = &v646[v654];
          }
          else
          {
            a6 = v670;
            v360 = 0;
            a7 = NAN;
            do
            {
              v361 = v359;
              v362 = v359;
              v363 = &v666[v362];
              srcm = v359 + 1;
              v364 = &v646[v361];
              *(_QWORD *)&v181 = fabs(na[v360]);
              if ( *(double *)&v181 > v670 )
              {
                v365 = v646[v654 + v360];
                *v363 = na[v360];
                v363 = &v666[v362 + 1];
                v366 = v359 + 2;
                ++v359;
                *v364 = v365;
                v364 = &v646[v361 + 1];
                srcm = v366;
              }
              ++v360;
            }
            while ( (unsigned int)(v299 - v654 - 2) + 1LL != v360 );
            v299 = srcm;
          }
          *v363 = -1.0;
          *v364 = v237 + v677;
        }
        v118.m128i_i64[0] = 0xBEB0C6F7A0B5ED8DLL;
        if ( v292 >= -0.000001 )
          goto LABEL_309;
        if ( v299 > v654 )
        {
          v118.m128i_i64[0] = 0;
          v306 = 0;
          do
          {
            *(double *)&v181 = ru_nsignals[v646[v654 + v306]] * na[v306];
            ++v306;
            *(double *)v118.m128i_i64 = *(double *)v118.m128i_i64 + *(double *)&v181;
          }
          while ( (unsigned int)(~v654 + v299) + 1LL != v306 );
          if ( v690 <= 2 )
            goto LABEL_389;
LABEL_520:
          *(double *)&v181 = v708;
          printf("Sum %g rhs %g\n", *(double *)v118.m128i_i64, v708);
LABEL_389:
          if ( v690 > 1 )
            printf("Cut for block %d has %d elements (infeasibility)\n", v237, v299 - v654);
          a7 = v708;
          ++v644;
          *(_DWORD *)&v613[4 * v621] = v237;
          v616[v621] = v708;
          v643[v620 + 1] = v299;
          v307 = v630;
          v615[v630++] = v648;
          v612[v307] = v237;
          v240 = (unsigned int *)&v642[4 * v237];
          v241 = *v687;
          goto LABEL_307;
        }
      }
      v118.m128i_i64[0] = 0;
      if ( v690 > 2 )
        goto LABEL_520;
      goto LABEL_389;
    }
LABEL_209:
    v192 = 0;
    srcd = (int *)(v604 + 112);
    do
    {
      v193 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double **, _QWORD, __int64))srcd + 7);
      v194 = *((_QWORD *)srcd + 10);
      if ( v193 )
      {
        v195 = srcd;
        v196 = (void *)(**v193)(v193, 0, 0, &v734, 0, 2);
      }
      else
      {
        v196 = nullptr;
        v195 = srcd;
      }
      v197 = v195[1];
      v198 = v617[v192];
      v199 = v198;
      if ( v198 < v197 )
        memset((void *)(v194 + 8LL * v198), 0, 8LL * (unsigned int)(v197 - v198 - 1) + 8);
      memcpy(v196, v614[v192], 8 * v199);
      v200 = v663[v192];
      v201 = *((char **)srcd + 5);
      v202 = srcd[1];
      v694 = *srcd;
      v704 = 8LL * *srcd;
      memcpy(v201, *(const void **)&v200, v704);
      v203 = (char *)(v704 + *(_QWORD *)&v200);
      v204 = 8LL * v202;
      v680 = *((double **)srcd + 9);
      memcpy(v680, v203, v204);
      v205 = &v203[v204];
      v684 = &v203[v204];
      v206 = *((char **)srcd + 6);
      memcpy(v206, v205, v704);
      v685 = &v684[v704];
      v207 = memcpy(*((void **)srcd + 10), v685, v204);
      v208 = (double *)&v685[v204];
      if ( v674 != 2 )
        goto LABEL_215;
      if ( v694 <= 0 )
      {
        if ( v202 > 0 )
        {
          v118.m128i_i64[0] = 0xFFEFFFFFFFFFFFFFLL;
          *(_QWORD *)&v181 = 0x7FEFFFFFFFFFFFFFLL;
LABEL_273:
          v225 = 0;
          do
          {
            a6 = v680[v225];
            if ( a6 > -1.797693134862316e308 )
              v680[v225] = 0.0;
            if ( *(double *)&v207[v225] < 1.797693134862316e308 )
              v207[v225] = 0;
            ++v225;
          }
          while ( v202 > (int)v225 );
        }
LABEL_215:
        v209 = *((double **)srcd + 3);
        if ( !v694 )
          goto LABEL_216;
        goto LABEL_246;
      }
      v118.m128i_i64[0] = 0xFFEFFFFFFFFFFFFFLL;
      *(_QWORD *)&v181 = 0x7FEFFFFFFFFFFFFFLL;
      v224 = 0;
      do
      {
        a6 = *(double *)&v201[v224];
        if ( a6 > -1.797693134862316e308 )
          *(_QWORD *)&v201[v224] = 0;
        if ( *(double *)&v206[v224] < 1.797693134862316e308 )
          *(_QWORD *)&v206[v224] = 0;
        v224 += 8;
      }
      while ( 8LL * (unsigned int)(v694 - 1) + 8 != v224 );
      if ( v202 > 0 )
        goto LABEL_273;
      v209 = *((double **)srcd + 3);
LABEL_246:
      if ( v694 / 8 <= 0 )
      {
        v221 = v209;
        v220 = v694;
      }
      else
      {
        v219 = v209;
        do
        {
          *v219 = 0.0;
          v219[1] = 0.0;
          v219 += 8;
          *(v219 - 6) = 0.0;
          *(v219 - 5) = 0.0;
          *(v219 - 4) = 0.0;
          *(v219 - 3) = 0.0;
          *(v219 - 2) = 0.0;
          *(v219 - 1) = 0.0;
        }
        while ( &v209[8 * (unsigned int)(v694 / 8 - 1) + 8] != v219 );
        v220 = v694;
        v221 = &v209[8 * (v694 / 8 - 1) + 8];
      }
      switch ( v220 % 8 )
      {
        case 1:
          goto LABEL_257;
        case 2:
          goto LABEL_256;
        case 3:
          goto LABEL_255;
        case 4:
          goto LABEL_254;
        case 5:
          goto LABEL_253;
        case 6:
          goto LABEL_252;
        case 7:
          v221[6] = 0.0;
LABEL_252:
          v221[5] = 0.0;
LABEL_253:
          v221[4] = 0.0;
LABEL_254:
          v221[3] = 0.0;
LABEL_255:
          v221[2] = 0.0;
LABEL_256:
          v221[1] = 0.0;
LABEL_257:
          *v221 = 0.0;
          break;
        default:
          break;
      }
LABEL_216:
      CoinPackedMatrix::times(v640[v192], ru_nsignals, v209);
      if ( v694 <= 0 )
      {
        v214 = srcd;
        if ( v668 )
        {
LABEL_231:
          v214[55] = 99;
          goto LABEL_232;
        }
      }
      else
      {
        v210 = 0;
        a7 = -1.0e30;
        v211 = (unsigned int)(v694 - 1) + 1LL;
        a6 = 1.0e30;
        do
        {
          v212 = *(double *)&v201[v210];
          *(double *)&v181 = v209[v210 / 8];
          if ( v212 > -1.0e30 )
            *(double *)&v201[v210] = v212 - *(double *)&v181;
          v118.m128i_i64[0] = *(_QWORD *)&v206[v210];
          if ( *(double *)v118.m128i_i64 < 1.0e30 )
          {
            *(double *)v118.m128i_i64 = *(double *)v118.m128i_i64 - *(double *)&v181;
            *(_QWORD *)&v206[v210] = v118.m128i_i64[0];
          }
          v210 += 8LL;
        }
        while ( 8 * v211 != v210 );
        if ( v668 )
        {
          *(_QWORD *)&v181 = *((_QWORD *)this + 110);
          v213 = 0;
          while ( 1 )
          {
            v118.m128i_i64[0] = fabs(v208[v213] - v209[v213]);
            if ( *(double *)v118.m128i_i64 > *(double *)&v181 )
            {
              a6 = *(double *)(*((_QWORD *)srcd + 1) + 8 * v213);
              *(double *)v118.m128i_i64 = *(double *)&v201[8 * v213] - *(double *)&v181;
              if ( *(double *)v118.m128i_i64 > a6 )
                break;
              *(double *)v118.m128i_i64 = *(double *)&v206[8 * v213] + *(double *)&v181;
              if ( a6 > *(double *)v118.m128i_i64 || (*(_BYTE *)(*((_QWORD *)srcd + 20) + srcd[1] + (int)v213) & 7) != 1 )
                break;
            }
            if ( v211 == ++v213 )
            {
              v214 = srcd;
              goto LABEL_231;
            }
          }
        }
      }
      memcpy(v208, v209, v704);
LABEL_232:
      ++v192;
      srcd += 444;
    }
    while ( (unsigned int)(v606 - 2) + 1LL != v192 );
    if ( v648 )
      goto LABEL_234;
LABEL_687:
    ClpSimplex::dual(v611, 0, 0);
    if ( v619 == 5000 )
    {
      if ( *((_DWORD *)this + 64) )
        goto LABEL_707;
    }
    else if ( v619 == 4000 && !*((_DWORD *)this + 64) )
    {
LABEL_707:
      v526 = *((_DWORD *)v604 + 79);
      ClpModel::scaling(v611, 0);
      ClpSimplex::primal(v611, 0, 0);
      *((_DWORD *)v604 + 79) += v526;
      ClpModel::scaling(v611, *((_DWORD *)this + 64));
    }
    v514 = (double *)v604;
    v515 = *((_DWORD *)v604 + 79);
    if ( *((_DWORD *)v604 + 82) )
    {
      ClpSimplex::primal(v611, 0, 0);
      v514 = (double *)v604;
      v515 += *((_DWORD *)v604 + 79);
    }
    v516 = v514;
    *(double *)v118.m128i_i64 = v514[1] * v514[10] - v514[6];
    sprintf((char *)&v737, "First block - initial solve - %d iterations, objective %g", v515, *(double *)v118.m128i_i64);
    v517 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v626);
    v522 = CoinMessageHandler::operator<<(v517, (__int64)&v737, v518, v519, v520, v521, v596);
    CoinMessageHandler::operator<<(v522, 0, *(double *)v118.m128i_i64);
    v523 = *((_DWORD *)v516 + 28);
    v524 = *((_DWORD *)v516 + 29);
    if ( v678 > 1 )
    {
      v525 = (void **)(v604 + 1888);
      do
      {
        if ( *(_DWORD *)v525 == v523 && *((_DWORD *)v525 + 1) == v524 )
        {
          memcpy(v525[2], *((const void **)v604 + 16), 8LL * v524);
          memcpy(v525[20], *((const void **)v604 + 34), v523 + v524);
        }
        v525 += 222;
      }
      while ( &v604[1776 * (v606 - 3) + 3664] != (char *)v525 );
    }
    v503 = v604;
    *((_DWORD *)v604 + 83) = 99;
    if ( v678 <= 0 )
    {
      v608 = 0;
      goto LABEL_655;
    }
LABEL_234:
    v215 = v604 + 8;
    v216 = 0;
    v608 = 0;
    srce = (double *)(v604 + 8);
    v681 = fmin(v610, 0.0001);
    while ( 2 )
    {
      if ( *((_DWORD *)v215 + 81) != 99 )
      {
        v217 = *((_DWORD *)v215 + 80);
        v705 = *((double *)v215 + 4);
        if ( v217 && v648 )
        {
          if ( v217 != 1 )
          {
            ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
            goto LABEL_241;
          }
          v686 = *((double *)v215 + 113);
          v695 = *((_QWORD *)v215 + 20);
          ClpLinearObjective::ClpLinearObjective((ClpLinearObjective *)&v736, nullptr, *((_DWORD *)v215 + 27));
          v235 = *((_DWORD *)v215 + 84);
          *((_QWORD *)v215 + 20) = &v736;
          ClpModel::setSpecialOptions((ClpModel *)v215, v235 | 0x2000);
          ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
          if ( v619 == 5000 )
          {
            if ( *((_DWORD *)this + 64) )
              goto LABEL_579;
          }
          else if ( v619 == 4000 && !*((_DWORD *)this + 64) )
          {
LABEL_579:
            v675 = *((_DWORD *)v215 + 77);
            ClpModel::scaling((ClpModel *)v215, 0);
            ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
            *((_DWORD *)v215 + 77) += v675;
            ClpModel::scaling((ClpModel *)v215, *((_DWORD *)this + 64));
          }
          *((_QWORD *)v215 + 20) = v695;
          ClpSimplex::setInfeasibilityCost((ClpSimplex *)v215, v686);
          if ( !*((_DWORD *)v215 + 80) )
          {
LABEL_295:
            ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
            if ( v619 == 5000 )
            {
              if ( *((_DWORD *)this + 64) )
                goto LABEL_595;
            }
            else if ( v619 == 4000 && !*((_DWORD *)this + 64) )
            {
LABEL_595:
              v700 = *((_DWORD *)v215 + 77);
              ClpModel::scaling((ClpModel *)v215, 0);
              ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
              *((_DWORD *)v215 + 77) += v700;
              ClpModel::scaling((ClpModel *)v215, *((_DWORD *)this + 64));
              if ( *((_DWORD *)v215 + 80) )
              {
LABEL_596:
                printf("Block %d infeasible on second go has small infeasibility %g\n", v216, *((double *)v215 + 112));
                *((_DWORD *)v215 + 80) = 0;
              }
LABEL_298:
              *(_DWORD *)&v642[4 * v216] |= 4u;
LABEL_299:
              ClpModel::setSpecialOptions((ClpModel *)v215, v235);
              ClpLinearObjective::~ClpLinearObjective((ClpLinearObjective *)&v736);
              goto LABEL_241;
            }
            if ( *((_DWORD *)v215 + 80) )
              goto LABEL_596;
            goto LABEL_298;
          }
          v417 = *((double *)v215 + 112);
          if ( v610 > v417 )
          {
            printf("Block %d was infeasible now has small infeasibility %g\n", v216, v417);
            *((_DWORD *)v215 + 80) = 0;
            ClpModel::setPrimalTolerance((ClpModel *)v215, v681);
            v462 = *((_DWORD *)v215 + 80);
            *((double *)v215 + 110) = v681;
            if ( !v462 )
              goto LABEL_295;
            v417 = *((double *)v215 + 112);
          }
          printf("Block %d still infeasible - sum %g - %d iterations\n", v216, v417, *((_DWORD *)v215 + 77));
          ++v608;
          if ( !*((_QWORD *)v215 + 27) )
          {
            printf("Block %d has no ray!\n", v216);
            ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
          }
          goto LABEL_299;
        }
        ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
        if ( *((_DWORD *)v215 + 80) )
        {
          v222 = *((double *)v215 + 112);
          if ( v610 > v222 )
          {
            printf("Block %d was feasible now has small infeasibility %g\n", v216, v222);
            ClpModel::setPrimalTolerance((ClpModel *)v215, v681);
            *((double *)v215 + 110) = v681;
            ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
            *((_DWORD *)v215 + 80) = 0;
            *(_DWORD *)&v642[4 * v216] |= 4u;
          }
        }
        if ( v619 == 5000 )
        {
          if ( !*((_DWORD *)this + 64) )
            goto LABEL_241;
        }
        else if ( v619 != 4000 || *((_DWORD *)this + 64) )
        {
          goto LABEL_241;
        }
        v223 = *((_DWORD *)v215 + 77);
        ClpModel::scaling((ClpModel *)v215, 0);
        ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
        *((_DWORD *)v215 + 77) += v223;
        ClpModel::scaling((ClpModel *)v215, *((_DWORD *)this + 64));
LABEL_241:
        *(double *)v118.m128i_i64 = v705;
        ClpModel::setPrimalTolerance((ClpModel *)v215, v705);
        v218 = *((_DWORD *)v215 + 80);
        *((double *)v215 + 110) = v705;
        if ( v218 > 1 )
        {
          printf("!!!Block %d has bad status %d\n", v216, v218);
          ClpSimplex::primal((ClpSimplex *)v215, 0, 0);
        }
      }
      ++v216;
      v215 += 1776;
      if ( v678 > (int)v216 )
        continue;
      break;
    }
    v226 = 0;
    do
    {
      v227 = *(_DWORD *)&v642[4 * v226];
      if ( !v648 )
      {
        v227 |= 4u;
        *(_DWORD *)&v642[4 * v226] = v227;
      }
      v228 = *((_DWORD *)srce + 80);
      if ( (v227 & 1) != 0 )
      {
        if ( v228 == 1 )
          *(_DWORD *)&v642[4 * v226] = v227 & 0xFFFFFFFA | 4;
      }
      else if ( !v228 )
      {
        *(_DWORD *)&v642[4 * v226] = v227 | 5;
      }
      if ( *((_DWORD *)srce + 81) != 99 && v690 > 1 )
      {
        *(double *)v118.m128i_i64 = srce[9] * *srce - srce[5];
        sprintf(
          (char *)&v737,
          "Block %d - %d iterations, objective %g",
          v226,
          *((_DWORD *)srce + 77),
          *(double *)v118.m128i_i64);
        v229 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v626);
        v234 = CoinMessageHandler::operator<<(v229, (__int64)&v737, v230, v231, v232, v233, v596);
        CoinMessageHandler::operator<<(v234, 0, *(double *)v118.m128i_i64);
      }
      ++v226;
      srce += 222;
    }
    while ( v678 > (int)v226 );
    if ( !v648 )
    {
      v503 = v604;
LABEL_655:
      *((_DWORD *)v503 + 83) = 0;
    }
    if ( v690 <= 2 )
      goto LABEL_302;
LABEL_535:
    if ( v678 > 0 )
    {
      v413 = (double *)(v604 + 8);
      v414 = 8LL * v677;
      v415 = 0;
      do
      {
        v416 = v415;
        *(_QWORD *)&v181 = *(_QWORD *)(usage.ru_nsignals + v414);
        *(double *)v118.m128i_i64 = v413[9] * *v413 - v413[5];
        printf("block %d obj %g thetaC %g\n", v415, *(double *)v118.m128i_i64, *(double *)&v181);
        v414 += 8;
        v413 += 222;
        v415 = v416 + 1;
      }
      while ( v416 + 1 != v678 );
      *v643 = 0;
      goto LABEL_303;
    }
    *v643 = 0;
LABEL_610:
    v644 = 0;
LABEL_469:
    ++v648;
    v668 = 1;
  }
  while ( v619 != v648 );
  getrusage(RUSAGE_SELF, &v736);
  v367 = (double)SLODWORD(v736.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(v736.ru_utime.tv_sec) - v602;
  sprintf((char *)&v737, "Time at end of Benders %.2f seconds", v367);
  v368 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v626);
  v373 = CoinMessageHandler::operator<<(v368, (__int64)&v737, v369, v370, v371, v372, v596);
  CoinMessageHandler::operator<<(v373, 0, v367);
  operator delete[](v642);
  if ( v678 <= 0 )
  {
    operator delete[](v663);
    operator delete[](v617);
  }
  else
  {
    v374 = (void **)v663;
    v375 = 8LL * (unsigned int)(v606 - 2) + 8;
    do
    {
      if ( *v374 )
        operator delete[](*v374);
      v376 = (void **)((char *)v663 + v375) == ++v374;
    }
    while ( !v376 );
    operator delete[](v663);
    operator delete[](v617);
    v377 = (void **)((char *)v614 + v375);
    v378 = (void **)v614;
    do
    {
      if ( *v378 )
        operator delete[](*v378);
      v376 = v377 == ++v378;
    }
    while ( !v376 );
  }
  operator delete[](v614);
  if ( !*((_DWORD *)a3 + 18) )
    ClpSimplex::loadProblem(this, a2, 1, 0);
  v379 = usage.ru_nsignals;
  v380 = *((const double **)this + 15);
  srcn = *(int **)(CoinStructuredModel::coinBlock(a2, v618) + 280);
  v381 = *(_DWORD *)(CoinStructuredModel::coinBlock(a2, v618) + 12);
  v382 = *(_QWORD *)(CoinStructuredModel::coinBlock(a2, v618) + 176);
  v383 = *(_DWORD *)(CoinStructuredModel::coinBlock(a2, v618) + 8);
  if ( v381 > 0 )
  {
    v384 = 0;
    do
    {
      v385 = srcn[v384];
      *(_BYTE *)(v385 + *((_QWORD *)this + 33)) = *(_BYTE *)(v385 + *((_QWORD *)this + 33)) & 0xF8
                                                | *(_BYTE *)(v742 + v384) & 7;
      v386 = *(double *)(v379 + 8 * v384++);
      v380[v385] = v386;
    }
    while ( (unsigned int)(v381 - 1) + 1LL != v384 );
  }
  if ( v383 > 0 )
  {
    v387 = 0;
    do
    {
      v388 = (_BYTE *)(*((_QWORD *)this + 33) + *(_DWORD *)(v382 + 4 * v387) + *((_DWORD *)this + 27));
      v389 = (int)v387++ + HIDWORD(usage.__ru_msgsnd_word);
      *v388 = *v388 & 0xF8 | *(_BYTE *)(v742 + v389) & 7;
    }
    while ( (unsigned int)(v383 - 1) + 1LL != v387 );
  }
  if ( v678 > 0 )
  {
    v710 = v603;
    v390 = v604 + 116;
    do
    {
      v391 = *v710;
      v392 = *(_QWORD *)(CoinStructuredModel::coinBlock(a2, *v710) + 280);
      v393 = *(_DWORD *)(CoinStructuredModel::coinBlock(a2, v391) + 12);
      srco = *(_DWORD **)(CoinStructuredModel::coinBlock(a2, v391) + 176);
      v394 = *(_DWORD *)(CoinStructuredModel::coinBlock(a2, v391) + 8);
      v395 = *(_QWORD *)(v390 + 12);
      if ( v393 > 0 )
      {
        v396 = 0;
        do
        {
          v397 = *(int *)(v392 + 4 * v396);
          *(_BYTE *)(v397 + *((_QWORD *)this + 33)) = *(_BYTE *)(v397 + *((_QWORD *)this + 33)) & 0xF8
                                                    | *(_BYTE *)(*(_QWORD *)(v390 + 156) + v396) & 7;
          v398 = *(double *)(v395 + 8 * v396++);
          v380[v397] = v398;
        }
        while ( v396 != (unsigned int)(v393 - 1) + 1LL );
      }
      if ( v394 > 0 )
      {
        v399 = 0;
        do
        {
          v400 = (_BYTE *)(*((_QWORD *)this + 33) + srco[v399] + *((_DWORD *)this + 27));
          v401 = (int)v399++ + *(_DWORD *)v390;
          *v400 = *v400 & 0xF8 | *(_BYTE *)(*(_QWORD *)(v390 + 156) + v401) & 7;
        }
        while ( v399 != (unsigned int)(v394 - 1) + 1LL );
      }
      ++v710;
      v390 += 1776;
    }
    while ( &v604[1776 * (v606 - 2) + 1892] != v390 );
  }
  v402 = *((_DWORD *)this + 26);
  v403 = *((double **)this + 14);
  if ( v402 )
  {
    if ( v402 / 8 <= 0 )
    {
      v513 = *((double **)this + 14);
    }
    else
    {
      v511 = *((double **)this + 14);
      v512 = (unsigned int)(v402 / 8 - 1);
      do
      {
        *v511 = 0.0;
        v511[1] = 0.0;
        v511 += 8;
        *(v511 - 6) = 0.0;
        *(v511 - 5) = 0.0;
        *(v511 - 4) = 0.0;
        *(v511 - 3) = 0.0;
        *(v511 - 2) = 0.0;
        *(v511 - 1) = 0.0;
      }
      while ( v511 != &v403[8 * v512 + 8] );
      v513 = &v403[8 * (int)v512 + 8];
    }
    switch ( v402 % 8 )
    {
      case 1:
        goto LABEL_705;
      case 2:
        goto LABEL_704;
      case 3:
        goto LABEL_703;
      case 4:
        goto LABEL_702;
      case 5:
        goto LABEL_701;
      case 6:
        goto LABEL_700;
      case 7:
        v513[6] = 0.0;
LABEL_700:
        v513[5] = 0.0;
LABEL_701:
        v513[4] = 0.0;
LABEL_702:
        v513[3] = 0.0;
LABEL_703:
        v513[2] = 0.0;
LABEL_704:
        v513[1] = 0.0;
LABEL_705:
        *v513 = 0.0;
        break;
      default:
        break;
    }
  }
  v404.m128i_i64[0] = 0x3FF0000000000000LL;
  ClpModel::times(this, 1.0, v380, v403);
  v405 = *((_DWORD *)this + 26);
  v406 = *((_DWORD *)this + 27);
  if ( v405 <= 0 )
  {
    v542 = 0;
    if ( v406 > 0 )
      goto LABEL_715;
    goto LABEL_761;
  }
  v407 = *((_QWORD *)this + 33);
  v408 = (_BYTE *)(v407 + v406);
  v409 = -((_DWORD)v407 + v406) & 0xF;
  v410 = v409 + 15;
  if ( (unsigned int)(v409 + 15) < 0x11 )
    v410 = 17;
  if ( v410 > v405 - 1 )
  {
    LODWORD(v543) = 0;
    v542 = 0;
    goto LABEL_712;
  }
  if ( (_DWORD)v409 )
  {
    v411 = (*v408 & 7) == 1;
    if ( (_DWORD)v409 == 1 )
    {
      v412 = 1;
    }
    else
    {
      v411 += (*(_BYTE *)(v407 + v406 + 1) & 7) == 1;
      if ( (_DWORD)v409 == 2 )
      {
        v412 = 2;
      }
      else
      {
        v411 += (*(_BYTE *)(v407 + v406 + 2) & 7) == 1;
        if ( (_DWORD)v409 == 3 )
        {
          v412 = 3;
        }
        else
        {
          v411 += (*(_BYTE *)(v407 + v406 + 3) & 7) == 1;
          if ( (_DWORD)v409 == 4 )
          {
            v412 = 4;
          }
          else
          {
            v411 += (*(_BYTE *)(v407 + v406 + 4) & 7) == 1;
            if ( (_DWORD)v409 == 5 )
            {
              v412 = 5;
            }
            else
            {
              v411 += (*(_BYTE *)(v407 + v406 + 5) & 7) == 1;
              if ( (_DWORD)v409 == 6 )
              {
                v412 = 6;
              }
              else
              {
                v411 += (*(_BYTE *)(v407 + v406 + 6) & 7) == 1;
                if ( (_DWORD)v409 == 7 )
                {
                  v412 = 7;
                }
                else
                {
                  v411 += (*(_BYTE *)(v407 + v406 + 7) & 7) == 1;
                  if ( (_DWORD)v409 == 8 )
                  {
                    v412 = 8;
                  }
                  else
                  {
                    v411 += (*(_BYTE *)(v407 + v406 + 8) & 7) == 1;
                    if ( (_DWORD)v409 == 9 )
                    {
                      v412 = 9;
                    }
                    else
                    {
                      v411 += (*(_BYTE *)(v407 + v406 + 9) & 7) == 1;
                      if ( (_DWORD)v409 == 10 )
                      {
                        v412 = 10;
                      }
                      else
                      {
                        v411 += (*(_BYTE *)(v407 + v406 + 10) & 7) == 1;
                        if ( (_DWORD)v409 == 11 )
                        {
                          v412 = 11;
                        }
                        else
                        {
                          v411 += (*(_BYTE *)(v407 + v406 + 11) & 7) == 1;
                          if ( (_DWORD)v409 == 12 )
                          {
                            v412 = 12;
                          }
                          else
                          {
                            v411 += (*(_BYTE *)(v407 + v406 + 12) & 7) == 1;
                            if ( (_DWORD)v409 == 13 )
                            {
                              v412 = 13;
                            }
                            else
                            {
                              v411 += (*(_BYTE *)(v407 + v406 + 13) & 7) == 1;
                              if ( (_DWORD)v409 == 14 )
                              {
                                v412 = 14;
                              }
                              else
                              {
                                v411 += (*(_BYTE *)(v407 + v406 + 14) & 7) == 1;
                                v412 = 15;
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
    v412 = 0;
    v411 = 0;
  }
  v527 = 0;
  v528 = v405 - v409;
  v529 = _mm_load_si128((const __m128i *)&xmmword_290800);
  v530 = v406 + v409 + v407;
  v531 = (unsigned int)(v405 - v409) >> 4;
  v532 = 0;
  v533 = _mm_load_si128((const __m128i *)&xmmword_28D010);
  do
  {
    ++v532;
    v530 += 16;
    v534 = _mm_and_si128(_mm_cmpeq_epi8(_mm_and_si128(_mm_load_si128((const __m128i *)(v530 - 16)), v529), v533), v533);
    v535 = _mm_cmpgt_epi8((__m128i)0LL, v534);
    v536 = _mm_unpacklo_epi8(v534, v535);
    v537 = _mm_unpackhi_epi8(v534, v535);
    v538 = _mm_cmpgt_epi16((__m128i)0LL, v536);
    v539 = _mm_add_epi32(_mm_add_epi32(v527, _mm_unpacklo_epi16(v536, v538)), _mm_unpackhi_epi16(v536, v538));
    v540 = _mm_cmpgt_epi16((__m128i)0LL, v537);
    v527 = _mm_add_epi32(_mm_add_epi32(v539, _mm_unpacklo_epi16(v537, v540)), _mm_unpackhi_epi16(v537, v540));
  }
  while ( v532 < v531 );
  v541 = _mm_add_epi32(v527, _mm_srli_si128(v527, 8));
  v404 = _mm_srli_si128(v541, 4);
  v542 = _mm_cvtsi128_si32(_mm_add_epi32(v541, v404)) + v411;
  LODWORD(v543) = (v528 & 0xFFFFFFF0) + v412;
  if ( (v528 & 0xFFFFFFF0) != v528 )
  {
LABEL_712:
    v543 = (int)v543;
    do
    {
      v544 = (v408[v543++] & 7) == 1;
      v542 += v544;
    }
    while ( v405 > (int)v543 );
  }
  if ( v406 <= 0 )
  {
LABEL_761:
    v568 = v542;
    v565 = 0;
    goto LABEL_740;
  }
LABEL_715:
  v545 = *((_BYTE **)this + 33);
  v546 = -*((_DWORD *)this + 66) & 0xF;
  v547 = v546 + 15;
  if ( (unsigned int)(v546 + 15) < 0x11 )
    v547 = 17;
  if ( v547 > v406 - 1 )
  {
    LODWORD(v566) = 0;
    v565 = 0;
    goto LABEL_737;
  }
  if ( (_DWORD)v546 )
  {
    v548 = (*v545 & 7) == 1;
    if ( (_DWORD)v546 == 1 )
    {
      v549 = 1;
    }
    else
    {
      v548 += (v545[1] & 7) == 1;
      if ( (_DWORD)v546 == 2 )
      {
        v549 = 2;
      }
      else
      {
        v548 += (v545[2] & 7) == 1;
        if ( (_DWORD)v546 == 3 )
        {
          v549 = 3;
        }
        else
        {
          v548 += (v545[3] & 7) == 1;
          if ( (_DWORD)v546 == 4 )
          {
            v549 = 4;
          }
          else
          {
            v548 += (v545[4] & 7) == 1;
            if ( (_DWORD)v546 == 5 )
            {
              v549 = 5;
            }
            else
            {
              v548 += (v545[5] & 7) == 1;
              if ( (_DWORD)v546 == 6 )
              {
                v549 = 6;
              }
              else
              {
                v548 += (v545[6] & 7) == 1;
                if ( (_DWORD)v546 == 7 )
                {
                  v549 = 7;
                }
                else
                {
                  v548 += (v545[7] & 7) == 1;
                  if ( (_DWORD)v546 == 8 )
                  {
                    v549 = 8;
                  }
                  else
                  {
                    v548 += (v545[8] & 7) == 1;
                    if ( (_DWORD)v546 == 9 )
                    {
                      v549 = 9;
                    }
                    else
                    {
                      v548 += (v545[9] & 7) == 1;
                      if ( (_DWORD)v546 == 10 )
                      {
                        v549 = 10;
                      }
                      else
                      {
                        v548 += (v545[10] & 7) == 1;
                        if ( (_DWORD)v546 == 11 )
                        {
                          v549 = 11;
                        }
                        else
                        {
                          v548 += (v545[11] & 7) == 1;
                          if ( (_DWORD)v546 == 12 )
                          {
                            v549 = 12;
                          }
                          else
                          {
                            v548 += (v545[12] & 7) == 1;
                            if ( (_DWORD)v546 == 13 )
                            {
                              v549 = 13;
                            }
                            else
                            {
                              v548 += (v545[13] & 7) == 1;
                              if ( (_DWORD)v546 == 14 )
                              {
                                v549 = 14;
                              }
                              else
                              {
                                v548 += (v545[14] & 7) == 1;
                                v549 = 15;
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
    v549 = 0;
    v548 = 0;
  }
  v550 = 0;
  v551 = v406 - v546;
  v552 = _mm_load_si128((const __m128i *)&xmmword_290800);
  v553 = (unsigned int)(v406 - v546) >> 4;
  v554 = (const __m128i *)&v545[v546];
  v555 = 0;
  v556 = _mm_load_si128((const __m128i *)&xmmword_28D010);
  do
  {
    ++v555;
    v557 = _mm_and_si128(_mm_cmpeq_epi8(_mm_and_si128(_mm_load_si128(v554++), v552), v556), v556);
    v558 = _mm_cmpgt_epi8((__m128i)0LL, v557);
    v559 = _mm_unpacklo_epi8(v557, v558);
    v560 = _mm_unpackhi_epi8(v557, v558);
    v561 = _mm_cmpgt_epi16((__m128i)0LL, v559);
    v562 = _mm_add_epi32(_mm_add_epi32(v550, _mm_unpacklo_epi16(v559, v561)), _mm_unpackhi_epi16(v559, v561));
    v563 = _mm_cmpgt_epi16((__m128i)0LL, v560);
    v550 = _mm_add_epi32(_mm_add_epi32(v562, _mm_unpacklo_epi16(v560, v563)), _mm_unpackhi_epi16(v560, v563));
  }
  while ( v555 < v553 );
  v564 = _mm_add_epi32(v550, _mm_srli_si128(v550, 8));
  v404 = _mm_srli_si128(v564, 4);
  v565 = v548 + _mm_cvtsi128_si32(_mm_add_epi32(v564, v404));
  LODWORD(v566) = (v551 & 0xFFFFFFF0) + v549;
  if ( (v551 & 0xFFFFFFF0) != v551 )
  {
LABEL_737:
    v566 = (int)v566;
    do
    {
      v567 = (v545[v566++] & 7) == 1;
      v565 += v567;
    }
    while ( v406 > (int)v566 );
  }
  v568 = v542 + v565;
LABEL_740:
  sprintf((char *)&v737, "%d row basic %d col basic (total %d) - wanted %d", v542, v565, v568, v405);
  v569 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v626);
  v574 = CoinMessageHandler::operator<<(v569, (__int64)&v737, v570, v571, v572, v573, v598);
  CoinMessageHandler::operator<<(v574, 0, *(double *)v404.m128i_i64);
  getrusage(RUSAGE_SELF, &v736);
  v575 = (double)SLODWORD(v736.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(v736.ru_utime.tv_sec) - v602;
  sprintf((char *)&v737, "Time before cleanup of full model %.2f seconds", v575);
  v576 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v626);
  v581 = CoinMessageHandler::operator<<(v576, (__int64)&v737, v577, v578, v579, v580, v599);
  CoinMessageHandler::operator<<(v581, 0, v575);
  ClpSimplex::primal(this, 1, 0);
  getrusage(RUSAGE_SELF, &v736);
  v582 = (double)SLODWORD(v736.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(v736.ru_utime.tv_sec) - v602;
  sprintf((char *)&v737, "Total time %.2f seconds", v582);
  v583 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 92, v626);
  v588 = CoinMessageHandler::operator<<(v583, (__int64)&v737, v584, v585, v586, v587, v600);
  CoinMessageHandler::operator<<(v588, 0, v582);
  operator delete[](v603);
  operator delete[](v612);
  operator delete[](v615);
  operator delete[](v643);
  operator delete[](v646);
  operator delete[](v666);
  operator delete[](v616);
  operator delete[](v640);
  if ( v604 != (char *)-8LL )
  {
    v589 = (ClpModel *)((char *)v611 + 1776 * *(_QWORD *)v604);
    if ( v611 != v589 )
    {
      v590 = (ClpModel *)((char *)v589 - 1776);
      v591 = (unsigned __int64)v611
           + 1776 * *(_QWORD *)v604
           + -1776
           * ((0x195E8EFDB195E8FLL * ((unsigned __int64)(1776LL * *(_QWORD *)v604 - 1776) >> 4)) & 0xFFFFFFFFFFFFFFFLL)
           - 3552;
      do
      {
        v592 = v590;
        v590 = (ClpSimplex *)((char *)v590 - 1776);
        ClpSimplex::~ClpSimplex(v592);
      }
      while ( (ClpSimplex *)v591 != v590 );
    }
    operator delete[](v604);
  }
  ClpSimplex::~ClpSimplex((ClpSimplex *)&usage);
  return 0;
}

