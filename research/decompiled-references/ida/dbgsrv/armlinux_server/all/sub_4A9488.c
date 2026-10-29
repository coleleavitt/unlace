/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A9488
// Address: 0x00000000004A9488

//----- (00000000004A9488) ----------------------------------------------------
__int64 __fastcall sub_4A9488(__int64 result, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // x23
  __int64 v4; // x19
  int v5; // w21
  unsigned int *v6; // x20
  __int64 v7; // x0
  __int64 v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  void (__fastcall *v12)(__int64, __int64, __int64); // x3
  __int64 v13; // x2
  char v14; // w23
  __int64 v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  void (__fastcall *v18)(__int64, __int64, __int64); // x3
  __int64 v19; // x2
  char v20; // w23
  const char *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  void (__fastcall *v24)(__int64, __int64, __int64); // x3
  __int64 v25; // x2
  char v26; // w23
  __int64 v27; // x23
  __int64 v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  void (__fastcall *v31)(__int64, __int64, __int64); // x3
  __int64 v32; // x2
  char v33; // w22
  __int64 v34; // x1
  char v35; // w20
  __int64 v36; // x2
  __int64 v37; // x2
  void (__fastcall *v38)(__int64, __int64, __int64); // x3
  const char *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  void (__fastcall *v42)(__int64, __int64, __int64); // x3
  __int64 v43; // x2
  char v44; // w23
  __int64 v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  void (__fastcall *v48)(__int64, __int64, __int64); // x3
  __int64 v49; // x2
  char v50; // w23
  const char *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x2
  void (__fastcall *v54)(__int64, __int64, __int64); // x3
  __int64 v55; // x2
  char v56; // w22
  int v57; // w24
  unsigned int *v58; // x25
  const char *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  void (__fastcall *v62)(__int64, __int64, __int64); // x3
  __int64 v63; // x2
  char v64; // w28
  __int64 v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  void (__fastcall *v68)(__int64, __int64, __int64); // x3
  __int64 v69; // x2
  char v70; // w23
  __int64 v71; // x2
  char *v72; // x0
  char v73; // w0
  unsigned int v74; // w1
  unsigned int v75; // w0
  __int64 v77; // x1
  __int64 v78; // x2
  void (__fastcall *v79)(__int64, __int64, __int64); // x3
  __int64 v80; // x1
  __int64 v81; // x2
  void (__fastcall *v82)(__int64, __int64, __int64); // x3
  __int64 v83; // x20
  __int64 v84; // x23
  __int64 v85; // x1
  __int64 v86; // x2
  void (__fastcall *v87)(__int64, __int64, __int64); // x3
  __int64 v88; // x1
  __int64 v89; // x0
  __int64 v90; // x2
  void (__fastcall *v91)(__int64, __int64, __int64); // x3
  __int64 v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  void (__fastcall *v95)(__int64, __int64, __int64); // x3
  __int64 v96; // x2
  char v97; // w23
  __int64 v98; // x21
  __int64 v99; // x1
  __int64 v100; // x2
  void (__fastcall *v101)(__int64, __int64, __int64); // x3
  __int64 v102; // x2
  char v103; // w23
  __int64 v104; // x22
  const char *v105; // x20
  __int64 v106; // x1
  int v107; // w23
  __int64 v108; // x2
  void (__fastcall *v109)(__int64, __int64, __int64); // x3
  __int64 v110; // x2
  char v111; // w21
  unsigned int *v112; // x2
  unsigned int *v113; // x20
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x2
  void (__fastcall *v117)(__int64, __int64, __int64); // x3
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x2
  void (__fastcall *v121)(__int64, __int64, __int64); // x3
  unsigned int *v122; // x2
  unsigned __int64 v123; // x21
  unsigned __int64 v124; // x1
  const char *v125; // x23
  __int64 v126; // x2
  void (__fastcall *v127)(__int64, __int64, __int64); // x3
  unsigned __int64 v128; // x25
  char v129; // w24
  __int64 v130; // x2
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x2
  void (__fastcall *v134)(__int64, __int64, __int64); // x3
  const char *v135; // x20
  __int64 v136; // x2
  void (__fastcall *v137)(__int64, __int64, __int64); // x3
  __int64 v138; // x2
  char v139; // w21
  unsigned int *v140; // x2
  __int64 v141; // x0
  __int64 v142; // x1
  const char *v143; // x21
  __int64 v144; // x1
  __int64 v145; // x2
  void (__fastcall *v146)(__int64, __int64, __int64); // x3
  __int64 v147; // x2
  char v148; // w23
  __int64 v149; // x1
  unsigned int v150; // w21
  __int64 v151; // x1
  __int64 v152; // x2
  void (__fastcall *v153)(__int64, __int64, __int64); // x3
  __int64 v154; // x1
  __int64 v155; // x2
  void (__fastcall *v156)(__int64, __int64, __int64); // x3
  __int64 v157; // x1
  unsigned int v158; // w2
  const char *v159; // x21
  __int64 v160; // x1
  __int64 v161; // x2
  void (__fastcall *v162)(__int64, __int64, __int64); // x3
  __int64 v163; // x2
  char v164; // w23
  __int64 v165; // x0
  __int64 v166; // x24
  char *v167; // x4
  unsigned int v168; // w23
  _QWORD *v169; // x0
  __int64 v170; // x5
  char *v171; // x1
  __int64 v172; // x3
  __int64 v173; // x3
  __int64 v174; // x0
  __int64 *v175; // x24
  __int64 *v176; // x21
  __int64 v177; // t1
  unsigned int v178; // w21
  __int64 *v179; // x3
  unsigned int *v180; // x2
  __int64 v181; // x21
  __int64 v182; // x1
  __int64 v183; // x2
  void (__fastcall *v184)(__int64, __int64, __int64); // x3
  __int64 v185; // x2
  char v186; // w23
  const char *v187; // x21
  __int64 v188; // x1
  __int64 v189; // x2
  void (__fastcall *v190)(__int64, __int64, __int64); // x3
  __int64 v191; // x2
  char v192; // w23
  __int64 v193; // x21
  __int64 v194; // x1
  __int64 v195; // x2
  void (__fastcall *v196)(__int64, __int64, __int64); // x3
  __int64 v197; // x2
  char v198; // w23
  const char *v199; // x21
  __int64 v200; // x1
  __int64 v201; // x2
  void (__fastcall *v202)(__int64, __int64, __int64); // x3
  __int64 v203; // x2
  char v204; // w23
  __int64 v205; // x21
  __int64 v206; // x1
  __int64 v207; // x2
  void (__fastcall *v208)(__int64, __int64, __int64); // x3
  __int64 v209; // x2
  char v210; // w23
  const char *v211; // x21
  __int64 v212; // x1
  __int64 v213; // x2
  void (__fastcall *v214)(__int64, __int64, __int64); // x3
  __int64 v215; // x2
  char v216; // w23
  const char *v217; // x21
  __int64 v218; // x1
  __int64 v219; // x2
  void (__fastcall *v220)(__int64, __int64, __int64); // x3
  __int64 v221; // x2
  char v222; // w23
  __int64 v223; // x1
  __int64 v224; // x2
  void (__fastcall *v225)(__int64, __int64, __int64); // x3
  __int64 v226; // x22
  __int64 v227; // x1
  const char *v228; // x20
  __int64 v229; // x2
  void (__fastcall *v230)(__int64, __int64, __int64); // x3
  __int64 v231; // x2
  char v232; // w21
  __int64 v233; // x21
  __int64 v234; // x1
  __int64 v235; // x2
  void (__fastcall *v236)(__int64, __int64, __int64); // x3
  __int64 v237; // x2
  char v238; // w23
  __int64 v239; // x21
  __int64 v240; // x1
  __int64 v241; // x2
  void (__fastcall *v242)(__int64, __int64, __int64); // x3
  __int64 v243; // x2
  char v244; // w23
  __int64 v245; // x21
  __int64 v246; // x1
  __int64 v247; // x2
  void (__fastcall *v248)(__int64, __int64, __int64); // x3
  __int64 v249; // x2
  char v250; // w23
  __int64 v251; // x21
  __int64 v252; // x1
  __int64 v253; // x2
  void (__fastcall *v254)(__int64, __int64, __int64); // x3
  __int64 v255; // x2
  char v256; // w23
  __int64 v257; // x21
  __int64 v258; // x1
  __int64 v259; // x2
  void (__fastcall *v260)(__int64, __int64, __int64); // x3
  __int64 v261; // x2
  char v262; // w23
  const char *v263; // x21
  __int64 v264; // x1
  __int64 v265; // x2
  void (__fastcall *v266)(__int64, __int64, __int64); // x3
  __int64 v267; // x2
  char v268; // w23
  __int64 v269; // x21
  __int64 v270; // x1
  __int64 v271; // x2
  void (__fastcall *v272)(__int64, __int64, __int64); // x3
  __int64 v273; // x2
  char v274; // w23
  __int64 v275; // x21
  __int64 v276; // x1
  __int64 v277; // x2
  void (__fastcall *v278)(__int64, __int64, __int64); // x3
  __int64 v279; // x2
  char v280; // w23
  __int64 v281; // x0
  int v282; // w1
  __int64 v283; // x4
  __int64 v284; // x5
  __int64 v285; // x1
  unsigned int *v286; // x2
  __int64 v287; // x1
  __int64 v288; // x23
  __int64 v289; // x25
  __int64 v290; // x5
  char *v291; // x2
  __int64 v292; // x0
  int v293; // w24
  int v294; // w3
  __int64 v295; // x2
  int v296; // w3
  __int64 v297; // x4
  __int64 v298; // x1
  __int64 v299; // x2
  __int64 v300; // x2
  void (__fastcall *v301)(__int64, __int64, __int64); // x3
  __int64 v302; // x21
  unsigned __int8 *v303; // x20
  __int64 v304; // x22
  __int64 v305; // x1
  __int64 v306; // x2
  void (__fastcall *v307)(__int64, __int64, __int64); // x3
  __int64 v308; // x2
  unsigned __int8 v309; // w23
  unsigned int *v310; // x0
  unsigned int *v311; // x2
  _QWORD *v312; // x20
  __int64 v313; // x21
  __int64 v314; // x24
  __int64 v315; // x23
  __int64 v316; // x1
  __int64 v317; // x2
  void (__fastcall *v318)(__int64, __int64, __int64); // x3
  __int64 v319; // x2
  __int64 v320; // x1
  __int64 v321; // x2
  void (__fastcall *v322)(__int64, __int64, __int64); // x3
  __int64 v323; // x2
  __int64 v324; // x22
  __int64 v325; // x23
  __int64 v326; // x20
  __int64 v327; // x1
  __int64 v328; // x2
  void (__fastcall *v329)(__int64, __int64, __int64); // x3
  __int64 v330; // x2
  char v331; // w21
  __int64 *v332; // x1
  int v333; // w2
  __int64 v334; // x22
  __int64 v335; // x23
  __int64 v336; // x20
  __int64 v337; // x1
  __int64 v338; // x2
  void (__fastcall *v339)(__int64, __int64, __int64); // x3
  __int64 v340; // x2
  char v341; // w21
  const char *v342; // x21
  __int64 v343; // x1
  __int64 v344; // x2
  void (__fastcall *v345)(__int64, __int64, __int64); // x3
  __int64 v346; // x2
  char v347; // w23
  size_t v348; // x23
  __int64 m; // x20
  __int64 v350; // x2
  void (__fastcall *v351)(__int64, __int64, __int64); // x3
  __int64 v352; // x2
  char v353; // w22
  __int64 v354; // x2
  void (__fastcall *v355)(__int64, __int64, __int64); // x3
  char *v356; // x20
  __int64 v357; // x2
  __int64 v358; // x2
  void (__fastcall *v359)(__int64, __int64, __int64); // x3
  __int64 v360; // x22
  char *v361; // x22
  __int64 v362; // x1
  __int64 v363; // x2
  void (__fastcall *v364)(__int64, __int64, __int64); // x3
  __int64 v365; // x2
  char v366; // w21
  __int64 v367; // x1
  __int64 v368; // x2
  __int64 v369; // x2
  void (__fastcall *v370)(__int64, __int64, __int64); // x3
  __int64 v371; // x2
  __int64 v372; // x2
  const char *v373; // x21
  __int64 v374; // x1
  __int64 v375; // x2
  void (__fastcall *v376)(__int64, __int64, __int64); // x3
  __int64 v377; // x2
  char v378; // w23
  __int64 v379; // x2
  void (__fastcall *v380)(__int64, __int64, __int64); // x3
  char *v381; // x21
  __int64 v382; // x1
  __int64 v383; // x2
  void (__fastcall *v384)(__int64, __int64, __int64); // x3
  __int64 v385; // x2
  char v386; // w23
  unsigned int *v387; // x2
  const char *v388; // x21
  __int64 v389; // x1
  __int64 v390; // x2
  void (__fastcall *v391)(__int64, __int64, __int64); // x3
  __int64 v392; // x2
  char v393; // w22
  size_t v394; // x23
  __int64 k; // x20
  __int64 v396; // x2
  void (__fastcall *v397)(__int64, __int64, __int64); // x3
  __int64 v398; // x2
  char v399; // w22
  __int64 v400; // x2
  void (__fastcall *v401)(__int64, __int64, __int64); // x3
  __int64 v402; // x1
  __int64 v403; // x2
  __int64 v404; // x2
  void (__fastcall *v405)(__int64, __int64, __int64); // x3
  unsigned int *v406; // x2
  __int64 v407; // x20
  size_t v408; // x23
  __int64 i; // x20
  __int64 v410; // x2
  void (__fastcall *v411)(__int64, __int64, __int64); // x3
  __int64 v412; // x2
  char v413; // w22
  __int64 v414; // x2
  void (__fastcall *v415)(__int64, __int64, __int64); // x3
  const char *v416; // x20
  __int64 v417; // x2
  void (__fastcall *v418)(__int64, __int64, __int64); // x3
  __int64 v419; // x2
  char v420; // w21
  unsigned __int64 v421; // x21
  int v422; // w22
  __int64 v423; // x1
  __int64 v424; // x2
  __int64 v425; // x2
  void (__fastcall *v426)(__int64, __int64, __int64); // x3
  unsigned __int8 *v427; // x24
  unsigned __int64 v428; // x2
  __int64 v429; // x22
  __int64 v430; // x23
  __int64 v431; // x20
  __int64 v432; // x1
  __int64 v433; // x2
  void (__fastcall *v434)(__int64, __int64, __int64); // x3
  __int64 v435; // x2
  char v436; // w21
  const char *v437; // x21
  __int64 v438; // x1
  __int64 v439; // x2
  void (__fastcall *v440)(__int64, __int64, __int64); // x3
  __int64 v441; // x2
  char v442; // w22
  __int64 v443; // x23
  __int64 v444; // x20
  __int64 v445; // x1
  __int64 v446; // x2
  void (__fastcall *v447)(__int64, __int64, __int64); // x3
  __int64 v448; // x2
  char v449; // w22
  const char *v450; // x20
  __int64 v451; // x2
  void (__fastcall *v452)(__int64, __int64, __int64); // x3
  __int64 v453; // x2
  char v454; // w21
  __int64 v455; // x0
  __int64 v456; // x24
  _QWORD *v457; // x2
  __int64 v458; // x1
  __int64 v459; // x21
  _BYTE *v460; // x0
  unsigned int *v461; // x23
  __int64 v462; // x0
  __int64 v463; // x2
  void (__fastcall *v464)(__int64, __int64, __int64); // x3
  __int64 v465; // x0
  __int64 v466; // x0
  __int64 v467; // x2
  void (__fastcall *v468)(__int64, __int64, __int64); // x3
  __int64 v469; // x0
  const char *v470; // x21
  __int64 v471; // x1
  __int64 v472; // x2
  void (__fastcall *v473)(__int64, __int64, __int64); // x3
  __int64 v474; // x2
  char v475; // w23
  __int64 v476; // x1
  int v478; // w0
  const char *v479; // x21
  __int64 v480; // x1
  __int64 v481; // x2
  void (__fastcall *v482)(__int64, __int64, __int64); // x3
  __int64 v483; // x2
  char v484; // w23
  unsigned int *v485; // x2
  unsigned int v486; // w1
  unsigned __int8 *v487; // x24
  int v488; // w0
  int v489; // w0
  _DWORD *j; // x0
  int v491; // w0
  __int64 v492; // x1
  __int64 v493; // x0
  __int64 v494; // x1
  __int64 v495; // x2
  void (__fastcall *v496)(__int64, __int64, __int64); // x3
  __int64 v497; // x1
  __int64 v498; // x0
  __int64 v499; // x2
  void (__fastcall *v500)(__int64, __int64, __int64); // x3
  __int64 v501; // x1
  __int64 v502; // x2
  __int64 v503; // x2
  void (__fastcall *v504)(__int64, __int64, __int64); // x3
  __int64 v505; // x2
  void (__fastcall *v506)(__int64, __int64, __int64); // x3
  __int64 v507; // x1
  __int64 v508; // x0
  __int64 v509; // x2
  void (__fastcall *v510)(__int64, __int64, __int64); // x3
  __int64 v511; // x1
  __int64 v512; // x0
  __int64 v513; // x2
  void (__fastcall *v514)(__int64, __int64, __int64); // x3
  int v515; // w3
  __int64 v516; // x0
  _DWORD *v517; // x0
  int v518; // w1
  __int64 v519; // x0
  _BYTE *v520; // x0
  __int64 v521; // x2
  __int64 v522; // x2
  unsigned __int8 *v523; // x0
  int v524; // w1
  __int64 v525; // x4
  __int64 v526; // x2
  __int64 v527; // x3
  __int64 v528; // x1
  __int64 v529; // x0
  __int64 v530; // x1
  __int64 v531; // x3
  __int64 v532; // x4
  __int64 v533; // x5
  __int64 v534; // x7
  __int64 v535; // x8
  __int64 v536; // x9
  char *v537; // x20
  __int64 v538; // x1
  __int64 v539; // x0
  __int64 v540; // x2
  void (__fastcall *v541)(__int64, __int64, __int64); // x3
  __int64 v542; // x2
  __int64 v543; // x3
  __int64 v544; // x2
  void (__fastcall *v545)(__int64, __int64, __int64); // x4
  __int64 v546; // x0
  __int64 v547; // x0
  __int64 v548; // x1
  __int64 v549; // x2
  void (__fastcall *v550)(__int64, __int64, __int64); // x3
  int v551; // w6
  _QWORD *v552; // x7
  _QWORD *v553; // x1
  _QWORD *v554; // x5
  __int64 v555; // t1
  __int64 v556; // x1
  _QWORD *v557; // x2
  _QWORD *v558; // x4
  int v559; // w1
  __int64 v560; // x6
  __int64 v561; // x5
  _QWORD *v562; // x1
  unsigned int **v563; // x4
  unsigned int **v564; // x1
  int v566; // w3
  __int64 v567; // x1
  __int64 v568; // x2
  void (__fastcall *v569)(__int64, __int64, __int64); // x3
  int v570; // w1
  __int64 v571; // x2
  void (__fastcall *v572)(__int64, __int64, __int64); // x3
  __int64 v573; // x1
  __int64 v574; // x1
  __int64 v575; // x2
  void (__fastcall *v576)(__int64, __int64, __int64); // x3
  __int64 v577; // x1
  __int64 v578; // x2
  void (__fastcall *v579)(__int64, __int64, __int64); // x3
  __int64 v580; // x1
  __int64 v581; // x2
  void (__fastcall *v582)(__int64, __int64, __int64); // x3
  __int64 v583; // x1
  __int64 v584; // x2
  void (__fastcall *v585)(__int64, __int64, __int64); // x3
  __int64 v586; // x1
  __int64 v587; // x2
  void (__fastcall *v588)(__int64, __int64, __int64); // x3
  int v589; // w1
  int v590; // w3
  __int64 v591; // x1
  __int64 v592; // x2
  void (__fastcall *v593)(__int64, __int64, __int64); // x3
  __int64 v594; // x1
  __int64 v595; // x2
  void (__fastcall *v596)(__int64, __int64, __int64); // x3
  bool v597; // zf
  char v598; // w22
  __int64 v599; // x2
  void (__fastcall *v600)(__int64, __int64, __int64); // x3
  __int64 v601; // x2
  void (__fastcall *v602)(__int64, __int64, __int64); // x3
  __int64 v603; // [xsp+58h] [xbp+58h] BYREF
  _QWORD v604[2]; // [xsp+60h] [xbp+60h] BYREF
  char s[8]; // [xsp+70h] [xbp+70h] BYREF
  unsigned int *v606; // [xsp+78h] [xbp+78h]
  _DWORD v607[2]; // [xsp+80h] [xbp+80h]
  _QWORD v608[13]; // [xsp+88h] [xbp+88h]

  v4 = result;
  if ( !a3 )
    goto LABEL_7;
  v5 = *(_DWORD *)(result + 304);
  if ( v5 )
    return result;
  v6 = a3;
  result = *a3;
  switch ( (int)result )
  {
    case 0:
      v302 = (int)a3[4];
      v303 = *((unsigned __int8 **)a3 + 1);
      if ( (a2 & 4) != 0 )
      {
        v421 = (unsigned __int64)&v303[v302];
        if ( v421 <= (unsigned __int64)v303 )
          return result;
LABEL_433:
        result = v421 - (_QWORD)v303;
        v422 = *v303;
        if ( (__int64)(v421 - (_QWORD)v303) <= 3
          || v422 != 95
          || (result = v303[1], (_DWORD)result != 95)
          || (result = v303[2], (_DWORD)result != 85)
          || (v427 = v303 + 3, v428 = 0, v421 <= (unsigned __int64)(v303 + 3)) )
        {
LABEL_435:
          v423 = *(_QWORD *)(v4 + 256);
          goto LABEL_436;
        }
        while ( 1 )
        {
          result = *v427;
          if ( (unsigned __int8)(result - 48) <= 9u )
          {
            LODWORD(result) = result - 48;
          }
          else if ( (unsigned __int8)(result - 65) > 5u )
          {
            if ( (unsigned __int8)(result - 97) > 5u )
            {
              v423 = *(_QWORD *)(v4 + 256);
              if ( v421 > (unsigned __int64)v427 && (v428 <= 0xFF ? (v597 = (_DWORD)result == 95) : (v597 = 0), v597) )
              {
                v598 = v428;
                if ( v423 == 255 )
                {
                  v600 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
                  v599 = *(_QWORD *)(v4 + 280);
                  *(_BYTE *)(v4 + 255) = 0;
                  v600(v4, 255, v599);
                  *(_QWORD *)(v4 + 256) = 0;
                  v423 = 0;
                  ++*(_QWORD *)(v4 + 320);
                }
                result = v423 + 1;
                *(_QWORD *)(v4 + 256) = v423 + 1;
                *(_BYTE *)(v4 + v423) = v598;
                v303 = v427;
                *(_BYTE *)(v4 + 264) = v598;
              }
              else
              {
LABEL_436:
                v424 = v423 + 1;
                if ( v423 == 255 )
                {
                  v426 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
                  v425 = *(_QWORD *)(v4 + 280);
                  *(_BYTE *)(v4 + 255) = 0;
                  v426(v4, 255, v425);
                  v424 = 1;
                  v423 = 0;
                  result = *(_QWORD *)(v4 + 320) + 1LL;
                  *(_QWORD *)(v4 + 320) = result;
                }
                *(_QWORD *)(v4 + 256) = v424;
                *(_BYTE *)(v4 + v423) = v422;
                *(_BYTE *)(v4 + 264) = v422;
              }
              if ( v421 <= (unsigned __int64)++v303 )
                return result;
              goto LABEL_433;
            }
            LODWORD(result) = result - 87;
          }
          else
          {
            LODWORD(result) = result - 55;
          }
          result = (int)result;
          ++v427;
          v428 = (int)result + 16 * v428;
          if ( (unsigned __int8 *)v421 == v427 )
            goto LABEL_435;
        }
      }
      if ( a3[4] )
      {
        v304 = 0;
        v305 = *(_QWORD *)(v4 + 256);
        do
        {
          v309 = v303[v304];
          if ( v305 == 255 )
          {
            v307 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v306 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v307(v4, 255, v306);
            v305 = 1;
            v308 = 0;
            result = *(_QWORD *)(v4 + 320) + 1LL;
            *(_QWORD *)(v4 + 320) = result;
          }
          else
          {
            v308 = v305++;
          }
          *(_QWORD *)(v4 + 256) = v305;
          ++v304;
          *(_BYTE *)(v4 + v308) = v309;
          *(_BYTE *)(v4 + 264) = v309;
        }
        while ( v304 != v302 );
      }
      return result;
    case 1:
    case 2:
      def_4AD1E4(v4, a2, *((unsigned int **)a3 + 1));
      if ( (a2 & 4) != 0 )
      {
        v298 = *(_QWORD *)(v4 + 256);
        v299 = v298 + 1;
        if ( v298 == 255 )
        {
          v301 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v300 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v301(v4, 255, v300);
          v299 = 1;
          v298 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        *(_QWORD *)(v4 + 256) = v299;
        *(_BYTE *)(v4 + v298) = 46;
        *(_BYTE *)(v4 + 264) = 46;
      }
      else
      {
        v470 = "::";
        v471 = *(_QWORD *)(v4 + 256);
        do
        {
          v475 = *v470;
          if ( v471 == 255 )
          {
            v473 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v472 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v473(v4, 255, v472);
            v471 = 1;
            v474 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          else
          {
            v474 = v471++;
          }
          *(_QWORD *)(v4 + 256) = v471;
          ++v470;
          *(_BYTE *)(v4 + v474) = v475;
          *(_BYTE *)(v4 + 264) = v475;
        }
        while ( "" != v470 );
      }
      v83 = *((_QWORD *)v6 + 2);
      if ( *(_DWORD *)v83 == 70 )
      {
        sub_4A5250(v4, "{default arg#", 13);
        sub_4A5DB0(v4, *(_DWORD *)(v83 + 16) + 1);
        sub_4A5250(v4, "}::", 3);
        v83 = *(_QWORD *)(v83 + 8);
      }
      return def_4AD1E4(v4, a2, (unsigned int *)v83);
    case 3:
      v288 = *((_QWORD *)a3 + 1);
      v289 = *(_QWORD *)(v4 + 296);
      *(_QWORD *)(v4 + 296) = 0;
      if ( !v288 )
        goto LABEL_270;
      v290 = *(_QWORD *)(v4 + 288);
      v291 = s;
      v292 = 0;
      v293 = 0;
      while ( 1 )
      {
        v294 = *(_DWORD *)v288;
        *(_QWORD *)v291 = v292;
        *((_QWORD *)v291 + 1) = v288;
        ++v293;
        *((_DWORD *)v291 + 4) = 0;
        *((_QWORD *)v291 + 3) = v290;
        if ( !sub_4A52F8(v294) )
          break;
        v288 = *(_QWORD *)(v288 + 8);
        if ( !v288 )
        {
          *(_QWORD *)(v4 + 296) = v295;
          goto LABEL_270;
        }
        v291 = (char *)(v295 + 32);
        v292 = v297;
        if ( v293 == 4 )
        {
          *(_QWORD *)(v4 + 296) = v297;
LABEL_270:
          *(_DWORD *)(v4 + 304) = 1;
          return 1;
        }
      }
      *(_QWORD *)(v4 + 296) = v295;
      if ( v296 == 4 )
      {
        v604[1] = v288;
        v604[0] = v290;
        *(_QWORD *)(v4 + 288) = v604;
      }
      else if ( v296 == 2 )
      {
        v525 = *(_QWORD *)(v288 + 16);
        if ( *(_DWORD *)v525 == 70 )
        {
          v525 = *(_QWORD *)(v525 + 8);
          if ( !v525 )
            goto LABEL_270;
        }
        while ( sub_4A52F8(*(_DWORD *)v525) )
        {
          if ( v293 == 4 )
            goto LABEL_270;
          v526 = (unsigned int)(v293 - 1);
          *(_QWORD *)(v4 + 296) = v531;
          v527 = v531 + 32;
          ++v293;
          v526 *= 32;
          v528 = *(_QWORD *)&s[v526 + 8];
          *(_QWORD *)(v527 - 32) = *(_QWORD *)&s[v526];
          *(_QWORD *)(v527 - 24) = v528;
          v529 = *(_QWORD *)((char *)v607 + v526);
          v530 = *(_QWORD *)((char *)v608 + v526);
          *(_QWORD *)(v527 - 32) = &s[v526];
          *(_QWORD *)(v527 - 16) = v529;
          *(_QWORD *)(v527 - 8) = v530;
          *(_QWORD *)(v536 + v526) = v532;
          v525 = *(_QWORD *)(v532 + 8);
          *(_DWORD *)(v535 + v526) = 0;
          *(_QWORD *)(v534 + v526) = v533;
        }
      }
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
      if ( *(_DWORD *)v288 == 4 )
        *(_QWORD *)(v4 + 288) = v604[0];
      v537 = &s[32 * (v293 - 1) + 8];
      do
      {
        result = *((unsigned int *)v537 + 2);
        if ( !(_DWORD)result )
        {
          v538 = *(_QWORD *)(v4 + 256);
          v539 = v538 + 1;
          if ( v538 == 255 )
          {
            v541 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v540 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v541(v4, 255, v540);
            v539 = 1;
            v538 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v539;
          v542 = *(_QWORD *)v537;
          *(_BYTE *)(v4 + v538) = 32;
          *(_BYTE *)(v4 + 264) = 32;
          result = sub_4AD1A0(v4, a2, v542);
        }
        v537 -= 32;
      }
      while ( &v603 != (__int64 *)v537 );
      *(_QWORD *)(v4 + 296) = v289;
      return result;
    case 4:
      v313 = *((_QWORD *)a3 + 1);
      v314 = *(_QWORD *)(v4 + 296);
      v315 = *(_QWORD *)(v4 + 368);
      *(_QWORD *)(v4 + 296) = 0;
      *(_QWORD *)(v4 + 368) = a3;
      if ( (a2 & 4) == 0
        || *(_DWORD *)v313
        || *(_DWORD *)(v313 + 16) != 6
        || strncmp(*(const char **)(v313 + 8), "JArray", 6u) )
      {
        def_4AD1E4(v4, a2, (unsigned int *)v313);
        if ( *(_BYTE *)(v4 + 264) == 60 )
        {
          v466 = *(_QWORD *)(v4 + 256);
          if ( v466 == 255 )
          {
            v468 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v467 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v468(v4, 255, v467);
            v469 = *(_QWORD *)(v4 + 320);
            v316 = 1;
            *(_BYTE *)v4 = 32;
            *(_QWORD *)(v4 + 320) = v469 + 1;
            goto LABEL_489;
          }
          v316 = v466 + 1;
          *(_QWORD *)(v4 + 256) = v466 + 1;
          *(_BYTE *)(v4 + v466) = 32;
          *(_BYTE *)(v4 + 264) = 32;
        }
        else
        {
          v316 = *(_QWORD *)(v4 + 256);
        }
        if ( v316 == 255 )
        {
          v318 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v317 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v318(v4, 255, v317);
          v319 = 1;
          v316 = 0;
          ++*(_QWORD *)(v4 + 320);
          goto LABEL_296;
        }
LABEL_489:
        v319 = v316 + 1;
LABEL_296:
        *(_QWORD *)(v4 + 256) = v319;
        *(_BYTE *)(v4 + v316) = 60;
        *(_BYTE *)(v4 + 264) = 60;
        def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
        if ( *(_BYTE *)(v4 + 264) == 62 )
        {
          v462 = *(_QWORD *)(v4 + 256);
          if ( v462 == 255 )
          {
            v464 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v463 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v464(v4, 255, v463);
            v465 = *(_QWORD *)(v4 + 320);
            v320 = 1;
            *(_BYTE *)v4 = 32;
            *(_QWORD *)(v4 + 320) = v465 + 1;
            goto LABEL_486;
          }
          v320 = v462 + 1;
          *(_QWORD *)(v4 + 256) = v462 + 1;
          *(_BYTE *)(v4 + v462) = 32;
          *(_BYTE *)(v4 + 264) = 32;
        }
        else
        {
          v320 = *(_QWORD *)(v4 + 256);
        }
        if ( v320 == 255 )
        {
          v322 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v321 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v322(v4, 255, v321);
          v323 = 1;
          v320 = 0;
          ++*(_QWORD *)(v4 + 320);
LABEL_300:
          *(_QWORD *)(v4 + 256) = v323;
          result = 62;
          *(_BYTE *)(v4 + v320) = 62;
          *(_BYTE *)(v4 + 264) = 62;
          goto LABEL_301;
        }
LABEL_486:
        v323 = v320 + 1;
        goto LABEL_300;
      }
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
      result = sub_4A5250(v4, "[]", 2);
LABEL_301:
      *(_QWORD *)(v4 + 296) = v314;
      *(_QWORD *)(v4 + 368) = v315;
      return result;
    case 5:
      if ( *(_DWORD *)(v4 + 308) )
      {
        v437 = "auto:";
        v438 = *(_QWORD *)(v4 + 256);
        do
        {
          v442 = *v437;
          if ( v438 == 255 )
          {
            v440 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v439 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v440(v4, 255, v439);
            v438 = 1;
            v441 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          else
          {
            v441 = v438++;
          }
          *(_QWORD *)(v4 + 256) = v438;
          ++v437;
          *(_BYTE *)(v4 + v441) = v442;
          *(_BYTE *)(v4 + 264) = v442;
        }
        while ( "" != v437 );
        sprintf(s, "%d", *((_QWORD *)v6 + 1) + 1);
        result = strlen(s);
        v443 = result;
        if ( result )
        {
          v444 = 0;
          v445 = *(_QWORD *)(v4 + 256);
          do
          {
            v449 = s[v444];
            if ( v445 == 255 )
            {
              v447 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
              v446 = *(_QWORD *)(v4 + 280);
              *(_BYTE *)(v4 + 255) = 0;
              v447(v4, 255, v446);
              v445 = 1;
              v448 = 0;
              result = *(_QWORD *)(v4 + 320) + 1LL;
              *(_QWORD *)(v4 + 320) = result;
            }
            else
            {
              v448 = v445++;
            }
            *(_QWORD *)(v4 + 256) = v445;
            ++v444;
            *(_BYTE *)(v4 + v448) = v449;
            *(_BYTE *)(v4 + 264) = v449;
          }
          while ( v443 != v444 );
        }
        return result;
      }
      v310 = (unsigned int *)sub_4A5AE8(v4, (__int64 *)a3 + 1);
      v311 = v310;
      if ( v310 )
      {
        if ( *v310 != 47
          || (v570 = *(_DWORD *)(v4 + 312), v570 < 0)
          || (v311 = (unsigned int *)sub_4A5A98((__int64)v310, v570)) != nullptr )
        {
          v312 = *(_QWORD **)(v4 + 288);
          *(_QWORD *)(v4 + 288) = *v312;
          result = def_4AD1E4(v4, a2, v311);
          *(_QWORD *)(v4 + 288) = v312;
          return result;
        }
      }
      goto LABEL_7;
    case 6:
      v226 = *((_QWORD *)a3 + 1);
      v227 = *(_QWORD *)(v4 + 256);
      if ( v226 )
      {
        v228 = "{parm#";
        do
        {
          v232 = *v228;
          if ( v227 == 255 )
          {
            v230 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v229 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v230(v4, 255, v229);
            v227 = 1;
            v231 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          else
          {
            v231 = v227++;
          }
          *(_QWORD *)(v4 + 256) = v227;
          ++v228;
          *(_BYTE *)(v4 + v231) = v232;
          *(_BYTE *)(v4 + 264) = v232;
        }
        while ( "" != v228 );
        sprintf(s, "%d", v226);
        v408 = strlen(s);
        v118 = *(_QWORD *)(v4 + 256);
        if ( v408 )
        {
          for ( i = 0; i != v408; ++i )
          {
            v413 = s[i];
            if ( v118 == 255 )
            {
              v411 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
              v410 = *(_QWORD *)(v4 + 280);
              *(_BYTE *)(v4 + 255) = 0;
              v411(v4, 255, v410);
              v118 = 1;
              v412 = 0;
              ++*(_QWORD *)(v4 + 320);
            }
            else
            {
              v412 = v118++;
            }
            *(_QWORD *)(v4 + 256) = v118;
            *(_BYTE *)(v4 + v412) = v413;
            *(_BYTE *)(v4 + 264) = v413;
          }
        }
        v119 = v118 + 1;
        if ( v118 == 255 )
        {
          v415 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v414 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v415(v4, 255, v414);
          v119 = 1;
          v118 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
LABEL_423:
        *(_QWORD *)(v4 + 256) = v119;
        *(_BYTE *)(v4 + v118) = 125;
        *(_BYTE *)(v4 + 264) = 125;
        return 125;
      }
      else
      {
        v450 = "this";
        do
        {
          v454 = *v450;
          if ( v227 == 255 )
          {
            v452 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v451 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v452(v4, 255, v451);
            v227 = 1;
            v453 = 0;
            result = *(_QWORD *)(v4 + 320) + 1LL;
            *(_QWORD *)(v4 + 320) = result;
          }
          else
          {
            v453 = v227++;
          }
          *(_QWORD *)(v4 + 256) = v227;
          ++v450;
          *(_BYTE *)(v4 + v453) = v454;
          *(_BYTE *)(v4 + 264) = v454;
        }
        while ( "" != v450 );
      }
      return result;
    case 7:
      return def_4AD1E4(v4, a2, *((unsigned int **)a3 + 2));
    case 8:
      v223 = *(_QWORD *)(v4 + 256);
      if ( v223 == 255 )
      {
        v225 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v224 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v225(v4, 255, v224);
        *(_QWORD *)(v4 + 256) = 0;
        v223 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      *(_QWORD *)(v4 + 256) = v223 + 1;
      *(_BYTE *)(v4 + v223) = 126;
      *(_BYTE *)(v4 + 264) = 126;
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
    case 9:
      v217 = "vtable for ";
      v218 = *(_QWORD *)(v4 + 256);
      do
      {
        v222 = *v217;
        if ( v218 == 255 )
        {
          v220 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v219 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v220(v4, 255, v219);
          v218 = 1;
          v221 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v221 = v218++;
        }
        *(_QWORD *)(v4 + 256) = v218;
        ++v217;
        *(_BYTE *)(v4 + v221) = v222;
        *(_BYTE *)(v4 + 264) = v222;
      }
      while ( "" != v217 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 10:
      v211 = "VTT for ";
      v212 = *(_QWORD *)(v4 + 256);
      do
      {
        v216 = *v211;
        if ( v212 == 255 )
        {
          v214 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v213 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v214(v4, 255, v213);
          v212 = 1;
          v215 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v215 = v212++;
        }
        *(_QWORD *)(v4 + 256) = v212;
        ++v211;
        *(_BYTE *)(v4 + v215) = v216;
        *(_BYTE *)(v4 + 264) = v216;
      }
      while ( "" != v211 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 11:
      v205 = 0;
      v206 = *(_QWORD *)(v4 + 256);
      do
      {
        v210 = aConstructionVt[v205];
        if ( v206 == 255 )
        {
          v208 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v207 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v208(v4, 255, v207);
          v206 = 1;
          v209 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v209 = v206++;
        }
        *(_QWORD *)(v4 + 256) = v206;
        ++v205;
        *(_BYTE *)(v4 + v209) = v210;
        *(_BYTE *)(v4 + 264) = v210;
      }
      while ( v205 != 24 );
      v373 = "-in-";
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
      v374 = *(_QWORD *)(v4 + 256);
      do
      {
        v378 = *v373;
        if ( v374 == 255 )
        {
          v376 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v375 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v376(v4, 255, v375);
          v374 = 1;
          v377 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v377 = v374++;
        }
        *(_QWORD *)(v4 + 256) = v374;
        ++v373;
        *(_BYTE *)(v4 + v377) = v378;
        *(_BYTE *)(v4 + 264) = v378;
      }
      while ( "" != v373 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
    case 12:
      v199 = "typeinfo for ";
      v200 = *(_QWORD *)(v4 + 256);
      do
      {
        v204 = *v199;
        if ( v200 == 255 )
        {
          v202 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v201 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v202(v4, 255, v201);
          v200 = 1;
          v203 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v203 = v200++;
        }
        *(_QWORD *)(v4 + 256) = v200;
        ++v199;
        *(_BYTE *)(v4 + v203) = v204;
        *(_BYTE *)(v4 + 264) = v204;
      }
      while ( "" != v199 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 13:
      v193 = 0;
      v194 = *(_QWORD *)(v4 + 256);
      do
      {
        v198 = aTypeinfoNameFo[v193];
        if ( v194 == 255 )
        {
          v196 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v195 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v196(v4, 255, v195);
          v194 = 1;
          v197 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v197 = v194++;
        }
        *(_QWORD *)(v4 + 256) = v194;
        ++v193;
        *(_BYTE *)(v4 + v197) = v198;
        *(_BYTE *)(v4 + 264) = v198;
      }
      while ( v193 != 18 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 14:
      v187 = "typeinfo fn for ";
      v188 = *(_QWORD *)(v4 + 256);
      do
      {
        v192 = *v187;
        if ( v188 == 255 )
        {
          v190 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v189 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v190(v4, 255, v189);
          v188 = 1;
          v191 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v191 = v188++;
        }
        *(_QWORD *)(v4 + 256) = v188;
        ++v187;
        *(_BYTE *)(v4 + v191) = v192;
        *(_BYTE *)(v4 + 264) = v192;
      }
      while ( "" != v187 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 15:
      v181 = 0;
      v182 = *(_QWORD *)(v4 + 256);
      do
      {
        v186 = aNonVirtualThun[v181];
        if ( v182 == 255 )
        {
          v184 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v183 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v184(v4, 255, v183);
          v182 = 1;
          v185 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v185 = v182++;
        }
        *(_QWORD *)(v4 + 256) = v182;
        ++v181;
        *(_BYTE *)(v4 + v185) = v186;
        *(_BYTE *)(v4 + 264) = v186;
      }
      while ( v181 != 21 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 16:
      v275 = 0;
      v276 = *(_QWORD *)(v4 + 256);
      do
      {
        v280 = aVirtualThunkTo[v275];
        if ( v276 == 255 )
        {
          v278 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v277 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v278(v4, 255, v277);
          v276 = 1;
          v279 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v279 = v276++;
        }
        *(_QWORD *)(v4 + 256) = v276;
        ++v275;
        *(_BYTE *)(v4 + v279) = v280;
        *(_BYTE *)(v4 + 264) = v280;
      }
      while ( v275 != 17 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 17:
      v269 = 0;
      v270 = *(_QWORD *)(v4 + 256);
      do
      {
        v274 = aCovariantRetur[v269];
        if ( v270 == 255 )
        {
          v272 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v271 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v272(v4, 255, v271);
          v270 = 1;
          v273 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v273 = v270++;
        }
        *(_QWORD *)(v4 + 256) = v270;
        ++v269;
        *(_BYTE *)(v4 + v273) = v274;
        *(_BYTE *)(v4 + 264) = v274;
      }
      while ( v269 != 26 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 18:
      v263 = "java Class for ";
      v264 = *(_QWORD *)(v4 + 256);
      do
      {
        v268 = *v263;
        if ( v264 == 255 )
        {
          v266 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v265 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v266(v4, 255, v265);
          v264 = 1;
          v267 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v267 = v264++;
        }
        *(_QWORD *)(v4 + 256) = v264;
        ++v263;
        *(_BYTE *)(v4 + v267) = v268;
        *(_BYTE *)(v4 + 264) = v268;
      }
      while ( v263 != "" );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 19:
      v257 = 0;
      v258 = *(_QWORD *)(v4 + 256);
      do
      {
        v262 = aGuardVariableF[v257];
        if ( v258 == 255 )
        {
          v260 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v259 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v260(v4, 255, v259);
          v258 = 1;
          v261 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v261 = v258++;
        }
        *(_QWORD *)(v4 + 256) = v258;
        ++v257;
        *(_BYTE *)(v4 + v261) = v262;
        *(_BYTE *)(v4 + 264) = v262;
      }
      while ( v257 != 19 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 20:
      v251 = 0;
      v252 = *(_QWORD *)(v4 + 256);
      do
      {
        v256 = aTlsInitFunctio[v251];
        if ( v252 == 255 )
        {
          v254 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v253 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v254(v4, 255, v253);
          v252 = 1;
          v255 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v255 = v252++;
        }
        *(_QWORD *)(v4 + 256) = v252;
        ++v251;
        *(_BYTE *)(v4 + v255) = v256;
        *(_BYTE *)(v4 + 264) = v256;
      }
      while ( v251 != 22 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 21:
      v245 = 0;
      v246 = *(_QWORD *)(v4 + 256);
      do
      {
        v250 = aTlsWrapperFunc[v245];
        if ( v246 == 255 )
        {
          v248 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v247 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v248(v4, 255, v247);
          v246 = 1;
          v249 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v249 = v246++;
        }
        *(_QWORD *)(v4 + 256) = v246;
        ++v245;
        *(_BYTE *)(v4 + v249) = v250;
        *(_BYTE *)(v4 + 264) = v250;
      }
      while ( v245 != 25 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 22:
      v239 = 0;
      v240 = *(_QWORD *)(v4 + 256);
      do
      {
        v244 = aReferenceTempo[v239];
        if ( v240 == 255 )
        {
          v242 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v241 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v242(v4, 255, v241);
          v240 = 1;
          v243 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v243 = v240++;
        }
        *(_QWORD *)(v4 + 256) = v240;
        ++v239;
        *(_BYTE *)(v4 + v243) = v244;
        *(_BYTE *)(v4 + 264) = v244;
      }
      while ( v239 != 21 );
      v381 = " for ";
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
      v382 = *(_QWORD *)(v4 + 256);
      do
      {
        v386 = *v381;
        if ( v382 == 255 )
        {
          v384 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v383 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v384(v4, 255, v383);
          v382 = 1;
          v385 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v385 = v382++;
        }
        *(_QWORD *)(v4 + 256) = v382;
        ++v381;
        *(_BYTE *)(v4 + v385) = v386;
        *(_BYTE *)(v4 + 264) = v386;
      }
      while ( "" != v381 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 23:
      v233 = 0;
      v234 = *(_QWORD *)(v4 + 256);
      do
      {
        v238 = aHiddenAliasFor[v233];
        if ( v234 == 255 )
        {
          v236 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v235 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v236(v4, 255, v235);
          v234 = 1;
          v237 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v237 = v234++;
        }
        *(_QWORD *)(v4 + 256) = v234;
        ++v233;
        *(_BYTE *)(v4 + v237) = v238;
        *(_BYTE *)(v4 + 264) = v238;
      }
      while ( v233 != 17 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 24:
      v334 = (int)a3[4];
      v335 = *((_QWORD *)a3 + 1);
      if ( a3[4] )
      {
        v336 = 0;
        v337 = *(_QWORD *)(v4 + 256);
        do
        {
          v341 = *(_BYTE *)(v335 + v336);
          if ( v337 == 255 )
          {
            v339 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v338 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v339(v4, 255, v338);
            v337 = 1;
            v340 = 0;
            result = *(_QWORD *)(v4 + 320) + 1LL;
            *(_QWORD *)(v4 + 320) = result;
          }
          else
          {
            v340 = v337++;
          }
          *(_QWORD *)(v4 + 256) = v337;
          ++v336;
          *(_BYTE *)(v4 + v340) = v341;
          *(_BYTE *)(v4 + 264) = v341;
        }
        while ( v334 != v336 );
      }
      return result;
    case 25:
    case 26:
    case 27:
      v284 = *(_QWORD *)(v4 + 296);
      if ( !v284 )
        goto LABEL_255;
      v332 = *(__int64 **)(v4 + 296);
      while ( 2 )
      {
        if ( *((_DWORD *)v332 + 4) )
          goto LABEL_313;
        v333 = *(_DWORD *)v332[1];
        if ( (unsigned int)(v333 - 25) > 2 )
        {
          v5 = 0;
          goto LABEL_255;
        }
        if ( (_DWORD)result != v333 )
        {
LABEL_313:
          v332 = (__int64 *)*v332;
          if ( !v332 )
            goto LABEL_255;
          continue;
        }
        return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
      }
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 37:
    case 38:
    case 76:
    case 78:
    case 79:
      v283 = *(_QWORD *)(v4 + 296);
      v286 = nullptr;
      goto LABEL_262;
    case 35:
    case 36:
      v281 = *((_QWORD *)a3 + 1);
      v282 = *(_DWORD *)v281;
      if ( *(_DWORD *)(v4 + 308) )
        goto LABEL_252;
      v5 = 0;
      if ( v282 != 5 )
        goto LABEL_252;
      v551 = *(_DWORD *)(v4 + 344);
      v552 = *(_QWORD **)(v4 + 336);
      if ( v551 <= 0 )
        goto LABEL_625;
      if ( v281 != *v552 )
      {
        v553 = v552 + 2;
        while ( &v552[2 * (unsigned int)(v551 - 1) + 2] != v553 )
        {
          v554 = v553;
          v555 = *v553;
          v553 += 2;
          if ( v281 == v555 )
            goto LABEL_636;
        }
LABEL_625:
        if ( v551 >= *(_DWORD *)(v4 + 348) )
        {
LABEL_725:
          *(_DWORD *)(v4 + 304) = 1;
          return 1;
        }
        v556 = 2LL * v551;
        *(_DWORD *)(v4 + 344) = v551 + 1;
        v557 = &v552[v556 + 1];
        v558 = *(_QWORD **)(v4 + 288);
        v552[v556] = v281;
        while ( v558 )
        {
          v559 = *(_DWORD *)(v4 + 360);
          if ( v559 >= *(_DWORD *)(v4 + 364) )
            goto LABEL_725;
          v560 = *(_QWORD *)(v4 + 352);
          v561 = v558[1];
          *(_DWORD *)(v4 + 360) = v559 + 1;
          v562 = (_QWORD *)(v560 + 16LL * v559);
          v562[1] = v561;
          *v557 = v562;
          v557 = v562;
          v558 = (_QWORD *)*v558;
        }
        *v557 = 0;
        v281 = sub_4A5AE8(v4, (__int64 *)(v281 + 8));
        if ( !v281 )
        {
LABEL_7:
          *(_DWORD *)(v4 + 304) = 1;
          return 1;
        }
        goto LABEL_648;
      }
      v554 = *(_QWORD **)(v4 + 336);
LABEL_636:
      v563 = *(unsigned int ***)(v4 + 328);
      if ( !v563 )
        goto LABEL_646;
      if ( (unsigned int *)v281 == *v563 )
      {
LABEL_683:
        v281 = sub_4A5AE8(v4, (__int64 *)(v281 + 8));
        if ( !v281 )
          goto LABEL_7;
      }
      else
      {
        v564 = *(unsigned int ***)(v4 + 328);
        while ( 1 )
        {
          v564 = (unsigned int **)v564[1];
          if ( !v564 )
            break;
          if ( *v564 != (unsigned int *)v281 && (*v564 != a3 || v563 == v564) )
            continue;
          goto LABEL_683;
        }
LABEL_646:
        v3 = *(_QWORD *)(v4 + 288);
        *(_QWORD *)(v4 + 288) = v554[1];
        v281 = sub_4A5AE8(v4, (__int64 *)(v281 + 8));
        if ( !v281 )
          goto LABEL_724;
        v566 = 1;
      }
LABEL_648:
      v282 = *(_DWORD *)v281;
      if ( *(_DWORD *)v281 != 47 )
      {
        v5 = v566;
LABEL_252:
        v283 = *(_QWORD *)(v4 + 296);
        v284 = v283;
        if ( v282 == 35 || *v6 == v282 )
        {
          v6 = (unsigned int *)v281;
          goto LABEL_255;
        }
        if ( v282 != 36 )
          goto LABEL_255;
        v286 = *(unsigned int **)(v281 + 8);
LABEL_262:
        v287 = *(_QWORD *)(v4 + 288);
        v606 = v6;
        v607[0] = 0;
        *(_QWORD *)s = v283;
        v608[0] = v287;
        *(_QWORD *)(v4 + 296) = s;
        if ( v286 )
          goto LABEL_257;
        goto LABEL_256;
      }
      v589 = *(_DWORD *)(v4 + 312);
      if ( v589 < 0 )
      {
        v5 = v566;
        v284 = *(_QWORD *)(v4 + 296);
        if ( *v6 == 47 )
          v6 = (unsigned int *)v281;
LABEL_255:
        v285 = *(_QWORD *)(v4 + 288);
        v606 = v6;
        v607[0] = 0;
        *(_QWORD *)s = v284;
        v608[0] = v285;
        *(_QWORD *)(v4 + 296) = s;
LABEL_256:
        v286 = *((unsigned int **)v6 + 1);
LABEL_257:
        def_4AD1E4(v4, a2, v286);
        if ( !v607[0] )
          sub_4AD1A0(v4, a2, (__int64)v6);
        result = *(_QWORD *)s;
        *(_QWORD *)(v4 + 296) = *(_QWORD *)s;
        if ( v5 )
          *(_QWORD *)(v4 + 288) = v3;
        return result;
      }
      v281 = sub_4A5A98(v281, v589);
      if ( v281 )
      {
        v5 = v590;
        v282 = *(_DWORD *)v281;
        goto LABEL_252;
      }
      if ( !v590 )
        goto LABEL_7;
LABEL_724:
      *(_QWORD *)(v4 + 288) = v3;
      goto LABEL_7;
    case 39:
      result = *((_QWORD *)a3 + 1);
      if ( (a2 & 4) != 0 )
      {
        v429 = *(int *)(result + 24);
        v430 = *(_QWORD *)(result + 16);
        if ( *(_DWORD *)(result + 24) )
        {
          v431 = 0;
          v432 = *(_QWORD *)(v4 + 256);
          do
          {
            v436 = *(_BYTE *)(v430 + v431);
            if ( v432 == 255 )
            {
              v434 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
              v433 = *(_QWORD *)(v4 + 280);
              *(_BYTE *)(v4 + 255) = 0;
              v434(v4, 255, v433);
              v432 = 1;
              v435 = 0;
              result = *(_QWORD *)(v4 + 320) + 1LL;
              *(_QWORD *)(v4 + 320) = result;
            }
            else
            {
              v435 = v432++;
            }
            *(_QWORD *)(v4 + 256) = v432;
            ++v431;
            *(_BYTE *)(v4 + v435) = v436;
            *(_BYTE *)(v4 + 264) = v436;
          }
          while ( v429 != v431 );
        }
      }
      else
      {
        v324 = *(int *)(result + 8);
        v325 = *(_QWORD *)result;
        if ( *(_DWORD *)(result + 8) )
        {
          v326 = 0;
          v327 = *(_QWORD *)(v4 + 256);
          do
          {
            v331 = *(_BYTE *)(v325 + v326);
            if ( v327 == 255 )
            {
              v329 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
              v328 = *(_QWORD *)(v4 + 280);
              *(_BYTE *)(v4 + 255) = 0;
              v329(v4, 255, v328);
              v327 = 1;
              v330 = 0;
              result = *(_QWORD *)(v4 + 320) + 1LL;
              *(_QWORD *)(v4 + 320) = result;
            }
            else
            {
              v330 = v327++;
            }
            *(_QWORD *)(v4 + 256) = v327;
            ++v326;
            *(_BYTE *)(v4 + v330) = v331;
            *(_BYTE *)(v4 + 264) = v331;
          }
          while ( v324 != v326 );
        }
      }
      return result;
    case 40:
      return def_4AD1E4(v4, a2, *((unsigned int **)a3 + 1));
    case 41:
      v178 = a2 & 0xFFFFFF9F;
      v179 = *(__int64 **)(v4 + 296);
      if ( (a2 & 0x20) == 0 )
      {
        v180 = *((unsigned int **)a3 + 1);
        if ( v180 && (a2 & 0x40) == 0 )
        {
          v547 = *(_QWORD *)(v4 + 288);
          v606 = v6;
          v607[0] = 0;
          *(_QWORD *)s = v179;
          v608[0] = v547;
          *(_QWORD *)(v4 + 296) = s;
          def_4AD1E4(v4, v178, v180);
          result = v607[0];
          *(_QWORD *)(v4 + 296) = *(_QWORD *)s;
          if ( (_DWORD)result )
            return result;
          v548 = *(_QWORD *)(v4 + 256);
          if ( v548 == 255 )
          {
            v550 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v549 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v550(v4, 255, v549);
            *(_QWORD *)(v4 + 256) = 0;
            v548 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v548 + 1;
          *(_BYTE *)(v4 + v548) = 32;
          *(_BYTE *)(v4 + 264) = 32;
          v179 = *(__int64 **)(v4 + 296);
        }
        return sub_4AD960(v4, v178, (unsigned int **)v6 + 2, v179);
      }
      result = sub_4AD960(v4, v178, (unsigned int **)a3 + 2, v179);
      v485 = *((unsigned int **)v6 + 1);
      if ( v485 )
        return def_4AD1E4(v4, v178, v485);
      return result;
    case 42:
      v165 = *(_QWORD *)(v4 + 288);
      *(_QWORD *)s = *(_QWORD *)(v4 + 296);
      v606 = a3;
      v166 = *(_QWORD *)s;
      *(_QWORD *)(v4 + 296) = s;
      v167 = s;
      v607[0] = 0;
      v608[0] = v165;
      if ( v166 && (unsigned int)(**(_DWORD **)(v166 + 8) - 25) <= 2 )
      {
        v168 = 1;
        v169 = (_QWORD *)v166;
        while ( 1 )
        {
          if ( !*((_DWORD *)v169 + 4) )
          {
            if ( v168 > 3 )
            {
              *(_DWORD *)(v4 + 304) = 1;
              return 1;
            }
            v170 = 32LL * v168++;
            v171 = &s[v170];
            v172 = v169[1];
            *(_QWORD *)v171 = *v169;
            *((_QWORD *)v171 + 1) = v172;
            v173 = v169[3];
            *((_QWORD *)v171 + 2) = v169[2];
            *((_QWORD *)v171 + 3) = v173;
            *(_QWORD *)&s[v170] = v167;
            v167 = &s[v170];
            *(_QWORD *)(v4 + 296) = &s[v170];
            *((_DWORD *)v169 + 4) = 1;
          }
          v169 = (_QWORD *)*v169;
          if ( !v169 || (unsigned int)(*(_DWORD *)v169[1] - 25) > 2 )
          {
            def_4AD1E4(v4, a2, *((unsigned int **)a3 + 2));
            *(_QWORD *)(v4 + 296) = v166;
            result = v607[0];
            if ( v607[0] )
              return result;
            if ( v168 != 1 )
            {
              v174 = 32LL * (v168 - 1);
              v175 = (__int64 *)&s[v174 + 8];
              v176 = (_QWORD *)((char *)&v604[-1] + v174 - 32LL * (v168 - 2));
              do
              {
                v177 = *v175;
                v175 -= 4;
                sub_4AD1A0(v4, a2, v177);
              }
              while ( v176 != v175 );
            }
            return sub_4ADFD0(v4, a2, (unsigned int **)v6 + 1, *(__int64 **)(v4 + 296));
          }
        }
      }
      def_4AD1E4(v4, a2, *((unsigned int **)a3 + 2));
      *(_QWORD *)(v4 + 296) = v166;
      result = v607[0];
      if ( !v607[0] )
        return sub_4ADFD0(v4, a2, (unsigned int **)v6 + 1, *(__int64 **)(v4 + 296));
      return result;
    case 43:
    case 45:
      v140 = *((unsigned int **)a3 + 2);
      v141 = *(_QWORD *)(v4 + 288);
      v142 = *(_QWORD *)(v4 + 296);
      v606 = v6;
      *(_QWORD *)s = v142;
      v607[0] = 0;
      *(_QWORD *)(v4 + 296) = s;
      v608[0] = v141;
      def_4AD1E4(v4, a2, v140);
      if ( !v607[0] )
        sub_4AD1A0(v4, a2, (__int64)v6);
      result = *(_QWORD *)s;
      *(_QWORD *)(v4 + 296) = *(_QWORD *)s;
      return result;
    case 44:
      if ( *((_WORD *)a3 + 9) )
      {
        v479 = "_Sat ";
        v480 = *(_QWORD *)(v4 + 256);
        do
        {
          v484 = *v479;
          if ( v480 == 255 )
          {
            v482 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v481 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v482(v4, 255, v481);
            v480 = 1;
            v483 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          else
          {
            v483 = v480++;
          }
          *(_QWORD *)(v4 + 256) = v480;
          ++v479;
          *(_BYTE *)(v4 + v483) = v484;
          *(_BYTE *)(v4 + 264) = v484;
        }
        while ( "" != v479 );
      }
      v130 = *((_QWORD *)v6 + 1);
      if ( *(char ***)(v130 + 8) == &off_51CD18 )
      {
        v132 = *(_QWORD *)(v4 + 256);
      }
      else
      {
        def_4AD1E4(v4, a2, (unsigned int *)v130);
        v131 = *(_QWORD *)(v4 + 256);
        v132 = v131 + 1;
        if ( v131 == 255 )
        {
          v134 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v133 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v134(v4, 255, v133);
          v132 = 1;
          v131 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        *(_QWORD *)(v4 + 256) = v132;
        *(_BYTE *)(v4 + v131) = 32;
        *(_BYTE *)(v4 + 264) = 32;
      }
      result = (unsigned int)*((__int16 *)v6 + 8);
      if ( *((_WORD *)v6 + 8) )
      {
        v135 = "_Accum";
        do
        {
          v139 = *v135;
          if ( v132 == 255 )
          {
            v137 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v136 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v137(v4, 255, v136);
            v132 = 1;
            v138 = 0;
            result = *(_QWORD *)(v4 + 320) + 1LL;
            *(_QWORD *)(v4 + 320) = result;
          }
          else
          {
            v138 = v132++;
          }
          *(_QWORD *)(v4 + 256) = v132;
          ++v135;
          *(_BYTE *)(v4 + v138) = v139;
          *(_BYTE *)(v4 + 264) = v139;
        }
        while ( "" != v135 );
      }
      else
      {
        v416 = "_Fract";
        do
        {
          v420 = *v416;
          if ( v132 == 255 )
          {
            v418 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v417 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v418(v4, 255, v417);
            v132 = 1;
            v419 = 0;
            result = *(_QWORD *)(v4 + 320) + 1LL;
            *(_QWORD *)(v4 + 320) = result;
          }
          else
          {
            v419 = v132++;
          }
          *(_QWORD *)(v4 + 256) = v132;
          ++v416;
          *(_BYTE *)(v4 + v419) = v420;
          *(_BYTE *)(v4 + 264) = v420;
        }
        while ( "" != v416 );
      }
      return result;
    case 46:
    case 47:
      v122 = *((unsigned int **)a3 + 1);
      if ( v122 )
        def_4AD1E4(v4, a2, v122);
      result = *((_QWORD *)v6 + 2);
      if ( result )
      {
        v123 = *(_QWORD *)(v4 + 256);
        if ( v123 > 0xFD )
        {
          *(_BYTE *)(v4 + v123) = 0;
          v124 = v123;
          v123 = 0;
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(v4 + 272))(v4, v124, *(_QWORD *)(v4 + 280));
          *(_QWORD *)(v4 + 256) = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        v125 = ", ";
        do
        {
          v129 = *v125;
          if ( v123 == 255 )
          {
            v127 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v126 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v123 = 1;
            v128 = 0;
            v127(v4, 255, v126);
            ++*(_QWORD *)(v4 + 320);
          }
          else
          {
            v128 = v123++;
          }
          *(_QWORD *)(v4 + 256) = v123;
          ++v125;
          *(_BYTE *)(v4 + v128) = v129;
          *(_BYTE *)(v4 + 264) = v129;
        }
        while ( "" != v125 );
        v406 = *((unsigned int **)v6 + 2);
        v407 = *(_QWORD *)(v4 + 320);
        def_4AD1E4(v4, a2, v406);
        result = *(_QWORD *)(v4 + 320);
        if ( result == v407 )
        {
          result = *(_QWORD *)(v4 + 256);
          if ( result == v123 )
            *(_QWORD *)(v4 + 256) = v128 - 1;
        }
      }
      return result;
    case 48:
      v112 = *((unsigned int **)a3 + 1);
      v113 = *((unsigned int **)v6 + 2);
      if ( v112 )
        def_4AD1E4(v4, a2, v112);
      v114 = *(_QWORD *)(v4 + 256);
      v115 = v114 + 1;
      if ( v114 == 255 )
      {
        v117 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v116 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v117(v4, 255, v116);
        v115 = 1;
        v114 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      *(_QWORD *)(v4 + 256) = v115;
      *(_BYTE *)(v4 + v114) = 123;
      *(_BYTE *)(v4 + 264) = 123;
      def_4AD1E4(v4, a2, v113);
      v118 = *(_QWORD *)(v4 + 256);
      v119 = v118 + 1;
      if ( v118 == 255 )
      {
        v121 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v120 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v121(v4, 255, v120);
        v119 = 1;
        v118 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      goto LABEL_423;
    case 49:
      v104 = *((_QWORD *)a3 + 1);
      v105 = "operator";
      v106 = *(_QWORD *)(v4 + 256);
      v107 = *(_DWORD *)(v104 + 16);
      do
      {
        v111 = *v105;
        if ( v106 == 255 )
        {
          v109 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v108 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v109(v4, 255, v108);
          v106 = 1;
          v110 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v110 = v106++;
        }
        *(_QWORD *)(v4 + 256) = v106;
        ++v105;
        *(_BYTE *)(v4 + v110) = v111;
        *(_BYTE *)(v4 + 264) = v111;
      }
      while ( "" != v105 );
      v356 = *(char **)(v104 + 8);
      if ( (unsigned __int8)(*v356 - 97) <= 0x19u )
      {
        v357 = v106 + 1;
        if ( v106 == 255 )
        {
          v359 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v358 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v359(v4, 255, v358);
          v357 = 1;
          v106 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        *(_QWORD *)(v4 + 256) = v357;
        *(_BYTE *)(v4 + v106) = 32;
        *(_BYTE *)(v4 + 264) = 32;
        v356 = *(char **)(v104 + 8);
      }
      v360 = v107;
      result = v107 - 1;
      if ( v356[v107 - 1] == 32 )
        v360 = v107 - 1;
      if ( v360 )
      {
        v361 = &v356[v360];
        v362 = *(_QWORD *)(v4 + 256);
        do
        {
          v366 = *v356;
          if ( v362 == 255 )
          {
            v364 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v363 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v364(v4, 255, v363);
            v362 = 1;
            v365 = 0;
            result = *(_QWORD *)(v4 + 320) + 1LL;
            *(_QWORD *)(v4 + 320) = result;
          }
          else
          {
            v365 = v362++;
          }
          *(_QWORD *)(v4 + 256) = v362;
          ++v356;
          *(_BYTE *)(v4 + v365) = v366;
          *(_BYTE *)(v4 + 264) = v366;
        }
        while ( v361 != v356 );
      }
      return result;
    case 50:
      v98 = 0;
      v99 = *(_QWORD *)(v4 + 256);
      do
      {
        v103 = aOperator_0[v98];
        if ( v99 == 255 )
        {
          v101 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v100 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v101(v4, 255, v100);
          v99 = 1;
          v102 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v102 = v99++;
        }
        *(_QWORD *)(v4 + 256) = v99;
        ++v98;
        *(_BYTE *)(v4 + v102) = v103;
        *(_BYTE *)(v4 + 264) = v103;
      }
      while ( v98 != 9 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
    case 52:
      v92 = 0;
      v93 = *(_QWORD *)(v4 + 256);
      do
      {
        v97 = aOperator_0[v92];
        if ( v93 == 255 )
        {
          v95 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v94 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v95(v4, 255, v94);
          v93 = 1;
          v96 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v96 = v93++;
        }
        *(_QWORD *)(v4 + 256) = v93;
        ++v92;
        *(_BYTE *)(v4 + v96) = v97;
        *(_BYTE *)(v4 + 264) = v97;
      }
      while ( v92 != 9 );
      if ( *(_QWORD *)(v4 + 368) )
      {
        v371 = *(_QWORD *)(v4 + 288);
        v606 = *(unsigned int **)(v4 + 368);
        *(_QWORD *)s = v371;
        *(_QWORD *)(v4 + 288) = s;
      }
      v372 = *((_QWORD *)v6 + 1);
      if ( *(_DWORD *)v372 == 4 )
      {
        def_4AD1E4(v4, a2, *(unsigned int **)(v372 + 8));
        if ( *(_QWORD *)(v4 + 368) )
          *(_QWORD *)(v4 + 288) = *(_QWORD *)s;
        v492 = *(_QWORD *)(v4 + 256);
        v493 = v492;
        if ( *(_BYTE *)(v4 + 264) == 60 )
        {
          if ( v492 == 255 )
          {
            v572 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v571 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v572(v4, 255, v571);
            *(_QWORD *)(v4 + 256) = 0;
            v492 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          v493 = v492 + 1;
          *(_QWORD *)(v4 + 256) = v492 + 1;
          *(_BYTE *)(v4 + v492) = 32;
          *(_BYTE *)(v4 + 264) = 32;
        }
        v494 = v493 + 1;
        if ( v493 == 255 )
        {
          v496 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v495 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v496(v4, 255, v495);
          v494 = 1;
          v493 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        *(_QWORD *)(v4 + 256) = v494;
        *(_BYTE *)(v4 + v493) = 60;
        *(_BYTE *)(v4 + 264) = 60;
        def_4AD1E4(v4, a2, *(unsigned int **)(*((_QWORD *)v6 + 1) + 16LL));
        if ( *(_BYTE *)(v4 + 264) == 62 )
        {
          v567 = *(_QWORD *)(v4 + 256);
          if ( v567 == 255 )
          {
            v569 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v568 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v569(v4, 255, v568);
            *(_QWORD *)(v4 + 256) = 0;
            v567 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v567 + 1;
          *(_BYTE *)(v4 + v567) = 32;
          *(_BYTE *)(v4 + 264) = 32;
        }
        v497 = *(_QWORD *)(v4 + 256);
        v498 = v497 + 1;
        if ( v497 == 255 )
        {
          v500 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v499 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v500(v4, 255, v499);
          v498 = 1;
          v497 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        *(_QWORD *)(v4 + 256) = v498;
        *(_BYTE *)(v4 + v497) = 62;
        *(_BYTE *)(v4 + 264) = 62;
        return 62;
      }
      else
      {
        def_4AD1E4(v4, a2, (unsigned int *)v372);
        result = *(_QWORD *)(v4 + 368);
        if ( result )
        {
          result = *(_QWORD *)s;
          *(_QWORD *)(v4 + 288) = *(_QWORD *)s;
        }
      }
      return result;
    case 53:
      return sub_4AE290(v4, a2, *((_QWORD *)a3 + 1));
    case 54:
      v84 = *((_QWORD *)a3 + 1);
      v83 = *((_QWORD *)a3 + 2);
      if ( *(_DWORD *)v84 == 49 )
      {
        v486 = *(_DWORD *)v83;
        v487 = **(unsigned __int8 ***)(v84 + 8);
        v488 = *v487;
        if ( v488 == 97 && v487[1] == 100 && !v487[2] && v486 == 3 )
        {
          if ( **(_DWORD **)(v83 + 8) == 1 && **(_DWORD **)(v83 + 16) == 41 )
            v83 = *(_QWORD *)(v83 + 8);
        }
        else
        {
          if ( v486 == 56 )
          {
            sub_4AE350(v4, a2, *(unsigned int **)(v83 + 8));
            return sub_4AE290(v4, a2, v84);
          }
          if ( v488 == 115 )
          {
            v489 = v487[1];
            if ( v489 == 90 )
            {
              if ( !v487[2] )
              {
                for ( j = sub_4A5B18(v4, v83); j; ++v5 )
                {
                  if ( *j != 47 )
                    break;
                  if ( !*((_QWORD *)j + 1) )
                    break;
                  j = *((_DWORD **)j + 2);
                }
                return sub_4A5DB0(v4, v5);
              }
            }
            else if ( v489 == 80 )
            {
              v515 = 0;
              if ( !v487[2] )
              {
                do
                {
                  if ( *(_DWORD *)v83 != 47 )
                    break;
                  v516 = *(_QWORD *)(v83 + 8);
                  if ( !v516 )
                    break;
                  if ( *(_DWORD *)v516 == 74 )
                  {
                    v517 = sub_4A5B18(v4, *(_QWORD *)(v516 + 8));
                    if ( v517 && *v517 == 47 && *((_QWORD *)v517 + 1) )
                    {
                      v518 = 0;
                      do
                      {
                        v517 = *((_DWORD **)v517 + 2);
                        ++v518;
                      }
                      while ( v517 && *v517 == 47 && *((_QWORD *)v517 + 1) );
                      v515 += v518;
                    }
                  }
                  else
                  {
                    ++v515;
                  }
                  v83 = *(_QWORD *)(v83 + 16);
                }
                while ( v83 );
                return sub_4A5DB0(v4, v515);
              }
            }
          }
        }
      }
      else
      {
        if ( *(_DWORD *)v84 == 51 )
        {
          v85 = *(_QWORD *)(v4 + 256);
          if ( v85 == 255 )
          {
            v87 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v86 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v87(v4, 255, v86);
            *(_QWORD *)(v4 + 256) = 0;
            v85 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v85 + 1;
          *(_BYTE *)(v4 + v85) = 40;
          *(_BYTE *)(v4 + 264) = 40;
          def_4AD1E4(v4, a2, *(unsigned int **)(v84 + 8));
          v88 = *(_QWORD *)(v4 + 256);
          v89 = v88 + 1;
          if ( v88 == 255 )
          {
            v91 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v90 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v91(v4, 255, v90);
            v89 = 1;
            v88 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v89;
          *(_BYTE *)(v4 + v88) = 41;
          *(_BYTE *)(v4 + 264) = 41;
          return sub_4AE350(v4, a2, (unsigned int *)v83);
        }
        v487 = nullptr;
      }
      sub_4AE290(v4, a2, v84);
      if ( !v487 )
        return sub_4AE350(v4, a2, (unsigned int *)v83);
      v491 = *v487;
      if ( v491 == 103 )
      {
        if ( v487[1] == 115 && !v487[2] )
          return def_4AD1E4(v4, a2, (unsigned int *)v83);
        return sub_4AE350(v4, a2, (unsigned int *)v83);
      }
      if ( v491 != 115 || v487[1] != 116 || v487[2] )
        return sub_4AE350(v4, a2, (unsigned int *)v83);
      v501 = *(_QWORD *)(v4 + 256);
      v502 = v501 + 1;
      if ( v501 == 255 )
      {
        v504 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v503 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v504(v4, 255, v503);
        v502 = 1;
        v501 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      *(_QWORD *)(v4 + 256) = v502;
      *(_BYTE *)(v4 + v501) = 40;
      *(_BYTE *)(v4 + 264) = 40;
      def_4AD1E4(v4, a2, (unsigned int *)v83);
      v402 = *(_QWORD *)(v4 + 256);
      v403 = v402 + 1;
      if ( v402 == 255 )
      {
        v506 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v505 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v506(v4, 255, v505);
        v403 = 1;
        v402 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
LABEL_405:
      *(_QWORD *)(v4 + 256) = v403;
      *(_BYTE *)(v4 + v402) = 41;
      *(_BYTE *)(v4 + 264) = 41;
      return 41;
    case 55:
      if ( **((_DWORD **)a3 + 2) != 56 )
        goto LABEL_7;
      v71 = *((_QWORD *)a3 + 1);
      v72 = **(char ***)(v71 + 8);
      if ( v72[1] == 99 )
      {
        v73 = *v72;
        v74 = (unsigned __int8)(v73 - 114);
        v75 = (unsigned __int8)(v73 - 99);
        if ( v74 <= 1 || v75 <= 1 )
        {
          sub_4AE290(v4, a2, v71);
          v77 = *(_QWORD *)(v4 + 256);
          if ( v77 == 255 )
          {
            v79 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v78 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v79(v4, 255, v78);
            *(_QWORD *)(v4 + 256) = 0;
            v77 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v77 + 1;
          *(_BYTE *)(v4 + v77) = 60;
          *(_BYTE *)(v4 + 264) = 60;
          def_4AD1E4(v4, a2, *(unsigned int **)(*((_QWORD *)v6 + 2) + 8LL));
          sub_4A5250(v4, ">(", 2);
          def_4AD1E4(v4, a2, *(unsigned int **)(*((_QWORD *)v6 + 2) + 16LL));
          v80 = *(_QWORD *)(v4 + 256);
          if ( v80 == 255 )
          {
            v82 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v81 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v82(v4, 255, v81);
            *(_QWORD *)(v4 + 256) = 0;
            v80 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          goto LABEL_74;
        }
      }
      result = sub_4AE438(v4, a2, v71, (__int64 *)v6 + 2);
      if ( (_DWORD)result )
        return result;
      v519 = *((_QWORD *)v6 + 1);
      if ( *(_DWORD *)v519 == 49 )
      {
        v573 = *(_QWORD *)(v519 + 8);
        if ( *(_DWORD *)(v573 + 16) == 1 && **(_BYTE **)(v573 + 8) == 62 )
        {
          v574 = *(_QWORD *)(v4 + 256);
          if ( v574 == 255 )
          {
            v576 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v575 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v576(v4, 255, v575);
            *(_QWORD *)(v4 + 256) = 0;
            v574 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v574 + 1;
          *(_BYTE *)(v4 + v574) = 40;
          *(_BYTE *)(v4 + 264) = 40;
          v519 = *((_QWORD *)v6 + 1);
        }
      }
      v520 = **(_BYTE ***)(v519 + 8);
      v521 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL);
      if ( *v520 == 99 && v520[1] == 108 && !v520[2] && *(_DWORD *)v521 == 3 )
      {
        if ( **(_DWORD **)(v521 + 16) != 41 )
          *(_DWORD *)(v4 + 304) = 1;
        sub_4AE350(v4, a2, *(unsigned int **)(v521 + 8));
      }
      else
      {
        sub_4AE350(v4, a2, (unsigned int *)v521);
      }
      v522 = *((_QWORD *)v6 + 1);
      v523 = **(unsigned __int8 ***)(v522 + 8);
      v524 = *v523;
      if ( v524 == 105 )
      {
        if ( v523[1] == 120 && !v523[2] )
        {
          v580 = *(_QWORD *)(v4 + 256);
          if ( v580 == 255 )
          {
            v582 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v581 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v582(v4, 255, v581);
            *(_QWORD *)(v4 + 256) = 0;
            v580 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v580 + 1;
          *(_BYTE *)(v4 + v580) = 91;
          *(_BYTE *)(v4 + 264) = 91;
          def_4AD1E4(v4, a2, *(unsigned int **)(*((_QWORD *)v6 + 2) + 16LL));
          v583 = *(_QWORD *)(v4 + 256);
          if ( v583 == 255 )
          {
            v585 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v584 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v585(v4, 255, v584);
            *(_QWORD *)(v4 + 256) = 0;
            v583 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v583 + 1;
          *(_BYTE *)(v4 + v583) = 93;
          *(_BYTE *)(v4 + 264) = 93;
          goto LABEL_590;
        }
      }
      else if ( v524 == 99 && v523[1] == 108 && !v523[2] )
      {
        goto LABEL_589;
      }
      sub_4AE290(v4, a2, v522);
LABEL_589:
      sub_4AE350(v4, a2, *(unsigned int **)(*((_QWORD *)v6 + 2) + 16LL));
LABEL_590:
      result = *((_QWORD *)v6 + 1);
      if ( *(_DWORD *)result != 49 )
        return result;
      result = *(_QWORD *)(result + 8);
      if ( *(_DWORD *)(result + 16) != 1 )
        return result;
      result = **(unsigned __int8 **)(result + 8);
      if ( (_DWORD)result != 62 )
        return result;
      v80 = *(_QWORD *)(v4 + 256);
      if ( v80 == 255 )
      {
        v602 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v601 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v602(v4, 255, v601);
        *(_QWORD *)(v4 + 256) = 0;
        v80 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
LABEL_74:
      *(_QWORD *)(v4 + 256) = v80 + 1;
      *(_BYTE *)(v4 + v80) = 41;
      *(_BYTE *)(v4 + 264) = 41;
      return 41;
    case 57:
      v7 = *((_QWORD *)a3 + 2);
      if ( *(_DWORD *)v7 != 58 || **(_DWORD **)(v7 + 16) != 59 )
        goto LABEL_7;
      result = sub_4AE438(v4, a2, *((_QWORD *)a3 + 1), (__int64 *)a3 + 2);
      if ( (_DWORD)result )
        return result;
      v456 = *((_QWORD *)v6 + 1);
      v455 = *((_QWORD *)v6 + 2);
      v457 = *(_QWORD **)(v456 + 8);
      v459 = *(_QWORD *)(v455 + 8);
      v458 = *(_QWORD *)(v455 + 16);
      v460 = (_BYTE *)*v457;
      v461 = *(unsigned int **)(v458 + 8);
      v83 = *(_QWORD *)(v458 + 16);
      if ( *(_BYTE *)*v457 == 113 && v460[1] == 117 && !v460[2] )
      {
        sub_4AE350(v4, a2, (unsigned int *)v459);
        sub_4AE290(v4, a2, v456);
        sub_4AE350(v4, a2, v461);
        sub_4A5250(v4, " : ", 3);
        return sub_4AE350(v4, a2, (unsigned int *)v83);
      }
      else
      {
        sub_4A5250(v4, "new ", 4);
        if ( *(_QWORD *)(v459 + 8) )
        {
          sub_4AE350(v4, a2, (unsigned int *)v459);
          v577 = *(_QWORD *)(v4 + 256);
          if ( v577 == 255 )
          {
            v579 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v578 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v579(v4, 255, v578);
            *(_QWORD *)(v4 + 256) = 0;
            v577 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          *(_QWORD *)(v4 + 256) = v577 + 1;
          *(_BYTE *)(v4 + v577) = 32;
          *(_BYTE *)(v4 + 264) = 32;
        }
        result = def_4AD1E4(v4, a2, v461);
        if ( v83 )
          return sub_4AE350(v4, a2, (unsigned int *)v83);
      }
      return result;
    case 60:
    case 61:
      v149 = *((_QWORD *)a3 + 1);
      v150 = 0;
      if ( *(_DWORD *)v149 != 39 )
        goto LABEL_137;
      v150 = *(_DWORD *)(*(_QWORD *)(v149 + 8) + 28LL);
      if ( !v150 )
        goto LABEL_137;
      if ( v150 <= 6 )
      {
        if ( !**((_DWORD **)a3 + 2) )
        {
          if ( (_DWORD)result == 61 )
          {
            v594 = *(_QWORD *)(v4 + 256);
            if ( v594 == 255 )
            {
              v596 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
              v595 = *(_QWORD *)(v4 + 280);
              *(_BYTE *)(v4 + 255) = 0;
              v596(v4, 255, v595);
              *(_QWORD *)(v4 + 256) = 0;
              v594 = 0;
              ++*(_QWORD *)(v4 + 320);
            }
            *(_QWORD *)(v4 + 256) = v594 + 1;
            *(_BYTE *)(v4 + v594) = 45;
            *(_BYTE *)(v4 + 264) = 45;
          }
          result = def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
          if ( v150 == 4 )
            return sub_4A5250(v4, "ul", 2);
          if ( v150 <= 4 )
          {
            if ( v150 == 2 )
            {
              v591 = *(_QWORD *)(v4 + 256);
              if ( v591 == 255 )
              {
                v593 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
                v592 = *(_QWORD *)(v4 + 280);
                *(_BYTE *)(v4 + 255) = 0;
                v593(v4, 255, v592);
                *(_QWORD *)(v4 + 256) = 0;
                v591 = 0;
                ++*(_QWORD *)(v4 + 320);
              }
              *(_QWORD *)(v4 + 256) = v591 + 1;
              *(_BYTE *)(v4 + v591) = 117;
              *(_BYTE *)(v4 + 264) = 117;
              return 117;
            }
            else if ( v150 == 3 )
            {
              v586 = *(_QWORD *)(v4 + 256);
              if ( v586 == 255 )
              {
                v588 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
                v587 = *(_QWORD *)(v4 + 280);
                *(_BYTE *)(v4 + 255) = 0;
                v588(v4, 255, v587);
                *(_QWORD *)(v4 + 256) = 0;
                v586 = 0;
                ++*(_QWORD *)(v4 + 320);
              }
              *(_QWORD *)(v4 + 256) = v586 + 1;
              *(_BYTE *)(v4 + v586) = 108;
              *(_BYTE *)(v4 + 264) = 108;
              return 108;
            }
          }
          else if ( v150 == 5 )
          {
            return sub_4A5250(v4, "ll", 2);
          }
          else
          {
            return sub_4A5250(v4, "ull", 3);
          }
          return result;
        }
      }
      else if ( v150 == 7 )
      {
        v476 = *((_QWORD *)a3 + 2);
        if ( !*(_DWORD *)v476 && (_DWORD)result == 60 && *(_DWORD *)(v476 + 16) == 1 )
        {
          v478 = **(unsigned __int8 **)(v476 + 8);
          if ( v478 == 48 )
            return sub_4A5250(v4, "false", 5);
          if ( v478 == 49 )
            return sub_4A5250(v4, "true", 4);
        }
      }
LABEL_137:
      v151 = *(_QWORD *)(v4 + 256);
      if ( v151 == 255 )
      {
        v153 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v152 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v153(v4, 255, v152);
        *(_QWORD *)(v4 + 256) = 0;
        v151 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      *(_QWORD *)(v4 + 256) = v151 + 1;
      *(_BYTE *)(v4 + v151) = 40;
      *(_BYTE *)(v4 + 264) = 40;
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
      v154 = *(_QWORD *)(v4 + 256);
      if ( v154 == 255 )
      {
        v156 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v155 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v156(v4, 255, v155);
        v157 = *(_QWORD *)(v4 + 320);
        *(_BYTE *)v4 = 41;
        *(_BYTE *)(v4 + 264) = 41;
        v158 = *v6;
        *(_QWORD *)(v4 + 256) = 1;
        *(_QWORD *)(v4 + 320) = v157 + 1;
        if ( v158 != 61 )
          goto LABEL_141;
        v543 = 1;
        v546 = 2;
      }
      else
      {
        v543 = v154 + 1;
        *(_QWORD *)(v4 + 256) = v154 + 1;
        *(_BYTE *)(v4 + v154) = 41;
        *(_BYTE *)(v4 + 264) = 41;
        if ( *v6 != 61 )
          goto LABEL_141;
        if ( v154 == 254 )
        {
          v545 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v544 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v545(v4, 255, v544);
          v546 = 1;
          v543 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v546 = v154 + 2;
        }
      }
      *(_QWORD *)(v4 + 256) = v546;
      *(_BYTE *)(v4 + v543) = 45;
      *(_BYTE *)(v4 + 264) = 45;
LABEL_141:
      if ( v150 != 8 )
        return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
      v507 = *(_QWORD *)(v4 + 256);
      v508 = v507 + 1;
      if ( v507 == 255 )
      {
        v510 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v509 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v510(v4, 255, v509);
        v508 = 1;
        v507 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      *(_QWORD *)(v4 + 256) = v508;
      *(_BYTE *)(v4 + v507) = 91;
      *(_BYTE *)(v4 + 264) = 91;
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
      v511 = *(_QWORD *)(v4 + 256);
      v512 = v511 + 1;
      if ( v511 == 255 )
      {
        v514 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v513 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v514(v4, 255, v513);
        v512 = 1;
        v511 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      *(_QWORD *)(v4 + 256) = v512;
      *(_BYTE *)(v4 + v511) = 93;
      *(_BYTE *)(v4 + 264) = 93;
      return 93;
    case 62:
      v143 = "java resource ";
      v144 = *(_QWORD *)(v4 + 256);
      do
      {
        v148 = *v143;
        if ( v144 == 255 )
        {
          v146 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v145 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v146(v4, 255, v145);
          v144 = 1;
          v147 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v147 = v144++;
        }
        *(_QWORD *)(v4 + 256) = v144;
        ++v143;
        *(_BYTE *)(v4 + v147) = v148;
        *(_BYTE *)(v4 + 264) = v148;
      }
      while ( "" != v143 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 63:
      def_4AD1E4(v4, a2, *((unsigned int **)a3 + 1));
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
    case 64:
      v34 = *(_QWORD *)(v4 + 256);
      v35 = *((_BYTE *)a3 + 8);
      v36 = v34 + 1;
      if ( v34 == 255 )
      {
        v38 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v37 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v38(v4, 255, v37);
        v36 = 1;
        v34 = 0;
        result = *(_QWORD *)(v4 + 320) + 1LL;
        *(_QWORD *)(v4 + 320) = result;
      }
      *(_QWORD *)(v4 + 256) = v36;
      *(_BYTE *)(v4 + v34) = v35;
      *(_BYTE *)(v4 + 264) = v35;
      return result;
    case 65:
      sprintf(s, "%d", a3[2]);
      result = strlen(s);
      v27 = result;
      if ( result )
      {
        v28 = 0;
        v29 = *(_QWORD *)(v4 + 256);
        do
        {
          v33 = s[v28];
          if ( v29 == 255 )
          {
            v31 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v30 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v31(v4, 255, v30);
            v29 = 1;
            v32 = 0;
            result = *(_QWORD *)(v4 + 320) + 1LL;
            *(_QWORD *)(v4 + 320) = result;
          }
          else
          {
            v32 = v29++;
          }
          *(_QWORD *)(v4 + 256) = v29;
          ++v28;
          *(_BYTE *)(v4 + v32) = v33;
          *(_BYTE *)(v4 + 264) = v33;
        }
        while ( v27 != v28 );
      }
      return result;
    case 66:
      v21 = "decltype (";
      v22 = *(_QWORD *)(v4 + 256);
      do
      {
        v26 = *v21;
        if ( v22 == 255 )
        {
          v24 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v23 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v24(v4, 255, v23);
          v22 = 1;
          v25 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v25 = v22++;
        }
        *(_QWORD *)(v4 + 256) = v22;
        ++v21;
        *(_BYTE *)(v4 + v25) = v26;
        *(_BYTE *)(v4 + 264) = v26;
      }
      while ( "" != v21 );
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
      v402 = *(_QWORD *)(v4 + 256);
      v403 = v402 + 1;
      if ( v402 == 255 )
      {
        v405 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v404 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v405(v4, 255, v404);
        v403 = 1;
        v402 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      goto LABEL_405;
    case 67:
      v15 = 0;
      v16 = *(_QWORD *)(v4 + 256);
      do
      {
        v20 = aGlobalConstruc[v15];
        if ( v16 == 255 )
        {
          v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v17 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v18(v4, 255, v17);
          v16 = 1;
          v19 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v19 = v16++;
        }
        *(_QWORD *)(v4 + 256) = v16;
        ++v15;
        *(_BYTE *)(v4 + v19) = v20;
        *(_BYTE *)(v4 + 264) = v20;
      }
      while ( v15 != 29 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 68:
      v45 = 0;
      v46 = *(_QWORD *)(v4 + 256);
      do
      {
        v50 = aGlobalDestruct[v45];
        if ( v46 == 255 )
        {
          v48 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v47 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v48(v4, 255, v47);
          v46 = 1;
          v49 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v49 = v46++;
        }
        *(_QWORD *)(v4 + 256) = v46;
        ++v45;
        *(_BYTE *)(v4 + v49) = v50;
        *(_BYTE *)(v4 + 264) = v50;
      }
      while ( v45 != 28 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 69:
      v39 = "{lambda(";
      v40 = *(_QWORD *)(v4 + 256);
      do
      {
        v44 = *v39;
        if ( v40 == 255 )
        {
          v42 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v41 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v42(v4, 255, v41);
          v40 = 1;
          v43 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v43 = v40++;
        }
        *(_QWORD *)(v4 + 256) = v40;
        ++v39;
        *(_BYTE *)(v4 + v43) = v44;
        *(_BYTE *)(v4 + 264) = v44;
      }
      while ( "" != v39 );
      v387 = *((unsigned int **)v6 + 1);
      ++*(_DWORD *)(v4 + 308);
      v388 = ")#";
      def_4AD1E4(v4, a2, v387);
      v389 = *(_QWORD *)(v4 + 256);
      --*(_DWORD *)(v4 + 308);
      do
      {
        v393 = *v388;
        if ( v389 == 255 )
        {
          v391 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v390 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v391(v4, 255, v390);
          v389 = 1;
          v392 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v392 = v389++;
        }
        *(_QWORD *)(v4 + 256) = v389;
        ++v388;
        *(_BYTE *)(v4 + v392) = v393;
        *(_BYTE *)(v4 + 264) = v393;
      }
      while ( "" != v388 );
      sprintf(s, "%d", v6[4] + 1);
      v394 = strlen(s);
      v118 = *(_QWORD *)(v4 + 256);
      if ( v394 )
      {
        for ( k = 0; k != v394; ++k )
        {
          v399 = s[k];
          if ( v118 == 255 )
          {
            v397 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v396 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v397(v4, 255, v396);
            v118 = 1;
            v398 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          else
          {
            v398 = v118++;
          }
          *(_QWORD *)(v4 + 256) = v118;
          *(_BYTE *)(v4 + v398) = v399;
          *(_BYTE *)(v4 + 264) = v399;
        }
      }
      v119 = v118 + 1;
      if ( v118 == 255 )
      {
        v401 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v400 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v401(v4, 255, v400);
        v119 = 1;
        v118 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      goto LABEL_423;
    case 71:
      v51 = "{unnamed type#";
      v52 = *(_QWORD *)(v4 + 256);
      do
      {
        v56 = *v51;
        if ( v52 == 255 )
        {
          v54 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v53 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v54(v4, 255, v53);
          v52 = 1;
          v55 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v55 = v52++;
        }
        *(_QWORD *)(v4 + 256) = v52;
        ++v51;
        *(_BYTE *)(v4 + v55) = v56;
        *(_BYTE *)(v4 + 264) = v56;
      }
      while ( "" != v51 );
      sprintf(s, "%d", *((_QWORD *)v6 + 1) + 1);
      v348 = strlen(s);
      v118 = *(_QWORD *)(v4 + 256);
      if ( v348 )
      {
        for ( m = 0; m != v348; ++m )
        {
          v353 = s[m];
          if ( v118 == 255 )
          {
            v351 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
            v350 = *(_QWORD *)(v4 + 280);
            *(_BYTE *)(v4 + 255) = 0;
            v351(v4, 255, v350);
            v118 = 1;
            v352 = 0;
            ++*(_QWORD *)(v4 + 320);
          }
          else
          {
            v352 = v118++;
          }
          *(_QWORD *)(v4 + 256) = v118;
          *(_BYTE *)(v4 + v352) = v353;
          *(_BYTE *)(v4 + 264) = v353;
        }
      }
      v119 = v118 + 1;
      if ( v118 == 255 )
      {
        v355 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v354 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v355(v4, 255, v354);
        v119 = 1;
        v118 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      goto LABEL_423;
    case 72:
      v9 = 0;
      v10 = *(_QWORD *)(v4 + 256);
      do
      {
        v14 = aTransactionClo[v9];
        if ( v10 == 255 )
        {
          v12 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v11 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v12(v4, 255, v11);
          v10 = 1;
          v13 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v13 = v10++;
        }
        *(_QWORD *)(v4 + 256) = v10;
        ++v9;
        *(_BYTE *)(v4 + v13) = v14;
        *(_BYTE *)(v4 + 264) = v14;
      }
      while ( v9 != 22 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 73:
      v65 = 0;
      v66 = *(_QWORD *)(v4 + 256);
      do
      {
        v70 = aNonTransaction[v65];
        if ( v66 == 255 )
        {
          v68 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v67 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v68(v4, 255, v67);
          v66 = 1;
          v69 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v69 = v66++;
        }
        *(_QWORD *)(v4 + 256) = v66;
        ++v65;
        *(_BYTE *)(v4 + v69) = v70;
        *(_BYTE *)(v4 + 264) = v70;
      }
      while ( v65 != 26 );
      return def_4AD1E4(v4, a2, *((unsigned int **)v6 + 1));
    case 74:
      v57 = 0;
      result = (__int64)sub_4A5B18(v4, *((_QWORD *)a3 + 1));
      if ( !result )
      {
        sub_4AE350(v4, a2, *((unsigned int **)v6 + 1));
        return sub_4A5250(v4, "...", 3);
      }
      while ( *(_DWORD *)result == 47 && *(_QWORD *)(result + 8) )
      {
        result = *(_QWORD *)(result + 16);
        ++v57;
        if ( !result )
        {
          v58 = *((unsigned int **)v6 + 1);
          goto LABEL_53;
        }
      }
      v58 = *((unsigned int **)v6 + 1);
      if ( !v57 )
        return result;
      do
      {
LABEL_53:
        *(_DWORD *)(v4 + 312) = v5;
        result = def_4AD1E4(v4, a2, v58);
        if ( v5 < v57 - 1 )
        {
          v59 = ", ";
          v60 = *(_QWORD *)(v4 + 256);
          do
          {
            v64 = *v59;
            if ( v60 == 255 )
            {
              v62 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
              v61 = *(_QWORD *)(v4 + 280);
              *(_BYTE *)(v4 + 255) = 0;
              v62(v4, 255, v61);
              v60 = 1;
              v63 = 0;
              result = *(_QWORD *)(v4 + 320) + 1LL;
              *(_QWORD *)(v4 + 320) = result;
            }
            else
            {
              v63 = v60++;
            }
            *(_QWORD *)(v4 + 256) = v60;
            ++v59;
            *(_BYTE *)(v4 + v63) = v64;
            *(_BYTE *)(v4 + 264) = v64;
          }
          while ( v59 != "" );
        }
        ++v5;
      }
      while ( v5 != v57 );
      return result;
    case 75:
      v342 = "[abi:";
      def_4AD1E4(v4, a2, *((unsigned int **)a3 + 1));
      v343 = *(_QWORD *)(v4 + 256);
      do
      {
        v347 = *v342;
        if ( v343 == 255 )
        {
          v345 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v344 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v345(v4, 255, v344);
          v343 = 1;
          v346 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v346 = v343++;
        }
        *(_QWORD *)(v4 + 256) = v343;
        ++v342;
        *(_BYTE *)(v4 + v346) = v347;
        *(_BYTE *)(v4 + 264) = v347;
      }
      while ( "" != v342 );
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
      v367 = *(_QWORD *)(v4 + 256);
      v368 = v367 + 1;
      if ( v367 == 255 )
      {
        v380 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v379 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v380(v4, 255, v379);
        v368 = 1;
        v367 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      goto LABEL_354;
    case 77:
      v159 = " [clone ";
      def_4AD1E4(v4, a2, *((unsigned int **)a3 + 1));
      v160 = *(_QWORD *)(v4 + 256);
      do
      {
        v164 = *v159;
        if ( v160 == 255 )
        {
          v162 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v161 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v162(v4, 255, v161);
          v160 = 1;
          v163 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          v163 = v160++;
        }
        *(_QWORD *)(v4 + 256) = v160;
        ++v159;
        *(_BYTE *)(v4 + v163) = v164;
        *(_BYTE *)(v4 + 264) = v164;
      }
      while ( "" != v159 );
      def_4AD1E4(v4, a2, *((unsigned int **)v6 + 2));
      v367 = *(_QWORD *)(v4 + 256);
      v368 = v367 + 1;
      if ( v367 == 255 )
      {
        v370 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v369 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v370(v4, 255, v369);
        v368 = 1;
        v367 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
LABEL_354:
      *(_QWORD *)(v4 + 256) = v368;
      *(_BYTE *)(v4 + v367) = 93;
      *(_BYTE *)(v4 + 264) = 93;
      return 93;
    default:
      result = 1;
      *(_DWORD *)(v4 + 304) = 1;
      return result;
  }
}
// 4ACA4C: conditional instruction was optimized away because w21.4==6
// 4AAAB0: variable 'v3' is possibly undefined
// 4AAB28: variable 'v290' is possibly undefined
// 4AAB3C: variable 'v295' is possibly undefined
// 4AAB40: variable 'v297' is possibly undefined
// 4AC32C: variable 'v515' is possibly undefined
// 4AC4B8: variable 'v296' is possibly undefined
// 4AC4F8: variable 'v531' is possibly undefined
// 4AC520: variable 'v532' is possibly undefined
// 4AC520: variable 'v536' is possibly undefined
// 4AC528: variable 'v535' is possibly undefined
// 4AC52C: variable 'v533' is possibly undefined
// 4AC52C: variable 'v534' is possibly undefined
// 4AC8F4: variable 'v566' is possibly undefined
// 4ACE84: variable 'v590' is possibly undefined
// 51CD18: using guessed type char *off_51CD18;
