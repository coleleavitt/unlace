__m128 *__fastcall sub_45CEA0(__m128 *a1, const double *a2, __int64 a3, __m128 a4)
{
  char **v4; // rbx
  char **v5; // rbx
  char **exception; // rbx
  char **v7; // rbx
  char **v8; // r15
  const double *v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // rdx
  unsigned int v19; // esi
  __m128 *v20; // r15
  unsigned int v21; // r14d
  size_t v22; // r12
  __m128 *v23; // r13
  int v24; // edi
  __int64 v25; // r14
  __m128 *v26; // r8
  __m128 *v27; // rax
  __m128 *v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  void *v31; // rdi
  __int64 v32; // r12
  int v33; // r15d
  __int64 v34; // rax
  char *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // r13
  __int64 v43; // rax
  unsigned __int64 v44; // r12
  _QWORD *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // r14
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // r15
  _QWORD *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rsi
  int v57; // eax
  __int64 *v58; // rsi
  unsigned int v59; // edx
  __int64 v60; // r13
  char *v61; // rax
  _QWORD *v62; // rdi
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // r15
  __int64 v67; // r8
  int v68; // r9d
  _QWORD *v69; // r13
  _QWORD *v70; // rax
  char v71; // r12
  __int64 v72; // r14
  __int64 v73; // rax
  __int64 *v74; // rcx
  int v75; // edi
  unsigned int v76; // edx
  __int64 *v77; // rsi
  __int64 v78; // rdx
  __int64 *v79; // r10
  __int64 *v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // rcx
  __int64 v83; // rax
  unsigned int v84; // edx
  __int64 v85; // r15
  int v86; // eax
  __int64 v87; // rax
  _QWORD *v88; // rcx
  _QWORD *v89; // rax
  unsigned int v90; // edx
  __int64 v91; // rsi
  int v92; // edx
  _QWORD *v93; // rsi
  unsigned int v94; // edx
  int v95; // r13d
  size_t v96; // r15
  __int64 *v97; // r12
  __int64 *v98; // rdx
  int v99; // esi
  __int64 v100; // r10
  __int64 *v101; // rdi
  __int64 *v102; // rax
  __int64 *v103; // r8
  __int64 *v104; // r11
  __int64 v105; // rdx
  __int64 *v106; // rax
  __int64 *i; // r11
  __int64 v108; // rax
  __int64 v109; // r15
  unsigned int v110; // edx
  char *v111; // rax
  __int64 *v112; // rdi
  unsigned __int64 v113; // rax
  __int64 v114; // r10
  __int64 v115; // rax
  unsigned __int64 v116; // rax
  __int64 v117; // r11
  unsigned int v118; // r11d
  size_t v119; // rsi
  unsigned int v120; // r15d
  unsigned int *v121; // rdx
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // r12
  __int64 v125; // rax
  __int64 v126; // rax
  int v127; // r9d
  __m128 *v128; // rdi
  __m128 *v129; // rdx
  __m128 *v130; // rax
  const __m128i *v131; // r14
  __m128i *v132; // r8
  __int64 v133; // rdx
  __m128 *v134; // rsi
  __m128 *v135; // rdx
  __m128 *v136; // rdx
  __int64 v137; // rax
  __int64 *v138; // rcx
  int v139; // edi
  unsigned int v140; // edx
  __int64 *v141; // rsi
  __int64 v142; // rdx
  __int64 *v143; // r8
  __int64 *v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v148; // rax
  __m128 *v149; // rax
  __m128i *v150; // r9
  int v151; // edi
  const __m128i *v152; // r8
  __m128i *v153; // r10
  __int64 v154; // rax
  __m128 *v155; // rdx
  int v156; // edi
  __m128i *v157; // rax
  int v158; // r15d
  char *v159; // rax
  __int64 *v160; // rdi
  unsigned __int64 v161; // rax
  __int64 v162; // rsi
  unsigned int v163; // r13d
  size_t v164; // rsi
  unsigned int *v165; // rax
  __int64 v166; // rsi
  __int64 v167; // rax
  __int64 v168; // r15
  __int64 v169; // r12
  int v170; // r13d
  __int64 v171; // r15
  int v172; // eax
  __int64 v173; // rax
  __int64 v174; // rsi
  int v175; // eax
  _QWORD *v176; // rdx
  unsigned int v177; // eax
  __int64 v178; // rcx
  int v179; // eax
  _QWORD *v180; // rcx
  __int64 v181; // rdi
  __int64 v182; // rax
  void *v183; // rcx
  _QWORD *v184; // rdx
  unsigned int v185; // eax
  __int64 v186; // rsi
  int v187; // eax
  _QWORD *v188; // rsi
  unsigned int v189; // edx
  __int64 v190; // r12
  int v191; // r10d
  size_t v192; // r15
  __int64 *v193; // r13
  int v194; // esi
  __int64 v195; // r10
  __int64 v196; // rdi
  __int64 *v197; // rax
  __int64 *v198; // r8
  __int64 v199; // rdx
  __int64 v200; // rax
  __int64 v201; // rax
  _QWORD *v202; // rdx
  unsigned __int64 v203; // rax
  unsigned int v204; // r12d
  size_t v205; // rsi
  unsigned int *v206; // rax
  __int64 v207; // rsi
  unsigned int v208; // r12d
  unsigned int v209; // ecx
  unsigned int *v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rax
  int v213; // r9d
  __m128 *v214; // rdx
  __m128 *v215; // rax
  const __m128i *v216; // r14
  __int64 v217; // rdx
  __m128i *v218; // r8
  __int64 v219; // rdx
  __m128 *v220; // rsi
  __m128 *v221; // rdx
  __m128 *v222; // rdx
  __int64 v223; // r14
  unsigned int *v224; // r12
  unsigned int *v225; // r15
  _QWORD *v226; // rdi
  unsigned __int64 v227; // rdx
  __int64 v228; // rdx
  _QWORD *v229; // rax
  _QWORD *v230; // rdx
  _QWORD *v231; // rdx
  const char *v232; // rdi
  int v233; // edx
  int v234; // ecx
  int v235; // r8d
  int v236; // r9d
  const char *v237; // rdi
  __int64 v238; // rax
  int v239; // ecx
  int v240; // r8d
  int v241; // r9d
  int v242; // ecx
  int v243; // r8d
  int v244; // r9d
  __int64 v245; // r14
  __int64 v246; // rax
  int v247; // eax
  _QWORD *v248; // rsi
  __int64 v249; // rax
  _QWORD *v250; // rax
  void *v251; // r13
  __int64 v252; // rdx
  __int64 v253; // rdx
  __int64 v254; // rax
  __int64 v255; // rsi
  void *v256; // r13
  _QWORD *v257; // rax
  unsigned __int64 v258; // rdx
  unsigned __int64 v259; // rax
  __int64 v260; // rsi
  unsigned int v261; // edi
  unsigned int v262; // edx
  unsigned int v263; // edi
  unsigned int v264; // edx
  __int64 v265; // rax
  _BYTE *v266; // r13
  _DWORD *v267; // r10
  __int64 v268; // rax
  _QWORD *v269; // rdx
  __int64 v270; // rdi
  _BYTE *v271; // rax
  _BYTE *v272; // rdi
  char v273; // cl
  char v274; // r8
  __int64 v275; // rcx
  char v276; // r8
  __int64 v277; // rcx
  __int64 v278; // rax
  _BYTE *v279; // rbx
  void *v280; // r13
  _BYTE *v281; // rsi
  __int64 v282; // rax
  int v283; // edx
  int v284; // ecx
  __int64 *v285; // r8
  int v286; // r9d
  __int64 v287; // rsi
  void **v288; // rdi
  bool v289; // zf
  __int64 v290; // r14
  _DWORD *v291; // rsi
  void **v292; // rdi
  void *v293; // r13
  void *v294; // r13
  void *v295; // r13
  __int64 v296; // r14
  __int64 v297; // rax
  __int64 v298; // r13
  void *v299; // r15
  __int64 v300; // rsi
  void *v301; // r12
  __int64 v302; // rsi
  void **v303; // rdi
  __int64 v304; // rdi
  __int64 v305; // r14
  _DWORD *v306; // rax
  _DWORD *v307; // r14
  void *v308; // r13
  int v309; // edx
  void *v310; // r13
  __int64 v311; // rdx
  char v312; // cl
  __int64 v313; // rax
  void *v314; // r13
  void *v315; // r13
  __int64 v316; // r13
  void *v317; // r14
  __int64 v318; // rsi
  void *v319; // rdi
  __int64 v320; // rax
  void *v321; // r13
  void *v322; // r13
  void *v323; // r13
  void *v324; // r13
  void *v325; // r13
  int v326; // edx
  void *v327; // r13
  __int64 v328; // rdx
  char v329; // cl
  __int64 v330; // rdx
  void *v331; // r13
  void *v332; // r13
  void *v333; // r13
  void *v334; // rdi
  int v335; // edx
  void *v336; // r15
  __int64 v337; // rdx
  char v338; // cl
  __int64 v339; // rdx
  _QWORD *v340; // rax
  void *v341; // r13
  _QWORD *v342; // r15
  int v343; // eax
  __int64 v344; // rax
  char *v345; // r15
  __m128 *v346; // r13
  _DWORD *v347; // rax
  __m128 *v348; // rbx
  const __m128i *v349; // rdi
  __m128i *v350; // r15
  __int64 v351; // rax
  __int64 v352; // r13
  const __m128i *v353; // rdi
  __m128i si128; // xmm0
  int v355; // eax
  __int64 v356; // rax
  __int64 *v357; // r13
  __int64 *v358; // r15
  char *v359; // rdi
  void *v360; // r13
  void *v361; // r13
  void *v362; // r13
  __m128i *v363; // r15
  __int64 v364; // rax
  __int64 v365; // r13
  const __m128i *v366; // rdi
  int v367; // [rsp-8h] [rbp-4C8h]
  struct _Unwind_Exception *v368; // [rsp+0h] [rbp-4C0h]
  void *v369; // [rsp+0h] [rbp-4C0h]
  char *v370; // [rsp+8h] [rbp-4B8h]
  int v371; // [rsp+10h] [rbp-4B0h]
  __m128i *v372; // [rsp+10h] [rbp-4B0h]
  __int64 *v373; // [rsp+18h] [rbp-4A8h]
  int *v374; // [rsp+20h] [rbp-4A0h]
  int *v375; // [rsp+28h] [rbp-498h]
  void **v376; // [rsp+30h] [rbp-490h]
  int *v377; // [rsp+30h] [rbp-490h]
  __int64 v378; // [rsp+38h] [rbp-488h]
  __m128 *v379; // [rsp+40h] [rbp-480h]
  _DWORD *v380; // [rsp+48h] [rbp-478h]
  __int64 v381; // [rsp+50h] [rbp-470h]
  _QWORD *v382; // [rsp+58h] [rbp-468h]
  _QWORD *v383; // [rsp+60h] [rbp-460h]
  _DWORD *v384; // [rsp+68h] [rbp-458h]
  const double *v385; // [rsp+68h] [rbp-458h]
  _QWORD *v386; // [rsp+70h] [rbp-450h]
  _QWORD *v387; // [rsp+78h] [rbp-448h]
  _DWORD *v388; // [rsp+78h] [rbp-448h]
  _QWORD *v389; // [rsp+80h] [rbp-440h]
  _QWORD *v390; // [rsp+80h] [rbp-440h]
  _DWORD *v391; // [rsp+80h] [rbp-440h]
  __int64 v392; // [rsp+88h] [rbp-438h]
  unsigned int v393; // [rsp+88h] [rbp-438h]
  __int64 v394; // [rsp+90h] [rbp-430h]
  _QWORD *v395; // [rsp+98h] [rbp-428h]
  __int64 v396; // [rsp+A0h] [rbp-420h]
  unsigned int *v397; // [rsp+A8h] [rbp-418h]
  _QWORD *v398; // [rsp+B0h] [rbp-410h]
  _QWORD *v399; // [rsp+B8h] [rbp-408h]
  __int64 v400; // [rsp+C0h] [rbp-400h]
  void *v401; // [rsp+C0h] [rbp-400h]
  int v402; // [rsp+C0h] [rbp-400h]
  __int64 v403; // [rsp+C0h] [rbp-400h]
  int v404; // [rsp+C8h] [rbp-3F8h]
  _QWORD *v405; // [rsp+C8h] [rbp-3F8h]
  int v406; // [rsp+C8h] [rbp-3F8h]
  _QWORD *v407; // [rsp+C8h] [rbp-3F8h]
  void *v408; // [rsp+C8h] [rbp-3F8h]
  int v409; // [rsp+C8h] [rbp-3F8h]
  void *v410; // [rsp+C8h] [rbp-3F8h]
  void *v411; // [rsp+C8h] [rbp-3F8h]
  int v412; // [rsp+C8h] [rbp-3F8h]
  int v413; // [rsp+C8h] [rbp-3F8h]
  int v414; // [rsp+C8h] [rbp-3F8h]
  int v415; // [rsp+C8h] [rbp-3F8h]
  void **v416; // [rsp+C8h] [rbp-3F8h]
  void *v417; // [rsp+C8h] [rbp-3F8h]
  __int64 *v418; // [rsp+C8h] [rbp-3F8h]
  __int64 *v419; // [rsp+C8h] [rbp-3F8h]
  int v420; // [rsp+C8h] [rbp-3F8h]
  __int64 v421; // [rsp+D0h] [rbp-3F0h]
  int v422; // [rsp+D0h] [rbp-3F0h]
  int v423; // [rsp+D8h] [rbp-3E8h]
  __int64 v424; // [rsp+D8h] [rbp-3E8h]
  int v425; // [rsp+D8h] [rbp-3E8h]
  _QWORD *v426; // [rsp+D8h] [rbp-3E8h]
  __m128 *v427; // [rsp+D8h] [rbp-3E8h]
  _QWORD *v428; // [rsp+D8h] [rbp-3E8h]
  _DWORD *v429; // [rsp+D8h] [rbp-3E8h]
  __int64 v430; // [rsp+D8h] [rbp-3E8h]
  _QWORD *v431; // [rsp+D8h] [rbp-3E8h]
  _BYTE *v432; // [rsp+D8h] [rbp-3E8h]
  __int64 v433; // [rsp+D8h] [rbp-3E8h]
  __int64 v434; // [rsp+D8h] [rbp-3E8h]
  __int64 v435; // [rsp+D8h] [rbp-3E8h]
  __int64 v436; // [rsp+D8h] [rbp-3E8h]
  __int64 v437; // [rsp+E8h] [rbp-3D8h] BYREF
  _BYTE v438[16]; // [rsp+F0h] [rbp-3D0h] BYREF
  int v439[4]; // [rsp+100h] [rbp-3C0h] BYREF
  __int64 v440; // [rsp+110h] [rbp-3B0h] BYREF
  _QWORD *v441; // [rsp+118h] [rbp-3A8h]
  _QWORD v442[2]; // [rsp+120h] [rbp-3A0h] BYREF
  _QWORD v443[2]; // [rsp+130h] [rbp-390h] BYREF
  _QWORD v444[2]; // [rsp+140h] [rbp-380h] BYREF
  _QWORD v445[2]; // [rsp+150h] [rbp-370h] BYREF
  __int64 v446; // [rsp+160h] [rbp-360h] BYREF
  __int64 v447; // [rsp+168h] [rbp-358h]
  __int64 v448; // [rsp+170h] [rbp-350h] BYREF
  __int64 v449; // [rsp+178h] [rbp-348h]
  int v450[4]; // [rsp+180h] [rbp-340h] BYREF
  int v451; // [rsp+190h] [rbp-330h] BYREF
  char v452; // [rsp+194h] [rbp-32Ch]
  __int64 v453; // [rsp+198h] [rbp-328h]
  _QWORD v454[4]; // [rsp+1A0h] [rbp-320h] BYREF
  void *v455; // [rsp+1C0h] [rbp-300h]
  void *v456; // [rsp+1D8h] [rbp-2E8h]
  void *v457; // [rsp+1F0h] [rbp-2D0h] BYREF
  int v458[2]; // [rsp+1F8h] [rbp-2C8h] BYREF
  __int64 v459; // [rsp+200h] [rbp-2C0h] BYREF
  char v460[16]; // [rsp+208h] [rbp-2B8h] BYREF
  __int64 v461; // [rsp+218h] [rbp-2A8h]
  void **v462; // [rsp+220h] [rbp-2A0h]
  char v463; // [rsp+228h] [rbp-298h]
  __int64 v464; // [rsp+230h] [rbp-290h] BYREF
  __int64 v465; // [rsp+238h] [rbp-288h]
  __int64 v466; // [rsp+240h] [rbp-280h] BYREF
  __int64 v467; // [rsp+248h] [rbp-278h]
  int v468[2]; // [rsp+250h] [rbp-270h]
  void *v469; // [rsp+260h] [rbp-260h]
  __int64 v470; // [rsp+268h] [rbp-258h]
  _QWORD v471[16]; // [rsp+270h] [rbp-250h] BYREF
  void *ptr; // [rsp+2F0h] [rbp-1D0h] BYREF
  int v473[2]; // [rsp+2F8h] [rbp-1C8h]
  _QWORD v474[16]; // [rsp+300h] [rbp-1C0h] BYREF
  void *v475; // [rsp+380h] [rbp-140h] BYREF
  int v476[2]; // [rsp+388h] [rbp-138h]
  __int64 v477; // [rsp+390h] [rbp-130h] BYREF
  __int64 v478; // [rsp+398h] [rbp-128h]
  __int64 v479; // [rsp+3A0h] [rbp-120h] BYREF
  __int64 v480; // [rsp+3A8h] [rbp-118h]

  v9 = a2;
  v378 = a3;
  v379 = a1;
  v399 = v454;
  sub_F8BB20(v454, a3, *(_QWORD *)a2);
  while ( (unsigned __int8)sub_F8BB00(v399) )
  {
    v421 = sub_F8BBA0(v399);
    v14 = *(_DWORD *)(v421 + 24);
    if ( (!v14
       || (v32 = *(_QWORD *)v9,
           v33 = v14 - 1,
           *(_QWORD *)(v32 + 848) != sub_15D1F10(*(_QWORD *)(v421 + 8LL * (unsigned int)(v14 - 1) + 32)))
       && !v33)
      && (v15 = *(_QWORD *)(*(_QWORD *)(v421 + 16) + 24LL)) != 0
      && *(_DWORD *)(v15 + 4) == 54
      && (v475 = nullptr, (v34 = *(_QWORD *)(v15 + 8)) != 0)
      && *(_DWORD *)(v34 - 4)
      && *(_BYTE *)(v34 + 8) == 2
      && (v35 = *(char **)v34, (v475 = v35) != nullptr) )
    {
      if ( ((unsigned __int8)v35 & 7) != 1 )
      {
        if ( !strcmp(v35, "arith") )
          goto LABEL_38;
        goto LABEL_6;
      }
      sub_180CE20(
        (int)&ptr,
        (int)&v475,
        v10,
        v11,
        v12,
        v13,
        (int)v368,
        v370,
        v371,
        (__int64)v373,
        (int)v374,
        (int)v375,
        (int)v376,
        v378,
        (int)v379,
        (int)v380,
        v381,
        (int)v382,
        (int)v383,
        (int)v384,
        (int)v386,
        (int)v387,
        (int)v389,
        v392,
        v394,
        (int)v395,
        v396,
        v397,
        (int)v398,
        (__int64)v399);
      if ( *(_QWORD *)v473 != 5 || *(_DWORD *)ptr != 1953067617 || *((_BYTE *)ptr + 4) != 104 )
      {
        if ( ptr != v474 )
          operator delete(ptr, v474[0] + 1LL);
        goto LABEL_6;
      }
      if ( ptr != v474 )
        operator delete(ptr, v474[0] + 1LL);
LABEL_38:
      v395 = v471;
      v39 = *(_QWORD *)(v421 + 8LL * (unsigned int)(*(_DWORD *)(v421 + 24) - 1) + 32);
      v469 = v471;
      v397 = (unsigned int *)v39;
      v470 = 0x1000000000LL;
      if ( *(_WORD *)(v39 + 4)
        || (v40 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL)) == nullptr
        || (LODWORD(v41) = *v40) != 0
        || v40[1] != 6 )
      {
        v42 = v471;
        LODWORD(v470) = 1;
        v471[0] = v397;
        v398 = v474;
        ptr = v474;
        *(_QWORD *)v473 = 0x1000000000LL;
        v43 = 1;
LABEL_42:
        v44 = 0;
        v400 = 8 * v43;
        while ( 1 )
        {
          v47 = v42[v44 / 8];
          v48 = *(_QWORD **)v9;
          if ( !*(_WORD *)(v47 + 4)
            && (v49 = *(_QWORD **)(*(_QWORD *)(v47 + 16) + 24LL)) != nullptr
            && *v49 == 0x800000000LL
            && *(_DWORD *)(v47 + 24) == 1 )
          {
            v201 = *(_QWORD *)(v47 + 32);
            v424 = v201;
            if ( v201 )
              ++*(_DWORD *)(v201 + 8);
            v51 = v48;
          }
          else
          {
            v50 = sub_15E1A70(*(_QWORD *)v9);
            v424 = v50;
            if ( v50 )
              ++*(_DWORD *)(v50 + 8);
            v51 = *(_QWORD **)v9;
          }
          v52 = sub_15DFBC0(v51, v424);
          v53 = v52;
          if ( v52 )
            ++*(_DWORD *)(v52 + 8);
          v54 = *((_QWORD **)v9 + 2);
          if ( v54 )
          {
            v55 = *((_DWORD *)v54 - 1);
            if ( v55 == *((_DWORD *)v54 - 2) )
            {
              v163 = (3 * v55 + 1) >> 1;
              v164 = 8 * v163 + 8;
              if ( 8 * v55 + 8 >= (unsigned int)v164 || v55 >= v163 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v475, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v475);
                sub_233E40((__int64)&v475);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v165 = (unsigned int *)sub_186B300(v54 - 1, v164);
              v166 = v165[1];
              v54 = v165 + 2;
              *v165 = v163;
              *((_QWORD *)v9 + 2) = v165 + 2;
              LODWORD(v165) = v166;
              v58 = &v54[v166];
              v57 = (_DWORD)v165 + 1;
            }
            else
            {
              v56 = v55;
              v57 = v55 + 1;
              v58 = &v54[v56];
            }
          }
          else
          {
            v202 = (_QWORD *)sub_186B270(0x18u);
            *v202 = 2;
            v57 = 1;
            v54 = v202 + 1;
            *((_QWORD *)v9 + 2) = v54;
            v58 = v54;
          }
          *v58 = v53;
          *((_DWORD *)v54 - 1) = v57;
          v59 = v473[0];
          if ( v473[0] < (unsigned int)v473[1] )
          {
            v45 = ptr;
          }
          else
          {
            v60 = (unsigned int)(2 * v473[1]);
            v61 = (char *)sub_186B270(8 * v60);
            v59 = v473[0];
            v62 = ptr;
            v45 = v61;
            if ( v473[0] )
            {
              if ( (unsigned int)(v473[0] - 1) <= 2 || v61 == (char *)ptr + 8 )
              {
                v203 = 0;
                v38 = 8LL * (unsigned int)v473[0];
                do
                {
                  v41 = v62[v203 / 8];
                  v45[v203 / 8] = v41;
                  v203 += 8LL;
                }
                while ( v38 != v203 );
              }
              else
              {
                LODWORD(v41) = v424;
                v63 = 0;
                v37 = 16LL * ((unsigned int)v473[0] >> 1);
                do
                {
                  a4 = (__m128)_mm_loadu_si128((const __m128i *)&v62[v63 / 8]);
                  *(__m128 *)&v45[v63 / 8] = a4;
                  v63 += 16LL;
                }
                while ( v63 != v37 );
                if ( (v59 & 1) != 0 )
                {
                  v64 = v59 & 0xFFFFFFFE;
                  v37 = v62[v64];
                  v45[v64] = v37;
                }
              }
            }
            if ( v62 != v474 && v62 )
            {
              sub_186B220(v62);
              v59 = v473[0];
            }
            ptr = v45;
            v473[1] = v60;
          }
          v46 = v59;
          LODWORD(v36) = v59 + 1;
          v45[v46] = v53;
          v473[0] = v36;
          if ( v424 && (v404 = *(_DWORD *)(v424 + 8), *(_DWORD *)(v424 + 8) = v404 - 1, v404 == 1) )
          {
            v44 += 8LL;
            sub_15D7BC0(v48, v424);
            if ( v44 == v400 )
              goto LABEL_233;
          }
          else
          {
            v44 += 8LL;
            if ( v44 == v400 )
              goto LABEL_233;
          }
          v42 = v469;
        }
      }
      v43 = v397[6];
      if ( (_DWORD)v43 )
      {
        v42 = v471;
        LODWORD(v223) = 16;
        v224 = &v397[2 * v43];
        v225 = v397;
        LODWORD(v43) = 0;
        do
        {
          v430 = *((_QWORD *)v225 + 4);
          if ( (unsigned int)v43 >= (unsigned int)v223 )
          {
            v223 = (unsigned int)(2 * v223);
            v42 = (_QWORD *)sub_186B270(8 * v223);
            LODWORD(v43) = v470;
            v226 = v469;
            if ( (_DWORD)v470 )
            {
              if ( (unsigned int)(v470 - 1) <= 2 || v42 == (_QWORD *)((char *)v469 + 8) )
              {
                v258 = 0;
                v41 = 8LL * (unsigned int)v470;
                do
                {
                  v42[v258 / 8] = v226[v258 / 8];
                  v258 += 8LL;
                }
                while ( v258 != v41 );
              }
              else
              {
                v227 = 0;
                v41 = 16LL * ((unsigned int)v470 >> 1);
                do
                {
                  a4 = (__m128)_mm_loadu_si128((const __m128i *)&v226[v227 / 8]);
                  *(__m128 *)&v42[v227 / 8] = a4;
                  v227 += 16LL;
                }
                while ( v41 != v227 );
                if ( (v43 & 1) != 0 )
                {
                  v228 = (unsigned int)v43 & 0xFFFFFFFE;
                  v41 = v226[v228];
                  v42[v228] = v41;
                }
              }
            }
            if ( v226 != v471 && v226 )
            {
              sub_186B220(v226);
              LODWORD(v43) = v470;
            }
            v469 = v42;
            HIDWORD(v470) = v223;
          }
          v36 = (unsigned int)v43;
          v225 += 2;
          v43 = (unsigned int)(v43 + 1);
          v42[v36] = v430;
          LODWORD(v470) = v43;
        }
        while ( v224 != v225 );
        v398 = v474;
        ptr = v474;
        *(_QWORD *)v473 = 0x1000000000LL;
        if ( (_DWORD)v43 )
          goto LABEL_42;
      }
      else
      {
        v398 = v474;
        ptr = v474;
        *(_QWORD *)v473 = 0x1000000000LL;
      }
LABEL_233:
      v383 = *(_QWORD **)v9;
      v396 = *(_QWORD *)(v421 + 16);
      v167 = *(_QWORD *)(v396 + 24);
      v168 = v167;
      if ( !v167 )
        goto LABEL_644;
      v169 = *(_QWORD *)(v167 + 8);
      if ( *(_DWORD *)(v167 + 4) == 54 )
      {
        *(_QWORD *)v450 = 0;
        if ( !v169 )
          goto LABEL_644;
        if ( *(_DWORD *)(v169 - 4) <= 1u )
          goto LABEL_293;
        if ( *(_BYTE *)(v169 + 8) != 2 )
          goto LABEL_293;
        v232 = *(const char **)v169;
        *(_QWORD *)v450 = v232;
        if ( !v232 )
          goto LABEL_293;
        if ( ((unsigned __int8)v232 & 7) != 1 )
        {
          if ( !strcmp(v232, "arith") && *(_BYTE *)(v169 + 24) == 2 )
            goto LABEL_359;
          goto LABEL_293;
        }
        sub_180CE20(
          (int)&v457,
          (int)v450,
          v36,
          v41,
          v37,
          v38,
          (int)v368,
          v370,
          v371,
          (__int64)v373,
          (int)v374,
          (int)v375,
          (int)v376,
          v378,
          (int)v379,
          (int)v380,
          v381,
          (int)v382,
          (int)v383,
          (int)v384,
          (int)v386,
          (int)v387,
          (int)v389,
          v392,
          v394,
          (int)v471,
          v396,
          v397,
          (int)v474,
          (__int64)v399);
        v319 = v457;
        if ( *(_QWORD *)v458 == 5 && *(_DWORD *)v457 == 1953067617 && *((_BYTE *)v457 + 4) == 104 )
        {
          if ( v457 != &v459 )
            operator delete(v457, v459 + 1);
          v169 = *(_QWORD *)(*(_QWORD *)(v396 + 24) + 8LL);
          v168 = *(_QWORD *)(v396 + 24);
          if ( *(_BYTE *)(v169 + 24) != 2 )
            goto LABEL_293;
LABEL_359:
          v237 = *(const char **)(v169 + 16);
          *(_QWORD *)v450 = v237;
          if ( !v237 )
          {
LABEL_293:
            v169 = *(_QWORD *)(v168 + 8);
            goto LABEL_235;
          }
          if ( ((unsigned __int8)v237 & 7) != 1 )
          {
            if ( strcmp(v237, "assign-bounds") )
              goto LABEL_293;
LABEL_362:
            v238 = *(_QWORD *)(v168 + 8);
            v394 = v238;
            if ( v238 )
            {
              LODWORD(v380) = v473[0] + 1;
              if ( *(_DWORD *)(v238 - 4) != v473[0] + 1 )
                goto LABEL_293;
LABEL_364:
              v376 = (void **)v438;
              v386 = *(_QWORD **)v9;
              sub_16669D0(v438, *(_QWORD *)v9);
              v475 = nullptr;
              v375 = v439;
              sub_14B7810((int)v439, (int)v386, (int)&v475, v239, v240, v241, v368);
              sub_18572D0(&v475);
              v457 = v386;
              v475 = nullptr;
              v374 = v458;
              sub_14B7810((int)v458, (int)v386, (int)&v475, v242, v243, v244, v369);
              sub_18572D0(&v475);
              sub_16669D0(v460, v386);
              v461 = 0;
              v462 = (void **)v386;
              v463 = 0;
              v464 = 1;
              v465 = 0;
              v466 = 1;
              v467 = 0;
              v373 = &v466;
              sub_182CBA0(qword_1C7F2C0, &v466);
              BYTE4(v466) &= ~1u;
              v245 = 8;
              LODWORD(v466) = 1;
              *(_QWORD *)v468 = 0;
              v403 = 8LL * (unsigned int)v473[0];
              if ( v473[0] <= 1u )
              {
LABEL_405:
                v282 = *(_QWORD *)(*(_QWORD *)ptr + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)ptr + 24LL) - 1) + 32);
                v381 = v282;
                if ( v282 )
                  ++*(_DWORD *)(v282 + 8);
                v440 = 0;
                v441 = v386;
                sub_45AB00((__int64 *)&v475, v282, &v440);
                v287 = v461;
                v288 = v462;
                v384 = v475;
                if ( v461 )
                {
LABEL_408:
                  v289 = (*(_DWORD *)(v287 + 8))-- == 1;
                  v290 = *(_QWORD *)v468;
                  if ( !v289 )
                  {
LABEL_409:
                    v461 = 0;
                    if ( v290 )
                    {
                      v433 = v290 + 48LL * *(unsigned int *)(v290 - 4);
                      if ( v290 != v433 )
                      {
                        while ( (unsigned __int8)sub_462CA0(
                                                   (int)&v457,
                                                   v290,
                                                   v283,
                                                   v284,
                                                   (int)v285,
                                                   v286,
                                                   v368,
                                                   (int)v370,
                                                   v371,
                                                   (int)v373,
                                                   (__int64)v374,
                                                   (int)v375,
                                                   (int)v376,
                                                   v378,
                                                   (int)v379,
                                                   (char)v380) )
                        {
                          v290 += 48;
                          if ( v433 == v290 )
                          {
                            v305 = v461;
                            v416 = v462;
                            if ( !v461 )
                              break;
                            ++*(_DWORD *)(v461 + 8);
                            v291 = (_DWORD *)v305;
                            v292 = &v475;
                            sub_45AB00((__int64 *)&v475, v305, &v440);
                            v392 = v440;
                            v389 = v441;
                            v306 = v475;
                            v289 = (*(_DWORD *)(v305 + 8))-- == 1;
                            v429 = v306;
                            if ( v289 )
                            {
                              v292 = v416;
                              v291 = (_DWORD *)v305;
                              sub_15D7BC0(v416, v305);
                            }
                            goto LABEL_415;
                          }
                        }
                      }
                    }
                    v291 = nullptr;
                    v292 = &v475;
                    sub_45AB00((__int64 *)&v475, 0, &v440);
                    v392 = v440;
                    v389 = v441;
                    v429 = v475;
LABEL_415:
                    v442[0] = 0;
                    v442[1] = 0;
                    v443[0] = 1;
                    v443[1] = 0;
                    v444[0] = 0;
                    v444[1] = 0;
                    v445[0] = 1;
                    v445[1] = 0;
                    v446 = 0;
                    v447 = 0;
                    v448 = 1;
                    v449 = 0;
                    if ( v384 && v429 )
                    {
                      v291 = v384;
                      v382 = v442;
                      v292 = (void **)v444;
                      v387 = v444;
                      if ( (unsigned __int8)sub_1666AE0(v376, v384, v442, &v475) )
                      {
                        v291 = v429;
                        v292 = v376;
                        if ( (unsigned __int8)sub_1666AE0(v376, v429, v444, v450) )
                        {
                          v475 = nullptr;
                          v321 = qword_1C7F2C0;
                          *(_QWORD *)v476 = 0;
                          v477 = 1;
                          v478 = 0;
                          if ( (v444[0] & 0x100000000LL) != 0 )
                            sub_182C690(qword_1C7F2C0, &v475, v444);
                          else
                            LODWORD(v475) = v444[0];
                          if ( (v445[0] & 0x100000000LL) != 0 )
                          {
                            sub_182C690(v321, &v477, v445);
                          }
                          else
                          {
                            BYTE4(v477) &= ~1u;
                            LODWORD(v477) = v445[0];
                          }
                          v322 = qword_1C7F2C0;
                          if ( (_DWORD)v475
                            && ((v442[0] & 0x100000000LL) != 0
                             || LODWORD(v442[0]) != 1
                             || (v443[0] & 0x100000000LL) != 0
                             || LODWORD(v443[0]) != 1) )
                          {
                            sub_1831650(qword_1C7F2C0, &v475, v443);
                            sub_1831650(v322, &v477, v442);
                            if ( (int)v477 < 0 )
                            {
                              sub_1831620(v322, &v475);
                              sub_1831620(v322, &v477);
                            }
                            memset(v450, 0, sizeof(v450));
                            sub_1832C70(v322, &v475, &v477, v450);
                            if ( (v450[1] & 1) != 0 || v450[0] != 1 )
                            {
                              sub_1833EB0(v322, &v475, v450, &v475);
                              sub_1833EB0(v322, &v477, v450, &v477);
                            }
                            sub_182CBA0(v322, v450);
                          }
                          else
                          {
                            if ( (BYTE4(v475) & 1) != 0 )
                              sub_182C690(qword_1C7F2C0, &v475, &v475);
                            else
                              BYTE4(v475) &= ~1u;
                            if ( (v477 & 0x100000000LL) != 0 )
                              sub_182C690(v322, &v477, &v477);
                            else
                              BYTE4(v477) &= ~1u;
                          }
                          LOBYTE(v450[1]) &= 0xFCu;
                          v323 = qword_1C7F2C0;
                          v452 &= 0xFCu;
                          v450[0] = 0;
                          *(_QWORD *)&v450[2] = 0;
                          v451 = 1;
                          v453 = 0;
                          if ( (BYTE4(v475) & 1) != 0 )
                            sub_182C690(qword_1C7F2C0, v450, &v475);
                          else
                            v450[0] = (int)v475;
                          if ( (v477 & 0x100000000LL) != 0 )
                          {
                            sub_182C690(v323, &v451, &v477);
                          }
                          else
                          {
                            v452 &= ~1u;
                            v451 = v477;
                          }
                          v324 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, &v475);
                          sub_182CBA0(v324, &v477);
                          BYTE4(v475) &= 0xFCu;
                          v325 = qword_1C7F2C0;
                          BYTE4(v477) &= 0xFCu;
                          LODWORD(v475) = 0;
                          *(_QWORD *)v476 = 0;
                          LODWORD(v477) = 1;
                          v478 = 0;
                          if ( (v450[1] & 1) != 0 )
                            sub_182C690(qword_1C7F2C0, &v475, v450);
                          else
                            LODWORD(v475) = v450[0];
                          if ( (v452 & 1) != 0 )
                          {
                            sub_182C690(v325, &v477, &v451);
                          }
                          else
                          {
                            BYTE4(v477) &= ~1u;
                            LODWORD(v477) = v451;
                          }
                          sub_1831690(qword_1C7F2C0, &v475);
                          v326 = (int)v475;
                          v327 = qword_1C7F2C0;
                          LODWORD(v475) = v446;
                          LODWORD(v446) = v326;
                          v328 = *(_QWORD *)v476;
                          *(_QWORD *)v476 = v447;
                          v447 = v328;
                          v329 = BYTE4(v475) & 1;
                          LOBYTE(v328) = BYTE4(v446) & 0xFC | BYTE4(v475) & 2;
                          BYTE4(v475) = BYTE4(v446) & 1 | BYTE4(v475) & 0xFC | BYTE4(v446) & 2;
                          BYTE4(v446) = v329 | v328;
                          LODWORD(v328) = v477;
                          LODWORD(v477) = v448;
                          LODWORD(v448) = v328;
                          v330 = v478;
                          v478 = v449;
                          v449 = v330;
                          LOBYTE(v330) = BYTE4(v477) & 1 | BYTE4(v448) & 0xFC | BYTE4(v477) & 2;
                          BYTE4(v477) = BYTE4(v448) & 1 | BYTE4(v477) & 0xFC | BYTE4(v448) & 2;
                          BYTE4(v448) = v330;
                          sub_182CBA0(qword_1C7F2C0, &v475);
                          sub_182CBA0(v327, &v477);
                          v331 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, v450);
                          v377 = &v451;
                          sub_182CBA0(v331, &v451);
                          v332 = qword_1C7F2C0;
                          v475 = nullptr;
                          *(_QWORD *)v476 = 0;
                          v477 = 1;
                          v478 = 0;
                          if ( (v446 & 0x100000000LL) != 0 )
                            sub_182C690(qword_1C7F2C0, &v475, &v446);
                          else
                            LODWORD(v475) = v446;
                          if ( (v448 & 0x100000000LL) != 0 )
                          {
                            sub_182C690(v332, &v477, &v448);
                          }
                          else
                          {
                            BYTE4(v477) &= ~1u;
                            LODWORD(v477) = v448;
                          }
                          v333 = qword_1C7F2C0;
                          if ( (_DWORD)v475
                            && ((v464 & 0x100000000LL) != 0
                             || (_DWORD)v464 != 1
                             || (v466 & 0x100000000LL) != 0
                             || (_DWORD)v466 != 1) )
                          {
                            sub_1831650(qword_1C7F2C0, &v475, v373);
                            sub_1831650(v333, &v477, &v464);
                            if ( (int)v477 < 0 )
                            {
                              sub_1831620(v333, &v475);
                              sub_1831620(v333, &v477);
                            }
                            memset(v450, 0, sizeof(v450));
                            sub_1832C70(v333, &v475, &v477, v450);
                            if ( (v450[1] & 1) != 0 || v450[0] != 1 )
                            {
                              sub_1833EB0(v333, &v475, v450, &v475);
                              sub_1833EB0(v333, &v477, v450, &v477);
                            }
                            sub_182CBA0(v333, v450);
                          }
                          else
                          {
                            if ( (BYTE4(v475) & 1) != 0 )
                              sub_182C690(qword_1C7F2C0, &v475, &v475);
                            else
                              BYTE4(v475) &= ~1u;
                            if ( (v477 & 0x100000000LL) != 0 )
                              sub_182C690(v333, &v477, &v477);
                            else
                              BYTE4(v477) &= ~1u;
                          }
                          LOBYTE(v450[1]) &= 0xFCu;
                          v334 = qword_1C7F2C0;
                          v452 &= 0xFCu;
                          v450[0] = 0;
                          *(_QWORD *)&v450[2] = 0;
                          v451 = 1;
                          v453 = 0;
                          if ( (BYTE4(v475) & 1) != 0 )
                            sub_182C690(qword_1C7F2C0, v450, &v475);
                          else
                            v450[0] = (int)v475;
                          if ( (v477 & 0x100000000LL) != 0 )
                          {
                            sub_182C690(v334, &v451, &v477);
                          }
                          else
                          {
                            v452 &= ~1u;
                            v451 = v477;
                          }
                          v372 = (__m128i *)qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, &v475);
                          sub_182CBA0(v372, &v477);
                          v335 = v450[0];
                          v336 = qword_1C7F2C0;
                          v450[0] = v446;
                          LODWORD(v446) = v335;
                          v337 = *(_QWORD *)&v450[2];
                          *(_QWORD *)&v450[2] = v447;
                          v447 = v337;
                          v338 = v450[1] & 1;
                          LOBYTE(v337) = BYTE4(v446) & 0xFC | v450[1] & 2;
                          LOBYTE(v450[1]) = BYTE4(v446) & 1 | v450[1] & 0xFC | BYTE4(v446) & 2;
                          BYTE4(v446) = v338 | v337;
                          LODWORD(v337) = v451;
                          v451 = v448;
                          LODWORD(v448) = v337;
                          v339 = v453;
                          v453 = v449;
                          v449 = v339;
                          LOBYTE(v339) = v452 & 1 | BYTE4(v448) & 0xFC | v452 & 2;
                          v452 = BYTE4(v448) & 1 | v452 & 0xFC | BYTE4(v448) & 2;
                          BYTE4(v448) = v339;
                          sub_182CBA0(qword_1C7F2C0, v450);
                          sub_182CBA0(v336, &v451);
                          v475 = &v477;
                          *(_QWORD *)v476 = 0x1000000000LL;
                          sub_180C5A0(&v437, "farkas");
                          LOBYTE(v450[2]) = 2;
                          *(_QWORD *)v450 = v437;
                          if ( v476[0] < (unsigned int)v476[1] )
                          {
                            *((__m128i *)v475 + (unsigned int)v476[0]) = _mm_load_si128((const __m128i *)v450);
                            goto LABEL_528;
                          }
                          LODWORD(v377) = 2 * v476[1];
                          v372 = (__m128i *)sub_186B270(16LL * (unsigned int)(2 * v476[1]));
                          v350 = v372;
                          v351 = (unsigned int)v476[0];
                          if ( v476[0] )
                          {
                            v352 = 0;
                            do
                            {
                              v353 = (const __m128i *)((char *)v475 + 16 * v352);
                              v289 = v353->m128i_i8[8] == 0;
                              *v350 = _mm_loadu_si128(v353);
                              v353->m128i_i32[0] = 0;
                              if ( !v289 )
                                v353->m128i_i8[8] = 0;
                              sub_15D0DF0(v353);
                              v351 = (unsigned int)v476[0];
                              ++v352;
                              ++v350;
                            }
                            while ( (unsigned int)v352 < v476[0] );
                          }
                          if ( v475 != &v477 && v475 )
                          {
                            sub_186B220(v475);
                            v351 = (unsigned int)v476[0];
                          }
                          si128 = _mm_load_si128((const __m128i *)v450);
                          v289 = LOBYTE(v450[2]) == 0;
                          v475 = v372;
                          v476[1] = (int)v377;
                          v372[v351] = si128;
                          if ( v289 )
                          {
                            v450[0] = 0;
                          }
                          else
                          {
LABEL_528:
                            v450[0] = 0;
                            LOBYTE(v450[2]) = 0;
                          }
                          ++v476[0];
                          sub_15D0DF0(v450);
                          v340 = (_QWORD *)sub_186B270(0x20u);
                          *v340 = 0;
                          v341 = qword_1C7F2C0;
                          v342 = v340;
                          v340[1] = 0;
                          v340[2] = 1;
                          v340[3] = 0;
                          if ( (v446 & 0x100000000LL) != 0 )
                            sub_182C690(v341, v340, &v446);
                          else
                            *(_DWORD *)v340 = v446;
                          if ( (v448 & 0x100000000LL) != 0 )
                          {
                            sub_182C690(v341, v342 + 2, &v448);
                          }
                          else
                          {
                            v343 = v448;
                            *((_BYTE *)v342 + 20) &= ~1u;
                            *((_DWORD *)v342 + 4) = v343;
                          }
                          *(_QWORD *)v450 = v342;
                          LOBYTE(v450[2]) = 4;
                          if ( v476[0] < (unsigned int)v476[1] )
                          {
                            a4 = (__m128)_mm_load_si128((const __m128i *)v450);
                            *((__m128 *)v475 + (unsigned int)v476[0]) = a4;
                            goto LABEL_535;
                          }
                          LODWORD(v377) = 2 * v476[1];
                          v372 = (__m128i *)sub_186B270(16LL * (unsigned int)(2 * v476[1]));
                          v363 = v372;
                          v364 = (unsigned int)v476[0];
                          if ( v476[0] )
                          {
                            v365 = 0;
                            do
                            {
                              v366 = (const __m128i *)((char *)v475 + 16 * v365);
                              v289 = v366->m128i_i8[8] == 0;
                              *v363 = _mm_loadu_si128(v366);
                              v366->m128i_i32[0] = 0;
                              if ( !v289 )
                                v366->m128i_i8[8] = 0;
                              sub_15D0DF0(v366);
                              v364 = (unsigned int)v476[0];
                              ++v365;
                              ++v363;
                            }
                            while ( (unsigned int)v365 < v476[0] );
                          }
                          if ( v475 != &v477 && v475 )
                          {
                            sub_186B220(v475);
                            v364 = (unsigned int)v476[0];
                          }
                          a4 = (__m128)_mm_load_si128((const __m128i *)v450);
                          v289 = LOBYTE(v450[2]) == 0;
                          v475 = v372;
                          v476[1] = (int)v377;
                          v372[v364] = (__m128i)a4;
                          if ( v289 )
                          {
                            v450[0] = 0;
                          }
                          else
                          {
LABEL_535:
                            v450[0] = 0;
                            LOBYTE(v450[2]) = 0;
                          }
                          ++v476[0];
                          sub_15D0DF0(v450);
                          if ( (unsigned int)v380 > 2 )
                          {
                            v344 = (unsigned int)v476[0];
                            v345 = (char *)(v394 + 32);
                            v370 = (char *)(v394 + 16LL * (unsigned int)((_DWORD)v380 - 3) + 48);
                            do
                            {
                              if ( (unsigned int)v344 < v476[1] )
                              {
                                v346 = (__m128 *)v475;
                              }
                              else
                              {
                                LODWORD(v372) = 2 * v476[1];
                                v346 = (__m128 *)sub_186B270(16LL * (unsigned int)(2 * v476[1]));
                                v344 = (unsigned int)v476[0];
                                if ( v476[0] )
                                {
                                  v347 = v429;
                                  v377 = (int *)v9;
                                  v348 = v346;
                                  v436 = 0;
                                  v380 = v347;
                                  do
                                  {
                                    v349 = (const __m128i *)((char *)v475 + 16 * v436);
                                    a4 = (__m128)_mm_loadu_si128(v349);
                                    v289 = v349->m128i_i8[8] == 0;
                                    *v348 = a4;
                                    v349->m128i_i32[0] = 0;
                                    if ( !v289 )
                                      v349->m128i_i8[8] = 0;
                                    sub_15D0DF0(v349);
                                    v344 = (unsigned int)v476[0];
                                    ++v348;
                                    ++v436;
                                  }
                                  while ( (unsigned int)v436 < v476[0] );
                                  v429 = v380;
                                  v9 = (const double *)v377;
                                }
                                if ( v475 != &v477 && v475 )
                                {
                                  sub_186B220(v475);
                                  v344 = (unsigned int)v476[0];
                                }
                                v475 = v346;
                                v476[1] = (int)v372;
                              }
                              sub_15D0E50(&v346[v344], v345);
                              v345 += 16;
                              v344 = (unsigned int)++v476[0];
                            }
                            while ( v345 != v370 );
                          }
                          if ( *(_BYTE *)(v394 + 8) != 2 )
                            sub_A8ADA((__int64)"std::get: wrong index for variant");
                          *(_QWORD *)v450 = *(_QWORD *)v394;
                          v355 = sub_15DA4C0(v386 + 70, v450);
                          v356 = sub_15E0A80(
                                   (int)v386,
                                   v355,
                                   v386[108],
                                   v473[0],
                                   (int)ptr,
                                   v476[0],
                                   (__int64)v475,
                                   v367,
                                   (int)v368,
                                   (int)v370,
                                   (int)v372,
                                   (int)v373,
                                   (__int64)v374,
                                   (__int64)v375,
                                   (char)v377,
                                   v378,
                                   (int)v379,
                                   v380);
                          v307 = (_DWORD *)v356;
                          if ( v356 )
                            ++*(_DWORD *)(v356 + 8);
                          v357 = (__int64 *)v475;
                          v358 = (__int64 *)((char *)v475 + 16 * (unsigned int)v476[0]);
                          if ( v475 != v358 )
                          {
                            do
                            {
                              v359 = (char *)v357;
                              v357 += 2;
                              sub_15D0DF0(v359);
                            }
                            while ( v358 != v357 );
                            v358 = (__int64 *)v475;
                          }
                          if ( v358 != &v477 && v358 )
                            sub_186B220(v358);
                          v360 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, &v446);
                          sub_182CBA0(v360, &v448);
                          v361 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, v444);
                          sub_182CBA0(v361, v445);
                          v362 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, v442);
                          sub_182CBA0(v362, v443);
                          v420 = v429[2];
                          v429[2] = v420 - 1;
                          if ( v420 != 1 )
                          {
                            v429 = v307;
                            goto LABEL_423;
                          }
LABEL_452:
                          sub_15D7BC0(v386, v429);
                          v429 = v307;
                          goto LABEL_422;
                        }
                      }
                    }
                    else
                    {
                      v382 = v442;
                      v387 = v444;
                    }
                    if ( (unsigned int)sub_180B130(v292) )
                    {
                      if ( (unsigned __int8)sub_186A530(*(double *)a4.m128_u64) )
                      {
                        sub_186A4C0(*(double *)a4.m128_u64);
                        v304 = sub_180B150(v292, v291);
                        std::__ostream_insert<char,std::char_traits<char>>();
                        sub_186A500(v304, "\n\n\nFAILED TO FIND COEFFICIENT\n\n\n");
                      }
                      else
                      {
                        sub_180B150(v292, v291);
                        std::__ostream_insert<char,std::char_traits<char>>();
                      }
                    }
                    v293 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, &v446);
                    sub_182CBA0(v293, &v448);
                    v294 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v444);
                    sub_182CBA0(v294, v445);
                    v295 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v442);
                    sub_182CBA0(v295, v443);
                    if ( v429 )
                    {
                      v412 = v429[2];
                      v429[2] = v412 - 1;
                      if ( v412 == 1 )
                      {
                        v307 = nullptr;
                        goto LABEL_452;
                      }
                      v429 = nullptr;
                    }
LABEL_422:
                    if ( v384 )
                    {
LABEL_423:
                      v413 = v384[2];
                      v384[2] = v413 - 1;
                      if ( v413 == 1 )
                        sub_15D7BC0(v386, v384);
                    }
                    if ( v392 )
                    {
                      v414 = *(_DWORD *)(v392 + 8);
                      *(_DWORD *)(v392 + 8) = v414 - 1;
                      if ( v414 == 1 )
                        sub_15D7BC0(v389, v392);
                    }
                    if ( v381 )
                    {
                      v415 = *(_DWORD *)(v381 + 8);
                      *(_DWORD *)(v381 + 8) = v415 - 1;
                      if ( v415 == 1 )
                        sub_15D7BC0(v386, v381);
                    }
                    v296 = *(_QWORD *)v468;
                    if ( *(_QWORD *)v468 )
                    {
                      v297 = *(unsigned int *)(*(_QWORD *)v468 - 4LL);
                      if ( (_DWORD)v297 )
                      {
                        v298 = *(_QWORD *)v468 + 48 * v297;
                        do
                        {
                          v299 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, v296 + 16);
                          v300 = v296 + 32;
                          v296 += 48;
                          sub_182CBA0(v299, v300);
                        }
                        while ( v298 != v296 );
                        v296 = *(_QWORD *)v468;
                      }
                      sub_186B220((void *)(v296 - 8));
                    }
                    v301 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, &v464);
                    sub_182CBA0(v301, v373);
                    v302 = v461;
                    if ( v461 )
                    {
                      v303 = v462;
                      v289 = (*(_DWORD *)(v461 + 8))-- == 1;
                      if ( v289 )
                        sub_15D7BC0(v303, v302);
                    }
                    sub_14B63F0(v374);
                    sub_14B63F0(v375);
                    if ( v429 )
                    {
                      v175 = v429[2];
                      goto LABEL_239;
                    }
LABEL_625:
                    v168 = *(_QWORD *)(v396 + 24);
LABEL_485:
                    if ( v168 )
                      goto LABEL_293;
LABEL_644:
                    BUG();
                  }
                  sub_15D7BC0(v288, v287);
LABEL_455:
                  v290 = *(_QWORD *)v468;
                  goto LABEL_409;
                }
                v290 = *(_QWORD *)v468;
                if ( *(_QWORD *)v468 )
                {
                  v417 = (void *)(*(_QWORD *)v468 + 48LL * *(unsigned int *)(*(_QWORD *)v468 - 4LL));
                  if ( v417 == *(void **)v468 )
                  {
                    if ( (v464 & 0x100000000LL) != 0 )
                      goto LABEL_479;
                    if ( (_DWORD)v464 != 1 )
                    {
                      v316 = *(_QWORD *)v468 + 48LL * *(unsigned int *)(*(_QWORD *)v468 - 4LL);
                      goto LABEL_466;
                    }
                  }
                  else
                  {
                    v434 = *(_QWORD *)v468;
                    do
                    {
                      v315 = qword_1C7F2C0;
                      v450[0] = 0;
                      LOBYTE(v450[1]) &= 0xFCu;
                      v452 &= 0xFCu;
                      *(_QWORD *)&v450[2] = 0;
                      v451 = 1;
                      v453 = 0;
                      if ( (*(_BYTE *)(v434 + 36) & 1) != 0 )
                        sub_182C690(qword_1C7F2C0, v450, v434 + 32);
                      else
                        v450[0] = *(_DWORD *)(v434 + 32);
                      sub_182CBA0(v315, &v451);
                      v308 = qword_1C7F2C0;
                      v452 &= ~1u;
                      BYTE4(v475) &= 0xFCu;
                      BYTE4(v477) &= 0xFCu;
                      v451 = 1;
                      LODWORD(v475) = 0;
                      *(_QWORD *)v476 = 0;
                      LODWORD(v477) = 1;
                      v478 = 0;
                      sub_1836B00(qword_1C7F2C0, &v464, v450, &v475);
                      sub_182CBA0(v308, &v477);
                      v309 = (int)v475;
                      v310 = qword_1C7F2C0;
                      LODWORD(v475) = v464;
                      LODWORD(v464) = v309;
                      v311 = *(_QWORD *)v476;
                      *(_QWORD *)v476 = v465;
                      v465 = v311;
                      v312 = BYTE4(v475) & 1;
                      LOBYTE(v311) = BYTE4(v464) & 0xFC | BYTE4(v475) & 2;
                      BYTE4(v475) = BYTE4(v464) & 1 | BYTE4(v475) & 0xFC | BYTE4(v464) & 2;
                      BYTE4(v464) = v312 | v311;
                      LODWORD(v477) = v466;
                      v313 = v467;
                      v467 = v478;
                      v478 = v313;
                      LODWORD(v466) = 1;
                      LOBYTE(v311) = BYTE4(v466) & 0xFC | BYTE4(v477) & 2;
                      BYTE4(v477) = BYTE4(v466) & 1 | BYTE4(v466) & 2 | BYTE4(v477) & 0xFC;
                      BYTE4(v466) = v311;
                      sub_182CBA0(qword_1C7F2C0, &v475);
                      sub_182CBA0(v310, &v477);
                      v314 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v450);
                      sub_182CBA0(v314, &v451);
                      v434 += 48;
                    }
                    while ( v417 != (void *)v434 );
                    if ( (v464 & 0x100000000LL) != 0 || (_DWORD)v464 != 1 )
                    {
LABEL_465:
                      v316 = *(_QWORD *)v468;
                      if ( *(_QWORD *)v468 )
                      {
LABEL_466:
                        v435 = v316 + 48LL * *(unsigned int *)(v316 - 4);
                        if ( v435 != v316 )
                        {
                          v285 = &v464;
                          do
                          {
                            v317 = qword_1C7F2C0;
                            v318 = v316 + 16;
                            if ( (*(_BYTE *)(v316 + 36) & 1) != 0
                              || *(_DWORD *)(v316 + 32) != 1
                              || (v466 & 0x100000000LL) != 0
                              || (_DWORD)v466 != 1 )
                            {
                              v418 = v285;
                              sub_1848FF0(qword_1C7F2C0, v318, v285);
                              v285 = v418;
                            }
                            else
                            {
                              v419 = v285;
                              sub_1831650(qword_1C7F2C0, v318, v285);
                              sub_182CBA0(v317, v316 + 32);
                              *(_BYTE *)(v316 + 36) &= ~1u;
                              v285 = v419;
                              *(_DWORD *)(v316 + 32) = 1;
                            }
                            v316 += 48;
                          }
                          while ( v435 != v316 );
                        }
                      }
LABEL_479:
                      v287 = v461;
                      if ( v461 )
                      {
                        v288 = v462;
                        goto LABEL_408;
                      }
                      goto LABEL_455;
                    }
                  }
                }
                else
                {
                  if ( (v464 & 0x100000000LL) != 0 )
                    goto LABEL_409;
                  if ( (_DWORD)v464 != 1 )
                    goto LABEL_479;
                }
                if ( (v466 & 0x100000000LL) != 0 || (_DWORD)v466 != 1 )
                  goto LABEL_465;
                goto LABEL_479;
              }
              while ( 2 )
              {
                v254 = *(_QWORD *)(*(_QWORD *)((char *)ptr + v245)
                                 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)((char *)ptr + v245) + 24LL) - 1)
                                 + 32);
                if ( *(_BYTE *)(v394 + 2 * v245 + 24) != 4 )
                  sub_A8ADA((__int64)"std::get: wrong index for variant");
                v255 = *(_QWORD *)(v394 + 2 * v245 + 16);
                v256 = qword_1C7F2C0;
                LOBYTE(v475) = 1;
                *(_QWORD *)v476 = v254;
                v477 = 0;
                v478 = 0;
                v479 = 1;
                v480 = 0;
                if ( (*(_BYTE *)(v255 + 4) & 1) != 0 )
                {
                  sub_182C690(qword_1C7F2C0, &v477, v255);
                  v246 = v255;
                  if ( (*(_BYTE *)(v255 + 20) & 1) != 0 )
                  {
LABEL_374:
                    sub_182C690(v256, &v479, v246 + 16);
                    v248 = *(_QWORD **)v468;
                    if ( !*(_QWORD *)v468 )
                    {
LABEL_375:
                      v257 = (_QWORD *)sub_186B270(0x68u);
                      *v257 = 2;
                      v248 = v257 + 1;
                      *(_QWORD *)v468 = v257 + 1;
                      v250 = v257 + 1;
                      goto LABEL_370;
                    }
LABEL_368:
                    v249 = *((unsigned int *)v248 - 1);
                    if ( (_DWORD)v249 == *((_DWORD *)v248 - 2) )
                    {
                      v261 = 3 * v249 + 1;
                      v262 = v261 & 0xFFFFFFFE;
                      v263 = v261 >> 1;
                      v393 = v263;
                      v264 = 16 * (v263 + v262) + 8;
                      if ( 48 * (int)v249 + 8 >= v264 || (unsigned int)v249 >= v263 )
                      {
                        v4 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0((__int64 *)v450, "Overflow encountered when expanding vector");
                        *v4 = (char *)off_1C63128;
                        sub_2333C0(v4 + 1, v450);
                        sub_233E40((__int64)v450);
                        __cxa_throw(
                          v4,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v265 = sub_186B270(v264);
                      v266 = *(_BYTE **)v468;
                      v267 = (_DWORD *)v265;
                      v248 = (_QWORD *)(v265 + 8);
                      if ( *(_QWORD *)v468 )
                      {
                        v268 = *(unsigned int *)(*(_QWORD *)v468 - 4LL);
                        v269 = v248;
                        v270 = 3 * v268;
                        v267[1] = v268;
                        v271 = v266;
                        v272 = &v266[16 * v270];
                        if ( v272 != v266 )
                        {
                          do
                          {
                            v273 = *v271;
                            v274 = v271[20];
                            v271 += 48;
                            v269 += 6;
                            *((_BYTE *)v269 - 48) = v273;
                            *(v269 - 5) = *((_QWORD *)v271 - 5);
                            *((_DWORD *)v269 - 8) = *((_DWORD *)v271 - 8);
                            *((_BYTE *)v269 - 28) = v274 & 3 | *((_BYTE *)v269 - 28) & 0xFC;
                            v275 = *((_QWORD *)v271 - 3);
                            *((_QWORD *)v271 - 3) = 0;
                            *(v269 - 3) = v275;
                            v276 = *(v271 - 12);
                            *((_DWORD *)v269 - 4) = *((_DWORD *)v271 - 4);
                            *((_BYTE *)v269 - 12) = v276 & 3 | *((_BYTE *)v269 - 12) & 0xFC;
                            v277 = *((_QWORD *)v271 - 1);
                            *((_QWORD *)v271 - 1) = 0;
                            *(v269 - 1) = v277;
                          }
                          while ( v272 != v271 );
                        }
                        v278 = *((unsigned int *)v266 - 1);
                        if ( (_DWORD)v278 )
                        {
                          v390 = v248;
                          v388 = v267;
                          v385 = v9;
                          v279 = v266;
                          v432 = &v266[48 * v278];
                          do
                          {
                            v280 = qword_1C7F2C0;
                            sub_182CBA0(qword_1C7F2C0, v279 + 16);
                            v281 = v279 + 32;
                            v279 += 48;
                            sub_182CBA0(v280, v281);
                          }
                          while ( v432 != v279 );
                          v248 = v390;
                          v267 = v388;
                          v9 = v385;
                          v266 = *(_BYTE **)v468;
                        }
                        v391 = v267;
                        sub_186B220(v266 - 8);
                        v267 = v391;
                        v250 = &v248[6 * (unsigned int)v391[1]];
                      }
                      else
                      {
                        *(_DWORD *)(v265 + 4) = 0;
                        v250 = (_QWORD *)(v265 + 8);
                      }
                      *(_QWORD *)v468 = v248;
                      *v267 = v393;
                    }
                    else
                    {
                      v250 = &v248[6 * v249];
                    }
LABEL_370:
                    v251 = qword_1C7F2C0;
                    v245 += 8;
                    *(_BYTE *)v250 = (_BYTE)v475;
                    v250[1] = *(_QWORD *)v476;
                    *((_DWORD *)v250 + 4) = v477;
                    *((_BYTE *)v250 + 20) = BYTE4(v477) & 3 | *((_BYTE *)v250 + 20) & 0xFC;
                    v252 = v478;
                    v478 = 0;
                    v250[3] = v252;
                    *((_DWORD *)v250 + 8) = v479;
                    *((_BYTE *)v250 + 36) = BYTE4(v479) & 3 | *((_BYTE *)v250 + 36) & 0xFC;
                    v253 = v480;
                    v480 = 0;
                    v250[5] = v253;
                    ++*((_DWORD *)v248 - 1);
                    sub_182CBA0(v251, &v477);
                    sub_182CBA0(v251, &v479);
                    if ( v403 == v245 )
                      goto LABEL_405;
                    continue;
                  }
                }
                else
                {
                  LODWORD(v477) = *(_DWORD *)v255;
                  v246 = v255;
                  if ( (*(_BYTE *)(v255 + 20) & 1) != 0 )
                    goto LABEL_374;
                }
                break;
              }
              v247 = *(_DWORD *)(v246 + 16);
              v248 = *(_QWORD **)v468;
              BYTE4(v479) &= ~1u;
              LODWORD(v479) = v247;
              if ( !*(_QWORD *)v468 )
                goto LABEL_375;
              goto LABEL_368;
            }
            if ( v473[0] != -1 )
              goto LABEL_293;
LABEL_443:
            v394 = 0;
            LODWORD(v380) = 0;
            goto LABEL_364;
          }
          sub_180CE20(
            (int)&v475,
            (int)v450,
            v233,
            v234,
            v235,
            v236,
            (int)v368,
            v370,
            v371,
            (__int64)v373,
            (int)v374,
            (int)v375,
            (int)v376,
            v378,
            (int)v379,
            (int)v380,
            v381,
            (int)v382,
            (int)v383,
            (int)v384,
            (int)v386,
            (int)v387,
            (int)v389,
            v392,
            v394,
            (int)v395,
            v396,
            v397,
            (int)v398,
            (__int64)v399);
          v319 = v475;
          if ( *(_QWORD *)v476 == 13
            && *(_QWORD *)v475 == 0x622D6E6769737361LL
            && *(_QWORD *)((char *)v475 + 5) == 0x73646E756F622D6ELL )
          {
            if ( v475 != &v477 )
              operator delete(v475, v477 + 1);
            v168 = *(_QWORD *)(v396 + 24);
            if ( v168 )
              goto LABEL_362;
            if ( v473[0] != -1 )
              goto LABEL_644;
            goto LABEL_443;
          }
          if ( v475 == &v477 )
            goto LABEL_625;
          v320 = v477;
        }
        else
        {
          if ( v457 == &v459 )
            goto LABEL_625;
          v320 = v459;
        }
        operator delete(v319, v320 + 1);
        v168 = *(_QWORD *)(v396 + 24);
        goto LABEL_485;
      }
LABEL_235:
      if ( !v169 )
        goto LABEL_644;
      v170 = *(_DWORD *)(v169 - 4);
      v171 = *(_QWORD *)v9;
      if ( *(_BYTE *)(v169 + 8) != 2 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      *(_QWORD *)v450 = *(_QWORD *)v169;
      v172 = sub_15DA4C0(v171 + 560, v450);
      v173 = sub_15E0A80(
               v171,
               v172,
               *(_QWORD *)(v171 + 864),
               v473[0],
               (int)ptr,
               v170 - 1,
               v169 + 16,
               v367,
               (int)v368,
               (int)v370,
               v371,
               (int)v373,
               (__int64)v374,
               (__int64)v375,
               (char)v376,
               v378,
               (int)v379,
               v380);
      v429 = (_DWORD *)v173;
      v174 = v173;
      if ( v173 )
      {
        v175 = *(_DWORD *)(v173 + 8) + 1;
        *(_DWORD *)(v174 + 8) = v175;
LABEL_239:
        v429[2] = v175 + 1;
      }
      v176 = *((_QWORD **)v9 + 2);
      if ( v176 )
      {
        v177 = *((_DWORD *)v176 - 1);
        if ( v177 == *((_DWORD *)v176 - 2) )
        {
          v208 = (3 * v177 + 1) >> 1;
          v209 = 8 * v208 + 8;
          if ( 8 * v177 + 8 >= v209 || v177 >= v208 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v475, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v475);
            sub_233E40((__int64)&v475);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v210 = (unsigned int *)sub_186B300(v176 - 1, v209);
          v211 = v210[1];
          v176 = v210 + 2;
          *v210 = v208;
          *((_QWORD *)v9 + 2) = v210 + 2;
          LODWORD(v210) = v211;
          v180 = &v176[v211];
          v179 = (_DWORD)v210 + 1;
        }
        else
        {
          v178 = v177;
          v179 = v177 + 1;
          v180 = &v176[v178];
        }
      }
      else
      {
        v231 = (_QWORD *)sub_186B270(0x18u);
        *v231 = 2;
        v179 = 1;
        v176 = v231 + 1;
        *((_QWORD *)v9 + 2) = v176;
        v180 = v176;
      }
      v181 = *(_QWORD *)v9;
      *v180 = v429;
      *((_DWORD *)v176 - 1) = v179;
      v182 = sub_15DFBF0(v181, v429, v397);
      v183 = (void *)v182;
      if ( v182 )
        ++*(_DWORD *)(v182 + 8);
      v184 = *((_QWORD **)v9 + 2);
      if ( v184 )
      {
        v185 = *((_DWORD *)v184 - 1);
        if ( v185 == *((_DWORD *)v184 - 2) )
        {
          v204 = (3 * v185 + 1) >> 1;
          v205 = 8 * v204 + 8;
          if ( 8 * v185 + 8 >= (unsigned int)v205 || v185 >= v204 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v475, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v475);
            sub_233E40((__int64)&v475);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v408 = v183;
          v206 = (unsigned int *)sub_186B300(v184 - 1, v205);
          v207 = v206[1];
          v184 = v206 + 2;
          *v206 = v204;
          *((_QWORD *)v9 + 2) = v206 + 2;
          v183 = v408;
          LODWORD(v206) = v207;
          v188 = &v184[v207];
          v187 = (_DWORD)v206 + 1;
        }
        else
        {
          v186 = v185;
          v187 = v185 + 1;
          v188 = &v184[v186];
        }
      }
      else
      {
        v411 = (void *)v182;
        v230 = (_QWORD *)sub_186B270(0x18u);
        *v230 = 2;
        v183 = v411;
        v187 = 1;
        v184 = v230 + 1;
        *((_QWORD *)v9 + 2) = v184;
        v188 = v184;
      }
      *v188 = v183;
      *((_DWORD *)v184 - 1) = v187;
      v189 = *((_DWORD *)v9 + 8);
      if ( 3 * v189 < 4 * (*((_DWORD *)v9 + 9) + *((_DWORD *)v9 + 10)) )
      {
        v401 = v183;
        v192 = 32LL * v189;
        v409 = 2 * v189;
        v212 = sub_186B270(v192);
        v213 = v409;
        v190 = v212;
        v214 = (__m128 *)v212;
        v183 = v401;
        v215 = (__m128 *)(v212 + v192);
        if ( v409 )
        {
          a4.m128_u64[0] = 0;
          if ( (((_BYTE)v215 - (_BYTE)v190) & 0x10) == 0
            || (v214 = (__m128 *)(v190 + 16), *(_OWORD *)v190 = 0, v215 != (__m128 *)(v190 + 16)) )
          {
            do
            {
              *v214 = 0;
              v214 += 2;
              v214[-1] = 0;
            }
            while ( v215 != v214 );
          }
        }
        v216 = *((const __m128i **)v9 + 3);
        v191 = v409 - 1;
        v193 = (__int64 *)v215;
        v217 = *((unsigned int *)v9 + 8);
        v218 = (__m128i *)&v216[v217];
        if ( v216 == &v216[v217] )
        {
LABEL_308:
          if ( v218 )
          {
            LODWORD(v397) = v409;
            v402 = v409 - 1;
            v410 = v183;
            sub_186B220(v218);
            v213 = (int)v397;
            v191 = v402;
            v183 = v410;
          }
          *((_QWORD *)v9 + 3) = v190;
          *((_DWORD *)v9 + 8) = v213;
          *((_DWORD *)v9 + 10) = 0;
          goto LABEL_250;
        }
        while ( 1 )
        {
          while ( v216->m128i_i64[0] <= 1uLL )
          {
LABEL_300:
            if ( v218 == ++v216 )
              goto LABEL_307;
          }
          v219 = 16LL * (*(_DWORD *)(v216->m128i_i64[0] + 12) & (unsigned int)v191);
          v220 = (__m128 *)(v190 + v219);
          if ( v192 == v219 )
          {
LABEL_311:
            if ( (__m128 *)v190 == v220 )
            {
LABEL_319:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v222 = (__m128 *)v190;
            while ( v222->m128_u64[0] )
            {
              if ( v220 == ++v222 )
                goto LABEL_319;
            }
            a4 = (__m128)_mm_loadu_si128(v216);
            *v222 = a4;
            goto LABEL_300;
          }
          v221 = (__m128 *)(v190 + v219);
          while ( v221->m128_u64[0] )
          {
            if ( v215 == ++v221 )
              goto LABEL_311;
          }
          a4 = (__m128)_mm_loadu_si128(v216++);
          *v221 = a4;
          if ( v218 == v216 )
          {
LABEL_307:
            v218 = *((__m128i **)v9 + 3);
            goto LABEL_308;
          }
        }
      }
      v190 = *((_QWORD *)v9 + 3);
      v191 = v189 - 1;
      v192 = 16LL * v189;
      v193 = (__int64 *)(v190 + v192);
LABEL_250:
      v194 = *(_DWORD *)(v421 + 12);
      v195 = 16LL * (v194 & (unsigned int)v191);
      v196 = v190 + v195;
      if ( v195 == v192 )
      {
        v198 = nullptr;
LABEL_258:
        if ( v196 == v190 )
        {
LABEL_266:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v200 = *(_QWORD *)v190;
            if ( *(_QWORD *)v190 <= 1u )
              break;
            if ( *(_DWORD *)(v200 + 12) == v194 && v421 == v200 )
            {
              *(_QWORD *)(v190 + 8) = v183;
              *(_QWORD *)v190 = v421;
              goto LABEL_267;
            }
            v190 += 16;
            if ( v196 == v190 )
              goto LABEL_266;
          }
          if ( !v200 )
            break;
          v198 = (__int64 *)v190;
          v190 += 16;
          if ( v196 == v190 )
            goto LABEL_266;
        }
        if ( v198 )
          goto LABEL_317;
        v198 = (__int64 *)v190;
      }
      else
      {
        v197 = (__int64 *)(v190 + v195);
        v198 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v199 = *v197;
            if ( (unsigned __int64)*v197 <= 1 )
              break;
            if ( *(_DWORD *)(v199 + 12) == v194 && v421 == v199 )
            {
              v197[1] = (__int64)v183;
              *v197 = v421;
              goto LABEL_267;
            }
            v197 += 2;
            if ( v197 == v193 )
              goto LABEL_258;
          }
          if ( !v199 )
            break;
          v198 = v197;
          v197 += 2;
          if ( v197 == v193 )
            goto LABEL_258;
        }
        if ( v198 )
LABEL_317:
          --*((_DWORD *)v9 + 10);
        else
          v198 = v197;
      }
      v198[1] = (__int64)v183;
      *v198 = v421;
      ++*((_DWORD *)v9 + 9);
LABEL_267:
      if ( v429 )
      {
        v422 = v429[2];
        v429[2] = v422 - 1;
        if ( v422 == 1 )
          sub_15D7BC0(v383, v429);
      }
      if ( ptr != v398 && ptr )
        sub_186B220(ptr);
      v31 = v469;
      if ( v469 && v469 != v395 )
        goto LABEL_28;
    }
    else
    {
LABEL_6:
      v475 = &v477;
      *(_QWORD *)v476 = 0x1000000000LL;
      v16 = *(_DWORD *)(v421 + 24);
      v17 = v16;
      if ( !v16 )
        goto LABEL_7;
      v65 = v16 - 1;
      v66 = *(_QWORD *)v9;
      if ( *(_QWORD *)(v66 + 848) == sub_15D1F10(*(_QWORD *)(v421 + 8 * v65 + 32)) )
      {
        v65 = v17;
      }
      else if ( !(_DWORD)v65 )
      {
        goto LABEL_7;
      }
      v69 = (_QWORD *)v421;
      v70 = (_QWORD *)(v421 + 8 * v65);
      v71 = 0;
      v405 = v70;
      do
      {
        v72 = v69[4];
        v73 = *((unsigned int *)v9 + 8);
        v74 = *((__int64 **)v9 + 3);
        v75 = *(_DWORD *)(v72 + 12);
        v76 = v73 - 1;
        v73 *= 16;
        v77 = (__int64 *)((char *)v74 + v73);
        v78 = 16LL * (v75 & v76);
        v79 = &v74[(unsigned __int64)v78 / 8];
        if ( v78 == v73 )
        {
LABEL_123:
          while ( v79 != v74 )
          {
            v115 = *v74;
            if ( (unsigned __int64)*v74 > 1 )
            {
              if ( *(_DWORD *)(v115 + 12) == v75 && v72 == v115 )
              {
                v80 = v74;
                goto LABEL_111;
              }
            }
            else if ( !v115 )
            {
              break;
            }
            v74 += 2;
          }
LABEL_81:
          sub_1872CE0("");
          sub_1873130(114, 437);
        }
        v80 = &v74[(unsigned __int64)v78 / 8];
        while ( 1 )
        {
          v81 = *v80;
          if ( (unsigned __int64)*v80 > 1 )
            break;
          if ( !v81 )
            goto LABEL_81;
LABEL_78:
          v80 += 2;
          if ( v77 == v80 )
            goto LABEL_123;
        }
        if ( *(_DWORD *)(v81 + 12) != v75 || v72 != v81 )
          goto LABEL_78;
LABEL_111:
        v109 = v80[1];
        v110 = v476[0];
        if ( v476[0] < (unsigned int)v476[1] )
        {
          v82 = v475;
        }
        else
        {
          v425 = 2 * v476[1];
          v111 = (char *)sub_186B270(8LL * (unsigned int)(2 * v476[1]));
          v110 = v476[0];
          v112 = (__int64 *)v475;
          v82 = v111;
          if ( v476[0] )
          {
            if ( (unsigned int)(v476[0] - 1) <= 2 || v111 == (char *)v475 + 8 )
            {
              v68 = v425;
              v116 = 0;
              v117 = 8LL * (unsigned int)v476[0];
              do
              {
                v82[v116 / 8] = v112[v116 / 8];
                v116 += 8LL;
              }
              while ( v117 != v116 );
            }
            else
            {
              v113 = 0;
              v114 = 16LL * ((unsigned int)v476[0] >> 1);
              do
              {
                a4 = (__m128)_mm_loadu_si128((const __m128i *)&v112[v113 / 8]);
                *(__m128 *)&v82[v113 / 8] = a4;
                v113 += 16LL;
              }
              while ( v114 != v113 );
              if ( (v110 & 1) != 0 )
                v82[v110 & 0xFFFFFFFE] = v112[v110 & 0xFFFFFFFE];
            }
          }
          if ( v112 != &v477 && v112 )
          {
            v398 = v82;
            sub_186B220(v112);
            v110 = v476[0];
            v82 = v398;
          }
          v475 = v82;
          v476[1] = v425;
        }
        v83 = v110;
        v84 = v110 + 1;
        v82[v83] = v109;
        ++v69;
        v71 |= v109 != v72;
        v476[0] = v84;
      }
      while ( v69 != v405 );
      if ( !v71 )
      {
LABEL_7:
        v18 = *((unsigned int *)v9 + 8);
        v19 = 2 * v18;
        v423 = 2 * v18;
        if ( 3 * (int)v18 >= (unsigned int)(4 * (*((_DWORD *)v9 + 9) + *((_DWORD *)v9 + 10))) )
        {
          v20 = *((__m128 **)v9 + 3);
          v21 = v18 - 1;
          v22 = 16 * v18;
          v23 = &v20[v18];
LABEL_9:
          v24 = *(_DWORD *)(v421 + 12);
          a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v421, (__m128i)(unsigned __int64)v421);
          v25 = 16LL * (v24 & v21);
          v26 = &v20[(unsigned __int64)v25 / 0x10];
          if ( v25 == v22 )
          {
            v28 = nullptr;
LABEL_17:
            if ( v26 == v20 )
              goto LABEL_25;
            while ( 1 )
            {
              while ( 1 )
              {
                v30 = v20->m128_u64[0];
                if ( v20->m128_u64[0] <= 1 )
                  break;
                if ( *(_DWORD *)(v30 + 12) == v24 && v421 == v30 )
                {
                  *v20 = a4;
                  goto LABEL_26;
                }
                if ( v26 == ++v20 )
                  goto LABEL_25;
              }
              if ( !v30 )
                break;
              v28 = v20++;
              if ( v26 == v20 )
                goto LABEL_25;
            }
            if ( v28 )
              goto LABEL_341;
            v28 = v20;
          }
          else
          {
            v27 = &v20[(unsigned __int64)v25 / 0x10];
            v28 = nullptr;
            while ( 1 )
            {
              while ( 1 )
              {
                v29 = v27->m128_u64[0];
                if ( v27->m128_u64[0] <= 1 )
                  break;
                if ( *(_DWORD *)(v29 + 12) == v24 && v421 == v29 )
                {
                  *v27 = a4;
                  goto LABEL_26;
                }
                if ( ++v27 == v23 )
                  goto LABEL_17;
              }
              if ( !v29 )
                break;
              v28 = v27++;
              if ( v27 == v23 )
                goto LABEL_17;
            }
            if ( v28 )
LABEL_341:
              --*((_DWORD *)v9 + 10);
            else
              v28 = v27;
          }
          *v28 = a4;
          ++*((_DWORD *)v9 + 9);
          goto LABEL_26;
        }
        v22 = 16LL * v19;
        v149 = (__m128 *)sub_186B270(v22);
        v20 = v149;
        v150 = (__m128i *)&v149[v22 / 0x10];
        if ( v19 )
        {
          if ( (v22 & 0x10) != 0 )
          {
            *v149++ = 0;
            v151 = v423;
            if ( v150 != (__m128i *)v149 )
              goto LABEL_198;
          }
          else
          {
            v151 = v423;
            do
            {
LABEL_198:
              *v149 = 0;
              v149 += 2;
              v149[-1] = 0;
            }
            while ( v150 != (__m128i *)v149 );
            v423 = v151;
          }
        }
        v152 = *((const __m128i **)v9 + 3);
        v23 = (__m128 *)v150;
        v153 = (__m128i *)&v152[*((unsigned int *)v9 + 8)];
        v21 = v423 - 1;
        if ( v152 == v153 )
        {
          if ( v153 )
            goto LABEL_202;
        }
        else
        {
          do
          {
            while ( v152->m128i_i64[0] <= 1uLL )
            {
              if ( v153 == ++v152 )
                goto LABEL_211;
            }
            v154 = 16LL * (*(_DWORD *)(v152->m128i_i64[0] + 12) & v21);
            v155 = &v20[(unsigned __int64)v154 / 0x10];
            if ( v22 == v154 )
            {
LABEL_213:
              if ( v20 == v155 )
              {
LABEL_344:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v156 = v423;
              v157 = (__m128i *)v20;
              while ( v157->m128i_i64[0] )
              {
                if ( v155 == (__m128 *)++v157 )
                  goto LABEL_344;
              }
            }
            else
            {
              v156 = v423;
              v157 = (__m128i *)&v20[(unsigned __int64)v154 / 0x10];
              while ( v157->m128i_i64[0] )
              {
                if ( v150 == ++v157 )
                  goto LABEL_213;
              }
            }
            v423 = v156;
            *v157 = _mm_loadu_si128(v152++);
          }
          while ( v153 != v152 );
LABEL_211:
          v153 = *((__m128i **)v9 + 3);
          if ( v153 )
LABEL_202:
            sub_186B220(v153);
        }
        *((_QWORD *)v9 + 3) = v20;
        *((_DWORD *)v9 + 10) = 0;
        *((_DWORD *)v9 + 8) = v423;
        goto LABEL_9;
      }
      v85 = *(_QWORD *)v9;
      v86 = *(_DWORD *)(v421 + 24);
      if ( v86 )
      {
        v123 = sub_15D1F10(*(_QWORD *)(v421 + 8LL * (unsigned int)(v86 - 1) + 32));
        v84 = v476[0];
        if ( *(_QWORD *)(v85 + 848) == v123 )
        {
          v85 = *(_QWORD *)v9;
          LODWORD(v82) = (_DWORD)v475;
        }
        else
        {
          v124 = *(_QWORD *)(v421 + 8LL * (unsigned int)(*(_DWORD *)(v421 + 24) - 1) + 32);
          if ( v476[0] >= (unsigned int)v476[1] )
          {
            v158 = 2 * v476[1];
            v159 = (char *)sub_186B270(8LL * (unsigned int)(2 * v476[1]));
            v84 = v476[0];
            v160 = (__int64 *)v475;
            v82 = v159;
            if ( v476[0] )
            {
              if ( (unsigned int)(v476[0] - 1) <= 2 || v159 == (char *)v475 + 8 )
              {
                v259 = 0;
                v260 = 8LL * (unsigned int)v476[0];
                do
                {
                  v67 = v160[v259 / 8];
                  v82[v259 / 8] = v67;
                  v259 += 8LL;
                }
                while ( v260 != v259 );
              }
              else
              {
                v161 = 0;
                v162 = 16LL * ((unsigned int)v476[0] >> 1);
                do
                {
                  a4 = (__m128)_mm_loadu_si128((const __m128i *)&v160[v161 / 8]);
                  *(__m128 *)&v82[v161 / 8] = a4;
                  v161 += 16LL;
                }
                while ( v162 != v161 );
                if ( (v84 & 1) != 0 )
                  v82[v84 & 0xFFFFFFFE] = v160[v84 & 0xFFFFFFFE];
              }
            }
            if ( v160 != &v477 && v160 )
            {
              v428 = v82;
              sub_186B220(v160);
              v84 = v476[0];
              v82 = v428;
            }
            v475 = v82;
            v476[1] = v158;
          }
          else
          {
            v82 = v475;
          }
          v125 = v84++;
          v85 = *(_QWORD *)v9;
          v82[v125] = v124;
          v476[0] = v84;
        }
      }
      v87 = sub_15DC610(
              v85,
              *(_QWORD *)(v421 + 16),
              v84,
              (int)v82,
              v67,
              v68,
              (int)v368,
              (int)v370,
              v371,
              (int)v373,
              (int)v374,
              (char)v375,
              (int)v376,
              v378,
              (int)v379,
              v380);
      v88 = (_QWORD *)v87;
      if ( v87 )
        ++*(_DWORD *)(v87 + 8);
      v89 = *((_QWORD **)v9 + 2);
      if ( v89 )
      {
        v90 = *((_DWORD *)v89 - 1);
        if ( v90 == *((_DWORD *)v89 - 2) )
        {
          v118 = (3 * v90 + 1) >> 1;
          v119 = 8 * v118 + 8;
          v120 = v118;
          if ( 8 * v90 + 8 >= (unsigned int)v119 || v90 >= v118 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&ptr, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, &ptr);
            sub_233E40((__int64)&ptr);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v426 = v88;
          v121 = (unsigned int *)sub_186B300(v89 - 1, v119);
          v89 = v121 + 2;
          v88 = v426;
          v122 = v121[1];
          *v121 = v120;
          *((_QWORD *)v9 + 2) = v121 + 2;
          LODWORD(v121) = v122;
          v93 = &v89[v122];
          v92 = (_DWORD)v121 + 1;
        }
        else
        {
          v91 = v90;
          v92 = v90 + 1;
          v93 = &v89[v91];
        }
      }
      else
      {
        v431 = v88;
        v229 = (_QWORD *)sub_186B270(0x18u);
        *v229 = 2;
        v89 = v229 + 1;
        v92 = 1;
        v88 = v431;
        *((_QWORD *)v9 + 2) = v89;
        v93 = v89;
      }
      *v93 = v88;
      *((_DWORD *)v89 - 1) = v92;
      v94 = *((_DWORD *)v9 + 8);
      if ( 3 * v94 < 4 * (*((_DWORD *)v9 + 9) + *((_DWORD *)v9 + 10)) )
      {
        v398 = v88;
        v96 = 32LL * v94;
        v406 = 2 * v94;
        v126 = sub_186B270(v96);
        v127 = v406;
        v427 = (__m128 *)v126;
        v128 = (__m128 *)v126;
        v129 = (__m128 *)v126;
        v88 = v398;
        v130 = (__m128 *)(v126 + v96);
        if ( v406 )
        {
          a4.m128_u64[0] = 0;
          if ( (((_BYTE)v130 - (_BYTE)v128) & 0x10) == 0 || (v129 = v128 + 1, *v128 = 0, &v128[1] != v130) )
          {
            do
            {
              *v129 = 0;
              v129 += 2;
              v129[-1] = 0;
            }
            while ( v129 != v130 );
            v427 = v128;
          }
        }
        v131 = *((const __m128i **)v9 + 3);
        v95 = v406 - 1;
        v97 = (__int64 *)v130;
        v132 = (__m128i *)&v131[*((unsigned int *)v9 + 8)];
        if ( v131 == v132 )
        {
LABEL_160:
          if ( v132 )
          {
            LODWORD(v398) = v406;
            v407 = v88;
            sub_186B220(v132);
            v127 = (int)v398;
            v88 = v407;
          }
          *((_DWORD *)v9 + 8) = v127;
          *((_DWORD *)v9 + 10) = 0;
          *((_QWORD *)v9 + 3) = v427;
          v98 = (__int64 *)v427;
          goto LABEL_93;
        }
        while ( 1 )
        {
LABEL_153:
          if ( v131->m128i_i64[0] <= 1uLL )
            goto LABEL_152;
          v133 = 16LL * (*(_DWORD *)(v131->m128i_i64[0] + 12) & (unsigned int)v95);
          v134 = &v427[(unsigned __int64)v133 / 0x10];
          if ( v96 == v133 )
            break;
          v135 = &v427[(unsigned __int64)v133 / 0x10];
          while ( v135->m128_u64[0] )
          {
            if ( v130 == ++v135 )
              goto LABEL_163;
          }
          a4 = (__m128)_mm_loadu_si128(v131++);
          *v135 = a4;
          if ( v132 == v131 )
          {
LABEL_159:
            v132 = *((__m128i **)v9 + 3);
            goto LABEL_160;
          }
        }
LABEL_163:
        if ( v427 == v134 )
        {
LABEL_194:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v136 = v427;
        while ( v136->m128_u64[0] )
        {
          if ( v134 == ++v136 )
            goto LABEL_194;
        }
        a4 = (__m128)_mm_loadu_si128(v131);
        *v136 = a4;
LABEL_152:
        if ( v132 == ++v131 )
          goto LABEL_159;
        goto LABEL_153;
      }
      v95 = v94 - 1;
      v96 = 16LL * v94;
      v97 = (__int64 *)(*((_QWORD *)v9 + 3) + v96);
      v98 = *((__int64 **)v9 + 3);
LABEL_93:
      v99 = *(_DWORD *)(v421 + 12);
      v100 = 16LL * (v99 & (unsigned int)v95);
      v101 = &v98[(unsigned __int64)v100 / 8];
      if ( v100 == v96 )
      {
        v103 = nullptr;
        v106 = v98;
        goto LABEL_102;
      }
      v102 = &v98[(unsigned __int64)v100 / 8];
      v103 = nullptr;
      v104 = v98;
      while ( 1 )
      {
        while ( 1 )
        {
          v105 = *v102;
          if ( (unsigned __int64)*v102 <= 1 )
            break;
          if ( *(_DWORD *)(v105 + 12) == v99 && v421 == v105 )
          {
            v102[1] = (__int64)v88;
            *v102 = v421;
            goto LABEL_26;
          }
          v102 += 2;
          if ( v102 == v97 )
            goto LABEL_101;
        }
        if ( !v105 )
          break;
        v103 = v102;
        v102 += 2;
        if ( v102 == v97 )
        {
LABEL_101:
          v106 = v104;
LABEL_102:
          if ( v101 != v106 )
          {
            for ( i = v106; v101 != i; i += 2 )
            {
              v108 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v108 + 12) == v99 && v421 == v108 )
                {
                  i[1] = (__int64)v88;
                  *i = v421;
                  goto LABEL_26;
                }
              }
              else
              {
                if ( !v108 )
                {
                  v102 = i;
                  goto LABEL_135;
                }
                v103 = i;
              }
            }
          }
LABEL_25:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
      }
LABEL_135:
      if ( v103 )
        --*((_DWORD *)v9 + 10);
      else
        v103 = v102;
      v103[1] = (__int64)v88;
      *v103 = v421;
      ++*((_DWORD *)v9 + 9);
LABEL_26:
      v31 = v475;
      if ( v475 != &v477 && v475 )
LABEL_28:
        sub_186B220(v31);
    }
  }
  v137 = *((unsigned int *)v9 + 8);
  v138 = *((__int64 **)v9 + 3);
  v139 = *(_DWORD *)(v378 + 12);
  v140 = v137 - 1;
  v137 *= 16;
  v141 = (__int64 *)((char *)v138 + v137);
  v142 = 16LL * (v139 & v140);
  v143 = &v138[(unsigned __int64)v142 / 8];
  if ( v142 == v137 )
  {
LABEL_186:
    while ( v143 != v138 )
    {
      v148 = *v138;
      if ( (unsigned __int64)*v138 > 1 )
      {
        if ( *(_DWORD *)(v148 + 12) == v139 && v378 == v148 )
        {
          v144 = v138;
          goto LABEL_177;
        }
      }
      else if ( !v148 )
      {
        break;
      }
      v138 += 2;
    }
LABEL_175:
    sub_1872CE0("");
    sub_1873130(114, 459);
  }
  v144 = &v138[(unsigned __int64)v142 / 8];
  while ( 2 )
  {
    v145 = *v144;
    if ( (unsigned __int64)*v144 <= 1 )
    {
      if ( !v145 )
        goto LABEL_175;
      goto LABEL_172;
    }
    if ( *(_DWORD *)(v145 + 12) != v139 || v378 != v145 )
    {
LABEL_172:
      v144 += 2;
      if ( v141 == v144 )
        goto LABEL_186;
      continue;
    }
    break;
  }
LABEL_177:
  v146 = v144[1];
  *v379 = _mm_loadh_ps(v9);
  if ( v146 )
    ++*(_DWORD *)(v146 + 8);
  v454[1] = &off_1C62200;
  if ( v456 )
    sub_186B220(v456);
  if ( v455 )
    sub_186B220(v455);
  if ( v454[0] )
    sub_186B220((void *)(v454[0] - 8LL));
  return v379;
}

