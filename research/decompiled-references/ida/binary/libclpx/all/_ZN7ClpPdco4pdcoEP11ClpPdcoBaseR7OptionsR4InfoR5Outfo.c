__int64 __fastcall ClpPdco::pdco(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  __int64 v9; // rsi
  void *v10; // rdi
  _QWORD *v11; // rax
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  double *v15; // rdx
  double v16; // xmm0_8
  double *i; // rax
  double v18; // xmm1_8
  int v19; // eax
  double *v20; // rdx
  __int64 v21; // rcx
  double v22; // xmm1_8
  double *v23; // rax
  __int64 v24; // rcx
  double v25; // xmm2_8
  int v26; // eax
  double *v27; // rdx
  __int64 v28; // rcx
  double v29; // xmm4_8
  double *v30; // rax
  __int64 v31; // rcx
  double v32; // xmm2_8
  int v33; // eax
  double *v34; // rdx
  __int64 v35; // rcx
  double v36; // xmm4_8
  double *v37; // rax
  __int64 v38; // rcx
  double v39; // xmm2_8
  double v40; // xmm3_8
  double v41; // xmm6_8
  unsigned int v42; // eax
  unsigned int v43; // r13d
  int *v44; // r15
  __int64 v45; // r13
  __int64 v46; // rbx
  int v47; // eax
  int v48; // ebx
  __int64 v49; // rdx
  __suseconds_t v50; // rcx
  unsigned __int64 v51; // rsi
  double *v52; // r8
  __suseconds_t tv_usec; // rdi
  int v54; // r14d
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // r12d
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // r10
  double *v61; // r9
  int v62; // eax
  int v63; // eax
  __int64 v64; // rcx
  int *v65; // rax
  __int64 v66; // rdx
  int *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  double v70; // xmm1_8
  int v71; // r9d
  unsigned __int64 v72; // r8
  __int64 v73; // rax
  int v74; // esi
  unsigned __int64 v75; // rcx
  unsigned int v76; // r10d
  unsigned int v77; // edx
  __int64 v78; // rax
  __m128d v79; // xmm1
  signed int v80; // eax
  double *v81; // rdx
  int v82; // eax
  int v83; // r9d
  __m128d v84; // xmm1
  unsigned __int64 v85; // r8
  __int64 v86; // rax
  int v87; // esi
  unsigned __int64 v88; // rcx
  unsigned int v89; // r10d
  unsigned int v90; // edx
  __int64 v91; // rax
  __m128d v92; // xmm2
  signed int v93; // eax
  __int64 v94; // rdx
  int v95; // eax
  int v96; // r9d
  unsigned __int64 v97; // r8
  __int64 v98; // rax
  int v99; // esi
  unsigned __int64 v100; // rcx
  unsigned int v101; // r10d
  unsigned int v102; // edx
  __int64 v103; // rax
  __m128d v104; // xmm2
  signed int v105; // eax
  double *v106; // rdx
  int v107; // eax
  int v108; // r9d
  double *v109; // r8
  __int64 v110; // rax
  int v111; // esi
  double *v112; // rcx
  unsigned int v113; // r10d
  unsigned int v114; // edx
  __int64 v115; // rax
  __m128d v116; // xmm2
  signed int v117; // eax
  __int64 v118; // rdx
  int v119; // eax
  double *v120; // rax
  __m128d v121; // xmm0
  __int64 v122; // rbx
  double *v123; // r12
  double *v124; // rax
  __int64 v125; // rsi
  double *v126; // rdx
  double v127; // xmm0_8
  double *v128; // rax
  __int64 v129; // rdx
  double *v130; // rax
  int v131; // eax
  __int64 v132; // rbx
  double *v133; // rax
  __int64 v134; // rsi
  double *v135; // rax
  __int64 v136; // rcx
  double *v137; // rdx
  int v138; // eax
  bool v139; // cc
  int v140; // r9d
  unsigned __int64 v141; // r8
  __int64 v142; // rax
  int v143; // esi
  unsigned __int64 v144; // rcx
  unsigned int v145; // r10d
  unsigned int v146; // edx
  __int64 v147; // rax
  signed int v148; // eax
  double *v149; // rdx
  int v150; // eax
  int v151; // ebx
  unsigned __int64 v152; // r8
  __int64 v153; // rax
  int v154; // esi
  unsigned __int64 v155; // rcx
  unsigned int v156; // r9d
  unsigned int v157; // edx
  __int64 v158; // rax
  __m128d v159; // xmm1
  signed int v160; // eax
  double *v161; // rdx
  int v162; // eax
  unsigned __int64 v163; // rsi
  unsigned __int64 v164; // rdi
  int v165; // r8d
  __int64 v166; // rax
  unsigned int v167; // r11d
  __int64 v168; // rcx
  __int64 v169; // rax
  __m128d v170; // xmm1
  unsigned __int64 v171; // r9
  unsigned __int64 v172; // rcx
  unsigned int v173; // edx
  signed int v174; // r8d
  __int64 v175; // rax
  double v176; // xmm0_8
  int v177; // r8d
  int v178; // ebx
  unsigned __int64 v179; // rsi
  __int64 v180; // rdi
  int v181; // r8d
  __int64 v182; // rax
  unsigned int v183; // r11d
  __int64 v184; // rcx
  __int64 v185; // rax
  __m128d v186; // xmm1
  unsigned __int64 v187; // r9
  __int64 v188; // rcx
  unsigned int v189; // edx
  signed int v190; // r8d
  __int64 v191; // rax
  double v192; // xmm0_8
  int v193; // r8d
  int v194; // ebx
  __int64 v195; // rdx
  __suseconds_t v196; // rcx
  __int64 v197; // rsi
  unsigned __int64 v198; // r8
  __suseconds_t v199; // rdi
  int v200; // r12d
  __int64 v201; // rax
  int v202; // r13d
  __int64 v203; // rcx
  unsigned int v204; // r11d
  __int64 v205; // rax
  __int64 v206; // r10
  unsigned __int64 v207; // r9
  signed int v208; // r12d
  __int64 v209; // rax
  int v210; // r12d
  int v211; // ebx
  unsigned __int64 v212; // rsi
  unsigned __int64 v213; // rdi
  int v214; // r8d
  __int64 v215; // rax
  unsigned int v216; // r11d
  __int64 v217; // rcx
  __int64 v218; // rax
  __m128d v219; // xmm1
  unsigned __int64 v220; // r9
  unsigned __int64 v221; // rcx
  unsigned int v222; // edx
  signed int v223; // r8d
  __int64 v224; // rax
  double v225; // xmm0_8
  int v226; // r8d
  int v227; // ebx
  __int64 v228; // rdx
  __suseconds_t v229; // rcx
  __int64 v230; // r8
  unsigned __int64 v231; // rsi
  __suseconds_t v232; // rdi
  int v233; // r8d
  __int64 v234; // rax
  unsigned int v235; // r11d
  __int64 v236; // rcx
  __int64 v237; // rax
  __m128d v238; // xmm1
  unsigned __int64 v239; // r9
  __int64 v240; // rax
  double v241; // xmm0_8
  int v242; // edi
  int v243; // r12d
  int v244; // r13d
  unsigned __int64 v245; // rcx
  unsigned __int64 v246; // rbx
  int *v247; // rax
  __int64 v248; // rsi
  __int64 v249; // rdx
  int *v250; // rax
  __int64 v251; // rdx
  int v252; // ebx
  unsigned __int64 v253; // rsi
  double *v254; // rdi
  int v255; // r8d
  __int64 v256; // rax
  unsigned int v257; // r11d
  __int64 v258; // rcx
  __int64 v259; // rax
  __m128d v260; // xmm1
  unsigned __int64 v261; // r9
  double *v262; // rcx
  unsigned int v263; // edx
  signed int v264; // r8d
  __int64 v265; // rax
  double v266; // xmm0_8
  int v267; // r8d
  int v268; // ebx
  unsigned __int64 v269; // rsi
  double *v270; // r8
  unsigned __int64 v271; // rdi
  __int64 v272; // rax
  unsigned int v273; // edx
  __int64 v274; // rcx
  unsigned int v275; // r11d
  __int64 v276; // rax
  unsigned __int64 v277; // r10
  double *v278; // r9
  unsigned __int64 v279; // rcx
  signed int v280; // edx
  int v281; // ebx
  __int64 v282; // rdx
  __suseconds_t v283; // rcx
  unsigned __int64 v284; // rsi
  double *v285; // r8
  __suseconds_t v286; // rdi
  __int64 v287; // rax
  unsigned int v288; // edx
  __int64 v289; // rcx
  unsigned int v290; // r11d
  __int64 v291; // rax
  unsigned __int64 v292; // r10
  double *v293; // r9
  __suseconds_t v294; // rcx
  int v295; // ebx
  unsigned __int64 v296; // rsi
  unsigned __int64 v297; // r8
  unsigned __int64 v298; // rdi
  __int64 v299; // rax
  unsigned int v300; // edx
  __int64 v301; // rcx
  unsigned int v302; // r11d
  __int64 v303; // rax
  unsigned __int64 v304; // r10
  unsigned __int64 v305; // r9
  unsigned __int64 v306; // rcx
  signed int v307; // edx
  int v308; // ebx
  __int64 v309; // rdx
  __suseconds_t v310; // rcx
  unsigned __int64 v311; // rsi
  double *v312; // r8
  __suseconds_t v313; // rdi
  __int64 v314; // rax
  unsigned int v315; // edx
  __int64 v316; // rcx
  unsigned int v317; // r11d
  __int64 v318; // rax
  unsigned __int64 v319; // r10
  double *v320; // r9
  __suseconds_t v321; // rcx
  int *v322; // rbx
  double *v323; // rax
  __int64 v324; // rbx
  double *v325; // rax
  __int64 v326; // rbx
  double *v327; // rax
  __int64 v328; // rbx
  double *v329; // rax
  int v330; // eax
  double *v331; // rdx
  __int64 v332; // rcx
  double v333; // xmm1_8
  double *v334; // rax
  __int64 v335; // rcx
  double v336; // xmm0_8
  double v337; // xmm0_8
  double *v338; // rdx
  double *v339; // rax
  double v340; // xmm2_8
  double v341; // xmm0_8
  int v342; // r12d
  __int64 v343; // r9
  double *v344; // r10
  int v345; // ebx
  __int64 v346; // rsi
  __int64 v347; // rdi
  double *v348; // r8
  __int64 v349; // rcx
  double v350; // xmm1_8
  double v351; // xmm2_8
  int *v352; // rax
  __int64 v353; // rdx
  double v354; // xmm0_8
  __int64 v355; // rax
  __int64 v356; // rdx
  double v357; // xmm0_8
  double v358; // xmm0_8
  int *v359; // rax
  __int64 v360; // rdx
  double v361; // xmm1_8
  __int64 v362; // rax
  __int64 v363; // rdx
  double v364; // xmm2_8
  double *v365; // rax
  double *v366; // rcx
  double v367; // xmm0_8
  double *j; // rdx
  double v369; // xmm1_8
  double v370; // xmm1_8
  double *v371; // rax
  double *v372; // rcx
  double v373; // xmm0_8
  double *k; // rdx
  double v375; // xmm1_8
  double v376; // xmm1_8
  int v377; // eax
  int *v378; // rbx
  double *v379; // rax
  double *v380; // rax
  double v381; // xmm1_8
  double *v382; // rax
  double v383; // xmm1_8
  int *v384; // rbx
  double *v385; // rax
  double *v386; // rax
  double v387; // xmm1_8
  double *v388; // rax
  double v389; // xmm1_8
  double *v390; // rdx
  double v391; // xmm0_8
  double *m; // rax
  double v393; // xmm1_8
  int v394; // ebx
  unsigned __int64 v395; // rdi
  double *v396; // rax
  int v397; // r8d
  __int64 v398; // rdx
  unsigned int v399; // r11d
  __int64 v400; // rsi
  __int64 v401; // rdx
  __m128d v402; // xmm1
  unsigned __int64 v403; // r9
  double *v404; // rsi
  unsigned int v405; // ecx
  signed int v406; // r8d
  __int64 v407; // rdx
  double v408; // xmm0_8
  int v409; // r8d
  int v410; // edx
  double v411; // xmm0_8
  __int64 v412; // rdx
  double v413; // xmm1_8
  int v414; // ebx
  unsigned __int64 v415; // rdi
  double *v416; // rax
  int v417; // r8d
  __int64 v418; // rdx
  unsigned int v419; // r11d
  __int64 v420; // rsi
  __int64 v421; // rdx
  __m128d v422; // xmm1
  unsigned __int64 v423; // r9
  double *v424; // rsi
  unsigned int v425; // ecx
  signed int v426; // r8d
  __int64 v427; // rdx
  double v428; // xmm0_8
  int v429; // r8d
  int v430; // edx
  double v431; // xmm0_8
  __int64 v432; // rdx
  double v433; // xmm1_8
  double v434; // xmm1_8
  double v435; // xmm0_8
  double v436; // xmm0_8
  __m128d v437; // xmm1
  __int64 v438; // rdx
  __int64 v439; // rcx
  __int64 v440; // r8
  __int64 v441; // rbx
  double v442; // xmm5_8
  double *v443; // rax
  double v444; // xmm0_8
  __int64 v445; // rcx
  int *v446; // rbx
  int ii; // r13d
  double *v448; // rax
  int v449; // r13d
  int *jj; // rbx
  double *v451; // rax
  int *v452; // rbx
  int kk; // r13d
  double *v454; // rax
  int v455; // r13d
  int *v456; // rbx
  double *v457; // rax
  __int64 v458; // rsi
  double *v459; // rax
  int v460; // edx
  int *v461; // rbx
  int v462; // r13d
  double *v463; // rax
  __int64 v464; // rsi
  double *v465; // rax
  int v466; // eax
  __int64 v467; // rdi
  __int64 v468; // rcx
  __int64 v469; // rsi
  __int64 v470; // rax
  double v471; // xmm0_8
  __int64 v472; // rsi
  double *v473; // r9
  int v474; // ecx
  double v475; // xmm4_8
  __int64 v476; // rax
  double v477; // xmm3_8
  __int64 v478; // rax
  double v479; // xmm2_8
  unsigned __int64 v480; // rax
  double v481; // xmm2_8
  double v482; // xmm2_8
  int v483; // ebx
  unsigned __int64 v484; // rsi
  unsigned __int64 v485; // rdi
  int v486; // r8d
  __int64 v487; // rcx
  __int64 v488; // rax
  unsigned int v489; // r10d
  unsigned int v490; // edx
  __int64 v491; // rcx
  unsigned __int64 v492; // r11
  unsigned __int64 v493; // rcx
  signed int v494; // r8d
  __int64 v495; // rax
  double v496; // xmm0_8
  int v497; // r8d
  int v498; // ebx
  __int64 v499; // rdx
  __suseconds_t v500; // rcx
  __int64 v501; // r8
  unsigned __int64 v502; // rdi
  unsigned __int64 v503; // r9
  __suseconds_t v504; // rsi
  int v505; // r8d
  __int64 v506; // rdx
  __int64 v507; // rax
  unsigned int v508; // r12d
  __int64 v509; // rdx
  unsigned __int64 v510; // r11
  unsigned __int64 v511; // r10
  __int64 v512; // rax
  int v513; // ebx
  unsigned __int64 v514; // rsi
  unsigned __int64 v515; // rdi
  int v516; // r8d
  __int64 v517; // rcx
  __int64 v518; // rax
  unsigned int v519; // r10d
  unsigned int v520; // edx
  __int64 v521; // rcx
  unsigned __int64 v522; // r11
  unsigned __int64 v523; // rcx
  signed int v524; // r8d
  __int64 v525; // rax
  double v526; // xmm0_8
  int v527; // r8d
  int v528; // ebx
  __m128d v529; // xmm0
  __int64 v530; // rdx
  __suseconds_t v531; // rcx
  __int64 v532; // r8
  unsigned __int64 v533; // rdi
  unsigned __int64 v534; // r9
  __suseconds_t v535; // rsi
  int v536; // r8d
  __int64 v537; // rdx
  __int64 v538; // rax
  unsigned int v539; // r12d
  __int64 v540; // rdx
  unsigned __int64 v541; // r11
  unsigned __int64 v542; // r10
  __int64 v543; // rax
  int v544; // r12d
  int *v545; // rbx
  double *v546; // rax
  __int64 v547; // rsi
  double *v548; // rax
  int *v549; // rbx
  int mm; // r12d
  double *v551; // rax
  __int64 v552; // rsi
  double *v553; // rax
  int v554; // r8d
  unsigned __int64 v555; // rdi
  __int64 v556; // rax
  int v557; // esi
  int v558; // r9d
  unsigned __int64 v559; // rcx
  unsigned int v560; // edx
  unsigned int v561; // r10d
  __int64 v562; // rax
  unsigned int v563; // r10d
  signed int v564; // eax
  double *v565; // rdx
  int v566; // eax
  int v567; // ebx
  unsigned __int64 v568; // rdi
  __int64 v569; // rax
  int v570; // esi
  int v571; // r8d
  unsigned __int64 v572; // rcx
  unsigned int v573; // edx
  unsigned int v574; // r9d
  __int64 v575; // rax
  unsigned int v576; // r9d
  signed int v577; // eax
  double *v578; // rdx
  int v579; // eax
  unsigned __int64 v580; // rsi
  unsigned __int64 v581; // rdi
  int v582; // r8d
  __int64 v583; // rcx
  unsigned int v584; // r10d
  __int64 v585; // rax
  __int64 v586; // rcx
  unsigned int v587; // edx
  unsigned __int64 v588; // r11
  unsigned __int64 v589; // rcx
  signed int v590; // r8d
  __int64 v591; // rax
  double v592; // xmm0_8
  int v593; // r8d
  int v594; // ebx
  unsigned __int64 v595; // rsi
  __int64 v596; // rdi
  int v597; // r8d
  __int64 v598; // rcx
  unsigned int v599; // r10d
  __int64 v600; // rax
  __int64 v601; // rcx
  unsigned int v602; // edx
  unsigned __int64 v603; // r11
  __int64 v604; // rcx
  signed int v605; // r8d
  __int64 v606; // rax
  double v607; // xmm0_8
  int v608; // r8d
  int v609; // ebx
  __int64 v610; // rdx
  __suseconds_t v611; // rcx
  __int64 v612; // r8
  __int64 v613; // rdi
  unsigned __int64 v614; // r9
  __suseconds_t v615; // rsi
  int v616; // r8d
  __int64 v617; // rdx
  __int64 v618; // rax
  unsigned int v619; // r12d
  __int64 v620; // rdx
  __int64 v621; // r11
  unsigned __int64 v622; // r10
  __int64 v623; // rax
  int v624; // ebx
  unsigned __int64 v625; // rsi
  unsigned __int64 v626; // rdi
  int v627; // r8d
  __int64 v628; // rcx
  unsigned int v629; // r10d
  __int64 v630; // rax
  __int64 v631; // rcx
  unsigned int v632; // edx
  unsigned __int64 v633; // r11
  unsigned __int64 v634; // rcx
  signed int v635; // r8d
  __int64 v636; // rax
  double v637; // xmm0_8
  int v638; // r8d
  int v639; // ebx
  __int64 v640; // rdx
  __suseconds_t v641; // rcx
  __int64 v642; // r8
  unsigned __int64 v643; // rsi
  __suseconds_t v644; // rdi
  int v645; // r8d
  __int64 v646; // rcx
  unsigned int v647; // r10d
  __int64 v648; // rax
  __int64 v649; // rcx
  unsigned __int64 v650; // r11
  __int64 v651; // rax
  double v652; // xmm0_8
  int v653; // r13d
  int v654; // edi
  int v655; // ebx
  unsigned __int64 v656; // rcx
  unsigned __int64 v657; // r12
  int *v658; // rax
  __int64 v659; // rdx
  int *v660; // rax
  __int64 v661; // rdx
  int v662; // r12d
  unsigned __int64 v663; // rsi
  double *v664; // rdi
  int v665; // r8d
  __int64 v666; // rcx
  __int64 v667; // rax
  unsigned int v668; // r10d
  unsigned int v669; // edx
  __int64 v670; // rcx
  unsigned __int64 v671; // r11
  double *v672; // rcx
  signed int v673; // r8d
  __int64 v674; // rax
  double v675; // xmm0_8
  int v676; // r8d
  int v677; // r12d
  unsigned __int64 v678; // rdi
  double *v679; // r9
  unsigned __int64 v680; // rsi
  int v681; // r8d
  __int64 v682; // rdx
  unsigned int v683; // ecx
  unsigned int v684; // eax
  __int64 v685; // rdx
  unsigned __int64 v686; // r11
  double *v687; // r10
  unsigned int v688; // r13d
  unsigned __int64 v689; // rdx
  __int64 v690; // rax
  signed int v691; // r8d
  __int64 v692; // rax
  int v693; // r8d
  int v694; // r12d
  __int64 v695; // rdx
  __int64 v696; // rcx
  __int64 v697; // r8
  unsigned __int64 v698; // rdi
  double *v699; // r9
  __suseconds_t v700; // rsi
  int v701; // r8d
  __int64 v702; // rdx
  unsigned int v703; // ecx
  unsigned int v704; // eax
  __int64 v705; // rdx
  unsigned __int64 v706; // r11
  double *v707; // r10
  unsigned int v708; // r13d
  __int64 v709; // rax
  __int64 v710; // rax
  int v711; // r13d
  unsigned __int64 v712; // rdi
  unsigned __int64 v713; // r9
  unsigned __int64 v714; // rsi
  __int64 v715; // rdx
  unsigned int v716; // ecx
  unsigned int v717; // eax
  __int64 v718; // rdx
  unsigned __int64 v719; // r11
  unsigned __int64 v720; // r10
  unsigned int v721; // r8d
  unsigned __int64 v722; // rdx
  __int64 v723; // rax
  signed int v724; // r8d
  __int64 v725; // rax
  int v726; // r8d
  int v727; // r13d
  __int64 v728; // rdx
  __int64 v729; // rcx
  __int64 v730; // r8
  unsigned __int64 v731; // rdi
  double *v732; // r9
  __suseconds_t v733; // rsi
  __int64 v734; // rdx
  unsigned int v735; // ecx
  unsigned int v736; // eax
  __int64 v737; // rdx
  unsigned __int64 v738; // r11
  double *v739; // r10
  unsigned int v740; // r8d
  __int64 v741; // rax
  __int64 v742; // rax
  __int64 v743; // r12
  double *v744; // rax
  int *v745; // r12
  double *v746; // rax
  int v747; // eax
  int *v748; // r12
  __int64 v749; // r13
  double *v750; // rax
  __int64 v751; // r12
  int v752; // eax
  double *v753; // rdx
  __int64 v754; // rcx
  double v755; // xmm1_8
  double *v756; // rax
  __int64 v757; // rcx
  double v758; // xmm0_8
  double v759; // xmm0_8
  double *v760; // rdx
  double v761; // xmm0_8
  double *nn; // rax
  double v763; // xmm1_8
  int v764; // r13d
  int v765; // r12d
  __int64 v766; // r8
  double *v767; // r9
  __int64 v768; // r10
  __int64 v769; // rcx
  double *v770; // rsi
  __int64 v771; // rdi
  double v772; // xmm1_8
  double v773; // xmm2_8
  int *v774; // rax
  __int64 v775; // rdx
  double v776; // xmm0_8
  double v777; // xmm3_8
  double v778; // xmm6_8
  double v779; // xmm0_8
  __int64 v780; // rax
  __int64 v781; // rdx
  double v782; // xmm0_8
  double v783; // xmm3_8
  double v784; // xmm7_8
  double v785; // xmm0_8
  double *v786; // rax
  double *v787; // rcx
  double v788; // xmm0_8
  double *i1; // rdx
  double v790; // xmm1_8
  double v791; // xmm1_8
  double *v792; // rax
  double *v793; // rcx
  double v794; // xmm0_8
  double *i2; // rdx
  double v796; // xmm1_8
  double v797; // xmm1_8
  int *v798; // rbx
  __int64 v799; // r13
  double *v800; // rax
  double *v801; // rax
  double v802; // xmm1_8
  double *v803; // rax
  double v804; // xmm1_8
  __int64 v805; // r12
  int *v806; // rbx
  double *v807; // rax
  double *v808; // rax
  double v809; // xmm1_8
  double *v810; // rax
  double v811; // xmm1_8
  double *v812; // rdx
  double v813; // xmm0_8
  double *i3; // rax
  double v815; // xmm1_8
  int v816; // ebx
  unsigned __int64 v817; // rsi
  unsigned __int64 v818; // rdi
  int v819; // r8d
  __int64 v820; // rcx
  unsigned int v821; // r10d
  __int64 v822; // rax
  __m128d v823; // xmm1
  __int64 v824; // rcx
  unsigned __int64 v825; // r11
  unsigned int v826; // edx
  unsigned __int64 v827; // rcx
  signed int v828; // r8d
  __int64 v829; // rax
  double v830; // xmm0_8
  int v831; // r8d
  int v832; // ebx
  __int64 v833; // rdx
  int *v834; // rcx
  __int64 v835; // r8
  unsigned __int64 v836; // rdi
  unsigned __int64 v837; // r9
  __suseconds_t v838; // rsi
  int v839; // r8d
  __int64 v840; // rdx
  __int64 v841; // rax
  unsigned int v842; // r13d
  __int64 v843; // rdx
  unsigned __int64 v844; // r11
  unsigned __int64 v845; // r10
  __int64 v846; // rax
  int v847; // ebx
  unsigned __int64 v848; // rsi
  unsigned __int64 v849; // rdi
  int v850; // r8d
  __int64 v851; // rcx
  unsigned int v852; // r10d
  __int64 v853; // rax
  __m128d v854; // xmm1
  __int64 v855; // rcx
  unsigned __int64 v856; // r11
  unsigned int v857; // edx
  unsigned __int64 v858; // rcx
  signed int v859; // r8d
  __int64 v860; // rax
  double v861; // xmm0_8
  int v862; // r8d
  int v863; // ebx
  __int64 v864; // rdx
  int *v865; // rcx
  __int64 v866; // r8
  unsigned __int64 v867; // rdi
  unsigned __int64 v868; // r9
  __suseconds_t v869; // rsi
  int v870; // r8d
  __int64 v871; // rdx
  __int64 v872; // rax
  unsigned int v873; // r13d
  __int64 v874; // rdx
  unsigned __int64 v875; // r11
  unsigned __int64 v876; // r10
  __int64 v877; // rax
  int v878; // r12d
  int *v879; // rbx
  double *v880; // rax
  __int64 v881; // rsi
  double *v882; // rax
  int *v883; // rbx
  int v884; // r12d
  double *v885; // rax
  __int64 v886; // rsi
  double *v887; // rax
  int v888; // eax
  int v889; // eax
  int v890; // r12d
  __int64 v891; // rdx
  __int64 v892; // rcx
  __int64 v893; // r8
  unsigned __int64 v894; // rdi
  double *v895; // r9
  double *v896; // rsi
  __int64 v897; // rdx
  unsigned int v898; // ecx
  unsigned int v899; // eax
  __int64 v900; // rdx
  unsigned __int64 v901; // r11
  double *v902; // r10
  unsigned int v903; // r8d
  __int64 v904; // rax
  __int64 v905; // rax
  int v906; // ebx
  unsigned __int64 v907; // rdi
  double *v908; // rax
  int v909; // r8d
  __int64 v910; // rdx
  unsigned int v911; // ecx
  int v912; // r10d
  __int64 v913; // rsi
  unsigned int v914; // r9d
  __int64 v915; // rdx
  unsigned int v916; // r9d
  unsigned __int64 v917; // r11
  double *v918; // rsi
  signed int v919; // r8d
  __int64 v920; // rdx
  double v921; // xmm0_8
  int v922; // r8d
  int v923; // edx
  double v924; // xmm0_8
  __int64 v925; // rdx
  double v926; // xmm1_8
  int v927; // ebx
  unsigned __int64 v928; // rdi
  double *v929; // rax
  int v930; // r8d
  __int64 v931; // rdx
  unsigned int v932; // ecx
  int v933; // r10d
  __int64 v934; // rsi
  unsigned int v935; // r9d
  __int64 v936; // rdx
  unsigned int v937; // r9d
  unsigned __int64 v938; // r11
  double *v939; // rsi
  signed int v940; // r8d
  __int64 v941; // rdx
  double v942; // xmm0_8
  int v943; // r8d
  int v944; // edx
  double v945; // xmm0_8
  __int64 v946; // rdx
  double v947; // xmm1_8
  double v948; // xmm1_8
  bool v949; // r12
  double v950; // xmm0_8
  double v951; // xmm0_8
  double v952; // xmm0_8
  double v953; // xmm0_8
  int v954; // r12d
  double v955; // xmm1_8
  __int64 v956; // r9
  double *v957; // r10
  __int64 v958; // rcx
  __int64 v959; // rdi
  double *v960; // r8
  __int64 v961; // rsi
  int *v962; // r13
  int *v963; // rax
  __int64 v964; // rbx
  __int64 v965; // rdx
  __int64 v966; // rax
  __int64 v967; // rdx
  double v968; // xmm0_8
  int *v969; // rax
  __int64 v970; // rdx
  double v971; // xmm1_8
  __int64 v972; // rax
  __int64 v973; // rdx
  double v974; // xmm2_8
  double *v975; // rax
  double *v976; // rcx
  double v977; // xmm0_8
  double *i4; // rdx
  double v979; // xmm1_8
  double v980; // xmm1_8
  double *v981; // rax
  double *v982; // rcx
  double v983; // xmm0_8
  double *i5; // rdx
  double v985; // xmm1_8
  double v986; // xmm1_8
  int *v987; // rbx
  __int64 v988; // r12
  double *v989; // rax
  double *v990; // rax
  double v991; // xmm1_8
  double *v992; // rax
  double v993; // xmm1_8
  int *v994; // rbx
  double *v995; // rax
  double *v996; // rax
  double v997; // xmm1_8
  char *v998; // rax
  double *v999; // rdx
  double v1000; // xmm0_8
  double *i6; // rax
  double v1002; // xmm1_8
  double v1003; // xmm4_8
  unsigned int v1004; // r13d
  __int64 v1005; // r8
  __int64 v1006; // rbx
  _QWORD *v1007; // r12
  int v1008; // eax
  int v1009; // eax
  double *v1010; // rdx
  __int64 v1011; // rcx
  double v1012; // xmm0_8
  double *v1013; // rax
  __int64 v1014; // rcx
  double v1015; // xmm1_8
  double *v1016; // rdx
  double v1017; // xmm0_8
  double *i7; // rax
  double v1019; // xmm1_8
  double *v1020; // rdx
  double v1021; // xmm0_8
  double *i8; // rax
  double v1023; // xmm1_8
  int v1024; // esi
  unsigned __int64 v1025; // r8
  __int64 v1026; // rax
  int v1027; // edi
  unsigned __int64 v1028; // rcx
  unsigned int v1029; // r10d
  unsigned int v1030; // edx
  __int64 v1031; // rax
  __m128d v1032; // xmm1
  signed int v1033; // eax
  double *v1034; // rdx
  int v1035; // eax
  int v1036; // r9d
  unsigned __int64 v1037; // r8
  __int64 v1038; // rax
  int v1039; // edi
  unsigned __int64 v1040; // rcx
  unsigned int v1041; // r10d
  unsigned int v1042; // edx
  __int64 v1043; // rax
  __m128d v1044; // xmm1
  signed int v1045; // eax
  double *v1046; // rdx
  int v1047; // eax
  int v1048; // r9d
  double *v1049; // r8
  __int64 v1050; // rax
  int v1051; // edi
  double *v1052; // rcx
  unsigned int v1053; // r10d
  unsigned int v1054; // edx
  __int64 v1055; // rax
  __m128d v1056; // xmm1
  signed int v1057; // eax
  double *v1058; // rdx
  int v1059; // eax
  double *v1060; // rdx
  double v1061; // xmm1_8
  double *i9; // rax
  double v1063; // xmm0_8
  double v1064; // xmm0_8
  double *v1065; // rdx
  double v1066; // xmm0_8
  double *i10; // rax
  double v1068; // xmm1_8
  double *v1069; // rdx
  double v1070; // xmm0_8
  double *i11; // rax
  double v1072; // xmm1_8
  unsigned int i12; // r15d
  __int64 v1074; // rbx
  __int64 i13; // r15
  unsigned __int64 v1077; // rax
  __int64 v1078; // rax
  unsigned __int64 v1079; // rax
  unsigned __int64 v1080; // rax
  unsigned __int64 v1081; // rax
  __int64 v1082; // rax
  __int64 v1083; // rax
  __int64 v1084; // rax
  __int64 v1085; // rax
  __int64 v1086; // rax
  __int64 v1087; // rax
  __int64 v1088; // rax
  __int64 v1089; // rax
  __int64 v1090; // rax
  __int64 v1091; // rax
  __int64 v1092; // rax
  __int64 v1093; // rax
  __int64 v1094; // rax
  unsigned __int64 v1095; // rax
  int v1096; // ebx
  double v1097; // xmm0_8
  int v1098; // ebx
  __int64 v1099; // rdx
  __suseconds_t v1100; // rcx
  unsigned __int64 v1101; // rsi
  __suseconds_t v1102; // r8
  int v1103; // edi
  __int64 v1104; // rax
  unsigned int v1105; // r11d
  __int64 v1106; // rcx
  __int64 v1107; // rax
  unsigned __int64 v1108; // r9
  signed int v1109; // edi
  __int64 v1110; // rax
  int v1111; // edi
  __int64 v1112; // rbx
  __int64 v1113; // rcx
  int v1114; // eax
  double *v1115; // rbx
  _QWORD *v1116; // r12
  double v1117; // xmm0_8
  __int64 v1118; // rbx
  double *v1119; // rax
  double *v1120; // rbx
  int v1121; // r12d
  double *v1122; // rax
  int v1123; // ebx
  __int64 v1124; // rdx
  __suseconds_t v1125; // rcx
  unsigned __int64 v1126; // rsi
  double *v1127; // r8
  __suseconds_t v1128; // rdi
  int v1129; // r12d
  __int64 v1130; // rax
  int v1131; // r13d
  __int64 v1132; // rcx
  unsigned int v1133; // r11d
  __int64 v1134; // rax
  unsigned __int64 v1135; // r10
  double *v1136; // r9
  signed int v1137; // r12d
  __int64 v1138; // rax
  int v1139; // r12d
  __int64 v1140; // rbx
  int v1141; // eax
  int v1142; // ebx
  unsigned __int64 v1143; // rdi
  double *v1144; // r8
  unsigned __int64 v1145; // rsi
  int v1146; // r12d
  __int64 v1147; // rax
  unsigned int v1148; // edx
  unsigned int v1149; // r13d
  __int64 v1150; // rcx
  __int64 v1151; // rax
  unsigned __int64 v1152; // r10
  double *v1153; // r9
  unsigned __int64 v1154; // rcx
  signed int v1155; // r12d
  __int64 v1156; // rax
  int v1157; // r12d
  int v1158; // ebx
  __int64 v1159; // rdx
  __suseconds_t v1160; // rcx
  unsigned __int64 v1161; // rdi
  unsigned __int64 v1162; // r8
  __suseconds_t v1163; // rsi
  int v1164; // r12d
  __int64 v1165; // rax
  unsigned int v1166; // r13d
  __int64 v1167; // rcx
  __int64 v1168; // rax
  unsigned __int64 v1169; // r10
  unsigned __int64 v1170; // r9
  signed int v1171; // r12d
  __int64 v1172; // rax
  int v1173; // r12d
  unsigned __int64 v1174; // rdx
  unsigned __int64 v1175; // rdx
  int v1176; // ebx
  __int64 v1177; // rdx
  unsigned __int64 v1178; // rcx
  unsigned __int64 v1179; // rsi
  double *v1180; // r8
  double *v1181; // rdi
  __int64 v1182; // rax
  unsigned int v1183; // edx
  unsigned int v1184; // r11d
  __int64 v1185; // rcx
  __int64 v1186; // rax
  __int64 v1187; // r10
  char *v1188; // r9
  char *v1189; // rcx
  int v1190; // eax
  int v1191; // eax
  int v1192; // ebx
  __int64 v1193; // rdx
  __suseconds_t v1194; // rcx
  double *v1195; // rsi
  double *v1196; // r8
  __suseconds_t v1197; // rdi
  int v1198; // r12d
  __int64 v1199; // rax
  unsigned int v1200; // edx
  int v1201; // r15d
  unsigned int v1202; // r11d
  __int64 v1203; // rcx
  __int64 v1204; // rax
  char *v1205; // r10
  char *v1206; // r9
  int v1207; // eax
  int v1208; // eax
  __int64 v1209; // rax
  unsigned __int64 v1210; // rax
  __int64 v1211; // rax
  unsigned __int64 v1212; // rax
  unsigned __int64 v1213; // rax
  __int64 v1214; // rax
  unsigned __int64 v1215; // rax
  unsigned __int64 v1216; // rax
  __int64 v1217; // rax
  __int64 v1218; // rax
  __int64 v1219; // rax
  unsigned __int64 v1220; // rdx
  unsigned __int64 v1221; // rax
  unsigned __int64 v1222; // rdx
  __int64 v1223; // rax
  __int64 v1224; // rax
  unsigned __int64 v1225; // rax
  unsigned __int64 v1226; // rax
  unsigned __int64 v1227; // rax
  int v1228; // [rsp+0h] [rbp-8A0h]
  int v1229; // [rsp+8h] [rbp-898h]
  __int64 v1230; // [rsp+10h] [rbp-890h]
  double v1231; // [rsp+18h] [rbp-888h]
  __int64 v1232; // [rsp+20h] [rbp-880h]
  double *v1233; // [rsp+28h] [rbp-878h]
  int *v1234; // [rsp+30h] [rbp-870h]
  __int64 v1235; // [rsp+38h] [rbp-868h]
  __int64 v1236; // [rsp+40h] [rbp-860h]
  ClpLsqr *v1237; // [rsp+48h] [rbp-858h]
  char *v1238; // [rsp+50h] [rbp-850h]
  char *v1239; // [rsp+58h] [rbp-848h]
  int *v1240; // [rsp+60h] [rbp-840h]
  double v1241; // [rsp+68h] [rbp-838h]
  __m128d v1242; // [rsp+70h] [rbp-830h]
  __m128d v1243; // [rsp+80h] [rbp-820h]
  unsigned int *v1244; // [rsp+90h] [rbp-810h]
  double v1245; // [rsp+98h] [rbp-808h]
  __int64 v1246; // [rsp+A0h] [rbp-800h]
  double *v1247; // [rsp+A8h] [rbp-7F8h]
  double v1248; // [rsp+B0h] [rbp-7F0h]
  int v1249; // [rsp+B8h] [rbp-7E8h]
  int v1250; // [rsp+BCh] [rbp-7E4h]
  double v1251; // [rsp+C0h] [rbp-7E0h]
  _QWORD *v1253; // [rsp+D0h] [rbp-7D0h]
  __int64 v1254; // [rsp+D8h] [rbp-7C8h]
  double v1255; // [rsp+E0h] [rbp-7C0h]
  double v1256; // [rsp+E8h] [rbp-7B8h]
  int v1257; // [rsp+F0h] [rbp-7B0h]
  int v1258; // [rsp+F4h] [rbp-7ACh]
  double v1259; // [rsp+F8h] [rbp-7A8h]
  double v1260; // [rsp+F8h] [rbp-7A8h]
  double v1261; // [rsp+100h] [rbp-7A0h]
  double v1262; // [rsp+108h] [rbp-798h]
  double v1263; // [rsp+118h] [rbp-788h]
  unsigned int v1264; // [rsp+128h] [rbp-778h]
  int v1265; // [rsp+12Ch] [rbp-774h]
  double v1266; // [rsp+130h] [rbp-770h]
  double v1267; // [rsp+138h] [rbp-768h]
  double n; // [rsp+140h] [rbp-760h]
  __m128d v1269; // [rsp+150h] [rbp-750h]
  __m128d v1270; // [rsp+160h] [rbp-740h]
  __m128d v1271; // [rsp+170h] [rbp-730h]
  __m128d v1272; // [rsp+180h] [rbp-720h]
  __m128d v1273; // [rsp+190h] [rbp-710h]
  double v1274; // [rsp+1A0h] [rbp-700h]
  double *v1275; // [rsp+1A8h] [rbp-6F8h]
  double v1276; // [rsp+1B0h] [rbp-6F0h]
  double v1277; // [rsp+1B8h] [rbp-6E8h]
  double v1278; // [rsp+1C0h] [rbp-6E0h]
  double v1279; // [rsp+1C8h] [rbp-6D8h]
  double v1280; // [rsp+1D0h] [rbp-6D0h]
  __m128d v1281; // [rsp+1D0h] [rbp-6D0h]
  double v1282; // [rsp+1E0h] [rbp-6C0h]
  double v1283; // [rsp+1E8h] [rbp-6B8h]
  double v1284; // [rsp+1F0h] [rbp-6B0h]
  int v1285; // [rsp+1F8h] [rbp-6A8h]
  double x; // [rsp+200h] [rbp-6A0h]
  double v1287; // [rsp+228h] [rbp-678h]
  int *v1288; // [rsp+240h] [rbp-660h]
  double v1289; // [rsp+248h] [rbp-658h]
  double v1290; // [rsp+250h] [rbp-650h]
  int v1291; // [rsp+250h] [rbp-650h]
  double v1293; // [rsp+288h] [rbp-618h]
  double v1294; // [rsp+288h] [rbp-618h]
  double v1295; // [rsp+288h] [rbp-618h]
  double *v1296; // [rsp+290h] [rbp-610h]
  double v1297; // [rsp+290h] [rbp-610h]
  double v1298; // [rsp+290h] [rbp-610h]
  double v1299; // [rsp+290h] [rbp-610h]
  __int64 v1300; // [rsp+298h] [rbp-608h]
  __int64 v1301; // [rsp+2A0h] [rbp-600h]
  char *v1302; // [rsp+2A8h] [rbp-5F8h]
  __int64 v1303; // [rsp+2B0h] [rbp-5F0h]
  __int64 v1304; // [rsp+2B0h] [rbp-5F0h]
  double v1305; // [rsp+2B0h] [rbp-5F0h]
  double v1306; // [rsp+2B0h] [rbp-5F0h]
  double v1307; // [rsp+2B0h] [rbp-5F0h]
  double v1308; // [rsp+2B0h] [rbp-5F0h]
  double v1309; // [rsp+2B0h] [rbp-5F0h]
  double v1310; // [rsp+2B0h] [rbp-5F0h]
  double v1311; // [rsp+2B0h] [rbp-5F0h]
  __int64 v1312; // [rsp+2B0h] [rbp-5F0h]
  double *v1313; // [rsp+2B0h] [rbp-5F0h]
  double *v1314; // [rsp+2B0h] [rbp-5F0h]
  double *v1315; // [rsp+2B0h] [rbp-5F0h]
  int *v1316; // [rsp+2D8h] [rbp-5C8h]
  double v1317; // [rsp+2E0h] [rbp-5C0h]
  double v1318; // [rsp+2E0h] [rbp-5C0h]
  double v1319; // [rsp+2E0h] [rbp-5C0h]
  double v1320; // [rsp+2E0h] [rbp-5C0h]
  double v1321; // [rsp+2E0h] [rbp-5C0h]
  double v1322; // [rsp+2E0h] [rbp-5C0h]
  double v1323; // [rsp+2E0h] [rbp-5C0h]
  double v1324; // [rsp+2E0h] [rbp-5C0h]
  double v1325; // [rsp+2E0h] [rbp-5C0h]
  double v1326; // [rsp+2E0h] [rbp-5C0h]
  double v1327; // [rsp+2E0h] [rbp-5C0h]
  double v1328; // [rsp+2E0h] [rbp-5C0h]
  int v1329; // [rsp+2E0h] [rbp-5C0h]
  double v1330; // [rsp+2E0h] [rbp-5C0h]
  double v1331; // [rsp+2E0h] [rbp-5C0h]
  double *v1332; // [rsp+2E0h] [rbp-5C0h]
  double *v1333; // [rsp+2E0h] [rbp-5C0h]
  double *v1334; // [rsp+2E0h] [rbp-5C0h]
  double v1335; // [rsp+2E8h] [rbp-5B8h]
  int v1336; // [rsp+2E8h] [rbp-5B8h]
  unsigned int v1337; // [rsp+2E8h] [rbp-5B8h]
  int v1338; // [rsp+2E8h] [rbp-5B8h]
  unsigned int v1339; // [rsp+2E8h] [rbp-5B8h]
  double v1340; // [rsp+2E8h] [rbp-5B8h]
  double v1341; // [rsp+2E8h] [rbp-5B8h]
  double v1342; // [rsp+2E8h] [rbp-5B8h]
  unsigned int v1343; // [rsp+2E8h] [rbp-5B8h]
  unsigned int v1344; // [rsp+2E8h] [rbp-5B8h]
  unsigned int v1345; // [rsp+2E8h] [rbp-5B8h]
  unsigned int v1346; // [rsp+2E8h] [rbp-5B8h]
  double v1347; // [rsp+2E8h] [rbp-5B8h]
  double v1348; // [rsp+2E8h] [rbp-5B8h]
  double v1349; // [rsp+2E8h] [rbp-5B8h]
  double v1350; // [rsp+2E8h] [rbp-5B8h]
  double v1351; // [rsp+2E8h] [rbp-5B8h]
  double v1352; // [rsp+2E8h] [rbp-5B8h]
  double v1353; // [rsp+2E8h] [rbp-5B8h]
  double v1354; // [rsp+2E8h] [rbp-5B8h]
  double v1355; // [rsp+2E8h] [rbp-5B8h]
  unsigned int v1356; // [rsp+2E8h] [rbp-5B8h]
  double v1357; // [rsp+2E8h] [rbp-5B8h]
  double v1358; // [rsp+2E8h] [rbp-5B8h]
  double v1359; // [rsp+2E8h] [rbp-5B8h]
  unsigned int v1360; // [rsp+2E8h] [rbp-5B8h]
  double *v1361; // [rsp+2E8h] [rbp-5B8h]
  double *v1362; // [rsp+2E8h] [rbp-5B8h]
  double *v1363; // [rsp+2E8h] [rbp-5B8h]
  double *v1364; // [rsp+2E8h] [rbp-5B8h]
  double *v1365; // [rsp+2E8h] [rbp-5B8h]
  double v1366; // [rsp+300h] [rbp-5A0h]
  int v1367; // [rsp+300h] [rbp-5A0h]
  int v1368; // [rsp+300h] [rbp-5A0h]
  int v1369; // [rsp+300h] [rbp-5A0h]
  int v1370; // [rsp+300h] [rbp-5A0h]
  double v1371; // [rsp+300h] [rbp-5A0h]
  double v1372; // [rsp+300h] [rbp-5A0h]
  double v1373; // [rsp+300h] [rbp-5A0h]
  double v1374; // [rsp+300h] [rbp-5A0h]
  double v1375; // [rsp+300h] [rbp-5A0h]
  double v1376; // [rsp+300h] [rbp-5A0h]
  double v1377; // [rsp+300h] [rbp-5A0h]
  double v1378; // [rsp+300h] [rbp-5A0h]
  double v1379; // [rsp+300h] [rbp-5A0h]
  double v1380; // [rsp+300h] [rbp-5A0h]
  double v1381; // [rsp+300h] [rbp-5A0h]
  int v1382; // [rsp+300h] [rbp-5A0h]
  int v1383; // [rsp+300h] [rbp-5A0h]
  double v1384; // [rsp+300h] [rbp-5A0h]
  double v1385; // [rsp+300h] [rbp-5A0h]
  double v1386; // [rsp+300h] [rbp-5A0h]
  double v1387; // [rsp+300h] [rbp-5A0h]
  double v1388; // [rsp+300h] [rbp-5A0h]
  int v1389; // [rsp+300h] [rbp-5A0h]
  double v1390; // [rsp+328h] [rbp-578h]
  double s; // [rsp+338h] [rbp-568h]
  double se; // [rsp+338h] [rbp-568h]
  double sf; // [rsp+338h] [rbp-568h]
  double sg; // [rsp+338h] [rbp-568h]
  double sh; // [rsp+338h] [rbp-568h]
  double si; // [rsp+338h] [rbp-568h]
  double sj; // [rsp+338h] [rbp-568h]
  double sk; // [rsp+338h] [rbp-568h]
  double sl; // [rsp+338h] [rbp-568h]
  double sm; // [rsp+338h] [rbp-568h]
  double sn; // [rsp+338h] [rbp-568h]
  double so; // [rsp+338h] [rbp-568h]
  double sp; // [rsp+338h] [rbp-568h]
  double sq; // [rsp+338h] [rbp-568h]
  double sr; // [rsp+338h] [rbp-568h]
  double ss; // [rsp+338h] [rbp-568h]
  double st; // [rsp+338h] [rbp-568h]
  double su; // [rsp+338h] [rbp-568h]
  double sv; // [rsp+338h] [rbp-568h]
  double sw; // [rsp+338h] [rbp-568h]
  int sa; // [rsp+338h] [rbp-568h]
  double sb; // [rsp+338h] [rbp-568h]
  double sc; // [rsp+338h] [rbp-568h]
  double sd; // [rsp+338h] [rbp-568h]
  double sba; // [rsp+338h] [rbp-568h]
  char *sy; // [rsp+338h] [rbp-568h]
  char *sz; // [rsp+338h] [rbp-568h]
  char *sx; // [rsp+338h] [rbp-568h]
  double v1419; // [rsp+340h] [rbp-560h]
  double v1420; // [rsp+340h] [rbp-560h]
  double v1421; // [rsp+348h] [rbp-558h]
  unsigned int v1422; // [rsp+348h] [rbp-558h]
  unsigned __int64 v1423; // [rsp+348h] [rbp-558h]
  double Obj; // [rsp+348h] [rbp-558h]
  int v1425; // [rsp+348h] [rbp-558h]
  double v1426; // [rsp+348h] [rbp-558h]
  double v1427; // [rsp+348h] [rbp-558h]
  double v1428; // [rsp+348h] [rbp-558h]
  double v1429; // [rsp+348h] [rbp-558h]
  double v1430; // [rsp+348h] [rbp-558h]
  double v1431; // [rsp+348h] [rbp-558h]
  double v1432; // [rsp+348h] [rbp-558h]
  double v1433; // [rsp+348h] [rbp-558h]
  double v1434; // [rsp+348h] [rbp-558h]
  double v1435; // [rsp+348h] [rbp-558h]
  double v1436; // [rsp+348h] [rbp-558h]
  double v1437; // [rsp+348h] [rbp-558h]
  double v1438; // [rsp+348h] [rbp-558h]
  double v1439; // [rsp+348h] [rbp-558h]
  double v1440; // [rsp+348h] [rbp-558h]
  double v1441; // [rsp+348h] [rbp-558h]
  double v1442; // [rsp+348h] [rbp-558h]
  double v1443; // [rsp+348h] [rbp-558h]
  double v1444; // [rsp+348h] [rbp-558h]
  double v1445; // [rsp+348h] [rbp-558h]
  double v1446; // [rsp+348h] [rbp-558h]
  int v1447; // [rsp+348h] [rbp-558h]
  double *v1448; // [rsp+348h] [rbp-558h]
  double *v1449; // [rsp+348h] [rbp-558h]
  double *v1450; // [rsp+348h] [rbp-558h]
  double *v1451; // [rsp+348h] [rbp-558h]
  int v1452; // [rsp+350h] [rbp-550h] BYREF
  int v1453; // [rsp+354h] [rbp-54Ch] BYREF
  int v1454; // [rsp+358h] [rbp-548h] BYREF
  int v1455; // [rsp+35Ch] [rbp-544h] BYREF
  int v1456; // [rsp+360h] [rbp-540h] BYREF
  unsigned __int64 v1457; // [rsp+368h] [rbp-538h]
  int v1458; // [rsp+370h] [rbp-530h] BYREF
  unsigned __int64 v1459; // [rsp+378h] [rbp-528h]
  int v1460; // [rsp+380h] [rbp-520h] BYREF
  unsigned __int64 v1461; // [rsp+388h] [rbp-518h]
  int v1462; // [rsp+390h] [rbp-510h] BYREF
  double *v1463; // [rsp+398h] [rbp-508h]
  char v1464[8]; // [rsp+3A0h] [rbp-500h] BYREF
  __int64 v1465; // [rsp+3A8h] [rbp-4F8h]
  char v1466[8]; // [rsp+3B0h] [rbp-4F0h] BYREF
  __int64 v1467; // [rsp+3B8h] [rbp-4E8h]
  int v1468; // [rsp+3C0h] [rbp-4E0h] BYREF
  double *v1469; // [rsp+3C8h] [rbp-4D8h]
  int v1470; // [rsp+3D0h] [rbp-4D0h] BYREF
  __int64 v1471; // [rsp+3D8h] [rbp-4C8h]
  _BYTE v1472[16]; // [rsp+3E0h] [rbp-4C0h] BYREF
  char v1473[8]; // [rsp+3F0h] [rbp-4B0h] BYREF
  __int64 v1474; // [rsp+3F8h] [rbp-4A8h]
  int v1475; // [rsp+400h] [rbp-4A0h] BYREF
  double *v1476; // [rsp+408h] [rbp-498h]
  char v1477[8]; // [rsp+410h] [rbp-490h] BYREF
  __int64 v1478; // [rsp+418h] [rbp-488h]
  char v1479[8]; // [rsp+420h] [rbp-480h] BYREF
  __int64 v1480; // [rsp+428h] [rbp-478h]
  int v1481; // [rsp+430h] [rbp-470h] BYREF
  unsigned __int64 v1482; // [rsp+438h] [rbp-468h]
  _BYTE v1483[16]; // [rsp+440h] [rbp-460h] BYREF
  char v1484[8]; // [rsp+450h] [rbp-450h] BYREF
  __int64 v1485; // [rsp+458h] [rbp-448h]
  int v1486; // [rsp+460h] [rbp-440h] BYREF
  __int64 v1487; // [rsp+468h] [rbp-438h]
  int v1488; // [rsp+470h] [rbp-430h] BYREF
  double *v1489; // [rsp+478h] [rbp-428h]
  char v1490[8]; // [rsp+480h] [rbp-420h] BYREF
  __int64 v1491; // [rsp+488h] [rbp-418h]
  char v1492[8]; // [rsp+490h] [rbp-410h] BYREF
  __int64 v1493; // [rsp+498h] [rbp-408h]
  unsigned int v1494; // [rsp+4A0h] [rbp-400h] BYREF
  unsigned __int64 v1495; // [rsp+4A8h] [rbp-3F8h]
  unsigned int v1496; // [rsp+4B0h] [rbp-3F0h] BYREF
  unsigned __int64 v1497; // [rsp+4B8h] [rbp-3E8h]
  char v1498[8]; // [rsp+4C0h] [rbp-3E0h] BYREF
  double *v1499; // [rsp+4C8h] [rbp-3D8h]
  char v1500[8]; // [rsp+4D0h] [rbp-3D0h] BYREF
  _QWORD *v1501; // [rsp+4D8h] [rbp-3C8h]
  char v1502[8]; // [rsp+4E0h] [rbp-3C0h] BYREF
  double *v1503; // [rsp+4E8h] [rbp-3B8h]
  _BYTE v1504[16]; // [rsp+4F0h] [rbp-3B0h] BYREF
  unsigned int v1505; // [rsp+500h] [rbp-3A0h] BYREF
  unsigned __int64 v1506; // [rsp+508h] [rbp-398h]
  unsigned int v1507; // [rsp+510h] [rbp-390h] BYREF
  unsigned __int64 v1508; // [rsp+518h] [rbp-388h]
  int v1509; // [rsp+520h] [rbp-380h] BYREF
  double *v1510; // [rsp+528h] [rbp-378h]
  int v1511; // [rsp+530h] [rbp-370h] BYREF
  double *v1512; // [rsp+538h] [rbp-368h]
  int v1513; // [rsp+540h] [rbp-360h] BYREF
  double *v1514; // [rsp+548h] [rbp-358h]
  int v1515; // [rsp+550h] [rbp-350h] BYREF
  double *v1516; // [rsp+558h] [rbp-348h]
  char v1517[8]; // [rsp+560h] [rbp-340h] BYREF
  double *v1518; // [rsp+568h] [rbp-338h]
  unsigned int v1519; // [rsp+570h] [rbp-330h] BYREF
  unsigned __int64 v1520; // [rsp+578h] [rbp-328h]
  char v1521[8]; // [rsp+580h] [rbp-320h] BYREF
  double *v1522; // [rsp+588h] [rbp-318h]
  int v1523; // [rsp+590h] [rbp-310h] BYREF
  double *v1524; // [rsp+598h] [rbp-308h]
  char v1525[8]; // [rsp+5A0h] [rbp-300h] BYREF
  double *v1526; // [rsp+5A8h] [rbp-2F8h]
  unsigned int v1527; // [rsp+5B0h] [rbp-2F0h] BYREF
  unsigned __int64 v1528; // [rsp+5B8h] [rbp-2E8h]
  char v1529[8]; // [rsp+5C0h] [rbp-2E0h] BYREF
  double *v1530; // [rsp+5C8h] [rbp-2D8h]
  int v1531; // [rsp+5D0h] [rbp-2D0h] BYREF
  double *v1532; // [rsp+5D8h] [rbp-2C8h]
  int *v1533[2]; // [rsp+5E0h] [rbp-2C0h] BYREF
  int *v1534; // [rsp+5F0h] [rbp-2B0h]
  _BYTE v1535[16]; // [rsp+600h] [rbp-2A0h] BYREF
  _QWORD *v1536; // [rsp+610h] [rbp-290h]
  double v1537; // [rsp+618h] [rbp-288h]
  int v1538; // [rsp+620h] [rbp-280h] BYREF
  double *v1539; // [rsp+628h] [rbp-278h]
  char v1540[16]; // [rsp+690h] [rbp-210h] BYREF
  __int128 v1541; // [rsp+6A0h] [rbp-200h]
  int v1542; // [rsp+6B0h] [rbp-1F0h]
  _OWORD v1543[4]; // [rsp+700h] [rbp-1A0h] BYREF
  __int64 v1544; // [rsp+740h] [rbp-160h]
  unsigned int v1545; // [rsp+770h] [rbp-130h] BYREF
  unsigned __int64 v1546; // [rsp+778h] [rbp-128h]
  struct rusage usage; // [rsp+7E0h] [rbp-C0h] BYREF

  v1235 = a5;
  printf("\n   --------------------------------------------------------");
  printf("\n   pdco.m                            Version of 01 Nov 2002");
  printf("\n   Primal-dual barrier method to minimize a convex function");
  printf("\n   subject to linear constraints Ax + r = b,  bl <= x <= bu");
  puts("\n   --------------------------------------------------------");
  v7 = *(_DWORD *)(a1 + 104);
  v8 = *(_DWORD *)(a1 + 108);
  v1234 = &v1456;
  v1249 = v7;
  v1264 = v8;
  CoinDenseVector<double>::CoinDenseVector(&v1456, v7, *(_QWORD *)(a1 + 808));
  CoinDenseVector<double>::CoinDenseVector(&v1458, v8, *(_QWORD *)(a1 + 816));
  CoinDenseVector<double>::CoinDenseVector(&v1460, v7, *(_QWORD *)(a1 + 824));
  v9 = v8;
  v1240 = &v1462;
  CoinDenseVector<double>::CoinDenseVector(&v1462, v8, *(_QWORD *)(a1 + 832));
  v10 = *(void **)(a1 + 808);
  if ( v10 )
    operator delete[](v10);
  v11 = (_QWORD *)a1;
  v12 = *(void **)(a1 + 816);
  if ( v12 )
  {
    operator delete[](v12);
    v11 = (_QWORD *)a1;
  }
  v13 = (void *)v11[103];
  if ( v13 )
  {
    operator delete[](v13);
    v11 = (_QWORD *)a1;
  }
  v14 = (void *)v11[104];
  if ( v14 )
  {
    operator delete[](v14);
    v11 = (_QWORD *)a1;
  }
  v11[101] = 0;
  v11[102] = 0;
  v11[103] = 0;
  v11[104] = 0;
  v11[106] = a2;
  if ( v1456 <= 0 )
  {
    v19 = v1458;
    v16 = 0.0;
    if ( v1458 > 0 )
      goto LABEL_16;
LABEL_1127:
    v26 = v1460;
    v22 = 0.0;
    if ( v1460 > 0 )
      goto LABEL_22;
    goto LABEL_1128;
  }
  v15 = (double *)v1457;
  v16 = 0.0;
  v9 = a2;
  for ( i = (double *)(v1457 + 8); ; ++i )
  {
    v18 = *v15;
    if ( *v15 < 0.0 )
      v18 = -v18;
    v16 = fmax(v16, v18);
    v15 = i;
    if ( i == (double *)(v1457 + 8 + 8LL * (unsigned int)(v1456 - 1)) )
      break;
  }
  v19 = v1458;
  if ( v1458 <= 0 )
    goto LABEL_1127;
LABEL_16:
  v20 = (double *)v1459;
  v21 = (unsigned int)(v19 - 1);
  v9 = a2;
  v22 = 0.0;
  v23 = (double *)(v1459 + 8);
  v24 = v1459 + 8 + 8 * v21;
  while ( 1 )
  {
    v25 = *v20;
    if ( *v20 < 0.0 )
      v25 = -v25;
    v22 = fmax(v22, v25);
    v20 = v23;
    if ( v23 == (double *)v24 )
      break;
    ++v23;
  }
  v26 = v1460;
  if ( v1460 > 0 )
  {
LABEL_22:
    v27 = (double *)v1461;
    v28 = (unsigned int)(v26 - 1);
    v9 = a2;
    v29 = 0.0;
    v30 = (double *)(v1461 + 8);
    v31 = v1461 + 8 + 8 * v28;
    while ( 1 )
    {
      v32 = *v27;
      if ( *v27 < 0.0 )
        v32 = -v32;
      v29 = fmax(v29, v32);
      v27 = v30;
      if ( v30 == (double *)v31 )
        break;
      ++v30;
    }
    v33 = v1462;
    v1421 = v29;
    if ( v1462 > 0 )
      goto LABEL_28;
LABEL_1129:
    v1419 = 0.0;
    goto LABEL_34;
  }
LABEL_1128:
  v33 = v1462;
  v1421 = 0.0;
  if ( v1462 <= 0 )
    goto LABEL_1129;
LABEL_28:
  v34 = v1463;
  v35 = (unsigned int)(v33 - 1);
  v9 = a2;
  v36 = 0.0;
  v37 = v1463 + 1;
  v38 = (__int64)&v1463[v35 + 1];
  while ( 1 )
  {
    v39 = *v34;
    if ( *v34 < 0.0 )
      v39 = -v39;
    v36 = fmax(v36, v39);
    v34 = v37;
    if ( v37 == (double *)v38 )
      break;
    ++v37;
  }
  v1419 = v36;
LABEL_34:
  printf("\nmax |b | = %8g     max |x0| = %8g", v16, v22);
  printf("      xsize   = %8g", *(double *)(a1 + 736));
  printf("\nmax |y0| = %8g     max |z0| = %8g", v1421, v1419);
  printf("      zsize   = %8g", *(double *)(a1 + 744));
  v1285 = *(_DWORD *)(a3 + 16);
  v1251 = *(double *)(a3 + 24);
  v1250 = *(_DWORD *)(a3 + 76);
  v1420 = *(double *)(a2 + 8);
  v40 = *(double *)(a3 + 32);
  v41 = *(double *)(a3 + 40);
  v1258 = *(_DWORD *)(a3 + 72);
  v42 = v8;
  v1390 = *(double *)(a2 + 16);
  if ( (int)v7 <= (int)v8 )
    v42 = v7;
  v1255 = *(double *)(a3 + 32);
  HIDWORD(v1232) = *(_DWORD *)(a3 + 80) * v42;
  v1267 = *(double *)(a3 + 40);
  v1335 = *(double *)(a3 + 48);
  v1366 = *(double *)(a3 + 56);
  v1289 = *(double *)(a3 + 64);
  s = *(double *)(a3 + 88);
  v1259 = *(double *)(a3 + 96);
  v1236 = *(_QWORD *)(a3 + 104);
  printf("\n\nx0min    = %8g     featol   = %8.1e", v9, v1335, v1251);
  printf("      d1max   = %8.1e", v1420);
  printf("\nz0min    = %8g     opttol   = %8.1e", v1366, v40);
  printf("      d2max   = %8.1e", v1390);
  printf("\nmu0      = %8.1e     steptol  = %8g", v1289, v41);
  printf("     bigcenter= %8g", 1000.0);
  printf("\n\nLSQR:");
  printf("\natol1    = %8.1e     atol2    = %8.1e", s, v1259);
  printf("      btol    = %8.1e", 0.0);
  printf("\nconlim   = %8.1e     itnlim   = %8d", *(double *)&v1236, HIDWORD(v1232));
  printf("      show    = %8g", 0.0);
  getrusage(RUSAGE_SELF, &usage);
  v1534 = nullptr;
  v1231 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  *(_OWORD *)v1533 = 0;
  ClpPdco::getBoundTypes((ClpPdco *)a1, &v1452, &v1453, &v1454, v1533);
  v43 = 1;
  v44 = v1533[0];
  v1316 = v1533[1];
  if ( v1453 )
    v43 = v8;
  v1422 = v43;
  v1288 = v1534;
  CoinDenseVector<double>::CoinDenseVector(v1464, v8, *(_QWORD *)(a1 + 176));
  v1300 = v1465;
  CoinDenseVector<double>::CoinDenseVector(v1466, v43, *(_QWORD *)(a1 + 184));
  v1301 = v1467;
  CoinDenseVector<double>::CoinDenseVector(&v1468, v7, 0.0);
  v1233 = v1469;
  CoinDenseVector<double>::CoinDenseVector(&v1470, v8, 0.0);
  v45 = v1471;
  if ( v1454 > 0 )
  {
    v46 = 1;
    do
    {
      *(_QWORD *)(v45 + 8LL * v1288[v46 - 1]) = *(_QWORD *)CoinDenseVector<double>::operator[](
                                                             v1464,
                                                             (unsigned int)v1288[v46 - 1]);
      v47 = v46++;
    }
    while ( v1454 > v47 );
    ClpPdco::matVecMult(a1, 1, &v1468, &v1470);
    v48 = v1456;
    CoinDenseVector<double>::CoinDenseVector(&usage, (unsigned int)v1456, 0.0);
    v51 = v1457;
    v52 = v1469;
    tv_usec = usage.ru_utime.tv_usec;
    if ( v48 > 0 )
    {
      v50 = usage.ru_utime.tv_usec + 16;
      LOBYTE(v50) = (unsigned __int64)v1469 >= usage.ru_utime.tv_usec + 16;
      if ( ((unsigned __int8)(v50 | (usage.ru_utime.tv_usec >= (unsigned __int64)(v1469 + 2)))
          & (v1457 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1457 + 16)) != 0
        && (unsigned int)v48 > 0xE )
      {
        v54 = 0;
        v55 = (v1457 >> 3) & 1;
        if ( ((v1457 >> 3) & 1) != 0 )
        {
          v54 = 1;
          *(double *)usage.ru_utime.tv_usec = *(double *)v1457 - *v1469;
        }
        v56 = 0;
        v57 = v48 - v55;
        v58 = 8LL * (unsigned int)v55;
        v59 = 0;
        v60 = v51 + v58;
        v61 = &v52[(unsigned __int64)v58 / 8];
        v50 = tv_usec + v58;
        do
        {
          ++v56;
          *(__m128d *)(v50 + v59 * 8) = _mm_sub_pd(*(__m128d *)(v60 + v59 * 8), *(__m128d *)&v61[v59]);
          v59 += 2;
        }
        while ( v57 >> 1 > v56 );
        v49 = v57 & 0xFFFFFFFE;
        v62 = v49 + v54;
        if ( v57 != (_DWORD)v49 )
        {
          v49 = v62;
          v63 = v62 + 1;
          *(double *)(tv_usec + 8 * v49) = *(double *)(v51 + 8 * v49) - v52[v49];
          if ( v48 > v63 )
            *(double *)(tv_usec + 8LL * v63) = *(double *)(v51 + 8LL * v63) - v52[v63];
        }
      }
      else
      {
        v49 = 8LL * (unsigned int)(v48 - 1) + 8;
        v1225 = 0;
        do
        {
          *(double *)(tv_usec + v1225) = *(double *)(v51 + v1225) - v52[v1225 / 8];
          v1225 += 8LL;
        }
        while ( v1225 != v49 );
      }
    }
    CoinDenseVector<double>::operator=(&v1456, &usage, v49, v50, v52);
    CoinDenseVector<double>::~CoinDenseVector(&usage);
  }
  v1284 = *(double *)(a1 + 736);
  if ( v1284 == 0.0 )
    v1284 = 1.0;
  v1245 = *(double *)(a1 + 744);
  if ( v1245 == 0.0 )
  {
    v1262 = v1284;
    v1245 = 1.0;
  }
  else
  {
    v1262 = v1284 * v1245;
  }
  if ( v1452 > 0 )
  {
    v64 = (__int64)&v44[v1452 - 1 + 1];
    v65 = v44;
    do
    {
      v66 = *v65++;
      *(double *)(v1300 + 8 * v66) = *(double *)(v1300 + 8 * v66) / v1284;
    }
    while ( v65 != (int *)v64 );
  }
  if ( v1453 > 0 )
  {
    v67 = v1316;
    v68 = (__int64)&v1316[v1453 - 1 + 1];
    do
    {
      v69 = *v67++;
      *(double *)(v1301 + 8 * v69) = *(double *)(v1301 + 8 * v69) / v1284;
    }
    while ( v67 != (int *)v68 );
  }
  v70 = sqrt(v1262);
  if ( v1262 < 0.0 )
  {
    sqrt(v1262);
    v1261 = v1420 * (v1284 / v70);
    sqrt(v1262);
  }
  else
  {
    v1261 = v1284 / v70 * v1420;
  }
  v71 = v1456;
  v1283 = 1.0 / v1284;
  v1266 = v70 / v1284 * v1390;
  if ( v1456 > 0 )
  {
    v72 = v1457;
    v73 = (v1457 >> 3) & 1;
    if ( (unsigned int)(v1456 - 1) <= 1 )
    {
      v80 = 0;
LABEL_71:
      v81 = (double *)(v72 + 8LL * v80);
      v82 = v80 + 1;
      *v81 = *v81 * v1283;
      if ( v71 > v82 )
        *(double *)(v72 + 8LL * v82) = v1283 * *(double *)(v72 + 8LL * v82);
      goto LABEL_73;
    }
    v74 = 0;
    if ( (_DWORD)v73 )
    {
      v74 = 1;
      *(double *)v1457 = 1.0 / v1284 * *(double *)v1457;
    }
    v75 = v72 + 8 * v73;
    v76 = v71 - v73;
    v77 = 0;
    v78 = 0;
    v79 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1283, (__m128d)*(unsigned __int64 *)&v1283);
    do
    {
      ++v77;
      *(__m128d *)(v75 + v78) = _mm_mul_pd(*(__m128d *)(v75 + v78), v79);
      v78 += 16;
    }
    while ( v76 >> 1 > v77 );
    v80 = (v76 & 0xFFFFFFFE) + v74;
    if ( v76 != (v76 & 0xFFFFFFFE) )
      goto LABEL_71;
  }
LABEL_73:
  v83 = v1460;
  v84 = (__m128d)0x3FF0000000000000uLL;
  v84.m128d_f64[0] = 1.0 / v1245;
  if ( v1460 <= 0 )
    goto LABEL_82;
  v85 = v1461;
  v86 = (v1461 >> 3) & 1;
  if ( (unsigned int)(v1460 - 1) <= 1 )
  {
    v93 = 0;
LABEL_80:
    v94 = v93;
    v95 = v93 + 1;
    *(double *)(v85 + 8 * v94) = *(double *)(v85 + 8 * v94) * v84.m128d_f64[0];
    if ( v83 > v95 )
      *(double *)(v85 + 8LL * v95) = *(double *)(v85 + 8LL * v95) * v84.m128d_f64[0];
    goto LABEL_82;
  }
  v87 = 0;
  if ( (_DWORD)v86 )
  {
    v87 = 1;
    *(double *)v1461 = *(double *)v1461 * v84.m128d_f64[0];
  }
  v88 = v85 + 8 * v86;
  v89 = v83 - v86;
  v90 = 0;
  v91 = 0;
  v92 = _mm_unpacklo_pd(v84, v84);
  do
  {
    ++v90;
    *(__m128d *)(v88 + v91) = _mm_mul_pd(*(__m128d *)(v88 + v91), v92);
    v91 += 16;
  }
  while ( v89 >> 1 > v90 );
  v93 = (v89 & 0xFFFFFFFE) + v87;
  if ( v89 != (v89 & 0xFFFFFFFE) )
    goto LABEL_80;
LABEL_82:
  v96 = v1458;
  if ( v1458 <= 0 )
    goto LABEL_91;
  v97 = v1459;
  v98 = (v1459 >> 3) & 1;
  if ( (unsigned int)(v1458 - 1) <= 1 )
  {
    v105 = 0;
LABEL_89:
    v106 = (double *)(v97 + 8LL * v105);
    v107 = v105 + 1;
    *v106 = *v106 * v1283;
    if ( v96 > v107 )
      *(double *)(v97 + 8LL * v107) = v1283 * *(double *)(v97 + 8LL * v107);
    goto LABEL_91;
  }
  v99 = 0;
  if ( (_DWORD)v98 )
  {
    v99 = 1;
    *(double *)v1459 = v1283 * *(double *)v1459;
  }
  v100 = v97 + 8 * v98;
  v101 = v96 - v98;
  v102 = 0;
  v103 = 0;
  v104 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1283, (__m128d)*(unsigned __int64 *)&v1283);
  do
  {
    ++v102;
    *(__m128d *)(v100 + v103) = _mm_mul_pd(*(__m128d *)(v100 + v103), v104);
    v103 += 16;
  }
  while ( v101 >> 1 > v102 );
  v105 = (v101 & 0xFFFFFFFE) + v99;
  if ( v101 != (v101 & 0xFFFFFFFE) )
    goto LABEL_89;
LABEL_91:
  v108 = v1462;
  if ( v1462 <= 0 )
    goto LABEL_100;
  v109 = v1463;
  v110 = ((unsigned __int64)v1463 >> 3) & 1;
  if ( (unsigned int)(v1462 - 1) <= 1 )
  {
    v117 = 0;
LABEL_98:
    v118 = v117;
    v119 = v117 + 1;
    v109[v118] = v109[v118] * v84.m128d_f64[0];
    if ( v108 > v119 )
    {
      v120 = &v109[v119];
      v84.m128d_f64[0] = v84.m128d_f64[0] * *v120;
      *v120 = v84.m128d_f64[0];
    }
    goto LABEL_100;
  }
  v111 = 0;
  if ( (_DWORD)v110 )
  {
    v111 = 1;
    *v1463 = *v1463 * v84.m128d_f64[0];
  }
  v112 = &v109[v110];
  v113 = v108 - v110;
  v114 = 0;
  v115 = 0;
  v116 = _mm_unpacklo_pd(v84, v84);
  do
  {
    ++v114;
    *(__m128d *)&v112[v115] = _mm_mul_pd(*(__m128d *)&v112[v115], v116);
    v115 += 2;
  }
  while ( v113 >> 1 > v114 );
  v117 = (v113 & 0xFFFFFFFE) + v111;
  if ( v113 != (v113 & 0xFFFFFFFE) )
    goto LABEL_98;
LABEL_100:
  CoinDenseVector<double>::CoinDenseVector(v1472, v1264, 0.0);
  CoinDenseVector<double>::CoinDenseVector(v1473, v1264, 0.0);
  CoinDenseVector<double>::CoinDenseVector(&v1475, v1264, 0.0);
  CoinDenseVector<double>::CoinDenseVector(v1477, v1264, 0.0);
  CoinDenseVector<double>::CoinDenseVector(v1479, v1264, 0.0);
  CoinDenseVector<double>::CoinDenseVector(&v1481, v1264, 0.0);
  CoinDenseVector<double>::CoinDenseVector(v1483, v1422, 0.0);
  CoinDenseVector<double>::CoinDenseVector(v1484, v1422, 0.0);
  CoinDenseVector<double>::CoinDenseVector(&v1486, v1422, 0.0);
  CoinDenseVector<double>::CoinDenseVector(&v1488, v1422, 0.0);
  CoinDenseVector<double>::CoinDenseVector(v1490, v1422, 0.0);
  CoinDenseVector<double>::CoinDenseVector(v1492, v1422, 0.0);
  CoinDenseVector<double>::CoinDenseVector(&v1494, v1264, 0.0);
  v1244 = &v1496;
  CoinDenseVector<double>::CoinDenseVector(&v1496, (unsigned int)v1249, 0.0);
  v1239 = v1498;
  CoinDenseVector<double>::CoinDenseVector(v1498, (unsigned int)v1249, 0.0);
  v1238 = v1500;
  CoinDenseVector<double>::CoinDenseVector(v1500, v1264, 0.0);
  v1253 = v1501;
  CoinDenseVector<double>::CoinDenseVector(v1502, v1264, 0.0);
  v121.m128d_f64[0] = 0.0;
  v1247 = v1503;
  CoinDenseVector<double>::CoinDenseVector(v1504, v1264 + v1249, 0.0);
  v122 = 1;
  v123 = v1463;
  v1423 = v1459;
  v1303 = v1487;
  v1302 = (char *)v1476;
  v1296 = v1489;
  if ( v1452 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v124 = (double *)CoinDenseVector<double>::operator[](v1464, (unsigned int)v44[v122 - 1]);
        v125 = v44[v122 - 1];
        v126 = (double *)(v1423 + 8 * v125);
        v127 = fmax(*v126, *v124);
        *v126 = v127;
        v128 = (double *)CoinDenseVector<double>::operator[](v1464, v125);
        v129 = v44[v122 - 1];
        *(double *)(v45 + 8 * v129) = fmax(v127 - *v128, v1335);
        v130 = (double *)&v1302[8 * v129];
        v121.m128d_f64[0] = v123[v129];
        if ( v121.m128d_f64[0] > v1366 )
          break;
        *v130 = v1366;
        v131 = v122++;
        if ( v1452 <= v131 )
          goto LABEL_103;
      }
      *v130 = v121.m128d_f64[0];
      v888 = v122++;
    }
    while ( v1452 > v888 );
  }
LABEL_103:
  if ( v1453 > 0 )
  {
    v132 = 1;
    do
    {
      while ( 1 )
      {
        v133 = (double *)CoinDenseVector<double>::operator[](v1466, (unsigned int)v1316[v132 - 1]);
        v134 = v1316[v132 - 1];
        *(double *)(v1423 + 8 * v134) = fmin(*(double *)(v1423 + 8 * v134), *v133);
        v135 = (double *)CoinDenseVector<double>::operator[](v1466, v134);
        v136 = v1316[v132 - 1];
        *(double *)(v1303 + 8 * v136) = fmax(*v135 - *(double *)(v1423 + 8 * v136), v1335);
        v137 = &v1296[v136];
        v121.m128d_f64[0] = -v123[v136];
        if ( v121.m128d_f64[0] > v1366 )
          break;
        v138 = v132++;
        v139 = v138 < v1453;
        *v137 = v1366;
        if ( !v139 )
          goto LABEL_107;
      }
      v889 = v132++;
      v139 = v1453 <= v889;
      *v137 = v121.m128d_f64[0];
    }
    while ( !v139 );
  }
LABEL_107:
  v140 = v1458;
  if ( v1458 > 0 )
  {
    v141 = v1459;
    v142 = (v1459 >> 3) & 1;
    if ( (unsigned int)(v1458 - 1) <= 1 )
    {
      v148 = 0;
LABEL_114:
      v149 = (double *)(v141 + 8LL * v148);
      v150 = v148 + 1;
      v121.m128d_f64[0] = *v149 * v1284;
      *v149 = v121.m128d_f64[0];
      if ( v140 > v150 )
        *(double *)(v141 + 8LL * v150) = v1284 * *(double *)(v141 + 8LL * v150);
      goto LABEL_116;
    }
    v143 = 0;
    if ( (_DWORD)v142 )
    {
      v143 = 1;
      *(double *)v1459 = v1284 * *(double *)v1459;
    }
    v144 = v141 + 8 * v142;
    v145 = v140 - v142;
    v146 = 0;
    v147 = 0;
    v84 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1284, (__m128d)*(unsigned __int64 *)&v1284);
    do
    {
      ++v146;
      v121 = _mm_mul_pd(*(__m128d *)(v144 + v147), v84);
      *(__m128d *)(v144 + v147) = v121;
      v147 += 16;
    }
    while ( v145 >> 1 > v146 );
    v148 = (v145 & 0xFFFFFFFE) + v143;
    if ( v145 != (v145 & 0xFFFFFFFE) )
      goto LABEL_114;
  }
LABEL_116:
  Obj = ClpPdco::getObj(a1, &v1458, v121.m128d_f64[0], v84.m128d_f64[0]);
  CoinDenseVector<double>::CoinDenseVector(&v1505, v1264, 0.0);
  ClpPdco::getGrad(a1, &v1458, &v1505);
  CoinDenseVector<double>::CoinDenseVector(&v1507, v1264, 0.0);
  ClpPdco::getHessian(a1, &v1458, &v1507);
  v151 = v1458;
  if ( v1458 <= 0 )
    goto LABEL_125;
  v152 = v1459;
  v153 = (v1459 >> 3) & 1;
  if ( (unsigned int)(v1458 - 1) <= 1 )
  {
    v160 = 0;
LABEL_123:
    v161 = (double *)(v152 + 8LL * v160);
    v162 = v160 + 1;
    *v161 = *v161 * v1283;
    if ( v151 > v162 )
      *(double *)(v152 + 8LL * v162) = v1283 * *(double *)(v152 + 8LL * v162);
    goto LABEL_125;
  }
  v154 = 0;
  if ( (_DWORD)v153 )
  {
    v154 = 1;
    *(double *)v1459 = v1283 * *(double *)v1459;
  }
  v155 = v152 + 8 * v153;
  v156 = v151 - v153;
  v157 = 0;
  v158 = 0;
  v159 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1283, (__m128d)*(unsigned __int64 *)&v1283);
  do
  {
    ++v157;
    *(__m128d *)(v155 + v158) = _mm_mul_pd(*(__m128d *)(v155 + v158), v159);
    v158 += 16;
  }
  while ( v156 >> 1 > v157 );
  v160 = (v156 & 0xFFFFFFFE) + v154;
  if ( v156 != (v156 & 0xFFFFFFFE) )
    goto LABEL_123;
LABEL_125:
  v1275 = (double *)v1508;
  v1287 = v1261 * v1261;
  v1280 = Obj / v1262;
  CoinDenseVector<double>::CoinDenseVector(&v1545, (unsigned int)v151, 0.0);
  v163 = v1459;
  v164 = v1546;
  if ( v151 > 0 )
  {
    if ( (v1459 >= v1546 + 16 || v1546 >= v1459 + 16) && (unsigned int)v151 > 0xE )
    {
      v165 = 0;
      v166 = (v1459 >> 3) & 1;
      if ( ((v1459 >> 3) & 1) != 0 )
      {
        v165 = 1;
        *(double *)v1546 = v1287 * *(double *)v1459;
      }
      v167 = v151 - v166;
      v168 = 8LL * (unsigned int)v166;
      v169 = 0;
      v170 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1287, (__m128d)*(unsigned __int64 *)&v1287);
      v171 = v163 + v168;
      v172 = v164 + v168;
      v173 = 0;
      do
      {
        ++v173;
        *(__m128d *)(v172 + v169) = _mm_mul_pd(*(__m128d *)(v171 + v169), v170);
        v169 += 16;
      }
      while ( v167 >> 1 > v173 );
      v174 = (v167 & 0xFFFFFFFE) + v165;
      if ( v167 != (v167 & 0xFFFFFFFE) )
      {
        v175 = v174;
        v176 = *(double *)(v163 + 8LL * v174);
        v177 = v174 + 1;
        *(double *)(v164 + 8 * v175) = v176 * v1287;
        if ( v151 > v177 )
          *(double *)(v164 + 8LL * v177) = v1287 * *(double *)(v163 + 8LL * v177);
      }
    }
    else
    {
      v1218 = 0;
      do
      {
        *(double *)(v164 + v1218) = v1287 * *(double *)(v163 + v1218);
        v1218 += 8;
      }
      while ( v1218 != 8LL * (unsigned int)(v151 - 1) + 8 );
    }
  }
  v178 = v1505;
  v1278 = v1284 / v1262;
  CoinDenseVector<double>::CoinDenseVector(v1543, v1505, 0.0);
  v179 = v1506;
  v180 = *((_QWORD *)&v1543[0] + 1);
  if ( v178 > 0 )
  {
    if ( (v1506 >= *((_QWORD *)&v1543[0] + 1) + 16LL || *((_QWORD *)&v1543[0] + 1) >= v1506 + 16)
      && (unsigned int)v178 > 0xE )
    {
      v181 = 0;
      v182 = (v1506 >> 3) & 1;
      if ( ((v1506 >> 3) & 1) != 0 )
      {
        v181 = 1;
        **((double **)&v1543[0] + 1) = v1278 * *(double *)v1506;
      }
      v183 = v178 - v182;
      v184 = 8LL * (unsigned int)v182;
      v185 = 0;
      v186 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1278, (__m128d)*(unsigned __int64 *)&v1278);
      v187 = v179 + v184;
      v188 = v180 + v184;
      v189 = 0;
      do
      {
        ++v189;
        *(__m128d *)(v188 + v185) = _mm_mul_pd(*(__m128d *)(v187 + v185), v186);
        v185 += 16;
      }
      while ( v183 >> 1 > v189 );
      v190 = (v183 & 0xFFFFFFFE) + v181;
      if ( v183 != (v183 & 0xFFFFFFFE) )
      {
        v191 = v190;
        v192 = *(double *)(v179 + 8LL * v190);
        v193 = v190 + 1;
        *(double *)(v180 + 8 * v191) = v192 * v1278;
        if ( v178 > v193 )
          *(double *)(v180 + 8LL * v193) = v1278 * *(double *)(v179 + 8LL * v193);
      }
    }
    else
    {
      v1217 = 0;
      do
      {
        *(double *)(v180 + v1217) = v1278 * *(double *)(v179 + v1217);
        v1217 += 8;
      }
      while ( v1217 != 8LL * (unsigned int)(v178 - 1) + 8 );
    }
  }
  v194 = v1543[0];
  CoinDenseVector<double>::CoinDenseVector(&usage, LODWORD(v1543[0]), 0.0);
  v197 = *((_QWORD *)&v1543[0] + 1);
  v198 = v1546;
  v199 = usage.ru_utime.tv_usec;
  if ( v194 > 0 )
  {
    v196 = usage.ru_utime.tv_usec + 16;
    LOBYTE(v196) = v1546 >= usage.ru_utime.tv_usec + 16;
    if ( ((unsigned __int8)(v196 | (usage.ru_utime.tv_usec >= v1546 + 16))
        & (*((_QWORD *)&v1543[0] + 1) >= (unsigned __int64)(usage.ru_utime.tv_usec + 16)
        || usage.ru_utime.tv_usec >= (unsigned __int64)(*((_QWORD *)&v1543[0] + 1) + 16LL))) != 0
      && (unsigned int)v194 > 0xE )
    {
      v200 = 0;
      v201 = (*((_QWORD *)&v1543[0] + 1) >> 3) & 1LL;
      if ( ((*((_QWORD *)&v1543[0] + 1) >> 3) & 1) != 0 )
      {
        v200 = 1;
        *(double *)usage.ru_utime.tv_usec = **((double **)&v1543[0] + 1) + *(double *)v1546;
      }
      LODWORD(v195) = 0;
      v202 = v194 - v201;
      v203 = 8LL * (unsigned int)v201;
      v204 = (unsigned int)(v194 - v201) >> 1;
      v205 = 0;
      v206 = v197 + v203;
      v207 = v198 + v203;
      v196 = v199 + v203;
      do
      {
        v195 = (unsigned int)(v195 + 1);
        *(__m128d *)(v196 + v205) = _mm_add_pd(*(__m128d *)(v207 + v205), *(__m128d *)(v206 + v205));
        v205 += 16;
      }
      while ( v204 > (unsigned int)v195 );
      v208 = (v202 & 0xFFFFFFFE) + v200;
      if ( v202 != (v202 & 0xFFFFFFFE) )
      {
        v209 = v208;
        v210 = v208 + 1;
        *(double *)(v199 + 8 * v209) = *(double *)(v197 + 8 * v209) + *(double *)(v198 + 8 * v209);
        if ( v194 > v210 )
          *(double *)(v199 + 8LL * v210) = *(double *)(v197 + 8LL * v210) + *(double *)(v198 + 8LL * v210);
      }
    }
    else
    {
      v195 = 8LL * (unsigned int)(v194 - 1) + 8;
      v1224 = 0;
      do
      {
        *(double *)(v199 + v1224) = *(double *)(v197 + v1224) + *(double *)(v198 + v1224);
        v1224 += 8;
      }
      while ( v1224 != v195 );
    }
  }
  CoinDenseVector<double>::operator=(&v1505, &usage, v195, v196, v198);
  CoinDenseVector<double>::~CoinDenseVector(&usage);
  CoinDenseVector<double>::~CoinDenseVector(v1543);
  CoinDenseVector<double>::~CoinDenseVector(&v1545);
  v211 = v1507;
  v1277 = v1284 * v1284 / v1262;
  CoinDenseVector<double>::CoinDenseVector(&v1545, v1507, 0.0);
  v212 = v1508;
  v213 = v1546;
  if ( v211 > 0 )
  {
    if ( (v1508 >= v1546 + 16 || v1546 >= v1508 + 16) && (unsigned int)v211 > 0xE )
    {
      v214 = 0;
      v215 = (v1508 >> 3) & 1;
      if ( ((v1508 >> 3) & 1) != 0 )
      {
        v214 = 1;
        *(double *)v1546 = v1277 * *(double *)v1508;
      }
      v216 = v211 - v215;
      v217 = 8LL * (unsigned int)v215;
      v218 = 0;
      v219 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1277, (__m128d)*(unsigned __int64 *)&v1277);
      v220 = v212 + v217;
      v221 = v213 + v217;
      v222 = 0;
      do
      {
        ++v222;
        *(__m128d *)(v221 + v218) = _mm_mul_pd(*(__m128d *)(v220 + v218), v219);
        v218 += 16;
      }
      while ( v216 >> 1 > v222 );
      v223 = (v216 & 0xFFFFFFFE) + v214;
      if ( v216 != (v216 & 0xFFFFFFFE) )
      {
        v224 = v223;
        v225 = *(double *)(v212 + 8LL * v223);
        v226 = v223 + 1;
        *(double *)(v213 + 8 * v224) = v225 * v1277;
        if ( v211 > v226 )
          *(double *)(v213 + 8LL * v226) = v1277 * *(double *)(v212 + 8LL * v226);
      }
    }
    else
    {
      v1223 = 0;
      do
      {
        *(double *)(v213 + v1223) = v1277 * *(double *)(v212 + v1223);
        v1223 += 8;
      }
      while ( v1223 != 8LL * (unsigned int)(v211 - 1) + 8 );
    }
  }
  v227 = v1545;
  CoinDenseVector<double>::CoinDenseVector(&usage, v1545, 0.0);
  v231 = v1546;
  v232 = usage.ru_utime.tv_usec;
  if ( v227 > 0 )
  {
    if ( (v1546 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1546 + 16) && (unsigned int)v227 > 0xE )
    {
      v233 = 0;
      v234 = (v1546 >> 3) & 1;
      if ( ((v1546 >> 3) & 1) != 0 )
      {
        v233 = 1;
        *(double *)usage.ru_utime.tv_usec = v1287 + *(double *)v1546;
      }
      v235 = v227 - v234;
      v236 = 8LL * (unsigned int)v234;
      v237 = 0;
      v238 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1287, (__m128d)*(unsigned __int64 *)&v1287);
      v239 = v231 + v236;
      v229 = v232 + v236;
      LODWORD(v228) = 0;
      do
      {
        v228 = (unsigned int)(v228 + 1);
        *(__m128d *)(v229 + v237) = _mm_add_pd(*(__m128d *)(v239 + v237), v238);
        v237 += 16;
      }
      while ( v235 >> 1 > (unsigned int)v228 );
      v230 = (v235 & 0xFFFFFFFE) + v233;
      if ( v235 != (v235 & 0xFFFFFFFE) )
      {
        v240 = (int)v230;
        v241 = *(double *)(v231 + 8LL * (int)v230);
        v230 = (unsigned int)(v230 + 1);
        *(double *)(v232 + 8 * v240) = v241 + v1287;
        if ( v227 > (int)v230 )
          *(double *)(v232 + 8LL * (int)v230) = v1287 + *(double *)(v231 + 8LL * (int)v230);
      }
    }
    else
    {
      v228 = 8LL * (unsigned int)(v227 - 1) + 8;
      v1214 = 0;
      do
      {
        *(double *)(v232 + v1214) = v1287 + *(double *)(v231 + v1214);
        v1214 += 8;
      }
      while ( v1214 != v228 );
    }
  }
  CoinDenseVector<double>::operator=(&v1507, &usage, v228, v229, v230);
  CoinDenseVector<double>::~CoinDenseVector(&usage);
  CoinDenseVector<double>::~CoinDenseVector(&v1545);
  v242 = v1454;
  v243 = v1453;
  v244 = v1452;
  v245 = v1459;
  v246 = v1482;
  v1425 = v1454;
  if ( v1454 > 0 )
  {
    v247 = v1288;
    v248 = (__int64)&v1288[v1454 - 1 + 1];
    do
    {
      v249 = *v247++;
      *(_QWORD *)(v245 + 8 * v249) = 0;
    }
    while ( v247 != (int *)v248 );
    v1425 = v242;
  }
  CoinDenseVector<double>::clear(&v1468);
  CoinDenseVector<double>::clear(&v1481);
  ClpPdco::matVecMult(a1, 1, &v1468, &v1458);
  ClpPdco::matVecMult(a1, 2, &v1481, &v1460);
  if ( v1425 > 0 )
  {
    v250 = v1288;
    do
    {
      v251 = *v250++;
      *(_QWORD *)(v246 + 8 * v251) = 0;
    }
    while ( v250 != &v1288[v1425 - 1 + 1] );
  }
  v252 = v1460;
  v1276 = v1266 * v1266;
  CoinDenseVector<double>::CoinDenseVector(v1521, (unsigned int)v1460, 0.0);
  v253 = v1461;
  v254 = v1522;
  if ( v252 > 0 )
  {
    if ( (v1461 >= (unsigned __int64)(v1522 + 2) || (unsigned __int64)v1522 >= v1461 + 16) && (unsigned int)v252 > 0xE )
    {
      v255 = 0;
      v256 = (v1461 >> 3) & 1;
      if ( ((v1461 >> 3) & 1) != 0 )
      {
        v255 = 1;
        *v1522 = v1276 * *(double *)v1461;
      }
      v257 = v252 - v256;
      v258 = (unsigned int)v256;
      v259 = 0;
      v260 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1276, (__m128d)*(unsigned __int64 *)&v1276);
      v261 = v253 + v258 * 8;
      v262 = &v254[v258];
      v263 = 0;
      do
      {
        ++v263;
        *(__m128d *)&v262[v259] = _mm_mul_pd(*(__m128d *)(v261 + v259 * 8), v260);
        v259 += 2;
      }
      while ( v257 >> 1 > v263 );
      v264 = (v257 & 0xFFFFFFFE) + v255;
      if ( v257 != (v257 & 0xFFFFFFFE) )
      {
        v265 = v264;
        v266 = *(double *)(v253 + 8LL * v264);
        v267 = v264 + 1;
        v254[v265] = v266 * v1276;
        if ( v267 < v252 )
          v254[v267] = v1276 * *(double *)(v253 + 8LL * v267);
      }
    }
    else
    {
      v1213 = 0;
      do
      {
        v254[v1213 / 8] = v1276 * *(double *)(v253 + v1213);
        v1213 += 8LL;
      }
      while ( v1213 != 8LL * (unsigned int)(v252 - 1) + 8 );
    }
  }
  v268 = v1456;
  CoinDenseVector<double>::CoinDenseVector(&v1545, (unsigned int)v1456, 0.0);
  v269 = v1457;
  v270 = v1469;
  v271 = v1546;
  if ( v268 > 0 )
  {
    if ( ((unsigned __int64)v1469 >= v1546 + 16 || v1546 >= (unsigned __int64)(v1469 + 2))
      && (v1457 >= v1546 + 16 || v1546 >= v1457 + 16)
      && (unsigned int)v268 > 0xE )
    {
      v1367 = 0;
      v272 = (v1457 >> 3) & 1;
      if ( ((v1457 >> 3) & 1) != 0 )
      {
        v1367 = 1;
        *(double *)v1546 = *(double *)v1457 - *v1469;
      }
      v273 = 0;
      v1336 = v268 - v272;
      v274 = 8LL * (unsigned int)v272;
      v275 = (unsigned int)(v268 - v272) >> 1;
      v276 = 0;
      v277 = v269 + v274;
      v278 = &v270[(unsigned __int64)v274 / 8];
      v279 = v271 + v274;
      do
      {
        ++v273;
        *(__m128d *)(v279 + v276 * 8) = _mm_sub_pd(*(__m128d *)(v277 + v276 * 8), *(__m128d *)&v278[v276]);
        v276 += 2;
      }
      while ( v275 > v273 );
      v280 = (v1336 & 0xFFFFFFFE) + v1367;
      if ( v1336 != (v1336 & 0xFFFFFFFE) )
      {
        *(double *)(v271 + 8LL * v280) = *(double *)(v269 + 8LL * v280) - v270[v280];
        if ( v268 > v280 + 1 )
          *(double *)(v271 + 8LL * (v280 + 1)) = *(double *)(v269 + 8LL * (v280 + 1)) - v270[v280 + 1];
      }
    }
    else
    {
      v1216 = 0;
      do
      {
        *(double *)(v271 + v1216) = *(double *)(v269 + v1216) - v270[v1216 / 8];
        v1216 += 8LL;
      }
      while ( v1216 != 8LL * (unsigned int)(v268 - 1) + 8 );
    }
  }
  v281 = v1545;
  CoinDenseVector<double>::CoinDenseVector(&usage, v1545, 0.0);
  v284 = v1546;
  v285 = v1522;
  v286 = usage.ru_utime.tv_usec;
  if ( v281 > 0 )
  {
    v283 = usage.ru_utime.tv_usec + 16;
    LOBYTE(v283) = (unsigned __int64)v1522 >= usage.ru_utime.tv_usec + 16;
    if ( ((unsigned __int8)(v283 | (usage.ru_utime.tv_usec >= (unsigned __int64)(v1522 + 2)))
        & (v1546 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1546 + 16)) != 0
      && (unsigned int)v281 > 0xE )
    {
      v1368 = 0;
      v287 = (v1546 >> 3) & 1;
      if ( ((v1546 >> 3) & 1) != 0 )
      {
        v1368 = 1;
        *(double *)usage.ru_utime.tv_usec = *(double *)v1546 - *v1522;
      }
      v288 = 0;
      v1337 = v281 - v287;
      v289 = 8LL * (unsigned int)v287;
      v290 = (unsigned int)(v281 - v287) >> 1;
      v291 = 0;
      v292 = v284 + v289;
      v293 = &v285[(unsigned __int64)v289 / 8];
      v294 = v286 + v289;
      do
      {
        ++v288;
        *(__m128d *)(v294 + v291 * 8) = _mm_sub_pd(*(__m128d *)(v292 + v291 * 8), *(__m128d *)&v293[v291]);
        v291 += 2;
      }
      while ( v290 > v288 );
      v283 = v1337;
      v282 = (v1337 & 0xFFFFFFFE) + v1368;
      if ( v1337 != (v1337 & 0xFFFFFFFE) )
      {
        *(double *)(v286 + 8LL * (int)v282) = *(double *)(v284 + 8LL * (int)v282) - v285[(int)v282];
        if ( v281 > (int)v282 + 1 )
          *(double *)(v286 + 8LL * ((int)v282 + 1)) = *(double *)(v284 + 8LL * ((int)v282 + 1)) - v285[(int)v282 + 1];
      }
    }
    else
    {
      v282 = 8LL * (unsigned int)(v281 - 1) + 8;
      v1215 = 0;
      do
      {
        *(double *)(v286 + v1215) = *(double *)(v284 + v1215) - v285[v1215 / 8];
        v1215 += 8LL;
      }
      while ( v1215 != v282 );
    }
  }
  CoinDenseVector<double>::operator=(&v1468, &usage, v282, v283, v285);
  CoinDenseVector<double>::~CoinDenseVector(&usage);
  CoinDenseVector<double>::~CoinDenseVector(&v1545);
  CoinDenseVector<double>::~CoinDenseVector(v1521);
  v295 = v1505;
  CoinDenseVector<double>::CoinDenseVector(&v1519, v1505, 0.0);
  v296 = v1506;
  v297 = v1482;
  v298 = v1520;
  if ( v295 > 0 )
  {
    if ( (v1482 >= v1520 + 16 || v1520 >= v1482 + 16)
      && (v1506 >= v1520 + 16 || v1520 >= v1506 + 16)
      && (unsigned int)v295 > 0xE )
    {
      v1369 = 0;
      v299 = (v1506 >> 3) & 1;
      if ( ((v1506 >> 3) & 1) != 0 )
      {
        v1369 = 1;
        *(double *)v1520 = *(double *)v1506 - *(double *)v1482;
      }
      v300 = 0;
      v1338 = v295 - v299;
      v301 = 8LL * (unsigned int)v299;
      v302 = (unsigned int)(v295 - v299) >> 1;
      v303 = 0;
      v304 = v296 + v301;
      v305 = v297 + v301;
      v306 = v298 + v301;
      do
      {
        ++v300;
        *(__m128d *)(v306 + v303) = _mm_sub_pd(*(__m128d *)(v304 + v303), *(__m128d *)(v305 + v303));
        v303 += 16;
      }
      while ( v302 > v300 );
      v307 = (v1338 & 0xFFFFFFFE) + v1369;
      if ( v1338 != (v1338 & 0xFFFFFFFE) )
      {
        *(double *)(v298 + 8LL * v307) = *(double *)(v296 + 8LL * v307) - *(double *)(v297 + 8LL * v307);
        if ( v295 > v307 + 1 )
          *(double *)(v298 + 8LL * (v307 + 1)) = *(double *)(v296 + 8LL * (v307 + 1))
                                               - *(double *)(v297 + 8LL * (v307 + 1));
      }
    }
    else
    {
      v1219 = 0;
      do
      {
        *(double *)(v298 + v1219) = *(double *)(v296 + v1219) - *(double *)(v297 + v1219);
        v1219 += 8;
      }
      while ( v1219 != 8LL * (unsigned int)(v295 - 1) + 8 );
    }
  }
  v308 = v1519;
  CoinDenseVector<double>::CoinDenseVector(&usage, v1519, 0.0);
  v311 = v1520;
  v312 = v1476;
  v313 = usage.ru_utime.tv_usec;
  if ( v308 > 0 )
  {
    v310 = usage.ru_utime.tv_usec + 16;
    LOBYTE(v310) = (unsigned __int64)v1476 >= usage.ru_utime.tv_usec + 16;
    if ( ((unsigned __int8)(v310 | (usage.ru_utime.tv_usec >= (unsigned __int64)(v1476 + 2)))
        & (v1520 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1520 + 16)) != 0
      && (unsigned int)v308 > 0xE )
    {
      v1370 = 0;
      v314 = (v1520 >> 3) & 1;
      if ( ((v1520 >> 3) & 1) != 0 )
      {
        v1370 = 1;
        *(double *)usage.ru_utime.tv_usec = *(double *)v1520 - *v1476;
      }
      v315 = 0;
      v1339 = v308 - v314;
      v316 = 8LL * (unsigned int)v314;
      v317 = (unsigned int)(v308 - v314) >> 1;
      v318 = 0;
      v319 = v311 + v316;
      v320 = &v312[(unsigned __int64)v316 / 8];
      v321 = v313 + v316;
      do
      {
        ++v315;
        *(__m128d *)(v321 + v318 * 8) = _mm_sub_pd(*(__m128d *)(v319 + v318 * 8), *(__m128d *)&v320[v318]);
        v318 += 2;
      }
      while ( v317 > v315 );
      v310 = v1339;
      v309 = (v1339 & 0xFFFFFFFE) + v1370;
      if ( v1339 != (v1339 & 0xFFFFFFFE) )
      {
        *(double *)(v313 + 8LL * (int)v309) = *(double *)(v311 + 8LL * (int)v309) - v312[(int)v309];
        if ( v308 > (int)v309 + 1 )
          *(double *)(v313 + 8LL * ((int)v309 + 1)) = *(double *)(v311 + 8LL * ((int)v309 + 1)) - v312[(int)v309 + 1];
      }
    }
    else
    {
      v309 = 8LL * (unsigned int)(v308 - 1) + 8;
      v1221 = 0;
      do
      {
        *(double *)(v313 + v1221) = *(double *)(v311 + v1221) - v312[v1221 / 8];
        v1221 += 8LL;
      }
      while ( v1221 != v309 );
    }
  }
  CoinDenseVector<double>::operator=(&v1481, &usage, v309, v310, v312);
  CoinDenseVector<double>::~CoinDenseVector(&usage);
  CoinDenseVector<double>::~CoinDenseVector(&v1519);
  if ( v243 > 0 )
  {
    v1176 = v1481;
    CoinDenseVector<double>::CoinDenseVector(v1517, (unsigned int)v1481, 0.0);
    v1179 = v1482;
    v1180 = v1489;
    v1181 = v1518;
    if ( v1176 > 0 )
    {
      v1178 = (unsigned __int64)(v1518 + 2);
      LOBYTE(v1178) = v1489 >= v1518 + 2;
      if ( ((unsigned __int8)(v1178 | (v1518 >= v1489 + 2))
          & (v1482 >= (unsigned __int64)(v1518 + 2) || (unsigned __int64)v1518 >= v1482 + 16)) != 0
        && (unsigned int)v1176 > 0xE )
      {
        v1447 = 0;
        v1182 = (v1482 >> 3) & 1;
        if ( ((v1482 >> 3) & 1) != 0 )
        {
          v1447 = 1;
          *v1518 = *(double *)v1482 + *v1489;
        }
        v1183 = 0;
        v1360 = v1176 - v1182;
        v1184 = (unsigned int)(v1176 - v1182) >> 1;
        v1185 = (unsigned int)v1182;
        v1186 = 0;
        v1185 *= 8;
        v1187 = v1179 + v1185;
        v1188 = (char *)v1180 + v1185;
        v1189 = (char *)v1181 + v1185;
        do
        {
          ++v1183;
          *(__m128d *)&v1189[v1186] = _mm_add_pd(*(__m128d *)&v1188[v1186], *(__m128d *)(v1187 + v1186));
          v1186 += 16;
        }
        while ( v1184 > v1183 );
        v1178 = v1360;
        v1177 = v1360 & 0xFFFFFFFE;
        v1190 = v1177 + v1447;
        if ( v1360 != (_DWORD)v1177 )
        {
          v1177 = v1190;
          v1191 = v1190 + 1;
          v1181[v1177] = *(double *)(v1179 + 8 * v1177) + v1180[v1177];
          if ( v1176 > v1191 )
            v1181[v1191] = *(double *)(v1179 + 8LL * v1191) + v1180[v1191];
        }
      }
      else
      {
        v1177 = 8LL * (unsigned int)(v1176 - 1) + 8;
        v1226 = 0;
        do
        {
          v1181[v1226 / 8] = *(double *)(v1179 + v1226) + v1180[v1226 / 8];
          v1226 += 8LL;
        }
        while ( v1226 != v1177 );
      }
    }
    CoinDenseVector<double>::operator=(&v1481, v1517, v1177, v1178, v1180);
    CoinDenseVector<double>::~CoinDenseVector(v1517);
    if ( v244 <= 0 )
    {
LABEL_237:
      v324 = 0;
      do
      {
        v1428 = *(double *)CoinDenseVector<double>::operator[](&v1458, (unsigned int)v1316[v324])
              - *(double *)(v1301 + 8LL * v1316[v324]);
        v1372 = *(double *)CoinDenseVector<double>::operator[](&v1486, v1316[v324]);
        v325 = (double *)CoinDenseVector<double>::operator[](v1483, (unsigned int)v1316[v324++]);
        *v325 = v1428 + v1372;
      }
      while ( v243 > (int)v324 );
      if ( v244 <= 0 )
      {
        v1429 = 0.0;
        goto LABEL_245;
      }
LABEL_240:
      v326 = 0;
      v1429 = 0.0;
      do
      {
        while ( *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)v44[v326]) <= v1429 )
        {
          if ( v244 <= (int)++v326 )
            goto LABEL_244;
        }
        v327 = (double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)v44[v326++]);
        v1429 = *v327;
      }
      while ( v244 > (int)v326 );
LABEL_244:
      if ( v243 <= 0 )
      {
        v1373 = 0.0;
        goto LABEL_249;
      }
LABEL_245:
      v328 = 0;
      v1373 = 0.0;
      do
      {
        while ( *(double *)CoinDenseVector<double>::operator[](v1483, (unsigned int)v1316[v328]) <= v1373 )
        {
          if ( v243 <= (int)++v328 )
            goto LABEL_249;
        }
        v329 = (double *)CoinDenseVector<double>::operator[](v1483, (unsigned int)v1316[v328++]);
        v1373 = *v329;
      }
      while ( v243 > (int)v328 );
LABEL_249:
      v330 = v1468;
      v1374 = fmax(v1429, v1373);
      if ( v1468 <= 0 )
      {
        v337 = 0.0;
LABEL_255:
        v1375 = fmax(v337, v1374);
        goto LABEL_256;
      }
LABEL_250:
      v331 = v1469;
      v332 = (unsigned int)(v330 - 1);
      v333 = 0.0;
      v334 = v1469 + 1;
      v335 = (__int64)&v1469[v332 + 1];
      while ( 1 )
      {
        v336 = *v331;
        if ( *v331 < 0.0 )
          v336 = -v336;
        v333 = fmax(v333, v336);
        v331 = v334;
        v337 = v333;
        if ( v334 == (double *)v335 )
          break;
        ++v334;
      }
      goto LABEL_255;
    }
LABEL_234:
    v322 = v44;
    do
    {
      v1426 = *(double *)(v1300 + 8LL * *v322);
      v1427 = v1426 - *(double *)CoinDenseVector<double>::operator[](&v1458, *v322);
      v1371 = *(double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)*v322);
      v323 = (double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v322++);
      *v323 = v1427 + v1371;
    }
    while ( v322 != &v44[v244 - 1 + 1] );
    if ( v243 <= 0 )
      goto LABEL_240;
    goto LABEL_237;
  }
  if ( v244 > 0 )
    goto LABEL_234;
  v330 = v1468;
  if ( v1468 > 0 )
  {
    v1374 = 0.0;
    goto LABEL_250;
  }
  v1375 = 0.0;
LABEL_256:
  if ( v1481 <= 0 )
  {
    x = 1.0e-99;
    if ( v1375 <= 1.0e-99 )
    {
      v1375 = 1.0e-99;
      x = 1.0e-99;
    }
  }
  else
  {
    v338 = (double *)v1482;
    v339 = (double *)(v1482 + 8);
    v340 = 0.0;
    while ( 1 )
    {
      v341 = *v338;
      if ( *v338 < 0.0 )
        v341 = -v341;
      v340 = fmax(v340, v341);
      v338 = v339;
      if ( v339 == (double *)(v1482 + 8 + 8LL * (unsigned int)(v1481 - 1)) )
        break;
      ++v339;
    }
    x = fmax(v340, 1.0e-99);
    v1375 = fmax(v1375, 1.0e-99);
  }
  v342 = v1453;
  v343 = v1471;
  v344 = v1476;
  v345 = v1452;
  v346 = v1474;
  v347 = v1487;
  v348 = v1489;
  v349 = v1485;
  v1248 = fmin(0.1 * v40, v1289);
  if ( v1452 <= 0 )
  {
    if ( v1453 <= 0 )
    {
      v1290 = 1.0e-119;
      v1293 = 1.0e-99;
      goto LABEL_1122;
    }
    v350 = 1.0e20;
    v351 = -1.0e20;
    goto LABEL_267;
  }
  v350 = 1.0e20;
  v351 = -1.0e20;
  v352 = v44;
  do
  {
    v353 = *v352++;
    v354 = v344[v353] * *(double *)(v343 + 8 * v353);
    *(double *)(v346 + 8 * v353) = v1289 - v354;
    v351 = fmax(v354, v351);
    v350 = fmin(v354, v350);
  }
  while ( v352 != &v44[v345 - 1 + 1] );
  if ( v342 > 0 )
  {
LABEL_267:
    v355 = 0;
    do
    {
      v356 = v1316[v355++];
      v357 = v348[v356] * *(double *)(v347 + 8 * v356);
      *(double *)(v349 + 8 * v356) = v1289 - v357;
      v351 = fmax(v357, v351);
      v350 = fmin(v357, v350);
    }
    while ( v342 > (int)v355 );
  }
  v1293 = fmax(v351, 1.0e-99);
  v1290 = v1293 / fmax(v350, 1.0e-99);
  if ( v345 > 0 )
  {
    v358 = 0.0;
    v359 = v44;
    do
    {
      v360 = *v359++;
      v358 = fmax(*(double *)(v346 + 8 * v360), v358);
    }
    while ( v359 != &v44[v345 - 1 + 1] );
    if ( v342 <= 0 )
    {
      v1297 = fmax(v358, 0.0);
      goto LABEL_276;
    }
    goto LABEL_273;
  }
LABEL_1122:
  if ( v342 <= 0 )
  {
    v1297 = 0.0;
    goto LABEL_276;
  }
  v358 = 0.0;
LABEL_273:
  v361 = 0.0;
  v362 = 0;
  do
  {
    v363 = v1316[v362++];
    v364 = fmax(*(double *)(v349 + 8 * v363), v361);
    v361 = v364;
  }
  while ( v342 > (int)v362 );
  v1297 = fmax(v358, v364);
LABEL_276:
  CoinDenseVector<double>::CoinDenseVector(&v1523, 6, 0.0);
  v365 = (double *)CoinDenseVector<double>::operator[](&v1523, 0);
  if ( v1468 <= 0 )
  {
    v370 = 0.0;
  }
  else
  {
    v366 = v1469;
    v367 = 0.0;
    for ( j = v1469 + 1; ; ++j )
    {
      v369 = *v366;
      v366 = j;
      v367 = v367 + v369 * v369;
      if ( j == &v1469[(unsigned int)(v1468 - 1) + 1] )
        break;
    }
    v370 = sqrt(v367);
    if ( v367 < 0.0 )
    {
      v1449 = v365;
      sqrt(v367);
      v365 = v1449;
    }
  }
  *v365 = v370;
  v371 = (double *)CoinDenseVector<double>::operator[](&v1523, 1);
  if ( v1481 > 0 )
  {
    v372 = (double *)v1482;
    v373 = 0.0;
    for ( k = (double *)(v1482 + 8); ; ++k )
    {
      v375 = *v372;
      v372 = k;
      v373 = v373 + v375 * v375;
      if ( k == (double *)(v1482 + 8 + 8LL * (unsigned int)(v1481 - 1)) )
        break;
    }
    v376 = sqrt(v373);
    if ( v373 < 0.0 )
    {
      v1448 = v371;
      sqrt(v373);
      v371 = v1448;
    }
    *v371 = v376;
    v377 = v345;
    if ( v345 > 0 )
      goto LABEL_289;
LABEL_1136:
    v1340 = 0.0;
    v1430 = 0.0;
    goto LABEL_291;
  }
  *v371 = 0.0;
  v377 = v345;
  if ( v345 <= 0 )
    goto LABEL_1136;
LABEL_289:
  v378 = v44;
  v1340 = 0.0;
  v1430 = 0.0;
  v1304 = (__int64)&v44[v377 - 1 + 1];
  do
  {
    v1317 = *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v378);
    v1430 = v1317 * *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v378) + v1430;
    v1318 = *(double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v378);
    v379 = (double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v378++);
    v1340 = v1318 * *v379 + v1340;
  }
  while ( v378 != (int *)v1304 );
LABEL_291:
  v380 = (double *)CoinDenseVector<double>::operator[](&v1523, 2);
  v381 = sqrt(v1430);
  if ( v1430 < 0.0 )
  {
    v1333 = v380;
    sqrt(v1430);
    v380 = v1333;
  }
  *v380 = v381;
  v382 = (double *)CoinDenseVector<double>::operator[](&v1523, 4);
  v383 = sqrt(v1340);
  if ( v1340 < 0.0 )
  {
    v1450 = v382;
    sqrt(v1340);
    v382 = v1450;
  }
  *v382 = v383;
  if ( v342 <= 0 )
  {
    v1341 = 0.0;
    v1431 = 0.0;
  }
  else
  {
    v1341 = 0.0;
    v384 = v1316;
    v1431 = 0.0;
    do
    {
      v1319 = *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v384);
      v1431 = v1319 * *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v384) + v1431;
      v1320 = *(double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v384);
      v385 = (double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v384++);
      v1341 = v1320 * *v385 + v1341;
    }
    while ( v384 != &v1316[v342 - 1 + 1] );
  }
  v386 = (double *)CoinDenseVector<double>::operator[](&v1523, 3);
  v387 = sqrt(v1431);
  if ( v1431 < 0.0 )
  {
    v1334 = v386;
    sqrt(v1431);
    v386 = v1334;
  }
  *v386 = v387;
  v388 = (double *)CoinDenseVector<double>::operator[](&v1523, 5);
  v389 = sqrt(v1341);
  if ( v1341 < 0.0 )
  {
    v1451 = v388;
    sqrt(v1341);
    v388 = v1451;
  }
  *v388 = v389;
  if ( v1523 <= 0 )
  {
    v1282 = 0.0;
  }
  else
  {
    v390 = v1524;
    v391 = 0.0;
    for ( m = v1524 + 1; ; ++m )
    {
      v393 = *v390;
      v390 = m;
      v391 = v391 + v393 * v393;
      if ( m == &v1524[(unsigned int)(v1523 - 1) + 1] )
        break;
    }
    v1282 = sqrt(v391);
    if ( v391 < 0.0 )
      sqrt(v391);
  }
  CoinDenseVector<double>::~CoinDenseVector(&v1523);
  v1455 = 0;
  v1260 = fmax(v1259, 1.0e-15);
  printf("\n\nItn   mu   stepx   stepz  Pinf  Dinf");
  printf("  Cinf   Objective    nf  center");
  if ( v1258 > 2 )
    puts("  atol   solver   Inexact");
  else
    putchar(10);
  v394 = v1458;
  CoinDenseVector<double>::CoinDenseVector(&v1509, (unsigned int)v1458, 0.0);
  v395 = v1459;
  v396 = v1510;
  if ( v394 <= 0 )
  {
LABEL_320:
    v410 = v1509;
    if ( v1509 > 0 )
      goto LABEL_321;
LABEL_1095:
    v1432 = 0.0;
    goto LABEL_325;
  }
  if ( (v1459 >= (unsigned __int64)(v1510 + 2) || (unsigned __int64)v1510 >= v1459 + 16) && (unsigned int)v394 > 0xE )
  {
    v397 = 0;
    v398 = (v1459 >> 3) & 1;
    if ( ((v1459 >> 3) & 1) != 0 )
    {
      v397 = 1;
      *v1510 = v1261 * *(double *)v1459;
    }
    v399 = v394 - v398;
    v400 = (unsigned int)v398;
    v401 = 0;
    v402 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1261, (__m128d)*(unsigned __int64 *)&v1261);
    v403 = v395 + v400 * 8;
    v404 = &v396[v400];
    v405 = 0;
    do
    {
      ++v405;
      *(__m128d *)&v404[v401] = _mm_mul_pd(*(__m128d *)(v403 + v401 * 8), v402);
      v401 += 2;
    }
    while ( v399 >> 1 > v405 );
    v406 = (v399 & 0xFFFFFFFE) + v397;
    if ( v399 != (v399 & 0xFFFFFFFE) )
    {
      v407 = v406;
      v408 = *(double *)(v395 + 8LL * v406);
      v409 = v406 + 1;
      v396[v407] = v408 * v1261;
      if ( v394 > v409 )
        v396[v409] = v1261 * *(double *)(v395 + 8LL * v409);
    }
    goto LABEL_320;
  }
  v1220 = 0;
  do
  {
    v396[v1220 / 8] = v1261 * *(double *)(v395 + v1220);
    v1220 += 8LL;
  }
  while ( v1220 != 8LL * (unsigned int)(v394 - 1) + 8 );
  v410 = v1509;
  if ( v1509 <= 0 )
    goto LABEL_1095;
LABEL_321:
  v411 = 0.0;
  v412 = (__int64)&v396[(unsigned int)(v410 - 1) + 1];
  do
  {
    v413 = *v396++;
    v411 = v411 + v413 * v413;
  }
  while ( v396 != (double *)v412 );
  v1432 = sqrt(v411);
  if ( v411 < 0.0 )
    sqrt(v411);
LABEL_325:
  CoinDenseVector<double>::~CoinDenseVector(&v1509);
  v414 = v1460;
  CoinDenseVector<double>::CoinDenseVector(&v1511, (unsigned int)v1460, 0.0);
  v415 = v1461;
  v416 = v1512;
  if ( v414 <= 0 )
    goto LABEL_335;
  if ( (v1461 >= (unsigned __int64)(v1512 + 2) || (unsigned __int64)v1512 >= v1461 + 16) && (unsigned int)v414 > 0xE )
  {
    v417 = 0;
    v418 = (v1461 >> 3) & 1;
    if ( ((v1461 >> 3) & 1) != 0 )
    {
      v417 = 1;
      *v1512 = v1266 * *(double *)v1461;
    }
    v419 = v414 - v418;
    v420 = (unsigned int)v418;
    v421 = 0;
    v422 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1266, (__m128d)*(unsigned __int64 *)&v1266);
    v423 = v415 + v420 * 8;
    v424 = &v416[v420];
    v425 = 0;
    do
    {
      ++v425;
      *(__m128d *)&v424[v421] = _mm_mul_pd(*(__m128d *)(v423 + v421 * 8), v422);
      v421 += 2;
    }
    while ( v419 >> 1 > v425 );
    v426 = (v419 & 0xFFFFFFFE) + v417;
    if ( v419 != (v419 & 0xFFFFFFFE) )
    {
      v427 = v426;
      v428 = *(double *)(v415 + 8LL * v426);
      v429 = v426 + 1;
      v416[v427] = v428 * v1266;
      if ( v429 < v414 )
        v416[v429] = v1266 * *(double *)(v415 + 8LL * v429);
    }
LABEL_335:
    v430 = v1511;
    if ( v1511 > 0 )
      goto LABEL_336;
LABEL_1102:
    v434 = 0.0;
    goto LABEL_340;
  }
  v1222 = 0;
  do
  {
    v416[v1222 / 8] = v1266 * *(double *)(v415 + v1222);
    v1222 += 8LL;
  }
  while ( v1222 != 8LL * (unsigned int)(v414 - 1) + 8 );
  v430 = v1511;
  if ( v1511 <= 0 )
    goto LABEL_1102;
LABEL_336:
  v431 = 0.0;
  v432 = (__int64)&v416[(unsigned int)(v430 - 1) + 1];
  do
  {
    v433 = *v416++;
    v431 = v431 + v433 * v433;
  }
  while ( v416 != (double *)v432 );
  v434 = sqrt(v431);
  if ( v431 < 0.0 )
    sqrt(v431);
LABEL_340:
  CoinDenseVector<double>::~CoinDenseVector(&v1511);
  printf("\n%3g                     ", 0.0);
  v1342 = log10(x);
  v435 = log10(v1375);
  printf("%6.1f%6.1f", v435, v1342);
  v436 = log10(v1293);
  v437.m128d_f64[0] = ((v1432 * v1432 + v434 * v434) * 0.5 + v1280) * v1262;
  printf("%6.1f%15.7e", v436, v437.m128d_f64[0]);
  printf("   %8.1f\n", v1290);
  v1237 = (ClpLsqr *)v1535;
  ClpLsqr::ClpLsqr((ClpLsqr *)v1535, (ClpInterior *)a1);
  v1263 = (double)v1285;
  if ( (double)v1285 <= 0.0 )
  {
    v1274 = 0.0;
    v1004 = 0;
    v1257 = 0;
    goto LABEL_785;
  }
  v1241 = -1.0;
  v1265 = 0;
  v1257 = 0;
  v1256 = -1.0;
  v1230 = v1264 - 1;
  v1274 = 0.0;
  v1273 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1284, (__m128d)*(unsigned __int64 *)&v1284);
  v1254 = (__int64)&v1275[v1230 + 1];
  v1272 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1283, (__m128d)*(unsigned __int64 *)&v1283);
  v1281 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1287, (__m128d)*(unsigned __int64 *)&v1287);
  v1246 = (__int64)&v1233[(unsigned int)(v1249 - 1) + 1];
  v1271 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1278, (__m128d)*(unsigned __int64 *)&v1278);
  v1270 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1277, (__m128d)*(unsigned __int64 *)&v1277);
  v1269 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1276, (__m128d)*(unsigned __int64 *)&v1276);
  v1243 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1261, (__m128d)*(unsigned __int64 *)&v1261);
  v1242 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1266, (__m128d)*(unsigned __int64 *)&v1266);
  while ( 2 )
  {
    v441 = 1;
    v139 = v1452 <= 0;
    v1274 = v1274 + 1.0;
    v442 = fmax(v1375, fmax(x, v1297));
    *((double *)a4 + 1) = v442;
    for ( n = fmax(fmin(s, 0.1 * v442), v1260); !v139; v1275[v438] = v444 + v1433 )
    {
      v1433 = v1275[v44[v441 - 1]];
      se = *(double *)CoinDenseVector<double>::operator[](&v1475, v44[v441 - 1]);
      v443 = (double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)v44[v441 - 1]);
      v438 = v44[v441 - 1];
      v444 = se / *v443;
      LODWORD(v443) = v441++;
      v139 = v1452 <= (int)v443;
    }
    v445 = (unsigned int)v1453;
    if ( v1453 > 0 )
    {
      v446 = v1316;
      for ( ii = 0; ii < v1453; ++ii )
      {
        v1434 = *(double *)CoinDenseVector<double>::operator[](&v1507, (unsigned int)*v446);
        sf = *(double *)CoinDenseVector<double>::operator[](&v1488, (unsigned int)*v446);
        sg = sf / *(double *)CoinDenseVector<double>::operator[](&v1486, (unsigned int)*v446);
        v448 = (double *)CoinDenseVector<double>::operator[](&v1507, (unsigned int)*v446++);
        *v448 = v1434 + sg;
      }
    }
    CoinDenseVector<double>::operator=(v1502, &v1481, v438, v445, v440);
    v449 = 0;
    for ( jj = v44; v1452 > v449; ++v449 )
    {
      v1435 = *(double *)CoinDenseVector<double>::operator[](v1502, (unsigned int)*jj);
      sh = *(double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*jj);
      v1376 = *(double *)CoinDenseVector<double>::operator[](&v1475, (unsigned int)*jj);
      si = v1376 * *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*jj) + sh;
      sj = si / *(double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)*jj);
      v451 = (double *)CoinDenseVector<double>::operator[](v1502, (unsigned int)*jj++);
      *v451 = v1435 - sj;
    }
    if ( v1453 > 0 )
    {
      v452 = v1316;
      for ( kk = 0; kk < v1453; ++kk )
      {
        v1436 = *(double *)CoinDenseVector<double>::operator[](v1502, (unsigned int)*v452);
        sk = *(double *)CoinDenseVector<double>::operator[](v1484, (unsigned int)*v452);
        v1377 = *(double *)CoinDenseVector<double>::operator[](&v1488, (unsigned int)*v452);
        sl = v1377 * *(double *)CoinDenseVector<double>::operator[](v1483, (unsigned int)*v452) + sk;
        sm = sl / *(double *)CoinDenseVector<double>::operator[](&v1486, (unsigned int)*v452);
        v454 = (double *)CoinDenseVector<double>::operator[](v1502, (unsigned int)*v452++);
        *v454 = v1436 + sm;
      }
    }
    if ( v1250 != 1 )
    {
      perror("This LSproblem not yet implemented\n");
      goto LABEL_354;
    }
    v1098 = v1507;
    CoinDenseVector<double>::CoinDenseVector(&usage, v1507, 0.0);
    v1101 = v1508;
    v1102 = usage.ru_utime.tv_usec;
    if ( v1098 > 0 )
    {
      if ( (v1508 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1508 + 16) && (unsigned int)v1098 > 0xE )
      {
        v1103 = 0;
        v1104 = (v1508 >> 3) & 1;
        if ( ((v1508 >> 3) & 1) != 0 )
        {
          v1103 = 1;
          *(double *)usage.ru_utime.tv_usec = 1.0 / *(double *)v1508;
        }
        LODWORD(v1099) = 0;
        v1105 = v1098 - v1104;
        v1106 = 8LL * (unsigned int)v1104;
        v1107 = 0;
        v1108 = v1101 + v1106;
        v1100 = v1102 + v1106;
        do
        {
          v1099 = (unsigned int)(v1099 + 1);
          *(__m128d *)(v1100 + v1107) = _mm_div_pd((__m128d)xmmword_289DC0, *(__m128d *)(v1108 + v1107));
          v1107 += 16;
        }
        while ( v1105 >> 1 > (unsigned int)v1099 );
        v1109 = (v1105 & 0xFFFFFFFE) + v1103;
        if ( v1105 != (v1105 & 0xFFFFFFFE) )
        {
          v1110 = v1109;
          v1111 = v1109 + 1;
          *(double *)(v1102 + 8 * v1110) = 1.0 / *(double *)(v1101 + 8 * v1110);
          if ( v1111 < v1098 )
            *(double *)(v1102 + 8LL * v1111) = 1.0 / *(double *)(v1101 + 8LL * v1111);
        }
      }
      else
      {
        v1099 = 8LL * (unsigned int)(v1098 - 1) + 8;
        v1211 = 0;
        do
        {
          *(double *)(v1102 + v1211) = 1.0 / *(double *)(v1101 + v1211);
          v1211 += 8;
        }
        while ( v1211 != v1099 );
      }
    }
    CoinDenseVector<double>::operator=(&v1507, &usage, v1099, v1100, v1102);
    v1112 = 1;
    CoinDenseVector<double>::~CoinDenseVector(&usage);
    if ( v1454 > 0 )
    {
      do
      {
        *(_QWORD *)CoinDenseVector<double>::operator[](&v1507, (unsigned int)v1288[v1112 - 1]) = 0;
        v1114 = v1112++;
      }
      while ( v1454 > v1114 );
    }
    if ( (int)v1264 > 0 )
    {
      v1115 = v1275;
      v1116 = v1253;
      do
      {
        while ( 1 )
        {
          v1117 = *v1115;
          v437.m128d_f64[0] = sqrt(*v1115);
          if ( *v1115 < 0.0 )
            break;
          ++v1115;
          *v1116++ = *(_QWORD *)&v437.m128d_f64[0];
          if ( v1115 == (double *)v1254 )
            goto LABEL_964;
        }
        ++v1115;
        sqrt(v1117);
        *v1116++ = *(_QWORD *)&v437.m128d_f64[0];
      }
      while ( (double *)v1254 != v1115 );
LABEL_964:
      v1536 = v1253;
      v1537 = v1266;
      if ( v1258 <= 2 )
        goto LABEL_983;
      v1118 = 0;
      do
      {
        v1445 = *(double *)&v1253[v1118];
        sba = v1247[v1118];
        v1119 = (double *)CoinDenseVector<double>::operator[](v1504, (unsigned int)v1118++);
        *v1119 = v1445 * sba;
      }
      while ( v1118 != v1230 + 1 );
      goto LABEL_967;
    }
    v1536 = v1253;
    v1537 = v1266;
    if ( v1258 > 2 )
    {
LABEL_967:
      if ( v1249 > 0 )
      {
        v1120 = v1233;
        LODWORD(v1113) = v1264;
        do
        {
          v1121 = v1113;
          v1446 = *v1120;
          v1122 = (double *)CoinDenseVector<double>::operator[](v1504, (unsigned int)v1113);
          ++v1120;
          v1113 = (unsigned int)(v1121 + 1);
          *v1122 = v1446 * (1.0 / v1266);
        }
        while ( v1120 != (double *)v1246 );
      }
      ClpPdco::matPrecon(a1, v1239, v1238, v1113, v1266);
      CoinDenseVector<double>::clear(v1244);
      *((double *)a4 + 1) = v1282;
      *(double *)a4 = v1260;
      v437.m128d_f64[0] = n;
      ClpLsqr::do_lsqr(
        (int)v1237,
        (int)v1504,
        SHIDWORD(v1232),
        0,
        (int)v1244,
        (int)&v1545,
        *a4,
        a4[1],
        a4[2],
        a4[3],
        (__int64)&v1455,
        v1235,
        1,
        (__int64)v1239,
        v1228,
        v1229,
        v1230,
        SLODWORD(v1231),
        v1232,
        (int)v1233,
        (int)v1234,
        v1235,
        v1236,
        (int)v1237,
        (int)v1238,
        (int)v1239,
        (int)v1240,
        SLODWORD(v1241),
        *(__int64 *)&v1242.m128d_f64[0],
        SLODWORD(v1242.m128d_f64[1]),
        SLODWORD(v1243.m128d_f64[0]),
        SLODWORD(v1243.m128d_f64[1]),
        (int)v1244,
        *(__int64 *)&v1245);
      v1123 = v1496;
      CoinDenseVector<double>::CoinDenseVector(&usage, v1496, 0.0);
      v1126 = v1497;
      v1127 = v1499;
      v1128 = usage.ru_utime.tv_usec;
      if ( v1123 > 0 )
      {
        v1125 = usage.ru_utime.tv_usec + 16;
        LOBYTE(v1125) = (unsigned __int64)v1499 >= usage.ru_utime.tv_usec + 16;
        if ( ((unsigned __int8)(v1125 | (usage.ru_utime.tv_usec >= (unsigned __int64)(v1499 + 2)))
            & (v1497 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1497 + 16)) != 0
          && (unsigned int)v1123 > 0xE )
        {
          v1129 = 0;
          v1130 = (v1497 >> 3) & 1;
          if ( ((v1497 >> 3) & 1) != 0 )
          {
            v1129 = 1;
            *(double *)usage.ru_utime.tv_usec = *(double *)v1497 * *v1499;
          }
          LODWORD(v1124) = 0;
          v1131 = v1123 - v1130;
          v1132 = 8LL * (unsigned int)v1130;
          v1133 = (unsigned int)(v1123 - v1130) >> 1;
          v1134 = 0;
          v1135 = v1126 + v1132;
          v1136 = &v1127[(unsigned __int64)v1132 / 8];
          v1125 = v1128 + v1132;
          do
          {
            v1124 = (unsigned int)(v1124 + 1);
            *(__m128d *)(v1125 + v1134 * 8) = _mm_mul_pd(*(__m128d *)&v1136[v1134], *(__m128d *)(v1135 + v1134 * 8));
            v1134 += 2;
          }
          while ( (unsigned int)v1124 < v1133 );
          v1137 = (v1131 & 0xFFFFFFFE) + v1129;
          if ( v1131 != (v1131 & 0xFFFFFFFE) )
          {
            v1138 = v1137;
            v1139 = v1137 + 1;
            *(double *)(v1128 + 8 * v1138) = v1127[v1138] * *(double *)(v1126 + 8 * v1138);
            if ( v1123 > v1139 )
              *(double *)(v1128 + 8LL * v1139) = *(double *)(v1126 + 8LL * v1139) * v1127[v1139];
          }
        }
        else
        {
          v1124 = 8LL * (unsigned int)(v1123 - 1) + 8;
          v1212 = 0;
          do
          {
            *(double *)(v1128 + v1212) = *(double *)(v1126 + v1212) * v1127[v1212 / 8];
            v1212 += 8LL;
          }
          while ( v1212 != v1124 );
        }
      }
      CoinDenseVector<double>::operator=(v1244, &usage, v1124, v1125, v1127);
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      if ( (v1545 & 0xFFFFFFFB) == 3 )
        printf("\n    LSQR stopped early:  istop = //%d", v1545);
      v1256 = *(double *)v1235;
      n = *(double *)(v1235 + 8);
      v1241 = *(double *)(v1235 + 16);
    }
LABEL_983:
    CoinDenseVector<double>::clear(&v1505);
    ClpPdco::matVecMult(a1, 2, &v1505, v1244);
    if ( v1454 > 0 )
    {
      v1140 = 1;
      do
      {
        *(_QWORD *)CoinDenseVector<double>::operator[](&v1505, (unsigned int)v1288[v1140 - 1]) = 0;
        v1141 = v1140++;
      }
      while ( v1454 > v1141 );
    }
    v1142 = v1505;
    CoinDenseVector<double>::CoinDenseVector(&v1545, v1505, 0.0);
    v1143 = v1506;
    v1144 = v1503;
    v1145 = v1546;
    if ( v1142 > 0 )
    {
      if ( ((unsigned __int64)v1503 >= v1546 + 16 || v1546 >= (unsigned __int64)(v1503 + 2))
        && (v1506 >= v1546 + 16 || v1546 >= v1506 + 16)
        && (unsigned int)v1142 > 0xE )
      {
        v1146 = 0;
        v1147 = (v1506 >> 3) & 1;
        if ( ((v1506 >> 3) & 1) != 0 )
        {
          v1146 = 1;
          *(double *)v1546 = *(double *)v1506 - *v1503;
        }
        v1148 = 0;
        v1149 = v1142 - v1147;
        v1150 = 8LL * (unsigned int)v1147;
        v1151 = 0;
        v1152 = v1143 + v1150;
        v1153 = &v1144[(unsigned __int64)v1150 / 8];
        v1154 = v1145 + v1150;
        do
        {
          ++v1148;
          *(__m128d *)(v1154 + v1151 * 8) = _mm_sub_pd(*(__m128d *)(v1152 + v1151 * 8), *(__m128d *)&v1153[v1151]);
          v1151 += 2;
        }
        while ( v1148 < v1149 >> 1 );
        v1155 = (v1149 & 0xFFFFFFFE) + v1146;
        if ( v1149 != (v1149 & 0xFFFFFFFE) )
        {
          v1156 = v1155;
          v1157 = v1155 + 1;
          *(double *)(v1145 + 8 * v1156) = *(double *)(v1143 + 8 * v1156) - v1144[v1156];
          if ( v1157 < v1142 )
            *(double *)(v1145 + 8LL * v1157) = *(double *)(v1143 + 8LL * v1157) - v1144[v1157];
        }
      }
      else
      {
        v1210 = 0;
        do
        {
          *(double *)(v1145 + v1210) = *(double *)(v1143 + v1210) - v1144[v1210 / 8];
          v1210 += 8LL;
        }
        while ( v1210 != 8LL * (unsigned int)(v1142 - 1) + 8 );
      }
    }
    v1158 = v1507;
    CoinDenseVector<double>::CoinDenseVector(&usage, v1507, 0.0);
    v1161 = v1508;
    v1162 = v1546;
    v1163 = usage.ru_utime.tv_usec;
    if ( v1158 > 0 )
    {
      v1160 = usage.ru_utime.tv_usec + 16;
      LOBYTE(v1160) = v1546 >= usage.ru_utime.tv_usec + 16;
      if ( ((unsigned __int8)(v1160 | (usage.ru_utime.tv_usec >= v1546 + 16))
          & (v1508 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1508 + 16)) != 0
        && (unsigned int)v1158 > 0xE )
      {
        v1164 = 0;
        v1165 = (v1508 >> 3) & 1;
        if ( ((v1508 >> 3) & 1) != 0 )
        {
          v1164 = 1;
          *(double *)usage.ru_utime.tv_usec = *(double *)v1508 * *(double *)v1546;
        }
        LODWORD(v1159) = 0;
        v1166 = v1158 - v1165;
        v1167 = 8LL * (unsigned int)v1165;
        v1168 = 0;
        v1169 = v1161 + v1167;
        v1170 = v1162 + v1167;
        v1160 = v1163 + v1167;
        do
        {
          v1159 = (unsigned int)(v1159 + 1);
          *(__m128d *)(v1160 + v1168) = _mm_mul_pd(*(__m128d *)(v1170 + v1168), *(__m128d *)(v1169 + v1168));
          v1168 += 16;
        }
        while ( (unsigned int)v1159 < v1166 >> 1 );
        v1171 = (v1166 & 0xFFFFFFFE) + v1164;
        if ( v1166 != (v1166 & 0xFFFFFFFE) )
        {
          v1172 = v1171;
          v1173 = v1171 + 1;
          *(double *)(v1163 + 8 * v1172) = *(double *)(v1161 + 8 * v1172) * *(double *)(v1162 + 8 * v1172);
          if ( v1173 < v1158 )
            *(double *)(v1163 + 8LL * v1173) = *(double *)(v1161 + 8LL * v1173) * *(double *)(v1162 + 8LL * v1173);
        }
      }
      else
      {
        v1159 = 8LL * (unsigned int)(v1158 - 1) + 8;
        v1209 = 0;
        do
        {
          *(double *)(v1163 + v1209) = *(double *)(v1161 + v1209) * *(double *)(v1162 + v1209);
          v1209 += 8;
        }
        while ( v1209 != v1159 );
      }
    }
    CoinDenseVector<double>::operator=(&v1494, &usage, v1159, v1160, v1162);
    CoinDenseVector<double>::~CoinDenseVector(&usage);
    CoinDenseVector<double>::~CoinDenseVector(&v1545);
LABEL_354:
    v455 = 0;
    v1257 += v1455;
    v456 = v44;
    if ( v1452 > 0 )
    {
      do
      {
        v1437 = *(double *)CoinDenseVector<double>::operator[](&v1494, (unsigned int)*v456);
        sn = *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v456);
        v457 = (double *)CoinDenseVector<double>::operator[](v1477, (unsigned int)*v456);
        v458 = (unsigned int)*v456;
        *v457 = v1437 - sn;
        v1438 = *(double *)CoinDenseVector<double>::operator[](v1473, v458);
        so = *(double *)CoinDenseVector<double>::operator[](&v1475, (unsigned int)*v456);
        v1439 = v1438 - so * *(double *)CoinDenseVector<double>::operator[](v1477, (unsigned int)*v456);
        sp = *(double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)*v456);
        v459 = (double *)CoinDenseVector<double>::operator[](v1479, (unsigned int)*v456++);
        *v459 = v1439 / sp;
        ++v455;
      }
      while ( v1452 > v455 );
    }
    v460 = v1453;
    if ( v1453 <= 0 )
    {
      v466 = v1470;
      v467 = v1471;
      v468 = v1478;
      if ( v1470 <= 0 )
      {
        v472 = v1480;
        v473 = v1476;
        v474 = v1475;
        v471 = 1.0e20;
LABEL_931:
        v475 = 1.0e30;
        if ( v474 <= 0 )
        {
          v477 = 1.0e20;
          v481 = 1.0e20;
          if ( v471 < 1.0e30 )
            goto LABEL_384;
          v479 = 1.0e30;
          goto LABEL_382;
        }
        goto LABEL_371;
      }
    }
    else
    {
      v461 = v1316;
      v462 = 0;
      do
      {
        v1440 = -*(double *)CoinDenseVector<double>::operator[](v1483, (unsigned int)*v461);
        sq = *(double *)CoinDenseVector<double>::operator[](&v1494, (unsigned int)*v461);
        v463 = (double *)CoinDenseVector<double>::operator[](v1490, (unsigned int)*v461);
        v464 = (unsigned int)*v461;
        *v463 = v1440 - sq;
        v1441 = *(double *)CoinDenseVector<double>::operator[](v1484, v464);
        sr = *(double *)CoinDenseVector<double>::operator[](&v1488, (unsigned int)*v461);
        v1442 = v1441 - sr * *(double *)CoinDenseVector<double>::operator[](v1490, (unsigned int)*v461);
        ss = *(double *)CoinDenseVector<double>::operator[](&v1486, (unsigned int)*v461);
        v465 = (double *)CoinDenseVector<double>::operator[](v1492, (unsigned int)*v461++);
        v460 = v1453;
        *v465 = v1442 / ss;
        ++v462;
      }
      while ( v460 > v462 );
      v466 = v1470;
      v467 = v1471;
      v468 = v1478;
      if ( v1470 <= 0 )
      {
        v471 = 1.0e20;
        goto LABEL_364;
      }
    }
    v469 = 8LL * (unsigned int)(v466 - 1) + 8;
    v470 = 0;
    v471 = 1.0e20;
    do
    {
      v437.m128d_f64[0] = *(double *)(v468 + v470);
      if ( v437.m128d_f64[0] < 0.0 )
      {
        v437.m128d_f64[0] = fmin(*(double *)(v467 + v470) / -v437.m128d_f64[0], v471);
        v471 = v437.m128d_f64[0];
      }
      v470 += 8;
    }
    while ( v469 != v470 );
LABEL_364:
    v472 = v1480;
    v473 = v1476;
    v474 = v1475;
    if ( v460 <= 0 )
      goto LABEL_931;
    if ( v1486 <= 0 )
    {
      v475 = 1.0e20;
    }
    else
    {
      v475 = 1.0e20;
      v476 = 0;
      do
      {
        v437.m128d_f64[0] = *(double *)(v1491 + v476);
        if ( v437.m128d_f64[0] < 0.0 )
        {
          v437.m128d_f64[0] = fmin(*(double *)(v1487 + v476) / -v437.m128d_f64[0], v475);
          v475 = v437.m128d_f64[0];
        }
        v476 += 8;
      }
      while ( 8LL * (unsigned int)(v1486 - 1) + 8 != v476 );
    }
    if ( v1475 <= 0 )
    {
      v477 = 1.0e20;
      goto LABEL_376;
    }
LABEL_371:
    v477 = 1.0e20;
    v478 = 0;
    do
    {
      v437.m128d_f64[0] = *(double *)(v472 + 8 * v478);
      if ( v437.m128d_f64[0] < 0.0 )
      {
        v437.m128d_f64[0] = fmin(v473[v478] / -v437.m128d_f64[0], v477);
        v477 = v437.m128d_f64[0];
      }
      ++v478;
    }
    while ( v474 > (int)v478 );
    if ( v460 <= 0 )
    {
      v479 = 1.0e30;
      goto LABEL_381;
    }
LABEL_376:
    if ( v1488 <= 0 )
    {
      v479 = 1.0e20;
    }
    else
    {
      v479 = 1.0e20;
      v480 = 0;
      do
      {
        v437.m128d_f64[0] = *(double *)(v1493 + v480);
        if ( v437.m128d_f64[0] < 0.0 )
        {
          v437.m128d_f64[0] = fmin(v1489[v480 / 8] / -v437.m128d_f64[0], v479);
          v479 = v437.m128d_f64[0];
        }
        v480 += 8LL;
      }
      while ( 8LL * (unsigned int)(v1488 - 1) + 8 != v480 );
    }
LABEL_381:
    if ( v475 <= v471 )
LABEL_382:
      v471 = v475;
    v481 = fmin(v477, v479);
LABEL_384:
    v482 = v481 * v1267;
    v1443 = v471 * v1267;
    if ( v471 * v1267 < 1.0 )
    {
      if ( v482 < 1.0 )
        v1443 = fmin(v471 * v1267, v482);
    }
    else if ( v482 < 1.0 )
    {
      v1443 = fmin(1.0, v482);
    }
    else
    {
      v1443 = 1.0;
    }
    v1291 = 0;
    while ( 1 )
    {
      v483 = v1494;
      ++v1291;
      CoinDenseVector<double>::CoinDenseVector(&v1545, v1494, 0.0);
      v484 = v1495;
      v485 = v1546;
      if ( v483 > 0 )
      {
        if ( (v1495 >= v1546 + 16 || v1546 >= v1495 + 16) && (unsigned int)v483 > 0xE )
        {
          v486 = 0;
          v487 = (v1495 >> 3) & 1;
          if ( ((v1495 >> 3) & 1) != 0 )
          {
            v486 = 1;
            *(double *)v1546 = v1443 * *(double *)v1495;
          }
          v488 = 0;
          v489 = v483 - v487;
          v490 = 0;
          v437 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1443, (__m128d)*(unsigned __int64 *)&v1443);
          v491 = 8LL * (unsigned int)v487;
          v492 = v484 + v491;
          v493 = v485 + v491;
          do
          {
            ++v490;
            *(__m128d *)(v493 + v488) = _mm_mul_pd(*(__m128d *)(v492 + v488), v437);
            v488 += 16;
          }
          while ( v490 < v489 >> 1 );
          v494 = (v489 & 0xFFFFFFFE) + v486;
          if ( v489 != (v489 & 0xFFFFFFFE) )
          {
            v495 = v494;
            v496 = *(double *)(v484 + 8LL * v494);
            v497 = v494 + 1;
            *(double *)(v485 + 8 * v495) = v496 * v1443;
            if ( v483 > v497 )
              *(double *)(v485 + 8LL * v497) = v1443 * *(double *)(v484 + 8LL * v497);
          }
        }
        else
        {
          v437.m128d_f64[0] = v1443;
          v1090 = 0;
          do
          {
            *(double *)(v485 + v1090) = *(double *)(v484 + v1090) * v1443;
            v1090 += 8;
          }
          while ( 8LL * (unsigned int)(v483 - 1) + 8 != v1090 );
        }
      }
      v498 = v1458;
      CoinDenseVector<double>::CoinDenseVector(&usage, (unsigned int)v1458, 0.0);
      v502 = v1459;
      v503 = v1546;
      v504 = usage.ru_utime.tv_usec;
      if ( v498 > 0 )
      {
        v500 = usage.ru_utime.tv_usec + 16;
        LOBYTE(v500) = v1546 >= usage.ru_utime.tv_usec + 16;
        if ( ((unsigned __int8)(v500 | (usage.ru_utime.tv_usec >= v1546 + 16))
            & (v1459 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1459 + 16)) != 0
          && (unsigned int)v498 > 0xE )
        {
          v505 = 0;
          v506 = (v1459 >> 3) & 1;
          if ( ((v1459 >> 3) & 1) != 0 )
          {
            v505 = 1;
            *(double *)usage.ru_utime.tv_usec = *(double *)v1459 + *(double *)v1546;
          }
          v507 = 0;
          LODWORD(v500) = 0;
          v508 = v498 - v506;
          v509 = 8LL * (unsigned int)v506;
          v510 = v502 + v509;
          v511 = v503 + v509;
          v499 = v504 + v509;
          do
          {
            v500 = (unsigned int)(v500 + 1);
            *(__m128d *)(v499 + v507) = _mm_add_pd(*(__m128d *)(v511 + v507), *(__m128d *)(v510 + v507));
            v507 += 16;
          }
          while ( (unsigned int)v500 < v508 >> 1 );
          v501 = (v508 & 0xFFFFFFFE) + v505;
          if ( v508 != (v508 & 0xFFFFFFFE) )
          {
            v512 = (int)v501;
            v501 = (unsigned int)(v501 + 1);
            *(double *)(v504 + 8 * v512) = *(double *)(v502 + 8 * v512) + *(double *)(v503 + 8 * v512);
            if ( (int)v501 < v498 )
              *(double *)(v504 + 8LL * (int)v501) = *(double *)(v502 + 8LL * (int)v501)
                                                  + *(double *)(v503 + 8LL * (int)v501);
          }
        }
        else
        {
          v499 = 8LL * (unsigned int)(v498 - 1) + 8;
          v1089 = 0;
          do
          {
            *(double *)(v504 + v1089) = *(double *)(v502 + v1089) + *(double *)(v503 + v1089);
            v1089 += 8;
          }
          while ( v499 != v1089 );
        }
      }
      CoinDenseVector<double>::operator=(&v1458, &usage, v499, v500, v501);
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      CoinDenseVector<double>::~CoinDenseVector(&v1545);
      v513 = v1496;
      CoinDenseVector<double>::CoinDenseVector(&v1545, v1496, 0.0);
      v514 = v1497;
      v515 = v1546;
      if ( v513 > 0 )
      {
        if ( (v1497 >= v1546 + 16 || v1546 >= v1497 + 16) && (unsigned int)v513 > 0xE )
        {
          v516 = 0;
          v517 = (v1497 >> 3) & 1;
          if ( ((v1497 >> 3) & 1) != 0 )
          {
            v516 = 1;
            *(double *)v1546 = v1443 * *(double *)v1497;
          }
          v518 = 0;
          v519 = v513 - v517;
          v520 = 0;
          v437 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1443, (__m128d)*(unsigned __int64 *)&v1443);
          v521 = 8LL * (unsigned int)v517;
          v522 = v514 + v521;
          v523 = v515 + v521;
          do
          {
            ++v520;
            *(__m128d *)(v523 + v518) = _mm_mul_pd(*(__m128d *)(v522 + v518), v437);
            v518 += 16;
          }
          while ( v520 < v519 >> 1 );
          v524 = (v519 & 0xFFFFFFFE) + v516;
          if ( v519 != (v519 & 0xFFFFFFFE) )
          {
            v525 = v524;
            v526 = *(double *)(v514 + 8LL * v524);
            v527 = v524 + 1;
            *(double *)(v515 + 8 * v525) = v526 * v1443;
            if ( v527 < v513 )
              *(double *)(v515 + 8LL * v527) = v1443 * *(double *)(v514 + 8LL * v527);
          }
        }
        else
        {
          v437.m128d_f64[0] = v1443;
          v1088 = 0;
          do
          {
            *(double *)(v515 + v1088) = *(double *)(v514 + v1088) * v1443;
            v1088 += 8;
          }
          while ( 8LL * (unsigned int)(v513 - 1) + 8 != v1088 );
        }
      }
      v528 = v1460;
      v529.m128d_f64[0] = 0.0;
      CoinDenseVector<double>::CoinDenseVector(&usage, (unsigned int)v1460, 0.0);
      v533 = v1461;
      v534 = v1546;
      v535 = usage.ru_utime.tv_usec;
      if ( v528 > 0 )
      {
        v531 = usage.ru_utime.tv_usec + 16;
        LOBYTE(v531) = v1546 >= usage.ru_utime.tv_usec + 16;
        if ( ((unsigned __int8)(v531 | (usage.ru_utime.tv_usec >= v1546 + 16))
            & (v1461 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1461 + 16)) != 0
          && (unsigned int)v528 > 0xE )
        {
          v536 = 0;
          v537 = (v1461 >> 3) & 1;
          if ( ((v1461 >> 3) & 1) != 0 )
          {
            v536 = 1;
            *(double *)usage.ru_utime.tv_usec = *(double *)v1461 + *(double *)v1546;
          }
          v538 = 0;
          LODWORD(v531) = 0;
          v539 = v528 - v537;
          v540 = 8LL * (unsigned int)v537;
          v541 = v533 + v540;
          v542 = v534 + v540;
          v530 = v535 + v540;
          do
          {
            v531 = (unsigned int)(v531 + 1);
            v529 = _mm_add_pd(*(__m128d *)(v542 + v538), *(__m128d *)(v541 + v538));
            *(__m128d *)(v530 + v538) = v529;
            v538 += 16;
          }
          while ( (unsigned int)v531 < v539 >> 1 );
          v532 = (v539 & 0xFFFFFFFE) + v536;
          if ( v539 != (v539 & 0xFFFFFFFE) )
          {
            v543 = (int)v532;
            v532 = (unsigned int)(v532 + 1);
            v529.m128d_f64[0] = *(double *)(v533 + 8 * v543) + *(double *)(v534 + 8 * v543);
            *(double *)(v535 + 8 * v543) = v529.m128d_f64[0];
            if ( (int)v532 < v528 )
            {
              v529.m128d_f64[0] = *(double *)(v533 + 8LL * (int)v532) + *(double *)(v534 + 8LL * (int)v532);
              *(double *)(v535 + 8LL * (int)v532) = v529.m128d_f64[0];
            }
          }
        }
        else
        {
          v530 = 8LL * (unsigned int)(v528 - 1) + 8;
          v1087 = 0;
          do
          {
            v529.m128d_f64[0] = *(double *)(v533 + v1087) + *(double *)(v534 + v1087);
            *(double *)(v535 + v1087) = v529.m128d_f64[0];
            v1087 += 8;
          }
          while ( v1087 != v530 );
        }
      }
      CoinDenseVector<double>::operator=(&v1460, &usage, v530, v531, v532);
      v544 = 0;
      v545 = v44;
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      CoinDenseVector<double>::~CoinDenseVector(&v1545);
      if ( v1452 > 0 )
      {
        do
        {
          st = *(double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)*v545);
          v1378 = v1443 * *(double *)CoinDenseVector<double>::operator[](v1477, (unsigned int)*v545);
          v546 = (double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)*v545);
          v547 = (unsigned int)*v545;
          *v546 = st + v1378;
          su = *(double *)CoinDenseVector<double>::operator[](&v1475, v547);
          v1379 = v1443 * *(double *)CoinDenseVector<double>::operator[](v1479, (unsigned int)*v545);
          v548 = (double *)CoinDenseVector<double>::operator[](&v1475, (unsigned int)*v545++);
          v529.m128d_f64[0] = su + v1379;
          *v548 = su + v1379;
          ++v544;
        }
        while ( v1452 > v544 );
      }
      if ( v1453 > 0 )
      {
        v549 = v1316;
        for ( mm = 0; mm < v1453; ++mm )
        {
          sv = *(double *)CoinDenseVector<double>::operator[](&v1486, (unsigned int)*v549);
          v1380 = v1443 * *(double *)CoinDenseVector<double>::operator[](v1490, (unsigned int)*v549);
          v551 = (double *)CoinDenseVector<double>::operator[](&v1486, (unsigned int)*v549);
          v552 = (unsigned int)*v549;
          *v551 = sv + v1380;
          sw = *(double *)CoinDenseVector<double>::operator[](&v1488, v552);
          v1381 = v1443 * *(double *)CoinDenseVector<double>::operator[](v1492, (unsigned int)*v549);
          v553 = (double *)CoinDenseVector<double>::operator[](&v1488, (unsigned int)*v549++);
          v529.m128d_f64[0] = sw + v1381;
          *v553 = sw + v1381;
        }
      }
      v554 = v1458;
      if ( v1458 > 0 )
      {
        v555 = v1459;
        v556 = (v1459 >> 3) & 1;
        if ( (unsigned int)(v1458 - 1) <= 1 )
        {
          v564 = 0;
LABEL_440:
          v565 = (double *)(v555 + 8LL * v564);
          v566 = v564 + 1;
          v529.m128d_f64[0] = *v565 * v1284;
          *v565 = v529.m128d_f64[0];
          if ( v554 > v566 )
            *(double *)(v555 + 8LL * v566) = v1284 * *(double *)(v555 + 8LL * v566);
          goto LABEL_442;
        }
        v557 = 0;
        if ( (_DWORD)v556 )
        {
          v557 = 1;
          *(double *)v1459 = v1284 * *(double *)v1459;
        }
        v437.m128d_f64[0] = v1273.m128d_f64[0];
        v558 = v554 - v556;
        v559 = v555 + 8 * v556;
        v560 = 0;
        v561 = v554 - v556;
        v562 = 0;
        v563 = v561 >> 1;
        do
        {
          ++v560;
          v529 = _mm_mul_pd(*(__m128d *)(v559 + v562), v1273);
          *(__m128d *)(v559 + v562) = v529;
          v562 += 16;
        }
        while ( v560 < v563 );
        v564 = (v558 & 0xFFFFFFFE) + v557;
        if ( (v558 & 0xFFFFFFFE) != v558 )
          goto LABEL_440;
      }
LABEL_442:
      v1279 = ClpPdco::getObj(a1, &v1458, v529.m128d_f64[0], v437.m128d_f64[0]);
      ClpPdco::getGrad(a1, &v1458, &v1505);
      ClpPdco::getHessian(a1, &v1458, &v1507);
      v567 = v1458;
      if ( v1458 <= 0 )
        goto LABEL_451;
      v568 = v1459;
      v569 = (v1459 >> 3) & 1;
      if ( (unsigned int)(v1458 - 1) <= 1 )
      {
        v577 = 0;
LABEL_449:
        v578 = (double *)(v568 + 8LL * v577);
        v579 = v577 + 1;
        *v578 = *v578 * v1283;
        if ( v567 > v579 )
          *(double *)(v568 + 8LL * v579) = v1283 * *(double *)(v568 + 8LL * v579);
        goto LABEL_451;
      }
      v570 = 0;
      if ( (_DWORD)v569 )
      {
        v570 = 1;
        *(double *)v1459 = v1283 * *(double *)v1459;
      }
      v571 = v567 - v569;
      v572 = v568 + 8 * v569;
      v573 = 0;
      v574 = v567 - v569;
      v575 = 0;
      v576 = v574 >> 1;
      do
      {
        ++v573;
        *(__m128d *)(v572 + v575) = _mm_mul_pd(*(__m128d *)(v572 + v575), v1272);
        v575 += 16;
      }
      while ( v573 < v576 );
      v577 = (v571 & 0xFFFFFFFE) + v570;
      if ( (v571 & 0xFFFFFFFE) != v571 )
        goto LABEL_449;
LABEL_451:
      CoinDenseVector<double>::CoinDenseVector(&v1545, (unsigned int)v567, 0.0);
      v580 = v1459;
      v581 = v1546;
      if ( v567 > 0 )
      {
        if ( (v1546 >= v1459 + 16 || v1459 >= v1546 + 16) && (unsigned int)v567 > 0xE )
        {
          v582 = 0;
          v583 = (v1459 >> 3) & 1;
          if ( ((v1459 >> 3) & 1) != 0 )
          {
            v582 = 1;
            *(double *)v1546 = v1287 * *(double *)v1459;
          }
          v584 = v567 - v583;
          v585 = 0;
          v586 = 8LL * (unsigned int)v583;
          v587 = 0;
          v588 = v580 + v586;
          v589 = v581 + v586;
          do
          {
            ++v587;
            *(__m128d *)(v589 + v585) = _mm_mul_pd(*(__m128d *)(v588 + v585), v1281);
            v585 += 16;
          }
          while ( v587 < v584 >> 1 );
          v590 = (v584 & 0xFFFFFFFE) + v582;
          if ( (v584 & 0xFFFFFFFE) != v584 )
          {
            v591 = v590;
            v592 = *(double *)(v580 + 8LL * v590);
            v593 = v590 + 1;
            *(double *)(v581 + 8 * v591) = v592 * v1287;
            if ( v567 > v593 )
              *(double *)(v581 + 8LL * v593) = v1287 * *(double *)(v580 + 8LL * v593);
          }
        }
        else
        {
          v1086 = 0;
          do
          {
            *(double *)(v581 + v1086) = *(double *)(v580 + v1086) * v1287;
            v1086 += 8;
          }
          while ( v1086 != 8LL * (unsigned int)(v567 - 1) + 8 );
        }
      }
      v594 = v1505;
      CoinDenseVector<double>::CoinDenseVector(v1543, v1505, 0.0);
      v595 = v1506;
      v596 = *((_QWORD *)&v1543[0] + 1);
      if ( v594 > 0 )
      {
        if ( (*((_QWORD *)&v1543[0] + 1) >= v1506 + 16 || v1506 >= *((_QWORD *)&v1543[0] + 1) + 16LL)
          && (unsigned int)v594 > 0xE )
        {
          v597 = 0;
          v598 = (v1506 >> 3) & 1;
          if ( ((v1506 >> 3) & 1) != 0 )
          {
            v597 = 1;
            **((double **)&v1543[0] + 1) = v1278 * *(double *)v1506;
          }
          v599 = v594 - v598;
          v600 = 0;
          v601 = 8LL * (unsigned int)v598;
          v602 = 0;
          v603 = v595 + v601;
          v604 = v596 + v601;
          do
          {
            ++v602;
            *(__m128d *)(v604 + v600) = _mm_mul_pd(*(__m128d *)(v603 + v600), v1271);
            v600 += 16;
          }
          while ( v602 < v599 >> 1 );
          v605 = (v599 & 0xFFFFFFFE) + v597;
          if ( (v599 & 0xFFFFFFFE) != v599 )
          {
            v606 = v605;
            v607 = *(double *)(v595 + 8LL * v605);
            v608 = v605 + 1;
            *(double *)(v596 + 8 * v606) = v607 * v1278;
            if ( v608 < v594 )
              *(double *)(v596 + 8LL * v608) = v1278 * *(double *)(v595 + 8LL * v608);
          }
        }
        else
        {
          v1085 = 0;
          do
          {
            *(double *)(v596 + v1085) = *(double *)(v595 + v1085) * v1278;
            v1085 += 8;
          }
          while ( v1085 != 8LL * (unsigned int)(v594 - 1) + 8 );
        }
      }
      v609 = v1543[0];
      CoinDenseVector<double>::CoinDenseVector(&usage, LODWORD(v1543[0]), 0.0);
      v613 = *((_QWORD *)&v1543[0] + 1);
      v614 = v1546;
      v615 = usage.ru_utime.tv_usec;
      if ( v609 > 0 )
      {
        v611 = usage.ru_utime.tv_usec + 16;
        LOBYTE(v611) = *((_QWORD *)&v1543[0] + 1) >= (unsigned __int64)(usage.ru_utime.tv_usec + 16);
        if ( ((unsigned __int8)(v611 | (usage.ru_utime.tv_usec >= (unsigned __int64)(*((_QWORD *)&v1543[0] + 1) + 16LL)))
            & (v1546 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1546 + 16)) != 0
          && (unsigned int)v609 > 0xE )
        {
          v616 = 0;
          v617 = (*((_QWORD *)&v1543[0] + 1) >> 3) & 1LL;
          if ( ((*((_QWORD *)&v1543[0] + 1) >> 3) & 1) != 0 )
          {
            v616 = 1;
            *(double *)usage.ru_utime.tv_usec = *(double *)v1546 + **((double **)&v1543[0] + 1);
          }
          v618 = 0;
          LODWORD(v611) = 0;
          v619 = v609 - v617;
          v620 = 8LL * (unsigned int)v617;
          v621 = v613 + v620;
          v622 = v614 + v620;
          v610 = v615 + v620;
          do
          {
            v611 = (unsigned int)(v611 + 1);
            *(__m128d *)(v610 + v618) = _mm_add_pd(*(__m128d *)(v622 + v618), *(__m128d *)(v621 + v618));
            v618 += 16;
          }
          while ( (unsigned int)v611 < v619 >> 1 );
          v612 = (v619 & 0xFFFFFFFE) + v616;
          if ( (v619 & 0xFFFFFFFE) != v619 )
          {
            v623 = (int)v612;
            v612 = (unsigned int)(v612 + 1);
            *(double *)(v615 + 8 * v623) = *(double *)(v613 + 8 * v623) + *(double *)(v614 + 8 * v623);
            if ( (int)v612 < v609 )
              *(double *)(v615 + 8LL * (int)v612) = *(double *)(v614 + 8LL * (int)v612)
                                                  + *(double *)(v613 + 8LL * (int)v612);
          }
        }
        else
        {
          v610 = 8LL * (unsigned int)(v609 - 1) + 8;
          v1084 = 0;
          do
          {
            *(double *)(v615 + v1084) = *(double *)(v614 + v1084) + *(double *)(v613 + v1084);
            v1084 += 8;
          }
          while ( v1084 != v610 );
        }
      }
      CoinDenseVector<double>::operator=(&v1505, &usage, v610, v611, v612);
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      CoinDenseVector<double>::~CoinDenseVector(v1543);
      CoinDenseVector<double>::~CoinDenseVector(&v1545);
      v624 = v1507;
      CoinDenseVector<double>::CoinDenseVector(&v1545, v1507, 0.0);
      v625 = v1508;
      v626 = v1546;
      if ( v624 > 0 )
      {
        if ( (v1546 >= v1508 + 16 || v1508 >= v1546 + 16) && (unsigned int)v624 > 0xE )
        {
          v627 = 0;
          v628 = (v1508 >> 3) & 1;
          if ( ((v1508 >> 3) & 1) != 0 )
          {
            v627 = 1;
            *(double *)v1546 = v1277 * *(double *)v1508;
          }
          v629 = v624 - v628;
          v630 = 0;
          v631 = 8LL * (unsigned int)v628;
          v632 = 0;
          v633 = v625 + v631;
          v634 = v626 + v631;
          do
          {
            ++v632;
            *(__m128d *)(v634 + v630) = _mm_mul_pd(*(__m128d *)(v633 + v630), v1270);
            v630 += 16;
          }
          while ( v632 < v629 >> 1 );
          v635 = (v629 & 0xFFFFFFFE) + v627;
          if ( (v629 & 0xFFFFFFFE) != v629 )
          {
            v636 = v635;
            v637 = *(double *)(v625 + 8LL * v635);
            v638 = v635 + 1;
            *(double *)(v626 + 8 * v636) = v637 * v1277;
            if ( v638 < v624 )
              *(double *)(v626 + 8LL * v638) = v1277 * *(double *)(v625 + 8LL * v638);
          }
        }
        else
        {
          v1083 = 0;
          do
          {
            *(double *)(v626 + v1083) = *(double *)(v625 + v1083) * v1277;
            v1083 += 8;
          }
          while ( v1083 != 8LL * (unsigned int)(v624 - 1) + 8 );
        }
      }
      v639 = v1545;
      CoinDenseVector<double>::CoinDenseVector(&usage, v1545, 0.0);
      v643 = v1546;
      v644 = usage.ru_utime.tv_usec;
      if ( v639 > 0 )
      {
        if ( (usage.ru_utime.tv_usec >= v1546 + 16 || v1546 >= usage.ru_utime.tv_usec + 16) && (unsigned int)v639 > 0xE )
        {
          v645 = 0;
          v646 = (v1546 >> 3) & 1;
          if ( ((v1546 >> 3) & 1) != 0 )
          {
            v645 = 1;
            *(double *)usage.ru_utime.tv_usec = v1287 + *(double *)v1546;
          }
          v647 = v639 - v646;
          v648 = 0;
          v649 = 8LL * (unsigned int)v646;
          LODWORD(v640) = 0;
          v650 = v643 + v649;
          v641 = v644 + v649;
          do
          {
            v640 = (unsigned int)(v640 + 1);
            *(__m128d *)(v641 + v648) = _mm_add_pd(*(__m128d *)(v650 + v648), v1281);
            v648 += 16;
          }
          while ( (unsigned int)v640 < v647 >> 1 );
          v642 = (v647 & 0xFFFFFFFE) + v645;
          if ( (v647 & 0xFFFFFFFE) != v647 )
          {
            v651 = (int)v642;
            v652 = *(double *)(v643 + 8LL * (int)v642);
            v642 = (unsigned int)(v642 + 1);
            *(double *)(v644 + 8 * v651) = v652 + v1287;
            if ( (int)v642 < v639 )
            {
              v642 = (int)v642;
              *(double *)(v644 + 8LL * (int)v642) = v1287 + *(double *)(v643 + 8LL * (int)v642);
            }
          }
        }
        else
        {
          v640 = 8LL * (unsigned int)(v639 - 1) + 8;
          v1082 = 0;
          do
          {
            *(double *)(v644 + v1082) = *(double *)(v643 + v1082) + v1287;
            v1082 += 8;
          }
          while ( v1082 != v640 );
        }
      }
      CoinDenseVector<double>::operator=(&v1507, &usage, v640, v641, v642);
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      CoinDenseVector<double>::~CoinDenseVector(&v1545);
      v653 = v1454;
      v654 = v1452;
      v655 = v1453;
      v656 = v1459;
      v657 = v1482;
      sa = v1452;
      if ( v1454 > 0 )
      {
        v658 = v1288;
        do
        {
          v659 = *v658++;
          *(_QWORD *)(v656 + 8 * v659) = 0;
        }
        while ( &v1288[v653 - 1 + 1] != v658 );
        sa = v654;
      }
      CoinDenseVector<double>::clear(&v1468);
      CoinDenseVector<double>::clear(&v1481);
      ClpPdco::matVecMult(a1, 1, &v1468, &v1458);
      ClpPdco::matVecMult(a1, 2, &v1481, &v1460);
      if ( v653 > 0 )
      {
        v660 = v1288;
        do
        {
          v661 = *v660++;
          *(_QWORD *)(v657 + 8 * v661) = 0;
        }
        while ( v660 != &v1288[v653 - 1 + 1] );
      }
      v662 = v1460;
      CoinDenseVector<double>::CoinDenseVector(v1529, (unsigned int)v1460, 0.0);
      v663 = v1461;
      v664 = v1530;
      if ( v662 > 0 )
      {
        if ( ((unsigned __int64)v1530 >= v1461 + 16 || v1461 >= (unsigned __int64)(v1530 + 2))
          && (unsigned int)v662 > 0xE )
        {
          v665 = 0;
          v666 = (v1461 >> 3) & 1;
          if ( ((v1461 >> 3) & 1) != 0 )
          {
            v665 = 1;
            *v1530 = v1276 * *(double *)v1461;
          }
          v667 = 0;
          v668 = v662 - v666;
          v669 = 0;
          v670 = (unsigned int)v666;
          v671 = v663 + v670 * 8;
          v672 = &v664[v670];
          do
          {
            ++v669;
            *(__m128d *)&v672[v667] = _mm_mul_pd(*(__m128d *)(v671 + v667 * 8), v1269);
            v667 += 2;
          }
          while ( v669 < v668 >> 1 );
          v673 = (v668 & 0xFFFFFFFE) + v665;
          if ( (v668 & 0xFFFFFFFE) != v668 )
          {
            v674 = v673;
            v675 = *(double *)(v663 + 8LL * v673);
            v676 = v673 + 1;
            v664[v674] = v675 * v1276;
            if ( v676 < v662 )
              v664[v676] = v1276 * *(double *)(v663 + 8LL * v676);
          }
        }
        else
        {
          v1081 = 0;
          do
          {
            v664[v1081 / 8] = *(double *)(v663 + v1081) * v1276;
            v1081 += 8LL;
          }
          while ( 8LL * (unsigned int)(v662 - 1) + 8 != v1081 );
        }
      }
      v677 = v1456;
      CoinDenseVector<double>::CoinDenseVector(&v1545, (unsigned int)v1456, 0.0);
      v678 = v1457;
      v679 = v1469;
      v680 = v1546;
      if ( v677 > 0 )
      {
        if ( (v1546 + 16 <= v1457 || v1546 >= v1457 + 16)
          && (v1546 + 16 <= (unsigned __int64)v1469 || v1546 >= (unsigned __int64)(v1469 + 2))
          && (unsigned int)v677 > 0xE )
        {
          v681 = 0;
          v682 = (v1457 >> 3) & 1;
          if ( ((v1457 >> 3) & 1) != 0 )
          {
            v681 = 1;
            *(double *)v1546 = *(double *)v1457 - *v1469;
          }
          v683 = 0;
          v684 = v677 - v682;
          v685 = 8LL * (unsigned int)v682;
          v1343 = v684;
          v686 = v678 + v685;
          v687 = &v679[(unsigned __int64)v685 / 8];
          v688 = v684 >> 1;
          v689 = v680 + v685;
          v690 = 0;
          do
          {
            ++v683;
            *(__m128d *)(v689 + v690 * 8) = _mm_sub_pd(*(__m128d *)(v686 + v690 * 8), *(__m128d *)&v687[v690]);
            v690 += 2;
          }
          while ( v688 > v683 );
          v691 = (v1343 & 0xFFFFFFFE) + v681;
          if ( (v1343 & 0xFFFFFFFE) != v1343 )
          {
            v692 = v691;
            v693 = v691 + 1;
            *(double *)(v680 + 8 * v692) = *(double *)(v678 + 8 * v692) - v679[v692];
            if ( v693 < v677 )
              *(double *)(v680 + 8LL * v693) = *(double *)(v678 + 8LL * v693) - v679[v693];
          }
        }
        else
        {
          v1080 = 0;
          do
          {
            *(double *)(v680 + v1080) = *(double *)(v678 + v1080) - v679[v1080 / 8];
            v1080 += 8LL;
          }
          while ( v1080 != 8LL * (unsigned int)(v677 - 1) + 8 );
        }
      }
      v694 = v1545;
      CoinDenseVector<double>::CoinDenseVector(&usage, v1545, 0.0);
      v698 = v1546;
      v699 = v1530;
      v700 = usage.ru_utime.tv_usec;
      if ( v694 > 0 )
      {
        if ( (usage.ru_utime.tv_usec + 16 <= v1546 || usage.ru_utime.tv_usec >= v1546 + 16)
          && (usage.ru_utime.tv_usec + 16 <= (unsigned __int64)v1530
           || usage.ru_utime.tv_usec >= (unsigned __int64)(v1530 + 2))
          && (unsigned int)v694 > 0xE )
        {
          v701 = 0;
          v702 = (v1546 >> 3) & 1;
          if ( ((v1546 >> 3) & 1) != 0 )
          {
            v701 = 1;
            *(double *)usage.ru_utime.tv_usec = *(double *)v1546 - *v1530;
          }
          v703 = 0;
          v704 = v694 - v702;
          v705 = 8LL * (unsigned int)v702;
          v1344 = v704;
          v706 = v698 + v705;
          v707 = &v699[(unsigned __int64)v705 / 8];
          v708 = v704 >> 1;
          v695 = v700 + v705;
          v709 = 0;
          do
          {
            ++v703;
            *(__m128d *)(v695 + v709 * 8) = _mm_sub_pd(*(__m128d *)(v706 + v709 * 8), *(__m128d *)&v707[v709]);
            v709 += 2;
          }
          while ( v708 > v703 );
          v696 = v1344;
          v697 = (v1344 & 0xFFFFFFFE) + v701;
          if ( (v1344 & 0xFFFFFFFE) != v1344 )
          {
            v710 = (int)v697;
            v697 = (unsigned int)(v697 + 1);
            *(double *)(v700 + 8 * v710) = *(double *)(v698 + 8 * v710) - v699[v710];
            if ( v694 > (int)v697 )
              *(double *)(v700 + 8LL * (int)v697) = *(double *)(v698 + 8LL * (int)v697) - v699[(int)v697];
          }
        }
        else
        {
          v696 = (unsigned int)sa;
          v695 = 8LL * (unsigned int)(v694 - 1) + 8;
          v1079 = 0;
          do
          {
            *(double *)(v700 + v1079) = *(double *)(v698 + v1079) - v699[v1079 / 8];
            v1079 += 8LL;
          }
          while ( v1079 != v695 );
        }
      }
      CoinDenseVector<double>::operator=(&v1468, &usage, v695, v696, v697);
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      CoinDenseVector<double>::~CoinDenseVector(&v1545);
      CoinDenseVector<double>::~CoinDenseVector(v1529);
      v711 = v1505;
      CoinDenseVector<double>::CoinDenseVector(&v1527, v1505, 0.0);
      v712 = v1506;
      v713 = v1482;
      v714 = v1528;
      if ( v711 > 0 )
      {
        if ( (v1528 + 16 <= v1506 || v1528 >= v1506 + 16)
          && (v1528 + 16 <= v1482 || v1528 >= v1482 + 16)
          && (unsigned int)v711 > 0xE )
        {
          v1382 = 0;
          v715 = (v1506 >> 3) & 1;
          if ( ((v1506 >> 3) & 1) != 0 )
          {
            v1382 = 1;
            *(double *)v1528 = *(double *)v1506 - *(double *)v1482;
          }
          v716 = 0;
          v717 = v711 - v715;
          v718 = 8LL * (unsigned int)v715;
          v1345 = v717;
          v719 = v712 + v718;
          v720 = v713 + v718;
          v721 = v717 >> 1;
          v722 = v714 + v718;
          v723 = 0;
          do
          {
            ++v716;
            *(__m128d *)(v722 + v723) = _mm_sub_pd(*(__m128d *)(v719 + v723), *(__m128d *)(v720 + v723));
            v723 += 16;
          }
          while ( v716 < v721 );
          v724 = (v1345 & 0xFFFFFFFE) + v1382;
          if ( (v1345 & 0xFFFFFFFE) != v1345 )
          {
            v725 = v724;
            v726 = v724 + 1;
            *(double *)(v714 + 8 * v725) = *(double *)(v712 + 8 * v725) - *(double *)(v713 + 8 * v725);
            if ( v711 > v726 )
              *(double *)(v714 + 8LL * v726) = *(double *)(v712 + 8LL * v726) - *(double *)(v713 + 8LL * v726);
          }
        }
        else
        {
          v1078 = 0;
          do
          {
            *(double *)(v714 + v1078) = *(double *)(v712 + v1078) - *(double *)(v713 + v1078);
            v1078 += 8;
          }
          while ( v1078 != 8LL * (unsigned int)(v711 - 1) + 8 );
        }
      }
      v727 = v1527;
      CoinDenseVector<double>::CoinDenseVector(&usage, v1527, 0.0);
      v731 = v1528;
      v732 = v1476;
      v733 = usage.ru_utime.tv_usec;
      if ( v727 > 0 )
      {
        if ( (v1528 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1528 + 16)
          && ((unsigned __int64)v1476 >= usage.ru_utime.tv_usec + 16
           || usage.ru_utime.tv_usec >= (unsigned __int64)(v1476 + 2))
          && (unsigned int)v727 > 0xE )
        {
          v1383 = 0;
          v734 = (v1528 >> 3) & 1;
          if ( ((v1528 >> 3) & 1) != 0 )
          {
            v1383 = 1;
            *(double *)usage.ru_utime.tv_usec = *(double *)v1528 - *v1476;
          }
          v735 = 0;
          v736 = v727 - v734;
          v737 = 8LL * (unsigned int)v734;
          v1346 = v736;
          v738 = v731 + v737;
          v739 = &v732[(unsigned __int64)v737 / 8];
          v740 = v736 >> 1;
          v728 = v733 + v737;
          v741 = 0;
          do
          {
            ++v735;
            *(__m128d *)(v728 + v741 * 8) = _mm_sub_pd(*(__m128d *)(v738 + v741 * 8), *(__m128d *)&v739[v741]);
            v741 += 2;
          }
          while ( v735 < v740 );
          v729 = v1346;
          v730 = (v1346 & 0xFFFFFFFE) + v1383;
          if ( (v1346 & 0xFFFFFFFE) != v1346 )
          {
            v742 = (int)v730;
            v730 = (unsigned int)(v730 + 1);
            *(double *)(v733 + 8 * v742) = *(double *)(v731 + 8 * v742) - v732[v742];
            if ( v727 > (int)v730 )
              *(double *)(v733 + 8LL * (int)v730) = *(double *)(v731 + 8LL * (int)v730) - v732[(int)v730];
          }
        }
        else
        {
          v729 = (unsigned int)sa;
          v728 = 8LL * (unsigned int)(v727 - 1) + 8;
          v1077 = 0;
          do
          {
            *(double *)(v733 + v1077) = *(double *)(v731 + v1077) - v732[v1077 / 8];
            v1077 += 8LL;
          }
          while ( v728 != v1077 );
        }
      }
      CoinDenseVector<double>::operator=(&v1481, &usage, v728, v729, v730);
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      CoinDenseVector<double>::~CoinDenseVector(&v1527);
      if ( v655 > 0 )
      {
        v890 = v1481;
        CoinDenseVector<double>::CoinDenseVector(v1525, (unsigned int)v1481, 0.0);
        v894 = v1482;
        v895 = v1489;
        v896 = v1526;
        if ( v890 > 0 )
        {
          if ( (v1482 >= (unsigned __int64)(v1526 + 2) || (unsigned __int64)v1526 >= v1482 + 16)
            && (v1489 >= v1526 + 2 || v1526 >= v1489 + 2)
            && (unsigned int)v890 > 0xE )
          {
            v1389 = 0;
            v897 = (v1482 >> 3) & 1;
            if ( ((v1482 >> 3) & 1) != 0 )
            {
              v1389 = 1;
              *v1526 = *v1489 + *(double *)v1482;
            }
            v898 = 0;
            v899 = v890 - v897;
            v900 = (unsigned int)v897;
            v1356 = v899;
            v901 = v894 + v900 * 8;
            v902 = &v895[v900];
            v903 = v899 >> 1;
            v891 = (__int64)&v896[v900];
            v904 = 0;
            do
            {
              ++v898;
              *(__m128d *)(v891 + v904 * 8) = _mm_add_pd(*(__m128d *)&v902[v904], *(__m128d *)(v901 + v904 * 8));
              v904 += 2;
            }
            while ( v898 < v903 );
            v892 = v1356;
            v893 = (v1356 & 0xFFFFFFFE) + v1389;
            if ( (v1356 & 0xFFFFFFFE) != v1356 )
            {
              v905 = (int)v893;
              v893 = (unsigned int)(v893 + 1);
              v896[v905] = v895[v905] + *(double *)(v894 + 8 * v905);
              if ( v890 > (int)v893 )
                v896[(int)v893] = v895[(int)v893] + *(double *)(v894 + 8LL * (int)v893);
            }
          }
          else
          {
            v892 = (unsigned int)sa;
            v891 = 8LL * (unsigned int)(v890 - 1) + 8;
            v1095 = 0;
            do
            {
              v896[v1095 / 8] = v895[v1095 / 8] + *(double *)(v894 + v1095);
              v1095 += 8LL;
            }
            while ( v891 != v1095 );
          }
        }
        CoinDenseVector<double>::operator=(&v1481, v1525, v891, v892, v893);
        CoinDenseVector<double>::~CoinDenseVector(v1525);
        if ( sa > 0 )
        {
LABEL_560:
          v743 = 0;
          do
          {
            v1384 = *(double *)(v1300 + 8LL * v44[v743]);
            v1385 = v1384 - *(double *)CoinDenseVector<double>::operator[](&v1458, v44[v743]);
            v1347 = *(double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)v44[v743]);
            v744 = (double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)v44[v743++]);
            *v744 = v1385 + v1347;
          }
          while ( sa > (int)v743 );
          if ( v655 <= 0 )
            goto LABEL_566;
        }
        v745 = v1316;
        do
        {
          v1386 = *(double *)CoinDenseVector<double>::operator[](&v1458, (unsigned int)*v745)
                - *(double *)(v1301 + 8LL * *v745);
          v1348 = *(double *)CoinDenseVector<double>::operator[](&v1486, *v745);
          v746 = (double *)CoinDenseVector<double>::operator[](v1483, (unsigned int)*v745++);
          *v746 = v1386 + v1348;
        }
        while ( &v1316[v655 - 1 + 1] != v745 );
        if ( sa <= 0 )
        {
          sb = 0.0;
          goto LABEL_571;
        }
LABEL_566:
        v747 = sa;
        v748 = v44;
        sb = 0.0;
        v749 = (__int64)&v44[v747 - 1 + 1];
        do
        {
          while ( *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v748) <= sb )
          {
            if ( (int *)v749 == ++v748 )
              goto LABEL_570;
          }
          v750 = (double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v748++);
          sb = *v750;
        }
        while ( (int *)v749 != v748 );
LABEL_570:
        if ( v655 <= 0 )
        {
          v1387 = 0.0;
          goto LABEL_575;
        }
LABEL_571:
        v751 = 0;
        v1387 = 0.0;
        do
        {
          while ( *(double *)CoinDenseVector<double>::operator[](v1483, (unsigned int)v1316[v751]) <= v1387 )
          {
            v139 = v655 <= (int)v751++ + 1;
            if ( v139 )
              goto LABEL_575;
          }
          v139 = v655 <= (int)v751 + 1;
          v1387 = *(double *)CoinDenseVector<double>::operator[](v1483, (unsigned int)v1316[v751++]);
        }
        while ( !v139 );
LABEL_575:
        v752 = v1468;
        v1388 = fmax(sb, v1387);
        if ( v1468 <= 0 )
        {
          v759 = 0.0;
        }
        else
        {
LABEL_576:
          v753 = v1469;
          v754 = (unsigned int)(v752 - 1);
          v755 = 0.0;
          v756 = v1469 + 1;
          v757 = (__int64)&v1469[v754 + 1];
          while ( 1 )
          {
            v758 = *v753;
            if ( *v753 < 0.0 )
              v758 = -v758;
            v755 = fmax(v755, v758);
            v753 = v756;
            v759 = v755;
            if ( v756 == (double *)v757 )
              break;
            ++v756;
          }
        }
        v1375 = fmax(v759, v1388);
        goto LABEL_582;
      }
      if ( sa > 0 )
        goto LABEL_560;
      v752 = v1468;
      if ( v1468 > 0 )
      {
        v1388 = 0.0;
        goto LABEL_576;
      }
      v1375 = 0.0;
LABEL_582:
      if ( v1481 <= 0 )
      {
        x = 1.0e-99;
        if ( v1375 <= 1.0e-99 )
        {
          v1375 = 1.0e-99;
          x = 1.0e-99;
        }
      }
      else
      {
        v760 = (double *)v1482;
        v761 = 0.0;
        for ( nn = (double *)(v1482 + 8); ; ++nn )
        {
          v763 = *v760;
          if ( *v760 < 0.0 )
            v763 = -v763;
          v761 = fmax(v761, v763);
          v760 = nn;
          if ( (double *)(v1482 + 8 + 8LL * (unsigned int)(v1481 - 1)) == nn )
            break;
        }
        v1375 = fmax(v1375, 1.0e-99);
        x = fmax(v761, 1.0e-99);
      }
      v764 = v1452;
      v765 = v1453;
      v766 = v1471;
      v767 = v1476;
      v768 = v1474;
      v769 = v1487;
      v770 = v1489;
      v771 = v1485;
      if ( v1452 > 0 )
      {
        v772 = 1.0e20;
        v773 = -1.0e20;
        v774 = v44;
        do
        {
          v775 = *v774++;
          v776 = v767[v775] * *(double *)(v766 + 8 * v775);
          v777 = v1289 - v776;
          v778 = fmax(v776, v773);
          v779 = fmin(v776, v772);
          *(double *)(v768 + 8 * v775) = v777;
          v773 = v778;
          v772 = v779;
        }
        while ( &v44[v764 - 1 + 1] != v774 );
        v1294 = v779;
        v1298 = v778;
        if ( v765 <= 0 )
          goto LABEL_596;
        goto LABEL_593;
      }
      if ( v1453 > 0 )
      {
        v772 = 1.0e20;
        v773 = -1.0e20;
LABEL_593:
        v780 = 0;
        do
        {
          v781 = v1316[v780++];
          v782 = v770[v781] * *(double *)(v769 + 8 * v781);
          v783 = v1289 - v782;
          v784 = fmax(v782, v773);
          v785 = fmin(v782, v772);
          *(double *)(v771 + 8 * v781) = v783;
          v773 = v784;
          v772 = v785;
        }
        while ( v765 > (int)v780 );
        v1294 = v785;
        v1298 = v784;
LABEL_596:
        v1299 = fmax(v1298, 1.0e-99);
        v1295 = fmax(v1294, 1.0e-99);
        goto LABEL_597;
      }
      v1299 = 1.0e-99;
      v1295 = 1.0e20;
LABEL_597:
      CoinDenseVector<double>::CoinDenseVector(&v1538, 6, 0.0);
      v786 = (double *)CoinDenseVector<double>::operator[](&v1538, 0);
      if ( v1468 <= 0 )
      {
        v791 = 0.0;
      }
      else
      {
        v787 = v1469;
        v788 = 0.0;
        for ( i1 = v1469 + 1; ; ++i1 )
        {
          v790 = *v787;
          v787 = i1;
          v788 = v788 + v790 * v790;
          if ( &v1469[(unsigned int)(v1468 - 1) + 1] == i1 )
            break;
        }
        v791 = sqrt(v788);
        if ( v788 < 0.0 )
        {
          v1364 = v786;
          sqrt(v788);
          v786 = v1364;
        }
      }
      *v786 = v791;
      v792 = (double *)CoinDenseVector<double>::operator[](&v1538, 1);
      if ( v1481 <= 0 )
      {
        v797 = 0.0;
      }
      else
      {
        v793 = (double *)v1482;
        v794 = 0.0;
        for ( i2 = (double *)(v1482 + 8); ; ++i2 )
        {
          v796 = *v793;
          v793 = i2;
          v794 = v794 + v796 * v796;
          if ( i2 == (double *)(v1482 + 8 + 8LL * (unsigned int)(v1481 - 1)) )
            break;
        }
        v797 = sqrt(v794);
        if ( v794 < 0.0 )
        {
          v1363 = v792;
          sqrt(v794);
          v792 = v1363;
        }
      }
      *v792 = v797;
      if ( v764 <= 0 )
      {
        v1321 = 0.0;
        v1349 = 0.0;
      }
      else
      {
        v798 = v44;
        v799 = (__int64)&v44[v764 - 1 + 1];
        v1321 = 0.0;
        v1349 = 0.0;
        do
        {
          v1305 = *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v798);
          v1349 = v1305 * *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v798) + v1349;
          v1306 = *(double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v798);
          v800 = (double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v798++);
          v1321 = v1306 * *v800 + v1321;
        }
        while ( (int *)v799 != v798 );
      }
      v801 = (double *)CoinDenseVector<double>::operator[](&v1538, 2);
      v802 = sqrt(v1349);
      if ( v1349 < 0.0 )
      {
        v1229 = LODWORD(v802);
        v1314 = v801;
        sqrt(v1349);
        v801 = v1314;
      }
      *v801 = v802;
      v803 = (double *)CoinDenseVector<double>::operator[](&v1538, 4);
      v804 = sqrt(v1321);
      if ( v1321 < 0.0 )
      {
        v1362 = v803;
        sqrt(v1321);
        v803 = v1362;
      }
      *v803 = v804;
      if ( v765 <= 0 )
      {
        v1322 = 0.0;
        v1350 = 0.0;
      }
      else
      {
        v805 = (__int64)&v1316[v765 - 1 + 1];
        v1322 = 0.0;
        v806 = v1316;
        v1350 = 0.0;
        do
        {
          v1307 = *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v806);
          v1350 = v1307 * *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v806) + v1350;
          v1308 = *(double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v806);
          v807 = (double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v806++);
          v1322 = v1308 * *v807 + v1322;
        }
        while ( (int *)v805 != v806 );
      }
      v808 = (double *)CoinDenseVector<double>::operator[](&v1538, 3);
      v809 = sqrt(v1350);
      if ( v1350 < 0.0 )
      {
        v1229 = LODWORD(v809);
        v1313 = v808;
        sqrt(v1350);
        v808 = v1313;
      }
      *v808 = v809;
      v810 = (double *)CoinDenseVector<double>::operator[](&v1538, 5);
      v811 = sqrt(v1322);
      if ( v1322 < 0.0 )
      {
        v1361 = v810;
        sqrt(v1322);
        v810 = v1361;
      }
      *v810 = v811;
      if ( v1538 <= 0 )
      {
        v1351 = 0.0;
      }
      else
      {
        v812 = v1539;
        v813 = 0.0;
        for ( i3 = v1539 + 1; ; ++i3 )
        {
          v815 = *v812;
          v812 = i3;
          v813 = v813 + v815 * v815;
          if ( i3 == &v1539[(unsigned int)(v1538 - 1) + 1] )
            break;
        }
        v1351 = sqrt(v813);
        if ( v813 < 0.0 )
          sqrt(v813);
      }
      CoinDenseVector<double>::~CoinDenseVector(&v1538);
      if ( v1282 * (1.0 - 0.0001 * v1443) >= v1351 )
        break;
      v816 = v1494;
      CoinDenseVector<double>::CoinDenseVector(&v1545, v1494, 0.0);
      v817 = v1495;
      v818 = v1546;
      if ( v816 > 0 )
      {
        if ( (v1546 >= v1495 + 16 || v1495 >= v1546 + 16) && (unsigned int)v816 > 0xE )
        {
          v819 = 0;
          v820 = (v1495 >> 3) & 1;
          if ( ((v1495 >> 3) & 1) != 0 )
          {
            v819 = 1;
            *(double *)v1546 = v1443 * *(double *)v1495;
          }
          v821 = v816 - v820;
          v822 = 0;
          v823 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1443, (__m128d)*(unsigned __int64 *)&v1443);
          v824 = 8LL * (unsigned int)v820;
          v825 = v817 + v824;
          v826 = 0;
          v827 = v818 + v824;
          do
          {
            ++v826;
            *(__m128d *)(v827 + v822) = _mm_mul_pd(*(__m128d *)(v825 + v822), v823);
            v822 += 16;
          }
          while ( v821 >> 1 > v826 );
          v828 = (v821 & 0xFFFFFFFE) + v819;
          if ( (v821 & 0xFFFFFFFE) != v821 )
          {
            v829 = v828;
            v830 = *(double *)(v817 + 8LL * v828);
            v831 = v828 + 1;
            *(double *)(v818 + 8 * v829) = v830 * v1443;
            if ( v816 > v831 )
              *(double *)(v818 + 8LL * v831) = v1443 * *(double *)(v817 + 8LL * v831);
          }
        }
        else
        {
          v1093 = 0;
          do
          {
            *(double *)(v818 + v1093) = *(double *)(v817 + v1093) * v1443;
            v1093 += 8;
          }
          while ( v1093 != 8LL * (unsigned int)(v816 - 1) + 8 );
        }
      }
      v832 = v1458;
      CoinDenseVector<double>::CoinDenseVector(&usage, (unsigned int)v1458, 0.0);
      v836 = v1459;
      v837 = v1546;
      v838 = usage.ru_utime.tv_usec;
      if ( v832 > 0 )
      {
        if ( (v1459 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1459 + 16)
          && (v1546 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1546 + 16)
          && (unsigned int)v832 > 0xE )
        {
          v839 = 0;
          v840 = (v1459 >> 3) & 1;
          if ( ((v1459 >> 3) & 1) != 0 )
          {
            v839 = 1;
            *(double *)usage.ru_utime.tv_usec = *(double *)v1459 - *(double *)v1546;
          }
          v841 = 0;
          LODWORD(v834) = 0;
          v842 = v832 - v840;
          v843 = 8LL * (unsigned int)v840;
          v844 = v836 + v843;
          v845 = v837 + v843;
          v833 = v838 + v843;
          do
          {
            v834 = (int *)(unsigned int)((_DWORD)v834 + 1);
            *(__m128d *)(v833 + v841) = _mm_sub_pd(*(__m128d *)(v844 + v841), *(__m128d *)(v845 + v841));
            v841 += 16;
          }
          while ( v842 >> 1 > (unsigned int)v834 );
          v835 = (v842 & 0xFFFFFFFE) + v839;
          if ( (v842 & 0xFFFFFFFE) != v842 )
          {
            v846 = (int)v835;
            v835 = (unsigned int)(v835 + 1);
            *(double *)(v838 + 8 * v846) = *(double *)(v836 + 8 * v846) - *(double *)(v837 + 8 * v846);
            if ( v832 > (int)v835 )
              *(double *)(v838 + 8LL * (int)v835) = *(double *)(v836 + 8LL * (int)v835)
                                                  - *(double *)(v837 + 8LL * (int)v835);
          }
        }
        else
        {
          v834 = &v1538;
          v833 = 8LL * (unsigned int)(v832 - 1) + 8;
          v1092 = 0;
          do
          {
            *(double *)(v838 + v1092) = *(double *)(v836 + v1092) - *(double *)(v837 + v1092);
            v1092 += 8;
          }
          while ( v1092 != v833 );
        }
      }
      CoinDenseVector<double>::operator=(&v1458, &usage, v833, v834, v835);
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      CoinDenseVector<double>::~CoinDenseVector(&v1545);
      v847 = v1496;
      CoinDenseVector<double>::CoinDenseVector(&v1545, v1496, 0.0);
      v848 = v1497;
      v849 = v1546;
      if ( v847 > 0 )
      {
        if ( (v1546 >= v1497 + 16 || v1497 >= v1546 + 16) && (unsigned int)v847 > 0xE )
        {
          v850 = 0;
          v851 = (v1497 >> 3) & 1;
          if ( ((v1497 >> 3) & 1) != 0 )
          {
            v850 = 1;
            *(double *)v1546 = v1443 * *(double *)v1497;
          }
          v852 = v847 - v851;
          v853 = 0;
          v854 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1443, (__m128d)*(unsigned __int64 *)&v1443);
          v855 = 8LL * (unsigned int)v851;
          v856 = v848 + v855;
          v857 = 0;
          v858 = v849 + v855;
          do
          {
            ++v857;
            *(__m128d *)(v858 + v853) = _mm_mul_pd(*(__m128d *)(v856 + v853), v854);
            v853 += 16;
          }
          while ( v852 >> 1 > v857 );
          v859 = (v852 & 0xFFFFFFFE) + v850;
          if ( (v852 & 0xFFFFFFFE) != v852 )
          {
            v860 = v859;
            v861 = *(double *)(v848 + 8LL * v859);
            v862 = v859 + 1;
            *(double *)(v849 + 8 * v860) = v861 * v1443;
            if ( v847 > v862 )
              *(double *)(v849 + 8LL * v862) = v1443 * *(double *)(v848 + 8LL * v862);
          }
        }
        else
        {
          v1091 = 0;
          do
          {
            *(double *)(v849 + v1091) = *(double *)(v848 + v1091) * v1443;
            v1091 += 8;
          }
          while ( v1091 != 8LL * (unsigned int)(v847 - 1) + 8 );
        }
      }
      v863 = v1460;
      CoinDenseVector<double>::CoinDenseVector(&usage, (unsigned int)v1460, 0.0);
      v867 = v1461;
      v868 = v1546;
      v869 = usage.ru_utime.tv_usec;
      if ( v863 > 0 )
      {
        if ( (v1461 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1461 + 16)
          && (v1546 >= usage.ru_utime.tv_usec + 16 || usage.ru_utime.tv_usec >= v1546 + 16)
          && (unsigned int)v863 > 0xE )
        {
          v870 = 0;
          v871 = (v1461 >> 3) & 1;
          if ( ((v1461 >> 3) & 1) != 0 )
          {
            v870 = 1;
            *(double *)usage.ru_utime.tv_usec = *(double *)v1461 - *(double *)v1546;
          }
          v872 = 0;
          LODWORD(v865) = 0;
          v873 = v863 - v871;
          v874 = 8LL * (unsigned int)v871;
          v875 = v867 + v874;
          v876 = v868 + v874;
          v864 = v869 + v874;
          do
          {
            v865 = (int *)(unsigned int)((_DWORD)v865 + 1);
            *(__m128d *)(v864 + v872) = _mm_sub_pd(*(__m128d *)(v875 + v872), *(__m128d *)(v876 + v872));
            v872 += 16;
          }
          while ( (unsigned int)v865 < v873 >> 1 );
          v866 = (v873 & 0xFFFFFFFE) + v870;
          if ( (v873 & 0xFFFFFFFE) != v873 )
          {
            v877 = (int)v866;
            v866 = (unsigned int)(v866 + 1);
            *(double *)(v869 + 8 * v877) = *(double *)(v867 + 8 * v877) - *(double *)(v868 + 8 * v877);
            if ( v863 > (int)v866 )
              *(double *)(v869 + 8LL * (int)v866) = *(double *)(v867 + 8LL * (int)v866)
                                                  - *(double *)(v868 + 8LL * (int)v866);
          }
        }
        else
        {
          v865 = &v1538;
          v864 = 8LL * (unsigned int)(v863 - 1) + 8;
          v1094 = 0;
          do
          {
            *(double *)(v869 + v1094) = *(double *)(v867 + v1094) - *(double *)(v868 + v1094);
            v1094 += 8;
          }
          while ( v864 != v1094 );
        }
      }
      CoinDenseVector<double>::operator=(&v1460, &usage, v864, v865, v866);
      v878 = 0;
      v879 = v44;
      CoinDenseVector<double>::~CoinDenseVector(&usage);
      CoinDenseVector<double>::~CoinDenseVector(&v1545);
      if ( v1452 > 0 )
      {
        do
        {
          v1352 = *(double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)*v879);
          v1323 = v1443 * *(double *)CoinDenseVector<double>::operator[](v1477, (unsigned int)*v879);
          v880 = (double *)CoinDenseVector<double>::operator[](&v1470, (unsigned int)*v879);
          v881 = (unsigned int)*v879;
          *v880 = v1352 - v1323;
          v1353 = *(double *)CoinDenseVector<double>::operator[](&v1475, v881);
          v1324 = v1443 * *(double *)CoinDenseVector<double>::operator[](v1479, (unsigned int)*v879);
          v882 = (double *)CoinDenseVector<double>::operator[](&v1475, (unsigned int)*v879);
          ++v878;
          ++v879;
          v139 = v1452 <= v878;
          *v882 = v1353 - v1324;
        }
        while ( !v139 );
      }
      if ( v1453 > 0 )
      {
        v883 = v1316;
        v884 = 0;
        do
        {
          v1354 = *(double *)CoinDenseVector<double>::operator[](&v1486, (unsigned int)*v883);
          v1325 = v1443 * *(double *)CoinDenseVector<double>::operator[](v1490, (unsigned int)*v883);
          v885 = (double *)CoinDenseVector<double>::operator[](&v1486, (unsigned int)*v883);
          v886 = (unsigned int)*v883;
          *v885 = v1354 - v1325;
          v1355 = *(double *)CoinDenseVector<double>::operator[](&v1488, v886);
          v1326 = v1443 * *(double *)CoinDenseVector<double>::operator[](v1492, (unsigned int)*v883);
          v887 = (double *)CoinDenseVector<double>::operator[](&v1488, (unsigned int)*v883);
          ++v884;
          ++v883;
          v139 = v1453 <= v884;
          *v887 = v1355 - v1326;
        }
        while ( !v139 );
      }
      v437.m128d_f64[0] = 10.0;
      if ( (double)v1291 >= 10.0 )
      {
        printf("\n     Linesearch failed (nf too big)");
        ++v1265;
        goto LABEL_694;
      }
      v1443 = 0.5 * v1443;
    }
    v1265 = 0;
LABEL_694:
    v906 = v1458;
    CoinDenseVector<double>::CoinDenseVector(&v1513, (unsigned int)v1458, 0.0);
    v907 = v1459;
    v908 = v1514;
    if ( v906 <= 0 )
    {
LABEL_704:
      v923 = v1513;
      if ( v1513 <= 0 )
        goto LABEL_1014;
    }
    else
    {
      if ( ((unsigned __int64)v1514 >= v1459 + 16 || v1459 >= (unsigned __int64)(v1514 + 2)) && (unsigned int)v906 > 0xE )
      {
        v909 = 0;
        v910 = (v1459 >> 3) & 1;
        if ( ((v1459 >> 3) & 1) != 0 )
        {
          v909 = 1;
          *v1514 = v1261 * *(double *)v1459;
        }
        v911 = 0;
        v912 = v906 - v910;
        v913 = (unsigned int)v910;
        v914 = v906 - v910;
        v915 = 0;
        v916 = v914 >> 1;
        v917 = v907 + v913 * 8;
        v918 = &v908[v913];
        do
        {
          ++v911;
          *(__m128d *)&v918[v915] = _mm_mul_pd(*(__m128d *)(v917 + v915 * 8), v1243);
          v915 += 2;
        }
        while ( v916 > v911 );
        v919 = (v912 & 0xFFFFFFFE) + v909;
        if ( (v912 & 0xFFFFFFFE) != v912 )
        {
          v920 = v919;
          v921 = *(double *)(v907 + 8LL * v919);
          v922 = v919 + 1;
          v908[v920] = v921 * v1261;
          if ( v906 > v922 )
            v908[v922] = v1261 * *(double *)(v907 + 8LL * v922);
        }
        goto LABEL_704;
      }
      v1175 = 0;
      do
      {
        v908[v1175 / 8] = *(double *)(v907 + v1175) * v1261;
        v1175 += 8LL;
      }
      while ( 8LL * (unsigned int)(v906 - 1) + 8 != v1175 );
      v923 = v1513;
      if ( v1513 <= 0 )
      {
LABEL_1014:
        v1327 = 0.0;
        goto LABEL_709;
      }
    }
    v924 = 0.0;
    v925 = (__int64)&v908[(unsigned int)(v923 - 1) + 1];
    do
    {
      v926 = *v908++;
      v924 = v924 + v926 * v926;
    }
    while ( (double *)v925 != v908 );
    v1327 = sqrt(v924);
    if ( v924 < 0.0 )
      sqrt(v924);
LABEL_709:
    CoinDenseVector<double>::~CoinDenseVector(&v1513);
    v927 = v1460;
    CoinDenseVector<double>::CoinDenseVector(&v1515, (unsigned int)v1460, 0.0);
    v928 = v1461;
    v929 = v1516;
    if ( v927 <= 0 )
    {
LABEL_719:
      v944 = v1515;
      if ( v1515 <= 0 )
        goto LABEL_1010;
    }
    else
    {
      if ( ((unsigned __int64)v1516 >= v1461 + 16 || v1461 >= (unsigned __int64)(v1516 + 2)) && (unsigned int)v927 > 0xE )
      {
        v930 = 0;
        v931 = (v1461 >> 3) & 1;
        if ( ((v1461 >> 3) & 1) != 0 )
        {
          v930 = 1;
          *v1516 = v1266 * *(double *)v1461;
        }
        v932 = 0;
        v933 = v927 - v931;
        v934 = (unsigned int)v931;
        v935 = v927 - v931;
        v936 = 0;
        v937 = v935 >> 1;
        v938 = v928 + v934 * 8;
        v939 = &v929[v934];
        do
        {
          ++v932;
          *(__m128d *)&v939[v936] = _mm_mul_pd(*(__m128d *)(v938 + v936 * 8), v1242);
          v936 += 2;
        }
        while ( v937 > v932 );
        v940 = (v933 & 0xFFFFFFFE) + v930;
        if ( (v933 & 0xFFFFFFFE) != v933 )
        {
          v941 = v940;
          v942 = *(double *)(v928 + 8LL * v940);
          v943 = v940 + 1;
          v929[v941] = v942 * v1266;
          if ( v927 > v943 )
            v929[v943] = v1266 * *(double *)(v928 + 8LL * v943);
        }
        goto LABEL_719;
      }
      v1174 = 0;
      do
      {
        v929[v1174 / 8] = *(double *)(v928 + v1174) * v1266;
        v1174 += 8LL;
      }
      while ( v1174 != 8LL * (unsigned int)(v927 - 1) + 8 );
      v944 = v1515;
      if ( v1515 <= 0 )
      {
LABEL_1010:
        v948 = 0.0;
        goto LABEL_724;
      }
    }
    v945 = 0.0;
    v946 = (__int64)&v929[(unsigned int)(v944 - 1) + 1];
    do
    {
      v947 = *v929++;
      v945 = v945 + v947 * v947;
    }
    while ( (double *)v946 != v929 );
    v948 = sqrt(v945);
    if ( v945 < 0.0 )
      sqrt(v945);
LABEL_724:
    CoinDenseVector<double>::~CoinDenseVector(&v1515);
    v949 = v1255 >= v1299 && v1274 >= 4.0 && v1251 >= x && v1251 >= v1375;
    v1328 = ((v1327 * v1327 + v948 * v948) * 0.5 + v1279 / v1262) * v1262;
    v950 = log10(v1289);
    sprintf((char *)&v1538, "\n%3g%5.1f", v1274, v950);
    sprintf(v1540, "%8.5f%8.5f", v1443, v1443);
    if ( v1443 < 0.0001 )
      sprintf(v1540, " %6.1e %6.1e", v1443, v1443);
    v1357 = v1299 / v1295;
    v1309 = log10(x);
    v951 = log10(v1375);
    sprintf((char *)v1543, "%6.1f%6.1f", v951, v1309);
    v952 = log10(v1299);
    sprintf((char *)&v1545, "%6.1f%15.7e", v952, v1328);
    sprintf((char *)&usage, "%3d%8.1f", v1291, v1299 / v1295);
    if ( v1299 / v1295 > 99999.0 )
      sprintf((char *)&usage, "%3d%8.1e", v1291, v1357);
    printf("%s%s%s%s%s", (const char *)&v1538, v1540, (const char *)v1543, (const char *)&v1545, (const char *)&usage);
    if ( v1258 > 2 )
    {
      v1096 = v1455;
      v1097 = log10(v1256);
      printf(" %5.1f%7d%7.3f", v1097, v1096, v1241);
      if ( v949 )
        goto LABEL_946;
LABEL_730:
      if ( v1274 >= v1263 )
      {
        printf("\n   Too many iterations");
        v1004 = 1;
        goto LABEL_785;
      }
      if ( (double)v1265 >= 1.0 )
      {
        printf("\n   Too many linesearch failures");
        v1004 = 2;
        goto LABEL_785;
      }
      v953 = fmin(v1443, v1267);
      if ( v1357 < 1000.0 )
        v1289 = v1289 - v953 * v1289;
      v954 = v1452;
      v955 = fmax(v1289, v1248);
      v956 = v1471;
      v957 = v1476;
      v958 = v1474;
      v1329 = v1453;
      v959 = v1487;
      v960 = v1489;
      v961 = v1485;
      v1289 = v955;
      if ( v1452 <= 0 )
      {
        if ( v1453 <= 0 )
        {
          v1297 = 0.0;
          goto LABEL_748;
        }
      }
      else
      {
        v962 = v44 + 1;
        v963 = v44;
        v964 = (unsigned int)(v1452 - 1);
        do
        {
          v965 = *v963++;
          *(double *)(v958 + 8 * v965) = v955 - *(double *)(v956 + 8 * v965) * v957[v965];
        }
        while ( &v44[v964 + 1] != v963 );
        if ( v1329 <= 0 )
          goto LABEL_742;
      }
      v966 = 0;
      do
      {
        v967 = v1316[v966++];
        *(double *)(v961 + 8 * v967) = v955 - *(double *)(v959 + 8 * v967) * v960[v967];
      }
      while ( v1329 > (int)v966 );
      if ( v954 <= 0 )
      {
        v968 = 0.0;
        goto LABEL_745;
      }
      v962 = v44 + 1;
      v964 = (unsigned int)(v954 - 1);
LABEL_742:
      v968 = 0.0;
      v969 = v44;
      do
      {
        v970 = *v969++;
        v968 = fmax(*(double *)(v958 + 8 * v970), v968);
      }
      while ( &v962[v964] != v969 );
      if ( v1329 <= 0 )
      {
        v1297 = fmax(v968, 0.0);
        goto LABEL_748;
      }
LABEL_745:
      v971 = 0.0;
      v972 = 0;
      do
      {
        v973 = v1316[v972++];
        v974 = fmax(*(double *)(v961 + 8 * v973), v971);
        v971 = v974;
      }
      while ( v1329 > (int)v972 );
      v1297 = fmax(v968, v974);
LABEL_748:
      CoinDenseVector<double>::CoinDenseVector(&v1531, 6, 0.0);
      v975 = (double *)CoinDenseVector<double>::operator[](&v1531, 0);
      if ( v1468 <= 0 )
      {
        v980 = 0.0;
      }
      else
      {
        v976 = v1469;
        v977 = 0.0;
        for ( i4 = v1469 + 1; ; ++i4 )
        {
          v979 = *v976;
          v976 = i4;
          v977 = v977 + v979 * v979;
          if ( &v1469[(unsigned int)(v1468 - 1) + 1] == i4 )
            break;
        }
        v980 = sqrt(v977);
        if ( v977 < 0.0 )
        {
          v1365 = v975;
          sqrt(v977);
          v975 = v1365;
        }
      }
      *v975 = v980;
      v981 = (double *)CoinDenseVector<double>::operator[](&v1531, 1);
      if ( v1481 <= 0 )
      {
        v986 = 0.0;
      }
      else
      {
        v982 = (double *)v1482;
        v983 = 0.0;
        for ( i5 = (double *)(v1482 + 8); ; ++i5 )
        {
          v985 = *v982;
          v982 = i5;
          v983 = v983 + v985 * v985;
          if ( (double *)(v1482 + 8 + 8LL * (unsigned int)(v1481 - 1)) == i5 )
            break;
        }
        v986 = sqrt(v983);
        if ( v983 < 0.0 )
        {
          sx = (char *)v981;
          sqrt(v983);
          v981 = (double *)sx;
        }
      }
      *v981 = v986;
      if ( v954 <= 0 )
      {
        v1358 = 0.0;
        sc = 0.0;
      }
      else
      {
        v987 = v44;
        v988 = (__int64)&v44[v954 - 1 + 1];
        v1358 = 0.0;
        sc = 0.0;
        do
        {
          v1310 = *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v987);
          sc = v1310 * *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v987) + sc;
          v1311 = *(double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v987);
          v989 = (double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v987++);
          v1358 = v1311 * *v989 + v1358;
        }
        while ( v987 != (int *)v988 );
      }
      v990 = (double *)CoinDenseVector<double>::operator[](&v1531, 2);
      v991 = sqrt(sc);
      if ( sc < 0.0 )
      {
        v1315 = v990;
        sqrt(sc);
        v990 = v1315;
      }
      *v990 = v991;
      v992 = (double *)CoinDenseVector<double>::operator[](&v1531, 4);
      v993 = sqrt(v1358);
      if ( v1358 < 0.0 )
      {
        sy = (char *)v992;
        sqrt(v1358);
        v992 = (double *)sy;
      }
      *v992 = v993;
      if ( v1329 <= 0 )
      {
        v1359 = 0.0;
        sd = 0.0;
      }
      else
      {
        v1359 = 0.0;
        sd = 0.0;
        v994 = v1316;
        v1312 = (__int64)&v1316[v1329 - 1 + 1];
        do
        {
          v1330 = *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v994);
          sd = v1330 * *(double *)CoinDenseVector<double>::operator[](v1472, (unsigned int)*v994) + sd;
          v1331 = *(double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v994);
          v995 = (double *)CoinDenseVector<double>::operator[](v1473, (unsigned int)*v994++);
          v1359 = v1331 * *v995 + v1359;
        }
        while ( v994 != (int *)v1312 );
      }
      v996 = (double *)CoinDenseVector<double>::operator[](&v1531, 3);
      v997 = sqrt(sd);
      if ( sd < 0.0 )
      {
        v1332 = v996;
        sqrt(sd);
        v996 = v1332;
      }
      *v996 = v997;
      v998 = (char *)CoinDenseVector<double>::operator[](&v1531, 5);
      v437.m128d_f64[0] = sqrt(v1359);
      if ( v1359 < 0.0 )
      {
        sz = v998;
        sqrt(v1359);
        v998 = sz;
      }
      *(double *)v998 = v437.m128d_f64[0];
      if ( v1531 <= 0 )
      {
        v1282 = 0.0;
      }
      else
      {
        v999 = v1532;
        v1000 = 0.0;
        for ( i6 = v1532 + 1; ; ++i6 )
        {
          v1002 = *v999;
          v999 = i6;
          v437.m128d_f64[0] = v1002 * v1002;
          v1000 = v1000 + v437.m128d_f64[0];
          if ( i6 == &v1532[(unsigned int)(v1531 - 1) + 1] )
            break;
        }
        v1282 = sqrt(v1000);
        if ( v1000 < 0.0 )
          sqrt(v1000);
      }
      CoinDenseVector<double>::~CoinDenseVector(&v1531);
      if ( v1291 > 2 || v1443 <= 0.01 )
      {
        s = 0.1 * n;
        v1003 = n;
      }
      else
      {
        s = n;
        v1003 = n;
      }
      v1256 = v1003;
      if ( v1263 <= v1274 )
        goto LABEL_784;
      continue;
    }
    break;
  }
  if ( !v949 )
    goto LABEL_730;
LABEL_946:
  printf("\n   Converged");
LABEL_784:
  v1004 = 0;
LABEL_785:
  v1005 = (unsigned int)v1454;
  if ( v1454 > 0 )
  {
    v1006 = 1;
    do
    {
      v1007 = (_QWORD *)CoinDenseVector<double>::operator[](v1464, (unsigned int)v1288[v1006 - 1]);
      *(_QWORD *)CoinDenseVector<double>::operator[](&v1458, (unsigned int)v1288[v1006 - 1]) = *v1007;
      v1008 = v1006++;
    }
    while ( v1454 > v1008 );
  }
  CoinDenseVector<double>::operator=(v1240, &v1475, v438, v439, v1005);
  if ( v1453 > 0 )
  {
    v1192 = v1462;
    CoinDenseVector<double>::CoinDenseVector(&usage, (unsigned int)v1462, 0.0);
    v1195 = v1463;
    v1196 = v1489;
    v1197 = usage.ru_utime.tv_usec;
    if ( v1192 > 0 )
    {
      v1194 = usage.ru_utime.tv_usec + 16;
      LOBYTE(v1194) = (unsigned __int64)v1463 >= usage.ru_utime.tv_usec + 16;
      if ( ((unsigned __int8)(v1194 | (usage.ru_utime.tv_usec >= (unsigned __int64)(v1463 + 2)))
          & ((unsigned __int64)v1489 >= usage.ru_utime.tv_usec + 16
          || usage.ru_utime.tv_usec >= (unsigned __int64)(v1489 + 2))) != 0
        && (unsigned int)v1192 > 0xE )
      {
        v1198 = 0;
        v1199 = ((unsigned __int64)v1463 >> 3) & 1;
        if ( (((unsigned __int64)v1463 >> 3) & 1) != 0 )
        {
          v1198 = 1;
          *(double *)usage.ru_utime.tv_usec = *v1463 - *v1489;
        }
        v1200 = 0;
        v1201 = v1192 - v1199;
        v1202 = (unsigned int)(v1192 - v1199) >> 1;
        v1203 = (unsigned int)v1199;
        v1204 = 0;
        v1203 *= 8;
        v1205 = (char *)v1195 + v1203;
        v1206 = (char *)v1196 + v1203;
        v1194 = v1197 + v1203;
        do
        {
          ++v1200;
          *(__m128d *)(v1194 + v1204) = _mm_sub_pd(*(__m128d *)&v1205[v1204], *(__m128d *)&v1206[v1204]);
          v1204 += 16;
        }
        while ( v1200 < v1202 );
        v1193 = v1201 & 0xFFFFFFFE;
        v1207 = v1193 + v1198;
        if ( (_DWORD)v1193 != v1201 )
        {
          v1193 = v1207;
          v1208 = v1207 + 1;
          *(double *)(v1197 + 8 * v1193) = v1195[v1193] - v1196[v1193];
          if ( v1208 < v1192 )
            *(double *)(v1197 + 8LL * v1208) = v1195[v1208] - v1196[v1208];
        }
      }
      else
      {
        v1193 = 8LL * (unsigned int)(v1192 - 1) + 8;
        v1227 = 0;
        do
        {
          *(double *)(v1197 + v1227) = v1195[v1227 / 8] - v1196[v1227 / 8];
          v1227 += 8LL;
        }
        while ( v1193 != v1227 );
      }
    }
    CoinDenseVector<double>::operator=(v1240, &usage, v1193, v1194, v1196);
    CoinDenseVector<double>::~CoinDenseVector(&usage);
    v1009 = v1458;
    if ( v1458 <= 0 )
      goto LABEL_1054;
LABEL_790:
    v1010 = (double *)v1459;
    v1011 = (unsigned int)(v1009 - 1);
    v1012 = 0.0;
    v1013 = (double *)(v1459 + 8);
    v1014 = v1459 + 8 + 8 * v1011;
    while ( 1 )
    {
      v1015 = *v1010;
      if ( *v1010 < 0.0 )
        v1015 = -v1015;
      v1012 = fmax(v1012, v1015);
      v1010 = v1013;
      if ( v1013 == (double *)v1014 )
        break;
      ++v1013;
    }
  }
  else
  {
    v1009 = v1458;
    if ( v1458 > 0 )
      goto LABEL_790;
LABEL_1054:
    v1012 = 0.0;
  }
  printf("\n\nmax |x| =%10.3f", v1012);
  if ( v1460 <= 0 )
  {
    v1017 = 0.0;
  }
  else
  {
    v1016 = (double *)v1461;
    v1017 = 0.0;
    for ( i7 = (double *)(v1461 + 8); ; ++i7 )
    {
      v1019 = *v1016;
      if ( *v1016 < 0.0 )
        v1019 = -v1019;
      v1017 = fmax(v1017, v1019);
      v1016 = i7;
      if ( (double *)(v1461 + 8 + 8LL * (unsigned int)(v1460 - 1)) == i7 )
        break;
    }
  }
  printf("    max |y| =%10.3f", v1017);
  if ( v1462 <= 0 )
  {
    v1021 = 0.0;
  }
  else
  {
    v1020 = v1463;
    v1021 = 0.0;
    for ( i8 = v1463 + 1; ; ++i8 )
    {
      v1023 = *v1020;
      if ( *v1020 < 0.0 )
        v1023 = -v1023;
      v1021 = fmax(v1021, v1023);
      v1020 = i8;
      if ( i8 == &v1463[(unsigned int)(v1462 - 1) + 1] )
        break;
    }
  }
  printf("    max |z| =%10.3f", v1021);
  printf("   scaled");
  v1024 = v1458;
  if ( v1458 > 0 )
  {
    v1025 = v1459;
    v1026 = (v1459 >> 3) & 1;
    if ( (unsigned int)(v1458 - 1) <= 1 )
    {
      v1033 = 0;
      goto LABEL_814;
    }
    v1027 = 0;
    if ( (_DWORD)v1026 )
    {
      v1027 = 1;
      *(double *)v1459 = v1284 * *(double *)v1459;
    }
    v1028 = v1025 + 8 * v1026;
    v1029 = v1024 - v1026;
    v1030 = 0;
    v1031 = 0;
    v1032 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1284, (__m128d)*(unsigned __int64 *)&v1284);
    do
    {
      ++v1030;
      *(__m128d *)(v1028 + v1031) = _mm_mul_pd(*(__m128d *)(v1028 + v1031), v1032);
      v1031 += 16;
    }
    while ( v1030 < v1029 >> 1 );
    v1033 = (v1029 & 0xFFFFFFFE) + v1027;
    if ( (v1029 & 0xFFFFFFFE) != v1029 )
    {
LABEL_814:
      v1034 = (double *)(v1025 + 8LL * v1033);
      v1035 = v1033 + 1;
      *v1034 = *v1034 * v1284;
      if ( v1024 > v1035 )
        *(double *)(v1025 + 8LL * v1035) = v1284 * *(double *)(v1025 + 8LL * v1035);
    }
  }
  v1036 = v1460;
  if ( v1460 > 0 )
  {
    v1037 = v1461;
    v1038 = (v1461 >> 3) & 1;
    if ( (unsigned int)(v1460 - 1) <= 1 )
    {
      v1045 = 0;
      goto LABEL_823;
    }
    v1039 = 0;
    if ( (_DWORD)v1038 )
    {
      v1039 = 1;
      *(double *)v1461 = v1245 * *(double *)v1461;
    }
    v1040 = v1037 + 8 * v1038;
    v1041 = v1036 - v1038;
    v1042 = 0;
    v1043 = 0;
    v1044 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1245, (__m128d)*(unsigned __int64 *)&v1245);
    do
    {
      ++v1042;
      *(__m128d *)(v1040 + v1043) = _mm_mul_pd(*(__m128d *)(v1040 + v1043), v1044);
      v1043 += 16;
    }
    while ( v1042 < v1041 >> 1 );
    v1045 = (v1041 & 0xFFFFFFFE) + v1039;
    if ( (v1041 & 0xFFFFFFFE) != v1041 )
    {
LABEL_823:
      v1046 = (double *)(v1037 + 8LL * v1045);
      v1047 = v1045 + 1;
      *v1046 = *v1046 * v1245;
      if ( v1036 > v1047 )
        *(double *)(v1037 + 8LL * v1047) = v1245 * *(double *)(v1037 + 8LL * v1047);
    }
  }
  v1048 = v1462;
  if ( v1462 > 0 )
  {
    v1049 = v1463;
    v1050 = ((unsigned __int64)v1463 >> 3) & 1;
    if ( (unsigned int)(v1462 - 1) <= 1 )
    {
      v1057 = 0;
      goto LABEL_832;
    }
    v1051 = 0;
    if ( (_DWORD)v1050 )
    {
      v1051 = 1;
      *v1463 = v1245 * *v1463;
    }
    v1052 = &v1049[v1050];
    v1053 = v1048 - v1050;
    v1054 = 0;
    v1055 = 0;
    v1056 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v1245, (__m128d)*(unsigned __int64 *)&v1245);
    do
    {
      ++v1054;
      *(__m128d *)&v1052[v1055] = _mm_mul_pd(*(__m128d *)&v1052[v1055], v1056);
      v1055 += 2;
    }
    while ( v1054 < v1053 >> 1 );
    v1057 = (v1053 & 0xFFFFFFFE) + v1051;
    if ( (v1053 & 0xFFFFFFFE) != v1053 )
    {
LABEL_832:
      v1058 = &v1049[v1057];
      v1059 = v1057 + 1;
      *v1058 = *v1058 * v1245;
      if ( v1048 > v1059 )
        v1049[v1059] = v1245 * v1049[v1059];
    }
  }
  if ( v1024 <= 0 )
  {
    v1064 = 0.0;
  }
  else
  {
    v1060 = (double *)v1459;
    v1061 = 0.0;
    for ( i9 = (double *)(v1459 + 8); ; ++i9 )
    {
      v1063 = *v1060;
      if ( *v1060 < 0.0 )
        v1063 = -v1063;
      v1061 = fmax(v1061, v1063);
      v1060 = i9;
      v1064 = v1061;
      if ( (double *)(v1459 + 8 + 8LL * (unsigned int)(v1024 - 1)) == i9 )
        break;
    }
  }
  printf("\nmax |x| =%10.3f", v1064);
  if ( v1460 <= 0 )
  {
    v1066 = 0.0;
  }
  else
  {
    v1065 = (double *)v1461;
    v1066 = 0.0;
    for ( i10 = (double *)(v1461 + 8); ; ++i10 )
    {
      v1068 = *v1065;
      if ( *v1065 < 0.0 )
        v1068 = -v1068;
      v1066 = fmax(v1066, v1068);
      v1065 = i10;
      if ( (double *)(v1461 + 8 + 8LL * (unsigned int)(v1460 - 1)) == i10 )
        break;
    }
  }
  printf("    max |y| =%10.3f", v1066);
  if ( v1462 <= 0 )
  {
    v1070 = 0.0;
  }
  else
  {
    v1069 = v1463;
    v1070 = 0.0;
    for ( i11 = v1463 + 1; ; ++i11 )
    {
      v1072 = *v1069;
      if ( *v1069 < 0.0 )
        v1072 = -v1072;
      v1070 = fmax(v1070, v1072);
      v1069 = i11;
      if ( i11 == &v1463[(unsigned int)(v1462 - 1) + 1] )
        break;
    }
  }
  printf("    max |z| =%10.3f", v1070);
  puts(" unscaled");
  getrusage(RUSAGE_SELF, &usage);
  v1444 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  sprintf((char *)&v1545, "\nPDitns  =%10g", v1274);
  sprintf((char *)&usage, "itns =%10d", v1257);
  printf("    time    =%10.1f\n", v1444 - v1231);
  v1543[0] = xmmword_28DCD0;
  v1542 = 0;
  v1544 = 0x3FF0000A7C5AC472LL;
  v1543[1] = xmmword_28DCE0;
  v1543[2] = xmmword_28DCF0;
  v1543[3] = xmmword_28DD00;
  *(_OWORD *)v1540 = 0;
  v1541 = 0;
  if ( (int)v1264 > 0 )
  {
    for ( i12 = 0; i12 != v1264; ++i12 )
    {
      v1074 = 0;
      while ( *((double *)v1543 + v1074) <= *(double *)CoinDenseVector<double>::operator[](&v1458, i12) )
      {
        if ( ++v1074 == 9 )
          goto LABEL_857;
      }
      ++*(_DWORD *)&v1540[4 * (int)v1074];
LABEL_857:
      ;
    }
  }
  puts("Distribution of Solution Values");
  for ( i13 = 8; i13 != 1; --i13 )
    printf(" %g  to  %g %d\n", *((double *)v1543 + i13 - 1), *((double *)v1543 + i13), *(_DWORD *)&v1540[4 * i13]);
  printf("   Less than   %g %d\n", 0.000001, *(_DWORD *)v1540);
  ClpLsqr::~ClpLsqr(v1237);
  CoinDenseVector<double>::~CoinDenseVector(&v1507);
  CoinDenseVector<double>::~CoinDenseVector(&v1505);
  CoinDenseVector<double>::~CoinDenseVector(v1504);
  CoinDenseVector<double>::~CoinDenseVector(v1502);
  CoinDenseVector<double>::~CoinDenseVector(v1238);
  CoinDenseVector<double>::~CoinDenseVector(v1239);
  CoinDenseVector<double>::~CoinDenseVector(v1244);
  CoinDenseVector<double>::~CoinDenseVector(&v1494);
  CoinDenseVector<double>::~CoinDenseVector(v1492);
  CoinDenseVector<double>::~CoinDenseVector(v1490);
  CoinDenseVector<double>::~CoinDenseVector(&v1488);
  CoinDenseVector<double>::~CoinDenseVector(&v1486);
  CoinDenseVector<double>::~CoinDenseVector(v1484);
  CoinDenseVector<double>::~CoinDenseVector(v1483);
  CoinDenseVector<double>::~CoinDenseVector(&v1481);
  CoinDenseVector<double>::~CoinDenseVector(v1479);
  CoinDenseVector<double>::~CoinDenseVector(v1477);
  CoinDenseVector<double>::~CoinDenseVector(&v1475);
  CoinDenseVector<double>::~CoinDenseVector(v1473);
  CoinDenseVector<double>::~CoinDenseVector(v1472);
  CoinDenseVector<double>::~CoinDenseVector(&v1470);
  CoinDenseVector<double>::~CoinDenseVector(&v1468);
  CoinDenseVector<double>::~CoinDenseVector(v1466);
  CoinDenseVector<double>::~CoinDenseVector(v1464);
  CoinDenseVector<double>::~CoinDenseVector(v1240);
  CoinDenseVector<double>::~CoinDenseVector(&v1460);
  CoinDenseVector<double>::~CoinDenseVector(&v1458);
  CoinDenseVector<double>::~CoinDenseVector(v1234);
  return v1004;
}

