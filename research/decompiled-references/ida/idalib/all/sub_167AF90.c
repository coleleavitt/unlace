void __fastcall sub_167AF90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  __int32 v15; // edx
  unsigned __int8 v16; // al
  __int64 v17; // rcx
  __int64 **v18; // rbp
  __int64 *v19; // rbx
  unsigned __int8 *v20; // rax
  void **v21; // rsi
  size_t v22; // rdx
  _BYTE *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rdx
  bool v28; // zf
  char *v29; // rbx
  __int64 *v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rdx
  char *v33; // rax
  char *v34; // rsi
  __m128i v35; // xmm0
  char *v36; // r12
  char *v37; // rdi
  char *v38; // rdi
  char *v39; // rdi
  unsigned int v40; // ecx
  __int64 v41; // r12
  char v42; // si
  __int64 v43; // rdx
  void *v44; // r8
  unsigned int v45; // ebp
  char *v46; // rbx
  __int64 v47; // r9
  char v48; // al
  char *v49; // rbx
  char *v50; // r12
  char *v51; // rdi
  char *v52; // rdi
  char *v53; // rdi
  _QWORD *v54; // rbx
  _QWORD *v55; // r12
  _QWORD *v56; // rdi
  _QWORD *v57; // rdi
  _QWORD *v58; // rdi
  __int64 v59; // rcx
  unsigned int *v60; // rdi
  __int64 *v61; // rbx
  unsigned __int8 *v62; // rax
  void **v63; // rsi
  size_t v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int v68; // eax
  __int64 v69; // rdx
  char *v70; // rbx
  __int64 *v71; // rbx
  __int64 v72; // rbp
  __int64 v73; // r12
  __int32 v74; // r14d
  char *v75; // rbp
  unsigned int v76; // ecx
  __int64 v77; // rbp
  char v78; // si
  __int64 v79; // rbx
  void *v80; // r14
  int v81; // r12d
  __int128 v82; // xmm0
  char *v83; // rsi
  __int64 v84; // r8
  __int64 v85; // r9
  char v86; // al
  int v87; // eax
  __int64 **v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int64 v91; // rax
  int v92; // eax
  char v93; // al
  __int64 v94; // rdx
  __int128 *v95; // rdi
  __int64 **v96; // r12
  __int64 v97; // rax
  __int64 v98; // rdx
  int v99; // eax
  unsigned __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  __int64 v104; // r9
  __int64 v105; // r8
  __int64 *v106; // rbp
  __int64 v107; // r13
  int v108; // eax
  int v109; // r12d
  __int64 v110; // rax
  int v111; // r14d
  unsigned int v112; // r13d
  __int64 v113; // r15
  unsigned int v114; // esi
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 **v117; // rbx
  __int64 *v118; // rbp
  unsigned __int8 *v119; // rax
  size_t v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 *v124; // rbx
  unsigned __int8 *v125; // rax
  size_t v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  unsigned int v130; // eax
  __int64 v131; // r12
  int v132; // ebp
  int v133; // esi
  __int64 v134; // rbx
  void *v135; // rcx
  int v136; // r15d
  char *v137; // r14
  __int64 v138; // r8
  __int64 v139; // r9
  char v140; // al
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  char *v144; // rax
  char *v145; // rdx
  __m128i v146; // xmm0
  __int64 *v147; // rbx
  unsigned __int8 *v148; // rax
  void **v149; // rsi
  size_t v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  char *v155; // rbx
  char *v156; // rbx
  __int64 v157; // r12
  __int64 v158; // rbp
  __int32 v159; // r14d
  char *v160; // rbp
  char *v161; // rdi
  char *v162; // rdi
  unsigned int v163; // eax
  __int64 v164; // r12
  int v165; // ebp
  int v166; // esi
  __int64 v167; // rbx
  void *v168; // r8
  int v169; // r14d
  __int64 v170; // r9
  char v171; // al
  char *v172; // rax
  char *v173; // rdx
  __m128i v174; // xmm0
  __int64 v175; // rax
  unsigned __int64 v176; // rdi
  char *v177; // rax
  __int64 v178; // rdx
  size_t v179; // rax
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 **v186; // rbp
  __int64 **v187; // r12
  __int64 *v188; // r10
  unsigned __int64 v189; // rdx
  unsigned __int64 v190; // rdx
  unsigned __int64 v191; // rax
  __int32 v192; // edx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rcx
  __int64 v197; // r8
  __int64 v198; // r9
  __int64 **v199; // rdx
  __int64 *v200; // rbx
  __int64 v201; // rax
  int v202; // r12d
  unsigned __int16 v203; // bp
  unsigned __int8 *v204; // rax
  void **v205; // rsi
  size_t v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  unsigned int v210; // eax
  _BYTE *v211; // rdx
  char *v212; // rbx
  _QWORD *v213; // r8
  __int64 v214; // rcx
  __int64 v215; // rbx
  char *v216; // rbp
  char *v217; // rdi
  char *v218; // rdi
  char *v219; // rdi
  unsigned int v220; // ecx
  __int64 v221; // rbp
  char v222; // di
  __int64 v223; // rbx
  __int64 v224; // r13
  __int32 v225; // r14d
  __int128 v226; // xmm0
  __int64 v227; // r9
  bool v228; // bl
  __int64 v229; // rdi
  _BOOL8 v230; // r8
  int v231; // ecx
  int v232; // edx
  __int64 v233; // rcx
  __m128i *v234; // rbx
  __int64 v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 v239; // r9
  char *v240; // r12
  __int64 v241; // r8
  __int64 v242; // r9
  char v243; // al
  _QWORD *v244; // rax
  __int64 *v245; // rdx
  __int64 *v246; // r11
  _QWORD *v247; // rdx
  __int64 v248; // rsi
  _QWORD *v249; // rsi
  __int64 v250; // rdx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // rsi
  __int64 v254; // r13
  __int64 v255; // rdx
  __int64 v256; // rcx
  __int64 v257; // r8
  __int64 v258; // r9
  _QWORD *v259; // rax
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  int v264; // ecx
  int v265; // edx
  __int64 v266; // rcx
  __m128i *v267; // rbx
  __int64 v268; // rdx
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // r9
  unsigned __int8 v272; // dl
  int v273; // eax
  __int64 v274; // rdx
  __int64 v275; // rbx
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 **v280; // rbp
  __int64 **v281; // r15
  __int64 *v282; // r12
  unsigned __int8 *v283; // rax
  size_t v284; // rdx
  __int64 v285; // rcx
  __int64 v286; // r8
  __int64 v287; // r9
  __int64 **v288; // rbx
  __int64 *v289; // r12
  unsigned __int8 *v290; // rax
  size_t v291; // rdx
  __int64 v292; // rcx
  __int64 v293; // r8
  __int64 v294; // r9
  __int64 v295; // rcx
  __int64 v296; // r8
  __int64 v297; // r9
  char *v298; // rax
  char *v299; // rsi
  __int64 v300; // r12
  __int64 v301; // rbp
  int v302; // eax
  __int64 v303; // rcx
  __int64 v304; // r8
  __int64 v305; // r9
  char *v306; // rax
  __int64 v307; // rdx
  unsigned __int64 v308; // rax
  unsigned __int64 v309; // rdx
  unsigned __int64 v310; // rsi
  __int64 v311; // rdx
  unsigned int *v312; // rdi
  __int64 *v313; // rbx
  unsigned __int8 *v314; // rax
  void **v315; // rsi
  size_t v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // r8
  __int64 v319; // r9
  unsigned int v320; // eax
  _BYTE *v321; // rdx
  __int64 *v322; // rax
  __int64 v323; // rcx
  __int64 v324; // r13
  unsigned int v325; // r12d
  _QWORD *v326; // rbp
  _QWORD *v327; // r13
  _QWORD *v328; // rdi
  _QWORD *v329; // rdi
  _QWORD *v330; // rdi
  unsigned int v331; // ecx
  __int64 v332; // r12
  char v333; // dl
  __int64 v334; // rcx
  void *v335; // r14
  unsigned int v336; // r13d
  char *v337; // rbp
  __int64 v338; // r8
  __int64 v339; // r9
  char v340; // al
  char *v341; // rax
  char *v342; // rsi
  __int64 v343; // rdx
  _BYTE *v344; // rdi
  __int64 **v345; // rbx
  unsigned __int8 *v346; // rax
  size_t v347; // rdx
  __int64 v348; // rcx
  __int64 v349; // r8
  __int64 v350; // r9
  __int32 v351; // [rsp+28h] [rbp-650h]
  unsigned int v352; // [rsp+28h] [rbp-650h]
  unsigned int v353; // [rsp+28h] [rbp-650h]
  __int64 **v354; // [rsp+28h] [rbp-650h]
  __int64 **v355; // [rsp+28h] [rbp-650h]
  char *v356; // [rsp+28h] [rbp-650h]
  __int64 *v357; // [rsp+28h] [rbp-650h]
  _QWORD *v358; // [rsp+28h] [rbp-650h]
  __int64 **v359; // [rsp+28h] [rbp-650h]
  __int64 v360; // [rsp+28h] [rbp-650h]
  __int64 *v361; // [rsp+28h] [rbp-650h]
  __int64 v362; // [rsp+30h] [rbp-648h]
  __int64 v363; // [rsp+30h] [rbp-648h]
  __int64 v364; // [rsp+30h] [rbp-648h]
  __int64 v365; // [rsp+38h] [rbp-640h]
  void *v366; // [rsp+38h] [rbp-640h]
  __int64 v367; // [rsp+38h] [rbp-640h]
  __int64 v368; // [rsp+38h] [rbp-640h]
  void *v369; // [rsp+38h] [rbp-640h]
  void *v370; // [rsp+38h] [rbp-640h]
  __int64 **v371; // [rsp+38h] [rbp-640h]
  unsigned __int64 v372; // [rsp+38h] [rbp-640h]
  __int64 v373; // [rsp+40h] [rbp-638h]
  unsigned int v374; // [rsp+40h] [rbp-638h]
  unsigned int v375; // [rsp+40h] [rbp-638h]
  unsigned int v376; // [rsp+40h] [rbp-638h]
  unsigned int v377; // [rsp+40h] [rbp-638h]
  __int64 **v378; // [rsp+40h] [rbp-638h]
  __int64 **v379; // [rsp+40h] [rbp-638h]
  __int64 **v380; // [rsp+48h] [rbp-630h]
  unsigned __int64 v381; // [rsp+48h] [rbp-630h]
  unsigned int v382; // [rsp+48h] [rbp-630h]
  unsigned int v383; // [rsp+48h] [rbp-630h]
  __int64 v384; // [rsp+48h] [rbp-630h]
  __int64 v385; // [rsp+48h] [rbp-630h]
  __int64 v386; // [rsp+48h] [rbp-630h]
  unsigned int v387; // [rsp+48h] [rbp-630h]
  __int64 v388; // [rsp+50h] [rbp-628h]
  __int64 **v389; // [rsp+50h] [rbp-628h]
  __int64 v390; // [rsp+50h] [rbp-628h]
  __int64 v391; // [rsp+50h] [rbp-628h]
  __int64 v392; // [rsp+50h] [rbp-628h]
  __int64 v393; // [rsp+58h] [rbp-620h]
  __int64 **v394; // [rsp+58h] [rbp-620h]
  __int64 **v395; // [rsp+58h] [rbp-620h]
  __int64 **v396; // [rsp+60h] [rbp-618h]
  __int64 **v397; // [rsp+60h] [rbp-618h]
  __int64 **v398; // [rsp+68h] [rbp-610h]
  __int64 v399; // [rsp+68h] [rbp-610h]
  __int64 **v400; // [rsp+68h] [rbp-610h]
  __int64 **v401; // [rsp+68h] [rbp-610h]
  __int64 **v402; // [rsp+68h] [rbp-610h]
  unsigned __int64 v403; // [rsp+70h] [rbp-608h]
  __int64 v404; // [rsp+70h] [rbp-608h]
  char v405; // [rsp+70h] [rbp-608h]
  __int64 **v406; // [rsp+70h] [rbp-608h]
  char v407; // [rsp+78h] [rbp-600h]
  __int64 v408; // [rsp+80h] [rbp-5F8h]
  unsigned __int64 v409; // [rsp+80h] [rbp-5F8h]
  int v410; // [rsp+98h] [rbp-5E0h]
  int v411; // [rsp+9Ch] [rbp-5DCh]
  char v412; // [rsp+A0h] [rbp-5D8h]
  __int64 *v413; // [rsp+A0h] [rbp-5D8h]
  __int64 v414; // [rsp+A8h] [rbp-5D0h]
  int v415; // [rsp+B8h] [rbp-5C0h]
  int v416; // [rsp+BCh] [rbp-5BCh]
  unsigned __int64 v417; // [rsp+C0h] [rbp-5B8h] BYREF
  unsigned __int64 *v418; // [rsp+C8h] [rbp-5B0h] BYREF
  __m128i v419; // [rsp+D0h] [rbp-5A8h] BYREF
  unsigned int v420; // [rsp+E0h] [rbp-598h]
  __int128 v421; // [rsp+F0h] [rbp-588h] BYREF
  unsigned int v422; // [rsp+100h] [rbp-578h]
  __m128i v423; // [rsp+110h] [rbp-568h] BYREF
  unsigned int v424; // [rsp+120h] [rbp-558h]
  __m128i si128; // [rsp+130h] [rbp-548h] BYREF
  unsigned int v426; // [rsp+140h] [rbp-538h]
  void *v427[2]; // [rsp+150h] [rbp-528h] BYREF
  unsigned int v428[4]; // [rsp+160h] [rbp-518h] BYREF
  void *v429[2]; // [rsp+170h] [rbp-508h] BYREF
  __int128 v430; // [rsp+180h] [rbp-4F8h] BYREF
  unsigned int v431; // [rsp+190h] [rbp-4E8h]
  _BYTE *v432; // [rsp+198h] [rbp-4E0h] BYREF
  __int64 v433; // [rsp+1A0h] [rbp-4D8h]
  _BYTE v434[16]; // [rsp+1A8h] [rbp-4D0h] BYREF
  __int16 v435; // [rsp+1B8h] [rbp-4C0h]
  __int64 *v436; // [rsp+1C0h] [rbp-4B8h]
  char *v437; // [rsp+1C8h] [rbp-4B0h]
  __int64 v438; // [rsp+1D0h] [rbp-4A8h] BYREF
  char v439; // [rsp+1D8h] [rbp-4A0h] BYREF
  char v440; // [rsp+1E0h] [rbp-498h]
  char *v441; // [rsp+1E8h] [rbp-490h]
  __int64 v442; // [rsp+1F0h] [rbp-488h]
  char v443; // [rsp+1F8h] [rbp-480h] BYREF
  __int64 v444; // [rsp+208h] [rbp-470h]
  __int64 v445; // [rsp+210h] [rbp-468h]
  __int64 v446; // [rsp+218h] [rbp-460h]
  void *v447; // [rsp+220h] [rbp-458h] BYREF
  __int64 v448; // [rsp+228h] [rbp-450h]
  _BYTE v449[88]; // [rsp+230h] [rbp-448h] BYREF
  __int64 v450; // [rsp+288h] [rbp-3F0h]
  _BYTE *v451; // [rsp+2B0h] [rbp-3C8h]
  _BYTE *v452; // [rsp+2B8h] [rbp-3C0h]
  __int64 v453; // [rsp+2E0h] [rbp-398h]
  __int64 v454; // [rsp+2F0h] [rbp-388h]
  char *v455; // [rsp+300h] [rbp-378h] BYREF
  __int64 v456; // [rsp+308h] [rbp-370h]
  _BYTE v457[88]; // [rsp+310h] [rbp-368h] BYREF
  __int64 v458; // [rsp+368h] [rbp-310h]
  _BYTE *v459; // [rsp+390h] [rbp-2E8h]
  _BYTE *v460; // [rsp+398h] [rbp-2E0h]
  __int64 v461; // [rsp+3C0h] [rbp-2B8h]
  __int64 v462; // [rsp+3D0h] [rbp-2A8h]
  __int64 v463; // [rsp+450h] [rbp-228h]
  __int64 v464; // [rsp+458h] [rbp-220h]
  __int64 v465; // [rsp+490h] [rbp-1E8h]
  void *ptr; // [rsp+4A0h] [rbp-1D8h] BYREF
  __int64 v467; // [rsp+4A8h] [rbp-1D0h]
  _BYTE v468[16]; // [rsp+4B0h] [rbp-1C8h] BYREF
  char v469; // [rsp+4C0h] [rbp-1B8h]
  _BYTE *v470; // [rsp+4C8h] [rbp-1B0h] BYREF
  __int64 v471; // [rsp+4D0h] [rbp-1A8h]
  _BYTE v472[16]; // [rsp+4D8h] [rbp-1A0h] BYREF
  __int16 v473; // [rsp+4E8h] [rbp-190h] BYREF
  __int64 *v474; // [rsp+4F0h] [rbp-188h] BYREF
  __int64 *v475; // [rsp+4F8h] [rbp-180h]
  __int64 v476; // [rsp+500h] [rbp-178h] BYREF
  __int64 v477; // [rsp+508h] [rbp-170h] BYREF
  char v478[8]; // [rsp+510h] [rbp-168h] BYREF
  char *v479; // [rsp+518h] [rbp-160h]
  __int64 v480; // [rsp+520h] [rbp-158h]
  char v481; // [rsp+528h] [rbp-150h] BYREF
  _BYTE *v482; // [rsp+530h] [rbp-148h]
  _BYTE *v483; // [rsp+538h] [rbp-140h]
  __int64 v484; // [rsp+540h] [rbp-138h]
  __int64 v485; // [rsp+548h] [rbp-130h]
  __int64 v486; // [rsp+560h] [rbp-118h]
  __int64 v487; // [rsp+570h] [rbp-108h]
  __int64 v488; // [rsp+5F0h] [rbp-88h]
  __int64 v489; // [rsp+5F8h] [rbp-80h]
  __int64 v490; // [rsp+630h] [rbp-48h]

  if ( !a2 )
    return;
  v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v8 = *(_QWORD *)v8;
  v9 = a2;
  v10 = a1;
  v11 = *(_BYTE *)(v8 + 8) & 0x7F;
  if ( v11 != 24 && v11 && !sub_B8E4C0(v8) && !sub_B8E5D0(v8) )
    goto LABEL_118;
  a2 = a1 + 280;
  *(_QWORD *)&v421 = sub_1671980(v8, a1 + 280, a3, a4, a5, a6);
  v14 = *(_BYTE *)(v9 + 28);
  DWORD2(v421) = v15;
  v16 = v14 & 0x7F;
  v17 = (unsigned int)v16 - 40;
  if ( (unsigned int)v17 <= 6 )
  {
    sub_A08520(v427, a1 + 280, *(_DWORD *)(v9 + 24), v17, v12, v13);
    v18 = (__int64 **)v427[0];
    v398 = (__int64 **)((char *)v427[0] + 8 * LODWORD(v427[1]));
    if ( v398 == v427[0] )
      goto LABEL_71;
    while ( 1 )
    {
      v19 = *v18;
      v20 = (unsigned __int8 *)sub_995750(v9);
      v21 = (void **)v19;
      sub_A180E0((__int64)&v447, v19, v20, v22, v421, SBYTE8(v421));
      v456 = 0x100000000LL;
      v455 = v457;
      v26 = v448;
      if ( (_DWORD)v448 )
      {
        v21 = &v447;
        sub_A2F8F0((__int64)&v455, (__int64 *)&v447);
        v27 = (__int64)v451;
        v28 = *(_BYTE *)(v10 + 289) == 0;
        v26 = v456;
        v459 = v451;
        if ( v28 )
        {
          v23 = v468;
          v467 = 0x100000000LL;
          ptr = v468;
          if ( (_DWORD)v456 )
          {
            v21 = (void **)&v455;
            sub_A2F8F0((__int64)&ptr, (__int64 *)&v455);
          }
LABEL_11:
          v482 = v459;
          if ( (*(_BYTE *)(v9 + 29) & 1) != 0 && sub_1671280(v9, (__int64)v21, v27, (__int64)v23, v24, v25) )
          {
            v29 = (char *)ptr;
            goto LABEL_23;
          }
          v29 = (char *)ptr;
          if ( BYTE4(v482) )
          {
            LOBYTE(v430) = 0;
            v434[0] = 0;
            v30 = (__int64 *)((char *)ptr + 128 * (unsigned __int64)(unsigned int)v482);
            LOBYTE(v438) = 0;
            v432 = v434;
            v31 = *v30;
            LOBYTE(v431) = v431 & 0xF0;
            LOBYTE(v435) = v435 & 0xF8;
            v436 = &v438;
            v32 = v30[1];
            v429[0] = &v430;
            v429[1] = nullptr;
            v433 = 0;
            v437 = nullptr;
            v365 = v32;
            v351 = *(_DWORD *)v30;
            sub_A2F670((__int64)v429, (__int64)(v30 + 2));
            if ( !(v351 | (HIDWORD(v365) | (unsigned int)v365 | HIDWORD(v31)) & 0x7FFFFFFF) || !v433 )
            {
LABEL_85:
              sub_A09CE0((__int64)v429);
              v29 = (char *)ptr;
              goto LABEL_23;
            }
            v33 = (char *)ptr;
            v34 = (char *)ptr + 128 * (unsigned __int64)(unsigned int)v467;
            if ( ptr != v34 )
            {
              while ( *(_DWORD *)v33
                   || (*((_DWORD *)v33 + 1) & 0x7FFFFFFF) != 0
                   || (*((_DWORD *)v33 + 2) & 0x7FFFFFFF) != 0
                   || (*((_DWORD *)v33 + 3) & 0x7FFFFFFF) != 0
                   || !*((_QWORD *)v33 + 8) )
              {
                v33 += 128;
                if ( v34 == v33 )
                  goto LABEL_22;
              }
              goto LABEL_85;
            }
LABEL_22:
            v423.m128i_i64[1] = v365;
            v423.m128i_i32[1] = (v31 & 0xFFFFFFFF00000000LL) >> 32;
            v423.m128i_i32[0] = v351;
            v35 = _mm_load_si128(&v423);
            LOBYTE(v424) = v424 & 0xFC | 2;
            si128 = v35;
            v426 = v424;
            sub_1672C20(
              v10,
              v9,
              (__int64)&loc_2E926E,
              (__int64)&v419,
              (__int64)sub_16716D0,
              (__int64)&v418,
              v35.m128i_i64[0],
              v35.m128i_i64[1],
              v424);
            sub_A09CE0((__int64)v429);
            v29 = (char *)ptr;
          }
LABEL_23:
          v36 = &v29[128 * (unsigned __int64)(unsigned int)v467];
          if ( v36 != v29 )
          {
            do
            {
              while ( 1 )
              {
                v36 -= 128;
                v37 = *((char **)v36 + 12);
                if ( v37 != v36 + 112 )
                  operator delete(v37);
                v38 = *((char **)v36 + 7);
                if ( v38 != v36 + 72 )
                  operator delete(v38);
                v39 = *((char **)v36 + 2);
                if ( v39 == v36 + 32 )
                  break;
                operator delete(v39);
                if ( v36 == v29 )
                  goto LABEL_30;
              }
            }
            while ( v36 != v29 );
LABEL_30:
            v29 = (char *)ptr;
          }
          if ( v29 != v468 )
            free(v29);
          v26 = v456;
        }
      }
      else
      {
        v27 = (__int64)v451;
        v28 = *(_BYTE *)(v10 + 289) == 0;
        v459 = v451;
        if ( v28 )
        {
          v467 = 0x100000000LL;
          ptr = v468;
          goto LABEL_11;
        }
      }
      v467 = 0;
      v468[0] = 0;
      v40 = (unsigned int)v459;
      v471 = 0;
      v472[0] = 0;
      v475 = nullptr;
      if ( !BYTE4(v459) )
        v40 = v26;
      v470 = v472;
      v469 &= 0xF0u;
      v352 = v40;
      LOBYTE(v473) = v473 & 0xF8;
      ptr = v468;
      v474 = &v476;
      LOBYTE(v476) = 0;
      if ( v26 )
      {
        v41 = 0;
        v396 = v18;
        v393 = v26 - 1;
        v403 = (unsigned __int64)v40 << 7;
        while ( 1 )
        {
          v46 = &v455[128 * v41];
          v45 = *(_DWORD *)v46;
          v373 = *(_QWORD *)v46;
          v366 = *((void **)v46 + 1);
          sub_9EE8A0((__int64)&ptr, (__int64)(v46 + 16));
          v469 = v46[48] & 0xF | v469 & 0xF0;
          sub_9EE8A0((__int64)&v470, (__int64)(v46 + 56));
          LOBYTE(v473) = v46[88] & 7 | v473 & 0xF8;
          sub_9EE8A0((__int64)&v474, (__int64)(v46 + 96));
          v44 = v366;
          v48 = *(_BYTE *)(v10 + 289);
          HIDWORD(v43) = HIDWORD(v373);
          if ( v352 == (_DWORD)v41 )
          {
            v48 ^= 1u;
            v42 = 0;
          }
          else
          {
            v42 = 0;
            if ( v48 )
            {
              v48 = 0;
            }
            else if ( !v45 )
            {
              v42 = 0;
              if ( ((HIDWORD(v366) | (unsigned int)v366 | HIDWORD(v373)) & 0x7FFFFFFF) == 0 )
              {
                v42 = 1;
                v43 = *(_QWORD *)&v455[v403];
                v44 = *(void **)&v455[v403 + 8];
                v45 = *(_DWORD *)&v455[v403];
              }
            }
          }
          v429[1] = v44;
          v429[0] = (void *)__PAIR64__(HIDWORD(v43), v45);
          si128 = _mm_load_si128((const __m128i *)v429);
          LOBYTE(v430) = (2 * v42) | v48 & 1 | v430 & 0xFC;
          v426 = v430;
          sub_1675E00(v10, v9, (__int64)&ptr, 0xFFFFFFFF00000000LL, (__int64)v44, v47, (__int128)si128, v430);
          if ( v393 == v41 )
            break;
          ++v41;
        }
        v18 = v396;
      }
      sub_A09CE0((__int64)&ptr);
      v49 = v455;
      v50 = &v455[128 * (unsigned __int64)(unsigned int)v456];
      if ( v455 != v50 )
      {
        do
        {
          while ( 1 )
          {
            v50 -= 128;
            v51 = *((char **)v50 + 12);
            if ( v51 != v50 + 112 )
              operator delete(v51);
            v52 = *((char **)v50 + 7);
            if ( v52 != v50 + 72 )
              operator delete(v52);
            v53 = *((char **)v50 + 2);
            if ( v53 == v50 + 32 )
              break;
            operator delete(v53);
            if ( v49 == v50 )
              goto LABEL_57;
          }
        }
        while ( v49 != v50 );
LABEL_57:
        v50 = v455;
      }
      if ( v50 != v457 )
        free(v50);
      v54 = v447;
      v55 = (char *)v447 + 128 * (unsigned __int64)(unsigned int)v448;
      if ( v447 != v55 )
      {
        do
        {
          while ( 1 )
          {
            v55 -= 16;
            v56 = (_QWORD *)v55[12];
            if ( v56 != v55 + 14 )
              operator delete(v56);
            v57 = (_QWORD *)v55[7];
            if ( v57 != v55 + 9 )
              operator delete(v57);
            v58 = (_QWORD *)v55[2];
            if ( v58 == v55 + 4 )
              break;
            operator delete(v58);
            if ( v54 == v55 )
              goto LABEL_67;
          }
        }
        while ( v54 != v55 );
LABEL_67:
        v55 = v447;
      }
      if ( v55 == (_QWORD *)v449 )
      {
        if ( v398 == ++v18 )
        {
LABEL_70:
          v18 = (__int64 **)v427[0];
LABEL_71:
          if ( v18 != (__int64 **)v428 )
            free(v18);
          return;
        }
      }
      else
      {
        ++v18;
        free(v55);
        if ( v398 == v18 )
          goto LABEL_70;
      }
    }
  }
  v59 = (unsigned int)v16 - 34;
  if ( (unsigned int)v59 <= 5 )
  {
    if ( (*(_BYTE *)(v9 + 40) & 7) != 0 )
      return;
    sub_A08520(v427, a1 + 280, *(_DWORD *)(v9 + 24), v59, v12, v13);
    v60 = (unsigned int *)v427[0];
    v397 = (__int64 **)((char *)v427[0] + 8 * LODWORD(v427[1]));
    if ( v397 == v427[0] )
      goto LABEL_147;
    v380 = (__int64 **)v427[0];
    v388 = v9;
    while ( 1 )
    {
      v61 = *v380;
      v62 = (unsigned __int8 *)sub_995750(v388);
      v63 = (void **)v61;
      sub_A1D500((__int64)&v447, v61, v62, v64, v421, SBYTE8(v421));
      v455 = v457;
      v456 = 0x100000000LL;
      v68 = v448;
      if ( (_DWORD)v448 )
      {
        v63 = &v447;
        sub_A30390((__int64)&v455, (__int64 *)&v447);
        v69 = v454;
        v28 = *(_BYTE *)(v10 + 289) == 0;
        v68 = v456;
        v462 = v454;
        if ( v28 )
        {
          ptr = v468;
          v65 = 0x100000000LL;
          v467 = 0x100000000LL;
          if ( (_DWORD)v456 )
          {
            v63 = (void **)&v455;
            sub_A30390((__int64)&ptr, (__int64 *)&v455);
          }
LABEL_93:
          v487 = v462;
          if ( (*(_BYTE *)(v388 + 29) & 1) != 0 && sub_1671280(v388, (__int64)v63, v69, v65, v66, v67) )
          {
LABEL_97:
            v70 = (char *)ptr;
          }
          else
          {
            v70 = (char *)ptr;
            if ( BYTE4(v487) )
            {
              LOBYTE(v430) = 0;
              v434[0] = 0;
              v439 = 0;
              v71 = (__int64 *)((char *)ptr + 192 * (unsigned int)v487);
              v443 = 0;
              v432 = v434;
              v72 = *v71;
              v437 = &v439;
              v73 = v71[1];
              LOBYTE(v431) = v431 & 0xF0;
              v435 &= 0xF000u;
              v441 = &v443;
              v429[0] = &v430;
              v429[1] = nullptr;
              v433 = 0;
              v436 = nullptr;
              v438 = 0;
              v442 = 0;
              v444 = 0;
              v445 = 0;
              v446 = 0;
              v74 = *(_DWORD *)v71;
              sub_A302B0((__int64)v429, (__int64)(v71 + 2));
              if ( v74 | (HIDWORD(v73) | (unsigned int)v73 | HIDWORD(v72)) & 0x7FFFFFFF && v433 )
              {
                v144 = (char *)ptr;
                v145 = (char *)ptr + 192 * (unsigned int)v467;
                if ( ptr == v145 )
                {
LABEL_187:
                  v423.m128i_i64[1] = v73;
                  v423.m128i_i32[1] = (v72 & 0xFFFFFFFF00000000LL) >> 32;
                  v423.m128i_i32[0] = v74;
                  v146 = _mm_load_si128(&v423);
                  LOBYTE(v424) = v424 & 0xFC | 2;
                  si128 = v146;
                  v426 = v424;
                  sub_1672C20(
                    v10,
                    v388,
                    (__int64)&loc_2E926E,
                    (__int64)&v419,
                    (__int64)sub_16716D0,
                    (__int64)&v418,
                    v146.m128i_i64[0],
                    v146.m128i_i64[1],
                    v424);
                  sub_A09D30((__int64)v429);
                  v70 = (char *)ptr;
                  goto LABEL_98;
                }
                while ( *(_DWORD *)v144
                     || (*((_DWORD *)v144 + 1) & 0x7FFFFFFF) != 0
                     || (*((_DWORD *)v144 + 2) & 0x7FFFFFFF) != 0
                     || (*((_DWORD *)v144 + 3) & 0x7FFFFFFF) != 0
                     || !*((_QWORD *)v144 + 8) )
                {
                  v144 += 192;
                  if ( v145 == v144 )
                    goto LABEL_187;
                }
              }
              sub_A09D30((__int64)v429);
              goto LABEL_97;
            }
          }
LABEL_98:
          v75 = &v70[192 * (unsigned int)v467];
          if ( v75 != v70 )
          {
            do
            {
              v75 -= 192;
              sub_A09D30((__int64)(v75 + 16));
            }
            while ( v75 != v70 );
            v70 = (char *)ptr;
          }
          if ( v70 != v468 )
            free(v70);
          v68 = v456;
        }
      }
      else
      {
        v69 = v454;
        v28 = *(_BYTE *)(v10 + 289) == 0;
        v462 = v454;
        if ( v28 )
        {
          ptr = v468;
          v467 = 0x100000000LL;
          goto LABEL_93;
        }
      }
      v467 = 0;
      v468[0] = 0;
      v76 = v462;
      v471 = 0;
      v472[0] = 0;
      v474 = nullptr;
      if ( !BYTE4(v462) )
        v76 = v68;
      v470 = v472;
      v475 = &v477;
      v353 = v76;
      v469 &= 0xF0u;
      ptr = v468;
      v473 &= 0xF000u;
      v476 = 0;
      LOBYTE(v477) = 0;
      v479 = &v481;
      v480 = 0;
      v481 = 0;
      v483 = nullptr;
      v484 = 0;
      v485 = 0;
      if ( v68 )
      {
        v367 = v68 - 1;
        v77 = 0;
        v399 = 192LL * v76;
        while ( 1 )
        {
          v83 = &v455[192 * v77];
          v79 = *(_QWORD *)v83;
          v80 = *((void **)v83 + 1);
          v83 += 16;
          v81 = *((_DWORD *)v83 - 4);
          sub_A302B0((__int64)&ptr, (__int64)v83);
          v86 = *(_BYTE *)(v10 + 289);
          if ( v353 == (_DWORD)v77 )
          {
            v86 ^= 1u;
            v78 = 0;
          }
          else if ( v86 )
          {
            v78 = 0;
            v86 = 0;
          }
          else
          {
            v78 = 0;
            if ( !v81 )
            {
              v78 = 0;
              if ( ((HIDWORD(v80) | (unsigned int)v80 | HIDWORD(v79)) & 0x7FFFFFFF) == 0 )
              {
                v78 = 1;
                v79 = *(_QWORD *)&v455[v399];
                v80 = *(void **)&v455[v399 + 8];
                v81 = *(_DWORD *)&v455[v399];
              }
            }
          }
          v429[1] = v80;
          HIDWORD(v429[0]) = (v79 & 0xFFFFFFFF00000000LL) >> 32;
          LODWORD(v429[0]) = v81;
          v82 = (__int128)_mm_load_si128((const __m128i *)v429);
          LOBYTE(v430) = (2 * v78) | v86 & 1 | v430 & 0xFC;
          si128 = (__m128i)v82;
          v426 = v430;
          sub_1675F20(v10, v388 & 0xFFFFFFFFFFFFFFFBLL, (__int64)&ptr, 0xFFFFFFFF00000000LL, v84, v85, v82, v430);
          if ( v367 == v77 )
            break;
          ++v77;
        }
      }
      sub_A09D30((__int64)&ptr);
      sub_1672530((__int64)&v455);
      sub_1672530((__int64)&v447);
      if ( v397 == ++v380 )
      {
LABEL_146:
        v60 = (unsigned int *)v427[0];
LABEL_147:
        if ( v60 == v428 )
          return;
LABEL_148:
        free(v60);
        return;
      }
    }
  }
  if ( v16 == 20 )
  {
    sub_A08520(&v447, a1 + 280, *(_DWORD *)(v9 + 24), v59, v12, v13);
    v117 = (__int64 **)v447;
    v355 = (__int64 **)((char *)v447 + 8 * (unsigned int)v448);
    if ( v355 != v447 )
    {
      do
      {
        while ( 1 )
        {
          v118 = *v117;
          v119 = (unsigned __int8 *)sub_995750(v9);
          sub_A15290((__int64)&v455, v118, v119, v120);
          v467 = 0x100000000LL;
          ptr = v468;
          if ( (_DWORD)v456 )
            break;
          ++v117;
          v486 = v461;
          sub_1677990(a1, v9, (__int64)&ptr, v121, v122, v123);
          sub_A20D20((char **)&ptr);
          sub_A20D20(&v455);
          if ( v355 == v117 )
            goto LABEL_142;
        }
        ++v117;
        sub_A24C20((__int64)&ptr, (__int64)&v455);
        v486 = v461;
        sub_1677990(a1, v9, (__int64)&ptr, v141, v142, v143);
        sub_A20D20((char **)&ptr);
        sub_A20D20(&v455);
      }
      while ( v355 != v117 );
LABEL_142:
      v117 = (__int64 **)v447;
    }
    if ( v117 != (__int64 **)v449 )
      free(v117);
    return;
  }
  if ( v16 == 19 )
  {
    sub_A08520(v429, a1 + 280, *(_DWORD *)(v9 + 24), v59, v12, v13);
    v400 = (__int64 **)((char *)v429[0] + 8 * LODWORD(v429[1]));
    if ( v429[0] == v400 )
      goto LABEL_175;
    v394 = (__int64 **)v429[0];
    v390 = v9;
    while ( 1 )
    {
      v124 = *v394;
      v125 = (unsigned __int8 *)sub_995750(v390);
      sub_A15430((__int64)&v447, v124, v125, v126);
      v455 = v457;
      v456 = 0x100000000LL;
      v374 = v448;
      if ( (_DWORD)v448 )
        break;
      v461 = v453;
      if ( !*(_BYTE *)(a1 + 289) )
      {
        ptr = v468;
        v467 = 0x100000000LL;
LABEL_156:
        v486 = v461;
        sub_1672CF0(a1, v390, (__int64 *)&ptr, v127, v128, v129);
        sub_A20D20((char **)&ptr);
        v374 = v456;
      }
LABEL_157:
      v130 = v461;
      v467 = 0;
      v468[0] = 0;
      v472[0] = 0;
      LOBYTE(v477) = 0;
      LOBYTE(v482) = 0;
      if ( !BYTE4(v461) )
        v130 = v374;
      LOBYTE(v483) = 0;
      v469 &= 0xF0u;
      v382 = v130;
      v471 = 0;
      ptr = v468;
      v470 = v472;
      if ( v374 )
      {
        v131 = 0;
        v132 = 0;
        v408 = 176LL * v130;
        do
        {
          v137 = &v455[v131];
          v134 = *(_QWORD *)&v455[v131];
          v136 = *(_DWORD *)&v455[v131];
          v369 = *(void **)&v455[v131 + 8];
          sub_9EE8A0((__int64)&ptr, (__int64)&v455[v131 + 16]);
          v469 = v137[48] & 0xF | v469 & 0xF0;
          sub_9EE8A0((__int64)&v470, (__int64)(v137 + 56));
          sub_A21AD0((__int64)&v473, (__int64)(v137 + 88));
          sub_A21AD0((__int64)v478, (__int64)(v137 + 128));
          v135 = v369;
          LOBYTE(v483) = v137[168];
          v140 = *(_BYTE *)(a1 + 289);
          if ( v132 == v382 )
          {
            v133 = 0;
            v140 ^= 1u;
          }
          else if ( v140 )
          {
            v133 = 0;
            v140 = 0;
          }
          else
          {
            v133 = 0;
            if ( !v136 )
            {
              v133 = *(unsigned __int8 *)(a1 + 289);
              if ( ((HIDWORD(v369) | (unsigned int)v369 | HIDWORD(v134)) & 0x7FFFFFFF) == 0 )
              {
                v133 = 1;
                v134 = *(_QWORD *)&v455[v408];
                v135 = *(void **)&v455[v408 + 8];
                v136 = *(_DWORD *)&v455[v408];
              }
            }
          }
          ++v132;
          v427[1] = v135;
          v131 += 176;
          HIDWORD(v427[0]) = (v134 & 0xFFFFFFFF00000000LL) >> 32;
          LODWORD(v427[0]) = v136;
          si128 = _mm_load_si128((const __m128i *)v427);
          LOBYTE(v428[0]) = (2 * v133) | v140 & 1 | v428[0] & 0xFC;
          v426 = v428[0];
          sub_1674810(a1, v390, (__int64)&ptr, (unsigned int)(2 * v133), v138, v139, (__int128)si128, v428[0]);
        }
        while ( v132 != v374 );
      }
      sub_A09C70((__int64)&ptr);
      sub_A20D20(&v455);
      sub_A20D20((char **)&v447);
      if ( v400 == ++v394 )
      {
        v400 = (__int64 **)v429[0];
LABEL_175:
        v60 = (unsigned int *)v400;
        if ( v400 == (__int64 **)&v430 )
          return;
        goto LABEL_148;
      }
    }
    sub_A24C20((__int64)&v455, (__int64)&v447);
    v127 = (unsigned int)v456;
    v461 = v453;
    v374 = v456;
    if ( *(_BYTE *)(a1 + 289) )
      goto LABEL_157;
    ptr = v468;
    v467 = 0x100000000LL;
    if ( (_DWORD)v456 )
      sub_A24C20((__int64)&ptr, (__int64)&v455);
    goto LABEL_156;
  }
  if ( (unsigned int)v16 - 58 <= 4 )
  {
    LOBYTE(v428[0]) = 0;
    v427[0] = v428;
    v175 = *(_QWORD *)(v9 + 120);
    v427[1] = nullptr;
    if ( (v175 & 4) != 0 || (v176 = v175 & 0xFFFFFFFFFFFFFFF8LL, (v175 & 0xFFFFFFFFFFFFFFF8LL) == 0) )
      v176 = v9;
    v177 = (char *)sub_995750(v176);
    if ( v177 )
    {
      ptr = v468;
      sub_1671310(&ptr, v177, (__int64)&v177[v178]);
    }
    else
    {
      v468[0] = 0;
      ptr = v468;
      v467 = 0;
    }
    sub_A0AAD0((__int64)v427, &ptr);
    if ( ptr != v468 )
      operator delete(ptr);
    if ( v427[1] || (int)sub_B78350(v9) >= 0 )
    {
      v429[0] = &v430;
      v179 = j__strlen(&byte_22F0C30);
      sub_1671310(v429, &byte_22F0C30, (__int64)(&byte_22F0C30 + v179));
    }
    else
    {
      v300 = *(_QWORD *)(v10 + 232);
      v301 = *(_QWORD *)(sub_B8C330(v9) + 2312);
      v302 = sub_B78350(v9);
      v306 = (char *)sub_13DC120(v302, v301, v300, a7, a8, v303, v304, v305);
      if ( v306 )
      {
        v429[0] = &v430;
        sub_1671310(v429, v306, (__int64)&v306[v307]);
      }
      else
      {
        LOBYTE(v430) = 0;
        v429[0] = &v430;
        v429[1] = nullptr;
      }
    }
    if ( !v427[1]
      && (*(_BYTE *)(v9 + 28) & 0x7F) == 0x3E
      && (!sub_9B4AA0((__int64)v429, "CF_OPTIONS")
       || !sub_9B4AA0((__int64)v429, "NS_OPTIONS")
       || !sub_9B4AA0((__int64)v429, "OBJC_OPTIONS")
       || !sub_9B4AA0((__int64)v429, "SWIFT_OPTIONS")) )
    {
      v308 = sub_6F3660(v9);
      if ( (v308 & 8) != 0 )
      {
        v310 = *(_QWORD *)(v308 & 0xFFFFFFFFFFFFFFF0LL);
        v309 = *(__int64 *)((char *)&qword_18 + (v308 & 0xFFFFFFFFFFFFFFF0LL)) | v308 & 7;
      }
      else
      {
        v309 = v308 & 7;
        v310 = v308 & 0xFFFFFFFFFFFFFFF0LL;
      }
      sub_F783D0((__int64)&ptr, v310, v309, (const __m128i *)(*(_QWORD *)(v10 + 248) + 17464LL));
      sub_A0AAD0((__int64)v427, &ptr);
      if ( ptr != v468 )
        operator delete(ptr);
    }
    sub_A08520(&v447, v10 + 280, *(_DWORD *)(v9 + 24), v180, v181, v182);
    v186 = (__int64 **)v447;
    v187 = (__int64 **)((char *)v447 + 8 * (unsigned int)v448);
    if ( v447 != v187 )
    {
      do
      {
        v188 = *v186;
        v189 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
          v189 = *(_QWORD *)v189;
        if ( (*(_BYTE *)(v189 + 8) & 0x7Fu) - 58 <= 4 )
        {
          v190 = v189 - 64;
          if ( v190 )
          {
            v357 = *v186;
            v191 = sub_1671E00(v190, v10 + 280, v190, v183, v184, v185);
            v188 = v357;
            *(_QWORD *)&v421 = v191;
            DWORD2(v421) = v192;
          }
        }
        sub_A1A040((__int64)&v455, v188, (unsigned __int8 *)v427[0], (size_t)v427[1], v421, SDWORD2(v421));
        ptr = v468;
        v467 = 0x100000000LL;
        if ( (_DWORD)v456 )
          sub_A2FD60((__int64)&ptr, (__int64 *)&v455);
        ++v186;
        v490 = v465;
        sub_1678570(v10, v9, (__int64)&ptr, v193, v194, v195);
        sub_1672680((char **)&ptr);
        sub_1672680(&v455);
      }
      while ( v187 != v186 );
      v187 = (__int64 **)v447;
    }
    if ( v187 != (__int64 **)v449 )
      free(v187);
    if ( v429[0] != &v430 )
      operator delete(v429[0]);
    if ( v427[0] != v428 )
      operator delete(v427[0]);
    return;
  }
  if ( (unsigned int)v16 - 64 <= 2 )
  {
    sub_A08520(&v447, a1 + 280, *(_DWORD *)(v9 + 24), v59, v12, v13);
    v60 = (unsigned int *)v447;
    v359 = (__int64 **)((char *)v447 + 8 * (unsigned int)v448);
    if ( v447 == v359 )
      goto LABEL_364;
    v288 = (__int64 **)v447;
    do
    {
      while ( 1 )
      {
        v289 = *v288;
        v290 = (unsigned __int8 *)sub_995750(v9);
        sub_A1C900((__int64)&v455, v289, v290, v291, v421, SBYTE8(v421));
        v467 = 0x100000000LL;
        ptr = v468;
        if ( (_DWORD)v456 )
          break;
        ++v288;
        v486 = v461;
        sub_1676EC0(v10, v9, (__int64)&ptr, v292, v293, v294);
        sub_16726E0((char **)&ptr);
        sub_16726E0(&v455);
        if ( v359 == v288 )
          goto LABEL_363;
      }
      ++v288;
      sub_A2F4C0((__int64)&ptr, (__int64)&v455);
      v486 = v461;
      sub_1676EC0(v10, v9, (__int64)&ptr, v295, v296, v297);
      sub_16726E0((char **)&ptr);
      sub_16726E0(&v455);
    }
    while ( v359 != v288 );
    goto LABEL_363;
  }
LABEL_118:
  v87 = *(_BYTE *)(sub_B8EAA0(v8) + 8) & 0x7F;
  if ( v87 && v87 != 24 && (v91 = sub_B8EAA0(v8), !sub_B8E4C0(v91)) || (*(_BYTE *)(v9 + 28) & 0x7F) != 0x21 )
  {
    v92 = *(_BYTE *)(v8 + 8) & 0x7F;
    if ( (unsigned int)(v92 - 19) <= 4 )
    {
      v417 = v8 - 48;
      if ( v8 == 48 )
        return;
      v418 = &v417;
      v93 = *(_BYTE *)(v9 + 28) & 0x7F;
      if ( v93 == 18 )
      {
        a2 = a1 + 280;
        sub_A08520(v429, a1 + 280, *(_DWORD *)(v9 + 24), (__int64)v88, v89, v90);
        v95 = (__int128 *)v429[0];
        v88 = (__int64 **)&v418;
        v96 = (__int64 **)v429[0];
        v354 = (__int64 **)((char *)v429[0] + 8 * LODWORD(v429[1]));
        if ( v429[0] != v354 )
        {
          v381 = v8;
          v368 = v10;
          do
          {
            v106 = *v96;
            a2 = (__int64)*v96;
            v107 = sub_1671880((__int64 **)&v418, *v96, v94, (__int64)v88, v89, v90);
            if ( BYTE4(v107) )
            {
              si128.m128i_i64[0] = *(_QWORD *)(v9 + 40);
              v447 = v449;
              v448 = 0x200000000LL;
              if ( (si128.m128i_i8[0] & 3) == 1 )
              {
                v97 = sub_FDE9A0(si128.m128i_i64, 0);
                sub_111E070((__int64)&v447, v97, v98);
              }
              else
              {
                v108 = sub_FDE930(si128.m128i_i64);
                if ( v108 )
                {
                  v389 = v96;
                  v109 = v108;
                  v110 = v9;
                  v111 = v107;
                  v112 = 0;
                  v113 = v110;
                  do
                  {
                    v114 = v112++;
                    v115 = sub_FDE9A0(si128.m128i_i64, v114);
                    sub_111E070((__int64)&v447, v115, v116);
                  }
                  while ( v109 != v112 );
                  LODWORD(v107) = v111;
                  v96 = v389;
                  v9 = v113;
                }
              }
              v99 = sub_FDE930(si128.m128i_i64);
              v100 = *(_QWORD *)(v9 + 56);
              LODWORD(v427[0]) = v99;
              v427[1] = v447;
              *(_QWORD *)v428 = (unsigned int)v448;
              sub_A1E210(
                (__int64)&v455,
                v106,
                (unsigned int)v107,
                (v100 >> 17) & 1,
                v101,
                v102,
                (__int64)v427[0],
                (__int64)v447,
                (unsigned int)v448);
              ptr = v468;
              v467 = 0x100000000LL;
              v105 = (unsigned int)v456;
              if ( (_DWORD)v456 )
                sub_A30580((__int64)&ptr, (__int64)&v455);
              a2 = v9;
              v489 = v464;
              sub_1679940(v368, v9, (__int64)&ptr, v103, v105, v104);
              sub_1672750((__int64)&ptr);
              sub_1672750((__int64)&v455);
              if ( v447 != v449 )
                free(v447);
            }
            ++v96;
          }
          while ( v354 != v96 );
          v8 = v381;
          v10 = v368;
          v95 = (__int128 *)v429[0];
        }
        if ( v95 != &v430 )
          free(v95);
        v93 = *(_BYTE *)(v9 + 28) & 0x7F;
      }
      if ( v93 == 75 )
      {
        sub_A08520(v427, v10 + 280, *(_DWORD *)(v9 + 24), (__int64)v88, v89, v90);
        v60 = (unsigned int *)v427[0];
        v199 = (__int64 **)&v418;
        v371 = (__int64 **)v427[0];
        v402 = (__int64 **)((char *)v427[0] + 8 * LODWORD(v427[1]));
        if ( v427[0] == v402 )
          goto LABEL_147;
        v362 = v9;
        while ( 1 )
        {
          v200 = *v371;
          v201 = sub_1671880((__int64 **)&v418, *v371, (__int64)v199, v196, v197, v198);
          v202 = v201;
          v405 = BYTE4(v201);
          if ( !BYTE4(v201) )
            goto LABEL_281;
          v203 = *(_WORD *)(v362 + 74);
          v204 = (unsigned __int8 *)sub_995750(v362);
          v205 = (void **)v200;
          sub_A15D30((__int64)&v447, v200, v202, v204, v206, ((v203 >> 14) ^ 1) & 1);
          v455 = v457;
          v456 = 0x100000000LL;
          v210 = v448;
          if ( (_DWORD)v448 )
          {
            v205 = &v447;
            sub_A2A510((__int64)&v455, (__int64)&v447);
            v28 = *(_BYTE *)(v10 + 289) == 0;
            v210 = v456;
            v460 = v452;
            if ( v28 )
            {
              v207 = 0x100000000LL;
              v211 = v468;
              ptr = v468;
              v467 = 0x100000000LL;
              if ( (_DWORD)v456 )
              {
                v205 = (void **)&v455;
                sub_A2A510((__int64)&ptr, (__int64)&v455);
              }
LABEL_286:
              v483 = v460;
              if ( (*(_BYTE *)(v362 + 29) & 1) != 0 && sub_1671280(v362, (__int64)v205, (__int64)v211, v207, v208, v209) )
              {
LABEL_290:
                v212 = (char *)ptr;
                goto LABEL_291;
              }
              v212 = (char *)ptr;
              if ( !BYTE4(v483) )
                goto LABEL_291;
              LOBYTE(v430) = 0;
              v434[0] = 0;
              v429[0] = &v430;
              v432 = v434;
              v436 = &v438;
              LOBYTE(v438) = 0;
              LOBYTE(v431) = v431 & 0xF0;
              v213 = (char *)ptr + 136 * (unsigned int)v483;
              LOBYTE(v435) = v435 & 0xF8;
              v214 = v213[1];
              v215 = *v213;
              v358 = v213;
              v440 &= 0xFCu;
              v429[1] = nullptr;
              v433 = 0;
              v437 = nullptr;
              v384 = v214;
              v376 = *(_DWORD *)v213;
              sub_A2F670((__int64)v429, (__int64)(v213 + 2));
              v440 = v358[16] & 3 | v440 & 0xFC;
              if ( v376 | (HIDWORD(v384) | (unsigned int)v384 | HIDWORD(v215)) & 0x7FFFFFFF && v433 )
              {
                v298 = (char *)ptr;
                v299 = (char *)ptr + 136 * (unsigned int)v467;
                if ( ptr == v299 )
                {
LABEL_381:
                  v423.m128i_i64[1] = v384;
                  v423.m128i_i64[0] = __PAIR64__(HIDWORD(v215), v376);
                  si128 = _mm_load_si128(&v423);
                  LOBYTE(v424) = v424 & 0xFC | 2;
                  v426 = v424;
                  sub_1672C20(
                    v10,
                    v362,
                    (__int64)&loc_2E926E,
                    (__int64)&v421,
                    (__int64)sub_16716D0,
                    (__int64)&v419,
                    si128.m128i_i64[0],
                    si128.m128i_i64[1],
                    v424);
                  sub_A09CE0((__int64)v429);
                  v212 = (char *)ptr;
LABEL_291:
                  v216 = &v212[136 * (unsigned int)v467];
                  while ( v216 != v212 )
                  {
                    while ( 1 )
                    {
                      v216 -= 136;
                      v217 = *((char **)v216 + 12);
                      if ( v217 != v216 + 112 )
                        operator delete(v217);
                      v218 = *((char **)v216 + 7);
                      if ( v218 != v216 + 72 )
                        operator delete(v218);
                      v219 = *((char **)v216 + 2);
                      if ( v219 == v216 + 32 )
                        break;
                      operator delete(v219);
                      if ( v216 == v212 )
                        goto LABEL_299;
                    }
                  }
LABEL_299:
                  if ( ptr != v468 )
                    free(ptr);
                  v210 = v456;
                  goto LABEL_302;
                }
                while ( *(_DWORD *)v298
                     || (*((_DWORD *)v298 + 1) & 0x7FFFFFFF) != 0
                     || (*((_DWORD *)v298 + 2) & 0x7FFFFFFF) != 0
                     || (*((_DWORD *)v298 + 3) & 0x7FFFFFFF) != 0
                     || !*((_QWORD *)v298 + 8) )
                {
                  v298 += 136;
                  if ( v299 == v298 )
                    goto LABEL_381;
                }
              }
              sub_A09CE0((__int64)v429);
              goto LABEL_290;
            }
          }
          else
          {
            v211 = v452;
            v28 = *(_BYTE *)(v10 + 289) == 0;
            v460 = v452;
            if ( v28 )
            {
              ptr = v468;
              v467 = 0x100000000LL;
              goto LABEL_286;
            }
          }
LABEL_302:
          v467 = 0;
          v468[0] = 0;
          v471 = 0;
          v472[0] = 0;
          v220 = (unsigned int)v460;
          v475 = nullptr;
          if ( !BYTE4(v460) )
            v220 = v210;
          ptr = v468;
          v470 = v472;
          v377 = v220;
          v469 &= 0xF0u;
          LOBYTE(v473) = v473 & 0xF8;
          v474 = &v476;
          LOBYTE(v476) = 0;
          v478[0] &= 0xFCu;
          if ( v210 )
          {
            v221 = 0;
            v385 = v210 - 1;
            v414 = 136LL * v220;
            while ( 1 )
            {
              v240 = &v455[136 * v221];
              v223 = *(_QWORD *)v240;
              v224 = *((_QWORD *)v240 + 1);
              v225 = *(_DWORD *)v240;
              sub_9EE8A0((__int64)&ptr, (__int64)(v240 + 16));
              v469 = v240[48] & 0xF | v469 & 0xF0;
              sub_9EE8A0((__int64)&v470, (__int64)(v240 + 56));
              LOBYTE(v473) = v240[88] & 7 | v473 & 0xF8;
              sub_9EE8A0((__int64)&v474, (__int64)(v240 + 96));
              v478[0] = v478[0] & 0xFC | v240[128] & 3;
              v243 = *(_BYTE *)(v10 + 289);
              if ( v377 == (_DWORD)v221 )
              {
                v243 ^= 1u;
                v222 = 0;
              }
              else if ( v243 )
              {
                v222 = 0;
                v243 = 0;
              }
              else
              {
                v222 = 0;
                if ( !v225 )
                {
                  v222 = 0;
                  if ( ((HIDWORD(v224) | (unsigned int)v224 | HIDWORD(v223)) & 0x7FFFFFFF) == 0 )
                  {
                    v223 = *(_QWORD *)&v455[v414];
                    v224 = *(_QWORD *)&v455[v414 + 8];
                    v225 = *(_DWORD *)&v455[v414];
                    v222 = v405;
                  }
                }
              }
              v419.m128i_i64[1] = v224;
              v419.m128i_i32[1] = (v223 & 0xFFFFFFFF00000000LL) >> 32;
              v419.m128i_i32[0] = v225;
              v226 = (__int128)_mm_load_si128(&v419);
              LOBYTE(v420) = (2 * (v222 & 1)) | v243 & 1 | v420 & 0xFC;
              v421 = v226;
              v422 = v420;
              sub_1675E00(v10, v362, (__int64)&ptr, v243 & 1, v241, v242, v226, v420);
              if ( (v478[0] & 1) != 0 )
                break;
LABEL_314:
              if ( v221 == v385 )
                goto LABEL_320;
              ++v221;
            }
            v228 = (v478[0] & 2) != 0;
            v423 = _mm_load_si128((const __m128i *)&v421);
            v424 = v422;
            si128 = v423;
            v426 = v422;
            if ( (v422 & 1) == 0 )
            {
              v229 = *(_QWORD *)(v10 + 248);
              v230 = (v422 & 2) != 0;
              if ( (v478[0] & 2) != 0 )
              {
                v231 = v411;
                v232 = v410;
                *(_OWORD *)v429 = 0;
                BYTE1(v231) = BYTE1(v411) & 0xFC;
                v412 = (v422 & 2) != 0;
                BYTE1(v232) = BYTE1(v410) & 0xFC;
                v411 = v231;
                v431 = v431 & 0xFF000000 | 0x101A4;
                v233 = BYTE1(v231) & 1;
                v410 = v232;
                v430 = 0;
                HIBYTE(v431) = (2 * ((v232 & 0x200) != 0)) | v233 | HIBYTE(v431) & 0xFC;
                v234 = (__m128i *)sub_1672F50((__int64 *)(v229 + 2352), 40, 3u, v233, v230, v227);
                sub_B19AB0(v234, *(_QWORD *)(v10 + 248), (const __m128i *)v429);
                v235 = sub_B35EA0(
                         *(_QWORD *)(v10 + 248),
                         si128.m128i_i64[0],
                         si128.m128i_i64[1],
                         (__int64)v234,
                         v412,
                         0);
              }
              else
              {
                v235 = sub_B35E00(v229, si128.m128i_i64[0], si128.m128i_i64[1], 371, v230, 0);
              }
              sub_B8CC60(v362, v235, v236, v237, v238, v239);
              goto LABEL_314;
            }
            v244 = (_QWORD *)sub_9C8850(v362);
            v246 = v245;
            v247 = v244;
            v248 = ((char *)v246 - (char *)v244) >> 5;
            if ( v248 > 0 )
            {
              if ( *(_WORD *)(*v244 + 36LL) == 371 )
                goto LABEL_382;
              if ( *(_WORD *)(v244[1] + 36LL) == 371 )
              {
                v246 = v244 + 1;
              }
              else if ( *(_WORD *)(v244[2] + 36LL) == 371 )
              {
                v246 = v244 + 2;
              }
              else
              {
                v249 = &v244[4 * v248];
                if ( *(_WORD *)(v244[3] + 36LL) == 371 )
                {
                  v246 = v244 + 3;
                  goto LABEL_336;
                }
                while ( 1 )
                {
                  v244 = v247 + 4;
                  if ( v247 + 4 == v249 )
                    goto LABEL_333;
                  if ( *(_WORD *)(v247[4] + 36LL) == 371 )
                    goto LABEL_382;
                  if ( *(_WORD *)(v247[5] + 36LL) == 371 )
                    break;
                  if ( *(_WORD *)(v247[6] + 36LL) == 371 )
                  {
                    v246 = v247 + 6;
                    goto LABEL_336;
                  }
                  if ( *(_WORD *)(v247[7] + 36LL) == 371 )
                  {
                    v246 = v247 + 7;
                    goto LABEL_336;
                  }
                  v247 += 4;
                }
                v246 = v247 + 5;
              }
              goto LABEL_336;
            }
LABEL_333:
            v250 = v246 - v244;
            if ( v250 != 2 )
            {
              if ( v250 != 3 )
              {
                if ( v250 != 1 )
                  goto LABEL_336;
LABEL_392:
                if ( *(_WORD *)(*v244 + 36LL) == 371 )
                  v246 = v244;
LABEL_336:
                v413 = v246;
                if ( (__int64 *)sub_9C88C0(v362) != v246 )
                {
                  v253 = si128.m128i_i64[0];
                  v254 = sub_B35EA0(*(_QWORD *)(v10 + 248), si128.m128i_i64[0], si128.m128i_i64[1], *v413, 1, 0);
                  v259 = sub_B8C3D0(v362, v253, v255, v256, v257, v258);
                  sub_1672BE0((__int64)v259, (__int64)v413);
                  sub_B8CC60(v362, v254, v260, v261, v262, v263);
                }
                if ( v228 )
                {
                  v264 = v416;
                  v265 = v415;
                  *(_OWORD *)v429 = 0;
                  BYTE1(v264) = BYTE1(v416) & 0xFC;
                  v430 = 0;
                  BYTE1(v265) = BYTE1(v415) & 0xFC;
                  v416 = v264;
                  v431 = v431 & 0xFF000000 | 0x101A4;
                  v266 = BYTE1(v264) & 1;
                  v415 = v265;
                  HIBYTE(v431) = (2 * ((v265 & 0x200) != 0)) | v266 | HIBYTE(v431) & 0xFC;
                  v267 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(v10 + 248) + 2352LL), 40, 3u, v266, v251, v252);
                  sub_B19AB0(v267, *(_QWORD *)(v10 + 248), (const __m128i *)v429);
                  sub_B8CC60(v362, (__int64)v267, v268, v269, v270, v271);
                }
                goto LABEL_314;
              }
              if ( *(_WORD *)(*v244 + 36LL) == 371 )
                goto LABEL_382;
              ++v244;
            }
            if ( *(_WORD *)(*v244 + 36LL) == 371 )
            {
LABEL_382:
              v246 = v244;
              goto LABEL_336;
            }
            ++v244;
            goto LABEL_392;
          }
LABEL_320:
          sub_A09CE0((__int64)&ptr);
          sub_1672920((__int64)&v455);
          sub_1672920((__int64)&v447);
LABEL_281:
          if ( v402 == ++v371 )
            goto LABEL_146;
        }
      }
      v92 = *(_BYTE *)(v8 + 8) & 0x7F;
    }
    if ( (unsigned int)(v92 - 58) > 4 )
      return;
    v372 = v8 - 64;
    if ( v8 == 64 )
      return;
    v272 = *(_BYTE *)(v9 + 28) & 0x7F;
    v273 = v272;
    if ( v272 == 35 )
    {
      if ( !(unsigned int)sub_B77890(v9) )
      {
        a2 = v10 + 280;
        sub_A08520(&v447, v10 + 280, *(_DWORD *)(v9 + 24), (__int64)v88, v89, v90);
        v344 = v447;
        v345 = (__int64 **)v447;
        v379 = (__int64 **)((char *)v447 + 8 * (unsigned int)v448);
        if ( v447 != v379 )
        {
          do
          {
            a2 = v10 + 280;
            v361 = *v345;
            v429[0] = (void *)sub_1671E00(v372, v10 + 280, v343, (__int64)v88, v89, v90);
            LODWORD(v429[1]) = v343;
            if ( (_BYTE)v343 )
            {
              v346 = (unsigned __int8 *)sub_995750(v9);
              sub_A1BAC0((__int64)&v455, v361, (int)v429[0], v346, v347);
              ptr = v468;
              v467 = 0x100000000LL;
              if ( (_DWORD)v456 )
                sub_A30B80((__int64)&ptr, (__int64)&v455);
              a2 = v9;
              v488 = v463;
              sub_167A5C0(v10, v9, (__int64)&ptr, v348, v349, v350);
              sub_16729C0((__int64)&ptr);
              sub_16729C0((__int64)&v455);
            }
            ++v345;
          }
          while ( v379 != v345 );
          v344 = v447;
        }
        if ( v344 != v449 )
          free(v344);
      }
      v273 = *(_BYTE *)(v9 + 28) & 0x7F;
    }
    v274 = (unsigned int)(v273 - 49);
    if ( (unsigned int)v274 > 2 )
      goto LABEL_350;
    if ( (*(_BYTE *)(v9 + 68) & 1) != 0 && !*(_QWORD *)(v9 + 40) )
      return;
    if ( (unsigned __int8)sub_B78060(v9, a2, v274, (__int64)v88, v89) )
    {
LABEL_349:
      v273 = *(_BYTE *)(v9 + 28) & 0x7F;
LABEL_350:
      if ( (unsigned int)(v273 - 58) > 4 )
        return;
      v275 = v10 + 280;
      sub_A08520(&v447, v10 + 280, *(_DWORD *)(v9 + 24), (__int64)v88, v89, v90);
      v60 = (unsigned int *)v447;
      v280 = (__int64 **)((char *)v447 + 8 * (unsigned int)v448);
      if ( v447 == v280 )
      {
LABEL_364:
        if ( v60 == (unsigned int *)v449 )
          return;
        goto LABEL_148;
      }
      v386 = v10;
      v281 = (__int64 **)v447;
      do
      {
        v282 = *v281;
        v429[0] = (void *)sub_1671E00(v372, v275, v276, v277, v278, v279);
        LODWORD(v429[1]) = v276;
        if ( (_BYTE)v276 )
        {
          v283 = (unsigned __int8 *)sub_995750(v9);
          sub_A1A040((__int64)&v455, v282, v283, v284, (__int64)v429[0], (int)v429[1]);
          ptr = v468;
          v467 = 0x100000000LL;
          if ( (_DWORD)v456 )
            sub_A2FD60((__int64)&ptr, (__int64 *)&v455);
          v490 = v465;
          sub_1678570(v386, v9, (__int64)&ptr, v285, v286, v287);
          sub_1672680((char **)&ptr);
          sub_1672680(&v455);
        }
        ++v281;
      }
      while ( v280 != v281 );
LABEL_363:
      v60 = (unsigned int *)v447;
      goto LABEL_364;
    }
    sub_A08520(v427, v10 + 280, *(_DWORD *)(v9 + 24), (__int64)v88, v89, v90);
    v312 = (unsigned int *)v427[0];
    v378 = (__int64 **)v427[0];
    v406 = (__int64 **)((char *)v427[0] + 8 * LODWORD(v427[1]));
    if ( v427[0] == v406 )
    {
LABEL_454:
      if ( v312 != v428 )
        free(v312);
      goto LABEL_349;
    }
    v360 = v9;
    while ( 1 )
    {
      v313 = *v378;
      *(_QWORD *)&v421 = sub_1671E00(v372, v10 + 280, v311, (__int64)v88, v89, v90);
      DWORD2(v421) = v311;
      v407 = v311;
      if ( (_BYTE)v311 )
        break;
LABEL_405:
      if ( v406 == ++v378 )
      {
        v9 = v360;
        v312 = (unsigned int *)v427[0];
        goto LABEL_454;
      }
    }
    v314 = (unsigned __int8 *)sub_995750(v360);
    v315 = (void **)v313;
    sub_A16F90((__int64)&v447, v313, v421, v314, v316);
    v455 = v457;
    v456 = 0x100000000LL;
    v320 = v448;
    if ( (_DWORD)v448 )
    {
      v315 = &v447;
      sub_A2F710((__int64)&v455, (__int64 *)&v447);
      v28 = *(_BYTE *)(v10 + 289) == 0;
      v320 = v456;
      v459 = v451;
      if ( v28 )
      {
        v321 = v468;
        v317 = 0x100000000LL;
        ptr = v468;
        v467 = 0x100000000LL;
        if ( (_DWORD)v456 )
        {
          v315 = (void **)&v455;
          sub_A2F710((__int64)&ptr, (__int64 *)&v455);
        }
LABEL_410:
        v482 = v459;
        if ( ((*(_BYTE *)(v360 + 29) & 1) == 0 || !sub_1671280(v360, (__int64)v315, (__int64)v321, v317, v318, v319))
          && BYTE4(v482) )
        {
          LOBYTE(v430) = 0;
          v322 = (__int64 *)((char *)ptr + 128 * (unsigned __int64)(unsigned int)v482);
          v434[0] = 0;
          LOBYTE(v438) = 0;
          v323 = v322[1];
          v429[0] = &v430;
          v324 = *v322;
          v432 = v434;
          LOBYTE(v431) = v431 & 0xF0;
          LOBYTE(v435) = v435 & 0xF8;
          v429[1] = nullptr;
          v433 = 0;
          v436 = &v438;
          v437 = nullptr;
          v325 = *(_DWORD *)v322;
          v363 = v323;
          sub_A2F670((__int64)v429, (__int64)(v322 + 2));
          if ( !(v325 | (HIDWORD(v363) | (unsigned int)v363 | HIDWORD(v324)) & 0x7FFFFFFF) || !v433 )
          {
LABEL_413:
            sub_A09CE0((__int64)v429);
            goto LABEL_414;
          }
          v341 = (char *)ptr;
          v342 = (char *)ptr + 128 * (unsigned __int64)(unsigned int)v467;
          if ( ptr != v342 )
          {
            while ( *(_DWORD *)v341
                 || (*((_DWORD *)v341 + 1) & 0x7FFFFFFF) != 0
                 || (*((_DWORD *)v341 + 2) & 0x7FFFFFFF) != 0
                 || (*((_DWORD *)v341 + 3) & 0x7FFFFFFF) != 0
                 || !*((_QWORD *)v341 + 8) )
            {
              v341 += 128;
              if ( v342 == v341 )
                goto LABEL_452;
            }
            goto LABEL_413;
          }
LABEL_452:
          v423.m128i_i64[1] = v363;
          v423.m128i_i64[0] = __PAIR64__(HIDWORD(v324), v325);
          si128 = _mm_load_si128(&v423);
          LOBYTE(v424) = v424 & 0xFC | 2;
          v426 = v424;
          sub_1672C20(
            v10,
            v360,
            (__int64)&loc_2E926E,
            (__int64)&v419,
            (__int64)sub_16716D0,
            (__int64)&v418,
            si128.m128i_i64[0],
            si128.m128i_i64[1],
            v424);
          sub_A09CE0((__int64)v429);
        }
LABEL_414:
        v326 = ptr;
        v327 = (char *)ptr + 128 * (unsigned __int64)(unsigned int)v467;
        while ( v326 != v327 )
        {
          while ( 1 )
          {
            v327 -= 16;
            v328 = (_QWORD *)v327[12];
            if ( v328 != v327 + 14 )
              operator delete(v328);
            v329 = (_QWORD *)v327[7];
            if ( v329 != v327 + 9 )
              operator delete(v329);
            v330 = (_QWORD *)v327[2];
            if ( v330 == v327 + 4 )
              break;
            operator delete(v330);
            if ( v326 == v327 )
              goto LABEL_422;
          }
        }
LABEL_422:
        if ( ptr != v468 )
          free(ptr);
        v320 = v456;
      }
    }
    else
    {
      v321 = v451;
      v28 = *(_BYTE *)(v10 + 289) == 0;
      v459 = v451;
      if ( v28 )
      {
        ptr = v468;
        v467 = 0x100000000LL;
        goto LABEL_410;
      }
    }
    v467 = 0;
    v468[0] = 0;
    v331 = (unsigned int)v459;
    v471 = 0;
    v472[0] = 0;
    v475 = nullptr;
    if ( !BYTE4(v459) )
      v331 = v320;
    ptr = v468;
    v470 = v472;
    v387 = v331;
    v469 &= 0xF0u;
    LOBYTE(v473) = v473 & 0xF8;
    v474 = &v476;
    LOBYTE(v476) = 0;
    if ( v320 )
    {
      v332 = 0;
      v392 = v320 - 1;
      v409 = (unsigned __int64)v331 << 7;
      while ( 1 )
      {
        v337 = &v455[128 * v332];
        v335 = *((void **)v337 + 1);
        v336 = *(_DWORD *)v337;
        v364 = *(_QWORD *)v337;
        sub_9EE8A0((__int64)&ptr, (__int64)(v337 + 16));
        v469 = v337[48] & 0xF | v469 & 0xF0;
        sub_9EE8A0((__int64)&v470, (__int64)(v337 + 56));
        LOBYTE(v473) = v337[88] & 7 | v473 & 0xF8;
        sub_9EE8A0((__int64)&v474, (__int64)(v337 + 96));
        HIDWORD(v334) = HIDWORD(v364);
        v340 = *(_BYTE *)(v10 + 289);
        if ( v387 == (_DWORD)v332 )
        {
          v340 ^= 1u;
          v333 = 0;
        }
        else if ( v340 )
        {
          v333 = 0;
          v340 = 0;
        }
        else
        {
          v333 = 0;
          if ( !v336 )
          {
            v333 = 0;
            if ( ((HIDWORD(v335) | (unsigned int)v335 | HIDWORD(v364)) & 0x7FFFFFFF) == 0 )
            {
              v334 = *(_QWORD *)&v455[v409];
              v335 = *(void **)&v455[v409 + 8];
              v336 = *(_DWORD *)&v455[v409];
              v333 = v407;
            }
          }
        }
        v429[1] = v335;
        v429[0] = (void *)__PAIR64__(HIDWORD(v334), v336);
        si128 = _mm_load_si128((const __m128i *)v429);
        LOBYTE(v430) = (2 * (v333 & 1)) | v340 & 1 | v430 & 0xFC;
        v426 = v430;
        sub_1675E00(v10, v360, (__int64)&ptr, v340 & 1, v338, v339, (__int128)si128, v430);
        if ( v392 == v332 )
          break;
        ++v332;
      }
    }
    sub_A09CE0((__int64)&ptr);
    sub_1672B40((__int64)&v455);
    sub_1672B40((__int64)&v447);
    goto LABEL_405;
  }
  sub_A08520(v427, a1 + 280, *(_DWORD *)(v9 + 24), (__int64)v88, v89, v90);
  v401 = (__int64 **)((char *)v427[0] + 8 * LODWORD(v427[1]));
  if ( v427[0] == v401 )
    goto LABEL_229;
  v395 = (__int64 **)v427[0];
  v391 = v9;
  do
  {
    v147 = *v395;
    v148 = (unsigned __int8 *)sub_995750(v391);
    v149 = (void **)v147;
    sub_A18EA0((__int64)&v447, v147, v148, v150);
    v455 = v457;
    v456 = 0x100000000LL;
    v375 = v448;
    if ( (_DWORD)v448 )
    {
      v149 = &v447;
      sub_A25B10((__int64)&v455, (__int64)&v447);
      v152 = (unsigned int)v456;
      v28 = *(_BYTE *)(v10 + 289) == 0;
      v375 = v456;
      v458 = v450;
      if ( !v28 )
        goto LABEL_213;
      ptr = v468;
      v467 = 0x100000000LL;
      if ( (_DWORD)v456 )
      {
        v149 = (void **)&v455;
        sub_A25B10((__int64)&ptr, (__int64)&v455);
      }
    }
    else
    {
      v28 = *(_BYTE *)(v10 + 289) == 0;
      v458 = v450;
      if ( !v28 )
        goto LABEL_213;
      ptr = v468;
      v467 = 0x100000000LL;
    }
    v477 = v458;
    if ( (*(_BYTE *)(v391 + 29) & 1) != 0 && sub_1671280(v391, (__int64)v149, v151, v152, v153, v154) )
      goto LABEL_203;
    v155 = (char *)ptr;
    if ( BYTE4(v477) )
    {
      LOBYTE(v430) = 0;
      v434[0] = 0;
      v429[0] = &v430;
      LOBYTE(v431) = v431 & 0xF0;
      v429[1] = nullptr;
      v432 = v434;
      v433 = 0;
      v156 = (char *)ptr + 88 * (unsigned int)v477;
      v157 = *((_QWORD *)v156 + 1);
      v158 = *(_QWORD *)v156;
      v159 = *(_DWORD *)v156;
      sub_9EE8A0((__int64)v429, (__int64)(v156 + 16));
      LOBYTE(v431) = v156[48] & 0xF | v431 & 0xF0;
      sub_9EE8A0((__int64)&v432, (__int64)(v156 + 56));
      if ( v159 | (HIDWORD(v157) | (unsigned int)v157 | HIDWORD(v158)) & 0x7FFFFFFF && v433 )
      {
        v172 = (char *)ptr;
        v173 = (char *)ptr + 88 * (unsigned int)v467;
        if ( ptr == v173 )
        {
LABEL_242:
          v423.m128i_i64[1] = v157;
          v423.m128i_i32[1] = (v158 & 0xFFFFFFFF00000000LL) >> 32;
          v423.m128i_i32[0] = v159;
          v174 = _mm_load_si128(&v423);
          LOBYTE(v424) = v424 & 0xFC | 2;
          si128 = v174;
          v426 = v424;
          sub_1672C20(
            v10,
            v391,
            (__int64)&loc_2E926E,
            (__int64)&v421,
            (__int64)sub_16716D0,
            (__int64)&v419,
            v174.m128i_i64[0],
            v174.m128i_i64[1],
            v424);
          sub_A09C30((__int64)v429);
          v155 = (char *)ptr;
          goto LABEL_204;
        }
        while ( *(_DWORD *)v172
             || (*((_DWORD *)v172 + 1) & 0x7FFFFFFF) != 0
             || (*((_DWORD *)v172 + 2) & 0x7FFFFFFF) != 0
             || (*((_DWORD *)v172 + 3) & 0x7FFFFFFF) != 0
             || !*((_QWORD *)v172 + 8) )
        {
          v172 += 88;
          if ( v173 == v172 )
            goto LABEL_242;
        }
      }
      sub_A09C30((__int64)v429);
LABEL_203:
      v155 = (char *)ptr;
    }
LABEL_204:
    v160 = &v155[88 * (unsigned int)v467];
    if ( v160 != v155 )
    {
      do
      {
        while ( 1 )
        {
          v160 -= 88;
          v161 = *((char **)v160 + 7);
          if ( v161 != v160 + 72 )
            operator delete(v161);
          v162 = *((char **)v160 + 2);
          if ( v162 == v160 + 32 )
            break;
          operator delete(v162);
          if ( v160 == v155 )
            goto LABEL_209;
        }
      }
      while ( v160 != v155 );
LABEL_209:
      v155 = (char *)ptr;
    }
    if ( v155 != v468 )
      free(v155);
    v375 = v456;
LABEL_213:
    v163 = v458;
    v467 = 0;
    v468[0] = 0;
    v472[0] = 0;
    v471 = 0;
    if ( !BYTE4(v458) )
      v163 = v375;
    v469 &= 0xF0u;
    v383 = v163;
    ptr = v468;
    v470 = v472;
    if ( v375 )
    {
      v164 = 0;
      v165 = 0;
      v404 = 88LL * v163;
      do
      {
        v167 = *(_QWORD *)&v455[v164];
        v356 = &v455[v164];
        v169 = *(_DWORD *)&v455[v164];
        v370 = *(void **)&v455[v164 + 8];
        sub_9EE8A0((__int64)&ptr, (__int64)&v455[v164 + 16]);
        v469 = v356[48] & 0xF | v469 & 0xF0;
        sub_9EE8A0((__int64)&v470, (__int64)(v356 + 56));
        v168 = v370;
        v171 = *(_BYTE *)(v10 + 289);
        if ( v383 == v165 )
        {
          v171 ^= 1u;
          v166 = 0;
        }
        else if ( v171 )
        {
          v166 = 0;
          v171 = 0;
        }
        else
        {
          v166 = 0;
          if ( !v169 )
          {
            v166 = *(unsigned __int8 *)(v10 + 289);
            if ( ((HIDWORD(v370) | (unsigned int)v370 | HIDWORD(v167)) & 0x7FFFFFFF) == 0 )
            {
              v166 = 1;
              v167 = *(_QWORD *)&v455[v404];
              v168 = *(void **)&v455[v404 + 8];
              v169 = *(_DWORD *)&v455[v404];
            }
          }
        }
        v429[1] = v168;
        ++v165;
        v164 += 88;
        HIDWORD(v429[0]) = (v167 & 0xFFFFFFFF00000000LL) >> 32;
        LODWORD(v429[0]) = v169;
        si128 = _mm_load_si128((const __m128i *)v429);
        LOBYTE(v430) = (2 * v166) | v171 & 1 | v430 & 0xFC;
        v426 = v430;
        sub_1673CA0(v10, v391, (__int64)&ptr, (unsigned int)(2 * v166), (__int64)v168, v170, (__int128)si128, v430);
      }
      while ( v165 != v375 );
    }
    sub_A09C30((__int64)&ptr);
    sub_A23A30(&v455);
    sub_A23A30((char **)&v447);
    ++v395;
  }
  while ( v401 != v395 );
  v401 = (__int64 **)v427[0];
LABEL_229:
  v60 = (unsigned int *)v401;
  if ( v401 != (__int64 **)v428 )
    goto LABEL_148;
}
