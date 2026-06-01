unsigned __int64 __fastcall sub_12D870(__int64 *a1, unsigned int a2, int a3, int a4, char a5)
{
  __int64 v5; // r15
  __int64 *v7; // rbx
  int v8; // eax
  __int64 v9; // r12
  __int64 v10; // r14
  const char *v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  char *v18; // rcx
  const char *v19; // r8
  unsigned int v20; // r14d
  unsigned int v21; // r14d
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r14
  char *v25; // r15
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r12
  const char *v33; // r14
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rsi
  __int64 v37; // rdx
  _QWORD *v38; // rax
  unsigned __int64 v39; // rdx
  char *v40; // rax
  const char *v41; // r14
  unsigned int v42; // r12d
  unsigned int v43; // r12d
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r12
  const char *v47; // r14
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rdx
  _QWORD *v52; // rax
  unsigned __int64 v53; // rdx
  char *v54; // rax
  const char *v55; // r14
  unsigned int v56; // r12d
  unsigned int v57; // r12d
  unsigned int v58; // eax
  __int64 v59; // rcx
  int aflags; // r12d
  __int64 v61; // r14
  const char *v62; // r15
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rsi
  __int64 v66; // rdx
  _QWORD *v67; // rdi
  int v68; // r14d
  __int64 v69; // r14
  __int64 v70; // r15
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rax
  unsigned __int64 v74; // r15
  unsigned __int64 v75; // r8
  __int64 v76; // rsi
  unsigned __int64 v77; // r15
  unsigned __int64 v78; // rdx
  __int64 v79; // r14
  char *v80; // r8
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rsi
  unsigned __int64 v84; // rdx
  _QWORD *v85; // rdi
  __int64 v86; // r14
  const char *v87; // r15
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rsi
  __int64 v91; // rdx
  _QWORD *v92; // rdi
  __int64 v93; // r14
  const char *v94; // r15
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // rsi
  __int64 v98; // rdx
  _QWORD *v99; // rdi
  __int64 v100; // r14
  const char *v101; // r15
  __int64 v102; // rax
  __int64 v103; // r8
  __int64 v104; // rsi
  __int64 v105; // rdx
  _QWORD *v106; // rax
  unsigned __int64 v107; // rdx
  char *v108; // rax
  const char *v109; // r15
  unsigned int v110; // r14d
  unsigned int v111; // r14d
  unsigned int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // r12
  const char *v115; // r14
  __int64 v116; // rax
  __int64 v117; // r15
  __int64 v118; // rsi
  __int64 v119; // rdx
  _QWORD *v120; // rax
  unsigned __int64 v121; // rdx
  char *v122; // rax
  const char *v123; // r14
  unsigned int v124; // r12d
  unsigned int v125; // r12d
  unsigned int v126; // eax
  __int64 v127; // rcx
  __int64 v128; // r12
  const char *v129; // r14
  __int64 v130; // rax
  __int64 v131; // r15
  __int64 v132; // rsi
  __int64 v133; // rdx
  _QWORD *v134; // rax
  unsigned __int64 v135; // rdx
  char *v136; // rax
  const char *v137; // r14
  unsigned int v138; // r12d
  unsigned int v139; // r12d
  unsigned int v140; // eax
  __int64 v141; // rcx
  size_t v142; // r14
  size_t v143; // r9
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // r15
  __int64 v147; // r14
  __int64 v148; // r13
  __int64 v149; // rsi
  unsigned int item_end; // r14d
  unsigned __int64 v151; // rdx
  size_t v152; // r9
  __int64 v153; // r8
  size_t v154; // r10
  __int64 v155; // rsi
  __int64 v156; // r8
  unsigned __int64 v157; // rdx
  __int64 v158; // rsi
  __int64 v159; // rax
  int i; // r13d
  _DWORD *func; // r13
  __int64 v162; // r13
  const char *v163; // r14
  __int64 v164; // rax
  __int64 v165; // r15
  __int64 v166; // rsi
  __int64 v167; // rdx
  _QWORD *v168; // rdi
  __int64 v169; // r13
  const char *v170; // r14
  __int64 v171; // rax
  __int64 v172; // r15
  __int64 v173; // rsi
  __int64 v174; // rdx
  _QWORD *v175; // rdi
  __int64 v176; // r13
  const char *v177; // r14
  __int64 v178; // rax
  __int64 v179; // r15
  __int64 v180; // rsi
  __int64 v181; // rdx
  _QWORD *v182; // rdi
  __int64 v183; // r13
  const char *v184; // r14
  __int64 v185; // rax
  __int64 v186; // r15
  __int64 v187; // rsi
  __int64 v188; // rdx
  _QWORD *v189; // rdi
  __int64 v190; // r13
  const char *v191; // r14
  __int64 v192; // rax
  __int64 v193; // r15
  __int64 v194; // rsi
  __int64 v195; // rdx
  _QWORD *v196; // rax
  unsigned __int64 v197; // rdx
  char *v198; // rax
  const char *v199; // r14
  unsigned int v200; // eax
  unsigned int v201; // eax
  unsigned int v202; // ecx
  __int64 v203; // rsi
  __int64 v204; // r13
  const char *v205; // r14
  __int64 v206; // rax
  __int64 v207; // r15
  __int64 v208; // rsi
  __int64 v209; // rdx
  _QWORD *v210; // rax
  unsigned __int64 v211; // rdx
  char *v212; // rax
  const char *v213; // r14
  unsigned int v214; // eax
  unsigned int v215; // eax
  unsigned int v216; // ecx
  __int64 v217; // rsi
  __int64 v218; // r13
  const char *v219; // r14
  __int64 v220; // rax
  __int64 v221; // r15
  __int64 v222; // rsi
  __int64 v223; // rdx
  _QWORD *v224; // rax
  unsigned __int64 v225; // rdx
  char *v226; // rax
  const char *v227; // r14
  unsigned int v228; // eax
  unsigned int v229; // eax
  unsigned int v230; // ecx
  __int64 v231; // rsi
  __int64 v232; // r13
  char *v233; // r14
  __int64 v234; // rax
  __int64 v235; // r15
  __int64 v236; // rsi
  __int64 v237; // rdx
  _QWORD *v238; // rdi
  __int64 v239; // r13
  const char *v240; // r14
  __int64 v241; // rax
  __int64 v242; // r15
  __int64 v243; // rsi
  __int64 v244; // rdx
  _QWORD *v245; // rdi
  __int64 v246; // r13
  const char *v247; // r14
  __int64 v248; // rax
  __int64 v249; // r15
  __int64 v250; // rsi
  __int64 v251; // rdx
  _QWORD *v252; // rdi
  __int64 v253; // r13
  const char *v254; // r14
  __int64 v255; // rax
  __int64 v256; // r15
  __int64 v257; // rsi
  __int64 v258; // rdx
  _QWORD *v259; // rdi
  __int64 v260; // r13
  const char *v261; // r14
  __int64 v262; // rax
  __int64 v263; // r15
  __int64 v264; // rsi
  __int64 v265; // rdx
  _QWORD *v266; // rdi
  __int64 v267; // r13
  const char *v268; // r14
  __int64 v269; // rax
  __int64 v270; // r15
  __int64 v271; // rsi
  __int64 v272; // rdx
  _QWORD *v273; // rdi
  __int64 v274; // r13
  const char *v275; // r14
  __int64 v276; // rax
  __int64 v277; // r15
  __int64 v278; // rsi
  __int64 v279; // rdx
  _QWORD *v280; // rax
  unsigned __int64 v281; // rdx
  char *v282; // rax
  const char *v283; // r14
  unsigned int v284; // eax
  unsigned int v285; // eax
  unsigned int v286; // ecx
  __int64 v287; // rsi
  __int64 v288; // r13
  const char *v289; // r14
  __int64 v290; // rax
  __int64 v291; // r15
  __int64 v292; // rsi
  __int64 v293; // rdx
  _QWORD *v294; // rdi
  __int64 v295; // r13
  const char *v296; // r14
  __int64 v297; // rax
  __int64 v298; // r15
  __int64 v299; // rsi
  __int64 v300; // rdx
  _QWORD *v301; // rax
  unsigned __int64 v302; // rcx
  char *v303; // rax
  const char *v304; // rdx
  unsigned int v305; // r13d
  unsigned int v306; // r13d
  unsigned int v307; // eax
  __int64 v308; // rsi
  __int64 v309; // r13
  const char *v310; // r14
  __int64 v311; // rax
  __int64 v312; // r15
  __int64 v313; // rsi
  __int64 v314; // rdx
  _QWORD *v315; // rax
  __int64 v316; // r13
  const char *v317; // r14
  __int64 v318; // rax
  __int64 v319; // r15
  __int64 v320; // rsi
  __int64 v321; // rdx
  _QWORD *v322; // rdi
  __int64 v323; // r13
  const char *v324; // r14
  __int64 v325; // rax
  __int64 v326; // r15
  __int64 v327; // rsi
  __int64 v328; // rdx
  _QWORD *v329; // rdi
  __int64 v330; // r13
  const char *v331; // r14
  __int64 v332; // rax
  __int64 v333; // r15
  __int64 v334; // rsi
  __int64 v335; // rdx
  _QWORD *v336; // rax
  unsigned __int64 v337; // rcx
  char *v338; // rax
  const char *v339; // rdx
  unsigned int v340; // r13d
  unsigned int v341; // r13d
  unsigned int v342; // eax
  __int64 v343; // rsi
  __int64 v344; // r13
  const char *v345; // r14
  __int64 v346; // rax
  __int64 v347; // r15
  __int64 v348; // rsi
  __int64 v349; // rdx
  _QWORD *v350; // rax
  unsigned __int64 v351; // rcx
  char *v352; // rax
  const char *v353; // rdx
  unsigned int v354; // r13d
  unsigned int v355; // r13d
  unsigned int v356; // eax
  __int64 v357; // rsi
  unsigned int v358; // r12d
  __int64 v359; // r12
  const char *v360; // r13
  __int64 v361; // rax
  __int64 v362; // r14
  __int64 v363; // rsi
  unsigned __int64 v364; // r15
  _QWORD *v365; // rax
  unsigned __int64 v366; // rdx
  char *v367; // rax
  const char *v368; // r13
  unsigned int v369; // r12d
  unsigned int v370; // r12d
  unsigned int v371; // eax
  __int64 v372; // rcx
  __int64 v373; // rax
  __int64 v374; // rsi
  __int64 v375; // r15
  __int64 v376; // r12
  __int64 v377; // r13
  __int64 v379; // rax
  __int64 v380; // r12
  const char *v381; // r13
  __int64 v382; // rax
  __int64 v383; // r14
  __int64 v384; // rsi
  unsigned __int64 v385; // r15
  _QWORD *v386; // rax
  unsigned __int64 v387; // rdx
  char *v388; // rax
  const char *v389; // r13
  unsigned int v390; // r12d
  unsigned int v391; // r12d
  unsigned int v392; // eax
  __int64 v393; // rcx
  __int64 v394; // r12
  const char *v395; // r13
  __int64 v396; // rax
  __int64 v397; // r14
  __int64 v398; // rsi
  unsigned __int64 v399; // r15
  _QWORD *v400; // rax
  unsigned __int64 v401; // rdx
  char *v402; // rax
  const char *v403; // r13
  unsigned int v404; // r12d
  unsigned int v405; // r12d
  unsigned int v406; // eax
  __int64 v407; // rcx
  __int64 v408; // rax
  __int64 v409; // rax
  __int64 v410; // r14
  unsigned __int64 v411; // r15
  __int64 v412; // rsi
  unsigned __int64 v413; // rdx
  signed __int64 v414; // r15
  unsigned int v415; // ecx
  __int64 v416; // rsi
  __int64 v417; // rax
  unsigned __int64 v418; // rdx
  signed __int64 v419; // r14
  unsigned int v420; // ecx
  __int64 v421; // rsi
  unsigned __int64 v422; // rdx
  signed __int64 v423; // r14
  unsigned int v424; // ecx
  __int64 v425; // rsi
  unsigned __int64 v426; // rdx
  signed __int64 v427; // r14
  unsigned int v428; // ecx
  __int64 v429; // rsi
  unsigned __int64 v430; // rdx
  signed __int64 v431; // r14
  unsigned int v432; // ecx
  __int64 v433; // rsi
  unsigned __int64 v434; // rdx
  signed __int64 v435; // r14
  unsigned int v436; // ecx
  __int64 v437; // rsi
  unsigned __int64 v438; // rdx
  signed __int64 v439; // r15
  unsigned int v440; // ecx
  __int64 v441; // rsi
  unsigned __int64 v442; // rdx
  signed __int64 v443; // r15
  unsigned int v444; // ecx
  __int64 v445; // rsi
  __int64 v446; // rax
  unsigned __int64 v447; // rdx
  signed __int64 v448; // r14
  unsigned int v449; // ecx
  __int64 v450; // rsi
  unsigned __int64 v451; // rdx
  signed __int64 v452; // r14
  unsigned int v453; // ecx
  __int64 v454; // rsi
  unsigned __int64 v455; // rdx
  signed __int64 v456; // r14
  unsigned int v457; // ecx
  __int64 v458; // rsi
  unsigned __int64 v459; // rdx
  signed __int64 v460; // r14
  unsigned int v461; // ecx
  __int64 v462; // rsi
  unsigned __int64 v463; // rdx
  signed __int64 v464; // r14
  unsigned int v465; // ecx
  __int64 v466; // rsi
  unsigned __int64 v467; // rdx
  signed __int64 v468; // r14
  unsigned int v469; // ecx
  __int64 v470; // rsi
  unsigned __int64 v471; // rdx
  signed __int64 v472; // r14
  unsigned int v473; // ecx
  __int64 v474; // rsi
  unsigned __int64 v475; // rdx
  signed __int64 v476; // r14
  unsigned int v477; // ecx
  __int64 v478; // rsi
  __int64 v479; // rax
  __int64 v480; // rax
  __int64 v481; // rax
  __int64 v482; // rax
  __int64 v483; // rax
  __int64 v484; // rax
  __int64 v485; // rax
  __int64 v486; // rax
  __int64 v487; // rax
  unsigned __int64 v488; // rdx
  signed __int64 v489; // r8
  unsigned int v490; // ecx
  __int64 v491; // rsi
  __int64 v492; // r14
  const char *v493; // r8
  __int64 v494; // rax
  __int64 v495; // r9
  __int64 v496; // rsi
  __int64 v497; // rdx
  _QWORD *v498; // rcx
  __int64 v499; // r14
  const char *v500; // r8
  __int64 v501; // rax
  __int64 v502; // r9
  __int64 v503; // rsi
  __int64 v504; // rdx
  _QWORD *v505; // rcx
  __int64 v506; // rax
  __int64 v507; // r15
  unsigned __int64 v508; // rdx
  __int64 v509; // rsi
  char *v510; // r14
  __int64 v511; // rax
  unsigned __int64 v512; // rdx
  __int64 v513; // r15
  __int64 v514; // rsi
  __int64 v515; // rax
  unsigned __int64 v516; // rdx
  signed __int64 v517; // r8
  unsigned int v518; // eax
  unsigned int v519; // ecx
  __int64 v520; // rsi
  unsigned __int64 v521; // rdx
  signed __int64 v522; // r8
  unsigned int v523; // eax
  unsigned int v524; // ecx
  __int64 v525; // rsi
  __int64 v526; // rax
  __int64 v527; // rax
  __int64 v528; // rax
  __int64 v529; // rax
  __int64 v530; // rax
  __int64 v531; // rax
  __int64 v532; // rax
  __int64 v533; // rax
  __int64 v534; // rax
  __int64 v535; // rax
  __int64 v536; // rax
  __int64 v537; // rax
  __int64 v538; // rax
  __int64 v539; // rax
  __int64 v540; // rax
  __int64 v541; // rax
  __int64 v542; // rax
  __int64 v543; // rax
  __int64 v544; // rax
  __int64 v545; // rax
  __int64 v546; // rax
  __int64 v547; // rax
  __int64 v548; // rax
  __int64 v549; // rax
  __int64 v550; // rax
  __int64 v551; // rax
  __int64 v552; // rax
  __int64 v553; // rax
  __int64 v554; // r14
  _DWORD *v555; // rax
  __int64 v556; // rax
  __int64 v557; // rax
  unsigned __int64 v558; // rdx
  signed __int64 v559; // r15
  unsigned int v560; // ecx
  __int64 v561; // rsi
  __int64 v562; // rax
  __int64 v563; // rax
  __int64 v564; // rax
  __int64 v565; // rax
  __int64 v566; // rax
  __int64 v567; // r14
  unsigned __int64 v568; // r15
  __int64 v569; // rsi
  __int64 v570; // rax
  char *v571; // rdi
  __int64 v572; // r14
  __int64 v573; // r15
  char *v574; // rbx
  __int64 v575; // rax
  __int64 v576; // r14
  unsigned __int64 v577; // r15
  __int64 v578; // rsi
  __int64 v579; // rax
  __int64 v580; // rax
  __int64 v581; // rax
  __int64 v582; // r14
  unsigned __int64 v583; // r15
  __int64 v584; // rsi
  __int64 v585; // rax
  __int64 v586; // rax
  __int64 v587; // rax
  __int64 v588; // r14
  unsigned __int64 v589; // r15
  __int64 v590; // rsi
  __int64 v591; // rax
  __int64 v592; // r14
  __int64 v593; // r15
  unsigned __int64 v594; // rdx
  __int64 v595; // rsi
  __m128i si128; // xmm0
  __int64 v597; // r14
  __int64 v598; // rax
  __int64 v599; // rax
  __int64 v600; // r14
  unsigned __int64 v601; // r15
  __int64 v602; // rsi
  __int64 v603; // rax
  __int64 v604; // rax
  __int64 v605; // rax
  __int64 v606; // r14
  unsigned __int64 v607; // r15
  __int64 v608; // rsi
  __int64 v609; // rax
  __int64 v610; // rax
  __int64 v611; // rax
  __int64 v612; // rax
  __int64 v613; // r14
  unsigned __int64 v614; // r15
  __int64 v615; // rsi
  __int64 v616; // rax
  __int64 v617; // rax
  __int64 v618; // r15
  unsigned __int64 v619; // r14
  __int64 v620; // rax
  __int64 v621; // rax
  __int64 v622; // rax
  __int64 v623; // rax
  __int64 v624; // rax
  __int64 v625; // rax
  size_t v626; // [rsp+8h] [rbp-148h]
  __int64 v627; // [rsp+10h] [rbp-140h]
  __int64 v629; // [rsp+20h] [rbp-130h]
  size_t v630; // [rsp+20h] [rbp-130h]
  unsigned __int64 v631; // [rsp+20h] [rbp-130h]
  __int64 v632; // [rsp+20h] [rbp-130h]
  size_t v633; // [rsp+20h] [rbp-130h]
  __int64 v634; // [rsp+20h] [rbp-130h]
  __int64 v635; // [rsp+20h] [rbp-130h]
  __int64 v636; // [rsp+20h] [rbp-130h]
  unsigned __int64 v637; // [rsp+28h] [rbp-128h]
  unsigned __int64 v638; // [rsp+28h] [rbp-128h]
  unsigned __int64 v639; // [rsp+28h] [rbp-128h]
  unsigned __int64 v640; // [rsp+28h] [rbp-128h]
  char *v641; // [rsp+28h] [rbp-128h]
  unsigned __int64 v642; // [rsp+28h] [rbp-128h]
  const char *v643; // [rsp+28h] [rbp-128h]
  __int64 v644; // [rsp+28h] [rbp-128h]
  __int64 v645; // [rsp+28h] [rbp-128h]
  __int64 v646; // [rsp+28h] [rbp-128h]
  __int64 v647; // [rsp+28h] [rbp-128h]
  const char *v648; // [rsp+28h] [rbp-128h]
  const char *v649; // [rsp+28h] [rbp-128h]
  __int64 v650; // [rsp+28h] [rbp-128h]
  unsigned __int64 v651; // [rsp+30h] [rbp-120h]
  __int64 v652; // [rsp+30h] [rbp-120h]
  __int64 v653; // [rsp+30h] [rbp-120h]
  __int64 v654; // [rsp+30h] [rbp-120h]
  __int64 v655; // [rsp+30h] [rbp-120h]
  __int64 v656; // [rsp+30h] [rbp-120h]
  __int64 v657; // [rsp+30h] [rbp-120h]
  __int64 v658; // [rsp+30h] [rbp-120h]
  __int64 v659; // [rsp+30h] [rbp-120h]
  __int64 *v660; // [rsp+30h] [rbp-120h]
  unsigned __int64 v661; // [rsp+30h] [rbp-120h]
  unsigned __int64 v662; // [rsp+30h] [rbp-120h]
  unsigned __int64 v663; // [rsp+30h] [rbp-120h]
  int v665; // [rsp+38h] [rbp-118h]
  int v666; // [rsp+40h] [rbp-110h]
  __int64 v668; // [rsp+48h] [rbp-108h]
  __int64 v669; // [rsp+48h] [rbp-108h]
  __int64 v670; // [rsp+48h] [rbp-108h]
  __int64 v671; // [rsp+48h] [rbp-108h]
  __int64 v672; // [rsp+48h] [rbp-108h]
  int v673; // [rsp+48h] [rbp-108h]
  __int64 v674; // [rsp+48h] [rbp-108h]
  __int64 v675; // [rsp+48h] [rbp-108h]
  __int64 v676; // [rsp+48h] [rbp-108h]
  __int64 v677; // [rsp+48h] [rbp-108h]
  __int64 v678; // [rsp+48h] [rbp-108h]
  __int64 v679; // [rsp+48h] [rbp-108h]
  __int64 v680; // [rsp+48h] [rbp-108h]
  __int64 v681; // [rsp+48h] [rbp-108h]
  __int64 v682; // [rsp+48h] [rbp-108h]
  __int64 v683; // [rsp+48h] [rbp-108h]
  __int64 v684; // [rsp+48h] [rbp-108h]
  __int64 v685; // [rsp+48h] [rbp-108h]
  __int64 v686; // [rsp+48h] [rbp-108h]
  __int64 v687; // [rsp+48h] [rbp-108h]
  __int64 v688; // [rsp+48h] [rbp-108h]
  __int64 v689; // [rsp+48h] [rbp-108h]
  __int64 v690; // [rsp+48h] [rbp-108h]
  __int64 v691; // [rsp+48h] [rbp-108h]
  __int64 v692; // [rsp+48h] [rbp-108h]
  __int64 v693; // [rsp+48h] [rbp-108h]
  __int64 v694; // [rsp+48h] [rbp-108h]
  __int64 v695; // [rsp+48h] [rbp-108h]
  __int64 v696; // [rsp+48h] [rbp-108h]
  __int64 v697; // [rsp+48h] [rbp-108h]
  __int64 v698; // [rsp+48h] [rbp-108h]
  __int64 v699; // [rsp+48h] [rbp-108h]
  __int64 v700; // [rsp+48h] [rbp-108h]
  __int64 v701; // [rsp+48h] [rbp-108h]
  __int64 v702; // [rsp+48h] [rbp-108h]
  __int64 v703; // [rsp+48h] [rbp-108h]
  __int64 v704; // [rsp+48h] [rbp-108h]
  __int64 v705; // [rsp+48h] [rbp-108h]
  __int64 v706; // [rsp+48h] [rbp-108h]
  __int64 v707; // [rsp+48h] [rbp-108h]
  __int64 v708; // [rsp+48h] [rbp-108h]
  __int64 v709; // [rsp+48h] [rbp-108h]
  __int64 v710; // [rsp+48h] [rbp-108h]
  __int64 v711; // [rsp+48h] [rbp-108h]
  __int64 v712; // [rsp+48h] [rbp-108h]
  __int64 v713; // [rsp+48h] [rbp-108h]
  __int64 v714; // [rsp+48h] [rbp-108h]
  __int64 v715; // [rsp+48h] [rbp-108h]
  __int64 v716; // [rsp+48h] [rbp-108h]
  __int64 v717; // [rsp+48h] [rbp-108h]
  void *src; // [rsp+A0h] [rbp-B0h] BYREF
  __int128 v719; // [rsp+A8h] [rbp-A8h]
  __int64 v720; // [rsp+B8h] [rbp-98h]
  __int64 v721; // [rsp+C0h] [rbp-90h]
  __int64 v722; // [rsp+C8h] [rbp-88h]
  __int64 v723; // [rsp+D0h] [rbp-80h]
  int v724; // [rsp+D8h] [rbp-78h]
  __int64 v725; // [rsp+E0h] [rbp-70h]
  __int128 v726; // [rsp+E8h] [rbp-68h]
  char v727; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v728; // [rsp+118h] [rbp-38h]

  v5 = a3 & 0x10000;
  v7 = a1;
  v728 = __readfsqword(0x28u);
  v8 = a5 & 1;
  v666 = v8;
  v9 = a3 & 0x600;
  if ( (a3 & 0x600) == 0 )
  {
    v10 = 16;
    v11 = "unexplored byte\n";
    if ( v8 )
    {
      v10 = 11;
      v11 = "unexplored ";
    }
    v12 = a1[1];
    v13 = v10;
    v668 = v12;
    if ( v12 )
    {
      v668 = v12 - 1;
      v13 = v10 + v12 - 1;
    }
    v14 = *a1;
    v15 = v13 + 1;
    if ( a1[2] < (unsigned __int64)(v13 + 1) )
    {
      v634 = v13;
      v643 = v11;
      v652 = v13 + 1;
      v526 = qvector_reserve();
      v13 = v634;
      v11 = v643;
      *a1 = v526;
      v15 = v652;
      v14 = v526;
    }
    a1[1] = v15;
    *(_BYTE *)(v14 + v13) = 0;
    v16 = (_QWORD *)(*a1 + v668);
    *v16 = *(_QWORD *)v11;
    *(_QWORD *)((char *)v16 + v10 - 8) = *(_QWORD *)&v11[v10 - 8];
    v17 = (unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = (char *)v16 - v17;
    v19 = (const char *)(v11 - v18);
    v20 = ((_DWORD)v18 + v10) & 0xFFFFFFF8;
    if ( v20 >= 8 )
    {
      v21 = v20 & 0xFFFFFFF8;
      v22 = 0;
      do
      {
        v23 = v22;
        v22 += 8;
        *(_QWORD *)(v17 + v23) = *(_QWORD *)&v19[v23];
      }
      while ( v22 < v21 );
    }
    goto LABEL_11;
  }
  if ( v9 == 1536 )
  {
    v79 = 5;
    v80 = "code ";
    if ( !v8 )
    {
      v79 = 24;
      v80 = "start of an instruction\n";
    }
    v81 = a1[1];
    v82 = v79;
    v674 = v81;
    if ( v81 )
    {
      v486 = v81 - 1;
      v83 = *a1;
      v82 = v79 + v486;
      v674 = v486;
      v84 = v79 + v486 + 1;
      if ( a1[2] >= v84 )
        goto LABEL_84;
    }
    else
    {
      v83 = *a1;
      v84 = v79 + 1;
      if ( a1[2] >= (unsigned __int64)(v79 + 1) )
        goto LABEL_84;
    }
    v632 = v82;
    v641 = v80;
    v651 = v84;
    v487 = qvector_reserve();
    v82 = v632;
    v80 = v641;
    *a1 = v487;
    v84 = v651;
    v83 = v487;
LABEL_84:
    a1[1] = v84;
    *(_BYTE *)(v83 + v82) = 0;
    v85 = (_QWORD *)(*a1 + v674);
    if ( (unsigned int)v79 >= 8 )
    {
      v488 = (unsigned __int64)(v85 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v85 = *(_QWORD *)v80;
      *(_QWORD *)((char *)v85 + v79 - 8) = *(_QWORD *)&v80[v79 - 8];
      v489 = v80 - ((char *)v85 - v488);
      if ( (((_DWORD)v79 + (_DWORD)v85 - (_DWORD)v488) & 0xFFFFFFF8) >= 8 )
      {
        v490 = 0;
        do
        {
          v491 = v490;
          v490 += 8;
          *(_QWORD *)(v488 + v491) = *(_QWORD *)(v489 + v491);
        }
        while ( v490 < (((_DWORD)v79 + (_DWORD)v85 - (_DWORD)v488) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v85 = *(_DWORD *)v80;
      *(_DWORD *)((char *)v85 + (unsigned int)v79 - 4) = *(_DWORD *)&v80[(unsigned int)v79 - 4];
    }
    if ( !v5 )
      goto LABEL_87;
    goto LABEL_12;
  }
  if ( v9 != 1024 )
  {
    if ( v9 == 512 )
    {
      v492 = 5;
      v493 = "tail ";
      if ( !v8 )
      {
        v492 = 33;
        v493 = "tail byte of instruction or data\n";
      }
      v494 = a1[1];
      v495 = v492;
      v705 = v494;
      if ( v494 )
      {
        v705 = v494 - 1;
        v495 = v492 + v494 - 1;
      }
      v496 = *a1;
      v497 = v495 + 1;
      if ( a1[2] < (unsigned __int64)(v495 + 1) )
      {
        v636 = v495;
        v649 = v493;
        v658 = v495 + 1;
        v557 = qvector_reserve();
        v495 = v636;
        v493 = v649;
        *a1 = v557;
        v497 = v658;
        v496 = v557;
      }
      a1[1] = v497;
      *(_BYTE *)(v496 + v495) = 0;
      v498 = (_QWORD *)(*a1 + v705);
      if ( (unsigned int)v492 >= 8 )
      {
        v516 = (unsigned __int64)(v498 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v498 = *(_QWORD *)v493;
        *(_QWORD *)((char *)v498 + v492 - 8) = *(_QWORD *)&v493[v492 - 8];
        v517 = v493 - ((const char *)v498 - v516);
        if ( (((_DWORD)v492 + (_DWORD)v498 - (_DWORD)v516) & 0xFFFFFFF8) >= 8 )
        {
          v518 = (v492 + (_DWORD)v498 - v516) & 0xFFFFFFF8;
          v519 = 0;
          do
          {
            v520 = v519;
            v519 += 8;
            *(_QWORD *)(v516 + v520) = *(_QWORD *)(v517 + v520);
          }
          while ( v519 < v518 );
        }
      }
      else
      {
        *(_DWORD *)v498 = *(_DWORD *)v493;
        *(_DWORD *)((char *)v498 + (unsigned int)v492 - 4) = *(_DWORD *)&v493[(unsigned int)v492 - 4];
      }
    }
LABEL_11:
    if ( !v5 )
      goto LABEL_23;
LABEL_12:
    v24 = 5;
    v25 = "flow ";
    if ( !v666 )
    {
      v24 = 48;
      v25 = "previous instruction passes execution flow here\n";
    }
    v26 = v7[1];
    v27 = v24;
    v669 = v26;
    if ( v26 )
    {
      v669 = v26 - 1;
      v27 = v24 + v26 - 1;
    }
    v28 = *v7;
    v29 = v27 + 1;
    if ( v7[2] < (unsigned __int64)(v27 + 1) )
    {
      v646 = v27;
      v655 = v27 + 1;
      v552 = qvector_reserve();
      v27 = v646;
      v29 = v655;
      *v7 = v552;
      v28 = v552;
    }
    v7[1] = v29;
    *(_BYTE *)(v28 + v27) = 0;
    v30 = (_QWORD *)(*v7 + v669);
    if ( (unsigned int)v24 >= 8 )
    {
      v442 = (unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v30 = *(_QWORD *)v25;
      *(_QWORD *)((char *)v30 + v24 - 8) = *(_QWORD *)&v25[v24 - 8];
      v443 = v25 - ((char *)v30 - v442);
      if ( (((_DWORD)v24 + (_DWORD)v30 - (_DWORD)v442) & 0xFFFFFFF8) >= 8 )
      {
        v444 = 0;
        do
        {
          v445 = v444;
          v444 += 8;
          *(_QWORD *)(v442 + v445) = *(_QWORD *)(v443 + v445);
        }
        while ( v444 < (((_DWORD)v24 + (_DWORD)v30 - (_DWORD)v442) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v30 = *(_DWORD *)v25;
      *(_DWORD *)((char *)v30 + (unsigned int)v24 - 4) = *(_DWORD *)&v25[(unsigned int)v24 - 4];
    }
    if ( v9 != 1536 )
    {
      if ( v9 != 1024 )
        goto LABEL_23;
      v31 = a3 & 0xF0000000;
      if ( (a3 & 0xF0000000) == 0 )
        goto LABEL_23;
      goto LABEL_532;
    }
LABEL_87:
    if ( (a3 & 0x10000000) != 0 )
    {
      v86 = 5;
      v87 = "func ";
      if ( !v666 )
      {
        v86 = 15;
        v87 = "function start\n";
      }
      v88 = v7[1];
      v89 = v86;
      v675 = v88;
      if ( v88 )
      {
        v675 = v88 - 1;
        v89 = v88 - 1 + v86;
      }
      v90 = *v7;
      v91 = v89 + 1;
      if ( v7[2] < (unsigned __int64)(v89 + 1) )
      {
        v650 = v89;
        v659 = v89 + 1;
        v564 = qvector_reserve();
        v89 = v650;
        v91 = v659;
        *v7 = v564;
        v90 = v564;
      }
      v7[1] = v91;
      *(_BYTE *)(v90 + v89) = 0;
      v92 = (_QWORD *)(*v7 + v675);
      if ( (unsigned int)v86 >= 8 )
      {
        v558 = (unsigned __int64)(v92 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        *v92 = *(_QWORD *)v87;
        *(_QWORD *)((char *)v92 + v86 - 8) = *(_QWORD *)&v87[v86 - 8];
        v559 = v87 - ((const char *)v92 - v558);
        if ( (((_DWORD)v86 + (_DWORD)v92 - (_DWORD)v558) & 0xFFFFFFF8) >= 8 )
        {
          v560 = 0;
          do
          {
            v561 = v560;
            v560 += 8;
            *(_QWORD *)(v558 + v561) = *(_QWORD *)(v559 + v561);
          }
          while ( v560 < (((_DWORD)v86 + (_DWORD)v92 - (_DWORD)v558) & 0xFFFFFFF8) );
        }
      }
      else
      {
        *(_DWORD *)v92 = *(_DWORD *)v87;
        *(_DWORD *)((char *)v92 + (unsigned int)v86 - 4) = *(_DWORD *)&v87[(unsigned int)v86 - 4];
      }
    }
    if ( (a3 & 0x1000) == 0 )
    {
      if ( (a3 & 0x2000) == 0 )
        goto LABEL_116;
      goto LABEL_106;
    }
    goto LABEL_97;
  }
  v499 = 5;
  v500 = "data ";
  if ( !v8 )
  {
    v499 = 14;
    v500 = "start of data\n";
  }
  v501 = a1[1];
  v502 = v499;
  v706 = v501;
  if ( v501 )
  {
    v706 = v501 - 1;
    v502 = v499 + v501 - 1;
  }
  v503 = *a1;
  v504 = v502 + 1;
  if ( a1[2] < (unsigned __int64)(v502 + 1) )
  {
    v635 = v502;
    v648 = v500;
    v657 = v502 + 1;
    v556 = qvector_reserve();
    v502 = v635;
    v500 = v648;
    *a1 = v556;
    v504 = v657;
    v503 = v556;
  }
  a1[1] = v504;
  *(_BYTE *)(v503 + v502) = 0;
  v505 = (_QWORD *)(*a1 + v706);
  if ( (unsigned int)v499 >= 8 )
  {
    v521 = (unsigned __int64)(v505 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v505 = *(_QWORD *)v500;
    *(_QWORD *)((char *)v505 + v499 - 8) = *(_QWORD *)&v500[v499 - 8];
    v522 = v500 - ((const char *)v505 - v521);
    if ( (((_DWORD)v499 + (_DWORD)v505 - (_DWORD)v521) & 0xFFFFFFF8) >= 8 )
    {
      v523 = (v499 + (_DWORD)v505 - v521) & 0xFFFFFFF8;
      v524 = 0;
      do
      {
        v525 = v524;
        v524 += 8;
        *(_QWORD *)(v521 + v525) = *(_QWORD *)(v522 + v525);
      }
      while ( v524 < v523 );
    }
  }
  else
  {
    *(_DWORD *)v505 = *(_DWORD *)v500;
    *(_DWORD *)((char *)v505 + (unsigned int)v499 - 4) = *(_DWORD *)&v500[(unsigned int)v499 - 4];
  }
  if ( v5 )
    goto LABEL_12;
  v31 = a3 & 0xF0000000;
  if ( (a3 & 0xF0000000) == 0 )
    goto LABEL_23;
LABEL_532:
  v506 = v7[1];
  v707 = v506;
  if ( v506 )
  {
    v507 = v506 + 10;
    v508 = v506 + 11;
    v707 = v506 - 1;
  }
  else
  {
    v508 = 12;
    v507 = 11;
  }
  v509 = *v7;
  if ( v7[2] < v508 )
  {
    v661 = v508;
    v579 = qvector_reserve();
    v508 = v661;
    *v7 = v579;
    v509 = v579;
  }
  v7[1] = v508;
  *(_BYTE *)(v509 + v507) = 0;
  qmemcpy((void *)(*v7 + v707), "data type: ", 11);
  switch ( v31 )
  {
    case 268435456LL:
      v575 = v7[1];
      v710 = v575;
      if ( v575 )
      {
        v576 = v575 + 3;
        v577 = v575 + 4;
        v710 = v575 - 1;
      }
      else
      {
        v577 = 5;
        v576 = 4;
      }
      v578 = *v7;
      if ( v7[2] < v577 )
      {
        v586 = qvector_reserve();
        *v7 = v586;
        v578 = v586;
      }
      v7[1] = v577;
      *(_BYTE *)(v578 + v576) = 0;
      *(_DWORD *)(*v7 + v710) = 1685221239;
      break;
    case 536870912LL:
      v566 = v7[1];
      v709 = v566;
      if ( v566 )
      {
        v567 = v566 + 4;
        v568 = v566 + 5;
        v709 = v566 - 1;
      }
      else
      {
        v568 = 6;
        v567 = 5;
      }
      v569 = *v7;
      if ( v7[2] < v568 )
      {
        v598 = qvector_reserve();
        *v7 = v598;
        v569 = v598;
      }
      v7[1] = v568;
      *(_BYTE *)(v569 + v567) = 0;
      v570 = *v7 + v709;
      *(_DWORD *)v570 = 1919907684;
      *(_BYTE *)(v570 + 4) = 100;
      break;
    case 805306368LL:
      v581 = v7[1];
      v711 = v581;
      if ( v581 )
      {
        v582 = v581 + 4;
        v583 = v581 + 5;
        v711 = v581 - 1;
      }
      else
      {
        v583 = 6;
        v582 = 5;
      }
      v584 = *v7;
      if ( v7[2] < v583 )
      {
        v604 = qvector_reserve();
        *v7 = v604;
        v584 = v604;
      }
      v7[1] = v583;
      *(_BYTE *)(v584 + v582) = 0;
      v585 = *v7 + v711;
      *(_DWORD *)v585 = 1919907697;
      *(_BYTE *)(v585 + 4) = 100;
      break;
    case 1879048192LL:
      v587 = v7[1];
      v712 = v587;
      if ( v587 )
      {
        v588 = v587 + 4;
        v589 = v587 + 5;
        v712 = v587 - 1;
      }
      else
      {
        v589 = 6;
        v588 = 5;
      }
      v590 = *v7;
      if ( v7[2] < v589 )
      {
        v611 = qvector_reserve();
        *v7 = v611;
        v590 = v611;
      }
      v7[1] = v589;
      *(_BYTE *)(v590 + v588) = 0;
      v591 = *v7 + v712;
      *(_DWORD *)v591 = 1919907695;
      *(_BYTE *)(v591 + 4) = 100;
      break;
    case 3758096384LL:
      v599 = v7[1];
      v713 = v599;
      if ( v599 )
      {
        v600 = v599 + 4;
        v601 = v599 + 5;
        v713 = v599 - 1;
      }
      else
      {
        v601 = 6;
        v600 = 5;
      }
      v602 = *v7;
      if ( v7[2] < v601 )
      {
        v622 = qvector_reserve();
        *v7 = v622;
        v602 = v622;
      }
      v7[1] = v601;
      *(_BYTE *)(v602 + v600) = 0;
      v603 = *v7 + v713;
      *(_DWORD *)v603 = 1919907705;
      *(_BYTE *)(v603 + 4) = 100;
      break;
    case 2147483648LL:
      v605 = v7[1];
      v714 = v605;
      if ( v605 )
      {
        v606 = v605 + 4;
        v607 = v605 + 5;
        v714 = v605 - 1;
      }
      else
      {
        v607 = 6;
        v606 = 5;
      }
      v608 = *v7;
      if ( v7[2] < v607 )
      {
        v624 = qvector_reserve();
        *v7 = v624;
        v608 = v624;
      }
      v7[1] = v607;
      *(_BYTE *)(v608 + v606) = 0;
      v609 = *v7 + v714;
      *(_DWORD *)v609 = 1634692198;
      *(_BYTE *)(v609 + 4) = 116;
      break;
    case 2415919104LL:
      v612 = v7[1];
      v715 = v612;
      if ( v612 )
      {
        v613 = v612 + 5;
        v614 = v612 + 6;
        v715 = v612 - 1;
      }
      else
      {
        v614 = 7;
        v613 = 6;
      }
      v615 = *v7;
      if ( v7[2] < v614 )
      {
        v625 = qvector_reserve();
        *v7 = v625;
        v615 = v625;
      }
      v7[1] = v614;
      *(_BYTE *)(v615 + v613) = 0;
      v616 = *v7 + v715;
      *(_DWORD *)v616 = 1651863396;
      *(_WORD *)(v616 + 4) = 25964;
      break;
    case 1073741824LL:
      v617 = v7[1];
      v716 = v617;
      if ( v617 )
      {
        v618 = v617 + 4;
        v619 = v617 + 5;
        v716 = v617 - 1;
      }
      else
      {
        v619 = 6;
        v618 = 5;
      }
      if ( v7[2] < v619 )
        *v7 = qvector_reserve();
      v620 = *v7;
      v7[1] = v619;
      *(_BYTE *)(v620 + v618) = 0;
      v621 = *v7 + v716;
      *(_DWORD *)v621 = 1954112116;
      *(_BYTE *)(v621 + 4) = 101;
      break;
    case 2684354560LL:
      v717 = (v7[1] == 0) + v7[1] - 1;
      if ( v7[2] < (unsigned __int64)(v717 + 9) )
        *v7 = qvector_reserve();
      v623 = *v7;
      v7[1] = v717 + 9;
      *(_BYTE *)(v623 + v717 + 8) = 0;
      *(_QWORD *)(*v7 + v717) = 0x6C6165726B636170LL;
      break;
    case 1342177280LL:
      src = nullptr;
      get_str_type();
      v719 = 0;
      print_strlit_type();
      sub_96570(v7);
      print_strlit_type();
      sub_96570(v7);
      break;
    case 1610612736LL:
      src = nullptr;
      v719 = 0;
      get_strid();
      if ( !(unsigned __int8)get_type_by_tid() )
        sub_94360((__int64 *)&src);
      get_tinfo_property();
      get_tinfo_property();
      sub_96570(v7);
      if ( get_tinfo_property() )
        sub_96570(v7);
      clear_tinfo_t();
      if ( src )
      {
        *(_QWORD *)&v719 = 0;
        qfree();
      }
      break;
    case 2952790016LL:
      ea2node();
      netnode_supval();
      sub_96570(v7);
      break;
    case 3489660928LL:
      if ( (int)get_custom_data_type_ids() > 0 )
        get_custom_data_type();
      sub_96570(v7);
      break;
  }
  v510 = " ";
  if ( !v666 )
    v510 = "\n";
  v511 = v7[1];
  v708 = v511;
  if ( v511 )
  {
    v512 = v511 + 1;
    v513 = v7[1];
    v708 = v511 - 1;
  }
  else
  {
    v512 = 2;
    v513 = 1;
  }
  v514 = *v7;
  if ( v7[2] < v512 )
  {
    v662 = v512;
    v580 = qvector_reserve();
    v512 = v662;
    *v7 = v580;
    v514 = v580;
  }
  v7[1] = v512;
  *(_BYTE *)(v514 + v513) = 0;
  *(_BYTE *)(*v7 + v708) = *v510;
LABEL_23:
  if ( (a3 & 0x1000) != 0 )
  {
LABEL_97:
    v93 = 6;
    v94 = "xrefd ";
    if ( !v666 )
    {
      v93 = 41;
      v94 = "current byte have cross-references to it\n";
    }
    v95 = v7[1];
    v96 = v93;
    v676 = v95;
    if ( v95 )
    {
      v676 = v95 - 1;
      v96 = v95 - 1 + v93;
    }
    v97 = *v7;
    v98 = v96 + 1;
    if ( v7[2] < (unsigned __int64)(v96 + 1) )
    {
      v647 = v96;
      v656 = v96 + 1;
      v553 = qvector_reserve();
      v96 = v647;
      v98 = v656;
      *v7 = v553;
      v97 = v553;
    }
    v7[1] = v98;
    *(_BYTE *)(v97 + v96) = 0;
    v99 = (_QWORD *)(*v7 + v676);
    if ( (unsigned int)v93 >= 8 )
    {
      v438 = (unsigned __int64)(v99 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v99 = *(_QWORD *)v94;
      *(_QWORD *)((char *)v99 + v93 - 8) = *(_QWORD *)&v94[v93 - 8];
      v439 = v94 - ((const char *)v99 - v438);
      if ( (((_DWORD)v93 + (_DWORD)v99 - (_DWORD)v438) & 0xFFFFFFF8) >= 8 )
      {
        v440 = 0;
        do
        {
          v441 = v440;
          v440 += 8;
          *(_QWORD *)(v438 + v441) = *(_QWORD *)(v439 + v441);
        }
        while ( v440 < (((_DWORD)v93 + (_DWORD)v99 - (_DWORD)v438) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v99 = *(_DWORD *)v94;
      *(_DWORD *)((char *)v99 + (unsigned int)v93 - 4) = *(_DWORD *)&v94[(unsigned int)v93 - 4];
    }
    if ( (a3 & 0x2000) == 0 )
    {
LABEL_115:
      if ( v9 != 1536 )
        goto LABEL_25;
LABEL_116:
      if ( (a3 & 0x40000000) != 0 )
      {
        v114 = 9;
        v115 = "immd_arg ";
        if ( !v666 )
        {
          v114 = 20;
          v115 = "has immediate value\n";
        }
        v116 = v7[1];
        v117 = v114;
        v678 = v116;
        if ( v116 )
        {
          v678 = v116 - 1;
          v117 = v116 - 1 + v114;
        }
        v118 = *v7;
        v119 = v117 + 1;
        if ( v7[2] < (unsigned __int64)(v117 + 1) )
        {
          v563 = qvector_reserve();
          v119 = v117 + 1;
          *v7 = v563;
          v118 = v563;
        }
        v7[1] = v119;
        *(_BYTE *)(v118 + v117) = 0;
        v120 = (_QWORD *)(*v7 + v678);
        *v120 = *(_QWORD *)v115;
        *(_QWORD *)((char *)v120 + v114 - 8) = *(_QWORD *)&v115[v114 - 8];
        v121 = (unsigned __int64)(v120 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v122 = (char *)v120 - v121;
        v123 = (const char *)(v115 - v122);
        v124 = ((_DWORD)v122 + v114) & 0xFFFFFFF8;
        if ( v124 >= 8 )
        {
          v125 = v124 & 0xFFFFFFF8;
          v126 = 0;
          do
          {
            v127 = v126;
            v126 += 8;
            *(_QWORD *)(v121 + v127) = *(_QWORD *)&v123[v127];
          }
          while ( v126 < v125 );
        }
      }
      if ( a3 < 0 )
      {
        v128 = 14;
        v129 = "has_jump_info ";
        if ( !v666 )
        {
          v128 = 30;
          v129 = "has jump table or switch_info\n";
        }
        v130 = v7[1];
        v131 = v128;
        v679 = v130;
        if ( v130 )
        {
          v679 = v130 - 1;
          v131 = v130 - 1 + v128;
        }
        v132 = *v7;
        v133 = v131 + 1;
        if ( v7[2] < (unsigned __int64)(v131 + 1) )
        {
          v565 = qvector_reserve();
          v133 = v131 + 1;
          *v7 = v565;
          v132 = v565;
        }
        v7[1] = v133;
        *(_BYTE *)(v132 + v131) = 0;
        v134 = (_QWORD *)(*v7 + v679);
        *v134 = *(_QWORD *)v129;
        *(_QWORD *)((char *)v134 + v128 - 8) = *(_QWORD *)&v129[v128 - 8];
        v135 = (unsigned __int64)(v134 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v136 = (char *)v134 - v135;
        v137 = (const char *)(v129 - v136);
        v138 = ((_DWORD)v136 + v128) & 0xFFFFFFF8;
        if ( v138 >= 8 )
        {
          v139 = v138 & 0xFFFFFFF8;
          v140 = 0;
          do
          {
            v141 = v140;
            v140 += 8;
            *(_QWORD *)(v135 + v141) = *(_QWORD *)&v137[v141];
          }
          while ( v140 < v139 );
        }
      }
      goto LABEL_25;
    }
LABEL_106:
    v100 = 9;
    v101 = "long_cmt ";
    if ( !v666 )
    {
      v100 = 13;
      v101 = "long comment\n";
    }
    v102 = v7[1];
    v103 = v100;
    v677 = v102;
    if ( v102 )
    {
      v677 = v102 - 1;
      v103 = v102 - 1 + v100;
    }
    v104 = *v7;
    v105 = v103 + 1;
    if ( v7[2] < (unsigned __int64)(v103 + 1) )
    {
      v645 = v103;
      v654 = v103 + 1;
      v545 = qvector_reserve();
      v103 = v645;
      v105 = v654;
      *v7 = v545;
      v104 = v545;
    }
    v7[1] = v105;
    *(_BYTE *)(v104 + v103) = 0;
    v106 = (_QWORD *)(*v7 + v677);
    *v106 = *(_QWORD *)v101;
    *(_QWORD *)((char *)v106 + v100 - 8) = *(_QWORD *)&v101[v100 - 8];
    v107 = (unsigned __int64)(v106 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v108 = (char *)v106 - v107;
    v109 = (const char *)(v101 - v108);
    v110 = ((_DWORD)v108 + v100) & 0xFFFFFFF8;
    if ( v110 >= 8 )
    {
      v111 = v110 & 0xFFFFFFF8;
      v112 = 0;
      do
      {
        v113 = v112;
        v112 += 8;
        *(_QWORD *)(v107 + v113) = *(_QWORD *)&v109[v113];
      }
      while ( v112 < v111 );
    }
    goto LABEL_115;
  }
  if ( (a3 & 0x2000) != 0 )
    goto LABEL_106;
LABEL_25:
  if ( (a3 & 0x20000) != 0 )
  {
    v32 = 12;
    v33 = "has_invsign ";
    if ( !v666 )
    {
      v32 = 26;
      v33 = "inverted sign of operands\n";
    }
    v34 = v7[1];
    v35 = v32;
    v670 = v34;
    if ( v34 )
    {
      v670 = v34 - 1;
      v35 = v34 - 1 + v32;
    }
    v36 = *v7;
    v37 = v35 + 1;
    if ( v7[2] < (unsigned __int64)(v35 + 1) )
    {
      v546 = qvector_reserve();
      v37 = v35 + 1;
      *v7 = v546;
      v36 = v546;
    }
    v7[1] = v37;
    *(_BYTE *)(v36 + v35) = 0;
    v38 = (_QWORD *)(*v7 + v670);
    *v38 = *(_QWORD *)v33;
    *(_QWORD *)((char *)v38 + v32 - 8) = *(_QWORD *)&v33[v32 - 8];
    v39 = (unsigned __int64)(v38 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v40 = (char *)v38 - v39;
    v41 = (const char *)(v33 - v40);
    v42 = ((_DWORD)v40 + v32) & 0xFFFFFFF8;
    if ( v42 >= 8 )
    {
      v43 = v42 & 0xFFFFFFF8;
      v44 = 0;
      do
      {
        v45 = v44;
        v44 += 8;
        *(_QWORD *)(v39 + v45) = *(_QWORD *)&v41[v45];
      }
      while ( v44 < v43 );
    }
  }
  if ( (a3 & 0x40000) != 0 )
  {
    v46 = 9;
    v47 = "has_bnot ";
    if ( !v666 )
    {
      v46 = 29;
      v47 = "bitwise negation of operands\n";
    }
    v48 = v7[1];
    v49 = v46;
    v671 = v48;
    if ( v48 )
    {
      v671 = v48 - 1;
      v49 = v48 - 1 + v46;
    }
    v50 = *v7;
    v51 = v49 + 1;
    if ( v7[2] < (unsigned __int64)(v49 + 1) )
    {
      v544 = qvector_reserve();
      v51 = v49 + 1;
      *v7 = v544;
      v50 = v544;
    }
    v7[1] = v51;
    *(_BYTE *)(v50 + v49) = 0;
    v52 = (_QWORD *)(*v7 + v671);
    *v52 = *(_QWORD *)v47;
    *(_QWORD *)((char *)v52 + v46 - 8) = *(_QWORD *)&v47[v46 - 8];
    v53 = (unsigned __int64)(v52 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v54 = (char *)v52 - v53;
    v55 = (const char *)(v47 - v54);
    v56 = ((_DWORD)v54 + v46) & 0xFFFFFFF8;
    if ( v56 >= 8 )
    {
      v57 = v56 & 0xFFFFFFF8;
      v58 = 0;
      do
      {
        v59 = v58;
        v58 += 8;
        *(_QWORD *)(v53 + v59) = *(_QWORD *)&v55[v59];
      }
      while ( v58 < v57 );
    }
  }
  aflags = get_aflags();
  if ( (unsigned int)get_ind_purged() != -1 )
    sub_96570(v7);
  if ( (aflags & 0x400000) != 0 )
  {
    v61 = 6;
    v62 = "noret ";
    if ( !v666 )
    {
      v61 = 16;
      v62 = "does not return\n";
    }
    v63 = v7[1];
    v64 = v61;
    v672 = v63;
    if ( v63 )
    {
      v672 = v63 - 1;
      v64 = v63 - 1 + v61;
    }
    v65 = *v7;
    v66 = v64 + 1;
    if ( v7[2] < (unsigned __int64)(v64 + 1) )
    {
      v644 = v64;
      v653 = v64 + 1;
      v543 = qvector_reserve();
      v64 = v644;
      v66 = v653;
      *v7 = v543;
      v65 = v543;
    }
    v7[1] = v66;
    *(_BYTE *)(v65 + v64) = 0;
    v67 = (_QWORD *)(*v7 + v672);
    if ( (unsigned int)v61 >= 8 )
    {
      v413 = (unsigned __int64)(v67 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v67 = *(_QWORD *)v62;
      *(_QWORD *)((char *)v67 + v61 - 8) = *(_QWORD *)&v62[v61 - 8];
      v414 = v62 - ((const char *)v67 - v413);
      if ( (((_DWORD)v61 + (_DWORD)v67 - (_DWORD)v413) & 0xFFFFFFF8) >= 8 )
      {
        v415 = 0;
        do
        {
          v416 = v415;
          v415 += 8;
          *(_QWORD *)(v413 + v416) = *(_QWORD *)(v414 + v416);
        }
        while ( v415 < (((_DWORD)v61 + (_DWORD)v67 - (_DWORD)v413) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v67 = *(_DWORD *)v62;
      *(_DWORD *)((char *)v67 + (unsigned int)v61 - 4) = *(_DWORD *)&v62[(unsigned int)v61 - 4];
    }
  }
  if ( !v666 )
    goto LABEL_148;
  v673 = 0;
  do
  {
    if ( (unsigned __int8)is_defarg() )
    {
      v68 = 0;
      goto LABEL_65;
    }
    v68 = 0;
    if ( (unsigned __int8)is_suspop() )
    {
      if ( a4 != 1 )
        sub_96570(v7);
      v69 = v7[1];
      if ( v69 )
      {
        v70 = v69 + 4;
        v71 = v69 + 5;
        v72 = *v7;
        --v69;
        if ( v7[2] >= v71 )
        {
LABEL_63:
          v7[1] = v71;
          *(_BYTE *)(v72 + v70) = 0;
          v73 = v69 + *v7;
          v68 = v666;
          *(_DWORD *)v73 = 1684631414;
          *(_BYTE *)(v73 + 4) = 32;
          goto LABEL_64;
        }
      }
      else
      {
        v72 = *v7;
        v71 = 6;
        v70 = 5;
        if ( (unsigned __int64)v7[2] >= 6 )
          goto LABEL_63;
      }
      v638 = v71;
      v379 = qvector_reserve();
      v71 = v638;
      *v7 = v379;
      v72 = v379;
      goto LABEL_63;
    }
LABEL_64:
    if ( !(unsigned __int8)is_invsign() && !(unsigned __int8)is_bnot() )
      goto LABEL_76;
LABEL_65:
    src = nullptr;
    v719 = 0;
    print_optype_description();
    v74 = v719;
    if ( (unsigned __int64)v719 <= 1 )
      goto LABEL_74;
    v75 = v7[1];
    if ( v75 <= 1 || (v76 = *v7, *(_BYTE *)(*v7 + v75 - 2) == 32) )
    {
      if ( v68 || a4 == 1 )
      {
        v142 = v719 - 1;
LABEL_140:
        v143 = v142;
        if ( v75 )
        {
          v143 = --v75 + v142;
          v74 = v75 + v142 + 1;
        }
        v144 = *v7;
        if ( v7[2] < v74 )
        {
          v633 = v143;
          v642 = v75;
          v515 = qvector_reserve();
          *v7 = v515;
          v143 = v633;
          v144 = v515;
          v75 = v642;
        }
        v7[1] = v74;
        *(_BYTE *)(v144 + v143) = 0;
        memcpy((void *)(v75 + *v7), src, v142);
        goto LABEL_74;
      }
LABEL_72:
      sub_96570(v7);
      goto LABEL_73;
    }
    v77 = v75 - 1;
    v78 = v75 + 1;
    if ( v7[2] < v75 + 1 )
    {
      v631 = v7[1];
      v640 = v75 + 1;
      v479 = qvector_reserve();
      *v7 = v479;
      v75 = v631;
      v76 = v479;
      v78 = v640;
    }
    v7[1] = v78;
    *(_BYTE *)(v76 + v77) = 32;
    *(_BYTE *)(*v7 + v75) = 0;
    if ( !v68 && a4 != 1 )
      goto LABEL_72;
LABEL_73:
    v74 = v719;
    if ( (_QWORD)v719 )
    {
      v142 = v719 - 1;
      if ( (_QWORD)v719 != 1 )
      {
        v75 = v7[1];
        goto LABEL_140;
      }
    }
LABEL_74:
    if ( src )
    {
      *(_QWORD *)&v719 = 0;
      qfree();
    }
LABEL_76:
    ++v673;
  }
  while ( a4 != v673 );
  v145 = v7[1];
  v146 = v145;
  if ( v145 )
  {
    v147 = v145 + 1;
    v148 = v7[1];
    v149 = *v7;
    v146 = v145 - 1;
    if ( v7[2] >= (unsigned __int64)(v145 + 1) )
      goto LABEL_147;
LABEL_462:
    v446 = qvector_reserve();
    *v7 = v446;
    v149 = v446;
  }
  else
  {
    v149 = *v7;
    v147 = 2;
    v148 = 1;
    if ( (unsigned __int64)v7[2] < 2 )
      goto LABEL_462;
  }
LABEL_147:
  v7[1] = v147;
  *(_BYTE *)(v149 + v148) = 0;
  *(_BYTE *)(v146 + *v7) = 10;
LABEL_148:
  item_end = get_item_end();
  if ( a2 < item_end )
  {
    do
    {
      if ( (unsigned __int8)get_fixup() )
      {
        sub_96570(v7);
        v719 = 0;
        src = nullptr;
        get_fixup_desc();
        if ( (unsigned __int64)v719 > 1 )
        {
          tag_remove();
          v151 = v719;
          if ( (_QWORD)v719 )
          {
            v152 = v719 - 1;
            if ( (_QWORD)v719 != 1 )
            {
              v153 = v7[1];
              v154 = v719 - 1;
              if ( v153 )
              {
                --v153;
                v154 = v152 + v153;
                v151 = v719 + v153;
              }
              v155 = *v7;
              if ( v7[2] < v151 )
              {
                v626 = v154;
                v627 = v153;
                v630 = v719 - 1;
                v639 = v151;
                v408 = qvector_reserve();
                *v7 = v408;
                v154 = v626;
                v155 = v408;
                v153 = v627;
                v152 = v630;
                v151 = v639;
              }
              v7[1] = v151;
              *(_BYTE *)(v155 + v154) = 0;
              memcpy((void *)(v153 + *v7), src, v152);
            }
          }
        }
        v156 = v7[1];
        v157 = 2;
        if ( v156 )
          v157 = v156-- + 1;
        v158 = *v7;
        if ( v7[2] < v157 )
        {
          v629 = v156;
          v637 = v157;
          v159 = qvector_reserve();
          *v7 = v159;
          v156 = v629;
          v158 = v159;
          v157 = v637;
        }
        v7[1] = v157;
        *(_BYTE *)(v158 + v156) = 10;
        *(_BYTE *)(*v7 + v156 + 1) = 0;
        if ( src )
        {
          *(_QWORD *)&v719 = 0;
          qfree();
        }
      }
    }
    while ( (unsigned int)get_next_fixup_ea() < item_end );
  }
  if ( (a5 & 4) != 0 )
  {
    if ( (unsigned __int8)get_tinfo() && (get_ea_name(), (unsigned __int8)print_tinfo()) )
    {
      sub_96570(v7);
      while ( (get_tinfo_property() & 0xF) == 0xA )
      {
        src = nullptr;
        src = (void *)get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
      }
      if ( (get_tinfo_property() & 0xF) == 0xC )
      {
        v727 = 16;
        src = nullptr;
        v720 = 0;
        v721 = 0;
        v722 = 0;
        v723 = 0;
        v724 = 0;
        v725 = 0;
        v719 = 0;
        v726 = 0;
        if ( (unsigned __int8)get_tinfo_details() )
        {
          dump_func_type_data();
        }
        else
        {
          v592 = v7[1];
          if ( v592 )
          {
            v593 = v592 + 44;
            v594 = v592 + 45;
            --v592;
          }
          else
          {
            v594 = 46;
            v593 = 45;
          }
          v595 = *v7;
          if ( v7[2] < v594 )
          {
            v663 = v594;
            v610 = qvector_reserve();
            *v7 = v610;
            v594 = v663;
            v595 = v610;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_1D26B0);
          v7[1] = v594;
          *(_BYTE *)(v595 + v593) = 0;
          v597 = *v7 + v592;
          *(__m128i *)v597 = si128;
          *(__m128i *)(v597 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D26C0);
          *(__m128i *)(v597 + 29) = _mm_load_si128((const __m128i *)&xmmword_1D26D0);
        }
        if ( v725 )
        {
          *(_QWORD *)&v726 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v571 = (char *)src;
        if ( src )
        {
          if ( (_QWORD)v719 )
          {
            v660 = v7;
            v572 = 0;
            v573 = v719;
            do
            {
              v574 = &v571[80 * v572];
              clear_tinfo_t();
              if ( *((_QWORD *)v574 + 5) )
              {
                *((_QWORD *)v574 + 6) = 0;
                qfree();
              }
              if ( *((_QWORD *)v574 + 2) )
              {
                *((_QWORD *)v574 + 3) = 0;
                qfree();
              }
              ++v572;
              cleanup_argloc();
              v571 = (char *)src;
            }
            while ( v573 != v572 );
            v7 = v660;
          }
          *(_QWORD *)&v719 = 0;
          qfree();
        }
      }
    }
    else
    {
      v409 = v7[1];
      v704 = v409;
      if ( v409 )
      {
        v410 = v409 + 13;
        v411 = v409 + 14;
        v704 = v409 - 1;
      }
      else
      {
        v411 = 15;
        v410 = 14;
      }
      v412 = *v7;
      if ( v7[2] < v411 )
      {
        v562 = qvector_reserve();
        *v7 = v562;
        v412 = v562;
      }
      v7[1] = v411;
      *(_BYTE *)(v412 + v410) = 0;
      qmemcpy((void *)(*v7 + v704), "type: illegal\n", 14);
    }
    clear_tinfo_t();
  }
  for ( i = 0; ; i = 2 )
  {
LABEL_168:
    if ( !(unsigned __int8)get_op_tinfo() )
    {
LABEL_169:
      if ( !i )
        goto LABEL_390;
      goto LABEL_170;
    }
    v719 = 0;
    src = nullptr;
    if ( (unsigned __int8)print_tinfo() )
      break;
    if ( !src )
      goto LABEL_169;
    *(_QWORD *)&v719 = 0;
    qfree();
    if ( !i )
    {
LABEL_390:
      if ( (aflags & 0x1000) != 0 )
        sub_96570(v7);
      goto LABEL_171;
    }
LABEL_170:
    if ( i != 1 )
      goto LABEL_171;
    if ( (aflags & 0x2000) != 0 )
      sub_96570(v7);
    clear_tinfo_t();
  }
  sub_96570(v7);
  if ( src )
  {
    *(_QWORD *)&v719 = 0;
    qfree();
  }
LABEL_171:
  ++i;
  clear_tinfo_t();
  if ( a4 != i )
    goto LABEL_168;
  func = (_DWORD *)get_func();
  if ( func )
  {
    if ( a2 == *func )
    {
      read_regargs();
      if ( (int)func[22] > 0 )
      {
        v665 = 0;
        v554 = 0;
        do
        {
          v719 = 0;
          src = nullptr;
          v555 = (_DWORD *)qvector_reserve();
          src = v555;
          *(_QWORD *)&v719 = 8;
          *v555 = 1701604457;
          *(_DWORD *)((char *)v555 + 3) = 1818322789;
          *((_BYTE *)src + 7) = 0;
          if ( (unsigned __int8)deserialize_tinfo() )
            print_tinfo();
          sub_96570(v7);
          clear_tinfo_t();
          if ( src )
          {
            *(_QWORD *)&v719 = 0;
            qfree();
          }
          ++v665;
          v554 += 24;
        }
        while ( v665 < func[22] );
      }
    }
  }
  if ( (aflags & 1) != 0 )
  {
    v162 = 7;
    v163 = "linnum ";
    if ( !v666 )
    {
      v162 = 21;
      v163 = "has line number info\n";
    }
    v164 = v7[1];
    v165 = v162;
    v680 = v164;
    if ( v164 )
    {
      v680 = v164 - 1;
      v165 = v164 - 1 + v162;
    }
    v166 = *v7;
    v167 = v165 + 1;
    if ( v7[2] < (unsigned __int64)(v165 + 1) )
    {
      v547 = qvector_reserve();
      v167 = v165 + 1;
      *v7 = v547;
      v166 = v547;
    }
    v7[1] = v167;
    *(_BYTE *)(v166 + v165) = 0;
    v168 = (_QWORD *)(*v7 + v680);
    if ( (unsigned int)v162 >= 8 )
    {
      v447 = (unsigned __int64)(v168 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v168 = *(_QWORD *)v163;
      *(_QWORD *)((char *)v168 + v162 - 8) = *(_QWORD *)&v163[v162 - 8];
      v448 = v163 - ((const char *)v168 - v447);
      if ( (((_DWORD)v162 + (_DWORD)v168 - (_DWORD)v447) & 0xFFFFFFF8) >= 8 )
      {
        v449 = 0;
        do
        {
          v450 = v449;
          v449 += 8;
          *(_QWORD *)(v447 + v450) = *(_QWORD *)(v448 + v450);
        }
        while ( v449 < (((_DWORD)v162 + (_DWORD)v168 - (_DWORD)v447) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v168 = *(_DWORD *)v163;
      *(_DWORD *)((char *)v168 + (unsigned int)v162 - 4) = *(_DWORD *)&v163[(unsigned int)v162 - 4];
    }
  }
  if ( (aflags & 2) != 0 )
  {
    v169 = 7;
    v170 = "usersp ";
    if ( !v666 )
    {
      v169 = 22;
      v170 = "user-defined SP value\n";
    }
    v171 = v7[1];
    v172 = v169;
    v681 = v171;
    if ( v171 )
    {
      v681 = v171 - 1;
      v172 = v171 - 1 + v169;
    }
    v173 = *v7;
    v174 = v172 + 1;
    if ( v7[2] < (unsigned __int64)(v172 + 1) )
    {
      v534 = qvector_reserve();
      v174 = v172 + 1;
      *v7 = v534;
      v173 = v534;
    }
    v7[1] = v174;
    *(_BYTE *)(v173 + v172) = 0;
    v175 = (_QWORD *)(*v7 + v681);
    if ( (unsigned int)v169 >= 8 )
    {
      v451 = (unsigned __int64)(v175 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v175 = *(_QWORD *)v170;
      *(_QWORD *)((char *)v175 + v169 - 8) = *(_QWORD *)&v170[v169 - 8];
      v452 = v170 - ((const char *)v175 - v451);
      if ( (((_DWORD)v169 + (_DWORD)v175 - (_DWORD)v451) & 0xFFFFFFF8) >= 8 )
      {
        v453 = 0;
        do
        {
          v454 = v453;
          v453 += 8;
          *(_QWORD *)(v451 + v454) = *(_QWORD *)(v452 + v454);
        }
        while ( v453 < (((_DWORD)v169 + (_DWORD)v175 - (_DWORD)v451) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v175 = *(_DWORD *)v170;
      *(_DWORD *)((char *)v175 + (unsigned int)v169 - 4) = *(_DWORD *)&v170[(unsigned int)v169 - 4];
    }
  }
  if ( (aflags & 0x10) != 0 )
  {
    v176 = 7;
    v177 = "hidden ";
    if ( !v666 )
    {
      v176 = 30;
      v177 = "the item is hidden completely\n";
    }
    v178 = v7[1];
    v179 = v176;
    v682 = v178;
    if ( v178 )
    {
      v682 = v178 - 1;
      v179 = v178 - 1 + v176;
    }
    v180 = *v7;
    v181 = v179 + 1;
    if ( v7[2] < (unsigned __int64)(v179 + 1) )
    {
      v533 = qvector_reserve();
      v181 = v179 + 1;
      *v7 = v533;
      v180 = v533;
    }
    v7[1] = v181;
    *(_BYTE *)(v180 + v179) = 0;
    v182 = (_QWORD *)(*v7 + v682);
    if ( (unsigned int)v176 >= 8 )
    {
      v455 = (unsigned __int64)(v182 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v182 = *(_QWORD *)v177;
      *(_QWORD *)((char *)v182 + v176 - 8) = *(_QWORD *)&v177[v176 - 8];
      v456 = v177 - ((const char *)v182 - v455);
      if ( (((_DWORD)v176 + (_DWORD)v182 - (_DWORD)v455) & 0xFFFFFFF8) >= 8 )
      {
        v457 = 0;
        do
        {
          v458 = v457;
          v457 += 8;
          *(_QWORD *)(v455 + v458) = *(_QWORD *)(v456 + v458);
        }
        while ( v457 < (((_DWORD)v176 + (_DWORD)v182 - (_DWORD)v455) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v182 = *(_DWORD *)v177;
      *(_DWORD *)((char *)v182 + (unsigned int)v176 - 4) = *(_DWORD *)&v177[(unsigned int)v176 - 4];
    }
  }
  if ( (aflags & 0x20) != 0 )
  {
    v183 = 7;
    v184 = "manual ";
    if ( !v666 )
    {
      v183 = 46;
      v184 = "the instruction/data is specified by the user\n";
    }
    v185 = v7[1];
    v186 = v183;
    v683 = v185;
    if ( v185 )
    {
      v683 = v185 - 1;
      v186 = v185 - 1 + v183;
    }
    v187 = *v7;
    v188 = v186 + 1;
    if ( v7[2] < (unsigned __int64)(v186 + 1) )
    {
      v536 = qvector_reserve();
      v188 = v186 + 1;
      *v7 = v536;
      v187 = v536;
    }
    v7[1] = v188;
    *(_BYTE *)(v187 + v186) = 0;
    v189 = (_QWORD *)(*v7 + v683);
    if ( (unsigned int)v183 >= 8 )
    {
      v459 = (unsigned __int64)(v189 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v189 = *(_QWORD *)v184;
      *(_QWORD *)((char *)v189 + v183 - 8) = *(_QWORD *)&v184[v183 - 8];
      v460 = v184 - ((const char *)v189 - v459);
      if ( (((_DWORD)v183 + (_DWORD)v189 - (_DWORD)v459) & 0xFFFFFFF8) >= 8 )
      {
        v461 = 0;
        do
        {
          v462 = v461;
          v461 += 8;
          *(_QWORD *)(v459 + v462) = *(_QWORD *)(v460 + v462);
        }
        while ( v461 < (((_DWORD)v183 + (_DWORD)v189 - (_DWORD)v459) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v189 = *(_DWORD *)v184;
      *(_DWORD *)((char *)v189 + (unsigned int)v183 - 4) = *(_DWORD *)&v184[(unsigned int)v183 - 4];
    }
  }
  if ( (aflags & 0x40) != 0 )
  {
    v190 = 9;
    v191 = "noborder ";
    if ( !v666 )
    {
      v190 = 31;
      v191 = "the code/data border is hidden\n";
    }
    v192 = v7[1];
    v193 = v190;
    v684 = v192;
    if ( v192 )
    {
      v684 = v192 - 1;
      v193 = v192 - 1 + v190;
    }
    v194 = *v7;
    v195 = v193 + 1;
    if ( v7[2] < (unsigned __int64)(v193 + 1) )
    {
      v538 = qvector_reserve();
      v195 = v193 + 1;
      *v7 = v538;
      v194 = v538;
    }
    v7[1] = v195;
    *(_BYTE *)(v194 + v193) = 0;
    v196 = (_QWORD *)(*v7 + v684);
    *v196 = *(_QWORD *)v191;
    *(_QWORD *)((char *)v196 + v190 - 8) = *(_QWORD *)&v191[v190 - 8];
    v197 = (unsigned __int64)(v196 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v198 = (char *)v196 - v197;
    v199 = (const char *)(v191 - v198);
    v200 = (v190 + (_DWORD)v198) & 0xFFFFFFF8;
    if ( v200 >= 8 )
    {
      v201 = v200 & 0xFFFFFFF8;
      v202 = 0;
      do
      {
        v203 = v202;
        v202 += 8;
        *(_QWORD *)(v197 + v203) = *(_QWORD *)&v199[v203];
      }
      while ( v202 < v201 );
    }
  }
  if ( (aflags & 0x80u) != 0 )
  {
    v204 = 8;
    v205 = "zstroff ";
    if ( !v666 )
    {
      v204 = 38;
      v205 = "display struct field name at 0 offset\n";
    }
    v206 = v7[1];
    v207 = v204;
    v685 = v206;
    if ( v206 )
    {
      v685 = v206 - 1;
      v207 = v206 - 1 + v204;
    }
    v208 = *v7;
    v209 = v207 + 1;
    if ( v7[2] < (unsigned __int64)(v207 + 1) )
    {
      v540 = qvector_reserve();
      v209 = v207 + 1;
      *v7 = v540;
      v208 = v540;
    }
    v7[1] = v209;
    *(_BYTE *)(v208 + v207) = 0;
    v210 = (_QWORD *)(*v7 + v685);
    *v210 = *(_QWORD *)v205;
    *(_QWORD *)((char *)v210 + v204 - 8) = *(_QWORD *)&v205[v204 - 8];
    v211 = (unsigned __int64)(v210 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v212 = (char *)v210 - v211;
    v213 = (const char *)(v205 - v212);
    v214 = (v204 + (_DWORD)v212) & 0xFFFFFFF8;
    if ( v214 >= 8 )
    {
      v215 = v214 & 0xFFFFFFF8;
      v216 = 0;
      do
      {
        v217 = v216;
        v216 += 8;
        *(_QWORD *)(v211 + v217) = *(_QWORD *)&v213[v217];
      }
      while ( v216 < v215 );
    }
  }
  if ( (aflags & 0x400) != 0 )
  {
    v218 = 8;
    v219 = "libitem ";
    if ( !v666 )
    {
      v218 = 31;
      v219 = "item from the standard library\n";
    }
    v220 = v7[1];
    v221 = v218;
    v686 = v220;
    if ( v220 )
    {
      v686 = v220 - 1;
      v221 = v220 - 1 + v218;
    }
    v222 = *v7;
    v223 = v221 + 1;
    if ( v7[2] < (unsigned __int64)(v221 + 1) )
    {
      v539 = qvector_reserve();
      v223 = v221 + 1;
      *v7 = v539;
      v222 = v539;
    }
    v7[1] = v223;
    *(_BYTE *)(v222 + v221) = 0;
    v224 = (_QWORD *)(*v7 + v686);
    *v224 = *(_QWORD *)v219;
    *(_QWORD *)((char *)v224 + v218 - 8) = *(_QWORD *)&v219[v218 - 8];
    v225 = (unsigned __int64)(v224 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v226 = (char *)v224 - v225;
    v227 = (const char *)(v219 - v226);
    v228 = (v218 + (_DWORD)v226) & 0xFFFFFFF8;
    if ( v228 >= 8 )
    {
      v229 = v228 & 0xFFFFFFF8;
      v230 = 0;
      do
      {
        v231 = v230;
        v230 += 8;
        *(_QWORD *)(v225 + v231) = *(_QWORD *)&v227[v231];
      }
      while ( v230 < v229 );
    }
  }
  if ( (aflags & 0x800) != 0 )
  {
    v232 = 3;
    v233 = "ti ";
    if ( !v666 )
    {
      v232 = 13;
      v233 = "has typeinfo\n";
    }
    v234 = v7[1];
    v235 = v232;
    v687 = v234;
    if ( v234 )
    {
      v687 = v234 - 1;
      v235 = v234 - 1 + v232;
    }
    v236 = *v7;
    v237 = v235 + 1;
    if ( v7[2] < (unsigned __int64)(v235 + 1) )
    {
      v535 = qvector_reserve();
      v237 = v235 + 1;
      *v7 = v535;
      v236 = v535;
    }
    v7[1] = v237;
    *(_BYTE *)(v236 + v235) = 0;
    v238 = (_QWORD *)(*v7 + v687);
    if ( (unsigned int)v232 >= 8 )
    {
      v463 = (unsigned __int64)(v238 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v238 = *(_QWORD *)v233;
      *(_QWORD *)((char *)v238 + v232 - 8) = *(_QWORD *)&v233[v232 - 8];
      v464 = v233 - ((char *)v238 - v463);
      if ( (((_DWORD)v232 + (_DWORD)v238 - (_DWORD)v463) & 0xFFFFFFF8) >= 8 )
      {
        v465 = 0;
        do
        {
          v466 = v465;
          v465 += 8;
          *(_QWORD *)(v463 + v466) = *(_QWORD *)(v464 + v466);
        }
        while ( v465 < (((_DWORD)v232 + (_DWORD)v238 - (_DWORD)v463) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_BYTE *)v238 = *v233;
      *(_WORD *)((char *)v238 + v232 - 2) = *(_WORD *)&v233[v232 - 2];
    }
  }
  if ( (aflags & 0x1000) != 0 )
  {
    v239 = 4;
    v240 = "ti0 ";
    if ( !v666 )
    {
      v239 = 27;
      v240 = "has typeinfo for operand 0\n";
    }
    v241 = v7[1];
    v242 = v239;
    v688 = v241;
    if ( v241 )
    {
      v688 = v241 - 1;
      v242 = v241 - 1 + v239;
    }
    v243 = *v7;
    v244 = v242 + 1;
    if ( v7[2] < (unsigned __int64)(v242 + 1) )
    {
      v537 = qvector_reserve();
      v244 = v242 + 1;
      *v7 = v537;
      v243 = v537;
    }
    v7[1] = v244;
    *(_BYTE *)(v243 + v242) = 0;
    v245 = (_QWORD *)(*v7 + v688);
    if ( (unsigned int)v239 >= 8 )
    {
      v467 = (unsigned __int64)(v245 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v245 = *(_QWORD *)v240;
      *(_QWORD *)((char *)v245 + v239 - 8) = *(_QWORD *)&v240[v239 - 8];
      v468 = v240 - ((const char *)v245 - v467);
      if ( (((_DWORD)v239 + (_DWORD)v245 - (_DWORD)v467) & 0xFFFFFFF8) >= 8 )
      {
        v469 = 0;
        do
        {
          v470 = v469;
          v469 += 8;
          *(_QWORD *)(v467 + v470) = *(_QWORD *)(v468 + v470);
        }
        while ( v469 < (((_DWORD)v239 + (_DWORD)v245 - (_DWORD)v467) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v245 = *(_DWORD *)v240;
      *(_DWORD *)((char *)v245 + (unsigned int)v239 - 4) = *(_DWORD *)&v240[(unsigned int)v239 - 4];
    }
  }
  if ( (aflags & 0x2000) != 0 )
  {
    v246 = 4;
    v247 = "ti1 ";
    if ( !v666 )
    {
      v246 = 27;
      v247 = "has typeinfo for operand 1\n";
    }
    v248 = v7[1];
    v249 = v246;
    v689 = v248;
    if ( v248 )
    {
      v689 = v248 - 1;
      v249 = v248 - 1 + v246;
    }
    v250 = *v7;
    v251 = v249 + 1;
    if ( v7[2] < (unsigned __int64)(v249 + 1) )
    {
      v549 = qvector_reserve();
      v251 = v249 + 1;
      *v7 = v549;
      v250 = v549;
    }
    v7[1] = v251;
    *(_BYTE *)(v250 + v249) = 0;
    v252 = (_QWORD *)(*v7 + v689);
    if ( (unsigned int)v246 >= 8 )
    {
      v471 = (unsigned __int64)(v252 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v252 = *(_QWORD *)v247;
      *(_QWORD *)((char *)v252 + v246 - 8) = *(_QWORD *)&v247[v246 - 8];
      v472 = v247 - ((const char *)v252 - v471);
      if ( (((_DWORD)v246 + (_DWORD)v252 - (_DWORD)v471) & 0xFFFFFFF8) >= 8 )
      {
        v473 = 0;
        do
        {
          v474 = v473;
          v473 += 8;
          *(_QWORD *)(v471 + v474) = *(_QWORD *)(v472 + v474);
        }
        while ( v473 < (((_DWORD)v246 + (_DWORD)v252 - (_DWORD)v471) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v252 = *(_DWORD *)v247;
      *(_DWORD *)((char *)v252 + (unsigned int)v246 - 4) = *(_DWORD *)&v247[(unsigned int)v246 - 4];
    }
  }
  if ( (aflags & 0x8000) != 0 )
  {
    v253 = 7;
    v254 = "tilcmt ";
    if ( !v666 )
    {
      v253 = 17;
      v254 = "has type comment\n";
    }
    v255 = v7[1];
    v256 = v253;
    v690 = v255;
    if ( v255 )
    {
      v690 = v255 - 1;
      v256 = v255 - 1 + v253;
    }
    v257 = *v7;
    v258 = v256 + 1;
    if ( v7[2] < (unsigned __int64)(v256 + 1) )
    {
      v548 = qvector_reserve();
      v258 = v256 + 1;
      *v7 = v548;
      v257 = v548;
    }
    v7[1] = v258;
    *(_BYTE *)(v257 + v256) = 0;
    v259 = (_QWORD *)(*v7 + v690);
    if ( (unsigned int)v253 >= 8 )
    {
      v475 = (unsigned __int64)(v259 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v259 = *(_QWORD *)v254;
      *(_QWORD *)((char *)v259 + v253 - 8) = *(_QWORD *)&v254[v253 - 8];
      v476 = v254 - ((const char *)v259 - v475);
      if ( (((_DWORD)v253 + (_DWORD)v259 - (_DWORD)v475) & 0xFFFFFFF8) >= 8 )
      {
        v477 = 0;
        do
        {
          v478 = v477;
          v477 += 8;
          *(_QWORD *)(v475 + v478) = *(_QWORD *)(v476 + v478);
        }
        while ( v477 < (((_DWORD)v253 + (_DWORD)v259 - (_DWORD)v475) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v259 = *(_DWORD *)v254;
      *(_DWORD *)((char *)v259 + (unsigned int)v253 - 4) = *(_DWORD *)&v254[(unsigned int)v253 - 4];
    }
  }
  if ( (aflags & 0x10000) != 0 )
  {
    v260 = 7;
    v261 = "lzero0 ";
    if ( !v666 )
    {
      v260 = 42;
      v261 = "toggle leading zeroes for the 1st operand\n";
    }
    v262 = v7[1];
    v263 = v260;
    v691 = v262;
    if ( v262 )
    {
      v691 = v262 - 1;
      v263 = v262 - 1 + v260;
    }
    v264 = *v7;
    v265 = v263 + 1;
    if ( v7[2] < (unsigned __int64)(v263 + 1) )
    {
      v550 = qvector_reserve();
      v265 = v263 + 1;
      *v7 = v550;
      v264 = v550;
    }
    v7[1] = v265;
    *(_BYTE *)(v264 + v263) = 0;
    v266 = (_QWORD *)(*v7 + v691);
    if ( (unsigned int)v260 >= 8 )
    {
      v422 = (unsigned __int64)(v266 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v266 = *(_QWORD *)v261;
      *(_QWORD *)((char *)v266 + v260 - 8) = *(_QWORD *)&v261[v260 - 8];
      v423 = v261 - ((const char *)v266 - v422);
      if ( (((_DWORD)v260 + (_DWORD)v266 - (_DWORD)v422) & 0xFFFFFFF8) >= 8 )
      {
        v424 = 0;
        do
        {
          v425 = v424;
          v424 += 8;
          *(_QWORD *)(v422 + v425) = *(_QWORD *)(v423 + v425);
        }
        while ( v424 < (((_DWORD)v260 + (_DWORD)v266 - (_DWORD)v422) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v266 = *(_DWORD *)v261;
      *(_DWORD *)((char *)v266 + (unsigned int)v260 - 4) = *(_DWORD *)&v261[(unsigned int)v260 - 4];
    }
  }
  if ( (aflags & 0x20000) != 0 )
  {
    v267 = 7;
    v268 = "lzero1 ";
    if ( !v666 )
    {
      v267 = 42;
      v268 = "toggle leading zeroes for the 2nd operand\n";
    }
    v269 = v7[1];
    v270 = v267;
    v692 = v269;
    if ( v269 )
    {
      v692 = v269 - 1;
      v270 = v269 - 1 + v267;
    }
    v271 = *v7;
    v272 = v270 + 1;
    if ( v7[2] < (unsigned __int64)(v270 + 1) )
    {
      v551 = qvector_reserve();
      v272 = v270 + 1;
      *v7 = v551;
      v271 = v551;
    }
    v7[1] = v272;
    *(_BYTE *)(v271 + v270) = 0;
    v273 = (_QWORD *)(*v7 + v692);
    if ( (unsigned int)v267 >= 8 )
    {
      v426 = (unsigned __int64)(v273 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v273 = *(_QWORD *)v268;
      *(_QWORD *)((char *)v273 + v267 - 8) = *(_QWORD *)&v268[v267 - 8];
      v427 = v268 - ((const char *)v273 - v426);
      if ( (((_DWORD)v267 + (_DWORD)v273 - (_DWORD)v426) & 0xFFFFFFF8) >= 8 )
      {
        v428 = 0;
        do
        {
          v429 = v428;
          v428 += 8;
          *(_QWORD *)(v426 + v429) = *(_QWORD *)(v427 + v429);
        }
        while ( v428 < (((_DWORD)v267 + (_DWORD)v273 - (_DWORD)v426) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v273 = *(_DWORD *)v268;
      *(_DWORD *)((char *)v273 + (unsigned int)v267 - 4) = *(_DWORD *)&v268[(unsigned int)v267 - 4];
    }
  }
  if ( (aflags & 0x80000) != 0 )
  {
    v274 = 9;
    v275 = "tersestr ";
    if ( !v666 )
    {
      v274 = 33;
      v275 = "terse structure variable display\n";
    }
    v276 = v7[1];
    v277 = v274;
    v693 = v276;
    if ( v276 )
    {
      v693 = v276 - 1;
      v277 = v276 - 1 + v274;
    }
    v278 = *v7;
    v279 = v277 + 1;
    if ( v7[2] < (unsigned __int64)(v277 + 1) )
    {
      v542 = qvector_reserve();
      v279 = v277 + 1;
      *v7 = v542;
      v278 = v542;
    }
    v7[1] = v279;
    *(_BYTE *)(v278 + v277) = 0;
    v280 = (_QWORD *)(*v7 + v693);
    *v280 = *(_QWORD *)v275;
    *(_QWORD *)((char *)v280 + v274 - 8) = *(_QWORD *)&v275[v274 - 8];
    v281 = (unsigned __int64)(v280 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v282 = (char *)v280 - v281;
    v283 = (const char *)(v275 - v282);
    v284 = (v274 + (_DWORD)v282) & 0xFFFFFFF8;
    if ( v284 >= 8 )
    {
      v285 = v284 & 0xFFFFFFF8;
      v286 = 0;
      do
      {
        v287 = v286;
        v286 += 8;
        *(_QWORD *)(v281 + v287) = *(_QWORD *)&v283[v287];
      }
      while ( v286 < v285 );
    }
  }
  if ( (aflags & 0x400000) != 0 )
  {
    v288 = 6;
    v289 = "noret ";
    if ( !v666 )
    {
      v288 = 16;
      v289 = "does not return\n";
    }
    v290 = v7[1];
    v291 = v288;
    v694 = v290;
    if ( v290 )
    {
      v694 = v290 - 1;
      v291 = v290 - 1 + v288;
    }
    v292 = *v7;
    v293 = v291 + 1;
    if ( v7[2] < (unsigned __int64)(v291 + 1) )
    {
      v541 = qvector_reserve();
      v293 = v291 + 1;
      *v7 = v541;
      v292 = v541;
    }
    v7[1] = v293;
    *(_BYTE *)(v292 + v291) = 0;
    v294 = (_QWORD *)(*v7 + v694);
    if ( (unsigned int)v288 >= 8 )
    {
      v430 = (unsigned __int64)(v294 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v294 = *(_QWORD *)v289;
      *(_QWORD *)((char *)v294 + v288 - 8) = *(_QWORD *)&v289[v288 - 8];
      v431 = v289 - ((const char *)v294 - v430);
      if ( (((_DWORD)v288 + (_DWORD)v294 - (_DWORD)v430) & 0xFFFFFFF8) >= 8 )
      {
        v432 = 0;
        do
        {
          v433 = v432;
          v432 += 8;
          *(_QWORD *)(v430 + v433) = *(_QWORD *)(v431 + v433);
        }
        while ( v432 < (((_DWORD)v288 + (_DWORD)v294 - (_DWORD)v430) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v294 = *(_DWORD *)v289;
      *(_DWORD *)((char *)v294 + (unsigned int)v288 - 4) = *(_DWORD *)&v289[(unsigned int)v288 - 4];
    }
  }
  if ( (aflags & 0x800000) != 0 )
  {
    v295 = 9;
    v296 = "fixedspd ";
    if ( !v666 )
    {
      v295 = 36;
      v296 = "sp delta value is fixed by analysis\n";
    }
    v297 = v7[1];
    v298 = v295;
    v695 = v297;
    if ( v297 )
    {
      v695 = v297 - 1;
      v298 = v297 - 1 + v295;
    }
    v299 = *v7;
    v300 = v298 + 1;
    if ( v7[2] < (unsigned __int64)(v298 + 1) )
    {
      v530 = qvector_reserve();
      v300 = v298 + 1;
      *v7 = v530;
      v299 = v530;
    }
    v7[1] = v300;
    *(_BYTE *)(v299 + v298) = 0;
    v301 = (_QWORD *)(*v7 + v695);
    *v301 = *(_QWORD *)v296;
    v302 = (unsigned __int64)(v301 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)((char *)v301 + v295 - 8) = *(_QWORD *)&v296[v295 - 8];
    v303 = (char *)v301 - v302;
    v304 = (const char *)(v296 - v303);
    v305 = ((_DWORD)v303 + v295) & 0xFFFFFFF8;
    if ( v305 >= 8 )
    {
      v306 = v305 & 0xFFFFFFF8;
      v307 = 0;
      do
      {
        v308 = v307;
        v307 += 8;
        *(_QWORD *)(v302 + v308) = *(_QWORD *)&v304[v308];
      }
      while ( v307 < v306 );
    }
  }
  if ( (aflags & 0x1000000) != 0 )
  {
    v309 = 10;
    v310 = "alignflow ";
    if ( !v666 )
    {
      v309 = 58;
      v310 = "the previous insn was created for alignment purposes only\n";
    }
    v311 = v7[1];
    v312 = v309;
    v696 = v311;
    if ( v311 )
    {
      v696 = v311 - 1;
      v312 = v311 - 1 + v309;
    }
    v313 = *v7;
    v314 = v312 + 1;
    if ( v7[2] < (unsigned __int64)(v312 + 1) )
    {
      v529 = qvector_reserve();
      v314 = v312 + 1;
      *v7 = v529;
      v313 = v529;
    }
    v7[1] = v314;
    *(_BYTE *)(v313 + v312) = 0;
    v315 = (_QWORD *)(*v7 + v696);
    *v315 = *(_QWORD *)v310;
    *(_QWORD *)((char *)v315 + v309 - 8) = *(_QWORD *)&v310[v309 - 8];
    qmemcpy(
      (void *)((unsigned __int64)(v315 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(v310 - ((const char *)v315 - ((unsigned __int64)(v315 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v309 + (_DWORD)v315 - (((_DWORD)v315 + 8) & 0xFFFFFFF8)) >> 3));
  }
  if ( (aflags & 0x2000000) != 0 )
  {
    v316 = 7;
    v317 = "userti ";
    if ( !v666 )
    {
      v316 = 35;
      v317 = "the type information is definitive\n";
    }
    v318 = v7[1];
    v319 = v316;
    v697 = v318;
    if ( v318 )
    {
      v697 = v318 - 1;
      v319 = v318 - 1 + v316;
    }
    v320 = *v7;
    v321 = v319 + 1;
    if ( v7[2] < (unsigned __int64)(v319 + 1) )
    {
      v532 = qvector_reserve();
      v321 = v319 + 1;
      *v7 = v532;
      v320 = v532;
    }
    v7[1] = v321;
    *(_BYTE *)(v320 + v319) = 0;
    v322 = (_QWORD *)(*v7 + v697);
    if ( (unsigned int)v316 >= 8 )
    {
      v434 = (unsigned __int64)(v322 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v322 = *(_QWORD *)v317;
      *(_QWORD *)((char *)v322 + v316 - 8) = *(_QWORD *)&v317[v316 - 8];
      v435 = v317 - ((const char *)v322 - v434);
      if ( (((_DWORD)v316 + (_DWORD)v322 - (_DWORD)v434) & 0xFFFFFFF8) >= 8 )
      {
        v436 = 0;
        do
        {
          v437 = v436;
          v436 += 8;
          *(_QWORD *)(v434 + v437) = *(_QWORD *)(v435 + v437);
        }
        while ( v436 < (((_DWORD)v316 + (_DWORD)v322 - (_DWORD)v434) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v322 = *(_DWORD *)v317;
      *(_DWORD *)((char *)v322 + (unsigned int)v316 - 4) = *(_DWORD *)&v317[(unsigned int)v316 - 4];
    }
  }
  if ( (aflags & 0x4000000) != 0 )
  {
    v323 = 6;
    v324 = "retfp ";
    if ( !v666 )
    {
      v323 = 40;
      v324 = "function returns a floating point value\n";
    }
    v325 = v7[1];
    v326 = v323;
    v698 = v325;
    if ( v325 )
    {
      v698 = v325 - 1;
      v326 = v325 - 1 + v323;
    }
    v327 = *v7;
    v328 = v326 + 1;
    if ( v7[2] < (unsigned __int64)(v326 + 1) )
    {
      v531 = qvector_reserve();
      v328 = v326 + 1;
      *v7 = v531;
      v327 = v531;
    }
    v7[1] = v328;
    *(_BYTE *)(v327 + v326) = 0;
    v329 = (_QWORD *)(*v7 + v698);
    if ( (unsigned int)v323 >= 8 )
    {
      v418 = (unsigned __int64)(v329 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v329 = *(_QWORD *)v324;
      *(_QWORD *)((char *)v329 + v323 - 8) = *(_QWORD *)&v324[v323 - 8];
      v419 = v324 - ((const char *)v329 - v418);
      if ( (((_DWORD)v323 + (_DWORD)v329 - (_DWORD)v418) & 0xFFFFFFF8) >= 8 )
      {
        v420 = 0;
        do
        {
          v421 = v420;
          v420 += 8;
          *(_QWORD *)(v418 + v421) = *(_QWORD *)(v419 + v421);
        }
        while ( v420 < (((_DWORD)v323 + (_DWORD)v329 - (_DWORD)v418) & 0xFFFFFFF8) );
      }
    }
    else
    {
      *(_DWORD *)v329 = *(_DWORD *)v324;
      *(_DWORD *)((char *)v329 + (unsigned int)v323 - 4) = *(_DWORD *)&v324[(unsigned int)v323 - 4];
    }
  }
  if ( (aflags & 0x8000000) != 0 )
  {
    v330 = 9;
    v331 = "usemodsp ";
    if ( !v666 )
    {
      v330 = 45;
      v331 = "insn modifies sp and uses the modified value\n";
    }
    v332 = v7[1];
    v333 = v330;
    v699 = v332;
    if ( v332 )
    {
      v699 = v332 - 1;
      v333 = v332 - 1 + v330;
    }
    v334 = *v7;
    v335 = v333 + 1;
    if ( v7[2] < (unsigned __int64)(v333 + 1) )
    {
      v528 = qvector_reserve();
      v335 = v333 + 1;
      *v7 = v528;
      v334 = v528;
    }
    v7[1] = v335;
    *(_BYTE *)(v334 + v333) = 0;
    v336 = (_QWORD *)(*v7 + v699);
    *v336 = *(_QWORD *)v331;
    v337 = (unsigned __int64)(v336 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)((char *)v336 + v330 - 8) = *(_QWORD *)&v331[v330 - 8];
    v338 = (char *)v336 - v337;
    v339 = (const char *)(v331 - v338);
    v340 = ((_DWORD)v338 + v330) & 0xFFFFFFF8;
    if ( v340 >= 8 )
    {
      v341 = v340 & 0xFFFFFFF8;
      v342 = 0;
      do
      {
        v343 = v342;
        v342 += 8;
        *(_QWORD *)(v337 + v343) = *(_QWORD *)&v339[v343];
      }
      while ( v342 < v341 );
    }
  }
  if ( (aflags & 0x10000000) != 0 )
  {
    v344 = 8;
    v345 = "notcode ";
    if ( !v666 )
    {
      v344 = 47;
      v345 = "autoanalysis may not convert this byte to code\n";
    }
    v346 = v7[1];
    v347 = v344;
    v700 = v346;
    if ( v346 )
    {
      v700 = v346 - 1;
      v347 = v346 - 1 + v344;
    }
    v348 = *v7;
    v349 = v347 + 1;
    if ( v7[2] < (unsigned __int64)(v347 + 1) )
    {
      v527 = qvector_reserve();
      v349 = v347 + 1;
      *v7 = v527;
      v348 = v527;
    }
    v7[1] = v349;
    *(_BYTE *)(v348 + v347) = 0;
    v350 = (_QWORD *)(*v7 + v700);
    *v350 = *(_QWORD *)v345;
    v351 = (unsigned __int64)(v350 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)((char *)v350 + v344 - 8) = *(_QWORD *)&v345[v344 - 8];
    v352 = (char *)v350 - v351;
    v353 = (const char *)(v345 - v352);
    v354 = ((_DWORD)v352 + v344) & 0xFFFFFFF8;
    if ( v354 >= 8 )
    {
      v355 = v354 & 0xFFFFFFF8;
      v356 = 0;
      do
      {
        v357 = v356;
        v356 += 8;
        *(_QWORD *)(v351 + v357) = *(_QWORD *)&v353[v357];
      }
      while ( v356 < v355 );
    }
  }
  if ( (aflags & 0x40000) != 0 )
  {
    get_item_color();
    sub_96570(v7);
  }
  v358 = aflags & 0xC2000000;
  if ( v358 != 0x40000000 )
  {
    if ( v358 != 0x80000000 )
    {
      if ( v358 != -1073741824 )
        goto LABEL_381;
      v359 = 13;
      v360 = "hr_determined";
      if ( !v666 )
      {
        v359 = 49;
        v360 = "the type is definitely guessed by the decompiler\n";
      }
      v361 = v7[1];
      v362 = v359;
      v701 = v361;
      if ( v361 )
      {
        v484 = v361 - 1;
        v363 = *v7;
        v362 = v484 + v359;
        v701 = v484;
        v364 = v484 + v359 + 1;
        if ( v7[2] >= v364 )
          goto LABEL_378;
      }
      else
      {
        v363 = *v7;
        v364 = v359 + 1;
        if ( v7[2] >= (unsigned __int64)(v359 + 1) )
        {
LABEL_378:
          v7[1] = v364;
          *(_BYTE *)(v363 + v362) = 0;
          v365 = (_QWORD *)(*v7 + v701);
          *v365 = *(_QWORD *)v360;
          *(_QWORD *)((char *)v365 + v359 - 8) = *(_QWORD *)&v360[v359 - 8];
          v366 = (unsigned __int64)(v365 + 1) & 0xFFFFFFFFFFFFFFF8LL;
          v367 = (char *)v365 - v366;
          v368 = (const char *)(v360 - v367);
          v369 = ((_DWORD)v367 + v359) & 0xFFFFFFF8;
          if ( v369 >= 8 )
          {
            v370 = v369 & 0xFFFFFFF8;
            v371 = 0;
            do
            {
              v372 = v371;
              v371 += 8;
              *(_QWORD *)(v366 + v372) = *(_QWORD *)&v368[v372];
            }
            while ( v371 < v370 );
          }
          goto LABEL_381;
        }
      }
      v485 = qvector_reserve();
      *v7 = v485;
      v363 = v485;
      goto LABEL_378;
    }
    v380 = 15;
    v381 = "hr_guessed_data";
    if ( !v666 )
    {
      v380 = 43;
      v381 = "the data type is guessed by the decompiler\n";
    }
    v382 = v7[1];
    v383 = v380;
    v702 = v382;
    if ( v382 )
    {
      v482 = v382 - 1;
      v384 = *v7;
      v383 = v482 + v380;
      v702 = v482;
      v385 = v482 + v380 + 1;
      if ( v7[2] >= v385 )
        goto LABEL_407;
    }
    else
    {
      v384 = *v7;
      v385 = v380 + 1;
      if ( v7[2] >= (unsigned __int64)(v380 + 1) )
      {
LABEL_407:
        v7[1] = v385;
        *(_BYTE *)(v384 + v383) = 0;
        v386 = (_QWORD *)(*v7 + v702);
        *v386 = *(_QWORD *)v381;
        *(_QWORD *)((char *)v386 + v380 - 8) = *(_QWORD *)&v381[v380 - 8];
        v387 = (unsigned __int64)(v386 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v388 = (char *)v386 - v387;
        v389 = (const char *)(v381 - v388);
        v390 = ((_DWORD)v388 + v380) & 0xFFFFFFF8;
        if ( v390 >= 8 )
        {
          v391 = v390 & 0xFFFFFFF8;
          v392 = 0;
          do
          {
            v393 = v392;
            v392 += 8;
            *(_QWORD *)(v387 + v393) = *(_QWORD *)&v389[v393];
          }
          while ( v392 < v391 );
        }
        goto LABEL_381;
      }
    }
    v483 = qvector_reserve();
    *v7 = v483;
    v384 = v483;
    goto LABEL_407;
  }
  v394 = 15;
  v395 = "hr_guessed_func";
  if ( !v666 )
  {
    v394 = 47;
    v395 = "the function type is guessed by the decompiler\n";
  }
  v396 = v7[1];
  v397 = v394;
  v703 = v396;
  if ( v396 )
  {
    v480 = v396 - 1;
    v398 = *v7;
    v397 = v480 + v394;
    v703 = v480;
    v399 = v480 + v394 + 1;
    if ( v7[2] < v399 )
      goto LABEL_496;
  }
  else
  {
    v398 = *v7;
    v399 = v394 + 1;
    if ( v7[2] >= (unsigned __int64)(v394 + 1) )
      goto LABEL_415;
LABEL_496:
    v481 = qvector_reserve();
    *v7 = v481;
    v398 = v481;
  }
LABEL_415:
  v7[1] = v399;
  *(_BYTE *)(v398 + v397) = 0;
  v400 = (_QWORD *)(*v7 + v703);
  *v400 = *(_QWORD *)v395;
  *(_QWORD *)((char *)v400 + v394 - 8) = *(_QWORD *)&v395[v394 - 8];
  v401 = (unsigned __int64)(v400 + 1) & 0xFFFFFFFFFFFFFFF8LL;
  v402 = (char *)v400 - v401;
  v403 = (const char *)(v395 - v402);
  v404 = ((_DWORD)v402 + v394) & 0xFFFFFFF8;
  if ( v404 >= 8 )
  {
    v405 = v404 & 0xFFFFFFF8;
    v406 = 0;
    do
    {
      v407 = v406;
      v406 += 8;
      *(_QWORD *)(v401 + v407) = *(_QWORD *)&v403[v407];
    }
    while ( v406 < v405 );
  }
LABEL_381:
  if ( v666 )
  {
    v373 = v7[1];
    v374 = *v7;
    v375 = v373;
    if ( v373 )
    {
      if ( v373 != 1 && *(_BYTE *)(v374 + v373 - 2) == 10 )
        return v728 - __readfsqword(0x28u);
      v376 = v373 + 1;
      v377 = v7[1];
      v375 = v373 - 1;
      if ( v7[2] >= (unsigned __int64)(v373 + 1) )
      {
LABEL_385:
        v7[1] = v376;
        *(_BYTE *)(v374 + v377) = 0;
        *(_BYTE *)(v375 + *v7) = 10;
        return v728 - __readfsqword(0x28u);
      }
    }
    else
    {
      v376 = 2;
      v377 = 1;
      if ( (unsigned __int64)v7[2] >= 2 )
        goto LABEL_385;
    }
    v417 = qvector_reserve();
    *v7 = v417;
    v374 = v417;
    goto LABEL_385;
  }
  return v728 - __readfsqword(0x28u);
}

