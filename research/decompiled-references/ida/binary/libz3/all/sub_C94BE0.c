__int64 __fastcall sub_C94BE0(__int64 a1, __int64 ***a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  char *v9; // rdi
  int v10; // ecx
  __int64 v11; // rsi
  char *v12; // rax
  char *v13; // rdx
  unsigned int v14; // r12d
  size_t v15; // rbp
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  _OWORD *v18; // rdx
  __int64 v19; // rsi
  _QWORD *v20; // r14
  int v21; // ecx
  unsigned int v22; // edi
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  char *v25; // rbp
  char *v26; // r12
  void *v27; // r13
  _QWORD *v28; // rsi
  unsigned int v29; // edi
  void *v30; // rdi
  void *v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // r12
  _QWORD *v34; // r15
  _OWORD *v35; // rax
  const char *v36; // rsi
  __int64 **v37; // rdx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 **v41; // r12
  __int64 *v42; // rdx
  unsigned int v43; // r13d
  __int64 *v44; // rax
  int v45; // edx
  __int64 *v46; // rax
  __int64 v47; // rdx
  char v48; // al
  unsigned int v49; // eax
  __int64 *v50; // rcx
  __int64 *v51; // rdx
  char v52; // al
  unsigned int v53; // eax
  int v54; // eax
  char v55; // di
  __int64 *v56; // rsi
  __int64 **v57; // r14
  __int64 *v58; // rax
  int v59; // edi
  const char **v60; // rax
  char v61; // al
  __int64 *v62; // rbp
  __int64 v63; // rax
  __int64 v64; // rsi
  unsigned int v65; // r12d
  __int64 v66; // rsi
  __int64 v67; // rcx
  char v68; // dl
  unsigned int v69; // edx
  int v70; // edx
  __int64 *v71; // rax
  __int64 *v72; // r12
  __int64 *v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // ebx
  __int64 v76; // rbp
  char *v77; // rdi
  void (__fastcall ***v78)(_QWORD); // rbx
  __int64 result; // rax
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rcx
  char v83; // dl
  unsigned int v84; // edx
  int v85; // edx
  __int64 v86; // rax
  __int64 v87; // r12
  _DWORD *v88; // rax
  __int64 v89; // rbp
  __int64 v90; // r12
  __int64 *v91; // r13
  __int64 v92; // rsi
  __int64 v93; // r14
  _DWORD *v94; // rax
  __int64 *v95; // r13
  __int64 v96; // rsi
  __int64 v97; // r13
  __int64 v98; // rax
  _QWORD *v99; // r14
  _QWORD *v100; // r15
  __int64 v101; // rsi
  __int64 v102; // rdi
  _QWORD *v103; // r14
  _QWORD *v104; // r15
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // r14
  __int64 v109; // r15
  __int64 *v110; // r13
  __int64 v111; // rsi
  _DWORD *v112; // rcx
  __int64 v113; // r13
  __int64 *v114; // r12
  __int64 v115; // rsi
  __int64 v116; // rdx
  char v117; // al
  unsigned int v118; // eax
  int v119; // eax
  __int64 *v120; // rsi
  __int64 v121; // rax
  __int64 *v122; // r13
  __int64 v123; // rax
  int v124; // edx
  __int64 *v125; // rbp
  __int64 *v126; // r14
  __int64 v127; // r13
  __int64 v128; // rax
  char *v129; // rdx
  __int64 v130; // rax
  unsigned int v131; // ecx
  int v132; // esi
  __int64 v133; // r8
  char *v134; // rcx
  __int64 v135; // r8
  char *v136; // rdi
  char *jj; // r12
  __int64 v138; // rax
  void *v139; // r12
  void *v140; // r12
  __int64 v141; // r12
  __int64 v142; // rax
  _QWORD *v143; // rcx
  unsigned int v144; // edx
  int v145; // edi
  _QWORD *v146; // rsi
  __int64 v147; // rdx
  _QWORD *v148; // r8
  _QWORD *v149; // rax
  __int64 v150; // rdx
  void *v151; // r13
  void *v152; // r13
  void *v153; // r12
  __int64 *v154; // rax
  void *v155; // rsi
  __int64 *v156; // rbp
  __int64 v157; // rax
  __int64 v158; // rbx
  void (__fastcall ***v159)(void *); // r12
  __int64 *v160; // r12
  unsigned int v161; // edx
  unsigned int v162; // ebx
  __int64 v163; // rbp
  char *v164; // rdi
  void (__fastcall ***v165)(_QWORD); // rbx
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  void *v169; // rdi
  int v170; // edx
  int v171; // edx
  void *v172; // rdi
  __int64 v173; // rax
  int v174; // edi
  _QWORD *v175; // rcx
  unsigned int v176; // edx
  _QWORD *v177; // rsi
  __int64 v178; // rdx
  _QWORD *v179; // r8
  _QWORD *nn; // rdx
  _QWORD *v181; // rax
  __int64 v182; // rax
  __int64 v183; // rax
  int v184; // edi
  __int64 *v185; // rcx
  __int64 v186; // rax
  unsigned int v187; // edx
  __int64 *v188; // rsi
  __int64 v189; // rdx
  __int64 *v190; // r10
  __int64 *i1; // rax
  __int64 v192; // rdx
  void *v193; // rdi
  int v194; // eax
  int v195; // eax
  char v196; // al
  void *v197; // r12
  void *v198; // r12
  __int64 v199; // rax
  int v200; // edi
  _QWORD *v201; // rcx
  unsigned int v202; // edx
  _QWORD *v203; // rsi
  __int64 v204; // rdx
  _QWORD *v205; // r8
  _QWORD *kk; // rdx
  _QWORD *v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  int v210; // edi
  __int64 *v211; // rcx
  __int64 v212; // rax
  unsigned int v213; // edx
  __int64 *v214; // rsi
  __int64 v215; // rdx
  __int64 *v216; // r10
  __int64 *mm; // rax
  __int64 v218; // rdx
  __int64 v219; // rax
  int v220; // edx
  __int64 *v221; // rax
  __int64 v222; // rax
  int v223; // edx
  _QWORD *v224; // rax
  __int64 v225; // rax
  int v226; // edx
  __int64 *v227; // rax
  int v228; // edx
  int v229; // eax
  __int64 v230; // rdx
  int v231; // edx
  int v232; // eax
  __int64 v233; // rdx
  __int64 v234; // r13
  __int64 v235; // rax
  __int64 *v236; // rcx
  int v237; // edi
  unsigned int v238; // edx
  __int64 *v239; // rsi
  __int64 v240; // rdx
  __int64 *v241; // r8
  __int64 *k; // rax
  __int64 v243; // rdx
  void *v244; // rbp
  void *v245; // rdi
  void *v246; // r12
  __int64 v247; // rbx
  _QWORD *v248; // rdi
  __int64 v249; // rax
  __int64 v250; // rax
  __int64 v251; // rbx
  _QWORD *v252; // rdi
  __int64 v253; // rax
  __int64 v254; // rax
  __int64 v255; // rsi
  _DWORD *v256; // rax
  void *v257; // rbp
  __int64 v258; // rsi
  _DWORD *v259; // rax
  void *v260; // r13
  size_t v261; // rsi
  __int64 v262; // rax
  unsigned int v263; // ebx
  __int64 v264; // rax
  __int64 v265; // r12
  __int64 *v266; // r13
  __int64 v267; // rax
  __int64 v268; // r13
  __int64 v269; // r12
  __int64 *v270; // r14
  __int64 v271; // rsi
  __int64 v272; // rdx
  char v273; // al
  unsigned int v274; // eax
  int v275; // eax
  __int64 *v276; // rsi
  __int64 v277; // rax
  __int64 v278; // rax
  char *v279; // rdx
  unsigned int v280; // ecx
  int v281; // esi
  __int64 v282; // r8
  char *v283; // rcx
  __int64 v284; // r8
  char *v285; // rdi
  char *n; // r14
  __int64 v287; // rax
  void *v288; // r13
  void *v289; // r14
  __int64 *v290; // r8
  __int64 v291; // rax
  char *v292; // rdx
  unsigned int v293; // ecx
  int v294; // esi
  __int64 v295; // r9
  char *v296; // rcx
  __int64 v297; // r9
  char *v298; // rdi
  char *ii; // r14
  __int64 v300; // rax
  __int64 *v301; // rsi
  void *v302; // r14
  void *v303; // r13
  void *v304; // rbp
  __int64 v305; // rbp
  __int64 v306; // rax
  __int64 v307; // r15
  __int64 v308; // rbp
  __int64 *v309; // r12
  __int64 v310; // rsi
  __int64 v311; // rdx
  char m; // al
  unsigned int v313; // eax
  int v314; // eax
  __int64 *v315; // rsi
  __int64 v316; // rax
  __int64 v317; // rax
  __int64 v318; // rax
  __int64 v319; // rax
  void *v320; // r13
  void *v321; // rdi
  int v322; // eax
  int v323; // eax
  char v324; // al
  void *v325; // r14
  void *v326; // r14
  char v327; // r13
  void *v328; // r14
  char v329; // al
  __int64 *v330; // rsi
  __int64 *v331; // rdi
  int v332; // eax
  int v333; // eax
  char v334; // al
  void *v335; // r14
  void *v336; // r14
  void *v337; // r14
  char v338; // al
  char v339; // al
  __int64 *v340; // rsi
  void *v341; // r13
  char v342; // al
  void *v343; // rdi
  __int64 v344; // rax
  int v345; // edx
  __int64 v346; // r13
  _QWORD *v347; // rax
  unsigned int v348; // edx
  __int64 v349; // rcx
  int v350; // edx
  _QWORD *v351; // rcx
  __int64 v352; // rsi
  __int64 v353; // rax
  __int64 *v354; // rsi
  int *v355; // rdx
  void *v356; // rdi
  unsigned int v357; // edi
  unsigned int v358; // edx
  __int64 *v359; // r8
  __int64 *v360; // r9
  char *v361; // r14
  __int64 v362; // rdi
  char *v363; // rax
  _DWORD *v364; // rdx
  char *v365; // rdi
  int v366; // ecx
  char v367; // si
  __int64 v368; // rcx
  char v369; // si
  __int64 v370; // rcx
  __int64 v371; // rdx
  char *v372; // r13
  __int64 v373; // rax
  char *v374; // rbx
  __int64 v375; // r14
  char *v376; // rdi
  unsigned int v377; // r14d
  unsigned int v378; // ecx
  unsigned int *v379; // rdx
  _QWORD *v380; // rdi
  __int64 v381; // rcx
  __int64 i; // rax
  __int64 v383; // rax
  void *v384; // r14
  char v385; // al
  unsigned __int64 v386; // rax
  void *v387; // r14
  int v388; // eax
  void *v389; // r12
  char v390; // al
  unsigned __int64 v391; // rax
  int v392; // eax
  void *v393; // r14
  __int64 i2; // rax
  _QWORD *v395; // rax
  _QWORD *v396; // rdi
  _QWORD *v397; // rax
  __int64 j; // rax
  char **exception; // rbx
  void *v400; // r15
  _QWORD *v401; // rsi
  char **v402; // rbx
  void *v403; // r15
  _QWORD *v404; // rsi
  __int64 **v406; // [rsp+0h] [rbp-158h]
  int v407; // [rsp+0h] [rbp-158h]
  int v408; // [rsp+0h] [rbp-158h]
  unsigned int v409; // [rsp+8h] [rbp-150h]
  __int64 v410; // [rsp+8h] [rbp-150h]
  void *v411[2]; // [rsp+10h] [rbp-148h] BYREF
  int v412[2]; // [rsp+20h] [rbp-138h] BYREF
  void *v413; // [rsp+28h] [rbp-130h]
  void *v414; // [rsp+30h] [rbp-128h]
  __int64 *v415; // [rsp+38h] [rbp-120h]
  __int64 *v416; // [rsp+40h] [rbp-118h]
  __int64 v417; // [rsp+48h] [rbp-110h]
  void *ptr; // [rsp+50h] [rbp-108h]
  _QWORD *v419; // [rsp+58h] [rbp-100h]
  char *v420; // [rsp+60h] [rbp-F8h]
  __int64 v421; // [rsp+68h] [rbp-F0h]
  void *v422; // [rsp+70h] [rbp-E8h] BYREF
  char v423[8]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v424; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v425; // [rsp+88h] [rbp-D0h]
  __m128i si128; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v427; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v428; // [rsp+A8h] [rbp-B0h]
  __int64 v429; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v430; // [rsp+B8h] [rbp-A0h]
  __int64 v431; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v432; // [rsp+C8h] [rbp-90h]
  __int64 v433; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v434; // [rsp+D8h] [rbp-80h]
  char v435; // [rsp+E0h] [rbp-78h]
  __int64 v436; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v437; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v438; // [rsp+100h] [rbp-58h] BYREF
  __int64 v439; // [rsp+108h] [rbp-50h] BYREF
  __int64 v440; // [rsp+110h] [rbp-48h]
  char v441; // [rsp+118h] [rbp-40h]

  v3 = a1;
  v4 = *(_QWORD **)(a1 + 624);
  v417 = a3;
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = *(_QWORD *)(v3 + 616);
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_8;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_8:
    v4 = *(_QWORD **)(v3 + 624);
    if ( v4 )
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
  }
  if ( *(_DWORD *)(v3 + 772) || *(_DWORD *)(v3 + 776) )
  {
    v9 = *(char **)(v3 + 760);
    v10 = 0;
    v11 = *(unsigned int *)(v3 + 768);
    v12 = v9;
    v13 = &v9[16 * v11];
    if ( v9 == v13 )
      goto LABEL_25;
    do
    {
      while ( *(_QWORD *)v12 )
      {
        *(_QWORD *)v12 = 0;
        v12 += 16;
        if ( v13 == v12 )
          goto LABEL_17;
      }
      v12 += 16;
      ++v10;
    }
    while ( v13 != v12 );
LABEL_17:
    if ( (unsigned int)v11 <= 0x10 || 3 * (int)v11 >= (unsigned int)(4 * v10) )
      goto LABEL_25;
    if ( v9 )
    {
      sub_186B220(v9);
      v14 = *(_DWORD *)(v3 + 768);
      *(_QWORD *)(v3 + 760) = 0;
      v14 >>= 1;
      *(_DWORD *)(v3 + 768) = v14;
      v15 = v14;
      v16 = (_OWORD *)sub_186B270(v15 * 16);
      if ( !v14 )
      {
LABEL_24:
        *(_QWORD *)(v3 + 760) = v16;
LABEL_25:
        *(_QWORD *)(v3 + 772) = 0;
        goto LABEL_26;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 760) = 0;
      v261 = (unsigned int)v11 >> 1;
      *(_DWORD *)(v3 + 768) = v261;
      v15 = v261;
      v16 = (_OWORD *)sub_186B270(16 * v261);
    }
    v17 = &v16[v15];
    v18 = v16;
    if ( ((v15 * 16) & 0x10) == 0 || (v18 = v16 + 1, *v16 = 0, v16 + 1 != v17) )
    {
      do
      {
        *v18 = 0;
        v18 += 2;
        *(v18 - 1) = 0;
      }
      while ( v18 != v17 );
    }
    goto LABEL_24;
  }
LABEL_26:
  if ( *(_DWORD *)(v3 + 796) || *(_DWORD *)(v3 + 800) )
  {
    v19 = *(unsigned int *)(v3 + 792);
    v20 = *(_QWORD **)(v3 + 784);
    v21 = 0;
    v22 = *(_DWORD *)(v3 + 792);
    v23 = &v20[5 * v19];
    v24 = v20;
    if ( v20 != v23 )
    {
      do
      {
        while ( *v24 )
        {
          *v24 = 0;
          v24 += 5;
          if ( v23 == v24 )
            goto LABEL_33;
        }
        v24 += 5;
        ++v21;
      }
      while ( v23 != v24 );
LABEL_33:
      if ( v22 > 0x10 && 3 * v22 < 4 * v21 )
      {
        if ( v20 )
        {
          v25 = (char *)v20;
          v26 = (char *)&v20[5 * v19];
          do
          {
            v27 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v25 + 8);
            v28 = v25 + 24;
            v25 += 40;
            sub_182CBA0(v27, v28);
          }
          while ( v25 != v26 );
          sub_186B220(v20);
          v22 = *(_DWORD *)(v3 + 792);
        }
        *(_QWORD *)(v3 + 784) = 0;
        v29 = v22 >> 1;
        *(_DWORD *)(v3 + 792) = v29;
        *(_QWORD *)(v3 + 784) = sub_7FF080(v29);
      }
    }
    *(_QWORD *)(v3 + 796) = 0;
  }
  v30 = *(void **)(v3 + 824);
  if ( v30 )
    memset(v30, 0, 4LL * *(unsigned int *)(v3 + 820));
  v31 = *(void **)(v3 + 848);
  *(_DWORD *)(v3 + 816) = 0;
  if ( v31 )
    memset(v31, 0, 4LL * *(unsigned int *)(v3 + 844));
  *(_DWORD *)(v3 + 840) = 0;
  sub_F73E80(v3 + 632);
  v32 = (_QWORD *)sub_186B270(0x50u);
  v33 = *(_QWORD *)(v3 + 16);
  v34 = v32;
  *((_DWORD *)v32 + 2) = 0;
  v32[2] = 0;
  *((_BYTE *)v32 + 24) = 1;
  ptr = v32;
  *v32 = &off_1C74810;
  v35 = (_OWORD *)sub_186B270(0x80u);
  ++*((_DWORD *)v34 + 2);
  v34[4] = v35;
  v36 = "eq2bv";
  v34[5] = 8;
  *((_DWORD *)v34 + 12) = 0;
  v34[7] = v33;
  v34[8] = 0;
  v34[9] = 0;
  *v35 = 0;
  v37 = *a2;
  v35[1] = 0;
  v35[2] = 0;
  v35[3] = 0;
  v35[4] = 0;
  v35[5] = 0;
  v35[6] = 0;
  v35[7] = 0;
  v420 = v423;
  sub_EE4940(v423, "eq2bv", v37);
  v41 = *a2;
  v42 = (*a2)[9];
  if ( !v42 )
    goto LABEL_79;
  v36 = (const char *)*v41;
  v43 = 0;
  while ( 2 )
  {
    v48 = *((_BYTE *)v42 + 3) >> 6;
    if ( v48 )
    {
      if ( v48 != 1 )
        goto LABEL_57;
LABEL_78:
      if ( v43 >= *((_DWORD *)v42 + 1) + 1 )
        break;
      goto LABEL_60;
    }
    do
    {
      v42 = (__int64 *)v42[2];
      v48 = *((_BYTE *)v42 + 3) >> 6;
    }
    while ( !v48 );
    if ( v48 == 1 )
      goto LABEL_78;
LABEL_57:
    if ( v48 == 2 )
      v49 = *((_DWORD *)v42 + 1) - 1;
    else
      v49 = *((_DWORD *)v42 + 1);
    if ( v43 >= v49 )
      break;
LABEL_60:
    v50 = v41[11];
    if ( !v50 )
      goto LABEL_69;
    v51 = v41[11];
    v52 = *((_BYTE *)v50 + 3) >> 6;
    if ( v52 )
    {
      if ( v52 != 1 )
        goto LABEL_63;
LABEL_99:
      if ( v43 < *((_DWORD *)v51 + 1) + 1 )
        goto LABEL_66;
      goto LABEL_69;
    }
    do
    {
      v51 = (__int64 *)v51[2];
      v52 = *((_BYTE *)v51 + 3) >> 6;
    }
    while ( !v52 );
    if ( v52 == 1 )
      goto LABEL_99;
LABEL_63:
    if ( v52 == 2 )
      v53 = *((_DWORD *)v51 + 1) - 1;
    else
      v53 = *((_DWORD *)v51 + 1);
    if ( v43 < v53 )
    {
LABEL_66:
      v54 = 17;
      do
      {
        if ( *((char *)v50 + 3) >= 0 )
        {
          if ( *((_DWORD *)v50 + 1) == v43 )
            goto LABEL_69;
        }
        else if ( *((_BYTE *)v50 + 3) >> 6 != 2 )
        {
          goto LABEL_69;
        }
        v50 = (__int64 *)v50[2];
        --v54;
      }
      while ( v54 );
      sub_233F80((__int64 *)v36 + 77, (_DWORD *)v41 + 22);
      v41 = *a2;
    }
LABEL_69:
    v55 = *((_BYTE *)v41 + 123);
    v56 = *v41;
    v57 = v41;
    if ( (v55 & 0x10) == 0 )
    {
      v47 = 0;
      if ( (*((_BYTE *)v41 + 123) & 0x20) != 0 )
        goto LABEL_52;
      goto LABEL_71;
    }
    v44 = v41[13];
    v45 = 17;
    while ( 1 )
    {
      if ( *((char *)v44 + 3) < 0 )
      {
        if ( *((_BYTE *)v44 + 3) >> 6 != 2 )
        {
          v46 = (__int64 *)(v44[2] + 8LL * v43);
          goto LABEL_51;
        }
        goto LABEL_102;
      }
      if ( *((_DWORD *)v44 + 1) == v43 )
        break;
LABEL_102:
      v44 = (__int64 *)v44[2];
      if ( !--v45 )
      {
        sub_236900(v56 + 84, (__int64 *)v41 + 13);
        v57 = *a2;
        v55 = *((_BYTE *)*a2 + 123);
        v56 = **a2;
        v46 = (__int64 *)(v41[13][2] + 8LL * v43);
        goto LABEL_51;
      }
    }
    v46 = v44 + 1;
LABEL_51:
    v47 = *v46;
    if ( (v55 & 0x20) != 0 )
    {
LABEL_52:
      v36 = (const char *)v56[108];
      goto LABEL_53;
    }
LABEL_71:
    v58 = v57[9];
    v59 = 17;
    while ( 2 )
    {
      if ( *((char *)v58 + 3) < 0 )
      {
        if ( *((_BYTE *)v58 + 3) >> 6 != 2 )
        {
          v60 = (const char **)(v58[2] + 8LL * v43);
          goto LABEL_75;
        }
LABEL_108:
        v58 = (__int64 *)v58[2];
        if ( !--v59 )
        {
          *(_QWORD *)v412 = v47;
          sub_233F80(v56 + 77, (_DWORD *)v57 + 18);
          v60 = (const char **)(v57[9][2] + 8LL * v43);
          goto LABEL_75;
        }
        continue;
      }
      break;
    }
    if ( *((_DWORD *)v58 + 1) != v43 )
      goto LABEL_108;
    v60 = (const char **)(v58 + 1);
LABEL_75:
    v36 = *v60;
LABEL_53:
    sub_F79EF0(v3 + 632);
    ++v43;
    v41 = *a2;
    v42 = (*a2)[9];
    if ( v42 )
    {
      v36 = (const char *)*v41;
      continue;
    }
    break;
  }
LABEL_79:
  v61 = sub_F74880((int)v3 + 632, (int)v36, (int)v42, v38, v39, v40, a2);
  v62 = *v406;
  if ( v61 || (*((_BYTE *)v62 + 123) & 8) != 0 )
  {
    *((_DWORD *)v62 + 30) = (*((_DWORD *)v62 + 30) + 1) & 0x3FFFFFF | v62[15] & 0xFC000000;
    v72 = *v406;
    if ( *v406 )
      ++*((_DWORD *)v72 + 8);
    v73 = (__int64 *)v417;
    v74 = *(_DWORD *)(v417 + 8);
    v75 = *(_DWORD *)(v417 + 12);
    if ( v74 >= v75 )
    {
      v247 = 2 * v75;
      v76 = sub_186B270(8 * v247);
      v74 = *(_DWORD *)(v417 + 8);
      v248 = *(_QWORD **)v417;
      if ( v74 )
      {
        if ( v74 - 1 > 2 && (_QWORD *)v76 != v248 + 1 )
        {
          v249 = 0;
          do
          {
            *(__m128i *)(v76 + v249 * 8) = _mm_loadu_si128((const __m128i *)&v248[v249]);
            v249 += 2;
          }
          while ( 2LL * (v74 >> 1) != v249 );
LABEL_447:
          if ( (v74 & 1) != 0 )
            *(_QWORD *)(v76 + 8LL * (v74 & 0xFFFFFFFE)) = v248[v74 & 0xFFFFFFFE];
          goto LABEL_449;
        }
        for ( i = 0; i != v74; ++i )
          *(_QWORD *)(v76 + i * 8) = v248[i];
      }
LABEL_449:
      if ( v248 != (_QWORD *)(v417 + 16) && v248 )
      {
        sub_186B220(v248);
        v74 = *(_DWORD *)(v417 + 8);
      }
      v250 = v417;
      *(_QWORD *)v417 = v76;
      *(_DWORD *)(v250 + 12) = v247;
      goto LABEL_116;
    }
LABEL_115:
    v76 = *v73;
LABEL_116:
    v77 = v420;
    *(_QWORD *)(v76 + 8LL * v74) = v72;
    *(_DWORD *)(v417 + 8) = v74 + 1;
    sub_EE4A00(v77);
    v78 = (void (__fastcall ***)(_QWORD))ptr;
    v407 = *((_DWORD *)ptr + 2);
    result = (unsigned int)(v407 - 1);
    *((_DWORD *)ptr + 2) = result;
    if ( v407 == 1 )
    {
      (**v78)(v78);
      return sub_186B220(v78);
    }
    return result;
  }
  v63 = v62[9];
  if ( !v63 )
    goto LABEL_125;
  v64 = *v62;
  v65 = 0;
  while ( 2 )
  {
    v67 = v63;
    v68 = *(_BYTE *)(v63 + 3) >> 6;
    if ( v68 )
    {
      if ( v68 != 1 )
        goto LABEL_88;
LABEL_120:
      v69 = *(_DWORD *)(v67 + 4) + 1;
    }
    else
    {
      do
      {
        v67 = *(_QWORD *)(v67 + 16);
        v68 = *(_BYTE *)(v67 + 3) >> 6;
      }
      while ( !v68 );
      if ( v68 == 1 )
        goto LABEL_120;
LABEL_88:
      if ( v68 == 2 )
        v69 = *(_DWORD *)(v67 + 4) - 1;
      else
        v69 = *(_DWORD *)(v67 + 4);
    }
    if ( v65 >= v69 )
      break;
    if ( (*((_BYTE *)v62 + 123) & 0x20) != 0 )
    {
      v66 = *(_QWORD *)(v64 + 864);
      goto LABEL_84;
    }
    v70 = 17;
    while ( 2 )
    {
      if ( *(char *)(v63 + 3) < 0 )
      {
        if ( *(_BYTE *)(v63 + 3) >> 6 != 2 )
        {
          v71 = (__int64 *)(*(_QWORD *)(v63 + 16) + 8LL * v65);
          goto LABEL_96;
        }
LABEL_122:
        v63 = *(_QWORD *)(v63 + 16);
        if ( !--v70 )
        {
          sub_233F80((__int64 *)(v64 + 616), (_DWORD *)v62 + 18);
          v71 = (__int64 *)(*(_QWORD *)(v62[9] + 16) + 8LL * v65);
          goto LABEL_96;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v63 + 4) != v65 )
      goto LABEL_122;
    v71 = (__int64 *)(v63 + 8);
LABEL_96:
    v66 = *v71;
LABEL_84:
    sub_C90950(v3, v66);
    ++v65;
    v62 = *v406;
    v63 = (*v406)[9];
    if ( v63 )
    {
      v64 = *v62;
      continue;
    }
    break;
  }
LABEL_125:
  v422 = ptr;
  sub_C91120(v3, (int)&v422);
  v72 = *v406;
  if ( !*(_DWORD *)(v3 + 796) )
  {
    if ( v72 )
      ++*((_DWORD *)v72 + 8);
    v73 = (__int64 *)v417;
    v74 = *(_DWORD *)(v417 + 8);
    v263 = *(_DWORD *)(v417 + 12);
    if ( v74 >= v263 )
    {
      v247 = 2 * v263;
      v76 = sub_186B270(8 * v247);
      v74 = *(_DWORD *)(v417 + 8);
      v248 = *(_QWORD **)v417;
      if ( v74 )
      {
        if ( v74 - 1 > 2 && (_QWORD *)v76 != v248 + 1 )
        {
          v264 = 0;
          do
          {
            *(__m128i *)(v76 + v264 * 8) = _mm_loadu_si128((const __m128i *)&v248[v264]);
            v264 += 2;
          }
          while ( v264 != 2LL * (v74 >> 1) );
          goto LABEL_447;
        }
        for ( j = 0; j != v74; ++j )
          *(_QWORD *)(v76 + j * 8) = v248[j];
      }
      goto LABEL_449;
    }
    goto LABEL_115;
  }
  v409 = 0;
  v419 = (_QWORD *)(v3 + 64);
  if ( (*((_BYTE *)v72 + 123) & 0x20) != 0 )
    goto LABEL_204;
  do
  {
    v80 = v72[9];
    v81 = *v72;
    if ( !v80 )
      break;
    v82 = v72[9];
    v83 = *(_BYTE *)(v80 + 3) >> 6;
    if ( v83 )
    {
      if ( v83 != 1 )
        goto LABEL_130;
    }
    else
    {
      do
      {
        v82 = *(_QWORD *)(v82 + 16);
        v83 = *(_BYTE *)(v82 + 3) >> 6;
      }
      while ( !v83 );
      if ( v83 != 1 )
      {
LABEL_130:
        if ( v83 == 2 )
          v84 = *(_DWORD *)(v82 + 4) - 1;
        else
          v84 = *(_DWORD *)(v82 + 4);
        goto LABEL_132;
      }
    }
    v84 = *(_DWORD *)(v82 + 4) + 1;
LABEL_132:
    if ( v409 >= v84 )
      break;
    v85 = 18;
    *(_QWORD *)v412 = *(_QWORD *)(v3 + 16);
    while ( 1 )
    {
      if ( !--v85 )
      {
        sub_233F80((__int64 *)(v81 + 616), (_DWORD *)v72 + 18);
        v86 = *(_QWORD *)(v72[9] + 16) + 8LL * v409;
        goto LABEL_138;
      }
      if ( *(char *)(v80 + 3) >= 0 )
        break;
      if ( *(_BYTE *)(v80 + 3) >> 6 != 2 )
      {
        v86 = *(_QWORD *)(v80 + 16) + 8LL * v409;
        goto LABEL_138;
      }
LABEL_267:
      v80 = *(_QWORD *)(v80 + 16);
    }
    if ( *(_DWORD *)(v80 + 4) != v409 )
      goto LABEL_267;
    v86 = v80 + 8;
LABEL_138:
    v87 = *(_QWORD *)v86;
    if ( *(_WORD *)(*(_QWORD *)v86 + 4LL) )
      goto LABEL_142;
    v88 = *(_DWORD **)(*(_QWORD *)(v87 + 16) + 24LL);
    if ( !v88 )
      goto LABEL_142;
    if ( *v88 != 5 )
      goto LABEL_141;
    v228 = v88[1];
    if ( v228 == 2 )
    {
      if ( *(_DWORD *)(v87 + 24) != 2 )
        goto LABEL_408;
      v255 = *(_QWORD *)(v87 + 32);
      v89 = *(_QWORD *)(v87 + 40);
LABEL_468:
      v436 = 0;
      v438 = 1;
      v8 = *(_WORD *)(v89 + 4) == 0;
      v437 = 0;
      v439 = 0;
      if ( v8
        && !*(_DWORD *)(v89 + 24)
        && ((v256 = *(_DWORD **)(*(_QWORD *)(v89 + 16) + 24LL)) == nullptr || *v256 == -1) )
      {
        v411[0] = &v431;
        v413 = &v436;
        v339 = sub_1666AE0(v3 + 24, v255, &v436, &v431);
        v340 = &v436;
        v341 = qword_1C7F2C0;
        if ( v339 )
        {
          if ( (v438 & 0x100000000LL) == 0 && (_DWORD)v438 == 1 )
          {
            v384 = v413;
            v385 = sub_182CFA0(qword_1C7F2C0, v413);
            v341 = qword_1C7F2C0;
            if ( v385 )
            {
              v386 = sub_182D020(qword_1C7F2C0, v384);
              v341 = qword_1C7F2C0;
              if ( !HIDWORD(v386)
                && (*(_DWORD *)v89 >= *(_DWORD *)(v3 + 816)
                 || (*(_DWORD *)(*(_QWORD *)(v3 + 824) + 4LL * (*(_DWORD *)v89 >> 5)) & (1 << *(_DWORD *)v89)) == 0) )
              {
                v387 = v413;
                v388 = sub_182D020(qword_1C7F2C0, v413);
                v389 = qword_1C7F2C0;
                LODWORD(v431) = v388;
                sub_182CBA0(qword_1C7F2C0, v387);
                sub_182CBA0(v389, &v438);
                ++*(_DWORD *)(v89 + 8);
                sub_C8A9D0(0, *(__int64 *)v412);
                goto LABEL_416;
              }
            }
          }
          v340 = (__int64 *)v413;
        }
        sub_182CBA0(v341, v340);
        sub_182CBA0(v341, &v438);
      }
      else
      {
        v257 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v436);
        sub_182CBA0(v257, &v438);
      }
      if ( !*(_WORD *)(v87 + 4) )
      {
        v88 = *(_DWORD **)(*(_QWORD *)(v87 + 16) + 24LL);
        if ( v88 )
        {
LABEL_141:
          if ( *v88 == 5 )
            goto LABEL_408;
        }
      }
      goto LABEL_142;
    }
    if ( v228 == 3 && *(_DWORD *)(v87 + 24) == 2 )
    {
      v89 = *(_QWORD *)(v87 + 32);
      v255 = *(_QWORD *)(v87 + 40);
      goto LABEL_468;
    }
LABEL_408:
    v229 = v88[1];
    if ( v229 != 2 )
    {
      if ( v229 == 3 && *(_DWORD *)(v87 + 24) == 2 )
      {
        v230 = *(_QWORD *)(v87 + 32);
        v89 = *(_QWORD *)(v87 + 40);
        goto LABEL_412;
      }
      goto LABEL_142;
    }
    if ( *(_DWORD *)(v87 + 24) != 2 )
      goto LABEL_142;
    v89 = *(_QWORD *)(v87 + 32);
    v230 = *(_QWORD *)(v87 + 40);
LABEL_412:
    v411[0] = &v431;
    if ( !(unsigned __int8)sub_C8C470(v3, v89, v230, &v431) )
    {
LABEL_142:
      v89 = 0;
      v90 = 0;
LABEL_143:
      v91 = *v406;
      v92 = **v406;
      if ( (*((_BYTE *)*v406 + 123) & 0x20) != 0 )
      {
        v93 = *(_QWORD *)(v92 + 864);
        goto LABEL_145;
      }
      v219 = v91[9];
      v220 = 18;
      while ( 1 )
      {
        if ( !--v220 )
        {
          sub_233F80((__int64 *)(v92 + 616), (_DWORD *)v91 + 18);
          v221 = (__int64 *)(*(_QWORD *)(v91[9] + 16) + 8LL * v409);
          goto LABEL_328;
        }
        if ( *(char *)(v219 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v219 + 4) == v409 )
          {
            v221 = (__int64 *)(v219 + 8);
LABEL_328:
            v93 = *v221;
LABEL_145:
            if ( *(_WORD *)(v93 + 4) )
              goto LABEL_149;
            v94 = *(_DWORD **)(*(_QWORD *)(v93 + 16) + 24LL);
            if ( !v94 )
              goto LABEL_149;
            if ( *v94 != 5 )
              goto LABEL_148;
            v231 = v94[1];
            if ( v231 == 2 )
            {
              if ( *(_DWORD *)(v93 + 24) != 2 )
                goto LABEL_422;
              v258 = *(_QWORD *)(v93 + 32);
              v234 = *(_QWORD *)(v93 + 40);
            }
            else
            {
              if ( v231 != 3 || *(_DWORD *)(v93 + 24) != 2 )
              {
LABEL_422:
                v232 = v94[1];
                if ( v232 != 2 )
                {
                  if ( v232 == 3 && *(_DWORD *)(v93 + 24) == 2 )
                  {
                    v233 = *(_QWORD *)(v93 + 32);
                    v234 = *(_QWORD *)(v93 + 40);
                    goto LABEL_426;
                  }
                  goto LABEL_149;
                }
                if ( *(_DWORD *)(v93 + 24) == 2 )
                {
                  v234 = *(_QWORD *)(v93 + 32);
                  v233 = *(_QWORD *)(v93 + 40);
LABEL_426:
                  if ( (unsigned __int8)sub_C8C470(v3, v234, v233, &v431) )
                  {
                    if ( v234 )
                      ++*(_DWORD *)(v234 + 8);
                    sub_C8A9D0(v89, *(__int64 *)v412);
                    goto LABEL_430;
                  }
                }
LABEL_149:
                v95 = *v406;
                v96 = **v406;
                if ( (*((_BYTE *)*v406 + 123) & 0x20) != 0 )
                {
                  v97 = *(_QWORD *)(v96 + 864);
                }
                else
                {
                  v225 = v95[9];
                  v226 = 18;
                  while ( --v226 )
                  {
                    if ( *(char *)(v225 + 3) >= 0 )
                    {
                      if ( *(_DWORD *)(v225 + 4) == v409 )
                      {
                        v227 = (__int64 *)(v225 + 8);
                        goto LABEL_356;
                      }
                    }
                    else if ( *(_BYTE *)(v225 + 3) >> 6 != 2 )
                    {
                      v227 = (__int64 *)(*(_QWORD *)(v225 + 16) + 8LL * v409);
                      goto LABEL_356;
                    }
                    v225 = *(_QWORD *)(v225 + 16);
                  }
                  sub_233F80((__int64 *)(v96 + 616), (_DWORD *)v95 + 18);
                  v227 = (__int64 *)(*(_QWORD *)(v95[9] + 16) + 8LL * v409);
LABEL_356:
                  v97 = *v227;
                }
                v98 = *(_QWORD *)(v3 + 104);
                *(__m128 *)v411 = _mm_loadh_ps((const double *)v412);
                if ( v98 )
                {
                  if ( *(_DWORD *)(v98 - 4) || **(_QWORD **)(v3 + 88) != *(_QWORD *)(v3 + 96) )
                  {
                    *(_DWORD *)(v98 - 4) = 0;
LABEL_155:
                    v99 = *(_QWORD **)(v3 + 120);
                    if ( v99 )
                    {
                      v100 = &v99[*((unsigned int *)v99 - 1)];
                      if ( v99 >= v100 )
                        goto LABEL_163;
                      do
                      {
                        while ( 1 )
                        {
                          v101 = *v99;
                          if ( *v99 )
                          {
                            v102 = *(_QWORD *)(v3 + 112);
                            v8 = (*(_DWORD *)(v101 + 8))-- == 1;
                            if ( v8 )
                              break;
                          }
                          if ( ++v99 >= v100 )
                            goto LABEL_162;
                        }
                        sub_15D7BC0(v102, v101);
                        ++v99;
                      }
                      while ( v99 < v100 );
LABEL_162:
                      v99 = *(_QWORD **)(v3 + 120);
                      if ( v99 )
LABEL_163:
                        *((_DWORD *)v99 - 1) = 0;
                    }
                    v103 = *(_QWORD **)(v3 + 152);
                    if ( v103 )
                    {
                      v104 = &v103[*((unsigned int *)v103 - 1)];
                      if ( v103 >= v104 )
                        goto LABEL_172;
                      do
                      {
                        while ( 1 )
                        {
                          v105 = *v103;
                          if ( *v103 )
                          {
                            v106 = *(_QWORD *)(v3 + 144);
                            v8 = (*(_DWORD *)(v105 + 8))-- == 1;
                            if ( v8 )
                              break;
                          }
                          if ( ++v103 >= v104 )
                            goto LABEL_171;
                        }
                        sub_15D7BC0(v106, v105);
                        ++v103;
                      }
                      while ( v103 < v104 );
LABEL_171:
                      v103 = *(_QWORD **)(v3 + 152);
                      if ( v103 )
LABEL_172:
                        *((_DWORD *)v103 - 1) = 0;
                    }
                    v107 = *(_QWORD *)(v3 + 200);
                    if ( v107 )
                      *(_DWORD *)(v107 - 4) = 0;
                    sub_15843E0(v419);
                  }
                }
                else if ( *(_QWORD *)(v3 + 96) != **(_QWORD **)(v3 + 88) )
                {
                  goto LABEL_155;
                }
                v8 = *(_BYTE *)(v3 + 80) == 0;
                v424 = 0;
                v425 = *(_QWORD *)v412;
                si128 = _mm_load_si128((const __m128i *)v411);
                if ( v8 )
                  sub_C94860((__int64)v419, v97, &v424, si128.m128i_i64);
                else
                  sub_C93DA0((__int64)v419, v97, &v424, si128.m128i_i64);
                v108 = v424;
                v90 = si128.m128i_i64[0];
                v109 = v425;
                v411[0] = (void *)si128.m128i_i64[1];
                v110 = *v406;
                v111 = **v406;
                if ( (*((_BYTE *)*v406 + 123) & 0x20) != 0 )
                {
                  if ( *(_QWORD *)(v111 + 864) != v424 )
                    goto LABEL_180;
LABEL_342:
                  if ( v89 )
                  {
                    v234 = v89;
                    goto LABEL_477;
                  }
                  goto LABEL_343;
                }
                v222 = v110[9];
                v223 = 18;
                while ( --v223 )
                {
                  if ( *(char *)(v222 + 3) >= 0 )
                  {
                    if ( *(_DWORD *)(v222 + 4) == v409 )
                    {
                      v224 = (_QWORD *)(v222 + 8);
                      goto LABEL_341;
                    }
                  }
                  else if ( *(_BYTE *)(v222 + 3) >> 6 != 2 )
                  {
                    v224 = (_QWORD *)(*(_QWORD *)(v222 + 16) + 8LL * v409);
                    goto LABEL_341;
                  }
                  v222 = *(_QWORD *)(v222 + 16);
                }
                sub_233F80((__int64 *)(v111 + 616), (_DWORD *)v110 + 18);
                v224 = (_QWORD *)(*(_QWORD *)(v110[9] + 16) + 8LL * v409);
LABEL_341:
                if ( *v224 == v108 )
                  goto LABEL_342;
LABEL_180:
                v112 = *(_DWORD **)(v3 + 16);
                if ( v112[178] )
                {
                  v113 = v90;
                  if ( !v90 )
                  {
                    v413 = *(void **)(v3 + 16);
                    sub_2FCEB0(*v406, v409);
                    v262 = sub_15DE370((int)v413);
                    v113 = v262;
                    if ( v262 )
                      ++*(_DWORD *)(v262 + 8);
                    sub_C8A9D0(0, (__int64)v411[0]);
                    v112 = *(_DWORD **)(v3 + 16);
                  }
                  v114 = *v406;
                  v115 = (*v406)[11];
                  if ( v115 )
                  {
                    v116 = (*v406)[11];
                    v117 = *(_BYTE *)(v115 + 3) >> 6;
                    if ( v117 )
                    {
                      if ( v117 != 1 )
                        goto LABEL_185;
LABEL_493:
                      if ( v409 >= *(_DWORD *)(v116 + 4) + 1 )
                        goto LABEL_494;
LABEL_188:
                      v119 = 18;
                      while ( --v119 )
                      {
                        if ( *(char *)(v115 + 3) >= 0 )
                        {
                          if ( *(_DWORD *)(v115 + 4) == v409 )
                          {
                            v120 = (__int64 *)(v115 + 8);
                            goto LABEL_193;
                          }
                        }
                        else if ( *(_BYTE *)(v115 + 3) >> 6 != 2 )
                        {
                          v120 = (__int64 *)(*(_QWORD *)(v115 + 16) + 8LL * v409);
                          goto LABEL_193;
                        }
                        v115 = *(_QWORD *)(v115 + 16);
                      }
                      v383 = *v114;
                      v413 = v112;
                      sub_233F80((__int64 *)(v383 + 616), (_DWORD *)v114 + 22);
                      v112 = v413;
                      v120 = (__int64 *)(*(_QWORD *)(v114[11] + 16) + 8LL * v409);
LABEL_193:
                      v115 = *v120;
                    }
                    else
                    {
                      do
                      {
                        v116 = *(_QWORD *)(v116 + 16);
                        v117 = *(_BYTE *)(v116 + 3) >> 6;
                      }
                      while ( !v117 );
                      if ( v117 == 1 )
                        goto LABEL_493;
LABEL_185:
                      if ( v117 == 2 )
                        v118 = *(_DWORD *)(v116 + 4) - 1;
                      else
                        v118 = *(_DWORD *)(v116 + 4);
                      if ( v409 < v118 )
                        goto LABEL_188;
LABEL_494:
                      v115 = 0;
                    }
                  }
                  v121 = sub_15DE0E0(v112, v115, v113);
                  v90 = v121;
                  if ( v121 )
                    ++*(_DWORD *)(v121 + 8);
                  sub_C8A9D0(v113, (__int64)v411[0]);
                }
                v122 = *v406;
                if ( (*((_BYTE *)*v406 + 123) & 0x10) != 0 )
                {
                  v123 = v122[13];
                  v124 = 18;
                  while ( --v124 )
                  {
                    if ( *(char *)(v123 + 3) >= 0 )
                    {
                      if ( *(_DWORD *)(v123 + 4) == v409 )
                        goto LABEL_202;
                    }
                    else if ( *(_BYTE *)(v123 + 3) >> 6 != 2 )
                    {
                      goto LABEL_202;
                    }
                    v123 = *(_QWORD *)(v123 + 16);
                  }
                  sub_236900((_QWORD *)(*v122 + 672), v122 + 13);
                }
LABEL_202:
                sub_EDBFA0((int)v122);
                sub_C8A9D0(v89, *(__int64 *)v412);
                sub_C8A9D0(v90, (__int64)v411[0]);
                sub_C8A9F0(v108, v109);
                goto LABEL_203;
              }
              v234 = *(_QWORD *)(v93 + 32);
              v258 = *(_QWORD *)(v93 + 40);
            }
            v436 = 0;
            v438 = 1;
            v8 = *(_WORD *)(v234 + 4) == 0;
            v437 = 0;
            v439 = 0;
            if ( v8
              && !*(_DWORD *)(v234 + 24)
              && ((v259 = *(_DWORD **)(*(_QWORD *)(v234 + 16) + 24LL)) == nullptr || *v259 == -1) )
            {
              v413 = &v436;
              v342 = sub_1666AE0(v3 + 24, v258, &v436, &v431);
              v343 = qword_1C7F2C0;
              if ( v342 )
              {
                if ( (v438 & 0x100000000LL) == 0 && (_DWORD)v438 == 1 )
                {
                  v390 = sub_182CFA0(qword_1C7F2C0, v413);
                  v343 = qword_1C7F2C0;
                  if ( v390 )
                  {
                    v391 = sub_182D020(qword_1C7F2C0, v413);
                    v343 = qword_1C7F2C0;
                    if ( !HIDWORD(v391)
                      && (*(_DWORD *)v234 >= *(_DWORD *)(v3 + 816)
                       || (*(_DWORD *)(*(_QWORD *)(v3 + 824) + 4LL * (*(_DWORD *)v234 >> 5)) & (1 << *(_DWORD *)v234)) == 0) )
                    {
                      v392 = sub_182D020(qword_1C7F2C0, v413);
                      v393 = qword_1C7F2C0;
                      LODWORD(v431) = v392;
                      sub_182CBA0(qword_1C7F2C0, v413);
                      sub_182CBA0(v393, &v438);
                      ++*(_DWORD *)(v234 + 8);
                      sub_C8A9D0(v89, *(__int64 *)v412);
LABEL_430:
                      v235 = *(unsigned int *)(v3 + 792);
                      v236 = *(__int64 **)(v3 + 784);
                      v437 = 0;
                      v439 = 1;
                      v237 = *(_DWORD *)(v234 + 12);
                      v238 = v235 - 1;
                      v436 = v234;
                      v235 *= 40;
                      v438 = 0;
                      v239 = (__int64 *)((char *)v236 + v235);
                      v440 = 0;
                      v240 = 40LL * (v237 & v238);
                      v241 = &v236[(unsigned __int64)v240 / 8];
                      if ( v240 != v235 )
                      {
                        for ( k = &v236[(unsigned __int64)v240 / 8]; v239 != k; k += 5 )
                        {
                          v243 = *k;
                          if ( (unsigned __int64)*k > 1 )
                          {
                            if ( *(_DWORD *)(v243 + 12) == v237 && v234 == v243 )
                            {
LABEL_561:
                              v304 = qword_1C7F2C0;
                              sub_182CBA0(qword_1C7F2C0, &v437);
                              sub_182CBA0(v304, &v439);
                              v108 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 856LL);
                              if ( v108 )
                                ++*(_DWORD *)(v108 + 8);
                              sub_C8A9F0(0, *(__int64 *)v412);
                              v305 = *(_QWORD *)(v3 + 16);
                              if ( *(_DWORD *)(v305 + 712) )
                              {
                                sub_2FCEB0(*v406, v409);
                                v306 = sub_15DE370(v305);
                                v307 = v306;
                                if ( v306 )
                                  ++*(_DWORD *)(v306 + 8);
                                sub_C8A9D0(v90, *(__int64 *)v412);
                                v308 = *(_QWORD *)(v3 + 16);
                                v309 = *v406;
                                v310 = (*v406)[11];
                                if ( v310 )
                                {
                                  v311 = (*v406)[11];
                                  for ( m = *(_BYTE *)(v310 + 3) >> 6; !m; m = *(_BYTE *)(v311 + 3) >> 6 )
                                    v311 = *(_QWORD *)(v311 + 16);
                                  if ( m == 1 )
                                  {
                                    v313 = *(_DWORD *)(v311 + 4) + 1;
                                  }
                                  else if ( m == 2 )
                                  {
                                    v313 = *(_DWORD *)(v311 + 4) - 1;
                                  }
                                  else
                                  {
                                    v313 = *(_DWORD *)(v311 + 4);
                                  }
                                  if ( v409 >= v313 )
                                  {
                                    v310 = 0;
                                  }
                                  else
                                  {
                                    v314 = 18;
                                    while ( --v314 )
                                    {
                                      if ( *(char *)(v310 + 3) >= 0 )
                                      {
                                        if ( *(_DWORD *)(v310 + 4) == v409 )
                                        {
                                          v315 = (__int64 *)(v310 + 8);
                                          goto LABEL_577;
                                        }
                                      }
                                      else if ( *(_BYTE *)(v310 + 3) >> 6 != 2 )
                                      {
                                        v315 = (__int64 *)(*(_QWORD *)(v310 + 16) + 8LL * v409);
                                        goto LABEL_577;
                                      }
                                      v310 = *(_QWORD *)(v310 + 16);
                                    }
                                    sub_233F80((__int64 *)(*v309 + 616), (_DWORD *)v309 + 22);
                                    v315 = (__int64 *)(*(_QWORD *)(v309[11] + 16) + 8LL * v409);
LABEL_577:
                                    v310 = *v315;
                                  }
                                }
                                v316 = sub_15DE0E0(v308, v310, v307);
                                v90 = v316;
                                if ( v316 )
                                  ++*(_DWORD *)(v316 + 8);
                                sub_C8A9D0(v307, *(__int64 *)v412);
                              }
                              sub_EDBFA0((int)*v406);
                              v109 = *(_QWORD *)v412;
                              v411[0] = *(void **)v412;
LABEL_477:
                              v8 = (*(_DWORD *)(v234 + 8))-- == 1;
                              if ( v8 )
LABEL_478:
                                sub_15D7BC0(*(_QWORD *)v412, v234);
LABEL_343:
                              if ( v90 )
                              {
LABEL_344:
                                v8 = (*(_DWORD *)(v90 + 8))-- == 1;
                                if ( v8 )
                                  sub_15D7BC0(v411[0], v90);
                              }
                              if ( v108 )
                              {
                                v8 = (*(_DWORD *)(v108 + 8))-- == 1;
                                if ( v8 )
                                  sub_15D7BC0(v109, v108);
                              }
                              goto LABEL_203;
                            }
                          }
                          else if ( !v243 )
                          {
                            goto LABEL_437;
                          }
                        }
                      }
                      for ( ; v241 != v236; v236 += 5 )
                      {
                        v319 = *v236;
                        if ( (unsigned __int64)*v236 > 1 )
                        {
                          if ( *(_DWORD *)(v319 + 12) == v237 && v234 == v319 )
                            goto LABEL_561;
                        }
                        else if ( !v319 )
                        {
                          break;
                        }
                      }
LABEL_437:
                      v244 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, &v437);
                      v245 = v244;
                      v89 = v234;
                      sub_182CBA0(v245, &v439);
                      goto LABEL_149;
                    }
                  }
                }
              }
              v411[0] = v343;
              sub_182CBA0(v343, v413);
              sub_182CBA0(v411[0], &v438);
            }
            else
            {
              v260 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v436);
              sub_182CBA0(v260, &v438);
            }
            if ( !*(_WORD *)(v93 + 4) )
            {
              v94 = *(_DWORD **)(*(_QWORD *)(v93 + 16) + 24LL);
              if ( v94 )
              {
LABEL_148:
                if ( *v94 == 5 )
                  goto LABEL_422;
              }
            }
            goto LABEL_149;
          }
        }
        else if ( *(_BYTE *)(v219 + 3) >> 6 != 2 )
        {
          v221 = (__int64 *)(*(_QWORD *)(v219 + 16) + 8LL * v409);
          goto LABEL_328;
        }
        v219 = *(_QWORD *)(v219 + 16);
      }
    }
    if ( v89 )
      ++*(_DWORD *)(v89 + 8);
    sub_C8A9D0(0, *(__int64 *)v412);
LABEL_416:
    if ( *(_DWORD *)v89 < *(_DWORD *)(v3 + 840)
      && (*(_DWORD *)(*(_QWORD *)(v3 + 848) + 4LL * (*(_DWORD *)v89 >> 5)) & (1 << *(_DWORD *)v89)) != 0 )
    {
      v90 = 0;
      goto LABEL_143;
    }
    v265 = *(_QWORD *)(v3 + 16);
    if ( *(_DWORD *)(v265 + 712) )
    {
      v266 = *v406;
      if ( (*((_BYTE *)*v406 + 123) & 0x20) == 0 )
      {
        v344 = v266[9];
        v345 = 18;
        while ( --v345 )
        {
          if ( *(char *)(v344 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v344 + 4) == v409 )
              goto LABEL_523;
          }
          else if ( *(_BYTE *)(v344 + 3) >> 6 != 2 )
          {
            goto LABEL_523;
          }
          v344 = *(_QWORD *)(v344 + 16);
        }
        sub_233F80((__int64 *)(**v406 + 616), (_DWORD *)v266 + 18);
      }
LABEL_523:
      v267 = sub_15DE370(v265);
      v268 = v267;
      if ( v267 )
        ++*(_DWORD *)(v267 + 8);
      sub_C8A9D0(0, *(__int64 *)v412);
      v269 = *(_QWORD *)(v3 + 16);
      v270 = *v406;
      v271 = (*v406)[11];
      if ( v271 )
      {
        v272 = (*v406)[11];
        v273 = *(_BYTE *)(v271 + 3) >> 6;
        if ( v273 )
        {
          if ( v273 != 1 )
            goto LABEL_528;
LABEL_559:
          if ( v409 >= *(_DWORD *)(v272 + 4) + 1 )
            goto LABEL_560;
LABEL_531:
          v275 = 18;
          while ( --v275 )
          {
            if ( *(char *)(v271 + 3) >= 0 )
            {
              if ( *(_DWORD *)(v271 + 4) == v409 )
              {
                v276 = (__int64 *)(v271 + 8);
                goto LABEL_536;
              }
            }
            else if ( *(_BYTE *)(v271 + 3) >> 6 != 2 )
            {
              v276 = (__int64 *)(*(_QWORD *)(v271 + 16) + 8LL * v409);
              goto LABEL_536;
            }
            v271 = *(_QWORD *)(v271 + 16);
          }
          sub_233F80((__int64 *)(*v270 + 616), (_DWORD *)v270 + 22);
          v276 = (__int64 *)(*(_QWORD *)(v270[11] + 16) + 8LL * v409);
LABEL_536:
          v271 = *v276;
        }
        else
        {
          do
          {
            v272 = *(_QWORD *)(v272 + 16);
            v273 = *(_BYTE *)(v272 + 3) >> 6;
          }
          while ( !v273 );
          if ( v273 == 1 )
            goto LABEL_559;
LABEL_528:
          if ( v273 == 2 )
            v274 = *(_DWORD *)(v272 + 4) - 1;
          else
            v274 = *(_DWORD *)(v272 + 4);
          if ( v409 < v274 )
            goto LABEL_531;
LABEL_560:
          v271 = 0;
        }
      }
      v277 = sub_15DE0E0(v269, v271, v268);
      v90 = v277;
      if ( v277 )
        ++*(_DWORD *)(v277 + 8);
      sub_C8A9D0(v268, *(__int64 *)v412);
    }
    else
    {
      v90 = 0;
    }
    v278 = *(unsigned int *)(v3 + 680);
    v427 = 0;
    v429 = 1;
    v279 = *(char **)(v3 + 672);
    v431 = 0;
    v280 = v278 - 1;
    v433 = 1;
    v278 *= 48;
    v437 = 0;
    v439 = 1;
    v281 = *(_DWORD *)(v89 + 12);
    v428 = 0;
    v430 = 0;
    v282 = 3LL * (v281 & v280);
    v435 = 0;
    v283 = &v279[v278];
    v284 = 16 * v282;
    v436 = v89;
    v432 = 0;
    v285 = &v279[v284];
    v434 = 0;
    v438 = 0;
    v440 = 0;
    v441 = 0;
    if ( v284 != v278 )
    {
      for ( n = &v279[v284]; v283 != n; n += 48 )
      {
        v287 = *(_QWORD *)n;
        if ( *(_QWORD *)n > 1u )
        {
          if ( *(_DWORD *)(v287 + 12) == v281 && v287 == v89 )
          {
LABEL_609:
            v415 = &v437;
            v320 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v437);
            v416 = &v439;
            sub_182CBA0(v320, &v439);
            v321 = qword_1C7F2C0;
            if ( (n[12] & 1) != 0 )
            {
              v413 = qword_1C7F2C0;
              v414 = &v427;
              sub_182C690(qword_1C7F2C0, v411[0], n + 8);
              v321 = v413;
            }
            else
            {
              v322 = *((_DWORD *)n + 2);
              BYTE4(v431) &= ~1u;
              LODWORD(v431) = v322;
            }
            if ( (n[28] & 1) != 0 )
            {
              v414 = &v427;
              sub_182C690(v321, &v433, n + 24);
            }
            else
            {
              v323 = *((_DWORD *)n + 6);
              BYTE4(v433) &= ~1u;
              LODWORD(v433) = v323;
            }
            v324 = n[40];
            v325 = qword_1C7F2C0;
            v435 = v324;
            if ( (v431 & 0x100000000LL) != 0 )
            {
              v414 = &v427;
              sub_182C690(qword_1C7F2C0, &v427, v411[0]);
            }
            else
            {
              BYTE4(v427) &= ~1u;
              LODWORD(v427) = v431;
              v414 = &v427;
            }
            if ( (v433 & 0x100000000LL) != 0 )
            {
              v413 = &v433;
              sub_182C690(v325, &v429, &v433);
            }
            else
            {
              BYTE4(v429) &= ~1u;
              LODWORD(v429) = v433;
              v413 = &v433;
            }
            v326 = qword_1C7F2C0;
            v327 = v435;
            sub_182CBA0(qword_1C7F2C0, v411[0]);
            sub_182CBA0(v326, v413);
            v290 = (__int64 *)qword_1C7F2C0;
            if ( !v327 && (v429 & 0x100000000LL) == 0 && (_DWORD)v429 == 1 )
            {
              v328 = v414;
              v329 = sub_182CFA0(qword_1C7F2C0, v414);
              v290 = (__int64 *)qword_1C7F2C0;
              if ( v329 )
              {
                if ( !((unsigned __int64)sub_182D020(qword_1C7F2C0, v328) >> 32) )
                  goto LABEL_665;
                v290 = (__int64 *)qword_1C7F2C0;
              }
            }
            goto LABEL_548;
          }
        }
        else if ( !v287 )
        {
          goto LABEL_547;
        }
      }
    }
    for ( ; v285 != v279; v279 += 48 )
    {
      v317 = *(_QWORD *)v279;
      if ( *(_QWORD *)v279 > 1u )
      {
        if ( *(_DWORD *)(v317 + 12) == v281 && v317 == v89 )
        {
          n = v279;
          goto LABEL_609;
        }
      }
      else if ( !v317 )
      {
        break;
      }
    }
LABEL_547:
    v415 = &v437;
    v288 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v437);
    v416 = &v439;
    sub_182CBA0(v288, &v439);
    v289 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v411[0]);
    v413 = &v433;
    sub_182CBA0(v289, &v433);
    v290 = (__int64 *)qword_1C7F2C0;
    v414 = &v427;
LABEL_548:
    v291 = *(unsigned int *)(v3 + 656);
    v431 = 0;
    v292 = *(char **)(v3 + 648);
    v435 = 0;
    v433 = 1;
    v293 = v291 - 1;
    v437 = 0;
    v291 *= 48;
    v439 = 1;
    v294 = *(_DWORD *)(v89 + 12);
    v432 = 0;
    v434 = 0;
    v295 = 3LL * (v294 & v293);
    v296 = &v292[v291];
    v436 = v89;
    v297 = 16 * v295;
    v441 = 0;
    v438 = 0;
    v298 = &v292[v297];
    v440 = 0;
    if ( v297 != v291 )
    {
      for ( ii = &v292[v297]; v296 != ii; ii += 48 )
      {
        v300 = *(_QWORD *)ii;
        if ( *(_QWORD *)ii > 1u )
        {
          if ( *(_DWORD *)(v300 + 12) == v294 && v300 == v89 )
            goto LABEL_625;
        }
        else if ( !v300 )
        {
          goto LABEL_555;
        }
      }
    }
    if ( v292 == v298 )
    {
LABEL_555:
      v301 = v415;
      v415 = v290;
      sub_182CBA0(v290, v301);
      sub_182CBA0(v415, v416);
      v302 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v411[0]);
      sub_182CBA0(v302, v413);
      v303 = qword_1C7F2C0;
      goto LABEL_556;
    }
    while ( 2 )
    {
      v318 = *(_QWORD *)v292;
      if ( *(_QWORD *)v292 <= 1u )
      {
        if ( !v318 )
          goto LABEL_555;
        goto LABEL_596;
      }
      if ( *(_DWORD *)(v318 + 12) != v294 || v318 != v89 )
      {
LABEL_596:
        v292 += 48;
        if ( v298 == v292 )
          goto LABEL_555;
        continue;
      }
      break;
    }
    ii = v292;
LABEL_625:
    v330 = v415;
    v415 = v290;
    sub_182CBA0(v290, v330);
    sub_182CBA0(v415, v416);
    v331 = (__int64 *)qword_1C7F2C0;
    if ( (ii[12] & 1) != 0 )
    {
      v415 = (__int64 *)qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v411[0], ii + 8);
      v331 = v415;
    }
    else
    {
      v332 = *((_DWORD *)ii + 2);
      BYTE4(v431) &= ~1u;
      LODWORD(v431) = v332;
    }
    if ( (ii[28] & 1) != 0 )
    {
      sub_182C690(v331, v413, ii + 24);
    }
    else
    {
      v333 = *((_DWORD *)ii + 6);
      BYTE4(v433) &= ~1u;
      LODWORD(v433) = v333;
    }
    v334 = ii[40];
    v335 = qword_1C7F2C0;
    v435 = v334;
    if ( (v431 & 0x100000000LL) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v414, v411[0]);
    }
    else
    {
      BYTE4(v427) &= ~1u;
      LODWORD(v427) = v431;
    }
    if ( (v433 & 0x100000000LL) != 0 )
    {
      sub_182C690(v335, &v429, v413);
    }
    else
    {
      BYTE4(v429) &= ~1u;
      LODWORD(v429) = v433;
    }
    v336 = qword_1C7F2C0;
    LOBYTE(v415) = v435;
    sub_182CBA0(qword_1C7F2C0, v411[0]);
    sub_182CBA0(v336, v413);
    v303 = qword_1C7F2C0;
    if ( (_BYTE)v415
      || (v429 & 0x100000000LL) != 0
      || (_DWORD)v429 != 1
      || (v337 = v414, v338 = sub_182CFA0(qword_1C7F2C0, v414), v303 = qword_1C7F2C0, !v338) )
    {
LABEL_556:
      sub_182CBA0(v303, v414);
      sub_182CBA0(v303, &v429);
      goto LABEL_143;
    }
    if ( (unsigned __int64)sub_182D020(qword_1C7F2C0, v337) >> 32 )
    {
      v303 = qword_1C7F2C0;
      goto LABEL_556;
    }
LABEL_665:
    v346 = *(_QWORD *)(v89 + 16);
    if ( v346 )
      ++*(_DWORD *)(v346 + 8);
    v347 = *((_QWORD **)ptr + 8);
    if ( v347 )
    {
      v348 = *((_DWORD *)v347 - 1);
      if ( v348 == *((_DWORD *)v347 - 2) )
      {
        v377 = (3 * v348 + 1) >> 1;
        v378 = 8 * v377 + 8;
        if ( 8 * v348 + 8 >= v378 || v348 >= v377 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          v413 = &v436;
          sub_C8AA10(&v436, "Overflow encountered when expanding vector");
          v400 = v413;
          v401 = v413;
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v401);
          sub_233E40((__int64)v400);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v379 = (unsigned int *)sub_186B300(v347 - 1, v378);
        v380 = ptr;
        v347 = v379 + 2;
        v381 = v379[1];
        *v379 = v377;
        v380[8] = v379 + 2;
        LODWORD(v379) = v381;
        v351 = &v347[v381];
        v350 = (_DWORD)v379 + 1;
      }
      else
      {
        v349 = v348;
        v350 = v348 + 1;
        v351 = &v347[v349];
      }
    }
    else
    {
      v395 = (_QWORD *)sub_186B270(0x18u);
      v396 = ptr;
      *v395 = 2;
      v347 = v395 + 1;
      v350 = 1;
      v351 = v347;
      v396[8] = v347;
    }
    *v351 = v346;
    *((_DWORD *)v347 - 1) = v350;
    v352 = *((_QWORD *)ptr + 9);
    if ( v352 )
    {
      v353 = *(unsigned int *)(v352 - 4);
      if ( (_DWORD)v353 == *(_DWORD *)(v352 - 8) )
      {
        v357 = (unsigned int)(3 * v353 + 1) >> 1;
        LODWORD(v411[0]) = v357;
        v358 = 32 * v357 + 8;
        if ( 32 * (int)v353 + 8 >= v358 || (unsigned int)v353 >= v357 )
        {
          v402 = (char **)__cxa_allocate_exception(0x28u);
          v413 = &v436;
          sub_C8AA10(&v436, "Overflow encountered when expanding vector");
          v403 = v413;
          v404 = v413;
          *v402 = (char *)off_1C63128;
          sub_2333C0(v402 + 1, v404);
          sub_233E40((__int64)v403);
          __cxa_throw(v402, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v359 = (__int64 *)sub_186B270(v358);
        v360 = v359 + 1;
        v361 = *((char **)ptr + 9);
        if ( v361 )
        {
          v362 = *((unsigned int *)v361 - 1);
          v363 = *((char **)ptr + 9);
          v364 = v359 + 1;
          *((_DWORD *)v359 + 1) = v362;
          v365 = &v361[32 * v362];
          if ( v365 != v361 )
          {
            do
            {
              v366 = *(_DWORD *)v363;
              v367 = v363[4];
              v363 += 32;
              v364 += 8;
              *(v364 - 8) = v366;
              *((_BYTE *)v364 - 28) = v367 & 3 | *(_BYTE *)(v364 - 7) & 0xFC;
              v368 = *((_QWORD *)v363 - 3);
              *((_QWORD *)v363 - 3) = 0;
              *((_QWORD *)v364 - 3) = v368;
              v369 = *(v363 - 12);
              *(v364 - 4) = *((_DWORD *)v363 - 4);
              *((_BYTE *)v364 - 12) = v369 & 3 | *(_BYTE *)(v364 - 3) & 0xFC;
              v370 = *((_QWORD *)v363 - 1);
              *((_QWORD *)v363 - 1) = 0;
              *((_QWORD *)v364 - 1) = v370;
            }
            while ( v365 != v363 );
          }
          v371 = *((unsigned int *)v361 - 1);
          v372 = &v361[32 * v371];
          if ( (_DWORD)v371 )
          {
            v413 = v359;
            v373 = v3;
            v374 = v361;
            v415 = v359 + 1;
            v375 = v373;
            do
            {
              v376 = v374;
              v374 += 32;
              sub_25A130(v376);
            }
            while ( v374 != v372 );
            v3 = v375;
            v359 = (__int64 *)v413;
            v360 = v415;
            v361 = *((char **)ptr + 9);
          }
          v415 = v360;
          v413 = v359;
          sub_186B220(v361 - 8);
          v359 = (__int64 *)v413;
          v360 = v415;
          v354 = &v415[4 * *((unsigned int *)v413 + 1)];
        }
        else
        {
          *((_DWORD *)v359 + 1) = 0;
          v354 = v359 + 1;
        }
        *((_QWORD *)ptr + 9) = v360;
        *(_DWORD *)v359 = v411[0];
      }
      else
      {
        v354 = (__int64 *)(32 * v353 + v352);
      }
    }
    else
    {
      v397 = (_QWORD *)sub_186B270(0x48u);
      *v397 = 2;
      v354 = v397 + 1;
      *((_QWORD *)ptr + 9) = v397 + 1;
    }
    *v354 = 0;
    v355 = (int *)v414;
    v354[1] = 0;
    v356 = qword_1C7F2C0;
    v354[2] = 1;
    v354[3] = 0;
    sub_27B950((__int64)v356, (__int64)v354, v355);
    ++*(_DWORD *)(*((_QWORD *)ptr + 9) - 4LL);
    sub_EDBFA0((int)*v406);
    sub_25A130((char *)v414);
    v8 = (*(_DWORD *)(v89 + 8))-- == 1;
    if ( v8 )
    {
      v234 = v89;
      v108 = 0;
      v411[0] = *(void **)v412;
      v109 = *(_QWORD *)v412;
      goto LABEL_478;
    }
    if ( v90 )
    {
      v109 = *(_QWORD *)v412;
      v108 = 0;
      v411[0] = *(void **)v412;
      goto LABEL_344;
    }
LABEL_203:
    ++v409;
    v72 = *v406;
  }
  while ( (*((_BYTE *)*v406 + 123) & 0x20) == 0 );
LABEL_204:
  v125 = *(__int64 **)(v3 + 784);
  v126 = &v125[5 * *(unsigned int *)(v3 + 792)];
  if ( v125 != v126 )
  {
    while ( (unsigned __int64)*v125 <= 1 )
    {
      v125 += 5;
      if ( v126 == v125 )
        goto LABEL_236;
    }
    if ( v126 != v125 )
    {
      v127 = *v125;
      v411[0] = &v431;
      v415 = &v437;
      v416 = &v439;
      v414 = &v427;
      v421 = v3 + 40;
LABEL_210:
      v128 = *(_QWORD *)(v3 + 16);
      v427 = 0;
      v429 = 1;
      v129 = *(char **)(v3 + 648);
      v410 = v128;
      v130 = *(unsigned int *)(v3 + 656);
      v431 = 0;
      v433 = 1;
      v131 = v130 - 1;
      v437 = 0;
      v130 *= 48;
      v439 = 1;
      v132 = *(_DWORD *)(v127 + 12);
      v428 = 0;
      v430 = 0;
      v133 = 3LL * (v132 & v131);
      v435 = 0;
      v134 = &v129[v130];
      v135 = 16 * v133;
      v436 = v127;
      v432 = 0;
      v136 = &v129[v135];
      v434 = 0;
      v438 = 0;
      v440 = 0;
      v441 = 0;
      if ( v135 != v130 )
      {
        for ( jj = &v129[v135]; v134 != jj; jj += 48 )
        {
          v138 = *(_QWORD *)jj;
          if ( *(_QWORD *)jj > 1u )
          {
            if ( *(_DWORD *)(v138 + 12) == v132 && v138 == v127 )
              goto LABEL_295;
          }
          else if ( !v138 )
          {
            goto LABEL_217;
          }
        }
      }
      if ( v129 == v136 )
      {
LABEL_217:
        v139 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v415);
        sub_182CBA0(v139, v416);
        v140 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v411[0]);
        v413 = &v433;
        sub_182CBA0(v140, &v433);
LABEL_218:
        v141 = 0;
        goto LABEL_219;
      }
      while ( 1 )
      {
        v167 = *(_QWORD *)v129;
        if ( *(_QWORD *)v129 > 1u )
        {
          if ( *(_DWORD *)(v167 + 12) == v132 && v167 == v127 )
          {
            jj = v129;
LABEL_295:
            *(_QWORD *)v412 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v415);
            sub_182CBA0(*(_QWORD *)v412, v416);
            v193 = qword_1C7F2C0;
            if ( (jj[12] & 1) != 0 )
            {
              *(_QWORD *)v412 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v411[0], jj + 8);
              v193 = *(void **)v412;
            }
            else
            {
              v194 = *((_DWORD *)jj + 2);
              BYTE4(v431) &= ~1u;
              LODWORD(v431) = v194;
            }
            if ( (jj[28] & 1) != 0 )
            {
              sub_182C690(v193, &v433, jj + 24);
            }
            else
            {
              v195 = *((_DWORD *)jj + 6);
              BYTE4(v433) &= ~1u;
              LODWORD(v433) = v195;
            }
            v196 = jj[40];
            v197 = qword_1C7F2C0;
            v435 = v196;
            if ( (v431 & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, v414, v411[0]);
            }
            else
            {
              BYTE4(v427) &= ~1u;
              LODWORD(v427) = v431;
            }
            if ( (v433 & 0x100000000LL) != 0 )
            {
              v413 = &v433;
              sub_182C690(v197, &v429, &v433);
              v246 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v411[0]);
              sub_182CBA0(v246, v413);
            }
            else
            {
              v198 = qword_1C7F2C0;
              BYTE4(v429) &= ~1u;
              LODWORD(v429) = v433;
              sub_182CBA0(qword_1C7F2C0, v411[0]);
              v413 = &v433;
              sub_182CBA0(v198, &v433);
            }
            if ( (int)v427 < 0 )
              goto LABEL_218;
            v199 = *(unsigned int *)(v3 + 768);
            v200 = *(_DWORD *)(v127 + 12);
            v201 = *(_QWORD **)(v3 + 760);
            v202 = v199 - 1;
            v199 *= 16;
            v203 = (_QWORD *)((char *)v201 + v199);
            v204 = 16LL * (v200 & v202);
            v205 = &v201[(unsigned __int64)v204 / 8];
            if ( v204 != v199 )
            {
              for ( kk = &v201[(unsigned __int64)v204 / 8]; v203 != kk; kk += 2 )
              {
                v207 = (_QWORD *)*kk;
                if ( *kk > 1u )
                {
                  if ( *((_DWORD *)v207 + 3) == v200 && v207 == (_QWORD *)v127 )
                  {
                    v207 = kk;
                    goto LABEL_311;
                  }
                }
                else if ( !v207 )
                {
                  goto LABEL_311;
                }
              }
            }
            if ( v201 == v205 )
            {
LABEL_404:
              v207 = nullptr;
            }
            else
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v207 = (_QWORD *)*v201;
                  if ( *v201 > 1u )
                    break;
                  if ( !v207 )
                    goto LABEL_311;
                  v201 += 2;
                  if ( v205 == v201 )
                    goto LABEL_404;
                }
                if ( *((_DWORD *)v207 + 3) == v200 && v207 == (_QWORD *)v127 )
                  break;
                v201 += 2;
                if ( v205 == v201 )
                  goto LABEL_404;
              }
              v207 = v201;
            }
LABEL_311:
            v208 = sub_15D1F10(v207[1]);
            sub_16746C0(v421, v414, v208);
            v209 = sub_15E1B70(*(_QWORD *)(v3 + 48));
            v141 = v209;
            if ( v209 )
              ++*(_DWORD *)(v209 + 8);
            v210 = *(_DWORD *)(v127 + 12);
            v211 = *(__int64 **)(v3 + 696);
            v212 = *(unsigned int *)(v3 + 704);
            v213 = v212 - 1;
            v212 *= 16;
            v214 = (__int64 *)((char *)v211 + v212);
            v215 = 16LL * (v210 & v213);
            v216 = &v211[(unsigned __int64)v215 / 8];
            if ( v215 != v212 )
            {
              for ( mm = &v211[(unsigned __int64)v215 / 8]; v214 != mm; mm += 2 )
              {
                v218 = *mm;
                if ( (unsigned __int64)*mm > 1 )
                {
                  if ( *(_DWORD *)(v218 + 12) == v210 && v218 == v127 )
                    goto LABEL_362;
                }
                else if ( !v218 )
                {
LABEL_320:
                  sub_EDBA20(
                    (int)*v406,
                    v141,
                    v218,
                    (_Unwind_Exception *)v406,
                    v410,
                    (int)v411[0],
                    (__int64)v411[1],
                    *(__int64 *)v412);
                  goto LABEL_219;
                }
              }
            }
            if ( v211 == v216 )
            {
LABEL_395:
              sub_EDBA20(
                (int)*v406,
                v141,
                0,
                (_Unwind_Exception *)v406,
                v410,
                (int)v411[0],
                (__int64)v411[1],
                *(__int64 *)v412);
            }
            else
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v218 = *v211;
                  if ( (unsigned __int64)*v211 > 1 )
                    break;
                  if ( !v218 )
                    goto LABEL_320;
                  v211 += 2;
                  if ( v216 == v211 )
                    goto LABEL_395;
                }
                if ( *(_DWORD *)(v218 + 12) == v210 && v218 == v127 )
                  break;
                v211 += 2;
                if ( v216 == v211 )
                  goto LABEL_395;
              }
              mm = v211;
LABEL_362:
              sub_EDBA20(
                (int)*v406,
                v141,
                mm[1],
                (_Unwind_Exception *)v406,
                v410,
                (int)v411[0],
                (__int64)v411[1],
                *(__int64 *)v412);
            }
LABEL_219:
            v142 = *(unsigned int *)(v3 + 680);
            v431 = 0;
            v143 = *(_QWORD **)(v3 + 672);
            v435 = 0;
            v433 = 1;
            v144 = v142 - 1;
            v437 = 0;
            v142 *= 48;
            v439 = 1;
            v145 = *(_DWORD *)(v127 + 12);
            v146 = (_QWORD *)((char *)v143 + v142);
            v432 = 0;
            v434 = 0;
            v436 = v127;
            v147 = 48LL * (v145 & v144);
            v441 = 0;
            v438 = 0;
            v148 = &v143[(unsigned __int64)v147 / 8];
            v440 = 0;
            if ( v147 == v142 )
            {
LABEL_250:
              while ( v148 != v143 )
              {
                v166 = *v143;
                if ( *v143 > 1u )
                {
                  if ( *(_DWORD *)(v166 + 12) == v145 && v166 == v127 )
                  {
                    v149 = v143;
                    goto LABEL_269;
                  }
                }
                else if ( !v166 )
                {
                  break;
                }
                v143 += 6;
              }
LABEL_226:
              v151 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v415);
              sub_182CBA0(v151, v416);
              v152 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v411[0]);
              sub_182CBA0(v152, v413);
              goto LABEL_227;
            }
            v149 = &v143[(unsigned __int64)v147 / 8];
            while ( 2 )
            {
              v150 = *v149;
              if ( *v149 <= 1u )
              {
                if ( !v150 )
                  goto LABEL_226;
                goto LABEL_223;
              }
              if ( *(_DWORD *)(v150 + 12) != v145 || v150 != v127 )
              {
LABEL_223:
                v149 += 6;
                if ( v146 == v149 )
                  goto LABEL_250;
                continue;
              }
              break;
            }
LABEL_269:
            v419 = v149;
            *(_QWORD *)v412 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v415);
            sub_182CBA0(*(_QWORD *)v412, v416);
            v168 = (__int64)v419;
            v169 = qword_1C7F2C0;
            if ( (*((_BYTE *)v419 + 12) & 1) != 0 )
            {
              *(_QWORD *)v412 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v411[0], v419 + 1);
              v168 = (__int64)v419;
              v169 = *(void **)v412;
              if ( (*((_BYTE *)v419 + 28) & 1) != 0 )
                goto LABEL_366;
LABEL_271:
              v171 = *(_DWORD *)(v168 + 24);
              BYTE4(v433) &= ~1u;
              LODWORD(v433) = v171;
            }
            else
            {
              v170 = *((_DWORD *)v419 + 2);
              BYTE4(v431) &= ~1u;
              LODWORD(v431) = v170;
              if ( (*((_BYTE *)v419 + 28) & 1) == 0 )
                goto LABEL_271;
LABEL_366:
              *(_QWORD *)v412 = v168;
              sub_182C690(v169, v413, v168 + 24);
              v168 = *(_QWORD *)v412;
            }
            v172 = qword_1C7F2C0;
            v435 = *(_BYTE *)(v168 + 40);
            if ( (v431 & 0x100000000LL) != 0 )
            {
              *(_QWORD *)v412 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v414, v411[0]);
              v172 = *(void **)v412;
            }
            else
            {
              BYTE4(v427) &= ~1u;
              LODWORD(v427) = v431;
            }
            if ( (v433 & 0x100000000LL) != 0 )
            {
              sub_182C690(v172, &v429, v413);
            }
            else
            {
              BYTE4(v429) &= ~1u;
              LODWORD(v429) = v433;
            }
            *(_QWORD *)v412 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v411[0]);
            sub_182CBA0(*(_QWORD *)v412, v413);
            if ( (int)v427 >= 0 )
            {
              v173 = *(unsigned int *)(v3 + 768);
              v174 = *(_DWORD *)(v127 + 12);
              v175 = *(_QWORD **)(v3 + 760);
              v176 = v173 - 1;
              v173 *= 16;
              v177 = (_QWORD *)((char *)v175 + v173);
              v178 = 16LL * (v174 & v176);
              v179 = &v175[(unsigned __int64)v178 / 8];
              if ( v178 != v173 )
              {
                for ( nn = &v175[(unsigned __int64)v178 / 8]; v177 != nn; nn += 2 )
                {
                  v181 = (_QWORD *)*nn;
                  if ( *nn > 1u )
                  {
                    if ( *((_DWORD *)v181 + 3) == v174 && v181 == (_QWORD *)v127 )
                    {
                      v181 = nn;
                      goto LABEL_284;
                    }
                  }
                  else if ( !v181 )
                  {
                    goto LABEL_284;
                  }
                }
              }
              if ( v175 == v179 )
              {
LABEL_377:
                v181 = nullptr;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v181 = (_QWORD *)*v175;
                    if ( *v175 > 1u )
                      break;
                    if ( !v181 )
                      goto LABEL_284;
                    v175 += 2;
                    if ( v179 == v175 )
                      goto LABEL_377;
                  }
                  if ( *((_DWORD *)v181 + 3) == v174 && v181 == (_QWORD *)v127 )
                    break;
                  v175 += 2;
                  if ( v179 == v175 )
                    goto LABEL_377;
                }
                v181 = v175;
              }
LABEL_284:
              *(_QWORD *)v412 = v181[1];
              v182 = sub_15D1F10(*(_QWORD *)v412);
              sub_16746C0(v421, v414, v182);
              v183 = sub_15E1B70(*(_QWORD *)(v3 + 48));
              *(_QWORD *)v412 = v183;
              if ( v183 )
                ++*(_DWORD *)(v183 + 8);
              sub_C8A9F0(v141, v410);
              v184 = *(_DWORD *)(v127 + 12);
              v185 = *(__int64 **)(v3 + 720);
              v186 = *(unsigned int *)(v3 + 728);
              v187 = v186 - 1;
              v186 *= 16;
              v188 = (__int64 *)((char *)v185 + v186);
              v189 = 16LL * (v184 & v187);
              v190 = &v185[(unsigned __int64)v189 / 8];
              if ( v189 != v186 )
              {
                for ( i1 = &v185[(unsigned __int64)v189 / 8]; v188 != i1; i1 += 2 )
                {
                  v192 = *i1;
                  if ( (unsigned __int64)*i1 > 1 )
                  {
                    if ( *(_DWORD *)(v192 + 12) == v184 && v192 == v127 )
                      goto LABEL_360;
                  }
                  else if ( !v192 )
                  {
                    goto LABEL_293;
                  }
                }
              }
              if ( v185 == v190 )
              {
LABEL_386:
                LODWORD(v192) = 0;
              }
              else
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v192 = *v185;
                    if ( (unsigned __int64)*v185 > 1 )
                      break;
                    if ( !v192 )
                      goto LABEL_293;
                    v185 += 2;
                    if ( v190 == v185 )
                      goto LABEL_386;
                  }
                  if ( *(_DWORD *)(v192 + 12) == v184 && v192 == v127 )
                    break;
                  v185 += 2;
                  if ( v190 == v185 )
                    goto LABEL_386;
                }
                i1 = v185;
LABEL_360:
                v192 = i1[1];
              }
LABEL_293:
              sub_EDBA20(
                (int)*v406,
                v412[0],
                v192,
                (_Unwind_Exception *)v406,
                v410,
                (int)v411[0],
                (__int64)v411[1],
                *(__int64 *)v412);
              v141 = *(_QWORD *)v412;
            }
LABEL_227:
            if ( v141 )
            {
              v8 = (*(_DWORD *)(v141 + 8))-- == 1;
              if ( v8 )
                sub_15D7BC0(v410, v141);
            }
            v153 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v414);
            sub_182CBA0(v153, &v429);
            v154 = v125 + 5;
            if ( v126 == v125 + 5 )
              goto LABEL_235;
            while ( 1 )
            {
              v127 = *v154;
              v125 = v154;
              if ( (unsigned __int64)*v154 > 1 )
                break;
              v154 += 5;
              if ( v126 == v154 )
                goto LABEL_235;
            }
            if ( v126 == v154 )
            {
LABEL_235:
              v72 = *v406;
              break;
            }
            goto LABEL_210;
          }
        }
        else if ( !v167 )
        {
          goto LABEL_217;
        }
        v129 += 48;
        if ( v136 == v129 )
          goto LABEL_217;
      }
    }
  }
LABEL_236:
  v155 = ptr;
  *((_DWORD *)v72 + 30) = (*((_DWORD *)v72 + 30) + 1) & 0x3FFFFFF | v72[15] & 0xFC000000;
  v156 = *v406;
  v157 = sub_1336AB0((*v406)[1], v155);
  v158 = v157;
  if ( v157 )
    ++*(_DWORD *)(v157 + 8);
  v159 = (void (__fastcall ***)(void *))v156[1];
  if ( v159 )
  {
    v8 = (*((_DWORD *)v159 + 2))-- == 1;
    if ( v8 )
    {
      (**v159)(v159);
      sub_186B220(v159);
    }
  }
  v156[1] = v158;
  v160 = *v406;
  if ( *v406 )
    ++*((_DWORD *)v160 + 8);
  v161 = *(_DWORD *)(v417 + 8);
  v162 = *(_DWORD *)(v417 + 12);
  if ( v161 >= v162 )
  {
    v251 = 2 * v162;
    v163 = sub_186B270(8 * v251);
    v161 = *(_DWORD *)(v417 + 8);
    v252 = *(_QWORD **)v417;
    if ( v161 )
    {
      if ( v161 - 1 <= 2 || (_QWORD *)v163 == v252 + 1 )
      {
        for ( i2 = 0; i2 != v161; ++i2 )
          *(_QWORD *)(v163 + i2 * 8) = v252[i2];
      }
      else
      {
        v253 = 0;
        do
        {
          *(__m128i *)(v163 + v253 * 8) = _mm_loadu_si128((const __m128i *)&v252[v253]);
          v253 += 2;
        }
        while ( v253 != 2LL * (v161 >> 1) );
        if ( (v161 & 1) != 0 )
          *(_QWORD *)(v163 + 8LL * (v161 & 0xFFFFFFFE)) = v252[v161 & 0xFFFFFFFE];
      }
    }
    if ( v252 && v252 != (_QWORD *)(v417 + 16) )
    {
      sub_186B220(v252);
      v161 = *(_DWORD *)(v417 + 8);
    }
    v254 = v417;
    *(_QWORD *)v417 = v163;
    *(_DWORD *)(v254 + 12) = v251;
  }
  else
  {
    v163 = *(_QWORD *)v417;
  }
  v164 = v420;
  *(_QWORD *)(v163 + 8LL * v161) = v160;
  *(_DWORD *)(v417 + 8) = v161 + 1;
  sub_EE4A00(v164);
  v165 = (void (__fastcall ***)(_QWORD))ptr;
  v408 = *((_DWORD *)ptr + 2);
  result = (unsigned int)(v408 - 1);
  *((_DWORD *)ptr + 2) = result;
  if ( v408 == 1 )
  {
    (**v165)(v165);
    return sub_186B220(v165);
  }
  return result;
}

