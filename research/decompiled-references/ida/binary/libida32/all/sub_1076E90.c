_BYTE *__fastcall sub_1076E90(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v42; // rcx
  char *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rcx
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r9
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rcx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rcx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rcx
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // rcx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rcx
  __int64 v192; // r8
  __int64 v193; // r9
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rcx
  __int64 v212; // r9
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rcx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // r9
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // r9
  __int64 v233; // rcx
  __int64 v234; // r8
  __int64 v235; // r9
  __int64 v236; // r8
  __int64 v237; // r9
  __int64 v238; // rcx
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rcx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // r8
  __int64 v261; // r9
  __int64 v262; // rcx
  __int64 v263; // rcx
  __int64 v264; // r8
  __int64 v265; // r9
  __int64 v266; // rcx
  __int64 v267; // r8
  __int64 v268; // r9
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // r8
  __int64 v273; // r9
  __int64 v274; // rcx
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // r8
  __int64 v285; // r9
  __int64 v286; // rcx
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // r9
  __int64 v290; // rcx
  __int64 v291; // r8
  __int64 v292; // r9
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  __int64 v296; // r8
  __int64 v297; // r9
  __int64 v298; // rcx
  __int64 v299; // rcx
  __int64 v300; // r8
  __int64 v301; // r9
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  __int64 v305; // rcx
  __int64 v306; // r8
  __int64 v307; // r9
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // rcx
  __int64 v311; // rcx
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // r9
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  __int64 v320; // r8
  __int64 v321; // r9
  __int64 v322; // rcx
  __int64 v323; // rcx
  __int64 v324; // r8
  __int64 v325; // r9
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  __int64 v329; // rcx
  __int64 v330; // r8
  __int64 v331; // r9
  __int64 v332; // r8
  __int64 v333; // r9
  __int64 v334; // rcx
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __int64 v338; // rcx
  __int64 v339; // r8
  __int64 v340; // r9
  __int64 v341; // r8
  __int64 v342; // r9
  __int64 v343; // rcx
  __int64 v344; // r9
  __int64 v345; // rcx
  __int64 v346; // r8
  __int64 v347; // rcx
  __int64 v348; // r8
  __int64 v349; // r9
  __int64 v350; // rcx
  __int64 v351; // r8
  __int64 v352; // r9
  __int64 v353; // r8
  __int64 v354; // r9
  __int64 v355; // rcx
  __int64 v356; // rcx
  __int64 v357; // r8
  __int64 v358; // r9
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // r9
  __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // r9
  __int64 v365; // r8
  __int64 v366; // r9
  __int64 v367; // rcx
  __int64 v368; // rcx
  __int64 v369; // r8
  __int64 v370; // r9
  __int64 v371; // rcx
  __int64 v372; // r8
  __int64 v373; // r9
  __int64 v374; // r8
  __int64 v375; // r9
  __int64 v376; // rcx
  __int64 v377; // r9
  __int64 v378; // rcx
  __int64 v379; // r8
  __int64 v380; // rcx
  __int64 v381; // r8
  __int64 v382; // r9
  __int64 v383; // rcx
  __int64 v384; // r8
  __int64 v385; // r9
  __int64 v386; // r8
  __int64 v387; // r9
  __int64 v388; // rcx
  __int64 v389; // rcx
  __int64 v390; // r8
  __int64 v391; // r9
  __int64 v392; // rcx
  __int64 v393; // r8
  __int64 v394; // r9
  __int64 v395; // rcx
  __int64 v396; // r8
  __int64 v397; // r9
  __int64 v398; // r8
  __int64 v399; // r9
  __int64 v400; // rcx
  __int64 v401; // rcx
  __int64 v402; // r8
  __int64 v403; // r9
  __int64 v404; // rcx
  __int64 v405; // r8
  __int64 v406; // r9
  __int64 v407; // r8
  __int64 v408; // r9
  __int64 v409; // rcx
  __int64 v410; // r9
  __int64 v411; // rcx
  __int64 v412; // r8
  __int64 v413; // rcx
  __int64 v414; // r8
  __int64 v415; // r9
  __int64 v416; // rcx
  __int64 v417; // r8
  __int64 v418; // r9
  __int64 v419; // r8
  __int64 v420; // r9
  __int64 v421; // rcx
  __int64 v422; // rcx
  __int64 v423; // r8
  __int64 v424; // r9
  __int64 v425; // rcx
  __int64 v426; // r8
  __int64 v427; // r9
  __int64 v428; // rcx
  __int64 v429; // r8
  __int64 v430; // r9
  __int64 v431; // r8
  __int64 v432; // r9
  __int64 v433; // rcx
  __int64 v434; // rcx
  __int64 v435; // r8
  __int64 v436; // r9
  __int64 v437; // rcx
  __int64 v438; // r8
  __int64 v439; // r9
  __int64 v440; // rcx
  __int64 v441; // r8
  __int64 v442; // r9
  __int64 v443; // r8
  __int64 v444; // r9
  __int64 v445; // rcx
  __int64 v446; // rcx
  __int64 v447; // r8
  __int64 v448; // r9
  __int64 v449; // rcx
  __int64 v450; // r8
  __int64 v451; // r9
  __int64 v452; // rcx
  __int64 v453; // r8
  __int64 v454; // r9
  __int64 v455; // r8
  __int64 v456; // r9
  __int64 v457; // rcx
  __int64 v458; // rcx
  __int64 v459; // r8
  __int64 v460; // r9
  __int64 v461; // rcx
  __int64 v462; // r8
  __int64 v463; // r9
  __int64 v464; // rcx
  __int64 v465; // r8
  __int64 v466; // r9
  __int64 v467; // rax
  __int64 v468; // rax
  __int64 v469; // rcx
  __int64 v470; // r9
  __int64 v471; // rcx
  __int64 v472; // r8
  __int64 v473; // r8
  __int64 v474; // r9
  __int64 v475; // rcx
  bool v476; // zf
  const char *v477; // rax
  __int64 v478; // rcx
  __int64 v479; // r8
  __int64 v480; // r9
  __int64 v481; // r8
  __int64 v482; // r9
  __int64 v483; // rcx
  _QWORD v484[2]; // [rsp+10h] [rbp-F8h] BYREF
  void *v485[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v486; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v487[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v488; // [rsp+60h] [rbp-A8h]
  _QWORD v489[4]; // [rsp+70h] [rbp-98h] BYREF
  __int16 v490; // [rsp+90h] [rbp-78h]
  __int64 v491; // [rsp+A0h] [rbp-68h]
  __int64 v492; // [rsp+A8h] [rbp-60h]
  __int64 v493; // [rsp+B0h] [rbp-58h]
  __int64 v494; // [rsp+B8h] [rbp-50h]
  __int64 v495; // [rsp+C0h] [rbp-48h]

  v5 = *(_DWORD *)(a1 + 260);
  if ( v5 == 20 || v5 == 7 )
  {
    v488 = 259;
    v489[0] = "__builtin_ppc_national2packed";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__builtin_national2packed";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, a4, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_packed2national";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__builtin_packed2national";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v44, v45, v46, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_packed2zoned";
    v490 = 259;
    v487[0] = "__builtin_packed2zoned";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v47, v48, v49, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_zoned2packed";
    v490 = 259;
    v487[0] = "__builtin_zoned2packed";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v50, v51, v52, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_cdtbcd";
    v488 = 259;
    v490 = 259;
    v487[0] = "__cdtbcd";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v53, v54, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_cbcdtd";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__cbcdtd";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v55, 259, v56, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_addg6s";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__addg6s";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v57, v58, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_popcntb";
    v487[0] = "__popcntb";
    v490 = 259;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v59, v60, v61, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_poppar4";
    v490 = 259;
    v487[0] = "__poppar4";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v62, v63, v64, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_poppar8";
    v490 = 259;
    v487[0] = "__poppar8";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v65, v66, v67, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_eieio";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__eieio";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v68, v69, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_iospace_eieio";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__iospace_eieio";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v70, 257, 259, v491, v492, v493, v494, 1u);
    v490 = 259;
    v489[0] = "__builtin_ppc_isync";
    LOWORD(v495) = 257;
    v487[0] = "__isync";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v71, v72, v73, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_lwsync";
    v490 = 259;
    v487[0] = "__lwsync";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v74, v75, v76, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_iospace_lwsync";
    v490 = 259;
    v487[0] = "__iospace_lwsync";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v77, v78, v79, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_sync";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__sync";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v80, v81, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_iospace_sync";
    v488 = 259;
    v490 = 259;
    v487[0] = "__iospace_sync";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v82, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_dcbfl";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__dcbfl";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v83, v84, v85, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_dcbflp";
    v490 = 259;
    v487[0] = "__dcbflp";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v86, v87, v88, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_dcbst";
    v490 = 259;
    v487[0] = "__dcbst";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v89, v90, v91, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_dcbt";
    v488 = 259;
    v490 = 259;
    v487[0] = "__dcbt";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v92, v93, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_dcbtst";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__dcbtst";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v94, 259, v95, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_dcbz";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__dcbz";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v96, v97, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_icbt";
    v487[0] = "__icbt";
    v490 = 259;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v98, v99, v100, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_compare_and_swap";
    v490 = 259;
    v487[0] = "__compare_and_swap";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v101, v102, v103, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_compare_and_swaplp";
    v490 = 259;
    v487[0] = "__compare_and_swaplp";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v104, v105, v106, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fetch_and_add";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__fetch_and_add";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v107, v108, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fetch_and_addlp";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__fetch_and_addlp";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v109, 257, 259, v491, v492, v493, v494, 1u);
    v490 = 259;
    v489[0] = "__builtin_ppc_fetch_and_and";
    LOWORD(v495) = 257;
    v487[0] = "__fetch_and_and";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v110, v111, v112, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fetch_and_andlp";
    v490 = 259;
    v487[0] = "__fetch_and_andlp";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v113, v114, v115, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fetch_and_or";
    v490 = 259;
    v487[0] = "__fetch_and_or";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v116, v117, v118, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fetch_and_orlp";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__fetch_and_orlp";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v119, v120, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fetch_and_swap";
    v488 = 259;
    v490 = 259;
    v487[0] = "__fetch_and_swap";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v121, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_fetch_and_swaplp";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__fetch_and_swaplp";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v122, v123, v124, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_ldarx";
    v490 = 259;
    v487[0] = "__ldarx";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v125, v126, v127, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_lwarx";
    v490 = 259;
    v487[0] = "__lwarx";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v128, v129, v130, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_lharx";
    v488 = 259;
    v490 = 259;
    v487[0] = "__lharx";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v131, v132, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_lbarx";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__lbarx";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v133, 259, v134, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_stfiw";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__stfiw";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v135, v136, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_stdcx";
    v487[0] = "__stdcx";
    v490 = 259;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v137, v138, v139, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_stwcx";
    v490 = 259;
    v487[0] = "__stwcx";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v140, v141, v142, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_sthcx";
    v490 = 259;
    v487[0] = "__sthcx";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v143, v144, v145, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_stbcx";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__stbcx";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v146, v147, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_tdw";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__tdw";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v148, 257, 259, v491, v492, v493, v494, 1u);
    v490 = 259;
    v489[0] = "__builtin_ppc_tw";
    LOWORD(v495) = 257;
    v487[0] = "__tw";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v149, v150, v151, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_trap";
    v490 = 259;
    v487[0] = "__trap";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v152, v153, v154, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_trapd";
    v490 = 259;
    v487[0] = "__trapd";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v155, v156, v157, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fcfid";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__fcfid";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v158, v159, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fcfud";
    v488 = 259;
    v490 = 259;
    v487[0] = "__fcfud";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v160, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_fctid";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__fctid";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v161, v162, v163, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fctidz";
    v490 = 259;
    v487[0] = "__fctidz";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v164, v165, v166, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fctiw";
    v490 = 259;
    v487[0] = "__fctiw";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v167, v168, v169, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fctiwz";
    v488 = 259;
    v490 = 259;
    v487[0] = "__fctiwz";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v170, v171, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fctudz";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__fctudz";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v172, 259, v173, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fctuwz";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__fctuwz";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v174, v175, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_cmpeqb";
    v487[0] = "__cmpeqb";
    v490 = 259;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v176, v177, v178, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_cmprb";
    v490 = 259;
    v487[0] = "__cmprb";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v179, v180, v181, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_setb";
    v490 = 259;
    v487[0] = "__setb";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v182, v183, v184, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_cmpb";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__cmpb";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v185, v186, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_mulhd";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__mulhd";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v187, 257, 259, v491, v492, v493, v494, 1u);
    v490 = 259;
    v489[0] = "__builtin_ppc_mulhdu";
    LOWORD(v495) = 257;
    v487[0] = "__mulhdu";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v188, v189, v190, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_mulhw";
    v490 = 259;
    v487[0] = "__mulhw";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v191, v192, v193, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_mulhwu";
    v490 = 259;
    v487[0] = "__mulhwu";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v194, v195, v196, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_maddhd";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__maddhd";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v197, v198, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_maddhdu";
    v488 = 259;
    v490 = 259;
    v487[0] = "__maddhdu";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v199, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_maddld";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__maddld";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v200, v201, v202, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_rlwnm";
    v490 = 259;
    v487[0] = "__rlwnm";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v203, v204, v205, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_rlwimi";
    v490 = 259;
    v487[0] = "__rlwimi";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v206, v207, v208, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_rldimi";
    v488 = 259;
    v490 = 259;
    v487[0] = "__rldimi";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v209, v210, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_load2r";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__load2r";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v211, 259, v212, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_load4r";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__load4r";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v213, v214, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_load8r";
    v487[0] = "__load8r";
    v490 = 259;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v215, v216, v217, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_store2r";
    v490 = 259;
    v487[0] = "__store2r";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v218, v219, v220, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_store4r";
    v490 = 259;
    v487[0] = "__store4r";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v221, v222, v223, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_store8r";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__store8r";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v224, v225, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_extract_exp";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__extract_exp";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v226, 257, 259, v491, v492, v493, v494, 1u);
    v490 = 259;
    v489[0] = "__builtin_ppc_extract_sig";
    LOWORD(v495) = 257;
    v487[0] = "__extract_sig";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v227, v228, v229, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_mtfsb0";
    v490 = 259;
    v487[0] = "__mtfsb0";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v230, v231, v232, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_mtfsb1";
    v490 = 259;
    v487[0] = "__mtfsb1";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v233, v234, v235, v491, v492, v493, v494, 1u);
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__mtfsf";
    v488 = 259;
    v489[0] = "__builtin_ppc_mtfsf";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v236, v237, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_mtfsfi";
    v490 = 259;
    v488 = 259;
    v487[0] = "__mtfsfi";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v238, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_insert_exp";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__insert_exp";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v239, v240, v241, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fmsub";
    v490 = 259;
    v487[0] = "__fmsub";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v242, v243, v244, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fmsubs";
    v490 = 259;
    v487[0] = "__fmsubs";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v245, v246, v247, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fnmadd";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__fnmadd";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v248, v249, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fnmadds";
    v490 = 259;
    v488 = 259;
    v487[0] = "__fnmadds";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v250, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_fnmsub";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__fnmsub";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v251, v252, v253, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fnmsubs";
    v490 = 259;
    v487[0] = "__fnmsubs";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v254, v255, v256, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fre";
    v490 = 259;
    v487[0] = "__fre";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v257, v258, v259, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fres";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__fres";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v260, v261, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_swdiv_nochk";
    v490 = 259;
    v488 = 259;
    v487[0] = "__swdiv_nochk";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v262, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_swdivs_nochk";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__swdivs_nochk";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v263, v264, v265, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_alloca";
    v490 = 259;
    v487[0] = "__alloca";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v266, v267, v268, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_altivec_crypto_vcipher";
    v490 = 259;
    v487[0] = "__vcipher";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v269, v270, v271, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_altivec_crypto_vcipherlast";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__vcipherlast";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v272, v273, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_altivec_crypto_vncipher";
    v490 = 259;
    v488 = 259;
    v487[0] = "__vncipher";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v274, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_altivec_crypto_vncipherlast";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__vncipherlast";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v275, v276, v277, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_altivec_crypto_vpermxor";
    v490 = 259;
    v487[0] = "__vpermxor";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v278, v279, v280, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_altivec_crypto_vpmsumb";
    v490 = 259;
    v487[0] = "__vpmsumb";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v281, v282, v283, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_altivec_crypto_vpmsumd";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__vpmsumd";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v284, v285, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_altivec_crypto_vpmsumh";
    v490 = 259;
    v488 = 259;
    v487[0] = "__vpmsumh";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v286, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_altivec_crypto_vpmsumw";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__vpmsumw";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v287, v288, v289, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_divde";
    v490 = 259;
    v487[0] = "__divde";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v290, v291, v292, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_divwe";
    v490 = 259;
    v487[0] = "__divwe";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v293, v294, v295, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_divdeu";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__divdeu";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v296, v297, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_divweu";
    v490 = 259;
    v488 = 259;
    v487[0] = "__divweu";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v298, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_alignx";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__alignx";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v299, v300, v301, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "bcopy";
    v490 = 259;
    v487[0] = "__bcopy";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v302, v303, v304, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_bpermd";
    v490 = 259;
    v487[0] = "__bpermd";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v305, v306, v307, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_clz";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__cntlz4";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v308, v309, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_clzll";
    v490 = 259;
    v488 = 259;
    v487[0] = "__cntlz8";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v310, 259, 259, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_complex";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__cmplx";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v311, v312, v313, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__cmplxf";
    v489[0] = "__builtin_complex";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v314, v315, v316, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ctz";
    v490 = 259;
    v487[0] = "__cnttz4";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v317, v318, v319, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ctzll";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__cnttz8";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v320, v321, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_darn";
    v490 = 259;
    v488 = 259;
    v487[0] = "__darn";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v322, 259, 259, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_darn_32";
    v487[0] = "__darn_32";
    v490 = 259;
    LOWORD(v495) = 257;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v323, v324, v325, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_darn_raw";
    v490 = 259;
    v487[0] = "__darn_raw";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v326, v327, v328, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_dcbf";
    v490 = 259;
    v487[0] = "__dcbf";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v329, v330, v331, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fence";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__fence";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v332, v333, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_fma";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__fmadd";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v334, 257, 259, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_fmaf";
    v490 = 259;
    v487[0] = "__fmadds";
    LOWORD(v495) = 257;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v335, v336, v337, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_abs";
    v490 = 259;
    v487[0] = "__abs";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v338, v339, v340, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_labs";
    v488 = 259;
    v490 = 259;
    v487[0] = "__labs";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v341, v342, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_llabs";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__llabs";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v343, 259, v344, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_popcount";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__popcnt4";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v345, v346, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_popcountll";
    v490 = 259;
    v487[0] = "__popcnt8";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v347, v348, v349, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_readflm";
    v490 = 259;
    v487[0] = "__readflm";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v350, v351, v352, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_rotateleft32";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__rotatel4";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v353, v354, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_rotateleft64";
    v490 = 259;
    v488 = 259;
    v487[0] = "__rotatel8";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v355, 259, 259, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_rdlam";
    v487[0] = "__rdlam";
    v490 = 259;
    LOWORD(v495) = 257;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v356, v357, v358, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_setflm";
    v490 = 259;
    v487[0] = "__setflm";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v359, v360, v361, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_setrnd";
    v490 = 259;
    v487[0] = "__setrnd";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v362, v363, v364, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_dcbtstt";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__dcbtstt";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v365, v366, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_dcbtt";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__dcbtt";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v367, 257, 259, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_mftbu";
    v490 = 259;
    v487[0] = "__mftbu";
    LOWORD(v495) = 257;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v368, v369, v370, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_mfmsr";
    v490 = 259;
    v487[0] = "__mfmsr";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v371, v372, v373, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_mtmsr";
    v488 = 259;
    v490 = 259;
    v487[0] = "__mtmsr";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v374, v375, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_mfspr";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__mfspr";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v376, 259, v377, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_mtspr";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__mtspr";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v378, v379, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fric";
    v490 = 259;
    v487[0] = "__fric";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v380, v381, v382, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_frim";
    v490 = 259;
    v487[0] = "__frim";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v383, v384, v385, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_frims";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__frims";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v386, v387, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_frin";
    v490 = 259;
    v488 = 259;
    v487[0] = "__frin";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v388, 259, 259, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_frins";
    v487[0] = "__frins";
    v490 = 259;
    LOWORD(v495) = 257;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v389, v390, v391, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_frip";
    v490 = 259;
    v487[0] = "__frip";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v392, v393, v394, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_frips";
    v490 = 259;
    v487[0] = "__frips";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v395, v396, v397, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_friz";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__friz";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v398, v399, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_frizs";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__frizs";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v400, 257, 259, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fsel";
    v490 = 259;
    v487[0] = "__fsel";
    LOWORD(v495) = 257;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v401, v402, v403, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fsels";
    v490 = 259;
    v487[0] = "__fsels";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v404, v405, v406, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_frsqrte";
    v488 = 259;
    v490 = 259;
    v487[0] = "__frsqrte";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v407, v408, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_frsqrtes";
    v488 = 259;
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__frsqrtes";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v409, 259, v410, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_fsqrt";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__fsqrt";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v411, v412, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fsqrts";
    v490 = 259;
    v487[0] = "__fsqrts";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v413, v414, v415, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_addex";
    v490 = 259;
    v487[0] = "__addex";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v416, v417, v418, v491, v492, v493, v494, 1u);
    v490 = 259;
    LOWORD(v495) = 257;
    v489[0] = "__builtin_complex";
    v487[0] = "__cmplxl";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v419, v420, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_compare_exp_uo";
    v490 = 259;
    v488 = 259;
    v487[0] = "__compare_exp_uo";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v421, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_compare_exp_lt";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__compare_exp_lt";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v422, v423, v424, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_compare_exp_gt";
    v490 = 259;
    v487[0] = "__compare_exp_gt";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v425, v426, v427, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_compare_exp_eq";
    v490 = 259;
    v487[0] = "__compare_exp_eq";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v428, v429, v430, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_test_data_class";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__test_data_class";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v431, v432, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_swdiv";
    v490 = 259;
    v488 = 259;
    v487[0] = "__swdiv";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v433, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_swdivs";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__swdivs";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v434, v435, v436, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fnabs";
    v490 = 259;
    v487[0] = "__fnabs";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v437, v438, v439, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_fnabss";
    v490 = 259;
    v487[0] = "__fnabss";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v440, v441, v442, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_maxfe";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__builtin_maxfe";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v443, v444, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_maxfl";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__builtin_maxfl";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v445, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_maxfs";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__builtin_maxfs";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v446, v447, v448, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_minfe";
    v490 = 259;
    v487[0] = "__builtin_minfe";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v449, v450, v451, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_minfl";
    v490 = 259;
    v487[0] = "__builtin_minfl";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v452, v453, v454, v491, v492, v493, v494, 1u);
    v489[0] = "__builtin_ppc_minfs";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "__builtin_minfs";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v455, v456, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_mffs";
    v490 = 259;
    v488 = 259;
    v487[0] = "__builtin_mffs";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v457, 259, 259, v491, v492, v493, v494, 1u);
    v488 = 259;
    v489[0] = "__builtin_ppc_mffsl";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__builtin_mffsl";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v458, v459, v460, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__builtin_mtfsf";
    v488 = 259;
    v489[0] = "__builtin_ppc_mtfsf";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v461, v462, v463, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "__builtin_ppc_set_fpscr_rn";
    v490 = 259;
    v487[0] = "__builtin_set_fpscr_rn";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v464, v465, v466, v491, v492, v493, v494, 1u);
  }
  v490 = 259;
  v488 = 259;
  LOWORD(v495) = 257;
  v487[0] = "__ppc__";
  v489[0] = "1";
  sub_10160F0(a3, (__int64)v487, (__int64)v489, a4, 259, 259, v491, v492, v493, v494, 1u);
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__PPC__";
  v489[0] = "1";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v6, v7, v8, v491, v492, v493, v494, 1u);
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PPC";
  v488 = 259;
  v489[0] = "1";
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v9, v10, v11, v491, v492, v493, v494, 1u);
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__powerpc__";
  v488 = 259;
  v489[0] = "1";
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v12, v13, v14, v491, v492, v493, v494, 1u);
  LOWORD(v495) = 257;
  v488 = 259;
  v489[0] = "1";
  v490 = 259;
  v487[0] = "__POWERPC__";
  sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v15, v16, v491, v492, v493, v494, 1u);
  if ( *(_BYTE *)(a1 + 8) == 64 )
  {
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "_ARCH_PPC64";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v17, v18, v19, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__powerpc64__";
    v488 = 259;
    v489[0] = "1";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v478, v479, v480, v491, v492, v493, v494, 1u);
    v17 = 259;
    LOWORD(v495) = 257;
    v489[0] = "1";
    v490 = 259;
    v487[0] = "__PPC64__";
    v488 = 259;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 260) != 20 )
      goto LABEL_5;
    v489[0] = "1";
    v487[0] = "_ARCH_PPC64";
    LOWORD(v495) = 257;
    v490 = 259;
    v488 = 259;
  }
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v17, v18, v19, v491, v492, v493, v494, v495);
  if ( *(_DWORD *)(a1 + 260) == 20 )
  {
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__THW_PPC__";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v17, v18, v19, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__PPC";
    v488 = 259;
    v489[0] = "1";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v481, v482, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "1";
    v490 = 259;
    v487[0] = "__powerpc";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v483, 259, 259, v491, v492, v493, v494, 1u);
  }
LABEL_5:
  if ( ((*(_DWORD *)(a1 + 248) - 22) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 260) - 11) <= 1 )
      goto LABEL_7;
    v489[0] = "1";
    v490 = 259;
    v43 = "_BIG_ENDIAN";
    LOWORD(v495) = 257;
  }
  else
  {
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v43 = "_LITTLE_ENDIAN";
  }
  v487[0] = v43;
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v17, v18, v19, v491, v492, v493, v494, v495);
LABEL_7:
  if ( !sub_990D60(a1 + 576, "elfv1") )
  {
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "_CALL_ELF";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v20, 257, 259, v491, v492, v493, v494, 1u);
  }
  if ( !sub_990D60(a1 + 576, "elfv2") )
  {
    v489[0] = "2";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v487[0] = "_CALL_ELF";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v22, v23, v491, v492, v493, v494, 1u);
  }
  v24 = *(_DWORD *)(a1 + 260);
  if ( v24 != 7 )
  {
LABEL_12:
    if ( v24 == 20 )
      goto LABEL_13;
    goto LABEL_69;
  }
  if ( *(_BYTE *)(a1 + 8) == 64 )
  {
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "_CALL_LINUX";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v21, v22, v23, v491, v492, v493, v494, 1u);
    v24 = *(_DWORD *)(a1 + 260);
    goto LABEL_12;
  }
LABEL_69:
  LOWORD(v495) = 257;
  v490 = 259;
  v488 = 259;
  v489[0] = "1";
  v487[0] = "__NATURAL_ALIGNMENT__";
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v21, v22, v23, v491, v492, v493, v494, 1u);
LABEL_13:
  v487[0] = "__REGISTER_PREFIX__";
  LOWORD(v495) = 257;
  v490 = 257;
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v21, v22, v23, v491, v492, v493, v494, 1u);
  if ( *(_BYTE *)(a1 + 24) == 0x80 )
  {
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__LONG_DOUBLE_128__";
    v488 = 259;
    v489[0] = "1";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v25, v26, v27, v491, v492, v493, v494, 1u);
    v487[0] = "__LONGDOUBLE128";
    v490 = 259;
    v488 = 259;
    LOWORD(v495) = 257;
    v489[0] = "1";
    sub_10160F0(a3, (__int64)v487, (__int64)v489, 257, v473, v474, v491, v492, v493, v494, 1u);
    v476 = (*(_BYTE *)(a2 + 44) & 1) == 0;
    v489[0] = "1";
    v477 = "__LONG_DOUBLE_IEEE128__";
    LOWORD(v495) = 257;
    v490 = 259;
    if ( v476 )
      v477 = "__LONG_DOUBLE_IBM128__";
    v487[0] = v477;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v475, 257, 259, v491, v492, v493, v494, v495);
  }
  if ( *(_DWORD *)(a1 + 260) == 20 && *(_DWORD *)(a2 + 40) == 64 )
  {
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__LONGDOUBLE64";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v25, v26, v27, v491, v492, v493, v494, 1u);
  }
  if ( sub_990D60(a1 + 576, "elfv2") )
  {
    v31 = *(_DWORD *)(a1 + 512);
    if ( (v31 & 1) == 0 )
      goto LABEL_17;
  }
  else
  {
    v489[0] = "16";
    v487[0] = "__STRUCT_PARM_ALIGN__";
    LOWORD(v495) = 257;
    v490 = 259;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, 257, v491, v492, v493, v494, 1u);
    v31 = *(_DWORD *)(a1 + 512);
    if ( (v31 & 1) == 0 )
    {
LABEL_17:
      if ( (v31 & 2) == 0 )
        goto LABEL_18;
      goto LABEL_79;
    }
  }
  v467 = *(_QWORD *)(a1 + 520);
  LOWORD(v495) = 257;
  v484[0] = v467;
  v468 = *(_QWORD *)(a1 + 528);
  v490 = 259;
  v484[1] = v468;
  v489[0] = "1";
  sub_2222A40(v485, v484);
  v487[0] = "_ARCH_";
  v488 = 1283;
  v487[2] = v485[0];
  v487[3] = v485[1];
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v469, 1283, v470, v491, v492, v493, v494, v495);
  if ( v485[0] != &v486 )
    operator delete(v485[0]);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 2) == 0 )
  {
LABEL_18:
    if ( (v31 & 4) == 0 )
      goto LABEL_19;
    goto LABEL_80;
  }
LABEL_79:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PPCGR";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 4) == 0 )
  {
LABEL_19:
    if ( (v31 & 8) == 0 )
      goto LABEL_20;
    goto LABEL_81;
  }
LABEL_80:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PPCSQ";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 8) == 0 )
  {
LABEL_20:
    if ( (v31 & 0x10) == 0 )
      goto LABEL_21;
    goto LABEL_82;
  }
LABEL_81:
  v489[0] = "1";
  v490 = 259;
  LOWORD(v495) = 257;
  v487[0] = "_ARCH_440";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x10) == 0 )
  {
LABEL_21:
    if ( (v31 & 0x20) == 0 )
      goto LABEL_22;
    goto LABEL_83;
  }
LABEL_82:
  v489[0] = "1";
  v487[0] = "_ARCH_603";
  LOWORD(v495) = 257;
  v490 = 259;
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, 257, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x20) == 0 )
  {
LABEL_22:
    if ( (v31 & 0x40) == 0 )
      goto LABEL_23;
    goto LABEL_84;
  }
LABEL_83:
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_604";
  v489[0] = "1";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, 259, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x40) == 0 )
  {
LABEL_23:
    if ( (v31 & 0x80u) == 0 )
      goto LABEL_24;
    goto LABEL_85;
  }
LABEL_84:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PWR4";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x80u) == 0 )
  {
LABEL_24:
    if ( (v31 & 0x100) == 0 )
      goto LABEL_25;
    goto LABEL_86;
  }
LABEL_85:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PWR5";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x100) == 0 )
  {
LABEL_25:
    if ( (v31 & 0x200) == 0 )
      goto LABEL_26;
    goto LABEL_87;
  }
LABEL_86:
  v489[0] = "1";
  v490 = 259;
  LOWORD(v495) = 257;
  v487[0] = "_ARCH_PWR5X";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x200) == 0 )
  {
LABEL_26:
    if ( (v31 & 0x400) == 0 )
      goto LABEL_27;
    goto LABEL_88;
  }
LABEL_87:
  v489[0] = "1";
  v487[0] = "_ARCH_PWR6";
  LOWORD(v495) = 257;
  v490 = 259;
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, 257, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x400) == 0 )
  {
LABEL_27:
    if ( (v31 & 0x800) == 0 )
      goto LABEL_28;
    goto LABEL_89;
  }
LABEL_88:
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PWR6X";
  v489[0] = "1";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, 259, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x800) == 0 )
  {
LABEL_28:
    if ( (v31 & 0x1000) == 0 )
      goto LABEL_29;
    goto LABEL_90;
  }
LABEL_89:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PWR7";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x1000) == 0 )
  {
LABEL_29:
    if ( (v31 & 0x2000) == 0 )
      goto LABEL_30;
    goto LABEL_91;
  }
LABEL_90:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PWR8";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x2000) == 0 )
  {
LABEL_30:
    if ( (v31 & 0x4000) == 0 )
      goto LABEL_31;
    goto LABEL_92;
  }
LABEL_91:
  v489[0] = "1";
  v490 = 259;
  LOWORD(v495) = 257;
  v487[0] = "_ARCH_PWR9";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x4000) == 0 )
  {
LABEL_31:
    if ( (v31 & 0x8000) == 0 )
      goto LABEL_32;
    goto LABEL_93;
  }
LABEL_92:
  v489[0] = "1";
  v487[0] = "_ARCH_PWR10";
  LOWORD(v495) = 257;
  v490 = 259;
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, 257, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x8000) == 0 )
  {
LABEL_32:
    if ( (v31 & 0x20000) == 0 )
      goto LABEL_33;
    goto LABEL_94;
  }
LABEL_93:
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_PWR11";
  v489[0] = "1";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, 259, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x20000) == 0 )
  {
LABEL_33:
    if ( (v31 & 0x40000) == 0 )
      goto LABEL_34;
    goto LABEL_95;
  }
LABEL_94:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "_ARCH_A2";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v29, v30, v491, v492, v493, v494, 1u);
  v31 = *(_DWORD *)(a1 + 512);
  if ( (v31 & 0x40000) == 0 )
  {
LABEL_34:
    if ( (v31 & 0x10000) == 0 )
      goto LABEL_35;
LABEL_96:
    v489[0] = "1";
    v490 = 259;
    LOWORD(v495) = 257;
    v487[0] = "_ARCH_PWR_FUTURE";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
    if ( !*(_BYTE *)(a1 + 556) )
      goto LABEL_36;
LABEL_97:
    v489[0] = "10206";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__VEC__";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, 259, v30, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v489[0] = "1";
    v490 = 259;
    v487[0] = "__ALTIVEC__";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v471, v472, 257, v491, v492, v493, v494, 1u);
    goto LABEL_36;
  }
LABEL_95:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__NO_LWSYNC__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  if ( (*(_DWORD *)(a1 + 512) & 0x10000) != 0 )
    goto LABEL_96;
LABEL_35:
  if ( *(_BYTE *)(a1 + 556) )
    goto LABEL_97;
LABEL_36:
  if ( (*(_BYTE *)(a1 + 564)
     && (v489[0] = "1",
         LOWORD(v495) = 257,
         v490 = 259,
         v487[0] = "__SPE__",
         v488 = 259,
         sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v29, v30, v491, v492, v493, v494, 1u),
         *(_BYTE *)(a1 + 564))
     || *(_DWORD *)(a1 + 552) == 1)
    && (v489[0] = "1",
        LOWORD(v495) = 257,
        v490 = 259,
        v487[0] = "__NO_FPRS__",
        v488 = 259,
        sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u),
        *(_DWORD *)(a1 + 552) == 1) )
  {
    v489[0] = "1";
    v487[0] = "_SOFT_FLOAT";
    LOWORD(v495) = 257;
    v490 = 259;
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, 257, v491, v492, v493, v494, 1u);
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "_SOFT_DOUBLE";
    v489[0] = "1";
    v488 = 259;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 565) )
    {
      v489[0] = "1";
      LOWORD(v495) = 257;
      v490 = 259;
      v487[0] = "__RSQRTE__";
      v488 = 259;
      sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, 259, v30, v491, v492, v493, v494, 1u);
    }
    if ( !*(_BYTE *)(a1 + 566) )
    {
      if ( *(_BYTE *)(a1 + 559) )
        goto LABEL_58;
LABEL_42:
      if ( *(_BYTE *)(a1 + 560) )
        goto LABEL_59;
LABEL_43:
      if ( *(_BYTE *)(a1 + 561) )
        goto LABEL_60;
LABEL_44:
      if ( *(_BYTE *)(a1 + 562) )
        goto LABEL_61;
LABEL_45:
      if ( *(_BYTE *)(a1 + 278) )
        goto LABEL_62;
LABEL_46:
      if ( *(_BYTE *)(a1 + 563) )
        goto LABEL_63;
LABEL_47:
      if ( *(_BYTE *)(a1 + 557) )
        goto LABEL_64;
LABEL_48:
      if ( *(_BYTE *)(a1 + 558) )
        goto LABEL_65;
LABEL_49:
      if ( *(_BYTE *)(a1 + 567) )
        goto LABEL_66;
      goto LABEL_50;
    }
    v42 = 259;
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__RSQRTEF__";
    v488 = 259;
  }
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v42, v29, v30, v491, v492, v493, v494, v495);
  if ( !*(_BYTE *)(a1 + 559) )
    goto LABEL_42;
LABEL_58:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__VSX__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  if ( !*(_BYTE *)(a1 + 560) )
    goto LABEL_43;
LABEL_59:
  v489[0] = "1";
  v490 = 259;
  LOWORD(v495) = 257;
  v487[0] = "__POWER8_VECTOR__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  if ( !*(_BYTE *)(a1 + 561) )
    goto LABEL_44;
LABEL_60:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__CRYPTO__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, 257, v491, v492, v493, v494, 1u);
  if ( !*(_BYTE *)(a1 + 562) )
    goto LABEL_45;
LABEL_61:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__HTM__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, 259, v30, v491, v492, v493, v494, 1u);
  if ( !*(_BYTE *)(a1 + 278) )
    goto LABEL_46;
LABEL_62:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__FLOAT128__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v29, v30, v491, v492, v493, v494, 1u);
  if ( !*(_BYTE *)(a1 + 563) )
    goto LABEL_47;
LABEL_63:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__POWER9_VECTOR__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  if ( !*(_BYTE *)(a1 + 557) )
    goto LABEL_48;
LABEL_64:
  v489[0] = "1";
  v490 = 259;
  LOWORD(v495) = 257;
  v487[0] = "__MMA__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, v30, v491, v492, v493, v494, 1u);
  if ( !*(_BYTE *)(a1 + 558) )
    goto LABEL_49;
LABEL_65:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__ROP_PROTECT__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, 257, v491, v492, v493, v494, 1u);
  if ( *(_BYTE *)(a1 + 567) )
  {
LABEL_66:
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__POWER10_VECTOR__";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, 259, v30, v491, v492, v493, v494, 1u);
    if ( !*(_BYTE *)(a1 + 568) )
      goto LABEL_51;
    goto LABEL_67;
  }
LABEL_50:
  if ( !*(_BYTE *)(a1 + 568) )
    goto LABEL_51;
LABEL_67:
  v489[0] = "1";
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__PCREL__";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v29, v30, v491, v492, v493, v494, 1u);
LABEL_51:
  LOWORD(v495) = 257;
  v490 = 259;
  v488 = 259;
  v487[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v489[0] = "1";
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v28, v29, 257, v491, v492, v493, v494, 1u);
  v490 = 259;
  v487[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v488 = 259;
  LOWORD(v495) = 257;
  v489[0] = "1";
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v32, v33, v34, v491, v492, v493, v494, 1u);
  LOWORD(v495) = 257;
  v490 = 259;
  v487[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v489[0] = "1";
  v488 = 259;
  sub_10160F0(a3, (__int64)v487, (__int64)v489, v35, v36, v37, v491, v492, v493, v494, 1u);
  if ( *(_BYTE *)(a1 + 8) == 64 )
  {
    v489[0] = "1";
    LOWORD(v495) = 257;
    v490 = 259;
    v487[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
    v488 = 259;
    sub_10160F0(a3, (__int64)v487, (__int64)v489, v38, 259, v40, v491, v492, v493, v494, 1u);
  }
  LOWORD(v495) = 257;
  v489[0] = "1";
  v490 = 259;
  v487[0] = "__HAVE_BSWAP__";
  v488 = 259;
  return sub_10160F0(a3, (__int64)v487, (__int64)v489, 259, v39, v40, v491, v492, v493, v494, 1u);
}

