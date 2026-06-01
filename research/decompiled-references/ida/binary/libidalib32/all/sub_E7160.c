__int64 *__fastcall sub_E7160(
        unsigned __int32 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128i a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r8
  __int64 v15; // rbx
  int v16; // eax
  __int64 *v17; // rbx
  int v19; // r14d
  unsigned int v20; // eax
  _DWORD *v21; // rdx
  unsigned int v22; // eax
  int *v23; // rdx
  unsigned int v24; // eax
  _DWORD *v25; // rdx
  unsigned int v26; // eax
  _DWORD *v27; // rdx
  __int32 v28; // eax
  __int64 bpt_kernel_interface; // rax
  unsigned int v30; // eax
  unsigned int *v31; // rdx
  int v32; // eax
  unsigned int v33; // edx
  int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rax
  unsigned int v39; // eax
  int *v40; // rdx
  unsigned int v41; // eax
  _DWORD *v42; // rdx
  _DWORD *v43; // rax
  char v44; // dl
  _DWORD *v45; // rax
  bool v46; // dl
  int v47; // eax
  int v48; // eax
  unsigned int v49; // edx
  _DWORD *v50; // rax
  bool v51; // dl
  int v52; // eax
  unsigned int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rcx
  _DWORD *v56; // rax
  unsigned int v57; // eax
  __int64 *v58; // rdx
  unsigned int v59; // eax
  const char **v60; // rdx
  unsigned int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // edi
  _DWORD **v65; // rax
  _DWORD *v66; // rbx
  unsigned int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rcx
  unsigned int v70; // edi
  _DWORD **v71; // rax
  _DWORD *v72; // rbx
  unsigned int v73; // edx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // edi
  _DWORD **v77; // rax
  _DWORD *v78; // rbx
  unsigned int v79; // edx
  __int64 v80; // rax
  __int64 v81; // rcx
  signed int v82; // edi
  _DWORD **v83; // rax
  __int64 v84; // rax
  char v85; // al
  unsigned int v86; // edx
  __int64 v87; // rax
  __int64 v88; // rcx
  int v89; // edi
  __int64 v90; // rsi
  const char *v91; // r8
  __int64 v92; // rcx
  const char *v93; // rsi
  int *v94; // rax
  unsigned int v95; // eax
  int *v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  char *v100; // rdi
  _DWORD *v101; // rdx
  _QWORD *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  char v107; // al
  unsigned int v108; // edx
  __int64 v109; // rax
  __int64 v110; // rsi
  _BYTE *v111; // rdi
  __int64 v112; // rcx
  _BYTE *v113; // rsi
  int *v114; // rax
  unsigned int v115; // edx
  __int64 v116; // rax
  __int64 v117; // rcx
  int v118; // edi
  int *v119; // rax
  unsigned int v120; // eax
  _QWORD *v121; // rdx
  _DWORD *v122; // rax
  int *v123; // rdx
  _DWORD *v124; // r14
  unsigned int v125; // eax
  int *v126; // rbx
  unsigned int v127; // eax
  __int64 *v128; // rdx
  _DWORD *v129; // rbx
  _DWORD *v130; // r14
  int v131; // eax
  unsigned int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 *v135; // rdi
  __int64 v136; // rsi
  __int64 *v137; // r10
  __int64 v138; // rcx
  __int64 v139; // r11
  __int64 v140; // rsi
  __int64 *v141; // r8
  __int64 v142; // rcx
  __int64 *v143; // r9
  __int64 *v144; // rax
  int *v145; // rcx
  unsigned int v146; // edx
  __int64 v147; // rax
  int v148; // edi
  _DWORD *v149; // r14
  int *v150; // rax
  int v151; // ebx
  _DWORD *v152; // rax
  __int64 v153; // rax
  __int64 v154; // rdx
  _DWORD *v155; // rax
  _QWORD *v156; // rbx
  __int64 v157; // r14
  __int64 v158; // rsi
  unsigned int v159; // eax
  int *v160; // rdx
  unsigned int v161; // eax
  __int64 v162; // rdx
  __int64 v163; // rcx
  _BYTE *v164; // rdi
  __int64 v165; // rsi
  _BYTE *v166; // r10
  __int64 v167; // rcx
  _BYTE *v168; // r11
  __int64 v169; // rsi
  _BYTE *v170; // r8
  __int64 v171; // rcx
  _BYTE *v172; // r9
  __int64 **v173; // rax
  int v174; // ecx
  unsigned int v175; // edx
  __int64 v176; // rax
  __int64 v177; // rcx
  __int64 v178; // r14
  __int64 *v179; // rax
  __int64 v180; // rbx
  __int64 v181; // rax
  char v182; // al
  unsigned int v183; // edx
  __int64 v184; // rax
  __int64 v185; // rcx
  int *v186; // rax
  __int64 v187; // rbx
  __int64 v188; // rax
  __int32 v189; // r10d
  unsigned int v190; // edx
  __int64 v191; // rax
  __int64 v192; // rsi
  signed int v193; // edi
  __int64 v194; // rcx
  __int64 v195; // rsi
  __int64 **v196; // rax
  unsigned int v197; // edx
  __int64 v198; // rax
  __int64 v199; // rsi
  signed int v200; // edi
  __int64 v201; // rcx
  __int64 v202; // rsi
  __int64 **v203; // rax
  unsigned int v204; // edx
  __int64 v205; // rax
  __int64 v206; // rcx
  const char *v207; // rdi
  unsigned int v208; // edx
  __int64 **v209; // rax
  unsigned int v210; // eax
  __int64 *v211; // rdx
  unsigned int v212; // eax
  __int64 v213; // rdx
  __int64 v214; // rsi
  unsigned int v215; // edi
  __int64 v216; // rcx
  unsigned int v217; // esi
  unsigned int *v218; // rdx
  unsigned int v219; // eax
  __int64 **v220; // rdx
  __int64 *v221; // r12
  __int64 v222; // rbx
  __int64 v223; // rax
  unsigned int v224; // edx
  __int64 v225; // rax
  __int64 v226; // rcx
  unsigned int v227; // edi
  __int64 *v228; // rax
  unsigned int v229; // edx
  __int64 v230; // rax
  __int64 v231; // rcx
  int v232; // r14d
  __int64 *v233; // rax
  __int64 v234; // r12
  __int64 v235; // rax
  __int64 v236; // rbx
  unsigned int v237; // eax
  __int64 *v238; // rdx
  __int64 v239; // rbx
  __int64 v240; // rax
  unsigned int v241; // eax
  __int64 v242; // rdx
  __int64 v243; // rsi
  int v244; // edi
  __int64 v245; // rcx
  __int64 v246; // r9
  __int64 v247; // rsi
  __int64 v248; // r10
  __int64 v249; // rcx
  __int64 v250; // rsi
  __int64 *v251; // rdx
  int v252; // eax
  unsigned int v253; // edx
  __int64 v254; // rax
  __int64 v255; // rsi
  __int64 v256; // rcx
  _DWORD *v257; // rax
  unsigned int v258; // eax
  int *v259; // rdx
  int v260; // eax
  unsigned int v261; // eax
  __int64 **v262; // rdx
  unsigned int v263; // edx
  __int64 v264; // rax
  __int64 v265; // rcx
  const char *v266; // rsi
  const void **v267; // rax
  unsigned int v268; // edx
  __int64 v269; // rax
  __int64 v270; // rcx
  __int64 v271; // r14
  _DWORD *v272; // rax
  bool v273; // bl
  __int64 v274; // rax
  unsigned int v275; // edx
  __int64 v276; // rax
  __int64 v277; // rcx
  __int64 *v278; // rax
  __int64 v279; // r12
  unsigned int v280; // edx
  __int64 v281; // rax
  __int64 v282; // rcx
  const char *v283; // rdi
  __int64 *v284; // rax
  unsigned int v285; // edx
  __int64 v286; // rax
  __int64 v287; // rcx
  int *v288; // rdi
  __int64 v289; // rsi
  int v290; // r10d
  __int64 v291; // rcx
  int v292; // r11d
  __int64 v293; // rsi
  __int64 v294; // r14
  __int64 v295; // rcx
  int v296; // r8d
  __int64 *v297; // rax
  unsigned int v298; // eax
  signed int *v299; // rdx
  signed int v300; // edi
  unsigned int v301; // eax
  signed int *v302; // rdx
  signed int v303; // edi
  unsigned int v304; // edx
  __int64 v305; // rax
  __int64 v306; // rcx
  signed int v307; // edi
  int **v308; // rax
  int *v309; // rbx
  char v310; // dl
  int v311; // eax
  _QWORD *v312; // rbx
  void *v313; // r13
  unsigned int v314; // eax
  __int64 *v315; // rdx
  unsigned int v316; // edx
  __int64 v317; // rax
  __int64 v318; // rcx
  __int64 v319; // rdi
  const void **v320; // rax
  unsigned int v321; // edx
  __int64 v322; // rax
  __int64 v323; // rcx
  const void *v324; // rdi
  __int64 *v325; // rax
  unsigned int v326; // eax
  const void **v327; // rdx
  unsigned int v328; // edx
  __int64 v329; // rax
  __int64 v330; // rcx
  __int64 v331; // rdi
  __int64 *v332; // rax
  unsigned int v333; // eax
  __int64 *v334; // rdx
  unsigned int v335; // eax
  __int64 *v336; // rdx
  unsigned int v337; // eax
  __int64 v338; // rdx
  __int64 v339; // rdi
  int *v340; // rdx
  int v341; // eax
  unsigned int v342; // eax
  __int64 *v343; // rdx
  char *v344; // rdi
  __int64 v345; // rdx
  char *v346; // rax
  char v347; // al
  unsigned int v348; // edx
  __int64 v349; // rax
  __int64 v350; // rsi
  _DWORD *v351; // rdi
  __int64 v352; // rcx
  unsigned int v353; // esi
  __int64 *v354; // rax
  unsigned int v355; // edx
  __int64 v356; // rax
  __int64 v357; // rcx
  __int64 v358; // rdi
  __int64 v359; // rsi
  unsigned int v360; // r8d
  __int64 v361; // rcx
  __int64 v362; // rsi
  _QWORD **v363; // rax
  _QWORD *v364; // r13
  __int64 v365; // rax
  unsigned int v366; // eax
  const char **v367; // rdx
  const char *v368; // r12
  char *v369; // rbx
  char *v370; // r13
  __int64 *v371; // r14
  unsigned int v372; // eax
  __int64 *v373; // rdx
  unsigned int v374; // edx
  __int64 v375; // rax
  __int64 v376; // rsi
  int v377; // r8d
  __int64 v378; // rcx
  int v379; // esi
  __int64 *v380; // rax
  _QWORD *v381; // rdi
  __int64 v382; // rax
  int v383; // eax
  unsigned int v384; // eax
  _QWORD **v385; // rdx
  unsigned int v386; // eax
  __int64 **v387; // rdx
  unsigned int v388; // eax
  _DWORD *v389; // rdx
  unsigned int v390; // eax
  _QWORD *v391; // rdx
  unsigned int v392; // eax
  __int64 v393; // rdx
  __int64 v394; // rsi
  __int64 v395; // rdi
  __int64 v396; // rcx
  unsigned int v397; // esi
  int *v398; // rdx
  unsigned int v399; // edx
  __int64 v400; // rax
  __int64 v401; // rcx
  unsigned int v402; // edi
  __int64 **v403; // rax
  char v404; // al
  unsigned int v405; // edx
  __int64 v406; // rax
  __int64 v407; // rcx
  unsigned int v408; // edi
  __int64 **v409; // rax
  unsigned int v410; // eax
  const void **v411; // rdx
  unsigned int v412; // edx
  __int64 v413; // rax
  __int64 v414; // rcx
  __int64 v415; // r12
  __int64 *v416; // rax
  __int64 v417; // r13
  __int64 v418; // rbx
  __int64 (__fastcall *v419)(__int64, __int64, __int64); // r14
  __int64 v420; // rax
  __int64 v421; // rax
  unsigned int v422; // eax
  unsigned int *v423; // rdx
  unsigned int v424; // ebx
  __int64 v425; // rax
  unsigned int v426; // eax
  __int64 *v427; // rdx
  __int64 v428; // rbx
  __int64 v429; // rax
  int v430; // eax
  unsigned int v431; // eax
  __int64 *v432; // rdx
  __int64 v433; // rbx
  __int64 v434; // rax
  int v435; // edx
  unsigned int v436; // eax
  __int64 *v437; // rdx
  __int64 v438; // r12
  __int64 v439; // rax
  int v440; // edx
  unsigned int v441; // eax
  _DWORD *v442; // rdx
  unsigned int v443; // eax
  _DWORD **v444; // rdx
  unsigned int v445; // eax
  _DWORD **v446; // rdx
  __int64 v447; // rax
  unsigned int v448; // eax
  __int64 v449; // rdx
  __int64 v450; // rsi
  unsigned int v451; // edi
  __int64 v452; // rcx
  unsigned int v453; // esi
  int *v454; // rdx
  unsigned int v455; // eax
  __int64 v456; // rdx
  __int64 v457; // rsi
  unsigned int v458; // edi
  __int64 v459; // rcx
  unsigned int v460; // esi
  int *v461; // rdx
  unsigned int v462; // eax
  int *v463; // rdx
  unsigned int v464; // eax
  __int64 v465; // rdx
  __int64 v466; // rsi
  unsigned int v467; // edi
  __int64 v468; // rcx
  unsigned int v469; // esi
  unsigned int *v470; // rdx
  unsigned int v471; // eax
  _DWORD **v472; // rdx
  _DWORD *v473; // rbx
  unsigned int v474; // edx
  __int64 v475; // rax
  __int64 v476; // rcx
  unsigned int v477; // edi
  __int64 *v478; // rax
  unsigned int v479; // edx
  __int64 v480; // rax
  __int64 v481; // rcx
  __int64 v482; // r14
  __int64 *v483; // rax
  __int64 v484; // rbx
  __int64 v485; // rax
  unsigned int v486; // eax
  _QWORD **v487; // rdx
  unsigned int v488; // edx
  __int64 v489; // rax
  __int64 v490; // rsi
  signed int v491; // edi
  __int64 v492; // rcx
  __int64 v493; // rsi
  __int64 *v494; // rax
  int v495; // eax
  int v496; // eax
  unsigned int v497; // edx
  __int64 v498; // rax
  __int64 v499; // rsi
  int v500; // r8d
  __int64 v501; // rcx
  int v502; // esi
  __int64 *v503; // rax
  _QWORD *v504; // rdi
  __int64 v505; // rax
  int v506; // eax
  _DWORD *v507; // rax
  bool v508; // dl
  unsigned int v509; // edx
  __int64 v510; // rax
  __int64 v511; // rcx
  __int64 v512; // r14
  __int64 *v513; // rax
  __int64 v514; // rbx
  __int64 v515; // rax
  unsigned int v516; // eax
  __int64 *v517; // rdx
  __int64 v518; // rbx
  __int64 v519; // rax
  unsigned int v520; // eax
  __int64 v521; // rdx
  __int64 v522; // rcx
  const char *v523; // rdi
  __m128i **v524; // rdx
  __m128i *v525; // r14
  int v526; // eax
  unsigned int v527; // edx
  __int64 v528; // rax
  __int64 v529; // rcx
  _DWORD *v530; // rdi
  __int64 v531; // rsi
  unsigned int v532; // r8d
  __int64 v533; // rcx
  const char *v534; // rsi
  _QWORD **v535; // rax
  _QWORD *v536; // r13
  __int64 v537; // rax
  unsigned int v538; // edx
  __int64 v539; // rax
  __int64 v540; // rcx
  __int64 v541; // r14
  __int64 *v542; // rax
  __int64 v543; // r12
  __int64 v544; // rax
  __int64 v545; // rbx
  unsigned int v546; // edx
  __int64 v547; // rax
  __int64 v548; // rcx
  unsigned int v549; // edi
  __int64 *v550; // rax
  unsigned int v551; // edx
  __int64 v552; // rax
  __int64 v553; // rcx
  __int64 v554; // rdi
  const void **v555; // rax
  unsigned int v556; // eax
  __int64 *v557; // rdx
  __int64 v558; // rbx
  __int64 v559; // rax
  char *v560; // rdi
  const char *v561; // rax
  unsigned int v562; // eax
  const char **v563; // rdx
  unsigned int v564; // edx
  __int64 v565; // rax
  char v566; // di
  unsigned int v567; // eax
  int *v568; // rdx
  unsigned int v569; // eax
  int *v570; // rdx
  unsigned int v571; // edx
  __int64 v572; // rax
  __int64 v573; // rsi
  __int64 v574; // r14
  __int64 v575; // rcx
  __int64 v576; // r12
  _DWORD *v577; // rax
  bool v578; // bl
  __int64 v579; // rax
  unsigned int v580; // edx
  __int64 v581; // rax
  __int64 v582; // rcx
  __int64 v583; // rdi
  __int64 v584; // rsi
  __int64 v585; // r8
  __int64 v586; // rcx
  unsigned int v587; // esi
  _DWORD *v588; // rax
  unsigned int v589; // edx
  __int64 v590; // rax
  __int64 v591; // rcx
  __int64 v592; // rdi
  const char **v593; // rax
  int v594; // eax
  unsigned int v595; // edx
  __int64 v596; // rax
  __int64 v597; // rcx
  _DWORD *v598; // rax
  unsigned int v599; // eax
  __int64 *v600; // rdx
  unsigned int v601; // edx
  __int64 v602; // rax
  __int64 v603; // rcx
  __int64 v604; // rdi
  _QWORD *v605; // rax
  unsigned int v606; // edx
  __int64 v607; // rax
  __int64 v608; // rsi
  int v609; // r8d
  __int64 v610; // rcx
  __int64 v611; // rsi
  __int64 *v612; // rax
  _QWORD *v613; // rdi
  __int64 v614; // rax
  __int64 v615; // rax
  unsigned int v616; // edx
  __int64 v617; // rax
  __int64 v618; // rsi
  int v619; // edi
  __int64 v620; // rcx
  __int64 v621; // rsi
  __int64 *v622; // rax
  unsigned int v623; // eax
  int *v624; // rdx
  unsigned int v625; // edx
  unsigned int v626; // edx
  __int64 v627; // rax
  __int64 v628; // rcx
  __int64 v629; // r14
  __int64 *v630; // rax
  __int64 v631; // rbx
  __int64 v632; // rax
  int v633; // eax
  unsigned int v634; // edx
  __int64 v635; // rax
  __int64 v636; // rcx
  __int64 v637; // r14
  unsigned int *v638; // rax
  unsigned int v639; // ebx
  __int64 v640; // rax
  unsigned int v641; // eax
  __int64 *v642; // rdx
  __int64 v643; // rbx
  __int64 v644; // rax
  bool v645; // al
  unsigned int v646; // edx
  __int64 v647; // rax
  __int64 v648; // rsi
  __int64 v649; // rdi
  __int64 v650; // rcx
  int v651; // esi
  int *v652; // rax
  unsigned int v653; // eax
  __int64 *v654; // rdx
  unsigned int v655; // edx
  __int64 v656; // rax
  __int64 v657; // rsi
  signed int v658; // edi
  __int64 v659; // rcx
  __int64 v660; // rsi
  __int64 *v661; // rax
  unsigned int v662; // eax
  unsigned int *v663; // rdx
  int *v664; // rdx
  _DWORD *v665; // rdx
  _DWORD *v666; // rdx
  __int64 v667; // rdx
  __int64 v668; // rax
  _DWORD *v669; // rdx
  _DWORD *v670; // rax
  _DWORD *v671; // rdx
  int v672; // eax
  _DWORD **v673; // rdx
  unsigned int *v674; // rax
  const char **v675; // rdx
  unsigned int *v676; // rdx
  unsigned int *v677; // rax
  const char **v678; // rdx
  __int64 *v679; // rax
  _DWORD **v680; // rax
  unsigned int *v681; // rdx
  _QWORD *v682; // rdx
  int *v683; // rax
  _DWORD *v684; // rdx
  _DWORD *v685; // rdx
  __int64 *v686; // rdx
  __int64 *v687; // rdx
  _QWORD *v688; // rax
  unsigned int *v689; // rdx
  __int64 *v690; // rdx
  int *v691; // rax
  __int64 *v692; // rdx
  __int64 *v693; // rdx
  __int64 v694; // rax
  int *v695; // rdx
  __int64 *v696; // rax
  __int64 *v697; // rdx
  __int64 *v698; // rax
  signed int *v699; // rax
  __int64 *v700; // rdx
  __int64 *v701; // rdx
  int *v702; // rax
  _DWORD *v703; // rdx
  __int64 *v704; // rdx
  const void **v705; // rdx
  _QWORD *v706; // rdx
  __int64 *v707; // rax
  int *v708; // rdx
  signed int *v709; // rax
  __int64 *v710; // rdx
  _BYTE **v711; // rax
  _BYTE **v712; // rdx
  _BYTE **v713; // rax
  _BYTE **v714; // rdx
  _BYTE **v715; // rax
  int *v716; // rdx
  __int64 *v717; // rax
  _QWORD *v718; // rdx
  __int64 *v719; // rdx
  unsigned int *v720; // rdx
  int **v721; // rdx
  int *v722; // rax
  int *v723; // rdx
  __int64 *v724; // rax
  int *v725; // rdx
  __int64 *v726; // rdx
  unsigned int *v727; // rax
  __int64 *v728; // rdx
  unsigned int *v729; // rdx
  _DWORD *v730; // rax
  _DWORD **v731; // rdx
  signed int *v732; // rax
  __int64 *v733; // rdx
  __int64 *v734; // rdx
  signed int *v735; // rdx
  unsigned int *v736; // rdx
  unsigned int *v737; // rdx
  unsigned int *v738; // rdx
  unsigned int *v739; // rax
  __int64 *v740; // rdx
  unsigned int *v741; // rdx
  unsigned int *v742; // rax
  __int64 *v743; // rdx
  __int64 *v744; // rdx
  const char **v745; // rdx
  _DWORD *v746; // rax
  __int64 *v747; // rdx
  _DWORD *v748; // rax
  _DWORD *v749; // rdx
  _DWORD *v750; // rax
  unsigned int *v751; // rdx
  unsigned int *v752; // rdx
  unsigned int *v753; // rdx
  unsigned int *v754; // rdx
  const char **v755; // rdx
  unsigned int *v756; // rdx
  unsigned int *v757; // rax
  unsigned int *v758; // rdx
  unsigned int *v759; // rax
  const char **v760; // rax
  __int64 **v761; // rax
  __int64 **v762; // rdx
  __int64 *v763; // rax
  __int64 **v764; // rdx
  __int64 **v765; // rax
  int **v766; // rdx
  signed int *v767; // rax
  __int64 *v768; // rdx
  char **v769; // rax
  signed int *v770; // rdx
  int *v771; // rdx
  const char **v772; // rax
  const char **v773; // rdx
  unsigned int *v774; // rdx
  _BYTE **v775; // rax
  _BYTE **v776; // rdx
  int *v777; // rdx
  char v778; // al
  __int64 v779; // rdx
  __int64 v780; // rcx
  __int64 v781; // r8
  __int64 v782; // r9
  const __m128i *v783; // rax
  int v784; // edx
  __int64 v785; // rcx
  int v786; // eax
  _QWORD *v787; // rdi
  char v788; // [rsp+0h] [rbp-80h]
  __int64 *v789; // [rsp+8h] [rbp-78h] BYREF
  __int64 v790; // [rsp+10h] [rbp-70h] BYREF
  int v791; // [rsp+18h] [rbp-68h]
  __m128i v792; // [rsp+20h] [rbp-60h] BYREF
  int v793; // [rsp+30h] [rbp-50h]
  __int64 v794; // [rsp+38h] [rbp-48h]
  __int64 v795; // [rsp+40h] [rbp-40h]
  __int64 v796; // [rsp+48h] [rbp-38h]
  __int64 v797; // [rsp+50h] [rbp-30h]
  unsigned __int64 v798; // [rsp+58h] [rbp-28h]

  v14 = (unsigned int)dword_251408;
  v798 = __readfsqword(0x28u);
  v792.m128i_i64[0] = 0;
  v793 = dword_251408;
  v792.m128i_i32[2] = a1;
  v792.m128i_i8[12] = 1;
  v789 = nullptr;
  v15 = a2;
  switch ( a1 )
  {
    case 0x3E8u:
      if ( dword_25159C )
      {
        byte_251290 = 1;
        v182 = 1;
      }
      else
      {
        v182 = sub_C9160((unsigned __int64 *)&qword_2512A0) ^ 1;
      }
      LOBYTE(v789) = v182;
      goto LABEL_5;
    case 0x3E9u:
      LODWORD(v789) = qword_2512A0;
      goto LABEL_5;
    case 0x3EAu:
      LODWORD(v789) = HIDWORD(qword_2512A0);
      goto LABEL_5;
    case 0x3EBu:
      v312 = xmmword_2512A8;
      if ( xmmword_2512A8 )
      {
        do
        {
          v313 = v312;
          v312 = (_QWORD *)*v312;
          sub_C8970((__int64)v313);
          operator delete(v313, 0x38u);
        }
        while ( v312 );
      }
      *(_OWORD *)&xmmword_2512A8 = 0;
      goto LABEL_5;
    case 0x3ECu:
      LODWORD(v789) = dword_2515A4;
      goto LABEL_5;
    case 0x3EDu:
      v48 = -1;
      v792.m128i_i32[2] = 1006;
      if ( !byte_25142C )
        v48 = 1;
      v19 = v48;
      goto LABEL_82;
    case 0x3EEu:
      v19 = 0;
LABEL_82:
      v49 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v667 = *(_QWORD *)(a2 + 8) + 8LL;
        *(_QWORD *)(a2 + 8) = v667;
      }
      else
      {
        *(_DWORD *)a2 = v49 + 8;
        if ( v49 + 8 <= 0x2F )
        {
          *(_DWORD *)a2 = v49 + 16;
          if ( v49 + 16 <= 0x2F )
          {
            *(_DWORD *)a2 = v49 + 24;
            goto LABEL_86;
          }
          v668 = *(_QWORD *)(a2 + 8);
LABEL_753:
          *(_QWORD *)(a2 + 8) = v668 + 8;
LABEL_86:
          v794 = qstrdup();
          v795 = qstrdup();
          v796 = 0;
          v797 = qstrdup();
LABEL_24:
          if ( v19 == -1 )
            goto LABEL_5;
LABEL_25:
          v28 = v792.m128i_i32[2];
LABEL_26:
          if ( !v28 )
            goto LABEL_5;
          goto LABEL_10;
        }
        v667 = *(_QWORD *)(a2 + 8);
      }
      v668 = v667 + 8;
      *(_QWORD *)(a2 + 8) = v667 + 8;
      goto LABEL_753;
    case 0x3EFu:
      v792.m128i_i32[2] = 1008;
      goto LABEL_11;
    case 0x3F0u:
    case 0x3F2u:
    case 0x3F4u:
    case 0x3FCu:
    case 0x400u:
    case 0x40Au:
    case 0x427u:
    case 0x4B4u:
    case 0x4B8u:
      if ( a1 )
        goto LABEL_3;
      goto LABEL_5;
    case 0x3F1u:
      v792.m128i_i32[2] = 1010;
      goto LABEL_11;
    case 0x3F3u:
      v792.m128i_i32[2] = 1012;
      if ( !byte_25142C )
        goto LABEL_11;
      goto LABEL_5;
    case 0x3F5u:
      v34 = dword_2515A4;
      if ( dword_2515A4 )
        v34 = xmmword_251418;
      LODWORD(v789) = v34;
      goto LABEL_5;
    case 0x3F6u:
      v30 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v31 = *(unsigned int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v31 + 2;
      }
      else
      {
        v31 = (unsigned int *)(*(_QWORD *)(a2 + 16) + v30);
        *(_DWORD *)a2 = v30 + 8;
      }
      v32 = dword_2515A4;
      if ( dword_2515A4 )
      {
        v33 = *v31;
        v32 = 0;
        if ( v33 < (unsigned int)xmmword_251418 )
          v32 = *(_DWORD *)(qword_251410 + 232LL * (int)v33);
      }
      LODWORD(v789) = v32;
      goto LABEL_5;
    case 0x3F7u:
      v792.m128i_i32[2] = 1016;
      v19 = 1;
      goto LABEL_13;
    case 0x3F8u:
    case 0x435u:
    case 0x437u:
      v19 = 0;
      goto LABEL_13;
    case 0x3F9u:
      v792.m128i_i32[2] = 1018;
      LODWORD(v794) = 1;
      if ( !byte_25142C )
        goto LABEL_11;
      goto LABEL_5;
    case 0x3FAu:
      LODWORD(v794) = 1;
      if ( v792.m128i_i32[2] )
        goto LABEL_3;
      goto LABEL_5;
    case 0x3FBu:
      v792.m128i_i32[2] = 1020;
      if ( !byte_25142C )
        goto LABEL_11;
      goto LABEL_5;
    case 0x3FDu:
      v633 = -1;
      v792.m128i_i32[2] = 1022;
      if ( !byte_25142C )
        v633 = 1;
      v19 = v633;
      goto LABEL_21;
    case 0x3FEu:
    case 0x4BAu:
      v19 = 0;
      goto LABEL_21;
    case 0x3FFu:
      v792.m128i_i32[2] = 1024;
      if ( !byte_25142C )
        goto LABEL_11;
      goto LABEL_5;
    case 0x401u:
      bpt_kernel_interface = get_bpt_kernel_interface();
      LODWORD(v789) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 192LL))(bpt_kernel_interface);
      goto LABEL_5;
    case 0x402u:
      v792.m128i_i32[2] = 1027;
      v19 = 1;
      goto LABEL_304;
    case 0x403u:
      v19 = 0;
LABEL_304:
      v253 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v669 = *(_DWORD **)(a2 + 8);
        v670 = v669 + 2;
        *(_QWORD *)(a2 + 8) = v669 + 2;
        LODWORD(v794) = *v669;
      }
      else
      {
        v254 = *(_QWORD *)(a2 + 16);
        v255 = v253 + 8;
        *(_DWORD *)v15 = v255;
        LODWORD(v794) = *(_DWORD *)(v254 + v253);
        if ( (unsigned int)v255 <= 0x2F )
        {
          v256 = v253 + 16;
          *(_DWORD *)v15 = v256;
          LODWORD(v795) = *(_DWORD *)(v254 + v255);
          if ( (unsigned int)v256 <= 0x2F )
          {
            v257 = (_DWORD *)(v256 + v254);
            *(_DWORD *)v15 = v253 + 24;
            goto LABEL_308;
          }
          v257 = *(_DWORD **)(v15 + 8);
LABEL_758:
          *(_QWORD *)(v15 + 8) = v257 + 2;
LABEL_308:
          HIDWORD(v795) = *v257;
LABEL_10:
          if ( v19 )
LABEL_11:
            v16 = sub_C8DE0((unsigned __int64 *)&qword_2512A0, (__int64)&v792);
          else
LABEL_3:
            v16 = (unsigned __int8)sub_C90E0((__int64)&qword_2512A0, &v792);
          LODWORD(v789) = v16;
          goto LABEL_5;
        }
        v670 = *(_DWORD **)(v15 + 8);
      }
      v671 = v670;
      v257 = v670 + 2;
      *(_QWORD *)(v15 + 8) = v257;
      LODWORD(v795) = *v671;
      goto LABEL_758;
    case 0x404u:
      v792.m128i_i32[2] = 1029;
      v19 = 1;
      goto LABEL_7;
    case 0x405u:
    case 0x410u:
    case 0x416u:
    case 0x41Cu:
    case 0x469u:
      v19 = 0;
      goto LABEL_7;
    case 0x406u:
      v792.m128i_i32[2] = 1031;
      v19 = 1;
      goto LABEL_48;
    case 0x407u:
      v19 = 0;
LABEL_48:
      v35 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v665 = *(_DWORD **)(a2 + 8);
        v38 = v665 + 2;
        *(_QWORD *)(a2 + 8) = v665 + 2;
        LODWORD(v794) = *v665;
      }
      else
      {
        v36 = *(_QWORD *)(a2 + 16);
        v37 = v35 + 8;
        *(_DWORD *)a2 = v37;
        LODWORD(v794) = *(_DWORD *)(v36 + v35);
        if ( (unsigned int)v37 <= 0x2F )
        {
          v38 = (_DWORD *)(v37 + v36);
          *(_DWORD *)a2 = v35 + 16;
          goto LABEL_51;
        }
        v38 = *(_DWORD **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v38 + 2;
LABEL_51:
      LOBYTE(v795) = *v38 != 0;
      goto LABEL_10;
    case 0x408u:
      v39 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v40 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v40 + 2;
      }
      else
      {
        v40 = (int *)(*(_QWORD *)(a2 + 16) + v39);
        *(_DWORD *)a2 = v39 + 8;
      }
      if ( dbg )
        LOBYTE(v789) = sub_B5B90(*v40, a5, a6);
      goto LABEL_5;
    case 0x409u:
      v792.m128i_i32[2] = 1034;
      goto LABEL_11;
    case 0x40Bu:
      v43 = sub_C4D00(dword_251408);
      v44 = 0;
      if ( v43 )
        v44 = *((_BYTE *)v43 + 153) & 1;
      LOBYTE(v789) = v44;
      goto LABEL_5;
    case 0x40Cu:
      v792.m128i_i32[2] = 1037;
      v19 = 1;
      goto LABEL_57;
    case 0x40Du:
      v19 = 0;
LABEL_57:
      v41 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v42 = *(_DWORD **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v42 + 2;
      }
      else
      {
        v42 = (_DWORD *)(*(_QWORD *)(a2 + 16) + v41);
        *(_DWORD *)a2 = v41 + 8;
      }
      LODWORD(v795) = *v42;
      goto LABEL_10;
    case 0x40Eu:
      LODWORD(v789) = sub_A3BC0();
      goto LABEL_5;
    case 0x40Fu:
      v792.m128i_i32[2] = 1040;
      v19 = 1;
      goto LABEL_7;
    case 0x411u:
      if ( dbg && *(char *)(dbg + 34LL) < 0 )
        goto LABEL_988;
      v45 = sub_C4D00(dword_251408);
      v46 = 0;
      if ( v45 )
        v46 = (*((_BYTE *)v45 + 153) & 2) != 0;
      LOBYTE(v789) = v46;
      goto LABEL_5;
    case 0x412u:
      v792.m128i_i32[2] = 1043;
      v19 = 1;
      goto LABEL_17;
    case 0x413u:
    case 0x419u:
    case 0x466u:
      v19 = 0;
      goto LABEL_17;
    case 0x414u:
      LODWORD(v789) = sub_A3C90();
      goto LABEL_5;
    case 0x415u:
      v792.m128i_i32[2] = 1046;
      v19 = 1;
      goto LABEL_7;
    case 0x417u:
      if ( dbg && *(char *)(dbg + 34LL) < 0 )
      {
LABEL_988:
        LOBYTE(v789) = (unsigned int)sub_9E0A0() == 1;
      }
      else
      {
        v50 = sub_C4D00(dword_251408);
        v51 = 0;
        if ( v50 )
          v51 = (*((_BYTE *)v50 + 153) & 4) != 0;
        LOBYTE(v789) = v51;
      }
      goto LABEL_5;
    case 0x418u:
      v792.m128i_i32[2] = 1049;
      v19 = 1;
      goto LABEL_17;
    case 0x41Au:
      LODWORD(v789) = sub_A3E30();
      goto LABEL_5;
    case 0x41Bu:
      v792.m128i_i32[2] = 1052;
      v19 = 1;
      goto LABEL_7;
    case 0x41Du:
      LODWORD(v789) = sub_A4100();
      goto LABEL_5;
    case 0x41Eu:
      v79 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v770 = *(signed int **)(a2 + 8);
        v83 = (_DWORD **)(v770 + 2);
        *(_QWORD *)(a2 + 8) = v770 + 2;
        v82 = *v770;
      }
      else
      {
        v80 = *(_QWORD *)(a2 + 16);
        v81 = v79 + 8;
        *(_DWORD *)a2 = v81;
        v82 = *(_DWORD *)(v80 + v79);
        if ( (unsigned int)v81 <= 0x2F )
        {
          v83 = (_DWORD **)(v81 + v80);
          *(_DWORD *)a2 = v79 + 16;
          goto LABEL_125;
        }
        v83 = *(_DWORD ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v83 + 1;
LABEL_125:
      LOBYTE(v789) = sub_A4150(v82, *v83);
      goto LABEL_5;
    case 0x41Fu:
      v73 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v753 = *(unsigned int **)(a2 + 8);
        v77 = (_DWORD **)(v753 + 2);
        *(_QWORD *)(a2 + 8) = v753 + 2;
        v76 = *v753;
      }
      else
      {
        v74 = *(_QWORD *)(a2 + 16);
        v75 = v73 + 8;
        *(_DWORD *)a2 = v75;
        v76 = *(_DWORD *)(v74 + v73);
        if ( (unsigned int)v75 <= 0x2F )
        {
          v77 = (_DWORD **)(v75 + v74);
          *(_DWORD *)a2 = v73 + 16;
          goto LABEL_121;
        }
        v77 = *(_DWORD ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v77 + 1;
LABEL_121:
      v78 = *v77;
      *v78 = sub_A43B0(v76);
      goto LABEL_5;
    case 0x420u:
      v67 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v774 = *(unsigned int **)(a2 + 8);
        v71 = (_DWORD **)(v774 + 2);
        *(_QWORD *)(a2 + 8) = v774 + 2;
        v70 = *v774;
      }
      else
      {
        v68 = *(_QWORD *)(a2 + 16);
        v69 = v67 + 8;
        *(_DWORD *)a2 = v69;
        v70 = *(_DWORD *)(v68 + v67);
        if ( (unsigned int)v69 <= 0x2F )
        {
          v71 = (_DWORD **)(v69 + v68);
          *(_DWORD *)a2 = v67 + 16;
          goto LABEL_117;
        }
        v71 = *(_DWORD ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v71 + 1;
LABEL_117:
      v72 = *v71;
      *v72 = sub_A4440(v70);
      goto LABEL_5;
    case 0x421u:
      v61 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v754 = *(unsigned int **)(a2 + 8);
        v65 = (_DWORD **)(v754 + 2);
        *(_QWORD *)(a2 + 8) = v754 + 2;
        v64 = *v754;
      }
      else
      {
        v62 = *(_QWORD *)(a2 + 16);
        v63 = v61 + 8;
        *(_DWORD *)a2 = v63;
        v64 = *(_DWORD *)(v62 + v61);
        if ( (unsigned int)v63 <= 0x2F )
        {
          v65 = (_DWORD **)(v63 + v62);
          *(_DWORD *)a2 = v61 + 16;
          goto LABEL_113;
        }
        v65 = *(_DWORD ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v65 + 1;
LABEL_113:
      v66 = *v65;
      *v66 = sub_A44D0(v64);
      goto LABEL_5;
    case 0x422u:
      v59 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v60 = *(const char ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v60 + 1;
      }
      else
      {
        v60 = (const char **)(*(_QWORD *)(a2 + 16) + v59);
        *(_DWORD *)a2 = v59 + 8;
      }
      LODWORD(v789) = sub_C88D0(*v60) + 2;
      goto LABEL_5;
    case 0x423u:
      v57 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v58 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v58 + 1;
      }
      else
      {
        v58 = (__int64 *)(*(_QWORD *)(a2 + 16) + v57);
        *(_DWORD *)a2 = v57 + 8;
      }
      v789 = (__int64 *)sub_E5AF0(*v58);
      goto LABEL_5;
    case 0x424u:
      v52 = -1;
      v792.m128i_i32[2] = 1061;
      if ( !byte_25142C )
        v52 = 1;
      v19 = v52;
      goto LABEL_99;
    case 0x425u:
      v19 = 0;
LABEL_99:
      v53 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v666 = *(_DWORD **)(a2 + 8);
        v56 = v666 + 2;
        *(_QWORD *)(a2 + 8) = v666 + 2;
        LODWORD(v794) = *v666;
      }
      else
      {
        v54 = *(_QWORD *)(a2 + 16);
        v55 = v53 + 8;
        *(_DWORD *)a2 = v55;
        LODWORD(v794) = *(_DWORD *)(v54 + v53);
        if ( (unsigned int)v55 <= 0x2F )
        {
          v56 = (_DWORD *)(v55 + v54);
          *(_DWORD *)a2 = v53 + 16;
          goto LABEL_102;
        }
        v56 = *(_DWORD **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v56 + 2;
LABEL_102:
      HIDWORD(v794) = *v56;
      goto LABEL_24;
    case 0x426u:
      v792.m128i_i32[2] = 1063;
      if ( !byte_25142C )
        goto LABEL_11;
      goto LABEL_5;
    case 0x428u:
      v127 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v128 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v128 + 1;
      }
      else
      {
        v128 = (__int64 *)(*(_QWORD *)(a2 + 16) + v127);
        *(_DWORD *)a2 = v127 + 8;
      }
      if ( qword_2514E8 )
      {
        v129 = (_DWORD *)*v128;
        v130 = (_DWORD *)qword_2514D8;
        sub_BB080(*v128, qword_2514D8 + 40);
        v131 = v130[16];
        LOBYTE(v789) = 1;
        v129[6] = v131;
        v129[7] = v130[17];
        v129[8] = v130[18];
      }
      goto LABEL_5;
    case 0x429u:
      v120 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v121 = *(_QWORD **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v121 + 1;
      }
      else
      {
        v121 = (_QWORD *)(*(_QWORD *)(a2 + 16) + v120);
        *(_DWORD *)a2 = v120 + 8;
      }
      v122 = (_DWORD *)*v121;
      v123 = (int *)qword_2514D0;
      v124 = v122;
      if ( qword_2514D0 )
      {
        v125 = v122[6];
        v126 = &dword_2514C8;
        do
        {
          if ( v123[8] >= v125 )
          {
            v126 = v123;
            v123 = *((int **)v123 + 2);
          }
          else
          {
            v123 = *((int **)v123 + 3);
          }
        }
        while ( v123 );
        if ( v126 != &dword_2514C8 )
        {
          if ( v125 < v126[16] || (v126 = (int *)std::_Rb_tree_increment(), v126 != &dword_2514C8) )
          {
            sub_BB080((__int64)v124, (__int64)(v126 + 10));
            v672 = v126[16];
            LOBYTE(v789) = 1;
            v124[6] = v672;
            v124[7] = v126[17];
            v124[8] = v126[18];
          }
        }
      }
      goto LABEL_5;
    case 0x42Au:
      if ( !(unsigned __int8)getinf_flag() && byte_251038 )
        TProgram::switch_screen(nullptr, 16);
      goto LABEL_5;
    case 0x42Bu:
      LODWORD(v789) = dword_251408;
      goto LABEL_5;
    case 0x42Cu:
      v115 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v777 = *(int **)(a2 + 8);
        v119 = v777 + 2;
        *(_QWORD *)(a2 + 8) = v777 + 2;
        v118 = *v777;
      }
      else
      {
        v116 = *(_QWORD *)(a2 + 16);
        v117 = v115 + 8;
        *(_DWORD *)a2 = v117;
        v118 = *(_DWORD *)(v116 + v115);
        if ( (unsigned int)v117 <= 0x2F )
        {
          v119 = (int *)(v117 + v116);
          *(_DWORD *)a2 = v115 + 16;
          goto LABEL_162;
        }
        v119 = *(int **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v119 + 2;
LABEL_162:
      LODWORD(v789) = sub_E16D0(v118, *v119);
      goto LABEL_5;
    case 0x42Du:
      v789 = &qword_251320;
      goto LABEL_5;
    case 0x42Eu:
      LODWORD(v789) = dword_24412C;
      v95 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v96 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v96 + 2;
      }
      else
      {
        v96 = (int *)(*(_QWORD *)(a2 + 16) + v95);
        *(_DWORD *)a2 = v95 + 8;
      }
      dword_24412C = *v96;
      sub_B7D00();
      goto LABEL_5;
    case 0x42Fu:
      v108 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v775 = *(_BYTE ***)(a2 + 8);
        v776 = v775 + 1;
        *(_QWORD *)(a2 + 8) = v775 + 1;
        v111 = *v775;
      }
      else
      {
        v109 = *(_QWORD *)(a2 + 16);
        v110 = v108 + 8;
        *(_DWORD *)v15 = v110;
        v111 = *(_BYTE **)(v109 + v108);
        if ( (unsigned int)v110 <= 0x2F )
        {
          v112 = v108 + 16;
          *(_DWORD *)v15 = v112;
          v113 = *(_BYTE **)(v109 + v110);
          if ( (unsigned int)v112 <= 0x2F )
          {
            v114 = (int *)(v112 + v109);
            *(_DWORD *)v15 = v108 + 24;
            goto LABEL_158;
          }
          v114 = *(int **)(v15 + 8);
LABEL_977:
          *(_QWORD *)(v15 + 8) = v114 + 2;
LABEL_158:
          sub_E6D40(v111, v113, *v114);
          goto LABEL_5;
        }
        v776 = *(_BYTE ***)(v15 + 8);
      }
      v114 = (int *)(v776 + 1);
      *(_QWORD *)(v15 + 8) = v776 + 1;
      v113 = *v776;
      goto LABEL_977;
    case 0x430u:
      v97 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v769 = *(char ***)(a2 + 8);
        v101 = v769 + 1;
        *(_QWORD *)(a2 + 8) = v769 + 1;
        v100 = *v769;
      }
      else
      {
        v98 = *(_QWORD *)(a2 + 16);
        v99 = v97 + 8;
        *(_DWORD *)a2 = v99;
        v100 = *(char **)(v98 + v97);
        if ( (unsigned int)v99 <= 0x2F )
        {
          v101 = (_DWORD *)(v99 + v98);
          *(_DWORD *)a2 = v97 + 16;
          goto LABEL_149;
        }
        v101 = *(_DWORD **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v101 + 2;
LABEL_149:
      if ( v100 )
      {
        v102 = (_QWORD *)sub_BF120(v100, *v101 != 0);
        if ( !v102 )
        {
          v107 = 0;
LABEL_153:
          LOBYTE(v789) = v107;
          goto LABEL_5;
        }
        sub_E6ED0(v102, 1, v103, v104, v105, v106);
      }
      else
      {
        v778 = netnode_inited();
        sub_E6ED0(nullptr, v778 == 0 ? 3 : 1, v779, v780, v781, v782);
      }
      v107 = 1;
      goto LABEL_153;
    case 0x431u:
      v789 = &qword_2512E0;
      goto LABEL_5;
    case 0x432u:
      if ( dbg
        && (v84 = *(_QWORD *)(dbg + 32LL), (v84 & 0x1000000000LL) != 0)
        && (dword_2515A4 <= 0 || (v84 & 0x40) == 0) )
      {
        sub_CDAF0(qword_2512E0, xmmword_2512E8);
        v85 = 1;
      }
      else
      {
        v85 = 0;
      }
      LOBYTE(v789) = v85;
      goto LABEL_5;
    case 0x433u:
      v86 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v771 = *(int **)(a2 + 8);
        v772 = (const char **)(v771 + 2);
        *(_QWORD *)(a2 + 8) = v771 + 2;
        v89 = *v771;
      }
      else
      {
        v87 = *(_QWORD *)(a2 + 16);
        v88 = v86 + 8;
        *(_DWORD *)a2 = v88;
        v89 = *(_DWORD *)(v87 + v86);
        if ( (unsigned int)v88 <= 0x2F )
        {
          v90 = v86 + 16;
          *(_DWORD *)v15 = v90;
          v91 = *(const char **)(v87 + v88);
          if ( (unsigned int)v90 <= 0x2F )
          {
            v92 = v86 + 24;
            *(_DWORD *)v15 = v92;
            v93 = *(const char **)(v87 + v90);
            if ( (unsigned int)v92 <= 0x2F )
            {
              v94 = (int *)(v92 + v87);
              *(_DWORD *)v15 = v86 + 32;
              goto LABEL_141;
            }
            v94 = *(int **)(v15 + 8);
LABEL_971:
            *(_QWORD *)(v15 + 8) = v94 + 2;
LABEL_141:
            v789 = (__int64 *)sub_D0310(v89, v91, v93, *v94);
            goto LABEL_5;
          }
          v773 = *(const char ***)(v15 + 8);
LABEL_970:
          v94 = (int *)(v773 + 1);
          *(_QWORD *)(v15 + 8) = v773 + 1;
          v93 = *v773;
          goto LABEL_971;
        }
        v772 = *(const char ***)(a2 + 8);
      }
      v773 = v772 + 1;
      *(_QWORD *)(a2 + 8) = v772 + 1;
      v91 = *v772;
      goto LABEL_970;
    case 0x434u:
      v792.m128i_i32[2] = 1077;
      v19 = 1;
      goto LABEL_13;
    case 0x436u:
      v792.m128i_i32[2] = 1079;
      v19 = 1;
LABEL_13:
      v22 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v23 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v23 + 2;
      }
      else
      {
        v23 = (int *)(*(_QWORD *)(a2 + 16) + v22);
        *(_DWORD *)a2 = v22 + 8;
      }
      v793 = *v23;
      goto LABEL_10;
    case 0x438u:
      v132 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v761 = *(__int64 ***)(a2 + 8);
        v762 = v761 + 1;
        *(_QWORD *)(a2 + 8) = v761 + 1;
        v135 = *v761;
      }
      else
      {
        v133 = *(_QWORD *)(a2 + 16);
        v134 = v132 + 8;
        *(_DWORD *)a2 = v134;
        v135 = *(__int64 **)(v133 + v132);
        if ( (unsigned int)v134 <= 0x2F )
        {
          v136 = v132 + 16;
          *(_DWORD *)v15 = v136;
          v137 = *(__int64 **)(v133 + v134);
          if ( (unsigned int)v136 <= 0x2F )
          {
            v138 = v132 + 24;
            *(_DWORD *)v15 = v138;
            v139 = *(_QWORD *)(v133 + v136);
            if ( (unsigned int)v138 <= 0x2F )
            {
              v140 = v132 + 32;
              *(_DWORD *)v15 = v140;
              v141 = *(__int64 **)(v133 + v138);
              if ( (unsigned int)v140 <= 0x2F )
              {
                v142 = v132 + 40;
                *(_DWORD *)v15 = v142;
                v143 = *(__int64 **)(v133 + v140);
                if ( (unsigned int)v142 <= 0x2F )
                {
                  *(_DWORD *)v15 = v132 + 48;
                  v144 = *(__int64 **)(v15 + 8);
                  v145 = *(int **)(v133 + v142);
                  goto LABEL_189;
                }
                v766 = *(int ***)(v15 + 8);
LABEL_956:
                v144 = (__int64 *)(v766 + 1);
                *(_QWORD *)(v15 + 8) = v766 + 1;
                v145 = *v766;
LABEL_189:
                *(_QWORD *)(v15 + 8) = v144 + 1;
                sub_E4FB0(v135, v137, *v144, v139, v141, v143, v145);
                goto LABEL_5;
              }
              v765 = *(__int64 ***)(v15 + 8);
LABEL_955:
              v766 = (int **)(v765 + 1);
              *(_QWORD *)(v15 + 8) = v765 + 1;
              v143 = *v765;
              goto LABEL_956;
            }
            v764 = *(__int64 ***)(v15 + 8);
LABEL_954:
            v765 = v764 + 1;
            *(_QWORD *)(v15 + 8) = v764 + 1;
            v141 = *v764;
            goto LABEL_955;
          }
          v763 = *(__int64 **)(v15 + 8);
LABEL_953:
          v764 = (__int64 **)(v763 + 1);
          *(_QWORD *)(v15 + 8) = v763 + 1;
          v139 = *v763;
          goto LABEL_954;
        }
        v762 = *(__int64 ***)(a2 + 8);
      }
      v763 = (__int64 *)(v762 + 1);
      *(_QWORD *)(a2 + 8) = v762 + 1;
      v137 = *v762;
      goto LABEL_953;
    case 0x439u:
      v159 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v160 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v160 + 2;
      }
      else
      {
        v160 = (int *)(*(_QWORD *)(a2 + 16) + v159);
        *(_DWORD *)a2 = v159 + 8;
      }
      LODWORD(v789) = sub_97970(*v160);
      goto LABEL_5;
    case 0x43Au:
      v146 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v730 = *(_DWORD **)(a2 + 8);
        v731 = (_DWORD **)(v730 + 2);
        *(_QWORD *)(a2 + 8) = v730 + 2;
        v148 = *v730;
LABEL_886:
        v150 = (int *)(v731 + 1);
        *(_QWORD *)(v15 + 8) = v731 + 1;
        v149 = *v731;
        goto LABEL_887;
      }
      v147 = *(_QWORD *)(a2 + 16);
      a4 = v146;
      a2 = v146 + 8;
      *(_DWORD *)v15 = a2;
      v148 = *(_DWORD *)(v147 + v146);
      if ( (unsigned int)a2 > 0x2F )
      {
        v731 = *(_DWORD ***)(v15 + 8);
        goto LABEL_886;
      }
      a4 = v146 + 16;
      *(_DWORD *)v15 = a4;
      v149 = *(_DWORD **)(v147 + a2);
      if ( (unsigned int)a4 <= 0x2F )
      {
        v150 = (int *)(a4 + v147);
        *(_DWORD *)v15 = v146 + 24;
        goto LABEL_194;
      }
      v150 = *(int **)(v15 + 8);
LABEL_887:
      *(_QWORD *)(v15 + 8) = v150 + 2;
LABEL_194:
      v151 = *v150;
      if ( dword_2515A4 )
      {
        if ( (unsigned int)(v148 + 1) <= 1 )
        {
          LODWORD(v789) = dword_2515A4;
          if ( !v148 )
            goto LABEL_196;
        }
        else
        {
          if ( v148 != 1 )
            goto LABEL_5;
          LODWORD(v789) = dword_2515A4;
        }
        dword_251538 |= 2u;
        dword_2515A4 = v148;
      }
      else if ( v148 )
      {
        goto LABEL_5;
      }
LABEL_196:
      if ( v149 )
      {
        a4 = (unsigned int)*v149;
        a2 = (unsigned int)dword_251408;
        if ( (_DWORD)a4 )
        {
          v152 = sub_C4D00(a4);
          if ( v152 )
          {
            dword_251408 = a4;
            dword_244108 = 1332920885 * (((__int64)v152 - qword_251410) >> 3);
          }
        }
        *v149 = a2;
      }
      if ( (v151 & 1) != 0 )
      {
        a2 = 0xFFFFFFFFLL;
        invalidate_dbgmem_contents();
        a14 = 0;
        HIDWORD(qword_2511A0) = 0;
      }
      if ( (v151 & 2) != 0 )
        invalidate_dbgmem_config();
      if ( (v151 & 4) != 0 )
      {
        a4 = 232 * xmmword_251418;
        v153 = qword_251410;
        v154 = qword_251410 + 232 * xmmword_251418;
        if ( 232LL * (_QWORD)xmmword_251418 )
        {
          a4 = (unsigned int)dword_251360;
          do
          {
            if ( !*(_BYTE *)(v153 + 33) && !*(_BYTE *)(v153 + 32) )
              *(_DWORD *)(v153 + 36) = a4;
            v153 += 232;
          }
          while ( v153 != v154 );
        }
      }
      if ( (v151 & 0x8000) != 0 )
      {
        if ( v149 && dword_251408 )
        {
          sub_D2660((unsigned int)dword_251408, 0);
          goto LABEL_5;
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(15, a2, &callui, a4, v14, a14);
        sub_153E00();
        if ( (v151 & 4) != 0 )
        {
          sub_CE7D0();
          v155 = sub_C4D00(dword_251408);
          v156 = v155;
          if ( !v155 || (v157 = sub_CE480((__int64)v155, -1)) == 0 )
          {
LABEL_224:
            sub_14A060();
            if ( dbg && dword_2515A4 < 0 && dword_251408 )
              sub_BEA10(dword_251408);
            goto LABEL_5;
          }
          if ( (unsigned __int8)sub_C6760((__int64)v156, v156 + 5, dword_24411C) )
            sub_D0DD0(v157);
          if ( !(unsigned __int8)sub_C6760((__int64)v156, v156 + 5, dword_244118) )
          {
LABEL_221:
            v158 = 0;
            if ( v156[9] )
              v158 = v156[8];
            sub_D0110(v157, v158);
            goto LABEL_224;
          }
          v784 = dword_244118;
          if ( dword_244118 == -1 )
            goto LABEL_1027;
          v785 = *(_QWORD *)(v157 + 32LL * dword_244118 + 8);
          v786 = v785;
          if ( !dbg )
            goto LABEL_1026;
          if ( (*(_BYTE *)(dbg + 37LL) & 0x40) == 0 )
            goto LABEL_1026;
          v787 = qword_2515B0;
          if ( !qword_2515B0 )
            goto LABEL_1026;
          *(_DWORD *)qword_2515B0 = v785;
          v787[1] = v157;
          *((_DWORD *)v787 + 4) = v784;
          if ( (unsigned int)sub_CC780((__int64)v787, 11) != 1 )
LABEL_1027:
            v786 = -1;
          else
            v786 = *(_DWORD *)qword_2515B0;
LABEL_1026:
          dword_244124 = v786;
          goto LABEL_221;
        }
      }
LABEL_5:
      v17 = v789;
      sub_C8970((__int64)&v792);
      return v17;
    case 0x43Bu:
      v386 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v387 = *(__int64 ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v387 + 1;
      }
      else
      {
        v387 = (__int64 **)(*(_QWORD *)(a2 + 16) + v386);
        *(_DWORD *)a2 = v386 + 8;
      }
      if ( *v387 )
        sub_C1670(*v387);
      goto LABEL_5;
    case 0x43Cu:
      v384 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v385 = *(_QWORD ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v385 + 1;
      }
      else
      {
        v385 = (_QWORD **)(*(_QWORD *)(a2 + 16) + v384);
        *(_DWORD *)a2 = v384 + 8;
      }
      if ( *v385 )
        sub_C1750(*v385);
      goto LABEL_5;
    case 0x43Du:
      v388 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v389 = *(_DWORD **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v389 + 2;
      }
      else
      {
        v389 = (_DWORD *)(*(_QWORD *)(a2 + 16) + v388);
        *(_DWORD *)a2 = v388 + 8;
      }
      if ( dbg )
        sub_CB8A0(*v389 != 0);
      goto LABEL_5;
    case 0x43Eu:
      v161 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v711 = *(_BYTE ***)(a2 + 8);
        v712 = v711 + 1;
        *(_QWORD *)(a2 + 8) = v711 + 1;
        v164 = *v711;
      }
      else
      {
        v162 = *(_QWORD *)(a2 + 16);
        v163 = v161 + 8;
        *(_DWORD *)a2 = v163;
        v164 = *(_BYTE **)(v162 + v161);
        if ( (unsigned int)v163 <= 0x2F )
        {
          v165 = v161 + 16;
          *(_DWORD *)v15 = v165;
          v166 = *(_BYTE **)(v162 + v163);
          if ( (unsigned int)v165 <= 0x2F )
          {
            v167 = v161 + 24;
            *(_DWORD *)v15 = v167;
            v168 = *(_BYTE **)(v162 + v165);
            if ( (unsigned int)v167 <= 0x2F )
            {
              v169 = v161 + 32;
              *(_DWORD *)v15 = v169;
              v170 = *(_BYTE **)(v162 + v167);
              if ( (unsigned int)v169 <= 0x2F )
              {
                v171 = v161 + 40;
                *(_DWORD *)v15 = v171;
                v172 = *(_BYTE **)(v162 + v169);
                if ( (unsigned int)v171 <= 0x2F )
                {
                  *(_DWORD *)v15 = v161 + 48;
                  v173 = *(__int64 ***)(v15 + 8);
                  v174 = *(_DWORD *)(v162 + v171);
                  goto LABEL_238;
                }
                v716 = *(int **)(v15 + 8);
LABEL_854:
                v173 = (__int64 **)(v716 + 2);
                *(_QWORD *)(v15 + 8) = v716 + 2;
                v174 = *v716;
LABEL_238:
                *(_QWORD *)(v15 + 8) = v173 + 1;
                sub_E6E00(v164, v166, *v173, v168, v170, v172, v174);
                goto LABEL_5;
              }
              v715 = *(_BYTE ***)(v15 + 8);
LABEL_853:
              v716 = (int *)(v715 + 1);
              *(_QWORD *)(v15 + 8) = v715 + 1;
              v172 = *v715;
              goto LABEL_854;
            }
            v714 = *(_BYTE ***)(v15 + 8);
LABEL_852:
            v715 = v714 + 1;
            *(_QWORD *)(v15 + 8) = v714 + 1;
            v170 = *v714;
            goto LABEL_853;
          }
          v713 = *(_BYTE ***)(v15 + 8);
LABEL_851:
          v714 = v713 + 1;
          *(_QWORD *)(v15 + 8) = v713 + 1;
          v168 = *v713;
          goto LABEL_852;
        }
        v712 = *(_BYTE ***)(a2 + 8);
      }
      v713 = v712 + 1;
      *(_QWORD *)(a2 + 8) = v712 + 1;
      v166 = *v712;
      goto LABEL_851;
    case 0x43Fu:
      if ( dbg )
      {
        v645 = 0;
        if ( dword_2515A4 > 0 )
          v645 = (*(_BYTE *)(dbg + 32LL) & 0x40) != 0;
        LOBYTE(v789) = v645;
      }
      goto LABEL_5;
    case 0x440u:
      v447 = get_bpt_kernel_interface();
      LODWORD(v789) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v447 + 200LL))(v447);
      goto LABEL_5;
    case 0x441u:
      sub_C2210();
      goto LABEL_5;
    case 0x442u:
      v445 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v446 = *(_DWORD ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v446 + 1;
      }
      else
      {
        v446 = (_DWORD **)(*(_QWORD *)(a2 + 16) + v445);
        *(_DWORD *)a2 = v445 + 8;
      }
      LOBYTE(v789) = sub_CFC50(dword_244118, *v446);
      goto LABEL_5;
    case 0x443u:
      v443 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v444 = *(_DWORD ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v444 + 1;
      }
      else
      {
        v444 = (_DWORD **)(*(_QWORD *)(a2 + 16) + v443);
        *(_DWORD *)a2 = v443 + 8;
      }
      LOBYTE(v789) = sub_CFC50(dword_24411C, *v444);
      goto LABEL_5;
    case 0x444u:
      v280 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v745 = *(const char ***)(a2 + 8);
        v284 = (__int64 *)(v745 + 1);
        *(_QWORD *)(a2 + 8) = v745 + 1;
        v283 = *v745;
      }
      else
      {
        v281 = *(_QWORD *)(a2 + 16);
        v282 = v280 + 8;
        *(_DWORD *)a2 = v282;
        v283 = *(const char **)(v281 + v280);
        if ( (unsigned int)v282 <= 0x2F )
        {
          v284 = (__int64 *)(v282 + v281);
          *(_DWORD *)a2 = v280 + 16;
          goto LABEL_340;
        }
        v284 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v284 + 1;
LABEL_340:
      LOBYTE(v789) = sub_CECF0(v283, *v284);
      goto LABEL_5;
    case 0x445u:
      v792.m128i_i32[2] = 1094;
      v19 = 1;
      goto LABEL_332;
    case 0x446u:
      v19 = 0;
LABEL_332:
      v275 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v278 = (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL);
        *(_QWORD *)(a2 + 8) = v278;
      }
      else
      {
        v276 = *(_QWORD *)(a2 + 16);
        v277 = v275 + 8;
        *(_DWORD *)a2 = v277;
        if ( (unsigned int)v277 <= 0x2F )
        {
          v278 = (__int64 *)(v277 + v276);
          *(_DWORD *)a2 = v275 + 16;
          goto LABEL_335;
        }
        v278 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v278 + 1;
LABEL_335:
      v279 = *v278;
      v794 = qstrdup();
      v795 = 0;
      if ( !v279 )
        goto LABEL_25;
      v222 = operator new(0x20u);
      sub_C03C0(v222, v279);
LABEL_279:
      v795 = v222;
      v28 = v792.m128i_i32[2];
      goto LABEL_26;
    case 0x447u:
      v655 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v709 = *(signed int **)(a2 + 8);
        v710 = (__int64 *)(v709 + 2);
        *(_QWORD *)(a2 + 8) = v709 + 2;
        v658 = *v709;
      }
      else
      {
        v656 = *(_QWORD *)(a2 + 16);
        v657 = v655 + 8;
        *(_DWORD *)v15 = v657;
        v658 = *(_DWORD *)(v656 + v655);
        if ( (unsigned int)v657 <= 0x2F )
        {
          v659 = v655 + 16;
          *(_DWORD *)v15 = v659;
          v660 = *(_QWORD *)(v656 + v657);
          if ( (unsigned int)v659 <= 0x2F )
          {
            v661 = (__int64 *)(v659 + v656);
            *(_DWORD *)v15 = v655 + 24;
            goto LABEL_717;
          }
          v661 = *(__int64 **)(v15 + 8);
LABEL_848:
          *(_QWORD *)(v15 + 8) = v661 + 1;
LABEL_717:
          LOBYTE(v789) = sub_ADA70(v658, v660, *v661);
          goto LABEL_5;
        }
        v710 = *(__int64 **)(v15 + 8);
      }
      v661 = v710 + 1;
      *(_QWORD *)(v15 + 8) = v710 + 1;
      v660 = *v710;
      goto LABEL_848;
    case 0x448u:
      v488 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v699 = *(signed int **)(a2 + 8);
        v700 = (__int64 *)(v699 + 2);
        *(_QWORD *)(a2 + 8) = v699 + 2;
        v491 = *v699;
      }
      else
      {
        v489 = *(_QWORD *)(a2 + 16);
        v490 = v488 + 8;
        *(_DWORD *)v15 = v490;
        v491 = *(_DWORD *)(v489 + v488);
        if ( (unsigned int)v490 <= 0x2F )
        {
          v492 = v488 + 16;
          *(_DWORD *)v15 = v492;
          v493 = *(_QWORD *)(v489 + v490);
          if ( (unsigned int)v492 <= 0x2F )
          {
            v494 = (__int64 *)(v492 + v489);
            *(_DWORD *)v15 = v488 + 24;
            goto LABEL_556;
          }
          v494 = *(__int64 **)(v15 + 8);
LABEL_822:
          *(_QWORD *)(v15 + 8) = v494 + 1;
LABEL_556:
          LOBYTE(v789) = sub_AD570(v491, v493, *v494);
          goto LABEL_5;
        }
        v700 = *(__int64 **)(v15 + 8);
      }
      v494 = v700 + 1;
      *(_QWORD *)(v15 + 8) = v700 + 1;
      v493 = *v700;
      goto LABEL_822;
    case 0x449u:
      v599 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v600 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v600 + 1;
      }
      else
      {
        v600 = (__int64 *)(*(_QWORD *)(a2 + 16) + v599);
        *(_DWORD *)a2 = v599 + 8;
      }
      LOBYTE(v789) = sub_C3180(*v600);
      goto LABEL_5;
    case 0x44Au:
      v342 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v343 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v343 + 1;
      }
      else
      {
        v343 = (__int64 *)(*(_QWORD *)(a2 + 16) + v342);
        *(_DWORD *)a2 = v342 + 8;
      }
      v344 = (char *)qword_251430;
      v345 = *v343;
      v346 = (char *)qword_251430 + 8 * xmmword_251438;
      if ( qword_251430 == v346 )
        goto LABEL_767;
      while ( v345 != *(_QWORD *)v344 )
      {
        v344 += 8;
        if ( v346 == v344 )
          goto LABEL_767;
      }
      if ( v346 != v344 )
      {
        memmove(v344, v344 + 8, v346 - v344 - 8);
        *(_QWORD *)&xmmword_251438 = xmmword_251438 - 1;
        v347 = 1;
        goto LABEL_410;
      }
LABEL_767:
      v347 = 0;
LABEL_410:
      LOBYTE(v789) = v347;
      goto LABEL_5;
    case 0x44Bu:
      v337 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v679 = *(__int64 **)(a2 + 8);
        v340 = (int *)(v679 + 1);
        *(_QWORD *)(a2 + 8) = v679 + 1;
        v339 = *v679;
      }
      else
      {
        v338 = *(_QWORD *)(a2 + 16);
        a4 = v337 + 8;
        *(_DWORD *)a2 = a4;
        v339 = *(_QWORD *)(v338 + v337);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v340 = (int *)(a4 + v338);
          *(_DWORD *)a2 = v337 + 16;
          goto LABEL_399;
        }
        v340 = *(int **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v340 + 2;
LABEL_399:
      if ( dbg )
        v341 = sub_C7890(v339, *v340, (__int64)v340, a4, v14, a14);
      else
        v341 = -1;
      LODWORD(v789) = v341;
      goto LABEL_5;
    case 0x44Cu:
      v335 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v336 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v336 + 1;
      }
      else
      {
        v336 = (__int64 *)(*(_QWORD *)(a2 + 16) + v335);
        *(_DWORD *)a2 = v335 + 8;
      }
      LOBYTE(v789) = sub_C53A0(*v336, 1);
      goto LABEL_5;
    case 0x44Du:
      v662 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v663 = *(unsigned int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v663 + 2;
      }
      else
      {
        v663 = (unsigned int *)(*(_QWORD *)(a2 + 16) + v662);
        *(_DWORD *)a2 = v662 + 8;
      }
      LOBYTE(v789) = sub_C5840(*v663, 1);
      goto LABEL_5;
    case 0x44Eu:
      v625 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v694 = *(_QWORD *)(a2 + 8) + 8LL;
        *(_QWORD *)(a2 + 8) = v694;
      }
      else
      {
        *(_DWORD *)a2 = v625 + 8;
        if ( v625 + 8 <= 0x2F )
        {
          *(_DWORD *)a2 = v625 + 16;
          goto LABEL_686;
        }
        v694 = *(_QWORD *)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v694 + 8;
LABEL_686:
      LODWORD(v789) = compare_bpt_locs();
      goto LABEL_5;
    case 0x44Fu:
    case 0x471u:
      goto LABEL_5;
    case 0x450u:
      v426 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v427 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v427 + 1;
      }
      else
      {
        v427 = (__int64 *)(*(_QWORD *)(a2 + 16) + v426);
        *(_DWORD *)a2 = v426 + 8;
      }
      v428 = *v427;
      v429 = get_bpt_kernel_interface();
      LODWORD(v789) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v429 + 72LL))(v429, v428);
      goto LABEL_5;
    case 0x451u:
      v422 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v423 = *(unsigned int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v423 + 2;
      }
      else
      {
        v423 = (unsigned int *)(*(_QWORD *)(a2 + 16) + v422);
        *(_DWORD *)a2 = v422 + 8;
      }
      v424 = *v423;
      v425 = get_bpt_kernel_interface();
      v789 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v425 + 80LL))(v425, v424);
      goto LABEL_5;
    case 0x452u:
      v653 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v654 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v654 + 1;
      }
      else
      {
        v654 = (__int64 *)(*(_QWORD *)(a2 + 16) + v653);
        *(_DWORD *)a2 = v653 + 8;
      }
      sub_CE0B0(*v654);
      goto LABEL_5;
    case 0x453u:
      v569 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v570 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v570 + 2;
      }
      else
      {
        v570 = (int *)(*(_QWORD *)(a2 + 16) + v569);
        *(_DWORD *)a2 = v569 + 8;
      }
      LODWORD(v789) = sub_CD690(*v570);
      goto LABEL_5;
    case 0x454u:
      v646 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v707 = *(__int64 **)(a2 + 8);
        v708 = (int *)(v707 + 1);
        *(_QWORD *)(a2 + 8) = v707 + 1;
        v649 = *v707;
      }
      else
      {
        v647 = *(_QWORD *)(a2 + 16);
        v648 = v646 + 8;
        *(_DWORD *)v15 = v648;
        v649 = *(_QWORD *)(v647 + v646);
        if ( (unsigned int)v648 <= 0x2F )
        {
          v650 = v646 + 16;
          *(_DWORD *)v15 = v650;
          v651 = *(_DWORD *)(v647 + v648);
          if ( (unsigned int)v650 <= 0x2F )
          {
            v652 = (int *)(v650 + v647);
            *(_DWORD *)v15 = v646 + 24;
            goto LABEL_709;
          }
          v652 = *(int **)(v15 + 8);
LABEL_844:
          *(_QWORD *)(v15 + 8) = v652 + 2;
LABEL_709:
          LODWORD(v789) = sub_CCE10(v649, v651, *v652);
          goto LABEL_5;
        }
        v708 = *(int **)(v15 + 8);
      }
      v652 = v708 + 2;
      *(_QWORD *)(v15 + 8) = v708 + 2;
      v651 = *v708;
      goto LABEL_844;
    case 0x455u:
      v241 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v695 = *(int **)(a2 + 8);
        v696 = (__int64 *)(v695 + 2);
        *(_QWORD *)(a2 + 8) = v695 + 2;
        v244 = *v695;
      }
      else
      {
        v242 = *(_QWORD *)(a2 + 16);
        v243 = v241 + 8;
        *(_DWORD *)v15 = v243;
        v244 = *(_DWORD *)(v242 + v241);
        if ( (unsigned int)v243 <= 0x2F )
        {
          v245 = v241 + 16;
          *(_DWORD *)v15 = v245;
          v246 = *(_QWORD *)(v242 + v243);
          if ( (unsigned int)v245 <= 0x2F )
          {
            v247 = v241 + 24;
            *(_DWORD *)v15 = v247;
            v248 = *(_QWORD *)(v242 + v245);
            if ( (unsigned int)v247 <= 0x2F )
            {
              v249 = v241 + 32;
              *(_DWORD *)v15 = v249;
              v250 = *(_QWORD *)(v242 + v247);
              if ( (unsigned int)v249 <= 0x2F )
              {
                v251 = (__int64 *)(v249 + v242);
                *(_DWORD *)v15 = v241 + 40;
                goto LABEL_300;
              }
              v251 = *(__int64 **)(v15 + 8);
LABEL_818:
              *(_QWORD *)(v15 + 8) = v251 + 1;
LABEL_300:
              if ( dbg )
                v252 = sub_CDBB0(v244, v246, v248, v250, *v251);
              else
                v252 = -1;
              LODWORD(v789) = v252;
              goto LABEL_5;
            }
            v698 = *(__int64 **)(v15 + 8);
LABEL_817:
            v251 = v698 + 1;
            *(_QWORD *)(v15 + 8) = v698 + 1;
            v250 = *v698;
            goto LABEL_818;
          }
          v697 = *(__int64 **)(v15 + 8);
LABEL_816:
          v698 = v697 + 1;
          *(_QWORD *)(v15 + 8) = v697 + 1;
          v248 = *v697;
          goto LABEL_817;
        }
        v696 = *(__int64 **)(v15 + 8);
      }
      v697 = v696 + 1;
      *(_QWORD *)(v15 + 8) = v696 + 1;
      v246 = *v696;
      goto LABEL_816;
    case 0x456u:
      v616 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v691 = *(int **)(a2 + 8);
        v692 = (__int64 *)(v691 + 2);
        *(_QWORD *)(a2 + 8) = v691 + 2;
        v619 = *v691;
      }
      else
      {
        v617 = *(_QWORD *)(a2 + 16);
        v618 = v616 + 8;
        *(_DWORD *)v15 = v618;
        v619 = *(_DWORD *)(v617 + v616);
        if ( (unsigned int)v618 <= 0x2F )
        {
          v620 = v616 + 16;
          *(_DWORD *)v15 = v620;
          v621 = *(_QWORD *)(v617 + v618);
          if ( (unsigned int)v620 <= 0x2F )
          {
            v622 = (__int64 *)(v620 + v617);
            *(_DWORD *)v15 = v616 + 24;
            goto LABEL_679;
          }
          v622 = *(__int64 **)(v15 + 8);
LABEL_806:
          *(_QWORD *)(v15 + 8) = v622 + 1;
LABEL_679:
          v789 = (__int64 *)sub_CD640(v619, v621, *v622);
          goto LABEL_5;
        }
        v692 = *(__int64 **)(v15 + 8);
      }
      v622 = v692 + 1;
      *(_QWORD *)(v15 + 8) = v692 + 1;
      v621 = *v692;
      goto LABEL_806;
    case 0x457u:
      v606 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v746 = *(_DWORD **)(a2 + 8);
        v747 = (__int64 *)(v746 + 2);
        *(_QWORD *)(a2 + 8) = v746 + 2;
        v609 = *v746;
      }
      else
      {
        v607 = *(_QWORD *)(a2 + 16);
        v608 = v606 + 8;
        *(_DWORD *)v15 = v608;
        v609 = *(_DWORD *)(v607 + v606);
        if ( (unsigned int)v608 <= 0x2F )
        {
          v610 = v606 + 16;
          *(_DWORD *)v15 = v610;
          v611 = *(_QWORD *)(v607 + v608);
          if ( (unsigned int)v610 <= 0x2F )
          {
            v612 = (__int64 *)(v610 + v607);
            *(_DWORD *)v15 = v606 + 24;
            goto LABEL_671;
          }
          v612 = *(__int64 **)(v15 + 8);
LABEL_921:
          *(_QWORD *)(v15 + 8) = v612 + 1;
LABEL_671:
          v613 = qword_2515B0;
          v614 = *v612;
          if ( qword_2515B0
            && (*((_QWORD *)qword_2515B0 + 1) = v611,
                *(_DWORD *)v613 = v609,
                v613[2] = v614,
                (int)sub_CC780((__int64)v613, 20) > 0) )
          {
            v615 = *((_QWORD *)qword_2515B0 + 2);
          }
          else
          {
            v615 = -1;
          }
          v789 = (__int64 *)v615;
          goto LABEL_5;
        }
        v747 = *(__int64 **)(v15 + 8);
      }
      v612 = v747 + 1;
      *(_QWORD *)(v15 + 8) = v747 + 1;
      v611 = *v747;
      goto LABEL_921;
    case 0x458u:
      v374 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v683 = *(int **)(a2 + 8);
        v684 = v683 + 2;
        *(_QWORD *)(a2 + 8) = v683 + 2;
        v377 = *v683;
      }
      else
      {
        v375 = *(_QWORD *)(a2 + 16);
        v376 = v374 + 8;
        *(_DWORD *)v15 = v376;
        v377 = *(_DWORD *)(v375 + v374);
        if ( (unsigned int)v376 <= 0x2F )
        {
          v378 = v374 + 16;
          *(_DWORD *)v15 = v378;
          v379 = *(_DWORD *)(v375 + v376);
          if ( (unsigned int)v378 <= 0x2F )
          {
            v380 = (__int64 *)(v378 + v375);
            *(_DWORD *)v15 = v374 + 24;
            goto LABEL_441;
          }
          v380 = *(__int64 **)(v15 + 8);
LABEL_791:
          *(_QWORD *)(v15 + 8) = v380 + 1;
LABEL_441:
          v381 = qword_2515B0;
          v382 = *v380;
          if ( qword_2515B0 )
          {
            *((_DWORD *)qword_2515B0 + 6) = v379;
            *(_DWORD *)v381 = v377;
            v381[4] = v382;
            v383 = sub_CC780((__int64)v381, 16);
          }
          else
          {
            v383 = -1;
          }
          LODWORD(v789) = v383;
          goto LABEL_5;
        }
        v684 = *(_DWORD **)(v15 + 8);
      }
      v380 = (__int64 *)(v684 + 2);
      *(_QWORD *)(v15 + 8) = v684 + 2;
      v379 = *v684;
      goto LABEL_791;
    case 0x459u:
      v497 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v702 = *(int **)(a2 + 8);
        v703 = v702 + 2;
        *(_QWORD *)(a2 + 8) = v702 + 2;
        v500 = *v702;
      }
      else
      {
        v498 = *(_QWORD *)(a2 + 16);
        v499 = v497 + 8;
        *(_DWORD *)v15 = v499;
        v500 = *(_DWORD *)(v498 + v497);
        if ( (unsigned int)v499 <= 0x2F )
        {
          v501 = v497 + 16;
          *(_DWORD *)v15 = v501;
          v502 = *(_DWORD *)(v498 + v499);
          if ( (unsigned int)v501 <= 0x2F )
          {
            v503 = (__int64 *)(v501 + v498);
            *(_DWORD *)v15 = v497 + 24;
            goto LABEL_567;
          }
          v503 = *(__int64 **)(v15 + 8);
LABEL_832:
          *(_QWORD *)(v15 + 8) = v503 + 1;
LABEL_567:
          v504 = qword_2515B0;
          v505 = *v503;
          if ( qword_2515B0 )
          {
            *((_DWORD *)qword_2515B0 + 7) = v502;
            *(_DWORD *)v504 = v500;
            v504[5] = v505;
            v506 = sub_CC780((__int64)v504, 17);
          }
          else
          {
            v506 = -1;
          }
          LODWORD(v789) = v506;
          goto LABEL_5;
        }
        v703 = *(_DWORD **)(v15 + 8);
      }
      v503 = (__int64 *)(v703 + 2);
      *(_QWORD *)(v15 + 8) = v703 + 2;
      v502 = *v703;
      goto LABEL_832;
    case 0x45Au:
      v372 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v373 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v373 + 1;
      }
      else
      {
        v373 = (__int64 *)(*(_QWORD *)(a2 + 16) + v372);
        *(_DWORD *)a2 = v372 + 8;
      }
      LODWORD(v789) = sub_CD600(*v373);
      goto LABEL_5;
    case 0x45Bu:
      v561 = s1;
      if ( xmmword_251550 )
        v561 = (const char *)qword_251548;
      v789 = (__int64 *)v561;
      goto LABEL_5;
    case 0x45Cu:
      v556 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v557 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v557 + 1;
      }
      else
      {
        v557 = (__int64 *)(*(_QWORD *)(a2 + 16) + v556);
        *(_DWORD *)a2 = v556 + 8;
      }
      v558 = *v557;
      v559 = get_bpt_kernel_interface();
      (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v559 + 96LL))(v559, &qword_251540, v558);
      v560 = (char *)s1;
      if ( xmmword_251550 )
        v560 = (char *)qword_251548;
      sub_E6750(v560, "EventCnd", 0);
      goto LABEL_5;
    case 0x45Du:
      v792.m128i_i32[2] = 1118;
      v19 = 1;
      goto LABEL_498;
    case 0x45Eu:
      v19 = 0;
LABEL_498:
      v436 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v437 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v437 + 1;
      }
      else
      {
        v437 = (__int64 *)(*(_QWORD *)(a2 + 16) + v436);
        *(_DWORD *)a2 = v436 + 8;
      }
      v438 = *v437;
      v439 = operator new(0xCu);
      *(_QWORD *)v439 = *(_QWORD *)v438;
      v440 = *(_DWORD *)(v438 + 8);
      v794 = v439;
      *(_DWORD *)(v439 + 8) = v440;
      v441 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v442 = *(_DWORD **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v442 + 2;
      }
      else
      {
        v442 = (_DWORD *)(*(_QWORD *)(a2 + 16) + v441);
        *(_DWORD *)a2 = v441 + 8;
      }
      v28 = v792.m128i_i32[2];
      LOBYTE(v795) = *v442 != 0;
      goto LABEL_26;
    case 0x45Fu:
      v792.m128i_i32[2] = 1120;
      v19 = 1;
      goto LABEL_494;
    case 0x460u:
      v19 = 0;
LABEL_494:
      v431 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v432 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v432 + 1;
      }
      else
      {
        v432 = (__int64 *)(*(_QWORD *)(a2 + 16) + v431);
        *(_DWORD *)a2 = v431 + 8;
      }
      v433 = *v432;
      v434 = operator new(0xCu);
      *(_QWORD *)v434 = *(_QWORD *)v433;
      v435 = *(_DWORD *)(v433 + 8);
      v794 = v434;
      *(_DWORD *)(v434 + 8) = v435;
      v28 = v792.m128i_i32[2];
      goto LABEL_26;
    case 0x464u:
      if ( dbg && *(char *)(dbg + 34LL) < 0 )
      {
        sub_9E0A0();
      }
      else
      {
        v507 = sub_C4D00(dword_251408);
        v508 = 0;
        if ( v507 )
          v508 = (*((_BYTE *)v507 + 153) & 8) != 0;
        LOBYTE(v789) = v508;
      }
      goto LABEL_5;
    case 0x465u:
      v792.m128i_i32[2] = 1126;
      v19 = 1;
LABEL_17:
      v24 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v25 = *(_DWORD **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v25 + 2;
      }
      else
      {
        v25 = (_DWORD *)(*(_QWORD *)(a2 + 16) + v24);
        *(_DWORD *)a2 = v24 + 8;
      }
      LOBYTE(v795) = *v25 != 0;
      goto LABEL_10;
    case 0x467u:
      LODWORD(v789) = sub_A3CA0();
      goto LABEL_5;
    case 0x468u:
      v792.m128i_i32[2] = 1129;
      v19 = 1;
LABEL_7:
      v20 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v21 = *(_DWORD **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v21 + 2;
      }
      else
      {
        v21 = (_DWORD *)(*(_QWORD *)(a2 + 16) + v20);
        *(_DWORD *)a2 = v20 + 8;
      }
      LODWORD(v794) = *v21;
      goto LABEL_10;
    case 0x46Au:
      v551 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v701 = *(__int64 **)(a2 + 8);
        v555 = (const void **)(v701 + 1);
        *(_QWORD *)(a2 + 8) = v701 + 1;
        v554 = *v701;
      }
      else
      {
        v552 = *(_QWORD *)(a2 + 16);
        v553 = v551 + 8;
        *(_DWORD *)a2 = v553;
        v554 = *(_QWORD *)(v552 + v551);
        if ( (unsigned int)v553 <= 0x2F )
        {
          v555 = (const void **)(v553 + v552);
          *(_DWORD *)a2 = v551 + 16;
          goto LABEL_613;
        }
        v555 = *(const void ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v555 + 1;
LABEL_613:
      LOBYTE(v789) = sub_B01B0(v554, *v555);
      goto LABEL_5;
    case 0x46Bu:
      v328 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v690 = *(__int64 **)(a2 + 8);
        v332 = v690 + 1;
        *(_QWORD *)(a2 + 8) = v690 + 1;
        v331 = *v690;
      }
      else
      {
        v329 = *(_QWORD *)(a2 + 16);
        v330 = v328 + 8;
        *(_DWORD *)a2 = v330;
        v331 = *(_QWORD *)(v329 + v328);
        if ( (unsigned int)v330 <= 0x2F )
        {
          v332 = (__int64 *)(v330 + v329);
          *(_DWORD *)a2 = v328 + 16;
          goto LABEL_387;
        }
        v332 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v332 + 1;
LABEL_387:
      if ( *v332 )
        LOBYTE(v789) = sub_A5C90(v331, *v332);
      goto LABEL_5;
    case 0x46Cu:
      v326 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v327 = *(const void ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v327 + 1;
      }
      else
      {
        v327 = (const void **)(*(_QWORD *)(a2 + 16) + v326);
        *(_DWORD *)a2 = v326 + 8;
      }
      LOBYTE(v789) = sub_B5C80(*v327, a5, a6);
      goto LABEL_5;
    case 0x46Du:
      v321 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v705 = *(const void ***)(a2 + 8);
        v325 = (__int64 *)(v705 + 1);
        *(_QWORD *)(a2 + 8) = v705 + 1;
        v324 = *v705;
      }
      else
      {
        v322 = *(_QWORD *)(a2 + 16);
        v323 = v321 + 8;
        *(_DWORD *)a2 = v323;
        v324 = *(const void **)(v322 + v321);
        if ( (unsigned int)v323 <= 0x2F )
        {
          v325 = (__int64 *)(v323 + v322);
          *(_DWORD *)a2 = v321 + 16;
          goto LABEL_380;
        }
        v325 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v325 + 1;
LABEL_380:
      LOBYTE(v789) = sub_B6140(v324, *v325, a5, a6);
      goto LABEL_5;
    case 0x46Eu:
      v316 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v704 = *(__int64 **)(a2 + 8);
        v320 = (const void **)(v704 + 1);
        *(_QWORD *)(a2 + 8) = v704 + 1;
        v319 = *v704;
      }
      else
      {
        v317 = *(_QWORD *)(a2 + 16);
        v318 = v316 + 8;
        *(_DWORD *)a2 = v318;
        v319 = *(_QWORD *)(v317 + v316);
        if ( (unsigned int)v318 <= 0x2F )
        {
          v320 = (const void **)(v318 + v317);
          *(_DWORD *)a2 = v316 + 16;
          goto LABEL_376;
        }
        v320 = *(const void ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v320 + 1;
LABEL_376:
      LOBYTE(v789) = sub_B66D0(v319, *v320, a5, a6);
      goto LABEL_5;
    case 0x46Fu:
      v314 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v315 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v315 + 1;
      }
      else
      {
        v315 = (__int64 *)(*(_QWORD *)(a2 + 16) + v314);
        *(_DWORD *)a2 = v314 + 8;
      }
      LOBYTE(v789) = sub_9FDA0(*v315);
      goto LABEL_5;
    case 0x470u:
      v410 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v411 = *(const void ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v411 + 1;
      }
      else
      {
        v411 = (const void **)(*(_QWORD *)(a2 + 16) + v410);
        *(_DWORD *)a2 = v410 + 8;
      }
      LOBYTE(v789) = sub_B0100(*v411);
      goto LABEL_5;
    case 0x472u:
      v405 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v751 = *(unsigned int **)(a2 + 8);
        v409 = (__int64 **)(v751 + 2);
        *(_QWORD *)(a2 + 8) = v751 + 2;
        v408 = *v751;
      }
      else
      {
        v406 = *(_QWORD *)(a2 + 16);
        v407 = v405 + 8;
        *(_DWORD *)a2 = v407;
        v408 = *(_DWORD *)(v406 + v405);
        if ( (unsigned int)v407 <= 0x2F )
        {
          v409 = (__int64 **)(v407 + v406);
          *(_DWORD *)a2 = v405 + 16;
          goto LABEL_474;
        }
        v409 = *(__int64 ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v409 + 1;
LABEL_474:
      LOBYTE(v789) = sub_A4580(v408, *v409);
      goto LABEL_5;
    case 0x473u:
      v546 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v737 = *(unsigned int **)(a2 + 8);
        v550 = (__int64 *)(v737 + 2);
        *(_QWORD *)(a2 + 8) = v737 + 2;
        v549 = *v737;
      }
      else
      {
        v547 = *(_QWORD *)(a2 + 16);
        v548 = v546 + 8;
        *(_DWORD *)a2 = v548;
        v549 = *(_DWORD *)(v547 + v546);
        if ( (unsigned int)v548 <= 0x2F )
        {
          v550 = (__int64 *)(v548 + v547);
          *(_DWORD *)a2 = v546 + 16;
          goto LABEL_609;
        }
        v550 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v550 + 1;
LABEL_609:
      v404 = sub_A4B00(v549, *v550);
      goto LABEL_469;
    case 0x474u:
      v399 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v752 = *(unsigned int **)(a2 + 8);
        v403 = (__int64 **)(v752 + 2);
        *(_QWORD *)(a2 + 8) = v752 + 2;
        v402 = *v752;
      }
      else
      {
        v400 = *(_QWORD *)(a2 + 16);
        v401 = v399 + 8;
        *(_DWORD *)a2 = v401;
        v402 = *(_DWORD *)(v400 + v399);
        if ( (unsigned int)v401 <= 0x2F )
        {
          v403 = (__int64 **)(v401 + v400);
          *(_DWORD *)a2 = v399 + 16;
          goto LABEL_468;
        }
        v403 = *(__int64 ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v403 + 1;
LABEL_468:
      v404 = sub_A4240(v402, *v403);
LABEL_469:
      LOBYTE(v789) = v404;
      if ( v792.m128i_i32[2] )
        goto LABEL_3;
      goto LABEL_5;
    case 0x475u:
      v229 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v685 = *(_DWORD **)(a2 + 8);
        v233 = (__int64 *)(v685 + 2);
        *(_QWORD *)(a2 + 8) = v685 + 2;
        v232 = *v685;
      }
      else
      {
        v230 = *(_QWORD *)(a2 + 16);
        v231 = v229 + 8;
        *(_DWORD *)a2 = v231;
        v232 = *(_DWORD *)(v230 + v229);
        if ( (unsigned int)v231 <= 0x2F )
        {
          v233 = (__int64 *)(v231 + v230);
          *(_DWORD *)a2 = v229 + 16;
          goto LABEL_287;
        }
        v233 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v233 + 1;
LABEL_287:
      v234 = *v233;
      v235 = get_bpt_kernel_interface();
      v236 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v235 + 184LL))(v235, v232);
      LOBYTE(v789) = v236 != 0;
      if ( v234 && v236 )
      {
        *(_QWORD *)v234 = *(_QWORD *)v236;
        sub_BB080(v234 + 8, v236 + 8);
        *(_QWORD *)(v234 + 32) = *(_QWORD *)(v236 + 32);
        *(_DWORD *)(v234 + 40) = *(_DWORD *)(v236 + 40);
        *(_DWORD *)(v234 + 44) = *(_DWORD *)(v236 + 44);
        *(_DWORD *)(v234 + 48) = *(_DWORD *)(v236 + 48);
        *(_DWORD *)(v234 + 52) = *(_DWORD *)(v236 + 52);
        *(_DWORD *)(v234 + 56) = *(_DWORD *)(v236 + 56);
        *(_DWORD *)(v234 + 60) = *(_DWORD *)(v236 + 60);
        *(_DWORD *)(v234 + 64) = *(_DWORD *)(v236 + 64);
        *(_DWORD *)(v234 + 68) = *(_DWORD *)(v236 + 68);
        *(_DWORD *)(v234 + 72) = *(_DWORD *)(v236 + 72);
        *(_DWORD *)(v234 + 76) = *(_DWORD *)(v236 + 76);
        *(_DWORD *)(v234 + 80) = *(_DWORD *)(v236 + 80);
      }
      goto LABEL_5;
    case 0x476u:
      v224 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v729 = *(unsigned int **)(a2 + 8);
        v228 = (__int64 *)(v729 + 2);
        *(_QWORD *)(a2 + 8) = v729 + 2;
        v227 = *v729;
      }
      else
      {
        v225 = *(_QWORD *)(a2 + 16);
        v226 = v224 + 8;
        *(_DWORD *)a2 = v226;
        v227 = *(_DWORD *)(v225 + v224);
        if ( (unsigned int)v226 <= 0x2F )
        {
          v228 = (__int64 *)(v226 + v225);
          *(_DWORD *)a2 = v224 + 16;
          goto LABEL_283;
        }
        v228 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v228 + 1;
LABEL_283:
      LOBYTE(v789) = sub_98300(v227, *v228);
      goto LABEL_5;
    case 0x477u:
      v538 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v740 = *(__int64 **)(a2 + 8);
        v542 = v740 + 1;
        *(_QWORD *)(a2 + 8) = v740 + 1;
        v541 = *v740;
      }
      else
      {
        v539 = *(_QWORD *)(a2 + 16);
        v540 = v538 + 8;
        *(_DWORD *)a2 = v540;
        v541 = *(_QWORD *)(v539 + v538);
        if ( (unsigned int)v540 <= 0x2F )
        {
          v542 = (__int64 *)(v540 + v539);
          *(_DWORD *)a2 = v538 + 16;
          goto LABEL_602;
        }
        v542 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v542 + 1;
LABEL_602:
      v543 = *v542;
      v544 = get_bpt_kernel_interface();
      v545 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v544 + 280LL))(v544, v541);
      if ( v543 && v545 )
      {
        *(_QWORD *)v543 = *(_QWORD *)v545;
        sub_BB080(v543 + 8, v545 + 8);
        *(_QWORD *)(v543 + 32) = *(_QWORD *)(v545 + 32);
        *(_DWORD *)(v543 + 40) = *(_DWORD *)(v545 + 40);
        *(_DWORD *)(v543 + 44) = *(_DWORD *)(v545 + 44);
        *(_DWORD *)(v543 + 48) = *(_DWORD *)(v545 + 48);
        *(_DWORD *)(v543 + 52) = *(_DWORD *)(v545 + 52);
        *(_DWORD *)(v543 + 56) = *(_DWORD *)(v545 + 56);
        *(_DWORD *)(v543 + 60) = *(_DWORD *)(v545 + 60);
        *(_DWORD *)(v543 + 64) = *(_DWORD *)(v545 + 64);
        *(_DWORD *)(v543 + 68) = *(_DWORD *)(v545 + 68);
        *(_DWORD *)(v543 + 72) = *(_DWORD *)(v545 + 72);
        *(_DWORD *)(v543 + 76) = *(_DWORD *)(v545 + 76);
        *(_DWORD *)(v543 + 80) = *(_DWORD *)(v545 + 80);
      }
      LOBYTE(v789) = v545 != 0;
      goto LABEL_5;
    case 0x478u:
      v792.m128i_i32[2] = 1145;
      v19 = 1;
      goto LABEL_276;
    case 0x479u:
      v19 = 0;
LABEL_276:
      v219 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v220 = *(__int64 ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v220 + 1;
      }
      else
      {
        v220 = (__int64 **)(*(_QWORD *)(a2 + 16) + v219);
        *(_DWORD *)a2 = v219 + 8;
      }
      v221 = *v220;
      v222 = operator new(0x58u);
      v223 = *v221;
      *(_QWORD *)(v222 + 8) = 0;
      *(_QWORD *)v222 = v223;
      *(_OWORD *)(v222 + 16) = 0;
      sub_B83C0((_QWORD *)(v222 + 8), (__int64)(v221 + 1));
      *(_QWORD *)(v222 + 32) = v221[4];
      *(_DWORD *)(v222 + 40) = *((_DWORD *)v221 + 10);
      *(_QWORD *)(v222 + 44) = *(__int64 *)((char *)v221 + 44);
      *(_QWORD *)(v222 + 52) = *(__int64 *)((char *)v221 + 52);
      *(_QWORD *)(v222 + 60) = *(__int64 *)((char *)v221 + 60);
      *(_QWORD *)(v222 + 68) = *(__int64 *)((char *)v221 + 68);
      *(_QWORD *)(v222 + 76) = *(__int64 *)((char *)v221 + 76);
      goto LABEL_279;
    case 0x47Au:
      v641 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v642 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v642 + 1;
      }
      else
      {
        v642 = (__int64 *)(*(_QWORD *)(a2 + 16) + v641);
        *(_DWORD *)a2 = v641 + 8;
      }
      v643 = *v642;
      v644 = get_bpt_kernel_interface();
      LOBYTE(v789) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v644 + 264LL))(v644, v643);
      goto LABEL_5;
    case 0x47Bu:
      v634 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v706 = *(_QWORD **)(a2 + 8);
        v638 = (unsigned int *)(v706 + 1);
        *(_QWORD *)(a2 + 8) = v706 + 1;
        v637 = *v706;
      }
      else
      {
        v635 = *(_QWORD *)(a2 + 16);
        v636 = v634 + 8;
        *(_DWORD *)a2 = v636;
        v637 = *(_QWORD *)(v635 + v634);
        if ( (unsigned int)v636 <= 0x2F )
        {
          v638 = (unsigned int *)(v636 + v635);
          *(_DWORD *)a2 = v634 + 16;
          goto LABEL_697;
        }
        v638 = *(unsigned int **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v638 + 2;
LABEL_697:
      v639 = *v638;
      v640 = get_bpt_kernel_interface();
      LODWORD(v789) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v640 + 384LL))(v640, v637, v639);
      goto LABEL_5;
    case 0x47Cu:
      v304 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v735 = *(signed int **)(a2 + 8);
        v308 = (int **)(v735 + 2);
        *(_QWORD *)(a2 + 8) = v735 + 2;
        v307 = *v735;
      }
      else
      {
        v305 = *(_QWORD *)(a2 + 16);
        v306 = v304 + 8;
        *(_DWORD *)a2 = v306;
        v307 = *(_DWORD *)(v305 + v304);
        if ( (unsigned int)v306 <= 0x2F )
        {
          v308 = (int **)(v306 + v305);
          *(_DWORD *)a2 = v304 + 16;
          goto LABEL_362;
        }
        v308 = *(int ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v308 + 1;
LABEL_362:
      v309 = *v308;
      v310 = sub_A4150(v307, &v790);
      v311 = -1;
      if ( v310 )
        v311 = v791;
      *v309 = v311;
      goto LABEL_5;
    case 0x47Du:
      v301 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v302 = *(signed int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v302 + 2;
      }
      else
      {
        v302 = (signed int *)(*(_QWORD *)(a2 + 16) + v301);
        *(_DWORD *)a2 = v301 + 8;
      }
      v303 = *v302;
      LODWORD(v789) = -1;
      if ( (unsigned __int8)sub_A4150(v303, &v790) )
        LODWORD(v789) = v790;
      goto LABEL_5;
    case 0x47Eu:
      v298 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v299 = *(signed int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v299 + 2;
      }
      else
      {
        v299 = (signed int *)(*(_QWORD *)(a2 + 16) + v298);
        *(_DWORD *)a2 = v298 + 8;
      }
      v300 = *v299;
      LODWORD(v789) = -1;
      if ( (unsigned __int8)sub_A4150(v300, &v790) )
        LODWORD(v789) = HIDWORD(v790);
      goto LABEL_5;
    case 0x47Fu:
      v471 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v472 = *(_DWORD ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v472 + 1;
      }
      else
      {
        v472 = (_DWORD **)(*(_QWORD *)(a2 + 16) + v471);
        *(_DWORD *)a2 = v471 + 8;
      }
      v473 = *v472;
      *v473 = sub_A4200();
      goto LABEL_5;
    case 0x480u:
      v462 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v463 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v463 + 2;
      }
      else
      {
        v463 = (int *)(*(_QWORD *)(a2 + 16) + v462);
        *(_DWORD *)a2 = v462 + 8;
      }
      sub_A4210(*v463);
      goto LABEL_5;
    case 0x481u:
      v464 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v758 = *(unsigned int **)(a2 + 8);
        v759 = v758 + 2;
        *(_QWORD *)(a2 + 8) = v758 + 2;
        v467 = *v758;
      }
      else
      {
        v465 = *(_QWORD *)(a2 + 16);
        v466 = v464 + 8;
        *(_DWORD *)v15 = v466;
        v467 = *(_DWORD *)(v465 + v464);
        if ( (unsigned int)v466 <= 0x2F )
        {
          v468 = v464 + 16;
          *(_DWORD *)v15 = v468;
          v469 = *(_DWORD *)(v465 + v466);
          if ( (unsigned int)v468 <= 0x2F )
          {
            v470 = (unsigned int *)(v468 + v465);
            *(_DWORD *)v15 = v464 + 24;
            goto LABEL_531;
          }
          v470 = *(unsigned int **)(v15 + 8);
LABEL_948:
          *(_QWORD *)(v15 + 8) = v470 + 2;
LABEL_531:
          if ( dbg )
            sub_B20D0(v467, v469, *v470);
          goto LABEL_5;
        }
        v759 = *(unsigned int **)(v15 + 8);
      }
      v470 = v759 + 2;
      *(_QWORD *)(v15 + 8) = v759 + 2;
      v469 = *v759;
      goto LABEL_948;
    case 0x482u:
      v392 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v738 = *(unsigned int **)(a2 + 8);
        v739 = v738 + 2;
        *(_QWORD *)(a2 + 8) = v738 + 2;
        v395 = *v738;
      }
      else
      {
        v393 = *(_QWORD *)(a2 + 16);
        v394 = v392 + 8;
        *(_DWORD *)v15 = v394;
        v395 = *(unsigned int *)(v393 + v392);
        if ( (unsigned int)v394 <= 0x2F )
        {
          v396 = v392 + 16;
          *(_DWORD *)v15 = v396;
          v397 = *(_DWORD *)(v393 + v394);
          if ( (unsigned int)v396 <= 0x2F )
          {
            v398 = (int *)(v396 + v393);
            *(_DWORD *)v15 = v392 + 24;
            goto LABEL_463;
          }
          v398 = *(int **)(v15 + 8);
LABEL_905:
          *(_QWORD *)(v15 + 8) = v398 + 2;
LABEL_463:
          if ( dbg )
            LOBYTE(v789) = sub_B1EF0(v395, v397, *v398);
          goto LABEL_5;
        }
        v739 = *(unsigned int **)(v15 + 8);
      }
      v398 = (int *)(v739 + 2);
      *(_QWORD *)(v15 + 8) = v739 + 2;
      v397 = *v739;
      goto LABEL_905;
    case 0x483u:
      v455 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v676 = *(unsigned int **)(a2 + 8);
        v677 = v676 + 2;
        *(_QWORD *)(a2 + 8) = v676 + 2;
        v458 = *v676;
      }
      else
      {
        v456 = *(_QWORD *)(a2 + 16);
        v457 = v455 + 8;
        *(_DWORD *)v15 = v457;
        v458 = *(_DWORD *)(v456 + v455);
        if ( (unsigned int)v457 <= 0x2F )
        {
          v459 = v455 + 16;
          *(_DWORD *)v15 = v459;
          v460 = *(_DWORD *)(v456 + v457);
          if ( (unsigned int)v459 <= 0x2F )
          {
            v461 = (int *)(v459 + v456);
            *(_DWORD *)v15 = v455 + 24;
            goto LABEL_522;
          }
          v461 = *(int **)(v15 + 8);
LABEL_777:
          *(_QWORD *)(v15 + 8) = v461 + 2;
LABEL_522:
          if ( dbg )
            sub_B23C0(v458, v460, *v461);
          goto LABEL_5;
        }
        v677 = *(unsigned int **)(v15 + 8);
      }
      v461 = (int *)(v677 + 2);
      *(_QWORD *)(v15 + 8) = v677 + 2;
      v460 = *v677;
      goto LABEL_777;
    case 0x484u:
      v448 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v756 = *(unsigned int **)(a2 + 8);
        v757 = v756 + 2;
        *(_QWORD *)(a2 + 8) = v756 + 2;
        v451 = *v756;
      }
      else
      {
        v449 = *(_QWORD *)(a2 + 16);
        v450 = v448 + 8;
        *(_DWORD *)v15 = v450;
        v451 = *(_DWORD *)(v449 + v448);
        if ( (unsigned int)v450 <= 0x2F )
        {
          v452 = v448 + 16;
          *(_DWORD *)v15 = v452;
          v453 = *(_DWORD *)(v449 + v450);
          if ( (unsigned int)v452 <= 0x2F )
          {
            v454 = (int *)(v452 + v449);
            *(_DWORD *)v15 = v448 + 24;
            goto LABEL_516;
          }
          v454 = *(int **)(v15 + 8);
LABEL_945:
          *(_QWORD *)(v15 + 8) = v454 + 2;
LABEL_516:
          if ( dbg )
            sub_B2410(v451, v453, *v454);
          goto LABEL_5;
        }
        v757 = *(unsigned int **)(v15 + 8);
      }
      v454 = (int *)(v757 + 2);
      *(_QWORD *)(v15 + 8) = v757 + 2;
      v453 = *v757;
      goto LABEL_945;
    case 0x485u:
      v212 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v741 = *(unsigned int **)(a2 + 8);
        v742 = v741 + 2;
        *(_QWORD *)(a2 + 8) = v741 + 2;
        v215 = *v741;
      }
      else
      {
        v213 = *(_QWORD *)(a2 + 16);
        v214 = v212 + 8;
        *(_DWORD *)v15 = v214;
        v215 = *(_DWORD *)(v213 + v212);
        if ( (unsigned int)v214 <= 0x2F )
        {
          v216 = v212 + 16;
          *(_DWORD *)v15 = v216;
          v217 = *(_DWORD *)(v213 + v214);
          if ( (unsigned int)v216 <= 0x2F )
          {
            v218 = (unsigned int *)(v216 + v213);
            *(_DWORD *)v15 = v212 + 24;
            goto LABEL_273;
          }
          v218 = *(unsigned int **)(v15 + 8);
LABEL_910:
          *(_QWORD *)(v15 + 8) = v218 + 2;
LABEL_273:
          if ( dbg )
            LOBYTE(v789) = sub_B20B0(v215, v217, *v218);
          goto LABEL_5;
        }
        v742 = *(unsigned int **)(v15 + 8);
      }
      v218 = v742 + 2;
      *(_QWORD *)(v15 + 8) = v742 + 2;
      v217 = *v742;
      goto LABEL_910;
    case 0x486u:
      v210 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v211 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v211 + 1;
      }
      else
      {
        v211 = (__int64 *)(*(_QWORD *)(a2 + 16) + v210);
        *(_DWORD *)a2 = v210 + 8;
      }
      if ( dbg )
        sub_B0400(*v211);
      goto LABEL_5;
    case 0x487u:
      v623 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v624 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v624 + 2;
      }
      else
      {
        v624 = (int *)(*(_QWORD *)(a2 + 16) + v623);
        *(_DWORD *)a2 = v623 + 8;
      }
      sub_A4220(*v624);
      goto LABEL_5;
    case 0x488u:
      v567 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v568 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v568 + 2;
      }
      else
      {
        v568 = (int *)(*(_QWORD *)(a2 + 16) + v567);
        *(_DWORD *)a2 = v567 + 8;
      }
      sub_A4230(*v568);
      goto LABEL_5;
    case 0x489u:
      v486 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v487 = *(_QWORD ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v487 + 1;
      }
      else
      {
        v487 = (_QWORD **)(*(_QWORD *)(a2 + 16) + v486);
        *(_DWORD *)a2 = v486 + 8;
      }
      if ( dbg )
        LOBYTE(v789) = sub_B4100(*v487, a5, *(double *)a6.m128i_i64, a7, a8, a9, a10, a11, a12);
      goto LABEL_5;
    case 0x48Au:
      v479 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v744 = *(__int64 **)(a2 + 8);
        v483 = v744 + 1;
        *(_QWORD *)(a2 + 8) = v744 + 1;
        v482 = *v744;
      }
      else
      {
        v480 = *(_QWORD *)(a2 + 16);
        v481 = v479 + 8;
        *(_DWORD *)a2 = v481;
        v482 = *(_QWORD *)(v480 + v479);
        if ( (unsigned int)v481 <= 0x2F )
        {
          v483 = (__int64 *)(v481 + v480);
          *(_DWORD *)a2 = v479 + 16;
          goto LABEL_547;
        }
        v483 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v483 + 1;
LABEL_547:
      v484 = *v483;
      v485 = get_bpt_kernel_interface();
      LOBYTE(v789) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v485 + 352LL))(v485, v482, v484);
      goto LABEL_5;
    case 0x48Bu:
      v564 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v748 = *(_DWORD **)(a2 + 8);
        v749 = v748 + 2;
        *(_QWORD *)(a2 + 8) = v748 + 2;
        v566 = *v748 != 0;
      }
      else
      {
        v565 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)a2 = v564 + 8;
        v566 = *(_DWORD *)(v565 + v564) != 0;
        if ( v564 + 8 <= 0x2F )
        {
          *(_DWORD *)a2 = v564 + 16;
          if ( v564 + 16 <= 0x2F )
          {
            *(_DWORD *)a2 = v564 + 24;
            goto LABEL_629;
          }
          v750 = *(_DWORD **)(a2 + 8);
LABEL_924:
          *(_QWORD *)(a2 + 8) = v750 + 2;
LABEL_629:
          sub_A3F00(v566);
          goto LABEL_5;
        }
        v749 = *(_DWORD **)(a2 + 8);
      }
      v750 = v749 + 2;
      *(_QWORD *)(a2 + 8) = v749 + 2;
      goto LABEL_924;
    case 0x48Cu:
      v562 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v563 = *(const char ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v563 + 1;
      }
      else
      {
        v563 = (const char **)(*(_QWORD *)(a2 + 16) + v562);
        *(_DWORD *)a2 = v562 + 8;
      }
      sub_A3FC0(*v563);
      goto LABEL_5;
    case 0x48Du:
      v789 = (__int64 *)sub_A4070();
      goto LABEL_5;
    case 0x48Eu:
      v333 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v334 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v334 + 1;
      }
      else
      {
        v334 = (__int64 *)(*(_QWORD *)(a2 + 16) + v333);
        *(_DWORD *)a2 = v333 + 8;
      }
      v789 = (__int64 *)sub_98140(*v334);
      goto LABEL_5;
    case 0x48Fu:
      v589 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v743 = *(__int64 **)(a2 + 8);
        v593 = (const char **)(v743 + 1);
        *(_QWORD *)(a2 + 8) = v743 + 1;
        v592 = *v743;
      }
      else
      {
        v590 = *(_QWORD *)(a2 + 16);
        v591 = v589 + 8;
        *(_DWORD *)a2 = v591;
        v592 = *(_QWORD *)(v590 + v589);
        if ( (unsigned int)v591 <= 0x2F )
        {
          v593 = (const char **)(v591 + v590);
          *(_DWORD *)a2 = v589 + 16;
          goto LABEL_652;
        }
        v593 = *(const char ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v593 + 1;
LABEL_652:
      LOBYTE(v789) = sub_979F0(v592, *v593);
      goto LABEL_5;
    case 0x490u:
      v580 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v687 = *(__int64 **)(a2 + 8);
        v688 = v687 + 1;
        *(_QWORD *)(a2 + 8) = v687 + 1;
        v583 = *v687;
      }
      else
      {
        v581 = *(_QWORD *)(a2 + 16);
        v582 = v580 + 8;
        *(_DWORD *)a2 = v582;
        v583 = *(_QWORD *)(v581 + v580);
        if ( (unsigned int)v582 <= 0x2F )
        {
          v584 = v580 + 16;
          *(_DWORD *)v15 = v584;
          v585 = *(_QWORD *)(v581 + v582);
          if ( (unsigned int)v584 <= 0x2F )
          {
            v586 = v580 + 24;
            *(_DWORD *)v15 = v586;
            v587 = *(_DWORD *)(v581 + v584);
            if ( (unsigned int)v586 <= 0x2F )
            {
              v588 = (_DWORD *)(v586 + v581);
              *(_DWORD *)v15 = v580 + 32;
              goto LABEL_648;
            }
            v588 = *(_DWORD **)(v15 + 8);
LABEL_799:
            *(_QWORD *)(v15 + 8) = v588 + 2;
LABEL_648:
            LOBYTE(v789) = sub_11ABD0(v583, v585, v587, *v588 != 0);
            goto LABEL_5;
          }
          v689 = *(unsigned int **)(v15 + 8);
LABEL_798:
          v588 = v689 + 2;
          *(_QWORD *)(v15 + 8) = v689 + 2;
          v587 = *v689;
          goto LABEL_799;
        }
        v688 = *(_QWORD **)(a2 + 8);
      }
      v689 = (unsigned int *)(v688 + 1);
      *(_QWORD *)(a2 + 8) = v688 + 1;
      v585 = *v688;
      goto LABEL_798;
    case 0x491u:
      v594 = -1;
      v792.m128i_i32[2] = 1170;
      if ( !byte_25142C )
        v594 = 1;
      v19 = v594;
      goto LABEL_656;
    case 0x492u:
      v19 = 0;
LABEL_656:
      v595 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v664 = *(int **)(a2 + 8);
        v598 = v664 + 2;
        *(_QWORD *)(a2 + 8) = v664 + 2;
        v793 = *v664;
      }
      else
      {
        v596 = *(_QWORD *)(a2 + 16);
        v597 = v595 + 8;
        *(_DWORD *)a2 = v597;
        v793 = *(_DWORD *)(v596 + v595);
        if ( (unsigned int)v597 <= 0x2F )
        {
          v598 = (_DWORD *)(v597 + v596);
          *(_DWORD *)a2 = v595 + 16;
          goto LABEL_659;
        }
        v598 = *(_DWORD **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v598 + 2;
LABEL_659:
      LODWORD(v794) = *v598;
      goto LABEL_24;
    case 0x493u:
      v412 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v693 = *(__int64 **)(a2 + 8);
        v416 = v693 + 1;
        *(_QWORD *)(a2 + 8) = v693 + 1;
        v415 = *v693;
      }
      else
      {
        v413 = *(_QWORD *)(a2 + 16);
        v414 = v412 + 8;
        *(_DWORD *)a2 = v414;
        v415 = *(_QWORD *)(v413 + v412);
        if ( (unsigned int)v414 <= 0x2F )
        {
          v416 = (__int64 *)(v414 + v413);
          *(_DWORD *)a2 = v412 + 16;
          goto LABEL_481;
        }
        v416 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v416 + 1;
LABEL_481:
      v417 = *v416;
      v418 = get_bpt_kernel_interface();
      v419 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v418 + 352LL);
      v420 = get_bpt_kernel_interface();
      v421 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v420 + 280LL))(v420, v415);
      LOBYTE(v789) = v419(v418, v421, v417);
      goto LABEL_5;
    case 0x494u:
      v516 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v517 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v517 + 1;
      }
      else
      {
        v517 = (__int64 *)(*(_QWORD *)(a2 + 16) + v516);
        *(_DWORD *)a2 = v516 + 8;
      }
      v518 = *v517;
      v519 = get_bpt_kernel_interface();
      LODWORD(v789) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v519 + 328LL))(v519, v518);
      goto LABEL_5;
    case 0x495u:
      v509 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v686 = *(__int64 **)(a2 + 8);
        v513 = v686 + 1;
        *(_QWORD *)(a2 + 8) = v686 + 1;
        v512 = *v686;
      }
      else
      {
        v510 = *(_QWORD *)(a2 + 16);
        v511 = v509 + 8;
        *(_DWORD *)a2 = v511;
        v512 = *(_QWORD *)(v510 + v509);
        if ( (unsigned int)v511 <= 0x2F )
        {
          v513 = (__int64 *)(v511 + v510);
          *(_DWORD *)a2 = v509 + 16;
          goto LABEL_579;
        }
        v513 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v513 + 1;
LABEL_579:
      v514 = *v513;
      v515 = get_bpt_kernel_interface();
      LOBYTE(v789) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v515 + 336LL))(v515, v512, v514);
      goto LABEL_5;
    case 0x496u:
      v237 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v238 = *(__int64 **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v238 + 1;
      }
      else
      {
        v238 = (__int64 *)(*(_QWORD *)(a2 + 16) + v237);
        *(_DWORD *)a2 = v237 + 8;
      }
      v239 = *v238;
      v240 = get_bpt_kernel_interface();
      LOBYTE(v789) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v240 + 344LL))(v240, v239);
      goto LABEL_5;
    case 0x497u:
      v175 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v734 = *(__int64 **)(a2 + 8);
        v179 = v734 + 1;
        *(_QWORD *)(a2 + 8) = v734 + 1;
        v178 = *v734;
      }
      else
      {
        v176 = *(_QWORD *)(a2 + 16);
        v177 = v175 + 8;
        *(_DWORD *)a2 = v177;
        v178 = *(_QWORD *)(v176 + v175);
        if ( (unsigned int)v177 <= 0x2F )
        {
          v179 = (__int64 *)(v177 + v176);
          *(_DWORD *)a2 = v175 + 16;
          goto LABEL_242;
        }
        v179 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v179 + 1;
LABEL_242:
      v180 = *v179;
      v181 = get_bpt_kernel_interface();
      v789 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v181 + 368LL))(
                          v181,
                          v178,
                          v180);
      goto LABEL_5;
    case 0x498u:
      v626 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v719 = *(__int64 **)(a2 + 8);
        v630 = v719 + 1;
        *(_QWORD *)(a2 + 8) = v719 + 1;
        v629 = *v719;
      }
      else
      {
        v627 = *(_QWORD *)(a2 + 16);
        v628 = v626 + 8;
        *(_DWORD *)a2 = v628;
        v629 = *(_QWORD *)(v627 + v626);
        if ( (unsigned int)v628 <= 0x2F )
        {
          v630 = (__int64 *)(v628 + v627);
          *(_DWORD *)a2 = v626 + 16;
          goto LABEL_690;
        }
        v630 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v630 + 1;
LABEL_690:
      v631 = *v630;
      v632 = get_bpt_kernel_interface();
      LOBYTE(v789) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v632 + 360LL))(v632, v629, v631);
      goto LABEL_5;
    case 0x499u:
      v571 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v717 = *(__int64 **)(a2 + 8);
        v718 = v717 + 1;
        *(_QWORD *)(a2 + 8) = v717 + 1;
        v574 = *v717;
      }
      else
      {
        v572 = *(_QWORD *)(a2 + 16);
        v573 = v571 + 8;
        *(_DWORD *)v15 = v573;
        v574 = *(_QWORD *)(v572 + v571);
        if ( (unsigned int)v573 <= 0x2F )
        {
          v575 = v571 + 16;
          *(_DWORD *)v15 = v575;
          v576 = *(_QWORD *)(v572 + v573);
          if ( (unsigned int)v575 <= 0x2F )
          {
            v577 = (_DWORD *)(v575 + v572);
            *(_DWORD *)v15 = v571 + 24;
            goto LABEL_640;
          }
          v577 = *(_DWORD **)(v15 + 8);
LABEL_859:
          *(_QWORD *)(v15 + 8) = v577 + 2;
LABEL_640:
          v578 = *v577 != 0;
          v579 = get_bpt_kernel_interface();
          LODWORD(v789) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v579 + 256LL))(
                            v579,
                            v574,
                            v576,
                            v578);
          goto LABEL_5;
        }
        v718 = *(_QWORD **)(v15 + 8);
      }
      v577 = v718 + 1;
      *(_QWORD *)(v15 + 8) = v718 + 1;
      v576 = *v718;
      goto LABEL_859;
    case 0x49Au:
      v601 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v720 = *(unsigned int **)(a2 + 8);
        v605 = v720 + 2;
        *(_QWORD *)(a2 + 8) = v720 + 2;
        v604 = *v720;
      }
      else
      {
        v602 = *(_QWORD *)(a2 + 16);
        v603 = v601 + 8;
        *(_DWORD *)a2 = v603;
        v604 = *(unsigned int *)(v602 + v601);
        if ( (unsigned int)v603 <= 0x2F )
        {
          v605 = (_QWORD *)(v603 + v602);
          *(_DWORD *)a2 = v601 + 16;
          goto LABEL_666;
        }
        v605 = *(_QWORD **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v605 + 1;
LABEL_666:
      LOBYTE(v789) = sub_149EB0(v604, *v605);
      goto LABEL_5;
    case 0x49Bu:
      v474 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v736 = *(unsigned int **)(a2 + 8);
        v478 = (__int64 *)(v736 + 2);
        *(_QWORD *)(a2 + 8) = v736 + 2;
        v477 = *v736;
      }
      else
      {
        v475 = *(_QWORD *)(a2 + 16);
        v476 = v474 + 8;
        *(_DWORD *)a2 = v476;
        v477 = *(_DWORD *)(v475 + v474);
        if ( (unsigned int)v476 <= 0x2F )
        {
          v478 = (__int64 *)(v476 + v475);
          *(_DWORD *)a2 = v474 + 16;
          goto LABEL_539;
        }
        v478 = *(__int64 **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v478 + 1;
LABEL_539:
      LOBYTE(v789) = sub_C5D10(v477, *v478);
      goto LABEL_5;
    case 0x49Cu:
      v366 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v367 = *(const char ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v367 + 1;
      }
      else
      {
        v367 = (const char **)(*(_QWORD *)(a2 + 16) + v366);
        *(_DWORD *)a2 = v366 + 8;
      }
      v368 = *v367;
      if ( !*v367 )
        goto LABEL_766;
      v369 = (char *)qword_251430;
      v370 = (char *)qword_251430 + 8 * xmmword_251438;
      if ( qword_251430 == v370 )
        goto LABEL_766;
      while ( 1 )
      {
        v371 = *(__int64 **)v369;
        if ( !strcmp(*(const char **)(*(_QWORD *)v369 + 24LL), v368) )
          break;
        v369 += 8;
        if ( v370 == v369 )
        {
LABEL_766:
          v371 = nullptr;
          break;
        }
      }
      v789 = v371;
      goto LABEL_5;
    case 0x49Du:
      v355 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v726 = *(__int64 **)(a2 + 8);
        v727 = (unsigned int *)(v726 + 1);
        *(_QWORD *)(a2 + 8) = v726 + 1;
        v358 = *v726;
      }
      else
      {
        v356 = *(_QWORD *)(a2 + 16);
        v357 = v355 + 8;
        *(_DWORD *)a2 = v357;
        v358 = *(_QWORD *)(v356 + v355);
        if ( (unsigned int)v357 <= 0x2F )
        {
          v359 = v355 + 16;
          *(_DWORD *)v15 = v359;
          v360 = *(_DWORD *)(v356 + v357);
          if ( (unsigned int)v359 <= 0x2F )
          {
            v361 = v355 + 24;
            *(_DWORD *)v15 = v361;
            v362 = *(_QWORD *)(v356 + v359);
            if ( (unsigned int)v361 <= 0x2F )
            {
              v363 = (_QWORD **)(v361 + v356);
              *(_DWORD *)v15 = v355 + 32;
              goto LABEL_421;
            }
            v363 = *(_QWORD ***)(v15 + 8);
LABEL_877:
            *(_QWORD *)(v15 + 8) = v363 + 1;
LABEL_421:
            v364 = *v363;
            sub_C9BB0(&v790, v358, v360, v362);
            if ( v790 )
            {
              sub_E1EE0(v364);
              v365 = v790;
              *v364 = v790;
              if ( v365 )
                ++*(_DWORD *)(v365 + 8);
              LOBYTE(v789) = 1;
            }
LABEL_425:
            sub_E1EE0(&v790);
            goto LABEL_5;
          }
          v728 = *(__int64 **)(v15 + 8);
LABEL_876:
          v363 = (_QWORD **)(v728 + 1);
          *(_QWORD *)(v15 + 8) = v728 + 1;
          v362 = *v728;
          goto LABEL_877;
        }
        v727 = *(unsigned int **)(a2 + 8);
      }
      v728 = (__int64 *)(v727 + 2);
      *(_QWORD *)(a2 + 8) = v727 + 2;
      v360 = *v727;
      goto LABEL_876;
    case 0x49Eu:
      v527 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v673 = *(_DWORD ***)(a2 + 8);
        v674 = (unsigned int *)(v673 + 1);
        *(_QWORD *)(a2 + 8) = v673 + 1;
        v530 = *v673;
      }
      else
      {
        v528 = *(_QWORD *)(a2 + 16);
        v529 = v527 + 8;
        *(_DWORD *)a2 = v529;
        v530 = *(_DWORD **)(v528 + v527);
        if ( (unsigned int)v529 <= 0x2F )
        {
          v531 = v527 + 16;
          *(_DWORD *)v15 = v531;
          v532 = *(_DWORD *)(v528 + v529);
          if ( (unsigned int)v531 <= 0x2F )
          {
            v533 = v527 + 24;
            *(_DWORD *)v15 = v533;
            v534 = *(const char **)(v528 + v531);
            if ( (unsigned int)v533 <= 0x2F )
            {
              v535 = (_QWORD **)(v533 + v528);
              *(_DWORD *)v15 = v527 + 32;
              goto LABEL_594;
            }
            v535 = *(_QWORD ***)(v15 + 8);
LABEL_772:
            *(_QWORD *)(v15 + 8) = v535 + 1;
LABEL_594:
            v536 = *v535;
            sub_E32B0(&v790, v530, v532, v534);
            if ( v790 )
            {
              sub_E1EE0(v536);
              v537 = v790;
              *v536 = v790;
              if ( v537 )
                ++*(_DWORD *)(v537 + 8);
              LOBYTE(v789) = 1;
            }
            goto LABEL_425;
          }
          v675 = *(const char ***)(v15 + 8);
LABEL_771:
          v535 = (_QWORD **)(v675 + 1);
          *(_QWORD *)(v15 + 8) = v675 + 1;
          v534 = *v675;
          goto LABEL_772;
        }
        v674 = *(unsigned int **)(a2 + 8);
      }
      v675 = (const char **)(v674 + 2);
      *(_QWORD *)(a2 + 8) = v674 + 2;
      v532 = *v674;
      goto LABEL_771;
    case 0x49Fu:
      v348 = *(_DWORD *)a2;
      LODWORD(v790) = -1;
      if ( v348 > 0x2F )
      {
        v680 = *(_DWORD ***)(a2 + 8);
        v681 = (unsigned int *)(v680 + 1);
        *(_QWORD *)(a2 + 8) = v680 + 1;
        v351 = *v680;
      }
      else
      {
        v349 = *(_QWORD *)(a2 + 16);
        v350 = v348 + 8;
        *(_DWORD *)v15 = v350;
        v351 = *(_DWORD **)(v349 + v348);
        if ( (unsigned int)v350 <= 0x2F )
        {
          v352 = v348 + 16;
          *(_DWORD *)v15 = v352;
          v353 = *(_DWORD *)(v349 + v350);
          if ( (unsigned int)v352 <= 0x2F )
          {
            v354 = (__int64 *)(v352 + v349);
            *(_DWORD *)v15 = v348 + 24;
            goto LABEL_415;
          }
          v354 = *(__int64 **)(v15 + 8);
LABEL_786:
          *(_QWORD *)(v15 + 8) = v354 + 1;
LABEL_415:
          LOBYTE(v789) = sub_E31A0(v351, v353, (__int64)&v790, *v354);
          goto LABEL_5;
        }
        v681 = *(unsigned int **)(v15 + 8);
      }
      v354 = (__int64 *)(v681 + 2);
      *(_QWORD *)(v15 + 8) = v681 + 2;
      v353 = *v681;
      goto LABEL_786;
    case 0x4A0u:
      v263 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v678 = *(const char ***)(a2 + 8);
        v267 = (const void **)(v678 + 1);
        *(_QWORD *)(a2 + 8) = v678 + 1;
        v266 = *v678;
      }
      else
      {
        v264 = *(_QWORD *)(a2 + 16);
        v265 = v263 + 8;
        *(_DWORD *)a2 = v265;
        v266 = *(const char **)(v264 + v263);
        if ( (unsigned int)v265 <= 0x2F )
        {
          v267 = (const void **)(v265 + v264);
          *(_DWORD *)v15 = v263 + 16;
          goto LABEL_325;
        }
        v267 = *(const void ***)(v15 + 8);
      }
      *(_QWORD *)(v15 + 8) = v267 + 1;
LABEL_325:
      sub_C9F70(&qword_2510A0, v266, *v267);
      goto LABEL_5;
    case 0x4A1u:
      v261 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v262 = *(__int64 ***)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v262 + 1;
      }
      else
      {
        v262 = (__int64 **)(*(_QWORD *)(a2 + 16) + v261);
        *(_DWORD *)a2 = v261 + 8;
      }
      LOBYTE(v789) = sub_E3520(*v262, nullptr);
      goto LABEL_5;
    case 0x4A2u:
      sub_E3520(nullptr, (int *)&v789);
      goto LABEL_5;
    case 0x4A3u:
      v260 = -1;
      if ( !byte_25142C )
        v260 = 1;
      v19 = v260;
      goto LABEL_315;
    case 0x4A4u:
      v19 = 0;
LABEL_315:
      v792.m128i_i32[2] = 0;
      LODWORD(v794) = 4;
      if ( (*(_BYTE *)(dbg + 82LL) & 8) != 0 )
        goto LABEL_316;
      v496 = sub_E2200(dword_251408, 0);
      goto LABEL_562;
    case 0x4A5u:
      v495 = -1;
      if ( !byte_25142C )
        v495 = 1;
      v19 = v495;
      goto LABEL_560;
    case 0x4A6u:
      v19 = 0;
LABEL_560:
      v792.m128i_i32[2] = 0;
      LODWORD(v794) = 5;
      if ( (*(_BYTE *)(dbg + 82LL) & 0x10) != 0 )
        goto LABEL_316;
      v496 = sub_E2200(dword_251408, 1);
LABEL_562:
      LOBYTE(v789) = v496 > 0;
      goto LABEL_24;
    case 0x4A7u:
      v430 = -1;
      if ( !byte_25142C )
        v430 = 1;
      v19 = v430;
      goto LABEL_491;
    case 0x4A8u:
      v19 = 0;
LABEL_491:
      v792.m128i_i32[2] = 0;
      LODWORD(v794) = 6;
      if ( (*(_BYTE *)(dbg + 82LL) & 0x20) == 0 )
        goto LABEL_5;
LABEL_316:
      v792.m128i_i32[2] = 1018;
      if ( v19 == -1 )
        goto LABEL_5;
      goto LABEL_10;
    case 0x4A9u:
      v258 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v259 = *(int **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v259 + 2;
      }
      else
      {
        v259 = (int *)(*(_QWORD *)(a2 + 16) + v258);
        *(_DWORD *)a2 = v258 + 8;
      }
      v789 = (__int64 *)sub_C8610(*v259);
      goto LABEL_5;
    case 0x4AAu:
      v285 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v721 = *(int ***)(a2 + 8);
        v722 = (int *)(v721 + 1);
        *(_QWORD *)(a2 + 8) = v721 + 1;
        v288 = *v721;
      }
      else
      {
        v286 = *(_QWORD *)(a2 + 16);
        v287 = v285 + 8;
        *(_DWORD *)a2 = v287;
        v288 = *(int **)(v286 + v285);
        if ( (unsigned int)v287 <= 0x2F )
        {
          v289 = v285 + 16;
          *(_DWORD *)v15 = v289;
          v290 = *(_DWORD *)(v286 + v287);
          if ( (unsigned int)v289 <= 0x2F )
          {
            v291 = v285 + 24;
            *(_DWORD *)v15 = v291;
            v292 = *(_DWORD *)(v286 + v289);
            if ( (unsigned int)v291 <= 0x2F )
            {
              v293 = v285 + 32;
              *(_DWORD *)v15 = v293;
              v294 = *(_QWORD *)(v286 + v291);
              if ( (unsigned int)v293 <= 0x2F )
              {
                v295 = v285 + 40;
                *(_DWORD *)v15 = v295;
                v296 = *(_DWORD *)(v286 + v293);
                if ( (unsigned int)v295 <= 0x2F )
                {
                  v297 = (__int64 *)(v295 + v286);
                  *(_DWORD *)v15 = v285 + 48;
                  goto LABEL_348;
                }
                v297 = *(__int64 **)(v15 + 8);
LABEL_871:
                *(_QWORD *)(v15 + 8) = v297 + 1;
LABEL_348:
                LODWORD(v789) = sub_CDC10(v288, v290, v292, v294, v296, *v297);
                goto LABEL_5;
              }
              v725 = *(int **)(v15 + 8);
LABEL_870:
              v297 = (__int64 *)(v725 + 2);
              *(_QWORD *)(v15 + 8) = v725 + 2;
              v296 = *v725;
              goto LABEL_871;
            }
            v724 = *(__int64 **)(v15 + 8);
LABEL_869:
            v725 = (int *)(v724 + 1);
            *(_QWORD *)(v15 + 8) = v724 + 1;
            v294 = *v724;
            goto LABEL_870;
          }
          v723 = *(int **)(v15 + 8);
LABEL_868:
          v724 = (__int64 *)(v723 + 2);
          *(_QWORD *)(v15 + 8) = v723 + 2;
          v292 = *v723;
          goto LABEL_869;
        }
        v722 = *(int **)(a2 + 8);
      }
      v723 = v722 + 2;
      *(_QWORD *)(a2 + 8) = v722 + 2;
      v290 = *v722;
      goto LABEL_868;
    case 0x4ABu:
      v197 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v767 = *(signed int **)(a2 + 8);
        v768 = (__int64 *)(v767 + 2);
        *(_QWORD *)(a2 + 8) = v767 + 2;
        v200 = *v767;
      }
      else
      {
        v198 = *(_QWORD *)(a2 + 16);
        v199 = v197 + 8;
        *(_DWORD *)v15 = v199;
        v200 = *(_DWORD *)(v198 + v197);
        if ( (unsigned int)v199 <= 0x2F )
        {
          v201 = v197 + 16;
          *(_DWORD *)v15 = v201;
          v202 = *(_QWORD *)(v198 + v199);
          if ( (unsigned int)v201 <= 0x2F )
          {
            v203 = (__int64 **)(v201 + v198);
            *(_DWORD *)v15 = v197 + 24;
            goto LABEL_260;
          }
          v203 = *(__int64 ***)(v15 + 8);
LABEL_963:
          *(_QWORD *)(v15 + 8) = v203 + 1;
LABEL_260:
          LOBYTE(v789) = sub_ADEF0(v200, v202, *v203);
          goto LABEL_5;
        }
        v768 = *(__int64 **)(v15 + 8);
      }
      v203 = (__int64 **)(v768 + 1);
      *(_QWORD *)(v15 + 8) = v768 + 1;
      v202 = *v768;
      goto LABEL_963;
    case 0x4ACu:
      v190 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v732 = *(signed int **)(a2 + 8);
        v733 = (__int64 *)(v732 + 2);
        *(_QWORD *)(a2 + 8) = v732 + 2;
        v193 = *v732;
      }
      else
      {
        v191 = *(_QWORD *)(a2 + 16);
        v192 = v190 + 8;
        *(_DWORD *)v15 = v192;
        v193 = *(_DWORD *)(v191 + v190);
        if ( (unsigned int)v192 <= 0x2F )
        {
          v194 = v190 + 16;
          *(_DWORD *)v15 = v194;
          v195 = *(_QWORD *)(v191 + v192);
          if ( (unsigned int)v194 <= 0x2F )
          {
            v196 = (__int64 **)(v194 + v191);
            *(_DWORD *)v15 = v190 + 24;
            goto LABEL_255;
          }
          v196 = *(__int64 ***)(v15 + 8);
LABEL_890:
          *(_QWORD *)(v15 + 8) = v196 + 1;
LABEL_255:
          LOBYTE(v789) = sub_AD700(v193, v195, *v196);
          goto LABEL_5;
        }
        v733 = *(__int64 **)(v15 + 8);
      }
      v196 = (__int64 **)(v733 + 1);
      *(_QWORD *)(v15 + 8) = v733 + 1;
      v195 = *v733;
      goto LABEL_890;
    case 0x4ADu:
      v204 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v755 = *(const char ***)(a2 + 8);
        v209 = (__int64 **)(v755 + 1);
        *(_QWORD *)(a2 + 8) = v755 + 1;
        v207 = *v755;
      }
      else
      {
        v205 = *(_QWORD *)(a2 + 16);
        v206 = v204 + 8;
        *(_DWORD *)a2 = v206;
        v207 = *(const char **)(v205 + v204);
        if ( (unsigned int)v206 <= 0x2F )
        {
          v208 = v204 + 16;
          v209 = (__int64 **)(v206 + v205);
          *(_DWORD *)a2 = v208;
          goto LABEL_264;
        }
        v209 = *(__int64 ***)(a2 + 8);
      }
      v208 = (_DWORD)v209 + 8;
      *(_QWORD *)(a2 + 8) = v209 + 1;
LABEL_264:
      LOBYTE(v789) = sub_CED70(v207, *v209, v208);
      goto LABEL_5;
    case 0x4AEu:
      v183 = *(_DWORD *)a2;
      v792.m128i_i32[2] = 1094;
      if ( v183 > 0x2F )
      {
        v186 = (int *)(*(_QWORD *)(a2 + 8) + 8LL);
        *(_QWORD *)(a2 + 8) = v186;
      }
      else
      {
        v184 = *(_QWORD *)(a2 + 16);
        v185 = v183 + 8;
        *(_DWORD *)a2 = v185;
        if ( (unsigned int)v185 <= 0x2F )
        {
          v186 = (int *)(v185 + v184);
          *(_DWORD *)a2 = v183 + 16;
          goto LABEL_249;
        }
        v186 = *(int **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v186 + 2;
LABEL_249:
      v187 = *v186;
      v794 = qstrdup();
      v188 = operator new(0x20u);
      *(_DWORD *)v188 = -2;
      *(_OWORD *)(v188 + 16) = 0;
      v189 = v792.m128i_i32[2];
      v795 = v188;
      *(_QWORD *)(v188 + 8) = v187;
      if ( v189 )
        goto LABEL_11;
      goto LABEL_5;
    case 0x4AFu:
      v520 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v760 = *(const char ***)(a2 + 8);
        v524 = (__m128i **)(v760 + 1);
        *(_QWORD *)(a2 + 8) = v760 + 1;
        v523 = *v760;
      }
      else
      {
        v521 = *(_QWORD *)(a2 + 16);
        v522 = v520 + 8;
        *(_DWORD *)a2 = v522;
        v523 = *(const char **)(v521 + v520);
        if ( (unsigned int)v522 <= 0x2F )
        {
          v524 = (__m128i **)(v522 + v521);
          *(_DWORD *)a2 = v520 + 16;
          goto LABEL_586;
        }
        v524 = *(__m128i ***)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v524 + 1;
LABEL_586:
      if ( dbg )
      {
        v525 = *v524;
        v526 = sub_C86D0(v523, 0);
        if ( *(_DWORD *)(dbg + 64LL) > v526 )
        {
          LOBYTE(v789) = v526 >= 0;
          if ( v525 && v526 >= 0 )
          {
            v783 = (const __m128i *)(*(_QWORD *)(dbg + 56LL) + 32LL * v526);
            *v525 = _mm_loadu_si128(v783);
            v525[1] = _mm_loadu_si128(v783 + 1);
          }
        }
        else
        {
          LOBYTE(v789) = 0;
        }
      }
      goto LABEL_5;
    case 0x4B0u:
      v390 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v391 = *(_QWORD **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v391 + 1;
      }
      else
      {
        v391 = (_QWORD *)(*(_QWORD *)(a2 + 16) + v390);
        *(_DWORD *)a2 = v390 + 8;
      }
      sub_A40F0(*v391);
      goto LABEL_5;
    case 0x4B1u:
      if ( *(_DWORD *)a2 > 0x2Fu )
        *(_QWORD *)(a2 + 8) += 8LL;
      else
        *(_DWORD *)a2 += 8;
      sub_A4090();
      goto LABEL_5;
    case 0x4B2u:
      v268 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v682 = *(_QWORD **)(a2 + 8);
        v272 = v682 + 1;
        *(_QWORD *)(a2 + 8) = v682 + 1;
        v271 = *v682;
      }
      else
      {
        v269 = *(_QWORD *)(a2 + 16);
        v270 = v268 + 8;
        *(_DWORD *)a2 = v270;
        v271 = *(_QWORD *)(v269 + v268);
        if ( (unsigned int)v270 <= 0x2F )
        {
          v272 = (_DWORD *)(v270 + v269);
          *(_DWORD *)a2 = v268 + 16;
          goto LABEL_330;
        }
        v272 = *(_DWORD **)(a2 + 8);
      }
      *(_QWORD *)(a2 + 8) = v272 + 2;
LABEL_330:
      v273 = *v272 != 0;
      v274 = get_bpt_kernel_interface();
      LODWORD(v789) = (*(__int64 (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)v274 + 376LL))(v274, v271, v273);
      goto LABEL_5;
    case 0x4B3u:
      v792.m128i_i32[2] = 1204;
      goto LABEL_11;
    case 0x4B5u:
      v792.m128i_i32[2] = 1018;
      LODWORD(v794) = 9;
      if ( byte_25142C )
        goto LABEL_5;
      goto LABEL_11;
    case 0x4B6u:
      v792.m128i_i32[2] = 1018;
      LODWORD(v794) = 9;
      goto LABEL_3;
    case 0x4B7u:
      v792.m128i_i32[2] = 1208;
      if ( !byte_25142C )
        goto LABEL_11;
      goto LABEL_5;
    case 0x4B9u:
      v47 = -1;
      v792.m128i_i32[2] = 1210;
      if ( !byte_25142C )
        v47 = 1;
      v19 = v47;
LABEL_21:
      v26 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 > 0x2Fu )
      {
        v27 = *(_DWORD **)(a2 + 8);
        *(_QWORD *)(a2 + 8) = v27 + 2;
      }
      else
      {
        v27 = (_DWORD *)(*(_QWORD *)(a2 + 16) + v26);
        *(_DWORD *)a2 = v26 + 8;
      }
      LODWORD(v794) = *v27;
      goto LABEL_24;
    case 0x4BBu:
      byte_25159B = 1;
      goto LABEL_3;
    default:
      sub_91F70((__int64)"Unknown UI DBG notification %d\n", a1, a3, a4, (unsigned int)dword_251408, a14, v788);
  }
}

