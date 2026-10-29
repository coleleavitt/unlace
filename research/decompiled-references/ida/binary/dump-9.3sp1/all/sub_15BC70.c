__int64 __fastcall sub_15BC70(
        unsigned int *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        int **a5,
        __m128 **a6,
        __m128i a7,
        unsigned int a8)
{
  unsigned __int64 v8; // r13
  unsigned int *v9; // r14
  int v10; // r12d
  __int128 v11; // rdi
  unsigned __int8 v12; // bl
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // eax
  unsigned __int64 *v18; // rbx
  unsigned int *v19; // rbx
  __int64 v20; // r12
  char *v21; // r15
  int v22; // eax
  __int64 v23; // r12
  int v24; // ebx
  __int64 v25; // rsi
  __int64 (*v26)(); // rax
  int v27; // esi
  char v28; // al
  int v29; // eax
  __int64 v30; // rdi
  char v31; // r15
  __m128 *v32; // rax
  unsigned int **v33; // rax
  __m128 *v34; // rax
  __m128 *v35; // rax
  _DWORD *v36; // rax
  unsigned __int64 *v37; // r15
  __int64 v38; // rax
  unsigned __int64 *v39; // rbx
  unsigned int v40; // eax
  __int64 result; // rax
  __m128 *v42; // rax
  __m128 *v43; // rax
  __int64 v44; // rbx
  _DWORD *v45; // rax
  int v46; // ecx
  unsigned __int8 v47; // dl
  char v48; // al
  char v49; // al
  _DWORD *v50; // rax
  __int128 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // r9d
  bool v55; // zf
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // r8
  int v60; // r9d
  unsigned __int64 *v61; // r12
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  int v65; // ecx
  __int64 v66; // r8
  char v67; // al
  __int64 v68; // rdx
  unsigned int *v69; // rbx
  unsigned int *v70; // rbx
  _DWORD *v71; // rax
  int v72; // edx
  char v73; // al
  unsigned int *v74; // rbx
  __int64 v75; // rdi
  unsigned int v76; // eax
  int v77; // eax
  unsigned int v78; // eax
  int v79; // eax
  int *v80; // rdi
  int v81; // edx
  __int64 v82; // rax
  char v83; // al
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned int *v88; // rbx
  __int64 v89; // rdi
  unsigned int v90; // eax
  char *v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // eax
  int v95; // edx
  int v96; // eax
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  unsigned int v100; // eax
  __int64 v101; // rax
  char *v102; // rbx
  unsigned __int64 *v103; // rbx
  unsigned __int64 *v104; // rbx
  int v105; // r9d
  char v106; // al
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 *v110; // rbx
  char v111; // al
  char v112; // bl
  __int64 v113; // rbx
  __int64 v114; // rax
  unsigned int v115; // ebx
  __m128 *v116; // rax
  unsigned int v117; // eax
  unsigned __int64 v118; // rdx
  __int64 v119; // r8
  char v120; // di
  signed int v121; // eax
  signed int v122; // edx
  __int64 v123; // rbx
  char *v124; // r15
  __m128 *v125; // rbx
  __int64 v126; // rax
  _BYTE *v127; // rdi
  char v128; // al
  _DWORD *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // r8
  int v132; // r9d
  __int64 v133; // rax
  char *v134; // rbx
  char *v135; // rsi
  char *v136; // rbx
  int v137; // eax
  __int64 v138; // rdi
  unsigned int v139; // eax
  int v140; // r8d
  __int64 v141; // rdx
  __int64 v142; // rax
  int v143; // ecx
  unsigned __int64 v144; // rax
  __int32 v145; // ecx
  unsigned __int64 v146; // rdi
  int v147; // ecx
  unsigned __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // r8
  int v151; // r9d
  unsigned __int64 v152; // rax
  __int64 v153; // rdx
  int v154; // edi
  char v155; // al
  __int64 v156; // rbx
  unsigned int v157; // edi
  __int64 v158; // r15
  unsigned __int8 *v159; // rax
  int *v160; // rdx
  int v161; // ecx
  int v162; // ecx
  __int64 v163; // rdx
  char *v164; // rdi
  unsigned __int8 *v165; // rbx
  __int64 v166; // rdx
  __int64 v167; // rcx
  char *v168; // rbx
  unsigned int v169; // eax
  __int64 v170; // rcx
  unsigned int v171; // eax
  __int64 v172; // r12
  __int64 v173; // rbx
  __int64 v174; // rbx
  unsigned __int8 *v175; // rax
  __int64 v176; // rcx
  __int64 v177; // rax
  unsigned int v178; // eax
  __int64 v179; // rdx
  __int64 v180; // rcx
  unsigned int v181; // ebx
  __int64 v182; // rax
  int v183; // eax
  __int64 v184; // rbx
  __int64 v185; // rax
  __int64 v186; // rdx
  int v187; // ecx
  __int64 v188; // rax
  unsigned __int8 *v189; // rax
  unsigned __int8 v190; // dl
  __int64 v191; // r9
  __int64 v192; // r8
  __m128 *v193; // rax
  char v194; // r10
  __m128 *v195; // rax
  __int64 v196; // r9
  __m128 *v197; // rax
  __m128 *v198; // rax
  __int64 v199; // r8
  __m128 *v200; // rax
  char v201; // r10
  __m128 *v202; // rax
  signed int v203; // ecx
  char *v204; // r15
  int v205; // eax
  __int64 *v206; // rcx
  bool v207; // bl
  __int64 v208; // rax
  unsigned __int64 v209; // rdx
  unsigned int v210; // edi
  unsigned int *v211; // rsi
  int v212; // r14d
  unsigned int *v213; // r8
  unsigned __int64 *v214; // rbx
  unsigned __int64 v215; // rdx
  __int64 v216; // r12
  int v217; // r14d
  char *v218; // rbx
  unsigned int *v219; // r15
  __int64 v220; // rax
  __m128 *v221; // rdx
  char v222; // al
  unsigned int *v223; // rbx
  int v224; // ecx
  __int64 v225; // rax
  char *v226; // rax
  char *v227; // r12
  __int64 v228; // rax
  int v229; // eax
  char v230; // al
  unsigned __int64 v231; // rax
  __int32 v232; // esi
  __int32 v233; // ecx
  unsigned __int64 v234; // rcx
  unsigned int v235; // eax
  char v236; // dl
  unsigned __int64 v237; // rax
  char v238; // dl
  __int64 v239; // r12
  int v240; // eax
  int v241; // edx
  __int64 v242; // rax
  char *v243; // rbx
  int v244; // ecx
  unsigned int v245; // ebx
  __m128 *v246; // r12
  __int64 v247; // rdx
  __int64 v248; // rax
  __m128 *v249; // rax
  char v250; // r10
  __m128 *v251; // rax
  __int64 v252; // rbx
  __int64 v253; // rdi
  __int64 v254; // rdx
  char v255; // al
  __int64 v256; // rdx
  int v257; // eax
  __int64 v258; // rdi
  int v259; // r15d
  __int64 v260; // rax
  __int64 v261; // rdx
  int v262; // r12d
  char v263; // dl
  _QWORD *v264; // rdi
  int v265; // r8d
  __int64 v266; // rax
  unsigned int v267; // esi
  unsigned __int8 *v268; // r10
  unsigned int v269; // ebx
  _QWORD *v270; // rcx
  int v271; // edx
  __int64 v272; // rax
  _QWORD *v273; // rsi
  __int64 v274; // rax
  __int64 v275; // rax
  __int64 v276; // rbx
  int v277; // ecx
  unsigned __int8 *v278; // rax
  __int64 v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rcx
  int v282; // r12d
  __int64 v283; // rbx
  __int64 v284; // rbx
  __int64 v285; // rdx
  __int64 v286; // rcx
  unsigned __int64 v287; // rax
  __int64 v288; // rsi
  int v289; // eax
  __int64 v290; // rax
  __int64 v291; // rax
  __int64 v292; // rax
  __int64 v293; // rsi
  unsigned __int8 *v294; // r12
  __int64 v295; // rdx
  __int64 v296; // rcx
  _QWORD *v297; // rbx
  unsigned int v298; // eax
  char v299; // al
  __int64 v300; // rdx
  unsigned __int64 *v301; // r15
  __int64 v302; // rax
  __int64 v303; // rax
  int v304; // r12d
  unsigned __int64 v305; // rbx
  __int64 v306; // r8
  int v307; // eax
  unsigned int v308; // r12d
  __int64 v309; // rax
  __int64 v310; // rax
  _DWORD *v311; // rdx
  unsigned int v312; // r12d
  __int64 v313; // rbx
  unsigned __int64 v314; // rax
  _DWORD *v315; // rax
  char v316; // al
  unsigned int *v317; // rdx
  unsigned int *v318; // rbx
  __int64 v319; // rdi
  unsigned int v320; // eax
  __m128 *v321; // rax
  _DWORD *v322; // rax
  __int64 v323; // rcx
  __int64 v324; // r8
  int v325; // r9d
  __int64 v326; // rbx
  char v327; // al
  __int64 v328; // rbx
  char v329; // al
  __int64 v330; // rdx
  __int64 v331; // rcx
  __int64 v332; // rbx
  unsigned __int8 *v333; // rsi
  unsigned __int8 *v334; // rbx
  __int64 v335; // rdx
  __int64 v336; // rcx
  __int64 v337; // r12
  __int64 v338; // rax
  char *v339; // r15
  unsigned __int64 *v340; // rbx
  unsigned __int8 *v341; // rbx
  unsigned int v342; // r15d
  int i; // r12d
  char v344; // al
  unsigned __int8 *v345; // rax
  __int64 v346; // rax
  __int64 v347; // rax
  __int64 v348; // rcx
  __int64 v349; // r8
  int v350; // r9d
  __int64 v351; // rbx
  char v352; // al
  unsigned __int64 *v353; // r15
  __int64 v354; // rdx
  __int64 v355; // rcx
  char v356; // al
  __int64 v357; // rbx
  __int64 v358; // rax
  int v359; // ecx
  unsigned __int64 v360; // rbx
  char v361; // al
  int *v362; // rax
  int v363; // edx
  int *v364; // rbx
  __int64 v365; // rax
  __int64 v366; // rdi
  unsigned int v367; // edx
  int v368; // eax
  _DWORD *v369; // rax
  unsigned __int8 *v370; // rdi
  __int64 v371; // rbx
  __int64 v372; // rdx
  __int64 v373; // rcx
  unsigned __int8 *v374; // rsi
  char *v375; // rbx
  __int64 v376; // rdx
  __int64 v377; // rcx
  __int64 v378; // rdx
  void *v379; // rax
  int v380; // r12d
  __int64 v381; // rdi
  unsigned __int8 *v382; // rdx
  int v383; // ecx
  char v384; // al
  __int64 v385; // rdx
  __int64 v386; // r9
  __m128 *v387; // rax
  __m128 *v388; // rdx
  __m128 *v389; // rax
  __m128 *v390; // rsi
  __int64 v391; // rax
  __int64 v392; // rbx
  __int64 v393; // rcx
  __int64 v394; // r8
  int v395; // r9d
  __int64 v396; // r12
  unsigned __int64 *v397; // rbx
  __int64 v398; // r10
  __m128 *v399; // rax
  __m128 *v400; // rsi
  int v401; // eax
  char v402; // al
  unsigned int *v403; // r12
  __int64 v404; // rdi
  int v405; // eax
  __int64 v406; // rax
  __int64 v407; // rax
  unsigned int v408; // eax
  __int64 v409; // rax
  unsigned __int64 v410; // rax
  __int64 v411; // r10
  unsigned __int64 *v412; // rax
  __int64 v413; // r9
  __m128 *v414; // rax
  __int64 v415; // r9
  __m128 *v416; // rax
  char v417; // r15
  __int64 v418; // r9
  __m128 *v419; // rax
  __int64 v420; // r11
  __m128 *v421; // rax
  __int64 v422; // r11
  __m128 *v423; // rax
  __m128 *v424; // rdx
  unsigned __int64 *v425; // rax
  __int64 v426; // rax
  char *v427; // rax
  char v428; // dl
  __int64 v429; // rcx
  __int64 v430; // rdi
  int v431; // ecx
  char v432; // dl
  unsigned int v433; // edx
  __int64 v434; // rdx
  unsigned __int64 *v435; // rbx
  unsigned __int8 *v436; // rbx
  unsigned int v437; // eax
  _DWORD *v438; // rax
  _DWORD *v439; // rax
  unsigned int *v440; // rax
  unsigned int *v441; // rbx
  __int64 v442; // rdi
  unsigned int v443; // eax
  int v444; // eax
  unsigned __int8 *v445; // rsi
  unsigned int v446; // ebx
  __int64 v447; // rdx
  __int64 v448; // rcx
  unsigned __int64 v449; // rax
  __int64 v450; // rcx
  __int64 *v451; // rbx
  unsigned __int8 *v452; // rsi
  char *v453; // rbx
  unsigned __int8 *v454; // r12
  __int128 v455; // rdi
  char *v456; // rbx
  __int64 v457; // rdx
  __int64 v458; // rcx
  __int64 v459; // rdx
  __int64 v460; // rcx
  __int64 v461; // rbx
  __int64 v462; // rax
  char *v463; // rbx
  __int64 v464; // rax
  unsigned int *v465; // rax
  __int64 v466; // rdx
  __int64 v467; // rax
  __int64 v468; // rbx
  __int64 v469; // rdx
  char *v470; // rbx
  __int64 v471; // rdx
  __int64 v472; // rcx
  __int64 v473; // rdx
  __int64 v474; // r12
  __int64 v475; // rbx
  __int64 v476; // rdi
  int v477; // eax
  __int64 v478; // r8
  __int64 v479; // r9
  int v480; // ecx
  unsigned __int64 v481; // rdx
  __int64 v482; // rdi
  int v483; // edx
  __int64 v484; // rcx
  int v485; // eax
  _DWORD *v486; // rax
  __int64 v487; // rbx
  __int64 v488; // rax
  __int64 v489; // rdx
  int v490; // ecx
  __int64 v491; // rax
  __int64 v492; // rax
  char *v493; // r15
  __int64 v494; // rbx
  __int64 v495; // rbx
  int v496; // edx
  int v497; // esi
  __int64 v498; // rax
  unsigned __int64 v499; // rax
  int v500; // ecx
  __int64 v501; // rdx
  __int64 v502; // rax
  _DWORD *v503; // rsi
  __int64 v504; // rdx
  __int64 v505; // rcx
  __int64 v506; // rdi
  int v507; // ebx
  unsigned __int8 *v508; // rax
  __int64 v509; // rax
  __int64 v510; // r12
  __int64 v511; // rbx
  __int64 v512; // rax
  int v513; // ecx
  __int64 v514; // rax
  __int64 v515; // rax
  __int64 v516; // r8
  __int64 v517; // r9
  char v518; // al
  unsigned int v519; // eax
  unsigned int *v520; // rax
  __int64 v521; // rax
  char v522; // r15
  __m128 *v523; // rax
  _DWORD *v524; // r11
  __int64 v525; // r11
  char v526; // r15
  char v527; // al
  _DWORD *v528; // r11
  __int64 v529; // r11
  char v530; // al
  char v531; // r10
  __m128 *v532; // rax
  __m128 *v533; // rsi
  _DWORD *v534; // r15
  char v535; // al
  char v536; // r10
  _DWORD *v537; // r15
  char v538; // al
  unsigned int v539; // eax
  unsigned int v540; // r12d
  int v541; // eax
  signed int v542; // edi
  int v543; // edx
  signed int v544; // esi
  int v545; // eax
  int v546; // ecx
  int v547; // ecx
  __int64 v548; // rax
  __int64 v549; // rax
  int v550; // eax
  int v551; // eax
  char *v552; // r15
  int v553; // ebx
  __int64 v554; // rdx
  __int64 v555; // rcx
  unsigned int *v556; // rax
  __int64 v557; // rdx
  __int64 v558; // rbx
  __int64 v559; // rax
  unsigned __int8 *v560; // rsi
  char *v561; // rbx
  __int64 v562; // rdx
  __int64 v563; // rcx
  int v564; // eax
  __int64 v565; // rdx
  unsigned __int64 v566; // r12
  int v567; // ecx
  __int64 v568; // rdi
  __int64 v569; // rax
  unsigned int v570; // eax
  char *v571; // r12
  int v572; // esi
  unsigned __int64 v573; // rcx
  __int64 v574; // rax
  __int64 v575; // rdx
  __int64 v576; // rcx
  __int64 v577; // rdi
  char *v578; // rbx
  __int64 v579; // rax
  __int64 v580; // rax
  __int64 v581; // rdi
  char v582; // r10
  __m128 *v583; // rax
  __m128 *v584; // rsi
  _DWORD *v585; // r11
  __int64 v586; // r11
  char v587; // al
  char v588; // r10
  _DWORD *v589; // r11
  __int64 v590; // r11
  char v591; // al
  __int64 v592; // rax
  unsigned __int64 v593; // rax
  unsigned __int64 v594; // rdi
  unsigned __int64 v595; // rax
  __int64 v596; // rax
  char v597; // r12
  int v598; // eax
  char v599; // al
  __int64 v600; // r12
  unsigned __int8 *v601; // rbx
  unsigned __int8 *v602; // r12
  __int64 v603; // rdx
  char *v604; // rbx
  __int64 v605; // rsi
  unsigned __int64 *v606; // rax
  _DWORD *v607; // r11
  char v608; // al
  __int64 v609; // r11
  char v610; // al
  _DWORD *v611; // r11
  char v612; // al
  __int64 v613; // r11
  char v614; // al
  __int64 v615; // rax
  unsigned int v616; // edx
  bool v617; // cc
  __int64 v618; // rbx
  int v619; // ecx
  __int64 v620; // rdx
  unsigned __int64 v621; // rbx
  int v622; // edx
  __int64 v623; // rdx
  __int64 v624; // rax
  int v625; // r13d
  int v626; // r12d
  __int64 v627; // rdx
  unsigned int v628; // eax
  __int64 v629; // r8
  __int64 v630; // rax
  __int64 v631; // rax
  char *v632; // rbx
  __int64 v633; // rax
  char v634; // dl
  __int64 v635; // rax
  int v636; // eax
  _DWORD *v637; // r15
  char v638; // al
  unsigned __int64 v639; // r12
  __int64 v640; // rbx
  __int64 v641; // rbx
  __int64 v642; // rdx
  __int64 v643; // rcx
  __int64 v644; // rbx
  unsigned int v645; // eax
  __int64 v646; // rdx
  __int64 v647; // rcx
  __int64 v648; // rbx
  unsigned int v649; // eax
  int v650; // ebx
  __m128i v651; // xmm0
  _DWORD *v652; // r15
  char v653; // al
  int v654; // eax
  int v655; // ecx
  __int64 v656; // rsi
  _QWORD *v657; // rcx
  unsigned __int64 v658; // rbx
  int v659; // r8d
  _QWORD *v660; // rax
  char *v661; // rbx
  unsigned int v662; // eax
  __m128 *v663; // rax
  _DWORD *v664; // r11
  __int64 v665; // r11
  char v666; // r15
  __int64 v667; // r10
  char v668; // al
  char *v669; // rbx
  __int64 v670; // rdx
  __int64 v671; // rcx
  _DWORD *v672; // r11
  __int64 v673; // r11
  char v674; // al
  char v675; // r10
  __int64 v676; // rax
  __int64 v677; // rsi
  unsigned __int64 v678; // rax
  int v679; // eax
  __int64 v680; // rdx
  __int64 v681; // rcx
  unsigned __int64 v682; // r15
  void *v683; // r12
  __int64 v684; // rdi
  void *v685; // rax
  __int64 *v686; // r15
  int v687; // eax
  int v688; // edx
  _DWORD *v689; // rdi
  __int64 v690; // rdx
  __int64 v691; // rcx
  __int64 v692; // rax
  char *v693; // rbx
  int v694; // eax
  char v695; // r13
  __m128 *v696; // rax
  __m128 *v697; // rsi
  _DWORD *v698; // r11
  __int64 *v699; // r13
  __int64 v700; // r11
  char v701; // al
  _DWORD *v702; // r11
  __int64 v703; // r11
  char v704; // al
  __int64 v705; // rcx
  __int64 v706; // rax
  __int64 v707; // rax
  __int64 v708; // rdx
  __int64 v709; // rdi
  int v710; // ecx
  __int64 v711; // rbx
  unsigned int v712; // eax
  _DWORD *v713; // rdi
  __int64 v714; // rax
  __int64 v715; // rbx
  unsigned int *v716; // rdx
  char *v717; // rsi
  char *v718; // rbx
  _DWORD *v719; // r11
  __int64 v720; // r11
  char v721; // al
  _DWORD *v722; // r11
  __int64 v723; // r11
  char v724; // al
  __int64 v725; // rax
  unsigned __int64 *v726; // r15
  int v727; // ecx
  __int64 v728; // rbx
  _DWORD *v729; // rcx
  int v730; // eax
  __int64 v731; // rcx
  __int64 v732; // rdx
  char v733; // al
  unsigned __int64 *v734; // rbx
  _DWORD *v735; // r9
  _DWORD *v736; // r8
  char v737; // al
  _DWORD *v738; // r9
  unsigned int v739; // eax
  unsigned __int64 v740; // rax
  __int64 v741; // rcx
  _BYTE *v742; // rsi
  _BYTE *v743; // rax
  char v744; // dl
  _BYTE *v745; // rbx
  unsigned int v746; // eax
  char *v747; // rsi
  char *v748; // rbx
  __int64 v749; // rax
  unsigned __int64 v750; // [rsp-10h] [rbp-1A0h]
  int v751; // [rsp+0h] [rbp-190h]
  unsigned __int64 v752; // [rsp+8h] [rbp-188h]
  _QWORD *v753; // [rsp+10h] [rbp-180h]
  char *v754; // [rsp+18h] [rbp-178h]
  char v755; // [rsp+18h] [rbp-178h]
  __int64 v757; // [rsp+28h] [rbp-168h]
  __int64 v758; // [rsp+30h] [rbp-160h]
  __m128i *v759; // [rsp+38h] [rbp-158h]
  __m128i v760; // [rsp+40h] [rbp-150h] BYREF
  int **v761; // [rsp+50h] [rbp-140h]
  char *v762; // [rsp+58h] [rbp-138h]
  unsigned __int8 *v763; // [rsp+60h] [rbp-130h]
  bool v764; // [rsp+6Ah] [rbp-126h]
  char v765; // [rsp+6Bh] [rbp-125h]
  unsigned int v766; // [rsp+6Ch] [rbp-124h]
  char v767; // [rsp+77h] [rbp-119h] BYREF
  __int128 v768; // [rsp+78h] [rbp-118h] BYREF
  _BYTE *v769; // [rsp+88h] [rbp-108h] BYREF
  unsigned __int8 *v770[2]; // [rsp+90h] [rbp-100h] BYREF
  unsigned int *v771; // [rsp+A0h] [rbp-F0h] BYREF
  _BYTE *v772; // [rsp+A8h] [rbp-E8h]
  __int64 v773; // [rsp+B0h] [rbp-E0h] BYREF
  void *src[4]; // [rsp+B8h] [rbp-D8h] BYREF
  __int128 v775; // [rsp+D8h] [rbp-B8h] BYREF
  __m128 *v776; // [rsp+E8h] [rbp-A8h]
  __int128 v777; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v778; // [rsp+100h] [rbp-90h]
  unsigned int v779; // [rsp+108h] [rbp-88h]
  _BYTE v780[64]; // [rsp+110h] [rbp-80h] BYREF
  signed int v781; // [rsp+150h] [rbp-40h]
  unsigned __int64 v782; // [rsp+158h] [rbp-38h]

  v9 = a1;
  v10 = -1;
  v763 = (unsigned __int8 *)a2;
  v759 = (__m128i *)a3;
  v758 = a4;
  v761 = a5;
  v782 = __readfsqword(0x28u);
  v767 = 0;
  v764 = a3 == 0;
  *((_QWORD *)&v11 + 1) = a3 == 0;
  v760.m128i_i8[0] = 0;
  *(_QWORD *)&v768 = 0;
  v765 = BYTE8(v11) | (a1 != (unsigned int *)a4);
  v757 = (__int64)(a1 + 8);
  while ( 2 )
  {
    v766 = v10 + 1;
    v12 = sub_154E90((__int64)v9, *((__int64 *)&v11 + 1), a3, a4);
    if ( v12 )
      goto LABEL_33;
    if ( v761 )
    {
      LODWORD(v762) = *(_DWORD *)v761;
      if ( (unsigned int)((_DWORD)v762 - 12) <= 1 )
        goto LABEL_6;
    }
    a7.m128i_i64[0] = 0;
    memset(src, 0, sizeof(src));
    v773 = (__int64)v763;
    v14 = *((_QWORD *)v9 + 3);
    v776 = nullptr;
    v778 = v14;
    LODWORD(v14) = *v9;
    v779 = 0;
    v775 = 0;
    v777 = 0;
    if ( (unsigned int)(v14 - 12) > 1 )
      goto LABEL_6;
    v762 = (char *)&v773;
    v8 = (unsigned __int64)&v773;
    sub_159480(&v773, v757, 0);
    *((_QWORD *)&v11 + 1) = v9 + 12;
    sub_159480(&v773, (__int64)(v9 + 12), *v9 == 13);
    a4 = v779;
    if ( !v779 )
    {
      v30 = (__int64)v776;
      v31 = 0;
      goto LABEL_80;
    }
    a3 = v777;
    if ( !(_QWORD)v777 )
    {
      if ( !under_debugger )
        sub_383060(52028);
      goto LABEL_2165;
    }
    if ( *v9 - 12 > 1 )
    {
LABEL_79:
      v30 = (__int64)v776;
      v31 = 1;
      goto LABEL_80;
    }
    if ( *((_BYTE *)v9 + 32) != 4 )
    {
      v32 = v776;
      a3 = (__int64)v776 + 8 * v777;
      if ( v776 != (__m128 *)a3 )
      {
        *((_QWORD *)&v11 + 1) = v766;
        a4 = v757;
        do
        {
          if ( v757 == v32->m128_u64[0] )
          {
            if ( (__m128 *)a3 == v32 )
              goto LABEL_95;
            goto LABEL_94;
          }
          v32 = (__m128 *)((char *)v32 + 8);
        }
        while ( (__m128 *)a3 != v32 );
        if ( *((_BYTE *)v9 + 48) != 4 )
          goto LABEL_96;
        goto LABEL_104;
      }
      goto LABEL_95;
    }
    a4 = *((_QWORD *)v9 + 5);
    if ( (unsigned int)(*(_DWORD *)a4 - 12) > 1 )
      goto LABEL_95;
    if ( *(_BYTE *)(a4 + 32) == 4 )
    {
      v199 = *(_QWORD *)(a4 + 40);
      if ( (unsigned int)(*(_DWORD *)v199 - 12) > 1 )
        goto LABEL_660;
      if ( *(_BYTE *)(v199 + 32) != 4 )
      {
        v200 = v776;
        a3 = (__int64)v776 + 8 * v777;
        if ( v776 != (__m128 *)a3 )
        {
          while ( v199 + 32 != v200->m128_u64[0] )
          {
            v200 = (__m128 *)((char *)v200 + 8);
            if ( (__m128 *)a3 == v200 )
              goto LABEL_1184;
          }
          if ( (__m128 *)a3 != v200 )
            goto LABEL_729;
        }
LABEL_1184:
        v201 = 0;
LABEL_730:
        if ( *(_BYTE *)(v199 + 48) != 4 )
        {
          v202 = v776;
          a3 = (__int64)v776 + 8 * v777;
          if ( v776 != (__m128 *)a3 )
          {
            while ( v199 + 48 != v202->m128_u64[0] )
            {
              v202 = (__m128 *)((char *)v202 + 8);
              if ( (__m128 *)a3 == v202 )
                goto LABEL_1216;
            }
            if ( (__m128 *)a3 != v202 )
              goto LABEL_736;
          }
          goto LABEL_1216;
        }
        v386 = *(_QWORD *)(v199 + 56);
        if ( (unsigned int)(*(_DWORD *)v386 - 12) > 1 )
        {
LABEL_1216:
          if ( v201 )
            goto LABEL_146;
          goto LABEL_660;
        }
        if ( *(_BYTE *)(v386 + 32) == 4 )
        {
          v719 = *(_DWORD **)(v386 + 40);
          if ( (unsigned int)(*v719 - 12) <= 1 )
          {
            v8 = (unsigned __int64)v762;
            LOBYTE(v754) = sub_14EBA0((__int64)v762, (__int64)(v719 + 8));
            v721 = sub_14EBA0(v8, v720 + 48);
            if ( !(_BYTE)v754 && !v721 )
            {
              a3 = 0;
              goto LABEL_1244;
            }
            goto LABEL_1243;
          }
        }
        else
        {
          v387 = v776;
          v388 = (__m128 *)((char *)v776 + 8 * v777);
          if ( v776 != v388 )
          {
            while ( v386 + 32 != v387->m128_u64[0] )
            {
              v387 = (__m128 *)((char *)v387 + 8);
              if ( v388 == v387 )
                goto LABEL_2068;
            }
            if ( v388 != v387 )
            {
LABEL_1243:
              a3 = 1;
              *(_WORD *)(v386 + 34) = 0;
LABEL_1244:
              if ( *(_BYTE *)(v386 + 48) == 4 )
              {
                v722 = *(_DWORD **)(v386 + 56);
                if ( (unsigned int)(*v722 - 12) <= 1 )
                {
                  v8 = (unsigned __int64)v762;
                  LOBYTE(v753) = a3;
                  LOBYTE(v754) = sub_14EBA0((__int64)v762, (__int64)(v722 + 8));
                  v724 = sub_14EBA0(v8, v723 + 48);
                  if ( (_BYTE)v754 )
                    goto LABEL_2078;
                  a3 = (unsigned __int8)v753;
                  if ( v724 )
                    goto LABEL_2078;
                }
              }
              else
              {
                v389 = v776;
                v390 = (__m128 *)((char *)v776 + 8 * v777);
                if ( v776 != v390 )
                {
                  while ( v386 + 48 != v389->m128_u64[0] )
                  {
                    v389 = (__m128 *)((char *)v389 + 8);
                    if ( v390 == v389 )
                      goto LABEL_2073;
                  }
                  if ( v390 != v389 )
                  {
LABEL_2078:
                    *(_WORD *)(v386 + 50) = 0;
LABEL_736:
                    *(_WORD *)(v199 + 50) = 0;
LABEL_146:
                    v8 = 0;
                    v13 = 1;
                    *(_WORD *)(a4 + 34) = 0;
                    goto LABEL_147;
                  }
                }
              }
LABEL_2073:
              if ( (_BYTE)a3 )
                goto LABEL_736;
              goto LABEL_1216;
            }
          }
        }
LABEL_2068:
        a3 = 0;
        goto LABEL_1244;
      }
      v413 = *(_QWORD *)(v199 + 40);
      if ( (unsigned int)(*(_DWORD *)v413 - 12) > 1 )
        goto LABEL_1184;
      if ( *(_BYTE *)(v413 + 32) == 4 )
      {
        v585 = *(_DWORD **)(v413 + 40);
        if ( (unsigned int)(*v585 - 12) > 1
          || (v8 = (unsigned __int64)v762,
              sub_14EBA0((__int64)v762, (__int64)(v585 + 8)),
              v587 = sub_14EBA0(v8, v586 + 48),
              !v588)
          && !v587 )
        {
LABEL_1741:
          v582 = 0;
          goto LABEL_1742;
        }
      }
      else
      {
        v414 = v776;
        a3 = (__int64)v776 + 8 * v777;
        if ( v776 == (__m128 *)a3 )
          goto LABEL_1741;
        while ( v413 + 32 != v414->m128_u64[0] )
        {
          v414 = (__m128 *)((char *)v414 + 8);
          if ( (__m128 *)a3 == v414 )
            goto LABEL_1741;
        }
        if ( (__m128 *)a3 == v414 )
          goto LABEL_1741;
      }
      a3 = 0;
      v582 = 1;
      *(_WORD *)(v413 + 34) = 0;
LABEL_1742:
      if ( *(_BYTE *)(v413 + 48) == 4 )
      {
        v589 = *(_DWORD **)(v413 + 56);
        if ( (unsigned int)(*v589 - 12) <= 1 )
        {
          v8 = (unsigned __int64)v762;
          LOBYTE(v754) = sub_14EBA0((__int64)v762, (__int64)(v589 + 8));
          v591 = sub_14EBA0(v8, v590 + 48);
          if ( (_BYTE)v754 || v591 )
          {
LABEL_1748:
            *(_WORD *)(v413 + 50) = 0;
            goto LABEL_729;
          }
        }
      }
      else
      {
        v583 = v776;
        v584 = (__m128 *)((char *)v776 + 8 * v777);
        if ( v776 != v584 )
        {
          a3 = v766;
          while ( v413 + 48 != v583->m128_u64[0] )
          {
            v583 = (__m128 *)((char *)v583 + 8);
            if ( v584 == v583 )
              goto LABEL_1753;
          }
          if ( v584 != v583 )
            goto LABEL_1748;
        }
      }
LABEL_1753:
      if ( !v582 )
        goto LABEL_1184;
LABEL_729:
      v201 = 1;
      *(_WORD *)(v199 + 34) = 0;
      goto LABEL_730;
    }
    v42 = v776;
    a3 = (__int64)v776 + 8 * v777;
    if ( v776 != (__m128 *)a3 )
    {
      while ( a4 + 32 != v42->m128_u64[0] )
      {
        v42 = (__m128 *)((char *)v42 + 8);
        if ( (__m128 *)a3 == v42 )
          goto LABEL_660;
      }
      if ( (__m128 *)a3 != v42 )
        goto LABEL_146;
    }
LABEL_660:
    v13 = 0;
LABEL_147:
    *((_QWORD *)&v11 + 1) = a4 + 48;
    if ( *(_BYTE *)(a4 + 48) != 4 )
    {
      v43 = v776;
      a3 = (__int64)v776 + 8 * v777;
      if ( v776 != (__m128 *)a3 )
      {
        while ( *((_QWORD *)&v11 + 1) != v43->m128_u64[0] )
        {
          v43 = (__m128 *)((char *)v43 + 8);
          if ( (__m128 *)a3 == v43 )
            goto LABEL_657;
        }
        if ( v43 != (__m128 *)a3 )
          goto LABEL_153;
      }
      goto LABEL_657;
    }
    v196 = *(_QWORD *)(a4 + 56);
    if ( (unsigned int)(*(_DWORD *)v196 - 12) <= 1 )
    {
      if ( *(_BYTE *)(v196 + 32) != 4 )
      {
        v197 = v776;
        a3 = (__int64)v776 + 8 * v777;
        if ( v776 != (__m128 *)a3 )
        {
          while ( v196 + 32 != v197->m128_u64[0] )
          {
            v197 = (__m128 *)((char *)v197 + 8);
            if ( (__m128 *)a3 == v197 )
              goto LABEL_1188;
          }
          if ( (__m128 *)a3 != v197 )
          {
LABEL_714:
            v8 = 1;
            *(_WORD *)(v196 + 34) = 0;
            goto LABEL_715;
          }
        }
LABEL_1188:
        v8 = 0;
LABEL_715:
        *((_QWORD *)&v11 + 1) = v196 + 48;
        if ( *(_BYTE *)(v196 + 48) != 4 )
        {
          v198 = v776;
          a3 = (__int64)v776 + 8 * v777;
          if ( v776 != (__m128 *)a3 )
          {
            while ( *((_QWORD *)&v11 + 1) != v198->m128_u64[0] )
            {
              v198 = (__m128 *)((char *)v198 + 8);
              if ( (__m128 *)a3 == v198 )
                goto LABEL_1182;
            }
            if ( v198 != (__m128 *)a3 )
              goto LABEL_721;
          }
          goto LABEL_1182;
        }
        v411 = *(_QWORD *)(v196 + 56);
        if ( (unsigned int)(*(_DWORD *)v411 - 12) > 1 )
        {
LABEL_1182:
          if ( (_BYTE)v8 )
            goto LABEL_153;
          goto LABEL_657;
        }
        if ( *(_BYTE *)(v411 + 32) == 4 )
        {
          v607 = *(_DWORD **)(v411 + 40);
          if ( (unsigned int)(*v607 - 12) > 1 )
            goto LABEL_1779;
          v608 = sub_14EBA0((__int64)v762, (__int64)(v607 + 8));
          *((_QWORD *)&v11 + 1) = v609 + 48;
          v755 = v608;
          v610 = sub_14EBA0((__int64)v762, v609 + 48);
          if ( !v755 && !v610 )
            goto LABEL_1779;
        }
        else
        {
          v412 = (unsigned __int64 *)v776;
          *((_QWORD *)&v11 + 1) = (char *)v776 + 8 * v777;
          if ( v776 == *((__m128 **)&v11 + 1) )
            goto LABEL_1779;
          a3 = v766;
          while ( v411 + 32 != *v412 )
          {
            if ( *((unsigned __int64 **)&v11 + 1) == ++v412 )
              goto LABEL_1779;
          }
          if ( *((unsigned __int64 **)&v11 + 1) == v412 )
          {
LABEL_1779:
            LOBYTE(v754) = 0;
LABEL_1780:
            if ( *(_BYTE *)(v411 + 48) == 4 )
            {
              v611 = *(_DWORD **)(v411 + 56);
              if ( (unsigned int)(*v611 - 12) <= 1 )
              {
                v612 = sub_14EBA0((__int64)v762, (__int64)(v611 + 8));
                *((_QWORD *)&v11 + 1) = v613 + 48;
                LOBYTE(v753) = v612;
                v614 = sub_14EBA0((__int64)v762, v613 + 48);
                if ( (_BYTE)v753 || v614 )
                  goto LABEL_1786;
              }
            }
            else
            {
              v606 = (unsigned __int64 *)v776;
              *((_QWORD *)&v11 + 1) = (char *)v776 + 8 * v777;
              if ( v776 != *((__m128 **)&v11 + 1) )
              {
                a3 = v766;
                while ( v411 + 48 != *v606 )
                {
                  if ( *((unsigned __int64 **)&v11 + 1) == ++v606 )
                    goto LABEL_1791;
                }
                if ( *((unsigned __int64 **)&v11 + 1) != v606 )
                {
LABEL_1786:
                  *(_WORD *)(v411 + 50) = 0;
LABEL_721:
                  *(_WORD *)(v196 + 50) = 0;
LABEL_153:
                  *(_WORD *)(a4 + 50) = 0;
LABEL_94:
                  *((_WORD *)v9 + 17) = 0;
                  goto LABEL_95;
                }
              }
            }
LABEL_1791:
            if ( (_BYTE)v754 )
              goto LABEL_721;
            goto LABEL_1182;
          }
        }
        a3 = 0;
        LOBYTE(v754) = 1;
        *(_WORD *)(v411 + 34) = 0;
        goto LABEL_1780;
      }
      v398 = *(_QWORD *)(v196 + 40);
      if ( (unsigned int)(*(_DWORD *)v398 - 12) > 1 )
        goto LABEL_1188;
      if ( *(_BYTE *)(v398 + 32) == 4 )
      {
        v698 = *(_DWORD **)(v398 + 40);
        if ( (unsigned int)(*v698 - 12) > 1 )
          goto LABEL_2013;
        v699 = (__int64 *)v762;
        LOBYTE(v754) = sub_14EBA0((__int64)v762, (__int64)(v698 + 8));
        v701 = sub_14EBA0((__int64)v699, v700 + 48);
        if ( !(_BYTE)v754 && !v701 )
          goto LABEL_2013;
      }
      else
      {
        v399 = v776;
        v400 = (__m128 *)((char *)v776 + 8 * v777);
        if ( v776 == v400 )
          goto LABEL_2013;
        a3 = v766;
        while ( v398 + 32 != v399->m128_u64[0] )
        {
          v399 = (__m128 *)((char *)v399 + 8);
          if ( v400 == v399 )
            goto LABEL_2013;
        }
        if ( v400 == v399 )
        {
LABEL_2013:
          v695 = 0;
          goto LABEL_2014;
        }
      }
      v695 = 1;
      *(_WORD *)(v398 + 34) = 0;
LABEL_2014:
      if ( *(_BYTE *)(v398 + 48) == 4 )
      {
        v702 = *(_DWORD **)(v398 + 56);
        if ( (unsigned int)(*v702 - 12) <= 1 )
        {
          LOBYTE(v754) = sub_14EBA0((__int64)v762, (__int64)(v702 + 8));
          v704 = sub_14EBA0((__int64)v762, v703 + 48);
          if ( (_BYTE)v754 || v704 )
          {
LABEL_2020:
            *(_WORD *)(v398 + 50) = 0;
            goto LABEL_714;
          }
        }
      }
      else
      {
        v696 = v776;
        v697 = (__m128 *)((char *)v776 + 8 * v777);
        if ( v776 != v697 )
        {
          a3 = v766;
          while ( v398 + 48 != v696->m128_u64[0] )
          {
            v696 = (__m128 *)((char *)v696 + 8);
            if ( v697 == v696 )
              goto LABEL_2025;
          }
          if ( v696 != v697 )
            goto LABEL_2020;
        }
      }
LABEL_2025:
      if ( v695 )
        goto LABEL_714;
      goto LABEL_1188;
    }
LABEL_657:
    if ( (_BYTE)v13 )
      goto LABEL_94;
LABEL_95:
    if ( *((_BYTE *)v9 + 48) != 4 )
    {
LABEL_96:
      v30 = (__int64)v776;
      a3 = (__int64)v776 + 8 * v777;
      if ( v776 == (__m128 *)a3 )
      {
LABEL_489:
        v31 = 1;
        goto LABEL_80;
      }
      *((_QWORD *)&v11 + 1) = v766;
      v33 = (unsigned int **)v776;
      while ( v9 + 12 != *v33 )
      {
        if ( (unsigned int **)a3 == ++v33 )
        {
          v31 = 1;
          goto LABEL_80;
        }
      }
      if ( (unsigned int **)a3 == v33 )
        goto LABEL_489;
LABEL_101:
      *((_WORD *)v9 + 25) = 0;
      v31 = 1;
      goto LABEL_80;
    }
LABEL_104:
    a4 = *((_QWORD *)v9 + 7);
    if ( (unsigned int)(*(_DWORD *)a4 - 12) > 1 )
      goto LABEL_79;
    if ( *(_BYTE *)(a4 + 32) == 4 )
    {
      v192 = *(_QWORD *)(a4 + 40);
      if ( (unsigned int)(*(_DWORD *)v192 - 12) > 1 )
        goto LABEL_659;
      if ( *(_BYTE *)(v192 + 32) != 4 )
      {
        v193 = v776;
        a3 = (__int64)v776 + 8 * v777;
        if ( v776 != (__m128 *)a3 )
        {
          while ( v192 + 32 != v193->m128_u64[0] )
          {
            v193 = (__m128 *)((char *)v193 + 8);
            if ( (__m128 *)a3 == v193 )
              goto LABEL_1193;
          }
          if ( (__m128 *)a3 != v193 )
          {
LABEL_699:
            v8 = 0;
            v194 = 1;
            *(_WORD *)(v192 + 34) = 0;
            goto LABEL_700;
          }
        }
LABEL_1193:
        v194 = 0;
LABEL_700:
        if ( *(_BYTE *)(v192 + 48) != 4 )
        {
          v195 = v776;
          a3 = (__int64)v776 + 8 * v777;
          if ( v776 != (__m128 *)a3 )
          {
            while ( v192 + 48 != v195->m128_u64[0] )
            {
              v195 = (__m128 *)((char *)v195 + 8);
              if ( (__m128 *)a3 == v195 )
                goto LABEL_1191;
            }
            if ( v195 != (__m128 *)a3 )
              goto LABEL_706;
          }
          goto LABEL_1191;
        }
        v418 = *(_QWORD *)(v192 + 56);
        if ( (unsigned int)(*(_DWORD *)v418 - 12) > 1 )
        {
LABEL_1191:
          if ( v194 )
            goto LABEL_111;
          goto LABEL_659;
        }
        if ( *(_BYTE *)(v418 + 32) == 4 )
        {
          v524 = *(_DWORD **)(v418 + 40);
          if ( (unsigned int)(*v524 - 12) > 1 )
            goto LABEL_1634;
          v8 = (unsigned __int64)v762;
          v526 = sub_14EBA0((__int64)v762, (__int64)(v524 + 8));
          v527 = sub_14EBA0(v8, v525 + 48);
          if ( !v526 && !v527 )
            goto LABEL_1634;
        }
        else
        {
          v419 = v776;
          a3 = (__int64)v776 + 8 * v777;
          if ( v776 == (__m128 *)a3 )
            goto LABEL_1634;
          while ( v418 + 32 != v419->m128_u64[0] )
          {
            v419 = (__m128 *)((char *)v419 + 8);
            if ( (__m128 *)a3 == v419 )
              goto LABEL_1634;
          }
          if ( v419 == (__m128 *)a3 )
          {
LABEL_1634:
            v522 = 0;
LABEL_1635:
            if ( *(_BYTE *)(v418 + 48) == 4 )
            {
              v528 = *(_DWORD **)(v418 + 56);
              if ( (unsigned int)(*v528 - 12) <= 1 )
              {
                v8 = (unsigned __int64)v762;
                LOBYTE(v754) = sub_14EBA0((__int64)v762, (__int64)(v528 + 8));
                v530 = sub_14EBA0(v8, v529 + 48);
                a3 = (unsigned __int8)v754;
                if ( (_BYTE)v754 || v530 )
                  goto LABEL_1641;
              }
            }
            else
            {
              v523 = v776;
              a3 = (__int64)v776 + 8 * v777;
              if ( v776 != (__m128 *)a3 )
              {
                while ( v418 + 48 != v523->m128_u64[0] )
                {
                  v523 = (__m128 *)((char *)v523 + 8);
                  if ( (__m128 *)a3 == v523 )
                    goto LABEL_1646;
                }
                if ( v523 != (__m128 *)a3 )
                {
LABEL_1641:
                  *(_WORD *)(v418 + 50) = 0;
LABEL_706:
                  *(_WORD *)(v192 + 50) = 0;
LABEL_111:
                  v13 = 1;
                  *(_WORD *)(a4 + 34) = 0;
                  goto LABEL_112;
                }
              }
            }
LABEL_1646:
            if ( v522 )
              goto LABEL_706;
            goto LABEL_1191;
          }
        }
        v522 = 1;
        *(_WORD *)(v418 + 34) = 0;
        goto LABEL_1635;
      }
      v415 = *(_QWORD *)(v192 + 40);
      if ( (unsigned int)(*(_DWORD *)v415 - 12) > 1 )
        goto LABEL_1193;
      if ( *(_BYTE *)(v415 + 32) == 4 )
      {
        v664 = *(_DWORD **)(v415 + 40);
        if ( (unsigned int)(*v664 - 12) <= 1 )
        {
          v666 = sub_14EBA0((__int64)v762, (__int64)(v664 + 8));
          v668 = sub_14EBA0(v667, v665 + 48);
          if ( v666 || v668 )
            goto LABEL_1342;
        }
      }
      else
      {
        v416 = v776;
        a3 = (__int64)v776 + 8 * v777;
        if ( v776 != (__m128 *)a3 )
        {
          while ( v415 + 32 != v416->m128_u64[0] )
          {
            v416 = (__m128 *)((char *)v416 + 8);
            if ( (__m128 *)a3 == v416 )
              goto LABEL_1911;
          }
          if ( v416 != (__m128 *)a3 )
          {
LABEL_1342:
            v417 = 1;
            *(_WORD *)(v415 + 34) = 0;
            goto LABEL_1912;
          }
        }
      }
LABEL_1911:
      v417 = 0;
LABEL_1912:
      if ( *(_BYTE *)(v415 + 48) == 4 )
      {
        v672 = *(_DWORD **)(v415 + 56);
        if ( (unsigned int)(*v672 - 12) > 1 )
          goto LABEL_1926;
        v8 = (unsigned __int64)v762;
        sub_14EBA0((__int64)v762, (__int64)(v672 + 8));
        v674 = sub_14EBA0(v8, v673 + 48);
        if ( !v675 && !v674 )
          goto LABEL_1926;
      }
      else
      {
        v663 = v776;
        a3 = (__int64)v776 + 8 * v777;
        if ( v776 == (__m128 *)a3 )
          goto LABEL_1926;
        while ( v415 + 48 != v663->m128_u64[0] )
        {
          v663 = (__m128 *)((char *)v663 + 8);
          if ( (__m128 *)a3 == v663 )
            goto LABEL_1926;
        }
        if ( (__m128 *)a3 == v663 )
        {
LABEL_1926:
          if ( v417 )
            goto LABEL_699;
          goto LABEL_1193;
        }
      }
      *(_WORD *)(v415 + 50) = 0;
      goto LABEL_699;
    }
    v34 = v776;
    a3 = (__int64)v776 + 8 * v777;
    if ( v776 != (__m128 *)a3 )
    {
      while ( a4 + 32 != v34->m128_u64[0] )
      {
        v34 = (__m128 *)((char *)v34 + 8);
        if ( (__m128 *)a3 == v34 )
          goto LABEL_659;
      }
      if ( (__m128 *)a3 != v34 )
        goto LABEL_111;
    }
LABEL_659:
    v13 = 0;
LABEL_112:
    *((_QWORD *)&v11 + 1) = a4 + 48;
    if ( *(_BYTE *)(a4 + 48) != 4 )
    {
      v30 = (__int64)v776;
      a3 = (__int64)v776 + 8 * v777;
      if ( v776 != (__m128 *)a3 )
      {
        v35 = v776;
        while ( *((_QWORD *)&v11 + 1) != v35->m128_u64[0] )
        {
          v35 = (__m128 *)((char *)v35 + 8);
          if ( (__m128 *)a3 == v35 )
            goto LABEL_655;
        }
        if ( (__m128 *)a3 != v35 )
          goto LABEL_118;
      }
      goto LABEL_655;
    }
    v191 = *(_QWORD *)(a4 + 56);
    if ( (unsigned int)(*(_DWORD *)v191 - 12) <= 1 )
    {
      if ( *(_BYTE *)(v191 + 32) != 4 )
      {
        v249 = v776;
        a3 = (__int64)v776 + 8 * v777;
        if ( v776 != (__m128 *)a3 )
        {
          while ( v191 + 32 != v249->m128_u64[0] )
          {
            v249 = (__m128 *)((char *)v249 + 8);
            if ( (__m128 *)a3 == v249 )
              goto LABEL_1194;
          }
          if ( v249 != (__m128 *)a3 )
          {
LABEL_858:
            v250 = 1;
            *(_WORD *)(v191 + 34) = 0;
            goto LABEL_859;
          }
        }
LABEL_1194:
        v250 = 0;
LABEL_859:
        *((_QWORD *)&v11 + 1) = v191 + 48;
        if ( *(_BYTE *)(v191 + 48) != 4 )
        {
          v251 = v776;
          a3 = (__int64)v776 + 8 * v777;
          if ( v776 != (__m128 *)a3 )
          {
            while ( *((_QWORD *)&v11 + 1) != v251->m128_u64[0] )
            {
              v251 = (__m128 *)((char *)v251 + 8);
              if ( (__m128 *)a3 == v251 )
                goto LABEL_1195;
            }
            if ( v251 != (__m128 *)a3 )
              goto LABEL_865;
          }
          goto LABEL_1195;
        }
        v422 = *(_QWORD *)(v191 + 56);
        if ( (unsigned int)(*(_DWORD *)v422 - 12) <= 1 )
        {
          *((_QWORD *)&v11 + 1) = v422 + 32;
          if ( *(_BYTE *)(v422 + 32) == 4 )
          {
            v637 = *(_DWORD **)(v422 + 40);
            if ( (unsigned int)(*v637 - 12) > 1 )
              goto LABEL_1862;
            v8 = (unsigned __int64)v762;
            *((_QWORD *)&v11 + 1) = v637 + 12;
            LOBYTE(v754) = sub_14EBA0((__int64)v762, (__int64)(v637 + 8));
            v638 = sub_14EBA0(v8, (__int64)(v637 + 12));
            if ( (_BYTE)v754 || v638 )
              goto LABEL_1366;
            a3 = 0;
          }
          else
          {
            v423 = v776;
            v424 = (__m128 *)((char *)v776 + 8 * v777);
            if ( v776 != v424 )
            {
              while ( *((_QWORD *)&v11 + 1) != v423->m128_u64[0] )
              {
                v423 = (__m128 *)((char *)v423 + 8);
                if ( v424 == v423 )
                  goto LABEL_1862;
              }
              if ( v423 != v424 )
              {
LABEL_1366:
                a3 = 1;
                *(_WORD *)(v422 + 34) = 0;
                goto LABEL_1367;
              }
            }
LABEL_1862:
            a3 = 0;
          }
LABEL_1367:
          if ( *(_BYTE *)(v422 + 48) == 4 )
          {
            v652 = *(_DWORD **)(v422 + 56);
            if ( (unsigned int)(*v652 - 12) <= 1 )
            {
              v8 = (unsigned __int64)v762;
              LOBYTE(v754) = a3;
              *((_QWORD *)&v11 + 1) = v652 + 12;
              LOBYTE(v762) = sub_14EBA0((__int64)v762, (__int64)(v652 + 8));
              v653 = sub_14EBA0(v8, (__int64)(v652 + 12));
              if ( (_BYTE)v762 )
                goto LABEL_1373;
              a3 = (unsigned __int8)v754;
              if ( v653 )
                goto LABEL_1373;
            }
          }
          else
          {
            v425 = (unsigned __int64 *)v776;
            *((_QWORD *)&v11 + 1) = (char *)v776 + 8 * v777;
            if ( v776 != *((__m128 **)&v11 + 1) )
            {
              while ( v422 + 48 != *v425 )
              {
                if ( *((unsigned __int64 **)&v11 + 1) == ++v425 )
                  goto LABEL_1878;
              }
              if ( *((unsigned __int64 **)&v11 + 1) != v425 )
              {
LABEL_1373:
                *(_WORD *)(v422 + 50) = 0;
LABEL_865:
                *(_WORD *)(v191 + 50) = 0;
LABEL_118:
                *(_WORD *)(a4 + 50) = 0;
                v30 = (__int64)v776;
                goto LABEL_101;
              }
            }
          }
LABEL_1878:
          if ( (_BYTE)a3 )
            goto LABEL_865;
        }
LABEL_1195:
        if ( v250 )
          goto LABEL_118;
        goto LABEL_691;
      }
      v420 = *(_QWORD *)(v191 + 40);
      if ( (unsigned int)(*(_DWORD *)v420 - 12) > 1 )
        goto LABEL_1194;
      if ( *(_BYTE *)(v420 + 32) == 4 )
      {
        v534 = *(_DWORD **)(v420 + 40);
        if ( (unsigned int)(*v534 - 12) > 1 )
          goto LABEL_1652;
        v8 = (unsigned __int64)v762;
        sub_14EBA0((__int64)v762, (__int64)(v534 + 8));
        v535 = sub_14EBA0(v8, (__int64)(v534 + 12));
        if ( !v536 && !v535 )
          goto LABEL_1652;
      }
      else
      {
        v421 = v776;
        a3 = (__int64)v776 + 8 * v777;
        if ( v776 == (__m128 *)a3 )
          goto LABEL_1652;
        while ( v420 + 32 != v421->m128_u64[0] )
        {
          v421 = (__m128 *)((char *)v421 + 8);
          if ( (__m128 *)a3 == v421 )
            goto LABEL_1652;
        }
        if ( (__m128 *)a3 == v421 )
        {
LABEL_1652:
          v531 = 0;
          goto LABEL_1653;
        }
      }
      v531 = 1;
      *(_WORD *)(v420 + 34) = 0;
LABEL_1653:
      if ( *(_BYTE *)(v420 + 48) == 4 )
      {
        v537 = *(_DWORD **)(v420 + 56);
        if ( (unsigned int)(*v537 - 12) <= 1 )
        {
          v8 = (unsigned __int64)v762;
          LOBYTE(v754) = sub_14EBA0((__int64)v762, (__int64)(v537 + 8));
          v538 = sub_14EBA0(v8, (__int64)(v537 + 12));
          if ( (_BYTE)v754 || v538 )
          {
LABEL_1659:
            a3 = 0;
            *(_WORD *)(v420 + 50) = 0;
            goto LABEL_858;
          }
        }
      }
      else
      {
        v532 = v776;
        v533 = (__m128 *)((char *)v776 + 8 * v777);
        if ( v776 != v533 )
        {
          a3 = v766;
          while ( v420 + 48 != v532->m128_u64[0] )
          {
            v532 = (__m128 *)((char *)v532 + 8);
            if ( v533 == v532 )
              goto LABEL_1664;
          }
          if ( v533 != v532 )
            goto LABEL_1659;
        }
      }
LABEL_1664:
      if ( v531 )
        goto LABEL_858;
      goto LABEL_1194;
    }
LABEL_691:
    v30 = (__int64)v776;
LABEL_655:
    v31 = 1;
    if ( (_BYTE)v13 )
      goto LABEL_101;
LABEL_80:
    if ( v30 )
    {
      *(_QWORD *)&v777 = 0;
      qfree(v30);
    }
    if ( src[3] )
    {
      *(_QWORD *)&v775 = 0;
      qfree((__int64)src[3]);
    }
    if ( src[0] )
    {
      src[1] = nullptr;
      qfree((__int64)src[0]);
    }
    if ( v31 )
      goto LABEL_33;
LABEL_6:
    if ( !v760.m128i_i8[0] )
    {
      src[0] = nullptr;
      v773 = (__int64)&off_4DDD28;
      *((_QWORD *)&v775 + 1) = v763;
      LOBYTE(v775) = 0;
      v776 = (__m128 *)a6;
      *(_QWORD *)&v777 = 0;
      *((_QWORD *)&v777 + 1) = a8;
      src[1] = v759;
      *(_OWORD *)&src[2] = (unsigned __int64)v758;
      *((_QWORD *)&v11 + 1) = &v773;
      sub_11E900(v9, (__int64)&v773);
      if ( HIDWORD(v777) )
      {
        *((_QWORD *)&v11 + 1) = v766;
        v760.m128i_i8[0] = 1;
        v766 = HIDWORD(v777) + v766 - 1;
        goto LABEL_33;
      }
    }
    v15 = *v9;
    a3 = v15;
    switch ( (int)v15 )
    {
      case 0:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
        goto LABEL_20;
      case 1:
        if ( !v759 )
        {
          if ( (v9[1] & 0x10) != 0 )
          {
            if ( (_DWORD)v15 != 1 )
              goto LABEL_31;
            goto LABEL_122;
          }
LABEL_497:
          if ( *((_BYTE *)v9 + 32) != 4 || !sub_122600(*((unsigned int **)v9 + 5)) )
            goto LABEL_19;
          LODWORD(v15) = *v9;
          v9[1] |= 0x10u;
          LODWORD(a3) = v15;
          goto LABEL_20;
        }
        v21 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = v9 + 16;
        if ( !(unsigned __int8)sub_13CF50(
                                 (__int64)v759,
                                 (__int64)(v9 + 16),
                                 (__int64)v9,
                                 (__int64)(v9 + 12),
                                 (__int64)(v9 + 16),
                                 (__int64)(v9 + 8)) )
        {
          if ( (v9[1] & 0x10) != 0 )
            goto LABEL_19;
          goto LABEL_497;
        }
        goto LABEL_349;
      case 2:
        if ( !v759 )
          goto LABEL_26;
        v21 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = v9 + 8;
        if ( (unsigned __int8)sub_13CF50(
                                (__int64)v759,
                                (__int64)(v9 + 8),
                                (__int64)v9,
                                (__int64)(v9 + 8),
                                (__int64)(v9 + 12),
                                (__int64)(v9 + 16)) )
          goto LABEL_349;
LABEL_212:
        LODWORD(a3) = *v9;
        LODWORD(v15) = *v9;
        goto LABEL_20;
      case 3:
        *v9 = 4;
        goto LABEL_32;
      case 4:
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 16), 0) )
          goto LABEL_538;
        if ( !*((_BYTE *)v9 + 64) && v9 == (unsigned int *)v758 )
        {
          memset(src, 0, sizeof(src));
          v773 = (__int64)&off_4DDD00;
          *(_QWORD *)&v775 = *((_QWORD *)v763 + 12);
          if ( !(unsigned int)sub_11F760(v9, &v773) )
            goto LABEL_538;
        }
        *((_QWORD *)&v11 + 1) = v763;
        if ( (unsigned __int8)sub_11CD10(v760.m128i_i64[0], (__int64)v763)
          || (*((_QWORD *)&v11 + 1) = v763, (unsigned __int8)sub_11CD10((__int64)(v9 + 16), (__int64)v763))
          && (*((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 5), sub_14E700(*((_BYTE *)v9 + 32), *((__int64 *)&v11 + 1))) )
        {
          v9[1] |= 0x10u;
          *v9 = 67;
          goto LABEL_32;
        }
        if ( *((_BYTE *)v9 + 32) == 4 )
        {
          if ( sub_122600(*((unsigned int **)v9 + 5)) )
            v9[1] |= 0x10u;
          if ( (unsigned __int8)sub_32ED70(**((unsigned int **)v9 + 5)) )
          {
            v366 = *((_QWORD *)v9 + 5);
            v367 = *(_DWORD *)v366;
            if ( (unsigned int)(*(_DWORD *)v366 - 56) > 1 )
            {
              if ( *(_DWORD *)(v366 + 68) == v9[17] )
              {
                v78 = v9[1];
                if ( (v78 & 0x20000) != 0 )
                {
                  if ( !v759 )
                  {
                    if ( *((_BYTE *)v9 + 64) != 5 || *((_BYTE *)v9 + 32) != 6 || !(unsigned __int8)sub_14E100(v366) )
                      goto LABEL_160;
                    goto LABEL_539;
                  }
                  v518 = sub_178D10(v366, v759[30].m128i_i64[0]);
                  v366 = *((_QWORD *)v9 + 5);
                  if ( v518 )
                  {
                    *(_DWORD *)(v366 + 4) |= 0x20000u;
                    v366 = *((_QWORD *)v9 + 5);
                  }
                  v519 = *(_DWORD *)v366;
                  *v9 = *(_DWORD *)v366;
                  if ( v519 != 2 )
                    goto LABEL_1619;
                }
                else
                {
                  *v9 = v367;
                  if ( v367 != 2 || !v759 )
                    goto LABEL_1620;
                }
                sub_B57F0(v759[4].m128i_i64[0], *((_QWORD *)v9 + 3), *(_QWORD *)(v366 + 24));
                v366 = *((_QWORD *)v9 + 5);
LABEL_1619:
                v78 = v9[1];
LABEL_1620:
                if ( (*((_BYTE *)v9 + 33) & 0x20) != 0 )
                  *((_BYTE *)v9 + 65) |= 0x20u;
                v69 = (unsigned int *)v366;
                v21 = (char *)(v9 + 12);
                v762 = (char *)&v773;
                goto LABEL_517;
              }
              if ( !under_debugger )
                sub_383060(50502);
LABEL_2165:
              BUG();
            }
          }
        }
        if ( *((_BYTE *)v9 + 64) != 5 )
          goto LABEL_19;
        if ( *((_BYTE *)v9 + 32) != 6 || !(unsigned __int8)sub_14E100(*((_QWORD *)v9 + 5)) )
        {
          if ( v759 )
          {
            v184 = v759[4].m128i_i64[0];
            if ( *(_QWORD *)(v184 + 1352) == -1 )
              goto LABEL_19;
            *((_QWORD *)&v11 + 1) = &v773;
            v762 = (char *)&v773;
            if ( !(unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], &v773, 0) )
            {
              if ( *((_BYTE *)v9 + 32) != 10 )
                goto LABEL_19;
              v185 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)v185 != 6 )
                goto LABEL_19;
              v186 = *(_QWORD *)(v185 + 8);
              v187 = 8 * v9[9];
              v188 = 0;
              *((_QWORD *)&v11 + 1) = v187;
              if ( (unsigned __int64)v187 <= 0x3F )
                v188 = 1LL << v187;
              v773 = v186 & (v188 - 1);
            }
            if ( *(_QWORD *)(v184 + 1352) != v773 )
              goto LABEL_19;
            *((_QWORD *)&v11 + 1) = v762;
            *(_QWORD *)&v11 = v759[4].m128i_i64[0];
            v189 = (unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v9 + 9) + 8LL) + *(_QWORD *)(v11 + 1440));
            src[0] = (void *)(int)v9[17];
            v773 = (__int64)v189;
            sub_F7AC0(v11, (__int64)v762);
            LODWORD(v15) = *v9;
            LODWORD(a3) = *v9;
            goto LABEL_20;
          }
          goto LABEL_160;
        }
        goto LABEL_538;
      case 5:
        v8 = (unsigned __int64)&v768;
        *((_QWORD *)&v11 + 1) = &v768;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 1u) )
        {
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_19;
          v69 = *((unsigned int **)v9 + 5);
          v79 = *v69;
          if ( *v69 != 5 )
          {
            if ( v79 == 7 )
            {
              sub_120A10((__int64)(v9 + 12), (__int64)v763, 1, v9[9], *((_QWORD *)v69 + 3), 0);
              v69 = *((unsigned int **)v9 + 5);
              *v9 = 12;
              v762 = (char *)&v773;
              goto LABEL_519;
            }
            if ( v79 != 13 )
            {
              if ( (v79 & 0xFFFFFFFD) == 8 )
              {
                if ( *((_BYTE *)v69 + 32) != 4 )
                  goto LABEL_19;
                v80 = *((int **)v69 + 5);
                v81 = *v80;
              }
              else
              {
                v81 = *v69;
                v80 = *((int **)v9 + 5);
              }
              if ( ((v81 - 14) & 0xFFFFFFFD) != 0 )
              {
                if ( v79 != 12 || !v759 )
                  goto LABEL_19;
              }
              else
              {
                *((_QWORD *)&v11 + 1) = 0;
                v82 = sub_11C8A0((__int64)v80, nullptr);
                if ( v82 )
                {
                  *((_QWORD *)&v11 + 1) = v763;
                  v83 = sub_120B00(v82, (__int64)v763, *(_QWORD *)(*(_QWORD *)(v82 + 8) + 16LL));
                  v69 = *((unsigned int **)v9 + 5);
                  if ( v83 )
                  {
                    a7.m128i_i64[0] = 0;
                    v605 = *((_QWORD *)v9 + 5);
                    *(_QWORD *)&v775 = 0;
                    src[3] = (void *)0xFFFFFFFF00000000LL;
                    *((_QWORD *)&v775 + 1) = 0xFFFFFFFF00000000LL;
                    v777 = 0xFFFFFFFF00000000LL;
                    v762 = (char *)&v773;
                    v776 = nullptr;
                    *(_OWORD *)src = 0;
                    sub_1253A0((__int64)&v773, v605);
                    sub_11CA10((char *)&v777, (char *)v9 + 64);
                    *((_QWORD *)&v11 + 1) = v762;
                    sub_11D7A0((__int64)v9, (__int64)v762);
                    sub_11CDA0((__int64)&v777);
                    sub_11CDA0((__int64)&v775 + 8);
                    sub_11CDA0((__int64)&src[3]);
                    goto LABEL_32;
                  }
                  v84 = *v69;
                }
                else
                {
                  v69 = *((unsigned int **)v9 + 5);
                  v84 = *v69;
                }
                if ( v84 != 12 || !v759 )
                {
LABEL_300:
                  if ( v84 != 13 )
                    goto LABEL_19;
                  goto LABEL_301;
                }
              }
              *((_QWORD *)&v11 + 1) = v770;
              v406 = sub_11C8E0((__int64)v69, v770, 9);
              if ( v406 )
              {
                if ( *(_BYTE *)(v406 + 32) == 4 )
                {
                  v689 = *(_DWORD **)(v406 + 40);
                  if ( *v689 == 32 )
                  {
                    *((_QWORD *)&v11 + 1) = &v771;
                    *(_QWORD *)&v11 = sub_11C8A0((__int64)v689, &v771);
                    if ( (_QWORD)v11 )
                    {
                      *((_QWORD *)&v11 + 1) = 0;
                      if ( sub_A2350(v11, 0, 0) )
                      {
                        *((_QWORD *)&v11 + 1) = v771;
                        if ( v771[1] == *((_DWORD *)v770[0] + 1) )
                        {
                          v762 = (char *)&v773;
                          sub_123A40((__int64)&v773, (unsigned __int8 *)v771, v690, v691);
                          sub_B1520(
                            (__int64)v759,
                            v758,
                            (__int64)&v773,
                            v758,
                            (__int64)&v773,
                            v758,
                            (__int64)v770[0],
                            0);
                          sub_1207E0((char *)&v773, (__int64)v763, 5, *((_QWORD *)v9 + 3), SHIDWORD(v773));
                          *((_QWORD *)&v11 + 1) = &v773;
                          sub_11CA10((char *)v760.m128i_i64[0], (char *)&v773);
                          *v9 = 11;
                          sub_11CDA0((__int64)&v773);
                          goto LABEL_32;
                        }
                      }
                    }
                  }
                }
              }
              v69 = *((unsigned int **)v9 + 5);
              v84 = *v69;
              goto LABEL_300;
            }
            if ( !v759 || *((_BYTE *)v69 + 32) == 1 && *(_DWORD *)(v759[4].m128i_i64[0] + 1184) == v69[10] )
            {
LABEL_301:
              *((_QWORD *)&v11 + 1) = &v773;
              v762 = (char *)&v773;
              if ( !(unsigned __int8)sub_11FD80((char *)v69 + 48, &v773, 1u) )
                goto LABEL_19;
              if ( v773 != 1 )
                goto LABEL_19;
              v85 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)(v85 + 32) != 4 )
                goto LABEL_19;
              v86 = *(_QWORD *)(v85 + 40);
              v87 = v85 + 32;
              if ( *(_DWORD *)v86 == 9 )
              {
                if ( *(_BYTE *)(v86 + 32) != 4 )
                  goto LABEL_19;
                v87 = v86 + 32;
              }
              v88 = *(unsigned int **)(v87 + 8);
              v89 = *v88;
              if ( (_DWORD)v89 == 29 )
              {
                *v88 = 39;
                sub_120A10((__int64)(v88 + 12), (__int64)v763, 0, v88[9], *((_QWORD *)v88 + 3), 0);
              }
              else
              {
                v90 = sub_32E9E0(v89);
                if ( !v90 )
                  goto LABEL_19;
                *v88 = v90;
              }
              v91 = v762;
              v773 = 0xFFFFFFFF00000000LL;
              src[0] = nullptr;
              sub_11CA10(v762, (char *)(*((_QWORD *)v9 + 5) + 32LL));
              sub_11CA10((char *)v760.m128i_i64[0], v91);
              v21 = (char *)(v9 + 12);
              sub_11CDA0((__int64)v91);
              goto LABEL_283;
            }
            sub_11CA10((char *)v69 + 32, (char *)v69 + 48);
            *v9 = 13;
LABEL_887:
            v69 = *((unsigned int **)v9 + 5);
LABEL_888:
            v21 = (char *)(v9 + 12);
            v762 = (char *)&v773;
            goto LABEL_516;
          }
LABEL_1149:
          *v9 = 4;
          v762 = (char *)&v773;
          goto LABEL_519;
        }
        *(_QWORD *)&v768 = -(__int64)v768;
        goto LABEL_259;
      case 6:
        v8 = (unsigned __int64)&v768;
        *((_QWORD *)&v11 + 1) = &v768;
        v70 = v9 + 8;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 0) )
        {
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_19;
          v71 = *((_DWORD **)v9 + 5);
          v72 = *v71;
          if ( *v71 == 6 )
          {
            *((_QWORD *)&v11 + 1) = v763;
            if ( sub_11FDE0((__int64)(v71 + 8), (__int64)v763) )
            {
              v69 = *((unsigned int **)v9 + 5);
              *v9 = 4;
              v762 = (char *)&v773;
              goto LABEL_519;
            }
            if ( *((_BYTE *)v9 + 32) != 4 )
              goto LABEL_19;
            v71 = *((_DWORD **)v9 + 5);
            v72 = *v71;
          }
          if ( v72 == 9 )
          {
            v70 = v71 + 8;
            v73 = *((_BYTE *)v71 + 32);
          }
          else
          {
            v73 = *((_BYTE *)v9 + 32);
          }
          if ( v73 != 4 )
            goto LABEL_19;
          v74 = *((unsigned int **)v70 + 1);
          v75 = *v74;
          if ( (_DWORD)v75 == 29 )
          {
            *v74 = 39;
            v21 = (char *)(v9 + 12);
            sub_120A10((__int64)(v74 + 12), (__int64)v763, 0, v74[9], *((_QWORD *)v74 + 3), 0);
            v762 = (char *)&v773;
          }
          else
          {
            v76 = sub_32E9E0(v75);
            if ( !v76 )
              goto LABEL_19;
            *v74 = v76;
            v21 = (char *)(v9 + 12);
            v762 = (char *)&v773;
          }
LABEL_283:
          v69 = *((unsigned int **)v9 + 5);
          v77 = *v69;
          *v9 = *v69;
          if ( (unsigned int)(v77 - 8) <= 1 && v69[9] == v9[17] )
          {
            *v9 = 4;
            v78 = v9[1];
LABEL_517:
            v9[1] = v69[1] & 0xFFDFF7FF | v78 & 0x210000;
            sub_11CA10(v21, (char *)v69 + 48);
LABEL_518:
            v69 = *((unsigned int **)v9 + 5);
            goto LABEL_519;
          }
LABEL_516:
          v78 = v9[1];
          goto LABEL_517;
        }
        *(_QWORD *)&v768 = v768 == 0;
        goto LABEL_259;
      case 7:
        v8 = (unsigned __int64)&v768;
        *((_QWORD *)&v11 + 1) = &v768;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 0) )
        {
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_19;
          v69 = *((unsigned int **)v9 + 5);
          if ( *v69 == 7 )
            goto LABEL_1149;
          if ( *v69 != 5 )
            goto LABEL_19;
          if ( *((_BYTE *)v69 + 32) != 4 )
            goto LABEL_273;
          v439 = *((_DWORD **)v69 + 5);
          if ( *v439 == 9 )
          {
            if ( *((_BYTE *)v439 + 32) != 4 )
              goto LABEL_273;
            v440 = v439 + 8;
          }
          else
          {
            v440 = v69 + 8;
          }
          v441 = *((unsigned int **)v440 + 1);
          v442 = *v441;
          if ( (_DWORD)v442 == 29 )
          {
            *v441 = 39;
            sub_120A10((__int64)(v441 + 12), (__int64)v763, 0, v441[9], *((_QWORD *)v441 + 3), 0);
            goto LABEL_1430;
          }
          v443 = sub_32E9E0(v442);
          if ( v443 )
          {
            *v441 = v443;
LABEL_1430:
            *v9 = 5;
            goto LABEL_887;
          }
          v69 = *((unsigned int **)v9 + 5);
          if ( *v69 != 5 )
            goto LABEL_19;
LABEL_273:
          *((_QWORD *)&v11 + 1) = v763;
          v21 = (char *)(v9 + 12);
          sub_120A10((__int64)(v69 + 12), (__int64)v763, 1, v69[9], *((_QWORD *)v69 + 3), 0);
          **((_DWORD **)v9 + 5) = 13;
          goto LABEL_349;
        }
        *(_QWORD *)&v768 = ~(_QWORD)v768;
        goto LABEL_259;
      case 8:
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_65;
        v69 = *((unsigned int **)v9 + 5);
        if ( *v69 != 9 )
          goto LABEL_65;
        *v9 = 9;
        v762 = (char *)&v773;
        goto LABEL_519;
      case 9:
LABEL_65:
        if ( v761 )
        {
          if ( *(_DWORD *)v761 == 20 )
          {
            *((_QWORD *)&v11 + 1) = &v771;
            if ( (unsigned __int8)sub_11E2C0(v761, &v771, &v773, 0) )
            {
              v183 = sub_11CA90((int)v771 + (int)v773);
              *((_QWORD *)&v11 + 1) = v761;
              if ( v183 != *((_DWORD *)v761 + 17) && v183 < (int)v9[9] )
              {
                *((_QWORD *)&v11 + 1) = v763;
                if ( (unsigned __int8)sub_1272B0((unsigned __int64)(v9 + 8), (__int64)v763, v183, 0) )
                  goto LABEL_32;
              }
            }
          }
        }
        v28 = *((_BYTE *)v9 + 32);
        if ( v28 == 10 )
        {
          *((_QWORD *)&v11 + 1) = v763;
          v29 = v9[17];
          a3 = *((unsigned int *)v763 + 21);
          if ( v29 <= (int)a3 )
          {
            v9[9] = v29;
            v21 = (char *)(v9 + 12);
            goto LABEL_349;
          }
          if ( v9[9] != (_DWORD)a3 )
          {
            v9[9] = a3;
            goto LABEL_32;
          }
        }
        else
        {
          if ( v28 == 4 )
          {
            a3 = *((_QWORD *)v9 + 5);
            v145 = *(_DWORD *)a3;
            if ( (*(_DWORD *)a3 & 0xFFFFFFFD) != 5 )
            {
              v29 = v9[17];
              if ( v145 == 10 && *(_BYTE *)(a3 + 32) == 10 )
              {
                v146 = *(_QWORD *)(a3 + 40);
                if ( *(_BYTE *)v146 == 6 && *(_DWORD *)(a3 + 36) == v29 )
                {
                  v147 = 8 * *(_DWORD *)(a3 + 68) - (*v9 == 8);
                  if ( (unsigned __int64)v147 > 0x3F
                    || (*((_QWORD *)&v11 + 1) = -1LL << v147, (*(_QWORD *)(v146 + 8) & (-1LL << v147)) == 0) )
                  {
                    *((_QWORD *)&v11 + 1) = a3 + 32;
                    v21 = (char *)(v9 + 12);
                    sub_11CA10((char *)v9 + 32, (char *)(a3 + 32));
                    goto LABEL_349;
                  }
                }
              }
              goto LABEL_70;
            }
            if ( *(_BYTE *)(a3 + 32) == 4 )
            {
              v231 = *(_QWORD *)(a3 + 40);
              if ( *(_DWORD *)v231 == 10 )
              {
                *(_DWORD *)a3 = 10;
                v232 = *(_DWORD *)(v231 + 4);
                *(_DWORD *)v231 = v145;
                v233 = *(_DWORD *)(a3 + 4);
                *(_DWORD *)(a3 + 4) = v232;
                *((_QWORD *)&v11 + 1) = *(_QWORD *)(v231 + 24);
                *(_DWORD *)(v231 + 4) = v233;
                v234 = *(_QWORD *)(a3 + 24);
                *(_QWORD *)(a3 + 24) = *((_QWORD *)&v11 + 1);
                *(_QWORD *)(v231 + 24) = v234;
                a4 = *(unsigned int *)(v231 + 36);
                *(_DWORD *)(a3 + 36) = a4;
                *(_DWORD *)(v231 + 68) = a4;
                goto LABEL_32;
              }
            }
          }
          v29 = v9[17];
        }
LABEL_70:
        if ( v29 <= 8 )
        {
          v8 = (unsigned __int64)&v768;
          v190 = *v9 == 8;
          *((_QWORD *)&v11 + 1) = &v768;
          v760.m128i_i64[0] = (__int64)(v9 + 8);
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, v190) )
          {
            v21 = (char *)(v9 + 12);
            *((_QWORD *)&v11 + 1) = v763;
            sub_120A10(
              v760.m128i_i64[0],
              (__int64)v763,
              v768,
              v9[17],
              **((_QWORD **)v9 + 5),
              *(_DWORD *)(*((_QWORD *)v9 + 5) + 8LL));
            goto LABEL_349;
          }
        }
        LODWORD(v15) = *v9;
        LODWORD(a3) = *v9;
        if ( *v9 != 9 )
        {
          if ( v759 )
            goto LABEL_20;
          goto LABEL_26;
        }
        if ( *((_BYTE *)v9 + 32) != 4 )
        {
          if ( !v759 )
            goto LABEL_31;
          goto LABEL_688;
        }
        if ( **((_DWORD **)v9 + 5) != 20 )
        {
          if ( !v759 )
            goto LABEL_31;
LABEL_1079:
          if ( *((_BYTE *)v9 + 32) != 4 )
          {
LABEL_688:
            if ( !v765 )
              goto LABEL_25;
            goto LABEL_31;
          }
          if ( (unsigned int)sub_14E760(**((_DWORD **)v9 + 5)) == 1
            && (!v761 || (unsigned int)sub_14E760(*(_DWORD *)v761) != 2) )
          {
            *((_QWORD *)&v11 + 1) = v758;
            *(_QWORD *)&v11 = v759;
            if ( (unsigned __int8)sub_1299D0(v11, (char *)v9 + 32, 0) )
            {
              *v9 = 8;
              goto LABEL_32;
            }
            goto LABEL_19;
          }
          if ( v765 )
            goto LABEL_31;
LABEL_24:
          if ( *((_BYTE *)v9 + 32) == 4 )
            goto LABEL_156;
          goto LABEL_25;
        }
        *((_QWORD *)&v11 + 1) = 20;
        if ( sub_11CC20((__int64)v763, 0x14u, v9[17]) )
        {
          *((_QWORD *)&v11 + 1) = &v771;
          v461 = sub_11C8A0(*((_QWORD *)v9 + 5), &v771);
          if ( v461 )
          {
            if ( *(_BYTE *)v771 == 4 )
            {
              v462 = *((_QWORD *)v771 + 1);
              if ( *(_DWORD *)v462 == 10 )
              {
                *((_QWORD *)&v11 + 1) = v9[17];
                if ( *(_DWORD *)(v462 + 36) == DWORD2(v11) )
                {
                  v762 = (char *)&v773;
                  sub_123A40((__int64)&v773, (unsigned __int8 *)(v462 + 32), v459, v460);
                  sub_11CA10((char *)v771, (char *)&v773);
                  sub_120A10(
                    v461,
                    (__int64)v763,
                    *(_QWORD *)(*(_QWORD *)(v461 + 8) + 16LL),
                    v771[1],
                    **(_QWORD **)(v461 + 8),
                    0);
                  *v9 = 20;
                  v21 = (char *)(v9 + 12);
                  sub_11CDA0((__int64)&v773);
                  v69 = *((unsigned int **)v9 + 5);
                  v78 = v9[1];
                  goto LABEL_517;
                }
              }
            }
          }
        }
        LODWORD(v15) = *v9;
        if ( !v759 )
          goto LABEL_25;
        if ( (_DWORD)v15 == 9 )
          goto LABEL_1079;
LABEL_908:
        LODWORD(a3) = v15;
        goto LABEL_20;
      case 10:
        *((_QWORD *)&v11 + 1) = v763;
        if ( (unsigned __int8)sub_12D880((__int64)v9, (__int64)v763, (__int64)v759, v758, v761) )
          goto LABEL_32;
        if ( *((_BYTE *)v9 + 32) == 4 && **((_DWORD **)v9 + 5) == 2 )
        {
          *((_QWORD *)&v11 + 1) = v759;
          if ( (unsigned __int8)sub_151440(*((_QWORD *)v763 + 12), (__int64)v759, (__int64)v9, a8) )
            goto LABEL_32;
        }
        goto LABEL_19;
      case 11:
        *((_QWORD *)&v11 + 1) = v758;
        if ( (unsigned __int8)sub_118AF0((__int64)v759, v758, (__int64)v761, (__int64)v9) )
          goto LABEL_32;
        v67 = *((_BYTE *)v9 + 32);
        if ( v67 != 4 )
          goto LABEL_254;
        v69 = *((unsigned int **)v9 + 5);
        switch ( *v69 )
        {
          case 2u:
            *((_QWORD *)&v11 + 1) = v759;
            if ( (unsigned __int8)sub_151440(*((_QWORD *)v763 + 12), (__int64)v759, (__int64)v9, a8) )
              goto LABEL_32;
            goto LABEL_961;
          case 4u:
            v762 = (char *)&v773;
            sub_123A40((__int64)&v773, (unsigned __int8 *)v69 + 32, a3, a4);
            *((_QWORD *)&v11 + 1) = v763;
            if ( (unsigned __int8)sub_127850((unsigned __int64)&v773, (__int64)v763, v9[17], 0) )
            {
              v451 = (__int64 *)v762;
              *((_QWORD *)&v11 + 1) = v762;
              sub_125180((__int64)(v9 + 8), (unsigned __int8 *)v762);
              *v9 = 4;
              sub_11CDA0((__int64)v451);
              goto LABEL_32;
            }
            sub_11CDA0((__int64)v762);
            v67 = *((_BYTE *)v9 + 32);
            goto LABEL_254;
          case 5u:
            if ( *((_BYTE *)v69 + 32) != 14 )
              goto LABEL_19;
            v292 = *((_QWORD *)v69 + 5);
            if ( *(_BYTE *)v292 != 4 || **(_DWORD **)(v292 + 8) != 5 )
              goto LABEL_19;
            src[0] = nullptr;
            v773 = 0xFFFFFFFF00000000LL;
            v293 = *(_QWORD *)(v292 + 8);
            v762 = (char *)&v773;
            sub_11CA10((char *)&v773, (char *)(v293 + 32));
            *((_QWORD *)&v11 + 1) = *((_QWORD *)v69 + 5);
            sub_11CA10((char *)&v773, *((char **)&v11 + 1));
            sub_11CDA0((__int64)&v773);
            goto LABEL_32;
          case 7u:
            if ( *((_BYTE *)v69 + 32) != 14 )
              goto LABEL_19;
            v291 = *((_QWORD *)v69 + 5);
            *((_QWORD *)&v11 + 1) = v9[17];
            if ( *(_DWORD *)(v291 + 20) != DWORD2(v11) )
              goto LABEL_19;
            v762 = (char *)&v773;
            sub_123A40((__int64)&v773, (unsigned __int8 *)(v291 + 16), a3, a4);
            *((_QWORD *)&v11 + 1) = &v773;
            sub_11CA10((char *)v9 + 32, (char *)&v773);
            *v9 = 4;
            sub_11CDA0((__int64)&v773);
            goto LABEL_32;
          case 8u:
            v8 = (unsigned __int64)&v768;
            *((_QWORD *)&v11 + 1) = &v768;
            if ( !(unsigned __int8)sub_11FD80((char *)v69 + 32, &v768, 1u) )
            {
              if ( v759 )
              {
                *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 5) + 32LL;
                if ( (unsigned __int8)sub_12CF30(
                                        v759[4].m128i_i64[0],
                                        *((__int64 *)&v11 + 1),
                                        (unsigned __int8 *)v9 + 64,
                                        (__int64)(v9 + 16),
                                        1,
                                        v15) )
                {
                  v69 = *((unsigned int **)v9 + 5);
                  *v9 = *v69;
                  v762 = (char *)&v773;
                  goto LABEL_519;
                }
              }
              v309 = *((_QWORD *)v9 + 5);
              if ( (int)(v9[17] + *(_DWORD *)(v309 + 36)) <= (int)v9[9] )
              {
                *((_QWORD *)&v11 + 1) = v758;
                *(_QWORD *)&v11 = v759;
                if ( (unsigned __int8)sub_1299D0(v11, (char *)(v309 + 32), 0) )
                  goto LABEL_258;
              }
              goto LABEL_961;
            }
            *(_QWORD *)&v768 = (__int64)v768 >> 63;
            goto LABEL_259;
          case 0xBu:
            goto LABEL_888;
          case 0xEu:
            *((_QWORD *)&v11 + 1) = &v773;
            v302 = sub_11C8A0(*((_QWORD *)v9 + 5), &v773);
            if ( !v302 )
              goto LABEL_961;
            *((_QWORD *)&v11 + 1) = *(unsigned int *)(v302 + 4);
            v303 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v302 + 8) + 16LL), *((_QWORD *)&v11 + 1), 0);
            v304 = 8 * (v9[9] - v9[17]);
            v305 = v303;
            if ( (unsigned __int64)v304 > 0x3F )
            {
              if ( !v303 )
              {
                sub_11CA10((char *)v773, (char *)v9 + 48);
                sub_12B320((__int64)(v9 + 12), (__int64)v763, *((_QWORD *)v9 + 3), v9[17]);
                v306 = *((_QWORD *)v9 + 3);
                v760.m128i_i64[0] = (__int64)(v9 + 8);
                v307 = v9[17];
                goto LABEL_993;
              }
            }
            else if ( (v303 & ~(-1LL << v304)) == 0 )
            {
              sub_11CA10((char *)v773, (char *)v9 + 48);
              sub_12B320((__int64)(v9 + 12), (__int64)v763, *((_QWORD *)v9 + 3), v9[17]);
              v306 = *((_QWORD *)v9 + 3);
              v760.m128i_i64[0] = (__int64)(v9 + 8);
              v307 = v9[17];
              v305 >>= v304;
LABEL_993:
              *((_QWORD *)&v11 + 1) = v763;
              sub_120A10(v760.m128i_i64[0], (__int64)v763, v305, v307, v306, 0);
              *v9 = 14;
              goto LABEL_32;
            }
LABEL_961:
            v67 = *((_BYTE *)v9 + 32);
LABEL_254:
            if ( v67 != 10 )
              goto LABEL_19;
            v68 = *((_QWORD *)v9 + 5);
            if ( *(_BYTE *)v68 != 6 )
              goto LABEL_19;
            a4 = 8 * v9[17];
            if ( (unsigned __int64)(int)a4 <= 0x3F && (*(_QWORD *)(v68 + 8) & (-1LL << (8 * *((_BYTE *)v9 + 68)))) != 0 )
              goto LABEL_19;
            goto LABEL_258;
          case 0x13u:
          case 0x15u:
            *((_QWORD *)&v11 + 1) = &v771;
            v290 = sub_11C8E0(*((_QWORD *)v9 + 5), &v771, 9);
            if ( v290 )
            {
              a3 = v9[9] - *(_DWORD *)(v290 + 36);
              if ( (_DWORD)a3 == v9[17] )
              {
                v762 = (char *)&v773;
                sub_123A40((__int64)&v773, (unsigned __int8 *)v771, a3, a4);
                *((_QWORD *)&v11 + 1) = &v773;
                sub_11CA10((char *)v69 + 32, (char *)&v773);
                sub_11CDA0((__int64)(v69 + 12));
                *v69 = 4;
                sub_11CDA0((__int64)&v773);
                goto LABEL_32;
              }
            }
            v69 = *((unsigned int **)v9 + 5);
LABEL_960:
            if ( *((_BYTE *)v69 + 32) != 14 )
              goto LABEL_961;
            *((_QWORD *)&v11 + 1) = v9[17];
            if ( *(_DWORD *)(*((_QWORD *)v69 + 5) + 20LL) != DWORD2(v11) )
              goto LABEL_961;
            sub_123A40((__int64)&v771, (unsigned __int8 *)v69 + 48, a3, a4);
            *((_QWORD *)&v11 + 1) = v763;
            if ( (unsigned __int8)sub_1279B0((unsigned __int64)&v771, (__int64)v763, *((_QWORD *)v9 + 3), v9[17]) )
            {
              v556 = *((unsigned int **)v9 + 5);
              v762 = (char *)&v773;
              v557 = *v556;
              *v9 = v557;
              sub_123A40((__int64)&v773, (unsigned __int8 *)(*((_QWORD *)v556 + 5) + 16LL), v557, v450);
              sub_11CA10((char *)v9 + 32, (char *)&v773);
              *((_QWORD *)&v11 + 1) = &v771;
              sub_11CA10((char *)v9 + 48, (char *)&v771);
              sub_11CDA0((__int64)&v773);
              sub_11CDA0((__int64)&v771);
              goto LABEL_32;
            }
            sub_11CDA0((__int64)&v771);
            v67 = *((_BYTE *)v9 + 32);
            goto LABEL_254;
          case 0x14u:
            goto LABEL_960;
          case 0x17u:
            if ( *((_BYTE *)v69 + 48) == 2 && (int)(8 * v9[17]) <= *(unsigned __int8 *)(*((_QWORD *)v69 + 7) + 16LL) )
              goto LABEL_258;
            goto LABEL_19;
          default:
            goto LABEL_19;
        }
      case 12:
        v21 = (char *)(v9 + 12);
        v8 = (unsigned __int64)v763;
        *((_QWORD *)&v11 + 1) = v9 + 8;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_151FF0(
                                (__int64)v763,
                                (__int64)(v9 + 8),
                                (__int64)v759,
                                (__int64)v9,
                                0,
                                (__int64)(v9 + 12)) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v9 + 12;
        if ( (unsigned __int8)sub_151FF0(v8, (__int64)(v9 + 12), (__int64)v759, (__int64)v9, 0, (__int64)(v9 + 8)) )
          goto LABEL_32;
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 12), 0)
          && !(unsigned __int8)sub_1205A0(v9, (__int64)v763, 0, v62, v63, v64)
          && *((_BYTE *)v9 + 32) != 10 )
        {
          v65 = v9[9];
          v66 = *((_QWORD *)v9 + 3);
          *v9 = 14;
          *((_QWORD *)&v11 + 1) = v763;
          sub_120A10(v760.m128i_i64[0], (__int64)v763, 2, v65, v66, 0);
          goto LABEL_32;
        }
        if ( (unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], nullptr, 0) && *((_BYTE *)v9 + 48) != 2 )
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
        if ( v759 )
        {
          *((_QWORD *)&v11 + 1) = v759;
          if ( (unsigned __int8)sub_118900((__int64)v763, (__int64)v759, v758, v9) )
            goto LABEL_32;
        }
        v8 = (unsigned __int64)&v768;
        if ( !(unsigned __int8)sub_159410((__int64)(v9 + 12), &v768, 1u) )
          goto LABEL_627;
        if ( (*((_BYTE *)v9 + 49) & 0x20) != 0 )
          goto LABEL_1228;
        v360 = v768;
        v361 = *((_BYTE *)v9 + 32);
        if ( !v759 || (__int64)v768 <= 0 || v361 != 10 )
          goto LABEL_1132;
        v464 = *((_QWORD *)v9 + 5);
        v762 = (char *)&v773;
        if ( *(_BYTE *)v464 != 6 )
          goto LABEL_628;
        v8 = v759[4].m128i_u64[0];
        if ( *(_QWORD *)(v464 + 8) == *(_QWORD *)(v8 + 1352) )
          goto LABEL_628;
        v762 = *(char **)(v464 + 8);
        if ( (unsigned __int8)is_spec_ea() || v360 < get_item_end() - (__int64)v762 || (v8 = getseg(), v8 != getseg()) )
        {
          v361 = *((_BYTE *)v9 + 32);
LABEL_1132:
          v762 = (char *)&v773;
          if ( v361 != 4 )
            goto LABEL_628;
          v362 = *((int **)v9 + 5);
          v363 = *v362;
        }
        else
        {
LABEL_1228:
          v384 = *((_BYTE *)v9 + 32);
          if ( v384 == 10 )
          {
            v385 = *((_QWORD *)v9 + 5);
            if ( *(_BYTE *)v385 == 6 )
            {
LABEL_1233:
              *((_QWORD *)&v11 + 1) = v763;
              *(_QWORD *)(v385 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v763 + 12) + 24LL) + 16LL)
                                    & (*(_QWORD *)(v385 + 8) + v768);
              goto LABEL_349;
            }
            goto LABEL_627;
          }
          if ( v384 != 4 )
          {
LABEL_627:
            v762 = (char *)&v773;
            goto LABEL_628;
          }
          v362 = *((int **)v9 + 5);
          v363 = *v362;
          if ( *v362 == 10 )
          {
            v55 = *((_BYTE *)v362 + 32) == 10;
            v762 = (char *)&v773;
            if ( v55 )
            {
              v385 = *((_QWORD *)v362 + 5);
              if ( *(_BYTE *)v385 == 6 )
                goto LABEL_1233;
            }
            goto LABEL_628;
          }
        }
        v762 = (char *)&v773;
        if ( v363 != 12 )
          goto LABEL_628;
        v364 = v362 + 8;
        if ( *((_BYTE *)v362 + 32) != 10 )
        {
          if ( *((_BYTE *)v362 + 48) != 10 )
            goto LABEL_628;
          v364 = v362 + 12;
        }
        if ( (*((_BYTE *)v9 + 49) & 0x20) == 0 )
        {
          v365 = *((_QWORD *)v364 + 1);
          v762 = (char *)&v773;
          if ( *(_BYTE *)v365 != 6 || (v8 = *(_QWORD *)(v365 + 8), v8 != getinf()) )
          {
LABEL_628:
            *((_QWORD *)&v11 + 1) = v762;
            if ( (unsigned __int8)sub_11FD80(v21, v762, 0) && !v773 )
              goto LABEL_349;
            if ( *((_BYTE *)v9 + 32) == 10 )
            {
              v356 = *((_BYTE *)v9 + 48);
              if ( v356 == 10 )
              {
                v426 = *((_QWORD *)v9 + 7);
                if ( *(_BYTE *)v426 == 6 && !*(_QWORD *)(v426 + 8) )
                  goto LABEL_349;
              }
              else if ( v356 == 2 )
              {
                v8 = *((_QWORD *)v9 + 5);
                if ( *(_BYTE *)v8 == 6 )
                {
                  v357 = *(_QWORD *)(v8 + 8);
                  if ( !v357 )
                  {
                    *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 7);
                    v358 = sub_14E8A0(v9[13], *((__int64 *)&v11 + 1));
                    *(_BYTE *)v8 = 6;
                    v359 = 8 * *((_DWORD *)v763 + 21);
                    LODWORD(v762) = *((_DWORD *)v763 + 21);
                    if ( (unsigned __int64)v359 <= 0x3F )
                      v357 = 1LL << v359;
                    *(_QWORD *)(v8 + 8) = v358 & (v357 - 1);
                    goto LABEL_349;
                  }
                }
              }
            }
            v8 = (unsigned __int64)&v768;
            *((_QWORD *)&v11 + 1) = &v768;
            if ( (unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], &v768, *v9 == 12)
              && (*((_BYTE *)v9 + 32) != 2 || (*((_BYTE *)v9 + 33) & 8) == 0) )
            {
              *((_QWORD *)&v11 + 1) = (char *)&v768 + 8;
              if ( (unsigned __int8)sub_11FD80(v21, (_QWORD *)&v768 + 1, *v9 == 12) )
              {
                if ( *((_BYTE *)v9 + 48) != 2 || (*((_BYTE *)v9 + 49) & 8) == 0 )
                {
                  v171 = *v9;
                  if ( *v9 == 19 )
                  {
                    *(_QWORD *)&v768 = *((_QWORD *)&v768 + 1) | v768;
                  }
                  else if ( v171 == 21 )
                  {
                    *(_QWORD *)&v768 = *((_QWORD *)&v768 + 1) ^ v768;
                  }
                  else if ( v171 == 12 )
                  {
                    v8 = v9[9];
                    v172 = *((_QWORD *)&v768 + 1);
                    v173 = sub_32ABC0(v768, v8, 1);
                    *(_QWORD *)&v768 = sub_32ABC0(v172, (unsigned int)v8, 1) + v173;
                  }
                  if ( v9[9] == 8 && DWORD1(v768) && *((_DWORD *)v763 + 21) == 8 && (unsigned __int8)is_mapped() )
                  {
                    v174 = v768;
                    sub_11CDA0(v760.m128i_i64[0]);
                    v175 = v763;
                    *((_BYTE *)v9 + 32) = 6;
                    LODWORD(v175) = *((_DWORD *)v175 + 21);
                    v176 = (unsigned int)(8 * (_DWORD)v175);
                    LODWORD(v762) = (_DWORD)v175;
                    v177 = 0;
                    if ( (unsigned __int64)(int)v176 <= 0x3F )
                      v177 = 1LL << v176;
                    *((_QWORD *)&v11 + 1) = v763;
                    *(_QWORD *)&v11 = v760.m128i_i64[0];
                    *((_QWORD *)v9 + 5) = v174 & (v177 - 1);
                    sub_11C950((unsigned __int8 *)v11, *((__int64 *)&v11 + 1), (int)v176, v176);
                    sub_11CDA0((__int64)v21);
                    *v9 = 4;
                    goto LABEL_32;
                  }
                  goto LABEL_259;
                }
              }
            }
            LODWORD(v15) = *v9;
            LODWORD(a3) = *v9;
            if ( *v9 != 12 )
              goto LABEL_20;
            if ( !v759 )
            {
LABEL_1044:
              if ( !(unsigned __int8)sub_159410((__int64)v21, &v768, 1u) )
                goto LABEL_1048;
              v329 = *((_BYTE *)v9 + 32);
              if ( v329 != 10 )
              {
                if ( v329 == 4 )
                {
                  v515 = *((_QWORD *)v9 + 5);
                  if ( *(_DWORD *)v515 == 13
                    && *(_BYTE *)(v515 + 32) == 10
                    && **(_BYTE **)(v515 + 40) == 6
                    && (unsigned __int8)sub_11FD80((char *)(v515 + 48), (_QWORD *)&v768 + 1, 1u)
                    && (unsigned __int8)sub_14E580((__int64)v759, a8, v768, *((__int64 *)&v768 + 1)) )
                  {
                    v480 = v9[9];
                    v481 = v516 - v517;
LABEL_1535:
                    sub_120A10((__int64)v21, (__int64)v763, v481, v480, *((_QWORD *)v9 + 3), 0);
                    v69 = *((unsigned int **)v9 + 5);
                    goto LABEL_519;
                  }
                }
                goto LABEL_1047;
              }
              v487 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)v487 == 5 )
              {
                v8 = v768;
                v639 = *((_QWORD *)v763 + 12);
                LODWORD(v754) = v9[9];
                v640 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v487 + 8) + 8LL), (unsigned int)v754, 1);
                v641 = sub_32ABC0(v8, (unsigned int)v754, 1) + v640;
                *((_QWORD *)&v11 + 1) = (int)v641;
                if ( *(_DWORD *)(*(_QWORD *)(v639 + 24) + 24LL) == 8 )
                  *((_QWORD *)&v11 + 1) = v641;
                if ( (unsigned __int8)sub_1599D0(*((_QWORD *)v9 + 5), *((__int64 *)&v11 + 1), (__int64)v759, a8) )
                  goto LABEL_349;
              }
              else if ( *(_BYTE *)v487 == 6 && (a8 & 1) != 0 )
              {
                v488 = sub_15A410(*(_QWORD *)(v487 + 8), v768, v9[9]);
                goto LABEL_1548;
              }
LABEL_1047:
              if ( *((_BYTE *)v9 + 48) == 2 && (__int64)v768 < 0 )
              {
                *((_QWORD *)&v11 + 1) = v763;
                if ( (unsigned __int8)sub_120B00((__int64)v21, (__int64)v763, v768) )
                {
                  *v9 = 13;
                  goto LABEL_32;
                }
              }
LABEL_1048:
              v332 = sub_11C8E0((__int64)v9, v770, 5);
              if ( v332 )
              {
                sub_123A40((__int64)&v771, v770[0], v330, v331);
                v333 = (unsigned __int8 *)(v332 + 32);
                v334 = (unsigned __int8 *)v762;
                sub_123A40((__int64)v762, v333, v335, v336);
                sub_125180(v760.m128i_i64[0], (unsigned __int8 *)&v771);
                *((_QWORD *)&v11 + 1) = v334;
                sub_125180((__int64)v21, v334);
                *v9 = 13;
                sub_11CDA0((__int64)v334);
                sub_11CDA0((__int64)&v771);
                goto LABEL_32;
              }
              *((_QWORD *)&v11 + 1) = &v771;
              v391 = sub_11C8E0((__int64)v9, &v771, 13);
              v392 = v391;
              if ( v391 )
              {
                *((_QWORD *)&v11 + 1) = v771;
                if ( sub_125B60((unsigned __int8 *)(v391 + 48), (__int64)v771, 0) )
                {
                  v716 = v771;
                  if ( *(_BYTE *)v771 == 4 )
                  {
                    *((_QWORD *)&v11 + 1) = v763;
                    if ( (unsigned __int8)sub_1205A0(*((_BYTE **)v771 + 1), (__int64)v763, 0, v393, v394, v395) )
                      goto LABEL_1256;
                    v716 = v771;
                  }
                  *((_QWORD *)&v11 + 1) = v759;
                  if ( sub_14F260(*((_QWORD *)v763 + 12), (__int64)v759, (__int64)v716) )
                  {
                    src[0] = nullptr;
                    v717 = (char *)(v392 + 32);
                    v718 = v762;
                    v773 = 0xFFFFFFFF00000000LL;
                    sub_11CA10(v762, v717);
                    *((_QWORD *)&v11 + 1) = v718;
                    sub_11CA10((char *)v760.m128i_i64[0], v718);
                    sub_11CDA0((__int64)v718);
                    goto LABEL_349;
                  }
                }
              }
LABEL_1256:
              if ( (unsigned __int8)sub_14DB30(v9) )
                goto LABEL_32;
              v11 = (unsigned __int64)sub_11C8E0((__int64)v9, nullptr, 7);
              if ( (_QWORD)v11 )
              {
                if ( (unsigned __int8)sub_14F6A0(v11) )
                  goto LABEL_32;
              }
              if ( (unsigned __int8)sub_11FD80(v21, (_QWORD *)&v768 + 1, 1u) )
              {
                if ( v768 < 0 )
                {
                  *((_QWORD *)&v11 + 1) = v763;
                  if ( (unsigned __int8)sub_120B00((__int64)v21, (__int64)v763, *((__int64 *)&v768 + 1)) )
                    goto LABEL_2054;
                }
              }
              if ( *((_BYTE *)v9 + 48) == 4 )
              {
                v713 = *((_DWORD **)v9 + 7);
                if ( *v713 == 14 )
                {
                  v714 = sub_11C8A0((__int64)v713, nullptr);
                  v715 = v714;
                  if ( v714 )
                  {
                    *((_QWORD *)&v768 + 1) = sub_14E8B0(*(_DWORD *)(v714 + 4), *(_QWORD *)(v714 + 8));
                    if ( v768 < 0 )
                    {
                      *((_QWORD *)&v11 + 1) = v763;
                      if ( (unsigned __int8)sub_120B00(v715, (__int64)v763, *((__int64 *)&v768 + 1)) )
                      {
LABEL_2054:
                        *v9 = 13;
                        goto LABEL_32;
                      }
                    }
                  }
                  if ( *((_BYTE *)v9 + 32) != 4 )
                  {
LABEL_2058:
                    if ( *((_BYTE *)v9 + 48) != 4 )
                    {
LABEL_1263:
                      *((_QWORD *)&v11 + 1) = v9;
                      if ( (unsigned __int8)sub_14F770((__int64)v763, (__int64)v9) )
                        goto LABEL_32;
                      *((_QWORD *)&v11 + 1) = v9;
                      if ( (unsigned __int8)sub_14F2F0((__int64)v763, (__int64)v9) )
                        goto LABEL_32;
                      v396 = v760.m128i_i64[0];
                      v8 = v758;
                      *((_QWORD *)&v11 + 1) = v759;
                      if ( (unsigned __int8)sub_1194E0((int *)v9, (__int64)v759, v758, v760.m128i_i64[0], (__int64)v21) )
                        goto LABEL_32;
                      *((_QWORD *)&v11 + 1) = v759;
                      if ( (unsigned __int8)sub_1194E0((int *)v9, (__int64)v759, v758, (__int64)v21, v396) )
                        goto LABEL_32;
                      if ( v759 )
                      {
                        *((_QWORD *)&v11 + 1) = v758;
                        if ( (unsigned __int8)sub_158D70(v759, v758, (__int64)v9) )
                          goto LABEL_32;
                      }
                      *((_QWORD *)&v11 + 1) = v758;
                      if ( (unsigned __int8)sub_118AF0((__int64)v759, v758, (__int64)v761, (__int64)v9) )
                        goto LABEL_32;
                      v397 = (unsigned __int64 *)v763;
                      *((_QWORD *)&v11 + 1) = v759;
                      if ( (unsigned __int8)sub_189DE0(v763, v759, v758, v9) )
                        goto LABEL_32;
                      *((_QWORD *)&v11 + 1) = v397;
                      if ( (unsigned __int8)sub_151A60((__int64)v9, (__int64)v397) )
                        goto LABEL_32;
                      goto LABEL_19;
                    }
LABEL_2051:
                    *((_QWORD *)&v11 + 1) = v763;
                    if ( (unsigned __int8)sub_15A480(
                                            (__int64)v9,
                                            (__int64)v763,
                                            (__int64)v759,
                                            (__int64)v21,
                                            v760.m128i_i64[0],
                                            v758) )
                      goto LABEL_32;
                    goto LABEL_1263;
                  }
                }
                else if ( *((_BYTE *)v9 + 32) != 4 )
                {
                  goto LABEL_2051;
                }
              }
              else if ( *((_BYTE *)v9 + 32) != 4 )
              {
                goto LABEL_1263;
              }
              *((_QWORD *)&v11 + 1) = v763;
              if ( (unsigned __int8)sub_15A480(
                                      (__int64)v9,
                                      (__int64)v763,
                                      (__int64)v759,
                                      v760.m128i_i64[0],
                                      (__int64)v21,
                                      v758) )
                goto LABEL_32;
              goto LABEL_2058;
            }
            v326 = v759[4].m128i_i64[0];
            if ( *(_QWORD *)(v326 + 1352) == -1 )
              goto LABEL_1213;
            if ( *((_BYTE *)v9 + 48) == 5 )
            {
              if ( (unsigned __int8)sub_159410(v760.m128i_i64[0], v762, 0) && *(_QWORD *)(v326 + 1352) == v773 )
              {
                v378 = (__int64)v21;
                goto LABEL_1208;
              }
              v327 = *((_BYTE *)v9 + 32);
              if ( v327 != 5 )
                goto LABEL_1040;
              if ( *(_QWORD *)(v326 + 1352) == -1 )
                goto LABEL_1042;
            }
            else
            {
              v327 = *((_BYTE *)v9 + 32);
              if ( v327 != 5 )
                goto LABEL_1040;
            }
            if ( !(unsigned __int8)sub_159410((__int64)v21, v762, 0) || *(_QWORD *)(v326 + 1352) != v773 )
            {
LABEL_1213:
              v327 = *((_BYTE *)v9 + 32);
LABEL_1040:
              if ( v327 != 14 || *((_BYTE *)v9 + 48) != 14 )
              {
LABEL_1042:
                v328 = sub_11C8E0((__int64)v9, &v771, 9);
                if ( v328 )
                {
                  if ( *(_BYTE *)v771 == 14 )
                  {
                    v492 = *((_QWORD *)v771 + 1);
                    if ( *(_DWORD *)(v492 + 20) == *(_DWORD *)(v328 + 36) )
                    {
                      if ( (unsigned __int8)sub_14EFD0((__int64)v759, v758, v328 + 32, v328 + 32, v492 + 16, 0) )
                      {
                        v493 = v762;
                        src[0] = nullptr;
                        v773 = 0xFFFFFFFF00000000LL;
                        sub_11CA10(v762, (char *)(v328 + 32));
                        sub_11CA10(v493, (char *)v771);
                        sub_11CA10((char *)src[0], (char *)(v328 + 32));
                        *((_QWORD *)&v11 + 1) = v763;
                        v766 += sub_15BC70(v328, (_DWORD)v763, (_DWORD)v759, v758, (_DWORD)v9, (_DWORD)a6, 2);
                        sub_11CDA0((__int64)v493);
                        goto LABEL_32;
                      }
                    }
                  }
                }
                goto LABEL_1044;
              }
              v741 = *((_QWORD *)v9 + 5);
              src[0] = nullptr;
              v773 = 0xFFFFFFFF00000000LL;
              if ( (unsigned __int8)sub_14EFD0((__int64)v759, v758, (__int64)v762, v741, *((_QWORD *)v9 + 7) + 16LL, 0)
                && (unsigned __int8)sub_157240((__int64)v759, *((_QWORD *)v9 + 7), *((_QWORD *)v9 + 5) + 16LL) )
              {
                sub_11CA10((char *)(*((_QWORD *)v9 + 5) + 16LL), (char *)(*((_QWORD *)v9 + 7) + 16LL));
                *((_QWORD *)&v11 + 1) = v762;
                sub_11CA10((char *)v760.m128i_i64[0], v762);
              }
              else if ( (unsigned __int8)sub_14EFD0(
                                           (__int64)v759,
                                           v758,
                                           (__int64)v762,
                                           *((_QWORD *)v9 + 7),
                                           *((_QWORD *)v9 + 5) + 16LL,
                                           0)
                     && (unsigned __int8)sub_157240((__int64)v759, *((_QWORD *)v9 + 5), *((_QWORD *)v9 + 7) + 16LL) )
              {
                sub_11CA10((char *)(*((_QWORD *)v9 + 5) + 16LL), (char *)(*((_QWORD *)v9 + 7) + 16LL));
                *((_QWORD *)&v11 + 1) = v762;
                sub_11CA10(v21, v762);
              }
              else
              {
                v742 = *((_BYTE **)v9 + 5);
                v743 = *((_BYTE **)v9 + 7);
                if ( *v742 != v743[16]
                  || (v744 = v742[16], *v743 != v744)
                  || *v742 == v744
                  || !(unsigned __int8)sub_157240((__int64)v759, (__int64)v742, (__int64)(v743 + 16))
                  || !(unsigned __int8)sub_157240((__int64)v759, *((_QWORD *)v9 + 7), *((_QWORD *)v9 + 5) + 16LL) )
                {
                  sub_11CDA0((__int64)v762);
                  goto LABEL_1042;
                }
                *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 7) + 16LL;
                sub_11CA10((char *)(*((_QWORD *)v9 + 5) + 16LL), *((char **)&v11 + 1));
              }
LABEL_2152:
              sub_11CDA0((__int64)v762);
              goto LABEL_32;
            }
            v378 = v760.m128i_i64[0];
LABEL_1208:
            v379 = (void *)*(int *)(v378 + 4);
            if ( (_DWORD)v379 == *((_DWORD *)v763 + 21) )
            {
              if ( *(_BYTE *)v378 != 5 )
              {
                if ( !under_debugger )
                  sub_383060(51854);
                goto LABEL_2165;
              }
              v380 = v10 + 2;
              v381 = v759[4].m128i_i64[0];
              v382 = (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v378 + 8) + 8LL) + *(_QWORD *)(v381 + 1440));
              src[0] = v379;
              v773 = (__int64)v382;
              if ( !(unsigned __int8)sub_F7AC0(v381, (__int64)v762) )
                v380 = v766;
              v766 = v380;
            }
            goto LABEL_1213;
          }
        }
        *((_QWORD *)&v11 + 1) = v763;
        if ( (unsigned __int8)sub_126F10(*((_QWORD *)v364 + 1), (__int64)v763, v768, v170) )
        {
          *(_DWORD *)(*((_QWORD *)v364 + 1) + 4LL) = -1;
          goto LABEL_349;
        }
        goto LABEL_627;
      case 13:
        v21 = (char *)(v9 + 12);
        v8 = (unsigned __int64)v763;
        *((_QWORD *)&v11 + 1) = v9 + 8;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_151FF0(
                                (__int64)v763,
                                (__int64)(v9 + 8),
                                (__int64)v759,
                                (__int64)v9,
                                0,
                                (__int64)(v9 + 12)) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v9 + 12;
        if ( (unsigned __int8)sub_151FF0(v8, (__int64)(v9 + 12), (__int64)v759, (__int64)v9, 0, (__int64)(v9 + 8)) )
          goto LABEL_32;
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 12), 0) )
        {
          if ( !v759 )
          {
            memset(src, 0, sizeof(src));
            v773 = (__int64)&off_4DDD00;
            *(_QWORD *)&v775 = *((_QWORD *)v763 + 12);
            *((_QWORD *)&v11 + 1) = &v773;
            if ( (unsigned int)sub_11F760(v9, &v773) )
              goto LABEL_160;
          }
          *((_QWORD *)&v11 + 1) = v763;
          sub_120A10(v760.m128i_i64[0], (__int64)v763, 0, v9[9], *((_QWORD *)v9 + 3), 0);
          goto LABEL_349;
        }
        if ( *((_BYTE *)v9 + 32) == 14 )
        {
          v772 = nullptr;
          v771 = (unsigned int *)0xFFFFFFFF00000000LL;
          v8 = *(unsigned int *)(*((_QWORD *)v9 + 5) + 20LL);
          sub_125180((__int64)&v771, (unsigned __int8 *)v9 + 48);
          if ( (unsigned __int8)sub_127850((unsigned __int64)&v771, (__int64)v763, v8, 0) )
          {
            v754 = (char *)(v9 + 12);
            v351 = v760.m128i_i64[0];
            goto LABEL_1114;
          }
        }
        else
        {
          v55 = *((_BYTE *)v9 + 48) == 14;
          v762 = (char *)&v773;
          if ( !v55 )
            goto LABEL_218;
          v772 = nullptr;
          v771 = (unsigned int *)0xFFFFFFFF00000000LL;
          v8 = *(unsigned int *)(*((_QWORD *)v9 + 7) + 20LL);
          sub_125180((__int64)&v771, (unsigned __int8 *)v760.m128i_i64[0]);
          if ( (unsigned __int8)sub_127850((unsigned __int64)&v771, (__int64)v763, v8, 0) )
          {
            v351 = (__int64)(v9 + 12);
            v754 = (char *)v760.m128i_i64[0];
LABEL_1114:
            v352 = sub_125B60((unsigned __int8 *)&v771, *(_QWORD *)(v351 + 8) + 16LL, 0);
            v762 = (char *)&v773;
            if ( v352 )
            {
              if ( (_BYTE)v771 != 4
                || v759
                || (v773 = (__int64)&off_4DDD00,
                    v740 = *((_QWORD *)v763 + 12),
                    memset(src, 0, sizeof(src)),
                    *(_QWORD *)&v775 = v740,
                    !(unsigned int)sub_11F760(v772, v762)) )
              {
                sub_11CDA0((__int64)&v771);
                sub_11CA10((char *)&v771, *(char **)(v351 + 8));
                v726 = (unsigned __int64 *)v763;
                sub_1207E0((char *)&v771, (__int64)v763, 9, *((_QWORD *)v9 + 3), *(_DWORD *)(v351 + 4));
                sub_11CA10((char *)v351, (char *)&v771);
                v727 = v8;
                v8 = (unsigned __int64)v754;
                sub_1273B0((unsigned __int64)v754, (__int64)v726, *((_QWORD *)v9 + 3), v727);
                *((_QWORD *)&v11 + 1) = v726;
                sub_1207E0(v754, (__int64)v726, 9, *((_QWORD *)v9 + 3), *(_DWORD *)(v351 + 4));
                sub_11CDA0((__int64)&v771);
                goto LABEL_32;
              }
            }
            goto LABEL_1115;
          }
        }
        v762 = (char *)&v773;
LABEL_1115:
        sub_11CDA0((__int64)&v771);
LABEL_218:
        if ( !(unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], v762, 0) || v773 )
        {
          if ( *((_BYTE *)v9 + 48) == 2 && *((_BYTE *)v9 + 32) == 10 )
          {
            v510 = *((_QWORD *)v9 + 5);
            if ( *(_BYTE *)v510 == 6 )
            {
              v511 = *(_QWORD *)(v510 + 8);
              if ( !v511 )
              {
                *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 7);
                v512 = sub_14E8A0(v9[13], *((__int64 *)&v11 + 1));
                *(_BYTE *)v510 = 6;
                v513 = 8 * *((_DWORD *)v763 + 21);
                LODWORD(v762) = *((_DWORD *)v763 + 21);
                if ( (unsigned __int64)v513 <= 0x3F )
                  v511 = 1LL << v513;
                *(_QWORD *)(v510 + 8) = -v512 & (v511 - 1);
                goto LABEL_349;
              }
            }
          }
          *((_QWORD *)&v11 + 1) = v762;
          if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 0) || v773 )
          {
            if ( *((_BYTE *)v9 + 48) == 10 )
            {
              v427 = *((char **)v9 + 7);
              v428 = *v427;
              if ( *v427 == 6 && !*((_QWORD *)v427 + 1) )
                goto LABEL_349;
              if ( *((_BYTE *)v9 + 32) == 10 )
              {
                v429 = *((_QWORD *)v9 + 5);
                if ( *(_BYTE *)v429 == v428 && (a8 & 1) != 0 )
                {
                  if ( v428 == 5 )
                  {
                    *(_QWORD *)&v768 = sub_15AEB0(
                                         *(_QWORD *)(*(_QWORD *)(v429 + 8) + 8LL),
                                         *(_QWORD *)(*((_QWORD *)v427 + 1) + 8LL),
                                         v9[9]);
                    goto LABEL_259;
                  }
                  if ( v428 == 6 )
                  {
                    *(_QWORD *)&v768 = sub_15A440(*(_QWORD *)(v429 + 8), *((_QWORD *)v427 + 1), v9[9]);
                    goto LABEL_259;
                  }
                }
              }
            }
            v8 = (unsigned __int64)&v768;
            if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v768, 1u) )
              goto LABEL_231;
            *((_QWORD *)&v11 + 1) = v768;
            if ( *((_BYTE *)v9 + 32) == 10 )
            {
              v487 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)v487 == 5 )
              {
                v566 = *((_QWORD *)v763 + 12);
                *((_QWORD *)&v11 + 1) = sub_15AEB0(*(_QWORD *)(*(_QWORD *)(v487 + 8) + 8LL), v768, v9[9]);
                if ( *(_DWORD *)(*(_QWORD *)(v566 + 24) + 24LL) != 8 )
                  *((_QWORD *)&v11 + 1) = SDWORD2(v11);
                if ( (unsigned __int8)sub_1599D0(*((_QWORD *)v9 + 5), *((__int64 *)&v11 + 1), (__int64)v759, a8) )
                  goto LABEL_349;
                *((_QWORD *)&v11 + 1) = v768;
              }
              else if ( *(_BYTE *)v487 == 6 && (a8 & 1) != 0 )
              {
                v488 = sub_15A440(*(_QWORD *)(v487 + 8), v768, v9[9]);
LABEL_1548:
                *(_BYTE *)v487 = 6;
                v489 = v488;
                v490 = 8 * *((_DWORD *)v763 + 21);
                LODWORD(v762) = *((_DWORD *)v763 + 21);
                v491 = 0;
                *((_QWORD *)&v11 + 1) = v490;
                if ( (unsigned __int64)v490 <= 0x3F )
                  v491 = 1LL << v490;
                *(_QWORD *)(v487 + 8) = v489 & (v491 - 1);
                goto LABEL_349;
              }
            }
            if ( v11 < 0 )
            {
              v565 = *((_QWORD *)&v11 + 1);
              *((_QWORD *)&v11 + 1) = v763;
              sub_120B00((__int64)(v9 + 12), (__int64)v763, v565);
              *v9 = 12;
              goto LABEL_32;
            }
            if ( *((_BYTE *)v9 + 32) == 4 )
            {
              v482 = *((_QWORD *)v9 + 5);
              if ( *(_DWORD *)v482 == 12 )
              {
                if ( v759 )
                {
                  *((_QWORD *)&v11 + 1) = v759;
                  v483 = *(_DWORD *)(v759[4].m128i_i64[0] + 1184);
                  v484 = *(_QWORD *)(v759[30].m128i_i64[0] + 112);
                  if ( *(_BYTE *)(v482 + 32) == 1 )
                  {
                    v564 = *(_DWORD *)(v482 + 40);
                    if ( *(_DWORD *)(v484 + 60) == v564 || v483 == v564 )
                      goto LABEL_1543;
                  }
                  if ( *(_BYTE *)(v482 + 48) == 1 )
                  {
                    v485 = *(_DWORD *)(v482 + 56);
                    if ( *(_DWORD *)(v484 + 60) == v485 || v483 == v485 )
                    {
                      sub_11CA10((char *)(v482 + 32), (char *)(v482 + 48));
LABEL_1543:
                      *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 5) + 48LL;
                      sub_11CA10((char *)v9 + 48, *((char **)&v11 + 1));
                      v486 = *((_DWORD **)v9 + 5);
                      *v9 = 12;
                      *v486 = 13;
                      goto LABEL_32;
                    }
                  }
                }
              }
            }
            if ( (unsigned __int8)sub_14DB30(v9) )
              goto LABEL_32;
            if ( *((_BYTE *)v9 + 32) != 4 )
              goto LABEL_231;
            v476 = *((_QWORD *)v9 + 5);
            v477 = *(_DWORD *)v476;
            if ( *(_DWORD *)v476 == 7 )
            {
              if ( (unsigned __int8)sub_14F6A0(v476) )
                goto LABEL_32;
              if ( *((_BYTE *)v9 + 32) != 4 )
              {
LABEL_231:
                if ( !(unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], &v768, 1u) )
                {
LABEL_232:
                  if ( *((_BYTE *)v9 + 48) != 4 )
                    goto LABEL_233;
                  v465 = *((unsigned int **)v9 + 7);
                  v466 = *v465;
                  if ( (_DWORD)v466 != 12 )
                  {
LABEL_1486:
                    if ( (_DWORD)v466 == 5 )
                    {
                      v632 = v762;
                      *v9 = 12;
                      sub_123A40((__int64)v632, (unsigned __int8 *)v465 + 32, v466, v56);
                      *((_QWORD *)&v11 + 1) = v632;
                      sub_11CA10((char *)v9 + 48, v632);
                      sub_11CDA0((__int64)v632);
                      goto LABEL_32;
                    }
                    if ( (_DWORD)v466 == 7 )
                    {
                      *((_QWORD *)&v11 + 1) = v763;
                      sub_120A10((__int64)(v465 + 12), (__int64)v763, 1, v465[9], *((_QWORD *)v465 + 3), 0);
                      **((_DWORD **)v9 + 7) = 12;
                      *v9 = 12;
                      goto LABEL_32;
                    }
                    if ( *((_BYTE *)v9 + 32) != 4 )
                      goto LABEL_1492;
                    goto LABEL_1489;
                  }
                  if ( !sub_125B60((unsigned __int8 *)v465 + 32, v760.m128i_i64[0], 0)
                    && !sub_125B60((unsigned __int8 *)(*((_QWORD *)v9 + 7) + 48LL), v760.m128i_i64[0], 0)
                    || !sub_14E190(*((_QWORD *)v763 + 12), (__int64)v759, v9) )
                  {
                    if ( *((_BYTE *)v9 + 48) == 4 )
                    {
                      v465 = *((unsigned int **)v9 + 7);
                      v466 = *v465;
                      goto LABEL_1486;
                    }
LABEL_233:
                    if ( *((_BYTE *)v9 + 32) != 4 )
                      goto LABEL_234;
LABEL_1489:
                    if ( **((_DWORD **)v9 + 5) == 12
                      && !(unsigned __int8)sub_1516B0((__int64)(v9 + 12), (__int64)v763, 0, v56, v57, v58)
                      && sub_14F260(*((_QWORD *)v763 + 12), (__int64)v759, (__int64)(v9 + 12)) )
                    {
                      v600 = *((_QWORD *)v9 + 5);
                      v601 = (unsigned __int8 *)(v600 + 32);
                      if ( sub_125B60((unsigned __int8 *)(v600 + 32), (__int64)(v9 + 12), 0) )
                      {
                        v602 = (unsigned __int8 *)(v600 + 48);
                        if ( !sub_125B60(v602, (__int64)(v9 + 12), 0) )
                        {
LABEL_1773:
                          v604 = v762;
                          sub_123A40((__int64)v762, v602, v603, v56);
                          *((_QWORD *)&v11 + 1) = v604;
                          sub_11CA10((char *)v760.m128i_i64[0], v604);
                          sub_11CDA0((__int64)v604);
                          goto LABEL_349;
                        }
LABEL_1933:
                        v602 = v601;
                        goto LABEL_1773;
                      }
                      if ( sub_125B60((unsigned __int8 *)(v600 + 48), (__int64)(v9 + 12), 0) )
                        goto LABEL_1933;
                    }
                    if ( *((_BYTE *)v9 + 48) != 4 )
                    {
LABEL_234:
                      if ( v759 )
                      {
                        *((_QWORD *)&v11 + 1) = v758;
                        if ( (unsigned __int8)sub_158FC0((__int64)v759, v758, (__int64)v9) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v763;
                        if ( (unsigned __int8)sub_1205A0(v9, (__int64)v763, 0, a4, v59, v60) )
                          goto LABEL_19;
                      }
                      else
                      {
                        *((_QWORD *)&v11 + 1) = v763;
                        if ( (unsigned __int8)sub_1205A0(v9, (__int64)v763, 0, v56, v57, v58) )
                          goto LABEL_160;
                      }
                      if ( *((_BYTE *)v9 + 32) != 4 )
                      {
LABEL_238:
                        if ( *((_BYTE *)v9 + 48) == 4 && **((_DWORD **)v9 + 7) == 14 )
                        {
                          *((_QWORD *)&v11 + 1) = v763;
                          if ( (unsigned __int8)sub_154C10(
                                                  (__int64)v9,
                                                  (__int64)v763,
                                                  (__int64)(v9 + 12),
                                                  v760.m128i_i64[0]) )
                            goto LABEL_32;
                        }
                        *((_QWORD *)&v11 + 1) = v9;
                        if ( (unsigned __int8)sub_14F770((__int64)v763, (__int64)v9) )
                          goto LABEL_32;
                        v8 = v758;
                        v61 = (unsigned __int64 *)v763;
                        *((_QWORD *)&v11 + 1) = v763;
                        if ( (unsigned __int8)sub_154100((__int64)v9, (__int64)v763, v759, v758) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v758;
                        if ( (unsigned __int8)sub_118AF0((__int64)v759, v758, (__int64)v761, (__int64)v9) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v758;
                        if ( (unsigned __int8)sub_119F10((__int64)v759, v758, (__int64)v9) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v759;
                        if ( (unsigned __int8)sub_1194E0(
                                                (int *)v9,
                                                (__int64)v759,
                                                v758,
                                                (__int64)(v9 + 12),
                                                v760.m128i_i64[0]) )
                          goto LABEL_32;
                        *((_QWORD *)&v11 + 1) = v61;
                        if ( (unsigned __int8)sub_151A60((__int64)v9, (__int64)v61) )
                          goto LABEL_32;
                        goto LABEL_19;
                      }
                      v725 = *((_QWORD *)v9 + 5);
                      if ( *(_DWORD *)v725 == 22 )
                      {
                        if ( *(_BYTE *)(v725 + 48) != 2 )
                          goto LABEL_238;
                        v728 = *(_QWORD *)(*(_QWORD *)(v725 + 56) + 16LL);
                        if ( sub_125B60((unsigned __int8 *)v9 + 48, v725 + 32, 0) )
                        {
                          *v9 = 14;
                          v749 = 0;
                          if ( (v728 & 0xC0) == 0 )
                            v749 = 1LL << v728;
                          *((_QWORD *)&v11 + 1) = v763;
                          sub_120A10(v760.m128i_i64[0], (__int64)v763, v749 - 1, v9[13], *((_QWORD *)v9 + 3), 0);
                          goto LABEL_32;
                        }
                        if ( *((_BYTE *)v9 + 32) != 4 )
                          goto LABEL_238;
                        v725 = *((_QWORD *)v9 + 5);
                      }
                      if ( *(_DWORD *)v725 == 14 )
                      {
                        *((_QWORD *)&v11 + 1) = v763;
                        if ( (unsigned __int8)sub_154C10(
                                                (__int64)v9,
                                                (__int64)v763,
                                                v760.m128i_i64[0],
                                                (__int64)(v9 + 12)) )
                          goto LABEL_32;
                      }
                      goto LABEL_238;
                    }
                    v465 = *((unsigned int **)v9 + 7);
LABEL_1492:
                    if ( *v465 == 12
                      && !(unsigned __int8)sub_1516B0(v760.m128i_i64[0], (__int64)v763, 0, v56, v57, v58)
                      && sub_14F260(*((_QWORD *)v763 + 12), (__int64)v759, v760.m128i_i64[0]) )
                    {
                      v467 = sub_11C8E0(*((_QWORD *)v9 + 7), v770, 13);
                      v468 = v467;
                      if ( v467 )
                      {
                        if ( sub_125B60((unsigned __int8 *)(v467 + 32), v760.m128i_i64[0], 0) )
                        {
                          sub_123A40((__int64)&v771, (unsigned __int8 *)(v468 + 48), v469, v56);
                          sub_11CA10((char *)v760.m128i_i64[0], (char *)&v771);
                          v470 = v762;
                          sub_123A40((__int64)v762, v770[0], v471, v472);
                          *((_QWORD *)&v11 + 1) = v470;
                          sub_11CA10((char *)v9 + 48, v470);
                          sub_11CDA0((__int64)v470);
                          sub_11CDA0((__int64)&v771);
                          goto LABEL_32;
                        }
                      }
                    }
                    goto LABEL_234;
                  }
                  v633 = *((_QWORD *)v9 + 7);
                  *v9 = 5;
                  v634 = sub_125B60((unsigned __int8 *)(v633 + 32), v760.m128i_i64[0], 0);
                  v635 = *((_QWORD *)v9 + 7);
                  *((_QWORD *)&v11 + 1) = v635 + 32;
                  if ( v634 )
                    *((_QWORD *)&v11 + 1) = v635 + 48;
                  sub_11CA10((char *)v760.m128i_i64[0], *((char **)&v11 + 1));
LABEL_350:
                  if ( *((_BYTE *)v9 + 48) == 4 )
                    goto LABEL_387;
                  goto LABEL_351;
                }
                if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 1u)
                  || *((_BYTE *)v9 + 32) == 2 && (*((_BYTE *)v9 + 33) & 8) != 0 )
                {
                  if ( (_QWORD)v768 != 1 )
                    goto LABEL_232;
LABEL_1613:
                  if ( (unsigned __int8)sub_154F80((__int64)v763, (__int64)(v9 + 12)) )
                  {
                    sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
                    goto LABEL_283;
                  }
                  goto LABEL_232;
                }
                if ( *((_BYTE *)v9 + 48) == 2 && (*((_BYTE *)v9 + 49) & 8) != 0 )
                {
                  if ( (_QWORD)v768 != 1 )
                    goto LABEL_233;
                  goto LABEL_1613;
                }
                v8 = v9[9];
                v474 = *((_QWORD *)&v768 + 1);
                v475 = sub_32ABC0(v768, v8, 1);
                *(_QWORD *)&v768 = v475 - sub_32ABC0(v474, (unsigned int)v8, 1);
LABEL_259:
                if ( !v759 )
                {
                  *((_QWORD *)&v11 + 1) = v763;
                  if ( (unsigned __int8)sub_1205A0(v9, (__int64)v763, 1, a4, v16, v15) )
                    goto LABEL_160;
                }
                if ( *((_BYTE *)v9 + 32) == 4 )
                {
                  v127 = *((_BYTE **)v9 + 5);
                  src[0] = nullptr;
                  v773 = (__int64)&off_4DDCD8;
                  *(_QWORD *)&v775 = *((_QWORD *)v763 + 12);
                  *((_QWORD *)&v775 + 1) = &v767;
                  src[1] = v759;
                  *(_OWORD *)&src[2] = (unsigned __int64)v758;
                  if ( (unsigned int)sub_11F760(v127, &v773) )
                  {
                    if ( !under_debugger )
                      sub_383060(51213);
                    goto LABEL_2165;
                  }
                }
                *((_QWORD *)&v11 + 1) = v763;
                sub_120A10(v757, (__int64)v763, v768, v9[17], *((_QWORD *)v9 + 3), 0);
                v9[1] &= ~0x10u;
                goto LABEL_262;
              }
              v476 = *((_QWORD *)v9 + 5);
              v477 = *(_DWORD *)v476;
            }
            if ( (unsigned int)(v477 - 12) <= 1
              && (unsigned __int8)sub_11FD80((char *)(v476 + 48), (_QWORD *)&v768 + 1, 1u)
              && (unsigned __int8)sub_14E580((__int64)v759, a8, v768, *((__int64 *)&v768 + 1)) )
            {
              if ( *((_BYTE *)v9 + 32) != 4 || **((_DWORD **)v9 + 5) != 13 )
                v479 = -v479;
              v480 = v9[9];
              v481 = v478 + v479;
              goto LABEL_1535;
            }
            goto LABEL_231;
          }
LABEL_349:
          *v9 = 4;
          goto LABEL_350;
        }
LABEL_846:
        *v9 = 5;
LABEL_653:
        *((_QWORD *)&v11 + 1) = v21;
        sub_11CA10((char *)v760.m128i_i64[0], v21);
        goto LABEL_350;
      case 14:
        if ( *((_BYTE *)v9 + 32) != 2 && *((_BYTE *)v9 + 48) != 2 )
          goto LABEL_382;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        v21 = (char *)(v9 + 12);
        v762 = (char *)&v773;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v773, 0) && v773 == 1 )
          goto LABEL_341;
        *((_QWORD *)&v11 + 1) = v762;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 0) && v773 == 1 )
          goto LABEL_349;
        if ( (unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], v762, 1u) && v773 == -1 )
          goto LABEL_846;
        *((_QWORD *)&v11 + 1) = v762;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 1u) && v773 == -1 )
        {
LABEL_618:
          *v9 = 5;
          goto LABEL_350;
        }
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 0) && !v773 )
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
        *((_QWORD *)&v11 + 1) = v762;
        if ( (unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], v762, 0) )
        {
          if ( !v773 )
          {
            if ( v759 )
              goto LABEL_349;
            v773 = (__int64)&off_4DDD00;
            *((_QWORD *)&v11 + 1) = v762;
            v449 = *((_QWORD *)v763 + 12);
            memset(src, 0, sizeof(src));
            *(_QWORD *)&v775 = v449;
            if ( !(unsigned int)sub_11F760(v9, v762) )
              goto LABEL_349;
          }
        }
        v8 = (unsigned __int64)&v768;
        if ( (unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], &v768, 0)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 0) )
        {
          *(_QWORD *)&v768 = *((_QWORD *)&v768 + 1) * v768;
          goto LABEL_259;
        }
        v156 = sub_11C8A0((__int64)v9, v770);
        v157 = *(_DWORD *)(v156 + 4);
        if ( *v770[0] == 4 && **((_DWORD **)v770[0] + 1) == 5 )
        {
          sub_14E870(v157, *(__m128i **)(v156 + 8), -*(_QWORD *)(*(_QWORD *)(v156 + 8) + 16LL));
          if ( v760.m128i_i64[0] == v156 )
            sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
          goto LABEL_518;
        }
        v158 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v156 + 8) + 16LL), v157, 0);
        v159 = v770[0];
        if ( *v770[0] != 4 )
          goto LABEL_382;
        v160 = *((int **)v770[0] + 1);
        v161 = *v160;
        if ( *v160 != 20 )
          goto LABEL_603;
        v760.m128i_i64[0] = (v158 - 1) & v158;
        if ( !v760.m128i_i64[0] )
        {
          v541 = log2ceil();
          v542 = v9[9];
          v543 = v541;
          v544 = *(unsigned __int8 *)(*((_QWORD *)v763 + 12) + 130LL);
          v545 = 8 * v542;
          v546 = 8 * v542;
          if ( v542 < v544 )
            v546 = 8 * v544;
          v547 = v546 - v543;
          v8 = 0;
          if ( (unsigned __int64)v547 <= 0x3F )
            v8 = (v158 - 1) << v547;
          if ( (unsigned __int64)v545 <= 0x3F )
            v760.m128i_i64[0] = 1LL << v545;
          v548 = sub_11C8A0(*((_QWORD *)v770[0] + 1), &v771);
          if ( v548 )
          {
            v549 = sub_14E8A0(*(_DWORD *)(v548 + 4), *(_QWORD *)(v548 + 8));
            if ( (v8 | v549) == v760.m128i_i64[0] - 1 )
            {
              v550 = sub_207610(v771, *((_QWORD *)v770[0] + 1));
              v551 = sub_11CA90(v550);
              v552 = v762;
              v553 = v551;
              sub_123A40((__int64)v762, (unsigned __int8 *)v771, v554, v555);
              *((_QWORD *)&v11 + 1) = v552;
              sub_11CA10((char *)v770[0], v552);
              if ( *((_DWORD *)v770[0] + 1) > v553 && *v770[0] == 1 )
              {
                *((_QWORD *)&v11 + 1) = v763;
                if ( (unsigned __int8)sub_12AB50(v770[0], (__int64)v763, v553, 1) )
                {
                  *((_QWORD *)&v11 + 1) = v763;
                  sub_1207E0((char *)v770[0], (__int64)v763, 9, *((_QWORD *)src[0] + 3), v9[17]);
                }
              }
              goto LABEL_2152;
            }
          }
          v159 = v770[0];
          if ( *v770[0] == 4 )
          {
            v160 = *((int **)v770[0] + 1);
            v161 = *v160;
LABEL_603:
            if ( (unsigned int)(v161 - 23) <= 1 && *((_BYTE *)v160 + 32) == 10 && *((_BYTE *)v160 + 48) == 2 )
            {
              v162 = *(unsigned __int8 *)(*((_QWORD *)v160 + 7) + 16LL);
              v163 = 0;
              if ( v162 <= 63 )
                v163 = 1LL << v162;
              if ( v163 == v158 )
              {
                v8 = (unsigned __int64)v762;
                v773 = 0xFFFFFFFF00000000LL;
                src[0] = nullptr;
                sub_11CA10((char *)(*((_QWORD *)v159 + 1) + 32LL), v762);
                sub_11CA10((char *)v770[0], (char *)v8);
                *((_QWORD *)&v11 + 1) = *(_QWORD *)(v156 + 8);
                sub_14E870(*(_DWORD *)(v156 + 4), *((__m128i **)&v11 + 1), -v158);
                *v9 = 20;
                sub_11CDA0(v8);
                goto LABEL_32;
              }
            }
          }
        }
LABEL_382:
        *((_QWORD *)&v11 + 1) = v758;
        if ( (unsigned __int8)sub_118AF0((__int64)v759, v758, (__int64)v761, (__int64)v9) )
          goto LABEL_32;
        LODWORD(v15) = *v9;
        LODWORD(a3) = *v9;
        goto LABEL_20;
      case 15:
        v21 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = &v773;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) && v773 == 1 )
          goto LABEL_349;
        v8 = (unsigned __int64)&v768;
        *((_QWORD *)&v11 + 1) = &v768;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 0) )
          goto LABEL_19;
        *((_QWORD *)&v11 + 1) = (char *)&v768 + 8;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 0) )
          goto LABEL_1052;
        a4 = *((_QWORD *)&v768 + 1);
        if ( !*((_QWORD *)&v768 + 1) )
          goto LABEL_1052;
        *(_QWORD *)&v768 = (unsigned __int64)v768 / *((_QWORD *)&v768 + 1);
        goto LABEL_259;
      case 16:
        v21 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = &v773;
        v762 = (char *)&v773;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 1u) && v773 == -1 )
          goto LABEL_618;
        v8 = (unsigned __int64)&v768;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 1u) )
        {
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 1u) )
          {
            a4 = *((_QWORD *)&v768 + 1);
            if ( *((_QWORD *)&v768 + 1) )
            {
              if ( v768 != __PAIR128__(-1, 0x8000000000000000LL) )
              {
                *(_QWORD *)&v768 = (__int64)v768 / *((_QWORD *)&v768 + 1);
                goto LABEL_259;
              }
            }
          }
        }
        *((_QWORD *)&v11 + 1) = v762;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 0) || v773 != 1 )
          goto LABEL_19;
        goto LABEL_349;
      case 17:
      case 18:
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) && v773 == 1 )
          goto LABEL_258;
        v8 = (unsigned __int64)&v768;
        v47 = *v9 == 18;
        *((_QWORD *)&v11 + 1) = &v768;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        v48 = sub_11FD80((char *)v9 + 32, &v768, v47);
        LODWORD(v15) = *v9;
        LODWORD(a3) = *v9;
        if ( !v48 )
        {
          if ( (_DWORD)v15 == 17 && v759 )
          {
            *((_QWORD *)&v11 + 1) = v759;
            if ( (unsigned __int8)sub_11A880((__int64)v763, (__int64)v759, v758, (__int64)v9) )
              goto LABEL_32;
            goto LABEL_19;
          }
          goto LABEL_20;
        }
        *((_QWORD *)&v11 + 1) = (char *)&v768 + 8;
        v230 = sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, (_DWORD)v15 == 18);
        LODWORD(v15) = *v9;
        LODWORD(a3) = *v9;
        if ( !v230 )
          goto LABEL_1051;
        a4 = *((_QWORD *)&v768 + 1);
        if ( (_DWORD)v15 != 18 )
        {
          if ( !*((_QWORD *)&v768 + 1) )
          {
LABEL_1051:
            if ( (_DWORD)v15 != 17 )
              goto LABEL_20;
LABEL_1052:
            if ( *((_BYTE *)v9 + 48) != 4 )
              goto LABEL_19;
            v337 = *((_QWORD *)v9 + 7);
            if ( *(_DWORD *)v337 != 9 || v9 == (unsigned int *)v758 && !*((_BYTE *)v9 + 64) )
              goto LABEL_19;
            if ( v759 )
            {
              v8 = *(unsigned int *)(v337 + 36);
              if ( (int)v8 >= *(_DWORD *)(*(_QWORD *)(v759[4].m128i_i64[0] + 1504) + 80LL) )
              {
                *((_QWORD *)&v11 + 1) = (unsigned int)v8;
                v338 = sub_32ABC0(v768, (unsigned int)v8, 0);
                if ( (_QWORD)v768 == v338 )
                {
                  v339 = (char *)v760.m128i_i64[0];
                  sub_12AB50((unsigned __int8 *)v760.m128i_i64[0], (__int64)v763, v8, 1);
                  sub_11D7A0((__int64)v9, v337);
                  sub_11CA10((char *)v9 + 64, (char *)(v337 + 64));
                  *((_QWORD *)&v11 + 1) = v337 + 48;
                  sub_11CA10(v339, (char *)(v337 + 48));
                  v9[9] = v8;
                  *(_DWORD *)(v337 + 68) = v8;
                  goto LABEL_32;
                }
              }
              goto LABEL_19;
            }
            goto LABEL_160;
          }
          *(_QWORD *)&v768 = (unsigned __int64)v768 % *((_QWORD *)&v768 + 1);
          goto LABEL_259;
        }
        if ( *((_QWORD *)&v768 + 1) )
        {
          *((_QWORD *)&v11 + 1) = 0x8000000000000000LL;
          if ( v768 == __PAIR128__(-1, 0x8000000000000000LL) )
            goto LABEL_20;
          *(_QWORD *)&v768 = (__int64)v768 % *((_QWORD *)&v768 + 1);
          goto LABEL_259;
        }
        if ( v765 )
          goto LABEL_31;
        goto LABEL_162;
      case 19:
        v21 = (char *)(v9 + 12);
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, nullptr, 0) && *((_BYTE *)v9 + 48) != 2 )
          sub_11CA10((char *)v9 + 32, (char *)v9 + 48);
        *((_QWORD *)&v11 + 1) = v9 + 12;
        if ( sub_125B60((unsigned __int8 *)v760.m128i_i64[0], (__int64)(v9 + 12), 0) )
          goto LABEL_348;
        v762 = (char *)&v773;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 1u) && v773 == -1
          || (unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 1u)
          && v773 == 1
          && sub_11FDE0(v760.m128i_i64[0], (__int64)v763) )
        {
          goto LABEL_651;
        }
        if ( (unsigned __int64)(int)v9[9] <= 8 && *((_BYTE *)v9 + 32) == 4 )
        {
          v409 = *((_QWORD *)v9 + 5);
          if ( *(_DWORD *)v409 == 20 )
          {
            v8 = (unsigned __int64)&v768;
            if ( (unsigned __int8)sub_11FD80((char *)(v409 + 48), &v768, 0) )
            {
              if ( (_QWORD)v768 != 255 && (_QWORD)v768 != 0xFFFF && (_QWORD)v768 != 0xFFFFFFFFLL )
              {
                *((_QWORD *)&v11 + 1) = (char *)&v768 + 8;
                if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 0) )
                {
                  v410 = v768 & ~*((_QWORD *)&v768 + 1);
                  *((_QWORD *)&v768 + 1) = v410;
                  if ( v410 < (unsigned __int64)v768 )
                  {
                    a7 = _mm_unpacklo_epi64((__m128i)v410, (__m128i)v410);
                    a3 = *(_QWORD *)(*((_QWORD *)v9 + 5) + 56LL);
                    *(__m128i *)(a3 + 16) = a7;
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
        v8 = (unsigned __int64)v759;
        v104 = (unsigned __int64 *)v763;
        if ( (unsigned __int8)sub_14E070((__int64)v763, v759, v758, v760.m128i_i64[0], (__int64)(v9 + 12), 20) )
          goto LABEL_651;
        *((_QWORD *)&v11 + 1) = v759;
        if ( (unsigned __int8)sub_14E070((__int64)v104, v759, v758, (__int64)(v9 + 12), v760.m128i_i64[0], 20) )
          goto LABEL_348;
        *((_QWORD *)&v11 + 1) = v759;
        if ( (unsigned __int8)sub_14E070((__int64)v104, v759, v758, v760.m128i_i64[0], (__int64)(v9 + 12), 19) )
          goto LABEL_348;
        if ( (unsigned __int8)sub_14E070((__int64)v104, v759, v758, (__int64)(v9 + 12), v760.m128i_i64[0], 19) )
          goto LABEL_651;
        if ( *((_BYTE *)v9 + 32) != 4 )
        {
          if ( !v759 )
            goto LABEL_368;
          goto LABEL_367;
        }
        if ( *((_BYTE *)v9 + 48) != 4 )
        {
          if ( v759 && **((_DWORD **)v9 + 5) == 21 )
          {
LABEL_1627:
            *((_QWORD *)&v11 + 1) = v758;
            if ( (unsigned __int8)sub_158080(v759, v758, (__int64)v9) )
              goto LABEL_32;
          }
LABEL_368:
          v8 = (unsigned __int64)&v768;
          *((_QWORD *)&v11 + 1) = &v768;
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v768, 0) )
          {
            v106 = *((_BYTE *)v9 + 32);
            if ( v106 != 4 )
            {
              if ( v106 == 10 )
              {
                v107 = *((_QWORD *)v9 + 5);
                if ( *(_BYTE *)v107 == 6 )
                {
                  a3 = v768;
                  v705 = *(_QWORD *)(v107 + 8);
                  v706 = v768 + v705;
                  a4 = v768 | v705;
                  if ( a4 == v706 )
                  {
                    *v9 = 12;
                    goto LABEL_32;
                  }
                }
              }
              goto LABEL_372;
            }
            v707 = *((_QWORD *)v9 + 5);
            if ( *(_DWORD *)v707 == 9 && *(_BYTE *)(v707 + 32) == 4 )
            {
              v708 = *(_QWORD *)(v707 + 40);
              if ( *(_DWORD *)v708 == 10 && *(_BYTE *)(v708 + 32) == 10 )
              {
                v709 = *(_QWORD *)(v708 + 40);
                if ( *(_BYTE *)v709 == 6 && *(_DWORD *)(v708 + 36) == v9[17] )
                {
                  v710 = 8 * *(_DWORD *)(v708 + 68);
                  if ( (unsigned __int64)v710 > 0x3F )
                  {
                    if ( !(_QWORD)v768 )
                      goto LABEL_2041;
                  }
                  else if ( !((unsigned __int64)v768 & ((1LL << v710) - 1)
                            | -(1LL << v710) & ((unsigned __int64)v768 ^ *(_QWORD *)(v709 + 8))) )
                  {
LABEL_2041:
                    *((_QWORD *)&v11 + 1) = v708 + 32;
                    sub_11CA10((char *)v760.m128i_i64[0], (char *)(v708 + 32));
                    goto LABEL_349;
                  }
                }
              }
            }
          }
LABEL_372:
          *((_QWORD *)&v11 + 1) = v9;
          if ( (unsigned __int8)sub_14F2F0((__int64)v763, (__int64)v9) )
            goto LABEL_32;
          goto LABEL_628;
        }
        if ( v9[9] != 1 )
          goto LABEL_2098;
        v734 = (unsigned __int64 *)v763;
        *((_QWORD *)&v11 + 1) = v763;
        if ( sub_1547A0((__int64)v9, (__int64)v763, 40, 33, 41) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v734;
        if ( sub_1547A0((__int64)v9, (__int64)v734, 38, 33, 39) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v734;
        if ( sub_1547A0((__int64)v9, (__int64)v734, 35, 33, 37) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v734;
        if ( sub_1547A0((__int64)v9, (__int64)v734, 36, 33, 34) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v734;
        if ( sub_1547A0((__int64)v9, (__int64)v734, 32, 33, 0) )
          goto LABEL_669;
        if ( (unsigned __int8)sub_14DE90((__int64)v9) )
          goto LABEL_32;
        v735 = *((_DWORD **)v9 + 7);
        v736 = *((_DWORD **)v9 + 5);
        v8 = (unsigned __int64)v770;
        v770[0] = (unsigned __int8 *)0xFFFFFFFF00000000LL;
        v770[1] = nullptr;
        v737 = sub_152A20((__int64)v763, (__int64)v770, v759, v758, v736, v735);
        v738 = *((_DWORD **)v9 + 5);
        if ( v737 )
        {
          *v9 = 41;
          if ( *v738 == 33 )
            v739 = v738[1];
          else
            v739 = *(_DWORD *)(*((_QWORD *)v9 + 7) + 4LL);
          v9[1] = v739;
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v770);
          *((_QWORD *)&v11 + 1) = v763;
          sub_120A10((__int64)(v9 + 12), (__int64)v763, 0, v9[9], *((_QWORD *)v9 + 3), 0);
          goto LABEL_2131;
        }
        if ( (unsigned __int8)sub_14FFE0(
                                (__int64)v763,
                                (__int64 *)&v769,
                                33,
                                v759,
                                v758,
                                (__int64)v738,
                                *((_QWORD *)v9 + 7)) )
        {
          v745 = v769;
          *v9 = 37;
          v746 = *((_DWORD *)v745 + 1);
          v772 = nullptr;
          v9[1] = v746;
          v771 = (unsigned int *)0xFFFFFFFF00000000LL;
          sub_11CA10((char *)&v771, v745 + 32);
          v747 = v745 + 48;
          v748 = v762;
          src[0] = nullptr;
          v773 = 0xFFFFFFFF00000000LL;
          sub_11CA10(v762, v747);
          sub_11CA10((char *)v760.m128i_i64[0], (char *)&v771);
          *((_QWORD *)&v11 + 1) = v748;
          sub_11CA10((char *)v9 + 48, v748);
          sub_11CDA0((__int64)v748);
          sub_11CDA0((__int64)&v771);
LABEL_2131:
          sub_11CDA0((__int64)v770);
          goto LABEL_32;
        }
        sub_11CDA0((__int64)v770);
LABEL_2098:
        if ( !v759 )
          goto LABEL_368;
        v729 = *((_DWORD **)v9 + 5);
        if ( *v729 != 9 )
          goto LABEL_2100;
        v732 = *((_QWORD *)v9 + 7);
        if ( *(_DWORD *)v732 != 22 )
          goto LABEL_2100;
        v730 = v9[9];
        if ( *(_BYTE *)(v732 + 48) == 2
          && 4 * v730 == *(unsigned __int8 *)(*(_QWORD *)(v732 + 56) + 16LL)
          && *(_BYTE *)(v732 + 32) == 4 )
        {
          if ( (unsigned __int8)sub_12CF30(
                                  v759[4].m128i_i64[0],
                                  (__int64)(v729 + 8),
                                  (unsigned __int8 *)(*(_QWORD *)(v732 + 40) + 32LL),
                                  0,
                                  0,
                                  v105) )
          {
            v733 = sub_131730(
                     (unsigned __int64 *)v763,
                     v759,
                     v758,
                     *((_QWORD *)v9 + 5) + 32LL,
                     2 * *(_DWORD *)(*((_QWORD *)v9 + 5) + 36LL),
                     0,
                     1u);
            v8 = v750;
            if ( v733 )
            {
              *v9 = 4;
              sub_11CDA0((__int64)(v9 + 12));
              v69 = *((unsigned int **)v9 + 5);
              goto LABEL_519;
            }
          }
LABEL_2100:
          v730 = v9[9];
        }
        if ( v730 < *((_DWORD *)v763 + 22) )
        {
          if ( v730 > 1 )
          {
            v781 = v9[17];
            if ( (unsigned __int64)v781 > 8 )
            {
              if ( !under_debugger )
                sub_383060(51172);
              goto LABEL_2165;
            }
            v731 = 16;
            *(_QWORD *)&v11 = v780;
            *((_QWORD *)&v11 + 1) = v759;
            while ( v731 )
            {
              *(_DWORD *)v11 = 0;
              *(_QWORD *)&v11 = v11 + 4;
              --v731;
            }
            if ( (unsigned __int8)sub_153210((__int64)v780, v759, v758, (__int64)v9) )
              goto LABEL_32;
          }
          *((_QWORD *)&v11 + 1) = v758;
          if ( (unsigned __int8)sub_150650(v759, v758, (__int64)v9) )
            goto LABEL_32;
          *((_QWORD *)&v11 + 1) = v759;
          if ( (unsigned __int8)sub_157530((__int64)v9, v759, (unsigned __int8 *)v758) )
            goto LABEL_32;
        }
        *((_QWORD *)&v11 + 1) = v758;
        if ( (unsigned __int8)sub_153B30(v759, v758, (__int64)v9) )
          goto LABEL_32;
        if ( *((_BYTE *)v9 + 32) == 4 && **((_DWORD **)v9 + 5) == 21 )
          goto LABEL_1627;
LABEL_367:
        if ( *((_BYTE *)v9 + 48) == 4 && **((_DWORD **)v9 + 7) == 21 )
          goto LABEL_1627;
        goto LABEL_368;
      case 20:
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, nullptr, 0) )
          goto LABEL_345;
        if ( *((_BYTE *)v9 + 48) != 2 )
        {
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
LABEL_345:
          if ( *((_BYTE *)v9 + 48) != 2 )
          {
            v21 = (char *)(v9 + 12);
            *((_QWORD *)&v11 + 1) = v9 + 12;
            if ( sub_125B60((unsigned __int8 *)v760.m128i_i64[0], (__int64)(v9 + 12), 0) )
              goto LABEL_348;
LABEL_347:
            v8 = (unsigned __int64)v759;
            v103 = (unsigned __int64 *)v763;
            *((_QWORD *)&v11 + 1) = v759;
            if ( (unsigned __int8)sub_14E070((__int64)v763, v759, v758, v760.m128i_i64[0], (__int64)v21, 20) )
            {
LABEL_348:
              if ( v759 )
                goto LABEL_349;
              goto LABEL_758;
            }
            if ( !(unsigned __int8)sub_14E070((__int64)v103, v759, v758, (__int64)v21, v760.m128i_i64[0], 20) )
            {
              if ( v9[9] != 1 || *((_BYTE *)v9 + 32) != 4 || *((_BYTE *)v9 + 48) != 4 )
                goto LABEL_806;
              v435 = (unsigned __int64 *)v763;
              *((_QWORD *)&v11 + 1) = v763;
              if ( sub_1547A0((__int64)v9, (__int64)v763, 34, 32, 36) )
                goto LABEL_32;
              *((_QWORD *)&v11 + 1) = v435;
              if ( sub_1547A0((__int64)v9, (__int64)v435, 37, 32, 35) )
                goto LABEL_32;
              *((_QWORD *)&v11 + 1) = v435;
              if ( sub_1547A0((__int64)v9, (__int64)v435, 39, 32, 38) )
                goto LABEL_32;
              *((_QWORD *)&v11 + 1) = v435;
              if ( sub_1547A0((__int64)v9, (__int64)v435, 41, 32, 40) )
                goto LABEL_32;
              if ( !sub_1547A0((__int64)v9, (__int64)v435, 32, 33, 0) )
              {
                if ( (unsigned __int8)sub_14FFE0(
                                        (__int64)v435,
                                        (__int64 *)v770,
                                        32,
                                        v759,
                                        v758,
                                        *((_QWORD *)v9 + 5),
                                        *((_QWORD *)v9 + 7)) )
                {
                  v436 = v770[0];
                  *v9 = 36;
                  v437 = *((_DWORD *)v436 + 1);
                  v771 = (unsigned int *)0xFFFFFFFF00000000LL;
                  v9[1] = v437;
                  v772 = nullptr;
                  sub_11CA10((char *)&v771, (char *)v436 + 32);
                  v773 = 0xFFFFFFFF00000000LL;
                  v8 = 0;
                  src[0] = nullptr;
                  v762 = (char *)&v773;
                  sub_11CA10((char *)&v773, (char *)v436 + 48);
                  sub_11CA10((char *)v760.m128i_i64[0], (char *)&v771);
                  *((_QWORD *)&v11 + 1) = &v773;
                  sub_11CA10(v21, (char *)&v773);
                  sub_11CDA0((__int64)&v773);
                  sub_11CDA0((__int64)&v771);
                  goto LABEL_32;
                }
LABEL_806:
                *((_QWORD *)&v11 + 1) = &v773;
                if ( !(unsigned __int8)sub_11E2C0((int **)v9, &v773, nullptr, 0) || v9[17] != (_DWORD)v773 )
                  goto LABEL_19;
              }
LABEL_258:
              *(_QWORD *)&v768 = 0;
              goto LABEL_259;
            }
LABEL_651:
            if ( !v759 )
            {
              memset(src, 0, sizeof(src));
              v773 = (__int64)&off_4DDD00;
              *(_QWORD *)&v775 = *((_QWORD *)v763 + 12);
              *((_QWORD *)&v11 + 1) = &v773;
              if ( (unsigned int)sub_11F760(v9, &v773) )
                goto LABEL_160;
            }
            *v9 = 4;
            v21 = (char *)(v9 + 12);
            goto LABEL_653;
          }
        }
        v182 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v9 + 7) + 16LL), v9[13], 0);
        *((_QWORD *)&v768 + 1) = v182;
        if ( !v182 )
          goto LABEL_651;
        *((_QWORD *)&v11 + 1) = v9[13];
        if ( sub_32ABC0(v182, *((_QWORD *)&v11 + 1), 1) == -1 )
          goto LABEL_262;
        *((_QWORD *)&v11 + 1) = v760.m128i_i64[0];
        if ( (unsigned __int8)sub_14E260((__int64)v763, v760.m128i_i64[0]) )
          goto LABEL_262;
        v236 = *((_BYTE *)v9 + 32);
        if ( v236 == 2 )
        {
          v514 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v9 + 5) + 16LL), v9[9], 0);
          *(_QWORD *)&v768 = *((_QWORD *)&v768 + 1) & v514;
          goto LABEL_259;
        }
        if ( !v759 )
          goto LABEL_815;
        if ( (*((_BYTE *)v9 + 33) & 4) != 0 )
          goto LABEL_1399;
        if ( v236 == 4 )
        {
          if ( sub_122600(*((unsigned int **)v9 + 5)) )
          {
LABEL_1399:
            v433 = v9[9];
            v237 = *((_QWORD *)&v768 + 1);
            if ( ((v433 - 4) & 0xFFFFFFFB) == 0 )
            {
              v55 = 8 * v433 == 32;
              v434 = 0x7FFFFFFF;
              if ( !v55 )
                v434 = 0x7FFFFFFFFFFFFFFFLL;
              if ( v434 == *((_QWORD *)&v768 + 1) )
              {
                v520 = (_DWORD *)(&qword_18 + 1);
                if ( v9[13] == 4 )
                  v520 = (_DWORD *)byte_9;
                v771 = v520;
                v773 = 0xFFFFFFFF00000000LL;
                src[3] = nullptr;
                v776 = nullptr;
                *(_QWORD *)&v777 = 0;
                *(__m128i *)&src[1] = _mm_load_si128((const __m128i *)&xmmword_4247F0);
                a7.m128i_i64[0] = 0;
                src[0] = nullptr;
                DWORD2(v777) = 0;
                v762 = (char *)&v773;
                v775 = 0;
                sub_11CA10((char *)&v773, (char *)v760.m128i_i64[0]);
                copy_tinfo_t();
                *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 3);
                v9[9] = v9[17];
                v521 = sub_335B10(
                         v759[4].m128i_i64[0],
                         DWORD2(v11),
                         (unsigned int)"fabs",
                         (unsigned int)&v771,
                         1,
                         (unsigned int)&v773,
                         1,
                         v8,
                         v751,
                         v752,
                         (_DWORD)v753,
                         (_DWORD)v754);
                v21 = (char *)(v9 + 12);
                *(_DWORD *)(*(_QWORD *)(v521 + 72) + 280LL) |= 0x10u;
                *((_QWORD *)v9 + 5) = v521;
                *((_BYTE *)v9 + 32) = 4;
                sub_82400((__int64)&v773);
                clear_tinfo_t();
                goto LABEL_349;
              }
            }
            v236 = *((_BYTE *)v9 + 32);
          }
          else
          {
            v237 = *((_QWORD *)&v768 + 1);
            v236 = *((_BYTE *)v9 + 32);
          }
        }
        else
        {
LABEL_815:
          v237 = *((_QWORD *)&v768 + 1);
        }
        if ( v236 == 10 )
        {
          v430 = *((_QWORD *)v9 + 5);
          v431 = ~(_DWORD)v237;
          if ( *(_BYTE *)v430 == 5 && v431 <= 16 && (v431 & -(int)v237) == 0 )
          {
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(*(_QWORD *)(v430 + 8) + 8LL) & v237;
            if ( (unsigned __int8)sub_1599D0(v430, *((__int64 *)&v11 + 1), (__int64)v759, a8) )
            {
LABEL_262:
              v21 = (char *)(v9 + 12);
              goto LABEL_349;
            }
            v237 = *((_QWORD *)&v768 + 1);
          }
        }
        v21 = (char *)(v9 + 12);
        if ( (v237 & 1) == 0 )
          goto LABEL_818;
        *((_QWORD *)&v11 + 1) = v763;
        v432 = sub_11FDE0(v760.m128i_i64[0], (__int64)v763);
        v237 = *((_QWORD *)&v768 + 1);
        v8 = *((_QWORD *)&v768 + 1);
        if ( v432 )
        {
          if ( *((_QWORD *)&v768 + 1) == 1 )
            goto LABEL_349;
          if ( (BYTE8(v768) & 1) != 0 )
          {
            v762 = (char *)&v773;
            goto LABEL_283;
          }
LABEL_818:
          v238 = *((_BYTE *)v9 + 32);
LABEL_819:
          if ( v238 != 4 )
            goto LABEL_820;
          goto LABEL_1567;
        }
        v238 = *((_BYTE *)v9 + 32);
        if ( *((_QWORD *)&v768 + 1) != 1 )
        {
          BYTE8(v11) = *((_QWORD *)&v768 + 1) == 0xFFFF;
          if ( *((_QWORD *)&v768 + 1) == 0xFFFF
            || *((_QWORD *)&v768 + 1) == 255
            || *((_QWORD *)&v768 + 1) == 0xFFFFFFFFLL )
          {
            if ( v238 == 10 )
            {
              v620 = *((_QWORD *)v9 + 5);
              if ( *(_BYTE *)v620 == 6 && (*(_QWORD *)(v620 + 8) & ~*((_QWORD *)&v768 + 1)) == 0 )
                goto LABEL_349;
              goto LABEL_821;
            }
            if ( v238 != 4 )
            {
LABEL_820:
              if ( v238 != 14 )
                goto LABEL_821;
              v506 = *((_QWORD *)v9 + 5);
              v507 = 8 * *(_DWORD *)(v506 + 4);
              if ( (unsigned __int8)sub_11FD80((char *)v506, &v773, 0) && (v508 = (unsigned __int8 *)v773) == nullptr )
              {
                *((_QWORD *)&v11 + 1) = v507;
                a4 = (unsigned int)v507;
                if ( (unsigned __int64)v507 < 0x40 )
                  v508 = (unsigned __int8 *)(1LL << v507);
                v509 = (__int64)(v508 - 1);
              }
              else
              {
                *((_QWORD *)&v11 + 1) = 0;
                if ( !sub_A2350(*((_QWORD *)v9 + 5) + 16LL, 0, 0) || (unsigned __int64)v507 > 0x3F )
                  goto LABEL_821;
                a4 = (unsigned int)v507;
                v509 = -1LL << v507;
              }
              if ( (*((_QWORD *)&v768 + 1) & v509) != 0 )
              {
                a3 = *((_QWORD *)v9 + 7);
                a7 = _mm_unpacklo_epi64(
                       (__m128i)(*(_QWORD *)(a3 + 16) & (unsigned __int64)~v509),
                       (__m128i)(*(_QWORD *)(a3 + 16) & (unsigned __int64)~v509));
                *(__m128i *)(a3 + 16) = a7;
                goto LABEL_32;
              }
LABEL_821:
              if ( !v759 )
              {
                if ( sub_125B60((unsigned __int8 *)v760.m128i_i64[0], (__int64)(v9 + 12), 0) )
                {
LABEL_758:
                  memset(src, 0, sizeof(src));
                  v773 = (__int64)&off_4DDD00;
                  *(_QWORD *)&v775 = *((_QWORD *)v763 + 12);
                  *((_QWORD *)&v11 + 1) = &v773;
                  if ( (unsigned int)sub_11F760(v9, &v773) )
                    goto LABEL_160;
                  goto LABEL_349;
                }
                goto LABEL_347;
              }
              if ( (a8 & 0x10) != 0 )
                goto LABEL_831;
              v239 = *((_QWORD *)&v768 + 1);
              if ( *((_QWORD *)&v768 + 1) == 0xFFFF
                || *((_QWORD *)&v768 + 1) == 255
                || *((_QWORD *)&v768 + 1) == 0xFFFFFFFFLL )
              {
                goto LABEL_831;
              }
              v240 = bitcount();
              v241 = v240;
              if ( v240 == 31 )
              {
                v242 = 0xFFFFFFFFLL;
              }
              else
              {
                if ( v240 > 31 )
                {
                  if ( v240 != 63 )
                  {
LABEL_830:
                    if ( (unsigned int *)v759[3].m128i_i64[0] == v9 && (*(_BYTE *)(v759[4].m128i_i64[0] + 4) & 8) != 0 )
                    {
                      *((_QWORD *)&v11 + 1) = (char *)&v768 + 8;
                      v636 = sub_1E23E0(&v759[26], (char *)&v768 + 8, v760.m128i_i64[0], *((_QWORD *)v9 + 3));
                      if ( v636 == 1 )
                      {
                        v651 = _mm_loadl_epi64((const __m128i *)((char *)&v768 + 8));
                        a7 = _mm_unpacklo_epi64(v651, v651);
                        *(__m128i *)(*((_QWORD *)v9 + 7) + 16LL) = a7;
                        goto LABEL_32;
                      }
                      if ( v636 == 4 )
                        goto LABEL_349;
                    }
                  }
LABEL_831:
                  *((_QWORD *)&v11 + 1) = v9 + 12;
                  if ( sub_125B60((unsigned __int8 *)v760.m128i_i64[0], (__int64)(v9 + 12), 0) )
                    goto LABEL_349;
                  goto LABEL_347;
                }
                if ( v240 == 7 )
                {
                  v242 = 255;
                }
                else
                {
                  v242 = 0xFFFF;
                  if ( v241 != 15 )
                    goto LABEL_830;
                }
              }
              if ( (v239 & ~v242) != 0 )
                goto LABEL_830;
              goto LABEL_831;
            }
            v619 = 1;
            if ( *((_QWORD *)&v768 + 1) != 255 )
              v619 = 2 * (*((_QWORD *)&v768 + 1) != 0xFFFF) + 2;
            v495 = *((_QWORD *)v9 + 5);
            v496 = *(_DWORD *)v495;
            *((_QWORD *)&v11 + 1) = (unsigned int)(*(_DWORD *)v495 - 8);
            if ( DWORD2(v11) <= 1 )
            {
              if ( *(_DWORD *)(v495 + 36) < v619 )
              {
                v497 = 1;
                if ( *((_QWORD *)&v768 + 1) != 255 )
                {
                  v497 = 2;
                  if ( *((_QWORD *)&v768 + 1) != 0xFFFF )
                    v497 = 4;
                }
                goto LABEL_1821;
              }
              v621 = v495 + 32;
            }
            else
            {
              if ( (int)v9[9] < v619 )
              {
                if ( *((_QWORD *)&v768 + 1) != 255 && *((_QWORD *)&v768 + 1) != 0xFFFF )
                  v8 = 0xFFFFFFFFLL;
                goto LABEL_1573;
              }
              v621 = v760.m128i_i64[0];
            }
            LODWORD(v762) = v619;
            if ( sub_11CAD0(v619) || (*(_BYTE *)(v621 + 1) & 4) == 0 )
            {
              if ( *(_DWORD *)(v621 + 4) == (_DWORD)v762
                || (*((_QWORD *)&v11 + 1) = v763,
                    (unsigned __int8)sub_1273B0(v621, (__int64)v763, *((_QWORD *)v9 + 3), (int)v762)) )
              {
                sub_11CDA0((__int64)(v9 + 12));
                *v9 = 9;
                if ( v760.m128i_i64[0] == v621 )
                  goto LABEL_32;
LABEL_843:
                v69 = *((unsigned int **)v9 + 5);
LABEL_844:
                v762 = (char *)&v773;
LABEL_519:
                v135 = (char *)(v69 + 8);
                v136 = v762;
                src[0] = nullptr;
                v773 = 0xFFFFFFFF00000000LL;
                sub_11CA10(v762, v135);
                *((_QWORD *)&v11 + 1) = v136;
                sub_11CA10((char *)v9 + 32, v136);
                sub_11CDA0((__int64)v136);
                v760.m128i_i8[0] = 1;
                goto LABEL_33;
              }
            }
            v495 = *((_QWORD *)v9 + 5);
            v8 = *((_QWORD *)&v768 + 1);
            v496 = *(_DWORD *)v495;
LABEL_1568:
            if ( v8 <= 0xFF )
            {
              v497 = 1;
            }
            else if ( v8 <= 0xFFFF )
            {
              v497 = 2;
            }
            else
            {
              if ( v8 > 0xFFFFFFFF )
                goto LABEL_1573;
              v497 = 4;
            }
            if ( (unsigned int)(v496 - 8) > 1 )
              goto LABEL_1573;
LABEL_1821:
            if ( *(_BYTE *)(v495 + 32) == 4 || *(_DWORD *)(v495 + 36) <= v497 )
              goto LABEL_1582;
            v622 = v497;
            *((_QWORD *)&v11 + 1) = v763;
            if ( (unsigned __int8)sub_12AB50((unsigned __int8 *)(v495 + 32), (__int64)v763, v622, 1) )
              goto LABEL_32;
            v495 = *((_QWORD *)v9 + 5);
            v8 = *((_QWORD *)&v768 + 1);
            v496 = *(_DWORD *)v495;
LABEL_1573:
            if ( v496 == 22 )
            {
              if ( *(_BYTE *)(v495 + 48) != 2 )
                goto LABEL_1582;
              v498 = 0;
              if ( *(unsigned __int8 *)(*(_QWORD *)(v495 + 56) + 16LL) <= 0x3Fu )
                v498 = 1LL << *(_BYTE *)(*(_QWORD *)(v495 + 56) + 16LL);
              v499 = -v498;
            }
            else
            {
              if ( v496 != 14 )
                goto LABEL_1582;
              v630 = sub_11C8A0(v495, nullptr);
              if ( !v630 )
                goto LABEL_1582;
              v631 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v630 + 8) + 16LL), *(unsigned int *)(v630 + 4), 1);
              v499 = ~((v631 ^ (unsigned __int64)(v631 - 1)) >> 1);
            }
            v500 = 8 * *(_DWORD *)(v495 + 68);
            *((_QWORD *)&v11 + 1) = v500;
            v501 = 1LL << v500;
            a4 = 0;
            if ( *((_QWORD *)&v11 + 1) >= 0x40u )
              v501 = 0;
            v502 = (v501 - 1) & v499;
            if ( v502 == (v502 & v8) )
              goto LABEL_349;
            if ( (v502 & v8) == 0 )
              goto LABEL_258;
LABEL_1582:
            *((_QWORD *)&v11 + 1) = v763;
            if ( (unsigned __int8)sub_1522E0((__int64)v9, (__int64)v763) )
              goto LABEL_32;
            v238 = *((_BYTE *)v9 + 32);
            if ( v238 == 4 )
            {
              v503 = *((_DWORD **)v9 + 5);
              if ( *v503 != 19 )
                goto LABEL_821;
              if ( !(unsigned __int8)sub_159DD0((__int64)v759, (__int64)v503) )
              {
                v8 = j__qalloc_or_throw(80, (__int64)v503, v504, v505);
                sub_1510E0((_QWORD *)v8, *(_QWORD *)(*((_QWORD *)v9 + 5) + 24LL));
                sub_125180(v8 + 64, (unsigned __int8 *)v9 + 64);
                *(_DWORD *)v8 = 19;
                *(_DWORD *)(v8 + 4) = *(_DWORD *)(*((_QWORD *)v9 + 5) + 4LL);
                v644 = j__qalloc_or_throw(80, (__int64)(v9 + 16), v642, v643);
                sub_1510E0((_QWORD *)v644, *((_QWORD *)v9 + 3));
                sub_125180(v644 + 32, (unsigned __int8 *)(*((_QWORD *)v9 + 5) + 32LL));
                sub_125180(v644 + 48, (unsigned __int8 *)v9 + 48);
                v645 = v9[9];
                *(_DWORD *)v644 = 20;
                *(_DWORD *)(v644 + 68) = v645;
                *(_DWORD *)(v644 + 4) = v9[1];
                *(_QWORD *)(v8 + 40) = v644;
                *(_BYTE *)(v8 + 32) = 4;
                *(_DWORD *)(v8 + 36) = v9[9];
                v648 = j__qalloc_or_throw(80, (__int64)(v9 + 12), v646, v647);
                sub_1510E0((_QWORD *)v648, *((_QWORD *)v9 + 3));
                sub_125180(v648 + 32, (unsigned __int8 *)(*((_QWORD *)v9 + 5) + 48LL));
                sub_125180(v648 + 48, (unsigned __int8 *)v9 + 48);
                v649 = v9[9];
                *(_DWORD *)v648 = 20;
                *(_DWORD *)(v648 + 68) = v649;
                *(_DWORD *)(v648 + 4) = v9[1];
                *(_QWORD *)(v8 + 56) = v648;
                *(_BYTE *)(v8 + 48) = 4;
                *(_DWORD *)(v8 + 52) = v9[9];
                v650 = sub_15BC70(v8, (_DWORD)v763, (_DWORD)v759, v758, (_DWORD)v761, (_DWORD)a6, a8);
                if ( v650 > 0 )
                {
                  *((_QWORD *)&v11 + 1) = v8;
                  sub_11D7A0((__int64)v9, v8);
                  v9[1] = *(_DWORD *)(v8 + 4);
                  if ( v8 )
                  {
                    sub_7CCD0(v8);
                    j__qfree(v8);
                  }
                  v760.m128i_i8[0] = 1;
                  v766 = v10 + v650;
                  goto LABEL_33;
                }
                if ( v8 )
                {
                  sub_7CCD0(v8);
                  j__qfree(v8);
                }
              }
              v238 = *((_BYTE *)v9 + 32);
            }
            goto LABEL_820;
          }
          goto LABEL_819;
        }
        if ( v238 != 4 )
          goto LABEL_820;
        v494 = *((_QWORD *)v9 + 5);
        if ( *(_DWORD *)v494 == 7 )
        {
          sub_11CA10((char *)v9 + 48, (char *)(v494 + 48));
          v615 = *((_QWORD *)v9 + 5);
          v616 = v9[1];
          *((_QWORD *)&v11 + 1) = v763;
          v9[1] = *(_DWORD *)(v615 + 4);
          *(_DWORD *)(v615 + 4) = v616;
          sub_120A10((__int64)(v9 + 12), *((__int64 *)&v11 + 1), 0, v9[9], *((_QWORD *)v9 + 3), 0);
          **((_DWORD **)v9 + 5) = 20;
          v617 = (int)v9[17] <= 1;
          *v9 = 33;
          if ( !v617 )
          {
            v618 = j__qalloc_or_throw(80, *((__int64 *)&v11 + 1), a3, a4);
            sub_1510E0((_QWORD *)v618, *((_QWORD *)v9 + 3));
            sub_11D890(v618, (__int64)v9);
            *((_QWORD *)v9 + 5) = v618;
            *((_QWORD *)&v11 + 1) = v618 + 64;
            *v9 = 9;
            *((_BYTE *)v9 + 32) = 4;
            v9[9] = 1;
            v9[17] = 1;
            sub_11CA10((char *)v9 + 64, (char *)(v618 + 64));
          }
          goto LABEL_32;
        }
        if ( v9[17] != 1 )
          goto LABEL_1567;
        v623 = *((_QWORD *)v9 + 5);
        if ( *(_DWORD *)v494 != 10 )
          goto LABEL_1829;
        if ( *(_BYTE *)(v494 + 32) == 4 )
        {
          v623 = *(_QWORD *)(v494 + 40);
LABEL_1829:
          if ( *(_DWORD *)v623 == 23 && *(_BYTE *)(v623 + 48) == 2 )
          {
            v624 = *(_QWORD *)(v623 + 56);
            v760.m128i_i64[0] = v623;
            v625 = *(unsigned __int8 *)(v624 + 16);
            src[0] = nullptr;
            v773 = 0xFFFFFFFF00000000LL;
            v762 = (char *)&v773;
            sub_11CA10((char *)&v773, (char *)(v623 + 32));
            v626 = HIDWORD(v773);
            *(_DWORD *)v494 = 20;
            sub_11CA10((char *)(v494 + 32), v762);
            v627 = 0;
            if ( v625 <= 63 )
              v627 = 1LL << v625;
            v8 = (unsigned __int64)v763;
            sub_120A10(
              v494 + 48,
              (__int64)v763,
              v627,
              v626,
              **(_QWORD **)(v760.m128i_i64[0] + 56),
              *(_DWORD *)(*(_QWORD *)(v760.m128i_i64[0] + 56) + 8LL));
            *(_DWORD *)(v494 + 68) = v626;
            v628 = v9[1];
            *((_QWORD *)&v11 + 1) = v8;
            v9[1] = *(_DWORD *)(v494 + 4);
            *(_DWORD *)(v494 + 4) = v628;
            v629 = *((_QWORD *)v9 + 3);
            *v9 = 32;
            v9[9] = v626;
            sub_120A10((__int64)(v9 + 12), v8, 0, v626, v629, 0);
            sub_11CDA0((__int64)v762);
            goto LABEL_32;
          }
        }
LABEL_1567:
        v495 = *((_QWORD *)v9 + 5);
        v8 = v237;
        v496 = *(_DWORD *)v495;
        goto LABEL_1568;
      case 21:
        v21 = (char *)(v9 + 12);
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 12), 0) && (v759 || !sub_11ED30(v760.m128i_i64[0])) )
          goto LABEL_258;
        if ( (unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], nullptr, 0) && *((_BYTE *)v9 + 48) != 2 )
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
        *((_QWORD *)&v11 + 1) = &v773;
        v762 = (char *)&v773;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 1u) && v773 == -1 )
        {
          *v9 = 7;
          goto LABEL_350;
        }
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 0) )
        {
          if ( v773 == 1 )
          {
            *((_QWORD *)&v11 + 1) = v763;
            if ( sub_11FDE0(v760.m128i_i64[0], (__int64)v763) )
            {
              v55 = v9[9] == 1;
              *v9 = 6;
              if ( !v55 )
              {
                v8 = (unsigned __int64)v763;
                v243 = (char *)v760.m128i_i64[0];
                sub_1273B0(v760.m128i_u64[0], (__int64)v763, *((_QWORD *)v9 + 3), 1);
                *((_QWORD *)&v11 + 1) = v8;
                sub_1207E0(v243, v8, 6, *((_QWORD *)v9 + 3), 1);
                *v9 = 9;
              }
              goto LABEL_350;
            }
          }
        }
        v100 = v9[9];
        if ( v100 != 1 )
        {
          if ( (*((_BYTE *)v9 + 33) & 4) != 0 )
          {
LABEL_1098:
            if ( ((v100 - 4) & 0xFFFFFFFB) == 0 )
            {
              *((_QWORD *)&v11 + 1) = (char *)&v768 + 8;
              if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 0) )
              {
                v346 = 1LL << (8 * *((_BYTE *)v9 + 36) - 1);
                if ( (unsigned __int64)(int)(8 * v9[9] - 1) >= 0x40 )
                  v346 = 0;
                if ( *((_QWORD *)&v768 + 1) == v346 )
                {
                  v9[1] |= 0x10u;
                  *v9 = 68;
                  goto LABEL_350;
                }
              }
            }
LABEL_336:
            v101 = sub_11C8E0((__int64)v9, v762, 21);
            v8 = v101;
            if ( v101 )
            {
              v102 = (char *)(v101 + 32);
              if ( sub_125B60((unsigned __int8 *)v773, v101 + 32, 0) )
              {
                v102 = (char *)(v8 + 48);
LABEL_339:
                if ( v759 || !sub_11ED30(v773) )
                {
                  *((_QWORD *)&v11 + 1) = v102;
                  sub_11CA10((char *)v773, v102);
                  if ( v21 == (char *)v773 )
                  {
LABEL_341:
                    *((_QWORD *)&v11 + 1) = v21;
                    sub_11CA10((char *)v760.m128i_i64[0], v21);
                  }
                  goto LABEL_349;
                }
                goto LABEL_1084;
              }
              if ( sub_125B60((unsigned __int8 *)v773, v8 + 48, 0) )
                goto LABEL_339;
            }
LABEL_1084:
            if ( *((_BYTE *)v9 + 64) != 5 )
              goto LABEL_628;
            v344 = *((_BYTE *)v9 + 32);
            if ( *((_BYTE *)v9 + 48) == 10 && **((_BYTE **)v9 + 7) == 5 && v344 == 6 )
            {
              if ( (unsigned __int8)sub_14E100(*((_QWORD *)v9 + 5)) )
                goto LABEL_538;
              v344 = *((_BYTE *)v9 + 32);
            }
            if ( v344 != 10
              || **((_BYTE **)v9 + 5) != 5
              || *((_BYTE *)v9 + 48) != 6
              || !(unsigned __int8)sub_14E100(*((_QWORD *)v9 + 7)) )
            {
              goto LABEL_628;
            }
LABEL_538:
            if ( v759 )
              goto LABEL_540;
LABEL_539:
            *((_QWORD *)&v11 + 1) = v763;
            if ( !(unsigned __int8)sub_1205A0(v9, (__int64)v763, 0, v52, v53, v54) )
              goto LABEL_540;
LABEL_160:
            LODWORD(a3) = *v9;
            goto LABEL_26;
          }
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_336;
LABEL_1096:
          if ( !sub_122600(*((unsigned int **)v9 + 5)) )
            goto LABEL_336;
          v100 = v9[9];
          goto LABEL_1098;
        }
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_336;
        if ( *((_BYTE *)v9 + 48) != 4 )
          goto LABEL_1277;
        v558 = *((_QWORD *)v9 + 5);
        v559 = *((_QWORD *)v9 + 7);
        if ( *(_DWORD *)v558 == 30 )
          goto LABEL_1697;
        if ( *(_DWORD *)v559 == 30 )
        {
          v559 = *((_QWORD *)v9 + 5);
          v558 = *((_QWORD *)v9 + 7);
LABEL_1697:
          if ( *(_DWORD *)v559 == 29
            && (*(_BYTE *)(v558 + 4) & 0x10) == 0
            && (*(_BYTE *)(v559 + 4) & 0x10) == 0
            && *(_QWORD *)(v558 + 24) == *(_QWORD *)(v559 + 24) )
          {
            *v9 = 40;
            v9[1] = *(_DWORD *)(v558 + 4);
            sub_123A40((__int64)&v771, (unsigned __int8 *)(v558 + 48), v98, v99);
            v560 = (unsigned __int8 *)(v558 + 32);
            v561 = v762;
            sub_123A40((__int64)v762, v560, v562, v563);
            sub_11CA10((char *)v9 + 48, (char *)&v771);
            *((_QWORD *)&v11 + 1) = v561;
            sub_11CA10((char *)v760.m128i_i64[0], v561);
            sub_11CDA0((__int64)v561);
            sub_11CDA0((__int64)&v771);
            goto LABEL_32;
          }
        }
LABEL_1277:
        if ( (*((_BYTE *)v9 + 33) & 4) != 0 )
          goto LABEL_336;
        goto LABEL_1096;
      case 22:
        goto LABEL_56;
      case 23:
        *((_QWORD *)&v11 + 1) = v758;
        if ( (unsigned __int8)sub_118AF0((__int64)v759, v758, (__int64)v761, (__int64)v9) )
          goto LABEL_32;
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_56;
        if ( *((_BYTE *)v9 + 48) != 2 )
          goto LABEL_56;
        v92 = v9[9];
        v93 = (unsigned int)(8 * v92 - 1);
        if ( (_DWORD)v93 != *(unsigned __int8 *)(*((_QWORD *)v9 + 7) + 16LL) )
          goto LABEL_56;
        v69 = *((unsigned int **)v9 + 5);
        v94 = *v69;
        if ( *v69 == 24 )
          goto LABEL_844;
        if ( v94 == 11 )
        {
          if ( v69[9] == 2 * (_DWORD)v92 && *((_BYTE *)v69 + 32) == 4 )
          {
            v407 = *((_QWORD *)v69 + 5);
            if ( *(_DWORD *)v407 == 8 )
            {
              if ( (_DWORD)v92 == *(_DWORD *)(v407 + 36) )
              {
                v762 = (char *)&v773;
                sub_123A40((__int64)&v773, (unsigned __int8 *)(v407 + 32), v92, v93);
                *((_QWORD *)&v11 + 1) = &v773;
                sub_11CA10((char *)v9 + 32, (char *)&v773);
                sub_11CDA0((__int64)&v773);
                goto LABEL_32;
              }
              if ( (int)v92 > *(_DWORD *)(v407 + 36) )
              {
                v762 = (char *)&v773;
                sub_123A40((__int64)&v773, (unsigned __int8 *)v69 + 32, v92, v93);
                v408 = v9[9];
                *((_QWORD *)&v11 + 1) = &v773;
                *((_DWORD *)src[0] + 17) = v408;
                HIDWORD(v773) = v408;
                sub_11CA10((char *)v9 + 32, (char *)&v773);
                sub_11CDA0((__int64)&v773);
                goto LABEL_32;
              }
            }
          }
        }
        else if ( (v94 & 0xFFFFFFFD) == 5 )
        {
          if ( (int)v92 >= *(unsigned __int8 *)(*((_QWORD *)v763 + 12) + 130LL) )
          {
            *v9 = 9;
            *((_QWORD *)&v11 + 1) = v763;
            v9[9] = 1;
            v21 = (char *)(v9 + 12);
            v383 = v69[9];
            *v69 = (*v69 != 5) + 38;
            sub_120A10((__int64)(v69 + 12), *((__int64 *)&v11 + 1), 0, v383, -1, 0);
            v69[17] = 1;
            goto LABEL_350;
          }
        }
        else if ( v94 == 13 && *((_BYTE *)v69 + 32) == 4 && *((_BYTE *)v69 + 48) == 4 )
        {
          v95 = **((_DWORD **)v69 + 5);
          if ( (unsigned int)(v95 - 8) <= 1 )
          {
            v96 = **((_DWORD **)v69 + 7);
            if ( (unsigned int)(v96 - 8) <= 1 )
            {
              if ( v95 == 9 && v96 == 9 )
                v97 = 35;
              else
                v97 = 40;
              *v69 = v97;
              v21 = (char *)(v9 + 12);
              v69[17] = 1;
              v9[9] = 1;
              *v9 = 9;
              goto LABEL_350;
            }
          }
        }
LABEL_56:
        *((_QWORD *)&v11 + 1) = &v773;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        v762 = (char *)&v773;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v773, 0) && !v773 )
        {
          v21 = (char *)(v9 + 12);
          if ( v759 )
            goto LABEL_349;
          memset(src, 0, sizeof(src));
          v773 = (__int64)&off_4DDD00;
          *((_QWORD *)&v11 + 1) = v762;
          *(_QWORD *)&v775 = *((_QWORD *)v763 + 12);
          if ( !(unsigned int)sub_11F760(v9, v762) )
            goto LABEL_349;
          if ( *((_BYTE *)v9 + 48) != 2 )
            goto LABEL_160;
        }
        else if ( *((_BYTE *)v9 + 48) != 2 )
        {
          goto LABEL_19;
        }
        v21 = (char *)(v9 + 12);
        v23 = *(_QWORD *)(*((_QWORD *)v9 + 7) + 16LL);
        v24 = (unsigned __int8)v23;
        if ( !(_BYTE)v23 )
          goto LABEL_349;
        a3 = (__int64)sub_14DA60;
        v25 = v9[9];
        v26 = *(__int64 (**)())(*(_QWORD *)v763 + 328LL);
        if ( v26 != sub_14DA60 )
        {
          v368 = ((__int64 (__fastcall *)(unsigned __int8 *, __int64))v26)(v763, v25);
          if ( v368 )
          {
            if ( *((_BYTE *)v9 + 48) == 2 )
            {
              a3 = *((_QWORD *)v9 + 7);
              a4 = *(_QWORD *)(a3 + 16);
              *((_QWORD *)&v11 + 1) = (unsigned __int8)a4;
              if ( (unsigned __int8)a4 > v368 )
              {
                *(_QWORD *)(a3 + 16) = a4 & v368;
                goto LABEL_32;
              }
            }
          }
          LODWORD(v25) = v9[9];
        }
        v27 = 8 * v25;
        if ( v27 <= (unsigned __int8)v23 )
        {
          if ( *v9 == 24 )
          {
            *((_QWORD *)&v11 + 1) = v27 - 1;
            a7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)SDWORD2(v11), (__m128i)(unsigned __int64)SDWORD2(v11));
            *(__m128i *)(*((_QWORD *)v9 + 7) + 16LL) = a7;
            goto LABEL_32;
          }
          goto LABEL_258;
        }
        *(_QWORD *)&v11 = v760.m128i_i64[0];
        v8 = (unsigned __int64)&v768;
        *((_QWORD *)&v11 + 1) = &v768;
        v255 = sub_11FD80((char *)v760.m128i_i64[0], &v768, 1u);
        v256 = *v9;
        if ( !v255 || (*((_QWORD *)&v11 + 1) = v9[9], SDWORD2(v11) > 8) )
        {
          if ( (_DWORD)v256 == 22 )
          {
            v473 = 0;
            *v9 = 14;
            if ( (v23 & 0xC0) == 0 )
              v473 = 1LL << v23;
            *((_QWORD *)&v11 + 1) = v763;
            sub_120A10((__int64)(v9 + 12), (__int64)v763, v473, v9[9], *((_QWORD *)v9 + 3), 0);
            goto LABEL_32;
          }
          if ( (unsigned int)(v256 - 23) <= 1 )
          {
            if ( *((_BYTE *)v9 + 32) == 4 )
            {
              v676 = *((_QWORD *)v9 + 5);
              if ( *(_DWORD *)v676 == 15
                && (unsigned __int8)sub_11FD80((char *)(v676 + 48), v762, 0)
                && (unsigned __int64)v773 > 1 )
              {
                v677 = v9[9];
                if ( (v23 & 0xC0) != 0 )
                {
                  v481 = sub_32ABC0(0, v677, 0);
                  v678 = 0;
                }
                else
                {
                  v481 = sub_32ABC0(v773 << v23, v677, 0);
                  v678 = v481 >> v23;
                }
                if ( v773 == v678 )
                {
                  *v9 = 15;
                  v480 = v9[9];
                  v21 = (char *)(v9 + 12);
                  goto LABEL_1535;
                }
              }
            }
            *((_QWORD *)&v11 + 1) = v758;
            *(_QWORD *)&v11 = v759;
            if ( (unsigned __int8)sub_1299D0(v11, (char *)v760.m128i_i64[0], 0) )
            {
              if ( (int)(8 * v9[9] - 1) <= (unsigned __int8)v23 )
                goto LABEL_258;
            }
            if ( (unsigned __int8)v23 > 7u )
            {
              *((_QWORD *)&v11 + 1) = v758;
              *(_QWORD *)&v11 = v759;
              if ( (unsigned __int8)sub_12A040(v11, v760.m128i_i64[0], (int)(unsigned __int8)v23 >> 3) )
                goto LABEL_258;
            }
          }
          if ( *((_BYTE *)v9 + 32) != 4 )
            goto LABEL_19;
          *((_QWORD *)&v11 + 1) = (unsigned __int8)v23;
          v257 = sub_151C80((int *)v9, (unsigned __int8)v23);
          if ( v257 == -1 )
            goto LABEL_258;
          if ( v257 == 1 )
            goto LABEL_32;
          v258 = *((_QWORD *)v9 + 5);
          LODWORD(v15) = *v9;
          v259 = *(_DWORD *)v258;
          LOBYTE(v753) = *v9 == 24;
          if ( *(_DWORD *)v258 != 14 )
          {
            if ( v259 != 22 )
              goto LABEL_908;
            if ( *(_BYTE *)(v258 + 48) != 2 )
            {
              v8 = 0;
LABEL_901:
              v771 = (unsigned int *)(v258 + 32);
LABEL_902:
              *((_QWORD *)&v11 + 1) = v771;
              if ( v771 )
              {
                if ( v24 != (_DWORD)v8 && (v8 & 7) == 0 )
                {
                  v261 = (unsigned int)((int)v8 >> 31);
                  v262 = v9[9] - (int)v8 / 8;
                  if ( (unsigned int)(v262 - 1) <= 1 || v262 == 4 )
                  {
                    v686 = (__int64 *)v762;
                    v760.m128i_i32[0] = v15;
                    LODWORD(v261) = (int)v8 % 8;
                    sub_123A40((__int64)v762, (unsigned __int8 *)v771, v261, 8);
                    *((_QWORD *)&v11 + 1) = v763;
                    if ( (unsigned __int8)sub_1272B0((unsigned __int64)v686, (__int64)v763, v262, 0) )
                    {
                      sub_11CA10((char *)(*((_QWORD *)v9 + 5) + 32LL), v762);
                      sub_11CDA0(*((_QWORD *)v9 + 5) + 48LL);
                      v687 = 9;
                      if ( v760.m128i_i32[0] == 24 )
                        v687 = 8;
                      **((_DWORD **)v9 + 5) = v687;
                      if ( v24 < (int)v8 )
                        *v9 = 22;
                      *((_QWORD *)&v11 + 1) = v763;
                      v688 = v24 - v8;
                      if ( v24 - (int)v8 < 0 )
                        v688 = v8 - v24;
                      sub_120A10((__int64)(v9 + 12), (__int64)v763, v688, v9[13], *((_QWORD *)v9 + 3), 0);
                      sub_11CDA0((__int64)v762);
                      goto LABEL_32;
                    }
                    sub_11CDA0((__int64)v762);
                  }
                }
              }
              LODWORD(v15) = *v9;
              goto LABEL_908;
            }
            v260 = *(_QWORD *)(v258 + 56);
            v8 = *(unsigned __int8 *)(v260 + 16);
            if ( (unsigned __int8)v23 != (_DWORD)v8 )
            {
              if ( (_DWORD)v15 == 24 )
              {
                v567 = *(unsigned __int8 *)(v260 + 16);
                *((_QWORD *)&v11 + 1) = v9;
                v760.m128i_i32[0] = 24;
                if ( (unsigned __int8)sub_14E360((__int64)v763, (__int64)v9, (unsigned __int8)v23, v567, 0) )
                  goto LABEL_32;
                v258 = *((_QWORD *)v9 + 5);
                LODWORD(v15) = v760.m128i_i32[0];
              }
              goto LABEL_901;
            }
            v754 = &byte_1;
            v571 = nullptr;
            goto LABEL_1726;
          }
          if ( (unsigned int)(unsigned __int8)v23 - 3 <= 0x3C )
          {
            LODWORD(v754) = *v9;
            v592 = sub_11C8A0(v258, nullptr);
            LODWORD(v15) = (_DWORD)v754;
            v571 = (char *)v592;
            if ( v592 )
            {
              v593 = sub_32ABC0(
                       *(_QWORD *)(*(_QWORD *)(v592 + 8) + 16LL),
                       *(unsigned int *)(v592 + 4),
                       (unsigned __int8)v753);
              LODWORD(v15) = (_DWORD)v754;
              v594 = v593;
              *(_QWORD *)&v768 = v593;
              v595 = v593 >> v24;
              if ( v595 << v24 == v594 )
              {
                v754 = (char *)v595;
                v8 = 0;
LABEL_1726:
                v572 = v9[9];
                v573 = (unsigned int)(8 * v572 - v24);
                if ( (_DWORD)v15 != 24 )
                {
                  *v9 = 20;
                  v574 = 0;
                  if ( (unsigned __int64)(int)v573 <= 0x3F )
                    v574 = 1LL << (8 * (unsigned __int8)v572 - v24);
                  sub_120A10((__int64)(v9 + 12), (__int64)v763, v574 - 1, v572, *((_QWORD *)v9 + 3), 0);
                  v577 = *((_QWORD *)v9 + 5);
                  if ( (char *)(v577 + 32) == v571 )
                  {
                    sub_11CA10(v571, (char *)(v577 + 48));
                    v577 = *((_QWORD *)v9 + 5);
                  }
LABEL_1731:
                  v578 = v762;
                  sub_123A40((__int64)v762, (unsigned __int8 *)(v577 + 32), v575, v576);
                  sub_11CA10((char *)v760.m128i_i64[0], v578);
                  *((_QWORD *)&v11 + 1) = v9[17];
                  v579 = sub_32ABC0(v754, *((_QWORD *)&v11 + 1), (unsigned __int8)v753);
                  if ( v579 == -1 )
                  {
                    *((_QWORD *)&v11 + 1) = v763;
                    sub_12B6F0((__int64)v9, (__int64)v763, 5, v9[17], 1);
                  }
                  else if ( v579 != 1 )
                  {
                    *((_QWORD *)&v11 + 1) = v763;
                    sub_126240((char *)v760.m128i_i64[0], (__int64)v763, 0xEu, *((_QWORD *)v9 + 3), v579, v9[9]);
                  }
                  goto LABEL_2152;
                }
                if ( (unsigned int)v573 <= 0x20 )
                {
                  v580 = 0x100010100LL;
                  if ( _bittest64(&v580, v573) )
                  {
                    v581 = *((_QWORD *)v9 + 5);
                    *v9 = 8;
                    if ( (char *)(v581 + 32) == v571 )
                    {
                      LODWORD(v752) = 8 * v572 - v24;
                      sub_11CA10(v571, (char *)(v581 + 48));
                      v581 = *((_QWORD *)v9 + 5);
                      LODWORD(v573) = v752;
                    }
                    sub_1273B0(v581 + 32, (__int64)v763, *((_QWORD *)v9 + 3), (int)v573 >> 3);
                    sub_11CDA0((__int64)(v9 + 12));
                    v577 = *((_QWORD *)v9 + 5);
                    goto LABEL_1731;
                  }
                }
                v771 = nullptr;
                if ( v259 == 22 )
                {
                  v258 = *((_QWORD *)v9 + 5);
                  goto LABEL_901;
                }
LABEL_1722:
                if ( ((unsigned __int64)v768 & ((_QWORD)v768 - 1LL)) == 0 )
                {
                  v568 = *((_QWORD *)v9 + 5);
                  v760.m128i_i32[0] = v15;
                  v569 = sub_11C8A0(v568, &v771);
                  LODWORD(v15) = v760.m128i_i32[0];
                  if ( v569 )
                  {
                    v570 = log2ceil();
                    LODWORD(v15) = v760.m128i_i32[0];
                    v8 = v570;
                  }
                }
                goto LABEL_902;
              }
              if ( *v9 == 24 && (v594 & (v594 - 1)) == 0 )
              {
                v596 = *((_QWORD *)v9 + 5);
                v760.m128i_i32[0] = (int)v754;
                v597 = v571 == (char *)(v596 + 32);
                v598 = log2ceil();
                *((_QWORD *)&v11 + 1) = v9;
                v599 = sub_14E360((__int64)v763, (__int64)v9, (unsigned int)v24, v598, v597);
                LODWORD(v15) = v760.m128i_i32[0];
                if ( v599 )
                  goto LABEL_32;
              }
            }
          }
          v8 = 0;
          v771 = nullptr;
          goto LABEL_1722;
        }
        v679 = v768;
        a4 = (unsigned __int8)v23;
        if ( DWORD2(v11) == 4 )
        {
          if ( (_DWORD)v256 == 23 )
          {
            v314 = (unsigned int)v768 >> v23;
            goto LABEL_1009;
          }
          if ( (_DWORD)v256 != 24 )
          {
            if ( (_DWORD)v256 != 22 )
              sub_14E4E0(v11, *((_QWORD *)&v11 + 1), v256, (unsigned __int8)v23);
            v314 = (unsigned int)((_DWORD)v768 << v23);
            goto LABEL_1009;
          }
        }
        else
        {
          if ( SDWORD2(v11) > 4 )
          {
            if ( DWORD2(v11) == 8 )
            {
              switch ( (_DWORD)v256 )
              {
                case 0x17:
                  v314 = (unsigned __int64)v768 >> v23;
                  break;
                case 0x18:
                  v314 = (__int64)v768 >> v23;
                  break;
                case 0x16:
                  v314 = (_QWORD)v768 << v23;
                  break;
                default:
                  sub_14E4E0(v11, *((_QWORD *)&v11 + 1), v256, (unsigned __int8)v23);
              }
              goto LABEL_1009;
            }
            goto LABEL_1978;
          }
          if ( DWORD2(v11) != 1 )
          {
            if ( DWORD2(v11) == 2 )
            {
              switch ( (_DWORD)v256 )
              {
                case 0x17:
                  v314 = (int)(unsigned __int16)v768 >> v23;
                  break;
                case 0x18:
                  v314 = (__int16)v768 >> v23;
                  break;
                case 0x16:
                  v314 = (unsigned __int16)((unsigned __int16)v768 << v23);
                  break;
                default:
                  sub_14E4E0(v11, *((_QWORD *)&v11 + 1), v256, (unsigned __int8)v23);
              }
              goto LABEL_1009;
            }
LABEL_1978:
            if ( !under_debugger )
              sub_383060(51063);
            goto LABEL_2165;
          }
          if ( (_DWORD)v256 == 23 )
          {
            v314 = (int)(unsigned __int8)v768 >> v23;
            goto LABEL_1009;
          }
          if ( (_DWORD)v256 != 24 )
          {
            if ( (_DWORD)v256 != 22 )
              sub_14E4E0(v11, *((_QWORD *)&v11 + 1), v256, (unsigned __int8)v23);
            v314 = (unsigned __int8)((unsigned __int8)v768 << v23);
            goto LABEL_1009;
          }
          v679 = (char)v768;
        }
        v314 = v679 >> v23;
LABEL_1009:
        *(_QWORD *)&v768 = v314;
        goto LABEL_259;
      case 24:
        *((_QWORD *)&v11 + 1) = v758;
        v17 = sub_119AE0((__int64)v759, v758, (__int64)v9, 0);
        if ( v17 )
          goto LABEL_47;
        *((_QWORD *)&v11 + 1) = v758;
        if ( !(unsigned __int8)sub_118AF0((__int64)v759, v758, (__int64)v761, (__int64)v9) )
          goto LABEL_56;
        goto LABEL_32;
      case 25:
        v8 = (unsigned __int64)&v768;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 0) )
        {
          v124 = (char *)(v9 + 12);
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 0) )
          {
            v144 = sub_32ABC0(v768 + *((_QWORD *)&v768 + 1), v9[9], 0);
            *(_QWORD *)&v768 = v144 < (unsigned __int64)v768;
            goto LABEL_259;
          }
        }
        else
        {
          v124 = (char *)(v9 + 12);
        }
        if ( *((_BYTE *)v9 + 32) == 2 )
          sub_11CA10((char *)v760.m128i_i64[0], v124);
        if ( v758
          && *(_DWORD *)v758 == 42
          && (unsigned __int8)sub_11FD80(v124, (_QWORD *)&v768 + 1, 0)
          && *((_QWORD *)&v768 + 1) )
        {
          *((_QWORD *)&v11 + 1) = v9[13];
          v125 = *((__m128 **)v9 + 7);
          v126 = sub_32ABC0(-*((_QWORD *)&v768 + 1), *((_QWORD *)&v11 + 1), 0);
          a7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v126, (__m128i)(unsigned __int64)v126);
          v125[1] = (__m128)a7;
          *v9 = 34;
          goto LABEL_32;
        }
LABEL_455:
        v762 = (char *)&v773;
        if ( !(unsigned __int8)sub_11FD80(v124, &v773, 0) || v773 )
        {
          *((_QWORD *)&v11 + 1) = v762;
          if ( !(unsigned __int8)sub_11FD80((char *)v9 + 32, v762, 0) )
            goto LABEL_19;
LABEL_458:
          if ( v773 )
          {
            LODWORD(v15) = *v9;
            LODWORD(a3) = *v9;
            goto LABEL_20;
          }
        }
        goto LABEL_258;
      case 26:
        v124 = (char *)(v9 + 12);
        if ( !v761 )
          goto LABEL_455;
        v124 = (char *)(v9 + 12);
        LODWORD(v762) = *(_DWORD *)v761;
        if ( (((_DWORD)v762 - 19) & 0xFFFFFFFD) != 0
          || !(unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 0) )
        {
          goto LABEL_455;
        }
        v140 = v9[13];
        v141 = *((_QWORD *)&v768 + 1);
        v142 = 0;
        v143 = 8 * v140 - 1;
        if ( (unsigned __int64)v143 <= 0x3F )
        {
          v142 = 1LL << v143;
          v141 = (2 * (1LL << v143) - 1) & *((_QWORD *)&v768 + 1);
        }
        if ( v142 == v141 )
          goto LABEL_455;
        *((_QWORD *)&v11 + 1) = v763;
        sub_1207E0((char *)v9 + 48, (__int64)v763, 5, *((_QWORD *)v9 + 3), v140);
        *v9 = 30;
        goto LABEL_32;
      case 27:
        v762 = (char *)&v773;
        goto LABEL_473;
      case 28:
        v762 = (char *)&v773;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) && v773 == 1 )
        {
          v169 = v9[9];
          *v9 = 20;
          *((_QWORD *)&v11 + 1) = v763;
          v9[13] = v169;
          v9[17] = v169;
          sub_12B6F0((__int64)v9, *((__int64 *)&v11 + 1), 10, -1, 1);
          v9[17] = 1;
          goto LABEL_32;
        }
        if ( v758 )
        {
          if ( *(_DWORD *)v758 == 42 )
          {
            v8 = (unsigned __int64)&v768;
            if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v768, 0) )
            {
              if ( (_QWORD)v768 )
              {
                v244 = v768 - 1;
                v245 = v9[9];
                v246 = *((__m128 **)v9 + 7);
                *v9 = 20;
                v247 = 0;
                v9[13] = v245;
                if ( (unsigned __int64)v244 < 0x40 )
                  v247 = 1LL << v244;
                v248 = sub_32ABC0(v247, v245, 0);
                v8 = (unsigned __int64)v762;
                a7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v248, (__m128i)(unsigned __int64)v248);
                *(_QWORD *)&v11 = v762;
                v246[1] = (__m128)a7;
                v9[17] = v245;
                v773 = 0xFFFFFFFF00000000LL;
                src[0] = nullptr;
                sub_1262E0(v11, (unsigned __int8 *)v9);
                *v9 = 32;
                sub_11CA10((char *)v9 + 32, (char *)v8);
                v9[9] = v245;
                *((_QWORD *)&v11 + 1) = v763;
                sub_120A10((__int64)(v9 + 12), (__int64)v763, 0, v245, *((_QWORD *)v9 + 3), 0);
                v9[17] = 1;
                sub_11CDA0(v8);
                goto LABEL_32;
              }
            }
          }
        }
LABEL_473:
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, v762, 0) && !v773 )
          goto LABEL_258;
        *((_QWORD *)&v11 + 1) = v762;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 0) )
          goto LABEL_458;
        LODWORD(v15) = *v9;
        LODWORD(a3) = *v9;
        goto LABEL_20;
      case 29:
        v8 = (unsigned __int64)&v768;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 1u) )
        {
          *(_QWORD *)&v768 = (unsigned __int64)v768 >> 63;
          goto LABEL_259;
        }
        *((_QWORD *)&v11 + 1) = v9;
        v17 = sub_122E80((__int64)v763, v9);
        if ( v17 )
          goto LABEL_47;
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_2168;
        *((_QWORD *)&v11 + 1) = v9;
        if ( (unsigned __int8)sub_14DC50((__int64)v763, (__int64)v9) )
          goto LABEL_32;
        if ( **((_DWORD **)v9 + 5) != 9 )
        {
LABEL_2168:
          *((_QWORD *)&v51 + 1) = v758;
          *(_QWORD *)&v51 = v759;
          if ( !(unsigned __int8)sub_1299D0(v51, (char *)v760.m128i_i64[0], 0) )
            goto LABEL_200;
        }
        goto LABEL_258;
      case 30:
        v762 = (char *)&v773;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) && !v773 )
          goto LABEL_258;
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_10;
        v8 = *((_QWORD *)v9 + 5);
        if ( (unsigned int)(*(_DWORD *)v8 - 12) > 1 )
          goto LABEL_10;
        v226 = (char *)sub_11C8A0(*((_QWORD *)v9 + 5), &v771);
        v227 = v226;
        if ( !v226 || (unsigned __int8)sub_11FD80(v226, v762, 0) && !v773 )
          goto LABEL_10;
        if ( !sub_125B60((unsigned __int8 *)v771, (__int64)(v9 + 12), 0) )
          goto LABEL_10;
        *((_QWORD *)&v11 + 1) = *((unsigned int *)v227 + 1);
        v228 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v227 + 1) + 16LL), *((_QWORD *)&v11 + 1), 1);
        LOBYTE(a3) = v228 <= 0;
        if ( *(_DWORD *)v8 == 12 )
          goto LABEL_784;
        a3 = v8 + 48;
        if ( v227 == (char *)(v8 + 48) )
        {
          LOBYTE(a3) = v228 > 0;
LABEL_784:
          v229 = 41;
          if ( (_BYTE)a3 )
            v229 = 39;
          *v9 = v229;
          goto LABEL_32;
        }
LABEL_10:
        v8 = (unsigned __int64)&v768;
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 1u)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 1u) )
        {
          a4 = v768;
          switch ( *v9 )
          {
            case 0x1Eu:
              v287 = 8 * v9[9] - 1;
              if ( (unsigned __int64)(int)v287 <= 0x3F )
              {
                v288 = v768 - *((_QWORD *)&v768 + 1);
                v12 = _bittest64(&v288, v287);
              }
              *(_QWORD *)&v768 = (__int64)v768 >= *((_QWORD *)&v768 + 1) == v12;
              break;
            case 0x26u:
              *(_QWORD *)&v768 = (__int64)v768 > *((_QWORD *)&v768 + 1);
              break;
            case 0x27u:
              *(_QWORD *)&v768 = (__int64)v768 >= *((_QWORD *)&v768 + 1);
              break;
            case 0x28u:
              *(_QWORD *)&v768 = (__int64)v768 < *((_QWORD *)&v768 + 1);
              break;
            case 0x29u:
              *(_QWORD *)&v768 = (__int64)v768 <= *((_QWORD *)&v768 + 1);
              break;
            default:
              goto LABEL_259;
          }
          goto LABEL_259;
        }
        *((_QWORD *)&v11 + 1) = v9;
        v17 = sub_122E80((__int64)v763, v9);
        if ( v17 )
          goto LABEL_47;
LABEL_12:
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_13;
        *((_QWORD *)&v11 + 1) = &v773;
        v762 = (char *)&v773;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) || v773 )
          goto LABEL_13;
        *((_QWORD *)&v11 + 1) = v9;
        if ( (unsigned __int8)sub_14DC50((__int64)v763, (__int64)v9) )
          goto LABEL_32;
        v137 = **((_DWORD **)v9 + 5);
        if ( v137 != 5 )
          goto LABEL_524;
        v139 = sub_32EA00(*v9);
        if ( v139 )
          goto LABEL_527;
        v137 = **((_DWORD **)v9 + 5);
LABEL_524:
        if ( v137 == 7 )
        {
          v138 = *v9;
          if ( (unsigned int)(v138 - 50) <= 1 )
          {
            v139 = sub_32E9E0(v138);
            if ( v139 )
            {
LABEL_527:
              *v9 = v139;
              v69 = *((unsigned int **)v9 + 5);
              goto LABEL_519;
            }
          }
        }
        goto LABEL_13;
      case 31:
        v117 = v9[1];
        if ( (v117 & 0x10) != 0 )
        {
          *((_QWORD *)&v11 + 1) = v763;
          v118 = *((_QWORD *)v763 + 12);
          if ( (*(_BYTE *)(v118 + 604) & 4) != 0 )
          {
            if ( !v759 )
            {
              memset(src, 0, sizeof(src));
              v773 = (__int64)&off_4DDD00;
              *((_QWORD *)&v11 + 1) = &v773;
              *(_QWORD *)&v775 = v118;
              if ( (unsigned int)sub_11F760(v9, &v773) )
                goto LABEL_160;
              v117 = v9[1];
            }
            v119 = *((_QWORD *)v9 + 3);
            *((_QWORD *)&v11 + 1) = v763;
            v9[1] = v117 & 0xFFFFFFEF;
            v21 = (char *)(v9 + 12);
            sub_120A10((__int64)(v9 + 8), *((__int64 *)&v11 + 1), 0, 1, v119, 0);
            goto LABEL_349;
          }
        }
        else if ( *((_BYTE *)v9 + 32) == 4 && **((_DWORD **)v9 + 5) == 13 )
        {
          v21 = (char *)(v9 + 12);
          *((_QWORD *)&v11 + 1) = &v773;
          v762 = (char *)&v773;
          if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) || v773 )
            goto LABEL_19;
          v69 = *((unsigned int **)v9 + 5);
          goto LABEL_516;
        }
LABEL_416:
        if ( !v765 )
          goto LABEL_21;
        goto LABEL_31;
      case 32:
      case 33:
        *((_QWORD *)&v11 + 1) = v758;
        if ( (unsigned __int8)sub_118AF0((__int64)v759, v758, (__int64)v761, (__int64)v9) )
          goto LABEL_32;
        v8 = (unsigned __int64)&v768;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 1u)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 1u) )
        {
          v254 = v768;
          a4 = v768 == *((_QWORD *)&v768 + 1);
          v55 = *v9 == 32;
          *(_QWORD *)&v768 = a4;
          if ( v55 )
            *(_QWORD *)&v768 = v254 != *((_QWORD *)&v768 + 1);
          goto LABEL_259;
        }
        v762 = (char *)&v773;
        if ( (unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], &v773, 0) && !v773 )
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_192;
        if ( (v9[1] & 0x10) != 0 )
        {
          if ( *v9 - 42 <= 0xA )
            goto LABEL_17;
          goto LABEL_487;
        }
        v21 = (char *)(v9 + 12);
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 0) || v773 )
          goto LABEL_1171;
        v69 = *((unsigned int **)v9 + 5);
        v401 = *v69;
        if ( *v69 == 5 )
          goto LABEL_519;
        switch ( v401 )
        {
          case 7:
LABEL_1480:
            sub_120A10((__int64)v21, (__int64)v763, -1, v9[13], *((_QWORD *)v69 + 3), 0);
            v69 = *((unsigned int **)v9 + 5);
            goto LABEL_519;
          case 13:
            if ( v759 && (*((_BYTE *)v69 + 32) != 1 || *(_DWORD *)(v759[4].m128i_i64[0] + 1184) != v69[10]) )
              goto LABEL_516;
            break;
          case 19:
            if ( (unsigned __int8)sub_11FD80((char *)v69 + 48, &v768, 0) && (_QWORD)v768 )
              goto LABEL_1111;
            v69 = *((unsigned int **)v9 + 5);
            break;
        }
        v402 = sub_97B50((__int64)v763, (__int64)v759, v758, v69);
        v403 = *((unsigned int **)v9 + 5);
        if ( v402 )
        {
          v659 = v403[17];
          *((_QWORD *)&v11 + 1) = v763;
          v9[9] = v659;
          sub_1207E0((char *)v9 + 48, *((__int64 *)&v11 + 1), 9, *((_QWORD *)v403 + 3), v659);
          goto LABEL_32;
        }
        v404 = *v403;
        if ( (_DWORD)v404 != 9 )
          goto LABEL_1295;
        v444 = 9;
        if ( *((_BYTE *)v403 + 32) != 4 )
          goto LABEL_2169;
        v403 = *((unsigned int **)v403 + 5);
        v404 = *v403;
LABEL_1295:
        if ( (unsigned int)(v404 - 29) <= 0xC )
        {
          if ( *v9 != 33 || (LODWORD(v404) = sub_32E9E0(v404), (_DWORD)v404) )
          {
            *v403 = v404;
            v69 = *((unsigned int **)v9 + 5);
            v405 = *v69;
            if ( *v69 == 9 )
              v405 = 4;
            *v9 = v405;
            v78 = v9[1];
            goto LABEL_517;
          }
        }
        v444 = *v403;
        if ( *v403 - 23 <= 1 )
        {
          if ( *((_BYTE *)v403 + 48) == 2
            && 8 * v403[9] - 1 == *(unsigned __int8 *)(*((_QWORD *)v403 + 7) + 16LL)
            && *((_BYTE *)v403 + 32) == 4 )
          {
            v692 = *((_QWORD *)v403 + 5);
            if ( *(_DWORD *)v692 == 7 )
            {
              v693 = v762;
              src[0] = nullptr;
              v773 = 0xFFFFFFFF00000000LL;
              sub_11CA10(v762, (char *)(v692 + 32));
              *((_QWORD *)&v11 + 1) = v760.m128i_i64[0];
              sub_11CA10(v693, (char *)v760.m128i_i64[0]);
              v55 = *v9 == 32;
              v9[13] = v9[9];
              v694 = 40;
              if ( v55 )
                v694 = 39;
              *v9 = v694;
              sub_11CDA0((__int64)v762);
              goto LABEL_32;
            }
          }
        }
        else
        {
LABEL_2169:
          if ( v759 )
          {
            if ( v444 == 20 )
            {
              v654 = v403[9];
              if ( v403 == *((unsigned int **)v9 + 5) || *(unsigned __int8 *)(*((_QWORD *)v763 + 12) + 130LL) <= v654 )
              {
                v655 = 8 * v654 - 1;
                v656 = 0;
                if ( (unsigned __int64)v655 <= 0x3F )
                  v656 = 1LL << v655;
                if ( sub_A2350((__int64)(v403 + 12), v656, 0) )
                {
                  v657 = *(_QWORD **)(v759[4].m128i_i64[0] + 1328);
                  if ( !*v657 )
                    goto LABEL_1907;
                  v658 = *(_QWORD *)*v657 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( v658 )
                  {
                    v753 = (_QWORD *)*v657;
                    v8 = *(_QWORD *)(v759[4].m128i_i64[0] + 1328);
                    v754 = *((char **)v403 + 7);
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        if ( (*(_BYTE *)v658 & 2) != 0 )
                        {
                          v660 = v753;
                          v658 = *(_QWORD *)v8;
                          goto LABEL_1906;
                        }
                        v752 = v658 + 24;
                        if ( (int)sub_257C40(v754) >= 0 )
                          break;
                        v658 = *(_QWORD *)(v658 + 8);
                      }
                      if ( (int)sub_257C40(v752) >= 0 )
                        break;
                      v658 = *(_QWORD *)(v658 + 16);
                    }
                    v660 = v753;
LABEL_1906:
                    if ( v660 == (_QWORD *)v658 )
                    {
LABEL_1907:
                      v661 = v762;
                      src[0] = nullptr;
                      v773 = 0xFFFFFFFF00000000LL;
                      sub_11CA10(v762, (char *)v403 + 32);
                      *((_QWORD *)&v11 + 1) = v661;
                      sub_11CA10((char *)v760.m128i_i64[0], v661);
                      if ( *v9 == 33 )
                      {
                        v662 = v9[9];
                        *v9 = 39;
                        v9[13] = v662;
                      }
                      else
                      {
                        *v9 = 29;
                        sub_11CDA0((__int64)(v9 + 12));
                      }
                      goto LABEL_2152;
                    }
                  }
                }
              }
            }
          }
        }
        v445 = (unsigned __int8 *)sub_30D1C0(*((_QWORD *)v9 + 5));
        if ( v445 )
        {
          v446 = *v9;
          v8 = (unsigned __int64)v762;
          *v9 = 29;
          v773 = 0xFFFFFFFF00000000LL;
          src[0] = nullptr;
          sub_125180(v8, v445);
          *((_QWORD *)&v11 + 1) = v8;
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v8);
          sub_11CDA0((__int64)(v9 + 12));
          if ( v446 == 33 )
          {
            v711 = j__qalloc_or_throw(80, v8, v447, v448);
            sub_1510E0((_QWORD *)v711, *((_QWORD *)v9 + 3));
            sub_11D890(v711, (__int64)v9);
            *((_QWORD *)v9 + 5) = v711;
            *((_QWORD *)&v11 + 1) = v711 + 64;
            *v9 = 6;
            *((_BYTE *)v9 + 32) = 4;
            v712 = *(_DWORD *)(v711 + 68);
            v9[9] = v712;
            v9[17] = v712;
            sub_11CA10((char *)v9 + 64, (char *)(v711 + 64));
          }
          goto LABEL_2152;
        }
LABEL_1171:
        v369 = *((_DWORD **)v9 + 5);
        if ( *v369 == 5 && sub_14FC50((__int64)(v369 + 8), (__int64)(v9 + 12))
          || (unsigned __int8)sub_11FD80((char *)v9 + 48, v762, 0)
          && !v773
          && (v438 = *((_DWORD **)v9 + 5), *v438 == 12)
          && sub_14FC50((__int64)(v438 + 8), (__int64)(v438 + 12)) )
        {
LABEL_1111:
          *(_QWORD *)&v768 = *v9 != 33;
          goto LABEL_259;
        }
        if ( *((_BYTE *)v9 + 48) == 4 )
        {
          v370 = (unsigned __int8 *)sub_11C8E0((__int64)v9, v770, 33);
          if ( v370 )
          {
            if ( *v770[0] == 4 )
            {
              v371 = *((_QWORD *)v770[0] + 1);
              if ( *(_DWORD *)v371 == 35
                && v371
                && ((*(_BYTE *)(v371 + 4) & 0x10) != 0) == ((v370[4] & 0x10) != 0)
                && sub_125B90(v370, (__int64)v763, *((unsigned int **)v770[0] + 1), 2u) )
              {
                *v9 = 36;
                v9[1] = *(_DWORD *)(v371 + 4);
                sub_123A40((__int64)&v771, (unsigned __int8 *)(v371 + 32), v372, v373);
                v374 = (unsigned __int8 *)(v371 + 48);
                v375 = v762;
                sub_123A40((__int64)v762, v374, v376, v377);
                sub_11CA10((char *)v760.m128i_i64[0], (char *)&v771);
                *((_QWORD *)&v11 + 1) = v375;
                sub_11CA10((char *)v9 + 48, v375);
                sub_11CDA0((__int64)v375);
                sub_11CDA0((__int64)&v771);
                goto LABEL_32;
              }
            }
          }
        }
LABEL_192:
        if ( (v9[1] & 0x10) == 0 )
        {
          v341 = (unsigned __int8 *)v760.m128i_i64[0];
          v8 = (unsigned __int64)(v9 + 12);
          v342 = v766;
          for ( i = 2; ; i = 1 )
          {
            if ( *(_BYTE *)v8 == 4 )
            {
              v347 = *(_QWORD *)(v8 + 8);
              if ( (unsigned int)(*(_DWORD *)v347 - 12) <= 1
                && *(_BYTE *)(v347 + 48) == 2
                && (!(unsigned __int8)sub_11FD80((char *)(v347 + 48), v762, 0) || v773)
                && sub_125B60(v341, *(_QWORD *)(v8 + 8) + 32LL, 0)
                && !(unsigned __int8)sub_1516B0((__int64)v341, (__int64)v763, 0, v348, v349, v350) )
              {
                break;
              }
            }
            if ( i == 1 )
            {
              v766 = v342;
              goto LABEL_193;
            }
            v345 = v341;
            v341 = (unsigned __int8 *)v8;
            v8 = (unsigned __int64)v345;
          }
          v766 = v342;
          goto LABEL_1111;
        }
LABEL_193:
        if ( *((_BYTE *)v9 + 32) == 2 && *((_BYTE *)v9 + 48) != 2 )
        {
          *((_QWORD *)&v11 + 1) = v9 + 12;
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
          goto LABEL_32;
        }
        goto LABEL_14;
      case 34:
      case 36:
      case 37:
        goto LABEL_40;
      case 35:
        v21 = (char *)(v9 + 12);
        v762 = (char *)&v773;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) || v773 != 1 )
          goto LABEL_503;
        v22 = v9[1] & 0x10;
        if ( *((_BYTE *)v9 + 32) == 4 )
        {
          if ( v22 )
            goto LABEL_1022;
          if ( (unsigned __int8)sub_97B50((__int64)v763, (__int64)v759, v758, *((_DWORD **)v9 + 5)) )
          {
            a7.m128i_i64[0] = 0;
            *((_QWORD *)&v11 + 1) = v763;
            v9[9] = *(_DWORD *)(*((_QWORD *)v9 + 5) + 68LL);
            *(_OWORD *)(*((_QWORD *)v9 + 7) + 16LL) = 0;
            sub_1207E0((char *)v9 + 48, *((__int64 *)&v11 + 1), 9, *(_QWORD *)(*((_QWORD *)v9 + 5) + 24LL), v9[9]);
            *v9 = 33;
            goto LABEL_32;
          }
          if ( *((_BYTE *)v9 + 32) == 4 )
          {
LABEL_1022:
            v315 = *((_DWORD **)v9 + 5);
            if ( *v315 == 9 )
            {
              v317 = v315 + 8;
              v316 = *((_BYTE *)v315 + 32);
            }
            else
            {
              v316 = *((_BYTE *)v9 + 32);
              v317 = v9 + 8;
            }
            if ( v316 == 4 )
            {
              v318 = *((unsigned int **)v317 + 1);
              v319 = *v318;
              if ( (_DWORD)v319 == 29 )
              {
                *v318 = 39;
                sub_120A10((__int64)(v318 + 12), (__int64)v763, 0, v318[9], *((_QWORD *)v318 + 3), 0);
                goto LABEL_283;
              }
              v320 = sub_32E9E0(v319);
              if ( v320 )
              {
                *v318 = v320;
                goto LABEL_283;
              }
            }
          }
LABEL_503:
          if ( (v9[1] & 0x10) == 0 )
          {
            if ( *((_BYTE *)v9 + 32) == 4 )
            {
              v129 = *((_DWORD **)v9 + 5);
              if ( *v129 == 13 )
              {
                if ( sub_125B60((unsigned __int8 *)v9 + 48, (__int64)(v129 + 8), 0) )
                {
                  v133 = *((_QWORD *)v9 + 5);
                  if ( *(_BYTE *)(v133 + 32) == 4 )
                  {
                    if ( (unsigned __int8)sub_1205A0(*(_BYTE **)(v133 + 40), (__int64)v763, 0, v130, v131, v132) )
                      goto LABEL_38;
                    v133 = *((_QWORD *)v9 + 5);
                  }
                  sub_11CA10((char *)v9 + 48, (char *)(v133 + 48));
                  v134 = v762;
                  src[0] = nullptr;
                  v773 = 0xFFFFFFFF00000000LL;
                  sub_11CA10(v762, (char *)(*((_QWORD *)v9 + 5) + 32LL));
                  *((_QWORD *)&v11 + 1) = v134;
                  sub_11CA10((char *)v9 + 32, v134);
                  *v9 = 34;
                  sub_11CDA0((__int64)v134);
                  goto LABEL_32;
                }
              }
            }
LABEL_38:
            if ( *((_BYTE *)v9 + 48) == 4 && (v322 = *((_DWORD **)v9 + 7), *v322 == 13) )
            {
              v760.m128i_i64[0] = (__int64)(v9 + 8);
              if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v322 + 8), 0)
                && (*((_BYTE *)v9 + 32) != 4
                 || !(unsigned __int8)sub_1205A0(*((_BYTE **)v9 + 5), (__int64)v763, 0, v323, v324, v325)) )
              {
                v463 = v762;
                src[0] = nullptr;
                v773 = 0xFFFFFFFF00000000LL;
                sub_11CA10(v762, (char *)(*((_QWORD *)v9 + 7) + 48LL));
                *((_QWORD *)&v11 + 1) = v463;
                sub_11CA10((char *)v9 + 48, v463);
                sub_11CDA0((__int64)v463);
                goto LABEL_32;
              }
              LODWORD(a3) = *v9;
            }
            else
            {
              LODWORD(a3) = *v9;
LABEL_40:
              v760.m128i_i64[0] = (__int64)(v9 + 8);
            }
            if ( (unsigned int)(a3 - 34) <= 1
              && (v9[1] & 0x10) == 0
              && *((_BYTE *)v9 + 32) == 4
              && **((_DWORD **)v9 + 5) == 12 )
            {
              if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, v770, 0) )
              {
                v164 = (char *)sub_11C8A0(*((_QWORD *)v9 + 5), &v771);
                if ( v164 )
                {
                  v165 = v770[0];
                  v762 = (char *)&v773;
                  if ( (unsigned __int8)sub_11FD80(v164, &v773, 0) )
                  {
                    if ( v165 == (unsigned __int8 *)v773 )
                    {
                      v168 = v762;
                      sub_123A40((__int64)v762, (unsigned __int8 *)v771, v166, v167);
                      sub_11CA10((char *)v760.m128i_i64[0], v168);
                      *((_QWORD *)&v11 + 1) = v763;
                      sub_120A10((__int64)(v9 + 12), (__int64)v763, -(__int64)v770[0], v9[13], **((_QWORD **)v9 + 7), 0);
                      *v9 = sub_32E9E0(*v9);
                      sub_11CDA0((__int64)v168);
                      goto LABEL_32;
                    }
                  }
                }
              }
            }
            goto LABEL_44;
          }
        }
        else if ( !v22 )
        {
          goto LABEL_38;
        }
        v760.m128i_i64[0] = (__int64)(v9 + 8);
LABEL_44:
        v8 = (unsigned __int64)&v768;
        if ( (unsigned __int8)sub_11FD80((char *)v760.m128i_i64[0], &v768, 1u)
          && (unsigned __int8)sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 1u) )
        {
          v235 = *v9;
          if ( *v9 == 36 )
          {
            *(_QWORD *)&v768 = *((_QWORD *)&v768 + 1) < (unsigned __int64)v768;
          }
          else if ( v235 > 0x24 )
          {
            if ( v235 == 37 )
              *(_QWORD *)&v768 = *((_QWORD *)&v768 + 1) >= (unsigned __int64)v768;
          }
          else if ( v235 == 34 )
          {
            *(_QWORD *)&v768 = (unsigned __int64)v768 >= *((_QWORD *)&v768 + 1);
          }
          else if ( v235 == 35 )
          {
            *(_QWORD *)&v768 = (unsigned __int64)v768 < *((_QWORD *)&v768 + 1);
          }
          v9[1] &= ~0x10u;
          goto LABEL_259;
        }
        *((_QWORD *)&v11 + 1) = v9;
        v17 = sub_122E80((__int64)v763, v9);
        if ( v17 )
        {
LABEL_47:
          switch ( v17 )
          {
            case 2:
              goto LABEL_258;
            case 3:
LABEL_669:
              *(_QWORD *)&v768 = 1;
              goto LABEL_259;
            case 1:
              goto LABEL_32;
          }
        }
LABEL_13:
        if ( (unsigned __int8)sub_154F20(v9) )
          goto LABEL_32;
LABEL_14:
        v8 = (unsigned __int64)&v768;
        if ( *v9 - 42 <= 0xA )
        {
LABEL_15:
          if ( (v9[1] & 0x10) == 0 )
          {
LABEL_200:
            *((_QWORD *)&v11 + 1) = v9;
            if ( (unsigned __int8)sub_14F900((__int64)v763, (int *)v9) )
              goto LABEL_32;
            LODWORD(v15) = *v9;
            LODWORD(a3) = *v9;
            goto LABEL_20;
          }
LABEL_16:
          v760.m128i_i64[0] = (__int64)(v9 + 8);
LABEL_17:
          v18 = (unsigned __int64 *)v763;
          *((_QWORD *)&v11 + 1) = v763;
          if ( (unsigned __int8)sub_1552F0(v760.m128i_i64[0], (__int64)v763) )
            goto LABEL_32;
          *((_QWORD *)&v11 + 1) = v18;
          if ( (unsigned __int8)sub_1552F0((__int64)(v9 + 12), (__int64)v18) )
            goto LABEL_32;
          goto LABEL_19;
        }
LABEL_487:
        if ( (unsigned __int8)sub_14F5C0(*((_QWORD *)v763 + 12), (__int64)v759, (__int64)v9, (unsigned __int64 *)&v768) )
          goto LABEL_259;
        goto LABEL_15;
      case 38:
      case 39:
      case 41:
        goto LABEL_10;
      case 40:
        *((_QWORD *)&v11 + 1) = &v773;
        if ( !(unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) || v773 )
          goto LABEL_10;
        *v9 = 29;
        sub_11CDA0((__int64)(v9 + 12));
        goto LABEL_32;
      case 42:
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_416;
        *((_QWORD *)&v11 + 1) = v763;
        if ( (unsigned __int8)sub_152150((__int64)v9, (__int64)v763, v15, a4) )
          goto LABEL_32;
        goto LABEL_19;
      case 43:
      case 44:
        v49 = *((_BYTE *)v9 + 32);
        if ( v49 == 4 )
        {
          v21 = (char *)(v9 + 12);
          *((_QWORD *)&v11 + 1) = &v773;
          v762 = (char *)&v773;
          if ( (unsigned __int8)sub_11FD80((char *)v9 + 48, &v773, 0) && !v773 )
          {
            v8 = *((_QWORD *)v9 + 5);
            if ( *(_DWORD *)v8 == 10 && *(_BYTE *)(v8 + 32) == 4 )
              v8 = *(_QWORD *)(v8 + 40);
            v771 = (unsigned int *)v758;
            v252 = sub_30D5C0(v763, v759, &v771);
            if ( v252 || (*((_QWORD *)&v11 + 1) = v759, (v252 = sub_30D340(v763, v759, &v771, v8)) != 0) )
            {
              *((_QWORD *)&v11 + 1) = v759;
              if ( (unsigned __int8)sub_155C40((__int64)v763, (__int64)v759, v771, v252, v13, v15) )
              {
                v452 = (unsigned __int8 *)v252;
                v453 = v762;
                sub_123A40((__int64)v762, v452, a3, a4);
                *((_QWORD *)&v11 + 1) = v453;
                sub_11CA10((char *)v9 + 32, v453);
                *v9 = (*v9 != 44) + 50;
                v9[13] = v9[9];
                sub_11CDA0((__int64)v453);
                goto LABEL_32;
              }
            }
            v69 = *((unsigned int **)v9 + 5);
            v253 = *v69;
            switch ( (int)v253 )
            {
              case 5:
                goto LABEL_519;
              case 6:
                *v9 = (*v9 != 44) + 43;
                goto LABEL_519;
              case 7:
                goto LABEL_1480;
              case 8:
              case 9:
                *((_QWORD *)&v11 + 1) = v763;
                if ( !(unsigned __int8)sub_12AB50((unsigned __int8 *)v9 + 48, (__int64)v763, v69[9], 1) )
                  goto LABEL_761;
                v9[1] &= ~0x10u;
                v69 = *((unsigned int **)v9 + 5);
                goto LABEL_519;
              case 19:
                if ( (signed int)v9[9] >= *((_DWORD *)v763 + 22) )
                  goto LABEL_761;
                if ( !v759 )
                  goto LABEL_1163;
                v8 = (unsigned __int64)(v69 + 12);
                v454 = (unsigned __int8 *)(v69 + 8);
                *(_QWORD *)&v455 = v759;
                *((_QWORD *)&v455 + 1) = v758;
                if ( (unsigned __int8)sub_132E20(v455, (__int64)(v69 + 8), v758, (__int64)(v69 + 12), 0) )
                {
                  sub_1207E0((char *)v9 + 48, (__int64)v763, 9, *((_QWORD *)v69 + 3), v69[9]);
                  v669 = v762;
                  sub_123A40((__int64)v762, v454, v670, v671);
                  *((_QWORD *)&v11 + 1) = v669;
                  sub_11CA10((char *)v9 + 32, v669);
                  sub_11CDA0((__int64)v669);
                  goto LABEL_32;
                }
                *((_QWORD *)&v11 + 1) = v758;
                *(_QWORD *)&v11 = v759;
                if ( !(unsigned __int8)sub_132E20(v11, (__int64)(v69 + 12), v758, (__int64)(v69 + 8), 0) )
                  goto LABEL_762;
                sub_1207E0((char *)v9 + 48, (__int64)v763, 9, *((_QWORD *)v69 + 3), v69[13]);
                v456 = v762;
                sub_123A40((__int64)v762, (unsigned __int8 *)v8, v457, v458);
                *((_QWORD *)&v11 + 1) = v456;
                sub_11CA10((char *)v9 + 32, v456);
                sub_11CDA0((__int64)v456);
                goto LABEL_32;
              case 25:
                *((_QWORD *)&v11 + 1) = (char *)&v768 + 8;
                if ( (unsigned __int8)sub_11FD80((char *)v69 + 48, (_QWORD *)&v768 + 1, 0) && *((_QWORD *)&v768 + 1) )
                {
                  *((_QWORD *)&v11 + 1) = *((_QWORD *)v69 + 7);
                  sub_14E870(v69[13], *((__m128i **)&v11 + 1), -*((_QWORD *)&v768 + 1));
                  *v69 = 34;
                  goto LABEL_32;
                }
                v253 = *v69;
LABEL_952:
                if ( (unsigned int)(v253 - 29) > 0xC )
                  goto LABEL_761;
                v289 = sub_32E9E0(v253);
                if ( !v289 )
                  goto LABEL_761;
                if ( *v9 == 43 )
                  v289 = *v69;
                v69 = *((unsigned int **)v9 + 5);
                *v9 = v289 + 11;
                v78 = v9[1];
                break;
              default:
                goto LABEL_952;
            }
            goto LABEL_517;
          }
LABEL_761:
          if ( !v759 )
          {
LABEL_1163:
            v49 = *((_BYTE *)v9 + 32);
            if ( v49 != 4 )
              goto LABEL_182;
            sub_11FD80((char *)v9 + 48, (_QWORD *)&v768 + 1, 0);
            goto LABEL_181;
          }
LABEL_762:
          v222 = *((_BYTE *)v9 + 32);
          if ( v222 != 14 )
          {
            if ( v222 != 4 )
              goto LABEL_177;
            goto LABEL_764;
          }
        }
        else
        {
          if ( !v759 )
          {
LABEL_182:
            if ( v49 == 2 && *((_BYTE *)v9 + 48) != 2 )
            {
LABEL_184:
              *((_QWORD *)&v11 + 1) = v9 + 12;
              sub_11CA10((char *)v9 + 32, (char *)v9 + 48);
              goto LABEL_32;
            }
            goto LABEL_14;
          }
          if ( v49 != 14 )
            goto LABEL_177;
          v21 = (char *)(v9 + 12);
          v762 = (char *)&v773;
        }
        *((_QWORD *)&v11 + 1) = v762;
        if ( (unsigned __int8)sub_11FD80(v21, v762, 0) && !v773 )
        {
          *((_QWORD *)&v11 + 1) = v758;
          if ( (unsigned __int8)sub_14EFD0(
                                  (__int64)v759,
                                  v758,
                                  (__int64)(v9 + 8),
                                  *((_QWORD *)v9 + 5) + 16LL,
                                  *((_QWORD *)v9 + 5),
                                  0) )
            goto LABEL_32;
          if ( *((_BYTE *)v9 + 32) != 4 )
          {
            v50 = (_DWORD *)v759[4].m128i_i64[0];
            goto LABEL_178;
          }
        }
        else if ( *((_BYTE *)v9 + 32) != 4 )
        {
          goto LABEL_177;
        }
LABEL_764:
        *((_QWORD *)&v11 + 1) = (char *)&v768 + 8;
        if ( !(unsigned __int8)sub_11FD80(v21, (_QWORD *)&v768 + 1, 0) )
          goto LABEL_177;
        v223 = *((unsigned int **)v9 + 5);
        v50 = (_DWORD *)v759[4].m128i_i64[0];
        if ( *((_BYTE *)v223 + 32) != 1 || (*((_QWORD *)&v11 + 1) = v223[10], v50[296] != DWORD2(v11)) )
        {
          *((_QWORD *)&v11 + 1) = *v223;
          a3 = (unsigned int)(DWORD2(v11) - 12);
          if ( (unsigned int)a3 <= 1 )
          {
            v8 = (unsigned __int64)&v768;
            *((_QWORD *)&v11 + 1) = &v768;
            if ( (unsigned __int8)sub_11FD80((char *)v223 + 48, &v768, 1u) )
            {
              a3 = v9[9];
              if ( *v223 == 13 )
              {
LABEL_773:
                sub_120A10(
                  (__int64)(v223 + 12),
                  (__int64)v763,
                  v768 + *((_QWORD *)&v768 + 1),
                  a3,
                  **((_QWORD **)v223 + 7),
                  *(_DWORD *)(*((_QWORD *)v223 + 7) + 8LL));
                v69 = *((unsigned int **)v9 + 5);
                v78 = v9[1];
                goto LABEL_517;
              }
              v224 = 8 * a3 - 1;
              v225 = 1LL << v224;
              if ( (unsigned __int64)v224 >= 0x40 )
                v225 = 0;
              a4 = v768;
              *((_QWORD *)&v11 + 1) = v768 & (2 * v225 - 1);
              if ( v225 != *((_QWORD *)&v11 + 1) )
              {
                *(_QWORD *)&v768 = -(__int64)v768;
                goto LABEL_773;
              }
            }
LABEL_177:
            v50 = (_DWORD *)v759[4].m128i_i64[0];
          }
        }
LABEL_178:
        if ( (*v50 & 0x800) != 0 )
          sub_13B6E0(v759, *((__int64 *)&v11 + 1), a3, a4, v13, v15);
        *((_QWORD *)&v11 + 1) = v9;
        if ( (unsigned __int8)sub_1569E0((__int64)v759, (__int64)v9) )
          goto LABEL_32;
LABEL_181:
        v49 = *((_BYTE *)v9 + 32);
        goto LABEL_182;
      case 45:
      case 46:
      case 47:
      case 48:
        goto LABEL_13;
      case 49:
      case 50:
      case 51:
      case 52:
        goto LABEL_12;
      case 53:
        *((_QWORD *)&v11 + 1) = v9;
        if ( (unsigned __int8)sub_15B5C0(*((_QWORD *)v763 + 12), (__int64)v9, v15, a4, v13) )
          goto LABEL_32;
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_433;
        v204 = *((char **)v9 + 5);
        v205 = *(_DWORD *)v204;
        if ( (unsigned int)(*(_DWORD *)v204 - 12) <= 1 )
        {
          v8 = (unsigned __int64)&v768;
          *((_QWORD *)&v11 + 1) = &v768;
          v263 = sub_11FD80(v204 + 48, &v768, 1u);
          v205 = *(_DWORD *)v204;
          if ( v263 )
          {
            if ( v205 == 12 )
              *(_QWORD *)&v768 = -(__int64)v768;
            v264 = *((_QWORD **)v9 + 7);
            v265 = 0;
            v266 = 0;
            if ( !v264[1] )
              goto LABEL_843;
            v267 = v766;
            v268 = v763;
            do
            {
              v269 = v267;
              v270 = (_QWORD *)(*v264 + 24 * v266);
              v271 = 0;
              v272 = 0;
              if ( v270[1] )
              {
                do
                {
                  v273 = (_QWORD *)(*v270 + 8 * v272);
                  v274 = v768 + *v273;
                  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v268 + 12) + 24LL) + 24LL) != 8 )
                    v274 = (int)v274;
                  ++v271;
                  *v273 = v274;
                  v272 = v271;
                }
                while ( (unsigned __int64)v271 < v270[1] );
                v267 = v269;
              }
              v266 = ++v265;
            }
            while ( (unsigned __int64)v265 < v264[1] );
            v766 = v267;
            v69 = *((unsigned int **)v9 + 5);
            v762 = (char *)&v773;
            goto LABEL_519;
          }
        }
        if ( (unsigned int)(v205 - 8) > 1 )
          goto LABEL_433;
        v206 = *((__int64 **)v9 + 7);
        if ( !v206[1] )
          goto LABEL_843;
        v207 = v205 == 8;
        v208 = *v206;
        v209 = 0;
        v210 = v207;
        LODWORD(v762) = v766;
        v211 = v9;
        v212 = 0;
        v213 = v211;
        while ( 2 )
        {
          while ( 1 )
          {
            v214 = (unsigned __int64 *)(v208 + 24 * v209);
            if ( v214[1] )
              break;
            v209 = ++v212;
            if ( v212 >= (unsigned __int64)v206[1] )
            {
              v9 = v213;
              v766 = (unsigned int)v762;
              goto LABEL_843;
            }
          }
          v760.m128i_i64[0] = (__int64)v206;
          v215 = *v214;
          v216 = 0;
          v766 = v210;
          LODWORD(v754) = v212;
          v217 = 0;
          v8 = (unsigned __int64)v214;
          v218 = v204;
          v219 = v213;
          while ( 1 )
          {
            ++v217;
            v220 = sub_32ABC0(*(_QWORD *)(v215 + 8 * v216), *((unsigned int *)v218 + 9), v766);
            v215 = *(_QWORD *)v8;
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(*(_QWORD *)v8 + 8 * v216);
            v216 = v217;
            if ( (unsigned __int64)v217 >= *(_QWORD *)(v8 + 8) )
              break;
            if ( *((_QWORD *)&v11 + 1) != v220 )
            {
              v9 = v219;
              v766 = (unsigned int)v762;
              goto LABEL_433;
            }
          }
          v206 = (__int64 *)v760.m128i_i64[0];
          v213 = v219;
          v204 = v218;
          v210 = v766;
          v212 = (_DWORD)v754 + 1;
          v209 = (int)v754 + 1;
          if ( v209 < *(_QWORD *)(v760.m128i_i64[0] + 8) )
          {
            if ( *((_QWORD *)&v11 + 1) != v220 )
            {
              v9 = v213;
              v766 = (unsigned int)v762;
              goto LABEL_433;
            }
            v208 = *(_QWORD *)v760.m128i_i64[0];
            continue;
          }
          break;
        }
        v9 = v213;
        v766 = (unsigned int)v762;
        if ( *((_QWORD *)&v11 + 1) == v220 )
          goto LABEL_843;
LABEL_433:
        if ( !v759 )
          goto LABEL_160;
        v114 = *((_QWORD *)v9 + 7);
        if ( *(_QWORD *)(v114 + 8) == 1 && !*(_QWORD *)(*(_QWORD *)v114 + 8LL) )
        {
          v55 = *((_BYTE *)v9 + 32) == 4;
          v760.m128i_i64[0] = (__int64)(v9 + 8);
          if ( !v55 )
            goto LABEL_437;
          *(_QWORD *)&v11 = *((_QWORD *)v9 + 5);
          src[0] = nullptr;
          v773 = (__int64)&off_4DDCD8;
          *(_QWORD *)&v775 = *((_QWORD *)v763 + 12);
          *((_QWORD *)&v775 + 1) = &v767;
          src[1] = v759;
          *(_OWORD *)&src[2] = (unsigned __int64)v758;
          *((_QWORD *)&v11 + 1) = &v773;
          if ( (unsigned int)sub_11F760((_BYTE *)v11, &v773) )
            goto LABEL_19;
          v114 = *((_QWORD *)v9 + 7);
LABEL_437:
          v115 = **(_DWORD **)(v114 + 24);
          sub_11CDA0(v760.m128i_i64[0]);
          *((_BYTE *)v9 + 32) = 7;
          v9[10] = v115;
          v113 = (__int64)(v9 + 16);
          v759[4].m128i_i32[3] = 3;
LABEL_438:
          *v9 = 55;
          sub_11CDA0(v113);
          *((_QWORD *)&v11 + 1) = v760.m128i_i64[0];
          sub_339C80(v763, v760.m128i_i64[0]);
          if ( a6 )
          {
            v116 = *((__m128 **)v9 + 3);
            if ( *a6 == (__m128 *)-1LL || v116 == *a6 )
            {
              *((_QWORD *)&v11 + 1) = a6;
              v21 = (char *)(v9 + 12);
              *a6 = v116;
              goto LABEL_350;
            }
LABEL_408:
            sub_14E4C0();
          }
LABEL_386:
          v21 = (char *)(v9 + 12);
          if ( *((_BYTE *)v9 + 48) == 4 )
          {
LABEL_387:
            *(_QWORD *)&v11 = *((_QWORD *)v9 + 7);
            src[0] = nullptr;
            v773 = (__int64)&off_4DDCD8;
            *(_QWORD *)&v775 = *((_QWORD *)v763 + 12);
            *((_QWORD *)&v775 + 1) = &v767;
            src[1] = v759;
            *(_OWORD *)&src[2] = (unsigned __int64)v758;
            *((_QWORD *)&v11 + 1) = &v773;
            if ( (unsigned int)sub_11F760((_BYTE *)v11, &v773) )
            {
              if ( !under_debugger )
                sub_383060(51070);
              goto LABEL_2165;
            }
          }
LABEL_351:
          sub_11CDA0((__int64)v21);
          v760.m128i_i8[0] = 1;
LABEL_33:
          v10 = v766;
          continue;
        }
        v8 = (unsigned __int64)&v768;
        *((_QWORD *)&v11 + 1) = &v768;
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( (unsigned __int8)sub_11FD80((char *)v9 + 32, &v768, 1u) )
        {
          *((_QWORD *)&v11 + 1) = v768;
          v178 = sub_1223C0(*((__int64 **)v9 + 7), v768);
          v181 = v178;
          if ( v178 != -1 )
          {
            sub_6B2C0((__int64)v759, v178, v179, v180);
            if ( v759[4].m128i_i32[3] != 2 )
            {
              sub_11CDA0(v760.m128i_i64[0]);
              v9[10] = v181;
              v113 = (__int64)(v9 + 16);
              *((_BYTE *)v9 + 32) = 7;
              goto LABEL_438;
            }
LABEL_540:
            *((_QWORD *)&v11 + 1) = v763;
            sub_159B40((__int64)v9, (__int64)v763, (__int64)v759, v758, (__int64)&v767);
            sub_11D5A0((__int64)v9);
LABEL_32:
            v760.m128i_i8[0] = 1;
            goto LABEL_33;
          }
        }
LABEL_19:
        LODWORD(v15) = *v9;
        LODWORD(a3) = *v9;
LABEL_20:
        if ( v765 )
          goto LABEL_26;
LABEL_21:
        if ( (_DWORD)v15 == 4 )
          goto LABEL_24;
        if ( (_DWORD)v15 != 67 )
          goto LABEL_23;
        if ( v9[17] != v9[9] )
          goto LABEL_31;
        if ( *((_BYTE *)v9 + 32) == 4 )
        {
LABEL_156:
          v44 = *((_QWORD *)v9 + 5);
LABEL_157:
          if ( *(_DWORD *)v44 == 57 && (*(_BYTE *)(v44 + 4) & 0x40) != 0 )
          {
            *((_QWORD *)&v11 + 1) = v758;
            v760.m128i_i8[0] = sub_150860((__int64)v759, v758, v44 + 48);
            if ( v760.m128i_i8[0] )
            {
              *((_QWORD *)&v11 + 1) = v758;
              sub_101030((__int64)v759, v758, v44);
              goto LABEL_33;
            }
            goto LABEL_160;
          }
        }
LABEL_25:
        LODWORD(a3) = v15;
LABEL_26:
        if ( (_DWORD)a3 == 54 )
          goto LABEL_122;
        if ( (unsigned int)a3 > 0x36 )
        {
          if ( (_DWORD)a3 != 57 )
            goto LABEL_31;
          goto LABEL_30;
        }
        if ( (_DWORD)a3 == 1 )
        {
LABEL_122:
          v19 = v9 + 16;
          v20 = (__int64)(v9 + 12);
          if ( *((_BYTE *)v9 + 64) != 4 )
            goto LABEL_31;
LABEL_123:
          v36 = *((_DWORD **)v19 + 1);
          if ( *v36 != 12 )
            goto LABEL_31;
          *((_QWORD *)&v11 + 1) = v36 + 8;
          v8 = (unsigned __int64)v759;
          v37 = (unsigned __int64 *)v763;
          if ( (unsigned __int8)sub_151FF0(
                                  (__int64)v763,
                                  (__int64)(v36 + 8),
                                  (__int64)v759,
                                  (__int64)v9,
                                  v20,
                                  (__int64)(v36 + 12)) )
            goto LABEL_32;
          v38 = *((_QWORD *)v19 + 1);
          *((_QWORD *)&v11 + 1) = v38 + 48;
          if ( (unsigned __int8)sub_151FF0((__int64)v37, v38 + 48, (__int64)v759, (__int64)v9, v20, v38 + 32)
            || (unsigned __int8)sub_14E900(v9) )
          {
            goto LABEL_32;
          }
          goto LABEL_127;
        }
        if ( (_DWORD)a3 == 2 )
          goto LABEL_30;
LABEL_31:
        if ( (unsigned __int8)sub_14E900(v9) )
          goto LABEL_32;
LABEL_127:
        v39 = (unsigned __int64 *)v763;
        *((_QWORD *)&v11 + 1) = v759;
        if ( (unsigned __int8)sub_151150((__int64)v763, (__int64)v759, v758, (__int64)v9) )
          goto LABEL_32;
        *((_QWORD *)&v11 + 1) = v39;
        if ( (unsigned __int8)sub_1517D0((__int64)v9, (__int64)v39) )
          goto LABEL_32;
        v40 = *v9;
        if ( (v9[1] & 0x10) != 0 )
        {
          a3 = v40 - 65;
          if ( (unsigned int)a3 <= 1 || v40 == 2 )
            goto LABEL_132;
          if ( *((_BYTE *)v9 + 32) == 4 )
          {
            a3 = *((_QWORD *)v9 + 5);
            if ( *(_DWORD *)a3 == 2 )
            {
              *(_DWORD *)(a3 + 4) |= 0x10u;
              v40 = *v9;
            }
          }
          if ( *((_BYTE *)v9 + 48) == 4 )
          {
            a3 = *((_QWORD *)v9 + 7);
            if ( *(_DWORD *)a3 == 2 )
            {
              if ( v40 == 1 )
                goto LABEL_132;
              *(_DWORD *)(a3 + 4) |= 0x10u;
              v40 = *v9;
            }
          }
        }
        switch ( v40 )
        {
          case 0xAu:
            v152 = *((unsigned __int8 *)v9 + 32);
            if ( (unsigned __int8)v152 <= 0xDu )
            {
              v153 = 9232;
              if ( _bittest64(&v153, v152) )
                break;
            }
            if ( (unsigned __int8)sub_1272B0((unsigned __int64)(v9 + 8), (__int64)v763, v9[17], 0) )
            {
              ++v766;
              *v9 = 4;
              break;
            }
            v154 = v9[17];
            if ( 2 * v154 != v9[9] )
              break;
            if ( (*((_BYTE *)v9 + 33) & 4) != 0 )
              goto LABEL_579;
            v155 = *((_BYTE *)v9 + 32);
            if ( v155 == 4 )
            {
              if ( sub_122600(*((unsigned int **)v9 + 5)) )
              {
                v154 = v9[17];
LABEL_579:
                if ( !sub_11CAD0(v154) )
                  break;
              }
              v155 = *((_BYTE *)v9 + 32);
            }
            if ( v155 != 15 && (v155 != 6 || (unsigned __int8)segtype() != 1) )
            {
              if ( !under_debugger )
                sub_383060(50504);
              goto LABEL_2165;
            }
            return result;
          case 0xBu:
            sub_123A40((__int64)v770, (unsigned __int8 *)v9 + 32, a3, a4);
            if ( !(unsigned __int8)sub_127850((unsigned __int64)v770, (__int64)v763, v9[17], 0) )
              goto LABEL_570;
            if ( *((_BYTE *)v9 + 32) != 4 )
              goto LABEL_569;
            v353 = (unsigned __int64 *)v763;
            if ( !(unsigned __int8)sub_1205A0(*((_BYTE **)v9 + 5), (__int64)v763, 0, v149, v150, v151) )
              goto LABEL_569;
            sub_123A40((__int64)&v771, (unsigned __int8 *)v9 + 32, v354, v355);
            if ( !(unsigned __int8)sub_1272B0((unsigned __int64)&v771, (__int64)v353, v9[9] - v9[17], 0)
              || (_BYTE)v771 == 4
              && (src[0] = nullptr,
                  v773 = (__int64)&off_4DDCD8,
                  *(_QWORD *)&v775 = *((_QWORD *)v763 + 12),
                  *((_QWORD *)&v775 + 1) = &v767,
                  src[1] = v759,
                  *(_OWORD *)&src[2] = (unsigned __int64)v758,
                  (unsigned int)sub_11F760(v772, &v773)) )
            {
              sub_11CDA0((__int64)&v771);
              sub_11CDA0((__int64)v770);
            }
            else
            {
              sub_11CDA0((__int64)&v771);
LABEL_569:
              sub_11CA10((char *)v9 + 32, (char *)v770);
              ++v766;
              *v9 = 4;
LABEL_570:
              sub_11CDA0((__int64)v770);
            }
            break;
          case 0xCu:
          case 0x14u:
          case 0x15u:
            goto LABEL_490;
          case 0xEu:
            if ( *((_BYTE *)v9 + 48) == 2 && *((_BYTE *)v9 + 32) != 2 )
              goto LABEL_493;
            break;
          case 0x13u:
            v128 = *((_BYTE *)v9 + 32);
            if ( v128 != 10 )
              goto LABEL_491;
            if ( **((_BYTE **)v9 + 5) == 5 && *((_BYTE *)v9 + 48) == 2 )
            {
              v148 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v9 + 7) + 16LL), v9[13], 0);
              if ( *((int *)v763 + 21) < v148 || (*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 5) + 8LL) + 8LL) & v148) != 0 )
              {
LABEL_490:
                v128 = *((_BYTE *)v9 + 32);
LABEL_491:
                if ( v128 == 2 && *((_BYTE *)v9 + 48) != 2 )
                {
LABEL_493:
                  sub_11CA10((char *)v9 + 32, (char *)v9 + 48);
                  ++v766;
                }
              }
              else
              {
                ++v766;
                *v9 = 12;
              }
            }
            break;
          default:
            break;
        }
LABEL_132:
        if ( (*((_BYTE *)v9 + 6) & 2) != 0 && v758 )
          *(_DWORD *)(v758 + 4) |= 0x20000u;
        return v766;
      case 54:
        if ( !v759 )
          goto LABEL_26;
        v113 = (__int64)(v9 + 16);
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( !(unsigned __int8)sub_13C7E0(
                                 (__int64)v759,
                                 (__int64)(v9 + 8),
                                 (int *)v9,
                                 (__int64)(v9 + 12),
                                 (__int64)(v9 + 16),
                                 0xFFFFFFFF) )
          goto LABEL_429;
        if ( (unsigned __int8)(*((_BYTE *)v9 + 32) - 6) <= 1u )
          goto LABEL_438;
        sub_11CDA0((__int64)(v9 + 8));
LABEL_429:
        *((_QWORD *)&v11 + 1) = v758;
        if ( !(unsigned __int8)sub_150860((__int64)v759, v758, (__int64)(v9 + 16)) )
          goto LABEL_19;
        sub_330990(v759, v9);
        *((_QWORD *)&v11 + 1) = 0;
        sub_66FA0(v759[4].m128i_i64[0], 0, (__int64)"is_initial_lr(%a) -> true", *(double *)a7.m128i_i64);
        goto LABEL_32;
      case 55:
        if ( v9 != (unsigned int *)v758 || !v759 )
          goto LABEL_416;
        *((_QWORD *)&v11 + 1) = v759;
        if ( sub_A74F0((__int64)v9, (__int64)v759) )
          goto LABEL_540;
        LODWORD(v15) = *v9;
        goto LABEL_21;
      case 56:
        if ( *((_BYTE *)v9 + 64) != 8 )
          goto LABEL_416;
        v123 = *((_QWORD *)v9 + 9);
        switch ( *(_DWORD *)(v123 + 284) )
        {
          case 2:
          case 5:
          case 0x22:
          case 0x23:
            goto LABEL_921;
          case 3:
          case 4:
            v8 = (unsigned __int64)&v768;
            *((_QWORD *)&v11 + 1) = &v768;
            v299 = sub_11FD80((char *)(*(_QWORD *)(v123 + 24) + 80LL), &v768, 0);
            v123 = *((_QWORD *)v9 + 9);
            if ( v299 )
            {
              if ( (_WORD)v768 == WORD1(v768) && BYTE1(v768) == (_BYTE)v768 )
              {
                v300 = *(_QWORD *)(v123 + 24);
                if ( *(_DWORD *)(v300 + 84) == 4 || (_DWORD)v768 == DWORD1(v768) )
                {
                  v301 = (unsigned __int64 *)v763;
                  sub_126240(
                    (char *)(v300 + 160),
                    (__int64)v763,
                    0xEu,
                    *((_QWORD *)v9 + 3),
                    *(int *)(v300 + 164),
                    *(_DWORD *)(v300 + 164));
                  sub_120A10(
                    *(_QWORD *)(*((_QWORD *)v9 + 9) + 24LL) + 80LL,
                    (__int64)v301,
                    (unsigned __int8)v768,
                    1,
                    **(_QWORD **)(*(_QWORD *)(*((_QWORD *)v9 + 9) + 24LL) + 88LL),
                    0);
                  v773 = 34;
                  v762 = (char *)&v773;
                  copy_tinfo_t();
                  clear_tinfo_t();
                  *((_QWORD *)&v11 + 1) = "memset";
                  *(_DWORD *)(*((_QWORD *)v9 + 9) + 284LL) = 2;
                  sub_11D4A0((__int64)(v9 + 8));
                  goto LABEL_32;
                }
              }
            }
LABEL_921:
            v275 = *(_QWORD *)(v123 + 24);
            if ( *(_BYTE *)(v275 + 160) != 2 )
              goto LABEL_922;
            if ( sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v275 + 168) + 16LL), *(unsigned int *)(v275 + 164), 0) )
            {
              *((_QWORD *)&v11 + 1) = *(_QWORD *)(v123 + 24);
            }
            else
            {
              v539 = v9[17];
              if ( !v539 )
                goto LABEL_538;
              *((_QWORD *)&v11 + 1) = *(_QWORD *)(v123 + 24);
              if ( v539 == *(_DWORD *)(*((_QWORD *)&v11 + 1) + 4LL) )
              {
                v21 = (char *)(v9 + 12);
                sub_11CA10((char *)v9 + 32, *((char **)&v11 + 1));
                v540 = v9[17];
                sub_11CDA0((__int64)(v9 + 16));
                v9[17] = v540;
                goto LABEL_349;
              }
            }
            if ( **((_BYTE **)&v11 + 1) == 10 && v759 )
            {
              *((_QWORD *)&v11 + 1) = v759;
              sub_F2CA0(v123, (__int64)v759);
              *(_DWORD *)(v123 + 280) |= 0x20u;
            }
LABEL_922:
            if ( *(_DWORD *)(v123 + 284) == 5 )
            {
              *((_QWORD *)&v11 + 1) = v759;
              if ( (unsigned __int8)sub_15AA20((__int64)v763, v759, v758, (__int64)v9) )
                goto LABEL_32;
            }
            goto LABEL_19;
          case 6:
            *((_QWORD *)&v11 + 1) = v759;
            if ( (unsigned __int8)sub_15AC80((__int64)v763, v759, v758, (__int64)v9) )
              goto LABEL_32;
            goto LABEL_19;
          case 7:
          case 0x25:
            if ( !v759 )
              goto LABEL_26;
            *((_QWORD *)&v11 + 1) = v759;
            sub_F2CA0(*((_QWORD *)v9 + 9), (__int64)v759);
            goto LABEL_212;
          case 9:
            *((_QWORD *)&v11 + 1) = v759;
            if ( !v759 )
              goto LABEL_26;
            v294 = *(unsigned __int8 **)(v123 + 24);
            if ( !(unsigned __int8)sub_155C40((__int64)v763, (__int64)v759, (_BYTE *)v758, (__int64)v294, v13, v15) )
              goto LABEL_212;
            v8 = v759[30].m128i_u64[0];
            v297 = (_QWORD *)j__qalloc_or_throw(80, (__int64)v759, v295, v296);
            sub_1510E0(v297, *((_QWORD *)v9 + 3));
            sub_11D890((__int64)v297, (__int64)v9);
            sub_11D4A0((__int64)(v297 + 4));
            copy_tinfo_t();
            *((_QWORD *)&v11 + 1) = v294;
            *(_DWORD *)(v297[9] + 284LL) = 7;
            *v9 = 12;
            sub_125180((__int64)(v9 + 8), v294);
            v298 = v9[9];
            *((_BYTE *)v9 + 48) = 4;
            *((_QWORD *)v9 + 7) = v297;
            v9[13] = v298;
            v9[17] = v298;
            goto LABEL_32;
          case 0xB:
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(v123 + 24);
            if ( (unsigned __int8)sub_14ED80((__int64)v763, *((__int64 *)&v11 + 1)) )
              goto LABEL_32;
            goto LABEL_19;
          case 0xD:
            v314 = sub_BE0A0((_QWORD *)(v123 + 24));
            goto LABEL_1009;
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
            *((_QWORD *)&v11 + 1) = v758;
            if ( (unsigned __int8)sub_167020(v759, v758, v9) )
              goto LABEL_32;
            v284 = *((_QWORD *)v9 + 9);
            if ( (*(_BYTE *)(v284 + 280) & 0x40) != 0 )
              goto LABEL_19;
            a7.m128i_i64[0] = 0;
            *(_QWORD *)&v11 = *((_QWORD *)v9 + 9);
            *((_QWORD *)&v11 + 1) = &v773;
            v773 = 0;
            memset(src, 0, sizeof(src));
            v762 = (char *)&v773;
            if ( (unsigned __int8)sub_32FB50(v11, &v773, v759, 1) )
            {
              v8 = (unsigned __int64)&src[1];
              *((_QWORD *)&v11 + 1) = &src[1];
              if ( (unsigned int)sub_316F80(v284 + 216, &src[1]) )
              {
                *((_QWORD *)&v11 + 1) = &src[1];
                sub_14E660((__int64 *)(v284 + 216), (__int64)&src[1], v285, v286);
                if ( *((_BYTE *)v9 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v9 + 9) + 284LL) != 19 )
                {
                  *((_QWORD *)&v11 + 1) = v762;
                  sub_648D0((__int64 *)(v284 + 136), (__int64 *)v762);
                  v682 = (unsigned __int64)src[2];
                  v683 = nullptr;
                  if ( src[2] )
                  {
                    v8 = 16 * (__int64)src[2];
                    v685 = (void *)qalloc_or_throw(16 * (__int64)src[2], *((__int64 *)&v11 + 1), v680, v681);
                    *((void **)&v11 + 1) = src[1];
                    v683 = v685;
                    memcpy(v685, src[1], 16 * v682);
                  }
                  v684 = *(_QWORD *)(v284 + 152);
                  a7 = _mm_unpacklo_epi64((__m128i)v682, (__m128i)v682);
                  if ( v684 )
                  {
                    v760 = a7;
                    *(_QWORD *)(v284 + 160) = 0;
                    qfree(v684);
                    a7 = _mm_load_si128(&v760);
                  }
                  *(_QWORD *)(v284 + 152) = v683;
                  *(__m128i *)(v284 + 160) = a7;
                }
                *(_DWORD *)(v284 + 280) |= 0x40u;
                sub_93B40((__int64 *)v762);
                goto LABEL_32;
              }
            }
            if ( src[1] )
            {
              src[2] = nullptr;
              qfree((__int64)src[1]);
            }
            qfree(v773);
            LODWORD(v15) = *v9;
            LODWORD(a3) = *v9;
            goto LABEL_20;
          case 0x1B:
          case 0x1C:
            *((_QWORD *)&v11 + 1) = &v773;
            if ( !(unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(v123 + 24) + 80LL), &v773, 0) || v773 )
              goto LABEL_19;
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(*((_QWORD *)v9 + 9) + 24LL);
            sub_11CA10((char *)v9 + 32, *((char **)&v11 + 1));
            v308 = v9[17];
            sub_11CDA0((__int64)(v9 + 16));
            v9[17] = v308;
            if ( v308 )
              goto LABEL_262;
            goto LABEL_538;
          case 0x1F:
            if ( !v759 )
              goto LABEL_26;
            v310 = *(_QWORD *)(v123 + 24);
            if ( *(_BYTE *)v310 != 4 )
              goto LABEL_416;
            v311 = *(_DWORD **)(v310 + 8);
            if ( *v311 != 8 )
              goto LABEL_416;
            v8 = (unsigned int)v311[9];
            v312 = *(_DWORD *)(v310 + 4);
            *v9 = 9;
            *((_QWORD *)&v11 + 1) = *(_QWORD *)(v310 + 8) + 32LL;
            v313 = sub_153040(v759[4].m128i_i64[0], *((__int64 *)&v11 + 1), *((_QWORD *)v9 + 3));
            sub_11CDA0((__int64)(v9 + 8));
            *((_QWORD *)v9 + 5) = v313;
            *((_BYTE *)v9 + 32) = 4;
            v9[9] = v8;
            sub_11CDA0((__int64)(v9 + 16));
            v9[17] = v312;
            goto LABEL_32;
          default:
            *((_QWORD *)&v11 + 1) = v763;
            if ( (unsigned __int8)sub_1554C0(*((_QWORD *)v9 + 9), (__int64)v763) )
              goto LABEL_32;
            *((_QWORD *)&v11 + 1) = v9 + 8;
            if ( (unsigned __int8)sub_155710(*((_QWORD *)v9 + 9), (__int64)(v9 + 8)) )
              goto LABEL_32;
            if ( !v759 )
              goto LABEL_160;
            *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 9);
            if ( (unsigned __int8)sub_155550((__int64)v763, *((__int64 *)&v11 + 1), (__int64)v759, (int *)v9) )
              goto LABEL_32;
            goto LABEL_19;
        }
      case 57:
        if ( !v758 || v764 )
        {
          if ( !v765 )
          {
LABEL_23:
            if ( (unsigned int)(v15 - 8) <= 2 )
              goto LABEL_24;
LABEL_162:
            v44 = (__int64)v9;
            goto LABEL_157;
          }
LABEL_30:
          v19 = v9 + 12;
          v20 = v757;
          if ( *((_BYTE *)v9 + 48) != 4 )
            goto LABEL_31;
          goto LABEL_123;
        }
        v111 = *((_BYTE *)v9 + 48);
        if ( v111 == 10 )
        {
          *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 7);
          if ( **((_BYTE **)&v11 + 1) == 6 )
          {
            sub_125180((__int64)(v9 + 8), *((unsigned __int8 **)&v11 + 1));
            if ( a6 )
            {
              *((_QWORD *)&v11 + 1) = a6;
              v321 = *((__m128 **)v9 + 3);
              if ( *a6 == (__m128 *)-1LL )
              {
                *a6 = v321;
                v21 = (char *)(v9 + 12);
                goto LABEL_756;
              }
              if ( *a6 != v321 )
                goto LABEL_408;
            }
            v21 = (char *)(v9 + 12);
LABEL_756:
            *v9 = 56;
            goto LABEL_350;
          }
        }
        else if ( !v111 )
        {
LABEL_404:
          *((_QWORD *)&v11 + 1) = v763;
          v112 = *((_BYTE *)v9 + 5) >> 7;
          if ( (unsigned __int8)sub_11C750((int *)v9, (__int64)v763, 0) == v112 )
          {
            if ( *((_BYTE *)v9 + 64) == 8 )
            {
              v340 = (unsigned __int64 *)v763;
              *((_QWORD *)&v11 + 1) = v763;
              if ( (unsigned __int8)sub_1554C0(*((_QWORD *)v9 + 9), (__int64)v763) )
                goto LABEL_32;
              *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 9);
              if ( (unsigned __int8)sub_155550((__int64)v340, *((__int64 *)&v11 + 1), (__int64)v759, (int *)v9) )
                goto LABEL_32;
            }
            goto LABEL_19;
          }
          if ( !a6 )
            goto LABEL_19;
          a3 = *((_QWORD *)v9 + 3);
          if ( *a6 != (__m128 *)-1LL )
          {
            if ( (__m128 *)a3 != *a6 )
              goto LABEL_408;
            goto LABEL_19;
          }
          *a6 = (__m128 *)a3;
          LODWORD(v15) = *v9;
          LODWORD(a3) = *v9;
          goto LABEL_20;
        }
        v21 = (char *)(v9 + 12);
        *((_QWORD *)&v11 + 1) = v9 + 8;
        if ( !(unsigned __int8)sub_13C7E0(
                                 (__int64)v759,
                                 (__int64)(v9 + 8),
                                 (int *)v9,
                                 (__int64)(v9 + 8),
                                 (__int64)(v9 + 12),
                                 0xFFFFFFFF) )
          goto LABEL_404;
        if ( a6 )
        {
          v221 = *((__m128 **)v9 + 3);
          if ( *a6 == (__m128 *)-1LL )
          {
            *a6 = v221;
          }
          else if ( v221 != *a6 )
          {
            goto LABEL_408;
          }
        }
        goto LABEL_756;
      case 63:
      case 64:
      case 68:
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        goto LABEL_52;
      case 65:
      case 66:
        if ( *((_BYTE *)v9 + 32) != 4 )
          goto LABEL_20;
        v45 = *((_DWORD **)v9 + 5);
        if ( *v45 != 2 )
          goto LABEL_20;
        v46 = v45[1];
        if ( (v46 & 0x10) == 0 )
          goto LABEL_20;
        a4 = v46 & 0xFFFFFFEF;
        v45[1] = a4;
        goto LABEL_32;
      case 67:
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( sub_125B60((unsigned __int8 *)v9 + 32, (__int64)(v9 + 16), 0) )
          goto LABEL_538;
        v120 = *((_BYTE *)v9 + 32);
        v121 = v9[17];
        v122 = v9[9];
        if ( v120 == 4 )
        {
          v69 = *((unsigned int **)v9 + 5);
          if ( *v69 == 67 )
          {
            v203 = v69[9];
            if ( v121 <= v203 )
              v203 = v9[17];
            if ( v203 <= v122 )
              goto LABEL_844;
          }
        }
        if ( v122 == v121 )
        {
          *((_QWORD *)&v11 + 1) = *((_QWORD *)v9 + 5);
          if ( !sub_14E700(v120, *((__int64 *)&v11 + 1)) )
          {
            *v9 = 4;
            goto LABEL_32;
          }
        }
LABEL_52:
        *((_QWORD *)&v11 + 1) = v763;
        if ( (unsigned __int8)sub_1552F0(v760.m128i_i64[0], (__int64)v763) )
          goto LABEL_32;
        LODWORD(v15) = *v9;
        LODWORD(a3) = *v9;
        goto LABEL_20;
      case 69:
        if ( *((_BYTE *)v9 + 32) == 13 && *((_BYTE *)v9 + 48) != 13 )
          goto LABEL_184;
        if ( v758 && (unsigned __int8)sub_152760((__int64)v763, (__int64)v759, v758, v9) )
          goto LABEL_843;
        v108 = sub_11C8E0((__int64)v9, &v769, 65);
        if ( v108 )
        {
          if ( *(_BYTE *)(v108 + 32) == 4 && *v769 == 13 )
          {
            v8 = *(_QWORD *)(v108 + 40);
            v276 = sub_11C8A0(v8, &v771);
            if ( v276 )
            {
              if ( (unsigned int)(*(_DWORD *)v8 - 12) <= 1 && (unsigned int)eetol64u() == 1 )
              {
                v277 = 8 * *(_DWORD *)(v276 + 4) - 1;
                v278 = nullptr;
                if ( (unsigned __int64)v277 <= 0x3F )
                  v278 = (unsigned __int8 *)(1LL << v277);
                if ( v770[0] == v278 && sub_14E190(*((_QWORD *)v763 + 12), (__int64)v759, v9) )
                {
                  v279 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v276 + 8) + 16LL), *(unsigned int *)(v276 + 4), 0);
                  v770[0] -= v279;
                  if ( v770[0] )
                  {
                    v282 = v771[1];
                    v283 = j__qalloc_or_throw(80, (__int64)v771, v280, v281);
                    sub_1510E0((_QWORD *)v283, *((_QWORD *)v9 + 3));
                    *(_DWORD *)v283 = 12;
                    sub_11CA10((char *)(v283 + 32), (char *)v771);
                    *((_QWORD *)&v11 + 1) = v763;
                    sub_120A10(v283 + 48, (__int64)v763, (__int64)v770[0], v282, *((_QWORD *)v9 + 3), 0);
                    *(_DWORD *)(v283 + 68) = v282;
                    sub_11CDA0((__int64)(v9 + 8));
                    *((_BYTE *)v9 + 32) = 4;
                    *((_QWORD *)v9 + 5) = v283;
                    v9[9] = v282;
                  }
                  else
                  {
                    v762 = (char *)&v773;
                    sub_123A40((__int64)&v773, (unsigned __int8 *)v771, v280, v281);
                    *((_QWORD *)&v11 + 1) = &v773;
                    sub_125180((__int64)(v9 + 8), (unsigned __int8 *)&v773);
                    sub_11CDA0((__int64)&v773);
                  }
                  *v9 = 66;
                  goto LABEL_386;
                }
              }
            }
          }
        }
        v109 = sub_11C8E0((__int64)v9, &v771, 68);
        if ( !v109 )
          goto LABEL_16;
        src[0] = nullptr;
        v773 = 0xFFFFFFFF00000000LL;
        v762 = (char *)&v773;
        sub_11CA10((char *)&v773, (char *)(v109 + 32));
        v760.m128i_i64[0] = (__int64)(v9 + 8);
        if ( v9 + 8 != v771 )
          sub_11CA10((char *)v760.m128i_i64[0], (char *)v9 + 48);
        v110 = (__int64 *)v762;
        *((_QWORD *)&v11 + 1) = v762;
        sub_11CA10((char *)v9 + 48, v762);
        *v9 = 70;
        sub_11CDA0((__int64)v110);
        goto LABEL_32;
      case 70:
        if ( v758 )
        {
          *((_QWORD *)&v11 + 1) = v758;
          *(_QWORD *)&v11 = v759;
          if ( (unsigned __int8)sub_156070(v11, (__int64)v9) )
            goto LABEL_386;
        }
        goto LABEL_16;
      case 71:
      case 72:
        goto LABEL_16;
      default:
        if ( !under_debugger )
          sub_383060(50503);
        goto LABEL_2165;
    }
  }
}
