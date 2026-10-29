__int64 __fastcall sub_9D25D0(__int64 a1, unsigned int *a2, __m128 si128, double a4)
{
  __int64 v5; // rsi
  __int64 v6; // r8
  unsigned __int16 *v7; // rcx
  __int64 v8; // rdx
  __int16 v9; // ax
  __int64 v10; // r12
  unsigned __int8 v11; // bp
  __int16 v12; // ax
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rax
  __m128 v19; // xmm0
  size_t v20; // rax
  __int64 v21; // rax
  __m128i *v22; // rsi
  __int64 v23; // rcx
  _DWORD *v24; // rdi
  size_t v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __m128i *v28; // rsi
  _DWORD *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  char **v36; // r15
  __int64 v37; // r13
  size_t v38; // rax
  size_t v39; // rax
  __int64 v40; // rax
  __int16 v41; // dx
  __int64 v42; // r13
  __int64 v43; // rax
  _WORD *v44; // rax
  __int64 v45; // r12
  __int16 v46; // ax
  __int16 v47; // dx
  __int64 v48; // rax
  unsigned __int8 v49; // al
  void **v50; // rbp
  void **v51; // rbx
  unsigned __int16 *v53; // rbx
  __int64 v54; // rdi
  _WORD *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rax
  size_t v59; // rax
  __m128i *v60; // rax
  __int64 *v61; // rdi
  __int64 v62; // rbx
  char **v63; // r15
  __int64 v64; // rax
  __int64 v65; // r12
  size_t v66; // rax
  __int64 *v67; // r13
  __int64 v68; // r13
  __int64 v69; // rsi
  char v70; // al
  __int64 v71; // rdx
  __int16 v72; // ax
  __int16 v73; // dx
  __int64 v74; // rbx
  char **v75; // r15
  __int64 v76; // rax
  __int64 v77; // r12
  size_t v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbx
  char **v81; // r15
  __int64 v82; // rax
  __int64 v83; // r12
  size_t v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbx
  void **v87; // r13
  char **v88; // r15
  __int64 v89; // r12
  size_t v90; // rax
  __int64 v91; // rax
  __int16 v92; // ax
  _QWORD *v93; // r15
  __int64 v94; // r13
  _WORD *v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rax
  size_t v98; // rax
  __m128i *v99; // rax
  size_t v100; // rcx
  size_t v101; // rax
  __m128i *v102; // rax
  __int64 v103; // rdi
  _WORD *v104; // rdi
  unsigned __int16 *v105; // rax
  unsigned int v106; // r8d
  __int64 v107; // rbx
  char **v108; // r15
  __int64 v109; // rax
  __int64 v110; // r13
  __int64 *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rsi
  char v115; // al
  __int64 v116; // rdx
  size_t v117; // rax
  __int64 v118; // rax
  __int16 v119; // ax
  __int64 v120; // r15
  _QWORD *v121; // r12
  unsigned int v122; // ebx
  _WORD *v123; // r13
  __int64 v124; // rax
  __int64 v125; // r13
  __int64 v126; // rax
  size_t v127; // rax
  __m128i *v128; // rax
  size_t v129; // rdi
  size_t v130; // rax
  __int64 *v131; // r13
  __m128i *v132; // rax
  __int64 *v133; // rdi
  __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rbx
  __int64 v137; // r15
  __int64 v138; // rbx
  char **v139; // r15
  __int64 v140; // r13
  size_t v141; // rax
  size_t v142; // rax
  __int64 v143; // rax
  __int64 v144; // r13
  _QWORD *v145; // r12
  _WORD *v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rbx
  __int64 v149; // rax
  size_t v150; // rax
  __m128i *v151; // rax
  __int64 v152; // rdi
  size_t v153; // rax
  __int64 *v154; // rbx
  __m128i *v155; // rax
  __int64 *v156; // rdi
  __int64 *v157; // rax
  __int64 v158; // rbx
  unsigned __int16 **v159; // rsi
  __int64 v160; // r8
  unsigned __int16 **v161; // rcx
  unsigned __int16 **v162; // rax
  unsigned __int16 **v163; // rsi
  unsigned __int16 **v164; // rax
  unsigned __int16 **v165; // rcx
  __int64 v166; // rbp
  unsigned int *v167; // r13
  unsigned __int16 *v168; // rbx
  __int64 v169; // r12
  __int64 v170; // r8
  _QWORD *v171; // rax
  void *v172; // rdi
  void *v173; // rdx
  unsigned int v174; // esi
  bool v175; // zf
  __int64 v176; // rbx
  __int64 v177; // rax
  __int64 v178; // r13
  __int64 v179; // rbx
  char **v180; // r12
  __int64 v181; // rbp
  size_t v182; // rax
  size_t v183; // rax
  __int64 *v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rsi
  char v188; // al
  __int64 v189; // rdx
  __int64 *v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rsi
  char v194; // al
  __int64 v195; // rdx
  __int64 v196; // r13
  __int64 v197; // rdi
  __int64 v198; // rax
  __int64 v199; // r15
  __int64 v200; // rax
  size_t v201; // rax
  __m128i *v202; // rax
  size_t v203; // rax
  __m128i *v204; // rax
  __int64 *v205; // rdi
  __int64 v206; // rax
  __int64 v207; // rbx
  char **v208; // r15
  __int64 v209; // r13
  size_t v210; // rax
  size_t v211; // rax
  __int64 v212; // rax
  __int64 v213; // rbx
  __int64 v214; // rdi
  _WORD *v215; // rdx
  __int64 v216; // rdi
  __int64 v217; // rdx
  __int64 v218; // rax
  size_t v219; // rax
  __m128i *v220; // rax
  __int64 *v221; // rdi
  int v222; // ecx
  __int64 v223; // r13
  __int64 v224; // rdx
  __int64 v225; // rax
  size_t v226; // rax
  __int64 v227; // rax
  __m128i *v228; // rsi
  __int64 v229; // rcx
  _DWORD *v230; // rdi
  __int64 v231; // r13
  size_t v232; // rax
  __int64 v233; // rax
  __m128i *v234; // rsi
  __int64 v235; // rcx
  _DWORD *v236; // rdi
  __int64 v237; // r13
  __int64 v238; // rdx
  __int64 v239; // rax
  size_t v240; // rax
  __int64 v241; // rax
  __m128i *v242; // rsi
  __int64 v243; // rcx
  _DWORD *v244; // rdi
  __int64 v245; // r13
  size_t v246; // rax
  __int64 v247; // rax
  __int64 v248; // rcx
  __m128i *v249; // rsi
  _DWORD *v250; // rdi
  __int64 v251; // rdi
  _WORD *v252; // rax
  __int64 v253; // r12
  bool v254; // al
  __int64 v255; // rax
  __int64 v256; // r13
  __int64 v257; // rdi
  bool v258; // al
  __int64 v259; // rax
  size_t v260; // rax
  __int64 v261; // rax
  __m128i *v262; // rsi
  __int64 v263; // rcx
  _DWORD *v264; // rdi
  size_t v265; // rax
  __int64 v266; // rax
  __int64 v267; // rcx
  __m128i *v268; // rsi
  _DWORD *v269; // rdi
  _WORD *v270; // rax
  __int64 v271; // r12
  bool v272; // al
  __int64 v273; // rax
  __int64 v274; // r13
  __int64 v275; // rdi
  bool v276; // al
  __int64 v277; // rax
  size_t v278; // rax
  __int64 v279; // rax
  __m128i *v280; // rsi
  __int64 v281; // rcx
  _DWORD *v282; // rdi
  size_t v283; // rax
  __int64 v284; // rax
  __int64 v285; // rcx
  __m128i *v286; // rsi
  _DWORD *v287; // rdi
  __int64 v288; // r12
  __int64 v289; // rax
  __int64 v290; // r13
  __int64 v291; // rdi
  __int64 v292; // rax
  size_t v293; // rax
  __int64 v294; // rax
  __m128i *v295; // rsi
  __int64 v296; // rcx
  _DWORD *v297; // rdi
  size_t v298; // rax
  __int64 v299; // rax
  __int64 v300; // rcx
  __m128i *v301; // rsi
  _DWORD *v302; // rdi
  __int64 v303; // r13
  __int64 v304; // rax
  __int64 v305; // rbx
  __int64 v306; // r13
  __int64 v307; // rdi
  __int64 v308; // r15
  __int64 v309; // rax
  size_t v310; // rax
  __m128i *v311; // rax
  size_t v312; // rax
  __m128i *v313; // rax
  __int64 *v314; // rdi
  __int64 v315; // rax
  __m128 v316; // xmm0
  size_t v317; // rax
  __m128i *v318; // rax
  __m128i v319; // xmm1
  size_t v320; // rax
  __m128i *v321; // rax
  __int64 *v322; // rdi
  __int64 v323; // rbx
  char **v324; // r15
  __int64 v325; // rax
  __int64 v326; // r13
  __int64 *v327; // rax
  __int64 v328; // rdx
  __int64 v329; // rcx
  __int64 v330; // rsi
  char v331; // al
  __int64 v332; // rdx
  size_t v333; // rax
  __int64 v334; // rax
  _QWORD *v335; // r11
  __int64 v336; // rcx
  __int16 v337; // ax
  __int64 v338; // rcx
  __int16 v339; // ax
  __int64 v340; // rdi
  __int64 v341; // rcx
  __int64 v342; // rax
  size_t v343; // rax
  __int64 v344; // rax
  __m128i *v345; // rsi
  __int64 v346; // r14
  _DWORD *v347; // rdi
  __int64 k; // rcx
  size_t v349; // rax
  __int64 v350; // rax
  __int64 v351; // rcx
  __m128i *v352; // rsi
  _DWORD *v353; // rdi
  size_t v354; // rax
  __int64 v355; // rax
  __m128i *v356; // rsi
  __int64 v357; // rcx
  _DWORD *v358; // rdi
  size_t v359; // rax
  __m128i *v360; // rax
  __int64 *v361; // rdi
  __int64 v362; // rdi
  __int64 v363; // rcx
  __int64 v364; // rax
  size_t v365; // rax
  __int64 v366; // rax
  __m128i *v367; // rsi
  __int64 v368; // r14
  _DWORD *v369; // rdi
  __int64 i; // rcx
  size_t v371; // rax
  __int64 v372; // rax
  __int64 v373; // rcx
  __m128i *v374; // rsi
  _DWORD *v375; // rdi
  size_t v376; // rax
  __int64 v377; // rax
  __m128i *v378; // rsi
  __int64 v379; // rcx
  _DWORD *v380; // rdi
  size_t v381; // rax
  __m128i *v382; // rax
  __int64 *v383; // rdi
  __int64 v384; // rcx
  __int64 v385; // rax
  size_t v386; // rax
  __int64 v387; // rax
  __m128i *v388; // rsi
  _DWORD *v389; // rdi
  __int64 j; // rcx
  __int64 v391; // rcx
  __int64 v392; // rax
  size_t v393; // rax
  __int64 v394; // rax
  __m128i *v395; // rsi
  _DWORD *v396; // rdi
  __int64 m; // rcx
  __int64 v399; // [rsp+8h] [rbp-120h]
  int v400; // [rsp+8h] [rbp-120h]
  unsigned __int16 *v401; // [rsp+10h] [rbp-118h]
  __int64 *v402; // [rsp+18h] [rbp-110h] BYREF
  size_t v403; // [rsp+20h] [rbp-108h]
  unsigned __int8 v404; // [rsp+2Fh] [rbp-F9h]
  void **v405; // [rsp+30h] [rbp-F8h]
  __int64 (__fastcall **v406)(); // [rsp+38h] [rbp-F0h]
  char v407; // [rsp+47h] [rbp-E1h] BYREF
  char *v408; // [rsp+48h] [rbp-E0h] BYREF
  __m128 v409; // [rsp+50h] [rbp-D8h]
  void *v410; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v411; // [rsp+68h] [rbp-C0h]
  __m128i v412; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v413; // [rsp+90h] [rbp-98h] BYREF
  __int64 v414; // [rsp+A0h] [rbp-88h]
  void **v415; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v416; // [rsp+B8h] [rbp-70h]
  __int64 v417; // [rsp+C0h] [rbp-68h] BYREF

  v5 = *a2;
  v402 = (__int64 *)&v415;
  LODWORD(v415) = 180;
  v404 = sub_AD6450(&v415, v5);
  if ( !v404 )
    return v404;
  v7 = *((unsigned __int16 **)a2 + 1);
  v401 = v7;
  if ( !v7 )
    return 0;
  v409.m128_u64[0] = (unsigned __int64)&v415;
  v415 = (void **)&v417;
  v416 = 0x200000000LL;
  v8 = *v7;
  v9 = *v7 & 0x1FF;
  if ( v9 == 79 )
  {
    LOWORD(v403) = v7[1];
    if ( (((unsigned __int16)v403 >> 3) & 0x7F) != 4 )
    {
      LODWORD(v10) = 0;
      v11 = 0;
      goto LABEL_78;
    }
    v53 = *((unsigned __int16 **)v7 + 2);
    v8 = *v53;
    LOWORD(v8) = v8 & 0x1FF;
    if ( (_WORD)v8 == 123 )
    {
      if ( sub_9C8E60(*((_QWORD *)v7 + 2), v5, v8, (__int64)v7, v6) )
        v54 = *((_QWORD *)v53 + 2);
      else
        v54 = *((_QWORD *)v53 + 3);
      v55 = (_WORD *)sub_BD7DA0(v54);
      if ( (*v55 & 0x1FF) == 0x47 )
      {
        v56 = (__int64)v55;
        if ( sub_9C57D0((__int64)v55) || sub_9C57F0(v56) )
        {
          v58 = *(_QWORD *)(v57 + 16);
          if ( v58 )
          {
            if ( (*(_BYTE *)(v58 + 28) & 0x7Fu) - 40 <= 6 )
            {
              si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
              v410 = nullptr;
              v411 = (__m128i)si128;
              v412.m128i_i32[0] = sub_AD6A60(v53);
              v59 = j__strlen("ArraySubscriptUnderULC");
              v60 = (__m128i *)sub_9D0C50((__int64)&v410, "ArraySubscriptUnderULC", v59);
              v412.m128i_i64[1] = (__int64)v53;
              v61 = v402;
              v5 = (__int64)&v410;
              *v60 = _mm_load_si128(&v412);
              v60[1] = _mm_load_si128(&v413);
              v60[2].m128i_i64[0] = v414;
              sub_9C8030((__int64)v61, (__int64 *)&v410);
              sub_9C9380(&v410);
            }
          }
        }
      }
      v8 = *v401;
      v9 = *v401 & 0x1FF;
    }
  }
  if ( ((v9 + 394) & 0x1FFu) <= 1
    && (LOWORD(v403) = v401[1], (((unsigned __int16)v403 >> 3) & 0x3F) == 0x15)
    && (v213 = *((_QWORD *)v401 + 2), (*(_WORD *)v213 & 0x1FF) == 0x7B)
    && (!sub_9C8E60(*((_QWORD *)v401 + 2), v5, v8, (__int64)v7, v6)
      ? (v214 = *(_QWORD *)(v213 + 24))
      : (v214 = *(_QWORD *)(v213 + 16)),
        (v215 = (_WORD *)sub_BD7DA0(v214), (*v215 & 0x1FF) == 0x47)
     && ((v216 = (__int64)v215, sub_9C57D0((__int64)v215)) || sub_9C57F0(v216))
     && (v218 = *(_QWORD *)(v217 + 16)) != 0
     && (*(_BYTE *)(v218 + 28) & 0x7Fu) - 40 <= 6) )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
    v410 = nullptr;
    v411 = (__m128i)si128;
    v412.m128i_i32[0] = sub_AD6A60(v213);
    v219 = j__strlen("ArraySubscriptUnderULC");
    v220 = (__m128i *)sub_9D0C50((__int64)&v410, "ArraySubscriptUnderULC", v219);
    v412.m128i_i64[1] = v213;
    v221 = v402;
    *v220 = _mm_load_si128(&v412);
    v220[1] = _mm_load_si128(&v413);
    v220[2].m128i_i64[0] = v414;
    sub_9C8030((__int64)v221, (__int64 *)&v410);
    sub_9C9380(&v410);
    v10 = (unsigned int)v416;
  }
  else
  {
    v10 = (unsigned int)v416;
  }
  if ( (_DWORD)v10 )
  {
    v62 = (__int64)v415;
    v403 = (size_t)&v415[3 * v10];
    do
    {
      while ( 1 )
      {
        v63 = *(char ***)(a1 + 8);
        v64 = operator new(0x18u);
        *(_DWORD *)(v64 + 8) = 9;
        v65 = v64;
        *(_QWORD *)v64 = off_2B16AE8;
        v66 = j__strlen("ArraySubscriptUnderULC");
        sub_2220DF0("ArraySubscriptUnderULC", v66);
        v67 = sub_9CC5A0(v62);
        sub_9CC560((__int64 **)&v412, (__int64 *)(*(_QWORD *)v62 + 8LL * *(unsigned int *)(v62 + 8)), 1);
        if ( (__int64 *)v412.m128i_i64[0] == v67 )
        {
          v71 = 0;
        }
        else
        {
          v68 = *v67;
          v69 = *(unsigned int *)(v68 + 8);
          v412.m128i_i32[0] = 311;
          v70 = sub_AD6450(&v412, v69);
          v71 = 0;
          if ( v70 )
            v71 = *(_QWORD *)(v68 + 16);
        }
        *(_QWORD *)(v65 + 16) = v71;
        v412.m128i_i64[0] = v65;
        sub_9C6750(v63, v412.m128i_i64, si128, a4);
        if ( !v412.m128i_i64[0] )
          break;
        v62 += 24;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
        if ( v403 == v62 )
          goto LABEL_77;
      }
      v62 += 24;
    }
    while ( v403 != v62 );
LABEL_77:
    sub_9C7FA0(v402);
    v11 = v404;
    LODWORD(v10) = v416;
    LOWORD(v8) = *v401;
  }
  else
  {
    v11 = 0;
    LOWORD(v8) = *v401;
  }
LABEL_78:
  v408 = &v407;
  v403 = (size_t)&v408;
  v72 = v8 & 0x1FF;
  v19 = _mm_loadh_ps((const double *)&v402);
  v409 = v19;
  if ( (v8 & 0x1FF) == 0x4F )
  {
    LOWORD(v403) = v401[1];
    if ( (((unsigned __int16)v403 >> 3) & 0x7F) != 4 )
      goto LABEL_80;
    v176 = *((_QWORD *)v401 + 2);
    if ( (*(_WORD *)v176 & 0x1FF) != 4 || *(_BYTE *)(v176 + 2) >> 3 != 5 )
      goto LABEL_80;
    v177 = sub_BD7CB0(*(_QWORD *)(v176 + 16));
    v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
    v410 = nullptr;
    v178 = v177;
    v411 = (__m128i)v19;
    if ( ((*(_WORD *)v177 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v177 + 2) >> 3) & 0x3F) != 5 )
      goto LABEL_225;
    v336 = *(_QWORD *)(v177 + 16);
    v405 = *(void ***)(v177 + 24);
    v337 = *(_WORD *)v405;
    v403 = v336;
    LOWORD(v406) = v337;
    if ( (v337 & 0x1FF) == 0x34
      && v336
      && (v362 = v336, sub_9C57D0(v336))
      && (v363 = sub_BD7B00(v362), (*(_WORD *)v363 & 0x1FF) == 0x47)
      && (v364 = *(_QWORD *)(v363 + 16)) != 0
      && (*(_BYTE *)(v364 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v403 = v363;
      v412.m128i_i32[0] = sub_AD6A60(v363);
      v365 = j__strlen("BaseDRE");
      v366 = sub_9D0C50((__int64)&v410, "BaseDRE", v365);
      v367 = &v412;
      v368 = (__int64)v405;
      v369 = (_DWORD *)v366;
      v412.m128i_i64[1] = v403;
      for ( i = 10; i; --i )
      {
        *v369 = v367->m128i_i32[0];
        v367 = (__m128i *)((char *)v367 + 4);
        ++v369;
      }
    }
    else
    {
      LOWORD(v406) = *(_WORD *)v403;
      if ( ((unsigned __int16)v406 & 0x1FF) != 0x34 )
        goto LABEL_225;
      if ( !sub_9C57D0((__int64)v405) )
        goto LABEL_225;
      v384 = sub_BD7B00(v405);
      if ( (*(_WORD *)v384 & 0x1FF) != 0x47 )
        goto LABEL_225;
      v385 = *(_QWORD *)(v384 + 16);
      if ( !v385 || (*(_BYTE *)(v385 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_225;
      v405 = (void **)v384;
      v412.m128i_i32[0] = sub_AD6A60(v384);
      v386 = j__strlen("BaseDRE");
      v387 = sub_9D0C50((__int64)&v410, "BaseDRE", v386);
      v388 = &v412;
      v368 = v403;
      v389 = (_DWORD *)v387;
      v412.m128i_i64[1] = (__int64)v405;
      for ( j = 10; j; --j )
      {
        *v389 = v388->m128i_i32[0];
        v388 = (__m128i *)((char *)v388 + 4);
        ++v389;
      }
    }
    v412.m128i_i32[0] = sub_AD6A60(v368);
    v371 = j__strlen("Offset");
    v372 = sub_9D0C50((__int64)&v410, "Offset", v371);
    v412.m128i_i64[1] = v368;
    v373 = 10;
    v374 = &v412;
    v375 = (_DWORD *)v372;
    while ( v373 )
    {
      *v375 = v374->m128i_i32[0];
      v374 = (__m128i *)((char *)v374 + 4);
      ++v375;
      --v373;
    }
    v412.m128i_i32[0] = sub_AD6A60(v178);
    v376 = j__strlen("AddOp");
    v377 = sub_9D0C50((__int64)&v410, "AddOp", v376);
    v412.m128i_i64[1] = v178;
    v378 = &v412;
    v379 = 10;
    v380 = (_DWORD *)v377;
    while ( v379 )
    {
      *v380 = v378->m128i_i32[0];
      v378 = (__m128i *)((char *)v378 + 4);
      ++v380;
      --v379;
    }
    v412.m128i_i32[0] = sub_AD6A60(v176);
    v381 = j__strlen("DerefOp");
    v382 = (__m128i *)sub_9D0C50((__int64)&v410, "DerefOp", v381);
    v412.m128i_i64[1] = v176;
    v383 = v402;
    *v382 = _mm_load_si128(&v412);
    v382[1] = _mm_load_si128(&v413);
    v382[2].m128i_i64[0] = v414;
    sub_9C8030((__int64)v383, (__int64 *)&v410);
LABEL_225:
    sub_9C9380(&v410);
    v72 = *v401 & 0x1FF;
  }
  if ( ((v72 + 394) & 0x1FFu) > 1 )
    goto LABEL_228;
  LOWORD(v403) = v401[1];
  if ( (((unsigned __int16)v403 >> 3) & 0x3F) != 0x15 )
    goto LABEL_228;
  v303 = *((_QWORD *)v401 + 2);
  if ( (*(_WORD *)v303 & 0x1FF) != 4 || *(_BYTE *)(v303 + 2) >> 3 != 5 )
    goto LABEL_228;
  v304 = sub_BD7CB0(*(_QWORD *)(v303 + 16));
  v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
  v410 = nullptr;
  v305 = v304;
  v411 = (__m128i)v19;
  if ( ((*(_WORD *)v304 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(v304 + 2) >> 3) & 0x3F) == 5 )
  {
    v338 = *(_QWORD *)(v304 + 16);
    v405 = *(void ***)(v304 + 24);
    v339 = *(_WORD *)v405;
    v403 = v338;
    LOWORD(v406) = v339;
    if ( (v339 & 0x1FF) == 0x34
      && v338
      && (v340 = v338, sub_9C57D0(v338))
      && (v341 = sub_BD7B00(v340), (*(_WORD *)v341 & 0x1FF) == 0x47)
      && (v342 = *(_QWORD *)(v341 + 16)) != 0
      && (*(_BYTE *)(v342 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v403 = v341;
      v412.m128i_i32[0] = sub_AD6A60(v341);
      v343 = j__strlen("BaseDRE");
      v344 = sub_9D0C50((__int64)&v410, "BaseDRE", v343);
      v345 = &v412;
      v346 = (__int64)v405;
      v347 = (_DWORD *)v344;
      v412.m128i_i64[1] = v403;
      for ( k = 10; k; --k )
      {
        *v347 = v345->m128i_i32[0];
        v345 = (__m128i *)((char *)v345 + 4);
        ++v347;
      }
    }
    else
    {
      LOWORD(v406) = *(_WORD *)v403;
      if ( ((unsigned __int16)v406 & 0x1FF) != 0x34 )
        goto LABEL_363;
      if ( !sub_9C57D0((__int64)v405) )
        goto LABEL_363;
      v391 = sub_BD7B00(v405);
      if ( (*(_WORD *)v391 & 0x1FF) != 0x47 )
        goto LABEL_363;
      v392 = *(_QWORD *)(v391 + 16);
      if ( !v392 || (*(_BYTE *)(v392 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_363;
      v405 = (void **)v391;
      v412.m128i_i32[0] = sub_AD6A60(v391);
      v393 = j__strlen("BaseDRE");
      v394 = sub_9D0C50((__int64)&v410, "BaseDRE", v393);
      v395 = &v412;
      v346 = v403;
      v396 = (_DWORD *)v394;
      v412.m128i_i64[1] = (__int64)v405;
      for ( m = 10; m; --m )
      {
        *v396 = v395->m128i_i32[0];
        v395 = (__m128i *)((char *)v395 + 4);
        ++v396;
      }
    }
    v412.m128i_i32[0] = sub_AD6A60(v346);
    v349 = j__strlen("Offset");
    v350 = sub_9D0C50((__int64)&v410, "Offset", v349);
    v412.m128i_i64[1] = v346;
    v351 = 10;
    v352 = &v412;
    v353 = (_DWORD *)v350;
    while ( v351 )
    {
      *v353 = v352->m128i_i32[0];
      v352 = (__m128i *)((char *)v352 + 4);
      ++v353;
      --v351;
    }
    v412.m128i_i32[0] = sub_AD6A60(v305);
    v354 = j__strlen("AddOp");
    v355 = sub_9D0C50((__int64)&v410, "AddOp", v354);
    v412.m128i_i64[1] = v305;
    v356 = &v412;
    v357 = 10;
    v358 = (_DWORD *)v355;
    while ( v357 )
    {
      *v358 = v356->m128i_i32[0];
      v356 = (__m128i *)((char *)v356 + 4);
      ++v358;
      --v357;
    }
    v412.m128i_i32[0] = sub_AD6A60(v303);
    v359 = j__strlen("DerefOp");
    v360 = (__m128i *)sub_9D0C50((__int64)&v410, "DerefOp", v359);
    v412.m128i_i64[1] = v303;
    v361 = v402;
    *v360 = _mm_load_si128(&v412);
    v360[1] = _mm_load_si128(&v413);
    v360[2].m128i_i64[0] = v414;
    sub_9C8030((__int64)v361, (__int64 *)&v410);
  }
LABEL_363:
  sub_9C9380(&v410);
LABEL_228:
  if ( (_DWORD)v10 != (_DWORD)v416 )
  {
    v179 = (__int64)v415;
    v405 = &v415[3 * (unsigned int)v416];
    if ( v415 != v405 )
    {
      do
      {
        while ( 1 )
        {
          v180 = *(char ***)(a1 + 8);
          v181 = operator new(0x30u);
          *(_DWORD *)(v181 + 8) = 10;
          *(_QWORD *)v181 = off_2B16B78;
          v182 = j__strlen("BaseDRE");
          *(_QWORD *)(v181 + 16) = sub_9CC600(v179, (__int64)"BaseDRE", v182);
          v183 = j__strlen("DerefOp");
          *(_QWORD *)(v181 + 24) = sub_9CC900(v179, (__int64)"DerefOp", v183);
          v403 = j__strlen("AddOp");
          sub_2220DF0("AddOp", v403);
          v184 = sub_9CC5A0(v179);
          v185 = *(_QWORD *)v179;
          v186 = *(unsigned int *)(v179 + 8);
          v403 = (size_t)v184;
          sub_9CC560((__int64 **)&v412, (__int64 *)(v185 + 8 * v186), 1);
          if ( v412.m128i_i64[0] == v403 )
          {
            v189 = 0;
          }
          else
          {
            v187 = *(unsigned int *)(*(_QWORD *)v403 + 8LL);
            v403 = *(_QWORD *)v403;
            v412.m128i_i32[0] = 306;
            v188 = sub_AD6450(&v412, v187);
            v189 = 0;
            if ( v188 )
              v189 = *(_QWORD *)(v403 + 16);
          }
          *(_QWORD *)(v181 + 32) = v189;
          v403 = j__strlen("Offset");
          sub_2220DF0("Offset", v403);
          v190 = sub_9CC5A0(v179);
          v191 = *(_QWORD *)v179;
          v192 = *(unsigned int *)(v179 + 8);
          v403 = (size_t)v190;
          sub_9CC560((__int64 **)&v412, (__int64 *)(v191 + 8 * v192), 1);
          if ( v412.m128i_i64[0] == v403 )
          {
            v195 = 0;
          }
          else
          {
            v193 = *(unsigned int *)(*(_QWORD *)v403 + 8LL);
            v403 = *(_QWORD *)v403;
            v412.m128i_i32[0] = 235;
            v194 = sub_AD6450(&v412, v193);
            v195 = 0;
            if ( v194 )
              v195 = *(_QWORD *)(v403 + 16);
          }
          *(_QWORD *)(v181 + 40) = v195;
          v412.m128i_i64[0] = v181;
          sub_9C6750(v180, v412.m128i_i64, v19, a4);
          if ( !v412.m128i_i64[0] )
            break;
          v179 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
          if ( v405 == (void **)v179 )
            goto LABEL_238;
        }
        v179 += 24;
      }
      while ( v405 != (void **)v179 );
LABEL_238:
      v11 = v404;
    }
    sub_9C7FA0(v402);
    LODWORD(v10) = v416;
  }
  LOWORD(v8) = *v401;
LABEL_80:
  v73 = v8 & 0x1FF;
  v409.m128_u64[0] = (unsigned __int64)v402;
  if ( v73 == 79 )
  {
    LOWORD(v403) = v401[1];
    if ( (((unsigned __int16)v403 >> 3) & 0x7F) != 4 )
      goto LABEL_82;
    v196 = *((_QWORD *)v401 + 2);
    if ( (*(_WORD *)v196 & 0x1FF) != 4 )
      goto LABEL_82;
    if ( *(_BYTE *)(v196 + 2) >> 3 != 5 )
      goto LABEL_82;
    v197 = *(_QWORD *)(v196 + 16);
    if ( !v197 )
      goto LABEL_82;
    v198 = sub_BD7DA0(v197);
    v199 = v198;
    if ( (*(_WORD *)v198 & 0x1FF) != 0x47 )
      goto LABEL_82;
    v200 = *(_QWORD *)(v198 + 16);
    if ( !v200 || (*(_BYTE *)(v200 + 28) & 0x7Fu) - 40 > 6 )
      goto LABEL_82;
    v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
    v410 = nullptr;
    v411 = (__m128i)v19;
    v412.m128i_i32[0] = sub_AD6A60(v199);
    v201 = j__strlen("BaseDRE");
    v202 = (__m128i *)sub_9D0C50((__int64)&v410, "BaseDRE", v201);
    v412.m128i_i64[1] = v199;
    *v202 = _mm_load_si128(&v412);
    v202[1] = _mm_load_si128(&v413);
    v202[2].m128i_i64[0] = v414;
    v412.m128i_i32[0] = sub_AD6A60(v196);
    v203 = j__strlen("op");
    v204 = (__m128i *)sub_9D0C50((__int64)&v410, "op", v203);
    v412.m128i_i64[1] = v196;
    v205 = v402;
    *v204 = _mm_load_si128(&v412);
    v204[1] = _mm_load_si128(&v413);
    v204[2].m128i_i64[0] = v414;
    sub_9C8030((__int64)v205, (__int64 *)&v410);
    sub_9C9380(&v410);
    LOWORD(v403) = *v401;
    v73 = v403 & 0x1FF;
  }
  if ( ((v73 + 394) & 0x1FFu) <= 1
    && (LOWORD(v403) = v401[1], (((unsigned __int16)v403 >> 3) & 0x3F) == 0x15)
    && (v306 = *((_QWORD *)v401 + 2), (*(_WORD *)v306 & 0x1FF) == 4)
    && *(_BYTE *)(v306 + 2) >> 3 == 5
    && (v307 = *(_QWORD *)(v306 + 16)) != 0
    && (v308 = sub_BD7DA0(v307), (*(_WORD *)v308 & 0x1FF) == 0x47)
    && (v309 = *(_QWORD *)(v308 + 16)) != 0
    && (*(_BYTE *)(v309 + 28) & 0x7Fu) - 40 <= 6 )
  {
    v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
    v410 = nullptr;
    v411 = (__m128i)v19;
    v412.m128i_i32[0] = sub_AD6A60(v308);
    v310 = j__strlen("BaseDRE");
    v311 = (__m128i *)sub_9D0C50((__int64)&v410, "BaseDRE", v310);
    v412.m128i_i64[1] = v308;
    *v311 = _mm_load_si128(&v412);
    v311[1] = _mm_load_si128(&v413);
    v311[2].m128i_i64[0] = v414;
    v412.m128i_i32[0] = sub_AD6A60(v306);
    v312 = j__strlen("op");
    v313 = (__m128i *)sub_9D0C50((__int64)&v410, "op", v312);
    v412.m128i_i64[1] = v306;
    v314 = v402;
    *v313 = _mm_load_si128(&v412);
    v313[1] = _mm_load_si128(&v413);
    v313[2].m128i_i64[0] = v414;
    sub_9C8030((__int64)v314, (__int64 *)&v410);
    sub_9C9380(&v410);
    v206 = (unsigned int)v416;
  }
  else
  {
    v206 = (unsigned int)v416;
  }
  if ( (_DWORD)v10 != (_DWORD)v206 )
  {
    v207 = (__int64)v415;
    v403 = (size_t)&v415[3 * v206];
    if ( v415 != (void **)v403 )
    {
      do
      {
        while ( 1 )
        {
          v208 = *(char ***)(a1 + 8);
          v209 = operator new(0x20u);
          *(_DWORD *)(v209 + 8) = 11;
          *(_QWORD *)v209 = off_2B16BC0;
          v210 = j__strlen("BaseDRE");
          *(_QWORD *)(v209 + 16) = sub_9CC600(v207, (__int64)"BaseDRE", v210);
          v211 = j__strlen("op");
          v212 = sub_9CC900(v207, (__int64)"op", v211);
          v412.m128i_i64[0] = v209;
          *(_QWORD *)(v209 + 24) = v212;
          sub_9C6750(v208, v412.m128i_i64, v19, a4);
          if ( !v412.m128i_i64[0] )
            break;
          v207 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
          if ( v403 == v207 )
            goto LABEL_259;
        }
        v207 += 24;
      }
      while ( v403 != v207 );
LABEL_259:
      v11 = v404;
    }
    sub_9C7FA0(v402);
    LODWORD(v10) = v416;
  }
LABEL_82:
  v412.m128i_i64[0] = (__int64)v402;
  sub_9C8130((__int16 *)v401, (void (__fastcall *)(__int64))sub_9D0F50, (__int64)&v412);
  if ( (_DWORD)v416 != (_DWORD)v10 )
  {
    v74 = (__int64)v415;
    v403 = (size_t)&v415[3 * (unsigned int)v416];
    if ( v415 != (void **)v403 )
    {
      do
      {
        while ( 1 )
        {
          v75 = *(char ***)(a1 + 8);
          v76 = operator new(0x18u);
          *(_DWORD *)(v76 + 8) = 9;
          v77 = v76;
          *(_QWORD *)v76 = off_2B16B30;
          v78 = j__strlen("AddressofArraySubscriptUnderUPC");
          v79 = sub_9CC900(v74, (__int64)"AddressofArraySubscriptUnderUPC", v78);
          v412.m128i_i64[0] = v77;
          *(_QWORD *)(v77 + 16) = v79;
          sub_9C6750(v75, v412.m128i_i64, v19, a4);
          if ( !v412.m128i_i64[0] )
            break;
          v74 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
          if ( v403 == v74 )
            goto LABEL_86;
        }
        v74 += 24;
      }
      while ( v403 != v74 );
LABEL_86:
      v11 = v404;
    }
    sub_9C7FA0(v402);
    LODWORD(v10) = v416;
  }
  v412.m128i_i64[0] = (__int64)v402;
  sub_9C8130((__int16 *)v401, (void (__fastcall *)(__int64))sub_9D0E50, (__int64)&v412);
  if ( (_DWORD)v416 != (_DWORD)v10 )
  {
    v80 = (__int64)v415;
    v403 = (size_t)&v415[3 * (unsigned int)v416];
    if ( v415 != (void **)v403 )
    {
      do
      {
        while ( 1 )
        {
          v81 = *(char ***)(a1 + 8);
          v82 = operator new(0x18u);
          *(_DWORD *)(v82 + 8) = 13;
          v83 = v82;
          *(_QWORD *)v82 = off_2B16C08;
          v84 = j__strlen("StandalonePointer");
          v85 = sub_9CC600(v80, (__int64)"StandalonePointer", v84);
          v412.m128i_i64[0] = v83;
          *(_QWORD *)(v83 + 16) = v85;
          sub_9C6750(v81, v412.m128i_i64, v19, a4);
          if ( !v412.m128i_i64[0] )
            break;
          v80 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
          if ( v403 == v80 )
            goto LABEL_92;
        }
        v80 += 24;
      }
      while ( v403 != v80 );
LABEL_92:
      v11 = v404;
    }
    sub_9C7FA0(v402);
    LODWORD(v10) = v416;
  }
  v412.m128i_i64[0] = (__int64)v402;
  sub_9C8130((__int16 *)v401, (void (__fastcall *)(__int64))sub_9D0D50, (__int64)&v412);
  if ( (_DWORD)v416 != (_DWORD)v10 )
  {
    v86 = (__int64)v415;
    v87 = &v415[3 * (unsigned int)v416];
    if ( v415 != v87 )
    {
      do
      {
        while ( 1 )
        {
          v88 = *(char ***)(a1 + 8);
          v89 = operator new(0x18u);
          *(_DWORD *)(v89 + 8) = 14;
          *(_QWORD *)v89 = off_2B16C98;
          v90 = j__strlen("PointerPreIncrementUnderUPC");
          v91 = sub_9CC900(v86, (__int64)"PointerPreIncrementUnderUPC", v90);
          v412.m128i_i64[0] = v89;
          *(_QWORD *)(v89 + 16) = v91;
          sub_9C6750(v88, v412.m128i_i64, v19, a4);
          if ( !v412.m128i_i64[0] )
            break;
          v86 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
          if ( v87 == (void **)v86 )
            goto LABEL_98;
        }
        v86 += 24;
      }
      while ( v87 != (void **)v86 );
LABEL_98:
      v11 = v404;
    }
    sub_9C7FA0(v402);
    LODWORD(v10) = v416;
  }
  v31 = (__int64)v401;
  v41 = *v401;
  v409.m128_u64[0] = (unsigned __int64)v402;
  v92 = v41 & 0x1FF;
  if ( (v41 & 0x1FF) == 0xF9 )
  {
    v93 = v401 + 8;
    v94 = (__int64)&v401[4 * *((unsigned int *)v401 + 1) + 8];
    if ( (unsigned __int16 *)v94 == v401 + 8 )
    {
      v106 = v10;
      goto LABEL_138;
    }
    do
    {
      if ( ((*(_WORD *)*v93 + 509) & 0x1FFu) <= 0x7E )
      {
        v31 = sub_BD7B00(*v93);
        if ( ((*(_WORD *)v31 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(v31 + 2) >> 3) & 0x3F) == 0x19 )
        {
          v95 = *(_WORD **)(v31 + 16);
          v403 = v31;
          if ( (*v95 & 0x1FF) == 0x47 && sub_9C57D0((__int64)v95) )
          {
            v97 = *(_QWORD *)(v96 + 16);
            if ( v97 )
            {
              if ( (*(_BYTE *)(v97 + 28) & 0x7Fu) - 40 <= 6 )
              {
                v410 = nullptr;
                v411 = _mm_load_si128((const __m128i *)&xmmword_2384CD0);
                v412.m128i_i32[0] = sub_AD6A60(v403);
                v98 = j__strlen("PointerAddAssignUnderUUC");
                v99 = (__m128i *)sub_9D0C50((__int64)&v410, "PointerAddAssignUnderUUC", v98);
                v100 = v403;
                v412.m128i_i64[1] = v403;
                *v99 = _mm_load_si128(&v412);
                v99[1] = _mm_load_si128(&v413);
                v99[2].m128i_i64[0] = v414;
                v403 = *(_QWORD *)(v100 + 24);
                v412.m128i_i32[0] = sub_AD6A60(v403);
                v101 = j__strlen("Offset");
                v102 = (__m128i *)sub_9D0C50((__int64)&v410, "Offset", v101);
                v103 = v409.m128_u64[0];
                v412.m128i_i64[1] = v403;
                *v102 = _mm_load_si128(&v412);
                v102[1] = _mm_load_si128(&v413);
                v102[2].m128i_i64[0] = v414;
                sub_9C8030(v103, (__int64 *)&v410);
                sub_9C9380(&v410);
              }
            }
          }
        }
      }
      ++v93;
    }
    while ( (_QWORD *)v94 != v93 );
    v92 = *v401 & 0x1FF;
  }
  if ( v92 != 241 )
    goto LABEL_126;
  if ( *(_QWORD *)&v401[4 * ((*(_QWORD *)v401 & 0x4000) != 0) + 12 + 4 * ((*(_QWORD *)v401 & 0x2000) != 0)] )
  {
    v104 = *(_WORD **)&v401[4 * ((*(_QWORD *)v401 & 0x4000) != 0) + 12 + 4 * ((*(_QWORD *)v401 & 0x2000) != 0)];
    if ( ((*v104 + 509) & 0x1FFu) <= 0x7E )
    {
      v223 = sub_BD7B00(v104);
      if ( ((*(_WORD *)v223 + 394) & 0x1FFu) <= 1
        && ((*(_WORD *)(v223 + 2) >> 3) & 0x3F) == 0x19
        && (**(_WORD **)(v223 + 16) & 0x1FF) == 0x47
        && sub_9C57D0(*(_QWORD *)(v223 + 16)) )
      {
        v225 = *(_QWORD *)(v224 + 16);
        if ( v225 )
        {
          if ( (*(_BYTE *)(v225 + 28) & 0x7Fu) - 40 <= 6 )
          {
            v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
            v410 = nullptr;
            v411 = (__m128i)v19;
            v412.m128i_i32[0] = sub_AD6A60(v223);
            v226 = j__strlen("PointerAddAssignUnderUUC");
            v227 = sub_9D0C50((__int64)&v410, "PointerAddAssignUnderUUC", v226);
            v412.m128i_i64[1] = v223;
            v228 = &v412;
            v229 = 10;
            v230 = (_DWORD *)v227;
            while ( v229 )
            {
              *v230 = v228->m128i_i32[0];
              v228 = (__m128i *)((char *)v228 + 4);
              ++v230;
              --v229;
            }
            v231 = *(_QWORD *)(v223 + 24);
            v412.m128i_i32[0] = sub_AD6A60(v231);
            v232 = j__strlen("Offset");
            v233 = sub_9D0C50((__int64)&v410, "Offset", v232);
            v412.m128i_i64[1] = v231;
            v234 = &v412;
            v235 = 10;
            v236 = (_DWORD *)v233;
            while ( v235 )
            {
              *v236 = v234->m128i_i32[0];
              v234 = (__m128i *)((char *)v234 + 4);
              ++v236;
              --v235;
            }
            sub_9C8030(v409.m128_i64[0], (__int64 *)&v410);
            sub_9C9380(&v410);
          }
        }
      }
    }
  }
  v105 = (unsigned __int16 *)sub_9C8E30(v401);
  if ( v105
    && (v31 = *v105, (((_WORD)v31 + 509) & 0x1FFu) <= 0x7E)
    && (v237 = sub_BD7B00(v105), ((*(_WORD *)v237 + 394) & 0x1FFu) <= 1)
    && ((*(_WORD *)(v237 + 2) >> 3) & 0x3F) == 0x19
    && (**(_WORD **)(v237 + 16) & 0x1FF) == 0x47
    && sub_9C57D0(*(_QWORD *)(v237 + 16))
    && (v239 = *(_QWORD *)(v238 + 16)) != 0
    && (*(_BYTE *)(v239 + 28) & 0x7Fu) - 40 <= 6 )
  {
    v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
    v410 = nullptr;
    v411 = (__m128i)v19;
    v412.m128i_i32[0] = sub_AD6A60(v237);
    v240 = j__strlen("PointerAddAssignUnderUUC");
    v241 = sub_9D0C50((__int64)&v410, "PointerAddAssignUnderUUC", v240);
    v412.m128i_i64[1] = v237;
    v242 = &v412;
    v243 = 10;
    v244 = (_DWORD *)v241;
    while ( v243 )
    {
      *v244 = v242->m128i_i32[0];
      v242 = (__m128i *)((char *)v242 + 4);
      ++v244;
      --v243;
    }
    v245 = *(_QWORD *)(v237 + 24);
    v412.m128i_i32[0] = sub_AD6A60(v245);
    v246 = j__strlen("Offset");
    v247 = sub_9D0C50((__int64)&v410, "Offset", v246);
    v412.m128i_i64[1] = v245;
    v248 = 10;
    v249 = &v412;
    v250 = (_DWORD *)v247;
    while ( v248 )
    {
      *v250 = v249->m128i_i32[0];
      v249 = (__m128i *)((char *)v249 + 4);
      ++v250;
      --v248;
    }
    sub_9C8030(v409.m128_i64[0], (__int64 *)&v410);
    sub_9C9380(&v410);
    v106 = v416;
  }
  else
  {
LABEL_126:
    v106 = v416;
  }
  if ( (_DWORD)v10 != v106 )
  {
    v107 = (__int64)v415;
    v405 = &v415[3 * v106];
    if ( v415 != v405 )
    {
      v406 = off_2B16C50;
      do
      {
        while ( 1 )
        {
          v108 = *(char ***)(a1 + 8);
          v109 = operator new(0x20u);
          *(_DWORD *)(v109 + 8) = 15;
          v110 = v109;
          *(_QWORD *)v109 = v406;
          v403 = j__strlen("PointerAddAssignUnderUUC");
          sub_2220DF0("PointerAddAssignUnderUUC", v403);
          v111 = sub_9CC5A0(v107);
          v112 = *(_QWORD *)v107;
          v113 = *(unsigned int *)(v107 + 8);
          v403 = (size_t)v111;
          sub_9CC560((__int64 **)&v412, (__int64 *)(v112 + 8 * v113), 1);
          if ( v412.m128i_i64[0] == v403 )
          {
            v116 = 0;
          }
          else
          {
            v114 = *(unsigned int *)(*(_QWORD *)v403 + 8LL);
            v403 = *(_QWORD *)v403;
            v412.m128i_i32[0] = 306;
            v115 = sub_AD6450(&v412, v114);
            v116 = 0;
            if ( v115 )
              v116 = *(_QWORD *)(v403 + 16);
          }
          *(_QWORD *)(v110 + 16) = v116;
          v117 = j__strlen("Offset");
          v118 = sub_9CC780(v107, (__int64)"Offset", v117);
          v412.m128i_i64[0] = v110;
          *(_QWORD *)(v110 + 24) = v118;
          sub_9C6750(v108, v412.m128i_i64, v19, a4);
          if ( !v412.m128i_i64[0] )
            break;
          v107 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
          if ( v405 == (void **)v107 )
            goto LABEL_135;
        }
        v107 += 24;
      }
      while ( v405 != (void **)v107 );
LABEL_135:
      v11 = v404;
    }
    sub_9C7FA0(v402);
    v106 = v416;
  }
  v41 = *v401;
LABEL_138:
  v119 = v41 & 0x1FF;
  if ( (v41 & 0x1FF) == 0xF9 )
  {
    v120 = (__int64)&v401[4 * *((unsigned int *)v401 + 1) + 8];
    v31 = (__int64)(v401 + 8);
    if ( (unsigned __int16 *)v120 == v401 + 8 )
    {
      LODWORD(v137) = v106;
      goto LABEL_169;
    }
    v121 = v401 + 8;
    v122 = v106;
    v405 = &v410;
    do
    {
      v123 = (_WORD *)*v121;
      if ( ((*(_WORD *)*v121 + 394) & 0x1FFu) <= 1 && ((v123[1] >> 3) & 0x3F) == 0x15 )
      {
        v31 = sub_BD7DA0(*((_QWORD *)v123 + 3));
        if ( (*(_WORD *)v31 & 0x1FF) == 0x47 )
        {
          v403 = v31;
          if ( sub_9C57D0(v31) )
          {
            v31 = v403;
            v124 = *(_QWORD *)(v403 + 16);
            if ( v124 )
            {
              if ( (*(_BYTE *)(v124 + 28) & 0x7Fu) - 40 <= 6 )
              {
                v125 = *((_QWORD *)v123 + 2);
                if ( (*(_WORD *)v125 & 0x1FF) == 0x47 && sub_9C57D0(v125) )
                {
                  v126 = *(_QWORD *)(v125 + 16);
                  if ( v126 )
                  {
                    if ( (*(_BYTE *)(v126 + 28) & 0x7Fu) - 40 <= 6 )
                    {
                      v410 = nullptr;
                      v411 = _mm_load_si128((const __m128i *)&xmmword_2384CD0);
                      v412.m128i_i32[0] = sub_AD6A60(v125);
                      v127 = j__strlen("ptrLHS");
                      v128 = (__m128i *)sub_9D0C50((__int64)v405, "ptrLHS", v127);
                      v412.m128i_i64[1] = v125;
                      v129 = v403;
                      *v128 = _mm_load_si128(&v412);
                      v128[1] = _mm_load_si128(&v413);
                      v128[2].m128i_i64[0] = v414;
                      v412.m128i_i32[0] = sub_AD6A60(v129);
                      v130 = j__strlen("ptrRHS");
                      v131 = (__int64 *)v405;
                      v132 = (__m128i *)sub_9D0C50((__int64)v405, "ptrRHS", v130);
                      v133 = v402;
                      v412.m128i_i64[1] = v403;
                      *v132 = _mm_load_si128(&v412);
                      v132[1] = _mm_load_si128(&v413);
                      v132[2].m128i_i64[0] = v414;
                      sub_9C8030((__int64)v133, v131);
                      sub_9C9380((void **)v131);
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v121;
    }
    while ( (_QWORD *)v120 != v121 );
    v106 = v122;
    v119 = *v401 & 0x1FF;
  }
  if ( v119 != 241 )
    goto LABEL_161;
  if ( *(_QWORD *)&v401[4 * ((*(_QWORD *)v401 & 0x4000) != 0) + 12 + 4 * ((*(_QWORD *)v401 & 0x2000) != 0)] )
  {
    v134 = *(_QWORD *)&v401[4 * ((*(_QWORD *)v401 & 0x4000) != 0) + 12 + 4 * ((*(_QWORD *)v401 & 0x2000) != 0)];
    if ( ((*(_WORD *)v134 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(v134 + 2) >> 3) & 0x3F) == 0x15 )
    {
      v251 = *(_QWORD *)(v134 + 24);
      LODWORD(v403) = v106;
      v252 = (_WORD *)sub_BD7DA0(v251);
      v106 = v403;
      v253 = (__int64)v252;
      if ( (*v252 & 0x1FF) == 0x47 )
      {
        v254 = sub_9C57D0((__int64)v252);
        v106 = v403;
        if ( v254 )
        {
          v255 = *(_QWORD *)(v253 + 16);
          if ( v255 )
          {
            if ( (*(_BYTE *)(v255 + 28) & 0x7Fu) - 40 <= 6 )
            {
              v256 = *(_QWORD *)(v134 + 16);
              if ( (*(_WORD *)v256 & 0x1FF) == 0x47 )
              {
                v257 = *(_QWORD *)(v134 + 16);
                v258 = sub_9C57D0(v257);
                v106 = v403;
                if ( v258 )
                {
                  v259 = *(_QWORD *)(v256 + 16);
                  if ( v259 )
                  {
                    if ( (*(_BYTE *)(v259 + 28) & 0x7Fu) - 40 <= 6 )
                    {
                      v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
                      v410 = nullptr;
                      v411 = (__m128i)v19;
                      v412.m128i_i32[0] = sub_AD6A60(v257);
                      v260 = j__strlen("ptrLHS");
                      v261 = sub_9D0C50((__int64)&v410, "ptrLHS", v260);
                      v412.m128i_i64[1] = v256;
                      v262 = &v412;
                      v263 = 10;
                      v264 = (_DWORD *)v261;
                      while ( v263 )
                      {
                        *v264 = v262->m128i_i32[0];
                        v262 = (__m128i *)((char *)v262 + 4);
                        ++v264;
                        --v263;
                      }
                      v412.m128i_i32[0] = sub_AD6A60(v253);
                      v265 = j__strlen("ptrRHS");
                      v266 = sub_9D0C50((__int64)&v410, "ptrRHS", v265);
                      v412.m128i_i64[1] = v253;
                      v267 = 10;
                      v268 = &v412;
                      v269 = (_DWORD *)v266;
                      while ( v267 )
                      {
                        *v269 = v268->m128i_i32[0];
                        v268 = (__m128i *)((char *)v268 + 4);
                        ++v269;
                        --v267;
                      }
                      sub_9C8030((__int64)v402, (__int64 *)&v410);
                      sub_9C9380(&v410);
                      v106 = v403;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  LODWORD(v403) = v106;
  v135 = sub_9C8E30(v401);
  v106 = v403;
  v136 = v135;
  if ( v135
    && ((*(_WORD *)v135 + 394) & 0x1FFu) <= 1
    && ((*(_WORD *)(v135 + 2) >> 3) & 0x3F) == 0x15
    && (v270 = (_WORD *)sub_BD7DA0(*(_QWORD *)(v135 + 24)), v106 = v403, v271 = (__int64)v270, (*v270 & 0x1FF) == 0x47)
    && (v272 = sub_9C57D0((__int64)v270), v106 = v403, v272)
    && (v273 = *(_QWORD *)(v271 + 16)) != 0
    && (*(_BYTE *)(v273 + 28) & 0x7Fu) - 40 <= 6
    && (v274 = *(_QWORD *)(v136 + 16), (*(_WORD *)v274 & 0x1FF) == 0x47)
    && (v275 = *(_QWORD *)(v136 + 16), v276 = sub_9C57D0(v275), v106 = v403, v276)
    && (v277 = *(_QWORD *)(v274 + 16)) != 0
    && (*(_BYTE *)(v277 + 28) & 0x7Fu) - 40 <= 6 )
  {
    v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
    v410 = nullptr;
    v411 = (__m128i)v19;
    v412.m128i_i32[0] = sub_AD6A60(v275);
    v278 = j__strlen("ptrLHS");
    v279 = sub_9D0C50((__int64)&v410, "ptrLHS", v278);
    v412.m128i_i64[1] = v274;
    v280 = &v412;
    v281 = 10;
    v282 = (_DWORD *)v279;
    while ( v281 )
    {
      *v282 = v280->m128i_i32[0];
      v280 = (__m128i *)((char *)v280 + 4);
      ++v282;
      --v281;
    }
    v412.m128i_i32[0] = sub_AD6A60(v271);
    v283 = j__strlen("ptrRHS");
    v284 = sub_9D0C50((__int64)&v410, "ptrRHS", v283);
    v412.m128i_i64[1] = v271;
    v285 = 10;
    v286 = &v412;
    v287 = (_DWORD *)v284;
    while ( v285 )
    {
      *v287 = v286->m128i_i32[0];
      v286 = (__m128i *)((char *)v286 + 4);
      ++v287;
      --v285;
    }
    sub_9C8030((__int64)v402, (__int64 *)&v410);
    sub_9C9380(&v410);
    v137 = (unsigned int)v416;
    v106 = v403;
  }
  else
  {
LABEL_161:
    v137 = (unsigned int)v416;
  }
  if ( v106 != (_DWORD)v137 )
  {
    v138 = (__int64)v415;
    v403 = (size_t)&v415[3 * v137];
    if ( v415 != (void **)v403 )
    {
      do
      {
        while ( 1 )
        {
          v139 = *(char ***)(a1 + 8);
          v140 = operator new(0x20u);
          *(_DWORD *)(v140 + 8) = 16;
          *(_QWORD *)v140 = off_2B16A10;
          v141 = j__strlen("ptrLHS");
          *(_QWORD *)(v140 + 16) = sub_9CC600(v138, (__int64)"ptrLHS", v141);
          v142 = j__strlen("ptrRHS");
          v143 = sub_9CC600(v138, (__int64)"ptrRHS", v142);
          v412.m128i_i64[0] = v140;
          *(_QWORD *)(v140 + 24) = v143;
          sub_9C6750(v139, v412.m128i_i64, v19, a4);
          if ( !v412.m128i_i64[0] )
            break;
          v138 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
          if ( v403 == v138 )
            goto LABEL_166;
        }
        v138 += 24;
      }
      while ( v403 != v138 );
LABEL_166:
      v11 = v404;
    }
    sub_9C7FA0(v402);
    LODWORD(v137) = v416;
  }
  v41 = *v401;
LABEL_169:
  v12 = v41 & 0x1FF;
  if ( (v41 & 0x1FF) != 0xF9 )
  {
LABEL_7:
    if ( v12 != 241 )
      goto LABEL_28;
    if ( *(_QWORD *)&v401[4 * ((*(_QWORD *)v401 & 0x4000) != 0) + 12 + 4 * ((*(_QWORD *)v401 & 0x2000) != 0)] )
    {
      v13 = *(_QWORD *)&v401[4 * ((*(_QWORD *)v401 & 0x4000) != 0) + 12 + 4 * ((*(_QWORD *)v401 & 0x2000) != 0)];
      if ( ((*(_WORD *)v13 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(v13 + 2) >> 3) & 0x3F) == 0x15 )
      {
        v14 = sub_BD7DA0(*(_QWORD *)(v13 + 24));
        if ( (*(_WORD *)v14 & 0x1FF) == 0x47
          && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v14 + 8)
                                                                             & 0xFFFFFFFFFFFFFFF0LL]
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 2 <= 1 )
        {
          v15 = *(_QWORD *)(v14 + 16);
          if ( v15 )
          {
            if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 40 <= 6 )
            {
              v16 = *(_QWORD *)(v13 + 16);
              if ( (*(_WORD *)v16 & 0x1FF) == 0x47 )
              {
                v17 = *(_QWORD *)(v13 + 16);
                if ( sub_9C57D0(v17) )
                {
                  v18 = *(_QWORD *)(v16 + 16);
                  if ( v18 )
                  {
                    if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 40 <= 6 )
                    {
                      v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
                      v410 = nullptr;
                      v411 = (__m128i)v19;
                      v412.m128i_i32[0] = sub_AD6A60(v17);
                      v20 = j__strlen("ptrLHS");
                      v21 = sub_9D0C50((__int64)&v410, "ptrLHS", v20);
                      v412.m128i_i64[1] = v16;
                      v22 = &v412;
                      v23 = 10;
                      v24 = (_DWORD *)v21;
                      while ( v23 )
                      {
                        *v24 = v22->m128i_i32[0];
                        v22 = (__m128i *)((char *)v22 + 4);
                        ++v24;
                        --v23;
                      }
                      v412.m128i_i32[0] = sub_AD6A60(v14);
                      v25 = j__strlen("ptrRHS");
                      v26 = sub_9D0C50((__int64)&v410, "ptrRHS", v25);
                      v412.m128i_i64[1] = v14;
                      v27 = 10;
                      v28 = &v412;
                      v29 = (_DWORD *)v26;
                      while ( v27 )
                      {
                        *v29 = v28->m128i_i32[0];
                        v28 = (__m128i *)((char *)v28 + 4);
                        ++v29;
                        --v27;
                      }
                      sub_9C8030((__int64)v402, (__int64 *)&v410);
                      sub_9C9380(&v410);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v30 = sub_9C8E30(v401);
    v33 = v30;
    if ( v30
      && ((*(_WORD *)v30 + 394) & 0x1FFu) <= 1
      && ((*(_WORD *)(v30 + 2) >> 3) & 0x3F) == 0x15
      && (v288 = sub_BD7DA0(*(_QWORD *)(v30 + 24)), (*(_WORD *)v288 & 0x1FF) == 0x47)
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v288 + 8) & 0xFFFFFFFFFFFFFFF0LL]
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 2 <= 1
      && (v289 = *(_QWORD *)(v288 + 16)) != 0
      && (*(_BYTE *)(v289 + 28) & 0x7Fu) - 40 <= 6
      && (v290 = *(_QWORD *)(v33 + 16), (*(_WORD *)v290 & 0x1FF) == 0x47)
      && (v291 = *(_QWORD *)(v33 + 16), sub_9C57D0(v291))
      && (v292 = *(_QWORD *)(v290 + 16)) != 0
      && (*(_BYTE *)(v292 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
      v410 = nullptr;
      v411 = (__m128i)v19;
      v412.m128i_i32[0] = sub_AD6A60(v291);
      v293 = j__strlen("ptrLHS");
      v294 = sub_9D0C50((__int64)&v410, "ptrLHS", v293);
      v412.m128i_i64[1] = v290;
      v295 = &v412;
      v296 = 10;
      v297 = (_DWORD *)v294;
      while ( v296 )
      {
        *v297 = v295->m128i_i32[0];
        v295 = (__m128i *)((char *)v295 + 4);
        ++v297;
        --v296;
      }
      v412.m128i_i32[0] = sub_AD6A60(v288);
      v298 = j__strlen("ptrRHS");
      v299 = sub_9D0C50((__int64)&v410, "ptrRHS", v298);
      v412.m128i_i64[1] = v288;
      v300 = 10;
      v301 = &v412;
      v302 = (_DWORD *)v299;
      while ( v300 )
      {
        *v302 = v301->m128i_i32[0];
        v301 = (__m128i *)((char *)v301 + 4);
        ++v302;
        --v300;
      }
      sub_9C8030((__int64)v402, (__int64 *)&v410);
      sub_9C9380(&v410);
      v34 = (unsigned int)v416;
    }
    else
    {
LABEL_28:
      v34 = (unsigned int)v416;
    }
    if ( (_DWORD)v137 != (_DWORD)v34 )
    {
      v35 = (__int64)v415;
      v403 = (size_t)&v415[3 * v34];
      if ( v415 != (void **)v403 )
      {
        do
        {
          while ( 1 )
          {
            v36 = *(char ***)(a1 + 8);
            v37 = operator new(0x20u);
            *(_DWORD *)(v37 + 8) = 17;
            *(_QWORD *)v37 = off_2B16A58;
            v38 = j__strlen("ptrLHS");
            *(_QWORD *)(v37 + 16) = sub_9CC600(v35, (__int64)"ptrLHS", v38);
            v39 = j__strlen("ptrRHS");
            v40 = sub_9CC600(v35, (__int64)"ptrRHS", v39);
            v412.m128i_i64[0] = v37;
            *(_QWORD *)(v37 + 24) = v40;
            sub_9C6750(v36, v412.m128i_i64, v19, a4);
            if ( !v412.m128i_i64[0] )
              break;
            v35 += 24;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
            if ( v403 == v35 )
              goto LABEL_33;
          }
          v35 += 24;
        }
        while ( v403 != v35 );
LABEL_33:
        v11 = v404;
      }
      sub_9C7FA0(v402);
    }
    v41 = *v401;
    goto LABEL_36;
  }
  v144 = (__int64)&v401[4 * *((unsigned int *)v401 + 1) + 8];
  v31 = (__int64)(v401 + 8);
  if ( (unsigned __int16 *)v144 != v401 + 8 )
  {
    v145 = v401 + 8;
    v403 = (size_t)&v410;
    do
    {
      v146 = (_WORD *)*v145;
      if ( ((*(_WORD *)*v145 + 394) & 0x1FFu) <= 1 && ((v146[1] >> 3) & 0x3F) == 0x15 )
      {
        v31 = sub_BD7DA0(*((_QWORD *)v146 + 3));
        if ( (*(_WORD *)v31 & 0x1FF) == 0x47
          && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v31 + 8)
                                                                             & 0xFFFFFFFFFFFFFFF0LL]
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 2 <= 1 )
        {
          v147 = *(_QWORD *)(v31 + 16);
          v405 = (void **)v31;
          if ( v147 )
          {
            if ( (*(_BYTE *)(v147 + 28) & 0x7Fu) - 40 <= 6 )
            {
              v148 = *((_QWORD *)v146 + 2);
              if ( (*(_WORD *)v148 & 0x1FF) == 0x47 && sub_9C57D0(v148) )
              {
                v149 = *(_QWORD *)(v148 + 16);
                if ( v149 )
                {
                  if ( (*(_BYTE *)(v149 + 28) & 0x7Fu) - 40 <= 6 )
                  {
                    v410 = nullptr;
                    v411 = _mm_load_si128((const __m128i *)&xmmword_2384CD0);
                    v412.m128i_i32[0] = sub_AD6A60(v148);
                    v150 = j__strlen("ptrLHS");
                    v151 = (__m128i *)sub_9D0C50(v403, "ptrLHS", v150);
                    v412.m128i_i64[1] = v148;
                    v152 = (__int64)v405;
                    *v151 = _mm_load_si128(&v412);
                    v151[1] = _mm_load_si128(&v413);
                    v151[2].m128i_i64[0] = v414;
                    v412.m128i_i32[0] = sub_AD6A60(v152);
                    v153 = j__strlen("ptrRHS");
                    v154 = (__int64 *)v403;
                    v155 = (__m128i *)sub_9D0C50(v403, "ptrRHS", v153);
                    v156 = v402;
                    v412.m128i_i64[1] = (__int64)v405;
                    *v155 = _mm_load_si128(&v412);
                    v155[1] = _mm_load_si128(&v413);
                    v155[2].m128i_i64[0] = v414;
                    sub_9C8030((__int64)v156, v154);
                    sub_9C9380((void **)v154);
                  }
                }
              }
            }
          }
        }
      }
      ++v145;
    }
    while ( (_QWORD *)v144 != v145 );
    v12 = *v401 & 0x1FF;
    goto LABEL_7;
  }
LABEL_36:
  if ( (v41 & 0x1FF) != 0xF5 )
  {
    if ( (v41 & 0x1FF) != 0x47 )
    {
LABEL_50:
      v404 = v11;
      goto LABEL_51;
    }
    goto LABEL_45;
  }
  v42 = *((_QWORD *)v401 + 1);
  if ( (v42 & 1) != 0 || (*(_BYTE *)(v42 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_203;
  v43 = sub_B593E0(*((_QWORD *)v401 + 1), &v412);
  if ( !v43 )
    goto LABEL_42;
  v44 = (_WORD *)sub_BD7B00(v43);
  LOBYTE(v406) = v11;
  v45 = (__int64)v44;
  if ( (*v44 & 0x1FF) != 0x47 )
    goto LABEL_43;
  LOBYTE(v406) = sub_9C57D0((__int64)v44);
  if ( (_BYTE)v406 && (v315 = *(_QWORD *)(v45 + 16)) != 0 && (*(_BYTE *)(v315 + 28) & 0x7Fu) - 40 <= 6 )
  {
    v316 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384CD0);
    v410 = nullptr;
    v411 = (__m128i)v316;
    v412.m128i_i32[0] = sub_AD64A0(v42);
    v317 = j__strlen("ptrInitLHS");
    v318 = (__m128i *)sub_9D0C50((__int64)&v410, "ptrInitLHS", v317);
    v412.m128i_i64[1] = v42;
    v319 = _mm_load_si128(&v412);
    *v318 = v319;
    v318[1] = _mm_load_si128(&v413);
    v318[2].m128i_i64[0] = v414;
    v412.m128i_i32[0] = sub_AD6A60(v45);
    v320 = j__strlen("ptrInitRHS");
    v321 = (__m128i *)sub_9D0C50((__int64)&v410, "ptrInitRHS", v320);
    v412.m128i_i64[1] = v45;
    v322 = v402;
    *v321 = _mm_load_si128(&v412);
    v321[1] = _mm_load_si128(&v413);
    v321[2].m128i_i64[0] = v414;
    sub_9C8030((__int64)v322, (__int64 *)&v410);
    sub_9C9380(&v410);
    v323 = (__int64)v415;
    v405 = &v415[3 * (unsigned int)v416];
    if ( v415 == v405 )
    {
      LOBYTE(v406) = v11;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v324 = *(char ***)(a1 + 8);
          v325 = operator new(0x20u);
          *(_DWORD *)(v325 + 8) = 18;
          v326 = v325;
          *(_QWORD *)v325 = off_2B16AA0;
          v403 = j__strlen("ptrInitLHS");
          sub_2220DF0("ptrInitLHS", v403);
          v327 = sub_9CC5A0(v323);
          v328 = *(_QWORD *)v323;
          v329 = *(unsigned int *)(v323 + 8);
          v403 = (size_t)v327;
          sub_9CC560((__int64 **)&v412, (__int64 *)(v328 + 8 * v329), 1);
          if ( v412.m128i_i64[0] == v403 )
          {
            v332 = 0;
          }
          else
          {
            v330 = *(unsigned int *)(*(_QWORD *)v403 + 8LL);
            v403 = *(_QWORD *)v403;
            v412.m128i_i32[0] = 124;
            v331 = sub_AD6450(&v412, v330);
            v332 = 0;
            if ( v331 )
              v332 = *(_QWORD *)(v403 + 16);
          }
          *(_QWORD *)(v326 + 16) = v332;
          v333 = j__strlen("ptrInitRHS");
          v334 = sub_9CC600(v323, (__int64)"ptrInitRHS", v333);
          v412.m128i_i64[0] = v326;
          *(_QWORD *)(v326 + 24) = v334;
          sub_9C6750(v324, v412.m128i_i64, v316, *(double *)v319.m128i_i64);
          if ( !v412.m128i_i64[0] )
            break;
          v323 += 24;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v412.m128i_i64[0] + 32LL))(v412.m128i_i64[0]);
          if ( v405 == (void **)v323 )
            goto LABEL_379;
        }
        v323 += 24;
      }
      while ( v405 != (void **)v323 );
    }
LABEL_379:
    sub_9C7FA0(v402);
  }
  else
  {
LABEL_42:
    LOBYTE(v406) = v11;
  }
LABEL_43:
  v46 = *v401 & 0x1FF;
  if ( v46 == 71 )
  {
    v11 = (unsigned __int8)v406;
LABEL_45:
    if ( !sub_9C57D0((__int64)v401) && !sub_9C57F0((__int64)v401) )
      goto LABEL_50;
    v48 = *((_QWORD *)v401 + 2);
    if ( !v48 )
      goto LABEL_50;
    v49 = *(_BYTE *)(v48 + 28) & 0x7F;
    if ( (unsigned int)v49 - 40 > 6 && v49 != 52 )
      goto LABEL_50;
    v157 = *(__int64 **)(a1 + 16);
    v158 = *v157;
    if ( !*(_BYTE *)(*v157 + 20) )
      goto LABEL_193;
    v159 = *(unsigned __int16 ***)v158;
    v160 = *(unsigned int *)(v158 + 12);
    v161 = (unsigned __int16 **)(*(_QWORD *)v158 + 8 * v160);
    if ( *(unsigned __int16 ***)v158 != v161 )
    {
      v32 = (__int64)v401;
      v162 = *(unsigned __int16 ***)v158;
      if ( v401 == *v159 )
        goto LABEL_278;
      do
      {
        if ( v161 == ++v162 )
          break;
      }
      while ( v401 != *v162 );
    }
    if ( (unsigned int)v160 < *(_DWORD *)(v158 + 8) )
    {
      *(_DWORD *)(v158 + 12) = v160 + 1;
      *v161 = v401;
      v159 = *(unsigned __int16 ***)v158;
      v162 = (unsigned __int16 **)(*(_QWORD *)v158 + 8 * v160);
    }
    else
    {
LABEL_193:
      v162 = (unsigned __int16 **)sub_2212A20(v158, v401);
      v159 = *(unsigned __int16 ***)v158;
      if ( !*(_BYTE *)(v158 + 20) )
      {
        v163 = &v159[*(unsigned int *)(v158 + 8)];
        v47 = *v401;
        goto LABEL_195;
      }
      v47 = *v401;
    }
LABEL_278:
    v163 = &v159[*(unsigned int *)(v158 + 12)];
LABEL_195:
    if ( v163 != v162 && (unsigned __int64)*v162 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v164 = v162 + 1;
      do
      {
        v165 = v164;
        if ( v163 == v164 )
          break;
        ++v164;
      }
      while ( (unsigned __int64)*v165 >= 0xFFFFFFFFFFFFFFFELL );
    }
    v31 = v404;
    v46 = v47 & 0x1FF;
    LOBYTE(v406) = v404;
  }
  if ( v46 != 245 )
  {
    v404 = (unsigned __int8)v406;
    goto LABEL_51;
  }
  v42 = *((_QWORD *)v401 + 1);
LABEL_203:
  v166 = *(_QWORD *)(a1 + 16);
  if ( (v42 & 1) != 0 )
  {
    v167 = (unsigned int *)(v42 & 0xFFFFFFFFFFFFFFFELL);
    v168 = (unsigned __int16 *)(v167 + 2);
    v169 = (__int64)&v167[2 * *v167 + 2];
  }
  else
  {
    v169 = (__int64)(v401 + 8);
    v168 = v401 + 4;
    if ( !v42 )
      goto LABEL_51;
  }
  if ( v168 != (unsigned __int16 *)v169 )
  {
    v170 = (__int64)v401;
    while ( 1 )
    {
      v173 = *(void **)v168;
      if ( (*(_BYTE *)(*(_QWORD *)v168 + 28LL) & 0x7Fu) - 40 > 6 )
        goto LABEL_209;
      v174 = *(_DWORD *)(v166 + 24);
      v410 = *(void **)v168;
      if ( !v174 )
        break;
      v32 = *(_QWORD *)(v166 + 8);
      v31 = (v174 - 1) & (((unsigned int)v173 >> 9) ^ ((unsigned int)v173 >> 4));
      v171 = (_QWORD *)(v32 + 16 * v31);
      v172 = (void *)*v171;
      if ( (void *)*v171 != v173 )
      {
        if ( v172 != (void *)-4096LL )
        {
          v400 = 1;
          v335 = nullptr;
          while ( 1 )
          {
            if ( v172 == (void *)-8192LL && !v335 )
              v335 = v171;
            v31 = (v174 - 1) & (v400 + (_DWORD)v31);
            v171 = (_QWORD *)(v32 + 16LL * (unsigned int)v31);
            v172 = (void *)*v171;
            if ( v173 == (void *)*v171 )
              goto LABEL_208;
            if ( v172 == (void *)-4096LL )
            {
              if ( v335 )
                v171 = v335;
              break;
            }
            ++v400;
          }
        }
        v222 = *(_DWORD *)(v166 + 16);
        v412.m128i_i64[0] = (__int64)v171;
        v31 = (unsigned int)(v222 + 1);
        v32 = (unsigned int)(4 * v31);
        if ( (unsigned int)v32 < 3 * v174 )
        {
          v32 = v174 >> 3;
          if ( v174 - *(_DWORD *)(v166 + 20) - (unsigned int)v31 <= (unsigned int)v32 )
          {
            v399 = v170;
LABEL_214:
            sub_9D23C0(v166 + 8, v174, (__int64)v173, v31, v170, v32);
            sub_9C9E20((__int64 *)(v166 + 8), (__int64 *)&v410, &v412);
            v173 = v410;
            v170 = v399;
            v31 = (unsigned int)(*(_DWORD *)(v166 + 16) + 1);
            v171 = (_QWORD *)v412.m128i_i64[0];
          }
          v175 = *v171 == -4096;
          *(_DWORD *)(v166 + 16) = v31;
          if ( !v175 )
            --*(_DWORD *)(v166 + 20);
          *v171 = v173;
          v171[1] = 0;
          goto LABEL_208;
        }
LABEL_213:
        v399 = v170;
        v174 *= 2;
        goto LABEL_214;
      }
LABEL_208:
      v171[1] = v170;
LABEL_209:
      v168 += 4;
      if ( (unsigned __int16 *)v169 == v168 )
        goto LABEL_51;
    }
    v412.m128i_i64[0] = 0;
    goto LABEL_213;
  }
LABEL_51:
  v50 = v415;
  v51 = &v415[3 * (unsigned int)v416];
  if ( v415 != v51 )
  {
    do
    {
      v51 -= 3;
      sub_9C9380(v51);
    }
    while ( v50 != v51 );
    v51 = v415;
  }
  if ( v51 != (void **)(v402 + 2) )
    free(v51);
  return v404;
}

