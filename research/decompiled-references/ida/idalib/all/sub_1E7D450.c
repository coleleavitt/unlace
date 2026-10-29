unsigned int *__fastcall sub_1E7D450(
        __int64 *a1,
        __int64 a2,
        void **a3,
        __int64 a4,
        __int64 a5,
        __m128i a6,
        __m128 a7,
        __m128i a8,
        __m128 si128,
        double a10,
        double a11,
        __m128i a12,
        __m128 a13)
{
  int *v13; // rbp
  _QWORD *v14; // r14
  void *v15; // rax
  int v16; // r11d
  __int64 v17; // rax
  _BYTE *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // r12
  __int64 v28; // rsi
  unsigned int v29; // ebx
  __int64 v30; // kr00_8
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r10d
  unsigned int v35; // r13d
  unsigned int *v36; // r12
  unsigned int v37; // eax
  __int64 v38; // rcx
  __m128 v39; // xmm0
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rdi
  __int64 *v44; // rsi
  std::nothrow_t *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  std::nothrow_t *v49; // r9
  unsigned int v50; // r10d
  unsigned int v51; // r15d
  __int64 v52; // rax
  __int64 *v53; // r8
  __m128 *v54; // r9
  int *v55; // rbx
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  __int64 *v58; // r13
  unsigned __int64 v59; // rax
  _QWORD *v60; // rax
  std::nothrow_t *v61; // r12
  unsigned int v62; // eax
  __int64 v63; // rax
  _DWORD *v64; // r11
  _DWORD *v65; // r13
  __int64 *v66; // r10
  char v67; // al
  __int64 v68; // r15
  unsigned __int64 v69; // rax
  unsigned __int8 v70; // al
  __int64 v71; // rax
  __int64 *v72; // r13
  __int64 *v73; // rbx
  __int64 v74; // r15
  __int64 *v75; // rbx
  __int64 *v76; // r15
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 *v80; // r12
  __int64 v81; // r13
  __int64 *v82; // r15
  __int64 *v83; // rbx
  __int64 v84; // rsi
  unsigned __int64 v85; // rdx
  unsigned int v86; // edx
  __int64 v87; // rax
  __int64 v88; // rsi
  unsigned __int64 v89; // rbx
  __int64 v90; // rax
  _QWORD *v91; // rdi
  int *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r8
  double v95; // xmm4_8
  double v96; // xmm5_8
  __int64 v97; // r9
  unsigned __int64 v98; // r13
  signed __int64 v99; // r12
  int v100; // eax
  unsigned __int64 v101; // rbp
  __int64 *v102; // r12
  __int64 *v103; // r14
  __int64 v104; // rdx
  _QWORD *v105; // rax
  __int64 v106; // rsi
  _QWORD *v107; // rdi
  __int64 v108; // rsi
  _QWORD *v109; // rsi
  __int64 *v110; // rbx
  unsigned int v111; // eax
  __int64 v113; // r9
  __int64 v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rcx
  unsigned int v117; // esi
  __int64 v118; // r13
  __int64 *v119; // rax
  int v120; // edx
  int v121; // eax
  unsigned int v122; // eax
  char v123; // di
  unsigned __int64 v124; // rax
  __int64 *v125; // rdx
  __int64 v126; // rsi
  char v127; // di
  unsigned int v128; // edx
  __int64 v129; // rax
  __int64 v130; // rdi
  __int64 v131; // rax
  __int64 *v132; // rax
  unsigned __int64 v133; // rcx
  __int64 v134; // rsi
  unsigned __int8 v135; // di
  unsigned int v136; // ecx
  unsigned int v137; // edx
  __int64 v138; // rax
  unsigned __int64 v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // rdi
  unsigned __int64 v142; // rcx
  __int64 v143; // r13
  int v144; // r12d
  bool v145; // al
  unsigned int v146; // edx
  __int64 v147; // rax
  void *v148; // rdx
  unsigned int v149; // r12d
  void *v150; // rdx
  int v151; // eax
  int v152; // eax
  __int64 *v153; // r9
  int v154; // r13d
  unsigned int v155; // edx
  _BYTE *v156; // r12
  __int64 v157; // rax
  __int64 v158; // r12
  size_t v159; // rax
  __int64 *v160; // r9
  __int64 v161; // r12
  unsigned __int64 v162; // rax
  void *v163; // rsi
  _QWORD *v164; // rdi
  int *v165; // rdx
  size_t v166; // r12
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 *v170; // rax
  void **v171; // r13
  __int64 v172; // rcx
  int v173; // esi
  char v174; // r8
  int v175; // edx
  char v176; // r11
  unsigned __int8 v177; // al
  __int64 *v178; // r13
  __int64 *v179; // r12
  __int64 *v180; // r15
  __int64 v181; // r12
  unsigned __int16 v182; // ax
  unsigned int v183; // eax
  _BYTE *v184; // r8
  __int64 v185; // r9
  __int16 v186; // cx
  int v187; // r12d
  __int64 v188; // rax
  char v189; // al
  int v190; // edx
  __int64 v191; // rax
  int v192; // eax
  unsigned __int64 v193; // r12
  int v194; // r13d
  char *v195; // rdi
  _BYTE *v196; // rdx
  char *v197; // rdx
  __int64 v198; // rax
  int *v199; // r12
  char v200; // r13
  void *v201; // r15
  unsigned __int64 v202; // rdx
  int *v203; // rax
  __int64 v204; // rdx
  __int64 v205; // r15
  __int64 *v206; // rcx
  __int64 v207; // rsi
  __int64 v208; // rax
  char v209; // di
  __int16 v210; // ax
  int *v211; // r11
  unsigned int v212; // edx
  unsigned int v213; // ecx
  void **v214; // r14
  char v215; // r14
  __int64 *v216; // rax
  __int64 v217; // rcx
  char *v218; // rdx
  unsigned __int64 v219; // rdi
  __int64 *v220; // rax
  __int64 v221; // rdx
  __int64 *v222; // rcx
  __int64 *v223; // rax
  unsigned __int64 *v224; // rax
  __int64 *v225; // rdx
  unsigned __int64 v226; // rcx
  unsigned __int64 v227; // rax
  __int64 *v228; // r11
  _QWORD *v229; // rdx
  __int64 v230; // rcx
  _QWORD *v231; // rdi
  __int64 v232; // rsi
  __int64 v233; // rcx
  _QWORD *v234; // rcx
  _QWORD *v235; // rax
  __int64 v236; // rax
  char v237; // al
  int v238; // eax
  signed int v239; // r12d
  _DWORD *v240; // rsi
  _DWORD *k; // rax
  __int64 *v242; // rcx
  __int64 v243; // r8
  unsigned __int64 v244; // r12
  __int64 v245; // rdx
  char v246; // dl
  char v247; // cl
  char v248; // dl
  __int64 v249; // rcx
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // rdi
  char v254; // dl
  int v255; // edx
  unsigned int v256; // edx
  __int64 v257; // rsi
  unsigned __int64 v258; // rcx
  __int64 v259; // r12
  _BYTE *v260; // rdi
  __int64 (*v261)(void); // rax
  char v262; // al
  unsigned int v263; // edx
  __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rdx
  unsigned int v267; // ecx
  __int64 *v268; // rsi
  __int64 v269; // rdi
  _DWORD *v270; // rax
  unsigned __int64 v271; // r13
  char *v272; // rcx
  _QWORD *v273; // rsi
  __int64 *v274; // rax
  __int64 n; // rdx
  unsigned __int64 v276; // r13
  __int64 v277; // rax
  unsigned int v278; // eax
  __int64 v279; // r10
  __m128 *v280; // rbx
  __int64 v281; // rax
  bool v282; // zf
  __m128 *v283; // rdx
  unsigned __int64 v284; // rax
  __int64 v285; // rax
  unsigned __int64 v286; // rdx
  unsigned __int64 *v287; // rbp
  unsigned int v288; // eax
  __int64 v289; // rax
  unsigned __int64 v290; // rdx
  unsigned __int64 *v291; // rbp
  unsigned int v292; // eax
  unsigned __int64 *v293; // rbp
  unsigned int v294; // eax
  int v295; // eax
  _DWORD *v296; // rdx
  unsigned __int64 v297; // r13
  unsigned int v298; // eax
  unsigned __int64 *v299; // rbp
  unsigned int v300; // eax
  __int64 v301; // rbx
  __m128i *v302; // rax
  double v303; // xmm4_8
  double v304; // xmm5_8
  __int64 v305; // rsi
  __int64 v306; // rcx
  __int64 v307; // r12
  __m128 *v308; // rbx
  __m128 *v309; // rsi
  __m128 *v310; // rdx
  void *v311; // r8
  __m128 v312; // xmm0
  std::nothrow_t *v313; // rsi
  void *v314; // rax
  int v315; // esi
  __int64 v316; // r12
  __int64 v317; // rdx
  char v318; // al
  char v319; // cl
  int v320; // ecx
  char v321; // dl
  __int64 v322; // rcx
  int v323; // eax
  __int16 v324; // r12
  __int64 v325; // rax
  __int64 v326; // rax
  __int64 v327; // rcx
  __int64 v328; // r14
  _BYTE *v329; // rdi
  __int64 (__fastcall *v330)(__int64); // rax
  __int64 *v332; // r14
  __int64 v333; // rdi
  __int64 v334; // rax
  char *v335; // rax
  __int64 v336; // r13
  __int64 *v337; // rax
  unsigned __int8 v338; // al
  char v339; // al
  __int64 v340; // rax
  __int64 *v341; // rax
  __int64 *v342; // rax
  __int64 **v343; // rax
  __int64 *v344; // rax
  __int64 v345; // rcx
  unsigned int *v346; // r13
  __int64 *v347; // rdi
  unsigned __int8 v348; // dl
  int v349; // edx
  __int64 v350; // r9
  __int64 v351; // rax
  unsigned __int64 v352; // r8
  _BYTE *v353; // rax
  char v354; // si
  __int64 **v355; // rax
  size_t v356; // rax
  __int64 *v357; // r14
  __int64 v358; // rax
  __int64 v359; // rax
  __m128 *v360; // rsi
  __int64 v361; // rdx
  __m128 *v362; // rsi
  __m128 *v363; // r12
  unsigned int *v364; // rax
  __int64 v365; // r9
  __int64 v366; // r12
  unsigned int *v367; // rax
  __int64 v368; // rax
  __int64 v369; // rax
  unsigned __int64 v370; // rax
  __m128 *v371; // r12
  __int64 v372; // rdi
  char *v373; // r9
  int v374; // r13d
  unsigned int v375; // r12d
  __int64 v376; // rcx
  __int64 *v377; // rax
  __int64 *v378; // rsi
  __int64 v379; // rdx
  __int64 *v380; // rax
  int v381; // edx
  __int64 v382; // rdx
  unsigned __int64 v383; // rax
  __int64 v384; // r13
  __int64 v385; // r12
  __int64 v386; // rdx
  __int64 v387; // rcx
  __int64 v388; // r8
  __int64 v389; // r9
  __int64 v390; // rax
  void *v391; // rax
  _BYTE *v392; // r15
  signed __int64 *v393; // rbp
  unsigned int v394; // eax
  unsigned __int64 v395; // rdx
  signed __int64 *v396; // r12
  unsigned int v397; // eax
  int v398; // edx
  __int64 v399; // rax
  __int64 v400; // rcx
  __int64 v401; // rax
  __int64 v402; // rdx
  int v403; // eax
  _DWORD *v404; // rsi
  _DWORD *j; // rax
  unsigned int v406; // edx
  unsigned int v407; // edx
  int v408; // eax
  unsigned int v409; // edx
  char *v410; // rax
  __int64 v411; // rsi
  __int64 v412; // rdx
  __int64 v413; // rcx
  __int64 v414; // r8
  __int64 v415; // rdi
  int v416; // eax
  int v417; // r10d
  _DWORD *v418; // rsi
  _DWORD *i; // rax
  __int64 v420; // rcx
  int v421; // r10d
  int *v422; // rax
  __int64 v423; // rcx
  int v424; // eax
  int v425; // eax
  unsigned int v426; // edx
  __int64 v427; // rcx
  __int64 v428; // r13
  __int64 *v429; // r15
  __int64 v430; // rdx
  int v431; // eax
  _BYTE *v432; // r15
  __int64 v433; // rax
  __int64 v434; // rcx
  int v435; // eax
  int v436; // eax
  __int64 v437; // rax
  __int64 v438; // rdi
  int v439; // eax
  __int64 v440; // rax
  __int64 v441; // r8
  __int64 v442; // r12
  __int64 v443; // r15
  int v444; // r13d
  int v445; // ebx
  unsigned __int16 v446; // ax
  __int64 v447; // rax
  char v448; // r15
  char v449; // r10
  std::nothrow_t *v450; // r11
  _BYTE *v451; // rdi
  int v452; // eax
  int v453; // edi
  int v454; // r13d
  __int64 v455; // rax
  __int64 v456; // kr18_8
  __int64 *v457; // rax
  std::nothrow_t *v458; // rax
  __int64 v459; // rax
  char v460; // al
  __int64 *v461; // rax
  __int64 v462; // rdx
  __int64 *jj; // rax
  __int64 v464; // rax
  char v465; // al
  int v466; // edx
  __int64 v467; // rdi
  __int64 v468; // rax
  int v469; // edx
  __int64 v470; // rdi
  __int64 v471; // rax
  int v472; // eax
  __int64 v473; // rdx
  __m128 *v474; // rbx
  __int64 v475; // rax
  __int64 *v476; // rsi
  __int64 v477; // rax
  __m128 *v478; // rdx
  unsigned __int64 v479; // rax
  __int64 *v480; // rax
  __int64 *ii; // rax
  unsigned __int8 v482; // cl
  int v483; // ecx
  _BYTE *v484; // r12
  unsigned int v485; // edx
  void **v486; // rsi
  __int64 v487; // rcx
  __int64 v488; // r8
  __int64 v489; // r9
  __int64 v490; // rdx
  __int64 v491; // rax
  int v492; // edx
  int v493; // r12d
  __int64 v494; // rsi
  void **v495; // r12
  __int64 v496; // r9
  __int64 v497; // rax
  unsigned int v498; // r13d
  int v499; // r12d
  size_t v500; // rax
  __int64 v501; // r13
  size_t v502; // rax
  void *v503; // rdi
  _QWORD *v504; // rax
  _QWORD *v505; // rax
  _QWORD *v506; // rax
  _BYTE *v507; // r15
  int v508; // eax
  __int64 v509; // rax
  __int64 v510; // rax
  size_t v511; // rax
  char v512; // al
  __int64 v513; // rax
  void **v514; // rdi
  __m128 *v515; // rdi
  __int64 v516; // rax
  __int64 *v517; // r13
  __int64 *v518; // rdx
  bool v519; // si
  char v520; // r12
  __int64 v521; // kr20_8
  __int64 v522; // rsi
  __int64 v523; // r9
  char v524; // al
  char v525; // r15
  _BYTE *v526; // r12
  void **v527; // rsi
  __int64 v528; // rax
  int v529; // r10d
  __int64 v530; // r12
  __int64 v531; // rdx
  __int64 v532; // rcx
  __int64 v533; // r8
  __int64 v534; // r9
  _QWORD *v535; // rax
  __int64 v536; // rdx
  __int64 v537; // rcx
  __int64 v538; // r8
  __int64 v539; // r9
  _QWORD *v540; // r12
  __int64 v541; // rsi
  __int64 *v542; // rdi
  size_t v543; // rax
  void **v544; // r12
  __int64 v545; // r12
  __int64 *v546; // rax
  int v547; // esi
  int v548; // eax
  _BYTE *v549; // r12
  int v550; // eax
  __int64 v551; // rax
  int v552; // edx
  _DWORD *v553; // rsi
  void *v554; // rdx
  void *v555; // rax
  int v556; // eax
  __int64 v557; // r12
  size_t v558; // rax
  char v559; // al
  __int64 v560; // r12
  size_t v561; // rax
  unsigned int *v562; // rdi
  size_t v563; // r13
  const void *v564; // r12
  int v565; // eax
  unsigned int v566; // eax
  unsigned int *v567; // rdi
  size_t v568; // rax
  int v569; // eax
  unsigned int v570; // edx
  unsigned int v571; // edx
  __int64 v572; // rax
  unsigned __int64 v573; // r15
  __int64 v574; // r8
  __int64 v575; // r15
  __int64 v576; // r13
  __int64 v577; // r12
  __int64 v578; // rax
  __int64 v579; // r12
  unsigned __int64 v580; // rdx
  __int64 v581; // rdi
  __int64 v582; // rax
  __int64 v583; // r12
  char *v584; // rsi
  __int64 v585; // rdx
  char *v586; // rax
  void *v587; // rax
  int v588; // edx
  __int64 v589; // rax
  __int64 v590; // r13
  int v591; // eax
  int v592; // ecx
  __int64 v593; // rax
  __int64 v594; // rcx
  int v595; // eax
  unsigned __int64 v596; // r12
  unsigned int v597; // edx
  __int64 v598; // rax
  int v599; // edx
  unsigned int v600; // edx
  unsigned __int8 *v601; // rsi
  size_t v602; // rax
  __int64 *v603; // r11
  __m128 *v604; // r10
  std::nothrow_t *v605; // r9
  int v606; // r9d
  __int64 v607; // rax
  void **v608; // rbx
  __int64 v609; // rax
  unsigned int v610; // r13d
  __int64 v611; // rdi
  __int64 v612; // rax
  __int64 v613; // rdx
  __int64 v614; // rax
  int v615; // eax
  __int64 v616; // r13
  __int64 v617; // rbx
  int v618; // eax
  unsigned int v619; // edx
  unsigned __int64 v620; // rax
  __int64 *v621; // r8
  unsigned int v622; // edx
  __int64 v623; // rdx
  __int64 v624; // rcx
  __int64 v625; // r8
  __int64 v626; // r9
  __int64 v627; // r15
  void *v628; // rax
  _QWORD *v629; // rax
  _QWORD *v630; // rax
  __int64 v631; // rbp
  __m128i *v632; // rax
  double v633; // xmm4_8
  double v634; // xmm5_8
  __int64 v635; // r11
  __m128 *v636; // rbx
  __m128 *v637; // rdx
  __m128 *v638; // rsi
  __int64 v639; // rcx
  void *v640; // r8
  __m128 v641; // xmm0
  __m128 *v642; // rsi
  void *v643; // rax
  __int64 v644; // rax
  __int64 v645; // rdx
  __int64 v646; // rcx
  __int64 v647; // r8
  __int64 v648; // r12
  int v649; // eax
  __int64 v650; // rcx
  _QWORD *v651; // rax
  __int64 v652; // rcx
  __int64 v653; // r8
  __int64 v654; // r9
  __int64 v655; // r11
  __int64 v656; // rdx
  __int64 v657; // r12
  __int64 *v658; // r15
  __int64 v659; // r13
  __int64 *v660; // r12
  __int64 *v661; // rbx
  __int64 *v662; // rbp
  __int64 v663; // r14
  _QWORD *v664; // rdx
  __int64 v665; // rcx
  __int64 v666; // r8
  __int64 v667; // r9
  void *v668; // rax
  __int64 v669; // rcx
  _QWORD *v670; // rax
  void **v671; // r12
  __int64 v672; // r12
  _BYTE *v673; // rdi
  void **v674; // r12
  unsigned int v675; // edx
  unsigned int v676; // edx
  unsigned int v677; // edx
  unsigned int v678; // edx
  __int64 *v679; // rsi
  unsigned int v680; // ecx
  __int64 v681; // rdx
  unsigned int v682; // edx
  unsigned int v683; // edx
  __int64 v684; // rax
  __int64 v685; // rax
  __m128 *v686; // rsi
  __int64 v687; // rax
  __int64 v688; // rax
  char v689; // al
  const __m128i *v690; // rax
  __int64 v691; // r9
  size_t v692; // rax
  void **v693; // r12
  __int64 v694; // rax
  __int64 v695; // r12
  unsigned int v696; // eax
  __int64 v697; // rax
  _QWORD *v698; // rdx
  __int64 v699; // rax
  __int64 v700; // rdx
  __int64 v701; // r8
  void **v702; // rdx
  void **v703; // rax
  __int64 v704; // rdx
  __int64 v705; // rcx
  __int64 v706; // r8
  __int64 v707; // r9
  void *v708; // rax
  _QWORD *v709; // rax
  __int64 v710; // rdx
  __int64 v711; // rcx
  __int64 v712; // r8
  __int64 v713; // r9
  void *v714; // rax
  _QWORD *v715; // rax
  _QWORD *v716; // rax
  __int64 v717; // rdx
  __int64 v718; // rcx
  __int64 v719; // r8
  __int64 v720; // r9
  _QWORD *v721; // r12
  __int64 v722; // rsi
  __int64 *v723; // rdi
  __int64 v724; // rdx
  __int64 v725; // rcx
  __int64 v726; // r8
  __int64 v727; // r9
  _BYTE *v728; // r12
  __int64 v729; // r13
  std::nothrow_t *v730; // rdx
  int *v731; // rax
  int v732; // edi
  __int64 v733; // rdx
  __int64 v734; // rcx
  __int64 v735; // r8
  __int64 v736; // r9
  __int64 v737; // rax
  _QWORD *v738; // rax
  unsigned int v739; // eax
  __int64 v740; // rax
  __int64 v741; // r12
  __int64 v742; // rax
  __int64 v743; // rdi
  __int64 v744; // rax
  __int64 v745; // rdx
  __int64 v746; // rcx
  __int64 v747; // r8
  __int64 v748; // rax
  __int64 v749; // rax
  std::nothrow_t *v750; // rdx
  _QWORD *v751; // rdi
  std::nothrow_t *v752; // rax
  int v753; // eax
  _QWORD *v754; // rax
  __int64 v755; // rcx
  _QWORD *v756; // rdi
  bool v757; // al
  int v758; // r10d
  _DWORD *v759; // r11
  _DWORD *v760; // rax
  __int64 v761; // r11
  _BYTE *v762; // r15
  unsigned __int64 v763; // r13
  unsigned __int64 v764; // rcx
  std::nothrow_t *v765; // r13
  std::nothrow_t *v766; // rax
  int *v767; // rbp
  __int64 v768; // rbx
  int v769; // r12d
  int *m; // r14
  int v771; // edx
  int *v772; // r13
  __int64 v773; // rax
  unsigned int v774; // edx
  size_t v775; // rax
  int v776; // edx
  __int64 v777; // rax
  __int64 v778; // r12
  __int64 v779; // rcx
  __int64 v780; // r13
  __int64 v781; // rdx
  __int64 v782; // rcx
  __int64 v783; // r8
  __int64 v784; // r9
  __int64 v785; // rax
  _QWORD *v786; // rax
  int v787; // r12d
  __int64 v788; // rax
  std::nothrow_t *v789; // r11
  __int64 v790; // rdi
  char v791; // al
  __int64 v792; // rax
  std::nothrow_t *v793; // rdx
  __int64 v794; // rax
  _QWORD *v795; // rdi
  std::nothrow_t *v796; // rax
  __int64 *v797; // [rsp+0h] [rbp-3E8h] BYREF
  _BYTE *v798; // [rsp+8h] [rbp-3E0h]
  __m128 *v799; // [rsp+10h] [rbp-3D8h] BYREF
  void *v800; // [rsp+18h] [rbp-3D0h] BYREF
  __int64 *v801; // [rsp+20h] [rbp-3C8h]
  void *v802; // [rsp+28h] [rbp-3C0h] BYREF
  std::nothrow_t *v803; // [rsp+30h] [rbp-3B8h]
  __int64 v804; // [rsp+38h] [rbp-3B0h]
  _QWORD *v805; // [rsp+40h] [rbp-3A8h]
  void **v806; // [rsp+48h] [rbp-3A0h]
  void **v807; // [rsp+50h] [rbp-398h]
  __m128 *v808; // [rsp+58h] [rbp-390h]
  __int64 v809; // [rsp+60h] [rbp-388h]
  __int64 v810; // [rsp+68h] [rbp-380h]
  std::nothrow_t *v811; // [rsp+70h] [rbp-378h]
  unsigned int *v812; // [rsp+78h] [rbp-370h]
  __int64 *v813; // [rsp+80h] [rbp-368h]
  __int64 v814; // [rsp+88h] [rbp-360h]
  __int64 v815; // [rsp+90h] [rbp-358h]
  __int64 v816; // [rsp+98h] [rbp-350h]
  __int64 v817; // [rsp+A0h] [rbp-348h]
  __int64 v818; // [rsp+A8h] [rbp-340h]
  char *v819; // [rsp+B0h] [rbp-338h]
  char v820; // [rsp+BFh] [rbp-329h]
  int *v821; // [rsp+C0h] [rbp-328h]
  int *v822; // [rsp+C8h] [rbp-320h]
  _QWORD *v823; // [rsp+D0h] [rbp-318h]
  void **v824; // [rsp+D8h] [rbp-310h] BYREF
  bool v825; // [rsp+EFh] [rbp-2F9h] BYREF
  _BYTE v826[2]; // [rsp+F0h] [rbp-2F8h] BYREF
  __int16 v827; // [rsp+F2h] [rbp-2F6h] BYREF
  int v828; // [rsp+F4h] [rbp-2F4h] BYREF
  int v829; // [rsp+F8h] [rbp-2F0h]
  int v830; // [rsp+FCh] [rbp-2ECh] BYREF
  unsigned __int64 v831; // [rsp+100h] [rbp-2E8h] BYREF
  int *v832; // [rsp+108h] [rbp-2E0h] BYREF
  __int64 v833[2]; // [rsp+110h] [rbp-2D8h] BYREF
  char v834; // [rsp+120h] [rbp-2C8h]
  __int64 v835; // [rsp+124h] [rbp-2C4h]
  char v836; // [rsp+12Ch] [rbp-2BCh]
  void *v837; // [rsp+130h] [rbp-2B8h] BYREF
  __int64 v838; // [rsp+138h] [rbp-2B0h]
  void *v839; // [rsp+150h] [rbp-298h] BYREF
  __int64 v840; // [rsp+158h] [rbp-290h]
  void *v841; // [rsp+170h] [rbp-278h] BYREF
  __m128i v842; // [rsp+178h] [rbp-270h]
  _BYTE s[24]; // [rsp+188h] [rbp-260h] BYREF
  _OWORD v844[4]; // [rsp+1A0h] [rbp-248h] BYREF
  int *v845; // [rsp+1E0h] [rbp-208h]
  _DWORD v846[5]; // [rsp+1F0h] [rbp-1F8h] BYREF
  char v847; // [rsp+204h] [rbp-1E4h]
  void *v848; // [rsp+208h] [rbp-1E0h]
  __int64 v849; // [rsp+210h] [rbp-1D8h]
  _QWORD v850[2]; // [rsp+218h] [rbp-1D0h] BYREF
  __int64 v851; // [rsp+228h] [rbp-1C0h]
  __int64 v852; // [rsp+230h] [rbp-1B8h]
  void *v853; // [rsp+238h] [rbp-1B0h]
  int v854; // [rsp+240h] [rbp-1A8h]
  __int64 v855; // [rsp+248h] [rbp-1A0h]
  __int64 v856; // [rsp+250h] [rbp-198h]
  __int64 v857; // [rsp+258h] [rbp-190h]
  __int64 v858; // [rsp+260h] [rbp-188h]
  void *v859; // [rsp+270h] [rbp-178h] BYREF
  __int128 ptr; // [rsp+278h] [rbp-170h]
  void *v861; // [rsp+288h] [rbp-160h]
  __int64 v862; // [rsp+290h] [rbp-158h]
  _BYTE v863[16]; // [rsp+298h] [rbp-150h] BYREF
  char v864; // [rsp+2A8h] [rbp-140h]
  char v865; // [rsp+2E8h] [rbp-100h]
  unsigned int v866; // [rsp+2F0h] [rbp-F8h]
  char v867; // [rsp+2F4h] [rbp-F4h]
  void *v868; // [rsp+300h] [rbp-E8h] BYREF
  void *v869[2]; // [rsp+308h] [rbp-E0h] BYREF
  void *v870; // [rsp+318h] [rbp-D0h] BYREF
  __m128 v871; // [rsp+320h] [rbp-C8h] BYREF
  __int64 v872; // [rsp+330h] [rbp-B8h]
  __m128i v873; // [rsp+338h] [rbp-B0h]
  __m128i v874; // [rsp+348h] [rbp-A0h]
  void *v875[2]; // [rsp+358h] [rbp-90h]
  __m128i v876; // [rsp+368h] [rbp-80h]
  __m128 v877; // [rsp+378h] [rbp-70h]
  __int64 v878; // [rsp+388h] [rbp-60h] BYREF
  __int128 v879; // [rsp+390h] [rbp-58h]
  __int64 v880; // [rsp+3A0h] [rbp-48h]

  v13 = (int *)*a1;
  v14 = (_QWORD *)a1[1];
  v797 = a1;
  v15 = *((void **)v13 + 31);
  v16 = *((_DWORD *)v14 + 14);
  v824 = a3;
  v831 = a2;
  v802 = v15;
  v17 = *((_QWORD *)v13 + 29);
  v811 = nullptr;
  v798 = (_BYTE *)v17;
  if ( !v16 )
    v811 = (std::nothrow_t *)v14[8];
  v18 = (_BYTE *)*v14;
  LOBYTE(v810) = 1;
  if ( (*v18 & 7) != 1 )
    LOBYTE(v810) = (unsigned int)(*((_DWORD *)v14 + 24) - 24) <= 1;
  v19 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 26 )
  {
    if ( !sub_1E5D9F0(v19, a2, (__int64)a3, a4) )
    {
      v22 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
      LOBYTE(v805) = 0;
      v23 = *(unsigned __int8 *)(v22 + 16);
LABEL_8:
      v24 = v22;
      v25 = (unsigned int)(unsigned __int8)v23 - 16;
      if ( (unsigned int)v25 <= 1 )
        goto LABEL_9;
      goto LABEL_19;
    }
    v19 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v19 + 16) != 26 )
      v19 = sub_F63050(v19, a2, a3, a4);
  }
  if ( sub_A5DBE0(v19, a2, (__int64)a3, a4, a5) )
  {
    LOBYTE(v805) = 1;
    v22 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
    v23 = *(unsigned __int8 *)(v22 + 16);
    goto LABEL_8;
  }
  v32 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(unsigned __int8 *)(v32 + 16);
  v22 = v32;
  if ( (_BYTE)v23 == 26 )
  {
    LOBYTE(v805) = (*(_BYTE *)(v32 + 18) & 0x18) != 0;
  }
  else
  {
    v447 = sub_F63050(v32, a2, v20, v23);
    v22 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v805) = (*(_BYTE *)(v447 + 18) & 0x18) != 0;
    v23 = *(unsigned __int8 *)(v22 + 16);
  }
  v24 = v22;
  v25 = (unsigned int)(unsigned __int8)v23 - 16;
  if ( (unsigned int)v25 <= 1 )
  {
LABEL_9:
    if ( (_BYTE)v23 == 16 )
      goto LABEL_10;
LABEL_22:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16 )
    {
      v33 = sub_F63050(v22, a2, v25, v23);
      v25 = *(unsigned __int8 *)(v24 + 16);
      if ( v33 && ((*(_BYTE *)(v33 + 18) >> 3) & 3) == 1 )
        goto LABEL_25;
    }
    else
    {
      v25 = *(unsigned __int8 *)(v24 + 16);
    }
LABEL_11:
    if ( (_BYTE)v25 != 17 )
      goto LABEL_12;
    goto LABEL_25;
  }
LABEL_19:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 16 > 1 )
    goto LABEL_12;
  v24 = sub_F63050(v22, a2, v25, v23);
  if ( !v24 )
    goto LABEL_12;
  v22 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *(unsigned __int8 *)(v22 + 16);
  if ( (_BYTE)v23 != 16 )
    goto LABEL_22;
LABEL_10:
  v25 = *(unsigned __int8 *)(v24 + 16);
  if ( ((*(_BYTE *)(v22 + 18) >> 3) & 3) != 1 )
    goto LABEL_11;
LABEL_25:
  v34 = *((_DWORD *)v14 + 34);
  if ( v34 )
  {
    v35 = 3605;
    LODWORD(a5) = v34 - 1;
    if ( (_BYTE)v25 != 17 )
      v35 = 3582;
    while ( 1 )
    {
      v36 = (unsigned int *)(v14[16] + 144LL * (unsigned int)a5);
      LODWORD(v859) = 0;
      v37 = *v36;
      if ( *v36 == 2 )
      {
        LODWORD(v859) = 2;
        goto LABEL_630;
      }
      if ( v37 <= 2 )
        break;
      if ( v37 == 3 )
      {
        if ( (_BYTE)v25 == 17 )
        {
          v35 = 3605;
          LODWORD(v859) = 3;
          goto LABEL_630;
        }
        if ( (*(_BYTE *)*v14 & 7) == 1
          || ((1LL << *((_DWORD *)v14 + 24)) & 0x781) == 0
          || (LODWORD(v800) = a5, LOBYTE(v799) = v25, !(unsigned __int8)sub_147B3A0((__int64)v14, &v868))
          || (LODWORD(a5) = (_DWORD)v800, v25 = (unsigned __int8)v799, (_DWORD)v868 != (_DWORD)v800) )
        {
          v35 = 3583;
          goto LABEL_630;
        }
      }
      else if ( v37 != 6 )
      {
        goto LABEL_630;
      }
      a5 = (unsigned int)(a5 - 1);
      if ( (_DWORD)a5 == -1 )
        goto LABEL_12;
    }
    if ( v37 == 1 )
      LODWORD(v859) = 1;
LABEL_630:
    sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v36[1], v35, 0);
    sub_1588370((__int64)&v868, (unsigned int *)&v859);
    sub_15F7200(&v868);
    *((_BYTE *)v14 + 720) |= 1u;
  }
LABEL_12:
  v26 = *((_QWORD *)v13 + 30);
  v825 = 0;
  v27 = 0;
  v827 = 0;
  v28 = *(unsigned int *)(v26 + 960);
  v826[0] = 0;
  v826[1] = 0;
  if ( (_DWORD)v28 )
  {
    v27 = 1;
    sub_1E68820((__int64)v13, v28, a6, *(double *)a7.m128_u64);
  }
  v828 = 0;
  v829 = 0;
  v830 = -1;
  if ( !(_BYTE)v810 )
  {
    v28 = v797[1];
    v29 = *(_DWORD *)(v28 + 96);
    v30 = v25;
    v31 = v29;
    switch ( v29 )
    {
      case 0u:
      case 4u:
        v448 = 0;
        v449 = 0;
        goto LABEL_736;
      case 1u:
      case 2u:
      case 3u:
      case 0x14u:
      case 0x15u:
        v460 = *(_BYTE *)(v28 + 720);
        v448 = v27;
        v449 = 1;
        goto LABEL_765;
      case 7u:
        v460 = *(_BYTE *)(v28 + 720);
        if ( (v460 & 0x40) != 0 )
          goto LABEL_36;
        v448 = 0;
        v449 = 0;
LABEL_765:
        if ( v460 < 0 )
        {
          if ( !v27 )
            goto LABEL_36;
          goto LABEL_767;
        }
LABEL_736:
        v828 = 2;
        v450 = (std::nothrow_t *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
        v451 = *(_BYTE **)(v831 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v451[17] & 4) != 0 )
          goto LABEL_36;
        v452 = *((_DWORD *)v14 + 34);
        LODWORD(v799) = v452;
        if ( v452 )
        {
          v31 = v14[16];
          v23 = 0;
          a5 = 0;
          v800 = v451;
          v453 = 0;
          v454 = -1;
          v21 = 1;
          v455 = v31 + 144LL * (unsigned int)(v452 - 1) + 144;
          while ( 2 )
          {
            v456 = v23;
            v23 = *(unsigned int *)v31;
            switch ( *(_DWORD *)v31 )
            {
              case 0:
                if ( (unsigned int)++v453 <= 2 )
                  goto LABEL_745;
                goto LABEL_36;
              case 1:
                if ( !v453 )
                  v454 = 1;
                goto LABEL_745;
              case 2:
                if ( !v453 )
                  v454 = 0;
                goto LABEL_745;
              case 4:
              case 5:
                if ( !v453 )
                  goto LABEL_741;
                goto LABEL_36;
              default:
                v23 = v456;
LABEL_745:
                v31 += 144;
                if ( v455 != v31 )
                  continue;
                LODWORD(v799) = v453;
                v451 = v800;
                v31 = *((unsigned __int8 *)v800 + 16);
                if ( (_BYTE)v31 == 42 )
                  goto LABEL_747;
                goto LABEL_1157;
            }
          }
        }
        v31 = (unsigned __int8)v451[16];
        if ( (_BYTE)v31 == 42 )
        {
          LODWORD(v799) = 1;
          v454 = -1;
        }
        else
        {
          v454 = -1;
LABEL_1157:
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v451 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
          {
            LODWORD(v800) = 0;
LABEL_755:
            if ( (_BYTE)v31 == 11 )
              goto LABEL_756;
LABEL_1211:
            if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v451 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11
              || (v803 = v450,
                  LOBYTE(v801) = v449,
                  v742 = sub_F63050(v451, v28, v31, v23),
                  v449 = (char)v801,
                  v450 = v803,
                  !v742) )
            {
              v743 = *(_QWORD *)v450;
              if ( *(_BYTE *)(*(_QWORD *)v450 + 16LL) != 33 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v743 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
                {
LABEL_1217:
                  v282 = *(_BYTE *)(v743 + 16) == 34;
                  v803 = v450;
                  v31 = v743;
                  if ( v282
                    || (LOBYTE(v801) = v449,
                        v788 = sub_1E5DA50(v743, v28, v743, v23),
                        v449 = (char)v801,
                        v789 = v803,
                        (v31 = v788) != 0) )
                  {
                    LOBYTE(v801) = v449;
                    LODWORD(v799) = (_DWORD)v799 + 1;
                    v744 = sub_A5E7C0(v31, v28, v31, v23, a5);
                    v748 = sub_9C7D40(v744, v28, v745, v746, v747);
                    v449 = (char)v801;
                    if ( v748 )
                    {
                      v749 = *(_QWORD *)(v748 + 40);
                      v750 = (v749 & 7) != 0 ? nullptr : (std::nothrow_t *)(v749 & 0xFFFFFFFFFFFFFFF8LL);
                      v751 = *((_QWORD **)v13 + 92);
                      v803 = v750;
                      v752 = (std::nothrow_t *)sub_1A88B90(v751);
                      v31 = (__int64)v803;
                      v449 = (char)v801;
                      if ( v752 == v803 && (unsigned int)((_DWORD)v800 + 1) <= 1 && (_DWORD)v799 == 2 )
                        goto LABEL_1226;
                    }
                  }
                  else
                  {
                    v803 = nullptr;
                    v790 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v789 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
                    v791 = *(_BYTE *)(v790 + 16);
                    if ( v791 == 36 )
                    {
                      v792 = sub_9C7D40(v790, v28, 0, v23, a5);
                      v793 = v803;
                      v794 = *(_QWORD *)(v792 + 40);
                      if ( (v794 & 7) == 0 )
                        v793 = (std::nothrow_t *)(v794 & 0xFFFFFFFFFFFFFFF8LL);
                      v795 = *((_QWORD **)v13 + 92);
                      v803 = v793;
                      v796 = (std::nothrow_t *)sub_1A88B90(v795);
                      v31 = (__int64)v803;
                      v449 = (char)v801;
                      if ( v796 == v803 && (_DWORD)v799 == 2 && (unsigned int)v800 <= 1 )
                      {
LABEL_1226:
                        if ( v448 )
                        {
LABEL_767:
                          v21 = 257;
                          v827 = 257;
                          goto LABEL_36;
                        }
                        goto LABEL_36;
                      }
                    }
                    else
                    {
                      if ( !(_DWORD)v799 )
                        goto LABEL_36;
                      if ( v791 == 48 )
                      {
                        v754 = sub_F60F10(v790, v28, 0, v23, a5, v21);
                        v449 = (char)v801;
                        if ( (_DWORD)v799 == 2 && (unsigned int)v800 <= 1 )
                        {
                          v756 = *((_QWORD **)v13 + 92);
                          v28 = (__int64)v754;
                          LOBYTE(v799) = (_BYTE)v801;
                          v757 = sub_1A88E20(v756, (__int64)v754, v31, v755, a5, v21);
                          v449 = (char)v801;
                          if ( v757 )
                            goto LABEL_1226;
                          goto LABEL_1233;
                        }
                      }
                    }
                  }
                  if ( (unsigned int)v799 > 2 )
                    goto LABEL_36;
                  v31 = (unsigned int)v799;
                  v753 = dword_266C260[(unsigned int)v799];
                  if ( v753 != 3 )
                  {
                    if ( v753 <= 3 )
                    {
                      if ( v753 != 1 )
                        goto LABEL_36;
                      goto LABEL_741;
                    }
                    if ( v753 > 5 )
                      goto LABEL_36;
                    goto LABEL_1226;
                  }
LABEL_1233:
                  if ( v449 )
                  {
                    v758 = *((_DWORD *)v14 + 34);
                    if ( v758 )
                    {
                      v759 = (_DWORD *)v14[16];
                      if ( *v759 == 6 )
                      {
                        v760 = v759 + 36;
                        v31 = (__int64)&v759[36 * (v758 - 1) + 36];
                        while ( (_DWORD *)v31 != v760 )
                        {
                          v760 += 36;
                          if ( *(v760 - 36) != 6 )
                            goto LABEL_34;
                        }
                      }
                      else
                      {
LABEL_34:
                        if ( (unsigned __int8)sub_1E5DBB0(v14[101])
                          || (unsigned __int8)sub_1E5DBB0((__int64)(v14 + 91))
                          || (unsigned __int8)sub_1E5DBB0(v761 + 16)
                          || (unsigned __int8)sub_1E5DBB0(*v14 + 32LL) )
                        {
                          v28 = 257;
                          v826[0] = 1;
                          v827 = 257;
                        }
                      }
                    }
                  }
                  goto LABEL_36;
                }
                v803 = v450;
                LOBYTE(v801) = v449;
                if ( !sub_F63050(v743, v28, v31, v23) )
                {
                  v450 = v803;
                  v449 = (char)v801;
                  v743 = *(_QWORD *)v803;
                  goto LABEL_1217;
                }
              }
            }
LABEL_756:
            a5 = (unsigned int)v799;
            if ( (_DWORD)v799 )
              goto LABEL_36;
LABEL_741:
            if ( v27 )
            {
              v830 = v454;
              v827 = 256;
              v825 = v29 - 2 <= 1;
            }
            goto LABEL_36;
          }
          v801 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
          LOBYTE(v800) = v449;
          v697 = sub_F63050(v451, v28, v31, v23);
          v449 = (char)v800;
          v450 = (std::nothrow_t *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
          v451 = (_BYTE *)v697;
          if ( !v697 )
          {
            LODWORD(v800) = 0;
            goto LABEL_754;
          }
LABEL_747:
          LODWORD(v799) = (_DWORD)v799 + 1;
          if ( (unsigned int)v799 > 2 )
            goto LABEL_36;
        }
        v457 = (__int64 *)(*((_QWORD *)v451 + 4) & 0xFFFFFFFFFFFFFFF0LL);
        v451 = (_BYTE *)*v457;
        v450 = (std::nothrow_t *)v457;
        v31 = *(unsigned __int8 *)(*v457 + 16);
        if ( (_BYTE)v31 == 42 )
          goto LABEL_1308;
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v451 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
        {
          LODWORD(v800) = 1;
          goto LABEL_1210;
        }
        v801 = v457;
        LOBYTE(v800) = v449;
        v699 = sub_F63050(v451, v28, v31, v23);
        v449 = (char)v800;
        v450 = (std::nothrow_t *)v801;
        v451 = (_BYTE *)v699;
        if ( v699 )
        {
LABEL_1308:
          if ( (_DWORD)v799 == 2 )
            goto LABEL_36;
          v458 = (std::nothrow_t *)(*((_QWORD *)v451 + 4) & 0xFFFFFFFFFFFFFFF0LL);
          v451 = *(_BYTE **)v458;
          v450 = v458;
          v31 = *(unsigned __int8 *)(*(_QWORD *)v458 + 16LL);
          if ( (_BYTE)v31 == 42 )
            goto LABEL_36;
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v451 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
          {
            v800 = v458;
            LOBYTE(v799) = v449;
            v459 = sub_F63050(v451, v28, v31, v23);
            v449 = (char)v799;
            v450 = (std::nothrow_t *)v800;
            if ( v459 )
              goto LABEL_36;
            LODWORD(v800) = 2;
            LODWORD(v799) = 2;
            goto LABEL_754;
          }
          LODWORD(v800) = 2;
          LODWORD(v799) = 2;
LABEL_1210:
          if ( (_BYTE)v31 == 11 )
            goto LABEL_36;
          goto LABEL_1211;
        }
        LODWORD(v800) = 1;
LABEL_754:
        v451 = *(_BYTE **)v450;
        v31 = *(unsigned __int8 *)(*(_QWORD *)v450 + 16LL);
        goto LABEL_755;
      case 0x13u:
        v828 = 2;
        goto LABEL_36;
      default:
        v31 = v30;
        goto LABEL_36;
    }
  }
  v828 = 1;
  if ( sub_1E5D4A0(v831, v28, v25, v23, a5, v21)
    && !((unsigned __int16)sub_F6A600(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL), v28, v31, v420, a5) >> 8) )
  {
    ++v829;
  }
  v421 = *((_DWORD *)v14 + 34);
  if ( v421 )
  {
    v422 = (int *)v14[16];
    v31 = (__int64)(v422 + 36);
    v423 = (__int64)&v422[36 * (v421 - 1) + 36];
    while ( 1 )
    {
      v424 = *v422;
      if ( !v424 || (unsigned int)(v424 - 4) <= 1 )
        ++v829;
      v422 = (int *)v31;
      if ( v423 == v31 )
        break;
      v31 += 144;
    }
  }
LABEL_36:
  v38 = (unsigned int)v13[2830];
  v832 = v13;
  v799 = (__m128 *)&v827;
  v844[0] = _mm_loadh_ps((const double *)&v799);
  v799 = (__m128 *)&v825;
  v844[1] = _mm_loadh_ps((const double *)&v799);
  v799 = (__m128 *)&v830;
  v844[2] = _mm_loadh_ps((const double *)&v797);
  v799 = (__m128 *)v826;
  v845 = &v828;
  v39 = _mm_loadh_ps((const double *)&v799);
  v844[3] = v39;
  if ( !(_DWORD)v38 )
  {
    if ( sub_1E5D4A0(v831, v28, v31, v38, a5, v21)
      && !((unsigned __int16)sub_F6A600(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL), v28, v412, v413, v414) >> 8) )
    {
      v28 = v831;
      if ( (unsigned __int8)sub_1E5D900((__int64)&v832, v831) )
      {
        if ( v829 )
          --v829;
      }
      else
      {
        v28 = 1;
        v689 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL);
        if ( v689 != 11 )
          v28 = 2 * (unsigned int)(v689 == 33);
        v690 = (const __m128i *)sub_1E69800(
                                  (int **)v844,
                                  v28,
                                  *(_DWORD *)(*v14 + 192LL),
                                  *(_DWORD *)(*v14 + 164LL),
                                  *v14 + 32LL,
                                  (__int64 *)(*v14 + 72LL),
                                  (__m128i)v39,
                                  *(double *)a7.m128_u64);
        if ( v690 )
        {
          v28 = (__int64)sub_1E61530(v802, v690, v827, v413, v414, v691);
          v831 = sub_1E5D550((__int64)v797, v28, v831, v831);
        }
      }
    }
    if ( v828 == 2 )
    {
      v415 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v415 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u
        && !((unsigned __int16)sub_F6A600(v415, v28, v412, v413, v414) >> 8)
        && !(unsigned __int8)sub_1E5D900((__int64)&v832, v831) )
      {
        v416 = *((_DWORD *)v14 + 24);
        v417 = *((_DWORD *)v14 + 34);
        if ( (unsigned int)(v416 - 1) <= 2 || v416 == 18 )
        {
          if ( v417 )
          {
            v418 = (_DWORD *)v14[16];
            for ( i = &v418[36 * (v417 - 1)]; *i > 5u || ((1LL << *i) & 0x27) == 0; i -= 36 )
            {
              if ( v418 == i )
                goto LABEL_654;
            }
          }
          else
          {
LABEL_654:
            sub_1E693A0((__int64)v13, 3u, *(_DWORD *)(*v14 + 192LL), 0, (__m128i)v39, *(double *)a7.m128_u64);
          }
        }
      }
    }
  }
  v40 = v797[1];
  v41 = *((unsigned int *)v797 + 4);
  if ( *(_DWORD *)(v40 + 136) == (_DWORD)v41 )
    v42 = *(_QWORD *)v40 + 32LL;
  else
    v42 = *(_QWORD *)(v40 + 128) + 144 * v41 + 16;
  v43 = *(_QWORD **)(v42 + 8);
  v44 = &v43[*(unsigned int *)(v42 + 16)];
  v45 = (std::nothrow_t *)sub_1E5DA80(v43, (__int64)v44, 217);
  LOBYTE(v803) = v45 != v49;
  if ( !v50 )
  {
    v61 = (std::nothrow_t *)(v14 + 91);
    LOBYTE(v808) = 1;
    v801 = (__int64 *)&v831;
    goto LABEL_52;
  }
  LOBYTE(v808) = 1;
  v51 = v50;
  v806 = nullptr;
  v818 = 144LL * v50;
  while ( 2 )
  {
    v52 = v51 - 1;
    v53 = (__int64 *)v14[16];
    LODWORD(v800) = v51 - 1;
    v54 = (__m128 *)(144 * v52);
    *((_DWORD *)v797 + 4) = v52;
    v55 = (int *)&v53[18 * v52];
    LODWORD(v804) = v51 - 1;
    v56 = (unsigned int)*v55;
    LOBYTE(v46) = (_DWORD)v56 == 6;
    LOBYTE(v805) = ((_DWORD)v56 == 6) & (unsigned __int8)v805;
    switch ( v56 )
    {
      case 0LL:
        if ( (v798[1] & 8) != 0 && sub_18B0460((__int64)v13, v831, v46, v47) )
        {
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, *((_DWORD *)v14 + 20), 0xE78u, 0);
          sub_15F7200(&v868);
          *((_BYTE *)v14 + 720) |= 1u;
        }
        v58 = (__int64 *)(v55 + 4);
        sub_1E69800(
          (int **)v844,
          0,
          v55[1],
          v55[2],
          (__int64)(v55 + 4),
          (__int64 *)(v797[1] + 768),
          (__m128i)v39,
          *(double *)a7.m128_u64);
        if ( (v798[2] & 4) != 0 )
        {
          v253 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v253 + 16) - 35 <= 1
            || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v253 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
            && sub_F63050(v253, 0, v250, v251) )
          {
            v59 = sub_A74EC0((__int64)v802, v831);
            v254 = *((_BYTE *)v55 + 56);
            v831 = v59;
            v255 = v254 & 0x1F;
            if ( !v255 )
              goto LABEL_135;
            v249 = (unsigned __int8)v255;
            v256 = v55[1];
            v257 = v59;
LABEL_583:
            v59 = sub_1E65CD0((__int64 *)v13, v257, v256, v249, 0);
            v831 = v59;
LABEL_135:
            v799 = (__m128 *)(v14 + 91);
            v801 = (__int64 *)&v831;
            goto LABEL_44;
          }
        }
        if ( (v798[47] & 0x20) == 0 )
          goto LABEL_394;
        v316 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
        if ( sub_E3A850(v316) )
          goto LABEL_684;
        v317 = *(_QWORD *)(*(_QWORD *)(v316 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v318 = *(_BYTE *)(v317 + 16);
        if ( v318 == 13 )
        {
          if ( ((*(_WORD *)(v317 + 18) >> 3) & 0x1FF) != 0x1EC )
          {
LABEL_394:
            v801 = (__int64 *)&v831;
            goto LABEL_395;
          }
        }
        else if ( v318 != 41 && v318 != 11 )
        {
          goto LABEL_394;
        }
LABEL_684:
        sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, *((_DWORD *)v14 + 20), 0x125Bu, 0);
        v801 = (__int64 *)&v831;
        sub_1605D30((__int64)&v868, (__int64 *)&v831);
        sub_15F7200(&v868);
        *((_BYTE *)v14 + 720) |= 1u;
LABEL_395:
        v59 = sub_1E6FFC0((__int64 *)v13, v831, v55[1], (__int64)v811, v252);
        v319 = *((_BYTE *)v55 + 56);
        v831 = v59;
        v320 = v319 & 0x1F;
        if ( v320 )
        {
          v59 = sub_1E65CD0((__int64 *)v13, v59, v55[1], (unsigned __int8)v320, 0);
          v831 = v59;
          v799 = (__m128 *)(v14 + 91);
        }
        else
        {
LABEL_299:
          v799 = (__m128 *)(v14 + 91);
        }
        goto LABEL_44;
      case 1LL:
        if ( (v798[1] & 8) != 0 && sub_18B0460((__int64)v13, v831, v46, v47) )
        {
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, *((_DWORD *)v14 + 20), 0xE78u, 0);
          sub_15F7200(&v868);
          *((_BYTE *)v14 + 720) |= 1u;
        }
        v58 = (__int64 *)(v55 + 4);
        v59 = sub_1E70970((__int64 *)v13, v831, (v55[14] & 2) != 0, (unsigned int)v55[1], (__int64)v53);
        v831 = v59;
        if ( (v55[14] & 1) == 0 )
          goto LABEL_135;
        v426 = v55[1];
        v427 = 2;
        v114 = v59;
        goto LABEL_674;
      case 2LL:
        if ( (v798[1] & 8) != 0 && sub_18B0460((__int64)v13, v831, v46, v47) )
        {
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, *((_DWORD *)v14 + 20), 0xE78u, 0);
          sub_15F7200(&v868);
          *((_BYTE *)v14 + 720) |= 1u;
        }
        v228 = *((__int64 **)v55 + 8);
        v58 = (__int64 *)(v55 + 4);
        if ( !(_DWORD)v800 || v228 )
          goto LABEL_285;
        v229 = *(_QWORD **)(*v14 + 40LL);
        v230 = 8LL * *(unsigned int *)(*v14 + 48LL);
        v231 = &v229[(unsigned __int64)v230 / 8];
        v232 = v230 >> 3;
        v233 = v230 >> 5;
        if ( v233 )
        {
          if ( (*(_BYTE *)(*v229 + 58LL) & 0x10) != 0 )
          {
            v235 = *(_QWORD **)(*v14 + 40LL);
            goto LABEL_925;
          }
          if ( (*(_BYTE *)(v229[1] + 58LL) & 0x10) != 0 )
          {
            v698 = v229 + 1;
LABEL_282:
            if ( v231 == v698 )
              goto LABEL_285;
            goto LABEL_283;
          }
          v234 = &v229[4 * v233];
          if ( (*(_BYTE *)(v229[2] + 58LL) & 0x10) != 0 )
          {
            v698 = v229 + 2;
            goto LABEL_282;
          }
          while ( 1 )
          {
            if ( (*(_BYTE *)(v229[3] + 58LL) & 0x10) != 0 )
            {
              v698 = v229 + 3;
              goto LABEL_282;
            }
            v235 = v229 + 4;
            if ( v234 == v229 + 4 )
              break;
            if ( (*(_BYTE *)(v229[4] + 58LL) & 0x10) != 0 )
              goto LABEL_925;
            if ( (*(_BYTE *)(v229[5] + 58LL) & 0x10) != 0 )
            {
              v698 = v229 + 5;
              goto LABEL_282;
            }
            if ( (*(_BYTE *)(v229[6] + 58LL) & 0x10) != 0 )
            {
              v698 = v229 + 6;
              goto LABEL_282;
            }
            v229 += 4;
          }
          v232 = v231 - v235;
        }
        else
        {
          v235 = *(_QWORD **)(*v14 + 40LL);
        }
        switch ( v232 )
        {
          case 2LL:
            goto LABEL_1109;
          case 3LL:
            if ( (*(_BYTE *)(*v235 + 58LL) & 0x10) != 0 )
              goto LABEL_925;
            ++v235;
LABEL_1109:
            if ( (*(_BYTE *)(*v235 + 58LL) & 0x10) != 0 )
            {
LABEL_925:
              if ( v231 == v235 )
                goto LABEL_285;
LABEL_283:
              v236 = v14[16] + 144LL * (v51 - 2);
              if ( *(_DWORD *)v236 == 2 && !*(_QWORD *)(v236 + 64) )
              {
                v59 = v831;
                v799 = (__m128 *)(v14 + 91);
                v801 = (__int64 *)&v831;
                goto LABEL_44;
              }
LABEL_285:
              v237 = *((_BYTE *)v55 + 56);
              if ( (v237 & 0x40) != 0 )
              {
                v398 = *((_DWORD *)v14 + 24);
                if ( (unsigned int)(v398 - 1) <= 2 || v398 == 18 )
                {
                  v239 = 2;
                  if ( (v237 & 0x1F) == 0 )
                  {
                    if ( v828 != 2 )
                      goto LABEL_297;
LABEL_597:
                    v399 = *((_QWORD *)v55 + 3);
                    v400 = v399 + 8LL * (unsigned int)v55[8];
                    if ( v400 != v399 )
                    {
                      if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v399 + 72LL) + 8LL) - 382) <= 3u )
                        goto LABEL_297;
                      v401 = v399 + 8;
                      while ( 1 )
                      {
                        v402 = v401;
                        if ( v400 == v401 )
                          break;
                        v401 += 8;
                        if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v402 + 72LL) + 8LL) - 382) <= 3u )
                          goto LABEL_297;
                      }
                    }
                    if ( v239 != 1 )
                    {
                      v403 = *((_DWORD *)v14 + 24);
                      if ( (unsigned int)(v403 - 1) <= 2 || v403 == 18 )
                      {
                        if ( (_DWORD)v800 )
                        {
                          v404 = (_DWORD *)v14[16];
                          for ( j = &v404[36 * v51 - 72]; *j > 5u || ((1LL << *j) & 0x27) == 0; j -= 36 )
                          {
                            if ( v404 == j )
                              goto LABEL_611;
                          }
                        }
                        else
                        {
LABEL_611:
                          v406 = v55[1];
                          v799 = (__m128 *)v228;
                          sub_1E693A0((__int64)v13, 3u, v406, 0, (__m128i)v39, *(double *)a7.m128_u64);
                          v228 = (__int64 *)v799;
                        }
                      }
                    }
LABEL_297:
                    v59 = sub_1E66B60(
                            (__m128 *)v13,
                            v831,
                            v239,
                            (unsigned __int64)v228,
                            v55[14] & 0x1F,
                            *(_QWORD *)(v55 + 1),
                            v39,
                            a7,
                            (__int64)v811);
                    v831 = v59;
                    goto LABEL_135;
                  }
                  goto LABEL_290;
                }
                v407 = v55[1];
                v799 = *((__m128 **)v55 + 8);
                sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v407, 0xC12u, 0);
                sub_15F7200(&v868);
                *((_BYTE *)v14 + 720) |= 1u;
                v228 = (__int64 *)v799;
                v237 = *((_BYTE *)v55 + 56);
              }
              else if ( (v237 & 0x20) != 0 )
              {
                v238 = *((_DWORD *)v14 + 24);
                if ( v238 == 18 || (unsigned int)(v238 - 1) <= 2 || v238 == 4 )
                {
                  v239 = 1;
                  goto LABEL_290;
                }
                v619 = v55[1];
                v799 = *((__m128 **)v55 + 8);
                sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v619, 0xC14u, 0);
                v410 = "'static'";
                goto LABEL_623;
              }
              v239 = 0;
              if ( (v237 & 0x1F) == 0 )
                goto LABEL_296;
              v408 = *((_DWORD *)v14 + 24);
              if ( v408 == 18 || (unsigned int)(v408 - 1) <= 2 || v408 == 4 )
                goto LABEL_624;
              v409 = v55[1];
              v799 = (__m128 *)v228;
              sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v409, 0xC14u, 0);
              v410 = "type qualifier";
LABEL_623:
              v859 = v410;
              sub_15AFC70((__int64)&v868, &v859);
              sub_15F7200(&v868);
              *((_BYTE *)v55 + 56) &= 0xE0u;
              v228 = (__int64 *)v799;
              *((_BYTE *)v14 + 720) |= 1u;
LABEL_624:
              v239 = 0;
LABEL_290:
              if ( (_DWORD)v800 )
              {
                v240 = (_DWORD *)v14[16];
                for ( k = &v240[36 * v51 - 72]; *k > 5u || ((1LL << *k) & 0x27) == 0; k -= 36 )
                {
                  if ( v240 == k )
                    goto LABEL_296;
                }
                v571 = v55[1];
                v799 = (__m128 *)v228;
                v809 = (__int64)&v868;
                sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v571, 0xC13u, 0);
                if ( v239 == 1 )
                {
                  v672 = v809;
                  v859 = "'static'";
                  sub_15AFC70(v809, &v859);
                  v673 = (_BYTE *)v672;
                  v239 = 0;
                  sub_15F7200(v673);
                }
                else
                {
                  v859 = "type qualifier";
                  sub_15AFC70(v809, &v859);
                  sub_15F7200((_BYTE *)v809);
                }
                v228 = (__int64 *)v799;
                *((_BYTE *)v55 + 56) &= 0xE0u;
                *((_BYTE *)v14 + 720) |= 1u;
              }
LABEL_296:
              if ( v828 != 2 )
                goto LABEL_297;
              goto LABEL_597;
            }
            ++v235;
            break;
          case 1LL:
            break;
          default:
            goto LABEL_285;
        }
        if ( (*(_BYTE *)(*v235 + 58LL) & 0x10) == 0 )
          goto LABEL_285;
        goto LABEL_925;
      case 3LL:
        v115 = *((_QWORD *)v55 + 13);
        if ( v115 && ((LOBYTE(v805) = 1, (*(_BYTE *)(v115 + 3) & 0x7C) != 0) || *(_DWORD *)(v115 + 48)) )
        {
          if ( (v14[90] & 1) != 0 )
            goto LABEL_316;
        }
        else
        {
          LOBYTE(v805) = v55[20] != 0;
          if ( (v14[90] & 1) != 0 )
          {
LABEL_316:
            v124 = v831;
            v125 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
            v258 = *(_QWORD *)(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
            v134 = *(_QWORD *)v258;
            v135 = *(_BYTE *)(*(_QWORD *)v258 + 16LL);
LABEL_317:
            if ( v135 != 13 )
              goto LABEL_180;
            goto LABEL_318;
          }
        }
        v116 = *v14;
        if ( ((*(_DWORD *)*v14 >> 12) & 0x7F) == 0x45 )
          goto LABEL_316;
        v117 = *((_DWORD *)v14 + 34);
        if ( v55[18]
          && (v118 = *(_QWORD *)(*((_QWORD *)v55 + 12) + 16LL)) != 0
          && (*(_BYTE *)(v118 + 28) & 0x7F) == 0x2B )
        {
          if ( !v117 )
          {
            if ( !*(_DWORD *)(v118 + 100) || *((_DWORD *)v14 + 24) == 17 )
              goto LABEL_154;
            v53 = nullptr;
            goto LABEL_1056;
          }
          if ( *(_DWORD *)v53 != 6 )
            goto LABEL_150;
        }
        else
        {
          if ( !v117 || *(_DWORD *)v53 != 6 )
            goto LABEL_154;
          v118 = 0;
        }
        v119 = v53 + 18;
        v120 = 0;
        while ( ++v120 < v117 )
        {
          v53 = v119;
          v119 += 18;
          if ( *((_DWORD *)v119 - 36) != 6 )
            goto LABEL_149;
        }
        v53 = nullptr;
LABEL_149:
        if ( v118 )
        {
LABEL_150:
          v121 = *((_DWORD *)v14 + 24);
          if ( !*(_DWORD *)(v118 + 100) || v121 == 17 || v121 == 7 && v55 == (int *)v53 )
            goto LABEL_154;
LABEL_1056:
          if ( !*((_DWORD *)v14 + 2) || !*((_DWORD *)v14 + 3) || v14[2] )
          {
            v801 = (__int64 *)v54;
            v799 = (__m128 *)v53;
            v620 = sub_16A2930((__int64)v13, (__int64)(v14 + 1), 0, v116, (__int64)v53, (__int64)v54);
            v621 = (__int64 *)v799;
            v54 = (__m128 *)v801;
            if ( v620 && (*(_BYTE *)(v620 + 8) & 0x7Fu) - 59 <= 2 )
            {
              v116 = *v14;
            }
            else
            {
              v799 = (__m128 *)v801;
              if ( v55 == (int *)v621 )
              {
                v739 = sub_B73090(v118);
                sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v739, 0xEC7u, 0);
                v809 = (__int64)&v868;
                LODWORD(v841) = 2;
                v740 = sub_1587D10((__int64)&v868, (int *)&v841);
                v846[0] = 0;
                v741 = sub_1587D10(v740, v846);
                v859 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
                sub_1587DB0(v741, (__int64 *)&v859);
                sub_15F7200((_BYTE *)v809);
              }
              else
              {
                v696 = sub_B73090(v118);
                sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v696, 0xEC4u, 0);
                v859 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
                sub_1587DB0((__int64)&v868, (__int64 *)&v859);
                sub_15F7200(&v868);
              }
              v54 = v799;
              *(_DWORD *)(v118 + 100) = 0;
              v116 = *v14;
              *((_BYTE *)v14 + 720) |= 1u;
              LOBYTE(v808) = 0;
            }
          }
        }
LABEL_154:
        v122 = *(_DWORD *)v116;
        v123 = *((_BYTE *)v55 + 57) & 2;
        if ( ((*(_DWORD *)v116 & 0x7F000) == 0x34000 || (v122 & 0x7E000) == (_DWORD)&stru_32000)
          && !v123
          && !(_DWORD)v800 )
        {
          v678 = *(_DWORD *)(v116 + 192);
          v679 = (__int64 *)(v13 + 2);
          v799 = v54;
          if ( (*(_BYTE *)(*((_QWORD *)v13 + 29) + 1LL) & 0x20) != 0 )
          {
            sub_168B9F0((__int64)&v868, v679, v678, 0x1A45u, 0);
            sub_15F7200(&v868);
            v124 = v831;
            v54 = v799;
            v125 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
            v126 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
          }
          else
          {
            v680 = 3261;
            if ( ((v122 >> 12) & 0x7F) != 0x32 )
              v680 = 3613;
            sub_168B9F0((__int64)&v868, v679, v678, v680, 0);
            sub_15F7200(&v868);
            LOBYTE(v808) = 0;
            v54 = v799;
            v124 = *((_QWORD *)v802 + 2340);
            *((_BYTE *)v14 + 720) |= 1u;
            v831 = v124;
            v125 = (__int64 *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
            v126 = *(_QWORD *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
          }
          goto LABEL_171;
        }
        v124 = v831;
        v125 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
        v126 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
        if ( !v123 )
          goto LABEL_171;
        v127 = *(_BYTE *)(v126 + 16);
        if ( v127 == 40 )
        {
          v683 = *((_DWORD *)v14 + 22);
          v799 = v54;
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v683, 0x1443u, 0);
          v684 = sub_1605D30((__int64)&v868, (__int64 *)&v831);
          v859 = (void *)v14[11];
          sub_1587DB0(v684, (__int64 *)&v859);
          goto LABEL_168;
        }
        if ( *((_DWORD *)v14 + 14) == 9 )
        {
          if ( *((_QWORD *)v802 + 2384) != v831 )
          {
            v677 = *(_DWORD *)(v116 + 160);
            v799 = v54;
            sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v677, 0xE27u, 0);
            v859 = (void *)v14[11];
            sub_1587DB0((__int64)&v868, (__int64 *)&v859);
LABEL_168:
            sub_15F7200(&v868);
            LOBYTE(v808) = 0;
            v54 = v799;
            *((_BYTE *)v14 + 720) |= 1u;
          }
        }
        else if ( *((_DWORD *)v14 + 24) != 17
               && ((v831 & 0xF) != 0
                || *(_QWORD *)&byte_8[v831 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
                 | (*(__int64 *)&byte_8[v831 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1
                || v127 != 16
                || (*(_BYTE *)(v126 + 18) & 0x18) != 0
                || *(_QWORD *)(v126 + 32)) )
        {
          v128 = *(_DWORD *)(v116 + 192);
          v859 = *(void **)(v116 + 160);
          if ( !v128 )
          {
            v128 = v55[34];
            v859 = (void *)v14[11];
          }
          v799 = v54;
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v128, 0x1444u, 0);
          v129 = sub_1605D30((__int64)&v868, (__int64 *)&v831);
          sub_15884C0(v129, (__int64 *)&v859);
          goto LABEL_168;
        }
        v130 = *((_QWORD *)v55 + 16);
        v799 = v54;
        v131 = sub_1E5F010(v130, &v824);
        v54 = v799;
        v831 = v131;
        v132 = (__int64 *)(v131 & 0xFFFFFFFFFFFFFFF0LL);
        if ( !v132 )
        {
          v124 = *((_QWORD *)v802 + 2340);
          *((_BYTE *)v14 + 720) |= 1u;
          v831 = v124;
          v125 = (__int64 *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
          v126 = *(_QWORD *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_171;
        }
        v644 = sub_F57E80(*v132);
        v54 = v799;
        v648 = v644;
        if ( !v644 || *(_BYTE *)(v644 + 16) != 16 )
        {
LABEL_1089:
          v124 = v831;
          v125 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
          v126 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_171;
        }
        v649 = *((_DWORD *)v14 + 24);
        if ( v649 == 1 )
        {
          v700 = *((_QWORD *)v13 + 460);
          v701 = v700 + 56LL * (unsigned int)v13[922] - 56;
          if ( v700 + 56LL * (unsigned int)v13[922] == 56 )
            goto LABEL_1089;
        }
        else
        {
          if ( v649 != 18 )
            goto LABEL_1089;
          v773 = sub_15F2610((__int64)v13, 0, v645, v646, v647, (__int64)v799);
          v54 = v799;
          v701 = v773 + 1528;
          if ( !v773 )
            goto LABEL_1089;
        }
        v799 = v54;
        v124 = sub_1E607E0(v797, v831, v824, v648, v701, v39, a7);
        v54 = v799;
        v824 = v702;
        v125 = (__int64 *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
        v831 = v124;
        v126 = *(_QWORD *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_171:
        v133 = *(_QWORD *)(v126 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v134 = *(_QWORD *)v133;
        v135 = *(_BYTE *)(*(_QWORD *)v133 + 16LL);
        if ( (v14[90] & 1) != 0 || ((*(_DWORD *)*v14 >> 12) & 0x7F) == 0x45 )
          goto LABEL_317;
        if ( (unsigned __int8)(v135 - 2) > 4u )
        {
          if ( (unsigned int)v135 - 25 > 1 || *((_DWORD *)v14 + 14) == 2 )
            goto LABEL_317;
        }
        else if ( (*(_BYTE *)(*((_QWORD *)v13 + 29) + 89LL) & 1) != 0 || *((_DWORD *)v14 + 14) == 2 )
        {
          goto LABEL_180;
        }
        v136 = 3859;
        if ( !(_DWORD)v800 && *((_DWORD *)v14 + 24) == 16 )
          v136 = 3334;
        v137 = v55[1];
        v799 = v54;
        sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v137, v136, 0);
        LOBYTE(v859) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL)
                                                                                + 8LL)
                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 16LL)
                     - 25 <= 1;
        v138 = sub_1588420((__int64)&v868, (unsigned __int8 *)&v859);
        sub_1605D30(v138, (__int64 *)&v831);
        sub_15F7200(&v868);
        LOBYTE(v808) = 0;
        v54 = v799;
        v124 = *((_QWORD *)v802 + 2340);
        *((_BYTE *)v14 + 720) |= 1u;
        v831 = v124;
        v125 = (__int64 *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
        v139 = *(_QWORD *)(*(_QWORD *)(v124 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
        v134 = *(_QWORD *)v139;
        if ( *(_BYTE *)(*(_QWORD *)v139 + 16LL) != 13 )
        {
LABEL_180:
          v140 = v125[1];
          if ( (v140 & 8) == 0 )
            goto LABEL_181;
          goto LABEL_325;
        }
LABEL_318:
        if ( ((*(_WORD *)(v134 + 18) >> 3) & 0x1FF) != 0x1E0 )
          goto LABEL_180;
        v259 = *((_QWORD *)v13 + 29);
        if ( (*(_BYTE *)(v259 + 47) & 0x20) != 0 )
        {
          v799 = v54;
          v511 = j__strlen("cl_khr_fp16");
          v512 = sub_FF8450((__int64)(v13 + 50), (__int64)"cl_khr_fp16", v511, v259);
          v54 = v799;
          if ( v512 )
            goto LABEL_324;
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, *((_DWORD *)v14 + 20), 0x1255u, 0);
          v513 = sub_1605D30((__int64)&v868, (__int64 *)&v831);
          LODWORD(v859) = 0;
          v514 = (void **)v513;
LABEL_850:
          sub_1587D10((__int64)v514, (int *)&v859);
          sub_15F7200(&v868);
          v124 = v831;
          v54 = v799;
          *((_BYTE *)v14 + 720) |= 1u;
          v125 = (__int64 *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_180;
        }
        if ( (*(_BYTE *)(v259 + 60) & 8) != 0 )
          goto LABEL_180;
        v260 = *(_BYTE **)(*((_QWORD *)v13 + 31) + 17448LL);
        v261 = *(__int64 (**)(void))(*(_QWORD *)v260 + 88LL);
        if ( (char *)v261 == (char *)sub_102B7F0 )
        {
          v262 = v260[277];
        }
        else
        {
          v799 = v54;
          v262 = v261();
          v54 = v799;
        }
        if ( !v262 )
        {
          v682 = *((_DWORD *)v14 + 20);
          v799 = v54;
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v682, 0x12BCu, 0);
          v514 = &v868;
          LODWORD(v859) = 1;
          goto LABEL_850;
        }
LABEL_324:
        v124 = v831;
        v125 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
        v140 = *(_QWORD *)&byte_8[v831 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v140 & 8) == 0 )
          goto LABEL_181;
LABEL_325:
        if ( *(_DWORD *)((char *)&qword_18 + (v140 & 0xFFFFFFFFFFFFFFF0LL) + 4) )
        {
          v263 = v55[1];
          v799 = v54;
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v263, 0x130Cu, 0);
          v264 = sub_1605D30((__int64)&v868, (__int64 *)&v831);
          LODWORD(v859) = 0;
          sub_1587D10(v264, (int *)&v859);
          sub_15F7200(&v868);
          v124 = v831;
          v54 = v799;
          v125 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
        }
LABEL_181:
        v141 = *v125;
        v142 = *(_QWORD *)(*v125 + 8) & 0xFFFFFFFFFFFFFFF0LL;
        v143 = *(_QWORD *)v142;
        v144 = *(unsigned __int8 *)(*(_QWORD *)v142 + 16LL);
        if ( (v798[47] & 0x20) == 0 )
          goto LABEL_187;
        if ( (_BYTE)v144 != 11 )
        {
          v799 = v54;
          v145 = sub_E3A850(v141);
          v54 = v799;
          if ( !v145 )
          {
            if ( (_BYTE)v144 == 13 )
            {
              if ( ((*(_WORD *)(v143 + 18) >> 3) & 0x1FF) != 0x1EC )
                goto LABEL_185;
            }
            else if ( (_BYTE)v144 != 41 )
            {
              goto LABEL_185;
            }
          }
        }
        v146 = *((_DWORD *)v14 + 20);
        v799 = v54;
        sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v146, 0x1255u, 0);
        v147 = sub_1605D30((__int64)&v868, (__int64 *)&v831);
        LODWORD(v859) = 1;
        sub_1587D10(v147, (int *)&v859);
        sub_15F7200(&v868);
        *((_BYTE *)v14 + 720) |= 1u;
        v54 = v799;
LABEL_185:
        if ( (v55[14] & 2) == 0 )
          goto LABEL_186;
        v557 = *((_QWORD *)v13 + 29);
        v799 = v54;
        v558 = j__strlen("__cl_clang_variadic_functions");
        v559 = sub_FF8450((__int64)(v13 + 50), (__int64)"__cl_clang_variadic_functions", v558, v557);
        v54 = v799;
        if ( v559 )
          goto LABEL_186;
        if ( !*((_DWORD *)v14 + 14) )
        {
          v560 = v14[8];
          if ( v560 )
          {
            v561 = j__strlen("printf");
            v562 = *(unsigned int **)(v560 + 16);
            v54 = v799;
            v563 = *v562;
            v564 = v562 + 4;
            if ( v563 == v561 )
            {
              if ( !*v562 || (v565 = memcmp(v562 + 4, "printf", *v562), v54 = v799, !v565) )
              {
                v799 = v54;
                v566 = sub_FEAA90((__int64)v798);
                v54 = v799;
                if ( v566 > 0x77 )
                  goto LABEL_186;
                if ( *((_DWORD *)v14 + 14) )
LABEL_546:
                  BUG();
                v567 = *(unsigned int **)(v14[8] + 16LL);
                v563 = *v567;
                v564 = v567 + 4;
              }
            }
            v799 = v54;
            v568 = j__strlen("__");
            v54 = v799;
            if ( v568 <= v563 )
            {
              if ( !v568 || (v569 = memcmp(v564, "__", v568), v54 = v799, !v569) )
              {
LABEL_186:
                v124 = v831;
                v125 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
                v141 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
                v144 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v141 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
                goto LABEL_187;
              }
            }
          }
        }
        v570 = *((_DWORD *)v14 + 20);
        v799 = v54;
        sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v570, 0x1265u, 0);
        sub_15F7200(&v868);
        v124 = v831;
        v54 = v799;
        *((_BYTE *)v14 + 720) |= 1u;
        v125 = (__int64 *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
        v141 = *(_QWORD *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
        v144 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v141 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_187:
        if ( (unsigned int)(v144 - 35) <= 1 )
        {
          v799 = v54;
          if ( v824 )
          {
            v148 = *v824;
            v809 = (__int64)&v868;
            v868 = v148;
            v869[0] = v824 + 1;
            v149 = sub_F6CCB0((__int64 *)&v868, v39);
            v150 = *v824;
            v869[0] = v824 + 1;
            v868 = v150;
            v151 = sub_F6CE20((__int64 *)&v868);
            v152 = sub_15F0EF0((__int64)v13, v151, 0, (__m128i)v39, *(double *)a7.m128_u64);
            v153 = (__int64 *)v799;
            v154 = v152;
          }
          else
          {
            v149 = *(_DWORD *)(*v14 + 192LL);
            v556 = sub_15F0EF0((__int64)v13, *(_DWORD *)(*v14 + 164LL), 0, (__m128i)v39, *(double *)a7.m128_u64);
            v153 = (__int64 *)v799;
            v154 = v556;
            v809 = (__int64)&v868;
          }
          v155 = v149;
          v156 = (_BYTE *)v809;
          v799 = (__m128 *)v153;
          sub_168B9F0(v809, (__int64 *)v13 + 1, v155, 0x113Fu, 0);
          v846[0] = 0;
          v157 = sub_1587D10((__int64)v156, v846);
          v158 = sub_1605D30(v157, (__int64 *)&v831);
          v159 = j__strlen("*");
          v807 = &v859;
          sub_9EC740((__int64)&v859, v154, "*", v159, 0);
          sub_1589170(v158, v807);
          v160 = (__int64 *)v799;
          if ( v861 != v807 + 5 )
          {
            operator delete(v861);
            v160 = (__int64 *)v799;
          }
          v161 = v809;
          v799 = (__m128 *)v160;
          sub_15F7200((_BYTE *)v809);
          v162 = sub_A74EC0((__int64)v802, v831);
          v54 = v799;
          v831 = v162;
          if ( v824 )
          {
            si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
            v873.m128i_i32[0] = 0;
            v868 = (void *)(v161 + 24);
            *(__m128 *)v869 = si128;
            v873.m128i_i8[4] = 0;
            v163 = *v824;
            v801 = (__int64 *)v799;
            v807 = (void **)(v161 + 24);
            sub_1EA6360(v161, v163, v824 + 1);
            sub_1EA6140(v161, v831, 4, 4);
            v164 = v802;
            *v165 = v154;
            v166 = (char *)v869[0] - (char *)v869[1];
            v170 = sub_A81BC0(v164, v831, LODWORD(v869[0]) - LODWORD(v869[1]), v167, v168, v169);
            v171 = (void **)v868;
            v799 = (__m128 *)v170;
            memcpy(v170 + 1, (char *)v868 + (unsigned __int64)v869[1], v166);
            v54 = (__m128 *)v801;
            v824 = (void **)v799;
            if ( v171 && v171 != v807 )
            {
              v799 = (__m128 *)v801;
              operator delete[](v171);
              v54 = v799;
            }
          }
          else
          {
            LOBYTE(v808) = 0;
          }
          v124 = v831;
          *((_BYTE *)v14 + 720) |= 1u;
          v125 = (__int64 *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
          v141 = *(_QWORD *)(v124 & 0xFFFFFFFFFFFFFFF0LL);
        }
        v172 = v125[1];
        v173 = v124 & 7;
        v174 = v124 & 7;
        v175 = v173 | v172 & 7;
        if ( !v175 )
        {
          v176 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v141 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v176 != 7 )
          {
            v801 = (__int64 *)&v831;
LABEL_200:
            if ( (v172 & 8) == 0 )
              goto LABEL_201;
            goto LABEL_555;
          }
          if ( (*(_BYTE *)(*((_QWORD *)v13 + 29) + 1LL) & 8) != 0 && (*(_BYTE *)(v141 + 17) & 4) != 0 )
          {
            v801 = (__int64 *)&v831;
            goto LABEL_692;
          }
LABEL_542:
          v372 = v14[16];
          v373 = (char *)v54 + v372;
          if ( (v373[57] & 2) != 0 )
          {
            sub_1E6B070((__int64)v13, 0x1C91u, v173, *((_DWORD *)v373 + 34), 0, 0, 0, 0, 0);
          }
          else
          {
            v374 = *((_DWORD *)v14 + 34);
            if ( v374 != v51 )
            {
              v375 = v51;
              while ( 2 )
              {
                v376 = v372 + 144LL * v375;
                switch ( *(_DWORD *)v376 )
                {
                  case 0:
                    sub_1E6B070(
                      (__int64)v13,
                      0x1C91u,
                      *(_BYTE *)(v376 + 56) & 0x1F,
                      0,
                      *(_DWORD *)(v376 + 60),
                      *(_DWORD *)(v376 + 64),
                      *(_DWORD *)(v376 + 68),
                      *(_DWORD *)(v376 + 72),
                      *(_DWORD *)(v376 + 76));
                    goto LABEL_550;
                  case 1:
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 7:
                    if ( v176 == 7 )
                      v175 |= 0x10u;
                    sub_1E6B070((__int64)v13, 0x1C91u, v175, *((_DWORD *)v14 + 20), 0, 0, 0, 0, 0);
                    goto LABEL_550;
                  case 6:
                    if ( v374 == ++v375 )
                      break;
                    continue;
                  default:
                    goto LABEL_546;
                }
                break;
              }
            }
            if ( *((_DWORD *)v14 + 14) == 2 )
              goto LABEL_551;
            sub_1E6B070(
              (__int64)v13,
              0x1C91u,
              (*(_BYTE *)(*v14 + 3LL) >> 2) & 0x1F,
              *((_DWORD *)v14 + 20),
              *(_DWORD *)(*v14 + 220LL),
              *(_DWORD *)(*v14 + 228LL),
              *(_DWORD *)(*v14 + 224LL),
              *(_DWORD *)(*v14 + 232LL),
              *(_DWORD *)(*v14 + 236LL));
          }
LABEL_550:
          v124 = v831;
          v174 = v831 & 7;
LABEL_551:
          v801 = (__int64 *)&v831;
          goto LABEL_552;
        }
        if ( (*(_BYTE *)(*((_QWORD *)v13 + 29) + 1LL) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v141 + 17) & 4) != 0 )
            goto LABEL_551;
          v176 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v141 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v176 == 48 )
            goto LABEL_551;
          goto LABEL_542;
        }
        v434 = *(_QWORD *)(*(_QWORD *)(v141 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v176 = *(_BYTE *)(v434 + 16);
        if ( v176 != 13 || ((*(_WORD *)(v434 + 18) >> 3) & 0x1FF) != 0x1B3 || ((*((_BYTE *)v14 + 720) >> 2) & 3) != 1 )
          goto LABEL_542;
        sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v55[1], 0xF14u, 0);
        v801 = (__int64 *)&v831;
        sub_1605D30((__int64)&v868, (__int64 *)&v831);
        sub_15F7200(&v868);
        v124 = v831;
        v174 = v831 & 7;
LABEL_552:
        if ( (v174 & 4) != 0 )
        {
          if ( *(char *)(*((_QWORD *)v13 + 29) + 1LL) >= 0 )
            goto LABEL_554;
LABEL_694:
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v55[1], 0x1ABDu, 0);
          sub_1605D30((__int64)&v868, v801);
          sub_15F7200(&v868);
          v124 = v831;
          goto LABEL_554;
        }
LABEL_692:
        v172 = *(_QWORD *)&byte_8[v124 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v172 & 4) == 0 )
          goto LABEL_200;
        if ( *(char *)(*((_QWORD *)v13 + 29) + 1LL) < 0 )
          goto LABEL_694;
LABEL_554:
        v172 = *(_QWORD *)&byte_8[v124 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v172 & 8) == 0 )
          goto LABEL_201;
LABEL_555:
        if ( (*(__int64 *)((char *)&qword_18 + (v172 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
          goto LABEL_201;
        if ( *((_DWORD *)v14 + 34) > v51 )
        {
          v583 = v14[16] + v818 - 144LL * (_QWORD)v806;
          v868 = *(void **)v583;
          LODWORD(v869[0]) = *(_DWORD *)(v583 + 8);
          v869[1] = *(void **)(v583 + 16);
          v809 = (__int64)&v868;
          v870 = &v871.m128_u16[4];
          v871.m128_u64[0] = 0x200000000LL;
          if ( *(_DWORD *)(v583 + 32) )
          {
            sub_14FA610((void **)(v809 + 24), (char **)(v583 + 24));
            v873 = _mm_loadu_si128((const __m128i *)(v583 + 56));
            v584 = (char *)v870 + 8 * v871.m128_u32[0];
            v874 = _mm_loadu_si128((const __m128i *)(v583 + 72));
            a13 = (__m128)_mm_loadu_si128((const __m128i *)(v583 + 88));
            *(__m128 *)v875 = a13;
            v876 = _mm_loadu_si128((const __m128i *)(v583 + 104));
            a12 = _mm_loadu_si128((const __m128i *)(v583 + 120));
            v877 = (__m128)a12;
            v878 = *(_QWORD *)(v583 + 136);
            if ( v870 == v584 )
              goto LABEL_985;
            v585 = *(_QWORD *)v870;
            if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v870 + 72LL) + 8LL) != 271 )
            {
              v586 = (char *)v870 + 8;
              while ( v586 != v584 )
              {
                v585 = *(_QWORD *)v586;
                v586 += 8;
                if ( *(_WORD *)(*(_QWORD *)(v585 + 72) + 8LL) == 271 )
                  goto LABEL_1123;
              }
LABEL_985:
              if ( v870 != (void *)(v809 + 40) )
                free(v870);
              goto LABEL_557;
            }
LABEL_1123:
            v381 = *(_DWORD *)(v585 + 24);
            if ( v870 != (void *)(v809 + 40) )
            {
              LODWORD(v799) = v381;
              free(v870);
              v381 = (int)v799;
            }
            if ( v381 )
              goto LABEL_563;
          }
        }
LABEL_557:
        v377 = *(__int64 **)(*v14 + 40LL);
        v378 = &v377[*(unsigned int *)(*v14 + 48LL)];
        if ( v378 != v377 )
        {
          v379 = *v377;
          v380 = v377 + 1;
          if ( *(_WORD *)(*(_QWORD *)(v379 + 72) + 8LL) == 271 )
          {
LABEL_561:
            v381 = *(_DWORD *)(v379 + 24);
            if ( v381 )
            {
              v809 = (__int64)&v868;
LABEL_563:
              if ( v381 < 0 )
              {
                v587 = (void *)sub_101FC50(*((_QWORD *)v13 + 34), v381);
                LODWORD(v869[0]) = v588;
                v381 = (int)v587;
                v868 = v587;
              }
              sub_168B9F0(v809, (__int64 *)v13 + 1, v381, 0x1963u, 0);
              v382 = *(_QWORD *)&byte_8[v831 & 0xFFFFFFFFFFFFFFF0LL];
              v383 = 0;
              if ( (v382 & 8) != 0 )
                v383 = *(__int64 *)((char *)&qword_18 + (v382 & 0xFFFFFFFFFFFFFFF0LL));
              v384 = (v383 >> 6) & 7;
              if ( v877.m128_i8[0] )
              {
                sub_1E5E160((unsigned __int8 **)(v809 + 32), (v383 >> 6) & 7);
              }
              else if ( v877.m128_i8[12] )
              {
                v627 = sub_168B9E0((_QWORD *)v809);
                v628 = v869[1];
                if ( v869[1] )
                  v628 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v869[1] + 32LL))(v869[1]);
                v859 = v628;
                v629 = sub_1587BC0(v627, (__int64 *)&v859, v623, v624, v625, v626);
                sub_1E5E160((unsigned __int8 **)(*v629 + 32LL * v877.m128_u32[2] + 8), (unsigned int)v384);
              }
              sub_15F7200((_BYTE *)v809);
              if ( (v798[1] & 8) == 0 )
                goto LABEL_202;
LABEL_570:
              if ( (unsigned __int8)sub_15AC7C0(*v14) )
              {
                v385 = *(_QWORD *)(*v14 + 8LL);
                v809 = (__int64)&v868;
                sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, *(_DWORD *)(v385 + 24), 0x1450u, 0);
                v390 = *(_QWORD *)(v385 + 48);
                if ( v390 )
                  v391 = (void *)(v390 & 0xFFFFFFFFFFFFFFF0LL);
                else
                  v391 = (void *)sub_A7AA70((__int64)v802, v385, v386, v387, v388, v389);
                v392 = (_BYTE *)v809;
                v859 = v391;
                sub_162B6D0(v809, (__int64 *)&v859);
                sub_15F7200(v392);
              }
              goto LABEL_202;
            }
          }
          else
          {
            while ( v378 != v380 )
            {
              v379 = *v380++;
              if ( *(_WORD *)(*(_QWORD *)(v379 + 72) + 8LL) == 271 )
                goto LABEL_561;
            }
          }
        }
LABEL_201:
        if ( (v798[1] & 8) != 0 )
          goto LABEL_570;
LABEL_202:
        v177 = *((_BYTE *)v55 + 56);
        if ( (_BYTE)v810 && v177 >> 4 && (v798[1] & 0x40) == 0 )
        {
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v55[22], 0xE99u, 0);
          LOBYTE(v859) = (unsigned int)(*((_DWORD *)v14 + 24) - 24) <= 1;
          sub_1588420((__int64)&v868, (unsigned __int8 *)&v859);
          sub_15F7200(&v868);
          v177 = *((_BYTE *)v55 + 56);
        }
        if ( (v177 & 4) != 0 )
        {
          v428 = v831;
          v429 = (__int64 *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
          v430 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v431 = *(unsigned __int8 *)(v430 + 16);
          if ( (_BYTE)v431 == 13 )
          {
            if ( ((*(_WORD *)(v430 + 18) >> 3) & 0x1FF) == 0x1B3 || (unsigned int)v55[18] > 1 )
              goto LABEL_207;
          }
          else if ( (_BYTE)v431 != 48 )
          {
            v622 = v55[18];
            if ( v622 > 1 || (unsigned int)(v431 - 43) <= 1 && v622 != 1 )
              goto LABEL_207;
          }
          v809 = (__int64)&v868;
          if ( (unsigned __int8)sub_147B3A0((__int64)v14, &v868) && (v14[90] & 0xC) == 0 )
          {
            v482 = *(_BYTE *)(*((_QWORD *)v13 + 68) + 8LL) & 0x7F;
            if ( v482 <= 0x12u )
            {
              if ( ((1LL << v482) & 0x40182) == 0 )
                goto LABEL_207;
            }
            else if ( ((v482 + 94) & 0x7Fu) > 5 )
            {
              goto LABEL_207;
            }
            if ( (*(_BYTE *)*v14 & 7) == 0 && *((_DWORD *)v14 + 24) != 11 )
            {
              v483 = -(v55[18] == 0);
              v484 = (_BYTE *)v809;
              v837 = *(void **)(v55 + 1);
              v485 = v55[1];
              v799 = (__m128 *)(v13 + 2);
              sub_168B9F0(v809, (__int64 *)v13 + 1, v485, (v483 & 0xFFFFFE8B) + 7242, 0);
              v486 = &v837;
              sub_15884C0((__int64)v484, (__int64 *)&v837);
              sub_15F7200(v484);
              v490 = *((unsigned int *)v14 + 662);
              if ( (_DWORD)v490 )
              {
                if ( !*((_DWORD *)v14 + 14) )
                {
                  if ( v14[8] )
                  {
                    v491 = *((_QWORD *)v13 + 34);
                    LODWORD(v839) = *((_DWORD *)v14 + 662);
                    v840 = v491;
                    v492 = *((_DWORD *)v14 + 20);
                    v842.m128i_i64[0] = v491;
                    LODWORD(v841) = v492;
                    v807 = &v841;
                    v493 = sub_101B270((__int64)&v841);
                    v812 = (unsigned int *)&v839;
                    if ( (unsigned int)sub_101B270((__int64)&v839) != v493
                      || (v486 = nullptr,
                          v787 = sub_101B490(v812, 0),
                          v787 != (unsigned int)sub_101B490((unsigned int *)v807, 0)) )
                    {
                      v494 = 0;
                      if ( !*((_DWORD *)v14 + 14) )
                        v494 = v14[8];
                      v495 = (void **)v809;
                      v877.m128_u64[0] = v494;
                      *(_OWORD *)v875 = 0;
                      v868 = nullptr;
                      v869[0] = (void *)(v809 + 24);
                      v869[1] = (void *)0x800000000LL;
                      v876.m128i_i64[0] = 0;
                      v876.m128i_i64[1] = (__int64)v13;
                      v877.m128_i32[2] = 0;
                      sub_B85890((_QWORD *)(v809 + 136), v494);
                      v39 = 0;
                      v879 = 0;
                      v880 = 0x101010000LL;
                      sub_1A395A0((__int64)v495);
                      v486 = v495;
                      if ( (unsigned __int8)sub_1A49A10(
                                              (__int64)v13,
                                              (__int64)v495,
                                              *((__int64 **)v13 + 76),
                                              0,
                                              0,
                                              v496,
                                              0.0,
                                              *(double *)a7.m128_u64) )
                      {
                        v774 = *((_DWORD *)v14 + 662);
                        v807 = &v859;
                        sub_168B9F0((__int64)&v859, (__int64 *)v799, v774, 0x1724u, 0);
                        v775 = j__strlen(";");
                        v776 = *((_DWORD *)v14 + 662);
                        v836 = 1;
                        LODWORD(v835) = v776;
                        HIDWORD(v835) = v776;
                        v814 = (__int64)v846;
                        sub_1E5EC70((__int64)v846, v835, 1, ";", v775);
                        v486 = (void **)v814;
                        v777 = sub_1589170((__int64)&v859, (_DWORD *)v814);
                        v282 = *((_DWORD *)v14 + 14) == 0;
                        v812 = nullptr;
                        v778 = v777;
                        if ( v282 )
                          v812 = (unsigned int *)v14[8];
                        if ( *(_BYTE *)(v777 + 120) )
                        {
                          v486 = (void **)v812;
                          sub_AE9DF0((unsigned __int8 **)(v777 + 32), (__int64)v812, 5u);
                        }
                        else if ( *(_BYTE *)(v777 + 132) )
                        {
                          v813 = (__int64 *)sub_168B9E0((_QWORD *)v777);
                          v785 = *(_QWORD *)(v778 + 16);
                          if ( v785 )
                            v785 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v785 + 32LL))(*(_QWORD *)(v778 + 16));
                          v833[0] = v785;
                          v786 = sub_1587BC0((__int64)v813, v833, v781, v782, v783, v784);
                          v486 = (void **)v812;
                          sub_AE9DF0(
                            (unsigned __int8 **)(*v786 + 32LL * *(unsigned int *)(v778 + 128) + 8),
                            (__int64)v812,
                            5u);
                        }
                        if ( v848 != (void *)(v814 + 40) )
                          operator delete(v848);
                        sub_15F7200(v807);
                      }
                      *(_WORD *)((char *)&v880 + 3) = 0;
                      if ( v875[0] )
                        sub_1A39780((char *)v875[0]);
                      if ( v869[0] != (void *)(v809 + 24) )
                        free(v869[0]);
                    }
                  }
                }
              }
              if ( v55[18] )
              {
                v497 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)v55 + 12) + 16LL) + 16LL))(*(_QWORD *)(*((_QWORD *)v55 + 12) + 16LL));
                v498 = v497;
                v499 = sub_15F0EF0((__int64)v13, SHIDWORD(v497), 0, (__m128i)v39, *(double *)a7.m128_u64);
                sub_168B9F0(v809, (__int64 *)v799, v498, 0x167Fu, 0);
                v500 = j__strlen("(");
                v807 = &v859;
                sub_9EC740((__int64)&v859, v498, "(", v500, 0);
                v501 = sub_1589170(v809, &v859);
                v502 = j__strlen(")");
                sub_9EC740((__int64)v846, v499, ")", v502, 0);
                sub_1589170(v501, v846);
                if ( v848 != v850 )
                  operator delete(v848);
                v503 = v861;
                if ( v861 == v807 + 5 )
                  goto LABEL_825;
LABEL_824:
                operator delete(v503);
LABEL_825:
                sub_15F7200((_BYTE *)v809);
                goto LABEL_207;
              }
              v716 = sub_F63270(*v429, (__int64)v486, v490, v487, v488, v489);
              v721 = v716;
              if ( v716 )
              {
                v722 = v716[13];
                v723 = (__int64 *)(v722 + 96);
                if ( v716[16] )
                  goto LABEL_1188;
                sub_7052B0(v723, v722, v717, v718, v719, v720);
                if ( v721[16] )
                {
                  v722 = v721[13];
                  v723 = (__int64 *)(v722 + 96);
LABEL_1188:
                  sub_7052B0(v723, v722, v717, v718, v719, v720);
                  if ( (*(_BYTE *)(v721[16] + 1LL) & 2) != 0
                    || (sub_7052B0((__int64 *)(v721[13] + 96LL), v721[13], v724, v725, v726, v727),
                        *(char *)(v721[16] + 8LL) < 0) )
                  {
                    v762 = (_BYTE *)v809;
                    sub_168B9F0(v809, (__int64 *)v799, v55[1], 0x1723u, 0);
                    *(_QWORD *)((char *)&ptr + 4) = 0;
                    BYTE12(ptr) = 0;
                    v861 = v863;
                    v862 = 0;
                    v863[0] = 0;
                    v864 = 0;
                    v859 = v837;
                    LOBYTE(ptr) = 1;
                    sub_1589170((__int64)v762, &v859);
                    v503 = v861;
                    if ( v861 == v863 )
                      goto LABEL_825;
                    goto LABEL_824;
                  }
                }
              }
              v814 = (__int64)v846;
              sub_19E9430((__int64)v846, (__int64)v13, v428, (unsigned int)v837, v719, v720);
              if ( *(_QWORD *)&v846[2]
                || (*(_BYTE *)(*((_QWORD *)v13 + 29) + 1LL) & 0x10) != 0
                && (sub_E3D120((_QWORD *)v814, "{}"), *(_QWORD *)&v846[2]) )
              {
                v728 = (_BYTE *)v809;
                sub_168B9F0(v809, (__int64 *)v799, v55[1], 0x1725u, 0);
                v834 = 1;
                v833[1] = (__int64)v837;
                sub_1E5EC70((__int64)&v859, (__int64)v837, 1, *(_BYTE **)v846, *(signed __int64 *)&v846[2]);
                sub_1589170((__int64)v728, &v859);
                if ( v861 != v863 )
                  operator delete(v861);
                sub_15F7200((_BYTE *)v809);
              }
              if ( *(_QWORD *)v846 != v814 + 16 )
                operator delete(*(void **)v846);
            }
          }
        }
LABEL_207:
        v178 = *((__int64 **)v55 + 3);
        v179 = &v178[v55[8]];
        v799 = (__m128 *)(v14 + 91);
        v180 = v179;
        v807 = &v868;
        if ( v178 != v179 )
        {
          while ( 1 )
          {
            v181 = *v178;
            v182 = *(_WORD *)(*(_QWORD *)(*v178 + 72) + 8LL);
            if ( v182 > 0x139u )
              break;
            if ( v182 >= 0x137u || v182 == 133 )
              goto LABEL_220;
            if ( v182 > 0x85u )
            {
              if ( v182 != 186 )
              {
                if ( v182 <= 0xBAu )
                {
                  if ( v182 != 171 && v182 != 184 )
                    goto LABEL_211;
                }
                else if ( v182 != 298 && v182 != 301 )
                {
                  goto LABEL_211;
                }
              }
              goto LABEL_220;
            }
            if ( v182 == 58 )
              goto LABEL_220;
            if ( v182 <= 0x3Au )
              goto LABEL_423;
            if ( v182 == 117 )
            {
LABEL_220:
              v183 = sub_178E2C0(*((_QWORD *)v13 + 83), (__int64)v799);
              if ( !(unsigned __int8)sub_182B0C0(
                                       (__int64 *)v13,
                                       v181,
                                       v807,
                                       0,
                                       v183,
                                       (__m128i)v39,
                                       *(double *)a7.m128_u64) )
              {
                v186 = (__int16)v868;
                if ( (v55[14] & 2) == 0 || (unsigned int)v868 > 0x14 || ((1LL << (char)v868) & 0x10F13E) == 0 )
                  goto LABEL_224;
              }
LABEL_211:
              if ( v180 == ++v178 )
                goto LABEL_404;
            }
            else if ( v180 == ++v178 )
            {
              goto LABEL_404;
            }
          }
          if ( v182 != 355 )
          {
            if ( v182 > 0x163u )
            {
              if ( v182 != 371 )
              {
                if ( v182 <= 0x173u )
                {
                  if ( v182 != 362 )
                    goto LABEL_211;
                }
                else if ( v182 != 377 && v182 != 401 )
                {
                  goto LABEL_211;
                }
              }
            }
            else if ( v182 != 325 )
            {
              if ( v182 <= 0x145u )
              {
                v182 -= 320;
LABEL_423:
                if ( v182 > 1u )
                  goto LABEL_211;
                goto LABEL_220;
              }
              if ( v182 != 350 )
                goto LABEL_211;
            }
          }
          goto LABEL_220;
        }
LABEL_404:
        v321 = 0;
        if ( (*(_BYTE *)(*((_QWORD *)v13 + 29) + 1LL) & 8) != 0 )
        {
          if ( !(_DWORD)v800 )
            goto LABEL_1010;
          LODWORD(v322) = v804;
          do
          {
            v322 = (unsigned int)(v322 - 1);
            v323 = *(_DWORD *)(v14[16] + 144 * v322);
          }
          while ( (_DWORD)v322 && v323 == 6 );
          if ( v323 == 6 )
          {
LABEL_1010:
            v595 = *((_DWORD *)v14 + 24);
            if ( v595 == 17 )
            {
              v321 = (*(_BYTE *)*v14 & 7) != 3;
            }
            else
            {
              v321 = 0;
              if ( v595 == 7 && !*(_DWORD *)(*v14 + 264LL) && (*(_BYTE *)*v14 & 7) != 1 )
                v321 = !sub_15AC4A0((__int64)v14);
            }
          }
          else
          {
            v321 = v323 == 5;
          }
        }
        v324 = sub_A64670(*((_QWORD *)v13 + 31), (v55[14] & 2) != 0, v321, 0);
        v325 = *((_QWORD *)v13 + 29);
        if ( (*(_BYTE *)(v325 + 60) & 0x10) != 0 )
        {
          v589 = *((_QWORD *)v13 + 31);
          v809 = (__int64)&v868;
          v590 = *(_QWORD *)(v589 + 17448);
          v868 = &v869[1];
          sub_1E5E3F0(&v868, *(_BYTE **)(v590 + 216), *(_QWORD *)(v590 + 216) + *(_QWORD *)(v590 + 224));
          v591 = *(_DWORD *)(v590 + 248);
          a13 = (__m128)_mm_loadu_si128((const __m128i *)(v590 + 248));
          v592 = *(_DWORD *)(v590 + 256);
          v871 = a13;
          v872 = *(_QWORD *)(v590 + 264);
          if ( (unsigned int)(v591 - 49) <= 2 && v592 != 10 )
          {
            v593 = *(_QWORD *)(*v14 + 40LL);
            v594 = v593 + 8LL * *(unsigned int *)(*v14 + 48LL);
            if ( v593 != v594 )
            {
              while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v593 + 72LL) + 8LL) != 73 )
              {
                v593 += 8;
                if ( v594 == v593 )
                  goto LABEL_1000;
              }
              v324 = 13;
            }
          }
LABEL_1000:
          if ( v868 != (void *)(v809 + 16) )
            operator delete(v868);
          v325 = *((_QWORD *)v13 + 29);
        }
        if ( (*(_BYTE *)(v325 + 96) & 0x30) != 0
          || (v326 = *(_QWORD *)(*v14 + 40LL), v327 = v326 + 8LL * *(unsigned int *)(*v14 + 48LL), v326 == v327) )
        {
LABEL_927:
          v186 = v324;
        }
        else
        {
          while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v326 + 72LL) + 8LL) != 117 )
          {
            v326 += 8;
            if ( v327 == v326 )
              goto LABEL_927;
          }
          v186 = 13;
        }
LABEL_224:
        v187 = v55[18];
        LOWORD(v833[0]) = v186;
        if ( !v187 )
        {
          if ( (v55[14] & 2) != 0 )
          {
            if ( (v798[1] & 8) == 0 )
            {
              if ( (*v798 & 8) != 0 )
              {
                v676 = v55[16];
                v809 = (__int64)&v868;
                sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v676, 0x19EDu, 0);
                sub_15F7200(&v868);
              }
              else
              {
                v504 = sub_1E5DA80(
                         *(_QWORD **)(v14[101] + 8LL),
                         *(_QWORD *)(v14[101] + 8LL) + 8LL * *(unsigned int *)(v14[101] + 16LL),
                         293);
                v809 = (__int64)&v868;
                if ( (_QWORD *)v185 != v504 )
                  goto LABEL_227;
                v505 = sub_1E5DA80((_QWORD *)v14[92], v14[92] + 8LL * *((unsigned int *)v14 + 186), 293);
                if ( (_QWORD *)v185 != v505 )
                  goto LABEL_227;
                v506 = sub_1E5DA80(
                         *(_QWORD **)(*v14 + 40LL),
                         *(_QWORD *)(*v14 + 40LL) + 8LL * *(unsigned int *)(*v14 + 48LL),
                         293);
                if ( (_QWORD *)v185 != v506 )
                  goto LABEL_227;
                v507 = (_BYTE *)v809;
                sub_168B9F0(v809, (__int64 *)v13 + 1, v55[16], 0xE8Bu, 0);
                sub_15F7200(v507);
              }
              if ( !v55[18] )
                goto LABEL_227;
              goto LABEL_226;
            }
          }
          else if ( (*(_WORD *)v798 & 0x808) == 0 )
          {
            v282 = (v798[12] & 1) == 0;
            v809 = (__int64)&v868;
            if ( v282 && (v798[47] & 0x20) == 0 )
            {
              v831 = sub_A71610((__int64)v802, v831, (unsigned __int16 *)v833);
              goto LABEL_513;
            }
            goto LABEL_227;
          }
          v809 = (__int64)&v868;
          goto LABEL_227;
        }
        v809 = (__int64)&v868;
LABEL_226:
        v188 = *((_QWORD *)v55 + 12);
        if ( !*(_QWORD *)(v188 + 16) )
        {
          v432 = (_BYTE *)v809;
          sub_168B9F0(v809, (__int64 *)v13 + 1, *(_DWORD *)(v188 + 8), 0xF56u, 0);
          sub_15F7200(v432);
          v433 = (__int64)v798;
          *((_BYTE *)v14 + 720) |= 1u;
          if ( (*(_WORD *)v433 & 0x808) != 0 || (*(_BYTE *)(v433 + 12) & 1) != 0 || (*(_BYTE *)(v433 + 47) & 0x20) != 0 )
            v831 = *((_QWORD *)v802 + 2340);
          else
            v831 = sub_A71610((__int64)v802, v831, (unsigned __int16 *)v833);
          LOBYTE(v808) = 0;
          goto LABEL_513;
        }
LABEL_227:
        v854 = 0;
        memset(&v846[2], 0, 12);
        LOWORD(v846[0]) = v833[0];
        v189 = *((_BYTE *)v55 + 56);
        HIBYTE(v846[0]) = (unsigned __int16)(HIWORD(v846[0]) & 0xF003) >> 8;
        LODWORD(v848) = 0;
        v849 = 0;
        BYTE2(v846[0]) = BYTE2(v846[0]) & 2 | ((v189 & 2) != 0);
        v190 = v55[16];
        v850[0] = 0;
        v854 = v190;
        LOBYTE(v190) = *((_BYTE *)v55 + 57);
        v850[1] = 0;
        v851 = 0;
        v852 = 0;
        BYTE2(v846[0]) = v190 & 2 | BYTE2(v846[0]) & 0xFD;
        v191 = *((_QWORD *)v55 + 13);
        v853 = nullptr;
        v855 = 0;
        v856 = 0;
        v857 = 0;
        v858 = 0;
        if ( v191 )
          v191 = (*(_BYTE *)(v191 + 3) >> 2) & 0x1F;
        *(_QWORD *)&v846[2] = v191;
        v192 = v55[20];
        if ( v192 )
          v192 = ((v55[14] & 8) == 0) + 1;
        v846[4] = v192;
        v869[0] = (void *)0x1000000000LL;
        v193 = (unsigned int)v55[18];
        v868 = (void *)(v809 + 16);
        v194 = v193;
        if ( v193 <= 0x10 )
        {
          a8 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
          v195 = s;
          v817 = (__int64)&v841;
          v841 = s;
          v842 = a8;
          if ( v193 )
          {
LABEL_233:
            v196 = s;
            goto LABEL_234;
          }
LABEL_854:
          v807 = &v859;
          v814 = (__int64)v846;
          v812 = (unsigned int *)&v839;
          v813 = (__int64 *)&v837;
          goto LABEL_497;
        }
        sub_2237220(v809, v809 + 16, v193, 8);
        v193 = (unsigned int)v55[18];
        v817 = (__int64)&v841;
        v194 = v193;
        v841 = s;
        v842 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
        if ( !v193 )
          goto LABEL_854;
        if ( v193 <= 0x10 )
        {
          v195 = s;
          goto LABEL_233;
        }
        sub_2236E10(&v841, s, v193, 1);
        v196 = v841;
        v194 = v55[18];
        v195 = (char *)v841 + v842.m128i_i64[0];
LABEL_234:
        v197 = &v196[v193];
        if ( v197 != v195 )
          memset(v195, 0, v197 - v195);
        v842.m128i_i64[0] = v193;
        if ( !v194 )
          goto LABEL_854;
        v198 = (unsigned int)(v194 - 1);
        v199 = nullptr;
        v200 = 0;
        v814 = (__int64)v14;
        v804 = v198;
        v807 = &v859;
        v812 = (unsigned int *)&v839;
        v813 = (__int64 *)&v837;
        while ( 1 )
        {
          v204 = *((_QWORD *)v55 + 12) + 32LL * (_QWORD)v199;
          v205 = *(_QWORD *)(v204 + 16);
          v837 = *(void **)(v205 + 48);
          v206 = (__int64 *)v837;
          v207 = (unsigned __int64)v837 & 0xFFFFFFFFFFFFFFF0LL;
          v208 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v837 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          v209 = *(_BYTE *)(v208 + 16);
          if ( v209 != 13 )
          {
            if ( (v55[14] & 1) == 0 )
              goto LABEL_469;
            if ( (*(_BYTE *)(*((_QWORD *)v13 + 29) + 47LL) & 0x20) != 0 && v209 == 11 )
            {
              v332 = (__int64 *)v807;
              sub_168B9F0((__int64)v807, (__int64 *)v13 + 1, *(_DWORD *)(v205 + 24), 0x1253u, 0);
              v334 = sub_1605D30((__int64)v332, v813);
              v207 = (__int64)v812;
              LODWORD(v839) = 1;
              v333 = v334;
              goto LABEL_441;
            }
            goto LABEL_249;
          }
          v210 = (*(_WORD *)(v208 + 18) >> 3) & 0x1FF;
          if ( v210 == 435 )
            break;
          if ( v210 != 480 )
          {
            if ( (v55[14] & 1) != 0 )
              goto LABEL_249;
LABEL_469:
            v207 = (__int64)v837;
            if ( sub_A62E10((__int64)v802, (__int64)v837, v204, (__int64)v837, (__int64)v184) )
            {
              v207 = (__int64)v837;
              v837 = (void *)sub_AAF890((__int64 *)v802, (__int64)v837, v204, (__int64)v206, (__int64)v184);
              *(_BYTE *)(v205 + 97) |= 8u;
            }
            else
            {
              v340 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((unsigned __int64)v837 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v340 + 16) == 13 && ((*(_WORD *)(v340 + 18) >> 3) & 0x1FF) == 0x1E1 )
              {
                v837 = *((void **)v802 + 2351);
                *(_BYTE *)(v205 + 97) |= 8u;
              }
            }
            goto LABEL_249;
          }
          v328 = *((_QWORD *)v13 + 29);
          if ( (*(_BYTE *)(v328 + 47) & 0x20) != 0 )
          {
            v356 = j__strlen("cl_khr_fp16");
            v207 = (__int64)"cl_khr_fp16";
            if ( !sub_FF8450((__int64)(v13 + 50), (__int64)"cl_khr_fp16", v356, v328) )
            {
              v357 = (__int64 *)v807;
              sub_168B9F0((__int64)v807, (__int64 *)v13 + 1, *(_DWORD *)(v205 + 24), 0x1253u, 0);
              v358 = sub_1605D30((__int64)v357, v813);
              LODWORD(v839) = 0;
              sub_1587D10(v358, (int *)v812);
              sub_15F7200(v357);
              v207 = 1;
              *(_BYTE *)(v814 + 720) |= 1u;
              sub_B88650(v205, 1);
            }
          }
          else if ( (*(_BYTE *)(v328 + 60) & 8) == 0 )
          {
            v207 = (__int64)sub_102B7F0;
            v329 = *(_BYTE **)(*((_QWORD *)v13 + 31) + 17448LL);
            v330 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v329 + 88LL);
            if ( !(v330 == sub_102B7F0 ? v329[277] : ((__int64 (*)(void))v330)()) )
            {
              v332 = (__int64 *)v807;
              sub_168B9F0((__int64)v807, (__int64 *)v13 + 1, *(_DWORD *)(v205 + 24), 0x12BCu, 0);
              v207 = (__int64)v812;
              v333 = (__int64)v332;
              LODWORD(v839) = 0;
LABEL_441:
              sub_1587D10(v333, (int *)v207);
              sub_15F7200(v332);
              *(_BYTE *)(v814 + 720) |= 1u;
            }
          }
LABEL_249:
          v215 = *(_BYTE *)(v205 + 29) & 1;
          if ( (v798[107] & 4) == 0 )
            goto LABEL_250;
          if ( !v215 )
            goto LABEL_239;
          v341 = sub_B8C3D0(v205, v207, v204, (__int64)v206, (__int64)v184, v185);
          v204 = *v341;
          v206 = (__int64 *)(*v341 + 8LL * *((unsigned int *)v341 + 2));
          if ( *v341 >= (unsigned __int64)v206 )
          {
            if ( (__int64 *)v204 == v206 )
              goto LABEL_477;
            if ( *(_WORD *)(*v206 + 36) != 99 )
            {
              v355 = (__int64 **)(v206 + 1);
              while ( 1 )
              {
                v206 = (__int64 *)v355;
                if ( (__int64 **)v204 == v355 )
                  break;
                v206 = *v355++;
                if ( *((_WORD *)v206 + 18) == 99 )
                  goto LABEL_521;
              }
LABEL_477:
              v215 = *(_BYTE *)(v205 + 29) & 1;
              goto LABEL_250;
            }
          }
          else
          {
            v342 = (__int64 *)*v341;
            while ( 1 )
            {
              v204 = *v342;
              if ( *(_WORD *)(*v342 + 36) == 99 )
                break;
              if ( v206 == ++v342 )
                goto LABEL_477;
            }
            if ( v206 == v342 )
              goto LABEL_477;
          }
LABEL_521:
          v200 = 1;
          *((_BYTE *)v841 + (_QWORD)v199) |= 0x10u;
          v215 = *(_BYTE *)(v205 + 29) & 1;
LABEL_250:
          if ( !v215 )
            goto LABEL_239;
          v216 = sub_B8C3D0(v205, v207, v204, (__int64)v206, (__int64)v184, v185);
          v218 = (char *)*v216;
          v219 = *v216 + 8LL * *((unsigned int *)v216 + 2);
          if ( *v216 >= v219 )
          {
            if ( v218 == (char *)v219 )
              goto LABEL_255;
            if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v219 + 36LL) - 92) <= 4u )
            {
LABEL_451:
              v336 = *(_QWORD *)v218;
              v207 = *(unsigned __int16 *)(*(_QWORD *)v218 + 36LL);
              if ( (unsigned __int16)(v207 - 92) > 4u )
              {
                v337 = (__int64 *)(v218 + 8);
                do
                {
                  v336 = *v337++;
                  v207 = *(unsigned __int16 *)(v336 + 36);
                }
                while ( (unsigned __int16)(v207 - 92) > 4u );
              }
              v184 = (char *)v841 + (_QWORD)v199;
              v218 = (char *)v841 + (_QWORD)v199;
              if ( (_WORD)v207 == 94 )
              {
                v215 = 3;
              }
              else
              {
                if ( (unsigned __int16)v207 > 0x5Eu )
                {
                  if ( (_WORD)v207 == 95 )
                    v215 = 2;
                  goto LABEL_458;
                }
                v215 = 4;
                if ( (_WORD)v207 != 93 )
                {
                  if ( (*(_BYTE *)(v336 + 34) & 0xF0) == 0xF0 )
                  {
                    v819 = (char *)v841 + (_QWORD)v199;
                    v435 = sub_FA77D0(v336);
                    v184 = v819;
                    if ( v435 != 2 )
                    {
                      if ( (*(_BYTE *)(v336 + 34) & 0xF0) == 0xF0 )
                      {
                        v436 = sub_FA77D0(v336);
                        v184 = v819;
                        LODWORD(v217) = v436;
                      }
                      else
                      {
                        LODWORD(v217) = *(_BYTE *)(v336 + 34) >> 4;
                      }
                      v218 = (char *)v841 + (_QWORD)v199;
                      goto LABEL_462;
                    }
                    v215 = 5;
                    v218 = (char *)v841 + (_QWORD)v199;
                  }
                  else
                  {
                    v338 = *(_BYTE *)(v336 + 34) >> 4;
                    v218 = (char *)v841 + (_QWORD)v199;
                    v217 = v338;
                    if ( v338 != 2 )
                    {
LABEL_462:
                      v282 = (_DWORD)v217 == 1;
                      v339 = 6;
                      v217 = 0;
                      if ( !v282 )
                        v339 = 0;
                      v215 = v339;
                      goto LABEL_458;
                    }
                    v215 = 5;
                  }
                }
              }
LABEL_458:
              v200 = 1;
              *v218 = v215 | *v184 & 0xF0;
              goto LABEL_255;
            }
            v335 = (char *)(v219 + 8);
            while ( 1 )
            {
              v217 = (__int64)v335;
              if ( v218 == v335 )
                break;
              v335 += 8;
              v217 = (unsigned int)*(unsigned __int16 *)(*(_QWORD *)v217 + 36LL) - 92;
              if ( (unsigned __int16)v217 <= 4u )
                goto LABEL_451;
            }
          }
          else
          {
            v207 = *v216;
            while ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v207 + 36LL) - 92) > 4u )
            {
              v207 += 8;
              if ( v219 == v207 )
                goto LABEL_255;
            }
            if ( v219 != v207 )
              goto LABEL_451;
          }
LABEL_255:
          if ( (*(_BYTE *)(v205 + 29) & 1) == 0 )
            goto LABEL_239;
          v220 = sub_B8C3D0(v205, v207, (__int64)v218, v217, (__int64)v184, v185);
          v221 = *v220;
          v222 = (__int64 *)(*v220 + 8LL * *((unsigned int *)v220 + 2));
          if ( *v220 >= (unsigned __int64)v222 )
          {
            if ( (__int64 *)v221 == v222 )
              goto LABEL_260;
            if ( *(_WORD *)(*v222 + 36) == 102 )
            {
LABEL_491:
              v200 = 1;
              *((_BYTE *)v841 + (_QWORD)v199) |= 0x20u;
              goto LABEL_260;
            }
            v343 = (__int64 **)(v222 + 1);
            while ( 1 )
            {
              v222 = (__int64 *)v343;
              if ( (__int64 **)v221 == v343 )
                break;
              v222 = *v343++;
              if ( *((_WORD *)v222 + 18) == 102 )
                goto LABEL_491;
            }
          }
          else
          {
            v223 = (__int64 *)*v220;
            while ( 1 )
            {
              v221 = *v223;
              if ( *(_WORD *)(*v223 + 36) == 102 )
                break;
              if ( v222 == ++v223 )
                goto LABEL_260;
            }
            if ( v222 != v223 )
              goto LABEL_491;
          }
LABEL_260:
          if ( (*(_BYTE *)(v205 + 29) & 1) == 0 )
            goto LABEL_239;
          v224 = sub_B8C3D0(v205, v207, v221, (__int64)v222, (__int64)v184, v185);
          v225 = (__int64 *)*v224;
          v226 = *v224 + 8LL * *((unsigned int *)v224 + 2);
          if ( *v224 >= v226 )
          {
            if ( v225 != (__int64 *)v226 )
            {
              if ( *(_WORD *)(*(_QWORD *)v226 + 36LL) == 421 )
                goto LABEL_266;
              v344 = (__int64 *)(v226 + 8);
              while ( v225 != v344 )
              {
                v345 = *v344++;
                if ( *(_WORD *)(v345 + 36) == 421 )
                  goto LABEL_266;
              }
            }
          }
          else
          {
            v227 = *v224;
            while ( *(_WORD *)(*(_QWORD *)v227 + 36LL) != 421 )
            {
              v227 += 8LL;
              if ( v226 == v227 )
                goto LABEL_239;
            }
            if ( v226 != v227 )
            {
LABEL_266:
              v200 = 1;
              *((_BYTE *)v841 + (_QWORD)v199) |= 0x40u;
            }
          }
LABEL_239:
          v201 = v837;
          v202 = LODWORD(v869[0]) + 1LL;
          if ( v202 > HIDWORD(v869[0]) )
          {
            sub_2237220(v809, v809 + 16, v202, 8);
            *((_QWORD *)v868 + LODWORD(v869[0])) = v201;
            v203 = (int *)((char *)v199 + 1);
            ++LODWORD(v869[0]);
            if ( (int *)v804 == v199 )
            {
LABEL_494:
              v14 = (_QWORD *)v814;
              goto LABEL_495;
            }
          }
          else
          {
            *((_QWORD *)v868 + LODWORD(v869[0])) = v837;
            v203 = (int *)((char *)v199 + 1);
            ++LODWORD(v869[0]);
            if ( (int *)v804 == v199 )
              goto LABEL_494;
          }
          v199 = v203;
        }
        if ( v55[18] != 1 || (v55[14] & 2) != 0 )
        {
          v212 = *(_DWORD *)(v204 + 8);
          v207 = (__int64)(v13 + 2);
          v213 = 5457;
          goto LABEL_248;
        }
        v211 = *(int **)v204;
        if ( *(_QWORD *)v204 )
        {
          v212 = *(_DWORD *)(v204 + 8);
          v207 = (__int64)(v13 + 2);
          v213 = 4794;
LABEL_248:
          v214 = v807;
          sub_168B9F0((__int64)v807, (__int64 *)v207, v212, v213, 0);
          sub_15F7200(v214);
          v837 = *((void **)v802 + 2340);
          *(_QWORD *)(v205 + 48) = v837;
          goto LABEL_249;
        }
        v650 = (unsigned __int8)v837 & 0xF;
        v14 = (_QWORD *)v814;
        if ( ((unsigned __int8)v837 & 0xF) != 0 || (byte_8[(unsigned __int64)v837 & 0xFFFFFFFFFFFFFFF0LL] & 0xF) != 0 )
        {
          v674 = v807;
          v675 = v55[1];
          v207 = (__int64)(v13 + 2);
          v804 = 0;
          sub_168B9F0((__int64)v807, (__int64 *)v13 + 1, v675, 0x1552u, 0);
          sub_15F7200(v674);
          v211 = (int *)v804;
        }
        v804 = (__int64)v211;
        if ( (*(_BYTE *)(v205 + 29) & 1) != 0 )
        {
          v651 = sub_B8C3D0(v205, v207, v204, v650, (__int64)v184, v185);
          v655 = v804;
          v656 = *((unsigned int *)v651 + 2);
          v657 = *v651 + 8 * v656;
          if ( (*(_BYTE *)(v205 + 29) & 1) != 0 )
            v655 = *sub_B8C3D0(v205, v207, v656, v652, v653, v654);
          if ( v655 != v657 )
          {
            v819 = (char *)v205;
            v820 = v200;
            v658 = (__int64 *)(v13 + 2);
            v659 = v657;
            v660 = (__int64 *)v812;
            v821 = v55;
            v661 = (__int64 *)v655;
            v822 = v13;
            v662 = (__int64 *)v807;
            v804 = (__int64)(v807 + 4);
            v823 = v14;
            do
            {
              v663 = *v661;
              sub_168B9F0((__int64)v662, v658, *(_DWORD *)(*v661 + 24), 0x19B4u, 0);
              if ( v865 )
              {
                sub_AE9DF0((unsigned __int8 **)v804, v663, 0xEu);
              }
              else if ( v867 )
              {
                v664 = (_QWORD *)sub_168B9E0(v662);
                v668 = *((void **)&ptr + 1);
                if ( *((_QWORD *)&ptr + 1) )
                {
                  v669 = **((_QWORD **)&ptr + 1);
                  v814 = (__int64)v664;
                  v668 = (void *)(*(__int64 (__fastcall **)(_QWORD))(v669 + 32))(*((_QWORD *)&ptr + 1));
                  v664 = (_QWORD *)v814;
                }
                v839 = v668;
                v670 = sub_1587BC0((__int64)v664, v660, (__int64)v664, v665, v666, v667);
                sub_AE9DF0((unsigned __int8 **)(*v670 + 32LL * v866 + 8), v663, 0xEu);
              }
              ++v661;
              v839 = *(void **)(v663 + 24);
              sub_1587DB0((__int64)v662, v660);
              sub_15F7200(v662);
            }
            while ( (__int64 *)v659 != v661 );
            v205 = (__int64)v819;
            v55 = v821;
            v13 = v822;
            v14 = v823;
            v200 = v820;
          }
        }
        if ( *(_DWORD *)(v205 + 100) )
        {
          v671 = v807;
          sub_168B9F0((__int64)v807, (__int64 *)v13 + 1, *(_DWORD *)(v205 + 24), 0x1550u, 0);
          sub_15F7200(v671);
          *(_DWORD *)(v205 + 100) = 0;
        }
LABEL_495:
        v814 = (__int64)v846;
        if ( v200 )
        {
          v853 = v841;
          v859 = v55 + 14;
          sub_1E69BD0((__int64)v13, LODWORD(v869[0]), v846);
        }
LABEL_497:
        v346 = v812 + 4;
        v859 = v807 + 2;
        *(_QWORD *)&ptr = 0x400000000LL;
        v839 = v812 + 4;
        v347 = v813 + 2;
        v838 = 0x200000000LL;
        v840 = 0x200000000LL;
        v348 = *((_BYTE *)v55 + 56);
        v837 = v813 + 2;
        v349 = v348 >> 4;
        if ( v349 == 2 )
        {
          v352 = 0;
          v572 = 0;
          v573 = (unsigned int)v55[19];
          if ( v573 > 2 )
          {
            v681 = (unsigned int)v55[19];
            v804 = v681;
            sub_2237220(v813, v813 + 2, v681, 8);
            if ( v804 > (unsigned __int64)HIDWORD(v840) )
              sub_2237220(v812, v346, v804, 8);
            v352 = (unsigned int)v838;
            v572 = (unsigned int)v838;
          }
          if ( (_DWORD)v573 )
          {
            v574 = (unsigned int)(v573 - 1);
            v575 = 0;
            v576 = 16 * v574;
            v804 = (__int64)(v813 + 2);
            while ( 1 )
            {
              v577 = *(_QWORD *)(*((_QWORD *)v55 + 15) + v575);
              if ( v572 + 1 > (unsigned __int64)HIDWORD(v838) )
              {
                sub_2237220(v813, v804, v572 + 1, 8);
                v572 = (unsigned int)v838;
              }
              *((_QWORD *)v837 + v572) = v577;
              v578 = *((_QWORD *)v55 + 15);
              LODWORD(v838) = v838 + 1;
              v579 = *(_QWORD *)(v578 + v575 + 8);
              v580 = (unsigned int)v840 + 1LL;
              if ( v580 > HIDWORD(v840) )
                sub_2237220(v812, v812 + 4, v580, 8);
              *((_QWORD *)v839 + (unsigned int)v840) = v579;
              v351 = (unsigned int)(v840 + 1);
              LODWORD(v840) = v840 + 1;
              if ( v576 == v575 )
                break;
              v572 = (unsigned int)v838;
              v575 += 16;
            }
            v347 = (__int64 *)v837;
            v350 = 0;
            v352 = (unsigned int)v838;
            v346 = (unsigned int *)v839;
            v349 = *((_BYTE *)v55 + 56) >> 4;
          }
          else
          {
            v347 = (__int64 *)v837;
            v350 = 0;
            v346 = (unsigned int *)v839;
            v351 = (unsigned int)v840;
            v349 = *((_BYTE *)v55 + 56) >> 4;
          }
        }
        else if ( (unsigned int)(v349 - 6) > 2 )
        {
          v351 = 0;
          v352 = 0;
          v350 = 0;
        }
        else
        {
          v350 = *((_QWORD *)v55 + 15);
          v351 = 0;
          v352 = 0;
        }
        v816 = v351;
        v353 = (_BYTE *)*v14;
        v354 = 0;
        v815 = (__int64)v346;
        if ( (*v353 & 7) != 1 )
          v354 = ((1LL << *((_DWORD *)v14 + 24)) & 0x781) != 0;
        sub_183EAE0((__int64)v13, v354, v349, v347, v352, v350, (unsigned int *)v815, v816, (__int64)v807, v814 + 24);
        if ( (*(_BYTE *)(*(_QWORD *)(*v797 + 232) + 52LL) & 1) != 0 )
        {
          v437 = v797[1];
          v438 = *(_QWORD *)(v437 + 16);
          if ( *(_DWORD *)(v437 + 8) && *(_DWORD *)(v437 + 12) || v438 )
          {
            if ( (unsigned int)sub_E90000(v438) == 3 )
            {
LABEL_712:
              v440 = *((_QWORD *)v55 + 13);
              if ( !v440 )
                goto LABEL_977;
              v441 = *(_QWORD *)(v440 + 40);
              v442 = v441 + 8LL * *(unsigned int *)(v440 + 48);
              if ( v442 == v441 )
                goto LABEL_977;
              v443 = *(_QWORD *)(v440 + 40);
              v444 = 0;
              v804 = (__int64)v55;
              do
              {
                v445 = 0;
                v446 = *(_WORD *)(*(_QWORD *)v443 + 32LL) - 282;
                if ( v446 <= 8u )
                  v445 = dword_266C2A0[v446];
                if ( (unsigned __int8)sub_1E5D1E0((__int64)v13, v444, v445, *(_DWORD *)(*(_QWORD *)v443 + 24LL)) )
                  *((_BYTE *)v14 + 720) |= 1u;
                else
                  v444 = v445;
                v443 += 8;
              }
              while ( v442 != v443 );
              v55 = (int *)v804;
              if ( !v444 )
LABEL_977:
                v444 = sub_15F1720((__int64)v13);
              *(_QWORD *)&v846[2] = *(_QWORD *)&v846[2] & 0xFFFFFFFF000001FFLL | (unsigned int)(v444 << 9);
              goto LABEL_503;
            }
            v437 = v797[1];
          }
          v439 = *(_DWORD *)(v437 + 96);
          if ( v439 != 7 && v439 != 17 )
            goto LABEL_503;
          goto LABEL_712;
        }
LABEL_503:
        v831 = sub_A73610((__int64)v802, v831, (__int64 *)v868, LODWORD(v869[0]), (const __m128i *)v814, 0);
        if ( v839 != v812 + 4 )
          free(v839);
        if ( v837 != v813 + 2 )
          free(v837);
        if ( v859 != v807 + 2 )
          free(v859);
        if ( v841 != (void *)(v817 + 24) )
          free(v841);
        if ( v868 != (void *)(v809 + 16) )
          free(v868);
LABEL_513:
        v58 = (__int64 *)(v55 + 4);
        v59 = v831;
LABEL_44:
        if ( (v59 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v60 = v802;
          *((_BYTE *)v14 + 720) |= 1u;
          LOBYTE(v808) = 0;
          v831 = v60[2340];
        }
LABEL_46:
        v61 = (std::nothrow_t *)v799;
        v62 = sub_178E2C0(*((_QWORD *)v13 + 83), (__int64)v799);
        v44 = v801;
        sub_1E742A0((__int64)v797, v801, 1, v58, v62, v39, (__m128i)a7);
        if ( *v55 != 6 )
        {
          if ( (_BYTE)v803 && (*v55 & 0xFFFFFFFD) != 0 )
          {
            v44 = (__int64 *)(v13 + 2);
            sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v55[1], 0x1BDEu, 0);
            sub_15F7200(&v868);
          }
          LOBYTE(v803) = *((_BYTE *)v797 + 264);
        }
        v51 = (unsigned int)v800;
        v806 = (void **)((char *)v806 + 1);
        if ( (_DWORD)v800 )
          continue;
LABEL_52:
        if ( (_BYTE)v803 )
        {
          v44 = (__int64 *)(v13 + 2);
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, *(_DWORD *)(v797[1] + 88), 0x1BDEu, 0);
          sub_15F7200(&v868);
        }
        v807 = &v859;
        if ( (*(_WORD *)v798 & 0x808) == 0 && (v798[12] & 1) == 0 )
        {
          v63 = *((unsigned int *)v14 + 34);
          v46 = v14[16];
          LOBYTE(v846[0]) = 0;
          v64 = (_DWORD *)v46;
          v65 = (_DWORD *)(v46 + 144 * v63);
          if ( (_DWORD *)v46 != v65 )
          {
            v66 = (__int64 *)&v868;
            v49 = (std::nothrow_t *)v846;
            do
            {
              while ( *v64 == 3 )
              {
                v67 = *((_BYTE *)v64 + 56);
                if ( (v67 & 1) == 0 )
                {
                  v46 = (unsigned int)v64[18];
                  if ( !(_DWORD)v46 && (v67 & 2) == 0 && v64[15] )
                  {
                    v600 = v64[1];
                    v800 = v64;
                    v803 = v49;
                    v799 = (__m128 *)v66;
                    sub_168B9F0((__int64)v66, (__int64 *)v13 + 1, v600, 0x1CDAu, 0);
                    v601 = (unsigned __int8 *)v803;
                    v804 = (__int64)v803;
                    v803 = (std::nothrow_t *)v799;
                    v799 = (__m128 *)sub_15890D0((__int64)v799, v601);
                    v602 = j__strlen("void");
                    sub_9EC740((__int64)v807, *((_DWORD *)v800 + 17), "void", v602, 0);
                    v44 = (__int64 *)v807;
                    sub_1589170((__int64)v799, v807);
                    v603 = (__int64 *)v800;
                    v604 = (__m128 *)v803;
                    v605 = (std::nothrow_t *)v804;
                    if ( v861 != v863 )
                    {
                      v803 = (std::nothrow_t *)v804;
                      v800 = v604;
                      v799 = (__m128 *)v603;
                      operator delete(v861);
                      v605 = v803;
                      v604 = (__m128 *)v800;
                      v603 = (__int64 *)v799;
                    }
                    v803 = v605;
                    v800 = v603;
                    v799 = v604;
                    sub_15F7200(v604);
                    v49 = v803;
                    v64 = v800;
                    v66 = (__int64 *)v799;
                  }
                }
                v64 += 36;
                LOBYTE(v846[0]) = 0;
                if ( v65 == v64 )
                  goto LABEL_67;
              }
              if ( *v64 == 4 )
                LOBYTE(v846[0]) = 1;
              v64 += 36;
            }
            while ( v65 != v64 );
          }
        }
LABEL_67:
        if ( (v798[1] & 8) == 0 )
          goto LABEL_79;
        v68 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
          goto LABEL_79;
        if ( *(_BYTE *)(v68 + 16) != 26 )
          v68 = sub_1E5D9F0(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v44, v46, v47);
        if ( *((_DWORD *)v14 + 14) == 9 )
        {
          if ( (_BYTE)v805 )
          {
            v799 = (__m128 *)(&dword_0 + 3);
            goto LABEL_77;
          }
          goto LABEL_79;
        }
        if ( v14[2] )
        {
          v69 = sub_16A2930((__int64)v13, (__int64)(v14 + 1), 0, v47, v48, (__int64)v49);
          if ( v69 )
          {
            v70 = *(_BYTE *)(v69 + 8) & 0x7F;
            if ( v70 <= 0x39u || v70 > 0x3Du )
              goto LABEL_75;
          }
LABEL_841:
          if ( (unsigned __int8)sub_147B3A0((__int64)v14, &v868)
            && (v509 = v14[16] + 144LL * (unsigned int)v868, *(_DWORD *)(v509 + 72))
            && (v510 = *(_QWORD *)(*(_QWORD *)(v509 + 96) + 16LL)) != 0
            && (*(_BYTE *)(v510 + 28) & 0x7F) == 0x2B
            && *(_DWORD *)(v510 + 100) )
          {
            if ( (_BYTE)v805 )
            {
              v799 = (__m128 *)(&dword_0 + 2);
              goto LABEL_77;
            }
          }
          else if ( (_BYTE)v805
                 && (sub_15AC5E0((__int64)v14)
                  || (*(_BYTE *)*v14 & 7) == 3
                  || *((_DWORD *)v14 + 24) == 7 && sub_15AC4A0((__int64)v14)) )
          {
            v799 = (__m128 *)(&dword_0 + 1);
            goto LABEL_77;
          }
          goto LABEL_79;
        }
        v508 = *((_DWORD *)v14 + 24);
        if ( (v508 == 17 || v508 == 7) && !*(_DWORD *)(*v14 + 264LL) )
          goto LABEL_841;
LABEL_75:
        if ( (_BYTE)v805 )
        {
          v799 = nullptr;
LABEL_77:
          if ( !(_BYTE)v810 && (unsigned int)(*((_DWORD *)v14 + 24) - 22) > 1 )
          {
            LODWORD(v803) = *((_DWORD *)v14 + 22);
            if ( !(unsigned __int8)sub_147B3A0((__int64)v14, &v841) )
            {
              LODWORD(v800) = 0;
              v610 = 0;
              v608 = &v868;
              goto LABEL_1040;
            }
            v608 = &v868;
            v869[0] = (void *)0x400000000LL;
            v868 = &v869[1];
            v609 = v14[16] + 144LL * (unsigned int)v841;
            v610 = *(_DWORD *)(v609 + 80);
            v611 = *(_QWORD *)(v609 + 104);
            if ( v610 )
            {
              LODWORD(v869[1]) = *(_DWORD *)(v609 + 80);
              LODWORD(v869[0]) = 1;
              if ( !v611 )
              {
                v780 = *((_QWORD *)v13 + 34);
                v803 = (std::nothrow_t *)((char *)&v869[1] + 4);
                v800 = &v869[1];
                sub_1E7D270((int *)&v869[1], (int *)&v869[1] + 1, 0, v780);
                v730 = (std::nothrow_t *)v780;
                v731 = (int *)v800;
                v800 = v803;
                goto LABEL_1203;
              }
              if ( (*(_BYTE *)(v611 + 3) & 0x7C) == 0 && !*(_DWORD *)(v611 + 48) )
              {
                v729 = *((_QWORD *)v13 + 34);
                v800 = (char *)&v869[1] + 4;
                v803 = (std::nothrow_t *)&v869[1];
                sub_1E7D270((int *)&v869[1], (int *)&v869[1] + 1, 0, v729);
                v730 = (std::nothrow_t *)v729;
                v731 = (int *)v803;
                goto LABEL_1203;
              }
            }
            else
            {
              LODWORD(v800) = 0;
              if ( !v611 )
              {
LABEL_1040:
                sub_168B9F0((__int64)v608, (__int64 *)v13 + 1, (unsigned int)v803, 0xFD8u, 0);
                if ( v877.m128_i8[0] )
                {
                  sub_1E5E160((unsigned __int8 **)v608 + 4, (__int64)v799);
                }
                else if ( v877.m128_i8[12] )
                {
                  v803 = (std::nothrow_t *)sub_168B9E0(v608);
                  v708 = v869[1];
                  if ( v869[1] )
                    v708 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v869[1] + 32LL))(v869[1]);
                  v859 = v708;
                  v709 = sub_1587BC0((__int64)v803, (__int64 *)v807, v704, v705, v706, v707);
                  sub_1E5E160((unsigned __int8 **)(*v709 + 32LL * v877.m128_u32[2] + 8), (__int64)v799);
                }
                LOBYTE(v839) = sub_147B3A0((__int64)v14, v807);
                v612 = sub_1588420((__int64)v608, (unsigned __int8 *)&v839);
                v803 = (std::nothrow_t *)sub_1605D30(v612, v801);
                v799 = (__m128 *)v846;
                sub_1E601F0(v846, v68, v613);
                v614 = sub_1682AF0((__int64)v803, (__int64)v799);
                *(_QWORD *)((char *)&ptr + 4) = 0;
                BYTE12(ptr) = 0;
                v861 = v807 + 5;
                v803 = (std::nothrow_t *)(v807 + 5);
                v862 = 0;
                v863[0] = 0;
                v864 = 0;
                v859 = (void *)__PAIR64__((unsigned int)v800, v610);
                LOBYTE(ptr) = 1;
                sub_1589170(v614, v807);
                if ( v861 != v803 )
                  operator delete(v861);
                if ( *(__m128 **)v846 != &v799[1] )
                  operator delete(*(void **)v846);
                sub_15F7200(v608);
                sub_A5E110((__m128 *)v608, v68);
                v869[0] = (void *)((unsigned __int64)v869[0] & 0xFFFFFFFFFFFFFFF8LL);
                LODWORD(v869[1]) = 0;
                v831 = sub_A73610(
                         (__int64)v802,
                         *(_QWORD *)(v68 + 24),
                         (__int64 *)(v68 + 48),
                         *(unsigned __int16 *)(v68 + 22),
                         (const __m128i *)v608,
                         0);
                v615 = *((_DWORD *)v14 + 34);
                if ( v615 && *(_DWORD *)v14[16] == 6 )
                {
                  v616 = 144;
                  v617 = 16 * (9LL * (unsigned int)(v615 - 1) + 9);
                  do
                  {
                    v831 = sub_A760B0(*((_QWORD *)v13 + 31), v831);
                    if ( v617 == v616 )
                      break;
                    v618 = *(_DWORD *)(v14[16] + v616);
                    v616 += 144;
                  }
                  while ( v618 == 6 );
                }
                goto LABEL_79;
              }
              if ( (*(_BYTE *)(v611 + 3) & 0x7C) == 0 )
              {
                v610 = *(_DWORD *)(v611 + 48);
                if ( !v610 )
                {
                  LODWORD(v800) = 0;
                  goto LABEL_1040;
                }
              }
            }
            v859 = &v868;
            sub_15AC6E0(
              v611,
              (void (__fastcall *)(__int64, __int64, const char *, __int64, _QWORD))sub_1E5E3A0,
              (__int64)v807);
            v610 = (unsigned int)v869[0];
            v703 = (void **)v868;
            LODWORD(v800) = 0;
            if ( !LODWORD(v869[0]) )
              goto LABEL_1174;
            v804 = (__int64)v868;
            v763 = 4LL * LODWORD(v869[0]);
            _BitScanReverse64(&v764, LODWORD(v869[0]));
            v803 = *((std::nothrow_t **)v13 + 34);
            v800 = (char *)v868 + v763;
            sub_1E7D270((int *)v868, (int *)((char *)v868 + v763), 2LL * (int)(63 - (v764 ^ 0x3F)), (__int64)v803);
            v731 = (int *)v804;
            v730 = v803;
            if ( v763 > 0x40 )
            {
              v765 = v803;
              v803 = (std::nothrow_t *)(v804 + 64);
              sub_1E7CF30((int *)v804, (int *)(v804 + 64), (__int64)v730);
              v766 = v803;
              if ( v800 != v803 )
              {
                v803 = v61;
                v805 = v14;
                v804 = (__int64)v13;
                v767 = (int *)v766;
                v806 = &v868;
                v768 = (__int64)v765;
                do
                {
                  v769 = *v767;
                  for ( m = v767; ; m[1] = *m )
                  {
                    v771 = *(m - 1);
                    v772 = m--;
                    if ( !sub_10246C0(v768, v769, v771) )
                      break;
                  }
                  *v772 = v769;
                  ++v767;
                }
                while ( v800 != v767 );
                v61 = v803;
                v13 = (int *)v804;
                v14 = v805;
                v608 = v806;
              }
              goto LABEL_1204;
            }
LABEL_1203:
            sub_1E7CF30(v731, (int *)v800, (__int64)v730);
LABEL_1204:
            v703 = (void **)v868;
            v610 = *(_DWORD *)v868;
            v732 = *((_DWORD *)v868 + LODWORD(v869[0]) - 1);
            LODWORD(v803) = *(_DWORD *)v868;
            LODWORD(v800) = v732;
LABEL_1174:
            if ( v703 != v608 + 2 )
              free(v703);
            goto LABEL_1040;
          }
        }
LABEL_79:
        v859 = nullptr;
        *(_QWORD *)&ptr = v807 + 3;
        *((_QWORD *)&ptr + 1) = 0x200000000LL;
        v71 = v14[101];
        v72 = *(__int64 **)(v71 + 8);
        v73 = &v72[*(unsigned int *)(v71 + 16)];
        v799 = (__m128 *)(v807 + 1);
        while ( v73 != v72 )
        {
          while ( 1 )
          {
            v74 = *v72;
            if ( !sub_15D8670(*v72) )
              break;
            if ( v73 == ++v72 )
              goto LABEL_84;
          }
          ++v72;
          sub_147F4B0((__int64)v799, v74);
        }
LABEL_84:
        v75 = v797;
        v76 = v801;
        sub_1E742A0((__int64)v797, v801, 2, (__int64 *)v807, 3u, v39, (__m128i)a7);
        sub_1E742A0((__int64)v75, v76, 2, (__int64 *)v61, 3u, v39, (__m128i)a7);
        v80 = (__int64 *)v75[7];
        v81 = v831;
        v82 = v797;
        v83 = &v80[*((unsigned int *)v75 + 16)];
        while ( v83 != v80 )
        {
          v84 = *v80++;
          sub_1E68180(*v82, v84, v81, *(double *)v39.m128_u64, *(double *)a7.m128_u64);
        }
        v85 = v831;
        if ( ((*(_BYTE *)(*v14 + 4LL) >> 4) & 3) == 1 )
        {
          v411 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v77 = *(unsigned __int8 *)(v411 + 16);
          if ( (unsigned int)(v77 - 43) > 1
            && (unsigned __int8)(v77 - 25) > 1u
            && ((_BYTE)v77 != 13 || ((*(_WORD *)(v411 + 18) >> 3) & 0x1FF) != 0x1B3) )
          {
            v85 = v831 & 7 | 1 | v831 & 0xFFFFFFFFFFFFFFF8LL;
            v831 = v85;
          }
        }
        if ( ((v85 & 4) != 0 || (byte_8[v85 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0)
          && *(char *)(*((_QWORD *)v13 + 29) + 1LL) < 0 )
        {
          v425 = *((_DWORD *)v14 + 24);
          if ( v425 == 1 || v425 == 18 )
          {
            sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, *((_DWORD *)v14 + 20), 0x1ABCu, 0);
            sub_1605D30((__int64)&v868, v801);
            sub_15F7200(&v868);
          }
        }
        v86 = *((_DWORD *)v14 + 663);
        if ( v86 )
        {
          v77 = *((unsigned int *)v14 + 24);
          if ( (unsigned int)v77 <= 0x1B )
          {
            v87 = 1LL << v77;
            if ( ((1LL << v77) & 0xBFBEFFD) != 0 )
            {
              sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v86, 0xE8Cu, 0);
              sub_15F7200(&v868);
              *((_DWORD *)v14 + 663) = 0;
              goto LABEL_95;
            }
            if ( (v87 & 0x4040002) != 0 )
            {
              v581 = *(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL);
              if ( (*(_BYTE *)(v581 + 17) & 1) != 0 )
                goto LABEL_1033;
              if ( (char)v798[1] < 0 )
              {
                v607 = sub_F57E80(v581);
                if ( v607 && *(_BYTE *)(v607 + 16) == 16 )
                  goto LABEL_1033;
                v86 = *((_DWORD *)v14 + 663);
              }
              sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v86, 0xF1Au, 0);
              v582 = sub_1605D30((__int64)&v868, v801);
              *(_QWORD *)v846 = v14[11];
              sub_1587DB0(v582, (__int64 *)v846);
              sub_15F7200(&v868);
              *((_DWORD *)v14 + 663) = 0;
              goto LABEL_95;
            }
            if ( (v87 & 0x1000) == 0 )
              goto LABEL_95;
            if ( (*(_BYTE *)(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
            {
              sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v86, (v798[1] & 0x10) == 0 ? 96 : 135, 0);
              sub_15F7200(&v868);
              goto LABEL_95;
            }
LABEL_1033:
            v831 = sub_A781D0((__int64)v802, v831, 0);
          }
        }
LABEL_95:
        if ( (_BYTE)v808 )
        {
          v88 = v831;
          v89 = v831 & 0xFFFFFFFFFFFFFFF0LL;
          if ( *((_BYTE *)v797 + 265)
            && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 2 > 1 )
          {
            v831 = sub_19F7000(*((_QWORD *)v13 + 85), v831);
            v88 = v831;
            v89 = v831 & 0xFFFFFFFFFFFFFFF0LL;
          }
          v813 = (__int64 *)v824;
          v90 = v797[1];
          v805 = (_QWORD *)*v797;
          v91 = (_QWORD *)v805[31];
          v798 = (_BYTE *)v90;
          v92 = (int *)sub_A81BC0(v91, v88, 0, v77, v78, v79);
          v97 = *(_QWORD *)v92;
          v812 = (unsigned int *)v92;
          v98 = (unsigned __int64)(v92 + 2);
          if ( v97 & 7 | (v97 >> 3) & 1 && v97 )
          {
            v393 = (signed __int64 *)(v97 & 0xFFFFFFFFFFFFFFF0LL);
            v394 = sub_F6C520(*(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
            v99 = *v393;
            v93 = v394;
            v98 = v394 * ((v98 != 0) + (v98 - (v98 != 0)) / v394);
            if ( *(_BYTE *)(*(_QWORD *)v89 + 16LL) == 38 )
            {
LABEL_588:
              *(_DWORD *)v98 = *((_DWORD *)v798 + 663);
              v99 = sub_F6C7E0(v99, v98);
              v98 = v395;
              if ( v99 & 7 | (v99 >> 3) & 1 && v99 )
              {
                v396 = (signed __int64 *)(v99 & 0xFFFFFFFFFFFFFFF0LL);
                v397 = sub_F6C520(*v396 & 0xFFFFFFFFFFFFFFF0LL);
                v99 = *v396;
                v93 = v397;
                v98 = v397 * ((v98 != 0) + (v98 - (v98 != 0)) / v397);
              }
            }
          }
          else
          {
            v99 = v97;
            if ( *(_BYTE *)(*(_QWORD *)v89 + 16LL) == 38 )
              goto LABEL_588;
          }
          v100 = *((_DWORD *)v798 + 34);
          if ( v100 )
          {
            v101 = v99;
            LOBYTE(v806) = v100 != 1;
            v102 = nullptr;
            v103 = v797;
            v801 = (__int64 *)(16 * (9LL * (unsigned int)(v100 - 1) + 9));
            v808 = (__m128 *)&v868;
            while ( 1 )
            {
              v104 = *(unsigned __int8 *)(v101 + 16);
              if ( (_BYTE)v104 != 5 || !(_BYTE)v806 )
              {
LABEL_331:
                if ( (v101 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(v101 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 7 )
                {
                  v295 = 0;
                  v296 = (_DWORD *)((char *)v102 + *((_QWORD *)v798 + 16));
                  if ( !*v296 )
                    v295 = v296[18];
                  *(_DWORD *)v98 = v295;
                  v297 = v98 + 12;
                  *(_QWORD *)(v297 - 8) = 0;
                  v298 = sub_F6C520(*(_QWORD *)(v101 + 32));
                  v97 = *(_QWORD *)(v101 + 32);
                  v98 = v298 * ((v297 != 0) + (v297 - (v297 != 0)) / v298);
                  if ( (v97 & 0xF) != 0 && v97 )
                  {
                    v299 = (unsigned __int64 *)(v97 & 0xFFFFFFFFFFFFFFF0LL);
                    v300 = sub_F6C520(*(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
                    v101 = *v299;
                    v98 = v300 * ((v98 != 0) + (v98 - (v98 != 0)) / v300);
                  }
                  else
                  {
                    v101 = *(_QWORD *)(v101 + 32);
                  }
                  v104 = *(unsigned __int8 *)(v101 + 16);
                }
                v799 = (__m128 *)v102;
                v800 = v103 + 30;
                while ( 2 )
                {
                  switch ( (char)v104 )
                  {
                    case 0:
                    case 9:
                      v285 = sub_F6C7E0(v101, v98);
                      v101 = v285;
                      v98 = v286;
                      if ( (v285 & 0xF) != 0 && v285 )
                      {
                        v287 = (unsigned __int64 *)(v285 & 0xFFFFFFFFFFFFFFF0LL);
                        v288 = sub_F6C520(*(_QWORD *)(v285 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
                        v101 = *v287;
                        v98 = v288 * ((v98 != 0) + (v98 - (v98 != 0)) / v288);
                      }
                      goto LABEL_340;
                    case 8:
                      v280 = (__m128 *)v103[11];
                      v802 = (void *)(16LL * *((unsigned int *)v103 + 24));
                      v281 = (__int64)v802 >> 4;
                      v282 = *((_BYTE *)v103 + 232) == 0;
                      v803 = (std::nothrow_t *)((char *)v802 + (_QWORD)v280);
                      v804 = (__int64)v802 >> 4;
                      if ( !v282 )
                        goto LABEL_347;
                      if ( !v802 )
                      {
                        v811 = (std::nothrow_t *)&std::nothrow;
LABEL_930:
                        sub_1E5DC00(v280, (__m128 *)v803);
                        v314 = nullptr;
                        goto LABEL_384;
                      }
                      v809 = (__int64)v280;
                      v810 = v101;
                      v301 = (__int64)v802 >> 4;
                      v811 = (std::nothrow_t *)&std::nothrow;
                      do
                      {
                        v302 = (__m128i *)operator new(16 * v301, (const std::nothrow_t *)&std::nothrow);
                        if ( v302 )
                        {
                          v305 = v301;
                          v306 = v301;
                          v307 = v301;
                          v308 = (__m128 *)v809;
                          v309 = (__m128 *)&v302[v305];
                          v310 = (__m128 *)&v302[1];
                          v101 = v810;
                          a7 = (__m128)_mm_loadu_si128((const __m128i *)v809);
                          v311 = *(void **)(v809 + 8);
                          *v302 = (__m128i)a7;
                          if ( v309 != (__m128 *)&v302[1] )
                          {
                            v312 = _mm_loadh_ps((const double *)&v302->m128i_i64[1]);
                            do
                              *v310++ = v312;
                            while ( v309 != v310 );
                            v311 = (void *)v302[v306 - 1].m128i_i64[1];
                          }
                          v313 = v803;
                          v802 = v311;
                          v39 = _mm_loadh_ps((const double *)&v802);
                          v802 = v302;
                          *v308 = v39;
                          sub_1E7BD90(
                            v308,
                            (__m128 *)v313,
                            v302,
                            v307,
                            (__m128i)v39,
                            a7,
                            a8,
                            si128,
                            v303,
                            v304,
                            *(double *)a12.m128i_i64,
                            a13);
                          v314 = v802;
                          goto LABEL_384;
                        }
                        v301 >>= 1;
                      }
                      while ( v301 );
                      v280 = (__m128 *)v809;
                      v101 = v810;
                      if ( (unsigned __int64)v802 <= 0xE0 )
                        goto LABEL_930;
                      v359 = 16 * (v804 >> 1);
                      v360 = (__m128 *)(v809 + v359);
                      v804 = v809 + v359;
                      v810 = v359 >> 4;
                      if ( (unsigned __int64)v359 <= 0xE0 )
                      {
                        v515 = (__m128 *)v809;
                        v809 = v359;
                        sub_1E5DC00(v515, v360);
                        v368 = v809;
                      }
                      else
                      {
                        v361 = 16 * (v359 >> 5);
                        v362 = (__m128 *)(v809 + v361);
                        v809 += v361;
                        v814 = v361 >> 4;
                        if ( (unsigned __int64)v361 <= 0xE0 )
                        {
                          v815 = v359;
                          v817 = 16 * (v359 >> 5);
                          sub_1E5DC00(v280, v362);
                          v364 = (unsigned int *)v815;
                          v365 = v817;
                        }
                        else
                        {
                          v818 = v359;
                          v815 = 16 * (v359 >> 5);
                          v363 = &v280[v361 >> 5];
                          v817 = 16 * (v361 >> 5);
                          sub_1E623D0(v280, v363);
                          sub_1E623D0(v363, (__m128 *)v809);
                          sub_1E621B0((char *)v280, (unsigned __int64)v363, v809, v817 >> 4, (v815 - v817) >> 4);
                          v364 = (unsigned int *)v818;
                          v365 = v815;
                        }
                        v366 = ((__int64)v364 - v365) >> 4;
                        if ( (__int64)v364 - v365 <= 224 )
                        {
                          v815 = (__int64)v364;
                          sub_1E5DC00((__m128 *)v809, (__m128 *)v804);
                          v367 = (unsigned int *)v815;
                        }
                        else
                        {
                          v818 = (__int64)v364;
                          v817 = 16 * (((__int64)v364 - v365) >> 5);
                          v815 = v809 + v817;
                          sub_1E623D0((__m128 *)v809, (__m128 *)(v809 + v817));
                          sub_1E623D0((__m128 *)v815, (__m128 *)v804);
                          sub_1E621B0((char *)v809, v815, v804, v817 >> 4, (v804 - v815) >> 4);
                          v367 = (unsigned int *)v818;
                        }
                        v815 = (__int64)v367;
                        sub_1E621B0((char *)v280, v809, v804, v814, v366);
                        v368 = v815;
                      }
                      v369 = (__int64)v802 - v368;
                      v802 = (void *)(v369 >> 4);
                      if ( v369 <= 224 )
                      {
                        sub_1E5DC00((__m128 *)v804, (__m128 *)v803);
                      }
                      else
                      {
                        v370 = 16 * (v369 >> 5);
                        v371 = (__m128 *)(v804 + v370);
                        v814 = (__int64)v370 >> 4;
                        if ( v370 <= 0xE0 )
                        {
                          sub_1E5DC00((__m128 *)v804, (__m128 *)(v804 + v370));
                        }
                        else
                        {
                          v817 = v370;
                          v815 = 16 * ((__int64)v370 >> 5);
                          v809 = v804 + v815;
                          sub_1E623D0((__m128 *)v804, (__m128 *)(v804 + v815));
                          sub_1E623D0((__m128 *)v809, v371);
                          sub_1E621B0((char *)v804, v809, (__int64)v371, v815 >> 4, (v817 - v815) >> 4);
                        }
                        v809 = (v803 - (std::nothrow_t *)v371) >> 4;
                        if ( v803 - (std::nothrow_t *)v371 <= 224 )
                        {
                          sub_1E5DC00(v371, (__m128 *)v803);
                        }
                        else
                        {
                          v817 = 16 * ((v803 - (std::nothrow_t *)v371) >> 5);
                          v815 = (__int64)v371 + v817;
                          sub_1E623D0(v371, (__m128 *)((char *)v371 + v817));
                          sub_1E623D0((__m128 *)v815, (__m128 *)v803);
                          sub_1E621B0((char *)v371, v815, (__int64)v803, v817 >> 4, ((__int64)v803 - v815) >> 4);
                        }
                        sub_1E621B0((char *)v804, (unsigned __int64)v371, (__int64)v803, v814, v809);
                      }
                      sub_1E621B0((char *)v280, v804, (__int64)v803, v810, (__int64)v802);
                      v314 = nullptr;
LABEL_384:
                      operator delete(v314, v811);
                      v280 = (__m128 *)v103[11];
                      v281 = *((unsigned int *)v103 + 24);
                      *((_BYTE *)v103 + 232) = 1;
LABEL_347:
                      while ( v281 )
                      {
                        while ( 1 )
                        {
                          v283 = &v280[v281 >> 1];
                          if ( v101 <= v283->m128_u64[0] )
                            break;
                          v280 = v283 + 1;
                          v281 = v281 - (v281 >> 1) - 1;
                          if ( v281 <= 0 )
                            goto LABEL_352;
                        }
                        v281 >>= 1;
                      }
LABEL_352:
                      while ( 1 )
                      {
                        v284 = v280->m128_u64[1];
                        if ( v284 )
                          break;
                        ++v280;
                      }
                      v280->m128_u64[1] = 0;
                      v271 = v98 + 8;
                      *(_QWORD *)(v271 - 8) = v284;
                      v101 = *(_QWORD *)(v101 + 40);
LABEL_339:
                      v97 = (unsigned int)sub_F6C520(v101);
                      v98 = v97 * ((v271 != 0) + (v271 - (v271 != 0)) / v97);
                      if ( (v101 & 0xF) != 0 && v101 )
                      {
                        v293 = (unsigned __int64 *)(v101 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_365:
                        v294 = sub_F6C520(*v293 & 0xFFFFFFFFFFFFFFF0LL);
                        v101 = *v293;
                        v97 = v294;
                        v98 = v294 * ((v98 != 0) + (v98 - (v98 != 0)) / v294);
                      }
LABEL_340:
                      v104 = *(unsigned __int8 *)(v101 + 16);
                      if ( (unsigned __int8)v104 <= 0x1Eu )
                        continue;
                      break;
                    case 18:
                      v274 = *(__int64 **)((char *)&v799[1].m128_u64[1] + *((_QWORD *)v798 + 16));
                      for ( n = *v274; *(_WORD *)(*(_QWORD *)(*v274 + 72) + 8LL) != 16; n = *v274 )
                        ++v274;
                      v276 = v98 + 24;
                      *(_DWORD *)(v276 - 8) = *(_DWORD *)(n + 24);
                      v277 = *(_QWORD *)(n + 80);
                      *(_QWORD *)(v276 - 16) = 0;
                      *(_QWORD *)(v276 - 24) = v277 & 0xFFFFFFFFFFFFFFFCLL;
                      v278 = sub_F6C520(*(_QWORD *)(v101 + 40));
                      v279 = *(_QWORD *)(v101 + 40);
                      v97 = v278;
                      v98 = v278 * ((v276 != 0) + (v276 - (v276 != 0)) / v278);
                      if ( (v279 & 0xF) == 0 || !v279 )
                      {
                        v101 = *(_QWORD *)(v101 + 40);
                        goto LABEL_340;
                      }
                      v293 = (unsigned __int64 *)(v279 & 0xFFFFFFFFFFFFFFF0LL);
                      goto LABEL_365;
                    case 30:
                      v265 = *((unsigned int *)v103 + 64);
                      v266 = v103[30];
                      if ( !(_DWORD)v265 )
                        goto LABEL_386;
                      v267 = (v265 - 1) & (((unsigned int)v101 >> 9) ^ ((unsigned int)v101 >> 4));
                      v268 = (__int64 *)(v266 + 16LL * v267);
                      v269 = *v268;
                      if ( v101 == *v268 )
                        goto LABEL_337;
                      v315 = 1;
                      if ( v269 == -4096 )
                        goto LABEL_386;
                      while ( 2 )
                      {
                        v606 = v315 + 1;
                        v267 = (v265 - 1) & (v315 + v267);
                        v268 = (__int64 *)(v266 + 16LL * v267);
                        if ( v101 == *v268 )
                        {
LABEL_337:
                          sub_1E616F0(v808, v268, (_QWORD *)(16 * v265 + v266), (__int64)v800, 1);
                          v270 = v868;
                        }
                        else
                        {
                          if ( *v268 != -4096 )
                          {
                            v315 = v606;
                            continue;
                          }
LABEL_386:
                          sub_1E616F0(
                            v808,
                            (_QWORD *)(v266 + 16LL * (unsigned int)v265),
                            (_QWORD *)(v266 + 16LL * (unsigned int)v265),
                            (__int64)v800,
                            1);
                          v270 = v868;
                        }
                        break;
                      }
                      v271 = v98 + 4;
                      *(_DWORD *)(v271 - 4) = v270[2];
                      v101 = *(_QWORD *)(v101 + 24);
                      goto LABEL_339;
                    default:
                      goto LABEL_341;
                  }
                  break;
                }
LABEL_341:
                v102 = (__int64 *)v799;
                v272 = (char *)v799 + *((_QWORD *)v798 + 16);
                v273 = (_QWORD *)v805[31];
                switch ( v104 )
                {
                  case 0LL:
                  case 9LL:
                  case 12LL:
                    goto LABEL_358;
                  case 2LL:
                  case 4LL:
                  case 5LL:
                  case 6LL:
                    *(_DWORD *)v98 = *((_DWORD *)v272 + 1);
                    *(_DWORD *)(v98 + 4) = *((_DWORD *)v272 + 2);
                    *(_QWORD *)(v98 + 8) = *((_QWORD *)v272 + 8);
                    goto LABEL_358;
                  case 7LL:
                    v472 = 0;
                    if ( !*(_DWORD *)v272 )
                      v472 = *((_DWORD *)v272 + 18);
                    *(_DWORD *)v98 = v472;
                    *(_QWORD *)(v98 + 4) = 0;
                    goto LABEL_358;
                  case 8LL:
                    v474 = (__m128 *)v103[11];
                    v475 = 16LL * *((unsigned int *)v103 + 24);
                    v476 = (__int64 *)&v474[(unsigned __int64)v475 / 0x10];
                    v800 = (void *)v475;
                    v477 = v475 >> 4;
                    v282 = *((_BYTE *)v103 + 232) == 0;
                    v799 = (__m128 *)v476;
                    v802 = (void *)v477;
                    if ( !v282 )
                      goto LABEL_792;
                    if ( !v800 )
                    {
                      v803 = (std::nothrow_t *)&std::nothrow;
LABEL_1182:
                      sub_1E5DC00(v474, v799);
                      v643 = nullptr;
                      goto LABEL_1084;
                    }
                    v804 = v98;
                    v810 = v101;
                    v631 = v477;
                    v803 = (std::nothrow_t *)&std::nothrow;
                    v809 = (__int64)v474;
                    do
                    {
                      v632 = (__m128i *)operator new(16 * v631, (const std::nothrow_t *)&std::nothrow);
                      if ( v632 )
                      {
                        v635 = v631;
                        v636 = (__m128 *)v809;
                        v637 = (__m128 *)&v632[1];
                        v638 = (__m128 *)&v632[v631];
                        v639 = v631;
                        v98 = v804;
                        v101 = v810;
                        a13 = (__m128)_mm_loadu_si128((const __m128i *)v809);
                        v640 = *(void **)(v809 + 8);
                        *v632 = (__m128i)a13;
                        if ( v638 != (__m128 *)&v632[1] )
                        {
                          v641 = _mm_loadh_ps((const double *)&v632->m128i_i64[1]);
                          do
                            *v637++ = v641;
                          while ( v638 != v637 );
                          v640 = (void *)v632[v635 - 1].m128i_i64[1];
                        }
                        v642 = v799;
                        v800 = v640;
                        v39 = _mm_loadh_ps((const double *)&v800);
                        v800 = v632;
                        *v636 = v39;
                        sub_1E7BD90(
                          v636,
                          v642,
                          v632,
                          v639,
                          (__m128i)v39,
                          a7,
                          a8,
                          si128,
                          v633,
                          v634,
                          *(double *)a12.m128i_i64,
                          a13);
                        v643 = v800;
                        goto LABEL_1084;
                      }
                      v631 >>= 1;
                    }
                    while ( v631 );
                    v98 = v804;
                    v474 = (__m128 *)v809;
                    v101 = v810;
                    if ( (unsigned __int64)v800 <= 0xE0 )
                      goto LABEL_1182;
                    v685 = 16 * ((__int64)v802 >> 1);
                    v686 = (__m128 *)(v809 + v685);
                    v802 = (void *)(v809 + v685);
                    v809 = v685 >> 4;
                    if ( (unsigned __int64)v685 <= 0xE0 )
                    {
                      v804 = v685;
                      sub_1E5DC00(v474, v686);
                      v687 = v804;
                    }
                    else
                    {
                      v810 = v685;
                      v811 = (std::nothrow_t *)(16 * (v685 >> 5));
                      v804 = (__int64)v811 + (_QWORD)v474;
                      sub_1E623D0(v474, (__m128 *)((char *)v811 + (_QWORD)v474));
                      sub_1E623D0((__m128 *)v804, (__m128 *)v802);
                      sub_1E621B0((char *)v474, v804, (__int64)v802, (__int64)v811 >> 4, (v810 - (__int64)v811) >> 4);
                      v687 = v810;
                    }
                    v688 = (__int64)v800 - v687;
                    v800 = (void *)(v688 >> 4);
                    if ( v688 <= 224 )
                    {
                      sub_1E5DC00((__m128 *)v802, v799);
                    }
                    else
                    {
                      v810 = 16 * (v688 >> 5);
                      v804 = (__int64)v802 + v810;
                      sub_1E623D0((__m128 *)v802, (__m128 *)((char *)v802 + v810));
                      sub_1E623D0((__m128 *)v804, v799);
                      sub_1E621B0((char *)v802, v804, (__int64)v799, v810 >> 4, ((__int64)v799 - v804) >> 4);
                    }
                    sub_1E621B0((char *)v474, (unsigned __int64)v802, (__int64)v799, v809, (__int64)v800);
                    v643 = nullptr;
LABEL_1084:
                    operator delete(v643, v803);
                    v474 = (__m128 *)v103[11];
                    v477 = *((unsigned int *)v103 + 24);
                    *((_BYTE *)v103 + 232) = 1;
LABEL_792:
                    while ( v477 )
                    {
                      while ( 1 )
                      {
                        v478 = &v474[v477 >> 1];
                        if ( v101 <= v478->m128_u64[0] )
                          break;
                        v474 = v478 + 1;
                        v477 = v477 - (v477 >> 1) - 1;
                        if ( v477 <= 0 )
                          goto LABEL_797;
                      }
                      v477 >>= 1;
                    }
LABEL_797:
                    while ( 1 )
                    {
                      v479 = v474->m128_u64[1];
                      if ( v479 )
                        break;
                      ++v474;
                    }
                    v474->m128_u64[1] = 0;
                    *(_QWORD *)v98 = v479;
LABEL_358:
                    v289 = sub_F6C7E0(v101, v98);
                    v101 = v289;
                    v98 = v290;
                    if ( (v289 & 0xF) != 0 && v289 )
                    {
                      v291 = (unsigned __int64 *)(v289 & 0xFFFFFFFFFFFFFFF0LL);
                      v292 = sub_F6C520(*(_QWORD *)(v289 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
                      v101 = *v291;
                      v93 = v292;
                      v98 = v292 * ((v98 != 0) + (v98 - (v98 != 0)) / v292);
                    }
                    break;
                  case 10LL:
                  case 11LL:
                  case 21LL:
                  case 23LL:
                  case 34LL:
                  case 41LL:
                  case 42LL:
                  case 43LL:
                  case 44LL:
                  case 57LL:
                  case 58LL:
                    *(_DWORD *)v98 = *((_DWORD *)v272 + 1);
                    goto LABEL_358;
                  case 25LL:
                    *(_DWORD *)v98 = *((_DWORD *)v272 + 1);
                    *(_DWORD *)(v98 + 12) = *((_DWORD *)v272 + 2);
                    *(_DWORD *)(v98 + 4) = *((_DWORD *)v272 + 15);
                    *(_DWORD *)(v98 + 8) = *((_DWORD *)v272 + 17);
                    v465 = *(_BYTE *)(v101 + 16);
                    if ( v465 == 25 )
                      goto LABEL_358;
                    v466 = *(unsigned __int16 *)(v101 + 22);
                    if ( !*(_WORD *)(v101 + 22) )
                      goto LABEL_778;
                    v467 = *((_QWORD *)v272 + 12);
                    v468 = 0;
                    do
                    {
                      *(_QWORD *)(v98 + v468 + 16) = *(_QWORD *)(v467 + 4 * v468 + 16);
                      v468 += 8;
                    }
                    while ( 8LL * (unsigned int)(v466 - 1) + 8 != v468 );
                    goto LABEL_777;
                  case 26LL:
                    *(_DWORD *)v98 = *((_DWORD *)v272 + 1);
                    *(_DWORD *)(v98 + 12) = *((_DWORD *)v272 + 2);
                    *(_DWORD *)(v98 + 4) = *((_DWORD *)v272 + 15);
                    *(_DWORD *)(v98 + 8) = *((_DWORD *)v272 + 17);
                    v465 = *(_BYTE *)(v101 + 16);
                    if ( v465 == 25 )
                      goto LABEL_358;
                    v469 = *(unsigned __int16 *)(v101 + 22);
                    if ( !*(_WORD *)(v101 + 22) )
                      goto LABEL_778;
                    v470 = *((_QWORD *)v272 + 12);
                    v471 = 0;
                    do
                    {
                      *(_QWORD *)(v98 + v471 + 16) = *(_QWORD *)(v470 + 4 * v471 + 16);
                      v471 += 8;
                    }
                    while ( 8LL * (unsigned int)(v469 - 1) + 8 != v471 );
LABEL_777:
                    v465 = *(_BYTE *)(v101 + 16);
LABEL_778:
                    if ( v465 == 26 && (*(_BYTE *)(v101 + 19) & 0x1E) != 0 )
                      *(_QWORD *)(v98 + 8LL * *(unsigned __int16 *)(v101 + 22) + 16) = *((_QWORD *)v272 + 11);
                    goto LABEL_358;
                  case 31LL:
                    v480 = *((__int64 **)v272 + 3);
                    v462 = *v480;
                    for ( ii = v480 + 1; *(_WORD *)(*(_QWORD *)(v462 + 72) + 8LL) != 192; ++ii )
                      v462 = *ii;
                    goto LABEL_772;
                  case 32LL:
                    v461 = *((__int64 **)v272 + 3);
                    v462 = *v461;
                    for ( jj = v461 + 1; *(_WORD *)(*(_QWORD *)(v462 + 72) + 8LL) != 192; ++jj )
                      v462 = *jj;
LABEL_772:
                    *(_DWORD *)v98 = *(_DWORD *)(v462 + 24);
                    *(_QWORD *)(v98 + 16) = *(_QWORD *)(v462 + 80) & 0xFFFFFFFFFFFFFFFCLL;
                    v464 = *(_QWORD *)(v462 + 88);
                    *(_QWORD *)(v98 + 4) = 0;
                    *(_QWORD *)(v98 + 24) = v464 & 0xFFFFFFFFFFFFFFFCLL;
                    goto LABEL_358;
                  case 33LL:
                    *(_DWORD *)v98 = *((_DWORD *)v272 + 15);
                    sub_15AB9E0((__int64)(v272 + 64), v273, v104, (__int64)v272, v94, v97);
                    *(_QWORD *)(v98 + 8) = v473;
                    goto LABEL_358;
                  case 40LL:
                    *(_DWORD *)v98 = *((_DWORD *)v272 + 1);
                    *(_DWORD *)(v98 + 4) = *((_DWORD *)v272 + 2);
                    goto LABEL_358;
                  default:
                    goto LABEL_546;
                }
                goto LABEL_118;
              }
              v105 = *(_QWORD **)(*(_QWORD *)v798 + 40LL);
              v106 = 8LL * *(unsigned int *)(*(_QWORD *)v798 + 48LL);
              v107 = &v105[(unsigned __int64)v106 / 8];
              v94 = v106 >> 3;
              v108 = v106 >> 5;
              if ( !v108 )
              {
                v93 = *(_QWORD *)(*(_QWORD *)v798 + 40LL);
                goto LABEL_328;
              }
              if ( (*(_BYTE *)(*v105 + 58LL) & 0x10) != 0 )
                break;
              v93 = v105[1];
              if ( (*(_BYTE *)(v93 + 58) & 0x10) == 0 )
              {
                v93 = v105[2];
                v109 = &v105[4 * v108];
                if ( (*(_BYTE *)(v93 + 58) & 0x10) != 0 )
                {
                  v630 = v105 + 2;
                  goto LABEL_117;
                }
                while ( 1 )
                {
                  v93 = v105[3];
                  if ( (*(_BYTE *)(v93 + 58) & 0x10) != 0 )
                  {
                    v630 = v105 + 3;
                    goto LABEL_117;
                  }
                  v93 = (__int64)(v105 + 4);
                  if ( v105 + 4 == v109 )
                    break;
                  v94 = v105[4];
                  if ( (*(_BYTE *)(v94 + 58) & 0x10) != 0 )
                    goto LABEL_398;
                  v94 = v105[5];
                  if ( (*(_BYTE *)(v94 + 58) & 0x10) != 0 )
                  {
                    v630 = v105 + 5;
                    goto LABEL_117;
                  }
                  v94 = v105[6];
                  if ( (*(_BYTE *)(v94 + 58) & 0x10) != 0 )
                  {
                    v630 = v105 + 6;
                    goto LABEL_117;
                  }
                  v105 += 4;
                }
                v94 = v107 - v109;
LABEL_328:
                if ( v94 == 2 )
                  goto LABEL_614;
                if ( v94 != 3 )
                {
                  if ( v94 != 1 )
                    goto LABEL_331;
                  goto LABEL_616;
                }
                if ( (*(_BYTE *)(*(_QWORD *)v93 + 58LL) & 0x10) == 0 )
                {
                  v93 += 8;
LABEL_614:
                  if ( (*(_BYTE *)(*(_QWORD *)v93 + 58LL) & 0x10) == 0 )
                  {
                    v93 += 8;
LABEL_616:
                    if ( (*(_BYTE *)(*(_QWORD *)v93 + 58LL) & 0x10) == 0 )
                      goto LABEL_331;
                  }
                }
LABEL_398:
                if ( v107 == (_QWORD *)v93 )
                  goto LABEL_331;
                goto LABEL_118;
              }
              v630 = v105 + 1;
LABEL_117:
              if ( v630 == v107 )
                goto LABEL_331;
LABEL_118:
              v102 += 18;
              if ( v801 == v102 )
              {
                v99 = v101;
                goto LABEL_120;
              }
            }
            v93 = *(_QWORD *)(*(_QWORD *)v798 + 40LL);
            goto LABEL_398;
          }
LABEL_120:
          v110 = v813;
          if ( v813 )
          {
            v111 = sub_F6C560(*v813);
            memcpy((void *)v98, v110 + 1, v111);
          }
          else
          {
            v554 = (void *)v805[31];
            v555 = *(void **)v798;
            v868 = v805;
            v869[0] = v554;
            v869[1] = v797;
            v870 = v555;
            sub_1E7C9B0(
              (__int64)&v868,
              v99,
              v98,
              v93,
              v94,
              v97,
              *(double *)v39.m128_u64,
              *(double *)a7.m128_u64,
              a8,
              si128,
              v95,
              v96,
              *(double *)a12.m128i_i64,
              a13);
          }
        }
        else
        {
          v812 = (unsigned int *)sub_A81910(v802, v831, 0);
        }
        if ( (void **)ptr != v807 + 3 )
          free((void *)ptr);
        return v812;
      case 4LL:
        if ( (v798[20] & 0x40) == 0 )
        {
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v55[1], 0xD07u, 0);
          LOBYTE(v799) = v798[47];
          LODWORD(v859) = ((unsigned __int8)v799 & 0x20) != 0;
          sub_1588370((__int64)&v868, (unsigned int *)&v859);
          sub_15F7200(&v868);
        }
        v58 = (__int64 *)(v55 + 4);
        sub_1E69800(
          (int **)v844,
          1u,
          v55[1],
          v55[2],
          (__int64)(v55 + 4),
          (__int64 *)(v797[1] + 768),
          (__m128i)v39,
          *(double *)a7.m128_u64);
        v244 = v831;
        v245 = *((unsigned int *)v14 + 20);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v831 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 > 1 )
        {
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v245, 0x10DDu, 0);
          sub_15F7200(&v868);
          v59 = 0;
        }
        else
        {
          v246 = sub_1E6FC20((__int64)v13, v831, v245, 0, v243);
          v59 = 0;
          if ( !v246 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)v13 + 29) + 47LL) & 0x20) != 0 )
              v244 = sub_1E5D3C0((__int64)v13, v244);
            v59 = sub_A74B00(*((_QWORD *)v13 + 31), v244);
          }
        }
        v247 = *((_BYTE *)v55 + 56);
        v831 = v59;
        LOBYTE(v799) = v798[47];
        v248 = (unsigned __int8)v799 & 0x20;
        LODWORD(v249) = v247 & 0x1F;
        if ( (_DWORD)v249 )
        {
          if ( !v248 )
            goto LABEL_582;
        }
        else
        {
          if ( !v248 )
          {
            v799 = (__m128 *)(v14 + 91);
            v801 = (__int64 *)&v831;
            goto LABEL_44;
          }
          LOBYTE(v249) = 0;
        }
        LOBYTE(v249) = v249 | 1;
        *((_BYTE *)v55 + 56) = v249 & 0x1F | v55[14] & 0xE0;
LABEL_582:
        v256 = v55[1];
        v257 = v831;
        v249 = (unsigned __int8)v249;
        goto LABEL_583;
      case 5LL:
        v58 = (__int64 *)(v55 + 4);
        sub_1E69800(
          (int **)v844,
          2u,
          v55[1],
          v55[2],
          (__int64)(v55 + 4),
          (__int64 *)(v797[1] + 768),
          (__m128i)v39,
          *(double *)a7.m128_u64);
        if ( v55[16] && v55[17] && !*((_QWORD *)v55 + 9) )
        {
          *((_BYTE *)v14 + 720) |= 1u;
          LOBYTE(v808) = 0;
        }
        else
        {
          v113 = 0;
          if ( !*((_DWORD *)v14 + 14) )
            v113 = v14[8];
          v831 = sub_1E72060((__int64)v13, v831, (__int64)(v55 + 16), 0, (unsigned int)v55[1], v113);
        }
        v114 = v831;
        if ( (v831 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          LOBYTE(v808) = 0;
          v799 = (__m128 *)(v14 + 91);
          v59 = *((_QWORD *)v802 + 2340);
          v801 = (__int64 *)&v831;
          *((_BYTE *)v14 + 720) |= 1u;
          v831 = v59;
          goto LABEL_44;
        }
        if ( (v55[14] & 0x1F) == 0 )
        {
          v799 = (__m128 *)(v14 + 91);
          v801 = (__int64 *)&v831;
          goto LABEL_46;
        }
        v427 = v55[14] & 0x1F;
        v426 = v55[1];
LABEL_674:
        v59 = sub_1E65CD0((__int64 *)v13, v114, v426, v427, 0);
        v831 = v59;
        v799 = (__m128 *)(v14 + 91);
        v801 = (__int64 *)&v831;
        goto LABEL_44;
      case 6LL:
        v57 = v831;
        if ( v806 )
          goto LABEL_43;
        v839 = (void *)v831;
        if ( v13[2830] > (unsigned int)v13[3149] )
          goto LABEL_43;
        v516 = *((unsigned int *)v14 + 34);
        v517 = &v53[18 * (unsigned int)(v516 - 1)];
        if ( (*(_BYTE *)(*((_QWORD *)v13 + 29) + 1LL) & 8) == 0
          || ((1LL << *((_DWORD *)v14 + 24)) & 0xFBFF0FF) != 0
          || (v14[90] & 1) != 0
          || ((*(_DWORD *)*v14 >> 12) & 0x7F) == 0x45
          || *((_DWORD *)v14 + 14)
          || !v14[8] )
        {
          goto LABEL_865;
        }
        if ( (unsigned int)sub_15AC7E0(*v14) != 2 )
        {
          v516 = *((unsigned int *)v14 + 34);
          v53 = (__int64 *)v14[16];
LABEL_865:
          v518 = &v53[18 * v516];
          if ( v518 != v53 )
          {
            v519 = 0;
LABEL_867:
            v520 = 1;
            while ( 2 )
            {
              v521 = v516;
              v516 = *(unsigned int *)v53;
              switch ( *(_DWORD *)v53 )
              {
                case 0:
                  v520 = 0;
                  goto LABEL_870;
                case 1:
                case 4:
                case 5:
                case 7:
                  v520 = 0;
                  v519 = 0;
                  goto LABEL_870;
                case 2:
                  if ( !v53[8] )
                    v519 = 0;
                  goto LABEL_870;
                case 3:
                  if ( *((_DWORD *)v14 + 24) == 13 )
                    goto LABEL_897;
                  v519 = 0;
LABEL_870:
                  v53 += 18;
                  if ( v518 == v53 )
                    goto LABEL_871;
                  continue;
                case 6:
                  if ( v517 != v53 )
                    v520 = 0;
                  goto LABEL_870;
                default:
                  v516 = v521;
                  goto LABEL_870;
              }
            }
          }
          v841 = *(void **)((char *)v517 + 4);
          goto LABEL_1018;
        }
        v53 = (__int64 *)v14[16];
        v779 = *(_QWORD *)((unsigned __int64)v839 & 0xFFFFFFFFFFFFFFF0LL);
        v516 = *((unsigned int *)v14 + 34);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v779 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48
          && (*(_BYTE *)(v779 + 17) & 4) == 0
          || (*(_BYTE *)(*v14 + 3LL) & 0x7C) != 0 )
        {
          goto LABEL_865;
        }
        v518 = &v53[18 * (unsigned int)v516];
        v519 = *((_DWORD *)v14 + 662) == 0;
        if ( v518 != v53 )
          goto LABEL_867;
        v520 = 1;
LABEL_871:
        if ( v519 )
        {
          v522 = 0;
          if ( !*((_DWORD *)v14 + 14) )
            v522 = v14[8];
          v877.m128_u64[0] = v522;
          v869[0] = &v870;
          v809 = (__int64)&v868;
          v869[1] = (void *)0x800000000LL;
          *(_OWORD *)v875 = 0;
          v868 = nullptr;
          v876.m128i_i64[0] = 0;
          v876.m128i_i64[1] = (__int64)v13;
          v877.m128_i32[2] = 0;
          sub_B85890(&v878, v522);
          v39 = 0;
          v879 = 0;
          v880 = 0x101010000LL;
          sub_1A395A0((__int64)&v868);
          v524 = sub_1A49A10(
                   (__int64)v13,
                   (__int64)&v868,
                   *((__int64 **)v13 + 76),
                   0,
                   0,
                   v523,
                   0.0,
                   *(double *)a7.m128_u64);
          *(_WORD *)((char *)&v880 + 3) = 0;
          v525 = v524;
          if ( v875[0] )
            sub_1A39780((char *)v875[0]);
          if ( v869[0] != (void *)(v809 + 24) )
            free(v869[0]);
          v841 = *(void **)((char *)v517 + 4);
          if ( v525 )
          {
            v526 = (_BYTE *)v809;
            sub_168B9F0(v809, (__int64 *)v13 + 1, *((_DWORD *)v517 + 1), 0x1C4Bu, 0);
            v527 = &v841;
            v528 = sub_15884C0((__int64)v526, (__int64 *)&v841);
            v529 = *((_DWORD *)v14 + 14);
            v799 = nullptr;
            v530 = v528;
            if ( !v529 )
              v799 = (__m128 *)v14[8];
            if ( *(_BYTE *)(v528 + 120) )
            {
              v527 = (void **)v799;
              sub_AE9DF0((unsigned __int8 **)(v528 + 32), (__int64)v799, 5u);
              v807 = &v859;
            }
            else
            {
              v282 = *(_BYTE *)(v528 + 132) == 0;
              v807 = &v859;
              if ( !v282 )
              {
                v801 = (__int64 *)sub_168B9E0((_QWORD *)v528);
                v714 = *(void **)(v530 + 16);
                if ( v714 )
                  v714 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v714 + 32LL))(*(_QWORD *)(v530 + 16));
                v859 = v714;
                v807 = &v859;
                v715 = sub_1587BC0((__int64)v801, (__int64 *)&v859, v710, v711, v712, v713);
                v527 = (void **)v799;
                sub_AE9DF0((unsigned __int8 **)(*v715 + 32LL * *(unsigned int *)(v530 + 128) + 8), (__int64)v799, 5u);
              }
            }
            sub_15F7200((_BYTE *)v809);
            v535 = sub_F63270(
                     *(_QWORD *)((unsigned __int64)v839 & 0xFFFFFFFFFFFFFFF0LL),
                     (__int64)v527,
                     v531,
                     v532,
                     v533,
                     v534);
            v540 = v535;
            if ( !v535 )
              goto LABEL_1143;
            v541 = v535[13];
            v542 = (__int64 *)(v541 + 96);
            if ( !v535[16] )
            {
              sub_7052B0(v542, v541, v536, v537, v538, v539);
              if ( !v540[16] )
                goto LABEL_1143;
              v541 = v540[13];
              v542 = (__int64 *)(v541 + 96);
            }
            sub_7052B0(v542, v541, v536, v537, v538, v539);
            if ( (*(_BYTE *)(v540[16] + 5LL) & 0x10) != 0 )
            {
              v814 = (__int64)v846;
LABEL_887:
              sub_168B9F0(v809, (__int64 *)v13 + 1, *((_DWORD *)v14 + 22), 0x1776u, 0);
              v543 = j__strlen("(");
              v544 = v807;
              sub_9EC740((__int64)v807, *((_DWORD *)v14 + 22), "(", v543, 0);
              v545 = sub_1589170(v809, v544);
              v546 = (__int64 *)j__strlen(")");
              v547 = *((_DWORD *)v14 + 23);
              v799 = (__m128 *)v546;
              v548 = sub_15F0EF0((__int64)v13, v547, 0, (__m128i)0LL, *(double *)a7.m128_u64);
              sub_9EC740(v814, v548, ")", (__int64)v799, 0);
              sub_1589170(v545, (_DWORD *)v814);
              if ( v848 != (void *)(v814 + 40) )
                operator delete(v848);
              if ( v861 != v807 + 5 )
                operator delete(v861);
              v549 = (_BYTE *)v809;
              sub_15F7200((_BYTE *)v809);
              sub_168B9F0((__int64)v549, (__int64 *)v13 + 1, *((_DWORD *)v517 + 1), 0x18D1u, 0);
              v550 = *((_DWORD *)v517 + 1);
              *(_QWORD *)((char *)&ptr + 4) = 0;
              BYTE12(ptr) = 0;
              v861 = v807 + 5;
              v862 = 0;
              v863[0] = 0;
              v864 = 0;
              LODWORD(v859) = v550;
              HIDWORD(v859) = v550;
              LOBYTE(ptr) = 1;
              v551 = sub_1589170((__int64)v549, v807);
              v552 = *((_DWORD *)v517 + 2);
              *(_QWORD *)&v846[3] = 0;
              v847 = 0;
              v553 = (_DWORD *)v814;
              goto LABEL_892;
            }
LABEL_1143:
            sub_168B9F0(v809, (__int64 *)v13 + 1, *((_DWORD *)v517 + 1), 0x18BDu, 0);
            v692 = j__strlen(" varname");
            v693 = v807;
            sub_9EC740((__int64)v807, *((_DWORD *)v517 + 1), " varname", v692, 0);
            v694 = sub_1589170(v809, v693);
            v695 = sub_1605D30(v694, (__int64 *)&v839);
            if ( *((_DWORD *)v14 + 14) )
              v799 = nullptr;
            else
              v799 = (__m128 *)v14[8];
            if ( *(_BYTE *)(v695 + 120) )
            {
              sub_AE9DF0((unsigned __int8 **)(v695 + 32), (__int64)v799, 5u);
              v814 = (__int64)v846;
            }
            else
            {
              v282 = *(_BYTE *)(v695 + 132) == 0;
              v814 = (__int64)v846;
              if ( !v282 )
              {
                v801 = (__int64 *)sub_168B9E0((_QWORD *)v695);
                v737 = *(_QWORD *)(v695 + 16);
                if ( v737 )
                  v737 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v737 + 32LL))(*(_QWORD *)(v695 + 16));
                *(_QWORD *)v846 = v737;
                v814 = (__int64)v846;
                v738 = sub_1587BC0((__int64)v801, (__int64 *)v846, v733, v734, v735, v736);
                sub_AE9DF0((unsigned __int8 **)(*v738 + 32LL * *(unsigned int *)(v695 + 128) + 8), (__int64)v799, 5u);
              }
            }
            if ( v861 != v807 + 5 )
              operator delete(v861);
            sub_15F7200((_BYTE *)v809);
            goto LABEL_887;
          }
        }
        else
        {
          v841 = *(void **)((char *)v517 + 4);
        }
        if ( !v520 )
        {
LABEL_1021:
          v597 = *((_DWORD *)v517 + 1);
          v809 = (__int64)&v868;
          sub_168B9F0((__int64)&v868, (__int64 *)v13 + 1, v597, 0x1C9Cu, 0);
          v598 = sub_15884C0((__int64)&v868, (__int64 *)&v841);
          v599 = *((_DWORD *)v517 + 1);
          *(_QWORD *)((char *)&ptr + 4) = 0;
          v807 = &v859;
          LODWORD(v859) = v599;
          HIDWORD(v859) = v599;
          BYTE12(ptr) = 0;
          v861 = v863;
          v862 = 0;
          v863[0] = 0;
          v864 = 0;
          LOBYTE(ptr) = 1;
          v551 = sub_1589170(v598, &v859);
          v552 = *((_DWORD *)v517 + 2);
          v553 = v846;
          *(_QWORD *)&v846[3] = 0;
          v847 = 0;
LABEL_892:
          v849 = 0;
          v848 = v553 + 10;
          LOBYTE(v850[0]) = 0;
          LOBYTE(v851) = 0;
          v846[0] = v552;
          v846[1] = v552;
          LOBYTE(v846[2]) = 1;
          sub_1589170(v551, v553);
          if ( v848 != v553 + 10 )
            operator delete(v848);
          if ( v861 != v807 + 5 )
            operator delete(v861);
          sub_15F7200((_BYTE *)v809);
          goto LABEL_897;
        }
LABEL_1018:
        v596 = v14[2];
        if ( v596 )
        {
          while ( (unsigned int)sub_E90000(v596) != 4 )
          {
            v596 = *(_QWORD *)(v596 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v596 )
              goto LABEL_1021;
          }
LABEL_897:
          v57 = v831;
LABEL_43:
          v58 = (__int64 *)(v55 + 4);
          v59 = sub_A760B0(*((_QWORD *)v13 + 31), v57);
          v799 = (__m128 *)(v14 + 91);
          v831 = v59;
          v801 = (__int64 *)&v831;
          goto LABEL_44;
        }
        goto LABEL_1021;
      case 7LL:
        v58 = (__int64 *)(v55 + 4);
        v831 = sub_A774F0(*((_QWORD *)v13 + 31), v831);
        v242 = (__int64 *)(*v14 + 32LL);
        v801 = (__int64 *)&v831;
        sub_1E742A0((__int64)v797, (__int64 *)&v831, 0, v242, 3u, v39, (__m128i)a7);
        v59 = v831;
        goto LABEL_299;
      default:
        v58 = (__int64 *)(v55 + 4);
        v59 = v831;
        v799 = (__m128 *)(v14 + 91);
        v801 = (__int64 *)&v831;
        goto LABEL_44;
    }
  }
}
