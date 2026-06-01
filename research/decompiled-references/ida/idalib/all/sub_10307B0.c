__int64 __fastcall sub_10307B0(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, __int64, const void *, size_t, char); // rax
  __int64 (__fastcall *v4)(__int64, __int64, const void *, size_t, char); // r14
  size_t v5; // rax
  __int64 v6; // rcx
  size_t v7; // rax
  __int64 v8; // r15
  size_t v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // r9
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r10d
  __int64 *v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // eax
  size_t v21; // rax
  __int64 v22; // r15
  size_t v23; // r14
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // r9
  __int64 *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r10d
  __int64 *v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // eax
  size_t v35; // rax
  __int64 v36; // r15
  size_t v37; // r14
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // r9
  __int64 *v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r10d
  __int64 *v46; // r9
  __int64 v47; // rcx
  unsigned int v48; // eax
  size_t v49; // rax
  __int64 v50; // r15
  size_t v51; // r14
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 *v56; // r9
  __int64 *v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r10d
  __int64 *v60; // r9
  __int64 v61; // rcx
  unsigned int v62; // eax
  size_t v63; // rax
  __int64 v64; // r15
  size_t v65; // r14
  unsigned int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 *v70; // r9
  __int64 *v71; // rax
  __int64 v72; // rax
  unsigned int v73; // r10d
  __int64 *v74; // r9
  __int64 v75; // rcx
  unsigned int v76; // eax
  size_t v77; // rax
  __int64 v78; // r15
  size_t v79; // r14
  unsigned int v80; // eax
  unsigned int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 *v84; // r9
  __int64 *v85; // rax
  __int64 v86; // rax
  unsigned int v87; // r10d
  __int64 *v88; // r9
  __int64 v89; // rcx
  unsigned int v90; // eax
  size_t v91; // rax
  __int64 v92; // r15
  size_t v93; // r14
  unsigned int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 *v98; // r9
  __int64 *v99; // rax
  __int64 v100; // rax
  unsigned int v101; // r10d
  __int64 *v102; // r9
  __int64 v103; // rcx
  unsigned int v104; // eax
  size_t v105; // rax
  __int64 v106; // r15
  size_t v107; // r14
  unsigned int v108; // eax
  unsigned int v109; // eax
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 *v112; // r9
  __int64 *v113; // rax
  __int64 v114; // rax
  unsigned int v115; // r10d
  __int64 *v116; // r9
  __int64 v117; // rcx
  unsigned int v118; // eax
  size_t v119; // rax
  __int64 v120; // r15
  size_t v121; // r14
  unsigned int v122; // eax
  unsigned int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 *v126; // r9
  __int64 *v127; // rax
  __int64 v128; // rax
  unsigned int v129; // r10d
  __int64 *v130; // r9
  __int64 v131; // rcx
  unsigned int v132; // eax
  size_t v133; // rax
  __int64 v134; // r15
  size_t v135; // r14
  unsigned int v136; // eax
  unsigned int v137; // eax
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 *v140; // r9
  __int64 *v141; // rax
  __int64 v142; // rax
  unsigned int v143; // r10d
  __int64 *v144; // r9
  __int64 v145; // rcx
  unsigned int v146; // eax
  size_t v147; // rax
  __int64 v148; // r15
  size_t v149; // r14
  unsigned int v150; // eax
  unsigned int v151; // eax
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 *v154; // r9
  __int64 *v155; // rax
  __int64 v156; // rax
  unsigned int v157; // r10d
  __int64 *v158; // r9
  __int64 v159; // rcx
  unsigned int v160; // eax
  size_t v161; // rax
  __int64 v162; // r15
  size_t v163; // r14
  unsigned int v164; // eax
  unsigned int v165; // eax
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 *v168; // r9
  __int64 *v169; // rax
  __int64 v170; // rax
  unsigned int v171; // r10d
  __int64 *v172; // r9
  __int64 v173; // rcx
  unsigned int v174; // eax
  size_t v175; // rax
  __int64 v176; // r15
  size_t v177; // r14
  unsigned int v178; // eax
  unsigned int v179; // eax
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 *v182; // r9
  __int64 *v183; // rax
  __int64 v184; // rax
  unsigned int v185; // r10d
  __int64 *v186; // r9
  __int64 v187; // rcx
  unsigned int v188; // eax
  size_t v189; // rax
  __int64 v190; // r15
  size_t v191; // r14
  unsigned int v192; // eax
  unsigned int v193; // eax
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 *v196; // r9
  __int64 *v197; // rax
  __int64 v198; // rax
  unsigned int v199; // r10d
  __int64 *v200; // r9
  __int64 v201; // rcx
  unsigned int v202; // eax
  size_t v203; // rax
  __int64 v204; // r15
  size_t v205; // r14
  unsigned int v206; // eax
  unsigned int v207; // eax
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 *v210; // r9
  __int64 *v211; // rax
  __int64 v212; // rax
  unsigned int v213; // r10d
  __int64 *v214; // r9
  __int64 v215; // rcx
  unsigned int v216; // eax
  __int64 (__fastcall *v217)(__int64, __int64, const void *, size_t, char); // r14
  size_t v218; // rax
  __int64 v219; // rcx
  size_t v220; // rax
  __int64 v221; // r15
  size_t v222; // r14
  unsigned int v223; // eax
  unsigned int v224; // eax
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 *v227; // r9
  __int64 *v228; // rax
  __int64 v229; // rax
  unsigned int v230; // r10d
  __int64 *v231; // r9
  __int64 v232; // rcx
  unsigned int v233; // eax
  size_t v234; // rax
  __int64 v235; // r15
  size_t v236; // r14
  unsigned int v237; // eax
  unsigned int v238; // eax
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 *v241; // r9
  __int64 *v242; // rax
  __int64 v243; // rax
  unsigned int v244; // r10d
  __int64 *v245; // r9
  __int64 v246; // rcx
  unsigned int v247; // eax
  size_t v248; // rax
  __int64 v249; // r15
  size_t v250; // r14
  unsigned int v251; // eax
  unsigned int v252; // eax
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 *v255; // r9
  __int64 *v256; // rax
  __int64 v257; // rax
  unsigned int v258; // r10d
  __int64 *v259; // r9
  __int64 v260; // rcx
  unsigned int v261; // eax
  size_t v262; // rax
  __int64 v263; // r15
  size_t v264; // r14
  unsigned int v265; // eax
  unsigned int v266; // eax
  __int64 v267; // rcx
  __int64 v268; // r8
  __int64 *v269; // r9
  __int64 *v270; // rax
  __int64 v271; // rax
  unsigned int v272; // r10d
  __int64 *v273; // r9
  __int64 v274; // rcx
  unsigned int v275; // eax
  size_t v276; // rax
  __int64 v277; // r15
  size_t v278; // r14
  unsigned int v279; // eax
  unsigned int v280; // eax
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 *v283; // r9
  __int64 *v284; // rax
  __int64 v285; // rax
  unsigned int v286; // r10d
  __int64 *v287; // r9
  __int64 v288; // rcx
  unsigned int v289; // eax
  __int64 (__fastcall *v290)(__int64, __int64, const void *, size_t, char); // r14
  size_t v291; // rax
  __int64 v292; // rcx
  size_t v293; // rax
  __int64 v294; // r15
  size_t v295; // r14
  unsigned int v296; // eax
  unsigned int v297; // eax
  __int64 v298; // rcx
  __int64 v299; // r8
  __int64 *v300; // r9
  __int64 *v301; // rax
  __int64 v302; // rax
  unsigned int v303; // r10d
  __int64 *v304; // r9
  __int64 v305; // rcx
  unsigned int v306; // eax
  __int64 (__fastcall *v307)(__int64, __int64, const void *, size_t, char); // r14
  size_t v308; // rax
  __int64 v309; // rcx
  size_t v310; // rax
  __int64 v311; // r15
  size_t v312; // r14
  unsigned int v313; // eax
  unsigned int v314; // eax
  __int64 v315; // rcx
  __int64 v316; // r8
  __int64 *v317; // r9
  __int64 *v318; // rax
  __int64 v319; // rax
  unsigned int v320; // r10d
  __int64 *v321; // r9
  __int64 v322; // rcx
  unsigned int v323; // eax
  __int64 (__fastcall *v324)(__int64, __int64, const void *, size_t, char); // r14
  size_t v325; // rax
  __int64 v326; // rcx
  size_t v327; // rax
  __int64 v328; // r15
  size_t v329; // r14
  unsigned int v330; // eax
  unsigned int v331; // eax
  __int64 v332; // rcx
  __int64 v333; // r8
  __int64 *v334; // r9
  __int64 *v335; // rax
  __int64 v336; // rax
  unsigned int v337; // r10d
  __int64 *v338; // r9
  __int64 v339; // rcx
  unsigned int v340; // eax
  size_t v341; // rax
  __int64 v342; // r15
  size_t v343; // r14
  unsigned int v344; // eax
  unsigned int v345; // eax
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 *v348; // r9
  __int64 *v349; // rax
  __int64 v350; // rax
  unsigned int v351; // r10d
  __int64 *v352; // r9
  __int64 v353; // rcx
  unsigned int v354; // eax
  __int64 (__fastcall *v355)(__int64, __int64, const void *, size_t, char); // r14
  size_t v356; // rax
  __int64 v357; // rcx
  size_t v358; // rax
  __int64 v359; // r15
  size_t v360; // r14
  unsigned int v361; // eax
  unsigned int v362; // eax
  __int64 v363; // rcx
  __int64 v364; // r8
  __int64 *v365; // r9
  __int64 *v366; // rax
  __int64 v367; // rax
  unsigned int v368; // r10d
  __int64 *v369; // r9
  __int64 v370; // rcx
  unsigned int v371; // eax
  size_t v372; // rax
  __int64 v373; // r15
  size_t v374; // r14
  unsigned int v375; // eax
  unsigned int v376; // eax
  __int64 v377; // rcx
  __int64 v378; // r8
  __int64 *v379; // r9
  __int64 *v380; // rax
  __int64 v381; // rax
  unsigned int v382; // r10d
  __int64 *v383; // r9
  __int64 v384; // rcx
  unsigned int v385; // eax
  size_t v386; // rax
  __int64 v387; // r15
  size_t v388; // r14
  unsigned int v389; // eax
  unsigned int v390; // eax
  __int64 v391; // rcx
  __int64 v392; // r8
  __int64 *v393; // r9
  __int64 *v394; // rax
  __int64 v395; // rax
  unsigned int v396; // r10d
  __int64 *v397; // r9
  __int64 v398; // rcx
  unsigned int v399; // eax
  size_t v400; // rax
  __int64 v401; // r15
  size_t v402; // r14
  unsigned int v403; // eax
  unsigned int v404; // eax
  __int64 v405; // rcx
  __int64 v406; // r8
  __int64 *v407; // r9
  __int64 *v408; // rax
  __int64 v409; // rax
  unsigned int v410; // r10d
  __int64 *v411; // r9
  __int64 v412; // rcx
  unsigned int v413; // eax
  size_t v414; // rax
  __int64 v415; // r15
  size_t v416; // r14
  unsigned int v417; // eax
  unsigned int v418; // eax
  __int64 v419; // rcx
  __int64 v420; // r8
  __int64 *v421; // r9
  __int64 *v422; // rax
  __int64 v423; // rax
  unsigned int v424; // r10d
  __int64 *v425; // r9
  __int64 v426; // rcx
  unsigned int v427; // eax
  size_t v428; // rax
  __int64 v429; // r15
  size_t v430; // r14
  unsigned int v431; // eax
  unsigned int v432; // eax
  __int64 v433; // rcx
  __int64 v434; // r8
  __int64 *v435; // r9
  __int64 *v436; // rax
  __int64 v437; // rax
  unsigned int v438; // r10d
  __int64 *v439; // r9
  __int64 v440; // rcx
  unsigned int v441; // eax
  size_t v442; // rax
  __int64 v443; // r15
  size_t v444; // r14
  unsigned int v445; // eax
  unsigned int v446; // eax
  __int64 v447; // rcx
  __int64 v448; // r8
  __int64 v449; // r9
  unsigned int v450; // r13d
  __int64 *v451; // rbp
  __int64 *v452; // rax
  __int64 v453; // rbx
  unsigned int v454; // eax
  __int64 result; // rax
  __int64 (__fastcall *v456)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v457; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v458)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v459; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v460)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v461; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v462)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v463; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v464)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v465; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v466)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v467; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v468)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v469; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v470)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v471; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v472)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v473; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v474)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v475; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v476)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v477; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v478)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v479; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v480)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v481; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v482)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v483; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v484)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v485; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v486)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v487; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v488)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v489; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v490)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v491; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v492)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v493; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v494)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v495; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v496)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v497; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v498)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v499; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v500)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v501; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v502)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v503; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v504)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v505; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v506)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v507; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v508)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v509; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v510)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v511; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v512)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v513; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v514)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  unsigned int v515; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall *v516)(__int64, __int64, const void *, size_t, char); // [rsp+8h] [rbp-60h]
  __int64 *v517; // [rsp+10h] [rbp-58h]
  __int64 *v518; // [rsp+10h] [rbp-58h]
  __int64 *v519; // [rsp+10h] [rbp-58h]
  __int64 *v520; // [rsp+10h] [rbp-58h]
  __int64 *v521; // [rsp+10h] [rbp-58h]
  __int64 *v522; // [rsp+10h] [rbp-58h]
  __int64 *v523; // [rsp+10h] [rbp-58h]
  __int64 *v524; // [rsp+10h] [rbp-58h]
  __int64 *v525; // [rsp+10h] [rbp-58h]
  __int64 *v526; // [rsp+10h] [rbp-58h]
  __int64 *v527; // [rsp+10h] [rbp-58h]
  __int64 *v528; // [rsp+10h] [rbp-58h]
  __int64 *v529; // [rsp+10h] [rbp-58h]
  __int64 *v530; // [rsp+10h] [rbp-58h]
  __int64 *v531; // [rsp+10h] [rbp-58h]
  __int64 *v532; // [rsp+10h] [rbp-58h]
  __int64 *v533; // [rsp+10h] [rbp-58h]
  __int64 *v534; // [rsp+10h] [rbp-58h]
  __int64 *v535; // [rsp+10h] [rbp-58h]
  __int64 *v536; // [rsp+10h] [rbp-58h]
  __int64 *v537; // [rsp+10h] [rbp-58h]
  __int64 *v538; // [rsp+10h] [rbp-58h]
  __int64 *v539; // [rsp+10h] [rbp-58h]
  __int64 *v540; // [rsp+10h] [rbp-58h]
  __int64 *v541; // [rsp+10h] [rbp-58h]
  __int64 *v542; // [rsp+10h] [rbp-58h]
  __int64 *v543; // [rsp+10h] [rbp-58h]
  __int64 *v544; // [rsp+10h] [rbp-58h]
  __int64 *v545; // [rsp+10h] [rbp-58h]
  __int64 *v546; // [rsp+10h] [rbp-58h]
  __int64 v547; // [rsp+18h] [rbp-50h]
  __int64 v548; // [rsp+18h] [rbp-50h]
  __int64 v549; // [rsp+18h] [rbp-50h]
  __int64 v550; // [rsp+18h] [rbp-50h]
  __int64 v551; // [rsp+18h] [rbp-50h]
  __int64 v552; // [rsp+18h] [rbp-50h]
  __int64 v553; // [rsp+18h] [rbp-50h]
  __int64 v554; // [rsp+18h] [rbp-50h]
  __int64 v555; // [rsp+18h] [rbp-50h]
  __int64 v556; // [rsp+18h] [rbp-50h]
  __int64 v557; // [rsp+18h] [rbp-50h]
  __int64 v558; // [rsp+18h] [rbp-50h]
  __int64 v559; // [rsp+18h] [rbp-50h]
  __int64 v560; // [rsp+18h] [rbp-50h]
  __int64 v561; // [rsp+18h] [rbp-50h]
  __int64 v562; // [rsp+18h] [rbp-50h]
  __int64 v563; // [rsp+18h] [rbp-50h]
  __int64 v564; // [rsp+18h] [rbp-50h]
  __int64 v565; // [rsp+18h] [rbp-50h]
  __int64 v566; // [rsp+18h] [rbp-50h]
  __int64 v567; // [rsp+18h] [rbp-50h]
  __int64 v568; // [rsp+18h] [rbp-50h]
  __int64 v569; // [rsp+18h] [rbp-50h]
  __int64 v570; // [rsp+18h] [rbp-50h]
  __int64 v571; // [rsp+18h] [rbp-50h]
  __int64 v572; // [rsp+18h] [rbp-50h]
  __int64 v573; // [rsp+18h] [rbp-50h]
  __int64 v574; // [rsp+18h] [rbp-50h]
  __int64 v575; // [rsp+18h] [rbp-50h]
  __int64 v576; // [rsp+18h] [rbp-50h]
  __int64 *v577[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a1[26];
  v3 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  if ( v3 == sub_10306B0 )
    *(_BYTE *)sub_102FB20(v2 + 304, "cl_khr_byte_addressable_store", 0x1Du) = a2;
  else
    v3((__int64)a1, v2 + 304, "cl_khr_byte_addressable_store", 29, a2);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v5 = j__strlen("cl_khr_global_int32_base_atomics");
  v6 = a1[26];
  if ( v4 == sub_10306B0 )
    *(_BYTE *)sub_102FB20(v6 + 304, "cl_khr_global_int32_base_atomics", v5) = a2;
  else
    v4((__int64)a1, v6 + 304, "cl_khr_global_int32_base_atomics", v5, a2);
  v456 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v7 = j__strlen("cl_khr_global_int32_extended_atomics");
  v8 = a1[26];
  v9 = v7;
  if ( v456 == sub_10306B0 )
  {
    v10 = sub_2244B30("cl_khr_global_int32_extended_atomics", v7);
    v11 = sub_2244CB0(v8 + 304, "cl_khr_global_int32_extended_atomics", v9, v10);
    v14 = (__int64 *)(*(_QWORD *)(v8 + 304) + 8LL * v11);
    if ( *v14 )
    {
      if ( *v14 != -8 )
      {
        sub_10298F0(v577, v14, 0);
        v15 = v577[0];
LABEL_13:
        *(_BYTE *)(*v15 + 8) = a2;
        goto LABEL_14;
      }
      --*(_DWORD *)(v8 + 320);
    }
    v517 = v14;
    v457 = v11;
    v16 = sub_22300B0(v9 + 17, 8, v11, v12, v13, v14);
    v17 = v457;
    v18 = v517;
    v19 = v16;
    if ( v9 )
    {
      v550 = v16;
      memcpy((void *)(v16 + 16), "cl_khr_global_int32_extended_atomics", v9);
      v19 = v550;
      v18 = v517;
      v17 = v457;
    }
    *(_BYTE *)(v19 + v9 + 16) = 0;
    *(_QWORD *)v19 = v9;
    *(_BYTE *)(v19 + 8) = 0;
    *v18 = v19;
    ++*(_DWORD *)(v8 + 316);
    v20 = sub_22450D0(v8 + 304, v17);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v8 + 304) + 8LL * v20), 0);
    v15 = v577[0];
    goto LABEL_13;
  }
  v456((__int64)a1, v8 + 304, "cl_khr_global_int32_extended_atomics", v7, a2);
LABEL_14:
  v458 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v21 = j__strlen("cl_khr_local_int32_base_atomics");
  v22 = a1[26];
  v23 = v21;
  if ( v458 == sub_10306B0 )
  {
    v24 = sub_2244B30("cl_khr_local_int32_base_atomics", v21);
    v25 = sub_2244CB0(v22 + 304, "cl_khr_local_int32_base_atomics", v23, v24);
    v28 = (__int64 *)(*(_QWORD *)(v22 + 304) + 8LL * v25);
    if ( *v28 )
    {
      if ( *v28 != -8 )
      {
        sub_10298F0(v577, v28, 0);
        v29 = v577[0];
LABEL_22:
        *(_BYTE *)(*v29 + 8) = a2;
        goto LABEL_23;
      }
      --*(_DWORD *)(v22 + 320);
    }
    v518 = v28;
    v459 = v25;
    v30 = sub_22300B0(v23 + 17, 8, v25, v26, v27, v28);
    v31 = v459;
    v32 = v518;
    v33 = v30;
    if ( v23 )
    {
      v571 = v30;
      memcpy((void *)(v30 + 16), "cl_khr_local_int32_base_atomics", v23);
      v33 = v571;
      v32 = v518;
      v31 = v459;
    }
    *(_BYTE *)(v33 + v23 + 16) = 0;
    *(_QWORD *)v33 = v23;
    *(_BYTE *)(v33 + 8) = 0;
    *v32 = v33;
    ++*(_DWORD *)(v22 + 316);
    v34 = sub_22450D0(v22 + 304, v31);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v22 + 304) + 8LL * v34), 0);
    v29 = v577[0];
    goto LABEL_22;
  }
  v458((__int64)a1, v22 + 304, "cl_khr_local_int32_base_atomics", v21, a2);
LABEL_23:
  v460 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v35 = j__strlen("cl_khr_local_int32_extended_atomics");
  v36 = a1[26];
  v37 = v35;
  if ( v460 == sub_10306B0 )
  {
    v38 = sub_2244B30("cl_khr_local_int32_extended_atomics", v35);
    v39 = sub_2244CB0(v36 + 304, "cl_khr_local_int32_extended_atomics", v37, v38);
    v42 = (__int64 *)(*(_QWORD *)(v36 + 304) + 8LL * v39);
    if ( *v42 )
    {
      if ( *v42 != -8 )
      {
        sub_10298F0(v577, v42, 0);
        v43 = v577[0];
LABEL_31:
        *(_BYTE *)(*v43 + 8) = a2;
        goto LABEL_32;
      }
      --*(_DWORD *)(v36 + 320);
    }
    v519 = v42;
    v461 = v39;
    v44 = sub_22300B0(v37 + 17, 8, v39, v40, v41, v42);
    v45 = v461;
    v46 = v519;
    v47 = v44;
    if ( v37 )
    {
      v570 = v44;
      memcpy((void *)(v44 + 16), "cl_khr_local_int32_extended_atomics", v37);
      v47 = v570;
      v46 = v519;
      v45 = v461;
    }
    *(_BYTE *)(v47 + v37 + 16) = 0;
    *(_QWORD *)v47 = v37;
    *(_BYTE *)(v47 + 8) = 0;
    *v46 = v47;
    ++*(_DWORD *)(v36 + 316);
    v48 = sub_22450D0(v36 + 304, v45);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v36 + 304) + 8LL * v48), 0);
    v43 = v577[0];
    goto LABEL_31;
  }
  v460((__int64)a1, v36 + 304, "cl_khr_local_int32_extended_atomics", v35, a2);
LABEL_32:
  v462 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v49 = j__strlen("cl_khr_fp64");
  v50 = a1[26];
  v51 = v49;
  if ( v462 == sub_10306B0 )
  {
    v52 = sub_2244B30("cl_khr_fp64", v49);
    v53 = sub_2244CB0(v50 + 304, "cl_khr_fp64", v51, v52);
    v56 = (__int64 *)(*(_QWORD *)(v50 + 304) + 8LL * v53);
    if ( *v56 )
    {
      if ( *v56 != -8 )
      {
        sub_10298F0(v577, v56, 0);
        v57 = v577[0];
LABEL_40:
        *(_BYTE *)(*v57 + 8) = a2;
        goto LABEL_41;
      }
      --*(_DWORD *)(v50 + 320);
    }
    v520 = v56;
    v463 = v53;
    v58 = sub_22300B0(v51 + 17, 8, v53, v54, v55, v56);
    v59 = v463;
    v60 = v520;
    v61 = v58;
    if ( v51 )
    {
      v572 = v58;
      memcpy((void *)(v58 + 16), "cl_khr_fp64", v51);
      v61 = v572;
      v60 = v520;
      v59 = v463;
    }
    *(_BYTE *)(v61 + v51 + 16) = 0;
    *(_QWORD *)v61 = v51;
    *(_BYTE *)(v61 + 8) = 0;
    *v60 = v61;
    ++*(_DWORD *)(v50 + 316);
    v62 = sub_22450D0(v50 + 304, v59);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v50 + 304) + 8LL * v62), 0);
    v57 = v577[0];
    goto LABEL_40;
  }
  v462((__int64)a1, v50 + 304, "cl_khr_fp64", v49, a2);
LABEL_41:
  v464 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v63 = j__strlen("cl_khr_fp16");
  v64 = a1[26];
  v65 = v63;
  if ( v464 == sub_10306B0 )
  {
    v66 = sub_2244B30("cl_khr_fp16", v63);
    v67 = sub_2244CB0(v64 + 304, "cl_khr_fp16", v65, v66);
    v70 = (__int64 *)(*(_QWORD *)(v64 + 304) + 8LL * v67);
    if ( *v70 )
    {
      if ( *v70 != -8 )
      {
        sub_10298F0(v577, v70, 0);
        v71 = v577[0];
LABEL_49:
        *(_BYTE *)(*v71 + 8) = a2;
        goto LABEL_50;
      }
      --*(_DWORD *)(v64 + 320);
    }
    v521 = v70;
    v465 = v67;
    v72 = sub_22300B0(v65 + 17, 8, v67, v68, v69, v70);
    v73 = v465;
    v74 = v521;
    v75 = v72;
    if ( v65 )
    {
      v552 = v72;
      memcpy((void *)(v72 + 16), "cl_khr_fp16", v65);
      v75 = v552;
      v74 = v521;
      v73 = v465;
    }
    *(_BYTE *)(v75 + v65 + 16) = 0;
    *(_QWORD *)v75 = v65;
    *(_BYTE *)(v75 + 8) = 0;
    *v74 = v75;
    ++*(_DWORD *)(v64 + 316);
    v76 = sub_22450D0(v64 + 304, v73);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v64 + 304) + 8LL * v76), 0);
    v71 = v577[0];
    goto LABEL_49;
  }
  v464((__int64)a1, v64 + 304, "cl_khr_fp16", v63, a2);
LABEL_50:
  v466 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v77 = j__strlen("cl_khr_int64_base_atomics");
  v78 = a1[26];
  v79 = v77;
  if ( v466 == sub_10306B0 )
  {
    v80 = sub_2244B30("cl_khr_int64_base_atomics", v77);
    v81 = sub_2244CB0(v78 + 304, "cl_khr_int64_base_atomics", v79, v80);
    v84 = (__int64 *)(*(_QWORD *)(v78 + 304) + 8LL * v81);
    if ( *v84 )
    {
      if ( *v84 != -8 )
      {
        sub_10298F0(v577, v84, 0);
        v85 = v577[0];
LABEL_58:
        *(_BYTE *)(*v85 + 8) = a2;
        goto LABEL_59;
      }
      --*(_DWORD *)(v78 + 320);
    }
    v522 = v84;
    v467 = v81;
    v86 = sub_22300B0(v79 + 17, 8, v81, v82, v83, v84);
    v87 = v467;
    v88 = v522;
    v89 = v86;
    if ( v79 )
    {
      v565 = v86;
      memcpy((void *)(v86 + 16), "cl_khr_int64_base_atomics", v79);
      v89 = v565;
      v88 = v522;
      v87 = v467;
    }
    *(_BYTE *)(v89 + v79 + 16) = 0;
    *(_QWORD *)v89 = v79;
    *(_BYTE *)(v89 + 8) = 0;
    *v88 = v89;
    ++*(_DWORD *)(v78 + 316);
    v90 = sub_22450D0(v78 + 304, v87);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v78 + 304) + 8LL * v90), 0);
    v85 = v577[0];
    goto LABEL_58;
  }
  v466((__int64)a1, v78 + 304, "cl_khr_int64_base_atomics", v77, a2);
LABEL_59:
  v468 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v91 = j__strlen("cl_khr_int64_extended_atomics");
  v92 = a1[26];
  v93 = v91;
  if ( v468 == sub_10306B0 )
  {
    v94 = sub_2244B30("cl_khr_int64_extended_atomics", v91);
    v95 = sub_2244CB0(v92 + 304, "cl_khr_int64_extended_atomics", v93, v94);
    v98 = (__int64 *)(*(_QWORD *)(v92 + 304) + 8LL * v95);
    if ( *v98 )
    {
      if ( *v98 != -8 )
      {
        sub_10298F0(v577, v98, 0);
        v99 = v577[0];
LABEL_67:
        *(_BYTE *)(*v99 + 8) = a2;
        goto LABEL_68;
      }
      --*(_DWORD *)(v92 + 320);
    }
    v523 = v98;
    v469 = v95;
    v100 = sub_22300B0(v93 + 17, 8, v95, v96, v97, v98);
    v101 = v469;
    v102 = v523;
    v103 = v100;
    if ( v93 )
    {
      v563 = v100;
      memcpy((void *)(v100 + 16), "cl_khr_int64_extended_atomics", v93);
      v103 = v563;
      v102 = v523;
      v101 = v469;
    }
    *(_BYTE *)(v103 + v93 + 16) = 0;
    *(_QWORD *)v103 = v93;
    *(_BYTE *)(v103 + 8) = 0;
    *v102 = v103;
    ++*(_DWORD *)(v92 + 316);
    v104 = sub_22450D0(v92 + 304, v101);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v92 + 304) + 8LL * v104), 0);
    v99 = v577[0];
    goto LABEL_67;
  }
  v468((__int64)a1, v92 + 304, "cl_khr_int64_extended_atomics", v91, a2);
LABEL_68:
  v470 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v105 = j__strlen("cl_khr_3d_image_writes");
  v106 = a1[26];
  v107 = v105;
  if ( v470 == sub_10306B0 )
  {
    v108 = sub_2244B30("cl_khr_3d_image_writes", v105);
    v109 = sub_2244CB0(v106 + 304, "cl_khr_3d_image_writes", v107, v108);
    v112 = (__int64 *)(*(_QWORD *)(v106 + 304) + 8LL * v109);
    if ( *v112 )
    {
      if ( *v112 != -8 )
      {
        sub_10298F0(v577, v112, 0);
        v113 = v577[0];
LABEL_76:
        *(_BYTE *)(*v113 + 8) = a2;
        goto LABEL_77;
      }
      --*(_DWORD *)(v106 + 320);
    }
    v524 = v112;
    v471 = v109;
    v114 = sub_22300B0(v107 + 17, 8, v109, v110, v111, v112);
    v115 = v471;
    v116 = v524;
    v117 = v114;
    if ( v107 )
    {
      v566 = v114;
      memcpy((void *)(v114 + 16), "cl_khr_3d_image_writes", v107);
      v117 = v566;
      v116 = v524;
      v115 = v471;
    }
    *(_BYTE *)(v117 + v107 + 16) = 0;
    *(_QWORD *)v117 = v107;
    *(_BYTE *)(v117 + 8) = 0;
    *v116 = v117;
    ++*(_DWORD *)(v106 + 316);
    v118 = sub_22450D0(v106 + 304, v115);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v106 + 304) + 8LL * v118), 0);
    v113 = v577[0];
    goto LABEL_76;
  }
  v470((__int64)a1, v106 + 304, "cl_khr_3d_image_writes", v105, a2);
LABEL_77:
  v472 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v119 = j__strlen("cles_khr_int64");
  v120 = a1[26];
  v121 = v119;
  if ( v472 == sub_10306B0 )
  {
    v122 = sub_2244B30("cles_khr_int64", v119);
    v123 = sub_2244CB0(v120 + 304, "cles_khr_int64", v121, v122);
    v126 = (__int64 *)(*(_QWORD *)(v120 + 304) + 8LL * v123);
    if ( *v126 )
    {
      if ( *v126 != -8 )
      {
        sub_10298F0(v577, v126, 0);
        v127 = v577[0];
LABEL_85:
        *(_BYTE *)(*v127 + 8) = a2;
        goto LABEL_86;
      }
      --*(_DWORD *)(v120 + 320);
    }
    v525 = v126;
    v473 = v123;
    v128 = sub_22300B0(v121 + 17, 8, v123, v124, v125, v126);
    v129 = v473;
    v130 = v525;
    v131 = v128;
    if ( v121 )
    {
      v547 = v128;
      memcpy((void *)(v128 + 16), "cles_khr_int64", v121);
      v131 = v547;
      v130 = v525;
      v129 = v473;
    }
    *(_BYTE *)(v131 + v121 + 16) = 0;
    *(_QWORD *)v131 = v121;
    *(_BYTE *)(v131 + 8) = 0;
    *v130 = v131;
    ++*(_DWORD *)(v120 + 316);
    v132 = sub_22450D0(v120 + 304, v129);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v120 + 304) + 8LL * v132), 0);
    v127 = v577[0];
    goto LABEL_85;
  }
  v472((__int64)a1, v120 + 304, "cles_khr_int64", v119, a2);
LABEL_86:
  v474 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v133 = j__strlen("cl_khr_depth_images");
  v134 = a1[26];
  v135 = v133;
  if ( v474 == sub_10306B0 )
  {
    v136 = sub_2244B30("cl_khr_depth_images", v133);
    v137 = sub_2244CB0(v134 + 304, "cl_khr_depth_images", v135, v136);
    v140 = (__int64 *)(*(_QWORD *)(v134 + 304) + 8LL * v137);
    if ( *v140 )
    {
      if ( *v140 != -8 )
      {
        sub_10298F0(v577, v140, 0);
        v141 = v577[0];
LABEL_94:
        *(_BYTE *)(*v141 + 8) = a2;
        goto LABEL_95;
      }
      --*(_DWORD *)(v134 + 320);
    }
    v526 = v140;
    v475 = v137;
    v142 = sub_22300B0(v135 + 17, 8, v137, v138, v139, v140);
    v143 = v475;
    v144 = v526;
    v145 = v142;
    if ( v135 )
    {
      v568 = v142;
      memcpy((void *)(v142 + 16), "cl_khr_depth_images", v135);
      v145 = v568;
      v144 = v526;
      v143 = v475;
    }
    *(_BYTE *)(v145 + v135 + 16) = 0;
    *(_QWORD *)v145 = v135;
    *(_BYTE *)(v145 + 8) = 0;
    *v144 = v145;
    ++*(_DWORD *)(v134 + 316);
    v146 = sub_22450D0(v134 + 304, v143);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v134 + 304) + 8LL * v146), 0);
    v141 = v577[0];
    goto LABEL_94;
  }
  v474((__int64)a1, v134 + 304, "cl_khr_depth_images", v133, a2);
LABEL_95:
  v476 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v147 = j__strlen("cl_khr_gl_msaa_sharing");
  v148 = a1[26];
  v149 = v147;
  if ( v476 == sub_10306B0 )
  {
    v150 = sub_2244B30("cl_khr_gl_msaa_sharing", v147);
    v151 = sub_2244CB0(v148 + 304, "cl_khr_gl_msaa_sharing", v149, v150);
    v154 = (__int64 *)(*(_QWORD *)(v148 + 304) + 8LL * v151);
    if ( *v154 )
    {
      if ( *v154 != -8 )
      {
        sub_10298F0(v577, v154, 0);
        v155 = v577[0];
LABEL_103:
        *(_BYTE *)(*v155 + 8) = a2;
        goto LABEL_104;
      }
      --*(_DWORD *)(v148 + 320);
    }
    v527 = v154;
    v477 = v151;
    v156 = sub_22300B0(v149 + 17, 8, v151, v152, v153, v154);
    v157 = v477;
    v158 = v527;
    v159 = v156;
    if ( v149 )
    {
      v567 = v156;
      memcpy((void *)(v156 + 16), "cl_khr_gl_msaa_sharing", v149);
      v159 = v567;
      v158 = v527;
      v157 = v477;
    }
    *(_BYTE *)(v159 + v149 + 16) = 0;
    *(_QWORD *)v159 = v149;
    *(_BYTE *)(v159 + 8) = 0;
    *v158 = v159;
    ++*(_DWORD *)(v148 + 316);
    v160 = sub_22450D0(v148 + 304, v157);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v148 + 304) + 8LL * v160), 0);
    v155 = v577[0];
    goto LABEL_103;
  }
  v476((__int64)a1, v148 + 304, "cl_khr_gl_msaa_sharing", v147, a2);
LABEL_104:
  v478 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v161 = j__strlen("cl_khr_mipmap_image");
  v162 = a1[26];
  v163 = v161;
  if ( v478 == sub_10306B0 )
  {
    v164 = sub_2244B30("cl_khr_mipmap_image", v161);
    v165 = sub_2244CB0(v162 + 304, "cl_khr_mipmap_image", v163, v164);
    v168 = (__int64 *)(*(_QWORD *)(v162 + 304) + 8LL * v165);
    if ( *v168 )
    {
      if ( *v168 != -8 )
      {
        sub_10298F0(v577, v168, 0);
        v169 = v577[0];
LABEL_112:
        *(_BYTE *)(*v169 + 8) = a2;
        goto LABEL_113;
      }
      --*(_DWORD *)(v162 + 320);
    }
    v528 = v168;
    v479 = v165;
    v170 = sub_22300B0(v163 + 17, 8, v165, v166, v167, v168);
    v171 = v479;
    v172 = v528;
    v173 = v170;
    if ( v163 )
    {
      v576 = v170;
      memcpy((void *)(v170 + 16), "cl_khr_mipmap_image", v163);
      v173 = v576;
      v172 = v528;
      v171 = v479;
    }
    *(_BYTE *)(v173 + v163 + 16) = 0;
    *(_QWORD *)v173 = v163;
    *(_BYTE *)(v173 + 8) = 0;
    *v172 = v173;
    ++*(_DWORD *)(v162 + 316);
    v174 = sub_22450D0(v162 + 304, v171);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v162 + 304) + 8LL * v174), 0);
    v169 = v577[0];
    goto LABEL_112;
  }
  v478((__int64)a1, v162 + 304, "cl_khr_mipmap_image", v161, a2);
LABEL_113:
  v480 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v175 = j__strlen("cl_khr_mipmap_image_writes");
  v176 = a1[26];
  v177 = v175;
  if ( v480 == sub_10306B0 )
  {
    v178 = sub_2244B30("cl_khr_mipmap_image_writes", v175);
    v179 = sub_2244CB0(v176 + 304, "cl_khr_mipmap_image_writes", v177, v178);
    v182 = (__int64 *)(*(_QWORD *)(v176 + 304) + 8LL * v179);
    if ( *v182 )
    {
      if ( *v182 != -8 )
      {
        sub_10298F0(v577, v182, 0);
        v183 = v577[0];
LABEL_121:
        *(_BYTE *)(*v183 + 8) = a2;
        goto LABEL_122;
      }
      --*(_DWORD *)(v176 + 320);
    }
    v529 = v182;
    v481 = v179;
    v184 = sub_22300B0(v177 + 17, 8, v179, v180, v181, v182);
    v185 = v481;
    v186 = v529;
    v187 = v184;
    if ( v177 )
    {
      v562 = v184;
      memcpy((void *)(v184 + 16), "cl_khr_mipmap_image_writes", v177);
      v187 = v562;
      v186 = v529;
      v185 = v481;
    }
    *(_BYTE *)(v187 + v177 + 16) = 0;
    *(_QWORD *)v187 = v177;
    *(_BYTE *)(v187 + 8) = 0;
    *v186 = v187;
    ++*(_DWORD *)(v176 + 316);
    v188 = sub_22450D0(v176 + 304, v185);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v176 + 304) + 8LL * v188), 0);
    v183 = v577[0];
    goto LABEL_121;
  }
  v480((__int64)a1, v176 + 304, "cl_khr_mipmap_image_writes", v175, a2);
LABEL_122:
  v482 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v189 = j__strlen("cl_khr_srgb_image_writes");
  v190 = a1[26];
  v191 = v189;
  if ( v482 == sub_10306B0 )
  {
    v192 = sub_2244B30("cl_khr_srgb_image_writes", v189);
    v193 = sub_2244CB0(v190 + 304, "cl_khr_srgb_image_writes", v191, v192);
    v196 = (__int64 *)(*(_QWORD *)(v190 + 304) + 8LL * v193);
    if ( *v196 )
    {
      if ( *v196 != -8 )
      {
        sub_10298F0(v577, v196, 0);
        v197 = v577[0];
LABEL_130:
        *(_BYTE *)(*v197 + 8) = a2;
        goto LABEL_131;
      }
      --*(_DWORD *)(v190 + 320);
    }
    v530 = v196;
    v483 = v193;
    v198 = sub_22300B0(v191 + 17, 8, v193, v194, v195, v196);
    v199 = v483;
    v200 = v530;
    v201 = v198;
    if ( v191 )
    {
      v569 = v198;
      memcpy((void *)(v198 + 16), "cl_khr_srgb_image_writes", v191);
      v201 = v569;
      v200 = v530;
      v199 = v483;
    }
    *(_BYTE *)(v201 + v191 + 16) = 0;
    *(_QWORD *)v201 = v191;
    *(_BYTE *)(v201 + 8) = 0;
    *v200 = v201;
    ++*(_DWORD *)(v190 + 316);
    v202 = sub_22450D0(v190 + 304, v199);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v190 + 304) + 8LL * v202), 0);
    v197 = v577[0];
    goto LABEL_130;
  }
  v482((__int64)a1, v190 + 304, "cl_khr_srgb_image_writes", v189, a2);
LABEL_131:
  v484 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v203 = j__strlen("cl_khr_subgroups");
  v204 = a1[26];
  v205 = v203;
  if ( v484 == sub_10306B0 )
  {
    v206 = sub_2244B30("cl_khr_subgroups", v203);
    v207 = sub_2244CB0(v204 + 304, "cl_khr_subgroups", v205, v206);
    v210 = (__int64 *)(*(_QWORD *)(v204 + 304) + 8LL * v207);
    if ( *v210 )
    {
      if ( *v210 != -8 )
      {
        sub_10298F0(v577, v210, 0);
        v211 = v577[0];
LABEL_139:
        *(_BYTE *)(*v211 + 8) = a2;
        goto LABEL_140;
      }
      --*(_DWORD *)(v204 + 320);
    }
    v531 = v210;
    v485 = v207;
    v212 = sub_22300B0(v205 + 17, 8, v207, v208, v209, v210);
    v213 = v485;
    v214 = v531;
    v215 = v212;
    if ( v205 )
    {
      v564 = v212;
      memcpy((void *)(v212 + 16), "cl_khr_subgroups", v205);
      v215 = v564;
      v214 = v531;
      v213 = v485;
    }
    *(_BYTE *)(v215 + v205 + 16) = 0;
    *(_QWORD *)v215 = v205;
    *(_BYTE *)(v215 + 8) = 0;
    *v214 = v215;
    ++*(_DWORD *)(v204 + 316);
    v216 = sub_22450D0(v204 + 304, v213);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v204 + 304) + 8LL * v216), 0);
    v211 = v577[0];
    goto LABEL_139;
  }
  v484((__int64)a1, v204 + 304, "cl_khr_subgroups", v203, a2);
LABEL_140:
  v217 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v218 = j__strlen("cl_clang_storage_class_specifiers");
  v219 = a1[26];
  if ( v217 == sub_10306B0 )
    *(_BYTE *)sub_102FB20(v219 + 304, "cl_clang_storage_class_specifiers", v218) = a2;
  else
    v217((__int64)a1, v219 + 304, "cl_clang_storage_class_specifiers", v218, a2);
  v486 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v220 = j__strlen("__cl_clang_function_pointers");
  v221 = a1[26];
  v222 = v220;
  if ( v486 == sub_10306B0 )
  {
    v223 = sub_2244B30("__cl_clang_function_pointers", v220);
    v224 = sub_2244CB0(v221 + 304, "__cl_clang_function_pointers", v222, v223);
    v227 = (__int64 *)(*(_QWORD *)(v221 + 304) + 8LL * v224);
    if ( *v227 )
    {
      if ( *v227 != -8 )
      {
        sub_10298F0(v577, v227, 0);
        v228 = v577[0];
LABEL_150:
        *(_BYTE *)(*v228 + 8) = a2;
        goto LABEL_151;
      }
      --*(_DWORD *)(v221 + 320);
    }
    v532 = v227;
    v487 = v224;
    v229 = sub_22300B0(v222 + 17, 8, v224, v225, v226, v227);
    v230 = v487;
    v231 = v532;
    v232 = v229;
    if ( v222 )
    {
      v553 = v229;
      memcpy((void *)(v229 + 16), "__cl_clang_function_pointers", v222);
      v232 = v553;
      v231 = v532;
      v230 = v487;
    }
    *(_BYTE *)(v232 + v222 + 16) = 0;
    *(_QWORD *)v232 = v222;
    *(_BYTE *)(v232 + 8) = 0;
    *v231 = v232;
    ++*(_DWORD *)(v221 + 316);
    v233 = sub_22450D0(v221 + 304, v230);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v221 + 304) + 8LL * v233), 0);
    v228 = v577[0];
    goto LABEL_150;
  }
  v486((__int64)a1, v221 + 304, "__cl_clang_function_pointers", v220, a2);
LABEL_151:
  v488 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v234 = j__strlen("__cl_clang_variadic_functions");
  v235 = a1[26];
  v236 = v234;
  if ( v488 == sub_10306B0 )
  {
    v237 = sub_2244B30("__cl_clang_variadic_functions", v234);
    v238 = sub_2244CB0(v235 + 304, "__cl_clang_variadic_functions", v236, v237);
    v241 = (__int64 *)(*(_QWORD *)(v235 + 304) + 8LL * v238);
    if ( *v241 )
    {
      if ( *v241 != -8 )
      {
        sub_10298F0(v577, v241, 0);
        v242 = v577[0];
LABEL_159:
        *(_BYTE *)(*v242 + 8) = a2;
        goto LABEL_160;
      }
      --*(_DWORD *)(v235 + 320);
    }
    v533 = v241;
    v489 = v238;
    v243 = sub_22300B0(v236 + 17, 8, v238, v239, v240, v241);
    v244 = v489;
    v245 = v533;
    v246 = v243;
    if ( v236 )
    {
      v558 = v243;
      memcpy((void *)(v243 + 16), "__cl_clang_variadic_functions", v236);
      v246 = v558;
      v245 = v533;
      v244 = v489;
    }
    *(_BYTE *)(v246 + v236 + 16) = 0;
    *(_QWORD *)v246 = v236;
    *(_BYTE *)(v246 + 8) = 0;
    *v245 = v246;
    ++*(_DWORD *)(v235 + 316);
    v247 = sub_22450D0(v235 + 304, v244);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v235 + 304) + 8LL * v247), 0);
    v242 = v577[0];
    goto LABEL_159;
  }
  v488((__int64)a1, v235 + 304, "__cl_clang_variadic_functions", v234, a2);
LABEL_160:
  v490 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v248 = j__strlen("__cl_clang_non_portable_kernel_param_types");
  v249 = a1[26];
  v250 = v248;
  if ( v490 == sub_10306B0 )
  {
    v251 = sub_2244B30("__cl_clang_non_portable_kernel_param_types", v248);
    v252 = sub_2244CB0(v249 + 304, "__cl_clang_non_portable_kernel_param_types", v250, v251);
    v255 = (__int64 *)(*(_QWORD *)(v249 + 304) + 8LL * v252);
    if ( *v255 )
    {
      if ( *v255 != -8 )
      {
        sub_10298F0(v577, v255, 0);
        v256 = v577[0];
LABEL_168:
        *(_BYTE *)(*v256 + 8) = a2;
        goto LABEL_169;
      }
      --*(_DWORD *)(v249 + 320);
    }
    v534 = v255;
    v491 = v252;
    v257 = sub_22300B0(v250 + 17, 8, v252, v253, v254, v255);
    v258 = v491;
    v259 = v534;
    v260 = v257;
    if ( v250 )
    {
      v557 = v257;
      memcpy((void *)(v257 + 16), "__cl_clang_non_portable_kernel_param_types", v250);
      v260 = v557;
      v259 = v534;
      v258 = v491;
    }
    *(_BYTE *)(v260 + v250 + 16) = 0;
    *(_QWORD *)v260 = v250;
    *(_BYTE *)(v260 + 8) = 0;
    *v259 = v260;
    ++*(_DWORD *)(v249 + 316);
    v261 = sub_22450D0(v249 + 304, v258);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v249 + 304) + 8LL * v261), 0);
    v256 = v577[0];
    goto LABEL_168;
  }
  v490((__int64)a1, v249 + 304, "__cl_clang_non_portable_kernel_param_types", v248, a2);
LABEL_169:
  v492 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v262 = j__strlen("__cl_clang_bitfields");
  v263 = a1[26];
  v264 = v262;
  if ( v492 == sub_10306B0 )
  {
    v265 = sub_2244B30("__cl_clang_bitfields", v262);
    v266 = sub_2244CB0(v263 + 304, "__cl_clang_bitfields", v264, v265);
    v269 = (__int64 *)(*(_QWORD *)(v263 + 304) + 8LL * v266);
    if ( *v269 )
    {
      if ( *v269 != -8 )
      {
        sub_10298F0(v577, v269, 0);
        v270 = v577[0];
LABEL_177:
        *(_BYTE *)(*v270 + 8) = a2;
        goto LABEL_178;
      }
      --*(_DWORD *)(v263 + 320);
    }
    v535 = v269;
    v493 = v266;
    v271 = sub_22300B0(v264 + 17, 8, v266, v267, v268, v269);
    v272 = v493;
    v273 = v535;
    v274 = v271;
    if ( v264 )
    {
      v559 = v271;
      memcpy((void *)(v271 + 16), "__cl_clang_bitfields", v264);
      v274 = v559;
      v273 = v535;
      v272 = v493;
    }
    *(_BYTE *)(v274 + v264 + 16) = 0;
    *(_QWORD *)v274 = v264;
    *(_BYTE *)(v274 + 8) = 0;
    *v273 = v274;
    ++*(_DWORD *)(v263 + 316);
    v275 = sub_22450D0(v263 + 304, v272);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v263 + 304) + 8LL * v275), 0);
    v270 = v577[0];
    goto LABEL_177;
  }
  v492((__int64)a1, v263 + 304, "__cl_clang_bitfields", v262, a2);
LABEL_178:
  v494 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v276 = j__strlen("cl_amd_media_ops");
  v277 = a1[26];
  v278 = v276;
  if ( v494 == sub_10306B0 )
  {
    v279 = sub_2244B30("cl_amd_media_ops", v276);
    v280 = sub_2244CB0(v277 + 304, "cl_amd_media_ops", v278, v279);
    v283 = (__int64 *)(*(_QWORD *)(v277 + 304) + 8LL * v280);
    if ( *v283 )
    {
      if ( *v283 != -8 )
      {
        sub_10298F0(v577, v283, 0);
        v284 = v577[0];
LABEL_186:
        *(_BYTE *)(*v284 + 8) = a2;
        goto LABEL_187;
      }
      --*(_DWORD *)(v277 + 320);
    }
    v536 = v283;
    v495 = v280;
    v285 = sub_22300B0(v278 + 17, 8, v280, v281, v282, v283);
    v286 = v495;
    v287 = v536;
    v288 = v285;
    if ( v278 )
    {
      v551 = v285;
      memcpy((void *)(v285 + 16), "cl_amd_media_ops", v278);
      v288 = v551;
      v287 = v536;
      v286 = v495;
    }
    *(_BYTE *)(v288 + v278 + 16) = 0;
    *(_QWORD *)v288 = v278;
    *(_BYTE *)(v288 + 8) = 0;
    *v287 = v288;
    ++*(_DWORD *)(v277 + 316);
    v289 = sub_22450D0(v277 + 304, v286);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v277 + 304) + 8LL * v289), 0);
    v284 = v577[0];
    goto LABEL_186;
  }
  v494((__int64)a1, v277 + 304, "cl_amd_media_ops", v276, a2);
LABEL_187:
  v290 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v291 = j__strlen("cl_amd_media_ops2");
  v292 = a1[26];
  if ( v290 == sub_10306B0 )
    *(_BYTE *)sub_102FB20(v292 + 304, "cl_amd_media_ops2", v291) = a2;
  else
    v290((__int64)a1, v292 + 304, "cl_amd_media_ops2", v291, a2);
  v496 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v293 = j__strlen("cl_intel_subgroups");
  v294 = a1[26];
  v295 = v293;
  if ( v496 == sub_10306B0 )
  {
    v296 = sub_2244B30("cl_intel_subgroups", v293);
    v297 = sub_2244CB0(v294 + 304, "cl_intel_subgroups", v295, v296);
    v300 = (__int64 *)(*(_QWORD *)(v294 + 304) + 8LL * v297);
    if ( *v300 )
    {
      if ( *v300 != -8 )
      {
        sub_10298F0(v577, v300, 0);
        v301 = v577[0];
LABEL_197:
        *(_BYTE *)(*v301 + 8) = a2;
        goto LABEL_198;
      }
      --*(_DWORD *)(v294 + 320);
    }
    v537 = v300;
    v497 = v297;
    v302 = sub_22300B0(v295 + 17, 8, v297, v298, v299, v300);
    v303 = v497;
    v304 = v537;
    v305 = v302;
    if ( v295 )
    {
      v560 = v302;
      memcpy((void *)(v302 + 16), "cl_intel_subgroups", v295);
      v305 = v560;
      v304 = v537;
      v303 = v497;
    }
    *(_BYTE *)(v305 + v295 + 16) = 0;
    *(_QWORD *)v305 = v295;
    *(_BYTE *)(v305 + 8) = 0;
    *v304 = v305;
    ++*(_DWORD *)(v294 + 316);
    v306 = sub_22450D0(v294 + 304, v303);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v294 + 304) + 8LL * v306), 0);
    v301 = v577[0];
    goto LABEL_197;
  }
  v496((__int64)a1, v294 + 304, "cl_intel_subgroups", v293, a2);
LABEL_198:
  v307 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v308 = j__strlen("cl_intel_subgroups_short");
  v309 = a1[26];
  if ( v307 == sub_10306B0 )
    *(_BYTE *)sub_102FB20(v309 + 304, "cl_intel_subgroups_short", v308) = a2;
  else
    v307((__int64)a1, v309 + 304, "cl_intel_subgroups_short", v308, a2);
  v498 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v310 = j__strlen("cl_intel_device_side_avc_motion_estimation");
  v311 = a1[26];
  v312 = v310;
  if ( v498 == sub_10306B0 )
  {
    v313 = sub_2244B30("cl_intel_device_side_avc_motion_estimation", v310);
    v314 = sub_2244CB0(v311 + 304, "cl_intel_device_side_avc_motion_estimation", v312, v313);
    v317 = (__int64 *)(*(_QWORD *)(v311 + 304) + 8LL * v314);
    if ( *v317 )
    {
      if ( *v317 != -8 )
      {
        sub_10298F0(v577, v317, 0);
        v318 = v577[0];
LABEL_208:
        *(_BYTE *)(*v318 + 8) = a2;
        goto LABEL_209;
      }
      --*(_DWORD *)(v311 + 320);
    }
    v538 = v317;
    v499 = v314;
    v319 = sub_22300B0(v312 + 17, 8, v314, v315, v316, v317);
    v320 = v499;
    v321 = v538;
    v322 = v319;
    if ( v312 )
    {
      v549 = v319;
      memcpy((void *)(v319 + 16), "cl_intel_device_side_avc_motion_estimation", v312);
      v322 = v549;
      v321 = v538;
      v320 = v499;
    }
    *(_BYTE *)(v322 + v312 + 16) = 0;
    *(_QWORD *)v322 = v312;
    *(_BYTE *)(v322 + 8) = 0;
    *v321 = v322;
    ++*(_DWORD *)(v311 + 316);
    v323 = sub_22450D0(v311 + 304, v320);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v311 + 304) + 8LL * v323), 0);
    v318 = v577[0];
    goto LABEL_208;
  }
  v498((__int64)a1, v311 + 304, "cl_intel_device_side_avc_motion_estimation", v310, a2);
LABEL_209:
  v324 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v325 = j__strlen("__opencl_c_pipes");
  v326 = a1[26];
  if ( v324 == sub_10306B0 )
    *(_BYTE *)sub_102FB20(v326 + 304, "__opencl_c_pipes", v325) = a2;
  else
    v324((__int64)a1, v326 + 304, "__opencl_c_pipes", v325, a2);
  v500 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v327 = j__strlen("__opencl_c_generic_address_space");
  v328 = a1[26];
  v329 = v327;
  if ( v500 == sub_10306B0 )
  {
    v330 = sub_2244B30("__opencl_c_generic_address_space", v327);
    v331 = sub_2244CB0(v328 + 304, "__opencl_c_generic_address_space", v329, v330);
    v334 = (__int64 *)(*(_QWORD *)(v328 + 304) + 8LL * v331);
    if ( *v334 )
    {
      if ( *v334 != -8 )
      {
        sub_10298F0(v577, v334, 0);
        v335 = v577[0];
LABEL_219:
        *(_BYTE *)(*v335 + 8) = a2;
        goto LABEL_220;
      }
      --*(_DWORD *)(v328 + 320);
    }
    v539 = v334;
    v501 = v331;
    v336 = sub_22300B0(v329 + 17, 8, v331, v332, v333, v334);
    v337 = v501;
    v338 = v539;
    v339 = v336;
    if ( v329 )
    {
      v548 = v336;
      memcpy((void *)(v336 + 16), "__opencl_c_generic_address_space", v329);
      v339 = v548;
      v338 = v539;
      v337 = v501;
    }
    *(_BYTE *)(v339 + v329 + 16) = 0;
    *(_QWORD *)v339 = v329;
    *(_BYTE *)(v339 + 8) = 0;
    *v338 = v339;
    ++*(_DWORD *)(v328 + 316);
    v340 = sub_22450D0(v328 + 304, v337);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v328 + 304) + 8LL * v340), 0);
    v335 = v577[0];
    goto LABEL_219;
  }
  v500((__int64)a1, v328 + 304, "__opencl_c_generic_address_space", v327, a2);
LABEL_220:
  v502 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v341 = j__strlen("__opencl_c_atomic_order_acq_rel");
  v342 = a1[26];
  v343 = v341;
  if ( v502 == sub_10306B0 )
  {
    v344 = sub_2244B30("__opencl_c_atomic_order_acq_rel", v341);
    v345 = sub_2244CB0(v342 + 304, "__opencl_c_atomic_order_acq_rel", v343, v344);
    v348 = (__int64 *)(*(_QWORD *)(v342 + 304) + 8LL * v345);
    if ( *v348 )
    {
      if ( *v348 != -8 )
      {
        sub_10298F0(v577, v348, 0);
        v349 = v577[0];
LABEL_228:
        *(_BYTE *)(*v349 + 8) = a2;
        goto LABEL_229;
      }
      --*(_DWORD *)(v342 + 320);
    }
    v540 = v348;
    v503 = v345;
    v350 = sub_22300B0(v343 + 17, 8, v345, v346, v347, v348);
    v351 = v503;
    v352 = v540;
    v353 = v350;
    if ( v343 )
    {
      v561 = v350;
      memcpy((void *)(v350 + 16), "__opencl_c_atomic_order_acq_rel", v343);
      v353 = v561;
      v352 = v540;
      v351 = v503;
    }
    *(_BYTE *)(v353 + v343 + 16) = 0;
    *(_QWORD *)v353 = v343;
    *(_BYTE *)(v353 + 8) = 0;
    *v352 = v353;
    ++*(_DWORD *)(v342 + 316);
    v354 = sub_22450D0(v342 + 304, v351);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v342 + 304) + 8LL * v354), 0);
    v349 = v577[0];
    goto LABEL_228;
  }
  v502((__int64)a1, v342 + 304, "__opencl_c_atomic_order_acq_rel", v341, a2);
LABEL_229:
  v355 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v356 = j__strlen("__opencl_c_atomic_order_seq_cst");
  v357 = a1[26];
  if ( v355 == sub_10306B0 )
    *(_BYTE *)sub_102FB20(v357 + 304, "__opencl_c_atomic_order_seq_cst", v356) = a2;
  else
    v355((__int64)a1, v357 + 304, "__opencl_c_atomic_order_seq_cst", v356, a2);
  v504 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v358 = j__strlen("__opencl_c_subgroups");
  v359 = a1[26];
  v360 = v358;
  if ( v504 == sub_10306B0 )
  {
    v361 = sub_2244B30("__opencl_c_subgroups", v358);
    v362 = sub_2244CB0(v359 + 304, "__opencl_c_subgroups", v360, v361);
    v365 = (__int64 *)(*(_QWORD *)(v359 + 304) + 8LL * v362);
    if ( *v365 )
    {
      if ( *v365 != -8 )
      {
        sub_10298F0(v577, v365, 0);
        v366 = v577[0];
LABEL_239:
        *(_BYTE *)(*v366 + 8) = a2;
        goto LABEL_240;
      }
      --*(_DWORD *)(v359 + 320);
    }
    v541 = v365;
    v505 = v362;
    v367 = sub_22300B0(v360 + 17, 8, v362, v363, v364, v365);
    v368 = v505;
    v369 = v541;
    v370 = v367;
    if ( v360 )
    {
      v573 = v367;
      memcpy((void *)(v367 + 16), "__opencl_c_subgroups", v360);
      v370 = v573;
      v369 = v541;
      v368 = v505;
    }
    *(_BYTE *)(v370 + v360 + 16) = 0;
    *(_QWORD *)v370 = v360;
    *(_BYTE *)(v370 + 8) = 0;
    *v369 = v370;
    ++*(_DWORD *)(v359 + 316);
    v371 = sub_22450D0(v359 + 304, v368);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v359 + 304) + 8LL * v371), 0);
    v366 = v577[0];
    goto LABEL_239;
  }
  v504((__int64)a1, v359 + 304, "__opencl_c_subgroups", v358, a2);
LABEL_240:
  v506 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v372 = j__strlen("__opencl_c_3d_image_writes");
  v373 = a1[26];
  v374 = v372;
  if ( v506 == sub_10306B0 )
  {
    v375 = sub_2244B30("__opencl_c_3d_image_writes", v372);
    v376 = sub_2244CB0(v373 + 304, "__opencl_c_3d_image_writes", v374, v375);
    v379 = (__int64 *)(*(_QWORD *)(v373 + 304) + 8LL * v376);
    if ( *v379 )
    {
      if ( *v379 != -8 )
      {
        sub_10298F0(v577, v379, 0);
        v380 = v577[0];
LABEL_248:
        *(_BYTE *)(*v380 + 8) = a2;
        goto LABEL_249;
      }
      --*(_DWORD *)(v373 + 320);
    }
    v542 = v379;
    v507 = v376;
    v381 = sub_22300B0(v374 + 17, 8, v376, v377, v378, v379);
    v382 = v507;
    v383 = v542;
    v384 = v381;
    if ( v374 )
    {
      v575 = v381;
      memcpy((void *)(v381 + 16), "__opencl_c_3d_image_writes", v374);
      v384 = v575;
      v383 = v542;
      v382 = v507;
    }
    *(_BYTE *)(v384 + v374 + 16) = 0;
    *(_QWORD *)v384 = v374;
    *(_BYTE *)(v384 + 8) = 0;
    *v383 = v384;
    ++*(_DWORD *)(v373 + 316);
    v385 = sub_22450D0(v373 + 304, v382);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v373 + 304) + 8LL * v385), 0);
    v380 = v577[0];
    goto LABEL_248;
  }
  v506((__int64)a1, v373 + 304, "__opencl_c_3d_image_writes", v372, a2);
LABEL_249:
  v508 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v386 = j__strlen("__opencl_c_device_enqueue");
  v387 = a1[26];
  v388 = v386;
  if ( v508 == sub_10306B0 )
  {
    v389 = sub_2244B30("__opencl_c_device_enqueue", v386);
    v390 = sub_2244CB0(v387 + 304, "__opencl_c_device_enqueue", v388, v389);
    v393 = (__int64 *)(*(_QWORD *)(v387 + 304) + 8LL * v390);
    if ( *v393 )
    {
      if ( *v393 != -8 )
      {
        sub_10298F0(v577, v393, 0);
        v394 = v577[0];
LABEL_257:
        *(_BYTE *)(*v394 + 8) = a2;
        goto LABEL_258;
      }
      --*(_DWORD *)(v387 + 320);
    }
    v543 = v393;
    v509 = v390;
    v395 = sub_22300B0(v388 + 17, 8, v390, v391, v392, v393);
    v396 = v509;
    v397 = v543;
    v398 = v395;
    if ( v388 )
    {
      v574 = v395;
      memcpy((void *)(v395 + 16), "__opencl_c_device_enqueue", v388);
      v398 = v574;
      v397 = v543;
      v396 = v509;
    }
    *(_BYTE *)(v398 + v388 + 16) = 0;
    *(_QWORD *)v398 = v388;
    *(_BYTE *)(v398 + 8) = 0;
    *v397 = v398;
    ++*(_DWORD *)(v387 + 316);
    v399 = sub_22450D0(v387 + 304, v396);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v387 + 304) + 8LL * v399), 0);
    v394 = v577[0];
    goto LABEL_257;
  }
  v508((__int64)a1, v387 + 304, "__opencl_c_device_enqueue", v386, a2);
LABEL_258:
  v510 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v400 = j__strlen("__opencl_c_read_write_images");
  v401 = a1[26];
  v402 = v400;
  if ( v510 == sub_10306B0 )
  {
    v403 = sub_2244B30("__opencl_c_read_write_images", v400);
    v404 = sub_2244CB0(v401 + 304, "__opencl_c_read_write_images", v402, v403);
    v407 = (__int64 *)(*(_QWORD *)(v401 + 304) + 8LL * v404);
    if ( *v407 )
    {
      if ( *v407 != -8 )
      {
        sub_10298F0(v577, v407, 0);
        v408 = v577[0];
LABEL_266:
        *(_BYTE *)(*v408 + 8) = a2;
        goto LABEL_267;
      }
      --*(_DWORD *)(v401 + 320);
    }
    v544 = v407;
    v511 = v404;
    v409 = sub_22300B0(v402 + 17, 8, v404, v405, v406, v407);
    v410 = v511;
    v411 = v544;
    v412 = v409;
    if ( v402 )
    {
      v556 = v409;
      memcpy((void *)(v409 + 16), "__opencl_c_read_write_images", v402);
      v412 = v556;
      v411 = v544;
      v410 = v511;
    }
    *(_BYTE *)(v412 + v402 + 16) = 0;
    *(_QWORD *)v412 = v402;
    *(_BYTE *)(v412 + 8) = 0;
    *v411 = v412;
    ++*(_DWORD *)(v401 + 316);
    v413 = sub_22450D0(v401 + 304, v410);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v401 + 304) + 8LL * v413), 0);
    v408 = v577[0];
    goto LABEL_266;
  }
  v510((__int64)a1, v401 + 304, "__opencl_c_read_write_images", v400, a2);
LABEL_267:
  v512 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v414 = j__strlen("__opencl_c_program_scope_global_variables");
  v415 = a1[26];
  v416 = v414;
  if ( v512 == sub_10306B0 )
  {
    v417 = sub_2244B30("__opencl_c_program_scope_global_variables", v414);
    v418 = sub_2244CB0(v415 + 304, "__opencl_c_program_scope_global_variables", v416, v417);
    v421 = (__int64 *)(*(_QWORD *)(v415 + 304) + 8LL * v418);
    if ( *v421 )
    {
      if ( *v421 != -8 )
      {
        sub_10298F0(v577, v421, 0);
        v422 = v577[0];
LABEL_275:
        *(_BYTE *)(*v422 + 8) = a2;
        goto LABEL_276;
      }
      --*(_DWORD *)(v415 + 320);
    }
    v545 = v421;
    v513 = v418;
    v423 = sub_22300B0(v416 + 17, 8, v418, v419, v420, v421);
    v424 = v513;
    v425 = v545;
    v426 = v423;
    if ( v416 )
    {
      v554 = v423;
      memcpy((void *)(v423 + 16), "__opencl_c_program_scope_global_variables", v416);
      v426 = v554;
      v425 = v545;
      v424 = v513;
    }
    *(_BYTE *)(v426 + v416 + 16) = 0;
    *(_QWORD *)v426 = v416;
    *(_BYTE *)(v426 + 8) = 0;
    *v425 = v426;
    ++*(_DWORD *)(v415 + 316);
    v427 = sub_22450D0(v415 + 304, v424);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v415 + 304) + 8LL * v427), 0);
    v422 = v577[0];
    goto LABEL_275;
  }
  v512((__int64)a1, v415 + 304, "__opencl_c_program_scope_global_variables", v414, a2);
LABEL_276:
  v514 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v428 = j__strlen("__opencl_c_fp64");
  v429 = a1[26];
  v430 = v428;
  if ( v514 == sub_10306B0 )
  {
    v431 = sub_2244B30("__opencl_c_fp64", v428);
    v432 = sub_2244CB0(v429 + 304, "__opencl_c_fp64", v430, v431);
    v435 = (__int64 *)(*(_QWORD *)(v429 + 304) + 8LL * v432);
    if ( *v435 )
    {
      if ( *v435 != -8 )
      {
        sub_10298F0(v577, v435, 0);
        v436 = v577[0];
LABEL_284:
        *(_BYTE *)(*v436 + 8) = a2;
        goto LABEL_285;
      }
      --*(_DWORD *)(v429 + 320);
    }
    v546 = v435;
    v515 = v432;
    v437 = sub_22300B0(v430 + 17, 8, v432, v433, v434, v435);
    v438 = v515;
    v439 = v546;
    v440 = v437;
    if ( v430 )
    {
      v555 = v437;
      memcpy((void *)(v437 + 16), "__opencl_c_fp64", v430);
      v440 = v555;
      v439 = v546;
      v438 = v515;
    }
    *(_BYTE *)(v440 + v430 + 16) = 0;
    *(_QWORD *)v440 = v430;
    *(_BYTE *)(v440 + 8) = 0;
    *v439 = v440;
    ++*(_DWORD *)(v429 + 316);
    v441 = sub_22450D0(v429 + 304, v438);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v429 + 304) + 8LL * v441), 0);
    v436 = v577[0];
    goto LABEL_284;
  }
  v514((__int64)a1, v429 + 304, "__opencl_c_fp64", v428, a2);
LABEL_285:
  v516 = *(__int64 (__fastcall **)(__int64, __int64, const void *, size_t, char))(*a1 + 536LL);
  v442 = j__strlen("__opencl_c_images");
  v443 = a1[26];
  v444 = v442;
  if ( v516 == sub_10306B0 )
  {
    v445 = sub_2244B30("__opencl_c_images", v442);
    v446 = sub_2244CB0(v443 + 304, "__opencl_c_images", v444, v445);
    v450 = v446;
    v451 = (__int64 *)(*(_QWORD *)(v443 + 304) + 8LL * v446);
    if ( *v451 )
    {
      if ( *v451 != -8 )
      {
        sub_10298F0(v577, v451, 0);
        v452 = v577[0];
LABEL_293:
        result = *v452;
        *(_BYTE *)(result + 8) = a2;
        return result;
      }
      --*(_DWORD *)(v443 + 320);
    }
    v453 = sub_22300B0(v444 + 17, 8, v446, v447, v448, v449);
    if ( v444 )
      memcpy((void *)(v453 + 16), "__opencl_c_images", v444);
    *(_BYTE *)(v453 + v444 + 16) = 0;
    *(_QWORD *)v453 = v444;
    *(_BYTE *)(v453 + 8) = 0;
    *v451 = v453;
    ++*(_DWORD *)(v443 + 316);
    v454 = sub_22450D0(v443 + 304, v450);
    sub_10298F0(v577, (__int64 *)(*(_QWORD *)(v443 + 304) + 8LL * v454), 0);
    v452 = v577[0];
    goto LABEL_293;
  }
  return v516((__int64)a1, v443 + 304, "__opencl_c_images", v442, a2);
}
