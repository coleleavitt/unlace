__int64 __fastcall sub_16910B0(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        __m128 a7,
        char a8)
{
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbp
  unsigned int v17; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE *v23; // rdi
  size_t v24; // rax
  __int64 v25; // rsi
  char *v26; // rax
  _BYTE *v27; // r8
  signed __int64 v28; // rdx
  signed __int64 v29; // r15
  unsigned __int8 v30; // r15
  unsigned __int64 v31; // rax
  unsigned int v32; // r14d
  unsigned __int64 v33; // r15
  unsigned __int8 *v34; // rax
  _QWORD *v35; // rax
  unsigned __int8 *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rax
  void **v39; // r15
  unsigned __int8 *v40; // rdi
  __int64 v41; // rax
  void *v42; // rdi
  unsigned __int8 *v43; // r15
  _BYTE *v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int8 *v47; // r15
  _BYTE *v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  void *v51; // rcx
  unsigned __int8 *v52; // rax
  __int64 v53; // rsi
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned __int8 *v57; // r15
  void *v58; // rdx
  unsigned __int8 *v59; // rcx
  __int64 v60; // rax
  unsigned __int8 *v61; // rax
  _BYTE *v62; // rsi
  signed __int64 v63; // rcx
  _QWORD *v64; // rax
  unsigned __int8 *v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rax
  void **v68; // rcx
  unsigned __int8 *v69; // rdi
  __int64 v70; // rax
  void *v71; // rdi
  bool v72; // r15
  void *v73; // rdx
  unsigned __int8 *v74; // r15
  unsigned __int8 *v75; // rcx
  __int64 v76; // rax
  bool v77; // r15
  void *v78; // rdx
  unsigned __int8 *v79; // r15
  unsigned __int8 *v80; // rcx
  __int64 v81; // rax
  unsigned __int8 *v82; // r15
  _BYTE *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r15
  void *v90; // rax
  _QWORD *v91; // rax
  void *v92; // rdx
  __int64 v93; // rcx
  unsigned __int8 *v94; // r15
  _BYTE *v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r15
  __int64 v102; // rax
  _QWORD *v103; // rax
  _BYTE *v104; // rsi
  signed __int64 v105; // r8
  __int64 v106; // rcx
  unsigned __int8 *v107; // r15
  _QWORD *v108; // rax
  _BYTE *v109; // rdx
  __int64 v110; // r8
  __int64 v111; // rax
  void **v112; // rcx
  _BYTE *v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // r15
  void *v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rdx
  unsigned __int8 *v123; // r15
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // r9
  __int64 v127; // r8
  __int64 v128; // rdx
  __int64 v129; // rax
  _QWORD *v130; // rax
  char *v131; // r8
  __int64 v132; // r9
  unsigned __int8 *v133; // rax
  _QWORD *v134; // rax
  _BYTE *v135; // rdx
  __int64 v136; // r8
  __int64 v137; // rax
  void **v138; // r15
  _BYTE *v139; // rdi
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  void *v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rcx
  unsigned __int64 v148; // rdi
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // r15
  void *v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // rdx
  unsigned __int8 *v157; // r15
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  void *v162; // rax
  _QWORD *v163; // rax
  void *v164; // rdx
  __int64 v165; // rcx
  unsigned __int8 *v166; // r15
  _BYTE *v167; // rcx
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  void *v173; // rax
  _QWORD *v174; // rax
  void *v175; // rdx
  __int64 v176; // rcx
  unsigned __int8 *v177; // r15
  _BYTE *v178; // rcx
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  void *v184; // rax
  _QWORD *v185; // rax
  __int64 v186; // rdx
  unsigned __int8 *v187; // r15
  size_t v188; // rdx
  size_t v189; // rdx
  size_t v190; // rdx
  size_t v191; // rdx
  size_t v192; // rdx
  __int64 v193; // rdx
  int v194; // eax
  __int64 v195; // rcx
  int v196; // eax
  __int64 v197; // rdx
  int v198; // eax
  __int64 v199; // rdx
  int v200; // eax
  __int64 v201; // rdx
  int v202; // eax
  __int64 v203; // rcx
  int v204; // eax
  __int64 v205; // rdx
  int v206; // eax
  __int64 v207; // rcx
  int v208; // eax
  __int64 v209; // rdx
  int v210; // eax
  __int64 v211; // rdx
  int v212; // eax
  __int64 v213; // rsi
  int v214; // eax
  __int64 v215; // rsi
  int v216; // eax
  __int64 v217; // rsi
  int v218; // eax
  __int64 v219; // rdx
  int v220; // eax
  __int64 v221; // rcx
  int v222; // eax
  __int64 v223; // rsi
  int v224; // eax
  __int64 v225; // rdx
  int v226; // eax
  __int64 v227; // rcx
  int v228; // eax
  __int64 v229; // rax
  __int64 v230; // rax
  _QWORD *v231; // rcx
  _QWORD *v232; // rax
  _QWORD *v233; // rdi
  __int64 v234; // rax
  __int64 v235; // rax
  char *v236; // rsi
  char *v237; // rax
  char *v238; // rdi
  __int64 v239; // rax
  __int64 v240; // rax
  char *v241; // rsi
  char *v242; // rax
  char *v243; // rdi
  __int64 v244; // rax
  __int64 v245; // r15
  char *v246; // rdx
  char *v247; // r15
  char *v248; // rdi
  __int64 v249; // rax
  __int64 v250; // rax
  char *v251; // rsi
  char *v252; // rax
  char *v253; // rdi
  __int64 v254; // rax
  __int64 v255; // rax
  char *v256; // rcx
  char *v257; // rax
  char *v258; // rdi
  __int64 v259; // rax
  __int64 v260; // rax
  __int64 v261; // rsi
  __int64 v262; // rax
  void *v263; // rdi
  __int64 v264; // rax
  __int64 v265; // rdx
  _QWORD *v266; // rcx
  _QWORD *v267; // rdx
  _QWORD *v268; // rdi
  __int64 v269; // rax
  __int64 v270; // r15
  __int64 v271; // rsi
  __int64 v272; // r15
  void *v273; // rdi
  __int64 v274; // rax
  __int64 v275; // rax
  _QWORD *v276; // r8
  _QWORD *v277; // rax
  _QWORD *v278; // rdi
  __int64 v279; // rax
  __int64 v280; // rdx
  _QWORD *v281; // r8
  _QWORD *v282; // rdx
  _QWORD *v283; // rdi
  __int64 v284; // rax
  __int64 v285; // rax
  char *v286; // rsi
  char *v287; // rax
  char *v288; // rdi
  __int64 v289; // rax
  __int64 v290; // rax
  char *v291; // rsi
  char *v292; // rax
  char *v293; // rdi
  __int64 v294; // rax
  __int64 v295; // rax
  _QWORD *v296; // rdx
  _QWORD *v297; // rax
  _QWORD *v298; // rdi
  __int64 v299; // rax
  __int64 v300; // rdx
  char *v301; // rcx
  char *v302; // rdx
  char *v303; // rdi
  __int64 v304; // rax
  __int64 v305; // rax
  char *v306; // rsi
  char *v307; // rax
  char *v308; // rdi
  __int64 v309; // rax
  __int64 v310; // rax
  char *v311; // rsi
  char *v312; // rax
  char *v313; // rdi
  __int64 v314; // rax
  __int64 v315; // rax
  char *v316; // rsi
  char *v317; // rax
  char *v318; // rdi
  char v320; // [rsp+8h] [rbp-1C0h]
  char *v321; // [rsp+8h] [rbp-1C0h]
  void *v322; // [rsp+8h] [rbp-1C0h]
  char *v323; // [rsp+8h] [rbp-1C0h]
  void *v324; // [rsp+8h] [rbp-1C0h]
  unsigned __int8 *v325; // [rsp+8h] [rbp-1C0h]
  void *v326; // [rsp+8h] [rbp-1C0h]
  void *v327; // [rsp+8h] [rbp-1C0h]
  void *v328; // [rsp+8h] [rbp-1C0h]
  void *v329; // [rsp+8h] [rbp-1C0h]
  void *v330; // [rsp+8h] [rbp-1C0h]
  _BYTE *v331; // [rsp+8h] [rbp-1C0h]
  void **v332; // [rsp+8h] [rbp-1C0h]
  void *v333; // [rsp+8h] [rbp-1C0h]
  void *v334; // [rsp+8h] [rbp-1C0h]
  void *v335; // [rsp+8h] [rbp-1C0h]
  void *v336; // [rsp+8h] [rbp-1C0h]
  void **v337; // [rsp+8h] [rbp-1C0h]
  void *v338; // [rsp+8h] [rbp-1C0h]
  _BYTE *v339; // [rsp+8h] [rbp-1C0h]
  _BYTE *v340; // [rsp+8h] [rbp-1C0h]
  void *v341; // [rsp+8h] [rbp-1C0h]
  void *v342; // [rsp+8h] [rbp-1C0h]
  int v343; // [rsp+8h] [rbp-1C0h]
  void *v344; // [rsp+8h] [rbp-1C0h]
  void *v345; // [rsp+8h] [rbp-1C0h]
  void *v346; // [rsp+8h] [rbp-1C0h]
  void *v347; // [rsp+8h] [rbp-1C0h]
  void *v348; // [rsp+8h] [rbp-1C0h]
  void *v349; // [rsp+8h] [rbp-1C0h]
  void *v350; // [rsp+8h] [rbp-1C0h]
  void *v351; // [rsp+8h] [rbp-1C0h]
  void *v352; // [rsp+8h] [rbp-1C0h]
  _QWORD *v353; // [rsp+8h] [rbp-1C0h]
  void *v354; // [rsp+8h] [rbp-1C0h]
  void *v355; // [rsp+8h] [rbp-1C0h]
  void *v356; // [rsp+8h] [rbp-1C0h]
  char *v357; // [rsp+8h] [rbp-1C0h]
  void *v358; // [rsp+8h] [rbp-1C0h]
  unsigned __int8 *v359; // [rsp+8h] [rbp-1C0h]
  unsigned __int8 *v360; // [rsp+8h] [rbp-1C0h]
  _QWORD *v361; // [rsp+8h] [rbp-1C0h]
  _QWORD *v362; // [rsp+8h] [rbp-1C0h]
  char *v363; // [rsp+8h] [rbp-1C0h]
  void *v364; // [rsp+8h] [rbp-1C0h]
  _QWORD *v365; // [rsp+8h] [rbp-1C0h]
  char *v366; // [rsp+8h] [rbp-1C0h]
  void *v367; // [rsp+8h] [rbp-1C0h]
  void *v368; // [rsp+8h] [rbp-1C0h]
  char *v369; // [rsp+8h] [rbp-1C0h]
  char *v371; // [rsp+10h] [rbp-1B8h]
  char *v372; // [rsp+10h] [rbp-1B8h]
  char *v373; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v374; // [rsp+10h] [rbp-1B8h]
  _QWORD *v375; // [rsp+10h] [rbp-1B8h]
  __int64 v376; // [rsp+10h] [rbp-1B8h]
  _QWORD *v377; // [rsp+10h] [rbp-1B8h]
  __int64 v378; // [rsp+10h] [rbp-1B8h]
  unsigned __int8 *v379; // [rsp+10h] [rbp-1B8h]
  unsigned __int8 *v380; // [rsp+10h] [rbp-1B8h]
  void *v382; // [rsp+18h] [rbp-1B0h]
  void *v383; // [rsp+18h] [rbp-1B0h]
  void *v384; // [rsp+18h] [rbp-1B0h]
  void *v385; // [rsp+18h] [rbp-1B0h]
  void *v386; // [rsp+18h] [rbp-1B0h]
  _BYTE *v387; // [rsp+18h] [rbp-1B0h]
  char *v388; // [rsp+18h] [rbp-1B0h]
  void *v389; // [rsp+18h] [rbp-1B0h]
  char *v390; // [rsp+18h] [rbp-1B0h]
  _QWORD *v391; // [rsp+18h] [rbp-1B0h]
  void *v392; // [rsp+18h] [rbp-1B0h]
  void *v393; // [rsp+18h] [rbp-1B0h]
  void *v394; // [rsp+18h] [rbp-1B0h]
  void *v395; // [rsp+18h] [rbp-1B0h]
  void *v396; // [rsp+18h] [rbp-1B0h]
  void *v397; // [rsp+18h] [rbp-1B0h]
  void *v398; // [rsp+18h] [rbp-1B0h]
  void *v399; // [rsp+18h] [rbp-1B0h]
  char *v400; // [rsp+18h] [rbp-1B0h]
  void *v401; // [rsp+18h] [rbp-1B0h]
  __int64 v402; // [rsp+20h] [rbp-1A8h]
  _QWORD *v403; // [rsp+20h] [rbp-1A8h]
  _QWORD *v404; // [rsp+20h] [rbp-1A8h]
  void *v405; // [rsp+28h] [rbp-1A0h] BYREF
  char *v406; // [rsp+30h] [rbp-198h]
  _QWORD *v407; // [rsp+38h] [rbp-190h]
  __int64 v408; // [rsp+48h] [rbp-180h] BYREF
  __int64 v409; // [rsp+50h] [rbp-178h] BYREF
  __int64 v410; // [rsp+58h] [rbp-170h] BYREF
  void *dest; // [rsp+60h] [rbp-168h]
  __m128 v412; // [rsp+68h] [rbp-160h] BYREF
  void *v413; // [rsp+80h] [rbp-148h]
  size_t v414; // [rsp+88h] [rbp-140h]
  _QWORD v415[2]; // [rsp+90h] [rbp-138h] BYREF
  void *v416; // [rsp+A0h] [rbp-128h]
  size_t v417; // [rsp+A8h] [rbp-120h]
  _QWORD v418[2]; // [rsp+B0h] [rbp-118h] BYREF
  void *v419; // [rsp+C0h] [rbp-108h] BYREF
  size_t v420; // [rsp+C8h] [rbp-100h]
  _QWORD v421[2]; // [rsp+D0h] [rbp-F8h] BYREF
  void *v422; // [rsp+E0h] [rbp-E8h] BYREF
  size_t v423; // [rsp+E8h] [rbp-E0h]
  _QWORD v424[2]; // [rsp+F0h] [rbp-D8h] BYREF
  void *src; // [rsp+100h] [rbp-C8h] BYREF
  size_t n; // [rsp+108h] [rbp-C0h]
  _QWORD v427[2]; // [rsp+110h] [rbp-B8h] BYREF
  unsigned __int8 *v428; // [rsp+120h] [rbp-A8h]
  __int64 v429; // [rsp+128h] [rbp-A0h]
  char v430; // [rsp+178h] [rbp-50h]
  unsigned int v431; // [rsp+180h] [rbp-48h]
  char v432; // [rsp+184h] [rbp-44h]

  v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v408 = 0;
  v12 = sub_F6A430(v11);
  if ( !v12 )
    return 1;
  v16 = v12;
  if ( *(char *)(v12 + 18) < 0 )
    return 1;
  v402 = sub_F68450(v12, a2, v13, v14, v15);
  if ( (v402 & 0xFFFFFFFFFFFFFFF0LL) == 0
    || !sub_F62670(*(_QWORD *)(v402 & 0xFFFFFFFFFFFFFFF0LL), &v408, v19, v20, v21, v22) )
  {
    return 1;
  }
  v412.m128_i8[8] = 0;
  v412.m128_u64[0] = 0;
  dest = &v412.m128_u16[4];
  if ( a6 )
  {
    v405 = &v412.m128_u16[4];
    if ( a8 )
      sub_B76FC0((__int64)&src, a6);
    else
      sub_B86A00((__int64)&src, a6 + 5);
    v23 = dest;
    if ( src == v427 )
    {
      v188 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v427[0];
        else
          memcpy(dest, src, n);
        v188 = n;
        v23 = dest;
      }
      v412.m128_u64[0] = v188;
      v23[v188] = 0;
      v23 = src;
      goto LABEL_14;
    }
    if ( dest == v405 )
    {
      v405 = (void *)v427[0];
      dest = src;
      a7 = _mm_loadh_ps((const double *)&v405);
      v412 = a7;
    }
    else
    {
      v405 = (void *)v427[0];
      v24 = v412.m128_u64[1];
      dest = src;
      a7 = _mm_loadh_ps((const double *)&v405);
      v412 = a7;
      if ( v23 )
      {
        src = v23;
        v427[0] = v24;
        goto LABEL_14;
      }
    }
    v23 = v427;
    src = v427;
LABEL_14:
    n = 0;
    *v23 = 0;
    if ( src != v427 )
      operator delete(src);
  }
  sub_168B9F0((__int64)&src, (__int64 *)(a1 + 8), a5, 0xDDBu, 0);
  if ( v430 )
  {
    v57 = v428;
    v58 = (void *)a4;
    if ( !v428 )
    {
      v207 = v429;
      v208 = *(_DWORD *)(v429 + 14976);
      if ( v208 )
      {
        v249 = (unsigned int)(v208 - 1);
        *(_DWORD *)(v429 + 14976) = v249;
        v57 = *(unsigned __int8 **)(v207 + 8 * v249 + 14848);
        v250 = *((unsigned int *)v57 + 134);
        *v57 = 0;
        v251 = *((char **)v57 + 66);
        *((_DWORD *)v57 + 106) = 0;
        v252 = &v251[64 * v250];
        while ( v251 != v252 )
        {
          while ( 1 )
          {
            v252 -= 64;
            v253 = *((char **)v252 + 3);
            if ( v253 == v252 + 40 )
              break;
            v405 = v252;
            v356 = v58;
            operator delete(v253);
            v252 = (char *)v405;
            v58 = v356;
            if ( v251 == v405 )
              goto LABEL_270;
          }
        }
LABEL_270:
        *((_DWORD *)v57 + 134) = 0;
      }
      else
      {
        v57 = (unsigned __int8 *)operator new(0x3A0u);
        *v57 = 0;
        *((_QWORD *)v57 + 12) = v57 + 112;
        *((_QWORD *)v57 + 16) = v57 + 144;
        *((_QWORD *)v57 + 20) = v57 + 176;
        *((_QWORD *)v57 + 24) = v57 + 208;
        *((_QWORD *)v57 + 28) = v57 + 240;
        *((_QWORD *)v57 + 32) = v57 + 272;
        *((_QWORD *)v57 + 36) = v57 + 304;
        *((_QWORD *)v57 + 40) = v57 + 336;
        *((_QWORD *)v57 + 44) = v57 + 368;
        *((_QWORD *)v57 + 48) = v57 + 400;
        *((_QWORD *)v57 + 52) = v57 + 432;
        *((_QWORD *)v57 + 13) = 0;
        v57[112] = 0;
        *((_QWORD *)v57 + 17) = 0;
        v57[144] = 0;
        *((_QWORD *)v57 + 21) = 0;
        v57[176] = 0;
        *((_QWORD *)v57 + 25) = 0;
        v57[208] = 0;
        *((_QWORD *)v57 + 29) = 0;
        v57[240] = 0;
        *((_QWORD *)v57 + 33) = 0;
        v57[272] = 0;
        *((_QWORD *)v57 + 37) = 0;
        v57[304] = 0;
        *((_QWORD *)v57 + 41) = 0;
        v57[336] = 0;
        *((_QWORD *)v57 + 45) = 0;
        v57[368] = 0;
        *((_QWORD *)v57 + 49) = 0;
        v57[400] = 0;
        *((_QWORD *)v57 + 53) = 0x800000000LL;
        v58 = (void *)a4;
        *((_QWORD *)v57 + 66) = v57 + 544;
        *((_QWORD *)v57 + 67) = 0x600000000LL;
      }
      v428 = v57;
    }
    v57[*v57 + 1] = 2;
    v59 = v428;
    v60 = *v428;
    *v428 = v60 + 1;
    *(_QWORD *)&v59[8 * v60 + 16] = v58;
    if ( !v430 )
      goto LABEL_79;
LABEL_52:
    v61 = v428;
    v62 = dest;
    v63 = v412.m128_u64[0];
    if ( !v428 )
    {
      v199 = v429;
      v200 = *(_DWORD *)(v429 + 14976);
      if ( v200 )
      {
        v244 = (unsigned int)(v200 - 1);
        *(_DWORD *)(v429 + 14976) = v244;
        v61 = *(unsigned __int8 **)(v199 + 8 * v244 + 14848);
        v245 = *((unsigned int *)v61 + 134);
        *v61 = 0;
        v246 = *((char **)v61 + 66);
        *((_DWORD *)v61 + 106) = 0;
        v247 = &v246[64 * v245];
        while ( v246 != v247 )
        {
          while ( 1 )
          {
            v247 -= 64;
            v248 = *((char **)v247 + 3);
            if ( v248 == v247 + 40 )
              break;
            v406 = v246;
            v405 = v61;
            v389 = (void *)v63;
            operator delete(v248);
            v246 = v406;
            v63 = (signed __int64)v389;
            v61 = (unsigned __int8 *)v405;
            if ( v406 == v247 )
              goto LABEL_265;
          }
        }
LABEL_265:
        *((_DWORD *)v61 + 134) = 0;
      }
      else
      {
        v384 = (void *)v412.m128_u64[0];
        v340 = dest;
        v61 = (unsigned __int8 *)operator new(0x3A0u);
        *v61 = 0;
        *((_QWORD *)v61 + 12) = v61 + 112;
        *((_QWORD *)v61 + 16) = v61 + 144;
        *((_QWORD *)v61 + 20) = v61 + 176;
        *((_QWORD *)v61 + 24) = v61 + 208;
        *((_QWORD *)v61 + 28) = v61 + 240;
        *((_QWORD *)v61 + 32) = v61 + 272;
        *((_QWORD *)v61 + 36) = v61 + 304;
        *((_QWORD *)v61 + 40) = v61 + 336;
        *((_QWORD *)v61 + 44) = v61 + 368;
        *((_QWORD *)v61 + 48) = v61 + 400;
        *((_QWORD *)v61 + 52) = v61 + 432;
        *((_QWORD *)v61 + 13) = 0;
        v61[112] = 0;
        *((_QWORD *)v61 + 17) = 0;
        v61[144] = 0;
        *((_QWORD *)v61 + 21) = 0;
        v61[176] = 0;
        *((_QWORD *)v61 + 25) = 0;
        v61[208] = 0;
        *((_QWORD *)v61 + 29) = 0;
        v61[240] = 0;
        *((_QWORD *)v61 + 33) = 0;
        v61[272] = 0;
        *((_QWORD *)v61 + 37) = 0;
        v61[304] = 0;
        *((_QWORD *)v61 + 41) = 0;
        v61[336] = 0;
        *((_QWORD *)v61 + 45) = 0;
        v61[368] = 0;
        *((_QWORD *)v61 + 49) = 0;
        v61[400] = 0;
        *((_QWORD *)v61 + 53) = 0x800000000LL;
        v63 = (signed __int64)v384;
        *((_QWORD *)v61 + 66) = v61 + 544;
        *((_QWORD *)v61 + 67) = 0x600000000LL;
        v62 = v340;
      }
      v428 = v61;
    }
    v61[*v61 + 1] = 0;
    v413 = v415;
    if ( &v62[v63] && !v62 )
      goto LABEL_347;
    if ( (unsigned __int64)v63 > 0xF )
    {
      if ( v63 < 0 )
        goto LABEL_346;
      v329 = (void *)v63;
      v64 = (_QWORD *)operator new(v63 + 1);
      v63 = (signed __int64)v329;
      v413 = v64;
      v415[0] = v329;
    }
    else
    {
      if ( v63 == 1 )
      {
        LOBYTE(v415[0]) = *v62;
        v64 = v415;
        goto LABEL_58;
      }
      v64 = v415;
      if ( !v63 )
      {
LABEL_58:
        v414 = v63;
        *((_BYTE *)v64 + v63) = 0;
        v65 = v428;
        v66 = *v428;
        *v428 = v66 + 1;
        v67 = 32 * (v66 + 3);
        v68 = (void **)&v65[v67];
        v69 = *(unsigned __int8 **)&v65[v67];
        if ( v413 == v415 )
        {
          v190 = v414;
          if ( v414 )
          {
            if ( v414 == 1 )
            {
              *v69 = v415[0];
              v190 = v414;
              v69 = (unsigned __int8 *)*v68;
            }
            else
            {
              v332 = v68;
              memcpy(v69, v413, v414);
              v68 = v332;
              v190 = v414;
              v69 = (unsigned __int8 *)*v332;
            }
          }
          v68[1] = (void *)v190;
          v69[v190] = 0;
          v69 = (unsigned __int8 *)v413;
        }
        else
        {
          if ( v69 == &v65[v67 + 16] )
          {
            *v68 = v413;
            v68[1] = (void *)v414;
            v68[2] = (void *)v415[0];
          }
          else
          {
            v70 = *(_QWORD *)&v65[32 * (int)v66 + 112];
            *v68 = v413;
            v68[1] = (void *)v414;
            v68[2] = (void *)v415[0];
            if ( v69 )
            {
              v413 = v69;
              v415[0] = v70;
              goto LABEL_62;
            }
          }
          v69 = (unsigned __int8 *)v415;
          v413 = v415;
        }
LABEL_62:
        v414 = 0;
        *v69 = 0;
        v71 = v413;
        if ( v413 == v415 )
          goto LABEL_64;
        goto LABEL_63;
      }
    }
    v330 = (void *)v63;
    memcpy(v64, v62, v63);
    v64 = v413;
    v63 = (signed __int64)v330;
    goto LABEL_58;
  }
  if ( !v432 )
    goto LABEL_18;
  v89 = sub_168B9E0(&src);
  v90 = (void *)v427[0];
  if ( v427[0] )
    v90 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
  v422 = v90;
  v91 = sub_1587BC0(v89, (__int64 *)&v422, v85, v86, v87, v88);
  v92 = (void *)a4;
  v93 = *v91 + 32LL * v431;
  v94 = *(unsigned __int8 **)(v93 + 8);
  if ( !v94 )
  {
    v223 = *(_QWORD *)(v93 + 16);
    v224 = *(_DWORD *)(v223 + 14976);
    if ( v224 )
    {
      v289 = (unsigned int)(v224 - 1);
      *(_DWORD *)(v223 + 14976) = v289;
      v94 = *(unsigned __int8 **)(v223 + 8 * v289 + 14848);
      v290 = *((unsigned int *)v94 + 134);
      *v94 = 0;
      v291 = *((char **)v94 + 66);
      *((_DWORD *)v94 + 106) = 0;
      v292 = &v291[64 * v290];
      while ( v291 != v292 )
      {
        while ( 1 )
        {
          v292 -= 64;
          v293 = *((char **)v292 + 3);
          if ( v293 == v292 + 40 )
            break;
          v406 = v292;
          v405 = v291;
          v396 = v92;
          v364 = (void *)v93;
          operator delete(v293);
          v291 = (char *)v405;
          v292 = v406;
          v93 = (__int64)v364;
          v92 = v396;
          if ( v405 == v406 )
            goto LABEL_314;
        }
      }
LABEL_314:
      *((_DWORD *)v94 + 134) = 0;
    }
    else
    {
      v350 = (void *)v93;
      v94 = (unsigned __int8 *)operator new(0x3A0u);
      *v94 = 0;
      *((_QWORD *)v94 + 12) = v94 + 112;
      *((_QWORD *)v94 + 16) = v94 + 144;
      *((_QWORD *)v94 + 20) = v94 + 176;
      *((_QWORD *)v94 + 24) = v94 + 208;
      *((_QWORD *)v94 + 28) = v94 + 240;
      *((_QWORD *)v94 + 32) = v94 + 272;
      *((_QWORD *)v94 + 36) = v94 + 304;
      *((_QWORD *)v94 + 40) = v94 + 336;
      *((_QWORD *)v94 + 44) = v94 + 368;
      *((_QWORD *)v94 + 48) = v94 + 400;
      *((_QWORD *)v94 + 52) = v94 + 432;
      *((_QWORD *)v94 + 13) = 0;
      v94[112] = 0;
      *((_QWORD *)v94 + 17) = 0;
      v94[144] = 0;
      *((_QWORD *)v94 + 21) = 0;
      v94[176] = 0;
      *((_QWORD *)v94 + 25) = 0;
      v94[208] = 0;
      *((_QWORD *)v94 + 29) = 0;
      v94[240] = 0;
      *((_QWORD *)v94 + 33) = 0;
      v94[272] = 0;
      *((_QWORD *)v94 + 37) = 0;
      v94[304] = 0;
      *((_QWORD *)v94 + 41) = 0;
      v94[336] = 0;
      *((_QWORD *)v94 + 45) = 0;
      v94[368] = 0;
      *((_QWORD *)v94 + 49) = 0;
      v94[400] = 0;
      *((_QWORD *)v94 + 53) = 0x800000000LL;
      v93 = (__int64)v350;
      *((_QWORD *)v94 + 66) = v94 + 544;
      v92 = (void *)a4;
      *((_QWORD *)v94 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v93 + 8) = v94;
  }
  v94[*v94 + 1] = 2;
  v95 = *(_BYTE **)(v93 + 8);
  v96 = (unsigned __int8)*v95;
  *v95 = v96 + 1;
  *(_QWORD *)&v95[8 * v96 + 16] = v92;
  if ( v430 )
    goto LABEL_52;
LABEL_79:
  if ( !v432 )
    goto LABEL_18;
  v101 = sub_168B9E0(&src);
  v102 = v427[0];
  if ( v427[0] )
    v102 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
  v409 = v102;
  v103 = sub_1587BC0(v101, &v409, v97, v98, v99, v100);
  v104 = dest;
  v105 = v412.m128_u64[0];
  v106 = *v103 + 32LL * v431;
  v107 = *(unsigned __int8 **)(v106 + 8);
  if ( !v107 )
  {
    v225 = *(_QWORD *)(v106 + 16);
    v226 = *(_DWORD *)(v225 + 14976);
    if ( v226 )
    {
      v294 = (unsigned int)(v226 - 1);
      *(_DWORD *)(v225 + 14976) = v294;
      v107 = *(unsigned __int8 **)(v225 + 8 * v294 + 14848);
      v295 = *((unsigned int *)v107 + 134);
      *v107 = 0;
      v296 = *((_QWORD **)v107 + 66);
      *((_DWORD *)v107 + 106) = 0;
      v297 = &v296[8 * v295];
      while ( v296 != v297 )
      {
        while ( 1 )
        {
          v297 -= 8;
          v298 = (_QWORD *)v297[3];
          if ( v298 == v297 + 5 )
            break;
          v407 = v296;
          v406 = (char *)v105;
          v405 = v104;
          v397 = (void *)v106;
          v365 = v297;
          operator delete(v298);
          v297 = v365;
          v296 = v407;
          v106 = (__int64)v397;
          v104 = v405;
          v105 = (signed __int64)v406;
          if ( v407 == v365 )
            goto LABEL_319;
        }
      }
LABEL_319:
      *((_DWORD *)v107 + 134) = 0;
    }
    else
    {
      v405 = (void *)v412.m128_u64[0];
      v387 = dest;
      v351 = (void *)v106;
      v107 = (unsigned __int8 *)operator new(0x3A0u);
      *v107 = 0;
      *((_QWORD *)v107 + 12) = v107 + 112;
      *((_QWORD *)v107 + 16) = v107 + 144;
      *((_QWORD *)v107 + 20) = v107 + 176;
      *((_QWORD *)v107 + 24) = v107 + 208;
      *((_QWORD *)v107 + 28) = v107 + 240;
      *((_QWORD *)v107 + 32) = v107 + 272;
      *((_QWORD *)v107 + 36) = v107 + 304;
      *((_QWORD *)v107 + 40) = v107 + 336;
      *((_QWORD *)v107 + 44) = v107 + 368;
      *((_QWORD *)v107 + 48) = v107 + 400;
      *((_QWORD *)v107 + 52) = v107 + 432;
      *((_QWORD *)v107 + 13) = 0;
      v107[112] = 0;
      *((_QWORD *)v107 + 17) = 0;
      v107[144] = 0;
      *((_QWORD *)v107 + 21) = 0;
      v107[176] = 0;
      *((_QWORD *)v107 + 25) = 0;
      v107[208] = 0;
      *((_QWORD *)v107 + 29) = 0;
      v107[240] = 0;
      *((_QWORD *)v107 + 33) = 0;
      v107[272] = 0;
      *((_QWORD *)v107 + 37) = 0;
      v107[304] = 0;
      *((_QWORD *)v107 + 41) = 0;
      v107[336] = 0;
      *((_QWORD *)v107 + 45) = 0;
      v107[368] = 0;
      *((_QWORD *)v107 + 49) = 0;
      v107[400] = 0;
      *((_QWORD *)v107 + 53) = 0x800000000LL;
      v106 = (__int64)v351;
      *((_QWORD *)v107 + 66) = v107 + 544;
      v104 = v387;
      *((_QWORD *)v107 + 67) = 0x600000000LL;
      v105 = (signed __int64)v405;
    }
    *(_QWORD *)(v106 + 8) = v107;
  }
  v107[*v107 + 1] = 0;
  v416 = v418;
  if ( &v104[v105] && !v104 )
    goto LABEL_347;
  if ( (unsigned __int64)v105 > 0xF )
  {
    v405 = v104;
    v382 = (void *)v106;
    if ( v105 < 0 )
      goto LABEL_346;
    v333 = (void *)v105;
    v108 = (_QWORD *)operator new(v105 + 1);
    v105 = (signed __int64)v333;
    v106 = (__int64)v382;
    v416 = v108;
    v104 = v405;
    v418[0] = v333;
LABEL_170:
    v383 = (void *)v106;
    v334 = (void *)v105;
    memcpy(v108, v104, v105);
    v105 = (signed __int64)v334;
    v106 = (__int64)v383;
    v108 = v416;
    goto LABEL_88;
  }
  if ( v105 == 1 )
  {
    LOBYTE(v418[0]) = *v104;
    v108 = v418;
    goto LABEL_88;
  }
  v108 = v418;
  if ( v105 )
    goto LABEL_170;
LABEL_88:
  v417 = v105;
  *((_BYTE *)v108 + v105) = 0;
  v109 = *(_BYTE **)(v106 + 8);
  v110 = (unsigned __int8)*v109;
  *v109 = v110 + 1;
  v111 = 32 * (v110 + 3);
  v112 = (void **)&v109[v111];
  v113 = *(_BYTE **)&v109[v111];
  if ( v416 == v418 )
  {
    v192 = v417;
    if ( v417 )
    {
      if ( v417 == 1 )
      {
        *v113 = v418[0];
        v192 = v417;
        v113 = *v112;
      }
      else
      {
        v337 = v112;
        memcpy(v113, v416, v417);
        v112 = v337;
        v192 = v417;
        v113 = *v337;
      }
    }
    v112[1] = (void *)v192;
    v113[v192] = 0;
    v113 = v416;
  }
  else
  {
    if ( v113 == &v109[v111 + 16] )
    {
      *v112 = v416;
      v112[1] = (void *)v417;
      v112[2] = (void *)v418[0];
    }
    else
    {
      v114 = *(_QWORD *)&v109[32 * (int)v110 + 112];
      *v112 = v416;
      v112[1] = (void *)v417;
      v112[2] = (void *)v418[0];
      if ( v113 )
      {
        v416 = v113;
        v418[0] = v114;
        goto LABEL_92;
      }
    }
    v113 = v418;
    v416 = v418;
  }
LABEL_92:
  v417 = 0;
  *v113 = 0;
  v71 = v416;
  if ( v416 != v418 )
LABEL_63:
    operator delete(v71);
LABEL_64:
  v72 = v412.m128_u64[0] != 0;
  if ( v430 )
  {
    v73 = (void *)v72;
    v74 = v428;
    if ( !v428 )
    {
      v203 = v429;
      v204 = *(_DWORD *)(v429 + 14976);
      if ( v204 )
      {
        v239 = (unsigned int)(v204 - 1);
        *(_DWORD *)(v429 + 14976) = v239;
        v74 = *(unsigned __int8 **)(v203 + 8 * v239 + 14848);
        v240 = *((unsigned int *)v74 + 134);
        *v74 = 0;
        v241 = *((char **)v74 + 66);
        *((_DWORD *)v74 + 106) = 0;
        v242 = &v241[64 * v240];
        while ( v241 != v242 )
        {
          while ( 1 )
          {
            v242 -= 64;
            v243 = *((char **)v242 + 3);
            if ( v243 == v242 + 40 )
              break;
            v405 = v242;
            v355 = v73;
            operator delete(v243);
            v242 = (char *)v405;
            v73 = v355;
            if ( v241 == v405 )
              goto LABEL_260;
          }
        }
LABEL_260:
        *((_DWORD *)v74 + 134) = 0;
      }
      else
      {
        v342 = v73;
        v74 = (unsigned __int8 *)operator new(0x3A0u);
        *v74 = 0;
        *((_QWORD *)v74 + 12) = v74 + 112;
        *((_QWORD *)v74 + 16) = v74 + 144;
        *((_QWORD *)v74 + 20) = v74 + 176;
        *((_QWORD *)v74 + 24) = v74 + 208;
        *((_QWORD *)v74 + 28) = v74 + 240;
        *((_QWORD *)v74 + 32) = v74 + 272;
        *((_QWORD *)v74 + 36) = v74 + 304;
        *((_QWORD *)v74 + 40) = v74 + 336;
        *((_QWORD *)v74 + 44) = v74 + 368;
        *((_QWORD *)v74 + 48) = v74 + 400;
        *((_QWORD *)v74 + 52) = v74 + 432;
        *((_QWORD *)v74 + 13) = 0;
        v74[112] = 0;
        *((_QWORD *)v74 + 17) = 0;
        v74[144] = 0;
        *((_QWORD *)v74 + 21) = 0;
        v74[176] = 0;
        *((_QWORD *)v74 + 25) = 0;
        v74[208] = 0;
        *((_QWORD *)v74 + 29) = 0;
        v74[240] = 0;
        *((_QWORD *)v74 + 33) = 0;
        v74[272] = 0;
        *((_QWORD *)v74 + 37) = 0;
        v74[304] = 0;
        *((_QWORD *)v74 + 41) = 0;
        v74[336] = 0;
        *((_QWORD *)v74 + 45) = 0;
        v74[368] = 0;
        *((_QWORD *)v74 + 49) = 0;
        v74[400] = 0;
        *((_QWORD *)v74 + 53) = 0x800000000LL;
        v73 = v342;
        *((_QWORD *)v74 + 66) = v74 + 544;
        *((_QWORD *)v74 + 67) = 0x600000000LL;
      }
      v428 = v74;
    }
    v74[*v74 + 1] = 2;
    v75 = v428;
    v76 = *v428;
    *v428 = v76 + 1;
    *(_QWORD *)&v75[8 * v76 + 16] = v73;
  }
  else
  {
    if ( !v432 )
      goto LABEL_18;
    v169 = sub_168B9E0(&src);
    v173 = (void *)v427[0];
    if ( v427[0] )
    {
      v327 = (void *)v169;
      v173 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
      v169 = (__int64)v327;
    }
    v422 = v173;
    v174 = sub_1587BC0(v169, (__int64 *)&v422, v169, v170, v171, v172);
    v175 = (void *)v72;
    v176 = *v174 + 32LL * v431;
    v177 = *(unsigned __int8 **)(v176 + 8);
    if ( !v177 )
    {
      v217 = *(_QWORD *)(v176 + 16);
      v218 = *(_DWORD *)(v217 + 14976);
      if ( v218 )
      {
        v314 = (unsigned int)(v218 - 1);
        *(_DWORD *)(v217 + 14976) = v314;
        v177 = *(unsigned __int8 **)(v217 + 8 * v314 + 14848);
        v315 = *((unsigned int *)v177 + 134);
        *v177 = 0;
        v316 = *((char **)v177 + 66);
        *((_DWORD *)v177 + 106) = 0;
        v317 = &v316[64 * v315];
        while ( v316 != v317 )
        {
          while ( 1 )
          {
            v317 -= 64;
            v318 = *((char **)v317 + 3);
            if ( v318 == v317 + 40 )
              break;
            v406 = v316;
            v405 = v175;
            v401 = (void *)v176;
            v369 = v317;
            operator delete(v318);
            v317 = v369;
            v316 = v406;
            v176 = (__int64)v401;
            v175 = v405;
            if ( v406 == v369 )
              goto LABEL_339;
          }
        }
LABEL_339:
        *((_DWORD *)v177 + 134) = 0;
      }
      else
      {
        v386 = v175;
        v347 = (void *)v176;
        v177 = (unsigned __int8 *)operator new(0x3A0u);
        *v177 = 0;
        *((_QWORD *)v177 + 12) = v177 + 112;
        *((_QWORD *)v177 + 16) = v177 + 144;
        *((_QWORD *)v177 + 20) = v177 + 176;
        *((_QWORD *)v177 + 24) = v177 + 208;
        *((_QWORD *)v177 + 28) = v177 + 240;
        *((_QWORD *)v177 + 32) = v177 + 272;
        *((_QWORD *)v177 + 36) = v177 + 304;
        *((_QWORD *)v177 + 40) = v177 + 336;
        *((_QWORD *)v177 + 44) = v177 + 368;
        *((_QWORD *)v177 + 48) = v177 + 400;
        *((_QWORD *)v177 + 52) = v177 + 432;
        *((_QWORD *)v177 + 13) = 0;
        v177[112] = 0;
        *((_QWORD *)v177 + 17) = 0;
        v177[144] = 0;
        *((_QWORD *)v177 + 21) = 0;
        v177[176] = 0;
        *((_QWORD *)v177 + 25) = 0;
        v177[208] = 0;
        *((_QWORD *)v177 + 29) = 0;
        v177[240] = 0;
        *((_QWORD *)v177 + 33) = 0;
        v177[272] = 0;
        *((_QWORD *)v177 + 37) = 0;
        v177[304] = 0;
        *((_QWORD *)v177 + 41) = 0;
        v177[336] = 0;
        *((_QWORD *)v177 + 45) = 0;
        v177[368] = 0;
        *((_QWORD *)v177 + 49) = 0;
        v177[400] = 0;
        *((_QWORD *)v177 + 53) = 0x800000000LL;
        v176 = (__int64)v347;
        *((_QWORD *)v177 + 66) = v177 + 544;
        v175 = v386;
        *((_QWORD *)v177 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v176 + 8) = v177;
    }
    v177[*v177 + 1] = 2;
    v178 = *(_BYTE **)(v176 + 8);
    v179 = (unsigned __int8)*v178;
    *v178 = v179 + 1;
    *(_QWORD *)&v178[8 * v179 + 16] = v175;
  }
  v77 = (*a3 & 0x1FF) == 54;
  if ( v430 )
  {
    v78 = (void *)v77;
    v79 = v428;
    if ( !v428 )
    {
      v195 = v429;
      v196 = *(_DWORD *)(v429 + 14976);
      if ( v196 )
      {
        v234 = (unsigned int)(v196 - 1);
        *(_DWORD *)(v429 + 14976) = v234;
        v79 = *(unsigned __int8 **)(v195 + 8 * v234 + 14848);
        v235 = *((unsigned int *)v79 + 134);
        *v79 = 0;
        v236 = *((char **)v79 + 66);
        *((_DWORD *)v79 + 106) = 0;
        v237 = &v236[64 * v235];
        while ( v236 != v237 )
        {
          while ( 1 )
          {
            v237 -= 64;
            v238 = *((char **)v237 + 3);
            if ( v238 == v237 + 40 )
              break;
            v405 = v236;
            v388 = v237;
            v354 = v78;
            operator delete(v238);
            v237 = v388;
            v236 = (char *)v405;
            v78 = v354;
            if ( v405 == v388 )
              goto LABEL_255;
          }
        }
LABEL_255:
        *((_DWORD *)v79 + 134) = 0;
      }
      else
      {
        v338 = v78;
        v79 = (unsigned __int8 *)operator new(0x3A0u);
        *v79 = 0;
        *((_QWORD *)v79 + 12) = v79 + 112;
        *((_QWORD *)v79 + 16) = v79 + 144;
        *((_QWORD *)v79 + 20) = v79 + 176;
        *((_QWORD *)v79 + 24) = v79 + 208;
        *((_QWORD *)v79 + 28) = v79 + 240;
        *((_QWORD *)v79 + 32) = v79 + 272;
        *((_QWORD *)v79 + 36) = v79 + 304;
        *((_QWORD *)v79 + 40) = v79 + 336;
        *((_QWORD *)v79 + 44) = v79 + 368;
        *((_QWORD *)v79 + 48) = v79 + 400;
        *((_QWORD *)v79 + 52) = v79 + 432;
        *((_QWORD *)v79 + 13) = 0;
        v79[112] = 0;
        *((_QWORD *)v79 + 17) = 0;
        v79[144] = 0;
        *((_QWORD *)v79 + 21) = 0;
        v79[176] = 0;
        *((_QWORD *)v79 + 25) = 0;
        v79[208] = 0;
        *((_QWORD *)v79 + 29) = 0;
        v79[240] = 0;
        *((_QWORD *)v79 + 33) = 0;
        v79[272] = 0;
        *((_QWORD *)v79 + 37) = 0;
        v79[304] = 0;
        *((_QWORD *)v79 + 41) = 0;
        v79[336] = 0;
        *((_QWORD *)v79 + 45) = 0;
        v79[368] = 0;
        *((_QWORD *)v79 + 49) = 0;
        v79[400] = 0;
        *((_QWORD *)v79 + 53) = 0x800000000LL;
        v78 = v338;
        *((_QWORD *)v79 + 66) = v79 + 544;
        *((_QWORD *)v79 + 67) = 0x600000000LL;
      }
      v428 = v79;
    }
    v79[*v79 + 1] = 2;
    v80 = v428;
    v81 = *v428;
    *v428 = v81 + 1;
    *(_QWORD *)&v80[8 * v81 + 16] = v78;
  }
  else
  {
    if ( !v432 )
      goto LABEL_18;
    v158 = sub_168B9E0(&src);
    v162 = (void *)v427[0];
    if ( v427[0] )
    {
      v326 = (void *)v158;
      v162 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
      v158 = (__int64)v326;
    }
    v422 = v162;
    v163 = sub_1587BC0(v158, (__int64 *)&v422, v158, v159, v160, v161);
    v164 = (void *)v77;
    v165 = *v163 + 32LL * v431;
    v166 = *(unsigned __int8 **)(v165 + 8);
    if ( !v166 )
    {
      v215 = *(_QWORD *)(v165 + 16);
      v216 = *(_DWORD *)(v215 + 14976);
      if ( v216 )
      {
        v304 = (unsigned int)(v216 - 1);
        *(_DWORD *)(v215 + 14976) = v304;
        v166 = *(unsigned __int8 **)(v215 + 8 * v304 + 14848);
        v305 = *((unsigned int *)v166 + 134);
        *v166 = 0;
        v306 = *((char **)v166 + 66);
        *((_DWORD *)v166 + 106) = 0;
        v307 = &v306[64 * v305];
        while ( v306 != v307 )
        {
          while ( 1 )
          {
            v307 -= 64;
            v308 = *((char **)v307 + 3);
            if ( v308 == v307 + 40 )
              break;
            v406 = v307;
            v405 = v306;
            v399 = v164;
            v367 = (void *)v165;
            operator delete(v308);
            v306 = (char *)v405;
            v307 = v406;
            v165 = (__int64)v367;
            v164 = v399;
            if ( v405 == v406 )
              goto LABEL_329;
          }
        }
LABEL_329:
        *((_DWORD *)v166 + 134) = 0;
      }
      else
      {
        v385 = v164;
        v346 = (void *)v165;
        v166 = (unsigned __int8 *)operator new(0x3A0u);
        *v166 = 0;
        *((_QWORD *)v166 + 12) = v166 + 112;
        *((_QWORD *)v166 + 16) = v166 + 144;
        *((_QWORD *)v166 + 20) = v166 + 176;
        *((_QWORD *)v166 + 24) = v166 + 208;
        *((_QWORD *)v166 + 28) = v166 + 240;
        *((_QWORD *)v166 + 32) = v166 + 272;
        *((_QWORD *)v166 + 36) = v166 + 304;
        *((_QWORD *)v166 + 40) = v166 + 336;
        *((_QWORD *)v166 + 44) = v166 + 368;
        *((_QWORD *)v166 + 48) = v166 + 400;
        *((_QWORD *)v166 + 52) = v166 + 432;
        *((_QWORD *)v166 + 13) = 0;
        v166[112] = 0;
        *((_QWORD *)v166 + 17) = 0;
        v166[144] = 0;
        *((_QWORD *)v166 + 21) = 0;
        v166[176] = 0;
        *((_QWORD *)v166 + 25) = 0;
        v166[208] = 0;
        *((_QWORD *)v166 + 29) = 0;
        v166[240] = 0;
        *((_QWORD *)v166 + 33) = 0;
        v166[272] = 0;
        *((_QWORD *)v166 + 37) = 0;
        v166[304] = 0;
        *((_QWORD *)v166 + 41) = 0;
        v166[336] = 0;
        *((_QWORD *)v166 + 45) = 0;
        v166[368] = 0;
        *((_QWORD *)v166 + 49) = 0;
        v166[400] = 0;
        *((_QWORD *)v166 + 53) = 0x800000000LL;
        v165 = (__int64)v346;
        *((_QWORD *)v166 + 66) = v166 + 544;
        v164 = v385;
        *((_QWORD *)v166 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v165 + 8) = v166;
    }
    v166[*v166 + 1] = 2;
    v167 = *(_BYTE **)(v165 + 8);
    v168 = (unsigned __int8)*v167;
    *v167 = v168 + 1;
    *(_QWORD *)&v167[8 * v168 + 16] = v164;
  }
  if ( v430 )
  {
    v82 = v428;
    if ( !v428 )
    {
      v193 = v429;
      v194 = *(_DWORD *)(v429 + 14976);
      if ( v194 )
      {
        v254 = (unsigned int)(v194 - 1);
        *(_DWORD *)(v429 + 14976) = v254;
        v82 = *(unsigned __int8 **)(v193 + 8 * v254 + 14848);
        v255 = *((unsigned int *)v82 + 134);
        *v82 = 0;
        v256 = *((char **)v82 + 66);
        *((_DWORD *)v82 + 106) = 0;
        v257 = &v256[64 * v255];
        while ( v256 != v257 )
        {
          while ( 1 )
          {
            v257 -= 64;
            v258 = *((char **)v257 + 3);
            if ( v258 == v257 + 40 )
              break;
            v390 = v256;
            v357 = v257;
            operator delete(v258);
            v257 = v357;
            v256 = v390;
            if ( v390 == v357 )
              goto LABEL_275;
          }
        }
LABEL_275:
        *((_DWORD *)v82 + 134) = 0;
      }
      else
      {
        v82 = (unsigned __int8 *)operator new(0x3A0u);
        *v82 = 0;
        *((_QWORD *)v82 + 12) = v82 + 112;
        *((_QWORD *)v82 + 16) = v82 + 144;
        *((_QWORD *)v82 + 20) = v82 + 176;
        *((_QWORD *)v82 + 24) = v82 + 208;
        *((_QWORD *)v82 + 28) = v82 + 240;
        *((_QWORD *)v82 + 32) = v82 + 272;
        *((_QWORD *)v82 + 36) = v82 + 304;
        *((_QWORD *)v82 + 40) = v82 + 336;
        *((_QWORD *)v82 + 44) = v82 + 368;
        *((_QWORD *)v82 + 48) = v82 + 400;
        *((_QWORD *)v82 + 52) = v82 + 432;
        *((_QWORD *)v82 + 13) = 0;
        v82[112] = 0;
        *((_QWORD *)v82 + 17) = 0;
        v82[144] = 0;
        *((_QWORD *)v82 + 21) = 0;
        v82[176] = 0;
        *((_QWORD *)v82 + 25) = 0;
        v82[208] = 0;
        *((_QWORD *)v82 + 29) = 0;
        v82[240] = 0;
        *((_QWORD *)v82 + 33) = 0;
        v82[272] = 0;
        *((_QWORD *)v82 + 37) = 0;
        v82[304] = 0;
        *((_QWORD *)v82 + 41) = 0;
        v82[336] = 0;
        *((_QWORD *)v82 + 45) = 0;
        v82[368] = 0;
        *((_QWORD *)v82 + 49) = 0;
        v82[400] = 0;
        *((_QWORD *)v82 + 53) = 0x800000000LL;
        *((_QWORD *)v82 + 66) = v82 + 544;
        *((_QWORD *)v82 + 67) = 0x600000000LL;
      }
      v428 = v82;
    }
    v82[*v82 + 1] = 8;
    v83 = v428;
LABEL_73:
    v84 = (unsigned __int8)*v83;
    *v83 = v84 + 1;
    *(_QWORD *)&v83[8 * v84 + 16] = a2;
    goto LABEL_18;
  }
  if ( v432 )
  {
    v153 = sub_168B9E0(&src);
    v154 = (void *)v427[0];
    if ( v427[0] )
      v154 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
    v422 = v154;
    v155 = sub_1587BC0(v153, (__int64 *)&v422, v149, v150, v151, v152);
    v156 = *v155 + 32LL * v431;
    v157 = *(unsigned __int8 **)(v156 + 8);
    if ( !v157 )
    {
      v221 = *(_QWORD *)(v156 + 16);
      v222 = *(_DWORD *)(v221 + 14976);
      if ( v222 )
      {
        v284 = (unsigned int)(v222 - 1);
        *(_DWORD *)(v221 + 14976) = v284;
        v157 = *(unsigned __int8 **)(v221 + 8 * v284 + 14848);
        v285 = *((unsigned int *)v157 + 134);
        *v157 = 0;
        v286 = *((char **)v157 + 66);
        *((_DWORD *)v157 + 106) = 0;
        v287 = &v286[64 * v285];
        while ( v286 != v287 )
        {
          while ( 1 )
          {
            v287 -= 64;
            v288 = *((char **)v287 + 3);
            if ( v288 == v287 + 40 )
              break;
            v405 = v286;
            v395 = (void *)v156;
            v363 = v287;
            operator delete(v288);
            v287 = v363;
            v286 = (char *)v405;
            v156 = (__int64)v395;
            if ( v405 == v363 )
              goto LABEL_309;
          }
        }
LABEL_309:
        *((_DWORD *)v157 + 134) = 0;
      }
      else
      {
        v349 = (void *)v156;
        v157 = (unsigned __int8 *)operator new(0x3A0u);
        *v157 = 0;
        *((_QWORD *)v157 + 12) = v157 + 112;
        *((_QWORD *)v157 + 16) = v157 + 144;
        *((_QWORD *)v157 + 20) = v157 + 176;
        *((_QWORD *)v157 + 24) = v157 + 208;
        *((_QWORD *)v157 + 28) = v157 + 240;
        *((_QWORD *)v157 + 32) = v157 + 272;
        *((_QWORD *)v157 + 36) = v157 + 304;
        *((_QWORD *)v157 + 40) = v157 + 336;
        *((_QWORD *)v157 + 44) = v157 + 368;
        *((_QWORD *)v157 + 48) = v157 + 400;
        *((_QWORD *)v157 + 52) = v157 + 432;
        *((_QWORD *)v157 + 13) = 0;
        v157[112] = 0;
        *((_QWORD *)v157 + 17) = 0;
        v157[144] = 0;
        *((_QWORD *)v157 + 21) = 0;
        v157[176] = 0;
        *((_QWORD *)v157 + 25) = 0;
        v157[208] = 0;
        *((_QWORD *)v157 + 29) = 0;
        v157[240] = 0;
        *((_QWORD *)v157 + 33) = 0;
        v157[272] = 0;
        *((_QWORD *)v157 + 37) = 0;
        v157[304] = 0;
        *((_QWORD *)v157 + 41) = 0;
        v157[336] = 0;
        *((_QWORD *)v157 + 45) = 0;
        v157[368] = 0;
        *((_QWORD *)v157 + 49) = 0;
        v157[400] = 0;
        *((_QWORD *)v157 + 53) = 0x800000000LL;
        v156 = (__int64)v349;
        *((_QWORD *)v157 + 66) = v157 + 544;
        *((_QWORD *)v157 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v156 + 8) = v157;
    }
    v157[*v157 + 1] = 8;
    v83 = *(_BYTE **)(v156 + 8);
    goto LABEL_73;
  }
LABEL_18:
  v25 = 1;
  v26 = sub_F5D880(v16, 1);
  v27 = v26;
  v29 = v28;
  if ( v430 )
  {
    v34 = v428;
    if ( !v428 )
    {
      v197 = v429;
      v198 = *(_DWORD *)(v429 + 14976);
      if ( v198 )
      {
        v264 = (unsigned int)(v198 - 1);
        *(_DWORD *)(v429 + 14976) = v264;
        v34 = *(unsigned __int8 **)(v197 + 8 * v264 + 14848);
        v265 = *((unsigned int *)v34 + 134);
        *v34 = 0;
        v266 = *((_QWORD **)v34 + 66);
        *((_DWORD *)v34 + 106) = 0;
        v267 = &v266[8 * v265];
        while ( v266 != v267 )
        {
          while ( 1 )
          {
            v267 -= 8;
            v268 = (_QWORD *)v267[3];
            if ( v268 == v267 + 5 )
              break;
            v405 = v27;
            v391 = v267;
            v377 = v266;
            v359 = v34;
            operator delete(v268);
            v266 = v377;
            v267 = v391;
            v34 = v359;
            v27 = v405;
            if ( v377 == v391 )
              goto LABEL_285;
          }
        }
LABEL_285:
        *((_DWORD *)v34 + 134) = 0;
      }
      else
      {
        v339 = v27;
        v34 = (unsigned __int8 *)operator new(0x3A0u);
        *v34 = 0;
        *((_QWORD *)v34 + 12) = v34 + 112;
        *((_QWORD *)v34 + 16) = v34 + 144;
        *((_QWORD *)v34 + 20) = v34 + 176;
        *((_QWORD *)v34 + 24) = v34 + 208;
        *((_QWORD *)v34 + 28) = v34 + 240;
        *((_QWORD *)v34 + 32) = v34 + 272;
        *((_QWORD *)v34 + 36) = v34 + 304;
        *((_QWORD *)v34 + 40) = v34 + 336;
        *((_QWORD *)v34 + 44) = v34 + 368;
        *((_QWORD *)v34 + 48) = v34 + 400;
        *((_QWORD *)v34 + 52) = v34 + 432;
        *((_QWORD *)v34 + 13) = 0;
        v34[112] = 0;
        *((_QWORD *)v34 + 17) = 0;
        v34[144] = 0;
        *((_QWORD *)v34 + 21) = 0;
        v34[176] = 0;
        *((_QWORD *)v34 + 25) = 0;
        v34[208] = 0;
        *((_QWORD *)v34 + 29) = 0;
        v34[240] = 0;
        *((_QWORD *)v34 + 33) = 0;
        v34[272] = 0;
        *((_QWORD *)v34 + 37) = 0;
        v34[304] = 0;
        *((_QWORD *)v34 + 41) = 0;
        v34[336] = 0;
        *((_QWORD *)v34 + 45) = 0;
        v34[368] = 0;
        *((_QWORD *)v34 + 49) = 0;
        v34[400] = 0;
        *((_QWORD *)v34 + 53) = 0x800000000LL;
        v27 = v339;
        *((_QWORD *)v34 + 66) = v34 + 544;
        *((_QWORD *)v34 + 67) = 0x600000000LL;
      }
      v428 = v34;
    }
    v34[*v34 + 1] = 0;
    v419 = v421;
    if ( &v27[v29] && !v27 )
      goto LABEL_347;
    if ( (unsigned __int64)v29 > 0xF )
    {
      v331 = v27;
      if ( v29 < 0 )
        goto LABEL_346;
      v35 = (_QWORD *)operator new(v29 + 1);
      v27 = v331;
      v421[0] = v29;
      v419 = v35;
    }
    else
    {
      if ( v29 == 1 )
      {
        LOBYTE(v421[0]) = *v27;
        v35 = v421;
        goto LABEL_33;
      }
      v35 = v421;
      if ( !v29 )
      {
LABEL_33:
        v420 = v29;
        *((_BYTE *)v35 + v29) = 0;
        v36 = v428;
        v37 = *v428;
        *v428 = v37 + 1;
        v25 = (__int64)v419;
        v38 = 32 * (v37 + 3);
        v39 = (void **)&v36[v38];
        v40 = *(unsigned __int8 **)&v36[v38];
        if ( v419 == v421 )
        {
          v189 = v420;
          if ( v420 )
          {
            if ( v420 == 1 )
              *v40 = v421[0];
            else
              memcpy(v40, v419, v420);
            v189 = v420;
            v40 = (unsigned __int8 *)*v39;
          }
          v39[1] = (void *)v189;
          v40[v189] = 0;
          v40 = (unsigned __int8 *)v419;
        }
        else
        {
          if ( v40 == &v36[v38 + 16] )
          {
            *v39 = v419;
            v39[1] = (void *)v420;
            v39[2] = (void *)v421[0];
          }
          else
          {
            v41 = *(_QWORD *)&v36[32 * (int)v37 + 112];
            *v39 = v419;
            v39[1] = (void *)v420;
            v39[2] = (void *)v421[0];
            if ( v40 )
            {
              v419 = v40;
              v421[0] = v41;
              goto LABEL_37;
            }
          }
          v40 = (unsigned __int8 *)v421;
          v419 = v421;
        }
LABEL_37:
        v420 = 0;
        *v40 = 0;
        v42 = v419;
        if ( v419 == v421 )
          goto LABEL_39;
        goto LABEL_38;
      }
    }
    memcpy(v35, v27, v29);
    v35 = v419;
    goto LABEL_33;
  }
  if ( !v432 )
  {
LABEL_20:
    v30 = *(_BYTE *)(v16 + 19) & 1;
    goto LABEL_21;
  }
  v321 = v26;
  v124 = sub_168B9E0(&src);
  v127 = (__int64)v321;
  v128 = v124;
  v129 = v427[0];
  if ( v427[0] )
  {
    v371 = v321;
    v322 = (void *)v128;
    v129 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
    v127 = (__int64)v371;
    v128 = (__int64)v322;
  }
  v323 = (char *)v127;
  v410 = v129;
  v130 = sub_1587BC0(v128, &v410, v128, v125, v127, v126);
  v131 = v323;
  v132 = *v130 + 32LL * v431;
  v133 = *(unsigned __int8 **)(v132 + 8);
  if ( !v133 )
  {
    v211 = *(_QWORD *)(v132 + 16);
    v212 = *(_DWORD *)(v211 + 14976);
    if ( v212 )
    {
      v299 = (unsigned int)(v212 - 1);
      *(_DWORD *)(v211 + 14976) = v299;
      v133 = *(unsigned __int8 **)(v211 + 8 * v299 + 14848);
      v300 = *((unsigned int *)v133 + 134);
      *v133 = 0;
      v301 = *((char **)v133 + 66);
      *((_DWORD *)v133 + 106) = 0;
      v302 = &v301[64 * v300];
      while ( v301 != v302 )
      {
        while ( 1 )
        {
          v302 -= 64;
          v303 = *((char **)v302 + 3);
          if ( v303 == v302 + 40 )
            break;
          v406 = v131;
          v405 = v301;
          v398 = (void *)v132;
          v380 = v133;
          v366 = v302;
          operator delete(v303);
          v302 = v366;
          v301 = (char *)v405;
          v133 = v380;
          v132 = (__int64)v398;
          v131 = v406;
          if ( v405 == v366 )
            goto LABEL_324;
        }
      }
LABEL_324:
      *((_DWORD *)v133 + 134) = 0;
    }
    else
    {
      v373 = v323;
      v344 = (void *)v132;
      v133 = (unsigned __int8 *)operator new(0x3A0u);
      *v133 = 0;
      *((_QWORD *)v133 + 12) = v133 + 112;
      *((_QWORD *)v133 + 16) = v133 + 144;
      *((_QWORD *)v133 + 20) = v133 + 176;
      *((_QWORD *)v133 + 24) = v133 + 208;
      *((_QWORD *)v133 + 28) = v133 + 240;
      *((_QWORD *)v133 + 32) = v133 + 272;
      *((_QWORD *)v133 + 36) = v133 + 304;
      *((_QWORD *)v133 + 40) = v133 + 336;
      *((_QWORD *)v133 + 44) = v133 + 368;
      *((_QWORD *)v133 + 48) = v133 + 400;
      *((_QWORD *)v133 + 52) = v133 + 432;
      *((_QWORD *)v133 + 13) = 0;
      v133[112] = 0;
      *((_QWORD *)v133 + 17) = 0;
      v133[144] = 0;
      *((_QWORD *)v133 + 21) = 0;
      v133[176] = 0;
      *((_QWORD *)v133 + 25) = 0;
      v133[208] = 0;
      *((_QWORD *)v133 + 29) = 0;
      v133[240] = 0;
      *((_QWORD *)v133 + 33) = 0;
      v133[272] = 0;
      *((_QWORD *)v133 + 37) = 0;
      v133[304] = 0;
      *((_QWORD *)v133 + 41) = 0;
      v133[336] = 0;
      *((_QWORD *)v133 + 45) = 0;
      v133[368] = 0;
      *((_QWORD *)v133 + 49) = 0;
      v133[400] = 0;
      *((_QWORD *)v133 + 53) = 0x800000000LL;
      v132 = (__int64)v344;
      *((_QWORD *)v133 + 66) = v133 + 544;
      v131 = v373;
      *((_QWORD *)v133 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v132 + 8) = v133;
  }
  v133[*v133 + 1] = 0;
  v422 = v424;
  if ( &v131[v29] && !v131 )
LABEL_347:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v29 > 0xF )
  {
    v372 = v131;
    v335 = (void *)v132;
    if ( v29 >= 0 )
    {
      v134 = (_QWORD *)operator new(v29 + 1);
      v132 = (__int64)v335;
      v131 = v372;
      v424[0] = v29;
      v422 = v134;
LABEL_173:
      v336 = (void *)v132;
      memcpy(v134, v131, v29);
      v132 = (__int64)v336;
      v134 = v422;
      goto LABEL_107;
    }
LABEL_346:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v29 == 1 )
  {
    LOBYTE(v424[0]) = *v131;
    v134 = v424;
    goto LABEL_107;
  }
  v134 = v424;
  if ( v29 )
    goto LABEL_173;
LABEL_107:
  v423 = v29;
  *((_BYTE *)v134 + v29) = 0;
  v135 = *(_BYTE **)(v132 + 8);
  v136 = (unsigned __int8)*v135;
  *v135 = v136 + 1;
  v25 = (__int64)v422;
  v137 = 32 * (v136 + 3);
  v138 = (void **)&v135[v137];
  v139 = *(_BYTE **)&v135[v137];
  if ( v422 == v424 )
  {
    v191 = v423;
    if ( v423 )
    {
      if ( v423 == 1 )
        *v139 = v424[0];
      else
        memcpy(v139, v422, v423);
      v191 = v423;
      v139 = *v138;
    }
    v138[1] = (void *)v191;
    v139[v191] = 0;
    v139 = v422;
  }
  else
  {
    if ( v139 == &v135[v137 + 16] )
    {
      *v138 = v422;
      v138[1] = (void *)v423;
      v138[2] = (void *)v424[0];
    }
    else
    {
      v140 = *(_QWORD *)&v135[32 * (int)v136 + 112];
      *v138 = v422;
      v138[1] = (void *)v423;
      v138[2] = (void *)v424[0];
      if ( v139 )
      {
        v422 = v139;
        v424[0] = v140;
        goto LABEL_111;
      }
    }
    v139 = v424;
    v422 = v424;
  }
LABEL_111:
  v423 = 0;
  *v139 = 0;
  v42 = v422;
  if ( v422 != v424 )
LABEL_38:
    operator delete(v42);
LABEL_39:
  if ( v430 )
  {
    v43 = v428;
    if ( !v428 )
    {
      v209 = v429;
      v210 = *(_DWORD *)(v429 + 14976);
      if ( v210 )
      {
        v229 = (unsigned int)(v210 - 1);
        *(_DWORD *)(v429 + 14976) = v229;
        v43 = *(unsigned __int8 **)(v209 + 8 * v229 + 14848);
        v230 = *((unsigned int *)v43 + 134);
        *v43 = 0;
        v231 = *((_QWORD **)v43 + 66);
        *((_DWORD *)v43 + 106) = 0;
        v232 = &v231[8 * v230];
        while ( v231 != v232 )
        {
          while ( 1 )
          {
            v232 -= 8;
            v233 = (_QWORD *)v232[3];
            if ( v233 == v232 + 5 )
              break;
            v375 = v231;
            v353 = v232;
            operator delete(v233);
            v232 = v353;
            v231 = v375;
            if ( v375 == v353 )
              goto LABEL_250;
          }
        }
LABEL_250:
        *((_DWORD *)v43 + 134) = 0;
      }
      else
      {
        v43 = (unsigned __int8 *)operator new(0x3A0u);
        *v43 = 0;
        *((_QWORD *)v43 + 12) = v43 + 112;
        *((_QWORD *)v43 + 16) = v43 + 144;
        *((_QWORD *)v43 + 20) = v43 + 176;
        *((_QWORD *)v43 + 24) = v43 + 208;
        *((_QWORD *)v43 + 28) = v43 + 240;
        *((_QWORD *)v43 + 32) = v43 + 272;
        *((_QWORD *)v43 + 36) = v43 + 304;
        *((_QWORD *)v43 + 40) = v43 + 336;
        *((_QWORD *)v43 + 44) = v43 + 368;
        *((_QWORD *)v43 + 48) = v43 + 400;
        *((_QWORD *)v43 + 52) = v43 + 432;
        *((_QWORD *)v43 + 13) = 0;
        v43[112] = 0;
        *((_QWORD *)v43 + 17) = 0;
        v43[144] = 0;
        *((_QWORD *)v43 + 21) = 0;
        v43[176] = 0;
        *((_QWORD *)v43 + 25) = 0;
        v43[208] = 0;
        *((_QWORD *)v43 + 29) = 0;
        v43[240] = 0;
        *((_QWORD *)v43 + 33) = 0;
        v43[272] = 0;
        *((_QWORD *)v43 + 37) = 0;
        v43[304] = 0;
        *((_QWORD *)v43 + 41) = 0;
        v43[336] = 0;
        *((_QWORD *)v43 + 45) = 0;
        v43[368] = 0;
        *((_QWORD *)v43 + 49) = 0;
        v43[400] = 0;
        *((_QWORD *)v43 + 53) = 0x800000000LL;
        *((_QWORD *)v43 + 66) = v43 + 544;
        *((_QWORD *)v43 + 67) = 0x600000000LL;
      }
      v428 = v43;
    }
    v43[*v43 + 1] = 8;
    v44 = v428;
  }
  else
  {
    if ( !v432 )
      goto LABEL_20;
    v119 = sub_168B9E0(&src);
    v120 = (void *)v427[0];
    if ( v427[0] )
      v120 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
    v422 = v120;
    v121 = sub_1587BC0(v119, (__int64 *)&v422, v115, v116, v117, v118);
    v122 = *v121 + 32LL * v431;
    v123 = *(unsigned __int8 **)(v122 + 8);
    if ( !v123 )
    {
      v227 = *(_QWORD *)(v122 + 16);
      v228 = *(_DWORD *)(v227 + 14976);
      if ( v228 )
      {
        v309 = (unsigned int)(v228 - 1);
        *(_DWORD *)(v227 + 14976) = v309;
        v123 = *(unsigned __int8 **)(v227 + 8 * v309 + 14848);
        v310 = *((unsigned int *)v123 + 134);
        *v123 = 0;
        v311 = *((char **)v123 + 66);
        *((_DWORD *)v123 + 106) = 0;
        v312 = &v311[64 * v310];
        while ( v311 != v312 )
        {
          while ( 1 )
          {
            v312 -= 64;
            v313 = *((char **)v312 + 3);
            if ( v313 == v312 + 40 )
              break;
            v400 = v312;
            v368 = (void *)v122;
            operator delete(v313);
            v312 = v400;
            v122 = (__int64)v368;
            if ( v311 == v400 )
              goto LABEL_334;
          }
        }
LABEL_334:
        *((_DWORD *)v123 + 134) = 0;
      }
      else
      {
        v352 = (void *)v122;
        v123 = (unsigned __int8 *)operator new(0x3A0u);
        *v123 = 0;
        *((_QWORD *)v123 + 12) = v123 + 112;
        *((_QWORD *)v123 + 16) = v123 + 144;
        *((_QWORD *)v123 + 20) = v123 + 176;
        *((_QWORD *)v123 + 24) = v123 + 208;
        *((_QWORD *)v123 + 28) = v123 + 240;
        *((_QWORD *)v123 + 32) = v123 + 272;
        *((_QWORD *)v123 + 36) = v123 + 304;
        *((_QWORD *)v123 + 40) = v123 + 336;
        *((_QWORD *)v123 + 44) = v123 + 368;
        *((_QWORD *)v123 + 48) = v123 + 400;
        *((_QWORD *)v123 + 52) = v123 + 432;
        *((_QWORD *)v123 + 13) = 0;
        v123[112] = 0;
        *((_QWORD *)v123 + 17) = 0;
        v123[144] = 0;
        *((_QWORD *)v123 + 21) = 0;
        v123[176] = 0;
        *((_QWORD *)v123 + 25) = 0;
        v123[208] = 0;
        *((_QWORD *)v123 + 29) = 0;
        v123[240] = 0;
        *((_QWORD *)v123 + 33) = 0;
        v123[272] = 0;
        *((_QWORD *)v123 + 37) = 0;
        v123[304] = 0;
        *((_QWORD *)v123 + 41) = 0;
        v123[336] = 0;
        *((_QWORD *)v123 + 45) = 0;
        v123[368] = 0;
        *((_QWORD *)v123 + 49) = 0;
        v123[400] = 0;
        *((_QWORD *)v123 + 53) = 0x800000000LL;
        v122 = (__int64)v352;
        *((_QWORD *)v123 + 66) = v123 + 544;
        *((_QWORD *)v123 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v122 + 8) = v123;
    }
    v123[*v123 + 1] = 8;
    v44 = *(_BYTE **)(v122 + 8);
  }
  v45 = (unsigned __int8)*v44;
  *v44 = v45 + 1;
  v25 = v402;
  *(_QWORD *)&v44[8 * v45 + 16] = v402;
  v30 = *(_BYTE *)(v16 + 19) & 1;
  if ( v430 )
  {
    v46 = v30;
    v47 = v428;
    if ( !v428 )
    {
      v201 = v429;
      v202 = *(_DWORD *)(v429 + 14976);
      if ( v202 )
      {
        v259 = (unsigned int)(v202 - 1);
        *(_DWORD *)(v429 + 14976) = v259;
        v47 = *(unsigned __int8 **)(v201 + 8 * v259 + 14848);
        v260 = *((unsigned int *)v47 + 134);
        *v47 = 0;
        v261 = *((_QWORD *)v47 + 66);
        *((_DWORD *)v47 + 106) = 0;
        v262 = v261 + (v260 << 6);
        while ( v261 != v262 )
        {
          while ( 1 )
          {
            v262 -= 64;
            v263 = *(void **)(v262 + 24);
            if ( v263 == (void *)(v262 + 40) )
              break;
            v376 = v262;
            v358 = (void *)v46;
            operator delete(v263);
            v262 = v376;
            v46 = (unsigned __int64)v358;
            if ( v261 == v376 )
              goto LABEL_280;
          }
        }
LABEL_280:
        *((_DWORD *)v47 + 134) = 0;
      }
      else
      {
        v341 = (void *)v46;
        v47 = (unsigned __int8 *)operator new(0x3A0u);
        *v47 = 0;
        *((_QWORD *)v47 + 12) = v47 + 112;
        *((_QWORD *)v47 + 16) = v47 + 144;
        *((_QWORD *)v47 + 20) = v47 + 176;
        *((_QWORD *)v47 + 24) = v47 + 208;
        *((_QWORD *)v47 + 28) = v47 + 240;
        *((_QWORD *)v47 + 32) = v47 + 272;
        *((_QWORD *)v47 + 36) = v47 + 304;
        *((_QWORD *)v47 + 40) = v47 + 336;
        *((_QWORD *)v47 + 44) = v47 + 368;
        *((_QWORD *)v47 + 48) = v47 + 400;
        *((_QWORD *)v47 + 52) = v47 + 432;
        *((_QWORD *)v47 + 13) = 0;
        v47[112] = 0;
        *((_QWORD *)v47 + 17) = 0;
        v47[144] = 0;
        *((_QWORD *)v47 + 21) = 0;
        v47[176] = 0;
        *((_QWORD *)v47 + 25) = 0;
        v47[208] = 0;
        *((_QWORD *)v47 + 29) = 0;
        v47[240] = 0;
        *((_QWORD *)v47 + 33) = 0;
        v47[272] = 0;
        *((_QWORD *)v47 + 37) = 0;
        v47[304] = 0;
        *((_QWORD *)v47 + 41) = 0;
        v47[336] = 0;
        *((_QWORD *)v47 + 45) = 0;
        v47[368] = 0;
        *((_QWORD *)v47 + 49) = 0;
        v47[400] = 0;
        *((_QWORD *)v47 + 53) = 0x800000000LL;
        v46 = (unsigned __int64)v341;
        *((_QWORD *)v47 + 66) = v47 + 544;
        *((_QWORD *)v47 + 67) = 0x600000000LL;
      }
      v428 = v47;
    }
    v47[*v47 + 1] = 2;
    v48 = v428;
    goto LABEL_45;
  }
LABEL_21:
  if ( !v432 )
  {
    v31 = sub_EEC8C0((unsigned __int64)a3, v25, *(double *)a7.m128_u64);
    v32 = v31;
    v33 = HIDWORD(v31);
    goto LABEL_23;
  }
  v180 = sub_168B9E0(&src);
  v184 = (void *)v427[0];
  if ( v427[0] )
  {
    v328 = (void *)v180;
    v184 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
    v180 = (__int64)v328;
  }
  v422 = v184;
  v185 = sub_1587BC0(v180, (__int64 *)&v422, v180, v181, v182, v183);
  v46 = v30;
  v186 = *v185 + 32LL * v431;
  v187 = *(unsigned __int8 **)(v186 + 8);
  if ( !v187 )
  {
    v213 = *(_QWORD *)(v186 + 16);
    v214 = *(_DWORD *)(v213 + 14976);
    if ( v214 )
    {
      v274 = (unsigned int)(v214 - 1);
      *(_DWORD *)(v213 + 14976) = v274;
      v187 = *(unsigned __int8 **)(v213 + 8 * v274 + 14848);
      v275 = *((unsigned int *)v187 + 134);
      *v187 = 0;
      v276 = *((_QWORD **)v187 + 66);
      *((_DWORD *)v187 + 106) = 0;
      v277 = &v276[8 * v275];
      while ( v276 != v277 )
      {
        while ( 1 )
        {
          v277 -= 8;
          v278 = (_QWORD *)v277[3];
          if ( v278 == v277 + 5 )
            break;
          v403 = v276;
          v393 = (void *)v46;
          v378 = v186;
          v361 = v277;
          operator delete(v278);
          v277 = v361;
          v276 = v403;
          v186 = v378;
          v46 = (unsigned __int64)v393;
          if ( v403 == v361 )
            goto LABEL_297;
        }
      }
LABEL_297:
      *((_DWORD *)v187 + 134) = 0;
    }
    else
    {
      v374 = v46;
      v345 = (void *)v186;
      v187 = (unsigned __int8 *)operator new(0x3A0u);
      *v187 = 0;
      *((_QWORD *)v187 + 12) = v187 + 112;
      *((_QWORD *)v187 + 16) = v187 + 144;
      *((_QWORD *)v187 + 20) = v187 + 176;
      *((_QWORD *)v187 + 24) = v187 + 208;
      *((_QWORD *)v187 + 28) = v187 + 240;
      *((_QWORD *)v187 + 32) = v187 + 272;
      *((_QWORD *)v187 + 36) = v187 + 304;
      *((_QWORD *)v187 + 40) = v187 + 336;
      *((_QWORD *)v187 + 44) = v187 + 368;
      *((_QWORD *)v187 + 48) = v187 + 400;
      *((_QWORD *)v187 + 52) = v187 + 432;
      *((_QWORD *)v187 + 13) = 0;
      v187[112] = 0;
      *((_QWORD *)v187 + 17) = 0;
      v187[144] = 0;
      *((_QWORD *)v187 + 21) = 0;
      v187[176] = 0;
      *((_QWORD *)v187 + 25) = 0;
      v187[208] = 0;
      *((_QWORD *)v187 + 29) = 0;
      v187[240] = 0;
      *((_QWORD *)v187 + 33) = 0;
      v187[272] = 0;
      *((_QWORD *)v187 + 37) = 0;
      v187[304] = 0;
      *((_QWORD *)v187 + 41) = 0;
      v187[336] = 0;
      *((_QWORD *)v187 + 45) = 0;
      v187[368] = 0;
      *((_QWORD *)v187 + 49) = 0;
      v187[400] = 0;
      *((_QWORD *)v187 + 53) = 0x800000000LL;
      v186 = (__int64)v345;
      *((_QWORD *)v187 + 66) = v187 + 544;
      v46 = v374;
      *((_QWORD *)v187 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v186 + 8) = v187;
  }
  v187[*v187 + 1] = 2;
  v48 = *(_BYTE **)(v186 + 8);
LABEL_45:
  v49 = (unsigned __int8)*v48;
  *v48 = v49 + 1;
  *(_QWORD *)&v48[8 * v49 + 16] = v46;
  v320 = v430;
  v50 = sub_EEC8C0((unsigned __int64)a3, (unsigned int)(v49 + 1), *(double *)a7.m128_u64);
  v32 = v50;
  v51 = (void *)HIDWORD(v50);
  LODWORD(v33) = HIDWORD(v50);
  if ( v320 )
  {
    v52 = v428;
    if ( v428 )
    {
      v53 = *((unsigned int *)v428 + 106);
      v54 = *((unsigned int *)v428 + 107);
      v55 = v53 + 1;
    }
    else
    {
      v205 = v429;
      v206 = *(_DWORD *)(v429 + 14976);
      if ( v206 )
      {
        v269 = (unsigned int)(v206 - 1);
        *(_DWORD *)(v429 + 14976) = v269;
        v52 = *(unsigned __int8 **)(v205 + 8 * v269 + 14848);
        v270 = *((unsigned int *)v52 + 134);
        *v52 = 0;
        v271 = *((_QWORD *)v52 + 66);
        *((_DWORD *)v52 + 106) = 0;
        v272 = v271 + (v270 << 6);
        if ( v271 == v272 )
        {
          v55 = 1;
          v53 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v272 -= 64;
              v273 = *(void **)(v272 + 24);
              if ( v273 == (void *)(v272 + 40) )
                break;
              v392 = v51;
              v360 = v52;
              operator delete(v273);
              v52 = v360;
              v51 = v392;
              if ( v271 == v272 )
                goto LABEL_289;
            }
          }
          while ( v271 != v272 );
LABEL_289:
          v53 = *((unsigned int *)v52 + 106);
          v55 = v53 + 1;
        }
        *((_DWORD *)v52 + 134) = 0;
        v54 = *((unsigned int *)v52 + 107);
      }
      else
      {
        v343 = (int)v51;
        v52 = (unsigned __int8 *)operator new(0x3A0u);
        v54 = 8;
        *v52 = 0;
        *((_QWORD *)v52 + 12) = v52 + 112;
        *((_QWORD *)v52 + 16) = v52 + 144;
        *((_QWORD *)v52 + 20) = v52 + 176;
        *((_QWORD *)v52 + 24) = v52 + 208;
        *((_QWORD *)v52 + 28) = v52 + 240;
        *((_QWORD *)v52 + 32) = v52 + 272;
        *((_QWORD *)v52 + 36) = v52 + 304;
        *((_QWORD *)v52 + 40) = v52 + 336;
        *((_QWORD *)v52 + 44) = v52 + 368;
        *((_QWORD *)v52 + 48) = v52 + 400;
        *((_QWORD *)v52 + 52) = v52 + 432;
        *((_QWORD *)v52 + 13) = 0;
        v52[112] = 0;
        *((_QWORD *)v52 + 17) = 0;
        v52[144] = 0;
        *((_QWORD *)v52 + 21) = 0;
        v52[176] = 0;
        *((_QWORD *)v52 + 25) = 0;
        v52[208] = 0;
        *((_QWORD *)v52 + 29) = 0;
        v52[240] = 0;
        *((_QWORD *)v52 + 33) = 0;
        v52[272] = 0;
        *((_QWORD *)v52 + 37) = 0;
        v52[304] = 0;
        *((_QWORD *)v52 + 41) = 0;
        v52[336] = 0;
        *((_QWORD *)v52 + 45) = 0;
        v52[368] = 0;
        *((_QWORD *)v52 + 49) = 0;
        v52[400] = 0;
        *((_QWORD *)v52 + 53) = 0x800000000LL;
        LODWORD(v51) = v343;
        *((_QWORD *)v52 + 66) = v52 + 544;
        v55 = 1;
        *((_QWORD *)v52 + 67) = 0x600000000LL;
        v53 = 0;
      }
      v428 = v52;
    }
    v422 = (void *)__PAIR64__((unsigned int)v51, v32);
    LOBYTE(v423) = 1;
    if ( v54 >= v55 )
      goto LABEL_49;
    goto LABEL_118;
  }
LABEL_23:
  if ( !v432 )
    goto LABEL_24;
  v141 = sub_168B9E0(&src);
  v145 = (void *)v427[0];
  if ( v427[0] )
  {
    v324 = (void *)v141;
    v145 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v427[0] + 32LL))(v427[0]);
    v141 = (__int64)v324;
  }
  v419 = v145;
  v146 = sub_1587BC0(v141, (__int64 *)&v419, v141, v142, v143, v144);
  v147 = 32LL * v431 + *v146;
  v52 = *(unsigned __int8 **)(v147 + 8);
  if ( v52 )
  {
    v53 = *((unsigned int *)v52 + 106);
    v148 = *((unsigned int *)v52 + 107);
    v55 = v53 + 1;
  }
  else
  {
    v219 = *(_QWORD *)(v147 + 16);
    v220 = *(_DWORD *)(v219 + 14976);
    if ( v220 )
    {
      v279 = (unsigned int)(v220 - 1);
      *(_DWORD *)(v219 + 14976) = v279;
      v52 = *(unsigned __int8 **)(v219 + 8 * v279 + 14848);
      v280 = *((unsigned int *)v52 + 134);
      *v52 = 0;
      v281 = *((_QWORD **)v52 + 66);
      *((_DWORD *)v52 + 106) = 0;
      v282 = &v281[8 * v280];
      if ( v281 == v282 )
      {
        v55 = 1;
        v53 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v282 -= 8;
            v283 = (_QWORD *)v282[3];
            if ( v283 == v282 + 5 )
              break;
            v404 = v281;
            v394 = (void *)v147;
            v379 = v52;
            v362 = v282;
            operator delete(v283);
            v282 = v362;
            v281 = v404;
            v52 = v379;
            v147 = (__int64)v394;
            if ( v404 == v362 )
              goto LABEL_301;
          }
        }
        while ( v281 != v282 );
LABEL_301:
        v53 = *((unsigned int *)v52 + 106);
        v55 = v53 + 1;
      }
      *((_DWORD *)v52 + 134) = 0;
      v148 = *((unsigned int *)v52 + 107);
    }
    else
    {
      v348 = (void *)v147;
      v52 = (unsigned __int8 *)operator new(0x3A0u);
      v148 = 8;
      *v52 = 0;
      *((_QWORD *)v52 + 12) = v52 + 112;
      *((_QWORD *)v52 + 16) = v52 + 144;
      *((_QWORD *)v52 + 20) = v52 + 176;
      *((_QWORD *)v52 + 24) = v52 + 208;
      *((_QWORD *)v52 + 28) = v52 + 240;
      *((_QWORD *)v52 + 32) = v52 + 272;
      *((_QWORD *)v52 + 36) = v52 + 304;
      *((_QWORD *)v52 + 40) = v52 + 336;
      *((_QWORD *)v52 + 44) = v52 + 368;
      *((_QWORD *)v52 + 48) = v52 + 400;
      *((_QWORD *)v52 + 52) = v52 + 432;
      *((_QWORD *)v52 + 13) = 0;
      v52[112] = 0;
      *((_QWORD *)v52 + 17) = 0;
      v52[144] = 0;
      *((_QWORD *)v52 + 21) = 0;
      v52[176] = 0;
      *((_QWORD *)v52 + 25) = 0;
      v52[208] = 0;
      *((_QWORD *)v52 + 29) = 0;
      v52[240] = 0;
      *((_QWORD *)v52 + 33) = 0;
      v52[272] = 0;
      *((_QWORD *)v52 + 37) = 0;
      v52[304] = 0;
      *((_QWORD *)v52 + 41) = 0;
      v52[336] = 0;
      *((_QWORD *)v52 + 45) = 0;
      v52[368] = 0;
      *((_QWORD *)v52 + 49) = 0;
      v52[400] = 0;
      *((_QWORD *)v52 + 53) = 0x800000000LL;
      v147 = (__int64)v348;
      *((_QWORD *)v52 + 66) = v52 + 544;
      v55 = 1;
      *((_QWORD *)v52 + 67) = 0x600000000LL;
      v53 = 0;
    }
    *(_QWORD *)(v147 + 8) = v52;
  }
  v422 = (void *)__PAIR64__(v33, v32);
  LOBYTE(v423) = 1;
  if ( v148 < v55 )
  {
LABEL_118:
    v325 = v52;
    sub_2237220(v52 + 416, v52 + 432, v55, 12);
    v52 = v325;
    v53 = *((unsigned int *)v325 + 106);
  }
LABEL_49:
  v56 = *((_QWORD *)v52 + 52) + 12 * v53;
  *(_QWORD *)v56 = v422;
  *(_DWORD *)(v56 + 8) = v423;
  ++*((_DWORD *)v52 + 106);
LABEL_24:
  v17 = 0;
  sub_15F7200(&src);
  sub_168FFF0(a1, (unsigned __int64 *)v16, v408, *(double *)a7.m128_u64);
  if ( dest != &v412.m128_u16[4] )
    operator delete(dest);
  return v17;
}
