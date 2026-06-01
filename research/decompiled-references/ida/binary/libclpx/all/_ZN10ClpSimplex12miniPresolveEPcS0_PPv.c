ClpModel *__fastcall ClpSimplex::miniPresolve(ClpSimplex *this, char *a2, char *a3, void **a4)
{
  int v4; // ebx
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rax
  int v7; // eax
  int v8; // ebp
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  void *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  int v16; // ebx
  __int64 (*v17)(void); // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  CoinPackedMatrix *v21; // rax
  __int64 (*v22)(void); // rax
  __int64 v23; // rdi
  __int64 (*v24)(void); // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  _DWORD *v28; // rdx
  int v29; // esi
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __m128 v32; // xmm0
  int v33; // ebx
  ClpModel *v34; // rbx
  int v35; // r12d
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // ecx
  __m128i v39; // xmm0
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(ClpPackedMatrix *); // rax
  __int64 v43; // rbx
  int *v44; // r13
  ClpSimplex *v45; // rax
  int v46; // edx
  double v47; // xmm0_8
  double v48; // xmm0_8
  char *v49; // r12
  __int64 v50; // rbp
  __int32 *v51; // rsi
  __int32 v52; // edi
  __int64 v53; // rdx
  int v54; // ecx
  char *v55; // rax
  const void *v56; // r15
  const void *v57; // rdi
  int v58; // edx
  int v59; // edx
  int v60; // eax
  size_t v61; // r12
  char *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  int v65; // r12d
  char *v66; // rbp
  __int32 v67; // esi
  int v68; // edx
  __int32 *v69; // rcx
  int v70; // eax
  signed __int64 v71; // rax
  int v72; // eax
  size_t v73; // rbp
  char *v74; // rax
  _DWORD *v75; // rbp
  double v76; // xmm1_8
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // r15
  int v80; // r14d
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // xmm0_8
  __int64 v84; // rcx
  __int64 (__fastcall ***v85)(_QWORD, _QWORD, _QWORD, _QWORD *, _QWORD, __int64); // rdi
  int v86; // edx
  double v87; // r15
  double v88; // xmm0_8
  int v89; // eax
  int v90; // r12d
  double v91; // xmm0_8
  double v92; // xmm0_8
  double *v93; // rbp
  int v94; // ebx
  __int32 *v95; // rcx
  __int32 v96; // esi
  __int64 v97; // rdi
  int v98; // edx
  double *v99; // rax
  int v100; // edx
  int *v101; // r14
  int v102; // edx
  int v103; // eax
  size_t v104; // rbp
  char *v105; // rax
  int v106; // ebx
  __int64 v107; // r13
  __int64 v108; // r11
  __int64 v109; // r9
  __int64 v110; // rax
  __int64 v111; // rbp
  _DWORD *v112; // rax
  int v113; // edi
  __int64 v114; // rsi
  int *v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rbp
  int v119; // r8d
  __int64 v120; // r9
  __int64 v121; // rsi
  int *v122; // rdx
  int *v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdi
  int *v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rbx
  size_t v129; // rbx
  char v130; // al
  int v131; // r15d
  __int128 v132; // xmm4
  int v133; // esi
  __int128 v134; // xmm5
  int v135; // esi
  int v136; // ebp
  __int64 v137; // rax
  int *v138; // rdi
  __int64 v139; // r10
  int v140; // edx
  __int64 v141; // rdx
  int v142; // ecx
  double v143; // xmm3_8
  unsigned __int64 *v144; // rsi
  __int128 v145; // xmm1
  __int128 v146; // xmm0
  double v147; // xmm2_8
  double v148; // xmm6_8
  int v149; // edx
  int v150; // esi
  __int64 v151; // rbx
  int v152; // eax
  __int64 v153; // rax
  int *v154; // r12
  char *v155; // rdx
  int v156; // ebp
  char v157; // cl
  char v158; // cl
  char *v159; // r14
  double v160; // xmm0_8
  double v161; // xmm4_8
  double v162; // xmm0_8
  double v163; // xmm5_8
  __int64 v164; // rax
  int v165; // edx
  int v166; // edx
  int v167; // eax
  size_t v168; // r14
  double v169; // rcx
  double v170; // xmm3_8
  void *v171; // xmm7_8
  void *v172; // rsi
  char *v173; // r14
  char *v174; // rdi
  char *v175; // r14
  char *v176; // rdi
  char *v177; // r14
  int v178; // eax
  int v179; // eax
  _BYTE *v180; // rdx
  double v181; // xmm0_8
  int v182; // r14d
  double v183; // xmm3_8
  double v184; // xmm0_8
  double v185; // xmm2_8
  double v186; // xmm4_8
  double v187; // xmm4_8
  __int64 v188; // rcx
  double *v189; // rbx
  char *v190; // rbp
  __int64 v191; // rcx
  char *v192; // rdi
  void *v193; // xmm5_8
  size_t v194; // xmm4_8
  __int32 v195; // esi
  int v196; // edx
  __int32 *v197; // rcx
  __int64 v198; // rbx
  int v199; // r12d
  char *v200; // rax
  double *v201; // r15
  int v202; // edx
  int v203; // edx
  int v204; // eax
  size_t v205; // rbp
  int v206; // edi
  __int64 v207; // rbp
  size_t v208; // rdx
  size_t v209; // rbx
  char *v210; // rax
  char *v211; // rax
  int v212; // eax
  int *v213; // r14
  __int64 v214; // rbx
  __int64 v215; // rbp
  __int64 v216; // r11
  int v217; // r12d
  int v218; // r11d
  __int64 v219; // rdx
  double v220; // xmm1_8
  int v221; // ecx
  double *v222; // rsi
  double *v223; // rax
  char v224; // al
  _DWORD *v225; // rdi
  __int64 v226; // rax
  int *v227; // r9
  int v228; // edi
  int v229; // esi
  __int64 v230; // rax
  int v231; // ecx
  int v232; // edx
  __int64 v233; // xmm0_8
  __int64 v234; // rsi
  int v235; // edx
  int v236; // ecx
  bool v237; // cc
  ClpModel *v238; // rbx
  void *v239; // r15
  __int64 v240; // rdi
  const void *v241; // r14
  char *v242; // rbx
  size_t v243; // rbp
  __int64 v244; // rax
  int v245; // edx
  _QWORD *v246; // rbx
  int v247; // esi
  char *v248; // rcx
  int v249; // eax
  __int64 v250; // rdx
  __int64 v251; // rsi
  int v252; // ecx
  char *v253; // rdx
  int v254; // eax
  __int64 v255; // r15
  int v256; // r13d
  __int64 v257; // r14
  int v258; // eax
  signed int v259; // edx
  unsigned int v260; // r15d
  __int64 v261; // rsi
  __int64 v262; // rbp
  __int64 v263; // r10
  char *v264; // r12
  __int64 v265; // rax
  int v266; // r12d
  unsigned int v267; // r8d
  __int64 v268; // xmm0_8
  signed int v269; // eax
  __int64 v270; // r9
  int v271; // r10d
  __int64 v272; // xmm0_8
  __int64 v273; // r9
  __int64 v274; // xmm0_8
  __int64 v275; // rax
  __int64 v276; // rsi
  __int64 v277; // r11
  unsigned int v278; // r10d
  unsigned int v279; // r9d
  int *v280; // r8
  char *v281; // rsi
  char *v282; // rbp
  unsigned int v283; // r9d
  char *v284; // r11
  unsigned __int64 v285; // rax
  unsigned int v286; // ebx
  char *v287; // rbp
  __int128 v288; // xmm0
  unsigned int v289; // r12d
  unsigned int v290; // edx
  __int64 v291; // xmm0_8
  unsigned int v292; // eax
  unsigned int v293; // esi
  int v294; // r8d
  __int64 v295; // xmm0_8
  unsigned int v296; // eax
  unsigned int v297; // r8d
  int v298; // esi
  __int64 v299; // xmm0_8
  unsigned int v300; // eax
  unsigned int v301; // esi
  int v302; // r8d
  __int64 v303; // xmm0_8
  unsigned int v304; // eax
  unsigned int v305; // r8d
  signed int v306; // edx
  unsigned int v307; // r12d
  __int64 v308; // xmm0_8
  __int64 v309; // xmm0_8
  int v310; // edx
  size_t v311; // rdx
  size_t v312; // rbx
  __int64 v313; // rbp
  __int64 v315; // rdi
  __int64 v316; // xmm0_8
  ClpSimplex *v317; // rbx
  double v318; // xmm0_8
  double v319; // xmm0_8
  double v320; // xmm0_8
  char *v321; // rbp
  __int64 v322; // rbx
  __int32 *v323; // rsi
  __int32 v324; // edi
  __int64 v325; // rdx
  int v326; // ecx
  char *v327; // rax
  const void *v328; // rdi
  int v329; // edx
  int v330; // edx
  int v331; // eax
  char *v332; // r14
  size_t v333; // rbp
  char *v334; // rax
  char v335; // al
  _DWORD *v336; // rdi
  int v337; // ebx
  __int64 v338; // rax
  __int64 v339; // rbp
  double v340; // xmm1_8
  int v341; // r14d
  double v342; // xmm2_8
  double v343; // xmm3_8
  __int64 v344; // rsi
  _DWORD *v345; // rbx
  double v346; // xmm0_8
  double *v347; // rcx
  double *v348; // rdx
  double v349; // xmm3_8
  double v350; // xmm4_8
  __int64 v351; // r10
  __int64 v352; // r11
  __int64 *v353; // rax
  int *v354; // rsi
  double v355; // xmm7_8
  double v356; // xmm3_8
  void *v357; // xmm5_8
  double v358; // xmm4_8
  __int64 v359; // xmm5_8
  char *v360; // rax
  __int64 v361; // rdx
  __int32 *v362; // rsi
  __int32 v363; // edi
  int v364; // ecx
  __int64 v365; // rdi
  int v366; // edx
  int v367; // edx
  int v368; // eax
  void *v369; // rax
  _BYTE *v370; // rcx
  void *v371; // r9
  void *v372; // xmm4_8
  double v373; // xmm5_8
  __int64 v374; // xmm3_8
  const void *v375; // rsi
  double v376; // xmm7_8
  double v377; // xmm5_8
  char *v378; // rdi
  char *v379; // rax
  double *v380; // rdi
  double v381; // xmm0_8
  double v382; // xmm1_8
  double *v383; // rax
  double *v384; // rdi
  double v385; // xmm7_8
  __int64 v386; // rax
  char v387; // dl
  _BYTE *v388; // rax
  _BYTE *v389; // rdx
  int *v390; // rax
  int v391; // edi
  int v392; // esi
  __int64 v393; // rax
  int *v394; // r8
  __int64 v395; // rdx
  int v396; // ecx
  int v397; // r10d
  int v398; // edx
  int v399; // ecx
  int *v400; // rax
  int v401; // r11d
  int v402; // edi
  double v403; // xmm4_8
  __int64 v404; // rdx
  int v405; // r13d
  void *v406; // xmm5_8
  double v407; // xmm6_8
  double v408; // xmm7_8
  __int64 v409; // rax
  int v410; // eax
  int v411; // ecx
  __int64 v412; // rax
  double v413; // xmm1_8
  double v414; // xmm0_8
  double *v415; // rsi
  double v416; // xmm3_8
  double v417; // xmm2_8
  double v418; // xmm1_8
  double *v419; // rax
  __int64 v420; // rax
  __int64 v421; // xmm2_8
  int v422; // eax
  int v423; // eax
  __int64 v424; // r12
  int *v425; // rbp
  __int64 v426; // rbx
  __int64 v427; // r13
  double *v428; // rax
  int v429; // r15d
  double v430; // xmm0_8
  __int64 v431; // rax
  _BYTE *v432; // rax
  int v433; // r8d
  int *v434; // r10
  int v435; // edi
  int v436; // esi
  __int64 v437; // rax
  int v438; // ecx
  __int64 v439; // rsi
  __int64 v440; // xmm1_8
  int v441; // edx
  int v442; // edx
  __int64 v443; // rdx
  int v444; // ecx
  bool v445; // dl
  int v446; // eax
  int v447; // eax
  int v448; // edx
  __int64 v449; // rcx
  double v450; // xmm0_8
  double v451; // xmm3_8
  double v452; // xmm1_8
  int v453; // eax
  bool v454; // zf
  int v455; // eax
  int v456; // edx
  int v457; // r14d
  double v458; // xmm0_8
  double v459; // xmm3_8
  double v460; // xmm0_8
  double v461; // xmm7_8
  double v462; // xmm0_8
  double v463; // xmm3_8
  double v464; // xmm0_8
  double v465; // xmm7_8
  _QWORD *v466; // rbx
  __int64 v467; // rdx
  _DWORD *v468; // rdi
  signed __int64 v469; // rsi
  double v470; // xmm7_8
  _BYTE *v471; // rbx
  char *v472; // rax
  int v473; // eax
  size_t v474; // rbx
  double v475; // xmm7_8
  int v476; // ebx
  double *v477; // rax
  double v478; // xmm5_8
  __int64 v479; // rdx
  double v480; // xmm7_8
  int v481; // ebx
  _DWORD *v482; // rbx
  double v483; // xmm7_8
  int v484; // ebp
  int v485; // r11d
  __int64 v486; // r12
  int v487; // r15d
  int v488; // r9d
  int v489; // r8d
  int *v490; // rbx
  int *v491; // rax
  __int64 v492; // rdx
  ClpModel *v493; // rbx
  _BYTE *v494; // rcx
  __int64 v495; // rdx
  int *v496; // r8
  double v497; // xmm2_8
  __int64 v498; // rax
  double v499; // xmm0_8
  double *v500; // rax
  char *v501; // r13
  _DWORD *v502; // rsi
  int v503; // eax
  char v504; // al
  _DWORD *v505; // rdi
  int v506; // ebx
  int v507; // eax
  int *v508; // rax
  char *v509; // r10
  unsigned __int64 v510; // rdx
  __int64 v511; // xmm0_8
  _BYTE *v512; // rax
  CoinPackedMatrix *v513; // rbx
  ClpModel *v514; // r14
  __int64 v515; // rdi
  CoinPackedMatrix *v516; // rax
  __int64 (*v517)(void); // rax
  __int64 v518; // rax
  int v519; // edi
  __int64 v520; // r9
  int v521; // ebp
  signed int v522; // edx
  unsigned int v523; // r10d
  __int64 v524; // r8
  __int64 v525; // r14
  __int64 v526; // rax
  __int64 v527; // rbx
  int *v528; // r13
  int v529; // r11d
  unsigned int v530; // r12d
  __int64 v531; // xmm0_8
  signed int v532; // eax
  __int64 v533; // rbp
  int v534; // r11d
  __int64 v535; // xmm0_8
  __int64 v536; // rbp
  __int64 v537; // xmm0_8
  unsigned int v538; // r13d
  __int64 v539; // r8
  unsigned int v540; // r15d
  int *v541; // rbp
  char *v542; // r8
  int *v543; // rbx
  char *v544; // r14
  unsigned int v545; // r12d
  unsigned __int64 v546; // rax
  __int128 v547; // xmm0
  unsigned int v548; // r11d
  unsigned int v549; // edx
  int v550; // r14d
  __int64 v551; // xmm0_8
  unsigned int v552; // r8d
  unsigned int v553; // eax
  __int64 v554; // xmm0_8
  unsigned int v555; // eax
  unsigned int v556; // ebx
  int v557; // r8d
  __int64 v558; // xmm0_8
  unsigned int v559; // eax
  unsigned int v560; // r8d
  int v561; // ebx
  __int64 v562; // xmm0_8
  unsigned int v563; // eax
  unsigned int v564; // ebx
  signed int v565; // edx
  unsigned int v566; // r11d
  __int64 v567; // xmm0_8
  __int64 v568; // xmm0_8
  int v569; // edx
  size_t v570; // rdx
  __int64 v571; // rcx
  __int64 v572; // rbx
  int *v573; // rax
  unsigned __int64 v574; // rdx
  __int64 v575; // xmm0_8
  ClpModel *v576; // rbx
  __int64 v577; // rdi
  __int64 v578; // r10
  __int64 v579; // rax
  int v580; // r8d
  int v581; // esi
  int *v582; // rax
  double v583; // [rsp+8h] [rbp-320h]
  void *v584; // [rsp+8h] [rbp-320h]
  double v585; // [rsp+8h] [rbp-320h]
  int *v586; // [rsp+8h] [rbp-320h]
  int *v587; // [rsp+8h] [rbp-320h]
  int *v588; // [rsp+8h] [rbp-320h]
  char *v589; // [rsp+8h] [rbp-320h]
  void *v590; // [rsp+8h] [rbp-320h]
  int v591; // [rsp+8h] [rbp-320h]
  __int64 v594; // [rsp+20h] [rbp-308h]
  signed int v595; // [rsp+20h] [rbp-308h]
  double v596; // [rsp+28h] [rbp-300h]
  void *v597; // [rsp+28h] [rbp-300h]
  double v598; // [rsp+28h] [rbp-300h]
  void *v599; // [rsp+28h] [rbp-300h]
  int *v600; // [rsp+28h] [rbp-300h]
  void *v601; // [rsp+28h] [rbp-300h]
  double v602; // [rsp+28h] [rbp-300h]
  double v603; // [rsp+28h] [rbp-300h]
  int v604; // [rsp+28h] [rbp-300h]
  int v605; // [rsp+28h] [rbp-300h]
  int v606[2]; // [rsp+30h] [rbp-2F8h]
  int v607; // [rsp+30h] [rbp-2F8h]
  char *v608; // [rsp+38h] [rbp-2F0h]
  void *v609; // [rsp+38h] [rbp-2F0h]
  char *v610; // [rsp+38h] [rbp-2F0h]
  int v611; // [rsp+38h] [rbp-2F0h]
  double v612; // [rsp+38h] [rbp-2F0h]
  void *v613; // [rsp+38h] [rbp-2F0h]
  int *v614; // [rsp+38h] [rbp-2F0h]
  char *v615; // [rsp+38h] [rbp-2F0h]
  __int64 v616; // [rsp+40h] [rbp-2E8h]
  int *v617; // [rsp+48h] [rbp-2E0h]
  int v618; // [rsp+48h] [rbp-2E0h]
  char *v619; // [rsp+50h] [rbp-2D8h]
  void *v620; // [rsp+50h] [rbp-2D8h]
  void *v621; // [rsp+50h] [rbp-2D8h]
  int v622; // [rsp+50h] [rbp-2D8h]
  void *v623; // [rsp+50h] [rbp-2D8h]
  double v624; // [rsp+50h] [rbp-2D8h]
  double v625; // [rsp+50h] [rbp-2D8h]
  void *v626; // [rsp+50h] [rbp-2D8h]
  int *v627; // [rsp+50h] [rbp-2D8h]
  void *ng; // [rsp+58h] [rbp-2D0h]
  char n; // [rsp+58h] [rbp-2D0h]
  size_t na; // [rsp+58h] [rbp-2D0h]
  size_t nb; // [rsp+58h] [rbp-2D0h]
  void *nh; // [rsp+58h] [rbp-2D0h]
  double nc; // [rsp+58h] [rbp-2D0h]
  size_t nd; // [rsp+58h] [rbp-2D0h]
  size_t ne; // [rsp+58h] [rbp-2D0h]
  size_t nf; // [rsp+58h] [rbp-2D0h]
  size_t ni; // [rsp+58h] [rbp-2D0h]
  int *dest; // [rsp+60h] [rbp-2C8h]
  CoinPackedMatrix *v639; // [rsp+68h] [rbp-2C0h]
  CoinPackedMatrix *v640; // [rsp+68h] [rbp-2C0h]
  int v641; // [rsp+68h] [rbp-2C0h]
  int v642; // [rsp+68h] [rbp-2C0h]
  CoinPackedMatrix *v643; // [rsp+68h] [rbp-2C0h]
  void *v644; // [rsp+70h] [rbp-2B8h]
  int v645; // [rsp+70h] [rbp-2B8h]
  char *v646; // [rsp+70h] [rbp-2B8h]
  double *v647; // [rsp+70h] [rbp-2B8h]
  char v648; // [rsp+70h] [rbp-2B8h]
  void *v649; // [rsp+70h] [rbp-2B8h]
  _QWORD *v650; // [rsp+78h] [rbp-2B0h]
  char *v651; // [rsp+80h] [rbp-2A8h] BYREF
  double v652; // [rsp+88h] [rbp-2A0h]
  double *v653; // [rsp+90h] [rbp-298h]
  void *v654; // [rsp+98h] [rbp-290h]
  ClpModel *v655; // [rsp+A0h] [rbp-288h]
  void *v656; // [rsp+A8h] [rbp-280h]
  __int64 v657; // [rsp+B0h] [rbp-278h]
  double v658; // [rsp+B8h] [rbp-270h]
  double v659; // [rsp+C0h] [rbp-268h]
  double v660; // [rsp+C8h] [rbp-260h]
  int *v661; // [rsp+D0h] [rbp-258h]
  __int64 v662; // [rsp+D8h] [rbp-250h]
  __int64 v663; // [rsp+E0h] [rbp-248h]
  int *v664; // [rsp+E8h] [rbp-240h]
  __int64 v665; // [rsp+F0h] [rbp-238h]
  __int64 v666; // [rsp+F8h] [rbp-230h]
  void *v667; // [rsp+100h] [rbp-228h]
  __m128i v668; // [rsp+108h] [rbp-220h] BYREF
  double v669; // [rsp+118h] [rbp-210h]
  void *v670; // [rsp+120h] [rbp-208h]
  __int64 v671; // [rsp+128h] [rbp-200h]
  __int64 v672; // [rsp+130h] [rbp-1F8h]
  __int64 v673; // [rsp+138h] [rbp-1F0h]
  __int64 v674; // [rsp+140h] [rbp-1E8h]
  void *v675; // [rsp+148h] [rbp-1E0h]
  double v676; // [rsp+150h] [rbp-1D8h]
  void *v677; // [rsp+158h] [rbp-1D0h]
  double v678; // [rsp+160h] [rbp-1C8h]
  double v679; // [rsp+168h] [rbp-1C0h]
  int v680; // [rsp+170h] [rbp-1B8h]
  int v681; // [rsp+174h] [rbp-1B4h]
  double v682; // [rsp+178h] [rbp-1B0h]
  double v683; // [rsp+180h] [rbp-1A8h]
  void *v684; // [rsp+188h] [rbp-1A0h]
  void *v685; // [rsp+190h] [rbp-198h]
  __int64 v686; // [rsp+198h] [rbp-190h]
  double v687; // [rsp+1A0h] [rbp-188h]
  void *v688; // [rsp+1A8h] [rbp-180h]
  double v689; // [rsp+1B0h] [rbp-178h]
  void *v690; // [rsp+1B8h] [rbp-170h]
  CoinPackedMatrix *v691; // [rsp+1C0h] [rbp-168h]
  char v692; // [rsp+1CBh] [rbp-15Dh]
  int v693; // [rsp+1CCh] [rbp-15Ch]
  void **v694; // [rsp+1D0h] [rbp-158h]
  signed __int64 v695; // [rsp+1D8h] [rbp-150h]
  int v696; // [rsp+1ECh] [rbp-13Ch] BYREF
  void *src[2]; // [rsp+1F0h] [rbp-138h] BYREF
  int v698; // [rsp+200h] [rbp-128h]
  ClpModel *v699; // [rsp+210h] [rbp-118h] BYREF
  __m128 v700; // [rsp+220h] [rbp-108h]
  _QWORD v701[8]; // [rsp+250h] [rbp-D8h] BYREF
  _BYTE v702[32]; // [rsp+290h] [rbp-98h] BYREF
  __int64 v703; // [rsp+2B0h] [rbp-78h]
  __int64 v704; // [rsp+2B8h] [rbp-70h]
  __int64 v705; // [rsp+2C0h] [rbp-68h]
  int *v706; // [rsp+2C8h] [rbp-60h]

  v4 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  v5 = *((_QWORD **)this + 24);
  v651 = a3;
  v694 = a4;
  v6 = *(__int64 (**)(void))(*v5 + 16LL);
  if ( (char *)v6 == (char *)ClpPackedMatrix::getNumElements )
    v7 = *(_DWORD *)(v5[11] + 72LL);
  else
    v7 = v6();
  v681 = v7;
  v8 = 80 * v4 + 40 * v7;
  if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFLL
    || (v9 = 8LL * v4,
        v654 = (void *)operator new[](v9),
        v668.m128i_i64[0] = operator new[](v8),
        memset(v654, 66, v9),
        memset((void *)v668.m128i_i64[0], 66, v8),
        v696 = 0,
        v10 = *((_DWORD *)this + 27) + 2 * *((_DWORD *)this + 26),
        v10 > 0x1FFFFFFFFFFFFFFELL)
    || (v670 = (void *)operator new[](4 * v10),
        v11 = *((int *)this + 26),
        v12 = *((int *)this + 27),
        v661 = (int *)((char *)v670 + 4 * v11),
        v617 = &v661[v12],
        v11 > 0xFFFFFFFFFFFFFFFLL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v13 = (void *)operator new[](8 * v11);
  v14 = *((int *)this + 26);
  v675 = v13;
  memset(v13, 0, 8 * v14);
  v15 = *((_QWORD **)this + 24);
  v16 = *((_DWORD *)this + 27);
  v17 = *(__int64 (**)(void))(*v15 + 24LL);
  if ( (char *)v17 == (char *)ClpPackedMatrix::getNumCols )
  {
    v18 = v15[11];
    if ( *(_BYTE *)(v18 + 8) )
      v19 = *(_DWORD *)(v18 + 64);
    else
      v19 = *(_DWORD *)(v18 + 68);
  }
  else
  {
    v19 = v17();
  }
  if ( v16 > v19 )
  {
    v20 = *((_QWORD *)this + 24);
    v21 = nullptr;
    if ( v20 )
    {
      v22 = **(__int64 (***)(void))v20;
      if ( (char *)v22 == (char *)ClpPackedMatrix::getPackedMatrix )
        v21 = *(CoinPackedMatrix **)(v20 + 88);
      else
        v21 = (CoinPackedMatrix *)v22();
    }
    CoinPackedMatrix::reserve(v21, *((_DWORD *)this + 27), v681, 1);
    v23 = *((_QWORD *)this + 24);
    if ( !v23 )
      BUG();
    v24 = **(__int64 (***)(void))v23;
    if ( (char *)v24 == (char *)ClpPackedMatrix::getPackedMatrix )
      v25 = *(_QWORD *)(v23 + 88);
    else
      v25 = v24();
    v26 = *(_QWORD *)(v25 + 48);
    v27 = *((int *)this + 27);
    if ( (int)v27 >= 0 )
    {
      v28 = (_DWORD *)(v26 + 4 * v27);
      if ( !*v28 )
      {
        v29 = v681;
        v30 = -4 * v27;
        v31 = 0;
        do
        {
          v28[v31 / 4] = v29;
          if ( v30 == v31 )
            break;
          v31 -= 4LL;
        }
        while ( !v28[v31 / 4] );
      }
    }
  }
  v32 = _mm_loadh_ps((const double *)&v651);
  v699 = nullptr;
  LODWORD(v688) = 2 * v681;
  v700 = v32;
  v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, ClpModel **))(**((_QWORD **)this + 45) + 8LL))(
          *((_QWORD *)this + 45),
          133,
          &v699);
  v655 = v699;
  if ( !v699 )
  {
    v514 = (ClpModel *)operator new(0x6F0u);
    v655 = v514;
    ClpSimplex::ClpSimplex(v514, this, -1);
    v515 = *((_QWORD *)v514 + 24);
    v516 = nullptr;
    if ( v515 )
    {
      v517 = **(__int64 (***)(void))v515;
      if ( (char *)v517 == (char *)ClpPackedMatrix::getPackedMatrix )
        v516 = *(CoinPackedMatrix **)(v515 + 88);
      else
        v516 = (CoinPackedMatrix *)v517();
    }
    CoinPackedMatrix::reserve(v516, *((_DWORD *)this + 27) + v33, 3 * v681, 1);
  }
  v34 = v655;
  ClpModel::dropNames(v655);
  v594 = *((_QWORD *)v34 + 18);
  v35 = *((_DWORD *)this + 26);
  v616 = *((_QWORD *)v34 + 19);
  v36 = *((_QWORD *)v34 + 33) + *((int *)this + 27);
  v662 = v36;
  if ( v35 > 0 )
  {
    v37 = 1;
    do
    {
      *(_BYTE *)(v36 + v37 - 1) &= ~0x80u;
      v38 = v37++;
    }
    while ( *((_DWORD *)this + 26) > v38 );
  }
  v39 = _mm_loadl_epi64(&v668);
  v698 = v8;
  v639 = nullptr;
  v40 = *((_QWORD *)v655 + 22);
  v41 = *((_QWORD *)v655 + 24);
  *(__m128i *)src = _mm_unpacklo_epi64(v39, v39);
  v672 = v40;
  v673 = *((_QWORD *)v655 + 23);
  if ( v41 )
  {
    v42 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v41;
    if ( v42 == ClpPackedMatrix::getPackedMatrix )
      v639 = *(CoinPackedMatrix **)(v41 + 88);
    else
      v639 = (CoinPackedMatrix *)((__int64 (__fastcall *)(__int64, ClpSimplex *, __int64))v42)(v41, this, v36);
  }
  dest = *((int **)v639 + 5);
  v657 = *((_QWORD *)v639 + 6);
  v666 = *((_QWORD *)v639 + 7);
  v650 = *((_QWORD **)v639 + 4);
  v691 = (CoinPackedMatrix *)v702;
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v702, v639);
  CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v702);
  v43 = 0;
  v44 = v706;
  v671 = v704;
  *(_QWORD *)v606 = v705;
  v665 = v703;
  v45 = this;
  v46 = *((_DWORD *)this + 26);
  if ( v46 > 0 )
  {
    do
    {
      if ( a2[v43] > 0 )
      {
        v47 = *(double *)(*((_QWORD *)this + 18) + 8 * v43);
        v583 = *(double *)(v594 + 8 * v43);
        if ( v47 > -1.0e30 )
          v583 = v47 - *(double *)(v594 + 8 * v43);
        v48 = *(double *)(*((_QWORD *)this + 19) + 8 * v43);
        v596 = *(double *)(v616 + 8 * v43);
        if ( v48 < 1.0e30 )
          v596 = v48 - *(double *)(v616 + 8 * v43);
        v49 = (char *)src[0];
        v50 = v44[v43];
        v51 = (__int32 *)((char *)v654 + 8 * v696);
        v52 = LODWORD(src[0]) - v668.m128i_i32[0];
        v53 = *(int *)(*(_QWORD *)v606 + 4 * v43);
        v54 = v696 + 1;
        v51[1] = 4;
        v55 = v49;
        *v51 = v52;
        v696 = v54;
        v56 = (const void *)(v665 + 8 * v53);
        v57 = (const void *)(v671 + 4 * v53);
        v58 = 12 * v50 + 24;
        if ( v58 + v49 - (char *)src[1] > v698 )
        {
          v59 = 2 * v58;
          v60 = v698 / 2 + 10000;
          if ( v60 < v59 )
            v60 = v59;
          v698 += v60;
          v619 = (char *)operator new[](v698);
          v61 = v49 - (char *)src[1];
          ng = src[1];
          memcpy(v619, src[1], v61);
          operator delete[](ng);
          v55 = &v619[v61];
          src[1] = v619;
        }
        *(double *)v55 = v583;
        *((_DWORD *)v55 + 5) = v50;
        *((double *)v55 + 1) = v596;
        *((_DWORD *)v55 + 4) = v43;
        v62 = (char *)memcpy(v55 + 24, v57, 4 * v50);
        src[0] = (char *)memcpy(&v62[4 * v50], v56, 8 * v50) + 8 * v50;
        v46 = *((_DWORD *)this + 26);
      }
      ++v43;
    }
    while ( (int)v43 < v46 );
    v45 = this;
  }
  v63 = *((int *)v45 + 27);
  if ( (int)v63 <= 0 )
  {
    v693 = v696;
    *(_DWORD *)(v657 + 4 * v63) = 0;
    *((_DWORD *)v639 + 18) = 0;
  }
  else
  {
    v64 = 0;
    n = 0;
    v65 = 0;
    do
    {
      v79 = *(int *)(v657 + 4 * v64);
      v80 = *(_DWORD *)(v666 + 4 * v64);
      v70 = v651[v64];
      if ( v651[v64] <= 0
        && (v651[v64]
         || v80 && *(double *)(*((_QWORD *)this + 22) + 8 * v64) != *(double *)(*((_QWORD *)this + 23) + 8 * v64)) )
      {
        *(_DWORD *)(v657 + 4 * v64) = v65;
        if ( (int)v79 >= (int)v79 + v80 )
        {
          v77 = 0;
        }
        else
        {
          v81 = v79 + 1;
          v82 = v79 + 1 + (unsigned int)(v80 - 1);
          while ( 1 )
          {
            if ( a2[dest[v79]] <= 0 )
            {
              v83 = v650[v79];
              v84 = v65++;
              dest[v84] = dest[v79];
              v650[v84] = v83;
            }
            v79 = v81;
            if ( v82 == v81 )
              break;
            ++v81;
          }
          v77 = v65 - *(_DWORD *)(v657 + 4 * v64);
        }
      }
      else
      {
        v66 = (char *)src[0];
        v67 = LODWORD(src[0]) - v668.m128i_i32[0];
        v68 = v696;
        v584 = *(void **)(v672 + 8 * v64);
        v597 = *(void **)(v673 + 8 * v64);
        v69 = (__int32 *)((char *)v654 + 8 * v696);
        if ( (char)v70 <= 0 )
          v70 = 13;
        v69[1] = v70;
        v71 = v66 - (char *)src[1];
        *v69 = v67;
        v696 = v68 + 1;
        if ( v71 + 24 > v698 )
        {
          v72 = v698 / 2 + 10000;
          if ( v72 < 48 )
            v72 = 48;
          v698 += v72;
          v608 = (char *)operator new[](v698);
          v73 = v66 - (char *)src[1];
          v620 = src[1];
          memcpy(v608, src[1], v73);
          operator delete[](v620);
          src[1] = v608;
          v66 = &v608[v73];
        }
        v74 = v651;
        v75 = v66 + 24;
        *(v75 - 2) = v64;
        *((_QWORD *)v75 - 3) = v584;
        *((_QWORD *)v75 - 2) = v597;
        src[0] = v75;
        v74[v64] = 13;
        if ( v80 )
        {
          v76 = *(double *)(v672 + 8 * v64);
          if ( v76 != 0.0 && (int)v79 < (int)v79 + v80 )
          {
            v495 = 0;
            v496 = &dest[v79];
            do
            {
              v497 = *(double *)&v650[v79 + v495] * v76;
              v498 = 8LL * v496[v495];
              v499 = *(double *)(v594 + v498);
              if ( v499 > -1.0e20 )
                *(double *)(v594 + 8LL * v496[v495]) = v499 - v497;
              v500 = (double *)(v616 + v498);
              if ( *v500 < 1.0e20 )
                *v500 = *v500 - v497;
              ++v495;
            }
            while ( (unsigned int)(v80 - 1) + 1LL != v495 );
          }
          n = 1;
        }
        *(_DWORD *)(v657 + 4 * v64) = v65;
        v77 = 0;
      }
      *(_DWORD *)(v666 + 4 * v64++) = v77;
      v78 = *((int *)this + 27);
    }
    while ( (int)v78 > (int)v64 );
    v693 = v696;
    *(_DWORD *)(v657 + 4 * v78) = v65;
    *((_DWORD *)v639 + 18) = v65;
    if ( n )
    {
      v513 = v691;
      CoinPackedMatrix::operator=(v691);
      CoinPackedMatrix::reverseOrdering(v513);
      v44 = v706;
      v671 = v704;
      *(_QWORD *)v606 = v705;
      v665 = v703;
    }
  }
  v85 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _QWORD *, _QWORD, __int64))v655 + 20);
  if ( v85 )
    v674 = (**v85)(v85, 0, 0, v701, 0, 2);
  else
    v674 = 0;
  v86 = *((_DWORD *)this + 26);
  v689 = *((double *)this + 5);
  if ( v86 <= 0 )
  {
    v692 = 1;
LABEL_176:
    v238 = v655;
    v239 = v654;
    v701[1] = v691;
    v240 = *((_QWORD *)this + 45);
    v701[0] = v655;
    v701[5] = v654;
    v701[2] = a2;
    v701[3] = v651;
    v701[4] = src;
    v701[6] = &v696;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v240 + 8LL))(v240, 134, v701);
    ClpModel::setObjectiveOffset(v238, v689);
    v241 = (const void *)v668.m128i_i64[0];
    v242 = (char *)operator new[](LODWORD(src[0]) - v668.m128i_i32[0] + 8 * v696);
    v243 = 8LL * v696;
    memcpy(v242, v239, v243);
    memcpy(&v242[v243], v241, (char *)src[0] - (char *)v241);
    v244 = operator new(0x18u);
    *(_QWORD *)(v244 + 16) = v242;
    v245 = v696;
    *(_DWORD *)(v244 + 8) = v693;
    v246 = v694;
    *(_DWORD *)v244 = v245;
    *(_DWORD *)(v244 + 4) = v245;
    *v246 = v244;
    v247 = *((_DWORD *)this + 26);
    if ( v247 <= 0 )
    {
      v607 = 0;
LABEL_183:
      v251 = *((int *)this + 27);
      v252 = *((_DWORD *)this + 27);
      if ( (int)v251 <= 0 )
      {
LABEL_406:
        LODWORD(v255) = 0;
        if ( v692 )
          goto LABEL_212;
        goto LABEL_407;
      }
    }
    else
    {
      v248 = a2;
      v249 = 0;
      v250 = 0;
      while ( *v248 <= 0 )
      {
LABEL_181:
        ++v249;
        ++v248;
        if ( v249 >= v247 )
        {
          v607 = v250;
          goto LABEL_183;
        }
      }
      while ( 1 )
      {
        ++v248;
        *((_DWORD *)v670 + v250) = v249++;
        if ( v249 >= v247 )
          break;
        v250 = (int)v250 + 1;
        if ( *v248 <= 0 )
          goto LABEL_181;
      }
      v607 = v250 + 1;
      v251 = *((int *)this + 27);
      v252 = *((_DWORD *)this + 27);
      if ( (int)v251 <= 0 )
        goto LABEL_406;
    }
    v253 = v651;
    v254 = 0;
    v255 = 0;
    while ( *v253 <= 10 )
    {
LABEL_188:
      ++v254;
      ++v253;
      if ( v254 >= v252 )
        goto LABEL_189;
    }
    while ( 1 )
    {
      ++v253;
      v251 = v252;
      v661[v255] = v254++;
      if ( v254 >= v252 )
        break;
      v255 = (int)v255 + 1;
      if ( *v253 <= 10 )
        goto LABEL_188;
    }
    LODWORD(v255) = v255 + 1;
LABEL_189:
    if ( v692 )
      goto LABEL_212;
    if ( v252 > 0 )
    {
      v256 = v681;
      v257 = 1;
      v611 = v255;
      do
      {
        v258 = v256 - v681;
        v259 = *(_DWORD *)(v657 + 4 * v257 - 4);
        *(_DWORD *)(v657 + 4 * v257 - 4) = v256 - v681;
        v260 = *(_DWORD *)(v666 + 4 * v257 - 4);
        v595 = v259 + v260;
        if ( v259 < (int)(v259 + v260) )
        {
          v261 = v259;
          v262 = 4LL * v256;
          v263 = 8LL * v259;
          v589 = (char *)(8LL * v256);
          v264 = &v589[(_QWORD)v650];
          v265 = 4LL * v259;
          if ( v260 > 0xE
            && (v263 >= (__int64)(v589 + 32) || (__int64)v589 >= v263 + 32)
            && (v265 >= v262 + 16 || v262 >= v265 + 16)
            && (&dest[(unsigned __int64)v262 / 4] >= (int *)&v650[v256 + (unsigned __int64)v260]
             || v264 >= (char *)&dest[v256 + (unsigned __int64)v260]) )
          {
            v266 = v256;
            v267 = -(int)((unsigned __int64)&dest[(unsigned __int64)v265 / 4] >> 2) & 3;
            if ( v267 )
            {
              v268 = v650[v259];
              v266 = v256 + 1;
              dest[v256] = dest[v259];
              v650[v256] = v268;
              v269 = v259 + 1;
              if ( v267 == 1
                || (v270 = v266,
                    v271 = dest[v269],
                    v272 = v650[v269],
                    v266 = v256 + 2,
                    v269 = v259 + 2,
                    dest[v270] = v271,
                    v650[v270] = v272,
                    v267 == 2) )
              {
                v259 = v269;
              }
              else
              {
                v273 = v266;
                v266 = v256 + 3;
                v259 += 3;
                v274 = v650[v269];
                dest[v273] = dest[v269];
                v650[v273] = v274;
              }
            }
            v275 = v267;
            v276 = v267 + v261;
            v277 = v262 + 4LL * v267;
            v278 = v260 - v267;
            v279 = v260 - v267;
            v280 = &dest[v276];
            v281 = (char *)&v650[v276];
            v282 = &v589[8 * v275];
            v283 = v279 >> 2;
            v284 = (char *)dest + v277;
            v285 = 0;
            v286 = 0;
            v287 = &v282[(_QWORD)v650];
            do
            {
              ++v286;
              *(__m128i *)&v284[v285] = _mm_load_si128((const __m128i *)&v280[v285 / 4]);
              v288 = *(_OWORD *)&v281[2 * v285 + 16];
              *(_OWORD *)&v287[2 * v285] = *(_OWORD *)&v281[2 * v285];
              *(_OWORD *)&v287[2 * v285 + 16] = v288;
              v285 += 16LL;
            }
            while ( v286 < v283 );
            v289 = (v278 & 0xFFFFFFFC) + v266;
            v290 = (v278 & 0xFFFFFFFC) + v259;
            if ( (v278 & 0xFFFFFFFC) != v278 )
            {
              v291 = v650[v290];
              dest[v289] = dest[v290];
              v650[v289] = v291;
              v292 = v290 + 1;
              v293 = v289 + 1;
              if ( (int)(v290 + 1) < v595 )
              {
                v294 = dest[v292];
                v295 = v650[v292];
                v296 = v290 + 2;
                dest[v293] = v294;
                v297 = v289 + 2;
                v650[v293] = v295;
                if ( v595 > (int)(v290 + 2) )
                {
                  v298 = dest[v296];
                  v299 = v650[v296];
                  v300 = v290 + 3;
                  dest[v297] = v298;
                  v301 = v289 + 3;
                  v650[v297] = v299;
                  if ( v595 > (int)(v290 + 3) )
                  {
                    v302 = dest[v300];
                    v303 = v650[v300];
                    v304 = v290 + 4;
                    dest[v301] = v302;
                    v305 = v289 + 4;
                    v650[v301] = v303;
                    if ( v595 > (int)(v290 + 4) )
                    {
                      v306 = v290 + 5;
                      v307 = v289 + 5;
                      v308 = v650[v304];
                      dest[v305] = dest[v304];
                      v650[v305] = v308;
                      if ( v595 > v306 )
                      {
                        v309 = v650[v306];
                        dest[v307] = dest[v306];
                        v650[v307] = v309;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v508 = &dest[(unsigned __int64)v265 / 4];
            v509 = (char *)&v650[(unsigned __int64)v263 / 8];
            v510 = 0;
            do
            {
              v511 = *(_QWORD *)&v509[2 * v510];
              dest[(unsigned __int64)v262 / 4 + v510 / 4] = v508[v510 / 4];
              *(_QWORD *)&v264[2 * v510] = v511;
              v510 += 4LL;
            }
            while ( v510 != 4LL * (v260 - 1) + 4 );
          }
          v256 += v260;
          v258 = v256 - v681;
        }
        v310 = v257++;
        v251 = *((int *)this + 27);
      }
      while ( (int)v251 > v310 );
      LODWORD(v255) = v611;
      v311 = 4LL * v258;
      v312 = 8LL * v258;
      goto LABEL_211;
    }
LABEL_407:
    v258 = 0;
    v312 = 0;
    v311 = 0;
LABEL_211:
    v313 = v681;
    *(_DWORD *)(v657 + 4 * v251) = v258;
    memcpy(dest, &dest[v313], v311);
    memcpy(v650, &v650[v313], v312);
LABEL_212:
    ClpModel::deleteRowsAndColumns(v655, v607, (const int *)v670, v255, v661);
    goto LABEL_213;
  }
  v87 = 0.0;
  v692 = 1;
  v680 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v89 = v44[*(_QWORD *)&v87];
      v90 = LODWORD(v87);
      if ( v89 > 2 || a2[*(_QWORD *)&v87] )
        break;
      if ( v89 != 2 )
      {
        if ( v89 == 1 )
        {
          v504 = *(_BYTE *)(v662 + *(_QWORD *)&v87);
          if ( v504 >= 0 )
          {
            v505 = v670;
            *(_BYTE *)(v662 + *(_QWORD *)&v87) = v504 | 0x80;
            v506 = v680;
            v505[v680] = LODWORD(v87);
            v86 = *((_DWORD *)this + 26);
            v680 = v506 + 1;
          }
        }
        else
        {
          v317 = this;
          v318 = *((double *)this + 110);
          if ( *(double *)(v594 + 8LL * *(_QWORD *)&v87) > v318 || -v318 > *(double *)(v616 + 8LL * *(_QWORD *)&v87) )
            goto LABEL_461;
          a2[*(_QWORD *)&v87] = 1;
          v319 = *(double *)(*((_QWORD *)this + 18) + 8LL * *(_QWORD *)&v87);
          if ( v319 <= -1.0e30 )
          {
            v317 = this;
            v612 = *(double *)(v594 + 8LL * *(_QWORD *)&v87);
          }
          else
          {
            v612 = v319 - *(double *)(v594 + 8LL * *(_QWORD *)&v87);
          }
          v320 = *(double *)(*((_QWORD *)v317 + 19) + 8LL * *(_QWORD *)&v87);
          if ( v320 >= 1.0e30 )
            v624 = *(double *)(v616 + 8LL * *(_QWORD *)&v87);
          else
            v624 = v320 - *(double *)(v616 + 8LL * *(_QWORD *)&v87);
          v321 = (char *)src[0];
          v322 = v44[*(_QWORD *)&v87];
          v323 = (__int32 *)((char *)v654 + 8 * v696);
          v324 = LODWORD(src[0]) - v668.m128i_i32[0];
          v325 = *(int *)(*(_QWORD *)v606 + 4LL * *(_QWORD *)&v87);
          v326 = v696 + 1;
          v323[1] = 1;
          v327 = v321;
          *v323 = v324;
          v696 = v326;
          v590 = (void *)(v665 + 8 * v325);
          v328 = (const void *)(v671 + 4 * v325);
          v329 = 12 * v322 + 24;
          if ( v329 + v321 - (char *)src[1] > v698 )
          {
            v330 = 2 * v329;
            v331 = v698 / 2 + 10000;
            if ( v331 < v330 )
              v331 = v330;
            v698 += v331;
            v332 = (char *)operator new[](v698);
            v333 = v321 - (char *)src[1];
            nh = src[1];
            memcpy(v332, src[1], v333);
            operator delete[](nh);
            v327 = &v332[v333];
            src[1] = v332;
          }
          *(double *)v327 = v612;
          *((_DWORD *)v327 + 5) = v322;
          *((double *)v327 + 1) = v624;
          *((_DWORD *)v327 + 4) = LODWORD(v87);
          v334 = (char *)memcpy(v327 + 24, v328, 4 * v322);
          src[0] = (char *)memcpy(&v334[4 * v322], v590, 8 * v322) + 8 * v322;
          v86 = *((_DWORD *)this + 26);
        }
        goto LABEL_75;
      }
      v88 = *(double *)(v594 + 8LL * *(_QWORD *)&v87);
      if ( v88 != *(double *)(v616 + 8LL * *(_QWORD *)&v87) )
        goto LABEL_75;
      v335 = *(_BYTE *)(v662 + *(_QWORD *)&v87);
      if ( v335 >= 0 )
      {
        v336 = v670;
        *(_BYTE *)(v662 + *(_QWORD *)&v87) = v335 | 0x80;
        v337 = v680;
        v336[v680] = LODWORD(v87);
        v88 = *(double *)(v594 + 8LL * *(_QWORD *)&v87);
        v680 = v337 + 1;
      }
      v338 = *(int *)(*(_QWORD *)v606 + 4LL * *(_QWORD *)&v87);
      v339 = *(int *)(v671 + 4 * v338 + 4);
      v340 = *(double *)(v665 + 8 * v338 + 8);
      v341 = *(_DWORD *)(v671 + 4 * v338);
      v603 = *(double *)(v665 + 8 * v338);
      v591 = *(_DWORD *)(v671 + 4 * v338 + 4);
      v613 = (void *)v341;
      v342 = v340 / v603;
      nc = v603 / v340;
      v343 = fabs(v603 / v340);
      if ( v343 < 0.001 || v343 > 1000.0 )
      {
        if ( fabs(v340) > fabs(v603) )
        {
          v344 = 4LL * v341;
          v345 = (_DWORD *)(v666 + v344);
LABEL_235:
          v342 = v603 / v340;
          v339 = v341;
          nc = v340 / v603;
          v613 = (void *)*(int *)(v671 + 4 * v338 + 4);
          v341 = *(_DWORD *)(v671 + 4 * v338 + 4);
          v603 = *(double *)(v665 + 8 * v338 + 8);
          v591 = *(_DWORD *)(v671 + 4 * v338);
          v340 = *(double *)(v665 + 8 * v338);
          goto LABEL_236;
        }
        v344 = 4 * v339;
        v345 = (_DWORD *)(v666 + 4 * v339);
      }
      else
      {
        v344 = 4LL * v341;
        v345 = (_DWORD *)(v666 + v344);
        if ( *(_DWORD *)(v666 + v344) < *(_DWORD *)(v666 + 4 * v339) )
          goto LABEL_235;
        v345 = (_DWORD *)(v666 + 4 * v339);
        v344 = 4 * v339;
      }
LABEL_236:
      v346 = v88 / v603;
      v347 = (double *)(v672 + 8 * v339);
      v348 = (double *)(v673 + 8 * v339);
      v349 = *v347;
      v350 = *v348;
      if ( v342 <= 0.0 )
      {
        *(double *)&v686 = 1.0e30;
        if ( v350 >= 1.0e30 )
          v676 = 1.797693134862316e308;
        else
          v676 = v346 - v350 * v342;
        v687 = -1.0e30;
        if ( v349 <= -1.0e30 )
          v669 = -1.797693134862316e308;
        else
          v669 = v346 - v342 * v349;
      }
      else
      {
        *(double *)&v686 = 1.0e30;
        if ( v350 >= 1.0e30 )
          v669 = -1.797693134862316e308;
        else
          v669 = v346 - v350 * v342;
        v687 = -1.0e30;
        if ( v349 <= -1.0e30 )
          v676 = 1.797693134862316e308;
        else
          v676 = v346 - v342 * v349;
      }
      v351 = v672;
      v352 = v673;
      v353 = (__int64 *)(v674 + 8 * v339);
      v354 = (int *)(v657 + v344);
      v651[v339] = 14;
      a2[*(_QWORD *)&v87] = 14;
      v355 = *v347;
      v660 = *(double *)&v353;
      v664 = v354;
      v356 = *(double *)(v594 + 8LL * *(_QWORD *)&v87);
      v658 = v355;
      v625 = v356;
      v653 = (double *)(8LL * (_QWORD)v613 + v352);
      v647 = (double *)(8LL * (_QWORD)v613 + v351);
      v357 = *(void **)v653;
      LODWORD(v352) = *v345;
      v652 = *v647;
      v656 = v357;
      v358 = *v348;
      v359 = *v353;
      v360 = (char *)src[0];
      v361 = *v354;
      *(double *)&v684 = v356 / v340;
      LODWORD(v677) = v352;
      v659 = v358;
      v663 = v359;
      v685 = src[0];
      v362 = (__int32 *)((char *)v654 + 8 * v696);
      v363 = LODWORD(src[0]) - v668.m128i_i32[0];
      v364 = v696 + 1;
      v362[1] = 14;
      *v362 = v363;
      v696 = v364;
      v667 = &v650[v361];
      v365 = (__int64)&dest[v361];
      v366 = 12 * v352 + 80;
      v668.m128i_i64[1] = v365;
      if ( v366 + v360 - (char *)src[1] > v698 )
      {
        v367 = 2 * v366;
        v368 = v698 / 2 + 10000;
        if ( v368 < v367 )
          v368 = v367;
        v698 += v368;
        v369 = (void *)operator new[](v698);
        v370 = v685;
        v685 = v369;
        v690 = src[1];
        v695 = v370 - (char *)src[1];
        memcpy(v369, src[1], v370 - (char *)src[1]);
        operator delete[](v690);
        v360 = (char *)v685 + v695;
        src[1] = v685;
      }
      v371 = (void *)(int)v677;
      v372 = v656;
      v373 = v658;
      v374 = v663;
      v375 = (const void *)v668.m128i_i64[1];
      *(double *)v360 = v652;
      *((_DWORD *)v360 + 17) = v591;
      v376 = v659;
      *((_QWORD *)v360 + 1) = v372;
      *((_DWORD *)v360 + 18) = (_DWORD)v371;
      *((_DWORD *)v360 + 14) = 0;
      *((double *)v360 + 2) = v373;
      *((_DWORD *)v360 + 15) = LODWORD(v87);
      v377 = v625;
      *((_DWORD *)v360 + 16) = v341;
      *((double *)v360 + 3) = v376;
      v626 = v371;
      *((_QWORD *)v360 + 4) = v374;
      *((double *)v360 + 5) = v603;
      *((double *)v360 + 6) = v377;
      v378 = (char *)memcpy(v360 + 80, v375, 4LL * (_QWORD)v371) + 4 * (_QWORD)v371;
      v379 = (char *)memcpy(v378, v667, 8LL * (_QWORD)v626);
      v380 = v653;
      v381 = fmin(v676, *v653);
      src[0] = &v379[8 * (_QWORD)v626];
      v382 = fmax(v669, *v647);
      if ( v382 > *((double *)this + 110) + v381 )
        goto LABEL_461;
      *v647 = v382;
      v383 = (double *)(v674 + 8LL * (_QWORD)v613);
      *v380 = v381;
      v384 = *(double **)&v660;
      v385 = v689;
      *v383 = *v383 - **(double **)&v660 * nc;
      v386 = *((_QWORD *)v655 + 33);
      v387 = *(_BYTE *)(v386 + LODWORD(v87) + *((_DWORD *)v655 + 27)) & 7;
      v689 = v385 - nc * *v384 * *(double *)(v594 + 8LL * *(_QWORD *)&v87);
      if ( v387 == 1 )
      {
        if ( (*(_BYTE *)(v386 + v339) & 7) == 1 )
        {
          v512 = (char *)v613 + v386;
          v648 = 1;
          if ( (*v512 & 7) == 1 )
            goto LABEL_250;
          *v512 = *v512 & 0xF8 | 1;
        }
      }
      else
      {
        v388 = (_BYTE *)(v339 + v386);
        if ( (*v388 & 7) != 1 )
        {
          *v388 = *v388 & 0xF8 | 1;
          v389 = (char *)v613 + *((_QWORD *)v655 + 33);
          if ( (*v389 & 7) == 1 )
          {
            v648 = 0;
            *v389 = *v389 & 0xF8 | 4;
            goto LABEL_250;
          }
        }
      }
      v648 = 0;
LABEL_250:
      v390 = (int *)(v666 + 4LL * (_QWORD)v613);
      v614 = (int *)(4LL * (_QWORD)v613 + v657);
      v391 = *v614;
      v627 = v390;
      v392 = *v614 + *v390;
      if ( *v614 >= v392 )
      {
        v604 = 0;
      }
      else
      {
        v393 = v391 + 1;
        v394 = &dest[v391 - v393];
        v395 = 0;
        while ( 1 )
        {
          v396 = v394[v393];
          if ( v396 != LODWORD(v87) )
            break;
LABEL_255:
          v399 = v393++;
          if ( v392 <= v399 )
          {
            v604 = v395;
            goto LABEL_257;
          }
        }
        while ( 1 )
        {
          *((_QWORD *)v675 + v396) = *(_QWORD *)((char *)&v650[v393] + 8LL * v391 - 8LL * (v391 + 1));
          v397 = v395 + 1;
          v617[v395] = v396;
          v398 = v393++;
          v392 = v391 + *v627;
          if ( v392 <= v398 )
            break;
          v396 = v394[v393];
          v395 = v397;
          if ( v396 == LODWORD(v87) )
            goto LABEL_255;
        }
        v604 = v397;
      }
LABEL_257:
      v400 = v664;
      v44[*(_QWORD *)&v87] = 0;
      v401 = *v400;
      v402 = *v400 + *v345;
      if ( *v400 >= v402 )
        goto LABEL_271;
      v403 = nc;
      nd = (size_t)v44;
      v404 = v401 + 1;
      v405 = v604;
      v406 = v684;
      v407 = *(double *)&v686;
      v408 = v687;
      do
      {
        while ( 1 )
        {
          v411 = dest[v401 - 1 - v401 + v404];
          if ( v411 == LODWORD(v87) )
            goto LABEL_260;
          v412 = 8LL * v411;
          v413 = *(double *)((char *)&v650[v404] + 8LL * v401 - 8LL * (v401 + 1));
          v414 = v413 * *(double *)&v406;
          v415 = (double *)((char *)v675 + v412);
          v416 = *(double *)((char *)v675 + v412);
          v417 = v416 - v413 * v403;
          v418 = *(double *)(v412 + v594);
          if ( v418 > v408 )
            *(double *)(v412 + v594) = v418 - v414;
          v419 = (double *)(v616 + v412);
          if ( v407 > *v419 )
            *v419 = *v419 - v414;
          if ( v416 != 0.0 )
            break;
          v409 = v405;
          *v415 = v417;
          ++v405;
          v617[v409] = v411;
          v402 = v401 + *v345;
LABEL_260:
          v410 = v404++;
          if ( v402 <= v410 )
            goto LABEL_270;
        }
        v420 = *(_QWORD *)&v417;
        if ( v417 == 0.0 )
          v420 = 0x2B2BFF2EE48E0530LL;
        v421 = v420;
        v422 = v404++;
        *(_QWORD *)v415 = v421;
      }
      while ( v402 > v422 );
LABEL_270:
      v604 = v405;
      v44 = (int *)nd;
LABEL_271:
      *v345 = 0;
      if ( *v627 < v604 )
      {
        if ( v604 + v681 > (int)v688 )
        {
          v518 = *((int *)this + 27);
          if ( (int)v518 <= 0 )
          {
            v521 = 0;
            v571 = 0;
            v570 = 0;
          }
          else
          {
            v519 = v681;
            v520 = 1;
            v656 = v44;
            LODWORD(v658) = v341;
            LODWORD(v659) = LODWORD(v87);
            v660 = v87;
            do
            {
              v521 = v519 - v681;
              v522 = *(_DWORD *)(v657 + 4 * v520 - 4);
              *(_DWORD *)(v657 + 4 * v520 - 4) = v519 - v681;
              v523 = *(_DWORD *)(v666 + 4 * v520 - 4);
              LODWORD(v653) = v522 + v523;
              if ( v522 < (int)(v522 + v523) )
              {
                v524 = v522;
                v643 = (CoinPackedMatrix *)(8LL * v522);
                v525 = 8LL * v519;
                v526 = 4LL * v522;
                *(_QWORD *)&v652 = v523 + (__int64)v519;
                v527 = 4LL * v519;
                nf = (size_t)&v650[(unsigned __int64)v525 / 8];
                v528 = &dest[(unsigned __int64)v527 / 4];
                if ( v523 > 0xE
                  && ((__int64)v643 >= v525 + 32 || v525 >= (__int64)v643 + 32)
                  && (v526 >= v527 + 16 || v527 >= v526 + 16)
                  && (v528 >= (int *)&v650[*(_QWORD *)&v652] || nf >= (unsigned __int64)&dest[*(_QWORD *)&v652]) )
                {
                  v529 = v519;
                  v530 = -(int)((unsigned __int64)&dest[(unsigned __int64)v526 / 4] >> 2) & 3;
                  if ( v530 )
                  {
                    v531 = v650[v522];
                    v529 = v519 + 1;
                    *v528 = dest[v522];
                    v650[v519] = v531;
                    v532 = v522 + 1;
                    if ( v530 == 1
                      || (v533 = v529,
                          v534 = dest[v532],
                          v535 = v650[v532],
                          v532 = v522 + 2,
                          dest[v533] = v534,
                          v529 = v519 + 2,
                          v650[v533] = v535,
                          v530 == 2) )
                    {
                      v522 = v532;
                    }
                    else
                    {
                      v536 = v529;
                      v522 += 3;
                      v537 = v650[v532];
                      dest[v529] = dest[v532];
                      v529 = v519 + 3;
                      v650[v536] = v537;
                    }
                  }
                  v538 = 0;
                  v539 = v530 + v524;
                  v540 = v523 - v530;
                  v541 = &dest[v539];
                  v542 = (char *)&v650[v539];
                  v543 = &dest[v530 + (unsigned __int64)v527 / 4];
                  v544 = (char *)&v650[v530 + (unsigned __int64)v525 / 8];
                  v545 = (v523 - v530) >> 2;
                  v546 = 0;
                  do
                  {
                    ++v538;
                    *(__m128i *)&v543[v546 / 4] = _mm_load_si128((const __m128i *)&v541[v546 / 4]);
                    v547 = *(_OWORD *)&v542[2 * v546 + 16];
                    *(_OWORD *)&v544[2 * v546] = *(_OWORD *)&v542[2 * v546];
                    *(_OWORD *)&v544[2 * v546 + 16] = v547;
                    v546 += 16LL;
                  }
                  while ( v538 < v545 );
                  v548 = (v540 & 0xFFFFFFFC) + v529;
                  v549 = (v540 & 0xFFFFFFFC) + v522;
                  if ( (v540 & 0xFFFFFFFC) != v540 )
                  {
                    v550 = (int)v653;
                    v551 = v650[v549];
                    dest[v548] = dest[v549];
                    v650[v548] = v551;
                    v552 = v549 + 1;
                    v553 = v548 + 1;
                    if ( v550 > (int)(v549 + 1) )
                    {
                      v554 = v650[v552];
                      dest[v553] = dest[v552];
                      v650[v553] = v554;
                      v555 = v549 + 2;
                      v556 = v548 + 2;
                      if ( v550 > (int)(v549 + 2) )
                      {
                        v557 = dest[v555];
                        v558 = v650[v555];
                        v559 = v549 + 3;
                        dest[v556] = v557;
                        v560 = v548 + 3;
                        v650[v556] = v558;
                        if ( v550 > (int)(v549 + 3) )
                        {
                          v561 = dest[v559];
                          v562 = v650[v559];
                          v563 = v549 + 4;
                          dest[v560] = v561;
                          v564 = v548 + 4;
                          v650[v560] = v562;
                          if ( v550 > (int)(v549 + 4) )
                          {
                            v565 = v549 + 5;
                            v566 = v548 + 5;
                            v567 = v650[v563];
                            dest[v564] = dest[v563];
                            v650[v564] = v567;
                            if ( v550 > v565 )
                            {
                              v568 = v650[v565];
                              dest[v566] = dest[v565];
                              v650[v566] = v568;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v573 = &dest[(unsigned __int64)v526 / 4];
                  v574 = 0;
                  do
                  {
                    v575 = *(_QWORD *)((char *)v643 + 2 * v574 + (_QWORD)v650);
                    v528[v574 / 4] = v573[v574 / 4];
                    *(_QWORD *)(nf + 2 * v574) = v575;
                    v574 += 4LL;
                  }
                  while ( 4LL * (v523 - 1) + 4 != v574 );
                }
                v519 += v523;
                v521 = v519 - v681;
              }
              v569 = v520++;
              v518 = *((int *)this + 27);
            }
            while ( (int)v518 > v569 );
            v44 = (int *)v656;
            v341 = LODWORD(v658);
            v90 = LODWORD(v659);
            v87 = v660;
            v570 = 4LL * v521;
            v571 = 8LL * v521;
          }
          ni = v571;
          *(_DWORD *)(v657 + 4 * v518) = v521;
          v572 = v681;
          memcpy(dest, &dest[v681], v570);
          memcpy(v650, &v650[v572], ni);
          v681 = v521;
        }
        v507 = v681;
        v692 = 0;
        *v614 = v681;
        LODWORD(v652) = v507;
        v423 = v604;
        if ( !v604 )
          goto LABEL_404;
LABEL_273:
        v642 = v90;
        v424 = v665;
        v615 = (char *)v44;
        *(double *)&v653 = v87;
        v425 = v617;
        v426 = v671;
        ne = (size_t)&v617[v423 - 1 + 1];
        v605 = LODWORD(v652);
LABEL_274:
        v427 = *v425;
        v428 = (double *)((char *)v675 + 8 * v427);
        v429 = *v425;
        v430 = *v428;
        *v428 = 0.0;
        if ( fabs(v430) < 1.0e-13 )
        {
          v430 = 0.0;
        }
        else if ( v430 != 0.0 )
        {
          v431 = v605;
          dest[v605++] = v429;
          *(double *)&v650[v431] = v430;
          if ( v648 )
          {
            v432 = (_BYTE *)(*((_QWORD *)v655 + 33) + v429 + *((_DWORD *)v655 + 27));
            if ( (*v432 & 7) != 1 )
            {
              v648 = 0;
              *v432 = *v432 & 0xF8 | 1;
            }
          }
        }
        v433 = *(_DWORD *)(*(_QWORD *)v606 + 4 * v427);
        v434 = (int *)&v615[4 * v427];
        v435 = *v434;
        v436 = v433 + *v434;
        if ( v433 >= v436 )
        {
          v445 = 1;
          v444 = 0;
          goto LABEL_288;
        }
        v437 = v433 + 1;
        v438 = *(_DWORD *)(*(_QWORD *)v606 + 4 * v427);
        while ( 2 )
        {
          while ( 1 )
          {
            v442 = *(_DWORD *)(v426 + -4LL * (v433 + 1) + 4LL * v433 + 4 * v437);
            if ( v341 != v442 && v591 != v442 )
              break;
            if ( v430 == 0.0 )
              goto LABEL_283;
            v443 = v438++;
            *(_DWORD *)(v426 + 4 * v443) = v341;
            v435 = *v434;
            *(double *)(v424 + 8 * v443) = v430;
            LODWORD(v443) = v437++;
            v430 = 0.0;
            v436 = v433 + v435;
            if ( v433 + v435 <= (int)v443 )
            {
LABEL_287:
              v444 = v438 - v433;
              v445 = v444 <= 1;
LABEL_288:
              if ( v445 && v429 < v642 && v435 > 1 )
              {
                v501 = (char *)(v662 + v427);
                if ( *v501 >= 0 )
                {
                  v502 = v670;
                  *v501 |= 0x80u;
                  v503 = v680;
                  v502[v680] = v429;
                  v680 = v503 + 1;
                }
              }
              ++v425;
              *v434 = v444;
              if ( (int *)ne == v425 )
              {
                v446 = v605 - LODWORD(v652);
                v44 = (int *)v615;
                v87 = *(double *)&v653;
                goto LABEL_292;
              }
              goto LABEL_274;
            }
          }
          v439 = v438;
          v440 = *(_QWORD *)(v424 + 8LL * v433 - 8LL * (v433 + 1) + 8 * v437);
          *(_DWORD *)(v426 + 4LL * v438) = v442;
          v435 = *v434;
          ++v438;
          *(_QWORD *)(v424 + 8 * v439) = v440;
          v436 = v433 + v435;
LABEL_283:
          v441 = v437++;
          if ( v436 <= v441 )
            goto LABEL_287;
          continue;
        }
      }
      LODWORD(v652) = *v614;
      v423 = v604;
      if ( v604 )
        goto LABEL_273;
LABEL_404:
      v605 = LODWORD(v652);
      v446 = 0;
LABEL_292:
      *v627 = v446;
      v447 = v605;
      if ( v681 >= v605 )
        v447 = v681;
      v681 = v447;
      v86 = *((_DWORD *)this + 26);
LABEL_75:
      ++*(_QWORD *)&v87;
      if ( SLODWORD(v87) >= v86 )
        goto LABEL_98;
    }
    if ( *(double *)(v594 + 8LL * *(_QWORD *)&v87) != -1.797693134862316e308
      || *(double *)(v616 + 8LL * *(_QWORD *)&v87) != 1.797693134862316e308 )
    {
      goto LABEL_75;
    }
    a2[*(_QWORD *)&v87] = 1;
    v91 = *(double *)(*((_QWORD *)this + 18) + 8LL * *(_QWORD *)&v87);
    if ( v91 <= -1.0e30 )
      v598 = *(double *)(v594 + 8LL * *(_QWORD *)&v87);
    else
      v598 = v91 - *(double *)(v594 + 8LL * *(_QWORD *)&v87);
    v92 = *(double *)(*((_QWORD *)this + 19) + 8LL * *(_QWORD *)&v87);
    v585 = *(double *)(v616 + 8LL * *(_QWORD *)&v87);
    if ( v92 < 1.0e30 )
      v585 = v92 - *(double *)(v616 + 8LL * *(_QWORD *)&v87);
    v93 = (double *)src[0];
    v94 = v44[*(_QWORD *)&v87];
    v95 = (__int32 *)((char *)v654 + 8 * v696);
    v96 = LODWORD(src[0]) - v668.m128i_i32[0];
    v97 = *(int *)(*(_QWORD *)v606 + 4LL * *(_QWORD *)&v87);
    v98 = v696 + 1;
    v95[1] = 1;
    v99 = v93;
    *v95 = v96;
    v696 = v98;
    v100 = 12 * v94 + 24;
    v609 = (void *)(v665 + 8 * v97);
    v101 = (int *)(v671 + 4 * v97);
    if ( v100 + (char *)v93 - (char *)src[1] > v698 )
    {
      v102 = 2 * v100;
      v103 = v698 / 2 + 10000;
      if ( v103 < v102 )
        v103 = v102;
      v698 += v103;
      v640 = (CoinPackedMatrix *)operator new[](v698);
      v104 = (char *)v93 - (char *)src[1];
      v644 = src[1];
      memcpy(v640, src[1], v104);
      operator delete[](v644);
      v99 = (double *)((char *)v640 + v104);
      src[1] = v640;
    }
    v99[1] = v585;
    *((_DWORD *)v99 + 5) = v94;
    *v99 = v598;
    *((_DWORD *)v99 + 4) = LODWORD(v87);
    v105 = (char *)memcpy(v99 + 3, v101, 4LL * v94);
    src[0] = (char *)memcpy(&v105[4 * v94], v609, 8LL * v94) + 8 * v94;
    v44[*(_QWORD *)&v87] = 0;
    v106 = v97 + v94;
    if ( (int)v97 >= v106 )
      goto LABEL_97;
    v586 = v44;
    v107 = v657;
    v108 = v666;
    v109 = v671 + 4 * (v97 + (unsigned int)(v106 - v97 - 1)) + 4;
    while ( 2 )
    {
      while ( 2 )
      {
        v110 = *v101;
        v111 = *(int *)(v107 + 4 * v110);
        v112 = (_DWORD *)(v108 + 4 * v110);
        v113 = v111 + *v112;
        v114 = (unsigned int)(*v112 - 1);
        *v112 = v114;
        if ( (int)v111 >= v113 )
        {
LABEL_95:
          if ( (int *)v109 == ++v101 )
            goto LABEL_96;
          continue;
        }
        break;
      }
      v115 = &dest[v111];
      if ( *v115 != LODWORD(v87) )
      {
        v116 = v111 + 1;
        v117 = (__int64)&dest[v111 + 1];
        v118 = (__int64)&dest[v114 + 1 + v111];
        while ( v118 != v117 )
        {
          v115 = (int *)v117;
          v117 += 4;
          if ( *v115 == LODWORD(v87) )
            goto LABEL_215;
          ++v116;
        }
        goto LABEL_95;
      }
      v116 = v111;
LABEL_215:
      ++v101;
      v315 = v113 - 1;
      v316 = v650[v315];
      *v115 = dest[v315];
      v650[v116] = v316;
      if ( (int *)v109 != v101 )
        continue;
      break;
    }
LABEL_96:
    v44 = v586;
LABEL_97:
    v86 = *((_DWORD *)this + 26);
    ++*(_QWORD *)&v87;
    if ( SLODWORD(v87) < v86 )
      continue;
    break;
  }
LABEL_98:
  LOBYTE(v690) = 1;
  while ( v680 )
  {
    v119 = 0;
    v120 = v671;
    v121 = v662;
    v122 = (int *)v670;
    v123 = (int *)((char *)v670 + 4 * (unsigned int)(v680 - 1) + 4);
    do
    {
      while ( 1 )
      {
        v124 = *v122;
        *(_BYTE *)(v121 + v124) &= ~0x80u;
        if ( v44[v124] == 1 )
        {
          v125 = *(int *)(v120 + 4LL * *(int *)(*(_QWORD *)v606 + 4 * v124));
          if ( !v651[v125] )
            break;
        }
        if ( v123 == ++v122 )
          goto LABEL_105;
      }
      v126 = v661;
      ++v122;
      v651[v125] = 55;
      v127 = v119++;
      v126[v127] = v125;
    }
    while ( v123 != v122 );
LABEL_105:
    LODWORD(v652) = v119;
    if ( !v119 )
      break;
    v610 = (_BYTE *)(&dword_0 + 1);
    v128 = 1;
    LODWORD(v663) = v119;
    v680 = 0;
    while ( 2 )
    {
      ++LODWORD(v652);
      v129 = v661[v128 - 1];
      LODWORD(v653) = v129;
      na = v129;
      v656 = &v651[v129];
      v130 = v651[v129];
      LOBYTE(v658) = v130 > 10 && v130 != 55;
      if ( LOBYTE(v658) )
        goto LABEL_173;
      if ( v130 == 55 )
        *(_BYTE *)v656 = 0;
      v131 = *(_DWORD *)(4 * v129 + v657);
      v664 = (int *)(4 * v129 + v657);
      v667 = (void *)(8 * v129 + v672);
      v132 = *(unsigned __int64 *)v667;
      v133 = *(_DWORD *)(v666 + 4 * v129);
      v587 = (int *)(v666 + 4 * v129);
      v668.m128i_i64[1] = v673 + 8 * v129;
      v134 = *(unsigned __int64 *)v668.m128i_i64[1];
      v135 = v131 + v133;
      if ( v131 >= v135 )
      {
        v622 = v131;
        LODWORD(v669) = 0;
        v645 = 0;
        v660 = 0.0;
        goto LABEL_147;
      }
      v136 = v131 + 1;
      v137 = v131 + 1;
      v660 = 0.0;
      v621 = nullptr;
      v138 = &dest[v131 - v137];
      v599 = nullptr;
      v641 = -1;
      v618 = -1;
      v139 = v665;
      while ( 2 )
      {
        while ( 2 )
        {
          v141 = v138[v137];
          v142 = v138[v137];
          if ( v44[v141] != 1 || a2[v141] )
            goto LABEL_112;
          a2[v141] = 1;
          v143 = *(double *)(v139 + 8LL * *(int *)(*(_QWORD *)v606 + 4 * v141));
          v144 = (unsigned __int64 *)(v616 + 8 * v141);
          if ( v143 <= 0.0 )
          {
            v146 = *v144;
            if ( *(double *)&v146 >= 1.0e30 )
              v146 = v132;
            else
              *(double *)&v146 = *(double *)&v146 / v143;
            v145 = *(unsigned __int64 *)(v594 + 8 * v141);
            if ( *(double *)&v145 <= -1.0e30 )
              v145 = v134;
            else
              *(double *)&v145 = *(double *)&v145 / v143;
          }
          else
          {
            v145 = *v144;
            if ( *(double *)&v145 >= 1.0e30 )
            {
              v146 = *(unsigned __int64 *)(v594 + 8 * v141);
              v145 = v134;
              if ( *(double *)&v146 <= -1.0e30 )
                goto LABEL_323;
LABEL_118:
              *(double *)&v146 = *(double *)&v146 / v143;
            }
            else
            {
              v146 = *(unsigned __int64 *)(v594 + 8 * v141);
              *(double *)&v145 = *(double *)&v145 / v143;
              if ( *(double *)&v146 > -1.0e30 )
                goto LABEL_118;
LABEL_323:
              v146 = v132;
            }
          }
          v147 = *((double *)this + 110);
          if ( *(double *)&v146 <= v147 + *(double *)&v132 )
          {
            v148 = *(double *)&v134 - v147;
LABEL_121:
            if ( v148 > *(double *)&v145 )
              break;
            goto LABEL_122;
          }
          if ( *(double *)&v146 > v147 + *(double *)&v134 )
            goto LABEL_370;
          v599 = *(void **)(v139 + 8LL * *(int *)(*(_QWORD *)v606 + 4 * v141));
          v148 = *(double *)&v134 - v147;
          if ( *(double *)&v146 > *(double *)&v134 - v147 )
          {
            v132 = v134;
            v618 = v142;
            goto LABEL_121;
          }
          if ( *(double *)&v146 <= *(double *)&v132 )
          {
            v618 = v142;
            goto LABEL_121;
          }
          v132 = v146;
          v618 = v142;
          if ( v148 <= *(double *)&v145 )
          {
LABEL_122:
            v149 = v137++;
            v135 = v131 + *v587;
            if ( v135 <= v149 )
              goto LABEL_123;
            continue;
          }
          break;
        }
        if ( *(double *)&v132 - v147 <= *(double *)&v145 )
        {
          v621 = *(void **)(v139 + 8LL * *(int *)(*(_QWORD *)v606 + 4 * v141));
          v448 = *v587;
          if ( v147 + *(double *)&v132 > *(double *)&v145 )
          {
            v134 = v132;
            v641 = v142;
            v135 = v131 + v448;
          }
          else
          {
            if ( *(double *)&v134 > *(double *)&v145 )
              v134 = v145;
            v641 = v142;
            v135 = v131 + v448;
          }
LABEL_112:
          v140 = v137++;
          if ( v135 <= v140 )
            goto LABEL_123;
          continue;
        }
        break;
      }
LABEL_370:
      LOBYTE(v690) = 0;
      LODWORD(v663) = 0;
      LODWORD(v652) = -1;
LABEL_123:
      if ( v618 < 0 && v641 < 0 )
      {
        v150 = v131 + *v587;
        if ( v131 < v150 )
          goto LABEL_126;
LABEL_349:
        v181 = *(double *)(v674 + 8 * na) * *(double *)this;
        v454 = v131 == *v664;
        v182 = v131 - *v664;
        LODWORD(v669) = v182;
        if ( v454 )
          goto LABEL_148;
        v645 = 0;
        LODWORD(v669) = 0;
LABEL_355:
        *v587 = v182;
        if ( v645 <= 0 || !LODWORD(v669) )
          goto LABEL_173;
        if ( !LOBYTE(v658) )
        {
          v186 = *(double *)v667;
          goto LABEL_152;
        }
        v184 = *(double *)v668.m128i_i64[1];
LABEL_373:
        v602 = fmin(v184, 1.0e20);
        v187 = v602;
        goto LABEL_153;
      }
      v457 = -1;
      if ( v618 >= 0 )
      {
        v458 = *(double *)(*((_QWORD *)this + 18) + 8LL * v618);
        v459 = *(double *)(v594 + 8LL * v618);
        v678 = v459;
        if ( v458 > -1.0e30 )
          v678 = v458 - v459;
        v460 = *(double *)(*((_QWORD *)this + 19) + 8LL * v618);
        v461 = *(double *)(v616 + 8LL * v618);
        v679 = v461;
        if ( v460 < 1.0e30 )
          v679 = v460 - v461;
        v457 = v618;
      }
      if ( v618 == v641 || v641 < 0 )
      {
        LODWORD(v669) = -1;
      }
      else
      {
        v462 = *(double *)(*((_QWORD *)this + 18) + 8LL * v641);
        v463 = *(double *)(v594 + 8LL * v641);
        v683 = v463;
        if ( v462 > -1.0e30 )
          v683 = v462 - v463;
        v464 = *(double *)(*((_QWORD *)this + 19) + 8LL * v641);
        v465 = *(double *)(v616 + 8LL * v641);
        v682 = v465;
        if ( v464 < 1.0e30 )
          v682 = v464 - v465;
        LODWORD(v669) = v641;
      }
      v466 = (_QWORD *)v668.m128i_i64[1];
      v467 = v696;
      v468 = v654;
      v469 = v698;
      v649 = *(void **)v667;
      v470 = *(double *)v668.m128i_i64[1];
      *(_QWORD *)v667 = v132;
      *v466 = v134;
      v471 = src[0];
      v659 = v470;
      v472 = (char *)src[0];
      v468[2 * v467] = LODWORD(src[0]) - v668.m128i_i32[0];
      if ( v472 - (char *)src[1] + 80 > v469 )
      {
        v473 = (int)v469 / 2 + 10000;
        if ( v473 < 160 )
          v473 = 160;
        v698 = v469 + v473;
        v676 = COERCE_DOUBLE(operator new[]((int)v469 + v473));
        v474 = v471 - (char *)src[1];
        v677 = src[1];
        memcpy(*(void **)&v676, src[1], v474);
        operator delete[](v677);
        v472 = (char *)(*(_QWORD *)&v676 + v474);
        src[1] = *(void **)&v676;
      }
      v475 = v678;
      v476 = LODWORD(v669);
      v477 = (double *)(v472 + 80);
      v478 = v683;
      *((_DWORD *)v477 - 4) = v457;
      *(v477 - 10) = v475;
      v479 = v696;
      v480 = v679;
      *((_DWORD *)v477 - 3) = v476;
      v481 = (int)v653;
      *(v477 - 5) = v478;
      *(v477 - 9) = v480;
      *((_QWORD *)v477 - 8) = v649;
      *((_DWORD *)v477 - 2) = v481;
      v482 = v654;
      v483 = v659;
      *((_QWORD *)v477 - 3) = v621;
      *(v477 - 7) = v483;
      *((_QWORD *)v477 - 6) = v599;
      *(v477 - 4) = v682;
      src[0] = v477;
      v482[2 * v479 + 1] = 2;
      v696 = v479 + 1;
      v150 = v131 + *v587;
      if ( v131 >= v150 )
        goto LABEL_349;
LABEL_126:
      v151 = v136;
      v622 = v131;
      LODWORD(v659) = 0;
      LODWORD(v669) = 0;
      v645 = 0;
      v600 = &dest[v131 - v136];
      *(_QWORD *)&v658 = (char *)v650 + 8LL * v131 - 8LL * v136;
      while ( 2 )
      {
        while ( 2 )
        {
          v153 = v600[v151];
          v154 = &v44[v153];
          v155 = &a2[v153];
          v156 = v600[v151];
          v157 = a2[v153];
          if ( *v154 != 1 || v157 == 5 || v157 < 0 )
          {
            if ( v157 > 0 )
              goto LABEL_128;
            v449 = v622;
            dest[v622++] = v156;
            v450 = *(double *)(*(_QWORD *)&v658 + 8 * v151);
            *(double *)&v650[v449] = v450;
            if ( *v155 < 0 )
            {
              v645 = -1;
              v150 = v131 + *v587;
            }
            else
            {
              v451 = *(double *)(v594 + 8 * v153);
              v452 = *(double *)(v616 + 8 * v153);
              if ( v451 > -1.0e20 )
              {
                v453 = -1;
                if ( v452 >= 1.0e20 )
                  goto LABEL_362;
LABEL_316:
                if ( v450 > 0.0 )
                  goto LABEL_317;
LABEL_363:
                v645 = (v451 < -1.0e20) + 1;
              }
              else
              {
                if ( v452 >= 1.0e20 )
                {
                  v453 = v645;
                  goto LABEL_316;
                }
LABEL_362:
                ++LODWORD(v669);
                v453 = v645;
                if ( v450 <= 0.0 )
                  goto LABEL_363;
LABEL_317:
                v645 = (v452 > 1.0e20) + 1;
              }
              v150 = v131 + *v587;
              if ( v453 )
              {
                v454 = v453 == v645;
                v455 = -1;
                if ( v454 )
                  v455 = v645;
                v645 = v455;
              }
            }
LABEL_128:
            v152 = v151++;
            if ( v150 <= v152 )
              goto LABEL_144;
            continue;
          }
          break;
        }
        v158 = *(_BYTE *)(*((_QWORD *)v655 + 33) + (int)v153 + *((_DWORD *)v655 + 27));
        *v155 = 1;
        LODWORD(v659) += (v158 & 7) != 1;
        if ( v618 != (_DWORD)v153 && (_DWORD)v153 != v641 )
        {
          v159 = (char *)src[0];
          *((_DWORD *)v654 + 2 * v696) = LODWORD(src[0]) - v668.m128i_i32[0];
          v160 = *(double *)(*((_QWORD *)this + 18) + 8 * v153);
          v161 = *(double *)(v594 + 8 * v153);
          v676 = v161;
          if ( v160 > -1.0e30 )
            v676 = v160 - v161;
          v162 = *(double *)(*((_QWORD *)this + 19) + 8 * v153);
          v163 = *(double *)(v616 + 8 * v153);
          *(double *)&v677 = v163;
          if ( v162 < 1.0e30 )
            *(double *)&v677 = v162 - v163;
          v164 = *(int *)(*(_QWORD *)v606 + 4 * v153);
          LODWORD(v686) = *v154;
          v684 = (void *)(v665 + 8 * v164);
          v685 = (void *)(v671 + 4 * v164);
          v165 = 12 * v686 + 24;
          if ( v165 + v159 - (char *)src[1] > v698 )
          {
            v166 = 2 * v165;
            v167 = v698 / 2 + 10000;
            if ( v167 < v166 )
              v167 = v166;
            v698 += v167;
            v687 = COERCE_DOUBLE(operator new[](v698));
            v168 = v159 - (char *)src[1];
            v688 = src[1];
            memcpy(*(void **)&v687, src[1], v168);
            operator delete[](v688);
            src[1] = *(void **)&v687;
            v159 = (char *)(*(_QWORD *)&v687 + v168);
          }
          *(_QWORD *)&v169 = (int)v686;
          v170 = v676;
          v171 = v677;
          *((_DWORD *)v159 + 4) = v156;
          v172 = v685;
          *(double *)v159 = v170;
          v173 = v159 + 24;
          *((_QWORD *)v173 - 2) = v171;
          *((_DWORD *)v173 - 1) = LODWORD(v169);
          v174 = v173;
          v676 = v169;
          v175 = &v173[4 * *(_QWORD *)&v169];
          memcpy(v174, v172, 4LL * *(_QWORD *)&v169);
          v176 = v175;
          v177 = &v175[8 * *(_QWORD *)&v676];
          memcpy(v176, v684, 8LL * *(_QWORD *)&v676);
          src[0] = v177;
          v178 = v696;
          *((_DWORD *)v654 + 2 * v696 + 1) = 1;
          v696 = v178 + 1;
        }
        *v154 = 0;
        v179 = v151++;
        v150 = v131 + *v587;
        if ( v150 > v179 )
          continue;
        break;
      }
LABEL_144:
      if ( LODWORD(v659) )
      {
        v180 = (_BYTE *)(*((_QWORD *)v655 + 33) + na);
        if ( (*v180 & 7) == 1 )
          *v180 = *v180 & 0xF8 | 4;
      }
LABEL_147:
      v181 = *(double *)(v674 + 8 * na) * *(double *)this;
      v182 = v622 - *v664;
      if ( v622 != *v664 )
      {
        LOBYTE(v658) = v645 == 2;
        if ( v181 > v660 && v645 == 2 || v660 > v181 && v645 == 1 )
        {
          *v587 = v182;
          goto LABEL_173;
        }
        goto LABEL_355;
      }
LABEL_148:
      if ( v181 != v660 )
      {
        v237 = v181 <= v660;
        *v587 = 0;
        if ( v237 )
        {
          if ( !LODWORD(v669) )
            goto LABEL_173;
          v182 = 0;
          v184 = *(double *)v668.m128i_i64[1];
          goto LABEL_373;
        }
        if ( !LODWORD(v669) )
          goto LABEL_173;
        v182 = 0;
        v186 = *(double *)v667;
LABEL_152:
        v187 = fmax(v186, -1.0e20);
        v602 = v187;
LABEL_153:
        *(double *)(*((_QWORD *)this + 15) + 8 * na) = v187;
        *(_BYTE *)v656 = 11;
        v188 = *((_QWORD *)v655 + 33);
        if ( (*(_BYTE *)(v188 + na) & 7) == 1 )
        {
          v484 = v131 + v182;
          v485 = *((_DWORD *)this + 27);
          if ( v131 + v182 > v131 )
          {
            v486 = v131;
            v487 = ~v131;
            v488 = *((_DWORD *)this + 27);
            v489 = -1;
            v490 = &dest[v486];
            v491 = v490;
            do
            {
              v492 = *v491;
              if ( v44[v492] < v488 && (*(_BYTE *)(v188 + (int)v492 + *((_DWORD *)v655 + 27)) & 7) != 1 )
              {
                v489 = *v491;
                v488 = v44[v492];
              }
              ++v491;
            }
            while ( &dest[v486 + 1 + (unsigned int)(v487 + v484)] != v491 );
            if ( v489 < 0 )
            {
              v577 = -1;
              v578 = (__int64)&dest[(unsigned int)(v487 + v484) + 1 + v486];
              do
              {
                while ( 1 )
                {
                  v579 = *v490;
                  v580 = v44[v579];
                  if ( v580 < v485 )
                  {
                    v581 = *(_DWORD *)(*(_QWORD *)v606 + 4 * v579);
                    if ( v581 < v580 + v581 )
                      break;
                  }
                  if ( (int *)v578 == ++v490 )
                    goto LABEL_479;
                }
                v582 = (int *)(v671 + 4LL * v581);
                do
                {
                  if ( (_DWORD)v653 != *v582 && (*(_BYTE *)(v188 + *v582) & 7) != 1 )
                  {
                    v577 = *v582;
                    v485 = v580;
                  }
                  ++v582;
                }
                while ( (int *)(v671 + 4 + 4 * (v581 + (unsigned __int64)(unsigned int)(v580 - 1))) != v582 );
                ++v490;
              }
              while ( (int *)v578 != v490 );
LABEL_479:
              if ( (int)v577 >= 0 )
                *(_BYTE *)(v577 + v188) = *(_BYTE *)(v577 + v188) & 0xF8 | 1;
            }
            else
            {
              v493 = v655;
              v494 = (_BYTE *)(v489 + *((_DWORD *)v655 + 27) + v188);
              *v494 = *v494 & 0xF8 | 1;
              *(_BYTE *)(*((_QWORD *)v493 + 33) + na) = *(_BYTE *)(*((_QWORD *)v493 + 33) + na) & 0xF8 | 4;
            }
          }
        }
        v189 = (double *)v668.m128i_i64[1];
        v190 = (char *)src[0];
        v191 = v696;
        v192 = (char *)v654;
        v193 = *(void **)v667;
        v194 = *(_QWORD *)v668.m128i_i64[1];
        v195 = LODWORD(src[0]) - v668.m128i_i32[0];
        *(double *)v667 = v602;
        *v189 = v602;
        v196 = v191;
        v197 = (__int32 *)&v192[8 * v191];
        v623 = v193;
        v198 = *v587;
        nb = v194;
        v199 = *v664;
        *v197 = v195;
        v200 = v190;
        v197[1] = 11;
        v696 = v196 + 1;
        v201 = (double *)&v650[v199];
        v202 = 12 * v198 + 32;
        if ( v202 + v190 - (char *)src[1] > v698 )
        {
          v203 = 2 * v202;
          v204 = v698 / 2 + 10000;
          if ( v204 < v203 )
            v204 = v203;
          v698 += v204;
          v646 = (char *)operator new[](v698);
          v205 = v190 - (char *)src[1];
          v656 = src[1];
          memcpy(v646, src[1], v205);
          operator delete[](v656);
          v193 = v623;
          v194 = nb;
          v200 = &v646[v205];
          src[1] = v646;
        }
        v206 = (int)v653;
        *((_QWORD *)v200 + 1) = v194;
        v207 = 4 * v198;
        *(_QWORD *)v200 = v193;
        *((double *)v200 + 2) = v602;
        *((_DWORD *)v200 + 6) = v206;
        *((_DWORD *)v200 + 7) = v198;
        v208 = 4 * v198;
        v209 = 8 * v198;
        v210 = (char *)memcpy(v200 + 32, &dest[v199], v208);
        v211 = (char *)memcpy(&v210[v207], v201, v209);
        ++LODWORD(v652);
        src[0] = &v211[v209];
        *v587 = 0;
        v212 = v199 + v182;
        if ( v199 + v182 > v199 )
        {
          v213 = &dest[v199];
          v214 = v671;
          v215 = v665;
          v216 = (__int64)&dest[(unsigned int)(~v199 + v212) + 1 + (__int64)v199];
          v217 = v680;
          v588 = (int *)v216;
          v218 = (int)v653;
          do
          {
            v219 = *v213;
            v220 = *v201 * v602;
            v221 = *v213;
            v222 = (double *)(v594 + 8 * v219);
            if ( *v222 > -1.0e20 )
              *v222 = *v222 - v220;
            v223 = (double *)(v616 + 8 * v219);
            if ( *v223 < 1.0e20 )
              *v223 = *v223 - v220;
            v224 = *(_BYTE *)(v662 + v219);
            if ( v224 >= 0 )
            {
              v225 = v670;
              *(_BYTE *)(v662 + v219) = v224 | 0x80;
              v226 = v217++;
              v225[v226] = v221;
            }
            v227 = &v44[v219];
            v228 = *(_DWORD *)(*(_QWORD *)v606 + 4 * v219);
            v229 = v228 + *v227;
            if ( v228 >= v229 )
            {
              v236 = 0;
            }
            else
            {
              v230 = v228 + 1;
              v231 = *(_DWORD *)(*(_QWORD *)v606 + 4 * v219);
              do
              {
                while ( 1 )
                {
                  v232 = *(_DWORD *)(v214 + -4LL * (v228 + 1) + 4LL * v228 + 4 * v230);
                  if ( v218 == v232 )
                    break;
                  v233 = *(_QWORD *)(v215 + 8LL * v228 - 8LL * (v228 + 1) + 8 * v230);
                  v234 = v231++;
                  *(_DWORD *)(v214 + 4 * v234) = v232;
                  v235 = v230++;
                  *(_QWORD *)(v215 + 8 * v234) = v233;
                  v229 = v228 + *v227;
                  if ( v229 <= v235 )
                    goto LABEL_170;
                }
                v456 = v230++;
              }
              while ( v229 > v456 );
LABEL_170:
              v236 = v231 - v228;
            }
            ++v213;
            ++v201;
            *v227 = v236;
          }
          while ( v588 != v213 );
          v680 = v217;
        }
        goto LABEL_173;
      }
      v601 = *(void **)v667;
      v183 = fabs(*(double *)v667);
      v184 = *(double *)v668.m128i_i64[1];
      v185 = fabs(*(double *)v668.m128i_i64[1]);
      *v587 = 0;
      if ( v185 <= v183 )
      {
        if ( !LODWORD(v669) )
          goto LABEL_173;
        v182 = 0;
        goto LABEL_373;
      }
      if ( LODWORD(v669) )
      {
        v186 = *(double *)&v601;
        v182 = 0;
        goto LABEL_152;
      }
LABEL_173:
      v128 = (__int64)(v610 + 1);
      v237 = (int)v663 <= (int)v610++;
      if ( !v237 )
        continue;
      break;
    }
    if ( SLODWORD(v652) > 0 )
      continue;
    break;
  }
  if ( (_BYTE)v690 )
    goto LABEL_176;
LABEL_461:
  v576 = v655;
  ClpSimplex::~ClpSimplex(v655);
  operator delete(v576);
  v655 = nullptr;
  *v694 = nullptr;
LABEL_213:
  operator delete[](v670);
  operator delete[](v654);
  operator delete[]((void *)v668.m128i_i64[0]);
  operator delete[](v675);
  CoinPackedMatrix::~CoinPackedMatrix(v691);
  return v655;
}

