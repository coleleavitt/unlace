__int64 __fastcall sub_971220(const __m128i **a1, __int64 a2, __int64 *a3)
{
  char **v3; // rbp
  char **exception; // rbp
  const __m128i *v6; // rdx
  __int64 v7; // rax
  __int32 *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  const __m128i *v11; // rdi
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm3
  __m128i v20; // xmm0
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // ebp
  unsigned int **v24; // r12
  unsigned int *v25; // rsi
  unsigned int *v26; // rbx
  unsigned int v27; // r14d
  unsigned int *v28; // rax
  __int64 v29; // rcx
  unsigned int *v30; // rdi
  __int64 v31; // rax
  __int64 result; // rax
  unsigned int *v33; // r15
  unsigned int *v34; // rbp
  unsigned int v35; // ebx
  unsigned int v36; // esi
  unsigned int *v37; // rax
  __int64 v38; // r13
  int v39; // r8d
  __int64 v40; // rax
  unsigned int *v41; // rsi
  unsigned int v42; // r11d
  __int64 v43; // r14
  unsigned int *v44; // r10
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int *v47; // r10
  __int64 v48; // rsi
  __int64 v49; // r13
  int v50; // r9d
  __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rbp
  __int64 v55; // rax
  int v56; // esi
  __int64 v57; // r15
  unsigned int v58; // r12d
  __int64 v59; // rsi
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // rax
  int v64; // esi
  __int64 v65; // rbp
  __int64 v66; // rax
  __int64 v67; // rbx
  unsigned int v68; // r15d
  _DWORD *v69; // rax
  __int64 v70; // rbx
  __int64 v72; // rax
  int v73; // esi
  __int64 v74; // rax
  int v75; // esi
  int v76; // edx
  _DWORD *v77; // rax
  __int64 *v78; // r13
  _DWORD *v79; // r14
  __int64 v80; // rax
  int v81; // r12d
  unsigned int v82; // r12d
  unsigned int v83; // ebp
  int v84; // r8d
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  unsigned int v88; // eax
  int v89; // esi
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // r12
  int *v93; // rbp
  unsigned __int64 v94; // rdx
  int *v95; // rbx
  int *v96; // r14
  _QWORD *v97; // r13
  unsigned int v98; // ecx
  unsigned int v99; // r12d
  bool v100; // al
  __int64 v101; // rsi
  _QWORD *v102; // r9
  int v103; // r13d
  int *v104; // rcx
  __int64 v105; // r14
  __int64 v106; // rdx
  int v107; // eax
  unsigned int v108; // r10d
  __int64 v109; // r11
  __int64 v110; // r8
  __int64 v111; // rbx
  __int64 v112; // rbp
  __int64 v113; // rdx
  int v114; // esi
  __int64 v115; // r12
  unsigned int v116; // r15d
  __int64 v117; // rdx
  __int64 v118; // rbx
  __int64 v119; // rax
  __int64 v120; // r12
  __int64 v121; // rbp
  __int64 v122; // r10
  __int64 v123; // r11
  __int64 v124; // r8
  int v125; // edx
  __int64 v126; // rbp
  __int64 v127; // r8
  __int64 v128; // rbx
  unsigned int v129; // r12d
  __int64 v130; // r8
  int v131; // edx
  int *v132; // r12
  int *v133; // rbx
  __int64 v134; // r10
  __int64 v135; // rcx
  unsigned int v136; // r14d
  int *v137; // r9
  __int64 v138; // rax
  int v139; // r13d
  unsigned int v140; // r8d
  __int64 v141; // rbx
  __int64 v142; // rbp
  __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // rax
  int v146; // edx
  __int64 v147; // rdx
  unsigned int v148; // r12d
  __int64 v149; // rsi
  __int64 v150; // r15
  __int64 v151; // rbx
  __int64 v152; // rax
  __int64 v153; // r8
  __int64 v154; // rax
  int v155; // edx
  __int64 v156; // r15
  __int64 v157; // rax
  __int64 v158; // rbp
  unsigned int v159; // ebx
  __int64 v160; // r12
  __int64 v161; // r15
  __int64 v162; // rdx
  int v163; // esi
  unsigned int v164; // eax
  __int64 v165; // rbx
  unsigned int v166; // r13d
  unsigned int *v167; // r15
  int v168; // r13d
  unsigned int v169; // r13d
  unsigned int v170; // r14d
  int v171; // r10d
  _BYTE *v172; // r11
  _DWORD *v173; // rdx
  __int64 v174; // r11
  unsigned int v175; // r12d
  __int64 v176; // r10
  __int64 v177; // r13
  unsigned int v178; // r9d
  __int64 v179; // rax
  int v180; // esi
  __int64 v181; // rdi
  __int64 v182; // rbx
  __int64 v183; // rcx
  int v184; // edi
  _DWORD *v185; // r15
  unsigned int v186; // r8d
  int v187; // ebx
  unsigned int v188; // ebp
  _DWORD *v189; // rcx
  __int64 v190; // rcx
  unsigned int v191; // ebp
  __int64 v192; // rdi
  __int64 v193; // rcx
  _DWORD *v194; // r9
  __int64 v195; // r8
  unsigned int v196; // edx
  __int64 v197; // r14
  __int64 v198; // r10
  unsigned int v199; // r8d
  unsigned int v200; // r12d
  __int64 v201; // rax
  __int64 v202; // rcx
  __int64 v203; // rsi
  __int64 v204; // rdi
  __int64 v205; // rax
  int v206; // ecx
  __int64 v207; // rax
  signed int v208; // eax
  int v209; // ecx
  int v210; // edi
  __int64 v211; // rbx
  __int64 v212; // rsi
  unsigned int *v213; // r9
  unsigned int *v214; // r8
  __int64 v215; // rdx
  __int64 v216; // r12
  int v217; // r10d
  __int64 v218; // rdx
  __int64 v219; // rbp
  __int64 v220; // rax
  __int64 v221; // r14
  __int64 v222; // rax
  int v223; // r13d
  __int64 v224; // r13
  __int64 v225; // r14
  __int64 v226; // r15
  __int64 v227; // rbx
  __int64 v228; // rax
  __int64 v229; // r10
  __int64 v230; // rax
  int v231; // edx
  __int64 v232; // r13
  __int64 v233; // rax
  __int64 v234; // rbp
  unsigned int v235; // r15d
  __int64 v236; // rbx
  int v237; // r13d
  __int64 v238; // rax
  unsigned int v239; // esi
  unsigned int v240; // eax
  __int64 v241; // rdi
  int v242; // edi
  __int64 v243; // rax
  __int64 v244; // rax
  unsigned int v245; // eax
  int v246; // esi
  unsigned int v247; // ebx
  int v248; // r15d
  unsigned int v249; // r14d
  _BYTE *v250; // r11
  unsigned int v251; // ebx
  _DWORD *v252; // r14
  int *v253; // rdx
  int v254; // r9d
  __int64 v255; // rax
  unsigned int v256; // edi
  __int64 v257; // r13
  __int64 v258; // r10
  __int64 v259; // rax
  int v260; // r11d
  __int64 v261; // rcx
  __int64 v262; // rdx
  __int64 v263; // r8
  __int64 v264; // rdx
  int v265; // esi
  __int64 v266; // r12
  unsigned int v267; // r8d
  __int64 v268; // r15
  __int64 v269; // rbp
  unsigned int v270; // ebx
  __int64 v271; // rdx
  __int64 v272; // rdi
  __int64 v273; // rdx
  int v274; // esi
  __int64 v275; // r12
  __int64 v276; // rdx
  __int64 v277; // r15
  unsigned int v278; // ebx
  __int64 v279; // rbp
  int v280; // r12d
  unsigned int v281; // ebp
  int v282; // r11d
  __int64 v283; // r10
  unsigned int v284; // r11d
  unsigned int v285; // r8d
  unsigned int *v286; // rbx
  __int64 v287; // r10
  unsigned int v288; // r14d
  unsigned int v289; // edx
  __int64 v290; // r13
  __int64 v291; // rax
  int v292; // r8d
  __int64 v293; // rax
  __int64 v294; // rbp
  __int64 v295; // rsi
  __int64 v296; // rbx
  __int64 v297; // r12
  int v298; // eax
  __int64 v299; // r12
  unsigned int v300; // edi
  __int64 v301; // r15
  __int64 v302; // rbx
  __int64 v303; // rbp
  unsigned int v304; // r12d
  __int64 v305; // rax
  __int64 v306; // rcx
  __int64 v307; // rax
  int v308; // esi
  __int64 v309; // rbp
  __int64 v310; // rax
  __int64 v311; // rbx
  unsigned int v312; // r12d
  __int64 v313; // rax
  __int64 v314; // rax
  __int64 v315; // rax
  int v316; // r13d
  __int64 v317; // rax
  int v318; // edx
  int v319; // ecx
  __int64 v320; // rbx
  int v321; // eax
  __int64 v322; // rax
  int v323; // esi
  __int64 v324; // rdi
  unsigned int v325; // eax
  __int64 v326; // rcx
  __int64 v327; // rbx
  __int64 v328; // rcx
  int v329; // edi
  __int64 v330; // r15
  unsigned int v331; // edi
  __int64 v332; // r12
  unsigned int v333; // r14d
  __int64 v334; // rbx
  __int64 v335; // r15
  unsigned int v336; // ebp
  __int64 v337; // rcx
  __int64 v338; // r9
  __int64 v339; // rcx
  int v340; // edi
  __int64 v341; // rcx
  unsigned int v342; // edi
  __int64 v343; // rax
  __int64 v344; // rbp
  __int64 v345; // r15
  __int64 v346; // r14
  unsigned int v347; // ebx
  unsigned int v348; // ecx
  __int64 v349; // rcx
  int v350; // edi
  __int64 v351; // rcx
  int v352; // edi
  int v353; // edi
  unsigned int v354; // r8d
  unsigned int v355; // eax
  unsigned int v356; // ecx
  int v357; // edx
  __int64 v358; // rax
  __int64 v359; // rax
  _BYTE *v360; // r11
  __int64 v361; // rax
  __int64 v362; // rdx
  int v363; // esi
  int v364; // ecx
  int v365; // edi
  unsigned int *v366; // rcx
  __int64 v367; // r14
  __int64 v368; // rdx
  __int64 v369; // r10
  __int64 v370; // rbp
  __int64 v371; // rax
  __int64 v372; // r12
  __int64 v373; // rax
  int v374; // esi
  __int64 v375; // r12
  unsigned int v376; // ebx
  __int64 v377; // rsi
  __int64 v378; // rax
  __int64 v379; // r15
  __int64 v380; // r12
  __int64 v381; // rbp
  __int64 v382; // rax
  __int64 v383; // r11
  __int64 v384; // rax
  int v385; // esi
  __int64 v386; // r12
  __int64 v387; // rax
  __int64 v388; // rbp
  __int64 v389; // rax
  unsigned int v390; // r15d
  unsigned int v391; // r12d
  __int64 v392; // rbx
  __int64 v393; // rax
  int v394; // esi
  __int64 v395; // rcx
  __int64 v396; // rax
  int v397; // esi
  int v398; // r12d
  unsigned int v399; // r14d
  __int64 v400; // r9
  int *v401; // rdi
  int v402; // ebx
  __int64 v403; // rbp
  int *i; // rsi
  __int64 v405; // rax
  int v406; // ecx
  unsigned int v407; // r11d
  __int64 v408; // r10
  __int64 v409; // rdx
  __int64 v410; // r12
  __int64 v411; // r14
  __int64 v412; // rax
  int v413; // edi
  __int64 v414; // r15
  unsigned int v415; // r13d
  __int64 v416; // r10
  __int64 v417; // r12
  __int64 v418; // rbx
  __int64 v419; // r15
  __int64 v420; // rax
  __int64 v421; // r11
  __int64 v422; // rax
  int v423; // edx
  __int64 v424; // r14
  __int64 v425; // rax
  __int64 v426; // r12
  unsigned int v427; // r15d
  __int64 v428; // rbx
  __int64 v429; // r14
  __int64 v430; // rax
  int v431; // edx
  _BYTE *v432; // r12
  unsigned int v433; // ebp
  int v434; // eax
  unsigned int v435; // r8d
  bool v436; // si
  int v437; // r14d
  _DWORD *v438; // rdx
  unsigned int v439; // eax
  __int64 v440; // rdx
  __int64 v441; // rdx
  __int64 v442; // rdx
  __int64 v443; // r9
  __int64 v444; // r11
  __int64 v445; // rbx
  __int64 v446; // r10
  unsigned int v447; // ecx
  __int64 v448; // r13
  __int64 v449; // rax
  int v450; // edx
  __int64 v451; // rax
  __int64 v452; // rdx
  int v453; // edx
  __int64 v454; // rax
  int v455; // edi
  unsigned int v456; // r14d
  unsigned int v457; // edx
  unsigned int *v458; // rax
  unsigned int v459; // eax
  __int64 v460; // rcx
  __int64 v461; // rax
  unsigned int v462; // eax
  _QWORD *v463; // rax
  unsigned int v464; // ebx
  __int64 v465; // rax
  int v466; // edx
  __int64 v467; // rax
  int v468; // edx
  _BYTE *v469; // rbp
  unsigned int v470; // r13d
  _BYTE *v471; // r15
  _BYTE *v472; // r14
  unsigned int v473; // ebx
  unsigned int v474; // ebp
  int v475; // r13d
  _QWORD *v476; // rax
  unsigned int *v477; // rax
  unsigned int *v478; // rbx
  int v479; // eax
  int v480; // r12d
  __int64 v481; // rax
  unsigned int v482; // edx
  unsigned int v483; // ecx
  unsigned int *v484; // rax
  __int64 v485; // rax
  unsigned int v486; // edx
  _QWORD *v487; // rbp
  unsigned int v488; // r13d
  __int64 v489; // rax
  size_t v490; // rdx
  bool v491; // zf
  __int64 v492; // rdx
  unsigned int *v493; // [rsp+0h] [rbp-188h]
  unsigned int *v494; // [rsp+8h] [rbp-180h]
  unsigned int *v495; // [rsp+10h] [rbp-178h]
  int v496; // [rsp+10h] [rbp-178h]
  int v497; // [rsp+10h] [rbp-178h]
  int v498; // [rsp+10h] [rbp-178h]
  int *v499; // [rsp+10h] [rbp-178h]
  int *v500; // [rsp+10h] [rbp-178h]
  _BYTE *v501; // [rsp+10h] [rbp-178h]
  unsigned int v502; // [rsp+10h] [rbp-178h]
  unsigned int v503; // [rsp+10h] [rbp-178h]
  __int64 v504; // [rsp+10h] [rbp-178h]
  unsigned int v505; // [rsp+10h] [rbp-178h]
  __int64 v506; // [rsp+10h] [rbp-178h]
  unsigned int v507; // [rsp+10h] [rbp-178h]
  _BYTE *v508; // [rsp+10h] [rbp-178h]
  int v509; // [rsp+10h] [rbp-178h]
  int v510; // [rsp+10h] [rbp-178h]
  int v511; // [rsp+10h] [rbp-178h]
  int v512; // [rsp+10h] [rbp-178h]
  unsigned int v513; // [rsp+10h] [rbp-178h]
  unsigned int v514; // [rsp+10h] [rbp-178h]
  unsigned int v515; // [rsp+10h] [rbp-178h]
  unsigned int v516; // [rsp+10h] [rbp-178h]
  unsigned int *v517; // [rsp+18h] [rbp-170h]
  unsigned int v518; // [rsp+18h] [rbp-170h]
  int *v519; // [rsp+18h] [rbp-170h]
  __int64 v520; // [rsp+18h] [rbp-170h]
  unsigned int v521; // [rsp+18h] [rbp-170h]
  int v522; // [rsp+18h] [rbp-170h]
  unsigned int v523; // [rsp+18h] [rbp-170h]
  _BYTE *v524; // [rsp+18h] [rbp-170h]
  int v525; // [rsp+18h] [rbp-170h]
  unsigned int v526; // [rsp+18h] [rbp-170h]
  int v527; // [rsp+18h] [rbp-170h]
  int v528; // [rsp+18h] [rbp-170h]
  unsigned int *v529; // [rsp+18h] [rbp-170h]
  _BYTE *v530; // [rsp+18h] [rbp-170h]
  unsigned int **v531; // [rsp+20h] [rbp-168h]
  int *v532; // [rsp+20h] [rbp-168h]
  _QWORD *v533; // [rsp+20h] [rbp-168h]
  unsigned int v534; // [rsp+20h] [rbp-168h]
  __int64 v535; // [rsp+20h] [rbp-168h]
  unsigned int v536; // [rsp+20h] [rbp-168h]
  unsigned int v537; // [rsp+20h] [rbp-168h]
  int v538; // [rsp+20h] [rbp-168h]
  unsigned int v539; // [rsp+20h] [rbp-168h]
  int v540; // [rsp+20h] [rbp-168h]
  unsigned int v541; // [rsp+20h] [rbp-168h]
  int *v542; // [rsp+28h] [rbp-160h]
  __int64 v543; // [rsp+28h] [rbp-160h]
  unsigned int *v544; // [rsp+28h] [rbp-160h]
  int v545; // [rsp+28h] [rbp-160h]
  unsigned int v546; // [rsp+28h] [rbp-160h]
  int *v547; // [rsp+28h] [rbp-160h]
  __int64 v548; // [rsp+28h] [rbp-160h]
  __int64 v549; // [rsp+30h] [rbp-158h]
  unsigned int v550; // [rsp+38h] [rbp-150h]
  int v551; // [rsp+38h] [rbp-150h]
  int *v552; // [rsp+38h] [rbp-150h]
  __int64 v553; // [rsp+38h] [rbp-150h]
  int v554; // [rsp+38h] [rbp-150h]
  unsigned int *v555; // [rsp+38h] [rbp-150h]
  unsigned int v556; // [rsp+38h] [rbp-150h]
  unsigned int v557; // [rsp+38h] [rbp-150h]
  unsigned int v558; // [rsp+38h] [rbp-150h]
  unsigned int v559; // [rsp+38h] [rbp-150h]
  unsigned int *v560; // [rsp+38h] [rbp-150h]
  unsigned int *v561; // [rsp+38h] [rbp-150h]
  int *v562; // [rsp+38h] [rbp-150h]
  __int64 v563; // [rsp+38h] [rbp-150h]
  unsigned int *src; // [rsp+40h] [rbp-148h]
  unsigned int *srca; // [rsp+40h] [rbp-148h]
  unsigned int *srcb; // [rsp+40h] [rbp-148h]
  __int64 v567; // [rsp+48h] [rbp-140h]
  __int64 v568; // [rsp+48h] [rbp-140h]
  unsigned int v569; // [rsp+48h] [rbp-140h]
  unsigned int *v570; // [rsp+48h] [rbp-140h]
  unsigned int *v571; // [rsp+48h] [rbp-140h]
  unsigned int v572; // [rsp+48h] [rbp-140h]
  int v573; // [rsp+50h] [rbp-138h]
  unsigned int v574; // [rsp+50h] [rbp-138h]
  int *v575; // [rsp+50h] [rbp-138h]
  int *v576; // [rsp+50h] [rbp-138h]
  unsigned int *v577; // [rsp+50h] [rbp-138h]
  __int64 v578; // [rsp+50h] [rbp-138h]
  __int64 v579; // [rsp+50h] [rbp-138h]
  __int64 v580; // [rsp+50h] [rbp-138h]
  unsigned int v581; // [rsp+50h] [rbp-138h]
  unsigned int v582; // [rsp+50h] [rbp-138h]
  unsigned int *v583; // [rsp+50h] [rbp-138h]
  unsigned int v584; // [rsp+50h] [rbp-138h]
  unsigned int v585; // [rsp+50h] [rbp-138h]
  __int64 v586; // [rsp+50h] [rbp-138h]
  __int64 v587; // [rsp+58h] [rbp-130h]
  __int64 v588; // [rsp+58h] [rbp-130h]
  _QWORD *v589; // [rsp+58h] [rbp-130h]
  int *v590; // [rsp+58h] [rbp-130h]
  __int64 v591; // [rsp+58h] [rbp-130h]
  int v592; // [rsp+58h] [rbp-130h]
  int v593; // [rsp+58h] [rbp-130h]
  __int64 v594; // [rsp+58h] [rbp-130h]
  __int64 v595; // [rsp+58h] [rbp-130h]
  unsigned int v596; // [rsp+58h] [rbp-130h]
  __int64 v597; // [rsp+58h] [rbp-130h]
  __int64 v598; // [rsp+58h] [rbp-130h]
  __int64 v599; // [rsp+58h] [rbp-130h]
  int v600; // [rsp+60h] [rbp-128h]
  __int64 v601; // [rsp+60h] [rbp-128h]
  __int64 v602; // [rsp+60h] [rbp-128h]
  __int64 v603; // [rsp+60h] [rbp-128h]
  __int64 v604; // [rsp+60h] [rbp-128h]
  int v605; // [rsp+60h] [rbp-128h]
  unsigned int v606; // [rsp+60h] [rbp-128h]
  unsigned int v607; // [rsp+60h] [rbp-128h]
  int v608; // [rsp+60h] [rbp-128h]
  _DWORD *v609; // [rsp+68h] [rbp-120h]
  __int64 v610; // [rsp+70h] [rbp-118h]
  int v611; // [rsp+70h] [rbp-118h]
  int v612; // [rsp+70h] [rbp-118h]
  __int64 v613; // [rsp+70h] [rbp-118h]
  unsigned int v614; // [rsp+70h] [rbp-118h]
  __int64 v615; // [rsp+70h] [rbp-118h]
  __int64 v616; // [rsp+80h] [rbp-108h]
  unsigned int v617; // [rsp+80h] [rbp-108h]
  unsigned int v618; // [rsp+80h] [rbp-108h]
  _BYTE *v619; // [rsp+88h] [rbp-100h]
  __int64 v620; // [rsp+88h] [rbp-100h]
  unsigned int v621; // [rsp+88h] [rbp-100h]
  __int64 v622; // [rsp+90h] [rbp-F8h]
  unsigned int v623; // [rsp+90h] [rbp-F8h]
  unsigned int v624; // [rsp+98h] [rbp-F0h]
  int v625; // [rsp+98h] [rbp-F0h]
  __int64 v626; // [rsp+98h] [rbp-F0h]
  unsigned int v627; // [rsp+A0h] [rbp-E8h]
  unsigned int v628; // [rsp+ACh] [rbp-DCh]
  int v629; // [rsp+ACh] [rbp-DCh]
  _DWORD *v630; // [rsp+B0h] [rbp-D8h]
  __int64 v631; // [rsp+B0h] [rbp-D8h]
  __int64 v632; // [rsp+B8h] [rbp-D0h]
  _BYTE *v633; // [rsp+B8h] [rbp-D0h]
  unsigned int v636; // [rsp+D0h] [rbp-B8h]
  int v637; // [rsp+D0h] [rbp-B8h]
  int v638; // [rsp+D4h] [rbp-B4h]
  unsigned int v639; // [rsp+D4h] [rbp-B4h]
  _DWORD *v640; // [rsp+E8h] [rbp-A0h] BYREF
  _BYTE *v641; // [rsp+F0h] [rbp-98h] BYREF
  unsigned int *v642; // [rsp+F8h] [rbp-90h] BYREF
  __int64 *v643; // [rsp+100h] [rbp-88h] BYREF
  unsigned int v644; // [rsp+108h] [rbp-80h]
  unsigned int v645; // [rsp+10Ch] [rbp-7Ch]
  __int64 v646; // [rsp+110h] [rbp-78h]
  unsigned int *v647; // [rsp+118h] [rbp-70h] BYREF
  unsigned int *v648; // [rsp+120h] [rbp-68h] BYREF
  __int64 *v649; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v650; // [rsp+138h] [rbp-50h]

  v6 = *a1;
  if ( *a1 )
  {
    v7 = 4LL * v6[-1].m128i_u32[3];
    v8 = &v6->m128i_i32[(unsigned __int64)v7 / 4];
    if ( v6 != (const __m128i *)&v6->m128i_i8[v7] )
    {
      v9 = v7 - 4;
      v10 = (v9 >> 2) + 1;
      if ( v9 <= 8 )
      {
        v21 = 1;
      }
      else
      {
        v11 = *a1;
        v12 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
        v13 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0);
        do
        {
          v14 = _mm_loadu_si128(v11++);
          v15 = _mm_cmpgt_epi32(_mm_sub_epi32(v14, v13), _mm_sub_epi32(v12, v13));
          v12 = _mm_or_si128(_mm_andnot_si128(v15, v12), _mm_and_si128(v14, v15));
        }
        while ( &v6[v10 >> 2] != v11 );
        v16 = _mm_srli_si128(v12, 8);
        v17 = _mm_cmpgt_epi32(_mm_sub_epi32(v16, v13), _mm_sub_epi32(v12, v13));
        v18 = _mm_or_si128(_mm_andnot_si128(v17, v12), _mm_and_si128(v16, v17));
        v19 = _mm_srli_si128(v18, 4);
        v20 = _mm_cmpgt_epi32(_mm_sub_epi32(v19, v13), _mm_sub_epi32(v18, v13));
        v21 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v20, v18), _mm_and_si128(v19, v20)));
        if ( (v10 & 3) == 0 )
        {
LABEL_16:
          v23 = v21 + 1;
          goto LABEL_17;
        }
        v6 = (const __m128i *)((char *)v6 + 4 * (v10 & 0xFFFFFFFFFFFFFFFCLL));
      }
      if ( v21 < v6->m128i_i32[0] )
        v21 = v6->m128i_i32[0];
      if ( v8 != (__int32 *)((char *)v6->m128i_i64 + 4) )
      {
        if ( v21 < v6->m128i_i32[1] )
          v21 = v6->m128i_u32[1];
        if ( v8 != (__int32 *)&v6->m128i_u64[1] )
        {
          v22 = v6->m128i_u32[2];
          if ( v21 < v22 )
            v21 = v22;
        }
      }
      goto LABEL_16;
    }
  }
  v23 = 2;
LABEL_17:
  v24 = &v647;
  v647 = nullptr;
  v648 = nullptr;
  v646 = a2;
  sub_313C10(&v647);
  v25 = v647;
  v26 = v648;
  v549 = a2;
  v494 = v647;
  v647[*(v647 - 1)] = -1;
  v493 = v26;
  ++*(v25 - 1);
  if ( v26 )
  {
    v27 = *(v26 - 1);
    if ( v27 < v23 )
    {
LABEL_19:
      v28 = v26;
      while ( !v28 || *(v28 - 2) < v23 )
      {
        v646 = a2;
        v647 = v494;
        v648 = v493;
        sub_313C10(&v648);
        v494 = v647;
        v28 = v648;
        v493 = v648;
      }
      *(v28 - 1) = v23;
      v29 = 4LL * v27;
      v30 = &v28[(unsigned __int64)v29 / 4];
      v31 = 4LL * v23;
      if ( v29 != v31 )
        memset(v30, 0, v31 - v29);
      result = (__int64)*a1;
      if ( !*a1 )
        goto LABEL_800;
      goto LABEL_26;
    }
    result = (__int64)*a1;
    *(v26 - 1) = v23;
    if ( !result )
      goto LABEL_800;
  }
  else
  {
    v27 = 0;
    if ( v23 )
      goto LABEL_19;
    result = (__int64)*a1;
    if ( !*a1 )
      return sub_186B220(v494 - 2);
  }
LABEL_26:
  v33 = (unsigned int *)(result + 4LL * *(unsigned int *)(result - 4));
  if ( v33 == (unsigned int *)result )
    goto LABEL_796;
  v609 = nullptr;
  v34 = (unsigned int *)result;
  do
  {
    v35 = *v34;
    v36 = *v34;
    v640 = v609;
    sub_506520(&v640, v36);
    v609 = v640;
    v37 = &v493[v35];
    if ( v494 )
    {
      v38 = *(v494 - 1);
      *v37 = v38;
      v39 = v38;
      v40 = *(v494 - 1);
      if ( (_DWORD)v40 != *(v494 - 2) )
        goto LABEL_30;
    }
    else
    {
      *v37 = 0;
      v39 = 0;
      v38 = 0;
    }
    v510 = v39;
    v646 = v549;
    v647 = v494;
    v648 = v493;
    sub_313C10(v24);
    v39 = v510;
    v549 = v646;
    v493 = v648;
    v494 = v647;
    v40 = *(v647 - 1);
LABEL_30:
    v41 = v494;
    v494[v40] = v35;
    ++*(v494 - 1);
    v42 = v39 >> 1;
    v43 = v494[v38];
    v44 = &v494[v39];
    if ( !(v39 >> 1) )
      goto LABEL_58;
    v45 = v549;
    v495 = v33;
    v517 = v34;
    v531 = v24;
    v46 = *(_QWORD *)v549;
    while ( 2 )
    {
      v47 = &v41[v42];
      v48 = *(unsigned int *)(v45 + 8);
      v49 = *v47;
      v50 = v48 - 1;
      v51 = 24 * v48;
      v52 = v46 + 24 * v48;
      v53 = 24LL * ((unsigned int)v43 & ((_DWORD)v48 - 1));
      v54 = v46 + v53;
      if ( v53 != 24 * v48 )
      {
        v55 = v46 + v53;
        do
        {
          v56 = *(_DWORD *)(v55 + 4);
          if ( v56 == 2 )
          {
            if ( *(_DWORD *)v55 == (_DWORD)v43 && *(_DWORD *)(v55 + 8) == (_DWORD)v43 )
            {
              v57 = *(_QWORD *)(v55 + 16);
              if ( !v57 )
                goto LABEL_84;
              goto LABEL_40;
            }
          }
          else if ( !v56 )
          {
            goto LABEL_841;
          }
          v55 += 24;
        }
        while ( v52 != v55 );
      }
      if ( v46 == v54 )
LABEL_841:
        BUG();
      v74 = v46;
      while ( 1 )
      {
        v75 = *(_DWORD *)(v74 + 4);
        if ( v75 != 2 )
        {
          if ( !v75 )
            goto LABEL_841;
          goto LABEL_79;
        }
        if ( *(_DWORD *)v74 == (_DWORD)v43 && *(_DWORD *)(v74 + 8) == (_DWORD)v43 )
          break;
LABEL_79:
        v74 += 24;
        if ( v54 == v74 )
          goto LABEL_841;
      }
      v57 = *(_QWORD *)(v74 + 16);
      if ( !v57 )
      {
LABEL_84:
        v58 = 0;
        goto LABEL_44;
      }
LABEL_40:
      v58 = *(_DWORD *)(v57 - 4);
      if ( v58 )
      {
        v550 = v42;
        v59 = v58;
        v58 = 0;
        src = v47;
        v567 = v46;
        v573 = v50;
        v600 = v39;
        v610 = v45;
        v587 = v52;
        v60 = v57;
        do
        {
          v60 += 4;
          v58 += __popcountdi2();
        }
        while ( v57 + 4 * v59 != v60 );
        v42 = v550;
        v47 = src;
        v46 = v567;
        v50 = v573;
        v52 = v587;
        v39 = v600;
        v45 = v610;
      }
LABEL_44:
      v61 = 24LL * ((unsigned int)v49 & v50);
      v62 = v46 + v61;
      if ( v51 != v61 )
      {
        v63 = v46 + v61;
        do
        {
          v64 = *(_DWORD *)(v63 + 4);
          if ( v64 == 2 )
          {
            if ( (_DWORD)v49 == *(_DWORD *)v63 && (_DWORD)v49 == *(_DWORD *)(v63 + 8) )
            {
              v65 = *(_QWORD *)(v63 + 16);
              if ( !v65 )
                goto LABEL_75;
              goto LABEL_52;
            }
          }
          else if ( !v64 )
          {
            goto LABEL_841;
          }
          v63 += 24;
        }
        while ( v52 != v63 );
      }
      if ( v46 == v62 )
        goto LABEL_841;
      v72 = v46;
      while ( 2 )
      {
        v73 = *(_DWORD *)(v72 + 4);
        if ( v73 != 2 )
        {
          if ( !v73 )
            goto LABEL_841;
LABEL_70:
          v72 += 24;
          if ( v62 == v72 )
            goto LABEL_841;
          continue;
        }
        break;
      }
      if ( (_DWORD)v49 != *(_DWORD *)v72 || (_DWORD)v49 != *(_DWORD *)(v72 + 8) )
        goto LABEL_70;
      v65 = *(_QWORD *)(v72 + 16);
      if ( !v65 )
      {
LABEL_75:
        v33 = v495;
        v34 = v517;
        v24 = v531;
        v44 = &v494[v39];
        goto LABEL_58;
      }
LABEL_52:
      v66 = *(unsigned int *)(v65 - 4);
      if ( !(_DWORD)v66 )
        goto LABEL_75;
      v551 = v42;
      v67 = v65 + 4 * v66;
      v68 = 0;
      srca = v47;
      v568 = v46;
      v574 = v39;
      v588 = v45;
      do
      {
        v65 += 4;
        v68 += __popcountdi2();
      }
      while ( v67 != v65 );
      v41 = v494;
      v44 = srca;
      v39 = v574;
      v46 = v568;
      v45 = v588;
      if ( v58 < v68 )
      {
        v494[v574] = v49;
        v493[v49] = v574;
        v39 = v551;
        v42 = v551 >> 1;
        if ( !(v551 >> 1) )
        {
          v33 = v495;
          v34 = v517;
          v39 = 1;
          v24 = v531;
          goto LABEL_58;
        }
        continue;
      }
      break;
    }
    v33 = v495;
    v34 = v517;
    v44 = &v494[v574];
    v24 = v531;
LABEL_58:
    result = (__int64)v493;
    ++v34;
    *v44 = v43;
    v493[v43] = v39;
  }
  while ( v33 != v34 );
  if ( !v609 )
  {
LABEL_796:
    if ( !v493 )
    {
      if ( !v494 )
        return result;
      return sub_186B220(v494 - 2);
    }
LABEL_800:
    sub_186B220(v493 - 2);
    result = (__int64)v494;
    if ( !v494 )
      return result;
    return sub_186B220(v494 - 2);
  }
LABEL_60:
  v69 = v609;
  v70 = (unsigned int)*(v609 - 1);
  while ( &v609[v70] != v69 )
  {
    if ( *v69++ )
    {
      v76 = v494[1];
      v641 = nullptr;
      v569 = v76;
      v77 = sub_968CC0(*(_DWORD **)a2, *(_DWORD *)(a2 + 8), v76);
      v78 = (__int64 *)(v77 + 4);
      v79 = v77;
      v80 = *((_QWORD *)v77 + 2);
      v649 = v78;
      if ( v80 )
      {
        v81 = *(_DWORD *)(v80 - 4);
        LODWORD(v650) = 0;
        v82 = 32 * v81;
        HIDWORD(v650) = v82;
      }
      else
      {
        v82 = 0;
        v650 = 0;
      }
      sub_313A20(&v649);
      v649 = v78;
      v83 = v650;
      v650 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v82), 224).m128i_u64[0];
      sub_313A20(&v649);
      v84 = v650;
      if ( (_DWORD)v650 == v83 )
      {
LABEL_744:
        srcb = nullptr;
        goto LABEL_215;
      }
      srcb = nullptr;
      while ( 1 )
      {
        v85 = v83 >> 5;
        if ( (unsigned int)v85 < (unsigned int)v70 && (v609[v85] & (1 << v83)) != 0 )
        {
          if ( !srcb || (v86 = *(srcb - 1), (_DWORD)v86 == *(srcb - 2)) )
          {
            v509 = v84;
            v642 = srcb;
            sub_2FD3F0(&v642);
            v84 = v509;
            srcb = v642;
            v86 = *(v642 - 1);
          }
          srcb[v86] = v83;
          ++*(srcb - 1);
        }
        ++v83;
        v87 = *((_QWORD *)v79 + 2);
        if ( v83 == v82 )
        {
          if ( v87 )
          {
            v88 = v83 >> 5;
            if ( v83 >> 5 < *(_DWORD *)(v87 - 4) )
            {
LABEL_158:
              v89 = *(_DWORD *)(v87 + 4LL * v88);
              if ( (v89 & (1 << v83)) == 0 && v82 != v83 )
              {
LABEL_103:
                while ( !v89 )
                {
                  v83 += 32;
                  ++v88;
                  if ( v83 == v82 )
                    goto LABEL_111;
LABEL_102:
                  v89 = *(_DWORD *)(v87 + 4LL * v88);
                }
                if ( v82 != v83 )
                {
                  v90 = v83 >> 5;
                  if ( v87 )
                  {
                    if ( (unsigned int)v90 < *(_DWORD *)(v87 - 4) && (*(_DWORD *)(v87 + 4 * v90) & (1 << v83)) != 0
                      || (++v83, v83 != v82) )
                    {
                      do
                      {
                        v91 = v83 >> 5;
                        if ( (unsigned int)v91 < *(_DWORD *)(v87 - 4)
                          && (*(_DWORD *)(v87 + 4 * v91) & (1 << (v83 & 0x1F))) != 0 )
                        {
                          break;
                        }
                        if ( (v83 & 0x1F) == 0 )
                          break;
                        ++v83;
                      }
                      while ( v82 != v83 );
                    }
                  }
                  else
                  {
                    while ( ++v83 != v82 )
                    {
                      if ( (v83 & 0x1F) == 0 )
                      {
                        if ( v84 != v83 )
                          goto LABEL_112;
                        goto LABEL_121;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ( v87 )
        {
          while ( 1 )
          {
            v88 = v83 >> 5;
            if ( v83 >> 5 < *(_DWORD *)(v87 - 4) && (*(_DWORD *)(v87 + 4LL * v88) & (1 << (v83 & 0x1F))) != 0 )
              break;
            if ( (v83 & 0x1F) == 0 )
              break;
            if ( v82 == ++v83 )
            {
              v88 = v82 >> 5;
              if ( v82 >> 5 >= *(_DWORD *)(v87 - 4) )
                goto LABEL_111;
              goto LABEL_158;
            }
          }
          if ( v88 < *(_DWORD *)(v87 - 4) )
            goto LABEL_158;
          if ( v82 != v83 )
            goto LABEL_102;
        }
        else if ( (v83 & 0x1F) != 0 )
        {
          while ( ++v83 != v82 )
          {
            if ( (v83 & 0x1F) == 0 )
              goto LABEL_116;
          }
        }
        else
        {
LABEL_116:
          if ( v83 != v82 )
          {
            v88 = v83 >> 5;
            v89 = *(_DWORD *)(4LL * (v83 >> 5));
            goto LABEL_103;
          }
        }
LABEL_111:
        if ( v84 == v83 )
          break;
LABEL_112:
        LODWORD(v70) = *(v609 - 1);
      }
LABEL_121:
      if ( !srcb )
        goto LABEL_744;
      v92 = *(srcb - 1);
      v93 = (int *)&srcb[v92];
      if ( &srcb[v92] == srcb )
        goto LABEL_215;
      _BitScanReverse64(&v94, (v92 * 4) >> 2);
      sub_978910(srcb, &srcb[v92], 2LL * (int)v94, a2);
      v95 = (int *)(srcb + 1);
      if ( (unsigned __int64)v92 <= 16 )
      {
        if ( v92 == 1 )
          goto LABEL_668;
        while ( 1 )
        {
          while ( 1 )
          {
            v398 = *v95;
            v399 = *srcb;
            if ( !sub_969020(a2, *v95, *srcb) )
              break;
            if ( (char *)v95 - (char *)srcb <= 4 )
            {
              if ( (char *)v95 - (char *)srcb == 4 )
                *v95 = v399;
            }
            else
            {
              memmove(srcb + 1, srcb, (char *)v95 - (char *)srcb);
            }
            ++v95;
            *srcb = v398;
            if ( v93 == v95 )
              goto LABEL_668;
          }
          v400 = a2;
          v401 = v95;
          v547 = v93;
          v562 = v95;
          v402 = v398;
          v403 = *(_QWORD *)a2;
          for ( i = v401; ; --i )
          {
            v405 = *(unsigned int *)(v400 + 8);
            v406 = *(i - 1);
            v407 = v405 - 1;
            v408 = 24LL * (((_DWORD)v405 - 1) & (unsigned int)v402);
            v409 = 24 * v405;
            v410 = v403 + v408;
            v411 = v403 + 24 * v405;
            if ( v408 != 24 * v405 )
            {
              v412 = v403 + v408;
              do
              {
                v413 = *(_DWORD *)(v412 + 4);
                if ( v413 == 2 )
                {
                  if ( v402 == *(_DWORD *)v412 && v402 == *(_DWORD *)(v412 + 8) )
                  {
                    v414 = *(_QWORD *)(v412 + 16);
                    if ( !v414 )
                      goto LABEL_714;
                    goto LABEL_642;
                  }
                }
                else if ( !v413 )
                {
                  goto LABEL_850;
                }
                v412 += 24;
              }
              while ( v411 != v412 );
            }
            if ( v403 == v410 )
              goto LABEL_850;
            v454 = v403;
            while ( 1 )
            {
              v455 = *(_DWORD *)(v454 + 4);
              if ( v455 != 2 )
              {
                if ( !v455 )
                  goto LABEL_850;
                goto LABEL_709;
              }
              if ( v402 == *(_DWORD *)v454 && v402 == *(_DWORD *)(v454 + 8) )
                break;
LABEL_709:
              v454 += 24;
              if ( v410 == v454 )
LABEL_850:
                BUG();
            }
            v414 = *(_QWORD *)(v454 + 16);
            if ( !v414 )
            {
LABEL_714:
              v415 = 0;
              goto LABEL_646;
            }
LABEL_642:
            v415 = *(_DWORD *)(v414 - 4);
            if ( v415 )
            {
              v527 = *(i - 1);
              v416 = v415;
              v415 = 0;
              v541 = v407;
              v417 = v414 + 4 * v416;
              v599 = v400;
              v511 = v402;
              v418 = v414;
              v419 = v409;
              do
              {
                v418 += 4;
                v415 += __popcountdi2();
              }
              while ( v417 != v418 );
              v402 = v511;
              v406 = v527;
              v409 = v419;
              v407 = v541;
              v400 = v599;
            }
LABEL_646:
            v420 = 24LL * (v406 & v407);
            v421 = v403 + v420;
            if ( v409 != v420 )
              break;
LABEL_659:
            if ( v403 == v421 )
              goto LABEL_850;
            v430 = v403;
            while ( 1 )
            {
              v431 = *(_DWORD *)(v430 + 4);
              if ( v431 != 2 )
              {
                if ( !v431 )
                  goto LABEL_850;
                goto LABEL_662;
              }
              if ( v406 == *(_DWORD *)v430 && v406 == *(_DWORD *)(v430 + 8) )
                break;
LABEL_662:
              v430 += 24;
              if ( v421 == v430 )
                goto LABEL_850;
            }
            v424 = *(_QWORD *)(v430 + 16);
            if ( !v424 )
              goto LABEL_667;
LABEL_654:
            v425 = *(unsigned int *)(v424 - 4);
            if ( !(_DWORD)v425 )
              goto LABEL_667;
            v528 = v406;
            v426 = v424 + 4 * v425;
            v427 = 0;
            v512 = v402;
            v428 = v424;
            v429 = v400;
            do
            {
              v428 += 4;
              v427 += __popcountdi2();
            }
            while ( v428 != v426 );
            v402 = v512;
            v400 = v429;
            if ( v415 >= v427 )
              goto LABEL_667;
            *i = v528;
          }
          v422 = v403 + v420;
          while ( 1 )
          {
            v423 = *(_DWORD *)(v422 + 4);
            if ( v423 != 2 )
            {
              if ( !v423 )
                goto LABEL_850;
              goto LABEL_649;
            }
            if ( v406 == *(_DWORD *)v422 && v406 == *(_DWORD *)(v422 + 8) )
              break;
LABEL_649:
            v422 += 24;
            if ( v411 == v422 )
              goto LABEL_659;
          }
          v424 = *(_QWORD *)(v422 + 16);
          if ( v424 )
            goto LABEL_654;
LABEL_667:
          v93 = v547;
          *i = v402;
          v95 = v562 + 1;
          if ( v547 == v562 + 1 )
            goto LABEL_668;
        }
      }
      v96 = (int *)(srcb + 16);
      v97 = (_QWORD *)a2;
      do
      {
        while ( 1 )
        {
          v99 = *srcb;
          v496 = *v95;
          v100 = sub_969020((__int64)v97, *v95, *srcb);
          v98 = v496;
          if ( !v100 )
            break;
          if ( (char *)v95 - (char *)srcb <= 4 )
          {
            if ( (char *)v95 - (char *)srcb == 4 )
              *v95 = v99;
          }
          else
          {
            memmove(srcb + 1, srcb, (char *)v95 - (char *)srcb);
            v98 = v496;
          }
          ++v95;
          *srcb = v98;
          if ( v96 == v95 )
            goto LABEL_173;
        }
        v101 = *v97;
        v542 = v93;
        v102 = v97;
        v103 = v496;
        v575 = v95;
        v104 = v95;
        v552 = v96;
        v105 = v101;
        while ( 2 )
        {
          v106 = *((unsigned int *)v102 + 2);
          v107 = *(v104 - 1);
          v108 = v106 - 1;
          v109 = 24LL * (((_DWORD)v106 - 1) & (unsigned int)v103);
          v110 = 24 * v106;
          v111 = v105 + v109;
          v112 = v105 + 24 * v106;
          if ( v109 != 24 * v106 )
          {
            v113 = v105 + v109;
            do
            {
              v114 = *(_DWORD *)(v113 + 4);
              if ( v114 == 2 )
              {
                if ( v103 == *(_DWORD *)v113 && v103 == *(_DWORD *)(v113 + 8) )
                {
                  v115 = *(_QWORD *)(v113 + 16);
                  if ( !v115 )
                    goto LABEL_208;
                  goto LABEL_138;
                }
              }
              else if ( !v114 )
              {
                goto LABEL_847;
              }
              v113 += 24;
            }
            while ( v112 != v113 );
          }
          if ( v105 == v111 )
            goto LABEL_847;
          v162 = v105;
          while ( 1 )
          {
            v163 = *(_DWORD *)(v162 + 4);
            if ( v163 != 2 )
            {
              if ( !v163 )
                goto LABEL_847;
              goto LABEL_203;
            }
            if ( v103 == *(_DWORD *)v162 && v103 == *(_DWORD *)(v162 + 8) )
              break;
LABEL_203:
            v162 += 24;
            if ( v111 == v162 )
LABEL_847:
              BUG();
          }
          v115 = *(_QWORD *)(v162 + 16);
          if ( !v115 )
          {
LABEL_208:
            v116 = 0;
            goto LABEL_142;
          }
LABEL_138:
          v116 = *(_DWORD *)(v115 - 4);
          if ( v116 )
          {
            v518 = v108;
            v117 = v116;
            v116 = 0;
            v532 = v104;
            v118 = v115 + 4 * v117;
            v589 = v102;
            v601 = v110;
            v497 = *(v104 - 1);
            v119 = v115;
            v120 = v112;
            v121 = v119;
            do
            {
              v121 += 4;
              v116 += __popcountdi2();
            }
            while ( v121 != v118 );
            v107 = v497;
            v108 = v518;
            v112 = v120;
            v104 = v532;
            v102 = v589;
            v110 = v601;
          }
LABEL_142:
          v122 = 24LL * (v107 & v108);
          v123 = v105 + v122;
          if ( v110 != v122 )
          {
            v124 = v105 + v122;
            do
            {
              v125 = *(_DWORD *)(v124 + 4);
              if ( v125 == 2 )
              {
                if ( v107 == *(_DWORD *)v124 && v107 == *(_DWORD *)(v124 + 8) )
                {
                  v126 = *(_QWORD *)(v124 + 16);
                  if ( !v126 )
                    goto LABEL_172;
                  goto LABEL_150;
                }
              }
              else if ( !v125 )
              {
                goto LABEL_847;
              }
              v124 += 24;
            }
            while ( v112 != v124 );
          }
          if ( v105 == v123 )
            goto LABEL_847;
          v130 = v105;
          while ( 2 )
          {
            v131 = *(_DWORD *)(v130 + 4);
            if ( v131 != 2 )
            {
              if ( !v131 )
                goto LABEL_847;
LABEL_167:
              v130 += 24;
              if ( v123 == v130 )
                goto LABEL_847;
              continue;
            }
            break;
          }
          if ( v107 != *(_DWORD *)v130 || v107 != *(_DWORD *)(v130 + 8) )
            goto LABEL_167;
          v126 = *(_QWORD *)(v130 + 16);
          if ( !v126 )
            break;
LABEL_150:
          v127 = *(unsigned int *)(v126 - 4);
          if ( (_DWORD)v127 )
          {
            v498 = v107;
            v128 = v126 + 4 * v127;
            v129 = 0;
            v519 = v104;
            v533 = v102;
            do
            {
              v126 += 4;
              v129 += __popcountdi2();
            }
            while ( v126 != v128 );
            v104 = v519;
            v102 = v533;
            if ( v116 < v129 )
            {
              *v519 = v498;
              v104 = v519 - 1;
              continue;
            }
          }
          break;
        }
LABEL_172:
        v96 = v552;
        *v104 = v103;
        v93 = v542;
        v97 = v102;
        v95 = v575 + 1;
      }
      while ( v552 != v575 + 1 );
LABEL_173:
      v132 = v93;
      v133 = v96;
      v134 = *(_QWORD *)a2;
      v135 = a2;
      do
      {
        v576 = v132;
        v136 = *v133;
        v137 = v133;
        v590 = v133;
        while ( 2 )
        {
          v138 = *(unsigned int *)(v135 + 8);
          v139 = *(v137 - 1);
          v140 = v138 - 1;
          v141 = 24 * v138;
          v142 = v134 + 24 * v138;
          v143 = 24LL * (((_DWORD)v138 - 1) & v136);
          v144 = v134 + v143;
          if ( v143 != 24 * v138 )
          {
            v145 = v134 + v143;
            do
            {
              v146 = *(_DWORD *)(v145 + 4);
              if ( v146 == 2 )
              {
                if ( v136 == *(_DWORD *)v145 && v136 == *(_DWORD *)(v145 + 8) )
                {
                  v147 = *(_QWORD *)(v145 + 16);
                  if ( !v147 )
                    goto LABEL_764;
                  goto LABEL_183;
                }
              }
              else if ( !v146 )
              {
                goto LABEL_840;
              }
              v145 += 24;
            }
            while ( v142 != v145 );
          }
          if ( v134 == v144 )
            goto LABEL_840;
          v467 = v134;
          while ( 1 )
          {
            v468 = *(_DWORD *)(v467 + 4);
            if ( v468 != 2 )
            {
              if ( !v468 )
                goto LABEL_840;
              goto LABEL_759;
            }
            if ( v136 == *(_DWORD *)v467 && v136 == *(_DWORD *)(v467 + 8) )
              break;
LABEL_759:
            v467 += 24;
            if ( v144 == v467 )
LABEL_840:
              BUG();
          }
          v147 = *(_QWORD *)(v467 + 16);
          if ( !v147 )
          {
LABEL_764:
            v148 = 0;
            goto LABEL_187;
          }
LABEL_183:
          v148 = *(_DWORD *)(v147 - 4);
          if ( v148 )
          {
            v149 = v148;
            v499 = v137;
            v148 = 0;
            v520 = v134;
            v534 = v140;
            v150 = v147 + 4 * v149;
            v543 = v135;
            v553 = v141;
            v151 = v147;
            do
            {
              v151 += 4;
              v148 += __popcountdi2();
            }
            while ( v150 != v151 );
            v137 = v499;
            v134 = v520;
            v140 = v534;
            v135 = v543;
            v141 = v553;
          }
LABEL_187:
          v152 = 24LL * (v139 & v140);
          v153 = v134 + v152;
          if ( v141 != v152 )
          {
            v154 = v134 + v152;
            do
            {
              v155 = *(_DWORD *)(v154 + 4);
              if ( v155 == 2 )
              {
                if ( v139 == *(_DWORD *)v154 && v139 == *(_DWORD *)(v154 + 8) )
                {
                  v156 = *(_QWORD *)(v154 + 16);
                  if ( !v156 )
                    goto LABEL_754;
                  goto LABEL_195;
                }
              }
              else if ( !v155 )
              {
                goto LABEL_840;
              }
              v154 += 24;
            }
            while ( v142 != v154 );
          }
          if ( v134 == v153 )
            goto LABEL_840;
          v465 = v134;
          while ( 2 )
          {
            v466 = *(_DWORD *)(v465 + 4);
            if ( v466 != 2 )
            {
              if ( !v466 )
                goto LABEL_840;
LABEL_749:
              v465 += 24;
              if ( v153 == v465 )
                goto LABEL_840;
              continue;
            }
            break;
          }
          if ( v139 != *(_DWORD *)v465 || v139 != *(_DWORD *)(v465 + 8) )
            goto LABEL_749;
          v156 = *(_QWORD *)(v465 + 16);
          if ( !v156 )
            break;
LABEL_195:
          v157 = *(unsigned int *)(v156 - 4);
          if ( (_DWORD)v157 )
          {
            v500 = v137;
            v158 = v156 + 4 * v157;
            v159 = 0;
            v535 = v134;
            v521 = v148;
            v160 = v156;
            v161 = v135;
            do
            {
              v160 += 4;
              v159 += __popcountdi2();
            }
            while ( v160 != v158 );
            v137 = v500;
            v135 = v161;
            v134 = v535;
            if ( v521 < v159 )
            {
              *v500 = v139;
              v137 = v500 - 1;
              continue;
            }
          }
          break;
        }
LABEL_754:
        v132 = v576;
        *v137 = v136;
        v133 = v590 + 1;
      }
      while ( v576 != v590 + 1 );
LABEL_668:
      v529 = &srcb[*(srcb - 1)];
      if ( v529 == srcb )
        goto LABEL_215;
      v432 = v641;
      v167 = srcb;
      while ( 2 )
      {
        v433 = *v167;
        if ( v493 )
          v434 = *(v493 - 1);
        else
          v434 = 0;
        if ( (int)v433 < v434 )
        {
          v462 = v493[v433];
          if ( v432 )
          {
            v435 = *((_DWORD *)v432 - 1);
            if ( v435 )
            {
              v436 = v462 != 0;
              v437 = 32 * v435;
              if ( (*v432 & 1) == 0 )
              {
                if ( !v437 )
                  goto LABEL_211;
                goto LABEL_677;
              }
LABEL_725:
              v164 = 0;
              goto LABEL_685;
            }
            if ( !v462 )
              goto LABEL_214;
            v165 = v433 >> 5;
            v166 = v165 + 1;
          }
          else
          {
            if ( !v462 )
              goto LABEL_214;
            v165 = v433 >> 5;
            v166 = v165 + 1;
            v463 = (_QWORD *)sub_186B270(0x10u);
            v435 = 0;
            v432 = v463 + 1;
            *v463 = 2;
            v641 = v463 + 1;
          }
LABEL_718:
          while ( 1 )
          {
            v459 = *((_DWORD *)v432 - 2);
            if ( v459 >= v166 )
              break;
            v456 = (3 * v459 + 1) >> 1;
            v457 = 4 * v456 + 8;
            if ( 4 * v459 + 8 >= v457 || v459 >= v456 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v649, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v649);
              sub_233E40((__int64)&v649);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v514 = v435;
            v458 = (unsigned int *)sub_186B300(v432 - 8, v457);
            v432 = v458 + 2;
            *v458 = v456;
            v435 = v514;
            v641 = v458 + 2;
          }
          *((_DWORD *)v432 - 1) = v166;
          v460 = 4LL * v435;
          v461 = 4LL * v166;
          if ( v460 != v461 )
            memset(&v432[v460], 0, v461 - v460);
LABEL_213:
          *(_DWORD *)&v432[4 * v165] |= 1 << v433;
          goto LABEL_214;
        }
        if ( !v432 )
          goto LABEL_214;
        v435 = *((_DWORD *)v432 - 1);
        if ( !v435 )
          goto LABEL_214;
        v436 = 0;
        v437 = 32 * v435;
        if ( (*v432 & 1) != 0 )
          goto LABEL_725;
        if ( !v437 )
          goto LABEL_214;
LABEL_677:
        v438 = v432;
        v439 = 0;
        while ( !*v438 )
        {
          v439 += 32;
          ++v438;
          if ( v439 == v437 )
            goto LABEL_211;
        }
        if ( v439 == v437 )
        {
LABEL_211:
          if ( !v436 )
            goto LABEL_214;
          v165 = v433 >> 5;
          v166 = v165 + 1;
          if ( (unsigned int)v165 < v435 )
            goto LABEL_213;
          goto LABEL_718;
        }
        v440 = v439 >> 5;
        if ( (unsigned int)v440 < v435 )
          v164 = ((*(_DWORD *)&v432[4 * v440] & 1) == 0) + v439;
        else
          v164 = v439 + 1;
        while ( 1 )
        {
          v441 = v164 >> 5;
          if ( (unsigned int)v441 < v435 && (*(_DWORD *)&v432[4 * v441] & (1 << (v164 & 0x1F))) != 0 )
            break;
          if ( (v164 & 0x1F) == 0 )
            break;
          if ( ++v164 == v437 )
            goto LABEL_211;
        }
LABEL_685:
        HIDWORD(v650) = v437;
        v649 = (__int64 *)&v641;
        if ( v164 == v437 )
          goto LABEL_211;
        v442 = *(unsigned int *)(a2 + 8);
        v443 = *(_QWORD *)a2;
        v444 = 24 * v442;
        v445 = *(_QWORD *)a2 + 24 * v442;
        v446 = 24LL * (v433 & ((_DWORD)v442 - 1));
        v447 = v164;
        v448 = *(_QWORD *)a2 + v446;
        if ( v446 == 24 * v442 )
        {
LABEL_698:
          if ( v443 == v448 )
            goto LABEL_849;
          v449 = v443;
          while ( 1 )
          {
            v453 = *(_DWORD *)(v449 + 4);
            if ( v453 == 2 )
            {
              if ( v433 == *(_DWORD *)v449 && v433 == *(_DWORD *)(v449 + 8) )
                goto LABEL_693;
            }
            else if ( !v453 )
            {
              goto LABEL_849;
            }
            v449 += 24;
            if ( v449 == v448 )
LABEL_849:
              BUG();
          }
        }
        while ( 2 )
        {
          v449 = v448;
          while ( 2 )
          {
            v450 = *(_DWORD *)(v449 + 4);
            if ( v450 != 2 )
            {
              if ( !v450 )
                goto LABEL_849;
LABEL_689:
              v449 += 24;
              if ( v449 == v445 )
                goto LABEL_698;
              continue;
            }
            break;
          }
          if ( v433 != *(_DWORD *)v449 || v433 != *(_DWORD *)(v449 + 8) )
            goto LABEL_689;
LABEL_693:
          v451 = *(_QWORD *)(v449 + 16);
          v586 = v444;
          v563 = v446;
          v452 = v447 >> 5;
          v548 = v443;
          v513 = v435;
          if ( v451 && (unsigned int)v452 < *(_DWORD *)(v451 - 4) && (*(_DWORD *)(v451 + 4 * v452) & (1 << v447)) != 0 )
          {
            LODWORD(v650) = v447 + 1;
            sub_313A20(&v649);
            v435 = v513;
            v447 = v650;
            v443 = v548;
            v446 = v563;
            v444 = v586;
            if ( (_DWORD)v650 != v437 )
            {
              if ( v563 == v586 )
                goto LABEL_698;
              continue;
            }
            goto LABEL_211;
          }
          break;
        }
LABEL_214:
        if ( v529 != ++v167 )
          continue;
        break;
      }
LABEL_215:
      sub_506520(&v641, v569);
      v649 = (__int64 *)&v641;
      if ( v641 )
      {
        v168 = *((_DWORD *)v641 - 1);
        v501 = v641;
        LODWORD(v650) = 0;
        v169 = 32 * v168;
        HIDWORD(v650) = v169;
        sub_313A20(&v649);
        v170 = v650;
        v649 = (__int64 *)&v641;
        v650 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v169), 224).m128i_u64[0];
        sub_313A20(&v649);
        v171 = v650;
        v172 = v501;
        if ( v170 == (_DWORD)v650 )
        {
          v649 = (__int64 *)&v641;
          goto LABEL_320;
        }
LABEL_217:
        v173 = v172;
        v174 = v549;
        v638 = v171;
        v175 = v169;
        v176 = a2;
        v177 = *(_QWORD *)a2;
LABEL_218:
        while ( 2 )
        {
          while ( 2 )
          {
            v178 = v170 >> 5;
            if ( v170 >> 5 < *(v609 - 1) )
              v609[v178] &= ~(1 << v170);
            v179 = *(unsigned int *)(v176 + 8);
            v180 = v179 - 1;
            v181 = 24LL * (v170 & ((_DWORD)v179 - 1));
            v182 = v177 + v181;
            if ( v181 == 24 * v179 )
            {
LABEL_497:
              if ( v177 == v182 )
                goto LABEL_846;
              v183 = v177;
              while ( 1 )
              {
                v353 = *(_DWORD *)(v183 + 4);
                if ( v353 == 2 )
                {
                  if ( v170 == *(_DWORD *)v183 && v170 == *(_DWORD *)(v183 + 8) )
                    goto LABEL_227;
                }
                else if ( !v353 )
                {
                  goto LABEL_846;
                }
                v183 += 24;
                if ( v182 == v183 )
LABEL_846:
                  BUG();
              }
            }
            v183 = v177 + v181;
            while ( 2 )
            {
              v184 = *(_DWORD *)(v183 + 4);
              if ( v184 != 2 )
              {
                if ( !v184 )
                  goto LABEL_846;
LABEL_223:
                v183 += 24;
                if ( v177 + 24 * v179 == v183 )
                  goto LABEL_497;
                continue;
              }
              break;
            }
            if ( v170 != *(_DWORD *)v183 || v170 != *(_DWORD *)(v183 + 8) )
              goto LABEL_223;
LABEL_227:
            v185 = *(_DWORD **)(v183 + 16);
            if ( !v185 )
              goto LABEL_306;
            v186 = *(v185 - 1);
            if ( !v186 )
              goto LABEL_306;
            v187 = 32 * v186;
            v188 = *v185 & 1;
            if ( v188 )
            {
              v191 = 0;
LABEL_239:
              if ( v187 == v191 )
                goto LABEL_306;
              v193 = v178;
              v502 = v170 >> 5;
              v194 = v173;
              v195 = 4 * v193;
              LOBYTE(v193) = v170;
              v196 = v170;
              v197 = v176;
              v198 = v195;
              v199 = v175;
              v200 = v187;
              v611 = ~(1 << v193);
LABEL_241:
              v201 = 24 * v179;
              v202 = 24LL * (v191 & v180);
              v203 = v177 + v201;
              v204 = v177 + v202;
              if ( v202 != v201 )
              {
                v205 = v177 + v202;
                do
                {
                  v206 = *(_DWORD *)(v205 + 4);
                  if ( v206 == 2 )
                  {
                    if ( v191 == *(_DWORD *)v205 && v191 == *(_DWORD *)(v205 + 8) )
                    {
LABEL_248:
                      v207 = *(_QWORD *)(v205 + 16);
                      if ( v207 && v502 < *(_DWORD *)(v207 - 4) )
                        *(_DWORD *)(v207 + v198) &= v611;
                      if ( v493 )
                        v208 = *(v493 - 1);
                      else
                        v208 = 0;
                      if ( (int)v191 >= v208 )
                        goto LABEL_285;
                      v209 = v493[v191];
                      if ( !v209 )
                        goto LABEL_285;
                      v210 = v209 >> 1;
                      v211 = v494[v209];
                      if ( !(v209 >> 1) )
                        goto LABEL_283;
                      v616 = v198;
                      v212 = *(_QWORD *)v174;
                      v622 = v177;
                      v624 = v196;
                      v628 = v200;
                      v630 = v185;
                      v636 = v191;
                      v632 = v197;
                      v619 = v194;
                      v213 = v493;
                      v627 = v199;
                      v214 = v494;
LABEL_257:
                      v215 = *(unsigned int *)(v174 + 8);
                      v216 = v214[v210];
                      v217 = v215 - 1;
                      v218 = 24 * v215;
                      v219 = v212 + v218;
                      v220 = 24LL * ((unsigned int)v211 & v217);
                      v221 = v212 + v220;
                      if ( v220 != v218 )
                      {
                        v222 = v212 + v220;
                        do
                        {
                          v223 = *(_DWORD *)(v222 + 4);
                          if ( v223 == 2 )
                          {
                            if ( *(_DWORD *)v222 == (_DWORD)v211 && *(_DWORD *)(v222 + 8) == (_DWORD)v211 )
                            {
                              v224 = *(_QWORD *)(v222 + 16);
                              if ( !v224 )
                                goto LABEL_404;
                              goto LABEL_265;
                            }
                          }
                          else if ( !v223 )
                          {
                            goto LABEL_842;
                          }
                          v222 += 24;
                        }
                        while ( v219 != v222 );
                      }
                      if ( v212 == v221 )
                        goto LABEL_842;
                      v315 = v212;
                      while ( 1 )
                      {
                        v316 = *(_DWORD *)(v315 + 4);
                        if ( v316 == 2 )
                        {
                          if ( *(_DWORD *)v315 == (_DWORD)v211 && *(_DWORD *)(v315 + 8) == (_DWORD)v211 )
                          {
                            v224 = *(_QWORD *)(v315 + 16);
                            if ( !v224 )
                            {
LABEL_404:
                              LODWORD(v225) = 0;
LABEL_269:
                              v228 = 24LL * ((unsigned int)v216 & v217);
                              v229 = v212 + v228;
                              if ( v218 != v228 )
                              {
                                v230 = v212 + v228;
                                do
                                {
                                  v231 = *(_DWORD *)(v230 + 4);
                                  if ( v231 == 2 )
                                  {
                                    if ( (_DWORD)v216 == *(_DWORD *)v230 && (_DWORD)v216 == *(_DWORD *)(v230 + 8) )
                                    {
                                      v232 = *(_QWORD *)(v230 + 16);
                                      if ( !v232 )
                                        goto LABEL_413;
                                      goto LABEL_277;
                                    }
                                  }
                                  else if ( !v231 )
                                  {
                                    goto LABEL_842;
                                  }
                                  v230 += 24;
                                }
                                while ( v219 != v230 );
                              }
                              if ( v212 == v229 )
                                goto LABEL_842;
                              v317 = v212;
                              while ( 1 )
                              {
                                v318 = *(_DWORD *)(v317 + 4);
                                if ( v318 == 2 )
                                {
                                  if ( (_DWORD)v216 == *(_DWORD *)v317 && (_DWORD)v216 == *(_DWORD *)(v317 + 8) )
                                  {
                                    v232 = *(_QWORD *)(v317 + 16);
                                    if ( !v232 )
                                    {
LABEL_413:
                                      v198 = v616;
                                      v194 = v619;
                                      v177 = v622;
                                      v196 = v624;
                                      v238 = (unsigned int)v209;
                                      v199 = v627;
                                      v200 = v628;
                                      v185 = v630;
                                      v191 = v636;
                                      v197 = v632;
                                      goto LABEL_284;
                                    }
LABEL_277:
                                    v233 = *(unsigned int *)(v232 - 4);
                                    if ( !(_DWORD)v233 )
                                      goto LABEL_413;
                                    v523 = v209;
                                    v234 = v232 + 4 * v233;
                                    v235 = 0;
                                    v555 = v213;
                                    v571 = v214;
                                    v578 = v174;
                                    v537 = v211;
                                    v236 = v232;
                                    v237 = v210;
                                    do
                                    {
                                      v236 += 4;
                                      v235 += __popcountdi2();
                                    }
                                    while ( v234 != v236 );
                                    v214 = v571;
                                    v211 = v537;
                                    v209 = v523;
                                    v238 = v523;
                                    v213 = v555;
                                    v174 = v578;
                                    if ( (unsigned int)v225 < v235 )
                                    {
                                      v571[v523] = v216;
                                      v210 >>= 1;
                                      v555[v216] = v523;
                                      v209 = v237;
                                      if ( !(v237 >> 1) )
                                      {
                                        v198 = v616;
                                        v194 = v619;
                                        v177 = v622;
                                        v196 = v624;
                                        v199 = v627;
                                        v200 = v628;
                                        v185 = v630;
                                        v191 = v636;
                                        v197 = v632;
LABEL_283:
                                        v238 = 1;
                                        v209 = 1;
                                        goto LABEL_284;
                                      }
                                      goto LABEL_257;
                                    }
                                    v198 = v616;
                                    v194 = v619;
                                    v177 = v622;
                                    v196 = v624;
                                    v199 = v627;
                                    v200 = v628;
                                    v185 = v630;
                                    v191 = v636;
                                    v197 = v632;
LABEL_284:
                                    v494[v238] = v211;
                                    v493[v211] = v209;
LABEL_285:
                                    ++v191;
                                    v239 = *(v185 - 1);
                                    if ( v191 == v200 )
                                    {
                                      v240 = v191 >> 5;
                                      if ( v191 >> 5 < v239 )
                                      {
LABEL_551:
                                        v241 = v240;
                                        goto LABEL_288;
                                      }
                                    }
                                    else
                                    {
                                      while ( 1 )
                                      {
                                        v240 = v191 >> 5;
                                        if ( v191 >> 5 < v239 )
                                        {
                                          v241 = v240;
                                          if ( (v185[v240] & (1 << (v191 & 0x1F))) != 0 )
                                            break;
                                        }
                                        if ( (v191 & 0x1F) == 0 )
                                        {
                                          if ( v240 < v239 )
                                            goto LABEL_551;
                                          if ( v191 != v200 )
                                            goto LABEL_292;
                                          goto LABEL_305;
                                        }
                                        if ( v200 == ++v191 )
                                        {
                                          v240 = v200 >> 5;
                                          if ( v200 >> 5 < v239 )
                                            goto LABEL_551;
                                          goto LABEL_305;
                                        }
                                      }
LABEL_288:
                                      v242 = v185[v241];
                                      if ( (v242 & (1 << v191)) != 0 )
                                        goto LABEL_300;
                                      if ( v200 != v191 )
                                      {
                                        while ( !v242 )
                                        {
                                          v191 += 32;
                                          ++v240;
                                          if ( v200 == v191 )
                                            goto LABEL_305;
LABEL_292:
                                          v242 = v185[v240];
                                        }
                                        if ( v191 != v200 )
                                        {
                                          v243 = v191 >> 5;
                                          if ( (unsigned int)v243 >= v239 || (v185[v243] & (1 << v191)) == 0 )
                                            goto LABEL_297;
                                          while ( 1 )
                                          {
                                            v244 = v191 >> 5;
                                            if ( (unsigned int)v244 < v239 && (v185[v244] & (1 << (v191 & 0x1F))) != 0 )
                                              break;
                                            if ( (v191 & 0x1F) == 0 )
                                              break;
LABEL_297:
                                            if ( v200 == ++v191 )
                                              goto LABEL_305;
                                          }
LABEL_300:
                                          if ( v191 != v200 )
                                          {
                                            v179 = *(unsigned int *)(v197 + 8);
                                            v180 = v179 - 1;
                                            goto LABEL_241;
                                          }
                                        }
                                      }
                                    }
LABEL_305:
                                    v176 = v197;
                                    v175 = v199;
                                    v170 = v196;
                                    v173 = v194;
                                    goto LABEL_306;
                                  }
                                }
                                else if ( !v318 )
                                {
                                  goto LABEL_842;
                                }
                                v317 += 24;
                                if ( v229 == v317 )
LABEL_842:
                                  BUG();
                              }
                            }
LABEL_265:
                            v225 = *(unsigned int *)(v224 - 4);
                            if ( (_DWORD)v225 )
                            {
                              v522 = v209;
                              v226 = v224 + 4 * v225;
                              LODWORD(v225) = 0;
                              v554 = v217;
                              v570 = v213;
                              v577 = v214;
                              v591 = v174;
                              v602 = v218;
                              v536 = v211;
                              v227 = v224;
                              do
                              {
                                v227 += 4;
                                LODWORD(v225) = __popcountdi2() + v225;
                              }
                              while ( v226 != v227 );
                              v209 = v522;
                              v211 = v536;
                              v217 = v554;
                              v213 = v570;
                              v214 = v577;
                              v174 = v591;
                              v218 = v602;
                            }
                            goto LABEL_269;
                          }
                        }
                        else if ( !v316 )
                        {
                          goto LABEL_842;
                        }
                        v315 += 24;
                        if ( v221 == v315 )
                          goto LABEL_842;
                      }
                    }
                  }
                  else if ( !v206 )
                  {
                    goto LABEL_845;
                  }
                  v205 += 24;
                }
                while ( v203 != v205 );
              }
              if ( v177 == v204 )
                goto LABEL_845;
              v205 = v177;
              while ( 1 )
              {
                v319 = *(_DWORD *)(v205 + 4);
                if ( v319 == 2 )
                {
                  if ( v191 == *(_DWORD *)v205 && v191 == *(_DWORD *)(v205 + 8) )
                    goto LABEL_248;
                }
                else if ( !v319 )
                {
                  goto LABEL_845;
                }
                v205 += 24;
                if ( v204 == v205 )
LABEL_845:
                  BUG();
              }
            }
            v189 = *(_DWORD **)(v183 + 16);
            if ( !v187 )
              goto LABEL_306;
            while ( !*v189 )
            {
              v188 += 32;
              ++v189;
              if ( v187 == v188 )
                goto LABEL_306;
            }
            if ( v187 == v188 )
            {
LABEL_306:
              if ( ++v170 == v175 )
                goto LABEL_474;
LABEL_307:
              if ( v173 )
              {
                while ( 1 )
                {
                  v245 = v170 >> 5;
                  if ( v170 >> 5 < *(v173 - 1) && (v173[v245] & (1 << (v170 & 0x1F))) != 0 )
                    break;
                  if ( (v170 & 0x1F) == 0 )
                    break;
                  if ( v175 == ++v170 )
                  {
                    v245 = v175 >> 5;
                    break;
                  }
                }
                if ( v245 >= *(v173 - 1) )
                  goto LABEL_317;
LABEL_311:
                v246 = v173[v245];
                if ( (v246 & (1 << v170)) != 0 || v175 == v170 )
                {
LABEL_318:
                  if ( v638 == v170 )
                    goto LABEL_319;
                  continue;
                }
                while ( !v246 )
                {
LABEL_316:
                  ++v245;
                  v170 += 32;
LABEL_317:
                  if ( v175 == v170 )
                    goto LABEL_318;
                  v246 = v173[v245];
                }
              }
              else
              {
                while ( (v170 & 0x1F) != 0 )
                {
                  if ( v175 == ++v170 )
                  {
                    v245 = v175 >> 5;
                    goto LABEL_381;
                  }
                }
                v245 = v170 >> 5;
LABEL_381:
                if ( v175 == v170 )
                  goto LABEL_318;
                if ( !*(_DWORD *)(4LL * v245) )
                  goto LABEL_316;
              }
              if ( v170 != v175 )
              {
                v313 = v170 >> 5;
                if ( v173 )
                {
                  if ( (unsigned int)v313 < *(v173 - 1) && (v173[v313] & (1 << v170)) != 0 || (++v170, v175 != v170) )
                  {
                    while ( 1 )
                    {
                      v314 = v170 >> 5;
                      if ( (unsigned int)v314 < *(v173 - 1) && (v173[v314] & (1 << (v170 & 0x1F))) != 0 )
                        break;
                      if ( (v170 & 0x1F) == 0 )
                        break;
                      if ( v175 == ++v170 )
                      {
                        if ( v638 != v170 )
                          goto LABEL_218;
                        goto LABEL_319;
                      }
                    }
                  }
                }
                else
                {
                  while ( v175 != ++v170 )
                  {
                    if ( (v170 & 0x1F) == 0 )
                    {
                      if ( v638 != v170 )
                        goto LABEL_218;
                      goto LABEL_319;
                    }
                  }
                }
              }
              goto LABEL_318;
            }
            break;
          }
          v190 = v188 >> 5;
          if ( (unsigned int)v190 < v186 )
            v191 = ((v185[v190] & 1) == 0) + v188;
          else
            v191 = v188 + 1;
          do
          {
            v192 = v191 >> 5;
            if ( (unsigned int)v192 < v186 && (v185[v192] & (1 << (v191 & 0x1F))) != 0 || (v191 & 0x1F) == 0 )
              goto LABEL_239;
            ++v191;
          }
          while ( v187 != v191 );
          if ( ++v170 != v175 )
            goto LABEL_307;
LABEL_474:
          if ( !v173 )
            goto LABEL_318;
          v245 = v170 >> 5;
          if ( v170 >> 5 < *(v173 - 1) )
            goto LABEL_311;
          if ( v638 != v170 )
            continue;
          break;
        }
LABEL_319:
        v172 = v173;
        v649 = (__int64 *)&v641;
        if ( !v173 )
          goto LABEL_738;
LABEL_320:
        v247 = *((_DWORD *)v172 - 1);
        v524 = v172;
        LODWORD(v650) = 0;
        v248 = 32 * v247;
        HIDWORD(v650) = 32 * v247;
        sub_313A20(&v649);
        v249 = v650;
        v649 = (__int64 *)&v641;
        v650 = _mm_shuffle_epi32(_mm_cvtsi32_si128(32 * v247), 224).m128i_u64[0];
        v503 = v249;
        sub_313A20(&v649);
        v250 = v524;
        v637 = v650;
        if ( v249 == (_DWORD)v650 )
          goto LABEL_771;
LABEL_321:
        v572 = v248;
        v251 = v503;
        v252 = v250;
        while ( 2 )
        {
          v253 = (int *)&v493[v251];
          v254 = *v253;
          v255 = *(v494 - 1) - 1;
          if ( (_DWORD)v255 == *v253 )
          {
            *v253 = 0;
            --*(v494 - 1);
            goto LABEL_510;
          }
          v256 = v494[v255];
          v494[v254] = v256;
          v544 = &v494[v254];
          v493[v256] = v254;
          *v253 = 0;
          v525 = *(v494 - 1) - 1;
          *(v494 - 1) = v525;
          v538 = v254 >> 1;
          if ( v254 >> 1 )
          {
            v257 = v494[v254 >> 1];
            v258 = *(unsigned int *)(v549 + 8);
            v259 = *(_QWORD *)v549;
            v260 = v258 - 1;
            v504 = 24 * v258;
            v261 = *(_QWORD *)v549 + 24 * v258;
            v262 = 24LL * (((_DWORD)v258 - 1) & v256);
            v263 = *(_QWORD *)v549 + v262;
            if ( v262 != 24 * v258 )
            {
              v264 = v259 + v262;
              do
              {
                v265 = *(_DWORD *)(v264 + 4);
                if ( v265 == 2 )
                {
                  if ( v256 == *(_DWORD *)v264 && v256 == *(_DWORD *)(v264 + 8) )
                  {
                    v266 = *(_QWORD *)(v264 + 16);
                    if ( !v266 )
                      goto LABEL_565;
                    goto LABEL_332;
                  }
                }
                else if ( !v265 )
                {
                  goto LABEL_844;
                }
                v264 += 24;
              }
              while ( v261 != v264 );
            }
            if ( v259 == v263 )
              goto LABEL_844;
            v362 = *(_QWORD *)v549;
            while ( 1 )
            {
              v363 = *(_DWORD *)(v362 + 4);
              if ( v363 == 2 )
              {
                if ( v256 == *(_DWORD *)v362 && v256 == *(_DWORD *)(v362 + 8) )
                {
                  v266 = *(_QWORD *)(v362 + 16);
                  if ( !v266 )
                  {
LABEL_565:
                    v267 = 0;
LABEL_336:
                    v271 = 24LL * (v260 & (unsigned int)v257);
                    v272 = v259 + v271;
                    if ( v504 == v271 )
                    {
LABEL_566:
                      if ( v259 == v272 )
                        goto LABEL_844;
                      v273 = v259;
                      while ( 1 )
                      {
                        v364 = *(_DWORD *)(v273 + 4);
                        if ( v364 == 2 )
                        {
                          if ( (_DWORD)v257 == *(_DWORD *)v273 && (_DWORD)v257 == *(_DWORD *)(v273 + 8) )
                            goto LABEL_343;
                        }
                        else if ( !v364 )
                        {
                          goto LABEL_844;
                        }
                        v273 += 24;
                        if ( v272 == v273 )
LABEL_844:
                          BUG();
                      }
                    }
                    v273 = v259 + v271;
                    while ( 1 )
                    {
                      v274 = *(_DWORD *)(v273 + 4);
                      if ( v274 == 2 )
                      {
                        if ( (_DWORD)v257 == *(_DWORD *)v273 && (_DWORD)v257 == *(_DWORD *)(v273 + 8) )
                        {
LABEL_343:
                          v275 = *(_QWORD *)(v273 + 16);
                          if ( !v275 )
                            goto LABEL_348;
                          v276 = *(unsigned int *)(v275 - 4);
                          if ( !(_DWORD)v276 )
                            goto LABEL_348;
                          v557 = v267;
                          v277 = v275 + 4 * v276;
                          v580 = v259;
                          v593 = v254;
                          v604 = v258;
                          v505 = v251;
                          v278 = 0;
                          v279 = v275;
                          v280 = v260;
                          do
                          {
                            v279 += 4;
                            v278 += __popcountdi2();
                          }
                          while ( v279 != v277 );
                          v281 = v278;
                          v282 = v280;
                          v251 = v505;
                          v254 = v593;
                          v283 = v604;
                          if ( v557 >= v281 )
                            goto LABEL_348;
                          v365 = v538;
                          v526 = v505;
                          v366 = v494;
                          v508 = v252;
                          v367 = v580;
                          v368 = *v544;
LABEL_577:
                          v369 = 24 * v283;
                          v370 = v367 + v369;
                          v371 = 24LL * ((unsigned int)v368 & v282);
                          v372 = v367 + v371;
                          if ( v371 != v369 )
                          {
                            v373 = v367 + v371;
                            do
                            {
                              v374 = *(_DWORD *)(v373 + 4);
                              if ( v374 == 2 )
                              {
                                if ( *(_DWORD *)v373 == (_DWORD)v368 && *(_DWORD *)(v373 + 8) == (_DWORD)v368 )
                                {
                                  v375 = *(_QWORD *)(v373 + 16);
                                  if ( !v375 )
                                    goto LABEL_620;
                                  goto LABEL_585;
                                }
                              }
                              else if ( !v374 )
                              {
                                goto LABEL_851;
                              }
                              v373 += 24;
                            }
                            while ( v370 != v373 );
                          }
                          if ( v367 == v372 )
                            goto LABEL_851;
                          v396 = v367;
                          while ( 1 )
                          {
                            v397 = *(_DWORD *)(v396 + 4);
                            if ( v397 == 2 )
                            {
                              if ( *(_DWORD *)v396 == (_DWORD)v368 && *(_DWORD *)(v396 + 8) == (_DWORD)v368 )
                              {
                                v375 = *(_QWORD *)(v396 + 16);
                                if ( !v375 )
                                {
LABEL_620:
                                  v376 = 0;
                                  goto LABEL_589;
                                }
LABEL_585:
                                v376 = *(_DWORD *)(v375 - 4);
                                if ( v376 )
                                {
                                  v377 = v376;
                                  v378 = v375;
                                  v376 = 0;
                                  v545 = v254;
                                  v379 = v375 + 4 * v377;
                                  v380 = v367 + v369;
                                  v381 = v378;
                                  v560 = v366;
                                  v584 = v368;
                                  v598 = v369;
                                  v608 = v282;
                                  do
                                  {
                                    v381 += 4;
                                    v376 += __popcountdi2();
                                  }
                                  while ( v381 != v379 );
                                  v254 = v545;
                                  v370 = v380;
                                  v366 = v560;
                                  v368 = v584;
                                  v369 = v598;
                                  v282 = v608;
                                }
LABEL_589:
                                v382 = 24LL * ((unsigned int)v257 & v282);
                                v383 = v367 + v382;
                                if ( v369 != v382 )
                                {
                                  v384 = v367 + v382;
                                  do
                                  {
                                    v385 = *(_DWORD *)(v384 + 4);
                                    if ( v385 == 2 )
                                    {
                                      if ( (_DWORD)v257 == *(_DWORD *)v384 && (_DWORD)v257 == *(_DWORD *)(v384 + 8) )
                                      {
                                        v386 = *(_QWORD *)(v384 + 16);
                                        if ( !v386 )
                                          goto LABEL_611;
                                        goto LABEL_597;
                                      }
                                    }
                                    else if ( !v385 )
                                    {
                                      goto LABEL_851;
                                    }
                                    v384 += 24;
                                  }
                                  while ( v370 != v384 );
                                }
                                if ( v367 == v383 )
                                  goto LABEL_851;
                                v393 = v367;
                                while ( 2 )
                                {
                                  v394 = *(_DWORD *)(v393 + 4);
                                  if ( v394 != 2 )
                                  {
                                    if ( !v394 )
                                      goto LABEL_851;
LABEL_606:
                                    v393 += 24;
                                    if ( v383 == v393 )
                                      goto LABEL_851;
                                    continue;
                                  }
                                  break;
                                }
                                if ( (_DWORD)v257 != *(_DWORD *)v393 || (_DWORD)v257 != *(_DWORD *)(v393 + 8) )
                                  goto LABEL_606;
                                v386 = *(_QWORD *)(v393 + 16);
                                if ( !v386 )
                                {
LABEL_611:
                                  v252 = v508;
                                  v251 = v526;
                                  v395 = (unsigned int)v254;
                                  goto LABEL_623;
                                }
LABEL_597:
                                v387 = *(unsigned int *)(v386 - 4);
                                if ( !(_DWORD)v387 )
                                  goto LABEL_611;
                                v540 = v365;
                                v388 = v386 + 4 * v387;
                                v389 = v386;
                                v390 = 0;
                                v546 = v254;
                                v391 = v376;
                                v392 = v389;
                                v561 = v366;
                                v585 = v368;
                                do
                                {
                                  v392 += 4;
                                  v390 += __popcountdi2();
                                }
                                while ( v392 != v388 );
                                v366 = v561;
                                v368 = v585;
                                v254 = v546;
                                if ( v391 >= v390 )
                                {
                                  v252 = v508;
                                  v251 = v526;
                                  v395 = v546;
LABEL_623:
                                  v494[v395] = v368;
                                  v493[v368] = v254;
LABEL_510:
                                  v354 = v572;
                                  if ( ++v251 == v572 )
                                    goto LABEL_554;
                                  goto LABEL_511;
                                }
                                v561[v546] = v257;
                                v493[v257] = v546;
                                if ( !(v365 >> 1) )
                                {
                                  v252 = v508;
                                  v251 = v526;
                                  v395 = 1;
                                  v254 = 1;
                                  goto LABEL_623;
                                }
                                v254 = v365;
                                v365 >>= 1;
                                v257 = v561[v540 >> 1];
                                v283 = *(unsigned int *)(v549 + 8);
                                v282 = v283 - 1;
                                goto LABEL_577;
                              }
                            }
                            else if ( !v397 )
                            {
                              goto LABEL_851;
                            }
                            v396 += 24;
                            if ( v372 == v396 )
LABEL_851:
                              BUG();
                          }
                        }
                      }
                      else if ( !v274 )
                      {
                        goto LABEL_844;
                      }
                      v273 += 24;
                      if ( v261 == v273 )
                        goto LABEL_566;
                    }
                  }
LABEL_332:
                  v267 = *(_DWORD *)(v266 - 4);
                  if ( v267 )
                  {
                    v579 = v259 + 24 * v258;
                    v268 = *(_QWORD *)v549;
                    v592 = v254;
                    v269 = v266 + 4LL * v267;
                    v603 = *(unsigned int *)(v549 + 8);
                    v612 = v258 - 1;
                    v556 = v251;
                    v270 = 0;
                    do
                    {
                      v266 += 4;
                      v270 += __popcountdi2();
                    }
                    while ( v269 != v266 );
                    v267 = v270;
                    v261 = v579;
                    v251 = v556;
                    v259 = v268;
                    v254 = v592;
                    v258 = v603;
                    v260 = v612;
                  }
                  goto LABEL_336;
                }
              }
              else if ( !v363 )
              {
                goto LABEL_844;
              }
              v362 += 24;
              if ( v263 == v362 )
                goto LABEL_844;
            }
          }
LABEL_348:
          v284 = 2 * v254;
          v285 = *v544;
          if ( 2 * v254 >= v525 )
            goto LABEL_734;
          v539 = v254;
          v639 = v251;
          v286 = v494;
          v287 = *(_QWORD *)v549;
          v633 = v252;
          v288 = *v544;
          while ( 2 )
          {
            v558 = v284 + 1;
            v289 = v286[v284];
            v544 = &v286[v284];
            v290 = v289;
            v291 = *(unsigned int *)(v549 + 8);
            v292 = v291 - 1;
            v293 = 24 * v291;
            v506 = v293;
            v294 = v287 + v293;
            if ( v525 <= (int)(v284 + 1) )
            {
              v295 = 24LL * (v292 & v289);
              v296 = v287 + v295;
              goto LABEL_352;
            }
            v324 = v293;
            v583 = &v286[v558];
            v325 = *v583;
            v326 = v292 & *v583;
            v295 = 24 * v326;
            v327 = v287 + 24 * v326;
            if ( 24 * v326 != v324 )
            {
              v328 = v287 + 24 * v326;
              do
              {
                v329 = *(_DWORD *)(v328 + 4);
                if ( v329 == 2 )
                {
                  if ( v325 == *(_DWORD *)v328 && v325 == *(_DWORD *)(v328 + 8) )
                  {
                    v330 = *(_QWORD *)(v328 + 16);
                    if ( !v330 )
                      goto LABEL_496;
                    goto LABEL_454;
                  }
                }
                else if ( !v329 )
                {
                  goto LABEL_843;
                }
                v328 += 24;
              }
              while ( v328 != v294 );
            }
            if ( v327 == v287 )
              goto LABEL_843;
            v351 = v287;
            while ( 2 )
            {
              v352 = *(_DWORD *)(v351 + 4);
              if ( v352 != 2 )
              {
                if ( !v352 )
                  goto LABEL_843;
LABEL_491:
                v351 += 24;
                if ( v327 == v351 )
LABEL_843:
                  BUG();
                continue;
              }
              break;
            }
            if ( v325 != *(_DWORD *)v351 || v325 != *(_DWORD *)(v351 + 8) )
              goto LABEL_491;
            v330 = *(_QWORD *)(v351 + 16);
            if ( !v330 )
            {
LABEL_496:
              v596 = 0;
              goto LABEL_458;
            }
LABEL_454:
            v331 = *(_DWORD *)(v330 - 4);
            v596 = v331;
            if ( v331 )
            {
              v614 = v284;
              v617 = v289;
              v332 = v330 + 4LL * v331;
              v620 = v287;
              v625 = v292;
              v606 = v288;
              v333 = 0;
              v597 = v327;
              v334 = v330;
              v335 = v294;
              v336 = *v583;
              do
              {
                v334 += 4;
                v333 += __popcountdi2();
              }
              while ( v334 != v332 );
              v327 = v597;
              v284 = v614;
              v596 = v333;
              v325 = v336;
              v288 = v606;
              v289 = v617;
              v294 = v335;
              v287 = v620;
              v292 = v625;
            }
LABEL_458:
            v337 = v292 & v289;
            v338 = 24 * v337;
            v297 = v287 + 24 * v337;
            if ( 24 * v337 == v506 )
            {
LABEL_479:
              if ( v297 == v287 )
                goto LABEL_843;
              v349 = v287;
              while ( 1 )
              {
                v350 = *(_DWORD *)(v349 + 4);
                if ( v350 == 2 )
                {
                  if ( *(_DWORD *)v349 == v289 && *(_DWORD *)(v349 + 8) == v289 )
                  {
                    v341 = *(_QWORD *)(v349 + 16);
                    if ( !v341 )
                      goto LABEL_487;
                    goto LABEL_466;
                  }
                }
                else if ( !v350 )
                {
                  goto LABEL_843;
                }
                v349 += 24;
                if ( v297 == v349 )
                  goto LABEL_843;
              }
            }
            v339 = v287 + 24 * v337;
            while ( 2 )
            {
              v340 = *(_DWORD *)(v339 + 4);
              if ( v340 != 2 )
              {
                if ( !v340 )
                  goto LABEL_843;
LABEL_461:
                v339 += 24;
                if ( v339 == v294 )
                  goto LABEL_479;
                continue;
              }
              break;
            }
            if ( *(_DWORD *)v339 != v289 || *(_DWORD *)(v339 + 8) != v289 )
              goto LABEL_461;
            v341 = *(_QWORD *)(v339 + 16);
            if ( !v341 )
            {
              v296 = v297;
              do
              {
LABEL_356:
                v298 = *(_DWORD *)(v296 + 4);
                if ( v298 == 2 )
                {
                  if ( *(_DWORD *)v296 == (_DWORD)v290 && *(_DWORD *)(v296 + 8) == (_DWORD)v290 )
                  {
                    v299 = *(_QWORD *)(v296 + 16);
                    v300 = v284;
                    if ( !v299 )
                      goto LABEL_433;
                    goto LABEL_360;
                  }
                }
                else if ( !v298 )
                {
                  goto LABEL_843;
                }
                v296 += 24;
              }
              while ( v296 != v294 );
              goto LABEL_425;
            }
LABEL_466:
            v342 = *(_DWORD *)(v341 - 4);
            if ( !v342 )
              goto LABEL_487;
            v618 = v284;
            v623 = v289;
            v626 = v287;
            v629 = v292;
            v631 = v338;
            v621 = v325;
            v343 = v294;
            v344 = v341;
            v607 = v288;
            v345 = v343;
            v346 = v341 + 4LL * v342;
            v615 = v327;
            v347 = 0;
            do
            {
              v344 += 4;
              v347 += __popcountdi2();
            }
            while ( v344 != v346 );
            v348 = v347;
            v288 = v607;
            v284 = v618;
            v294 = v345;
            v296 = v615;
            v289 = v623;
            v287 = v626;
            v292 = v629;
            v338 = v631;
            if ( v596 < v348 )
            {
              v290 = v621;
              v284 = v558;
              v289 = v621;
              v544 = v583;
            }
            else
            {
LABEL_487:
              v296 = v297;
              v295 = v338;
            }
LABEL_352:
            v297 = v296;
            if ( v295 != v506 )
              goto LABEL_356;
LABEL_425:
            if ( v297 == v287 )
              goto LABEL_843;
            v320 = v287;
            while ( 2 )
            {
              v321 = *(_DWORD *)(v320 + 4);
              if ( v321 != 2 )
              {
                if ( !v321 )
                  goto LABEL_843;
LABEL_428:
                v320 += 24;
                if ( v320 == v297 )
                  goto LABEL_843;
                continue;
              }
              break;
            }
            if ( *(_DWORD *)v320 != (_DWORD)v290 || *(_DWORD *)(v320 + 8) != (_DWORD)v290 )
              goto LABEL_428;
            v299 = *(_QWORD *)(v320 + 16);
            v300 = v284;
            if ( !v299 )
            {
LABEL_433:
              LODWORD(v301) = 0;
              goto LABEL_364;
            }
LABEL_360:
            v301 = *(unsigned int *)(v299 - 4);
            if ( (_DWORD)v301 )
            {
              v559 = v284;
              v302 = v299 + 4 * v301;
              LODWORD(v301) = 0;
              v581 = v289;
              v594 = v287;
              v605 = v292;
              v613 = v294;
              v303 = v299;
              v304 = v284;
              do
              {
                v303 += 4;
                LODWORD(v301) = __popcountdi2() + v301;
              }
              while ( v303 != v302 );
              v284 = v559;
              v289 = v581;
              v300 = v304;
              v287 = v594;
              v292 = v605;
              v294 = v613;
            }
LABEL_364:
            v305 = 24LL * (v288 & v292);
            v306 = v287 + v305;
            if ( v305 != v506 )
            {
              v307 = v287 + v305;
              do
              {
                v308 = *(_DWORD *)(v307 + 4);
                if ( v308 == 2 )
                {
                  if ( v288 == *(_DWORD *)v307 && v288 == *(_DWORD *)(v307 + 8) )
                  {
                    v309 = *(_QWORD *)(v307 + 16);
                    if ( !v309 )
                      goto LABEL_442;
                    goto LABEL_372;
                  }
                }
                else if ( !v308 )
                {
                  goto LABEL_843;
                }
                v307 += 24;
              }
              while ( v307 != v294 );
            }
            if ( v306 == v287 )
              goto LABEL_843;
            v322 = v287;
            while ( 2 )
            {
              v323 = *(_DWORD *)(v322 + 4);
              if ( v323 != 2 )
              {
                if ( !v323 )
                  goto LABEL_843;
LABEL_437:
                v322 += 24;
                if ( v306 == v322 )
                  goto LABEL_843;
                continue;
              }
              break;
            }
            if ( v288 != *(_DWORD *)v322 || v288 != *(_DWORD *)(v322 + 8) )
              goto LABEL_437;
            v309 = *(_QWORD *)(v322 + 16);
            if ( !v309 )
            {
LABEL_442:
              v285 = v288;
              v251 = v639;
              v252 = v633;
              v544 = &v494[v539];
              v300 = v539;
              goto LABEL_553;
            }
LABEL_372:
            v310 = *(unsigned int *)(v309 - 4);
            if ( !(_DWORD)v310 )
              goto LABEL_442;
            v507 = v284;
            v311 = v309 + 4 * v310;
            v312 = 0;
            v582 = v289;
            v595 = v287;
            do
            {
              v309 += 4;
              v312 += __popcountdi2();
            }
            while ( v309 != v311 );
            v286 = v494;
            v287 = v595;
            if ( (unsigned int)v301 >= v312 )
            {
              v544 = &v494[v539];
              v285 = v288;
              v251 = v639;
              v254 = v539;
              v252 = v633;
LABEL_734:
              v300 = v254;
              goto LABEL_553;
            }
            v494[v539] = v582;
            v284 = 2 * v507;
            v493[v290] = v539;
            if ( v525 > (int)(2 * v507) )
            {
              v539 = v300;
              continue;
            }
            break;
          }
          v285 = v288;
          v251 = v639;
          v252 = v633;
LABEL_553:
          ++v251;
          *v544 = v285;
          v361 = v285;
          v354 = v572;
          v493[v361] = v300;
          if ( v251 == v572 )
          {
LABEL_554:
            if ( v252 )
            {
              v355 = v251 >> 5;
              if ( v251 >> 5 < *(v252 - 1) )
              {
LABEL_544:
                v357 = v252[v355];
                if ( (v357 & (1 << v251)) == 0 )
                {
                  v356 = v572;
                  if ( v572 != v251 )
                  {
LABEL_519:
                    while ( !v357 )
                    {
                      v251 += 32;
                      ++v355;
                      if ( v356 == v251 )
                        goto LABEL_527;
LABEL_518:
                      v357 = v252[v355];
                    }
                    if ( v251 != v572 )
                    {
                      v358 = v251 >> 5;
                      if ( v252 )
                      {
                        if ( (unsigned int)v358 < *(v252 - 1) && (v252[v358] & (1 << v251)) != 0
                          || (++v251, v572 != v251) )
                        {
                          do
                          {
                            v359 = v251 >> 5;
                            if ( (unsigned int)v359 < *(v252 - 1) && (v252[v359] & (1 << (v251 & 0x1F))) != 0 )
                              break;
                            if ( (v251 & 0x1F) == 0 )
                              break;
                            ++v251;
                          }
                          while ( v572 != v251 );
                        }
                      }
                      else
                      {
                        do
                          ++v251;
                        while ( v572 != v251 && (v251 & 0x1F) != 0 );
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_527;
          }
LABEL_511:
          if ( v252 )
          {
            do
            {
              v355 = v251 >> 5;
              if ( v251 >> 5 < *(v252 - 1) && (v252[v355] & (1 << (v251 & 0x1F))) != 0 || (v251 & 0x1F) == 0 )
              {
                if ( v355 < *(v252 - 1) )
                  goto LABEL_544;
                goto LABEL_515;
              }
              ++v251;
            }
            while ( v354 != v251 );
            v355 = v572 >> 5;
            if ( v572 >> 5 < *(v252 - 1) )
              goto LABEL_544;
LABEL_515:
            v356 = v572;
            if ( v251 != v572 )
              goto LABEL_518;
          }
          else
          {
            while ( (v251 & 0x1F) != 0 )
            {
              if ( v572 == ++v251 )
              {
                v355 = v572 >> 5;
                goto LABEL_536;
              }
            }
            v355 = v251 >> 5;
LABEL_536:
            v356 = v572;
            if ( v572 != v251 )
            {
              v357 = *(_DWORD *)(4LL * v355);
              goto LABEL_519;
            }
          }
LABEL_527:
          if ( v251 != v637 )
            continue;
          break;
        }
        v250 = v252;
        if ( !v252 )
          goto LABEL_529;
        v247 = *(v252 - 1);
LABEL_771:
        if ( v247 )
        {
          v469 = v250;
          v470 = 0;
          v471 = v250;
          v472 = &v250[4 * v247];
          do
          {
            v469 += 4;
            v470 += __popcountdi2();
          }
          while ( v469 != v472 );
          v360 = v471;
          if ( v470 > 1 )
          {
            v473 = 32 * v247;
            v649 = (__int64 *)&v641;
            HIDWORD(v650) = v473;
            LODWORD(v650) = 0;
            sub_313A20(&v649);
            v474 = v650;
            v643 = (__int64 *)&v641;
            v650 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v473), 224).m128i_u64[0];
            v645 = v473;
            v649 = (__int64 *)&v641;
            sub_313A20(&v649);
            v475 = v650;
            if ( (_DWORD)v650 == v474 )
            {
              v478 = nullptr;
LABEL_787:
              v485 = *a3;
              if ( !*a3 || (v486 = *(_DWORD *)(v485 - 4), v486 == *(_DWORD *)(v485 - 8)) )
              {
                sub_9780A0(a3);
                v485 = *a3;
                v486 = *(_DWORD *)(*a3 - 4);
              }
              v487 = (_QWORD *)(v485 + 8LL * v486);
              *v487 = 0;
              if ( v478 )
              {
                v488 = *(v478 - 1);
                v516 = *(v478 - 2);
                v489 = sub_186B270(4LL * v516 + 8);
                v490 = 4LL * *(v478 - 1);
                *(_QWORD *)v489 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v516), _mm_cvtsi32_si128(v488)).m128i_u64[0];
                *v487 = v489 + 8;
                v491 = v490 == 4;
                if ( v490 <= 4 )
                {
                  v492 = *a3;
                  if ( v491 )
                    *(_DWORD *)(v489 + 8) = *v478;
                  ++*(_DWORD *)(v492 - 4);
                }
                else
                {
                  memcpy((void *)(v489 + 8), v478, v490);
                  ++*(_DWORD *)(*a3 - 4);
                }
                sub_186B220(v478 - 2);
              }
              else
              {
                *(_DWORD *)(v485 - 4) = v486 + 1;
              }
              goto LABEL_529;
            }
            v476 = (_QWORD *)sub_186B270(0x10u);
            *v476 = 2;
            v477 = (unsigned int *)(v476 + 1);
            v478 = v477;
            while ( 1 )
            {
              *v477 = v474;
              v479 = *(v478 - 1);
              v644 = v474 + 1;
              v480 = v479 + 1;
              *(v478 - 1) = v479 + 1;
              sub_313A20(&v643);
              v474 = v644;
              if ( v475 == v644 )
                break;
              v481 = *(v478 - 1);
              if ( (_DWORD)v481 == *(v478 - 2) )
              {
                v482 = (unsigned int)(3 * v481 + 1) >> 1;
                v483 = 4 * v482 + 8;
                if ( 4 * (int)v481 + 8 >= v483 || (unsigned int)v481 >= v482 )
                {
                  v3 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)&v649, "Overflow encountered when expanding vector");
                  *v3 = (char *)off_1C63128;
                  sub_2333C0(v3 + 1, &v649);
                  sub_233E40((__int64)&v649);
                  __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v515 = (unsigned int)(3 * v481 + 1) >> 1;
                v484 = (unsigned int *)sub_186B300(v478 - 2, v483);
                v478 = v484 + 2;
                *v484 = v515;
                v477 = &v484[v484[1] + 2];
              }
              else
              {
                v477 = &v478[v481];
              }
            }
            if ( v480 != 2 || *v478 != (v478[1] ^ 1) )
              goto LABEL_787;
            sub_186B220(v478 - 2);
            if ( srcb )
              sub_186B220(srcb - 2);
            if ( v641 )
              sub_186B220(v641 - 8);
          }
          else
          {
            if ( srcb )
              goto LABEL_530;
LABEL_532:
            sub_186B220(v360 - 8);
          }
        }
        else
        {
LABEL_529:
          if ( srcb )
            goto LABEL_530;
LABEL_531:
          v360 = v641;
          if ( v641 )
            goto LABEL_532;
        }
      }
      else
      {
        v169 = 0;
        v650 = 0;
        sub_313A20(&v649);
        v170 = v650;
        v649 = (__int64 *)&v641;
        v650 = 0;
        sub_313A20(&v649);
        v171 = v650;
        v172 = nullptr;
        if ( (_DWORD)v650 != v170 )
          goto LABEL_217;
        v649 = (__int64 *)&v641;
LABEL_738:
        v530 = v172;
        v650 = 0;
        sub_313A20(&v649);
        v464 = v650;
        v649 = (__int64 *)&v641;
        v650 = 0;
        v248 = 0;
        v503 = v464;
        sub_313A20(&v649);
        v250 = v530;
        v637 = v650;
        if ( (_DWORD)v650 != v464 )
          goto LABEL_321;
        if ( srcb )
        {
LABEL_530:
          sub_186B220(srcb - 2);
          goto LABEL_531;
        }
      }
      goto LABEL_60;
    }
  }
  if ( v493 )
    sub_186B220(v493 - 2);
  sub_186B220(v494 - 2);
  return sub_186B220(v609 - 2);
}

