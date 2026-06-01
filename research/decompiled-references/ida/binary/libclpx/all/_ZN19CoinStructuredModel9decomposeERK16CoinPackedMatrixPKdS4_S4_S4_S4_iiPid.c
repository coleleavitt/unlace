__int64 __fastcall CoinStructuredModel::decompose(
        CoinStructuredModel *this,
        const CoinPackedMatrix *a2,
        double *a3,
        double *a4,
        double *a5,
        double *a6,
        __m128i si128,
        double *a8,
        int a9,
        int a10,
        int *a11)
{
  bool v11; // zf
  int v12; // ebx
  unsigned __int64 v13; // r12
  _OWORD *v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r14
  _OWORD *v17; // r13
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdi
  int v20; // r11d
  int v21; // r10d
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  __m128i v30; // xmm6
  char *v31; // rdx
  char *v32; // rax
  __m128i v33; // xmm7
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  CoinPackedMatrix *v37; // rcx
  _DWORD *v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // ebx
  unsigned int v41; // ecx
  CoinPackedMatrix *v42; // rdi
  double *v43; // rsi
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rsi
  __int64 v48; // rax
  _DWORD *v49; // rdi
  unsigned int v50; // edx
  char *v51; // r8
  unsigned int v52; // r9d
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  signed int v55; // eax
  __int64 v56; // rdx
  int v57; // ecx
  int v58; // eax
  bool v59; // cc
  CoinPackedMatrix *v60; // rbx
  double *v61; // rdi
  int v62; // r11d
  int v63; // ecx
  int v64; // edx
  __int64 v65; // rcx
  int v66; // esi
  int v67; // edx
  __int64 v68; // rcx
  int v69; // esi
  int v70; // edx
  int v71; // eax
  int v72; // esi
  int v73; // ecx
  _OWORD *v74; // rdx
  _OWORD *v75; // rax
  __int64 v76; // rax
  unsigned int v77; // edx
  int v78; // edi
  __m128i *v79; // rdx
  unsigned int v80; // esi
  unsigned int v81; // eax
  unsigned int v82; // eax
  int v83; // ebx
  signed int v84; // edx
  int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rsi
  int v89; // edx
  int v90; // ecx
  __int64 v91; // r10
  __int64 v92; // rax
  unsigned int v93; // r9d
  int v94; // r9d
  unsigned int v95; // edi
  CoinModel *v96; // rbx
  __m128i *v97; // r10
  unsigned int v98; // eax
  int v99; // eax
  int v100; // edx
  __int64 v101; // rax
  unsigned int v102; // edx
  int v103; // edi
  int v104; // r8d
  int v105; // esi
  __m128i v106; // xmm1
  const __m128i *v107; // rdx
  unsigned int v108; // ecx
  unsigned int v109; // eax
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  unsigned int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // esi
  __int64 v116; // rax
  unsigned int v117; // edx
  unsigned int v118; // ecx
  int v119; // edi
  unsigned int v120; // esi
  __m128i v121; // xmm1
  const __m128i *v122; // rdx
  unsigned int v123; // eax
  __m128i v124; // xmm0
  __m128i v125; // xmm1
  signed int v126; // eax
  int v127; // eax
  CoinMessageHandler *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rax
  int *v134; // rcx
  __int64 v135; // rsi
  int *v136; // rcx
  __int64 v137; // rsi
  unsigned __int64 v138; // rbx
  unsigned __int64 v139; // r12
  double *v140; // r12
  int *v141; // rcx
  int *v142; // rdx
  __int64 v143; // rsi
  __int64 v144; // rax
  __int64 v145; // r8
  int v146; // edi
  __int64 v147; // rax
  int v148; // r9d
  __int64 v149; // rax
  double *v150; // rcx
  int v151; // esi
  __int64 v152; // rdx
  __int64 v153; // rax
  CoinPackedMatrix *v154; // rbx
  CoinMessageHandler *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rax
  int v161; // eax
  int v162; // edx
  int v163; // ebx
  _DWORD *v164; // rdi
  __int64 v165; // rax
  double *v166; // r8
  double *v167; // r9
  int v168; // esi
  double *v169; // r10
  double *v170; // r11
  __int64 v171; // rcx
  __int64 v172; // rdx
  double *v173; // rsi
  int v174; // r11d
  double *v175; // r8
  double *v176; // rdi
  double *v177; // r9
  __int64 v178; // rax
  __int64 v179; // rdx
  double v180; // xmm0_8
  __int64 v181; // rcx
  int v182; // edx
  __int64 v183; // rax
  int v184; // ecx
  int v185; // r11d
  _DWORD *v186; // rdi
  __int64 v187; // rdx
  __int64 v188; // rsi
  int v189; // r8d
  int v190; // edx
  CoinModel *v191; // rax
  int v192; // esi
  _DWORD *v193; // rsi
  int v194; // ebx
  double *v195; // rdi
  double *v196; // r8
  double *v197; // r9
  double *v198; // r10
  __int64 v199; // rax
  __int64 v200; // rcx
  double v201; // xmm0_8
  __int64 v202; // rdx
  int v203; // ebx
  double *v204; // rsi
  double *v205; // r8
  double *v206; // r9
  int v207; // r11d
  double *v208; // rdi
  __int64 v209; // rax
  __int64 v210; // rdx
  double v211; // xmm0_8
  __int64 v212; // rcx
  int v213; // r14d
  CoinMessages *v214; // r15
  CoinModel *v215; // r14
  double *v216; // rdi
  _OWORD *v218; // rdx
  _OWORD *v219; // rax
  double v220; // xmm3_8
  __int64 v221; // r12
  __int64 v222; // rax
  int v223; // r11d
  int v224; // ebx
  int v225; // edi
  int *v226; // r8
  int *v227; // rdx
  char *v228; // r10
  __int64 v229; // rax
  __int64 v230; // rcx
  __int64 v231; // rsi
  CoinModel *v232; // rcx
  _DWORD *v233; // rax
  __int64 v234; // r9
  _DWORD *v235; // rcx
  __int64 v236; // rax
  int *v237; // rsi
  int *v238; // r9
  int v239; // ebx
  __int64 v240; // r9
  int *v241; // r11
  int *v242; // r9
  int v243; // r10d
  __int64 v244; // rcx
  int *v245; // rsi
  int v246; // eax
  double v247; // xmm0_8
  int v248; // ebx
  int v249; // ebx
  char *v250; // rax
  int v251; // eax
  int v252; // edx
  int v253; // edi
  __int64 v254; // rcx
  char *v255; // rax
  char *v256; // rsi
  __int64 v257; // rcx
  _DWORD *v258; // rsi
  CoinModel *v259; // r8
  int v260; // ebx
  __int64 v261; // r12
  double *v262; // r11
  int v263; // edx
  int v264; // ecx
  int *v265; // rax
  int *v266; // rdi
  __int64 v267; // rdx
  _DWORD *v268; // rsi
  __int64 v269; // rsi
  __int64 v270; // rdi
  _DWORD *v271; // r8
  __int64 v272; // rdx
  __int64 v273; // r10
  int v274; // r9d
  int v275; // r8d
  char *v276; // rsi
  char *v277; // r8
  __int64 v278; // rdi
  int v279; // eax
  double v280; // xmm0_8
  signed int v281; // eax
  int v282; // ebx
  double *v283; // rcx
  __m128i *v284; // rcx
  unsigned int v285; // edx
  __m128i v286; // xmm0
  __m128i v287; // xmm1
  double *v288; // rbx
  int v289; // edi
  int v290; // edx
  int v291; // eax
  _OWORD *v292; // rdx
  _OWORD *v293; // rax
  _OWORD *v294; // rax
  _OWORD *v295; // rdx
  __int64 v296; // rdx
  __int64 v297; // rcx
  _DWORD *v298; // rdx
  CoinPackedMatrix *v299; // rcx
  CoinPackedMatrix *v300; // rax
  __int64 v301; // rdx
  __int64 v302; // rbx
  int v303; // edx
  CoinMessageHandler *v304; // rax
  __int64 v305; // rdx
  __int64 v306; // rcx
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rax
  int v310; // ebx
  int *v311; // rax
  int *v312; // r14
  unsigned __int64 v313; // r15
  char *v314; // r12
  CoinPackedMatrix *v315; // r13
  CoinMessages *v316; // rax
  __int64 v317; // rax
  unsigned int v318; // edx
  int v319; // edi
  __m128i *v320; // rdx
  unsigned int v321; // esi
  unsigned int v322; // eax
  unsigned int v323; // eax
  int v324; // ebx
  unsigned int v325; // edx
  int v326; // eax
  __int64 v327; // rcx
  int v328; // eax
  __int64 v329; // rsi
  int v330; // edx
  int v331; // ecx
  __int64 v332; // r10
  __int64 v333; // rax
  unsigned int v334; // r9d
  int v335; // r9d
  unsigned int v336; // edi
  CoinMessages *v337; // rbx
  __m128i *v338; // r10
  unsigned int v339; // eax
  int v340; // eax
  int v341; // edx
  __int64 v342; // rax
  unsigned int v343; // edx
  int v344; // esi
  int v345; // r8d
  int v346; // edi
  __m128i v347; // xmm1
  const __m128i *v348; // rdx
  unsigned int v349; // ecx
  unsigned int v350; // eax
  __m128i v351; // xmm0
  __m128i v352; // xmm1
  unsigned int v353; // eax
  int v354; // eax
  int v355; // eax
  int v356; // esi
  __int64 v357; // rax
  unsigned int v358; // edx
  unsigned int v359; // ecx
  int v360; // edi
  unsigned int v361; // esi
  __m128i v362; // xmm1
  const __m128i *v363; // rdx
  unsigned int v364; // eax
  __m128i v365; // xmm0
  __m128i v366; // xmm1
  signed int v367; // eax
  int v368; // r8d
  int v369; // eax
  CoinMessageHandler *v370; // rax
  __int64 v371; // rdx
  __int64 v372; // rcx
  __int64 v373; // r8
  __int64 v374; // r9
  __int64 v375; // rax
  int *v376; // rcx
  __int64 v377; // rsi
  int *v378; // rcx
  __int64 v379; // rsi
  double *v380; // rcx
  int *v381; // rdi
  int *v382; // rsi
  __int64 v383; // rdx
  __int64 v384; // rax
  double *v385; // r9
  __int64 v386; // r8
  int v387; // ecx
  __int64 v388; // rax
  int v389; // ebx
  __int64 v390; // rax
  double *v391; // rcx
  int v392; // esi
  __int64 v393; // rdx
  __int64 v394; // rax
  double *v395; // rdi
  CoinMessages *v396; // rbx
  CoinMessageHandler *v397; // rax
  __int64 v398; // rdx
  __int64 v399; // rcx
  __int64 v400; // r8
  __int64 v401; // r9
  __int64 v402; // rax
  int v403; // eax
  int v404; // eax
  int v405; // ebx
  _DWORD *v406; // rsi
  __int64 v407; // rax
  double *v408; // rdi
  double *v409; // r8
  int v410; // r12d
  double *v411; // r9
  double *v412; // r10
  __int64 v413; // rdx
  double v414; // xmm0_8
  __int64 v415; // rcx
  double *v416; // rsi
  double *v417; // r8
  double *v418; // rdi
  double *v419; // r9
  double *v420; // r10
  __int64 v421; // rax
  __int64 v422; // rcx
  __int64 v423; // rdx
  double v424; // xmm0_8
  int v425; // r8d
  int v426; // esi
  CoinModel *v427; // r12
  __int64 v428; // rax
  _DWORD *v429; // rsi
  int v430; // r12d
  int v431; // edi
  __int64 v432; // rdx
  __int64 v433; // rcx
  int v434; // r8d
  CoinModel *v435; // r12
  _DWORD *v436; // rsi
  int v437; // ebx
  double *v438; // rdi
  double *v439; // r8
  double *v440; // r9
  double *v441; // r10
  __int64 v442; // rax
  __int64 v443; // rdx
  double v444; // xmm0_8
  __int64 v445; // rcx
  int v446; // r12d
  double *v447; // rsi
  int v448; // ebx
  double *v449; // rdi
  double *v450; // r8
  double *v451; // r9
  double *v452; // r10
  __int64 v453; // rax
  __int64 v454; // rcx
  double v455; // xmm0_8
  __int64 v456; // rdx
  int v457; // esi
  CoinModel *v458; // r12
  double *v459; // rsi
  __int64 v460; // rax
  CoinPackedMatrix *v461; // rdi
  __int64 v462; // rcx
  int v463; // edx
  _OWORD *v464; // rax
  __int64 v465; // rcx
  unsigned __int64 v466; // rax
  __int64 v467; // rdx
  void *v468; // rsi
  __int64 v469; // rdx
  __int64 v470; // rcx
  int *v471; // rcx
  __int64 v472; // rbx
  int v473; // edx
  CoinMessageHandler *v474; // rax
  __int64 v475; // rdx
  __int64 v476; // rcx
  __int64 v477; // r8
  __int64 v478; // r9
  __int64 v479; // rax
  CoinMessages *v480; // r11
  int v481; // eax
  int v482; // r10d
  int v483; // r9d
  int v484; // ecx
  __int64 v485; // rax
  int v486; // eax
  __int64 v487; // rcx
  __int64 v488; // rdx
  __int64 v489; // rax
  __int64 v490; // rdx
  int *v491; // rcx
  char *v492; // rdx
  char *v493; // rax
  __int64 v494; // rdx
  __int64 v495; // rax
  __int64 v496; // rdx
  _DWORD *v497; // rcx
  CoinPackedMatrix *v498; // rax
  unsigned int v499; // eax
  int v500; // ebx
  unsigned int v501; // ecx
  CoinPackedMatrix *v502; // rsi
  CoinMessages *v503; // rdi
  int v504; // eax
  int v505; // eax
  int v506; // eax
  char *v507; // rsi
  __int64 v508; // rax
  int *v509; // rdi
  unsigned int v510; // edx
  char *v511; // r8
  unsigned int v512; // r9d
  __m128i v513; // xmm0
  __m128i v514; // xmm1
  signed int v515; // eax
  __int64 v516; // rdx
  int v517; // ecx
  int v518; // eax
  CoinPackedMatrix *v519; // rbx
  int v520; // r11d
  CoinMessages *v521; // rdi
  int v522; // ecx
  int v523; // ecx
  __int64 v524; // rdx
  int v525; // esi
  int v526; // ecx
  __int64 v527; // rdx
  int v528; // esi
  int v529; // ecx
  int v530; // eax
  int v531; // esi
  int v532; // ecx
  _OWORD *v533; // rdx
  _OWORD *v534; // rax
  char *v535; // r11
  CoinPackedMatrix *v536; // rbx
  __int64 v537; // rdi
  __int64 v538; // rax
  __int64 v539; // rsi
  __int64 v540; // r9
  int v541; // edx
  __int64 v542; // r12
  int *v543; // rax
  int v544; // r10d
  int *v545; // rcx
  int v546; // edx
  CoinPackedMatrix *v547; // rax
  CoinPackedMatrix *v548; // rcx
  void *v549; // rbx
  __int64 v550; // rdx
  CoinPackedMatrix *v551; // rdx
  CoinPackedMatrix *v552; // rax
  __int64 v553; // r12
  double v554; // xmm2_8
  __int64 v555; // rax
  int v556; // r11d
  int v557; // ebx
  int v558; // edi
  int *v559; // r8
  int *v560; // rdx
  char *v561; // r10
  __int64 v562; // rax
  __int64 v563; // rcx
  __int64 v564; // rsi
  __int64 v565; // rcx
  int *v566; // rax
  __int64 v567; // r9
  int *v568; // rcx
  __int64 v569; // rax
  int *v570; // rsi
  int *v571; // r9
  int v572; // ebx
  __int64 v573; // r9
  int *v574; // r11
  int *v575; // r9
  int v576; // r10d
  __int64 v577; // rcx
  int *v578; // rsi
  int v579; // eax
  double v580; // xmm0_8
  int v581; // ebx
  int v582; // ebx
  __int64 v583; // rax
  int v584; // eax
  int v585; // edx
  int v586; // esi
  char *v587; // rcx
  char *v588; // rax
  __int64 v589; // rdi
  int v590; // edx
  int *v591; // rcx
  int v592; // eax
  unsigned __int64 v593; // rax
  _DWORD *v594; // rax
  int v595; // edx
  int v596; // edx
  int v597; // edx
  int v598; // edx
  char *v599; // r8
  CoinModel *v600; // r10
  __int64 v601; // r9
  int *v602; // r13
  _DWORD *v603; // r9
  __int64 v604; // rax
  int v605; // edi
  unsigned __int64 v606; // rdx
  char *v607; // r11
  int v608; // eax
  __int64 v609; // rax
  _DWORD *v610; // rsi
  int v611; // edi
  int v612; // r10d
  int v613; // r10d
  int v614; // ecx
  int *v615; // rax
  int *v616; // r10
  __int64 v617; // rsi
  _DWORD *v618; // rdi
  CoinModel *v619; // rdx
  __int64 v620; // rdi
  int v621; // eax
  int v622; // edx
  double *v623; // rax
  __int64 v624; // rcx
  int v625; // edx
  __int64 v626; // rdx
  double *v627; // rcx
  double *v628; // rax
  double *v629; // rax
  __m128 *v630; // rax
  __int64 v631; // rdx
  __int64 v632; // rdi
  _DWORD *v633; // r8
  __int64 v634; // rdx
  __int64 v635; // r10
  int v636; // r9d
  int v637; // r8d
  char *v638; // rsi
  char *v639; // r8
  __int64 v640; // rdi
  __m128i v641; // xmm0
  CoinMessageHandler *v642; // rdi
  CoinMessageHandler *v643; // rax
  __int64 v644; // rdx
  __int64 v645; // rcx
  __int64 v646; // r8
  __int64 v647; // r9
  __int64 v648; // rax
  CoinStructuredModel *v649; // r12
  CoinMessageHandler *v650; // rax
  __int64 v651; // rdx
  __int64 v652; // rcx
  __int64 v653; // r8
  __int64 v654; // r9
  __int64 v655; // rax
  int *v656; // rax
  int *v657; // rdx
  __m128i v658; // xmm0
  _DWORD *v659; // rax
  int v660; // edx
  int v661; // edx
  int v662; // edx
  int v663; // edx
  int v664; // eax
  double v665; // xmm0_8
  unsigned int v666; // eax
  CoinMessages *v667; // rbx
  unsigned int v668; // eax
  __m128i *v669; // rcx
  unsigned int v670; // edx
  __m128i v671; // xmm0
  __m128i v672; // xmm1
  int v673; // eax
  CoinMessages *v674; // rbx
  int v675; // esi
  int v676; // edx
  int v677; // eax
  char *v678; // rdx
  char *v679; // rax
  _OWORD *v680; // rax
  _OWORD *v681; // rdx
  int v682; // edx
  __int64 v683; // rcx
  double *v684; // rsi
  double *v685; // rax
  double *v686; // rax
  int v687; // edx
  __int64 v688; // rdx
  double *v689; // rcx
  double *v690; // rax
  double *v691; // rax
  int v692; // edx
  int v693; // edx
  int v694; // edx
  unsigned __int64 v695; // rax
  __int64 v696; // rdx
  char *v697; // r11
  char *v698; // rbx
  __int64 v699; // rdi
  double *v700; // rax
  __int64 v701; // rsi
  char *v702; // r9
  int v703; // edx
  double *v704; // r12
  int *v705; // rax
  int v706; // r10d
  int *v707; // rcx
  int v708; // edx
  int v709; // ebx
  char *v710; // r8
  char *v711; // r12
  CoinMessages *v712; // r11
  int v713; // edx
  int v714; // ecx
  int *v715; // rax
  int *v716; // rdi
  __int64 v717; // rdx
  int *v718; // rsi
  __int64 v719; // rsi
  char *v720; // r13
  CoinMessages *v721; // r9
  __int64 v722; // r8
  char *v723; // r11
  _DWORD *v724; // r8
  __int64 v725; // rax
  int v726; // edi
  CoinModel *v727; // rdx
  char *v728; // r10
  int v729; // eax
  __int64 v730; // rax
  int *v731; // rsi
  int v732; // r9d
  int v733; // edi
  int v734; // r9d
  int *v735; // rax
  int *v736; // r9
  __int64 v737; // rsi
  int *v738; // rdi
  CoinMessages *v739; // rdx
  __int64 v740; // rdi
  int v741; // eax
  int *v742; // rax
  __m128i v743; // xmm0
  int *v744; // rax
  __m128i v745; // xmm0
  CoinMessageHandler *v746; // rdi
  CoinMessageHandler *v747; // rax
  __int64 v748; // rdx
  __int64 v749; // rcx
  __int64 v750; // r8
  __int64 v751; // r9
  __int64 v752; // rax
  int v753; // edx
  CoinMessages *v754; // rsi
  __int64 v755; // rax
  CoinPackedMatrix *v756; // rdi
  __int64 v757; // rdx
  int v758; // ecx
  CoinMessageHandler *v759; // rax
  __int64 v760; // rdx
  __int64 v761; // rcx
  __int64 v762; // r8
  __int64 v763; // r9
  __int64 v764; // rax
  int *v765; // rsi
  __int64 v766; // rax
  int v767; // edx
  int v768; // edx
  int v769; // edx
  int v770; // edx
  int v771; // edx
  int v772; // ebx
  int v773; // esi
  double *v774; // rdi
  __m128i *v775; // rcx
  unsigned int v776; // edx
  __m128i v777; // xmm0
  __m128i v778; // xmm1
  int v779; // eax
  int v780; // ebx
  double *v781; // rdi
  int v782; // r11d
  int v783; // edx
  int v784; // eax
  int v785; // edx
  int v786; // ebx
  unsigned int v787; // esi
  CoinMessages *v788; // rcx
  unsigned int v789; // edx
  __m128i *v790; // rcx
  __m128i v791; // xmm1
  __m128i v792; // xmm0
  int v793; // eax
  int v794; // ebx
  CoinMessages *v795; // rsi
  int v796; // r11d
  int v797; // edx
  __int64 v798; // rcx
  int v799; // edi
  int v800; // edx
  __int64 v801; // rcx
  int v802; // edi
  int v803; // edx
  __int64 v804; // rcx
  int v805; // edi
  int v806; // edx
  int v807; // eax
  __m128i v808; // [rsp+0h] [rbp-740h] BYREF
  char *v809; // [rsp+10h] [rbp-730h]
  unsigned __int64 v810; // [rsp+18h] [rbp-728h]
  __m128i *v811; // [rsp+20h] [rbp-720h]
  int *v812; // [rsp+28h] [rbp-718h]
  CoinPackedMatrix *v813; // [rsp+30h] [rbp-710h]
  __m128i *v814; // [rsp+38h] [rbp-708h]
  int v815; // [rsp+40h] [rbp-700h]
  unsigned int v816; // [rsp+44h] [rbp-6FCh]
  char *v817; // [rsp+48h] [rbp-6F8h]
  unsigned __int64 v818; // [rsp+50h] [rbp-6F0h]
  char *v819; // [rsp+58h] [rbp-6E8h]
  char *v820; // [rsp+60h] [rbp-6E0h]
  int v821; // [rsp+68h] [rbp-6D8h]
  int v822; // [rsp+6Ch] [rbp-6D4h]
  int v823; // [rsp+70h] [rbp-6D0h]
  unsigned int v824; // [rsp+74h] [rbp-6CCh]
  char *v825; // [rsp+78h] [rbp-6C8h]
  int *v826; // [rsp+80h] [rbp-6C0h]
  char *v827; // [rsp+88h] [rbp-6B8h]
  _DWORD *v828; // [rsp+90h] [rbp-6B0h]
  unsigned __int64 v829; // [rsp+98h] [rbp-6A8h]
  unsigned int v830; // [rsp+A0h] [rbp-6A0h]
  int v831; // [rsp+A4h] [rbp-69Ch]
  char *v832; // [rsp+A8h] [rbp-698h]
  unsigned __int64 v833; // [rsp+B0h] [rbp-690h]
  unsigned __int64 v834; // [rsp+B8h] [rbp-688h]
  __int64 v835; // [rsp+C0h] [rbp-680h]
  __int64 v836; // [rsp+C8h] [rbp-678h]
  _DWORD *v837; // [rsp+D0h] [rbp-670h]
  _DWORD *v838; // [rsp+D8h] [rbp-668h]
  CoinPackedMatrix *v839; // [rsp+E0h] [rbp-660h]
  _DWORD *v840; // [rsp+E8h] [rbp-658h]
  int *v841; // [rsp+F0h] [rbp-650h]
  char *v842; // [rsp+F8h] [rbp-648h]
  CoinPackedMatrix *v843; // [rsp+100h] [rbp-640h]
  int v844; // [rsp+108h] [rbp-638h]
  int v845; // [rsp+10Ch] [rbp-634h]
  CoinPackedMatrix *v846; // [rsp+110h] [rbp-630h]
  int v847[2]; // [rsp+118h] [rbp-628h]
  CoinPackedMatrix *v848; // [rsp+120h] [rbp-620h]
  double *v849; // [rsp+128h] [rbp-618h]
  double *v850; // [rsp+130h] [rbp-610h]
  double *v851; // [rsp+138h] [rbp-608h]
  double *v852; // [rsp+140h] [rbp-600h]
  double *v853; // [rsp+148h] [rbp-5F8h]
  double *v854; // [rsp+150h] [rbp-5F0h]
  char *v855; // [rsp+158h] [rbp-5E8h]
  double *v856; // [rsp+160h] [rbp-5E0h]
  double *v857; // [rsp+168h] [rbp-5D8h]
  double *v858; // [rsp+170h] [rbp-5D0h]
  CoinModel *lpsrc; // [rsp+178h] [rbp-5C8h]
  char *v860; // [rsp+180h] [rbp-5C0h]
  CoinPackedMatrix *v861; // [rsp+188h] [rbp-5B8h]
  char *v862; // [rsp+190h] [rbp-5B0h]
  std::string *v863; // [rsp+198h] [rbp-5A8h]
  CoinPackedMatrix *v864; // [rsp+1A0h] [rbp-5A0h]
  double *v865; // [rsp+1A8h] [rbp-598h]
  CoinStructuredModel *v866; // [rsp+1B0h] [rbp-590h]
  CoinMessages *v867; // [rsp+1B8h] [rbp-588h]
  int v868; // [rsp+1C0h] [rbp-580h]
  int v869; // [rsp+1C4h] [rbp-57Ch]
  unsigned __int64 v870; // [rsp+1C8h] [rbp-578h]
  CoinMessages *v871; // [rsp+1D0h] [rbp-570h]
  CoinModel *v872; // [rsp+1D8h] [rbp-568h]
  int v873[2]; // [rsp+1E0h] [rbp-560h]
  void *v874; // [rsp+1E8h] [rbp-558h]
  char v875; // [rsp+1FEh] [rbp-542h] BYREF
  char v876; // [rsp+1FFh] [rbp-541h] BYREF
  __int64 v877; // [rsp+200h] [rbp-540h] BYREF
  __int64 v878; // [rsp+208h] [rbp-538h] BYREF
  _QWORD v879[4]; // [rsp+210h] [rbp-530h] BYREF
  _QWORD v880[4]; // [rsp+230h] [rbp-510h] BYREF
  _BYTE v881[40]; // [rsp+250h] [rbp-4F0h] BYREF
  std::string *v882; // [rsp+278h] [rbp-4C8h]
  char *v883; // [rsp+280h] [rbp-4C0h]
  CoinPackedMatrix *v884; // [rsp+288h] [rbp-4B8h]
  __int64 v885; // [rsp+2B0h] [rbp-490h] BYREF
  int v886; // [rsp+2B8h] [rbp-488h]
  __int128 v887; // [rsp+310h] [rbp-430h] BYREF
  double v888; // [rsp+320h] [rbp-420h]
  char s[16]; // [rsp+370h] [rbp-3D0h] BYREF
  __int16 v890; // [rsp+380h] [rbp-3C0h]
  _QWORD v891[3]; // [rsp+440h] [rbp-300h] BYREF
  unsigned __int64 v892; // [rsp+458h] [rbp-2E8h]

  v852 = a3;
  v866 = this;
  v848 = a2;
  v834 = si128.m128i_i64[0];
  v851 = a4;
  v850 = a5;
  *((_QWORD *)this + 3) = si128.m128i_i64[0];
  v849 = a6;
  v845 = a9 % 10;
  if ( a9 % 10 == 1 )
  {
    v843 = (CoinPackedMatrix *)v881;
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v881, a2);
    CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v881);
    v11 = *((_BYTE *)a2 + 8) == 0;
    v856 = *((double **)a2 + 5);
    v842 = *((char **)a2 + 7);
    v855 = *((char **)a2 + 6);
    v863 = v882;
    v864 = v884;
    v862 = v883;
    v869 = *((_DWORD *)a2 + 16);
    if ( !v11 )
      v869 = *((_DWORD *)a2 + 17);
    v310 = v869 + 1;
    if ( (unsigned __int64)(v869 + 1) > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v874 = (void *)(4LL * v310);
    v311 = (int *)operator new[]((unsigned __int64)v874);
    v312 = v311;
    if ( v869 == -1 )
      goto LABEL_397;
    if ( v310 / 8 <= 0 )
    {
      v471 = v311;
    }
    else
    {
      si128.m128i_i64[0] = 0;
      v468 = v874;
      v469 = (unsigned int)(v310 / 8 - 1);
      v470 = (__int64)&v311[8 * v469 + 8];
      do
      {
        *(_OWORD *)v311 = 0;
        v311 += 8;
        *((_OWORD *)v311 - 1) = 0;
      }
      while ( v311 != (int *)v470 );
      v874 = v468;
      v471 = &v312[8 * (int)v469 + 8];
    }
    switch ( v310 % 8 )
    {
      case 1:
        goto LABEL_684;
      case 2:
        goto LABEL_683;
      case 3:
        goto LABEL_682;
      case 4:
        goto LABEL_681;
      case 5:
        goto LABEL_680;
      case 6:
        goto LABEL_679;
      case 7:
        v471[6] = 0;
LABEL_679:
        v471[5] = 0;
LABEL_680:
        v471[4] = 0;
LABEL_681:
        v471[3] = 0;
LABEL_682:
        v471[2] = 0;
LABEL_683:
        v471[1] = 0;
LABEL_684:
        *v471 = 0;
        break;
      default:
        break;
    }
    if ( v869 <= 0 )
    {
LABEL_397:
      if ( !a11 )
        goto LABEL_616;
    }
    else
    {
      v547 = v864;
      v548 = (CoinPackedMatrix *)((char *)v864 + 4 * (unsigned int)(v869 - 1) + 4);
      v549 = v874;
      do
      {
        v550 = *(int *)v547;
        v547 = (CoinPackedMatrix *)((char *)v547 + 4);
        ++v312[v550];
      }
      while ( v547 != v548 );
      v874 = v549;
      if ( !a11 )
      {
LABEL_616:
        if ( v869 >= 0 )
        {
          v472 = 0;
          do
          {
            v473 = v312[v472];
            if ( v473 )
            {
              sprintf(s, "%d rows have %d elements", v473, v472);
              v474 = (CoinMessageHandler *)CoinMessageHandler::message(
                                             *((CoinMessageHandler **)v866 + 7),
                                             29,
                                             (CoinStructuredModel *)((char *)v866 + 64));
              v479 = CoinMessageHandler::operator<<(v474, (__int64)s, v475, v476, v477, v478, v808.m128i_i64[0]);
              CoinMessageHandler::operator<<(v479, 0, *(double *)si128.m128i_i64);
            }
            ++v472;
          }
          while ( v472 != v869 + 1LL );
        }
      }
    }
    v11 = *((_BYTE *)v848 + 8) == 0;
    LODWORD(v865) = *((_DWORD *)v848 + 16);
    if ( v11 )
      LODWORD(v865) = *((_DWORD *)v848 + 17);
    v836 = (int)v865;
    if ( (unsigned __int64)(int)v865 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v313 = operator new[](4LL * (int)v865);
    v835 = v869;
    if ( (unsigned __int64)v869 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v314 = (char *)v874 - 4;
    v874 = (void *)operator new[]((unsigned __int64)v874 - 4);
    v315 = (CoinPackedMatrix *)operator new[](4LL * (int)v865);
    v316 = (CoinMessages *)operator new[]((unsigned __int64)v314);
    v867 = v316;
    if ( a11 )
    {
      if ( v869 > 0 )
      {
        v317 = -(int)((unsigned __int64)v312 >> 2) & 3;
        v318 = v317 + 3;
        if ( (unsigned int)(v317 + 3) < 5 )
          v318 = 5;
        if ( v318 > v869 - 1 )
        {
          v323 = 0;
        }
        else
        {
          v319 = 0;
          if ( (_DWORD)v317 )
          {
            *v312 = -2;
            v319 = 1;
            if ( (_DWORD)v317 != 1 )
            {
              v312[1] = -2;
              v319 = 2;
              if ( (_DWORD)v317 != 2 )
              {
                v312[2] = -2;
                v319 = 3;
              }
            }
          }
          v320 = (__m128i *)&v312[v317];
          si128 = _mm_load_si128((const __m128i *)&xmmword_297230);
          v321 = v869 - v317;
          v322 = 0;
          do
          {
            ++v322;
            ++v320;
            v320[-1] = si128;
          }
          while ( v321 >> 2 > v322 );
          v323 = (v321 & 0xFFFFFFFC) + v319;
          if ( (v321 & 0xFFFFFFFC) == v321 )
            goto LABEL_420;
        }
        v324 = v869;
        v312[v323] = -2;
        if ( v324 > (int)(v323 + 1) )
        {
          v312[v323 + 1] = -2;
          if ( v324 > (int)(v323 + 2) )
          {
            v312[v323 + 2] = -2;
            if ( v324 > (int)(v323 + 3) )
            {
              v312[v323 + 3] = -2;
              v325 = v323 + 4;
              if ( v324 > (int)(v323 + 4) )
              {
                v326 = v323 + 5;
                v312[v325] = -2;
                if ( v324 > v326 )
                  v312[v326] = -2;
              }
            }
          }
        }
      }
LABEL_420:
      v327 = *a11;
      v328 = a11[1];
      if ( (int)v327 < v328 )
        memset(&v312[v327], 255, 4LL * (unsigned int)(v328 - 1 - v327) + 4);
      if ( a10 > 0 )
      {
        v871 = (CoinMessages *)v313;
        v329 = 0;
        *(_QWORD *)v873 = (unsigned int)(a10 - 1) + 1LL;
        while ( 1 )
        {
          v330 = a11[v329 + 2];
          v331 = a11[v329 + 3];
          if ( v331 > v330 )
          {
            v332 = v330;
            v333 = -(int)((unsigned __int64)&v312[v330] >> 2) & 3;
            v334 = v333 + 3;
            if ( (unsigned int)(v333 + 3) < 5 )
              v334 = 5;
            if ( v334 <= v331 - 1 - v330 )
            {
              v335 = a11[v329 + 2];
              if ( (_DWORD)v333 )
              {
                v335 = v330 + 1;
                v312[v330] = v329;
                if ( (_DWORD)v333 != 1 )
                {
                  v312[v335] = v329;
                  v335 = v330 + 2;
                  if ( (_DWORD)v333 != 2 )
                  {
                    v312[v335] = v329;
                    v335 = v330 + 3;
                  }
                }
              }
              LODWORD(v872) = v329;
              v336 = v331 - v330 - v333;
              v337 = *(CoinMessages **)v873;
              v338 = (__m128i *)&v312[v333 + v330];
              v339 = 0;
              si128 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v329), 0);
              do
              {
                ++v339;
                ++v338;
                v338[-1] = si128;
              }
              while ( v336 >> 2 > v339 );
              *(_QWORD *)v873 = v337;
              v330 = (v336 & 0xFFFFFFFC) + v335;
              if ( (v336 & 0xFFFFFFFC) == v336 )
                goto LABEL_442;
              v332 = v330;
            }
            v312[v332] = v329;
            if ( v331 > v330 + 1 )
            {
              v312[v330 + 1] = v329;
              if ( v331 > v330 + 2 )
              {
                v312[v330 + 2] = v329;
                if ( v331 > v330 + 3 )
                {
                  v312[v330 + 3] = v329;
                  v340 = v330 + 4;
                  if ( v331 > v330 + 4 )
                  {
                    v341 = v330 + 5;
                    v312[v340] = v329;
                    if ( v331 > v341 )
                      v312[v341] = v329;
                  }
                }
              }
            }
          }
LABEL_442:
          if ( ++v329 == *(_QWORD *)v873 )
          {
            v313 = (unsigned __int64)v871;
            break;
          }
        }
      }
      v871 = (CoinStructuredModel *)((char *)v866 + 64);
      LODWORD(v870) = a10;
      if ( !(_DWORD)v865 )
        goto LABEL_445;
      v695 = v313;
      if ( (int)v865 / 8 > 0 )
      {
        si128.m128i_i64[0] = -1;
        v696 = (unsigned int)((int)v865 / 8 - 1);
        do
        {
          *(_OWORD *)v695 = -1;
          v695 += 32LL;
          *(_OWORD *)(v695 - 16) = -1;
        }
        while ( v695 != v313 + 32 * v696 + 32 );
        v695 = v313 + 32 * ((int)v696 + 1LL);
      }
      switch ( (int)v865 % 8 )
      {
        case 1:
          goto LABEL_1000;
        case 2:
          goto LABEL_999;
        case 3:
          goto LABEL_998;
        case 4:
          goto LABEL_997;
        case 5:
          goto LABEL_996;
        case 6:
          goto LABEL_995;
        case 7:
          *(_DWORD *)(v695 + 24) = -1;
LABEL_995:
          *(_DWORD *)(v695 + 20) = -1;
LABEL_996:
          *(_DWORD *)(v695 + 16) = -1;
LABEL_997:
          *(_DWORD *)(v695 + 12) = -1;
LABEL_998:
          *(_DWORD *)(v695 + 8) = -1;
LABEL_999:
          *(_DWORD *)(v695 + 4) = -1;
LABEL_1000:
          *(_DWORD *)v695 = -1;
          break;
        default:
          break;
      }
      if ( (int)v865 <= 0 )
      {
        LODWORD(v870) = a10;
        goto LABEL_445;
      }
      v697 = v855;
      v698 = v842;
      v699 = 4LL * (unsigned int)((_DWORD)v865 - 1) + 4;
      v700 = v856;
      v701 = 0;
      v702 = (char *)v856 + 4;
      do
      {
        v703 = *(_DWORD *)&v697[v701];
        if ( v703 < v703 + *(_DWORD *)&v698[v701] )
        {
          v704 = v700;
          v705 = (int *)v700 + v703;
          v706 = -1;
          v707 = (int *)&v702[4 * v703 + 4 * (unsigned __int64)(unsigned int)(*(_DWORD *)&v698[v701] - 1)];
          do
          {
            v708 = v312[*v705];
            if ( v708 != -1 && v706 == -1 )
            {
              *(_DWORD *)(v313 + v701) = v708;
              v706 = v708;
            }
            ++v705;
          }
          while ( v705 != v707 );
          v700 = v704;
        }
        v701 += 4;
      }
      while ( v701 != v699 );
      LODWORD(v870) = a10;
      v709 = a10;
LABEL_1012:
      v710 = nullptr;
      v861 = v315;
      v711 = (char *)v856 + 4;
      v712 = v867;
      while ( 1 )
      {
        while ( *(_DWORD *)(v313 + 4LL * (_QWORD)v710) != -2 )
        {
LABEL_1013:
          if ( (int)v865 <= (int)++v710 )
            goto LABEL_1022;
        }
        v713 = *(_DWORD *)&v855[4 * (_QWORD)v710];
        if ( v713 < v713 + *(_DWORD *)&v842[4 * (_QWORD)v710] )
        {
          v714 = 0;
          v715 = (int *)v856 + v713;
          v716 = (int *)&v711[4 * v713 + 4 * (unsigned __int64)(unsigned int)(*(_DWORD *)&v842[4 * (_QWORD)v710] - 1)];
          do
          {
            v717 = *v715;
            v718 = &v312[v717];
            if ( *v718 != -1 )
            {
              *v718 = v709;
              v719 = v714++;
              *((_DWORD *)v712 + v719) = v717;
            }
            ++v715;
          }
          while ( v716 != v715 );
          if ( v714 )
          {
            v720 = v842;
            *(_DWORD *)(v313 + 4LL * (_QWORD)v710) = v709;
            v721 = v712;
            v860 = v710;
            LODWORD(v870) = v709 + 1;
            do
            {
              v722 = 4LL * *((int *)v721 + --v714);
              v723 = &v862[v722];
              v724 = (_DWORD *)((char *)v864 + v722);
              v725 = *(int *)v723;
              v726 = v725 + *v724;
              if ( v726 > (int)v725 )
              {
                *(_QWORD *)v873 = v721;
                v727 = (CoinModel *)((int)v725 + 1);
                v728 = (char *)v863 + 4 * (v725 - (_QWORD)v727);
                do
                {
                  while ( 1 )
                  {
                    v730 = *(int *)&v728[4 * (_QWORD)v727];
                    v731 = (int *)(v313 + 4 * v730);
                    if ( *v731 == -2 )
                      break;
                    v729 = (int)v727;
                    v727 = (CoinModel *)((char *)v727 + 1);
                    if ( v726 <= v729 )
                      goto LABEL_1036;
                  }
                  v732 = *(_DWORD *)&v720[4 * v730];
                  v733 = *(_DWORD *)&v855[4 * v730];
                  *v731 = v709;
                  v734 = v733 + v732;
                  if ( v733 < v734 )
                  {
                    v872 = v727;
                    v735 = (int *)v856 + v733;
                    v736 = (int *)&v711[4 * (unsigned int)(v734 - v733 - 1) + 4 * (__int64)v733];
                    do
                    {
                      v737 = *v735;
                      v738 = &v312[v737];
                      if ( *v738 == -2 )
                      {
                        v739 = *(CoinMessages **)v873;
                        *v738 = v709;
                        v740 = v714++;
                        *((_DWORD *)v739 + v740) = v737;
                      }
                      ++v735;
                    }
                    while ( v736 != v735 );
                    v727 = v872;
                  }
                  v726 = *(_DWORD *)v723 + *v724;
                  v741 = (int)v727;
                  v727 = (CoinModel *)((char *)v727 + 1);
                }
                while ( v726 > v741 );
LABEL_1036:
                v721 = *(CoinMessages **)v873;
              }
            }
            while ( v714 );
            v712 = v721;
            v710 = v860;
            v709 = v870;
            goto LABEL_1013;
          }
        }
        *(_DWORD *)(v313 + 4LL * (_QWORD)v710++) = -1;
        if ( (int)v865 <= (int)v710 )
        {
LABEL_1022:
          v315 = v861;
          LODWORD(v870) = v709;
          operator delete[](v867);
          if ( v869 <= 0 )
          {
            v847[0] = 0;
LABEL_478:
            v355 = 1;
            if ( (int)v865 > 0 )
              v355 = (int)v865;
            v356 = v355;
            v357 = -(int)(v313 >> 2) & 3;
            v358 = v357 + 3;
            if ( (unsigned int)(v357 + 3) < 5 )
              v358 = 5;
            v359 = (_DWORD)v865 - 1;
            if ( (int)v865 <= 0 )
              v359 = 0;
            if ( v358 > v359 )
            {
              v368 = 0;
              v367 = 0;
              goto LABEL_496;
            }
            if ( (_DWORD)v357 )
            {
              v360 = *(_DWORD *)v313 == -1;
              if ( (_DWORD)v357 != 1 )
              {
                if ( *(_DWORD *)(v313 + 4) == -1 )
                  ++v360;
                v845 = 2;
                if ( (_DWORD)v357 != 2 )
                {
                  if ( *(_DWORD *)(v313 + 8) == -1 )
                    ++v360;
                  v845 = 3;
                }
              }
            }
            else
            {
              v360 = 0;
              v845 = 0;
            }
            v361 = v356 - v357;
            v362 = 0;
            v363 = (const __m128i *)(v313 + 4 * v357);
            v364 = 0;
            do
            {
              v365 = _mm_load_si128(v363);
              ++v364;
              ++v363;
              v362 = _mm_sub_epi32(v362, _mm_cmpeq_epi32(v365, (__m128i)-1LL));
            }
            while ( v364 < v361 >> 2 );
            v366 = _mm_add_epi32(v362, _mm_srli_si128(v362, 8));
            v367 = (v361 & 0xFFFFFFFC) + v845;
            si128 = _mm_srli_si128(v366, 4);
            v368 = v360 + _mm_cvtsi128_si32(_mm_add_epi32(v366, si128));
            if ( (v361 & 0xFFFFFFFC) != v361 )
            {
LABEL_496:
              if ( *(_DWORD *)(v313 + 4LL * v367) == -1 )
                ++v368;
              if ( (int)v865 > v367 + 1 )
              {
                if ( *(_DWORD *)(v313 + 4LL * (v367 + 1)) == -1 )
                  ++v368;
                if ( (int)v865 > v367 + 2 )
                {
                  if ( *(_DWORD *)(v313 + 4LL * (v367 + 2)) == -1 )
                    ++v368;
                  if ( (int)v865 > v367 + 3 )
                  {
                    if ( *(_DWORD *)(v313 + 4LL * (v367 + 3)) == -1 )
                      ++v368;
                    if ( (int)v865 > v367 + 4 )
                    {
                      if ( *(_DWORD *)(v313 + 4LL * (v367 + 4)) == -1 )
                        ++v368;
                      v369 = v367 + 5;
                      if ( (int)v865 > v369 && *(_DWORD *)(v313 + 4LL * v369) == -1 )
                        ++v368;
                    }
                  }
                }
              }
            }
LABEL_513:
            v872 = (CoinModel *)s;
            if ( (int)v870 > a10 )
              sprintf(s, "%d blocks found (reduced to %d) - %d rows, %d columns in master", v870, a10, v847[0], v368);
            else
              sprintf(s, "%d blocks found - %d rows, %d columns in master", v870, v847[0], v368);
            v370 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)v866 + 7), 28, v871);
            v375 = CoinMessageHandler::operator<<(v370, (__int64)v872, v371, v372, v373, v374, v808.m128i_i64[0]);
            CoinMessageHandler::operator<<(v375, 0, *(double *)si128.m128i_i64);
            if ( (_DWORD)v870 && (int)v870 > a10 )
            {
              if ( v869 > 0 )
              {
                v376 = v312;
                v377 = (__int64)&v312[v869 - 1 + 1];
                do
                {
                  if ( *v376 >= 0 )
                    *v376 %= a10;
                  ++v376;
                }
                while ( (int *)v377 != v376 );
              }
              if ( (int)v865 > 0 )
              {
                v378 = (int *)v313;
                v379 = v313 + 4LL * (unsigned int)((_DWORD)v865 - 1) + 4;
                do
                {
                  if ( *v378 >= 0 )
                    *v378 %= a10;
                  ++v378;
                }
                while ( (int *)v379 != v378 );
              }
              LODWORD(v870) = a10;
            }
            v856 = (double *)operator new[](8 * v836);
            v854 = (double *)operator new[](8 * v836);
            v853 = (double *)operator new[](8 * v836);
            v858 = (double *)operator new[](8 * v835);
            v857 = (double *)operator new[](8 * v835);
            if ( (_DWORD)v870 )
            {
              v682 = v870 + 7;
              if ( (int)v870 / 8 <= 0 )
              {
                v686 = v858;
              }
              else
              {
                si128.m128i_i64[0] = 0;
                v683 = (unsigned int)((int)v870 / 8 - 1);
                v684 = &v858[4 * v683 + 4];
                v685 = v858;
                do
                {
                  *(_OWORD *)v685 = 0;
                  v685 += 4;
                  *((_OWORD *)v685 - 1) = 0;
                }
                while ( v684 != v685 );
                v686 = &v858[4 * (int)v683 + 4];
              }
              switch ( (int)v870 % 8 )
              {
                case 1:
                  goto LABEL_960;
                case 2:
                  goto LABEL_959;
                case 3:
                  goto LABEL_958;
                case 4:
                  goto LABEL_957;
                case 5:
                  goto LABEL_956;
                case 6:
                  goto LABEL_955;
                case 7:
                  *((_DWORD *)v686 + 6) = 0;
LABEL_955:
                  *((_DWORD *)v686 + 5) = 0;
LABEL_956:
                  *((_DWORD *)v686 + 4) = 0;
LABEL_957:
                  *((_DWORD *)v686 + 3) = 0;
LABEL_958:
                  *((_DWORD *)v686 + 2) = 0;
LABEL_959:
                  *((_DWORD *)v686 + 1) = 0;
LABEL_960:
                  *(_DWORD *)v686 = 0;
                  if ( v869 <= 0 )
                    goto LABEL_961;
                  goto LABEL_530;
                default:
                  if ( v869 <= 0 )
                    goto LABEL_961;
                  goto LABEL_530;
              }
            }
            if ( v869 <= 0 )
            {
LABEL_545:
              if ( (int)v865 <= 0 )
                goto LABEL_1084;
            }
            else
            {
LABEL_530:
              v380 = v858;
              v381 = v312;
              v382 = v312;
              v383 = (__int64)&v312[v869 - 1 + 1];
              do
              {
                v384 = *v382;
                if ( (int)v384 >= 0 )
                  ++*((_DWORD *)v380 + v384);
                ++v382;
              }
              while ( (int *)v383 != v382 );
              v385 = v858;
              v386 = (unsigned int)(v870 - 1) + 1LL;
              do
              {
                while ( *v381 != -2 )
                {
                  if ( v382 == ++v381 )
                    goto LABEL_544;
                }
                if ( (int)v870 <= 0 )
                {
                  v390 = -4;
                  v389 = -1;
                }
                else
                {
                  v387 = v869;
                  v388 = 0;
                  v389 = -1;
                  do
                  {
                    if ( v387 > *((_DWORD *)v385 + v388) )
                    {
                      v387 = *((_DWORD *)v385 + v388);
                      v389 = v388;
                    }
                    ++v388;
                  }
                  while ( v388 != v386 );
                  v390 = 4LL * v389;
                }
                *v381++ = v389;
                ++*(_DWORD *)((char *)v385 + v390);
              }
              while ( v382 != v381 );
LABEL_544:
              if ( !(_DWORD)v870 )
                goto LABEL_545;
              v682 = v870 + 7;
LABEL_961:
              if ( (v870 & 0x80000000) == 0LL )
                v682 = v870;
              v687 = v682 >> 3;
              if ( v687 <= 0 )
              {
                v691 = v857;
              }
              else
              {
                si128.m128i_i64[0] = 0;
                v688 = (unsigned int)(v687 - 1);
                v689 = &v857[4 * v688 + 4];
                v690 = v857;
                do
                {
                  *(_OWORD *)v690 = 0;
                  v690 += 4;
                  *((_OWORD *)v690 - 1) = 0;
                }
                while ( v689 != v690 );
                v691 = &v857[4 * (int)v688 + 4];
              }
              switch ( (int)v870 % 8 )
              {
                case 1:
                  goto LABEL_974;
                case 2:
                  goto LABEL_973;
                case 3:
                  goto LABEL_972;
                case 4:
                  goto LABEL_971;
                case 5:
                  goto LABEL_970;
                case 6:
                  goto LABEL_969;
                case 7:
                  *((_DWORD *)v691 + 6) = 0;
LABEL_969:
                  *((_DWORD *)v691 + 5) = 0;
LABEL_970:
                  *((_DWORD *)v691 + 4) = 0;
LABEL_971:
                  *((_DWORD *)v691 + 3) = 0;
LABEL_972:
                  *((_DWORD *)v691 + 2) = 0;
LABEL_973:
                  *((_DWORD *)v691 + 1) = 0;
LABEL_974:
                  *(_DWORD *)v691 = 0;
                  break;
                default:
                  break;
              }
              if ( (int)v865 <= 0 )
              {
LABEL_550:
                if ( (int)v870 > 0 )
                {
                  v395 = v857;
                  v396 = nullptr;
                  v873[0] = 0;
                  v867 = (CoinMessages *)((unsigned int)(v870 - 1) + 1LL);
                  do
                  {
                    sprintf(
                      (char *)v872,
                      "Block %d has %d rows and %d columns",
                      (_DWORD)v396,
                      *((_DWORD *)v858 + (_QWORD)v396),
                      *((_DWORD *)v395 + (_QWORD)v396));
                    v397 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                   *((CoinMessageHandler **)v866 + 7),
                                                   29,
                                                   v871);
                    v402 = CoinMessageHandler::operator<<(
                             v397,
                             (__int64)v872,
                             v398,
                             v399,
                             v400,
                             v401,
                             v808.m128i_i64[0]);
                    CoinMessageHandler::operator<<(v402, 0, *(double *)si128.m128i_i64);
                    v395 = v857;
                    v403 = *((_DWORD *)v857 + (_QWORD)v396) + 2 * *((_DWORD *)v858 + (_QWORD)v396);
                    if ( v873[0] >= v403 )
                      v403 = v873[0];
                    v396 = (CoinMessages *)((char *)v396 + 1);
                    v873[0] = v403;
                  }
                  while ( v396 != v867 );
                  v404 = 10 * v403;
LABEL_556:
                  if ( 4 * ((int)v865 + 2 * v869) < v404 && a9 <= 2 )
                  {
                    v745 = _mm_load_si128((const __m128i *)&xmmword_29B060);
                    v890 = 100;
                    v746 = *((CoinMessageHandler **)v866 + 7);
                    *(__m128i *)s = v745;
                    v747 = (CoinMessageHandler *)CoinMessageHandler::message(v746, 30, v871);
                    v752 = CoinMessageHandler::operator<<(
                             v747,
                             (__int64)v872,
                             v748,
                             v749,
                             v750,
                             v751,
                             v808.m128i_i64[0]);
                    CoinMessageHandler::operator<<(v752, 0, *(double *)v745.m128i_i64);
                    operator delete[](v312);
                    operator delete[]((void *)v313);
                    operator delete[](v874);
                    operator delete[](v315);
                    operator delete[](v856);
                    operator delete[](v854);
                    operator delete[](v853);
                    operator delete[](v858);
                    operator delete[](v857);
                    v871 = (CoinMessages *)v891;
                    CoinModel::CoinModel((CoinModel *)v891, v869, (int)v865, v848, v852, v851, v850, v849, a8);
                    v892 = v834;
                    std::string::string();
                    v861 = (CoinPackedMatrix *)&v885;
                    std::string::string();
                    CoinStructuredModel::addBlock(
                      v866,
                      (const std::string *)&v885,
                      (const std::string *)&v887,
                      (const CoinBaseModel *)v891);
                    v867 = (CoinMessages *)&std::string::_Rep::_S_empty_rep_storage;
                    if ( (_UNKNOWN *)(v885 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                    {
                      if ( &_pthread_key_create )
                      {
                        v785 = _InterlockedExchangeAdd((volatile signed __int32 *)(v885 - 8), 0xFFFFFFFF);
                      }
                      else
                      {
                        v785 = *(_DWORD *)(v885 - 8);
                        *(_DWORD *)(v885 - 8) = v785 - 1;
                      }
                      if ( v785 <= 0 )
                        std::string::_Rep::_M_destroy();
                    }
                    if ( (CoinMessages *)(v887 - 24) != v867 )
                    {
                      if ( &_pthread_key_create )
                      {
                        v753 = _InterlockedExchangeAdd((volatile signed __int32 *)(v887 - 8), 0xFFFFFFFF);
                      }
                      else
                      {
                        v753 = *(_DWORD *)(v887 - 8);
                        *(_DWORD *)(v887 - 8) = v753 - 1;
                      }
                      if ( v753 <= 0 )
                        std::string::_Rep::_M_destroy();
                    }
                    goto LABEL_849;
                  }
                  v861 = (CoinPackedMatrix *)&v885;
                  v871 = (CoinMessages *)v891;
                  std::string::string();
                  CoinStructuredModel::addRowBlock(v866, v847[0], (const std::string *)v891);
                  v867 = (CoinMessages *)&std::string::_Rep::_S_empty_rep_storage;
                  if ( (_UNKNOWN *)(v891[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
                  {
                    if ( &_pthread_key_create )
                    {
                      v770 = _InterlockedExchangeAdd((volatile signed __int32 *)(v891[0] - 8LL), 0xFFFFFFFF);
                    }
                    else
                    {
                      v770 = *(_DWORD *)(v891[0] - 8LL);
                      *(_DWORD *)(v891[0] - 8LL) = v770 - 1;
                    }
                    if ( v770 <= 0 )
                      std::string::_Rep::_M_destroy();
                  }
                  CoinPackedMatrix::CoinPackedMatrix(v861, v848);
                  if ( (int)v870 <= 0 )
                  {
LABEL_583:
                    if ( v869 <= 0 )
                    {
                      v446 = 0;
                    }
                    else
                    {
                      v436 = v874;
                      v437 = 0;
                      v438 = v858;
                      v439 = v857;
                      v440 = v852;
                      v441 = v851;
                      v442 = 0;
                      v443 = (unsigned int)(v869 - 1) + 1LL;
                      do
                      {
                        if ( v312[v442] == -1 )
                        {
                          v444 = v440[v442];
                          v445 = v437++;
                          v436[v445] = v442;
                          v438[v445] = v444;
                          v439[v445] = v441[v442];
                        }
                        ++v442;
                      }
                      while ( v443 != v442 );
                      v446 = v437;
                    }
                    if ( (int)v865 <= 0 )
                    {
                      v448 = 0;
                    }
                    else
                    {
                      v447 = v856;
                      v448 = 0;
                      v449 = v854;
                      v450 = v853;
                      v451 = v850;
                      v452 = v849;
                      v453 = 0;
                      v454 = (unsigned int)((_DWORD)v865 - 1) + 1LL;
                      do
                      {
                        if ( *(int *)(v313 + 4 * v453) < 0 )
                        {
                          v455 = a8[v453];
                          v456 = v448++;
                          *((_DWORD *)v315 + v456) = v453;
                          v447[v456] = v455;
                          v449[v456] = v451[v453];
                          v450[v456] = v452[v453];
                        }
                        ++v453;
                      }
                      while ( v453 != v454 );
                    }
                    operator delete[](v312);
                    operator delete[]((void *)v313);
                    CoinPackedMatrix::CoinPackedMatrix(v871, v861, v446, (const int *)v874, v448, (const int *)v315);
                    CoinPackedMatrix::setDimensions(v871, v446, v448);
                    v457 = v446;
                    v458 = (CoinModel *)operator new(0x2D0u);
                    CoinModel::CoinModel(v458, v457, v448, v871, v858, v857, v854, v853, v856);
                    CoinModel::setOriginalIndices(v458, (const int *)v874, (const int *)v315);
                    std::string::string();
                    v860 = (char *)v880;
                    std::string::string();
                    CoinStructuredModel::addBlock(v866, (const std::string *)v880, (const std::string *)&v887, v458);
                    if ( (CoinMessages *)(v880[0] - 24LL) != v867 )
                    {
                      if ( &_pthread_key_create )
                      {
                        v771 = _InterlockedExchangeAdd((volatile signed __int32 *)(v880[0] - 8LL), 0xFFFFFFFF);
                      }
                      else
                      {
                        v771 = *(_DWORD *)(v880[0] - 8LL);
                        *(_DWORD *)(v880[0] - 8LL) = v771 - 1;
                      }
                      if ( v771 <= 0 )
                        std::string::_Rep::_M_destroy();
                    }
                    if ( (CoinMessages *)(v887 - 24) != v867 )
                    {
                      if ( &_pthread_key_create )
                      {
                        v768 = _InterlockedExchangeAdd((volatile signed __int32 *)(v887 - 8), 0xFFFFFFFF);
                      }
                      else
                      {
                        v768 = *(_DWORD *)(v887 - 8);
                        *(_DWORD *)(v887 - 8) = v768 - 1;
                      }
                      if ( v768 <= 0 )
                        std::string::_Rep::_M_destroy();
                    }
                    operator delete[](v874);
                    operator delete[](v315);
                    operator delete[](v856);
                    operator delete[](v854);
                    operator delete[](v853);
                    operator delete[](v858);
                    v216 = v857;
LABEL_249:
                    operator delete[](v216);
                    CoinPackedMatrix::~CoinPackedMatrix(v871);
                    CoinPackedMatrix::~CoinPackedMatrix(v861);
                    CoinPackedMatrix::~CoinPackedMatrix(v843);
                    return (unsigned int)v870;
                  }
                  v405 = 0;
                  v864 = (CoinPackedMatrix *)&v887;
                  v860 = (char *)v880;
                  v862 = (char *)v879;
                  LODWORD(v872) = v869 - 1;
                  while ( 2 )
                  {
                    sprintf(v862, "row_%d", v405);
                    sprintf(v860, "column_%d", v405);
                    if ( v869 <= 0 )
                    {
                      v410 = 0;
                      if ( (int)v865 > 0 )
                        goto LABEL_567;
                    }
                    else
                    {
                      v406 = v874;
                      v407 = 0;
                      v408 = v858;
                      v409 = v857;
                      v410 = 0;
                      v411 = v852;
                      v412 = v851;
                      v413 = (unsigned int)v872 + 1LL;
                      do
                      {
                        if ( v312[v407] == v405 )
                        {
                          v414 = v411[v407];
                          v415 = v410++;
                          v406[v415] = v407;
                          v408[v415] = v414;
                          v409[v415] = v412[v407];
                        }
                        ++v407;
                      }
                      while ( v413 != v407 );
                      if ( (int)v865 > 0 )
                      {
LABEL_567:
                        v416 = v856;
                        v873[0] = 0;
                        v417 = v853;
                        v418 = v854;
                        v419 = v850;
                        v420 = v849;
                        v421 = 0;
                        v422 = (unsigned int)((_DWORD)v865 - 1) + 1LL;
                        do
                        {
                          if ( *(_DWORD *)(v313 + 4 * v421) == v405 )
                          {
                            v423 = v873[0];
                            v424 = a8[v421];
                            ++v873[0];
                            v416[v423] = v424;
                            *((_DWORD *)v315 + v423) = v421;
                            v418[v423] = v419[v421];
                            v417[v423] = v420[v421];
                          }
                          ++v421;
                        }
                        while ( v421 != v422 );
                        v425 = v873[0];
LABEL_572:
                        CoinPackedMatrix::CoinPackedMatrix(v864, v861, v410, (const int *)v874, v425, (const int *)v315);
                        CoinPackedMatrix::setDimensions(v864, v410, v873[0]);
                        v426 = v410;
                        v427 = (CoinModel *)operator new(0x2D0u);
                        CoinModel::CoinModel(v427, v426, v873[0], v864, v858, v857, nullptr, nullptr, nullptr);
                        CoinModel::setOriginalIndices(v427, (const int *)v874, (const int *)v315);
                        v848 = (CoinPackedMatrix *)&v876;
                        std::string::string();
                        v855 = &v875;
                        v863 = (std::string *)&v878;
                        std::string::string();
                        CoinStructuredModel::addBlock(v866, (const std::string *)&v878, v871, v427);
                        if ( (CoinMessages *)(v878 - 24) != v867 )
                        {
                          if ( &_pthread_key_create )
                          {
                            v660 = _InterlockedExchangeAdd((volatile signed __int32 *)(v878 - 8), 0xFFFFFFFF);
                          }
                          else
                          {
                            v660 = *(_DWORD *)(v878 - 8);
                            *(_DWORD *)(v878 - 8) = v660 - 1;
                          }
                          if ( v660 <= 0 )
                            std::string::_Rep::_M_destroy();
                        }
                        if ( (CoinMessages *)(v891[0] - 24LL) != v867 )
                        {
                          if ( &_pthread_key_create )
                          {
                            v663 = _InterlockedExchangeAdd((volatile signed __int32 *)(v891[0] - 8LL), 0xFFFFFFFF);
                          }
                          else
                          {
                            v663 = *(_DWORD *)(v891[0] - 8LL);
                            *(_DWORD *)(v891[0] - 8LL) = v663 - 1;
                          }
                          if ( v663 <= 0 )
                            std::string::_Rep::_M_destroy();
                        }
                        if ( v869 <= 0 )
                        {
                          v430 = 0;
                          v434 = v873[0];
                        }
                        else
                        {
                          v428 = 0;
                          v429 = v874;
                          v430 = 0;
                          v431 = v873[0];
                          v432 = (unsigned int)v872 + 1LL;
                          do
                          {
                            if ( v312[v428] == -1 )
                            {
                              v433 = v430++;
                              v429[v433] = v428;
                            }
                            ++v428;
                          }
                          while ( v428 != v432 );
                          v873[0] = v431;
                          v434 = v431;
                        }
                        CoinPackedMatrix::CoinPackedMatrix(v871, v861, v430, (const int *)v874, v434, (const int *)v315);
                        CoinPackedMatrix::setDimensions(v871, v430, v873[0]);
                        v435 = (CoinModel *)operator new(0x2D0u);
                        CoinModel::CoinModel(v435, v847[0], v873[0], v871, nullptr, nullptr, v854, v853, v856);
                        CoinModel::setOriginalIndices(v435, (const int *)v874, (const int *)v315);
                        std::string::string();
                        lpsrc = (CoinModel *)&v877;
                        std::string::string();
                        CoinStructuredModel::addBlock(v866, (const std::string *)&v877, v863, v435);
                        if ( (CoinMessages *)(v877 - 24) != v867 )
                        {
                          if ( &_pthread_key_create )
                          {
                            v662 = _InterlockedExchangeAdd((volatile signed __int32 *)(v877 - 8), 0xFFFFFFFF);
                          }
                          else
                          {
                            v662 = *(_DWORD *)(v877 - 8);
                            *(_DWORD *)(v877 - 8) = v662 - 1;
                          }
                          if ( v662 <= 0 )
                            std::string::_Rep::_M_destroy();
                        }
                        if ( (CoinMessages *)(v878 - 24) != v867 )
                        {
                          if ( &_pthread_key_create )
                          {
                            v661 = _InterlockedExchangeAdd((volatile signed __int32 *)(v878 - 8), 0xFFFFFFFF);
                          }
                          else
                          {
                            v661 = *(_DWORD *)(v878 - 8);
                            *(_DWORD *)(v878 - 8) = v661 - 1;
                          }
                          if ( v661 <= 0 )
                            std::string::_Rep::_M_destroy();
                        }
                        ++v405;
                        CoinPackedMatrix::~CoinPackedMatrix(v871);
                        CoinPackedMatrix::~CoinPackedMatrix(v864);
                        if ( (_DWORD)v870 == v405 )
                          goto LABEL_583;
                        continue;
                      }
                    }
                    break;
                  }
                  v873[0] = 0;
                  v425 = 0;
                  goto LABEL_572;
                }
LABEL_1084:
                v404 = 0;
                goto LABEL_556;
              }
            }
            v391 = v857;
            v392 = (int)v865;
            v393 = 0;
            do
            {
              v394 = *(int *)(v313 + 4 * v393);
              if ( (int)v394 >= 0 )
                ++*((_DWORD *)v391 + v394);
              ++v393;
            }
            while ( v392 > (int)v393 );
            goto LABEL_550;
          }
LABEL_446:
          v342 = -(int)((unsigned __int64)v312 >> 2) & 3;
          v343 = v342 + 3;
          if ( (unsigned int)(v342 + 3) < 5 )
            v343 = 5;
          if ( v343 > v869 - 1 )
          {
            v847[0] = 0;
            v353 = 0;
            goto LABEL_460;
          }
          if ( (_DWORD)v342 )
          {
            v344 = 1;
            v345 = *v312 == -1;
            if ( (_DWORD)v342 != 1 )
            {
              if ( v312[1] == -1 )
                ++v345;
              v344 = 2;
              if ( (_DWORD)v342 != 2 )
              {
                if ( v312[2] == -1 )
                  ++v345;
                v344 = 3;
              }
            }
          }
          else
          {
            v345 = 0;
            v344 = 0;
          }
          v346 = v869 - v342;
          v347 = 0;
          v348 = (const __m128i *)&v312[v342];
          v349 = (unsigned int)(v869 - v342) >> 2;
          v350 = 0;
          do
          {
            v351 = _mm_load_si128(v348);
            ++v350;
            ++v348;
            v347 = _mm_sub_epi32(v347, _mm_cmpeq_epi32(v351, (__m128i)-1LL));
          }
          while ( v350 < v349 );
          v352 = _mm_add_epi32(v347, _mm_srli_si128(v347, 8));
          si128 = _mm_srli_si128(v352, 4);
          v847[0] = v345 + _mm_cvtsi128_si32(_mm_add_epi32(v352, si128));
          v353 = (v346 & 0xFFFFFFFC) + v344;
          if ( (v346 & 0xFFFFFFFC) != v346 )
          {
LABEL_460:
            if ( v312[v353] == -1 )
              ++v847[0];
            if ( v869 > (int)(v353 + 1) )
            {
              if ( v312[v353 + 1] == -1 )
                ++v847[0];
              if ( v869 > (int)(v353 + 2) )
              {
                if ( v312[v353 + 2] == -1 )
                  ++v847[0];
                if ( (int)(v353 + 3) < v869 )
                {
                  if ( v312[v353 + 3] == -1 )
                    ++v847[0];
                  if ( (int)(v353 + 4) < v869 )
                  {
                    if ( v312[v353 + 4] == -1 )
                      ++v847[0];
                    v354 = v353 + 5;
                    if ( v869 > v354 && v312[v354] == -1 )
                      ++v847[0];
                  }
                }
              }
            }
          }
          if ( (int)v865 > 0 )
            goto LABEL_478;
LABEL_1078:
          v368 = 0;
          goto LABEL_513;
        }
      }
    }
    v480 = v316;
    v885 = -1;
    v886 = -1;
    v481 = v869 + 7;
    v888 = 0.0;
    v812 = v312;
    if ( v869 >= 0 )
      v481 = v869;
    v482 = v481 >> 3;
    v831 = v481 >> 3;
    v887 = 0;
    LODWORD(v829) = v869 % 8;
    v483 = (int)v865 / 8;
    LODWORD(v828) = (int)v865 / 8;
    v844 = (int)v865 % 8;
    LODWORD(v858) = v869 / 2;
    LODWORD(v857) = 11 * (_DWORD)v865;
    v854 = (double *)&v314[(_QWORD)v312];
    LOBYTE(v819) = (v480 >= (CoinPackedMatrix *)((char *)v864 + 16) || v864 >= (CoinMessages *)((char *)v480 + 16))
                && (unsigned int)v869 > 0xA
                && (v312 >= (int *)v864 + 4 || v864 >= (CoinPackedMatrix *)(v312 + 4));
    v484 = -(__int64)((unsigned __int64)v864 >> 2) & 3;
    LODWORD(v837) = v869 - 1;
    LODWORD(v820) = v484;
    v822 = v869 - v484;
    v823 = v484 + 3;
    v830 = (v869 - v484) & 0xFFFFFFFC;
    v824 = (unsigned int)(v869 - v484) >> 2;
    v485 = 4 * (-(__int64)((unsigned __int64)v864 >> 2) & 3);
    v825 = (char *)v864 + v485;
    v827 = (char *)v480 + v485;
    v826 = &v312[(unsigned __int64)v485 / 4];
    v486 = 5;
    v487 = -(__int64)((unsigned __int64)v480 >> 2) & 3;
    v816 = -(int)((unsigned __int64)v480 >> 2) & 3;
    if ( (unsigned int)(v487 + 3) >= 5 )
      v486 = v487 + 3;
    LODWORD(v811) = v486;
    v821 = v869 - v487;
    LODWORD(v817) = (unsigned int)(v869 - v487) >> 2;
    LODWORD(v818) = (v869 - v487) & 0xFFFFFFFC;
    v814 = (__m128i *)((char *)v480 + 4 * (unsigned int)v487);
    v488 = (unsigned int)(v482 - 1);
    v808.m128i_i32[0] = v482 - 1;
    v489 = 8 * (v488 + 1);
    v490 = 32 * v488 + 32;
    v491 = &v312[v489];
    if ( v482 <= 0 )
      v491 = v312;
    v832 = (char *)v312 + v490;
    v841 = v491;
    v810 = v313;
    *(_QWORD *)v847 = 0;
    v492 = (char *)v874 + v490;
    v493 = (char *)v874 + v489 * 4;
    if ( v482 <= 0 )
      v493 = (char *)v874;
    v809 = v492;
    v840 = v493;
    v494 = (unsigned int)(v483 - 1);
    v815 = v483 - 1;
    v495 = 32 * (v494 + 1);
    v496 = 32 * v494 + 32;
    v497 = (_DWORD *)(v313 + v495);
    if ( v483 <= 0 )
      v497 = (_DWORD *)v313;
    v498 = (CoinPackedMatrix *)((char *)v315 + v495);
    v833 = v313 + v496;
    if ( v483 <= 0 )
      v498 = v315;
    v838 = v497;
    v839 = v498;
    v813 = (CoinPackedMatrix *)((char *)v315 + v496);
    while ( 1 )
    {
      v499 = v847[0];
      if ( *(_QWORD *)v847 )
      {
        if ( v847[0] != 1 )
        {
          if ( v869 > 0 )
          {
            if ( (_BYTE)v819 )
            {
              if ( v823 > (unsigned int)v837 )
              {
                *v312 = *(_DWORD *)v864;
                *(_DWORD *)v867 = 0;
                v518 = 1;
                goto LABEL_647;
              }
              v500 = (int)v820;
              v501 = 0;
              if ( (_DWORD)v820 )
              {
                v502 = v864;
                v503 = v867;
                v501 = 1;
                v504 = *(_DWORD *)v864;
                *(_DWORD *)v867 = 0;
                *v312 = v504;
                if ( v500 != 1 )
                {
                  v505 = *((_DWORD *)v502 + 1);
                  *((_DWORD *)v503 + 1) = 1;
                  v501 = 2;
                  v312[1] = v505;
                  if ( v500 != 2 )
                  {
                    v506 = *((_DWORD *)v502 + 2);
                    v501 = 3;
                    *((_DWORD *)v503 + 2) = 2;
                    v312[2] = v506;
                  }
                }
              }
              v873[0] = v501;
              v507 = v827;
              v508 = 0;
              v509 = v826;
              v510 = 0;
              v511 = v825;
              v512 = v824;
              v513 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v501), 0), (__m128i)xmmword_289BB0);
              do
              {
                v514 = _mm_load_si128((const __m128i *)&v511[v508 * 4]);
                ++v510;
                *(__m128i *)&v507[v508 * 4] = v513;
                v513 = _mm_add_epi32(v513, (__m128i)xmmword_289BC0);
                *(__m128i *)&v509[v508] = v514;
                v508 += 4;
              }
              while ( v512 > v510 );
              v515 = v830 + v501;
              if ( v830 != v822 )
              {
                v516 = v515;
                v517 = *((_DWORD *)v864 + v515);
                *((_DWORD *)v867 + v515) = v515;
                v518 = v515 + 1;
                v59 = v869 <= v518;
                v312[v516] = v517;
                if ( !v59 )
                {
LABEL_647:
                  v519 = v864;
                  v520 = v869;
                  v521 = v867;
                  v522 = *((_DWORD *)v864 + v518);
                  *((_DWORD *)v867 + v518) = v518;
                  v312[v518] = v522;
                  v523 = v518 + 1;
                  if ( v518 + 1 < v520 )
                  {
                    v524 = v523;
                    v525 = *((_DWORD *)v519 + v523);
                    *((_DWORD *)v521 + v523) = v523;
                    v526 = v518 + 2;
                    v312[v524] = v525;
                    if ( v518 + 2 < v520 )
                    {
                      v527 = v526;
                      v528 = *((_DWORD *)v519 + v526);
                      *((_DWORD *)v521 + v526) = v526;
                      v529 = v518 + 3;
                      v312[v527] = v528;
                      if ( v520 > v518 + 3 )
                      {
                        v530 = v518 + 4;
                        v531 = *((_DWORD *)v519 + v529);
                        *((_DWORD *)v521 + v529) = v529;
                        v312[v529] = v531;
                        if ( v520 > v530 )
                        {
                          v532 = *((_DWORD *)v519 + v530);
                          *((_DWORD *)v521 + v530) = v530;
                          v312[v530] = v532;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v754 = v867;
              v755 = 0;
              v756 = v864;
              v757 = (unsigned int)v837 + 1LL;
              do
              {
                v758 = *((_DWORD *)v756 + v755);
                *((_DWORD *)v754 + v755) = v755;
                v312[v755++] = v758;
              }
              while ( v755 != v757 );
            }
          }
          CoinSort_2<int,int>(v312, v854, v867);
LABEL_653:
          if ( !v869 )
          {
            *(_DWORD *)v854 = 0;
            if ( !(_DWORD)v865 )
            {
              v664 = -1;
              v868 = -1;
              LODWORD(v853) = -1;
              v582 = -1;
              goto LABEL_906;
            }
LABEL_655:
            if ( (int)v828 > 0 )
            {
              v533 = (_OWORD *)v833;
              v534 = (_OWORD *)v313;
              do
              {
                *v534 = -1;
                v534 += 2;
                *(v534 - 1) = -1;
              }
              while ( v534 != v533 );
              switch ( v844 )
              {
                case 1:
                  goto LABEL_696;
                case 2:
                  goto LABEL_695;
                case 3:
                  goto LABEL_694;
                case 4:
                  goto LABEL_693;
                case 5:
                  goto LABEL_692;
                case 6:
                  goto LABEL_691;
                case 7:
                  goto LABEL_690;
                default:
                  goto LABEL_697;
              }
            }
            switch ( v844 )
            {
              case 1:
                goto LABEL_696;
              case 2:
                goto LABEL_695;
              case 3:
                goto LABEL_694;
              case 4:
                goto LABEL_693;
              case 5:
                goto LABEL_692;
              case 6:
                goto LABEL_691;
              case 7:
LABEL_690:
                v838[6] = -1;
LABEL_691:
                v838[5] = -1;
LABEL_692:
                v838[4] = -1;
LABEL_693:
                v838[3] = -1;
LABEL_694:
                v838[2] = -1;
LABEL_695:
                v838[1] = -1;
LABEL_696:
                v59 = (int)v828 <= 0;
                *v838 = -1;
                if ( !v59 )
                {
LABEL_697:
                  v551 = v813;
                  v552 = v315;
                  do
                  {
                    *(_OWORD *)v552 = -1;
                    v552 = (CoinPackedMatrix *)((char *)v552 + 32);
                    *((_OWORD *)v552 - 1) = -1;
                  }
                  while ( v552 != v551 );
                }
                switch ( v844 )
                {
                  case 1:
                    goto LABEL_706;
                  case 2:
                    goto LABEL_705;
                  case 3:
                    goto LABEL_704;
                  case 4:
                    goto LABEL_703;
                  case 5:
                    goto LABEL_702;
                  case 6:
                    goto LABEL_701;
                  case 7:
                    *((_DWORD *)v839 + 6) = -1;
LABEL_701:
                    *((_DWORD *)v839 + 5) = -1;
LABEL_702:
                    *((_DWORD *)v839 + 4) = -1;
LABEL_703:
                    *((_DWORD *)v839 + 3) = -1;
LABEL_704:
                    *((_DWORD *)v839 + 2) = -1;
LABEL_705:
                    *((_DWORD *)v839 + 1) = -1;
LABEL_706:
                    *(_DWORD *)v839 = -1;
                    break;
                  default:
                    goto LABEL_707;
                }
                break;
              default:
                goto LABEL_707;
            }
            goto LABEL_707;
          }
          goto LABEL_925;
        }
        v786 = v869;
        if ( v869 <= 0 )
          goto LABEL_653;
        if ( (unsigned int)v837 < (unsigned int)v811 )
        {
          v793 = 0;
LABEL_1185:
          v794 = (int)v837;
          v795 = v867;
          v796 = v869;
          *((_DWORD *)v867 + v793) = (_DWORD)v837 - v793;
          v797 = v793 + 1;
          if ( v793 + 1 < v796 )
          {
            v798 = v797;
            v799 = v794 - v797;
            v800 = v793 + 2;
            *((_DWORD *)v795 + v798) = v799;
            if ( v796 > v793 + 2 )
            {
              v801 = v800;
              v802 = v794 - v800;
              v803 = v793 + 3;
              *((_DWORD *)v795 + v801) = v802;
              if ( v796 > v793 + 3 )
              {
                v804 = v803;
                v805 = v794 - v803;
                v806 = v793 + 4;
                *((_DWORD *)v795 + v804) = v805;
                if ( v796 > v793 + 4 )
                {
                  v807 = v793 + 5;
                  *((_DWORD *)v795 + v806) = v794 - v806;
                  if ( v796 > v807 )
                    *((_DWORD *)v795 + v807) = v794 - v807;
                }
              }
            }
          }
          goto LABEL_925;
        }
        v787 = v816;
        if ( v816 )
        {
          v788 = v867;
          *(_DWORD *)v867 = (_DWORD)v837;
          if ( v787 != 1 )
          {
            *((_DWORD *)v788 + 1) = v786 - 2;
            if ( v787 == 2 )
            {
              v499 = 2;
            }
            else
            {
              *((_DWORD *)v788 + 2) = v786 - 3;
              v499 = 3;
            }
          }
        }
        else
        {
          v499 = 0;
        }
        v873[0] = v499;
        v789 = 0;
        v790 = v814;
        v791 = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned int)v837), 0);
        v792 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v499), 0), (__m128i)xmmword_289BB0);
        do
        {
          ++v789;
          ++v790;
          v790[-1] = _mm_sub_epi32(v791, v792);
          v792 = _mm_add_epi32(v792, (__m128i)xmmword_289BC0);
        }
        while ( (unsigned int)v817 > v789 );
        v793 = v818 + v499;
        if ( (_DWORD)v818 != v821 )
          goto LABEL_1185;
      }
      else
      {
        if ( v869 <= 0 )
          goto LABEL_653;
        if ( (unsigned int)v837 <= 5 )
        {
          v673 = 0;
        }
        else
        {
          v666 = v816;
          if ( v816 )
          {
            v667 = v867;
            *(_DWORD *)v867 = 0;
            if ( v666 == 1 )
            {
              v668 = 1;
            }
            else
            {
              *((_DWORD *)v667 + 1) = 1;
              if ( v666 == 2 )
              {
                v668 = 2;
              }
              else
              {
                *((_DWORD *)v667 + 2) = 2;
                v668 = 3;
              }
            }
          }
          else
          {
            v668 = 0;
          }
          v873[0] = v668;
          v669 = v814;
          v670 = 0;
          v671 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
          v672 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v668), 0), (__m128i)xmmword_289BB0);
          do
          {
            *v669 = v672;
            v672 = _mm_add_epi32(v672, v671);
            ++v670;
            ++v669;
          }
          while ( (unsigned int)v817 > v670 );
          v673 = v818 + v668;
          if ( (_DWORD)v818 == v821 )
            goto LABEL_925;
        }
        v674 = v867;
        v675 = v869;
        *((_DWORD *)v867 + v673) = v673;
        if ( v675 > v673 + 1 )
        {
          *((_DWORD *)v674 + v673 + 1) = v673 + 1;
          if ( v673 + 2 < v675 )
          {
            *((_DWORD *)v674 + v673 + 2) = v673 + 2;
            if ( v673 + 3 < v675 )
            {
              *((_DWORD *)v674 + v673 + 3) = v673 + 3;
              v676 = v673 + 4;
              if ( v675 > v673 + 4 )
              {
                v677 = v673 + 5;
                *((_DWORD *)v674 + v676) = v676;
                if ( v675 > v677 )
                  *((_DWORD *)v674 + v677) = v677;
              }
            }
          }
        }
      }
LABEL_925:
      if ( v831 > 0 )
      {
        v678 = v832;
        v679 = (char *)v312;
        do
        {
          *(_OWORD *)v679 = -1;
          v679 += 32;
          *((_OWORD *)v679 - 1) = -1;
        }
        while ( v679 != v678 );
      }
      switch ( (int)v829 )
      {
        case 1:
          goto LABEL_935;
        case 2:
          goto LABEL_934;
        case 3:
          goto LABEL_933;
        case 4:
          goto LABEL_932;
        case 5:
          goto LABEL_931;
        case 6:
          goto LABEL_930;
        case 7:
          v841[6] = -1;
LABEL_930:
          v841[5] = -1;
LABEL_931:
          v841[4] = -1;
LABEL_932:
          v841[3] = -1;
LABEL_933:
          v841[2] = -1;
LABEL_934:
          v841[1] = -1;
LABEL_935:
          *v841 = -1;
          *(_DWORD *)v854 = 0;
          break;
        default:
          *(_DWORD *)v854 = 0;
          break;
      }
      if ( v831 > 0 )
      {
        v680 = v874;
        v681 = v809;
        do
        {
          *v680 = -1;
          v680 += 2;
          *(v680 - 1) = -1;
        }
        while ( v680 != v681 );
      }
      switch ( (int)v829 )
      {
        case 1:
          goto LABEL_946;
        case 2:
          goto LABEL_945;
        case 3:
          goto LABEL_944;
        case 4:
          goto LABEL_943;
        case 5:
          goto LABEL_942;
        case 6:
          goto LABEL_941;
        case 7:
          v840[6] = -1;
LABEL_941:
          v840[5] = -1;
LABEL_942:
          v840[4] = -1;
LABEL_943:
          v840[3] = -1;
LABEL_944:
          v840[2] = -1;
LABEL_945:
          v840[1] = -1;
LABEL_946:
          *v840 = -1;
          break;
        default:
          break;
      }
      if ( (_DWORD)v865 )
        goto LABEL_655;
LABEL_707:
      if ( v869 > 0 )
      {
        LODWORD(v853) = -1;
        v868 = -1;
        v553 = 0;
        v554 = 1.797693134862316e308;
        LODWORD(v871) = 0;
        LODWORD(v872) = 0;
        LODWORD(v870) = 0;
        LODWORD(v846) = 0;
        lpsrc = (std::string *)((char *)v863 + 4);
        while ( 1 )
        {
          LODWORD(v860) = v553;
          v555 = *((int *)v867 + v553);
          v556 = *(_DWORD *)&v862[4 * v555];
          v557 = *((_DWORD *)v864 + v555);
          LODWORD(v861) = v557 + v556;
          if ( v556 < v557 + v556 )
          {
            v558 = -1;
            v559 = (int *)((char *)v863 + 4 * v556);
            v560 = v559;
            v561 = (char *)lpsrc + 4 * v556 + 4 * (unsigned __int64)(unsigned int)(v557 - 1);
            do
            {
              v562 = *v560;
              v563 = *(int *)(v313 + 4 * v562);
              v564 = 4 * v562;
              if ( (int)v563 >= 0 )
              {
                if ( v558 < 0 )
                {
                  v558 = *(_DWORD *)(v313 + 4 * v562);
                }
                else if ( (_DWORD)v563 != v558 )
                {
                  v565 = v563;
                  LODWORD(v871) = (_DWORD)v871 - 1;
                  v566 = &v312[v565];
                  v567 = v558;
                  *(_QWORD *)v873 = v565 * 4;
                  v312[v567] += v312[v565];
                  v568 = (int *)((char *)v874 + *(_QWORD *)v873);
                  *v566 = 0;
                  v873[0] = *v568;
                  v569 = v873[0];
                  if ( v873[0] < 0 )
                  {
                    v570 = (int *)((char *)v315 + v564);
                  }
                  else
                  {
                    do
                    {
                      v570 = (int *)((char *)v315 + 4 * v569);
                      *(_DWORD *)(v313 + 4 * v569) = v558;
                      v569 = *v570;
                    }
                    while ( (int)v569 >= 0 );
                  }
                  v571 = (int *)((char *)v874 + v567 * 4);
                  *v570 = *v571;
                  *v571 = v873[0];
                  *v568 = -1;
                }
              }
              ++v560;
            }
            while ( v561 != (char *)v560 );
            if ( v558 >= 0 )
              break;
          }
          v579 = v553 + 1;
          if ( v557 )
          {
            v632 = 4LL * v556;
            v633 = v874;
            LODWORD(v871) = (_DWORD)v871 + 1;
            LODWORD(v870) = v557 + v870;
            v634 = *(int *)((char *)v863 + v632);
            v635 = (int)v846;
            v636 = (_DWORD)v846 + 1;
            v312[(int)v846] = v557;
            v633[v635] = v634;
            v637 = (int)v861;
            *(_DWORD *)(v313 + 4 * v634) = v635;
            if ( v637 > v556 + 1 )
            {
              v638 = (char *)v863 + v632 + 4;
              v639 = (char *)lpsrc + 4 * (unsigned int)(v637 - v556 - 2) + 4 * (__int64)(v556 + 1);
              while ( 1 )
              {
                v640 = *(int *)v638;
                v638 += 4;
                *(_DWORD *)(v313 + 4 * v640) = v635;
                *((_DWORD *)v315 + v634) = v640;
                if ( v638 == v639 )
                  break;
                v634 = v640;
              }
            }
            LODWORD(v846) = v636;
            goto LABEL_724;
          }
          ++*(_DWORD *)v854;
LABEL_727:
          if ( (int)v858 < v579 && 10 * (int)v872 < (int)v857 && (int)v871 > 1 )
          {
            v580 = (double)(int)v872 + (double)(int)v870 / (double)(int)v871 * 0.0;
            if ( (double)v579 * v554 > v580 )
            {
              LODWORD(v853) = v579;
              v554 = v580 / (double)v579;
              v868 = (int)v860;
            }
          }
          ++v553;
          if ( v869 <= v579 )
          {
            v581 = (int)v853;
            goto LABEL_734;
          }
        }
        v572 = v870;
        v573 = v558;
        v574 = (int *)((char *)v874 + v573 * 4);
        v575 = &v312[v573];
        v576 = *v574;
        do
        {
          v577 = *v559;
          v578 = (int *)(v313 + 4 * v577);
          if ( *v578 < 0 )
          {
            ++*v575;
            *((_DWORD *)v315 + v577) = v576;
            ++v572;
            *v578 = v558;
            v576 = v577;
          }
          ++v559;
        }
        while ( v559 != v560 );
        LODWORD(v870) = v572;
        v557 = *v575;
        v579 = v553 + 1;
        *v574 = v576;
LABEL_724:
        if ( (int)v872 >= v557 )
          v557 = (int)v872;
        LODWORD(v872) = v557;
        goto LABEL_727;
      }
      LODWORD(v853) = -1;
      v868 = -1;
      v581 = -1;
LABEL_734:
      if ( v869 > v581 )
      {
        v664 = v581;
        v582 = v868;
LABEL_906:
        v665 = (double)(v664 - v869);
        v583 = *(_QWORD *)v847;
        *((double *)&v887 + *(_QWORD *)v847) = v665;
        goto LABEL_736;
      }
      v582 = v868;
      v583 = *(_QWORD *)v847;
      *((double *)&v887 + *(_QWORD *)v847) = (double)-v869;
LABEL_736:
      *((_DWORD *)&v885 + v583) = v582;
      *(_QWORD *)v847 = v583 + 1;
      if ( v583 == 2 )
      {
        if ( v869 )
        {
          if ( v831 <= 0 )
          {
            v744 = v312;
          }
          else
          {
            v742 = v812;
            v743 = _mm_load_si128((const __m128i *)&xmmword_297230);
            do
            {
              v742 += 8;
              *((__m128i *)v742 - 2) = v743;
              *((__m128i *)v742 - 1) = v743;
            }
            while ( v742 != (int *)v832 );
            v744 = &v312[8 * v808.m128i_i32[0] + 8];
          }
          switch ( (int)v829 )
          {
            case 1:
              goto LABEL_1060;
            case 2:
              goto LABEL_1059;
            case 3:
              goto LABEL_1058;
            case 4:
              goto LABEL_1057;
            case 5:
              goto LABEL_1056;
            case 6:
              goto LABEL_1055;
            case 7:
              v744[6] = -2;
LABEL_1055:
              v744[5] = -2;
LABEL_1056:
              v744[4] = -2;
LABEL_1057:
              v744[3] = -2;
LABEL_1058:
              v744[2] = -2;
LABEL_1059:
              v744[1] = -2;
LABEL_1060:
              *v744 = -2;
              break;
            default:
              break;
          }
        }
        si128.m128i_i64[0] = *((_QWORD *)&v887 + 1);
        if ( *(double *)&v887 > v888 || *((double *)&v887 + 1) > v888 )
        {
          if ( *(double *)&v887 > *((double *)&v887 + 1) )
          {
            v592 = v885 + 1;
            v591 = &v312[(int)v885 + 1];
            v590 = v869;
          }
          else
          {
            v590 = v869 - HIDWORD(v885);
            v591 = v312;
            v592 = 0;
          }
          v586 = 0;
          v585 = v590 - v592;
          if ( v585 )
          {
            if ( v585 / 8 > 0 )
            {
              si128.m128i_i64[0] = -1;
              v765 = v591;
              v766 = (unsigned int)(v585 / 8 - 1);
              do
              {
                *(_OWORD *)v765 = -1;
                v765 += 8;
                *((_OWORD *)v765 - 1) = -1;
              }
              while ( &v591[8 * v766 + 8] != v765 );
              v591 += 8 * (int)v766 + 8;
            }
            v586 = 2 * v585;
            switch ( v585 % 8 )
            {
              case 1:
                goto LABEL_1121;
              case 2:
                goto LABEL_1120;
              case 3:
                goto LABEL_1119;
              case 4:
                goto LABEL_1118;
              case 5:
                goto LABEL_1117;
              case 6:
                goto LABEL_1116;
              case 7:
                v591[6] = -1;
LABEL_1116:
                v591[5] = -1;
LABEL_1117:
                v591[4] = -1;
LABEL_1118:
                v591[3] = -1;
LABEL_1119:
                v591[2] = -1;
LABEL_1120:
                v591[1] = -1;
LABEL_1121:
                *v591 = -1;
                break;
              default:
                break;
            }
          }
        }
        else
        {
          v584 = v886 + 1;
          v585 = v869 - (v886 + 1);
          v586 = 2 * v585;
          if ( v869 > v886 + 1 )
          {
            v587 = (char *)v867 + 4 * v584;
            v588 = (char *)v867 + 4 * (unsigned int)(v869 - v886 - 2) + 4 * (__int64)v584 + 4;
            do
            {
              v589 = *(int *)v587;
              v587 += 4;
              v312[v589] = -1;
            }
            while ( v588 != v587 );
          }
        }
        v871 = (CoinStructuredModel *)((char *)v866 + 64);
        if ( v869 < v586 )
        {
          sprintf(s, "%d rows out of %d would be in master - no good", v585, v869);
          v759 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)v866 + 7), 30, v871);
          v764 = CoinMessageHandler::operator<<(v759, (__int64)s, v760, v761, v762, v763, v808.m128i_i64[0]);
          CoinMessageHandler::operator<<(v764, 0, *(double *)si128.m128i_i64);
          operator delete[](v312);
          operator delete[]((void *)v313);
          operator delete[](v874);
          operator delete[](v315);
          operator delete[](v867);
          v871 = (CoinMessages *)v891;
          CoinModel::CoinModel((CoinModel *)v891, v869, (int)v865, v848, v852, v851, v850, v849, a8);
          v892 = v834;
          std::string::string();
          v862 = (char *)v879;
          std::string::string();
          CoinStructuredModel::addBlock(
            v866,
            (const std::string *)v879,
            (const std::string *)v880,
            (const CoinBaseModel *)v891);
          v867 = (CoinMessages *)&std::string::_Rep::_S_empty_rep_storage;
          if ( (_UNKNOWN *)(v879[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
            sub_5C758(v879[0] - 24LL);
          if ( (CoinMessages *)(v880[0] - 24LL) != v867 )
            sub_5C758(v880[0] - 24LL);
          goto LABEL_849;
        }
        LODWORD(v870) = 0;
        if ( (_DWORD)v865 )
        {
          if ( (int)v828 <= 0 )
          {
            v594 = (_DWORD *)v313;
          }
          else
          {
            v593 = v810;
            si128 = _mm_load_si128((const __m128i *)&xmmword_297230);
            do
            {
              v593 += 32LL;
              *(__m128i *)(v593 - 32) = si128;
              *(__m128i *)(v593 - 16) = si128;
            }
            while ( v833 != v593 );
            v594 = (_DWORD *)(v313 + 32 * (v815 + 1LL));
          }
          switch ( v844 )
          {
            case 1:
              goto LABEL_1128;
            case 2:
              goto LABEL_1127;
            case 3:
              goto LABEL_1126;
            case 4:
              goto LABEL_1125;
            case 5:
              goto LABEL_1124;
            case 6:
              goto LABEL_1123;
            case 7:
              v594[6] = -2;
LABEL_1123:
              v594[5] = -2;
LABEL_1124:
              v594[4] = -2;
LABEL_1125:
              v594[3] = -2;
LABEL_1126:
              v594[2] = -2;
LABEL_1127:
              v594[1] = -2;
LABEL_1128:
              *v594 = -2;
              break;
            default:
              break;
          }
          LODWORD(v870) = 0;
          if ( (int)v865 > 0 )
          {
            v709 = v870;
            goto LABEL_1012;
          }
        }
LABEL_445:
        operator delete[](v867);
        if ( v869 > 0 )
          goto LABEL_446;
        v847[0] = 0;
        goto LABEL_1078;
      }
    }
  }
  if ( v845 != 2 )
    abort();
  v843 = (CoinPackedMatrix *)v881;
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v881, a2);
  CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v881);
  v11 = *((_BYTE *)a2 + 8) == 0;
  v863 = *((std::string **)a2 + 5);
  v864 = *((CoinPackedMatrix **)a2 + 7);
  v861 = *((CoinPackedMatrix **)a2 + 6);
  *(_QWORD *)v847 = v882;
  v846 = v884;
  v842 = v883;
  v873[0] = *((_DWORD *)a2 + 16);
  if ( v11 )
    v873[0] = *((_DWORD *)a2 + 17);
  v12 = v873[0] + 1;
  if ( (unsigned __int64)(v873[0] + 1) > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v13 = 4LL * v12;
  v14 = (_OWORD *)operator new[](v13);
  v15 = (unsigned __int64)v14;
  if ( v873[0] == -1 )
    goto LABEL_7;
  if ( v12 / 8 <= 0 )
  {
    v298 = v14;
  }
  else
  {
    si128.m128i_i64[0] = 0;
    v296 = (unsigned int)(v12 / 8 - 1);
    v297 = (__int64)&v14[2 * v296 + 2];
    do
    {
      *v14 = 0;
      v14 += 2;
      *(v14 - 1) = 0;
    }
    while ( v14 != (_OWORD *)v297 );
    v298 = (_DWORD *)(v15 + 32 * ((int)v296 + 1LL));
  }
  switch ( v12 % 8 )
  {
    case 1:
      goto LABEL_383;
    case 2:
      goto LABEL_382;
    case 3:
      goto LABEL_381;
    case 4:
      goto LABEL_380;
    case 5:
      goto LABEL_379;
    case 6:
      goto LABEL_378;
    case 7:
      v298[6] = 0;
LABEL_378:
      v298[5] = 0;
LABEL_379:
      v298[4] = 0;
LABEL_380:
      v298[3] = 0;
LABEL_381:
      v298[2] = 0;
LABEL_382:
      v298[1] = 0;
LABEL_383:
      *v298 = 0;
      break;
    default:
      break;
  }
  if ( v873[0] <= 0 )
  {
LABEL_7:
    if ( a11 )
      goto LABEL_8;
  }
  else
  {
    v299 = (CoinPackedMatrix *)((char *)v864 + 4 * (unsigned int)(v873[0] - 1) + 4);
    v300 = v864;
    do
    {
      v301 = *(int *)v300;
      v300 = (CoinPackedMatrix *)((char *)v300 + 4);
      ++*(_DWORD *)(v15 + 4 * v301);
    }
    while ( v300 != v299 );
    if ( a11 )
      goto LABEL_8;
  }
  if ( v873[0] >= 0 )
  {
    v302 = 0;
    do
    {
      v303 = *(_DWORD *)(v15 + 4 * v302);
      if ( v303 )
      {
        sprintf(s, "%d columns have %d elements", v303, v302);
        v304 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)v866 + 7),
                                       29,
                                       (CoinStructuredModel *)((char *)v866 + 64));
        v309 = CoinMessageHandler::operator<<(v304, (__int64)s, v305, v306, v307, v308, v808.m128i_i64[0]);
        CoinMessageHandler::operator<<(v309, 0, *(double *)si128.m128i_i64);
      }
      ++v302;
    }
    while ( v302 != v873[0] + 1LL );
  }
LABEL_8:
  LOBYTE(v872) = 1;
  if ( a10 > 1000000 )
  {
    a10 -= 1000000;
    LOBYTE(v872) = 0;
  }
  v11 = *((_BYTE *)v848 + 8) == 0;
  v869 = *((_DWORD *)v848 + 16);
  if ( !v11 )
    v869 = *((_DWORD *)v848 + 17);
  v836 = v869;
  if ( (unsigned __int64)v869 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v16 = operator new[](4LL * v869);
  v17 = (_OWORD *)operator new[](4LL * v869);
  v835 = v873[0];
  if ( (unsigned __int64)v873[0] > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v18 = v13 - 4;
  v874 = (void *)operator new[](v18);
  v19 = operator new[](v18);
  v865 = (double *)v19;
  if ( (_BYTE)v872 )
  {
    v885 = -1;
    v886 = -1;
    v888 = 0.0;
    v812 = (int *)v15;
    v20 = v873[0] / 8;
    LODWORD(v833) = v873[0] / 8;
    v887 = 0;
    LODWORD(v832) = v873[0] % 8;
    v21 = v869 / 8;
    v823 = v869 / 8;
    v822 = v869 % 8;
    LODWORD(v857) = v873[0] / 2;
    LODWORD(v856) = 11 * v869;
    v854 = (double *)(v15 + v18);
    LOBYTE(v844) = (v19 >= (unsigned __int64)v864 + 16 || (unsigned __int64)v864 >= v19 + 16)
                && v873[0] > 0xAu
                && (v15 >= (unsigned __int64)v864 + 16 || (unsigned __int64)v864 >= v15 + 16);
    v22 = -(__int64)((unsigned __int64)v864 >> 2) & 3;
    LODWORD(v841) = v873[0] - 1;
    v830 = v873[0] - v22;
    v824 = -(int)((unsigned __int64)v864 >> 2) & 3;
    v831 = v22 + 3;
    LODWORD(v826) = (v873[0] - v22) & 0xFFFFFFFC;
    LODWORD(v825) = (unsigned int)(v873[0] - v22) >> 2;
    v23 = 4LL * v824;
    v827 = (char *)v864 + v23;
    v829 = v19 + v23;
    v828 = (_DWORD *)(v15 + v23);
    v24 = 5;
    v25 = -(__int64)(v19 >> 2) & 3;
    LODWORD(v813) = -(int)(v19 >> 2) & 3;
    if ( (unsigned int)(v25 + 3) >= 5 )
      v24 = v25 + 3;
    LODWORD(v809) = v24;
    LODWORD(v814) = v873[0] - v25;
    v816 = (unsigned int)(v873[0] - v25) >> 2;
    v821 = (v873[0] - v25) & 0xFFFFFFFC;
    v811 = (__m128i *)(v19 + 4LL * (unsigned int)v25);
    v26 = (unsigned int)(v20 - 1);
    LODWORD(v810) = v20 - 1;
    v27 = 32 * (v26 + 1);
    v28 = 32 * v26 + 32;
    v29 = (_DWORD *)(v15 + v27);
    if ( v20 <= 0 )
      v29 = (_DWORD *)v15;
    v820 = (char *)(v28 + v15);
    v30 = _mm_cvtsi32_si128((unsigned int)v841);
    v838 = v29;
    v855 = nullptr;
    v31 = (char *)v874 + v28;
    v32 = (char *)v874 + v27;
    if ( v20 <= 0 )
      v32 = (char *)v874;
    v817 = v31;
    v837 = v32;
    v33 = _mm_shuffle_epi32(v30, 0);
    v34 = (unsigned int)(v21 - 1);
    v35 = 2 * (v34 + 1);
    v36 = 32 * v34 + 32;
    v37 = (CoinPackedMatrix *)(v16 + v35 * 16);
    if ( v21 <= 0 )
      v37 = (CoinPackedMatrix *)v16;
    v38 = &v17[v35];
    v818 = v36 + v16;
    if ( v21 <= 0 )
      v38 = v17;
    v808 = v33;
    v839 = v37;
    v819 = (char *)v17 + v36;
    v840 = v38;
    while ( 1 )
    {
      v39 = (unsigned int)v855;
      if ( !v855 )
        break;
      if ( (_DWORD)v855 != 1 )
      {
        if ( v873[0] > 0 )
        {
          if ( (_BYTE)v844 )
          {
            if ( v831 > (unsigned int)v841 )
            {
              *(_DWORD *)v15 = *(_DWORD *)v864;
              *(_DWORD *)v865 = 0;
              v58 = 1;
              goto LABEL_39;
            }
            v40 = v824;
            v41 = 0;
            if ( v824 )
            {
              v42 = v864;
              v43 = v865;
              v41 = 1;
              v44 = *(_DWORD *)v864;
              *(_DWORD *)v865 = 0;
              *(_DWORD *)v15 = v44;
              if ( v40 != 1 )
              {
                v45 = *((_DWORD *)v42 + 1);
                *((_DWORD *)v43 + 1) = 1;
                v41 = 2;
                *(_DWORD *)(v15 + 4) = v45;
                if ( v40 != 2 )
                {
                  v46 = *((_DWORD *)v42 + 2);
                  v41 = 3;
                  *((_DWORD *)v43 + 2) = 2;
                  *(_DWORD *)(v15 + 8) = v46;
                }
              }
            }
            LODWORD(v872) = v41;
            v47 = v829;
            v48 = 0;
            v49 = v828;
            v50 = 0;
            v51 = v827;
            v52 = (unsigned int)v825;
            v53 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v41), 0), (__m128i)xmmword_289BB0);
            do
            {
              v54 = _mm_load_si128((const __m128i *)&v51[v48 * 4]);
              ++v50;
              *(__m128i *)(v47 + v48 * 4) = v53;
              v53 = _mm_add_epi32(v53, (__m128i)xmmword_289BC0);
              *(__m128i *)&v49[v48] = v54;
              v48 += 4;
            }
            while ( v52 > v50 );
            v55 = (_DWORD)v826 + v41;
            if ( (_DWORD)v826 != v830 )
            {
              v56 = v55;
              v57 = *((_DWORD *)v864 + v55);
              *((_DWORD *)v865 + v55) = v55;
              v58 = v55 + 1;
              v59 = v58 < v873[0];
              *(_DWORD *)(v15 + 4 * v56) = v57;
              if ( v59 )
              {
LABEL_39:
                v60 = v864;
                v61 = v865;
                v62 = v873[0];
                v63 = *((_DWORD *)v864 + v58);
                *((_DWORD *)v865 + v58) = v58;
                *(_DWORD *)(v15 + 4LL * v58) = v63;
                v64 = v58 + 1;
                if ( v62 > v58 + 1 )
                {
                  v65 = v64;
                  v66 = *((_DWORD *)v60 + v64);
                  *((_DWORD *)v61 + v64) = v64;
                  v67 = v58 + 2;
                  *(_DWORD *)(v15 + 4 * v65) = v66;
                  if ( v62 > v58 + 2 )
                  {
                    v68 = v67;
                    v69 = *((_DWORD *)v60 + v67);
                    *((_DWORD *)v61 + v67) = v67;
                    v70 = v58 + 3;
                    *(_DWORD *)(v15 + 4 * v68) = v69;
                    if ( v62 > v58 + 3 )
                    {
                      v71 = v58 + 4;
                      v72 = *((_DWORD *)v60 + v70);
                      *((_DWORD *)v61 + v70) = v70;
                      *(_DWORD *)(v15 + 4LL * v70) = v72;
                      if ( v62 > v71 )
                      {
                        v73 = *((_DWORD *)v60 + v71);
                        *((_DWORD *)v61 + v71) = v71;
                        *(_DWORD *)(v15 + 4LL * v71) = v73;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v459 = v865;
            v460 = 0;
            v461 = v864;
            v462 = (unsigned int)v841 + 1LL;
            do
            {
              v463 = *((_DWORD *)v461 + v460);
              *((_DWORD *)v459 + v460) = v460;
              *(_DWORD *)(v15 + 4 * v460++) = v463;
            }
            while ( v460 != v462 );
          }
        }
        CoinSort_2<int,int>(v15, v854, v865);
LABEL_45:
        if ( !v873[0] )
        {
          v11 = v869 == 0;
          *(_DWORD *)v854 = 0;
          if ( v11 )
          {
            v279 = -1;
            LODWORD(v870) = 0;
            v868 = -1;
            LODWORD(v853) = -1;
            v249 = -1;
            goto LABEL_332;
          }
LABEL_47:
          if ( v823 > 0 )
          {
            v74 = (_OWORD *)v818;
            v75 = (_OWORD *)v16;
            do
            {
              *v75 = -1;
              v75 += 2;
              *(v75 - 1) = -1;
            }
            while ( v75 != v74 );
            switch ( v822 )
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
                goto LABEL_251;
              default:
                goto LABEL_258;
            }
          }
          switch ( v822 )
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
LABEL_251:
              *((_DWORD *)v839 + 6) = -1;
LABEL_252:
              *((_DWORD *)v839 + 5) = -1;
LABEL_253:
              *((_DWORD *)v839 + 4) = -1;
LABEL_254:
              *((_DWORD *)v839 + 3) = -1;
LABEL_255:
              *((_DWORD *)v839 + 2) = -1;
LABEL_256:
              *((_DWORD *)v839 + 1) = -1;
LABEL_257:
              v59 = v823 <= 0;
              *(_DWORD *)v839 = -1;
              if ( !v59 )
              {
LABEL_258:
                v218 = v819;
                v219 = v17;
                do
                {
                  *v219 = -1;
                  v219 += 2;
                  *(v219 - 1) = -1;
                }
                while ( v219 != v218 );
              }
              switch ( v822 )
              {
                case 1:
                  goto LABEL_267;
                case 2:
                  goto LABEL_266;
                case 3:
                  goto LABEL_265;
                case 4:
                  goto LABEL_264;
                case 5:
                  goto LABEL_263;
                case 6:
                  goto LABEL_262;
                case 7:
                  v840[6] = -1;
LABEL_262:
                  v840[5] = -1;
LABEL_263:
                  v840[4] = -1;
LABEL_264:
                  v840[3] = -1;
LABEL_265:
                  v840[2] = -1;
LABEL_266:
                  v840[1] = -1;
LABEL_267:
                  *v840 = -1;
                  break;
                default:
                  goto LABEL_268;
              }
              break;
            default:
              goto LABEL_268;
          }
          goto LABEL_268;
        }
        goto LABEL_348;
      }
      v772 = v873[0];
      if ( v873[0] <= 0 )
        goto LABEL_45;
      if ( (unsigned int)v841 < (unsigned int)v809 )
      {
        v779 = 0;
LABEL_1150:
        v780 = (int)v841;
        v781 = v865;
        v782 = v873[0];
        *((_DWORD *)v865 + v779) = (_DWORD)v841 - v779;
        if ( v779 + 1 < v782 )
        {
          *((_DWORD *)v781 + v779 + 1) = v780 - (v779 + 1);
          if ( v779 + 2 < v782 )
          {
            *((_DWORD *)v781 + v779 + 2) = v780 - (v779 + 2);
            if ( v779 + 3 < v782 )
            {
              *((_DWORD *)v781 + v779 + 3) = v780 - (v779 + 3);
              v783 = v779 + 4;
              if ( v779 + 4 < v782 )
              {
                v784 = v779 + 5;
                *((_DWORD *)v781 + v783) = v780 - v783;
                if ( v784 < v782 )
                  *((_DWORD *)v781 + v784) = v780 - v784;
              }
            }
          }
        }
        goto LABEL_348;
      }
      v773 = (int)v813;
      if ( (_DWORD)v813 )
      {
        v774 = v865;
        *(_DWORD *)v865 = (_DWORD)v841;
        if ( v773 != 1 )
        {
          *((_DWORD *)v774 + 1) = v772 - 2;
          v39 = 2;
          if ( v773 != 2 )
          {
            *((_DWORD *)v774 + 2) = v772 - 3;
            v39 = 3;
          }
        }
      }
      else
      {
        v39 = 0;
      }
      LODWORD(v872) = v39;
      v775 = v811;
      v776 = 0;
      v777 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v778 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v39), 0), (__m128i)xmmword_289BB0);
      do
      {
        ++v776;
        ++v775;
        v775[-1] = _mm_sub_epi32(_mm_load_si128(&v808), v778);
        v778 = _mm_add_epi32(v778, v777);
      }
      while ( v816 > v776 );
      v779 = v821 + v39;
      if ( v821 != (_DWORD)v814 )
        goto LABEL_1150;
LABEL_348:
      if ( (int)v833 > 0 )
      {
        v292 = v820;
        v293 = (_OWORD *)v15;
        do
        {
          *v293 = -1;
          v293 += 2;
          *(v293 - 1) = -1;
        }
        while ( v293 != v292 );
      }
      switch ( (int)v832 )
      {
        case 1:
          goto LABEL_358;
        case 2:
          goto LABEL_357;
        case 3:
          goto LABEL_356;
        case 4:
          goto LABEL_355;
        case 5:
          goto LABEL_354;
        case 6:
          goto LABEL_353;
        case 7:
          v838[6] = -1;
LABEL_353:
          v838[5] = -1;
LABEL_354:
          v838[4] = -1;
LABEL_355:
          v838[3] = -1;
LABEL_356:
          v838[2] = -1;
LABEL_357:
          v838[1] = -1;
LABEL_358:
          *v838 = -1;
          *(_DWORD *)v854 = 0;
          break;
        default:
          *(_DWORD *)v854 = 0;
          break;
      }
      if ( (int)v833 > 0 )
      {
        v294 = v874;
        v295 = v817;
        do
        {
          *v294 = -1;
          v294 += 2;
          *(v294 - 1) = -1;
        }
        while ( v294 != v295 );
      }
      switch ( (int)v832 )
      {
        case 1:
          goto LABEL_369;
        case 2:
          goto LABEL_368;
        case 3:
          goto LABEL_367;
        case 4:
          goto LABEL_366;
        case 5:
          goto LABEL_365;
        case 6:
          goto LABEL_364;
        case 7:
          v837[6] = -1;
LABEL_364:
          v837[5] = -1;
LABEL_365:
          v837[4] = -1;
LABEL_366:
          v837[3] = -1;
LABEL_367:
          v837[2] = -1;
LABEL_368:
          v837[1] = -1;
LABEL_369:
          *v837 = -1;
          break;
        default:
          break;
      }
      if ( v869 )
        goto LABEL_47;
LABEL_268:
      if ( v873[0] > 0 )
      {
        LODWORD(v853) = -1;
        v868 = -1;
        v220 = 1.797693134862316e308;
        LODWORD(v867) = 0;
        LODWORD(v871) = 0;
        v221 = 0;
        LODWORD(v862) = 0;
        LODWORD(v870) = 0;
        v858 = (double *)((char *)v863 + 4);
        while ( 1 )
        {
          LODWORD(lpsrc) = v221;
          v222 = *((int *)v865 + v221);
          v223 = *((_DWORD *)v861 + v222);
          v224 = *((_DWORD *)v864 + v222);
          LODWORD(v860) = v224 + v223;
          if ( v223 < v224 + v223 )
          {
            v225 = -1;
            v226 = (int *)((char *)v863 + 4 * v223);
            v227 = v226;
            v228 = (char *)v858 + 4 * v223 + 4 * (unsigned __int64)(unsigned int)(v224 - 1);
            do
            {
              v229 = *v227;
              v230 = *(int *)(v16 + 4 * v229);
              v231 = 4 * v229;
              if ( (int)v230 >= 0 )
              {
                if ( v225 < 0 )
                {
                  v225 = *(_DWORD *)(v16 + 4 * v229);
                }
                else if ( (_DWORD)v230 != v225 )
                {
                  v232 = (CoinModel *)(4 * v230);
                  LODWORD(v867) = (_DWORD)v867 - 1;
                  v233 = (_DWORD *)((char *)v232 + v15);
                  v234 = 4LL * v225;
                  v872 = v232;
                  *(_DWORD *)(v15 + v234) += *(_DWORD *)((char *)v232 + v15);
                  v235 = (_DWORD *)((char *)v872 + (_QWORD)v874);
                  *v233 = 0;
                  LODWORD(v872) = *v235;
                  v236 = (int)v872;
                  if ( (int)v872 < 0 )
                  {
                    v237 = (int *)((char *)v17 + v231);
                  }
                  else
                  {
                    do
                    {
                      v237 = (int *)v17 + v236;
                      *(_DWORD *)(v16 + 4 * v236) = v225;
                      v236 = *v237;
                    }
                    while ( (int)v236 >= 0 );
                  }
                  v238 = (int *)((char *)v874 + v234);
                  *v237 = *v238;
                  *v238 = (int)v872;
                  *v235 = -1;
                }
              }
              ++v227;
            }
            while ( v227 != (int *)v228 );
            if ( v225 >= 0 )
              break;
          }
          v246 = v221 + 1;
          if ( v224 )
          {
            v270 = 4LL * v223;
            v271 = v874;
            LODWORD(v867) = (_DWORD)v867 + 1;
            LODWORD(v862) = v224 + (_DWORD)v862;
            v272 = *(int *)((char *)v863 + v270);
            v273 = (int)v870;
            v274 = v870 + 1;
            *(_DWORD *)(v15 + 4LL * (int)v870) = v224;
            v271[v273] = v272;
            v275 = (int)v860;
            *(_DWORD *)(v16 + 4 * v272) = v273;
            if ( v275 > v223 + 1 )
            {
              v276 = (char *)v863 + v270 + 4;
              v277 = (char *)v858 + 4 * (unsigned int)(v275 - v223 - 2) + 4 * (__int64)(v223 + 1);
              while ( 1 )
              {
                v278 = *(int *)v276;
                v276 += 4;
                *(_DWORD *)(v16 + 4 * v278) = v273;
                *((_DWORD *)v17 + v272) = v278;
                if ( v276 == v277 )
                  break;
                v272 = v278;
              }
            }
            LODWORD(v870) = v274;
            goto LABEL_285;
          }
          ++*(_DWORD *)v854;
LABEL_288:
          if ( (int)v857 < v246 && 10 * (int)v871 < (int)v856 && (int)v867 > 1 )
          {
            v247 = (double)(int)v862 / (double)(int)v867 * 0.0 + (double)(int)v871;
            if ( (double)v246 * v220 > v247 )
            {
              LODWORD(v853) = v246;
              v220 = v247 / (double)v246;
              v868 = (int)lpsrc;
            }
          }
          ++v221;
          if ( v873[0] <= v246 )
          {
            v248 = (int)v853;
            goto LABEL_295;
          }
        }
        v239 = (int)v862;
        v240 = 4LL * v225;
        v241 = (int *)((char *)v874 + v240);
        v242 = (int *)(v15 + v240);
        v243 = *v241;
        do
        {
          v244 = *v226;
          v245 = (int *)(v16 + 4 * v244);
          if ( *v245 < 0 )
          {
            ++*v242;
            *((_DWORD *)v17 + v244) = v243;
            ++v239;
            *v245 = v225;
            v243 = v244;
          }
          ++v226;
        }
        while ( v226 != v227 );
        LODWORD(v862) = v239;
        v224 = *v242;
        v246 = v221 + 1;
        *v241 = v243;
LABEL_285:
        if ( (int)v871 >= v224 )
          v224 = (int)v871;
        LODWORD(v871) = v224;
        goto LABEL_288;
      }
      LODWORD(v870) = 0;
      LODWORD(v853) = -1;
      v868 = -1;
      v248 = -1;
LABEL_295:
      if ( v873[0] > v248 )
      {
        v279 = v248;
        v249 = v868;
LABEL_332:
        v280 = (double)(v279 - v873[0]);
        v250 = v855;
        *((double *)&v887 + (_QWORD)v855) = v280;
        goto LABEL_297;
      }
      v249 = v868;
      v250 = v855;
      *((double *)&v887 + (_QWORD)v855) = (double)-v873[0];
LABEL_297:
      *((_DWORD *)&v885 + (_QWORD)v250) = v249;
      v855 = v250 + 1;
      if ( v250 == (_BYTE *)&dword_0 + 2 )
      {
        if ( v873[0] )
        {
          if ( (int)v833 <= 0 )
          {
            v659 = (_DWORD *)v15;
          }
          else
          {
            v656 = v812;
            v657 = (int *)v820;
            v658 = _mm_load_si128((const __m128i *)&xmmword_297230);
            do
            {
              v656 += 8;
              *((__m128i *)v656 - 2) = v658;
              *((__m128i *)v656 - 1) = v658;
            }
            while ( v656 != v657 );
            v659 = (_DWORD *)(v15 + 32 * ((int)v810 + 1LL));
          }
          switch ( (int)v832 )
          {
            case 1:
              goto LABEL_861;
            case 2:
              goto LABEL_860;
            case 3:
              goto LABEL_859;
            case 4:
              goto LABEL_858;
            case 5:
              goto LABEL_857;
            case 6:
              goto LABEL_856;
            case 7:
              v659[6] = -2;
LABEL_856:
              v659[5] = -2;
LABEL_857:
              v659[4] = -2;
LABEL_858:
              v659[3] = -2;
LABEL_859:
              v659[2] = -2;
LABEL_860:
              v659[1] = -2;
LABEL_861:
              *v659 = -2;
              break;
            default:
              break;
          }
        }
        si128.m128i_i64[0] = v887;
        if ( *(double *)&v887 > v888 || *((double *)&v887 + 1) > v888 )
        {
          if ( *(double *)&v887 > *((double *)&v887 + 1) )
          {
            v253 = 0;
            v258 = (_DWORD *)(v15 + 4LL * ((int)v885 + 1));
            v252 = v873[0] - (v885 + 1);
            if ( v873[0] == (_DWORD)v885 + 1 )
              goto LABEL_307;
          }
          else
          {
            v253 = 0;
            v258 = (_DWORD *)v15;
            v252 = v873[0] - HIDWORD(v885);
            if ( v873[0] == HIDWORD(v885) )
              goto LABEL_307;
          }
          if ( v252 / 8 > 0 )
          {
            si128.m128i_i64[0] = -1;
            v464 = v258;
            v465 = (unsigned int)(v252 / 8 - 1);
            do
            {
              *v464 = -1;
              v464 += 2;
              *(v464 - 1) = -1;
            }
            while ( v464 != (_OWORD *)&v258[8 * v465 + 8] );
            v258 += 8 * (int)v465 + 8;
          }
          v253 = 2 * v252;
          switch ( v252 % 8 )
          {
            case 1:
              goto LABEL_884;
            case 2:
              goto LABEL_883;
            case 3:
              goto LABEL_882;
            case 4:
              goto LABEL_881;
            case 5:
              goto LABEL_880;
            case 6:
              goto LABEL_879;
            case 7:
              v258[6] = -1;
LABEL_879:
              v258[5] = -1;
LABEL_880:
              v258[4] = -1;
LABEL_881:
              v258[3] = -1;
LABEL_882:
              v258[2] = -1;
LABEL_883:
              v258[1] = -1;
LABEL_884:
              *v258 = -1;
              break;
            default:
              break;
          }
        }
        else
        {
          v251 = v886 + 1;
          v252 = v873[0] - (v886 + 1);
          v253 = 2 * v252;
          if ( v886 + 1 < v873[0] )
          {
            v254 = v251;
            v255 = (char *)v865 + 4 * v251;
            v256 = (char *)v865 + 4 * (unsigned int)(v873[0] - v886 - 2) + 4 * v254 + 4;
            do
            {
              v257 = *(int *)v255;
              v255 += 4;
              *(_DWORD *)(v15 + 4 * v257) = -1;
            }
            while ( v255 != v256 );
          }
        }
LABEL_307:
        v867 = (CoinStructuredModel *)((char *)v866 + 64);
        if ( v873[0] >= v253 )
        {
          if ( a11 )
            goto LABEL_309;
          goto LABEL_821;
        }
        sprintf(s, "%d columns out of %d would be in master - no good", v252, v873[0]);
        v649 = v866;
        v650 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)v866 + 7), 30, v867);
        v655 = CoinMessageHandler::operator<<(v650, (__int64)s, v651, v652, v653, v654, v808.m128i_i64[0]);
        CoinMessageHandler::operator<<(v655, 0, *(double *)si128.m128i_i64);
        operator delete[]((void *)v16);
        operator delete[]((void *)v15);
        operator delete[](v17);
        operator delete[](v874);
        operator delete[](v865);
        v871 = (CoinMessages *)v891;
        CoinModel::CoinModel((CoinModel *)v891, v869, v873[0], v848, v852, v851, v850, v849, a8);
        v892 = v834;
        std::string::string();
        v862 = (char *)v879;
        std::string::string();
        CoinStructuredModel::addBlock(
          v649,
          (const std::string *)v879,
          (const std::string *)v880,
          (const CoinBaseModel *)v891);
        v867 = (CoinMessages *)&std::string::_Rep::_S_empty_rep_storage;
        if ( (_UNKNOWN *)(v879[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create )
          {
            v769 = _InterlockedExchangeAdd((volatile signed __int32 *)(v879[0] - 8LL), 0xFFFFFFFF);
          }
          else
          {
            v769 = *(_DWORD *)(v879[0] - 8LL);
            *(_DWORD *)(v879[0] - 8LL) = v769 - 1;
          }
          if ( v769 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (CoinMessages *)(v880[0] - 24LL) != v867 )
        {
          if ( &_pthread_key_create )
          {
            v767 = _InterlockedExchangeAdd((volatile signed __int32 *)(v880[0] - 8LL), 0xFFFFFFFF);
          }
          else
          {
            v767 = *(_DWORD *)(v880[0] - 8LL);
            *(_DWORD *)(v880[0] - 8LL) = v767 - 1;
          }
          if ( v767 <= 0 )
            std::string::_Rep::_M_destroy();
        }
LABEL_849:
        CoinModel::~CoinModel(v871);
        goto LABEL_842;
      }
    }
    if ( v873[0] > 0 )
    {
      v281 = 0;
      if ( (unsigned int)v841 <= 5 )
        goto LABEL_342;
      v282 = (int)v813;
      if ( (_DWORD)v813 )
      {
        v283 = v865;
        v281 = 1;
        *(_DWORD *)v865 = 0;
        if ( v282 != 1 )
        {
          *((_DWORD *)v283 + 1) = 1;
          v281 = 2;
          if ( v282 != 2 )
          {
            *((_DWORD *)v283 + 2) = 2;
            v281 = 3;
          }
        }
      }
      LODWORD(v872) = v281;
      v284 = v811;
      v285 = 0;
      v286 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v287 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v281), 0), (__m128i)xmmword_289BB0);
      do
      {
        *v284 = v287;
        v287 = _mm_add_epi32(v287, v286);
        ++v285;
        ++v284;
      }
      while ( v816 > v285 );
      v281 += v821;
      if ( v821 != (_DWORD)v814 )
      {
LABEL_342:
        v288 = v865;
        v289 = v873[0];
        *((_DWORD *)v865 + v281) = v281;
        if ( v281 + 1 < v289 )
        {
          *((_DWORD *)v288 + v281 + 1) = v281 + 1;
          if ( v281 + 2 < v289 )
          {
            *((_DWORD *)v288 + v281 + 2) = v281 + 2;
            if ( v281 + 3 < v289 )
            {
              *((_DWORD *)v288 + v281 + 3) = v281 + 3;
              v290 = v281 + 4;
              if ( v281 + 4 < v289 )
              {
                v291 = v281 + 5;
                *((_DWORD *)v288 + v290) = v290;
                if ( v291 < v289 )
                  *((_DWORD *)v288 + v291) = v291;
              }
            }
          }
        }
      }
      goto LABEL_348;
    }
    goto LABEL_45;
  }
  if ( v873[0] <= 0 )
    goto LABEL_68;
  v76 = -(int)(v15 >> 2) & 3;
  v77 = v76 + 3;
  if ( (unsigned int)(v76 + 3) < 5 )
    v77 = 5;
  if ( v77 > v873[0] - 1 )
  {
    v82 = 0;
  }
  else
  {
    v78 = 0;
    if ( (_DWORD)v76 )
    {
      *(_DWORD *)v15 = -2;
      v78 = 1;
      if ( (_DWORD)v76 != 1 )
      {
        *(_DWORD *)(v15 + 4) = -2;
        v78 = 2;
        if ( (_DWORD)v76 != 2 )
        {
          *(_DWORD *)(v15 + 8) = -2;
          v78 = 3;
        }
      }
    }
    v79 = (__m128i *)(v15 + 4 * v76);
    si128 = _mm_load_si128((const __m128i *)&xmmword_297230);
    v80 = v873[0] - v76;
    v81 = 0;
    do
    {
      ++v81;
      ++v79;
      v79[-1] = si128;
    }
    while ( v80 >> 2 > v81 );
    v82 = (v80 & 0xFFFFFFFC) + v78;
    if ( (v80 & 0xFFFFFFFC) == v80 )
      goto LABEL_68;
  }
  v83 = v873[0];
  *(_DWORD *)(v15 + 4LL * (int)v82) = -2;
  if ( v83 > (int)(v82 + 1) )
  {
    *(_DWORD *)(v15 + 4LL * (int)(v82 + 1)) = -2;
    if ( v83 > (int)(v82 + 2) )
    {
      *(_DWORD *)(v15 + 4LL * (int)(v82 + 2)) = -2;
      if ( v83 > (int)(v82 + 3) )
      {
        *(_DWORD *)(v15 + 4LL * (int)(v82 + 3)) = -2;
        v84 = v82 + 4;
        if ( v83 > (int)(v82 + 4) )
        {
          v85 = v82 + 5;
          *(_DWORD *)(v15 + 4LL * v84) = -2;
          if ( v83 > v85 )
            *(_DWORD *)(v15 + 4LL * v85) = -2;
        }
      }
    }
  }
LABEL_68:
  v867 = (CoinStructuredModel *)((char *)v866 + 64);
  if ( a11 )
  {
    v86 = *a11;
    v87 = a11[1];
    if ( (int)v86 < v87 )
      memset((void *)(v15 + 4 * v86), 255, 4LL * (unsigned int)(v87 - 1 - v86) + 4);
    if ( a10 > 0 )
    {
      v870 = v16;
      v88 = 0;
      v872 = (CoinModel *)((unsigned int)(a10 - 1) + 1LL);
      while ( 1 )
      {
        v89 = a11[v88 + 2];
        v90 = a11[v88 + 3];
        if ( v89 < v90 )
        {
          v91 = v89;
          v92 = -(int)((v15 + 4LL * v89) >> 2) & 3;
          v93 = v92 + 3;
          if ( (unsigned int)(v92 + 3) < 5 )
            v93 = 5;
          if ( v93 <= v90 - 1 - v89 )
          {
            v94 = a11[v88 + 2];
            if ( (_DWORD)v92 )
            {
              v94 = v89 + 1;
              *(_DWORD *)(v15 + 4LL * v89) = v88;
              if ( (_DWORD)v92 != 1 )
              {
                *(_DWORD *)(v15 + 4LL * v94) = v88;
                v94 = v89 + 2;
                if ( (_DWORD)v92 != 2 )
                {
                  *(_DWORD *)(v15 + 4LL * v94) = v88;
                  v94 = v89 + 3;
                }
              }
            }
            LODWORD(v871) = v88;
            v95 = v90 - v89 - v92;
            v96 = v872;
            v97 = (__m128i *)(v15 + 4 * (v92 + v89));
            v98 = 0;
            si128 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v88), 0);
            do
            {
              ++v98;
              ++v97;
              v97[-1] = si128;
            }
            while ( v95 >> 2 > v98 );
            v872 = v96;
            v89 = (v95 & 0xFFFFFFFC) + v94;
            if ( (v95 & 0xFFFFFFFC) == v95 )
              goto LABEL_91;
            v91 = v89;
          }
          *(_DWORD *)(v15 + 4 * v91) = v88;
          if ( v90 > v89 + 1 )
          {
            *(_DWORD *)(v15 + 4LL * (v89 + 1)) = v88;
            if ( v90 > v89 + 2 )
            {
              *(_DWORD *)(v15 + 4LL * (v89 + 2)) = v88;
              if ( v90 > v89 + 3 )
              {
                *(_DWORD *)(v15 + 4LL * (v89 + 3)) = v88;
                v99 = v89 + 4;
                if ( v90 > v89 + 4 )
                {
                  v100 = v89 + 5;
                  *(_DWORD *)(v15 + 4LL * v99) = v88;
                  if ( v90 > v100 )
                    *(_DWORD *)(v15 + 4LL * v100) = v88;
                }
              }
            }
          }
        }
LABEL_91:
        if ( (CoinModel *)++v88 == v872 )
        {
          v16 = v870;
          break;
        }
      }
    }
    LODWORD(v870) = a10;
    if ( !v869 )
    {
LABEL_94:
      operator delete[](v865);
      if ( v873[0] <= 0 )
      {
        LODWORD(v853) = 0;
LABEL_876:
        LODWORD(v863) = 0;
        goto LABEL_162;
      }
LABEL_95:
      v101 = -(int)(v15 >> 2) & 3;
      v102 = v101 + 3;
      if ( (unsigned int)(v101 + 3) < 5 )
        v102 = 5;
      if ( v102 > v873[0] - 1 )
      {
        LODWORD(v853) = 0;
        v112 = 0;
      }
      else
      {
        if ( (_DWORD)v101 )
        {
          v103 = 1;
          v104 = *(_DWORD *)v15 == -1;
          if ( (_DWORD)v101 != 1 )
          {
            if ( *(_DWORD *)(v15 + 4) == -1 )
              ++v104;
            v103 = 2;
            if ( (_DWORD)v101 != 2 )
            {
              if ( *(_DWORD *)(v15 + 8) == -1 )
                ++v104;
              v103 = 3;
            }
          }
        }
        else
        {
          v104 = 0;
          v103 = 0;
        }
        v105 = v873[0] - v101;
        v106 = 0;
        v107 = (const __m128i *)(v15 + 4 * v101);
        v108 = (unsigned int)(v873[0] - v101) >> 2;
        v109 = 0;
        do
        {
          v110 = _mm_load_si128(v107);
          ++v109;
          ++v107;
          v106 = _mm_sub_epi32(v106, _mm_cmpeq_epi32(v110, (__m128i)-1LL));
        }
        while ( v108 > v109 );
        v111 = _mm_add_epi32(v106, _mm_srli_si128(v106, 8));
        si128 = _mm_srli_si128(v111, 4);
        LODWORD(v853) = v104 + _mm_cvtsi128_si32(_mm_add_epi32(v111, si128));
        v112 = (v105 & 0xFFFFFFFC) + v103;
        if ( (v105 & 0xFFFFFFFC) == v105 )
        {
LABEL_126:
          if ( v869 > 0 )
            goto LABEL_127;
          goto LABEL_876;
        }
      }
      if ( *(_DWORD *)(v15 + 4LL * (int)v112) == -1 )
        LODWORD(v853) = (_DWORD)v853 + 1;
      if ( (int)(v112 + 1) < v873[0] )
      {
        if ( *(_DWORD *)(v15 + 4LL * (int)(v112 + 1)) == -1 )
          LODWORD(v853) = (_DWORD)v853 + 1;
        if ( (int)(v112 + 2) < v873[0] )
        {
          if ( *(_DWORD *)(v15 + 4LL * (int)(v112 + 2)) == -1 )
            LODWORD(v853) = (_DWORD)v853 + 1;
          if ( (int)(v112 + 3) < v873[0] )
          {
            if ( *(_DWORD *)(v15 + 4LL * (int)(v112 + 3)) == -1 )
              LODWORD(v853) = (_DWORD)v853 + 1;
            if ( (int)(v112 + 4) < v873[0] )
            {
              if ( *(_DWORD *)(v15 + 4LL * (int)(v112 + 4)) == -1 )
                LODWORD(v853) = (_DWORD)v853 + 1;
              v113 = v112 + 5;
              if ( v113 < v873[0] && *(_DWORD *)(v15 + 4LL * v113) == -1 )
                LODWORD(v853) = (_DWORD)v853 + 1;
            }
          }
        }
      }
      goto LABEL_126;
    }
    v466 = v16;
    if ( v869 / 8 > 0 )
    {
      si128.m128i_i64[0] = -1;
      v467 = (unsigned int)(v869 / 8 - 1);
      do
      {
        *(_OWORD *)v466 = -1;
        v466 += 32LL;
        *(_OWORD *)(v466 - 16) = -1;
      }
      while ( v466 != v16 + 32 * v467 + 32 );
      v466 = v16 + 32 * ((int)v467 + 1LL);
    }
    switch ( v869 % 8 )
    {
      case 1:
        goto LABEL_666;
      case 2:
        goto LABEL_665;
      case 3:
        goto LABEL_664;
      case 4:
        goto LABEL_663;
      case 5:
        goto LABEL_662;
      case 6:
        goto LABEL_661;
      case 7:
        *(_DWORD *)(v466 + 24) = -1;
LABEL_661:
        *(_DWORD *)(v466 + 20) = -1;
LABEL_662:
        *(_DWORD *)(v466 + 16) = -1;
LABEL_663:
        *(_DWORD *)(v466 + 12) = -1;
LABEL_664:
        *(_DWORD *)(v466 + 8) = -1;
LABEL_665:
        *(_DWORD *)(v466 + 4) = -1;
LABEL_666:
        *(_DWORD *)v466 = -1;
        break;
      default:
        break;
    }
    if ( v869 <= 0 )
    {
      LODWORD(v870) = a10;
      goto LABEL_94;
    }
    v535 = v842;
    v536 = v846;
    v537 = 4LL * (unsigned int)(v869 - 1) + 4;
    v538 = *(_QWORD *)v847;
    v539 = 0;
    v540 = *(_QWORD *)v847 + 4LL;
    do
    {
      v541 = *(_DWORD *)&v535[v539];
      if ( v541 < v541 + *(_DWORD *)((char *)v536 + v539) )
      {
        v542 = v538;
        v543 = (int *)(v538 + 4LL * v541);
        v544 = -1;
        v545 = (int *)(v540 + 4 * (v541 + (unsigned __int64)(unsigned int)(*(_DWORD *)((char *)v536 + v539) - 1)));
        do
        {
          v546 = *(_DWORD *)(v15 + 4LL * *v543);
          if ( v546 != -1 && v544 == -1 )
          {
            *(_DWORD *)(v16 + v539) = v546;
            v544 = v546;
          }
          ++v543;
        }
        while ( v543 != v545 );
        v538 = v542;
      }
      v539 += 4;
    }
    while ( v539 != v537 );
    LODWORD(v870) = a10;
  }
  else
  {
    if ( v873[0] == 2426 )
    {
      si128.m128i_i64[0] = -1;
      *(_DWORD *)(v15 + 9700) = -1;
      *(_OWORD *)(v15 + 9604) = -1;
      *(_OWORD *)(v15 + 9620) = -1;
      *(_OWORD *)(v15 + 9636) = -1;
      *(_OWORD *)(v15 + 9652) = -1;
      *(_OWORD *)(v15 + 9668) = -1;
      *(_OWORD *)(v15 + 9684) = -1;
    }
    else if ( v873[0] == 10193 || v873[0] == 157496 || v873[0] == 1259121 )
    {
      *(_QWORD *)v15 = -1;
      *(_QWORD *)(v15 + 476) = -1;
      memset(
        (void *)((v15 + 8) & 0xFFFFFFFFFFFFFFF8LL),
        0xFFu,
        8LL * (((unsigned int)v15 - (((_DWORD)v15 + 8) & 0xFFFFFFF8) + 484) >> 3));
    }
LABEL_821:
    LODWORD(v870) = 0;
    if ( !v869 )
      goto LABEL_94;
    v630 = (__m128 *)v16;
    if ( v869 / 8 > 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_297230);
      v631 = (unsigned int)(v869 / 8 - 1);
      do
      {
        *v630 = (__m128)si128;
        v630 += 2;
        v630[-1] = (__m128)si128;
      }
      while ( v630 != (__m128 *)(v16 + 32 * v631 + 32) );
      v630 = (__m128 *)(v16 + 32 * ((int)v631 + 1LL));
    }
    switch ( v869 % 8 )
    {
      case 1:
        goto LABEL_833;
      case 2:
        goto LABEL_832;
      case 3:
        goto LABEL_831;
      case 4:
        goto LABEL_830;
      case 5:
        goto LABEL_829;
      case 6:
        goto LABEL_828;
      case 7:
        v630[1].m128_i32[2] = -2;
LABEL_828:
        v630[1].m128_i32[1] = -2;
LABEL_829:
        v630[1].m128_i32[0] = -2;
LABEL_830:
        v630->m128_i32[3] = -2;
LABEL_831:
        v630->m128_i32[2] = -2;
LABEL_832:
        v630->m128_i32[1] = -2;
LABEL_833:
        v630->m128_i32[0] = -2;
        LODWORD(v870) = 0;
        break;
      default:
        LODWORD(v870) = 0;
        break;
    }
LABEL_309:
    if ( v869 <= 0 )
      goto LABEL_94;
  }
  v259 = nullptr;
  v862 = (char *)v17;
  v260 = v870;
  v261 = *(_QWORD *)v847 + 4LL;
  v262 = v865;
  do
  {
    while ( *(_DWORD *)(v16 + 4LL * (_QWORD)v259) != -2 )
    {
LABEL_311:
      v259 = (CoinModel *)((char *)v259 + 1);
      if ( v869 <= (int)v259 )
        goto LABEL_320;
    }
    v263 = *(_DWORD *)&v842[4 * (_QWORD)v259];
    if ( v263 < v263 + *((_DWORD *)v846 + (_QWORD)v259) )
    {
      v264 = 0;
      v265 = (int *)(*(_QWORD *)v847 + 4LL * v263);
      v266 = (int *)(v261 + 4 * (v263 + (unsigned __int64)(unsigned int)(*((_DWORD *)v846 + (_QWORD)v259) - 1)));
      do
      {
        v267 = *v265;
        v268 = (_DWORD *)(v15 + 4 * v267);
        if ( *v268 != -1 )
        {
          *v268 = v260;
          v269 = v264++;
          *((_DWORD *)v262 + v269) = v267;
        }
        ++v265;
      }
      while ( v265 != v266 );
      if ( v264 )
      {
        *(_DWORD *)(v16 + 4LL * (_QWORD)v259) = v260;
        lpsrc = v259;
        v599 = v842;
        v600 = (CoinModel *)v262;
        LODWORD(v860) = v260 + 1;
        do
        {
          v601 = 4LL * *((int *)v600 + --v264);
          v602 = (int *)((char *)v861 + v601);
          v603 = (_DWORD *)((char *)v864 + v601);
          v604 = *v602;
          v605 = v604 + *v603;
          if ( v605 > (int)v604 )
          {
            LODWORD(v871) = v264;
            v872 = v600;
            v606 = (int)v604 + 1;
            v607 = (char *)v863 + 4 * (v604 - v606);
            do
            {
              while ( 1 )
              {
                v609 = *(int *)&v607[4 * v606];
                v610 = (_DWORD *)(v16 + 4 * v609);
                if ( *v610 == -2 )
                  break;
                v608 = v606++;
                if ( v605 <= v608 )
                  goto LABEL_789;
              }
              v611 = *(_DWORD *)&v599[4 * v609];
              v612 = *((_DWORD *)v846 + v609);
              *v610 = v260;
              v613 = v611 + v612;
              if ( v611 < v613 )
              {
                v614 = (int)v871;
                v870 = v606;
                v615 = (int *)(*(_QWORD *)v847 + 4LL * v611);
                v616 = (int *)(v261 + 4 * ((unsigned int)(v613 - v611 - 1) + (__int64)v611));
                do
                {
                  v617 = *v615;
                  v618 = (_DWORD *)(v15 + 4 * v617);
                  if ( *v618 == -2 )
                  {
                    v619 = v872;
                    *v618 = v260;
                    v620 = v614++;
                    *((_DWORD *)v619 + v620) = v617;
                  }
                  ++v615;
                }
                while ( v615 != v616 );
                v606 = v870;
                LODWORD(v871) = v614;
              }
              v605 = *v602 + *v603;
              v621 = v606++;
            }
            while ( v605 > v621 );
LABEL_789:
            v264 = (int)v871;
            v600 = v872;
          }
        }
        while ( v264 );
        v262 = (double *)v600;
        v259 = lpsrc;
        v260 = (int)v860;
        goto LABEL_311;
      }
    }
    *(_DWORD *)(v16 + 4LL * (_QWORD)v259) = -1;
    v259 = (CoinModel *)((char *)v259 + 1);
  }
  while ( v869 > (int)v259 );
LABEL_320:
  v17 = v862;
  LODWORD(v870) = v260;
  operator delete[](v865);
  if ( v873[0] > 0 )
    goto LABEL_95;
  LODWORD(v853) = 0;
LABEL_127:
  v114 = 1;
  if ( v869 > 0 )
    v114 = v869;
  v115 = v114;
  v116 = -(int)(v16 >> 2) & 3;
  v117 = v116 + 3;
  if ( (unsigned int)(v116 + 3) < 5 )
    v117 = 5;
  v118 = v869 - 1;
  if ( v869 <= 0 )
    v118 = 0;
  if ( v117 > v118 )
  {
    LODWORD(v863) = 0;
    v126 = 0;
    goto LABEL_145;
  }
  if ( (_DWORD)v116 )
  {
    v119 = *(_DWORD *)v16 == -1;
    if ( (_DWORD)v116 == 1 )
    {
      v845 = 1;
    }
    else
    {
      if ( *(_DWORD *)(v16 + 4) == -1 )
        ++v119;
      if ( (_DWORD)v116 != 2 )
      {
        if ( *(_DWORD *)(v16 + 8) == -1 )
          ++v119;
        v845 = 3;
      }
    }
  }
  else
  {
    v119 = 0;
    v845 = 0;
  }
  v120 = v115 - v116;
  v121 = 0;
  v122 = (const __m128i *)(v16 + 4 * v116);
  v123 = 0;
  do
  {
    v124 = _mm_load_si128(v122);
    ++v123;
    ++v122;
    v121 = _mm_sub_epi32(v121, _mm_cmpeq_epi32(v124, (__m128i)-1LL));
  }
  while ( v120 >> 2 > v123 );
  v125 = _mm_add_epi32(v121, _mm_srli_si128(v121, 8));
  si128 = _mm_srli_si128(v125, 4);
  LODWORD(v863) = v119 + _mm_cvtsi128_si32(_mm_add_epi32(v125, si128));
  v126 = (v120 & 0xFFFFFFFC) + v845;
  if ( (v120 & 0xFFFFFFFC) != v120 )
  {
LABEL_145:
    if ( *(_DWORD *)(v16 + 4LL * v126) == -1 )
      LODWORD(v863) = (_DWORD)v863 + 1;
    if ( v869 > v126 + 1 )
    {
      if ( *(_DWORD *)(v16 + 4LL * (v126 + 1)) == -1 )
        LODWORD(v863) = (_DWORD)v863 + 1;
      if ( v869 > v126 + 2 )
      {
        if ( *(_DWORD *)(v16 + 4LL * (v126 + 2)) == -1 )
          LODWORD(v863) = (_DWORD)v863 + 1;
        if ( v869 > v126 + 3 )
        {
          if ( *(_DWORD *)(v16 + 4LL * (v126 + 3)) == -1 )
            LODWORD(v863) = (_DWORD)v863 + 1;
          if ( v869 > v126 + 4 )
          {
            if ( *(_DWORD *)(v16 + 4LL * (v126 + 4)) == -1 )
              LODWORD(v863) = (_DWORD)v863 + 1;
            v127 = v126 + 5;
            if ( v869 > v127 && *(_DWORD *)(v16 + 4LL * v127) == -1 )
              LODWORD(v863) = (_DWORD)v863 + 1;
          }
        }
      }
    }
  }
LABEL_162:
  v872 = (CoinModel *)s;
  if ( a10 < (int)v870 )
    sprintf(s, "%d blocks found (reduced to %d) - %d columns, %d rows in master", v870, a10, (_DWORD)v853, (_DWORD)v863);
  else
    sprintf(s, "%d blocks found - %d columns, %d rows in master", v870, (_DWORD)v853, (_DWORD)v863);
  v128 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)v866 + 7), 28, v867);
  v133 = CoinMessageHandler::operator<<(v128, (__int64)v872, v129, v130, v131, v132, v808.m128i_i64[0]);
  CoinMessageHandler::operator<<(v133, 0, *(double *)si128.m128i_i64);
  if ( (_DWORD)v870 && a10 < (int)v870 )
  {
    if ( v873[0] > 0 )
    {
      v134 = (int *)v15;
      v135 = v15 + 4LL * (unsigned int)(v873[0] - 1) + 4;
      do
      {
        if ( *v134 >= 0 )
          *v134 %= a10;
        ++v134;
      }
      while ( v134 != (int *)v135 );
    }
    if ( v869 > 0 )
    {
      v136 = (int *)v16;
      v137 = v16 + 4LL * (unsigned int)(v869 - 1) + 4;
      do
      {
        if ( *v136 >= 0 )
          *v136 %= a10;
        ++v136;
      }
      while ( v136 != (int *)v137 );
    }
    LODWORD(v870) = a10;
  }
  v138 = 8 * v835;
  v858 = (double *)operator new[](8 * v835);
  v139 = 8 * v836;
  v857 = (double *)operator new[](8 * v836);
  v856 = (double *)operator new[](v139);
  v140 = (double *)operator new[](v138);
  v865 = (double *)operator new[](v138);
  if ( (_DWORD)v870 )
  {
    v622 = v870 + 7;
    v623 = v140;
    if ( (int)v870 / 8 > 0 )
    {
      si128.m128i_i64[0] = 0;
      v624 = (unsigned int)((int)v870 / 8 - 1);
      do
      {
        *(_OWORD *)v623 = 0;
        v623 += 4;
        *((_OWORD *)v623 - 1) = 0;
      }
      while ( v623 != &v140[4 * v624 + 4] );
      v623 = &v140[4 * (int)v624 + 4];
    }
    switch ( (int)v870 % 8 )
    {
      case 1:
        goto LABEL_803;
      case 2:
        goto LABEL_802;
      case 3:
        goto LABEL_801;
      case 4:
        goto LABEL_800;
      case 5:
        goto LABEL_799;
      case 6:
        goto LABEL_798;
      case 7:
        *((_DWORD *)v623 + 6) = 0;
LABEL_798:
        *((_DWORD *)v623 + 5) = 0;
LABEL_799:
        *((_DWORD *)v623 + 4) = 0;
LABEL_800:
        *((_DWORD *)v623 + 3) = 0;
LABEL_801:
        *((_DWORD *)v623 + 2) = 0;
LABEL_802:
        *((_DWORD *)v623 + 1) = 0;
LABEL_803:
        *(_DWORD *)v623 = 0;
        if ( v873[0] <= 0 )
          goto LABEL_804;
        goto LABEL_179;
      default:
        if ( v873[0] <= 0 )
          goto LABEL_804;
        goto LABEL_179;
    }
  }
  if ( v873[0] <= 0 )
  {
LABEL_194:
    if ( v869 <= 0 )
    {
LABEL_877:
      v162 = 0;
      goto LABEL_205;
    }
LABEL_195:
    v150 = v865;
    v151 = v869;
    v152 = 0;
    do
    {
      v153 = *(int *)(v16 + 4 * v152);
      if ( (int)v153 >= 0 )
        ++*((_DWORD *)v150 + v153);
      ++v152;
    }
    while ( v151 > (int)v152 );
    goto LABEL_199;
  }
LABEL_179:
  v141 = (int *)v15;
  v142 = (int *)v15;
  v143 = v15 + 4LL * (unsigned int)(v873[0] - 1) + 4;
  do
  {
    v144 = *v142;
    if ( (int)v144 >= 0 )
      ++*((_DWORD *)v140 + v144);
    ++v142;
  }
  while ( v142 != (int *)v143 );
  v145 = (unsigned int)(v870 - 1) + 1LL;
  do
  {
    while ( *v141 != -2 )
    {
      if ( ++v141 == v142 )
        goto LABEL_193;
    }
    if ( (int)v870 <= 0 )
    {
      v149 = -4;
      v148 = -1;
    }
    else
    {
      v146 = v873[0];
      v147 = 0;
      v148 = -1;
      do
      {
        if ( *((_DWORD *)v140 + v147) < v146 )
        {
          v146 = *((_DWORD *)v140 + v147);
          v148 = v147;
        }
        ++v147;
      }
      while ( v147 != v145 );
      v149 = 4LL * v148;
    }
    *v141++ = v148;
    ++*(_DWORD *)((char *)v140 + v149);
  }
  while ( v141 != v142 );
LABEL_193:
  if ( !(_DWORD)v870 )
    goto LABEL_194;
  v622 = v870 + 7;
LABEL_804:
  if ( (v870 & 0x80000000) == 0LL )
    v622 = v870;
  v625 = v622 >> 3;
  if ( v625 <= 0 )
  {
    v629 = v865;
  }
  else
  {
    si128.m128i_i64[0] = 0;
    v626 = (unsigned int)(v625 - 1);
    v627 = &v865[4 * v626 + 4];
    v628 = v865;
    do
    {
      *(_OWORD *)v628 = 0;
      v628 += 4;
      *((_OWORD *)v628 - 1) = 0;
    }
    while ( v628 != v627 );
    v629 = &v865[4 * (int)v626 + 4];
  }
  switch ( (int)v870 % 8 )
  {
    case 1:
      goto LABEL_817;
    case 2:
      goto LABEL_816;
    case 3:
      goto LABEL_815;
    case 4:
      goto LABEL_814;
    case 5:
      goto LABEL_813;
    case 6:
      goto LABEL_812;
    case 7:
      *((_DWORD *)v629 + 6) = 0;
LABEL_812:
      *((_DWORD *)v629 + 5) = 0;
LABEL_813:
      *((_DWORD *)v629 + 4) = 0;
LABEL_814:
      *((_DWORD *)v629 + 3) = 0;
LABEL_815:
      *((_DWORD *)v629 + 2) = 0;
LABEL_816:
      *((_DWORD *)v629 + 1) = 0;
LABEL_817:
      *(_DWORD *)v629 = 0;
      break;
    default:
      break;
  }
  if ( v869 > 0 )
    goto LABEL_195;
LABEL_199:
  if ( (int)v870 <= 0 )
    goto LABEL_877;
  v154 = nullptr;
  LODWORD(v871) = 0;
  v864 = (CoinPackedMatrix *)((unsigned int)(v870 - 1) + 1LL);
  do
  {
    sprintf(
      (char *)v872,
      "Block %d has %d columns and %d rows",
      (_DWORD)v154,
      *((_DWORD *)v140 + (_QWORD)v154),
      *((_DWORD *)v865 + (_QWORD)v154));
    v155 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)v866 + 7), 29, v867);
    v160 = CoinMessageHandler::operator<<(v155, (__int64)v872, v156, v157, v158, v159, v808.m128i_i64[0]);
    CoinMessageHandler::operator<<(v160, 0, *(double *)si128.m128i_i64);
    v161 = *((_DWORD *)v865 + (_QWORD)v154) + 2 * *((_DWORD *)v140 + (_QWORD)v154);
    if ( (int)v871 >= v161 )
      v161 = (int)v871;
    v154 = (CoinPackedMatrix *)((char *)v154 + 1);
    LODWORD(v871) = v161;
  }
  while ( v154 != v864 );
  v162 = 10 * v161;
LABEL_205:
  if ( 4 * (v869 + 2 * v873[0]) >= v162 && 10 * (int)v863 <= v869 || a9 > 2 )
  {
    v861 = (CoinPackedMatrix *)&v885;
    v871 = (CoinMessages *)v891;
    std::string::string();
    CoinStructuredModel::addColumnBlock(v866, (int)v853, (const std::string *)v891);
    v867 = (CoinMessages *)&std::string::_Rep::_S_empty_rep_storage;
    if ( (_UNKNOWN *)(v891[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v694 = _InterlockedExchangeAdd((volatile signed __int32 *)(v891[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v694 = *(_DWORD *)(v891[0] - 8LL);
        *(_DWORD *)(v891[0] - 8LL) = v694 - 1;
      }
      if ( v694 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    CoinPackedMatrix::CoinPackedMatrix(v861, v848);
    if ( (int)v870 > 0 )
    {
      v163 = 0;
      v864 = (CoinPackedMatrix *)&v887;
      v860 = (char *)v880;
      v862 = (char *)v879;
      LODWORD(v854) = v873[0] - 1;
      do
      {
        sprintf(v862, "row_%d", v163);
        sprintf(v860, "column_%d", v163);
        if ( v873[0] <= 0 )
        {
          LODWORD(v863) = 0;
        }
        else
        {
          v164 = v874;
          v165 = 0;
          v166 = v858;
          v167 = v865;
          v168 = 0;
          v169 = v850;
          v170 = v849;
          v872 = (CoinModel *)v17;
          v171 = (unsigned int)v854 + 1LL;
          do
          {
            if ( *(_DWORD *)(v15 + 4 * v165) == v163 )
            {
              v172 = v168++;
              v164[v172] = v165;
              v166[v172] = a8[v165];
              v140[v172] = v169[v165];
              v167[v172] = v170[v165];
            }
            ++v165;
          }
          while ( v165 != v171 );
          v17 = v872;
          LODWORD(v863) = v168;
        }
        if ( v869 <= 0 )
        {
          LODWORD(v872) = 0;
          v182 = 0;
        }
        else
        {
          v173 = v857;
          v174 = 0;
          v175 = v852;
          v176 = v856;
          v177 = v851;
          v178 = 0;
          v179 = (unsigned int)(v869 - 1) + 1LL;
          do
          {
            if ( *(_DWORD *)(v16 + 4 * v178) == v163 )
            {
              v180 = v175[v178];
              v181 = v174++;
              *((_DWORD *)v17 + v181) = v178;
              v173[v181] = v180;
              v176[v181] = v177[v178];
            }
            ++v178;
          }
          while ( v178 != v179 );
          LODWORD(v872) = v174;
          v182 = v174;
        }
        CoinPackedMatrix::CoinPackedMatrix(v864, v861, v182, (const int *)v17, (int)v863, (const int *)v874);
        CoinPackedMatrix::setDimensions(v864, (int)v872, (int)v863);
        lpsrc = (CoinModel *)operator new(0x2D0u);
        CoinModel::CoinModel(lpsrc, (int)v872, (int)v863, v864, v857, v856, v140, v865, v858);
        CoinModel::setOriginalIndices(lpsrc, (const int *)v17, (const int *)v874);
        v848 = (CoinPackedMatrix *)&v876;
        std::string::string();
        v855 = &v875;
        v863 = (std::string *)&v878;
        std::string::string();
        CoinStructuredModel::addBlock(v866, v863, v871, lpsrc);
        if ( (CoinMessages *)(v878 - 24) != v867 )
        {
          if ( &_pthread_key_create )
          {
            v596 = _InterlockedExchangeAdd((volatile signed __int32 *)(v878 - 8), 0xFFFFFFFF);
          }
          else
          {
            v596 = *(_DWORD *)(v878 - 8);
            *(_DWORD *)(v878 - 8) = v596 - 1;
          }
          if ( v596 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (CoinMessages *)(v891[0] - 24LL) != v867 )
        {
          if ( &_pthread_key_create )
          {
            v595 = _InterlockedExchangeAdd((volatile signed __int32 *)(v891[0] - 8LL), 0xFFFFFFFF);
          }
          else
          {
            v595 = *(_DWORD *)(v891[0] - 8LL);
            *(_DWORD *)(v891[0] - 8LL) = v595 - 1;
          }
          if ( v595 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( v873[0] <= 0 )
        {
          LODWORD(lpsrc) = 0;
          v190 = (int)v872;
          v189 = 0;
        }
        else
        {
          v183 = 0;
          v184 = 0;
          v185 = (int)v872;
          v186 = v874;
          v187 = (unsigned int)v854 + 1LL;
          do
          {
            if ( *(_DWORD *)(v15 + 4 * v183) == -1 )
            {
              v188 = v184++;
              v186[v188] = v183;
            }
            ++v183;
          }
          while ( v183 != v187 );
          LODWORD(v872) = v185;
          LODWORD(lpsrc) = v184;
          v189 = v184;
          v190 = v185;
        }
        CoinPackedMatrix::CoinPackedMatrix(v871, v861, v190, (const int *)v17, v189, (const int *)v874);
        CoinPackedMatrix::setDimensions(v871, (int)v872, (int)lpsrc);
        v191 = (CoinModel *)operator new(0x2D0u);
        v192 = (int)v872;
        v872 = v191;
        CoinModel::CoinModel(v191, v192, (int)v853, v871, nullptr, nullptr, nullptr, nullptr, nullptr);
        CoinModel::setOriginalIndices(v872, (const int *)v17, (const int *)v874);
        std::string::string();
        lpsrc = (CoinModel *)&v877;
        std::string::string();
        CoinStructuredModel::addBlock(v866, lpsrc, v863, v872);
        if ( (CoinMessages *)(v877 - 24) != v867 )
        {
          if ( &_pthread_key_create )
          {
            v598 = _InterlockedExchangeAdd((volatile signed __int32 *)(v877 - 8), 0xFFFFFFFF);
          }
          else
          {
            v598 = *(_DWORD *)(v877 - 8);
            *(_DWORD *)(v877 - 8) = v598 - 1;
          }
          if ( v598 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        if ( (CoinMessages *)(v878 - 24) != v867 )
        {
          if ( &_pthread_key_create )
          {
            v597 = _InterlockedExchangeAdd((volatile signed __int32 *)(v878 - 8), 0xFFFFFFFF);
          }
          else
          {
            v597 = *(_DWORD *)(v878 - 8);
            *(_DWORD *)(v878 - 8) = v597 - 1;
          }
          if ( v597 <= 0 )
            std::string::_Rep::_M_destroy();
        }
        ++v163;
        CoinPackedMatrix::~CoinPackedMatrix(v871);
        CoinPackedMatrix::~CoinPackedMatrix(v864);
      }
      while ( (_DWORD)v870 != v163 );
    }
    if ( v873[0] <= 0 )
    {
      v873[0] = 0;
    }
    else
    {
      v193 = v874;
      v194 = 0;
      v195 = v858;
      v196 = v865;
      v197 = v850;
      v198 = v849;
      v199 = 0;
      v200 = (unsigned int)(v873[0] - 1) + 1LL;
      do
      {
        if ( *(_DWORD *)(v15 + 4 * v199) == -1 )
        {
          v201 = a8[v199];
          v202 = v194++;
          v193[v202] = v199;
          v195[v202] = v201;
          v140[v202] = v197[v199];
          v196[v202] = v198[v199];
        }
        ++v199;
      }
      while ( v199 != v200 );
      v873[0] = v194;
    }
    if ( v869 <= 0 )
    {
      v203 = 0;
    }
    else
    {
      v203 = 0;
      v204 = v857;
      v205 = v852;
      v206 = v851;
      v207 = v873[0];
      v208 = v856;
      v209 = 0;
      v210 = (unsigned int)(v869 - 1) + 1LL;
      do
      {
        if ( *(int *)(v16 + 4 * v209) < 0 )
        {
          v211 = v205[v209];
          v212 = v203++;
          *((_DWORD *)v17 + v212) = v209;
          v204[v212] = v211;
          v208[v212] = v206[v209];
        }
        ++v209;
      }
      while ( v209 != v210 );
      v873[0] = v207;
    }
    operator delete[]((void *)v16);
    operator delete[]((void *)v15);
    v213 = v873[0];
    v214 = v871;
    CoinPackedMatrix::CoinPackedMatrix(v871, v861, v203, (const int *)v17, v873[0], (const int *)v874);
    v873[0] = v213;
    CoinPackedMatrix::setDimensions(v214, v203, v213);
    v215 = (CoinModel *)operator new(0x2D0u);
    CoinModel::CoinModel(v215, v203, v873[0], v214, v857, v856, v140, v865, v858);
    CoinModel::setOriginalIndices(v215, (const int *)v17, (const int *)v874);
    std::string::string();
    v860 = (char *)v880;
    std::string::string();
    CoinStructuredModel::addBlock(v866, (const std::string *)v880, (const std::string *)&v887, v215);
    if ( (CoinMessages *)(v880[0] - 24LL) != v867 )
    {
      if ( &_pthread_key_create )
      {
        v693 = _InterlockedExchangeAdd((volatile signed __int32 *)(v880[0] - 8LL), 0xFFFFFFFF);
      }
      else
      {
        v693 = *(_DWORD *)(v880[0] - 8LL);
        *(_DWORD *)(v880[0] - 8LL) = v693 - 1;
      }
      if ( v693 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( (CoinMessages *)(v887 - 24) != v867 )
    {
      if ( &_pthread_key_create )
      {
        v692 = _InterlockedExchangeAdd((volatile signed __int32 *)(v887 - 8), 0xFFFFFFFF);
      }
      else
      {
        v692 = *(_DWORD *)(v887 - 8);
        *(_DWORD *)(v887 - 8) = v692 - 1;
      }
      if ( v692 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    operator delete[](v17);
    operator delete[](v874);
    operator delete[](v858);
    operator delete[](v140);
    operator delete[](v865);
    operator delete[](v857);
    v216 = v856;
    goto LABEL_249;
  }
  v641 = _mm_load_si128((const __m128i *)&xmmword_29B060);
  v890 = 100;
  v642 = *((CoinMessageHandler **)v866 + 7);
  *(__m128i *)s = v641;
  v643 = (CoinMessageHandler *)CoinMessageHandler::message(v642, 30, v867);
  v648 = CoinMessageHandler::operator<<(v643, (__int64)v872, v644, v645, v646, v647, v808.m128i_i64[0]);
  CoinMessageHandler::operator<<(v648, 0, *(double *)v641.m128i_i64);
  operator delete[]((void *)v16);
  operator delete[]((void *)v15);
  operator delete[](v17);
  operator delete[](v874);
  operator delete[](v858);
  operator delete[](v140);
  operator delete[](v865);
  operator delete[](v857);
  operator delete[](v856);
LABEL_842:
  CoinPackedMatrix::~CoinPackedMatrix(v843);
  LODWORD(v870) = 0;
  return (unsigned int)v870;
}

