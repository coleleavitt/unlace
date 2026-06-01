__int64 __fastcall sub_19C7D40(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        char *a4,
        __int64 a5,
        unsigned int *a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        int a10,
        unsigned int a11)
{
  __int64 v11; // r13
  char *v14; // rbx
  _QWORD *p_src; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rax
  bool v23; // zf
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rax
  void **v29; // rdx
  void **v30; // r15
  void **v31; // rbx
  void **v32; // rdi
  void **v33; // rdi
  void **v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r14
  _QWORD *v38; // rdi
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r14
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r14
  __int64 result; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r15
  __int64 v53; // rcx
  void *v54; // rax
  __int64 i; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int64 v61; // rax
  void **v62; // r10
  __int64 v63; // r15
  __int64 v64; // rsi
  __int64 *v65; // r10
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int16 v68; // dx
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 *v74; // r10
  unsigned __int64 v75; // rbp
  int v76; // eax
  __int64 v77; // rbp
  _WORD *v78; // rax
  char v79; // dl
  __int64 v80; // r12
  char v81; // bl
  __int16 v82; // ax
  __int16 v83; // ax
  unsigned __int8 v84; // al
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 *v88; // r14
  unsigned __int8 (__fastcall *v89)(__int64); // r8
  char v90; // al
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rsi
  char v96; // r15
  unsigned __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r14
  void *v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int64 v109; // r14
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rdx
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rdi
  unsigned __int64 v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rax
  __int64 v127; // rbx
  bool v128; // r9
  __int64 v129; // r11
  char v130; // al
  _QWORD *v131; // rdi
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  _QWORD *v135; // rdi
  unsigned __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rbx
  __int64 v139; // rax
  __int64 v140; // r14
  __int64 v141; // r15
  char v142; // dl
  __int64 v143; // rdx
  unsigned __int64 v144; // rax
  _QWORD *v145; // rax
  __int64 v146; // rax
  int *v147; // rbx
  char v148; // dl
  char *v149; // rbp
  char v150; // r8
  unsigned int v151; // ebx
  unsigned __int64 v152; // rax
  __int64 v153; // rdi
  unsigned __int64 v154; // rbx
  int v155; // edi
  int v156; // edx
  __int64 v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rax
  _QWORD *v160; // rsi
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rbp
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rax
  __int64 v168; // rdx
  unsigned __int64 v169; // rax
  _QWORD *v170; // rdi
  unsigned __int64 v171; // rbp
  __int64 v172; // rsi
  unsigned __int64 v173; // rdx
  unsigned __int64 v174; // rsi
  unsigned __int64 v175; // rcx
  unsigned int v176; // r13d
  __int64 v177; // rbx
  char v178; // al
  unsigned __int8 v179; // al
  _QWORD *v180; // r14
  unsigned int v181; // r15d
  unsigned __int64 v182; // rbp
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  unsigned __int64 v187; // r12
  _WORD *v188; // rax
  char v189; // bl
  __int64 v190; // r14
  __int16 v191; // ax
  unsigned __int8 v192; // al
  __int64 v193; // rax
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rcx
  __int64 v197; // rdx
  _QWORD *v198; // rax
  _QWORD *v199; // rax
  char v200; // al
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rax
  unsigned __int8 v205; // dl
  int v206; // r8d
  int v207; // r9d
  __int64 v208; // r10
  __int64 v209; // rax
  unsigned __int64 v210; // rdi
  __int64 v211; // rax
  char v212; // dl
  unsigned __int64 *v213; // rbp
  unsigned __int64 *v214; // r15
  unsigned __int64 v215; // r13
  unsigned __int64 v216; // rax
  __int64 v217; // rbx
  __int64 v218; // r14
  void *v219; // rdi
  void *v220; // rdi
  void *v221; // rdi
  void **v222; // rbx
  void **v223; // r14
  __int64 v224; // rdx
  __int64 v225; // rbp
  __int64 v226; // rcx
  unsigned __int64 v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  __int64 v232; // r14
  char v233; // al
  _QWORD *v234; // rsi
  unsigned int v235; // ebp
  __int64 v236; // r13
  __int64 v237; // r15
  __int16 v238; // ax
  unsigned __int64 v239; // rax
  unsigned __int64 v240; // rdi
  unsigned __int64 v241; // rax
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // r9
  unsigned __int64 v245; // r14
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  unsigned __int64 v249; // r15
  char v250; // dl
  _QWORD *v251; // rsi
  int v252; // r13d
  unsigned __int64 v253; // rbp
  __int64 v254; // rbx
  __int64 v255; // rdx
  __int64 v256; // rdx
  unsigned __int64 v257; // rsi
  unsigned __int64 v258; // rax
  char v259; // al
  unsigned int v260; // eax
  __int64 v261; // rax
  unsigned __int64 v262; // rax
  _QWORD *v263; // rbp
  unsigned __int64 v264; // rax
  __int64 v265; // rdx
  _QWORD *v266; // rdi
  bool v267; // al
  bool v268; // al
  __int64 *v269; // rsi
  unsigned int v270; // ecx
  __int64 v271; // rax
  __int64 v272; // r14
  __int64 v273; // r14
  size_t v274; // rax
  __int64 v275; // rax
  __int64 v276; // rax
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  unsigned __int64 v280; // rax
  __int64 v281; // rbp
  _QWORD *v282; // rsi
  __int64 v283; // r13
  unsigned __int64 v284; // r12
  unsigned __int64 v285; // rsi
  __int64 v286; // rbx
  size_t v287; // r8
  int v288; // eax
  void *v289; // r11
  bool v290; // r9
  char v291; // al
  __int64 v292; // rax
  char v293; // cl
  _BYTE *v294; // rdx
  _BYTE *v295; // rdx
  unsigned __int8 v296; // al
  unsigned int v297; // eax
  unsigned __int8 v298; // al
  unsigned int v299; // eax
  char v300; // cl
  unsigned __int8 v301; // cl
  __int64 v302; // rdi
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // rbx
  __int64 v306; // r8
  __int64 v307; // r9
  void *v308; // rax
  _QWORD *v309; // rax
  __int64 v310; // rbp
  unsigned __int8 *v311; // rcx
  __int64 v312; // rax
  int v313; // edx
  __int64 v314; // rax
  unsigned __int8 *v315; // rbx
  unsigned __int8 *v316; // rdi
  __int64 v317; // rax
  __int64 *v318; // rax
  __int64 v319; // rax
  __int64 v320; // rbx
  __int64 v321; // rdx
  unsigned __int64 v322; // rax
  __int64 v323; // rax
  __int64 v324; // rdx
  __int64 v325; // rcx
  __int64 v326; // r8
  __int64 v327; // r9
  __int64 v328; // r11
  __int64 v329; // rbx
  void *v330; // rax
  _QWORD *v331; // rax
  __int64 v332; // rbx
  __int64 *v333; // rbp
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 v336; // r8
  __int64 v337; // r9
  __int64 v338; // rax
  unsigned __int8 v339; // cl
  __int64 v340; // rax
  char v341; // dl
  char v342; // di
  char v343; // cl
  __int64 v344; // rdi
  __int64 v345; // rdx
  __int64 v346; // rdx
  int v347; // eax
  __int64 v348; // rbx
  __int64 v349; // rax
  __int64 v350; // rcx
  __int64 v351; // rdx
  __int64 v352; // rcx
  __int64 v353; // rbp
  __int64 v354; // r8
  void *v355; // rax
  _QWORD *v356; // rax
  unsigned int v357; // eax
  __int64 v358; // rax
  __int64 v359; // rdx
  __int64 v360; // rcx
  __int64 v361; // rbx
  __int64 v362; // r8
  void *v363; // rax
  _QWORD *v364; // rax
  __int64 v365; // rdx
  int v366; // eax
  __int64 v367; // rbx
  __int64 v368; // rax
  __int64 v369; // rcx
  __int64 v370; // rax
  __int64 v371; // rdx
  __int64 v372; // rcx
  __int64 v373; // rbp
  __int64 v374; // r8
  __int64 v375; // r9
  void *v376; // rax
  _QWORD *v377; // rax
  int v378; // eax
  int v379; // ebx
  unsigned int v380; // eax
  __int64 v381; // rax
  __int64 v382; // r12
  __int64 v383; // r13
  __int64 v384; // r12
  void *v385; // rdi
  __int64 v386; // rax
  __int64 v387; // rbp
  __int64 v388; // r12
  __int64 v389; // rbp
  void *v390; // rdi
  _QWORD *v391; // [rsp+0h] [rbp-218h]
  unsigned int v392; // [rsp+10h] [rbp-208h]
  unsigned __int64 v393; // [rsp+10h] [rbp-208h]
  __int64 v394; // [rsp+10h] [rbp-208h]
  int v396[2]; // [rsp+18h] [rbp-200h]
  int v397[2]; // [rsp+18h] [rbp-200h]
  int v398[2]; // [rsp+18h] [rbp-200h]
  unsigned __int64 v399; // [rsp+18h] [rbp-200h]
  int v400; // [rsp+18h] [rbp-200h]
  int v401[2]; // [rsp+18h] [rbp-200h]
  int v402[2]; // [rsp+18h] [rbp-200h]
  int v403[2]; // [rsp+18h] [rbp-200h]
  int v404[2]; // [rsp+18h] [rbp-200h]
  int v405[2]; // [rsp+18h] [rbp-200h]
  __int64 *v406; // [rsp+18h] [rbp-200h]
  int v407[2]; // [rsp+18h] [rbp-200h]
  int v408[2]; // [rsp+18h] [rbp-200h]
  __int64 *v409; // [rsp+18h] [rbp-200h]
  __int64 v410; // [rsp+18h] [rbp-200h]
  __int64 v411; // [rsp+18h] [rbp-200h]
  int v412[2]; // [rsp+18h] [rbp-200h]
  unsigned int v413; // [rsp+20h] [rbp-1F8h]
  int v414; // [rsp+20h] [rbp-1F8h]
  int v415[2]; // [rsp+20h] [rbp-1F8h]
  int v416[2]; // [rsp+20h] [rbp-1F8h]
  int v417[2]; // [rsp+28h] [rbp-1F0h]
  int v418[2]; // [rsp+28h] [rbp-1F0h]
  int *v419; // [rsp+28h] [rbp-1F0h]
  unsigned int v420; // [rsp+28h] [rbp-1F0h]
  unsigned __int64 v421; // [rsp+28h] [rbp-1F0h]
  __int64 v422; // [rsp+28h] [rbp-1F0h]
  int v423[2]; // [rsp+28h] [rbp-1F0h]
  char v424; // [rsp+28h] [rbp-1F0h]
  char v425; // [rsp+28h] [rbp-1F0h]
  int v426[2]; // [rsp+28h] [rbp-1F0h]
  int v427[2]; // [rsp+28h] [rbp-1F0h]
  int v428[2]; // [rsp+28h] [rbp-1F0h]
  void **v429; // [rsp+30h] [rbp-1E8h]
  _QWORD *v430; // [rsp+30h] [rbp-1E8h]
  unsigned __int8 (__fastcall *v431)(__int64); // [rsp+30h] [rbp-1E8h]
  _QWORD *v432; // [rsp+30h] [rbp-1E8h]
  unsigned int *v433; // [rsp+30h] [rbp-1E8h]
  void *v434; // [rsp+30h] [rbp-1E8h]
  bool v435; // [rsp+30h] [rbp-1E8h]
  void *v436; // [rsp+30h] [rbp-1E8h]
  void *v437; // [rsp+30h] [rbp-1E8h]
  void *v438; // [rsp+30h] [rbp-1E8h]
  bool v439; // [rsp+30h] [rbp-1E8h]
  void *v440; // [rsp+30h] [rbp-1E8h]
  bool v441; // [rsp+30h] [rbp-1E8h]
  _QWORD *v442; // [rsp+38h] [rbp-1E0h]
  int v443[2]; // [rsp+38h] [rbp-1E0h]
  char v444; // [rsp+38h] [rbp-1E0h]
  bool v445; // [rsp+38h] [rbp-1E0h]
  int v446[2]; // [rsp+38h] [rbp-1E0h]
  __int64 v447; // [rsp+38h] [rbp-1E0h]
  bool v448; // [rsp+38h] [rbp-1E0h]
  unsigned __int64 v449; // [rsp+40h] [rbp-1D8h]
  int v450[2]; // [rsp+40h] [rbp-1D8h]
  __int64 v451; // [rsp+40h] [rbp-1D8h]
  char v452; // [rsp+40h] [rbp-1D8h]
  int v453[2]; // [rsp+40h] [rbp-1D8h]
  int v454; // [rsp+48h] [rbp-1D0h]
  void **v455; // [rsp+48h] [rbp-1D0h]
  int v456; // [rsp+50h] [rbp-1C8h]
  unsigned int v457; // [rsp+54h] [rbp-1C4h] BYREF
  int v458[2]; // [rsp+58h] [rbp-1C0h] BYREF
  int v459[2]; // [rsp+60h] [rbp-1B8h] BYREF
  int v460[2]; // [rsp+68h] [rbp-1B0h] BYREF
  int v461; // [rsp+70h] [rbp-1A8h]
  __int64 v462; // [rsp+74h] [rbp-1A4h]
  char v463; // [rsp+7Ch] [rbp-19Ch]
  __int64 v464; // [rsp+80h] [rbp-198h] BYREF
  int v465; // [rsp+88h] [rbp-190h]
  int v466[2]; // [rsp+90h] [rbp-188h] BYREF
  int v467; // [rsp+98h] [rbp-180h]
  __int16 v468; // [rsp+9Ch] [rbp-17Ch]
  char v469; // [rsp+9Eh] [rbp-17Ah]
  char v470; // [rsp+9Fh] [rbp-179h]
  int v471[4]; // [rsp+A0h] [rbp-178h]
  int v472[4]; // [rsp+B0h] [rbp-168h] BYREF
  int v473; // [rsp+C0h] [rbp-158h]
  void *v474; // [rsp+C8h] [rbp-150h]
  int v475; // [rsp+D0h] [rbp-148h]
  int v476[6]; // [rsp+D8h] [rbp-140h] BYREF
  void *src; // [rsp+F0h] [rbp-128h] BYREF
  __int128 n; // [rsp+F8h] [rbp-120h] BYREF
  void *v479; // [rsp+108h] [rbp-110h]
  int v480[2]; // [rsp+110h] [rbp-108h]
  int v481[4]; // [rsp+118h] [rbp-100h] BYREF
  int v482; // [rsp+128h] [rbp-F0h]
  void *v483; // [rsp+130h] [rbp-E8h]
  unsigned __int64 *v484; // [rsp+138h] [rbp-E0h]
  char v485; // [rsp+140h] [rbp-D8h]
  int v486; // [rsp+148h] [rbp-D0h]
  int v487[2]; // [rsp+150h] [rbp-C8h] BYREF
  int v488[2]; // [rsp+158h] [rbp-C0h]
  void *v489; // [rsp+160h] [rbp-B8h]
  int v490; // [rsp+168h] [rbp-B0h]
  unsigned __int8 *v491; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v492; // [rsp+178h] [rbp-A0h]
  int v493; // [rsp+180h] [rbp-98h]
  int v494; // [rsp+188h] [rbp-90h]
  int v495; // [rsp+190h] [rbp-88h]
  int v496; // [rsp+198h] [rbp-80h]
  int v497; // [rsp+1A0h] [rbp-78h]
  int v498; // [rsp+1A8h] [rbp-70h]
  int v499; // [rsp+1B0h] [rbp-68h]
  int v500; // [rsp+1B8h] [rbp-60h]
  int v501; // [rsp+1C0h] [rbp-58h]
  int v502; // [rsp+1C8h] [rbp-50h]
  __int64 v503; // [rsp+1D0h] [rbp-48h]
  int v504; // [rsp+1D8h] [rbp-40h]
  char v505; // [rsp+1E0h] [rbp-38h]

  v11 = (__int64)a1;
  v14 = a4;
  v392 = a5;
  p_src = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  if ( *a4
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(p_src[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    v16 = sub_19179A0((__int64)a1, p_src, 1u, (__int64)a4, a5, (__int64)a6, a7, a8);
  }
  else
  {
    v16 = sub_1907C70((__int64)a1, p_src, (__m128i)a7, a8, (__int64)a3, (__int64)a4, a5, (__int64)a6);
  }
  *a3 = v16;
  if ( v16 == 1 )
    return 1;
  v20 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFELL) + 8);
  *(_QWORD *)v459 = *(_QWORD *)(a2 + 120);
  v21 = *(unsigned int *)(a2 + 128);
  *(_QWORD *)v458 = v20;
  v22 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = *v14 == 0;
  v457 = v21;
  if ( v23 )
    goto LABEL_8;
  v24 = *v22;
  v21 = *(unsigned __int8 *)(*v22 + 16);
  if ( (_BYTE)v21 != 42 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v17 + 16) == 42 )
    {
      v24 = sub_F63050(*v22, p_src, v21, v17);
      if ( v24 )
        goto LABEL_7;
      v22 = (__int64 *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
      v24 = *(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
      v21 = *(unsigned __int8 *)(v24 + 16);
    }
    if ( (_BYTE)v21 != 34 )
    {
      v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_BYTE)v21 == 34 )
      {
        v24 = sub_F63050(v24, p_src, v21, v17);
        if ( v24 )
          goto LABEL_7;
        v22 = (__int64 *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
        v24 = *(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
        v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      }
      v17 = (unsigned int)(unsigned __int8)v21 - 25;
      if ( (unsigned int)v17 <= 1 )
        goto LABEL_78;
      if ( (*(_BYTE *)(v24 + 17) & 4) != 0 )
      {
        *(_QWORD *)v458 = *(_QWORD *)(a1[31] + 19072);
        v22 = (__int64 *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        if ( (_BYTE)v21 != 48 )
        {
          sub_168B9F0((__int64)v487, a1 + 1, v457, 0x14ABu, 0);
          v225 = sub_1605D30((__int64)v487, (__int64 *)v458);
          src = (void *)sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v458, *(double *)a7.m128_u64);
          sub_1587DB0(v225, (__int64 *)&src);
          sub_15F7200(v487);
          return 1;
        }
        v21 = a1[29];
        if ( (*(_BYTE *)(v21 + 1) & 8) == 0 )
        {
          sub_168B9F0((__int64)v487, a1 + 1, v392, 0x14AFu, 0);
          v271 = sub_1605D30((__int64)v487, (__int64 *)v458);
          v466[0] = (unsigned __int8)*v14;
          v272 = sub_1587D10(v271, v466);
          *(_QWORD *)v472 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v466, *(double *)a7.m128_u64);
          v273 = sub_1587DB0(v272, (__int64 *)v472);
          v274 = j__strlen(".");
          LODWORD(v462) = v392;
          HIDWORD(v462) = v392;
          v463 = 1;
          sub_19C4820((__int64)&src, v462, 1, ".", v274);
          p_src = &src;
          sub_1589170(v273, &src);
          if ( v479 != v481 )
            operator delete(v479);
          sub_15F7200(v487);
          v22 = (__int64 *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
        }
        *v14 = 0;
      }
      goto LABEL_8;
    }
  }
LABEL_7:
  *(_QWORD *)v458 = *(_QWORD *)(v24 + 32);
  v22 = (__int64 *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_8:
  v25 = *v22;
  if ( *(_BYTE *)(*v22 + 16) == 7 )
    goto LABEL_9;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 7 )
    goto LABEL_30;
  v25 = sub_F63050(v25, p_src, v21, v17);
  if ( v25 )
  {
LABEL_9:
    sub_168B9B0((__int64)v487, (__int64)(a1 + 1), 6532);
    v26 = v392;
    sub_18CAED0((__int64)a1, v392, (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL), (__int64)v487);
    v429 = *(void ***)v487;
    if ( *(_QWORD *)v487 )
    {
      v28 = *(_QWORD *)v488;
      if ( *(_QWORD *)v488 )
      {
        if ( *(_QWORD *)v487 < *(_QWORD *)v488 || *(_QWORD *)v487 > (unsigned __int64)(*(_QWORD *)v488 + 14848LL) )
        {
          v29 = *(void ***)(*(_QWORD *)v487 + 528LL);
          v30 = &v29[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v487 + 536LL)];
          if ( v29 != v30 )
          {
            *(_QWORD *)v417 = v14;
            v31 = *(void ***)(*(_QWORD *)v487 + 528LL);
            do
            {
              while ( 1 )
              {
                v30 -= 8;
                v32 = (void **)v30[3];
                if ( v32 == v30 + 5 )
                  break;
                operator delete(v32);
                if ( v31 == v30 )
                  goto LABEL_16;
              }
            }
            while ( v31 != v30 );
LABEL_16:
            v14 = *(char **)v417;
            v30 = (void **)v429[66];
          }
          if ( v30 != v429 + 68 )
            free(v30);
          v33 = (void **)v429[52];
          v34 = v429 + 52;
          if ( v33 != v429 + 54 )
            free(v33);
          *(_QWORD *)v418 = v429 + 12;
          do
          {
            while ( 1 )
            {
              v34 -= 4;
              if ( *v34 == v34 + 2 )
                break;
              operator delete(*v34);
              if ( v34 == *(void ***)v418 )
                goto LABEL_24;
            }
          }
          while ( v34 != *(void ***)v418 );
LABEL_24:
          v26 = 928;
          operator delete(v429, 0x3A0u);
        }
        else
        {
          v98 = *(unsigned int *)(*(_QWORD *)v488 + 14976LL);
          *(_DWORD *)(*(_QWORD *)v488 + 14976LL) = v98 + 1;
          *(_QWORD *)(v28 + 8 * v98 + 14848) = v429;
        }
      }
    }
    v35 = *(_QWORD *)(*(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v36 = *(_QWORD *)(v35 + 8) & 7LL;
    if ( v36 | (*(__int64 *)(v35 + 8) >> 3) & 1 )
      v35 = sub_F64F00(*(_QWORD *)(v25 + 32), v26, v36, v36 | (*(__int64 *)(v35 + 8) >> 3) & 1, v27);
    v37 = *a3;
    v38 = *(_QWORD **)(v11 + 248);
    *(_QWORD *)v458 = v35 & 0xFFFFFFFFFFFFFFF0LL;
    v39 = v35 & 0xFFFFFFFFFFFFFFF0LL;
    v40 = v37 & 0xFFFFFFFFFFFFFFFELL;
    v41 = (*(_BYTE *)(v40 + 1) >> 1) & 3;
    if ( *v14 )
    {
      v420 = (*(_BYTE *)(v40 + 1) >> 1) & 3;
      v97 = sub_A70010((__int64)v38, v39);
      v38 = *(_QWORD **)(v11 + 248);
      v41 = v420;
      v39 = v97;
    }
    *a3 = sub_C0A3E0(v38, v39, 58, v40, 0, v41, 0);
    p_src = v391;
    v25 = *(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_30:
    v46 = (__int64)sub_F63240(v25, (__int64)p_src, v21, v17, v18, v19);
    if ( v46 )
      return (unsigned __int8)sub_19C4170(
                                v11,
                                a2,
                                *a3 & 0xFFFFFFFFFFFFFFFELL,
                                *(__int64 *)v458,
                                v392,
                                (__int64)a6,
                                *(double *)a7.m128_u64,
                                a10,
                                a11) != 0;
    goto LABEL_38;
  }
  v46 = (__int64)sub_F63240(*(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL), (__int64)p_src, v48, v49, v50, v51);
  if ( v46 )
    return (unsigned __int8)sub_19C4170(
                              v11,
                              a2,
                              *a3 & 0xFFFFFFFFFFFFFFFELL,
                              *(__int64 *)v458,
                              v392,
                              (__int64)a6,
                              *(double *)a7.m128_u64,
                              a10,
                              a11) != 0;
LABEL_38:
  v52 = *(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v52 + 17) & 4) != 0 )
  {
    *(_DWORD *)a2 = 1;
    return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v52 + 16) - 35 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1 )
    {
      v52 = sub_F63050(*(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL), p_src, v42, v43);
      if ( v52 )
        goto LABEL_40;
      v52 = *(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
    }
    if ( !*v14 )
    {
      if ( *(_BYTE *)(v52 + 16) == 34 )
        goto LABEL_109;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
      {
        v52 = sub_F63050(v52, p_src, v42, v43);
        if ( v52 )
        {
LABEL_109:
          v102 = *a6;
          if ( *((_QWORD *)a6 + 1) )
          {
            sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v102, 0x1319u, 0);
            v472[0] = 0;
            v103 = sub_1587D10((__int64)v487, v472);
            if ( *(_BYTE *)(v103 + 120) )
            {
              sub_AE9DF0((unsigned __int8 **)(v103 + 32), *((_QWORD *)a6 + 1), 0xBu);
            }
            else if ( *(_BYTE *)(v103 + 132) )
            {
              v437 = *((void **)a6 + 1);
              v193 = sub_168B9E0((_QWORD *)v103);
              v196 = (__int64)v437;
              v197 = v193;
              v198 = *(_QWORD **)(v103 + 16);
              if ( v198 )
              {
                *(_QWORD *)v446 = v197;
                v198 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, void *))(*v198 + 32LL))(
                                   v198,
                                   *v198,
                                   v197,
                                   v437);
                v197 = *(_QWORD *)v446;
                v196 = (__int64)v437;
              }
              v447 = v196;
              src = v198;
              v199 = sub_1587BC0(v197, (__int64 *)&src, v197, v196, v194, v195);
              sub_AE9DF0((unsigned __int8 **)(*v199 + 32LL * *(unsigned int *)(v103 + 128) + 8), v447, 0xBu);
            }
            v479 = v481;
            v104 = *(void **)a6;
            *(_QWORD *)((char *)&n + 4) = 0;
            BYTE12(n) = 0;
            *(_QWORD *)v480 = 0;
            LOBYTE(v481[0]) = 0;
            LOBYTE(v482) = 0;
            src = v104;
            LOBYTE(n) = 1;
            sub_1589170(v103, &src);
            if ( v479 != v481 )
              operator delete(v479);
            sub_15F7200(v487);
            *(_QWORD *)a6 = 0;
            *((_QWORD *)a6 + 1) = 0;
            a6[6] = 0;
          }
          p_src = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
          v105 = sub_19146F0(v11, p_src, v102, v43, v44, v45, a7, a8);
          *a3 = v105;
          if ( v105 == 1 )
            return 1;
          if ( (v459[0] & 7) != 0 )
          {
            v421 = 0;
            v109 = 0;
          }
          else
          {
            v109 = *(_QWORD *)v459 & 0xFFFFFFFFFFFFFFF8LL;
            v421 = *(_QWORD *)v459 & 0xFFFFFFFFFFFFFFF8LL;
          }
          v110 = *(_QWORD *)(*(_QWORD *)(v52 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v111 = (unsigned int)*(unsigned __int8 *)(v110 + 16) - 35;
          if ( (unsigned int)v111 > 1 )
            v110 = sub_F63050(v110, p_src, v111, v106);
          v112 = *(_QWORD *)(v110 + 24);
          v113 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v112 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v113 + 16) != 13 || ((*(_WORD *)(v113 + 18) >> 3) & 0x1FF) != 0x1E9 )
          {
            v114 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v112 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v114 + 16) != 13 || ((*(_WORD *)(v114 + 18) >> 3) & 0x1FF) != 0x1EA )
              return sub_19D9460(
                       *(_QWORD *)(v11 + 736),
                       v52,
                       (unsigned int)*a3 & 0xFFFFFFFE,
                       v392,
                       v459[0],
                       v457,
                       0,
                       0,
                       0);
            v239 = sub_15F1670(v11);
            if ( v239 )
            {
              *(_QWORD *)v472 = v109 | 1;
              v240 = sub_BA85D0(v239);
              if ( v240 )
              {
                v241 = sub_BAD910(v240, *(__int64 *)v472, 0, 0, 1, 0);
                v245 = v241;
                if ( v241 )
                {
                  if ( (unsigned __int8)sub_18F5260(
                                          v11,
                                          v241,
                                          (int *)&v457,
                                          1u,
                                          0,
                                          0,
                                          (__m128i)a7,
                                          *(double *)a8.m128_u64,
                                          0,
                                          0,
                                          0) )
                    return 1;
                }
                else
                {
                  v245 = sub_BADBA0(v240, (__int64)v472, 0, v242, v243, v244);
                }
                src = (void *)sub_FE87C0(*(_QWORD *)(v11 + 240) + 552LL, *(_QWORD *)(v11 + 240) + 680LL, v421);
                v249 = sub_BAD910(v240, (__int64)src, 0, 0, 1, 0);
                if ( v249 || (v249 = sub_BADBA0(v240, (__int64)&src, 0, v246, v247, v248)) != 0 )
                {
                  v250 = sub_18F5260(v11, v249, (int *)&v457, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
                  result = 1;
                  if ( v250 )
                    return result;
                  goto LABEL_295;
                }
                if ( v245 )
                {
LABEL_295:
                  v251 = *(_QWORD **)(v11 + 248);
                  v252 = v457;
                  v253 = *a3 & 0xFFFFFFFFFFFFFFFELL;
                  v394 = v251[2390];
                  v254 = sub_EEE9A0(48, v251, 8u);
                  sub_19C4A40(v254, v245, v249, v394, 1, 3, v252, v253);
                  return v254;
                }
LABEL_339:
                if ( !(unsigned __int8)sub_19C4590(
                                         v11,
                                         a3,
                                         *(double *)a7.m128_u64,
                                         *(double *)a8.m128_u64,
                                         v228,
                                         v229,
                                         v230,
                                         v231) )
                  goto LABEL_340;
                return sub_19C7D40(v11, a2, (_DWORD)a3, (_DWORD)v14, v392, (_DWORD)a6, a9, (unsigned __int8)a10, a11);
              }
            }
            else
            {
LABEL_101:
              p_src = a3;
              if ( (unsigned __int8)sub_19C4590(
                                      v11,
                                      a3,
                                      *(double *)a7.m128_u64,
                                      *(double *)a8.m128_u64,
                                      v21,
                                      v17,
                                      v44,
                                      v45) )
                return sub_19C7D40(v11, a2, (_DWORD)a3, (_DWORD)v14, v392, (_DWORD)a6, a9, (unsigned __int8)a10, a11);
            }
LABEL_102:
            v24 = *(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
            goto LABEL_78;
          }
          v226 = *(_QWORD *)(v11 + 248);
          src = (void *)(v109 | 1);
          v227 = sub_19C5A80(v52, v421, (__int64 *)&src, v226, v107, v108);
          v232 = v227;
          if ( v227 )
          {
            v233 = *(_BYTE *)(v227 + 28) & 0x7F;
            if ( v233 == 75 )
            {
              if ( (unsigned __int8)sub_18F5260(
                                      v11,
                                      v232,
                                      (int *)&v457,
                                      1u,
                                      0,
                                      0,
                                      (__m128i)a7,
                                      *(double *)a8.m128_u64,
                                      0,
                                      0,
                                      0) )
                return 1;
              v234 = *(_QWORD **)(v11 + 248);
              v235 = v457;
              v236 = *a3;
              v237 = v234[2390];
              v177 = sub_EEE9A0(48, v234, 8u);
              *(_WORD *)v177 = *(_WORD *)v177 & 0xFE00 | 0x20;
              if ( unk_2CD7484 )
                sub_EE9B50(32);
              v238 = *(_WORD *)(v177 + 1);
              *(_QWORD *)(v177 + 8) = v237;
              *(_QWORD *)(v177 + 16) = v232 & 0xFFFFFFFFFFFFFFFBLL;
              *(_QWORD *)(v177 + 24) = 0;
              *(_DWORD *)(v177 + 32) = v235;
              *(_WORD *)(v177 + 1) = v238 & 0xF801 | 0x1A;
              *(_DWORD *)(v177 + 36) = 0;
              *(_QWORD *)(v177 + 40) = v236 & 0xFFFFFFFFFFFFFFF8LL;
              v179 = sub_B63A40(v177);
              goto LABEL_225;
            }
            if ( v233 == 18 )
            {
              v276 = sub_FE87C0(*(_QWORD *)(v11 + 240) + 552LL, *(_QWORD *)(v11 + 240) + 680LL, v421);
              v277 = *(_QWORD *)(v11 + 248);
              *(_QWORD *)v487 = v276;
              v280 = sub_19C5A80(v52, 0, (__int64 *)v487, v277, v278, v279);
              v281 = v280;
              if ( v280 && (*(_BYTE *)(v280 + 28) & 0x7F) != 0x12 )
                v281 = 0;
              v282 = *(_QWORD **)(v11 + 248);
              v283 = v282[2390];
              v284 = *a3 & 0xFFFFFFFFFFFFFFFELL;
              v254 = sub_EEE9A0(48, v282, 8u);
              sub_19C4A40(v254, v232, v281, v283, 1, 3, v457, v284);
              return v254;
            }
          }
          if ( !*v14 )
          {
LABEL_340:
            sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v457, 0x12F7u, 0);
            v275 = sub_17B3DD0((__int64)v487, (__int64 *)v459);
            sub_1605D30(v275, (__int64 *)v458);
            sub_15F7200(v487);
            return 1;
          }
          goto LABEL_339;
        }
        v52 = *(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
    p_src = *(_QWORD **)(v11 + 248);
    v128 = sub_F579D0(v52, (__int64)p_src);
    if ( v128 )
    {
      sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), *(_DWORD *)(a2 + 128), 0xED8u, 0);
      v138 = sub_17B3DD0((__int64)v487, (__int64 *)v459);
      if ( (*a3 & 0xFFFFFFFFFFFFFFFELL) != 0 )
        src = (void *)sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v459, *(double *)a7.m128_u64);
      else
        src = nullptr;
      sub_1587DB0(v138, (__int64 *)&src);
      sub_15F7200(v487);
      return 1;
    }
    v129 = *(_QWORD *)v458;
    v17 = (unsigned __int8)*v14;
    v24 = *(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v130 = *(_BYTE *)(v21 + 16);
    if ( v130 != 58 )
    {
      if ( (_BYTE)v17 == 1 && v130 == 13 )
      {
        if ( ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) != 0x1EB )
        {
          v88 = (__int64 *)(v11 + 8);
          v89 = (unsigned __int8 (__fastcall *)(__int64))sub_19C4530;
LABEL_81:
          v431 = v89;
          sub_168B9B0((__int64)v487, (__int64)v88, 4157);
          v90 = sub_16085E0(v11, a3, (__int64)v487, 0, v431, (__m128i)a7, *(double *)a8.m128_u64);
          v95 = *(_QWORD *)v487;
          v96 = v90;
          if ( *(_QWORD *)v487 && *(_QWORD *)v488 )
            sub_1580C40(*(unsigned __int64 *)v488, *(unsigned __int64 *)v487);
          if ( v96 )
          {
            if ( *a3 == 1 )
              return 1;
            *a3 = sub_190ABA0(v11, (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL), 1, v92, v93, v94, (__m128i)a7, a8);
            return sub_19C7D40(v11, a2, (_DWORD)a3, (_DWORD)v14, v392, (_DWORD)a6, a9, (unsigned __int8)a10, a11);
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v11 + 232) + 89LL) & 1) == 0 )
          {
LABEL_137:
            sub_168B9F0((__int64)v487, v88, v392, 0x14AEu, 0);
            v125 = sub_1605D30((__int64)v487, (__int64 *)v458);
            *(_QWORD *)v472 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v458, *(double *)a7.m128_u64);
            v126 = sub_1587DB0(v125, (__int64 *)v472);
            v127 = v126;
            if ( *(_BYTE *)(v126 + 120) )
            {
              LOBYTE(n) = 1;
              LODWORD(src) = v457;
              HIDWORD(src) = v457;
              sub_AEC610((__int64 *)(v126 + 32), (__int64 *)&src);
            }
            else if ( *(_BYTE *)(v126 + 132) )
            {
              v164 = sub_168B9E0((_QWORD *)v126);
              v167 = *(_QWORD *)(v127 + 16);
              if ( v167 )
                v167 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v167 + 32LL))(*(_QWORD *)(v127 + 16));
              *(_QWORD *)v466 = v167;
              v168 = *sub_1587BC0(v164, (__int64 *)v466, v162, v163, v165, v166) + 32LL * *(unsigned int *)(v127 + 128);
              LOBYTE(n) = 1;
              LODWORD(src) = v457;
              HIDWORD(src) = v457;
              sub_AEC610((__int64 *)(v168 + 8), (__int64 *)&src);
            }
            sub_15F7200(v487);
            return 1;
          }
          v123 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v458 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          v124 = *(unsigned __int8 *)(v123 + 16);
          if ( (_BYTE)v124 == 13 )
          {
            if ( (((*(_WORD *)(v123 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
              goto LABEL_137;
          }
          else if ( (_BYTE)v124 == 47 )
          {
            v145 = sub_F60F10(v123, v95, v91, v92, v93, v94);
            if ( (*((_BYTE *)v145 + 74) & 1) == 0 && (v145[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              goto LABEL_137;
          }
          else
          {
            if ( (unsigned __int8)v124 > 0x2Au )
              goto LABEL_137;
            v143 = 0x40600004C00LL;
            if ( !_bittest64(&v143, v124) )
              goto LABEL_137;
          }
          v144 = sub_A76A60(*(_QWORD *)(v11 + 248), *(__int64 *)v458, 1u);
          v137 = sub_160A600(
                   v11,
                   *a3 & 0xFFFFFFFFFFFFFFFELL,
                   v144,
                   0x1Au,
                   (*(_BYTE *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3,
                   0,
                   *(double *)a7.m128_u64,
                   *(double *)a8.m128_u64,
                   0);
LABEL_157:
          *a3 = v137;
          return sub_19C7D40(v11, a2, (_DWORD)a3, (_DWORD)v14, v392, (_DWORD)a6, a9, (unsigned __int8)a10, a11);
        }
        v131 = *(_QWORD **)(v11 + 248);
        v132 = v131[192];
        if ( (v132 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          v132 = sub_19C4A10(v131);
        v133 = *(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v133 + 16) != 42
          && ((v321 = *(_QWORD *)(*(_QWORD *)(v133 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v321 + 16) != 42)
           || (v133 = sub_F63050(v133, p_src, v321, v17)) == 0)
          || (v134 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v133 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL),
              *(_BYTE *)(v134 + 16) != 13)
          || ((*(_WORD *)(v134 + 18) >> 3) & 0x1FF) != 0x1EB )
        {
          v135 = *(_QWORD **)(v11 + 248);
          v136 = v135[192];
          if ( (v136 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            v136 = sub_19C4A10(v135);
          v137 = sub_160A600(
                   v11,
                   *a3 & 0xFFFFFFFFFFFFFFFELL,
                   v136,
                   1u,
                   0,
                   0,
                   *(double *)a7.m128_u64,
                   *(double *)a8.m128_u64,
                   0);
          goto LABEL_157;
        }
        goto LABEL_102;
      }
LABEL_78:
      if ( *(_BYTE *)(v24 + 16) == 42
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
        && (v24 = sub_F63050(v24, p_src, v21, v17)) != 0 )
      {
        v88 = (__int64 *)(v11 + 8);
        if ( *v14 )
        {
          v89 = (unsigned __int8 (__fastcall *)(__int64))sub_19C4530;
        }
        else
        {
          v89 = (unsigned __int8 (__fastcall *)(__int64))sub_19C4020;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 48
            && (v459[0] & 7) != 4 )
          {
            sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v392, 0x14AFu, 0);
            v139 = sub_1605D30((__int64)v487, (__int64 *)v458);
            LODWORD(v464) = (unsigned __int8)*v14;
            v140 = sub_1587D10(v139, (int *)&v464);
            *(_QWORD *)v466 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v464, *(double *)a7.m128_u64);
            v141 = sub_1587DB0(v140, (__int64 *)v466);
            LOBYTE(v472[2]) = 1;
            v472[0] = v392;
            v472[1] = v392;
            sub_19C4820((__int64)&src, *(__int64 *)v472, 1, "->", 2);
            sub_1589170(v141, &src);
            if ( v479 != v481 )
              operator delete(v479);
            sub_15F7200(v487);
            sub_1DBADC0(v11);
            if ( !v142 )
            {
              *v14 = 1;
              return sub_19C7D40(v11, a2, (_DWORD)a3, (_DWORD)v14, v392, (_DWORD)a6, a9, (unsigned __int8)a10, a11);
            }
            return 1;
          }
        }
      }
      else
      {
        v89 = (unsigned __int8 (__fastcall *)(__int64))sub_19C4530;
        v88 = (__int64 *)(v11 + 8);
        if ( !*v14 )
          v89 = (unsigned __int8 (__fastcall *)(__int64))sub_19C4020;
      }
      goto LABEL_81;
    }
    v400 = 1;
    if ( (v459[0] & 7) == 0 )
      v46 = *(_QWORD *)v459 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !(_BYTE)v17 )
      v400 = (*(_BYTE *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3;
    v414 = v457;
    if ( *(_BYTE *)(v24 + 16) != 58 )
    {
      v422 = *(_QWORD *)v458;
      v146 = sub_F63050(v24, p_src, *(_QWORD *)v459 & 0xFFFFFFFFFFFFFFF8LL, v17);
      v128 = 0;
      v129 = v422;
      v24 = v146;
    }
    v147 = *(int **)(v46 + 16);
    v148 = *((_BYTE *)v147 + 16);
    v149 = (char *)(v147 + 4);
    if ( (v148 & 0xDF) == 0x53 && *((_BYTE *)v147 + 17) )
    {
      *(_OWORD *)v472 = 0;
      if ( !strcmp((const char *)v147 + 16, "hi")
        || (v444 = v148, v435 = v128, *(_QWORD *)v423 = v129, !strcmp((const char *)v147 + 16, "lo")) )
      {
        v151 = (unsigned int)(*(_DWORD *)(v24 + 20) + 1) >> 1;
        goto LABEL_198;
      }
      v129 = *(_QWORD *)v423;
      v128 = v435;
      v150 = 1;
      v148 = v444;
    }
    else
    {
      *(_OWORD *)v472 = 0;
      if ( !strcmp((const char *)v147 + 16, "hi") || !strcmp((const char *)v147 + 16, "lo") )
      {
        v151 = (unsigned int)(*(_DWORD *)(v24 + 20) + 1) >> 1;
        goto LABEL_217;
      }
      v150 = 0;
    }
    v452 = v148;
    v445 = v128;
    v436 = (void *)v129;
    if ( strcmp((const char *)v147 + 16, "even") )
    {
      v425 = v150;
      v288 = strcmp((const char *)v147 + 16, "odd");
      v150 = v425;
      if ( v288 )
      {
        v289 = v436;
        v290 = v445;
        if ( v425 )
        {
          v149 = (char *)v147 + 17;
          goto LABEL_360;
        }
        v339 = v452 - 97;
        if ( (unsigned __int8)(v452 - 97) <= 0x19u )
        {
          v340 = dword_2646840[v339];
          if ( (_DWORD)v340 != -1 )
          {
            v341 = 0;
            if ( v339 <= 0x11u )
              v341 = ((1LL << v339) & 0x20043) != 0;
            v290 = 0;
            do
            {
              v342 = 0;
              if ( (unsigned __int8)(*v149 - 97) <= 0x11u )
                v342 = ((1LL << (*v149 - 97)) & 0x20043) != 0;
              if ( v341 == v342 )
              {
                v343 = *((_BYTE *)v472 + v340);
                *((_BYTE *)v472 + v340) = 1;
                if ( v343 )
                  v290 = v343;
                v300 = *++v149;
                if ( *v149 )
                  goto LABEL_439;
              }
              if ( v341 )
                goto LABEL_442;
              v300 = *v149;
              if ( !*v149 )
                goto LABEL_367;
              goto LABEL_382;
LABEL_439:
              if ( (unsigned __int8)(v300 - 97) > 0x19u )
                break;
              v340 = dword_2646840[(unsigned __int8)(v300 - 97)];
            }
            while ( (_DWORD)v340 != -1 );
            if ( v341 )
            {
LABEL_442:
              v344 = *(_QWORD *)(v11 + 232);
              if ( (*(_BYTE *)(v344 + 47) & 0x20) == 0 )
                goto LABEL_443;
              v441 = v290;
              *(_QWORD *)v428 = v289;
              v380 = sub_FEAA90(v344);
              v289 = *(void **)v428;
              v290 = v441;
              if ( v380 <= 0x12B )
              {
                *(_QWORD *)v427 = v149;
                v149 = (char *)(*(_QWORD *)(v46 + 16) + 16LL);
                goto LABEL_466;
              }
              goto LABEL_467;
            }
LABEL_382:
            v301 = v300 - 97;
            if ( v301 > 0x11u )
              goto LABEL_385;
            if ( ((1LL << v301) & 0x20043) == 0 )
              goto LABEL_385;
            v302 = *(_QWORD *)(v11 + 232);
            if ( (*(_BYTE *)(v302 + 47) & 0x20) == 0 )
              goto LABEL_385;
            v439 = v290;
            *(_QWORD *)v426 = v289;
            v357 = sub_FEAA90(v302);
            v289 = *(void **)v426;
            v290 = v439;
            if ( v357 <= 0x12B )
            {
              *(_QWORD *)v427 = v149;
LABEL_466:
              v448 = v290;
              v440 = v289;
              sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v392, 0x1605u, 0);
              src = v149;
              *(_QWORD *)&n = 1;
              v358 = sub_166BAF0((__int64)v487, (__int64)&src);
              v466[0] = v414;
              v466[1] = v414;
              sub_1587DB0(v358, (__int64 *)v466);
              sub_15F7200(v487);
              v149 = *(char **)v427;
              v147 = *(int **)(v46 + 16);
              v289 = v440;
              v290 = v448;
              goto LABEL_443;
            }
LABEL_467:
            v147 = *(int **)(v46 + 16);
LABEL_443:
            v291 = *v149;
            if ( !*v149 )
              goto LABEL_367;
LABEL_386:
            BYTE1(v464) = v291;
            LOBYTE(v464) = 39;
            BYTE2(v464) = 39;
            sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v392 + (_DWORD)v149 - (_DWORD)v147 - 15, 0xED8u, 0);
            if ( (_BYTE)v502 )
            {
              if ( !v491 )
              {
                v346 = v492;
                v347 = *(_DWORD *)(v492 + 14976);
                if ( v347 )
                {
                  v386 = (unsigned int)(v347 - 1);
                  *(_DWORD *)(v492 + 14976) = v386;
                  v348 = *(_QWORD *)(v346 + 8 * v386 + 14848);
                  v387 = *(unsigned int *)(v348 + 536);
                  *(_BYTE *)v348 = 0;
                  v388 = *(_QWORD *)(v348 + 528);
                  *(_DWORD *)(v348 + 424) = 0;
                  v389 = v388 + (v387 << 6);
                  while ( v388 != v389 )
                  {
                    v389 -= 64;
                    v390 = *(void **)(v389 + 24);
                    if ( v390 != (void *)(v389 + 40) )
                      operator delete(v390);
                  }
                  *(_DWORD *)(v348 + 536) = 0;
                }
                else
                {
                  v348 = operator new(0x3A0u);
                  *(_BYTE *)v348 = 0;
                  v349 = v348 + 96;
                  do
                  {
                    v350 = v349 + 16;
                    *(_QWORD *)(v349 + 8) = 0;
                    v349 += 32;
                    *(_QWORD *)(v349 - 32) = v350;
                    *(_BYTE *)(v349 - 16) = 0;
                  }
                  while ( v348 + 416 != v349 );
                  *(_QWORD *)(v348 + 416) = v348 + 432;
                  *(_QWORD *)(v348 + 424) = 0x800000000LL;
                  *(_QWORD *)(v348 + 528) = v348 + 544;
                  *(_QWORD *)(v348 + 536) = 0x600000000LL;
                }
                v491 = (unsigned __int8 *)v348;
              }
              v491[*v491 + 1] = 0;
              src = (char *)&n + 8;
              v311 = v491;
              WORD4(n) = v464;
              *(_QWORD *)&n = 3;
              WORD5(n) = BYTE2(v464);
            }
            else
            {
              if ( !BYTE4(v503) )
              {
LABEL_374:
                LODWORD(src) = v414;
                HIDWORD(src) = v414;
                sub_1587DB0((__int64)v487, (__int64 *)&src);
                sub_15F7200(v487);
                return 1;
              }
              v305 = sub_168B9E0(v487);
              v308 = v489;
              if ( v489 )
                v308 = (void *)(*(__int64 (__fastcall **)(void *, double))(*(_QWORD *)v489 + 32LL))(v489, 0.0);
              *(_QWORD *)v466 = v308;
              v309 = sub_1587BC0(v305, (__int64 *)v466, v303, v304, v306, v307);
              v310 = *v309 + 32LL * (unsigned int)v503;
              if ( !*(_QWORD *)(v310 + 8) )
              {
                v365 = *(_QWORD *)(v310 + 16);
                v366 = *(_DWORD *)(v365 + 14976);
                if ( v366 )
                {
                  v381 = (unsigned int)(v366 - 1);
                  *(_DWORD *)(v365 + 14976) = v381;
                  v367 = *(_QWORD *)(v365 + 8 * v381 + 14848);
                  v382 = *(unsigned int *)(v367 + 536);
                  *(_BYTE *)v367 = 0;
                  v383 = *(_QWORD *)(v367 + 528);
                  *(_DWORD *)(v367 + 424) = 0;
                  v384 = v383 + (v382 << 6);
                  while ( v383 != v384 )
                  {
                    v384 -= 64;
                    v385 = *(void **)(v384 + 24);
                    if ( v385 != (void *)(v384 + 40) )
                      operator delete(v385);
                  }
                  *(_DWORD *)(v367 + 536) = 0;
                }
                else
                {
                  v367 = operator new(0x3A0u);
                  *(_BYTE *)v367 = 0;
                  v368 = v367 + 96;
                  do
                  {
                    v369 = v368 + 16;
                    *(_QWORD *)(v368 + 8) = 0;
                    v368 += 32;
                    *(_QWORD *)(v368 - 32) = v369;
                    *(_BYTE *)(v368 - 16) = 0;
                  }
                  while ( v367 + 416 != v368 );
                  *(_QWORD *)(v367 + 416) = v367 + 432;
                  *(_QWORD *)(v367 + 424) = 0x800000000LL;
                  *(_QWORD *)(v367 + 528) = v367 + 544;
                  *(_QWORD *)(v367 + 536) = 0x600000000LL;
                }
                *(_QWORD *)(v310 + 8) = v367;
              }
              *(_BYTE *)(*(_QWORD *)(v310 + 8) + **(unsigned __int8 **)(v310 + 8) + 1LL) = 0;
              src = (char *)&n + 8;
              WORD4(n) = v464;
              *(_QWORD *)&n = 3;
              WORD5(n) = BYTE2(v464);
              v311 = *(unsigned __int8 **)(v310 + 8);
            }
            v312 = *v311;
            *v311 = v312 + 1;
            v313 = (unsigned __int8)v312;
            v314 = 32 * (v312 + 3);
            v315 = &v311[v314];
            v316 = *(unsigned __int8 **)&v311[v314];
            if ( src == (char *)&n + 8 )
            {
              v345 = n;
              if ( (_QWORD)n )
              {
                if ( (_QWORD)n == 1 )
                  *v316 = BYTE8(n);
                else
                  memcpy(v316, src, n);
                v316 = *(unsigned __int8 **)v315;
                v345 = n;
              }
              *((_QWORD *)v315 + 1) = v345;
              v316[v345] = 0;
              goto LABEL_396;
            }
            if ( v316 == &v311[v314 + 16] )
            {
              *(_QWORD *)v315 = src;
              *(_OWORD *)(v315 + 8) = n;
            }
            else
            {
              v317 = *(_QWORD *)&v311[32 * v313 + 112];
              *(_QWORD *)v315 = src;
              *(_OWORD *)(v315 + 8) = n;
              if ( v316 )
              {
                src = v316;
                *((_QWORD *)&n + 1) = v317;
                goto LABEL_396;
              }
            }
            src = (char *)&n + 8;
LABEL_396:
            *(_QWORD *)&n = 0;
            *(_BYTE *)src = 0;
            if ( src != (char *)&n + 8 )
              operator delete(src);
            goto LABEL_374;
          }
        }
LABEL_360:
        while ( 1 )
        {
          v291 = *v149;
          if ( (unsigned __int8)(*v149 - 48) > 0x36u )
            break;
          v292 = byte_2646800[(unsigned __int8)(*v149 - 48)];
          if ( (_DWORD)v292 == -1 )
          {
LABEL_385:
            v291 = *v149;
            goto LABEL_386;
          }
          v293 = *((_BYTE *)v472 + v292);
          *((_BYTE *)v472 + v292) = 1;
          if ( v293 )
            v290 = v293;
          ++v149;
        }
        if ( v291 )
          goto LABEL_386;
        v294 = (char *)v147 + 17;
        if ( v425 )
        {
          while ( *v294 )
          {
            v298 = *v294++ - 48;
            if ( v298 <= 0x36u )
            {
              v299 = byte_2646800[v298];
              if ( v299 != -1 && v299 < *(_DWORD *)(v24 + 20) )
                continue;
            }
LABEL_372:
            v410 = (__int64)v289;
            sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v392, 0xED7u, 0);
            if ( (_BYTE)v502 )
            {
              sub_AE9DF0(&v491, v410, 8u);
            }
            else if ( BYTE4(v503) )
            {
              v323 = sub_168B9E0(v487);
              v328 = v410;
              v329 = v323;
              v330 = v489;
              if ( v489 )
              {
                v330 = (void *)(*(__int64 (__fastcall **)(void *, double))(*(_QWORD *)v489 + 32LL))(v489, 0.0);
                v328 = v410;
              }
              v411 = v328;
              src = v330;
              v331 = sub_1587BC0(v329, (__int64 *)&src, v324, v325, v326, v327);
              sub_AE9DF0((unsigned __int8 **)(*v331 + 32LL * (unsigned int)v503 + 8), v411, 8u);
            }
            goto LABEL_374;
          }
          v379 = *v147;
          if ( (*(_BYTE *)(*(_QWORD *)(v11 + 232) + 47LL) & 0x20) == 0
            || ((v379 - 9) & 0xFFFFFFF7) == 0
            || (unsigned int)(v379 - 2) <= 3 )
          {
            v151 = v379 - 1;
            goto LABEL_488;
          }
          v151 = v379 - 1;
          goto LABEL_481;
        }
LABEL_367:
        v295 = v147 + 4;
        while ( *v295 )
        {
          v296 = *v295++ - 97;
          if ( v296 <= 0x19u )
          {
            v297 = dword_2646840[v296];
            if ( v297 != -1 && v297 < *(_DWORD *)(v24 + 20) )
              continue;
          }
          goto LABEL_372;
        }
        v370 = *(_QWORD *)v147;
        v151 = *(_QWORD *)v147;
        if ( (*(_BYTE *)(*(_QWORD *)(v11 + 232) + 47LL) & 0x20) != 0
          && (((_DWORD)v370 - 8) & 0xFFFFFFF7) != 0
          && (unsigned int)(v370 - 1) > 3 )
        {
LABEL_481:
          sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v392, 0x1249u, 0);
          if ( (_BYTE)v502 )
          {
            sub_AE9DF0(&v491, v151, 3u);
          }
          else if ( BYTE4(v503) )
          {
            v373 = sub_168B9E0(v487);
            v376 = v489;
            if ( v489 )
              v376 = (void *)(*(__int64 (__fastcall **)(void *, double))(*(_QWORD *)v489 + 32LL))(v489, 0.0);
            src = v376;
            v377 = sub_1587BC0(v373, (__int64 *)&src, v371, v372, v374, v375);
            sub_AE9DF0((unsigned __int8 **)(*v377 + 32LL * (unsigned int)v503 + 8), v151, 3u);
          }
          goto LABEL_374;
        }
LABEL_488:
        if ( v151 != 1 )
        {
          v378 = 0;
          if ( !v290 )
            v378 = v400;
          v400 = v378;
LABEL_199:
          v152 = sub_A76A60(*(_QWORD *)(v11 + 248), *(_QWORD *)(v24 + 32), v151);
          v153 = *(_QWORD *)(v11 + 552);
          v154 = v152;
          if ( v153 )
            (*(void (__fastcall **)(__int64, __int64, double))(*(_QWORD *)v153 + 328LL))(v153, v11 + 3224, 0.0);
          v155 = *(_DWORD *)(v11 + 3264);
          v156 = -*(_DWORD *)(v11 + 3232);
          v157 = v156;
          if ( v155 == v156 )
          {
LABEL_402:
            v169 = v154;
          }
          else
          {
            while ( 1 )
            {
              v158 = v156 >= 0
                   ? *(_QWORD *)(v11 + 3256) + 8 * v157
                   : *(_QWORD *)(v11 + 3224) + 8 * (v157 + *(unsigned int *)(v11 + 3232));
              v159 = *(_QWORD *)(*(_QWORD *)v158 + 80LL);
              v160 = (_QWORD *)(v159 & 0xFFFFFFFFFFFFFFF8LL);
              v161 = (v159 & 4) != 0 ? v160[1] : *v160;
              if ( v161 == v154 )
                break;
              ++v156;
              ++v157;
              if ( v155 == v156 )
                goto LABEL_402;
            }
            if ( v156 < 0 )
              v318 = (__int64 *)(*(_QWORD *)(v11 + 3224) + 8 * (*(unsigned int *)(v11 + 3232) + v157));
            else
              v318 = (__int64 *)(*(_QWORD *)(v11 + 3256) + 8 * v157);
            v169 = sub_A70A40(*(_QWORD *)(v11 + 248), *v318, 0);
          }
          goto LABEL_219;
        }
LABEL_218:
        v169 = *(_QWORD *)(v24 + 32);
LABEL_219:
        if ( (v169 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 1;
        v170 = *(_QWORD **)(v11 + 248);
        v171 = *a3 & 0xFFFFFFFFFFFFFFFELL;
        v172 = *(_QWORD *)&byte_8[*(_QWORD *)(v171 + 8) & 0xFFFFFFFFFFFFFFF0LL];
        v173 = v172 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v172 | (unsigned __int8)*(_QWORD *)(v171 + 8)) & 7;
        v174 = v169 & 7;
        v175 = v173 & 7;
        if ( (v173 & 8) != 0
          && (v175 |= *(__int64 *)((char *)&qword_18 + (v173 & 0xFFFFFFFFFFFFFFF0LL)), (v175 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
        {
          v256 = v175 | v174;
          v257 = v169 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (v169 & 8) != 0 )
          {
            v257 = *(_QWORD *)(v169 & 0xFFFFFFFFFFFFFFF0LL);
            v256 |= *(__int64 *)((char *)&qword_18 + (v169 & 0xFFFFFFFFFFFFFFF0LL));
          }
          v258 = sub_A70C40((__int64)v170, v257, v256);
          v170 = *(_QWORD **)(v11 + 248);
          v393 = v258;
          v171 = *a3 & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          v393 = (unsigned int)v174 | (unsigned int)v175 | v169 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v176 = v457;
        v177 = sub_EEE9A0(40, v170, 8u);
        *(_WORD *)v177 = *(_WORD *)v177 & 0xFE00 | 0x40;
        if ( unk_2CD7484 )
          sub_EE9B50(64);
        *(_BYTE *)(v177 + 2) &= 0xF8u;
        *(_QWORD *)(v177 + 16) = v171;
        *(_QWORD *)(v177 + 24) = v46;
        v178 = *(_BYTE *)(v177 + 1);
        *(_DWORD *)(v177 + 32) = v176;
        *(_BYTE *)(v177 + 1) = (16 * (v400 != 0)) | (2 * (v400 & 3)) | v178 & 1;
        *(_QWORD *)(v177 + 8) = v393;
        v179 = sub_B631B0(v177);
LABEL_225:
        *(_BYTE *)(v177 + 1) = (v179 << 6) | *(_BYTE *)(v177 + 1) & 0x3F;
        *(_BYTE *)(v177 + 2) = *(_BYTE *)(v177 + 2) & 0xF8 | (v179 >> 2) & 7;
        return v177;
      }
    }
    v151 = (unsigned int)(*(_DWORD *)(v24 + 20) + 1) >> 1;
    if ( v150 )
    {
LABEL_198:
      if ( --v151 != 1 )
        goto LABEL_199;
      goto LABEL_218;
    }
LABEL_217:
    if ( v151 != 1 )
      goto LABEL_199;
    goto LABEL_218;
  }
LABEL_40:
  v17 = (__int64)a6;
  if ( *((_QWORD *)a6 + 1) )
  {
    sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), *a6, 0x1319u, 0);
    v472[0] = 1;
    v53 = sub_1587D10((__int64)v487, v472);
    if ( *(_BYTE *)(v53 + 120) )
    {
      v434 = (void *)v53;
      sub_AE9DF0((unsigned __int8 **)(v53 + 32), *((_QWORD *)a6 + 1), 0xBu);
      v53 = (__int64)v434;
    }
    else if ( *(_BYTE *)(v53 + 132) )
    {
      *(_QWORD *)v443 = *((_QWORD *)a6 + 1);
      v432 = (_QWORD *)v53;
      v116 = sub_168B9E0((_QWORD *)v53);
      v118 = (__int64)v432;
      v119 = *(_QWORD *)v443;
      v120 = v116;
      v121 = (_QWORD *)v432[2];
      if ( v121 )
      {
        *(_QWORD *)v450 = v120;
        v121 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD *, int *))(*v121 + 32LL))(
                           v121,
                           *v121,
                           v120,
                           v432,
                           *(int **)v443);
        v120 = *(_QWORD *)v450;
        v119 = *(_QWORD *)v443;
        v118 = (__int64)v432;
      }
      v451 = v119;
      v433 = (unsigned int *)v118;
      src = v121;
      v122 = sub_1587BC0(v120, (__int64 *)&src, v120, v118, v119, v117);
      sub_AE9DF0((unsigned __int8 **)(*v122 + 32LL * v433[32] + 8), v451, 0xBu);
      v53 = (__int64)v433;
    }
    p_src = &src;
    v479 = v481;
    v54 = *(void **)a6;
    *(_QWORD *)((char *)&n + 4) = 0;
    BYTE12(n) = 0;
    *(_QWORD *)v480 = 0;
    LOBYTE(v481[0]) = 0;
    LOBYTE(v482) = 0;
    src = v54;
    LOBYTE(n) = 1;
    sub_1589170(v53, &src);
    if ( v479 != v481 )
      operator delete(v479);
    sub_15F7200(v487);
    *(_QWORD *)a6 = 0;
    *((_QWORD *)a6 + 1) = 0;
    a6[6] = 0;
  }
  if ( (v459[0] & 7) != 0 )
  {
    v430 = nullptr;
    v449 = 0;
  }
  else
  {
    v449 = *(_QWORD *)v459 & 0xFFFFFFFFFFFFFFF8LL;
    v430 = (_QWORD *)(*(_QWORD *)v459 & 0xFFFFFFFFFFFFFFF8LL);
  }
  for ( i = *(_QWORD *)(v52 + 24); ; i = *(_QWORD *)(v56 + 24) )
  {
    v56 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    LODWORD(i) = *(unsigned __int8 *)(v56 + 16);
    v21 = (unsigned int)(i - 35);
    if ( (unsigned int)v21 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
        goto LABEL_97;
      i = sub_F63050(v56, p_src, v21, v17);
      v56 = i;
      if ( !i )
        goto LABEL_97;
      LOBYTE(i) = *(_BYTE *)(i + 16);
    }
    if ( (_BYTE)i == 36 )
      break;
  }
  v442 = (_QWORD *)sub_F62610(v56, (__int64)p_src, v21, v17, v44, v45);
  if ( v442 )
  {
    v57 = *a3;
    v488[0] = 5278;
    v489 = &src;
    src = (void *)(v57 & 0xFFFFFFFFFFFFFFFELL);
    *(_QWORD *)v487 = off_2BC64D8;
    v419 = v487;
    if ( (unsigned __int8)sub_1E63C20(v11, v392, *(_QWORD *)v458, 1, v487) )
      return 1;
    *(_QWORD *)v460 = 0;
    v61 = sub_BAE3D0((__int64)v442, (__int64)v430, (__int64 *)v460, v58, v59, v60);
    v62 = &src;
    v63 = v61;
    if ( v61 )
    {
LABEL_54:
      *(_QWORD *)v396 = v62;
      if ( *(char *)(v63 + 28) < 0 )
        return 1;
      v64 = v63;
      if ( (unsigned __int8)sub_18F5260(v11, v63, (int *)&v457, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0) )
        return 1;
      v65 = *(__int64 **)v396;
      if ( (*(_BYTE *)(v63 + 88) & 7u) - 3 <= 1 )
        goto LABEL_57;
      v262 = sub_15F1670(v11);
      v65 = *(__int64 **)v396;
      v263 = (_QWORD *)v262;
      if ( v262 )
      {
        v264 = sub_BA85D0(v262);
        v65 = *(__int64 **)v396;
        v263 = (_QWORD *)v264;
      }
      else if ( a9 )
      {
        v64 = 0;
        v322 = sub_15F1640(v11, 0);
        v65 = *(__int64 **)v396;
        if ( v322 )
        {
          if ( ((*(_BYTE *)(a9 + 28) + 107) & 0x7Fu) <= 1 )
            v263 = *(_QWORD **)(a9 + 88);
        }
      }
      v66 = *(_QWORD *)(v11 + 232);
      if ( (*(_BYTE *)(v66 + 105) & 0x40) == 0 )
      {
        v265 = *(_BYTE *)(v63 + 88) & 7;
        LOBYTE(v265) = v265 - 1;
        if ( !(_BYTE)v265 )
        {
          v266 = *(_QWORD **)v460;
          if ( *(_QWORD *)v460 )
          {
            if ( *(_QWORD **)v460 == v442 )
            {
LABEL_326:
              if ( v263 )
              {
                if ( v266 )
                {
                  if ( v266 == v263
                    || (v64 = (__int64)v266,
                        *(_QWORD *)v408 = v65,
                        v268 = sub_19C43A0(v263, v266),
                        v65 = *(__int64 **)v408,
                        v268) )
                  {
LABEL_57:
                    v66 = *(_QWORD *)(v11 + 232);
                    goto LABEL_58;
                  }
                }
              }
              goto LABEL_330;
            }
            v64 = (__int64)v442;
            *(_QWORD *)v407 = v65;
            v267 = sub_19C43A0(*(_QWORD **)v460, v442);
            v65 = *(__int64 **)v407;
            if ( v267 )
            {
              v266 = *(_QWORD **)v460;
              goto LABEL_326;
            }
          }
LABEL_330:
          v409 = v65;
          v269 = (__int64 *)(v11 + 8);
          v270 = 4841;
LABEL_331:
          sub_168B9F0((__int64)v419, v269, v457, v270, 0);
          v64 = (__int64)v409;
          src = *(void **)(v63 + 40);
          sub_15894B0((__int64)v419, v409);
          sub_15F7200(v419);
          v66 = *(_QWORD *)(v11 + 232);
          v65 = v409;
          goto LABEL_58;
        }
        if ( !v263 )
        {
LABEL_446:
          v409 = v65;
          v269 = (__int64 *)(v11 + 8);
          v270 = 4860;
          goto LABEL_331;
        }
        if ( v263 != v442 )
        {
          *(_QWORD *)v412 = v14;
          v332 = (__int64)v263;
          v333 = v65;
          while ( 1 )
          {
            *(_QWORD *)v416 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v442 + 32LL))(v442, v64, v265);
            if ( *(_QWORD *)v416 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v332 + 32LL))(v332) )
            {
LABEL_424:
              v14 = *(char **)v412;
              v65 = v333;
              goto LABEL_57;
            }
            v338 = sub_BAB630(v332, v64, v334, v335, v336, v337);
            v332 = v338;
            if ( !v338 )
              break;
            if ( (_QWORD *)v338 == v442 )
              goto LABEL_424;
          }
          v14 = *(char **)v412;
          v65 = v333;
          goto LABEL_446;
        }
      }
LABEL_58:
      if ( (*(_BYTE *)(v66 + 107) & 0x10) != 0 )
      {
        *(_QWORD *)v397 = v65;
        v67 = sub_BFBAE0(*a3 & 0xFFFFFFFFFFFFFFFELL);
        v65 = *(__int64 **)v397;
        v68 = *(_WORD *)v67 & 0x1FF;
        if ( v68 == 4 )
        {
          if ( *(_BYTE *)(v67 + 2) >> 3 != 5 )
            goto LABEL_61;
          v67 = sub_BFD550(*(_QWORD *)(v67 + 16));
          v65 = *(__int64 **)v397;
          v68 = *(_WORD *)v67 & 0x1FF;
        }
        if ( v68 == 71 )
        {
          v255 = *(_QWORD *)&byte_8[*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v255 & 8) != 0
            && (((*(__int64 *)((char *)&qword_18 + (v255 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v255 & 7)) >> 6)
              & 7) == 3 )
          {
            sub_168B9F0((__int64)v419, (__int64 *)(v11 + 8), *(_DWORD *)(v67 + 4), 0xBE8u, 0);
            sub_15F7200(v419);
LABEL_64:
            v77 = sub_BA8C20(v63, *(__int64 *)v458);
            v413 = v457;
            v399 = *a3 & 0xFFFFFFFFFFFFFFFELL;
            v78 = (_WORD *)sub_EEE9A0(48, *(_QWORD **)(v11 + 248), 8u);
            v79 = *v14;
            v80 = (__int64)v78;
            v81 = *(_BYTE *)(v63 + 68) & 1;
            *v78 = *v78 & 0xFE00 | 0x22;
            if ( unk_2CD7484 )
            {
              v424 = v79;
              sub_EE9B50(34);
              v79 = v424;
            }
            v82 = *(_WORD *)(v80 + 1);
            *(_QWORD *)(v80 + 8) = v77;
            *(_QWORD *)(v80 + 16) = v63;
            v83 = v82 & 0xF839 | 2;
            *(_WORD *)(v80 + 1) = v83;
            *(_BYTE *)(v80 + 1) = (8 * v81) | v83 & 3;
            *(_QWORD *)(v80 + 24) = v399;
            *(_DWORD *)(v80 + 32) = v413;
            *(_DWORD *)(v80 + 36) = v392;
            *(_BYTE *)(v80 + 40) = v79 & 1 | *(_BYTE *)(v80 + 40) & 0xFC;
            v84 = sub_B63A30(v80);
            *(_BYTE *)(v80 + 1) = (v84 << 6) | *(_BYTE *)(v80 + 1) & 0x3F;
            *(_BYTE *)(v80 + 2) = *(_BYTE *)(v80 + 2) & 0xF8 | (v84 >> 2) & 7;
            v87 = *(_QWORD *)&byte_8[*(_QWORD *)(v63 + 48) & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v87 & 8) != 0
              && (((*(__int64 *)((char *)&qword_18 + (v87 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v87 & 7)) >> 6)
                & 7) == 3 )
            {
              v260 = *(_DWORD *)(*(_QWORD *)(v11 + 4616) + 640LL * *(unsigned int *)(v11 + 4624) - 640);
              if ( v260 != 3
                && v260 > 1
                && (unsigned __int8)sub_FD3830(
                                      *(_QWORD *)(*(_QWORD *)(v11 + 264) + 32LL),
                                      0x1968u,
                                      v457,
                                      *(_QWORD *)(v11 + 264),
                                      v85,
                                      v86) != 1 )
              {
                v261 = *(unsigned int *)(v11 + 40);
                if ( (_DWORD)v261 )
                  v46 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v261 - 8);
                sub_19C78F0(v46, v80, 1u);
              }
            }
            return v80;
          }
        }
      }
LABEL_61:
      *(_QWORD *)v398 = v65;
      v69 = sub_15F1670(v11);
      v74 = *(__int64 **)v398;
      v75 = v69;
      if ( !v69
        || (v76 = sub_BA8080(v69, v64, v70, v71, v72, v73), (unsigned int)(v76 - 7) > 1)
        && v76 != 3
        && (v259 = sub_1A932C0(*(_QWORD *)(v11 + 736), v442, v75, v63), v74 = *(__int64 **)v398, !v259) )
      {
        v406 = v74;
        sub_168B9F0((__int64)v419, (__int64 *)(v11 + 8), v457, 0x1AC3u, 0);
        src = *(void **)(v63 + 40);
        sub_15894B0((__int64)v419, v406);
        sub_15F7200(v419);
      }
      goto LABEL_64;
    }
    a7 = 0;
    v468 = 1;
    v470 = 0;
    *(_OWORD *)v471 = 0;
    *(_QWORD *)v466 = off_2BC70B8;
    v200 = *v14;
    v467 = 16843009;
    v469 = v200;
    sub_1A6BD60((unsigned int)&src, v11, a2 + 120, 3, 0, 0, (__int64)v466, 1, (__int64)(v442 + 6), 0, 0, 1);
    if ( src )
    {
      if ( (_DWORD)v479 )
      {
        v204 = **((_QWORD **)&n + 1);
        if ( **((_QWORD **)&n + 1) )
        {
          v205 = *(_BYTE *)(v204 + 28) & 0x7F;
          if ( ((v205 + 52) & 0x7Fu) > 1 && (unsigned int)v205 - 53 > 1
            || (v204 = sub_B72ED0(**((_QWORD **)&n + 1))) != 0 )
          {
            if ( (*(_BYTE *)(v204 + 28) & 0x7F) == 0x32 )
              v63 = v204;
          }
          else
          {
            v63 = 0;
          }
        }
      }
      sub_168B9B0((__int64)v487, v11 + 8, 5293);
      sub_AE9DF0((unsigned __int8 **)v487, v442[5], 9u);
      sub_AE9DF0((unsigned __int8 **)v487, *(__int64 *)v459, 9u);
      sub_1A60AF0(
        v11,
        (int)&src,
        (int)v487,
        1,
        v206,
        v207,
        v392,
        (int)&src,
        a10,
        (int)v487,
        (int)v430,
        (int)v442,
        v449,
        v454,
        v456,
        v458[0],
        v459[0],
        v460[0],
        v461,
        SHIDWORD(v462),
        v464,
        v465,
        v466[0],
        v467,
        v471[0],
        v471[2],
        v472[0],
        v472[2],
        v473,
        (int)v474,
        v475,
        v476[0],
        v476[2],
        v476[4],
        (int)src,
        n,
        SDWORD2(n),
        (int)v479,
        v480[0],
        v481[0],
        v481[2],
        v482,
        (int)v483,
        (int)v484,
        v485,
        v486,
        v487[0],
        v488[0],
        v489,
        v490,
        (char)v491,
        v492,
        v493,
        v494,
        v495,
        v496,
        v497,
        v498,
        v499,
        v500,
        v501,
        v502,
        v503,
        v504,
        v505);
      v208 = *(_QWORD *)v401;
      if ( *(_QWORD *)v487 && *(_QWORD *)v488 )
      {
        sub_1580C40(*(unsigned __int64 *)v488, *(unsigned __int64 *)v487);
        v208 = *(_QWORD *)v401;
      }
      v209 = *(_QWORD *)(v63 + 16);
      if ( (v209 & 4) != 0 )
        v210 = *(_QWORD *)(v209 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v210 = v209 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v402 = v208;
      v211 = sub_B8C1B0(v210);
      v62 = *(void ***)v402;
      v212 = *(_BYTE *)(v211 + 28) & 0x7F;
      if ( v212 == 23 )
      {
        v211 = *(_QWORD *)(v211 + 88);
        v212 = *(_BYTE *)(v211 + 28) & 0x7F;
      }
      if ( v212 == 21 )
      {
        *(_QWORD *)v460 = *(_QWORD *)(v211 + 88);
      }
      else if ( v212 == 20 )
      {
        *(_QWORD *)v460 = v211;
      }
      if ( v484 != v483 )
      {
        *(_QWORD *)v415 = v46;
        v213 = (unsigned __int64 *)v483;
        v438 = (void *)v11;
        *(_QWORD *)v453 = v14;
        v455 = *(void ***)v402;
        *(_QWORD *)v403 = v63;
        v214 = v484;
        do
        {
          v215 = *v213;
          if ( *v213 )
          {
            v216 = v213[1];
            if ( v216 )
            {
              if ( v215 < v216 || v215 > v216 + 14848 )
              {
                v217 = *(_QWORD *)(v215 + 528);
                v218 = v217 + ((unsigned __int64)*(unsigned int *)(v215 + 536) << 6);
                while ( v217 != v218 )
                {
                  while ( 1 )
                  {
                    v218 -= 64;
                    v219 = *(void **)(v218 + 24);
                    if ( v219 == (void *)(v218 + 40) )
                      break;
                    operator delete(v219);
                    if ( v217 == v218 )
                      goto LABEL_264;
                  }
                }
LABEL_264:
                v220 = *(void **)(v215 + 528);
                if ( v220 != (void *)(v215 + 544) )
                  free(v220);
                v221 = *(void **)(v215 + 416);
                if ( v221 != (void *)(v215 + 432) )
                  free(v221);
                v222 = (void **)(v215 + 384);
                v223 = (void **)(v215 + 64);
                do
                {
                  while ( *v222 != v222 + 2 )
                  {
                    operator delete(*v222);
                    v222 -= 4;
                    if ( v223 == v222 )
                      goto LABEL_271;
                  }
                  v222 -= 4;
                }
                while ( v223 != v222 );
LABEL_271:
                operator delete((void *)v215, 0x3A0u);
              }
              else
              {
                v224 = *(unsigned int *)(v216 + 14976);
                *(_DWORD *)(v216 + 14976) = v224 + 1;
                *(_QWORD *)(v216 + 8 * v224 + 14848) = v215;
              }
            }
          }
          v213 += 3;
        }
        while ( v214 != v213 );
        v63 = *(_QWORD *)v403;
        v46 = *(_QWORD *)v415;
        v11 = (__int64)v438;
        v14 = *(char **)v453;
        v62 = v455;
      }
      if ( v483 )
      {
        *(_QWORD *)v404 = v62;
        operator delete(v483);
        v62 = *(void ***)v404;
      }
      if ( *((void ***)&n + 1) != v62 + 4 )
      {
        *(_QWORD *)v405 = v62;
        free(*((void **)&n + 1));
        v62 = *(void ***)v405;
      }
      goto LABEL_54;
    }
    if ( *v14 && sub_BAD2F0((__int64)v442, (__int64)v430, 1, v201, v202, v203) )
    {
      v285 = v11 + 8;
      sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v457, 0x12F0u, 0);
      if ( (_BYTE)v502 )
      {
        v285 = v449;
        sub_AE9DF0(&v491, v449, 5u);
      }
      else if ( BYTE4(v503) )
      {
        v361 = sub_168B9E0(v487);
        v363 = v489;
        if ( v489 )
          v363 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v489 + 32LL))(v489);
        *(_QWORD *)v472 = v363;
        v364 = sub_1587BC0(v361, (__int64 *)v472, v359, v360, v362, (__int64)v472);
        v285 = v449;
        sub_AE9DF0((unsigned __int8 **)(*v364 + 32LL * (unsigned int)v503 + 8), v449, 5u);
      }
      v286 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( (_BYTE)v502 )
      {
        sub_AE9DF0(&v491, v286, 8u);
      }
      else if ( BYTE4(v503) )
      {
        v353 = sub_168B9E0(v487);
        v355 = v489;
        if ( v489 )
          v355 = (void *)(*(__int64 (__fastcall **)(void *, unsigned __int64, _QWORD, __int64, __int64, int *))(*(_QWORD *)v489 + 32LL))(
                           v489,
                           v285,
                           *(_QWORD *)v489,
                           v352,
                           v354,
                           v472);
        *(_QWORD *)v472 = v355;
        v356 = sub_1587BC0(v353, (__int64 *)v472, v351, v352, v354, (__int64)v472);
        sub_AE9DF0((unsigned __int8 **)(*v356 + 32LL * (unsigned int)v503 + 8), v286, 8u);
      }
      v287 = j__strlen(".");
      LOBYTE(v465) = 1;
      LODWORD(v464) = v392;
      HIDWORD(v464) = v392;
      sub_19C4820((__int64)v472, v464, 1, ".", v287);
      sub_1589170((__int64)v487, v472);
      if ( v474 != v476 )
        operator delete(v474);
      sub_15F7200(v487);
    }
    else
    {
      sub_168B9F0((__int64)v487, (__int64 *)(v11 + 8), v457, 0x14ACu, 0);
      v464 = v442[5];
      v319 = sub_15894B0((__int64)v487, &v464);
      v320 = sub_17B3DD0(v319, (__int64 *)v459);
      *(_QWORD *)v472 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v459, 0.0);
      sub_1587DB0(v320, (__int64 *)v472);
      sub_15F7200(v487);
    }
    sub_17A1D90(&src);
    return 1;
  }
  else
  {
LABEL_97:
    v99 = *(_QWORD *)(v52 + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 232) + 107LL) & 4) != 0 )
    {
      v115 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v115 + 16) == 13 )
      {
        v21 = *(unsigned __int16 *)(v115 + 18);
        LOWORD(v21) = ((unsigned __int16)v21 >> 3) & 0x1FF;
        if ( (_WORD)v21 == 489 )
          goto LABEL_102;
      }
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v21 + 16) == 13 )
      {
        v21 = *(unsigned __int16 *)(v21 + 18);
        LOWORD(v21) = ((unsigned __int16)v21 >> 3) & 0x1FF;
        if ( (_WORD)v21 == 490 )
          goto LABEL_102;
      }
    }
    v100 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v100 + 16) != 13 )
      goto LABEL_101;
    if ( ((*(_WORD *)(v100 + 18) >> 3) & 0x1FF) != 0x1E9 )
      goto LABEL_101;
    v101 = v430[2];
    if ( *(_DWORD *)v101 != 3 || *(_WORD *)(v101 + 16) != 29545 || *(_BYTE *)(v101 + 18) != 97 )
      goto LABEL_101;
    v180 = *(_QWORD **)(v11 + 248);
    v181 = v457;
    v182 = *a3 & 0xFFFFFFFFFFFFFFFELL;
    v183 = sub_A8A180(v180);
    v187 = *(_QWORD *)(v183 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    if ( !*(_QWORD *)(v183 + 48) )
      v187 = sub_A7AA70((__int64)v180, v183, 0, v184, v185, v186);
    v188 = (_WORD *)sub_EEE9A0(40, *(_QWORD **)(v11 + 248), 8u);
    v189 = *v14;
    v190 = (__int64)v188;
    *v188 = *v188 & 0xFE00 | 0x23;
    if ( unk_2CD7484 )
      sub_EE9B50(35);
    v191 = *(_WORD *)(v190 + 1);
    *(_QWORD *)(v190 + 8) = v187;
    *(_QWORD *)(v190 + 16) = v182;
    *(_DWORD *)(v190 + 24) = v181;
    *(_BYTE *)(v190 + 32) = v189;
    *(_WORD *)(v190 + 1) = v191 & 0xF801 | 2;
    *(_DWORD *)(v190 + 28) = v392;
    v192 = sub_B63B10(v190);
    *(_BYTE *)(v190 + 1) = (v192 << 6) | *(_BYTE *)(v190 + 1) & 0x3F;
    *(_BYTE *)(v190 + 2) = *(_BYTE *)(v190 + 2) & 0xF8 | (v192 >> 2) & 7;
    return v190;
  }
}
