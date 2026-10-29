char *__fastcall sub_34A920(
        __int64 a1,
        _UNKNOWN ***a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        char a14)
{
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rsi
  char *v21; // rax
  __int64 v22; // rbx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  char *result; // rax
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rcx
  char *v39; // rax
  __int64 v40; // rcx
  char *v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // r8
  __int64 v47; // rcx
  char *v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // r8
  unsigned int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 *v61; // rax
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rax
  int v66; // esi
  int *v67; // rax
  __int64 v68; // rcx
  char *v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rax
  unsigned int v72; // edx
  __int64 v73; // rsi
  __int64 *v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 *v77; // rax
  __int64 v78; // rbp
  __m128i v79; // xmm0
  __int64 v80; // rdi
  __int64 v81; // rdi
  __int64 v82; // rcx
  int *v83; // rax
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rax
  const __m128i *v88; // rsi
  const char **v89; // rax
  unsigned int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rax
  unsigned __int64 *v94; // rsi
  int *v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 *v100; // rsi
  const char **v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 *v104; // rax
  __int64 v105; // rbp
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rbx
  __int64 *v109; // rax
  __int64 v110; // rbp
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 *v114; // rax
  __int64 v115; // rbp
  __int64 v116; // rax
  unsigned int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rsi
  __int64 *v122; // rax
  __int64 v123; // rsi
  __int64 v124; // rax
  unsigned int v125; // eax
  __int64 v126; // rcx
  _QWORD *v127; // rbp
  __int64 v128; // rax
  _DWORD *v129; // r12
  int *v130; // rax
  int v131; // r13d
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rcx
  __int32 *v138; // rax
  __int64 v139; // rcx
  __int64 *v140; // rax
  __int64 v141; // rcx
  unsigned __int64 *v142; // rax
  unsigned int v143; // eax
  __int64 v144; // rdi
  __int64 v145; // rcx
  __int64 **v146; // rax
  __int64 v147; // rbx
  __int64 v148; // rax
  __int64 v149; // rcx
  char *v150; // rax
  unsigned int v151; // eax
  __int64 v152; // rsi
  __int64 v153; // rdi
  __int64 v154; // rsi
  __int64 v155; // rax
  char *v156; // rax
  const __m128i *v157; // roff
  unsigned int v158; // eax
  char v159; // si
  __int64 v160; // rax
  char *v161; // rax
  const __m128i *v162; // roff
  __int64 v163; // rcx
  __m128i **v164; // rax
  unsigned int v165; // eax
  __int64 v166; // rcx
  __int64 v167; // rdi
  __int64 v168; // rax
  unsigned __int64 v169; // rsi
  int *v170; // rax
  unsigned int v171; // eax
  __int64 v172; // rcx
  __int64 v173; // rdi
  __int64 v174; // rax
  __int64 v175; // rsi
  int *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rcx
  unsigned __int64 v179; // rbx
  char *v180; // rax
  unsigned __int8 v181; // bp
  __int64 v182; // rax
  __int64 v183; // rcx
  __int64 *v184; // rax
  __int64 v185; // rcx
  char *v186; // rax
  __int64 v187; // rcx
  char *v188; // rax
  unsigned int v189; // eax
  __int64 v190; // rcx
  __int64 v191; // rdi
  __int64 v192; // rax
  __int64 v193; // rsi
  int *v194; // rax
  unsigned int v195; // eax
  __int64 v196; // rcx
  __int64 v197; // rdi
  __int64 v198; // r8
  _BYTE *v199; // rsi
  __int64 v200; // rcx
  int v201; // r10d
  __int64 v202; // r8
  char v203; // cl
  __int64 v204; // rax
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 *v207; // rax
  unsigned int v208; // eax
  __int64 v209; // rcx
  __int64 v210; // rbx
  __int64 v211; // rax
  __int64 v212; // rbp
  char *v213; // rax
  _QWORD *v214; // r12
  __int64 v215; // rax
  __int64 v216; // rcx
  __int64 *v217; // rax
  __int64 v218; // rbx
  __int64 v219; // rax
  __int64 v220; // rbx
  __int64 v221; // rax
  __int64 v222; // rcx
  __int64 *v223; // rax
  __int64 v224; // rcx
  __int64 *v225; // rax
  unsigned int v226; // eax
  __int64 v227; // rsi
  __int64 v228; // rdi
  __int64 v229; // rcx
  __int64 v230; // rsi
  __int64 v231; // rax
  const char *v232; // r8
  char *v233; // rax
  __int64 v234; // rcx
  __int64 *v235; // rax
  __int64 v236; // rcx
  int *v237; // rax
  unsigned int v238; // eax
  __int64 v239; // rcx
  __int64 v240; // rdi
  __int64 v241; // rax
  __int64 v242; // rsi
  __int64 *v243; // rax
  __int64 v244; // rcx
  char *v245; // rax
  __int64 v246; // rcx
  __int64 v247; // rbx
  __int64 *v248; // rax
  __int64 v249; // rbp
  __int64 v250; // rax
  __int64 v251; // rcx
  __int64 *v252; // rax
  unsigned int v253; // eax
  __int64 v254; // rcx
  _QWORD *v255; // rbx
  __int64 v256; // rsi
  __int64 v257; // rbp
  __int64 v258; // rcx
  __int64 v259; // r12
  __int64 v260; // rax
  int v261; // r13d
  char *v262; // rax
  unsigned int v263; // r14d
  __int64 v264; // rax
  __int64 v265; // rcx
  __int64 **v266; // rax
  unsigned int v267; // eax
  __int64 v268; // rcx
  __int64 v269; // rdi
  __int64 v270; // rax
  int v271; // esi
  char *v272; // rax
  __int64 v273; // rcx
  char *v274; // rax
  unsigned int v275; // eax
  __int64 v276; // rcx
  __int64 v277; // rdi
  __int64 v278; // rax
  __int64 v279; // rsi
  __int64 *v280; // rax
  unsigned int v281; // eax
  __int64 v282; // rcx
  __int64 v283; // rdi
  __int64 v284; // rax
  __int64 v285; // rsi
  char *v286; // rax
  unsigned int v287; // edx
  __int64 v288; // rsi
  __int64 v289; // rdi
  __int64 v290; // rcx
  __int64 *v291; // rsi
  char *v292; // rax
  int v293; // r12d
  __int64 v294; // rax
  __int64 v295; // rcx
  char *v296; // rax
  unsigned __int64 v297; // rbx
  __int64 v298; // rax
  __int64 v299; // rbx
  __int64 v300; // rax
  __int64 v301; // rdx
  __int64 v302; // rcx
  unsigned int v303; // eax
  __int64 v304; // rcx
  __int64 v305; // rdi
  __int64 v306; // rax
  __int64 v307; // rsi
  __int64 *v308; // rax
  __int64 v309; // rbx
  __int64 v310; // rax
  unsigned int v311; // eax
  __int64 v312; // rcx
  __int64 v313; // rdi
  __int64 v314; // rax
  const __m128i *v315; // rsi
  int *v316; // rax
  __int64 v317; // rcx
  char *v318; // rax
  __int64 v319; // rcx
  __int64 **v320; // rax
  unsigned int v321; // eax
  __int64 v322; // rsi
  __int64 v323; // rdi
  __int64 v324; // rcx
  __int64 v325; // rsi
  __int64 v326; // rax
  _DWORD *v327; // r8
  char *v328; // rax
  __int64 v329; // rcx
  __int64 *v330; // rax
  unsigned int v331; // eax
  __int64 v332; // rcx
  __int64 v333; // rbx
  __int64 v334; // rax
  unsigned int v335; // ebp
  char *v336; // rax
  _BOOL4 v337; // r12d
  __int64 v338; // rax
  int v339; // r8d
  int v340; // r9d
  __int64 v341; // rcx
  __int64 v342; // rbx
  char *v343; // rax
  _QWORD *v344; // rbp
  __int64 v345; // rax
  __int64 v346; // rbx
  __int64 v347; // rax
  __int64 v348; // rdx
  __int64 v349; // rcx
  __int64 v350; // r8
  __int64 v351; // rcx
  unsigned __int64 **v352; // rax
  unsigned int v353; // eax
  __int64 v354; // rsi
  __int64 v355; // rdi
  __int64 v356; // rcx
  __int64 v357; // rsi
  __int64 v358; // r8
  __int64 v359; // r10
  __int64 v360; // rcx
  int v361; // r11d
  __int64 v362; // rax
  unsigned int v363; // r8d
  unsigned int *v364; // rax
  unsigned int v365; // eax
  unsigned __int64 v366; // rcx
  __int64 v367; // rdi
  __int64 v368; // rax
  unsigned __int64 v369; // rsi
  __int64 **v370; // rax
  __int64 v371; // rcx
  __int64 *v372; // rbx
  __int64 *v373; // rax
  __int64 v374; // rbx
  __int64 v375; // rax
  __int64 v376; // rbx
  __int64 v377; // rax
  __int64 v378; // rcx
  unsigned __int64 *v379; // rax
  __int64 **v380; // rax
  __int64 *v381; // rbx
  __int64 *v382; // rax
  __int64 v383; // rax
  __int64 v384; // rcx
  unsigned __int64 v385; // rbx
  __int64 *v386; // rax
  __int64 v387; // rbp
  __int64 v388; // rax
  __int64 v389; // rcx
  __int64 **v390; // rax
  __int64 **v391; // rax
  __int64 *v392; // rbx
  __int64 v393; // rcx
  __int64 *v394; // rax
  __int64 v395; // rcx
  __int64 **v396; // rax
  __int64 v397; // rcx
  char *v398; // rax
  __int64 v399; // rcx
  char *v400; // rax
  unsigned int v401; // eax
  __int64 v402; // rcx
  __int64 v403; // rdi
  __int64 v404; // rax
  _QWORD *v405; // rsi
  int *v406; // rax
  char *v407; // rax
  _QWORD *v408; // rbx
  unsigned int v409; // edx
  __int64 v410; // rcx
  _QWORD *v411; // rsi
  char *v412; // rax
  _QWORD *v413; // rax
  __int64 v414; // rcx
  int *v415; // rax
  unsigned int v416; // eax
  __int64 v417; // rsi
  __int64 v418; // rdi
  __int64 v419; // rcx
  __int64 v420; // rsi
  __int64 v421; // r8
  __int64 v422; // r10
  __int64 v423; // rcx
  __int64 v424; // r11
  __int64 v425; // rax
  __int64 v426; // r8
  __int64 *v427; // rax
  unsigned int v428; // eax
  __int64 v429; // rcx
  __int64 v430; // rdi
  __int64 v431; // r8
  __int64 v432; // rsi
  __int64 v433; // rcx
  __int64 v434; // r9
  __int64 v435; // rax
  char v436; // cl
  __int64 *v437; // rax
  unsigned int v438; // eax
  __int64 v439; // rsi
  _QWORD *v440; // rdi
  int v441; // esi
  __int64 v442; // rax
  char *v443; // rax
  const __m128i *v444; // roff
  __int64 v445; // rcx
  __int64 *v446; // rax
  unsigned int v447; // eax
  __int64 v448; // rsi
  __int64 v449; // rdi
  __int64 v450; // rcx
  __int64 v451; // rsi
  __int64 v452; // rax
  int v453; // r8d
  int *v454; // rax
  __int64 v455; // rcx
  __int64 v456; // rbx
  char *v457; // rax
  __int64 v458; // rbp
  __int64 v459; // r12
  __int64 v460; // rax
  unsigned int v461; // eax
  __int64 v462; // rsi
  __int64 v463; // rdi
  __int64 v464; // rcx
  unsigned int v465; // esi
  __int64 v466; // rax
  _QWORD *v467; // r8
  unsigned int *v468; // rax
  __int64 v469; // rcx
  unsigned __int64 *v470; // rax
  unsigned int v471; // eax
  __int64 v472; // rcx
  _QWORD *v473; // rdi
  __int64 v474; // rax
  __m128i *v475; // rsi
  char *v476; // rax
  __int64 v477; // rcx
  __int64 *v478; // rbx
  __int64 **v479; // rax
  unsigned int v480; // eax
  __int64 v481; // rcx
  _QWORD *v482; // rdi
  __int64 v483; // rsi
  __int64 *v484; // r9
  __int64 v485; // rcx
  __int64 v486; // rsi
  __int64 v487; // rax
  __int64 v488; // rcx
  __int64 *v489; // rax
  unsigned int v490; // edx
  __int64 v491; // rcx
  __int64 *v492; // rbx
  __int64 v493; // rsi
  __m128i *v494; // r12
  __int64 *v495; // rsi
  __int64 *v496; // rax
  __int64 v497; // rax
  __int64 v498; // rdx
  __int64 v499; // rbp
  __int64 v500; // rdx
  __int64 v501; // rcx
  char *v502; // rax
  _QWORD *v503; // rsi
  _QWORD *v504; // rdx
  _QWORD *v505; // rcx
  _QWORD *mm; // rax
  char *v507; // rax
  _QWORD *v508; // rbx
  unsigned int v509; // edx
  __int64 v510; // rcx
  _QWORD *v511; // rsi
  char *v512; // rax
  _QWORD *v513; // rax
  unsigned int v514; // edx
  __int64 v515; // rcx
  _QWORD *v516; // rsi
  char *v517; // rax
  __int64 *v518; // rdx
  __int64 v519; // rax
  unsigned int v520; // eax
  __int64 v521; // rcx
  __int64 v522; // rdi
  __int64 v523; // rsi
  unsigned int v524; // r10d
  __int64 v525; // rcx
  int v526; // r11d
  __int64 v527; // rsi
  __int64 v528; // rcx
  __int64 v529; // rax
  __int64 v530; // r8
  __int64 v531; // r9
  int *v532; // rax
  __int64 v533; // rcx
  int *v534; // rax
  unsigned int v535; // eax
  __int64 v536; // rsi
  _QWORD *v537; // rdi
  __int64 v538; // rcx
  __int64 v539; // rsi
  __int64 v540; // rax
  const char *v541; // r8
  int *v542; // rax
  __int64 v543; // rcx
  unsigned __int64 *v544; // rax
  unsigned int v545; // eax
  __int64 v546; // rsi
  __int64 *v547; // rdi
  __int64 v548; // rcx
  __int64 v549; // rsi
  __int64 v550; // r8
  int v551; // r10d
  __int64 v552; // rcx
  unsigned int v553; // r11d
  __int64 v554; // rax
  __int64 v555; // r8
  __int64 v556; // r9
  char *v557; // rax
  unsigned int v558; // eax
  __int64 v559; // rcx
  __int64 *v560; // rbx
  __int64 v561; // rax
  __int64 v562; // rbp
  signed int *v563; // rax
  signed int v564; // r12d
  _DWORD *v565; // rax
  unsigned int v566; // eax
  __int64 v567; // rcx
  __int64 v568; // rdi
  __int64 v569; // rax
  __int64 v570; // rsi
  char *v571; // rax
  unsigned int v572; // eax
  __int64 v573; // rsi
  unsigned __int64 v574; // rbx
  __int64 v575; // rcx
  _BYTE *v576; // rbp
  __int64 v577; // rax
  unsigned int v578; // r12d
  char *v579; // rax
  char v580; // r13
  __int64 v581; // rax
  unsigned int v582; // edx
  __int64 v583; // rcx
  __int64 *v584; // rax
  unsigned int v585; // edx
  __int64 v586; // rcx
  char *v587; // rax
  _QWORD *v588; // r12
  __int64 v589; // rax
  unsigned int v590; // eax
  __int64 v591; // rcx
  unsigned __int64 v592; // rbx
  __int64 v593; // rax
  __int64 v594; // rbp
  int *v595; // rax
  int v596; // r12d
  __int64 v597; // rax
  __int64 v598; // rcx
  unsigned __int64 v599; // rbx
  int *v600; // rax
  int v601; // ebp
  __int64 v602; // rax
  __int64 v603; // rcx
  unsigned __int64 v604; // rbx
  unsigned int *v605; // rax
  unsigned int v606; // ebp
  __int64 v607; // rax
  __int64 v608; // rcx
  unsigned __int64 v609; // rbx
  int *v610; // rax
  int v611; // ebp
  __int64 v612; // rax
  unsigned int v613; // edx
  __int64 v614; // rcx
  unsigned __int64 **v615; // rdi
  __int64 ***v616; // rax
  __int64 **v617; // rax
  unsigned int v618; // edx
  __int64 v619; // rcx
  unsigned __int64 *v620; // rbx
  __int64 v621; // rsi
  __m128i *v622; // rbp
  const __m128i *v623; // rsi
  __int64 v624; // rdx
  char *v625; // rax
  __int64 v626; // r12
  __m128i v627; // xmm0
  __int64 v628; // rsi
  __m128i v629; // xmm1
  char v630; // al
  __int64 v631; // rdx
  __m128i v632; // xmm1
  __int64 v633; // rcx
  __int64 *v634; // rax
  __int64 v635; // rcx
  __int64 *v636; // rax
  __int64 v637; // rcx
  __int64 *v638; // rax
  unsigned int v639; // eax
  __int64 v640; // rcx
  _QWORD *v641; // rdi
  __int64 v642; // rax
  __int64 v643; // rsi
  __int64 *v644; // rax
  __int64 v645; // rbx
  __int64 v646; // rax
  __int64 v647; // rcx
  int *v648; // rax
  __int64 v649; // rcx
  __int64 *v650; // rax
  __int64 v651; // rbx
  int v652; // eax
  unsigned int v653; // edx
  __int64 v654; // rcx
  _QWORD *v655; // rsi
  char *v656; // rax
  _QWORD *v657; // rax
  char *v658; // rax
  _QWORD *v659; // rbx
  __int64 v660; // rcx
  __int64 **v661; // rax
  __int64 v662; // rcx
  __int64 **v663; // rax
  unsigned int v664; // edx
  __int64 v665; // rcx
  __int64 *v666; // rbp
  __int64 v667; // rsi
  __int64 v668; // rdi
  __int64 v669; // rcx
  __int64 v670; // rsi
  unsigned int *v671; // rax
  __int64 v672; // rbx
  __m128i v673; // xmm0
  __int64 v674; // rdi
  char *v675; // rax
  _QWORD *v676; // rbx
  unsigned int v677; // edx
  __int64 v678; // rcx
  _QWORD *v679; // rsi
  char *v680; // rax
  _QWORD *v681; // rax
  unsigned int v682; // edx
  __int64 v683; // rcx
  _QWORD *v684; // rsi
  char *v685; // rax
  __int64 *v686; // rdx
  __int64 v687; // rax
  __int64 **v688; // rax
  __int64 *v689; // rbx
  unsigned int v690; // edx
  __int64 v691; // rcx
  __int64 *v692; // rbx
  __int64 v693; // rdx
  __int64 *v694; // rax
  __int64 v695; // rbp
  __m128i v696; // xmm0
  __int64 v697; // rdi
  unsigned int v698; // eax
  __int64 v699; // rcx
  _DWORD *v700; // rbx
  __int64 v701; // rax
  unsigned int v702; // ebp
  char *v703; // rax
  int v704; // r12d
  _QWORD *v705; // rax
  unsigned int v706; // eax
  __int64 v707; // rcx
  __int64 v708; // rbx
  __int64 v709; // rax
  _BYTE *v710; // rbp
  char *v711; // rax
  char v712; // r12
  __int64 v713; // rax
  unsigned int v714; // eax
  __int64 v715; // rcx
  __int64 v716; // rbx
  __int64 v717; // rax
  _BYTE *v718; // rbp
  char *v719; // rax
  char v720; // r12
  __int64 v721; // rax
  __int64 v722; // rcx
  int **v723; // rax
  unsigned int v724; // eax
  __int64 v725; // rsi
  int *v726; // rdi
  __int64 v727; // rcx
  unsigned __int64 v728; // rsi
  __int64 v729; // rax
  int *v730; // r8
  unsigned __int64 *v731; // rax
  int *v732; // rbx
  _QWORD *v733; // rax
  __int64 v734; // rcx
  __int64 *v735; // rax
  __int64 v736; // rcx
  __int64 *v737; // rax
  __int64 v738; // rsi
  __int64 v739; // rdi
  __int64 v740; // rcx
  int v741; // esi
  int v742; // r8d
  char *v743; // rax
  _QWORD *v744; // rsi
  _QWORD *v745; // rdx
  _QWORD *v746; // rcx
  _QWORD *n; // rax
  char *v748; // rax
  _QWORD *v749; // rbx
  unsigned int v750; // edx
  __int64 v751; // rcx
  _QWORD *v752; // rsi
  char *v753; // rax
  _QWORD *v754; // rax
  unsigned int v755; // edx
  __int64 v756; // rcx
  _QWORD *v757; // rsi
  char *v758; // rax
  __int64 *v759; // rdx
  __int64 v760; // rax
  __int64 v761; // rcx
  __int64 *v762; // rax
  __int64 v763; // rcx
  __int64 *v764; // rax
  unsigned int v765; // eax
  __int64 v766; // rcx
  _QWORD *v767; // rdi
  __int64 v768; // rax
  int v769; // esi
  int *v770; // rax
  unsigned int v771; // eax
  __int64 v772; // rcx
  unsigned __int8 *v773; // rbx
  __int64 v774; // rax
  unsigned int *v775; // rbp
  unsigned int *v776; // rax
  unsigned int v777; // r12d
  __int64 v778; // rax
  __int64 v779; // rcx
  char *v780; // rax
  __int64 v781; // rcx
  __int64 *v782; // rax
  unsigned __int64 ***v783; // rax
  unsigned int v784; // edx
  __int64 v785; // rcx
  unsigned __int64 **v786; // rdi
  __int64 ***v787; // rax
  __int64 **v788; // rax
  unsigned int v789; // eax
  __int64 v790; // rsi
  __int64 v791; // rdi
  __int64 v792; // rcx
  __int64 v793; // rsi
  __int64 v794; // rax
  int v795; // r8d
  char *v796; // rax
  unsigned int v797; // eax
  __int64 v798; // rsi
  __int64 v799; // rdi
  __int64 v800; // rcx
  _QWORD *v801; // rsi
  __int64 v802; // rax
  __int64 v803; // r8
  unsigned __int64 *v804; // rax
  __int64 *v805; // rax
  __int64 v806; // rax
  unsigned __int64 ***v807; // rax
  unsigned int v808; // edx
  __int64 v809; // rcx
  unsigned __int64 **v810; // rdi
  __int64 ***v811; // rax
  __int64 **v812; // rax
  unsigned int v813; // edx
  __int64 v814; // rcx
  __int64 *v815; // r14
  __int64 v816; // rsi
  __m128i *v817; // r13
  __int64 v818; // rcx
  __int64 v819; // rbx
  char *v820; // rax
  __int64 v821; // r15
  __int64 v822; // rax
  __int64 v823; // rax
  __int64 v824; // rcx
  char *v825; // rax
  __int64 v826; // rcx
  __int64 *v827; // rax
  __int64 v828; // rcx
  __int64 *v829; // rax
  __int64 v830; // rcx
  __int64 *v831; // rax
  __int64 v832; // rcx
  __int64 *v833; // rax
  __int64 v834; // rcx
  __int64 *v835; // rax
  __int64 v836; // rcx
  __int64 *v837; // rax
  __int64 v838; // rcx
  __int64 *v839; // rax
  unsigned int v840; // eax
  __int64 v841; // rcx
  __int64 *v842; // rdi
  __int64 v843; // rax
  __int64 v844; // rsi
  __m128i **v845; // rax
  __int64 v846; // rcx
  __int64 ***v847; // rax
  unsigned int v848; // eax
  __int64 v849; // rsi
  __int64 v850; // rdi
  __int64 v851; // rcx
  __int64 v852; // rsi
  __int64 v853; // r8
  signed int v854; // r10d
  __int64 v855; // rcx
  unsigned __int64 **v856; // r11
  __int64 v857; // rax
  int v858; // r8d
  char *v859; // rax
  unsigned int v860; // edx
  __int64 v861; // rsi
  __int64 v862; // rcx
  int v863; // r12d
  char *v864; // rax
  char v865; // r13
  __int64 v866; // rax
  unsigned int v867; // edx
  __int64 v868; // rcx
  int *v869; // rax
  int v870; // r12d
  __int64 v871; // rax
  __int64 v872; // rcx
  unsigned __int8 **v873; // rax
  unsigned int v874; // edx
  __int64 v875; // rcx
  _QWORD *v876; // rsi
  char *v877; // rax
  __int64 *v878; // rdx
  __int64 v879; // rax
  unsigned int v880; // eax
  __int64 v881; // rcx
  __int64 v882; // rdi
  __int64 v883; // rax
  __int64 v884; // rsi
  __int64 *v885; // rax
  __int64 v886; // rcx
  __int64 *v887; // rax
  unsigned int v888; // eax
  __int64 v889; // rcx
  __int64 v890; // rdi
  __int64 v891; // rax
  _BYTE *v892; // rsi
  char *v893; // rax
  __int64 v894; // rcx
  __int64 *v895; // rax
  unsigned int v896; // eax
  __int64 v897; // rcx
  __int64 v898; // rdi
  __int64 v899; // rax
  __int64 v900; // rsi
  __int64 *v901; // rax
  unsigned int v902; // edx
  __int64 v903; // rsi
  _QWORD *v904; // rdi
  __int64 v905; // rcx
  _QWORD **v906; // rsi
  char *v907; // rax
  _QWORD *v908; // rcx
  unsigned __int64 v909; // rdx
  unsigned __int64 v910; // rax
  unsigned __int64 v911; // rsi
  unsigned int v912; // edx
  __int64 v913; // rcx
  __int64 v914; // rsi
  __int64 v915; // rdi
  __int64 v916; // rcx
  __int64 v917; // rsi
  char *v918; // rax
  unsigned int v919; // edx
  __int64 v920; // rcx
  __int64 v921; // rsi
  __int64 v922; // rdi
  __int64 v923; // rcx
  unsigned int v924; // esi
  __int64 *v925; // rax
  unsigned int v926; // edx
  __int64 v927; // rcx
  __int64 v928; // rsi
  __int64 v929; // rdi
  __int64 v930; // rcx
  __int64 v931; // rsi
  char *v932; // rax
  unsigned int v933; // eax
  __int64 v934; // rcx
  __int64 *v935; // rbx
  __int64 v936; // rax
  __int64 v937; // rdi
  __int64 *v938; // rax
  unsigned int v939; // edx
  __int64 v940; // rcx
  __int64 v941; // rsi
  __int64 v942; // rdi
  __int64 v943; // rcx
  unsigned int v944; // esi
  __int64 *v945; // rax
  unsigned int v946; // eax
  __int64 v947; // rcx
  __int64 *v948; // rbx
  __int64 v949; // rax
  _QWORD *v950; // rdi
  __int64 *v951; // rax
  __int64 v952; // rcx
  unsigned __int64 *v953; // rax
  __int64 v954; // rcx
  __int64 *v955; // rax
  __int64 v956; // rcx
  __int64 *v957; // rax
  __int64 v958; // rcx
  int *v959; // rax
  __int64 v960; // rcx
  signed int *v961; // rax
  unsigned int v962; // edx
  __int64 v963; // rcx
  unsigned __int64 *v964; // rbx
  __int64 v965; // rsi
  __m128i *v966; // rbp
  __int64 v967; // rcx
  __int64 v968; // rsi
  __int64 v969; // rdx
  char *v970; // rax
  __int64 *v971; // r12
  size_t v972; // r13
  __int64 v973; // r8
  void *v974; // rcx
  int v975; // r15d
  __int64 v976; // r14
  __m128i v977; // xmm0
  __int64 v978; // rax
  unsigned int v979; // edx
  __int64 v980; // rsi
  _QWORD *v981; // rbp
  __int64 v982; // rcx
  _QWORD **v983; // r12
  __int64 *v984; // rax
  _QWORD *v985; // rbx
  _QWORD *v986; // rdx
  __int64 v987; // r13
  __int64 v988; // rcx
  __int64 *v989; // rax
  __int64 v990; // rcx
  __int64 *v991; // rax
  __int64 v992; // rcx
  __int64 **v993; // rax
  __int64 v994; // rcx
  __int64 *v995; // rax
  unsigned int v996; // eax
  __int64 v997; // rsi
  __int64 v998; // rdi
  __int64 v999; // rcx
  __int128 *v1000; // rsi
  __int64 v1001; // rax
  _QWORD *v1002; // r8
  __int64 **v1003; // rax
  __int64 v1004; // rcx
  __int64 *v1005; // rax
  int v1006; // ebx
  __int64 v1007; // rax
  int v1008; // ebx
  unsigned int v1009; // eax
  __int64 v1010; // rcx
  __int128 v1011; // rdi
  __int64 v1012; // rsi
  __int64 v1013; // r9
  __int64 v1014; // rcx
  __int64 v1015; // rax
  __int64 v1016; // rcx
  char *v1017; // rax
  __int64 *v1018; // rdx
  unsigned int v1019; // edx
  __int64 v1020; // rsi
  unsigned __int64 *v1021; // rbx
  __int64 v1022; // rcx
  __m128i *v1023; // rdi
  __int64 *v1024; // rax
  __int64 v1025; // rsi
  unsigned __int64 ***v1026; // rax
  unsigned int v1027; // edx
  __int64 v1028; // rcx
  unsigned __int64 **v1029; // rdi
  __int64 ***v1030; // rax
  __int64 **v1031; // rax
  __int64 v1032; // rcx
  __int64 v1033; // rbx
  __int64 *v1034; // rax
  __int64 v1035; // rbp
  __int64 v1036; // rax
  unsigned int v1037; // eax
  __int64 v1038; // rsi
  unsigned __int64 v1039; // rdi
  __int64 v1040; // rcx
  __int64 *v1041; // rsi
  __int64 v1042; // rax
  int v1043; // r8d
  unsigned int *v1044; // rax
  unsigned int v1045; // edx
  __int64 v1046; // rcx
  unsigned __int64 *v1047; // rbx
  __int64 v1048; // rsi
  __m128i *v1049; // rdi
  __int64 v1050; // rcx
  __int64 v1051; // rsi
  char *v1052; // rax
  int *v1053; // rax
  int v1054; // edx
  int v1055; // eax
  unsigned int v1056; // edx
  __int64 v1057; // rsi
  _QWORD *v1058; // rbp
  __int64 v1059; // rcx
  _QWORD **v1060; // r12
  __int64 *v1061; // rax
  _QWORD *v1062; // rbx
  _QWORD *v1063; // rdx
  __int64 v1064; // r13
  __int64 v1065; // rcx
  __int64 *v1066; // rax
  __int64 v1067; // rcx
  int *v1068; // rax
  __int64 v1069; // rcx
  char *v1070; // rax
  __int64 v1071; // rcx
  const char **v1072; // rax
  unsigned int v1073; // edx
  __int64 v1074; // rcx
  _QWORD *v1075; // rsi
  char *v1076; // rax
  __int64 *v1077; // rdx
  __int64 v1078; // rax
  __int64 v1079; // rcx
  __int64 **v1080; // rax
  unsigned int v1081; // eax
  __int64 v1082; // rsi
  __int64 v1083; // rdi
  int v1084; // esi
  __int64 v1085; // rax
  char *v1086; // rax
  const __m128i *v1087; // roff
  unsigned int v1088; // eax
  __int64 v1089; // rsi
  __int64 v1090; // rdi
  int v1091; // esi
  __int64 v1092; // rax
  char *v1093; // rax
  const __m128i *v1094; // roff
  unsigned int v1095; // eax
  __int64 v1096; // rcx
  __int64 v1097; // rbx
  __int64 v1098; // rsi
  __int64 v1099; // rbp
  __int64 v1100; // rcx
  int v1101; // r12d
  __int64 v1102; // rax
  __int64 v1103; // r13
  __int32 *v1104; // rax
  __int32 v1105; // r14d
  __int64 v1106; // rax
  __int64 v1107; // rcx
  unsigned __int8 **v1108; // rax
  unsigned int v1109; // edx
  __int64 v1110; // rsi
  __int64 v1111; // rbp
  __int64 v1112; // rcx
  __int64 v1113; // r12
  const char *v1114; // r13
  __int64 v1115; // rcx
  char *v1116; // rax
  _DWORD *v1117; // r14
  unsigned int v1118; // eax
  __int64 v1119; // rsi
  __int64 v1120; // rdi
  __int64 v1121; // rcx
  __int64 v1122; // rsi
  __int64 v1123; // rax
  __int64 v1124; // r8
  int *v1125; // rax
  unsigned int v1126; // edx
  __int64 v1127; // rcx
  _QWORD *v1128; // rsi
  char *v1129; // rax
  _QWORD *v1130; // rax
  unsigned int v1131; // edx
  __int64 v1132; // rcx
  _QWORD *v1133; // rsi
  char *v1134; // rax
  __int64 *v1135; // rdx
  __int64 v1136; // rax
  __int64 **v1137; // rax
  __int64 *v1138; // rbx
  __int64 v1139; // rcx
  __int64 *v1140; // rax
  __int64 v1141; // rcx
  __int64 **v1142; // rax
  __int64 v1143; // rcx
  __int64 *v1144; // rax
  unsigned int v1145; // eax
  __int64 v1146; // rcx
  __int64 v1147; // rdi
  __int64 v1148; // rax
  _QWORD *v1149; // rsi
  __int64 *v1150; // rax
  unsigned int v1151; // eax
  __int64 v1152; // rcx
  __int64 v1153; // rdi
  __int64 v1154; // rax
  const char *v1155; // rsi
  char *v1156; // rax
  const __m128i *v1157; // roff
  unsigned int v1158; // edx
  __int64 v1159; // rsi
  _QWORD *v1160; // rbp
  __int64 v1161; // rcx
  _QWORD **v1162; // r13
  __int64 **v1163; // rax
  _QWORD *v1164; // rbx
  _QWORD *v1165; // rdx
  __int64 *v1166; // r12
  char *v1167; // r14
  char *v1168; // r15
  unsigned int v1169; // eax
  unsigned int v1170; // eax
  __int64 v1171; // rcx
  __int64 *v1172; // rax
  __int64 v1173; // rcx
  int *v1174; // rax
  __int64 v1175; // rcx
  int **v1176; // rax
  __int64 v1177; // rcx
  unsigned int *v1178; // rax
  __int64 v1179; // rcx
  char *v1180; // rax
  unsigned int v1181; // eax
  __int64 v1182; // rcx
  char *v1183; // rdi
  __int64 v1184; // rax
  _QWORD *v1185; // rsi
  char *v1186; // rax
  char *v1187; // rax
  _QWORD *v1188; // rbx
  unsigned int v1189; // edx
  __int64 v1190; // rcx
  _QWORD *v1191; // rsi
  char *v1192; // rax
  _QWORD *v1193; // rax
  __int64 v1194; // rcx
  __int64 *v1195; // rax
  __int64 v1196; // rcx
  __int64 **v1197; // rax
  unsigned int v1198; // eax
  __int64 v1199; // rcx
  _QWORD *v1200; // rbx
  __int64 v1201; // rax
  _QWORD *v1202; // rbp
  char *v1203; // rax
  int v1204; // r12d
  __int64 v1205; // rax
  __int64 *v1206; // rax
  __int64 v1207; // rax
  unsigned int v1208; // edx
  __int64 v1209; // rcx
  unsigned __int64 **v1210; // rdi
  __int64 ***v1211; // rax
  __int64 **v1212; // rax
  unsigned int v1213; // edx
  __int64 v1214; // rcx
  __int64 *v1215; // rbx
  __int64 v1216; // rsi
  __m128i *v1217; // r12
  __int64 v1218; // rcx
  __int64 *v1219; // rsi
  __int64 v1220; // rdx
  char *v1221; // rax
  __int64 v1222; // r13
  unsigned __int64 v1223; // rax
  __int64 v1224; // r14
  void *v1225; // rcx
  __m128i v1226; // xmm0
  __int64 v1227; // rdi
  __int64 v1228; // rcx
  char *v1229; // rax
  __int64 v1230; // rcx
  int **v1231; // rax
  __int64 v1232; // rcx
  int **v1233; // rax
  __int64 **v1234; // rax
  __int64 *v1235; // rax
  __int64 v1236; // rdx
  unsigned __int64 v1237; // rax
  __int64 v1238; // rcx
  __int64 *v1239; // rax
  __int64 **v1240; // rax
  __int64 *v1241; // rbx
  __int64 *v1242; // rax
  __int64 v1243; // rax
  __int64 v1244; // rcx
  __int64 *v1245; // rax
  __int64 v1246; // rcx
  __int64 *v1247; // rax
  __int64 v1248; // rcx
  char *v1249; // rax
  __int64 v1250; // rcx
  char *v1251; // rax
  unsigned __int64 ***v1252; // rax
  unsigned int v1253; // edx
  __int64 v1254; // rcx
  unsigned __int64 **v1255; // rdi
  __int64 ***v1256; // rax
  __int64 **v1257; // rax
  __int64 v1258; // rcx
  char *v1259; // rax
  unsigned int v1260; // eax
  __int64 v1261; // rcx
  __int64 v1262; // rbx
  __int64 v1263; // rax
  __int64 v1264; // rbp
  char *v1265; // rax
  char v1266; // r12
  __int64 v1267; // rax
  unsigned int v1268; // eax
  __int64 v1269; // rsi
  __int64 v1270; // rdi
  __int64 v1271; // rcx
  __int64 v1272; // rsi
  __int64 v1273; // rax
  __int64 v1274; // r8
  char *v1275; // rax
  unsigned int v1276; // eax
  __int64 v1277; // rcx
  _QWORD *v1278; // rbx
  __int64 v1279; // rax
  unsigned __int64 v1280; // rbp
  int *v1281; // rax
  int v1282; // r12d
  __int64 v1283; // rax
  unsigned int v1284; // eax
  __int64 v1285; // rsi
  char *v1286; // rbx
  __int64 v1287; // rcx
  unsigned int v1288; // ebp
  __int64 v1289; // rax
  __int64 v1290; // r12
  int *v1291; // rax
  int v1292; // r13d
  __int64 v1293; // rax
  unsigned int v1294; // eax
  __int64 v1295; // rcx
  unsigned __int8 *v1296; // rbx
  __int64 v1297; // rax
  int v1298; // ebp
  int *v1299; // rax
  int v1300; // r12d
  __int64 v1301; // rax
  __int64 v1302; // rcx
  unsigned __int64 v1303; // rbx
  signed int *v1304; // rax
  signed int v1305; // ebp
  __int64 v1306; // rax
  __int64 v1307; // rcx
  __int64 **v1308; // rax
  __int64 *v1309; // rbx
  unsigned int v1310; // eax
  __int64 v1311; // rcx
  __int64 v1312; // rdi
  __int64 v1313; // rsi
  __int64 v1314; // r9
  __int64 v1315; // rcx
  __int64 v1316; // rsi
  __int64 v1317; // rax
  unsigned int v1318; // ecx
  unsigned int *v1319; // rax
  __int64 v1320; // rcx
  int *v1321; // rax
  unsigned int v1322; // eax
  __int64 v1323; // rcx
  _QWORD *v1324; // rdi
  __int64 v1325; // rax
  int v1326; // esi
  int *v1327; // rax
  __int64 v1328; // rcx
  int *v1329; // rax
  unsigned int v1330; // eax
  __int64 v1331; // rsi
  unsigned int *v1332; // rbx
  __int64 v1333; // rcx
  __int64 v1334; // rbp
  __int64 v1335; // rsi
  __int64 v1336; // r12
  __int64 v1337; // rcx
  int **v1338; // r13
  __int64 v1339; // rax
  __m128 **v1340; // r14
  unsigned int *v1341; // rax
  unsigned int v1342; // r15d
  unsigned __int64 *v1343; // rax
  __int64 v1344; // rcx
  __int64 *v1345; // rax
  char *v1346; // rax
  __int64 v1347; // rax
  __int64 v1348; // rcx
  char *v1349; // rax
  __int64 v1350; // rcx
  char **v1351; // rax
  unsigned int v1352; // edx
  __int64 v1353; // rsi
  unsigned __int64 *v1354; // rbp
  __int64 v1355; // rcx
  unsigned __int64 *v1356; // r12
  int **v1357; // rax
  unsigned __int64 v1358; // rbx
  unsigned __int64 v1359; // rdx
  int *v1360; // r13
  __int64 v1361; // rcx
  __int64 *v1362; // rax
  __int64 v1363; // rcx
  int *v1364; // rax
  __int64 v1365; // rcx
  __int64 *v1366; // rax
  unsigned int v1367; // edx
  __int64 v1368; // rcx
  unsigned __int64 **v1369; // rdi
  __int64 ***v1370; // rax
  __int64 **v1371; // rax
  __int64 v1372; // rcx
  __int64 *v1373; // rax
  __int64 v1374; // rcx
  __int64 *v1375; // rax
  unsigned int v1376; // edx
  __int64 v1377; // rsi
  __int64 v1378; // rcx
  unsigned int v1379; // r12d
  int *v1380; // rax
  int v1381; // r13d
  __int64 v1382; // rax
  unsigned int v1383; // edx
  __int64 v1384; // rcx
  int *v1385; // rax
  int v1386; // r12d
  __int64 v1387; // rax
  __int64 v1388; // rbx
  __int64 v1389; // rax
  unsigned int v1390; // ebx
  __int64 v1391; // rax
  unsigned __int64 ***v1392; // rax
  unsigned int v1393; // edx
  __int64 v1394; // rcx
  unsigned __int64 **v1395; // rdi
  __int64 ***v1396; // rax
  __int64 **v1397; // rax
  unsigned int v1398; // eax
  __int64 v1399; // rsi
  __int64 v1400; // rbx
  __int64 v1401; // rcx
  __int64 v1402; // rbp
  __int64 v1403; // rax
  unsigned int v1404; // r12d
  int *v1405; // rax
  int v1406; // r13d
  __int64 v1407; // rax
  unsigned int v1408; // eax
  __int64 v1409; // rcx
  __int64 *v1410; // rbx
  __int64 *v1411; // rdi
  __int64 v1412; // rcx
  unsigned __int64 v1413; // rbx
  __int64 *v1414; // rax
  __int64 v1415; // rbp
  __int64 v1416; // rax
  unsigned int v1417; // eax
  __int64 v1418; // rcx
  __int64 v1419; // rbx
  __int64 v1420; // rax
  __int64 v1421; // rbp
  const char **v1422; // rax
  const char *v1423; // r12
  __int64 v1424; // rax
  unsigned int v1425; // eax
  __int64 v1426; // rcx
  __int64 v1427; // rbx
  __int64 v1428; // rax
  int v1429; // ebp
  __int64 *v1430; // rax
  __int64 v1431; // r12
  __int64 v1432; // rax
  __int64 v1433; // rcx
  __int64 **v1434; // rax
  __int64 v1435; // rcx
  __int64 **v1436; // rax
  unsigned int v1437; // eax
  __int64 v1438; // rcx
  unsigned __int64 *v1439; // rbx
  __int64 v1440; // rax
  __int64 v1441; // rdi
  __int64 *v1442; // rax
  char *v1443; // rax
  _QWORD *v1444; // rbx
  unsigned int v1445; // edx
  __int64 v1446; // rcx
  _QWORD *v1447; // rsi
  char *v1448; // rax
  __int64 *v1449; // rdx
  __int64 v1450; // rax
  unsigned int v1451; // eax
  __int64 v1452; // rsi
  __int64 *v1453; // rdi
  __int64 v1454; // rcx
  _QWORD *v1455; // rsi
  __int64 v1456; // rax
  __int64 *v1457; // r8
  char *v1458; // rax
  char *v1459; // rax
  _QWORD *v1460; // rsi
  _QWORD *v1461; // rdx
  _QWORD *v1462; // rcx
  _QWORD *i; // rax
  char *v1464; // rax
  _QWORD *v1465; // rbx
  unsigned int v1466; // edx
  __int64 v1467; // rcx
  _QWORD *v1468; // rsi
  char *v1469; // rax
  _QWORD *v1470; // rax
  unsigned int v1471; // edx
  __int64 v1472; // rcx
  _QWORD *v1473; // rsi
  char *v1474; // rax
  __int64 *v1475; // rdx
  __int64 v1476; // rax
  __int64 v1477; // rcx
  __int64 *v1478; // rax
  __int64 v1479; // rcx
  char *v1480; // rax
  unsigned int v1481; // eax
  __int64 v1482; // rcx
  __int64 v1483; // rdi
  __int64 v1484; // rax
  __int64 v1485; // rsi
  __int64 *v1486; // rax
  unsigned int v1487; // eax
  __int64 v1488; // rcx
  __int64 v1489; // rdi
  __int64 v1490; // rax
  int v1491; // esi
  int *v1492; // rax
  __int64 v1493; // rcx
  __int64 *v1494; // rax
  __int64 v1495; // rcx
  __int64 *v1496; // rax
  __int64 v1497; // rsi
  __int64 *v1498; // rbx
  __int64 v1499; // rcx
  int v1500; // ebp
  unsigned int v1501; // r12d
  _DWORD *v1502; // rax
  __int64 v1503; // rcx
  unsigned int v1504; // ebx
  char *v1505; // rax
  unsigned int v1506; // ebp
  __int64 v1507; // rax
  unsigned int v1508; // eax
  __int64 v1509; // rcx
  _QWORD *v1510; // rdi
  __int64 v1511; // rsi
  __m128i *v1512; // r9
  __int64 v1513; // rcx
  __int64 *v1514; // rsi
  __int64 v1515; // rax
  __int64 v1516; // rcx
  unsigned int *v1517; // rax
  unsigned int v1518; // eax
  __int64 v1519; // rsi
  _QWORD *v1520; // rdi
  __int64 v1521; // rcx
  __m128i *v1522; // rsi
  __int64 v1523; // rax
  __int64 *v1524; // r8
  unsigned int *v1525; // rax
  char *v1526; // rax
  _QWORD *v1527; // rsi
  _QWORD *v1528; // rdx
  _QWORD *v1529; // rcx
  _QWORD *nn; // rax
  unsigned int v1531; // edx
  __int64 v1532; // rsi
  _QWORD *v1533; // rdi
  __int64 v1534; // rcx
  _QWORD **v1535; // rsi
  char *v1536; // rax
  _QWORD *v1537; // rcx
  unsigned __int64 v1538; // rdx
  __int64 v1539; // rsi
  unsigned __int8 v1540; // al
  unsigned __int8 v1541; // r9
  __int64 v1542; // rbx
  unsigned int v1543; // eax
  __int64 v1544; // rcx
  __int64 v1545; // rdi
  __int64 v1546; // rax
  __int64 *v1547; // rsi
  __int64 *v1548; // rax
  __int64 v1549; // rcx
  unsigned __int64 v1550; // rbx
  __int64 *v1551; // rax
  __int64 v1552; // rbp
  __int64 v1553; // rax
  unsigned int v1554; // eax
  __int64 v1555; // rsi
  __int64 *v1556; // rdi
  __int64 v1557; // rcx
  int *v1558; // rsi
  __int64 v1559; // rax
  int v1560; // r8d
  int *v1561; // rax
  __int64 v1562; // rcx
  __int64 **v1563; // rax
  __int64 v1564; // rcx
  __int64 **v1565; // rax
  unsigned __int64 ***v1566; // rax
  unsigned int v1567; // edx
  __int64 v1568; // rcx
  unsigned __int64 **v1569; // rdi
  __int64 ***v1570; // rax
  __int64 **v1571; // rax
  __int64 *v1572; // rax
  __int64 v1573; // rbp
  __int64 v1574; // rbx
  __int64 v1575; // rcx
  __int64 *v1576; // rbx
  char *v1577; // rax
  unsigned int v1578; // ebp
  __int64 v1579; // rax
  __int64 v1580; // rcx
  int *v1581; // rax
  __int64 v1582; // rcx
  _BYTE *v1583; // rbx
  char *v1584; // rax
  char v1585; // bp
  __int64 v1586; // rax
  __int64 v1587; // rcx
  __int64 v1588; // r8
  int v1589; // r9d
  char *v1590; // rax
  _QWORD *v1591; // rsi
  _QWORD *v1592; // rdx
  _QWORD *v1593; // rcx
  _QWORD *kk; // rax
  unsigned int v1595; // eax
  __int64 v1596; // rsi
  __int64 v1597; // rdi
  __int64 v1598; // rcx
  __int64 v1599; // rsi
  __int64 v1600; // r8
  __int64 *v1601; // r10
  __int64 v1602; // rcx
  __int64 v1603; // r11
  __int64 v1604; // rax
  __int64 v1605; // r8
  char *v1606; // rax
  __int64 v1607; // rcx
  __int64 v1608; // rbp
  char *v1609; // rax
  __int64 v1610; // rbx
  __int64 v1611; // rax
  int v1612; // ecx
  __int64 v1613; // rax
  char *v1614; // rax
  _QWORD *v1615; // rsi
  _QWORD *v1616; // rdx
  _QWORD *v1617; // rcx
  _QWORD *k; // rax
  char *v1619; // rax
  _QWORD *v1620; // rbx
  __int64 v1621; // rcx
  __int64 *v1622; // rax
  __int64 v1623; // rcx
  __int64 *v1624; // rax
  __int64 v1625; // rcx
  __m128i **v1626; // rax
  __int64 v1627; // rcx
  __int64 *v1628; // rax
  __int64 v1629; // rcx
  __int64 *v1630; // rax
  unsigned int v1631; // eax
  __int64 v1632; // rcx
  _QWORD *v1633; // rdi
  __int64 v1634; // rax
  __int64 v1635; // rsi
  char *v1636; // rax
  __int64 v1637; // rcx
  unsigned __int64 *v1638; // rax
  __int64 v1639; // rcx
  __int64 **v1640; // rax
  __int64 v1641; // rcx
  unsigned __int8 *v1642; // rbx
  char *v1643; // rax
  unsigned int v1644; // ebp
  __int64 v1645; // rax
  unsigned int v1646; // edx
  __int64 v1647; // rsi
  _QWORD *v1648; // rdi
  __int64 v1649; // rcx
  _QWORD **v1650; // rsi
  char *v1651; // rax
  _QWORD *v1652; // rcx
  unsigned __int64 v1653; // rdx
  unsigned __int64 *v1654; // rax
  unsigned __int64 v1655; // rsi
  __int64 v1656; // rcx
  __int64 *v1657; // rax
  unsigned int v1658; // eax
  __int64 v1659; // rcx
  __int64 *v1660; // rdi
  __int64 v1661; // rax
  int v1662; // esi
  int *v1663; // rax
  __int64 v1664; // rcx
  int *v1665; // rax
  __int64 v1666; // rcx
  __int64 *v1667; // rax
  __int64 v1668; // rcx
  __int64 *v1669; // rax
  __int64 **v1670; // rax
  __int64 *v1671; // rbx
  __int64 v1672; // rcx
  unsigned int *v1673; // rax
  unsigned int v1674; // eax
  __int64 v1675; // rcx
  _DWORD *v1676; // rdi
  __int64 v1677; // rax
  __int64 v1678; // rsi
  __int64 *v1679; // rax
  __int64 v1680; // rcx
  char *v1681; // rax
  unsigned int v1682; // eax
  __int64 v1683; // rcx
  __int64 v1684; // rsi
  __int64 v1685; // rax
  __m128i *v1686; // rdi
  char *v1687; // rax
  __int64 v1688; // rcx
  __int64 *v1689; // rax
  unsigned int v1690; // edx
  __int64 v1691; // rcx
  _QWORD *v1692; // rsi
  char *v1693; // rax
  __int64 *v1694; // rdx
  __int64 v1695; // rax
  __int64 v1696; // rcx
  unsigned __int64 ***v1697; // rax
  unsigned int v1698; // eax
  __int64 v1699; // rcx
  __int64 *v1700; // rdi
  __int64 v1701; // rax
  unsigned __int64 v1702; // rsi
  unsigned __int64 *v1703; // rax
  unsigned int v1704; // eax
  __int64 v1705; // rsi
  __int64 v1706; // rdi
  __int64 v1707; // rcx
  __int64 v1708; // rsi
  __int64 v1709; // rax
  __int64 v1710; // r8
  unsigned int *v1711; // rax
  __int64 *v1712; // rax
  __int64 v1713; // rax
  __int64 v1714; // rcx
  __int64 *v1715; // rax
  unsigned int v1716; // eax
  __int64 v1717; // rcx
  unsigned __int64 v1718; // rdi
  __int64 v1719; // rax
  __int64 *v1720; // rsi
  unsigned int *v1721; // rax
  __int64 *v1722; // rax
  __int64 v1723; // rax
  __int64 v1724; // rcx
  __int64 v1725; // rbx
  char *v1726; // rax
  char v1727; // bp
  __int64 v1728; // rax
  __int64 v1729; // rcx
  __int64 **v1730; // rax
  unsigned int v1731; // eax
  __int64 v1732; // rcx
  __int64 *v1733; // rdi
  __int64 v1734; // rax
  int v1735; // esi
  int *v1736; // rax
  unsigned int v1737; // edx
  __int64 v1738; // rcx
  __int64 *v1739; // rbx
  __int64 v1740; // rsi
  __m128i *v1741; // rbp
  unsigned int *v1742; // rsi
  __int64 *v1743; // rax
  __int64 v1744; // rax
  __int64 v1745; // rdx
  __m128i v1746; // xmm0
  __int64 v1747; // rcx
  __int64 *v1748; // rax
  __int64 v1749; // rcx
  char *v1750; // rax
  unsigned int v1751; // eax
  __int64 v1752; // rsi
  __int64 v1753; // rdi
  bool v1754; // zf
  char v1755; // si
  __int64 v1756; // rax
  char *v1757; // rax
  const __m128i *v1758; // roff
  __int64 v1759; // rcx
  char *v1760; // rax
  unsigned int v1761; // eax
  __int64 v1762; // rsi
  __int64 *v1763; // rbx
  __int64 v1764; // rcx
  __int64 *v1765; // rdi
  __int64 v1766; // rax
  __int64 v1767; // rsi
  char *v1768; // rax
  unsigned int v1769; // eax
  __int64 v1770; // rcx
  unsigned __int64 v1771; // rdi
  __int64 v1772; // rax
  char *v1773; // rsi
  unsigned int *v1774; // rax
  unsigned int v1775; // eax
  __int64 v1776; // rsi
  __int64 v1777; // rdi
  __int64 v1778; // rcx
  _QWORD *v1779; // rsi
  __int64 v1780; // rax
  _QWORD *v1781; // r8
  unsigned __int64 *v1782; // rax
  char *v1783; // rax
  _QWORD *v1784; // rsi
  _QWORD *v1785; // rdx
  _QWORD *v1786; // rcx
  _QWORD *j; // rax
  __int64 v1788; // rcx
  __m128i **v1789; // rax
  unsigned int v1790; // eax
  __int64 v1791; // rsi
  __int64 v1792; // rdi
  __int64 v1793; // rcx
  __int64 v1794; // rsi
  __int64 v1795; // rax
  __int64 v1796; // r8
  int *v1797; // rax
  __int64 *v1798; // rax
  __int64 v1799; // rax
  unsigned __int64 ***v1800; // rax
  __int64 **v1801; // rax
  __int64 *v1802; // rbx
  unsigned int v1803; // eax
  __int64 v1804; // rcx
  unsigned __int64 *v1805; // rbx
  __int64 v1806; // rax
  _QWORD *v1807; // rdi
  unsigned __int64 *v1808; // rax
  __int64 v1809; // rcx
  unsigned int *v1810; // rax
  __int64 v1811; // rcx
  __int64 v1812; // rbx
  char *v1813; // rax
  unsigned int v1814; // ebp
  __int64 v1815; // rax
  __int64 v1816; // rcx
  __int64 v1817; // rcx
  char *v1818; // rax
  __int64 **v1819; // rax
  __int64 *v1820; // rbx
  __int64 *v1821; // rax
  __int64 v1822; // rax
  __int64 v1823; // rcx
  __int64 *v1824; // rax
  __int64 v1825; // rcx
  __int64 v1826; // rbx
  char *v1827; // rax
  int v1828; // r14d
  __int64 v1829; // rax
  __int64 v1830; // rcx
  __int64 v1831; // rbx
  __int64 *v1832; // rax
  __int64 v1833; // rbp
  __int64 v1834; // rax
  char *v1835; // rax
  _QWORD *v1836; // rsi
  _QWORD *v1837; // rdx
  _QWORD *v1838; // rcx
  _QWORD *ii; // rax
  __int64 v1840; // rcx
  int *v1841; // rax
  __int64 v1842; // rcx
  __int64 **v1843; // rax
  __int64 v1844; // rcx
  __int64 *v1845; // rax
  __int64 v1846; // rcx
  _DWORD *v1847; // rbx
  __int64 *v1848; // rax
  __int64 v1849; // rbp
  __int64 v1850; // rax
  __int64 v1851; // rcx
  __int64 *v1852; // rax
  unsigned int v1853; // eax
  __int64 v1854; // rcx
  __int64 v1855; // rdi
  __int64 v1856; // rsi
  _QWORD *v1857; // r9
  __int64 v1858; // rcx
  __int64 v1859; // rsi
  __int64 v1860; // rax
  __int64 v1861; // rcx
  unsigned int *v1862; // rax
  unsigned int v1863; // eax
  __int64 v1864; // rcx
  __int64 v1865; // rdi
  __int64 v1866; // rsi
  __int64 *v1867; // r9
  __int64 v1868; // rcx
  __int64 v1869; // rsi
  __int64 v1870; // rax
  __int64 v1871; // rcx
  unsigned int *v1872; // rax
  unsigned int v1873; // edx
  __int64 v1874; // rsi
  _QWORD *v1875; // rdi
  __int64 v1876; // rcx
  _QWORD **v1877; // rsi
  char *v1878; // rax
  _QWORD *v1879; // rcx
  unsigned __int64 v1880; // rdx
  unsigned __int64 v1881; // rax
  unsigned __int64 v1882; // rsi
  __int64 v1883; // rcx
  __int64 v1884; // rbx
  char *v1885; // rax
  char v1886; // bp
  __int64 v1887; // rax
  unsigned int v1888; // edx
  __int64 v1889; // rcx
  __int64 *v1890; // rax
  __int64 *v1891; // rax
  __int64 v1892; // rax
  unsigned int v1893; // eax
  __int64 v1894; // rcx
  __int64 *v1895; // rdi
  __int64 v1896; // rsi
  __int64 *v1897; // r9
  __int64 v1898; // rcx
  __int64 v1899; // rsi
  __int64 v1900; // rax
  __int64 v1901; // rcx
  char *v1902; // rax
  __int64 v1903; // rcx
  int *v1904; // rax
  __int64 v1905; // rcx
  int *v1906; // rbx
  char *v1907; // rax
  int v1908; // ebp
  __int64 v1909; // rax
  __int64 v1910; // rcx
  __int64 *v1911; // rax
  __int64 **v1912; // rax
  __int64 *v1913; // rbx
  __int64 *v1914; // rax
  __int64 v1915; // rax
  __int64 v1916; // rcx
  __int64 *v1917; // rax
  unsigned int v1918; // eax
  __int64 v1919; // rcx
  __int64 v1920; // rbx
  __int64 v1921; // rax
  _BYTE *v1922; // rbp
  __int64 *v1923; // rax
  __int64 v1924; // r12
  __int64 v1925; // rax
  unsigned __int64 ***v1926; // rax
  __int64 v1927; // rcx
  __int64 *v1928; // rax
  __int64 v1929; // rcx
  __int64 *v1930; // rax
  __int64 v1931; // rcx
  char *v1932; // rax
  __int64 v1933; // rcx
  char *v1934; // rax
  unsigned int v1935; // edx
  __int64 v1936; // rcx
  __int64 *v1937; // rbx
  __int64 v1938; // rsi
  __m128i *v1939; // r12
  __int64 v1940; // rcx
  __int64 *v1941; // rsi
  __int64 v1942; // rdx
  char *v1943; // rax
  __int64 v1944; // r13
  unsigned __int64 v1945; // rax
  __int64 v1946; // r14
  void *v1947; // rcx
  __m128i v1948; // xmm0
  unsigned int v1949; // eax
  __int64 v1950; // rcx
  __int64 v1951; // rdi
  __int64 v1952; // rax
  int v1953; // esi
  __int64 *v1954; // rax
  unsigned int v1955; // eax
  __int64 v1956; // rcx
  __int64 *v1957; // rbx
  __int64 v1958; // rax
  _QWORD *v1959; // rdi
  __int64 *v1960; // rax
  unsigned int v1961; // eax
  __int64 v1962; // rcx
  __int64 v1963; // rdi
  __int64 v1964; // rax
  int v1965; // esi
  unsigned __int64 *v1966; // rax
  char *v1967; // rax
  _QWORD *v1968; // rsi
  _QWORD *v1969; // rdx
  _QWORD *v1970; // rcx
  _QWORD *m; // rax
  unsigned int v1972; // eax
  __int64 v1973; // rcx
  __int64 *v1974; // rdi
  __int64 v1975; // rax
  __int64 v1976; // rsi
  __int64 *v1977; // rax
  __int64 v1978; // rcx
  char *v1979; // rax
  __int64 v1980; // rcx
  __int64 *v1981; // rax
  __int64 v1982; // rcx
  char *v1983; // rax
  __int64 v1984; // rcx
  __int64 **v1985; // rax
  unsigned __int64 ***v1986; // rax
  __int64 v1987; // rcx
  int *v1988; // rax
  __int64 v1989; // rcx
  __int64 *v1990; // rax
  __int64 v1991; // rcx
  __int64 *v1992; // rax
  unsigned int v1993; // eax
  __int64 v1994; // rcx
  __int64 v1995; // rdi
  __int64 v1996; // rax
  int v1997; // esi
  int *v1998; // rax
  __int64 v1999; // rcx
  int *v2000; // rax
  unsigned int v2001; // edx
  __int64 v2002; // rcx
  _QWORD *v2003; // rsi
  char *v2004; // rax
  _QWORD *v2005; // rax
  __int64 v2006; // rcx
  int *v2007; // rax
  unsigned int v2008; // eax
  __int64 v2009; // rcx
  __int64 v2010; // rdi
  __int64 v2011; // rax
  __int64 v2012; // rsi
  char *v2013; // rax
  __int64 v2014; // rcx
  char *v2015; // rax
  unsigned int v2016; // eax
  __int64 v2017; // rsi
  _BYTE *v2018; // rbx
  __int64 v2019; // rcx
  __int64 v2020; // rbp
  __int64 v2021; // rax
  __int64 v2022; // r12
  __int64 *v2023; // rax
  __int64 v2024; // r13
  __int64 v2025; // rax
  unsigned __int64 ***v2026; // rax
  __int64 v2027; // rcx
  __int64 v2028; // rbx
  __int64 *v2029; // rax
  __int64 v2030; // rbp
  __int64 v2031; // rax
  unsigned int v2032; // eax
  __int64 v2033; // rcx
  int *v2034; // rdi
  __int64 v2035; // rax
  __int64 *v2036; // rsi
  unsigned int *v2037; // rax
  char *v2038; // rax
  _QWORD *v2039; // rsi
  _QWORD *v2040; // rdx
  _QWORD *v2041; // rcx
  _QWORD *jj; // rax
  __int64 v2043; // rcx
  __int64 *v2044; // rax
  __int64 v2045; // rcx
  unsigned __int8 **v2046; // rax
  unsigned int v2047; // edx
  __int64 v2048; // rcx
  unsigned __int64 **v2049; // rdi
  __int64 ***v2050; // rax
  __int64 **v2051; // rax
  unsigned int v2052; // eax
  __int64 v2053; // rcx
  __int64 v2054; // rdi
  __int64 v2055; // rax
  __int64 v2056; // rsi
  __int64 *v2057; // rax
  __int64 v2058; // rcx
  __int64 **v2059; // rax
  unsigned int v2060; // eax
  __int64 v2061; // rcx
  __int64 v2062; // rdi
  __int64 v2063; // rax
  __int64 v2064; // rsi
  __int64 *v2065; // rax
  unsigned int v2066; // edx
  __int64 v2067; // rcx
  _QWORD *v2068; // rsi
  char *v2069; // rax
  _QWORD *v2070; // rax
  __int64 v2071; // rcx
  const char **v2072; // rax
  __int64 v2073; // rcx
  __int64 *v2074; // rax
  unsigned int v2075; // edx
  __int64 v2076; // rcx
  unsigned __int64 *v2077; // rbp
  __int64 v2078; // rsi
  __m128i *v2079; // rbx
  unsigned __int64 *v2080; // rsi
  __int64 v2081; // rdx
  char *v2082; // rax
  __int64 v2083; // r12
  unsigned __int64 v2084; // rax
  size_t v2085; // r13
  __m128i si128; // xmm0
  unsigned int v2087; // eax
  __int64 v2088; // rcx
  __int64 v2089; // rdi
  __int64 v2090; // rax
  int v2091; // esi
  int *v2092; // rax
  unsigned int v2093; // edx
  __int64 v2094; // rsi
  _QWORD *v2095; // rdi
  __int64 v2096; // rcx
  _QWORD **v2097; // rsi
  char *v2098; // rax
  _QWORD *v2099; // rcx
  unsigned __int64 v2100; // rdx
  int v2101; // eax
  unsigned int v2102; // edx
  __int64 v2103; // rsi
  _QWORD *v2104; // rdi
  __int64 v2105; // rcx
  _QWORD **v2106; // rsi
  char *v2107; // rax
  _QWORD *v2108; // rcx
  unsigned __int64 v2109; // rdx
  unsigned __int64 v2110; // rax
  unsigned __int64 v2111; // rsi
  unsigned int v2112; // eax
  __int64 v2113; // rcx
  const char *v2114; // rdi
  __int64 v2115; // rax
  __int64 v2116; // rsi
  int *v2117; // rax
  unsigned int v2118; // eax
  __int64 v2119; // rcx
  __int64 v2120; // rdi
  __int64 v2121; // rsi
  unsigned int v2122; // r9d
  __int64 v2123; // rcx
  unsigned __int8 *v2124; // rsi
  __int64 v2125; // rax
  unsigned __int8 *v2126; // rcx
  unsigned __int8 **v2127; // rax
  unsigned int v2128; // edx
  __int64 v2129; // rcx
  _QWORD *v2130; // rsi
  char *v2131; // rax
  __int64 *v2132; // rdx
  __int64 v2133; // rax
  __int64 v2134; // rbx
  __int64 v2135; // rax
  __int64 v2136; // rbx
  __int64 v2137; // rax
  char *v2138; // rax
  _QWORD *v2139; // rbx
  __int64 v2140; // rcx
  __int64 *v2141; // rax
  __int64 v2142; // rcx
  __int64 *v2143; // rax
  __int64 v2144; // rcx
  unsigned __int8 **v2145; // rax
  unsigned int v2146; // eax
  __int64 v2147; // rcx
  __int128 v2148; // rdi
  __int64 v2149; // rsi
  __int64 v2150; // r9
  __int64 v2151; // rcx
  __int64 v2152; // rax
  __int64 v2153; // rcx
  unsigned int **v2154; // rax
  __int64 v2155; // rdx
  unsigned int v2156; // eax
  __int64 v2157; // rsi
  __int64 v2158; // rdi
  __int64 v2159; // rcx
  __int64 v2160; // rsi
  __int64 v2161; // rax
  __int64 v2162; // r8
  char *v2163; // rax
  unsigned int v2164; // eax
  __int64 v2165; // rsi
  __int64 v2166; // rdi
  __int64 v2167; // rcx
  __int64 v2168; // rsi
  __int64 v2169; // rax
  __int64 v2170; // r8
  __int64 *v2171; // rax
  __int64 v2172; // rcx
  __int64 **v2173; // rax
  unsigned int v2174; // eax
  __int64 v2175; // rcx
  unsigned __int8 *v2176; // rdi
  __int64 v2177; // rax
  __int64 v2178; // rsi
  unsigned int *v2179; // rax
  unsigned int v2180; // eax
  __int64 v2181; // rcx
  __int64 *v2182; // rdi
  __int64 v2183; // rax
  __int64 *v2184; // rsi
  char *v2185; // rax
  __m128i **v2186; // rdx
  char *v2187; // rdx
  __int64 *v2188; // rdx
  __int64 *v2189; // rdx
  char *v2190; // rdx
  char *v2191; // rdx
  __int64 *v2192; // rdx
  __int64 *v2193; // rdx
  int *v2194; // rdx
  char *v2195; // rdx
  __int64 *v2196; // rdx
  int *v2197; // rdx
  __int64 **v2198; // rdx
  char *v2199; // rdx
  __m128i **v2200; // rdx
  char *v2201; // rax
  __int64 **v2202; // rdx
  char *v2203; // rax
  __int64 *v2204; // rdx
  int *v2205; // rdx
  unsigned int *v2206; // rax
  char *v2207; // rdx
  __int64 *v2208; // rdx
  unsigned __int64 **v2209; // rdx
  unsigned int *v2210; // rdx
  __int64 *v2211; // rdx
  char *v2212; // rax
  unsigned int *v2213; // rdx
  __int64 *v2214; // rdx
  __int64 *v2215; // rdx
  __int64 *v2216; // rdx
  char *v2217; // rax
  int ***v2218; // rdx
  char *v2219; // rax
  __m128 ***v2220; // rdx
  int *v2221; // rdx
  int *v2222; // rdx
  __int64 *v2223; // rdx
  char *v2224; // rax
  __int64 *v2225; // rdx
  char *v2226; // rdx
  __int64 *v2227; // rdx
  char *v2228; // rdx
  char *v2229; // rdx
  __m128i **v2230; // rdx
  __int64 *v2231; // rdx
  int *v2232; // rdx
  __int64 *v2233; // rdx
  __int64 *v2234; // rdx
  char *v2235; // rax
  char *v2236; // rdx
  unsigned __int64 *v2237; // rdx
  int *v2238; // rdx
  char *v2239; // rdx
  char *v2240; // rax
  char **v2241; // rdx
  char *v2242; // rdx
  __int64 *v2243; // rdx
  char *v2244; // rax
  __int64 *v2245; // rdx
  char *v2246; // rdx
  unsigned int **v2247; // rdx
  __int64 *v2248; // rdx
  __int64 *v2249; // rdx
  __int64 *v2250; // rdx
  __int64 *v2251; // rdx
  char *v2252; // rdx
  unsigned int *v2253; // rdx
  char *v2254; // rdx
  unsigned __int64 *v2255; // rdx
  char *v2256; // rax
  int **v2257; // rdx
  char *v2258; // rdx
  char *v2259; // rdx
  char *v2260; // rax
  int *v2261; // rdx
  __m128i **v2262; // rdx
  __m128i **v2263; // rdx
  char *v2264; // rax
  __int64 **v2265; // rdx
  char *v2266; // rdx
  char *v2267; // rax
  unsigned int *v2268; // rdx
  __int64 *v2269; // rdx
  __int64 *v2270; // rdx
  char *v2271; // rax
  const char **v2272; // rdx
  __int64 *v2273; // rdx
  __int64 *v2274; // rdx
  unsigned int *v2275; // rdx
  __int64 *v2276; // rdx
  char *v2277; // rax
  unsigned int *v2278; // rdx
  __int64 *v2279; // rdx
  char *v2280; // rax
  __int64 *v2281; // rdx
  __int64 *v2282; // rdx
  __int64 *v2283; // rdx
  char *v2284; // rax
  __int64 *v2285; // rdx
  __int64 *v2286; // rdx
  int *v2287; // rdx
  __int64 *v2288; // rdx
  __m128i **v2289; // rdx
  char *v2290; // rax
  char *v2291; // rdx
  __m128i **v2292; // rdx
  __int128 **v2293; // rdx
  char *v2294; // rdx
  __m128i **v2295; // rdx
  __int64 *v2296; // rdx
  char *v2297; // rdx
  __int64 *v2298; // rdx
  int *v2299; // rdx
  char *v2300; // rax
  __int64 *v2301; // rdx
  __int64 *v2302; // rdx
  const char **v2303; // rdx
  char *v2304; // rax
  int *v2305; // rdx
  char *v2306; // rax
  int *v2307; // rdx
  __int64 *v2308; // rdx
  __int64 *v2309; // rdx
  char *v2310; // rax
  char *v2311; // rdx
  __int64 *v2312; // rdx
  char *v2313; // rax
  __int64 *v2314; // rdx
  char *v2315; // rdx
  __int64 *v2316; // rdx
  __int64 *v2317; // rdx
  __int64 *v2318; // rdx
  __int64 *v2319; // rdx
  unsigned __int64 **v2320; // rdx
  int *v2321; // rdx
  char *v2322; // rdx
  __int64 *v2323; // rdx
  char *v2324; // rdx
  __int64 *v2325; // rdx
  __int64 *v2326; // rdx
  __int64 *v2327; // rdx
  __int64 *v2328; // rdx
  char *v2329; // rax
  char *v2330; // rdx
  unsigned int *v2331; // rax
  unsigned int *v2332; // rdx
  __int64 *v2333; // rdx
  char *v2334; // rax
  char *v2335; // rdx
  __int64 *v2336; // rdx
  __int64 **v2337; // rdx
  __int64 *v2338; // rdx
  unsigned __int64 *v2339; // rdx
  __int64 *v2340; // rdx
  const __m128i **v2341; // rdx
  __int64 *v2342; // rdx
  unsigned __int64 *v2343; // rdx
  char *v2344; // rdx
  int *v2345; // rdx
  char *v2346; // rax
  char *v2347; // rdx
  __int64 *v2348; // rax
  __int64 *v2349; // rdx
  __int64 *v2350; // rax
  __int64 *v2351; // rdx
  __int64 *v2352; // rdx
  char *v2353; // rax
  const char **v2354; // rdx
  char *v2355; // rdx
  const __m128i **v2356; // rdx
  __int64 *v2357; // rdx
  char *v2358; // rax
  __int64 *v2359; // rdx
  __int64 *v2360; // rax
  __int64 *v2361; // rdx
  __int64 *v2362; // rax
  __int64 *v2363; // rdx
  int *v2364; // rdx
  char *v2365; // rax
  __m128i **v2366; // rdx
  char *v2367; // rax
  const __m128i **v2368; // rdx
  __m128i **v2369; // rdx
  char *v2370; // rdx
  int *v2371; // rdx
  __m128i **v2372; // rdx
  char *v2373; // rax
  char *v2374; // rdx
  __m128i **v2375; // rdx
  char *v2376; // rdx
  char *v2377; // rdx
  __int64 **v2378; // rdx
  __int64 *v2379; // rdx
  char *v2380; // rdx
  char *v2381; // rdx
  unsigned int *v2382; // rdx
  char *v2383; // rax
  int *v2384; // rdx
  __int64 *v2385; // rax
  __int64 *v2386; // rdx
  __int64 *v2387; // rax
  __int64 *v2388; // rdx
  char *v2389; // rax
  __int64 *v2390; // rdx
  __m128i **v2391; // rdx
  char *v2392; // rax
  char *v2393; // rdx
  char *v2394; // rdx
  int *v2395; // rdx
  int *v2396; // rdx
  __int64 *v2397; // rdx
  __int64 *v2398; // rdx
  unsigned __int64 *v2399; // rdx
  int **v2400; // rdx
  char *v2401; // rax
  int *v2402; // rdx
  int *v2403; // rdx
  char *v2404; // rdx
  char *v2405; // rdx
  char *v2406; // rax
  char *v2407; // rdx
  int *v2408; // rdx
  char *v2409; // rax
  __int64 **v2410; // rdx
  char *v2411; // rax
  char *v2412; // rdx
  __int64 *v2413; // rdx
  char *v2414; // rax
  __int64 *v2415; // rdx
  __int64 *v2416; // rdx
  __int64 *v2417; // rdx
  char *v2418; // rax
  int *v2419; // rdx
  unsigned int *v2420; // rax
  unsigned int *v2421; // rdx
  __int64 *v2422; // rax
  __int64 *v2423; // rdx
  __int64 *v2424; // rax
  __int64 *v2425; // rdx
  __int64 *v2426; // rdx
  char *v2427; // rax
  signed int *v2428; // rdx
  char *v2429; // rax
  unsigned __int64 ***v2430; // rdx
  int *v2431; // rax
  int *v2432; // rdx
  __int64 *v2433; // rdx
  __int64 **v2434; // rdx
  __int64 *v2435; // rdx
  __int64 **v2436; // rdx
  __int64 *v2437; // rax
  __int64 *v2438; // rdx
  char *v2439; // rax
  __int64 *v2440; // rdx
  __int64 *v2441; // rdx
  char *v2442; // rax
  int *v2443; // rdx
  char *v2444; // rdx
  __int64 *v2445; // rdx
  char *v2446; // rdx
  unsigned int *v2447; // rdx
  char *v2448; // rax
  char *v2449; // rdx
  __int64 *v2450; // rdx
  char *v2451; // rax
  __int64 *v2452; // rdx
  unsigned int *v2453; // rax
  unsigned int *v2454; // rdx
  __int64 **v2455; // rdx
  __int64 *v2456; // rdx
  char *v2457; // rax
  __int64 *v2458; // rdx
  __int64 *v2459; // rdx
  __int64 *v2460; // rdx
  __int64 *v2461; // rdx
  char *v2462; // rax
  __int64 *v2463; // rdx
  char *v2464; // rdx
  __int64 *v2465; // rdx
  char *v2466; // rdx
  char *v2467; // rax
  char *v2468; // rdx
  char *v2469; // rdx
  __int64 **v2470; // rdx
  char *v2471; // rdx
  __int64 **v2472; // rdx
  char *v2473; // rax
  int *v2474; // rdx
  int *v2475; // rdx
  int *v2476; // rax
  __int64 *v2477; // rdx
  char *v2478; // rax
  __int64 *v2479; // rdx
  char *v2480; // rdx
  char *v2481; // rdx
  char *v2482; // rax
  char *v2483; // rdx
  char *v2484; // rax
  __int64 *v2485; // rdx
  __m128i **v2486; // rdx
  __int64 **v2487; // rdx
  __int64 *v2488; // rdx
  char *v2489; // rax
  __int64 *v2490; // rdx
  __int64 **v2491; // rdx
  char *v2492; // rax
  __int64 *v2493; // rdx
  __int64 *v2494; // rax
  __int64 *v2495; // rdx
  const char **v2496; // rdx
  __int64 **v2497; // rdx
  char *v2498; // rax
  __int64 *v2499; // rdx
  char *v2500; // rax
  __int64 *v2501; // rdx
  char *v2502; // rdx
  char *v2503; // rdx
  int *v2504; // rdx
  __int64 **v2505; // rdx
  char *v2506; // rdx
  char *v2507; // rax
  unsigned __int8 **v2508; // rdx
  unsigned __int8 **v2509; // rax
  unsigned __int8 **v2510; // rdx
  __int64 *v2511; // rdx
  size_t v2512; // rbp
  void *v2513; // rax
  void *v2514; // rax
  size_t v2515; // rbp
  void *v2516; // rax
  void *v2517; // rax
  __int64 v2518; // rdi
  void *v2519; // rax
  void *v2520; // rax
  void *v2521; // rax
  unsigned __int64 v2522; // rdi
  int v2523; // ebx
  char *v2524; // rax
  char *v2525; // rax
  char *v2526; // rax
  char *v2527; // rax
  char *v2528; // rax
  __int64 **v2529; // rax
  char *v2530; // rax
  char *v2531; // rax
  char *v2532; // rax
  char *v2533; // rax
  char *v2534; // r14
  char *v2535; // r15
  int v2536; // eax
  char *v2537; // rax
  char *v2538; // rax
  char *v2539; // rax
  char *v2540; // rax
  __int64 *v2541; // rax
  __int64 *v2542; // rax
  char *v2543; // rax
  char *v2544; // rax
  char *v2545; // rax
  char *v2546; // rax
  char *v2547; // rax
  char *v2548; // rax
  char *v2549; // rax
  char *v2550; // rax
  char *v2551; // rax
  char *v2552; // rax
  char *v2553; // rax
  char *v2554; // rax
  char *v2555; // rax
  __m128i v2556; // [rsp+0h] [rbp-128h] BYREF
  __m128i v2557; // [rsp+10h] [rbp-118h] BYREF
  __m128i v2558; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v2559[24]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v2560; // [rsp+48h] [rbp-E0h]
  _BYTE v2561[48]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v2562; // [rsp+80h] [rbp-A8h]
  unsigned int v2563; // [rsp+88h] [rbp-A0h]
  char *v2564; // [rsp+90h] [rbp-98h]
  char *v2565; // [rsp+98h] [rbp-90h]
  __m128i v2566; // [rsp+A0h] [rbp-88h]
  __int64 v2567; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v2568; // [rsp+B8h] [rbp-70h]
  char v2569; // [rsp+C0h] [rbp-68h] BYREF
  _UNKNOWN ***v2570; // [rsp+C8h] [rbp-60h]
  __int64 v2571; // [rsp+D0h] [rbp-58h]
  __int64 v2572; // [rsp+D8h] [rbp-50h]
  __int64 v2573; // [rsp+E0h] [rbp-48h]
  __int64 (__fastcall *v2574)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+E8h] [rbp-40h]

  v2570 = a2;
  v2571 = a3;
  v2572 = a4;
  v2573 = a5;
  v2574 = a6;
  v2568 = __readfsqword(0x28u);
  v2563 = 8;
  v2564 = &a14;
  v2565 = &v2569;
  switch ( a1 )
  {
    case 0LL:
      v1471 = v2563;
      v1472 = v2563 + 8;
      v2563 = v1472;
      v1473 = *(_QWORD **)&v2565[v1471];
      if ( (unsigned int)v1472 > 0x2F )
      {
        v1474 = v2564;
        v2564 += 8;
      }
      else
      {
        v1474 = &v2565[v1472];
        v2563 = v1471 + 16;
      }
      v1475 = *(__int64 **)v1474;
      if ( !*(_QWORD *)v1474 )
        goto LABEL_2315;
      v1476 = *v1475;
      if ( *v1475 )
      {
        if ( v1475[1] )
          v1476 = *(_QWORD *)(v1476 + 8);
      }
      *v1473 = v1476;
      return nullptr;
    case 1LL:
      v1466 = v2563;
      v1467 = v2563 + 8;
      v2563 = v1467;
      v1468 = *(_QWORD **)&v2565[v1466];
      if ( (unsigned int)v1467 > 0x2F )
      {
        v1469 = v2564;
        v2564 += 8;
      }
      else
      {
        v1469 = &v2565[v1467];
        v2563 = v1466 + 16;
      }
      v1470 = *(_QWORD **)v1469;
      if ( !v1470 )
        goto LABEL_2650;
      *v1468 = *v1470;
      return nullptr;
    case 2LL:
      v1464 = &v2565[v2563];
      v1465 = *(_QWORD **)v1464;
      *v1465 = sub_3452C0(**(_QWORD ***)v1464);
      return nullptr;
    case 3LL:
      v1459 = &v2565[v2563];
      v1460 = *(_QWORD **)v1459;
      v1461 = **(_QWORD ***)v1459;
      if ( (*v1461 & 2) != 0 )
      {
        i = (_QWORD *)v1461[2];
      }
      else
      {
        v1462 = (_QWORD *)v1461[1];
        if ( (*(_BYTE *)v1462 & 2) != 0 )
        {
          for ( i = (_QWORD *)(*v1461 & 0xFFFFFFFFFFFFFFFCLL);
                (*i & 2) == 0 && (_QWORD *)i[1] == v1461;
                i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1461 = i;
          }
        }
        else
        {
          do
          {
            i = v1462;
            v1462 = (_QWORD *)v1462[2];
          }
          while ( (*(_BYTE *)v1462 & 2) == 0 );
        }
      }
      *v1460 = i;
      return nullptr;
    case 4LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 5LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 40LL);
    case 6LL:
      v979 = v2563;
      v980 = v2563 + 8;
      v2563 = v980;
      v981 = *(_QWORD **)&v2565[v979];
      if ( (unsigned int)v980 > 0x2F )
      {
        v2207 = v2564;
        v984 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v983 = *(_QWORD ***)v2207;
      }
      else
      {
        v982 = v979 + 16;
        v983 = *(_QWORD ***)&v2565[v980];
        v2563 = v982;
        if ( (unsigned int)v982 <= 0x2F )
        {
          v984 = (__int64 *)&v2565[v982];
          v2563 = v979 + 24;
          goto LABEL_847;
        }
        v984 = (__int64 *)v2564;
      }
      v2564 = (char *)(v984 + 1);
LABEL_847:
      if ( !v983 )
        goto LABEL_2199;
      v985 = *v983;
      v986 = *v983;
      if ( !*v983 )
        goto LABEL_857;
      v985 = (_QWORD *)(*v985 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v985 )
        goto LABEL_857;
      if ( (*(_BYTE *)v985 & 2) != 0 )
        goto LABEL_856;
      v987 = *v984;
      do
      {
        if ( (int)sub_257C40(v987, (__int64)(v985 + 3)) >= 0 )
        {
          if ( (int)sub_257C40((__int64)(v985 + 3), v987) >= 0 )
            goto LABEL_857;
          v985 = (_QWORD *)v985[2];
        }
        else
        {
          v985 = (_QWORD *)v985[1];
        }
      }
      while ( (*(_BYTE *)v985 & 2) == 0 );
      v986 = *v983;
LABEL_856:
      v985 = v986;
LABEL_857:
      *v981 = v985;
      return nullptr;
    case 7LL:
      v962 = v2563;
      v963 = v2563 + 8;
      v2563 = v963;
      v964 = *(unsigned __int64 **)&v2565[v962];
      if ( (unsigned int)v963 > 0x2F )
      {
        v2295 = (__m128i **)v2564;
        v2545 = v2564 + 8;
        v2564 += 8;
        v966 = *v2295;
      }
      else
      {
        v965 = v962 + 16;
        v966 = *(__m128i **)&v2565[v963];
        v2563 = v965;
        if ( (unsigned int)v965 <= 0x2F )
        {
          v967 = v962 + 24;
          v968 = *(_QWORD *)&v2565[v965];
          v2563 = v967;
          if ( (unsigned int)v967 <= 0x2F )
          {
            v969 = v962 + 32;
            v970 = &v2565[v967];
            v2563 = v969;
            goto LABEL_839;
          }
          v970 = v2564;
LABEL_2029:
          v969 = (__int64)(v970 + 8);
          v2564 = v970 + 8;
LABEL_839:
          v971 = *(__int64 **)v970;
          if ( v966 )
          {
            v972 = v971[2];
            v973 = *(_QWORD *)v968;
            v974 = nullptr;
            v975 = *(_DWORD *)(v968 + 8);
            v976 = *v971;
            v977 = _mm_unpacklo_epi64((__m128i)v972, (__m128i)v972);
            if ( v972 )
            {
              v2518 = v971[2];
              v2556.m128i_i64[0] = *(_QWORD *)v968;
              v2557 = v977;
              v2519 = (void *)qalloc_or_throw(v2518, v968, v969, 0);
              v2520 = memcpy(v2519, (const void *)v971[1], v972);
              v977 = _mm_load_si128(&v2557);
              v973 = v2556.m128i_i64[0];
              v974 = v2520;
            }
            v978 = v971[4];
            *(_QWORD *)v2561 = v973;
            *(_DWORD *)&v2561[8] = v975;
            *(_QWORD *)&v2561[16] = v976;
            *(_QWORD *)&v2561[24] = v974;
            v2562 = v978;
            *(__m128i *)&v2561[32] = v977;
            *v964 = sub_3456B0(v966, (const __m128i *)v2561);
            if ( *(_QWORD *)&v2561[24] )
            {
              *(_QWORD *)&v2561[32] = 0;
              qfree(*(__int64 *)&v2561[24]);
            }
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2545 = v2564;
      }
      v2296 = (__int64 *)v2545;
      v970 = v2545 + 8;
      v2564 = v970;
      v968 = *v2296;
      goto LABEL_2029;
    case 8LL:
      v2047 = v2563;
      v2048 = v2563 + 8;
      v2563 = v2048;
      v2049 = *(unsigned __int64 ***)&v2565[v2047];
      if ( (unsigned int)v2048 > 0x2F )
      {
        v2050 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v2050 = (__int64 ***)&v2565[v2048];
        v2563 = v2047 + 16;
      }
      v2051 = *v2050;
      if ( !v2049 )
        goto LABEL_2657;
      sub_345E30(v2049, *v2051);
      return nullptr;
    case 9LL:
      v1926 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v1926 )
        goto LABEL_2666;
      sub_344C70(*v1926);
      return nullptr;
    case 10LL:
      v1242 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1243 = *v1242;
      if ( !v1243 )
        goto LABEL_2645;
      return *(char **)(v1243 + 8);
    case 11LL:
      v1240 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v1241 = *v1240;
      if ( *v1240 )
      {
        sub_82E00(*v1240);
        qfree((__int64)v1241);
      }
      return nullptr;
    case 12LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 13LL:
      v1690 = v2563;
      v1691 = v2563 + 8;
      v2563 = v1691;
      v1692 = *(_QWORD **)&v2565[v1690];
      if ( (unsigned int)v1691 > 0x2F )
      {
        v1693 = v2564;
        v2564 += 8;
      }
      else
      {
        v1693 = &v2565[v1691];
        v2563 = v1690 + 16;
      }
      v1694 = *(__int64 **)v1693;
      if ( *(_QWORD *)v1693 )
      {
        v1695 = *v1694;
        if ( *v1694 && v1694[1] )
          v1695 = *(_QWORD *)(v1695 + 8);
        *v1692 = v1695;
        return nullptr;
      }
      if ( !under_debugger )
LABEL_2207:
        sub_383060(0xCD9Eu, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 14LL:
      v2001 = v2563;
      v2002 = v2563 + 8;
      v2563 = v2002;
      v2003 = *(_QWORD **)&v2565[v2001];
      if ( (unsigned int)v2002 > 0x2F )
      {
        v2004 = v2564;
        v2564 += 8;
      }
      else
      {
        v2004 = &v2565[v2002];
        v2563 = v2001 + 16;
      }
      v2005 = *(_QWORD **)v2004;
      if ( !v2005 )
        goto LABEL_2650;
      *v2003 = *v2005;
      return nullptr;
    case 15LL:
      v658 = &v2565[v2563];
      v659 = *(_QWORD **)v658;
      *v659 = sub_345330(**(_QWORD ***)v658);
      return nullptr;
    case 16LL:
      v1783 = &v2565[v2563];
      v1784 = *(_QWORD **)v1783;
      v1785 = **(_QWORD ***)v1783;
      if ( (*v1785 & 2) != 0 )
      {
        j = (_QWORD *)v1785[2];
      }
      else
      {
        v1786 = (_QWORD *)v1785[1];
        if ( (*(_BYTE *)v1786 & 2) != 0 )
        {
          for ( j = (_QWORD *)(*v1785 & 0xFFFFFFFFFFFFFFFCLL);
                (*j & 2) == 0 && (_QWORD *)j[1] == v1785;
                j = (_QWORD *)(*j & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1785 = j;
          }
        }
        else
        {
          do
          {
            j = v1786;
            v1786 = (_QWORD *)v1786[2];
          }
          while ( (*(_BYTE *)v1786 & 2) == 0 );
        }
      }
      *v1784 = j;
      return nullptr;
    case 17LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 18LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 48LL);
    case 19LL:
      v1352 = v2563;
      v1353 = v2563 + 8;
      v2563 = v1353;
      v1354 = *(unsigned __int64 **)&v2565[v1352];
      if ( (unsigned int)v1353 > 0x2F )
      {
        v2209 = (unsigned __int64 **)v2564;
        v1357 = (int **)(v2564 + 8);
        v2564 += 8;
        v1356 = *v2209;
      }
      else
      {
        v1355 = v1352 + 16;
        v1356 = *(unsigned __int64 **)&v2565[v1353];
        v2563 = v1355;
        if ( (unsigned int)v1355 <= 0x2F )
        {
          v1357 = (int **)&v2565[v1355];
          v2563 = v1352 + 24;
          goto LABEL_1204;
        }
        v1357 = (int **)v2564;
      }
      v2564 = (char *)(v1357 + 1);
LABEL_1204:
      if ( !v1356 )
        goto LABEL_2199;
      v1358 = *v1356;
      v1359 = *v1356;
      if ( !*v1356 )
        goto LABEL_1214;
      v1358 = *(_QWORD *)v1358 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1358 )
        goto LABEL_1214;
      if ( (*(_BYTE *)v1358 & 2) != 0 )
        goto LABEL_1213;
      v1360 = *v1357;
      do
      {
        if ( (int)sub_3307E0(v1360, (int *)(v1358 + 24)) >= 0 )
        {
          if ( (int)sub_3307E0((int *)(v1358 + 24), v1360) >= 0 )
            goto LABEL_1214;
          v1358 = *(_QWORD *)(v1358 + 16);
        }
        else
        {
          v1358 = *(_QWORD *)(v1358 + 8);
        }
      }
      while ( (*(_BYTE *)v1358 & 2) == 0 );
      v1359 = *v1356;
LABEL_1213:
      v1358 = v1359;
LABEL_1214:
      *v1354 = v1358;
      return nullptr;
    case 20LL:
      v813 = v2563;
      v814 = v2563 + 8;
      v2563 = v814;
      v815 = *(__int64 **)&v2565[v813];
      if ( (unsigned int)v814 > 0x2F )
      {
        v2372 = (__m128i **)v2564;
        v2373 = v2564 + 8;
        v2564 += 8;
        v817 = *v2372;
      }
      else
      {
        v816 = v813 + 16;
        v817 = *(__m128i **)&v2565[v814];
        v2563 = v816;
        if ( (unsigned int)v816 <= 0x2F )
        {
          v818 = v813 + 24;
          v819 = *(_QWORD *)&v2565[v816];
          v2563 = v818;
          if ( (unsigned int)v818 <= 0x2F )
          {
            v820 = &v2565[v818];
            v2563 = v813 + 32;
            goto LABEL_692;
          }
          v820 = v2564;
LABEL_2065:
          v2564 = v820 + 8;
LABEL_692:
          v821 = *(_QWORD *)v820;
          if ( v817 )
          {
            v2558.m128i_i32[0] = 0;
            copy_argloc();
            v822 = *(_QWORD *)(v819 + 16);
            *(_DWORD *)&v2559[8] = 0;
            *(_QWORD *)v2559 = v822;
            copy_argloc();
            v823 = *(_QWORD *)(v821 + 16);
            *(_DWORD *)v2561 = 0;
            v2560 = v823;
            copy_argloc();
            *(_DWORD *)&v2561[24] = 0;
            *(_QWORD *)&v2561[16] = *(_QWORD *)v2559;
            copy_argloc();
            *(_QWORD *)&v2561[40] = v2560;
            *v815 = sub_3463B0(v817, (int *)v2561);
            cleanup_argloc();
            cleanup_argloc();
            cleanup_argloc();
            cleanup_argloc();
            return nullptr;
          }
LABEL_2525:
          if ( !under_debugger )
            sub_383060(0xCD9Bu, *(double *)a7.m128_u64);
          goto LABEL_2700;
        }
        v2373 = v2564;
      }
      v2374 = v2373;
      v820 = v2373 + 8;
      v2564 = v820;
      v819 = *(_QWORD *)v2374;
      goto LABEL_2065;
    case 21LL:
      v808 = v2563;
      v809 = v2563 + 8;
      v2563 = v809;
      v810 = *(unsigned __int64 ***)&v2565[v808];
      if ( (unsigned int)v809 > 0x2F )
      {
        v811 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v811 = (__int64 ***)&v2565[v809];
        v2563 = v808 + 16;
      }
      v812 = *v811;
      if ( !v810 )
        goto LABEL_2657;
      sub_2188C0(v810, *v812);
      return nullptr;
    case 22LL:
      v807 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v807 )
        goto LABEL_2666;
      sub_83C10(*v807);
      return nullptr;
    case 23LL:
      v805 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v806 = *v805;
      if ( !v806 )
        goto LABEL_2645;
      return *(char **)(v806 + 8);
    case 24LL:
      v1137 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v1138 = *v1137;
      if ( *v1137 )
      {
        sub_217B60(*v1137);
        qfree((__int64)v1138);
      }
      return nullptr;
    case 25LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 26LL:
      v1131 = v2563;
      v1132 = v2563 + 8;
      v2563 = v1132;
      v1133 = *(_QWORD **)&v2565[v1131];
      if ( (unsigned int)v1132 > 0x2F )
      {
        v1134 = v2564;
        v2564 += 8;
      }
      else
      {
        v1134 = &v2565[v1132];
        v2563 = v1131 + 16;
      }
      v1135 = *(__int64 **)v1134;
      if ( *(_QWORD *)v1134 )
      {
        v1136 = *v1135;
        if ( *v1135 && v1135[1] )
          v1136 = *(_QWORD *)(v1136 + 8);
        *v1133 = v1136;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 27LL:
      v1126 = v2563;
      v1127 = v2563 + 8;
      v2563 = v1127;
      v1128 = *(_QWORD **)&v2565[v1126];
      if ( (unsigned int)v1127 > 0x2F )
      {
        v1129 = v2564;
        v2564 += 8;
      }
      else
      {
        v1129 = &v2565[v1127];
        v2563 = v1126 + 16;
      }
      v1130 = *(_QWORD **)v1129;
      if ( !v1130 )
        goto LABEL_2650;
      *v1128 = *v1130;
      return nullptr;
    case 28LL:
      v1619 = &v2565[v2563];
      v1620 = *(_QWORD **)v1619;
      *v1620 = sub_3453A0(**(_QWORD ***)v1619);
      return nullptr;
    case 29LL:
      v1614 = &v2565[v2563];
      v1615 = *(_QWORD **)v1614;
      v1616 = **(_QWORD ***)v1614;
      if ( (*v1616 & 2) != 0 )
      {
        k = (_QWORD *)v1616[2];
      }
      else
      {
        v1617 = (_QWORD *)v1616[1];
        if ( (*(_BYTE *)v1617 & 2) != 0 )
        {
          for ( k = (_QWORD *)(*v1616 & 0xFFFFFFFFFFFFFFFCLL);
                (*k & 2) == 0 && (_QWORD *)k[1] == v1616;
                k = (_QWORD *)(*k & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1616 = k;
          }
        }
        else
        {
          do
          {
            k = v1617;
            v1617 = (_QWORD *)v1617[2];
          }
          while ( (*(_BYTE *)v1617 & 2) == 0 );
        }
      }
      *v1615 = k;
      return nullptr;
    case 30LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 31LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 32LL);
    case 32LL:
      v2102 = v2563;
      v2103 = v2563 + 8;
      v2563 = v2103;
      v2104 = *(_QWORD **)&v2565[v2102];
      if ( (unsigned int)v2103 > 0x2F )
      {
        v2380 = v2564;
        v2107 = v2564 + 8;
        v2564 += 8;
        v2106 = *(_QWORD ***)v2380;
      }
      else
      {
        v2105 = v2102 + 16;
        v2106 = *(_QWORD ***)&v2565[v2103];
        v2563 = v2105;
        if ( (unsigned int)v2105 <= 0x2F )
        {
          v2107 = &v2565[v2105];
          v2563 = v2102 + 24;
          goto LABEL_1907;
        }
        v2107 = v2564;
      }
      v2564 = v2107 + 8;
LABEL_1907:
      if ( !v2106 )
        goto LABEL_2199;
      v2108 = *v2106;
      if ( !*v2106 )
        goto LABEL_1915;
      v2109 = *v2108 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v2109 )
      {
        v2108 = nullptr;
        goto LABEL_1915;
      }
      if ( (*(_BYTE *)v2109 & 2) != 0 )
        goto LABEL_1915;
      v2110 = **(_QWORD **)v2107;
      while ( 2 )
      {
        v2111 = *(_QWORD *)(v2109 + 24);
        if ( v2110 >= v2111 )
        {
          if ( v2111 >= v2110 )
          {
            v2108 = (_QWORD *)v2109;
LABEL_1915:
            *v2104 = v2108;
            return nullptr;
          }
          v2109 = *(_QWORD *)(v2109 + 16);
        }
        else
        {
          v2109 = *(_QWORD *)(v2109 + 8);
        }
        if ( (*(_BYTE *)v2109 & 2) != 0 )
          goto LABEL_1915;
        continue;
      }
    case 33LL:
      v2075 = v2563;
      v2076 = v2563 + 8;
      v2563 = v2076;
      v2077 = *(unsigned __int64 **)&v2565[v2075];
      if ( (unsigned int)v2076 > 0x2F )
      {
        v2369 = (__m128i **)v2564;
        v2525 = v2564 + 8;
        v2564 += 8;
        v2079 = *v2369;
      }
      else
      {
        v2078 = v2075 + 16;
        v2079 = *(__m128i **)&v2565[v2076];
        v2563 = v2078;
        if ( (unsigned int)v2078 <= 0x2F )
        {
          v2076 = v2075 + 24;
          v2080 = *(unsigned __int64 **)&v2565[v2078];
          v2563 = v2076;
          if ( (unsigned int)v2076 <= 0x2F )
          {
            v2081 = v2075 + 32;
            v2082 = &v2565[v2076];
            v2563 = v2081;
            goto LABEL_1882;
          }
          v2082 = v2564;
LABEL_2062:
          v2081 = (__int64)(v2082 + 8);
          v2564 = v2082 + 8;
LABEL_1882:
          v2083 = *(_QWORD *)v2082;
          if ( v2079 )
          {
            v2084 = *v2080;
            *(_OWORD *)v2559 = 0;
            v2558 = (__m128i)v2084;
            v2085 = *(_QWORD *)(v2083 + 8);
            if ( v2085 )
            {
              v2521 = (void *)qalloc_or_throw(*(_QWORD *)(v2083 + 8), (__int64)v2080, v2081, v2076);
              *(_QWORD *)&v2559[8] = v2085;
              v2558.m128i_i64[1] = (__int64)v2521;
              memcpy(v2521, *(const void **)v2083, v2085);
              *(_QWORD *)v2559 = v2085;
            }
            copy_tinfo_t();
            si128 = _mm_load_si128((const __m128i *)v2559);
            *(_QWORD *)&v2561[32] = 0;
            *(__m128i *)v2561 = v2558;
            *(__m128i *)&v2561[16] = si128;
            v2558.m128i_i64[1] = 0;
            memset(v2559, 0, sizeof(v2559));
            copy_tinfo_t();
            *v2077 = sub_346740(v2079, v2561);
            sub_2B5160((__int64 *)&v2561[8]);
            sub_2B5160(&v2558.m128i_i64[1]);
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2525 = v2564;
      }
      v2370 = v2525;
      v2082 = v2525 + 8;
      v2564 = v2082;
      v2080 = *(unsigned __int64 **)v2370;
      goto LABEL_2062;
    case 34LL:
      v1393 = v2563;
      v1394 = v2563 + 8;
      v2563 = v1394;
      v1395 = *(unsigned __int64 ***)&v2565[v1393];
      if ( (unsigned int)v1394 > 0x2F )
      {
        v1396 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v1396 = (__int64 ***)&v2565[v1394];
        v2563 = v1393 + 16;
      }
      v1397 = *v1396;
      if ( !v1395 )
        goto LABEL_2657;
      sub_346E80(v1395, *v1397);
      return nullptr;
    case 35LL:
      v1392 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v1392 )
        goto LABEL_2666;
      sub_83F70(*v1392);
      return nullptr;
    case 36LL:
      v1821 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1822 = *v1821;
      if ( !v1822 )
        goto LABEL_2645;
      return *(char **)(v1822 + 8);
    case 37LL:
      v1819 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v1820 = *v1819;
      if ( *v1819 )
      {
        sub_2BC560(*v1819);
        qfree((__int64)v1820);
      }
      return nullptr;
    case 38LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 39LL:
      v874 = v2563;
      v875 = v2563 + 8;
      v2563 = v875;
      v876 = *(_QWORD **)&v2565[v874];
      if ( (unsigned int)v875 > 0x2F )
      {
        v877 = v2564;
        v2564 += 8;
      }
      else
      {
        v877 = &v2565[v875];
        v2563 = v874 + 16;
      }
      v878 = *(__int64 **)v877;
      if ( *(_QWORD *)v877 )
      {
        v879 = *v878;
        if ( *v878 && v878[1] )
          v879 = *(_QWORD *)(v879 + 8);
        *v876 = v879;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 40LL:
      v1189 = v2563;
      v1190 = v2563 + 8;
      v2563 = v1190;
      v1191 = *(_QWORD **)&v2565[v1189];
      if ( (unsigned int)v1190 > 0x2F )
      {
        v1192 = v2564;
        v2564 += 8;
      }
      else
      {
        v1192 = &v2565[v1190];
        v2563 = v1189 + 16;
      }
      v1193 = *(_QWORD **)v1192;
      if ( !v1193 )
        goto LABEL_2650;
      *v1191 = *v1193;
      return nullptr;
    case 41LL:
      v1187 = &v2565[v2563];
      v1188 = *(_QWORD **)v1187;
      *v1188 = sub_345410(**(_QWORD ***)v1187);
      return nullptr;
    case 42LL:
      v1967 = &v2565[v2563];
      v1968 = *(_QWORD **)v1967;
      v1969 = **(_QWORD ***)v1967;
      if ( (*v1969 & 2) != 0 )
      {
        m = (_QWORD *)v1969[2];
      }
      else
      {
        v1970 = (_QWORD *)v1969[1];
        if ( (*(_BYTE *)v1970 & 2) != 0 )
        {
          for ( m = (_QWORD *)(*v1969 & 0xFFFFFFFFFFFFFFFCLL);
                (*m & 2) == 0 && (_QWORD *)m[1] == v1969;
                m = (_QWORD *)(*m & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1969 = m;
          }
        }
        else
        {
          do
          {
            m = v1970;
            v1970 = (_QWORD *)v1970[2];
          }
          while ( (*(_BYTE *)v1970 & 2) == 0 );
        }
      }
      *v1968 = m;
      return nullptr;
    case 43LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 44LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 40LL);
    case 45LL:
      v1646 = v2563;
      v1647 = v2563 + 8;
      v2563 = v1647;
      v1648 = *(_QWORD **)&v2565[v1646];
      if ( (unsigned int)v1647 > 0x2F )
      {
        v2199 = v2564;
        v1651 = v2564 + 8;
        v2564 += 8;
        v1650 = *(_QWORD ***)v2199;
      }
      else
      {
        v1649 = v1646 + 16;
        v1650 = *(_QWORD ***)&v2565[v1647];
        v2563 = v1649;
        if ( (unsigned int)v1649 <= 0x2F )
        {
          v1651 = &v2565[v1649];
          v2563 = v1646 + 24;
          goto LABEL_1466;
        }
        v1651 = v2564;
      }
      v2564 = v1651 + 8;
LABEL_1466:
      if ( !v1650 )
        goto LABEL_2199;
      v1652 = *v1650;
      if ( !*v1650 )
        goto LABEL_1475;
      v1653 = *v1652 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1653 )
      {
        v1652 = nullptr;
        goto LABEL_1475;
      }
      if ( (*(_BYTE *)v1653 & 2) != 0 )
        goto LABEL_1475;
      v1654 = *(unsigned __int64 **)v1651;
      v1655 = *v1654;
      while ( 2 )
      {
        if ( v1655 < *(_QWORD *)(v1653 + 24) )
          goto LABEL_2121;
        if ( v1655 != *(_QWORD *)(v1653 + 24) )
          goto LABEL_1473;
        v2523 = *(_DWORD *)(v1653 + 32);
        if ( *((_DWORD *)v1654 + 2) < v2523 )
        {
LABEL_2121:
          v1653 = *(_QWORD *)(v1653 + 8);
        }
        else
        {
          if ( *((_DWORD *)v1654 + 2) <= v2523 )
          {
            v1652 = (_QWORD *)v1653;
LABEL_1475:
            *v1648 = v1652;
            return nullptr;
          }
LABEL_1473:
          v1653 = *(_QWORD *)(v1653 + 16);
        }
        if ( (*(_BYTE *)v1653 & 2) != 0 )
          goto LABEL_1475;
        continue;
      }
    case 46LL:
      v618 = v2563;
      v619 = v2563 + 8;
      v2563 = v619;
      v620 = *(unsigned __int64 **)&v2565[v618];
      if ( (unsigned int)v619 > 0x2F )
      {
        v2366 = (__m128i **)v2564;
        v2367 = v2564 + 8;
        v2564 += 8;
        v622 = *v2366;
      }
      else
      {
        v621 = v618 + 16;
        v622 = *(__m128i **)&v2565[v619];
        v2563 = v621;
        if ( (unsigned int)v621 <= 0x2F )
        {
          v619 = v618 + 24;
          v623 = *(const __m128i **)&v2565[v621];
          v2563 = v619;
          if ( (unsigned int)v619 <= 0x2F )
          {
            v624 = v618 + 32;
            v625 = &v2565[v619];
            v2563 = v624;
            goto LABEL_518;
          }
          v625 = v2564;
LABEL_2060:
          v624 = (__int64)(v625 + 8);
          v2564 = v625 + 8;
LABEL_518:
          v626 = *(_QWORD *)v625;
          if ( v622 )
          {
            v627 = _mm_loadu_si128(v623);
            v628 = *(_QWORD *)v625;
            memset(v2559, 0, sizeof(v2559));
            v2558 = v627;
            sub_343670(v2559, v628, v624, v619);
            v629 = _mm_load_si128(&v2558);
            v630 = *(_BYTE *)(v626 + 24);
            v631 = *(_QWORD *)v2559;
            memset(v2559, 0, sizeof(v2559));
            *(__m128i *)v2561 = v629;
            v632 = _mm_loadu_si128((const __m128i *)&v2559[8]);
            LOBYTE(v2560) = v630;
            *(_QWORD *)&v2561[16] = v631;
            v2561[40] = v630;
            *(__m128i *)&v2561[24] = v632;
            *v620 = sub_3473C0(v622, (const __m128i *)v2561);
            if ( *(_QWORD *)&v2561[16] )
            {
              *(_QWORD *)&v2561[24] = 0;
              qfree(*(__int64 *)&v2561[16]);
            }
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2367 = v2564;
      }
      v2368 = (const __m128i **)v2367;
      v625 = v2367 + 8;
      v2564 = v625;
      v623 = *v2368;
      goto LABEL_2060;
    case 47LL:
      v613 = v2563;
      v614 = v2563 + 8;
      v2563 = v614;
      v615 = *(unsigned __int64 ***)&v2565[v613];
      if ( (unsigned int)v614 > 0x2F )
      {
        v616 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v616 = (__int64 ***)&v2565[v614];
        v2563 = v613 + 16;
      }
      v617 = *v616;
      if ( !v615 )
        goto LABEL_2657;
      sub_25BEC0(v615, *v617);
      return nullptr;
    case 48LL:
      v2026 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v2026 )
        goto LABEL_2666;
      sub_344D80(*v2026);
      return nullptr;
    case 49LL:
      v1722 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1723 = *v1722;
      if ( !v1723 )
        goto LABEL_2645;
      return *(char **)(v1723 + 8);
    case 50LL:
      v1308 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v1309 = *v1308;
      if ( *v1308 )
      {
        sub_2C2490(*v1308);
        qfree((__int64)v1309);
      }
      return nullptr;
    case 51LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 52LL:
      v755 = v2563;
      v756 = v2563 + 8;
      v2563 = v756;
      v757 = *(_QWORD **)&v2565[v755];
      if ( (unsigned int)v756 > 0x2F )
      {
        v758 = v2564;
        v2564 += 8;
      }
      else
      {
        v758 = &v2565[v756];
        v2563 = v755 + 16;
      }
      v759 = *(__int64 **)v758;
      if ( *(_QWORD *)v758 )
      {
        v760 = *v759;
        if ( *v759 && v759[1] )
          v760 = *(_QWORD *)(v760 + 8);
        *v757 = v760;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 53LL:
      v750 = v2563;
      v751 = v2563 + 8;
      v2563 = v751;
      v752 = *(_QWORD **)&v2565[v750];
      if ( (unsigned int)v751 > 0x2F )
      {
        v753 = v2564;
        v2564 += 8;
      }
      else
      {
        v753 = &v2565[v751];
        v2563 = v750 + 16;
      }
      v754 = *(_QWORD **)v753;
      if ( !v754 )
        goto LABEL_2650;
      *v752 = *v754;
      return nullptr;
    case 54LL:
      v748 = &v2565[v2563];
      v749 = *(_QWORD **)v748;
      *v749 = sub_345480(**(_QWORD ***)v748);
      return nullptr;
    case 55LL:
      v743 = &v2565[v2563];
      v744 = *(_QWORD **)v743;
      v745 = **(_QWORD ***)v743;
      if ( (*v745 & 2) != 0 )
      {
        n = (_QWORD *)v745[2];
      }
      else
      {
        v746 = (_QWORD *)v745[1];
        if ( (*(_BYTE *)v746 & 2) != 0 )
        {
          for ( n = (_QWORD *)(*v745 & 0xFFFFFFFFFFFFFFFCLL);
                (*n & 2) == 0 && (_QWORD *)n[1] == v745;
                n = (_QWORD *)(*n & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v745 = n;
          }
        }
        else
        {
          do
          {
            n = v746;
            v746 = (_QWORD *)v746[2];
          }
          while ( (*(_BYTE *)v746 & 2) == 0 );
        }
      }
      *v744 = n;
      return nullptr;
    case 56LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 57LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 40LL);
    case 58LL:
      v1056 = v2563;
      v1057 = v2563 + 8;
      v2563 = v1057;
      v1058 = *(_QWORD **)&v2565[v1056];
      if ( (unsigned int)v1057 > 0x2F )
      {
        v2297 = v2564;
        v1061 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1060 = *(_QWORD ***)v2297;
      }
      else
      {
        v1059 = v1056 + 16;
        v1060 = *(_QWORD ***)&v2565[v1057];
        v2563 = v1059;
        if ( (unsigned int)v1059 <= 0x2F )
        {
          v1061 = (__int64 *)&v2565[v1059];
          v2563 = v1056 + 24;
          goto LABEL_917;
        }
        v1061 = (__int64 *)v2564;
      }
      v2564 = (char *)(v1061 + 1);
LABEL_917:
      if ( !v1060 )
        goto LABEL_2199;
      v1062 = *v1060;
      v1063 = *v1060;
      if ( !*v1060 )
        goto LABEL_927;
      v1062 = (_QWORD *)(*v1062 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v1062 )
        goto LABEL_927;
      if ( (*(_BYTE *)v1062 & 2) != 0 )
        goto LABEL_926;
      v1064 = *v1061;
      do
      {
        if ( (int)sub_257C70(v1064, (__int64)(v1062 + 3)) >= 0 )
        {
          if ( (int)sub_257C70((__int64)(v1062 + 3), v1064) >= 0 )
            goto LABEL_927;
          v1062 = (_QWORD *)v1062[2];
        }
        else
        {
          v1062 = (_QWORD *)v1062[1];
        }
      }
      while ( (*(_BYTE *)v1062 & 2) == 0 );
      v1063 = *v1060;
LABEL_926:
      v1062 = v1063;
LABEL_927:
      *v1058 = v1062;
      return nullptr;
    case 59LL:
      v1045 = v2563;
      v1046 = v2563 + 8;
      v2563 = v1046;
      v1047 = *(unsigned __int64 **)&v2565[v1045];
      if ( (unsigned int)v1046 > 0x2F )
      {
        v2289 = (__m128i **)v2564;
        v2290 = v2564 + 8;
        v2564 += 8;
        v1049 = *v2289;
      }
      else
      {
        v1048 = v1045 + 16;
        v1049 = *(__m128i **)&v2565[v1046];
        v2563 = v1048;
        if ( (unsigned int)v1048 <= 0x2F )
        {
          v1050 = v1045 + 24;
          v1051 = *(_QWORD *)&v2565[v1048];
          v2563 = v1050;
          if ( (unsigned int)v1050 <= 0x2F )
          {
            v1052 = &v2565[v1050];
            v2563 = v1045 + 32;
            goto LABEL_912;
          }
          v1052 = v2564;
LABEL_2025:
          v2564 = v1052 + 8;
LABEL_912:
          v1053 = *(int **)v1052;
          if ( v1049 )
          {
            v1054 = *(_DWORD *)(v1051 + 8);
            v1055 = *v1053;
            *(_QWORD *)v2561 = *(_QWORD *)v1051;
            *(_DWORD *)&v2561[8] = v1054;
            *(_DWORD *)&v2561[16] = v1055;
            *v1047 = sub_347580(v1049, (const __m128i *)v2561);
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2290 = v2564;
      }
      v2291 = v2290;
      v1052 = v2290 + 8;
      v2564 = v1052;
      v1051 = *(_QWORD *)v2291;
      goto LABEL_2025;
    case 60LL:
      v1567 = v2563;
      v1568 = v2563 + 8;
      v2563 = v1568;
      v1569 = *(unsigned __int64 ***)&v2565[v1567];
      if ( (unsigned int)v1568 > 0x2F )
      {
        v1570 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v1570 = (__int64 ***)&v2565[v1568];
        v2563 = v1567 + 16;
      }
      v1571 = *v1570;
      if ( !v1569 )
        goto LABEL_2657;
      sub_25D1E0(v1569, *v1571);
      return nullptr;
    case 61LL:
      v1566 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v1566 )
        goto LABEL_2666;
      sub_344E90(*v1566);
      return nullptr;
    case 62LL:
      v1891 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1892 = *v1891;
      if ( !v1892 )
        goto LABEL_2645;
      return *(char **)(v1892 + 8);
    case 63LL:
      v391 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v392 = *v391;
      if ( *v391 )
      {
        sub_2C2790(*v391);
        qfree((__int64)v392);
      }
      return nullptr;
    case 64LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 65LL:
      v1445 = v2563;
      v1446 = v2563 + 8;
      v2563 = v1446;
      v1447 = *(_QWORD **)&v2565[v1445];
      if ( (unsigned int)v1446 > 0x2F )
      {
        v1448 = v2564;
        v2564 += 8;
      }
      else
      {
        v1448 = &v2565[v1446];
        v2563 = v1445 + 16;
      }
      v1449 = *(__int64 **)v1448;
      if ( *(_QWORD *)v1448 )
      {
        v1450 = *v1449;
        if ( *v1449 && v1449[1] )
          v1450 = *(_QWORD *)(v1450 + 8);
        *v1447 = v1450;
        return nullptr;
      }
      if ( !under_debugger )
        goto LABEL_2207;
      goto LABEL_2700;
    case 66LL:
      v2066 = v2563;
      v2067 = v2563 + 8;
      v2563 = v2067;
      v2068 = *(_QWORD **)&v2565[v2066];
      if ( (unsigned int)v2067 > 0x2F )
      {
        v2069 = v2564;
        v2564 += 8;
      }
      else
      {
        v2069 = &v2565[v2067];
        v2563 = v2066 + 16;
      }
      v2070 = *(_QWORD **)v2069;
      if ( !v2070 )
        goto LABEL_2650;
      *v2068 = *v2070;
      return nullptr;
    case 67LL:
      v1443 = &v2565[v2563];
      v1444 = *(_QWORD **)v1443;
      *v1444 = sub_3454F0(**(_QWORD ***)v1443);
      return nullptr;
    case 68LL:
      v1835 = &v2565[v2563];
      v1836 = *(_QWORD **)v1835;
      v1837 = **(_QWORD ***)v1835;
      if ( (*v1837 & 2) != 0 )
      {
        ii = (_QWORD *)v1837[2];
      }
      else
      {
        v1838 = (_QWORD *)v1837[1];
        if ( (*(_BYTE *)v1838 & 2) != 0 )
        {
          for ( ii = (_QWORD *)(*v1837 & 0xFFFFFFFFFFFFFFFCLL);
                (*ii & 2) == 0 && (_QWORD *)ii[1] == v1837;
                ii = (_QWORD *)(*ii & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1837 = ii;
          }
        }
        else
        {
          do
          {
            ii = v1838;
            v1838 = (_QWORD *)v1838[2];
          }
          while ( (*(_BYTE *)v1838 & 2) == 0 );
        }
      }
      *v1836 = ii;
      return nullptr;
    case 69LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 70LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 32LL);
    case 71LL:
      v902 = v2563;
      v903 = v2563 + 8;
      v2563 = v903;
      v904 = *(_QWORD **)&v2565[v902];
      if ( (unsigned int)v903 > 0x2F )
      {
        v2377 = v2564;
        v907 = v2564 + 8;
        v2564 += 8;
        v906 = *(_QWORD ***)v2377;
      }
      else
      {
        v905 = v902 + 16;
        v906 = *(_QWORD ***)&v2565[v903];
        v2563 = v905;
        if ( (unsigned int)v905 <= 0x2F )
        {
          v907 = &v2565[v905];
          v2563 = v902 + 24;
          goto LABEL_782;
        }
        v907 = v2564;
      }
      v2564 = v907 + 8;
LABEL_782:
      if ( !v906 )
        goto LABEL_2199;
      v908 = *v906;
      if ( !*v906 )
        goto LABEL_790;
      v909 = *v908 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v909 )
      {
        v908 = nullptr;
        goto LABEL_790;
      }
      if ( (*(_BYTE *)v909 & 2) != 0 )
        goto LABEL_790;
      v910 = **(_QWORD **)v907;
      while ( 2 )
      {
        v911 = *(_QWORD *)(v909 + 24);
        if ( v910 >= v911 )
        {
          if ( v911 >= v910 )
          {
            v908 = (_QWORD *)v909;
LABEL_790:
            *v904 = v908;
            return nullptr;
          }
          v909 = *(_QWORD *)(v909 + 16);
        }
        else
        {
          v909 = *(_QWORD *)(v909 + 8);
        }
        if ( (*(_BYTE *)v909 & 2) != 0 )
          goto LABEL_790;
        continue;
      }
    case 72LL:
      v1213 = v2563;
      v1214 = v2563 + 8;
      v2563 = v1214;
      v1215 = *(__int64 **)&v2565[v1213];
      if ( (unsigned int)v1214 > 0x2F )
      {
        v2375 = (__m128i **)v2564;
        v2524 = v2564 + 8;
        v2564 += 8;
        v1217 = *v2375;
      }
      else
      {
        v1216 = v1213 + 16;
        v1217 = *(__m128i **)&v2565[v1214];
        v2563 = v1216;
        if ( (unsigned int)v1216 <= 0x2F )
        {
          v1218 = v1213 + 24;
          v1219 = *(__int64 **)&v2565[v1216];
          v2563 = v1218;
          if ( (unsigned int)v1218 <= 0x2F )
          {
            v1220 = v1213 + 32;
            v1221 = &v2565[v1218];
            v2563 = v1220;
            goto LABEL_1086;
          }
          v1221 = v2564;
LABEL_2070:
          v1220 = (__int64)(v1221 + 8);
          v2564 = v1221 + 8;
LABEL_1086:
          v1222 = *(_QWORD *)v1221;
          if ( !v1217 )
            goto LABEL_2525;
          v1223 = *(_QWORD *)(v1222 + 8);
          v1224 = *v1219;
          v1225 = nullptr;
          v1226 = _mm_unpacklo_epi64((__m128i)v1223, (__m128i)v1223);
          if ( v1223 )
          {
            v2515 = 4 * v1223;
            v2556 = v1226;
            v2516 = (void *)qalloc_or_throw(4 * v1223, (__int64)v1219, v1220, 0);
            v2517 = memcpy(v2516, *(const void **)v1222, v2515);
            v1226 = _mm_load_si128(&v2556);
            v1225 = v2517;
          }
          *(_QWORD *)v2561 = v1224;
          *(_QWORD *)&v2561[8] = v1225;
          *(__m128i *)&v2561[16] = v1226;
          *v1215 = sub_3479F0(v1217, (const __m128i *)v2561);
          v1227 = *(_QWORD *)&v2561[8];
          if ( !*(_QWORD *)&v2561[8] )
            return nullptr;
LABEL_1090:
          *(_QWORD *)&v2561[16] = 0;
          qfree(v1227);
          return nullptr;
        }
        v2524 = v2564;
      }
      v2376 = v2524;
      v1221 = v2524 + 8;
      v2564 = v1221;
      v1219 = *(__int64 **)v2376;
      goto LABEL_2070;
    case 73LL:
      v1208 = v2563;
      v1209 = v2563 + 8;
      v2563 = v1209;
      v1210 = *(unsigned __int64 ***)&v2565[v1208];
      if ( (unsigned int)v1209 > 0x2F )
      {
        v1211 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v1211 = (__int64 ***)&v2565[v1209];
        v2563 = v1208 + 16;
      }
      v1212 = *v1211;
      if ( !v1210 )
        goto LABEL_2657;
      sub_25E210(v1210, *v1212);
      return nullptr;
    case 74LL:
      v1986 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v1986 )
        goto LABEL_2666;
      sub_344F90(*v1986);
      return nullptr;
    case 75LL:
      v1206 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1207 = *v1206;
      if ( !v1207 )
        goto LABEL_2645;
      return *(char **)(v1207 + 8);
    case 76LL:
      v1670 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v1671 = *v1670;
      if ( *v1670 )
      {
        sub_2C29C0(*v1670);
        qfree((__int64)v1671);
      }
      return nullptr;
    case 77LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 78LL:
      v2128 = v2563;
      v2129 = v2563 + 8;
      v2563 = v2129;
      v2130 = *(_QWORD **)&v2565[v2128];
      if ( (unsigned int)v2129 > 0x2F )
      {
        v2131 = v2564;
        v2564 += 8;
      }
      else
      {
        v2131 = &v2565[v2129];
        v2563 = v2128 + 16;
      }
      v2132 = *(__int64 **)v2131;
      if ( *(_QWORD *)v2131 )
      {
        v2133 = *v2132;
        if ( *v2132 && v2132[1] )
          v2133 = *(_QWORD *)(v2133 + 8);
        *v2130 = v2133;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 79LL:
      v653 = v2563;
      v654 = v2563 + 8;
      v2563 = v654;
      v655 = *(_QWORD **)&v2565[v653];
      if ( (unsigned int)v654 > 0x2F )
      {
        v656 = v2564;
        v2564 += 8;
      }
      else
      {
        v656 = &v2565[v654];
        v2563 = v653 + 16;
      }
      v657 = *(_QWORD **)v656;
      if ( !v657 )
        goto LABEL_2650;
      *v655 = *v657;
      return nullptr;
    case 80LL:
      v2138 = &v2565[v2563];
      v2139 = *(_QWORD **)v2138;
      *v2139 = sub_345560(**(_QWORD ***)v2138);
      return nullptr;
    case 81LL:
      v2038 = &v2565[v2563];
      v2039 = *(_QWORD **)v2038;
      v2040 = **(_QWORD ***)v2038;
      if ( (*v2040 & 2) != 0 )
      {
        jj = (_QWORD *)v2040[2];
      }
      else
      {
        v2041 = (_QWORD *)v2040[1];
        if ( (*(_BYTE *)v2041 & 2) != 0 )
        {
          for ( jj = (_QWORD *)(*v2040 & 0xFFFFFFFFFFFFFFFCLL);
                (*jj & 2) == 0 && (_QWORD *)jj[1] == v2040;
                jj = (_QWORD *)(*jj & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v2040 = jj;
          }
        }
        else
        {
          do
          {
            jj = v2041;
            v2041 = (_QWORD *)v2041[2];
          }
          while ( (*(_BYTE *)v2041 & 2) == 0 );
        }
      }
      *v2039 = jj;
      return nullptr;
    case 82LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 83LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 32LL);
    case 84LL:
      v2093 = v2563;
      v2094 = v2563 + 8;
      v2563 = v2094;
      v2095 = *(_QWORD **)&v2565[v2093];
      if ( (unsigned int)v2094 > 0x2F )
      {
        v2394 = v2564;
        v2098 = v2564 + 8;
        v2564 += 8;
        v2097 = *(_QWORD ***)v2394;
      }
      else
      {
        v2096 = v2093 + 16;
        v2097 = *(_QWORD ***)&v2565[v2094];
        v2563 = v2096;
        if ( (unsigned int)v2096 <= 0x2F )
        {
          v2098 = &v2565[v2096];
          v2563 = v2093 + 24;
          goto LABEL_1894;
        }
        v2098 = v2564;
      }
      v2564 = v2098 + 8;
LABEL_1894:
      if ( !v2097 )
        goto LABEL_2199;
      v2099 = *v2097;
      if ( !*v2097 )
        goto LABEL_1902;
      v2100 = *v2099 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v2100 )
      {
        v2099 = nullptr;
        goto LABEL_1902;
      }
      if ( (*(_BYTE *)v2100 & 2) != 0 )
        goto LABEL_1902;
      v2101 = **(_DWORD **)v2098;
      while ( 2 )
      {
        if ( v2101 >= *(_DWORD *)(v2100 + 24) )
        {
          if ( v2101 <= *(_DWORD *)(v2100 + 24) )
          {
            v2099 = (_QWORD *)v2100;
LABEL_1902:
            *v2095 = v2099;
            return nullptr;
          }
          v2100 = *(_QWORD *)(v2100 + 16);
        }
        else
        {
          v2100 = *(_QWORD *)(v2100 + 8);
        }
        if ( (*(_BYTE *)v2100 & 2) != 0 )
          goto LABEL_1902;
        continue;
      }
    case 85LL:
      v1737 = v2563;
      v1738 = v2563 + 8;
      v2563 = v1738;
      v1739 = *(__int64 **)&v2565[v1737];
      if ( (unsigned int)v1738 > 0x2F )
      {
        v2186 = (__m128i **)v2564;
        v2551 = v2564 + 8;
        v2564 += 8;
        v1741 = *v2186;
      }
      else
      {
        v1740 = v1737 + 16;
        v1741 = *(__m128i **)&v2565[v1738];
        v2563 = v1740;
        if ( (unsigned int)v1740 <= 0x2F )
        {
          v1738 = v1737 + 24;
          v1742 = *(unsigned int **)&v2565[v1740];
          v2563 = v1738;
          if ( (unsigned int)v1738 <= 0x2F )
          {
            v1743 = (__int64 *)&v2565[v1738];
            v2563 = v1737 + 32;
            goto LABEL_1564;
          }
          v1743 = (__int64 *)v2564;
LABEL_1978:
          v2564 = (char *)(v1743 + 1);
LABEL_1564:
          v1744 = *v1743;
          if ( v1741 )
          {
            v1745 = *v1742;
            *(_OWORD *)v2559 = 0;
            v2558.m128i_i32[0] = v1745;
            v2558.m128i_i64[1] = 0;
            sub_343670(&v2558.m128i_i64[1], v1744, v1745, v1738);
            v1746 = _mm_load_si128((const __m128i *)v2559);
            *(_DWORD *)v2561 = v2558.m128i_i32[0];
            *(__m128i *)&v2561[16] = v1746;
            *(_QWORD *)&v2561[8] = v2558.m128i_i64[1];
            *v1739 = sub_347CA0(v1741, (const __m128i *)v2561);
            if ( *(_QWORD *)&v2561[8] )
            {
              *(_QWORD *)&v2561[16] = 0;
              qfree(*(__int64 *)&v2561[8]);
            }
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2551 = v2564;
      }
      v2187 = v2551;
      v1743 = (__int64 *)(v2551 + 8);
      v2564 = (char *)v1743;
      v1742 = *(unsigned int **)v2187;
      goto LABEL_1978;
    case 86LL:
      v784 = v2563;
      v785 = v2563 + 8;
      v2563 = v785;
      v786 = *(unsigned __int64 ***)&v2565[v784];
      if ( (unsigned int)v785 > 0x2F )
      {
        v787 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v787 = (__int64 ***)&v2565[v785];
        v2563 = v784 + 16;
      }
      v788 = *v787;
      if ( !v786 )
        goto LABEL_2657;
      sub_348430(v786, *v788);
      return nullptr;
    case 87LL:
      v783 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v783 )
        goto LABEL_2666;
      sub_344B60(*v783);
      return nullptr;
    case 88LL:
      v1914 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1915 = *v1914;
      if ( !v1915 )
        goto LABEL_2645;
      return *(char **)(v1915 + 8);
    case 89LL:
      v1912 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v1913 = *v1912;
      if ( *v1912 )
      {
        sub_2BBB30(*v1912);
        qfree((__int64)v1913);
      }
      return nullptr;
    case 90LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 91LL:
      v1073 = v2563;
      v1074 = v2563 + 8;
      v2563 = v1074;
      v1075 = *(_QWORD **)&v2565[v1073];
      if ( (unsigned int)v1074 > 0x2F )
      {
        v1076 = v2564;
        v2564 += 8;
      }
      else
      {
        v1076 = &v2565[v1074];
        v2563 = v1073 + 16;
      }
      v1077 = *(__int64 **)v1076;
      if ( *(_QWORD *)v1076 )
      {
        v1078 = *v1077;
        if ( *v1077 && v1077[1] )
          v1078 = *(_QWORD *)(v1078 + 8);
        *v1075 = v1078;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 92LL:
      v409 = v2563;
      v410 = v2563 + 8;
      v2563 = v410;
      v411 = *(_QWORD **)&v2565[v409];
      if ( (unsigned int)v410 > 0x2F )
      {
        v412 = v2564;
        v2564 += 8;
      }
      else
      {
        v412 = &v2565[v410];
        v2563 = v409 + 16;
      }
      v413 = *(_QWORD **)v412;
      if ( !v413 )
        goto LABEL_2650;
      *v411 = *v413;
      return nullptr;
    case 93LL:
      v407 = &v2565[v2563];
      v408 = *(_QWORD **)v407;
      *v408 = sub_3455D0(**(_QWORD ***)v407);
      return nullptr;
    case 94LL:
      v1590 = &v2565[v2563];
      v1591 = *(_QWORD **)v1590;
      v1592 = **(_QWORD ***)v1590;
      if ( (*v1592 & 2) != 0 )
      {
        kk = (_QWORD *)v1592[2];
      }
      else
      {
        v1593 = (_QWORD *)v1592[1];
        if ( (*(_BYTE *)v1593 & 2) != 0 )
        {
          for ( kk = (_QWORD *)(*v1592 & 0xFFFFFFFFFFFFFFFCLL);
                (*kk & 2) == 0 && (_QWORD *)kk[1] == v1592;
                kk = (_QWORD *)(*kk & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1592 = kk;
          }
        }
        else
        {
          do
          {
            kk = v1593;
            v1593 = (_QWORD *)v1593[2];
          }
          while ( (*(_BYTE *)v1593 & 2) == 0 );
        }
      }
      *v1591 = kk;
      return nullptr;
    case 95LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 96LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 32LL);
    case 97LL:
      v1873 = v2563;
      v1874 = v2563 + 8;
      v2563 = v1874;
      v1875 = *(_QWORD **)&v2565[v1873];
      if ( (unsigned int)v1874 > 0x2F )
      {
        v2381 = v2564;
        v1878 = v2564 + 8;
        v2564 += 8;
        v1877 = *(_QWORD ***)v2381;
      }
      else
      {
        v1876 = v1873 + 16;
        v1877 = *(_QWORD ***)&v2565[v1874];
        v2563 = v1876;
        if ( (unsigned int)v1876 <= 0x2F )
        {
          v1878 = &v2565[v1876];
          v2563 = v1873 + 24;
          goto LABEL_1683;
        }
        v1878 = v2564;
      }
      v2564 = v1878 + 8;
LABEL_1683:
      if ( !v1877 )
        goto LABEL_2199;
      v1879 = *v1877;
      if ( !*v1877 )
        goto LABEL_1691;
      v1880 = *v1879 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1880 )
      {
        v1879 = nullptr;
        goto LABEL_1691;
      }
      if ( (*(_BYTE *)v1880 & 2) != 0 )
        goto LABEL_1691;
      v1881 = **(_QWORD **)v1878;
      while ( 2 )
      {
        v1882 = *(_QWORD *)(v1880 + 24);
        if ( v1881 >= v1882 )
        {
          if ( v1882 >= v1881 )
          {
            v1879 = (_QWORD *)v1880;
LABEL_1691:
            *v1875 = v1879;
            return nullptr;
          }
          v1880 = *(_QWORD *)(v1880 + 16);
        }
        else
        {
          v1880 = *(_QWORD *)(v1880 + 8);
        }
        if ( (*(_BYTE *)v1880 & 2) != 0 )
          goto LABEL_1691;
        continue;
      }
    case 98LL:
      v1935 = v2563;
      v1936 = v2563 + 8;
      v2563 = v1936;
      v1937 = *(__int64 **)&v2565[v1935];
      if ( (unsigned int)v1936 > 0x2F )
      {
        v2391 = (__m128i **)v2564;
        v2392 = v2564 + 8;
        v2564 += 8;
        v1939 = *v2391;
      }
      else
      {
        v1938 = v1935 + 16;
        v1939 = *(__m128i **)&v2565[v1936];
        v2563 = v1938;
        if ( (unsigned int)v1938 <= 0x2F )
        {
          v1940 = v1935 + 24;
          v1941 = *(__int64 **)&v2565[v1938];
          v2563 = v1940;
          if ( (unsigned int)v1940 <= 0x2F )
          {
            v1942 = v1935 + 32;
            v1943 = &v2565[v1940];
            v2563 = v1942;
            goto LABEL_1748;
          }
          v1943 = v2564;
LABEL_2079:
          v1942 = (__int64)(v1943 + 8);
          v2564 = v1943 + 8;
LABEL_1748:
          v1944 = *(_QWORD *)v1943;
          if ( !v1939 )
            goto LABEL_2525;
          v1945 = *(_QWORD *)(v1944 + 8);
          v1946 = *v1941;
          v1947 = nullptr;
          v1948 = _mm_unpacklo_epi64((__m128i)v1945, (__m128i)v1945);
          if ( v1945 )
          {
            v2512 = 8 * v1945;
            v2556 = v1948;
            v2513 = (void *)qalloc_or_throw(8 * v1945, (__int64)v1941, v1942, 0);
            v2514 = memcpy(v2513, *(const void **)v1944, v2512);
            v1948 = _mm_load_si128(&v2556);
            v1947 = v2514;
          }
          *(_QWORD *)v2561 = v1946;
          *(_QWORD *)&v2561[8] = v1947;
          *(__m128i *)&v2561[16] = v1948;
          *v1937 = sub_348D10(v1939, (const __m128i *)v2561);
          v1227 = *(_QWORD *)&v2561[8];
          if ( !*(_QWORD *)&v2561[8] )
            return nullptr;
          goto LABEL_1090;
        }
        v2392 = v2564;
      }
      v2393 = v2392;
      v1943 = v2392 + 8;
      v2564 = v1943;
      v1941 = *(__int64 **)v2393;
      goto LABEL_2079;
    case 99LL:
      v1367 = v2563;
      v1368 = v2563 + 8;
      v2563 = v1368;
      v1369 = *(unsigned __int64 ***)&v2565[v1367];
      if ( (unsigned int)v1368 > 0x2F )
      {
        v1370 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v1370 = (__int64 ***)&v2565[v1368];
        v2563 = v1367 + 16;
      }
      v1371 = *v1370;
      if ( !v1369 )
        goto LABEL_2657;
      sub_3494A0(v1369, *v1371);
      return nullptr;
    case 100LL:
      v1800 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v1800 )
        goto LABEL_2666;
      sub_3450A0(*v1800);
      return nullptr;
    case 101LL:
      v1798 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1799 = *v1798;
      if ( !v1799 )
        goto LABEL_2645;
      return *(char **)(v1799 + 8);
    case 102LL:
      v1801 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v1802 = *v1801;
      if ( *v1801 )
      {
        sub_344900(*v1801);
        qfree((__int64)v1802);
      }
      return nullptr;
    case 103LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 104LL:
      v514 = v2563;
      v515 = v2563 + 8;
      v2563 = v515;
      v516 = *(_QWORD **)&v2565[v514];
      if ( (unsigned int)v515 > 0x2F )
      {
        v517 = v2564;
        v2564 += 8;
      }
      else
      {
        v517 = &v2565[v515];
        v2563 = v514 + 16;
      }
      v518 = *(__int64 **)v517;
      if ( *(_QWORD *)v517 )
      {
        v519 = *v518;
        if ( *v518 && v518[1] )
          v519 = *(_QWORD *)(v519 + 8);
        *v516 = v519;
        return nullptr;
      }
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 105LL:
      v509 = v2563;
      v510 = v2563 + 8;
      v2563 = v510;
      v511 = *(_QWORD **)&v2565[v509];
      if ( (unsigned int)v510 > 0x2F )
      {
        v512 = v2564;
        v2564 += 8;
      }
      else
      {
        v512 = &v2565[v510];
        v2563 = v509 + 16;
      }
      v513 = *(_QWORD **)v512;
      if ( !v513 )
        goto LABEL_2650;
      *v511 = *v513;
      return nullptr;
    case 106LL:
      v507 = &v2565[v2563];
      v508 = *(_QWORD **)v507;
      *v508 = sub_345640(**(_QWORD ***)v507);
      return nullptr;
    case 107LL:
      v502 = &v2565[v2563];
      v503 = *(_QWORD **)v502;
      v504 = **(_QWORD ***)v502;
      if ( (*v504 & 2) != 0 )
      {
        mm = (_QWORD *)v504[2];
      }
      else
      {
        v505 = (_QWORD *)v504[1];
        if ( (*(_BYTE *)v505 & 2) != 0 )
        {
          for ( mm = (_QWORD *)(*v504 & 0xFFFFFFFFFFFFFFFCLL);
                (*mm & 2) == 0 && (_QWORD *)mm[1] == v504;
                mm = (_QWORD *)(*mm & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v504 = mm;
          }
        }
        else
        {
          do
          {
            mm = v505;
            v505 = (_QWORD *)v505[2];
          }
          while ( (*(_BYTE *)v505 & 2) == 0 );
        }
      }
      *v503 = mm;
      return nullptr;
    case 108LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 109LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 32LL);
    case 110LL:
      v1158 = v2563;
      v1159 = v2563 + 8;
      v2563 = v1159;
      v1160 = *(_QWORD **)&v2565[v1158];
      if ( (unsigned int)v1159 > 0x2F )
      {
        v2229 = v2564;
        v1163 = (__int64 **)(v2564 + 8);
        v2564 += 8;
        v1162 = *(_QWORD ***)v2229;
      }
      else
      {
        v1161 = v1158 + 16;
        v1162 = *(_QWORD ***)&v2565[v1159];
        v2563 = v1161;
        if ( (unsigned int)v1161 <= 0x2F )
        {
          v1163 = (__int64 **)&v2565[v1161];
          v2563 = v1158 + 24;
          goto LABEL_1021;
        }
        v1163 = (__int64 **)v2564;
      }
      v2564 = (char *)(v1163 + 1);
LABEL_1021:
      if ( !v1162 )
      {
LABEL_2199:
        if ( !under_debugger )
          sub_383060(0xCD9Au, *(double *)a7.m128_u64);
        goto LABEL_2700;
      }
      v1164 = *v1162;
      v1165 = *v1162;
      if ( !*v1162 )
        goto LABEL_1038;
      v1164 = (_QWORD *)(*v1164 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v1164 )
        goto LABEL_1038;
      if ( (*(_BYTE *)v1164 & 2) == 0 )
      {
        v1166 = *v1163;
        while ( 1 )
        {
          v1167 = (char *)v1164[3];
          v1168 = (char *)*v1166;
          v2556.m128i_i64[0] = (__int64)(v1164 + 3);
          if ( v1167 == v1168 )
            goto LABEL_1038;
          if ( v1168 == &byte_1 || !v1167 )
            break;
          if ( v1167 != &byte_1 && v1168 )
          {
            v1169 = sub_2596A0((__int64)v1168, (__int64)v1167);
            if ( v1169 )
              v1170 = v1169 >> 31;
            else
              LOBYTE(v1170) = *(_QWORD *)v1168 < *(_QWORD *)v1167;
            if ( !(_BYTE)v1170 )
            {
              v2534 = (char *)*v1166;
              v2535 = *(char **)v2556.m128i_i64[0];
              if ( *v1166 == *(_QWORD *)v2556.m128i_i64[0] || v2535 == &byte_1 || !v2534 )
                goto LABEL_1038;
              if ( v2534 != &byte_1 && v2535 )
              {
                v2536 = sub_2596A0(*(_QWORD *)v2556.m128i_i64[0], *v1166);
                if ( v2536 )
                {
                  if ( v2536 >= 0 )
                    goto LABEL_1038;
                }
                else if ( *(_QWORD *)v2535 >= *(_QWORD *)v2534 )
                {
                  goto LABEL_1038;
                }
              }
LABEL_2142:
              v1164 = (_QWORD *)v1164[2];
              goto LABEL_1035;
            }
          }
          v1164 = (_QWORD *)v1164[1];
LABEL_1035:
          if ( (*(_BYTE *)v1164 & 2) != 0 )
          {
            v1165 = *v1162;
            goto LABEL_1037;
          }
        }
        if ( !v1168 || v1167 == &byte_1 )
          goto LABEL_1038;
        goto LABEL_2142;
      }
LABEL_1037:
      v1164 = v1165;
LABEL_1038:
      *v1160 = v1164;
      return nullptr;
    case 111LL:
      v490 = v2563;
      v491 = v2563 + 8;
      v2563 = v491;
      v492 = *(__int64 **)&v2565[v490];
      if ( (unsigned int)v491 > 0x2F )
      {
        v2263 = (__m128i **)v2564;
        v2264 = v2564 + 8;
        v2564 += 8;
        v494 = *v2263;
      }
      else
      {
        v493 = v490 + 16;
        v494 = *(__m128i **)&v2565[v491];
        v2563 = v493;
        if ( (unsigned int)v493 <= 0x2F )
        {
          v491 = v490 + 24;
          v495 = *(__int64 **)&v2565[v493];
          v2563 = v491;
          if ( (unsigned int)v491 <= 0x2F )
          {
            v496 = (__int64 *)&v2565[v491];
            v2563 = v490 + 32;
            goto LABEL_431;
          }
          v496 = (__int64 *)v2564;
LABEL_2012:
          v2564 = (char *)(v496 + 1);
LABEL_431:
          v497 = *v496;
          if ( v494 )
          {
            v498 = *v495;
            *(_OWORD *)v2559 = 0;
            v2558 = (__m128i)(unsigned __int64)v498;
            sub_3436C0(&v2558.m128i_i64[1], v497, v498, v491);
            v499 = v2558.m128i_i64[1];
            *(_QWORD *)&v2559[16] = 0;
            LODWORD(v2560) = -1;
            *(_OWORD *)v2561 = v2558.m128i_u64[0];
            *(_OWORD *)&v2561[16] = 0;
            sub_3436C0(&v2561[8], (__int64)&v2558.m128i_i64[1], v500, v501);
            *(_QWORD *)&v2561[32] = 0;
            *(_DWORD *)&v2561[40] = -1;
            *v492 = sub_349E00(v494, (__int64 *)v2561);
            if ( *(_QWORD *)&v2561[8] )
            {
              *(_QWORD *)&v2561[16] = 0;
              qfree(*(__int64 *)&v2561[8]);
            }
            if ( v499 )
              qfree(v499);
            return nullptr;
          }
          goto LABEL_2525;
        }
        v2264 = v2564;
      }
      v2265 = (__int64 **)v2264;
      v496 = (__int64 *)(v2264 + 8);
      v2564 = (char *)v496;
      v495 = *v2265;
      goto LABEL_2012;
    case 112LL:
      v1253 = v2563;
      v1254 = v2563 + 8;
      v2563 = v1254;
      v1255 = *(unsigned __int64 ***)&v2565[v1253];
      if ( (unsigned int)v1254 > 0x2F )
      {
        v1256 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v1256 = (__int64 ***)&v2565[v1254];
        v2563 = v1253 + 16;
      }
      v1257 = *v1256;
      if ( !v1255 )
        goto LABEL_2657;
      sub_34A570(v1255, *v1257);
      return nullptr;
    case 113LL:
      v1252 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( !*v1252 )
        goto LABEL_2666;
      sub_3451B0(*v1252);
      return nullptr;
    case 114LL:
      v1712 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1713 = *v1712;
      if ( !v1713 )
        goto LABEL_2645;
      return *(char **)(v1713 + 8);
    case 115LL:
      v688 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v689 = *v688;
      if ( *v688 )
      {
        sub_344A30(*v688);
        qfree((__int64)v689);
      }
      return nullptr;
    case 116LL:
      result = (char *)qalloc();
      if ( !result )
        sub_548D9(16);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      return result;
    case 117LL:
      v682 = v2563;
      v683 = v2563 + 8;
      v2563 = v683;
      v684 = *(_QWORD **)&v2565[v682];
      if ( (unsigned int)v683 > 0x2F )
      {
        v685 = v2564;
        v2564 += 8;
      }
      else
      {
        v685 = &v2565[v683];
        v2563 = v682 + 16;
      }
      v686 = *(__int64 **)v685;
      if ( *(_QWORD *)v685 )
      {
        v687 = *v686;
        if ( *v686 && v686[1] )
          v687 = *(_QWORD *)(v687 + 8);
        *v684 = v687;
        return nullptr;
      }
LABEL_2315:
      if ( under_debugger )
        goto LABEL_2700;
      goto LABEL_2207;
    case 118LL:
      v677 = v2563;
      v678 = v2563 + 8;
      v2563 = v678;
      v679 = *(_QWORD **)&v2565[v677];
      if ( (unsigned int)v678 > 0x2F )
      {
        v680 = v2564;
        v2564 += 8;
      }
      else
      {
        v680 = &v2565[v678];
        v2563 = v677 + 16;
      }
      v681 = *(_QWORD **)v680;
      if ( !v681 )
      {
LABEL_2650:
        if ( !under_debugger )
          sub_383060(0xCD9Fu, *(double *)a7.m128_u64);
        goto LABEL_2700;
      }
      *v679 = *v681;
      return nullptr;
    case 119LL:
      v675 = &v2565[v2563];
      v676 = *(_QWORD **)v675;
      *v676 = sub_106CC0(**(_QWORD ***)v675);
      return nullptr;
    case 120LL:
      v1526 = &v2565[v2563];
      v1527 = *(_QWORD **)v1526;
      v1528 = **(_QWORD ***)v1526;
      if ( (*v1528 & 2) != 0 )
      {
        nn = (_QWORD *)v1528[2];
      }
      else
      {
        v1529 = (_QWORD *)v1528[1];
        if ( (*(_BYTE *)v1529 & 2) != 0 )
        {
          for ( nn = (_QWORD *)(*v1528 & 0xFFFFFFFFFFFFFFFCLL);
                (*nn & 2) == 0 && (_QWORD *)nn[1] == v1528;
                nn = (_QWORD *)(*nn & 0xFFFFFFFFFFFFFFFCLL) )
          {
            v1528 = nn;
          }
        }
        else
        {
          do
          {
            nn = v1529;
            v1529 = (_QWORD *)v1529[2];
          }
          while ( (*(_BYTE *)v1529 & 2) == 0 );
        }
      }
      *v1527 = nn;
      return nullptr;
    case 121LL:
      return (char *)(**(_QWORD **)&v2565[v2563] + 24LL);
    case 122LL:
      v1531 = v2563;
      v1532 = v2563 + 8;
      v2563 = v1532;
      v1533 = *(_QWORD **)&v2565[v1531];
      if ( (unsigned int)v1532 > 0x2F )
      {
        v2246 = v2564;
        v1536 = v2564 + 8;
        v2564 += 8;
        v1535 = *(_QWORD ***)v2246;
      }
      else
      {
        v1534 = v1531 + 16;
        v1535 = *(_QWORD ***)&v2565[v1532];
        v2563 = v1534;
        if ( (unsigned int)v1534 <= 0x2F )
        {
          v1536 = &v2565[v1534];
          v2563 = v1531 + 24;
          goto LABEL_1363;
        }
        v1536 = v2564;
      }
      v2564 = v1536 + 8;
LABEL_1363:
      if ( !v1535 )
      {
        if ( !under_debugger )
          sub_383060(0xCD9Cu, *(double *)a7.m128_u64);
LABEL_2700:
        BUG();
      }
      v1537 = *v1535;
      if ( !*v1535 )
        goto LABEL_1373;
      v1538 = *v1537 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v1538 )
      {
        v1537 = nullptr;
LABEL_1373:
        *v1533 = v1537;
        return nullptr;
      }
      if ( (*(_BYTE *)v1538 & 2) != 0 )
        goto LABEL_1373;
      v1539 = *(_QWORD *)v1536;
      v1540 = *(_BYTE *)(*(_QWORD *)v1536 + 32LL);
      while ( 1 )
      {
        v1541 = *(_BYTE *)(v1538 + 56);
        if ( v1540 < v1541 )
          break;
        if ( v1541 >= v1540 )
        {
          v1542 = *(_QWORD *)(v1538 + 48);
          if ( *(_QWORD *)(v1539 + 24) < v1542 )
            break;
          if ( *(_QWORD *)(v1539 + 24) <= v1542 )
          {
            v1537 = (_QWORD *)v1538;
            goto LABEL_1373;
          }
        }
        v1538 = *(_QWORD *)(v1538 + 16);
LABEL_2131:
        if ( (*(_BYTE *)v1538 & 2) != 0 )
          goto LABEL_1373;
      }
      v1538 = *(_QWORD *)(v1538 + 8);
      goto LABEL_2131;
    case 123LL:
      v1019 = v2563;
      v1020 = v2563 + 8;
      v2563 = v1020;
      v1021 = *(unsigned __int64 **)&v2565[v1019];
      if ( (unsigned int)v1020 > 0x2F )
      {
        v2292 = (__m128i **)v2564;
        v1024 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1023 = *v2292;
      }
      else
      {
        v1022 = v1019 + 16;
        v1023 = *(__m128i **)&v2565[v1020];
        v2563 = v1022;
        if ( (unsigned int)v1022 <= 0x2F )
        {
          v1024 = (__int64 *)&v2565[v1022];
          v2563 = v1019 + 24;
          goto LABEL_889;
        }
        v1024 = (__int64 *)v2564;
      }
      v2564 = (char *)(v1024 + 1);
LABEL_889:
      v1025 = *v1024;
      if ( v1023 )
      {
        *(_QWORD *)v2561 = *v1024;
        *v1021 = sub_1075D0(v1023, v1025, (__int64 *)v2561);
        return nullptr;
      }
      if ( !under_debugger )
        sub_383060(0xCD9Du, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 124LL:
      v1027 = v2563;
      v1028 = v2563 + 8;
      v2563 = v1028;
      v1029 = *(unsigned __int64 ***)&v2565[v1027];
      if ( (unsigned int)v1028 > 0x2F )
      {
        v1030 = (__int64 ***)v2564;
        v2564 += 8;
      }
      else
      {
        v1030 = (__int64 ***)&v2565[v1028];
        v2563 = v1027 + 16;
      }
      v1031 = *v1030;
      if ( v1029 )
      {
        sub_107EB0(v1029, *v1031);
        return nullptr;
      }
LABEL_2657:
      if ( !under_debugger )
        sub_383060(0xCDA0u, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 125LL:
      v1026 = (unsigned __int64 ***)&v2565[v2563];
      v2563 += 8;
      if ( *v1026 )
      {
        sub_106670(*v1026);
        return nullptr;
      }
LABEL_2666:
      if ( !under_debugger )
        sub_383060(0xCDA1u, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 126LL:
      v382 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v383 = *v382;
      if ( v383 )
        return *(char **)(v383 + 8);
LABEL_2645:
      if ( !under_debugger )
        sub_383060(0xCDA2u, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 127LL:
      v380 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v381 = *v380;
      if ( *v380 )
      {
        sub_E0E30(*v380);
        j__qfree((__int64)v381);
      }
      return nullptr;
    case 128LL:
      result = (char *)j__qalloc_or_throw(24, (__int64)a2, a3, a4);
      *(_QWORD *)result = 0;
      *((_QWORD *)result + 1) = 0;
      *((_DWORD *)result + 4) = -1;
      return result;
    case 129LL:
      return (char *)j__qalloc_or_throw(*(_QWORD *)&v2565[v2563], (__int64)a2, a3, a4);
    case 130LL:
      j__qfree(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 131LL:
      sub_312B80(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 132LL:
      v956 = v2563 + 8;
      v957 = (__int64 *)&v2565[v956];
      if ( (unsigned int)v956 > 0x2F )
        v957 = (__int64 *)v2564;
      sub_312C40(*(_QWORD *)&v2565[v2563], *v957, v2563, v956);
      return nullptr;
    case 133LL:
      v954 = v2563 + 8;
      v955 = (__int64 *)&v2565[v954];
      if ( (unsigned int)v954 > 0x2F )
        v955 = (__int64 *)v2564;
      return (char *)sub_312D90(*(_QWORD *)&v2565[v2563], *v955);
    case 134LL:
      v1714 = v2563 + 8;
      v1715 = (__int64 *)&v2565[v1714];
      if ( (unsigned int)v1714 > 0x2F )
        v1715 = (__int64 *)v2564;
      return (char *)(int)sub_312DC0(*(_QWORD *)&v2565[v2563], *v1715);
    case 135LL:
      v952 = v2563 + 8;
      v953 = (unsigned __int64 *)&v2565[v952];
      if ( (unsigned int)v952 > 0x2F )
        v953 = (unsigned __int64 *)v2564;
      sub_313160(*(_QWORD *)&v2565[v2563], *v953);
      return nullptr;
    case 136LL:
      v1961 = v2563;
      v1962 = v2563 + 8;
      v2563 = v1962;
      v1963 = *(_QWORD *)&v2565[v1961];
      if ( (unsigned int)v1962 > 0x2F )
      {
        v2403 = (int *)v2564;
        v1966 = (unsigned __int64 *)(v2564 + 8);
        v2564 += 8;
        v1965 = *v2403;
      }
      else
      {
        v1964 = v1961 + 16;
        v1965 = *(_DWORD *)&v2565[v1962];
        if ( (unsigned int)v1964 > 0x2F )
          v1966 = (unsigned __int64 *)v2564;
        else
          v1966 = (unsigned __int64 *)&v2565[v1964];
      }
      sub_313200(v1963, v1965, *v1966);
      return nullptr;
    case 137LL:
      v1809 = v2563 + 8;
      v1810 = (unsigned int *)&v2565[v1809];
      if ( (unsigned int)v1809 > 0x2F )
        v1810 = (unsigned int *)v2564;
      return (char *)(unsigned __int8)sub_3156C0(*(__m128i **)&v2565[v2563], *v1810, v2563, v1809);
    case 138LL:
      v1232 = v2563 + 8;
      v1233 = (int **)&v2565[v1232];
      if ( (unsigned int)v1232 > 0x2F )
        v1233 = (int **)v2564;
      return (char *)(unsigned __int8)sub_3147B0(*(_QWORD *)&v2565[v2563], *v1233);
    case 139LL:
      v1230 = v2563 + 8;
      v1231 = (int **)&v2565[v1230];
      if ( (unsigned int)v1230 > 0x2F )
        v1231 = (int **)v2564;
      return (char *)(unsigned __int8)sub_314C00(*(int **)&v2565[v2563], *v1231);
    case 140LL:
      sub_315730(*(__m128i **)&v2565[v2563]);
      return nullptr;
    case 141LL:
      v1637 = v2563 + 8;
      v1638 = (unsigned __int64 *)&v2565[v1637];
      if ( (unsigned int)v1637 > 0x2F )
        v1638 = (unsigned __int64 *)v2564;
      return (char *)(unsigned __int8)sub_315890(*(_QWORD *)&v2565[v2563], *v1638);
    case 142LL:
      v1639 = v2563 + 8;
      v1640 = (__int64 **)&v2565[v1639];
      if ( (unsigned int)v1639 > 0x2F )
        v1640 = (__int64 **)v2564;
      sub_315E10(*(_QWORD *)&v2565[v2563], *v1640);
      return nullptr;
    case 143LL:
      return (char *)sub_1AE530(*(_QWORD *)&v2565[v2563]);
    case 144LL:
      v1680 = v2563 + 8;
      v1681 = &v2565[v1680];
      if ( (unsigned int)v1680 > 0x2F )
        v1681 = v2564;
      return (char *)(unsigned __int8)sub_312AF0(*(_QWORD *)&v2565[v2563], *(_QWORD **)v1681);
    case 145LL:
      v1674 = v2563;
      v1675 = v2563 + 8;
      v2563 = v1675;
      v1676 = *(_DWORD **)&v2565[v1674];
      if ( (unsigned int)v1675 > 0x2F )
      {
        v2231 = (__int64 *)v2564;
        v1679 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1678 = *v2231;
      }
      else
      {
        v1677 = v1674 + 16;
        v1678 = *(_QWORD *)&v2565[v1675];
        if ( (unsigned int)v1677 > 0x2F )
          v1679 = (__int64 *)v2564;
        else
          v1679 = (__int64 *)&v2565[v1677];
      }
      return (char *)(unsigned __int8)sub_312B30(v1676, v1678, *v1679);
    case 146LL:
      v1761 = v2563;
      v1762 = v2563 + 8;
      v1763 = *(__int64 **)&v2565[v2563];
      if ( (unsigned int)v1762 > 0x2F )
      {
        v2410 = (__int64 **)v2564;
        v2411 = v2564 + 8;
        v2564 += 8;
        v1765 = *v2410;
      }
      else
      {
        v1764 = v2563 + 16;
        v1765 = *(__int64 **)&v2565[v1762];
        v2563 = v1764;
        if ( (unsigned int)v1764 <= 0x2F )
        {
          v1766 = v1761 + 24;
          v1767 = *(unsigned int *)&v2565[v1764];
          if ( (unsigned int)v1766 > 0x2F )
            v1768 = v2564;
          else
            v1768 = &v2565[v1766];
LABEL_1585:
          *v1763 = sub_3369B0(v1765, v1767, *(_QWORD **)v1768);
          return nullptr;
        }
        v2411 = v2564;
      }
      v2412 = v2411;
      v1768 = v2411 + 8;
      v2564 = v1768;
      v1767 = *(unsigned int *)v2412;
      goto LABEL_1585;
    case 147LL:
      v1348 = v2563 + 8;
      v1349 = &v2565[v1348];
      if ( (unsigned int)v1348 > 0x2F )
        v1349 = v2564;
      return (char *)(unsigned __int8)sub_32ED40(*(_DWORD *)&v2565[v2563], *(_DWORD *)v1349 != 0);
    case 148LL:
      return (char *)sub_32ED70(*(unsigned int *)&v2565[v2563]);
    case 149LL:
      return (char *)(unsigned int)sub_32E9E0(*(_DWORD *)&v2565[v2563]);
    case 150LL:
      return (char *)(unsigned int)sub_32EA00(*(_DWORD *)&v2565[v2563]);
    case 151LL:
      return (char *)(unsigned int)sub_32EA20(*(_DWORD *)&v2565[v2563]);
    case 152LL:
      return (char *)(unsigned int)sub_32EAF0(*(_DWORD *)&v2565[v2563]);
    case 153LL:
      return (char *)sub_11E8A0(*(unsigned int *)&v2565[v2563]);
    case 154LL:
      v445 = v2563 + 8;
      v446 = (__int64 *)&v2565[v445];
      if ( (unsigned int)v445 > 0x2F )
        v446 = (__int64 *)v2564;
      return (char *)(int)sub_257C40(*(_QWORD *)&v2565[v2563], *v446);
    case 155LL:
      v438 = v2563;
      v439 = v2563 + 8;
      v440 = *(_QWORD **)&v2565[v2563];
      if ( (unsigned int)v439 > 0x2F )
      {
        v2364 = (int *)v2564;
        v2365 = v2564 + 8;
        v2564 += 8;
        v441 = *v2364;
      }
      else
      {
        v441 = *(_DWORD *)&v2565[v439];
        v2563 += 16;
        if ( v438 + 16 <= 0x2F )
        {
          v442 = v438 + 24;
          if ( (unsigned int)v442 > 0x2F )
            v443 = v2564;
          else
            v443 = &v2565[v442];
LABEL_387:
          v444 = *(const __m128i **)v443;
          v2566 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v443);
          v2567 = v444[1].m128i_i64[0];
          return (char *)(int)sub_334570(v440, v441);
        }
        v2365 = v2564;
      }
      v443 = v2365 + 8;
      v2564 = v443;
      goto LABEL_387;
    case 156LL:
      v1088 = v2563;
      v1089 = v2563 + 8;
      v1090 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1089 > 0x2F )
      {
        v2408 = (int *)v2564;
        v2409 = v2564 + 8;
        v2564 += 8;
        v1091 = *v2408;
      }
      else
      {
        v1091 = *(_DWORD *)&v2565[v1089];
        v2563 += 16;
        if ( v1088 + 16 <= 0x2F )
        {
          v1092 = v1088 + 24;
          if ( (unsigned int)v1092 > 0x2F )
            v1093 = v2564;
          else
            v1093 = &v2565[v1092];
LABEL_964:
          v1094 = *(const __m128i **)v1093;
          v2566 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1093);
          v2567 = v1094[1].m128i_i64[0];
          return (char *)(int)sub_3347E0(v1090, v1091);
        }
        v2409 = v2564;
      }
      v1093 = v2409 + 8;
      v2564 = v1093;
      goto LABEL_964;
    case 157LL:
      v1081 = v2563;
      v1082 = v2563 + 8;
      v1083 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1082 > 0x2F )
      {
        v2305 = (int *)v2564;
        v2306 = v2564 + 8;
        v2564 += 8;
        v1084 = *v2305;
      }
      else
      {
        v1084 = *(_DWORD *)&v2565[v1082];
        v2563 += 16;
        if ( v1081 + 16 <= 0x2F )
        {
          v1085 = v1081 + 24;
          if ( (unsigned int)v1085 > 0x2F )
            v1086 = v2564;
          else
            v1086 = &v2565[v1085];
LABEL_959:
          v1087 = *(const __m128i **)v1086;
          v2566 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1086);
          v2567 = v1087[1].m128i_i64[0];
          return (char *)(int)sub_269C10(v1083, v1084);
        }
        v2306 = v2564;
      }
      v1086 = v2306 + 8;
      v2564 = v1086;
      goto LABEL_959;
    case 158LL:
      return (char *)j__dstr_tinfo();
    case 159LL:
      return (char *)(unsigned __int8)sub_32E730(*(_QWORD *)&v2565[v2563]);
    case 160LL:
      return (char *)sub_32C8F0();
    case 161LL:
      return (char *)(unsigned __int8)sub_29CFE0(*(__int64 **)&v2565[v2563]);
    case 162LL:
      return (char *)(unsigned __int8)sub_29CC80(*(_QWORD **)&v2565[v2563]);
    case 163LL:
      return (char *)(int)sub_32E340(*(__int64 **)&v2565[v2563]);
    case 164LL:
      v1383 = v2563;
      v1384 = v2563 + 8;
      v2563 = v1384;
      if ( (unsigned int)v1384 > 0x2F )
      {
        v1385 = (int *)v2564;
        v2564 += 8;
      }
      else
      {
        v1385 = (int *)&v2565[v1384];
        v2563 = v1383 + 16;
      }
      v1386 = *v1385;
      v1387 = sub_339CA0();
      sub_32C150(v2561, v1387, v1386);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 165LL:
      v1376 = v2563;
      v1377 = v2563 + 8;
      v2563 = v1377;
      if ( (unsigned int)v1377 > 0x2F )
      {
        v2210 = (unsigned int *)v2564;
        v1380 = (int *)(v2564 + 8);
        v2564 += 8;
        v1379 = *v2210;
      }
      else
      {
        v1378 = v1376 + 16;
        v1379 = *(_DWORD *)&v2565[v1377];
        v2563 = v1378;
        if ( (unsigned int)v1378 <= 0x2F )
        {
          v1380 = (int *)&v2565[v1378];
          v2563 = v1376 + 24;
          goto LABEL_1240;
        }
        v1380 = (int *)v2564;
      }
      v2564 = (char *)(v1380 + 2);
LABEL_1240:
      v1381 = *v1380;
      v1382 = sub_339CA0();
      sub_32C430((__int64 *)v2561, v1382, v1379, v1381);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 166LL:
      v867 = v2563;
      v868 = v2563 + 8;
      v2563 = v868;
      if ( (unsigned int)v868 > 0x2F )
      {
        v869 = (int *)v2564;
        v2564 += 8;
      }
      else
      {
        v869 = (int *)&v2565[v868];
        v2563 = v867 + 16;
      }
      v870 = *v869;
      v871 = sub_339CA0();
      sub_32C270(v2561, v871, v870);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 167LL:
      v860 = v2563;
      v861 = v2563 + 8;
      v2563 = v861;
      if ( (unsigned int)v861 > 0x2F )
      {
        v2287 = (int *)v2564;
        v864 = v2564 + 8;
        v2564 += 8;
        v863 = *v2287;
      }
      else
      {
        v862 = v860 + 16;
        v863 = *(_DWORD *)&v2565[v861];
        v2563 = v862;
        if ( (unsigned int)v862 <= 0x2F )
        {
          v864 = &v2565[v862];
          v2563 = v860 + 24;
          goto LABEL_739;
        }
        v864 = v2564;
      }
      v2564 = v864 + 8;
LABEL_739:
      v865 = *(_DWORD *)v864 != 0;
      v866 = sub_339CA0();
      sub_32C2C0((__int64 *)v2561, v866, v863, v865);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 169LL:
      v585 = v2563;
      v586 = v2563 + 8;
      v2563 = v586;
      if ( (unsigned int)v586 > 0x2F )
      {
        v587 = v2564;
        v2564 += 8;
      }
      else
      {
        v587 = &v2565[v586];
        v2563 = v585 + 16;
      }
      v588 = *(_QWORD **)v587;
      v589 = sub_339CA0();
      sub_32C540(v2561, v589, v588);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 170LL:
      v582 = v2563;
      v583 = v2563 + 8;
      v2563 = v583;
      if ( (unsigned int)v583 > 0x2F )
      {
        v584 = (__int64 *)v2564;
        v2564 += 8;
      }
      else
      {
        v584 = (__int64 *)&v2565[v583];
        v2563 = v582 + 16;
      }
      sub_32ACB0(v2561, *v584);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 171LL:
      v590 = v2563;
      v591 = v2563 + 8;
      v2563 = v591;
      v592 = *(_QWORD *)&v2565[v590];
      if ( (unsigned int)v591 > 0x2F )
      {
        v2379 = (__int64 *)v2564;
        v595 = (int *)(v2564 + 8);
        v2564 += 8;
        v594 = *v2379;
      }
      else
      {
        v593 = v590 + 16;
        v594 = *(_QWORD *)&v2565[v591];
        if ( (unsigned int)v593 > 0x2F )
          v595 = (int *)v2564;
        else
          v595 = (int *)&v2565[v593];
      }
      v596 = *v595;
      v597 = sub_339CA0();
      return (char *)(unsigned __int8)sub_381D00(v597, v592, v594, v596);
    case 172LL:
      v572 = v2563;
      v573 = v2563 + 8;
      v574 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v573 > 0x2F )
      {
        v2266 = v2564;
        v2267 = v2564 + 8;
        v2564 += 8;
        v576 = *(_BYTE **)v2266;
      }
      else
      {
        v575 = v2563 + 16;
        v576 = *(_BYTE **)&v2565[v573];
        v2563 = v575;
        if ( (unsigned int)v575 <= 0x2F )
        {
          v577 = v572 + 24;
          v578 = *(_DWORD *)&v2565[v575];
          if ( (unsigned int)v577 > 0x2F )
            v579 = v2564;
          else
            v579 = &v2565[v577];
LABEL_490:
          v580 = *(_DWORD *)v579 != 0;
          v581 = sub_339CA0();
          return (char *)(unsigned __int8)sub_382090(v581, v574, v576, v578, v580);
        }
        v2267 = v2564;
      }
      v2268 = (unsigned int *)v2267;
      v579 = v2267 + 8;
      v2564 = v579;
      v578 = *v2268;
      goto LABEL_490;
    case 173LL:
      v1177 = v2563 + 8;
      v1178 = (unsigned int *)&v2565[v1177];
      if ( (unsigned int)v1177 > 0x2F )
        v1178 = (unsigned int *)v2564;
      return sub_1AEC60(*(_QWORD *)&v2565[v2563], *v1178);
    case 174LL:
      v1175 = v2563 + 8;
      v1176 = (int **)&v2565[v1175];
      if ( (unsigned int)v1175 > 0x2F )
        v1176 = (int **)v2564;
      return (char *)(int)sub_1C2AD0(*(int **)&v2565[v2563], *v1176);
    case 175LL:
      v566 = v2563;
      v567 = v2563 + 8;
      v2563 = v567;
      v568 = *(_QWORD *)&v2565[v566];
      if ( (unsigned int)v567 > 0x2F )
      {
        v2273 = (__int64 *)v2564;
        v571 = v2564 + 8;
        v2564 += 8;
        v570 = *v2273;
      }
      else
      {
        v569 = v566 + 16;
        v570 = *(_QWORD *)&v2565[v567];
        if ( (unsigned int)v569 > 0x2F )
          v571 = v2564;
        else
          v571 = &v2565[v569];
      }
      return (char *)(unsigned __int8)sub_1C27D0(v568, v570, *(unsigned int *)v571);
    case 176LL:
      v558 = v2563;
      v559 = v2563 + 8;
      v2563 = v559;
      v560 = *(__int64 **)&v2565[v558];
      if ( (unsigned int)v559 > 0x2F )
      {
        v2269 = (__int64 *)v2564;
        v563 = (signed int *)(v2564 + 8);
        v2564 += 8;
        v562 = *v2269;
      }
      else
      {
        v561 = v558 + 16;
        v562 = *(_QWORD *)&v2565[v559];
        if ( (unsigned int)v561 > 0x2F )
          v563 = (signed int *)v2564;
        else
          v563 = (signed int *)&v2565[v561];
      }
      v564 = *v563;
      v565 = (_DWORD *)sub_339CA0();
      sub_1C8140(v565, v560, v562, v564);
      return nullptr;
    case 177LL:
      v724 = v2563;
      v725 = v2563 + 8;
      v726 = *(int **)&v2565[v2563];
      if ( (unsigned int)v725 > 0x2F )
      {
        v2255 = (unsigned __int64 *)v2564;
        v2256 = v2564 + 8;
        v2564 += 8;
        v728 = *v2255;
      }
      else
      {
        v727 = v2563 + 16;
        v728 = *(_QWORD *)&v2565[v725];
        v2563 = v727;
        if ( (unsigned int)v727 <= 0x2F )
        {
          v729 = v724 + 24;
          v730 = *(int **)&v2565[v727];
          if ( (unsigned int)v729 > 0x2F )
            v731 = (unsigned __int64 *)v2564;
          else
            v731 = (unsigned __int64 *)&v2565[v729];
          return (char *)(unsigned __int8)sub_1C4AE0(v726, v728, v730, *v731);
        }
        v2256 = v2564;
      }
      v2257 = (int **)v2256;
      v731 = (unsigned __int64 *)(v2256 + 8);
      v2564 = (char *)v731;
      v730 = *v2257;
      return (char *)(unsigned __int8)sub_1C4AE0(v726, v728, v730, *v731);
    case 178LL:
      v722 = v2563 + 8;
      v723 = (int **)&v2565[v722];
      if ( (unsigned int)v722 > 0x2F )
        v723 = (int **)v2564;
      return (char *)(int)sub_3307E0(*(int **)&v2565[v2563], *v723);
    case 179LL:
      return (char *)sub_1B0390(*(_QWORD *)&v2565[v2563]);
    case 180LL:
      return (char *)sub_1AE8E0(*(_QWORD *)&v2565[v2563]);
    case 181LL:
      v732 = *(int **)&v2565[v2563];
      v733 = (_QWORD *)sub_339CA0();
      return (char *)(unsigned __int8)sub_1F0D70(v732, v733);
    case 182LL:
      v714 = v2563;
      v715 = v2563 + 8;
      v2563 = v715;
      v716 = *(_QWORD *)&v2565[v714];
      if ( (unsigned int)v715 > 0x2F )
      {
        v2258 = v2564;
        v719 = v2564 + 8;
        v2564 += 8;
        v718 = *(_BYTE **)v2258;
      }
      else
      {
        v717 = v714 + 16;
        v718 = *(_BYTE **)&v2565[v715];
        if ( (unsigned int)v717 > 0x2F )
          v719 = v2564;
        else
          v719 = &v2565[v717];
      }
      v720 = *(_DWORD *)v719 != 0;
      v721 = sub_339CA0();
      return (char *)(unsigned __int8)sub_1EF510(v716, v721, v718, v720);
    case 183LL:
      v706 = v2563;
      v707 = v2563 + 8;
      v2563 = v707;
      v708 = *(_QWORD *)&v2565[v706];
      if ( (unsigned int)v707 > 0x2F )
      {
        v2254 = v2564;
        v711 = v2564 + 8;
        v2564 += 8;
        v710 = *(_BYTE **)v2254;
      }
      else
      {
        v709 = v706 + 16;
        v710 = *(_BYTE **)&v2565[v707];
        if ( (unsigned int)v709 > 0x2F )
          v711 = v2564;
        else
          v711 = &v2565[v709];
      }
      v712 = *(_DWORD *)v711 != 0;
      v713 = sub_339CA0();
      return (char *)(unsigned __int8)sub_1EF8F0(v708, v713, v710, v712);
    case 184LL:
      v698 = v2563;
      v699 = v2563 + 8;
      v2563 = v699;
      v700 = *(_DWORD **)&v2565[v698];
      if ( (unsigned int)v699 > 0x2F )
      {
        v2253 = (unsigned int *)v2564;
        v703 = v2564 + 8;
        v2564 += 8;
        v702 = *v2253;
      }
      else
      {
        v701 = v698 + 16;
        v702 = *(_DWORD *)&v2565[v699];
        if ( (unsigned int)v701 > 0x2F )
          v703 = v2564;
        else
          v703 = &v2565[v701];
      }
      v704 = *(_DWORD *)v703;
      v705 = (_QWORD *)sub_339CA0();
      return (char *)(unsigned __int8)sub_1EF680(v700, v705, v702, v704);
    case 185LL:
      v1268 = v2563;
      v1269 = v2563 + 8;
      v1270 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1269 > 0x2F )
      {
        v2223 = (__int64 *)v2564;
        v2224 = v2564 + 8;
        v2564 += 8;
        v1272 = *v2223;
      }
      else
      {
        v1271 = v2563 + 16;
        v1272 = *(_QWORD *)&v2565[v1269];
        v2563 = v1271;
        if ( (unsigned int)v1271 <= 0x2F )
        {
          v1273 = v1268 + 24;
          v1274 = *(_QWORD *)&v2565[v1271];
          if ( (unsigned int)v1273 > 0x2F )
            v1275 = v2564;
          else
            v1275 = &v2565[v1273];
LABEL_1143:
          sub_1C3380(v1270, v1272, v1274, *(_DWORD *)v1275 != 0);
          return nullptr;
        }
        v2224 = v2564;
      }
      v2225 = (__int64 *)v2224;
      v1275 = v2224 + 8;
      v2564 = v1275;
      v1274 = *v2225;
      goto LABEL_1143;
    case 186LL:
      v1260 = v2563;
      v1261 = v2563 + 8;
      v2563 = v1261;
      v1262 = *(_QWORD *)&v2565[v1260];
      if ( (unsigned int)v1261 > 0x2F )
      {
        v2433 = (__int64 *)v2564;
        v1265 = v2564 + 8;
        v2564 += 8;
        v1264 = *v2433;
      }
      else
      {
        v1263 = v1260 + 16;
        v1264 = *(_QWORD *)&v2565[v1261];
        if ( (unsigned int)v1263 > 0x2F )
          v1265 = v2564;
        else
          v1265 = &v2565[v1263];
      }
      v1266 = *(_DWORD *)v1265 != 0;
      v1267 = sub_339CA0();
      sub_1C33B0(v1262, v1267, v1264, v1266);
      return nullptr;
    case 187LL:
      v1276 = v2563;
      v1277 = v2563 + 8;
      v2563 = v1277;
      v1278 = *(_QWORD **)&v2565[v1276];
      if ( (unsigned int)v1277 > 0x2F )
      {
        v2399 = (unsigned __int64 *)v2564;
        v1281 = (int *)(v2564 + 8);
        v2564 += 8;
        v1280 = *v2399;
      }
      else
      {
        v1279 = v1276 + 16;
        v1280 = *(_QWORD *)&v2565[v1277];
        if ( (unsigned int)v1279 > 0x2F )
          v1281 = (int *)v2564;
        else
          v1281 = (int *)&v2565[v1279];
      }
      v1282 = *v1281;
      v1283 = sub_339CA0();
      return (char *)(int)sub_228FE0(v1278, v1283, v1280, v1282);
    case 188LL:
      v734 = v2563 + 8;
      v735 = (__int64 *)&v2565[v734];
      if ( (unsigned int)v734 > 0x2F )
        v735 = (__int64 *)v2564;
      return (char *)sub_1F04A0(*(__int64 **)&v2565[v2563], *v735);
    case 189LL:
      v1554 = v2563;
      v1555 = v2563 + 8;
      v1556 = *(__int64 **)&v2565[v2563];
      if ( (unsigned int)v1555 > 0x2F )
      {
        v2400 = (int **)v2564;
        v2401 = v2564 + 8;
        v2564 += 8;
        v1558 = *v2400;
      }
      else
      {
        v1557 = v2563 + 16;
        v1558 = *(int **)&v2565[v1555];
        v2563 = v1557;
        if ( (unsigned int)v1557 <= 0x2F )
        {
          v1559 = v1554 + 24;
          v1560 = *(_DWORD *)&v2565[v1557];
          if ( (unsigned int)v1559 > 0x2F )
            v1561 = (int *)v2564;
          else
            v1561 = (int *)&v2565[v1559];
          return (char *)(int)sub_1F06C0(v1556, v1558, v1560, *v1561);
        }
        v2401 = v2564;
      }
      v2402 = (int *)v2401;
      v1561 = (int *)(v2401 + 8);
      v2564 = (char *)v1561;
      v1560 = *v2402;
      return (char *)(int)sub_1F06C0(v1556, v1558, v1560, *v1561);
    case 190LL:
      v1032 = v2563 + 8;
      v1033 = *(_QWORD *)&v2565[v2563];
      v1034 = (__int64 *)&v2565[v1032];
      if ( (unsigned int)v1032 > 0x2F )
        v1034 = (__int64 *)v2564;
      v1035 = *v1034;
      v1036 = sub_339CA0();
      return (char *)(unsigned __int8)sub_2B86B0(v1036, v1033, v1035);
    case 191LL:
      v1549 = v2563 + 8;
      v1550 = *(_QWORD *)&v2565[v2563];
      v1551 = (__int64 *)&v2565[v1549];
      if ( (unsigned int)v1549 > 0x2F )
        v1551 = (__int64 *)v2564;
      v1552 = *v1551;
      v1553 = sub_339CA0();
      sub_2B8730(v1553, v1550, v1552);
      return nullptr;
    case 192LL:
      v384 = v2563 + 8;
      v385 = *(_QWORD *)&v2565[v2563];
      v386 = (__int64 *)&v2565[v384];
      if ( (unsigned int)v384 > 0x2F )
        v386 = (__int64 *)v2564;
      v387 = *v386;
      v388 = sub_339CA0();
      return (char *)(unsigned __int8)sub_2BC2C0(v388, v385, v387);
    case 193LL:
      v1425 = v2563;
      v1426 = v2563 + 8;
      v2563 = v1426;
      v1427 = *(_QWORD *)&v2565[v1425];
      if ( (unsigned int)v1426 > 0x2F )
      {
        v2395 = (int *)v2564;
        v1430 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1429 = *v2395;
      }
      else
      {
        v1428 = v1425 + 16;
        v1429 = *(_DWORD *)&v2565[v1426];
        if ( (unsigned int)v1428 > 0x2F )
          v1430 = (__int64 *)v2564;
        else
          v1430 = (__int64 *)&v2565[v1428];
      }
      v1431 = *v1430;
      v1432 = sub_339CA0();
      return (char *)(unsigned __int8)sub_2168B0(v1432, v1427, v1429, v1431);
    case 194LL:
      v1417 = v2563;
      v1418 = v2563 + 8;
      v2563 = v1418;
      v1419 = *(_QWORD *)&v2565[v1417];
      if ( (unsigned int)v1418 > 0x2F )
      {
        v2214 = (__int64 *)v2564;
        v1422 = (const char **)(v2564 + 8);
        v2564 += 8;
        v1421 = *v2214;
      }
      else
      {
        v1420 = v1417 + 16;
        v1421 = *(_QWORD *)&v2565[v1418];
        if ( (unsigned int)v1420 > 0x2F )
          v1422 = (const char **)v2564;
        else
          v1422 = (const char **)&v2565[v1420];
      }
      v1423 = *v1422;
      v1424 = sub_339CA0();
      return (char *)(unsigned __int8)sub_217C80(v1424, v1419, v1421, v1423);
    case 195LL:
      v2027 = v2563 + 8;
      v2028 = *(_QWORD *)&v2565[v2563];
      v2029 = (__int64 *)&v2565[v2027];
      if ( (unsigned int)v2027 > 0x2F )
        v2029 = (__int64 *)v2564;
      v2030 = *v2029;
      v2031 = sub_339CA0();
      return (char *)sub_2B7DE0(v2031, v2028, v2030);
    case 196LL:
      v1412 = v2563 + 8;
      v1413 = *(_QWORD *)&v2565[v2563];
      v1414 = (__int64 *)&v2565[v1412];
      if ( (unsigned int)v1412 > 0x2F )
        v1414 = (__int64 *)v2564;
      v1415 = *v1414;
      v1416 = sub_339CA0();
      sub_2B7D60(v1416, v1413, v1415);
      return nullptr;
    case 197LL:
      v888 = v2563;
      v889 = v2563 + 8;
      v2563 = v889;
      v890 = *(_QWORD *)&v2565[v888];
      if ( (unsigned int)v889 > 0x2F )
      {
        v2190 = v2564;
        v893 = v2564 + 8;
        v2564 += 8;
        v892 = *(_BYTE **)v2190;
      }
      else
      {
        v891 = v888 + 16;
        v892 = *(_BYTE **)&v2565[v889];
        if ( (unsigned int)v891 > 0x2F )
          v893 = v2564;
        else
          v893 = &v2565[v891];
      }
      return (char *)(unsigned __int8)sub_3C5980(v890, v892, *(_DWORD *)v893 != 0);
    case 198LL:
      v886 = v2563 + 8;
      v887 = (__int64 *)&v2565[v886];
      if ( (unsigned int)v886 > 0x2F )
        v887 = (__int64 *)v2564;
      return (char *)(int)sub_3C7710(*(_QWORD *)&v2565[v2563], *v887, *(double *)a7.m128_u64, a8);
    case 199LL:
      v1825 = v2563 + 8;
      v1826 = *(_QWORD *)&v2565[v2563];
      v1827 = &v2565[v1825];
      if ( (unsigned int)v1825 > 0x2F )
        v1827 = v2564;
      v1828 = *(_DWORD *)v1827;
      v1829 = sub_339CA0();
      return (char *)(unsigned __int8)sub_1D5BD0(v1829, v1826, v1828 != 0);
    case 200LL:
      sub_3C5A60(*(_QWORD **)&v2565[v2563]);
      return nullptr;
    case 201LL:
      v1982 = v2563 + 8;
      v1983 = &v2565[v1982];
      if ( (unsigned int)v1982 > 0x2F )
        v1983 = v2564;
      return (char *)(unsigned __int8)sub_3C5AA0(*(_QWORD *)&v2565[v2563], *(_BYTE **)v1983);
    case 202LL:
      v1980 = v2563 + 8;
      v1981 = (__int64 *)&v2565[v1980];
      if ( (unsigned int)v1980 > 0x2F )
        v1981 = (__int64 *)v2564;
      return (char *)(int)sub_3C7760(*(_QWORD *)&v2565[v2563], *v1981, *(double *)a7.m128_u64, a8);
    case 203LL:
      v2073 = v2563 + 8;
      v2074 = (__int64 *)&v2565[v2073];
      if ( (unsigned int)v2073 > 0x2F )
        v2074 = (__int64 *)v2564;
      sub_64000(*(__int64 **)&v2565[v2563], *v2074);
      return nullptr;
    case 204LL:
      v1196 = v2563 + 8;
      v1197 = (__int64 **)&v2565[v1196];
      if ( (unsigned int)v1196 > 0x2F )
        v1197 = (__int64 **)v2564;
      return (char *)sub_648D0(*(__int64 **)&v2565[v2563], *v1197);
    case 205LL:
      v1664 = v2563 + 8;
      v1665 = (int *)&v2565[v1664];
      if ( (unsigned int)v1664 > 0x2F )
        v1665 = (int *)v2564;
      return (char *)(unsigned __int8)sub_64190(*(__int64 **)&v2565[v2563], *v1665);
    case 206LL:
      v1658 = v2563;
      v1659 = v2563 + 8;
      v2563 = v1659;
      v1660 = *(__int64 **)&v2565[v1658];
      if ( (unsigned int)v1659 > 0x2F )
      {
        v2232 = (int *)v2564;
        v1663 = (int *)(v2564 + 8);
        v2564 += 8;
        v1662 = *v2232;
      }
      else
      {
        v1661 = v1658 + 16;
        v1662 = *(_DWORD *)&v2565[v1659];
        if ( (unsigned int)v1661 > 0x2F )
          v1663 = (int *)v2564;
        else
          v1663 = (int *)&v2565[v1661];
      }
      return (char *)(unsigned __int8)sub_63E80(v1660, v1662, *v1663);
    case 207LL:
      v2058 = v2563 + 8;
      v2059 = (__int64 **)&v2565[v2058];
      if ( (unsigned int)v2058 > 0x2F )
        v2059 = (__int64 **)v2564;
      return (char *)(unsigned __int8)sub_64280(*(__int64 **)&v2565[v2563], *v2059);
    case 208LL:
      v647 = v2563 + 8;
      v648 = (int *)&v2565[v647];
      if ( (unsigned int)v647 > 0x2F )
        v648 = (int *)v2564;
      return (char *)(unsigned __int8)sub_64340(*(__int64 **)&v2565[v2563], *v648);
    case 209LL:
      v1731 = v2563;
      v1732 = v2563 + 8;
      v2563 = v1732;
      v1733 = *(__int64 **)&v2565[v1731];
      if ( (unsigned int)v1732 > 0x2F )
      {
        v2396 = (int *)v2564;
        v1736 = (int *)(v2564 + 8);
        v2564 += 8;
        v1735 = *v2396;
      }
      else
      {
        v1734 = v1731 + 16;
        v1735 = *(_DWORD *)&v2565[v1732];
        if ( (unsigned int)v1734 > 0x2F )
          v1736 = (int *)v2564;
        else
          v1736 = (int *)&v2565[v1734];
      }
      return (char *)(unsigned __int8)sub_64440(v1733, v1735, *v1736);
    case 210LL:
      v1729 = v2563 + 8;
      v1730 = (__int64 **)&v2565[v1729];
      if ( (unsigned int)v1729 > 0x2F )
        v1730 = (__int64 **)v2564;
      return (char *)(unsigned __int8)sub_64640(*(__int64 **)&v2565[v2563], *v1730, v2563, v1729, a5, (int)a6);
    case 211LL:
      v2006 = v2563 + 8;
      v2007 = (int *)&v2565[v2006];
      if ( (unsigned int)v2006 > 0x2F )
        v2007 = (int *)v2564;
      return (char *)(unsigned __int8)sub_643C0(*(__int64 **)&v2565[v2563], *v2007);
    case 212LL:
      v1320 = v2563 + 8;
      v1321 = (int *)&v2565[v1320];
      if ( (unsigned int)v1320 > 0x2F )
        v1321 = (int *)v2564;
      sub_644F0(*(__int64 **)&v2565[v2563], *v1321);
      return nullptr;
    case 213LL:
      v1328 = v2563 + 8;
      v1329 = (int *)&v2565[v1328];
      if ( (unsigned int)v1328 > 0x2F )
        v1329 = (int *)v2564;
      return (char *)sub_64930(*(_QWORD **)&v2565[v2563], *v1329);
    case 214LL:
      v1322 = v2563;
      v1323 = v2563 + 8;
      v2563 = v1323;
      v1324 = *(_QWORD **)&v2565[v1322];
      if ( (unsigned int)v1323 > 0x2F )
      {
        v2221 = (int *)v2564;
        v1327 = (int *)(v2564 + 8);
        v2564 += 8;
        v1326 = *v2221;
      }
      else
      {
        v1325 = v1322 + 16;
        v1326 = *(_DWORD *)&v2565[v1323];
        if ( (unsigned int)v1325 > 0x2F )
          v1327 = (int *)v2564;
        else
          v1327 = (int *)&v2565[v1325];
      }
      return (char *)(unsigned __int8)sub_64A10(v1324, v1326, *v1327);
    case 215LL:
      v765 = v2563;
      v766 = v2563 + 8;
      v2563 = v766;
      v767 = *(_QWORD **)&v2565[v765];
      if ( (unsigned int)v766 > 0x2F )
      {
        v2238 = (int *)v2564;
        v770 = (int *)(v2564 + 8);
        v2564 += 8;
        v769 = *v2238;
      }
      else
      {
        v768 = v765 + 16;
        v769 = *(_DWORD *)&v2565[v766];
        if ( (unsigned int)v768 > 0x2F )
          v770 = (int *)v2564;
        else
          v770 = (int *)&v2565[v768];
      }
      return (char *)(unsigned __int8)sub_64A60(v767, v769, *v770);
    case 216LL:
      return (char *)sub_1B0300(*(_QWORD **)&v2565[v2563]);
    case 217LL:
      return (char *)(unsigned __int8)sub_64880(*(_QWORD **)&v2565[v2563]);
    case 218LL:
      return (char *)(int)sub_64B20(*(_QWORD *)&v2565[v2563]);
    case 219LL:
      v1067 = v2563 + 8;
      v1068 = (int *)&v2565[v1067];
      if ( (unsigned int)v1067 > 0x2F )
        v1068 = (int *)v2564;
      return (char *)(int)sub_64BA0(*(_QWORD **)&v2565[v2563], *v1068);
    case 220LL:
      return (char *)(int)sub_64C00(*(_QWORD **)&v2565[v2563]);
    case 221LL:
      v1903 = v2563 + 8;
      v1904 = (int *)&v2565[v1903];
      if ( (unsigned int)v1903 > 0x2F )
        v1904 = (int *)v2564;
      sub_64070(*(__int64 **)&v2565[v2563], *v1904);
      return nullptr;
    case 222LL:
      v1575 = v2563 + 8;
      v1576 = *(__int64 **)&v2565[v2563];
      v1577 = &v2565[v1575];
      if ( (unsigned int)v1575 > 0x2F )
        v1577 = v2564;
      v1578 = *(_DWORD *)v1577;
      v1579 = sub_339CA0();
      return (char *)(unsigned __int8)sub_64C70(v1576, v1578, *(_DWORD *)(v1579 + 80));
    case 223LL:
      v397 = v2563 + 8;
      v398 = &v2565[v397];
      if ( (unsigned int)v397 > 0x2F )
        v398 = v2564;
      return (char *)(unsigned __int8)sub_64780(*(_QWORD **)&v2565[v2563], *(_QWORD **)v398);
    case 224LL:
      v395 = v2563 + 8;
      v396 = (__int64 **)&v2565[v395];
      if ( (unsigned int)v395 > 0x2F )
        v396 = (__int64 **)v2564;
      return (char *)(unsigned __int8)sub_64700(*(__int64 **)&v2565[v2563], *v396);
    case 225LL:
      v1931 = v2563 + 8;
      v1932 = &v2565[v1931];
      if ( (unsigned int)v1931 > 0x2F )
        v1932 = v2564;
      return (char *)(unsigned __int8)sub_64820(*(_QWORD **)&v2565[v2563], *(_QWORD **)v1932);
    case 226LL:
      v1929 = v2563 + 8;
      v1930 = (__int64 *)&v2565[v1929];
      if ( (unsigned int)v1929 > 0x2F )
        v1930 = (__int64 *)v2564;
      return (char *)sub_647F0(*(_QWORD *)&v2565[v2563], *v1930);
    case 227LL:
      v1363 = v2563 + 8;
      v1364 = (int *)&v2565[v1363];
      if ( (unsigned int)v1363 > 0x2F )
        v1364 = (int *)v2564;
      return (char *)(int)sub_64960(*(_QWORD **)&v2565[v2563], *v1364);
    case 228LL:
      return (char *)sub_1B5F30(*(unsigned __int64 **)&v2565[v2563]);
    case 229LL:
      v2014 = v2563 + 8;
      v2015 = &v2565[v2014];
      if ( (unsigned int)v2014 > 0x2F )
        v2015 = v2564;
      return (char *)(int)sub_316F40(*(_QWORD **)&v2565[v2563], *(_QWORD **)v2015);
    case 230LL:
      v1788 = v2563 + 8;
      v1789 = (__m128i **)&v2565[v1788];
      if ( (unsigned int)v1788 > 0x2F )
        v1789 = (__m128i **)v2564;
      return (char *)(unsigned __int8)sub_316BB0(*(__int64 **)&v2565[v2563], *v1789, *(double *)a7.m128_u64, a8);
    case 231LL:
      v846 = v2563 + 8;
      v847 = (__int64 ***)&v2565[v846];
      if ( (unsigned int)v846 > 0x2F )
        v847 = (__int64 ***)v2564;
      return (char *)(unsigned __int8)sub_316CB0(*(__int64 **)&v2565[v2563], *v847, v2563, v846);
    case 232LL:
      v840 = v2563;
      v841 = v2563 + 8;
      v2563 = v841;
      v842 = *(__int64 **)&v2565[v840];
      if ( (unsigned int)v841 > 0x2F )
      {
        v2288 = (__int64 *)v2564;
        v845 = (__m128i **)(v2564 + 8);
        v2564 += 8;
        v844 = *v2288;
      }
      else
      {
        v843 = v840 + 16;
        v844 = *(_QWORD *)&v2565[v841];
        if ( (unsigned int)v843 > 0x2F )
          v845 = (__m128i **)v2564;
        else
          v845 = (__m128i **)&v2565[v843];
      }
      return (char *)(unsigned __int8)sub_317210(v842, v844, *v845, v841, *(double *)a7.m128_u64, a8);
    case 233LL:
      v1625 = v2563 + 8;
      v1626 = (__m128i **)&v2565[v1625];
      if ( (unsigned int)v1625 > 0x2F )
        v1626 = (__m128i **)v2564;
      return (char *)(unsigned __int8)sub_317BD0(*(__int64 **)&v2565[v2563], *v1626);
    case 234LL:
      v1623 = v2563 + 8;
      v1624 = (__int64 *)&v2565[v1623];
      if ( (unsigned int)v1623 > 0x2F )
        v1624 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_317C60(*(__int64 **)&v2565[v2563], *v1624);
    case 235LL:
      v1143 = v2563 + 8;
      v1144 = (__int64 *)&v2565[v1143];
      if ( (unsigned int)v1143 > 0x2F )
        v1144 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_318470(*(unsigned __int64 ***)&v2565[v2563], *v1144);
    case 236LL:
      v1141 = v2563 + 8;
      v1142 = (__int64 **)&v2565[v1141];
      if ( (unsigned int)v1141 > 0x2F )
        v1142 = (__int64 **)v2564;
      sub_1B39D0(*(_QWORD *)&v2565[v2563], *v1142);
      return nullptr;
    case 237LL:
      return (char *)sub_1B3B80(*(_QWORD *)&v2565[v2563]);
    case 238LL:
      v477 = v2563 + 8;
      v479 = (__int64 **)&v2565[v477];
      if ( (unsigned int)v477 > 0x2F )
        v479 = (__int64 **)v2564;
      v478 = *(__int64 **)&v2565[v2563];
      *v478 = sub_317010(*v479);
      return nullptr;
    case 239LL:
      v471 = v2563;
      v472 = v2563 + 8;
      v2563 = v472;
      v473 = *(_QWORD **)&v2565[v471];
      if ( (unsigned int)v472 > 0x2F )
      {
        v2262 = (__m128i **)v2564;
        v476 = v2564 + 8;
        v2564 += 8;
        v475 = *v2262;
      }
      else
      {
        v474 = v471 + 16;
        v475 = *(__m128i **)&v2565[v472];
        if ( (unsigned int)v474 > 0x2F )
          v476 = v2564;
        else
          v476 = &v2565[v474];
      }
      return (char *)(unsigned __int8)sub_317E70(v473, v475, *(_DWORD *)v476 != 0);
    case 240LL:
      v469 = v2563 + 8;
      v470 = (unsigned __int64 *)&v2565[v469];
      if ( (unsigned int)v469 > 0x2F )
        v470 = (unsigned __int64 *)v2564;
      return (char *)sub_317040(*(unsigned __int64 ***)&v2565[v2563], *v470);
    case 241LL:
      v1991 = v2563 + 8;
      v1992 = (__int64 *)&v2565[v1991];
      if ( (unsigned int)v1991 > 0x2F )
        v1992 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_317F40(*(__int64 **)&v2565[v2563], *v1992);
    case 242LL:
      v1989 = v2563 + 8;
      v1990 = (__int64 *)&v2565[v1989];
      if ( (unsigned int)v1989 > 0x2F )
        v1990 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_3180C0(*(__int64 **)&v2565[v2563], *v1990, (__m128i *)v2563, v1989);
    case 243LL:
      v1248 = v2563 + 8;
      v1249 = &v2565[v1248];
      if ( (unsigned int)v1248 > 0x2F )
        v1249 = v2564;
      return (char *)(int)sub_316F80(*(__int64 **)&v2565[v2563], *(_QWORD **)v1249);
    case 244LL:
      v1246 = v2563 + 8;
      v1247 = (__int64 *)&v2565[v1246];
      if ( (unsigned int)v1246 > 0x2F )
        v1247 = (__int64 *)v2564;
      sub_64DF0(*(_QWORD *)&v2565[v2563], *v1247);
      return nullptr;
    case 245LL:
      return (char *)sub_1AE4B0(*(_QWORD *)&v2565[v2563]);
    case 246LL:
      v1698 = v2563;
      v1699 = v2563 + 8;
      v2563 = v1699;
      v1700 = *(__int64 **)&v2565[v1698];
      if ( (unsigned int)v1699 > 0x2F )
      {
        v2237 = (unsigned __int64 *)v2564;
        v1703 = (unsigned __int64 *)(v2564 + 8);
        v2564 += 8;
        v1702 = *v2237;
      }
      else
      {
        v1701 = v1698 + 16;
        v1702 = *(_QWORD *)&v2565[v1699];
        if ( (unsigned int)v1701 > 0x2F )
          v1703 = (unsigned __int64 *)v2564;
        else
          v1703 = (unsigned __int64 *)&v2565[v1701];
      }
      return (char *)(unsigned __int8)sub_122B20(v1700, v1702, *v1703);
    case 247LL:
      v662 = v2563 + 8;
      v663 = (__int64 **)&v2565[v662];
      if ( (unsigned int)v662 > 0x2F )
        v663 = (__int64 **)v2564;
      sub_1B5C90(*(_QWORD **)&v2565[v2563], *v663);
      return nullptr;
    case 248LL:
      return (char *)sub_1B5D00(*(_QWORD **)&v2565[v2563]);
    case 249LL:
      v1851 = v2563 + 8;
      v1852 = (__int64 *)&v2565[v1851];
      if ( (unsigned int)v1851 > 0x2F )
        v1852 = (__int64 *)v2564;
      return (char *)sub_122C30(*(_QWORD *)&v2565[v2563], *v1852);
    case 250LL:
      return (char *)(sub_339CA0() + 104);
    case 251LL:
      v1008 = *(_DWORD *)&v2565[v2563];
      return (char *)(v1008 >= *(_DWORD *)(sub_339CA0() + 68));
    case 252LL:
      v1006 = *(_DWORD *)&v2565[v2563];
      v1007 = sub_339CA0();
      return (char *)(int)sub_122AF0(v1007, v1006);
    case 253LL:
      v1503 = v2563 + 8;
      v1504 = *(_DWORD *)&v2565[v2563];
      v1505 = &v2565[v1503];
      if ( (unsigned int)v1503 > 0x2F )
        v1505 = v2564;
      v1506 = *(_DWORD *)v1505;
      v1507 = sub_339CA0();
      return (char *)(*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1507 + 176LL))(v1507, v1504, v1506);
    case 254LL:
      v1497 = v2563 + 8;
      v1498 = *(__int64 **)&v2565[v2563];
      if ( (unsigned int)v1497 > 0x2F )
      {
        v2205 = (int *)v2564;
        v2206 = (unsigned int *)(v2564 + 8);
        v2564 += 8;
        v1500 = *v2205;
      }
      else
      {
        v1499 = v2563 + 16;
        v1500 = *(_DWORD *)&v2565[v1497];
        v2563 = v1499;
        if ( (unsigned int)v1499 <= 0x2F )
        {
          v1501 = *(_DWORD *)&v2565[v1499];
          goto LABEL_1340;
        }
        v2206 = (unsigned int *)v2564;
      }
      v2564 = (char *)(v2206 + 2);
      v1501 = *v2206;
LABEL_1340:
      v1502 = (_DWORD *)sub_339CA0();
      return (char *)(int)sub_1338F0(v1502, v1498, v1500, v1501);
    case 255LL:
      v376 = *(_QWORD *)&v2565[v2563];
      v377 = sub_339CA0();
      sub_1516D0(v377, v376);
      return nullptr;
    case 256LL:
      v374 = *(_QWORD *)&v2565[v2563];
      v375 = sub_339CA0();
      return (char *)(unsigned __int8)sub_151770(v375, v374);
    case 257LL:
      v2136 = *(_QWORD *)&v2565[v2563];
      v2137 = sub_339CA0();
      sub_169120(v2137, v2136);
      return nullptr;
    case 258LL:
      v2134 = *(_QWORD *)&v2565[v2563];
      v2135 = sub_339CA0();
      return (char *)(unsigned __int8)sub_1691C0(v2135, v2134);
    case 259LL:
      v2180 = v2563;
      v2181 = v2563 + 8;
      v2563 = v2181;
      v2182 = *(__int64 **)&v2565[v2180];
      if ( (unsigned int)v2181 > 0x2F )
      {
        v2378 = (__int64 **)v2564;
        v2185 = v2564 + 8;
        v2564 += 8;
        v2184 = *v2378;
      }
      else
      {
        v2183 = v2180 + 16;
        v2184 = *(__int64 **)&v2565[v2181];
        if ( (unsigned int)v2183 > 0x2F )
          v2185 = v2564;
        else
          v2185 = &v2565[v2183];
      }
      sub_71390(v2182, v2184, *(_DWORD *)v2185 != 0);
      return nullptr;
    case 260LL:
      v1451 = v2563;
      v1452 = v2563 + 8;
      v1453 = *(__int64 **)&v2565[v2563];
      if ( (unsigned int)v1452 > 0x2F )
      {
        v2469 = v2564;
        v2527 = v2564 + 8;
        v2564 += 8;
        v1455 = *(_QWORD **)v2469;
      }
      else
      {
        v1454 = v2563 + 16;
        v1455 = *(_QWORD **)&v2565[v1452];
        v2563 = v1454;
        if ( (unsigned int)v1454 <= 0x2F )
        {
          v1456 = v1451 + 24;
          v1457 = *(__int64 **)&v2565[v1454];
          if ( (unsigned int)v1456 > 0x2F )
            v1458 = v2564;
          else
            v1458 = &v2565[v1456];
LABEL_1298:
          sub_71740(v1453, v1455, v1457, *(_DWORD *)v1458 != 0);
          return nullptr;
        }
        v2527 = v2564;
      }
      v2470 = (__int64 **)v2527;
      v1458 = v2527 + 8;
      v2564 = v1458;
      v1457 = *v2470;
      goto LABEL_1298;
    case 261LL:
      v1844 = v2563 + 8;
      v1845 = (__int64 *)&v2565[v1844];
      if ( (unsigned int)v1844 > 0x2F )
        v1845 = (__int64 *)v2564;
      return (char *)(int)sub_6D400(*(_QWORD *)&v2565[v2563], *v1845);
    case 262LL:
      v1842 = v2563 + 8;
      v1843 = (__int64 **)&v2565[v1842];
      if ( (unsigned int)v1842 > 0x2F )
        v1843 = (__int64 **)v2564;
      return (char *)(int)sub_6DBE0(*(__int64 **)&v2565[v2563], *v1843);
    case 263LL:
      v960 = v2563 + 8;
      v961 = (signed int *)&v2565[v960];
      if ( (unsigned int)v960 > 0x2F )
        v961 = (signed int *)v2564;
      return (char *)(int)sub_67A40(*(_QWORD *)&v2565[v2563], *v961);
    case 264LL:
      v958 = v2563 + 8;
      v959 = (int *)&v2565[v958];
      if ( (unsigned int)v958 > 0x2F )
        v959 = (int *)v2564;
      sub_673C0(*(_QWORD *)&v2565[v2563], *v959);
      return nullptr;
    case 265LL:
      v1999 = v2563 + 8;
      v2000 = (int *)&v2565[v1999];
      if ( (unsigned int)v1999 > 0x2F )
        v2000 = (int *)v2564;
      return (char *)(int)sub_65720(*(int **)&v2565[v2563], *v2000);
    case 266LL:
      v1993 = v2563;
      v1994 = v2563 + 8;
      v2563 = v1994;
      v1995 = *(_QWORD *)&v2565[v1993];
      if ( (unsigned int)v1994 > 0x2F )
      {
        v2197 = (int *)v2564;
        v1998 = (int *)(v2564 + 8);
        v2564 += 8;
        v1997 = *v2197;
      }
      else
      {
        v1996 = v1993 + 16;
        v1997 = *(_DWORD *)&v2565[v1994];
        if ( (unsigned int)v1996 > 0x2F )
          v1998 = (int *)v2564;
        else
          v1998 = (int *)&v2565[v1996];
      }
      return (char *)(unsigned __int8)sub_6D320(v1995, v1997, *v1998);
    case 267LL:
      v1238 = v2563 + 8;
      v1239 = (__int64 *)&v2565[v1238];
      if ( (unsigned int)v1238 > 0x2F )
        v1239 = (__int64 *)v2564;
      return (char *)(int)sub_330920(*(_QWORD *)&v2565[v2563], *v1239);
    case 268LL:
      v1234 = (__int64 **)&v2565[v2563];
      v2563 += 8;
      v1235 = *v1234;
      v1236 = *v1235;
      v1237 = *((int *)v1235 + 4);
      if ( *(_QWORD *)(v1236 + 440) >= v1237 )
        return (char *)(*(_QWORD *)(v1236 + 432) + 104 * v1237);
      if ( !under_debugger )
        sub_383060(0xC83Au, *(double *)a7.m128_u64);
      goto LABEL_2700;
    case 269LL:
      v1688 = v2563 + 8;
      v1689 = (__int64 *)&v2565[v1688];
      if ( (unsigned int)v1688 > 0x2F )
        v1689 = (__int64 *)v2564;
      return (char *)(int)sub_330950(*(_QWORD *)&v2565[v2563], *v1689);
    case 270LL:
      v1682 = v2563;
      v1683 = v2563 + 8;
      v2563 = v1683;
      v1684 = *(_QWORD *)&v2565[v1682];
      if ( (unsigned int)v1683 > 0x2F )
      {
        v2230 = (__m128i **)v2564;
        v1687 = v2564 + 8;
        v2564 += 8;
        v1686 = *v2230;
      }
      else
      {
        v1685 = v1682 + 16;
        v1686 = *(__m128i **)&v2565[v1683];
        if ( (unsigned int)v1685 > 0x2F )
          v1687 = v2564;
        else
          v1687 = &v2565[v1685];
      }
      return (char *)sub_1D0250(*(_QWORD **)v1684, v1686, *(_QWORD *)(v1684 + 8), *(_QWORD **)v1687, nullptr);
    case 271LL:
      v2172 = v2563 + 8;
      v2173 = (__int64 **)&v2565[v2172];
      if ( (unsigned int)v2172 > 0x2F )
        v2173 = (__int64 **)v2564;
      sub_11C210(*(_QWORD *)&v2565[v2563], *v2173);
      return nullptr;
    case 272LL:
      return (char *)sub_1AE6B0(*(_QWORD *)&v2565[v2563]);
    case 273LL:
      v2144 = v2563 + 8;
      v2145 = (unsigned __int8 **)&v2565[v2144];
      if ( (unsigned int)v2144 > 0x2F )
        v2145 = (unsigned __int8 **)v2564;
      sub_123A40(*(_QWORD *)&v2565[v2563], *v2145, v2563, v2144);
      return nullptr;
    case 274LL:
      v2045 = v2563 + 8;
      v2046 = (unsigned __int8 **)&v2565[v2045];
      if ( (unsigned int)v2045 > 0x2F )
        v2046 = (unsigned __int8 **)v2564;
      return (char *)sub_125180(*(_QWORD *)&v2565[v2563], *v2046);
    case 275LL:
      v1350 = v2563 + 8;
      v1351 = (char **)&v2565[v1350];
      if ( (unsigned int)v1350 > 0x2F )
        v1351 = (char **)v2564;
      sub_11CA10(*(char **)&v2565[v2563], *v1351);
      return nullptr;
    case 276LL:
      sub_11CDA0(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 277LL:
      v1769 = v2563;
      v1770 = v2563 + 8;
      v2563 = v1770;
      v1771 = *(_QWORD *)&v2565[v1769];
      if ( (unsigned int)v1770 > 0x2F )
      {
        v2241 = (char **)v2564;
        v1774 = (unsigned int *)(v2564 + 8);
        v2564 += 8;
        v1773 = *v2241;
      }
      else
      {
        v1772 = v1769 + 16;
        v1773 = *(char **)&v2565[v1770];
        if ( (unsigned int)v1772 > 0x2F )
          v1774 = (unsigned int *)v2564;
        else
          v1774 = (unsigned int *)&v2565[v1772];
      }
      sub_1B2660(v1771, v1773, *v1774);
      return nullptr;
    case 278LL:
      return (char *)sub_1B26E0(*(_QWORD *)&v2565[v2563]);
    case 279LL:
      v1775 = v2563;
      v1776 = v2563 + 8;
      v1777 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1776 > 0x2F )
      {
        v2466 = v2564;
        v2467 = v2564 + 8;
        v2564 += 8;
        v1779 = *(_QWORD **)v2466;
      }
      else
      {
        v1778 = v2563 + 16;
        v1779 = *(_QWORD **)&v2565[v1776];
        v2563 = v1778;
        if ( (unsigned int)v1778 <= 0x2F )
        {
          v1780 = v1775 + 24;
          v1781 = *(_QWORD **)&v2565[v1778];
          if ( (unsigned int)v1780 > 0x2F )
            v1782 = (unsigned __int64 *)v2564;
          else
            v1782 = (unsigned __int64 *)&v2565[v1780];
          return (char *)(unsigned __int8)sub_11D020(v1777, v1779, v1781, *v1782);
        }
        v2467 = v2564;
      }
      v2468 = v2467;
      v1782 = (unsigned __int64 *)(v2467 + 8);
      v2564 = (char *)v1782;
      v1781 = *(_QWORD **)v2468;
      return (char *)(unsigned __int8)sub_11D020(v1777, v1779, v1781, *v1782);
    case 280LL:
      v797 = v2563;
      v798 = v2563 + 8;
      v799 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v798 > 0x2F )
      {
        v2464 = v2564;
        v2526 = v2564 + 8;
        v2564 += 8;
        v801 = *(_QWORD **)v2464;
      }
      else
      {
        v800 = v2563 + 16;
        v801 = *(_QWORD **)&v2565[v798];
        v2563 = v800;
        if ( (unsigned int)v800 <= 0x2F )
        {
          v802 = v797 + 24;
          v803 = *(_QWORD *)&v2565[v800];
          if ( (unsigned int)v802 > 0x2F )
            v804 = (unsigned __int64 *)v2564;
          else
            v804 = (unsigned __int64 *)&v2565[v802];
          return (char *)(unsigned __int8)sub_11D4D0(v799, v801, v803, *v804);
        }
        v2526 = v2564;
      }
      v2465 = (__int64 *)v2526;
      v804 = (unsigned __int64 *)(v2526 + 8);
      v2564 = (char *)v804;
      v803 = *v2465;
      return (char *)(unsigned __int8)sub_11D4D0(v799, v801, v803, *v804);
    case 281LL:
      v1118 = v2563;
      v1119 = v2563 + 8;
      v1120 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1119 > 0x2F )
      {
        v2461 = (__int64 *)v2564;
        v2462 = v2564 + 8;
        v2564 += 8;
        v1122 = *v2461;
      }
      else
      {
        v1121 = v2563 + 16;
        v1122 = *(_QWORD *)&v2565[v1119];
        v2563 = v1121;
        if ( (unsigned int)v1121 <= 0x2F )
        {
          v1123 = v1118 + 24;
          v1124 = *(_QWORD *)&v2565[v1121];
          if ( (unsigned int)v1123 > 0x2F )
            v1125 = (int *)v2564;
          else
            v1125 = (int *)&v2565[v1123];
LABEL_984:
          sub_126420(v1120, v1122, v1124, *v1125);
          return nullptr;
        }
        v2462 = v2564;
      }
      v2463 = (__int64 *)v2462;
      v1125 = (int *)(v2462 + 8);
      v2564 = (char *)v1125;
      v1124 = *v2463;
      goto LABEL_984;
    case 282LL:
      v1109 = v2563;
      v1110 = v2563 + 8;
      v2563 = v1110;
      v1111 = *(_QWORD *)&v2565[v1109];
      if ( (unsigned int)v1110 > 0x2F )
      {
        v2302 = (__int64 *)v2564;
        v2547 = v2564 + 8;
        v2564 += 8;
        v1113 = *v2302;
      }
      else
      {
        v1112 = v1109 + 16;
        v1113 = *(_QWORD *)&v2565[v1110];
        v2563 = v1112;
        if ( (unsigned int)v1112 <= 0x2F )
        {
          v1114 = *(const char **)&v2565[v1112];
          v2563 = v1109 + 24;
          if ( v1109 + 24 <= 0x2F )
          {
            v1115 = v1109 + 32;
            v2563 = v1115;
            if ( (unsigned int)v1115 <= 0x2F )
            {
              v1116 = &v2565[v1115];
              v2563 = v1109 + 40;
              goto LABEL_979;
            }
            v1116 = v2564;
LABEL_2035:
            v2564 = v1116 + 8;
LABEL_979:
            v1117 = *(_DWORD **)v1116;
            *(_QWORD *)v2561 = 0;
            copy_tinfo_t();
            sub_11D150(v1111, v1113, v1114, (__int64 *)v2561, v1117);
            clear_tinfo_t();
            return nullptr;
          }
          v2304 = v2564;
LABEL_2034:
          v1116 = v2304 + 8;
          v2564 = v1116;
          goto LABEL_2035;
        }
        v2547 = v2564;
      }
      v2303 = (const char **)v2547;
      v2304 = v2547 + 8;
      v2564 = v2304;
      v1114 = *v2303;
      goto LABEL_2034;
    case 283LL:
      v1107 = v2563 + 8;
      v1108 = (unsigned __int8 **)&v2565[v1107];
      if ( (unsigned int)v1107 > 0x2F )
        v1108 = (unsigned __int8 **)v2564;
      sub_1262E0(*(_QWORD *)&v2565[v2563], *v1108);
      return nullptr;
    case 284LL:
      v1095 = v2563;
      v1096 = v2563 + 8;
      v2563 = v1096;
      v1097 = *(_QWORD *)&v2565[v1095];
      if ( (unsigned int)v1096 > 0x2F )
      {
        v2298 = (__int64 *)v2564;
        v2546 = v2564 + 8;
        v2564 += 8;
        v1099 = *v2298;
      }
      else
      {
        v1098 = v1095 + 16;
        v1099 = *(_QWORD *)&v2565[v1096];
        if ( (unsigned int)v1098 <= 0x2F )
        {
          v1100 = v1095 + 24;
          v1101 = *(_DWORD *)&v2565[v1098];
          v2563 = v1100;
          if ( (unsigned int)v1100 <= 0x2F )
          {
            v1102 = v1095 + 32;
            v1103 = *(_QWORD *)&v2565[v1100];
            if ( (unsigned int)v1102 > 0x2F )
              v1104 = (__int32 *)v2564;
            else
              v1104 = (__int32 *)&v2565[v1102];
LABEL_970:
            v1105 = *v1104;
            v1106 = sub_339CA0();
            sub_120A10(v1097, v1106, v1099, v1101, v1103, v1105);
            return nullptr;
          }
          v2300 = v2564;
LABEL_2032:
          v2301 = (__int64 *)v2300;
          v1104 = (__int32 *)(v2300 + 8);
          v2564 = (char *)v1104;
          v1103 = *v2301;
          goto LABEL_970;
        }
        v2546 = v2564;
      }
      v2299 = (int *)v2546;
      v2300 = v2546 + 8;
      v2564 = v2300;
      v1101 = *v2299;
      goto LABEL_2032;
    case 285LL:
      v1918 = v2563;
      v1919 = v2563 + 8;
      v2563 = v1919;
      v1920 = *(_QWORD *)&v2565[v1918];
      if ( (unsigned int)v1919 > 0x2F )
      {
        v2471 = v2564;
        v1923 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1922 = *(_BYTE **)v2471;
      }
      else
      {
        v1921 = v1918 + 16;
        v1922 = *(_BYTE **)&v2565[v1919];
        if ( (unsigned int)v1921 > 0x2F )
          v1923 = (__int64 *)v2564;
        else
          v1923 = (__int64 *)&v2565[v1921];
      }
      v1924 = *v1923;
      v1925 = sub_339CA0();
      return (char *)(unsigned __int8)sub_11D360(v1920, v1925, v1922, v1924);
    case 286LL:
      v1607 = v2563 + 8;
      v1608 = *(_QWORD *)&v2565[v2563];
      v1609 = &v2565[v1607];
      if ( (unsigned int)v1607 > 0x2F )
        v1609 = v2564;
      v1610 = *(_QWORD *)v1609;
      v1611 = sub_339CA0();
      *(_BYTE *)v1608 = 6;
      v1612 = 8 * *(_DWORD *)(v1611 + 84);
      v1613 = 1LL << (8 * *(_BYTE *)(v1611 + 84));
      if ( (unsigned __int64)v1612 >= 0x40 )
        v1613 = 0;
      *(_QWORD *)(v1608 + 8) = v1610 & (v1613 - 1);
      return nullptr;
    case 287LL:
      v455 = v2563 + 8;
      v456 = *(_QWORD *)&v2565[v2563];
      v457 = &v2565[v455];
      if ( (unsigned int)v455 > 0x2F )
        v457 = v2564;
      v458 = *(_QWORD *)v457;
      v459 = sub_339CA0();
      sub_11CDA0(v456);
      *(_BYTE *)v456 = 6;
      v460 = 1LL << (8 * *(_BYTE *)(v459 + 84));
      if ( (unsigned __int64)(8 * *(_DWORD *)(v459 + 84)) >= 0x40 )
        v460 = 0;
      *(_QWORD *)(v456 + 8) = v458 & (v460 - 1);
      return nullptr;
    case 288LL:
      v447 = v2563;
      v448 = v2563 + 8;
      v449 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v448 > 0x2F )
      {
        v2259 = v2564;
        v2260 = v2564 + 8;
        v2564 += 8;
        v451 = *(unsigned int *)v2259;
      }
      else
      {
        v450 = v2563 + 16;
        v451 = *(unsigned int *)&v2565[v448];
        v2563 = v450;
        if ( (unsigned int)v450 <= 0x2F )
        {
          v452 = v447 + 24;
          v453 = *(_DWORD *)&v2565[v450];
          if ( (unsigned int)v452 > 0x2F )
            v454 = (int *)v2564;
          else
            v454 = (int *)&v2565[v452];
LABEL_397:
          sub_1252A0(v449, v451, v453, *v454);
          return nullptr;
        }
        v2260 = v2564;
      }
      v2261 = (int *)v2260;
      v454 = (int *)(v2260 + 8);
      v2564 = (char *)v454;
      v453 = *v2261;
      goto LABEL_397;
    case 289LL:
      sub_11D4A0(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 290LL:
      v1390 = *(_DWORD *)&v2565[v2563];
      v1391 = sub_339CA0();
      return (char *)(unsigned __int8)sub_11CCD0(v1391, v1390);
    case 291LL:
      return (char *)(unsigned __int8)sub_11ED30(*(_QWORD *)&v2565[v2563]);
    case 292LL:
      v1388 = *(_QWORD *)&v2565[v2563];
      v1389 = sub_339CA0();
      return (char *)(unsigned __int8)sub_11FDE0(v1388, v1389);
    case 293LL:
      v1817 = v2563 + 8;
      v1818 = &v2565[v1817];
      if ( (unsigned int)v1817 > 0x2F )
        v1818 = v2564;
      return (char *)sub_30DAC0(*(_QWORD *)&v2565[v2563], *(unsigned int *)v1818);
    case 294LL:
      v1811 = v2563 + 8;
      v1812 = *(_QWORD *)&v2565[v2563];
      v1813 = &v2565[v1811];
      if ( (unsigned int)v1811 > 0x2F )
        v1813 = v2564;
      v1814 = *(_DWORD *)v1813;
      v1815 = sub_339CA0();
      return (char *)(unsigned __int8)sub_1278D0(v1812, v1815, v1814, v1816);
    case 295LL:
      v2174 = v2563;
      v2175 = v2563 + 8;
      v2563 = v2175;
      v2176 = *(unsigned __int8 **)&v2565[v2174];
      if ( (unsigned int)v2175 > 0x2F )
      {
        v2416 = (__int64 *)v2564;
        v2179 = (unsigned int *)(v2564 + 8);
        v2564 += 8;
        v2178 = *v2416;
      }
      else
      {
        v2177 = v2174 + 16;
        v2178 = *(_QWORD *)&v2565[v2175];
        if ( (unsigned int)v2177 > 0x2F )
          v2179 = (unsigned int *)v2564;
        else
          v2179 = (unsigned int *)&v2565[v2177];
      }
      return (char *)(unsigned __int8)sub_125B60(v2176, v2178, *v2179);
    case 296LL:
      v872 = v2563 + 8;
      v873 = (unsigned __int8 **)&v2565[v872];
      if ( (unsigned int)v872 > 0x2F )
        v873 = (unsigned __int8 **)v2564;
      return (char *)sub_11DA40(*(unsigned __int8 **)&v2565[v2563], *v873);
    case 297LL:
      v2156 = v2563;
      v2157 = v2563 + 8;
      v2158 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v2157 > 0x2F )
      {
        v2397 = (__int64 *)v2564;
        v2531 = v2564 + 8;
        v2564 += 8;
        v2160 = *v2397;
      }
      else
      {
        v2159 = v2563 + 16;
        v2160 = *(_QWORD *)&v2565[v2157];
        v2563 = v2159;
        if ( (unsigned int)v2159 <= 0x2F )
        {
          v2161 = v2156 + 24;
          v2162 = *(_QWORD *)&v2565[v2159];
          if ( (unsigned int)v2161 > 0x2F )
            v2163 = v2564;
          else
            v2163 = &v2565[v2161];
          return (char *)(int)sub_11E9B0(v2158, v2160, v2162, *(_DWORD *)v2163 != 0);
        }
        v2531 = v2564;
      }
      v2398 = (__int64 *)v2531;
      v2163 = v2531 + 8;
      v2564 = v2163;
      v2162 = *v2398;
      return (char *)(int)sub_11E9B0(v2158, v2160, v2162, *(_DWORD *)v2163 != 0);
    case 298LL:
      return (char *)(int)sub_11E540(*(_BYTE **)&v2565[v2563]);
    case 299LL:
      v1181 = v2563;
      v1182 = v2563 + 8;
      v2563 = v1182;
      v1183 = *(char **)&v2565[v1181];
      if ( (unsigned int)v1182 > 0x2F )
      {
        v2480 = v2564;
        v1186 = v2564 + 8;
        v2564 += 8;
        v1185 = *(_QWORD **)v2480;
      }
      else
      {
        v1184 = v1181 + 16;
        v1185 = *(_QWORD **)&v2565[v1182];
        if ( (unsigned int)v1184 > 0x2F )
          v1186 = v2564;
        else
          v1186 = &v2565[v1184];
      }
      return (char *)(unsigned __int8)sub_11FD80(v1183, v1185, *(_DWORD *)v1186 != 0);
    case 300LL:
      v1179 = v2563 + 8;
      v1180 = &v2565[v1179];
      if ( (unsigned int)v1179 > 0x2F )
        v1180 = v2564;
      return (char *)(unsigned __int8)sub_32F330(*(_QWORD *)&v2565[v2563], *(_QWORD **)v1180);
    case 301LL:
      v608 = v2563 + 8;
      v609 = *(_QWORD *)&v2565[v2563];
      v610 = (int *)&v2565[v608];
      if ( (unsigned int)v608 > 0x2F )
        v610 = (int *)v2564;
      v611 = *v610;
      v612 = sub_339CA0();
      return (char *)(unsigned __int8)sub_1272B0(v609, v612, v611, 0);
    case 302LL:
      v603 = v2563 + 8;
      v604 = *(_QWORD *)&v2565[v2563];
      v605 = (unsigned int *)&v2565[v603];
      if ( (unsigned int)v603 > 0x2F )
        v605 = (unsigned int *)v2564;
      v606 = *v605;
      v607 = sub_339CA0();
      return (char *)(unsigned __int8)sub_127850(v604, v607, v606, 0);
    case 303LL:
      v1641 = v2563 + 8;
      v1642 = *(unsigned __int8 **)&v2565[v2563];
      v1643 = &v2565[v1641];
      if ( (unsigned int)v1641 > 0x2F )
        v1643 = v2564;
      v1644 = *(_DWORD *)v1643;
      v1645 = sub_339CA0();
      return (char *)(unsigned __int8)sub_1274C0(v1642, v1645, v1644, 0);
    case 304LL:
      v598 = v2563 + 8;
      v599 = *(_QWORD *)&v2565[v2563];
      v600 = (int *)&v2565[v598];
      if ( (unsigned int)v598 > 0x2F )
        v600 = (int *)v2564;
      v601 = *v600;
      v602 = sub_339CA0();
      return (char *)(unsigned __int8)sub_127290(v599, v602, v601, 0);
    case 305LL:
      v1302 = v2563 + 8;
      v1303 = *(_QWORD *)&v2565[v2563];
      v1304 = (signed int *)&v2565[v1302];
      if ( (unsigned int)v1302 > 0x2F )
        v1304 = (signed int *)v2564;
      v1305 = *v1304;
      v1306 = sub_339CA0();
      return (char *)(unsigned __int8)sub_126F10(v1303, v1306, v1305, v1307);
    case 306LL:
      v1294 = v2563;
      v1295 = v2563 + 8;
      v2563 = v1295;
      v1296 = *(unsigned __int8 **)&v2565[v1294];
      if ( (unsigned int)v1295 > 0x2F )
      {
        v2222 = (int *)v2564;
        v1299 = (int *)(v2564 + 8);
        v2564 += 8;
        v1298 = *v2222;
      }
      else
      {
        v1297 = v1294 + 16;
        v1298 = *(_DWORD *)&v2565[v1295];
        if ( (unsigned int)v1297 > 0x2F )
          v1299 = (int *)v2564;
        else
          v1299 = (int *)&v2565[v1297];
      }
      v1300 = *v1299;
      v1301 = sub_339CA0();
      return (char *)(unsigned __int8)sub_12AB50(v1296, v1301, v1298, v1300);
    case 307LL:
      v2016 = v2563;
      v2017 = v2563 + 8;
      v2018 = *(_BYTE **)&v2565[v2563];
      if ( (unsigned int)v2017 > 0x2F )
      {
        v2477 = (__int64 *)v2564;
        v2478 = v2564 + 8;
        v2564 += 8;
        v2020 = *v2477;
      }
      else
      {
        v2019 = v2563 + 16;
        v2020 = *(_QWORD *)&v2565[v2017];
        v2563 = v2019;
        if ( (unsigned int)v2019 <= 0x2F )
        {
          v2021 = v2016 + 24;
          v2022 = *(_QWORD *)&v2565[v2019];
          if ( (unsigned int)v2021 > 0x2F )
            v2023 = (__int64 *)v2564;
          else
            v2023 = (__int64 *)&v2565[v2021];
LABEL_1827:
          v2024 = *v2023;
          v2025 = sub_339CA0();
          return (char *)(unsigned __int8)sub_159D40(v2018, v2025, v2020, v2022, v2024);
        }
        v2478 = v2564;
      }
      v2479 = (__int64 *)v2478;
      v2023 = (__int64 *)(v2478 + 8);
      v2564 = (char *)v2023;
      v2022 = *v2479;
      goto LABEL_1827;
    case 308LL:
      v1284 = v2563;
      v1285 = v2563 + 8;
      v1286 = *(char **)&v2565[v2563];
      if ( (unsigned int)v1285 > 0x2F )
      {
        v2226 = v2564;
        v2552 = v2564 + 8;
        v2564 += 8;
        v1288 = *(_DWORD *)v2226;
      }
      else
      {
        v1287 = v2563 + 16;
        v1288 = *(_DWORD *)&v2565[v1285];
        v2563 = v1287;
        if ( (unsigned int)v1287 <= 0x2F )
        {
          v1289 = v1284 + 24;
          v1290 = *(_QWORD *)&v2565[v1287];
          if ( (unsigned int)v1289 > 0x2F )
            v1291 = (int *)v2564;
          else
            v1291 = (int *)&v2565[v1289];
LABEL_1152:
          v1292 = *v1291;
          v1293 = sub_339CA0();
          sub_1207E0(v1286, v1293, v1288, v1290, v1292);
          return nullptr;
        }
        v2552 = v2564;
      }
      v2227 = (__int64 *)v2552;
      v1291 = (int *)(v2552 + 8);
      v2564 = (char *)v1291;
      v1290 = *v2227;
      goto LABEL_1152;
    case 309LL:
      v1716 = v2563;
      v1717 = v2563 + 8;
      v2563 = v1717;
      v1718 = *(_QWORD *)&v2565[v1716];
      if ( (unsigned int)v1717 > 0x2F )
      {
        v2198 = (__int64 **)v2564;
        v1721 = (unsigned int *)(v2564 + 8);
        v2564 += 8;
        v1720 = *v2198;
      }
      else
      {
        v1719 = v1716 + 16;
        v1720 = *(__int64 **)&v2565[v1717];
        if ( (unsigned int)v1719 > 0x2F )
          v1721 = (unsigned int *)v2564;
        else
          v1721 = (unsigned int *)&v2565[v1719];
      }
      sub_1B27D0(v1718, v1720, *v1721);
      return nullptr;
    case 310LL:
      return (char *)sub_1B28E0(*(_QWORD *)&v2565[v2563]);
    case 311LL:
      v738 = v2563 + 8;
      v739 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v738 > 0x2F )
      {
        v2475 = (int *)v2564;
        v2476 = (int *)(v2564 + 8);
        v2564 += 8;
        v741 = *v2475;
      }
      else
      {
        v740 = v2563 + 16;
        v741 = *(_DWORD *)&v2565[v738];
        v2563 = v740;
        if ( (unsigned int)v740 <= 0x2F )
        {
          v742 = *(_DWORD *)&v2565[v740];
          goto LABEL_621;
        }
        v2476 = (int *)v2564;
      }
      v2564 = (char *)(v2476 + 2);
      v742 = *v2476;
LABEL_621:
      sub_32F0D0(v739, v741, v742);
      return nullptr;
    case 312LL:
      v736 = v2563 + 8;
      v737 = (__int64 *)&v2565[v736];
      if ( (unsigned int)v736 > 0x2F )
        v737 = (__int64 *)v2564;
      return (char *)(int)sub_32ED90(*(_QWORD *)&v2565[v2563], *v737);
    case 313LL:
      return (char *)(unsigned __int8)sub_335200(*(_QWORD *)&v2565[v2563]);
    case 314LL:
      v1888 = v2563;
      v1889 = v2563 + 8;
      v2563 = v1889;
      if ( (unsigned int)v1889 > 0x2F )
      {
        v1890 = (__int64 *)v2564;
        v2564 += 8;
      }
      else
      {
        v1890 = (__int64 *)&v2565[v1889];
        v2563 = v1888 + 16;
      }
      sub_336290(v2561, *v1890);
      copy_tinfo_t();
      clear_tinfo_t();
      return nullptr;
    case 315LL:
      v1037 = v2563;
      v1038 = v2563 + 8;
      v1039 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1038 > 0x2F )
      {
        v2472 = (__int64 **)v2564;
        v2473 = v2564 + 8;
        v2564 += 8;
        v1041 = *v2472;
      }
      else
      {
        v1040 = v2563 + 16;
        v1041 = *(__int64 **)&v2565[v1038];
        v2563 = v1040;
        if ( (unsigned int)v1040 <= 0x2F )
        {
          v1042 = v1037 + 24;
          v1043 = *(_DWORD *)&v2565[v1040];
          if ( (unsigned int)v1042 > 0x2F )
            v1044 = (unsigned int *)v2564;
          else
            v1044 = (unsigned int *)&v2565[v1042];
LABEL_907:
          sub_1B31C0(v1039, v1041, v1043, *v1044);
          return nullptr;
        }
        v2473 = v2564;
      }
      v2474 = (int *)v2473;
      v1044 = (unsigned int *)(v2473 + 8);
      v2564 = (char *)v1044;
      v1043 = *v2474;
      goto LABEL_907;
    case 316LL:
      return (char *)sub_1B3240(*(_QWORD *)&v2565[v2563]);
    case 317LL:
      v1564 = v2563 + 8;
      v1565 = (__int64 **)&v2565[v1564];
      if ( (unsigned int)v1564 > 0x2F )
        v1565 = (__int64 **)v2564;
      return (char *)(int)sub_11D600(*(__int64 **)&v2565[v2563], *v1565);
    case 318LL:
      v1562 = v2563 + 8;
      v1563 = (__int64 **)&v2565[v1562];
      if ( (unsigned int)v1562 > 0x2F )
        v1563 = (__int64 **)v2564;
      sub_1B0CF0(*(_QWORD **)&v2565[v2563], *v1563);
      return nullptr;
    case 319LL:
      return (char *)sub_1B3340(*(_QWORD **)&v2565[v2563]);
    case 320LL:
      v389 = v2563 + 8;
      v390 = (__int64 **)&v2565[v389];
      if ( (unsigned int)v389 > 0x2F )
        v390 = (__int64 **)v2564;
      return (char *)(unsigned __int8)sub_32F920(*(__int64 **)&v2565[v2563], *v390);
    case 321LL:
      v1437 = v2563;
      v1438 = v2563 + 8;
      v2563 = v1438;
      v1439 = *(unsigned __int64 **)&v2565[v1437];
      if ( (unsigned int)v1438 > 0x2F )
      {
        v2511 = (__int64 *)v2564;
        v1442 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1441 = *v2511;
      }
      else
      {
        v1440 = v1437 + 16;
        v1441 = *(_QWORD *)&v2565[v1438];
        if ( (unsigned int)v1440 > 0x2F )
          v1442 = (__int64 *)v2564;
        else
          v1442 = (__int64 *)&v2565[v1440];
      }
      *v1439 = sub_32F990(v1441, *v1442);
      return nullptr;
    case 322LL:
      v1435 = v2563 + 8;
      v1436 = (__int64 **)&v2565[v1435];
      if ( (unsigned int)v1435 > 0x2F )
        v1436 = (__int64 **)v2564;
      sub_1B5DD0(*(_QWORD *)&v2565[v2563], *v1436);
      return nullptr;
    case 323LL:
      return (char *)sub_1B5EB0(*(_QWORD *)&v2565[v2563]);
    case 324LL:
      v1433 = v2563 + 8;
      v1434 = (__int64 **)&v2565[v1433];
      if ( (unsigned int)v1433 > 0x2F )
        v1434 = (__int64 **)v2564;
      sub_106780(*(_QWORD *)&v2565[v2563], *v1434);
      return nullptr;
    case 325LL:
      return (char *)sub_1AE5B0(*(_QWORD *)&v2565[v2563]);
    case 326LL:
      v896 = v2563;
      v897 = v2563 + 8;
      v2563 = v897;
      v898 = *(_QWORD *)&v2565[v896];
      if ( (unsigned int)v897 > 0x2F )
      {
        v2282 = (__int64 *)v2564;
        v901 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v900 = *v2282;
      }
      else
      {
        v899 = v896 + 16;
        v900 = *(_QWORD *)&v2565[v897];
        if ( (unsigned int)v899 > 0x2F )
          v901 = (__int64 *)v2564;
        else
          v901 = (__int64 *)&v2565[v899];
      }
      sub_103D60(v898, v900, *v901);
      return nullptr;
    case 327LL:
      v1830 = v2563 + 8;
      v1831 = *(_QWORD *)&v2565[v2563];
      v1832 = (__int64 *)&v2565[v1830];
      if ( (unsigned int)v1830 > 0x2F )
        v1832 = (__int64 *)v2564;
      v1833 = *v1832;
      v1834 = sub_339CA0();
      sub_103D80(v1831, v1834, v1833);
      return nullptr;
    case 328LL:
      v894 = v2563 + 8;
      v895 = (__int64 *)&v2565[v894];
      if ( (unsigned int)v894 > 0x2F )
        v895 = (__int64 *)v2564;
      return (char *)sub_104DF0(*(unsigned __int64 **)&v2565[v2563], *v895);
    case 329LL:
      v1984 = v2563 + 8;
      v1985 = (__int64 **)&v2565[v1984];
      if ( (unsigned int)v1984 > 0x2F )
        v1985 = (__int64 **)v2564;
      sub_106AE0(*(_QWORD **)&v2565[v2563], *v1985);
      return nullptr;
    case 330LL:
      return (char *)sub_1AE630(*(_QWORD **)&v2565[v2563]);
    case 331LL:
      v1198 = v2563;
      v1199 = v2563 + 8;
      v2563 = v1199;
      v1200 = *(_QWORD **)&v2565[v1198];
      if ( (unsigned int)v1199 > 0x2F )
      {
        v2191 = v2564;
        v1203 = v2564 + 8;
        v2564 += 8;
        v1202 = *(_QWORD **)v2191;
      }
      else
      {
        v1201 = v1198 + 16;
        v1202 = *(_QWORD **)&v2565[v1199];
        if ( (unsigned int)v1201 > 0x2F )
          v1203 = v2564;
        else
          v1203 = &v2565[v1201];
      }
      v1204 = *(_DWORD *)v1203;
      v1205 = sub_339CA0();
      return (char *)(int)sub_104E40(v1200, v1205, v1202, v1204);
    case 332LL:
      sub_104E10(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 333LL:
      v1668 = v2563 + 8;
      v1669 = (__int64 *)&v2565[v1668];
      if ( (unsigned int)v1668 > 0x2F )
        v1669 = (__int64 *)v2564;
      sub_330970(*(_QWORD *)&v2565[v2563], *v1669);
      return nullptr;
    case 334LL:
      v1666 = v2563 + 8;
      v1667 = (__int64 *)&v2565[v1666];
      if ( (unsigned int)v1666 > 0x2F )
        v1667 = (__int64 *)v2564;
      sub_1253A0(*(_QWORD *)&v2565[v2563], *v1667);
      return nullptr;
    case 335LL:
      v651 = *(_QWORD *)&v2565[v2563];
      v652 = sub_339CA0();
      sub_11D5D0(v651, v652);
      return nullptr;
    case 336LL:
      v649 = v2563 + 8;
      v650 = (__int64 *)&v2565[v649];
      if ( (unsigned int)v649 > 0x2F )
        v650 = (__int64 *)v2564;
      sub_11D890(*(_QWORD *)&v2565[v2563], *v650);
      return nullptr;
    case 337LL:
      v2032 = v2563;
      v2033 = v2563 + 8;
      v2563 = v2033;
      v2034 = *(int **)&v2565[v2032];
      if ( (unsigned int)v2033 > 0x2F )
      {
        v2505 = (__int64 **)v2564;
        v2037 = (unsigned int *)(v2564 + 8);
        v2564 += 8;
        v2036 = *v2505;
      }
      else
      {
        v2035 = v2032 + 16;
        v2036 = *(__int64 **)&v2565[v2033];
        if ( (unsigned int)v2035 > 0x2F )
          v2037 = (unsigned int *)v2564;
        else
          v2037 = (unsigned int *)&v2565[v2035];
      }
      sub_1B59B0(v2034, v2036, *v2037);
      return nullptr;
    case 338LL:
      return (char *)sub_1B5B40(*(int **)&v2565[v2563]);
    case 339LL:
      v1344 = v2563 + 8;
      v1345 = (__int64 *)&v2565[v1344];
      if ( (unsigned int)v1344 > 0x2F )
        v1345 = (__int64 *)v2564;
      sub_122290(*(_QWORD *)&v2565[v2563], *v1345);
      return nullptr;
    case 340LL:
      v1330 = v2563;
      v1331 = v2563 + 8;
      v1332 = *(unsigned int **)&v2565[v2563];
      if ( (unsigned int)v1331 > 0x2F )
      {
        v2215 = (__int64 *)v2564;
        v2550 = v2564 + 8;
        v2564 += 8;
        v1334 = *v2215;
      }
      else
      {
        v1333 = v2563 + 16;
        v1334 = *(_QWORD *)&v2565[v1331];
        v2563 = v1333;
        if ( (unsigned int)v1333 <= 0x2F )
        {
          v1335 = v1330 + 24;
          v1336 = *(_QWORD *)&v2565[v1333];
          if ( (unsigned int)v1335 <= 0x2F )
          {
            v1337 = v1330 + 32;
            v1338 = *(int ***)&v2565[v1335];
            v2563 = v1337;
            if ( (unsigned int)v1337 <= 0x2F )
            {
              v1339 = v1330 + 40;
              v1340 = *(__m128 ***)&v2565[v1337];
              if ( (unsigned int)v1339 > 0x2F )
                v1341 = (unsigned int *)v2564;
              else
                v1341 = (unsigned int *)&v2565[v1339];
LABEL_1186:
              v1342 = *v1341;
              v1343 = (unsigned __int64 *)sub_339CA0();
              return (char *)(int)sub_15BC70(v1332, v1343, v1334, v1336, v1338, v1340, (__m128i)a7, v1342);
            }
            v2219 = v2564;
LABEL_1991:
            v2220 = (__m128 ***)v2219;
            v1341 = (unsigned int *)(v2219 + 8);
            v2564 = (char *)v1341;
            v1340 = *v2220;
            goto LABEL_1186;
          }
          v2217 = v2564;
LABEL_1990:
          v2218 = (int ***)v2217;
          v2219 = v2217 + 8;
          v2564 = v2219;
          v1338 = *v2218;
          goto LABEL_1991;
        }
        v2550 = v2564;
      }
      v2216 = (__int64 *)v2550;
      v2217 = v2550 + 8;
      v2564 = v2217;
      v1336 = *v2216;
      goto LABEL_1990;
    case 341LL:
      v781 = v2563 + 8;
      v782 = (__int64 *)&v2565[v781];
      if ( (unsigned int)v781 > 0x2F )
        v782 = (__int64 *)v2564;
      return (char *)(int)sub_11E900(*(_BYTE **)&v2565[v2563], *v782);
    case 342LL:
      v779 = v2563 + 8;
      v780 = &v2565[v779];
      if ( (unsigned int)v779 > 0x2F )
        v780 = v2564;
      return (char *)(int)sub_11F760(*(_BYTE **)&v2565[v2563], *(_QWORD **)v780);
    case 343LL:
      sub_11D5A0(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 344LL:
      v771 = v2563;
      v772 = v2563 + 8;
      v2563 = v772;
      v773 = *(unsigned __int8 **)&v2565[v771];
      if ( (unsigned int)v772 > 0x2F )
      {
        v2247 = (unsigned int **)v2564;
        v776 = (unsigned int *)(v2564 + 8);
        v2564 += 8;
        v775 = *v2247;
      }
      else
      {
        v774 = v771 + 16;
        v775 = *(unsigned int **)&v2565[v772];
        if ( (unsigned int)v774 > 0x2F )
          v776 = (unsigned int *)v2564;
        else
          v776 = (unsigned int *)&v2565[v774];
      }
      v777 = *v776;
      v778 = sub_339CA0();
      return (char *)(unsigned __int8)sub_125B90(v773, v778, v775, v777);
    case 345LL:
      v1910 = v2563 + 8;
      v1911 = (__int64 *)&v2565[v1910];
      if ( (unsigned int)v1910 > 0x2F )
        v1911 = (__int64 *)v2564;
      return (char *)(int)sub_11D9A0(*(_QWORD *)&v2565[v2563], *v1911);
    case 346LL:
      v1905 = v2563 + 8;
      v1906 = *(int **)&v2565[v2563];
      v1907 = &v2565[v1905];
      if ( (unsigned int)v1905 > 0x2F )
        v1907 = v2564;
      v1908 = *(_DWORD *)v1907;
      v1909 = sub_339CA0();
      return (char *)(unsigned __int8)sub_11C750(v1906, v1909, v1908);
    case 347LL:
      v1071 = v2563 + 8;
      v1072 = (const char **)&v2565[v1071];
      if ( (unsigned int)v1071 > 0x2F )
        v1072 = (const char **)v2564;
      return (char *)(unsigned __int8)sub_120560(*(_QWORD *)&v2565[v2563], *v1072);
    case 348LL:
      v1069 = v2563 + 8;
      v1070 = &v2565[v1069];
      if ( (unsigned int)v1069 > 0x2F )
        v1070 = v2564;
      return sub_120380(*(_BYTE **)&v2565[v2563], *(_DWORD *)v1070 != 0);
    case 349LL:
      v1582 = v2563 + 8;
      v1583 = *(_BYTE **)&v2565[v2563];
      v1584 = &v2565[v1582];
      if ( (unsigned int)v1582 > 0x2F )
        v1584 = v2564;
      v1585 = *(_DWORD *)v1584 != 0;
      v1586 = sub_339CA0();
      return (char *)(unsigned __int8)sub_1205A0(v1583, v1586, v1585, v1587, v1588, v1589);
    case 350LL:
      v1580 = v2563 + 8;
      v1581 = (int *)&v2565[v1580];
      if ( (unsigned int)v1580 > 0x2F )
        v1581 = (int *)v2564;
      return sub_1202F0(*(_BYTE **)&v2565[v2563], *v1581);
    case 351LL:
      v401 = v2563;
      v402 = v2563 + 8;
      v2563 = v402;
      v403 = *(_QWORD *)&v2565[v401];
      if ( (unsigned int)v402 > 0x2F )
      {
        v2503 = v2564;
        v406 = (int *)(v2564 + 8);
        v2564 += 8;
        v405 = *(_QWORD **)v2503;
      }
      else
      {
        v404 = v401 + 16;
        v405 = *(_QWORD **)&v2565[v402];
        if ( (unsigned int)v404 > 0x2F )
          v406 = (int *)v2564;
        else
          v406 = (int *)&v2565[v404];
      }
      return (char *)sub_11C8E0(v403, v405, *v406);
    case 352LL:
      v399 = v2563 + 8;
      v400 = &v2565[v399];
      if ( (unsigned int)v399 > 0x2F )
        v400 = v2564;
      return (char *)sub_11C8A0(*(_QWORD *)&v2565[v2563], *(_QWORD **)v400);
    case 353LL:
      return (char *)(unsigned __int8)sub_11E8C0(*(unsigned int **)&v2565[v2563]);
    case 354LL:
      v2060 = v2563;
      v2061 = v2563 + 8;
      v2563 = v2061;
      v2062 = *(_QWORD *)&v2565[v2060];
      if ( (unsigned int)v2061 > 0x2F )
      {
        v2188 = (__int64 *)v2564;
        v2065 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v2064 = *v2188;
      }
      else
      {
        v2063 = v2060 + 16;
        v2064 = *(_QWORD *)&v2565[v2061];
        if ( (unsigned int)v2063 > 0x2F )
          v2065 = (__int64 *)v2564;
        else
          v2065 = (__int64 *)&v2565[v2063];
      }
      return (char *)sub_122240(v2062, v2064, *v2065);
    case 355LL:
      return (char *)(unsigned __int8)sub_11EC90(*(_BYTE **)&v2565[v2563]);
    case 356LL:
      v1365 = v2563 + 8;
      v1366 = (__int64 *)&v2565[v1365];
      if ( (unsigned int)v1365 > 0x2F )
        v1366 = (__int64 *)v2564;
      return (char *)(int)sub_91020(*(unsigned __int8 **)&v2565[v2563], *v1366);
    case 357LL:
      v1790 = v2563;
      v1791 = v2563 + 8;
      v1792 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1791 > 0x2F )
      {
        v2192 = (__int64 *)v2564;
        v2549 = v2564 + 8;
        v2564 += 8;
        v1794 = *v2192;
      }
      else
      {
        v1793 = v2563 + 16;
        v1794 = *(_QWORD *)&v2565[v1791];
        v2563 = v1793;
        if ( (unsigned int)v1793 <= 0x2F )
        {
          v1795 = v1790 + 24;
          v1796 = *(_QWORD *)&v2565[v1793];
          if ( (unsigned int)v1795 > 0x2F )
            v1797 = (int *)v2564;
          else
            v1797 = (int *)&v2565[v1795];
          return (char *)(unsigned __int8)sub_884C0(v1792, v1794, v1796, *v1797);
        }
        v2549 = v2564;
      }
      v2193 = (__int64 *)v2549;
      v1797 = (int *)(v2549 + 8);
      v2564 = (char *)v1797;
      v1796 = *v2193;
      return (char *)(unsigned __int8)sub_884C0(v1792, v1794, v1796, *v1797);
    case 358LL:
      return (char *)sub_1229A0(*(_QWORD *)&v2565[v2563]);
    case 359LL:
      return (char *)sub_1229D0(*(_QWORD *)&v2565[v2563]);
    case 360LL:
      sub_330CE0(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 361LL:
      v1933 = v2563 + 8;
      v1934 = &v2565[v1933];
      if ( (unsigned int)v1933 > 0x2F )
        v1934 = v2564;
      sub_1B5930(*(_QWORD *)&v2565[v2563], *(void (****)(_QWORD, _QWORD, const char *, ...))v1934);
      return nullptr;
    case 362LL:
      sub_1B81C0(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 363LL:
      v1151 = v2563;
      v1152 = v2563 + 8;
      v2563 = v1152;
      v1153 = *(_QWORD *)&v2565[v1151];
      if ( (unsigned int)v1152 > 0x2F )
      {
        v2496 = (const char **)v2564;
        v1156 = v2564 + 8;
        v2564 += 8;
        v1155 = *v2496;
      }
      else
      {
        v1154 = v1151 + 16;
        v1155 = *(const char **)&v2565[v1152];
        if ( (unsigned int)v1154 > 0x2F )
          v1156 = v2564;
        else
          v1156 = &v2565[v1154];
      }
      v1157 = *(const __m128i **)v1156;
      v2566 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1156);
      v2567 = v1157[1].m128i_i64[0];
      sub_1B7C20(v1153, v1155);
      return nullptr;
    case 364LL:
      v1145 = v2563;
      v1146 = v2563 + 8;
      v2563 = v1146;
      v1147 = *(_QWORD *)&v2565[v1145];
      if ( (unsigned int)v1146 > 0x2F )
      {
        v2228 = v2564;
        v1150 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1149 = *(_QWORD **)v2228;
      }
      else
      {
        v1148 = v1145 + 16;
        v1149 = *(_QWORD **)&v2565[v1146];
        if ( (unsigned int)v1148 > 0x2F )
          v1150 = (__int64 *)v2564;
        else
          v1150 = (__int64 *)&v2565[v1148];
      }
      return (char *)sub_A3160(v1147, v1149, *v1150);
    case 365LL:
      v1629 = v2563 + 8;
      v1630 = (__int64 *)&v2565[v1629];
      if ( (unsigned int)v1629 > 0x2F )
        v1630 = (__int64 *)v2564;
      return (char *)sub_A33C0(*(_QWORD *)&v2565[v2563], *v1630);
    case 366LL:
      v1627 = v2563 + 8;
      v1628 = (__int64 *)&v2565[v1627];
      if ( (unsigned int)v1627 > 0x2F )
        v1628 = (__int64 *)v2564;
      return (char *)(int)sub_11F830(*(const __m128i **)&v2565[v2563], *v1628);
    case 367LL:
      v2142 = v2563 + 8;
      v2143 = (__int64 *)&v2565[v2142];
      if ( (unsigned int)v2142 > 0x2F )
        v2143 = (__int64 *)v2564;
      return (char *)(int)sub_11F5B0(*(const __m128i **)&v2565[v2563], *v2143);
    case 368LL:
      v480 = v2563;
      v481 = v2563 + 8;
      v2563 = v481;
      v482 = *(_QWORD **)&v2565[v480];
      if ( (unsigned int)v481 > 0x2F )
      {
        v2491 = (__int64 **)v2564;
        v2492 = v2564 + 8;
        v2564 += 8;
        v484 = *v2491;
      }
      else
      {
        v483 = v480 + 16;
        v484 = *(__int64 **)&v2565[v481];
        if ( (unsigned int)v483 <= 0x2F )
        {
          v485 = v480 + 24;
          v486 = *(_QWORD *)&v2565[v483];
          v2563 = v485;
          if ( (unsigned int)v485 <= 0x2F )
          {
            v487 = v480 + 32;
            v488 = *(_QWORD *)&v2565[v485];
            if ( (unsigned int)v487 > 0x2F )
              v489 = (__int64 *)v2564;
            else
              v489 = (__int64 *)&v2565[v487];
            return (char *)(int)sub_129C50(v482, v484, v486, v488, *v489);
          }
          v2494 = (__int64 *)v2564;
LABEL_2116:
          v2495 = v2494;
          v489 = v2494 + 1;
          v2564 = (char *)v489;
          v488 = *v2495;
          return (char *)(int)sub_129C50(v482, v484, v486, v488, *v489);
        }
        v2492 = v2564;
      }
      v2493 = (__int64 *)v2492;
      v2494 = (__int64 *)(v2492 + 8);
      v2564 = (char *)v2494;
      v486 = *v2493;
      goto LABEL_2116;
    case 369LL:
      v2008 = v2563;
      v2009 = v2563 + 8;
      v2563 = v2009;
      v2010 = *(_QWORD *)&v2565[v2008];
      if ( (unsigned int)v2009 > 0x2F )
      {
        v2502 = v2564;
        v2013 = v2564 + 8;
        v2564 += 8;
        v2012 = *(_QWORD *)v2502;
      }
      else
      {
        v2011 = v2008 + 16;
        v2012 = *(_QWORD *)&v2565[v2009];
        if ( (unsigned int)v2011 > 0x2F )
          v2013 = v2564;
        else
          v2013 = &v2565[v2011];
      }
      return (char *)(int)sub_167810(v2010, v2012, *(unsigned int *)v2013);
    case 370LL:
      return (char *)(int)sub_B57E0(*(_QWORD *)&v2565[v2563], (__int64)a2, a3, a4, a5, (int)a6);
    case 371LL:
      v1250 = v2563 + 8;
      v1251 = &v2565[v1250];
      if ( (unsigned int)v1250 > 0x2F )
        v1251 = v2564;
      return (char *)(int)sub_A7590(
                            *(_QWORD *)&v2565[v2563],
                            *(_DWORD *)v1251 != 0,
                            *(unsigned int *)v1251,
                            v1250,
                            a5,
                            (int)a6);
    case 372LL:
      return (char *)(int)sub_A8320(*(_QWORD *)&v2565[v2563]);
    case 373LL:
      v2146 = v2563;
      v2147 = v2563 + 8;
      v2563 = v2147;
      *(_QWORD *)&v2148 = *(_QWORD *)&v2565[v2146];
      if ( (unsigned int)v2147 > 0x2F )
      {
        v2404 = v2564;
        v2533 = v2564 + 8;
        v2564 += 8;
        v2150 = *(_QWORD *)v2404;
      }
      else
      {
        v2149 = v2146 + 16;
        v2150 = *(_QWORD *)&v2565[v2147];
        if ( (unsigned int)v2149 <= 0x2F )
        {
          v2151 = v2146 + 24;
          *((_QWORD *)&v2148 + 1) = *(_QWORD *)&v2565[v2149];
          v2563 = v2151;
          if ( (unsigned int)v2151 <= 0x2F )
          {
            v2152 = v2146 + 32;
            v2153 = *(unsigned int *)&v2565[v2151];
            if ( (unsigned int)v2152 > 0x2F )
              v2154 = (unsigned int **)v2564;
            else
              v2154 = (unsigned int **)&v2565[v2152];
LABEL_1955:
            v2155 = *((_QWORD *)&v2148 + 1);
            *((_QWORD *)&v2148 + 1) = v2150;
            sub_123EA0(v2148, v2155, v2153, **v2154);
            return nullptr;
          }
          v2406 = v2564;
LABEL_2084:
          v2407 = v2406;
          v2154 = (unsigned int **)(v2406 + 8);
          v2564 = (char *)v2154;
          v2153 = *(unsigned int *)v2407;
          goto LABEL_1955;
        }
        v2533 = v2564;
      }
      v2405 = v2533;
      v2406 = v2533 + 8;
      v2564 = v2406;
      *((_QWORD *)&v2148 + 1) = *(_QWORD *)v2405;
      goto LABEL_2084;
    case 374LL:
      v1704 = v2563;
      v1705 = v2563 + 8;
      v1706 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1705 > 0x2F )
      {
        v2488 = (__int64 *)v2564;
        v2489 = v2564 + 8;
        v2564 += 8;
        v1708 = *v2488;
      }
      else
      {
        v1707 = v2563 + 16;
        v1708 = *(_QWORD *)&v2565[v1705];
        v2563 = v1707;
        if ( (unsigned int)v1707 <= 0x2F )
        {
          v1709 = v1704 + 24;
          v1710 = *(_QWORD *)&v2565[v1707];
          if ( (unsigned int)v1709 > 0x2F )
            v1711 = (unsigned int *)v2564;
          else
            v1711 = (unsigned int *)&v2565[v1709];
LABEL_1535:
          sub_127FE0(
            v1706,
            v1708,
            v1710,
            *v1711,
            v1710,
            (int)a6,
            v2556.m128i_i32[0],
            v2556.m128i_i32[2],
            v2557.m128i_i32[0],
            v2557.m128i_i32[2],
            v2558.m128i_i64[0]);
          return nullptr;
        }
        v2489 = v2564;
      }
      v2490 = (__int64 *)v2489;
      v1711 = (unsigned int *)(v2489 + 8);
      v2564 = (char *)v1711;
      v1710 = *v2490;
      goto LABEL_1535;
    case 375LL:
      v664 = v2563;
      v665 = v2563 + 8;
      v2563 = v665;
      v666 = *(__int64 **)&v2565[v664];
      if ( (unsigned int)v665 > 0x2F )
      {
        v2248 = (__int64 *)v2564;
        v2537 = v2564 + 8;
        v2564 += 8;
        v668 = *v2248;
      }
      else
      {
        v667 = v664 + 16;
        v668 = *(_QWORD *)&v2565[v665];
        v2563 = v667;
        if ( (unsigned int)v667 <= 0x2F )
        {
          v669 = v664 + 24;
          v670 = *(_QWORD *)&v2565[v667];
          v2563 = v669;
          if ( (unsigned int)v669 <= 0x2F )
          {
            v671 = (unsigned int *)&v2565[v669];
            v2563 = v664 + 32;
            goto LABEL_562;
          }
          v671 = (unsigned int *)v2564;
LABEL_2005:
          v2564 = (char *)(v671 + 2);
LABEL_562:
          sub_124680((__int64)v2561, v668, v670, *v671);
          sub_648D0(v666, (__int64 *)v2561);
          v672 = *(_QWORD *)&v2561[16];
          v673 = _mm_loadu_si128((const __m128i *)&v2561[24]);
          memset(&v2561[16], 0, 24);
          v674 = v666[2];
          if ( v674 )
          {
            v2556 = v673;
            v666[3] = 0;
            qfree(v674);
            v673 = _mm_load_si128(&v2556);
          }
          v666[2] = v672;
          *(__m128i *)(v666 + 3) = v673;
          if ( *(_QWORD *)&v2561[16] )
          {
            *(_QWORD *)&v2561[24] = 0;
            qfree(*(__int64 *)&v2561[16]);
          }
LABEL_10:
          qfree(*(__int64 *)v2561);
          return nullptr;
        }
        v2537 = v2564;
      }
      v2249 = (__int64 *)v2537;
      v671 = (unsigned int *)(v2537 + 8);
      v2564 = (char *)v671;
      v670 = *v2249;
      goto LABEL_2005;
    case 376LL:
      v14 = v2563;
      v15 = v2563 + 8;
      v2563 = v15;
      v16 = *(__int64 **)&v2565[v14];
      if ( (unsigned int)v15 > 0x2F )
      {
        v2250 = (__int64 *)v2564;
        v2555 = v2564 + 8;
        v2564 += 8;
        v18 = *v2250;
      }
      else
      {
        v17 = v14 + 16;
        v18 = *(_QWORD *)&v2565[v15];
        v2563 = v17;
        if ( (unsigned int)v17 <= 0x2F )
        {
          v19 = v14 + 24;
          v20 = *(_QWORD *)&v2565[v17];
          v2563 = v19;
          if ( (unsigned int)v19 <= 0x2F )
          {
            v21 = &v2565[v19];
            v2563 = v14 + 32;
            goto LABEL_6;
          }
          v21 = v2564;
LABEL_2007:
          v2564 = v21 + 8;
LABEL_6:
          sub_127A20((__int64)v2561, v18, v20, *(unsigned int *)v21, a5, (int)a6);
          sub_648D0(v16, (__int64 *)v2561);
          v22 = *(_QWORD *)&v2561[16];
          v23 = _mm_loadu_si128((const __m128i *)&v2561[24]);
          memset(&v2561[16], 0, 24);
          v24 = v16[2];
          if ( v24 )
          {
            v2556 = v23;
            v16[3] = 0;
            qfree(v24);
            v23 = _mm_load_si128(&v2556);
          }
          v16[2] = v22;
          *(__m128i *)(v16 + 3) = v23;
          if ( *(_QWORD *)&v2561[16] )
          {
            *(_QWORD *)&v2561[24] = 0;
            qfree(*(__int64 *)&v2561[16]);
          }
          goto LABEL_10;
        }
        v2555 = v2564;
      }
      v2251 = (__int64 *)v2555;
      v21 = v2555 + 8;
      v2564 = v21;
      v20 = *v2251;
      goto LABEL_2007;
    case 377LL:
      v1863 = v2563;
      v1864 = v2563 + 8;
      v2563 = v1864;
      v1865 = *(_QWORD *)&v2565[v1863];
      if ( (unsigned int)v1864 > 0x2F )
      {
        v2497 = (__int64 **)v2564;
        v2498 = v2564 + 8;
        v2564 += 8;
        v1867 = *v2497;
      }
      else
      {
        v1866 = v1863 + 16;
        v1867 = *(__int64 **)&v2565[v1864];
        if ( (unsigned int)v1866 <= 0x2F )
        {
          v1868 = v1863 + 24;
          v1869 = *(_QWORD *)&v2565[v1866];
          v2563 = v1868;
          if ( (unsigned int)v1868 <= 0x2F )
          {
            v1870 = v1863 + 32;
            v1871 = *(_QWORD *)&v2565[v1868];
            if ( (unsigned int)v1870 > 0x2F )
              v1872 = (unsigned int *)v2564;
            else
              v1872 = (unsigned int *)&v2565[v1870];
            return (char *)sub_A9D90(v1865, v1867, v1869, v1871, *v1872);
          }
          v2500 = v2564;
LABEL_2118:
          v2501 = (__int64 *)v2500;
          v1872 = (unsigned int *)(v2500 + 8);
          v2564 = (char *)v1872;
          v1871 = *v2501;
          return (char *)sub_A9D90(v1865, v1867, v1869, v1871, *v1872);
        }
        v2498 = v2564;
      }
      v2499 = (__int64 *)v2498;
      v2500 = v2498 + 8;
      v2564 = v2500;
      v1869 = *v2499;
      goto LABEL_2118;
    case 378LL:
      v1853 = v2563;
      v1854 = v2563 + 8;
      v2563 = v1854;
      v1855 = *(_QWORD *)&v2565[v1853];
      if ( (unsigned int)v1854 > 0x2F )
      {
        v2242 = v2564;
        v2553 = v2564 + 8;
        v2564 += 8;
        v1857 = *(_QWORD **)v2242;
      }
      else
      {
        v1856 = v1853 + 16;
        v1857 = *(_QWORD **)&v2565[v1854];
        if ( (unsigned int)v1856 <= 0x2F )
        {
          v1858 = v1853 + 24;
          v1859 = *(_QWORD *)&v2565[v1856];
          v2563 = v1858;
          if ( (unsigned int)v1858 <= 0x2F )
          {
            v1860 = v1853 + 32;
            v1861 = *(_QWORD *)&v2565[v1858];
            if ( (unsigned int)v1860 > 0x2F )
              v1862 = (unsigned int *)v2564;
            else
              v1862 = (unsigned int *)&v2565[v1860];
            return (char *)sub_A9AA0(v1855, v1857, v1859, v1861, *v1862);
          }
          v2244 = v2564;
LABEL_2000:
          v2245 = (__int64 *)v2244;
          v1862 = (unsigned int *)(v2244 + 8);
          v2564 = (char *)v1862;
          v1861 = *v2245;
          return (char *)sub_A9AA0(v1855, v1857, v1859, v1861, *v1862);
        }
        v2553 = v2564;
      }
      v2243 = (__int64 *)v2553;
      v2244 = v2553 + 8;
      v2564 = v2244;
      v1859 = *v2243;
      goto LABEL_2000;
    case 379LL:
      v2164 = v2563;
      v2165 = v2563 + 8;
      v2166 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v2165 > 0x2F )
      {
        v2413 = (__int64 *)v2564;
        v2414 = v2564 + 8;
        v2564 += 8;
        v2168 = *v2413;
      }
      else
      {
        v2167 = v2563 + 16;
        v2168 = *(_QWORD *)&v2565[v2165];
        v2563 = v2167;
        if ( (unsigned int)v2167 <= 0x2F )
        {
          v2169 = v2164 + 24;
          v2170 = *(_QWORD *)&v2565[v2167];
          if ( (unsigned int)v2169 > 0x2F )
            v2171 = (__int64 *)v2564;
          else
            v2171 = (__int64 *)&v2565[v2169];
          return (char *)(unsigned __int8)sub_A9BE0(v2166, v2168, v2170, *v2171);
        }
        v2414 = v2564;
      }
      v2415 = (__int64 *)v2414;
      v2171 = (__int64 *)(v2414 + 8);
      v2564 = (char *)v2171;
      v2170 = *v2415;
      return (char *)(unsigned __int8)sub_A9BE0(v2166, v2168, v2170, *v2171);
    case 380LL:
      v1009 = v2563;
      v1010 = v2563 + 8;
      v2563 = v1010;
      *(_QWORD *)&v1011 = *(_QWORD *)&v2565[v1009];
      if ( (unsigned int)v1010 > 0x2F )
      {
        v2481 = v2564;
        v2482 = v2564 + 8;
        v2564 += 8;
        v1013 = *(_QWORD *)v2481;
      }
      else
      {
        v1012 = v1009 + 16;
        v1013 = *(_QWORD *)&v2565[v1010];
        if ( (unsigned int)v1012 <= 0x2F )
        {
          v1014 = v1009 + 24;
          *((_QWORD *)&v1011 + 1) = *(_QWORD *)&v2565[v1012];
          v2563 = v1014;
          if ( (unsigned int)v1014 <= 0x2F )
          {
            v1015 = v1009 + 32;
            v1016 = *(_QWORD *)&v2565[v1014];
            if ( (unsigned int)v1015 > 0x2F )
              v1017 = v2564;
            else
              v1017 = &v2565[v1015];
LABEL_885:
            v1018 = *((__int64 **)&v1011 + 1);
            *((_QWORD *)&v1011 + 1) = v1013;
            return (char *)sub_12A5C0(v1011, v1018, v1016, *(_DWORD *)v1017);
          }
          v2484 = v2564;
LABEL_2112:
          v2485 = (__int64 *)v2484;
          v1017 = v2484 + 8;
          v2564 = v1017;
          v1016 = *v2485;
          goto LABEL_885;
        }
        v2482 = v2564;
      }
      v2483 = v2482;
      v2484 = v2482 + 8;
      v2564 = v2484;
      *((_QWORD *)&v1011 + 1) = *(_QWORD *)v2483;
      goto LABEL_2112;
    case 381LL:
      v1518 = v2563;
      v1519 = v2563 + 8;
      v1520 = *(_QWORD **)&v2565[v2563];
      if ( (unsigned int)v1519 > 0x2F )
      {
        v2486 = (__m128i **)v2564;
        v2530 = v2564 + 8;
        v2564 += 8;
        v1522 = *v2486;
      }
      else
      {
        v1521 = v2563 + 16;
        v1522 = *(__m128i **)&v2565[v1519];
        v2563 = v1521;
        if ( (unsigned int)v1521 <= 0x2F )
        {
          v1523 = v1518 + 24;
          v1524 = *(__int64 **)&v2565[v1521];
          if ( (unsigned int)v1523 > 0x2F )
            v1525 = (unsigned int *)v2564;
          else
            v1525 = (unsigned int *)&v2565[v1523];
          return (char *)(unsigned __int8)sub_1EB0E0(v1520, v1522, v1524, *v1525);
        }
        v2530 = v2564;
      }
      v2487 = (__int64 **)v2530;
      v1525 = (unsigned int *)(v2530 + 8);
      v2564 = (char *)v1525;
      v1524 = *v2487;
      return (char *)(unsigned __int8)sub_1EB0E0(v1520, v1522, v1524, *v1525);
    case 382LL:
      v1508 = v2563;
      v1509 = v2563 + 8;
      v2563 = v1509;
      v1510 = *(_QWORD **)&v2565[v1508];
      if ( (unsigned int)v1509 > 0x2F )
      {
        v2200 = (__m128i **)v2564;
        v2201 = v2564 + 8;
        v2564 += 8;
        v1512 = *v2200;
      }
      else
      {
        v1511 = v1508 + 16;
        v1512 = *(__m128i **)&v2565[v1509];
        if ( (unsigned int)v1511 <= 0x2F )
        {
          v1513 = v1508 + 24;
          v1514 = *(__int64 **)&v2565[v1511];
          v2563 = v1513;
          if ( (unsigned int)v1513 <= 0x2F )
          {
            v1515 = v1508 + 32;
            v1516 = *(_QWORD *)&v2565[v1513];
            if ( (unsigned int)v1515 > 0x2F )
              v1517 = (unsigned int *)v2564;
            else
              v1517 = (unsigned int *)&v2565[v1515];
            return (char *)(unsigned __int8)sub_1EAE10(v1510, v1512, v1514, v1516, *v1517);
          }
          v2203 = v2564;
LABEL_1983:
          v2204 = (__int64 *)v2203;
          v1517 = (unsigned int *)(v2203 + 8);
          v2564 = (char *)v1517;
          v1516 = *v2204;
          return (char *)(unsigned __int8)sub_1EAE10(v1510, v1512, v1514, v1516, *v1517);
        }
        v2201 = v2564;
      }
      v2202 = (__int64 **)v2201;
      v2203 = v2201 + 8;
      v2564 = v2203;
      v1514 = *v2202;
      goto LABEL_1983;
    case 383LL:
      return (char *)sub_330DE0(*(_QWORD *)&v2565[v2563]);
    case 384LL:
      v378 = v2563 + 8;
      v379 = (unsigned __int64 *)&v2565[v378];
      if ( (unsigned int)v378 > 0x2F )
        v379 = (unsigned __int64 *)v2564;
      return (char *)(unsigned __int8)sub_332920(*(_QWORD *)&v2565[v2563], *v379);
    case 385LL:
      v946 = v2563;
      v947 = v2563 + 8;
      v2563 = v947;
      v948 = *(__int64 **)&v2565[v946];
      if ( (unsigned int)v947 > 0x2F )
      {
        v2444 = v2564;
        v951 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v950 = *(_QWORD **)v2444;
      }
      else
      {
        v949 = v946 + 16;
        v950 = *(_QWORD **)&v2565[v947];
        if ( (unsigned int)v949 > 0x2F )
          v951 = (__int64 *)v2564;
        else
          v951 = (__int64 *)&v2565[v949];
      }
      *v948 = sub_1CFD50(v950, *v951);
      return nullptr;
    case 386LL:
      v933 = v2563;
      v934 = v2563 + 8;
      v2563 = v934;
      v935 = *(__int64 **)&v2565[v933];
      if ( (unsigned int)v934 > 0x2F )
      {
        v2286 = (__int64 *)v2564;
        v938 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v937 = *v2286;
      }
      else
      {
        v936 = v933 + 16;
        v937 = *(_QWORD *)&v2565[v934];
        if ( (unsigned int)v936 > 0x2F )
          v938 = (__int64 *)v2564;
        else
          v938 = (__int64 *)&v2565[v936];
      }
      *v935 = sub_1CFDD0(v937, *v938);
      return nullptr;
    case 387LL:
      v939 = v2563;
      v940 = v2563 + 8;
      v2563 = v940;
      if ( (unsigned int)v940 > 0x2F )
      {
        v2276 = (__int64 *)v2564;
        v2277 = v2564 + 8;
        v2564 += 8;
        v942 = *v2276;
      }
      else
      {
        v941 = v939 + 16;
        v942 = *(_QWORD *)&v2565[v940];
        v2563 = v941;
        if ( (unsigned int)v941 <= 0x2F )
        {
          v943 = v939 + 24;
          v944 = *(_DWORD *)&v2565[v941];
          v2563 = v943;
          if ( (unsigned int)v943 <= 0x2F )
          {
            v945 = (__int64 *)&v2565[v943];
            v2563 = v939 + 32;
            goto LABEL_815;
          }
          v945 = (__int64 *)v2564;
LABEL_2018:
          v2564 = (char *)(v945 + 1);
LABEL_815:
          sub_1C5FB0((__int64)v2561, v942, v944, *v945);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2277 = v2564;
      }
      v2278 = (unsigned int *)v2277;
      v945 = (__int64 *)(v2277 + 8);
      v2564 = (char *)v945;
      v944 = *v2278;
      goto LABEL_2018;
    case 388LL:
      v926 = v2563;
      v927 = v2563 + 8;
      v2563 = v927;
      if ( (unsigned int)v927 > 0x2F )
      {
        v2283 = (__int64 *)v2564;
        v2284 = v2564 + 8;
        v2564 += 8;
        v929 = *v2283;
      }
      else
      {
        v928 = v926 + 16;
        v929 = *(_QWORD *)&v2565[v927];
        v2563 = v928;
        if ( (unsigned int)v928 <= 0x2F )
        {
          v930 = v926 + 24;
          v931 = *(_QWORD *)&v2565[v928];
          v2563 = v930;
          if ( (unsigned int)v930 <= 0x2F )
          {
            v932 = &v2565[v930];
            v2563 = v926 + 32;
            goto LABEL_806;
          }
          v932 = v2564;
LABEL_2022:
          v2564 = v932 + 8;
LABEL_806:
          sub_1C6010((__int64)v2561, v929, v931, *(unsigned int *)v932);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2284 = v2564;
      }
      v2285 = (__int64 *)v2284;
      v932 = v2284 + 8;
      v2564 = v932;
      v931 = *v2285;
      goto LABEL_2022;
    case 389LL:
      v919 = v2563;
      v920 = v2563 + 8;
      v2563 = v920;
      if ( (unsigned int)v920 > 0x2F )
      {
        v2274 = (__int64 *)v2564;
        v2548 = v2564 + 8;
        v2564 += 8;
        v922 = *v2274;
      }
      else
      {
        v921 = v919 + 16;
        v922 = *(_QWORD *)&v2565[v920];
        v2563 = v921;
        if ( (unsigned int)v921 <= 0x2F )
        {
          v923 = v919 + 24;
          v924 = *(_DWORD *)&v2565[v921];
          v2563 = v923;
          if ( (unsigned int)v923 <= 0x2F )
          {
            v925 = (__int64 *)&v2565[v923];
            v2563 = v919 + 32;
            goto LABEL_801;
          }
          v925 = (__int64 *)v2564;
LABEL_2016:
          v2564 = (char *)(v925 + 1);
LABEL_801:
          sub_1C76E0(v2561, v922, v924, *v925);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2548 = v2564;
      }
      v2275 = (unsigned int *)v2548;
      v925 = (__int64 *)(v2548 + 8);
      v2564 = (char *)v925;
      v924 = *v2275;
      goto LABEL_2016;
    case 390LL:
      v912 = v2563;
      v913 = v2563 + 8;
      v2563 = v913;
      if ( (unsigned int)v913 > 0x2F )
      {
        v2279 = (__int64 *)v2564;
        v2280 = v2564 + 8;
        v2564 += 8;
        v915 = *v2279;
      }
      else
      {
        v914 = v912 + 16;
        v915 = *(_QWORD *)&v2565[v913];
        v2563 = v914;
        if ( (unsigned int)v914 <= 0x2F )
        {
          v916 = v912 + 24;
          v917 = *(_QWORD *)&v2565[v914];
          v2563 = v916;
          if ( (unsigned int)v916 <= 0x2F )
          {
            v918 = &v2565[v916];
            v2563 = v912 + 32;
            goto LABEL_796;
          }
          v918 = v2564;
LABEL_2020:
          v2564 = v918 + 8;
LABEL_796:
          sub_1C7740(v2561, v915, v917, *(unsigned int *)v918);
          copy_argloc();
          cleanup_argloc();
          return nullptr;
        }
        v2280 = v2564;
      }
      v2281 = (__int64 *)v2280;
      v918 = v2280 + 8;
      v2564 = v918;
      v917 = *v2281;
      goto LABEL_2020;
    case 391LL:
      sub_3385F0(*(_QWORD **)&v2565[v2563]);
      return nullptr;
    case 392LL:
      return (char *)sub_1CE9E0(*(_QWORD *)&v2565[v2563]);
    case 393LL:
      v1840 = v2563 + 8;
      v1841 = (int *)&v2565[v1840];
      if ( (unsigned int)v1840 > 0x2F )
        v1841 = (int *)v2564;
      return (char *)(int)sub_330F20(*(_QWORD *)&v2565[v2563], *v1841, v2563, v1840, a5, (int)a6);
    case 394LL:
      v1672 = v2563 + 8;
      v1673 = (unsigned int *)&v2565[v1672];
      if ( (unsigned int)v1672 > 0x2F )
        v1673 = (unsigned int *)v2564;
      return (char *)(int)sub_1443F0(*(_QWORD *)&v2565[v2563], *v1673, v2563, v1672, a5, (__int64)a6);
    case 395LL:
      return (char *)(int)sub_13C380(*(_QWORD *)&v2565[v2563], (__int64)a2);
    case 396LL:
      return (char *)sub_670E0(*(_QWORD **)&v2565[v2563], (__int64)a2, a3, a4);
    case 397LL:
      v1228 = v2563 + 8;
      v1229 = &v2565[v1228];
      if ( (unsigned int)v1228 > 0x2F )
        v1229 = v2564;
      return (char *)(int)sub_FA4C0(*(_QWORD *)&v2565[v2563], *(_DWORD *)v1229, v2563, v1228);
    case 398LL:
      return (char *)(int)sub_14B8B0(*(_QWORD *)&v2565[v2563], (__int64)a2);
    case 399LL:
      sub_1FAD30(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 400LL:
      sub_1B7C10(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 401LL:
      v1751 = v2563;
      v1752 = v2563 + 8;
      v1753 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1752 > 0x2F )
      {
        v2239 = v2564;
        v2240 = v2564 + 8;
        v2564 += 8;
        v1755 = *(_DWORD *)v2239 != 0;
      }
      else
      {
        v1754 = *(_DWORD *)&v2565[v1752] == 0;
        v2563 += 16;
        v1755 = !v1754;
        if ( v1751 + 16 <= 0x2F )
        {
          v1756 = v1751 + 24;
          if ( (unsigned int)v1756 > 0x2F )
            v1757 = v2564;
          else
            v1757 = &v2565[v1756];
LABEL_1577:
          v1758 = *(const __m128i **)v1757;
          v2566 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v1757);
          v2567 = v1758[1].m128i_i64[0];
          sub_1B79D0(v1753, v1755);
          return nullptr;
        }
        v2240 = v2564;
      }
      v1757 = v2240 + 8;
      v2564 = v1757;
      goto LABEL_1577;
    case 402LL:
      v1749 = v2563 + 8;
      v1750 = &v2565[v1749];
      if ( (unsigned int)v1749 > 0x2F )
        v1750 = v2564;
      sub_1AF540(*(_QWORD *)&v2565[v2563], *(void (****)(_QWORD, _QWORD, const char *, ...))v1750);
      return nullptr;
    case 403LL:
      v1759 = v2563 + 8;
      v1760 = &v2565[v1759];
      if ( (unsigned int)v1759 > 0x2F )
        v1760 = v2564;
      sub_321ED0(*(_QWORD *)&v2565[v2563], *(_DWORD *)v1760 != 0, *(double *)a7.m128_u64, a8);
      return nullptr;
    case 404LL:
      v1346 = &v2565[v2563];
      v2563 += 8;
      v1347 = *(_QWORD *)(*(_QWORD *)v1346 + 784LL);
      if ( v1347 )
        *(_DWORD *)(v1347 + 48) = 63;
      return nullptr;
    case 405LL:
      v1987 = v2563 + 8;
      v1988 = (int *)&v2565[v1987];
      if ( (unsigned int)v1987 > 0x2F )
        v1988 = (int *)v2564;
      return (char *)sub_68FC0(*(_QWORD *)&v2565[v2563], *v1988, v2563, v1987);
    case 406LL:
      v1747 = v2563 + 8;
      v1748 = (__int64 *)&v2565[v1747];
      if ( (unsigned int)v1747 > 0x2F )
        v1748 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_69EC0(*(_QWORD *)&v2565[v2563], *v1748);
    case 407LL:
      v789 = v2563;
      v790 = v2563 + 8;
      v791 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v790 > 0x2F )
      {
        v2441 = (__int64 *)v2564;
        v2442 = v2564 + 8;
        v2564 += 8;
        v793 = *v2441;
      }
      else
      {
        v792 = v2563 + 16;
        v793 = *(_QWORD *)&v2565[v790];
        v2563 = v792;
        if ( (unsigned int)v792 <= 0x2F )
        {
          v794 = v789 + 24;
          v795 = *(_DWORD *)&v2565[v792];
          if ( (unsigned int)v794 > 0x2F )
            v796 = v2564;
          else
            v796 = &v2565[v794];
          return (char *)sub_69310(v791, v793, v795, *(unsigned int *)v796);
        }
        v2442 = v2564;
      }
      v2443 = (int *)v2442;
      v796 = v2442 + 8;
      v2564 = v796;
      v795 = *v2443;
      return (char *)sub_69310(v791, v793, v795, *(unsigned int *)v796);
    case 408LL:
      return (char *)(unsigned __int8)sub_69F70(*(_QWORD *)&v2565[v2563]);
    case 409LL:
      return (char *)(unsigned __int8)sub_6A500(*(unsigned int **)&v2565[v2563], a2);
    case 410LL:
      v1916 = v2563 + 8;
      v1917 = (__int64 *)&v2565[v1916];
      if ( (unsigned int)v1916 > 0x2F )
        v1917 = (__int64 *)v2564;
      return (char *)(int)sub_11FBB0(*(_QWORD *)&v2565[v2563], *v1917);
    case 411LL:
      v2043 = v2563 + 8;
      v2044 = (__int64 *)&v2565[v2043];
      if ( (unsigned int)v2043 > 0x2F )
        v2044 = (__int64 *)v2564;
      return (char *)(int)sub_11FC20(*(_QWORD *)&v2565[v2563], *v2044);
    case 412LL:
      v1079 = v2563 + 8;
      v1080 = (__int64 **)&v2565[v1079];
      if ( (unsigned int)v1079 > 0x2F )
        v1080 = (__int64 **)v2564;
      return (char *)(int)sub_11F9E0(*(_QWORD *)&v2565[v2563], *v1080);
    case 413LL:
      v428 = v2563;
      v429 = v2563 + 8;
      v2563 = v429;
      v430 = *(_QWORD *)&v2565[v428];
      if ( (unsigned int)v429 > 0x2F )
      {
        v2233 = (__int64 *)v2564;
        v2554 = v2564 + 8;
        v2564 += 8;
        v432 = *v2233;
      }
      else
      {
        v431 = v428 + 16;
        v432 = *(_QWORD *)&v2565[v429];
        if ( (unsigned int)v431 <= 0x2F )
        {
          v433 = v428 + 24;
          v434 = *(_QWORD *)&v2565[v431];
          v2563 = v433;
          if ( (unsigned int)v433 <= 0x2F )
          {
            v435 = v428 + 32;
            v436 = *(_DWORD *)&v2565[v433] != 0;
            if ( (unsigned int)v435 > 0x2F )
              v437 = (__int64 *)v2564;
            else
              v437 = (__int64 *)&v2565[v435];
            return (char *)sub_11FC90(v430, v432, v434, v436, *v437);
          }
          v2235 = v2564;
LABEL_1997:
          v2236 = v2235;
          v437 = (__int64 *)(v2235 + 8);
          v1754 = *(_DWORD *)v2236 == 0;
          v2564 = (char *)v437;
          v436 = !v1754;
          return (char *)sub_11FC90(v430, v432, v434, v436, *v437);
        }
        v2554 = v2564;
      }
      v2234 = (__int64 *)v2554;
      v2235 = v2554 + 8;
      v2564 = v2235;
      v434 = *v2234;
      goto LABEL_1997;
    case 414LL:
      v416 = v2563;
      v417 = v2563 + 8;
      v418 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v417 > 0x2F )
      {
        v2357 = (__int64 *)v2564;
        v2358 = v2564 + 8;
        v2564 += 8;
        v420 = *v2357;
      }
      else
      {
        v419 = v2563 + 16;
        v420 = *(_QWORD *)&v2565[v417];
        v2563 = v419;
        if ( (unsigned int)v419 <= 0x2F )
        {
          v421 = v416 + 24;
          v422 = *(_QWORD *)&v2565[v419];
          if ( (unsigned int)v421 <= 0x2F )
          {
            v423 = v416 + 32;
            v424 = *(_QWORD *)&v2565[v421];
            v2563 = v423;
            if ( (unsigned int)v423 <= 0x2F )
            {
              v425 = v416 + 40;
              v426 = *(_QWORD *)&v2565[v423];
              if ( (unsigned int)v425 > 0x2F )
                v427 = (__int64 *)v2564;
              else
                v427 = (__int64 *)&v2565[v425];
              return (char *)sub_336150(v418, v420, v422, v424, v426, *v427);
            }
            v2362 = (__int64 *)v2564;
LABEL_2056:
            v2363 = v2362;
            v427 = v2362 + 1;
            v2564 = (char *)v427;
            v426 = *v2363;
            return (char *)sub_336150(v418, v420, v422, v424, v426, *v427);
          }
          v2360 = (__int64 *)v2564;
LABEL_2055:
          v2361 = v2360;
          v2362 = v2360 + 1;
          v2564 = (char *)v2362;
          v424 = *v2361;
          goto LABEL_2056;
        }
        v2358 = v2564;
      }
      v2359 = (__int64 *)v2358;
      v2360 = (__int64 *)(v2358 + 8);
      v2564 = (char *)v2360;
      v422 = *v2359;
      goto LABEL_2055;
    case 415LL:
      v1595 = v2563;
      v1596 = v2563 + 8;
      v1597 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1596 > 0x2F )
      {
        v2435 = (__int64 *)v2564;
        v2532 = v2564 + 8;
        v2564 += 8;
        v1599 = *v2435;
      }
      else
      {
        v1598 = v2563 + 16;
        v1599 = *(_QWORD *)&v2565[v1596];
        v2563 = v1598;
        if ( (unsigned int)v1598 <= 0x2F )
        {
          v1600 = v1595 + 24;
          v1601 = *(__int64 **)&v2565[v1598];
          if ( (unsigned int)v1600 <= 0x2F )
          {
            v1602 = v1595 + 32;
            v1603 = *(_QWORD *)&v2565[v1600];
            v2563 = v1602;
            if ( (unsigned int)v1602 <= 0x2F )
            {
              v1604 = v1595 + 40;
              v1605 = *(_QWORD *)&v2565[v1602];
              if ( (unsigned int)v1604 > 0x2F )
                v1606 = v2564;
              else
                v1606 = &v2565[v1604];
LABEL_1422:
              sub_1390C0(v1597, v1599, v1601, v1603, v1605, *(_DWORD *)v1606 != 0);
              return nullptr;
            }
            v2439 = v2564;
LABEL_2097:
            v2440 = (__int64 *)v2439;
            v1606 = v2439 + 8;
            v2564 = v1606;
            v1605 = *v2440;
            goto LABEL_1422;
          }
          v2437 = (__int64 *)v2564;
LABEL_2096:
          v2438 = v2437;
          v2439 = (char *)(v2437 + 1);
          v2564 = v2439;
          v1603 = *v2438;
          goto LABEL_2097;
        }
        v2532 = v2564;
      }
      v2436 = (__int64 **)v2532;
      v2437 = (__int64 *)(v2532 + 8);
      v2564 = (char *)v2437;
      v1601 = *v2436;
      goto LABEL_2096;
    case 416LL:
      v414 = v2563 + 8;
      v415 = (int *)&v2565[v414];
      if ( (unsigned int)v414 > 0x2F )
        v415 = (int *)v2564;
      return (char *)sub_13D280(*(_QWORD **)&v2565[v2563], *v415);
    case 417LL:
      v1955 = v2563;
      v1956 = v2563 + 8;
      v2563 = v1956;
      v1957 = *(__int64 **)&v2565[v1955];
      if ( (unsigned int)v1956 > 0x2F )
      {
        v2446 = v2564;
        v1960 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1959 = *(_QWORD **)v2446;
      }
      else
      {
        v1958 = v1955 + 16;
        v1959 = *(_QWORD **)&v2565[v1956];
        if ( (unsigned int)v1958 > 0x2F )
          v1960 = (__int64 *)v2564;
        else
          v1960 = (__int64 *)&v2565[v1958];
      }
      *v1957 = sub_332AB0(v1959, *v1960);
      return nullptr;
    case 418LL:
      v1803 = v2563;
      v1804 = v2563 + 8;
      v2563 = v1804;
      v1805 = *(unsigned __int64 **)&v2565[v1803];
      if ( (unsigned int)v1804 > 0x2F )
      {
        v2195 = v2564;
        v1808 = (unsigned __int64 *)(v2564 + 8);
        v2564 += 8;
        v1807 = *(_QWORD **)v2195;
      }
      else
      {
        v1806 = v1803 + 16;
        v1807 = *(_QWORD **)&v2565[v1804];
        if ( (unsigned int)v1806 > 0x2F )
          v1808 = (unsigned __int64 *)v2564;
        else
          v1808 = (unsigned __int64 *)&v2565[v1806];
      }
      *v1805 = sub_330F80(v1807, *v1808);
      return nullptr;
    case 419LL:
      v1374 = v2563 + 8;
      v1375 = (__int64 *)&v2565[v1374];
      if ( (unsigned int)v1374 > 0x2F )
        v1375 = (__int64 *)v2564;
      sub_92990(*(_QWORD *)&v2565[v2563], *v1375);
      return nullptr;
    case 420LL:
      v1372 = v2563 + 8;
      v1373 = (__int64 *)&v2565[v1372];
      if ( (unsigned int)v1372 > 0x2F )
        v1373 = (__int64 *)v2564;
      return (char *)sub_8EFD0(*(_QWORD *)&v2565[v2563], *v1373);
    case 421LL:
      v2071 = v2563 + 8;
      v2072 = (const char **)&v2565[v2071];
      if ( (unsigned int)v2071 > 0x2F )
        v2072 = (const char **)v2564;
      sub_92A40(*(_QWORD *)&v2565[v2563], *v2072);
      return nullptr;
    case 422LL:
      v1631 = v2563;
      v1632 = v2563 + 8;
      v2563 = v1632;
      v1633 = *(_QWORD **)&v2565[v1631];
      if ( (unsigned int)v1632 > 0x2F )
      {
        v2445 = (__int64 *)v2564;
        v1636 = v2564 + 8;
        v2564 += 8;
        v1635 = *v2445;
      }
      else
      {
        v1634 = v1631 + 16;
        v1635 = *(_QWORD *)&v2565[v1632];
        if ( (unsigned int)v1634 > 0x2F )
          v1636 = v2564;
        else
          v1636 = &v2565[v1634];
      }
      return (char *)(int)sub_138140(v1633, v1635, *(_DWORD *)v1636 != 0);
    case 423LL:
      v1949 = v2563;
      v1950 = v2563 + 8;
      v2563 = v1950;
      v1951 = *(_QWORD *)&v2565[v1949];
      if ( (unsigned int)v1950 > 0x2F )
      {
        v2194 = (int *)v2564;
        v1954 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1953 = *v2194;
      }
      else
      {
        v1952 = v1949 + 16;
        v1953 = *(_DWORD *)&v2565[v1950];
        if ( (unsigned int)v1952 > 0x2F )
          v1954 = (__int64 *)v2564;
        else
          v1954 = (__int64 *)&v2565[v1952];
      }
      sub_137FB0(v1951, v1953, *v1954);
      return nullptr;
    case 424LL:
      v848 = v2563;
      v849 = v2563 + 8;
      v850 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v849 > 0x2F )
      {
        v2426 = (__int64 *)v2564;
        v2427 = v2564 + 8;
        v2564 += 8;
        v852 = *v2426;
      }
      else
      {
        v851 = v2563 + 16;
        v852 = *(_QWORD *)&v2565[v849];
        v2563 = v851;
        if ( (unsigned int)v851 <= 0x2F )
        {
          v853 = v848 + 24;
          v854 = *(_DWORD *)&v2565[v851];
          if ( (unsigned int)v853 <= 0x2F )
          {
            v855 = v848 + 32;
            v856 = *(unsigned __int64 ***)&v2565[v853];
            v2563 = v855;
            if ( (unsigned int)v855 <= 0x2F )
            {
              v857 = v848 + 40;
              v858 = *(_DWORD *)&v2565[v855];
              if ( (unsigned int)v857 > 0x2F )
                v859 = v2564;
              else
                v859 = &v2565[v857];
              return (char *)(int)sub_1DB100(v850, v852, v854, v856, v858, *(_DWORD *)v859);
            }
            v2431 = (int *)v2564;
LABEL_2094:
            v2432 = v2431;
            v859 = (char *)(v2431 + 2);
            v2564 = v859;
            v858 = *v2432;
            return (char *)(int)sub_1DB100(v850, v852, v854, v856, v858, *(_DWORD *)v859);
          }
          v2429 = v2564;
LABEL_2093:
          v2430 = (unsigned __int64 ***)v2429;
          v2431 = (int *)(v2429 + 8);
          v2564 = (char *)v2431;
          v856 = *v2430;
          goto LABEL_2094;
        }
        v2427 = v2564;
      }
      v2428 = (signed int *)v2427;
      v2429 = v2427 + 8;
      v2564 = v2429;
      v854 = *v2428;
      goto LABEL_2093;
    case 425LL:
      v543 = v2563 + 8;
      v544 = (unsigned __int64 *)&v2565[v543];
      if ( (unsigned int)v543 > 0x2F )
        v544 = (unsigned __int64 *)v2564;
      return (char *)sub_1CFB40(*(_QWORD *)&v2565[v2563], *v544);
    case 426LL:
      v535 = v2563;
      v536 = v2563 + 8;
      v537 = *(_QWORD **)&v2565[v2563];
      if ( (unsigned int)v536 > 0x2F )
      {
        v2270 = (__int64 *)v2564;
        v2271 = v2564 + 8;
        v2564 += 8;
        v539 = *v2270;
      }
      else
      {
        v538 = v2563 + 16;
        v539 = *(_QWORD *)&v2565[v536];
        v2563 = v538;
        if ( (unsigned int)v538 <= 0x2F )
        {
          v540 = v535 + 24;
          v541 = *(const char **)&v2565[v538];
          if ( (unsigned int)v540 > 0x2F )
            v542 = (int *)v2564;
          else
            v542 = (int *)&v2565[v540];
          return (char *)(unsigned __int8)sub_213D50(v537, v539, v541, *v542);
        }
        v2271 = v2564;
      }
      v2272 = (const char **)v2271;
      v542 = (int *)(v2271 + 8);
      v2564 = (char *)v542;
      v541 = *v2272;
      return (char *)(unsigned __int8)sub_213D50(v537, v539, v541, *v542);
    case 427LL:
      v545 = v2563;
      v546 = v2563 + 8;
      v547 = *(__int64 **)&v2565[v2563];
      if ( (unsigned int)v546 > 0x2F )
      {
        v2417 = (__int64 *)v2564;
        v2418 = v2564 + 8;
        v2564 += 8;
        v549 = *v2417;
      }
      else
      {
        v548 = v2563 + 16;
        v549 = *(_QWORD *)&v2565[v546];
        v2563 = v548;
        if ( (unsigned int)v548 <= 0x2F )
        {
          v550 = v545 + 24;
          v551 = *(_DWORD *)&v2565[v548];
          if ( (unsigned int)v550 <= 0x2F )
          {
            v552 = v545 + 32;
            v553 = *(_DWORD *)&v2565[v550];
            v2563 = v552;
            if ( (unsigned int)v552 <= 0x2F )
            {
              v554 = v545 + 40;
              v555 = *(_QWORD *)&v2565[v552];
              if ( (unsigned int)v554 <= 0x2F )
              {
                v556 = *(_QWORD *)&v2565[v554];
                v557 = v2564;
                goto LABEL_477;
              }
              v2424 = (__int64 *)v2564;
LABEL_2091:
              v2425 = v2424;
              v557 = (char *)(v2424 + 1);
              v2564 = v557;
              v556 = *v2425;
LABEL_477:
              v2564 = v557 + 8;
              return (char *)sub_17C4E0(v547, v549, v551, v553, v555, v556, *v557, *((_DWORD *)v557 + 2));
            }
            v2422 = (__int64 *)v2564;
LABEL_2090:
            v2423 = v2422;
            v2424 = v2422 + 1;
            v2564 = (char *)v2424;
            v555 = *v2423;
            goto LABEL_2091;
          }
          v2420 = (unsigned int *)v2564;
LABEL_2089:
          v2421 = v2420;
          v2422 = (__int64 *)(v2420 + 2);
          v2564 = (char *)v2422;
          v553 = *v2421;
          goto LABEL_2090;
        }
        v2418 = v2564;
      }
      v2419 = (int *)v2418;
      v2420 = (unsigned int *)(v2418 + 8);
      v2564 = (char *)v2420;
      v551 = *v2419;
      goto LABEL_2089;
    case 428LL:
      v533 = v2563 + 8;
      v534 = (int *)&v2565[v533];
      if ( (unsigned int)v533 > 0x2F )
        v534 = (int *)v2564;
      return (char *)sub_110340(*(_QWORD *)&v2565[v2563], *v534);
    case 429LL:
      v1173 = v2563 + 8;
      v1174 = (int *)&v2565[v1173];
      if ( (unsigned int)v1173 > 0x2F )
        v1174 = (int *)v2564;
      return (char *)sub_1108E0(*(_QWORD *)&v2565[v2563], *v1174);
    case 430LL:
      v1171 = v2563 + 8;
      v1172 = (__int64 *)&v2565[v1171];
      if ( (unsigned int)v1171 > 0x2F )
        v1172 = (__int64 *)v2564;
      return (char *)(int)sub_1D5CD0(*(_QWORD **)&v2565[v2563], *v1172);
    case 431LL:
      sub_1D8010(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 432LL:
      v520 = v2563;
      v521 = v2563 + 8;
      v2563 = v521;
      v522 = *(_QWORD *)&v2565[v520];
      if ( (unsigned int)v521 > 0x2F )
      {
        v2382 = (unsigned int *)v2564;
        v2383 = v2564 + 8;
        v2564 += 8;
        v524 = *v2382;
      }
      else
      {
        v523 = v520 + 16;
        v524 = *(_DWORD *)&v2565[v521];
        if ( (unsigned int)v523 <= 0x2F )
        {
          v525 = v520 + 24;
          v526 = *(_DWORD *)&v2565[v523];
          v2563 = v525;
          if ( (unsigned int)v525 <= 0x2F )
          {
            v527 = v520 + 32;
            v528 = *(_QWORD *)&v2565[v525];
            if ( (unsigned int)v527 <= 0x2F )
            {
              v529 = v520 + 40;
              v530 = *(_QWORD *)&v2565[v527];
              v2563 = v529;
              if ( (unsigned int)v529 <= 0x2F )
              {
                v531 = *(_QWORD *)&v2565[v529];
                v532 = (int *)v2564;
                return (char *)sub_1D6310(v522, v524, v526, v528, v530, v531, *v532);
              }
              v2389 = v2564;
LABEL_2077:
              v2390 = (__int64 *)v2389;
              v532 = (int *)(v2389 + 8);
              v2564 = (char *)v532;
              v531 = *v2390;
              return (char *)sub_1D6310(v522, v524, v526, v528, v530, v531, *v532);
            }
            v2387 = (__int64 *)v2564;
LABEL_2076:
            v2388 = v2387;
            v2389 = (char *)(v2387 + 1);
            v2564 = v2389;
            v530 = *v2388;
            goto LABEL_2077;
          }
          v2385 = (__int64 *)v2564;
LABEL_2075:
          v2386 = v2385;
          v2387 = v2385 + 1;
          v2564 = (char *)v2387;
          v528 = *v2386;
          goto LABEL_2076;
        }
        v2383 = v2564;
      }
      v2384 = (int *)v2383;
      v2385 = (__int64 *)(v2383 + 8);
      v2564 = (char *)v2385;
      v526 = *v2384;
      goto LABEL_2075;
    case 433LL:
      v2118 = v2563;
      v2119 = v2563 + 8;
      v2563 = v2119;
      v2120 = *(_QWORD *)&v2565[v2118];
      if ( (unsigned int)v2119 > 0x2F )
      {
        v2506 = v2564;
        v2507 = v2564 + 8;
        v2564 += 8;
        v2122 = *(_DWORD *)v2506;
      }
      else
      {
        v2121 = v2118 + 16;
        v2122 = *(_DWORD *)&v2565[v2119];
        if ( (unsigned int)v2121 <= 0x2F )
        {
          v2123 = v2118 + 24;
          v2124 = *(unsigned __int8 **)&v2565[v2121];
          v2563 = v2123;
          if ( (unsigned int)v2123 <= 0x2F )
          {
            v2125 = v2118 + 32;
            v2126 = *(unsigned __int8 **)&v2565[v2123];
            if ( (unsigned int)v2125 > 0x2F )
              v2127 = (unsigned __int8 **)v2564;
            else
              v2127 = (unsigned __int8 **)&v2565[v2125];
            return (char *)sub_1D6450(v2120, v2122, v2124, v2126, *v2127);
          }
          v2509 = (unsigned __int8 **)v2564;
LABEL_2120:
          v2510 = v2509;
          v2127 = v2509 + 1;
          v2564 = (char *)v2127;
          v2126 = *v2510;
          return (char *)sub_1D6450(v2120, v2122, v2124, v2126, *v2127);
        }
        v2507 = v2564;
      }
      v2508 = (unsigned __int8 **)v2507;
      v2509 = (unsigned __int8 **)(v2507 + 8);
      v2564 = (char *)v2509;
      v2124 = *v2508;
      goto LABEL_2120;
    case 434LL:
      return (char *)(unsigned __int8)sub_33DE10(*(_QWORD *)&v2565[v2563]);
    case 435LL:
      return sub_33DF30();
    case 436LL:
      v1258 = v2563 + 8;
      v1259 = &v2565[v1258];
      if ( (unsigned int)v1258 > 0x2F )
        v1259 = v2564;
      return (char *)sub_39B020(*(_QWORD *)&v2565[v2563], (__int64 *)*(unsigned int *)v1259, *(double *)a7.m128_u64);
    case 437LL:
      return (char *)(unsigned __int8)sub_389DE0(*(_QWORD *)&v2565[v2563]);
    case 438LL:
      return (char *)sub_389D80(*(_QWORD *)&v2565[v2563]);
    case 439LL:
      v2112 = v2563;
      v2113 = v2563 + 8;
      v2563 = v2113;
      v2114 = *(const char **)&v2565[v2112];
      if ( (unsigned int)v2113 > 0x2F )
      {
        v2189 = (__int64 *)v2564;
        v2117 = (int *)(v2564 + 8);
        v2564 += 8;
        v2116 = *v2189;
      }
      else
      {
        v2115 = v2112 + 16;
        v2116 = *(_QWORD *)&v2565[v2113];
        if ( (unsigned int)v2115 > 0x2F )
          v2117 = (int *)v2564;
        else
          v2117 = (int *)&v2565[v2115];
      }
      return (char *)sub_3697C0(
                       v2114,
                       v2116,
                       *v2117,
                       *(double *)a7.m128_u64,
                       *(double *)a8.m128_u64,
                       a9,
                       a10,
                       a11,
                       a12,
                       a13);
    case 440LL:
      v690 = v2563;
      v691 = v2563 + 8;
      v2563 = v691;
      v692 = *(__int64 **)&v2565[v690];
      if ( (unsigned int)v691 > 0x2F )
      {
        v694 = (__int64 *)v2564;
        v693 = (__int64)(v2564 + 8);
        v2564 += 8;
      }
      else
      {
        v693 = v690 + 16;
        v694 = (__int64 *)&v2565[v691];
        v2563 = v693;
      }
      sub_3310F0((__int64)v2561, *v694, v693);
      v695 = *(_QWORD *)v2561;
      v696 = _mm_loadu_si128((const __m128i *)&v2561[8]);
      memset(v2561, 0, 24);
      v697 = *v692;
      if ( *v692 )
      {
        v2556 = v696;
        v692[1] = 0;
        qfree(v697);
        v696 = _mm_load_si128(&v2556);
      }
      *v692 = v695;
      *(__m128i *)(v692 + 1) = v696;
      v81 = *(_QWORD *)v2561;
      if ( *(_QWORD *)v2561 )
        goto LABEL_67;
      return nullptr;
    case 441LL:
      v1883 = v2563 + 8;
      v1884 = *(_QWORD *)&v2565[v2563];
      v1885 = &v2565[v1883];
      if ( (unsigned int)v1883 > 0x2F )
        v1885 = v2564;
      v1886 = *(_DWORD *)v1885 != 0;
      v1887 = sub_339CA0();
      sub_383450(v1887, v1884, v1886);
      return nullptr;
    case 442LL:
      v1543 = v2563;
      v1544 = v2563 + 8;
      v2563 = v1544;
      v1545 = *(_QWORD *)&v2565[v1543];
      if ( (unsigned int)v1544 > 0x2F )
      {
        v2434 = (__int64 **)v2564;
        v1548 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1547 = *v2434;
      }
      else
      {
        v1546 = v1543 + 16;
        v1547 = *(__int64 **)&v2565[v1544];
        if ( (unsigned int)v1546 > 0x2F )
          v1548 = (__int64 *)v2564;
        else
          v1548 = (__int64 *)&v2565[v1546];
      }
      return (char *)(unsigned __int8)sub_331CD0(v1545, v1547, *v1548);
    case 443LL:
      return (char *)(unsigned __int8)sub_331680(*(_QWORD *)&v2565[v2563], (__int64)a2, a3, a4, a5, (__int64)a6);
    case 444LL:
      nullsub_183();
      return nullptr;
    case 445LL:
      return (char *)(unsigned int)sub_254C70(*(_DWORD *)&v2565[v2563]);
    case 446LL:
      return (char *)(unsigned int)sub_254C90(*(_DWORD *)&v2565[v2563]);
    case 447LL:
      return (char *)(int)sub_255000(*(_DWORD *)&v2565[v2563]);
    case 448LL:
      return (char *)(unsigned int)sub_244F90(*(_DWORD *)&v2565[v2563]);
    case 449LL:
      return (char *)(unsigned int)sub_244FD0(*(_DWORD *)&v2565[v2563]);
    case 450LL:
      v1893 = v2563;
      v1894 = v2563 + 8;
      v2563 = v1894;
      v1895 = *(__int64 **)&v2565[v1893];
      if ( (unsigned int)v1894 > 0x2F )
      {
        v2455 = (__int64 **)v2564;
        v2528 = v2564 + 8;
        v2564 += 8;
        v1897 = *v2455;
      }
      else
      {
        v1896 = v1893 + 16;
        v1897 = *(__int64 **)&v2565[v1894];
        if ( (unsigned int)v1896 <= 0x2F )
        {
          v1898 = v1893 + 24;
          v1899 = *(_QWORD *)&v2565[v1896];
          v2563 = v1898;
          if ( (unsigned int)v1898 <= 0x2F )
          {
            v1900 = v1893 + 32;
            v1901 = *(_QWORD *)&v2565[v1898];
            if ( (unsigned int)v1900 > 0x2F )
              v1902 = v2564;
            else
              v1902 = &v2565[v1900];
LABEL_1706:
            sub_266270(v1895, v1897, v1899, v1901, *(_BYTE **)v1902);
            return nullptr;
          }
          v2457 = v2564;
LABEL_2103:
          v2458 = (__int64 *)v2457;
          v1902 = v2457 + 8;
          v2564 = v1902;
          v1901 = *v2458;
          goto LABEL_1706;
        }
        v2528 = v2564;
      }
      v2456 = (__int64 *)v2528;
      v2457 = v2528 + 8;
      v2564 = v2457;
      v1899 = *v2456;
      goto LABEL_2103;
    case 451LL:
      v1408 = v2563;
      v1409 = v2563 + 8;
      v2563 = v1409;
      v1410 = *(__int64 **)&v2565[v1408];
      if ( (unsigned int)v1409 > 0x2F )
      {
        v2529 = (__int64 **)v2564;
        v2564 += 8;
        v1411 = *v2529;
      }
      else
      {
        v1411 = *(__int64 **)&v2565[v1409];
      }
      *v1410 = sub_255A30(v1411);
      return nullptr;
    case 452LL:
      v1398 = v2563;
      v1399 = v2563 + 8;
      v1400 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v1399 > 0x2F )
      {
        v2211 = (__int64 *)v2564;
        v2212 = v2564 + 8;
        v2564 += 8;
        v1402 = *v2211;
      }
      else
      {
        v1401 = v2563 + 16;
        v1402 = *(_QWORD *)&v2565[v1399];
        v2563 = v1401;
        if ( (unsigned int)v1401 <= 0x2F )
        {
          v1403 = v1398 + 24;
          v1404 = *(_DWORD *)&v2565[v1401];
          if ( (unsigned int)v1403 > 0x2F )
            v1405 = (int *)v2564;
          else
            v1405 = (int *)&v2565[v1403];
LABEL_1257:
          v1406 = *v1405;
          v1407 = sub_339CA0();
          sub_2400B0(v1400, v1407, v1402, v1404, v1406);
          return nullptr;
        }
        v2212 = v2564;
      }
      v2213 = (unsigned int *)v2212;
      v1405 = (int *)(v2212 + 8);
      v2564 = (char *)v1405;
      v1404 = *v2213;
      goto LABEL_1257;
    case 453LL:
      v1978 = v2563 + 8;
      v1979 = &v2565[v1978];
      if ( (unsigned int)v1978 > 0x2F )
        v1979 = v2564;
      return (char *)(int)sub_2569B0(*(_QWORD **)&v2565[v2563], *(_QWORD **)v1979);
    case 454LL:
      v1823 = v2563 + 8;
      v1824 = (__int64 *)&v2565[v1823];
      if ( (unsigned int)v1823 > 0x2F )
        v1824 = (__int64 *)v2564;
      return (char *)(int)sub_256980(*(_QWORD *)&v2565[v2563], *v1824);
    case 455LL:
      v1972 = v2563;
      v1973 = v2563 + 8;
      v2563 = v1973;
      v1974 = *(__int64 **)&v2565[v1972];
      if ( (unsigned int)v1973 > 0x2F )
      {
        v2196 = (__int64 *)v2564;
        v1977 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1976 = *v2196;
      }
      else
      {
        v1975 = v1972 + 16;
        v1976 = *(_QWORD *)&v2565[v1973];
        if ( (unsigned int)v1975 > 0x2F )
          v1977 = (__int64 *)v2564;
        else
          v1977 = (__int64 *)&v2565[v1975];
      }
      return (char *)(int)sub_255A80(v1974, v1976, *v1977);
    case 456LL:
      v880 = v2563;
      v881 = v2563 + 8;
      v2563 = v881;
      v882 = *(_QWORD *)&v2565[v880];
      if ( (unsigned int)v881 > 0x2F )
      {
        v2459 = (__int64 *)v2564;
        v885 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v884 = *v2459;
      }
      else
      {
        v883 = v880 + 16;
        v884 = *(_QWORD *)&v2565[v881];
        if ( (unsigned int)v883 > 0x2F )
          v885 = (__int64 *)v2564;
        else
          v885 = (__int64 *)&v2565[v883];
      }
      return (char *)(int)sub_256390(v882, v884, *v885);
    case 457LL:
      v645 = *(_QWORD *)&v2565[v2563];
      v646 = sub_339CA0();
      return (char *)(unsigned __int8)sub_283B00(v645, v646);
    case 458LL:
      v639 = v2563;
      v640 = v2563 + 8;
      v2563 = v640;
      v641 = *(_QWORD **)&v2565[v639];
      if ( (unsigned int)v640 > 0x2F )
      {
        v2252 = v2564;
        v644 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v643 = *(_QWORD *)v2252;
      }
      else
      {
        v642 = v639 + 16;
        v643 = *(_QWORD *)&v2565[v640];
        if ( (unsigned int)v642 > 0x2F )
          v644 = (__int64 *)v2564;
        else
          v644 = (__int64 *)&v2565[v642];
      }
      return (char *)(unsigned __int8)sub_284900(v641, v643, *v644);
    case 459LL:
      v637 = v2563 + 8;
      v638 = (__int64 *)&v2565[v637];
      if ( (unsigned int)v637 > 0x2F )
        v638 = (__int64 *)v2564;
      return (char *)(int)sub_257C70(*(_QWORD *)&v2565[v2563], *v638);
    case 460LL:
      v635 = v2563 + 8;
      v636 = (__int64 *)&v2565[v635];
      if ( (unsigned int)v635 > 0x2F )
        v636 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_285090(*(_QWORD *)&v2565[v2563], *v636);
    case 461LL:
      return (char *)(unsigned __int8)sub_285230(*(_QWORD *)&v2565[v2563]);
    case 462LL:
      v1194 = v2563 + 8;
      v1195 = (__int64 *)&v2565[v1194];
      if ( (unsigned int)v1194 > 0x2F )
        v1195 = (__int64 *)v2564;
      return (char *)sub_256D70(*(_QWORD *)&v2565[v2563], *v1195);
    case 463LL:
      v1656 = v2563 + 8;
      v1657 = (__int64 *)&v2565[v1656];
      if ( (unsigned int)v1656 > 0x2F )
        v1657 = (__int64 *)v2564;
      return (char *)sub_256E60(*(_QWORD *)&v2565[v2563], *v1657);
    case 464LL:
      v633 = v2563 + 8;
      v634 = (__int64 *)&v2565[v633];
      if ( (unsigned int)v633 > 0x2F )
        v634 = (__int64 *)v2564;
      return (char *)sub_25AFF0(*(_QWORD *)&v2565[v2563], *v634);
    case 465LL:
      v2140 = v2563 + 8;
      v2141 = (__int64 *)&v2565[v2140];
      if ( (unsigned int)v2140 > 0x2F )
        v2141 = (__int64 *)v2564;
      return (char *)sub_259AA0(*(_QWORD *)&v2565[v2563], *v2141);
    case 466LL:
      v1927 = v2563 + 8;
      v1928 = (__int64 *)&v2565[v1927];
      if ( (unsigned int)v1927 > 0x2F )
        v1928 = (__int64 *)v2564;
      sub_255850(*(__int64 **)&v2565[v2563], *v1928);
      return nullptr;
    case 467LL:
      sub_255630(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 468LL:
      v1310 = v2563;
      v1311 = v2563 + 8;
      v2563 = v1311;
      v1312 = *(_QWORD *)&v2565[v1310];
      if ( (unsigned int)v1311 > 0x2F )
      {
        v2450 = (__int64 *)v2564;
        v2451 = v2564 + 8;
        v2564 += 8;
        v1314 = *v2450;
      }
      else
      {
        v1313 = v1310 + 16;
        v1314 = *(_QWORD *)&v2565[v1311];
        if ( (unsigned int)v1313 <= 0x2F )
        {
          v1315 = v1310 + 24;
          v1316 = *(_QWORD *)&v2565[v1313];
          v2563 = v1315;
          if ( (unsigned int)v1315 <= 0x2F )
          {
            v1317 = v1310 + 32;
            v1318 = *(_DWORD *)&v2565[v1315];
            if ( (unsigned int)v1317 > 0x2F )
              v1319 = (unsigned int *)v2564;
            else
              v1319 = (unsigned int *)&v2565[v1317];
LABEL_1169:
            sub_240B90(v1312, v1314, v1316, v1318, *v1319);
            return nullptr;
          }
          v2453 = (unsigned int *)v2564;
LABEL_2101:
          v2454 = v2453;
          v1319 = v2453 + 2;
          v2564 = (char *)v1319;
          v1318 = *v2454;
          goto LABEL_1169;
        }
        v2451 = v2564;
      }
      v2452 = (__int64 *)v2451;
      v2453 = (unsigned int *)(v2451 + 8);
      v2564 = (char *)v2453;
      v1316 = *v2452;
      goto LABEL_2101;
    case 469LL:
      v2052 = v2563;
      v2053 = v2563 + 8;
      v2563 = v2053;
      v2054 = *(_QWORD *)&v2565[v2052];
      if ( (unsigned int)v2053 > 0x2F )
      {
        v2460 = (__int64 *)v2564;
        v2057 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v2056 = *v2460;
      }
      else
      {
        v2055 = v2052 + 16;
        v2056 = *(_QWORD *)&v2565[v2053];
        if ( (unsigned int)v2055 > 0x2F )
          v2057 = (__int64 *)v2564;
        else
          v2057 = (__int64 *)&v2565[v2055];
      }
      sub_267FE0(v2054, v2056, *v2057);
      return nullptr;
    case 470LL:
      v1724 = v2563 + 8;
      v1725 = *(_QWORD *)&v2565[v2563];
      v1726 = &v2565[v1724];
      if ( (unsigned int)v1724 > 0x2F )
        v1726 = v2564;
      v1727 = *(_DWORD *)v1726 != 0;
      v1728 = sub_339CA0();
      sub_2441C0(v1725, v1728, v1727);
      return nullptr;
    case 471LL:
      v763 = v2563 + 8;
      v764 = (__int64 *)&v2565[v763];
      if ( (unsigned int)v763 > 0x2F )
        v764 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_259AB0(*(_QWORD *)&v2565[v2563], *v764);
    case 472LL:
      v761 = v2563 + 8;
      v762 = (__int64 *)&v2565[v761];
      if ( (unsigned int)v761 > 0x2F )
        v762 = (__int64 *)v2564;
      return (char *)sub_256450(*(_QWORD *)&v2565[v2563], *v762);
    case 473LL:
      v2087 = v2563;
      v2088 = v2563 + 8;
      v2563 = v2088;
      v2089 = *(_QWORD *)&v2565[v2087];
      if ( (unsigned int)v2088 > 0x2F )
      {
        v2504 = (int *)v2564;
        v2092 = (int *)(v2564 + 8);
        v2564 += 8;
        v2091 = *v2504;
      }
      else
      {
        v2090 = v2087 + 16;
        v2091 = *(_DWORD *)&v2565[v2088];
        if ( (unsigned int)v2090 > 0x2F )
          v2092 = (int *)v2564;
        else
          v2092 = (int *)&v2565[v2090];
      }
      return (char *)(unsigned __int8)sub_285160(v2089, v2091, *v2092);
    case 474LL:
      v1846 = v2563 + 8;
      v1847 = *(_DWORD **)&v2565[v2563];
      v1848 = (__int64 *)&v2565[v1846];
      if ( (unsigned int)v1846 > 0x2F )
        v1848 = (__int64 *)v2564;
      v1849 = *v1848;
      v1850 = sub_339CA0();
      *v1847 = sub_285970(v1849, v1850);
      return nullptr;
    case 475LL:
      return (char *)(int)sub_285700(*(_QWORD *)&v2565[v2563]);
    case 476LL:
      v1065 = v2563 + 8;
      v1066 = (__int64 *)&v2565[v1065];
      if ( (unsigned int)v1065 > 0x2F )
        v1066 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_245010(*(_QWORD *)&v2565[v2563], *v1066);
    case 477LL:
      return (char *)(unsigned __int8)sub_256590(*(_QWORD *)&v2565[v2563]);
    case 478LL:
      v1572 = (__int64 *)&v2565[v2563];
      v2563 += 8;
      v1573 = *v1572;
      v1574 = sub_339CA0();
      LOBYTE(result) = 1;
      if ( *(_DWORD *)(v1573 + 8) == 61 )
      {
        v2522 = sub_255A30(*(__int64 **)(v1573 + 24));
        LOBYTE(result) = 0;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1574 + 96) + 24LL) + 16LL) >= v2522 )
          LOBYTE(result) = is_mapped();
      }
      return (char *)(unsigned __int8)result;
    case 479LL:
      return (char *)sub_1AEA30(*(_QWORD *)&v2565[v2563]);
    case 480LL:
      v393 = v2563 + 8;
      v394 = (__int64 *)&v2565[v393];
      if ( (unsigned int)v393 > 0x2F )
        v394 = (__int64 *)v2564;
      return (char *)sub_25B4D0(*(_QWORD *)&v2565[v2563], *v394);
    case 481LL:
      v838 = v2563 + 8;
      v839 = (__int64 *)&v2565[v838];
      if ( (unsigned int)v838 > 0x2F )
        v839 = (__int64 *)v2564;
      return (char *)sub_25A770(*(_QWORD *)&v2565[v2563], *v839);
    case 482LL:
      v836 = v2563 + 8;
      v837 = (__int64 *)&v2565[v836];
      if ( (unsigned int)v836 > 0x2F )
        v837 = (__int64 *)v2564;
      return (char *)sub_25B5B0(*(_QWORD *)&v2565[v2563], *v837, v2563, v836);
    case 483LL:
      v830 = v2563 + 8;
      v831 = (__int64 *)&v2565[v830];
      if ( (unsigned int)v830 > 0x2F )
        v831 = (__int64 *)v2564;
      return (char *)sub_25A320(*(_QWORD *)&v2565[v2563], *v831);
    case 484LL:
      v828 = v2563 + 8;
      v829 = (__int64 *)&v2565[v828];
      if ( (unsigned int)v828 > 0x2F )
        v829 = (__int64 *)v2564;
      return (char *)sub_25A730(*(_QWORD *)&v2565[v2563], *v829);
    case 485LL:
      v834 = v2563 + 8;
      v835 = (__int64 *)&v2565[v834];
      if ( (unsigned int)v834 > 0x2F )
        v835 = (__int64 *)v2564;
      return (char *)sub_25A6F0(*(_QWORD *)&v2565[v2563], *v835);
    case 486LL:
      v832 = v2563 + 8;
      v833 = (__int64 *)&v2565[v832];
      if ( (unsigned int)v832 > 0x2F )
        v833 = (__int64 *)v2564;
      return (char *)sub_25A210(*(_QWORD *)&v2565[v2563], *v833);
    case 487LL:
      v826 = v2563 + 8;
      v827 = (__int64 *)&v2565[v826];
      if ( (unsigned int)v826 > 0x2F )
        v827 = (__int64 *)v2564;
      return (char *)sub_25A310(*(_QWORD *)&v2565[v2563], *v827);
    case 488LL:
      v824 = v2563 + 8;
      v825 = &v2565[v824];
      if ( (unsigned int)v824 > 0x2F )
        v825 = v2564;
      return (char *)(int)sub_2569D0(*(_DWORD **)&v2565[v2563], *(_DWORD **)v825);
    case 489LL:
      v1696 = v2563 + 8;
      v1697 = (unsigned __int64 ***)&v2565[v1696];
      if ( (unsigned int)v1696 > 0x2F )
        v1697 = (unsigned __int64 ***)v2564;
      return (char *)(int)sub_2569F0(*(unsigned __int64 ***)&v2565[v2563], *v1697);
    case 490LL:
      v1493 = v2563 + 8;
      v1494 = (__int64 *)&v2565[v1493];
      if ( (unsigned int)v1493 > 0x2F )
        v1494 = (__int64 *)v2564;
      return (char *)sub_25AA70(*(_QWORD *)&v2565[v2563], *v1494);
    case 491LL:
      v1495 = v2563 + 8;
      v1496 = (__int64 *)&v2565[v1495];
      if ( (unsigned int)v1495 > 0x2F )
        v1496 = (__int64 *)v2564;
      return (char *)(int)sub_2596A0(*(_QWORD *)&v2565[v2563], *v1496);
    case 492LL:
      v1139 = v2563 + 8;
      v1140 = (__int64 *)&v2565[v1139];
      if ( (unsigned int)v1139 > 0x2F )
        v1140 = (__int64 *)v2564;
      sub_255580(*(__int64 **)&v2565[v2563], *v1140);
      return nullptr;
    case 493LL:
      sub_255050(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 494LL:
      v1361 = v2563 + 8;
      v1362 = (__int64 *)&v2565[v1361];
      if ( (unsigned int)v1361 > 0x2F )
        v1362 = (__int64 *)v2564;
      return (char *)sub_2413C0(*(_QWORD *)&v2565[v2563], *v1362, v2563, v1361);
    case 495LL:
      v1621 = v2563 + 8;
      v1622 = (__int64 *)&v2565[v1621];
      if ( (unsigned int)v1621 > 0x2F )
        v1622 = (__int64 *)v2564;
      return (char *)sub_241920(*(_QWORD *)&v2565[v2563], *v1622, v2563, v1621);
    case 496LL:
      v461 = v2563;
      v462 = v2563 + 8;
      v463 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v462 > 0x2F )
      {
        v2447 = (unsigned int *)v2564;
        v2448 = v2564 + 8;
        v2564 += 8;
        v465 = *v2447;
      }
      else
      {
        v464 = v2563 + 16;
        v465 = *(_DWORD *)&v2565[v462];
        v2563 = v464;
        if ( (unsigned int)v464 <= 0x2F )
        {
          v466 = v461 + 24;
          v467 = *(_QWORD **)&v2565[v464];
          if ( (unsigned int)v466 > 0x2F )
            v468 = (unsigned int *)v2564;
          else
            v468 = (unsigned int *)&v2565[v466];
LABEL_409:
          sub_268570(v463, v465, v467, *v468);
          return nullptr;
        }
        v2448 = v2564;
      }
      v2449 = v2448;
      v468 = (unsigned int *)(v2448 + 8);
      v2564 = (char *)v468;
      v467 = *(_QWORD **)v2449;
      goto LABEL_409;
    case 497LL:
      v1481 = v2563;
      v1482 = v2563 + 8;
      v2563 = v1482;
      v1483 = *(_QWORD *)&v2565[v1481];
      if ( (unsigned int)v1482 > 0x2F )
      {
        v2208 = (__int64 *)v2564;
        v1486 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v1485 = *v2208;
      }
      else
      {
        v1484 = v1481 + 16;
        v1485 = *(_QWORD *)&v2565[v1482];
        if ( (unsigned int)v1484 > 0x2F )
          v1486 = (__int64 *)v2564;
        else
          v1486 = (__int64 *)&v2565[v1484];
      }
      sub_2696A0(v1483, v1485, *v1486);
      return nullptr;
    case 498LL:
      return (char *)(unsigned __int8)sub_241B40(*(_QWORD *)&v2565[v2563], (__int64)a2, a3, a4, a5);
    case 499LL:
      v1487 = v2563;
      v1488 = v2563 + 8;
      v2563 = v1488;
      v1489 = *(_QWORD *)&v2565[v1487];
      if ( (unsigned int)v1488 > 0x2F )
      {
        v2371 = (int *)v2564;
        v1492 = (int *)(v2564 + 8);
        v2564 += 8;
        v1491 = *v2371;
      }
      else
      {
        v1490 = v1487 + 16;
        v1491 = *(_DWORD *)&v2565[v1488];
        if ( (unsigned int)v1490 > 0x2F )
          v1492 = (int *)v2564;
        else
          v1492 = (int *)&v2565[v1490];
      }
      return (char *)(unsigned __int8)sub_2853C0(v1489, v1491, *v1492);
    case 500LL:
      v1244 = v2563 + 8;
      v1245 = (__int64 *)&v2565[v1244];
      if ( (unsigned int)v1244 > 0x2F )
        v1245 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_285490(*(_QWORD *)&v2565[v2563], *v1245);
    case 501LL:
      v1477 = v2563 + 8;
      v1478 = (__int64 *)&v2565[v1477];
      if ( (unsigned int)v1477 > 0x2F )
        v1478 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_285570(*(_QWORD *)&v2565[v2563], *v1478);
    case 502LL:
      return (char *)sub_1AEAE0(*(_QWORD *)&v2565[v2563]);
    case 503LL:
      v1479 = v2563 + 8;
      v1480 = &v2565[v1479];
      if ( (unsigned int)v1479 > 0x2F )
        v1480 = v2564;
      return (char *)(int)sub_25A4C0(*(_QWORD ***)&v2565[v2563], *(_QWORD ***)v1480);
    case 504LL:
      v660 = v2563 + 8;
      v661 = (__int64 **)&v2565[v660];
      if ( (unsigned int)v660 > 0x2F )
        v661 = (__int64 **)v2564;
      return (char *)sub_25A2C0(*(__int64 **)&v2565[v2563], *v661);
    case 505LL:
      v994 = v2563 + 8;
      v995 = (__int64 *)&v2565[v994];
      if ( (unsigned int)v994 > 0x2F )
        v995 = (__int64 *)v2564;
      return (char *)(int)sub_25A390(*(_QWORD *)&v2565[v2563], *v995);
    case 506LL:
      v992 = v2563 + 8;
      v993 = (__int64 **)&v2565[v992];
      if ( (unsigned int)v992 > 0x2F )
        v993 = (__int64 **)v2564;
      return (char *)(int)sub_259690(*(__int64 **)&v2565[v2563], *v993);
    case 507LL:
      v990 = v2563 + 8;
      v991 = (__int64 *)&v2565[v990];
      if ( (unsigned int)v990 > 0x2F )
        v991 = (__int64 *)v2564;
      return (char *)sub_25A2D0(*(_QWORD *)&v2565[v2563], *v991);
    case 508LL:
      v988 = v2563 + 8;
      v989 = (__int64 *)&v2565[v988];
      if ( (unsigned int)v988 > 0x2F )
        v989 = (__int64 *)v2564;
      return (char *)sub_25A4D0(*(_QWORD *)&v2565[v2563], *v989);
    case 509LL:
      v1004 = v2563 + 8;
      v1005 = (__int64 *)&v2565[v1004];
      if ( (unsigned int)v1004 > 0x2F )
        v1005 = (__int64 *)v2564;
      return (char *)sub_25A5D0(*(_QWORD *)&v2565[v2563], *v1005);
    case 510LL:
      v996 = v2563;
      v997 = v2563 + 8;
      v998 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v997 > 0x2F )
      {
        v2293 = (__int128 **)v2564;
        v2544 = v2564 + 8;
        v2564 += 8;
        v1000 = *v2293;
      }
      else
      {
        v999 = v2563 + 16;
        v1000 = *(__int128 **)&v2565[v997];
        v2563 = v999;
        if ( (unsigned int)v999 <= 0x2F )
        {
          v1001 = v996 + 24;
          v1002 = *(_QWORD **)&v2565[v999];
          if ( (unsigned int)v1001 > 0x2F )
            v1003 = (__int64 **)v2564;
          else
            v1003 = (__int64 **)&v2565[v1001];
          return (char *)(int)sub_38D3D0(v998, v1000, v1002, *v1003);
        }
        v2544 = v2564;
      }
      v2294 = v2544;
      v1003 = (__int64 **)(v2544 + 8);
      v2564 = (char *)v1003;
      v1002 = *(_QWORD **)v2294;
      return (char *)(int)sub_38D3D0(v998, v1000, v1002, *v1003);
    case 511LL:
      return (char *)(int)sub_38D130(*(_QWORD *)&v2565[v2563]);
    case 512LL:
      return (char *)sub_38D720(*(_QWORD *)&v2565[v2563]);
    case 513LL:
      v371 = v2563 + 8;
      v373 = (__int64 *)&v2565[v371];
      if ( (unsigned int)v371 > 0x2F )
        v373 = (__int64 *)v2564;
      v372 = *(__int64 **)&v2565[v2563];
      *v372 = sub_38D760(*v373);
      return nullptr;
    case 514LL:
      v317 = v2563 + 8;
      v318 = &v2565[v317];
      if ( (unsigned int)v317 > 0x2F )
        v318 = v2564;
      return (char *)(int)sub_38D7A0(*(_QWORD *)&v2565[v2563], *(_DWORD *)v318);
    case 515LL:
      v319 = v2563 + 8;
      v320 = (__int64 **)&v2565[v319];
      if ( (unsigned int)v319 > 0x2F )
        v320 = (__int64 **)v2564;
      sub_1B6400(*(_QWORD *)&v2565[v2563], *v320);
      return nullptr;
    case 516LL:
      return (char *)sub_1B6740(*(_QWORD *)&v2565[v2563]);
    case 517LL:
      v346 = *(_QWORD *)&v2565[v2563];
      v347 = sub_339CA0();
      return (char *)sub_244460(v347, v346, v348, v349, v350);
    case 518LL:
      return (char *)sub_241330((unsigned int)a1, (__int64)a2, a3, a4);
    case 519LL:
      v158 = v2563;
      v159 = *(_DWORD *)&v2565[v2563] != 0;
      if ( v2563 + 8 > 0x2F )
      {
        v2313 = v2564 + 8;
        v2564 += 8;
      }
      else
      {
        v2563 += 16;
        if ( v158 + 16 <= 0x2F )
        {
          v160 = v158 + 24;
          if ( (unsigned int)v160 > 0x2F )
            v161 = v2564;
          else
            v161 = &v2565[v160];
LABEL_141:
          v162 = *(const __m128i **)v161;
          v2566 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v161);
          v2567 = v162[1].m128i_i64[0];
          return (char *)sub_2425F0(v159);
        }
        v2313 = v2564;
      }
      v161 = v2313 + 8;
      v2564 = v161;
      goto LABEL_141;
    case 520LL:
      v151 = v2563;
      v152 = v2563 + 8;
      v153 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v152 > 0x2F )
      {
        v2342 = (__int64 *)v2564;
        v2538 = v2564 + 8;
        v2564 += 8;
        v154 = *v2342;
      }
      else
      {
        v154 = *(_QWORD *)&v2565[v152];
        v2563 += 16;
        if ( v151 + 16 <= 0x2F )
        {
          v155 = v151 + 24;
          if ( (unsigned int)v155 > 0x2F )
            v156 = v2564;
          else
            v156 = &v2565[v155];
LABEL_136:
          v157 = *(const __m128i **)v156;
          v2566 = _mm_loadu_si128((const __m128i *)*(_QWORD *)v156);
          v2567 = v157[1].m128i_i64[0];
          return (char *)sub_2456C0(v153, v154);
        }
        v2538 = v2564;
      }
      v156 = v2538 + 8;
      v2564 = v156;
      goto LABEL_136;
    case 521LL:
      v353 = v2563;
      v354 = v2563 + 8;
      v355 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v354 > 0x2F )
      {
        v2327 = (__int64 *)v2564;
        v2539 = v2564 + 8;
        v2564 += 8;
        v357 = *v2327;
      }
      else
      {
        v356 = v2563 + 16;
        v357 = *(_QWORD *)&v2565[v354];
        v2563 = v356;
        if ( (unsigned int)v356 <= 0x2F )
        {
          v358 = v353 + 24;
          v359 = *(_QWORD *)&v2565[v356];
          if ( (unsigned int)v358 <= 0x2F )
          {
            v360 = v353 + 32;
            v361 = *(_DWORD *)&v2565[v358];
            v2563 = v360;
            if ( (unsigned int)v360 <= 0x2F )
            {
              v362 = v353 + 40;
              v363 = *(_DWORD *)&v2565[v360];
              if ( (unsigned int)v362 > 0x2F )
                v364 = (unsigned int *)v2564;
              else
                v364 = (unsigned int *)&v2565[v362];
              return (char *)sub_241030(v355, v357, v359, v361, v363, *v364);
            }
            v2331 = (unsigned int *)v2564;
LABEL_2044:
            v2332 = v2331;
            v364 = v2331 + 2;
            v2564 = (char *)v364;
            v363 = *v2332;
            return (char *)sub_241030(v355, v357, v359, v361, v363, *v364);
          }
          v2329 = v2564;
LABEL_2043:
          v2330 = v2329;
          v2331 = (unsigned int *)(v2329 + 8);
          v2564 = (char *)v2331;
          v361 = *(_DWORD *)v2330;
          goto LABEL_2044;
        }
        v2539 = v2564;
      }
      v2328 = (__int64 *)v2539;
      v2329 = v2539 + 8;
      v2564 = v2329;
      v359 = *v2328;
      goto LABEL_2043;
    case 522LL:
      v299 = *(_QWORD *)&v2565[v2563];
      v300 = sub_339CA0();
      return (char *)sub_247510(v300, v299, v301, v302);
    case 523LL:
      v331 = v2563;
      v332 = v2563 + 8;
      v2563 = v332;
      v333 = *(_QWORD *)&v2565[v331];
      if ( (unsigned int)v332 > 0x2F )
      {
        v2324 = v2564;
        v336 = v2564 + 8;
        v2564 += 8;
        v335 = *(_DWORD *)v2324;
      }
      else
      {
        v334 = v331 + 16;
        v335 = *(_DWORD *)&v2565[v332];
        if ( (unsigned int)v334 > 0x2F )
          v336 = v2564;
        else
          v336 = &v2565[v334];
      }
      v337 = *(_DWORD *)v336 != 0;
      v338 = sub_339CA0();
      return (char *)sub_244320(v338, v333, v335, v337, v339, v340);
    case 524LL:
      v208 = v2563;
      v209 = v2563 + 8;
      v2563 = v209;
      v210 = *(_QWORD *)&v2565[v208];
      if ( (unsigned int)v209 > 0x2F )
      {
        v2314 = (__int64 *)v2564;
        v213 = v2564 + 8;
        v2564 += 8;
        v212 = *v2314;
      }
      else
      {
        v211 = v208 + 16;
        v212 = *(_QWORD *)&v2565[v209];
        if ( (unsigned int)v211 > 0x2F )
          v213 = v2564;
        else
          v213 = &v2565[v211];
      }
      v214 = *(_QWORD **)v213;
      v215 = sub_339CA0();
      sub_2B6570(v215, v210, v212, v214);
      return nullptr;
    case 525LL:
      v112 = v2563 + 8;
      v113 = *(_QWORD *)&v2565[v2563];
      v114 = (__int64 *)&v2565[v112];
      if ( (unsigned int)v112 > 0x2F )
        v114 = (__int64 *)v2564;
      v115 = *v114;
      v116 = sub_339CA0();
      sub_2B6650(v116, v113, v115);
      return nullptr;
    case 526LL:
      v107 = v2563 + 8;
      v108 = *(_QWORD *)&v2565[v2563];
      v109 = (__int64 *)&v2565[v107];
      if ( (unsigned int)v107 > 0x2F )
        v109 = (__int64 *)v2564;
      v110 = *v109;
      v111 = sub_339CA0();
      sub_2B6710(v111, v108, v110);
      return nullptr;
    case 527LL:
      v246 = v2563 + 8;
      v247 = *(_QWORD *)&v2565[v2563];
      v248 = (__int64 *)&v2565[v246];
      if ( (unsigned int)v246 > 0x2F )
        v248 = (__int64 *)v2564;
      v249 = *v248;
      v250 = sub_339CA0();
      sub_2B6880(v250, v247, v249);
      return nullptr;
    case 528LL:
      v102 = v2563 + 8;
      v103 = *(_QWORD *)&v2565[v2563];
      v104 = (__int64 *)&v2565[v102];
      if ( (unsigned int)v102 > 0x2F )
        v104 = (__int64 *)v2564;
      v105 = *v104;
      v106 = sub_339CA0();
      sub_2B7C90(v106, v103, v105);
      return nullptr;
    case 529LL:
      v341 = v2563 + 8;
      v342 = *(_QWORD *)&v2565[v2563];
      v343 = &v2565[v341];
      if ( (unsigned int)v341 > 0x2F )
        v343 = v2564;
      v344 = *(_QWORD **)v343;
      v345 = sub_339CA0();
      return (char *)sub_2B65E0(v345, v342, v344);
    case 530LL:
      v309 = *(_QWORD *)&v2565[v2563];
      v310 = sub_339CA0();
      return (char *)sub_2B66B0(v310, v309);
    case 531LL:
      v220 = *(_QWORD *)&v2565[v2563];
      v221 = sub_339CA0();
      return (char *)sub_2B6820(v221, v220);
    case 532LL:
      v218 = *(_QWORD *)&v2565[v2563];
      v219 = sub_339CA0();
      return (char *)sub_2B68E0(v219, v218);
    case 533LL:
      v147 = *(_QWORD *)&v2565[v2563];
      v148 = sub_339CA0();
      return (char *)sub_2B7CF0(v148, v147);
    case 534LL:
      sub_2523C0(*(_QWORD *)&v2565[v2563], (__int64)a2, a3, a4);
      return nullptr;
    case 535LL:
      v267 = v2563;
      v268 = v2563 + 8;
      v2563 = v268;
      v269 = *(_QWORD *)&v2565[v267];
      if ( (unsigned int)v268 > 0x2F )
      {
        v2307 = (int *)v2564;
        v272 = v2564 + 8;
        v2564 += 8;
        v271 = *v2307;
      }
      else
      {
        v270 = v267 + 16;
        v271 = *(_DWORD *)&v2565[v268];
        if ( (unsigned int)v270 > 0x2F )
          v272 = v2564;
        else
          v272 = &v2565[v270];
      }
      sub_3252D0(v269, v271, *(_DWORD *)v272 != 0);
      return nullptr;
    case 536LL:
      v145 = v2563 + 8;
      v146 = (__int64 **)&v2565[v145];
      if ( (unsigned int)v145 > 0x2F )
        v146 = (__int64 **)v2564;
      sub_263810(*(_QWORD *)&v2565[v2563], *v146, v2563, v145);
      return nullptr;
    case 537LL:
      v329 = v2563 + 8;
      v330 = (__int64 *)&v2565[v329];
      if ( (unsigned int)v329 > 0x2F )
        v330 = (__int64 *)v2564;
      sub_268FA0(*(_QWORD *)&v2565[v2563], *v330);
      return nullptr;
    case 538LL:
      return (char *)(unsigned __int8)sub_3767A0(*(_QWORD *)(*(_QWORD *)&v2565[v2563] + 8LL));
    case 539LL:
      return (char *)(*(_QWORD *)(*(_QWORD *)&v2565[v2563] + 8LL) + 432LL);
    case 540LL:
      v187 = v2563 + 8;
      v188 = &v2565[v187];
      if ( (unsigned int)v187 > 0x2F )
        v188 = v2564;
      **(_QWORD **)&v2565[v2563] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v188 + 8LL) + 80LL);
      return nullptr;
    case 541LL:
      v236 = v2563 + 8;
      v237 = (int *)&v2565[v236];
      if ( (unsigned int)v236 > 0x2F )
        v237 = (int *)v2564;
      return (char *)sub_2582A0(*(_QWORD *)&v2565[v2563], *v237);
    case 542LL:
      sub_2585C0(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 543LL:
      v90 = v2563;
      v91 = v2563 + 8;
      v2563 = v91;
      v92 = *(_QWORD *)&v2565[v90];
      if ( (unsigned int)v91 > 0x2F )
      {
        v2320 = (unsigned __int64 **)v2564;
        v95 = (int *)(v2564 + 8);
        v2564 += 8;
        v94 = *v2320;
      }
      else
      {
        v93 = v90 + 16;
        v94 = *(unsigned __int64 **)&v2565[v91];
        if ( (unsigned int)v93 > 0x2F )
          v95 = (int *)v2564;
        else
          v95 = (int *)&v2565[v93];
      }
      return (char *)sub_257AF0(v92, v94, *v95);
    case 544LL:
      v84 = v2563;
      v85 = v2563 + 8;
      v2563 = v85;
      v86 = *(_QWORD *)&v2565[v84];
      if ( (unsigned int)v85 > 0x2F )
      {
        v2341 = (const __m128i **)v2564;
        v89 = (const char **)(v2564 + 8);
        v2564 += 8;
        v88 = *v2341;
      }
      else
      {
        v87 = v84 + 16;
        v88 = *(const __m128i **)&v2565[v85];
        if ( (unsigned int)v87 > 0x2F )
          v89 = (const char **)v2564;
        else
          v89 = (const char **)&v2565[v87];
      }
      sub_25C730(v86, v88, *v89, v85, a5, (int)a6);
      return nullptr;
    case 545LL:
      v351 = v2563 + 8;
      v352 = (unsigned __int64 **)&v2565[v351];
      if ( (unsigned int)v351 > 0x2F )
        v352 = (unsigned __int64 **)v2564;
      return (char *)(int)sub_257EA0(*(_QWORD *)&v2565[v2563], *v352);
    case 546LL:
      v311 = v2563;
      v312 = v2563 + 8;
      v2563 = v312;
      v313 = *(_QWORD *)&v2565[v311];
      if ( (unsigned int)v312 > 0x2F )
      {
        v2356 = (const __m128i **)v2564;
        v316 = (int *)(v2564 + 8);
        v2564 += 8;
        v315 = *v2356;
      }
      else
      {
        v314 = v311 + 16;
        v315 = *(const __m128i **)&v2565[v312];
        if ( (unsigned int)v314 > 0x2F )
          v316 = (int *)v2564;
        else
          v316 = (int *)&v2565[v314];
      }
      sub_25D910(v313, v315, *v316);
      return nullptr;
    case 547LL:
      return (char *)(unsigned __int8)sub_255960(*(_QWORD *)&v2565[v2563]);
    case 548LL:
      return (char *)(int)sub_25C270(*(_QWORD *)&v2565[v2563]);
    case 549LL:
      v365 = v2563;
      v366 = v2563 + 8;
      v2563 = v366;
      v367 = *(_QWORD *)&v2565[v365];
      if ( (unsigned int)v366 > 0x2F )
      {
        v2339 = (unsigned __int64 *)v2564;
        v370 = (__int64 **)(v2564 + 8);
        v2564 += 8;
        v369 = *v2339;
      }
      else
      {
        v368 = v365 + 16;
        v369 = *(_QWORD *)&v2565[v366];
        if ( (unsigned int)v368 > 0x2F )
          v370 = (__int64 **)v2564;
        else
          v370 = (__int64 **)&v2565[v368];
      }
      return (char *)(unsigned __int8)sub_257F10(v367, v369, *v370, v366);
    case 550LL:
      v275 = v2563;
      v276 = v2563 + 8;
      v2563 = v276;
      v277 = *(_QWORD *)&v2565[v275];
      if ( (unsigned int)v276 > 0x2F )
      {
        v2312 = (__int64 *)v2564;
        v280 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v279 = *v2312;
      }
      else
      {
        v278 = v275 + 16;
        v279 = *(_QWORD *)&v2565[v276];
        if ( (unsigned int)v278 > 0x2F )
          v280 = (__int64 *)v2564;
        else
          v280 = (__int64 *)&v2565[v278];
      }
      sub_25E960(v277, v279, *v280);
      return nullptr;
    case 551LL:
      sub_2B6570(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2565[v2563] + 216LL) + 112LL),
        **(_QWORD **)&v2565[v2563],
        *(_QWORD *)(*(_QWORD *)&v2565[v2563] + 64LL),
        *(_QWORD **)&v2565[v2563]);
      return nullptr;
    case 552LL:
      sub_2B6650(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2565[v2563] + 216LL) + 112LL),
        **(_QWORD **)&v2565[v2563],
        *(_QWORD *)(*(_QWORD *)&v2565[v2563] + 72LL));
      return nullptr;
    case 553LL:
      sub_2B6710(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2565[v2563] + 216LL) + 112LL),
        **(_QWORD **)&v2565[v2563],
        *(_QWORD *)(*(_QWORD *)&v2565[v2563] + 80LL));
      return nullptr;
    case 554LL:
      sub_2B6880(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2565[v2563] + 216LL) + 112LL),
        **(_QWORD **)&v2565[v2563],
        *(_QWORD *)(*(_QWORD *)&v2565[v2563] + 88LL));
      return nullptr;
    case 555LL:
      sub_2B7C90(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v2565[v2563] + 216LL) + 112LL),
        **(_QWORD **)&v2565[v2563],
        *(_QWORD *)(*(_QWORD *)&v2565[v2563] + 96LL));
      return nullptr;
    case 556LL:
      v195 = v2563;
      v196 = v2563 + 8;
      v2563 = v196;
      v197 = *(_QWORD *)&v2565[v195];
      if ( (unsigned int)v196 > 0x2F )
      {
        v2344 = v2564;
        v2540 = v2564 + 8;
        v2564 += 8;
        v199 = *(_BYTE **)v2344;
      }
      else
      {
        v198 = v195 + 16;
        v199 = *(_BYTE **)&v2565[v196];
        if ( (unsigned int)v198 <= 0x2F )
        {
          v200 = v195 + 24;
          v201 = *(_DWORD *)&v2565[v198];
          v2563 = v200;
          if ( (unsigned int)v200 <= 0x2F )
          {
            v202 = v195 + 32;
            v203 = *(_DWORD *)&v2565[v200] != 0;
            if ( (unsigned int)v202 <= 0x2F )
            {
              v204 = v195 + 40;
              v205 = *(_QWORD *)&v2565[v202];
              v2563 = v204;
              if ( (unsigned int)v204 <= 0x2F )
              {
                v206 = *(_QWORD *)&v2565[v204];
                v207 = (__int64 *)v2564;
                return (char *)sub_38A790(v197, v199, v201, v203, v205, v206, *v207);
              }
              v2350 = (__int64 *)v2564;
LABEL_2051:
              v2351 = v2350;
              v207 = v2350 + 1;
              v2564 = (char *)v207;
              v206 = *v2351;
              return (char *)sub_38A790(v197, v199, v201, v203, v205, v206, *v207);
            }
            v2348 = (__int64 *)v2564;
LABEL_2050:
            v2349 = v2348;
            v2350 = v2348 + 1;
            v2564 = (char *)v2350;
            v205 = *v2349;
            goto LABEL_2051;
          }
          v2346 = v2564;
LABEL_2049:
          v2347 = v2346;
          v2348 = (__int64 *)(v2346 + 8);
          v2564 = (char *)v2348;
          v203 = *(_DWORD *)v2347 != 0;
          goto LABEL_2050;
        }
        v2540 = v2564;
      }
      v2345 = (int *)v2540;
      v2346 = v2540 + 8;
      v2564 = v2346;
      v201 = *v2345;
      goto LABEL_2049;
    case 557LL:
      return (char *)(*(_QWORD *)(*(_QWORD *)&v2565[v2563] + 8LL) + 728LL);
    case 558LL:
      return (char *)sub_258010(*(_QWORD *)&v2565[v2563]);
    case 559LL:
      return (char *)sub_258020(*(_QWORD *)&v2565[v2563]);
    case 560LL:
      return (char *)sub_2581E0(*(_QWORD *)&v2565[v2563], (__int64)a2, a3);
    case 561LL:
      sub_390160(*(__int64 **)&v2565[v2563], (__int64)a2, a3);
      return nullptr;
    case 562LL:
      v303 = v2563;
      v304 = v2563 + 8;
      v2563 = v304;
      v305 = *(_QWORD *)&v2565[v303];
      if ( (unsigned int)v304 > 0x2F )
      {
        v2336 = (__int64 *)v2564;
        v308 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v307 = *v2336;
      }
      else
      {
        v306 = v303 + 16;
        v307 = *(_QWORD *)&v2565[v304];
        if ( (unsigned int)v306 > 0x2F )
          v308 = (__int64 *)v2564;
        else
          v308 = (__int64 *)&v2565[v306];
      }
      return (char *)(unsigned __int8)sub_2574C0(v305, v307, *v308);
    case 563LL:
      v321 = v2563;
      v322 = v2563 + 8;
      v323 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v322 > 0x2F )
      {
        v2333 = (__int64 *)v2564;
        v2334 = v2564 + 8;
        v2564 += 8;
        v325 = *v2333;
      }
      else
      {
        v324 = v2563 + 16;
        v325 = *(_QWORD *)&v2565[v322];
        v2563 = v324;
        if ( (unsigned int)v324 <= 0x2F )
        {
          v326 = v321 + 24;
          v327 = *(_DWORD **)&v2565[v324];
          if ( (unsigned int)v326 > 0x2F )
            v328 = v2564;
          else
            v328 = &v2565[v326];
          return (char *)(unsigned __int8)sub_38BD60(v323, v325, v327, *(_DWORD **)v328, *(double *)a7.m128_u64);
        }
        v2334 = v2564;
      }
      v2335 = v2334;
      v328 = v2334 + 8;
      v2564 = v328;
      v327 = *(_DWORD **)v2335;
      return (char *)(unsigned __int8)sub_38BD60(v323, v325, v327, *(_DWORD **)v328, *(double *)a7.m128_u64);
    case 564LL:
      sub_258970(*(__int64 **)&v2565[v2563]);
      return nullptr;
    case 565LL:
      v132 = sub_339CA0();
      sub_137630(
        v132,
        (__int64)a2,
        v133,
        v134,
        v135,
        v136,
        v2556.m128i_i64[0],
        v2556.m128i_i64[1],
        v2557.m128i_i64[0],
        v2557.m128i_i64[1]);
      return nullptr;
    case 566LL:
      v125 = v2563;
      v126 = v2563 + 8;
      v2563 = v126;
      v127 = *(_QWORD **)&v2565[v125];
      if ( (unsigned int)v126 > 0x2F )
      {
        v2315 = v2564;
        v130 = (int *)(v2564 + 8);
        v2564 += 8;
        v129 = *(_DWORD **)v2315;
      }
      else
      {
        v128 = v125 + 16;
        v129 = *(_DWORD **)&v2565[v126];
        if ( (unsigned int)v128 > 0x2F )
          v130 = (int *)v2564;
        else
          v130 = (int *)&v2565[v128];
      }
      v131 = *v130;
      v123 = sub_339CA0();
      sub_14CDC0((__int64 *)v2561, v123, v127, v129, v131);
      v124 = *(_QWORD *)v2561;
      if ( *(_QWORD *)v2561 )
        ++*(_DWORD *)(*(_QWORD *)v2561 + 104LL);
      goto LABEL_102;
    case 567LL:
      v253 = v2563;
      v254 = v2563 + 8;
      v2563 = v254;
      v255 = *(_QWORD **)&v2565[v253];
      if ( (unsigned int)v254 > 0x2F )
      {
        v2308 = (__int64 *)v2564;
        v2543 = v2564 + 8;
        v2564 += 8;
        v257 = *v2308;
      }
      else
      {
        v256 = v253 + 16;
        v257 = *(_QWORD *)&v2565[v254];
        if ( (unsigned int)v256 <= 0x2F )
        {
          v258 = v253 + 24;
          v259 = *(_QWORD *)&v2565[v256];
          v2563 = v258;
          if ( (unsigned int)v258 <= 0x2F )
          {
            v260 = v253 + 32;
            v261 = *(_DWORD *)&v2565[v258];
            if ( (unsigned int)v260 > 0x2F )
              v262 = v2564;
            else
              v262 = &v2565[v260];
LABEL_237:
            v263 = *(_DWORD *)v262;
            v264 = sub_339CA0();
            return (char *)sub_14CE10(v264, v255, v257, v259, v261, v263);
          }
          v2310 = v2564;
LABEL_2038:
          v2311 = v2310;
          v262 = v2310 + 8;
          v2564 = v262;
          v261 = *(_DWORD *)v2311;
          goto LABEL_237;
        }
        v2543 = v2564;
      }
      v2309 = (__int64 *)v2543;
      v2310 = v2543 + 8;
      v2564 = v2310;
      v259 = *v2309;
      goto LABEL_2038;
    case 568LL:
      v123 = *(_QWORD *)&v2565[v2563];
      sub_2572A0((__int64 **)v2561, v123, a3, a4);
      v124 = *(_QWORD *)v2561;
      if ( *(_QWORD *)v2561 )
        ++*(_DWORD *)(*(_QWORD *)v2561 + 104LL);
LABEL_102:
      v2556.m128i_i64[0] = v124;
      sub_140140(v2561, v123);
      return (char *)v2556.m128i_i64[0];
    case 569LL:
      v178 = v2563 + 8;
      v179 = *(_QWORD *)&v2565[v2563];
      v180 = &v2565[v178];
      if ( (unsigned int)v178 > 0x2F )
        v180 = v2564;
      v181 = *(_DWORD *)v180 != 0;
      v182 = sub_339CA0();
      return (char *)(unsigned __int8)sub_147D70(v182, v179, v181);
    case 570LL:
      v177 = sub_339CA0();
      sub_1469A0(v177, (__int64)a2);
      return nullptr;
    case 571LL:
      v297 = *(_QWORD *)&v2565[v2563];
      v298 = sub_339CA0();
      return (char *)sub_13DCA0(v298, v297);
    case 572LL:
      return (char *)sub_260470(*(_DWORD *)&v2565[v2563]);
    case 573LL:
      v72 = v2563;
      v73 = v2563 + 8;
      v2563 = v73;
      v74 = *(__int64 **)&v2565[v72];
      if ( (unsigned int)v73 > 0x2F )
      {
        v2340 = (__int64 *)v2564;
        v77 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v76 = *v2340;
      }
      else
      {
        v75 = v72 + 16;
        v76 = *(_QWORD *)&v2565[v73];
        v2563 = v75;
        if ( (unsigned int)v75 <= 0x2F )
        {
          v77 = (__int64 *)&v2565[v75];
          v2563 = v72 + 24;
          goto LABEL_64;
        }
        v77 = (__int64 *)v2564;
      }
      v2564 = (char *)(v77 + 1);
LABEL_64:
      sub_32BAA0((__int64)v2561, v76, *v77);
      v78 = *(_QWORD *)v2561;
      v79 = _mm_loadu_si128((const __m128i *)&v2561[8]);
      memset(v2561, 0, 24);
      v80 = *v74;
      if ( *v74 )
      {
        v2556 = v79;
        v74[1] = 0;
        qfree(v80);
        v79 = _mm_load_si128(&v2556);
      }
      *v74 = v78;
      *(__m128i *)(v74 + 1) = v79;
      v81 = *(_QWORD *)v2561;
      if ( *(_QWORD *)v2561 )
      {
LABEL_67:
        *(_QWORD *)&v2561[8] = 0;
        qfree(v81);
      }
      return nullptr;
    case 574LL:
      v70 = v2563 + 8;
      v71 = (__int64 *)&v2565[v70];
      if ( (unsigned int)v70 > 0x2F )
        v71 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_33DF40(*(_QWORD *)&v2565[v2563], *v71);
    case 575LL:
      v224 = v2563 + 8;
      v225 = (__int64 *)&v2565[v224];
      if ( (unsigned int)v224 > 0x2F )
        v225 = (__int64 *)v2564;
      return (char *)(int)sub_33E110(*(_QWORD *)&v2565[v2563], *v225);
    case 576LL:
      v68 = v2563 + 8;
      v69 = &v2565[v68];
      if ( (unsigned int)v68 > 0x2F )
        v69 = v2564;
      return (char *)(unsigned __int8)sub_395D60(
                                        *(_QWORD *)&v2565[v2563],
                                        *(_DWORD *)v69 != 0,
                                        *(double *)a7.m128_u64,
                                        v2563,
                                        v68,
                                        a5);
    case 577LL:
      v295 = v2563 + 8;
      v296 = &v2565[v295];
      if ( (unsigned int)v295 > 0x2F )
        v296 = v2564;
      sub_395CC0(*(_QWORD *)&v2565[v2563], *(_DWORD *)v296 != 0, v2563, v295, a5, *(double *)a7.m128_u64);
      return nullptr;
    case 578LL:
      v244 = v2563 + 8;
      v245 = &v2565[v244];
      if ( (unsigned int)v244 > 0x2F )
        v245 = v2564;
      sub_38F620(*(_QWORD *)&v2565[v2563], *(_DWORD *)v245 != 0, v2563);
      return nullptr;
    case 579LL:
      v287 = v2563;
      v288 = v2563 + 8;
      v2563 = v288;
      v289 = *(_QWORD *)&v2565[v287];
      if ( (unsigned int)v288 > 0x2F )
      {
        v2355 = v2564;
        v292 = v2564 + 8;
        v2564 += 8;
        v291 = *(__int64 **)v2355;
      }
      else
      {
        v290 = v287 + 16;
        v291 = *(__int64 **)&v2565[v288];
        v2563 = v290;
        if ( (unsigned int)v290 <= 0x2F )
        {
          v292 = &v2565[v290];
          v2563 = v287 + 24;
          goto LABEL_261;
        }
        v292 = v2564;
      }
      v2564 = v292 + 8;
LABEL_261:
      v293 = *(_DWORD *)v292;
      v294 = *v291;
      *(_QWORD *)v2561 = v294;
      if ( v294 )
        ++*(_DWORD *)(v294 + 104);
      sub_390360(v289, (__int64 *)v2561, v293 != 0);
      sub_140140(v2561, (__int64)v2561);
      return nullptr;
    case 580LL:
      return (char *)sub_38C8B0(*(_QWORD *)&v2565[v2563]);
    case 581LL:
      return (char *)(int)sub_3ACC00(*(_QWORD *)&v2565[v2563]);
    case 582LL:
      sub_38F4D0(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 583LL:
      v273 = v2563 + 8;
      v274 = &v2565[v273];
      if ( (unsigned int)v273 > 0x2F )
        v274 = v2564;
      return (char *)(unsigned __int8)sub_38B430(*(_QWORD *)&v2565[v2563], *(unsigned int *)v274);
    case 584LL:
      v149 = v2563 + 8;
      v150 = &v2565[v149];
      if ( (unsigned int)v149 > 0x2F )
        v150 = v2564;
      return (char *)(unsigned __int8)sub_38B490(*(_QWORD *)&v2565[v2563], *(unsigned int *)v150);
    case 585LL:
      v234 = v2563 + 8;
      v235 = (__int64 *)&v2565[v234];
      if ( (unsigned int)v234 > 0x2F )
        v235 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_398E10(*(_QWORD *)&v2565[v2563], *v235, v2563, v234, a5);
    case 586LL:
      v226 = v2563;
      v227 = v2563 + 8;
      v228 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v227 > 0x2F )
      {
        v2352 = (__int64 *)v2564;
        v2353 = v2564 + 8;
        v2564 += 8;
        v230 = *v2352;
LABEL_2052:
        v2354 = (const char **)v2353;
        v233 = v2353 + 8;
        v2564 = v233;
        v232 = *v2354;
        return (char *)(unsigned __int8)sub_3976F0(v228, v230, v232, *(_DWORD *)v233 != 0, *(double *)a7.m128_u64);
      }
      v229 = v2563 + 16;
      v230 = *(_QWORD *)&v2565[v227];
      v2563 = v229;
      if ( (unsigned int)v229 > 0x2F )
      {
        v2353 = v2564;
        goto LABEL_2052;
      }
      v231 = v226 + 24;
      v232 = *(const char **)&v2565[v229];
      if ( (unsigned int)v231 > 0x2F )
        v233 = v2564;
      else
        v233 = &v2565[v231];
      return (char *)(unsigned __int8)sub_3976F0(v228, v230, v232, *(_DWORD *)v233 != 0, *(double *)a7.m128_u64);
    case 587LL:
      v185 = v2563 + 8;
      v186 = &v2565[v185];
      if ( (unsigned int)v185 > 0x2F )
        v186 = v2564;
      return (char *)(unsigned __int8)sub_395DB0(*(_QWORD *)&v2565[v2563], *(_QWORD **)v186, *(double *)a7.m128_u64);
    case 588LL:
      v183 = v2563 + 8;
      v184 = (__int64 *)&v2565[v183];
      if ( (unsigned int)v183 > 0x2F )
        v184 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_399640(*(_QWORD *)&v2565[v2563], *v184);
    case 589LL:
      v281 = v2563;
      v282 = v2563 + 8;
      v2563 = v282;
      v283 = *(_QWORD *)&v2565[v281];
      if ( (unsigned int)v282 > 0x2F )
      {
        v2338 = (__int64 *)v2564;
        v286 = v2564 + 8;
        v2564 += 8;
        v285 = *v2338;
      }
      else
      {
        v284 = v281 + 16;
        v285 = *(_QWORD *)&v2565[v282];
        if ( (unsigned int)v284 > 0x2F )
          v286 = v2564;
        else
          v286 = &v2565[v284];
      }
      return (char *)(unsigned __int8)sub_399630(v283, v285, *(_BYTE **)v286, *(double *)a7.m128_u64);
    case 590LL:
      v216 = v2563 + 8;
      v217 = (__int64 *)&v2565[v216];
      if ( (unsigned int)v216 > 0x2F )
        v217 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_399910(*(_QWORD *)&v2565[v2563], *v217, *(double *)a7.m128_u64);
    case 591LL:
      v265 = v2563 + 8;
      v266 = (__int64 **)&v2565[v265];
      if ( (unsigned int)v265 > 0x2F )
        v266 = (__int64 **)v2564;
      return (char *)(unsigned __int8)sub_38F780(*(_QWORD *)&v2565[v2563], *v266);
    case 592LL:
      v96 = v2563;
      v97 = v2563 + 8;
      v2563 = v97;
      v98 = *(_QWORD *)&v2565[v96];
      if ( (unsigned int)v97 > 0x2F )
      {
        v2337 = (__int64 **)v2564;
        v101 = (const char **)(v2564 + 8);
        v2564 += 8;
        v100 = *v2337;
      }
      else
      {
        v99 = v96 + 16;
        v100 = *(__int64 **)&v2565[v97];
        if ( (unsigned int)v99 > 0x2F )
          v101 = (const char **)v2564;
        else
          v101 = (const char **)&v2565[v99];
      }
      return (char *)(unsigned __int8)sub_38F6B0(v98, v100, *v101);
    case 593LL:
      v251 = v2563 + 8;
      v252 = (__int64 *)&v2565[v251];
      if ( (unsigned int)v251 > 0x2F )
        v252 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_3961F0(*(_QWORD *)&v2565[v2563], *v252);
    case 594LL:
      v222 = v2563 + 8;
      v223 = (__int64 *)&v2565[v222];
      if ( (unsigned int)v222 > 0x2F )
        v223 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_395FB0(*(_QWORD *)&v2565[v2563], *v223, v2563, v222, a5, (__int64)a6);
    case 595LL:
      v238 = v2563;
      v239 = v2563 + 8;
      v2563 = v239;
      v240 = *(_QWORD *)&v2565[v238];
      if ( (unsigned int)v239 > 0x2F )
      {
        v2326 = (__int64 *)v2564;
        v243 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v242 = *v2326;
      }
      else
      {
        v241 = v238 + 16;
        v242 = *(_QWORD *)&v2565[v239];
        if ( (unsigned int)v241 > 0x2F )
          v243 = (__int64 *)v2564;
        else
          v243 = (__int64 *)&v2565[v241];
      }
      return (char *)(unsigned __int8)sub_395F30(v240, v242, *v243, *(double *)a7.m128_u64);
    case 596LL:
      v189 = v2563;
      v190 = v2563 + 8;
      v2563 = v190;
      v191 = *(_QWORD *)&v2565[v189];
      if ( (unsigned int)v190 > 0x2F )
      {
        v2325 = (__int64 *)v2564;
        v194 = (int *)(v2564 + 8);
        v2564 += 8;
        v193 = *v2325;
      }
      else
      {
        v192 = v189 + 16;
        v193 = *(_QWORD *)&v2565[v190];
        if ( (unsigned int)v192 > 0x2F )
          v194 = (int *)v2564;
        else
          v194 = (int *)&v2565[v192];
      }
      return (char *)(unsigned __int8)sub_396A30(v191, v193, *v194);
    case 597LL:
      v143 = v2563;
      v2563 += 8;
      v144 = *(_QWORD *)&v2565[v143];
      if ( v143 + 8 > 0x2F )
        v2564 += 8;
      return (char *)(unsigned __int8)sub_396F80(v144);
    case 598LL:
      v141 = v2563 + 8;
      v142 = (unsigned __int64 *)&v2565[v141];
      if ( (unsigned int)v141 > 0x2F )
        v142 = (unsigned __int64 *)v2564;
      return (char *)(unsigned __int8)sub_3978A0(*(_QWORD *)&v2565[v2563], *v142);
    case 599LL:
      v139 = v2563 + 8;
      v140 = (__int64 *)&v2565[v139];
      if ( (unsigned int)v139 > 0x2F )
        v140 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_397200(
                                        *(_QWORD *)&v2565[v2563],
                                        *v140,
                                        *(double *)a7.m128_u64,
                                        v2563,
                                        v139,
                                        a5,
                                        a6);
    case 600LL:
      v137 = v2563 + 8;
      v138 = (__int32 *)&v2565[v137];
      if ( (unsigned int)v137 > 0x2F )
        v138 = (__int32 *)v2564;
      return (char *)(unsigned __int8)sub_39B1E0(*(_QWORD *)&v2565[v2563], *v138);
    case 601LL:
      v171 = v2563;
      v172 = v2563 + 8;
      v2563 = v172;
      v173 = *(_QWORD *)&v2565[v171];
      if ( (unsigned int)v172 > 0x2F )
      {
        v2322 = v2564;
        v176 = (int *)(v2564 + 8);
        v2564 += 8;
        v175 = *(unsigned int *)v2322;
      }
      else
      {
        v174 = v171 + 16;
        v175 = *(unsigned int *)&v2565[v172];
        if ( (unsigned int)v174 > 0x2F )
          v176 = (int *)v2564;
        else
          v176 = (int *)&v2565[v174];
      }
      return (char *)(unsigned __int8)sub_39A7C0(v173, v175, *v176);
    case 602LL:
      return (char *)(unsigned __int8)sub_38C250(*(_QWORD *)&v2565[v2563]);
    case 603LL:
      v165 = v2563;
      v166 = v2563 + 8;
      v2563 = v166;
      v167 = *(_QWORD *)&v2565[v165];
      if ( (unsigned int)v166 > 0x2F )
      {
        v2343 = (unsigned __int64 *)v2564;
        v170 = (int *)(v2564 + 8);
        v2564 += 8;
        v169 = *v2343;
      }
      else
      {
        v168 = v165 + 16;
        v169 = *(_QWORD *)&v2565[v166];
        if ( (unsigned int)v168 > 0x2F )
          v170 = (int *)v2564;
        else
          v170 = (int *)&v2565[v168];
      }
      return (char *)(int)sub_38B690(v167, v169, *v170);
    case 604LL:
      v163 = v2563 + 8;
      v164 = (__m128i **)&v2565[v163];
      if ( (unsigned int)v163 > 0x2F )
        v164 = (__m128i **)v2564;
      return (char *)(unsigned __int8)sub_38F870(*(_QWORD *)&v2565[v2563], *v164);
    case 605LL:
      return (char *)(unsigned __int8)sub_38F9E0(*(_QWORD *)&v2565[v2563]);
    case 606LL:
      return (char *)(unsigned __int8)sub_38FB60(*(_QWORD *)&v2565[v2563]);
    case 607LL:
      v82 = v2563 + 8;
      v83 = (int *)&v2565[v82];
      if ( (unsigned int)v82 > 0x2F )
        v83 = (int *)v2564;
      return (char *)(unsigned __int8)sub_3A0050(*(_QWORD *)&v2565[v2563], *v83, a7);
    case 608LL:
      return (char *)(unsigned __int8)sub_3A0120(*(_QWORD *)&v2565[v2563]);
    case 609LL:
      return (char *)(unsigned __int8)sub_3A0380(*(_QWORD *)&v2565[v2563], a7);
    case 610LL:
      return (char *)(unsigned __int8)sub_3A0450(*(_QWORD *)&v2565[v2563], a7);
    case 611LL:
      return (char *)(unsigned __int8)sub_3A04A0(*(_QWORD *)&v2565[v2563], a7);
    case 612LL:
      v47 = v2563 + 8;
      v48 = &v2565[v47];
      if ( (unsigned int)v47 > 0x2F )
        v48 = v2564;
      return (char *)(unsigned __int8)sub_38FE50(*(_QWORD *)&v2565[v2563], *(_DWORD *)v48 != 0);
    case 613LL:
      v40 = v2563 + 8;
      v41 = &v2565[v40];
      if ( (unsigned int)v40 > 0x2F )
        v41 = v2564;
      return (char *)(unsigned __int8)sub_38FF40(*(_QWORD *)&v2565[v2563], *(_DWORD *)v41 != 0);
    case 614LL:
      v38 = v2563 + 8;
      v39 = &v2565[v38];
      if ( (unsigned int)v38 > 0x2F )
        v39 = v2564;
      return (char *)(unsigned __int8)sub_396DF0(*(_QWORD *)&v2565[v2563], *(_DWORD *)v39 != 0, *(double *)a7.m128_u64);
    case 615LL:
      v56 = v2563;
      v57 = v2563 + 8;
      v2563 = v57;
      v58 = *(_QWORD *)&v2565[v56];
      if ( (unsigned int)v57 > 0x2F )
      {
        v2318 = (__int64 *)v2564;
        v61 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v60 = *v2318;
      }
      else
      {
        v59 = v56 + 16;
        v60 = *(_QWORD *)&v2565[v57];
        v61 = (__int64 *)&v2565[v59];
        if ( (unsigned int)v59 > 0x2F )
          v61 = (__int64 *)v2564;
      }
      return (char *)(int)sub_390CB0(v58, v60, *v61, v57, a5, (__int64)a6);
    case 616LL:
      v36 = v2563 + 8;
      v37 = (__int64 *)&v2565[v36];
      if ( (unsigned int)v36 > 0x2F )
        v37 = (__int64 *)v2564;
      return (char *)sub_25A1A0(*(_QWORD *)&v2565[v2563], *v37);
    case 617LL:
      v117 = v2563;
      v118 = v2563 + 8;
      v2563 = v118;
      v119 = *(_QWORD *)&v2565[v117];
      if ( (unsigned int)v118 > 0x2F )
      {
        v2323 = (__int64 *)v2564;
        v122 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v121 = *v2323;
      }
      else
      {
        v120 = v117 + 16;
        v121 = *(_QWORD *)&v2565[v118];
        if ( (unsigned int)v120 > 0x2F )
          v122 = (__int64 *)v2564;
        else
          v122 = (__int64 *)&v2565[v120];
      }
      return (char *)sub_69930(v119, v121, *v122, v118);
    case 618LL:
      v62 = v2563;
      v63 = v2563 + 8;
      v2563 = v63;
      v64 = *(_QWORD *)&v2565[v62];
      if ( (unsigned int)v63 > 0x2F )
      {
        v2321 = (int *)v2564;
        v67 = (int *)(v2564 + 8);
        v2564 += 8;
        v66 = *v2321;
      }
      else
      {
        v65 = v62 + 16;
        v66 = *(_DWORD *)&v2565[v63];
        if ( (unsigned int)v65 > 0x2F )
          v67 = (int *)v2564;
        else
          v67 = (int *)&v2565[v65];
      }
      return (char *)(unsigned __int8)sub_69F20(v64, v66, *v67);
    case 619LL:
      sub_255F70(*(_QWORD *)&v2565[v2563]);
      return nullptr;
    case 622LL:
      v42 = v2563 + 8;
      v43 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v42 > 0x2F )
      {
        v2316 = (__int64 *)v2564;
        v2541 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v45 = *v2316;
      }
      else
      {
        v44 = v2563 + 16;
        v45 = *(_QWORD *)&v2565[v42];
        v2563 = v44;
        if ( (unsigned int)v44 <= 0x2F )
        {
          v46 = *(_QWORD *)&v2565[v44];
          return (char *)(unsigned __int8)sub_319BD0(v43, v45, v46);
        }
        v2541 = (__int64 *)v2564;
      }
      v2564 = (char *)(v2541 + 1);
      v46 = *v2541;
      return (char *)(unsigned __int8)sub_319BD0(v43, v45, v46);
    case 623LL:
      v51 = v2563 + 8;
      v52 = *(_QWORD *)&v2565[v2563];
      if ( (unsigned int)v51 > 0x2F )
      {
        v2319 = (__int64 *)v2564;
        v2542 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v54 = *v2319;
      }
      else
      {
        v53 = v2563 + 16;
        v54 = *(_QWORD *)&v2565[v51];
        v2563 = v53;
        if ( (unsigned int)v53 <= 0x2F )
        {
          v55 = *(_QWORD *)&v2565[v53];
          return (char *)(unsigned __int8)sub_319C40(v52, v54, v55);
        }
        v2542 = (__int64 *)v2564;
      }
      v2564 = (char *)(v2542 + 1);
      v55 = *v2542;
      return (char *)(unsigned __int8)sub_319C40(v52, v54, v55);
    case 624LL:
      v49 = v2563 + 8;
      v50 = (__int64 *)&v2565[v49];
      if ( (unsigned int)v49 > 0x2F )
        v50 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_813F0(*(__int64 **)&v2565[v2563], *v50);
    case 625LL:
      v30 = v2563;
      v31 = v2563 + 8;
      v2563 = v31;
      v32 = *(_QWORD *)&v2565[v30];
      if ( (unsigned int)v31 > 0x2F )
      {
        v2317 = (__int64 *)v2564;
        v35 = (__int64 *)(v2564 + 8);
        v2564 += 8;
        v34 = *v2317;
      }
      else
      {
        v33 = v30 + 16;
        v34 = *(_QWORD *)&v2565[v31];
        if ( (unsigned int)v33 > 0x2F )
          v35 = (__int64 *)v2564;
        else
          v35 = (__int64 *)&v2565[v33];
      }
      return (char *)sub_86880(v32, v34, *v35, v31);
    case 626LL:
      v28 = v2563 + 8;
      v29 = (__int64 *)&v2565[v28];
      if ( (unsigned int)v28 > 0x2F )
        v29 = (__int64 *)v2564;
      sub_31ECF0(*(_QWORD *)&v2565[v2563], *v29, v2563, v28, a5, (int)a6);
      return nullptr;
    case 627LL:
      v26 = v2563 + 8;
      v27 = (__int64 *)&v2565[v26];
      if ( (unsigned int)v26 > 0x2F )
        v27 = (__int64 *)v2564;
      return (char *)(unsigned __int8)sub_396620(*(_QWORD *)&v2565[v2563], *v27, *(double *)a7.m128_u64);
    default:
      return nullptr;
  }
}
