__int64 __fastcall ClpPresolve::presolve(ClpPresolve *this, CoinPresolveMatrix *a2)
{
  int v2; // eax
  ClpPresolve *v3; // r15
  CoinPresolveMatrix *v4; // r14
  bool v5; // cc
  bool v6; // zf
  int v7; // r9d
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edi
  __m128i v13; // xmm0
  const __m128i *v14; // rcx
  unsigned int v15; // r10d
  unsigned int v16; // edx
  __m128i si128; // xmm1
  __m128i v18; // xmm0
  unsigned int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // r8d
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // r9d
  int v27; // ecx
  __m128i v28; // xmm0
  const __m128i *v29; // rdx
  unsigned int v30; // r10d
  unsigned int v31; // eax
  __m128i v32; // xmm1
  __m128i v33; // xmm0
  int v34; // edx
  unsigned int v35; // eax
  int v36; // eax
  int v37; // r12d
  const CoinPresolveAction *fixed; // rax
  int v39; // eax
  int *v40; // rcx
  bool v41; // bl
  __int64 v42; // rdx
  int v43; // eax
  _BYTE *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 result; // rax
  int i; // edx
  int v52; // eax
  int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // ebx
  int v57; // eax
  CoinPresolveMatrix *v58; // rbx
  int v59; // ebp
  __int64 v60; // rax
  int v61; // r9d
  int v62; // eax
  int v63; // eax
  unsigned int v64; // ebp
  CoinPresolveMatrix *v65; // r12
  __int64 v66; // rax
  unsigned int v67; // ebx
  int v68; // edx
  __int64 v69; // r9
  int *v70; // rax
  __int64 v71; // r10
  int v72; // edi
  __int64 v73; // r8
  __int64 v74; // rdx
  int v75; // esi
  __int64 v76; // rdx
  __int64 v77; // r8
  int *v78; // rax
  __int64 v79; // r10
  int v80; // edi
  __int64 v81; // r9
  int v82; // esi
  CoinPresolveMatrix *v83; // rax
  CoinPresolveMatrix *v84; // rax
  unsigned __int64 v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rax
  int v89; // edx
  __int64 v90; // rax
  int v91; // r9d
  unsigned __int64 v92; // rdi
  __int64 v93; // rax
  unsigned int v94; // edx
  int v95; // esi
  int v96; // r11d
  __m128i v97; // xmm0
  const __m128i *v98; // rdx
  unsigned int v99; // r10d
  unsigned int v100; // eax
  __m128i v101; // xmm1
  __m128i v102; // xmm0
  unsigned int v103; // eax
  int v104; // r8d
  int v105; // eax
  int v106; // r9d
  unsigned __int64 v107; // rdi
  __int64 v108; // rax
  unsigned int v109; // edx
  int v110; // esi
  __m128i v111; // xmm0
  const __m128i *v112; // rdx
  unsigned int v113; // r11d
  unsigned int v114; // eax
  __m128i v115; // xmm1
  __m128i v116; // xmm0
  unsigned int v117; // eax
  int v118; // eax
  __int64 v119; // rax
  int v120; // r9d
  unsigned __int64 v121; // rdi
  __int64 v122; // rax
  unsigned int v123; // edx
  int v124; // esi
  int v125; // r11d
  __m128i v126; // xmm0
  const __m128i *v127; // rdx
  unsigned int v128; // r10d
  unsigned int v129; // eax
  __m128i v130; // xmm1
  __m128i v131; // xmm0
  unsigned int v132; // eax
  int v133; // r8d
  int v134; // eax
  int v135; // r9d
  unsigned __int64 v136; // rdi
  __int64 v137; // rax
  unsigned int v138; // edx
  int v139; // esi
  __m128i v140; // xmm0
  const __m128i *v141; // rdx
  unsigned int v142; // r11d
  unsigned int v143; // eax
  __m128i v144; // xmm1
  __m128i v145; // xmm0
  unsigned int v146; // eax
  int v147; // eax
  __int64 v148; // rax
  int v149; // r9d
  unsigned __int64 v150; // rdi
  __int64 v151; // rax
  unsigned int v152; // edx
  int v153; // esi
  int v154; // r11d
  __m128i v155; // xmm0
  const __m128i *v156; // rdx
  unsigned int v157; // r10d
  unsigned int v158; // eax
  __m128i v159; // xmm1
  __m128i v160; // xmm0
  unsigned int v161; // eax
  int v162; // r8d
  int v163; // eax
  int v164; // r9d
  unsigned __int64 v165; // rdi
  __int64 v166; // rax
  unsigned int v167; // edx
  int v168; // esi
  __m128i v169; // xmm0
  const __m128i *v170; // rdx
  unsigned int v171; // r11d
  unsigned int v172; // eax
  __m128i v173; // xmm1
  __m128i v174; // xmm0
  unsigned int v175; // eax
  int v176; // eax
  __int64 v177; // rax
  int v178; // r9d
  unsigned __int64 v179; // rdi
  __int64 v180; // rax
  unsigned int v181; // edx
  int v182; // esi
  int v183; // r11d
  __m128i v184; // xmm0
  const __m128i *v185; // rdx
  unsigned int v186; // r10d
  unsigned int v187; // eax
  __m128i v188; // xmm1
  __m128i v189; // xmm0
  unsigned int v190; // eax
  int v191; // r8d
  int v192; // eax
  int v193; // r9d
  unsigned __int64 v194; // rdi
  __int64 v195; // rax
  unsigned int v196; // edx
  int v197; // esi
  __m128i v198; // xmm0
  const __m128i *v199; // rdx
  unsigned int v200; // r11d
  unsigned int v201; // eax
  __m128i v202; // xmm1
  __m128i v203; // xmm0
  unsigned int v204; // eax
  int v205; // eax
  int v206; // eax
  __int64 v207; // rsi
  int v208; // eax
  __int64 v209; // rcx
  __int64 v210; // rsi
  CoinPresolveMatrix *v211; // rbx
  CoinPresolveMatrix *v212; // rsi
  int v213; // ebp
  __int64 v214; // rax
  int *v215; // rcx
  int v216; // ecx
  __int64 v217; // rax
  int v218; // r10d
  unsigned __int64 v219; // r9
  __int64 v220; // rax
  unsigned int v221; // edx
  int v222; // esi
  int v223; // r8d
  __m128i v224; // xmm1
  const __m128i *v225; // rdx
  unsigned int v226; // r11d
  unsigned int v227; // eax
  __m128i v228; // xmm0
  __m128i v229; // xmm1
  int v230; // r8d
  unsigned int v231; // eax
  int v232; // eax
  int v233; // r9d
  unsigned __int64 v234; // rdi
  __int64 v235; // rax
  unsigned int v236; // edx
  __m128i v237; // xmm1
  const __m128i *v238; // rdx
  unsigned int v239; // r10d
  unsigned int v240; // eax
  __m128i v241; // xmm0
  __m128i v242; // xmm1
  unsigned int v243; // eax
  int v244; // eax
  int v245; // esi
  unsigned __int64 v246; // rcx
  __int64 v247; // rax
  unsigned int v248; // edx
  int v249; // r9d
  int v250; // r8d
  __m128i v251; // xmm0
  const __m128i *v252; // rdx
  unsigned int v253; // r10d
  unsigned int v254; // eax
  __m128i v255; // xmm1
  __m128i v256; // xmm0
  int v257; // r8d
  unsigned int v258; // eax
  int v259; // eax
  int v260; // r9d
  unsigned __int64 v261; // rdi
  __int64 v262; // rax
  unsigned int v263; // edx
  int v264; // esi
  int v265; // r11d
  __m128i v266; // xmm0
  const __m128i *v267; // rdx
  unsigned int v268; // r10d
  unsigned int v269; // eax
  __m128i v270; // xmm1
  __m128i v271; // xmm0
  unsigned int v272; // eax
  int v273; // ecx
  int v274; // eax
  int v275; // r9d
  unsigned __int64 v276; // rdi
  __int64 v277; // rax
  unsigned int v278; // edx
  int v279; // esi
  int v280; // r11d
  __m128i v281; // xmm0
  const __m128i *v282; // rdx
  unsigned int v283; // r10d
  unsigned int v284; // eax
  __m128i v285; // xmm1
  __m128i v286; // xmm0
  unsigned int v287; // eax
  int v288; // r8d
  int v289; // eax
  int v290; // r9d
  unsigned __int64 v291; // rdi
  __int64 v292; // rax
  unsigned int v293; // edx
  int v294; // esi
  __m128i v295; // xmm0
  const __m128i *v296; // rdx
  unsigned int v297; // r11d
  unsigned int v298; // eax
  __m128i v299; // xmm1
  __m128i v300; // xmm0
  unsigned int v301; // eax
  int v302; // eax
  int v303; // r9d
  __int64 v304; // rsi
  __int64 v305; // rdi
  __int64 v306; // rax
  __int64 v307; // rax
  int v308; // ecx
  int v309; // esi
  unsigned __int64 v310; // rcx
  __int64 v311; // rax
  unsigned int v312; // edx
  int v313; // r9d
  int v314; // ebp
  __m128i v315; // xmm1
  const __m128i *v316; // rdx
  unsigned int v317; // r8d
  unsigned int v318; // eax
  __m128i v319; // xmm0
  __m128i v320; // xmm1
  int v321; // ebp
  signed int v322; // eax
  int v323; // eax
  __int64 v324; // rax
  int v325; // r12d
  int v326; // ebx
  int v327; // ebx
  CoinPresolveMatrix *v328; // rax
  const CoinPresolveAction *v329; // rdx
  CoinPresolveMatrix *v330; // rax
  const CoinPresolveAction *v331; // rdx
  int v332; // edx
  __int64 v333; // rax
  int v334; // ecx
  int v335; // esi
  unsigned __int64 v336; // rdx
  __int64 v337; // r8
  unsigned int v338; // eax
  int v339; // eax
  int v340; // edi
  __m128i v341; // xmm0
  const __m128i *v342; // r9
  unsigned int v343; // r10d
  unsigned int v344; // r8d
  __m128i v345; // xmm1
  __m128i v346; // xmm0
  int v347; // r8d
  unsigned int v348; // eax
  int v349; // eax
  int v350; // esi
  unsigned __int64 v351; // rdx
  __int64 v352; // rdi
  unsigned int v353; // eax
  bool v354; // cf
  int v355; // eax
  __m128i v356; // xmm0
  const __m128i *v357; // r9
  unsigned int v358; // r10d
  unsigned int v359; // edi
  __m128i v360; // xmm1
  __m128i v361; // xmm0
  int v362; // eax
  __int64 v363; // rax
  int v364; // ebx
  int v365; // esi
  char v366; // r12
  unsigned __int64 v367; // rcx
  __int64 v368; // rax
  unsigned int v369; // edx
  int v370; // r9d
  int v371; // r8d
  __m128i v372; // xmm1
  const __m128i *v373; // rdx
  unsigned int v374; // r10d
  unsigned int v375; // eax
  __m128i v376; // xmm0
  __m128i v377; // xmm1
  int v378; // r8d
  unsigned int v379; // r9d
  int v380; // r9d
  int v381; // edi
  unsigned __int64 v382; // rsi
  __int64 v383; // rax
  unsigned int v384; // edx
  int v385; // r10d
  int v386; // r9d
  __m128i v387; // xmm1
  const __m128i *v388; // rdx
  unsigned int v389; // r11d
  unsigned int v390; // eax
  __m128i v391; // xmm0
  __m128i v392; // xmm1
  unsigned int v393; // r10d
  int v394; // ecx
  int v395; // r10d
  int v396; // r9d
  unsigned __int64 v397; // rdi
  __int64 v398; // rax
  unsigned int v399; // edx
  int v400; // esi
  int v401; // r11d
  __m128i v402; // xmm1
  const __m128i *v403; // rdx
  unsigned int v404; // r10d
  unsigned int v405; // eax
  __m128i v406; // xmm0
  __m128i v407; // xmm1
  unsigned int v408; // eax
  int v409; // r8d
  int v410; // eax
  int v411; // r9d
  unsigned __int64 v412; // rdi
  __int64 v413; // rax
  unsigned int v414; // edx
  int v415; // esi
  __m128i v416; // xmm1
  const __m128i *v417; // rdx
  unsigned int v418; // r10d
  unsigned int v419; // eax
  __m128i v420; // xmm0
  __m128i v421; // xmm1
  unsigned int v422; // eax
  int v423; // eax
  int v424; // edi
  int v425; // ebx
  unsigned __int64 v426; // rsi
  __int64 v427; // rax
  unsigned int v428; // edx
  int v429; // ecx
  int v430; // r9d
  __m128i v431; // xmm1
  const __m128i *v432; // rdx
  unsigned int v433; // r10d
  unsigned int v434; // eax
  __m128i v435; // xmm0
  __m128i v436; // xmm1
  int v437; // r9d
  unsigned int v438; // ecx
  int v439; // ecx
  int v440; // edi
  int v441; // ebp
  unsigned __int64 v442; // rsi
  __int64 v443; // rax
  unsigned int v444; // edx
  int v445; // ecx
  int v446; // r9d
  __m128i v447; // xmm1
  const __m128i *v448; // rdx
  unsigned int v449; // r10d
  unsigned int v450; // eax
  __m128i v451; // xmm0
  __m128i v452; // xmm1
  int v453; // r9d
  unsigned int v454; // ecx
  int v455; // ecx
  __int64 v456; // rax
  int v457; // ecx
  int v458; // esi
  unsigned __int64 v459; // rdx
  __int64 v460; // r8
  unsigned int v461; // eax
  int v462; // eax
  int v463; // edi
  __m128i v464; // xmm0
  const __m128i *v465; // r9
  unsigned int v466; // r10d
  unsigned int v467; // r8d
  __m128i v468; // xmm1
  __m128i v469; // xmm0
  int v470; // r8d
  unsigned int v471; // eax
  int v472; // eax
  int v473; // esi
  unsigned __int64 v474; // rdx
  __int64 v475; // rdi
  unsigned int v476; // eax
  int v477; // eax
  __m128i v478; // xmm0
  const __m128i *v479; // r9
  unsigned int v480; // r10d
  unsigned int v481; // edi
  __m128i v482; // xmm1
  __m128i v483; // xmm0
  int v484; // eax
  int v485; // r9d
  unsigned __int64 v486; // rdi
  __int64 v487; // rdx
  unsigned int v488; // eax
  int v489; // eax
  int v490; // r8d
  __m128i v491; // xmm0
  const __m128i *v492; // rsi
  unsigned int v493; // r10d
  unsigned int v494; // edx
  __m128i v495; // xmm1
  __m128i v496; // xmm0
  int v497; // r8d
  unsigned int v498; // eax
  int v499; // eax
  int v500; // r9d
  unsigned __int64 v501; // rdi
  __int64 v502; // rdx
  unsigned int v503; // eax
  int v504; // eax
  __m128i v505; // xmm0
  const __m128i *v506; // rsi
  unsigned int v507; // r10d
  unsigned int v508; // edx
  __m128i v509; // xmm1
  __m128i v510; // xmm0
  int v511; // eax
  int v512; // r9d
  unsigned __int64 v513; // rdx
  __int64 v514; // rsi
  unsigned int v515; // eax
  int v516; // eax
  int v517; // r8d
  __m128i v518; // xmm0
  const __m128i *v519; // rdi
  unsigned int v520; // r11d
  unsigned int v521; // esi
  __m128i v522; // xmm1
  __m128i v523; // xmm0
  int v524; // r8d
  unsigned int v525; // eax
  int v526; // eax
  int v527; // r9d
  unsigned __int64 v528; // rdx
  __int64 v529; // rsi
  unsigned int v530; // eax
  int v531; // eax
  __m128i v532; // xmm0
  const __m128i *v533; // rdi
  unsigned int v534; // r11d
  unsigned int v535; // esi
  __m128i v536; // xmm1
  __m128i v537; // xmm0
  int v538; // eax
  int v539; // r9d
  unsigned __int64 v540; // rdi
  __int64 v541; // rdx
  unsigned int v542; // eax
  int v543; // eax
  int v544; // ecx
  __m128i v545; // xmm0
  const __m128i *v546; // rsi
  unsigned int v547; // r10d
  unsigned int v548; // edx
  __m128i v549; // xmm1
  __m128i v550; // xmm0
  unsigned int v551; // eax
  int v552; // r8d
  int v553; // eax
  int v554; // edi
  unsigned __int64 v555; // rsi
  __int64 v556; // rdx
  unsigned int v557; // eax
  int v558; // eax
  int v559; // r9d
  __m128i v560; // xmm0
  const __m128i *v561; // rcx
  unsigned int v562; // r10d
  unsigned int v563; // edx
  __m128i v564; // xmm1
  __m128i v565; // xmm0
  unsigned int v566; // eax
  int v567; // ecx
  int v568; // eax
  int v569; // r9d
  unsigned __int64 v570; // rdi
  __int64 v571; // rdx
  unsigned int v572; // eax
  int v573; // eax
  int v574; // ecx
  __m128i v575; // xmm0
  const __m128i *v576; // rsi
  unsigned int v577; // r10d
  unsigned int v578; // edx
  __m128i v579; // xmm1
  __m128i v580; // xmm0
  unsigned int v581; // eax
  int v582; // r8d
  int v583; // eax
  int v584; // edi
  unsigned __int64 v585; // rsi
  __int64 v586; // rax
  unsigned int v587; // edx
  int v588; // r9d
  int v589; // edx
  __m128i v590; // xmm0
  const __m128i *v591; // rcx
  unsigned int v592; // r10d
  unsigned int v593; // eax
  __m128i v594; // xmm1
  __m128i v595; // xmm0
  int v596; // ecx
  unsigned int v597; // eax
  int v598; // eax
  int v599; // esi
  unsigned __int64 v600; // rcx
  __int64 v601; // rdx
  unsigned int v602; // eax
  int v603; // eax
  int v604; // edi
  __m128i v605; // xmm0
  const __m128i *v606; // r10
  unsigned int v607; // r9d
  unsigned int v608; // edx
  __m128i v609; // xmm1
  __m128i v610; // xmm0
  unsigned int v611; // eax
  int v612; // r8d
  int v613; // eax
  int v614; // edi
  unsigned __int64 v615; // rsi
  __int64 v616; // rax
  unsigned int v617; // edx
  int v618; // edx
  int v619; // r10d
  __m128i v620; // xmm0
  const __m128i *v621; // r11
  unsigned int v622; // r9d
  unsigned int v623; // eax
  __m128i v624; // xmm1
  __m128i v625; // xmm0
  int v626; // ecx
  unsigned int v627; // eax
  int v628; // eax
  __int64 v629; // rax
  int v630; // r12d
  int v631; // ecx
  unsigned __int64 v632; // rdx
  __int64 v633; // rdi
  unsigned int v634; // eax
  int v635; // esi
  int v636; // eax
  __m128i v637; // xmm0
  const __m128i *v638; // r8
  unsigned int v639; // r9d
  unsigned int v640; // edi
  __m128i v641; // xmm1
  __m128i v642; // xmm0
  int v643; // r8d
  unsigned int v644; // eax
  int v645; // eax
  int v646; // ecx
  unsigned __int64 v647; // rdx
  __int64 v648; // rsi
  unsigned int v649; // eax
  int v650; // eax
  __m128i v651; // xmm0
  const __m128i *v652; // rdi
  unsigned int v653; // r9d
  unsigned int v654; // esi
  __m128i v655; // xmm1
  __m128i v656; // xmm0
  int v657; // eax
  __int64 v658; // r8
  double v659; // xmm9_8
  double v660; // xmm14_8
  __int64 v661; // rbp
  __int64 v662; // r15
  __int64 v663; // rcx
  __int64 v664; // rax
  int v665; // r10d
  __int64 v666; // rsi
  double v667; // xmm4_8
  double v668; // xmm5_8
  double v669; // xmm1_8
  char v670; // di
  double v671; // xmm7_8
  double v672; // xmm2_8
  double v673; // xmm1_8
  char v674; // cl
  __int64 v675; // r11
  __int64 v676; // rbx
  int v677; // edx
  __int64 v678; // rax
  __int64 v679; // r13
  int v680; // edi
  __int64 v681; // rsi
  int v682; // eax
  double v683; // xmm12_8
  double v684; // xmm8_8
  int v685; // r14d
  __int64 v686; // rdi
  int v687; // eax
  double v688; // xmm6_8
  double v689; // xmm0_8
  double v690; // xmm0_8
  double v691; // xmm1_8
  double v692; // xmm3_8
  double v693; // xmm1_8
  double v694; // xmm0_8
  double v695; // xmm11_8
  double v696; // xmm1_8
  double v697; // xmm0_8
  double v698; // xmm3_8
  int v699; // ecx
  unsigned __int64 v700; // rdx
  __int64 v701; // r8
  unsigned int v702; // eax
  int v703; // eax
  int v704; // esi
  __m128i v705; // xmm0
  const __m128i *v706; // r9
  unsigned int v707; // edi
  unsigned int v708; // r8d
  __m128i v709; // xmm1
  __m128i v710; // xmm0
  int v711; // r8d
  unsigned int v712; // eax
  int v713; // eax
  int v714; // esi
  unsigned __int64 v715; // rdx
  __int64 v716; // rdi
  unsigned int v717; // eax
  int v718; // eax
  int v719; // ecx
  __m128i v720; // xmm0
  const __m128i *v721; // r9
  unsigned int v722; // r10d
  unsigned int v723; // edi
  __m128i v724; // xmm1
  __m128i v725; // xmm0
  int v726; // ecx
  unsigned int v727; // eax
  int v728; // eax
  __int64 v729; // rax
  int v730; // r9d
  int v731; // edx
  int v732; // edi
  unsigned __int64 v733; // rsi
  __int64 v734; // rdx
  unsigned int v735; // eax
  int v736; // ecx
  int v737; // eax
  __m128i v738; // xmm0
  const __m128i *v739; // r8
  unsigned int v740; // r9d
  unsigned int v741; // edx
  __m128i v742; // xmm1
  __m128i v743; // xmm0
  unsigned int v744; // eax
  int v745; // r8d
  int v746; // eax
  int v747; // esi
  unsigned __int64 v748; // rcx
  __int64 v749; // rdx
  unsigned int v750; // eax
  int v751; // eax
  __m128i v752; // xmm0
  const __m128i *v753; // r9
  unsigned int v754; // edi
  unsigned int v755; // edx
  __m128i v756; // xmm1
  __m128i v757; // xmm0
  int v758; // eax
  int v759; // ecx
  unsigned __int64 v760; // rdx
  __int64 v761; // r8
  unsigned int v762; // eax
  int v763; // eax
  int v764; // esi
  __m128i v765; // xmm0
  const __m128i *v766; // r9
  unsigned int v767; // edi
  unsigned int v768; // r8d
  __m128i v769; // xmm1
  __m128i v770; // xmm0
  int v771; // r8d
  unsigned int v772; // eax
  int v773; // eax
  int v774; // esi
  unsigned __int64 v775; // rdx
  __int64 v776; // rdi
  unsigned int v777; // eax
  int v778; // eax
  int v779; // ecx
  __m128i v780; // xmm0
  const __m128i *v781; // r9
  unsigned int v782; // r10d
  unsigned int v783; // edi
  __m128i v784; // xmm1
  __m128i v785; // xmm0
  int v786; // ecx
  unsigned int v787; // eax
  int v788; // eax
  double v789; // xmm0_8
  double v790; // xmm0_8
  double v791; // xmm1_8
  double v792; // xmm11_8
  double v793; // xmm3_8
  double v794; // xmm1_8
  double v795; // xmm3_8
  double v796; // xmm13_8
  double v797; // xmm13_8
  double v798; // xmm11_8
  double v799; // xmm0_8
  double v800; // xmm3_8
  double v801; // xmm1_8
  double v802; // xmm0_8
  int v803; // eax
  unsigned __int64 j; // rax
  int v805; // esi
  __int64 k; // rcx
  __int64 v807; // r13
  __suseconds_t tv_usec; // xmm1_8
  __time_t *v809; // rax
  __time_t tv_sec; // xmm0_8
  __time_t *v811; // rax
  double v812; // xmm11_8
  double v813; // xmm3_8
  bool v814; // r11
  int v815; // [rsp+Ch] [rbp-24Ch]
  int v816; // [rsp+10h] [rbp-248h]
  int v817; // [rsp+14h] [rbp-244h]
  int v818; // [rsp+18h] [rbp-240h]
  int v819; // [rsp+1Ch] [rbp-23Ch]
  int v820; // [rsp+20h] [rbp-238h]
  bool v821; // [rsp+27h] [rbp-231h]
  bool v822; // [rsp+27h] [rbp-231h]
  int v823; // [rsp+28h] [rbp-230h]
  double v824; // [rsp+28h] [rbp-230h]
  double v825; // [rsp+28h] [rbp-230h]
  CoinPresolveMatrix *v826; // [rsp+30h] [rbp-228h]
  double v827; // [rsp+30h] [rbp-228h]
  int v828; // [rsp+38h] [rbp-220h]
  __int64 v829; // [rsp+38h] [rbp-220h]
  int v830; // [rsp+40h] [rbp-218h]
  int v831; // [rsp+44h] [rbp-214h]
  __int64 v832; // [rsp+48h] [rbp-210h]
  __int64 v833; // [rsp+50h] [rbp-208h]
  __int64 v834; // [rsp+58h] [rbp-200h]
  CoinPresolveMatrix *v835; // [rsp+60h] [rbp-1F8h]
  __int64 v836; // [rsp+68h] [rbp-1F0h]
  __int64 v837; // [rsp+70h] [rbp-1E8h]
  __int64 v838; // [rsp+78h] [rbp-1E0h]
  __int64 v839; // [rsp+80h] [rbp-1D8h]
  __int64 v840; // [rsp+88h] [rbp-1D0h]
  __int64 v841; // [rsp+90h] [rbp-1C8h]
  double v842; // [rsp+98h] [rbp-1C0h]
  double v843; // [rsp+98h] [rbp-1C0h]
  double v844; // [rsp+98h] [rbp-1C0h]
  double v845; // [rsp+A0h] [rbp-1B8h]
  double v846; // [rsp+A0h] [rbp-1B8h]
  __int64 v847; // [rsp+A8h] [rbp-1B0h]
  __int64 v848; // [rsp+B0h] [rbp-1A8h]
  int v849; // [rsp+B8h] [rbp-1A0h]
  int v850; // [rsp+BCh] [rbp-19Ch]
  __int64 v851; // [rsp+C0h] [rbp-198h]
  double v852; // [rsp+D0h] [rbp-188h]
  double v853; // [rsp+D8h] [rbp-180h]
  __int64 v854; // [rsp+E0h] [rbp-178h]
  ClpPresolve *v855; // [rsp+E8h] [rbp-170h]
  CoinPresolveMatrix *v856; // [rsp+F0h] [rbp-168h]
  double v857; // [rsp+F8h] [rbp-160h]
  int v858; // [rsp+100h] [rbp-158h]
  int v859; // [rsp+104h] [rbp-154h]
  double v860; // [rsp+108h] [rbp-150h]
  double v861; // [rsp+110h] [rbp-148h]
  __int64 v862; // [rsp+158h] [rbp-100h]
  int v863; // [rsp+170h] [rbp-E8h]
  int v864; // [rsp+174h] [rbp-E4h]
  _DWORD v865[2]; // [rsp+178h] [rbp-E0h]
  __m128d v866; // [rsp+180h] [rbp-D8h] BYREF
  struct rusage usage; // [rsp+190h] [rbp-C8h] BYREF

  v2 = 3;
  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)a2 + 88) < 3;
  *((_QWORD *)this + 7) = 0;
  if ( !v5 )
    v2 = *((_DWORD *)a2 + 88);
  v6 = *((_BYTE *)a2 + 321) == 0;
  *((_DWORD *)a2 + 88) = v2;
  if ( !v6 )
  {
    v7 = *((_DWORD *)a2 + 1);
    if ( v7 <= 0 )
    {
      v22 = *(_DWORD *)a2;
      v20 = 0;
      if ( v22 > 0 )
        goto LABEL_22;
      goto LABEL_1105;
    }
    v8 = *((_QWORD *)a2 + 36);
    v9 = -(int)(v8 >> 2) & 3;
    v10 = v9 + 3;
    if ( (unsigned int)(v9 + 3) < 5 )
      v10 = 5;
    if ( v7 - 1 < v10 )
    {
      v19 = 0;
      v20 = 0;
    }
    else
    {
      if ( (_DWORD)v9 )
      {
        v11 = 1;
        v12 = *(_DWORD *)v8 == 0;
        if ( (_DWORD)v9 != 1 )
        {
          v11 = 2;
          v12 += *(_DWORD *)(v8 + 4) == 0;
          if ( (_DWORD)v9 != 2 )
          {
            v11 = 3;
            v12 += *(_DWORD *)(v8 + 8) == 0;
          }
        }
      }
      else
      {
        v11 = 0;
        v12 = 0;
      }
      v13 = 0;
      v14 = (const __m128i *)(v8 + 4 * v9);
      v15 = v7 - v9;
      v16 = 0;
      do
      {
        si128 = _mm_load_si128(v14);
        ++v16;
        ++v14;
        v13 = _mm_sub_epi32(v13, _mm_cmpeq_epi32(si128, (__m128i)0LL));
      }
      while ( v16 < v15 >> 2 );
      v18 = _mm_add_epi32(v13, _mm_srli_si128(v13, 8));
      v19 = (v15 & 0xFFFFFFFC) + v11;
      v20 = v12 + _mm_cvtsi128_si32(_mm_add_epi32(v18, _mm_srli_si128(v18, 4)));
      if ( v15 == (v15 & 0xFFFFFFFC) )
      {
LABEL_21:
        v22 = *(_DWORD *)v4;
        if ( *(int *)v4 > 0 )
        {
LABEL_22:
          v23 = *((_QWORD *)v4 + 6);
          v24 = -(int)(v23 >> 2) & 3;
          v25 = v24 + 3;
          if ( (unsigned int)(v24 + 3) < 5 )
            v25 = 5;
          if ( v22 - 1 < v25 )
          {
            v35 = 0;
            v34 = 0;
          }
          else
          {
            if ( (_DWORD)v24 )
            {
              v26 = 1;
              v27 = *(_DWORD *)v23 == 0;
              if ( (_DWORD)v24 != 1 )
              {
                v26 = 2;
                v27 += *(_DWORD *)(v23 + 4) == 0;
                if ( (_DWORD)v24 != 2 )
                {
                  v26 = 3;
                  v27 += *(_DWORD *)(v23 + 8) == 0;
                }
              }
            }
            else
            {
              v26 = 0;
              v27 = 0;
            }
            v28 = 0;
            v29 = (const __m128i *)(v23 + 4 * v24);
            v30 = v22 - v24;
            v31 = 0;
            do
            {
              v32 = _mm_load_si128(v29);
              ++v31;
              ++v29;
              v28 = _mm_sub_epi32(v28, _mm_cmpeq_epi32(v32, (__m128i)0LL));
            }
            while ( v31 < v30 >> 2 );
            v33 = _mm_add_epi32(v28, _mm_srli_si128(v28, 8));
            v34 = v27 + _mm_cvtsi128_si32(_mm_add_epi32(v33, _mm_srli_si128(v33, 4)));
            v35 = (v30 & 0xFFFFFFFC) + v26;
            if ( v30 == (v30 & 0xFFFFFFFC) )
              goto LABEL_38;
          }
          v34 += *(_DWORD *)(v23 + 4LL * (int)v35) == 0;
          if ( v22 > (int)(v35 + 1) )
          {
            v34 += *(_DWORD *)(v23 + 4LL * (int)(v35 + 1)) == 0;
            if ( v22 > (int)(v35 + 2) )
            {
              v34 += *(_DWORD *)(v23 + 4LL * (int)(v35 + 2)) == 0;
              if ( v22 > (int)(v35 + 3) )
              {
                v34 += *(_DWORD *)(v23 + 4LL * (int)(v35 + 3)) == 0;
                if ( v22 > (int)(v35 + 4) )
                {
                  v34 += *(_DWORD *)(v23 + 4LL * (int)(v35 + 4)) == 0;
                  v36 = v35 + 5;
                  if ( v22 > v36 )
                    v34 += *(_DWORD *)(v23 + 4LL * v36) == 0;
                }
              }
            }
          }
LABEL_38:
          printf("CoinPresolve initial state %d empty rows and %d empty columns\n", v20, v34);
          goto LABEL_39;
        }
LABEL_1105:
        v34 = 0;
        goto LABEL_38;
      }
    }
    v20 += *(_DWORD *)(v8 + 4LL * (int)v19) == 0;
    if ( v7 > (int)(v19 + 1) )
    {
      v20 += *(_DWORD *)(v8 + 4LL * (int)(v19 + 1)) == 0;
      if ( v7 > (int)(v19 + 2) )
      {
        v20 += *(_DWORD *)(v8 + 4LL * (int)(v19 + 2)) == 0;
        if ( v7 > (int)(v19 + 3) )
        {
          v20 += *(_DWORD *)(v8 + 4LL * (int)(v19 + 3)) == 0;
          if ( v7 > (int)(v19 + 4) )
          {
            v20 += *(_DWORD *)(v8 + 4LL * (int)(v19 + 4)) == 0;
            v21 = v19 + 5;
            if ( v7 > v21 )
              v20 += *(_DWORD *)(v8 + 4LL * v21) == 0;
          }
        }
      }
    }
    goto LABEL_21;
  }
LABEL_39:
  v37 = *((_DWORD *)v3 + 24);
  *((_DWORD *)v4 + 86) = 0;
  if ( v37 >= 0 )
    goto LABEL_40;
  v569 = *(_DWORD *)v4;
  if ( *(int *)v4 <= 0 )
  {
    v582 = 0;
    goto LABEL_807;
  }
  v570 = *((_QWORD *)v4 + 6);
  v571 = -(int)(v570 >> 2) & 3;
  v572 = v571 + 3;
  if ( (unsigned int)(v571 + 3) < 5 )
    v572 = 5;
  if ( v569 - 1 < v572 )
  {
    v581 = 0;
    v582 = 0;
LABEL_801:
    v582 += *(_DWORD *)(v570 + 4LL * (int)v581) == 0;
    if ( v569 > (int)(v581 + 1) )
    {
      v582 += *(_DWORD *)(v570 + 4LL * (int)(v581 + 1)) == 0;
      if ( v569 > (int)(v581 + 2) )
      {
        v582 += *(_DWORD *)(v570 + 4LL * (int)(v581 + 2)) == 0;
        if ( v569 > (int)(v581 + 3) )
        {
          v582 += *(_DWORD *)(v570 + 4LL * (int)(v581 + 3)) == 0;
          if ( v569 > (int)(v581 + 4) )
          {
            v582 += *(_DWORD *)(v570 + 4LL * (int)(v581 + 4)) == 0;
            v583 = v581 + 5;
            if ( v569 > v583 )
              v582 += *(_DWORD *)(v570 + 4LL * v583) == 0;
          }
        }
      }
    }
    goto LABEL_807;
  }
  if ( (_DWORD)v571 )
  {
    v573 = 1;
    v574 = *(_DWORD *)v570 == 0;
    if ( (_DWORD)v571 != 1 )
    {
      v573 = 2;
      v574 += *(_DWORD *)(v570 + 4) == 0;
      if ( (_DWORD)v571 != 2 )
      {
        v573 = 3;
        v574 += *(_DWORD *)(v570 + 8) == 0;
      }
    }
  }
  else
  {
    v573 = 0;
    v574 = 0;
  }
  v575 = 0;
  v576 = (const __m128i *)(v570 + 4 * v571);
  v577 = v569 - v571;
  v578 = 0;
  do
  {
    v579 = _mm_load_si128(v576);
    ++v578;
    ++v576;
    v575 = _mm_sub_epi32(v575, _mm_cmpeq_epi32(v579, (__m128i)0LL));
  }
  while ( v578 < v577 >> 2 );
  v580 = _mm_add_epi32(v575, _mm_srli_si128(v575, 8));
  v581 = (v577 & 0xFFFFFFFC) + v573;
  v582 = v574 + _mm_cvtsi128_si32(_mm_add_epi32(v580, _mm_srli_si128(v580, 4)));
  if ( v577 != (v577 & 0xFFFFFFFC) )
    goto LABEL_801;
LABEL_807:
  v584 = *((_DWORD *)v4 + 1);
  if ( v584 <= 0 )
  {
    v596 = 0;
  }
  else
  {
    v585 = *((_QWORD *)v4 + 36);
    v586 = -(int)(v585 >> 2) & 3;
    v587 = v586 + 3;
    if ( (unsigned int)(v586 + 3) < 5 )
      v587 = 5;
    if ( v584 - 1 < v587 )
    {
      v597 = 0;
      v596 = 0;
    }
    else
    {
      if ( (_DWORD)v586 )
      {
        v588 = 1;
        v589 = *(_DWORD *)v585 == 0;
        if ( (_DWORD)v586 != 1 )
        {
          v588 = 2;
          v589 += *(_DWORD *)(v585 + 4) == 0;
          if ( (_DWORD)v586 != 2 )
          {
            v588 = 3;
            v589 += *(_DWORD *)(v585 + 8) == 0;
          }
        }
      }
      else
      {
        v588 = 0;
        v589 = 0;
      }
      v590 = 0;
      v591 = (const __m128i *)(v585 + 4 * v586);
      v592 = v584 - v586;
      v593 = 0;
      do
      {
        v594 = _mm_load_si128(v591);
        ++v593;
        ++v591;
        v590 = _mm_sub_epi32(v590, _mm_cmpeq_epi32(v594, (__m128i)0LL));
      }
      while ( v593 < v592 >> 2 );
      v595 = _mm_add_epi32(v590, _mm_srli_si128(v590, 8));
      v596 = v589 + _mm_cvtsi128_si32(_mm_add_epi32(v595, _mm_srli_si128(v595, 4)));
      v597 = (v592 & 0xFFFFFFFC) + v588;
      if ( v592 == (v592 & 0xFFFFFFFC) )
        goto LABEL_824;
    }
    v596 += *(_DWORD *)(v585 + 4LL * (int)v597) == 0;
    if ( v584 > (int)(v597 + 1) )
    {
      v596 += *(_DWORD *)(v585 + 4LL * (int)(v597 + 1)) == 0;
      if ( v584 > (int)(v597 + 2) )
      {
        v596 += *(_DWORD *)(v585 + 4LL * (int)(v597 + 2)) == 0;
        if ( v584 > (int)(v597 + 3) )
        {
          v596 += *(_DWORD *)(v585 + 4LL * (int)(v597 + 3)) == 0;
          if ( v584 > (int)(v597 + 4) )
          {
            v596 += *(_DWORD *)(v585 + 4LL * (int)(v597 + 4)) == 0;
            v598 = v597 + 5;
            if ( v584 > v598 )
              v596 += *(_DWORD *)(v585 + 4LL * v598) == 0;
          }
        }
      }
    }
  }
LABEL_824:
  printf("%c loop %d %d empty rows, %d empty columns\n", 65, 0, v596, v582);
LABEL_40:
  fixed = (const CoinPresolveAction *)make_fixed(v4, *((const CoinPresolveAction **)v3 + 7));
  *((_QWORD *)v3 + 7) = fixed;
  *((_QWORD *)v3 + 7) = testRedundant(v4, fixed);
  v39 = *((_DWORD *)v3 + 24);
  if ( v39 >= 0 )
    goto LABEL_41;
  v539 = *(_DWORD *)v4;
  if ( *(int *)v4 <= 0 )
  {
    v552 = 0;
    goto LABEL_771;
  }
  v540 = *((_QWORD *)v4 + 6);
  v541 = -(int)(v540 >> 2) & 3;
  v542 = v541 + 3;
  if ( (unsigned int)(v541 + 3) < 5 )
    v542 = 5;
  if ( v539 - 1 < v542 )
  {
    v551 = 0;
    v552 = 0;
LABEL_765:
    v552 += *(_DWORD *)(v540 + 4LL * (int)v551) == 0;
    if ( v539 > (int)(v551 + 1) )
    {
      v552 += *(_DWORD *)(v540 + 4LL * (int)(v551 + 1)) == 0;
      if ( v539 > (int)(v551 + 2) )
      {
        v552 += *(_DWORD *)(v540 + 4LL * (int)(v551 + 2)) == 0;
        if ( v539 > (int)(v551 + 3) )
        {
          v552 += *(_DWORD *)(v540 + 4LL * (int)(v551 + 3)) == 0;
          if ( v539 > (int)(v551 + 4) )
          {
            v552 += *(_DWORD *)(v540 + 4LL * (int)(v551 + 4)) == 0;
            v553 = v551 + 5;
            if ( v539 > v553 )
              v552 += *(_DWORD *)(v540 + 4LL * v553) == 0;
          }
        }
      }
    }
    goto LABEL_771;
  }
  if ( (_DWORD)v541 )
  {
    v543 = 1;
    v544 = *(_DWORD *)v540 == 0;
    if ( (_DWORD)v541 != 1 )
    {
      v543 = 2;
      v544 += *(_DWORD *)(v540 + 4) == 0;
      if ( (_DWORD)v541 != 2 )
      {
        v543 = 3;
        v544 += *(_DWORD *)(v540 + 8) == 0;
      }
    }
  }
  else
  {
    v543 = 0;
    v544 = 0;
  }
  v545 = 0;
  v546 = (const __m128i *)(v540 + 4 * v541);
  v547 = v539 - v541;
  v548 = 0;
  do
  {
    v549 = _mm_load_si128(v546);
    ++v548;
    ++v546;
    v545 = _mm_sub_epi32(v545, _mm_cmpeq_epi32(v549, (__m128i)0LL));
  }
  while ( v548 < v547 >> 2 );
  v550 = _mm_add_epi32(v545, _mm_srli_si128(v545, 8));
  v551 = (v547 & 0xFFFFFFFC) + v543;
  v552 = v544 + _mm_cvtsi128_si32(_mm_add_epi32(v550, _mm_srli_si128(v550, 4)));
  if ( v547 != (v547 & 0xFFFFFFFC) )
    goto LABEL_765;
LABEL_771:
  v554 = *((_DWORD *)v4 + 1);
  if ( v554 <= 0 )
  {
    v567 = 0;
  }
  else
  {
    v555 = *((_QWORD *)v4 + 36);
    v556 = -(int)(v555 >> 2) & 3;
    v557 = v556 + 3;
    if ( (unsigned int)(v556 + 3) < 5 )
      v557 = 5;
    if ( v554 - 1 < v557 )
    {
      v566 = 0;
      v567 = 0;
    }
    else
    {
      if ( (_DWORD)v556 )
      {
        v558 = 1;
        v559 = *(_DWORD *)v555 == 0;
        if ( (_DWORD)v556 != 1 )
        {
          v558 = 2;
          v559 += *(_DWORD *)(v555 + 4) == 0;
          if ( (_DWORD)v556 != 2 )
          {
            v558 = 3;
            v559 += *(_DWORD *)(v555 + 8) == 0;
          }
        }
      }
      else
      {
        v558 = 0;
        v559 = 0;
      }
      v560 = 0;
      v561 = (const __m128i *)(v555 + 4 * v556);
      v562 = v554 - v556;
      v563 = 0;
      do
      {
        v564 = _mm_load_si128(v561);
        ++v563;
        ++v561;
        v560 = _mm_sub_epi32(v560, _mm_cmpeq_epi32(v564, (__m128i)0LL));
      }
      while ( v563 < v562 >> 2 );
      v565 = _mm_add_epi32(v560, _mm_srli_si128(v560, 8));
      v566 = (v562 & 0xFFFFFFFC) + v558;
      v567 = v559 + _mm_cvtsi128_si32(_mm_add_epi32(v565, _mm_srli_si128(v565, 4)));
      if ( v562 == (v562 & 0xFFFFFFFC) )
        goto LABEL_788;
    }
    v567 += *(_DWORD *)(v555 + 4LL * (int)v566) == 0;
    if ( v554 > (int)(v566 + 1) )
    {
      v567 += *(_DWORD *)(v555 + 4LL * (int)(v566 + 1)) == 0;
      if ( v554 > (int)(v566 + 2) )
      {
        v567 += *(_DWORD *)(v555 + 4LL * (int)(v566 + 2)) == 0;
        if ( v554 > (int)(v566 + 3) )
        {
          v567 += *(_DWORD *)(v555 + 4LL * (int)(v566 + 3)) == 0;
          if ( v554 > (int)(v566 + 4) )
          {
            v567 += *(_DWORD *)(v555 + 4LL * (int)(v566 + 4)) == 0;
            v568 = v566 + 5;
            if ( v554 > v568 )
              v567 += *(_DWORD *)(v555 + 4LL * v568) == 0;
          }
        }
      }
    }
  }
LABEL_788:
  printf("%c loop %d %d empty rows, %d empty columns\n", 66, 0, v567, v552);
  v39 = *((_DWORD *)v3 + 24);
LABEL_41:
  v821 = 1;
  if ( (v39 & 0x200) == 0 )
    v821 = *(_QWORD *)(*((_QWORD *)v3 + 2) + 272LL) == 0;
  v40 = (int *)*((unsigned __int8 *)v4 + 440);
  v41 = v821;
  if ( (_BYTE)v40 )
    v41 = 0;
  if ( (v39 & 1) != 0 )
    v41 = 0;
  v42 = *((unsigned int *)v4 + 109);
  v822 = v41;
  if ( *((_DWORD *)v4 + 86) )
    goto LABEL_63;
  v816 = v39 & 2;
  v818 = v39 & 4;
  v819 = v39 & 8;
  v820 = v39 & 0x20;
  v815 = v39 & 0x40;
  v817 = v39 & 0x10;
  v831 = v39 & 0x80;
  v830 = v39 & 0x100;
  if ( (v39 & 0x1000) != 0 )
  {
    v42 = (unsigned int)v42 | 0x10;
    *((_DWORD *)v4 + 109) = v42;
    v39 = *((_DWORD *)v3 + 24);
  }
  *((_DWORD *)v4 + 109) = v42 | (16 * v39) & 0x60000;
  v43 = *((_DWORD *)v3 + 17);
  if ( (_BYTE)v40 )
  {
    *((_DWORD *)v4 + 104) = 0;
    if ( v43 > 0 )
    {
      v44 = *((_BYTE **)v4 + 50);
      LODWORD(v42) = 0;
      do
      {
        while ( (*v44 & 2) == 0 )
        {
          v45 = *((int *)v4 + 104);
          v46 = *((_QWORD *)v4 + 51);
          ++v44;
          *((_DWORD *)v4 + 104) = v45 + 1;
          *(_DWORD *)(v46 + 4 * v45) = v42;
          v42 = (unsigned int)(v42 + 1);
          v43 = *((_DWORD *)v3 + 17);
          if ( (int)v42 >= v43 )
            goto LABEL_55;
        }
        v42 = (unsigned int)(v42 + 1);
        ++v44;
      }
      while ( (int)v42 < v43 );
    }
LABEL_55:
    v40 = (int *)*((unsigned int *)v3 + 16);
    *((_DWORD *)v4 + 94) = 0;
    if ( (int)v40 > 0 )
    {
      v42 = *((_QWORD *)v4 + 45);
      v47 = 0;
      while ( (*(_BYTE *)v42 & 2) != 0 )
      {
LABEL_60:
        ++v47;
        ++v42;
        if ( v47 >= (int)v40 )
          goto LABEL_73;
      }
      while ( 1 )
      {
        v48 = *((int *)v4 + 94);
        v49 = *((_QWORD *)v4 + 46);
        ++v42;
        *((_DWORD *)v4 + 94) = v48 + 1;
        *(_DWORD *)(v49 + 4 * v48) = v47++;
        v40 = (int *)*((unsigned int *)v3 + 16);
        if ( v47 >= (int)v40 )
          break;
        if ( (*(_BYTE *)v42 & 2) != 0 )
          goto LABEL_60;
      }
    }
  }
  else
  {
    if ( v43 > 0 )
    {
      v40 = *((int **)v4 + 51);
      for ( i = 0; i < v43; ++i )
      {
        *v40 = i;
        v43 = *((_DWORD *)v3 + 17);
        ++v40;
      }
    }
    v42 = *((unsigned int *)v3 + 16);
    *((_DWORD *)v4 + 104) = v43;
    if ( (int)v42 > 0 )
    {
      v40 = *((int **)v4 + 46);
      v52 = 0;
      do
      {
        *v40 = v52;
        v42 = *((unsigned int *)v3 + 16);
        ++v52;
        ++v40;
      }
      while ( (int)v42 > v52 );
    }
    *((_DWORD *)v4 + 94) = v42;
  }
LABEL_73:
  v53 = *((_DWORD *)v3 + 24);
  if ( !v831 )
  {
    if ( (v53 & 0x200) != 0 )
      *((_DWORD *)v4 + 109) |= 1u;
    v54 = dupcol_action::presolve(v4, *((CoinPresolveMatrix **)v3 + 7), (const CoinPresolveAction *)v42);
    v53 = *((_DWORD *)v3 + 24);
    *((_QWORD *)v3 + 7) = v54;
    if ( v53 < 0 )
    {
      v759 = *(_DWORD *)v4;
      if ( *(int *)v4 <= 0 )
      {
        v771 = 0;
        goto LABEL_1086;
      }
      v760 = *((_QWORD *)v4 + 6);
      v761 = -(int)(v760 >> 2) & 3;
      v762 = v761 + 3;
      if ( (unsigned int)(v761 + 3) < 5 )
        v762 = 5;
      if ( v759 - 1 < v762 )
      {
        v771 = 0;
        v772 = 0;
      }
      else
      {
        if ( (_DWORD)v761 )
        {
          v763 = 1;
          v764 = *(_DWORD *)v760 == 0;
          if ( (_DWORD)v761 != 1 )
          {
            v763 = 2;
            v764 += *(_DWORD *)(v760 + 4) == 0;
            if ( (_DWORD)v761 != 2 )
            {
              v763 = 3;
              v764 += *(_DWORD *)(v760 + 8) == 0;
            }
          }
        }
        else
        {
          v764 = 0;
          v763 = 0;
        }
        v765 = 0;
        v766 = (const __m128i *)(v760 + 4 * v761);
        v767 = v759 - v761;
        v768 = 0;
        do
        {
          v769 = _mm_load_si128(v766);
          ++v768;
          ++v766;
          v765 = _mm_sub_epi32(v765, _mm_cmpeq_epi32(v769, (__m128i)0LL));
        }
        while ( v768 < v767 >> 2 );
        v770 = _mm_add_epi32(v765, _mm_srli_si128(v765, 8));
        v771 = v764 + _mm_cvtsi128_si32(_mm_add_epi32(v770, _mm_srli_si128(v770, 4)));
        v772 = (v767 & 0xFFFFFFFC) + v763;
        if ( v767 == (v767 & 0xFFFFFFFC) )
        {
LABEL_1086:
          v774 = *((_DWORD *)v4 + 1);
          if ( v774 <= 0 )
          {
            v786 = 0;
          }
          else
          {
            v775 = *((_QWORD *)v4 + 36);
            v776 = -(int)(v775 >> 2) & 3;
            v777 = v776 + 3;
            if ( (unsigned int)(v776 + 3) < 5 )
              v777 = 5;
            if ( v774 - 1 < v777 )
            {
              v786 = 0;
              v787 = 0;
            }
            else
            {
              if ( (_DWORD)v776 )
              {
                v778 = 1;
                v779 = *(_DWORD *)v775 == 0;
                if ( (_DWORD)v776 != 1 )
                {
                  v778 = 2;
                  v779 += *(_DWORD *)(v775 + 4) == 0;
                  if ( (_DWORD)v776 != 2 )
                  {
                    v778 = 3;
                    v779 += *(_DWORD *)(v775 + 8) == 0;
                  }
                }
              }
              else
              {
                v779 = 0;
                v778 = 0;
              }
              v780 = 0;
              v781 = (const __m128i *)(v775 + 4 * v776);
              v782 = v774 - v776;
              v783 = 0;
              do
              {
                v784 = _mm_load_si128(v781);
                ++v783;
                ++v781;
                v780 = _mm_sub_epi32(v780, _mm_cmpeq_epi32(v784, (__m128i)0LL));
              }
              while ( v783 < v782 >> 2 );
              v785 = _mm_add_epi32(v780, _mm_srli_si128(v780, 8));
              v786 = _mm_cvtsi128_si32(_mm_add_epi32(v785, _mm_srli_si128(v785, 4))) + v779;
              v787 = (v782 & 0xFFFFFFFC) + v778;
              if ( v782 == (v782 & 0xFFFFFFFC) )
                goto LABEL_1103;
            }
            v786 += *(_DWORD *)(v775 + 4LL * (int)v787) == 0;
            if ( v774 > (int)(v787 + 1) )
            {
              v786 += *(_DWORD *)(v775 + 4LL * (int)(v787 + 1)) == 0;
              if ( v774 > (int)(v787 + 2) )
              {
                v786 += *(_DWORD *)(v775 + 4LL * (int)(v787 + 2)) == 0;
                if ( v774 > (int)(v787 + 3) )
                {
                  v786 += *(_DWORD *)(v775 + 4LL * (int)(v787 + 3)) == 0;
                  if ( v774 > (int)(v787 + 4) )
                  {
                    v786 += *(_DWORD *)(v775 + 4LL * (int)(v787 + 4)) == 0;
                    v788 = v787 + 5;
                    if ( v774 > v788 )
                      v786 += *(_DWORD *)(v775 + 4LL * v788) == 0;
                  }
                }
              }
            }
          }
LABEL_1103:
          printf("%c loop %d %d empty rows, %d empty columns\n", 67, 0, v786, v771);
          v53 = *((_DWORD *)v3 + 24);
          goto LABEL_77;
        }
      }
      v771 += *(_DWORD *)(v760 + 4LL * (int)v772) == 0;
      if ( v759 > (int)(v772 + 1) )
      {
        v771 += *(_DWORD *)(v760 + 4LL * (int)(v772 + 1)) == 0;
        if ( v759 > (int)(v772 + 2) )
        {
          v771 += *(_DWORD *)(v760 + 4LL * (int)(v772 + 2)) == 0;
          if ( v759 > (int)(v772 + 3) )
          {
            v771 += *(_DWORD *)(v760 + 4LL * (int)(v772 + 3)) == 0;
            if ( v759 > (int)(v772 + 4) )
            {
              v771 += *(_DWORD *)(v760 + 4LL * (int)(v772 + 4)) == 0;
              v773 = v772 + 5;
              if ( v759 > v773 )
                v771 += *(_DWORD *)(v760 + 4LL * v773) == 0;
            }
          }
        }
      }
      goto LABEL_1086;
    }
  }
LABEL_77:
  if ( (v53 & 0x800) != 0 )
  {
    v835 = (CoinPresolveMatrix *)twoxtwo_action::presolve(
                                   v4,
                                   *((CoinPresolveMatrix **)v3 + 7),
                                   (const CoinPresolveAction *)v42);
    *((_QWORD *)v3 + 7) = v835;
    if ( v830 )
    {
LABEL_996:
      v53 = *((_DWORD *)v3 + 24);
      goto LABEL_81;
    }
    if ( (*((_BYTE *)v3 + 97) & 8) == 0
      || (v658 = *((_QWORD *)v4 + 37),
          v836 = *((_QWORD *)v4 + 5),
          v837 = *((_QWORD *)v4 + 6),
          v838 = *((_QWORD *)v4 + 7),
          v829 = *((_QWORD *)v4 + 8),
          v832 = *((_QWORD *)v4 + 9),
          v847 = *((_QWORD *)v4 + 39),
          v833 = *((_QWORD *)v4 + 11),
          v834 = *((_QWORD *)v4 + 12),
          v839 = *((_QWORD *)v4 + 35),
          v848 = *((_QWORD *)v4 + 36),
          v840 = *((_QWORD *)v4 + 13),
          v841 = *((_QWORD *)v4 + 14),
          *(int *)v4 <= 0) )
    {
LABEL_80:
      v55 = duprow_action::presolve(v4, v835, (const CoinPresolveAction *)v42);
      v53 = *((_DWORD *)v3 + 24);
      *((_QWORD *)v3 + 7) = v55;
      if ( v53 >= 0 )
        goto LABEL_81;
      v699 = *(_DWORD *)v4;
      if ( *(int *)v4 <= 0 )
      {
        v711 = 0;
        goto LABEL_978;
      }
      v700 = *((_QWORD *)v4 + 6);
      v701 = -(int)(v700 >> 2) & 3;
      v702 = v701 + 3;
      if ( (unsigned int)(v701 + 3) < 5 )
        v702 = 5;
      if ( v699 - 1 < v702 )
      {
        v711 = 0;
        v712 = 0;
      }
      else
      {
        if ( (_DWORD)v701 )
        {
          v703 = 1;
          v704 = *(_DWORD *)v700 == 0;
          if ( (_DWORD)v701 != 1 )
          {
            v703 = 2;
            v704 += *(_DWORD *)(v700 + 4) == 0;
            if ( (_DWORD)v701 != 2 )
            {
              v703 = 3;
              v704 += *(_DWORD *)(v700 + 8) == 0;
            }
          }
        }
        else
        {
          v704 = 0;
          v703 = 0;
        }
        v705 = 0;
        v706 = (const __m128i *)(v700 + 4 * v701);
        v707 = v699 - v701;
        v708 = 0;
        do
        {
          v709 = _mm_load_si128(v706);
          ++v708;
          ++v706;
          v705 = _mm_sub_epi32(v705, _mm_cmpeq_epi32(v709, (__m128i)0LL));
        }
        while ( v708 < v707 >> 2 );
        v710 = _mm_add_epi32(v705, _mm_srli_si128(v705, 8));
        v711 = v704 + _mm_cvtsi128_si32(_mm_add_epi32(v710, _mm_srli_si128(v710, 4)));
        v712 = (v707 & 0xFFFFFFFC) + v703;
        if ( v707 == (v707 & 0xFFFFFFFC) )
        {
LABEL_978:
          v714 = *((_DWORD *)v4 + 1);
          if ( v714 <= 0 )
          {
            v726 = 0;
          }
          else
          {
            v715 = *((_QWORD *)v4 + 36);
            v716 = -(int)(v715 >> 2) & 3;
            v717 = v716 + 3;
            if ( (unsigned int)(v716 + 3) < 5 )
              v717 = 5;
            if ( v714 - 1 < v717 )
            {
              v726 = 0;
              v727 = 0;
            }
            else
            {
              if ( (_DWORD)v716 )
              {
                v718 = 1;
                v719 = *(_DWORD *)v715 == 0;
                if ( (_DWORD)v716 != 1 )
                {
                  v718 = 2;
                  v719 += *(_DWORD *)(v715 + 4) == 0;
                  if ( (_DWORD)v716 != 2 )
                  {
                    v718 = 3;
                    v719 += *(_DWORD *)(v715 + 8) == 0;
                  }
                }
              }
              else
              {
                v719 = 0;
                v718 = 0;
              }
              v720 = 0;
              v721 = (const __m128i *)(v715 + 4 * v716);
              v722 = v714 - v716;
              v723 = 0;
              do
              {
                v724 = _mm_load_si128(v721);
                ++v723;
                ++v721;
                v720 = _mm_sub_epi32(v720, _mm_cmpeq_epi32(v724, (__m128i)0LL));
              }
              while ( v723 < v722 >> 2 );
              v725 = _mm_add_epi32(v720, _mm_srli_si128(v720, 8));
              v726 = _mm_cvtsi128_si32(_mm_add_epi32(v725, _mm_srli_si128(v725, 4))) + v719;
              v727 = (v722 & 0xFFFFFFFC) + v718;
              if ( v722 == (v722 & 0xFFFFFFFC) )
                goto LABEL_995;
            }
            v726 += *(_DWORD *)(v715 + 4LL * (int)v727) == 0;
            if ( v714 > (int)(v727 + 1) )
            {
              v726 += *(_DWORD *)(v715 + 4LL * (int)(v727 + 1)) == 0;
              if ( v714 > (int)(v727 + 2) )
              {
                v726 += *(_DWORD *)(v715 + 4LL * (int)(v727 + 2)) == 0;
                if ( v714 > (int)(v727 + 3) )
                {
                  v726 += *(_DWORD *)(v715 + 4LL * (int)(v727 + 3)) == 0;
                  if ( v714 > (int)(v727 + 4) )
                  {
                    v726 += *(_DWORD *)(v715 + 4LL * (int)(v727 + 4)) == 0;
                    v728 = v727 + 5;
                    if ( v714 > v728 )
                      v726 += *(_DWORD *)(v715 + 4LL * v728) == 0;
                  }
                }
              }
            }
          }
LABEL_995:
          printf("%c loop %d %d empty rows, %d empty columns\n", 68, 0, v726, v711);
          goto LABEL_996;
        }
      }
      v711 += *(_DWORD *)(v700 + 4LL * (int)v712) == 0;
      if ( v699 > (int)(v712 + 1) )
      {
        v711 += *(_DWORD *)(v700 + 4LL * (int)(v712 + 1)) == 0;
        if ( v699 > (int)(v712 + 2) )
        {
          v711 += *(_DWORD *)(v700 + 4LL * (int)(v712 + 2)) == 0;
          if ( v699 > (int)(v712 + 3) )
          {
            v711 += *(_DWORD *)(v700 + 4LL * (int)(v712 + 3)) == 0;
            if ( v699 > (int)(v712 + 4) )
            {
              v711 += *(_DWORD *)(v700 + 4LL * (int)(v712 + 4)) == 0;
              v713 = v712 + 5;
              if ( v699 > v713 )
                v711 += *(_DWORD *)(v700 + 4LL * v713) == 0;
            }
          }
        }
      }
      goto LABEL_978;
    }
    v855 = v3;
    v854 = (unsigned int)(*(_DWORD *)v4 - 1) + 1LL;
    v659 = 0.0;
    v660 = 0.0;
    v661 = 0;
    v662 = *((_QWORD *)v4 + 38);
    v856 = v4;
    while ( 1 )
    {
      if ( *(_DWORD *)(v837 + 4 * v661) != 2 )
        goto LABEL_923;
      v663 = *(int *)(v836 + 4 * v661);
      v664 = *(int *)(v838 + 4 * v663);
      v665 = *(_DWORD *)(v836 + 4 * v661);
      v42 = 4 * v663;
      v849 = *(_DWORD *)(v838 + 4 * v663);
      if ( *(_DWORD *)(v848 + 4 * v664) != 2 )
        goto LABEL_923;
      v666 = *(int *)(v838 + v42 + 4);
      v850 = *(_DWORD *)(v838 + v42 + 4);
      if ( *(_DWORD *)(v848 + 4 * v666) != 2 )
        goto LABEL_923;
      v42 = 8 * v663;
      v667 = *(double *)(v829 + 8 * v663);
      v668 = *(double *)(v841 + 8 * v664);
      v669 = *(double *)(v840 + 8 * v664);
      if ( v669 <= -1.0e30 )
      {
        if ( v668 > 1.0e30 )
          goto LABEL_923;
        v670 = 0;
      }
      else
      {
        if ( v668 <= 1.0e30 )
          goto LABEL_923;
        v670 = 1;
        v668 = -v669;
        v667 = -v667;
      }
      v671 = *(double *)(v829 + v42 + 8);
      v672 = *(double *)(v841 + 8 * v666);
      v673 = *(double *)(v840 + 8 * v666);
      if ( v673 <= -1.0e30 )
      {
        if ( v672 > 1.0e30 )
          goto LABEL_923;
        v674 = 0;
      }
      else
      {
        if ( v672 <= 1.0e30 )
          goto LABEL_923;
        v674 = 1;
        v672 = -v673;
        v671 = -v671;
      }
      v824 = *(double *)(v833 + 8 * v661);
      v827 = *(double *)(v834 + 8 * v661);
      v675 = *(int *)(v839 + 4 * v664);
      v676 = *(int *)(v662 + 4 * v675);
      v677 = *(_DWORD *)(v662 + 4 * v675 + 4);
      v678 = *(_DWORD *)(v839 + 4 * v664) + 1;
      if ( (_DWORD)v676 == (_DWORD)v661 )
      {
        v676 = -1;
        if ( (_DWORD)v661 != v677 )
        {
          if ( !v670 )
            goto LABEL_936;
LABEL_1194:
          v676 = v677;
          v660 = -*(double *)(v658 + 8 * v678);
        }
      }
      else
      {
        v660 = *(double *)(v658 + 8 * v675);
        if ( !v670 )
        {
          if ( (_DWORD)v661 == v677 )
            goto LABEL_937;
LABEL_936:
          v660 = *(double *)(v658 + 8 * v678);
          v676 = v677;
          goto LABEL_937;
        }
        v660 = -v660;
        if ( (_DWORD)v661 != v677 )
          goto LABEL_1194;
      }
LABEL_937:
      v679 = *(int *)(v839 + 4 * v666);
      v680 = *(_DWORD *)(v662 + 4 * v679);
      v681 = *(_DWORD *)(v839 + 4 * v666) + 1;
      v851 = 4 * v679;
      v682 = *(_DWORD *)(v662 + 4 * v679 + 4);
      v858 = v680;
      if ( v680 == (_DWORD)v661 )
        goto LABEL_1191;
      if ( v680 == (_DWORD)v676 )
      {
        v659 = *(double *)(v658 + 8 * v679);
        if ( v674 )
          v659 = -v659;
LABEL_1191:
        v42 = 1;
        if ( (_DWORD)v661 == v682 )
          goto LABEL_944;
        goto LABEL_940;
      }
      v42 = 0;
      if ( (_DWORD)v661 == v682 )
        goto LABEL_923;
LABEL_940:
      if ( (_DWORD)v676 == v682 )
      {
        v659 = *(double *)(v658 + 8 * v681);
        if ( v674 )
          v659 = -v659;
        if ( (_BYTE)v42 )
        {
LABEL_944:
          v683 = *(double *)(v832 + 8 * v661);
          if ( v683 == 0.0 || v683 < 0.0 )
            goto LABEL_923;
          v684 = -1.797693134862316e308;
          v685 = 0;
          v845 = -1.797693134862316e308;
          v686 = 0;
          v842 = 1.797693134862316e308;
          v852 = *(double *)(v833 + 8 * v676);
          v687 = 0;
          v688 = 1.797693134862316e308;
          v853 = *(double *)(v834 + 8 * v676);
          v866 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v852, (__m128d)*(unsigned __int64 *)&v853);
          while ( 1 )
          {
            v689 = v866.m128d_f64[v686];
            if ( fabs(v689) < 1.0e30 )
              break;
            if ( v660 <= 0.0 )
            {
              v814 = 0;
              if ( v660 < 0.0 )
                v814 = v689 > 0.0;
            }
            else
            {
              v814 = v689 < 0.0;
            }
            if ( v659 <= 0.0 )
            {
              v42 = 0;
              if ( v659 < 0.0 )
                LOBYTE(v42) = v689 > 0.0;
            }
            else
            {
              LOBYTE(v42) = v689 < 0.0;
            }
            v690 = 0.0;
            if ( v667 <= 0.0 )
            {
              if ( !v814 )
              {
                v691 = 0.0;
LABEL_1181:
                v813 = v668 - v691;
                v693 = 1.797693134862316e308;
                v692 = v813 / v667;
                goto LABEL_950;
              }
            }
            else if ( !v814 )
            {
              v691 = 0.0;
LABEL_949:
              v692 = -1.797693134862316e308;
              v693 = (v668 - v691) / v667;
              goto LABEL_950;
            }
            v693 = 1.797693134862316e308;
            v692 = -1.797693134862316e308;
LABEL_950:
            if ( v671 > 0.0 )
            {
              if ( !(_BYTE)v42 )
              {
                v694 = (v672 - v690) / v671;
                v695 = -1.797693134862316e308;
                goto LABEL_953;
              }
LABEL_1176:
              v694 = 1.797693134862316e308;
              v695 = -1.797693134862316e308;
              goto LABEL_953;
            }
            if ( (_BYTE)v42 )
              goto LABEL_1176;
            v812 = v672 - v690;
            v694 = 1.797693134862316e308;
            v695 = v812 / v671;
LABEL_953:
            if ( v692 <= v695 + 1.0e-12 )
            {
              if ( v695 > v692 + 1.0e-12 )
              {
                v692 = v695;
                if ( v695 > v824 + 1.0e-12 )
                {
                  v42 = (unsigned int)(1 << v686);
                  v687 |= v42;
                }
              }
            }
            else if ( v692 > v824 + 1.0e-12 )
            {
              v42 = (unsigned int)(1 << v686);
              v685 |= v42;
            }
            if ( v694 - 1.0e-12 <= v693 )
            {
              if ( v693 - 1.0e-12 > v694 )
              {
                v693 = v694;
                if ( v827 - 1.0e-12 > v694 )
                {
                  v42 = (unsigned int)(1 << v686);
                  v687 |= v42;
                }
              }
            }
            else if ( v827 - 1.0e-12 > v693 )
            {
              v42 = (unsigned int)(1 << v686);
              v685 |= v42;
            }
            v684 = fmax(v684, v693);
            v688 = fmin(v688, v692);
            v696 = fmin(v842, v693);
            v842 = v696;
            v697 = fmax(v845, v692);
            v698 = v697;
            v845 = v697;
            if ( v686 == 1 )
            {
              if ( v685 && v687 )
              {
                if ( *(_BYTE *)(v847 + v661) )
                {
                  v843 = v697;
                  v862 = v658;
                  v859 = v665;
                  v861 = v668;
                  v860 = v667;
                  v857 = ceil(v688 - 0.00001);
                  v846 = ceil(v843 - 0.00001);
                  v844 = floor(v696 + 0.00001);
                  v789 = floor(v684 + 0.00001);
                  v658 = v862;
                  v665 = v859;
                  v684 = v789;
                  v668 = v861;
                  v667 = v860;
                  v688 = v857;
                  v698 = v846;
                  v696 = v844;
                }
                if ( v683 >= 0.0 && v827 > v698 && v698 >= v824 && v684 < 1.0e30 )
                  v684 = fmin(v684, v698);
                if ( v683 <= 0.0 && v696 > v824 && v827 >= v696 && v696 > -1.0e30 )
                  v688 = fmax(v688, v696);
                if ( v688 <= v824 + 0.00000001 )
                  v688 = v824;
                if ( v827 - 0.00000001 <= v684 )
                  v684 = v827;
                v790 = (v668 * v671 - v667 * v672) / (v671 * v660 - v659 * v667);
                v791 = (v668 - v790 * v660) / v667;
                v792 = v791 * v683;
                v793 = fmax(v791, (v672 - v659 * v790) / v671);
                v794 = fmin(1.797693134862316e308, v793);
                v795 = fmax(-1.797693134862316e308, v793);
                v825 = *(double *)(v832 + 8 * v676);
                v796 = v825 * v790 + v792;
                if ( v685 == 1 )
                  v797 = (v790 + 1.0) * v825 + (v672 - v659 * (v790 + 1.0)) / v667 * v683 - v796;
                else
                  v797 = v796 - ((v790 - 1.0) * v825 + (v672 - v659 * (v790 - 1.0)) / v667 * v683);
                v863 = v665;
                v798 = fmax((v668 - v852 * v660) / v667, (v672 - v852 * v659) / v671);
                v799 = fmax(v795, v798);
                v800 = fmax((v668 - v853 * v660) / v667, (v672 - v853 * v659) / v671);
                v801 = fmin(fmin(v794, v798), v800);
                v802 = fmax(v799, v800);
                *(double *)(v832 + 8 * v676) = v825 + v797;
                *(double *)(v832 + 8 * v661) = v683 + v797 * (v667 / v660);
                *(double *)(v833 + 8 * v661) = fmax(v688, v801 - fabs(v801) * 1.0e-12);
                *(double *)(v834 + 8 * v661) = fmin(v684, v802 + 1.0e-12 * fabs(v802));
                v865[0] = v665 + 2;
                v864 = *(_DWORD *)(v836 + 4 * v676);
                v803 = *(_DWORD *)(v837 + 4 * v676) + v864;
                usage.ru_utime = 0;
                v865[1] = v803;
                for ( j = 0; j != 8; j += 4LL )
                {
                  v42 = *(int *)((char *)&v863 + j);
                  v805 = v865[j / 4];
                  for ( k = v42; v805 > (int)k; ++k )
                  {
                    if ( v849 == *(_DWORD *)(v838 + 4 * k) )
                      *(__time_t *)((char *)&usage.ru_utime.tv_sec + 2 * j) = *(_QWORD *)(v829 + 8 * k);
                  }
                  while ( v805 > (int)v42 )
                  {
                    if ( v850 == *(_DWORD *)(v838 + 4 * v42) )
                      *(_QWORD *)(v829 + 8 * v42) = *(__time_t *)((char *)&usage.ru_utime.tv_sec + 2 * j);
                    ++v42;
                  }
                }
                v807 = 8 * v679;
                tv_usec = usage.ru_utime.tv_usec;
                v809 = (__time_t *)(v658 + v807);
                tv_sec = usage.ru_utime.tv_sec;
                if ( v858 == (_DWORD)v661 )
                  *v809 = usage.ru_utime.tv_sec;
                else
                  *v809 = usage.ru_utime.tv_usec;
                v811 = (__time_t *)(v658 + v807 + 8);
                if ( (_DWORD)v661 == *(_DWORD *)(v662 + v851 + 4) )
                  *v811 = tv_sec;
                else
                  *v811 = tv_usec;
              }
              goto LABEL_923;
            }
            v686 = 1;
          }
          v42 = 0;
          v690 = v689 * v659 + 0.0;
          v691 = v866.m128d_f64[v686] * v660 + 0.0;
          if ( v667 > 0.0 )
            goto LABEL_949;
          goto LABEL_1181;
        }
      }
LABEL_923:
      if ( v854 == ++v661 )
      {
        v3 = v855;
        v4 = v856;
        goto LABEL_80;
      }
    }
  }
  if ( !v830 )
  {
    v835 = *((CoinPresolveMatrix **)v3 + 7);
    goto LABEL_80;
  }
LABEL_81:
  v56 = v53 & 0x400;
  if ( !v56 )
  {
    v629 = gubrow_action::presolve(v4, *((CoinPresolveMatrix **)v3 + 7), (const CoinPresolveAction *)v42);
    v630 = *((_DWORD *)v3 + 24);
    *((_QWORD *)v3 + 7) = v629;
    if ( v630 < 0 )
    {
      v631 = *(_DWORD *)v4;
      if ( *(int *)v4 <= 0 )
      {
        v643 = 0;
      }
      else
      {
        v632 = *((_QWORD *)v4 + 6);
        v633 = -(int)(v632 >> 2) & 3;
        v634 = v633 + 3;
        if ( (unsigned int)(v633 + 3) < 5 )
          v634 = 5;
        if ( v631 - 1 < v634 )
        {
          v643 = 0;
          v644 = 0;
          goto LABEL_883;
        }
        if ( (_DWORD)v633 )
        {
          v635 = *(_DWORD *)v632 == 0;
          if ( (_DWORD)v633 == 1 )
          {
            v636 = 1;
          }
          else
          {
            v635 += *(_DWORD *)(v632 + 4) == 0;
            if ( (_DWORD)v633 == 2 )
            {
              v636 = 2;
            }
            else
            {
              v636 = 3;
              v635 += *(_DWORD *)(v632 + 8) == 0;
            }
          }
        }
        else
        {
          v635 = 0;
          v636 = 0;
        }
        v637 = 0;
        v638 = (const __m128i *)(v632 + 4 * v633);
        v639 = v631 - v633;
        v640 = 0;
        do
        {
          v641 = _mm_load_si128(v638);
          ++v640;
          ++v638;
          v637 = _mm_sub_epi32(v637, _mm_cmpeq_epi32(v641, (__m128i)0LL));
        }
        while ( v640 < v639 >> 2 );
        v642 = _mm_add_epi32(v637, _mm_srli_si128(v637, 8));
        v643 = v635 + _mm_cvtsi128_si32(_mm_add_epi32(v642, _mm_srli_si128(v642, 4)));
        v644 = (v639 & 0xFFFFFFFC) + v636;
        if ( v639 != (v639 & 0xFFFFFFFC) )
        {
LABEL_883:
          v643 += *(_DWORD *)(v632 + 4LL * (int)v644) == 0;
          if ( v631 > (int)(v644 + 1) )
          {
            v643 += *(_DWORD *)(v632 + 4LL * (int)(v644 + 1)) == 0;
            if ( v631 > (int)(v644 + 2) )
            {
              if ( !*(_DWORD *)(v632 + 4LL * (int)(v644 + 2)) )
                ++v643;
              if ( v631 > (int)(v644 + 3) )
              {
                if ( !*(_DWORD *)(v632 + 4LL * (int)(v644 + 3)) )
                  ++v643;
                if ( v631 > (int)(v644 + 4) )
                {
                  if ( !*(_DWORD *)(v632 + 4LL * (int)(v644 + 4)) )
                    ++v643;
                  v645 = v644 + 5;
                  if ( v631 > v645 )
                    v643 += *(_DWORD *)(v632 + 4LL * v645) == 0;
                }
              }
            }
          }
        }
      }
      v646 = *((_DWORD *)v4 + 1);
      if ( v646 > 0 )
      {
        v647 = *((_QWORD *)v4 + 36);
        v648 = -(int)(v647 >> 2) & 3;
        v649 = v648 + 3;
        if ( (unsigned int)(v648 + 3) < 5 )
          v649 = 5;
        v354 = v646 - 1 < v649;
        v650 = 0;
        if ( v354 )
          goto LABEL_906;
        if ( (_DWORD)v648 )
        {
          v56 = *(_DWORD *)v647 == 0;
          if ( (_DWORD)v648 == 1 )
          {
            v650 = 1;
          }
          else
          {
            v56 += *(_DWORD *)(v647 + 4) == 0;
            if ( (_DWORD)v648 == 2 )
            {
              v650 = 2;
            }
            else
            {
              v650 = 3;
              v56 += *(_DWORD *)(v647 + 8) == 0;
            }
          }
        }
        v651 = 0;
        v652 = (const __m128i *)(v647 + 4 * v648);
        v653 = v646 - v648;
        v654 = 0;
        do
        {
          v655 = _mm_load_si128(v652);
          ++v654;
          ++v652;
          v651 = _mm_sub_epi32(v651, _mm_cmpeq_epi32(v655, (__m128i)0LL));
        }
        while ( v654 < v653 >> 2 );
        v656 = _mm_add_epi32(v651, _mm_srli_si128(v651, 8));
        v56 += _mm_cvtsi128_si32(_mm_add_epi32(v656, _mm_srli_si128(v656, 4)));
        v650 += v653 & 0xFFFFFFFC;
        if ( v653 != (v653 & 0xFFFFFFFC) )
        {
LABEL_906:
          v56 += *(_DWORD *)(v647 + 4LL * v650) == 0;
          if ( v646 > v650 + 1 )
          {
            v56 += *(_DWORD *)(v647 + 4LL * (v650 + 1)) == 0;
            if ( v646 > v650 + 2 )
            {
              if ( !*(_DWORD *)(v647 + 4LL * (v650 + 2)) )
                ++v56;
              if ( v646 > v650 + 3 )
              {
                if ( !*(_DWORD *)(v647 + 4LL * (v650 + 3)) )
                  ++v56;
                if ( v646 > v650 + 4 )
                {
                  if ( !*(_DWORD *)(v647 + 4LL * (v650 + 4)) )
                    ++v56;
                  v657 = v650 + 5;
                  if ( v646 > v657 )
                    v56 += *(_DWORD *)(v647 + 4LL * v657) == 0;
                }
              }
            }
          }
        }
      }
      printf("%c loop %d %d empty rows, %d empty columns\n", 69, 0, v56, v643);
    }
  }
  if ( !v815 )
  {
    v57 = 10;
    v58 = *((CoinPresolveMatrix **)v3 + 7);
    if ( *((int *)v4 + 88) >= 10 )
      v57 = *((_DWORD *)v4 + 88);
    LODWORD(usage.ru_utime.tv_sec) = v57;
    if ( v58 )
    {
      v59 = 4;
      while ( 1 )
      {
        v60 = implied_free_action::presolve(v4, v58, (const CoinPresolveAction *)&usage, v40);
        v61 = *((_DWORD *)v3 + 24);
        *((_QWORD *)v3 + 7) = v60;
        if ( v61 < 0 )
          break;
LABEL_88:
        --v59;
        if ( v58 == (CoinPresolveMatrix *)v60 || !v59 )
          goto LABEL_93;
        v58 = (CoinPresolveMatrix *)v60;
      }
      v599 = *(_DWORD *)v4;
      if ( *(int *)v4 <= 0 )
      {
        v612 = 0;
        goto LABEL_852;
      }
      v600 = *((_QWORD *)v4 + 6);
      v601 = -(int)(v600 >> 2) & 3;
      v602 = v601 + 3;
      if ( (unsigned int)(v601 + 3) < 5 )
        v602 = 5;
      if ( v599 - 1 < v602 )
      {
        v612 = 0;
        v611 = 0;
      }
      else
      {
        if ( (_DWORD)v601 )
        {
          v603 = 1;
          v604 = *(_DWORD *)v600 == 0;
          if ( (_DWORD)v601 != 1 )
          {
            v603 = 2;
            v604 += *(_DWORD *)(v600 + 4) == 0;
            if ( (_DWORD)v601 != 2 )
            {
              v603 = 3;
              v604 += *(_DWORD *)(v600 + 8) == 0;
            }
          }
        }
        else
        {
          v604 = 0;
          v603 = 0;
        }
        v605 = 0;
        v606 = (const __m128i *)(v600 + 4 * v601);
        v607 = v599 - v601;
        v608 = 0;
        do
        {
          v609 = _mm_load_si128(v606);
          ++v608;
          ++v606;
          v605 = _mm_sub_epi32(v605, _mm_cmpeq_epi32(v609, (__m128i)0LL));
        }
        while ( v608 < v607 >> 2 );
        v610 = _mm_add_epi32(v605, _mm_srli_si128(v605, 8));
        v611 = (v607 & 0xFFFFFFFC) + v603;
        v612 = v604 + _mm_cvtsi128_si32(_mm_add_epi32(v610, _mm_srli_si128(v610, 4)));
        if ( v607 == (v607 & 0xFFFFFFFC) )
        {
LABEL_852:
          v614 = *((_DWORD *)v4 + 1);
          if ( v614 <= 0 )
          {
            v626 = 0;
          }
          else
          {
            v615 = *((_QWORD *)v4 + 36);
            v616 = -(int)(v615 >> 2) & 3;
            v617 = v616 + 3;
            if ( (unsigned int)(v616 + 3) < 5 )
              v617 = 5;
            if ( v614 - 1 < v617 )
            {
              v626 = 0;
              v627 = 0;
            }
            else
            {
              if ( (_DWORD)v616 )
              {
                v618 = 1;
                v619 = *(_DWORD *)v615 == 0;
                if ( (_DWORD)v616 != 1 )
                {
                  v618 = 2;
                  v619 += *(_DWORD *)(v615 + 4) == 0;
                  if ( (_DWORD)v616 != 2 )
                  {
                    v618 = 3;
                    v619 += *(_DWORD *)(v615 + 8) == 0;
                  }
                }
              }
              else
              {
                v619 = 0;
                v618 = 0;
              }
              v620 = 0;
              v621 = (const __m128i *)(v615 + 4 * v616);
              v622 = v614 - v616;
              v623 = 0;
              do
              {
                v624 = _mm_load_si128(v621);
                ++v623;
                ++v621;
                v620 = _mm_sub_epi32(v620, _mm_cmpeq_epi32(v624, (__m128i)0LL));
              }
              while ( v623 < v622 >> 2 );
              v625 = _mm_add_epi32(v620, _mm_srli_si128(v620, 8));
              v626 = v619 + _mm_cvtsi128_si32(_mm_add_epi32(v625, _mm_srli_si128(v625, 4)));
              v627 = (v622 & 0xFFFFFFFC) + v618;
              if ( v622 == (v622 & 0xFFFFFFFC) )
                goto LABEL_869;
            }
            v626 += *(_DWORD *)(v615 + 4LL * (int)v627) == 0;
            if ( v614 > (int)(v627 + 1) )
            {
              v626 += *(_DWORD *)(v615 + 4LL * (int)(v627 + 1)) == 0;
              if ( v614 > (int)(v627 + 2) )
              {
                v626 += *(_DWORD *)(v615 + 4LL * (int)(v627 + 2)) == 0;
                if ( v614 > (int)(v627 + 3) )
                {
                  v626 += *(_DWORD *)(v615 + 4LL * (int)(v627 + 3)) == 0;
                  if ( v614 > (int)(v627 + 4) )
                  {
                    v626 += *(_DWORD *)(v615 + 4LL * (int)(v627 + 4)) == 0;
                    v628 = v627 + 5;
                    if ( v614 > v628 )
                      v626 += *(_DWORD *)(v615 + 4LL * v628) == 0;
                  }
                }
              }
            }
          }
LABEL_869:
          printf("%c loop %d %d empty rows, %d empty columns\n", 108, 0, v626, v612);
          v60 = *((_QWORD *)v3 + 7);
          goto LABEL_88;
        }
      }
      v612 += *(_DWORD *)(v600 + 4LL * (int)v611) == 0;
      if ( v599 > (int)(v611 + 1) )
      {
        v612 += *(_DWORD *)(v600 + 4LL * (int)(v611 + 1)) == 0;
        if ( v599 > (int)(v611 + 2) )
        {
          v612 += *(_DWORD *)(v600 + 4LL * (int)(v611 + 2)) == 0;
          if ( v599 > (int)(v611 + 3) )
          {
            v612 += *(_DWORD *)(v600 + 4LL * (int)(v611 + 3)) == 0;
            if ( v599 > (int)(v611 + 4) )
            {
              v612 += *(_DWORD *)(v600 + 4LL * (int)(v611 + 4)) == 0;
              v613 = v611 + 5;
              if ( v599 > v613 )
                v612 += *(_DWORD *)(v600 + 4LL * v613) == 0;
            }
          }
        }
      }
      goto LABEL_852;
    }
  }
LABEL_93:
  v62 = *((_DWORD *)v3 + 24);
  if ( (v62 & 0x4000) != 0 )
  {
    *((_DWORD *)v4 + 109) |= 0x4000u;
    v62 = *((_DWORD *)v3 + 24);
  }
  if ( (v62 & 0x400) != 0 )
    *((_DWORD *)v4 + 109) |= 0x20000u;
  v63 = *((_DWORD *)v3 + 19);
  *((_DWORD *)v4 + 87) = 0;
  if ( v63 <= 5 )
  {
    *((_DWORD *)v4 + 109) |= 0x10000u;
    if ( v63 <= 0 )
      goto LABEL_457;
  }
  v828 = 0;
  v823 = 1;
  while ( 2 )
  {
    if ( *((int *)v3 + 24) >= 0 )
      goto LABEL_101;
    v424 = *(_DWORD *)v4;
    v425 = *((_DWORD *)v3 + 16);
    if ( *(int *)v4 > 0 )
    {
      v426 = *((_QWORD *)v4 + 6);
      v427 = -(int)(v426 >> 2) & 3;
      v428 = v427 + 3;
      if ( (unsigned int)(v427 + 3) < 5 )
        v428 = 5;
      if ( v424 - 1 < v428 )
      {
        v437 = 0;
        v438 = 0;
      }
      else
      {
        if ( (_DWORD)v427 )
        {
          v429 = 1;
          v430 = *(_DWORD *)v426 == 0;
          if ( (_DWORD)v427 != 1 )
          {
            v429 = 2;
            v430 += *(_DWORD *)(v426 + 4) == 0;
            if ( (_DWORD)v427 != 2 )
            {
              v429 = 3;
              v430 += *(_DWORD *)(v426 + 8) == 0;
            }
          }
        }
        else
        {
          v430 = 0;
          v429 = 0;
        }
        v431 = 0;
        v432 = (const __m128i *)(v426 + 4 * v427);
        v433 = v424 - v427;
        v434 = 0;
        do
        {
          v435 = _mm_load_si128(v432);
          ++v434;
          ++v432;
          v431 = _mm_sub_epi32(v431, _mm_cmpeq_epi32(v435, (__m128i)0LL));
        }
        while ( v434 < v433 >> 2 );
        v436 = _mm_add_epi32(v431, _mm_srli_si128(v431, 8));
        v437 = _mm_cvtsi128_si32(_mm_add_epi32(v436, _mm_srli_si128(v436, 4))) + v430;
        v438 = (v433 & 0xFFFFFFFC) + v429;
        if ( v433 == (v433 & 0xFFFFFFFC) )
          goto LABEL_606;
      }
      v437 += *(_DWORD *)(v426 + 4LL * (int)v438) == 0;
      if ( v424 > (int)(v438 + 1) )
      {
        v437 += *(_DWORD *)(v426 + 4LL * (int)(v438 + 1)) == 0;
        if ( v424 > (int)(v438 + 2) )
        {
          v437 += *(_DWORD *)(v426 + 4LL * (int)(v438 + 2)) == 0;
          if ( v424 > (int)(v438 + 3) )
          {
            v437 += *(_DWORD *)(v426 + 4LL * (int)(v438 + 3)) == 0;
            if ( v424 > (int)(v438 + 4) )
            {
              v437 += *(_DWORD *)(v426 + 4LL * (int)(v438 + 4)) == 0;
              v439 = v438 + 5;
              if ( v424 > v439 )
                v437 += *(_DWORD *)(v426 + 4LL * v439) == 0;
            }
          }
        }
      }
LABEL_606:
      v425 -= v437;
    }
    v440 = *((_DWORD *)v4 + 1);
    v441 = *((_DWORD *)v3 + 17);
    if ( v440 > 0 )
    {
      v442 = *((_QWORD *)v4 + 36);
      v443 = -(int)(v442 >> 2) & 3;
      v444 = v443 + 3;
      if ( (unsigned int)(v443 + 3) < 5 )
        v444 = 5;
      if ( v440 - 1 < v444 )
      {
        v453 = 0;
        v454 = 0;
      }
      else
      {
        if ( (_DWORD)v443 )
        {
          v445 = 1;
          v446 = *(_DWORD *)v442 == 0;
          if ( (_DWORD)v443 != 1 )
          {
            v445 = 2;
            v446 += *(_DWORD *)(v442 + 4) == 0;
            if ( (_DWORD)v443 != 2 )
            {
              v445 = 3;
              v446 += *(_DWORD *)(v442 + 8) == 0;
            }
          }
        }
        else
        {
          v446 = 0;
          v445 = 0;
        }
        v447 = 0;
        v448 = (const __m128i *)(v442 + 4 * v443);
        v449 = v440 - v443;
        v450 = 0;
        do
        {
          v451 = _mm_load_si128(v448);
          ++v450;
          ++v448;
          v447 = _mm_sub_epi32(v447, _mm_cmpeq_epi32(v451, (__m128i)0LL));
        }
        while ( v450 < v449 >> 2 );
        v452 = _mm_add_epi32(v447, _mm_srli_si128(v447, 8));
        v453 = _mm_cvtsi128_si32(_mm_add_epi32(v452, _mm_srli_si128(v452, 4))) + v446;
        v454 = (v449 & 0xFFFFFFFC) + v445;
        if ( v449 == (v449 & 0xFFFFFFFC) )
          goto LABEL_624;
      }
      v453 += *(_DWORD *)(v442 + 4LL * (int)v454) == 0;
      if ( v440 > (int)(v454 + 1) )
      {
        v453 += *(_DWORD *)(v442 + 4LL * (int)(v454 + 1)) == 0;
        if ( v440 > (int)(v454 + 2) )
        {
          v453 += *(_DWORD *)(v442 + 4LL * (int)(v454 + 2)) == 0;
          if ( v440 > (int)(v454 + 3) )
          {
            v453 += *(_DWORD *)(v442 + 4LL * (int)(v454 + 3)) == 0;
            if ( v440 > (int)(v454 + 4) )
            {
              v453 += *(_DWORD *)(v442 + 4LL * (int)(v454 + 4)) == 0;
              v455 = v454 + 5;
              if ( v440 > v455 )
                v453 += *(_DWORD *)(v442 + 4LL * v455) == 0;
            }
          }
        }
      }
LABEL_624:
      v441 -= v453;
    }
    getrusage(RUSAGE_SELF, &usage);
    printf(
      "Starting major pass %d after %g seconds with %d rows, %d columns\n",
      v823,
      (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
    + (double)SLODWORD(usage.ru_utime.tv_sec)
    - *((double *)v4 + 41),
      v441,
      v425);
LABEL_101:
    v64 = 0;
    v65 = *((CoinPresolveMatrix **)v3 + 7);
    v826 = v65;
    LODWORD(usage.ru_utime.tv_sec) = *((_DWORD *)v4 + 88);
    while ( 1 )
    {
      ++v64;
      ++*((_DWORD *)v4 + 87);
      if ( !v816 )
      {
        LOBYTE(v866.m128d_f64[0]) = 1;
        v84 = v65;
        do
        {
          v84 = (CoinPresolveMatrix *)slack_doubleton_action::presolve(
                                        v4,
                                        v84,
                                        (const CoinPresolveAction *)&v866,
                                        (bool *)v40);
          v6 = LOBYTE(v866.m128d_f64[0]) == 0;
          *((_QWORD *)v3 + 7) = v84;
        }
        while ( !v6 );
        if ( *((int *)v3 + 24) >= 0 )
        {
LABEL_128:
          if ( *((_DWORD *)v4 + 86) )
            break;
          goto LABEL_103;
        }
        v245 = *(_DWORD *)v4;
        if ( *(int *)v4 <= 0 )
        {
          v257 = 0;
          goto LABEL_363;
        }
        v246 = *((_QWORD *)v4 + 6);
        v247 = -(int)(v246 >> 2) & 3;
        v248 = v247 + 3;
        if ( (unsigned int)(v247 + 3) < 5 )
          v248 = 5;
        if ( v245 - 1 < v248 )
        {
          v257 = 0;
          v258 = 0;
        }
        else
        {
          if ( (_DWORD)v247 )
          {
            v249 = 1;
            v250 = *(_DWORD *)v246 == 0;
            if ( (_DWORD)v247 != 1 )
            {
              v249 = 2;
              v250 += *(_DWORD *)(v246 + 4) == 0;
              if ( (_DWORD)v247 != 2 )
              {
                v249 = 3;
                v250 += *(_DWORD *)(v246 + 8) == 0;
              }
            }
          }
          else
          {
            v250 = 0;
            v249 = 0;
          }
          v251 = 0;
          v252 = (const __m128i *)(v246 + 4 * v247);
          v253 = v245 - v247;
          v254 = 0;
          do
          {
            v255 = _mm_load_si128(v252);
            ++v254;
            ++v252;
            v251 = _mm_sub_epi32(v251, _mm_cmpeq_epi32(v255, (__m128i)0LL));
          }
          while ( v254 < v253 >> 2 );
          v256 = _mm_add_epi32(v251, _mm_srli_si128(v251, 8));
          v257 = _mm_cvtsi128_si32(_mm_add_epi32(v256, _mm_srli_si128(v256, 4))) + v250;
          v258 = (v253 & 0xFFFFFFFC) + v249;
          if ( v253 == (v253 & 0xFFFFFFFC) )
          {
LABEL_363:
            v260 = *((_DWORD *)v4 + 1);
            if ( v260 <= 0 )
            {
              v273 = 0;
            }
            else
            {
              v261 = *((_QWORD *)v4 + 36);
              v262 = -(int)(v261 >> 2) & 3;
              v263 = v262 + 3;
              if ( (unsigned int)(v262 + 3) < 5 )
                v263 = 5;
              if ( v260 - 1 < v263 )
              {
                v273 = 0;
                v272 = 0;
              }
              else
              {
                if ( (_DWORD)v262 )
                {
                  v264 = 1;
                  v265 = *(_DWORD *)v261 == 0;
                  if ( (_DWORD)v262 != 1 )
                  {
                    v264 = 2;
                    v265 += *(_DWORD *)(v261 + 4) == 0;
                    if ( (_DWORD)v262 != 2 )
                    {
                      v264 = 3;
                      v265 += *(_DWORD *)(v261 + 8) == 0;
                    }
                  }
                }
                else
                {
                  v265 = 0;
                  v264 = 0;
                }
                v266 = 0;
                v267 = (const __m128i *)(v261 + 4 * v262);
                v268 = v260 - v262;
                v269 = 0;
                do
                {
                  v270 = _mm_load_si128(v267);
                  ++v269;
                  ++v267;
                  v266 = _mm_sub_epi32(v266, _mm_cmpeq_epi32(v270, (__m128i)0LL));
                }
                while ( v269 < v268 >> 2 );
                v271 = _mm_add_epi32(v266, _mm_srli_si128(v266, 8));
                v272 = (v268 & 0xFFFFFFFC) + v264;
                v273 = v265 + _mm_cvtsi128_si32(_mm_add_epi32(v271, _mm_srli_si128(v271, 4)));
                if ( v268 == (v268 & 0xFFFFFFFC) )
                  goto LABEL_380;
              }
              v273 += *(_DWORD *)(v261 + 4LL * (int)v272) == 0;
              if ( v260 > (int)(v272 + 1) )
              {
                v273 += *(_DWORD *)(v261 + 4LL * (int)(v272 + 1)) == 0;
                if ( v260 > (int)(v272 + 2) )
                {
                  v273 += *(_DWORD *)(v261 + 4LL * (int)(v272 + 2)) == 0;
                  if ( v260 > (int)(v272 + 3) )
                  {
                    v273 += *(_DWORD *)(v261 + 4LL * (int)(v272 + 3)) == 0;
                    if ( v260 > (int)(v272 + 4) )
                    {
                      v273 += *(_DWORD *)(v261 + 4LL * (int)(v272 + 4)) == 0;
                      v274 = v272 + 5;
                      if ( v260 > v274 )
                        v273 += *(_DWORD *)(v261 + 4LL * v274) == 0;
                    }
                  }
                }
              }
            }
LABEL_380:
            printf("%c loop %d %d empty rows, %d empty columns\n", 70, v823, v273, v257);
            goto LABEL_128;
          }
        }
        v257 += *(_DWORD *)(v246 + 4LL * (int)v258) == 0;
        if ( v245 > (int)(v258 + 1) )
        {
          v257 += *(_DWORD *)(v246 + 4LL * (int)(v258 + 1)) == 0;
          if ( v245 > (int)(v258 + 2) )
          {
            v257 += *(_DWORD *)(v246 + 4LL * (int)(v258 + 2)) == 0;
            if ( v245 > (int)(v258 + 3) )
            {
              v257 += *(_DWORD *)(v246 + 4LL * (int)(v258 + 3)) == 0;
              if ( v245 > (int)(v258 + 4) )
              {
                v257 += *(_DWORD *)(v246 + 4LL * (int)(v258 + 4)) == 0;
                v259 = v258 + 5;
                if ( v245 > v259 )
                  v257 += *(_DWORD *)(v246 + 4LL * v259) == 0;
              }
            }
          }
        }
        goto LABEL_363;
      }
LABEL_103:
      if ( !v817 )
      {
        v90 = do_tighten_action::presolve(v4, *((CoinPresolveMatrix **)v3 + 7), (const CoinPresolveAction *)v42);
        v40 = (int *)*((unsigned int *)v4 + 86);
        *((_QWORD *)v3 + 7) = v90;
        if ( (_DWORD)v40 )
          break;
        if ( *((int *)v3 + 24) < 0 )
        {
          v91 = *(_DWORD *)v4;
          if ( *(int *)v4 <= 0 )
          {
            v104 = 0;
            goto LABEL_154;
          }
          v92 = *((_QWORD *)v4 + 6);
          v93 = -(int)(v92 >> 2) & 3;
          v94 = v93 + 3;
          if ( (unsigned int)(v93 + 3) < 5 )
            v94 = 5;
          if ( v91 - 1 < v94 )
          {
            v104 = 0;
            v103 = 0;
          }
          else
          {
            if ( (_DWORD)v93 )
            {
              v95 = 1;
              v96 = *(_DWORD *)v92 == 0;
              if ( (_DWORD)v93 != 1 )
              {
                v95 = 2;
                v96 += *(_DWORD *)(v92 + 4) == 0;
                if ( (_DWORD)v93 != 2 )
                {
                  v95 = 3;
                  v96 += *(_DWORD *)(v92 + 8) == 0;
                }
              }
            }
            else
            {
              v96 = 0;
              v95 = 0;
            }
            v97 = 0;
            v98 = (const __m128i *)(v92 + 4 * v93);
            v99 = v91 - v93;
            v100 = 0;
            do
            {
              v101 = _mm_load_si128(v98);
              ++v100;
              ++v98;
              v97 = _mm_sub_epi32(v97, _mm_cmpeq_epi32(v101, (__m128i)0LL));
            }
            while ( v100 < v99 >> 2 );
            v102 = _mm_add_epi32(v97, _mm_srli_si128(v97, 8));
            v103 = (v99 & 0xFFFFFFFC) + v95;
            v104 = v96 + _mm_cvtsi128_si32(_mm_add_epi32(v102, _mm_srli_si128(v102, 4)));
            if ( v99 == (v99 & 0xFFFFFFFC) )
            {
LABEL_154:
              v106 = *((_DWORD *)v4 + 1);
              if ( v106 > 0 )
              {
                v107 = *((_QWORD *)v4 + 36);
                v108 = -(int)(v107 >> 2) & 3;
                v109 = v108 + 3;
                if ( (unsigned int)(v108 + 3) < 5 )
                  v109 = 5;
                if ( v106 - 1 < v109 )
                {
                  v117 = 0;
                }
                else
                {
                  v110 = 0;
                  if ( (_DWORD)v108 )
                  {
                    v110 = 1;
                    LODWORD(v40) = *(_DWORD *)v107 == 0;
                    if ( (_DWORD)v108 != 1 )
                    {
                      v110 = 2;
                      LODWORD(v40) = (*(_DWORD *)(v107 + 4) == 0) + (_DWORD)v40;
                      if ( (_DWORD)v108 != 2 )
                      {
                        v110 = 3;
                        LODWORD(v40) = (*(_DWORD *)(v107 + 8) == 0) + (_DWORD)v40;
                      }
                    }
                  }
                  v111 = 0;
                  v112 = (const __m128i *)(v107 + 4 * v108);
                  v113 = v106 - v108;
                  v114 = 0;
                  do
                  {
                    v115 = _mm_load_si128(v112);
                    ++v114;
                    ++v112;
                    v111 = _mm_sub_epi32(v111, _mm_cmpeq_epi32(v115, (__m128i)0LL));
                  }
                  while ( v114 < v113 >> 2 );
                  v116 = _mm_add_epi32(v111, _mm_srli_si128(v111, 8));
                  LODWORD(v40) = _mm_cvtsi128_si32(_mm_add_epi32(v116, _mm_srli_si128(v116, 4))) + (_DWORD)v40;
                  v117 = (v113 & 0xFFFFFFFC) + v110;
                  if ( v113 == (v113 & 0xFFFFFFFC) )
                    goto LABEL_171;
                }
                LODWORD(v40) = (*(_DWORD *)(v107 + 4LL * (int)v117) == 0) + (_DWORD)v40;
                if ( v106 > (int)(v117 + 1) )
                {
                  LODWORD(v40) = (*(_DWORD *)(v107 + 4LL * (int)(v117 + 1)) == 0) + (_DWORD)v40;
                  if ( v106 > (int)(v117 + 2) )
                  {
                    LODWORD(v40) = (*(_DWORD *)(v107 + 4LL * (int)(v117 + 2)) == 0) + (_DWORD)v40;
                    if ( v106 > (int)(v117 + 3) )
                    {
                      LODWORD(v40) = (*(_DWORD *)(v107 + 4LL * (int)(v117 + 3)) == 0) + (_DWORD)v40;
                      if ( v106 > (int)(v117 + 4) )
                      {
                        LODWORD(v40) = (*(_DWORD *)(v107 + 4LL * (int)(v117 + 4)) == 0) + (_DWORD)v40;
                        v118 = v117 + 5;
                        if ( v106 > v118 )
                          LODWORD(v40) = (*(_DWORD *)(v107 + 4LL * v118) == 0) + (_DWORD)v40;
                      }
                    }
                  }
                }
              }
LABEL_171:
              printf("%c loop %d %d empty rows, %d empty columns\n", 74, v823, (_DWORD)v40, v104);
              goto LABEL_104;
            }
          }
          v104 += *(_DWORD *)(v92 + 4LL * (int)v103) == 0;
          if ( v91 > (int)(v103 + 1) )
          {
            v104 += *(_DWORD *)(v92 + 4LL * (int)(v103 + 1)) == 0;
            if ( v91 > (int)(v103 + 2) )
            {
              v104 += *(_DWORD *)(v92 + 4LL * (int)(v103 + 2)) == 0;
              if ( v91 > (int)(v103 + 3) )
              {
                v104 += *(_DWORD *)(v92 + 4LL * (int)(v103 + 3)) == 0;
                if ( v91 > (int)(v103 + 4) )
                {
                  v104 += *(_DWORD *)(v92 + 4LL * (int)(v103 + 4)) == 0;
                  v105 = v103 + 5;
                  if ( v91 > v105 )
                    v104 += *(_DWORD *)(v92 + 4LL * v105) == 0;
                }
              }
            }
          }
          goto LABEL_154;
        }
      }
LABEL_104:
      if ( v64 != 1 || !v822 )
        goto LABEL_108;
      v66 = remove_dual_action::presolve(v4, *((CoinPresolveMatrix **)v3 + 7), (const CoinPresolveAction *)v42);
      v40 = (int *)*((unsigned int *)v4 + 86);
      *((_QWORD *)v3 + 7) = v66;
      if ( (_DWORD)v40 )
        break;
      if ( *((int *)v3 + 24) >= 0 )
        goto LABEL_108;
      v275 = *(_DWORD *)v4;
      if ( *(int *)v4 <= 0 )
      {
        v288 = 0;
        goto LABEL_398;
      }
      v276 = *((_QWORD *)v4 + 6);
      v277 = -(int)(v276 >> 2) & 3;
      v278 = v277 + 3;
      if ( (unsigned int)(v277 + 3) < 5 )
        v278 = 5;
      if ( v275 - 1 < v278 )
      {
        v288 = 0;
        v287 = 0;
LABEL_392:
        v288 += *(_DWORD *)(v276 + 4LL * (int)v287) == 0;
        if ( v275 > (int)(v287 + 1) )
        {
          v288 += *(_DWORD *)(v276 + 4LL * (int)(v287 + 1)) == 0;
          if ( v275 > (int)(v287 + 2) )
          {
            v288 += *(_DWORD *)(v276 + 4LL * (int)(v287 + 2)) == 0;
            if ( v275 > (int)(v287 + 3) )
            {
              v288 += *(_DWORD *)(v276 + 4LL * (int)(v287 + 3)) == 0;
              if ( v275 > (int)(v287 + 4) )
              {
                v288 += *(_DWORD *)(v276 + 4LL * (int)(v287 + 4)) == 0;
                v289 = v287 + 5;
                if ( v275 > v289 )
                  v288 += *(_DWORD *)(v276 + 4LL * v289) == 0;
              }
            }
          }
        }
        goto LABEL_398;
      }
      if ( (_DWORD)v277 )
      {
        v279 = 1;
        v280 = *(_DWORD *)v276 == 0;
        if ( (_DWORD)v277 != 1 )
        {
          v279 = 2;
          v280 += *(_DWORD *)(v276 + 4) == 0;
          if ( (_DWORD)v277 != 2 )
          {
            v279 = 3;
            v280 += *(_DWORD *)(v276 + 8) == 0;
          }
        }
      }
      else
      {
        v280 = 0;
        v279 = 0;
      }
      v281 = 0;
      v282 = (const __m128i *)(v276 + 4 * v277);
      v283 = v275 - v277;
      v284 = 0;
      do
      {
        v285 = _mm_load_si128(v282);
        ++v284;
        ++v282;
        v281 = _mm_sub_epi32(v281, _mm_cmpeq_epi32(v285, (__m128i)0LL));
      }
      while ( v284 < v283 >> 2 );
      v286 = _mm_add_epi32(v281, _mm_srli_si128(v281, 8));
      v287 = (v283 & 0xFFFFFFFC) + v279;
      v288 = v280 + _mm_cvtsi128_si32(_mm_add_epi32(v286, _mm_srli_si128(v286, 4)));
      if ( v283 != (v283 & 0xFFFFFFFC) )
        goto LABEL_392;
LABEL_398:
      v290 = *((_DWORD *)v4 + 1);
      if ( v290 > 0 )
      {
        v291 = *((_QWORD *)v4 + 36);
        v292 = -(int)(v291 >> 2) & 3;
        v293 = v292 + 3;
        if ( (unsigned int)(v292 + 3) < 5 )
          v293 = 5;
        if ( v290 - 1 < v293 )
        {
          v301 = 0;
        }
        else
        {
          v294 = 0;
          if ( (_DWORD)v292 )
          {
            v294 = 1;
            LODWORD(v40) = *(_DWORD *)v291 == 0;
            if ( (_DWORD)v292 != 1 )
            {
              v294 = 2;
              LODWORD(v40) = (*(_DWORD *)(v291 + 4) == 0) + (_DWORD)v40;
              if ( (_DWORD)v292 != 2 )
              {
                v294 = 3;
                LODWORD(v40) = (*(_DWORD *)(v291 + 8) == 0) + (_DWORD)v40;
              }
            }
          }
          v295 = 0;
          v296 = (const __m128i *)(v291 + 4 * v292);
          v297 = v290 - v292;
          v298 = 0;
          do
          {
            v299 = _mm_load_si128(v296);
            ++v298;
            ++v296;
            v295 = _mm_sub_epi32(v295, _mm_cmpeq_epi32(v299, (__m128i)0LL));
          }
          while ( v298 < v297 >> 2 );
          v300 = _mm_add_epi32(v295, _mm_srli_si128(v295, 8));
          LODWORD(v40) = _mm_cvtsi128_si32(_mm_add_epi32(v300, _mm_srli_si128(v300, 4))) + (_DWORD)v40;
          v301 = (v297 & 0xFFFFFFFC) + v294;
          if ( v297 == (v297 & 0xFFFFFFFC) )
            goto LABEL_415;
        }
        LODWORD(v40) = (*(_DWORD *)(v291 + 4LL * (int)v301) == 0) + (_DWORD)v40;
        if ( v290 > (int)(v301 + 1) )
        {
          LODWORD(v40) = (*(_DWORD *)(v291 + 4LL * (int)(v301 + 1)) == 0) + (_DWORD)v40;
          if ( v290 > (int)(v301 + 2) )
          {
            LODWORD(v40) = (*(_DWORD *)(v291 + 4LL * (int)(v301 + 2)) == 0) + (_DWORD)v40;
            if ( v290 > (int)(v301 + 3) )
            {
              LODWORD(v40) = (*(_DWORD *)(v291 + 4LL * (int)(v301 + 3)) == 0) + (_DWORD)v40;
              if ( v290 > (int)(v301 + 4) )
              {
                LODWORD(v40) = (*(_DWORD *)(v291 + 4LL * (int)(v301 + 4)) == 0) + (_DWORD)v40;
                v302 = v301 + 5;
                if ( v290 > v302 )
                  LODWORD(v40) = (*(_DWORD *)(v291 + 4LL * v302) == 0) + (_DWORD)v40;
              }
            }
          }
        }
      }
LABEL_415:
      printf("%c loop %d %d empty rows, %d empty columns\n", 71, v823, (_DWORD)v40, v288);
LABEL_108:
      if ( v818 )
        goto LABEL_109;
      v119 = doubleton_action::presolve(v4, *((CoinPresolveMatrix **)v3 + 7), (const CoinPresolveAction *)v42);
      v40 = (int *)*((unsigned int *)v4 + 86);
      *((_QWORD *)v3 + 7) = v119;
      if ( (_DWORD)v40 )
        break;
      if ( *((int *)v3 + 24) >= 0 )
      {
LABEL_109:
        if ( v819 )
          goto LABEL_110;
        goto LABEL_209;
      }
      v120 = *(_DWORD *)v4;
      if ( *(int *)v4 <= 0 )
      {
        v133 = 0;
        goto LABEL_191;
      }
      v121 = *((_QWORD *)v4 + 6);
      v122 = -(int)(v121 >> 2) & 3;
      v123 = v122 + 3;
      if ( (unsigned int)(v122 + 3) < 5 )
        v123 = 5;
      if ( v120 - 1 < v123 )
      {
        v133 = 0;
        v132 = 0;
LABEL_185:
        v133 += *(_DWORD *)(v121 + 4LL * (int)v132) == 0;
        if ( v120 > (int)(v132 + 1) )
        {
          v133 += *(_DWORD *)(v121 + 4LL * (int)(v132 + 1)) == 0;
          if ( v120 > (int)(v132 + 2) )
          {
            v133 += *(_DWORD *)(v121 + 4LL * (int)(v132 + 2)) == 0;
            if ( v120 > (int)(v132 + 3) )
            {
              v133 += *(_DWORD *)(v121 + 4LL * (int)(v132 + 3)) == 0;
              if ( v120 > (int)(v132 + 4) )
              {
                v133 += *(_DWORD *)(v121 + 4LL * (int)(v132 + 4)) == 0;
                v134 = v132 + 5;
                if ( v120 > v134 )
                  v133 += *(_DWORD *)(v121 + 4LL * v134) == 0;
              }
            }
          }
        }
        goto LABEL_191;
      }
      if ( (_DWORD)v122 )
      {
        v124 = 1;
        v125 = *(_DWORD *)v121 == 0;
        if ( (_DWORD)v122 != 1 )
        {
          v124 = 2;
          v125 += *(_DWORD *)(v121 + 4) == 0;
          if ( (_DWORD)v122 != 2 )
          {
            v124 = 3;
            v125 += *(_DWORD *)(v121 + 8) == 0;
          }
        }
      }
      else
      {
        v125 = 0;
        v124 = 0;
      }
      v126 = 0;
      v127 = (const __m128i *)(v121 + 4 * v122);
      v128 = v120 - v122;
      v129 = 0;
      do
      {
        v130 = _mm_load_si128(v127);
        ++v129;
        ++v127;
        v126 = _mm_sub_epi32(v126, _mm_cmpeq_epi32(v130, (__m128i)0LL));
      }
      while ( v129 < v128 >> 2 );
      v131 = _mm_add_epi32(v126, _mm_srli_si128(v126, 8));
      v132 = (v128 & 0xFFFFFFFC) + v124;
      v133 = v125 + _mm_cvtsi128_si32(_mm_add_epi32(v131, _mm_srli_si128(v131, 4)));
      if ( v128 != (v128 & 0xFFFFFFFC) )
        goto LABEL_185;
LABEL_191:
      v135 = *((_DWORD *)v4 + 1);
      if ( v135 <= 0 )
        goto LABEL_208;
      v136 = *((_QWORD *)v4 + 36);
      v137 = -(int)(v136 >> 2) & 3;
      v138 = v137 + 3;
      if ( (unsigned int)(v137 + 3) < 5 )
        v138 = 5;
      if ( v135 - 1 < v138 )
      {
        v146 = 0;
LABEL_202:
        LODWORD(v40) = (*(_DWORD *)(v136 + 4LL * (int)v146) == 0) + (_DWORD)v40;
        if ( v135 > (int)(v146 + 1) )
        {
          LODWORD(v40) = (*(_DWORD *)(v136 + 4LL * (int)(v146 + 1)) == 0) + (_DWORD)v40;
          if ( v135 > (int)(v146 + 2) )
          {
            LODWORD(v40) = (*(_DWORD *)(v136 + 4LL * (int)(v146 + 2)) == 0) + (_DWORD)v40;
            if ( v135 > (int)(v146 + 3) )
            {
              LODWORD(v40) = (*(_DWORD *)(v136 + 4LL * (int)(v146 + 3)) == 0) + (_DWORD)v40;
              if ( v135 > (int)(v146 + 4) )
              {
                LODWORD(v40) = (*(_DWORD *)(v136 + 4LL * (int)(v146 + 4)) == 0) + (_DWORD)v40;
                v147 = v146 + 5;
                if ( v135 > v147 )
                  LODWORD(v40) = (*(_DWORD *)(v136 + 4LL * v147) == 0) + (_DWORD)v40;
              }
            }
          }
        }
        goto LABEL_208;
      }
      v139 = 0;
      if ( (_DWORD)v137 )
      {
        v139 = 1;
        LODWORD(v40) = *(_DWORD *)v136 == 0;
        if ( (_DWORD)v137 != 1 )
        {
          v139 = 2;
          LODWORD(v40) = (*(_DWORD *)(v136 + 4) == 0) + (_DWORD)v40;
          if ( (_DWORD)v137 != 2 )
          {
            v139 = 3;
            LODWORD(v40) = (*(_DWORD *)(v136 + 8) == 0) + (_DWORD)v40;
          }
        }
      }
      v140 = 0;
      v141 = (const __m128i *)(v136 + 4 * v137);
      v142 = v135 - v137;
      v143 = 0;
      do
      {
        v144 = _mm_load_si128(v141);
        ++v143;
        ++v141;
        v140 = _mm_sub_epi32(v140, _mm_cmpeq_epi32(v144, (__m128i)0LL));
      }
      while ( v143 < v142 >> 2 );
      v145 = _mm_add_epi32(v140, _mm_srli_si128(v140, 8));
      LODWORD(v40) = _mm_cvtsi128_si32(_mm_add_epi32(v145, _mm_srli_si128(v145, 4))) + (_DWORD)v40;
      v146 = (v142 & 0xFFFFFFFC) + v139;
      if ( v142 != (v142 & 0xFFFFFFFC) )
        goto LABEL_202;
LABEL_208:
      printf("%c loop %d %d empty rows, %d empty columns\n", 72, v823, (_DWORD)v40, v133);
      if ( v819 )
        goto LABEL_110;
LABEL_209:
      v148 = tripleton_action::presolve(v4, *((CoinPresolveMatrix **)v3 + 7), (const CoinPresolveAction *)v42);
      v40 = (int *)*((unsigned int *)v4 + 86);
      *((_QWORD *)v3 + 7) = v148;
      if ( (_DWORD)v40 )
        break;
      if ( *((int *)v3 + 24) >= 0 )
      {
LABEL_110:
        if ( v820 )
          goto LABEL_111;
        goto LABEL_246;
      }
      v149 = *(_DWORD *)v4;
      if ( *(int *)v4 <= 0 )
      {
        v162 = 0;
        goto LABEL_228;
      }
      v150 = *((_QWORD *)v4 + 6);
      v151 = -(int)(v150 >> 2) & 3;
      v152 = v151 + 3;
      if ( (unsigned int)(v151 + 3) < 5 )
        v152 = 5;
      if ( v149 - 1 < v152 )
      {
        v162 = 0;
        v161 = 0;
LABEL_222:
        v162 += *(_DWORD *)(v150 + 4LL * (int)v161) == 0;
        if ( v149 > (int)(v161 + 1) )
        {
          v162 += *(_DWORD *)(v150 + 4LL * (int)(v161 + 1)) == 0;
          if ( v149 > (int)(v161 + 2) )
          {
            v162 += *(_DWORD *)(v150 + 4LL * (int)(v161 + 2)) == 0;
            if ( v149 > (int)(v161 + 3) )
            {
              v162 += *(_DWORD *)(v150 + 4LL * (int)(v161 + 3)) == 0;
              if ( v149 > (int)(v161 + 4) )
              {
                v162 += *(_DWORD *)(v150 + 4LL * (int)(v161 + 4)) == 0;
                v163 = v161 + 5;
                if ( v149 > v163 )
                  v162 += *(_DWORD *)(v150 + 4LL * v163) == 0;
              }
            }
          }
        }
        goto LABEL_228;
      }
      if ( (_DWORD)v151 )
      {
        v153 = 1;
        v154 = *(_DWORD *)v150 == 0;
        if ( (_DWORD)v151 != 1 )
        {
          v153 = 2;
          v154 += *(_DWORD *)(v150 + 4) == 0;
          if ( (_DWORD)v151 != 2 )
          {
            v153 = 3;
            v154 += *(_DWORD *)(v150 + 8) == 0;
          }
        }
      }
      else
      {
        v154 = 0;
        v153 = 0;
      }
      v155 = 0;
      v156 = (const __m128i *)(v150 + 4 * v151);
      v157 = v149 - v151;
      v158 = 0;
      do
      {
        v159 = _mm_load_si128(v156);
        ++v158;
        ++v156;
        v155 = _mm_sub_epi32(v155, _mm_cmpeq_epi32(v159, (__m128i)0LL));
      }
      while ( v158 < v157 >> 2 );
      v160 = _mm_add_epi32(v155, _mm_srli_si128(v155, 8));
      v161 = (v157 & 0xFFFFFFFC) + v153;
      v162 = v154 + _mm_cvtsi128_si32(_mm_add_epi32(v160, _mm_srli_si128(v160, 4)));
      if ( v157 != (v157 & 0xFFFFFFFC) )
        goto LABEL_222;
LABEL_228:
      v164 = *((_DWORD *)v4 + 1);
      if ( v164 <= 0 )
        goto LABEL_245;
      v165 = *((_QWORD *)v4 + 36);
      v166 = -(int)(v165 >> 2) & 3;
      v167 = v166 + 3;
      if ( (unsigned int)(v166 + 3) < 5 )
        v167 = 5;
      if ( v164 - 1 < v167 )
      {
        v175 = 0;
LABEL_239:
        LODWORD(v40) = (*(_DWORD *)(v165 + 4LL * (int)v175) == 0) + (_DWORD)v40;
        if ( v164 > (int)(v175 + 1) )
        {
          LODWORD(v40) = (*(_DWORD *)(v165 + 4LL * (int)(v175 + 1)) == 0) + (_DWORD)v40;
          if ( v164 > (int)(v175 + 2) )
          {
            LODWORD(v40) = (*(_DWORD *)(v165 + 4LL * (int)(v175 + 2)) == 0) + (_DWORD)v40;
            if ( v164 > (int)(v175 + 3) )
            {
              LODWORD(v40) = (*(_DWORD *)(v165 + 4LL * (int)(v175 + 3)) == 0) + (_DWORD)v40;
              if ( v164 > (int)(v175 + 4) )
              {
                LODWORD(v40) = (*(_DWORD *)(v165 + 4LL * (int)(v175 + 4)) == 0) + (_DWORD)v40;
                v176 = v175 + 5;
                if ( v164 > v176 )
                  LODWORD(v40) = (*(_DWORD *)(v165 + 4LL * v176) == 0) + (_DWORD)v40;
              }
            }
          }
        }
        goto LABEL_245;
      }
      v168 = 0;
      if ( (_DWORD)v166 )
      {
        v168 = 1;
        LODWORD(v40) = *(_DWORD *)v165 == 0;
        if ( (_DWORD)v166 != 1 )
        {
          v168 = 2;
          LODWORD(v40) = (*(_DWORD *)(v165 + 4) == 0) + (_DWORD)v40;
          if ( (_DWORD)v166 != 2 )
          {
            v168 = 3;
            LODWORD(v40) = (*(_DWORD *)(v165 + 8) == 0) + (_DWORD)v40;
          }
        }
      }
      v169 = 0;
      v170 = (const __m128i *)(v165 + 4 * v166);
      v171 = v164 - v166;
      v172 = 0;
      do
      {
        v173 = _mm_load_si128(v170);
        ++v172;
        ++v170;
        v169 = _mm_sub_epi32(v169, _mm_cmpeq_epi32(v173, (__m128i)0LL));
      }
      while ( v172 < v171 >> 2 );
      v174 = _mm_add_epi32(v169, _mm_srli_si128(v169, 8));
      LODWORD(v40) = _mm_cvtsi128_si32(_mm_add_epi32(v174, _mm_srli_si128(v174, 4))) + (_DWORD)v40;
      v175 = (v171 & 0xFFFFFFFC) + v168;
      if ( v171 != (v171 & 0xFFFFFFFC) )
        goto LABEL_239;
LABEL_245:
      printf("%c loop %d %d empty rows, %d empty columns\n", 73, v823, (_DWORD)v40, v162);
      if ( v820 )
        goto LABEL_111;
LABEL_246:
      v177 = forcing_constraint_action::presolve(v4, *((CoinPresolveMatrix **)v3 + 7), (const CoinPresolveAction *)v42);
      v40 = (int *)*((unsigned int *)v4 + 86);
      *((_QWORD *)v3 + 7) = v177;
      if ( (_DWORD)v40 )
        break;
      if ( *((int *)v3 + 24) < 0 )
      {
        v178 = *(_DWORD *)v4;
        if ( *(int *)v4 <= 0 )
        {
          v191 = 0;
          goto LABEL_265;
        }
        v179 = *((_QWORD *)v4 + 6);
        v180 = -(int)(v179 >> 2) & 3;
        v181 = v180 + 3;
        if ( (unsigned int)(v180 + 3) < 5 )
          v181 = 5;
        if ( v178 - 1 < v181 )
        {
          v191 = 0;
          v190 = 0;
        }
        else
        {
          if ( (_DWORD)v180 )
          {
            v182 = 1;
            v183 = *(_DWORD *)v179 == 0;
            if ( (_DWORD)v180 != 1 )
            {
              v182 = 2;
              v183 += *(_DWORD *)(v179 + 4) == 0;
              if ( (_DWORD)v180 != 2 )
              {
                v182 = 3;
                v183 += *(_DWORD *)(v179 + 8) == 0;
              }
            }
          }
          else
          {
            v183 = 0;
            v182 = 0;
          }
          v184 = 0;
          v185 = (const __m128i *)(v179 + 4 * v180);
          v186 = v178 - v180;
          v187 = 0;
          do
          {
            v188 = _mm_load_si128(v185);
            ++v187;
            ++v185;
            v184 = _mm_sub_epi32(v184, _mm_cmpeq_epi32(v188, (__m128i)0LL));
          }
          while ( v187 < v186 >> 2 );
          v189 = _mm_add_epi32(v184, _mm_srli_si128(v184, 8));
          v190 = (v186 & 0xFFFFFFFC) + v182;
          v191 = v183 + _mm_cvtsi128_si32(_mm_add_epi32(v189, _mm_srli_si128(v189, 4)));
          if ( v186 == (v186 & 0xFFFFFFFC) )
          {
LABEL_265:
            v193 = *((_DWORD *)v4 + 1);
            if ( v193 > 0 )
            {
              v194 = *((_QWORD *)v4 + 36);
              v195 = -(int)(v194 >> 2) & 3;
              v196 = v195 + 3;
              if ( (unsigned int)(v195 + 3) < 5 )
                v196 = 5;
              if ( v193 - 1 < v196 )
              {
                v204 = 0;
              }
              else
              {
                v197 = 0;
                if ( (_DWORD)v195 )
                {
                  v197 = 1;
                  LODWORD(v40) = *(_DWORD *)v194 == 0;
                  if ( (_DWORD)v195 != 1 )
                  {
                    v197 = 2;
                    LODWORD(v40) = (*(_DWORD *)(v194 + 4) == 0) + (_DWORD)v40;
                    if ( (_DWORD)v195 != 2 )
                    {
                      v197 = 3;
                      LODWORD(v40) = (*(_DWORD *)(v194 + 8) == 0) + (_DWORD)v40;
                    }
                  }
                }
                v198 = 0;
                v199 = (const __m128i *)(v194 + 4 * v195);
                v200 = v193 - v195;
                v201 = 0;
                do
                {
                  v202 = _mm_load_si128(v199);
                  ++v201;
                  ++v199;
                  v198 = _mm_sub_epi32(v198, _mm_cmpeq_epi32(v202, (__m128i)0LL));
                }
                while ( v201 < v200 >> 2 );
                v203 = _mm_add_epi32(v198, _mm_srli_si128(v198, 8));
                LODWORD(v40) = _mm_cvtsi128_si32(_mm_add_epi32(v203, _mm_srli_si128(v203, 4))) + (_DWORD)v40;
                v204 = (v200 & 0xFFFFFFFC) + v197;
                if ( v200 == (v200 & 0xFFFFFFFC) )
                  goto LABEL_282;
              }
              LODWORD(v40) = (*(_DWORD *)(v194 + 4LL * (int)v204) == 0) + (_DWORD)v40;
              if ( v193 > (int)(v204 + 1) )
              {
                LODWORD(v40) = (*(_DWORD *)(v194 + 4LL * (int)(v204 + 1)) == 0) + (_DWORD)v40;
                if ( v193 > (int)(v204 + 2) )
                {
                  LODWORD(v40) = (*(_DWORD *)(v194 + 4LL * (int)(v204 + 2)) == 0) + (_DWORD)v40;
                  if ( v193 > (int)(v204 + 3) )
                  {
                    LODWORD(v40) = (*(_DWORD *)(v194 + 4LL * (int)(v204 + 3)) == 0) + (_DWORD)v40;
                    if ( v193 > (int)(v204 + 4) )
                    {
                      LODWORD(v40) = (*(_DWORD *)(v194 + 4LL * (int)(v204 + 4)) == 0) + (_DWORD)v40;
                      v205 = v204 + 5;
                      if ( v193 > v205 )
                        LODWORD(v40) = (*(_DWORD *)(v194 + 4LL * v205) == 0) + (_DWORD)v40;
                    }
                  }
                }
              }
            }
LABEL_282:
            printf("%c loop %d %d empty rows, %d empty columns\n", 75, v823, (_DWORD)v40, v191);
            goto LABEL_111;
          }
        }
        v191 += *(_DWORD *)(v179 + 4LL * (int)v190) == 0;
        if ( v178 > (int)(v190 + 1) )
        {
          v191 += *(_DWORD *)(v179 + 4LL * (int)(v190 + 1)) == 0;
          if ( v178 > (int)(v190 + 2) )
          {
            v191 += *(_DWORD *)(v179 + 4LL * (int)(v190 + 2)) == 0;
            if ( v178 > (int)(v190 + 3) )
            {
              v191 += *(_DWORD *)(v179 + 4LL * (int)(v190 + 3)) == 0;
              if ( v178 > (int)(v190 + 4) )
              {
                v191 += *(_DWORD *)(v179 + 4LL * (int)(v190 + 4)) == 0;
                v192 = v190 + 5;
                if ( v178 > v192 )
                  v191 += *(_DWORD *)(v179 + 4LL * v192) == 0;
              }
            }
          }
        }
        goto LABEL_265;
      }
LABEL_111:
      if ( v815 )
        goto LABEL_113;
      v67 = v64 % 5;
      if ( v64 % 5 != 1 )
        goto LABEL_113;
      v217 = implied_free_action::presolve(
               v4,
               *((CoinPresolveMatrix **)v3 + 7),
               (const CoinPresolveAction *)&usage,
               v40);
      v40 = (int *)*((unsigned int *)v4 + 86);
      *((_QWORD *)v3 + 7) = v217;
      if ( (_DWORD)v40 )
        break;
      if ( *((int *)v3 + 24) < 0 )
      {
        v218 = *(_DWORD *)v4;
        if ( *(int *)v4 <= 0 )
        {
          v230 = 0;
          goto LABEL_328;
        }
        v219 = *((_QWORD *)v4 + 6);
        v220 = -(int)(v219 >> 2) & 3;
        v221 = v220 + 3;
        if ( (unsigned int)(v220 + 3) < 5 )
          v221 = 5;
        if ( v218 - 1 < v221 )
        {
          v230 = 0;
          v231 = 0;
        }
        else
        {
          if ( (_DWORD)v220 )
          {
            v222 = 1;
            v223 = *(_DWORD *)v219 == 0;
            if ( (_DWORD)v220 != 1 )
            {
              v222 = 2;
              v223 += *(_DWORD *)(v219 + 4) == 0;
              if ( (_DWORD)v220 != 2 )
              {
                v222 = 3;
                v223 += *(_DWORD *)(v219 + 8) == 0;
              }
            }
          }
          else
          {
            v223 = 0;
            v222 = 0;
          }
          v224 = 0;
          v225 = (const __m128i *)(v219 + 4 * v220);
          v226 = v218 - v220;
          v227 = 0;
          do
          {
            v228 = _mm_load_si128(v225);
            ++v227;
            ++v225;
            v224 = _mm_sub_epi32(v224, _mm_cmpeq_epi32(v228, (__m128i)0LL));
          }
          while ( v227 < v226 >> 2 );
          v229 = _mm_add_epi32(v224, _mm_srli_si128(v224, 8));
          v230 = _mm_cvtsi128_si32(_mm_add_epi32(v229, _mm_srli_si128(v229, 4))) + v223;
          v231 = (v226 & 0xFFFFFFFC) + v222;
          if ( v226 == (v226 & 0xFFFFFFFC) )
          {
LABEL_328:
            v233 = *((_DWORD *)v4 + 1);
            if ( v233 > 0 )
            {
              v234 = *((_QWORD *)v4 + 36);
              v235 = -(int)(v234 >> 2) & 3;
              v236 = v235 + 3;
              if ( (unsigned int)(v235 + 3) < 5 )
                v236 = 5;
              if ( v233 - 1 < v236 )
              {
                v243 = 0;
              }
              else
              {
                if ( (_DWORD)v235 )
                {
                  LODWORD(v40) = *(_DWORD *)v234 == 0;
                  if ( (_DWORD)v235 != 1 )
                  {
                    v67 = 2;
                    LODWORD(v40) = (*(_DWORD *)(v234 + 4) == 0) + (_DWORD)v40;
                    if ( (_DWORD)v235 != 2 )
                    {
                      v67 = 3;
                      LODWORD(v40) = (*(_DWORD *)(v234 + 8) == 0) + (_DWORD)v40;
                    }
                  }
                }
                else
                {
                  v67 = 0;
                }
                v237 = 0;
                v238 = (const __m128i *)(v234 + 4 * v235);
                v239 = v233 - v235;
                v240 = 0;
                do
                {
                  v241 = _mm_load_si128(v238);
                  ++v240;
                  ++v238;
                  v237 = _mm_sub_epi32(v237, _mm_cmpeq_epi32(v241, (__m128i)0LL));
                }
                while ( v240 < v239 >> 2 );
                v242 = _mm_add_epi32(v237, _mm_srli_si128(v237, 8));
                LODWORD(v40) = _mm_cvtsi128_si32(_mm_add_epi32(v242, _mm_srli_si128(v242, 4))) + (_DWORD)v40;
                v243 = (v239 & 0xFFFFFFFC) + v67;
                if ( v239 == (v239 & 0xFFFFFFFC) )
                  goto LABEL_345;
              }
              LODWORD(v40) = (*(_DWORD *)(v234 + 4LL * (int)v243) == 0) + (_DWORD)v40;
              if ( v233 > (int)(v243 + 1) )
              {
                LODWORD(v40) = (*(_DWORD *)(v234 + 4LL * (int)(v243 + 1)) == 0) + (_DWORD)v40;
                if ( v233 > (int)(v243 + 2) )
                {
                  LODWORD(v40) = (*(_DWORD *)(v234 + 4LL * (int)(v243 + 2)) == 0) + (_DWORD)v40;
                  if ( v233 > (int)(v243 + 3) )
                  {
                    LODWORD(v40) = (*(_DWORD *)(v234 + 4LL * (int)(v243 + 3)) == 0) + (_DWORD)v40;
                    if ( v233 > (int)(v243 + 4) )
                    {
                      LODWORD(v40) = (*(_DWORD *)(v234 + 4LL * (int)(v243 + 4)) == 0) + (_DWORD)v40;
                      v244 = v243 + 5;
                      if ( v233 > v244 )
                        LODWORD(v40) = (*(_DWORD *)(v234 + 4LL * v244) == 0) + (_DWORD)v40;
                    }
                  }
                }
              }
            }
LABEL_345:
            printf("%c loop %d %d empty rows, %d empty columns\n", 76, v823, (_DWORD)v40, v230);
            goto LABEL_113;
          }
        }
        v230 += *(_DWORD *)(v219 + 4LL * (int)v231) == 0;
        if ( v218 > (int)(v231 + 1) )
        {
          v230 += *(_DWORD *)(v219 + 4LL * (int)(v231 + 1)) == 0;
          if ( v218 > (int)(v231 + 2) )
          {
            v230 += *(_DWORD *)(v219 + 4LL * (int)(v231 + 2)) == 0;
            if ( v218 > (int)(v231 + 3) )
            {
              v230 += *(_DWORD *)(v219 + 4LL * (int)(v231 + 3)) == 0;
              if ( v218 > (int)(v231 + 4) )
              {
                v230 += *(_DWORD *)(v219 + 4LL * (int)(v231 + 4)) == 0;
                v232 = v231 + 5;
                if ( v218 > v232 )
                  v230 += *(_DWORD *)(v219 + 4LL * v232) == 0;
              }
            }
          }
        }
        goto LABEL_328;
      }
LABEL_113:
      v68 = *((_DWORD *)v4 + 108);
      v69 = *((_QWORD *)v4 + 36);
      v70 = *((int **)v4 + 53);
      v71 = *((_QWORD *)v4 + 51);
      if ( v68 <= 0 )
      {
        v72 = 0;
      }
      else
      {
        v72 = 0;
        v73 = (__int64)&v70[v68 - 1 + 1];
        do
        {
          v74 = *v70;
          v40 = (int *)(v74 + *((_QWORD *)v4 + 50));
          v75 = *v70;
          *(_BYTE *)v40 &= ~1u;
          if ( *(_DWORD *)(v69 + 4 * v74) )
          {
            v76 = v72++;
            *(_DWORD *)(v71 + 4 * v76) = v75;
          }
          ++v70;
        }
        while ( v70 != (int *)v73 );
      }
      v42 = *((unsigned int *)v4 + 98);
      *((_DWORD *)v4 + 104) = v72;
      *((_DWORD *)v4 + 108) = 0;
      v77 = *((_QWORD *)v4 + 6);
      v78 = *((int **)v4 + 48);
      v79 = *((_QWORD *)v4 + 46);
      if ( (int)v42 <= 0 )
      {
        v80 = 0;
      }
      else
      {
        v80 = 0;
        v81 = (__int64)&v78[(unsigned int)(v42 - 1) + 1];
        do
        {
          v42 = *v78;
          v40 = (int *)(v42 + *((_QWORD *)v4 + 45));
          v82 = *v78;
          *(_BYTE *)v40 &= ~1u;
          if ( *(_DWORD *)(v77 + 4 * v42) )
          {
            v42 = v80++;
            *(_DWORD *)(v79 + 4 * v42) = v82;
          }
          ++v78;
        }
        while ( (int *)v81 != v78 );
      }
      v83 = *((CoinPresolveMatrix **)v3 + 7);
      *((_DWORD *)v4 + 94) = v80;
      *((_DWORD *)v4 + 98) = 0;
      if ( v83 == v65 )
      {
        if ( SLODWORD(usage.ru_utime.tv_sec) > 0 )
        {
          v85 = *((unsigned int *)v3 + 17);
          if ( *((_BYTE *)v4 + 440) )
            goto LABEL_285;
LABEL_130:
          v86 = *((_QWORD *)v4 + 36);
          v87 = *((_QWORD *)v4 + 51);
          if ( (int)v85 <= 0 )
          {
            v89 = 0;
          }
          else
          {
            v85 = 0;
            v88 = 0;
            do
            {
              while ( 1 )
              {
                *(_BYTE *)(v88 + *((_QWORD *)v4 + 50)) &= ~1u;
                if ( !*(_DWORD *)(v86 + 4 * v88) )
                  break;
                *(_DWORD *)(v87 + 4 * v85) = v88;
                v89 = v85 + 1;
                v85 = (unsigned int)++v88;
                if ( *((_DWORD *)v3 + 17) <= (int)v88 )
                  goto LABEL_418;
                v85 = v89;
              }
              ++v88;
            }
            while ( *((_DWORD *)v3 + 17) > (int)v88 );
            v89 = v85;
          }
LABEL_418:
          v303 = *((_DWORD *)v3 + 16);
          *((_DWORD *)v4 + 104) = v89;
          *((_DWORD *)v4 + 108) = 0;
          v304 = *((_QWORD *)v4 + 6);
          v305 = *((_QWORD *)v4 + 46);
          if ( v303 <= 0 )
          {
            v42 = 0;
          }
          else
          {
            v85 = 0;
            v306 = 0;
            do
            {
              while ( 1 )
              {
                *(_BYTE *)(v306 + *((_QWORD *)v4 + 45)) &= ~1u;
                if ( !*(_DWORD *)(v304 + 4 * v306) )
                  break;
                *(_DWORD *)(v305 + 4 * v85) = v306;
                v42 = (unsigned int)(v85 + 1);
                v85 = (unsigned int)++v306;
                if ( *((_DWORD *)v3 + 16) <= (int)v306 )
                  goto LABEL_425;
                v85 = (int)v42;
              }
              ++v306;
            }
            while ( *((_DWORD *)v3 + 16) > (int)v306 );
            v42 = (unsigned int)v85;
          }
LABEL_425:
          *((_DWORD *)v4 + 94) = v42;
          *((_DWORD *)v4 + 98) = 0;
LABEL_426:
          v211 = *((CoinPresolveMatrix **)v3 + 7);
          if ( !v822 )
            goto LABEL_427;
LABEL_296:
          v212 = v211;
          v213 = 0;
          while ( 1 )
          {
            v214 = remove_dual_action::presolve(v4, v212, (const CoinPresolveAction *)v42);
            v215 = (int *)*((unsigned int *)v4 + 86);
            v211 = (CoinPresolveMatrix *)v214;
            *((_QWORD *)v3 + 7) = v214;
            if ( (_DWORD)v215 )
              goto LABEL_428;
            if ( *((int *)v3 + 24) < 0 )
              break;
LABEL_299:
            if ( v815 )
              goto LABEL_428;
            v212 = v211;
            if ( (v213 & 1) == 0 )
            {
              v212 = (CoinPresolveMatrix *)implied_free_action::presolve(
                                             v4,
                                             v211,
                                             (const CoinPresolveAction *)&usage,
                                             v215);
              *((_QWORD *)v3 + 7) = v212;
            }
            v216 = *((_DWORD *)v4 + 86);
            if ( v216 )
              goto LABEL_306;
            if ( *((int *)v3 + 24) < 0 )
            {
              v485 = *(_DWORD *)v4;
              if ( *(int *)v4 <= 0 )
              {
                v497 = 0;
              }
              else
              {
                v486 = *((_QWORD *)v4 + 6);
                v487 = -(int)(v486 >> 2) & 3;
                v488 = v487 + 3;
                if ( (unsigned int)(v487 + 3) < 5 )
                  v488 = 5;
                if ( v485 - 1 < v488 )
                {
                  v497 = 0;
                  v498 = 0;
                  goto LABEL_685;
                }
                if ( (_DWORD)v487 )
                {
                  v489 = 1;
                  v490 = *(_DWORD *)v486 == 0;
                  if ( (_DWORD)v487 != 1 )
                  {
                    v489 = 2;
                    v490 += *(_DWORD *)(v486 + 4) == 0;
                    if ( (_DWORD)v487 != 2 )
                    {
                      v489 = 3;
                      v490 += *(_DWORD *)(v486 + 8) == 0;
                    }
                  }
                }
                else
                {
                  v490 = 0;
                  v489 = 0;
                }
                v491 = 0;
                v492 = (const __m128i *)(v486 + 4 * v487);
                v493 = v485 - v487;
                v494 = 0;
                do
                {
                  v495 = _mm_load_si128(v492);
                  ++v494;
                  ++v492;
                  v491 = _mm_sub_epi32(v491, _mm_cmpeq_epi32(v495, (__m128i)0LL));
                }
                while ( v493 >> 2 > v494 );
                v496 = _mm_add_epi32(v491, _mm_srli_si128(v491, 8));
                v497 = _mm_cvtsi128_si32(_mm_add_epi32(v496, _mm_srli_si128(v496, 4))) + v490;
                v498 = (v493 & 0xFFFFFFFC) + v489;
                if ( v493 != (v493 & 0xFFFFFFFC) )
                {
LABEL_685:
                  v497 += *(_DWORD *)(v486 + 4LL * (int)v498) == 0;
                  if ( v485 > (int)(v498 + 1) )
                  {
                    v497 += *(_DWORD *)(v486 + 4LL * (int)(v498 + 1)) == 0;
                    if ( v485 > (int)(v498 + 2) )
                    {
                      v497 += *(_DWORD *)(v486 + 4LL * (int)(v498 + 2)) == 0;
                      if ( v485 > (int)(v498 + 3) )
                      {
                        v497 += *(_DWORD *)(v486 + 4LL * (int)(v498 + 3)) == 0;
                        if ( v485 > (int)(v498 + 4) )
                        {
                          v497 += *(_DWORD *)(v486 + 4LL * (int)(v498 + 4)) == 0;
                          v499 = v498 + 5;
                          if ( v485 > v499 )
                            v497 += *(_DWORD *)(v486 + 4LL * v499) == 0;
                        }
                      }
                    }
                  }
                }
              }
              v500 = *((_DWORD *)v4 + 1);
              if ( v500 > 0 )
              {
                v501 = *((_QWORD *)v4 + 36);
                v502 = -(int)(v501 >> 2) & 3;
                v503 = v502 + 3;
                if ( (unsigned int)(v502 + 3) < 5 )
                  v503 = 5;
                v354 = v500 - 1 < v503;
                v504 = 0;
                if ( v354 )
                  goto LABEL_702;
                if ( (_DWORD)v502 )
                {
                  v504 = 1;
                  v216 = *(_DWORD *)v501 == 0;
                  if ( (_DWORD)v502 != 1 )
                  {
                    v504 = 2;
                    v216 += *(_DWORD *)(v501 + 4) == 0;
                    if ( (_DWORD)v502 != 2 )
                    {
                      v504 = 3;
                      v216 += *(_DWORD *)(v501 + 8) == 0;
                    }
                  }
                }
                v505 = 0;
                v506 = (const __m128i *)(v501 + 4 * v502);
                v507 = v500 - v502;
                v508 = 0;
                do
                {
                  v509 = _mm_load_si128(v506);
                  ++v508;
                  ++v506;
                  v505 = _mm_sub_epi32(v505, _mm_cmpeq_epi32(v509, (__m128i)0LL));
                }
                while ( v507 >> 2 > v508 );
                v510 = _mm_add_epi32(v505, _mm_srli_si128(v505, 8));
                v216 += _mm_cvtsi128_si32(_mm_add_epi32(v510, _mm_srli_si128(v510, 4)));
                v504 += v507 & 0xFFFFFFFC;
                if ( v507 != (v507 & 0xFFFFFFFC) )
                {
LABEL_702:
                  v216 += *(_DWORD *)(v501 + 4LL * v504) == 0;
                  if ( v500 > v504 + 1 )
                  {
                    v216 += *(_DWORD *)(v501 + 4LL * (v504 + 1)) == 0;
                    if ( v500 > v504 + 2 )
                    {
                      v216 += *(_DWORD *)(v501 + 4LL * (v504 + 2)) == 0;
                      if ( v500 > v504 + 3 )
                      {
                        v216 += *(_DWORD *)(v501 + 4LL * (v504 + 3)) == 0;
                        if ( v500 > v504 + 4 )
                        {
                          v216 += *(_DWORD *)(v501 + 4LL * (v504 + 4)) == 0;
                          v511 = v504 + 5;
                          if ( v500 > v511 )
                            v216 += *(_DWORD *)(v501 + 4LL * v511) == 0;
                        }
                      }
                    }
                  }
                }
              }
              printf("%c loop %d %d empty rows, %d empty columns\n", 78, v823, v216, v497);
              v212 = *((CoinPresolveMatrix **)v3 + 7);
            }
            if ( v211 == v212 )
              goto LABEL_428;
            if ( ++v213 == 5 )
            {
LABEL_306:
              v211 = v212;
              goto LABEL_428;
            }
          }
          v396 = *(_DWORD *)v4;
          if ( *(int *)v4 <= 0 )
          {
            v409 = 0;
            goto LABEL_564;
          }
          v397 = *((_QWORD *)v4 + 6);
          v398 = -(int)(v397 >> 2) & 3;
          v399 = v398 + 3;
          if ( (unsigned int)(v398 + 3) < 5 )
            v399 = 5;
          if ( v396 - 1 < v399 )
          {
            v409 = 0;
            v408 = 0;
          }
          else
          {
            if ( (_DWORD)v398 )
            {
              v400 = 1;
              v401 = *(_DWORD *)v397 == 0;
              if ( (_DWORD)v398 != 1 )
              {
                v400 = 2;
                v401 += *(_DWORD *)(v397 + 4) == 0;
                if ( (_DWORD)v398 != 2 )
                {
                  v400 = 3;
                  v401 += *(_DWORD *)(v397 + 8) == 0;
                }
              }
            }
            else
            {
              v401 = 0;
              v400 = 0;
            }
            v402 = 0;
            v403 = (const __m128i *)(v397 + 4 * v398);
            v404 = v396 - v398;
            v405 = 0;
            do
            {
              v406 = _mm_load_si128(v403);
              ++v405;
              ++v403;
              v402 = _mm_sub_epi32(v402, _mm_cmpeq_epi32(v406, (__m128i)0LL));
            }
            while ( v404 >> 2 > v405 );
            v407 = _mm_add_epi32(v402, _mm_srli_si128(v402, 8));
            v408 = (v404 & 0xFFFFFFFC) + v400;
            v409 = v401 + _mm_cvtsi128_si32(_mm_add_epi32(v407, _mm_srli_si128(v407, 4)));
            if ( v404 == (v404 & 0xFFFFFFFC) )
            {
LABEL_564:
              v411 = *((_DWORD *)v4 + 1);
              if ( v411 > 0 )
              {
                v412 = *((_QWORD *)v4 + 36);
                v413 = -(int)(v412 >> 2) & 3;
                v414 = v413 + 3;
                if ( (unsigned int)(v413 + 3) < 5 )
                  v414 = 5;
                if ( v411 - 1 < v414 )
                {
                  v422 = 0;
                }
                else
                {
                  v415 = 0;
                  if ( (_DWORD)v413 )
                  {
                    v415 = 1;
                    LODWORD(v215) = *(_DWORD *)v412 == 0;
                    if ( (_DWORD)v413 != 1 )
                    {
                      v415 = 2;
                      LODWORD(v215) = (*(_DWORD *)(v412 + 4) == 0) + (_DWORD)v215;
                      if ( (_DWORD)v413 != 2 )
                      {
                        v415 = 3;
                        LODWORD(v215) = (*(_DWORD *)(v412 + 8) == 0) + (_DWORD)v215;
                      }
                    }
                  }
                  v416 = 0;
                  v417 = (const __m128i *)(v412 + 4 * v413);
                  v418 = v411 - v413;
                  v419 = 0;
                  do
                  {
                    v420 = _mm_load_si128(v417);
                    ++v419;
                    ++v417;
                    v416 = _mm_sub_epi32(v416, _mm_cmpeq_epi32(v420, (__m128i)0LL));
                  }
                  while ( v418 >> 2 > v419 );
                  v421 = _mm_add_epi32(v416, _mm_srli_si128(v416, 8));
                  LODWORD(v215) = _mm_cvtsi128_si32(_mm_add_epi32(v421, _mm_srli_si128(v421, 4))) + (_DWORD)v215;
                  v422 = (v418 & 0xFFFFFFFC) + v415;
                  if ( v418 == (v418 & 0xFFFFFFFC) )
                    goto LABEL_581;
                }
                LODWORD(v215) = (*(_DWORD *)(v412 + 4LL * (int)v422) == 0) + (_DWORD)v215;
                if ( v411 > (int)(v422 + 1) )
                {
                  LODWORD(v215) = (*(_DWORD *)(v412 + 4LL * (int)(v422 + 1)) == 0) + (_DWORD)v215;
                  if ( v411 > (int)(v422 + 2) )
                  {
                    LODWORD(v215) = (*(_DWORD *)(v412 + 4LL * (int)(v422 + 2)) == 0) + (_DWORD)v215;
                    if ( v411 > (int)(v422 + 3) )
                    {
                      LODWORD(v215) = (*(_DWORD *)(v412 + 4LL * (int)(v422 + 3)) == 0) + (_DWORD)v215;
                      if ( v411 > (int)(v422 + 4) )
                      {
                        LODWORD(v215) = (*(_DWORD *)(v412 + 4LL * (int)(v422 + 4)) == 0) + (_DWORD)v215;
                        v423 = v422 + 5;
                        if ( v411 > v423 )
                          LODWORD(v215) = (*(_DWORD *)(v412 + 4LL * v423) == 0) + (_DWORD)v215;
                      }
                    }
                  }
                }
              }
LABEL_581:
              printf("%c loop %d %d empty rows, %d empty columns\n", 77, v823, (_DWORD)v215, v409);
              v211 = *((CoinPresolveMatrix **)v3 + 7);
              goto LABEL_299;
            }
          }
          v409 += *(_DWORD *)(v397 + 4LL * (int)v408) == 0;
          if ( v396 > (int)(v408 + 1) )
          {
            v409 += *(_DWORD *)(v397 + 4LL * (int)(v408 + 1)) == 0;
            if ( v396 > (int)(v408 + 2) )
            {
              v409 += *(_DWORD *)(v397 + 4LL * (int)(v408 + 2)) == 0;
              if ( v396 > (int)(v408 + 3) )
              {
                v409 += *(_DWORD *)(v397 + 4LL * (int)(v408 + 3)) == 0;
                if ( v396 > (int)(v408 + 4) )
                {
                  v409 += *(_DWORD *)(v397 + 4LL * (int)(v408 + 4)) == 0;
                  v410 = v408 + 5;
                  if ( v396 > v410 )
                    v409 += *(_DWORD *)(v397 + 4LL * v410) == 0;
                }
              }
            }
          }
          goto LABEL_564;
        }
      }
      else
      {
        v65 = v83;
      }
    }
    v85 = *((unsigned int *)v3 + 17);
    if ( !*((_BYTE *)v4 + 440) )
      goto LABEL_130;
LABEL_285:
    *((_DWORD *)v4 + 104) = 0;
    if ( (int)v85 > 0 )
    {
      v42 = *((_QWORD *)v4 + 50);
      v206 = 0;
      do
      {
        while ( (*(_BYTE *)v42 & 2) == 0 )
        {
          v85 = *((int *)v4 + 104);
          v207 = *((_QWORD *)v4 + 51);
          ++v42;
          *((_DWORD *)v4 + 104) = v85 + 1;
          *(_DWORD *)(v207 + 4 * v85) = v206++;
          LODWORD(v85) = *((_DWORD *)v3 + 17);
          if ( v206 >= (int)v85 )
            goto LABEL_289;
        }
        ++v206;
        ++v42;
      }
      while ( v206 < (int)v85 );
    }
LABEL_289:
    v85 = *((unsigned int *)v3 + 16);
    *((_DWORD *)v4 + 94) = 0;
    if ( (int)v85 <= 0 )
      goto LABEL_426;
    v42 = *((_QWORD *)v4 + 45);
    v208 = 0;
    while ( 2 )
    {
      while ( (*(_BYTE *)v42 & 2) == 0 )
      {
        v209 = *((int *)v4 + 94);
        v210 = *((_QWORD *)v4 + 46);
        ++v42;
        *((_DWORD *)v4 + 94) = v209 + 1;
        *(_DWORD *)(v210 + 4 * v209) = v208++;
        v85 = *((unsigned int *)v3 + 16);
        if ( (int)v85 <= v208 )
          goto LABEL_426;
      }
      ++v208;
      ++v42;
      if ( v208 < (int)v85 )
        continue;
      break;
    }
    v211 = *((CoinPresolveMatrix **)v3 + 7);
    if ( v822 )
      goto LABEL_296;
LABEL_427:
    if ( !v815 )
    {
      v456 = implied_free_action::presolve(v4, v211, (const CoinPresolveAction *)&usage, (int *)v85);
      v457 = *((_DWORD *)v4 + 86);
      v211 = (CoinPresolveMatrix *)v456;
      *((_QWORD *)v3 + 7) = v456;
      if ( !v457 )
      {
        if ( *((int *)v3 + 24) >= 0 )
          goto LABEL_428;
        v458 = *(_DWORD *)v4;
        if ( *(int *)v4 <= 0 )
        {
          v470 = 0;
        }
        else
        {
          v459 = *((_QWORD *)v4 + 6);
          v460 = -(int)(v459 >> 2) & 3;
          v461 = v460 + 3;
          if ( (unsigned int)(v460 + 3) < 5 )
            v461 = 5;
          if ( v458 - 1 < v461 )
          {
            v470 = 0;
            v471 = 0;
            goto LABEL_639;
          }
          if ( (_DWORD)v460 )
          {
            v462 = 1;
            v463 = *(_DWORD *)v459 == 0;
            if ( (_DWORD)v460 != 1 )
            {
              v462 = 2;
              v463 += *(_DWORD *)(v459 + 4) == 0;
              if ( (_DWORD)v460 != 2 )
              {
                v462 = 3;
                v463 += *(_DWORD *)(v459 + 8) == 0;
              }
            }
          }
          else
          {
            v463 = 0;
            v462 = 0;
          }
          v464 = 0;
          v465 = (const __m128i *)(v459 + 4 * v460);
          v466 = v458 - v460;
          v467 = 0;
          do
          {
            v468 = _mm_load_si128(v465);
            ++v467;
            ++v465;
            v464 = _mm_sub_epi32(v464, _mm_cmpeq_epi32(v468, (__m128i)0LL));
          }
          while ( v466 >> 2 > v467 );
          v469 = _mm_add_epi32(v464, _mm_srli_si128(v464, 8));
          v470 = v463 + _mm_cvtsi128_si32(_mm_add_epi32(v469, _mm_srli_si128(v469, 4)));
          v471 = (v466 & 0xFFFFFFFC) + v462;
          if ( v466 != (v466 & 0xFFFFFFFC) )
          {
LABEL_639:
            v470 += *(_DWORD *)(v459 + 4LL * (int)v471) == 0;
            if ( v458 > (int)(v471 + 1) )
            {
              v470 += *(_DWORD *)(v459 + 4LL * (int)(v471 + 1)) == 0;
              if ( v458 > (int)(v471 + 2) )
              {
                v470 += *(_DWORD *)(v459 + 4LL * (int)(v471 + 2)) == 0;
                if ( v458 > (int)(v471 + 3) )
                {
                  v470 += *(_DWORD *)(v459 + 4LL * (int)(v471 + 3)) == 0;
                  if ( v458 > (int)(v471 + 4) )
                  {
                    v470 += *(_DWORD *)(v459 + 4LL * (int)(v471 + 4)) == 0;
                    v472 = v471 + 5;
                    if ( v458 > v472 )
                      v470 += *(_DWORD *)(v459 + 4LL * v472) == 0;
                  }
                }
              }
            }
          }
        }
        v473 = *((_DWORD *)v4 + 1);
        if ( v473 > 0 )
        {
          v474 = *((_QWORD *)v4 + 36);
          v475 = -(int)(v474 >> 2) & 3;
          v476 = v475 + 3;
          if ( (unsigned int)(v475 + 3) < 5 )
            v476 = 5;
          v354 = v473 - 1 < v476;
          v477 = 0;
          if ( v354 )
            goto LABEL_656;
          if ( (_DWORD)v475 )
          {
            v477 = 1;
            v457 = *(_DWORD *)v474 == 0;
            if ( (_DWORD)v475 != 1 )
            {
              v477 = 2;
              v457 += *(_DWORD *)(v474 + 4) == 0;
              if ( (_DWORD)v475 != 2 )
              {
                v477 = 3;
                v457 += *(_DWORD *)(v474 + 8) == 0;
              }
            }
          }
          v478 = 0;
          v479 = (const __m128i *)(v474 + 4 * v475);
          v480 = v473 - v475;
          v481 = 0;
          do
          {
            v482 = _mm_load_si128(v479);
            ++v481;
            ++v479;
            v478 = _mm_sub_epi32(v478, _mm_cmpeq_epi32(v482, (__m128i)0LL));
          }
          while ( v480 >> 2 > v481 );
          v483 = _mm_add_epi32(v478, _mm_srli_si128(v478, 8));
          v457 += _mm_cvtsi128_si32(_mm_add_epi32(v483, _mm_srli_si128(v483, 4)));
          v477 += v480 & 0xFFFFFFFC;
          if ( v480 != (v480 & 0xFFFFFFFC) )
          {
LABEL_656:
            v457 += *(_DWORD *)(v474 + 4LL * v477) == 0;
            if ( v477 + 1 < v473 )
            {
              v457 += *(_DWORD *)(v474 + 4LL * (v477 + 1)) == 0;
              if ( v477 + 2 < v473 )
              {
                v457 += *(_DWORD *)(v474 + 4LL * (v477 + 2)) == 0;
                if ( v477 + 3 < v473 )
                {
                  v457 += *(_DWORD *)(v474 + 4LL * (v477 + 3)) == 0;
                  if ( v477 + 4 < v473 )
                  {
                    v457 += *(_DWORD *)(v474 + 4LL * (v477 + 4)) == 0;
                    v484 = v477 + 5;
                    if ( v473 > v484 )
                      v457 += *(_DWORD *)(v474 + 4LL * v484) == 0;
                  }
                }
              }
            }
          }
        }
        printf("%c loop %d %d empty rows, %d empty columns\n", 79, v823, v457, v470);
        v211 = *((CoinPresolveMatrix **)v3 + 7);
        goto LABEL_428;
      }
LABEL_62:
      LODWORD(v42) = *((_DWORD *)v4 + 109);
LABEL_63:
      *((_DWORD *)v4 + 109) = v42 & 0xFFFEFFFF;
      goto LABEL_64;
    }
LABEL_428:
    if ( v831 )
      goto LABEL_433;
    if ( (*((_BYTE *)v3 + 97) & 2) != 0 )
      *((_DWORD *)v4 + 109) |= 1u;
    v307 = dupcol_action::presolve(v4, v211, (const CoinPresolveAction *)v42);
    v308 = *((_DWORD *)v4 + 86);
    v211 = (CoinPresolveMatrix *)v307;
    *((_QWORD *)v3 + 7) = v307;
    if ( v308 )
      goto LABEL_62;
    v42 = *((unsigned int *)v3 + 24);
    if ( (int)v42 >= 0 )
      goto LABEL_433;
    v512 = *(_DWORD *)v4;
    if ( *(int *)v4 <= 0 )
    {
      v524 = 0;
    }
    else
    {
      v513 = *((_QWORD *)v4 + 6);
      v514 = -(int)(v513 >> 2) & 3;
      v515 = v514 + 3;
      if ( (unsigned int)(v514 + 3) < 5 )
        v515 = 5;
      if ( v512 - 1 < v515 )
      {
        v524 = 0;
        v525 = 0;
        goto LABEL_725;
      }
      if ( (_DWORD)v514 )
      {
        v516 = 1;
        v517 = *(_DWORD *)v513 == 0;
        if ( (_DWORD)v514 != 1 )
        {
          v516 = 2;
          v517 += *(_DWORD *)(v513 + 4) == 0;
          if ( (_DWORD)v514 != 2 )
          {
            v516 = 3;
            v517 += *(_DWORD *)(v513 + 8) == 0;
          }
        }
      }
      else
      {
        v517 = 0;
        v516 = 0;
      }
      v518 = 0;
      v519 = (const __m128i *)(v513 + 4 * v514);
      v520 = v512 - v514;
      v521 = 0;
      do
      {
        v522 = _mm_load_si128(v519);
        ++v521;
        ++v519;
        v518 = _mm_sub_epi32(v518, _mm_cmpeq_epi32(v522, (__m128i)0LL));
      }
      while ( v520 >> 2 > v521 );
      v523 = _mm_add_epi32(v518, _mm_srli_si128(v518, 8));
      v524 = _mm_cvtsi128_si32(_mm_add_epi32(v523, _mm_srli_si128(v523, 4))) + v517;
      v525 = (v520 & 0xFFFFFFFC) + v516;
      if ( v520 != (v520 & 0xFFFFFFFC) )
      {
LABEL_725:
        v524 += *(_DWORD *)(v513 + 4LL * (int)v525) == 0;
        if ( v512 > (int)(v525 + 1) )
        {
          v524 += *(_DWORD *)(v513 + 4LL * (int)(v525 + 1)) == 0;
          if ( v512 > (int)(v525 + 2) )
          {
            v524 += *(_DWORD *)(v513 + 4LL * (int)(v525 + 2)) == 0;
            if ( v512 > (int)(v525 + 3) )
            {
              v524 += *(_DWORD *)(v513 + 4LL * (int)(v525 + 3)) == 0;
              if ( v512 > (int)(v525 + 4) )
              {
                v524 += *(_DWORD *)(v513 + 4LL * (int)(v525 + 4)) == 0;
                v526 = v525 + 5;
                if ( v512 > v526 )
                  v524 += *(_DWORD *)(v513 + 4LL * v526) == 0;
              }
            }
          }
        }
      }
    }
    v527 = *((_DWORD *)v4 + 1);
    if ( v527 > 0 )
    {
      v528 = *((_QWORD *)v4 + 36);
      v529 = -(int)(v528 >> 2) & 3;
      v530 = v529 + 3;
      if ( (unsigned int)(v529 + 3) < 5 )
        v530 = 5;
      v354 = v527 - 1 < v530;
      v531 = 0;
      if ( v354 )
        goto LABEL_742;
      if ( (_DWORD)v529 )
      {
        v531 = 1;
        v308 = *(_DWORD *)v528 == 0;
        if ( (_DWORD)v529 != 1 )
        {
          v531 = 2;
          v308 += *(_DWORD *)(v528 + 4) == 0;
          if ( (_DWORD)v529 != 2 )
          {
            v531 = 3;
            v308 += *(_DWORD *)(v528 + 8) == 0;
          }
        }
      }
      v532 = 0;
      v533 = (const __m128i *)(v528 + 4 * v529);
      v534 = v527 - v529;
      v535 = 0;
      do
      {
        v536 = _mm_load_si128(v533);
        ++v535;
        ++v533;
        v532 = _mm_sub_epi32(v532, _mm_cmpeq_epi32(v536, (__m128i)0LL));
      }
      while ( v534 >> 2 > v535 );
      v537 = _mm_add_epi32(v532, _mm_srli_si128(v532, 8));
      v308 += _mm_cvtsi128_si32(_mm_add_epi32(v537, _mm_srli_si128(v537, 4)));
      v531 += v534 & 0xFFFFFFFC;
      if ( v534 != (v534 & 0xFFFFFFFC) )
      {
LABEL_742:
        v308 += *(_DWORD *)(v528 + 4LL * v531) == 0;
        if ( v527 > v531 + 1 )
        {
          v308 += *(_DWORD *)(v528 + 4LL * (v531 + 1)) == 0;
          if ( v527 > v531 + 2 )
          {
            v308 += *(_DWORD *)(v528 + 4LL * (v531 + 2)) == 0;
            if ( v527 > v531 + 3 )
            {
              v308 += *(_DWORD *)(v528 + 4LL * (v531 + 3)) == 0;
              if ( v527 > v531 + 4 )
              {
                v308 += *(_DWORD *)(v528 + 4LL * (v531 + 4)) == 0;
                v538 = v531 + 5;
                if ( v527 > v538 )
                  v308 += *(_DWORD *)(v528 + 4LL * v538) == 0;
              }
            }
          }
        }
      }
    }
    printf("%c loop %d %d empty rows, %d empty columns\n", 80, v823, v308, v524);
    v211 = *((CoinPresolveMatrix **)v3 + 7);
LABEL_433:
    if ( !v830 )
    {
      v333 = duprow_action::presolve(v4, v211, (const CoinPresolveAction *)v42);
      v334 = *((_DWORD *)v4 + 86);
      v211 = (CoinPresolveMatrix *)v333;
      *((_QWORD *)v3 + 7) = v333;
      if ( v334 )
        goto LABEL_62;
      if ( *((int *)v3 + 24) >= 0 )
        break;
      v335 = *(_DWORD *)v4;
      if ( *(int *)v4 <= 0 )
      {
        v347 = 0;
        goto LABEL_483;
      }
      v336 = *((_QWORD *)v4 + 6);
      v337 = -(int)(v336 >> 2) & 3;
      v338 = v337 + 3;
      if ( (unsigned int)(v337 + 3) < 5 )
        v338 = 5;
      if ( v335 - 1 < v338 )
      {
        v347 = 0;
        v348 = 0;
      }
      else
      {
        if ( (_DWORD)v337 )
        {
          v339 = 1;
          v340 = *(_DWORD *)v336 == 0;
          if ( (_DWORD)v337 != 1 )
          {
            v339 = 2;
            v340 += *(_DWORD *)(v336 + 4) == 0;
            if ( (_DWORD)v337 != 2 )
            {
              v339 = 3;
              v340 += *(_DWORD *)(v336 + 8) == 0;
            }
          }
        }
        else
        {
          v340 = 0;
          v339 = 0;
        }
        v341 = 0;
        v342 = (const __m128i *)(v336 + 4 * v337);
        v343 = v335 - v337;
        v344 = 0;
        do
        {
          v345 = _mm_load_si128(v342);
          ++v344;
          ++v342;
          v341 = _mm_sub_epi32(v341, _mm_cmpeq_epi32(v345, (__m128i)0LL));
        }
        while ( v343 >> 2 > v344 );
        v346 = _mm_add_epi32(v341, _mm_srli_si128(v341, 8));
        v347 = v340 + _mm_cvtsi128_si32(_mm_add_epi32(v346, _mm_srli_si128(v346, 4)));
        v348 = (v343 & 0xFFFFFFFC) + v339;
        if ( v343 == (v343 & 0xFFFFFFFC) )
        {
LABEL_483:
          v350 = *((_DWORD *)v4 + 1);
          if ( v350 > 0 )
          {
            v351 = *((_QWORD *)v4 + 36);
            v352 = -(int)(v351 >> 2) & 3;
            v353 = v352 + 3;
            if ( (unsigned int)(v352 + 3) < 5 )
              v353 = 5;
            v354 = v350 - 1 < v353;
            v355 = 0;
            if ( v354 )
              goto LABEL_494;
            if ( (_DWORD)v352 )
            {
              v355 = 1;
              v334 = *(_DWORD *)v351 == 0;
              if ( (_DWORD)v352 != 1 )
              {
                v355 = 2;
                v334 += *(_DWORD *)(v351 + 4) == 0;
                if ( (_DWORD)v352 != 2 )
                {
                  v355 = 3;
                  v334 += *(_DWORD *)(v351 + 8) == 0;
                }
              }
            }
            v356 = 0;
            v357 = (const __m128i *)(v351 + 4 * v352);
            v358 = v350 - v352;
            v359 = 0;
            do
            {
              v360 = _mm_load_si128(v357);
              ++v359;
              ++v357;
              v356 = _mm_sub_epi32(v356, _mm_cmpeq_epi32(v360, (__m128i)0LL));
            }
            while ( v359 < v358 >> 2 );
            v361 = _mm_add_epi32(v356, _mm_srli_si128(v356, 8));
            v334 += _mm_cvtsi128_si32(_mm_add_epi32(v361, _mm_srli_si128(v361, 4)));
            v355 += v358 & 0xFFFFFFFC;
            if ( v358 != (v358 & 0xFFFFFFFC) )
            {
LABEL_494:
              v334 += *(_DWORD *)(v351 + 4LL * v355) == 0;
              if ( v350 > v355 + 1 )
              {
                v334 += *(_DWORD *)(v351 + 4LL * (v355 + 1)) == 0;
                if ( v350 > v355 + 2 )
                {
                  v334 += *(_DWORD *)(v351 + 4LL * (v355 + 2)) == 0;
                  if ( v350 > v355 + 3 )
                  {
                    v334 += *(_DWORD *)(v351 + 4LL * (v355 + 3)) == 0;
                    if ( v350 > v355 + 4 )
                    {
                      v334 += *(_DWORD *)(v351 + 4LL * (v355 + 4)) == 0;
                      v362 = v355 + 5;
                      if ( v350 > v362 )
                        v334 += *(_DWORD *)(v351 + 4LL * v362) == 0;
                    }
                  }
                }
              }
            }
          }
          printf("%c loop %d %d empty rows, %d empty columns\n", 81, v823, v334, v347);
          v309 = *((_DWORD *)v3 + 17);
          v211 = *((CoinPresolveMatrix **)v3 + 7);
          v310 = *((_QWORD *)v4 + 36);
          if ( v309 <= 0 )
            goto LABEL_501;
LABEL_435:
          v311 = -(int)(v310 >> 2) & 3;
          v312 = v311 + 3;
          if ( (unsigned int)(v311 + 3) < 5 )
            v312 = 5;
          if ( v309 - 1 < v312 )
          {
            v321 = 0;
            v322 = 0;
          }
          else
          {
            if ( (_DWORD)v311 )
            {
              v313 = 1;
              v314 = *(_DWORD *)v310 == 0;
              if ( (_DWORD)v311 != 1 )
              {
                v313 = 2;
                v314 += *(_DWORD *)(v310 + 4) == 0;
                if ( (_DWORD)v311 != 2 )
                {
                  v313 = 3;
                  v314 += *(_DWORD *)(v310 + 8) == 0;
                }
              }
            }
            else
            {
              v314 = 0;
              v313 = 0;
            }
            v315 = 0;
            v316 = (const __m128i *)(v310 + 4 * v311);
            v317 = v309 - v311;
            v318 = 0;
            do
            {
              v319 = _mm_load_si128(v316);
              ++v318;
              ++v316;
              v315 = _mm_sub_epi32(v315, _mm_cmpeq_epi32(v319, (__m128i)0LL));
            }
            while ( v318 < v317 >> 2 );
            v320 = _mm_add_epi32(v315, _mm_srli_si128(v315, 8));
            v321 = _mm_cvtsi128_si32(_mm_add_epi32(v320, _mm_srli_si128(v320, 4))) + v314;
            v322 = (v317 & 0xFFFFFFFC) + v313;
            if ( v317 == (v317 & 0xFFFFFFFC) )
            {
LABEL_451:
              if ( v828 == v321 )
                goto LABEL_502;
LABEL_452:
              if ( v826 == v211 )
                goto LABEL_502;
              v324 = slack_singleton_action::presolve(v4, v211, nullptr, (double *)v310);
              v325 = *((_DWORD *)v3 + 24);
              *((_QWORD *)v3 + 7) = v324;
              if ( v325 >= 0 )
              {
                if ( v826 == (CoinPresolveMatrix *)v324 )
                  goto LABEL_457;
                v326 = v823;
LABEL_456:
                ++v823;
                v828 = v321;
                if ( *((_DWORD *)v3 + 19) <= v326 )
                  goto LABEL_457;
                continue;
              }
              v365 = *(_DWORD *)v4;
              v366 = 0;
              if ( *(int *)v4 <= 0 )
                goto LABEL_665;
LABEL_504:
              v367 = *((_QWORD *)v4 + 6);
              v368 = -(int)(v367 >> 2) & 3;
              v369 = v368 + 3;
              if ( (unsigned int)(v368 + 3) < 5 )
                v369 = 5;
              if ( v365 - 1 < v369 )
              {
                v378 = 0;
                v379 = 0;
              }
              else
              {
                if ( (_DWORD)v368 )
                {
                  v370 = 1;
                  v371 = *(_DWORD *)v367 == 0;
                  if ( (_DWORD)v368 != 1 )
                  {
                    v370 = 2;
                    v371 += *(_DWORD *)(v367 + 4) == 0;
                    if ( (_DWORD)v368 != 2 )
                    {
                      v370 = 3;
                      v371 += *(_DWORD *)(v367 + 8) == 0;
                    }
                  }
                }
                else
                {
                  v371 = 0;
                  v370 = 0;
                }
                v372 = 0;
                v373 = (const __m128i *)(v367 + 4 * v368);
                v374 = v365 - v368;
                v375 = 0;
                do
                {
                  v376 = _mm_load_si128(v373);
                  ++v375;
                  ++v373;
                  v372 = _mm_sub_epi32(v372, _mm_cmpeq_epi32(v376, (__m128i)0LL));
                }
                while ( v375 < v374 >> 2 );
                v377 = _mm_add_epi32(v372, _mm_srli_si128(v372, 8));
                v378 = _mm_cvtsi128_si32(_mm_add_epi32(v377, _mm_srli_si128(v377, 4))) + v371;
                v379 = (v374 & 0xFFFFFFFC) + v370;
                if ( v374 == (v374 & 0xFFFFFFFC) )
                {
LABEL_520:
                  v381 = *((_DWORD *)v4 + 1);
                  if ( v381 <= 0 )
                    goto LABEL_666;
                  goto LABEL_521;
                }
              }
              v378 += *(_DWORD *)(v367 + 4LL * (int)v379) == 0;
              if ( v365 > (int)(v379 + 1) )
              {
                v378 += *(_DWORD *)(v367 + 4LL * (int)(v379 + 1)) == 0;
                if ( v365 > (int)(v379 + 2) )
                {
                  v378 += *(_DWORD *)(v367 + 4LL * (int)(v379 + 2)) == 0;
                  if ( v365 > (int)(v379 + 3) )
                  {
                    v378 += *(_DWORD *)(v367 + 4LL * (int)(v379 + 3)) == 0;
                    if ( v365 > (int)(v379 + 4) )
                    {
                      v378 += *(_DWORD *)(v367 + 4LL * (int)(v379 + 4)) == 0;
                      v380 = v379 + 5;
                      if ( v365 > v380 )
                        v378 += *(_DWORD *)(v367 + 4LL * v380) == 0;
                    }
                  }
                }
              }
              goto LABEL_520;
            }
          }
          v321 += *(_DWORD *)(v310 + 4LL * v322) == 0;
          if ( v322 + 1 < v309 )
          {
            v321 += *(_DWORD *)(v310 + 4LL * (v322 + 1)) == 0;
            if ( v322 + 2 < v309 )
            {
              v321 += *(_DWORD *)(v310 + 4LL * (v322 + 2)) == 0;
              if ( v322 + 3 < v309 )
              {
                v321 += *(_DWORD *)(v310 + 4LL * (v322 + 3)) == 0;
                if ( v322 + 4 < v309 )
                {
                  v321 += *(_DWORD *)(v310 + 4LL * (v322 + 4)) == 0;
                  v323 = v322 + 5;
                  if ( v323 < v309 )
                    v321 += *(_DWORD *)(v310 + 4LL * v323) == 0;
                }
              }
            }
          }
          goto LABEL_451;
        }
      }
      v347 += *(_DWORD *)(v336 + 4LL * (int)v348) == 0;
      if ( v335 > (int)(v348 + 1) )
      {
        v347 += *(_DWORD *)(v336 + 4LL * (int)(v348 + 1)) == 0;
        if ( v335 > (int)(v348 + 2) )
        {
          v347 += *(_DWORD *)(v336 + 4LL * (int)(v348 + 2)) == 0;
          if ( v335 > (int)(v348 + 3) )
          {
            v347 += *(_DWORD *)(v336 + 4LL * (int)(v348 + 3)) == 0;
            if ( v335 > (int)(v348 + 4) )
            {
              v347 += *(_DWORD *)(v336 + 4LL * (int)(v348 + 4)) == 0;
              v349 = v348 + 5;
              if ( v335 > v349 )
                v347 += *(_DWORD *)(v336 + 4LL * v349) == 0;
            }
          }
        }
      }
      goto LABEL_483;
    }
    break;
  }
  v309 = *((_DWORD *)v3 + 17);
  v310 = *((_QWORD *)v4 + 36);
  if ( v309 > 0 )
    goto LABEL_435;
LABEL_501:
  v321 = 0;
  if ( v828 )
    goto LABEL_452;
LABEL_502:
  v363 = slack_singleton_action::presolve(v4, v211, *((const CoinPresolveAction **)v3 + 6), (double *)v310);
  v364 = *((_DWORD *)v3 + 24);
  *((_QWORD *)v3 + 7) = v363;
  if ( v364 < 0 )
  {
    v365 = *(_DWORD *)v4;
    v366 = 1;
    if ( *(int *)v4 > 0 )
      goto LABEL_504;
LABEL_665:
    v381 = *((_DWORD *)v4 + 1);
    v378 = 0;
    if ( v381 <= 0 )
    {
LABEL_666:
      v394 = 0;
      goto LABEL_537;
    }
LABEL_521:
    v382 = *((_QWORD *)v4 + 36);
    v383 = -(int)(v382 >> 2) & 3;
    v384 = v383 + 3;
    if ( (unsigned int)(v383 + 3) < 5 )
      v384 = 5;
    if ( v381 - 1 < v384 )
    {
      v394 = 0;
      v393 = 0;
      goto LABEL_531;
    }
    if ( (_DWORD)v383 )
    {
      v385 = 1;
      v386 = *(_DWORD *)v382 == 0;
      if ( (_DWORD)v383 != 1 )
      {
        v385 = 2;
        v386 += *(_DWORD *)(v382 + 4) == 0;
        if ( (_DWORD)v383 != 2 )
        {
          v385 = 3;
          v386 += *(_DWORD *)(v382 + 8) == 0;
        }
      }
    }
    else
    {
      v386 = 0;
      v385 = 0;
    }
    v387 = 0;
    v388 = (const __m128i *)(v382 + 4 * v383);
    v389 = v381 - v383;
    v390 = 0;
    do
    {
      v391 = _mm_load_si128(v388);
      ++v390;
      ++v388;
      v387 = _mm_sub_epi32(v387, _mm_cmpeq_epi32(v391, (__m128i)0LL));
    }
    while ( v390 < v389 >> 2 );
    v392 = _mm_add_epi32(v387, _mm_srli_si128(v387, 8));
    v393 = (v389 & 0xFFFFFFFC) + v385;
    v394 = v386 + _mm_cvtsi128_si32(_mm_add_epi32(v392, _mm_srli_si128(v392, 4)));
    if ( v389 != (v389 & 0xFFFFFFFC) )
    {
LABEL_531:
      v394 += *(_DWORD *)(v382 + 4LL * (int)v393) == 0;
      if ( (int)(v393 + 1) < v381 )
      {
        v394 += *(_DWORD *)(v382 + 4LL * (int)(v393 + 1)) == 0;
        if ( (int)(v393 + 2) < v381 )
        {
          v394 += *(_DWORD *)(v382 + 4LL * (int)(v393 + 2)) == 0;
          if ( (int)(v393 + 3) < v381 )
          {
            v394 += *(_DWORD *)(v382 + 4LL * (int)(v393 + 3)) == 0;
            if ( (int)(v393 + 4) < v381 )
            {
              v394 += *(_DWORD *)(v382 + 4LL * (int)(v393 + 4)) == 0;
              v395 = v393 + 5;
              if ( v395 < v381 )
                v394 += *(_DWORD *)(v382 + 4LL * v395) == 0;
            }
          }
        }
      }
    }
LABEL_537:
    v326 = v823;
    printf("%c loop %d %d empty rows, %d empty columns\n", 82, v823, v394, v378);
    if ( *((CoinPresolveMatrix **)v3 + 7) != v826 && !v366 )
      goto LABEL_456;
  }
LABEL_457:
  v327 = *((_DWORD *)v4 + 86);
  if ( v327 )
    goto LABEL_62;
  if ( *((char *)v3 + 97) >= 0 )
  {
    *((_DWORD *)v4 + 109) &= ~0x10000u;
    goto LABEL_460;
  }
  v729 = duprow3_action::presolve(v4, *((CoinPresolveMatrix **)v3 + 7), (const CoinPresolveAction *)v42);
  v730 = *((_DWORD *)v3 + 24);
  *((_QWORD *)v3 + 7) = v729;
  if ( v730 < 0 )
  {
    v732 = *(_DWORD *)v4;
    if ( *(int *)v4 <= 0 )
    {
      v745 = 0;
    }
    else
    {
      v733 = *((_QWORD *)v4 + 6);
      v734 = -(int)(v733 >> 2) & 3;
      v735 = v734 + 3;
      if ( (unsigned int)(v734 + 3) < 5 )
        v735 = 5;
      if ( v735 > v732 - 1 )
      {
        v745 = 0;
        v744 = 0;
        goto LABEL_1023;
      }
      if ( (_DWORD)v734 )
      {
        v736 = *(_DWORD *)v733 == 0;
        if ( (_DWORD)v734 == 1 )
        {
          v737 = 1;
        }
        else
        {
          v736 += *(_DWORD *)(v733 + 4) == 0;
          if ( (_DWORD)v734 == 2 )
          {
            v737 = 2;
          }
          else
          {
            v737 = 3;
            v736 += *(_DWORD *)(v733 + 8) == 0;
          }
        }
      }
      else
      {
        v736 = 0;
        v737 = 0;
      }
      v738 = 0;
      v739 = (const __m128i *)(v733 + 4 * v734);
      v740 = v732 - v734;
      v741 = 0;
      do
      {
        v742 = _mm_load_si128(v739);
        ++v741;
        ++v739;
        v738 = _mm_sub_epi32(v738, _mm_cmpeq_epi32(v742, (__m128i)0LL));
      }
      while ( v741 < v740 >> 2 );
      v743 = _mm_add_epi32(v738, _mm_srli_si128(v738, 8));
      v744 = (v740 & 0xFFFFFFFC) + v737;
      v745 = v736 + _mm_cvtsi128_si32(_mm_add_epi32(v743, _mm_srli_si128(v743, 4)));
      if ( (v740 & 0xFFFFFFFC) != v740 )
      {
LABEL_1023:
        v745 += *(_DWORD *)(v733 + 4LL * (int)v744) == 0;
        if ( v732 > (int)(v744 + 1) )
        {
          v745 += *(_DWORD *)(v733 + 4LL * (int)(v744 + 1)) == 0;
          if ( v732 > (int)(v744 + 2) )
          {
            if ( !*(_DWORD *)(v733 + 4LL * (int)(v744 + 2)) )
              ++v745;
            if ( v732 > (int)(v744 + 3) )
            {
              if ( !*(_DWORD *)(v733 + 4LL * (int)(v744 + 3)) )
                ++v745;
              if ( v732 > (int)(v744 + 4) )
              {
                if ( !*(_DWORD *)(v733 + 4LL * (int)(v744 + 4)) )
                  ++v745;
                v746 = v744 + 5;
                if ( v732 > v746 )
                  v745 += *(_DWORD *)(v733 + 4LL * v746) == 0;
              }
            }
          }
        }
      }
    }
    v747 = *((_DWORD *)v4 + 1);
    if ( v747 > 0 )
    {
      v748 = *((_QWORD *)v4 + 36);
      v749 = -(int)(v748 >> 2) & 3;
      v750 = v749 + 3;
      if ( (unsigned int)(v749 + 3) < 5 )
        v750 = 5;
      v354 = v747 - 1 < v750;
      v751 = 0;
      if ( v354 )
        goto LABEL_1046;
      if ( (_DWORD)v749 )
      {
        v327 = *(_DWORD *)v748 == 0;
        if ( (_DWORD)v749 == 1 )
        {
          v751 = 1;
        }
        else
        {
          v327 += *(_DWORD *)(v748 + 4) == 0;
          if ( (_DWORD)v749 == 2 )
          {
            v751 = 2;
          }
          else
          {
            v751 = 3;
            v327 += *(_DWORD *)(v748 + 8) == 0;
          }
        }
      }
      v752 = 0;
      v753 = (const __m128i *)(v748 + 4 * v749);
      v754 = v747 - v749;
      v755 = 0;
      do
      {
        v756 = _mm_load_si128(v753);
        ++v755;
        ++v753;
        v752 = _mm_sub_epi32(v752, _mm_cmpeq_epi32(v756, (__m128i)0LL));
      }
      while ( v754 >> 2 > v755 );
      v757 = _mm_add_epi32(v752, _mm_srli_si128(v752, 8));
      v327 += _mm_cvtsi128_si32(_mm_add_epi32(v757, _mm_srli_si128(v757, 4)));
      v751 += v754 & 0xFFFFFFFC;
      if ( v754 != (v754 & 0xFFFFFFFC) )
      {
LABEL_1046:
        v327 += *(_DWORD *)(v748 + 4LL * v751) == 0;
        if ( v747 > v751 + 1 )
        {
          v327 += *(_DWORD *)(v748 + 4LL * (v751 + 1)) == 0;
          if ( v747 > v751 + 2 )
          {
            if ( !*(_DWORD *)(v748 + 4LL * (v751 + 2)) )
              ++v327;
            if ( v747 > v751 + 3 )
            {
              if ( !*(_DWORD *)(v748 + 4LL * (v751 + 3)) )
                ++v327;
              if ( v747 > v751 + 4 )
              {
                if ( !*(_DWORD *)(v748 + 4LL * (v751 + 4)) )
                  ++v327;
                v758 = v751 + 5;
                if ( v747 > v758 )
                  v327 += *(_DWORD *)(v748 + 4LL * v758) == 0;
              }
            }
          }
        }
      }
    }
    printf("%c loop %d %d empty rows, %d empty columns\n", 90, 0, v327, v745);
  }
  v731 = *((_DWORD *)v4 + 86);
  *((_DWORD *)v4 + 109) &= ~0x10000u;
  if ( v731 )
    goto LABEL_64;
LABEL_460:
  v328 = (CoinPresolveMatrix *)drop_zero_coefficients(v4, *((const CoinPresolveAction **)v3 + 7));
  *((_QWORD *)v3 + 7) = v328;
  v330 = (CoinPresolveMatrix *)drop_empty_cols_action::presolve(v4, v328, v329);
  *((_QWORD *)v3 + 7) = v330;
  result = drop_empty_rows_action::presolve(v4, v330, v331);
  v332 = *((_DWORD *)v4 + 86);
  *((_QWORD *)v3 + 7) = result;
  if ( v332 )
  {
LABEL_64:
    ClpPresolve::destroyPresolve(v3);
    return *((_QWORD *)v3 + 7);
  }
  return result;
}

