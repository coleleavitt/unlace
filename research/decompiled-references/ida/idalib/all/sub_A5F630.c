__int64 __fastcall sub_A5F630(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // rdi
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  unsigned __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  const char *v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  const char *v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  unsigned __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned int v63; // ecx
  _QWORD *v64; // rcx
  _QWORD *v65; // r8
  __int64 v66; // rax
  unsigned __int64 v67; // rsi
  __m128i v68; // xmm1
  char *v69; // rsi
  __m128i v70; // xmm0
  __m128i v71; // xmm2
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rax
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rax
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 v230; // rax
  __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rax
  __int64 v234; // rax
  __int64 v235; // rax
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // rax
  __int64 v239; // rax
  __int64 v240; // rax
  __int64 v241; // rax
  __int64 v242; // rax
  __int64 v243; // rax
  __int64 v244; // rax
  __int64 v245; // rax
  __int64 v246; // rax
  __int64 v247; // rax
  __int64 v248; // rax
  __int64 v249; // rax
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rax
  __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rax
  __int64 v256; // rax
  __int64 v257; // rax
  __int64 v258; // rax
  __int64 v259; // rax
  __int64 v260; // rax
  __int64 v261; // rax
  __int64 v262; // rax
  __int64 v263; // rax
  __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rax
  __int64 v267; // rax
  __int64 v268; // rax
  __int64 v269; // rax
  __int64 v270; // rax
  __int64 v271; // rax
  __int64 v272; // rax
  __int64 v273; // rax
  __int64 v274; // rax
  __int64 v275; // rax
  __int64 v276; // rax
  __int64 v277; // rax
  __int64 v278; // rax
  __int64 v279; // rax
  __int64 v280; // rax
  __int64 v281; // rax
  __int64 v282; // rax
  __int64 v283; // rax
  __int64 v284; // rax
  __int64 v285; // rax
  __int64 v286; // rax
  __int64 v287; // rax
  __int64 v288; // rax
  __int64 v289; // rax
  __int64 v290; // rax
  __int64 v291; // rax
  __int64 v292; // rax
  __int64 v293; // rax
  __int64 v294; // rax
  __int64 v295; // rax
  __int64 v296; // rax
  __int64 v297; // rax
  __int64 v298; // rax
  __int64 v299; // rax
  __int64 v300; // rax
  __int64 v301; // rax
  __int64 v302; // rax
  __int64 v303; // rax
  __int64 v304; // rax
  __int64 v305; // rax
  __int64 v306; // rax
  __int64 v307; // rax
  __int64 v308; // rax
  __int64 v309; // rax
  __int64 v310; // rax
  __int64 v311; // rax
  __int64 v312; // rax
  __int64 v313; // rax
  __int64 v314; // rax
  __int64 v315; // rax
  __int64 v316; // rax
  __int64 v317; // rax
  __int64 v318; // rax
  __int64 v319; // rax
  __int64 v320; // rax
  __int64 v321; // rax
  __int64 v322; // rax
  __int64 v323; // rax
  __int64 v324; // rax
  __int64 v325; // rax
  __int64 v326; // rax
  __int64 v327; // rax
  __int64 v328; // rax
  __int64 v329; // rax
  __int64 v330; // rax
  __int64 v331; // rax
  __int64 v332; // rax
  __int64 v333; // rax
  __int64 v334; // rax
  __int64 v335; // rax
  __int64 v336; // rax
  __int64 v337; // rax
  __int64 v338; // rax
  __int64 v339; // rax
  __int64 v340; // rax
  __int64 v341; // rax
  __int64 v342; // rax
  __int64 v343; // rax
  __int64 v344; // rax
  __int64 v345; // rax
  __int64 v346; // rax
  __int64 v347; // rax
  __int64 v348; // rax
  __int64 v349; // rax
  __int64 v350; // rax
  __int64 v351; // rax
  __int64 v352; // rax
  __int64 v353; // rax
  __int64 v354; // rax
  __int64 v355; // rax
  __int64 v356; // rax
  __int64 v357; // rax
  __int64 v358; // rax
  __int64 v359; // rax
  __int64 v360; // rax
  __int64 v361; // rax
  __int64 v362; // rax
  __int64 v363; // rax
  __int64 v364; // rax
  __int64 v365; // rax
  __int64 v366; // rax
  __int64 v367; // rax
  __int64 v368; // rax
  __int64 v369; // rax
  __int64 v370; // rax
  __int64 v371; // rax
  __int64 v372; // rax
  __int64 v373; // rax
  __int64 v374; // rax
  __int64 v375; // rax
  __int64 v376; // rax
  __int64 v377; // rax
  __int64 v378; // rax
  __int64 v379; // rax
  __int64 v380; // rax
  __int64 v381; // rax
  __int64 v382; // rax
  __int64 v383; // rax
  __int64 v384; // rax
  __int64 v385; // rax
  __int64 v386; // rax
  __int64 v387; // rax
  __int64 v388; // rax
  __int64 v389; // rax
  __int64 v390; // rax
  __int64 v391; // rax
  __int64 v392; // rax
  __int64 v393; // rax
  __int64 v394; // rax
  __int64 v395; // rax
  __int64 v396; // rax
  __int64 v397; // rax
  __int64 v398; // rax
  __int64 v399; // rax
  __int64 v400; // rax
  __int64 v401; // rax
  __int64 v402; // rax
  __int64 v403; // rax
  __int64 v404; // rax
  __int64 v405; // rax
  __int64 v406; // rax
  __int64 v407; // rax
  __int64 v408; // rax
  __int64 v409; // rax
  __int64 v410; // rax
  __int64 v411; // rax
  __int64 v412; // rax
  __int64 v413; // rax
  __int64 v414; // rax
  __int64 v415; // rax
  __int64 v416; // rax
  __int64 v417; // rax
  __int64 v418; // rax
  __int64 v419; // rax
  __int64 v420; // rax
  __int64 v421; // rax
  __int64 v422; // rax
  __int64 v423; // rax
  __int64 v424; // rax
  __int64 v425; // rax
  __int64 v426; // rax
  __int64 v427; // rax
  __int64 v428; // rax
  __int64 v429; // rax
  __int64 v430; // rax
  __int64 v431; // rax
  __int64 v432; // rax
  __int64 v433; // rax
  __int64 v434; // rax
  __int64 v435; // rax
  __int64 v436; // rax
  __int64 v437; // rax
  __int64 v438; // rax
  __int64 v439; // rax
  __int64 v440; // rax
  __int64 v441; // rax
  __int64 v442; // rax
  __int64 v443; // rax
  __int64 v444; // rax
  __int64 v445; // rax
  __int64 v446; // rax
  __int64 v447; // rax
  __int64 v448; // rax
  __int64 v449; // rax
  __int64 v450; // rax
  __int64 v451; // rax
  __int64 v452; // rax
  __int64 v453; // rax
  __int64 v454; // rax
  __int64 v455; // rax
  __int64 v456; // rax
  __int64 v457; // rax
  __int64 v458; // rax
  __int64 v459; // rax
  __int64 v460; // rax
  __int64 v461; // rax
  __int64 v462; // rax
  __int64 v463; // rax
  __int64 v464; // rax
  __int64 v465; // rax
  __int64 v466; // rax
  __int64 v467; // rax
  __int64 v468; // rax
  __int64 v469; // rax
  __int64 v470; // rax
  __int64 v471; // rax
  __int64 v472; // rax
  __int64 v473; // rax
  __int64 v474; // rax
  __int64 v475; // rax
  __int64 v476; // rax
  __int64 v477; // rax
  __int64 v478; // rax
  __int64 v479; // rax
  __int64 v480; // rax
  __int64 v481; // rax
  __int64 v482; // rax
  __int64 v483; // rax
  __int64 v484; // rax
  __int64 v485; // rax
  __int64 v486; // rax
  __int64 v487; // rax
  __int64 v488; // rax
  __int64 v489; // rax
  __int64 v490; // rax
  __int64 v491; // rax
  __int64 v492; // rax
  __int64 v493; // rax
  __int64 v494; // rax
  __int64 v495; // rax
  __int64 v496; // rax
  __int64 v497; // rax
  __int64 v498; // rax
  __int64 v499; // rax
  __int64 v500; // rax
  __int64 v501; // rax
  __int64 v502; // rax
  __int64 v503; // rax
  __int64 v504; // rax
  __int64 v505; // rax
  __int64 v506; // rax
  __int64 v507; // rax
  __int64 v508; // rax
  __int64 v509; // rax
  __int64 v510; // rax
  __int64 v511; // rax
  __int64 v512; // rax
  __int64 v513; // rax
  __int64 v514; // rax
  __int64 v515; // rax
  __int64 v516; // rax
  __int64 v517; // rax
  __int64 v518; // rax
  __int64 v519; // rax
  __int64 v520; // rax
  __int64 v521; // rax
  __int64 v522; // rax
  __int64 v523; // rax
  __int64 v524; // rax
  __int64 v525; // rax
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
  __int64 v554; // rax
  __int64 v555; // rax
  __int64 v556; // rax
  __int64 v557; // rax
  __int64 v558; // rax
  __int64 v559; // rax
  __int64 v560; // rax
  __int64 v561; // rax
  __int64 v562; // rax
  __int64 v563; // rax
  __int64 v564; // rax
  __int64 v565; // rax
  __int64 v566; // rax
  __int64 v567; // rax
  __int64 v568; // rax
  __int64 v569; // rax
  __int64 v570; // rax
  __int64 v571; // rax
  __int64 v572; // rax
  __int64 v573; // rax
  __int64 v574; // rax
  __int64 v575; // rax
  __int64 v576; // rax
  __int64 v577; // rax
  __int64 v578; // rax
  __int64 v579; // rax
  __int64 v580; // rax
  __int64 v581; // rax
  __int64 v582; // rax
  __int64 v583; // rax
  __int64 v584; // rax
  __int64 v585; // rax
  __int64 v586; // rax
  __int64 v587; // rax
  __int64 v588; // rax
  __int64 v589; // rax
  __int64 v590; // rax
  __int64 v591; // rax
  __int64 v592; // rax
  __int64 v593; // rax
  __int64 v594; // rax
  __int64 v595; // rax
  __int64 v596; // rax
  __int64 v597; // rax
  __int64 v598; // rax
  __int64 v599; // rax
  __int64 v600; // rax
  __int64 v601; // rax
  __int64 v602; // rax
  __int64 v603; // rax
  unsigned int v604; // [rsp+Ch] [rbp-20Ch]
  unsigned int v605; // [rsp+10h] [rbp-208h]
  unsigned int v606; // [rsp+14h] [rbp-204h]
  unsigned int v607; // [rsp+18h] [rbp-200h]
  unsigned int v608; // [rsp+1Ch] [rbp-1FCh]
  unsigned int v609; // [rsp+20h] [rbp-1F8h]
  unsigned int v610; // [rsp+24h] [rbp-1F4h]
  unsigned int v611; // [rsp+28h] [rbp-1F0h]
  unsigned int v612; // [rsp+2Ch] [rbp-1ECh]
  unsigned int v613; // [rsp+30h] [rbp-1E8h]
  unsigned int v614; // [rsp+34h] [rbp-1E4h]
  unsigned int v615; // [rsp+38h] [rbp-1E0h]
  unsigned int v616; // [rsp+3Ch] [rbp-1DCh]
  unsigned int v617; // [rsp+40h] [rbp-1D8h]
  unsigned int v618; // [rsp+44h] [rbp-1D4h]
  unsigned int v619; // [rsp+48h] [rbp-1D0h]
  unsigned int v620; // [rsp+4Ch] [rbp-1CCh]
  unsigned int v621; // [rsp+50h] [rbp-1C8h]
  unsigned int v622; // [rsp+54h] [rbp-1C4h]
  unsigned int v623; // [rsp+58h] [rbp-1C0h]
  unsigned int v624; // [rsp+5Ch] [rbp-1BCh]
  unsigned int v625; // [rsp+60h] [rbp-1B8h]
  unsigned int v626; // [rsp+64h] [rbp-1B4h]
  unsigned int v627; // [rsp+68h] [rbp-1B0h]
  unsigned int v628; // [rsp+6Ch] [rbp-1ACh]
  unsigned int v629; // [rsp+70h] [rbp-1A8h]
  unsigned int v630; // [rsp+74h] [rbp-1A4h]
  unsigned int v631; // [rsp+78h] [rbp-1A0h]
  unsigned int v632; // [rsp+7Ch] [rbp-19Ch]
  unsigned int v633; // [rsp+80h] [rbp-198h]
  unsigned int v634; // [rsp+84h] [rbp-194h]
  unsigned int v635; // [rsp+88h] [rbp-190h]
  unsigned int v636; // [rsp+8Ch] [rbp-18Ch]
  unsigned int v637; // [rsp+90h] [rbp-188h]
  unsigned int v638; // [rsp+94h] [rbp-184h]
  unsigned int v639; // [rsp+98h] [rbp-180h]
  unsigned int v640; // [rsp+9Ch] [rbp-17Ch]
  unsigned int v641; // [rsp+A0h] [rbp-178h]
  unsigned int v642; // [rsp+A4h] [rbp-174h]
  unsigned int v643; // [rsp+A8h] [rbp-170h]
  unsigned int v644; // [rsp+ACh] [rbp-16Ch]
  unsigned int v645; // [rsp+B0h] [rbp-168h]
  unsigned int v646; // [rsp+B4h] [rbp-164h]
  unsigned int v647; // [rsp+B8h] [rbp-160h]
  unsigned int v648; // [rsp+BCh] [rbp-15Ch]
  unsigned int v649; // [rsp+C0h] [rbp-158h]
  unsigned int v650; // [rsp+C4h] [rbp-154h]
  unsigned int v651; // [rsp+C8h] [rbp-150h]
  unsigned int v652; // [rsp+CCh] [rbp-14Ch]
  __int64 v653; // [rsp+D0h] [rbp-148h]
  unsigned int v654; // [rsp+D8h] [rbp-140h]
  unsigned int v655; // [rsp+D8h] [rbp-140h]
  unsigned int v656; // [rsp+D8h] [rbp-140h]
  unsigned int v657; // [rsp+D8h] [rbp-140h]
  unsigned int v658; // [rsp+E0h] [rbp-138h]
  unsigned int v659; // [rsp+E4h] [rbp-134h]
  unsigned int v660; // [rsp+E4h] [rbp-134h]
  unsigned int v661; // [rsp+E4h] [rbp-134h]
  unsigned int v662; // [rsp+E8h] [rbp-130h]
  unsigned int v663; // [rsp+E8h] [rbp-130h]
  unsigned int v664; // [rsp+ECh] [rbp-12Ch]
  _DWORD v665[60]; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v666; // [rsp+1E0h] [rbp-38h] BYREF

  v3 = sub_227D6D0(a1, a2);
  sub_995540(v3, "\n*** AST Context Stats:\n");
  v4 = sub_227D6D0(v3, "\n*** AST Context Stats:\n");
  v5 = sub_995540(v4, "  ");
  v6 = sub_227B910(v5, *(unsigned int *)(a1 + 16));
  v7 = " types total.\n";
  sub_995540(v6, " types total.\n");
  v8 = *(_DWORD *)(a1 + 16);
  memset(v665, 0, sizeof(v665));
  v9 = (__int64)&v666;
  if ( !v8 )
  {
    v649 = 0;
    v20 = 0;
    v19 = 0;
    v17 = 0;
    v648 = 0;
    v18 = 0;
    v647 = 0;
    v646 = 0;
    v645 = 0;
    v644 = 0;
    v643 = 0;
    v642 = 0;
    v641 = 0;
    v640 = 0;
    v639 = 0;
    v638 = 0;
    v637 = 0;
    v636 = 0;
    v635 = 0;
    v634 = 0;
    v633 = 0;
    v632 = 0;
    v631 = 0;
    v630 = 0;
    v629 = 0;
    v628 = 0;
    v627 = 0;
    v626 = 0;
    v625 = 0;
    v624 = 0;
    v604 = 0;
    v605 = 0;
    v606 = 0;
    v607 = 0;
    v608 = 0;
    v609 = 0;
    v610 = 0;
    v611 = 0;
    v612 = 0;
    v613 = 0;
    v614 = 0;
    v615 = 0;
    v616 = 0;
    v617 = 0;
    v618 = 0;
    v619 = 0;
    v620 = 0;
    v621 = 0;
    v622 = 0;
    v650 = 0;
    v623 = 0;
    v651 = 0;
    v652 = 0;
    v658 = 0;
    v653 = 0;
    goto LABEL_10;
  }
  v10 = *(__int64 **)(a1 + 8);
  v11 = v10 + 1;
  v12 = (__int64)&v10[v8];
  while ( 1 )
  {
    v13 = *v10;
    v10 = v11;
    ++v665[*(unsigned __int8 *)(v13 + 16)];
    if ( (__int64 *)v12 == v11 )
      break;
    ++v11;
  }
  v623 = v665[11];
  v658 = v665[7];
  v622 = v665[14];
  v14 = v665[1];
  v15 = v665[2];
  v652 = v665[9];
  v621 = v665[15];
  v16 = v665[3];
  v17 = v665[4];
  v650 = v665[13];
  v620 = v665[16];
  v8 = v665[5];
  v18 = v665[6];
  v651 = v665[10];
  v619 = v665[17];
  v19 = v665[8];
  v20 = v665[12];
  v618 = v665[18];
  v617 = v665[19];
  v616 = v665[20];
  v615 = v665[21];
  v614 = v665[22];
  v613 = v665[23];
  v612 = v665[24];
  v611 = v665[25];
  v610 = v665[26];
  v609 = v665[27];
  v608 = v665[28];
  v607 = v665[29];
  v606 = v665[30];
  v605 = v665[31];
  v604 = v665[32];
  v624 = v665[33];
  v625 = v665[34];
  v626 = v665[35];
  v627 = v665[36];
  v628 = v665[37];
  v629 = v665[38];
  v630 = v665[39];
  v631 = v665[40];
  v632 = v665[41];
  v633 = v665[42];
  v634 = v665[43];
  v635 = v665[44];
  v636 = v665[45];
  v637 = v665[46];
  v638 = v665[47];
  v639 = v665[48];
  v640 = v665[49];
  v641 = v665[50];
  v642 = v665[51];
  v643 = v665[52];
  v644 = v665[53];
  v645 = v665[54];
  v646 = v665[55];
  v647 = v665[56];
  v648 = v665[57];
  v649 = v665[58];
  v9 = (unsigned int)(32 * (v665[55] + v665[47] + v665[13] + v665[48]));
  v7 = (char *)(unsigned int)(48
                            * (v665[58]
                             + v665[57]
                             + v665[56]
                             + v665[53]
                             + v665[52]
                             + v665[51]
                             + v665[50]
                             + v665[49]
                             + v665[46]
                             + v665[45]
                             + v665[44]
                             + v665[43]
                             + v665[42]
                             + v665[41]
                             + v665[40]
                             + v665[38]
                             + v665[37]
                             + v665[36]
                             + v665[35]
                             + v665[34]
                             + v665[33]
                             + v665[31]
                             + v665[30]
                             + v665[29]
                             + v665[26]
                             + v665[25]
                             + v665[24]
                             + v665[22]
                             + v665[20]
                             + v665[19]
                             + v665[17]
                             + v665[16]
                             + v665[15]
                             + v665[14]
                             + v665[11]
                             + v665[10]
                             + v665[9]
                             + v665[7]
                             + v665[6]
                             + v665[5]
                             + v665[4]
                             + v665[3]
                             + v665[2]
                             + v665[1]
                             + v665[0]));
  v653 = (unsigned int)((_DWORD)v7
                      + v9
                      + ((v665[54]
                        + v665[39]
                        + v665[32]
                        + v665[28]
                        + v665[27]
                        + v665[23]
                        + v665[21]
                        + v665[18]
                        + v665[8]
                        + v665[12]) << 6));
  if ( v665[0] )
  {
    v664 = v665[3];
    v662 = v665[2];
    v659 = v665[1];
    v654 = v665[0];
    v21 = sub_227D6D0(v9, v7);
    v22 = sub_995540(v21, "    ");
    v23 = sub_227B910(v22, v654);
    v24 = sub_995540(v23, " ");
    v25 = sub_995540(v24, "Adjusted");
    v26 = sub_995540(v25, " types, ");
    v27 = sub_227B910(v26, 48);
    v28 = sub_995540(v27, " each ");
    v29 = sub_995540(v28, "(");
    v7 = " bytes)\n";
    v9 = sub_227B910(v29, 48LL * v654);
    sub_995540(v9, " bytes)\n");
    v14 = v659;
    v15 = v662;
    v16 = v664;
  }
  if ( !v14 )
  {
    if ( !v15 )
      goto LABEL_9;
    goto LABEL_89;
  }
  v663 = v16;
  v660 = v15;
  v655 = v14;
  v73 = sub_227D6D0(v9, v7);
  v74 = sub_995540(v73, "    ");
  v75 = sub_227B910(v74, v655);
  v76 = sub_995540(v75, " ");
  v77 = sub_995540(v76, "Decayed");
  v78 = sub_995540(v77, " types, ");
  v79 = sub_227B910(v78, 48);
  v80 = sub_995540(v79, " each ");
  v81 = sub_995540(v80, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v81, 48LL * v655);
  sub_995540(v9, " bytes)\n");
  v15 = v660;
  v16 = v663;
  if ( v660 )
  {
LABEL_89:
    v661 = v16;
    v656 = v15;
    v82 = sub_227D6D0(v9, v7);
    v83 = sub_995540(v82, "    ");
    v84 = sub_227B910(v83, v656);
    v85 = sub_995540(v84, " ");
    v86 = sub_995540(v85, "ConstantArray");
    v87 = sub_995540(v86, " types, ");
    v88 = sub_227B910(v87, 48);
    v89 = sub_995540(v88, " each ");
    v90 = sub_995540(v89, "(");
    v7 = " bytes)\n";
    v9 = sub_227B910(v90, 48LL * v656);
    sub_995540(v9, " bytes)\n");
    v16 = v661;
    if ( v661 )
      goto LABEL_90;
LABEL_10:
    if ( !(_DWORD)v17 )
      goto LABEL_11;
    goto LABEL_91;
  }
LABEL_9:
  if ( !v16 )
    goto LABEL_10;
LABEL_90:
  v657 = v16;
  v91 = sub_227D6D0(v9, v7);
  v92 = sub_995540(v91, "    ");
  v93 = sub_227B910(v92, v657);
  v94 = sub_995540(v93, " ");
  v95 = sub_995540(v94, "ArrayParameter");
  v96 = sub_995540(v95, " types, ");
  v97 = sub_227B910(v96, 48);
  v98 = sub_995540(v97, " each ");
  v99 = sub_995540(v98, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v99, 48LL * v657);
  sub_995540(v9, " bytes)\n");
  if ( !(_DWORD)v17 )
  {
LABEL_11:
    if ( !v8 )
      goto LABEL_12;
    goto LABEL_92;
  }
LABEL_91:
  v100 = sub_227D6D0(v9, v7);
  v101 = sub_995540(v100, "    ");
  v102 = sub_227B910(v101, v17);
  v103 = sub_995540(v102, " ");
  v104 = sub_995540(v103, "DependentSizedArray");
  v105 = sub_995540(v104, " types, ");
  v106 = sub_227B910(v105, 48);
  v107 = sub_995540(v106, " each ");
  v108 = sub_995540(v107, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v108, 48 * v17);
  sub_995540(v9, " bytes)\n");
  if ( !v8 )
  {
LABEL_12:
    if ( !(_DWORD)v18 )
      goto LABEL_13;
    goto LABEL_93;
  }
LABEL_92:
  v109 = sub_227D6D0(v9, v7);
  v110 = sub_995540(v109, "    ");
  v111 = sub_227B910(v110, v8);
  v112 = sub_995540(v111, " ");
  v113 = sub_995540(v112, "IncompleteArray");
  v114 = sub_995540(v113, " types, ");
  v115 = sub_227B910(v114, 48);
  v116 = sub_995540(v115, " each ");
  v117 = sub_995540(v116, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v117, 48LL * v8);
  sub_995540(v9, " bytes)\n");
  if ( !(_DWORD)v18 )
  {
LABEL_13:
    if ( !v658 )
      goto LABEL_14;
    goto LABEL_94;
  }
LABEL_93:
  v118 = sub_227D6D0(v9, v7);
  v119 = sub_995540(v118, "    ");
  v120 = sub_227B910(v119, v18);
  v121 = sub_995540(v120, " ");
  v122 = sub_995540(v121, "VariableArray");
  v123 = sub_995540(v122, " types, ");
  v124 = sub_227B910(v123, 48);
  v125 = sub_995540(v124, " each ");
  v126 = sub_995540(v125, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v126, 48 * v18);
  sub_995540(v9, " bytes)\n");
  if ( !v658 )
  {
LABEL_14:
    if ( !(_DWORD)v19 )
      goto LABEL_15;
    goto LABEL_95;
  }
LABEL_94:
  v127 = sub_227D6D0(v9, v7);
  v128 = sub_995540(v127, "    ");
  v129 = sub_227B910(v128, v658);
  v130 = sub_995540(v129, " ");
  v131 = sub_995540(v130, "Atomic");
  v132 = sub_995540(v131, " types, ");
  v133 = sub_227B910(v132, 48);
  v134 = sub_995540(v133, " each ");
  v135 = sub_995540(v134, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v135, 48LL * v658);
  sub_995540(v9, " bytes)\n");
  if ( !(_DWORD)v19 )
  {
LABEL_15:
    if ( !v652 )
      goto LABEL_16;
    goto LABEL_96;
  }
LABEL_95:
  v136 = sub_227D6D0(v9, v7);
  v137 = sub_995540(v136, "    ");
  v138 = sub_227B910(v137, v19);
  v139 = sub_995540(v138, " ");
  v140 = sub_995540(v139, "Attributed");
  v141 = sub_995540(v140, " types, ");
  v142 = sub_227B910(v141, 64);
  v143 = sub_995540(v142, " each ");
  v144 = sub_995540(v143, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v144, v19 << 6);
  sub_995540(v9, " bytes)\n");
  if ( !v652 )
  {
LABEL_16:
    if ( !v651 )
      goto LABEL_17;
    goto LABEL_97;
  }
LABEL_96:
  v145 = sub_227D6D0(v9, v7);
  v146 = sub_995540(v145, "    ");
  v147 = sub_227B910(v146, v652);
  v148 = sub_995540(v147, " ");
  v149 = sub_995540(v148, "BTFTagAttributed");
  v150 = sub_995540(v149, " types, ");
  v151 = sub_227B910(v150, 48);
  v152 = sub_995540(v151, " each ");
  v153 = sub_995540(v152, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v153, 48LL * v652);
  sub_995540(v9, " bytes)\n");
  if ( !v651 )
  {
LABEL_17:
    if ( !v623 )
      goto LABEL_18;
    goto LABEL_98;
  }
LABEL_97:
  v154 = sub_227D6D0(v9, v7);
  v155 = sub_995540(v154, "    ");
  v156 = sub_227B910(v155, v651);
  v157 = sub_995540(v156, " ");
  v158 = sub_995540(v157, "BitInt");
  v159 = sub_995540(v158, " types, ");
  v160 = sub_227B910(v159, 48);
  v161 = sub_995540(v160, " each ");
  v162 = sub_995540(v161, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v162, 48LL * v651);
  sub_995540(v9, " bytes)\n");
  if ( !v623 )
  {
LABEL_18:
    if ( !(_DWORD)v20 )
      goto LABEL_19;
    goto LABEL_99;
  }
LABEL_98:
  v163 = sub_227D6D0(v9, v7);
  v164 = sub_995540(v163, "    ");
  v165 = sub_227B910(v164, v623);
  v166 = sub_995540(v165, " ");
  v167 = sub_995540(v166, "BlockPointer");
  v168 = sub_995540(v167, " types, ");
  v169 = sub_227B910(v168, 48);
  v170 = sub_995540(v169, " each ");
  v171 = sub_995540(v170, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v171, 48LL * v623);
  sub_995540(v9, " bytes)\n");
  if ( !(_DWORD)v20 )
  {
LABEL_19:
    if ( !v650 )
      goto LABEL_20;
    goto LABEL_100;
  }
LABEL_99:
  v172 = sub_227D6D0(v9, v7);
  v173 = sub_995540(v172, "    ");
  v174 = sub_227B910(v173, v20);
  v175 = sub_995540(v174, " ");
  v176 = sub_995540(v175, "CountAttributed");
  v177 = sub_995540(v176, " types, ");
  v178 = sub_227B910(v177, 64);
  v179 = sub_995540(v178, " each ");
  v180 = sub_995540(v179, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v180, v20 << 6);
  sub_995540(v9, " bytes)\n");
  if ( !v650 )
  {
LABEL_20:
    if ( !v622 )
      goto LABEL_21;
    goto LABEL_101;
  }
LABEL_100:
  v181 = sub_227D6D0(v9, v7);
  v182 = sub_995540(v181, "    ");
  v183 = sub_227B910(v182, v650);
  v184 = sub_995540(v183, " ");
  v185 = sub_995540(v184, "Builtin");
  v186 = sub_995540(v185, " types, ");
  v187 = sub_227B910(v186, 32);
  v188 = sub_995540(v187, " each ");
  v189 = sub_995540(v188, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v189, 32LL * v650);
  sub_995540(v9, " bytes)\n");
  if ( !v622 )
  {
LABEL_21:
    if ( !v621 )
      goto LABEL_22;
    goto LABEL_102;
  }
LABEL_101:
  v190 = sub_227D6D0(v9, v7);
  v191 = sub_995540(v190, "    ");
  v192 = sub_227B910(v191, v622);
  v193 = sub_995540(v192, " ");
  v194 = sub_995540(v193, "Complex");
  v195 = sub_995540(v194, " types, ");
  v196 = sub_227B910(v195, 48);
  v197 = sub_995540(v196, " each ");
  v198 = sub_995540(v197, "(");
  v7 = " bytes)\n";
  v9 = sub_227B910(v198, 48LL * v622);
  sub_995540(v9, " bytes)\n");
  if ( !v621 )
  {
LABEL_22:
    v30 = v620;
    if ( !v620 )
      goto LABEL_23;
    goto LABEL_103;
  }
LABEL_102:
  v199 = sub_227D6D0(v9, v7);
  v200 = sub_995540(v199, "    ");
  v201 = sub_227B910(v200, v621);
  v202 = sub_995540(v201, " ");
  v203 = sub_995540(v202, "Decltype");
  v204 = sub_995540(v203, " types, ");
  v205 = sub_227B910(v204, 48);
  v206 = sub_995540(v205, " each ");
  v207 = sub_995540(v206, "(");
  v208 = sub_227B910(v207, 48LL * v621);
  v7 = " bytes)\n";
  sub_995540(v208, " bytes)\n");
  v30 = v620;
  if ( !v620 )
  {
LABEL_23:
    v31 = v619;
    if ( !v619 )
      goto LABEL_24;
    goto LABEL_104;
  }
LABEL_103:
  v209 = sub_227D6D0(v30, v7);
  v210 = sub_995540(v209, "    ");
  v211 = sub_227B910(v210, v620);
  v212 = sub_995540(v211, " ");
  v213 = sub_995540(v212, "Auto");
  v214 = sub_995540(v213, " types, ");
  v215 = sub_227B910(v214, 48);
  v216 = sub_995540(v215, " each ");
  v217 = sub_995540(v216, "(");
  v30 = sub_227B910(v217, 48LL * v620);
  sub_995540(v30, " bytes)\n");
  v31 = v619;
  if ( !v619 )
  {
LABEL_24:
    if ( !v618 )
      goto LABEL_25;
    goto LABEL_105;
  }
LABEL_104:
  v218 = sub_227D6D0(v30, v31);
  v219 = sub_995540(v218, "    ");
  v220 = sub_227B910(v219, v619);
  v221 = sub_995540(v220, " ");
  v222 = sub_995540(v221, "DeducedTemplateSpecialization");
  v223 = sub_995540(v222, " types, ");
  v224 = sub_227B910(v223, 48);
  v225 = sub_995540(v224, " each ");
  v226 = sub_995540(v225, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v226, 48LL * v619);
  sub_995540(v30, " bytes)\n");
  if ( !v618 )
  {
LABEL_25:
    if ( !v617 )
      goto LABEL_26;
    goto LABEL_106;
  }
LABEL_105:
  v227 = sub_227D6D0(v30, v31);
  v228 = sub_995540(v227, "    ");
  v229 = sub_227B910(v228, v618);
  v230 = sub_995540(v229, " ");
  v231 = sub_995540(v230, "DependentAddressSpace");
  v232 = sub_995540(v231, " types, ");
  v233 = sub_227B910(v232, 64);
  v234 = sub_995540(v233, " each ");
  v235 = sub_995540(v234, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v235, (unsigned __int64)v618 << 6);
  sub_995540(v30, " bytes)\n");
  if ( !v617 )
  {
LABEL_26:
    if ( !v616 )
      goto LABEL_27;
    goto LABEL_107;
  }
LABEL_106:
  v236 = sub_227D6D0(v30, v31);
  v237 = sub_995540(v236, "    ");
  v238 = sub_227B910(v237, v617);
  v239 = sub_995540(v238, " ");
  v240 = sub_995540(v239, "DependentBitInt");
  v241 = sub_995540(v240, " types, ");
  v242 = sub_227B910(v241, 48);
  v243 = sub_995540(v242, " each ");
  v244 = sub_995540(v243, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v244, 48LL * v617);
  sub_995540(v30, " bytes)\n");
  if ( !v616 )
  {
LABEL_27:
    if ( !v615 )
      goto LABEL_28;
    goto LABEL_108;
  }
LABEL_107:
  v245 = sub_227D6D0(v30, v31);
  v246 = sub_995540(v245, "    ");
  v247 = sub_227B910(v246, v616);
  v248 = sub_995540(v247, " ");
  v249 = sub_995540(v248, "DependentName");
  v250 = sub_995540(v249, " types, ");
  v251 = sub_227B910(v250, 48);
  v252 = sub_995540(v251, " each ");
  v253 = sub_995540(v252, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v253, 48LL * v616);
  sub_995540(v30, " bytes)\n");
  if ( !v615 )
  {
LABEL_28:
    if ( !v614 )
      goto LABEL_29;
    goto LABEL_109;
  }
LABEL_108:
  v254 = sub_227D6D0(v30, v31);
  v255 = sub_995540(v254, "    ");
  v256 = sub_227B910(v255, v615);
  v257 = sub_995540(v256, " ");
  v258 = sub_995540(v257, "DependentSizedExtVector");
  v259 = sub_995540(v258, " types, ");
  v260 = sub_227B910(v259, 64);
  v261 = sub_995540(v260, " each ");
  v262 = sub_995540(v261, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v262, (unsigned __int64)v615 << 6);
  sub_995540(v30, " bytes)\n");
  if ( !v614 )
  {
LABEL_29:
    if ( !v613 )
      goto LABEL_30;
    goto LABEL_110;
  }
LABEL_109:
  v263 = sub_227D6D0(v30, v31);
  v264 = sub_995540(v263, "    ");
  v265 = sub_227B910(v264, v614);
  v266 = sub_995540(v265, " ");
  v267 = sub_995540(v266, "DependentTemplateSpecialization");
  v268 = sub_995540(v267, " types, ");
  v269 = sub_227B910(v268, 48);
  v270 = sub_995540(v269, " each ");
  v271 = sub_995540(v270, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v271, 48LL * v614);
  sub_995540(v30, " bytes)\n");
  if ( !v613 )
  {
LABEL_30:
    if ( !v612 )
      goto LABEL_31;
    goto LABEL_111;
  }
LABEL_110:
  v272 = sub_227D6D0(v30, v31);
  v273 = sub_995540(v272, "    ");
  v274 = sub_227B910(v273, v613);
  v275 = sub_995540(v274, " ");
  v276 = sub_995540(v275, "DependentVector");
  v277 = sub_995540(v276, " types, ");
  v278 = sub_227B910(v277, 64);
  v279 = sub_995540(v278, " each ");
  v280 = sub_995540(v279, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v280, (unsigned __int64)v613 << 6);
  sub_995540(v30, " bytes)\n");
  if ( !v612 )
  {
LABEL_31:
    if ( !v611 )
      goto LABEL_32;
    goto LABEL_112;
  }
LABEL_111:
  v281 = sub_227D6D0(v30, v31);
  v282 = sub_995540(v281, "    ");
  v283 = sub_227B910(v282, v612);
  v284 = sub_995540(v283, " ");
  v285 = sub_995540(v284, "Elaborated");
  v286 = sub_995540(v285, " types, ");
  v287 = sub_227B910(v286, 48);
  v288 = sub_995540(v287, " each ");
  v289 = sub_995540(v288, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v289, 48LL * v612);
  sub_995540(v30, " bytes)\n");
  if ( !v611 )
  {
LABEL_32:
    if ( !v610 )
      goto LABEL_33;
    goto LABEL_113;
  }
LABEL_112:
  v290 = sub_227D6D0(v30, v31);
  v291 = sub_995540(v290, "    ");
  v292 = sub_227B910(v291, v611);
  v293 = sub_995540(v292, " ");
  v294 = sub_995540(v293, "FunctionNoProto");
  v295 = sub_995540(v294, " types, ");
  v296 = sub_227B910(v295, 48);
  v297 = sub_995540(v296, " each ");
  v298 = sub_995540(v297, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v298, 48LL * v611);
  sub_995540(v30, " bytes)\n");
  if ( !v610 )
  {
LABEL_33:
    if ( !v609 )
      goto LABEL_34;
    goto LABEL_114;
  }
LABEL_113:
  v299 = sub_227D6D0(v30, v31);
  v300 = sub_995540(v299, "    ");
  v301 = sub_227B910(v300, v610);
  v302 = sub_995540(v301, " ");
  v303 = sub_995540(v302, "FunctionProto");
  v304 = sub_995540(v303, " types, ");
  v305 = sub_227B910(v304, 48);
  v306 = sub_995540(v305, " each ");
  v307 = sub_995540(v306, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v307, 48LL * v610);
  sub_995540(v30, " bytes)\n");
  if ( !v609 )
  {
LABEL_34:
    if ( !v608 )
      goto LABEL_35;
    goto LABEL_115;
  }
LABEL_114:
  v308 = sub_227D6D0(v30, v31);
  v309 = sub_995540(v308, "    ");
  v310 = sub_227B910(v309, v609);
  v311 = sub_995540(v310, " ");
  v312 = sub_995540(v311, "HLSLAttributedResource");
  v313 = sub_995540(v312, " types, ");
  v314 = sub_227B910(v313, 64);
  v315 = sub_995540(v314, " each ");
  v316 = sub_995540(v315, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v316, (unsigned __int64)v609 << 6);
  sub_995540(v30, " bytes)\n");
  if ( !v608 )
  {
LABEL_35:
    if ( !v607 )
      goto LABEL_36;
    goto LABEL_116;
  }
LABEL_115:
  v317 = sub_227D6D0(v30, v31);
  v318 = sub_995540(v317, "    ");
  v319 = sub_227B910(v318, v608);
  v320 = sub_995540(v319, " ");
  v321 = sub_995540(v320, "HLSLInlineSpirv");
  v322 = sub_995540(v321, " types, ");
  v323 = sub_227B910(v322, 64);
  v324 = sub_995540(v323, " each ");
  v325 = sub_995540(v324, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v325, (unsigned __int64)v608 << 6);
  sub_995540(v30, " bytes)\n");
  if ( !v607 )
  {
LABEL_36:
    if ( !v606 )
      goto LABEL_37;
    goto LABEL_117;
  }
LABEL_116:
  v326 = sub_227D6D0(v30, v31);
  v327 = sub_995540(v326, "    ");
  v328 = sub_227B910(v327, v607);
  v329 = sub_995540(v328, " ");
  v330 = sub_995540(v329, "InjectedClassName");
  v331 = sub_995540(v330, " types, ");
  v332 = sub_227B910(v331, 48);
  v333 = sub_995540(v332, " each ");
  v334 = sub_995540(v333, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v334, 48LL * v607);
  sub_995540(v30, " bytes)\n");
  if ( !v606 )
  {
LABEL_37:
    if ( !v605 )
      goto LABEL_38;
    goto LABEL_118;
  }
LABEL_117:
  v335 = sub_227D6D0(v30, v31);
  v336 = sub_995540(v335, "    ");
  v337 = sub_227B910(v336, v606);
  v338 = sub_995540(v337, " ");
  v339 = sub_995540(v338, "MacroQualified");
  v340 = sub_995540(v339, " types, ");
  v341 = sub_227B910(v340, 48);
  v342 = sub_995540(v341, " each ");
  v343 = sub_995540(v342, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v343, 48LL * v606);
  sub_995540(v30, " bytes)\n");
  if ( !v605 )
  {
LABEL_38:
    if ( !v604 )
      goto LABEL_39;
    goto LABEL_119;
  }
LABEL_118:
  v344 = sub_227D6D0(v30, v31);
  v345 = sub_995540(v344, "    ");
  v346 = sub_227B910(v345, v605);
  v347 = sub_995540(v346, " ");
  v348 = sub_995540(v347, "ConstantMatrix");
  v349 = sub_995540(v348, " types, ");
  v350 = sub_227B910(v349, 48);
  v351 = sub_995540(v350, " each ");
  v352 = sub_995540(v351, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v352, 48LL * v605);
  sub_995540(v30, " bytes)\n");
  if ( !v604 )
  {
LABEL_39:
    if ( !v624 )
      goto LABEL_40;
    goto LABEL_120;
  }
LABEL_119:
  v353 = sub_227D6D0(v30, v31);
  v354 = sub_995540(v353, "    ");
  v355 = sub_227B910(v354, v604);
  v356 = sub_995540(v355, " ");
  v357 = sub_995540(v356, "DependentSizedMatrix");
  v358 = sub_995540(v357, " types, ");
  v359 = sub_227B910(v358, 64);
  v360 = sub_995540(v359, " each ");
  v361 = sub_995540(v360, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v361, (unsigned __int64)v604 << 6);
  sub_995540(v30, " bytes)\n");
  if ( !v624 )
  {
LABEL_40:
    if ( !v625 )
      goto LABEL_41;
    goto LABEL_121;
  }
LABEL_120:
  v362 = sub_227D6D0(v30, v31);
  v363 = sub_995540(v362, "    ");
  v364 = sub_227B910(v363, v624);
  v365 = sub_995540(v364, " ");
  v366 = sub_995540(v365, "MemberPointer");
  v367 = sub_995540(v366, " types, ");
  v368 = sub_227B910(v367, 48);
  v369 = sub_995540(v368, " each ");
  v370 = sub_995540(v369, "(");
  v31 = (unsigned __int64)" bytes)\n";
  v30 = sub_227B910(v370, 48LL * v624);
  sub_995540(v30, " bytes)\n");
  if ( !v625 )
  {
LABEL_41:
    v32 = v626;
    if ( !v626 )
      goto LABEL_42;
    goto LABEL_122;
  }
LABEL_121:
  v371 = sub_227D6D0(v30, v31);
  v372 = sub_995540(v371, "    ");
  v373 = sub_227B910(v372, v625);
  v374 = sub_995540(v373, " ");
  v375 = sub_995540(v374, "ObjCObjectPointer");
  v376 = sub_995540(v375, " types, ");
  v377 = sub_227B910(v376, 48);
  v378 = sub_995540(v377, " each ");
  v379 = sub_995540(v378, "(");
  v380 = sub_227B910(v379, 48LL * v625);
  v31 = (unsigned __int64)" bytes)\n";
  sub_995540(v380, " bytes)\n");
  v32 = v626;
  if ( !v626 )
  {
LABEL_42:
    v33 = v627;
    if ( !v627 )
      goto LABEL_43;
    goto LABEL_123;
  }
LABEL_122:
  v381 = sub_227D6D0(v32, v31);
  v382 = sub_995540(v381, "    ");
  v383 = sub_227B910(v382, v626);
  v384 = sub_995540(v383, " ");
  v385 = sub_995540(v384, "ObjCObject");
  v386 = sub_995540(v385, " types, ");
  v387 = sub_227B910(v386, 48);
  v388 = sub_995540(v387, " each ");
  v389 = sub_995540(v388, "(");
  v32 = sub_227B910(v389, 48LL * v626);
  sub_995540(v32, " bytes)\n");
  v33 = v627;
  if ( !v627 )
  {
LABEL_43:
    if ( !v628 )
      goto LABEL_44;
    goto LABEL_124;
  }
LABEL_123:
  v390 = sub_227D6D0(v32, v33);
  v391 = sub_995540(v390, "    ");
  v392 = sub_227B910(v391, v627);
  v393 = sub_995540(v392, " ");
  v394 = sub_995540(v393, "ObjCInterface");
  v395 = sub_995540(v394, " types, ");
  v396 = sub_227B910(v395, 48);
  v397 = sub_995540(v396, " each ");
  v398 = sub_995540(v397, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v398, 48LL * v627);
  sub_995540(v32, " bytes)\n");
  if ( !v628 )
  {
LABEL_44:
    if ( !v629 )
      goto LABEL_45;
    goto LABEL_125;
  }
LABEL_124:
  v399 = sub_227D6D0(v32, v33);
  v400 = sub_995540(v399, "    ");
  v401 = sub_227B910(v400, v628);
  v402 = sub_995540(v401, " ");
  v403 = sub_995540(v402, "ObjCTypeParam");
  v404 = sub_995540(v403, " types, ");
  v405 = sub_227B910(v404, 48);
  v406 = sub_995540(v405, " each ");
  v407 = sub_995540(v406, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v407, 48LL * v628);
  sub_995540(v32, " bytes)\n");
  if ( !v629 )
  {
LABEL_45:
    if ( !v630 )
      goto LABEL_46;
    goto LABEL_126;
  }
LABEL_125:
  v408 = sub_227D6D0(v32, v33);
  v409 = sub_995540(v408, "    ");
  v410 = sub_227B910(v409, v629);
  v411 = sub_995540(v410, " ");
  v412 = sub_995540(v411, "PackExpansion");
  v413 = sub_995540(v412, " types, ");
  v414 = sub_227B910(v413, 48);
  v415 = sub_995540(v414, " each ");
  v416 = sub_995540(v415, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v416, 48LL * v629);
  sub_995540(v32, " bytes)\n");
  if ( !v630 )
  {
LABEL_46:
    if ( !v631 )
      goto LABEL_47;
    goto LABEL_127;
  }
LABEL_126:
  v417 = sub_227D6D0(v32, v33);
  v418 = sub_995540(v417, "    ");
  v419 = sub_227B910(v418, v630);
  v420 = sub_995540(v419, " ");
  v421 = sub_995540(v420, "PackIndexing");
  v422 = sub_995540(v421, " types, ");
  v423 = sub_227B910(v422, 64);
  v424 = sub_995540(v423, " each ");
  v425 = sub_995540(v424, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v425, (unsigned __int64)v630 << 6);
  sub_995540(v32, " bytes)\n");
  if ( !v631 )
  {
LABEL_47:
    if ( !v632 )
      goto LABEL_48;
    goto LABEL_128;
  }
LABEL_127:
  v426 = sub_227D6D0(v32, v33);
  v427 = sub_995540(v426, "    ");
  v428 = sub_227B910(v427, v631);
  v429 = sub_995540(v428, " ");
  v430 = sub_995540(v429, "Paren");
  v431 = sub_995540(v430, " types, ");
  v432 = sub_227B910(v431, 48);
  v433 = sub_995540(v432, " each ");
  v434 = sub_995540(v433, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v434, 48LL * v631);
  sub_995540(v32, " bytes)\n");
  if ( !v632 )
  {
LABEL_48:
    if ( !v633 )
      goto LABEL_49;
    goto LABEL_129;
  }
LABEL_128:
  v435 = sub_227D6D0(v32, v33);
  v436 = sub_995540(v435, "    ");
  v437 = sub_227B910(v436, v632);
  v438 = sub_995540(v437, " ");
  v439 = sub_995540(v438, "Pipe");
  v440 = sub_995540(v439, " types, ");
  v441 = sub_227B910(v440, 48);
  v442 = sub_995540(v441, " each ");
  v443 = sub_995540(v442, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v443, 48LL * v632);
  sub_995540(v32, " bytes)\n");
  if ( !v633 )
  {
LABEL_49:
    if ( !v634 )
      goto LABEL_50;
    goto LABEL_130;
  }
LABEL_129:
  v444 = sub_227D6D0(v32, v33);
  v445 = sub_995540(v444, "    ");
  v446 = sub_227B910(v445, v633);
  v447 = sub_995540(v446, " ");
  v448 = sub_995540(v447, "Pointer");
  v449 = sub_995540(v448, " types, ");
  v450 = sub_227B910(v449, 48);
  v451 = sub_995540(v450, " each ");
  v452 = sub_995540(v451, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v452, 48LL * v633);
  sub_995540(v32, " bytes)\n");
  if ( !v634 )
  {
LABEL_50:
    if ( !v635 )
      goto LABEL_51;
    goto LABEL_131;
  }
LABEL_130:
  v453 = sub_227D6D0(v32, v33);
  v454 = sub_995540(v453, "    ");
  v455 = sub_227B910(v454, v634);
  v456 = sub_995540(v455, " ");
  v457 = sub_995540(v456, "LValueReference");
  v458 = sub_995540(v457, " types, ");
  v459 = sub_227B910(v458, 48);
  v460 = sub_995540(v459, " each ");
  v461 = sub_995540(v460, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v461, 48LL * v634);
  sub_995540(v32, " bytes)\n");
  if ( !v635 )
  {
LABEL_51:
    if ( !v636 )
      goto LABEL_52;
    goto LABEL_132;
  }
LABEL_131:
  v462 = sub_227D6D0(v32, v33);
  v463 = sub_995540(v462, "    ");
  v464 = sub_227B910(v463, v635);
  v465 = sub_995540(v464, " ");
  v466 = sub_995540(v465, "RValueReference");
  v467 = sub_995540(v466, " types, ");
  v468 = sub_227B910(v467, 48);
  v469 = sub_995540(v468, " each ");
  v470 = sub_995540(v469, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v470, 48LL * v635);
  sub_995540(v32, " bytes)\n");
  if ( !v636 )
  {
LABEL_52:
    if ( !v637 )
      goto LABEL_53;
    goto LABEL_133;
  }
LABEL_132:
  v471 = sub_227D6D0(v32, v33);
  v472 = sub_995540(v471, "    ");
  v473 = sub_227B910(v472, v636);
  v474 = sub_995540(v473, " ");
  v475 = sub_995540(v474, "SubstTemplateTypeParmPack");
  v476 = sub_995540(v475, " types, ");
  v477 = sub_227B910(v476, 48);
  v478 = sub_995540(v477, " each ");
  v479 = sub_995540(v478, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v479, 48LL * v636);
  sub_995540(v32, " bytes)\n");
  if ( !v637 )
  {
LABEL_53:
    if ( !v638 )
      goto LABEL_54;
    goto LABEL_134;
  }
LABEL_133:
  v480 = sub_227D6D0(v32, v33);
  v481 = sub_995540(v480, "    ");
  v482 = sub_227B910(v481, v637);
  v483 = sub_995540(v482, " ");
  v484 = sub_995540(v483, "SubstTemplateTypeParm");
  v485 = sub_995540(v484, " types, ");
  v486 = sub_227B910(v485, 48);
  v487 = sub_995540(v486, " each ");
  v488 = sub_995540(v487, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v488, 48LL * v637);
  sub_995540(v32, " bytes)\n");
  if ( !v638 )
  {
LABEL_54:
    if ( !v639 )
      goto LABEL_55;
    goto LABEL_135;
  }
LABEL_134:
  v489 = sub_227D6D0(v32, v33);
  v490 = sub_995540(v489, "    ");
  v491 = sub_227B910(v490, v638);
  v492 = sub_995540(v491, " ");
  v493 = sub_995540(v492, "Enum");
  v494 = sub_995540(v493, " types, ");
  v495 = sub_227B910(v494, 32);
  v496 = sub_995540(v495, " each ");
  v497 = sub_995540(v496, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v497, 32LL * v638);
  sub_995540(v32, " bytes)\n");
  if ( !v639 )
  {
LABEL_55:
    if ( !v640 )
      goto LABEL_56;
    goto LABEL_136;
  }
LABEL_135:
  v498 = sub_227D6D0(v32, v33);
  v499 = sub_995540(v498, "    ");
  v500 = sub_227B910(v499, v639);
  v501 = sub_995540(v500, " ");
  v502 = sub_995540(v501, "Record");
  v503 = sub_995540(v502, " types, ");
  v504 = sub_227B910(v503, 32);
  v505 = sub_995540(v504, " each ");
  v506 = sub_995540(v505, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v506, 32LL * v639);
  sub_995540(v32, " bytes)\n");
  if ( !v640 )
  {
LABEL_56:
    if ( !v641 )
      goto LABEL_57;
    goto LABEL_137;
  }
LABEL_136:
  v507 = sub_227D6D0(v32, v33);
  v508 = sub_995540(v507, "    ");
  v509 = sub_227B910(v508, v640);
  v510 = sub_995540(v509, " ");
  v511 = sub_995540(v510, "TemplateSpecialization");
  v512 = sub_995540(v511, " types, ");
  v513 = sub_227B910(v512, 48);
  v514 = sub_995540(v513, " each ");
  v515 = sub_995540(v514, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v515, 48LL * v640);
  sub_995540(v32, " bytes)\n");
  if ( !v641 )
  {
LABEL_57:
    if ( !v642 )
      goto LABEL_58;
    goto LABEL_138;
  }
LABEL_137:
  v516 = sub_227D6D0(v32, v33);
  v517 = sub_995540(v516, "    ");
  v518 = sub_227B910(v517, v641);
  v519 = sub_995540(v518, " ");
  v520 = sub_995540(v519, "TemplateTypeParm");
  v521 = sub_995540(v520, " types, ");
  v522 = sub_227B910(v521, 48);
  v523 = sub_995540(v522, " each ");
  v524 = sub_995540(v523, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v524, 48LL * v641);
  sub_995540(v32, " bytes)\n");
  if ( !v642 )
  {
LABEL_58:
    if ( !v643 )
      goto LABEL_59;
    goto LABEL_139;
  }
LABEL_138:
  v525 = sub_227D6D0(v32, v33);
  v526 = sub_995540(v525, "    ");
  v527 = sub_227B910(v526, v642);
  v528 = sub_995540(v527, " ");
  v529 = sub_995540(v528, "TypeOfExpr");
  v530 = sub_995540(v529, " types, ");
  v531 = sub_227B910(v530, 48);
  v532 = sub_995540(v531, " each ");
  v533 = sub_995540(v532, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v533, 48LL * v642);
  sub_995540(v32, " bytes)\n");
  if ( !v643 )
  {
LABEL_59:
    if ( !v644 )
      goto LABEL_60;
    goto LABEL_140;
  }
LABEL_139:
  v534 = sub_227D6D0(v32, v33);
  v535 = sub_995540(v534, "    ");
  v536 = sub_227B910(v535, v643);
  v537 = sub_995540(v536, " ");
  v538 = sub_995540(v537, "TypeOf");
  v539 = sub_995540(v538, " types, ");
  v540 = sub_227B910(v539, 48);
  v541 = sub_995540(v540, " each ");
  v542 = sub_995540(v541, "(");
  v33 = (unsigned __int64)" bytes)\n";
  v32 = sub_227B910(v542, 48LL * v643);
  sub_995540(v32, " bytes)\n");
  if ( !v644 )
  {
LABEL_60:
    v34 = v645;
    if ( !v645 )
      goto LABEL_61;
    goto LABEL_141;
  }
LABEL_140:
  v543 = sub_227D6D0(v32, v33);
  v544 = sub_995540(v543, "    ");
  v545 = sub_227B910(v544, v644);
  v546 = sub_995540(v545, " ");
  v547 = sub_995540(v546, "Typedef");
  v548 = sub_995540(v547, " types, ");
  v549 = sub_227B910(v548, 48);
  v550 = sub_995540(v549, " each ");
  v551 = sub_995540(v550, "(");
  v552 = sub_227B910(v551, 48LL * v644);
  v33 = (unsigned __int64)" bytes)\n";
  sub_995540(v552, " bytes)\n");
  v34 = v645;
  if ( !v645 )
  {
LABEL_61:
    v35 = v646;
    if ( !v646 )
      goto LABEL_62;
    goto LABEL_142;
  }
LABEL_141:
  v553 = sub_227D6D0(v34, v33);
  v554 = sub_995540(v553, "    ");
  v555 = sub_227B910(v554, v645);
  v556 = sub_995540(v555, " ");
  v557 = sub_995540(v556, "UnaryTransform");
  v558 = sub_995540(v557, " types, ");
  v559 = sub_227B910(v558, 64);
  v560 = sub_995540(v559, " each ");
  v561 = sub_995540(v560, "(");
  v34 = sub_227B910(v561, (unsigned __int64)v645 << 6);
  sub_995540(v34, " bytes)\n");
  v35 = v646;
  if ( !v646 )
  {
LABEL_62:
    if ( !v647 )
      goto LABEL_63;
    goto LABEL_143;
  }
LABEL_142:
  v562 = sub_227D6D0(v34, v35);
  v563 = sub_995540(v562, "    ");
  v564 = sub_227B910(v563, v646);
  v565 = sub_995540(v564, " ");
  v566 = sub_995540(v565, "UnresolvedUsing");
  v567 = sub_995540(v566, " types, ");
  v568 = sub_227B910(v567, 32);
  v569 = sub_995540(v568, " each ");
  v570 = sub_995540(v569, "(");
  v35 = (unsigned __int64)" bytes)\n";
  v34 = sub_227B910(v570, 32LL * v646);
  sub_995540(v34, " bytes)\n");
  if ( !v647 )
  {
LABEL_63:
    if ( !v648 )
      goto LABEL_64;
LABEL_144:
    v580 = sub_227D6D0(v34, v35);
    v581 = sub_995540(v580, "    ");
    v582 = sub_227B910(v581, v648);
    v583 = sub_995540(v582, " ");
    v584 = sub_995540(v583, "Vector");
    v585 = sub_995540(v584, " types, ");
    v586 = sub_227B910(v585, 48);
    v587 = sub_995540(v586, " each ");
    v588 = sub_995540(v587, "(");
    v35 = (unsigned __int64)" bytes)\n";
    v34 = sub_227B910(v588, 48LL * v648);
    sub_995540(v34, " bytes)\n");
    if ( !v649 )
      goto LABEL_65;
    goto LABEL_145;
  }
LABEL_143:
  v571 = sub_227D6D0(v34, v35);
  v572 = sub_995540(v571, "    ");
  v573 = sub_227B910(v572, v647);
  v574 = sub_995540(v573, " ");
  v575 = sub_995540(v574, "Using");
  v576 = sub_995540(v575, " types, ");
  v577 = sub_227B910(v576, 48);
  v578 = sub_995540(v577, " each ");
  v579 = sub_995540(v578, "(");
  v35 = (unsigned __int64)" bytes)\n";
  v34 = sub_227B910(v579, 48LL * v647);
  sub_995540(v34, " bytes)\n");
  if ( v648 )
    goto LABEL_144;
LABEL_64:
  if ( !v649 )
    goto LABEL_65;
LABEL_145:
  v589 = sub_227D6D0(v34, v35);
  v590 = sub_995540(v589, "    ");
  v591 = sub_227B910(v590, v649);
  v592 = sub_995540(v591, " ");
  v593 = sub_995540(v592, "ExtVector");
  v594 = sub_995540(v593, " types, ");
  v595 = sub_227B910(v594, 48);
  v596 = sub_995540(v595, " each ");
  v597 = sub_995540(v596, "(");
  v35 = (unsigned __int64)" bytes)\n";
  v34 = sub_227B910(v597, 48LL * v649);
  sub_995540(v34, " bytes)\n");
LABEL_65:
  v36 = sub_227D6D0(v34, v35);
  v37 = sub_995540(v36, "Total bytes = ");
  v38 = sub_227B910(v37, v653);
  sub_995540(v38, "\n");
  v39 = sub_227D6D0(v38, "\n");
  v40 = sub_227B910(v39, *(unsigned int *)(a1 + 22932));
  v41 = sub_995540(v40, "/");
  v42 = sub_227B910(v41, *(unsigned int *)(a1 + 22928));
  sub_995540(v42, " implicit default constructors created\n");
  v43 = sub_227D6D0(v42, " implicit default constructors created\n");
  v44 = sub_227B910(v43, *(unsigned int *)(a1 + 22940));
  v45 = sub_995540(v44, "/");
  v46 = " implicit copy constructors created\n";
  v47 = sub_227B910(v45, *(unsigned int *)(a1 + 22936));
  sub_995540(v47, " implicit copy constructors created\n");
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 8) != 0 )
  {
    v601 = sub_227D6D0(v47, " implicit copy constructors created\n");
    v602 = sub_227B910(v601, *(unsigned int *)(a1 + 22948));
    v603 = sub_995540(v602, "/");
    v46 = " implicit move constructors created\n";
    v47 = sub_227B910(v603, *(unsigned int *)(a1 + 22944));
    sub_995540(v47, " implicit move constructors created\n");
  }
  v48 = sub_227D6D0(v47, v46);
  v49 = sub_227B910(v48, *(unsigned int *)(a1 + 22956));
  v50 = sub_995540(v49, "/");
  v51 = " implicit copy assignment operators created\n";
  v52 = sub_227B910(v50, *(unsigned int *)(a1 + 22952));
  sub_995540(v52, " implicit copy assignment operators created\n");
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 8) != 0 )
  {
    v598 = sub_227D6D0(v52, " implicit copy assignment operators created\n");
    v599 = sub_227B910(v598, *(unsigned int *)(a1 + 22964));
    v600 = sub_995540(v599, "/");
    v51 = " implicit move assignment operators created\n";
    v52 = sub_227B910(v600, *(unsigned int *)(a1 + 22960));
    sub_995540(v52, " implicit move assignment operators created\n");
  }
  v53 = sub_227D6D0(v52, v51);
  v54 = sub_227B910(v53, *(unsigned int *)(a1 + 22972));
  v55 = sub_995540(v54, "/");
  v56 = sub_227B910(v55, *(unsigned int *)(a1 + 22968));
  sub_995540(v56, " implicit destructors created\n");
  if ( *(_QWORD *)(a1 + 18360) )
  {
    v58 = sub_227D6D0(v56, " implicit destructors created\n");
    sub_995540(v58, "\n");
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 18360) + 208LL))(*(_QWORD *)(a1 + 18360));
  }
  v59 = *(_QWORD *)(a1 + 2368);
  v60 = v59 + 8LL * *(unsigned int *)(a1 + 2376);
  if ( v59 == v60 )
  {
    v62 = 0;
  }
  else
  {
    v61 = *(_QWORD *)(a1 + 2368);
    v62 = 0;
    v57 = 0x40000000000LL;
    do
    {
      while ( 1 )
      {
        v63 = (unsigned int)((v61 - v59) >> 3) >> 7;
        if ( v63 <= 0x1D )
          break;
        v61 += 8;
        v62 += 0x40000000000LL;
        if ( v60 == v61 )
          goto LABEL_75;
      }
      v61 += 8;
      v62 += 4096LL << v63;
    }
    while ( v60 != v61 );
  }
LABEL_75:
  v64 = *(_QWORD **)(a1 + 2416);
  v65 = &v64[2 * *(unsigned int *)(a1 + 2424)];
  if ( v64 != v65 )
  {
    v66 = *(_QWORD *)(a1 + 2416);
    v67 = 16LL * *(unsigned int *)(a1 + 2424) - 16;
    v57 = v67 >> 4;
    if ( v67 > 0x40 )
    {
      v68 = 0;
      v69 = (char *)v64 + (v67 & 0xFFFFFFFFFFFFFFE0LL);
      do
      {
        v70 = _mm_loadu_si128((const __m128i *)(v66 + 8));
        v71 = _mm_loadu_si128((const __m128i *)(v66 + 24));
        v66 += 32;
        v68 = _mm_add_epi64(v68, _mm_unpacklo_epi64(v70, v71));
      }
      while ( v69 != (char *)v66 );
      v57 = 16 * (v57 & 0xFFFFFFFFFFFFFFFELL);
      v64 = (_QWORD *)((char *)v64 + v57);
      v62 += _mm_add_epi64(v68, _mm_srli_si128(v68, 8)).m128i_u64[0];
    }
    v62 += v64[1];
    if ( v65 != v64 + 2 )
    {
      v62 += v64[3];
      if ( v65 != v64 + 4 )
      {
        v62 += v64[5];
        if ( v65 != v64 + 6 )
        {
          v62 += v64[7];
          if ( v65 != v64 + 8 )
            v62 += v64[9];
        }
      }
    }
  }
  return sub_220F8D0(*(unsigned int *)(a1 + 2376), *(_QWORD *)(a1 + 2432), v62, v64, v65, v57);
}
