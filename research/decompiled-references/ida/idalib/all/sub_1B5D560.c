void __fastcall sub_1B5D560(
        __m128 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        int a10,
        __int64 a11,
        __int64 a12,
        unsigned int a13,
        _DWORD *a14,
        __int64 a15,
        unsigned __int8 a16,
        char a17)
{
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rbx
  _DWORD *v23; // rbp
  __int64 v24; // r12
  size_t v25; // rax
  __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 *v30; // r14
  unsigned __int64 v31; // r12
  unsigned __int64 *v32; // rbp
  __int64 *v33; // r14
  __int64 v34; // rbx
  unsigned __int64 v35; // r15
  __int64 *v36; // r12
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 *v55; // rsi
  __int64 v56; // rax
  char v57; // r9
  __int64 v58; // r8
  __int64 v59; // rax
  unsigned __int64 v60; // r11
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r10
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // edx
  _QWORD *v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rax
  unsigned __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  void *v76; // rcx
  int v77; // edx
  __int64 v78; // rsi
  __int64 v79; // r11
  unsigned __int16 *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned __int64 v83; // r11
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  unsigned int v89; // eax
  void *v90; // r11
  __int64 v91; // rax
  unsigned __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // r9
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // r11
  __int64 v97; // rsi
  __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned int v105; // esi
  __int64 v106; // r15
  __int64 *v107; // r9
  __int64 v108; // r11
  unsigned int v109; // ecx
  __int64 v110; // r10
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // r8
  int v114; // edx
  __int64 v115; // r9
  __int64 v116; // r15
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rcx
  __int64 v121; // r15
  __int64 v122; // rax
  signed __int64 v123; // r10
  __int64 v124; // r9
  __int64 v125; // rsi
  void *v126; // r9
  __int64 v127; // r15
  signed __int64 v128; // r10
  __int64 v129; // rax
  unsigned __int64 v130; // rdx
  __int64 v131; // r15
  __int64 v132; // rax
  void *v133; // r9
  __int64 v134; // r15
  signed __int64 v135; // r10
  __int64 v136; // rax
  unsigned __int64 v137; // rdx
  __int64 v138; // rax
  void *v139; // rdi
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // rdx
  unsigned __int64 v146; // r11
  __int64 v147; // rax
  char v148; // al
  __int64 v149; // rax
  __int64 v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rdx
  unsigned __int64 v154; // rdx
  __int64 v155; // r8
  __int64 v156; // r9
  _QWORD *v157; // rsi
  unsigned int v158; // edx
  __int64 *v159; // rdi
  unsigned __int32 v160; // eax
  __int64 v161; // rcx
  __int64 v162; // rbx
  __int64 v163; // rcx
  __int64 v164; // rcx
  int v165; // edx
  unsigned __int32 v166; // eax
  __int64 v167; // rdx
  __int64 v168; // rdx
  unsigned __int64 v169; // r13
  __int64 v170; // rax
  int v171; // r9d
  char v172; // al
  char v173; // al
  __int64 v174; // r15
  __int64 v175; // r15
  __int64 v176; // rax
  __int64 v177; // rdi
  __int64 v178; // rdx
  int v179; // ecx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // rdi
  _QWORD *v183; // rsi
  __m128 *v184; // rbp
  unsigned __int64 v185; // r14
  __int64 *v186; // rsi
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  char v191; // al
  char v192; // bl
  unsigned __int64 v193; // rdx
  __int64 v194; // rcx
  unsigned __int64 v195; // rbp
  __int64 v196; // r12
  __int64 *v197; // r13
  __int64 v198; // rcx
  __int64 v199; // rax
  __int64 v200; // rax
  _QWORD *v201; // rax
  unsigned __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // r15
  __int64 v205; // rsi
  __int64 v206; // rdi
  __int64 v207; // r15
  __m128i v208; // rax
  __int64 v209; // rdx
  char v210; // al
  __int64 v211; // rax
  unsigned __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rdx
  char v218; // al
  int v219; // ecx
  __int64 v220; // rax
  __int64 v221; // rsi
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rax
  __int64 v227; // rsi
  __int64 v228; // rdx
  __int64 v229; // r8
  __int64 v230; // r9
  unsigned __int64 v231; // rax
  unsigned __int64 v232; // rdx
  __int64 v233; // rbx
  __int32 v234; // eax
  __int64 v235; // rsi
  __int64 *v236; // rax
  __int64 v237; // rcx
  unsigned __int64 v238; // rdx
  unsigned __int64 v239; // rax
  __int64 v240; // rax
  _QWORD *v241; // rdi
  __int64 v242; // rsi
  int v243; // eax
  __m128i *v244; // rsi
  unsigned __int64 v245; // rax
  __int64 v246; // r9
  __int64 v247; // rcx
  __int64 v248; // r8
  unsigned __int64 v249; // rdx
  __int64 v250; // rdx
  __int64 v251; // rax
  __int64 v252; // rax
  unsigned __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rdx
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  __int64 *v259; // rax
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __int64 v268; // rdx
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  __int64 v272; // rdx
  __int64 v273; // r8
  __int64 v274; // r9
  unsigned __int64 v275; // rax
  __int64 v276; // rax
  unsigned __int64 v277; // rax
  __int64 v278; // rdx
  __int64 v279; // rcx
  __int64 v280; // r8
  __int64 v281; // rax
  __int64 v282; // r12
  unsigned __int64 v283; // r14
  _QWORD *v284; // rax
  _QWORD *v285; // rdx
  _QWORD *v286; // rax
  __int64 v287; // r14
  __int64 v288; // rax
  __int64 v289; // r15
  signed __int64 v290; // r9
  __int64 v291; // rax
  __int64 v292; // r14
  char v293; // r14
  __int64 v294; // rdx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 v297; // r15
  void **v298; // rbx
  __int64 v299; // rcx
  __int64 v300; // rax
  __int64 v301; // r8
  __int64 *v302; // rdi
  __int64 v303; // r9
  int v304; // r11d
  int v305; // r11d
  __int64 v306; // r9
  unsigned int v307; // esi
  __int64 v308; // rax
  int v309; // edi
  char v310; // al
  __m128 *v311; // r15
  __int64 v312; // r15
  int v313; // r10d
  int v314; // r10d
  __int64 v315; // r8
  unsigned int v316; // r11d
  int v317; // edi
  __int64 *v318; // rsi
  unsigned __int64 v319; // rbx
  _QWORD *v320; // rax
  __int64 v321; // r15
  _QWORD *v322; // rax
  __int64 v323; // rcx
  __int64 v324; // rax
  __int64 v325; // r14
  __int64 v326; // r12
  __int64 v327; // rbx
  __int64 v328; // rbp
  int v329; // edi
  void **v330; // r15
  __int64 v331; // rbp
  void **v332; // rbx
  __int32 v333; // r15d
  __int64 v334; // rax
  __int64 v335; // rax
  __int64 v336; // r8
  __int64 v337; // rax
  __int64 v338; // rax
  int v339; // eax
  int v340; // r10d
  int v341; // edi
  bool v342; // zf
  int v343; // esi
  __int64 v344; // rax
  __int64 v345; // rsi
  _QWORD *v346; // rdx
  __int64 v347; // rdi
  unsigned __int64 v348; // rcx
  char v349; // cl
  unsigned __int32 v350; // r15d
  __int64 v351; // r9
  unsigned __int16 *v352; // rdx
  int v353; // r8d
  __int64 *v354; // rdi
  unsigned __int64 v355; // rax
  __int128 v356; // [rsp-10h] [rbp-6D8h]
  __int64 v357; // [rsp-10h] [rbp-6D8h]
  __int128 v358; // [rsp-10h] [rbp-6D8h]
  __int64 v359; // [rsp+0h] [rbp-6C8h]
  __int64 v360; // [rsp+0h] [rbp-6C8h]
  __int64 v362; // [rsp+10h] [rbp-6B8h]
  __int64 v363; // [rsp+10h] [rbp-6B8h]
  unsigned int v364; // [rsp+18h] [rbp-6B0h]
  unsigned __int64 v365; // [rsp+18h] [rbp-6B0h]
  unsigned __int64 v366; // [rsp+18h] [rbp-6B0h]
  __int64 v367; // [rsp+18h] [rbp-6B0h]
  __int64 v368; // [rsp+18h] [rbp-6B0h]
  __int64 v369; // [rsp+18h] [rbp-6B0h]
  __int64 v370; // [rsp+18h] [rbp-6B0h]
  void *v371; // [rsp+18h] [rbp-6B0h]
  void *v372; // [rsp+18h] [rbp-6B0h]
  __int64 *v373; // [rsp+18h] [rbp-6B0h]
  __int64 *v374; // [rsp+18h] [rbp-6B0h]
  __int64 *v375; // [rsp+18h] [rbp-6B0h]
  unsigned __int64 v376; // [rsp+18h] [rbp-6B0h]
  __int64 v377; // [rsp+18h] [rbp-6B0h]
  unsigned int v378; // [rsp+18h] [rbp-6B0h]
  unsigned __int64 v379; // [rsp+18h] [rbp-6B0h]
  __int64 v381; // [rsp+28h] [rbp-6A0h]
  unsigned __int64 v382; // [rsp+28h] [rbp-6A0h]
  __int64 v383; // [rsp+28h] [rbp-6A0h]
  _QWORD *v384; // [rsp+28h] [rbp-6A0h]
  __int64 v385; // [rsp+28h] [rbp-6A0h]
  char v386; // [rsp+28h] [rbp-6A0h]
  unsigned int v387; // [rsp+28h] [rbp-6A0h]
  __int64 v388; // [rsp+28h] [rbp-6A0h]
  int v389; // [rsp+28h] [rbp-6A0h]
  __int64 *v390; // [rsp+28h] [rbp-6A0h]
  unsigned __int64 v391; // [rsp+28h] [rbp-6A0h]
  __int64 v392; // [rsp+28h] [rbp-6A0h]
  __int64 v393; // [rsp+28h] [rbp-6A0h]
  __int64 v394; // [rsp+28h] [rbp-6A0h]
  unsigned int v395; // [rsp+28h] [rbp-6A0h]
  __m128i *v396; // [rsp+28h] [rbp-6A0h]
  __int64 v397; // [rsp+28h] [rbp-6A0h]
  _QWORD *v398; // [rsp+28h] [rbp-6A0h]
  __int64 v400; // [rsp+38h] [rbp-690h]
  void *src; // [rsp+40h] [rbp-688h]
  void *srca; // [rsp+40h] [rbp-688h]
  const void *srcb; // [rsp+40h] [rbp-688h]
  void *srcc; // [rsp+40h] [rbp-688h]
  __int64 srch; // [rsp+40h] [rbp-688h]
  void *srcd; // [rsp+40h] [rbp-688h]
  int srci; // [rsp+40h] [rbp-688h]
  void *srcj; // [rsp+40h] [rbp-688h]
  __int64 srcg; // [rsp+40h] [rbp-688h]
  void *srce; // [rsp+40h] [rbp-688h]
  int srck; // [rsp+40h] [rbp-688h]
  int srcf; // [rsp+40h] [rbp-688h]
  char v413; // [rsp+4Bh] [rbp-67Dh]
  unsigned int v414; // [rsp+4Ch] [rbp-67Ch]
  _DWORD *v415; // [rsp+50h] [rbp-678h]
  __int64 v416; // [rsp+58h] [rbp-670h]
  __int64 v417; // [rsp+58h] [rbp-670h]
  __int64 v418; // [rsp+58h] [rbp-670h]
  unsigned __int64 v419; // [rsp+58h] [rbp-670h]
  unsigned int v420; // [rsp+60h] [rbp-668h]
  unsigned __int8 v421; // [rsp+66h] [rbp-662h]
  bool v422; // [rsp+67h] [rbp-661h]
  _DWORD *v423; // [rsp+68h] [rbp-660h]
  _WORD *v424; // [rsp+80h] [rbp-648h]
  char v425; // [rsp+88h] [rbp-640h]
  __int64 v426; // [rsp+88h] [rbp-640h]
  __int64 v427; // [rsp+88h] [rbp-640h]
  __int64 v428; // [rsp+90h] [rbp-638h]
  int v429; // [rsp+90h] [rbp-638h]
  __int64 *v430; // [rsp+90h] [rbp-638h]
  _QWORD *v431; // [rsp+90h] [rbp-638h]
  __int64 v432; // [rsp+98h] [rbp-630h]
  unsigned __int64 v433; // [rsp+98h] [rbp-630h]
  void *v434; // [rsp+98h] [rbp-630h]
  _QWORD *v435; // [rsp+98h] [rbp-630h]
  void *v436; // [rsp+98h] [rbp-630h]
  __int64 v437; // [rsp+A0h] [rbp-628h]
  __int64 v438; // [rsp+A8h] [rbp-620h]
  _QWORD *v439; // [rsp+A8h] [rbp-620h]
  __int64 v440; // [rsp+A8h] [rbp-620h]
  __int64 v441; // [rsp+B0h] [rbp-618h]
  unsigned __int64 v442; // [rsp+B8h] [rbp-610h]
  __int64 v443; // [rsp+E0h] [rbp-5E8h]
  __int64 v444; // [rsp+E0h] [rbp-5E8h]
  __int64 *v445; // [rsp+E0h] [rbp-5E8h]
  _QWORD *v446; // [rsp+E8h] [rbp-5E0h]
  __int64 *v447; // [rsp+110h] [rbp-5B8h]
  unsigned __int64 v448; // [rsp+118h] [rbp-5B0h]
  __int64 *v449; // [rsp+120h] [rbp-5A8h]
  unsigned __int64 *v450; // [rsp+128h] [rbp-5A0h]
  __int64 v451; // [rsp+130h] [rbp-598h]
  void *v452; // [rsp+140h] [rbp-588h]
  void *v453; // [rsp+140h] [rbp-588h]
  __m128 *v454; // [rsp+140h] [rbp-588h]
  _QWORD *v455; // [rsp+140h] [rbp-588h]
  unsigned __int64 v456; // [rsp+148h] [rbp-580h]
  __int64 v457; // [rsp+168h] [rbp-560h]
  __m128 *v458; // [rsp+168h] [rbp-560h]
  __int64 v459; // [rsp+170h] [rbp-558h] BYREF
  __int64 v460; // [rsp+178h] [rbp-550h] BYREF
  __int64 v461; // [rsp+180h] [rbp-548h] BYREF
  __int64 v462; // [rsp+188h] [rbp-540h]
  unsigned int v463; // [rsp+190h] [rbp-538h]
  __m128i v464; // [rsp+1A0h] [rbp-528h] BYREF
  __int64 v465; // [rsp+1B0h] [rbp-518h]
  __int128 v466; // [rsp+1C0h] [rbp-508h] BYREF
  void *v467[2]; // [rsp+1D0h] [rbp-4F8h]
  __int128 v468; // [rsp+1E0h] [rbp-4E8h]
  void *v469; // [rsp+1F0h] [rbp-4D8h] BYREF
  __int64 v470; // [rsp+1F8h] [rbp-4D0h]
  _QWORD v471[8]; // [rsp+200h] [rbp-4C8h] BYREF
  __m128i v472; // [rsp+240h] [rbp-488h] BYREF
  __int64 v473; // [rsp+250h] [rbp-478h] BYREF
  int v474; // [rsp+258h] [rbp-470h]
  void *ptr; // [rsp+290h] [rbp-438h] BYREF
  __int64 v476; // [rsp+298h] [rbp-430h]
  _BYTE v477[128]; // [rsp+2A0h] [rbp-428h] BYREF
  __m128i v478; // [rsp+320h] [rbp-3A8h] BYREF
  __int64 v479; // [rsp+330h] [rbp-398h] BYREF
  __int64 v480; // [rsp+338h] [rbp-390h] BYREF
  void *v481[2]; // [rsp+378h] [rbp-350h]
  __int64 v482; // [rsp+388h] [rbp-340h]
  __m128 *v483; // [rsp+390h] [rbp-338h]
  __m128 v484; // [rsp+398h] [rbp-330h]
  __int64 v485; // [rsp+3A8h] [rbp-320h]
  __int64 v486; // [rsp+3B0h] [rbp-318h]
  __int64 v487; // [rsp+3B8h] [rbp-310h]
  __int64 v488; // [rsp+3C0h] [rbp-308h]
  __m128i v489; // [rsp+3D0h] [rbp-2F8h] BYREF
  _BYTE v490[320]; // [rsp+3E0h] [rbp-2E8h] BYREF
  __m128 v491; // [rsp+520h] [rbp-1A8h] BYREF
  void *v492[2]; // [rsp+530h] [rbp-198h] BYREF
  __int128 v493; // [rsp+540h] [rbp-188h]
  __m128 *v494; // [rsp+5C8h] [rbp-100h]
  __int64 v495; // [rsp+5D0h] [rbp-F8h]
  int v496; // [rsp+5D8h] [rbp-F0h]
  char v497; // [rsp+5DCh] [rbp-ECh]
  __int64 v498; // [rsp+600h] [rbp-C8h]
  __int8 *v499; // [rsp+608h] [rbp-C0h]
  __int64 v500; // [rsp+610h] [rbp-B8h]
  int v501; // [rsp+678h] [rbp-50h]
  __int64 v502; // [rsp+680h] [rbp-48h]
  __int16 v503; // [rsp+688h] [rbp-40h]
  char v504; // [rsp+68Ah] [rbp-3Eh]

  v19 = a11;
  v20 = *(unsigned int *)(a1[14].m128_u64[1] + 64);
  v421 = a16;
  v414 = a5;
  v413 = a17;
  v21 = a12;
  v22 = a11;
  v23 = a14;
  v24 = a15;
  v420 = *(_DWORD *)(a1[14].m128_u64[1] + 64);
  if ( !a9.m128i_i64[0] )
  {
    v362 = a11;
    v359 = *(_QWORD *)(a1[15].m128_u64[1] + 17504);
    v25 = j__strlen("default");
    v20 = (__int64)"default";
    v26 = sub_6F3470(v359, "default", v25);
    v19 = v362;
    a9.m128i_i64[0] = v26;
    a9.m128i_i32[2] = v414;
  }
  v381 = v19 + 8 * v21;
  v27 = v23;
  v415 = &v23[v24];
  v28 = (4 * v24) >> 4;
  v29 = (4 * v24) >> 2;
  if ( v28 <= 0 )
  {
LABEL_16:
    if ( v29 != 2 )
    {
      if ( v29 != 3 )
      {
        if ( v29 != 1 )
        {
          v23 = v415;
          goto LABEL_20;
        }
LABEL_113:
        if ( *v23 != 13 )
          v23 = v415;
        goto LABEL_20;
      }
      if ( *v23 == 13 )
        goto LABEL_20;
      ++v23;
    }
    if ( *v23 == 13 )
      goto LABEL_20;
    ++v23;
    goto LABEL_113;
  }
  if ( *v23 != 13 )
  {
    if ( v23[1] == 13 )
    {
      ++v23;
    }
    else if ( v23[2] == 13 )
    {
      v23 += 2;
    }
    else
    {
      v28 = (__int64)&v23[4 * v28];
      if ( v23[3] == 13 )
      {
        v23 += 3;
      }
      else
      {
        while ( 1 )
        {
          v23 = v27 + 4;
          if ( (_DWORD *)v28 == v27 + 4 )
          {
            v29 = v415 - v23;
            goto LABEL_16;
          }
          if ( v27[4] == 13 )
            goto LABEL_20;
          if ( v27[5] == 13 )
          {
            v23 = v27 + 5;
            goto LABEL_20;
          }
          if ( v27[6] == 13 )
          {
            v23 = v27 + 6;
            goto LABEL_20;
          }
          if ( v27[7] == 13 )
            break;
          v27 += 4;
        }
        v23 = v27 + 7;
      }
    }
  }
LABEL_20:
  v30 = *(unsigned __int64 **)a4;
  v363 = *(_QWORD *)a4 + 8LL * *(_QWORD *)(a4 + 8);
  if ( v363 == *(_QWORD *)a4 )
    return;
  v31 = *v30;
  v423 = v23;
  v364 = sub_C00A40(*v30, v20, v28, v29, a5);
  v360 = 0;
  v32 = v30 + 1;
  v33 = (__int64 *)v22;
  v34 = a2;
  v422 = a13 != 2 && a13 - 4 > 1;
  v35 = v31;
  v36 = (__int64 *)v381;
LABEL_32:
  if ( v33 != v36 )
    v360 = *v33;
  v45 = sub_BFD710(v35);
  if ( (*(_DWORD *)v45 & 0x3C000) != 0 )
  {
    v46 = *(_QWORD *)(v45 + 8);
    v42 = 0;
    v47 = *(_QWORD *)&byte_8[v46 & 0xFFFFFFFFFFFFFFF0LL];
    v48 = v47 | v46;
    v49 = *(unsigned int *)(v34 + 344);
    v50 = v47 & 0xFFFFFFFFFFFFFFF8LL | v48 & 7;
    if ( (_DWORD)v49 )
    {
      v51 = *(_QWORD *)(v34 + 336) + 6776 * v49 - 6776;
      if ( *(_QWORD *)(v51 + 6768) == *(_QWORD *)(v34 + 328) )
      {
        v52 = *(unsigned int *)(v51 + 8);
        v53 = *(unsigned int *)(v34 + 27504);
        if ( (unsigned int)v52 > (unsigned int)v53 )
        {
          v54 = v52 - v53;
          if ( v54 )
          {
            v42 = *(_QWORD *)v51 + 1688 * (v54 - 1);
            if ( v42 )
              v42 = *(_QWORD *)(v42 + 1008);
          }
        }
      }
    }
    v37 = sub_1B156F0((__int64)a1, v42, a6, &a9, v50, v360);
    if ( v37 != 1 )
    {
      v41 = *(unsigned int *)(a4 + 1480);
      v42 = *(unsigned int *)(a4 + 1484);
      v43 = v37 & 0xFFFFFFFFFFFFFFFELL;
      if ( v41 + 1 > v42 )
      {
        v42 = a4 + 1488;
        v365 = v43;
        sub_2237220(a4 + 1472, a4 + 1488, v41 + 1, 8);
        v41 = *(unsigned int *)(a4 + 1480);
        v43 = v365;
      }
      *(_QWORD *)(*(_QWORD *)(a4 + 1472) + 8 * v41) = v43;
      v44 = *(unsigned int *)(a4 + 24);
      v39 = *(unsigned int *)(a4 + 28);
      ++*(_DWORD *)(a4 + 1480);
      if ( v44 + 1 > v39 )
      {
        v42 = a4 + 32;
        sub_2237220(a4 + 16, a4 + 32, v44 + 1, 8);
        v44 = *(unsigned int *)(a4 + 24);
      }
      v38 = *(_QWORD *)(a4 + 16);
      *(_QWORD *)(v38 + 8 * v44) = v35;
      ++*(_DWORD *)(a4 + 24);
    }
    goto LABEL_28;
  }
  if ( ((*(_BYTE *)(v35 + 1) >> 1) & 3) == 1 )
  {
    v382 = v45;
    src = (void *)sub_BFD550(v35);
    ptr = v477;
    v476 = 0x800000000LL;
    v56 = sub_1AE5FF0(v34);
    if ( v56 )
      v58 = *(unsigned int *)(v56 + 976);
    else
      v58 = 103;
    v42 = (unsigned __int64)src;
    v59 = sub_1B30C60((__int64)a1, (unsigned __int64)src, (__int64)&ptr, a3, v58, v57, *(double *)a7.m128_u64);
    v39 = v59;
    v424 = (_WORD *)v59;
    if ( !v59 )
      goto LABEL_57;
    v60 = v382;
    if ( (*(_WORD *)v59 & 0x1FF) == 0x62 )
    {
      v489.m128i_i64[0] = *(_QWORD *)(v59 + 8);
      v64 = sub_1AE5FF0(v34);
      v65 = v64 + 1136;
      v66 = *(unsigned int *)(v64 + 1152);
      if ( (_DWORD)v66 )
      {
        v67 = *(_QWORD *)(v64 + 1136);
        v68 = (v66 - 1) & (v63 ^ (v63 >> 9));
        v69 = (_QWORD *)(v67 + 8LL * v68);
        v70 = *v69;
        if ( v63 == *v69 )
          goto LABEL_53;
        if ( v70 )
        {
          srcf = 1;
          v398 = nullptr;
          v419 = v63;
          while ( 1 )
          {
            if ( v70 == -1 )
            {
              if ( v398 )
                v69 = v398;
              v398 = v69;
            }
            v68 = (v66 - 1) & (srcf + v68);
            v63 = (unsigned int)(srcf + 1);
            v69 = (_QWORD *)(v67 + 8LL * v68);
            v70 = *v69;
            if ( v419 == *v69 )
              break;
            if ( !v70 )
            {
              if ( v398 )
                v69 = v398;
              goto LABEL_163;
            }
            ++srcf;
          }
LABEL_53:
          sub_1848540(&v491, v69, (_QWORD *)(v67 + 8 * v66), v65, 1);
          goto LABEL_54;
        }
LABEL_163:
        v179 = *(_DWORD *)(v64 + 1144);
        v491.m128_u64[0] = (unsigned __int64)v69;
        v61 = (unsigned int)(v179 + 1);
        v62 = (unsigned int)(3 * v66);
        if ( 4 * (int)v61 < (unsigned int)v62 )
        {
          v180 = (unsigned int)(v66 - *(_DWORD *)(v64 + 1148) - v61);
          if ( (unsigned int)v180 <= (unsigned int)v66 >> 3 )
          {
            v418 = v64;
            v374 = (__int64 *)(v64 + 1136);
            sub_1B46E30(v65, v66, v61, v180, (__int64)&v491, v64);
            sub_1AF94D0(v374, (unsigned __int64 *)&v489, &v491);
            v64 = v418;
            v69 = (_QWORD *)v491.m128_u64[0];
            v65 = (__int64)v374;
            LODWORD(v61) = *(_DWORD *)(v418 + 1144) + 1;
          }
LABEL_166:
          *(_DWORD *)(v64 + 1144) = v61;
          if ( *v69 )
            --*(_DWORD *)(v64 + 1148);
          *v69 = v489.m128i_i64[0];
          sub_1848540(&v491, v69, (_QWORD *)(*(_QWORD *)(v64 + 1136) + 8LL * *(unsigned int *)(v64 + 1152)), v65, 1);
LABEL_54:
          v71 = sub_1AE5FF0(v34);
          if ( v71 )
            v71 = *(_QWORD *)(v71 + 1008);
          v42 = v71;
          v73 = sub_1B156F0((__int64)a1, v71, a6, &a9, v72, v360);
          if ( v73 != 1 )
          {
            sub_14B7B40(a4 + 1472, v73 & 0xFFFFFFFFFFFFFFFELL);
            sub_14B7B40(a4 + 16, v35);
            v42 = *(unsigned int *)(a4 + 168) + 1LL;
            sub_1B5B800(a4 + 160, v42);
            v133 = ptr;
            v134 = *(_QWORD *)(a4 + 160) + 144LL * *(unsigned int *)(a4 + 168) - 144;
            v135 = 16LL * (unsigned int)v476;
            v136 = *(unsigned int *)(v134 + 8);
            v40 = v135 >> 4;
            v137 = (v135 >> 4) + v136;
            if ( v137 > *(unsigned int *)(v134 + 12) )
            {
              v42 = v134 + 16;
              srch = v135 >> 4;
              v392 = 16LL * (unsigned int)v476;
              v371 = ptr;
              sub_2237220(*(_QWORD *)(a4 + 160) + 144LL * *(unsigned int *)(a4 + 168) - 144, v134 + 16, v137, 16);
              v136 = *(unsigned int *)(v134 + 8);
              v40 = srch;
              v135 = v392;
              v133 = v371;
            }
            if ( v135 )
            {
              v42 = (unsigned __int64)v133;
              v370 = v40;
              memcpy((void *)(*(_QWORD *)v134 + 16 * v136), v133, v135);
              LODWORD(v136) = *(_DWORD *)(v134 + 8);
              v40 = v370;
            }
            *(_DWORD *)(v134 + 8) = v40 + v136;
            v138 = *(unsigned int *)(a4 + 1336);
            v39 = *(unsigned int *)(a4 + 1340);
            if ( v138 + 1 > v39 )
            {
              v42 = a4 + 1344;
              sub_2237220(a4 + 1328, a4 + 1344, v138 + 1, 8);
              v138 = *(unsigned int *)(a4 + 1336);
            }
            v38 = *(_QWORD *)(a4 + 1328);
            *(_QWORD *)(v38 + 8 * v138) = 0;
            ++*(_DWORD *)(a4 + 1336);
          }
          goto LABEL_57;
        }
      }
      else
      {
        v491.m128_u64[0] = 0;
      }
      v417 = v64;
      v373 = (__int64 *)(v64 + 1136);
      sub_1B46E30(v65, 2 * v66, v61, v62, v63, v64);
      sub_1AF94D0(v373, (unsigned __int64 *)&v489, &v491);
      v64 = v417;
      v65 = (__int64)v373;
      v69 = (_QWORD *)v491.m128_u64[0];
      LODWORD(v61) = *(_DWORD *)(v417 + 1144) + 1;
      goto LABEL_166;
    }
    v75 = (unsigned int)v476;
    v76 = ptr;
    v416 = *((_QWORD *)ptr + 2 * (unsigned int)v476 - 1);
    if ( (*(_BYTE *)(v416 + 28) & 0x7Fu) - 40 > 6 )
    {
      v428 = 0;
    }
    else
    {
      v42 = v34;
      sub_1AFBE90((__int64)&v491, v34, *((_QWORD *)ptr + 2 * (unsigned int)v476 - 1));
      if ( (unsigned __int8)sub_FFEF60(v491.m128_i32[1], v34, v77) )
      {
        if ( v413 )
          goto LABEL_57;
        sub_1AFBE90((__int64)&v489, v34, v416);
        sub_168B9F0((__int64)&v491, &a1->m128_i64[1], v364, 0x1210u, 0);
        sub_1AF81E0(&v478, a3);
        sub_1682AF0((__int64)&v491, (__int64)&v478);
        v139 = (void *)v478.m128i_i64[0];
        if ( (__int64 *)v478.m128i_i64[0] != &v479 )
          goto LABEL_107;
        goto LABEL_108;
      }
      v76 = ptr;
      v75 = (unsigned int)v476;
      v60 = v382;
      v428 = v416;
    }
    v383 = v60;
    *((_QWORD *)&v356 + 1) = v75;
    *(_QWORD *)&v356 = v76;
    v425 = sub_1B23BB0((__int64)a1, v34, v416, (unsigned __int64)src, 1, a3, *(double *)a7.m128_u64, v356);
    v78 = v357;
    v79 = v383;
    if ( v425
      || a3 == 55
      && (*(_DWORD *)(a1[14].m128_u64[1] + 64) <= 0x2Du || v414)
      && (v78 = v34,
          *((_QWORD *)&v358 + 1) = (unsigned int)v476,
          *(_QWORD *)&v358 = ptr,
          v148 = sub_1B23BB0((__int64)a1, v34, v416, (unsigned __int64)src, 0, 55, *(double *)a7.m128_u64, v358),
          v79 = v383,
          v148) )
    {
      if ( ptr != v477 )
        free(ptr);
      return;
    }
    v384 = (_QWORD *)v79;
    v459 = 0;
    v80 = (unsigned __int16 *)sub_BFB9F0(v79);
    v83 = (unsigned __int64)v384;
    v84 = *v80;
    LOWORD(v84) = v84 & 0x1FF;
    switch ( (_WORD)v84 )
    {
      case '{':
        v491.m128_u64[0] = *((_QWORD *)v80 + 1);
        v85 = sub_C1BEF0((__int64)&v491, v78, v84, v81);
        v83 = (unsigned __int64)v384;
        v459 = v85;
        break;
      case '|':
        srcc = v384;
        v390 = (__int64 *)(sub_C03930(*((_QWORD *)v80 + 3), v78) & 0xFFFFFFFFFFFFFFF0LL);
        v142 = sub_CAFA70(*v390, v78, v140, v141);
        v145 = (__int64)v390;
        v146 = (unsigned __int64)srcc;
        if ( v142 )
        {
          v459 = *(_QWORD *)(v142 + 32);
        }
        else
        {
          v220 = sub_F68450(*v390, v78, (__int64)v390, v143, v144);
          v146 = (unsigned __int64)srcc;
          v459 = v220;
        }
        v391 = v146;
        v147 = sub_C1BEF0((__int64)&v459, v78, v145, v143);
        v83 = v391;
        v459 = v147;
        break;
      case ',':
        v334 = sub_F68450(
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v80[4 * *((unsigned int *)v80 + 6) + 16] + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL),
                 v78,
                 *((unsigned int *)v80 + 6),
                 v81,
                 v82);
        v83 = (unsigned __int64)v384;
        v459 = v334;
        break;
      default:
        v459 = v384[1];
        break;
    }
    srca = (void *)v83;
    v385 = sub_EEC8C0(v83, v78, *(double *)a7.m128_u64);
    v89 = sub_C00A40((unsigned __int64)srca, v78, v86, v87, v88);
    v42 = v385;
    v386 = sub_1B18650(v89, v385, (__int64)a1, v459, 1u);
    if ( !v386 )
      goto LABEL_57;
    v90 = srca;
    if ( a3 != 55 )
    {
LABEL_69:
      v366 = (unsigned __int64)v90;
      v91 = sub_1AE5FF0(v34);
      if ( v91 )
        v91 = *(_QWORD *)(v91 + 1008);
      v42 = v91;
      v93 = sub_1B156F0((__int64)a1, v91, a6, &a9, v92, v360);
      if ( v93 == 1 )
        goto LABEL_57;
      v95 = v93 & 0xFFFFFFFFFFFFFFFELL;
      v96 = v366;
      if ( v95 )
        goto LABEL_73;
      v149 = *(_QWORD *)(v366 + 8);
      if ( (*(_WORD *)v366 & 0x1FF) == 0x7C )
      {
        v209 = *(_QWORD *)&byte_8[v149 & 0xFFFFFFFFFFFFFFF0LL];
        v210 = v209 | v149;
        v154 = v209 & 0xFFFFFFFFFFFFFFF8LL;
        srcd = (void *)(v154 | v210 & 7);
        v430 = (__int64 *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
        v211 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v154 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v211 + 16) == 13 && ((*(_WORD *)(v211 + 18) >> 3) & 0x1FF) == 0x1FA )
        {
          srce = (void *)v366;
          v212 = sub_BFBAE0(v366);
          v375 = (__int64 *)(sub_C03930(*(_QWORD *)(v212 + 24), v42) & 0xFFFFFFFFFFFFFFF0LL);
          v215 = sub_CAFA70(*v375, v42, v213, v214);
          v96 = (unsigned __int64)srce;
          if ( v215 )
          {
            v216 = *(_QWORD *)(v215 + 32);
          }
          else
          {
            v216 = sub_F68450(*v375, v42, (__int64)v375, v39, v40);
            v96 = (unsigned __int64)srce;
          }
          v217 = *(_QWORD *)&byte_8[v216 & 0xFFFFFFFFFFFFFFF0LL];
          v218 = v217 | v216;
          v154 = v217 & 0xFFFFFFFFFFFFFFF8LL;
          srcd = (void *)(v154 | v218 & 7);
          v430 = (__int64 *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
        }
      }
      else
      {
        v150 = *(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v150 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          goto LABEL_134;
        v151 = sub_CAFA70(v150, v42, v38, v39);
        v96 = v366;
        v152 = *(_QWORD *)(v151 + 32);
        v153 = *(_QWORD *)&byte_8[v152 & 0xFFFFFFFFFFFFFFF0LL];
        LOBYTE(v152) = v153 | v152;
        v154 = v153 & 0xFFFFFFFFFFFFFFF8LL;
        srcd = (void *)(v154 | v152 & 7);
        v430 = (__int64 *)(v154 & 0xFFFFFFFFFFFFFFF0LL);
      }
      if ( !v430 )
        goto LABEL_134;
      v433 = v96;
      if ( !sub_F63240(*v430, v42, v154, v39, v40, v94) )
        goto LABEL_134;
      v471[1] = 0;
      v157 = v471;
      v158 = 1;
      v159 = &v473;
      v469 = v471;
      v461 = 0;
      v462 = 0;
      v463 = 0;
      v472.m128i_i64[0] = (__int64)&v473;
      v473 = 0;
      v474 = 1;
      v447 = v33;
      v448 = v35;
      v449 = v36;
      v450 = v32;
      v443 = v34;
      v451 = a4;
      v471[0] = srcd;
      v470 = 0x400000001LL;
      v472.m128i_i64[1] = 0x400000001LL;
      v160 = 1;
LABEL_137:
      v161 = 2LL * v158;
      v162 = v157[v161 - 2];
      v163 = v157[v161 - 1];
      LODWORD(v470) = v158 - 1;
      v438 = v163;
      v164 = (__int64)&v159[2 * v160 - 2];
      v165 = *(_DWORD *)(v164 + 8);
      if ( !v165 )
      {
        v166 = v160 - 1;
        do
        {
          v167 = v166;
          v472.m128i_i32[2] = v166--;
          v164 = (__int64)&v159[2 * v167 - 2];
          v165 = *(_DWORD *)(v164 + 8);
        }
        while ( !v165 );
      }
      v168 = (unsigned int)(v165 - 1);
      *(_DWORD *)(v164 + 8) = v168;
      v169 = v162 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v162 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_143;
      v446 = sub_F63240(
               *(_QWORD *)(*(_QWORD *)&byte_8[v162 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
               (__int64)v157,
               v168,
               v164,
               v155,
               v156);
      if ( !v446 )
        goto LABEL_142;
      v181 = *(_QWORD *)v169;
      if ( v463 )
      {
        v182 = (v463 - 1) & (((unsigned int)v181 >> 9) ^ ((unsigned int)v181 >> 4));
        v183 = (_QWORD *)(v461 + 16 * v182);
        if ( v181 == *v183 )
        {
LABEL_171:
          v184 = &v491;
          sub_1AFD9B0(&v491, v183, (_QWORD *)(16LL * v463 + v461), (__int64)&v461, 1);
          v185 = v491.m128_u64[0];
LABEL_172:
          v186 = (__int64 *)(v461 + 16LL * v463);
          sub_1AFD9B0(&v491, v186, v186, (__int64)&v461, 1);
          if ( v491.m128_u64[0] != v185 )
            goto LABEL_173;
          v464.m128i_i64[0] = 0;
          v466 = 0;
          v277 = a1[15].m128_u64[1];
          *(_OWORD *)v467 = 0;
          v468 = 0;
          v464.m128i_i32[2] = 0;
          v465 = 0;
          v464.m128i_i64[0] = sub_6F3470(*(_QWORD *)(v277 + 17504), "default", 7u);
          v464.m128i_i32[2] = sub_C00A40(v433, (__int64)"default", v278, v279, v280);
          v281 = sub_1AE5FF0(v443);
          v282 = v281;
          if ( v281 )
            v282 = *(_QWORD *)(v281 + 1008);
          a7 = 0;
          a8 = (__m128)_mm_load_si128(&v464);
          v478.m128i_i64[0] = 0;
          v489.m128i_i64[0] = (__int64)v490;
          v489.m128i_i64[1] = 0x400000000LL;
          v478.m128i_i64[1] = (__int64)&v480;
          v479 = 0x800000000LL;
          v483 = a1;
          *(_OWORD *)v481 = 0;
          v485 = v465;
          v482 = 0;
          v484 = a8;
          v486 = 0;
          v487 = 14;
          v488 = 0x101010000LL;
          sub_1A395A0((__int64)&v478);
          *(_WORD *)((char *)&v488 + 3) = 0;
          if ( !v282 )
            goto LABEL_264;
          while ( 1 )
          {
            if ( !sub_1A5D3E0(
                    (__int64)a1,
                    (__int64)&v478,
                    (__int64 *)v282,
                    (__int64)&v466,
                    0,
                    0,
                    *(double *)a7.m128_u64,
                    *(double *)a8.m128_u64,
                    0) )
              goto LABEL_264;
            v283 = *(_QWORD *)v478.m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL;
            while ( !*(_BYTE *)(v282 + 100) )
            {
              if ( sub_2236570(v282 + 80, v283) )
                goto LABEL_254;
LABEL_279:
              v282 = *(_QWORD *)v282;
              if ( !v282 )
                goto LABEL_255;
            }
            v284 = *(_QWORD **)(v282 + 80);
            v285 = &v284[*(unsigned int *)(v282 + 92)];
            if ( v284 == v285 )
              goto LABEL_279;
            while ( v283 != *v284 )
            {
              if ( v285 == ++v284 )
                goto LABEL_279;
            }
LABEL_254:
            v282 = *(_QWORD *)v282;
LABEL_255:
            if ( v489.m128i_i32[3] <= (unsigned __int32)v489.m128i_i32[2] )
            {
              v287 = sub_2237400(&v489, v490, 0, 80, v184);
              v321 = v287;
              v322 = (_QWORD *)(v287 + 80LL * v489.m128i_u32[2]);
              v322[1] = 0x800000000LL;
              v323 = v489.m128i_u32[2];
              *v322 = v322 + 2;
              v324 = v489.m128i_i64[0];
              if ( v489.m128i_i64[0] != v489.m128i_i64[0] + 80 * v323 )
              {
                v453 = (void *)v287;
                v325 = v282;
                v326 = v162;
                v327 = v489.m128i_i64[0];
                v458 = v184;
                v328 = v489.m128i_i64[0] + 80 * v323;
                do
                {
                  *(_DWORD *)(v321 + 8) = 0;
                  *(_DWORD *)(v321 + 12) = 8;
                  v329 = *(_DWORD *)(v327 + 8);
                  *(_QWORD *)v321 = v321 + 16;
                  if ( v329 )
                    sub_183F920((char ***)v321, (char ***)v327);
                  v327 += 80;
                  v321 += 80;
                }
                while ( v328 != v327 );
                v162 = v326;
                v184 = v458;
                v282 = v325;
                v323 = v489.m128i_u32[2];
                v287 = (__int64)v453;
                v324 = v489.m128i_i64[0];
              }
              v330 = (void **)(v324 + 80 * v323);
              if ( (void **)v324 != v330 )
              {
                v454 = v184;
                v331 = v162;
                v332 = (void **)v324;
                do
                {
                  while ( 1 )
                  {
                    v330 -= 10;
                    if ( *v330 == v330 + 2 )
                      break;
                    free(*v330);
                    if ( v332 == v330 )
                      goto LABEL_325;
                  }
                }
                while ( v332 != v330 );
LABEL_325:
                v162 = v331;
                v184 = v454;
              }
              v333 = v491.m128_i32[0];
              if ( (_BYTE *)v489.m128i_i64[0] != v490 )
                free((void *)v489.m128i_i64[0]);
              v489.m128i_i64[0] = v287;
              v489.m128i_i32[3] = v333;
              v288 = (unsigned int)++v489.m128i_i32[2];
            }
            else
            {
              v286 = (_QWORD *)(v489.m128i_i64[0] + 80LL * v489.m128i_u32[2]);
              v286[1] = 0x800000000LL;
              *v286 = v286 + 2;
              v287 = v489.m128i_i64[0];
              v288 = (unsigned int)++v489.m128i_i32[2];
            }
            v289 = v287 + 80 * v288 - 80;
            v290 = 8LL * (unsigned int)v479;
            v452 = (void *)v478.m128i_i64[1];
            v291 = *(unsigned int *)(v289 + 8);
            v292 = v290 >> 3;
            if ( (v290 >> 3) + v291 > (unsigned __int64)*(unsigned int *)(v289 + 12) )
            {
              v457 = 8LL * (unsigned int)v479;
              sub_2237220(v289, v289 + 16, v292 + v291, 8);
              v291 = *(unsigned int *)(v289 + 8);
              v290 = v457;
            }
            if ( v290 )
            {
              memcpy((void *)(*(_QWORD *)v289 + 8 * v291), v452, v290);
              LODWORD(v291) = *(_DWORD *)(v289 + 8);
            }
            *(_DWORD *)(v289 + 8) = v292 + v291;
            v478.m128i_i32[0] = 0;
            LODWORD(v479) = 0;
            if ( v481[0] )
              sub_1A39780((char *)v481[0]);
            a7 = 0;
            BYTE6(v488) = 0;
            *(_OWORD *)v481 = 0;
            if ( !v282 )
            {
LABEL_264:
              v293 = sub_B8E180(a1[34].m128_u64[0]);
              if ( v293 || (*(_BYTE *)(*(_QWORD *)v169 + 17LL) & 7) != 0 )
                goto LABEL_266;
              v344 = v489.m128i_i64[0];
              v345 = v489.m128i_i64[0] + 80LL * v489.m128i_u32[2];
              if ( v489.m128i_i64[0] == v345 )
              {
LABEL_374:
                v350 = v464.m128i_u32[2];
                if ( (*(_BYTE *)(a1[14].m128_u64[1] + 1) & 8) != 0 && !*((_QWORD *)&v466 + 1) )
                  sub_1AF6C20((__int64)a1, v464.m128i_i64, v464.m128i_i32[2], v162, (__int64)&v489);
                v491.m128_u64[1] = v162;
                v491.m128_u64[0] = (unsigned __int64)a1;
                if ( sub_1AE6A20(
                       v489.m128i_i64,
                       (__int64 (__fastcall *)(__int64, unsigned __int64))sub_1AE67A0,
                       (__int64)v184) )
                {
                  v293 = v386;
                }
                else
                {
                  v491.m128_u64[1] = v162;
                  v491.m128_u64[0] = (unsigned __int64)a1;
                  LODWORD(v492[0]) = v350;
                  v351 = sub_1AE6A20(
                           v489.m128i_i64,
                           (__int64 (__fastcall *)(__int64, unsigned __int64))sub_1AECA00,
                           (__int64)v184);
                  if ( v351 )
                  {
                    v352 = &v184[2].m128_u16[4];
                    v491.m128_u64[0] = 0;
                    v492[0] = &v184->m128_u16[4];
                    v491.m128_u64[1] = (unsigned __int64)&v184->m128_u64[1];
                    v492[1] = nullptr;
                    *(_QWORD *)&v493 = 1;
                    while ( &v184[10].m128_u16[4] != v352 )
                    {
                      *(_QWORD *)v352 = 0;
                      v352 += 8;
                    }
                    v494 = v184 + 12;
                    v499 = &v184[15].m128_i8[8];
                    v497 = 1;
                    v495 = 4;
                    v496 = 0;
                    v498 = 0;
                    v500 = 0x400000000LL;
                    v501 = 0;
                    v502 = 0;
                    v503 = 257;
                    v504 = 0;
                    v455 = (_QWORD *)v351;
                    if ( (unsigned __int8)sub_183BEE0(
                                            (__int64)a1,
                                            v350,
                                            v162,
                                            *(_QWORD *)(v351 + 48),
                                            (__int64)v184,
                                            v351) )
                    {
                      v460 = v455[6];
                      v355 = sub_6D5440(&v460);
                      if ( sub_B65DB0(
                             (__int64)v184,
                             *(_QWORD *)&byte_8[v355 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                           | ((unsigned __int8)*(_QWORD *)&byte_8[v355 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v355)
                           & 7) )
                      {
                        v293 = (unsigned int)sub_16643B0(a1, v350, v455[6], v162, v491.m128_u64[1] + 16, 0, 0, 0) != 1;
                      }
                    }
                    sub_F7C4A0((__int64)v184);
                  }
                }
              }
              else
              {
                while ( 1 )
                {
                  v346 = *(_QWORD **)v344;
                  v347 = *(_QWORD *)v344 + 8LL * *(unsigned int *)(v344 + 8);
                  if ( *(_QWORD *)v344 != v347 )
                    break;
LABEL_373:
                  v344 += 80;
                  if ( v345 == v344 )
                    goto LABEL_374;
                }
                while ( 1 )
                {
                  v348 = *v346 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( *(char *)(v348 + 28) >= 0 )
                  {
                    v349 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v348 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
                    if ( (v349 & 4) != 0 || (v349 & 2) != 0 || (v349 & 1) != 0 )
                      break;
                  }
                  if ( (_QWORD *)v347 == ++v346 )
                    goto LABEL_373;
                }
LABEL_266:
                v293 = 0;
              }
              sub_169D230((__int64)&v478);
              v297 = v489.m128i_i64[0];
              v298 = (void **)(v489.m128i_i64[0] + 80LL * v489.m128i_u32[2]);
              while ( (void **)v297 != v298 )
              {
                while ( 1 )
                {
                  v298 -= 10;
                  if ( *v298 == v298 + 2 )
                    break;
                  free(*v298);
                  if ( (void **)v297 == v298 )
                    goto LABEL_271;
                }
              }
LABEL_271:
              if ( (_BYTE *)v489.m128i_i64[0] != v490 )
                free((void *)v489.m128i_i64[0]);
              v299 = *(_QWORD *)v169;
              v300 = v463;
              v489.m128i_i64[0] = *(_QWORD *)v169;
              if ( !v463 )
              {
                v491.m128_u64[0] = 0;
LABEL_357:
                v343 = 2 * v463;
                goto LABEL_355;
              }
              v294 = v461;
              v301 = (v463 - 1) & (((unsigned int)v299 >> 9) ^ ((unsigned int)v299 >> 4));
              v302 = (__int64 *)(v461 + 16 * v301);
              v303 = *v302;
              if ( v299 == *v302 )
                goto LABEL_275;
              v340 = 1;
              v186 = nullptr;
              if ( v303 != -4096 )
              {
                while ( 1 )
                {
                  if ( v303 == -8192 && !v186 )
                    v186 = v302;
                  LODWORD(v301) = (v463 - 1) & (v340 + v301);
                  v302 = (__int64 *)(v461 + 16LL * (unsigned int)v301);
                  v303 = *v302;
                  if ( v299 == *v302 )
                    break;
                  if ( v303 == -4096 )
                  {
                    if ( v186 )
                      goto LABEL_349;
                    goto LABEL_348;
                  }
                  ++v340;
                }
LABEL_275:
                v186 = v302;
                sub_1AFD9B0(v184, v302, (_QWORD *)(16LL * v463 + v461), (__int64)&v461, 1);
                v185 = v491.m128_u64[0];
                goto LABEL_276;
              }
LABEL_348:
              v186 = v302;
LABEL_349:
              v295 = 3 * v463;
              v491.m128_u64[0] = (unsigned __int64)v186;
              v341 = v462 + 1;
              v296 = (unsigned int)(4 * (v462 + 1));
              if ( (unsigned int)v296 >= (unsigned int)v295 )
                goto LABEL_357;
              v295 = v463 - HIDWORD(v462) - v341;
              v296 = v463 >> 3;
              if ( (unsigned int)v295 > (unsigned int)v296 )
                goto LABEL_351;
              v343 = v463;
LABEL_355:
              sub_1B04B10(&v461, v343, v294, v299, v295, v296);
              sub_1AF7FA0(&v461, v489.m128i_i64, v184);
              v299 = v489.m128i_i64[0];
              v294 = v461;
              v300 = v463;
              v341 = v462 + 1;
              v186 = (__int64 *)v491.m128_u64[0];
LABEL_351:
              v342 = *v186 == -4096;
              LODWORD(v462) = v341;
              if ( !v342 )
                --HIDWORD(v462);
              *v186 = v299;
              *((_BYTE *)v186 + 8) = v293;
              sub_1AFD9B0(v184, v186, (_QWORD *)(16 * v300 + v294), (__int64)&v461, 1);
              v185 = v491.m128_u64[0];
LABEL_276:
              v187 = HIDWORD(v467[1]);
              if ( HIDWORD(v467[1]) )
                free(v467[0]);
LABEL_173:
              v191 = *(_BYTE *)(v185 + 8);
              if ( v191 )
              {
                v33 = v447;
                v35 = v448;
                v425 = v191;
                v36 = v449;
                v32 = v450;
                v34 = v443;
                a4 = v451;
                v159 = (__int64 *)v472.m128i_i64[0];
              }
              else
              {
                v192 = v386;
                v195 = sub_B7E900((__int64)v446, (__int64)v186, v187, v188, v189, v190);
                if ( v195 )
                {
LABEL_175:
                  v196 = *(_QWORD *)(v195 + 48);
                  v197 = (__int64 *)(v196 & 0xFFFFFFFFFFFFFFF0LL);
                  if ( (v196 & 0xFFFFFFFFFFFFFFF0LL) != 0
                    && ((unsigned __int8)sub_F613D0(*v197, (__int64)v186, v193, v194, v155, v156)
                     || sub_F61420(*v197, (__int64)v186, v193, v198, v155, v156)) )
                  {
                    v199 = v472.m128i_u32[2];
                    if ( v192 )
                    {
                      if ( v472.m128i_u32[3] <= (unsigned __int64)v472.m128i_u32[2] )
                      {
                        v193 = v472.m128i_u32[2] + 1LL;
                        v319 = v456 & 0xFFFFFFFF00000000LL | 1;
                        v456 = v319;
                        if ( v472.m128i_u32[3] < v193 )
                        {
                          v186 = &v473;
                          sub_2237220(&v472, &v473, v193, 16);
                          v199 = v472.m128i_u32[2];
                        }
                        v320 = (_QWORD *)(v472.m128i_i64[0] + 16 * v199);
                        v320[1] = v319;
                        *v320 = v438;
                        ++v472.m128i_i32[2];
                      }
                      else
                      {
                        v203 = v472.m128i_i64[0] + 16LL * v472.m128i_u32[2];
                        *(_DWORD *)(v203 + 8) = 1;
                        *(_QWORD *)v203 = v438;
                        ++v472.m128i_i32[2];
                      }
                    }
                    else
                    {
                      v193 = v472.m128i_i64[0];
                      ++*(_DWORD *)(v472.m128i_i64[0] + 16LL * v472.m128i_u32[2] - 8);
                    }
                    v200 = (unsigned int)v470;
                    v194 = HIDWORD(v470);
                    if ( (unsigned int)v470 >= (unsigned __int64)HIDWORD(v470) )
                    {
                      v193 = (unsigned int)v470 + 1LL;
                      if ( HIDWORD(v470) < v193 )
                      {
                        v186 = v471;
                        sub_2237220(&v469, v471, v193, 16);
                        v200 = (unsigned int)v470;
                      }
                    }
                    v201 = (char *)v469 + 16 * v200;
                    v192 = 0;
                    *v201 = v196;
                    v201[1] = v195;
                    LODWORD(v470) = v470 + 1;
                  }
                  while ( 1 )
                  {
                    v202 = *(_QWORD *)(v195 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                    v195 = v202;
                    if ( !v202 )
                      break;
                    if ( (*(_BYTE *)(v202 + 28) & 0x7Fu) - 49 <= 2 )
                      goto LABEL_175;
                  }
                }
LABEL_142:
                v159 = (__int64 *)v472.m128i_i64[0];
LABEL_143:
                v158 = v470;
                if ( (_DWORD)v470 )
                {
                  v157 = v469;
                  v160 = v472.m128i_u32[2];
                  goto LABEL_137;
                }
                v33 = v447;
                v35 = v448;
                v36 = v449;
                v32 = v450;
                v34 = v443;
                a4 = v451;
              }
              if ( v159 != &v473 )
                free(v159);
              v221 = 16LL * v463;
              operator delete(v461, v221, 8);
              if ( v469 != v471 )
                free(v469);
              if ( !v425 )
              {
LABEL_134:
                v97 = 0;
                goto LABEL_74;
              }
              v478.m128i_i64[0] = (__int64)&v479;
              v478.m128i_i64[1] = 0x400000000LL;
              v439 = sub_F63240(*v430, v221, v222, v223, v224, v225);
              v226 = (*(__int64 (__fastcall **)(_QWORD *))(*v439 + 16LL))(v439);
              v469 = nullptr;
              LODWORD(v470) = 0;
              v471[0] = 0;
              v395 = v226;
              v227 = sub_1AFE760(a1, HIDWORD(v226), (__int64)srcd, "_s", 2u, 0);
              v437 = sub_1AE9760((__int64)a1, v227, (__int64)srcd, 0);
              v489.m128i_i64[0] = (__int64)v490;
              v489.m128i_i64[1] = 0x400000000LL;
              v231 = sub_B7E900((__int64)v439, v227, v228, (__int64)&v489, v229, v230);
              v232 = v489.m128i_u32[2];
              if ( v231 )
              {
                v440 = v34;
                v233 = v231;
LABEL_222:
                v444 = *(_QWORD *)(v233 + 48);
                v234 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v233 + 16LL))(v233);
                v235 = *(_QWORD *)(v233 + 40);
                v491.m128_i32[2] = v234;
                v491.m128_u64[0] = v235;
                sub_B85890(v492, v235);
                v472.m128i_i64[0] = v233 | (*(_BYTE *)(v233 + 29) >> 5) & 3;
                v236 = sub_19C4C50(
                         a1,
                         v437,
                         0,
                         v395,
                         0,
                         0,
                         a7,
                         a8,
                         v395,
                         v233,
                         v472.m128i_i64[0],
                         0,
                         (__int64)&v491,
                         v444,
                         1,
                         0,
                         0);
                v237 = v489.m128i_u32[2];
                v238 = v489.m128i_u32[2] + 1LL;
                if ( v238 > v489.m128i_u32[3] )
                {
                  v445 = v236;
                  sub_2237220(&v489, v490, v238, 8);
                  v237 = v489.m128i_u32[2];
                  v236 = v445;
                }
                *(_QWORD *)(v489.m128i_i64[0] + 8 * v237) = v236;
                v232 = (unsigned int)++v489.m128i_i32[2];
                while ( 1 )
                {
                  v239 = *(_QWORD *)(v233 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v233 = v239;
                  if ( !v239 )
                    break;
                  if ( (*(_BYTE *)(v239 + 28) & 0x7Fu) - 49 <= 2 )
                    goto LABEL_222;
                }
                v34 = v440;
              }
              v472.m128i_i64[0] = 0;
              a7 = 0;
              v472.m128i_i32[2] = 0;
              v473 = 0;
              v240 = *(unsigned int *)(v34 + 344);
              v241 = (_QWORD *)a1[47].m128_u64[1];
              v491 = 0;
              *(_OWORD *)v492 = 0;
              v493 = 0;
              if ( (_DWORD)v240
                && (v242 = *(_QWORD *)(v34 + 336) + 6776 * v240 - 6776,
                    *(_QWORD *)(v242 + 6768) == *(_QWORD *)(v34 + 328))
                && (v335 = *(unsigned int *)(v242 + 8),
                    v336 = *(unsigned int *)(v34 + 27504),
                    (unsigned int)v335 > (unsigned int)v336)
                && (v337 = v335 - v336) != 0
                && (v338 = *(_QWORD *)v242 + 1688 * (v337 - 1)) != 0 )
              {
                v339 = *(_DWORD *)(v338 + 976);
                v442 = v232;
                v441 = v489.m128i_i64[0];
                *(_QWORD *)&v466 = 0;
                DWORD2(v466) = 0;
                v243 = 2 * (v339 != 72) + 1;
              }
              else
              {
                DWORD2(v466) = 0;
                v243 = 3;
                *(_QWORD *)&v466 = 0;
                v441 = v489.m128i_i64[0];
                v442 = v232;
              }
              v244 = &v464;
              LODWORD(v461) = 0;
              v464.m128i_i32[0] = 6;
              v245 = sub_1B5D1B0(
                       v241,
                       v464.m128i_i32,
                       1,
                       (int *)&v461,
                       1,
                       (__int64)&v491,
                       v472.m128i_i64,
                       v243,
                       0,
                       v441,
                       v442,
                       (int *)&v466,
                       0,
                       0,
                       0);
              v247 = v478.m128i_u32[2];
              v248 = v245;
              v249 = v478.m128i_u32[2] + 1LL;
              if ( v249 > v478.m128i_u32[3] )
              {
                v379 = v245;
                v244 = (__m128i *)&v479;
                sub_2237220(&v478, &v479, v249, 8);
                v247 = v478.m128i_u32[2];
                v248 = v379;
              }
              v250 = v478.m128i_i64[0];
              *(_QWORD *)(v478.m128i_i64[0] + 8 * v247) = v248;
              ++v478.m128i_i32[2];
              if ( HIDWORD(v492[1]) )
                free(v492[0]);
              if ( (_BYTE *)v489.m128i_i64[0] != v490 )
                free((void *)v489.m128i_i64[0]);
              v435 = sub_F63240(*v430, (__int64)v244, v250, v247, v248, v246);
              v251 = sub_B8C1B0((__int64)(v435 + 8));
              v431 = (_QWORD *)sub_B8C330(v251);
              v252 = v435[2];
              if ( (v252 & 4) != 0 )
                v253 = *(_QWORD *)(v252 & 0xFFFFFFFFFFFFFFF8LL);
              else
                v253 = v252 & 0xFFFFFFFFFFFFFFF8LL;
              v396 = (__m128i *)v253;
              v254 = sub_6F3470(v431[2188], "default", 7u);
              v376 = sub_BB22B0(
                       v431,
                       (__int64)v396,
                       0,
                       v254,
                       (__int64)srcd,
                       v254,
                       v478.m128i_i64[0],
                       v478.m128i_u32[2],
                       0);
              v259 = sub_15F18E0((__int64)a1, (__int64)v396, v255, v256, v257, v258);
              if ( v259 )
                sub_17B7670((__int64)a1, v376, (__int64)v259, 0, v262, v263);
              sub_B94AD0(v396, v376, v260, v261, v262, v263);
              *(_BYTE *)(v376 + 29) |= 0x60u;
              v397 = *(_QWORD *)(v437 + 16);
              sub_B8C080(v397, v376 + 64);
              sub_B90130(v397, v376 + 64, v264, v265, v266, v267);
              sub_B94AD0((__m128i *)(v376 + 64), v397, v268, v269, v270, v271);
              *(_QWORD *)sub_EF5320(*(unsigned int **)(v376 + 56)) = v437;
              v275 = sub_B7E900((__int64)v435, v397, v272, v437, v273, v274);
              v276 = sub_C09130(v431, 0, 0, *(_DWORD *)(v275 + 24), v376, 0, 0, (__int64)srcd, 1, 0, 0, 0);
              if ( (__int64 *)v478.m128i_i64[0] != &v479 )
              {
                v377 = v276;
                free((void *)v478.m128i_i64[0]);
                v276 = v377;
              }
              v95 = v276 & 0xFFFFFFFFFFFFFFFELL;
LABEL_73:
              v97 = v95;
LABEL_74:
              sub_14B7B40(a4 + 1472, v97);
              sub_14B7B40(a4 + 16, v35);
              v367 = (unsigned int)v476;
              v99 = *(unsigned int *)(v34 + 344);
              if ( !(_DWORD)v99
                || (v100 = *(_QWORD *)(v34 + 336) + 6776 * v99 - 6776, *(_QWORD *)(v100 + 6768) != *(_QWORD *)(v34 + 328))
                || (v101 = *(unsigned int *)(v100 + 8),
                    v102 = *(unsigned int *)(v34 + 27504),
                    (unsigned int)v101 <= (unsigned int)v102)
                || (v103 = v101 - v102) == 0 )
              {
                BUG();
              }
              v104 = *(_QWORD *)v100 + 1688 * (v103 - 1);
              v105 = *(_DWORD *)(v104 + 720);
              srcb = ptr;
              v106 = v104;
              v107 = (__int64 *)(v104 + 704);
              v108 = *(_QWORD *)(v104 + 704);
              if ( !v105 )
                goto LABEL_281;
              v98 = v105 - 1;
              v387 = ((unsigned int)v416 >> 9) ^ ((unsigned int)v416 >> 4);
              v109 = v98 & v387;
              v110 = v108 + 1184LL * ((unsigned int)v98 & v387);
              v111 = *(_QWORD *)v110;
              if ( v416 != *(_QWORD *)v110 )
              {
                v309 = 1;
                v102 = 0;
                if ( v111 == -4096 )
                  goto LABEL_287;
                while ( 1 )
                {
                  if ( v111 == -8192 && !v102 )
                    v102 = v110;
                  v109 = v98 & (v309 + v109);
                  v110 = v108 + 1184LL * v109;
                  v111 = *(_QWORD *)v110;
                  if ( v416 == *(_QWORD *)v110 )
                    goto LABEL_80;
                  if ( v111 == -4096 )
                    break;
                  ++v309;
                }
                if ( !v102 )
LABEL_287:
                  v102 = v110;
                v100 = (unsigned int)(*(_DWORD *)(v106 + 712) + 1);
                if ( 4 * (int)v100 >= 3 * v105 )
                {
LABEL_281:
                  sub_1B5BC20(v107, 2 * v105, v102, v100, v98, (__int64)v107);
                  v304 = *(_DWORD *)(v106 + 720);
                  if ( v304 )
                  {
                    v305 = v304 - 1;
                    v306 = *(_QWORD *)(v106 + 704);
                    LODWORD(v100) = *(_DWORD *)(v106 + 712) + 1;
                    v307 = v305 & (((unsigned int)v416 >> 9) ^ ((unsigned int)v416 >> 4));
                    v102 = v306 + 1184LL * v307;
                    v308 = *(_QWORD *)v102;
                    if ( v416 != *(_QWORD *)v102 )
                    {
                      v353 = 1;
                      v354 = nullptr;
                      if ( v308 == -4096 )
                        goto LABEL_300;
                      while ( 1 )
                      {
                        if ( v308 == -8192 && !v354 )
                          v354 = (__int64 *)v102;
                        v307 = v305 & (v353 + v307);
                        v102 = v306 + 1184LL * v307;
                        v308 = *(_QWORD *)v102;
                        if ( v416 == *(_QWORD *)v102 )
                          break;
                        if ( v308 == -4096 )
                        {
                          if ( !v354 )
                            goto LABEL_300;
                          v308 = *v354;
                          v102 = (__int64)v354;
                          goto LABEL_283;
                        }
                        ++v353;
                      }
                    }
                    goto LABEL_283;
                  }
                }
                else
                {
                  if ( v105 - *(_DWORD *)(v106 + 716) - (unsigned int)v100 > v105 >> 3 )
                  {
                    v308 = *(_QWORD *)v102;
                    goto LABEL_283;
                  }
                  sub_1B5BC20(v107, v105, v102, v100, v98, (__int64)v107);
                  v313 = *(_DWORD *)(v106 + 720);
                  if ( v313 )
                  {
                    v314 = v313 - 1;
                    v315 = *(_QWORD *)(v106 + 704);
                    v316 = v314 & v387;
                    LODWORD(v100) = *(_DWORD *)(v106 + 712) + 1;
                    v102 = v315 + 1184LL * (v314 & v387);
                    v308 = *(_QWORD *)v102;
                    if ( v416 == *(_QWORD *)v102 )
                      goto LABEL_283;
                    v317 = 1;
                    v318 = nullptr;
                    if ( v308 == -4096 )
                    {
LABEL_300:
                      *(_DWORD *)(v106 + 712) = v100;
LABEL_285:
                      v113 = v102 + 8;
                      v116 = 0;
                      v115 = 144;
                      *(_QWORD *)v102 = v416;
                      memset((void *)(v102 + 8), 0, 0x498u);
                      *(_DWORD *)(v102 + 1176) = 106;
                      *(_QWORD *)(v102 + 8) = v102 + 24;
                      *(_QWORD *)(v102 + 16) = 0x800000000LL;
                      v114 = 1;
                      v112 = 0;
                      goto LABEL_82;
                    }
                    while ( 1 )
                    {
                      if ( !v318 && v308 == -8192 )
                        v318 = (__int64 *)v102;
                      v316 = v314 & (v317 + v316);
                      v102 = v315 + 1184LL * v316;
                      v308 = *(_QWORD *)v102;
                      if ( v416 == *(_QWORD *)v102 )
                        break;
                      if ( v308 == -4096 )
                      {
                        if ( !v318 )
                          goto LABEL_300;
                        v308 = *v318;
                        v102 = (__int64)v318;
                        break;
                      }
                      ++v317;
                    }
LABEL_283:
                    *(_DWORD *)(v106 + 712) = v100;
                    if ( v308 != -4096 )
                      --*(_DWORD *)(v106 + 716);
                    goto LABEL_285;
                  }
                }
                ++*(_DWORD *)(v106 + 712);
                BUG();
              }
LABEL_80:
              v112 = *(unsigned int *)(v110 + 16);
              v113 = v110 + 8;
              v114 = v112 + 1;
              v115 = 144 * (v112 + 1);
              v116 = 144LL * (unsigned int)(v112 + 1) - 144;
              if ( *(unsigned int *)(v110 + 20) < (unsigned __int64)(v112 + 1) )
              {
                v432 = 144 * (v112 + 1);
                v429 = v112 + 1;
                v426 = v110;
                v388 = v110 + 8;
                sub_1B5B6F0(v110 + 8, v112 + 1);
                v113 = v388;
                v115 = v432;
                v114 = v429;
                v112 = *(unsigned int *)(v426 + 16);
              }
LABEL_82:
              v117 = *(_QWORD *)v113;
              v118 = *(_QWORD *)v113 + 144 * v112;
              v119 = *(_QWORD *)v113 + v115;
              if ( v118 != v119 )
              {
                do
                {
                  v120 = v118 + 16;
                  *(_DWORD *)(v118 + 8) = 0;
                  v118 += 144;
                  *(_QWORD *)(v118 - 144) = v120;
                  *(_DWORD *)(v118 - 132) = 8;
                }
                while ( v119 != v118 );
                v117 = *(_QWORD *)v113;
              }
              v121 = v117 + v116;
              *(_DWORD *)(v113 + 8) = v114;
              v122 = *(unsigned int *)(v121 + 8);
              v123 = 16 * v367;
              v124 = (16 * v367) >> 4;
              if ( v124 + v122 > (unsigned __int64)*(unsigned int *)(v121 + 12) )
              {
                v427 = v123 >> 4;
                v394 = v113;
                sub_2237220(v121, v121 + 16, v124 + v122, 16);
                v122 = *(unsigned int *)(v121 + 8);
                v113 = v394;
                LODWORD(v124) = v427;
                v123 = 16 * v367;
              }
              if ( v123 )
              {
                v389 = v124;
                v368 = v113;
                memcpy((void *)(*(_QWORD *)v121 + 16 * v122), srcb, v123);
                LODWORD(v122) = *(_DWORD *)(v121 + 8);
                LODWORD(v124) = v389;
                v113 = v368;
              }
              *(_DWORD *)(v121 + 8) = v124 + v122;
              v125 = *(unsigned int *)(a4 + 168);
              *(_DWORD *)(v113 + 1168) = 55;
              v42 = v125 + 1;
              sub_1B5B800(a4 + 160, v42);
              v126 = ptr;
              v127 = *(_QWORD *)(a4 + 160) + 144LL * *(unsigned int *)(a4 + 168) - 144;
              v128 = 16LL * (unsigned int)v476;
              v129 = *(unsigned int *)(v127 + 8);
              v40 = v128 >> 4;
              v130 = (v128 >> 4) + v129;
              if ( v130 > *(unsigned int *)(v127 + 12) )
              {
                v42 = v127 + 16;
                srcg = v128 >> 4;
                v393 = 16LL * (unsigned int)v476;
                v372 = ptr;
                sub_2237220(*(_QWORD *)(a4 + 160) + 144LL * *(unsigned int *)(a4 + 168) - 144, v127 + 16, v130, 16);
                v129 = *(unsigned int *)(v127 + 8);
                v40 = srcg;
                v128 = v393;
                v126 = v372;
              }
              if ( v128 )
              {
                v42 = (unsigned __int64)v126;
                v369 = v40;
                memcpy((void *)(*(_QWORD *)v127 + 16 * v129), v126, v128);
                LODWORD(v129) = *(_DWORD *)(v127 + 8);
                v40 = v369;
              }
              *(_DWORD *)(v127 + 8) = v40 + v129;
              v131 = v416;
              v39 = *(unsigned int *)(a4 + 1340);
              if ( (*v424 & 0x1FF) == 0x2E )
                v131 = 0;
              v132 = *(unsigned int *)(a4 + 1336);
              if ( v132 + 1 > v39 )
              {
                v42 = a4 + 1344;
                sub_2237220(a4 + 1328, a4 + 1344, v132 + 1, 8);
                v132 = *(unsigned int *)(a4 + 1336);
              }
              v38 = *(_QWORD *)(a4 + 1328);
              *(_QWORD *)(v38 + 8 * v132) = v131;
              ++*(_DWORD *)(a4 + 1336);
LABEL_57:
              if ( ptr != v477 )
                free(ptr);
LABEL_28:
              if ( (unsigned __int64 *)v363 == v32 )
                return;
LABEL_29:
              v35 = *v32;
              v364 = sub_C00A40(*v32, v42, v38, v39, v40);
              if ( v33 != v36 )
                ++v33;
              ++v32;
              goto LABEL_32;
            }
          }
        }
        if ( *v183 != -4096 )
        {
          v219 = 1;
          do
          {
            LODWORD(v182) = (v463 - 1) & (v219 + v182);
            v183 = (_QWORD *)(v461 + 16LL * (unsigned int)v182);
            if ( v181 == *v183 )
              goto LABEL_171;
            ++v219;
          }
          while ( *v183 != -4096 );
        }
      }
      v184 = &v491;
      sub_1AFD9B0(&v491, (_QWORD *)(v461 + 16LL * v463), (_QWORD *)(v461 + 16LL * v463), (__int64)&v461, 1);
      v185 = v491.m128_u64[0];
      goto LABEL_172;
    }
    v170 = sub_1AE5FF0(v34);
    v90 = srca;
    if ( v170 )
    {
      v171 = *(_DWORD *)(v170 + 976);
      if ( v171 == 72 && a13 > 1 )
      {
        if ( *(_DWORD *)(a1[14].m128_u64[1] + 64) <= 0x33u )
        {
          sub_168B9F0((__int64)&v491, &a1->m128_i64[1], v414, 0x11A6u, 0);
          v472.m128i_i32[0] = v421;
          v312 = sub_1587D10((__int64)&v491, v472.m128i_i32);
          v478.m128i_i64[0] = (__int64)sub_FFDD70(55, a13);
          v205 = v420;
          v206 = 72;
          v207 = sub_15AFC70(v312, &v478);
          goto LABEL_196;
        }
        goto LABEL_149;
      }
      if ( v171 == 73 )
      {
        if ( v422 && *(_DWORD *)(a1[14].m128_u64[1] + 64) <= 0x33u )
        {
          sub_168B9F0((__int64)&v491, &a1->m128_i64[1], v414, 0x11A6u, 0);
          v472.m128i_i32[0] = v421;
          v204 = sub_1587D10((__int64)&v491, v472.m128i_i32);
          v478.m128i_i64[0] = (__int64)sub_FFDD70(55, a13);
          v205 = v420;
          v206 = 73;
          v207 = sub_15AFC70(v204, &v478);
LABEL_196:
          v208.m128i_i64[0] = sub_20EAB70(v206, v205);
          v42 = (unsigned __int64)&v489;
          v489 = v208;
          sub_166BAF0(v207, (__int64)&v489);
          sub_15F7200(&v491);
          goto LABEL_57;
        }
LABEL_149:
        if ( v415 != v423 )
        {
          v311 = &v491;
          v378 = v171;
          sub_168B9F0((__int64)&v491, &a1->m128_i64[1], v414, 0x11A7u, 0);
          v478.m128i_i64[0] = (__int64)sub_FFDD70(55, 13);
LABEL_294:
          v205 = v420;
          v207 = sub_15AFC70((__int64)v311, &v478);
          v206 = v378;
          goto LABEL_196;
        }
        goto LABEL_150;
      }
      if ( (unsigned int)(v171 - 72) <= 1 )
      {
        v171 = 72;
        goto LABEL_149;
      }
      if ( v171 == 71 )
      {
LABEL_151:
        if ( a13 <= 3 )
        {
LABEL_152:
          if ( v428 )
          {
            if ( *(_DWORD *)(a1[14].m128_u64[1] + 64) <= 0x2Du
              && (v436 = v90, srck = v171, v310 = sub_FFE8A0(v171), v171 = srck, v90 = v436, v310)
              || v171 == 70 )
            {
              srcj = v90;
              sub_1AFBE90((__int64)&v489, v34, v428);
              v173 = sub_FFEF20(v489.m128i_i32[1]);
              v90 = srcj;
              if ( v173 )
              {
                sub_168B9F0((__int64)&v491, &a1->m128_i64[1], v364, 0x1224u, 0);
                sub_1AF81E0(&v472, v489.m128i_u32[1]);
                v174 = sub_1682AF0((__int64)&v491, (__int64)&v472);
                sub_1AF81E0(&v478, 0x37u);
                v175 = sub_1682AF0(v174, (__int64)&v478);
                v176 = sub_1AE5FF0(v34);
                if ( v176 )
                  v177 = *(unsigned int *)(v176 + 976);
                else
                  v177 = 103;
                v469 = (void *)sub_20EAB70(v177, v420);
                v470 = v178;
                sub_166BAF0(v175, (__int64)&v469);
                if ( (__int64 *)v478.m128i_i64[0] != &v479 )
                  operator delete((void *)v478.m128i_i64[0]);
                v139 = (void *)v472.m128i_i64[0];
                if ( (__int64 *)v472.m128i_i64[0] == &v473 )
                  goto LABEL_108;
LABEL_107:
                operator delete(v139);
LABEL_108:
                sub_15F7200(&v491);
                v42 = v34;
                sub_1B20830((__int64)a1, v34, v416, (unsigned int *)&v489, 0);
                goto LABEL_57;
              }
            }
          }
          goto LABEL_69;
        }
        v378 = v171;
        sub_168B9F0((__int64)&v491, &a1->m128_i64[1], v414, 0x11A6u, 0);
        v472.m128i_i32[0] = v421;
        v311 = (__m128 *)sub_1587D10((__int64)&v491, v472.m128i_i32);
        v478.m128i_i64[0] = (__int64)sub_FFDD70(55, a13);
        goto LABEL_294;
      }
    }
    else
    {
      v171 = 103;
    }
LABEL_150:
    v434 = srca;
    srci = v171;
    v172 = sub_FFE8A0(v171);
    v171 = srci;
    v90 = v434;
    if ( !v172 )
      goto LABEL_152;
    goto LABEL_151;
  }
  v55 = &a1->m128_i64[1];
  if ( *(_DWORD *)(a1[14].m128_u64[1] + 64) <= 0x31u )
  {
    sub_168B9F0((__int64)&v491, v55, v364, 0x1187u, 0);
    v74 = sub_EEC8C0(v35, (__int64)v55, *(double *)a7.m128_u64);
    v42 = (unsigned __int64)&v489;
    v489.m128i_i64[0] = v74;
    sub_1587DB0((__int64)&v491, v489.m128i_i64);
    sub_15F7200(&v491);
    goto LABEL_28;
  }
  sub_168B9F0((__int64)&v491, v55, v364, 0x11CEu, 0);
  sub_1AF81E0(&v489, a3);
  v400 = sub_1682AF0((__int64)&v491, (__int64)&v489);
  v42 = (unsigned __int64)&v478;
  v478.m128i_i64[0] = sub_EEC8C0(v35, (__int64)&v489, *(double *)a7.m128_u64);
  sub_1587DB0(v400, v478.m128i_i64);
  if ( (_BYTE *)v489.m128i_i64[0] != v490 )
    operator delete((void *)v489.m128i_i64[0]);
  sub_15F7200(&v491);
  if ( (unsigned __int64 *)v363 != v32 )
    goto LABEL_29;
}
