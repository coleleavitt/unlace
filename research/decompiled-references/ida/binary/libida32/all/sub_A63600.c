_WORD *__fastcall sub_A63600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  char v12; // al
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  unsigned __int64 *v150; // rsi
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rax
  __int64 v187; // rcx
  unsigned __int64 *v188; // r12
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 (*v195)(); // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rax
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rcx
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // r9
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  __int64 v271; // rcx
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  __int64 v283; // rcx
  __int64 v284; // r8
  __int64 v285; // r9
  __int64 v286; // rcx
  __int64 v287; // r8
  __int64 v288; // r9
  __int64 v289; // rcx
  __int64 v290; // r8
  __int64 v291; // r9
  __int64 v292; // rcx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 v300; // r9
  __int64 v301; // rcx
  __int64 v302; // r8
  __int64 v303; // r9
  __int64 v304; // rcx
  __int64 v305; // r8
  __int64 v306; // r9
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // rcx
  __int64 v311; // r8
  __int64 v312; // r9
  __int64 v313; // rcx
  __int64 v314; // r8
  __int64 v315; // r9
  __int64 v316; // rcx
  __int64 v317; // r8
  __int64 v318; // r9
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 v322; // rcx
  __int64 v323; // r8
  __int64 v324; // r9
  __int64 v325; // rcx
  __int64 v326; // r8
  __int64 v327; // r9
  __int64 v328; // rcx
  __int64 v329; // r8
  __int64 v330; // r9
  __int64 v331; // rcx
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // r9
  __int64 v337; // rcx
  __int64 v338; // r8
  __int64 v339; // r9
  __int64 v340; // rcx
  __int64 v341; // r8
  __int64 v342; // r9
  __int64 v343; // rcx
  __int64 v344; // r8
  __int64 v345; // r9
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 v349; // rcx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 v352; // rcx
  __int64 v353; // r8
  __int64 v354; // r9
  __int64 v355; // rcx
  __int64 v356; // r8
  __int64 v357; // r9
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // r9
  __int64 v361; // rcx
  __int64 v362; // r8
  __int64 v363; // r9
  __int64 v364; // rcx
  __int64 v365; // r8
  __int64 v366; // r9
  __int64 v367; // rcx
  __int64 v368; // r8
  __int64 v369; // r9
  __int64 v370; // rcx
  __int64 v371; // r8
  __int64 v372; // r9
  int v373; // r12d
  __int64 (*v374)(); // r14
  size_t v375; // rax
  __int64 v376; // rcx
  __int64 v377; // r8
  __int64 v378; // r9
  __int64 v379; // rax
  __int64 v380; // rax
  __int64 v381; // rcx
  unsigned __int64 v382; // rdx
  unsigned __int64 v383; // rax
  __int64 v384; // rcx
  __int64 v385; // r8
  __int64 v386; // r9
  __int64 v387; // rcx
  __int64 v388; // r8
  __int64 v389; // r9
  __int64 v390; // rcx
  __int64 v391; // r8
  __int64 v392; // r9
  _WORD *result; // rax
  size_t v394; // rax
  __int64 v395; // rdx
  __int64 v396; // rcx
  __int64 v397; // r8
  __int64 v398; // r9
  _QWORD *v399; // rax
  __int64 v400; // rcx
  __int64 v401; // r8
  __int64 v402; // r9
  __int64 v403; // rcx
  __int64 v404; // r8
  __int64 v405; // r9
  __int64 v406; // rcx
  __int64 v407; // r8
  __int64 v408; // r9
  __int64 v409; // rcx
  __int64 v410; // r8
  __int64 v411; // r9
  __int64 v412; // rcx
  __int64 v413; // r8
  __int64 v414; // r9
  __int64 v415; // rcx
  __int64 v416; // r8
  __int64 v417; // r9
  __int64 v418; // rcx
  __int64 v419; // r8
  __int64 v420; // r9
  __int64 v421; // rcx
  __int64 v422; // r8
  __int64 v423; // r9
  __int64 v424; // rcx
  __int64 v425; // r8
  __int64 v426; // r9
  __int64 v427; // rcx
  __int64 v428; // r8
  __int64 v429; // r9
  __int64 v430; // rcx
  __int64 v431; // r8
  __int64 v432; // r9
  __int64 v433; // rcx
  __int64 v434; // r8
  __int64 v435; // r9
  __int64 v436; // rcx
  __int64 v437; // r8
  __int64 v438; // r9
  __int64 v439; // rcx
  __int64 v440; // r8
  __int64 v441; // r9
  __int64 v442; // rcx
  __int64 v443; // r8
  __int64 v444; // r9
  __int64 v445; // rcx
  __int64 v446; // r8
  __int64 v447; // r9
  __int64 v448; // rcx
  __int64 v449; // r8
  __int64 v450; // r9
  __int64 v451; // rcx
  __int64 v452; // r8
  __int64 v453; // r9
  __int64 v454; // rcx
  __int64 v455; // r8
  __int64 v456; // r9
  __int64 v457; // rcx
  __int64 v458; // r8
  __int64 v459; // r9
  __int64 v460; // rcx
  __int64 v461; // r8
  __int64 v462; // r9
  __int64 v463; // rcx
  __int64 v464; // r8
  __int64 v465; // r9
  __int64 v466; // rcx
  __int64 v467; // r8
  __int64 v468; // r9
  __int64 v469; // rcx
  __int64 v470; // r8
  __int64 v471; // r9
  __int64 v472; // rcx
  __int64 v473; // r8
  __int64 v474; // r9
  __int64 v475; // rcx
  __int64 v476; // r8
  __int64 v477; // r9
  __int64 v478; // rcx
  __int64 v479; // r8
  __int64 v480; // r9
  __int64 v481; // rcx
  __int64 v482; // r8
  __int64 v483; // r9
  __int64 v484; // rcx
  __int64 v485; // r8
  __int64 v486; // r9
  __int64 v487; // rcx
  __int64 v488; // r8
  __int64 v489; // r9
  __int64 v490; // rcx
  __int64 v491; // r8
  __int64 v492; // r9
  __int64 v493; // rcx
  __int64 v494; // r8
  __int64 v495; // r9
  __int64 v496; // rcx
  __int64 v497; // r8
  __int64 v498; // r9
  __int64 v499; // rcx
  __int64 v500; // r8
  __int64 v501; // r9
  __int64 v502; // rcx
  __int64 v503; // r8
  __int64 v504; // r9
  __int64 v505; // rcx
  __int64 v506; // r8
  __int64 v507; // r9
  __int64 v508; // rcx
  __int64 v509; // r8
  __int64 v510; // r9
  __int64 v511; // rcx
  __int64 v512; // r8
  __int64 v513; // r9
  __int64 v514; // rcx
  __int64 v515; // r8
  __int64 v516; // r9
  __int64 v517; // rcx
  __int64 v518; // r8
  __int64 v519; // r9
  __int64 v520; // rcx
  __int64 v521; // r8
  __int64 v522; // r9
  __int64 v523; // rcx
  __int64 v524; // r8
  __int64 v525; // r9
  __int64 v526; // rcx
  __int64 v527; // r8
  __int64 v528; // r9
  __int64 v529; // rcx
  __int64 v530; // r8
  __int64 v531; // r9
  __int64 v532; // rcx
  __int64 v533; // r8
  __int64 v534; // r9
  __int64 v535; // rcx
  __int64 v536; // r8
  __int64 v537; // r9
  __int64 v538; // rcx
  __int64 v539; // r8
  __int64 v540; // r9
  __int64 v541; // rcx
  __int64 v542; // r8
  __int64 v543; // r9
  __int64 v544; // rcx
  __int64 v545; // r8
  __int64 v546; // r9
  __int64 v547; // rcx
  __int64 v548; // r8
  __int64 v549; // r9
  __int64 v550; // rcx
  __int64 v551; // r8
  __int64 v552; // r9
  __int64 v553; // rcx
  __int64 v554; // r8
  __int64 v555; // r9
  __int64 v556; // rcx
  __int64 v557; // r8
  __int64 v558; // r9
  __int64 v559; // rcx
  __int64 v560; // r8
  __int64 v561; // r9
  __int64 v562; // rcx
  __int64 v563; // r8
  __int64 v564; // r9
  __int64 v565; // rcx
  __int64 v566; // r8
  __int64 v567; // r9
  __int64 v568; // rcx
  __int64 v569; // r8
  __int64 v570; // r9
  __int64 v571; // rcx
  __int64 v572; // r8
  __int64 v573; // r9
  __int64 v574; // rcx
  __int64 v575; // r8
  __int64 v576; // r9
  __int64 v577; // rcx
  __int64 v578; // r8
  __int64 v579; // r9
  __int64 v580; // rcx
  __int64 v581; // r8
  __int64 v582; // r9
  __int64 v583; // rcx
  __int64 v584; // r8
  __int64 v585; // r9
  __int64 v586; // rcx
  __int64 v587; // r8
  __int64 v588; // r9
  __int64 v589; // rcx
  __int64 v590; // r8
  __int64 v591; // r9
  __int64 v592; // rcx
  __int64 v593; // r8
  __int64 v594; // r9
  __int64 v595; // rcx
  __int64 v596; // r8
  __int64 v597; // r9
  __int64 v598; // rcx
  __int64 v599; // r8
  __int64 v600; // r9
  __int64 v601; // rcx
  __int64 v602; // r8
  __int64 v603; // r9
  __int64 v604; // rcx
  __int64 v605; // r8
  __int64 v606; // r9
  __int64 v607; // rcx
  __int64 v608; // r8
  __int64 v609; // r9
  __int64 v610; // rcx
  __int64 v611; // r8
  __int64 v612; // r9
  __int64 v613; // rcx
  __int64 v614; // r8
  __int64 v615; // r9
  __int64 v616; // rcx
  __int64 v617; // r8
  __int64 v618; // r9
  __int64 v619; // rcx
  __int64 v620; // r8
  __int64 v621; // r9
  __int64 v622; // rcx
  __int64 v623; // r8
  __int64 v624; // r9
  __int64 v625; // rcx
  __int64 v626; // r8
  __int64 v627; // r9
  __int64 v628; // rcx
  __int64 v629; // r8
  __int64 v630; // r9
  __int64 v631; // rcx
  __int64 v632; // r8
  __int64 v633; // r9
  __int64 v634; // rcx
  __int64 v635; // r8
  __int64 v636; // r9
  __int64 v637; // rcx
  __int64 v638; // r8
  __int64 v639; // r9
  __int64 v640; // rcx
  __int64 v641; // r8
  __int64 v642; // r9
  __int64 v643; // rcx
  __int64 v644; // r8
  __int64 v645; // r9
  __int64 v646; // rcx
  __int64 v647; // r8
  __int64 v648; // r9
  __int64 v649; // rcx
  __int64 v650; // r8
  __int64 v651; // r9
  __int64 v652; // rcx
  __int64 v653; // r8
  __int64 v654; // r9
  __int64 v655; // rcx
  __int64 v656; // r8
  __int64 v657; // r9
  __int64 v658; // rcx
  __int64 v659; // r8
  __int64 v660; // r9
  __int64 v661; // rcx
  __int64 v662; // r8
  __int64 v663; // r9
  __int64 v664; // rcx
  __int64 v665; // r8
  __int64 v666; // r9
  __int64 v667; // rcx
  __int64 v668; // r8
  __int64 v669; // r9
  __int64 v670; // rcx
  __int64 v671; // r8
  __int64 v672; // r9
  __int64 v673; // rcx
  __int64 v674; // r8
  __int64 v675; // r9
  __int64 v676; // rcx
  __int64 v677; // r8
  __int64 v678; // r9
  __int64 v679; // rcx
  __int64 v680; // r8
  __int64 v681; // r9
  __int64 v682; // rcx
  __int64 v683; // r8
  __int64 v684; // r9
  __int64 v685; // rcx
  __int64 v686; // r8
  __int64 v687; // r9
  __int64 v688; // rcx
  __int64 v689; // r8
  __int64 v690; // r9
  __int64 v691; // rcx
  __int64 v692; // r8
  __int64 v693; // r9
  __int64 v694; // rcx
  __int64 v695; // r8
  __int64 v696; // r9
  __int64 v697; // rcx
  __int64 v698; // r8
  __int64 v699; // r9
  __int64 v700; // rcx
  __int64 v701; // r8
  __int64 v702; // r9
  __int64 v703; // rcx
  __int64 v704; // r8
  __int64 v705; // r9
  __int64 v706; // rcx
  __int64 v707; // r8
  __int64 v708; // r9
  __int64 v709; // rcx
  __int64 v710; // r8
  __int64 v711; // r9
  __int64 v712; // rcx
  __int64 v713; // r8
  __int64 v714; // r9
  __int64 v715; // rcx
  __int64 v716; // r8
  __int64 v717; // r9
  __int64 v718; // rcx
  __int64 v719; // r8
  __int64 v720; // r9
  __int64 v721; // rcx
  __int64 v722; // r8
  __int64 v723; // r9
  __int64 v724; // rcx
  __int64 v725; // r8
  __int64 v726; // r9
  __int64 v727; // rcx
  __int64 v728; // r8
  __int64 v729; // r9
  __int64 v730; // rcx
  __int64 v731; // r8
  __int64 v732; // r9
  __int64 v733; // rcx
  __int64 v734; // r8
  __int64 v735; // r9
  __int64 v736; // rcx
  __int64 v737; // r8
  __int64 v738; // r9
  __int64 v739; // rcx
  __int64 v740; // r8
  __int64 v741; // r9
  __int64 v742; // rcx
  __int64 v743; // r8
  __int64 v744; // r9
  __int64 v745; // rcx
  __int64 v746; // r8
  __int64 v747; // r9
  __int64 v748; // rcx
  __int64 v749; // r8
  __int64 v750; // r9
  __int64 v751; // rcx
  __int64 v752; // r8
  __int64 v753; // r9
  __int64 v754; // rcx
  __int64 v755; // r8
  __int64 v756; // r9
  __int64 v757; // rcx
  __int64 v758; // r8
  __int64 v759; // r9
  __int64 v760; // rcx
  __int64 v761; // r8
  __int64 v762; // r9
  __int64 v763; // rcx
  __int64 v764; // r8
  __int64 v765; // r9
  __int64 v766; // rcx
  __int64 v767; // r8
  __int64 v768; // r9
  __int64 v769; // rcx
  __int64 v770; // r8
  __int64 v771; // r9
  __int64 v772; // rcx
  __int64 v773; // r8
  __int64 v774; // r9
  __int64 v775; // rcx
  __int64 v776; // r8
  __int64 v777; // r9
  __int64 v778; // rcx
  __int64 v779; // r8
  __int64 v780; // r9
  __int64 v781; // rcx
  __int64 v782; // r8
  __int64 v783; // r9
  __int64 v784; // rcx
  __int64 v785; // r8
  __int64 v786; // r9
  __int64 v787; // rcx
  __int64 v788; // r8
  __int64 v789; // r9
  __int64 v790; // rcx
  __int64 v791; // r8
  __int64 v792; // r9
  __int64 v793; // rcx
  __int64 v794; // r8
  __int64 v795; // r9
  __int64 v796; // rcx
  __int64 v797; // r8
  __int64 v798; // r9
  __int64 v799; // rcx
  __int64 v800; // r8
  __int64 v801; // r9
  __int64 v802; // rcx
  __int64 v803; // r8
  __int64 v804; // r9
  __int64 v805; // rcx
  __int64 v806; // r8
  __int64 v807; // r9
  __int64 v808; // rcx
  __int64 v809; // r8
  __int64 v810; // r9
  __int64 v811; // rcx
  __int64 v812; // r8
  __int64 v813; // r9
  __int64 v814; // rcx
  __int64 v815; // r8
  __int64 v816; // r9
  __int64 v817; // rcx
  __int64 v818; // r8
  __int64 v819; // r9
  __int64 v820; // rcx
  __int64 v821; // r8
  __int64 v822; // r9
  __int64 v823; // rcx
  __int64 v824; // r8
  __int64 v825; // r9
  __int64 v826; // rcx
  __int64 v827; // r8
  __int64 v828; // r9
  __int64 v829; // rcx
  __int64 v830; // r8
  __int64 v831; // r9
  __int64 v832; // rcx
  __int64 v833; // r8
  __int64 v834; // r9
  __int64 v835; // rcx
  __int64 v836; // r8
  __int64 v837; // r9
  __int64 v838; // rcx
  __int64 v839; // r8
  __int64 v840; // r9
  __int64 v841; // rcx
  __int64 v842; // r8
  __int64 v843; // r9
  __int64 v844; // rcx
  __int64 v845; // r8
  __int64 v846; // r9
  __int64 v847; // rcx
  __int64 v848; // r8
  __int64 v849; // r9
  __int64 v850; // rcx
  __int64 v851; // r8
  __int64 v852; // r9
  __int64 v853; // rcx
  __int64 v854; // r8
  __int64 v855; // r9
  __int64 v856; // rcx
  __int64 v857; // r8
  __int64 v858; // r9
  __int64 v859; // rcx
  __int64 v860; // r8
  __int64 v861; // r9
  __int64 v862; // rcx
  __int64 v863; // r8
  __int64 v864; // r9
  __int64 v865; // rcx
  __int64 v866; // r8
  __int64 v867; // r9
  __int64 v868; // rcx
  __int64 v869; // r8
  __int64 v870; // r9
  __int64 v871; // rcx
  __int64 v872; // r8
  __int64 v873; // r9
  __int64 v874; // rcx
  __int64 v875; // r8
  __int64 v876; // r9
  __int64 v877; // rcx
  __int64 v878; // r8
  __int64 v879; // r9
  __int64 v880; // rcx
  __int64 v881; // r8
  __int64 v882; // r9
  __int64 v883; // rcx
  __int64 v884; // r8
  __int64 v885; // r9
  __int64 v886; // rcx
  __int64 v887; // r8
  __int64 v888; // r9
  __int64 v889; // rcx
  __int64 v890; // r8
  __int64 v891; // r9
  __int64 v892; // rcx
  __int64 v893; // r8
  __int64 v894; // r9
  __int64 v895; // rcx
  __int64 v896; // r8
  __int64 v897; // r9
  __int64 v898; // rcx
  __int64 v899; // r8
  __int64 v900; // r9
  __int64 v901; // rcx
  __int64 v902; // r8
  __int64 v903; // r9
  __int64 v904; // rcx
  __int64 v905; // r8
  __int64 v906; // r9
  __int64 v907; // rcx
  __int64 v908; // r8
  __int64 v909; // r9
  __int64 v910; // rcx
  __int64 v911; // r8
  __int64 v912; // r9
  __int64 v913; // rcx
  __int64 v914; // r8
  __int64 v915; // r9
  __int64 v916; // rcx
  __int64 v917; // r8
  __int64 v918; // r9
  __int64 v919; // rcx
  __int64 v920; // r8
  __int64 v921; // r9
  __int64 v922; // rcx
  __int64 v923; // r8
  __int64 v924; // r9
  __int64 v925; // rcx
  __int64 v926; // r8
  __int64 v927; // r9
  __int64 v928; // rcx
  __int64 v929; // r8
  __int64 v930; // r9
  __int64 v931; // rcx
  __int64 v932; // r8
  __int64 v933; // r9
  __int64 v934; // rcx
  __int64 v935; // r8
  __int64 v936; // r9
  __int64 v937; // rcx
  __int64 v938; // r8
  __int64 v939; // r9
  __int64 v940; // rcx
  __int64 v941; // r8
  __int64 v942; // r9
  __int64 v943; // rcx
  __int64 v944; // r8
  __int64 v945; // r9
  __int64 v946; // rcx
  __int64 v947; // r8
  __int64 v948; // r9
  __int64 v949; // rcx
  __int64 v950; // r8
  __int64 v951; // r9
  __int64 v952; // rcx
  __int64 v953; // r8
  __int64 v954; // r9
  __int64 v955; // rcx
  __int64 v956; // r8
  __int64 v957; // r9
  __int64 v958; // rcx
  __int64 v959; // r8
  __int64 v960; // r9
  __int64 v961; // rcx
  __int64 v962; // r8
  __int64 v963; // r9
  __int64 v964; // rcx
  __int64 v965; // r8
  __int64 v966; // r9
  __int64 v967; // rcx
  __int64 v968; // r8
  __int64 v969; // r9
  __int64 v970; // rcx
  __int64 v971; // r8
  __int64 v972; // r9
  __int64 v973; // rcx
  __int64 v974; // r8
  __int64 v975; // r9
  __int64 v976; // rcx
  __int64 v977; // r8
  __int64 v978; // r9
  __int64 v979; // rcx
  __int64 v980; // r8
  __int64 v981; // r9
  __int64 v982; // rcx
  __int64 v983; // r8
  __int64 v984; // r9
  __int64 v985; // rcx
  __int64 v986; // r8
  __int64 v987; // r9
  __int64 v988; // rcx
  __int64 v989; // r8
  __int64 v990; // r9
  __int64 v991; // rcx
  __int64 v992; // r8
  __int64 v993; // r9
  __int64 v994; // rcx
  __int64 v995; // r8
  __int64 v996; // r9
  __int64 v997; // rcx
  __int64 v998; // r8
  __int64 v999; // r9
  __int64 v1000; // rcx
  __int64 v1001; // r8
  __int64 v1002; // r9
  __int64 v1003; // rcx
  __int64 v1004; // r8
  __int64 v1005; // r9
  __int64 v1006; // rcx
  __int64 v1007; // r8
  __int64 v1008; // r9
  __int64 v1009; // rcx
  __int64 v1010; // r8
  __int64 v1011; // r9
  __int64 v1012; // rcx
  __int64 v1013; // r8
  __int64 v1014; // r9
  __int64 v1015; // rcx
  __int64 v1016; // r8
  __int64 v1017; // r9
  __int64 v1018; // rcx
  __int64 v1019; // r8
  __int64 v1020; // r9
  __int64 v1021; // rcx
  __int64 v1022; // r8
  __int64 v1023; // r9
  __int64 v1024; // rcx
  __int64 v1025; // r8
  __int64 v1026; // r9
  __int64 v1027; // rcx
  __int64 v1028; // r8
  __int64 v1029; // r9
  __int64 v1030; // rcx
  __int64 v1031; // r8
  __int64 v1032; // r9
  __int64 v1033; // rcx
  __int64 v1034; // r8
  __int64 v1035; // r9
  __int64 v1036; // rcx
  __int64 v1037; // r8
  __int64 v1038; // r9
  __int64 v1039; // rcx
  __int64 v1040; // r8
  __int64 v1041; // r9
  __int64 v1042; // rcx
  __int64 v1043; // r8
  __int64 v1044; // r9
  __int64 v1045; // rcx
  __int64 v1046; // r8
  __int64 v1047; // r9
  __int64 v1048; // rcx
  __int64 v1049; // r8
  __int64 v1050; // r9
  __int64 v1051; // rcx
  __int64 v1052; // r8
  __int64 v1053; // r9
  __int64 v1054; // rcx
  __int64 v1055; // r8
  __int64 v1056; // r9
  __int64 v1057; // rcx
  __int64 v1058; // r8
  __int64 v1059; // r9
  __int64 v1060; // rcx
  __int64 v1061; // r8
  __int64 v1062; // r9
  __int64 v1063; // rcx
  __int64 v1064; // r8
  __int64 v1065; // r9
  __int64 v1066; // rcx
  __int64 v1067; // r8
  __int64 v1068; // r9
  __int64 v1069; // rcx
  __int64 v1070; // r8
  __int64 v1071; // r9
  __int64 v1072; // rcx
  __int64 v1073; // r8
  __int64 v1074; // r9
  __int64 v1075; // rcx
  __int64 v1076; // r8
  __int64 v1077; // r9
  __int64 v1078; // rcx
  __int64 v1079; // r8
  __int64 v1080; // r9
  __int64 v1081; // rcx
  __int64 v1082; // r8
  __int64 v1083; // r9
  __int64 v1084; // rcx
  __int64 v1085; // r8
  __int64 v1086; // r9
  __int64 v1087; // rcx
  __int64 v1088; // r8
  __int64 v1089; // r9
  __int64 v1090; // rcx
  __int64 v1091; // r8
  __int64 v1092; // r9
  __int64 v1093; // rcx
  __int64 v1094; // r8
  __int64 v1095; // r9
  __int64 v1096; // rcx
  __int64 v1097; // r8
  __int64 v1098; // r9
  __int64 v1099; // rcx
  __int64 v1100; // r8
  __int64 v1101; // r9
  __int64 v1102; // rcx
  __int64 v1103; // r8
  __int64 v1104; // r9
  __int64 v1105; // rcx
  __int64 v1106; // r8
  __int64 v1107; // r9
  __int64 v1108; // rcx
  __int64 v1109; // r8
  __int64 v1110; // r9
  __int64 v1111; // rcx
  __int64 v1112; // r8
  __int64 v1113; // r9
  __int64 v1114; // rcx
  __int64 v1115; // r8
  __int64 v1116; // r9
  __int64 v1117; // rcx
  __int64 v1118; // r8
  __int64 v1119; // r9
  __int64 v1120; // rcx
  __int64 v1121; // r8
  __int64 v1122; // r9
  __int64 v1123; // rcx
  __int64 v1124; // r8
  __int64 v1125; // r9
  __int64 v1126; // rcx
  __int64 v1127; // r8
  __int64 v1128; // r9
  __int64 v1129; // rcx
  __int64 v1130; // r8
  __int64 v1131; // r9
  __int64 v1132; // rcx
  __int64 v1133; // r8
  __int64 v1134; // r9
  __int64 v1135; // rcx
  __int64 v1136; // r8
  __int64 v1137; // r9
  __int64 v1138; // rcx
  __int64 v1139; // r8
  __int64 v1140; // r9
  __int64 v1141; // rcx
  __int64 v1142; // r8
  __int64 v1143; // r9
  __int64 v1144; // rcx
  __int64 v1145; // r8
  __int64 v1146; // r9
  __int64 v1147; // rcx
  __int64 v1148; // r8
  __int64 v1149; // r9
  __int64 v1150; // rcx
  __int64 v1151; // r8
  __int64 v1152; // r9
  __int64 v1153; // rcx
  __int64 v1154; // r8
  __int64 v1155; // r9
  __int64 v1156; // rcx
  __int64 v1157; // r8
  __int64 v1158; // r9
  __int64 v1159; // rcx
  __int64 v1160; // r8
  __int64 v1161; // r9
  __int64 v1162; // rcx
  __int64 v1163; // r8
  __int64 v1164; // r9
  __int64 v1165; // rcx
  __int64 v1166; // r8
  __int64 v1167; // r9
  __int64 v1168; // rcx
  __int64 v1169; // r8
  __int64 v1170; // r9
  __int64 v1171; // rcx
  __int64 v1172; // r8
  __int64 v1173; // r9
  __int64 v1174; // rcx
  __int64 v1175; // r8
  __int64 v1176; // r9
  __int64 v1177; // rcx
  __int64 v1178; // r8
  __int64 v1179; // r9
  __int64 v1180; // rcx
  __int64 v1181; // r8
  __int64 v1182; // r9
  __int64 v1183; // rcx
  __int64 v1184; // r8
  __int64 v1185; // r9
  __int64 v1186; // rcx
  __int64 v1187; // r8
  __int64 v1188; // r9
  __int64 v1189; // rcx
  __int64 v1190; // r8
  __int64 v1191; // r9
  __int64 v1192; // rcx
  __int64 v1193; // r8
  __int64 v1194; // r9
  __int64 v1195; // rcx
  __int64 v1196; // r8
  __int64 v1197; // r9
  __int64 v1198; // rcx
  __int64 v1199; // r8
  __int64 v1200; // r9
  __int64 v1201; // rcx
  __int64 v1202; // r8
  __int64 v1203; // r9
  __int64 v1204; // rcx
  __int64 v1205; // r8
  __int64 v1206; // r9
  __int64 v1207; // rcx
  __int64 v1208; // r8
  __int64 v1209; // r9
  __int64 v1210; // rcx
  __int64 v1211; // r8
  __int64 v1212; // r9
  __int64 v1213; // rcx
  __int64 v1214; // r8
  __int64 v1215; // r9
  __int64 v1216; // rcx
  __int64 v1217; // r8
  __int64 v1218; // r9
  __int64 v1219; // rcx
  __int64 v1220; // r8
  __int64 v1221; // r9
  __int64 v1222; // rcx
  __int64 v1223; // r8
  __int64 v1224; // r9
  __int64 v1225; // rcx
  __int64 v1226; // r8
  __int64 v1227; // r9
  __int64 v1228; // rcx
  __int64 v1229; // r8
  __int64 v1230; // r9
  __int64 v1231; // rcx
  __int64 v1232; // r8
  __int64 v1233; // r9
  __int64 v1234; // rcx
  __int64 v1235; // r8
  __int64 v1236; // r9
  __int64 v1237; // rcx
  __int64 v1238; // r8
  __int64 v1239; // r9
  __int64 v1240; // rcx
  __int64 v1241; // r8
  __int64 v1242; // r9
  __int64 v1243; // rcx
  __int64 v1244; // r8
  __int64 v1245; // r9
  __int64 v1246; // rcx
  __int64 v1247; // r8
  __int64 v1248; // r9
  __int64 v1249; // rcx
  __int64 v1250; // r8
  __int64 v1251; // r9
  __int64 v1252; // rcx
  __int64 v1253; // r8
  __int64 v1254; // r9
  __int64 v1255; // rcx
  __int64 v1256; // r8
  __int64 v1257; // r9
  __int64 v1258; // rcx
  __int64 v1259; // r8
  __int64 v1260; // r9
  __int64 v1261; // rcx
  __int64 v1262; // r8
  __int64 v1263; // r9
  __int64 v1264; // rcx
  __int64 v1265; // r8
  __int64 v1266; // r9
  __int64 v1267; // rcx
  __int64 v1268; // r8
  __int64 v1269; // r9
  __int64 v1270; // rcx
  __int64 v1271; // r8
  __int64 v1272; // r9
  __int64 v1273; // rcx
  __int64 v1274; // r8
  __int64 v1275; // r9
  __int64 v1276; // rcx
  __int64 v1277; // r8
  __int64 v1278; // r9
  __int64 v1279; // rcx
  __int64 v1280; // r8
  __int64 v1281; // r9
  __int64 v1282; // rcx
  __int64 v1283; // r8
  __int64 v1284; // r9
  __int64 v1285; // rcx
  __int64 v1286; // r8
  __int64 v1287; // r9
  __int64 v1288; // rcx
  __int64 v1289; // r8
  __int64 v1290; // r9
  __int64 v1291; // rcx
  __int64 v1292; // r8
  __int64 v1293; // r9
  __int64 v1294; // rcx
  __int64 v1295; // r8
  __int64 v1296; // r9
  __int64 v1297; // rcx
  __int64 v1298; // r8
  __int64 v1299; // r9
  __int64 v1300; // rcx
  __int64 v1301; // r8
  __int64 v1302; // r9
  __int64 v1303; // rcx
  __int64 v1304; // r8
  __int64 v1305; // r9
  __int64 v1306; // rcx
  __int64 v1307; // r8
  __int64 v1308; // r9
  __int64 v1309; // rcx
  __int64 v1310; // r8
  __int64 v1311; // r9
  __int64 v1312; // rcx
  __int64 v1313; // r8
  __int64 v1314; // r9
  __int64 v1315; // rcx
  __int64 v1316; // r8
  __int64 v1317; // r9
  __int64 v1318; // rcx
  __int64 v1319; // r8
  __int64 v1320; // r9
  __int64 v1321; // rcx
  __int64 v1322; // r8
  __int64 v1323; // r9
  __int64 v1324; // rcx
  __int64 v1325; // r8
  __int64 v1326; // r9
  __int64 v1327; // rcx
  __int64 v1328; // r8
  __int64 v1329; // r9
  __int64 v1330; // rcx
  __int64 v1331; // r8
  __int64 v1332; // r9
  __int64 v1333; // rcx
  __int64 v1334; // r8
  __int64 v1335; // r9
  __int64 v1336; // rcx
  __int64 v1337; // r8
  __int64 v1338; // r9
  __int64 v1339; // rcx
  __int64 v1340; // r8
  __int64 v1341; // r9
  __int64 v1342; // rcx
  __int64 v1343; // r8
  __int64 v1344; // r9
  __int64 v1345; // rcx
  __int64 v1346; // r8
  __int64 v1347; // r9
  __int64 v1348; // rcx
  __int64 v1349; // r8
  __int64 v1350; // r9
  __int64 v1351; // rcx
  __int64 v1352; // r8
  __int64 v1353; // r9
  __int64 v1354; // rcx
  __int64 v1355; // r8
  __int64 v1356; // r9
  __int64 v1357; // rcx
  __int64 v1358; // r8
  __int64 v1359; // r9
  __int64 v1360; // rcx
  __int64 v1361; // r8
  __int64 v1362; // r9
  __int64 v1363; // rcx
  __int64 v1364; // r8
  __int64 v1365; // r9
  __int64 v1366; // rcx
  __int64 v1367; // r8
  __int64 v1368; // r9
  __int64 v1369; // rcx
  __int64 v1370; // r8
  __int64 v1371; // r9
  __int64 v1372; // rcx
  __int64 v1373; // r8
  __int64 v1374; // r9
  __int64 v1375; // rcx
  __int64 v1376; // r8
  __int64 v1377; // r9
  __int64 v1378; // rcx
  __int64 v1379; // r8
  __int64 v1380; // r9
  __int64 v1381; // rcx
  __int64 v1382; // r8
  __int64 v1383; // r9
  __int64 v1384; // rcx
  __int64 v1385; // r8
  __int64 v1386; // r9
  __int64 v1387; // rcx
  __int64 v1388; // r8
  __int64 v1389; // r9
  __int64 v1390; // rcx
  __int64 v1391; // r8
  __int64 v1392; // r9
  __int64 v1393; // rcx
  __int64 v1394; // r8
  __int64 v1395; // r9
  __int64 v1396; // rcx
  __int64 v1397; // r8
  __int64 v1398; // r9
  __int64 v1399; // rcx
  __int64 v1400; // r8
  __int64 v1401; // r9
  __int64 v1402; // rcx
  __int64 v1403; // r8
  __int64 v1404; // r9
  __int64 v1405; // rcx
  __int64 v1406; // r8
  __int64 v1407; // r9
  __int64 v1408; // rcx
  __int64 v1409; // r8
  __int64 v1410; // r9
  __int64 v1411; // rcx
  __int64 v1412; // r8
  __int64 v1413; // r9
  __int64 v1414; // rcx
  __int64 v1415; // r8
  __int64 v1416; // r9
  __int64 v1417; // rcx
  __int64 v1418; // r8
  __int64 v1419; // r9
  __int64 v1420; // rcx
  __int64 v1421; // r8
  __int64 v1422; // r9
  __int64 v1423; // rcx
  __int64 v1424; // r8
  __int64 v1425; // r9
  __int64 v1426; // rcx
  __int64 v1427; // r8
  __int64 v1428; // r9
  __int64 v1429; // rcx
  __int64 v1430; // r8
  __int64 v1431; // r9
  __int64 v1432; // rcx
  __int64 v1433; // r8
  __int64 v1434; // r9
  __int64 v1435; // rcx
  __int64 v1436; // r8
  __int64 v1437; // r9
  __int64 v1438; // rcx
  __int64 v1439; // r8
  __int64 v1440; // r9
  __int64 v1441; // rcx
  __int64 v1442; // r8
  __int64 v1443; // r9
  __int64 v1444; // rcx
  __int64 v1445; // r8
  __int64 v1446; // r9
  __int64 v1447; // rcx
  __int64 v1448; // r8
  __int64 v1449; // r9
  __int64 v1450; // rcx
  __int64 v1451; // r8
  __int64 v1452; // r9
  __int64 v1453; // rcx
  __int64 v1454; // r8
  __int64 v1455; // r9
  __int64 v1456; // rcx
  __int64 v1457; // r8
  __int64 v1458; // r9
  __int64 v1459; // rcx
  __int64 v1460; // r8
  __int64 v1461; // r9
  __int64 v1462; // rcx
  __int64 v1463; // r8
  __int64 v1464; // r9
  __int64 v1465; // rcx
  __int64 v1466; // r8
  __int64 v1467; // r9
  __int64 v1468; // rcx
  __int64 v1469; // r8
  __int64 v1470; // r9
  __int64 v1471; // rcx
  __int64 v1472; // r8
  __int64 v1473; // r9
  __int64 v1474; // rcx
  __int64 v1475; // r8
  __int64 v1476; // r9
  __int64 v1477; // rcx
  __int64 v1478; // r8
  __int64 v1479; // r9
  __int64 v1480; // rcx
  __int64 v1481; // r8
  __int64 v1482; // r9
  __int64 v1483; // rcx
  __int64 v1484; // r8
  __int64 v1485; // r9
  __int64 v1486; // rcx
  __int64 v1487; // r8
  __int64 v1488; // r9
  __int64 v1489; // rcx
  __int64 v1490; // r8
  __int64 v1491; // r9
  __int64 v1492; // rcx
  __int64 v1493; // r8
  __int64 v1494; // r9
  __int64 v1495; // rcx
  __int64 v1496; // r8
  __int64 v1497; // r9
  __int64 v1498; // rcx
  __int64 v1499; // r8
  __int64 v1500; // r9
  __int64 v1501; // rcx
  __int64 v1502; // r8
  __int64 v1503; // r9
  __int64 v1504; // rcx
  __int64 v1505; // r8
  __int64 v1506; // r9
  __int64 v1507; // rcx
  __int64 v1508; // r8
  __int64 v1509; // r9
  __int64 v1510; // rcx
  __int64 v1511; // r8
  __int64 v1512; // r9
  __int64 v1513; // rcx
  __int64 v1514; // r8
  __int64 v1515; // r9
  __int64 v1516; // rcx
  __int64 v1517; // r8
  __int64 v1518; // r9
  __int64 v1519; // rcx
  __int64 v1520; // r8
  __int64 v1521; // r9
  __int64 v1522; // rcx
  __int64 v1523; // r8
  __int64 v1524; // r9
  __int64 v1525; // rcx
  __int64 v1526; // r8
  __int64 v1527; // r9
  double v1528[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = a1;
  v9 = *(_QWORD *)(a1 + 2320);
  *(_QWORD *)&v1528[0] = a3;
  *(__m128 *)(a1 + 17448) = _mm_loadh_ps(v1528);
  if ( (*(_BYTE *)(v9 + 1) & 8) != 0 )
  {
    v10 = *(_DWORD *)(a2 + 340);
    if ( *(_BYTE *)(v9 + 740) )
      v10 = *(_DWORD *)(v9 + 736);
    if ( v10 <= 9 )
    {
      v11 = sub_E13460(a1);
    }
    else
    {
      if ( v10 != 10 )
        return (_WORD *)sub_A662A0(a1);
      v11 = sub_E53660(a1);
    }
  }
  else
  {
    v11 = 0;
  }
  a1 = *(_QWORD *)(a1 + 17432);
  *(_QWORD *)(v8 + 17432) = v11;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v12 = (*(_BYTE *)(*(_QWORD *)(v8 + 2320) + 208LL) >> 4) & 3;
  if ( v12 == 1 )
  {
    v13 = 1;
  }
  else
  {
    if ( v12 )
    {
      if ( v12 == 2 )
      {
        v13 = 0;
        goto LABEL_13;
      }
      return (_WORD *)sub_A662A0(a1);
    }
    v13 = *(_BYTE *)(a2 + 508);
  }
LABEL_13:
  *(_BYTE *)(v8 + 17440) = v13;
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18632), 435, a4, a5, a6);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18640), 436, v14, v15, v16);
  v20 = (unsigned __int64 *)(v8 + 18648);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 2320) + 46LL) & 0x40) != 0 )
    sub_A5DF20(v8, v20, 448, v17, v18, v19);
  else
    sub_A5DF20(v8, v20, 437, v17, v18, v19);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18704), 449, v21, v22, v23);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18712), 451, v24, v25, v26);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18720), 452, v27, v28, v29);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18728), 453, v30, v31, v32);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18736), 454, v33, v34, v35);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18752), 438, v36, v37, v38);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18760), 443, v39, v40, v41);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18768), 444, v42, v43, v44);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18776), 445, v45, v46, v47);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18784), 446, v48, v49, v50);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18800), 481, v51, v52, v53);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18808), 482, v54, v55, v56);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18816), 483, v57, v58, v59);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18824), 486, v60, v61, v62);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18832), 487, v63, v64, v65);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19048), 484, v66, v67, v68);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18840), 456, v69, v70, v71);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18848), 457, v72, v73, v74);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18856), 458, v75, v76, v77);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18864), 459, v78, v79, v80);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18872), 460, v81, v82, v83);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18880), 461, v84, v85, v86);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18888), 462, v87, v88, v89);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18896), 463, v90, v91, v92);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18904), 464, v93, v94, v95);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18912), 465, v96, v97, v98);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18920), 466, v99, v100, v101);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18928), 467, v102, v103, v104);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18936), 468, v105, v106, v107);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18944), 469, v108, v109, v110);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18952), 470, v111, v112, v113);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18960), 471, v114, v115, v116);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18968), 472, v117, v118, v119);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18976), 473, v120, v121, v122);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18984), 474, v123, v124, v125);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18992), 475, v126, v127, v128);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19000), 476, v129, v130, v131);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19008), 477, v132, v133, v134);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19016), 478, v135, v136, v137);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19024), 479, v138, v139, v140);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18744), 455, v141, v142, v143);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18792), 447, v144, v145, v146);
  v150 = (unsigned __int64 *)(v8 + 18656);
  if ( (unsigned __int8)sub_1009F90(*(unsigned int *)(a2 + 152)) )
    sub_A5DF20(v8, v150, 450, v147, v148, v149);
  else
    sub_A5DF20(v8, v150, 439, v147, v148, v149);
  if ( (**(_DWORD **)(v8 + 2320) & 0x10000800) == 0x10000800 )
    *(_QWORD *)(v8 + 18664) = *(_QWORD *)(v8 + 18656);
  else
    *(_QWORD *)(v8 + 18664) = sub_A3FE00((_QWORD *)v8, *(_DWORD *)(a2 + 152));
  *(_QWORD *)(v8 + 18672) = sub_A3FE00((_QWORD *)v8, *(_DWORD *)(a2 + 156));
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18680), 440, v151, v152, v153);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 2320) + 1LL) & 8) != 0 )
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18688), 441, v154, v155, v156);
  else
    *(_QWORD *)(v8 + 18688) = sub_A3FE00((_QWORD *)v8, *(_DWORD *)(a2 + 160));
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 2320) + 1LL) & 8) != 0 )
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 18696), 442, v157, v158, v159);
  else
    *(_QWORD *)(v8 + 18696) = sub_A3FE00((_QWORD *)v8, *(_DWORD *)(a2 + 164));
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19072), 497, v160, v161, v162);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19080), 498, v163, v164, v165);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19088), 499, v166, v167, v168);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19096), 500, v169, v170, v171);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19120), 501, v172, v173, v174);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19104), 502, v175, v176, v177);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19128), 504, v178, v179, v180);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19112), 503, v181, v182, v183);
  v186 = *(_QWORD *)(v8 + 2320);
  v187 = *(unsigned int *)(v186 + 64);
  if ( (_DWORD)v187 )
  {
    v188 = (unsigned __int64 *)(v8 + 19504);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19504), 506, v187, v184, v185);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19512), 507, v1522, v1523, v1524);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19520), 508, v1525, v1526, v1527);
    v186 = *(_QWORD *)(v8 + 2320);
    if ( (*(_BYTE *)(v186 + 97) & 4) == 0 || *(_DWORD *)(v186 + 64) )
      goto LABEL_25;
    goto LABEL_67;
  }
  v188 = (unsigned __int64 *)(v8 + 19504);
  if ( (*(_BYTE *)(v186 + 97) & 4) != 0 )
  {
LABEL_67:
    sub_A5DF20(v8, v188, 506, v187, v184, v185);
    v186 = *(_QWORD *)(v8 + 2320);
  }
LABEL_25:
  if ( (*(_BYTE *)(v186 + 164) & 8) != 0 )
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19496), 505, v187, v184, v185);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19136), 489, v187, v184, v185);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19144), 490, v189, v190, v191);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19152), 491, v192, v193, v194);
  v198 = *(_QWORD *)(v8 + 2320);
  if ( (*(_BYTE *)(v198 + 47) & 0x20) != 0 )
  {
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19168), 0, (__int64)v195, v196, v197);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19176), 1, v1366, v1367, v1368);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19184), 2, v1369, v1370, v1371);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19192), 3, v1372, v1373, v1374);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19200), 4, v1375, v1376, v1377);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19208), 5, v1378, v1379, v1380);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19216), 6, v1381, v1382, v1383);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19224), 7, v1384, v1385, v1386);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19232), 8, v1387, v1388, v1389);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19240), 9, v1390, v1391, v1392);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19248), 10, v1393, v1394, v1395);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19256), 11, v1396, v1397, v1398);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19264), 12, v1399, v1400, v1401);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19272), 13, v1402, v1403, v1404);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19280), 14, v1405, v1406, v1407);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19288), 15, v1408, v1409, v1410);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19296), 16, v1411, v1412, v1413);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19304), 17, v1414, v1415, v1416);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19312), 18, v1417, v1418, v1419);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19320), 19, v1420, v1421, v1422);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19328), 20, v1423, v1424, v1425);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19336), 21, v1426, v1427, v1428);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19344), 22, v1429, v1430, v1431);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19352), 23, v1432, v1433, v1434);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19360), 24, v1435, v1436, v1437);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19368), 25, v1438, v1439, v1440);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19376), 26, v1441, v1442, v1443);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19384), 27, v1444, v1445, v1446);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19392), 28, v1447, v1448, v1449);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19400), 29, v1450, v1451, v1452);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19408), 30, v1453, v1454, v1455);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19416), 31, v1456, v1457, v1458);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19424), 32, v1459, v1460, v1461);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19432), 33, v1462, v1463, v1464);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19440), 34, v1465, v1466, v1467);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19448), 35, v1468, v1469, v1470);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19456), 492, v1471, v1472, v1473);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19464), 493, v1474, v1475, v1476);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19472), 494, v1477, v1478, v1479);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19480), 495, v1480, v1481, v1482);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19488), 496, v1483, v1484, v1485);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19528), 36, v1486, v1487, v1488);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19536), 37, v1489, v1490, v1491);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19544), 38, v1492, v1493, v1494);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19552), 39, v1495, v1496, v1497);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19560), 40, v1498, v1499, v1500);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19568), 41, v1501, v1502, v1503);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19576), 42, v1504, v1505, v1506);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19584), 43, v1507, v1508, v1509);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19592), 44, v1510, v1511, v1512);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19600), 45, v1513, v1514, v1515);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19608), 46, v1516, v1517, v1518);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19616), 47, v1519, v1520, v1521);
    v198 = *(_QWORD *)(v8 + 2320);
  }
  if ( (*(_BYTE *)(v198 + 89) & 1) != 0 )
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22712), 434, (__int64)v195, v196, v197);
  if ( (*(_BYTE *)(a2 + 393) & 2) != 0 || a3 && (*(_BYTE *)(a3 + 393) & 2) != 0 )
  {
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19624), 48, (__int64)v195, v196, v197);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19632), 49, v199, v200, v201);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19640), 50, v202, v203, v204);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19648), 51, v205, v206, v207);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19656), 52, v208, v209, v210);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19664), 53, v211, v212, v213);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19672), 54, v214, v215, v216);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19680), 55, v217, v218, v219);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19688), 56, v220, v221, v222);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19696), 57, v223, v224, v225);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19704), 58, v226, v227, v228);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19712), 59, v229, v230, v231);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19720), 60, v232, v233, v234);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19728), 61, v235, v236, v237);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19736), 62, v238, v239, v240);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19744), 63, v241, v242, v243);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19752), 64, v244, v245, v246);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19760), 65, v247, v248, v249);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19768), 66, v250, v251, v252);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19776), 67, v253, v254, v255);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19784), 68, v256, v257, v258);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19792), 69, v259, v260, v261);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19800), 70, v262, v263, v264);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19808), 71, v265, v266, v267);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19816), 72, v268, v269, v270);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19824), 73, v271, v272, v273);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19832), 74, v274, v275, v276);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19840), 75, v277, v278, v279);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19848), 76, v280, v281, v282);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19856), 77, v283, v284, v285);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19864), 78, v286, v287, v288);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19872), 79, v289, v290, v291);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19880), 80, v292, v293, v294);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19888), 81, v295, v296, v297);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19896), 82, v298, v299, v300);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19904), 83, v301, v302, v303);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19912), 84, v304, v305, v306);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19920), 85, v307, v308, v309);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19928), 86, v310, v311, v312);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19936), 87, v313, v314, v315);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19944), 88, v316, v317, v318);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19952), 89, v319, v320, v321);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19960), 90, v322, v323, v324);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19968), 91, v325, v326, v327);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19976), 92, v328, v329, v330);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19984), 93, v331, v332, v333);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19992), 94, v334, v335, v336);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20000), 95, v337, v338, v339);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20008), 96, v340, v341, v342);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20016), 97, v343, v344, v345);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20024), 98, v346, v347, v348);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20032), 99, v349, v350, v351);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20040), 100, v352, v353, v354);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20048), 101, v355, v356, v357);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20056), 102, v358, v359, v360);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20064), 103, v361, v362, v363);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20072), 104, v364, v365, v366);
  }
  if ( (unsigned int)(*(_DWORD *)(a2 + 248) - 23) <= 1 )
  {
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20080), 105, (__int64)v195, v196, v197);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20088), 106, v367, v368, v369);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20096), 107, v370, v371, v372);
  }
  if ( (*(_BYTE *)(a2 + 393) & 4) != 0 )
  {
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20104), 108, (__int64)v195, v196, v197);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20112), 109, v400, v401, v402);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20120), 110, v403, v404, v405);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20128), 111, v406, v407, v408);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20136), 112, v409, v410, v411);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20144), 113, v412, v413, v414);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20152), 114, v415, v416, v417);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20160), 115, v418, v419, v420);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20168), 116, v421, v422, v423);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20176), 117, v424, v425, v426);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20184), 118, v427, v428, v429);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20192), 119, v430, v431, v432);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20200), 120, v433, v434, v435);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20208), 121, v436, v437, v438);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20216), 122, v439, v440, v441);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20224), 123, v442, v443, v444);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20232), 124, v445, v446, v447);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20240), 125, v448, v449, v450);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20248), 126, v451, v452, v453);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20256), 127, v454, v455, v456);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20264), 128, v457, v458, v459);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20272), 129, v460, v461, v462);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20280), 130, v463, v464, v465);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20288), 131, v466, v467, v468);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20296), 132, v469, v470, v471);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20304), 133, v472, v473, v474);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20312), 134, v475, v476, v477);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20320), 135, v478, v479, v480);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20328), 136, v481, v482, v483);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20336), 137, v484, v485, v486);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20344), 138, v487, v488, v489);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20352), 139, v490, v491, v492);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20360), 140, v493, v494, v495);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20368), 141, v496, v497, v498);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20376), 142, v499, v500, v501);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20384), 143, v502, v503, v504);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20392), 144, v505, v506, v507);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20400), 145, v508, v509, v510);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20408), 146, v511, v512, v513);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20416), 147, v514, v515, v516);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20424), 148, v517, v518, v519);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20432), 149, v520, v521, v522);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20440), 150, v523, v524, v525);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20448), 151, v526, v527, v528);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20456), 152, v529, v530, v531);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20464), 153, v532, v533, v534);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20472), 154, v535, v536, v537);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20480), 155, v538, v539, v540);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20488), 156, v541, v542, v543);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20496), 157, v544, v545, v546);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20504), 158, v547, v548, v549);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20512), 159, v550, v551, v552);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20520), 160, v553, v554, v555);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20528), 161, v556, v557, v558);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20536), 162, v559, v560, v561);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20544), 163, v562, v563, v564);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20552), 164, v565, v566, v567);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20560), 165, v568, v569, v570);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20568), 166, v571, v572, v573);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20576), 167, v574, v575, v576);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20584), 168, v577, v578, v579);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20592), 169, v580, v581, v582);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20600), 170, v583, v584, v585);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20608), 171, v586, v587, v588);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20616), 172, v589, v590, v591);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20624), 173, v592, v593, v594);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20632), 174, v595, v596, v597);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20640), 175, v598, v599, v600);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20648), 176, v601, v602, v603);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20656), 177, v604, v605, v606);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20664), 178, v607, v608, v609);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20672), 179, v610, v611, v612);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20680), 180, v613, v614, v615);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20688), 181, v616, v617, v618);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20696), 182, v619, v620, v621);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20704), 183, v622, v623, v624);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20712), 184, v625, v626, v627);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20720), 185, v628, v629, v630);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20728), 186, v631, v632, v633);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20736), 187, v634, v635, v636);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20744), 188, v637, v638, v639);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20752), 189, v640, v641, v642);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20760), 190, v643, v644, v645);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20768), 191, v646, v647, v648);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20776), 192, v649, v650, v651);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20784), 193, v652, v653, v654);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20792), 194, v655, v656, v657);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20800), 195, v658, v659, v660);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20808), 196, v661, v662, v663);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20816), 197, v664, v665, v666);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20824), 198, v667, v668, v669);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20832), 199, v670, v671, v672);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20840), 200, v673, v674, v675);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20848), 201, v676, v677, v678);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20856), 202, v679, v680, v681);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20864), 203, v682, v683, v684);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20872), 204, v685, v686, v687);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20880), 205, v688, v689, v690);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20888), 206, v691, v692, v693);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20896), 207, v694, v695, v696);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20904), 208, v697, v698, v699);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20912), 209, v700, v701, v702);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20920), 210, v703, v704, v705);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20928), 211, v706, v707, v708);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20936), 212, v709, v710, v711);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20944), 213, v712, v713, v714);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20952), 214, v715, v716, v717);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20960), 215, v718, v719, v720);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20968), 216, v721, v722, v723);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20976), 217, v724, v725, v726);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20984), 218, v727, v728, v729);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 20992), 219, v730, v731, v732);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21000), 220, v733, v734, v735);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21008), 221, v736, v737, v738);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21016), 222, v739, v740, v741);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21024), 223, v742, v743, v744);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21032), 224, v745, v746, v747);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21040), 225, v748, v749, v750);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21048), 226, v751, v752, v753);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21056), 227, v754, v755, v756);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21064), 228, v757, v758, v759);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21072), 229, v760, v761, v762);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21080), 230, v763, v764, v765);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21088), 231, v766, v767, v768);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21096), 232, v769, v770, v771);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21104), 233, v772, v773, v774);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21112), 234, v775, v776, v777);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21120), 235, v778, v779, v780);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21128), 236, v781, v782, v783);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21136), 237, v784, v785, v786);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21144), 238, v787, v788, v789);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21152), 239, v790, v791, v792);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21160), 240, v793, v794, v795);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21168), 241, v796, v797, v798);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21176), 242, v799, v800, v801);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21184), 243, v802, v803, v804);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21192), 244, v805, v806, v807);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21200), 245, v808, v809, v810);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21208), 246, v811, v812, v813);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21216), 247, v814, v815, v816);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21224), 248, v817, v818, v819);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21232), 249, v820, v821, v822);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21240), 250, v823, v824, v825);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21248), 251, v826, v827, v828);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21256), 252, v829, v830, v831);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21264), 253, v832, v833, v834);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21272), 254, v835, v836, v837);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21280), 255, v838, v839, v840);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21288), 256, v841, v842, v843);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21296), 257, v844, v845, v846);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21304), 258, v847, v848, v849);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21312), 259, v850, v851, v852);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21320), 260, v853, v854, v855);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21328), 261, v856, v857, v858);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21336), 262, v859, v860, v861);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21344), 263, v862, v863, v864);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21352), 264, v865, v866, v867);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21360), 265, v868, v869, v870);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21368), 266, v871, v872, v873);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21376), 267, v874, v875, v876);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21384), 268, v877, v878, v879);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21392), 269, v880, v881, v882);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21400), 270, v883, v884, v885);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21408), 271, v886, v887, v888);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21416), 272, v889, v890, v891);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21424), 273, v892, v893, v894);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21432), 274, v895, v896, v897);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21440), 275, v898, v899, v900);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21448), 276, v901, v902, v903);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21456), 277, v904, v905, v906);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21464), 278, v907, v908, v909);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21472), 279, v910, v911, v912);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21480), 280, v913, v914, v915);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21488), 281, v916, v917, v918);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21496), 282, v919, v920, v921);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21504), 283, v922, v923, v924);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21512), 284, v925, v926, v927);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21520), 285, v928, v929, v930);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21528), 286, v931, v932, v933);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21536), 287, v934, v935, v936);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21544), 288, v937, v938, v939);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21552), 289, v940, v941, v942);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21560), 290, v943, v944, v945);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21568), 291, v946, v947, v948);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21576), 292, v949, v950, v951);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21584), 293, v952, v953, v954);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21592), 294, v955, v956, v957);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21600), 295, v958, v959, v960);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21608), 296, v961, v962, v963);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21616), 297, v964, v965, v966);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21624), 298, v967, v968, v969);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21632), 299, v970, v971, v972);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21640), 300, v973, v974, v975);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21648), 301, v976, v977, v978);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21656), 302, v979, v980, v981);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21664), 303, v982, v983, v984);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21672), 304, v985, v986, v987);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21680), 305, v988, v989, v990);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21688), 306, v991, v992, v993);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21696), 307, v994, v995, v996);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21704), 308, v997, v998, v999);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21712), 309, v1000, v1001, v1002);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21720), 310, v1003, v1004, v1005);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21728), 311, v1006, v1007, v1008);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21736), 312, v1009, v1010, v1011);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21744), 313, v1012, v1013, v1014);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21752), 314, v1015, v1016, v1017);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21760), 315, v1018, v1019, v1020);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21768), 316, v1021, v1022, v1023);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21776), 317, v1024, v1025, v1026);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21784), 318, v1027, v1028, v1029);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21792), 319, v1030, v1031, v1032);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21800), 320, v1033, v1034, v1035);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21808), 321, v1036, v1037, v1038);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21816), 322, v1039, v1040, v1041);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21824), 323, v1042, v1043, v1044);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21832), 324, v1045, v1046, v1047);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21840), 325, v1048, v1049, v1050);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21848), 326, v1051, v1052, v1053);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21856), 327, v1054, v1055, v1056);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21864), 328, v1057, v1058, v1059);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21872), 329, v1060, v1061, v1062);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21880), 330, v1063, v1064, v1065);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21888), 331, v1066, v1067, v1068);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21896), 332, v1069, v1070, v1071);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21904), 333, v1072, v1073, v1074);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21912), 334, v1075, v1076, v1077);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21920), 335, v1078, v1079, v1080);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21928), 336, v1081, v1082, v1083);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21936), 337, v1084, v1085, v1086);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21944), 338, v1087, v1088, v1089);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21952), 339, v1090, v1091, v1092);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21960), 340, v1093, v1094, v1095);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21968), 341, v1096, v1097, v1098);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21976), 342, v1099, v1100, v1101);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21984), 343, v1102, v1103, v1104);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 21992), 344, v1105, v1106, v1107);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22000), 345, v1108, v1109, v1110);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22008), 346, v1111, v1112, v1113);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22016), 347, v1114, v1115, v1116);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22024), 348, v1117, v1118, v1119);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22032), 349, v1120, v1121, v1122);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22040), 350, v1123, v1124, v1125);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22048), 351, v1126, v1127, v1128);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22056), 352, v1129, v1130, v1131);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22064), 353, v1132, v1133, v1134);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22072), 354, v1135, v1136, v1137);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22080), 355, v1138, v1139, v1140);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22088), 356, v1141, v1142, v1143);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22096), 357, v1144, v1145, v1146);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22104), 358, v1147, v1148, v1149);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22112), 359, v1150, v1151, v1152);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22120), 360, v1153, v1154, v1155);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22128), 361, v1156, v1157, v1158);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22136), 362, v1159, v1160, v1161);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22144), 363, v1162, v1163, v1164);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22152), 364, v1165, v1166, v1167);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22160), 365, v1168, v1169, v1170);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22168), 366, v1171, v1172, v1173);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22176), 367, v1174, v1175, v1176);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22184), 368, v1177, v1178, v1179);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22192), 369, v1180, v1181, v1182);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22200), 370, v1183, v1184, v1185);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22208), 371, v1186, v1187, v1188);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22216), 372, v1189, v1190, v1191);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22224), 373, v1192, v1193, v1194);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22232), 374, v1195, v1196, v1197);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22240), 375, v1198, v1199, v1200);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22248), 376, v1201, v1202, v1203);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22256), 377, v1204, v1205, v1206);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22264), 378, v1207, v1208, v1209);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22272), 379, v1210, v1211, v1212);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22280), 380, v1213, v1214, v1215);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22288), 381, v1216, v1217, v1218);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22296), 382, v1219, v1220, v1221);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22304), 383, v1222, v1223, v1224);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22312), 384, v1225, v1226, v1227);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22320), 385, v1228, v1229, v1230);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22328), 386, v1231, v1232, v1233);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22336), 387, v1234, v1235, v1236);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22344), 388, v1237, v1238, v1239);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22352), 389, v1240, v1241, v1242);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22360), 390, v1243, v1244, v1245);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22368), 391, v1246, v1247, v1248);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22376), 392, v1249, v1250, v1251);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22384), 393, v1252, v1253, v1254);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22392), 394, v1255, v1256, v1257);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22400), 395, v1258, v1259, v1260);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22408), 396, v1261, v1262, v1263);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22416), 397, v1264, v1265, v1266);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22424), 398, v1267, v1268, v1269);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22432), 399, v1270, v1271, v1272);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22440), 400, v1273, v1274, v1275);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22448), 401, v1276, v1277, v1278);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22456), 402, v1279, v1280, v1281);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22464), 403, v1282, v1283, v1284);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22472), 404, v1285, v1286, v1287);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22480), 405, v1288, v1289, v1290);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22488), 406, v1291, v1292, v1293);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22496), 407, v1294, v1295, v1296);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22504), 408, v1297, v1298, v1299);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22512), 409, v1300, v1301, v1302);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22520), 410, v1303, v1304, v1305);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22528), 411, v1306, v1307, v1308);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22536), 412, v1309, v1310, v1311);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22544), 413, v1312, v1313, v1314);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22552), 414, v1315, v1316, v1317);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22560), 415, v1318, v1319, v1320);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22568), 416, v1321, v1322, v1323);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22576), 417, v1324, v1325, v1326);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22584), 418, v1327, v1328, v1329);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22592), 419, v1330, v1331, v1332);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22600), 420, v1333, v1334, v1335);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22608), 421, v1336, v1337, v1338);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22616), 422, v1339, v1340, v1341);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22624), 423, v1342, v1343, v1344);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22632), 424, v1345, v1346, v1347);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22640), 425, v1348, v1349, v1350);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22648), 426, v1351, v1352, v1353);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22656), 427, v1354, v1355, v1356);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22664), 428, v1357, v1358, v1359);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22672), 429, v1360, v1361, v1362);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22680), 430, v1363, v1364, v1365);
  }
  v373 = *(_DWORD *)(a2 + 248);
  if ( (unsigned int)(v373 - 55) <= 1 )
  {
    v374 = *(__int64 (**)())(*(_QWORD *)a2 + 584LL);
    v375 = j__strlen("reference-types");
    v195 = sub_A321A0;
    if ( v374 != sub_A321A0 )
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, char *, size_t))v374)(a2, "reference-types", v375) )
        sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22688), 431, (__int64)v195, v196, v197);
      v373 = *(_DWORD *)(a2 + 248);
    }
  }
  if ( (unsigned int)(v373 - 25) <= 1 || a3 && (unsigned int)(*(_DWORD *)(a3 + 248) - 25) <= 1 )
  {
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22696), 432, (__int64)v195, v196, v197);
    sub_A5DF20(v8, (unsigned __int64 *)(v8 + 22704), 433, v376, v377, v378);
  }
  if ( (*(_BYTE *)(a2 + 184) & 1) != 0 )
    v379 = *(_QWORD *)(v8 + 18704);
  else
    v379 = *(_QWORD *)(v8 + 18640);
  *(_QWORD *)(v8 + 19160) = v379;
  v380 = *(_QWORD *)(v8 + 2320);
  *(_QWORD *)(v8 + 1600) = 0;
  *(_QWORD *)(v8 + 1624) = 0;
  if ( (*(_BYTE *)(v380 + 60) & 1) != 0 )
  {
    v381 = 0;
    if ( (*(_QWORD *)(v8 + 18632) & 8) != 0 )
      v381 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v8 + 18632) & 0xFFFFFFFFFFFFFFF0LL));
    v382 = v381 & 0xFFFFFFFF000001FFLL | *(_QWORD *)(v8 + 18632) & 7LL;
    BYTE1(v382) |= 0xAu;
    v383 = sub_A4D1E0(v8, *(_QWORD *)(*(_QWORD *)(v8 + 18632) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL, v382);
    *(_QWORD *)(v8 + 19056) = sub_A4C4B0(
                                v8,
                                *(_QWORD *)&byte_8[v383 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                              | ((unsigned __int8)*(_QWORD *)&byte_8[v383 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v383)
                              & 7);
  }
  else
  {
    *(_QWORD *)(v8 + 19056) = sub_A4C4B0(v8, *(_QWORD *)(v8 + 18632));
  }
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19064), 488, v384, v385, v386);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19032), 480, v387, v388, v389);
  sub_A5DF20(v8, (unsigned __int64 *)(v8 + 19040), 485, v390, v391, v392);
  result = *(_WORD **)(v8 + 2320);
  *(_QWORD *)(v8 + 22736) = 0;
  if ( (*result & 0x480) != 0 )
  {
    v394 = j__strlen("_GUID");
    *(_QWORD *)(v8 + 22744) = sub_A63480((_QWORD *)v8, "_GUID", v394, 0);
    v399 = sub_6E4280(
             (__int64 *)(*(_QWORD *)(*(_QWORD *)(v8 + 2264) + 80LL) + 72LL),
             *(_QWORD *)(*(_QWORD *)(v8 + 2264) + 80LL),
             v395,
             v396,
             v397,
             v398);
    return (_WORD *)sub_B70D90(v399 + 5, *(_QWORD *)(v8 + 22744));
  }
  return result;
}

