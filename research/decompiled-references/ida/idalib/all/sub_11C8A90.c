void __fastcall sub_11C8A90(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        char **a4,
        __int64 a5,
        unsigned __int8 a6,
        __m128i si128)
{
  _DWORD *v7; // r15
  int v10; // eax
  size_t v11; // rax
  size_t v12; // rdx
  size_t v13; // r12
  const char *v14; // r13
  __int64 v15; // rax
  _DWORD *v16; // rcx
  __int64 v17; // rax
  _DWORD *v18; // rsi
  signed __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  size_t v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  __int8 v30; // al
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __m128i v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  bool v76; // zf
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  char *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // r12
  char v92; // al
  __int64 v93; // r8
  __int64 v94; // r9
  char *v95; // rcx
  char v96; // r13
  __int64 v97; // rsi
  _BOOL4 v98; // r12d
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  const char *v102; // rax
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // r9
  char v106; // r12
  __int64 v107; // rax
  char *v108; // r13
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  char v112; // r14
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  const char **v121; // rax
  size_t v122; // r13
  char *v123; // r12
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rax
  unsigned __int64 v131; // r14
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  const char **v139; // rax
  char *v140; // rdx
  char *v141; // r14
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rax
  int v155; // eax
  int v156; // edx
  __int64 v157; // rcx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rax
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rcx
  _BYTE *v179; // rax
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rax
  size_t v184; // rax
  size_t v185; // rbx
  __int64 v186; // rax
  __int64 v187; // r8
  __int64 v188; // r9
  _BYTE *v189; // rax
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  _BYTE *v198; // rax
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  _BYTE *v207; // rax
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rax
  size_t v212; // rbx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rax
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r9
  _BYTE *v220; // rax
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // rax
  __int64 v225; // r9
  __int64 *v226; // rax
  __int64 v227; // r12
  const char **v228; // rbx
  const char **v229; // r13
  unsigned __int64 v230; // rdx
  unsigned __int64 v231; // r8
  size_t v232; // r10
  __int64 v233; // r15
  char *v234; // r8
  unsigned __int64 v235; // rax
  const char *v236; // rdi
  size_t v237; // rax
  size_t v238; // r12
  size_t v239; // rax
  const void *v240; // rax
  size_t v241; // rdx
  size_t v242; // rax
  const char *v243; // rcx
  size_t v244; // r12
  size_t v245; // rax
  size_t v246; // rsi
  const void *v247; // rax
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rdx
  const char *v251; // rdx
  const char *v252; // rax
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 v255; // rcx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 v258; // rcx
  __int64 v259; // r9
  __int64 v260; // rax
  size_t v261; // rax
  __int64 v262; // rax
  __int64 v263; // rcx
  __int64 v264; // r8
  __int64 v265; // r9
  __int64 *v266; // r14
  __int64 v267; // rax
  __int64 v268; // rcx
  __int64 v269; // r8
  __int64 v270; // r9
  __int64 v271; // rax
  __int64 v272; // rax
  __int64 v273; // rcx
  __int64 v274; // r8
  __int64 v275; // r9
  _BYTE *v276; // rax
  __int64 v277; // rax
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // r9
  _BYTE *v281; // rax
  __m128i *v282; // r13
  __int64 v283; // rax
  __int64 v284; // r13
  __int64 v285; // r15
  __int64 v286; // rax
  size_t v287; // rax
  void *v288; // r10
  void *v289; // r8
  size_t v290; // rdx
  void *v291; // rdi
  int v292; // eax
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  void *v296; // rdx
  _BYTE *v297; // rsi
  size_t v298; // rax
  size_t v299; // rdx
  void *v300; // rsi
  int v301; // eax
  char *v302; // rcx
  size_t v303; // rax
  size_t v304; // rdx
  void *v305; // rsi
  int v306; // eax
  __int64 v307; // rsi
  __int64 v308; // r8
  __int64 v309; // r9
  __int64 v310; // r8
  __int64 v311; // r9
  void *v312; // rdx
  char v313; // al
  __int64 v314; // rcx
  __int64 v315; // r8
  __int64 v316; // r9
  __int64 v317; // rax
  __int64 v318; // rcx
  __int64 v319; // r8
  __int64 v320; // r9
  __int64 v321; // rax
  __int64 v322; // rax
  __int64 v323; // r12
  unsigned __int64 v324; // rax
  __int64 v325; // rdx
  void *v326; // r12
  __int64 v327; // r13
  __int64 v328; // r13
  const char *v329; // r14
  size_t v330; // rax
  size_t v331; // rbx
  size_t v332; // rax
  size_t v333; // r12
  __int64 v334; // rcx
  __int64 v335; // rax
  __int64 v336; // rcx
  __int64 v337; // r8
  __int64 v338; // r9
  __int64 v339; // rax
  __int64 v340; // rax
  __int64 v341; // rax
  const char **v342; // rax
  size_t v343; // rbx
  char *v344; // r14
  __int64 v345; // rax
  __int64 v346; // rcx
  char *v347; // rdx
  char *v348; // r12
  __int64 v349; // rcx
  __int64 v350; // r8
  __int64 v351; // r9
  __int64 v352; // r8
  __int64 v353; // r9
  __int64 v354; // r8
  __int64 v355; // r9
  __int64 v356; // rax
  __int64 v357; // rax
  __int64 v358; // rcx
  __int64 v359; // r8
  __int64 v360; // r9
  _BYTE *v361; // rax
  __int64 v362; // rcx
  __int64 v363; // r8
  __int64 v364; // r9
  __int64 v365; // rax
  __int64 v366; // rcx
  __int64 v367; // r8
  __int64 v368; // r9
  __int64 v369; // rax
  const char *v370; // r12
  size_t v371; // rax
  size_t v372; // rax
  size_t v373; // rax
  __int64 v374; // r8
  __int64 v375; // r9
  __int64 v376; // rcx
  __int64 v377; // r8
  __int64 v378; // r9
  __int64 v379; // rax
  size_t v380; // rax
  size_t v381; // rax
  size_t v382; // r12
  size_t v383; // rax
  size_t v384; // rax
  size_t v385; // rcx
  size_t v386; // rax
  int v387; // eax
  __int64 v388; // rax
  char *v389; // rdx
  char *v390; // r12
  const char *v391; // rax
  __int64 v392; // rax
  __int64 v393; // rcx
  __int64 v394; // r8
  __int64 v395; // r9
  __int64 v396; // rax
  __int64 v397; // rax
  size_t v398; // rax
  size_t v399; // rax
  void *s1; // [rsp+18h] [rbp-760h]
  _QWORD **s1a; // [rsp+18h] [rbp-760h]
  const char *s1b; // [rsp+18h] [rbp-760h]
  __m128 v405; // [rsp+20h] [rbp-758h] BYREF
  __m128i *v406; // [rsp+30h] [rbp-748h]
  char **v407; // [rsp+38h] [rbp-740h]
  __int64 *v408; // [rsp+40h] [rbp-738h]
  size_t n; // [rsp+48h] [rbp-730h]
  char *s; // [rsp+50h] [rbp-728h]
  _DWORD *v411; // [rsp+58h] [rbp-720h]
  __m128i *v412; // [rsp+60h] [rbp-718h]
  void *s2; // [rsp+68h] [rbp-710h]
  __m128i *v414; // [rsp+70h] [rbp-708h]
  __m128i *v415; // [rsp+78h] [rbp-700h]
  void *v416; // [rsp+80h] [rbp-6F8h]
  int v417; // [rsp+8Ch] [rbp-6ECh]
  __m128i *v418; // [rsp+90h] [rbp-6E8h]
  size_t v419; // [rsp+98h] [rbp-6E0h]
  const char *v420; // [rsp+A0h] [rbp-6D8h] BYREF
  unsigned __int64 v421; // [rsp+A8h] [rbp-6D0h]
  __m128i v422[2]; // [rsp+B0h] [rbp-6C8h] BYREF
  char *v423[2]; // [rsp+D0h] [rbp-6A8h] BYREF
  __m128i v424; // [rsp+100h] [rbp-678h] BYREF
  __int64 v425; // [rsp+110h] [rbp-668h]
  __int16 v426; // [rsp+120h] [rbp-658h]
  __m128i v427; // [rsp+130h] [rbp-648h] BYREF
  __int64 v428; // [rsp+140h] [rbp-638h] BYREF
  __m128i v429[2]; // [rsp+160h] [rbp-618h] BYREF
  __int16 v430; // [rsp+180h] [rbp-5F8h]
  __m128i v431[2]; // [rsp+190h] [rbp-5E8h] BYREF
  __int16 v432; // [rsp+1B0h] [rbp-5C8h]
  __m128i v433[2]; // [rsp+1C0h] [rbp-5B8h] BYREF
  __int16 v434; // [rsp+1E0h] [rbp-598h]
  __m128i v435; // [rsp+1F0h] [rbp-588h] BYREF
  int v436; // [rsp+200h] [rbp-578h]
  __int16 v437; // [rsp+210h] [rbp-568h]
  __m128i v438; // [rsp+220h] [rbp-558h] BYREF
  _DWORD v439[4]; // [rsp+230h] [rbp-548h] BYREF
  __int16 v440; // [rsp+240h] [rbp-538h]
  void *v441[2]; // [rsp+250h] [rbp-528h] BYREF
  __int64 v442; // [rsp+260h] [rbp-518h] BYREF
  __m128i *v443; // [rsp+268h] [rbp-510h]
  __int16 v444; // [rsp+270h] [rbp-508h]
  __m128i v445; // [rsp+280h] [rbp-4F8h] BYREF
  int v446; // [rsp+290h] [rbp-4E8h] BYREF
  __int16 v447; // [rsp+2A0h] [rbp-4D8h]
  __m256i ptr; // [rsp+320h] [rbp-458h] BYREF
  __int16 v449; // [rsp+340h] [rbp-438h]
  __int64 v450; // [rsp+348h] [rbp-430h]

  v7 = a1;
  v411 = a1 + 4;
  LODWORD(v406) = a1[15];
  v10 = a1[12];
  v407 = a4;
  v417 = v10;
  v11 = j__strlen(&byte_22F0C30);
  s1 = (void *)sub_21B7BC0(a2, 1916, &byte_22F0C30, v11);
  v13 = v12;
  sub_1132E50(&v445, (__int64)a1, nullptr);
  v412 = &v445;
  ptr.m256i_i64[0] = (__int64)&v445;
  v449 = 260;
  v14 = (const char *)sub_10DA6C0(a2, (__int64)&ptr);
  if ( (int *)v445.m128i_i64[0] != &v446 )
    operator delete((void *)v445.m128i_i64[0]);
  v408 = *((__int64 **)a1 + 1);
  LOBYTE(n) = sub_21B7850(a2, 697, 1135, 0);
  v15 = sub_10DCD30(a2, 0x766u);
  v16 = *(_DWORD **)a5;
  v415 = (__m128i *)v15;
  v17 = 10LL * *(unsigned int *)(a5 + 8);
  v18 = &v16[v17];
  v19 = 0xCCCCCCCCCCCCCCCDLL * ((v17 * 4) >> 3);
  v20 = v19 >> 2;
  if ( v19 >> 2 )
  {
    if ( v16[2] == 1 )
    {
      v21 = (__int64)v16;
    }
    else
    {
      v21 = (__int64)(v16 + 10);
      if ( v16[12] != 1 )
      {
        v21 = (__int64)(v16 + 20);
        if ( v16[22] != 1 )
        {
          v21 = (__int64)(v16 + 30);
          if ( v16[32] != 1 )
          {
            v22 = v16;
            v23 = &v16[40 * v20];
            while ( 1 )
            {
              v21 = (__int64)(v22 + 40);
              if ( v23 == v22 + 40 )
              {
                v19 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v18 - v21) >> 3);
                goto LABEL_16;
              }
              if ( v22[42] == 1 )
                goto LABEL_21;
              if ( v22[52] == 1 )
              {
                v21 = (__int64)(v22 + 50);
                goto LABEL_21;
              }
              if ( v22[62] == 1 )
              {
                v21 = (__int64)(v22 + 60);
                goto LABEL_21;
              }
              if ( v22[72] == 1 )
                break;
              v22 += 40;
            }
            v21 = (__int64)(v22 + 70);
          }
        }
      }
    }
    goto LABEL_21;
  }
  v21 = (__int64)v16;
LABEL_16:
  if ( v19 != 2 )
  {
    if ( v19 != 3 )
    {
      if ( v19 != 1 )
      {
LABEL_19:
        v21 = (__int64)v16;
        goto LABEL_23;
      }
      goto LABEL_416;
    }
    if ( *(_DWORD *)(v21 + 8) == 1 )
      goto LABEL_21;
    v21 += 40;
  }
  if ( *(_DWORD *)(v21 + 8) == 1 )
    goto LABEL_21;
  v21 += 40;
LABEL_416:
  if ( *(_DWORD *)(v21 + 8) != 1 )
    goto LABEL_19;
LABEL_21:
  if ( v18 == (_DWORD *)v21 )
    v21 = (__int64)v16;
LABEL_23:
  if ( j__strlen("lld") == v13 )
  {
    if ( !v13 || !memcmp(s1, "lld", v13) )
      goto LABEL_27;
    if ( v13 != j__strlen("lld-link") )
      goto LABEL_216;
  }
  else
  {
    if ( j__strlen("lld-link") != v13 )
      goto LABEL_216;
    if ( !v13 )
    {
LABEL_27:
      if ( (_BYTE)n )
        sub_10DC5D0(a3, (__int64)"--fat-lto-objects");
      if ( sub_10DCD30(a2, 0x389u) )
      {
        v24 = j__strlen("8");
        v25 = sub_21B7BC0(a2, 905, "8", v24);
        v27 = v26;
        v28 = v25;
        if ( (unsigned __int8)sub_2247A50(v25, v26, 10, &ptr)
          || ptr.m256i_i64[0] != ptr.m256i_i32[0]
          || ptr.m256i_i32[0] <= 0 )
        {
          s1a = (_QWORD **)sub_10DCD30(a2, 0x389u);
          sub_FC70B0((__int64)&ptr, *v408, 0, 382);
          sub_21B5FF0(v412, s1a, a2);
          sub_AEC220((unsigned __int8 **)&ptr, v445.m128i_i64[0], v445.m128i_i64[1]);
          sub_AE9DF0((unsigned __int8 **)&ptr, *s1a[6], 1u);
          if ( (__m128i *)v445.m128i_i64[0] != &v412[1] )
            operator delete((void *)v445.m128i_i64[0]);
          sub_AEA040((__int64)&ptr);
        }
        v449 = 1283;
        ptr.m256i_i64[0] = (__int64)"--lto-partitions=";
        ptr.m256i_i64[2] = v28;
        ptr.m256i_i64[3] = v27;
        v29 = sub_10DA6C0(a2, (__int64)&ptr);
        sub_10DC5D0(a3, v29);
      }
      goto LABEL_36;
    }
  }
  if ( !memcmp(s1, "lld-link", v13) )
    goto LABEL_27;
LABEL_216:
  v238 = j__strlen("ld.lld");
  if ( v14 )
  {
    v239 = j__strlen(v14);
    v240 = (const void *)sub_228AA60(v14, v239, 0);
    if ( v238 != v241 )
    {
      v242 = j__strlen("ld.lld");
      v243 = v14;
      v244 = v242;
LABEL_219:
      s1b = v243;
      v245 = j__strlen(v14);
      v243 = s1b;
      v246 = v245;
      goto LABEL_220;
    }
  }
  else
  {
    v240 = (const void *)sub_228AA60(0, 0, 0);
    if ( v238 != v241 )
    {
      v380 = j__strlen("ld.lld");
      v243 = nullptr;
      v246 = 0;
      v244 = v380;
      goto LABEL_220;
    }
  }
  if ( !v241 || !memcmp(v240, "ld.lld", v241) )
    goto LABEL_27;
  v261 = j__strlen("ld.lld");
  v243 = v14;
  v246 = 0;
  v244 = v261;
  if ( v14 )
    goto LABEL_219;
LABEL_220:
  v247 = (const void *)sub_228AAA0(v243, v246, 0);
  if ( v250 == v244 && (!v244 || !memcmp(v247, "ld.lld", v244)) || a1[15] == 12 )
    goto LABEL_27;
  if ( (_DWORD)v406 == 20 )
  {
    v251 = "/libLTO";
    v252 = "-bplugin:";
  }
  else
  {
    sub_10DC5D0(a3, (__int64)"-plugin");
    v251 = "/LLVMgold";
    v252 = &byte_22F0C30;
  }
  v405.m128_u64[0] = (unsigned __int64)v252;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D30);
  v441[0] = ".so";
  v444 = 259;
  v431[0].m128i_i64[0] = (__int64)"/../lib";
  ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
  v435.m128i_i64[0] = (__int64)v251;
  v437 = 259;
  v432 = 259;
  v430 = 260;
  v429[0].m128i_i64[0] = (__int64)(v408 + 13);
  *(__m128i *)&ptr.m256i_u64[1] = si128;
  sub_A41580(v433, v429, v431, (__int64)v433, v248, v249);
  sub_A41580(&v438, v433, &v435, (__int64)v433, v253, v254);
  sub_A41580(v412, &v438, (const __m128i *)v441, v255, v256, v257);
  sub_228FF50(v412, &ptr, 0);
  v444 = 261;
  *(_OWORD *)v441 = *(_OWORD *)ptr.m256i_i8;
  v76 = *(_BYTE *)v405.m128_u64[0] == 0;
  v440 = 257;
  if ( !v76 )
  {
    v438.m128i_i64[0] = v405.m128_u64[0];
    LOBYTE(v440) = 3;
  }
  sub_A41580(v412, &v438, (const __m128i *)v441, v258, 257, v259);
  v260 = sub_10DA6C0(a2, (__int64)v412);
  sub_10DC5D0(a3, v260);
  if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
    free((void *)ptr.m256i_i64[0]);
LABEL_36:
  v30 = 0;
  if ( (_DWORD)v406 == 20 )
    v30 = 45;
  v405.m128_i8[0] = v30;
  v31 = (char *)&byte_22F0C30;
  if ( (_DWORD)v406 == 20 )
    v31 = "-";
  s2 = v31;
  v32 = "-plugin-opt=";
  if ( (_DWORD)v406 == 20 )
    v32 = "-bplugin_opt:";
  s = v32;
  v33 = "jobs=";
  if ( (_DWORD)v406 == 20 )
    v33 = "-threads=";
  v414 = (__m128i *)v33;
  if ( sub_10DCD30(a2, 0x7D3u) )
  {
    v445.m128i_i64[0] = (__int64)"-generate-arange-section";
    v447 = 259;
    v441[0] = s;
    v444 = 259;
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v34, v35, 259);
    v36 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v36);
  }
  v37 = sub_10DCD30(a2, 0x784u);
  if ( v37 && *(_DWORD *)(v37 + 56) == 1 )
  {
    v370 = **(const char ***)(v37 + 48);
    v371 = 0;
    if ( v370 )
      v371 = j__strlen(v370);
    ptr.m256i_i64[0] = (__int64)v370;
    ptr.m256i_i64[1] = v371;
    v450 = 0;
    v445.m128i_i64[1] = j__strlen("Accelerate");
    v445.m128i_i64[0] = (__int64)"Accelerate";
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "Accelerate", 10);
    v372 = j__strlen("LIBMVEC");
    v445.m128i_i64[0] = (__int64)"LIBMVEC";
    v445.m128i_i64[1] = v372;
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "libmvec", 7);
    v445.m128i_i64[1] = j__strlen("AMDLIBM");
    v445.m128i_i64[0] = (__int64)"AMDLIBM";
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "AMDLIBM", 7);
    v445.m128i_i64[1] = j__strlen("MASSV");
    v445.m128i_i64[0] = (__int64)"MASSV";
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "MASSV", 5);
    v445.m128i_i64[1] = j__strlen("SVML");
    v445.m128i_i64[0] = (__int64)"SVML";
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "SVML", 4);
    v373 = j__strlen("sleefgnuabi");
    v445.m128i_i64[0] = (__int64)"sleefgnuabi";
    v445.m128i_i64[1] = v373;
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "SLEEF", 5);
    v445.m128i_i64[1] = j__strlen("Darwin_libsystem_m");
    v445.m128i_i64[0] = (__int64)"Darwin_libsystem_m";
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "Darwin_libsystem_m", 18);
    v445.m128i_i64[1] = j__strlen("ArmPL");
    v445.m128i_i64[0] = (__int64)"ArmPL";
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "ArmPL", 5);
    v445.m128i_i64[1] = j__strlen("none");
    v445.m128i_i64[0] = (__int64)"none";
    LOBYTE(v446) = 1;
    sub_11BFF60((__int64)&ptr, v412, "none", 4);
    if ( (_BYTE)v450 && (_BYTE)v449 )
    {
      v438.m128i_i64[0] = (__int64)"-vector-library=";
      v447 = 261;
      v76 = *s == 0;
      v445 = *(__m128i *)&ptr.m256i_u64[2];
      v440 = 259;
      v437 = 257;
      if ( !v76 )
      {
        v435.m128i_i64[0] = (__int64)s;
        LOBYTE(v437) = 3;
      }
      sub_A41580((__m128i *)v441, &v435, &v438, 261, v374, v375);
      sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v376, v377, v378);
      v379 = sub_10DA6C0(a2, (__int64)&ptr);
      sub_10DC5D0(a3, v379);
    }
  }
  v418 = v422;
  sub_11C8180(v422, v408, a2, v411, 0);
  if ( v422[0].m128i_i64[1] )
  {
    v445.m128i_i64[0] = (__int64)v422;
    v447 = 260;
    v438.m128i_i64[0] = (__int64)"mcpu=";
    v440 = 259;
    v434 = 257;
    if ( v405.m128_i8[0] )
    {
      LOBYTE(v434) = 3;
      v433[0].m128i_i64[0] = (__int64)s2;
    }
    v432 = 257;
    if ( *s )
    {
      v431[0].m128i_i64[0] = (__int64)s;
      LOBYTE(v432) = 3;
    }
    sub_A41580(&v435, v431, v433, v38, v39, v40);
    sub_A41580((__m128i *)v441, &v435, &v438, v41, v42, v43);
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v44, v45, v46);
    v47 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v47);
  }
  v48 = sub_10DCD30(a2, 0xAu);
  v49 = v48;
  if ( v48 )
  {
    if ( (unsigned __int8)sub_21B9810(v48, 3063) || (unsigned __int8)sub_21B9810(v49, 3076) )
    {
      v50 = j__strlen("3");
      v416 = "3";
      goto LABEL_58;
    }
    if ( !(unsigned __int8)sub_21B9810(v49, 3114) )
    {
      if ( !(unsigned __int8)sub_21B9810(v49, 3060) )
        goto LABEL_65;
      v50 = j__strlen("0");
      v416 = "0";
      goto LABEL_58;
    }
    v416 = **(void ***)(v49 + 48);
    v381 = j__strlen("g");
    v382 = v381;
    if ( v416 )
    {
      v383 = j__strlen((const char *)v416);
      if ( v383 != v382 )
      {
        v419 = v383;
        v398 = j__strlen("s");
        v385 = v419;
        if ( v419 == v398 )
        {
          if ( !v419 )
            goto LABEL_431;
          goto LABEL_448;
        }
        v399 = j__strlen("z");
        v50 = v419;
        if ( v419 == v399 )
        {
LABEL_392:
          if ( !v50 )
            goto LABEL_431;
          v419 = v50;
          v387 = memcmp(v416, "z", v50);
          v50 = v419;
          if ( !v387 )
            goto LABEL_431;
LABEL_59:
          v447 = 261;
          v445.m128i_i64[0] = (__int64)v416;
          v445.m128i_i64[1] = v50;
          v438.m128i_i64[0] = (__int64)"O";
          v440 = 259;
          v434 = 257;
          if ( v405.m128_i8[0] )
          {
            LOBYTE(v434) = 3;
            v433[0].m128i_i64[0] = (__int64)s2;
          }
          v432 = 257;
          if ( *s )
          {
            v431[0].m128i_i64[0] = (__int64)s;
            LOBYTE(v432) = 3;
          }
          v419 = v50;
          sub_A41580(&v435, v431, v433, v50, 257, 261);
          sub_A41580((__m128i *)v441, &v435, &v438, v51, v52, v53);
          sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v54, v55, v56);
          v57 = sub_10DA6C0(a2, (__int64)&ptr);
          sub_10DC5D0(a3, v57);
          if ( v417 == 26 )
          {
            v447 = 261;
            v445.m128i_i64[0] = (__int64)v416;
            v444 = 259;
            v445.m128i_i64[1] = v419;
            v441[0] = "--lto-CGO";
            sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v419, v58, v59);
            v392 = sub_10DA6C0(a2, (__int64)&ptr);
            sub_10DC5D0(a3, v392);
          }
          goto LABEL_65;
        }
LABEL_58:
        if ( !v50 )
          goto LABEL_65;
        goto LABEL_59;
      }
      if ( v383 )
      {
        v419 = v383;
        if ( memcmp(v416, "g", v383) )
        {
          v384 = j__strlen("s");
          v385 = v419;
          if ( v419 != v384 )
            goto LABEL_391;
LABEL_448:
          v419 = v385;
          if ( memcmp(v416, "s", v385) )
          {
LABEL_391:
            v386 = j__strlen("z");
            v50 = v419;
            if ( v419 != v386 )
              goto LABEL_59;
            goto LABEL_392;
          }
LABEL_431:
          v50 = j__strlen("2");
          v416 = "2";
          goto LABEL_58;
        }
      }
    }
    else if ( v381 )
    {
      if ( j__strlen("s") && j__strlen("z") )
        goto LABEL_65;
      goto LABEL_431;
    }
    v50 = j__strlen("1");
    v416 = "1";
    goto LABEL_58;
  }
LABEL_65:
  if ( sub_10DCD30(a2, 0x817u) )
  {
    v445.m128i_i64[0] = (__int64)"_dwo";
    v447 = 259;
    v440 = 257;
    if ( **v407 )
    {
      v438.m128i_i64[0] = (__int64)*v407;
      LOBYTE(v440) = 3;
    }
    v433[0].m128i_i64[0] = (__int64)"dwo_dir=";
    v432 = 257;
    v434 = 259;
    if ( *s )
    {
      v431[0].m128i_i64[0] = (__int64)s;
      LOBYTE(v432) = 3;
    }
    sub_A41580(&v435, v431, v433, v60, v61, v62);
    sub_A41580((__m128i *)v441, &v435, &v438, v63, v64, v65);
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v66, v67, v68);
    v69 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v69);
  }
  if ( (_DWORD)v406 == 20 || !a6 )
  {
    if ( (_DWORD)v406 != 20 || !a6 )
    {
      if ( !(a6 | (unsigned __int8)n) && !v415 )
        goto LABEL_81;
      goto LABEL_77;
    }
    ptr.m256i_i64[0] = (__int64)"-bdbg:thinlto";
    v449 = 259;
  }
  else
  {
    v445.m128i_i64[0] = (__int64)"thinlto";
    v447 = 259;
    v444 = 257;
    if ( *s )
    {
      v441[0] = s;
      LOBYTE(v444) = 3;
    }
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v60, v61, v62);
  }
  v70 = sub_10DA6C0(a2, (__int64)&ptr);
  sub_10DC5D0(a3, v70);
LABEL_77:
  if ( sub_10DCD30(a2, 0x291u) )
  {
    v445.m128i_i64[0] = (__int64)"-enable-matrix";
    v447 = 259;
    v444 = 257;
    if ( *s )
    {
      v441[0] = s;
      LOBYTE(v444) = 3;
    }
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v71, 259, 257);
    v72 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v72);
  }
LABEL_81:
  v73.m128i_i64[0] = (__int64)sub_11BCAF0(a2, v408);
  if ( v73.m128i_i64[1] )
  {
    v445 = v73;
    v447 = 261;
    v438.m128i_i64[0] = (__int64)v414;
    v76 = *s == 0;
    v440 = 259;
    v437 = 257;
    if ( !v76 )
    {
      v435.m128i_i64[0] = (__int64)s;
      LOBYTE(v437) = 3;
    }
    sub_A41580((__m128i *)v441, &v435, &v438, 261, v74, v75);
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v77, v78, v79);
    v80 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v80);
  }
  v81 = sub_10DE660(a2, 0x32Bu, 0x482u);
  if ( v81 )
  {
    v76 = (unsigned __int8)sub_21B9810(v81, 811) == 0;
    v85 = "1";
    if ( v76 )
      v85 = "0";
    v445.m128i_i64[0] = (__int64)v85;
    v447 = 259;
    v438.m128i_i64[0] = (__int64)"-global-isel=";
    v440 = 259;
    v437 = 257;
    if ( *s )
    {
      v435.m128i_i64[0] = (__int64)s;
      LOBYTE(v437) = 3;
    }
    sub_A41580((__m128i *)v441, &v435, &v438, v82, v83, v84);
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v86, v87, v88);
    v89 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v89);
  }
  v90 = sub_10DE660(a2, 0x23u, 0x27u);
  v91 = v90;
  if ( v90 )
  {
    v92 = sub_21B9810(v90, 2030);
    v95 = s;
    v96 = *s;
    if ( v92 )
    {
      v445.m128i_i64[0] = (__int64)"-debugger-tune=lldb";
      v447 = 259;
      v444 = 257;
      if ( v96 )
      {
        v441[0] = s;
        LOBYTE(v444) = 3;
      }
    }
    else
    {
      if ( (unsigned __int8)sub_21B9810(v91, 2067) )
      {
        v391 = "-debugger-tune=sce";
      }
      else if ( (unsigned __int8)sub_21B9810(v91, 1998) )
      {
        v391 = "-debugger-tune=dbx";
      }
      else
      {
        v391 = "-debugger-tune=gdb";
      }
      v445.m128i_i64[0] = (__int64)v391;
      v447 = 259;
      v444 = 257;
      if ( v96 )
      {
        LOBYTE(v444) = 3;
        v441[0] = s;
      }
    }
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, (__int64)v95, v93, v94);
    v97 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v97);
  }
  if ( (_DWORD)v406 == 20 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 184LL))(a1) )
    {
      v445.m128i_i64[0] = (__int64)"-no-integrated-as=1";
      v447 = 259;
      v444 = 257;
      if ( *s )
      {
        v441[0] = s;
        LOBYTE(v444) = 3;
      }
      sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v318, v319, v320);
      v321 = sub_10DA6C0(a2, (__int64)&ptr);
      sub_10DC5D0(a3, v321);
    }
    v322 = sub_10DCD30(a2, 0x24u);
    v323 = v322;
    if ( v322
      && !(unsigned __int8)sub_21B9810(v322, 1982)
      && !(unsigned __int8)sub_21B9810(v323, 2016)
      && (unsigned __int8)sub_21B7850(a2, 2074, 2050, 1) )
    {
      v445.m128i_i64[0] = (__int64)"-strict-dwarf=true";
      v447 = 259;
      v444 = 257;
      if ( *s )
      {
        v441[0] = s;
        LOBYTE(v444) = 3;
      }
      sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v393, v394, v395);
      v396 = sub_10DA6C0(a2, (__int64)&ptr);
      sub_10DC5D0(a3, v396);
    }
    ptr.m256i_i32[0] = 2222;
    v324 = sub_21B6DA0(a2, &ptr, 1);
    v325 = *(_QWORD *)(a2 + 8);
    LODWORD(v442) = 2222;
    v326 = (void *)(v325 + 8LL * (unsigned int)v324);
    v327 = v325 + 8 * HIDWORD(v324);
    v441[0] = v326;
    v441[1] = v326;
    sub_11BFFE0((__int64)v441);
    v438.m128i_i64[1] = (__int64)v326;
    v438.m128i_i64[0] = v327;
    v439[0] = 2222;
    sub_11BFFE0((__int64)&v438);
    v328 = v438.m128i_i64[0];
    v446 = v439[0];
    ptr.m256i_i32[4] = v439[0];
    v436 = v439[0];
    n = (size_t)v441[0];
    v435 = v438;
    v414 = &v435;
    if ( v441[0] != (void *)v438.m128i_i64[0] )
    {
      v415 = (__m128i *)v21;
      v416 = &v438;
      while ( 1 )
      {
        v329 = **(const char ***)(*(_QWORD *)(v328 - 8) + 48LL);
        v330 = j__strlen("vec-default");
        v331 = v330;
        if ( v329 )
        {
          v332 = j__strlen(v329);
          v333 = v332;
          if ( v332 == v331 )
          {
            if ( !v332 || !memcmp(v329, "vec-default", v332) )
            {
LABEL_338:
              v21 = (__int64)v415;
              break;
            }
            if ( v333 == j__strlen("vec-extabi") )
              goto LABEL_336;
          }
          else if ( v332 == j__strlen("vec-extabi") )
          {
            if ( !v333 )
              goto LABEL_341;
LABEL_336:
            if ( !memcmp(v329, "vec-extabi", v333) )
              goto LABEL_341;
          }
        }
        else
        {
          if ( !v330 )
            goto LABEL_338;
          if ( !j__strlen("vec-extabi") )
          {
LABEL_341:
            v21 = (__int64)v415;
            v441[0] = "-vec-extabi";
            v444 = 259;
            v440 = 257;
            if ( *s )
            {
              v438.m128i_i64[0] = (__int64)s;
              LOBYTE(v440) = 3;
            }
            sub_A41580(v412, (const __m128i *)v416, (const __m128i *)v441, v334, 259, 257);
            v335 = sub_10DA6C0(a2, (__int64)v412);
            sub_10DC5D0(a3, v335);
            break;
          }
        }
        v435.m128i_i64[0] = v328 - 8;
        sub_11BFFE0((__int64)v414);
        v328 = v435.m128i_i64[0];
        if ( v435.m128i_i64[0] == n )
          goto LABEL_338;
      }
    }
  }
  v98 = 0;
  v76 = a1[448] == 38;
  n = (size_t)(a1 + 440);
  if ( v76 && a1[450] == 3 )
    v98 = (unsigned int)(a1[451] - 24) <= 1;
  if ( (unsigned __int8)sub_21B7850(a2, 804, 1149, v98) )
  {
    v102 = "-function-sections=1";
  }
  else
  {
    if ( !sub_10DCD30(a2, 0x47Du) )
      goto LABEL_103;
    v102 = "-function-sections=0";
  }
  v445.m128i_i64[0] = (__int64)v102;
  v447 = 259;
  v444 = 257;
  if ( *s )
  {
    v441[0] = s;
    LOBYTE(v444) = 3;
  }
  sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v99, v100, v101);
  v103 = sub_10DA6C0(a2, (__int64)&ptr);
  sub_10DC5D0(a3, v103);
LABEL_103:
  v106 = sub_21B7850(a2, 553, 1078, v98);
  if ( v106 )
  {
    v445.m128i_i64[0] = (__int64)"-data-sections=1";
    v447 = 259;
    v76 = *s == 0;
    v444 = 257;
    if ( !v76 )
    {
      v441[0] = s;
      LOBYTE(v444) = 3;
    }
    v106 = 0;
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, 257, v104, v105);
    v107 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v107);
  }
  else if ( sub_10DCD30(a2, 0x436u) )
  {
    v445.m128i_i64[0] = (__int64)"-data-sections=0";
    v447 = 259;
    v444 = 257;
    if ( *s )
    {
      v441[0] = s;
      LOBYTE(v444) = 3;
    }
    v106 = 1;
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v336, v337, v338);
    v339 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v339);
  }
  if ( sub_10DCD30(a2, 0xBA1u) || sub_10DCD30(a2, 0xAD1u) )
  {
    v108 = "-mxcoff-roptr";
    v112 = sub_21B7850(a2, 2977, 2769, 0);
    if ( !v112 )
      v108 = "-mno-xcoff-roptr";
    if ( (_DWORD)v406 != 20 )
    {
      v406 = (__m128i *)j__strlen(v108);
      sub_FC70B0((__int64)&ptr, *v408, 0, 495);
      sub_AEC220((unsigned __int8 **)&ptr, v108, (signed __int64)v406);
      sub_AEC220((unsigned __int8 **)&ptr, *((_BYTE **)a1 + 2), *((_QWORD *)a1 + 3));
      sub_AEA040((__int64)&ptr);
    }
    if ( v112 )
    {
      if ( v106 )
      {
        sub_FC70B0((__int64)&ptr, *v408, 0, 510);
        sub_AEA040((__int64)&ptr);
      }
      v445.m128i_i64[0] = (__int64)"-mxcoff-roptr";
      v447 = 259;
      v444 = 257;
      if ( *s )
      {
        v441[0] = s;
        LOBYTE(v444) = 3;
      }
      sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v109, v110, v111);
      v113 = sub_10DA6C0(a2, (__int64)&ptr);
      sub_10DC5D0(a3, v113);
    }
  }
  v114 = sub_10DE660(a2, 0x719u, 0x584u);
  if ( v114 && (unsigned __int8)sub_21B9810(v114, 1817) )
  {
    v445.m128i_i64[0] = (__int64)"-split-machine-functions";
    v447 = 259;
    v444 = 257;
    if ( *s )
    {
      v441[0] = s;
      LOBYTE(v444) = 3;
    }
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v115, v116, v117);
    v118 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v118);
  }
  v119 = sub_10DE660(a2, 0x66Fu, 0x511u);
  if ( !v119 || !(unsigned __int8)sub_21B9810(v119, 1297) )
  {
    v120 = sub_10DCD30(a2, 0x66Fu);
    if ( v120 )
    {
      v121 = *(const char ***)(v120 + 48);
      v122 = 0;
      v123 = (char *)*v121;
      if ( *v121 )
        v122 = j__strlen(*v121);
      ptr.m256i_i64[0] = (__int64)v123;
      v449 = 261;
      ptr.m256i_i64[1] = v122;
      if ( (unsigned int)sub_228C1E0(&ptr, 0) )
      {
        sub_FC70B0((__int64)&ptr, *v408, 0, 443);
        sub_AEC220((unsigned __int8 **)&ptr, v123, v122);
        sub_AEA040((__int64)&ptr);
      }
      else
      {
        v445.m128i_i64[0] = (__int64)v123;
        v438.m128i_i64[0] = (__int64)"sample-profile=";
        v445.m128i_i64[1] = v122;
        v447 = 261;
        v76 = *s == 0;
        v440 = 259;
        v437 = 257;
        if ( !v76 )
        {
          v435.m128i_i64[0] = (__int64)s;
          LOBYTE(v437) = 3;
        }
        sub_A41580((__m128i *)v441, &v435, &v438, v124, v125, v126);
        sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v127, v128, v129);
        v130 = sub_10DA6C0(a2, (__int64)&ptr);
        sub_10DC5D0(a3, v130);
      }
    }
  }
  v131 = sub_11BB1D0(a2);
  if ( !v131 )
  {
    v388 = sub_11BFE40(a2);
    if ( !v388 )
      goto LABEL_146;
    if ( *(_DWORD *)(v388 + 56) )
    {
      v389 = nullptr;
      v390 = **(char ***)(v388 + 48);
      if ( !v390 )
        goto LABEL_398;
    }
    else
    {
      v390 = (char *)&byte_22F0C30;
    }
    v389 = &v390[j__strlen(v390)];
LABEL_398:
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
    *(__m128i *)&ptr.m256i_u64[1] = si128;
    sub_A1FE50(&ptr, v390, v389);
    if ( !ptr.m256i_i64[1]
      || (v447 = 261, v445 = *(__m128i *)ptr.m256i_i8, !(unsigned int)sub_228B230(v412, v441)) && LOBYTE(v441[0]) )
    {
      v447 = 257;
      v435.m128i_i64[0] = (__int64)"default.profdata";
      v444 = 257;
      v440 = 257;
      v437 = 259;
      sub_228A3B0(&ptr, &v435, &v438, v441, v412);
    }
    v444 = 261;
    *(_OWORD *)v441 = *(_OWORD *)ptr.m256i_i8;
    v437 = 259;
    v435.m128i_i64[0] = (__int64)"cs-profile-path=";
    v432 = 257;
    if ( v405.m128_i8[0] )
    {
      LOBYTE(v432) = 3;
      v431[0].m128i_i64[0] = (__int64)s2;
    }
    v430 = 257;
    if ( *s )
    {
      v429[0].m128i_i64[0] = (__int64)s;
      LOBYTE(v430) = 3;
    }
    goto LABEL_144;
  }
  v445.m128i_i64[0] = (__int64)"cs-profile-generate";
  v447 = 259;
  v440 = 257;
  if ( v405.m128_i8[0] )
  {
    LOBYTE(v440) = 3;
    v438.m128i_i64[0] = (__int64)s2;
  }
  v437 = 257;
  LOBYTE(v406) = *s;
  if ( (_BYTE)v406 )
  {
    v435.m128i_i64[0] = (__int64)s;
    LOBYTE(v437) = 3;
  }
  sub_A41580((__m128i *)v441, &v435, &v438, (__int64)s, 257, 259);
  sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v132, v133, v134);
  v135 = sub_10DA6C0(a2, (__int64)&ptr);
  sub_10DC5D0(a3, v135);
  if ( (unsigned __int8)sub_21B9810(v131, 535) )
  {
    v139 = *(const char ***)(v131 + 48);
    v140 = nullptr;
    v141 = (char *)*v139;
    if ( *v139 )
      v140 = &v141[j__strlen(*v139)];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
    *(__m128i *)&ptr.m256i_u64[1] = si128;
    sub_A1FE50(&ptr, v141, v140);
    v447 = 257;
    v437 = 259;
    v444 = 257;
    v440 = 257;
    v435.m128i_i64[0] = (__int64)"default_%m.profraw";
    sub_228A3B0(&ptr, &v435, &v438, v441, v412);
    v444 = 261;
    *(_OWORD *)v441 = *(_OWORD *)ptr.m256i_i8;
    v437 = 259;
    v435.m128i_i64[0] = (__int64)"cs-profile-path=";
    v432 = 257;
    if ( v405.m128_i8[0] )
    {
      LOBYTE(v432) = 3;
      v431[0].m128i_i64[0] = (__int64)s2;
    }
    v430 = 257;
    if ( (_BYTE)v406 )
    {
      LOBYTE(v430) = 3;
      v429[0].m128i_i64[0] = (__int64)s;
    }
LABEL_144:
    sub_A41580(v433, v429, v431, 261, v142, v143);
    sub_A41580(&v438, v433, &v435, v144, v145, v146);
    sub_A41580(v412, &v438, (const __m128i *)v441, v147, v148, v149);
    v150 = sub_10DA6C0(a2, (__int64)v412);
    sub_10DC5D0(a3, v150);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
      free((void *)ptr.m256i_i64[0]);
    goto LABEL_146;
  }
  v445.m128i_i64[0] = (__int64)"cs-profile-path=default_%m.profraw";
  v447 = 259;
  v440 = 257;
  if ( v405.m128_i8[0] )
  {
    LOBYTE(v440) = 3;
    v438.m128i_i64[0] = (__int64)s2;
  }
  v437 = 257;
  if ( (_BYTE)v406 )
  {
    LOBYTE(v437) = 3;
    v435.m128i_i64[0] = (__int64)s;
  }
  sub_A41580((__m128i *)v441, &v435, &v438, v136, v137, v138);
  sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v314, v315, v316);
  v317 = sub_10DA6C0(a2, (__int64)&ptr);
  sub_10DC5D0(a3, v317);
LABEL_146:
  if ( (unsigned __int8)sub_21B7850(a2, 888, 1194, 0) )
  {
    if ( a1[453] == 3 )
    {
      v445.m128i_i64[0] = (__int64)"-enable-jmc-instrument";
      v447 = 259;
      v444 = 257;
      if ( *s )
      {
        v441[0] = s;
        LOBYTE(v444) = 3;
      }
      sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v151, v152, v153);
      v154 = sub_10DA6C0(a2, (__int64)&ptr);
      sub_10DC5D0(a3, v154);
    }
    else
    {
      sub_FC70B0((__int64)&ptr, *v408, 0, 554);
      sub_AEA040((__int64)&ptr);
    }
  }
  if ( a1[16] == 17
    && ((v441[0] = (void *)sub_22B7A20(v411), v441[1] = v312, (unsigned __int8)sub_22B7EA0(v411))
     && LODWORD(v441[0]) <= 0x14
      ? (v445 = (__m128i)0x1DuLL,
         *(_OWORD *)ptr.m256i_i8 = 0x15u,
         v313 = sub_A09E20((unsigned int *)&ptr, (unsigned int *)v412))
      : (*(_OWORD *)ptr.m256i_i8 = 0x1Du, v313 = sub_A09E20((unsigned int *)v441, (unsigned int *)&ptr)),
        v313)
    || (v155 = a1[15], v155 == 12)
    || (v156 = a1[16], v155 == 15) && v156 == 29 )
  {
    v157 = 1;
  }
  else
  {
    v157 = (v155 == 39) | (unsigned __int8)(v156 == 49);
  }
  if ( (unsigned __int8)sub_21B7850(a2, 656, 1119, v157) )
  {
    v445.m128i_i64[0] = (__int64)"-emulated-tls";
    v447 = 259;
    v444 = 257;
    if ( *s )
    {
      v441[0] = s;
      LOBYTE(v444) = 3;
    }
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v158, v159, v160);
    v161 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v161);
  }
  if ( sub_11BD5E0((__int64)a1, a2) )
  {
    v445.m128i_i64[0] = (__int64)"-enable-tlsdesc";
    v447 = 259;
    v444 = 257;
    if ( *s )
    {
      v441[0] = s;
      LOBYTE(v444) = 3;
    }
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v162, v163, v164);
    v165 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v165);
  }
  if ( (unsigned __int8)sub_21B7850(a2, 1828, 1419, 0) )
  {
    v445.m128i_i64[0] = (__int64)"-stack-size-section";
    v447 = 259;
    v444 = 257;
    if ( *s )
    {
      v441[0] = s;
      LOBYTE(v444) = 3;
    }
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, v412, v166, v167, v168);
    v169 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v169);
  }
  sub_11C0CF0(v412, a2, (__int64)v407, v21, (void **)v408);
  if ( v445.m128i_i64[1] )
  {
    v435.m128i_i64[0] = (__int64)"stats-file=";
    v444 = 261;
    v76 = *s == 0;
    v437 = 259;
    *(__m128i *)v441 = v445;
    v434 = 257;
    if ( !v76 )
    {
      v433[0].m128i_i64[0] = (__int64)s;
      LOBYTE(v434) = 3;
    }
    sub_A41580(&v438, v433, &v435, v170, v171, v172);
    sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v173, v174, v175);
    v176 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v176);
  }
  v177 = sub_10DCD30(a2, 0x212u);
  if ( v177 )
  {
    v179 = **(_BYTE ***)(v177 + 48);
    v444 = 257;
    if ( *v179 )
    {
      v441[0] = v179;
      LOBYTE(v444) = 3;
    }
    v435.m128i_i64[0] = (__int64)"-crash-diagnostics-dir=";
    v437 = 259;
    v434 = 257;
    if ( *s )
    {
      v433[0].m128i_i64[0] = (__int64)s;
      LOBYTE(v434) = 3;
    }
    sub_A41580(&v438, v433, &v435, v178, 259, 257);
    sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v180, v181, v182);
    v183 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v183);
  }
  v184 = j__strlen(s);
  sub_11C1F00(v408, a2, a3, 1, (__int64)s, v184);
  v185 = j__strlen(s);
  v186 = sub_10DCD30(a2, 0xC9Du);
  if ( v186 )
  {
    v189 = **(_BYTE ***)(v186 + 48);
    v444 = 257;
    if ( *v189 )
    {
      v441[0] = v189;
      LOBYTE(v444) = 3;
    }
    v435.m128i_i64[0] = (__int64)"-pass-remarks=";
    v434 = 261;
    v437 = 259;
    v433[0].m128i_i64[0] = (__int64)s;
    v433[0].m128i_i64[1] = v185;
    sub_A41580(&v438, v433, &v435, 259, v187, v188);
    sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v190, v191, v192);
    v193 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v193);
  }
  v194 = sub_10DCD30(a2, 0xC9Cu);
  if ( v194 )
  {
    v198 = **(_BYTE ***)(v194 + 48);
    v444 = 257;
    if ( *v198 )
    {
      v441[0] = v198;
      LOBYTE(v444) = 3;
    }
    v433[0].m128i_i64[1] = v185;
    v435.m128i_i64[0] = (__int64)"-pass-remarks-missed=";
    v434 = 261;
    v437 = 259;
    v433[0].m128i_i64[0] = (__int64)s;
    sub_A41580(&v438, v433, &v435, v195, v196, v197);
    sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v199, v200, v201);
    v202 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v202);
  }
  v203 = sub_10DCD30(a2, 0xC9Bu);
  if ( v203 )
  {
    v207 = **(_BYTE ***)(v203 + 48);
    v444 = 257;
    if ( *v207 )
    {
      v441[0] = v207;
      LOBYTE(v444) = 3;
    }
    v433[0].m128i_i64[1] = v185;
    v435.m128i_i64[0] = (__int64)"-pass-remarks-analysis=";
    v437 = 259;
    v433[0].m128i_i64[0] = (__int64)s;
    v434 = 261;
    sub_A41580(&v438, v433, &v435, v204, v205, v206);
    sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v208, v209, v210);
    v211 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v211);
  }
  if ( (unsigned __int8)sub_10DBA30(a2) )
  {
    v406 = (__m128i *)j__strlen(s);
    v341 = sub_10DCD30(a2, 0x6F7u);
    if ( v341 )
    {
      v342 = *(const char ***)(v341 + 48);
      v343 = 0;
      v344 = (char *)*v342;
      if ( *v342 )
        v343 = j__strlen(*v342);
    }
    else
    {
      v343 = 4;
      v344 = "yaml";
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
    *(__m128i *)&ptr.m256i_u64[1] = si128;
    v345 = sub_10DCD30(a2, 0x61Eu);
    if ( v345 )
    {
      v347 = nullptr;
      v348 = **(char ***)(v345 + 48);
      if ( v348 )
LABEL_353:
        v347 = &v348[j__strlen(v348)];
    }
    else
    {
      if ( *((_DWORD *)v407 + 2) != 1 )
        goto LABEL_355;
      v348 = *v407;
      v347 = nullptr;
      if ( *v407 )
        goto LABEL_353;
    }
    ptr.m256i_i64[1] = 0;
    sub_A1FE50(&ptr, v348, v347);
LABEL_355:
    v429[0].m128i_i64[0] = (__int64)".opt.ld.";
    v426 = 261;
    v433[0] = *(__m128i *)ptr.m256i_i8;
    v430 = 259;
    v438.m128i_i64[0] = (__int64)"opt-remarks-filename=";
    v434 = 261;
    v441[0] = s;
    v440 = 259;
    v444 = 261;
    v424.m128i_i64[1] = v343;
    v441[1] = v406;
    v424.m128i_i64[0] = (__int64)v344;
    sub_A41580(&v435, (const __m128i *)v441, &v438, v346, 261, 259);
    v405.m128_u64[0] = (unsigned __int64)v433;
    sub_A41580(v431, &v435, v433, v349, v350, v351);
    sub_A41580(&v427, v431, v429, (__int64)&v427, v352, v353);
    v407 = v423;
    sub_A41580((__m128i *)v423, &v427, &v424, (__int64)&v427, v354, v355);
    v356 = sub_10DA6C0(a2, (__int64)v423);
    sub_10DC5D0(a3, v356);
    v357 = sub_10DCD30(a2, 0x61Fu);
    if ( v357 )
    {
      v361 = **(_BYTE ***)(v357 + 48);
      v434 = 257;
      if ( *v361 )
      {
        v433[0].m128i_i64[0] = (__int64)v361;
        LOBYTE(v434) = 3;
      }
      v438.m128i_i64[0] = (__int64)"opt-remarks-passes=";
      v440 = 259;
      v444 = 261;
      v441[0] = s;
      v441[1] = v406;
      sub_A41580(&v435, (const __m128i *)v441, &v438, 257, v359, v360);
      sub_A41580(v431, &v435, (const __m128i *)v405.m128_u64[0], v362, v363, v364);
      v365 = sub_10DA6C0(a2, (__int64)v431);
      sub_10DC5D0(a3, v365);
    }
    v434 = 257;
    if ( *v344 )
    {
      v433[0].m128i_i64[0] = (__int64)v344;
      LOBYTE(v434) = 3;
    }
    v438.m128i_i64[0] = (__int64)"opt-remarks-format=";
    v440 = 259;
    v444 = 261;
    v441[0] = s;
    v441[1] = v406;
    sub_A41580(&v435, (const __m128i *)v441, &v438, v358, v359, v360);
    sub_A41580(v431, &v435, (const __m128i *)v405.m128_u64[0], v366, v367, v368);
    v369 = sub_10DA6C0(a2, (__int64)v431);
    sub_10DC5D0(a3, v369);
    if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
      free((void *)ptr.m256i_i64[0]);
  }
  v212 = j__strlen(s);
  if ( (unsigned __int8)sub_21B7850(a2, 611, 1095, 0) )
  {
    v441[0] = "opt-remarks-with-hotness";
    v444 = 259;
    v440 = 261;
    v438.m128i_i64[1] = v212;
    v438.m128i_i64[0] = (__int64)s;
    sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v213, v214, v215);
    v340 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v340);
  }
  v216 = sub_10DCD30(a2, 0x25Du);
  if ( v216 )
  {
    v220 = **(_BYTE ***)(v216 + 48);
    v444 = 257;
    if ( *v220 )
    {
      v441[0] = v220;
      LOBYTE(v444) = 3;
    }
    v433[0].m128i_i64[1] = v212;
    v435.m128i_i64[0] = (__int64)"opt-remarks-hotness-threshold=";
    v437 = 259;
    v433[0].m128i_i64[0] = (__int64)s;
    v434 = 261;
    sub_A41580(&v438, v433, &v435, v217, v218, v219);
    sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v221, v222, v223);
    v224 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v224);
  }
  j__strlen(s);
  sub_11BF6C0(v408, a2, a3, (__int64)(a1 + 440), 1, v225, si128);
  LODWORD(v406) = a1[17];
  sub_10DC500((__int64)v441, a2, 0xD4Bu);
  v226 = (__int64 *)v441[0];
  v424 = _mm_load_si128((const __m128i *)v441);
  v425 = v442;
  v414 = v443;
  if ( v443 != v441[0] )
  {
    LOBYTE(v407) = 0;
    v415 = &v424;
    LOBYTE(v417) = 0;
    v411 = a1;
    v405 = _mm_loadh_ps((const double *)&off_2BAEC00);
    while ( 1 )
    {
      v227 = *v226;
      v228 = *(const char ***)(*v226 + 48);
      v229 = &v228[*(unsigned int *)(*v226 + 56)];
      if ( v228 == v229 )
        goto LABEL_243;
      do
      {
        while ( 1 )
        {
          v236 = *v228;
          v237 = 0;
          v420 = v236;
          if ( v236 )
            v237 = strlen(v236);
          v421 = v237;
          ptr.m256i_i8[0] = 61;
          v235 = sub_2246AB0(&v420, &ptr, 1, 0);
          if ( v235 == -1 )
          {
            v235 = v421;
            v233 = (__int64)v420;
            v232 = 0;
            v234 = nullptr;
            v230 = v421;
          }
          else
          {
            v230 = v421;
            v231 = v235 + 1;
            if ( v235 + 1 > v421 )
            {
              v231 = v421;
              v232 = 0;
            }
            else
            {
              v232 = v421 - v231;
            }
            v233 = (__int64)v420;
            v234 = (char *)&v420[v231];
            if ( v235 > v421 )
              v235 = v421;
          }
          if ( v235 == 9 && *(_QWORD *)v233 == 0x6D797370616D6D2DLL && *(_BYTE *)(v233 + 8) == 115 )
            break;
          if ( v230 == 6 )
          {
            if ( *(_DWORD *)v233 == 1919102253 && *(_WORD *)(v233 + 4) == 27749 )
            {
              LOBYTE(v417) = 1;
              goto LABEL_239;
            }
          }
          else if ( v230 == 9 && *(_QWORD *)v233 == 0x6572632D6F6E2D2DLL && *(_BYTE *)(v233 + 8) == 108 )
          {
            LOBYTE(v417) = 0;
            goto LABEL_239;
          }
          if ( v229 == ++v228 )
            goto LABEL_242;
        }
        s2 = v234;
        n = v232;
        v287 = j__strlen("implicit");
        v288 = (void *)n;
        LOBYTE(v407) = 0;
        v289 = s2;
        if ( v287 == n )
        {
          LOBYTE(v407) = 1;
          if ( n )
          {
            v290 = n;
            v291 = s2;
            s2 = (void *)n;
            n = (size_t)v289;
            v292 = memcmp(v291, "implicit", v290);
            v288 = s2;
            v289 = (void *)n;
            LOBYTE(v407) = v292 == 0;
          }
        }
        *(__m128i *)v423 = _mm_load_si128((const __m128i *)&v405);
        if ( (_DWORD)v406 == 3 )
        {
          LODWORD(n) = v411[12];
          if ( (unsigned int)(n - 3) <= 2 )
          {
            if ( !v423[0] )
            {
              if ( !v288 )
                goto LABEL_239;
              goto LABEL_291;
            }
            s2 = v289;
            n = (size_t)v288;
            v416 = v423[0];
            v298 = strlen(v423[0]);
            v288 = (void *)n;
            v289 = s2;
            if ( v298 == n )
            {
              if ( !n )
                goto LABEL_239;
              v299 = n;
              v300 = s2;
              s2 = (void *)n;
              n = (size_t)v289;
              v301 = memcmp(v416, v300, v299);
              v289 = (void *)n;
              v288 = s2;
              if ( !v301 )
                goto LABEL_239;
LABEL_291:
              v302 = v423[1];
              if ( v423[1] )
              {
LABEL_292:
                s2 = v289;
                n = (size_t)v288;
                v416 = v302;
                v303 = strlen(v302);
                v288 = (void *)n;
                v289 = s2;
                if ( v303 == n )
                {
                  if ( !n )
                    goto LABEL_239;
                  v304 = n;
                  v305 = s2;
                  s2 = (void *)n;
                  n = (size_t)v289;
                  v306 = memcmp(v416, v305, v304);
                  v289 = (void *)n;
                  v288 = s2;
                  if ( !v306 )
                    goto LABEL_239;
                }
              }
            }
            else
            {
              v302 = v423[1];
              if ( v423[1] )
                goto LABEL_292;
              if ( !n )
                goto LABEL_239;
            }
            v416 = v289;
            v307 = *v408;
            s2 = v288;
            sub_FC70B0((__int64)&ptr, v307, 0, 497);
            v431[0].m128i_i64[0] = v233;
            v435.m128i_i64[0] = (__int64)"=";
            v437 = 259;
            v430 = 259;
            v429[0].m128i_i64[0] = (__int64)"-Wa,";
            v432 = 261;
            v431[0].m128i_i64[1] = 9;
            sub_A41580(v433, v429, v431, 261, v308, v309);
            n = (size_t)&v438;
            sub_A41580(&v438, v433, &v435, (__int64)&v438, v310, v311);
            sub_2253560(&v427, n);
            sub_AEC220((unsigned __int8 **)&ptr, v427.m128i_i64[0], v427.m128i_i64[1]);
            v297 = v416;
            v296 = s2;
            goto LABEL_283;
          }
        }
        sub_FC70B0((__int64)&ptr, *v408, 0, 495);
        v431[0].m128i_i64[0] = v233;
        v435.m128i_i64[0] = (__int64)"=";
        v437 = 259;
        v429[0].m128i_i64[0] = (__int64)"-Wa,";
        v432 = 261;
        v430 = 259;
        v431[0].m128i_i64[1] = 9;
        sub_A41580(v433, v429, v431, v293, 261, 259);
        n = (size_t)&v438;
        sub_A41580(&v438, v433, &v435, (__int64)&v438, v294, v295);
        sub_2253560(&v427, n);
        sub_AEC220((unsigned __int8 **)&ptr, v427.m128i_i64[0], v427.m128i_i64[1]);
        v296 = *((void **)v411 + 3);
        v297 = *((_BYTE **)v411 + 2);
LABEL_283:
        sub_AEC220((unsigned __int8 **)&ptr, v297, (signed __int64)v296);
        if ( (__int64 *)v427.m128i_i64[0] != &v428 )
          operator delete((void *)v427.m128i_i64[0]);
        sub_AEA040((__int64)&ptr);
LABEL_239:
        v262 = *(_QWORD *)(v227 + 16);
        if ( !v262 )
          v262 = v227;
        ++v228;
        *(_BYTE *)(v262 + 44) |= 1u;
      }
      while ( v229 != v228 );
LABEL_242:
      v226 = (__int64 *)v424.m128i_i64[0];
LABEL_243:
      v424.m128i_i64[0] = (__int64)(v226 + 1);
      sub_10DFFA0((__int64)v415);
      v226 = (__int64 *)v424.m128i_i64[0];
      if ( v414 == (__m128i *)v424.m128i_i64[0] )
      {
        v7 = v411;
        if ( (_BYTE)v417 )
        {
          if ( (_DWORD)v406 == 3 && (unsigned int)(v411[12] - 16) > 3 )
          {
            v441[0] = "-crel";
            v444 = 259;
            v440 = 257;
            if ( *s )
            {
              v438.m128i_i64[0] = (__int64)s;
              LOBYTE(v440) = 3;
            }
            sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v263, v264, v265);
            v397 = sub_10DA6C0(a2, (__int64)&ptr);
            sub_10DC5D0(a3, v397);
          }
          else
          {
            v266 = v408;
            sub_FC70B0((__int64)&ptr, *v408, 0, 495);
            sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)"-Wa,--crel", 1u);
            v441[0] = &v442;
            sub_11BA820(v441, (_BYTE *)v266[118], v266[118] + v266[119]);
            sub_AEC220((unsigned __int8 **)&ptr, (_BYTE *)v441[0], (signed __int64)v441[1]);
            if ( v441[0] != &v442 )
              operator delete(v441[0]);
            sub_AEA040((__int64)&ptr);
          }
        }
        if ( (_BYTE)v407 )
        {
          v441[0] = "-implicit-mapsyms";
          v444 = 259;
          v440 = 257;
          if ( *s )
          {
            v438.m128i_i64[0] = (__int64)s;
            LOBYTE(v440) = 3;
          }
          sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v263, v264, v265);
          v267 = sub_10DA6C0(a2, (__int64)&ptr);
          sub_10DC5D0(a3, v267);
        }
        break;
      }
    }
  }
  if ( sub_10DCD30(a2, 0x74Au) )
  {
    v441[0] = "-time-passes";
    v444 = 259;
    v440 = 257;
    if ( *s )
    {
      v438.m128i_i64[0] = (__int64)s;
      LOBYTE(v440) = 3;
    }
    sub_A41580((__m128i *)&ptr, &v438, (const __m128i *)v441, v268, v269, v270);
    v271 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v271);
  }
  v272 = sub_10DCD30(a2, 0x745u);
  if ( v272 )
  {
    v276 = **(_BYTE ***)(v272 + 48);
    v440 = 257;
    if ( *v276 )
    {
      v438.m128i_i64[0] = (__int64)v276;
      LOBYTE(v440) = 3;
    }
    v444 = 259;
    v441[0] = "--thinlto-distributor=";
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, &v438, v273, v274, v275);
    v277 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v277);
    v281 = *(_BYTE **)(*((_QWORD *)v7 + 1) + 136LL);
    v440 = 257;
    if ( *v281 )
    {
      v438.m128i_i64[0] = (__int64)v281;
      LOBYTE(v440) = 3;
    }
    v444 = 259;
    v282 = &v435;
    v441[0] = "--thinlto-remote-compiler=";
    sub_A41580((__m128i *)&ptr, (const __m128i *)v441, &v438, v278, v279, v280);
    v283 = sub_10DA6C0(a2, (__int64)&ptr);
    sub_10DC5D0(a3, v283);
    sub_21B7150(&v435, a2, 3507);
    if ( v435.m128i_i64[1] != v435.m128i_i64[0] )
    {
      v406 = &v435;
      v285 = v435.m128i_i64[1];
      v284 = v435.m128i_i64[0];
      do
      {
        while ( 1 )
        {
          v438.m128i_i64[0] = (__int64)v439;
          sub_11BA820(&v438, *(_BYTE **)v284, *(_QWORD *)v284 + *(_QWORD *)(v284 + 8));
          sub_C05100((__int64)v441, "--thinlto-distributor-arg=", (__int64)&v438);
          v449 = 260;
          ptr.m256i_i64[0] = (__int64)v441;
          v286 = sub_10DA6C0(a2, (__int64)&ptr);
          sub_10DC5D0(a3, v286);
          if ( v441[0] != &v442 )
            operator delete(v441[0]);
          if ( (_DWORD *)v438.m128i_i64[0] == v439 )
            break;
          operator delete((void *)v438.m128i_i64[0]);
          v284 += 32;
          if ( v285 == v284 )
            goto LABEL_269;
        }
        v284 += 32;
      }
      while ( v285 != v284 );
LABEL_269:
      v282 = v406;
    }
    sub_9B4A30((void ***)v282);
  }
  if ( (unsigned __int64 *)v445.m128i_i64[0] != &v412[1].m128i_u64[1] )
    free((void *)v445.m128i_i64[0]);
  if ( (__m128i *)v422[0].m128i_i64[0] != &v418[1] )
    operator delete((void *)v422[0].m128i_i64[0]);
}
