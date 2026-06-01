__int64 __fastcall Idiot::IdiSolve(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        double *a5,
        double *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double *a14,
        double *a15,
        double *a16,
        double *a17,
        double *a18,
        double *a19,
        double *a20,
        int *a21,
        int *a22,
        int *a23,
        __int64 a24,
        __int64 a25,
        int a26,
        __int16 a27,
        int *a28)
{
  _QWORD *v29; // r13
  __int64 v30; // r12
  __int64 v31; // r14
  double *v32; // r15
  __int64 i; // r14
  int *v34; // r14
  unsigned __int64 v35; // rax
  int v36; // edi
  int v37; // r9d
  _BOOL4 v38; // r8d
  unsigned int v39; // edi
  unsigned __int64 v40; // rax
  __m128i v41; // xmm2
  double *v42; // rdx
  double *v43; // rax
  unsigned int v44; // ecx
  __m128i si128; // xmm3
  __m128i v46; // xmm2
  unsigned int v47; // eax
  int v48; // ecx
  int v49; // ecx
  unsigned int v50; // edx
  int v51; // eax
  int v52; // ecx
  __int64 v53; // r9
  unsigned __int64 v54; // rcx
  __int64 v55; // rdx
  double v56; // xmm3_8
  double v57; // xmm1_8
  int v58; // edi
  int *v59; // r8
  __int64 v60; // rdi
  int *v61; // r11
  __int64 v62; // rax
  __int64 v63; // rdx
  double v64; // xmm0_8
  unsigned __int64 v65; // rbp
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rax
  int v69; // r9d
  double v70; // xmm0_8
  double v71; // xmm11_8
  double v72; // xmm2_8
  double *v73; // rdx
  double v74; // xmm0_8
  double v75; // xmm0_8
  double v76; // xmm0_8
  double v77; // xmm10_8
  double v78; // xmm2_8
  double v79; // xmm10_8
  double v80; // xmm1_8
  __int64 v81; // rcx
  double v82; // xmm14_8
  __int64 v83; // rdx
  double v84; // xmm13_8
  int *v85; // rax
  int *v86; // rdi
  __int64 v87; // rdx
  unsigned __int64 v88; // rbp
  __int64 v89; // rax
  double v90; // xmm1_8
  double v91; // xmm0_8
  double **v92; // r12
  double *v93; // r12
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rax
  int *v101; // rax
  _QWORD *v102; // r14
  double *v103; // r13
  __m128d *v104; // r12
  int v105; // eax
  int v106; // eax
  __m128d *v107; // r10
  double **v108; // r12
  __int64 v109; // rax
  unsigned int v110; // edx
  __int128 v111; // xmm0
  double *v112; // rcx
  int v113; // eax
  double *v114; // rdx
  double *v115; // rax
  __m128d *v116; // r10
  __int128 v117; // xmm2
  __int128 v118; // xmm1
  __int128 v119; // xmm0
  __int128 v120; // xmm3
  double *v121; // rax
  double *v122; // rdx
  double *v123; // rcx
  double *v124; // rax
  double *v125; // rdx
  __int128 v126; // xmm2
  __int128 v127; // xmm1
  __int128 v128; // xmm0
  __int128 v129; // xmm3
  __int64 v130; // r12
  char *v131; // rdi
  double v132; // xmm14_8
  __int64 v133; // rax
  double v134; // xmm0_8
  __m128d v135; // xmm5
  double v136; // xmm2_8
  double v137; // xmm4_8
  __int64 v138; // rsi
  int v139; // edi
  __int64 v140; // rdx
  __int64 v141; // rdi
  int *v142; // r11
  int *v143; // r8
  __int64 v144; // rsi
  double v145; // xmm0_8
  double *v146; // rbp
  double *v147; // rax
  double *v148; // rax
  double *v149; // rax
  double *v150; // rax
  double *v151; // rax
  double *v152; // rax
  double v153; // xmm1_8
  unsigned __int64 v154; // r8
  __int64 v155; // r11
  double *v156; // rcx
  __int64 v157; // rdx
  double v158; // xmm0_8
  double v159; // xmm2_8
  double v160; // xmm3_8
  double v161; // xmm3_8
  double v162; // xmm3_8
  double v163; // xmm3_8
  double v164; // xmm3_8
  double v165; // xmm3_8
  double *v166; // rax
  char *v167; // rsi
  double v168; // xmm0_8
  int v169; // ecx
  __int64 j; // rax
  double *v171; // rdx
  double *v172; // rdi
  double v173; // xmm0_8
  double *v174; // rdi
  double v175; // xmm0_8
  double *v176; // rdi
  double v177; // xmm0_8
  double *v178; // rdi
  double v179; // xmm0_8
  double *v180; // rdi
  double v181; // xmm0_8
  double v182; // xmm0_8
  _QWORD *v183; // rcx
  __int64 v184; // rsi
  __int64 v185; // rax
  __int64 v186; // rdi
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // r11
  double v190; // xmm0_8
  double v191; // xmm2_8
  double v192; // xmm0_8
  __int64 v193; // rax
  int m; // edx
  __int64 v195; // rcx
  unsigned int v196; // ebx
  double v197; // xmm0_8
  double *v198; // rbp
  __m128d v199; // xmm9
  _BOOL4 v200; // edx
  __m128d v201; // xmm9
  __int64 v202; // rax
  double *v203; // r11
  double *v204; // r9
  double *v205; // rsi
  double *v206; // r8
  double *v207; // rcx
  __m128d v208; // xmm14
  double *v209; // r12
  unsigned int v210; // r10d
  double *v211; // rdi
  double *v212; // rdx
  __m128d v213; // xmm13
  __m128d v214; // xmm12
  double *v215; // rbp
  __m128d v216; // xmm11
  __int64 v217; // rax
  __m128d v218; // xmm10
  __m128d v219; // xmm8
  signed int v220; // edx
  double v221; // xmm1_8
  int v222; // eax
  double v223; // xmm1_8
  double *v224; // rdx
  unsigned __int64 v225; // rax
  double v226; // xmm0_8
  double v227; // xmm0_8
  double v228; // xmm1_8
  double v229; // xmm2_8
  double v230; // xmm6_8
  double v231; // xmm5_8
  int v232; // ecx
  double v233; // xmm7_8
  double v234; // xmm1_8
  int *v235; // rax
  double v236; // xmm1_8
  bool v237; // bl
  bool v238; // si
  int v239; // edi
  __int64 v240; // rdx
  double *v241; // rax
  double *v242; // rcx
  __int64 v243; // r8
  __int128 v244; // xmm2
  __int128 v245; // xmm1
  __int128 v246; // xmm0
  __int128 v247; // xmm3
  __int64 v248; // rax
  double *v249; // rcx
  double *v250; // rax
  __int64 v251; // rsi
  int v252; // edi
  __int64 v253; // rdx
  __int64 v254; // rdi
  int *v255; // r11
  int *v256; // r8
  __int64 v257; // rsi
  double v258; // xmm1_8
  double *v259; // rdx
  double *v260; // rax
  __int128 v261; // xmm3
  __int128 v262; // xmm1
  __int128 v263; // xmm0
  __int128 v264; // xmm4
  double *v265; // rax
  double *v266; // rdx
  _QWORD *v267; // rax
  __int128 v268; // xmm2
  __int128 v269; // xmm1
  __int64 v270; // xmm0_8
  unsigned __int64 v271; // rbp
  _QWORD *v272; // rax
  _QWORD *v273; // rax
  _QWORD *v274; // rax
  _QWORD *v275; // rax
  _QWORD *v276; // rax
  double v277; // xmm4_8
  _QWORD *v278; // rax
  int v279; // ebx
  __int64 v280; // rcx
  unsigned __int64 v281; // rax
  int k; // edx
  double v283; // xmm0_8
  double *v284; // rax
  double v285; // xmm1_8
  double v286; // xmm0_8
  double v287; // xmm1_8
  __m128d v288; // xmm7
  double v289; // xmm8_8
  double v290; // xmm11_8
  double v291; // xmm10_8
  double v292; // xmm2_8
  __m128d v293; // xmm12
  __m128d v294; // xmm9
  __m128d v295; // xmm1
  __m128d v296; // xmm6
  __m128d v297; // xmm8
  __m128d v298; // xmm5
  __m128d v299; // xmm7
  __m128d v300; // xmm10
  __m128d v301; // xmm11
  __m128d v302; // xmm10
  __int64 v303; // r15
  __int64 v304; // rsi
  char *v305; // r14
  char *v306; // r13
  char *v307; // r12
  char *v308; // rbp
  int *v309; // r8
  char *v310; // rbx
  char *v311; // r11
  char *v312; // rdi
  double *v313; // rdx
  int *v314; // r15
  __int64 v315; // rax
  double v316; // xmm1_8
  double v317; // xmm11_8
  __int64 v318; // rbx
  __int64 v319; // rdx
  int v320; // ebp
  double v321; // xmm3_8
  __int64 v322; // rdi
  int v323; // r10d
  double v324; // xmm0_8
  __int64 v325; // rax
  double v326; // xmm1_8
  double v327; // xmm1_8
  double v328; // xmm1_8
  double v329; // xmm12_8
  __m128d v330; // xmm1
  double v331; // xmm12_8
  __int64 v332; // rax
  double v333; // xmm0_8
  __int64 v334; // rcx
  double v335; // xmm12_8
  double v336; // xmm0_8
  double v337; // xmm14_8
  __m128d v338; // xmm13
  double v339; // xmm1_8
  double v340; // xmm0_8
  double v341; // xmm1_8
  __int64 v342; // r8
  int *v343; // r9
  int *v344; // r10
  __int64 v345; // r8
  __int64 v346; // rax
  __int64 v347; // rcx
  double v348; // xmm0_8
  double *v349; // rdi
  double v350; // xmm0_8
  int *v351; // rax
  __int64 v352; // rcx
  __int64 ii; // r12
  char *v354; // rdi
  double *v355; // rdi
  void *v356; // rdi
  void **v357; // rbx
  double v358; // xmm0_8
  unsigned __int64 v359; // rax
  double v360; // xmm1_8
  double *v361; // rax
  double *v362; // rdx
  double *v363; // rdx
  double *v364; // rcx
  __int128 v365; // xmm2
  __int128 v366; // xmm1
  __int128 v367; // xmm0
  __int128 v368; // xmm3
  double *v369; // rdx
  double *v370; // rcx
  int *v371; // rdx
  int *v372; // rdi
  __int64 v373; // rsi
  double *v374; // rcx
  double *v375; // rax
  double *v376; // rdx
  __int128 v377; // xmm3
  __int128 v378; // xmm1
  __int128 v379; // xmm0
  __int128 v380; // xmm4
  unsigned __int64 v381; // rax
  double v382; // xmm2_8
  double v383; // xmm1_8
  double v384; // xmm0_8
  double v385; // xmm4_8
  double v386; // xmm5_8
  double *v387; // rdx
  unsigned __int64 v388; // rax
  double v389; // xmm0_8
  double *v390; // rsi
  __int64 v391; // rax
  double v392; // xmm0_8
  double v393; // xmm7_8
  __int64 v394; // rax
  unsigned int v395; // edx
  _BYTE *v396; // rax
  _BYTE *v397; // rdx
  int *v398; // rdx
  int *v399; // rdi
  __int64 v400; // rsi
  double *v401; // r11
  __int64 v402; // rax
  double v403; // xmm0_8
  double v404; // xmm4_8
  double v405; // xmm2_8
  __int64 v406; // rdx
  double *v407; // rcx
  double v408; // xmm1_8
  double v409; // xmm0_8
  double v410; // xmm1_8
  double v411; // xmm6_8
  double v412; // xmm2_8
  double v413; // xmm5_8
  double v414; // xmm4_8
  double v415; // xmm7_8
  double v416; // xmm9_8
  double v417; // xmm8_8
  double *v418; // rax
  double *v419; // rdx
  double *v420; // rcx
  __int128 v421; // xmm2
  __int128 v422; // xmm1
  __int128 v423; // xmm0
  __int128 v424; // xmm3
  double *v425; // rdx
  double *v426; // rcx
  __int64 v427; // r9
  double v428; // xmm5_8
  double *v429; // r12
  double v430; // xmm0_8
  double *v431; // r12
  double v432; // xmm0_8
  double *v433; // r12
  double v434; // xmm0_8
  double *v435; // r12
  double v436; // xmm0_8
  double *v437; // r12
  double *v438; // r12
  double v439; // xmm0_8
  double *v440; // r8
  double *v441; // rdx
  double v442; // xmm0_8
  double *v443; // rax
  __int64 v444; // r8
  double *v445; // rcx
  __int128 v446; // xmm2
  __int128 v447; // xmm1
  __int128 v448; // xmm0
  __int128 v449; // xmm3
  __int64 v450; // rax
  double *v451; // rcx
  double *v452; // rax
  double v453; // xmm1_8
  unsigned __int64 v454; // rax
  double v455; // xmm0_8
  __int64 *v456; // rax
  double *v457; // rax
  double *v458; // rdx
  double *v459; // rcx
  __int128 v460; // xmm2
  __int128 v461; // xmm1
  __int128 v462; // xmm0
  __int128 v463; // xmm3
  char *v464; // r11
  char *v465; // rbx
  char *v466; // rbp
  char *v467; // r12
  char *v468; // r13
  char *v469; // r14
  char *v470; // r15
  int *v471; // rdx
  int *v472; // r8
  __int64 v473; // rsi
  int *v474; // rax
  int *v475; // r8
  __int64 v476; // rcx
  double *v477; // rdi
  double v478; // xmm0_8
  int *v479; // rax
  __int64 v480; // rcx
  __int64 v481; // rdx
  double v482; // xmm9_8
  double *v483; // rax
  double v484; // xmm9_8
  double v485; // xmm0_8
  double v486; // xmm0_8
  double v487; // xmm0_8
  double v488; // xmm10_8
  double v489; // xmm1_8
  __int64 v490; // rax
  double *v491; // rbx
  double v492; // xmm11_8
  double *v493; // rcx
  double *v494; // rax
  double *v495; // rdx
  __int128 v496; // xmm3
  __int128 v497; // xmm1
  __int128 v498; // xmm0
  __int128 v499; // xmm4
  double *v500; // rax
  double *v501; // rcx
  __int64 v502; // rdx
  double *v503; // rsi
  __int128 v504; // xmm2
  __int128 v505; // xmm1
  __int128 v506; // xmm0
  __int128 v507; // xmm3
  __int64 v508; // rax
  unsigned __int64 v509; // rax
  __int64 v510; // rax
  double v511; // xmm0_8
  double v512; // xmm4_8
  double v513; // xmm1_8
  unsigned __int64 v514; // rax
  double *v515; // rsi
  __int64 v516; // rax
  double v517; // xmm0_8
  double v518; // xmm0_8
  double v519; // xmm0_8
  double *v520; // rax
  double *v521; // rdx
  double *v522; // rdx
  double *v523; // rcx
  __int128 v524; // xmm2
  __int128 v525; // xmm1
  __int128 v526; // xmm0
  __int128 v527; // xmm3
  double *v528; // rdx
  double *v529; // rcx
  double *v530; // rax
  double *v531; // rdx
  double *v532; // rcx
  __int128 v533; // xmm2
  __int128 v534; // xmm1
  __int128 v535; // xmm0
  __int128 v536; // xmm3
  double *v537; // rdx
  __int64 v538; // rax
  __int64 v539; // rdx
  double v540; // xmm1_8
  double v542; // xmm0_8
  double v543; // xmm1_8
  double *v544; // rdx
  double *v545; // rcx
  __int128 v546; // xmm2
  __int128 v547; // xmm1
  __int128 v548; // xmm0
  __int128 v549; // xmm3
  unsigned __int64 v550; // rax
  char *v551; // rdx
  char v552; // cl
  unsigned __int64 v554; // [rsp+8h] [rbp-3E0h]
  _QWORD *v555; // [rsp+8h] [rbp-3E0h]
  double *v556; // [rsp+8h] [rbp-3E0h]
  int v557; // [rsp+8h] [rbp-3E0h]
  double *v558; // [rsp+8h] [rbp-3E0h]
  int v559; // [rsp+10h] [rbp-3D8h]
  int *v560; // [rsp+10h] [rbp-3D8h]
  int *v561; // [rsp+18h] [rbp-3D0h]
  int v562; // [rsp+18h] [rbp-3D0h]
  double *v564; // [rsp+28h] [rbp-3C0h]
  double *v565; // [rsp+28h] [rbp-3C0h]
  int v566; // [rsp+28h] [rbp-3C0h]
  double v567; // [rsp+28h] [rbp-3C0h]
  double *v568; // [rsp+30h] [rbp-3B8h]
  int v570; // [rsp+40h] [rbp-3A8h]
  double *v571; // [rsp+48h] [rbp-3A0h]
  char *v574; // [rsp+58h] [rbp-390h]
  char *v575; // [rsp+58h] [rbp-390h]
  double *v576; // [rsp+58h] [rbp-390h]
  __m128d *v577; // [rsp+58h] [rbp-390h]
  __m128d *v578; // [rsp+58h] [rbp-390h]
  double *v580; // [rsp+70h] [rbp-378h]
  double *v581; // [rsp+78h] [rbp-370h]
  double *v582; // [rsp+80h] [rbp-368h]
  double v583; // [rsp+88h] [rbp-360h]
  double *v584; // [rsp+90h] [rbp-358h]
  void *v585; // [rsp+98h] [rbp-350h]
  double *v586; // [rsp+A0h] [rbp-348h]
  double v587; // [rsp+A8h] [rbp-340h]
  __int64 v588; // [rsp+B0h] [rbp-338h]
  double v589; // [rsp+C0h] [rbp-328h]
  __m128d *v590; // [rsp+C8h] [rbp-320h]
  double **v591; // [rsp+C8h] [rbp-320h]
  double *v592; // [rsp+C8h] [rbp-320h]
  char *v593; // [rsp+C8h] [rbp-320h]
  double *v594; // [rsp+C8h] [rbp-320h]
  __m128d *v595; // [rsp+C8h] [rbp-320h]
  double *v596; // [rsp+D0h] [rbp-318h]
  char *v597; // [rsp+D0h] [rbp-318h]
  double *v598; // [rsp+D0h] [rbp-318h]
  int *v599; // [rsp+D0h] [rbp-318h]
  double *v600; // [rsp+D0h] [rbp-318h]
  double v601; // [rsp+D0h] [rbp-318h]
  __m128d *v602; // [rsp+D0h] [rbp-318h]
  __m128d *v603; // [rsp+D8h] [rbp-310h]
  double *v604; // [rsp+D8h] [rbp-310h]
  char *v605; // [rsp+D8h] [rbp-310h]
  double *v606; // [rsp+D8h] [rbp-310h]
  double *v607; // [rsp+D8h] [rbp-310h]
  __m128d *v608; // [rsp+D8h] [rbp-310h]
  double *v609; // [rsp+E0h] [rbp-308h]
  char *v610; // [rsp+E0h] [rbp-308h]
  double *v611; // [rsp+E0h] [rbp-308h]
  double *v612; // [rsp+E0h] [rbp-308h]
  double v613; // [rsp+E0h] [rbp-308h]
  double *v614; // [rsp+E8h] [rbp-300h]
  char *v615; // [rsp+E8h] [rbp-300h]
  double *v616; // [rsp+E8h] [rbp-300h]
  double *v617; // [rsp+E8h] [rbp-300h]
  double *v618; // [rsp+F0h] [rbp-2F8h]
  char *v619; // [rsp+F0h] [rbp-2F8h]
  double *v620; // [rsp+F0h] [rbp-2F8h]
  double *v621; // [rsp+F0h] [rbp-2F8h]
  __int64 v622; // [rsp+F8h] [rbp-2F0h]
  double *v623; // [rsp+100h] [rbp-2E8h]
  char **v624; // [rsp+108h] [rbp-2E0h]
  char *v625; // [rsp+110h] [rbp-2D8h]
  int v626; // [rsp+118h] [rbp-2D0h]
  int v627; // [rsp+11Ch] [rbp-2CCh]
  __int64 v628; // [rsp+120h] [rbp-2C8h]
  double v629; // [rsp+128h] [rbp-2C0h]
  double **v630; // [rsp+130h] [rbp-2B8h]
  size_t n; // [rsp+138h] [rbp-2B0h]
  int v632; // [rsp+140h] [rbp-2A8h]
  int v633; // [rsp+144h] [rbp-2A4h]
  _BYTE *v634; // [rsp+148h] [rbp-2A0h]
  double *v635; // [rsp+160h] [rbp-288h]
  double *v637; // [rsp+170h] [rbp-278h]
  double v638; // [rsp+170h] [rbp-278h]
  double v639; // [rsp+170h] [rbp-278h]
  double **v640; // [rsp+170h] [rbp-278h]
  double v641; // [rsp+178h] [rbp-270h]
  unsigned __int64 v642; // [rsp+180h] [rbp-268h]
  double v643; // [rsp+188h] [rbp-260h]
  double v644; // [rsp+190h] [rbp-258h]
  double v645; // [rsp+198h] [rbp-250h]
  double *v646; // [rsp+1A0h] [rbp-248h]
  double v647; // [rsp+1A8h] [rbp-240h]
  int v648; // [rsp+1B0h] [rbp-238h]
  int v649; // [rsp+1B4h] [rbp-234h]
  __int64 v651; // [rsp+1C0h] [rbp-228h]
  unsigned int v652; // [rsp+1C8h] [rbp-220h]
  unsigned int v653; // [rsp+1CCh] [rbp-21Ch]
  double v654; // [rsp+1D0h] [rbp-218h]
  double v655; // [rsp+1D8h] [rbp-210h]
  double v656; // [rsp+1E0h] [rbp-208h]
  double v657; // [rsp+1E8h] [rbp-200h]
  double v658; // [rsp+1F0h] [rbp-1F8h]
  double v659; // [rsp+1F8h] [rbp-1F0h]
  double v660; // [rsp+200h] [rbp-1E8h]
  int *v661; // [rsp+208h] [rbp-1E0h]
  double *v662; // [rsp+208h] [rbp-1E0h]
  double v663; // [rsp+208h] [rbp-1E0h]
  double **v664; // [rsp+210h] [rbp-1D8h]
  double *v665; // [rsp+210h] [rbp-1D8h]
  double v666; // [rsp+210h] [rbp-1D8h]
  _QWORD *v667; // [rsp+218h] [rbp-1D0h]
  double *v668; // [rsp+218h] [rbp-1D0h]
  double v669; // [rsp+218h] [rbp-1D0h]
  double *v670; // [rsp+220h] [rbp-1C8h]
  double *v671; // [rsp+220h] [rbp-1C8h]
  double v672; // [rsp+220h] [rbp-1C8h]
  double *v673; // [rsp+228h] [rbp-1C0h]
  double *v674; // [rsp+228h] [rbp-1C0h]
  double v675; // [rsp+228h] [rbp-1C0h]
  double *v676; // [rsp+228h] [rbp-1C0h]
  double v677; // [rsp+230h] [rbp-1B8h]
  __int64 v678; // [rsp+238h] [rbp-1B0h]
  double v679; // [rsp+248h] [rbp-1A0h]
  int v680; // [rsp+258h] [rbp-190h]
  int v681; // [rsp+260h] [rbp-188h]
  __int64 v682; // [rsp+260h] [rbp-188h]
  __int64 v683; // [rsp+270h] [rbp-178h]
  double *v684; // [rsp+278h] [rbp-170h]
  double v685; // [rsp+280h] [rbp-168h]
  void **v689; // [rsp+2A0h] [rbp-148h]
  _BYTE *v690; // [rsp+2B0h] [rbp-138h]
  double *v691; // [rsp+2C0h] [rbp-128h]
  double *v692; // [rsp+2C8h] [rbp-120h]
  unsigned int v693; // [rsp+2DCh] [rbp-10Ch]
  _BYTE *v694; // [rsp+2F8h] [rbp-F0h]
  _BYTE *v695; // [rsp+300h] [rbp-E8h]
  int v697; // [rsp+318h] [rbp-D0h]
  double *v698; // [rsp+320h] [rbp-C8h]
  double **v699; // [rsp+328h] [rbp-C0h]
  __m128d *v700; // [rsp+330h] [rbp-B8h]
  int v701; // [rsp+338h] [rbp-B0h]
  _BYTE *v702; // [rsp+348h] [rbp-A0h]
  __int64 v703; // [rsp+350h] [rbp-98h]
  int v704; // [rsp+358h] [rbp-90h]
  int v705; // [rsp+35Ch] [rbp-8Ch]
  double *v706; // [rsp+360h] [rbp-88h] BYREF
  double *v707; // [rsp+368h] [rbp-80h]
  double *v708; // [rsp+370h] [rbp-78h]
  double *v709; // [rsp+378h] [rbp-70h]
  double *v710; // [rsp+380h] [rbp-68h]
  double *v711; // [rsp+388h] [rbp-60h]
  double *v712; // [rsp+390h] [rbp-58h]
  double *v713; // [rsp+398h] [rbp-50h]
  double *v714; // [rsp+3A0h] [rbp-48h]
  char v715; // [rsp+3A8h] [rbp-40h] BYREF

  v647 = 0.5 / a7;
  v634 = (_BYTE *)operator new[](2 * a4);
  v554 = a4;
  v642 = (unsigned __int64)&v634[a4];
  v589 = 999999.0;
  if ( (a27 & 0x80u) == 0 )
    v589 = 90.0;
  v624 = (char **)operator new[](0x38u);
  v630 = (double **)operator new[](0x38u);
  v29 = (_QWORD *)operator new[](0x38u);
  v30 = operator new[](0x38u);
  v31 = operator new[](0x38u);
  v32 = (double *)operator new[](0x38u);
  v625 = (char *)operator new[](0x38u);
  *v624 = (char *)a14;
  n = 8LL * a3;
  if ( (unsigned __int64)a3 > 0xFFFFFFFFFFFFFFFLL )
  {
    *v630 = (double *)operator new[](0x38u);
    *v29 = operator new[](0x38u);
    goto LABEL_662;
  }
  v561 = (int *)v31;
  for ( i = 0; !i; ++i )
  {
    *v630 = (double *)operator new[](0x38u);
    *v29 = operator new[](0x38u);
LABEL_5:
    ;
  }
  v624[i] = (char *)operator new[](n);
  v630[i] = (double *)operator new[](0x38u);
  v29[i] = operator new[](0x38u);
  if ( (_DWORD)i != 6 )
    goto LABEL_5;
  v34 = v561;
  if ( a3 <= 0 )
  {
    v562 = 0;
  }
  else
  {
    v35 = ((unsigned __int64)a18 >> 3) & 1;
    if ( (unsigned int)(a3 - 1) <= 4 )
    {
      v562 = 0;
      v47 = 0;
LABEL_15:
      v562 += a18[v47] - a17[v47] > 0.00000001;
      if ( a3 > (int)(v47 + 1) )
      {
        v48 = (a18[v47 + 1] - a17[v47 + 1] > 0.00000001) + v562;
        v562 = v48;
        if ( a3 > (int)(v47 + 2) )
        {
          v49 = (a18[v47 + 2] - a17[v47 + 2] > 0.00000001) + v48;
          v50 = v47 + 3;
          v562 = v49;
          if ( a3 > (int)(v47 + 3) )
          {
            v51 = v47 + 4;
            v52 = (a18[v50] - a17[v50] > 0.00000001) + v49;
            v562 = v52;
            if ( a3 > v51 )
              v562 = (a18[v51] - a17[v51] > 0.00000001) + v52;
          }
        }
      }
    }
    else
    {
      if ( (_DWORD)v35 )
      {
        v36 = a3;
        v37 = 1;
        v38 = *a18 - *a17 > 0.00000001;
      }
      else
      {
        v38 = 0;
        v37 = 0;
        v36 = a3;
      }
      v39 = v36 - v35;
      v40 = v35;
      v41 = 0;
      v42 = &a17[v40];
      v43 = &a18[v40];
      v44 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_28D790);
      do
      {
        ++v44;
        v42 += 4;
        v43 += 4;
        v41 = _mm_add_epi32(
                v41,
                (__m128i)_mm_shuffle_ps(
                           (__m128)_mm_and_si128(
                                     (__m128i)_mm_cmplt_pd(
                                                (__m128d)xmmword_294170,
                                                _mm_sub_pd(*(__m128d *)(v43 - 4), *(__m128d *)(v42 - 4))),
                                     si128),
                           (__m128)_mm_and_si128(
                                     (__m128i)_mm_cmplt_pd(
                                                (__m128d)xmmword_294170,
                                                _mm_sub_pd(*(__m128d *)(v43 - 2), *(__m128d *)(v42 - 2))),
                                     si128),
                           136));
      }
      while ( v39 >> 2 > v44 );
      v46 = _mm_add_epi32(v41, _mm_srli_si128(v41, 8));
      v562 = v38 + _mm_cvtsi128_si32(_mm_add_epi32(v46, _mm_srli_si128(v46, 4)));
      v47 = (v39 & 0xFFFFFFFC) + v37;
      if ( (v39 & 0xFFFFFFFC) != v39 )
        goto LABEL_15;
    }
  }
  if ( v554 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_662;
  v628 = v554;
  v581 = (double *)operator new[](8 * v554);
  memset(a5, 0, n);
  if ( a4 > 0 )
  {
    v53 = 4LL * (unsigned int)(a4 - 1) + 4;
    v54 = 0;
    while ( 1 )
    {
      v55 = a23[v54 / 4];
      v56 = a6[v54 / 4];
      v57 = a16[v54 / 4] * a9;
      v58 = v55 + *(_DWORD *)(a24 + v54);
      if ( a21 )
        break;
      if ( v58 <= (int)v55 )
      {
LABEL_27:
        v581[v54 / 4] = v57;
        v54 += 4LL;
        if ( v53 == v54 )
          goto LABEL_28;
      }
      else
      {
        v85 = &a22[(int)v55];
        v86 = &a22[(int)v55 + 1 + (unsigned __int64)(unsigned int)(*(_DWORD *)(a24 + v54) - 1)];
        do
        {
          v87 = *v85++;
          v57 = v57 + *(double *)(a25 + 8 * v87);
          a5[v87] = a5[v87] + v56;
        }
        while ( v86 != v85 );
        v581[v54 / 4] = v57;
        v54 += 4LL;
        if ( v53 == v54 )
          goto LABEL_28;
      }
    }
    if ( v58 > (int)v55 )
    {
      v59 = &a21[2 * v55];
      v60 = (unsigned int)(*(_DWORD *)(a24 + v54) - 1) + 1LL;
      v61 = &a22[v55];
      v62 = 0;
      do
      {
        v63 = v61[v62];
        v64 = *(double *)&v59[2 * v62++];
        v57 = v57 + *(double *)(a25 + 8 * v63) * v64;
        a5[v63] = v64 * v56 + a5[v63];
      }
      while ( v60 != v62 );
    }
    goto LABEL_27;
  }
LABEL_28:
  if ( v562 )
  {
    v65 = 8LL * v562;
    v582 = (double *)operator new[](4LL * v562);
    v568 = (double *)operator new[](v65);
    v584 = (double *)operator new[](v65);
    v571 = (double *)operator new[](v65);
    v646 = (double *)operator new[](v65);
    v66 = operator new[](v65);
    v684 = (double *)v66;
    if ( a3 > 0 )
    {
      v555 = v29;
      v67 = v66;
      v68 = 0;
      v69 = 0;
      while ( 2 )
      {
        v78 = a18[v68];
        v79 = a17[v68];
        v80 = v78 - v79;
        if ( v78 - v79 <= 0.00000001 )
          goto LABEL_36;
        v81 = v69;
        v82 = fabs(v78);
        v83 = v69;
        v84 = fabs(v79);
        *(double *)(v67 + v83 * 8) = v78;
        if ( v82 > v84 )
        {
          v70 = v79;
          v71 = -1.0;
          if ( v84 > 1.0e10 )
          {
LABEL_40:
            if ( v78 < 0.0 || v79 > 0.0 )
              abort();
            if ( v82 <= v84 )
            {
              a18[v68] = 9000000000.0;
              *(_QWORD *)(v67 + 8LL * v69) = 0x4200C388D0000000LL;
              v70 = 9000000000.0;
              v80 = 9000000000.0 - a17[v68];
              v71 = 1.0;
            }
            else
            {
              a17[v68] = -9000000000.0;
              v70 = -9000000000.0;
              v71 = -1.0;
              v80 = a18[v68] + 9000000000.0;
            }
          }
        }
        else
        {
          v70 = v78;
          v71 = 1.0;
          if ( v82 > 1.0e10 )
            goto LABEL_40;
        }
        a18[v68] = v70;
        v584[v69] = v71;
        v72 = a5[v68];
        if ( v80 < 1.0e31 )
        {
          v73 = &v568[v83];
          v74 = (v70 - v72) / v71;
          *v73 = v74;
          v75 = fmax(0.0, v74);
          goto LABEL_34;
        }
        v73 = &v568[v83];
        v80 = 1.0e31;
        v75 = (v70 - v72) / v71;
        *v73 = v75;
        if ( v75 >= 0.0 )
        {
LABEL_34:
          *v73 = v75;
          v76 = fmin(v80, v75);
        }
        else
        {
          *v73 = 0.0;
          v80 = 1.0e31;
          v76 = 0.0;
        }
        *v73 = v76;
        v77 = *(double *)(a25 + 8 * v68);
        ++v69;
        *((_DWORD *)v582 + v81) = v68;
        v571[v81] = v80;
        v646[v81] = v77 * v71;
        a5[v68] = v76 * v71 + v72;
LABEL_36:
        if ( (unsigned int)(a3 - 1) + 1LL == ++v68 )
        {
          v562 = v69;
          v29 = v555;
          v627 = a4 + v69;
          v88 = 8LL * (a4 + v69);
          v554 = a4 + v69;
          goto LABEL_55;
        }
        continue;
      }
    }
    v88 = 8 * v554;
    v562 = 0;
    v658 = a10;
    v627 = a4;
  }
  else
  {
    v88 = 8 * v554;
    v627 = a4;
    if ( a3 <= 0 )
    {
      v684 = nullptr;
      v646 = nullptr;
      v571 = nullptr;
      v658 = a10;
      v584 = nullptr;
      v568 = nullptr;
      v582 = nullptr;
    }
    else
    {
      v684 = nullptr;
      v646 = nullptr;
      v571 = nullptr;
      v584 = nullptr;
      v568 = nullptr;
      v582 = nullptr;
LABEL_55:
      v89 = 0;
      v90 = a10;
      do
      {
        v91 = *(double *)(a25 + 8 * v89) * a5[v89];
        ++v89;
        v90 = v90 + v91;
      }
      while ( a3 > (int)v89 );
      v658 = v90;
    }
  }
  if ( (a27 & 0x100) != 0 )
  {
    v500 = (double *)operator new[](v628 * 8);
    v580 = v500;
    if ( a4 )
    {
      v501 = a6;
      if ( a6 != v500 )
      {
        if ( a4 >> 3 > 0 )
        {
          v502 = (unsigned int)((a4 >> 3) - 1);
          v503 = &v500[8 * v502 + 8];
          do
          {
            v504 = *((_OWORD *)v501 + 1);
            v500 += 8;
            v501 += 8;
            v505 = *((_OWORD *)v501 - 2);
            v506 = *((_OWORD *)v501 - 1);
            v507 = *((_OWORD *)v501 - 4);
            *((_OWORD *)v500 - 3) = v504;
            *((_OWORD *)v500 - 4) = v507;
            *((_OWORD *)v500 - 2) = v505;
            *((_OWORD *)v500 - 1) = v506;
          }
          while ( v503 != v500 );
          v508 = ((int)v502 + 1LL) << 6;
          v501 = (double *)((char *)a6 + v508);
          v500 = (double *)((char *)v580 + v508);
        }
        switch ( a4 % 8 )
        {
          case 1:
            goto LABEL_522;
          case 2:
            goto LABEL_521;
          case 3:
            goto LABEL_520;
          case 4:
            goto LABEL_519;
          case 5:
            goto LABEL_518;
          case 6:
            goto LABEL_517;
          case 7:
            v500[6] = v501[6];
LABEL_517:
            v500[5] = v501[5];
LABEL_518:
            v500[4] = v501[4];
LABEL_519:
            v500[3] = v501[3];
LABEL_520:
            v500[2] = v501[2];
LABEL_521:
            v500[1] = v501[1];
LABEL_522:
            *v500 = *v501;
            break;
          default:
            break;
        }
      }
    }
    if ( v562 )
    {
      v585 = (void *)operator new[](8LL * v562);
      memset(v585, 0, 8LL * v562);
    }
    else
    {
      v585 = nullptr;
    }
    v658 = a10;
    v586 = a16;
  }
  else
  {
    v580 = nullptr;
    v586 = v581;
    v585 = v646;
  }
  if ( v554 > 0xFFFFFFFFFFFFFFFLL )
LABEL_662:
    __cxa_throw_bad_array_new_length();
  v556 = (double *)v30;
  v92 = &v706;
  do
    *v92++ = (double *)operator new[](v88);
  while ( &v715 != (char *)v92 );
  v689 = (void **)v92;
  v93 = v556;
  v94 = *a2;
  v95 = *(int *)(*a2 + 108);
  if ( (int)v95 > 0 )
  {
    v96 = 0;
    do
    {
      v634[v96] = 2 * ((*(_BYTE *)(*(_QWORD *)(v94 + 264) + v96) & 7) == 5);
      ++v96;
    }
    while ( (unsigned int)(v95 - 1) + 1LL != v96 );
  }
  memset(&v634[v95], 0, a4 - (int)v95);
  v704 = a4;
  v703 = 0;
  v705 = 0;
  if ( a26 <= 0 )
  {
    v570 = 0;
    v657 = 9.999999999999999e59;
    v587 = 9.999999999999999e59;
    v656 = 0.0;
    v679 = 1.0e30;
    goto LABEL_207;
  }
  v633 = a4 >> 3;
  v649 = v562 >> 3;
  v648 = a4 % 8;
  v632 = a27 & 3;
  v678 = ((unsigned int)((a4 >> 3) - 1) + 1LL) << 6;
  v623 = (double *)((char *)a6 + v678);
  v651 = ((unsigned int)((v562 >> 3) - 1) + 1LL) << 6;
  v635 = (double *)((char *)v568 + v651);
  v693 = a3 - (((unsigned __int64)a18 >> 3) & 1);
  v97 = ((unsigned __int64)a18 >> 3) & 1;
  v691 = &a5[v97];
  v692 = &a18[v97];
  v701 = (v693 & 0xFFFFFFFE) + (((unsigned __int64)a18 >> 3) & 1);
  v98 = (unsigned int)(a4 - 1) + 1LL;
  v588 = 8LL * (unsigned int)(a3 - 1) + 8;
  v622 = 4 * v98;
  v683 = 8 * v98;
  v99 = 8LL * ((a4 >> 3) & 0xFFFFFFFE);
  v694 = (_BYTE *)(v642 + v99);
  v695 = &v634[v99];
  v100 = 8 * ((unsigned int)((a4 >> 3) - 1) + 1LL);
  v702 = &v634[v100];
  v690 = (_BYTE *)(v642 + v100);
  v641 = 1.0e70;
  v645 = 1.0e70;
  v644 = 1.0e70;
  v643 = 1.0e70;
  v660 = 1.0e70;
  v685 = 1.0e30;
  v101 = v34;
  v102 = v29;
  v659 = 1.0e30;
  v103 = v556;
  v557 = -1;
  v655 = 1.0e30;
  v570 = 0;
  v104 = (__m128d *)v101;
  v654 = 1.0e30;
  v629 = 0.0;
  v657 = 9.999999999999999e59;
  v656 = 0.0;
  v587 = 9.999999999999999e59;
  v679 = 1.0e30;
  while ( 2 )
  {
    v652 = v570 % 0xAu;
    if ( (a27 & 0x10) != 0 )
    {
      if ( (int)(4 * (5 * (v570 / 0x14u) + 5) - 15) <= v570 && (v570 & 1) == 0 )
      {
        v520 = v713;
        v713 = v712;
        v712 = v711;
        v711 = v710;
        v710 = v709;
        v709 = v708;
        v708 = v707;
        v521 = v706;
        v706 = v520;
        v707 = v521;
        v522 = a6;
        if ( a6 != v520 && a4 )
        {
          if ( v633 <= 0 )
          {
            v528 = v520;
            v529 = a6;
          }
          else
          {
            v523 = v520;
            do
            {
              v524 = *((_OWORD *)v522 + 1);
              v523 += 8;
              v522 += 8;
              v525 = *((_OWORD *)v522 - 2);
              v526 = *((_OWORD *)v522 - 1);
              v527 = *((_OWORD *)v522 - 4);
              *((_OWORD *)v523 - 3) = v524;
              *((_OWORD *)v523 - 4) = v527;
              *((_OWORD *)v523 - 2) = v525;
              *((_OWORD *)v523 - 1) = v526;
            }
            while ( v623 != v522 );
            v528 = (double *)((char *)v520 + v678);
            v529 = (double *)((char *)a6 + v678);
          }
          switch ( v648 )
          {
            case 1:
              goto LABEL_627;
            case 2:
              goto LABEL_626;
            case 3:
              goto LABEL_625;
            case 4:
              goto LABEL_624;
            case 5:
              goto LABEL_623;
            case 6:
              goto LABEL_622;
            case 7:
              v528[6] = v529[6];
LABEL_622:
              v528[5] = v529[5];
LABEL_623:
              v528[4] = v529[4];
LABEL_624:
              v528[3] = v529[3];
LABEL_625:
              v528[2] = v529[2];
LABEL_626:
              v528[1] = v529[1];
LABEL_627:
              *v528 = *v529;
              break;
            default:
              break;
          }
        }
        v457 = &v520[v628];
        if ( v562 )
        {
          v544 = v568;
          if ( v457 != v568 )
          {
            if ( v649 <= 0 )
            {
              v458 = v568;
            }
            else
            {
              v545 = (double *)((char *)v457 + v651);
              do
              {
                v546 = *((_OWORD *)v544 + 1);
                v457 += 8;
                v544 += 8;
                v547 = *((_OWORD *)v544 - 2);
                v548 = *((_OWORD *)v544 - 1);
                v549 = *((_OWORD *)v544 - 4);
                *((_OWORD *)v457 - 3) = v546;
                *((_OWORD *)v457 - 4) = v549;
                *((_OWORD *)v457 - 2) = v547;
                *((_OWORD *)v457 - 1) = v548;
              }
              while ( v545 != v457 );
              v457 = v545;
              v458 = &v568[8 * (unsigned int)((v562 >> 3) - 1) + 8];
            }
            switch ( v562 & 7 )
            {
              case 0:
                break;
              case 1:
                goto LABEL_574;
              case 2:
                goto LABEL_573;
              case 3:
                goto LABEL_572;
              case 4:
                goto LABEL_571;
              case 5:
                goto LABEL_570;
              case 6:
                goto LABEL_569;
              case 7:
                goto LABEL_568;
            }
          }
        }
      }
    }
    else if ( !v652 )
    {
      v361 = v713;
      v713 = v712;
      v712 = v711;
      v711 = v710;
      v710 = v709;
      v709 = v708;
      v708 = v707;
      v362 = v706;
      v706 = v361;
      v707 = v362;
      v363 = a6;
      if ( a6 != v361 && a4 )
      {
        if ( v633 <= 0 )
        {
          v370 = a6;
          v369 = v361;
        }
        else
        {
          v364 = v361;
          do
          {
            v365 = *((_OWORD *)v363 + 1);
            v364 += 8;
            v363 += 8;
            v366 = *((_OWORD *)v363 - 2);
            v367 = *((_OWORD *)v363 - 1);
            v368 = *((_OWORD *)v363 - 4);
            *((_OWORD *)v364 - 3) = v365;
            *((_OWORD *)v364 - 4) = v368;
            *((_OWORD *)v364 - 2) = v366;
            *((_OWORD *)v364 - 1) = v367;
          }
          while ( v623 != v363 );
          v369 = (double *)((char *)v361 + v678);
          v370 = (double *)((char *)a6 + v678);
        }
        switch ( v648 )
        {
          case 1:
            goto LABEL_450;
          case 2:
            goto LABEL_449;
          case 3:
            goto LABEL_448;
          case 4:
            goto LABEL_447;
          case 5:
            goto LABEL_446;
          case 6:
            goto LABEL_445;
          case 7:
            v369[6] = v370[6];
LABEL_445:
            v369[5] = v370[5];
LABEL_446:
            v369[4] = v370[4];
LABEL_447:
            v369[3] = v370[3];
LABEL_448:
            v369[2] = v370[2];
LABEL_449:
            v369[1] = v370[1];
LABEL_450:
            *v369 = *v370;
            break;
          default:
            break;
        }
      }
      v457 = &v361[v628];
      if ( v562 )
      {
        v458 = v568;
        if ( v457 != v568 )
        {
          if ( v649 > 0 )
          {
            v459 = (double *)((char *)v457 + v651);
            do
            {
              v460 = *((_OWORD *)v458 + 1);
              v457 += 8;
              v458 += 8;
              v461 = *((_OWORD *)v458 - 2);
              v462 = *((_OWORD *)v458 - 1);
              v463 = *((_OWORD *)v458 - 4);
              *((_OWORD *)v457 - 3) = v460;
              *((_OWORD *)v457 - 4) = v463;
              *((_OWORD *)v457 - 2) = v461;
              *((_OWORD *)v457 - 1) = v462;
            }
            while ( v459 != v457 );
            v457 = v459;
            v458 = &v568[8 * (unsigned int)((v562 >> 3) - 1) + 8];
          }
          switch ( v562 & 7 )
          {
            case 0:
              break;
            case 1:
              goto LABEL_574;
            case 2:
              goto LABEL_573;
            case 3:
              goto LABEL_572;
            case 4:
              goto LABEL_571;
            case 5:
              goto LABEL_570;
            case 6:
              goto LABEL_569;
            case 7:
LABEL_568:
              v457[6] = v458[6];
LABEL_569:
              v457[5] = v458[5];
LABEL_570:
              v457[4] = v458[4];
LABEL_571:
              v457[3] = v458[3];
LABEL_572:
              v457[2] = v458[2];
LABEL_573:
              v457[1] = v458[1];
LABEL_574:
              *v457 = *v458;
              break;
          }
        }
      }
    }
    if ( v570 != 20 * (v570 / 0x14u) )
      goto LABEL_281;
    v680 = -v557;
    v105 = 1664525 * *a28 + 1013904223;
    *a28 = v105;
    v106 = (int)((double)v105 * 2.328306436538696e-10 * (double)a4);
    if ( a4 == v106 )
      v106 = a4 - 1;
    LODWORD(v703) = v106;
    if ( v557 == -1 )
    {
      v704 = a4;
      HIDWORD(v703) = 0;
      v705 = v106;
    }
    else
    {
      v704 = -1;
      v705 = v106;
      HIDWORD(v703) = a4 - 1;
    }
    v107 = v104;
    v108 = v630;
    v559 = 0;
    v626 = 0;
    v653 = v570 % 0x64u;
    v583 = 1.0e70;
    while ( 2 )
    {
      while ( 2 )
      {
        ++v559;
        if ( (double)v570 <= v589 || v626 > 1 || v559 > 4 )
          goto LABEL_195;
        if ( a3 > 0 )
        {
          if ( (unsigned int)a3 > 0xD && (a18 >= a5 + 2 || a5 >= a18 + 2) )
          {
            if ( 2 - (unsigned int)((((unsigned __int64)a18 >> 3) & 1) == 0) > a3 - 1 )
            {
              v112 = a5;
              *a5 = -*a18;
              v113 = 1;
              goto LABEL_89;
            }
            if ( (((unsigned __int64)a18 >> 3) & 1) != 0 )
              *a5 = -*a18;
            v109 = 0;
            v110 = 0;
            do
            {
              ++v110;
              *(double *)&v111 = -v692[v109];
              *((double *)&v111 + 1) = -v692[v109 + 1];
              *(_OWORD *)&v691[v109] = v111;
              v109 += 2;
            }
            while ( v110 < v693 >> 1 );
            if ( (v693 & 0xFFFFFFFE) != v693 )
            {
              v112 = a5;
              a5[v701] = -a18[v701];
              v113 = v701 + 1;
              if ( a3 > v701 + 1 )
LABEL_89:
                v112[v113] = -a18[v113];
            }
          }
          else
          {
            v514 = 0;
            do
            {
              a5[v514 / 8] = -a18[v514 / 8];
              v514 += 8LL;
            }
            while ( v588 != v514 );
          }
        }
        v590 = v107;
        memset(a14, 0, n);
        v114 = v713;
        v115 = a6;
        v116 = v590;
        v564 = v713;
        if ( v713 != a6 && a4 )
        {
          if ( v633 <= 0 )
          {
            v121 = v713;
            v122 = a6;
          }
          else
          {
            do
            {
              v117 = *((_OWORD *)v115 + 1);
              v115 += 8;
              v114 += 8;
              v118 = *((_OWORD *)v115 - 2);
              v119 = *((_OWORD *)v115 - 1);
              v120 = *((_OWORD *)v115 - 4);
              *((_OWORD *)v114 - 3) = v117;
              *((_OWORD *)v114 - 4) = v120;
              *((_OWORD *)v114 - 2) = v118;
              *((_OWORD *)v114 - 1) = v119;
            }
            while ( v623 != v115 );
            v121 = (double *)((char *)v564 + v678);
            v122 = (double *)((char *)a6 + v678);
          }
          switch ( v648 )
          {
            case 1:
              goto LABEL_102;
            case 2:
              goto LABEL_101;
            case 3:
              goto LABEL_100;
            case 4:
              goto LABEL_99;
            case 5:
              goto LABEL_98;
            case 6:
              goto LABEL_97;
            case 7:
              v121[6] = v122[6];
LABEL_97:
              v121[5] = v122[5];
LABEL_98:
              v121[4] = v122[4];
LABEL_99:
              v121[3] = v122[3];
LABEL_100:
              v121[2] = v122[2];
LABEL_101:
              v121[1] = v122[1];
LABEL_102:
              *v121 = *v122;
              break;
            default:
              break;
          }
        }
        v123 = &v564[v628];
        if ( v562 )
        {
          v124 = v568;
          if ( v123 != v568 )
          {
            if ( v649 > 0 )
            {
              v125 = &v564[v628];
              do
              {
                v126 = *((_OWORD *)v124 + 1);
                v124 += 8;
                v125 += 8;
                v127 = *((_OWORD *)v124 - 2);
                v128 = *((_OWORD *)v124 - 1);
                v129 = *((_OWORD *)v124 - 4);
                *((_OWORD *)v125 - 3) = v126;
                *((_OWORD *)v125 - 4) = v129;
                *((_OWORD *)v125 - 2) = v127;
                *((_OWORD *)v125 - 1) = v128;
              }
              while ( v635 != v124 );
              v123 = (double *)((char *)v123 + v651);
              v124 = &v568[8 * (unsigned int)((v562 >> 3) - 1) + 8];
            }
            switch ( v562 & 7 )
            {
              case 0:
                break;
              case 1:
                goto LABEL_116;
              case 2:
                goto LABEL_115;
              case 3:
                goto LABEL_114;
              case 4:
                goto LABEL_113;
              case 5:
                goto LABEL_112;
              case 6:
                goto LABEL_111;
              case 7:
                v123[6] = v124[6];
LABEL_111:
                v123[5] = v124[5];
LABEL_112:
                v123[4] = v124[4];
LABEL_113:
                v123[3] = v124[3];
LABEL_114:
                v123[2] = v124[2];
LABEL_115:
                v123[1] = v124[1];
LABEL_116:
                *v123 = *v124;
                break;
            }
          }
        }
        v591 = v108;
        v130 = 1;
        *(_QWORD *)v625 = 0;
        v603 = v116;
        do
        {
          v131 = v624[v130];
          *(_QWORD *)&v625[v130 * 8] = 0;
          ++v130;
          memset(v131, 0, n);
        }
        while ( v130 != 7 );
        v108 = v591;
        v107 = v603;
        if ( a4 > 0 )
        {
          v132 = 0.0;
          v664 = v591;
          v574 = (char *)v706;
          v661 = a22 + 1;
          v667 = v102;
          v670 = v103;
          v592 = v707;
          v673 = v32;
          v596 = v708;
          v604 = v709;
          v609 = v710;
          v614 = v711;
          v618 = v712;
          v133 = 0;
          while ( 1 )
          {
            v134 = *(double *)((char *)a6 + 2 * v133);
            v135.m128d_f64[0] = *(double *)((char *)a19 + 2 * v133) + 0.00000001;
            if ( v134 <= v135.m128d_f64[0] )
            {
              if ( v134 == 0.0 )
                goto LABEL_127;
              v251 = *(int *)((char *)a23 + v133);
              v132 = v132 + *(double *)((char *)v581 + 2 * v133) * v134;
              v252 = v251 + *(_DWORD *)(a24 + v133);
              if ( a21 )
              {
                if ( (int)v251 >= v252 )
                  goto LABEL_127;
                v253 = 0;
                v254 = (unsigned int)(*(_DWORD *)(a24 + v133) - 1) + 1LL;
                v255 = &a22[v251];
                v256 = &a21[2 * v251];
                do
                {
                  v257 = v255[v253];
                  v258 = *(double *)&v256[2 * v253++];
                  a5[v257] = v258 * v134 + a5[v257];
                }
                while ( v254 != v253 );
                v133 += 4;
                if ( v622 == v133 )
                  goto LABEL_128;
              }
              else
              {
                if ( (int)v251 >= v252 )
                  goto LABEL_127;
                v398 = &a22[(int)v251];
                v399 = &v661[(int)v251 + (unsigned __int64)(unsigned int)(*(_DWORD *)(a24 + v133) - 1)];
                do
                {
                  v400 = *v398++;
                  a5[v400] = a5[v400] + v134;
                }
                while ( v399 != v398 );
                v133 += 4;
                if ( v622 == v133 )
                {
LABEL_128:
                  v108 = v664;
                  v102 = v667;
                  v103 = v670;
                  v32 = v673;
                  goto LABEL_129;
                }
              }
            }
            else
            {
              v136 = *(double *)((char *)a20 + 2 * v133);
              v137 = *(double *)((char *)v581 + 2 * v133);
              v138 = *(int *)((char *)a23 + v133);
              v139 = v138 + *(_DWORD *)(a24 + v133);
              if ( v136 - 0.00000001 > v134 )
              {
                v132 = v132 + v134 * v137;
                v288 = (__m128d)*(unsigned __int64 *)((char *)v592 + 2 * v133);
                v289 = *(double *)&v574[2 * v133] - v288.m128d_f64[0];
                v290 = *(double *)((char *)v596 + 2 * v133);
                v291 = *(double *)((char *)v592 + 2 * v133) - v290;
                if ( v289 * v291 < 0.0 )
                {
                  v288.m128d_f64[0] = (v288.m128d_f64[0] + *(double *)&v574[2 * v133] + v290) * 0.333333333;
                }
                else if ( fabs(v291) * 0.75 <= fabs(v289) )
                {
                  v288.m128d_f64[0] = v288.m128d_f64[0] + v289 * 4.0;
                }
                else
                {
                  v288.m128d_f64[0] = v288.m128d_f64[0] + v289 * v291 / (v291 - v289);
                }
                if ( v288.m128d_f64[0] <= v136 - 0.00000001 )
                {
                  v292 = _mm_cmplt_sd(v288, v135).m128d_f64[0];
                  *(_QWORD *)&v136 = ~*(_QWORD *)&v292 & *(_QWORD *)&v288.m128d_f64[0]
                                   | *(_QWORD *)((_BYTE *)a19 + 2 * v133) & *(_QWORD *)&v292;
                }
                v293 = *((__m128d *)v625 + 1);
                *(double *)((char *)v564 + 2 * v133) = v136;
                v294 = (__m128d)*(unsigned __int64 *)((char *)v592 + 2 * v133);
                v295 = (__m128d)*(unsigned __int64 *)&v574[2 * v133];
                v295.m128d_f64[0] = v295.m128d_f64[0] - v294.m128d_f64[0];
                v296 = (__m128d)*(unsigned __int64 *)((char *)v596 + 2 * v133);
                v294.m128d_f64[0] = v294.m128d_f64[0] - v296.m128d_f64[0];
                v297 = (__m128d)*(unsigned __int64 *)((char *)v604 + 2 * v133);
                v296.m128d_f64[0] = v296.m128d_f64[0] - v297.m128d_f64[0];
                v298 = (__m128d)*(unsigned __int64 *)((char *)v609 + 2 * v133);
                v297.m128d_f64[0] = v297.m128d_f64[0] - v298.m128d_f64[0];
                v299 = (__m128d)*(unsigned __int64 *)((char *)v614 + 2 * v133);
                v298.m128d_f64[0] = v298.m128d_f64[0] - v299.m128d_f64[0];
                v299.m128d_f64[0] = v299.m128d_f64[0] - *(double *)((char *)v618 + 2 * v133);
                v639 = *(double *)((char *)v618 + 2 * v133);
                v107[1] = _mm_unpacklo_pd(v296, v297);
                v300.m128d_f64[1] = v298.m128d_f64[1];
                v301 = _mm_add_pd(
                         _mm_unpacklo_pd(
                           (__m128d)COERCE_UNSIGNED_INT64(v296.m128d_f64[0] * v137),
                           (__m128d)COERCE_UNSIGNED_INT64(v297.m128d_f64[0] * v137)),
                         v293);
                v293.m128d_f64[1] = v299.m128d_f64[1];
                v300.m128d_f64[0] = v298.m128d_f64[0] * v137;
                v293.m128d_f64[0] = v299.m128d_f64[0] * v137;
                v107[2] = _mm_unpacklo_pd(v298, v299);
                *((__m128d *)v625 + 1) = v301;
                v302 = _mm_add_pd(_mm_unpacklo_pd(v300, v293), *((__m128d *)v625 + 2));
                v293.m128d_f64[1] = v295.m128d_f64[1];
                v293.m128d_f64[0] = v295.m128d_f64[0] * v137;
                *((__m128d *)v625 + 2) = v302;
                *(__m128d *)v625 = _mm_add_pd(
                                     _mm_unpacklo_pd(v293, (__m128d)COERCE_UNSIGNED_INT64(v294.m128d_f64[0] * v137)),
                                     *(__m128d *)v625);
                *v107 = _mm_unpacklo_pd(v295, v294);
                v107[3].m128d_f64[0] = v639 - v136;
                *((double *)v625 + 6) = v137 * (v639 - v136) + *((double *)v625 + 6);
                if ( a21 )
                {
                  if ( (int)v138 >= v139 )
                    goto LABEL_127;
                  v303 = (int)v138;
                  v304 = (unsigned int)(v139 - v138 - 1);
                  v682 = v133;
                  v305 = *v624;
                  v306 = v624[1];
                  v307 = v624[2];
                  v308 = v624[3];
                  v309 = &a22[v303];
                  v310 = v624[4];
                  v311 = v624[5];
                  v312 = v624[6];
                  v313 = (double *)&a21[2 * v303];
                  v314 = &a21[2 * v303 + 2 + 2 * v304];
                  while ( 1 )
                  {
                    v315 = *v309;
                    v316 = v295.m128d_f64[0] * *v313++;
                    ++v309;
                    v315 *= 8;
                    *(double *)&v305[v315] = v316 + *(double *)&v305[v315];
                    *(double *)&v306[v315] = *(v313 - 1) * v107->m128d_f64[1] + *(double *)&v306[v315];
                    *(double *)&v307[v315] = *(v313 - 1) * v107[1].m128d_f64[0] + *(double *)&v307[v315];
                    *(double *)&v308[v315] = *(v313 - 1) * v107[1].m128d_f64[1] + *(double *)&v308[v315];
                    *(double *)&v310[v315] = *(v313 - 1) * v107[2].m128d_f64[0] + *(double *)&v310[v315];
                    *(double *)&v311[v315] = *(v313 - 1) * v107[2].m128d_f64[1] + *(double *)&v311[v315];
                    *(double *)&v312[v315] = *(v313 - 1) * v107[3].m128d_f64[0] + *(double *)&v312[v315];
                    *(double *)((char *)a5 + v315) = *(v313 - 1) * v134 + *(double *)((char *)a5 + v315);
                    if ( v314 == (int *)v313 )
                      break;
                    v295.m128d_f64[0] = v107->m128d_f64[0];
                  }
                  v133 = v682 + 4;
                  if ( v622 == v682 + 4 )
                    goto LABEL_128;
                }
                else
                {
                  if ( (int)v138 >= v139 )
                    goto LABEL_127;
                  v464 = *v624;
                  v465 = v624[1];
                  v466 = v624[2];
                  v467 = v624[3];
                  v468 = v624[4];
                  v469 = v624[5];
                  v470 = v624[6];
                  v471 = &a22[(int)v138];
                  v472 = &v661[(int)v138 + (unsigned __int64)(unsigned int)(v139 - v138 - 1)];
                  while ( 1 )
                  {
                    v473 = *v471++;
                    v473 *= 8;
                    *(double *)&v464[v473] = v295.m128d_f64[0] + *(double *)&v464[v473];
                    *(double *)&v465[v473] = *(double *)&v465[v473] + v107->m128d_f64[1];
                    *(double *)&v466[v473] = *(double *)&v466[v473] + v107[1].m128d_f64[0];
                    *(double *)&v467[v473] = *(double *)&v467[v473] + v107[1].m128d_f64[1];
                    *(double *)&v468[v473] = *(double *)&v468[v473] + v107[2].m128d_f64[0];
                    *(double *)&v469[v473] = *(double *)&v469[v473] + v107[2].m128d_f64[1];
                    *(double *)&v470[v473] = *(double *)&v470[v473] + v107[3].m128d_f64[0];
                    *(double *)((char *)a5 + v473) = *(double *)((char *)a5 + v473) + v134;
                    if ( v472 == v471 )
                      break;
                    v295.m128d_f64[0] = v107->m128d_f64[0];
                  }
                  v133 += 4;
                  if ( v622 == v133 )
                    goto LABEL_128;
                }
              }
              else
              {
                *(double *)((char *)a6 + 2 * v133) = v136;
                v132 = v132 + v137 * v136;
                if ( a21 )
                {
                  if ( (int)v138 < v139 )
                  {
                    v140 = 0;
                    v141 = (unsigned int)(v139 - v138 - 1) + 1LL;
                    v142 = &a22[v138];
                    v143 = &a21[2 * v138];
                    do
                    {
                      v144 = v142[v140];
                      v145 = *(double *)&v143[2 * v140++];
                      a5[v144] = v145 * v136 + a5[v144];
                    }
                    while ( v141 != v140 );
                  }
                  goto LABEL_127;
                }
                if ( (int)v138 >= v139 )
                {
LABEL_127:
                  v133 += 4;
                  if ( v622 == v133 )
                    goto LABEL_128;
                }
                else
                {
                  v371 = &a22[(int)v138];
                  v372 = &v661[(int)v138 + (unsigned __int64)(unsigned int)(v139 - v138 - 1)];
                  do
                  {
                    v373 = *v371++;
                    a5[v373] = a5[v373] + v136;
                  }
                  while ( v372 != v371 );
                  v133 += 4;
                  if ( v622 == v133 )
                    goto LABEL_128;
                }
              }
            }
          }
        }
        v132 = 0.0;
LABEL_129:
        if ( v562 )
        {
          v600 = v707;
          v676 = v708;
          v401 = v706;
          v607 = v709;
          v612 = v710;
          v640 = v108;
          v617 = v711;
          v621 = v712;
          v402 = 0;
          do
          {
            v403 = v568[v402];
            v404 = v646[v402];
            v405 = v584[v402];
            v406 = 8LL * *((int *)v582 + v402);
            v407 = &a5[(unsigned __int64)v406 / 8];
            v132 = v132 + v403 * v404;
            v408 = v403 * v405;
            if ( v403 > 0.00000001 && v571[v402] - 0.00000001 > v403 )
            {
              v427 = (int)v402 + a4;
              v428 = v401[v427] - v600[v427];
              v429 = (double *)&(*v624)[v406];
              *(double *)v625 = *(double *)v625 + v404 * v428;
              *v429 = *v429 + v428 * v405;
              v430 = v600[v427] - v676[v427];
              v431 = (double *)&v624[1][v406];
              *((double *)v625 + 1) = v646[v402] * v430 + *((double *)v625 + 1);
              *v431 = v430 * v405 + *v431;
              v432 = v676[v427] - v607[v427];
              v433 = (double *)&v624[2][v406];
              *((double *)v625 + 2) = v646[v402] * v432 + *((double *)v625 + 2);
              *v433 = v432 * v405 + *v433;
              v434 = v607[v427] - v612[v427];
              v435 = (double *)&v624[3][v406];
              *((double *)v625 + 3) = v646[v402] * v434 + *((double *)v625 + 3);
              *v435 = v434 * v405 + *v435;
              v436 = v612[v427] - v617[v427];
              v437 = (double *)&v624[4][v406];
              *((double *)v625 + 4) = v646[v402] * v436 + *((double *)v625 + 4);
              *v437 = v436 * v405 + *v437;
              v438 = &v621[v427];
              v439 = v617[v427] - *v438;
              *((double *)v625 + 5) = v646[v402] * v439 + *((double *)v625 + 5);
              v440 = (double *)&v624[5][v406];
              v441 = (double *)&v624[6][v406];
              *v440 = v439 * v405 + *v440;
              v442 = *v438 - v564[v427];
              *((double *)v625 + 6) = v646[v402] * v442 + *((double *)v625 + 6);
              *v441 = v442 * v405 + *v441;
              *v407 = v408 + *v407;
            }
            else
            {
              *v407 = v408 + *v407;
            }
            ++v402;
          }
          while ( (unsigned int)(v562 - 1) + 1LL != v402 );
          v108 = v640;
        }
        v146 = *v108;
        v147 = v108[1];
        *v32 = 0.0;
        v662 = v147;
        *v146 = 0.0;
        v146[1] = 0.0;
        v146[2] = 0.0;
        v146[3] = 0.0;
        v146[4] = 0.0;
        v146[5] = 0.0;
        v146[6] = 0.0;
        v32[1] = 0.0;
        *v147 = 0.0;
        v147[1] = 0.0;
        v147[2] = 0.0;
        v147[3] = 0.0;
        v147[4] = 0.0;
        v147[5] = 0.0;
        v147[6] = 0.0;
        v148 = v108[2];
        v32[2] = 0.0;
        v665 = v148;
        *v148 = 0.0;
        v148[1] = 0.0;
        v148[2] = 0.0;
        v148[3] = 0.0;
        v148[4] = 0.0;
        v148[5] = 0.0;
        v148[6] = 0.0;
        v149 = v108[3];
        v32[3] = 0.0;
        v668 = v149;
        *v149 = 0.0;
        v149[1] = 0.0;
        v149[2] = 0.0;
        v149[3] = 0.0;
        v149[4] = 0.0;
        v149[5] = 0.0;
        v149[6] = 0.0;
        v150 = v108[4];
        v32[4] = 0.0;
        v671 = v150;
        *v150 = 0.0;
        v150[1] = 0.0;
        v150[2] = 0.0;
        v150[3] = 0.0;
        v150[4] = 0.0;
        v150[5] = 0.0;
        v150[6] = 0.0;
        v151 = v108[5];
        v32[5] = 0.0;
        v674 = v151;
        *v151 = 0.0;
        v151[1] = 0.0;
        v151[2] = 0.0;
        v151[3] = 0.0;
        v151[4] = 0.0;
        v151[5] = 0.0;
        v151[6] = 0.0;
        v152 = v108[6];
        v32[6] = 0.0;
        v637 = v152;
        *v152 = 0.0;
        v152[1] = 0.0;
        v152[2] = 0.0;
        v152[3] = 0.0;
        v152[4] = 0.0;
        v152[5] = 0.0;
        v152[6] = 0.0;
        if ( a3 <= 0 )
        {
          v153 = 0.0;
        }
        else
        {
          v153 = 0.0;
          v154 = 0;
          v155 = 8LL - (_QWORD)v107;
          v575 = *v624;
          v593 = v624[1];
          v597 = v624[2];
          v605 = v624[3];
          v610 = v624[4];
          v615 = v624[5];
          v619 = v624[6];
          do
          {
            v156 = v146;
            v157 = 2;
            v158 = a5[v154 / 8];
            v159 = *(double *)&v575[v154];
            v107->m128d_f64[0] = v159;
            *v32 = v158 * v159 + *v32;
            v160 = *(double *)&v593[v154];
            v107->m128d_f64[1] = v160;
            v32[1] = v160 * v158 + v32[1];
            v161 = *(double *)&v597[v154];
            v107[1].m128d_f64[0] = v161;
            v32[2] = v161 * v158 + v32[2];
            v162 = *(double *)&v605[v154];
            v107[1].m128d_f64[1] = v162;
            v32[3] = v162 * v158 + v32[3];
            v163 = *(double *)&v610[v154];
            v107[2].m128d_f64[0] = v163;
            v32[4] = v163 * v158 + v32[4];
            v164 = *(double *)&v615[v154];
            v107[2].m128d_f64[1] = v164;
            v32[5] = v164 * v158 + v32[5];
            v165 = *(double *)&v619[v154];
            v166 = (double *)v107;
            v107[3].m128d_f64[0] = v165;
            v153 = v153 + v158 * v158;
            v32[6] = v165 * v158 + v32[6];
            *v146 = v159 * v159 + *v146;
            do
            {
              v167 = (char *)v166 + v155;
              *(double *)((char *)v166 + v155 + (_QWORD)v156) = *v166 * v166[1]
                                                              + *(double *)((char *)v166 + v155 + (_QWORD)v156);
              if ( v157 != 7 )
              {
                v156[v157] = *v166 * v166[2] + v156[v157];
                if ( (_DWORD)v157 != 6 )
                {
                  *(double *)((char *)v166 + 24LL - (_QWORD)v107 + (_QWORD)v156) = *v166 * v166[3]
                                                                                 + *(double *)((char *)v166
                                                                                             + 24LL
                                                                                             - (_QWORD)v107
                                                                                             + (_QWORD)v156);
                  if ( (_DWORD)v157 != 5 )
                  {
                    *(double *)((char *)v166 + 32LL - (_QWORD)v107 + (_QWORD)v156) = *v166 * v166[4]
                                                                                   + *(double *)((char *)v166
                                                                                               + 32LL
                                                                                               - (_QWORD)v107
                                                                                               + (_QWORD)v156);
                    if ( (_DWORD)v157 != 4 )
                    {
                      *(double *)((char *)v166 + 40LL - (_QWORD)v107 + (_QWORD)v156) = *v166 * v166[5]
                                                                                     + *(double *)((char *)v166
                                                                                                 + 40LL
                                                                                                 - (_QWORD)v107
                                                                                                 + (_QWORD)v156);
                      if ( (_DWORD)v157 != 3 )
                        v156[6] = *v166 * v107[3].m128d_f64[0] + v156[6];
                    }
                  }
                }
              }
              v168 = v166[1];
              v156 = v108[v157 - 1];
              ++v166;
              ++v157;
              *(double *)&v167[(_QWORD)v156] = v168 * v168 + *(double *)&v167[(_QWORD)v156];
            }
            while ( &v107[3] != (__m128d *)v166 );
            v154 += 8LL;
          }
          while ( v588 != v154 );
        }
        if ( v559 == 1 )
          v583 = v153 * v647 + v132;
        v169 = 4;
        for ( j = 0; ; ++j )
        {
          v171 = v108[j];
          v32[j] = -(v32[j] * v647 + 0.5 * *(double *)&v625[j * 8]);
          v171[j] = v171[j] * v647;
          if ( v169 == 10 )
            break;
          v172 = &v171[j + 1];
          v173 = *v172 * v647;
          *v172 = v173;
          v108[j + 1][j] = v173;
          if ( v169 != 9 )
          {
            v174 = &v171[j + 2];
            v175 = *v174 * v647;
            *v174 = v175;
            v108[j + 2][j] = v175;
            if ( v169 != 8 )
            {
              v176 = &v171[j + 3];
              v177 = *v176 * v647;
              *v176 = v177;
              v108[j + 3][j] = v177;
              if ( v169 != 7 )
              {
                v178 = &v171[j + 4];
                v179 = *v178 * v647;
                *v178 = v179;
                v108[j + 4][j] = v179;
                if ( v169 != 6 )
                {
                  v180 = &v171[j + 5];
                  v181 = *v180 * v647;
                  *v180 = v181;
                  v108[j + 5][j] = v181;
                  if ( v169 != 5 )
                  {
                    v182 = v171[6] * v647;
                    v171[6] = v182;
                    v637[j] = v182;
                  }
                }
              }
            }
          }
          ++v169;
        }
        v267 = (_QWORD *)*v102;
        v268 = *(_OWORD *)v32;
        v269 = *((_OWORD *)v32 + 1);
        *((_OWORD *)v103 + 2) = *((_OWORD *)v32 + 2);
        *(_OWORD *)v103 = v268;
        *((_OWORD *)v103 + 1) = v269;
        v103[6] = v32[6];
        *v267 = *(_QWORD *)v146;
        v267[1] = *((_QWORD *)v146 + 1);
        v267[2] = *((_QWORD *)v146 + 2);
        v267[3] = *((_QWORD *)v146 + 3);
        v267[4] = *((_QWORD *)v146 + 4);
        v267[5] = *((_QWORD *)v146 + 5);
        v270 = *((_QWORD *)v146 + 6);
        v271 = 0;
        v267[6] = v270;
        v272 = (_QWORD *)v102[1];
        *v272 = *(_QWORD *)v662;
        v272[1] = *((_QWORD *)v662 + 1);
        v272[2] = *((_QWORD *)v662 + 2);
        v272[3] = *((_QWORD *)v662 + 3);
        v272[4] = *((_QWORD *)v662 + 4);
        v272[5] = *((_QWORD *)v662 + 5);
        v272[6] = *((_QWORD *)v662 + 6);
        v273 = (_QWORD *)v102[2];
        *v273 = *(_QWORD *)v665;
        v273[1] = *((_QWORD *)v665 + 1);
        v273[2] = *((_QWORD *)v665 + 2);
        v273[3] = *((_QWORD *)v665 + 3);
        v273[4] = *((_QWORD *)v665 + 4);
        v273[5] = *((_QWORD *)v665 + 5);
        v273[6] = *((_QWORD *)v665 + 6);
        v274 = (_QWORD *)v102[3];
        *v274 = *(_QWORD *)v668;
        v274[1] = *((_QWORD *)v668 + 1);
        v274[2] = *((_QWORD *)v668 + 2);
        v274[3] = *((_QWORD *)v668 + 3);
        v274[4] = *((_QWORD *)v668 + 4);
        v274[5] = *((_QWORD *)v668 + 5);
        v274[6] = *((_QWORD *)v668 + 6);
        v275 = (_QWORD *)v102[4];
        *v275 = *(_QWORD *)v671;
        v275[1] = *((_QWORD *)v671 + 1);
        v275[2] = *((_QWORD *)v671 + 2);
        v275[3] = *((_QWORD *)v671 + 3);
        v275[4] = *((_QWORD *)v671 + 4);
        v275[5] = *((_QWORD *)v671 + 5);
        v275[6] = *((_QWORD *)v671 + 6);
        v276 = (_QWORD *)v102[5];
        *v276 = *(_QWORD *)v674;
        v276[1] = *((_QWORD *)v674 + 1);
        v276[2] = *((_QWORD *)v674 + 2);
        v276[3] = *((_QWORD *)v674 + 3);
        v276[4] = *((_QWORD *)v674 + 4);
        v277 = 0.0;
        v276[5] = *((_QWORD *)v674 + 5);
        v276[6] = *((_QWORD *)v674 + 6);
        v278 = (_QWORD *)v102[6];
        *v278 = *(_QWORD *)v637;
        v278[1] = *((_QWORD *)v637 + 1);
        v278[2] = *((_QWORD *)v637 + 2);
        v278[3] = *((_QWORD *)v637 + 3);
        v278[4] = *((_QWORD *)v637 + 4);
        v278[5] = *((_QWORD *)v637 + 5);
        v279 = 0;
        v278[6] = *((_QWORD *)v637 + 6);
        while ( 1 )
        {
          v280 = v102[v271 / 8];
          v281 = v271;
          for ( k = v279; k != 7; ++k )
          {
            v283 = *(double *)(v280 + v281);
            if ( v279 )
            {
              v283 = v283 - *(double *)(*v102 + v271) * *(double *)(*v102 + v281);
              if ( v279 != 1 )
              {
                v283 = v283 - *(double *)(v102[1] + v271) * *(double *)(v102[1] + v281);
                if ( v279 != 2 )
                {
                  v283 = v283 - *(double *)(v102[2] + v271) * *(double *)(v102[2] + v281);
                  if ( v279 != 3 )
                  {
                    v283 = v283 - *(double *)(v102[3] + v271) * *(double *)(v102[3] + v281);
                    if ( v279 != 4 )
                    {
                      v283 = v283 - *(double *)(v102[4] + v271) * *(double *)(v102[4] + v281);
                      if ( v279 != 5 )
                        v283 = v283 - *(double *)(v102[5] + v271) * *(double *)(v102[5] + v281);
                    }
                  }
                }
              }
            }
            *(double *)(v280 + v281) = v283;
            v281 += 8LL;
          }
          v284 = (double *)(v280 + v271);
          v285 = 0.0;
          v286 = *(double *)(v280 + v271);
          if ( v286 >= 9.999999999999999e-21 )
          {
            v287 = sqrt(v286);
            if ( v277 > v286 )
            {
              v613 = v277;
              v608 = v107;
              sqrt(v286);
              v280 = v102[v271 / 8];
              v277 = v613;
              v107 = v608;
              v284 = (double *)(v280 + v271);
            }
            v285 = 1.0 / v287;
          }
          ++v279;
          *v284 = v285;
          if ( v279 == 7 )
            break;
          *(double *)(v280 + v271 + 8) = *(double *)(v280 + v271 + 8) * v285;
          if ( v279 != 6 )
          {
            *(double *)(v280 + v271 + 16) = *(double *)(v280 + v271 + 16) * v285;
            if ( (unsigned int)(v279 + 2) <= 6 )
            {
              *(double *)(v280 + v271 + 24) = *(double *)(v280 + v271 + 24) * v285;
              if ( (unsigned int)(v279 + 3) <= 6 )
              {
                *(double *)(v280 + v271 + 32) = *(double *)(v280 + v271 + 32) * v285;
                if ( (unsigned int)(v279 + 4) <= 6 )
                {
                  *(double *)(v280 + v271 + 40) = *(double *)(v280 + v271 + 40) * v285;
                  if ( v279 == 1 )
                    *(double *)(v280 + 48) = v285 * *(double *)(v280 + 48);
                }
              }
            }
          }
          v271 += 8LL;
        }
        v183 = (_QWORD *)*v102;
        v184 = v102[1];
        v185 = 0;
        v186 = v102[2];
        v187 = v102[3];
        v188 = v102[4];
        v189 = v102[5];
        while ( 2 )
        {
          v190 = v103[v185];
          v191 = *(double *)(v102[v185] + 8 * v185);
          if ( !v185
            || (v190 = v190 - *v103 * *(double *)&v183[v185], (_DWORD)v185 == 1)
            || (v190 = v190 - v103[1] * *(double *)(v184 + 8 * v185), (_DWORD)v185 == 2)
            || (v190 = v190 - v103[2] * *(double *)(v186 + 8 * v185), (_DWORD)v185 == 3)
            || (v190 = v190 - v103[3] * *(double *)(v187 + 8 * v185), (_DWORD)v185 == 4)
            || (v190 = v190 - v103[4] * *(double *)(v188 + 8 * v185), (_DWORD)v185 == 5) )
          {
            v103[v185] = v190 * v191;
            goto LABEL_153;
          }
          v103[v185] = (v190 - v103[5] * *(double *)(v189 + 8 * v185)) * v191;
          if ( (_DWORD)v185 != 6 )
          {
LABEL_153:
            ++v185;
            continue;
          }
          break;
        }
        v192 = v103[6];
        v193 = 6;
        for ( m = 7; ; --m )
        {
          v196 = m - 1;
          v197 = v192 * *(double *)(v102[v193] + v193 * 8);
          v103[v193] = v197;
          if ( m == 1 )
            break;
          v195 = v102[v193 - 1];
          v192 = v103[v193 - 1] - v197 * *(double *)(v195 + v193 * 8);
          if ( m != 7 )
          {
            v192 = v192 - *(double *)(v195 + v193 * 8 + 8) * v103[v193 + 1];
            if ( (unsigned int)(m + 1) <= 6 )
            {
              v192 = v192 - *(double *)(v195 + v193 * 8 + 16) * v103[v193 + 2];
              if ( (unsigned int)(m + 2) <= 6 )
              {
                v192 = v192 - *(double *)(v195 + v193 * 8 + 24) * v103[v193 + 3];
                if ( (unsigned int)(m + 3) <= 6 )
                {
                  v192 = v192 - *(double *)(v195 + v193 * 8 + 32) * v103[v193 + 4];
                  if ( m == 2 )
                    v192 = v192 - v103[6] * *(double *)(v195 + 48);
                }
              }
            }
          }
          --v193;
        }
        if ( (a27 & 0x40) != 0 )
        {
          v409 = *v103;
          v410 = v103[1];
          v411 = v103[3];
          v412 = v103[2];
          v413 = v103[4];
          v414 = v103[5];
          v415 = v103[6];
          v416 = fmax(
                   fmax(
                     fmax(fmax(fmax(fmax(fmax(10.0, fabs(*v103)), fabs(v410)), fabs(v412)), fabs(v411)), fabs(v413)),
                     fabs(v414)),
                   fabs(v415));
          v417 = v416;
          if ( v416 > 10.0 && (*((_BYTE *)a2 + 124) & 4) != 0 )
          {
            v602 = v107;
            printf("theta %g %g %g\n", v409, v410, v412);
            v409 = *v103;
            v410 = v103[1];
            v107 = v602;
            v412 = v103[2];
            v411 = v103[3];
            v413 = v103[4];
            v414 = v103[5];
            v415 = v103[6];
            v417 = v416;
          }
          *v103 = v409 * (10.0 / v417);
          v103[1] = v410 * (10.0 / v417);
          v103[2] = v412 * (10.0 / v417);
          v103[3] = v411 * (10.0 / v417);
          v103[4] = v413 * (10.0 / v417);
          v103[5] = v414 * (10.0 / v417);
          v103[6] = 10.0 / v417 * v415;
        }
        if ( v627 > 0 )
        {
          v198 = v714;
          v598 = v712;
          v565 = v713;
          v576 = v710;
          v594 = v711;
          v611 = v706;
          v606 = v707;
          v616 = v708;
          v620 = v709;
          v199 = (__m128d)*((unsigned __int64 *)v103 + 5);
          v638 = *v103;
          v663 = v103[1];
          v666 = v103[2];
          v669 = v103[3];
          v672 = v103[4];
          v675 = v103[5];
          v677 = v103[6];
          if ( (v713 >= v714 + 2 || v714 >= v713 + 2)
            && (v711 >= v714 + 2 || v714 >= v711 + 2)
            && (v707 >= v714 + 2 || v714 >= v707 + 2)
            && (v714 >= v706 + 2 || v706 >= v714 + 2)
            && (v714 >= v708 + 2 || v708 >= v714 + 2)
            && (v714 >= v709 + 2 || v709 >= v714 + 2)
            && (v714 >= v710 + 2 || v710 >= v714 + 2)
            && (v712 >= v714 + 2 || v714 >= v712 + 2)
            && (unsigned int)v627 > 4 )
          {
            v200 = ((unsigned __int8)v706 & 8) != 0;
            if ( v627 - 1 < 2 - (unsigned int)(((unsigned __int8)v706 & 8) == 0) )
            {
              v220 = 0;
              goto LABEL_180;
            }
            v681 = 0;
            if ( ((unsigned __int8)v706 & 8) != 0 )
            {
              v681 = 1;
              *v714 = (*v712 - *v713) * v103[6]
                    + (*v711 - *v712) * v199.m128d_f64[0]
                    + (*v710 - *v711) * v103[4]
                    + (*v708 - *v709) * v103[2]
                    + (*v707 - *v708) * v103[1]
                    + (*v706 - *v707) * *v103
                    + 0.0
                    + (*v709 - *v710) * v103[3];
            }
            v201 = _mm_unpacklo_pd(v199, v199);
            v697 = v627 - v200;
            v698 = v198;
            v202 = v200;
            v203 = &v611[v202];
            v204 = &v616[v202];
            v205 = &v594[v202];
            v206 = &v620[v202];
            v207 = &v598[v202];
            v699 = v108;
            v700 = v107;
            v208 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v638, (__m128d)*(unsigned __int64 *)&v638);
            v209 = &v606[v202];
            v210 = (unsigned int)(v627 - v200) >> 1;
            v211 = &v576[v202];
            v212 = &v565[v202];
            v213 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v663, (__m128d)*(unsigned __int64 *)&v663);
            v214 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v666, (__m128d)*(unsigned __int64 *)&v666);
            v215 = &v198[v202];
            v216 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v669, (__m128d)*(unsigned __int64 *)&v669);
            v217 = 0;
            v218 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v672, (__m128d)*(unsigned __int64 *)&v672);
            v219 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v677, (__m128d)*(unsigned __int64 *)&v677);
            do
            {
              ++v196;
              *(__m128d *)&v215[v217] = _mm_add_pd(
                                          _mm_add_pd(
                                            _mm_add_pd(
                                              _mm_add_pd(
                                                _mm_add_pd(
                                                  _mm_add_pd(
                                                    _mm_add_pd(
                                                      _mm_mul_pd(
                                                        _mm_sub_pd(*(__m128d *)&v203[v217], *(__m128d *)&v209[v217]),
                                                        v208),
                                                      (__m128d)0LL),
                                                    _mm_mul_pd(
                                                      _mm_sub_pd(*(__m128d *)&v209[v217], *(__m128d *)&v204[v217]),
                                                      v213)),
                                                  _mm_mul_pd(
                                                    _mm_sub_pd(*(__m128d *)&v204[v217], *(__m128d *)&v206[v217]),
                                                    v214)),
                                                _mm_mul_pd(
                                                  _mm_sub_pd(*(__m128d *)&v206[v217], *(__m128d *)&v211[v217]),
                                                  v216)),
                                              _mm_mul_pd(
                                                _mm_sub_pd(*(__m128d *)&v211[v217], *(__m128d *)&v205[v217]),
                                                v218)),
                                            _mm_mul_pd(
                                              _mm_sub_pd(*(__m128d *)&v205[v217], *(__m128d *)&v207[v217]),
                                              v201)),
                                          _mm_mul_pd(_mm_sub_pd(*(__m128d *)&v207[v217], *(__m128d *)&v212[v217]), v219));
              v217 += 2;
            }
            while ( v196 < v210 );
            v198 = v698;
            v108 = v699;
            v107 = v700;
            v220 = (v697 & 0xFFFFFFFE) + v681;
            if ( (v697 & 0xFFFFFFFE) != v697 )
            {
LABEL_180:
              v221 = v620[v220];
              v198[v220] = (v598[v220] - v565[v220]) * v677
                         + (v594[v220] - v598[v220]) * v675
                         + (v576[v220] - v594[v220]) * v672
                         + (v616[v220] - v221) * v666
                         + (v606[v220] - v616[v220]) * v663
                         + (v611[v220] - v606[v220]) * v638
                         + 0.0
                         + (v221 - v576[v220]) * v669;
              v222 = v220 + 1;
              if ( v220 + 1 < v627 )
              {
                v223 = v620[v222];
                v198[v222] = (v598[v222] - v565[v222]) * v677
                           + (v594[v222] - v598[v222]) * v675
                           + (v576[v222] - v594[v222]) * v672
                           + (v616[v222] - v223) * v666
                           + (v606[v222] - v616[v222]) * v663
                           + (v611[v222] - v606[v222]) * v638
                           + 0.0
                           + v669 * (v223 - v576[v222]);
              }
            }
          }
          else
          {
            v509 = 0;
            do
            {
              v198[v509 / 8] = (v598[v509 / 8] - v565[v509 / 8]) * v677
                             + (v594[v509 / 8] - v598[v509 / 8]) * v675
                             + (v620[v509 / 8] - v576[v509 / 8]) * v669
                             + (v606[v509 / 8] - v616[v509 / 8]) * v663
                             + (v611[v509 / 8] - v606[v509 / 8]) * v638
                             + 0.0
                             + (v616[v509 / 8] - v620[v509 / 8]) * v666
                             + (v576[v509 / 8] - v594[v509 / 8]) * v672;
              v509 += 8LL;
            }
            while ( 8LL * (unsigned int)(v627 - 1) + 8 != v509 );
          }
        }
        if ( !v626 )
        {
          if ( a4 > 0 )
          {
            v224 = v714;
            v225 = 0;
            do
            {
              v226 = a6[v225 / 8];
              if ( v226 > a19[v225 / 8] + 0.00000001 && a20[v225 / 8] - 0.00000001 > v226 )
              {
                v227 = v226 + v224[v225 / 8];
                a6[v225 / 8] = v227;
                v228 = a19[v225 / 8];
                if ( v228 + 0.00000001 > v227 || (v228 = a20[v225 / 8], v227 > v228 - 0.00000001) )
                  a6[v225 / 8] = v228;
              }
              v225 += 8LL;
            }
            while ( v683 != v225 );
          }
          if ( v562 )
          {
            v515 = v714;
            v516 = 0;
            do
            {
              v517 = v568[v516];
              if ( v517 > 0.00000001 && v571[v516] - 0.00000001 > v517 )
              {
                v518 = v517 + v515[a4 + (int)v516];
                if ( v518 >= 0.0 )
                  v568[v516] = fmin(v571[v516], v518);
                else
                  v568[v516] = 0.0;
              }
              ++v516;
            }
            while ( (unsigned int)(v562 - 1) + 1LL != v516 );
          }
          goto LABEL_192;
        }
        if ( a4 > 0 )
        {
          v381 = 0;
          v382 = 1.0;
          while ( 1 )
          {
            v383 = a19[v381 / 8];
            v384 = a6[v381 / 8];
            if ( v384 <= v383 + 0.00000001 )
              goto LABEL_374;
            v385 = a20[v381 / 8];
            if ( v385 - 0.00000001 <= v384 )
              goto LABEL_374;
            v386 = v714[v381 / 8];
            if ( v386 > 0.0 )
            {
              if ( v386 * v382 + v384 > v385 )
                v382 = (v385 - v384) / v386;
              goto LABEL_374;
            }
            if ( v386 >= 0.0 || v383 <= v386 * v382 + v384 )
            {
LABEL_374:
              v381 += 8LL;
              if ( v683 == v381 )
                goto LABEL_375;
            }
            else
            {
              v381 += 8LL;
              v382 = (v383 - v384) / v386;
              if ( v683 == v381 )
                goto LABEL_375;
            }
          }
        }
        v382 = 1.0;
LABEL_375:
        if ( v562 )
        {
          v510 = 0;
          do
          {
            v511 = v568[v510];
            if ( v511 > 0.00000001 )
            {
              v512 = v571[v510];
              if ( v512 - 0.00000001 > v511 )
              {
                v513 = v714[(int)v510 + a4];
                if ( v513 <= 0.0 )
                {
                  if ( v513 < 0.0 && v513 * v382 + v511 < 0.0 )
                    v382 = -v511 / v513;
                }
                else if ( v513 * v382 + v511 > v512 )
                {
                  v382 = (v512 - v511) / v513;
                }
              }
            }
            ++v510;
          }
          while ( (unsigned int)(v562 - 1) + 1LL != v510 );
        }
        if ( !v653 && (*((_BYTE *)a2 + 124) & 8) != 0 && v382 < 1.0 )
        {
          v595 = v107;
          printf(" - modified theta %g\n", v382);
          v107 = v595;
        }
        if ( a4 > 0 )
        {
          v387 = v714;
          v388 = 0;
          do
          {
            v389 = a6[v388 / 8];
            if ( v389 > a19[v388 / 8] + 0.00000001 && a20[v388 / 8] - 0.00000001 > v389 )
              a6[v388 / 8] = v389 + v387[v388 / 8] * v382;
            v388 += 8LL;
          }
          while ( v683 != v388 );
        }
        if ( v562 )
        {
          v390 = v714;
          v391 = 0;
          do
          {
            v392 = v568[v391];
            if ( v392 > 0.00000001 && v571[v391] - 0.00000001 > v392 )
              v568[v391] = v392 + v390[a4 + (int)v391] * v382;
            ++v391;
          }
          while ( (unsigned int)(v562 - 1) + 1LL != v391 );
        }
LABEL_192:
        if ( !v653 && (*((_BYTE *)a2 + 124) & 8) != 0 )
        {
          v577 = v107;
          putchar(10);
          v107 = v577;
        }
LABEL_195:
        v578 = v107;
        Idiot::objval(
          (Idiot *)a1,
          (int)a2,
          a3,
          (double *)(unsigned int)a4,
          a5,
          a6,
          v647,
          a14,
          a15,
          v586,
          a17,
          a18,
          a19,
          a20,
          a21,
          a22,
          a23,
          a24,
          (int *)(unsigned int)v562,
          v582,
          v568,
          v584,
          v571);
        v229 = *(double *)(a1 + 24);
        v107 = v578;
        if ( !v570 )
          v679 = *(double *)(a1 + 24);
        v230 = *(double *)(a1 + 8);
        v231 = *(double *)a1;
        if ( v580 )
        {
          if ( v587 > v229 )
          {
            v587 = *(double *)(a1 + 24);
            if ( a4 != 0 && v580 != a6 )
            {
              if ( v633 <= 0 )
              {
                v265 = v580;
                v266 = a6;
              }
              else
              {
                v259 = v580;
                v260 = a6;
                do
                {
                  v261 = *((_OWORD *)v260 + 1);
                  v260 += 8;
                  v259 += 8;
                  v262 = *((_OWORD *)v260 - 2);
                  v263 = *((_OWORD *)v260 - 1);
                  v264 = *((_OWORD *)v260 - 4);
                  *((_OWORD *)v259 - 3) = v261;
                  *((_OWORD *)v259 - 4) = v264;
                  *((_OWORD *)v259 - 2) = v262;
                  *((_OWORD *)v259 - 1) = v263;
                }
                while ( v623 != v260 );
                v265 = (double *)((char *)v580 + v678);
                v266 = (double *)((char *)a6 + v678);
              }
              switch ( v648 )
              {
                case 1:
                  goto LABEL_244;
                case 2:
                  goto LABEL_243;
                case 3:
                  goto LABEL_242;
                case 4:
                  goto LABEL_241;
                case 5:
                  goto LABEL_240;
                case 6:
                  goto LABEL_239;
                case 7:
                  v265[6] = v266[6];
LABEL_239:
                  v265[5] = v266[5];
LABEL_240:
                  v265[4] = v266[4];
LABEL_241:
                  v265[3] = v266[3];
LABEL_242:
                  v265[2] = v266[2];
LABEL_243:
                  v265[1] = v266[1];
LABEL_244:
                  v587 = v229;
                  *v265 = *v266;
                  break;
                default:
                  v587 = v229;
                  break;
              }
            }
          }
        }
        if ( v229 <= v583 + 0.0001 || v559 > 4 )
        {
LABEL_201:
          v104 = v107;
          goto LABEL_202;
        }
        if ( (*((_BYTE *)a2 + 124) & 0x10) != 0 && v626 )
        {
          v601 = v231;
          printf("Weighted objective from %g to %g **** bad move\n", v583, v229);
          v231 = v601;
          v107 = v578;
        }
        if ( v632 != 1 )
        {
          if ( v632 == 2 )
          {
            if ( v229 <= v629 * 0.1 + v583 )
              goto LABEL_201;
            v418 = v706;
            v419 = a6;
            if ( v706 != a6 && a4 )
            {
              if ( v633 <= 0 )
              {
                v425 = a6;
                v426 = v706;
              }
              else
              {
                v420 = v706;
                do
                {
                  v421 = *((_OWORD *)v420 + 1);
                  v419 += 8;
                  v420 += 8;
                  v422 = *((_OWORD *)v420 - 2);
                  v423 = *((_OWORD *)v420 - 1);
                  v424 = *((_OWORD *)v420 - 4);
                  *((_OWORD *)v419 - 3) = v421;
                  *((_OWORD *)v419 - 4) = v424;
                  *((_OWORD *)v419 - 2) = v422;
                  *((_OWORD *)v419 - 1) = v423;
                }
                while ( v623 != v419 );
                v425 = (double *)((char *)a6 + v678);
                v426 = (double *)((char *)v418 + v678);
              }
              switch ( v648 )
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
                  v425[6] = v426[6];
LABEL_585:
                  v425[5] = v426[5];
LABEL_586:
                  v425[4] = v426[4];
LABEL_587:
                  v425[3] = v426[3];
LABEL_588:
                  v425[2] = v426[2];
LABEL_589:
                  v425[1] = v426[1];
LABEL_590:
                  *v425 = *v426;
                  break;
                default:
                  break;
              }
            }
            v530 = &v418[v628];
            if ( v562 )
            {
              v531 = v568;
              if ( v530 != v568 )
              {
                if ( v649 <= 0 )
                {
                  v537 = v568;
                }
                else
                {
                  v532 = (double *)((char *)v530 + v651);
                  do
                  {
                    v533 = *((_OWORD *)v530 + 1);
                    v530 += 8;
                    v531 += 8;
                    v534 = *((_OWORD *)v530 - 2);
                    v535 = *((_OWORD *)v530 - 1);
                    v536 = *((_OWORD *)v530 - 4);
                    *((_OWORD *)v531 - 3) = v533;
                    *((_OWORD *)v531 - 4) = v536;
                    *((_OWORD *)v531 - 2) = v534;
                    *((_OWORD *)v531 - 1) = v535;
                  }
                  while ( v532 != v530 );
                  v530 = v532;
                  v537 = &v568[8 * (unsigned int)((v562 >> 3) - 1) + 8];
                }
                switch ( v562 & 7 )
                {
                  case 0:
                    break;
                  case 1:
                    goto LABEL_604;
                  case 2:
                    goto LABEL_603;
                  case 3:
                    goto LABEL_602;
                  case 4:
                    goto LABEL_601;
                  case 5:
                    goto LABEL_600;
                  case 6:
                    goto LABEL_599;
                  case 7:
                    v537[6] = v530[6];
LABEL_599:
                    v537[5] = v530[5];
LABEL_600:
                    v537[4] = v530[4];
LABEL_601:
                    v537[3] = v530[3];
LABEL_602:
                    v537[2] = v530[2];
LABEL_603:
                    v537[1] = v530[1];
LABEL_604:
                    *v537 = *v530;
                    break;
                }
              }
            }
            ++v626;
          }
          else if ( v632 != 3 || v229 <= v629 * 0.001 + v583 )
          {
            goto LABEL_201;
          }
          continue;
        }
        break;
      }
      if ( v229 <= v583 + a12 )
        continue;
      break;
    }
    v104 = v107;
    if ( (*((_BYTE *)a2 + 124) & 0x10) != 0 )
    {
      v567 = v231;
      printf("Weighted objective from %g to %g ?\n", v583, v229);
      v231 = v567;
    }
    v374 = v706;
    v375 = a6;
    if ( v706 != a6 && a4 )
    {
      v376 = v706;
      if ( v633 > 0 )
      {
        do
        {
          v377 = *((_OWORD *)v376 + 1);
          v375 += 8;
          v376 += 8;
          v378 = *((_OWORD *)v376 - 2);
          v379 = *((_OWORD *)v376 - 1);
          v380 = *((_OWORD *)v376 - 4);
          *((_OWORD *)v375 - 3) = v377;
          *((_OWORD *)v375 - 4) = v380;
          *((_OWORD *)v375 - 2) = v378;
          *((_OWORD *)v375 - 1) = v379;
        }
        while ( v623 != v375 );
        v376 = (double *)((char *)v374 + v678);
        v375 = (double *)((char *)a6 + v678);
      }
      switch ( v648 )
      {
        case 1:
          goto LABEL_500;
        case 2:
          goto LABEL_499;
        case 3:
          goto LABEL_498;
        case 4:
          goto LABEL_497;
        case 5:
          goto LABEL_496;
        case 6:
          goto LABEL_495;
        case 7:
          v375[6] = v376[6];
LABEL_495:
          v375[5] = v376[5];
LABEL_496:
          v375[4] = v376[4];
LABEL_497:
          v375[3] = v376[3];
LABEL_498:
          v375[2] = v376[2];
LABEL_499:
          v375[1] = v376[1];
LABEL_500:
          *v375 = *v376;
          break;
        default:
          break;
      }
    }
    v493 = &v374[v628];
    if ( v562 )
    {
      v494 = v568;
      if ( v493 != v568 )
      {
        if ( v649 > 0 )
        {
          v495 = v493;
          do
          {
            v496 = *((_OWORD *)v495 + 1);
            v494 += 8;
            v495 += 8;
            v497 = *((_OWORD *)v495 - 2);
            v498 = *((_OWORD *)v495 - 1);
            v499 = *((_OWORD *)v495 - 4);
            *((_OWORD *)v494 - 3) = v496;
            *((_OWORD *)v494 - 4) = v499;
            *((_OWORD *)v494 - 2) = v497;
            *((_OWORD *)v494 - 1) = v498;
          }
          while ( v635 != v494 );
          v493 = (double *)((char *)v493 + v651);
          v494 = &v568[8 * (unsigned int)((v562 >> 3) - 1) + 8];
        }
        switch ( v562 & 7 )
        {
          case 0:
            break;
          case 1:
            goto LABEL_581;
          case 2:
            goto LABEL_580;
          case 3:
            goto LABEL_579;
          case 4:
            goto LABEL_578;
          case 5:
            goto LABEL_577;
          case 6:
            goto LABEL_576;
          case 7:
            v494[6] = v493[6];
LABEL_576:
            v494[5] = v493[5];
LABEL_577:
            v494[4] = v493[4];
LABEL_578:
            v494[3] = v493[3];
LABEL_579:
            v494[2] = v493[2];
LABEL_580:
            v494[1] = v493[1];
LABEL_581:
            *v494 = *v493;
            break;
        }
      }
    }
LABEL_202:
    v232 = *((_DWORD *)a2 + 33);
    if ( !(v570 % v232) )
    {
      v233 = fmin(v641, fmin(v645, fmin(v644, fmin(v643, v229))));
      v234 = v233;
      if ( a8 > v660 - v233 && (a27 & 8) == 0 )
      {
        v235 = (int *)v104;
        v93 = v103;
        v29 = v102;
        v34 = v235;
        if ( (*((_BYTE *)a2 + 124) & 8) != 0 )
          printf("Exiting as drop in %d its is %g after %d iterations\n", 5 * v232, v660 - v233, v570);
        goto LABEL_207;
      }
      v660 = v643;
      v643 = v644;
      v644 = v645;
      v393 = v641;
      v641 = v234;
      v645 = v393;
    }
    if ( !(v570 % *((_DWORD *)a2 + 32)) )
    {
      if ( a3 <= 0 )
      {
        v453 = 0.0;
        v456 = a2;
      }
      else
      {
        v453 = 0.0;
        v454 = 0;
        do
        {
          v455 = (a5[v454 / 8] + a18[v454 / 8]) * a14[v454 / 8];
          v454 += 8LL;
          v453 = v453 + v455;
        }
        while ( v588 != v454 );
        v456 = a2;
      }
      if ( (*((_BYTE *)v456 + 124) & 2) != 0 )
        printf(
          "%d Infeas %g, obj %g - wtObj %g dual %g maxDj %g\n",
          v570,
          v231,
          v230 * a9 - v658,
          v229 - v658,
          v453 * a9 - v658,
          v629);
    }
    v557 = -v557;
    if ( a4 != 0 && v634 != (_BYTE *)v642 )
    {
      if ( v633 <= 0 )
      {
        v396 = (_BYTE *)v642;
        v397 = v634;
      }
      else
      {
        if ( (unsigned int)(a4 >> 3) > 1 && v642 >= (unsigned __int64)(v634 + 16) )
        {
          v394 = 0;
          v395 = 0;
          do
          {
            ++v395;
            *(__m128i *)(v642 + v394) = _mm_loadu_si128((const __m128i *)&v634[v394]);
            v394 += 16;
          }
          while ( v395 < (unsigned int)(a4 >> 3) >> 1 );
          if ( v633 != ((a4 >> 3) & 0xFFFFFFFE) )
          {
            *v694 = *v695;
            v694[1] = v695[1];
            v694[2] = v695[2];
            v694[3] = v695[3];
            v694[4] = v695[4];
            v694[5] = v695[5];
            v694[6] = v695[6];
            v694[7] = v695[7];
          }
        }
        else
        {
          v550 = v642;
          v551 = v634;
          do
          {
            v552 = *v551;
            v550 += 8LL;
            v551 += 8;
            *(_BYTE *)(v550 - 8) = v552;
            *(_BYTE *)(v550 - 7) = *(v551 - 7);
            *(_BYTE *)(v550 - 6) = *(v551 - 6);
            *(_BYTE *)(v550 - 5) = *(v551 - 5);
            *(_BYTE *)(v550 - 4) = *(v551 - 4);
            *(_BYTE *)(v550 - 3) = *(v551 - 3);
            *(_BYTE *)(v550 - 2) = *(v551 - 2);
            *(_BYTE *)(v550 - 1) = *(v551 - 1);
          }
          while ( v690 != (_BYTE *)v550 );
        }
        v396 = v690;
        v397 = v702;
      }
      switch ( v648 )
      {
        case 1:
          goto LABEL_464;
        case 2:
          goto LABEL_463;
        case 3:
          goto LABEL_462;
        case 4:
          goto LABEL_461;
        case 5:
          goto LABEL_460;
        case 6:
          goto LABEL_459;
        case 7:
          v396[6] = v397[6];
LABEL_459:
          v396[5] = v397[5];
LABEL_460:
          v396[4] = v397[4];
LABEL_461:
          v396[3] = v397[3];
LABEL_462:
          v396[2] = v397[2];
LABEL_463:
          v396[1] = v397[1];
LABEL_464:
          *v396 = *v397;
          v557 = v680;
          break;
        default:
          v557 = v680;
          break;
      }
    }
LABEL_281:
    v599 = (int *)v104;
    v317 = 0.0;
    v318 = 0;
    v566 = 0;
    while ( 2 )
    {
      v319 = *(int *)((char *)&v703 + v318);
      v320 = *(int *)((char *)&v704 + v318);
      if ( (_DWORD)v319 != v320 )
      {
        v560 = a22 + 1;
        do
        {
LABEL_284:
          if ( *(_BYTE *)(v642 + v319) )
            goto LABEL_305;
          v321 = a6[v319];
          v322 = a23[v319];
          v323 = v322 + *(_DWORD *)(a24 + 4 * v319);
          if ( a21 )
          {
            if ( (int)v322 < v323 )
            {
              v324 = v581[v319];
              v325 = 0;
              do
              {
                v326 = a14[a22[(int)v322 + v325]] * *(double *)&a21[2 * (int)v322 + 2 * v325];
                ++v325;
                v324 = v324 - v326;
              }
              while ( (unsigned int)(*(_DWORD *)(a24 + 4 * v319) - 1) + 1LL != v325 );
              goto LABEL_289;
            }
          }
          else if ( (int)v322 < v323 )
          {
            v324 = v581[v319];
            v351 = &a22[(int)v322];
            do
            {
              v352 = *v351++;
              v324 = v324 - a14[v352];
            }
            while ( &v560[(int)v322 + (unsigned __int64)(unsigned int)(*(_DWORD *)(a24 + 4 * v319) - 1)] != v351 );
            goto LABEL_289;
          }
          v324 = v581[v319];
LABEL_289:
          if ( v324 <= 0.00001 )
            v327 = a20[v319];
          else
            v327 = a19[v319];
          v328 = v327 - v321;
          v329 = fabs(v324);
          if ( v329 <= a11 )
            goto LABEL_305;
          if ( v324 * v328 < -0.0001 )
          {
            ++v566;
            v317 = fmax(v329, v317);
            if ( a21 )
            {
              if ( (int)v322 < v323 )
              {
                v330 = 0;
                v331 = 0.0;
                v332 = 0;
                do
                {
                  v333 = *(double *)&a21[2 * (int)v322 + 2 * v332];
                  v334 = a22[(int)v322 + v332++];
                  v331 = v331 + v333 * v333;
                  v330.m128d_f64[0] = v330.m128d_f64[0] + v333 * a5[v334];
                }
                while ( (unsigned int)(*(_DWORD *)(a24 + 4 * v319) - 1) + 1LL != v332 );
                goto LABEL_297;
              }
            }
            else if ( (int)v322 < v323 )
            {
              v330 = 0;
              v331 = 0.0;
              v479 = &a22[(int)v322];
              do
              {
                v480 = *v479++;
                v331 = v331 + 1.0;
                v330.m128d_f64[0] = v330.m128d_f64[0] + a5[v480];
              }
              while ( &v560[(int)v322 + (unsigned __int64)(unsigned int)(*(_DWORD *)(a24 + 4 * v319) - 1)] != v479 );
LABEL_297:
              v335 = v331 * v647;
              v330.m128d_f64[0] = v330.m128d_f64[0] * v647 + v581[v319] * 0.5;
              v336 = -v330.m128d_f64[0] / v335;
              if ( (a27 & 4) != 0 )
              {
                v330.m128d_f64[0] = v330.m128d_f64[0] + v330.m128d_f64[0];
                v337 = v330.m128d_f64[0] * v336;
                v330.m128d_f64[0] = v330.m128d_f64[0] * (v336 + v336) + v335 * (v336 + v336) * (v336 + v336);
                v338.m128d_f64[0] = v335 * v336 * v336 + v337 + a11;
                v339 = _mm_cmpge_sd(v330, v338).m128d_f64[0];
                *(_QWORD *)&v336 = *(_QWORD *)&v336 & *(_QWORD *)&v339
                                 | ~*(_QWORD *)&v339 & COERCE_UNSIGNED_INT64(v336 + v336);
              }
              if ( v336 <= 0.0 )
                v340 = fmax(v336, a19[v319] - v321);
              else
                v340 = fmin(v336, a20[v319] - v321);
              v341 = v340;
              a6[v319] = v321 + v340;
              if ( a21 )
              {
                if ( (int)v322 < v323 )
                {
                  v342 = (unsigned int)(v323 - v322 - 1);
                  v343 = &a21[2 * v322];
                  v344 = &a22[v322];
                  v345 = v342 + 1;
                  v346 = 0;
                  do
                  {
                    v347 = v344[v346];
                    v348 = *(double *)&v343[2 * v346++];
                    v349 = &a5[v347];
                    v350 = v348 * v341 + *v349;
                    *v349 = v350;
                    a14[v347] = v350 * (-2.0 * v647);
                  }
                  while ( v345 != v346 );
                }
                goto LABEL_305;
              }
              if ( (int)v322 >= v323 )
              {
LABEL_305:
                v319 += v557;
                if ( v320 == (_DWORD)v319 )
                  break;
              }
              else
              {
                v474 = &a22[(int)v322];
                v475 = &v560[(unsigned int)(v323 - v322 - 1) + (__int64)(int)v322];
                do
                {
                  v476 = *v474++;
                  v477 = &a5[v476];
                  v478 = *v477 + v341;
                  *v477 = v478;
                  a14[v476] = v478 * (-2.0 * v647);
                }
                while ( v474 != v475 );
                v319 += v557;
                if ( v320 == (_DWORD)v319 )
                  break;
              }
              goto LABEL_284;
            }
            v330 = 0;
            v331 = 0.0;
            goto LABEL_297;
          }
          if ( v329 <= a13 )
            goto LABEL_305;
          *(_BYTE *)(v642 + v319) = 1;
          v319 += v557;
        }
        while ( v320 != (_DWORD)v319 );
      }
      v318 += 4;
      if ( v318 != 8 )
        continue;
      break;
    }
    v629 = v317;
    if ( v562 )
    {
      v481 = 0;
      do
      {
        v488 = v584[v481];
        v489 = v568[v481];
        v490 = *((int *)v582 + v481);
        v491 = &a14[v490];
        v492 = v646[v481] - a14[v490] * v488;
        if ( v492 > 0.00001 )
          v482 = -v489;
        else
          v482 = v571[v481] - v489;
        if ( v482 * v492 < -0.0001 && fabs(v492) > a11 )
        {
          v483 = &a5[v490];
          ++v566;
          v484 = *v483;
          v485 = -(v646[v481] * 0.5 + (v488 * *v483 + 0.0) * v647) / ((v488 * v488 + 0.0) * v647);
          if ( v485 <= 0.0 )
            v486 = fmax(v485, -v489);
          else
            v486 = fmin(v485, v571[v481] - v489);
          v568[v481] = v489 + v486;
          v487 = v486 * v488 + v484;
          *v483 = v487;
          *v491 = v487 * (v647 * -2.0);
        }
        ++v481;
      }
      while ( v481 != (unsigned int)(v562 - 1) + 1LL );
    }
    if ( v652 != 2 )
    {
LABEL_309:
      if ( a26 == ++v570 )
        goto LABEL_310;
      continue;
    }
    break;
  }
  v656 = fmax(v656, v629);
  v657 = fmin(v657, v629);
  v519 = (v685 + v629 + v659 + v655 + v654) / 5.0;
  if ( a12 <= v519 || v570 <= 50 )
  {
    if ( v566 <= 99 )
      a11 = 0.5 * a11;
    v685 = v659;
    v659 = v655;
    v655 = v654;
    v654 = v629;
    v629 = v519;
    goto LABEL_309;
  }
LABEL_310:
  v93 = v103;
  v29 = v102;
  v34 = v599;
LABEL_207:
  Idiot::objval(
    (Idiot *)a1,
    (int)a2,
    a3,
    (double *)(unsigned int)a4,
    a5,
    a6,
    v647,
    a14,
    a15,
    v586,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    (int *)(unsigned int)v562,
    v582,
    v568,
    v584,
    v571);
  v236 = *(double *)(a1 + 24);
  *(double *)(a1 + 40) = v656;
  *(double *)(a1 + 48) = v657;
  *(double *)(a1 + 16) = v679 - v236;
  if ( v580 )
  {
    v237 = a4 == 0 || v580 == a6;
    v238 = v585 != nullptr && v562 != 0;
    if ( v587 <= v236 )
    {
LABEL_209:
      if ( !v238 )
      {
LABEL_210:
        if ( !v237 )
        {
          v239 = a4 >> 3;
          v240 = (unsigned int)(a4 % 8);
LABEL_212:
          if ( v239 <= 0 )
          {
            v250 = a6;
            v249 = v580;
          }
          else
          {
            v241 = a6;
            v242 = v580;
            v243 = (unsigned int)(v239 - 1);
            do
            {
              v244 = *((_OWORD *)v242 + 1);
              v241 += 8;
              v242 += 8;
              v245 = *((_OWORD *)v242 - 2);
              v246 = *((_OWORD *)v242 - 1);
              v247 = *((_OWORD *)v242 - 4);
              *((_OWORD *)v241 - 3) = v244;
              *((_OWORD *)v241 - 4) = v247;
              *((_OWORD *)v241 - 2) = v245;
              *((_OWORD *)v241 - 1) = v246;
            }
            while ( v241 != &a6[8 * v243 + 8] );
            v248 = ((int)v243 + 1LL) << 6;
            v249 = (double *)((char *)v580 + v248);
            v250 = (double *)((char *)a6 + v248);
          }
          switch ( v240 )
          {
            case 1LL:
              goto LABEL_325;
            case 2LL:
              goto LABEL_324;
            case 3LL:
              goto LABEL_323;
            case 4LL:
              goto LABEL_322;
            case 5LL:
              goto LABEL_321;
            case 6LL:
              goto LABEL_320;
            case 7LL:
              v250[6] = v249[6];
LABEL_320:
              v250[5] = v249[5];
LABEL_321:
              v250[4] = v249[4];
LABEL_322:
              v250[3] = v249[3];
LABEL_323:
              v250[2] = v249[2];
LABEL_324:
              v250[1] = v249[1];
LABEL_325:
              *v250 = *v249;
              break;
            default:
              goto LABEL_326;
          }
        }
        goto LABEL_326;
      }
LABEL_553:
      operator delete[](v585);
      goto LABEL_210;
    }
    if ( !v237 )
    {
      v239 = a4 >> 3;
      if ( a4 >> 3 <= 0 )
      {
        v452 = v580;
        v451 = a6;
      }
      else
      {
        v443 = a6;
        v444 = (unsigned int)(v239 - 1);
        v445 = v580;
        do
        {
          v446 = *((_OWORD *)v443 + 1);
          v443 += 8;
          v445 += 8;
          v447 = *((_OWORD *)v443 - 2);
          v448 = *((_OWORD *)v443 - 1);
          v449 = *((_OWORD *)v443 - 4);
          *((_OWORD *)v445 - 3) = v446;
          *((_OWORD *)v445 - 4) = v449;
          *((_OWORD *)v445 - 2) = v447;
          *((_OWORD *)v445 - 1) = v448;
        }
        while ( v443 != &a6[8 * v444 + 8] );
        v450 = ((int)v444 + 1LL) << 6;
        v451 = (double *)((char *)a6 + v450);
        v452 = (double *)((char *)v580 + v450);
      }
      v240 = (unsigned int)(a4 % 8);
      switch ( (int)v240 )
      {
        case 1:
          goto LABEL_645;
        case 2:
          goto LABEL_644;
        case 3:
          goto LABEL_643;
        case 4:
          goto LABEL_642;
        case 5:
          goto LABEL_641;
        case 6:
          goto LABEL_640;
        case 7:
          v452[6] = v451[6];
LABEL_640:
          v452[5] = v451[5];
LABEL_641:
          v452[4] = v451[4];
LABEL_642:
          v452[3] = v451[3];
LABEL_643:
          v452[2] = v451[2];
LABEL_644:
          v452[1] = v451[1];
LABEL_645:
          *v452 = *v451;
          if ( v238 )
            goto LABEL_553;
          goto LABEL_212;
        default:
          goto LABEL_209;
      }
    }
    if ( v238 )
      goto LABEL_553;
LABEL_326:
    operator delete[](v580);
  }
  v558 = v93;
  for ( ii = 1; ; ++ii )
  {
    v355 = v630[ii - 1];
    if ( v355 )
      operator delete[](v355);
    v356 = (void *)v29[ii - 1];
    if ( v356 )
      operator delete[](v356);
    if ( ii == 7 )
      break;
    v354 = v624[ii];
    if ( v354 )
      operator delete[](v354);
  }
  operator delete[](v558);
  operator delete[](v625);
  operator delete[](v32);
  operator delete[](v34);
  operator delete[](v630);
  operator delete[](v29);
  operator delete[](v624);
  operator delete[](v581);
  v357 = (void **)&v706;
  do
  {
    if ( *v357 )
      operator delete[](*v357);
    ++v357;
  }
  while ( v689 != v357 );
  operator delete[](v634);
  *(_QWORD *)(a1 + 8) = 0;
  if ( a4 <= 0 )
  {
    v358 = 0.0;
  }
  else
  {
    v358 = 0.0;
    v359 = 0;
    do
    {
      v360 = a6[v359 / 8] * a16[v359 / 8];
      v359 += 8LL;
      v358 = v358 + v360;
    }
    while ( 8LL * (unsigned int)(a4 - 1) + 8 != v359 );
    *(double *)(a1 + 8) = v358;
  }
  if ( v562 )
  {
    v538 = 0;
    do
    {
      v539 = *((int *)v582 + v538);
      v540 = v684[v538++];
      a18[v539] = v540;
    }
    while ( (unsigned int)(v562 - 1) + 1LL != v538 );
    operator delete[](v582);
    if ( v568 )
      operator delete[](v568);
    if ( v584 )
      operator delete[](v584);
    if ( v571 )
      operator delete[](v571);
    if ( v646 )
      operator delete[](v646);
    operator delete[](v684);
  }
  v542 = v358 - a10;
  v543 = v647 * *(double *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = v570;
  *(double *)(a1 + 8) = v542;
  *(double *)(a1 + 24) = v542 + v543;
  return a1;
}

