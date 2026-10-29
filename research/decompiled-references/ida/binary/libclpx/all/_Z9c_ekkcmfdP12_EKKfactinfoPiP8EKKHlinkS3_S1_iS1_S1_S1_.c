__int64 __fastcall c_ekkcmfd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int *a7,
        int *a8,
        _DWORD *a9)
{
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // ebp
  int v14; // r9d
  int v15; // esi
  __int64 v16; // r10
  int *v18; // r11
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD *v23; // rcx
  int v24; // edx
  unsigned int v25; // r14d
  int v27; // r15d
  int v28; // r8d
  __int64 v29; // rax
  int v30; // edx
  __m128d v31; // xmm9
  int v32; // r13d
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rdx
  int v36; // esi
  signed int v37; // r15d
  double *v38; // rcx
  int v39; // edi
  __int64 v40; // rax
  __int64 v41; // xmm1_8
  __int64 v42; // xmm0_8
  bool v43; // cc
  double v44; // xmm0_8
  int v45; // edi
  double v46; // xmm0_8
  double *v47; // rax
  double v48; // xmm2_8
  __m128d v49; // xmm0
  __int32 v50; // ecx
  _QWORD *v51; // rsi
  _QWORD *v52; // r8
  __int64 v53; // rax
  bool v54; // r10
  bool v55; // r9
  unsigned __int64 v56; // rax
  __int64 v57; // r9
  int v58; // r10d
  int v59; // r15d
  __m128d v60; // xmm3
  unsigned int v61; // ebx
  __int64 v62; // r9
  unsigned int v63; // esi
  unsigned int v64; // ebx
  __int64 v65; // r11
  __int64 v66; // rax
  double *v67; // rsi
  int v68; // eax
  int v69; // r10d
  __int64 v70; // r9
  __int64 v71; // rcx
  double v72; // xmm1_8
  signed int v73; // ecx
  __int64 v74; // rdx
  int v75; // eax
  __int64 *v76; // rbx
  int v77; // esi
  __int64 v78; // xmm0_8
  __int64 *v79; // r8
  int v80; // r8d
  __int64 *v81; // rbx
  __int64 v82; // xmm0_8
  __int64 *v83; // r8
  __int64 *v84; // rbx
  __int64 v85; // xmm0_8
  __int64 *v86; // r8
  __int64 *v87; // rbp
  __int64 v88; // xmm0_8
  __int64 *v89; // rbx
  int v90; // ebx
  int v91; // eax
  __int64 *v92; // rbx
  __int64 *v93; // rbp
  __int64 v94; // xmm0_8
  __int64 *v95; // rax
  __int64 *v96; // rbx
  __int64 v97; // xmm0_8
  __int64 *v98; // rax
  __int64 *v99; // rcx
  __int64 v100; // xmm0_8
  int *v101; // rax
  __m128d v102; // xmm11
  int v103; // r11d
  __int64 *v104; // rsi
  __int64 *v105; // r13
  __int64 v106; // xmm0_8
  __int64 v107; // rax
  __int64 *v108; // rsi
  __int64 *v109; // rcx
  __int64 v110; // xmm0_8
  __int64 *v111; // rsi
  __int64 *v112; // rcx
  __int64 v113; // xmm0_8
  __int64 *v114; // rsi
  __int64 *v115; // rcx
  __int64 v116; // xmm0_8
  __int64 *v117; // rsi
  __int64 *v118; // rcx
  __int64 v119; // xmm0_8
  __int64 *v120; // rsi
  __int64 *v121; // rcx
  __int64 *v122; // rax
  __int64 v123; // xmm0_8
  int v124; // r8d
  __int64 *v125; // rcx
  __int64 v126; // xmm0_8
  __int64 *v127; // rax
  __int64 v128; // xmm0_8
  __int64 v129; // rbp
  __int64 v130; // rax
  __int64 v131; // rbx
  int v132; // ecx
  __int64 v133; // rdi
  __int64 v134; // rcx
  __m128d v135; // xmm1
  __int32 v136; // r10d
  __m128d v137; // xmm0
  __m128d v138; // xmm1
  __int64 v139; // rdx
  int v140; // r15d
  __int64 v141; // rax
  __m128d v142; // xmm2
  __int64 v143; // rsi
  unsigned int v144; // edx
  int v145; // eax
  double *v146; // rsi
  __int32 v147; // edx
  int v148; // eax
  __int64 v149; // rax
  __int64 v150; // rdx
  double v151; // xmm12_8
  __m128d v152; // xmm4
  __m128d v153; // xmm3
  unsigned __int64 v154; // rax
  __int64 v155; // rdx
  unsigned int v156; // r15d
  __int64 v157; // rcx
  __int64 v158; // r13
  __int64 v159; // rbp
  __m128d v160; // xmm15
  __m128d v161; // xmm14
  __m128d v162; // xmm13
  __int64 v163; // rbx
  __m128d v164; // xmm12
  __int64 v165; // r10
  __m128d v166; // xmm8
  __m128d v167; // xmm7
  __int64 v168; // r9
  __m128d v169; // xmm6
  __int64 v170; // r8
  __m128d v171; // xmm5
  __int64 v172; // rdi
  unsigned int v173; // edx
  __int64 v174; // rsi
  __int64 v175; // rax
  unsigned int v176; // edx
  double *v177; // rcx
  double v178; // xmm2_8
  double v179; // xmm1_8
  double v180; // xmm5_8
  double v181; // xmm0_8
  signed int v182; // eax
  int v183; // edx
  double *v184; // rcx
  signed int v185; // ecx
  __int64 v186; // rdx
  __int64 *v187; // rdi
  __int64 v188; // xmm0_8
  __int64 *v189; // rsi
  __int64 v190; // rax
  __int64 *v191; // r8
  __int64 v192; // xmm0_8
  __int64 *v193; // r8
  __int64 *v194; // rdi
  __int64 v195; // xmm0_8
  __int64 *v196; // r8
  __int64 *v197; // rdi
  __int64 v198; // xmm0_8
  __int64 *v199; // r8
  __int64 *v200; // rdi
  __int64 v201; // xmm0_8
  __int64 *v202; // r8
  __int64 *v203; // rdi
  __int64 v204; // xmm0_8
  __int64 *v205; // rax
  __int64 *v206; // rcx
  __int64 v207; // xmm0_8
  __int64 v208; // rax
  double v209; // xmm0_8
  __int64 v210; // rax
  int *v211; // rax
  int v212; // r11d
  __int64 *v213; // rsi
  __int64 v214; // xmm0_8
  __int64 v215; // rax
  __int64 *v216; // rsi
  __int64 *v217; // rcx
  __int64 v218; // xmm0_8
  __int64 *v219; // rsi
  __int64 *v220; // rcx
  __int64 v221; // xmm0_8
  __int64 *v222; // rsi
  __int64 *v223; // rcx
  __int64 v224; // xmm0_8
  __int64 *v225; // rsi
  __int64 *v226; // rcx
  __int64 v227; // xmm0_8
  __int64 *v228; // rsi
  __int64 *v229; // rcx
  __int64 *v230; // rax
  __int64 v231; // xmm0_8
  int v232; // r8d
  __int64 *v233; // rbx
  __int64 *v234; // rcx
  __int64 v235; // xmm0_8
  __int64 *v236; // rax
  __int64 v237; // xmm0_8
  __int64 v238; // rbp
  __int64 v239; // rax
  __int64 v240; // rbx
  int v241; // edi
  __int64 v242; // rdi
  __int64 v243; // rsi
  __m128d v244; // xmm0
  __int32 v245; // ecx
  __m128d v246; // xmm1
  __m128d v247; // xmm0
  __int64 v248; // rdx
  int v249; // r15d
  __int64 v250; // rax
  __m128d v251; // xmm2
  __int64 v252; // r9
  unsigned int v253; // edx
  int v254; // eax
  double *v255; // r9
  __int32 v256; // edx
  int v257; // eax
  int v258; // r15d
  unsigned int v259; // eax
  __int64 v260; // rax
  int *v261; // rax
  int v262; // r15d
  __m128d v263; // xmm15
  __int64 v264; // rcx
  __m128d v265; // xmm4
  __m128d v266; // xmm5
  __m128d v267; // xmm6
  __m128d v268; // xmm11
  __m128d v269; // xmm12
  __m128d v270; // xmm13
  __m128d v271; // xmm14
  __int64 v272; // rcx
  __int64 v273; // rsi
  __int64 v274; // rax
  int v275; // edx
  __int64 v276; // rsi
  __int64 v277; // rax
  unsigned int v278; // ebx
  __int64 v279; // rsi
  __m128d v280; // xmm3
  unsigned int v281; // r13d
  __int64 v282; // r12
  __int64 v283; // rbp
  __m128d v284; // xmm10
  __int64 v285; // rbx
  __m128d v286; // xmm9
  __int64 v287; // r11
  __m128d v288; // xmm8
  __m128d v289; // xmm7
  __m128d v290; // xmm4
  __int64 v291; // r10
  __m128d v292; // xmm3
  __m128d v293; // xmm5
  __m128d v294; // xmm6
  __int64 v295; // r9
  __int64 v296; // r8
  unsigned int v297; // ecx
  __int64 v298; // rdi
  __int64 v299; // rax
  int v300; // edx
  double *v301; // rcx
  double v302; // xmm2_8
  double v303; // xmm1_8
  double v304; // xmm0_8
  int v305; // eax
  int v306; // edx
  double *v307; // rcx
  __int64 v308; // rax
  double v309; // xmm1_8
  double *v310; // rax
  double v311; // xmm2_8
  double v312; // xmm0_8
  double v313; // xmm1_8
  double *v314; // rax
  double *v315; // rbx
  __int64 v316; // rsi
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  __int64 v320; // r10
  __int64 v321; // r11
  double v322; // xmm13_8
  double v323; // xmm0_8
  double v324; // xmm1_8
  unsigned int v325; // r14d
  __int64 v326; // rbp
  __m128d v327; // xmm3
  __int64 v328; // r12
  double *v329; // rcx
  double v330; // xmm0_8
  double v331; // xmm1_8
  int v332; // eax
  __int64 v333; // rdx
  double v334; // xmm0_8
  double v335; // xmm0_8
  int v336; // eax
  double *v337; // rsi
  double *v338; // rdx
  double v339; // xmm5_8
  __int64 v340; // r9
  __int64 v341; // rbp
  int v342; // esi
  _QWORD *v343; // rcx
  _QWORD *v344; // rdx
  __m128d v345; // xmm1
  __int64 v346; // rcx
  __int64 v347; // rdx
  bool v348; // r10
  bool v349; // r8
  unsigned __int64 v350; // rdx
  __int64 v351; // r8
  int v352; // r14d
  __m128d v353; // xmm2
  unsigned int v354; // r11d
  __int64 v355; // r8
  unsigned int v356; // ecx
  unsigned int v357; // r11d
  __int64 v358; // r10
  __int64 v359; // rdx
  unsigned int v360; // ecx
  double *v361; // r8
  int v362; // edx
  int v363; // ecx
  int v364; // r8d
  signed int v365; // ebp
  __int64 v366; // r13
  __int64 v367; // rcx
  signed int v368; // eax
  _DWORD *v369; // rbx
  int v370; // r9d
  int v371; // r14d
  __int64 v372; // r12
  int *v373; // rcx
  double *v374; // r11
  double v375; // xmm2_8
  int v376; // r8d
  int v377; // ecx
  int v378; // r11d
  __int64 v379; // r8
  int *v380; // rcx
  int v381; // ebx
  int v382; // r15d
  __int64 v383; // r13
  int v384; // r8d
  double v385; // xmm0_8
  _DWORD *v386; // rcx
  __int64 v387; // r14
  __int64 v388; // r11
  int v389; // r11d
  __int64 v390; // rcx
  double v391; // xmm0_8
  __int64 v392; // r8
  unsigned __int64 v393; // rbx
  _BOOL4 v394; // r8d
  int v395; // r12d
  _BOOL8 v396; // rcx
  unsigned int v397; // r14d
  __int64 v398; // rbx
  unsigned int v399; // r8d
  __int64 v400; // r11
  __int64 v401; // rcx
  int v402; // ecx
  __int64 v403; // r11
  __int64 v404; // xmm0_8
  __int64 v405; // rbx
  __int64 v406; // xmm0_8
  __int64 v407; // r11
  __int64 v408; // xmm0_8
  __int64 v409; // r8
  __int64 v410; // rsi
  __int64 v411; // rcx
  double v412; // xmm0_8
  __int64 v413; // rcx
  __int64 v414; // [rsp+0h] [rbp-3D0h]
  int *v415; // [rsp+0h] [rbp-3D0h]
  __int64 v416; // [rsp+0h] [rbp-3D0h]
  int v417; // [rsp+0h] [rbp-3D0h]
  int v418; // [rsp+8h] [rbp-3C8h]
  int v419; // [rsp+8h] [rbp-3C8h]
  int v420; // [rsp+8h] [rbp-3C8h]
  unsigned int v421; // [rsp+10h] [rbp-3C0h]
  __int64 i; // [rsp+10h] [rbp-3C0h]
  int *v423; // [rsp+10h] [rbp-3C0h]
  int v424; // [rsp+18h] [rbp-3B8h]
  int v425; // [rsp+18h] [rbp-3B8h]
  int v426; // [rsp+28h] [rbp-3A8h]
  signed int v427; // [rsp+28h] [rbp-3A8h]
  unsigned int v428; // [rsp+28h] [rbp-3A8h]
  _DWORD *v429; // [rsp+28h] [rbp-3A8h]
  unsigned int v430; // [rsp+30h] [rbp-3A0h]
  __int64 v431; // [rsp+30h] [rbp-3A0h]
  unsigned int v432; // [rsp+30h] [rbp-3A0h]
  __int64 v433; // [rsp+30h] [rbp-3A0h]
  _DWORD *v434; // [rsp+30h] [rbp-3A0h]
  __int64 v435; // [rsp+38h] [rbp-398h]
  __int64 v436; // [rsp+40h] [rbp-390h]
  __int64 v437; // [rsp+40h] [rbp-390h]
  double v438; // [rsp+40h] [rbp-390h]
  __int64 v439; // [rsp+40h] [rbp-390h]
  signed int v440; // [rsp+40h] [rbp-390h]
  __int64 v441; // [rsp+48h] [rbp-388h]
  __int64 v442; // [rsp+48h] [rbp-388h]
  double v443; // [rsp+48h] [rbp-388h]
  unsigned int v444; // [rsp+48h] [rbp-388h]
  __int64 v445; // [rsp+48h] [rbp-388h]
  __int64 v446; // [rsp+50h] [rbp-380h]
  double v447; // [rsp+50h] [rbp-380h]
  double v448; // [rsp+50h] [rbp-380h]
  __int64 v449; // [rsp+58h] [rbp-378h]
  double v450; // [rsp+58h] [rbp-378h]
  int v451; // [rsp+58h] [rbp-378h]
  double v452; // [rsp+58h] [rbp-378h]
  int v453; // [rsp+60h] [rbp-370h]
  int v454; // [rsp+60h] [rbp-370h]
  double v455; // [rsp+60h] [rbp-370h]
  double v456; // [rsp+60h] [rbp-370h]
  signed int v457; // [rsp+68h] [rbp-368h]
  int *v458; // [rsp+68h] [rbp-368h]
  int *v459; // [rsp+68h] [rbp-368h]
  __int64 v460; // [rsp+68h] [rbp-368h]
  __int64 v461; // [rsp+68h] [rbp-368h]
  signed int v462; // [rsp+70h] [rbp-360h]
  __int64 v463; // [rsp+78h] [rbp-358h]
  __int64 v464; // [rsp+78h] [rbp-358h]
  double v465; // [rsp+80h] [rbp-350h]
  __int64 v466; // [rsp+80h] [rbp-350h]
  int v467; // [rsp+88h] [rbp-348h]
  __int64 v468; // [rsp+88h] [rbp-348h]
  __int64 v469; // [rsp+90h] [rbp-340h]
  __int64 v470; // [rsp+90h] [rbp-340h]
  int v471; // [rsp+98h] [rbp-338h]
  int v472; // [rsp+98h] [rbp-338h]
  __int64 v473; // [rsp+98h] [rbp-338h]
  int v474; // [rsp+A0h] [rbp-330h]
  __int64 v475; // [rsp+A0h] [rbp-330h]
  __int64 v476; // [rsp+A0h] [rbp-330h]
  __int64 v477; // [rsp+A8h] [rbp-328h]
  __int64 v478; // [rsp+B0h] [rbp-320h]
  __int64 v479; // [rsp+B0h] [rbp-320h]
  __int64 v480; // [rsp+B8h] [rbp-318h]
  __int64 v481; // [rsp+C0h] [rbp-310h]
  __int64 v482; // [rsp+C8h] [rbp-308h]
  __int64 v483; // [rsp+D0h] [rbp-300h]
  __int64 v484; // [rsp+D8h] [rbp-2F8h]
  __int64 v485; // [rsp+E0h] [rbp-2F0h]
  __int64 v486; // [rsp+F8h] [rbp-2D8h]
  __int64 v487; // [rsp+100h] [rbp-2D0h]
  signed int v488; // [rsp+10Ch] [rbp-2C4h]
  signed int v489; // [rsp+110h] [rbp-2C0h]
  signed int v490; // [rsp+114h] [rbp-2BCh]
  signed int v491; // [rsp+118h] [rbp-2B8h]
  signed int v492; // [rsp+11Ch] [rbp-2B4h]
  signed int v493; // [rsp+120h] [rbp-2B0h]
  signed int v494; // [rsp+124h] [rbp-2ACh]
  __int64 v495; // [rsp+128h] [rbp-2A8h]
  __int64 v496; // [rsp+130h] [rbp-2A0h]
  __int64 v497; // [rsp+138h] [rbp-298h]
  __int64 v498; // [rsp+140h] [rbp-290h]
  __int64 v499; // [rsp+148h] [rbp-288h]
  __int64 v500; // [rsp+150h] [rbp-280h]
  __int64 v501; // [rsp+158h] [rbp-278h]
  __int64 v502; // [rsp+160h] [rbp-270h]
  double *v503; // [rsp+168h] [rbp-268h]
  double *v504; // [rsp+170h] [rbp-260h]
  double *v505; // [rsp+178h] [rbp-258h]
  double *v506; // [rsp+180h] [rbp-250h]
  double *v507; // [rsp+188h] [rbp-248h]
  double *v508; // [rsp+190h] [rbp-240h]
  double *v509; // [rsp+198h] [rbp-238h]
  double *v510; // [rsp+1A0h] [rbp-230h]
  int v511; // [rsp+1A8h] [rbp-228h]
  int v512; // [rsp+1B0h] [rbp-220h]
  int v513; // [rsp+1B4h] [rbp-21Ch]
  int v514; // [rsp+1B8h] [rbp-218h]
  int v515; // [rsp+1BCh] [rbp-214h]
  int v516; // [rsp+1C0h] [rbp-210h]
  int v517; // [rsp+1C4h] [rbp-20Ch]
  __int64 v518; // [rsp+1C8h] [rbp-208h]
  __int64 v519; // [rsp+1D0h] [rbp-200h]
  int v520; // [rsp+1D8h] [rbp-1F8h]
  int v521; // [rsp+1DCh] [rbp-1F4h]
  __int64 v523; // [rsp+1F0h] [rbp-1E0h]
  int v526; // [rsp+258h] [rbp-178h]
  int v527; // [rsp+25Ch] [rbp-174h]
  int v528; // [rsp+260h] [rbp-170h]
  int v529; // [rsp+264h] [rbp-16Ch]
  __int64 v530; // [rsp+268h] [rbp-168h]
  __int64 v532; // [rsp+278h] [rbp-158h]
  __int64 v534; // [rsp+288h] [rbp-148h]
  __int64 v535; // [rsp+290h] [rbp-140h]
  __int64 v536; // [rsp+298h] [rbp-138h]
  __int64 v537; // [rsp+2A0h] [rbp-130h]
  __int64 v538; // [rsp+2A8h] [rbp-128h]
  int v539; // [rsp+2B0h] [rbp-120h]
  int v540; // [rsp+2B4h] [rbp-11Ch]
  __m128d v541; // [rsp+2B8h] [rbp-118h]
  int v543; // [rsp+2CCh] [rbp-104h]
  int v544; // [rsp+2D0h] [rbp-100h]
  int v545; // [rsp+2D4h] [rbp-FCh]
  __m128i v546; // [rsp+2D8h] [rbp-F8h] BYREF
  __m128i v547; // [rsp+2E8h] [rbp-E8h]
  _DWORD v548[7]; // [rsp+2F8h] [rbp-D8h] BYREF
  int v549; // [rsp+314h] [rbp-BCh]
  double v550; // [rsp+318h] [rbp-B8h]
  double v551; // [rsp+320h] [rbp-B0h]
  double v552; // [rsp+328h] [rbp-A8h]
  double v553; // [rsp+330h] [rbp-A0h]
  double v554; // [rsp+338h] [rbp-98h]
  double v555; // [rsp+340h] [rbp-90h]
  double v556; // [rsp+348h] [rbp-88h]
  double v557; // [rsp+350h] [rbp-80h]
  double v558[15]; // [rsp+358h] [rbp-78h]

  v534 = *(_QWORD *)(a1 + 160);
  v537 = *(_QWORD *)(a1 + 80);
  v435 = *(_QWORD *)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(a1 + 176);
  v538 = v10;
  v527 = *a7;
  v535 = *(_QWORD *)(a1 + 48);
  v530 = *(_QWORD *)(a1 + 56);
  v536 = *(_QWORD *)(a1 + 64);
  v12 = *(_QWORD *)(a1 + 72);
  v13 = *(_DWORD *)(a1 + 240);
  v14 = v13 - *(_DWORD *)(a1 + 296);
  v540 = v13;
  v528 = *a8;
  v15 = v14 + 1;
  v539 = *(_DWORD *)(a1 + 292);
  if ( v13 <= 0 )
  {
    v25 = 0;
    if ( !v14 )
      goto LABEL_11;
  }
  else
  {
    v16 = (unsigned int)(v13 - 1);
    v18 = (int *)(v12 + 4);
    v20 = v12 + 4 * v16 + 8;
    do
    {
      v21 = *v18;
      if ( (int)v21 > 0 )
      {
        *(_DWORD *)(a5 + 4LL * --v15) = v21;
        v22 = *(int *)(a3 + 8 * v21);
        if ( (_DWORD)v22 )
        {
          v23 = (_DWORD *)(a5 + 4LL * v15 - 4);
          v24 = 1;
          do
          {
            if ( v13 < ++v24 )
              break;
            *v23 = v22;
            v22 = *(int *)(a3 + 8 * v22);
            --v15;
            --v23;
          }
          while ( (_DWORD)v22 );
        }
      }
      ++v18;
    }
    while ( v18 != (int *)v20 );
    if ( v15 == 1 )
    {
      v27 = 0;
      v28 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4));
      v29 = 1;
      v529 = v28;
      do
      {
        if ( *(int *)(a4 + 8 * v29 + 4) >= 0 )
        {
          v30 = v28 + v27++;
          *(_DWORD *)(v534 + 4LL * v30) = v29;
        }
        ++v29;
      }
      while ( v29 != v16 + 2 );
      if ( v27 == v14 )
      {
        v544 = v27 >> 3;
        if ( v27 >> 3 <= 0 )
          goto LABEL_152;
        v421 = v27 - 9;
        v414 = v27;
        v31 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
        v526 = v27 - 1;
        v532 = v27 - 8LL;
        v519 = v532;
        v545 = v27;
        v521 = v27 - 7;
        v32 = v27 - 1;
        v33 = v11;
        v518 = a2 + 4LL * v27;
        v543 = v27 - 8 * v544;
        v34 = v27;
        while ( 2 )
        {
          v462 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4 * v34));
          v491 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4 * v34 - 4));
          v488 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4 * v34 - 8));
          v492 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4 * v34 - 12));
          v489 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4 * v34 - 16));
          v493 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4 * v34 - 20));
          v490 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4 * v34 - 24));
          v494 = *(_DWORD *)(v435 + 4LL * *(int *)(a5 + 4 * v34 - 28));
          v546 = _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(v494), _mm_cvtsi32_si128(v490)),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(v493), _mm_cvtsi32_si128(v489)));
          v35 = 7;
          v36 = v27;
          v418 = v27 - 8;
          v430 = v27 - 8 + 6;
          v426 = 7 - v34;
          v37 = v462;
          v547 = _mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(v492), _mm_cvtsi32_si128(v488)),
                   _mm_unpacklo_epi32(_mm_cvtsi32_si128(v491), _mm_cvtsi32_si128(v462)));
          if ( v36 > 0 )
          {
LABEL_20:
            v38 = (double *)(v33 + 8LL * v37);
            if ( v36 == 1 )
            {
              v45 = 0;
            }
            else
            {
              v39 = 1;
              v40 = 2;
              v41 = *(_QWORD *)v38 & *(_QWORD *)&v31.m128d_f64[0];
              do
              {
                v42 = *(_QWORD *)&v38[v40 - 1] & *(_QWORD *)&v31.m128d_f64[0];
                v43 = *(double *)&v42 <= *(double *)&v41;
                v44 = fmax(*(double *)&v42, *(double *)&v41);
                if ( !v43 )
                  v39 = v40;
                ++v40;
                *(double *)&v41 = v44;
              }
              while ( v36 >= (int)v40 );
              v45 = v39 - 1;
              v38 = (double *)(v33 + 8LL * (v37 + v45));
            }
            goto LABEL_26;
          }
          while ( 1 )
          {
            v45 = -1;
            v38 = (double *)(v33 + 8LL * (v37 - 1));
LABEL_26:
            v46 = *v38;
            v453 = v32;
            *(_DWORD *)(v518 + 4 * v35 - 28) = v45;
            v548[v35] = v45;
            v47 = (double *)(v33 + 8LL * (v32 + v37));
            *v38 = *v47;
            if ( *(double *)(a1 + 24) > COERCE_DOUBLE(*(_QWORD *)&v46 & *(_QWORD *)&v31.m128d_f64[0]) )
            {
              v48 = 0.0;
              v46 = 0.0;
            }
            else
            {
              v48 = 1.0 / v46;
            }
            *v47 = v46;
            v558[v35] = v48;
            v436 = --v35;
            if ( v32 + v426 >= 0 )
            {
              v457 = v37;
              v449 = v37;
              v446 = 8LL * v37 + 16;
              v441 = 8LL * v37;
              while ( 1 )
              {
                while ( 1 )
                {
                  v50 = v546.m128i_i32[v35];
                  v51 = (_QWORD *)(v33 + 8LL * (v50 + v45));
                  v52 = (_QWORD *)(v33 + 8LL * (v32 + v50));
                  v49 = _mm_xor_pd((__m128d)(unsigned __int64)*v51, (__m128d)xmmword_289BF0);
                  *v51 = *v52;
                  v49.m128d_f64[0] = v49.m128d_f64[0] * v48;
                  if ( COERCE_DOUBLE(*(_QWORD *)&v49.m128d_f64[0] & *(_QWORD *)&v31.m128d_f64[0]) > *(double *)(a1 + 24) )
                    break;
                  v49.m128d_f64[0] = 0.0;
LABEL_31:
                  --v35;
                  *v52 = *(_QWORD *)&v49.m128d_f64[0];
                  if ( (int)v35 < 0 )
                    goto LABEL_44;
                }
                if ( v32 <= 0 )
                  goto LABEL_31;
                v53 = 8LL * v50;
                v54 = v441 >= v53 + 16;
                v55 = v53 >= v446;
                v56 = v33 + v53;
                if ( !v55 && !v54 || (unsigned int)v32 <= 8 )
                {
                  v70 = v33 + 8 + 8 * (v430 + (__int64)v50);
                  v71 = v449 - v50;
                  do
                  {
                    v72 = *(double *)(v56 + 8 * v71);
                    v56 += 8LL;
                    *(double *)(v56 - 8) = v72 * v49.m128d_f64[0] + *(double *)(v56 - 8);
                  }
                  while ( v56 != v70 );
                  goto LABEL_31;
                }
                v57 = (v56 >> 3) & 1;
                v58 = 0;
                if ( (int)v57 + 1 <= v430 )
                {
                  if ( (_DWORD)v57 )
                  {
                    v58 = 1;
                    *(double *)v56 = *(double *)(v33 + v441) * v49.m128d_f64[0] + *(double *)v56;
                  }
                  v59 = v32 - v57;
                  v60 = _mm_unpacklo_pd(v49, v49);
                  v61 = v32 - v57;
                  v62 = v33 + 8 * (((v56 >> 3) & 1) + v50);
                  v63 = 0;
                  v64 = v61 >> 1;
                  v65 = v33 + 8 * (v449 + ((v56 >> 3) & 1));
                  v66 = 0;
                  do
                  {
                    ++v63;
                    *(__m128d *)(v62 + v66) = _mm_add_pd(
                                                _mm_mul_pd(*(__m128d *)(v65 + v66), v60),
                                                *(__m128d *)(v62 + v66));
                    v66 += 16;
                  }
                  while ( v64 > v63 );
                  v58 += v59 & 0xFFFFFFFE;
                  if ( (v59 & 0xFFFFFFFE) == v59 )
                    goto LABEL_31;
                }
                v67 = (double *)(v33 + 8LL * (v50 + v58));
                v68 = v58 + v457;
                v69 = v58 + 1;
                *v67 = *(double *)(v33 + 8LL * v68) * v49.m128d_f64[0] + *v67;
                if ( v32 <= v69 )
                  goto LABEL_31;
                --v35;
                *(double *)(v33 + 8LL * (v69 + v50)) = *(double *)(v33 + 8LL * (v457 + v69)) * v49.m128d_f64[0]
                                                     + *(double *)(v33 + 8LL * (v69 + v50));
                *v52 = *(_QWORD *)&v49.m128d_f64[0];
                if ( (int)v35 < 0 )
                {
LABEL_44:
                  v35 = v436;
                  break;
                }
              }
            }
            --v430;
            if ( v35 == -1 )
              break;
            v36 = v32--;
            v37 = v546.m128i_i32[v35];
            if ( v453 > 0 )
              goto LABEL_20;
          }
          v73 = v462;
          v74 = 5;
          v512 = v548[0];
          v75 = 4;
          do
          {
            v76 = (__int64 *)(v33 + 8LL * (v73 + v548[v74 + 1]));
            v77 = v73 + v418;
            v78 = *v76;
            v79 = (__int64 *)(v33 + 8LL * (v73 + v418 + v75 + 2));
            *v76 = *v79;
            *v79 = v78;
            v80 = v75 - 1;
            if ( (_DWORD)v74 != -1 )
            {
              v81 = (__int64 *)(v33 + 8LL * (v73 + v548[v74]));
              v82 = *v81;
              v83 = (__int64 *)(v33 + 8LL * (v77 + (int)v74));
              *v81 = *v83;
              *v83 = v82;
              v80 = -2;
              if ( v75 != -1 )
              {
                v84 = (__int64 *)(v33 + 8LL * (v73 + v548[v74 - 1]));
                v85 = *v84;
                v86 = (__int64 *)(v33 + 8LL * (v77 + v75));
                *v84 = *v86;
                *v86 = v85;
                v80 = v75 - 1;
                if ( v75 )
                {
                  v87 = (__int64 *)(v33 + 8LL * (v73 + v547.m128i_i32[v74 + 2]));
                  v88 = *v87;
                  v89 = (__int64 *)(v33 + 8LL * (v77 + v80));
                  *v87 = *v89;
                  *v89 = v88;
                  v90 = v75 - 2;
                  if ( v75 != 1 )
                  {
                    v91 = v75 - 3;
                    v92 = (__int64 *)(v33 + 8LL * (v77 + v90));
                    v93 = (__int64 *)(v33 + 8LL * (v73 + v547.m128i_i32[v74 + 1]));
                    v94 = *v93;
                    *v93 = *v92;
                    *v92 = v94;
                    if ( v91 != -1 )
                    {
                      v95 = (__int64 *)(v33 + 8LL * (v77 + v91));
                      v96 = (__int64 *)(v33 + 8LL * (v73 + v547.m128i_i32[v74]));
                      v97 = *v96;
                      *v96 = *v95;
                      *v95 = v97;
                      if ( (_DWORD)v74 != 4 )
                      {
                        v98 = (__int64 *)(v33 + 8LL * v77);
                        v99 = (__int64 *)(v33 + 8LL * (v512 + v73));
                        v100 = *v99;
                        *v99 = *v98;
                        *v98 = v100;
                      }
                    }
                  }
                }
              }
            }
            v73 = v546.m128i_i32[v74-- + 1];
            v75 = v80;
          }
          while ( v80 != -3 );
          v513 = v548[6];
          v514 = v548[5];
          v515 = v548[4];
          v516 = v548[3];
          v517 = v548[2];
          v520 = v548[1];
          if ( (int)v414 <= 400 )
          {
            if ( v418 <= 0 )
              goto LABEL_90;
            v474 = v549;
            v458 = (int *)(a5 + 4LL * v418);
            v478 = (__int64)&v458[-v421 - 1];
            v469 = v33 + 8;
            v101 = v458;
            v102 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289BF0);
            while ( 2 )
            {
              v103 = *(_DWORD *)(v435 + 4LL * *v101);
              v104 = (__int64 *)(v33 + 8LL * (v103 + v474));
              v105 = (__int64 *)(v33 + 8LL * (v103 + v418));
              v106 = *v104;
              v107 = 8LL * (v103 + v418 + 7);
              *v104 = *(_QWORD *)(v33 + v107);
              *(_QWORD *)(v33 + v107) = v106;
              v108 = (__int64 *)(v33 + 8LL * (v103 + v513));
              v109 = (__int64 *)(v33 + v107 - 8);
              v110 = *v108;
              *v108 = *v109;
              *v109 = v110;
              v111 = (__int64 *)(v33 + 8LL * (v103 + v514));
              v112 = (__int64 *)(v33 + v107 - 16);
              v113 = *v111;
              *v111 = *v112;
              *v112 = v113;
              v114 = (__int64 *)(v33 + 8LL * (v103 + v515));
              v115 = (__int64 *)(v33 + v107 - 24);
              v116 = *v114;
              *v114 = *v115;
              *v115 = v116;
              v117 = (__int64 *)(v33 + 8LL * (v103 + v516));
              v118 = (__int64 *)(v33 + v107 - 32);
              v119 = *v117;
              *v117 = *v118;
              *v118 = v119;
              v120 = (__int64 *)(v33 + 8LL * (v103 + v517));
              v121 = (__int64 *)(v33 + v107 - 40);
              v122 = (__int64 *)(v33 + v107 - 48);
              v123 = *v120;
              *v120 = *v121;
              *v121 = v123;
              v463 = v103;
              v124 = v526;
              v125 = (__int64 *)(v33 + 8LL * (v103 + v520));
              v126 = *v125;
              *v125 = *v122;
              *v122 = v126;
              v127 = (__int64 *)(v33 + 8LL * (v103 + v512));
              v128 = *v127;
              *v127 = *v105;
              *v105 = v128;
              v129 = v33 + 8 * (v103 + v519);
              v130 = v103 + v414;
              v442 = 8 * v130 - 64;
              v437 = 8 * v130 - 48;
              v131 = ((unsigned __int64)(v33 + v442) >> 3) & 1;
              v132 = v521;
              if ( !(_DWORD)v131 )
                v132 = v418;
              v454 = v132;
              v133 = v33 + 8 * ((((unsigned __int64)(v33 + v442) >> 3) & 1) + v130) - 64;
              v134 = 7;
              while ( 2 )
              {
                v135 = _mm_xor_pd((__m128d)*(unsigned __int64 *)(v129 + 8 * v134), v102);
                v136 = v546.m128i_i32[v134];
                v135.m128d_f64[0] = v135.m128d_f64[0] * v558[v134];
                v137 = _mm_cmpgt_sd(_mm_and_pd(v135, v31), (__m128d)*(unsigned __int64 *)(a1 + 24));
                v138 = _mm_or_pd(_mm_and_pd(v135, v137), _mm_andn_pd(v137, (__m128d)0LL));
                *(&v550 + v134) = v138.m128d_f64[0];
                *(double *)(v129 + 8 * v134) = v138.m128d_f64[0];
                if ( v124 > v418 )
                {
                  v139 = v136 + v414;
                  if ( (v442 >= 8 * v139 - 48 || 8 * v139 - 64 >= v437) && (unsigned int)v134 > 8 )
                  {
                    if ( 2 - (unsigned int)((_DWORD)v131 == 0) > v426 + v124 )
                    {
                      v145 = v418;
                      goto LABEL_76;
                    }
                    if ( (_DWORD)v131 )
                      *(double *)v105 = *(double *)(v33 + 8LL * (v136 + v418)) * v138.m128d_f64[0] + *(double *)v105;
                    v140 = v134 - v131;
                    v141 = 0;
                    v142 = _mm_unpacklo_pd(v138, v138);
                    v143 = v33 + 8 * ((((unsigned __int64)(v33 + v442) >> 3) & 1) + v139) - 64;
                    v144 = 0;
                    do
                    {
                      ++v144;
                      *(__m128d *)(v133 + v141) = _mm_add_pd(
                                                    _mm_mul_pd(*(__m128d *)(v143 + v141), v142),
                                                    *(__m128d *)(v133 + v141));
                      v141 += 16;
                    }
                    while ( (unsigned int)(v134 - v131) >> 1 > v144 );
                    v145 = (v140 & 0xFFFFFFFE) + v454;
                    if ( (v140 & 0xFFFFFFFE) != v140 )
                    {
LABEL_76:
                      v146 = (double *)(v33 + 8LL * (v103 + v145));
                      v147 = v136 + v145;
                      v148 = v145 + 1;
                      *v146 = *(double *)(v33 + 8LL * v147) * v138.m128d_f64[0] + *v146;
                      if ( v148 < v124 )
                        *(double *)(v33 + 8LL * (v148 + v103)) = v138.m128d_f64[0]
                                                               * *(double *)(v33 + 8LL * (v136 + v148))
                                                               + *(double *)(v33 + 8LL * (v148 + v103));
                    }
                  }
                  else
                  {
                    v208 = v33 + 8 * (v418 + (__int64)v103);
                    do
                    {
                      v209 = *(double *)(v208 + 8 * (v136 - (__int64)v103));
                      v208 += 8;
                      *(double *)(v208 - 8) = v209 * v138.m128d_f64[0] + *(double *)(v208 - 8);
                    }
                    while ( v208 != v469 + 8 * (v418 + (__int64)v103 + (unsigned int)(v124 + v426)) );
                  }
                }
                --v134;
                if ( --v124 != v421 )
                  continue;
                break;
              }
              v149 = 8LL * v103;
              v150 = v149 + 16;
              v438 = v550;
              v151 = v555;
              v443 = v551;
              v447 = v552;
              v450 = v553;
              v455 = v554;
              v465 = v555;
              v152 = (__m128d)*(unsigned __int64 *)&v556;
              v153 = (__m128d)*(unsigned __int64 *)&v557;
              if ( (v149 >= 8LL * v490 + 16 || 8LL * v490 >= v150)
                && (8LL * v492 >= v150 || v149 >= 8LL * v492 + 16)
                && (v149 >= 8LL * v488 + 16 || 8LL * v488 >= v150)
                && (unsigned int)v418 > 4
                && (v149 >= 8LL * v491 + 16 || 8LL * v491 >= v150)
                && (8LL * v462 >= v150 || v149 >= 8LL * v462 + 16)
                && (8LL * v489 >= v150 || v149 >= 8LL * v489 + 16)
                && (8LL * v493 >= v150 || v149 >= 8LL * v493 + 16)
                && (v149 >= 8LL * v494 + 16 || 8LL * v494 >= v150) )
              {
                v154 = v33 + v149;
                v155 = (v154 >> 3) & 1;
                if ( 2 - (unsigned int)((_DWORD)v155 == 0) > v421 )
                {
                  v176 = 0;
                  goto LABEL_87;
                }
                v467 = 0;
                if ( (_DWORD)v155 )
                {
                  v467 = 1;
                  *(double *)v154 = *(double *)(v33 + 8LL * v462) * v557
                                  + *(double *)(v33 + 8LL * v488) * v555
                                  + *(double *)(v33 + 8LL * v490) * v551
                                  + *(double *)v154
                                  + v553 * *(double *)(v33 + 8LL * v489)
                                  + *(double *)(v33 + 8LL * v491) * v556
                                  + *(double *)(v33 + 8LL * v492) * v554
                                  + v550 * *(double *)(v33 + 8LL * v494)
                                  + v552 * *(double *)(v33 + 8LL * v493);
                }
                v471 = v418 - v155;
                v156 = (unsigned int)(v418 - v155) >> 1;
                v157 = v33 + 8 * (((v154 >> 3) & 1) + v103);
                v158 = v33 + 8 * (((v154 >> 3) & 1) + v494);
                v159 = v33 + 8 * (((v154 >> 3) & 1) + v490);
                v160 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v438, (__m128d)*(unsigned __int64 *)&v438);
                v161 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v443, (__m128d)*(unsigned __int64 *)&v443);
                v162 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v447, (__m128d)*(unsigned __int64 *)&v447);
                v163 = v33 + 8 * (((v154 >> 3) & 1) + v493);
                v164 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v450, (__m128d)*(unsigned __int64 *)&v450);
                v165 = v33 + 8 * (((v154 >> 3) & 1) + v489);
                v166 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v455, (__m128d)*(unsigned __int64 *)&v455);
                v167 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v465, (__m128d)*(unsigned __int64 *)&v465);
                v168 = v33 + 8 * (((v154 >> 3) & 1) + v492);
                v169 = _mm_unpacklo_pd(v152, v152);
                v170 = v33 + 8 * (((v154 >> 3) & 1) + v488);
                v171 = _mm_unpacklo_pd(v153, v153);
                v172 = v33 + 8 * (((v154 >> 3) & 1) + v491);
                v173 = 0;
                v174 = v33 + 8 * (v462 + ((v154 >> 3) & 1));
                v175 = 0;
                do
                {
                  ++v173;
                  *(__m128d *)(v157 + v175) = _mm_add_pd(
                                                _mm_add_pd(
                                                  _mm_add_pd(
                                                    _mm_add_pd(
                                                      _mm_add_pd(
                                                        _mm_mul_pd(*(__m128d *)(v159 + v175), v161),
                                                        *(__m128d *)(v157 + v175)),
                                                      _mm_mul_pd(*(__m128d *)(v165 + v175), v164)),
                                                    _mm_mul_pd(*(__m128d *)(v170 + v175), v167)),
                                                  _mm_mul_pd(*(__m128d *)(v174 + v175), v171)),
                                                _mm_add_pd(
                                                  _mm_add_pd(
                                                    _mm_add_pd(
                                                      _mm_mul_pd(*(__m128d *)(v158 + v175), v160),
                                                      _mm_mul_pd(*(__m128d *)(v163 + v175), v162)),
                                                    _mm_mul_pd(*(__m128d *)(v168 + v175), v166)),
                                                  _mm_mul_pd(*(__m128d *)(v172 + v175), v169)));
                  v175 += 16;
                }
                while ( v156 > v173 );
                v176 = (v471 & 0xFFFFFFFE) + v467;
                if ( (v471 & 0xFFFFFFFE) != v471 )
                {
LABEL_87:
                  v177 = (double *)(v33 + 8LL * (int)(v103 + v176));
                  v178 = *(double *)(v33 + 8LL * (int)(v489 + v176)) * v450
                       + *(double *)(v33 + 8LL * (int)(v490 + v176)) * v443
                       + *v177;
                  v179 = *(double *)(v33 + 8LL * (int)(v488 + v176)) * v465;
                  v180 = *(double *)(v33 + 8LL * (int)(v493 + v176)) * v447
                       + *(double *)(v33 + 8LL * (int)(v494 + v176)) * v438
                       + *(double *)(v33 + 8LL * (int)(v492 + v176)) * v455;
                  v181 = *(double *)(v33 + 8LL * (int)(v491 + v176));
                  v182 = v462 + v176;
                  v183 = v176 + 1;
                  *v177 = v181 * v152.m128d_f64[0]
                        + v180
                        + *(double *)(v33 + 8LL * v182) * v153.m128d_f64[0]
                        + v178
                        + v179;
                  if ( v183 < v418 )
                  {
                    v184 = (double *)(v33 + 8LL * (v183 + v103));
                    *v184 = v153.m128d_f64[0] * *(double *)(v33 + 8LL * (v183 + v462))
                          + *(double *)(v33 + 8LL * (v183 + v489)) * v450
                          + *v184
                          + v443 * *(double *)(v33 + 8LL * (v183 + v490))
                          + *(double *)(v33 + 8LL * (v183 + v488)) * v465
                          + v152.m128d_f64[0] * *(double *)(v33 + 8LL * (v491 + v183))
                          + *(double *)(v33 + 8LL * (v183 + v492)) * v455
                          + v438 * *(double *)(v33 + 8LL * (v183 + v494))
                          + *(double *)(v33 + 8LL * (v183 + v493)) * v447;
                  }
                }
              }
              else
              {
                v314 = (double *)(v33 + v149);
                v315 = (double *)(v469 + 8 * (v103 + (unsigned __int64)(unsigned int)v124));
                v316 = v494 - (__int64)v103;
                v317 = v490 - (__int64)v103;
                v318 = v493 - (__int64)v103;
                v319 = v489 - (__int64)v103;
                v320 = v492 - (__int64)v103;
                v321 = v488 - (__int64)v103;
                do
                {
                  v322 = v314[v318] * v447 + v314[v316] * v438 + v314[v320] * v455;
                  v323 = v314[v462 - v463] * v153.m128d_f64[0]
                       + v314[v321] * v151
                       + v314[v319] * v450
                       + v314[v317] * v443
                       + *v314;
                  v324 = v314[v491 - v463];
                  *v314++ = v323 + v324 * v152.m128d_f64[0] + v322;
                }
                while ( v315 != v314 );
              }
              v101 = --v458;
              if ( v458 != (int *)v478 )
                continue;
              break;
            }
LABEL_90:
            v185 = v462;
            v186 = 7;
            do
            {
              v187 = (__int64 *)(v33 + 8LL * (v185 + v512));
              v188 = *v187;
              v189 = (__int64 *)(v33 + 8LL * (v185 + v418));
              *v187 = *v189;
              *v189 = v188;
              if ( v186 != 1 )
              {
                v190 = 8LL * (v185 + v418 + 1);
                v191 = (__int64 *)(v33 + 8LL * (v185 + v520));
                v192 = *v191;
                *v191 = *(_QWORD *)(v33 + v190);
                *(_QWORD *)(v33 + v190) = v192;
                if ( (_DWORD)v186 != 2 )
                {
                  v193 = (__int64 *)(v33 + 8LL * (v185 + v517));
                  v194 = (__int64 *)(v33 + v190 + 8);
                  v195 = *v193;
                  *v193 = *v194;
                  *v194 = v195;
                  if ( (_DWORD)v186 != 3 )
                  {
                    v196 = (__int64 *)(v33 + 8LL * (v185 + v516));
                    v197 = (__int64 *)(v33 + v190 + 16);
                    v198 = *v196;
                    *v196 = *v197;
                    *v197 = v198;
                    if ( (_DWORD)v186 != 4 )
                    {
                      v199 = (__int64 *)(v33 + 8LL * (v185 + v515));
                      v200 = (__int64 *)(v33 + v190 + 24);
                      v201 = *v199;
                      *v199 = *v200;
                      *v200 = v201;
                      if ( (_DWORD)v186 != 5 )
                      {
                        v202 = (__int64 *)(v33 + 8LL * (v185 + v514));
                        v203 = (__int64 *)(v33 + v190 + 32);
                        v204 = *v202;
                        *v202 = *v203;
                        *v203 = v204;
                        if ( (_DWORD)v186 != 6 )
                        {
                          v205 = (__int64 *)(v33 + v190 + 40);
                          v206 = (__int64 *)(v33 + 8LL * (v513 + v185));
                          v207 = *v206;
                          *v206 = *v205;
                          *v205 = v207;
                        }
                      }
                    }
                  }
                }
              }
              v185 = v546.m128i_i32[--v186];
            }
            while ( v186 );
            v421 -= 8;
            v519 -= 8;
            v27 = v418;
            v34 = v532;
            v521 -= 8;
            v526 -= 8;
            v518 -= 32;
            v414 = v532;
            if ( v418 != v543 )
            {
              v32 = v418 - 1;
              v532 -= 8;
              continue;
            }
            v11 = v33;
            v27 = v545 - 8 * v544;
LABEL_152:
            if ( v27 > 0 )
            {
              v325 = v27 - 1;
              v326 = 4LL * v27 - 4;
              v327 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289BF0);
              for ( i = -4LL * v27 + 8; ; i += 4 )
              {
                while ( 1 )
                {
                  v328 = *(int *)(v435 + 4LL * *(int *)(a5 + v326 + 4));
                  v329 = (double *)(v11 + 8 * v328);
                  v416 = 8 * v328;
                  v330 = *v329;
                  v331 = fabs(*v329);
                  if ( v27 == 1 )
                  {
                    v337 = (double *)(v11 + 8 * v328);
                    v336 = 0;
                  }
                  else
                  {
                    v332 = 1;
                    v333 = 2;
                    do
                    {
                      v334 = fabs(v329[v333 - 1]);
                      v43 = v334 <= v331;
                      v335 = fmax(v334, v331);
                      if ( !v43 )
                        v332 = v333;
                      ++v333;
                      v331 = v335;
                    }
                    while ( v27 >= (int)v333 );
                    v336 = v332 - 1;
                    v337 = (double *)(v11 + 8LL * ((int)v328 + v336));
                    v330 = *v337;
                    v331 = fabs(*v337);
                  }
                  v27 = v325;
                  v338 = (double *)(v11 + 8LL * (int)(v328 + v325));
                  *(_DWORD *)(a2 + v326 + 4) = v336;
                  *v337 = *v338;
                  if ( *(double *)(a1 + 24) <= v331 )
                    break;
                  i += 4;
                  v326 -= 4;
                  *v338 = 0.0;
                  if ( !v325 )
                    goto LABEL_182;
                  --v325;
                }
                *v338 = v330;
                v339 = 1.0 / v330;
                if ( !v325 )
                  break;
                v445 = v326;
                v433 = v325 - 1;
                v340 = v433;
                v428 = v325 - 1;
                v341 = v326 + i + a5;
                while ( 1 )
                {
                  v342 = *(_DWORD *)(v435 + 4LL * *(int *)(v341 + 4 * v340));
                  v343 = (_QWORD *)(v11 + 8LL * (v342 + v336));
                  v344 = (_QWORD *)(v11 + 8LL * (v27 + v342));
                  v345 = _mm_xor_pd((__m128d)(unsigned __int64)*v343, v327);
                  v345.m128d_f64[0] = v345.m128d_f64[0] * v339;
                  *v343 = *v344;
                  if ( fabs(v345.m128d_f64[0]) <= *(double *)(a1 + 24) )
                  {
                    *v344 = 0;
                    goto LABEL_166;
                  }
                  v346 = v342;
                  *v344 = *(_QWORD *)&v345.m128d_f64[0];
                  v347 = 8LL * v342;
                  v348 = v416 >= v347 + 16;
                  v349 = v347 >= v416 + 16;
                  v350 = v11 + v347;
                  if ( !v349 && !v348 || (unsigned int)v27 <= 8 )
                  {
                    v410 = v11 + 8 + 8 * (v342 + v433);
                    v411 = v328 - v346;
                    do
                    {
                      v412 = *(double *)(v350 + 8 * v411);
                      v350 += 8LL;
                      *(double *)(v350 - 8) = v412 * v345.m128d_f64[0] + *(double *)(v350 - 8);
                    }
                    while ( v410 != v350 );
                    goto LABEL_166;
                  }
                  v351 = (v350 >> 3) & 1;
                  if ( 2 - (unsigned int)((_DWORD)v351 == 0) > v428 )
                    break;
                  v424 = 0;
                  if ( (_DWORD)v351 )
                  {
                    v424 = 1;
                    *(double *)v350 = *(double *)(v11 + 8 * v328) * v345.m128d_f64[0] + *(double *)v350;
                  }
                  v352 = v27 - v351;
                  v353 = _mm_unpacklo_pd(v345, v345);
                  v354 = v27 - v351;
                  v355 = v11 + 8 * (((v350 >> 3) & 1) + v342);
                  v356 = 0;
                  v357 = v354 >> 1;
                  v358 = v11 + 8 * (v328 + ((v350 >> 3) & 1));
                  v359 = 0;
                  do
                  {
                    ++v356;
                    *(__m128d *)(v355 + v359) = _mm_add_pd(
                                                  _mm_mul_pd(*(__m128d *)(v358 + v359), v353),
                                                  *(__m128d *)(v355 + v359));
                    v359 += 16;
                  }
                  while ( v356 < v357 );
                  v360 = (v352 & 0xFFFFFFFE) + v424;
                  if ( (v352 & 0xFFFFFFFE) != v352 )
                    goto LABEL_177;
LABEL_166:
                  if ( !(_DWORD)v340 )
                    goto LABEL_179;
LABEL_167:
                  --v340;
                }
                v360 = 0;
LABEL_177:
                v361 = (double *)(v11 + 8LL * (int)(v342 + v360));
                v362 = v328 + v360;
                v363 = v360 + 1;
                *v361 = *(double *)(v11 + 8LL * v362) * v345.m128d_f64[0] + *v361;
                if ( v363 >= v27 )
                  goto LABEL_166;
                *(double *)(v11 + 8LL * (v363 + v342)) = *(double *)(v11 + 8LL * ((int)v328 + v363)) * v345.m128d_f64[0]
                                                       + *(double *)(v11 + 8LL * (v363 + v342));
                if ( (_DWORD)v340 )
                  goto LABEL_167;
LABEL_179:
                v325 = v428;
                v326 = v445 - 4;
              }
            }
LABEL_182:
            v364 = *(_DWORD *)(a1 + 296);
            v365 = v540 - v364;
            if ( v540 - v364 <= 0 )
            {
              v25 = 0;
              goto LABEL_11;
            }
            v366 = v365;
            v425 = 0;
            v417 = a6 - v527 + 1;
            v429 = (_DWORD *)(v534 + 4LL * v529);
            while ( 1 )
            {
              v367 = *(int *)(a5 + 4 * v366);
              v368 = v365 - 1;
              v369 = (_DWORD *)(v534 + 4LL * (*(_DWORD *)(a2 + 4 * v366) + v529));
              v370 = *(_DWORD *)(v435 + 4 * v367);
              v371 = *(_DWORD *)(a5 + 4 * v366);
              v372 = a3 + 8 * v367;
              v373 = (int *)(v530 + 4 * v367);
              v423 = v373;
              v419 = *v369;
              *(_DWORD *)(a1 + 296) = v364 + 1;
              v374 = (double *)(v11 + 8LL * (v370 + v365 - 1));
              v375 = *v374;
              if ( *v374 == 0.0 )
                break;
              v376 = ~v364;
              *(_DWORD *)(v372 + 4) = v376;
              *(_DWORD *)(a4 + 8LL * v419 + 4) = v376;
              *(_DWORD *)(v536 + 4LL * v419) = 0;
              v377 = *(_DWORD *)(a1 + 304) + 1;
              *(_DWORD *)(a1 + 304) = v377;
              *(_DWORD *)(v535 + 4LL * v377) = v417 - 1;
              *(_DWORD *)(v537 + 4LL * *(int *)(a1 + 304)) = v371;
              if ( v365 != 1 )
              {
                v461 = v366;
                v378 = v528;
                v379 = 4LL * v368;
                v380 = (int *)(v379 + a5);
                v434 = v369;
                v381 = v527;
                v382 = v417;
                v383 = a5 - 4 + v379 - 4LL * (unsigned int)(v366 - 2);
                do
                {
                  while ( 1 )
                  {
                    v384 = *v380;
                    v385 = *(double *)(v11 + 8LL * (v368 + *(_DWORD *)(v435 + 4LL * *v380)));
                    if ( v385 != 0.0 || v539 )
                      break;
                    if ( (int *)v383 == --v380 )
                      goto LABEL_194;
                  }
                  --v382;
                  --v380;
                  ++v381;
                  --v378;
                  *(double *)(v11 + 8LL * v382) = v385;
                  *(_DWORD *)(v538 + 4LL * v382) = v384;
                }
                while ( (int *)v383 != v380 );
LABEL_194:
                v528 = v378;
                v527 = v381;
                v374 = (double *)(v11 + 8LL * (v370 + v368));
                v369 = v434;
                v366 = v461;
                v417 = v382;
              }
              v386 = (_DWORD *)(v534 + 4LL * (v368 + v529));
              *v369 = *v386;
              v387 = 8LL * v370;
              *v374 = *(double *)(v11 + v387);
              *v386 = *v429;
              v388 = 4LL * v370;
              *(double *)(v11 + v387) = v375;
              *(_DWORD *)(v534 + v388) = v419;
              if ( v539 )
              {
                if ( v365 == 1 )
                {
                  v365 = 1;
                }
                else
                {
                  v393 = v11 + v387 + 8;
                  if ( (v393 >= v534 + 4 * (v370 + (__int64)v368 + 1)
                     || v534 + v388 + 4 >= (unsigned __int64)(v11 + 8 * (v370 + (__int64)v368 + 1)))
                    && (unsigned int)v368 > 0xA
                    && (v388 + 4 >= 4LL * v529 + 20 || 4LL * v529 + 4 >= v388 + 20) )
                  {
                    v394 = (v393 & 8) != 0;
                    if ( (int)v366 - 2 < 4 - (unsigned int)((v393 & 8) == 0) )
                    {
                      v402 = 1;
                      goto LABEL_212;
                    }
                    v395 = 1;
                    if ( (v393 & 8) != 0 )
                    {
                      v395 = 2;
                      *(_DWORD *)(v534 + v388 + 4) = *(_DWORD *)(v534 + 4LL * (v529 + 1));
                    }
                    v396 = (v393 & 8) != 0;
                    v420 = v368 - v394;
                    v397 = (unsigned int)(v368 - v394) >> 2;
                    v398 = v534 + 4 * (v396 + v529 + 1LL);
                    v399 = 0;
                    v400 = v534 + 4 * (v370 + 1LL + v396);
                    v401 = 0;
                    do
                    {
                      ++v399;
                      *(__m128i *)(v400 + v401) = _mm_loadu_si128((const __m128i *)(v398 + v401));
                      v401 += 16;
                    }
                    while ( v399 < v397 );
                    v402 = (v420 & 0xFFFFFFFC) + v395;
                    if ( (v420 & 0xFFFFFFFC) != v420 )
                    {
LABEL_212:
                      v403 = v370 + v402 + 1;
                      *(_DWORD *)(v534 + 4 * v403 - 4) = *(_DWORD *)(v534 + 4LL * (v529 + v402));
                      *(_QWORD *)(v11 + 8 * v403 - 8) = *(_QWORD *)(v11 + 8LL * (v370 + v402));
                      if ( v368 >= v402 + 1 )
                      {
                        v404 = *(_QWORD *)(v11 + 8 * v403);
                        v405 = v402 + 2 + v370;
                        *(_DWORD *)(v534 + 4 * v405 - 4) = *(_DWORD *)(v534 + 4LL * (v529 + v402 + 1));
                        *(_QWORD *)(v11 + 8 * v405 - 8) = v404;
                        if ( v402 + 2 <= v368 )
                        {
                          v406 = *(_QWORD *)(v11 + 8 * v405);
                          v407 = v402 + 3 + v370;
                          *(_DWORD *)(v534 + 4 * v407 - 4) = *(_DWORD *)(v534 + 4LL * (v529 + v402 + 2));
                          *(_QWORD *)(v11 + 8 * v407 - 8) = v406;
                          if ( v402 + 3 <= v368 )
                          {
                            v408 = *(_QWORD *)(v11 + 8 * v407);
                            v409 = v370 + v402 + 4;
                            *(_DWORD *)(v534 + 4 * v409 - 4) = *(_DWORD *)(v534 + 4LL * (v402 + 3 + v529));
                            *(_QWORD *)(v11 + 8 * v409 - 8) = v408;
                          }
                        }
                      }
                    }
                  }
                  else
                  {
                    v413 = 1;
                    do
                    {
                      *(_DWORD *)(v534 + v388 + 4 * v413) = v429[v413];
                      ++v413;
                    }
                    while ( v413 != (unsigned int)(v366 - 2) + 2LL );
                  }
                }
                *v423 = v365;
LABEL_185:
                --v366;
                if ( !v368 )
                  goto LABEL_202;
                goto LABEL_186;
              }
              if ( v365 == 1 )
              {
                v389 = 1;
              }
              else
              {
                v389 = 1;
                v390 = 1;
                do
                {
                  v391 = *(double *)(v11 + v387 + 8 * v390);
                  if ( fabs(v391) > *(double *)(a1 + 24) )
                  {
                    ++v389;
                    v392 = v370 + v389;
                    *(_DWORD *)(v534 + 4 * v392 - 4) = *(_DWORD *)(v534 + 4LL * ((int)v390 + v529));
                    *(double *)(v11 + 8 * v392 - 8) = v391;
                  }
                  ++v390;
                }
                while ( (unsigned int)(v366 - 2) + 2LL != v390 );
              }
              --v366;
              *v423 = v389;
              if ( v365 == 1 )
              {
LABEL_202:
                v25 = v425;
                goto LABEL_11;
              }
LABEL_186:
              v364 = *(_DWORD *)(a1 + 296);
              v365 = v368;
            }
            *v373 = 0;
            v425 = 10;
            *(_DWORD *)(v372 + 4) = ~v540;
            ++*a9;
            goto LABEL_185;
          }
          break;
        }
        if ( v418 <= 0 )
          goto LABEL_90;
        v472 = v549;
        v210 = 4LL * v418;
        v459 = (int *)(a5 + v210);
        v475 = a5 - 4 + v210 - 4LL * v421;
        v211 = (int *)(a5 + v210);
LABEL_107:
        v212 = *(_DWORD *)(v435 + 4LL * *v211);
        v213 = (__int64 *)(v33 + 8LL * (v212 + v472));
        v214 = *v213;
        v215 = 8LL * (v212 + v418 + 7);
        *v213 = *(_QWORD *)(v33 + v215);
        *(_QWORD *)(v33 + v215) = v214;
        v216 = (__int64 *)(v33 + 8LL * (v212 + v513));
        v217 = (__int64 *)(v33 + v215 - 8);
        v218 = *v216;
        *v216 = *v217;
        *v217 = v218;
        v219 = (__int64 *)(v33 + 8LL * (v212 + v514));
        v220 = (__int64 *)(v33 + v215 - 16);
        v221 = *v219;
        *v219 = *v220;
        *v220 = v221;
        v222 = (__int64 *)(v33 + 8LL * (v212 + v515));
        v223 = (__int64 *)(v33 + v215 - 24);
        v224 = *v222;
        *v222 = *v223;
        *v223 = v224;
        v225 = (__int64 *)(v33 + 8LL * (v212 + v516));
        v226 = (__int64 *)(v33 + v215 - 32);
        v227 = *v225;
        *v225 = *v226;
        *v226 = v227;
        v228 = (__int64 *)(v33 + 8LL * (v212 + v517));
        v229 = (__int64 *)(v33 + v215 - 40);
        v230 = (__int64 *)(v33 + v215 - 48);
        v231 = *v228;
        *v228 = *v229;
        *v229 = v231;
        v232 = v526;
        v233 = (__int64 *)(v33 + 8LL * (v212 + v418));
        v234 = (__int64 *)(v33 + 8LL * (v212 + v520));
        v235 = *v234;
        *v234 = *v230;
        *v230 = v235;
        v236 = (__int64 *)(v33 + 8LL * (v212 + v512));
        v237 = *v236;
        *v236 = *v233;
        *v233 = v237;
        v238 = v33 + 8 * (v212 + v519);
        v239 = v212 + v414;
        v439 = 8 * v239 - 64;
        v431 = 8 * v239 - 48;
        v240 = ((unsigned __int64)(v33 + v439) >> 3) & 1;
        v241 = v521;
        if ( !(_DWORD)v240 )
          v241 = v418;
        v451 = v241;
        v242 = v33 + 8 * ((((unsigned __int64)(v33 + v439) >> 3) & 1) + v239) - 64;
        v243 = 7;
        while ( 1 )
        {
          v244 = _mm_xor_pd((__m128d)*(unsigned __int64 *)(v238 + 8 * v243), (__m128d)xmmword_289BF0);
          v245 = v546.m128i_i32[v243];
          v244.m128d_f64[0] = v244.m128d_f64[0] * v558[v243];
          v246 = _mm_cmpgt_sd(_mm_and_pd(v244, v31), (__m128d)*(unsigned __int64 *)(a1 + 24));
          v247 = _mm_or_pd(_mm_and_pd(v244, v246), _mm_andn_pd(v246, (__m128d)0LL));
          *(double *)(v238 + 8 * v243) = v247.m128d_f64[0];
          if ( v232 > v418 )
          {
            v248 = v245 + v414;
            if ( (v439 >= 8 * v248 - 48 || 8 * v248 - 64 >= v431) && (unsigned int)v243 > 8 )
            {
              if ( 2 - (unsigned int)((_DWORD)v240 == 0) > v232 + v426 )
              {
                v254 = v418;
              }
              else
              {
                if ( (_DWORD)v240 )
                  *(double *)(v33 + 8LL * (v212 + v418)) = *(double *)(v33 + 8LL * (v245 + v418)) * v247.m128d_f64[0]
                                                         + *(double *)(v33 + 8LL * (v212 + v418));
                v249 = v243 - v240;
                v250 = 0;
                v251 = _mm_unpacklo_pd(v247, v247);
                v252 = v33 + 8 * ((((unsigned __int64)(v33 + v439) >> 3) & 1) + v248) - 64;
                v253 = 0;
                do
                {
                  ++v253;
                  *(__m128d *)(v242 + v250) = _mm_add_pd(
                                                _mm_mul_pd(*(__m128d *)(v252 + v250), v251),
                                                *(__m128d *)(v242 + v250));
                  v250 += 16;
                }
                while ( (unsigned int)(v243 - v240) >> 1 > v253 );
                v254 = (v249 & 0xFFFFFFFE) + v451;
                if ( (v249 & 0xFFFFFFFE) == v249 )
                  goto LABEL_121;
              }
              v255 = (double *)(v33 + 8LL * (v212 + v254));
              v256 = v245 + v254;
              v257 = v254 + 1;
              *v255 = *(double *)(v33 + 8LL * v256) * v247.m128d_f64[0] + *v255;
              if ( v232 > v257 )
                *(double *)(v33 + 8LL * (v212 + v257)) = v247.m128d_f64[0] * *(double *)(v33 + 8LL * (v245 + v257))
                                                       + *(double *)(v33 + 8LL * (v212 + v257));
            }
            else
            {
              v308 = v33 + 8 * (v418 + (__int64)v212);
              do
              {
                v309 = *(double *)(v308 + 8 * (v245 - (__int64)v212));
                v308 += 8;
                *(double *)(v308 - 8) = v309 * v247.m128d_f64[0] + *(double *)(v308 - 8);
              }
              while ( v308 != v33 + 8 + 8 * (v418 + (__int64)v212 + (unsigned int)(v232 + v426)) );
            }
          }
LABEL_121:
          --v243;
          if ( --v232 == v421 )
          {
            v211 = --v459;
            if ( v459 == (int *)v475 )
            {
              v464 = 8LL * v462 + 16;
              v466 = 8LL * v462;
              v468 = 8LL * v491 + 16;
              v470 = 8LL * v491;
              v473 = 8LL * v488 + 16;
              v476 = 8LL * v488;
              v477 = 8LL * v492 + 16;
              v479 = 8LL * v492;
              v480 = 8LL * v489 + 16;
              v481 = 8LL * v489;
              v482 = 8LL * v493 + 16;
              v483 = 8LL * v493;
              v484 = 8LL * v490 + 16;
              v485 = 8LL * v490;
              v486 = 8LL * v494 + 16;
              v487 = 8LL * v494;
              v498 = v489;
              v258 = 0;
              v541 = v31;
              v502 = v462;
              v501 = v491;
              v500 = v488;
              v499 = v492;
              v497 = v493;
              v496 = v490;
              v495 = v494;
              v460 = 0;
              do
              {
                v259 = v258 + 399;
                v440 = v258;
                if ( v258 + 399 > (int)v421 )
                  v259 = v421;
                v427 = v259;
                v510 = (double *)(v33 + 8LL * (v258 + v494));
                v509 = (double *)(v33 + 8LL * (v258 + v490));
                v508 = (double *)(v33 + 8LL * (v258 + v493));
                v507 = (double *)(v33 + 8LL * (v258 + v489));
                v506 = (double *)(v33 + 8LL * (v258 + v492));
                v505 = (double *)(v33 + 8LL * (v258 + v488));
                v504 = (double *)(v33 + 8LL * (v258 + v491));
                v503 = (double *)(v33 + 8LL * (v258 + v462));
                v415 = (int *)(4LL * v418 + a5);
                v260 = v259 - v258;
                v432 = v260 + 1;
                v523 = v460 + v260;
                v511 = v258 + 1;
                v261 = v415;
                do
                {
                  v262 = *(_DWORD *)(v435 + 4LL * *v261);
                  v263 = (__m128d)*(unsigned __int64 *)(v33 + 8LL * (v262 + v418));
                  v264 = v262 + v418 + 7;
                  v265 = (__m128d)*(unsigned __int64 *)(v33 + 8 * v264);
                  v266 = (__m128d)*(unsigned __int64 *)(v33 + 8 * v264 - 8);
                  v267 = (__m128d)*(unsigned __int64 *)(v33 + 8 * v264 - 16);
                  v268 = (__m128d)*(unsigned __int64 *)(v33 + 8 * v264 - 24);
                  v269 = (__m128d)*(unsigned __int64 *)(v33 + 8 * v264 - 32);
                  v270 = (__m128d)*(unsigned __int64 *)(v33 + 8 * v264 - 40);
                  v271 = (__m128d)*(unsigned __int64 *)(v33 + 8 * v264 - 48);
                  if ( v440 <= v427 )
                  {
                    v272 = v262 + v460;
                    v273 = 8 * (v460 + 2 + v262);
                    v274 = 8 * v272;
                    if ( (v484 <= 8 * v272 || v485 >= v273)
                      && (v479 >= v273 || v477 <= 8 * v272)
                      && (v473 <= 8 * v272 || v476 >= v273)
                      && v432 > 4
                      && (v468 <= 8 * v272 || v470 >= v273)
                      && (v466 >= v273 || 8 * v272 >= v464)
                      && (v481 >= v273 || v480 <= 8 * v272)
                      && (v483 >= v273 || v482 <= 8 * v272)
                      && (v486 <= v274 || v487 >= v273) )
                    {
                      v275 = v440;
                      v276 = ((unsigned __int64)(v33 + v274) >> 3) & 1;
                      if ( (((unsigned __int64)(v33 + v274) >> 3) & 1) != 0 )
                      {
                        v275 = v511;
                        *(double *)(v33 + 8LL * (v440 + v262)) = *v503 * v265.m128d_f64[0]
                                                               + *v505 * v267.m128d_f64[0]
                                                               + *v507 * v269.m128d_f64[0]
                                                               + *v509 * v271.m128d_f64[0]
                                                               + *(double *)(v33 + 8LL * (v440 + v262))
                                                               + *v504 * v266.m128d_f64[0]
                                                               + *v508 * v270.m128d_f64[0]
                                                               + *v510 * v263.m128d_f64[0]
                                                               + *v506 * v268.m128d_f64[0];
                      }
                      v277 = ((unsigned __int64)(v33 + v274) >> 3) & 1;
                      v448 = v265.m128d_f64[0];
                      v278 = v432 - v276;
                      v279 = v33 + 8 * ((unsigned int)v276 + v272);
                      v452 = v266.m128d_f64[0];
                      v444 = v278;
                      v456 = v267.m128d_f64[0];
                      v280 = v265;
                      v281 = v278 >> 1;
                      v282 = v33 + 8 * (v277 + v495);
                      v283 = v33 + 8 * (v277 + v496);
                      v284 = _mm_unpacklo_pd(v263, v263);
                      v285 = v33 + 8 * (v277 + v497);
                      v286 = _mm_unpacklo_pd(v271, v271);
                      v287 = v33 + 8 * (v277 + v498);
                      v288 = _mm_unpacklo_pd(v270, v270);
                      v289 = _mm_unpacklo_pd(v269, v269);
                      v290 = _mm_unpacklo_pd(v266, v266);
                      v291 = v33 + 8 * (v277 + v499);
                      v292 = _mm_unpacklo_pd(v280, v280);
                      v293 = _mm_unpacklo_pd(v267, v267);
                      v294 = _mm_unpacklo_pd(v268, v268);
                      v295 = v33 + 8 * (v277 + v500);
                      v296 = v33 + 8 * (v277 + v501);
                      v297 = 0;
                      v298 = v33 + 8 * (v502 + v277);
                      v299 = 0;
                      do
                      {
                        ++v297;
                        *(__m128d *)(v279 + v299) = _mm_add_pd(
                                                      _mm_add_pd(
                                                        _mm_add_pd(
                                                          _mm_add_pd(
                                                            _mm_mul_pd(*(__m128d *)(v282 + v299), v284),
                                                            _mm_mul_pd(*(__m128d *)(v285 + v299), v288)),
                                                          _mm_mul_pd(*(__m128d *)(v291 + v299), v294)),
                                                        _mm_mul_pd(*(__m128d *)(v296 + v299), v290)),
                                                      _mm_add_pd(
                                                        _mm_add_pd(
                                                          _mm_add_pd(
                                                            _mm_add_pd(
                                                              _mm_mul_pd(*(__m128d *)(v283 + v299), v286),
                                                              *(__m128d *)(v279 + v299)),
                                                            _mm_mul_pd(*(__m128d *)(v287 + v299), v289)),
                                                          _mm_mul_pd(*(__m128d *)(v295 + v299), v293)),
                                                        _mm_mul_pd(*(__m128d *)(v298 + v299), v292)));
                        v299 += 16;
                      }
                      while ( v281 > v297 );
                      v265.m128d_f64[0] = v448;
                      v266.m128d_f64[0] = v452;
                      v267.m128d_f64[0] = v456;
                      v300 = (v444 & 0xFFFFFFFE) + v275;
                      if ( (v444 & 0xFFFFFFFE) != v444 )
                      {
                        v301 = (double *)(v33 + 8LL * (v262 + v300));
                        v302 = *(double *)(v33 + 8LL * (v493 + v300)) * v270.m128d_f64[0]
                             + *(double *)(v33 + 8LL * (v494 + v300)) * v263.m128d_f64[0]
                             + *(double *)(v33 + 8LL * (v492 + v300)) * v268.m128d_f64[0];
                        v303 = *(double *)(v33 + 8LL * (v488 + v300)) * v456
                             + *(double *)(v33 + 8LL * (v489 + v300)) * v269.m128d_f64[0]
                             + *(double *)(v33 + 8LL * (v490 + v300)) * v271.m128d_f64[0]
                             + *v301;
                        v304 = *(double *)(v33 + 8LL * (v462 + v300));
                        v305 = v491 + v300;
                        v306 = v300 + 1;
                        *v301 = v304 * v448 + v303 + *(double *)(v33 + 8LL * v305) * v452 + v302;
                        if ( v306 <= v427 )
                        {
                          v307 = (double *)(v33 + 8LL * (v262 + v306));
                          *v307 = *(double *)(v33 + 8LL * (v306 + v462)) * v448
                                + *(double *)(v33 + 8LL * (v306 + v488)) * v456
                                + *(double *)(v33 + 8LL * (v306 + v489)) * v269.m128d_f64[0]
                                + *(double *)(v33 + 8LL * (v306 + v490)) * v271.m128d_f64[0]
                                + *v307
                                + *(double *)(v33 + 8LL * (v491 + v306)) * v452
                                + *(double *)(v33 + 8LL * (v306 + v493)) * v270.m128d_f64[0]
                                + *(double *)(v33 + 8LL * (v306 + v494)) * v263.m128d_f64[0]
                                + *(double *)(v33 + 8LL * (v306 + v492)) * v268.m128d_f64[0];
                        }
                      }
                    }
                    else
                    {
                      v310 = (double *)(v33 + v274);
                      do
                      {
                        v311 = v310[v493 - (__int64)v262] * v270.m128d_f64[0]
                             + v310[v494 - (__int64)v262] * v263.m128d_f64[0]
                             + v310[v492 - (__int64)v262] * v268.m128d_f64[0];
                        v312 = v310[v462 - (__int64)v262] * v265.m128d_f64[0]
                             + v310[v488 - (__int64)v262] * v267.m128d_f64[0]
                             + v310[v489 - (__int64)v262] * v269.m128d_f64[0]
                             + v310[v490 - (__int64)v262] * v271.m128d_f64[0]
                             + *v310;
                        v313 = v310[v491 - (__int64)v262];
                        *v310++ = v312 + v313 * v266.m128d_f64[0] + v311;
                      }
                      while ( v310 != (double *)(v33 + 8 + 8 * (v523 + v262)) );
                    }
                  }
                  v261 = --v415;
                }
                while ( v415 != (int *)(a5 - 4 + 4LL * v418 - 4LL * v421) );
                v460 += 400;
                v464 += 3200;
                v466 += 3200;
                v468 += 3200;
                v258 = v440 + 400;
                v470 += 3200;
                v473 += 3200;
                v476 += 3200;
                v477 += 3200;
                v479 += 3200;
                v480 += 3200;
                v481 += 3200;
                v482 += 3200;
                v483 += 3200;
                v484 += 3200;
                v485 += 3200;
                v486 += 3200;
                v487 += 3200;
                v495 += 400;
                v496 += 400;
                v497 += 400;
                v498 += 400;
                v499 += 400;
                v500 += 400;
                v501 += 400;
                v502 += 400;
              }
              while ( v440 + 400 < v418 );
              v31 = v541;
              v550 = v263.m128d_f64[0];
              v551 = v271.m128d_f64[0];
              v552 = v270.m128d_f64[0];
              v553 = v269.m128d_f64[0];
              v554 = v268.m128d_f64[0];
              v555 = v267.m128d_f64[0];
              v556 = v266.m128d_f64[0];
              v557 = v265.m128d_f64[0];
              goto LABEL_90;
            }
            goto LABEL_107;
          }
        }
      }
    }
  }
  v25 = 0;
  ++*a9;
LABEL_11:
  *a7 = v527;
  *a8 = v528;
  return v25;
}

