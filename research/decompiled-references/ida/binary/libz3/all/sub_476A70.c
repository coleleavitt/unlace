__int64 __fastcall sub_476A70(__int64 a1, double a2)
{
  char **exception; // rbp
  char **v3; // rbx
  char **v4; // rbx
  char **v5; // rbp
  char **v6; // rbx
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // r8
  char *v11; // r9
  _QWORD *v12; // rbx
  unsigned int v13; // r15d
  int v14; // ebp
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rdx
  int v18; // edi
  char *v19; // rsi
  __int64 v20; // rax
  char *i; // rax
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  int v29; // edx
  __int64 v30; // rsi
  int *v31; // rdi
  __int64 v32; // rax
  int *v33; // r13
  __int64 v34; // rax
  int *v35; // r12
  int *v36; // r14
  int v37; // edx
  int v38; // edx
  _QWORD *v39; // rax
  void *v40; // rdi
  __int64 v41; // rax
  int *v42; // r12
  int *v43; // rbp
  void *v44; // r14
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  std::ios_base *v49; // rbp
  _QWORD *v50; // rax
  std::ios_base **v51; // rax
  unsigned int v52; // r12d
  int v53; // edx
  __int64 *p_src; // r13
  std::ios_base *v55; // rbx
  unsigned int v56; // edx
  __int64 v57; // rax
  __int64 *v58; // rbx
  std::ios_base *v59; // r12
  _QWORD *v60; // rax
  __int64 *v61; // r13
  __int64 v62; // rcx
  __int64 *v63; // rbp
  __int64 v64; // rbx
  unsigned int v65; // eax
  __int64 v66; // r12
  void *v67; // r14
  __int64 v68; // rsi
  char *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // r12d
  unsigned int v73; // edx
  unsigned int *v74; // rax
  __int64 v75; // rdx
  unsigned int v76; // eax
  unsigned int *v77; // r15
  std::ios_base *v78; // rcx
  __int64 v79; // rbx
  std::ios_base *v80; // rax
  _DWORD *v81; // rdx
  int v82; // r8d
  std::ios_base *v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rsi
  std::ios_base *v86; // rbx
  std::ios_base *v87; // rbp
  __int64 *v88; // r14
  __int64 *v89; // r12
  __int64 *v90; // r13
  __int64 v91; // rsi
  __int64 v92; // rdi
  bool v93; // zf
  __int64 v94; // rbx
  _QWORD *v95; // rax
  unsigned int v96; // ecx
  unsigned int v97; // r15d
  unsigned int v98; // esi
  char *v99; // rdx
  _QWORD *v100; // rax
  __int64 v101; // rdx
  unsigned int v102; // r12d
  unsigned int v103; // eax
  char *v104; // r13
  char *v105; // rax
  __int64 v106; // rbp
  __int64 *v107; // rdx
  int v108; // r8d
  _DWORD *v109; // rcx
  __int64 *v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rsi
  __int64 *v113; // rbp
  __int64 v114; // rax
  __int64 *v115; // rbx
  __int64 v116; // r14
  __int64 *v117; // r12
  __int64 *v118; // r13
  __int64 v119; // rsi
  __int64 v120; // rdi
  __int64 v121; // rdx
  int v122; // esi
  __int64 v123; // rax
  int v124; // r8d
  int v125; // r9d
  unsigned int v126; // ecx
  unsigned int v127; // r15d
  size_t v128; // r14
  size_t *v129; // r13
  unsigned __int64 v130; // rdi
  __int64 v131; // rbx
  size_t *v132; // rax
  size_t *v133; // rcx
  unsigned int v134; // r15d
  unsigned int v135; // eax
  unsigned int v136; // esi
  __int64 v137; // rax
  __int64 v138; // rdx
  char v139; // cl
  unsigned int v140; // ecx
  unsigned int v141; // r15d
  size_t v142; // r14
  _BYTE *v143; // r13
  unsigned __int64 v144; // rdi
  __int64 v145; // rbx
  _BYTE *v146; // rax
  _QWORD *v147; // rcx
  unsigned int v148; // r15d
  unsigned int v149; // eax
  unsigned int v150; // esi
  __int64 v151; // rax
  __int64 v152; // rdx
  char v153; // cl
  size_t v154; // r13
  _WORD *v155; // r15
  size_t v156; // r14
  __int64 v157; // rbx
  unsigned __int64 v158; // r9
  unsigned __int64 v159; // r8
  size_t *v160; // rcx
  size_t v161; // r15
  unsigned __int64 v162; // rax
  size_t *v163; // r14
  __m128i v164; // xmm5
  __int64 v165; // rax
  unsigned __int64 v166; // rdi
  size_t *v167; // rax
  size_t v168; // r8
  _BYTE *v169; // r13
  size_t v170; // r9
  size_t v171; // rdx
  size_t *v172; // rax
  _BYTE *v173; // rdi
  size_t v174; // rsi
  __int64 v175; // r13
  __int64 v176; // r14
  int v177; // eax
  int v178; // r8d
  int v179; // r9d
  __int64 v180; // rax
  __int64 v181; // rbx
  _QWORD *v182; // rax
  unsigned int v183; // edx
  __int64 v184; // rcx
  int v185; // edx
  __int64 *v186; // rcx
  _QWORD *v187; // rdi
  unsigned int v188; // eax
  unsigned int v189; // esi
  unsigned int v190; // ebx
  size_t v191; // r15
  size_t *v192; // r13
  unsigned __int64 v193; // rdi
  size_t *v194; // rax
  size_t *v195; // r8
  unsigned int v196; // ecx
  unsigned int v197; // eax
  unsigned int v198; // edi
  __int64 v199; // rax
  __int64 v200; // rdx
  char v201; // si
  unsigned int v202; // esi
  unsigned int v203; // ebx
  size_t v204; // r15
  _BYTE *v205; // r13
  unsigned __int64 v206; // rdi
  _BYTE *v207; // rax
  _QWORD *v208; // r8
  unsigned int v209; // ecx
  unsigned int v210; // eax
  unsigned int v211; // edi
  __int64 v212; // rax
  __int64 v213; // rdx
  char v214; // si
  size_t v215; // r15
  _WORD *v216; // rsi
  size_t v217; // r13
  __int64 v218; // rbx
  unsigned __int64 v219; // r9
  unsigned __int64 v220; // r8
  size_t *v221; // rcx
  size_t v222; // r15
  unsigned __int64 v223; // rax
  size_t *v224; // r10
  __m128i v225; // xmm6
  __int64 v226; // rax
  unsigned __int64 v227; // rdi
  size_t *v228; // rax
  size_t v229; // r8
  _BYTE *v230; // r13
  _BYTE *v231; // r10
  size_t v232; // r9
  size_t v233; // rdx
  size_t *v234; // rax
  _BYTE *v235; // rdi
  __int64 v236; // rcx
  __int64 v237; // rcx
  unsigned int v238; // r13d
  unsigned int v239; // ecx
  unsigned int *v240; // rdx
  size_t v241; // r15
  unsigned __int64 v242; // rdi
  size_t *v243; // rcx
  _BYTE *v244; // rdi
  _BYTE *v245; // rdi
  size_t v246; // rsi
  int v247; // ecx
  _BYTE *v248; // rsi
  _DWORD *v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rsi
  __int64 v254; // rsi
  size_t v255; // rcx
  unsigned __int64 v256; // rdi
  _BYTE *v257; // r8
  size_t *v258; // rcx
  int v259; // ecx
  _DWORD *v260; // rdi
  _BYTE *v261; // rax
  __int64 v262; // rdx
  _BYTE *v263; // rdi
  size_t v264; // rdi
  __int64 v265; // rbx
  int v266; // eax
  int v267; // r8d
  int v268; // r9d
  __int64 v269; // rax
  __int64 v270; // rbx
  _QWORD *v271; // rax
  unsigned int v272; // edx
  __int64 v273; // rcx
  int v274; // edx
  __int64 *v275; // rcx
  _QWORD *v276; // rdi
  unsigned int v277; // ecx
  _QWORD *v278; // r13
  int v279; // ecx
  int v280; // r8d
  int v281; // r9d
  int v282; // edi
  __int64 v283; // rax
  __int64 v284; // rbp
  int v285; // ecx
  int v286; // r8d
  int v287; // r9d
  int v288; // edi
  __int64 v289; // rax
  __int64 v290; // r12
  unsigned int v291; // ecx
  size_t v292; // rsi
  unsigned int *v293; // rdx
  _BYTE *v294; // rdi
  size_t v295; // rdi
  int v296; // ecx
  _BYTE *v297; // rsi
  _DWORD *v298; // rax
  __int64 v299; // rdx
  _QWORD *v300; // rax
  char *v301; // r13
  __int64 v302; // r14
  _QWORD *v303; // rbp
  int v304; // edi
  __int64 v305; // rsi
  __int64 v306; // rax
  size_t *v307; // rax
  int v308; // ecx
  int v309; // r8d
  int v310; // r9d
  int v311; // edi
  __int64 v312; // rax
  void *v313; // rbx
  __int64 v314; // r15
  __int64 v315; // r12
  __int64 v316; // rax
  __int64 v317; // rbx
  __int64 v318; // r12
  __int64 v319; // rax
  __int64 v320; // r15
  int v321; // ecx
  _DWORD *v322; // rdi
  size_t *v323; // rax
  __int64 v324; // rdx
  int v325; // ecx
  _DWORD *v326; // rsi
  _BYTE *v327; // rax
  __int64 v328; // rdx
  __int64 v329; // rax
  __int64 v330; // rdx
  __int64 v331; // rax
  __int64 v332; // rdx
  __int64 v333; // rax
  __int64 v334; // rdx
  _QWORD *v335; // rax
  __int64 v336; // rax
  __int64 v337; // rdx
  int v338; // ecx
  _DWORD *v339; // rsi
  size_t *v340; // rax
  __int64 v341; // rdx
  __int64 v342; // rax
  __int64 v343; // rdx
  void (__fastcall ***v344)(void *); // rbp
  __int64 v345; // rdi
  __int64 v346; // r15
  unsigned int *v347; // r13
  __int64 v348; // r14
  char v349; // al
  void *v350; // rbp
  void *v351; // rbx
  __int64 v352; // rbx
  __int64 v353; // rbp
  __int64 v354; // rax
  unsigned int *v355; // r14
  unsigned int *v356; // rbp
  void *v357; // r15
  unsigned int *v358; // rsi
  unsigned int v359; // eax
  __int64 *v360; // r12
  __int64 *v361; // rbp
  __int64 *v362; // rbx
  __int64 *v363; // r13
  __int64 v364; // rsi
  __int64 v365; // rdi
  unsigned int v366; // eax
  std::ios_base *v367; // rbp
  __int64 *v368; // r13
  __int64 v369; // rsi
  __int64 v370; // rdi
  int v371; // [rsp+0h] [rbp-258h]
  void *v372; // [rsp+0h] [rbp-258h]
  int v373; // [rsp+0h] [rbp-258h]
  char *ptr; // [rsp+8h] [rbp-250h]
  _QWORD *ptra; // [rsp+8h] [rbp-250h]
  void *ptrb; // [rsp+8h] [rbp-250h]
  __int64 v378; // [rsp+10h] [rbp-248h]
  __int64 v379; // [rsp+10h] [rbp-248h]
  int v380; // [rsp+10h] [rbp-248h]
  _BYTE *v381; // [rsp+18h] [rbp-240h]
  void *v382; // [rsp+18h] [rbp-240h]
  unsigned int v383; // [rsp+18h] [rbp-240h]
  unsigned int v384; // [rsp+18h] [rbp-240h]
  char *v385; // [rsp+18h] [rbp-240h]
  unsigned int v386; // [rsp+18h] [rbp-240h]
  int v387; // [rsp+18h] [rbp-240h]
  unsigned int v388; // [rsp+18h] [rbp-240h]
  int v389; // [rsp+18h] [rbp-240h]
  unsigned int v390; // [rsp+18h] [rbp-240h]
  void *v391; // [rsp+18h] [rbp-240h]
  int v392; // [rsp+18h] [rbp-240h]
  void *v393; // [rsp+18h] [rbp-240h]
  int *v394; // [rsp+20h] [rbp-238h]
  std::ios_base *v395; // [rsp+20h] [rbp-238h]
  std::ios_base *v396; // [rsp+20h] [rbp-238h]
  std::ios_base *v397; // [rsp+20h] [rbp-238h]
  std::ios_base *v398; // [rsp+20h] [rbp-238h]
  std::ios_base *v399; // [rsp+20h] [rbp-238h]
  _QWORD *dest; // [rsp+28h] [rbp-230h]
  unsigned int desta; // [rsp+28h] [rbp-230h]
  unsigned int destb; // [rsp+28h] [rbp-230h]
  char *destc; // [rsp+28h] [rbp-230h]
  char destd; // [rsp+28h] [rbp-230h]
  _QWORD *deste; // [rsp+28h] [rbp-230h]
  __int64 destf; // [rsp+28h] [rbp-230h]
  __int64 destg; // [rsp+28h] [rbp-230h]
  _WORD *destk; // [rsp+28h] [rbp-230h]
  void *desth; // [rsp+28h] [rbp-230h]
  size_t *desti; // [rsp+28h] [rbp-230h]
  _BYTE *destl; // [rsp+28h] [rbp-230h]
  size_t *destm; // [rsp+28h] [rbp-230h]
  void *destn; // [rsp+28h] [rbp-230h]
  void *desto; // [rsp+28h] [rbp-230h]
  void *destp; // [rsp+28h] [rbp-230h]
  unsigned int destq; // [rsp+28h] [rbp-230h]
  size_t *destr; // [rsp+28h] [rbp-230h]
  _DWORD *destj; // [rsp+28h] [rbp-230h]
  size_t *v419; // [rsp+30h] [rbp-228h]
  __int64 v420; // [rsp+38h] [rbp-220h]
  __int64 v421; // [rsp+38h] [rbp-220h]
  int v422; // [rsp+40h] [rbp-218h]
  unsigned int v423; // [rsp+40h] [rbp-218h]
  int v424; // [rsp+48h] [rbp-210h]
  size_t *v425; // [rsp+48h] [rbp-210h]
  int v426; // [rsp+50h] [rbp-208h]
  size_t v427; // [rsp+50h] [rbp-208h]
  size_t v428; // [rsp+50h] [rbp-208h]
  size_t v429; // [rsp+50h] [rbp-208h]
  size_t v430; // [rsp+50h] [rbp-208h]
  size_t v431; // [rsp+50h] [rbp-208h]
  size_t v432; // [rsp+50h] [rbp-208h]
  int v433; // [rsp+58h] [rbp-200h]
  __int64 *v434; // [rsp+58h] [rbp-200h]
  int v435; // [rsp+60h] [rbp-1F8h]
  std::ios_base *v436; // [rsp+60h] [rbp-1F8h]
  char v437; // [rsp+68h] [rbp-1F0h]
  size_t v438; // [rsp+68h] [rbp-1F0h]
  size_t v439; // [rsp+68h] [rbp-1F0h]
  size_t v440; // [rsp+68h] [rbp-1F0h]
  size_t v441; // [rsp+68h] [rbp-1F0h]
  __int64 v442; // [rsp+70h] [rbp-1E8h]
  __int64 v443; // [rsp+88h] [rbp-1D0h]
  void *v444; // [rsp+88h] [rbp-1D0h]
  int *v445; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v446; // [rsp+A8h] [rbp-1B0h] BYREF
  int v447; // [rsp+B0h] [rbp-1A8h] BYREF
  unsigned int v448; // [rsp+B4h] [rbp-1A4h]
  _QWORD *v449; // [rsp+B8h] [rbp-1A0h]
  int v450[2]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v451; // [rsp+C8h] [rbp-190h]
  int v452[2]; // [rsp+D0h] [rbp-188h] BYREF
  unsigned int v453; // [rsp+D8h] [rbp-180h]
  __int64 v454; // [rsp+DCh] [rbp-17Ch]
  void *v455; // [rsp+F0h] [rbp-168h] BYREF
  size_t v456; // [rsp+F8h] [rbp-160h]
  _QWORD v457[2]; // [rsp+100h] [rbp-158h] BYREF
  void *v458; // [rsp+110h] [rbp-148h] BYREF
  size_t n; // [rsp+118h] [rbp-140h]
  _QWORD v460[2]; // [rsp+120h] [rbp-138h] BYREF
  void *src; // [rsp+130h] [rbp-128h] BYREF
  size_t v462; // [rsp+138h] [rbp-120h]
  size_t v463; // [rsp+140h] [rbp-118h] BYREF
  __int64 v464; // [rsp+148h] [rbp-110h]
  _BYTE v465[48]; // [rsp+150h] [rbp-108h] BYREF
  __m128i si128; // [rsp+180h] [rbp-D8h]
  __m128i v467; // [rsp+190h] [rbp-C8h]
  __m128i v468; // [rsp+1A0h] [rbp-B8h]
  __m128i v469; // [rsp+1B0h] [rbp-A8h]
  __m128i v470; // [rsp+1C0h] [rbp-98h]
  __m128i v471; // [rsp+1D0h] [rbp-88h]
  __m128i v472; // [rsp+1E0h] [rbp-78h]
  __m128i v473; // [rsp+1F0h] [rbp-68h]
  __m128i v474[5]; // [rsp+200h] [rbp-58h]

  result = *(_QWORD *)(a1 + 24);
  if ( !result || !*(_DWORD *)(result - 4) )
    return result;
  v8 = sub_186B270(0x80u);
  v12 = *(_QWORD **)(a1 + 24);
  v454 = 0;
  ptr = (char *)v8;
  *(_QWORD *)v8 = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_DWORD *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 112) = 0;
  *(_DWORD *)(v8 + 120) = 0;
  LODWORD(v420) = (_DWORD)v12;
  if ( !v12 )
  {
    v13 = 8;
    v29 = 0;
    v30 = 0;
    goto LABEL_25;
  }
  dest = &v12[*((unsigned int *)v12 - 1)];
  if ( v12 == dest )
  {
    LODWORD(v420) = 0;
    v28 = v12;
    v13 = 8;
    v29 = 0;
    goto LABEL_24;
  }
  v13 = 8;
  v14 = 0;
  v420 = 0;
  v381 = v465;
  v394 = v452;
  do
  {
    v15 = *v12;
    if ( !*v12 )
      goto LABEL_20;
    v16 = v15 + 40LL * *(unsigned int *)(v15 - 4);
    if ( v15 == v16 )
      goto LABEL_20;
    do
    {
      v10 = *(_QWORD *)(v15 + 32);
      v9 = (int)ptr;
      v17 = 16LL * v13;
      v18 = *(_DWORD *)(v10 + 12);
      v19 = &ptr[v17];
      v20 = 16LL * (v18 & (v13 - 1));
      v11 = &ptr[v20];
      if ( v20 != v17 )
      {
        for ( i = &ptr[v20]; v19 != i; i += 16 )
        {
          v22 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v22 + 12) == v18 && v10 == v22 )
              goto LABEL_19;
          }
          else if ( !v22 )
          {
            goto LABEL_15;
          }
        }
      }
      v69 = ptr;
      if ( v11 == ptr )
      {
LABEL_15:
        v23 = (_DWORD *)v420;
        if ( !v420 )
          goto LABEL_77;
        goto LABEL_16;
      }
      while ( 1 )
      {
        v70 = *(_QWORD *)v69;
        if ( *(_QWORD *)v69 <= 1u )
          break;
        if ( *(_DWORD *)(v70 + 12) == v18 && v10 == v70 )
          goto LABEL_19;
LABEL_73:
        v69 += 16;
        if ( v11 == v69 )
          goto LABEL_15;
      }
      if ( v70 )
        goto LABEL_73;
      v23 = (_DWORD *)v420;
      if ( !v420 )
      {
LABEL_77:
        v71 = sub_186B270(0x18u) + 8;
        v10 = *(_QWORD *)(v15 + 32);
        *(_QWORD *)(v71 - 8) = 2;
        v27 = (_QWORD *)v71;
        v420 = v71;
        v26 = 1;
        v23 = (_DWORD *)v420;
        goto LABEL_18;
      }
LABEL_16:
      v24 = *(v23 - 1);
      if ( v24 == *(v23 - 2) )
      {
        v72 = (3 * v24 + 1) >> 1;
        v73 = 8 * v72 + 8;
        if ( 8 * v24 + 8 >= v73 || v24 >= v72 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v465, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v465);
          sub_233E40((__int64)v465);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v74 = (unsigned int *)sub_186B300(v23 - 2, v73);
        v75 = v74[1];
        v23 = v74 + 2;
        v10 = *(_QWORD *)(v15 + 32);
        *v74 = v72;
        v420 = (__int64)v23;
        LODWORD(v74) = v75;
        v27 = &v23[2 * v75];
        v26 = (_DWORD)v74 + 1;
      }
      else
      {
        v25 = v24;
        v26 = v24 + 1;
        v27 = &v23[2 * v25];
      }
LABEL_18:
      *v27 = v10;
      *(v23 - 1) = v26;
      *(_QWORD *)v465 = v10;
      *(_DWORD *)&v465[8] = v14;
      *(_QWORD *)v452 = ptr;
      v453 = v13;
      sub_47A980(v452, v465, v27, v23, v10, v11);
      v13 = v453;
      ++v14;
      ptr = *(char **)v452;
LABEL_19:
      v15 += 40;
    }
    while ( v16 != v15 );
LABEL_20:
    ++v12;
  }
  while ( dest != v12 );
  v28 = *(_QWORD **)(a1 + 24);
  if ( v420 )
    v29 = *(_DWORD *)(v420 - 4);
  else
    v29 = 0;
  if ( v28 )
LABEL_24:
    v30 = *((unsigned int *)v28 - 1);
  else
    v30 = 0;
LABEL_25:
  v31 = &v447;
  sub_4AD6C0(
    (int)&v447,
    v30,
    v29,
    v9,
    v10,
    (int)v11,
    v371,
    (int)ptr,
    a1,
    (int)v381,
    (int)v394,
    dest,
    (int)&v447,
    v420,
    v422,
    v424,
    v426,
    v433,
    v435,
    v437);
  desta = 0;
  v32 = *(_QWORD *)(v378 + 24);
  if ( !v32 )
    goto LABEL_43;
  while ( desta < *(_DWORD *)(v32 - 4) )
  {
    v30 = v32 + 8LL * desta;
    if ( !*(_QWORD *)v30 )
      goto LABEL_42;
    v31 = (int *)&v445;
    v445 = nullptr;
    sub_47AC90(&v445);
    v33 = v445;
    if ( !v445 )
      goto LABEL_41;
    v34 = (unsigned int)*(v445 - 1);
    v35 = &v445[10 * v34];
    if ( v445 == v35 )
      goto LABEL_37;
    v36 = v445;
    while ( 2 )
    {
      while ( 2 )
      {
        v30 = v13;
        v39 = sub_470BD0(ptra, v13, *((_QWORD *)v36 + 4));
        v40 = qword_1C7F2C0;
        v41 = v449[desta] + 32LL * *((unsigned int *)v39 + 2);
        if ( (v36[1] & 1) == 0 )
        {
          v37 = *v36;
          *(_BYTE *)(v41 + 4) &= ~1u;
          *(_DWORD *)v41 = v37;
          if ( (v36[5] & 1) != 0 )
            break;
          goto LABEL_32;
        }
        v30 = v41;
        v395 = (std::ios_base *)v41;
        v382 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v41, v36);
        v41 = (__int64)v395;
        if ( (v36[5] & 1) == 0 )
        {
LABEL_32:
          v38 = v36[4];
          v36 += 10;
          *(_BYTE *)(v41 + 20) &= ~1u;
          *(_DWORD *)(v41 + 16) = v38;
          if ( v35 == v36 )
            goto LABEL_36;
          continue;
        }
        break;
      }
      v30 = v41 + 16;
      sub_182C690(v40, v41 + 16, v36 + 4);
      v36 += 10;
      if ( v35 != v36 )
        continue;
      break;
    }
LABEL_36:
    v34 = (unsigned int)*(v33 - 1);
LABEL_37:
    if ( (_DWORD)v34 )
    {
      v42 = v33;
      v43 = &v33[10 * v34];
      do
      {
        v44 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v42);
        v30 = (__int64)(v42 + 4);
        v42 += 10;
        sub_182CBA0(v44, v30);
      }
      while ( v42 != v43 );
    }
    v31 = v33 - 2;
    sub_186B220(v33 - 2);
LABEL_41:
    v32 = *(_QWORD *)(v378 + 24);
LABEL_42:
    ++desta;
    if ( v32 )
      continue;
    break;
  }
LABEL_43:
  if ( (unsigned int)sub_180B130(v31) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      v30 = sub_180B150(v31, v30);
      sub_4AB900(v419, v30);
      sub_186A500(v419, v30);
    }
    else
    {
      v30 = sub_180B150(v31, v30);
      sub_4AB900(v419, v30);
    }
  }
  sub_4A8A00((int)v419, v30, v45, v46, v47, v48, v372, (int)ptra, v378, v382);
  sub_16669D0(v450, *(_QWORD *)(v379 + 8));
  if ( v447 )
  {
    v49 = *(std::ios_base **)(v379 + 8);
    v462 = 0;
    v50 = (_QWORD *)sub_186B270(0x28u);
    *v50 = 2;
    v51 = (std::ios_base **)(v50 + 1);
    v52 = 0;
    v53 = 1;
    v436 = (std::ios_base *)v51;
    p_src = (__int64 *)&src;
    v55 = (std::ios_base *)v51;
    while ( 1 )
    {
      *v51 = v49;
      ++v52;
      v51[1] = nullptr;
      *((_DWORD *)v55 - 1) = v53;
      src = v49;
      sub_2334C0(p_src);
      if ( v52 >= v447 )
        break;
      v56 = *((_DWORD *)v55 - 1);
      v462 = 0;
      v49 = *(std::ios_base **)(v379 + 8);
      if ( v56 == *((_DWORD *)v55 - 2) )
      {
        v383 = (3 * v56 + 1) >> 1;
        v76 = 16 * v383 + 8;
        if ( 16 * v56 + 8 >= v76 || v56 >= (3 * v56 + 1) >> 1 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v465, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v465);
          sub_233E40((__int64)v465);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v77 = (unsigned int *)sub_186B270(v76);
        v78 = (std::ios_base *)(v77 + 2);
        v79 = *((unsigned int *)v436 - 1);
        v80 = v436;
        v81 = v77 + 2;
        v77[1] = v79;
        v82 = v79;
        v83 = (std::ios_base *)((char *)v436 + 16 * v79);
        if ( v83 != v436 )
        {
          do
          {
            v84 = *(_QWORD *)v80;
            v80 = (std::ios_base *)((char *)v80 + 16);
            v81 += 4;
            *((_QWORD *)v81 - 2) = v84;
            v85 = *((_QWORD *)v80 - 1);
            *((_QWORD *)v80 - 1) = 0;
            *((_QWORD *)v81 - 1) = v85;
          }
          while ( v80 != v83 );
        }
        v86 = (std::ios_base *)((char *)v436 + 16 * v79);
        if ( v82 )
        {
          destb = v52;
          LODWORD(v419) = (_DWORD)v77 + 8;
          v396 = v49;
          v87 = v436;
          v88 = p_src;
          do
          {
            v89 = *((__int64 **)v87 + 1);
            if ( v89 )
            {
              v90 = &v89[*((unsigned int *)v89 - 1)];
              if ( v89 >= v90 )
                goto LABEL_95;
              do
              {
                while ( 1 )
                {
                  v91 = *v89;
                  if ( *v89 )
                  {
                    v92 = *(_QWORD *)v87;
                    v93 = (*(_DWORD *)(v91 + 8))-- == 1;
                    if ( v93 )
                      break;
                  }
                  if ( ++v89 >= v90 )
                    goto LABEL_94;
                }
                sub_15D7BC0(v92, v91);
                ++v89;
              }
              while ( v89 < v90 );
LABEL_94:
              v89 = *((__int64 **)v87 + 1);
              if ( v89 )
LABEL_95:
                sub_186B220(v89 - 1);
            }
            v87 = (std::ios_base *)((char *)v87 + 16);
          }
          while ( v87 != v86 );
          v49 = v396;
          v52 = destb;
          p_src = v88;
          v78 = (std::ios_base *)(v77 + 2);
        }
        v397 = v78;
        sub_186B220((char *)v436 - 8);
        *v77 = v383;
        v55 = v397;
        v436 = v397;
        v51 = (std::ios_base **)((char *)v397 + 16 * v77[1]);
        v53 = v77[1] + 1;
      }
      else
      {
        v57 = v56;
        v55 = v436;
        v53 = v56 + 1;
        v51 = (std::ios_base **)((char *)v436 + 16 * v57);
      }
    }
  }
  else
  {
    v436 = nullptr;
  }
  if ( v448 )
  {
    v462 = 0;
    v94 = *(_QWORD *)(v379 + 8);
    v95 = (_QWORD *)sub_186B270(0x28u);
    v96 = v448;
    v97 = 0;
    v98 = 1;
    v99 = (char *)(v95 + 1);
    *v95 = 2;
    v434 = v95 + 1;
    v100 = v95 + 1;
    while ( 1 )
    {
      ++v97;
      *(_QWORD *)v99 = v94;
      *((_QWORD *)v99 + 1) = 0;
      *((_DWORD *)v100 - 1) = v98;
      if ( v97 >= v96 )
        break;
      v462 = 0;
      v94 = *(_QWORD *)(v379 + 8);
      if ( v98 == *((_DWORD *)v100 - 2) )
      {
        v102 = (3 * v98 + 1) >> 1;
        v103 = 16 * v102 + 8;
        if ( 16 * v98 + 8 >= v103 || v98 >= v102 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v465, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v465);
          sub_233E40((__int64)v465);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v104 = (char *)sub_186B270(v103);
        v105 = v104 + 8;
        v106 = *((unsigned int *)v434 - 1);
        v107 = v434;
        *((_DWORD *)v104 + 1) = v106;
        v108 = v106;
        v109 = v104 + 8;
        v110 = &v434[2 * v106];
        if ( v110 != v434 )
        {
          do
          {
            v111 = *v107;
            v107 += 2;
            v109 += 4;
            *((_QWORD *)v109 - 2) = v111;
            v112 = *(v107 - 1);
            *(v107 - 1) = 0;
            *((_QWORD *)v109 - 1) = v112;
          }
          while ( v107 != v110 );
        }
        v113 = &v434[2 * v106];
        if ( v108 )
        {
          v384 = v102;
          v398 = (std::ios_base *)v104;
          destc = v104 + 8;
          v114 = v94;
          v115 = v434;
          v116 = v114;
          do
          {
            v117 = (__int64 *)v115[1];
            if ( v117 )
            {
              v118 = &v117[*((unsigned int *)v117 - 1)];
              if ( v117 >= v118 )
                goto LABEL_119;
              do
              {
                while ( 1 )
                {
                  v119 = *v117;
                  if ( *v117 )
                  {
                    v120 = *v115;
                    v93 = (*(_DWORD *)(v119 + 8))-- == 1;
                    if ( v93 )
                      break;
                  }
                  if ( ++v117 >= v118 )
                    goto LABEL_118;
                }
                sub_15D7BC0(v120, v119);
                ++v117;
              }
              while ( v117 < v118 );
LABEL_118:
              v117 = (__int64 *)v115[1];
              if ( v117 )
LABEL_119:
                sub_186B220(v117 - 1);
            }
            v115 += 2;
          }
          while ( v113 != v115 );
          v102 = v384;
          v104 = (char *)v398;
          v94 = v116;
          v105 = destc;
        }
        v385 = v105;
        sub_186B220(v434 - 1);
        v121 = *((unsigned int *)v104 + 1);
        v100 = v385;
        *(_DWORD *)v104 = v102;
        v96 = v448;
        v122 = v121;
        v434 = (__int64 *)v385;
        v99 = &v385[16 * v121];
        v98 = v122 + 1;
      }
      else
      {
        v101 = v98++;
        v99 = (char *)&v100[2 * v101];
      }
    }
  }
  else
  {
    v434 = nullptr;
  }
  v423 = 1;
  while ( 2 )
  {
    v446 = 0;
    sub_1862300(&v446, "model", 1);
    v123 = sub_B00C00(*(_QWORD *)(v379 + 8), &v446, &qword_18D6CD0);
    v399 = (std::ios_base *)v123;
    if ( v123 )
      ++*(_DWORD *)(v123 + 48);
    if ( v447 )
    {
      v386 = 0;
      destd = (_BYTE)v436 + 8;
      while ( 1 )
      {
        v126 = v423;
        if ( v423 <= 9 )
        {
          src = &v463;
          v128 = 1;
          LOBYTE(v463) = 0;
          v129 = &v463;
LABEL_148:
          v139 = v126 + 48;
          goto LABEL_149;
        }
        v127 = 1;
        while ( 1 )
        {
          if ( v126 <= 0x63 )
          {
            ++v127;
            goto LABEL_137;
          }
          if ( v126 <= 0x3E7 )
          {
            v127 += 2;
            goto LABEL_137;
          }
          if ( v126 <= 0x270F )
            break;
          v127 += 4;
          if ( v126 <= 0x1869F )
            goto LABEL_137;
          v126 /= 0x2710u;
        }
        v127 += 3;
LABEL_137:
        src = &v463;
        v128 = v127;
        v129 = &v463;
        v462 = 0;
        LOBYTE(v463) = 0;
        if ( v127 > 0xF )
          break;
LABEL_145:
        v134 = v127 - 1;
        *(__m128i *)&v465[32] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
        *(__m128i *)v465 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
        v126 = v423;
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
        *(__m128i *)&v465[16] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
        v467 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
        v468 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
        v469 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
        v470 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
        v471 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
        v472 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
        v473 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
        v474[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
        *(__m128i *)((char *)v474 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
        if ( v423 > 0x63 )
        {
          do
          {
            v135 = v126 % 0x64;
            v136 = v126;
            v126 /= 0x64u;
            v137 = 2 * v135;
            *((_BYTE *)v129 + v134) = v465[(unsigned int)(v137 + 1)];
            v138 = v134 - 1;
            v134 -= 2;
            *((_BYTE *)v129 + v138) = v465[v137];
          }
          while ( v136 > 0x270F );
          if ( v136 <= 0x3E7 )
            goto LABEL_148;
        }
        v236 = 2 * v126;
        *((_BYTE *)v129 + 1) = v465[(unsigned int)(v236 + 1)];
        v139 = v465[v236];
LABEL_149:
        *(_BYTE *)v129 = v139;
        v462 = v128;
        *((_BYTE *)src + v128) = 0;
        v140 = v386;
        if ( v386 <= 9 )
        {
          v458 = v460;
          v142 = 1;
          LOBYTE(v460[0]) = 0;
          v143 = v460;
LABEL_168:
          v153 = v140 + 48;
          goto LABEL_169;
        }
        v141 = 1;
        while ( 1 )
        {
          if ( v140 <= 0x63 )
          {
            ++v141;
            goto LABEL_157;
          }
          if ( v140 <= 0x3E7 )
            break;
          if ( v140 <= 0x270F )
          {
            v141 += 3;
            goto LABEL_157;
          }
          v141 += 4;
          if ( v140 <= 0x1869F )
            goto LABEL_157;
          v140 /= 0x2710u;
        }
        v141 += 2;
LABEL_157:
        v458 = v460;
        v142 = v141;
        v143 = v460;
        n = 0;
        LOBYTE(v460[0]) = 0;
        if ( v141 > 0xF )
        {
          if ( v141 <= 0x1DuLL )
          {
            v145 = 30;
            v144 = 31;
          }
          else
          {
            v144 = v141 + 1LL;
            v145 = v141;
          }
          v146 = (_BYTE *)operator new(v144);
          v147 = v458;
          v143 = v146;
          if ( n )
          {
            if ( n == -1 || (v419 = (size_t *)v458, memcpy(v146, v458, n + 1), v147 = v419, v419 != v460) )
LABEL_163:
              operator delete(v147, v460[0] + 1LL);
          }
          else
          {
            *v146 = *(_BYTE *)v458;
            if ( v147 != v460 )
              goto LABEL_163;
          }
          v458 = v143;
          v460[0] = v145;
        }
        v148 = v141 - 1;
        *(__m128i *)&v465[32] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
        *(__m128i *)v465 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
        v140 = v386;
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
        *(__m128i *)&v465[16] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
        v467 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
        v468 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
        v469 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
        v470 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
        v471 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
        v472 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
        v473 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
        v474[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
        *(__m128i *)((char *)v474 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
        if ( v386 > 0x63 )
        {
          do
          {
            v149 = v140 % 0x64;
            v150 = v140;
            v140 /= 0x64u;
            v151 = 2 * v149;
            v143[v148] = v465[(unsigned int)(v151 + 1)];
            v152 = v148 - 1;
            v148 -= 2;
            v143[v152] = v465[v151];
          }
          while ( v150 > 0x270F );
          if ( v150 <= 0x3E7 )
            goto LABEL_168;
        }
        v237 = 2 * v140;
        v143[1] = v465[(unsigned int)(v237 + 1)];
        v153 = v465[v237];
LABEL_169:
        *v143 = v153;
        n = v142;
        *((_BYTE *)v458 + v142) = 0;
        v154 = n;
        if ( n == 0x7FFFFFFFFFFFFFFFLL || n == 9223372036854775806LL )
          std::__throw_length_error("basic_string::_M_replace");
        v155 = v458;
        v156 = n + 2;
        if ( v458 == v460 )
        {
          if ( v156 <= 0xF )
          {
LABEL_172:
            if ( "w_" >= v458 && (char *)v458 + n >= "w_" )
            {
              std::string::_M_replace_cold();
              v157 = (__int64)v458;
            }
            else
            {
              if ( n )
              {
                if ( n == 1 )
                  *((_BYTE *)v458 + 2) = *(_BYTE *)v458;
                else
                  memmove((char *)v458 + 2, v458, n);
              }
              *v155 = 24439;
              v157 = (__int64)v458;
            }
            goto LABEL_178;
          }
          v242 = 31;
          v241 = 30;
        }
        else
        {
          if ( v460[0] >= v156 )
            goto LABEL_172;
          if ( (v156 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v241 = 2LL * v460[0];
          if ( v156 < 2LL * v460[0] )
          {
            if ( (v460[0] & 0x4000000000000000LL) != 0 )
LABEL_356:
              std::__throw_bad_alloc();
            v242 = v241 + 1;
          }
          else
          {
            v242 = n + 3;
            if ( (__int64)(n + 3) < 0 )
              goto LABEL_356;
            v241 = n + 2;
          }
        }
        v157 = operator new(v242);
        v243 = (size_t *)v458;
        *(_WORD *)v157 = 24439;
        if ( v154 )
        {
          if ( v154 == 1 )
          {
            *(_BYTE *)(v157 + 2) = *(_BYTE *)v243;
          }
          else
          {
            v419 = v243;
            memcpy((void *)(v157 + 2), v243, v154);
            v243 = v419;
          }
        }
        if ( v243 != v460 )
          operator delete(v243, v460[0] + 1LL);
        v458 = (void *)v157;
        v460[0] = v241;
LABEL_178:
        n = v154 + 2;
        *(_BYTE *)(v157 + v154 + 2) = 0;
        v158 = v462;
        v159 = n;
        v160 = (size_t *)v458;
        *(_QWORD *)v465 = &v465[16];
        v161 = v462 + n;
        if ( v458 != v460 )
        {
          v162 = v460[0];
          *(_QWORD *)v465 = v458;
          v458 = v460;
          v163 = (size_t *)src;
          v164 = (__m128i)v460[0];
          LOBYTE(v460[0]) = 0;
          n = 0;
          *(__m128i *)&v465[8] = _mm_unpacklo_epi64((__m128i)v159, v164);
          if ( v160 == (size_t *)&v465[16] )
          {
            if ( v161 <= 0xF )
            {
              if ( 0x7FFFFFFFFFFFFFFFLL - v159 < v462 )
                goto LABEL_651;
              goto LABEL_305;
            }
            v162 = 15;
            if ( src != &v463 )
            {
LABEL_182:
              if ( v463 >= v161 )
                goto LABEL_312;
              if ( 0x7FFFFFFFFFFFFFFFLL - v159 < v158 )
                goto LABEL_651;
              if ( v160 == (size_t *)&v465[16] && v162 >= v161 )
                goto LABEL_305;
            }
          }
          else
          {
            if ( v162 >= v161 )
            {
              if ( 0x7FFFFFFFFFFFFFFFLL - v159 < v462 )
                goto LABEL_651;
LABEL_305:
              if ( v158 )
              {
                v244 = (char *)v160 + v159;
                if ( v158 == 1 )
                  *v244 = *(_BYTE *)v163;
                else
                  memcpy(v244, v163, v158);
                v160 = *(size_t **)v465;
              }
              goto LABEL_199;
            }
            if ( src != &v463 )
              goto LABEL_182;
            if ( v161 <= 0xF )
            {
LABEL_312:
              if ( 0x7FFFFFFFFFFFFFFFLL - v158 < v159 )
                std::__throw_length_error("basic_string::_M_replace");
              if ( v160 >= v163 )
              {
                if ( (size_t *)((char *)v163 + v158) >= v160 )
                {
                  std::string::_M_replace_cold();
                  v163 = (size_t *)src;
                }
                else
                {
                  if ( !v158 )
                    goto LABEL_359;
LABEL_315:
                  if ( v159 )
                  {
                    v245 = (char *)v163 + v159;
                    if ( v158 == 1 )
                    {
                      *v245 = *(_BYTE *)v163;
                    }
                    else
                    {
                      v425 = (size_t *)v159;
                      v419 = v160;
                      memmove(v245, v163, v158);
                      v160 = v419;
                      v159 = (unsigned __int64)v425;
                    }
                    goto LABEL_318;
                  }
                }
              }
              else
              {
                if ( v158 )
                  goto LABEL_315;
LABEL_359:
                if ( v159 )
                {
LABEL_318:
                  if ( v159 == 1 )
                    *(_BYTE *)v163 = *(_BYTE *)v160;
                  else
                    memcpy(v163, v160, v159);
                  v163 = (size_t *)src;
                }
              }
              v462 = v161;
              *((_BYTE *)v163 + v161) = 0;
              v455 = v457;
              v246 = v462;
              if ( src == &v463 )
              {
                v321 = v462 + 1;
                v322 = v457;
                v323 = &v463;
                if ( (unsigned int)(v462 + 1) >= 8 )
                {
                  LODWORD(v331) = 0;
                  do
                  {
                    v332 = (unsigned int)v331;
                    v331 = (unsigned int)(v331 + 8);
                    *(_QWORD *)((char *)v457 + v332) = *(size_t *)((char *)&v463 + v332);
                  }
                  while ( (unsigned int)v331 < (v321 & 0xFFFFFFF8) );
                  v322 = (_DWORD *)((char *)v457 + v331);
                  v323 = (size_t *)((char *)&v463 + v331);
                }
                v324 = 0;
                if ( (v321 & 4) != 0 )
                {
                  *v322 = *(_DWORD *)v323;
                  v324 = 4;
                }
                if ( (v321 & 2) != 0 )
                {
                  *(_WORD *)((char *)v322 + v324) = *(_WORD *)((char *)v323 + v324);
                  v324 += 2;
                }
                if ( (v321 & 1) != 0 )
                  *((_BYTE *)v322 + v324) = *((_BYTE *)v323 + v324);
              }
              else
              {
                v455 = src;
                v457[0] = v463;
              }
              v456 = v246;
              src = &v463;
              v462 = 0;
              LOBYTE(v463) = 0;
              if ( *(_BYTE **)v465 != &v465[16] )
                operator delete(*(void **)v465, *(_QWORD *)&v465[16] + 1LL);
              goto LABEL_202;
            }
            if ( 0x7FFFFFFFFFFFFFFFLL - v159 < v462 )
              goto LABEL_651;
          }
          if ( (v161 & 0x8000000000000000LL) != 0LL )
            goto LABEL_664;
          v165 = 2 * v162;
          v419 = (size_t *)v165;
          if ( v161 >= v165 )
            goto LABEL_187;
          if ( v165 < 0 )
LABEL_562:
            std::__throw_bad_alloc();
          goto LABEL_353;
        }
        v247 = n + 1;
        v248 = &v465[16];
        v249 = v460;
        if ( (unsigned int)(n + 1) >= 8 )
        {
          LODWORD(v251) = 0;
          do
          {
            v252 = (unsigned int)v251;
            v251 = (unsigned int)(v251 + 8);
            *(_QWORD *)&v465[v252 + 16] = *(_QWORD *)((char *)v460 + v252);
          }
          while ( (unsigned int)v251 < (v247 & 0xFFFFFFF8) );
          v248 = &v465[v251 + 16];
          v249 = (_DWORD *)((char *)v460 + v251);
        }
        v250 = 0;
        if ( (v247 & 4) != 0 )
        {
          *(_DWORD *)v248 = *v249;
          v250 = 4;
        }
        if ( (v247 & 2) != 0 )
        {
          *(_WORD *)&v248[v250] = *(_WORD *)((char *)v249 + v250);
          v250 += 2;
        }
        if ( (v247 & 1) != 0 )
          v248[v250] = *((_BYTE *)v249 + v250);
        *(_QWORD *)&v465[8] = v159;
        v163 = (size_t *)src;
        v458 = v460;
        n = 0;
        LOBYTE(v460[0]) = 0;
        if ( v161 <= 0xF )
        {
          if ( 0x7FFFFFFFFFFFFFFFLL - v159 < v158 )
LABEL_651:
            std::__throw_length_error("basic_string::append");
          v160 = (size_t *)&v465[16];
          goto LABEL_305;
        }
        if ( src != &v463 )
        {
          v160 = (size_t *)&v465[16];
          v162 = 15;
          goto LABEL_182;
        }
        if ( (v161 & 0x8000000000000000LL) != 0LL )
LABEL_664:
          std::__throw_length_error("basic_string::_M_create");
        if ( v161 > 0x1D )
        {
LABEL_187:
          v166 = v161 + 1;
          if ( (__int64)(v161 + 1) < 0 )
            goto LABEL_562;
          v419 = (size_t *)v161;
          goto LABEL_189;
        }
        v419 = (size_t *)(&qword_18 + 6);
LABEL_353:
        v166 = (unsigned __int64)v419 + 1;
LABEL_189:
        v427 = v159;
        v425 = (size_t *)v158;
        v167 = (size_t *)operator new(v166);
        v168 = v427;
        v169 = *(_BYTE **)v465;
        v160 = v167;
        v170 = (size_t)v425;
        if ( v427 )
        {
          if ( v427 == 1 )
          {
            *(_BYTE *)v167 = **(_BYTE **)v465;
          }
          else
          {
            v171 = v427;
            v428 = (size_t)v425;
            v425 = (size_t *)v168;
            v172 = (size_t *)memcpy(v167, *(const void **)v465, v171);
            v170 = v428;
            v168 = (size_t)v425;
            v160 = v172;
          }
        }
        if ( v163 && v170 )
        {
          v173 = (char *)v160 + v168;
          if ( v170 == 1 )
          {
            *v173 = *(_BYTE *)v163;
          }
          else
          {
            v425 = v160;
            memcpy(v173, v163, v170);
            v160 = v425;
          }
        }
        if ( v169 != &v465[16] )
        {
          v425 = v160;
          operator delete(v169, *(_QWORD *)&v465[16] + 1LL);
          v160 = v425;
        }
        *(_QWORD *)v465 = v160;
        *(_QWORD *)&v465[16] = v419;
LABEL_199:
        *(_QWORD *)&v465[8] = v161;
        *((_BYTE *)v160 + v161) = 0;
        v455 = v457;
        v174 = *(_QWORD *)&v465[8];
        if ( *(_BYTE **)v465 == &v465[16] )
        {
          v259 = *(_DWORD *)&v465[8] + 1;
          v260 = v457;
          v261 = &v465[16];
          if ( (unsigned int)(*(_DWORD *)&v465[8] + 1) >= 8 )
          {
            LODWORD(v329) = 0;
            do
            {
              v330 = (unsigned int)v329;
              v329 = (unsigned int)(v329 + 8);
              *(_QWORD *)((char *)v457 + v330) = *(_QWORD *)&v465[v330 + 16];
            }
            while ( (unsigned int)v329 < (v259 & 0xFFFFFFF8) );
            v260 = (_DWORD *)((char *)v457 + v329);
            v261 = &v465[v329 + 16];
          }
          v262 = 0;
          if ( (v259 & 4) != 0 )
          {
            *v260 = *(_DWORD *)v261;
            v262 = 4;
          }
          if ( (v259 & 2) != 0 )
          {
            *(_WORD *)((char *)v260 + v262) = *(_WORD *)&v261[v262];
            v262 += 2;
          }
          if ( (v259 & 1) != 0 )
            *((_BYTE *)v260 + v262) = v261[v262];
        }
        else
        {
          v455 = *(void **)v465;
          v457[0] = *(_QWORD *)&v465[16];
        }
        v456 = v174;
LABEL_202:
        if ( v458 != v460 )
          operator delete(v458, v460[0] + 1LL);
        if ( src != &v463 )
          operator delete(src, v463 + 1);
        v175 = *(_QWORD *)(v379 + 8);
        v176 = sub_15D2CD0(*(_QWORD *)v450, 5, 1, 0, 0);
        sub_180C5A0(&v458, v455);
        v177 = sub_15E3510(v175, &v458, 0, 0, v176, 0);
        v180 = sub_15DC610(
                 v175,
                 v177,
                 0,
                 0,
                 v178,
                 v179,
                 v373,
                 (int)ptrb,
                 v379,
                 v386,
                 (int)v399,
                 destd,
                 (int)v419,
                 v421,
                 v423,
                 v425);
        v181 = v180;
        if ( v180 )
          ++*(_DWORD *)(v180 + 8);
        v182 = (_QWORD *)*deste;
        if ( *deste )
        {
          v183 = *((_DWORD *)v182 - 1);
          if ( v183 == *((_DWORD *)v182 - 2) )
          {
            v238 = (3 * v183 + 1) >> 1;
            v239 = 8 * v238 + 8;
            if ( 8 * v183 + 8 >= v239 || v183 >= v238 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v465, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v465);
              sub_233E40((__int64)v465);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v240 = (unsigned int *)sub_186B300(v182 - 1, v239);
            v182 = v240 + 2;
            *v240 = v238;
            *deste = v240 + 2;
            LODWORD(v240) = v240[1];
            v186 = &v182[(unsigned int)v240];
            v185 = (_DWORD)v240 + 1;
          }
          else
          {
            v184 = v183;
            v185 = v183 + 1;
            v186 = &v182[v184];
          }
        }
        else
        {
          v300 = (_QWORD *)sub_186B270(0x18u);
          *v300 = 2;
          v182 = v300 + 1;
          v185 = 1;
          *deste = v182;
          v186 = v182;
        }
        v187 = v455;
        *v186 = v181;
        *((_DWORD *)v182 - 1) = v185;
        if ( v187 != v457 )
          operator delete(v187, v457[0] + 1LL);
        v386 = v387 + 1;
        destd = (_BYTE)deste + 16;
        if ( v386 >= v447 )
          goto LABEL_214;
      }
      if ( v127 <= 0x1DuLL )
      {
        v131 = 30;
        v130 = 31;
      }
      else
      {
        v130 = v127 + 1LL;
        v131 = v127;
      }
      v132 = (size_t *)operator new(v130);
      v133 = (size_t *)src;
      v129 = v132;
      if ( v462 )
      {
        if ( v462 == -1 || (v419 = (size_t *)src, memcpy(v132, src, v462 + 1), v133 = v419, v419 != &v463) )
LABEL_143:
          operator delete(v133, v463 + 1);
      }
      else
      {
        *(_BYTE *)v132 = *(_BYTE *)src;
        if ( v133 != &v463 )
          goto LABEL_143;
      }
      src = v129;
      v463 = v131;
      goto LABEL_145;
    }
LABEL_214:
    v188 = v448;
    if ( v448 )
    {
      v388 = 0;
      LODWORD(v419) = (_DWORD)v434 + 8;
      while ( 1 )
      {
        v189 = v423;
        if ( v423 <= 9 )
        {
          src = &v463;
          v191 = 1;
          LOBYTE(v463) = 0;
          v192 = &v463;
LABEL_235:
          v201 = v189 + 48;
          goto LABEL_236;
        }
        v190 = 1;
        while ( 1 )
        {
          if ( v189 <= 0x63 )
          {
            ++v190;
            goto LABEL_224;
          }
          if ( v189 <= 0x3E7 )
            break;
          if ( v189 <= 0x270F )
          {
            v190 += 3;
            goto LABEL_224;
          }
          v190 += 4;
          if ( v189 <= 0x1869F )
            goto LABEL_224;
          v189 /= 0x2710u;
        }
        v190 += 2;
LABEL_224:
        src = &v463;
        v191 = v190;
        v192 = &v463;
        v462 = 0;
        LOBYTE(v463) = 0;
        if ( v190 > 0xF )
          break;
LABEL_232:
        v196 = v190 - 1;
        *(__m128i *)&v465[32] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
        *(__m128i *)v465 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
        v189 = v423;
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
        *(__m128i *)&v465[16] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
        v467 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
        v468 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
        v469 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
        v470 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
        v471 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
        v472 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
        v473 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
        v474[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
        *(__m128i *)((char *)v474 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
        if ( v423 > 0x63 )
        {
          do
          {
            v197 = v189 % 0x64;
            v198 = v189;
            v189 /= 0x64u;
            v199 = 2 * v197;
            *((_BYTE *)v192 + v196) = v465[(unsigned int)(v199 + 1)];
            v200 = v196 - 1;
            v196 -= 2;
            *((_BYTE *)v192 + v200) = v465[v199];
          }
          while ( v198 > 0x270F );
          if ( v198 <= 0x3E7 )
            goto LABEL_235;
        }
        v253 = 2 * v189;
        *((_BYTE *)v192 + 1) = v465[(unsigned int)(v253 + 1)];
        v201 = v465[v253];
LABEL_236:
        *(_BYTE *)v192 = v201;
        v462 = v191;
        *((_BYTE *)src + v191) = 0;
        v202 = v388;
        if ( v388 <= 9 )
        {
          v458 = v460;
          v204 = 1;
          LOBYTE(v460[0]) = 0;
          v205 = v460;
LABEL_255:
          v214 = v202 + 48;
          goto LABEL_256;
        }
        v203 = 1;
        while ( 1 )
        {
          if ( v202 <= 0x63 )
          {
            ++v203;
            goto LABEL_244;
          }
          if ( v202 <= 0x3E7 )
          {
            v203 += 2;
            goto LABEL_244;
          }
          if ( v202 <= 0x270F )
            break;
          v203 += 4;
          if ( v202 <= 0x1869F )
            goto LABEL_244;
          v202 /= 0x2710u;
        }
        v203 += 3;
LABEL_244:
        v458 = v460;
        v204 = v203;
        v205 = v460;
        n = 0;
        LOBYTE(v460[0]) = 0;
        if ( v203 > 0xF )
        {
          if ( v203 <= 0x1DuLL )
          {
            destg = 30;
            v206 = 31;
          }
          else
          {
            destg = v203;
            v206 = v203 + 1LL;
          }
          v207 = (_BYTE *)operator new(v206);
          v208 = v458;
          v205 = v207;
          if ( n )
          {
            if ( n == -1 || (v425 = (size_t *)v458, memcpy(v207, v458, n + 1), v208 = v425, v425 != v460) )
LABEL_250:
              operator delete(v208, v460[0] + 1LL);
          }
          else
          {
            *v207 = *(_BYTE *)v458;
            if ( v208 != v460 )
              goto LABEL_250;
          }
          v458 = v205;
          v460[0] = destg;
        }
        v209 = v203 - 1;
        *(__m128i *)&v465[32] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
        *(__m128i *)v465 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
        v202 = v388;
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B6400);
        *(__m128i *)&v465[16] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
        v467 = _mm_load_si128((const __m128i *)&xmmword_18B6410);
        v468 = _mm_load_si128((const __m128i *)&xmmword_18B6420);
        v469 = _mm_load_si128((const __m128i *)&xmmword_18B6430);
        v470 = _mm_load_si128((const __m128i *)&xmmword_18B6440);
        v471 = _mm_load_si128((const __m128i *)&xmmword_18B6450);
        v472 = _mm_load_si128((const __m128i *)&xmmword_18B6460);
        v473 = _mm_load_si128((const __m128i *)&xmmword_18B6470);
        v474[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
        *(__m128i *)((char *)v474 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
        if ( v388 > 0x63 )
        {
          do
          {
            v210 = v202 % 0x64;
            v211 = v202;
            v202 /= 0x64u;
            v212 = 2 * v210;
            v205[v209] = v465[(unsigned int)(v212 + 1)];
            v213 = v209 - 1;
            v209 -= 2;
            v205[v213] = v465[v212];
          }
          while ( v211 > 0x270F );
          if ( v211 <= 0x3E7 )
            goto LABEL_255;
        }
        v254 = 2 * v202;
        v205[1] = v465[(unsigned int)(v254 + 1)];
        v214 = v465[v254];
LABEL_256:
        *v205 = v214;
        n = v204;
        *((_BYTE *)v458 + v204) = 0;
        v215 = n;
        if ( n == 0x7FFFFFFFFFFFFFFFLL || n == 9223372036854775806LL )
          std::__throw_length_error("basic_string::_M_replace");
        v216 = v458;
        v217 = n + 2;
        if ( v458 == v460 )
        {
          v256 = 31;
          v255 = 30;
          if ( v217 <= 0xF )
          {
LABEL_259:
            if ( "s_" >= v458 && (char *)v458 + n >= "s_" )
            {
              std::string::_M_replace_cold();
              v218 = (__int64)v458;
            }
            else
            {
              if ( n )
              {
                if ( n == 1 )
                {
                  *((_BYTE *)v458 + 2) = *(_BYTE *)v458;
                }
                else
                {
                  destk = v458;
                  memmove((char *)v458 + 2, v458, n);
                  v216 = destk;
                }
              }
              *v216 = 24435;
              v218 = (__int64)v458;
            }
            goto LABEL_265;
          }
        }
        else
        {
          if ( v460[0] >= v217 )
            goto LABEL_259;
          if ( (v217 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v255 = 2LL * v460[0];
          if ( v217 < 2LL * v460[0] )
          {
            if ( (v460[0] & 0x4000000000000000LL) != 0 )
LABEL_542:
              std::__throw_bad_alloc();
            v256 = v255 + 1;
          }
          else
          {
            v256 = n + 3;
            if ( (__int64)(n + 3) < 0 )
              goto LABEL_542;
            v255 = n + 2;
          }
        }
        desti = (size_t *)v255;
        v218 = operator new(v256);
        v257 = v458;
        *(_WORD *)v218 = 24435;
        v258 = desti;
        if ( v215 )
        {
          if ( v215 == 1 )
          {
            *(_BYTE *)(v218 + 2) = *v257;
          }
          else
          {
            v425 = desti;
            destl = v257;
            memcpy((void *)(v218 + 2), v257, v215);
            v258 = v425;
            v257 = destl;
          }
        }
        if ( v257 != (_BYTE *)v460 )
        {
          destm = v258;
          operator delete(v257, v460[0] + 1LL);
          v258 = destm;
        }
        v458 = (void *)v218;
        v460[0] = v258;
LABEL_265:
        n = v215 + 2;
        *(_BYTE *)(v218 + v215 + 2) = 0;
        v219 = v462;
        v220 = n;
        v221 = (size_t *)v458;
        *(_QWORD *)v465 = &v465[16];
        v222 = v462 + n;
        if ( v458 == v460 )
        {
          v296 = n + 1;
          v297 = &v465[16];
          v298 = v460;
          if ( (unsigned int)(n + 1) >= 8 )
          {
            LODWORD(v333) = 0;
            do
            {
              v334 = (unsigned int)v333;
              v333 = (unsigned int)(v333 + 8);
              *(_QWORD *)&v465[v334 + 16] = *(_QWORD *)((char *)v460 + v334);
            }
            while ( (unsigned int)v333 < (v296 & 0xFFFFFFF8) );
            v297 = &v465[v333 + 16];
            v298 = (_DWORD *)((char *)v460 + v333);
          }
          v299 = 0;
          if ( (v296 & 4) != 0 )
          {
            *(_DWORD *)v297 = *v298;
            v299 = 4;
          }
          if ( (v296 & 2) != 0 )
          {
            *(_WORD *)&v297[v299] = *(_WORD *)((char *)v298 + v299);
            v299 += 2;
          }
          if ( (v296 & 1) != 0 )
            v297[v299] = *((_BYTE *)v298 + v299);
          *(_QWORD *)&v465[8] = v220;
          v224 = (size_t *)src;
          v458 = v460;
          n = 0;
          LOBYTE(v460[0]) = 0;
          if ( v222 <= 0xF )
          {
            if ( 0x7FFFFFFFFFFFFFFFLL - v220 < v219 )
LABEL_656:
              std::__throw_length_error("basic_string::append");
            v221 = (size_t *)&v465[16];
            goto LABEL_386;
          }
          if ( src != &v463 )
          {
            v221 = (size_t *)&v465[16];
LABEL_456:
            v223 = 15;
LABEL_269:
            if ( v463 >= v222 )
              goto LABEL_435;
            if ( 0x7FFFFFFFFFFFFFFFLL - v220 < v219 )
              goto LABEL_656;
            if ( v221 == (size_t *)&v465[16] && v223 >= v222 )
              goto LABEL_386;
LABEL_272:
            if ( (v222 & 0x8000000000000000LL) != 0LL )
              goto LABEL_655;
            v226 = 2 * v223;
            desth = (void *)v226;
            if ( v222 >= v226 )
              goto LABEL_274;
            if ( v226 < 0 )
LABEL_644:
              std::__throw_bad_alloc();
            goto LABEL_546;
          }
        }
        else
        {
          v223 = v460[0];
          *(_QWORD *)v465 = v458;
          v458 = v460;
          v224 = (size_t *)src;
          v225 = (__m128i)v460[0];
          LOBYTE(v460[0]) = 0;
          n = 0;
          *(__m128i *)&v465[8] = _mm_unpacklo_epi64((__m128i)v220, v225);
          if ( v221 != (size_t *)&v465[16] )
          {
            if ( v223 >= v222 )
            {
              if ( 0x7FFFFFFFFFFFFFFFLL - v220 < v462 )
                goto LABEL_656;
LABEL_386:
              if ( v219 )
              {
                v263 = (char *)v221 + v220;
                if ( v219 == 1 )
                  *v263 = *(_BYTE *)v224;
                else
                  memcpy(v263, v224, v219);
                v221 = *(size_t **)v465;
              }
              goto LABEL_390;
            }
            if ( src != &v463 )
              goto LABEL_269;
            if ( v222 <= 0xF )
            {
LABEL_435:
              if ( 0x7FFFFFFFFFFFFFFFLL - v219 < v220 )
                std::__throw_length_error("basic_string::_M_replace");
              if ( v221 >= v224 && (size_t *)((char *)v224 + v219) >= v221 )
              {
                std::string::_M_replace_cold();
                v224 = (size_t *)src;
                goto LABEL_444;
              }
              if ( v219 )
              {
                if ( !v220 )
                {
LABEL_444:
                  v462 = v222;
                  *((_BYTE *)v224 + v222) = 0;
                  v455 = v457;
                  v295 = v462;
                  if ( src == &v463 )
                  {
                    v338 = v462 + 1;
                    v339 = v457;
                    v340 = &v463;
                    if ( (unsigned int)(v462 + 1) >= 8 )
                    {
                      LODWORD(v342) = 0;
                      do
                      {
                        v343 = (unsigned int)v342;
                        v342 = (unsigned int)(v342 + 8);
                        *(_QWORD *)((char *)v457 + v343) = *(size_t *)((char *)&v463 + v343);
                      }
                      while ( (unsigned int)v342 < (v338 & 0xFFFFFFF8) );
                      v339 = (_DWORD *)((char *)v457 + v342);
                      v340 = (size_t *)((char *)&v463 + v342);
                    }
                    v341 = 0;
                    if ( (v338 & 4) != 0 )
                    {
                      *v339 = *(_DWORD *)v340;
                      v341 = 4;
                    }
                    if ( (v338 & 2) != 0 )
                    {
                      *(_WORD *)((char *)v339 + v341) = *(_WORD *)((char *)v340 + v341);
                      v341 += 2;
                    }
                    if ( (v338 & 1) != 0 )
                      *((_BYTE *)v339 + v341) = *((_BYTE *)v340 + v341);
                  }
                  else
                  {
                    v455 = src;
                    v457[0] = v463;
                  }
                  v456 = v295;
                  src = &v463;
                  v462 = 0;
                  LOBYTE(v463) = 0;
                  if ( *(_BYTE **)v465 != &v465[16] )
                    operator delete(*(void **)v465, *(_QWORD *)&v465[16] + 1LL);
                  goto LABEL_393;
                }
                v294 = (char *)v224 + v220;
                if ( v219 == 1 )
                {
                  *v294 = *(_BYTE *)v224;
                }
                else
                {
                  v432 = v220;
                  v425 = v221;
                  destr = v224;
                  memmove(v294, v224, v219);
                  v224 = destr;
                  v221 = v425;
                  v220 = v432;
                }
              }
              else if ( !v220 )
              {
                goto LABEL_444;
              }
              if ( v220 == 1 )
                *(_BYTE *)v224 = *(_BYTE *)v221;
              else
                memcpy(v224, v221, v220);
              v224 = (size_t *)src;
              goto LABEL_444;
            }
            if ( 0x7FFFFFFFFFFFFFFFLL - v220 < v462 )
              goto LABEL_656;
            goto LABEL_272;
          }
          if ( v222 <= 0xF )
          {
            if ( 0x7FFFFFFFFFFFFFFFLL - v220 < v462 )
              goto LABEL_656;
            goto LABEL_386;
          }
          if ( src != &v463 )
            goto LABEL_456;
        }
        if ( (v222 & 0x8000000000000000LL) != 0LL )
LABEL_655:
          std::__throw_length_error("basic_string::_M_create");
        v224 = &v463;
        if ( v222 > 0x1D )
        {
LABEL_274:
          v227 = v222 + 1;
          if ( (__int64)(v222 + 1) < 0 )
            goto LABEL_644;
          desth = (void *)v222;
          goto LABEL_276;
        }
        desth = &qword_18 + 6;
LABEL_546:
        v227 = (unsigned __int64)desth + 1;
LABEL_276:
        v438 = v220;
        v429 = v219;
        v425 = v224;
        v228 = (size_t *)operator new(v227);
        v229 = v438;
        v230 = *(_BYTE **)v465;
        v221 = v228;
        v231 = v425;
        v232 = v429;
        if ( v438 )
        {
          if ( v438 == 1 )
          {
            *(_BYTE *)v228 = **(_BYTE **)v465;
          }
          else
          {
            v233 = v438;
            v439 = v429;
            v430 = (size_t)v425;
            v425 = (size_t *)v229;
            v234 = (size_t *)memcpy(v228, *(const void **)v465, v233);
            v232 = v439;
            v231 = (_BYTE *)v430;
            v229 = (size_t)v425;
            v221 = v234;
          }
        }
        if ( v231 && v232 )
        {
          v235 = (char *)v221 + v229;
          if ( v232 == 1 )
          {
            *v235 = *v231;
          }
          else
          {
            v425 = v221;
            memcpy(v235, v231, v232);
            v221 = v425;
          }
        }
        if ( v230 != &v465[16] )
        {
          v425 = v221;
          operator delete(v230, *(_QWORD *)&v465[16] + 1LL);
          v221 = v425;
        }
        *(_QWORD *)v465 = v221;
        *(_QWORD *)&v465[16] = desth;
LABEL_390:
        *(_QWORD *)&v465[8] = v222;
        *((_BYTE *)v221 + v222) = 0;
        v455 = v457;
        v264 = *(_QWORD *)&v465[8];
        if ( *(_BYTE **)v465 == &v465[16] )
        {
          v325 = *(_DWORD *)&v465[8] + 1;
          v326 = v457;
          v327 = &v465[16];
          if ( (unsigned int)(*(_DWORD *)&v465[8] + 1) >= 8 )
          {
            LODWORD(v336) = 0;
            do
            {
              v337 = (unsigned int)v336;
              v336 = (unsigned int)(v336 + 8);
              *(_QWORD *)((char *)v457 + v337) = *(_QWORD *)&v465[v337 + 16];
            }
            while ( (unsigned int)v336 < (v325 & 0xFFFFFFF8) );
            v326 = (_DWORD *)((char *)v457 + v336);
            v327 = &v465[v336 + 16];
          }
          v328 = 0;
          if ( (v325 & 4) != 0 )
          {
            *v326 = *(_DWORD *)v327;
            v328 = 4;
          }
          if ( (v325 & 2) != 0 )
          {
            *(_WORD *)((char *)v326 + v328) = *(_WORD *)&v327[v328];
            v328 += 2;
          }
          if ( (v325 & 1) != 0 )
            *((_BYTE *)v326 + v328) = v327[v328];
        }
        else
        {
          v455 = *(void **)v465;
          v457[0] = *(_QWORD *)&v465[16];
        }
        v456 = v264;
LABEL_393:
        if ( v458 != v460 )
          operator delete(v458, v460[0] + 1LL);
        if ( src != &v463 )
          operator delete(src, v463 + 1);
        v265 = *(_QWORD *)(v379 + 8);
        destn = (void *)sub_15D2CD0(*(_QWORD *)v450, 5, 1, 0, 0);
        sub_180C5A0(&src, v455);
        v266 = sub_15E3510(v265, &src, 0, 0, destn, 0);
        v269 = sub_15DC610(
                 v265,
                 v266,
                 0,
                 0,
                 v267,
                 v268,
                 v373,
                 (int)ptrb,
                 v379,
                 v388,
                 (int)v399,
                 (char)destn,
                 (int)v419,
                 v421,
                 v423,
                 v425);
        v270 = v269;
        if ( v269 )
          ++*(_DWORD *)(v269 + 8);
        v271 = (_QWORD *)*v419;
        if ( *v419 )
        {
          v272 = *((_DWORD *)v271 - 1);
          if ( v272 == *((_DWORD *)v271 - 2) )
          {
            v291 = (3 * v272 + 1) >> 1;
            v292 = 8 * v291 + 8;
            if ( 8 * v272 + 8 >= (unsigned int)v292 || v272 >= v291 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v465, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v465);
              sub_233E40((__int64)v465);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            destq = (3 * v272 + 1) >> 1;
            v293 = (unsigned int *)sub_186B300(v271 - 1, v292);
            v271 = v293 + 2;
            *v419 = (size_t)(v293 + 2);
            *v293 = destq;
            LODWORD(v293) = v293[1];
            v275 = &v271[(unsigned int)v293];
            v274 = (_DWORD)v293 + 1;
          }
          else
          {
            v273 = v272;
            v274 = v272 + 1;
            v275 = &v271[v273];
          }
        }
        else
        {
          v335 = (_QWORD *)sub_186B270(0x18u);
          *v335 = 2;
          v271 = v335 + 1;
          v274 = 1;
          *v419 = (size_t)v271;
          v275 = v271;
        }
        v276 = v455;
        *v275 = v270;
        *((_DWORD *)v271 - 1) = v274;
        if ( v276 != v457 )
          operator delete(v276, v457[0] + 1LL);
        v388 = v389 + 1;
        v188 = v448;
        LODWORD(v419) = (_DWORD)v419 + 16;
        if ( v388 >= v448 )
          goto LABEL_405;
      }
      if ( v190 <= 0x1DuLL )
      {
        destf = 30;
        v193 = 31;
      }
      else
      {
        destf = v190;
        v193 = v190 + 1LL;
      }
      v194 = (size_t *)operator new(v193);
      v195 = (size_t *)src;
      v192 = v194;
      if ( v462 )
      {
        if ( v462 == -1 || (v425 = (size_t *)src, memcpy(v194, src, v462 + 1), v195 = v425, v425 != &v463) )
LABEL_230:
          operator delete(v195, v463 + 1);
      }
      else
      {
        *(_BYTE *)v194 = *(_BYTE *)src;
        if ( v195 != &v463 )
          goto LABEL_230;
      }
      src = v192;
      v463 = destf;
      goto LABEL_232;
    }
LABEL_405:
    v442 = 0;
    v277 = v423 - 1;
    if ( v423 )
    {
      while ( v188 )
      {
        v390 = 0;
        v278 = v434 + 1;
        do
        {
          *(_QWORD *)v465 = 0;
          *(_QWORD *)&v465[8] = 0;
          *(_OWORD *)&v465[16] = 1u;
          v425 = *(size_t **)(v379 + 8);
          sub_182CBA0(qword_1C7F2C0, &v465[16]);
          v282 = v451;
          v465[20] &= ~1u;
          *(_DWORD *)&v465[16] = 1;
          if ( !v451 )
          {
            sub_16669E0(v450);
            v282 = v451;
          }
          sub_166A700(v282, (unsigned int)v465, 1, v279, v280, v281);
          desto = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v465);
          sub_182CBA0(desto, &v465[16]);
          v283 = sub_15E1B70(v450[0]);
          v284 = v283;
          if ( v283 )
            ++*(_DWORD *)(v283 + 8);
          *(_QWORD *)v465 = 1;
          *(_QWORD *)&v465[8] = 0;
          *(_OWORD *)&v465[16] = 1u;
          v431 = *(_QWORD *)(v379 + 8);
          sub_182CBA0(qword_1C7F2C0, &v465[16]);
          v288 = v451;
          v465[20] &= ~1u;
          *(_DWORD *)&v465[16] = 1;
          if ( !v451 )
          {
            sub_16669E0(v450);
            v288 = v451;
          }
          LODWORD(v419) = sub_166A700(v288, (unsigned int)v465, 1, v285, v286, v287);
          destp = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v465);
          sub_182CBA0(destp, &v465[16]);
          v289 = sub_15E1B70(v450[0]);
          v290 = v289;
          if ( v289 )
          {
            ++*(_DWORD *)(v289 + 8);
            sub_E5EBF0(v399, v284);
            sub_E5EBF0(v399, v290);
            v93 = (*(_DWORD *)(v290 + 8))-- == 1;
            if ( v93 )
              sub_15D7BC0(v431, v290);
          }
          else
          {
            sub_E5EBF0(v399, v284);
            sub_E5EBF0(v399, 0);
          }
          if ( v284 )
          {
            v93 = (*(_DWORD *)(v284 + 8))-- == 1;
            if ( v93 )
              sub_15D7BC0(v425, v284);
          }
          ++v390;
          v188 = v448;
          v278 += 2;
          v277 = v390;
        }
        while ( v390 < v448 );
        if ( v423 - 1 == v442 )
          break;
        ++v442;
      }
    }
    if ( v447 )
    {
      v443 = 0;
      v301 = (char *)v436 + 8;
      v302 = 8LL * v423;
      while ( v188 )
      {
        v391 = nullptr;
        v303 = v434 + 1;
        do
        {
          v304 = v451;
          v440 = *(_QWORD *)(v379 + 8);
          v305 = v449[v443] + 32LL * (_QWORD)v391;
          if ( !v451 )
          {
            sub_16669E0(v450);
            v304 = v451;
          }
          v306 = sub_166A700(v304, v305, 1, v277, v124, v125);
          destj = (_DWORD *)v306;
          if ( v306 )
            ++*(_DWORD *)(v306 + 8);
          *(_QWORD *)v465 = 0;
          *(_QWORD *)&v465[8] = 0;
          v307 = *(size_t **)(v379 + 8);
          *(_OWORD *)&v465[16] = 1u;
          v419 = v307;
          sub_182CBA0(qword_1C7F2C0, &v465[16]);
          v311 = v451;
          v465[20] &= ~1u;
          *(_DWORD *)&v465[16] = 1;
          if ( !v451 )
          {
            sub_16669E0(v450);
            v311 = v451;
          }
          v425 = (size_t *)v465;
          v312 = sub_166A700(v311, (unsigned int)v465, 1, v308, v309, v310);
          v313 = qword_1C7F2C0;
          v314 = v312;
          sub_182CBA0(qword_1C7F2C0, v465);
          sub_182CBA0(v313, &v465[16]);
          if ( v314 )
            ++*(_DWORD *)(v314 + 8);
          if ( v423 )
          {
            v315 = 0;
            while ( 1 )
            {
              sub_15E1B70(v450[0]);
              v316 = sub_15E1B70(v450[0]);
              v317 = v316;
              if ( v316 )
                ++*(_DWORD *)(v316 + 8);
              if ( v314 && (v93 = *(_DWORD *)(v314 + 8) == 1, --*(_DWORD *)(v314 + 8), v93) )
              {
                sub_15D7BC0(v419, v314);
                v315 += 8;
                if ( v315 == v302 )
                  goto LABEL_490;
              }
              else
              {
                v315 += 8;
                if ( v315 == v302 )
                  goto LABEL_490;
              }
              v314 = v317;
            }
          }
          v317 = v314;
LABEL_490:
          v318 = *(_QWORD *)(v379 + 8);
          v319 = sub_15E1B70(v318);
          v320 = v319;
          if ( v319 )
          {
            ++*(_DWORD *)(v319 + 8);
            sub_E5EBF0(v399, v319);
            v93 = (*(_DWORD *)(v320 + 8))-- == 1;
            if ( v93 )
              sub_15D7BC0(v318, v320);
          }
          else
          {
            sub_E5EBF0(v399, 0);
          }
          if ( v317 )
          {
            v93 = (*(_DWORD *)(v317 + 8))-- == 1;
            if ( v93 )
              sub_15D7BC0(v419, v317);
          }
          if ( destj )
          {
            LODWORD(v419) = destj[2];
            destj[2] = (_DWORD)v419 - 1;
            if ( (_DWORD)v419 == 1 )
              sub_15D7BC0(v440, destj);
          }
          v391 = (char *)v391 + 1;
          v188 = v448;
          v303 += 2;
        }
        while ( (unsigned int)v391 < v448 );
        if ( (int)v443 + 1 >= (unsigned int)v447 )
          break;
        v301 += 16;
        ++v443;
      }
    }
    if ( (unsigned int)sub_E60CB0(v399, 0, 0) != 1 )
    {
      v392 = *((_DWORD *)v399 + 12);
      *((_DWORD *)v399 + 12) = v392 - 1;
      if ( v392 == 1 )
      {
        (**(void (__fastcall ***)(std::ios_base *))v399)(v399);
        sub_186B220(v399);
      }
      sub_18572D0(&v446);
      ++v423;
      continue;
    }
    break;
  }
  v458 = nullptr;
  (*(void (__fastcall **)(std::ios_base *, void **))(*(_QWORD *)v399 + 32LL))(v399, &v458);
  v344 = (void (__fastcall ***)(void *))v458;
  if ( v458 )
  {
    v345 = *((_QWORD *)v399 + 7);
    if ( !v345 )
    {
      if ( v423 )
        goto LABEL_595;
      goto LABEL_614;
    }
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v345 + 32LL))(v345, &v458);
    if ( v423 )
    {
LABEL_595:
      v393 = nullptr;
      do
      {
        if ( v448 )
        {
          v346 = 0;
          v347 = nullptr;
          do
          {
            v441 = *(_QWORD *)(v379 + 8);
            sub_1374250(v465, v458, *(_QWORD *)(v434[2 * v346 + 1] + 8LL * (_QWORD)v393));
            v348 = *(_QWORD *)v465;
            *(_QWORD *)v465 = 0;
            *(_QWORD *)&v465[8] = 0;
            *(_OWORD *)&v465[16] = 1u;
            v349 = sub_1666AE0(v450, v348, v465, &src);
            v350 = qword_1C7F2C0;
            if ( !v349 || *(_DWORD *)v465 )
            {
              sub_182CBA0(qword_1C7F2C0, v465);
              sub_182CBA0(v350, &v465[16]);
              src = &dword_0 + 1;
              v462 = 0;
              v463 = 1;
              v464 = 0;
              sub_182CBA0(qword_1C7F2C0, &v463);
              LODWORD(v463) = 1;
              *(_DWORD *)&v465[16] = 1;
              *(_DWORD *)v465 = (_DWORD)src;
              BYTE4(v463) &= ~1u;
              v464 = 0;
              v465[4] = BYTE4(src) & 3 | v465[4] & 0xFC;
              v455 = v347;
              *(_QWORD *)&v465[8] = v462;
              v462 = 0;
              v465[20] = v465[20] & 0xFC | BYTE4(v463) & 2;
              *(__m128 *)&v465[24] = _mm_loadh_ps((const double *)(v421 + 8 * v346));
              sub_4716D0((const __m128i **)&v455, (__int64)v465);
              v347 = (unsigned int *)v455;
              v444 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v465);
              sub_182CBA0(v444, &v465[16]);
              v351 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &src);
              sub_182CBA0(v351, &v463);
            }
            else
            {
              sub_182CBA0(qword_1C7F2C0, v465);
              sub_182CBA0(v350, &v465[16]);
            }
            if ( v348 )
            {
              v93 = (*(_DWORD *)(v348 + 8))-- == 1;
              if ( v93 )
                sub_15D7BC0(v441, v348);
            }
            ++v346;
          }
          while ( (unsigned int)v346 < v448 );
        }
        else
        {
          v347 = nullptr;
        }
        v455 = v347;
        sub_4712D0((__m128i *)v465, v379, (__int64 *)&v455);
        v352 = *(_QWORD *)v465;
        v353 = *(_QWORD *)&v465[8];
        sub_4479D0(*(_QWORD *)(v379 + 16), *(__int64 *)v465);
        sub_470C70(v352, v353);
        if ( v347 )
        {
          v354 = *(v347 - 1);
          if ( (_DWORD)v354 )
          {
            v355 = v347;
            v356 = &v347[10 * v354];
            do
            {
              v357 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v355);
              v358 = v355 + 4;
              v355 += 10;
              sub_182CBA0(v357, v358);
            }
            while ( v356 != v355 );
          }
          sub_186B220(v347 - 2);
        }
        v393 = (char *)v393 + 1;
      }
      while ( (unsigned int)v393 < v423 );
    }
    v344 = (void (__fastcall ***)(void *))v458;
    if ( v458 )
    {
LABEL_614:
      v93 = (*((_DWORD *)v344 + 4))-- == 1;
      if ( v93 )
      {
        (**v344)(v344);
        sub_186B220(v344);
      }
    }
  }
  else if ( v423 )
  {
    goto LABEL_595;
  }
  v380 = *((_DWORD *)v399 + 12);
  *((_DWORD *)v399 + 12) = v380 - 1;
  if ( v380 == 1 )
  {
    (**(void (__fastcall ***)(std::ios_base *))v399)(v399);
    sub_186B220(v399);
  }
  sub_18572D0(&v446);
  if ( v434 )
  {
    v359 = *((_DWORD *)v434 - 1);
    if ( v359 )
    {
      v360 = v434;
      v361 = &v434[2 * v359];
      do
      {
        v362 = (__int64 *)v360[1];
        if ( v362 )
        {
          v363 = &v362[*((unsigned int *)v362 - 1)];
          if ( v362 >= v363 )
            goto LABEL_629;
          do
          {
            v364 = *v362;
            if ( *v362 )
            {
              v365 = *v360;
              v93 = (*(_DWORD *)(v364 + 8))-- == 1;
              if ( v93 )
                sub_15D7BC0(v365, v364);
            }
            ++v362;
          }
          while ( v362 < v363 );
          v362 = (__int64 *)v360[1];
          if ( v362 )
LABEL_629:
            sub_186B220(v362 - 1);
        }
        v360 += 2;
      }
      while ( v360 != v361 );
    }
    sub_186B220(v434 - 1);
  }
  if ( v436 )
  {
    v366 = *((_DWORD *)v436 - 1);
    if ( v366 )
    {
      v59 = v436;
      v367 = (std::ios_base *)((char *)v436 + 16 * v366);
      do
      {
        v58 = *((__int64 **)v59 + 1);
        if ( v58 )
        {
          v368 = &v58[*((unsigned int *)v58 - 1)];
          if ( v58 >= v368 )
            goto LABEL_50;
          do
          {
            v369 = *v58;
            if ( *v58 )
            {
              v370 = *(_QWORD *)v59;
              v93 = (*(_DWORD *)(v369 + 8))-- == 1;
              if ( v93 )
                sub_15D7BC0(v370, v369);
            }
            ++v58;
          }
          while ( v58 < v368 );
          v58 = *((__int64 **)v59 + 1);
          if ( v58 )
LABEL_50:
            sub_186B220(v58 - 1);
        }
        v59 = (std::ios_base *)((char *)v59 + 16);
      }
      while ( v367 != v59 );
    }
    sub_186B220((char *)v436 - 8);
  }
  v60 = v449;
  v61 = v449;
  if ( v449 )
  {
    v62 = *((unsigned int *)v449 - 1);
    v63 = &v449[v62];
    if ( (_DWORD)v62 )
    {
      do
      {
        v64 = *v61;
        if ( *v61 )
        {
          v65 = *(_DWORD *)(v64 - 4);
          if ( v65 )
          {
            v66 = v64 + 32LL * v65;
            do
            {
              v67 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v64);
              v68 = v64 + 16;
              v64 += 32;
              sub_182CBA0(v67, v68);
            }
            while ( v66 != v64 );
            v64 = *v61;
          }
          sub_186B220((void *)(v64 - 8));
        }
        ++v61;
      }
      while ( v61 != v63 );
      v60 = v449;
    }
    sub_186B220(v60 - 1);
  }
  if ( ptrb )
    sub_186B220(ptrb);
  result = v421;
  if ( v421 )
    return sub_186B220((void *)(v421 - 8));
  return result;
}

