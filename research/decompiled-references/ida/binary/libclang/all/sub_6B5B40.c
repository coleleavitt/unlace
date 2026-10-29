__int64 __fastcall sub_6B5B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  const char *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdi
  unsigned __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdi
  unsigned __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  const char *v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  const char *v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rdx
  unsigned int v90; // ecx
  __int64 v91; // rax
  __int64 i; // rcx
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
  __int64 v604; // rax
  __int64 v605; // rax
  __int64 v606; // rax
  unsigned int v607; // [rsp+0h] [rbp-208h]
  unsigned int v608; // [rsp+4h] [rbp-204h]
  unsigned int v609; // [rsp+8h] [rbp-200h]
  unsigned int v610; // [rsp+Ch] [rbp-1FCh]
  unsigned int v611; // [rsp+10h] [rbp-1F8h]
  unsigned int v612; // [rsp+14h] [rbp-1F4h]
  unsigned int v613; // [rsp+18h] [rbp-1F0h]
  unsigned int v614; // [rsp+1Ch] [rbp-1ECh]
  unsigned int v615; // [rsp+20h] [rbp-1E8h]
  unsigned int v616; // [rsp+24h] [rbp-1E4h]
  unsigned int v617; // [rsp+28h] [rbp-1E0h]
  unsigned int v618; // [rsp+2Ch] [rbp-1DCh]
  unsigned int v619; // [rsp+30h] [rbp-1D8h]
  unsigned int v620; // [rsp+34h] [rbp-1D4h]
  unsigned int v621; // [rsp+38h] [rbp-1D0h]
  unsigned int v622; // [rsp+3Ch] [rbp-1CCh]
  unsigned int v623; // [rsp+40h] [rbp-1C8h]
  unsigned int v624; // [rsp+44h] [rbp-1C4h]
  unsigned int v625; // [rsp+48h] [rbp-1C0h]
  unsigned int v626; // [rsp+4Ch] [rbp-1BCh]
  unsigned int v627; // [rsp+50h] [rbp-1B8h]
  unsigned int v628; // [rsp+54h] [rbp-1B4h]
  unsigned int v629; // [rsp+58h] [rbp-1B0h]
  unsigned int v630; // [rsp+5Ch] [rbp-1ACh]
  unsigned int v631; // [rsp+60h] [rbp-1A8h]
  unsigned int v632; // [rsp+64h] [rbp-1A4h]
  unsigned int v633; // [rsp+68h] [rbp-1A0h]
  unsigned int v634; // [rsp+6Ch] [rbp-19Ch]
  unsigned int v635; // [rsp+70h] [rbp-198h]
  unsigned int v636; // [rsp+74h] [rbp-194h]
  unsigned int v637; // [rsp+78h] [rbp-190h]
  unsigned int v638; // [rsp+7Ch] [rbp-18Ch]
  unsigned int v639; // [rsp+80h] [rbp-188h]
  unsigned int v640; // [rsp+84h] [rbp-184h]
  unsigned int v641; // [rsp+88h] [rbp-180h]
  unsigned int v642; // [rsp+8Ch] [rbp-17Ch]
  unsigned int v643; // [rsp+90h] [rbp-178h]
  unsigned int v644; // [rsp+94h] [rbp-174h]
  unsigned int v645; // [rsp+98h] [rbp-170h]
  unsigned int v646; // [rsp+9Ch] [rbp-16Ch]
  unsigned int v647; // [rsp+A0h] [rbp-168h]
  unsigned int v648; // [rsp+A4h] [rbp-164h]
  unsigned int v649; // [rsp+A8h] [rbp-160h]
  unsigned int v650; // [rsp+ACh] [rbp-15Ch]
  unsigned int v651; // [rsp+B0h] [rbp-158h]
  unsigned int v652; // [rsp+B4h] [rbp-154h]
  unsigned int v653; // [rsp+B8h] [rbp-150h]
  unsigned int v654; // [rsp+BCh] [rbp-14Ch]
  __int64 v655; // [rsp+C0h] [rbp-148h]
  unsigned int v656; // [rsp+C8h] [rbp-140h]
  unsigned int v657; // [rsp+C8h] [rbp-140h]
  unsigned int v658; // [rsp+C8h] [rbp-140h]
  unsigned int v659; // [rsp+C8h] [rbp-140h]
  unsigned int v660; // [rsp+D0h] [rbp-138h]
  unsigned int v661; // [rsp+D4h] [rbp-134h]
  unsigned int v662; // [rsp+D4h] [rbp-134h]
  unsigned int v663; // [rsp+D4h] [rbp-134h]
  unsigned int v664; // [rsp+D8h] [rbp-130h]
  unsigned int v665; // [rsp+D8h] [rbp-130h]
  unsigned int v666; // [rsp+DCh] [rbp-12Ch]
  _DWORD v667[58]; // [rsp+E0h] [rbp-128h] BYREF
  int v668; // [rsp+1C8h] [rbp-40h] BYREF

  v5 = sub_26260E0(a1, a2, a3, a4);
  sub_5FF0F0(v5, "\n*** AST Context Stats:\n");
  v8 = sub_26260E0(v5, "\n*** AST Context Stats:\n", v6, v7);
  v9 = sub_5FF0F0(v8, "  ");
  v10 = sub_26238A0(v9, *(unsigned int *)(a1 + 16));
  v11 = " types total.\n";
  sub_5FF0F0(v10, " types total.\n");
  v13 = *(_DWORD *)(a1 + 16);
  memset(v667, 0, sizeof(v667));
  v15 = (__int64)&v668;
  v14 = 0;
  v668 = 0;
  if ( !v13 )
  {
    v652 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v653 = 0;
    v654 = 0;
    v660 = 0;
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
    v623 = 0;
    v624 = 0;
    v625 = 0;
    v626 = 0;
    v627 = 0;
    v628 = 0;
    v629 = 0;
    v630 = 0;
    v631 = 0;
    v632 = 0;
    v633 = 0;
    v634 = 0;
    v635 = 0;
    v636 = 0;
    v637 = 0;
    v638 = 0;
    v639 = 0;
    v640 = 0;
    v641 = 0;
    v642 = 0;
    v643 = 0;
    v644 = 0;
    v645 = 0;
    v646 = 0;
    v647 = 0;
    v648 = 0;
    v649 = 0;
    v650 = 0;
    v651 = 0;
    v655 = 0;
    goto LABEL_11;
  }
  v16 = *(__int64 **)(a1 + 8);
  v17 = &v16[v13];
  do
  {
    v18 = *v16++;
    ++v667[*(unsigned __int8 *)(v18 + 16)];
  }
  while ( v16 != v17 );
  v607 = v667[12];
  v608 = v667[13];
  v609 = v667[14];
  v610 = v667[15];
  v611 = v667[16];
  v612 = v667[17];
  v652 = v667[7];
  v653 = v667[9];
  v654 = v667[10];
  v19 = v667[1];
  v660 = v667[11];
  v14 = v667[2];
  v614 = v667[19];
  v12 = v667[3];
  v20 = v667[4];
  v21 = v667[5];
  v613 = v667[18];
  v22 = v667[6];
  v23 = v667[8];
  v615 = v667[20];
  v616 = v667[21];
  v617 = v667[22];
  v618 = v667[23];
  v619 = v667[24];
  v620 = v667[25];
  v621 = v667[26];
  v622 = v667[27];
  v623 = v667[28];
  v624 = v667[29];
  v625 = v667[30];
  v626 = v667[31];
  v627 = v667[32];
  v628 = v667[33];
  v629 = v667[34];
  v630 = v667[35];
  v631 = v667[36];
  v632 = v667[37];
  v633 = v667[38];
  v634 = v667[39];
  v635 = v667[40];
  v636 = v667[41];
  v637 = v667[42];
  v638 = v667[43];
  v639 = v667[44];
  v640 = v667[45];
  v641 = v667[46];
  v642 = v667[47];
  v643 = v667[48];
  v644 = v667[49];
  v645 = v667[50];
  v646 = v667[51];
  v647 = v667[52];
  v648 = v667[53];
  v649 = v667[54];
  v650 = v667[55];
  v13 = v667[57];
  v651 = v667[56];
  v11 = (const char *)(unsigned int)(48
                                   * (v667[57]
                                    + v667[56]
                                    + v667[55]
                                    + v667[53]
                                    + v667[52]
                                    + v667[51]
                                    + v667[50]
                                    + v667[49]
                                    + v667[48]
                                    + v667[45]
                                    + v667[44]
                                    + v667[43]
                                    + v667[42]
                                    + v667[41]
                                    + v667[40]
                                    + v667[39]
                                    + v667[37]
                                    + v667[36]
                                    + v667[35]
                                    + v667[34]
                                    + v667[33]
                                    + v667[32]
                                    + v667[30]
                                    + v667[29]
                                    + v667[28]
                                    + v667[26]
                                    + v667[25]
                                    + v667[24]
                                    + v667[22]
                                    + v667[20]
                                    + v667[19]
                                    + v667[17]
                                    + v667[16]
                                    + v667[15]
                                    + v667[14]
                                    + v667[11]
                                    + v667[10]
                                    + v667[9]
                                    + v667[7]
                                    + v667[5]
                                    + v667[3]
                                    + v667[2]
                                    + v667[0]
                                    + v667[1]));
  v15 = (unsigned int)(32 * (v667[54] + v667[47] + v667[46] + v667[13]));
  v655 = (unsigned int)((_DWORD)v11
                      + v15
                      + ((v667[38]
                        + v667[31]
                        + v667[27]
                        + v667[23]
                        + v667[21]
                        + v667[18]
                        + v667[12]
                        + v667[8]
                        + v667[4]
                        + v667[6]) << 6));
  if ( v667[0] )
  {
    v666 = v667[1];
    v664 = v667[2];
    v661 = v667[3];
    v656 = v667[0];
    v24 = sub_26260E0(v15, v11, v667[3], v667[2]);
    v25 = sub_5FF0F0(v24, "    ");
    v26 = sub_26238A0(v25, v656);
    v27 = sub_5FF0F0(v26, " ");
    v28 = sub_5FF0F0(v27, "Adjusted");
    v29 = sub_5FF0F0(v28, " types, ");
    v30 = sub_26238A0(v29, 48);
    v31 = sub_5FF0F0(v30, " each ");
    v32 = sub_5FF0F0(v31, "(");
    v11 = " bytes)\n";
    v15 = sub_26238A0(v32, 48LL * v656);
    sub_5FF0F0(v15, " bytes)\n");
    v19 = v666;
    v14 = v664;
    v12 = v661;
  }
  if ( v19 )
  {
    v665 = v14;
    v662 = v12;
    v657 = v19;
    v33 = sub_26260E0(v15, v11, v12, v14);
    v34 = sub_5FF0F0(v33, "    ");
    v35 = sub_26238A0(v34, v657);
    v36 = sub_5FF0F0(v35, " ");
    v37 = sub_5FF0F0(v36, "Decayed");
    v38 = sub_5FF0F0(v37, " types, ");
    v39 = sub_26238A0(v38, 48);
    v40 = sub_5FF0F0(v39, " each ");
    v41 = sub_5FF0F0(v40, "(");
    v11 = " bytes)\n";
    v15 = sub_26238A0(v41, 48LL * v657);
    sub_5FF0F0(v15, " bytes)\n");
    v12 = v662;
    v14 = v665;
  }
  if ( !(_DWORD)v14 )
  {
    if ( !(_DWORD)v12 )
      goto LABEL_10;
    goto LABEL_79;
  }
  v663 = v12;
  v658 = v14;
  v94 = sub_26260E0(v15, v11, v12, v14);
  v95 = sub_5FF0F0(v94, "    ");
  v96 = sub_26238A0(v95, v658);
  v97 = sub_5FF0F0(v96, " ");
  v98 = sub_5FF0F0(v97, "ConstantArray");
  v99 = sub_5FF0F0(v98, " types, ");
  v100 = sub_26238A0(v99, 48);
  v101 = sub_5FF0F0(v100, " each ");
  v102 = sub_5FF0F0(v101, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v102, 48LL * v658);
  sub_5FF0F0(v15, " bytes)\n");
  v12 = v663;
  if ( v663 )
  {
LABEL_79:
    v659 = v12;
    v103 = sub_26260E0(v15, v11, v12, v14);
    v104 = sub_5FF0F0(v103, "    ");
    v105 = sub_26238A0(v104, v659);
    v106 = sub_5FF0F0(v105, " ");
    v107 = sub_5FF0F0(v106, "ArrayParameter");
    v108 = sub_5FF0F0(v107, " types, ");
    v109 = sub_26238A0(v108, 48);
    v110 = sub_5FF0F0(v109, " each ");
    v111 = sub_5FF0F0(v110, "(");
    v11 = " bytes)\n";
    v15 = sub_26238A0(v111, 48LL * v659);
    sub_5FF0F0(v15, " bytes)\n");
    if ( (_DWORD)v20 )
      goto LABEL_80;
LABEL_11:
    if ( !(_DWORD)v21 )
      goto LABEL_12;
    goto LABEL_81;
  }
LABEL_10:
  if ( !(_DWORD)v20 )
    goto LABEL_11;
LABEL_80:
  v112 = sub_26260E0(v15, v11, v12, v14);
  v113 = sub_5FF0F0(v112, "    ");
  v114 = sub_26238A0(v113, v20);
  v115 = sub_5FF0F0(v114, " ");
  v116 = sub_5FF0F0(v115, "DependentSizedArray");
  v117 = sub_5FF0F0(v116, " types, ");
  v118 = sub_26238A0(v117, 64);
  v119 = sub_5FF0F0(v118, " each ");
  v120 = sub_5FF0F0(v119, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v120, v20 << 6);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !(_DWORD)v21 )
  {
LABEL_12:
    if ( !(_DWORD)v22 )
      goto LABEL_13;
    goto LABEL_82;
  }
LABEL_81:
  v121 = sub_26260E0(v15, v11, v12, v14);
  v122 = sub_5FF0F0(v121, "    ");
  v123 = sub_26238A0(v122, v21);
  v124 = sub_5FF0F0(v123, " ");
  v125 = sub_5FF0F0(v124, "IncompleteArray");
  v126 = sub_5FF0F0(v125, " types, ");
  v127 = sub_26238A0(v126, 48);
  v128 = sub_5FF0F0(v127, " each ");
  v129 = sub_5FF0F0(v128, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v129, 48 * v21);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !(_DWORD)v22 )
  {
LABEL_13:
    if ( !v652 )
      goto LABEL_14;
    goto LABEL_83;
  }
LABEL_82:
  v130 = sub_26260E0(v15, v11, v12, v14);
  v131 = sub_5FF0F0(v130, "    ");
  v132 = sub_26238A0(v131, v22);
  v133 = sub_5FF0F0(v132, " ");
  v134 = sub_5FF0F0(v133, "VariableArray");
  v135 = sub_5FF0F0(v134, " types, ");
  v136 = sub_26238A0(v135, 64);
  v137 = sub_5FF0F0(v136, " each ");
  v138 = sub_5FF0F0(v137, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v138, v22 << 6);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v652 )
  {
LABEL_14:
    if ( !(_DWORD)v23 )
      goto LABEL_15;
    goto LABEL_84;
  }
LABEL_83:
  v139 = sub_26260E0(v15, v11, v12, v14);
  v140 = sub_5FF0F0(v139, "    ");
  v141 = sub_26238A0(v140, v652);
  v142 = sub_5FF0F0(v141, " ");
  v143 = sub_5FF0F0(v142, "Atomic");
  v144 = sub_5FF0F0(v143, " types, ");
  v145 = sub_26238A0(v144, 48);
  v146 = sub_5FF0F0(v145, " each ");
  v147 = sub_5FF0F0(v146, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v147, 48LL * v652);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !(_DWORD)v23 )
  {
LABEL_15:
    if ( !v653 )
      goto LABEL_16;
    goto LABEL_85;
  }
LABEL_84:
  v148 = sub_26260E0(v15, v11, v12, v14);
  v149 = sub_5FF0F0(v148, "    ");
  v150 = sub_26238A0(v149, v23);
  v151 = sub_5FF0F0(v150, " ");
  v152 = sub_5FF0F0(v151, "Attributed");
  v153 = sub_5FF0F0(v152, " types, ");
  v154 = sub_26238A0(v153, 64);
  v155 = sub_5FF0F0(v154, " each ");
  v156 = sub_5FF0F0(v155, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v156, v23 << 6);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v653 )
  {
LABEL_16:
    if ( !v654 )
      goto LABEL_17;
    goto LABEL_86;
  }
LABEL_85:
  v157 = sub_26260E0(v15, v11, v12, v14);
  v158 = sub_5FF0F0(v157, "    ");
  v159 = sub_26238A0(v158, v653);
  v160 = sub_5FF0F0(v159, " ");
  v161 = sub_5FF0F0(v160, "BTFTagAttributed");
  v162 = sub_5FF0F0(v161, " types, ");
  v163 = sub_26238A0(v162, 48);
  v164 = sub_5FF0F0(v163, " each ");
  v165 = sub_5FF0F0(v164, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v165, 48LL * v653);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v654 )
  {
LABEL_17:
    if ( !v660 )
      goto LABEL_18;
    goto LABEL_87;
  }
LABEL_86:
  v166 = sub_26260E0(v15, v11, v12, v14);
  v167 = sub_5FF0F0(v166, "    ");
  v168 = sub_26238A0(v167, v654);
  v169 = sub_5FF0F0(v168, " ");
  v170 = sub_5FF0F0(v169, "BitInt");
  v171 = sub_5FF0F0(v170, " types, ");
  v172 = sub_26238A0(v171, 48);
  v173 = sub_5FF0F0(v172, " each ");
  v174 = sub_5FF0F0(v173, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v174, 48LL * v654);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v660 )
  {
LABEL_18:
    if ( !v607 )
      goto LABEL_19;
    goto LABEL_88;
  }
LABEL_87:
  v175 = sub_26260E0(v15, v11, v12, v14);
  v176 = sub_5FF0F0(v175, "    ");
  v177 = sub_26238A0(v176, v660);
  v178 = sub_5FF0F0(v177, " ");
  v179 = sub_5FF0F0(v178, "BlockPointer");
  v180 = sub_5FF0F0(v179, " types, ");
  v181 = sub_26238A0(v180, 48);
  v182 = sub_5FF0F0(v181, " each ");
  v183 = sub_5FF0F0(v182, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v183, 48LL * v660);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v607 )
  {
LABEL_19:
    if ( !v608 )
      goto LABEL_20;
    goto LABEL_89;
  }
LABEL_88:
  v184 = sub_26260E0(v15, v11, v12, v14);
  v185 = sub_5FF0F0(v184, "    ");
  v186 = sub_26238A0(v185, v607);
  v187 = sub_5FF0F0(v186, " ");
  v188 = sub_5FF0F0(v187, "CountAttributed");
  v189 = sub_5FF0F0(v188, " types, ");
  v190 = sub_26238A0(v189, 64);
  v191 = sub_5FF0F0(v190, " each ");
  v192 = sub_5FF0F0(v191, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v192, (unsigned __int64)v607 << 6);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v608 )
  {
LABEL_20:
    if ( !v609 )
      goto LABEL_21;
    goto LABEL_90;
  }
LABEL_89:
  v193 = sub_26260E0(v15, v11, v12, v14);
  v194 = sub_5FF0F0(v193, "    ");
  v195 = sub_26238A0(v194, v608);
  v196 = sub_5FF0F0(v195, " ");
  v197 = sub_5FF0F0(v196, "Builtin");
  v198 = sub_5FF0F0(v197, " types, ");
  v199 = sub_26238A0(v198, 32);
  v200 = sub_5FF0F0(v199, " each ");
  v201 = sub_5FF0F0(v200, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v201, 32LL * v608);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v609 )
  {
LABEL_21:
    if ( !v610 )
      goto LABEL_22;
    goto LABEL_91;
  }
LABEL_90:
  v202 = sub_26260E0(v15, v11, v12, v14);
  v203 = sub_5FF0F0(v202, "    ");
  v204 = sub_26238A0(v203, v609);
  v205 = sub_5FF0F0(v204, " ");
  v206 = sub_5FF0F0(v205, "Complex");
  v207 = sub_5FF0F0(v206, " types, ");
  v208 = sub_26238A0(v207, 48);
  v209 = sub_5FF0F0(v208, " each ");
  v210 = sub_5FF0F0(v209, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v210, 48LL * v609);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v610 )
  {
LABEL_22:
    if ( !v611 )
      goto LABEL_23;
    goto LABEL_92;
  }
LABEL_91:
  v211 = sub_26260E0(v15, v11, v12, v14);
  v212 = sub_5FF0F0(v211, "    ");
  v213 = sub_26238A0(v212, v610);
  v214 = sub_5FF0F0(v213, " ");
  v215 = sub_5FF0F0(v214, "Decltype");
  v216 = sub_5FF0F0(v215, " types, ");
  v217 = sub_26238A0(v216, 48);
  v218 = sub_5FF0F0(v217, " each ");
  v219 = sub_5FF0F0(v218, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v219, 48LL * v610);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v611 )
  {
LABEL_23:
    if ( !v612 )
      goto LABEL_24;
    goto LABEL_93;
  }
LABEL_92:
  v220 = sub_26260E0(v15, v11, v12, v14);
  v221 = sub_5FF0F0(v220, "    ");
  v222 = sub_26238A0(v221, v611);
  v223 = sub_5FF0F0(v222, " ");
  v224 = sub_5FF0F0(v223, "Auto");
  v225 = sub_5FF0F0(v224, " types, ");
  v226 = sub_26238A0(v225, 48);
  v227 = sub_5FF0F0(v226, " each ");
  v228 = sub_5FF0F0(v227, "(");
  v11 = " bytes)\n";
  v15 = sub_26238A0(v228, 48LL * v611);
  sub_5FF0F0(v15, " bytes)\n");
  if ( !v612 )
  {
LABEL_24:
    v42 = v613;
    if ( !v613 )
      goto LABEL_25;
    goto LABEL_94;
  }
LABEL_93:
  v229 = sub_26260E0(v15, v11, v12, v14);
  v230 = sub_5FF0F0(v229, "    ");
  v231 = sub_26238A0(v230, v612);
  v232 = sub_5FF0F0(v231, " ");
  v233 = sub_5FF0F0(v232, "DeducedTemplateSpecialization");
  v234 = sub_5FF0F0(v233, " types, ");
  v235 = sub_26238A0(v234, 48);
  v236 = sub_5FF0F0(v235, " each ");
  v237 = sub_5FF0F0(v236, "(");
  v238 = sub_26238A0(v237, 48LL * v612);
  v11 = " bytes)\n";
  sub_5FF0F0(v238, " bytes)\n");
  v42 = v613;
  if ( !v613 )
  {
LABEL_25:
    v43 = v614;
    if ( !v614 )
      goto LABEL_26;
    goto LABEL_95;
  }
LABEL_94:
  v239 = sub_26260E0(v42, v11, v12, v14);
  v240 = sub_5FF0F0(v239, "    ");
  v241 = sub_26238A0(v240, v613);
  v242 = sub_5FF0F0(v241, " ");
  v243 = sub_5FF0F0(v242, "DependentAddressSpace");
  v244 = sub_5FF0F0(v243, " types, ");
  v245 = sub_26238A0(v244, 64);
  v246 = sub_5FF0F0(v245, " each ");
  v247 = sub_5FF0F0(v246, "(");
  v42 = sub_26238A0(v247, (unsigned __int64)v613 << 6);
  sub_5FF0F0(v42, " bytes)\n");
  v43 = v614;
  if ( !v614 )
  {
LABEL_26:
    v44 = v615;
    if ( !v615 )
      goto LABEL_27;
    goto LABEL_96;
  }
LABEL_95:
  v248 = sub_26260E0(v42, v43, v12, v14);
  v249 = sub_5FF0F0(v248, "    ");
  v250 = sub_26238A0(v249, v614);
  v251 = sub_5FF0F0(v250, " ");
  v252 = sub_5FF0F0(v251, "DependentBitInt");
  v253 = sub_5FF0F0(v252, " types, ");
  v254 = sub_26238A0(v253, 48);
  v255 = sub_5FF0F0(v254, " each ");
  v256 = sub_5FF0F0(v255, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v256, 48LL * v614);
  sub_5FF0F0(v42, " bytes)\n");
  v44 = v615;
  if ( !v615 )
  {
LABEL_27:
    v45 = v616;
    if ( !v616 )
      goto LABEL_28;
    goto LABEL_97;
  }
LABEL_96:
  v257 = sub_26260E0(v42, v43, v12, v44);
  v258 = sub_5FF0F0(v257, "    ");
  v259 = sub_26238A0(v258, v615);
  v260 = sub_5FF0F0(v259, " ");
  v261 = sub_5FF0F0(v260, "DependentName");
  v262 = sub_5FF0F0(v261, " types, ");
  v263 = sub_26238A0(v262, 48);
  v264 = sub_5FF0F0(v263, " each ");
  v265 = sub_5FF0F0(v264, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v265, 48LL * v615);
  sub_5FF0F0(v42, " bytes)\n");
  v45 = v616;
  if ( !v616 )
  {
LABEL_28:
    if ( !v617 )
      goto LABEL_29;
    goto LABEL_98;
  }
LABEL_97:
  v266 = sub_26260E0(v42, v43, v45, v44);
  v267 = sub_5FF0F0(v266, "    ");
  v268 = sub_26238A0(v267, v616);
  v269 = sub_5FF0F0(v268, " ");
  v270 = sub_5FF0F0(v269, "DependentSizedExtVector");
  v271 = sub_5FF0F0(v270, " types, ");
  v272 = sub_26238A0(v271, 64);
  v273 = sub_5FF0F0(v272, " each ");
  v274 = sub_5FF0F0(v273, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v274, (unsigned __int64)v616 << 6);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v617 )
  {
LABEL_29:
    if ( !v618 )
      goto LABEL_30;
    goto LABEL_99;
  }
LABEL_98:
  v275 = sub_26260E0(v42, v43, v45, v44);
  v276 = sub_5FF0F0(v275, "    ");
  v277 = sub_26238A0(v276, v617);
  v278 = sub_5FF0F0(v277, " ");
  v279 = sub_5FF0F0(v278, "DependentTemplateSpecialization");
  v280 = sub_5FF0F0(v279, " types, ");
  v281 = sub_26238A0(v280, 48);
  v282 = sub_5FF0F0(v281, " each ");
  v283 = sub_5FF0F0(v282, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v283, 48LL * v617);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v618 )
  {
LABEL_30:
    if ( !v619 )
      goto LABEL_31;
    goto LABEL_100;
  }
LABEL_99:
  v284 = sub_26260E0(v42, v43, v45, v44);
  v285 = sub_5FF0F0(v284, "    ");
  v286 = sub_26238A0(v285, v618);
  v287 = sub_5FF0F0(v286, " ");
  v288 = sub_5FF0F0(v287, "DependentVector");
  v289 = sub_5FF0F0(v288, " types, ");
  v290 = sub_26238A0(v289, 64);
  v291 = sub_5FF0F0(v290, " each ");
  v292 = sub_5FF0F0(v291, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v292, (unsigned __int64)v618 << 6);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v619 )
  {
LABEL_31:
    if ( !v620 )
      goto LABEL_32;
    goto LABEL_101;
  }
LABEL_100:
  v293 = sub_26260E0(v42, v43, v45, v44);
  v294 = sub_5FF0F0(v293, "    ");
  v295 = sub_26238A0(v294, v619);
  v296 = sub_5FF0F0(v295, " ");
  v297 = sub_5FF0F0(v296, "Elaborated");
  v298 = sub_5FF0F0(v297, " types, ");
  v299 = sub_26238A0(v298, 48);
  v300 = sub_5FF0F0(v299, " each ");
  v301 = sub_5FF0F0(v300, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v301, 48LL * v619);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v620 )
  {
LABEL_32:
    if ( !v621 )
      goto LABEL_33;
    goto LABEL_102;
  }
LABEL_101:
  v302 = sub_26260E0(v42, v43, v45, v44);
  v303 = sub_5FF0F0(v302, "    ");
  v304 = sub_26238A0(v303, v620);
  v305 = sub_5FF0F0(v304, " ");
  v306 = sub_5FF0F0(v305, "FunctionNoProto");
  v307 = sub_5FF0F0(v306, " types, ");
  v308 = sub_26238A0(v307, 48);
  v309 = sub_5FF0F0(v308, " each ");
  v310 = sub_5FF0F0(v309, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v310, 48LL * v620);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v621 )
  {
LABEL_33:
    if ( !v622 )
      goto LABEL_34;
    goto LABEL_103;
  }
LABEL_102:
  v311 = sub_26260E0(v42, v43, v45, v44);
  v312 = sub_5FF0F0(v311, "    ");
  v313 = sub_26238A0(v312, v621);
  v314 = sub_5FF0F0(v313, " ");
  v315 = sub_5FF0F0(v314, "FunctionProto");
  v316 = sub_5FF0F0(v315, " types, ");
  v317 = sub_26238A0(v316, 48);
  v318 = sub_5FF0F0(v317, " each ");
  v319 = sub_5FF0F0(v318, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v319, 48LL * v621);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v622 )
  {
LABEL_34:
    if ( !v623 )
      goto LABEL_35;
    goto LABEL_104;
  }
LABEL_103:
  v320 = sub_26260E0(v42, v43, v45, v44);
  v321 = sub_5FF0F0(v320, "    ");
  v322 = sub_26238A0(v321, v622);
  v323 = sub_5FF0F0(v322, " ");
  v324 = sub_5FF0F0(v323, "HLSLAttributedResource");
  v325 = sub_5FF0F0(v324, " types, ");
  v326 = sub_26238A0(v325, 64);
  v327 = sub_5FF0F0(v326, " each ");
  v328 = sub_5FF0F0(v327, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v328, (unsigned __int64)v622 << 6);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v623 )
  {
LABEL_35:
    if ( !v624 )
      goto LABEL_36;
    goto LABEL_105;
  }
LABEL_104:
  v329 = sub_26260E0(v42, v43, v45, v44);
  v330 = sub_5FF0F0(v329, "    ");
  v331 = sub_26238A0(v330, v623);
  v332 = sub_5FF0F0(v331, " ");
  v333 = sub_5FF0F0(v332, "InjectedClassName");
  v334 = sub_5FF0F0(v333, " types, ");
  v335 = sub_26238A0(v334, 48);
  v336 = sub_5FF0F0(v335, " each ");
  v337 = sub_5FF0F0(v336, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v337, 48LL * v623);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v624 )
  {
LABEL_36:
    if ( !v625 )
      goto LABEL_37;
    goto LABEL_106;
  }
LABEL_105:
  v338 = sub_26260E0(v42, v43, v45, v44);
  v339 = sub_5FF0F0(v338, "    ");
  v340 = sub_26238A0(v339, v624);
  v341 = sub_5FF0F0(v340, " ");
  v342 = sub_5FF0F0(v341, "MacroQualified");
  v343 = sub_5FF0F0(v342, " types, ");
  v344 = sub_26238A0(v343, 48);
  v345 = sub_5FF0F0(v344, " each ");
  v346 = sub_5FF0F0(v345, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v346, 48LL * v624);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v625 )
  {
LABEL_37:
    if ( !v626 )
      goto LABEL_38;
    goto LABEL_107;
  }
LABEL_106:
  v347 = sub_26260E0(v42, v43, v45, v44);
  v348 = sub_5FF0F0(v347, "    ");
  v349 = sub_26238A0(v348, v625);
  v350 = sub_5FF0F0(v349, " ");
  v351 = sub_5FF0F0(v350, "ConstantMatrix");
  v352 = sub_5FF0F0(v351, " types, ");
  v353 = sub_26238A0(v352, 48);
  v354 = sub_5FF0F0(v353, " each ");
  v355 = sub_5FF0F0(v354, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v355, 48LL * v625);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v626 )
  {
LABEL_38:
    if ( !v627 )
      goto LABEL_39;
    goto LABEL_108;
  }
LABEL_107:
  v356 = sub_26260E0(v42, v43, v45, v44);
  v357 = sub_5FF0F0(v356, "    ");
  v358 = sub_26238A0(v357, v626);
  v359 = sub_5FF0F0(v358, " ");
  v360 = sub_5FF0F0(v359, "DependentSizedMatrix");
  v361 = sub_5FF0F0(v360, " types, ");
  v362 = sub_26238A0(v361, 64);
  v363 = sub_5FF0F0(v362, " each ");
  v364 = sub_5FF0F0(v363, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v364, (unsigned __int64)v626 << 6);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v627 )
  {
LABEL_39:
    if ( !v628 )
      goto LABEL_40;
    goto LABEL_109;
  }
LABEL_108:
  v365 = sub_26260E0(v42, v43, v45, v44);
  v366 = sub_5FF0F0(v365, "    ");
  v367 = sub_26238A0(v366, v627);
  v368 = sub_5FF0F0(v367, " ");
  v369 = sub_5FF0F0(v368, "MemberPointer");
  v370 = sub_5FF0F0(v369, " types, ");
  v371 = sub_26238A0(v370, 48);
  v372 = sub_5FF0F0(v371, " each ");
  v373 = sub_5FF0F0(v372, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v373, 48LL * v627);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v628 )
  {
LABEL_40:
    if ( !v629 )
      goto LABEL_41;
    goto LABEL_110;
  }
LABEL_109:
  v374 = sub_26260E0(v42, v43, v45, v44);
  v375 = sub_5FF0F0(v374, "    ");
  v376 = sub_26238A0(v375, v628);
  v377 = sub_5FF0F0(v376, " ");
  v378 = sub_5FF0F0(v377, "ObjCObjectPointer");
  v379 = sub_5FF0F0(v378, " types, ");
  v380 = sub_26238A0(v379, 48);
  v381 = sub_5FF0F0(v380, " each ");
  v382 = sub_5FF0F0(v381, "(");
  v43 = (unsigned __int64)" bytes)\n";
  v42 = sub_26238A0(v382, 48LL * v628);
  sub_5FF0F0(v42, " bytes)\n");
  if ( !v629 )
  {
LABEL_41:
    v46 = v630;
    if ( !v630 )
      goto LABEL_42;
    goto LABEL_111;
  }
LABEL_110:
  v383 = sub_26260E0(v42, v43, v45, v44);
  v384 = sub_5FF0F0(v383, "    ");
  v385 = sub_26238A0(v384, v629);
  v386 = sub_5FF0F0(v385, " ");
  v387 = sub_5FF0F0(v386, "ObjCObject");
  v388 = sub_5FF0F0(v387, " types, ");
  v389 = sub_26238A0(v388, 48);
  v390 = sub_5FF0F0(v389, " each ");
  v391 = sub_5FF0F0(v390, "(");
  v392 = sub_26238A0(v391, 48LL * v629);
  v43 = (unsigned __int64)" bytes)\n";
  sub_5FF0F0(v392, " bytes)\n");
  v46 = v630;
  if ( !v630 )
  {
LABEL_42:
    v47 = v631;
    if ( !v631 )
      goto LABEL_43;
    goto LABEL_112;
  }
LABEL_111:
  v393 = sub_26260E0(v46, v43, v45, v44);
  v394 = sub_5FF0F0(v393, "    ");
  v395 = sub_26238A0(v394, v630);
  v396 = sub_5FF0F0(v395, " ");
  v397 = sub_5FF0F0(v396, "ObjCInterface");
  v398 = sub_5FF0F0(v397, " types, ");
  v399 = sub_26238A0(v398, 48);
  v400 = sub_5FF0F0(v399, " each ");
  v401 = sub_5FF0F0(v400, "(");
  v46 = sub_26238A0(v401, 48LL * v630);
  sub_5FF0F0(v46, " bytes)\n");
  v47 = v631;
  if ( !v631 )
  {
LABEL_43:
    v48 = v632;
    if ( !v632 )
      goto LABEL_44;
    goto LABEL_113;
  }
LABEL_112:
  v402 = sub_26260E0(v46, v47, v45, v44);
  v403 = sub_5FF0F0(v402, "    ");
  v404 = sub_26238A0(v403, v631);
  v405 = sub_5FF0F0(v404, " ");
  v406 = sub_5FF0F0(v405, "ObjCTypeParam");
  v407 = sub_5FF0F0(v406, " types, ");
  v408 = sub_26238A0(v407, 48);
  v409 = sub_5FF0F0(v408, " each ");
  v410 = sub_5FF0F0(v409, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v410, 48LL * v631);
  sub_5FF0F0(v46, " bytes)\n");
  v48 = v632;
  if ( !v632 )
  {
LABEL_44:
    v49 = v633;
    if ( !v633 )
      goto LABEL_45;
    goto LABEL_114;
  }
LABEL_113:
  v411 = sub_26260E0(v46, v47, v45, v48);
  v412 = sub_5FF0F0(v411, "    ");
  v413 = sub_26238A0(v412, v632);
  v414 = sub_5FF0F0(v413, " ");
  v415 = sub_5FF0F0(v414, "PackExpansion");
  v416 = sub_5FF0F0(v415, " types, ");
  v417 = sub_26238A0(v416, 48);
  v418 = sub_5FF0F0(v417, " each ");
  v419 = sub_5FF0F0(v418, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v419, 48LL * v632);
  sub_5FF0F0(v46, " bytes)\n");
  v49 = v633;
  if ( !v633 )
  {
LABEL_45:
    if ( !v634 )
      goto LABEL_46;
    goto LABEL_115;
  }
LABEL_114:
  v420 = sub_26260E0(v46, v47, v49, v48);
  v421 = sub_5FF0F0(v420, "    ");
  v422 = sub_26238A0(v421, v633);
  v423 = sub_5FF0F0(v422, " ");
  v424 = sub_5FF0F0(v423, "PackIndexing");
  v425 = sub_5FF0F0(v424, " types, ");
  v426 = sub_26238A0(v425, 64);
  v427 = sub_5FF0F0(v426, " each ");
  v428 = sub_5FF0F0(v427, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v428, (unsigned __int64)v633 << 6);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v634 )
  {
LABEL_46:
    if ( !v635 )
      goto LABEL_47;
    goto LABEL_116;
  }
LABEL_115:
  v429 = sub_26260E0(v46, v47, v49, v48);
  v430 = sub_5FF0F0(v429, "    ");
  v431 = sub_26238A0(v430, v634);
  v432 = sub_5FF0F0(v431, " ");
  v433 = sub_5FF0F0(v432, "Paren");
  v434 = sub_5FF0F0(v433, " types, ");
  v435 = sub_26238A0(v434, 48);
  v436 = sub_5FF0F0(v435, " each ");
  v437 = sub_5FF0F0(v436, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v437, 48LL * v634);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v635 )
  {
LABEL_47:
    if ( !v636 )
      goto LABEL_48;
    goto LABEL_117;
  }
LABEL_116:
  v438 = sub_26260E0(v46, v47, v49, v48);
  v439 = sub_5FF0F0(v438, "    ");
  v440 = sub_26238A0(v439, v635);
  v441 = sub_5FF0F0(v440, " ");
  v442 = sub_5FF0F0(v441, "Pipe");
  v443 = sub_5FF0F0(v442, " types, ");
  v444 = sub_26238A0(v443, 48);
  v445 = sub_5FF0F0(v444, " each ");
  v446 = sub_5FF0F0(v445, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v446, 48LL * v635);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v636 )
  {
LABEL_48:
    if ( !v637 )
      goto LABEL_49;
    goto LABEL_118;
  }
LABEL_117:
  v447 = sub_26260E0(v46, v47, v49, v48);
  v448 = sub_5FF0F0(v447, "    ");
  v449 = sub_26238A0(v448, v636);
  v450 = sub_5FF0F0(v449, " ");
  v451 = sub_5FF0F0(v450, "Pointer");
  v452 = sub_5FF0F0(v451, " types, ");
  v453 = sub_26238A0(v452, 48);
  v454 = sub_5FF0F0(v453, " each ");
  v455 = sub_5FF0F0(v454, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v455, 48LL * v636);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v637 )
  {
LABEL_49:
    if ( !v638 )
      goto LABEL_50;
    goto LABEL_119;
  }
LABEL_118:
  v456 = sub_26260E0(v46, v47, v49, v48);
  v457 = sub_5FF0F0(v456, "    ");
  v458 = sub_26238A0(v457, v637);
  v459 = sub_5FF0F0(v458, " ");
  v460 = sub_5FF0F0(v459, "LValueReference");
  v461 = sub_5FF0F0(v460, " types, ");
  v462 = sub_26238A0(v461, 48);
  v463 = sub_5FF0F0(v462, " each ");
  v464 = sub_5FF0F0(v463, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v464, 48LL * v637);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v638 )
  {
LABEL_50:
    if ( !v639 )
      goto LABEL_51;
    goto LABEL_120;
  }
LABEL_119:
  v465 = sub_26260E0(v46, v47, v49, v48);
  v466 = sub_5FF0F0(v465, "    ");
  v467 = sub_26238A0(v466, v638);
  v468 = sub_5FF0F0(v467, " ");
  v469 = sub_5FF0F0(v468, "RValueReference");
  v470 = sub_5FF0F0(v469, " types, ");
  v471 = sub_26238A0(v470, 48);
  v472 = sub_5FF0F0(v471, " each ");
  v473 = sub_5FF0F0(v472, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v473, 48LL * v638);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v639 )
  {
LABEL_51:
    if ( !v640 )
      goto LABEL_52;
    goto LABEL_121;
  }
LABEL_120:
  v474 = sub_26260E0(v46, v47, v49, v48);
  v475 = sub_5FF0F0(v474, "    ");
  v476 = sub_26238A0(v475, v639);
  v477 = sub_5FF0F0(v476, " ");
  v478 = sub_5FF0F0(v477, "SubstTemplateTypeParmPack");
  v479 = sub_5FF0F0(v478, " types, ");
  v480 = sub_26238A0(v479, 48);
  v481 = sub_5FF0F0(v480, " each ");
  v482 = sub_5FF0F0(v481, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v482, 48LL * v639);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v640 )
  {
LABEL_52:
    if ( !v641 )
      goto LABEL_53;
    goto LABEL_122;
  }
LABEL_121:
  v483 = sub_26260E0(v46, v47, v49, v48);
  v484 = sub_5FF0F0(v483, "    ");
  v485 = sub_26238A0(v484, v640);
  v486 = sub_5FF0F0(v485, " ");
  v487 = sub_5FF0F0(v486, "SubstTemplateTypeParm");
  v488 = sub_5FF0F0(v487, " types, ");
  v489 = sub_26238A0(v488, 48);
  v490 = sub_5FF0F0(v489, " each ");
  v491 = sub_5FF0F0(v490, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v491, 48LL * v640);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v641 )
  {
LABEL_53:
    if ( !v642 )
      goto LABEL_54;
    goto LABEL_123;
  }
LABEL_122:
  v492 = sub_26260E0(v46, v47, v49, v48);
  v493 = sub_5FF0F0(v492, "    ");
  v494 = sub_26238A0(v493, v641);
  v495 = sub_5FF0F0(v494, " ");
  v496 = sub_5FF0F0(v495, "Enum");
  v497 = sub_5FF0F0(v496, " types, ");
  v498 = sub_26238A0(v497, 32);
  v499 = sub_5FF0F0(v498, " each ");
  v500 = sub_5FF0F0(v499, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v500, 32LL * v641);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v642 )
  {
LABEL_54:
    if ( !v643 )
      goto LABEL_55;
    goto LABEL_124;
  }
LABEL_123:
  v501 = sub_26260E0(v46, v47, v49, v48);
  v502 = sub_5FF0F0(v501, "    ");
  v503 = sub_26238A0(v502, v642);
  v504 = sub_5FF0F0(v503, " ");
  v505 = sub_5FF0F0(v504, "Record");
  v506 = sub_5FF0F0(v505, " types, ");
  v507 = sub_26238A0(v506, 32);
  v508 = sub_5FF0F0(v507, " each ");
  v509 = sub_5FF0F0(v508, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v509, 32LL * v642);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v643 )
  {
LABEL_55:
    if ( !v644 )
      goto LABEL_56;
    goto LABEL_125;
  }
LABEL_124:
  v510 = sub_26260E0(v46, v47, v49, v48);
  v511 = sub_5FF0F0(v510, "    ");
  v512 = sub_26238A0(v511, v643);
  v513 = sub_5FF0F0(v512, " ");
  v514 = sub_5FF0F0(v513, "TemplateSpecialization");
  v515 = sub_5FF0F0(v514, " types, ");
  v516 = sub_26238A0(v515, 48);
  v517 = sub_5FF0F0(v516, " each ");
  v518 = sub_5FF0F0(v517, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v518, 48LL * v643);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v644 )
  {
LABEL_56:
    if ( !v645 )
      goto LABEL_57;
    goto LABEL_126;
  }
LABEL_125:
  v519 = sub_26260E0(v46, v47, v49, v48);
  v520 = sub_5FF0F0(v519, "    ");
  v521 = sub_26238A0(v520, v644);
  v522 = sub_5FF0F0(v521, " ");
  v523 = sub_5FF0F0(v522, "TemplateTypeParm");
  v524 = sub_5FF0F0(v523, " types, ");
  v525 = sub_26238A0(v524, 48);
  v526 = sub_5FF0F0(v525, " each ");
  v527 = sub_5FF0F0(v526, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v527, 48LL * v644);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v645 )
  {
LABEL_57:
    if ( !v646 )
      goto LABEL_58;
    goto LABEL_127;
  }
LABEL_126:
  v528 = sub_26260E0(v46, v47, v49, v48);
  v529 = sub_5FF0F0(v528, "    ");
  v530 = sub_26238A0(v529, v645);
  v531 = sub_5FF0F0(v530, " ");
  v532 = sub_5FF0F0(v531, "TypeOfExpr");
  v533 = sub_5FF0F0(v532, " types, ");
  v534 = sub_26238A0(v533, 48);
  v535 = sub_5FF0F0(v534, " each ");
  v536 = sub_5FF0F0(v535, "(");
  v47 = (unsigned __int64)" bytes)\n";
  v46 = sub_26238A0(v536, 48LL * v645);
  sub_5FF0F0(v46, " bytes)\n");
  if ( !v646 )
  {
LABEL_58:
    v50 = v647;
    if ( !v647 )
      goto LABEL_59;
    goto LABEL_128;
  }
LABEL_127:
  v537 = sub_26260E0(v46, v47, v49, v48);
  v538 = sub_5FF0F0(v537, "    ");
  v539 = sub_26238A0(v538, v646);
  v540 = sub_5FF0F0(v539, " ");
  v541 = sub_5FF0F0(v540, "TypeOf");
  v542 = sub_5FF0F0(v541, " types, ");
  v543 = sub_26238A0(v542, 48);
  v544 = sub_5FF0F0(v543, " each ");
  v545 = sub_5FF0F0(v544, "(");
  v546 = sub_26238A0(v545, 48LL * v646);
  v47 = (unsigned __int64)" bytes)\n";
  sub_5FF0F0(v546, " bytes)\n");
  v50 = v647;
  if ( !v647 )
  {
LABEL_59:
    v51 = v648;
    if ( !v648 )
      goto LABEL_60;
    goto LABEL_129;
  }
LABEL_128:
  v547 = sub_26260E0(v50, v47, v49, v48);
  v548 = sub_5FF0F0(v547, "    ");
  v549 = sub_26238A0(v548, v647);
  v550 = sub_5FF0F0(v549, " ");
  v551 = sub_5FF0F0(v550, "Typedef");
  v552 = sub_5FF0F0(v551, " types, ");
  v553 = sub_26238A0(v552, 48);
  v554 = sub_5FF0F0(v553, " each ");
  v555 = sub_5FF0F0(v554, "(");
  v50 = sub_26238A0(v555, 48LL * v647);
  sub_5FF0F0(v50, " bytes)\n");
  v51 = v648;
  if ( !v648 )
  {
LABEL_60:
    v52 = v649;
    if ( !v649 )
      goto LABEL_61;
    goto LABEL_130;
  }
LABEL_129:
  v556 = sub_26260E0(v50, v51, v49, v48);
  v557 = sub_5FF0F0(v556, "    ");
  v558 = sub_26238A0(v557, v648);
  v559 = sub_5FF0F0(v558, " ");
  v560 = sub_5FF0F0(v559, "UnaryTransform");
  v561 = sub_5FF0F0(v560, " types, ");
  v562 = sub_26238A0(v561, 48);
  v563 = sub_5FF0F0(v562, " each ");
  v564 = sub_5FF0F0(v563, "(");
  v51 = (unsigned __int64)" bytes)\n";
  v50 = sub_26238A0(v564, 48LL * v648);
  sub_5FF0F0(v50, " bytes)\n");
  v52 = v649;
  if ( !v649 )
  {
LABEL_61:
    v53 = v650;
    if ( !v650 )
      goto LABEL_62;
    goto LABEL_131;
  }
LABEL_130:
  v565 = sub_26260E0(v50, v51, v49, v52);
  v566 = sub_5FF0F0(v565, "    ");
  v567 = sub_26238A0(v566, v649);
  v568 = sub_5FF0F0(v567, " ");
  v569 = sub_5FF0F0(v568, "UnresolvedUsing");
  v570 = sub_5FF0F0(v569, " types, ");
  v571 = sub_26238A0(v570, 32);
  v572 = sub_5FF0F0(v571, " each ");
  v573 = sub_5FF0F0(v572, "(");
  v51 = (unsigned __int64)" bytes)\n";
  v50 = sub_26238A0(v573, 32LL * v649);
  sub_5FF0F0(v50, " bytes)\n");
  v53 = v650;
  if ( !v650 )
  {
LABEL_62:
    if ( !v651 )
      goto LABEL_63;
LABEL_132:
    v583 = sub_26260E0(v50, v51, v53, v52);
    v584 = sub_5FF0F0(v583, "    ");
    v585 = sub_26238A0(v584, v651);
    v586 = sub_5FF0F0(v585, " ");
    v587 = sub_5FF0F0(v586, "Vector");
    v588 = sub_5FF0F0(v587, " types, ");
    v589 = sub_26238A0(v588, 48);
    v590 = sub_5FF0F0(v589, " each ");
    v591 = sub_5FF0F0(v590, "(");
    v51 = (unsigned __int64)" bytes)\n";
    v50 = sub_26238A0(v591, 48LL * v651);
    sub_5FF0F0(v50, " bytes)\n");
    if ( !v13 )
      goto LABEL_64;
    goto LABEL_133;
  }
LABEL_131:
  v574 = sub_26260E0(v50, v51, v53, v52);
  v575 = sub_5FF0F0(v574, "    ");
  v576 = sub_26238A0(v575, v650);
  v577 = sub_5FF0F0(v576, " ");
  v578 = sub_5FF0F0(v577, "Using");
  v579 = sub_5FF0F0(v578, " types, ");
  v580 = sub_26238A0(v579, 48);
  v581 = sub_5FF0F0(v580, " each ");
  v582 = sub_5FF0F0(v581, "(");
  v51 = (unsigned __int64)" bytes)\n";
  v50 = sub_26238A0(v582, 48LL * v650);
  sub_5FF0F0(v50, " bytes)\n");
  if ( v651 )
    goto LABEL_132;
LABEL_63:
  if ( !v13 )
    goto LABEL_64;
LABEL_133:
  v592 = sub_26260E0(v50, v51, v53, v52);
  v593 = sub_5FF0F0(v592, "    ");
  v594 = sub_26238A0(v593, v13);
  v595 = sub_5FF0F0(v594, " ");
  v596 = sub_5FF0F0(v595, "ExtVector");
  v597 = sub_5FF0F0(v596, " types, ");
  v598 = sub_26238A0(v597, 48);
  v599 = sub_5FF0F0(v598, " each ");
  v600 = sub_5FF0F0(v599, "(");
  v51 = (unsigned __int64)" bytes)\n";
  v50 = sub_26238A0(v600, 48LL * v13);
  sub_5FF0F0(v50, " bytes)\n");
LABEL_64:
  v54 = sub_26260E0(v50, v51, v53, v52);
  v55 = sub_5FF0F0(v54, "Total bytes = ");
  v56 = sub_26238A0(v55, v655);
  sub_5FF0F0(v56, "\n");
  v59 = sub_26260E0(v56, "\n", v57, v58);
  v60 = sub_26238A0(v59, *(unsigned int *)(a1 + 22764));
  v61 = sub_5FF0F0(v60, "/");
  v62 = sub_26238A0(v61, *(unsigned int *)(a1 + 22760));
  sub_5FF0F0(v62, " implicit default constructors created\n");
  v65 = sub_26260E0(v62, " implicit default constructors created\n", v63, v64);
  v66 = sub_26238A0(v65, *(unsigned int *)(a1 + 22772));
  v67 = sub_5FF0F0(v66, "/");
  v68 = " implicit copy constructors created\n";
  v69 = sub_26238A0(v67, *(unsigned int *)(a1 + 22768));
  sub_5FF0F0(v69, " implicit copy constructors created\n");
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 8) != 0 )
  {
    v604 = sub_26260E0(v69, " implicit copy constructors created\n", v70, v71);
    v605 = sub_26238A0(v604, *(unsigned int *)(a1 + 22780));
    v606 = sub_5FF0F0(v605, "/");
    v68 = " implicit move constructors created\n";
    v69 = sub_26238A0(v606, *(unsigned int *)(a1 + 22776));
    sub_5FF0F0(v69, " implicit move constructors created\n");
  }
  v72 = sub_26260E0(v69, v68, v70, v71);
  v73 = sub_26238A0(v72, *(unsigned int *)(a1 + 22788));
  v74 = sub_5FF0F0(v73, "/");
  v75 = " implicit copy assignment operators created\n";
  v76 = sub_26238A0(v74, *(unsigned int *)(a1 + 22784));
  sub_5FF0F0(v76, " implicit copy assignment operators created\n");
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 8) != 0 )
  {
    v601 = sub_26260E0(v76, " implicit copy assignment operators created\n", v77, v78);
    v602 = sub_26238A0(v601, *(unsigned int *)(a1 + 22796));
    v603 = sub_5FF0F0(v602, "/");
    v75 = " implicit move assignment operators created\n";
    v76 = sub_26238A0(v603, *(unsigned int *)(a1 + 22792));
    sub_5FF0F0(v76, " implicit move assignment operators created\n");
  }
  v79 = sub_26260E0(v76, v75, v77, v78);
  v80 = sub_26238A0(v79, *(unsigned int *)(a1 + 22804));
  v81 = sub_5FF0F0(v80, "/");
  v82 = sub_26238A0(v81, *(unsigned int *)(a1 + 22800));
  sub_5FF0F0(v82, " implicit destructors created\n");
  if ( *(_QWORD *)(a1 + 18200) )
  {
    v85 = sub_26260E0(v82, " implicit destructors created\n", v83, v84);
    sub_5FF0F0(v85, "\n");
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 18200) + 200LL))(*(_QWORD *)(a1 + 18200));
  }
  v86 = *(_QWORD *)(a1 + 2208);
  v87 = v86 + 8LL * *(unsigned int *)(a1 + 2216);
  if ( v86 == v87 )
  {
    v89 = 0;
  }
  else
  {
    v88 = *(_QWORD *)(a1 + 2208);
    v89 = 0;
    do
    {
      v90 = (unsigned int)((v88 - v86) >> 3) >> 7;
      if ( v90 > 0x1E )
        LOBYTE(v90) = 30;
      v88 += 8;
      v89 += 4096LL << v90;
    }
    while ( v87 != v88 );
  }
  v91 = *(_QWORD *)(a1 + 2256);
  for ( i = v91 + 16LL * *(unsigned int *)(a1 + 2264); i != v91; v91 += 16 )
    v89 += *(_QWORD *)(v91 + 8);
  return sub_2595500(*(unsigned int *)(a1 + 2216), *(_QWORD *)(a1 + 2272), v89);
}

