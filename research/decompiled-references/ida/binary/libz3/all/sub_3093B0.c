const __m128i *__fastcall sub_3093B0(
        const __m128i **a1,
        __int64 a2,
        unsigned __int64 *a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  char **v11; // r12
  char **v12; // r12
  char **exception; // rbp
  char **v14; // rbp
  char **v15; // rbx
  const __m128i *v17; // rcx
  __int64 v18; // rax
  __int32 *v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  const __m128i *v22; // rdi
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  __m128i v26; // xmm0
  __m128i v27; // xmm3
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __m128i v30; // xmm3
  __m128i v31; // xmm0
  unsigned int v32; // eax
  unsigned int v33; // ebp
  __int64 *v34; // r13
  __int64 v35; // rbx
  __m128i v36; // rax
  __m128 si128; // xmm0
  unsigned __int128 v38; // kr00_16
  unsigned int v39; // r14d
  __int64 v40; // rcx
  void *v41; // rdi
  __int64 v42; // rax
  const __m128i *result; // rax
  const __m128i *v44; // r15
  unsigned __int32 v45; // ebx
  const __m128i *v46; // rbp
  unsigned int v47; // r12d
  unsigned int v48; // r14d
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // r8d
  unsigned int v52; // edx
  unsigned int *v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  _DWORD *v57; // rax
  __int64 v58; // r12
  int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // rsi
  unsigned int v62; // r11d
  __int64 v63; // r14
  _DWORD *v64; // r10
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int *v67; // r10
  __int64 v68; // rsi
  __int64 v69; // r12
  int v70; // r9d
  __int64 v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rbp
  __int64 v75; // rax
  int v76; // esi
  __int64 v77; // r15
  unsigned int v78; // r13d
  __int64 v79; // rsi
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // rax
  int v84; // esi
  __int64 v85; // rbp
  __int64 v86; // rax
  __int64 v87; // rbx
  unsigned int v88; // r15d
  __int64 v89; // rax
  int v90; // esi
  __int64 v91; // rax
  int v92; // esi
  _DWORD *v93; // rax
  __int64 v94; // rbx
  int v96; // edx
  _QWORD *v97; // r12
  __int64 v98; // rax
  int v99; // ebp
  unsigned int v100; // ebp
  unsigned int v101; // r13d
  int v102; // ebp
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // r12
  int *v106; // rbp
  unsigned __int64 v107; // rdx
  int *v108; // rbx
  int *v109; // r14
  _QWORD *v110; // r13
  unsigned int v111; // ecx
  unsigned int v112; // r12d
  bool v113; // al
  _QWORD *v114; // r9
  __int64 v115; // r13
  int v116; // ebp
  int *v117; // rcx
  __int64 v118; // rdx
  int v119; // eax
  unsigned int v120; // r10d
  __int64 v121; // r11
  __int64 v122; // r8
  __int64 v123; // rbx
  __int64 v124; // r12
  __int64 v125; // rdx
  int v126; // esi
  __int64 v127; // r14
  unsigned int v128; // r15d
  __int64 v129; // rdx
  __int64 v130; // rbx
  __int64 v131; // rbp
  __int64 v132; // r14
  int v133; // r12d
  __int64 v134; // r10
  __int64 v135; // r11
  __int64 v136; // r8
  int v137; // edx
  __int64 v138; // r12
  __int64 v139; // r8
  __int64 v140; // rbx
  unsigned int v141; // r14d
  __int64 v142; // rbp
  int v143; // r12d
  __int64 v144; // r8
  int v145; // edx
  int *v146; // r12
  int *v147; // rbp
  __int64 v148; // r15
  __int64 v149; // rcx
  unsigned int v150; // r14d
  int *v151; // rsi
  __int64 v152; // rbp
  __int64 v153; // rax
  int v154; // r13d
  unsigned int v155; // r10d
  __int64 v156; // r8
  __int64 v157; // rbx
  __int64 v158; // rdx
  __int64 v159; // rdi
  __int64 v160; // rax
  int v161; // edx
  __int64 v162; // rdx
  unsigned int v163; // r12d
  __int64 v164; // rdi
  __int64 v165; // r15
  __int64 v166; // rbx
  __int64 v167; // rax
  __int64 v168; // r10
  __int64 v169; // rax
  int v170; // edx
  __int64 v171; // r15
  __int64 v172; // rax
  unsigned int v173; // ebx
  __int64 v174; // rbp
  __int64 v175; // r15
  __int64 v176; // rdx
  int v177; // esi
  int v178; // r12d
  unsigned int v179; // r14d
  __int64 v180; // r9
  int *v181; // rdi
  int v182; // ebx
  __int64 v183; // rbp
  int *v184; // rsi
  __int64 v185; // rax
  int v186; // ecx
  unsigned int v187; // r11d
  __int64 v188; // r10
  __int64 v189; // rdx
  __int64 v190; // r12
  __int64 v191; // r14
  __int64 v192; // rax
  int v193; // edi
  __int64 v194; // r15
  unsigned int v195; // r13d
  __int64 v196; // r10
  __int64 v197; // r12
  __int64 v198; // rbx
  __int64 v199; // r15
  __int64 v200; // rax
  __int64 v201; // r11
  __int64 i; // rax
  int v203; // edx
  __int64 v204; // r14
  __int64 v205; // rax
  __int64 v206; // r12
  unsigned int v207; // r15d
  __int64 v208; // rbx
  __int64 v209; // r14
  __int64 v210; // rax
  int v211; // edx
  unsigned int *v212; // r15
  unsigned int v213; // ebp
  int v214; // eax
  unsigned int v215; // r14d
  bool v216; // si
  int v217; // r13d
  _DWORD *v218; // rdx
  unsigned int v219; // eax
  __int64 v220; // rdx
  unsigned int v221; // eax
  __int64 v222; // rdx
  __int64 v223; // rdx
  __int64 v224; // r8
  __int64 v225; // r10
  __int64 v226; // rbx
  __int64 v227; // r9
  __int64 v228; // r12
  __int64 v229; // rdx
  int v230; // ecx
  __int64 v231; // r11
  unsigned int v232; // ecx
  __int64 v233; // rbx
  __int64 v234; // rax
  unsigned int v235; // r12d
  unsigned int v236; // r13d
  unsigned int v237; // edx
  unsigned int *v238; // rax
  unsigned int v239; // eax
  __int64 v240; // rcx
  __int64 v241; // rax
  __int64 v242; // rax
  __int64 v243; // rbx
  unsigned int v244; // r12d
  unsigned int v245; // ebp
  int v246; // r10d
  unsigned __int64 v247; // rbp
  unsigned int v248; // r14d
  unsigned int v249; // r12d
  _BYTE *v250; // rsi
  __int64 *v251; // r11
  __int64 v252; // r10
  __int64 v253; // r13
  __int64 v254; // rax
  __int64 v255; // rdi
  __int64 v256; // rbx
  __int64 v257; // rcx
  int v258; // edi
  __int64 v259; // r15
  int v260; // ebx
  int v261; // ebx
  unsigned int v262; // ebp
  __int64 v263; // rax
  unsigned int v264; // ecx
  __int64 v265; // r10
  unsigned int v266; // r8d
  unsigned int v267; // r9d
  unsigned int v268; // edx
  __int64 v269; // r14
  unsigned int v270; // r12d
  __int64 v271; // rax
  __int64 v272; // rcx
  __int64 v273; // rsi
  __int64 v274; // rdi
  __int64 v275; // rax
  int v276; // ecx
  __int64 v277; // rax
  int v278; // eax
  int v279; // ecx
  int v280; // edi
  __int64 v281; // rbx
  __int64 v282; // rsi
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rdx
  __int64 v286; // r12
  int v287; // r10d
  __int64 v288; // rdx
  __int64 v289; // rbp
  __int64 v290; // rax
  __int64 v291; // r14
  __int64 v292; // rax
  int v293; // r13d
  __int64 v294; // r13
  __int64 v295; // r14
  __int64 v296; // r15
  __int64 v297; // rbx
  __int64 v298; // rax
  __int64 v299; // r10
  __int64 v300; // rax
  int v301; // edx
  __int64 v302; // r13
  __int64 v303; // rax
  __int64 v304; // rbp
  unsigned int v305; // r15d
  __int64 v306; // rbx
  int v307; // r13d
  __int64 v308; // rax
  unsigned int v309; // eax
  int v310; // esi
  __int64 v311; // rax
  __int64 v312; // rax
  __int64 v313; // rax
  int v314; // edi
  unsigned int v315; // r13d
  unsigned int v316; // edx
  unsigned int *v317; // rax
  unsigned int v318; // eax
  __int64 v319; // rcx
  __int64 v320; // rax
  unsigned int v321; // eax
  int v322; // edx
  __int64 v323; // rax
  __int64 v324; // rax
  _BYTE *v325; // r14
  int v326; // ebp
  unsigned int v327; // r15d
  unsigned int v328; // ebx
  int *v329; // rdx
  int v330; // r9d
  __int64 v331; // rax
  unsigned int v332; // eax
  __int64 v333; // r12
  __int64 v334; // r13
  unsigned int v335; // r15d
  _DWORD *v336; // rax
  int v337; // r10d
  __int64 v338; // rdx
  unsigned int v339; // r8d
  __int64 v340; // r12
  __int64 v341; // rbp
  unsigned int v342; // ebx
  unsigned int v343; // r11d
  __int64 v344; // rsi
  __int64 v345; // rdx
  __int64 v346; // rax
  __int64 v347; // rdi
  __int64 v348; // rcx
  __int64 v349; // rax
  int v350; // edx
  __int64 v351; // rdx
  __int64 v352; // rax
  __int64 v353; // r15
  unsigned int v354; // ebp
  __int64 v355; // rbx
  unsigned int v356; // r11d
  unsigned int v357; // r11d
  unsigned int v358; // r8d
  __int64 v359; // rbx
  __int64 v360; // r10
  unsigned int v361; // r14d
  unsigned int v362; // edx
  __int64 v363; // r13
  __int64 v364; // rax
  int v365; // r8d
  __int64 v366; // rax
  __int64 v367; // rbp
  __int64 v368; // rsi
  __int64 v369; // rbx
  __int64 v370; // r12
  int v371; // eax
  __int64 v372; // r12
  unsigned int v373; // edi
  __int64 v374; // r15
  __int64 v375; // rbx
  __int64 v376; // rbp
  unsigned int v377; // r12d
  __int64 v378; // rax
  __int64 v379; // rcx
  __int64 v380; // rax
  int v381; // esi
  __int64 v382; // rbp
  __int64 v383; // rax
  __int64 v384; // rbx
  unsigned int v385; // r12d
  __int64 v386; // rax
  int v387; // edx
  __int64 v388; // rax
  int v389; // r13d
  int v390; // ecx
  __int64 v391; // rax
  int v392; // esi
  __int64 v393; // rbx
  int v394; // eax
  __int64 v395; // rdi
  unsigned int v396; // eax
  __int64 v397; // rcx
  __int64 v398; // rbx
  __int64 v399; // rcx
  int v400; // edi
  __int64 v401; // r15
  unsigned int v402; // edi
  __int64 v403; // r12
  __int64 v404; // rax
  __int64 v405; // rbp
  __int64 v406; // r15
  unsigned int v407; // ebx
  __int64 v408; // rcx
  __int64 v409; // r9
  __int64 v410; // rcx
  int v411; // edi
  __int64 v412; // rcx
  unsigned int v413; // edi
  __int64 v414; // rax
  __int64 v415; // rbp
  __int64 v416; // r15
  unsigned int v417; // ebx
  __int64 v418; // r14
  unsigned int v419; // ecx
  __int64 v420; // rcx
  int v421; // edi
  __int64 v422; // rcx
  int v423; // edi
  int v424; // ecx
  int v425; // edi
  int v426; // eax
  unsigned int v427; // r8d
  unsigned int v428; // eax
  unsigned int v429; // ecx
  int v430; // edx
  __int64 v431; // rax
  __int64 v432; // rax
  unsigned int v433; // r13d
  _BYTE *v434; // r12
  __int64 v435; // rax
  int v436; // edx
  unsigned __int64 v437; // r13
  __int64 v438; // rax
  _QWORD *v439; // r12
  unsigned int v440; // ebp
  _QWORD *v441; // rax
  _QWORD *v442; // rcx
  __int64 v443; // rdx
  size_t v444; // rdx
  __int64 v445; // rdi
  __int64 v446; // r8
  int v447; // r14d
  __int64 v448; // rdx
  __int64 v449; // rsi
  __int64 v450; // rbp
  __int64 v451; // rax
  __int64 v452; // rbx
  __int64 v453; // rax
  int v454; // ecx
  __int64 v455; // r15
  unsigned int v456; // r13d
  __int64 v457; // rcx
  __int64 v458; // rbx
  __int64 v459; // rbp
  __int64 v460; // rax
  __int64 v461; // r11
  __int64 v462; // rax
  int v463; // ecx
  __int64 v464; // rbp
  __int64 v465; // rax
  __int64 v466; // rbx
  unsigned int v467; // r15d
  __int64 v468; // rax
  unsigned int v469; // eax
  __int64 v470; // rax
  int v471; // ecx
  __int64 v472; // rax
  int v473; // ecx
  unsigned int v474; // ebp
  int v475; // r14d
  _DWORD *v476; // rbx
  int v477; // r12d
  __int64 v478; // rax
  int v479; // eax
  int v480; // r13d
  __int64 v481; // rax
  int v482; // edx
  __int64 v483; // rax
  int v484; // edx
  unsigned int v485; // ebp
  unsigned int v486; // edx
  unsigned int *v487; // r14
  __int64 *v488; // r12
  __int64 v489; // rsi
  __int64 *v490; // rdi
  unsigned __int64 v491; // rax
  unsigned __int64 v492; // rcx
  unsigned __int64 v493; // rax
  __m128i v494; // xmm1
  unsigned __int64 v495; // rax
  __int64 *v496; // rcx
  __int64 v497; // rdi
  __int64 *v498; // r15
  __int64 v499; // rax
  unsigned __int64 v500; // rax
  __int64 *v501; // rax
  _DWORD *v502; // rcx
  __int64 v503; // r8
  __int64 v504; // [rsp+0h] [rbp-188h]
  unsigned __int64 v505; // [rsp+8h] [rbp-180h]
  unsigned int v506; // [rsp+10h] [rbp-178h]
  const __m128i *v507; // [rsp+10h] [rbp-178h]
  int v508; // [rsp+10h] [rbp-178h]
  int v509; // [rsp+10h] [rbp-178h]
  int v510; // [rsp+10h] [rbp-178h]
  int v511; // [rsp+10h] [rbp-178h]
  unsigned int v512; // [rsp+10h] [rbp-178h]
  __int64 v513; // [rsp+10h] [rbp-178h]
  int v514; // [rsp+10h] [rbp-178h]
  int v515; // [rsp+10h] [rbp-178h]
  unsigned int *v516; // [rsp+10h] [rbp-178h]
  int v517; // [rsp+10h] [rbp-178h]
  int v518; // [rsp+10h] [rbp-178h]
  int v519; // [rsp+10h] [rbp-178h]
  __int64 v520; // [rsp+10h] [rbp-178h]
  unsigned int v521; // [rsp+10h] [rbp-178h]
  unsigned int v522; // [rsp+10h] [rbp-178h]
  _BYTE *v523; // [rsp+10h] [rbp-178h]
  unsigned int v524; // [rsp+18h] [rbp-170h]
  const __m128i *v525; // [rsp+18h] [rbp-170h]
  unsigned int v526; // [rsp+18h] [rbp-170h]
  int *v527; // [rsp+18h] [rbp-170h]
  __int64 v528; // [rsp+18h] [rbp-170h]
  int v529; // [rsp+18h] [rbp-170h]
  int v530; // [rsp+18h] [rbp-170h]
  _BYTE *v531; // [rsp+18h] [rbp-170h]
  __int64 *v532; // [rsp+20h] [rbp-168h]
  int *v533; // [rsp+20h] [rbp-168h]
  _QWORD *v534; // [rsp+20h] [rbp-168h]
  __int64 v535; // [rsp+20h] [rbp-168h]
  unsigned int v536; // [rsp+20h] [rbp-168h]
  __int64 v537; // [rsp+20h] [rbp-168h]
  int v538; // [rsp+20h] [rbp-168h]
  unsigned int v539; // [rsp+20h] [rbp-168h]
  int v540; // [rsp+20h] [rbp-168h]
  unsigned int v541; // [rsp+20h] [rbp-168h]
  unsigned int *v542; // [rsp+28h] [rbp-160h]
  _DWORD *v543; // [rsp+28h] [rbp-160h]
  _BYTE *v544; // [rsp+28h] [rbp-160h]
  unsigned int *v545; // [rsp+28h] [rbp-160h]
  __int64 v546; // [rsp+30h] [rbp-158h]
  __int64 v547; // [rsp+38h] [rbp-150h]
  __int64 v548; // [rsp+38h] [rbp-150h]
  int *v549; // [rsp+38h] [rbp-150h]
  __int64 v550; // [rsp+38h] [rbp-150h]
  int *v551; // [rsp+38h] [rbp-150h]
  __int64 v552; // [rsp+38h] [rbp-150h]
  __int64 *v553; // [rsp+38h] [rbp-150h]
  int v554; // [rsp+38h] [rbp-150h]
  __int64 v555; // [rsp+38h] [rbp-150h]
  unsigned int v556; // [rsp+38h] [rbp-150h]
  unsigned int v557; // [rsp+38h] [rbp-150h]
  unsigned int v558; // [rsp+38h] [rbp-150h]
  unsigned int v559; // [rsp+38h] [rbp-150h]
  __int64 v560; // [rsp+38h] [rbp-150h]
  __int64 v561; // [rsp+38h] [rbp-150h]
  int src; // [rsp+40h] [rbp-148h]
  unsigned int srca; // [rsp+40h] [rbp-148h]
  unsigned int *srcb; // [rsp+40h] [rbp-148h]
  __int64 v565; // [rsp+48h] [rbp-140h]
  __int64 v566; // [rsp+48h] [rbp-140h]
  _DWORD *v567; // [rsp+50h] [rbp-138h]
  int v568; // [rsp+58h] [rbp-130h]
  int *v569; // [rsp+58h] [rbp-130h]
  __int64 v570; // [rsp+58h] [rbp-130h]
  int *v571; // [rsp+58h] [rbp-130h]
  __int64 v572; // [rsp+58h] [rbp-130h]
  __int64 v573; // [rsp+58h] [rbp-130h]
  __int64 v574; // [rsp+58h] [rbp-130h]
  __int64 *v575; // [rsp+58h] [rbp-130h]
  unsigned int v576; // [rsp+58h] [rbp-130h]
  unsigned int v577; // [rsp+58h] [rbp-130h]
  unsigned int v578; // [rsp+58h] [rbp-130h]
  unsigned int v579; // [rsp+58h] [rbp-130h]
  unsigned int *v580; // [rsp+58h] [rbp-130h]
  unsigned int v581; // [rsp+58h] [rbp-130h]
  unsigned int v582; // [rsp+58h] [rbp-130h]
  __int64 v583; // [rsp+60h] [rbp-128h]
  int *v584; // [rsp+60h] [rbp-128h]
  int *v585; // [rsp+60h] [rbp-128h]
  __int64 v586; // [rsp+60h] [rbp-128h]
  __int64 *v587; // [rsp+60h] [rbp-128h]
  __int64 v588; // [rsp+60h] [rbp-128h]
  unsigned int v589; // [rsp+60h] [rbp-128h]
  _QWORD *v590; // [rsp+68h] [rbp-120h]
  int *v591; // [rsp+68h] [rbp-120h]
  __int64 v592; // [rsp+68h] [rbp-120h]
  __int64 v593; // [rsp+68h] [rbp-120h]
  unsigned int v594; // [rsp+68h] [rbp-120h]
  __int64 v595; // [rsp+68h] [rbp-120h]
  __int64 v596; // [rsp+68h] [rbp-120h]
  unsigned int v597; // [rsp+68h] [rbp-120h]
  unsigned int v598; // [rsp+68h] [rbp-120h]
  __int64 v599; // [rsp+70h] [rbp-118h]
  __int64 v600; // [rsp+70h] [rbp-118h]
  int v601; // [rsp+70h] [rbp-118h]
  __int64 v602; // [rsp+70h] [rbp-118h]
  __int64 v603; // [rsp+70h] [rbp-118h]
  unsigned int v604; // [rsp+70h] [rbp-118h]
  int v605; // [rsp+78h] [rbp-110h]
  __int64 v606; // [rsp+78h] [rbp-110h]
  unsigned int v607; // [rsp+78h] [rbp-110h]
  unsigned int v608; // [rsp+78h] [rbp-110h]
  unsigned int v609; // [rsp+80h] [rbp-108h]
  int v610; // [rsp+80h] [rbp-108h]
  unsigned int v611; // [rsp+80h] [rbp-108h]
  unsigned int v612; // [rsp+80h] [rbp-108h]
  unsigned int v613; // [rsp+80h] [rbp-108h]
  unsigned int v614; // [rsp+80h] [rbp-108h]
  int v615; // [rsp+80h] [rbp-108h]
  int v616; // [rsp+80h] [rbp-108h]
  unsigned int v617; // [rsp+80h] [rbp-108h]
  int v618; // [rsp+80h] [rbp-108h]
  unsigned int v619; // [rsp+80h] [rbp-108h]
  unsigned int v620; // [rsp+84h] [rbp-104h]
  unsigned int v621; // [rsp+84h] [rbp-104h]
  unsigned int v622; // [rsp+84h] [rbp-104h]
  __int64 v623; // [rsp+88h] [rbp-100h]
  __int64 v624; // [rsp+88h] [rbp-100h]
  unsigned int v625; // [rsp+88h] [rbp-100h]
  unsigned int v626; // [rsp+90h] [rbp-F8h]
  unsigned int v627; // [rsp+90h] [rbp-F8h]
  unsigned int v628; // [rsp+98h] [rbp-F0h]
  int v629; // [rsp+98h] [rbp-F0h]
  __int64 v630; // [rsp+98h] [rbp-F0h]
  __int64 v631; // [rsp+A0h] [rbp-E8h]
  unsigned int v632; // [rsp+A8h] [rbp-E0h]
  __int64 v633; // [rsp+A8h] [rbp-E0h]
  __int64 v634; // [rsp+B0h] [rbp-D8h]
  _BYTE *v635; // [rsp+B0h] [rbp-D8h]
  __int64 v636; // [rsp+B8h] [rbp-D0h]
  unsigned int v637; // [rsp+B8h] [rbp-D0h]
  unsigned int v640; // [rsp+D0h] [rbp-B8h]
  int v641; // [rsp+D0h] [rbp-B8h]
  int v642; // [rsp+D4h] [rbp-B4h]
  int v643; // [rsp+D4h] [rbp-B4h]
  _BYTE *v644; // [rsp+E8h] [rbp-A0h] BYREF
  unsigned int *v645; // [rsp+F0h] [rbp-98h] BYREF
  void *v646; // [rsp+F8h] [rbp-90h] BYREF
  _QWORD *v647; // [rsp+100h] [rbp-88h] BYREF
  unsigned int v648; // [rsp+108h] [rbp-80h]
  unsigned int v649; // [rsp+10Ch] [rbp-7Ch]
  __m128 v650; // [rsp+110h] [rbp-78h] BYREF
  __int64 v651; // [rsp+120h] [rbp-68h] BYREF
  _QWORD *v652; // [rsp+130h] [rbp-58h] BYREF
  __int64 v653; // [rsp+138h] [rbp-50h]

  v17 = *a1;
  if ( *a1 )
  {
    v18 = 4LL * v17[-1].m128i_u32[3];
    v19 = &v17->m128i_i32[(unsigned __int64)v18 / 4];
    if ( v17 != (const __m128i *)&v17->m128i_i8[v18] )
    {
      v20 = v18 - 4;
      v21 = (v20 >> 2) + 1;
      if ( v20 <= 8 )
      {
        v32 = 1;
      }
      else
      {
        v22 = *a1;
        v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
        v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0);
        do
        {
          v25 = _mm_loadu_si128(v22++);
          v26 = _mm_cmpgt_epi32(_mm_sub_epi32(v25, v24), _mm_sub_epi32(v23, v24));
          v23 = _mm_or_si128(_mm_andnot_si128(v26, v23), _mm_and_si128(v25, v26));
        }
        while ( &v17[v21 >> 2] != v22 );
        v27 = _mm_srli_si128(v23, 8);
        v28 = _mm_cmpgt_epi32(_mm_sub_epi32(v27, v24), _mm_sub_epi32(v23, v24));
        v29 = _mm_or_si128(_mm_andnot_si128(v28, v23), _mm_and_si128(v27, v28));
        v30 = _mm_srli_si128(v29, 4);
        v31 = _mm_cmpgt_epi32(_mm_sub_epi32(v30, v24), _mm_sub_epi32(v29, v24));
        v32 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v31, v29), _mm_and_si128(v30, v31)));
        if ( (v21 & 3) == 0 )
        {
LABEL_16:
          v33 = v32 + 1;
          goto LABEL_17;
        }
        v17 = (const __m128i *)((char *)v17 + 4 * (v21 & 0xFFFFFFFFFFFFFFFCLL));
      }
      if ( v32 < v17->m128i_i32[0] )
        v32 = v17->m128i_i32[0];
      if ( v19 != (__int32 *)((char *)v17->m128i_i64 + 4) )
      {
        if ( v32 < v17->m128i_i32[1] )
          v32 = v17->m128i_u32[1];
        if ( v19 != (__int32 *)&v17->m128i_u64[1] && v32 < v17->m128i_i32[2] )
          v32 = v17->m128i_u32[2];
      }
      goto LABEL_16;
    }
  }
  v33 = 2;
LABEL_17:
  v34 = &v650.m128_i64[1];
  v651 = 0;
  v650 = (__m128)(unsigned __int64)a2;
  sub_313C10(&v650.m128_u16[4]);
  v35 = v651;
  v36 = (__m128i)v650;
  si128 = (__m128)_mm_load_si128((const __m128i *)&v650);
  v504 = v651;
  v505 = _mm_movehl_ps(a11, si128).m128_u64[0];
  *(_DWORD *)(v505 + 4LL * (unsigned int)(*(_DWORD *)(v505 - 4))++) = -1;
  v38 = __PAIR128__(v505, si128.m128_u64[0]);
  if ( v35 )
  {
    v39 = *(_DWORD *)(v35 - 4);
    if ( v39 >= v33 )
    {
      result = *a1;
      *(_DWORD *)(v35 - 4) = v33;
      if ( !result )
        goto LABEL_731;
      goto LABEL_26;
    }
  }
  else
  {
    v39 = 0;
    if ( !v33 )
    {
      result = *a1;
      if ( !*a1 )
        return (const __m128i *)sub_186B220((void *)(*((_QWORD *)&v38 + 1) - 8LL));
      goto LABEL_26;
    }
  }
  v546 = v36.m128i_i64[0];
  v36.m128i_i64[0] = v504;
  v38 = __PAIR128__(v36.m128i_u64[1], v546);
  while ( !v36.m128i_i64[0] || *(_DWORD *)(v36.m128i_i64[0] - 8) < v33 )
  {
    v650 = si128;
    v651 = v504;
    sub_313C10(&v651);
    si128 = (__m128)_mm_load_si128((const __m128i *)&v650);
    v38 = (unsigned __int128)v650;
    v36.m128i_i64[0] = v651;
    v504 = v651;
  }
  *(_DWORD *)(v36.m128i_i64[0] - 4) = v33;
  v40 = 4LL * v39;
  v41 = (void *)(v36.m128i_i64[0] + v40);
  v42 = 4LL * v33;
  if ( v40 != v42 )
    memset(v41, 0, v42 - v40);
  result = *a1;
  if ( !*a1 )
    goto LABEL_731;
LABEL_26:
  v44 = (const __m128i *)((char *)result + 4 * result[-1].m128i_u32[3]);
  if ( v44 == result )
  {
    if ( !v504 )
    {
      if ( !*((_QWORD *)&v38 + 1) )
        return result;
      return (const __m128i *)sub_186B220((void *)(*((_QWORD *)&v38 + 1) - 8LL));
    }
LABEL_731:
    sub_186B220((void *)(v504 - 8));
    result = *((const __m128i **)&v38 + 1);
    if ( !*((_QWORD *)&v38 + 1) )
      return result;
    return (const __m128i *)sub_186B220((void *)(*((_QWORD *)&v38 + 1) - 8LL));
  }
  v45 = result->m128i_i32[0];
  v46 = result;
  v47 = (unsigned __int32)result->m128i_i32[0] >> 5;
  v48 = v47 + 1;
  v49 = sub_186B270(0x10u) + 8;
  v50 = 0;
  *(_QWORD *)(v49 - 8) = 2;
  v567 = (_DWORD *)v49;
LABEL_31:
  while ( 1 )
  {
    v54 = *(_DWORD *)(v49 - 8);
    if ( v54 >= v48 )
      break;
    v51 = (3 * v54 + 1) >> 1;
    v52 = 4 * v51 + 8;
    if ( 4 * v54 + 8 >= v52 || v54 >= v51 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v652, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v652);
      sub_233E40((__int64)&v652);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v524 = v50;
    v506 = (3 * v54 + 1) >> 1;
    v53 = (unsigned int *)sub_186B300(v567 - 2, v52);
    v50 = v524;
    v567 = v53 + 2;
    *v53 = v506;
    v49 = (__int64)(v53 + 2);
  }
  v55 = 4 * v50;
  *(v567 - 1) = v48;
  v56 = 4LL * v48;
  if ( v55 != v56 )
    memset(&v567[(unsigned __int64)v55 / 4], 0, v56 - v55);
  while ( 2 )
  {
    v567[v47] |= 1 << v45;
    v57 = (_DWORD *)(v504 + 4LL * v45);
    if ( *((_QWORD *)&v38 + 1) )
    {
      v58 = *(unsigned int *)(*((_QWORD *)&v38 + 1) - 4LL);
      *v57 = v58;
      v59 = v58;
      v60 = *(unsigned int *)(*((_QWORD *)&v38 + 1) - 4LL);
      if ( (_DWORD)v60 != *(_DWORD *)(*((_QWORD *)&v38 + 1) - 8LL) )
        goto LABEL_36;
    }
    else
    {
      *v57 = 0;
      v59 = 0;
      v58 = 0;
    }
    v508 = v59;
    v650 = (__m128)v38;
    v651 = v504;
    sub_313C10(v34);
    v59 = v508;
    v504 = v651;
    v60 = *(unsigned int *)(v650.m128_u64[1] - 4);
    v38 = (unsigned __int128)v650;
LABEL_36:
    v61 = *((_QWORD *)&v38 + 1);
    *(_DWORD *)(*((_QWORD *)&v38 + 1) + 4 * v60) = v45;
    ++*(_DWORD *)(*((_QWORD *)&v38 + 1) - 4LL);
    v62 = v59 >> 1;
    v63 = *(unsigned int *)(*((_QWORD *)&v38 + 1) + 4 * v58);
    v64 = (_DWORD *)(*((_QWORD *)&v38 + 1) + 4LL * v59);
    if ( !(v59 >> 1) )
      goto LABEL_64;
    v65 = v38;
    v507 = v44;
    v525 = v46;
    v532 = v34;
    v66 = *(_QWORD *)v38;
    while ( 2 )
    {
      v67 = (unsigned int *)(v61 + 4LL * v62);
      v68 = *(unsigned int *)(v65 + 8);
      v69 = *v67;
      v70 = v68 - 1;
      v71 = 24 * v68;
      v72 = v66 + 24 * v68;
      v73 = 24LL * ((unsigned int)v63 & ((_DWORD)v68 - 1));
      v74 = v66 + v73;
      if ( v73 != 24 * v68 )
      {
        v75 = v66 + v73;
        do
        {
          v76 = *(_DWORD *)(v75 + 4);
          if ( v76 == 2 )
          {
            if ( *(_DWORD *)v75 == (_DWORD)v63 && *(_DWORD *)(v75 + 8) == (_DWORD)v63 )
            {
              v77 = *(_QWORD *)(v75 + 16);
              if ( !v77 )
                goto LABEL_84;
              goto LABEL_46;
            }
          }
          else if ( !v76 )
          {
            goto LABEL_794;
          }
          v75 += 24;
        }
        while ( v72 != v75 );
      }
      if ( v66 == v74 )
LABEL_794:
        BUG();
      v91 = v66;
      while ( 1 )
      {
        v92 = *(_DWORD *)(v91 + 4);
        if ( v92 != 2 )
        {
          if ( !v92 )
            goto LABEL_794;
          goto LABEL_79;
        }
        if ( *(_DWORD *)v91 == (_DWORD)v63 && *(_DWORD *)(v91 + 8) == (_DWORD)v63 )
          break;
LABEL_79:
        v91 += 24;
        if ( v74 == v91 )
          goto LABEL_794;
      }
      v77 = *(_QWORD *)(v91 + 16);
      if ( !v77 )
      {
LABEL_84:
        v78 = 0;
        goto LABEL_50;
      }
LABEL_46:
      v78 = *(_DWORD *)(v77 - 4);
      if ( v78 )
      {
        v609 = v62;
        v79 = v78;
        v78 = 0;
        v542 = v67;
        v547 = v66;
        src = v70;
        v568 = v59;
        v583 = v65;
        v565 = v72;
        v80 = v77;
        do
        {
          v80 += 4;
          v78 += __popcountdi2();
        }
        while ( v77 + 4 * v79 != v80 );
        v62 = v609;
        v67 = v542;
        v66 = v547;
        v70 = src;
        v72 = v565;
        v59 = v568;
        v65 = v583;
      }
LABEL_50:
      v81 = 24LL * ((unsigned int)v69 & v70);
      v82 = v66 + v81;
      if ( v71 != v81 )
      {
        v83 = v66 + v81;
        do
        {
          v84 = *(_DWORD *)(v83 + 4);
          if ( v84 == 2 )
          {
            if ( (_DWORD)v69 == *(_DWORD *)v83 && (_DWORD)v69 == *(_DWORD *)(v83 + 8) )
            {
              v85 = *(_QWORD *)(v83 + 16);
              if ( !v85 )
                goto LABEL_75;
              goto LABEL_58;
            }
          }
          else if ( !v84 )
          {
            goto LABEL_794;
          }
          v83 += 24;
        }
        while ( v72 != v83 );
      }
      if ( v66 == v82 )
        goto LABEL_794;
      v89 = v66;
      while ( 2 )
      {
        v90 = *(_DWORD *)(v89 + 4);
        if ( v90 != 2 )
        {
          if ( !v90 )
            goto LABEL_794;
LABEL_70:
          v89 += 24;
          if ( v82 == v89 )
            goto LABEL_794;
          continue;
        }
        break;
      }
      if ( (_DWORD)v69 != *(_DWORD *)v89 || (_DWORD)v69 != *(_DWORD *)(v89 + 8) )
        goto LABEL_70;
      v85 = *(_QWORD *)(v89 + 16);
      if ( !v85 )
      {
LABEL_75:
        v44 = v507;
        v46 = v525;
        v34 = v532;
        v64 = (_DWORD *)(*((_QWORD *)&v38 + 1) + 4LL * (unsigned int)v59);
        goto LABEL_64;
      }
LABEL_58:
      v86 = *(unsigned int *)(v85 - 4);
      if ( !(_DWORD)v86 )
        goto LABEL_75;
      v610 = v62;
      v87 = v85 + 4 * v86;
      v88 = 0;
      v543 = v67;
      v548 = v66;
      srca = v59;
      v566 = v65;
      do
      {
        v85 += 4;
        v88 += __popcountdi2();
      }
      while ( v87 != v85 );
      v61 = *((_QWORD *)&v38 + 1);
      v64 = v543;
      v59 = srca;
      v66 = v548;
      v65 = v566;
      if ( v78 < v88 )
      {
        *(_DWORD *)(*((_QWORD *)&v38 + 1) + 4LL * srca) = v69;
        *(_DWORD *)(v504 + 4 * v69) = srca;
        v59 = v610;
        v62 = v610 >> 1;
        if ( !(v610 >> 1) )
        {
          v44 = v507;
          v46 = v525;
          v59 = 1;
          v34 = v532;
          goto LABEL_64;
        }
        continue;
      }
      break;
    }
    v44 = v507;
    v46 = v525;
    v64 = (_DWORD *)(*((_QWORD *)&v38 + 1) + 4LL * srca);
    v34 = v532;
LABEL_64:
    v46 = (const __m128i *)((char *)v46 + 4);
    *v64 = v63;
    *(_DWORD *)(v504 + 4 * v63) = v59;
    if ( v44 != v46 )
    {
      v45 = v46->m128i_i32[0];
      v49 = (__int64)v567;
      v50 = (unsigned int)*(v567 - 1);
      v47 = (unsigned __int32)v46->m128i_i32[0] >> 5;
      if ( v47 < (unsigned int)v50 )
        continue;
      v48 = v47 + 1;
      goto LABEL_31;
    }
    break;
  }
LABEL_87:
  v93 = v567;
  v94 = (unsigned int)*(v567 - 1);
  while ( 2 )
  {
    if ( &v567[v94] != v93 )
    {
      if ( !*v93++ )
        continue;
      v96 = *(_DWORD *)(*((_QWORD *)&v38 + 1) + 4LL);
      v644 = nullptr;
      v611 = v96;
      v97 = sub_305D40(*(_DWORD **)a2, *(_DWORD *)(a2 + 8), v96) + 4;
      v98 = *v97;
      v652 = v97;
      if ( v98 )
      {
        v99 = *(_DWORD *)(v98 - 4);
        LODWORD(v653) = 0;
        v100 = 32 * v99;
        HIDWORD(v653) = v100;
      }
      else
      {
        v100 = 0;
        v653 = 0;
      }
      sub_313A20(&v652, *(double *)si128.m128_u64);
      v101 = v653;
      v649 = v100;
      si128.m128_u64[0] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v100), 224).m128i_u64[0];
      v647 = v97;
      v652 = v97;
      v653 = si128.m128_u64[0];
      sub_313A20(&v652, *(double *)si128.m128_u64);
      v102 = v653;
      if ( (_DWORD)v653 == v101 )
      {
        srcb = nullptr;
        v243 = v611 >> 5;
LABEL_684:
        v245 = v243 + 1;
        v242 = sub_186B270(0x10u) + 8;
        v244 = 0;
        *(_QWORD *)(v242 - 8) = 2;
        v531 = (_BYTE *)v242;
        v644 = (_BYTE *)v242;
        goto LABEL_362;
      }
      srcb = nullptr;
      while ( 1 )
      {
        v103 = v101 >> 5;
        if ( (unsigned int)v103 < (unsigned int)v94 && (v567[v103] & (1 << v101)) != 0 )
        {
          if ( !srcb || (v104 = *(srcb - 1), (_DWORD)v104 == *(srcb - 2)) )
          {
            v645 = srcb;
            sub_2FD3F0(&v645);
            srcb = v645;
            v104 = *(v645 - 1);
          }
          srcb[v104] = v101;
          ++*(srcb - 1);
        }
        v648 = v101 + 1;
        sub_313A20(&v647, *(double *)si128.m128_u64);
        v101 = v648;
        if ( v648 == v102 )
          break;
        LODWORD(v94) = *(v567 - 1);
      }
      if ( !srcb || (v105 = *(srcb - 1), v106 = (int *)&srcb[v105], &srcb[v105] == srcb) )
      {
        v531 = v644;
        goto LABEL_267;
      }
      _BitScanReverse64(&v107, (v105 * 4) >> 2);
      sub_306610(srcb, (int *)&srcb[v105], 2LL * (int)v107, a2);
      v108 = (int *)(srcb + 1);
      if ( (unsigned __int64)v105 > 16 )
      {
        v109 = (int *)(srcb + 16);
        v110 = (_QWORD *)a2;
        while ( 1 )
        {
          while ( 1 )
          {
            v112 = *srcb;
            v509 = *v108;
            v113 = sub_306410((__int64)v110, *v108, *srcb);
            v111 = v509;
            if ( !v113 )
              break;
            if ( (char *)v108 - (char *)srcb <= 4 )
            {
              if ( (char *)v108 - (char *)srcb == 4 )
                *v108 = v112;
            }
            else
            {
              memmove(srcb + 1, srcb, (char *)v108 - (char *)srcb);
              v111 = v509;
            }
            ++v108;
            *srcb = v111;
            if ( v109 == v108 )
              goto LABEL_148;
          }
          v549 = v109;
          v114 = v110;
          v569 = v108;
          v584 = v106;
          v115 = *v110;
          v116 = v509;
          v117 = v108;
          while ( 2 )
          {
            v118 = *((unsigned int *)v114 + 2);
            v119 = *(v117 - 1);
            v120 = v118 - 1;
            v121 = 24LL * (((_DWORD)v118 - 1) & (unsigned int)v116);
            v122 = 24 * v118;
            v123 = v115 + v121;
            v124 = v115 + 24 * v118;
            if ( v121 != 24 * v118 )
            {
              v125 = v115 + v121;
              do
              {
                v126 = *(_DWORD *)(v125 + 4);
                if ( v126 == 2 )
                {
                  if ( v116 == *(_DWORD *)v125 && v116 == *(_DWORD *)(v125 + 8) )
                  {
                    v127 = *(_QWORD *)(v125 + 16);
                    if ( !v127 )
                      goto LABEL_183;
                    goto LABEL_122;
                  }
                }
                else if ( !v126 )
                {
                  goto LABEL_787;
                }
                v125 += 24;
              }
              while ( v124 != v125 );
            }
            if ( v115 == v123 )
              goto LABEL_787;
            v176 = v115;
            while ( 1 )
            {
              v177 = *(_DWORD *)(v176 + 4);
              if ( v177 != 2 )
              {
                if ( !v177 )
                  goto LABEL_787;
                goto LABEL_178;
              }
              if ( v116 == *(_DWORD *)v176 && v116 == *(_DWORD *)(v176 + 8) )
                break;
LABEL_178:
              v176 += 24;
              if ( v123 == v176 )
LABEL_787:
                BUG();
            }
            v127 = *(_QWORD *)(v176 + 16);
            if ( !v127 )
            {
LABEL_183:
              v128 = 0;
              goto LABEL_126;
            }
LABEL_122:
            v128 = *(_DWORD *)(v127 - 4);
            if ( v128 )
            {
              v526 = v120;
              v129 = v128;
              v128 = 0;
              v533 = v117;
              v130 = v127 + 4 * v129;
              v590 = v114;
              v599 = v122;
              v510 = v116;
              v131 = v127;
              v132 = v124;
              v133 = *(v117 - 1);
              do
              {
                v131 += 4;
                v128 += __popcountdi2();
              }
              while ( v130 != v131 );
              v116 = v510;
              v120 = v526;
              v119 = v133;
              v124 = v132;
              v117 = v533;
              v114 = v590;
              v122 = v599;
            }
LABEL_126:
            v134 = 24LL * (v119 & v120);
            v135 = v115 + v134;
            if ( v122 != v134 )
            {
              v136 = v115 + v134;
              do
              {
                v137 = *(_DWORD *)(v136 + 4);
                if ( v137 == 2 )
                {
                  if ( v119 == *(_DWORD *)v136 && v119 == *(_DWORD *)(v136 + 8) )
                  {
                    v138 = *(_QWORD *)(v136 + 16);
                    if ( !v138 )
                      goto LABEL_147;
                    goto LABEL_134;
                  }
                }
                else if ( !v137 )
                {
                  goto LABEL_787;
                }
                v136 += 24;
              }
              while ( v124 != v136 );
            }
            if ( v115 == v135 )
              goto LABEL_787;
            v144 = v115;
            while ( 2 )
            {
              v145 = *(_DWORD *)(v144 + 4);
              if ( v145 != 2 )
              {
                if ( !v145 )
                  goto LABEL_787;
LABEL_142:
                v144 += 24;
                if ( v135 == v144 )
                  goto LABEL_787;
                continue;
              }
              break;
            }
            if ( v119 != *(_DWORD *)v144 || v119 != *(_DWORD *)(v144 + 8) )
              goto LABEL_142;
            v138 = *(_QWORD *)(v144 + 16);
            if ( !v138 )
              break;
LABEL_134:
            v139 = *(unsigned int *)(v138 - 4);
            if ( (_DWORD)v139 )
            {
              v527 = v117;
              v140 = v138 + 4 * v139;
              v141 = 0;
              v534 = v114;
              v511 = v116;
              v142 = v138;
              v143 = v119;
              do
              {
                v142 += 4;
                v141 += __popcountdi2();
              }
              while ( v142 != v140 );
              v116 = v511;
              v117 = v527;
              v114 = v534;
              if ( v128 < v141 )
              {
                *v527 = v143;
                v117 = v527 - 1;
                continue;
              }
            }
            break;
          }
LABEL_147:
          v109 = v549;
          *v117 = v116;
          v106 = v584;
          v110 = v114;
          v108 = v569 + 1;
          if ( v549 == v569 + 1 )
          {
LABEL_148:
            v146 = v106;
            v147 = v109;
            v148 = *(_QWORD *)a2;
            v149 = a2;
            while ( 1 )
            {
              v591 = v146;
              v150 = *v147;
              v585 = v147;
              v151 = v147;
              v152 = v148;
              while ( 2 )
              {
                v153 = *(unsigned int *)(v149 + 8);
                v154 = *(v151 - 1);
                v155 = v153 - 1;
                v156 = 24 * v153;
                v157 = v152 + 24 * v153;
                v158 = 24LL * (((_DWORD)v153 - 1) & v150);
                v159 = v152 + v158;
                if ( v158 != 24 * v153 )
                {
                  v160 = v152 + v158;
                  do
                  {
                    v161 = *(_DWORD *)(v160 + 4);
                    if ( v161 == 2 )
                    {
                      if ( v150 == *(_DWORD *)v160 && v150 == *(_DWORD *)(v160 + 8) )
                      {
                        v162 = *(_QWORD *)(v160 + 16);
                        if ( !v162 )
                          goto LABEL_722;
                        goto LABEL_158;
                      }
                    }
                    else if ( !v161 )
                    {
                      goto LABEL_793;
                    }
                    v160 += 24;
                  }
                  while ( v157 != v160 );
                }
                if ( v152 == v159 )
                  goto LABEL_793;
                v483 = v152;
                while ( 1 )
                {
                  v484 = *(_DWORD *)(v483 + 4);
                  if ( v484 != 2 )
                  {
                    if ( !v484 )
                      goto LABEL_793;
                    goto LABEL_717;
                  }
                  if ( v150 == *(_DWORD *)v483 && v150 == *(_DWORD *)(v483 + 8) )
                    break;
LABEL_717:
                  v483 += 24;
                  if ( v159 == v483 )
LABEL_793:
                    BUG();
                }
                v162 = *(_QWORD *)(v483 + 16);
                if ( !v162 )
                {
LABEL_722:
                  v163 = 0;
                  goto LABEL_162;
                }
LABEL_158:
                v163 = *(_DWORD *)(v162 - 4);
                if ( v163 )
                {
                  v164 = v163;
                  v512 = v155;
                  v163 = 0;
                  v550 = v149;
                  v165 = v162 + 4 * v164;
                  v570 = v156;
                  v528 = v157;
                  v166 = v162;
                  do
                  {
                    v166 += 4;
                    v163 += __popcountdi2();
                  }
                  while ( v165 != v166 );
                  v155 = v512;
                  v157 = v528;
                  v149 = v550;
                  v156 = v570;
                }
LABEL_162:
                v167 = 24LL * (v154 & v155);
                v168 = v152 + v167;
                if ( v156 != v167 )
                {
                  v169 = v152 + v167;
                  do
                  {
                    v170 = *(_DWORD *)(v169 + 4);
                    if ( v170 == 2 )
                    {
                      if ( v154 == *(_DWORD *)v169 && v154 == *(_DWORD *)(v169 + 8) )
                      {
                        v171 = *(_QWORD *)(v169 + 16);
                        if ( !v171 )
                          goto LABEL_712;
                        goto LABEL_170;
                      }
                    }
                    else if ( !v170 )
                    {
                      goto LABEL_793;
                    }
                    v169 += 24;
                  }
                  while ( v157 != v169 );
                }
                if ( v152 == v168 )
                  goto LABEL_793;
                v481 = v152;
                while ( 2 )
                {
                  v482 = *(_DWORD *)(v481 + 4);
                  if ( v482 != 2 )
                  {
                    if ( !v482 )
                      goto LABEL_793;
LABEL_707:
                    v481 += 24;
                    if ( v168 == v481 )
                      goto LABEL_793;
                    continue;
                  }
                  break;
                }
                if ( v154 != *(_DWORD *)v481 || v154 != *(_DWORD *)(v481 + 8) )
                  goto LABEL_707;
                v171 = *(_QWORD *)(v481 + 16);
                if ( !v171 )
                  break;
LABEL_170:
                v172 = *(unsigned int *)(v171 - 4);
                if ( (_DWORD)v172 )
                {
                  v173 = 0;
                  v535 = v149;
                  v513 = v152;
                  v174 = v171;
                  v175 = v171 + 4 * v172;
                  do
                  {
                    v174 += 4;
                    v173 += __popcountdi2();
                  }
                  while ( v175 != v174 );
                  v152 = v513;
                  v149 = v535;
                  if ( v163 < v173 )
                  {
                    *v151-- = v154;
                    continue;
                  }
                }
                break;
              }
LABEL_712:
              v148 = v152;
              v146 = v591;
              *v151 = v150;
              v147 = v585 + 1;
              if ( v585 + 1 == v591 )
              {
LABEL_226:
                v531 = v644;
                v516 = &srcb[*(srcb - 1)];
                if ( v516 == srcb )
                  goto LABEL_267;
                v212 = srcb;
                while ( 2 )
                {
                  v213 = *v212;
                  if ( v504 )
                    v214 = *(_DWORD *)(v504 - 4);
                  else
                    v214 = 0;
                  if ( (int)v213 >= v214 )
                  {
                    if ( !v531 )
                      goto LABEL_266;
                    v215 = *((_DWORD *)v531 - 1);
                    if ( !v215 )
                      goto LABEL_266;
                    v216 = 0;
                    v217 = 32 * v215;
                    if ( (*v531 & 1) == 0 )
                    {
                      if ( !v217 )
                        goto LABEL_266;
                      goto LABEL_235;
                    }
LABEL_618:
                    v221 = 0;
LABEL_243:
                    HIDWORD(v653) = v217;
                    v652 = &v644;
                    if ( v221 == v217 )
                      goto LABEL_256;
                    v223 = *(unsigned int *)(a2 + 8);
                    v224 = *(_QWORD *)a2;
                    v225 = 24 * v223;
                    v226 = *(_QWORD *)a2 + 24 * v223;
                    v227 = 24LL * (v213 & ((_DWORD)v223 - 1));
                    v228 = *(_QWORD *)a2 + v227;
                    while ( 2 )
                    {
                      if ( v227 == v225 )
                      {
LABEL_546:
                        if ( v224 == v228 )
                          goto LABEL_802;
                        v229 = v224;
                        while ( 1 )
                        {
                          v424 = *(_DWORD *)(v229 + 4);
                          if ( v424 == 2 )
                          {
                            if ( v213 == *(_DWORD *)v229 && v213 == *(_DWORD *)(v229 + 8) )
                              goto LABEL_252;
                          }
                          else if ( !v424 )
                          {
                            goto LABEL_802;
                          }
                          v229 += 24;
                          if ( v229 == v228 )
LABEL_802:
                            BUG();
                        }
                      }
                      v229 = v228;
                      while ( 2 )
                      {
                        v230 = *(_DWORD *)(v229 + 4);
                        if ( v230 != 2 )
                        {
                          if ( !v230 )
                            goto LABEL_802;
LABEL_248:
                          v229 += 24;
                          if ( v229 == v226 )
                            goto LABEL_546;
                          continue;
                        }
                        break;
                      }
                      if ( v213 != *(_DWORD *)v229 || v213 != *(_DWORD *)(v229 + 8) )
                        goto LABEL_248;
LABEL_252:
                      v231 = *(_QWORD *)(v229 + 16);
                      v586 = v225;
                      v572 = v227;
                      v232 = v221 >> 5;
                      v552 = v224;
                      if ( v231 && v232 < *(_DWORD *)(v231 - 4) && (*(_DWORD *)(v231 + 4LL * v232) & (1 << v221)) != 0 )
                      {
                        LODWORD(v653) = v221 + 1;
                        sub_313A20(&v652, *(double *)si128.m128_u64);
                        v224 = v552;
                        v221 = v653;
                        v227 = v572;
                        v225 = v586;
                        if ( (_DWORD)v653 == v217 )
                          goto LABEL_256;
                        continue;
                      }
                      break;
                    }
LABEL_266:
                    if ( v516 != ++v212 )
                      continue;
LABEL_267:
                    v242 = (__int64)v531;
                    v243 = v611 >> 5;
                    if ( !v531 )
                      goto LABEL_684;
                    v244 = *((_DWORD *)v531 - 1);
                    v245 = v243 + 1;
                    if ( (unsigned int)v243 < v244 )
                      goto LABEL_269;
LABEL_362:
                    while ( 1 )
                    {
                      v318 = *(_DWORD *)(v242 - 8);
                      if ( v318 >= v245 )
                        break;
                      v315 = (3 * v318 + 1) >> 1;
                      v316 = 4 * v315 + 8;
                      if ( 4 * v318 + 8 >= v316 || v318 >= v315 )
                      {
                        v14 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0((__int64 *)&v652, "Overflow encountered when expanding vector");
                        *v14 = (char *)off_1C63128;
                        sub_2333C0(v14 + 1, &v652);
                        sub_233E40((__int64)&v652);
                        __cxa_throw(
                          v14,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v317 = (unsigned int *)sub_186B300(v531 - 8, v316);
                      *v317 = v315;
                      v242 = (__int64)(v317 + 2);
                      v531 = (_BYTE *)v242;
                      v644 = (_BYTE *)v242;
                    }
                    v319 = 4LL * v244;
                    v320 = 4LL * v245;
                    *((_DWORD *)v531 - 1) = v245;
                    if ( v319 == v320 )
                    {
LABEL_269:
                      *(_DWORD *)&v531[4 * v243] |= 1 << v611;
                    }
                    else
                    {
                      memset(&v531[v319], 0, v320 - v319);
                      *(_DWORD *)&v531[4 * v243] |= 1 << v611;
                    }
                    v652 = &v644;
                    v246 = *((_DWORD *)v531 - 1);
                    LODWORD(v653) = 0;
                    HIDWORD(v653) = 32 * v246;
                    v517 = 32 * v246;
                    v247 = _mm_shuffle_epi32(_mm_cvtsi32_si128(32 * v246), 224).m128i_u64[0];
                    sub_313A20(&v652, *(double *)si128.m128_u64);
                    v248 = v653;
                    v652 = &v644;
                    v653 = v247;
                    sub_313A20(&v652, *(double *)si128.m128_u64);
                    v642 = v653;
                    if ( (_DWORD)v653 == v248 )
                      goto LABEL_383;
                    v249 = v517;
                    v250 = v531;
                    v251 = (__int64 *)v38;
                    v252 = a2;
                    v253 = *(_QWORD *)a2;
                    while ( 2 )
                    {
                      if ( v248 >> 5 < *(v567 - 1) )
                        v567[v248 >> 5] &= ~(1 << v248);
                      v254 = *(unsigned int *)(v252 + 8);
                      v255 = 24LL * (v248 & ((_DWORD)v254 - 1));
                      v256 = v253 + v255;
                      if ( v255 == 24 * v254 )
                      {
LABEL_554:
                        if ( v256 == v253 )
                          goto LABEL_800;
                        v257 = v253;
                        while ( 1 )
                        {
                          v425 = *(_DWORD *)(v257 + 4);
                          if ( v425 == 2 )
                          {
                            if ( *(_DWORD *)v257 == v248 && *(_DWORD *)(v257 + 8) == v248 )
                              goto LABEL_281;
                          }
                          else if ( !v425 )
                          {
                            goto LABEL_800;
                          }
                          v257 += 24;
                          if ( v256 == v257 )
LABEL_800:
                            BUG();
                        }
                      }
                      v257 = v253 + v255;
                      while ( 2 )
                      {
                        v258 = *(_DWORD *)(v257 + 4);
                        if ( v258 != 2 )
                        {
                          if ( !v258 )
                            goto LABEL_800;
LABEL_277:
                          v257 += 24;
                          if ( v253 + 24 * v254 == v257 )
                            goto LABEL_554;
                          continue;
                        }
                        break;
                      }
                      if ( *(_DWORD *)v257 != v248 || *(_DWORD *)(v257 + 8) != v248 )
                        goto LABEL_277;
LABEL_281:
                      v259 = *(_QWORD *)(v257 + 16);
                      v573 = v252;
                      v652 = (_QWORD *)(v257 + 16);
                      v553 = v251;
                      v544 = v250;
                      v612 = v254 - 1;
                      v537 = v254;
                      if ( v259 )
                      {
                        v260 = *(_DWORD *)(v259 - 4);
                        LODWORD(v653) = 0;
                        v261 = 32 * v260;
                        HIDWORD(v653) = v261;
                      }
                      else
                      {
                        v261 = 0;
                        v653 = 0;
                      }
                      sub_313A20(&v652, *(double *)si128.m128_u64);
                      v262 = v653;
                      v263 = v537;
                      v251 = v553;
                      v252 = v573;
                      v605 = ~(1 << v248);
                      if ( v261 == (_DWORD)v653 )
                        goto LABEL_368;
                      v264 = v612;
                      v265 = 4LL * (v248 >> 5);
                      v266 = v248 >> 5;
                      v267 = v248;
                      v268 = v249;
                      v269 = v573;
                      v270 = v261;
                      while ( 2 )
                      {
                        v271 = 24 * v263;
                        v272 = 24LL * (v262 & v264);
                        v273 = v253 + v271;
                        v274 = v253 + v272;
                        if ( v272 == v271 )
                        {
LABEL_464:
                          if ( v274 == v253 )
                            goto LABEL_797;
                          v275 = v253;
                          while ( 1 )
                          {
                            v390 = *(_DWORD *)(v275 + 4);
                            if ( v390 == 2 )
                            {
                              if ( v262 == *(_DWORD *)v275 && v262 == *(_DWORD *)(v275 + 8) )
                                goto LABEL_292;
                            }
                            else if ( !v390 )
                            {
                              goto LABEL_797;
                            }
                            v275 += 24;
                            if ( v274 == v275 )
LABEL_797:
                              BUG();
                          }
                        }
                        v275 = v253 + v272;
                        while ( 2 )
                        {
                          v276 = *(_DWORD *)(v275 + 4);
                          if ( v276 != 2 )
                          {
                            if ( !v276 )
                              goto LABEL_797;
LABEL_288:
                            v275 += 24;
                            if ( v273 == v275 )
                              goto LABEL_464;
                            continue;
                          }
                          break;
                        }
                        if ( v262 != *(_DWORD *)v275 || v262 != *(_DWORD *)(v275 + 8) )
                          goto LABEL_288;
LABEL_292:
                        v277 = *(_QWORD *)(v275 + 16);
                        if ( v277 && v266 < *(_DWORD *)(v277 - 4) )
                          *(_DWORD *)(v277 + v265) &= v605;
                        if ( v504 )
                          v278 = *(_DWORD *)(v504 - 4);
                        else
                          v278 = 0;
                        if ( (int)v262 >= v278 )
                          goto LABEL_329;
                        v279 = *(_DWORD *)(v504 + 4LL * v262);
                        if ( !v279 )
                          goto LABEL_329;
                        v280 = v279 >> 1;
                        v281 = *(unsigned int *)(*((_QWORD *)&v38 + 1) + 4LL * (unsigned int)v279);
                        if ( !(v279 >> 1) )
                        {
LABEL_327:
                          v308 = 4;
                          v279 = 1;
                          goto LABEL_328;
                        }
                        v623 = v265;
                        v282 = *v251;
                        v626 = v262;
                        v631 = v259;
                        v640 = v268;
                        v632 = v270;
                        v634 = v253;
                        v636 = v269;
                        v620 = v266;
                        v283 = *((_QWORD *)&v38 + 1);
                        v628 = v267;
                        v284 = v504;
                        while ( 2 )
                        {
                          v285 = *((unsigned int *)v251 + 2);
                          v286 = *(unsigned int *)(v283 + 4LL * (unsigned int)v280);
                          v287 = v285 - 1;
                          v288 = 24 * v285;
                          v289 = v282 + v288;
                          v290 = 24LL * ((unsigned int)v281 & v287);
                          v291 = v282 + v290;
                          if ( v290 != v288 )
                          {
                            v292 = v282 + v290;
                            do
                            {
                              v293 = *(_DWORD *)(v292 + 4);
                              if ( v293 == 2 )
                              {
                                if ( *(_DWORD *)v292 == (_DWORD)v281 && *(_DWORD *)(v292 + 8) == (_DWORD)v281 )
                                {
                                  v294 = *(_QWORD *)(v292 + 16);
                                  if ( !v294 )
                                    goto LABEL_463;
                                  goto LABEL_309;
                                }
                              }
                              else if ( !v293 )
                              {
                                goto LABEL_796;
                              }
                              v292 += 24;
                            }
                            while ( v289 != v292 );
                          }
                          if ( v282 == v291 )
                            goto LABEL_796;
                          v388 = v282;
                          while ( 2 )
                          {
                            v389 = *(_DWORD *)(v388 + 4);
                            if ( v389 != 2 )
                            {
                              if ( !v389 )
                                goto LABEL_796;
LABEL_458:
                              v388 += 24;
                              if ( v291 == v388 )
LABEL_796:
                                BUG();
                              continue;
                            }
                            break;
                          }
                          if ( *(_DWORD *)v388 != (_DWORD)v281 || *(_DWORD *)(v388 + 8) != (_DWORD)v281 )
                            goto LABEL_458;
                          v294 = *(_QWORD *)(v388 + 16);
                          if ( !v294 )
                          {
LABEL_463:
                            LODWORD(v295) = 0;
                            goto LABEL_313;
                          }
LABEL_309:
                          v295 = *(unsigned int *)(v294 - 4);
                          if ( (_DWORD)v295 )
                          {
                            v538 = v279;
                            v296 = v294 + 4 * v295;
                            LODWORD(v295) = 0;
                            v554 = v287;
                            v574 = v284;
                            v587 = v251;
                            v593 = v283;
                            v600 = v288;
                            v613 = v281;
                            v297 = v294;
                            do
                            {
                              v297 += 4;
                              LODWORD(v295) = __popcountdi2() + v295;
                            }
                            while ( v296 != v297 );
                            v279 = v538;
                            v281 = v613;
                            v287 = v554;
                            v284 = v574;
                            v251 = v587;
                            v283 = v593;
                            v288 = v600;
                          }
LABEL_313:
                          v298 = 24LL * ((unsigned int)v286 & v287);
                          v299 = v282 + v298;
                          if ( v288 != v298 )
                          {
                            v300 = v282 + v298;
                            do
                            {
                              v301 = *(_DWORD *)(v300 + 4);
                              if ( v301 == 2 )
                              {
                                if ( (_DWORD)v286 == *(_DWORD *)v300 && (_DWORD)v286 == *(_DWORD *)(v300 + 8) )
                                {
                                  v302 = *(_QWORD *)(v300 + 16);
                                  if ( !v302 )
                                    goto LABEL_454;
                                  goto LABEL_321;
                                }
                              }
                              else if ( !v301 )
                              {
                                goto LABEL_796;
                              }
                              v300 += 24;
                            }
                            while ( v289 != v300 );
                          }
                          if ( v282 == v299 )
                            goto LABEL_796;
                          v386 = v282;
                          while ( 2 )
                          {
                            v387 = *(_DWORD *)(v386 + 4);
                            if ( v387 != 2 )
                            {
                              if ( !v387 )
                                goto LABEL_796;
LABEL_449:
                              v386 += 24;
                              if ( v299 == v386 )
                                goto LABEL_796;
                              continue;
                            }
                            break;
                          }
                          if ( (_DWORD)v286 != *(_DWORD *)v386 || (_DWORD)v286 != *(_DWORD *)(v386 + 8) )
                            goto LABEL_449;
                          v302 = *(_QWORD *)(v386 + 16);
                          if ( !v302 )
                          {
LABEL_454:
                            v266 = v620;
                            v265 = v623;
                            v262 = v626;
                            v267 = v628;
                            v308 = 4LL * (unsigned int)v279;
                            v259 = v631;
                            v268 = v640;
                            v270 = v632;
                            v253 = v634;
                            v269 = v636;
                            goto LABEL_328;
                          }
LABEL_321:
                          v303 = *(unsigned int *)(v302 - 4);
                          if ( !(_DWORD)v303 )
                            goto LABEL_454;
                          v539 = v279;
                          v304 = v302 + 4 * v303;
                          v305 = 0;
                          v555 = v284;
                          v575 = v251;
                          v588 = v283;
                          v614 = v281;
                          v306 = v302;
                          v307 = v280;
                          do
                          {
                            v306 += 4;
                            v305 += __popcountdi2();
                          }
                          while ( v304 != v306 );
                          v283 = v588;
                          v281 = v614;
                          v279 = v539;
                          v308 = 4LL * v539;
                          v284 = v555;
                          v251 = v575;
                          if ( (unsigned int)v295 < v305 )
                          {
                            *(_DWORD *)(v588 + 4LL * v539) = v286;
                            v280 >>= 1;
                            *(_DWORD *)(v555 + 4 * v286) = v539;
                            v279 = v307;
                            if ( !(v307 >> 1) )
                            {
                              v266 = v620;
                              v265 = v623;
                              v262 = v626;
                              v267 = v628;
                              v259 = v631;
                              v268 = v640;
                              v270 = v632;
                              v253 = v634;
                              v269 = v636;
                              goto LABEL_327;
                            }
                            continue;
                          }
                          break;
                        }
                        v266 = v620;
                        v265 = v623;
                        v262 = v626;
                        v267 = v628;
                        v259 = v631;
                        v268 = v640;
                        v270 = v632;
                        v253 = v634;
                        v269 = v636;
LABEL_328:
                        *(_DWORD *)(*((_QWORD *)&v38 + 1) + v308) = v281;
                        *(_DWORD *)(v504 + 4 * v281) = v279;
LABEL_329:
                        if ( ++v262 != v270 )
                        {
                          if ( v259 )
                          {
                            while ( 1 )
                            {
                              v309 = v262 >> 5;
                              if ( v262 >> 5 < *(_DWORD *)(v259 - 4)
                                && (*(_DWORD *)(v259 + 4LL * v309) & (1 << (v262 & 0x1F))) != 0 )
                              {
                                break;
                              }
                              if ( (v262 & 0x1F) == 0 )
                                break;
                              if ( v270 == ++v262 )
                              {
                                v309 = v270 >> 5;
                                if ( v270 >> 5 >= *(_DWORD *)(v259 - 4) )
                                  goto LABEL_367;
                                goto LABEL_440;
                              }
                            }
                            if ( v309 < *(_DWORD *)(v259 - 4) )
                              goto LABEL_440;
                            if ( v270 != v262 )
                              goto LABEL_337;
                          }
                          else
                          {
                            while ( (v262 & 0x1F) != 0 )
                            {
                              if ( ++v262 == v270 )
                                goto LABEL_367;
                            }
                            if ( v262 != v270 )
                            {
                              v309 = v262 >> 5;
                              v310 = *(_DWORD *)(4LL * (v262 >> 5));
                              goto LABEL_338;
                            }
                          }
                          break;
                        }
                        if ( !v259 )
                          break;
                        v309 = v262 >> 5;
                        if ( v262 >> 5 >= *(_DWORD *)(v259 - 4) )
                          break;
LABEL_440:
                        v310 = *(_DWORD *)(v259 + 4LL * v309);
                        if ( (v310 & (1 << v262)) != 0 )
                        {
LABEL_345:
                          if ( v262 != v270 )
                          {
                            v263 = *(unsigned int *)(v269 + 8);
                            v264 = v263 - 1;
                            continue;
                          }
                        }
                        else
                        {
                          if ( v262 == v270 )
                            break;
LABEL_338:
                          while ( !v310 )
                          {
                            v262 += 32;
                            ++v309;
                            if ( v262 == v270 )
                              goto LABEL_367;
LABEL_337:
                            v310 = *(_DWORD *)(v259 + 4LL * v309);
                          }
                          if ( v262 != v270 )
                          {
                            v311 = v262 >> 5;
                            if ( !v259 )
                            {
                              while ( v270 != ++v262 )
                              {
                                if ( (v262 & 0x1F) == 0 )
                                  goto LABEL_345;
                              }
                              break;
                            }
                            if ( (unsigned int)v311 < *(_DWORD *)(v259 - 4) )
                            {
                              if ( (*(_DWORD *)(v259 + 4 * v311) & (1 << v262)) != 0 )
                                goto LABEL_343;
                              if ( ++v262 != v270 )
                                goto LABEL_343;
                              break;
                            }
                            if ( v270 == ++v262 )
                              break;
LABEL_343:
                            while ( 1 )
                            {
                              v312 = v262 >> 5;
                              if ( (unsigned int)v312 < *(_DWORD *)(v259 - 4)
                                && (*(_DWORD *)(v259 + 4 * v312) & (1 << (v262 & 0x1F))) != 0 )
                              {
                                goto LABEL_345;
                              }
                              if ( (v262 & 0x1F) == 0 )
                                goto LABEL_345;
                              if ( ++v262 == v270 )
                                goto LABEL_367;
                            }
                          }
                        }
                        break;
                      }
LABEL_367:
                      v250 = v544;
                      v252 = v269;
                      v249 = v268;
                      v248 = v267;
LABEL_368:
                      if ( ++v248 == v249 )
                      {
                        v321 = v248 >> 5;
                        if ( v248 >> 5 >= *((_DWORD *)v250 - 1) )
                          goto LABEL_382;
LABEL_493:
                        v322 = *(_DWORD *)&v250[4 * v321];
                        if ( (v322 & (1 << v248)) == 0 && v248 != v249 )
                        {
                          while ( !v322 )
                          {
                            v248 += 32;
                            ++v321;
                            if ( v248 == v249 )
                              goto LABEL_382;
LABEL_375:
                            v322 = *(_DWORD *)&v250[4 * v321];
                          }
                          if ( v248 != v249 )
                          {
                            v323 = v248 >> 5;
                            if ( (unsigned int)v323 < *((_DWORD *)v250 - 1) )
                            {
                              v248 += (*(_DWORD *)&v250[4 * v323] & (1 << v248)) == 0;
                              if ( v248 == v249 )
                                goto LABEL_382;
                            }
                            else if ( v249 == ++v248 )
                            {
                              goto LABEL_382;
                            }
                            do
                            {
                              v324 = v248 >> 5;
                              if ( (unsigned int)v324 < *((_DWORD *)v250 - 1)
                                && (*(_DWORD *)&v250[4 * v324] & (1 << (v248 & 0x1F))) != 0 )
                              {
                                break;
                              }
                              if ( (v248 & 0x1F) == 0 )
                                break;
                              ++v248;
                            }
                            while ( v249 != v248 );
                          }
                        }
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v321 = v248 >> 5;
                          if ( v248 >> 5 < *((_DWORD *)v250 - 1)
                            && (*(_DWORD *)&v250[4 * v321] & (1 << (v248 & 0x1F))) != 0 )
                          {
                            break;
                          }
                          if ( (v248 & 0x1F) == 0 )
                            break;
                          if ( v249 == ++v248 )
                          {
                            v321 = v249 >> 5;
                            if ( v249 >> 5 >= *((_DWORD *)v250 - 1) )
                              goto LABEL_382;
                            goto LABEL_493;
                          }
                        }
                        if ( v321 < *((_DWORD *)v250 - 1) )
                          goto LABEL_493;
                        if ( v249 != v248 )
                          goto LABEL_375;
                      }
LABEL_382:
                      if ( v248 != v642 )
                        continue;
                      break;
                    }
LABEL_383:
                    v325 = v531;
                    v652 = &v644;
                    v326 = *((_DWORD *)v531 - 1);
                    LODWORD(v653) = 0;
                    v589 = 32 * v326;
                    HIDWORD(v653) = 32 * v326;
                    sub_313A20(&v652, *(double *)si128.m128_u64);
                    v327 = v653;
                    v652 = &v644;
                    v653 = _mm_shuffle_epi32(_mm_cvtsi32_si128(32 * v326), 224).m128i_u64[0];
                    sub_313A20(&v652, *(double *)si128.m128_u64);
                    v643 = v653;
                    if ( v327 == (_DWORD)v653 )
                      goto LABEL_583;
                    v328 = v327;
                    while ( 2 )
                    {
                      v329 = (int *)(v504 + 4LL * v328);
                      v330 = *v329;
                      v331 = (unsigned int)(*(_DWORD *)(*((_QWORD *)&v38 + 1) - 4LL) - 1);
                      if ( *v329 == (_DWORD)v331 )
                      {
                        *v329 = 0;
                        --*(_DWORD *)(*((_QWORD *)&v38 + 1) - 4LL);
                        goto LABEL_567;
                      }
                      v332 = *(_DWORD *)(*((_QWORD *)&v38 + 1) + 4 * v331);
                      v545 = (unsigned int *)(*((_QWORD *)&v38 + 1) + 4LL * (unsigned int)v330);
                      *v545 = v332;
                      *(_DWORD *)(v504 + 4LL * v332) = v330;
                      *v329 = 0;
                      v540 = *(_DWORD *)(*((_QWORD *)&v38 + 1) - 4LL) - 1;
                      *(_DWORD *)(*((_QWORD *)&v38 + 1) - 4LL) = v540;
                      if ( v330 >> 1 )
                      {
                        v518 = v330;
                        v333 = *(unsigned int *)(*((_QWORD *)&v38 + 1) + 4LL * (unsigned int)(v330 >> 1));
                        v334 = *(_QWORD *)v38;
                        v335 = *(_DWORD *)(v38 + 8);
                        v336 = sub_305D40(*(_DWORD **)v38, v335, v332);
                        v330 = v518;
                        v338 = *((_QWORD *)v336 + 2);
                        if ( v338 )
                        {
                          v339 = *(_DWORD *)(v338 - 4);
                          if ( v339 )
                          {
                            v615 = v337;
                            v556 = v333;
                            v340 = *((_QWORD *)v336 + 2);
                            v576 = v328;
                            v341 = v338 + 4LL * v339;
                            v342 = 0;
                            do
                            {
                              v340 += 4;
                              v342 += __popcountdi2();
                            }
                            while ( v341 != v340 );
                            v339 = v342;
                            v330 = v518;
                            v333 = v556;
                            v337 = v615;
                            v328 = v576;
                          }
                        }
                        else
                        {
                          v339 = 0;
                        }
                        v343 = v335 - 1;
                        v344 = v335;
                        v345 = 24LL * ((unsigned int)v333 & (v335 - 1));
                        v346 = 24LL * v335;
                        v347 = v334 + v345;
                        v348 = v334 + v346;
                        if ( v345 == v346 )
                        {
LABEL_607:
                          if ( v334 == v347 )
                            goto LABEL_798;
                          v349 = v334;
                          while ( 1 )
                          {
                            v436 = *(_DWORD *)(v349 + 4);
                            if ( v436 == 2 )
                            {
                              if ( (_DWORD)v333 == *(_DWORD *)v349 && (_DWORD)v333 == *(_DWORD *)(v349 + 8) )
                                goto LABEL_399;
                            }
                            else if ( !v436 )
                            {
                              goto LABEL_798;
                            }
                            v349 += 24;
                            if ( v347 == v349 )
LABEL_798:
                              BUG();
                          }
                        }
                        v349 = v334 + v345;
                        while ( 1 )
                        {
                          v350 = *(_DWORD *)(v349 + 4);
                          if ( v350 == 2 )
                          {
                            if ( (_DWORD)v333 == *(_DWORD *)v349 && (_DWORD)v333 == *(_DWORD *)(v349 + 8) )
                            {
LABEL_399:
                              v351 = *(_QWORD *)(v349 + 16);
                              if ( !v351 )
                                break;
                              v352 = *(unsigned int *)(v351 - 4);
                              if ( !(_DWORD)v352 )
                                break;
                              v519 = v330;
                              v353 = v351 + 4 * v352;
                              v354 = 0;
                              v616 = v337;
                              v557 = v339;
                              v594 = v343;
                              v577 = v328;
                              v355 = v351;
                              do
                              {
                                v355 += 4;
                                v354 += __popcountdi2();
                              }
                              while ( v355 != v353 );
                              v330 = v519;
                              v328 = v577;
                              v356 = v594;
                              if ( v557 >= v354 )
                                break;
                              v541 = v577;
                              v445 = v334;
                              v446 = *((_QWORD *)&v38 + 1);
                              v523 = v325;
                              v447 = v616;
                              v448 = *v545;
LABEL_639:
                              v449 = 24 * v344;
                              v450 = v445 + v449;
                              v451 = 24LL * ((unsigned int)v448 & v356);
                              v452 = v445 + v451;
                              if ( v451 != v449 )
                              {
                                v453 = v445 + v451;
                                do
                                {
                                  v454 = *(_DWORD *)(v453 + 4);
                                  if ( v454 == 2 )
                                  {
                                    if ( *(_DWORD *)v453 == (_DWORD)v448 && *(_DWORD *)(v453 + 8) == (_DWORD)v448 )
                                    {
                                      v455 = *(_QWORD *)(v453 + 16);
                                      if ( !v455 )
                                        goto LABEL_682;
                                      goto LABEL_647;
                                    }
                                  }
                                  else if ( !v454 )
                                  {
                                    goto LABEL_789;
                                  }
                                  v453 += 24;
                                }
                                while ( v450 != v453 );
                              }
                              if ( v445 == v452 )
                                goto LABEL_789;
                              v472 = v445;
                              while ( 1 )
                              {
                                v473 = *(_DWORD *)(v472 + 4);
                                if ( v473 == 2 )
                                {
                                  if ( *(_DWORD *)v472 == (_DWORD)v448 && *(_DWORD *)(v472 + 8) == (_DWORD)v448 )
                                  {
                                    v455 = *(_QWORD *)(v472 + 16);
                                    if ( !v455 )
                                    {
LABEL_682:
                                      v456 = 0;
                                      goto LABEL_651;
                                    }
LABEL_647:
                                    v456 = *(_DWORD *)(v455 - 4);
                                    if ( v456 )
                                    {
                                      v618 = v330;
                                      v457 = v456;
                                      v456 = 0;
                                      v458 = v455 + 4 * v457;
                                      v459 = v455;
                                      v560 = v446;
                                      v581 = v448;
                                      v604 = v356;
                                      do
                                      {
                                        v459 += 4;
                                        v456 += __popcountdi2();
                                      }
                                      while ( v458 != v459 );
                                      v330 = v618;
                                      v450 = v445 + v449;
                                      v333 = (unsigned int)v333;
                                      v446 = v560;
                                      v448 = v581;
                                      v356 = v604;
                                    }
LABEL_651:
                                    v460 = 24LL * ((unsigned int)v333 & v356);
                                    v461 = v445 + v460;
                                    if ( v449 != v460 )
                                    {
                                      v462 = v445 + v460;
                                      do
                                      {
                                        v463 = *(_DWORD *)(v462 + 4);
                                        if ( v463 == 2 )
                                        {
                                          if ( (_DWORD)v333 == *(_DWORD *)v462 && (_DWORD)v333 == *(_DWORD *)(v462 + 8) )
                                          {
                                            v464 = *(_QWORD *)(v462 + 16);
                                            if ( !v464 )
                                              goto LABEL_673;
                                            goto LABEL_659;
                                          }
                                        }
                                        else if ( !v463 )
                                        {
                                          goto LABEL_789;
                                        }
                                        v462 += 24;
                                      }
                                      while ( v450 != v462 );
                                    }
                                    if ( v445 == v461 )
                                      goto LABEL_789;
                                    v470 = v445;
                                    while ( 2 )
                                    {
                                      v471 = *(_DWORD *)(v470 + 4);
                                      if ( v471 != 2 )
                                      {
                                        if ( !v471 )
                                          goto LABEL_789;
LABEL_668:
                                        v470 += 24;
                                        if ( v461 == v470 )
                                          goto LABEL_789;
                                        continue;
                                      }
                                      break;
                                    }
                                    if ( (_DWORD)v333 != *(_DWORD *)v470 || (_DWORD)v333 != *(_DWORD *)(v470 + 8) )
                                      goto LABEL_668;
                                    v464 = *(_QWORD *)(v470 + 16);
                                    if ( !v464 )
                                    {
LABEL_673:
                                      v325 = v523;
                                      v328 = v541;
                                      v468 = 4LL * (unsigned int)v330;
                                      goto LABEL_689;
                                    }
LABEL_659:
                                    v465 = *(unsigned int *)(v464 - 4);
                                    if ( !(_DWORD)v465 )
                                      goto LABEL_673;
                                    v619 = v330;
                                    v466 = v464 + 4 * v465;
                                    v467 = 0;
                                    v561 = v446;
                                    v582 = v448;
                                    do
                                    {
                                      v464 += 4;
                                      v467 += __popcountdi2();
                                    }
                                    while ( v466 != v464 );
                                    v446 = v561;
                                    v448 = v582;
                                    v330 = v619;
                                    v468 = 4LL * v619;
                                    if ( v456 >= v467 )
                                    {
                                      v325 = v523;
                                      v328 = v541;
LABEL_689:
                                      *(_DWORD *)(*((_QWORD *)&v38 + 1) + v468) = v448;
                                      *(_DWORD *)(v504 + 4 * v448) = v330;
LABEL_567:
                                      v427 = v589;
                                      if ( ++v328 != v589 )
                                        goto LABEL_568;
                                      goto LABEL_605;
                                    }
                                    *(_DWORD *)(v561 + 4LL * v619) = v333;
                                    *(_DWORD *)(v504 + 4 * v333) = v619;
                                    v469 = v447 >> 1;
                                    if ( !(v447 >> 1) )
                                    {
                                      v325 = v523;
                                      v328 = v541;
                                      v468 = 4;
                                      v330 = 1;
                                      goto LABEL_689;
                                    }
                                    v330 = v447;
                                    v447 >>= 1;
                                    v333 = *(unsigned int *)(v561 + 4LL * v469);
                                    v344 = *(unsigned int *)(v38 + 8);
                                    v356 = v344 - 1;
                                    goto LABEL_639;
                                  }
                                }
                                else if ( !v473 )
                                {
                                  goto LABEL_789;
                                }
                                v472 += 24;
                                if ( v452 == v472 )
LABEL_789:
                                  BUG();
                              }
                            }
                          }
                          else if ( !v350 )
                          {
                            goto LABEL_798;
                          }
                          v349 += 24;
                          if ( v348 == v349 )
                            goto LABEL_607;
                        }
                      }
                      v357 = 2 * v330;
                      v358 = *v545;
                      if ( 2 * v330 >= v540 )
                        goto LABEL_691;
                      v617 = v330;
                      v637 = v328;
                      v359 = *((_QWORD *)&v38 + 1);
                      v360 = *(_QWORD *)v38;
                      v635 = v325;
                      v361 = *v545;
                      while ( 2 )
                      {
                        v558 = v357 + 1;
                        v362 = *(_DWORD *)(v359 + 4LL * v357);
                        v545 = (unsigned int *)(v359 + 4LL * v357);
                        v363 = v362;
                        v364 = *(unsigned int *)(v38 + 8);
                        v365 = v364 - 1;
                        v366 = 24 * v364;
                        v520 = v366;
                        v367 = v360 + v366;
                        if ( v540 <= (int)(v357 + 1) )
                        {
                          v368 = 24LL * (v365 & v362);
                          v369 = v360 + v368;
                          goto LABEL_408;
                        }
                        v395 = v366;
                        v580 = (unsigned int *)(v359 + 4LL * v558);
                        v396 = *v580;
                        v397 = v365 & *v580;
                        v368 = 24 * v397;
                        v398 = v360 + 24 * v397;
                        if ( 24 * v397 != v395 )
                        {
                          v399 = v360 + 24 * v397;
                          do
                          {
                            v400 = *(_DWORD *)(v399 + 4);
                            if ( v400 == 2 )
                            {
                              if ( v396 == *(_DWORD *)v399 && v396 == *(_DWORD *)(v399 + 8) )
                              {
                                v401 = *(_QWORD *)(v399 + 16);
                                if ( !v401 )
                                  goto LABEL_536;
                                goto LABEL_504;
                              }
                            }
                            else if ( !v400 )
                            {
                              goto LABEL_790;
                            }
                            v399 += 24;
                          }
                          while ( v399 != v367 );
                        }
                        if ( v398 == v360 )
                          goto LABEL_790;
                        v420 = v360;
                        while ( 2 )
                        {
                          v421 = *(_DWORD *)(v420 + 4);
                          if ( v421 != 2 )
                          {
                            if ( !v421 )
                              goto LABEL_790;
LABEL_531:
                            v420 += 24;
                            if ( v398 == v420 )
                              goto LABEL_790;
                            continue;
                          }
                          break;
                        }
                        if ( v396 != *(_DWORD *)v420 || v396 != *(_DWORD *)(v420 + 8) )
                          goto LABEL_531;
                        v401 = *(_QWORD *)(v420 + 16);
                        if ( !v401 )
                        {
LABEL_536:
                          v597 = 0;
                          goto LABEL_508;
                        }
LABEL_504:
                        v402 = *(_DWORD *)(v401 - 4);
                        v597 = v402;
                        if ( v402 )
                        {
                          v598 = v357;
                          v607 = v362;
                          v403 = v401 + 4LL * v402;
                          v624 = v360;
                          v629 = v365;
                          v621 = *v580;
                          v404 = v367;
                          v405 = v401;
                          v602 = v398;
                          v406 = v404;
                          v407 = 0;
                          do
                          {
                            v405 += 4;
                            v407 += __popcountdi2();
                          }
                          while ( v405 != v403 );
                          v357 = v598;
                          v362 = v607;
                          v597 = v407;
                          v367 = v406;
                          v396 = v621;
                          v398 = v602;
                          v360 = v624;
                          v365 = v629;
                        }
LABEL_508:
                        v408 = v365 & v362;
                        v409 = 24 * v408;
                        v370 = v360 + 24 * v408;
                        if ( 24 * v408 == v520 )
                        {
LABEL_537:
                          if ( v370 == v360 )
                            goto LABEL_790;
                          v422 = v360;
                          while ( 1 )
                          {
                            v423 = *(_DWORD *)(v422 + 4);
                            if ( v423 == 2 )
                            {
                              if ( *(_DWORD *)v422 == v362 && *(_DWORD *)(v422 + 8) == v362 )
                              {
                                v412 = *(_QWORD *)(v422 + 16);
                                if ( !v412 )
                                  goto LABEL_545;
                                goto LABEL_516;
                              }
                            }
                            else if ( !v423 )
                            {
                              goto LABEL_790;
                            }
                            v422 += 24;
                            if ( v370 == v422 )
LABEL_790:
                              BUG();
                          }
                        }
                        v410 = v360 + 24 * v408;
                        while ( 2 )
                        {
                          v411 = *(_DWORD *)(v410 + 4);
                          if ( v411 != 2 )
                          {
                            if ( !v411 )
                              goto LABEL_790;
LABEL_511:
                            v410 += 24;
                            if ( v410 == v367 )
                              goto LABEL_537;
                            continue;
                          }
                          break;
                        }
                        if ( *(_DWORD *)v410 != v362 || *(_DWORD *)(v410 + 8) != v362 )
                          goto LABEL_511;
                        v412 = *(_QWORD *)(v410 + 16);
                        if ( !v412 )
                        {
                          v369 = v370;
                          do
                          {
LABEL_412:
                            v371 = *(_DWORD *)(v369 + 4);
                            if ( v371 == 2 )
                            {
                              if ( (_DWORD)v363 == *(_DWORD *)v369 && (_DWORD)v363 == *(_DWORD *)(v369 + 8) )
                              {
                                v372 = *(_QWORD *)(v369 + 16);
                                v373 = v357;
                                if ( !v372 )
                                  goto LABEL_489;
                                goto LABEL_416;
                              }
                            }
                            else if ( !v371 )
                            {
                              goto LABEL_790;
                            }
                            v369 += 24;
                          }
                          while ( v369 != v367 );
                          goto LABEL_481;
                        }
LABEL_516:
                        v413 = *(_DWORD *)(v412 - 4);
                        if ( !v413 )
                          goto LABEL_545;
                        v608 = v357;
                        v625 = v362;
                        v630 = v360;
                        v641 = v365;
                        v633 = v409;
                        v627 = v396;
                        v414 = v367;
                        v415 = v412;
                        v603 = v398;
                        v416 = v414;
                        v417 = 0;
                        v622 = v361;
                        v418 = v412 + 4LL * v413;
                        do
                        {
                          v415 += 4;
                          v417 += __popcountdi2();
                        }
                        while ( v415 != v418 );
                        v419 = v417;
                        v357 = v608;
                        v361 = v622;
                        v367 = v416;
                        v362 = v625;
                        v369 = v603;
                        v360 = v630;
                        v365 = v641;
                        v409 = v633;
                        if ( v597 < v419 )
                        {
                          v363 = v627;
                          v357 = v558;
                          v362 = v627;
                          v545 = v580;
                        }
                        else
                        {
LABEL_545:
                          v369 = v370;
                          v368 = v409;
                        }
LABEL_408:
                        v370 = v369;
                        if ( v368 != v520 )
                          goto LABEL_412;
LABEL_481:
                        if ( v370 == v360 )
                          goto LABEL_790;
                        v393 = v360;
                        while ( 2 )
                        {
                          v394 = *(_DWORD *)(v393 + 4);
                          if ( v394 != 2 )
                          {
                            if ( !v394 )
                              goto LABEL_790;
LABEL_484:
                            v393 += 24;
                            if ( v370 == v393 )
                              goto LABEL_790;
                            continue;
                          }
                          break;
                        }
                        if ( (_DWORD)v363 != *(_DWORD *)v393 || (_DWORD)v363 != *(_DWORD *)(v393 + 8) )
                          goto LABEL_484;
                        v372 = *(_QWORD *)(v393 + 16);
                        v373 = v357;
                        if ( !v372 )
                        {
LABEL_489:
                          LODWORD(v374) = 0;
                          goto LABEL_420;
                        }
LABEL_416:
                        v374 = *(unsigned int *)(v372 - 4);
                        if ( (_DWORD)v374 )
                        {
                          v559 = v357;
                          v375 = v372 + 4 * v374;
                          LODWORD(v374) = 0;
                          v578 = v362;
                          v595 = v360;
                          v601 = v365;
                          v606 = v367;
                          v376 = v372;
                          v377 = v357;
                          do
                          {
                            v376 += 4;
                            LODWORD(v374) = __popcountdi2() + v374;
                          }
                          while ( v376 != v375 );
                          v357 = v559;
                          v362 = v578;
                          v373 = v377;
                          v360 = v595;
                          v365 = v601;
                          v367 = v606;
                        }
LABEL_420:
                        v378 = 24LL * (v361 & v365);
                        v379 = v360 + v378;
                        if ( v378 != v520 )
                        {
                          v380 = v360 + v378;
                          do
                          {
                            v381 = *(_DWORD *)(v380 + 4);
                            if ( v381 == 2 )
                            {
                              if ( v361 == *(_DWORD *)v380 && v361 == *(_DWORD *)(v380 + 8) )
                              {
                                v382 = *(_QWORD *)(v380 + 16);
                                if ( !v382 )
                                  goto LABEL_480;
                                goto LABEL_428;
                              }
                            }
                            else if ( !v381 )
                            {
                              goto LABEL_790;
                            }
                            v380 += 24;
                          }
                          while ( v380 != v367 );
                        }
                        if ( v379 == v360 )
                          goto LABEL_790;
                        v391 = v360;
                        while ( 2 )
                        {
                          v392 = *(_DWORD *)(v391 + 4);
                          if ( v392 != 2 )
                          {
                            if ( !v392 )
                              goto LABEL_790;
LABEL_475:
                            v391 += 24;
                            if ( v379 == v391 )
                              goto LABEL_790;
                            continue;
                          }
                          break;
                        }
                        if ( v361 != *(_DWORD *)v391 || v361 != *(_DWORD *)(v391 + 8) )
                          goto LABEL_475;
                        v382 = *(_QWORD *)(v391 + 16);
                        if ( !v382 )
                        {
LABEL_480:
                          v358 = v361;
                          v328 = v637;
                          v325 = v635;
                          v545 = (unsigned int *)(*((_QWORD *)&v38 + 1) + 4LL * v617);
                          v373 = v617;
                          goto LABEL_604;
                        }
LABEL_428:
                        v383 = *(unsigned int *)(v382 - 4);
                        if ( !(_DWORD)v383 )
                          goto LABEL_480;
                        v521 = v357;
                        v384 = v382 + 4 * v383;
                        v385 = 0;
                        v579 = v362;
                        v596 = v360;
                        do
                        {
                          v382 += 4;
                          v385 += __popcountdi2();
                        }
                        while ( v382 != v384 );
                        v359 = *((_QWORD *)&v38 + 1);
                        v360 = v596;
                        if ( (unsigned int)v374 >= v385 )
                        {
                          v545 = (unsigned int *)(*((_QWORD *)&v38 + 1) + 4LL * v617);
                          v358 = v361;
                          v328 = v637;
                          v330 = v617;
                          v325 = v635;
LABEL_691:
                          v373 = v330;
                          goto LABEL_604;
                        }
                        *(_DWORD *)(*((_QWORD *)&v38 + 1) + 4LL * v617) = v579;
                        v357 = 2 * v521;
                        *(_DWORD *)(v504 + 4 * v363) = v617;
                        if ( v540 > (int)(2 * v521) )
                        {
                          v617 = v373;
                          continue;
                        }
                        break;
                      }
                      v358 = v361;
                      v328 = v637;
                      v325 = v635;
LABEL_604:
                      ++v328;
                      *v545 = v358;
                      v435 = v358;
                      v427 = v589;
                      *(_DWORD *)(v504 + 4 * v435) = v373;
                      if ( v328 == v589 )
                      {
LABEL_605:
                        v428 = v328 >> 5;
                        if ( v328 >> 5 < *((_DWORD *)v325 - 1) )
                        {
LABEL_594:
                          v430 = *(_DWORD *)&v325[4 * v428];
                          if ( (v430 & (1 << v328)) == 0 )
                          {
                            v429 = v589;
                            if ( v589 != v328 )
                            {
                              while ( !v430 )
                              {
                                v328 += 32;
                                ++v428;
                                if ( v429 == v328 )
                                  goto LABEL_581;
LABEL_574:
                                v430 = *(_DWORD *)&v325[4 * v428];
                              }
                              if ( v589 != v328 )
                              {
                                v431 = v328 >> 5;
                                if ( (unsigned int)v431 < *((_DWORD *)v325 - 1) )
                                {
                                  v328 += (*(_DWORD *)&v325[4 * v431] & (1 << v328)) == 0;
                                  if ( v589 != v328 )
                                    goto LABEL_579;
                                }
                                else if ( v589 != ++v328 )
                                {
                                  do
                                  {
LABEL_579:
                                    v432 = v328 >> 5;
                                    if ( (unsigned int)v432 < *((_DWORD *)v325 - 1)
                                      && (*(_DWORD *)&v325[4 * v432] & (1 << (v328 & 0x1F))) != 0 )
                                    {
                                      break;
                                    }
                                    if ( (v328 & 0x1F) == 0 )
                                      break;
                                    ++v328;
                                  }
                                  while ( v589 != v328 );
                                }
                              }
                            }
                          }
                        }
                      }
                      else
                      {
LABEL_568:
                        while ( 1 )
                        {
                          v428 = v328 >> 5;
                          if ( v328 >> 5 < *((_DWORD *)v325 - 1)
                            && (*(_DWORD *)&v325[4 * v428] & (1 << (v328 & 0x1F))) != 0 )
                          {
                            break;
                          }
                          if ( (v328 & 0x1F) == 0 )
                            break;
                          if ( v427 == ++v328 )
                          {
                            v428 = v589 >> 5;
                            if ( v589 >> 5 >= *((_DWORD *)v325 - 1) )
                              goto LABEL_581;
                            goto LABEL_594;
                          }
                        }
                        if ( v428 < *((_DWORD *)v325 - 1) )
                          goto LABEL_594;
                        v429 = v589;
                        if ( v589 != v328 )
                          goto LABEL_574;
                      }
LABEL_581:
                      if ( v328 != v643 )
                        continue;
                      break;
                    }
                    v326 = *((_DWORD *)v531 - 1);
LABEL_583:
                    if ( v326 )
                    {
                      v433 = 0;
                      v434 = v531;
                      do
                      {
                        v434 += 4;
                        v433 += __popcountdi2();
                      }
                      while ( v434 != &v531[4 * v326] );
                      if ( v433 <= 1 )
                      {
                        if ( srcb )
                          goto LABEL_588;
LABEL_590:
                        sub_186B220(v531 - 8);
                        goto LABEL_87;
                      }
                      v474 = 32 * v326;
                      v652 = &v644;
                      HIDWORD(v653) = v474;
                      LODWORD(v653) = 0;
                      sub_313A20(&v652, *(double *)si128.m128_u64);
                      v647 = &v644;
                      v475 = v653;
                      v652 = &v644;
                      v476 = nullptr;
                      v653 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v474), 224).m128i_u64[0];
                      v649 = v474;
                      sub_313A20(&v652, *(double *)si128.m128_u64);
                      v477 = v653;
                      if ( v475 != (_DWORD)v653 )
                      {
LABEL_699:
                        v646 = v476;
                        sub_2FD3F0((unsigned int **)&v646);
                        v476 = v646;
                        v478 = *((unsigned int *)v646 - 1);
                        while ( 1 )
                        {
                          v476[v478] = v475;
                          v479 = *(v476 - 1);
                          v648 = v475 + 1;
                          v480 = v479 + 1;
                          *(v476 - 1) = v479 + 1;
                          sub_313A20(&v647, *(double *)si128.m128_u64);
                          v475 = v648;
                          if ( v648 == v477 )
                            break;
                          v478 = (unsigned int)*(v476 - 1);
                          if ( (_DWORD)v478 == *(v476 - 2) )
                            goto LABEL_699;
                        }
                        if ( v480 == 2 )
                        {
                          v11 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0((__int64 *)&v652, "unexpected call");
                          *v11 = (char *)off_1C63128;
                          sub_2333C0(v11 + 1, &v652);
                          sub_233E40((__int64)&v652);
                          __cxa_throw(
                            v11,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                      }
                      v437 = *a3;
                      if ( *a3 )
                      {
                        LODWORD(v438) = *(_DWORD *)(v437 - 4);
                        v439 = (_QWORD *)(v437 + 8LL * (unsigned int)v438);
                        if ( (_DWORD)v438 == *(_DWORD *)(v437 - 8) )
                        {
                          v485 = (unsigned int)(3 * v438 + 1) >> 1;
                          v486 = 8 * v485 + 8;
                          if ( 8 * (int)v438 + 8 >= v486 || (unsigned int)v438 >= v485 )
                          {
                            v12 = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0((__int64 *)&v652, "Overflow encountered when expanding vector");
                            *v12 = (char *)off_1C63128;
                            sub_2333C0(v12 + 1, &v652);
                            sub_233E40((__int64)&v652);
                            __cxa_throw(
                              v12,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v487 = (unsigned int *)sub_186B270(v486);
                          v437 = (unsigned __int64)(v487 + 2);
                          v488 = (__int64 *)*a3;
                          if ( *a3 )
                          {
                            v489 = *((unsigned int *)v488 - 1);
                            v487[1] = v489;
                            v490 = &v488[v489];
                            if ( v490 != v488 )
                            {
                              v491 = 8 * v489 - 8;
                              if ( v491 <= 8 || v488 < (__int64 *)v487 + 3 && v437 < (unsigned __int64)(v488 + 2) )
                              {
                                v501 = v488;
                                v502 = v487 + 2;
                                do
                                {
                                  v503 = *v501;
                                  *v501++ = 0;
                                  v502 += 2;
                                  *((_QWORD *)v502 - 1) = v503;
                                }
                                while ( v501 != v490 );
                              }
                              else
                              {
                                v492 = 0;
                                si128.m128_u64[0] = 0;
                                v493 = (v491 >> 3) + 1;
                                do
                                {
                                  v494 = _mm_loadu_si128((const __m128i *)&v488[v492 / 2]);
                                  *(_OWORD *)&v488[v492 / 2] = 0;
                                  *(__m128i *)&v487[v492 + 2] = v494;
                                  v492 += 4LL;
                                }
                                while ( v492 != 4 * (v493 >> 1) );
                                if ( (v493 & 1) != 0 )
                                {
                                  v495 = v493 & 0xFFFFFFFFFFFFFFFELL;
                                  v496 = &v488[v495];
                                  v497 = *v496;
                                  *v496 = 0;
                                  *(_QWORD *)(v437 + 8 * v495) = v497;
                                }
                              }
                            }
                            v498 = &v488[v489];
                            if ( (_DWORD)v489 )
                            {
                              do
                              {
                                while ( 1 )
                                {
                                  v499 = *v488;
                                  if ( !*v488 )
                                    break;
                                  ++v488;
                                  sub_186B220((void *)(v499 - 8));
                                  if ( v498 == v488 )
                                    goto LABEL_749;
                                }
                                ++v488;
                              }
                              while ( v488 != v498 );
LABEL_749:
                              v488 = (__int64 *)*a3;
                            }
                            sub_186B220(v488 - 1);
                            v438 = v487[1];
                            v439 = (_QWORD *)(v437 + 8 * v438);
                          }
                          else
                          {
                            v487[1] = 0;
                            v439 = v487 + 2;
                            LODWORD(v438) = 0;
                          }
                          *v487 = v485;
                          *a3 = v437;
                        }
                      }
                      else
                      {
                        v438 = sub_186B270(0x18u);
                        v437 = v438 + 8;
                        *(_QWORD *)v438 = 2;
                        v439 = (_QWORD *)(v438 + 8);
                        *a3 = v438 + 8;
                        LODWORD(v438) = 0;
                      }
                      *v439 = 0;
                      if ( v476 )
                      {
                        v440 = *(v476 - 1);
                        v522 = *(v476 - 2);
                        v441 = (_QWORD *)sub_186B270(4LL * v522 + 8);
                        v442 = v441;
                        si128.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v522), _mm_cvtsi32_si128(v440)).m128i_u64[0];
                        *v441 = si128.m128_u64[0];
                        v443 = (unsigned int)*(v476 - 1);
                        *v439 = v441 + 1;
                        v444 = 4 * v443;
                        if ( v444 <= 4 )
                        {
                          v500 = *a3;
                          if ( v444 == 4 )
                            *((_DWORD *)v442 + 2) = *v476;
                          ++*(_DWORD *)(v500 - 4);
                        }
                        else
                        {
                          memmove(v441 + 1, v476, v444);
                          ++*(_DWORD *)(*a3 - 4);
                        }
                        sub_186B220(v476 - 2);
                        goto LABEL_635;
                      }
                      *(_DWORD *)(v437 - 4) = v438 + 1;
                      if ( !srcb )
                      {
LABEL_589:
                        v531 = v644;
                        if ( v644 )
                          goto LABEL_590;
                        goto LABEL_87;
                      }
                    }
                    else
                    {
LABEL_635:
                      if ( !srcb )
                        goto LABEL_589;
                    }
LABEL_588:
                    sub_186B220(srcb - 2);
                    goto LABEL_589;
                  }
                  break;
                }
                v426 = *(_DWORD *)(v504 + 4LL * v213);
                if ( v531 )
                {
                  v215 = *((_DWORD *)v531 - 1);
                  if ( !v215 )
                  {
                    if ( !v426 )
                      goto LABEL_266;
                    v234 = (__int64)v531;
                    v233 = v213 >> 5;
                    v235 = v233 + 1;
                    goto LABEL_262;
                  }
                  v216 = v426 != 0;
                  v217 = 32 * v215;
                  if ( (*v531 & 1) != 0 )
                    goto LABEL_618;
                  if ( !v217 )
                    goto LABEL_256;
LABEL_235:
                  v218 = v531;
                  v219 = 0;
                  while ( !*v218 )
                  {
                    v219 += 32;
                    ++v218;
                    if ( v219 == v217 )
                      goto LABEL_256;
                  }
                  if ( v219 != v217 )
                  {
                    v220 = v219 >> 5;
                    if ( (unsigned int)v220 < v215 )
                      v221 = ((*(_DWORD *)&v531[4 * v220] & 1) == 0) + v219;
                    else
                      v221 = v219 + 1;
                    do
                    {
                      v222 = v221 >> 5;
                      if ( (unsigned int)v222 < v215 && (*(_DWORD *)&v531[4 * v222] & (1 << (v221 & 0x1F))) != 0 )
                        goto LABEL_243;
                      if ( (v221 & 0x1F) == 0 )
                        goto LABEL_243;
                    }
                    while ( ++v221 != v217 );
                  }
LABEL_256:
                  if ( !v216 )
                    goto LABEL_266;
                  v233 = v213 >> 5;
                  if ( (unsigned int)v233 >= v215 )
                  {
                    v234 = (__int64)v531;
                    v235 = v233 + 1;
                    goto LABEL_262;
                  }
                }
                else
                {
                  if ( !v426 )
                    goto LABEL_266;
                  v233 = v213 >> 5;
                  v235 = v233 + 1;
                  v234 = sub_186B270(0x10u) + 8;
                  v215 = 0;
                  *(_QWORD *)(v234 - 8) = 2;
                  v531 = (_BYTE *)v234;
                  v644 = (_BYTE *)v234;
LABEL_262:
                  while ( 1 )
                  {
                    v239 = *(_DWORD *)(v234 - 8);
                    if ( v239 >= v235 )
                      break;
                    v236 = (3 * v239 + 1) >> 1;
                    v237 = 4 * v236 + 8;
                    if ( 4 * v239 + 8 >= v237 || v239 >= v236 )
                    {
                      v15 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)&v652, "Overflow encountered when expanding vector");
                      *v15 = (char *)off_1C63128;
                      sub_2333C0(v15 + 1, &v652);
                      sub_233E40((__int64)&v652);
                      __cxa_throw(
                        v15,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v238 = (unsigned int *)sub_186B300(v531 - 8, v237);
                    *v238 = v236;
                    v234 = (__int64)(v238 + 2);
                    v531 = (_BYTE *)v234;
                    v644 = (_BYTE *)v234;
                  }
                  v240 = 4LL * v215;
                  *((_DWORD *)v531 - 1) = v235;
                  v241 = 4LL * v235;
                  if ( v240 != v241 )
                    memset(&v531[v240], 0, v241 - v240);
                }
                *(_DWORD *)&v531[4 * v233] |= 1 << v213;
                goto LABEL_266;
              }
            }
          }
        }
      }
      if ( v105 == 1 )
        goto LABEL_226;
LABEL_190:
      while ( 1 )
      {
        v178 = *v108;
        v179 = *srcb;
        if ( !sub_306410(a2, *v108, *srcb) )
          break;
        if ( (char *)v108 - (char *)srcb <= 4 )
        {
          if ( (char *)v108 - (char *)srcb == 4 )
            *v108 = v179;
        }
        else
        {
          memmove(srcb + 1, srcb, (char *)v108 - (char *)srcb);
        }
        ++v108;
        *srcb = v178;
        if ( v108 == v106 )
          goto LABEL_226;
      }
      v180 = a2;
      v181 = v108;
      v551 = v108;
      v182 = v178;
      v571 = v106;
      v183 = *(_QWORD *)a2;
      v184 = v181;
LABEL_192:
      v185 = *(unsigned int *)(v180 + 8);
      v186 = *(v184 - 1);
      v187 = v185 - 1;
      v188 = 24LL * (((_DWORD)v185 - 1) & (unsigned int)v182);
      v189 = 24 * v185;
      v190 = v183 + v188;
      v191 = v183 + 24 * v185;
      if ( v188 != 24 * v185 )
      {
        v192 = v183 + v188;
        do
        {
          v193 = *(_DWORD *)(v192 + 4);
          if ( v193 == 2 )
          {
            if ( v182 == *(_DWORD *)v192 && v182 == *(_DWORD *)(v192 + 8) )
            {
              v194 = *(_QWORD *)(v192 + 16);
              if ( !v194 )
                goto LABEL_355;
              goto LABEL_200;
            }
          }
          else if ( !v193 )
          {
            goto LABEL_788;
          }
          v192 += 24;
        }
        while ( v191 != v192 );
      }
      if ( v183 == v190 )
        goto LABEL_788;
      v313 = v183;
      while ( 1 )
      {
        v314 = *(_DWORD *)(v313 + 4);
        if ( v314 == 2 )
        {
          if ( v182 == *(_DWORD *)v313 && v182 == *(_DWORD *)(v313 + 8) )
          {
            v194 = *(_QWORD *)(v313 + 16);
            if ( !v194 )
            {
LABEL_355:
              v195 = 0;
              goto LABEL_204;
            }
LABEL_200:
            v195 = *(_DWORD *)(v194 - 4);
            if ( v195 )
            {
              v529 = *(v184 - 1);
              v196 = v195;
              v195 = 0;
              v536 = v187;
              v197 = v194 + 4 * v196;
              v592 = v180;
              v514 = v182;
              v198 = v194;
              v199 = v189;
              do
              {
                v198 += 4;
                v195 += __popcountdi2();
              }
              while ( v197 != v198 );
              v182 = v514;
              v186 = v529;
              v189 = v199;
              v187 = v536;
              v180 = v592;
            }
LABEL_204:
            v200 = 24LL * (v186 & v187);
            v201 = v183 + v200;
            if ( v189 != v200 )
            {
              for ( i = v183 + v200; v191 != i; i += 24 )
              {
                v203 = *(_DWORD *)(i + 4);
                if ( v203 == 2 )
                {
                  if ( v186 == *(_DWORD *)i && v186 == *(_DWORD *)(i + 8) )
                  {
                    v204 = *(_QWORD *)(i + 16);
                    if ( v204 )
                      goto LABEL_212;
LABEL_225:
                    v106 = v571;
                    *v184 = v182;
                    v108 = v551 + 1;
                    if ( v551 + 1 == v571 )
                      goto LABEL_226;
                    goto LABEL_190;
                  }
                }
                else if ( !v203 )
                {
                  goto LABEL_788;
                }
              }
            }
            if ( v183 == v201 )
              goto LABEL_788;
            v210 = v183;
            while ( 1 )
            {
              v211 = *(_DWORD *)(v210 + 4);
              if ( v211 == 2 )
              {
                if ( v186 == *(_DWORD *)v210 && v186 == *(_DWORD *)(v210 + 8) )
                {
                  v204 = *(_QWORD *)(v210 + 16);
                  if ( !v204 )
                    goto LABEL_225;
LABEL_212:
                  v205 = *(unsigned int *)(v204 - 4);
                  if ( !(_DWORD)v205 )
                    goto LABEL_225;
                  v530 = v186;
                  v206 = v204 + 4 * v205;
                  v207 = 0;
                  v515 = v182;
                  v208 = v204;
                  v209 = v180;
                  do
                  {
                    v208 += 4;
                    v207 += __popcountdi2();
                  }
                  while ( v206 != v208 );
                  v182 = v515;
                  v180 = v209;
                  if ( v195 >= v207 )
                    goto LABEL_225;
                  *v184-- = v530;
                  goto LABEL_192;
                }
              }
              else if ( !v211 )
              {
                goto LABEL_788;
              }
              v210 += 24;
              if ( v201 == v210 )
                goto LABEL_788;
            }
          }
        }
        else if ( !v314 )
        {
          goto LABEL_788;
        }
        v313 += 24;
        if ( v190 == v313 )
LABEL_788:
          BUG();
      }
    }
    break;
  }
  if ( v504 )
    sub_186B220((void *)(v504 - 8));
  sub_186B220((void *)(*((_QWORD *)&v38 + 1) - 8LL));
  return (const __m128i *)sub_186B220(v567 - 2);
}

