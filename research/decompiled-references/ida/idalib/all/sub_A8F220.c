__int64 *__fastcall sub_A8F220(__m128i *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *result; // rax
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 *v11; // r12
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned int v16; // esi
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned int v24; // esi
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rbx
  unsigned int v35; // esi
  __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned int v40; // esi
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 *v45; // r15
  __int64 v46; // rbx
  __int64 v47; // r14
  unsigned int v48; // r12d
  __int64 *v49; // rbp
  unsigned __int64 v50; // rax
  unsigned int v51; // r13d
  unsigned int v52; // esi
  __int64 v53; // rbx
  __int64 v54; // r13
  unsigned int v55; // r12d
  __int64 *v56; // rbp
  unsigned __int64 v57; // rax
  unsigned int v58; // r14d
  unsigned int v59; // esi
  __int64 v60; // rax
  unsigned int v61; // edi
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // r12
  unsigned int v66; // r13d
  __int64 *v67; // rbp
  unsigned int v68; // edi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r12
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // r14
  unsigned int v75; // r12d
  __int64 *v76; // rbp
  unsigned __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // rcx
  __int64 v82; // rsi
  int v83; // r8d
  __int64 *v84; // r9
  _QWORD *v85; // rdx
  __int64 *v86; // rdi
  int k; // r11d
  __int64 v88; // r13
  unsigned int v89; // ecx
  _QWORD *v90; // rdx
  __int64 v91; // r10
  __int64 v92; // rcx
  int v93; // esi
  int v94; // edi
  __int64 v95; // rsi
  __int64 v96; // rbp
  unsigned __int64 v97; // rax
  _QWORD *v98; // rdi
  __int64 v99; // rdi
  int v100; // eax
  __int64 v101; // r12
  unsigned __int64 v102; // rax
  _QWORD *v103; // rdi
  __int64 v104; // rdi
  int v105; // eax
  __int64 v106; // rbp
  unsigned __int64 v107; // rax
  _QWORD *v108; // rdi
  __int64 v109; // rdi
  int v110; // eax
  __int64 v111; // rax
  int v112; // esi
  __int64 v113; // rdi
  unsigned __int64 v114; // rdi
  unsigned __int64 v115; // rdi
  __int64 v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rdx
  _QWORD *v119; // rcx
  __int64 v120; // rsi
  int v121; // r8d
  _QWORD *v122; // rdx
  __int64 *v123; // rdi
  int v124; // r10d
  __int64 v125; // r14
  unsigned int v126; // ecx
  _QWORD *v127; // rdx
  __int64 v128; // r9
  __int64 v129; // rcx
  int v130; // esi
  int v131; // r11d
  __int64 v132; // r10
  __int64 v133; // rbp
  unsigned __int64 v134; // rax
  _QWORD *v135; // rdi
  __int64 v136; // rdi
  int v137; // eax
  int v138; // esi
  unsigned __int64 v139; // rdi
  unsigned __int64 v140; // rdi
  __int64 v141; // rdi
  __int64 v142; // rax
  __int64 v143; // rdx
  _QWORD *v144; // rcx
  __int64 v145; // rsi
  int v146; // r8d
  _QWORD *v147; // rdx
  __int64 *v148; // rdi
  int v149; // r10d
  __int64 v150; // r13
  unsigned int v151; // ecx
  _QWORD *v152; // rdx
  __int64 v153; // r9
  __int64 v154; // rcx
  int v155; // esi
  int v156; // edi
  int v157; // r11d
  __int64 v158; // r10
  unsigned __int64 v159; // rdi
  __int64 v160; // rdi
  __int64 v161; // rax
  __int64 v162; // rdx
  _QWORD *v163; // rcx
  __int64 v164; // rsi
  int v165; // r8d
  __int64 *v166; // r9
  _QWORD *v167; // rdx
  __int64 *v168; // rdi
  int m; // r11d
  __int64 v170; // r14
  unsigned int v171; // ecx
  _QWORD *v172; // rdx
  __int64 v173; // r10
  __int64 v174; // rcx
  int v175; // esi
  int v176; // r11d
  __int64 v177; // r10
  _QWORD *v178; // rdx
  _QWORD *v179; // rcx
  __int64 v180; // rdx
  _QWORD *v181; // rdx
  _QWORD *v182; // rcx
  int v183; // edi
  __int64 v184; // rsi
  int v185; // edi
  __int64 v186; // rsi
  __int64 v187; // rdx
  _QWORD *v188; // rdx
  _QWORD *v189; // rcx
  _QWORD *v190; // rdx
  _QWORD *v191; // rcx
  __int64 v192; // rbx
  __int64 v193; // rbp
  __int64 v194; // r9
  __int64 *v195; // rbx
  __int64 v196; // rcx
  unsigned __int64 v197; // rdi
  __int64 v198; // rdi
  __int64 v199; // rax
  __int64 v200; // rcx
  _QWORD *v201; // rdx
  __int64 v202; // rsi
  int v203; // r8d
  __int64 *v204; // r10
  _QWORD *v205; // rcx
  __int64 *v206; // rdi
  int j; // r11d
  __int64 v208; // r14
  unsigned int v209; // ecx
  _QWORD *v210; // rdx
  __int64 v211; // r9
  __int64 v212; // rcx
  int v213; // edi
  int v214; // edi
  unsigned __int64 v215; // rdi
  __int64 v216; // rdi
  __int64 v217; // rax
  __int64 v218; // rcx
  _QWORD *v219; // rdx
  __int64 v220; // rsi
  int v221; // r8d
  __int64 *v222; // r10
  _QWORD *v223; // rcx
  __int64 *v224; // rdi
  int i; // r11d
  __int64 v226; // r13
  unsigned int v227; // ecx
  _QWORD *v228; // rdx
  __int64 v229; // r9
  __int64 v230; // rcx
  int v231; // edi
  int v232; // edi
  int v233; // r10d
  __int64 v234; // r11
  unsigned int v235; // edi
  __int64 v236; // rax
  __int64 v237; // rcx
  _QWORD *v238; // rdx
  __int64 v239; // rsi
  int v240; // r8d
  _QWORD *v241; // rcx
  __int64 *v242; // rcx
  int v243; // r10d
  __int64 v244; // r11
  unsigned int v245; // edi
  _QWORD *v246; // rdx
  __int64 v247; // r9
  __int64 v248; // rdi
  int v249; // edi
  int v250; // edi
  int v251; // r10d
  __int64 v252; // r11
  unsigned int v253; // edi
  __int64 v254; // rax
  __int64 v255; // rcx
  _QWORD *v256; // rdx
  __int64 v257; // rsi
  int v258; // r8d
  _QWORD *v259; // rcx
  __int64 *v260; // rcx
  int v261; // r10d
  __int64 v262; // r11
  unsigned int v263; // edi
  _QWORD *v264; // rdx
  __int64 v265; // r9
  __int64 v266; // rdi
  int v267; // edi
  int v268; // edi
  int v269; // r10d
  __int64 v270; // r11
  _QWORD *v271; // r12
  _QWORD *v272; // r13
  _QWORD *v273; // r13
  _QWORD *v274; // r12
  __int64 v275; // rbp
  __int64 v276; // rbx
  unsigned int v277; // esi
  __int64 v278; // rdi
  __int64 v279; // r13
  __int64 v280; // rax
  __int64 v281; // rbx
  unsigned int v282; // esi
  __int64 v283; // rdi
  __int64 v284; // rax
  __int64 v285; // rcx
  _QWORD *v286; // rcx
  _QWORD *v287; // rdx
  __int64 v288; // rcx
  _QWORD *v289; // rcx
  _QWORD *v290; // rdx
  int v291; // r11d
  __int64 v292; // r10
  __int64 v293; // rcx
  _QWORD *v294; // rcx
  _QWORD *v295; // rdx
  __int64 v296; // rcx
  _QWORD *v297; // rcx
  _QWORD *v298; // rdx
  __int64 v299; // rbp
  __int64 v300; // rbx
  __int64 v301; // rax
  __int64 v302; // rbx
  unsigned int v303; // esi
  __int64 v304; // rdi
  __int64 v305; // rbx
  bool v306; // cc
  __int64 v307; // rax
  __int64 v308; // rbp
  __int64 v309; // rbx
  __int64 v310; // rax
  __int64 v311; // rbx
  unsigned int v312; // esi
  __int64 v313; // rdi
  __int64 v314; // r12
  __int64 v315; // rax
  __int64 v316; // rbx
  unsigned int v317; // esi
  __int64 v318; // rdi
  __int64 v319; // rax
  _QWORD *v320; // r12
  _QWORD *v321; // r12
  int v322; // r11d
  __int64 *v323; // r15
  __int64 v324; // rcx
  int v325; // r11d
  __int64 *v326; // r14
  __int64 v327; // rcx
  int v328; // r10d
  __int64 v329; // r11
  int v330; // edi
  int v331; // edi
  unsigned int v332; // esi
  int v333; // r11d
  int v334; // edi
  int v335; // edi
  unsigned int v336; // esi
  int v337; // r11d
  int v338; // esi
  int v339; // esi
  __int64 v340; // rdi
  unsigned int v341; // r13d
  int v342; // r10d
  unsigned int v343; // r10d
  int v344; // esi
  int v345; // esi
  __int64 v346; // rdi
  unsigned int v347; // r13d
  int v348; // r10d
  unsigned int v349; // r10d
  int v350; // r14d
  __int64 v351; // r11
  int v352; // ecx
  bool v353; // zf
  int v354; // r14d
  __int64 v355; // r11
  int v356; // ecx
  int v357; // r14d
  __int64 v358; // r11
  int v359; // ecx
  int v360; // r14d
  __int64 v361; // r11
  int v362; // ecx
  int v363; // r13d
  __int64 v364; // r11
  int v365; // ecx
  int v366; // r11d
  __int64 v367; // r14
  int v368; // ecx
  int v369; // r13d
  __int64 v370; // r11
  int v371; // ecx
  unsigned int v372; // r11d
  __int64 *v373; // r10
  unsigned int v374; // r11d
  __int64 *v375; // r10
  char *v376; // [rsp+0h] [rbp-A8h]
  __m128d v377; // [rsp+0h] [rbp-A8h]
  __int64 v378; // [rsp+10h] [rbp-98h]
  __int64 v380; // [rsp+20h] [rbp-88h]
  unsigned int v381; // [rsp+20h] [rbp-88h]
  __int64 v382; // [rsp+20h] [rbp-88h]
  int v383; // [rsp+20h] [rbp-88h]
  int v384; // [rsp+20h] [rbp-88h]
  _QWORD *v385; // [rsp+20h] [rbp-88h]
  char *v386; // [rsp+28h] [rbp-80h]
  __int64 v387; // [rsp+30h] [rbp-78h]
  unsigned int v388; // [rsp+30h] [rbp-78h]
  __int64 v389; // [rsp+30h] [rbp-78h]
  int v390; // [rsp+30h] [rbp-78h]
  int v391; // [rsp+30h] [rbp-78h]
  _QWORD *v392; // [rsp+30h] [rbp-78h]
  __int64 v393; // [rsp+38h] [rbp-70h]
  __int64 *v394; // [rsp+40h] [rbp-68h]
  __int64 *v395; // [rsp+48h] [rbp-60h]
  int v396; // [rsp+50h] [rbp-58h]
  int v397; // [rsp+50h] [rbp-58h]
  int v398; // [rsp+50h] [rbp-58h]
  int v399; // [rsp+50h] [rbp-58h]
  __int64 v400; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v401[8]; // [rsp+68h] [rbp-40h] BYREF

  result = (__int64 *)(a2 - (char *)a1);
  v386 = a2;
  v393 = a3;
  v378 = a4;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  v8 = (__int64 *)a1;
  v9 = a2 - (char *)a1;
  if ( !a3 )
  {
    v394 = (__int64 *)a2;
    goto LABEL_229;
  }
  v395 = &a1->m128i_i64[1];
  do
  {
    v10 = v9 >> 4;
    --v393;
    v11 = &a1->m128i_i64[v10];
    v12 = a1->m128i_i64[1];
    v13 = *v11;
    v14 = *(_QWORD *)(*v11 + 128);
    if ( v14
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104), v10, a4, a5, a6),
          (v14 = *(_QWORD *)(v13 + 128)) != 0) )
    {
      v14 = *(_QWORD *)(v14 + 88);
    }
    v15 = *(_QWORD *)(v378 + 72);
    v16 = *(_DWORD *)(v15 + 80);
    v17 = v15 + 64;
    if ( !v16 )
      goto LABEL_486;
    a6 = v16 - 1;
    v18 = *(_QWORD *)(v15 + 64);
    v19 = (unsigned int)a6 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
    v20 = (__int64 *)(v18 + 16 * v19);
    v10 = *v20;
    if ( v14 == *v20 )
    {
LABEL_8:
      v21 = v20[1];
      goto LABEL_9;
    }
    v322 = 1;
    v323 = nullptr;
    if ( v10 != -4096 )
    {
      while ( 1 )
      {
        if ( v10 == -8192 && !v323 )
          v323 = v20;
        v19 = (unsigned int)a6 & (v322 + (_DWORD)v19);
        v20 = (__int64 *)(v18 + 16LL * (unsigned int)v19);
        v10 = *v20;
        if ( v14 == *v20 )
          goto LABEL_8;
        if ( v10 == -4096 )
          break;
        ++v322;
      }
      if ( v323 )
        v20 = v323;
    }
    v10 = (unsigned int)(*(_DWORD *)(v15 + 72) + 1);
    a4 = 3 * v16;
    a5 = (unsigned int)(4 * v10);
    if ( (unsigned int)a5 < (unsigned int)a4 )
    {
      v324 = v16 - *(_DWORD *)(v15 + 76) - (unsigned int)v10;
      v18 = v16 >> 3;
      if ( (unsigned int)v324 > (unsigned int)v18 )
        goto LABEL_450;
      sub_7055A0(v17, v16, v10, v324, v18, a6);
      v338 = *(_DWORD *)(v15 + 80);
      if ( !v338 )
      {
LABEL_766:
        ++*(_DWORD *)(v15 + 72);
        BUG();
      }
      v339 = v338 - 1;
      v340 = *(_QWORD *)(v15 + 64);
      v341 = v339 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v10 = (unsigned int)(*(_DWORD *)(v15 + 72) + 1);
      v20 = (__int64 *)(v340 + 16LL * v341);
      v19 = *v20;
      if ( v14 == *v20 )
        goto LABEL_451;
      v342 = 1;
      v18 = 0;
      if ( v19 != -4096 )
      {
        while ( 1 )
        {
          if ( v19 != -8192 || v18 )
            v20 = (__int64 *)v18;
          v18 = (unsigned int)(v342 + 1);
          v343 = v339 & (v341 + v342);
          v341 = v343;
          a6 = v340 + 16LL * v343;
          v19 = *(_QWORD *)a6;
          if ( v14 == *(_QWORD *)a6 )
          {
            v20 = (__int64 *)(v340 + 16LL * v343);
            goto LABEL_451;
          }
          if ( v19 == -4096 )
            break;
          v342 = v18;
          v18 = (__int64)v20;
          v20 = (__int64 *)a6;
        }
        if ( v20 )
          goto LABEL_450;
        v20 = (__int64 *)(v340 + 16LL * v343);
      }
    }
    else
    {
LABEL_486:
      sub_7055A0(v17, 2 * v16, v10, a4, a5, a6);
      v330 = *(_DWORD *)(v15 + 80);
      if ( !v330 )
        goto LABEL_766;
      v331 = v330 - 1;
      v18 = *(_QWORD *)(v15 + 64);
      v332 = v331 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v10 = (unsigned int)(*(_DWORD *)(v15 + 72) + 1);
      v20 = (__int64 *)(v18 + 16LL * v332);
      v19 = *v20;
      if ( v14 == *v20 )
        goto LABEL_451;
      v333 = 1;
      a6 = 0;
      if ( v19 != -4096 )
      {
        while ( 1 )
        {
          if ( v19 != -8192 || a6 )
            v20 = (__int64 *)a6;
          a6 = (unsigned int)(v333 + 1);
          v372 = v332 + v333;
          v332 = v331 & v372;
          v373 = (__int64 *)(v18 + 16LL * (v331 & v372));
          v19 = *v373;
          if ( v14 == *v373 )
          {
            v20 = (__int64 *)(v18 + 16LL * (v331 & v372));
            goto LABEL_451;
          }
          if ( v19 == -4096 )
            break;
          v333 = a6;
          a6 = (__int64)v20;
          v20 = v373;
        }
        if ( v20 )
        {
LABEL_450:
          v19 = *v20;
LABEL_451:
          *(_DWORD *)(v15 + 72) = v10;
          if ( v19 != -4096 )
            --*(_DWORD *)(v15 + 76);
          goto LABEL_453;
        }
        v20 = (__int64 *)(v18 + 16LL * (v331 & v372));
      }
    }
    *(_DWORD *)(v15 + 72) = v10;
LABEL_453:
    *v20 = v14;
    v21 = 0;
    v20[1] = 0;
LABEL_9:
    v22 = *(_QWORD *)(v12 + 128);
    if ( v22
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v10, v19, v18, a6),
          (v22 = *(_QWORD *)(v12 + 128)) != 0) )
    {
      v22 = *(_QWORD *)(v22 + 88);
    }
    v23 = *(_QWORD *)(v378 + 72);
    v24 = *(_DWORD *)(v23 + 80);
    v25 = v23 + 64;
    if ( !v24 )
      goto LABEL_490;
    a6 = v24 - 1;
    v26 = *(_QWORD *)(v23 + 64);
    v27 = (unsigned int)a6 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
    v28 = (__int64 *)(v26 + 16 * v27);
    v29 = *v28;
    if ( v22 == *v28 )
    {
LABEL_13:
      v30 = v28[1];
      goto LABEL_14;
    }
    v325 = 1;
    v326 = nullptr;
    if ( v29 != -4096 )
    {
      while ( 1 )
      {
        if ( v29 == -8192 && !v326 )
          v326 = v28;
        v27 = (unsigned int)a6 & (v325 + (_DWORD)v27);
        v28 = (__int64 *)(v26 + 16LL * (unsigned int)v27);
        v29 = *v28;
        if ( v22 == *v28 )
          goto LABEL_13;
        if ( v29 == -4096 )
          break;
        ++v325;
      }
      if ( v326 )
        v28 = v326;
    }
    v10 = (unsigned int)(*(_DWORD *)(v23 + 72) + 1);
    v19 = 3 * v24;
    v18 = (unsigned int)(4 * v10);
    if ( (unsigned int)v18 < (unsigned int)v19 )
    {
      v327 = v24 - *(_DWORD *)(v23 + 76) - (unsigned int)v10;
      v26 = v24 >> 3;
      if ( (unsigned int)v327 > (unsigned int)v26 )
        goto LABEL_457;
      sub_7055A0(v25, v24, v10, v327, v26, a6);
      v344 = *(_DWORD *)(v23 + 80);
      if ( !v344 )
      {
LABEL_759:
        ++*(_DWORD *)(v23 + 72);
        BUG();
      }
      v345 = v344 - 1;
      v346 = *(_QWORD *)(v23 + 64);
      v347 = v345 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      LODWORD(v10) = *(_DWORD *)(v23 + 72) + 1;
      v28 = (__int64 *)(v346 + 16LL * v347);
      v27 = *v28;
      if ( v22 == *v28 )
        goto LABEL_458;
      v348 = 1;
      v26 = 0;
      if ( v27 != -4096 )
      {
        while ( 1 )
        {
          if ( v27 != -8192 || v26 )
            v28 = (__int64 *)v26;
          v26 = (unsigned int)(v348 + 1);
          v349 = v345 & (v347 + v348);
          v347 = v349;
          a6 = v346 + 16LL * v349;
          v27 = *(_QWORD *)a6;
          if ( v22 == *(_QWORD *)a6 )
          {
            v28 = (__int64 *)(v346 + 16LL * v349);
            goto LABEL_458;
          }
          if ( v27 == -4096 )
            break;
          v348 = v26;
          v26 = (__int64)v28;
          v28 = (__int64 *)a6;
        }
        if ( v28 )
          goto LABEL_457;
        v28 = (__int64 *)(v346 + 16LL * v349);
      }
    }
    else
    {
LABEL_490:
      sub_7055A0(v25, 2 * v24, v10, v19, v18, a6);
      v334 = *(_DWORD *)(v23 + 80);
      if ( !v334 )
        goto LABEL_759;
      v335 = v334 - 1;
      v26 = *(_QWORD *)(v23 + 64);
      v336 = v335 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      LODWORD(v10) = *(_DWORD *)(v23 + 72) + 1;
      v28 = (__int64 *)(v26 + 16LL * v336);
      v27 = *v28;
      if ( v22 == *v28 )
        goto LABEL_458;
      v337 = 1;
      a6 = 0;
      if ( v27 != -4096 )
      {
        while ( 1 )
        {
          if ( v27 != -8192 || a6 )
            v28 = (__int64 *)a6;
          a6 = (unsigned int)(v337 + 1);
          v374 = v336 + v337;
          v336 = v335 & v374;
          v375 = (__int64 *)(v26 + 16LL * (v335 & v374));
          v27 = *v375;
          if ( v22 == *v375 )
          {
            v28 = (__int64 *)(v26 + 16LL * (v335 & v374));
            goto LABEL_458;
          }
          if ( v27 == -4096 )
            break;
          v337 = a6;
          a6 = (__int64)v28;
          v28 = v375;
        }
        if ( v28 )
        {
LABEL_457:
          v27 = *v28;
LABEL_458:
          *(_DWORD *)(v23 + 72) = v10;
          if ( v27 != -4096 )
            --*(_DWORD *)(v23 + 76);
          goto LABEL_460;
        }
        v28 = (__int64 *)(v26 + 16LL * (v335 & v374));
      }
    }
    *(_DWORD *)(v23 + 72) = v10;
LABEL_460:
    *v28 = v22;
    v30 = 0;
    v28[1] = 0;
LABEL_14:
    v31 = *((_QWORD *)v386 - 1);
    v32 = *(_QWORD *)(v31 + 128);
    if ( v21 <= v30 )
    {
      v400 = *((_QWORD *)v386 - 1);
      v275 = a1->m128i_i64[1];
      if ( v32
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v30, v27, v26, a6),
            (v32 = *(_QWORD *)(v31 + 128)) != 0) )
      {
        v32 = *(_QWORD *)(v32 + 88);
      }
      v400 = v32;
      v276 = *(_QWORD *)(v378 + 72);
      v277 = *(_DWORD *)(v276 + 80);
      if ( v277 )
      {
        a6 = v277 - 1;
        v26 = *(_QWORD *)(v276 + 64);
        v27 = (unsigned int)a6 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
        v30 = v26 + 16 * v27;
        v278 = *(_QWORD *)v30;
        if ( v32 == *(_QWORD *)v30 )
        {
LABEL_336:
          v279 = *(_QWORD *)(v30 + 8);
          goto LABEL_337;
        }
        v357 = 1;
        v358 = 0;
        if ( v278 != -4096 )
        {
          while ( 1 )
          {
            if ( !v358 && v278 == -8192 )
              v358 = v30;
            v27 = (unsigned int)a6 & ((_DWORD)v27 + v357);
            v30 = v26 + 16 * v27;
            v278 = *(_QWORD *)v30;
            if ( v32 == *(_QWORD *)v30 )
              goto LABEL_336;
            if ( v278 == -4096 )
            {
              if ( v358 )
                v30 = v358;
              break;
            }
            ++v357;
          }
        }
        v359 = *(_DWORD *)(v276 + 72);
        v401[0] = v30;
        v27 = (unsigned int)(v359 + 1);
        v26 = (unsigned int)(4 * v27);
        if ( (unsigned int)v26 < 3 * v277 )
        {
          v26 = v277 >> 3;
          if ( v277 - *(_DWORD *)(v276 + 76) - (unsigned int)v27 > (unsigned int)v26 )
          {
LABEL_529:
            v353 = *(_QWORD *)v30 == -4096;
            *(_DWORD *)(v276 + 72) = v27;
            if ( !v353 )
              --*(_DWORD *)(v276 + 76);
            *(_QWORD *)v30 = v32;
            v279 = 0;
            *(_QWORD *)(v30 + 8) = 0;
LABEL_337:
            v400 = v275;
            v280 = *(_QWORD *)(v275 + 128);
            if ( v280
              || (sub_7052B0((__int64 *)(*(_QWORD *)(v275 + 104) + 96LL), *(_QWORD *)(v275 + 104), v30, v27, v26, a6),
                  (v280 = *(_QWORD *)(v275 + 128)) != 0) )
            {
              v280 = *(_QWORD *)(v280 + 88);
            }
            v400 = v280;
            v281 = *(_QWORD *)(v378 + 72);
            v282 = *(_DWORD *)(v281 + 80);
            if ( v282 )
            {
              a6 = v282 - 1;
              v26 = *(_QWORD *)(v281 + 64);
              v27 = (unsigned int)a6 & (((unsigned int)v280 >> 9) ^ ((unsigned int)v280 >> 4));
              v30 = v26 + 16 * v27;
              v283 = *(_QWORD *)v30;
              if ( *(_QWORD *)v30 == v280 )
              {
LABEL_341:
                v284 = *(_QWORD *)(v30 + 8);
                goto LABEL_342;
              }
              v350 = 1;
              v351 = 0;
              if ( v283 != -4096 )
              {
                while ( 1 )
                {
                  if ( v283 == -8192 && !v351 )
                    v351 = v30;
                  v27 = (unsigned int)a6 & ((_DWORD)v27 + v350);
                  v30 = v26 + 16 * v27;
                  v283 = *(_QWORD *)v30;
                  if ( v280 == *(_QWORD *)v30 )
                    goto LABEL_341;
                  if ( v283 == -4096 )
                  {
                    if ( v351 )
                      v30 = v351;
                    break;
                  }
                  ++v350;
                }
              }
              v352 = *(_DWORD *)(v281 + 72);
              v401[0] = v30;
              v27 = (unsigned int)(v352 + 1);
              v26 = (unsigned int)(4 * v27);
              if ( (unsigned int)v26 < 3 * v282 )
              {
                v26 = v282 >> 3;
                if ( v282 - *(_DWORD *)(v281 + 76) - (unsigned int)v27 > (unsigned int)v26 )
                {
LABEL_511:
                  v353 = *(_QWORD *)v30 == -4096;
                  *(_DWORD *)(v281 + 72) = v27;
                  if ( !v353 )
                    --*(_DWORD *)(v281 + 76);
                  *(_QWORD *)v30 = v280;
                  v284 = 0;
                  *(_QWORD *)(v30 + 8) = 0;
LABEL_342:
                  if ( v279 > v284 )
                  {
                    v44 = a1->m128i_i64[1];
                    v377 = (__m128d)_mm_loadu_si128(a1);
                    *(__m128d *)a1 = _mm_shuffle_pd(v377, v377, 1);
                    goto LABEL_27;
                  }
                  v299 = *v11;
                  v300 = *((_QWORD *)v386 - 1);
                  v400 = v300;
                  v301 = *(_QWORD *)(v300 + 128);
                  if ( v301
                    || (sub_7052B0(
                          (__int64 *)(*(_QWORD *)(v300 + 104) + 96LL),
                          *(_QWORD *)(v300 + 104),
                          v30,
                          v27,
                          v26,
                          a6),
                        (v301 = *(_QWORD *)(v300 + 128)) != 0) )
                  {
                    v301 = *(_QWORD *)(v301 + 88);
                  }
                  v400 = v301;
                  v302 = *(_QWORD *)(v378 + 72);
                  v303 = *(_DWORD *)(v302 + 80);
                  if ( v303 )
                  {
                    a6 = v303 - 1;
                    v26 = *(_QWORD *)(v302 + 64);
                    v27 = (unsigned int)a6 & (((unsigned int)v301 >> 9) ^ ((unsigned int)v301 >> 4));
                    v30 = v26 + 16 * v27;
                    v304 = *(_QWORD *)v30;
                    if ( v301 == *(_QWORD *)v30 )
                    {
LABEL_373:
                      v305 = *(_QWORD *)(v30 + 8);
LABEL_374:
                      v306 = sub_A8C970((__int64 *)(v378 + 72), v299, v30, v27, v26, a6) < v305;
                      v307 = a1->m128i_i64[0];
                      if ( v306 )
                      {
                        v30 = *((_QWORD *)v386 - 1);
                        a1->m128i_i64[0] = v30;
                        *((_QWORD *)v386 - 1) = v307;
                      }
                      else
                      {
                        v30 = *v11;
                        a1->m128i_i64[0] = *v11;
                        *v11 = v307;
                      }
                      v44 = a1->m128i_i64[0];
                      goto LABEL_27;
                    }
                    v366 = 1;
                    v367 = 0;
                    if ( v304 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v367 && v304 == -8192 )
                          v367 = v30;
                        v27 = (unsigned int)a6 & ((_DWORD)v27 + v366);
                        v30 = v26 + 16 * v27;
                        v304 = *(_QWORD *)v30;
                        if ( v301 == *(_QWORD *)v30 )
                          goto LABEL_373;
                        if ( v304 == -4096 )
                        {
                          if ( v367 )
                            v30 = v367;
                          break;
                        }
                        ++v366;
                      }
                    }
                    v368 = *(_DWORD *)(v302 + 72);
                    v401[0] = v30;
                    v27 = (unsigned int)(v368 + 1);
                    v26 = (unsigned int)(4 * v27);
                    if ( (unsigned int)v26 < 3 * v303 )
                    {
                      v26 = v303 >> 3;
                      if ( v303 - *(_DWORD *)(v302 + 76) - (unsigned int)v27 > (unsigned int)v26 )
                        goto LABEL_560;
                      goto LABEL_559;
                    }
                  }
                  else
                  {
                    v401[0] = 0;
                  }
                  v303 *= 2;
LABEL_559:
                  sub_7055A0(v302 + 64, v303, v30, v27, v26, a6);
                  sub_A6DD20((__int64 *)(v302 + 64), &v400, v401);
                  v301 = v400;
                  v30 = v401[0];
                  v27 = (unsigned int)(*(_DWORD *)(v302 + 72) + 1);
LABEL_560:
                  v353 = *(_QWORD *)v30 == -4096;
                  *(_DWORD *)(v302 + 72) = v27;
                  if ( !v353 )
                    --*(_DWORD *)(v302 + 76);
                  *(_QWORD *)v30 = v301;
                  v305 = 0;
                  *(_QWORD *)(v30 + 8) = 0;
                  goto LABEL_374;
                }
LABEL_516:
                sub_7055A0(v281 + 64, v282, v30, v27, v26, a6);
                sub_A6DD20((__int64 *)(v281 + 64), &v400, v401);
                v280 = v400;
                v30 = v401[0];
                v27 = (unsigned int)(*(_DWORD *)(v281 + 72) + 1);
                goto LABEL_511;
              }
            }
            else
            {
              v401[0] = 0;
            }
            v282 *= 2;
            goto LABEL_516;
          }
LABEL_534:
          sub_7055A0(v276 + 64, v277, v30, v27, v26, a6);
          sub_A6DD20((__int64 *)(v276 + 64), &v400, v401);
          v32 = v400;
          v30 = v401[0];
          v27 = (unsigned int)(*(_DWORD *)(v276 + 72) + 1);
          goto LABEL_529;
        }
      }
      else
      {
        v401[0] = 0;
      }
      v277 *= 2;
      goto LABEL_534;
    }
    v33 = *v11;
    v400 = *((_QWORD *)v386 - 1);
    if ( v32
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v30, v27, v26, a6),
          (v32 = *(_QWORD *)(v31 + 128)) != 0) )
    {
      v32 = *(_QWORD *)(v32 + 88);
    }
    v400 = v32;
    v34 = *(_QWORD *)(v378 + 72);
    v35 = *(_DWORD *)(v34 + 80);
    if ( !v35 )
    {
      v401[0] = 0;
LABEL_542:
      v35 *= 2;
LABEL_543:
      sub_7055A0(v34 + 64, v35, v30, v27, v26, a6);
      sub_A6DD20((__int64 *)(v34 + 64), &v400, v401);
      v32 = v400;
      v30 = v401[0];
      v27 = (unsigned int)(*(_DWORD *)(v34 + 72) + 1);
      goto LABEL_538;
    }
    a6 = v35 - 1;
    v26 = *(_QWORD *)(v34 + 64);
    v27 = (unsigned int)a6 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
    v30 = v26 + 16 * v27;
    v36 = *(_QWORD *)v30;
    if ( v32 == *(_QWORD *)v30 )
      goto LABEL_19;
    v360 = 1;
    v361 = 0;
    if ( v36 != -4096 )
    {
      while ( 1 )
      {
        if ( v36 == -8192 && !v361 )
          v361 = v30;
        v27 = (unsigned int)a6 & ((_DWORD)v27 + v360);
        v30 = v26 + 16 * v27;
        v36 = *(_QWORD *)v30;
        if ( v32 == *(_QWORD *)v30 )
          break;
        if ( v36 == -4096 )
        {
          if ( v361 )
            v30 = v361;
          goto LABEL_536;
        }
        ++v360;
      }
LABEL_19:
      v37 = *(_QWORD *)(v30 + 8);
      goto LABEL_20;
    }
LABEL_536:
    v362 = *(_DWORD *)(v34 + 72);
    v401[0] = v30;
    v27 = (unsigned int)(v362 + 1);
    v26 = (unsigned int)(4 * v27);
    if ( (unsigned int)v26 >= 3 * v35 )
      goto LABEL_542;
    v26 = v35 >> 3;
    if ( v35 - *(_DWORD *)(v34 + 76) - (unsigned int)v27 <= (unsigned int)v26 )
      goto LABEL_543;
LABEL_538:
    v353 = *(_QWORD *)v30 == -4096;
    *(_DWORD *)(v34 + 72) = v27;
    if ( !v353 )
      --*(_DWORD *)(v34 + 76);
    *(_QWORD *)v30 = v32;
    v37 = 0;
    *(_QWORD *)(v30 + 8) = 0;
LABEL_20:
    v400 = v33;
    v38 = *(_QWORD *)(v33 + 128);
    if ( v38
      || (sub_7052B0((__int64 *)(*(_QWORD *)(v33 + 104) + 96LL), *(_QWORD *)(v33 + 104), v30, v27, v26, a6),
          (v38 = *(_QWORD *)(v33 + 128)) != 0) )
    {
      v38 = *(_QWORD *)(v38 + 88);
    }
    v400 = v38;
    v39 = *(_QWORD *)(v378 + 72);
    v40 = *(_DWORD *)(v39 + 80);
    if ( !v40 )
    {
      v401[0] = 0;
LABEL_524:
      v40 *= 2;
LABEL_525:
      sub_7055A0(v39 + 64, v40, v30, v27, v26, a6);
      sub_A6DD20((__int64 *)(v39 + 64), &v400, v401);
      v38 = v400;
      v30 = v401[0];
      v27 = (unsigned int)(*(_DWORD *)(v39 + 72) + 1);
      goto LABEL_520;
    }
    a6 = v40 - 1;
    v26 = *(_QWORD *)(v39 + 64);
    v27 = (unsigned int)a6 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
    v30 = v26 + 16 * v27;
    v41 = *(_QWORD *)v30;
    if ( v38 == *(_QWORD *)v30 )
      goto LABEL_24;
    v354 = 1;
    v355 = 0;
    if ( v41 != -4096 )
    {
      while ( 1 )
      {
        if ( v41 == -8192 && !v355 )
          v355 = v30;
        v27 = (unsigned int)a6 & ((_DWORD)v27 + v354);
        v30 = v26 + 16 * v27;
        v41 = *(_QWORD *)v30;
        if ( v38 == *(_QWORD *)v30 )
          break;
        if ( v41 == -4096 )
        {
          if ( v355 )
            v30 = v355;
          goto LABEL_518;
        }
        ++v354;
      }
LABEL_24:
      v42 = *(_QWORD *)(v30 + 8);
      goto LABEL_25;
    }
LABEL_518:
    v356 = *(_DWORD *)(v39 + 72);
    v401[0] = v30;
    v27 = (unsigned int)(v356 + 1);
    v26 = (unsigned int)(4 * v27);
    if ( (unsigned int)v26 >= 3 * v40 )
      goto LABEL_524;
    v26 = v40 >> 3;
    if ( v40 - *(_DWORD *)(v39 + 76) - (unsigned int)v27 <= (unsigned int)v26 )
      goto LABEL_525;
LABEL_520:
    v353 = *(_QWORD *)v30 == -4096;
    *(_DWORD *)(v39 + 72) = v27;
    if ( !v353 )
      --*(_DWORD *)(v39 + 76);
    *(_QWORD *)v30 = v38;
    v42 = 0;
    *(_QWORD *)(v30 + 8) = 0;
LABEL_25:
    if ( v37 <= v42 )
    {
      v308 = a1->m128i_i64[1];
      v309 = *((_QWORD *)v386 - 1);
      v400 = v309;
      v310 = *(_QWORD *)(v309 + 128);
      if ( v310
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v309 + 104) + 96LL), *(_QWORD *)(v309 + 104), v30, v27, v26, a6),
            (v310 = *(_QWORD *)(v309 + 128)) != 0) )
      {
        v310 = *(_QWORD *)(v310 + 88);
      }
      v400 = v310;
      v311 = *(_QWORD *)(v378 + 72);
      v312 = *(_DWORD *)(v311 + 80);
      if ( v312 )
      {
        a6 = v312 - 1;
        v26 = *(_QWORD *)(v311 + 64);
        v27 = (unsigned int)a6 & (((unsigned int)v310 >> 9) ^ ((unsigned int)v310 >> 4));
        v30 = v26 + 16 * v27;
        v313 = *(_QWORD *)v30;
        if ( v310 == *(_QWORD *)v30 )
        {
LABEL_381:
          v314 = *(_QWORD *)(v30 + 8);
          goto LABEL_382;
        }
        v369 = 1;
        v370 = 0;
        if ( v313 != -4096 )
        {
          while ( 1 )
          {
            if ( !v370 && v313 == -8192 )
              v370 = v30;
            v27 = (unsigned int)a6 & (v369 + (_DWORD)v27);
            v30 = v26 + 16LL * (unsigned int)v27;
            v313 = *(_QWORD *)v30;
            if ( v310 == *(_QWORD *)v30 )
              goto LABEL_381;
            if ( v313 == -4096 )
            {
              if ( v370 )
                v30 = v370;
              break;
            }
            ++v369;
          }
        }
        v371 = *(_DWORD *)(v311 + 72);
        v401[0] = v30;
        v27 = (unsigned int)(v371 + 1);
        v26 = (unsigned int)(4 * v27);
        if ( (unsigned int)v26 < 3 * v312 )
        {
          v26 = v312 >> 3;
          if ( v312 - *(_DWORD *)(v311 + 76) - (unsigned int)v27 > (unsigned int)v26 )
            goto LABEL_554;
          goto LABEL_553;
        }
      }
      else
      {
        v401[0] = 0;
      }
      v312 *= 2;
LABEL_553:
      sub_7055A0(v311 + 64, v312, v30, v27, v26, a6);
      sub_A6DD20((__int64 *)(v311 + 64), &v400, v401);
      v310 = v400;
      v30 = v401[0];
      v27 = (unsigned int)(*(_DWORD *)(v311 + 72) + 1);
LABEL_554:
      v353 = *(_QWORD *)v30 == -4096;
      *(_DWORD *)(v311 + 72) = v27;
      if ( !v353 )
        --*(_DWORD *)(v311 + 76);
      *(_QWORD *)v30 = v310;
      v314 = 0;
      *(_QWORD *)(v30 + 8) = 0;
LABEL_382:
      v400 = v308;
      v315 = *(_QWORD *)(v308 + 128);
      if ( v315
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v308 + 104) + 96LL), *(_QWORD *)(v308 + 104), v30, v27, v26, a6),
            (v315 = *(_QWORD *)(v308 + 128)) != 0) )
      {
        v315 = *(_QWORD *)(v315 + 88);
      }
      v400 = v315;
      v316 = *(_QWORD *)(v378 + 72);
      v317 = *(_DWORD *)(v316 + 80);
      if ( v317 )
      {
        a6 = v317 - 1;
        v26 = *(_QWORD *)(v316 + 64);
        v27 = (unsigned int)a6 & (((unsigned int)v315 >> 9) ^ ((unsigned int)v315 >> 4));
        v30 = v26 + 16 * v27;
        v318 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == v315 )
        {
LABEL_386:
          v319 = *(_QWORD *)(v30 + 8);
LABEL_387:
          v30 = a1->m128i_i64[0];
          if ( v314 <= v319 )
          {
            v44 = a1->m128i_i64[1];
            a1->m128i_i64[1] = v30;
            a1->m128i_i64[0] = v44;
          }
          else
          {
            a1->m128i_i64[0] = *((_QWORD *)v386 - 1);
            *((_QWORD *)v386 - 1) = v30;
            v44 = a1->m128i_i64[0];
          }
          goto LABEL_27;
        }
        v363 = 1;
        v364 = 0;
        if ( v318 != -4096 )
        {
          while ( 1 )
          {
            if ( !v364 && v318 == -8192 )
              v364 = v30;
            v27 = (unsigned int)a6 & (v363 + (_DWORD)v27);
            v30 = v26 + 16LL * (unsigned int)v27;
            v318 = *(_QWORD *)v30;
            if ( v315 == *(_QWORD *)v30 )
              goto LABEL_386;
            if ( v318 == -4096 )
            {
              if ( v364 )
                v30 = v364;
              break;
            }
            ++v363;
          }
        }
        v365 = *(_DWORD *)(v316 + 72);
        v401[0] = v30;
        v27 = (unsigned int)(v365 + 1);
        v26 = (unsigned int)(4 * v27);
        if ( (unsigned int)v26 < 3 * v317 )
        {
          v26 = v317 >> 3;
          if ( v317 - *(_DWORD *)(v316 + 76) - (unsigned int)v27 > (unsigned int)v26 )
          {
LABEL_599:
            v353 = *(_QWORD *)v30 == -4096;
            *(_DWORD *)(v316 + 72) = v27;
            if ( !v353 )
              --*(_DWORD *)(v316 + 76);
            *(_QWORD *)v30 = v315;
            v319 = 0;
            *(_QWORD *)(v30 + 8) = 0;
            goto LABEL_387;
          }
LABEL_604:
          sub_7055A0(v316 + 64, v317, v30, v27, v26, a6);
          sub_A6DD20((__int64 *)(v316 + 64), &v400, v401);
          v315 = v400;
          v30 = v401[0];
          v27 = (unsigned int)(*(_DWORD *)(v316 + 72) + 1);
          goto LABEL_599;
        }
      }
      else
      {
        v401[0] = 0;
      }
      v317 *= 2;
      goto LABEL_604;
    }
    v30 = *v11;
    v43 = a1->m128i_i64[0];
    a1->m128i_i64[0] = *v11;
    *v11 = v43;
    v44 = a1->m128i_i64[0];
LABEL_27:
    v376 = (char *)v395;
    v45 = (__int64 *)v386;
    while ( 2 )
    {
      v46 = *(_QWORD *)(v44 + 128);
      v394 = (__int64 *)v376;
      v380 = *(_QWORD *)v376;
      if ( !v46 )
      {
        v101 = *(_QWORD *)(v44 + 104);
        v30 = *(_QWORD *)(v101 + 96);
        v102 = v30 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v30 & 1) == 0 )
        {
          v103 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v30 &= 2u;
            if ( !(_DWORD)v30 )
              goto LABEL_31;
            v102 = sub_6E2500(v103, *(_QWORD *)(v44 + 104), v30, v27, v26, a6) & 0xFFFFFFFFFFFFFFFELL;
            v30 = v102 | 1;
            *(_QWORD *)(v101 + 96) = v102 | 1;
          }
        }
        if ( v102 )
        {
          if ( (v102 & 4) != 0 )
          {
            v30 &= 0xFFFFFFFFFFFFFFF8LL;
            if ( v30 )
            {
              v104 = *(_QWORD *)v30;
              v105 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
              if ( *(_DWORD *)(v30 + 8) != v105 )
              {
                *(_DWORD *)(v30 + 8) = v105;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v104 + 152LL))(v104, v101);
              }
            }
          }
        }
        if ( !*(_QWORD *)(v44 + 128) )
          goto LABEL_31;
        v46 = *(_QWORD *)(v44 + 128);
      }
      v46 = *(_QWORD *)(v46 + 88);
LABEL_31:
      v47 = *(_QWORD *)(v378 + 72);
      v48 = *(_DWORD *)(v47 + 80);
      v49 = *(__int64 **)(v47 + 64);
      if ( !v48 )
        goto LABEL_250;
      v50 = v48 - 1;
      v51 = ((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4);
      v52 = v50 & v51;
      v30 = (__int64)&v49[2 * ((unsigned int)v50 & v51)];
      v27 = *(_QWORD *)v30;
      if ( v46 == *(_QWORD *)v30 )
      {
LABEL_33:
        v387 = *(_QWORD *)(v30 + 8);
        goto LABEL_34;
      }
      v183 = 1;
      v26 = 0;
      if ( v27 != -4096 )
      {
        while ( 1 )
        {
          if ( !v26 && v27 == -8192 )
            v26 = v30;
          a6 = (unsigned int)(v183 + 1);
          v52 = v50 & (v183 + v52);
          v30 = (__int64)&v49[2 * v52];
          v27 = *(_QWORD *)v30;
          if ( v46 == *(_QWORD *)v30 )
            goto LABEL_33;
          if ( v27 == -4096 )
            break;
          ++v183;
        }
        if ( v26 )
          v30 = v26;
      }
      v27 = (unsigned int)(*(_DWORD *)(v47 + 72) + 1);
      if ( 4 * (int)v27 < 3 * v48 )
      {
        if ( v48 - *(_DWORD *)(v47 + 76) - (unsigned int)v27 > v48 >> 3 )
        {
LABEL_207:
          v184 = *(_QWORD *)v30;
          goto LABEL_208;
        }
        v253 = (((((((((v50 | (v50 >> 1)) >> 2) | v50 | (v50 >> 1)) >> 4) | ((v50 | (v50 >> 1)) >> 2) | v50 | (v50 >> 1)) >> 8)
                | ((((v50 | (v50 >> 1)) >> 2) | v50 | (v50 >> 1)) >> 4)
                | ((v50 | (v50 >> 1)) >> 2)
                | v50
                | (v50 >> 1)) >> 16)
              | ((((((v50 | (v50 >> 1)) >> 2) | v50 | (v50 >> 1)) >> 4) | ((v50 | (v50 >> 1)) >> 2) | v50 | (v50 >> 1)) >> 8)
              | ((((v50 | (v50 >> 1)) >> 2) | v50 | (v50 >> 1)) >> 4)
              | ((v50 | (v50 >> 1)) >> 2)
              | v50
              | (v50 >> 1))
             + 1;
        if ( v253 < 0x40 )
          v253 = 64;
        *(_DWORD *)(v47 + 80) = v253;
        v254 = sub_22300B0(16LL * v253, 8, v30, v27, v26, a6);
        *(_QWORD *)(v47 + 64) = v254;
        if ( v49 )
        {
          v255 = *(unsigned int *)(v47 + 80);
          *(_QWORD *)(v47 + 72) = 0;
          v256 = (_QWORD *)v254;
          v257 = 2LL * v48;
          v258 = v255;
          v259 = (_QWORD *)(v254 + 16 * v255);
          if ( (_QWORD *)v254 != v259 )
          {
            do
            {
              *v256 = -4096;
              v256 += 2;
            }
            while ( v259 != v256 );
          }
          v260 = v49;
          v261 = v258 - 1;
          do
          {
            v262 = *v260;
            if ( *v260 != -8192 && v262 != -4096 )
            {
              if ( !v258 )
              {
                *(_QWORD *)&dword_0 = *v260;
                BUG();
              }
              v263 = v261 & (((unsigned int)v262 >> 9) ^ ((unsigned int)v262 >> 4));
              v264 = (_QWORD *)(v254 + 16LL * v263);
              v265 = *v264;
              if ( *v264 != v262 && v265 != -4096 )
              {
                v398 = 1;
                v392 = nullptr;
                while ( 1 )
                {
                  if ( !v392 )
                  {
                    if ( v265 != -8192 )
                      v264 = nullptr;
                    v392 = v264;
                  }
                  v263 = v261 & (v398 + v263);
                  v264 = (_QWORD *)(v254 + 16LL * v263);
                  v265 = *v264;
                  if ( v262 == *v264 )
                    break;
                  if ( v265 == -4096 )
                  {
                    if ( v392 )
                      v264 = v392;
                    break;
                  }
                  ++v398;
                }
              }
              v266 = v260[1];
              *v264 = v262;
              v264[1] = v266;
              ++*(_DWORD *)(v47 + 72);
            }
            v260 += 2;
          }
          while ( &v49[v257] != v260 );
          operator delete(v49, v257 * 8, 8);
          v254 = *(_QWORD *)(v47 + 64);
          v267 = *(_DWORD *)(v47 + 80);
          v27 = (unsigned int)(*(_DWORD *)(v47 + 72) + 1);
        }
        else
        {
          v296 = *(unsigned int *)(v47 + 80);
          *(_QWORD *)(v47 + 72) = 0;
          v267 = v296;
          v297 = (_QWORD *)(v254 + 16 * v296);
          if ( (_QWORD *)v254 != v297 )
          {
            v298 = (_QWORD *)v254;
            do
            {
              *v298 = -4096;
              v298 += 2;
            }
            while ( v297 != v298 );
          }
          v27 = 1;
        }
        if ( !v267 )
          goto LABEL_768;
        v268 = v267 - 1;
        v26 = v268 & v51;
        v30 = v254 + 16 * v26;
        v184 = *(_QWORD *)v30;
        if ( v46 == *(_QWORD *)v30 )
          goto LABEL_208;
        v269 = 1;
        v270 = 0;
        if ( v184 != -4096 )
        {
          while ( 1 )
          {
            if ( v270 || v184 != -8192 )
              v30 = v270;
            v26 = v268 & (unsigned int)(v269 + v26);
            a6 = v254 + 16LL * (unsigned int)v26;
            v184 = *(_QWORD *)a6;
            if ( v46 == *(_QWORD *)a6 )
              goto LABEL_303;
            if ( v184 == -4096 )
              goto LABEL_618;
            ++v269;
            v270 = v30;
            v30 = v254 + 16LL * (unsigned int)v26;
          }
        }
      }
      else
      {
LABEL_250:
        v215 = (((((((2 * v48 - 1) | ((unsigned __int64)(2 * v48 - 1) >> 1)) >> 2)
                 | (2 * v48 - 1)
                 | ((unsigned __int64)(2 * v48 - 1) >> 1)) >> 4)
               | (((2 * v48 - 1) | ((unsigned __int64)(2 * v48 - 1) >> 1)) >> 2)
               | (2 * v48 - 1)
               | ((unsigned __int64)(2 * v48 - 1) >> 1)) >> 8)
             | (((((2 * v48 - 1) | ((unsigned __int64)(2 * v48 - 1) >> 1)) >> 2)
               | (2 * v48 - 1)
               | ((unsigned __int64)(2 * v48 - 1) >> 1)) >> 4)
             | (((2 * v48 - 1) | ((unsigned __int64)(2 * v48 - 1) >> 1)) >> 2)
             | (2 * v48 - 1)
             | ((unsigned __int64)(2 * v48 - 1) >> 1);
        v216 = ((v215 >> 16) | v215) + 1;
        if ( (unsigned int)v216 < 0x40 )
          LODWORD(v216) = 64;
        *(_DWORD *)(v47 + 80) = v216;
        v217 = sub_22300B0(16LL * (unsigned int)v216, 8, v30, v27, v26, a6);
        *(_QWORD *)(v47 + 64) = v217;
        if ( v49 )
        {
          v218 = *(unsigned int *)(v47 + 80);
          *(_QWORD *)(v47 + 72) = 0;
          v219 = (_QWORD *)v217;
          v220 = 2LL * v48;
          v221 = v218;
          v222 = &v49[v220];
          v223 = (_QWORD *)(v217 + 16 * v218);
          if ( (_QWORD *)v217 != v223 )
          {
            do
            {
              *v219 = -4096;
              v219 += 2;
            }
            while ( v223 != v219 );
          }
          v224 = v49;
          for ( i = v221 - 1; v222 != v224; v224 += 2 )
          {
            v226 = *v224;
            if ( *v224 != -8192 && v226 != -4096 )
            {
              if ( !v221 )
              {
                *(_QWORD *)&dword_0 = *v224;
                BUG();
              }
              v227 = i & (((unsigned int)v226 >> 9) ^ ((unsigned int)v226 >> 4));
              v228 = (_QWORD *)(v217 + 16LL * v227);
              v229 = *v228;
              if ( *v228 != v226 && v229 != -4096 )
              {
                v391 = 1;
                v320 = nullptr;
                while ( 1 )
                {
                  if ( !v320 && v229 == -8192 )
                    v320 = v228;
                  v227 = i & (v391 + v227);
                  v228 = (_QWORD *)(v217 + 16LL * v227);
                  v229 = *v228;
                  if ( v226 == *v228 )
                    break;
                  if ( v229 == -4096 )
                  {
                    if ( v320 )
                      v228 = v320;
                    break;
                  }
                  ++v391;
                }
              }
              v230 = v224[1];
              *v228 = v226;
              v228[1] = v230;
              ++*(_DWORD *)(v47 + 72);
            }
          }
          operator delete(v49, v220 * 8, 8);
          v217 = *(_QWORD *)(v47 + 64);
          v231 = *(_DWORD *)(v47 + 80);
          v27 = (unsigned int)(*(_DWORD *)(v47 + 72) + 1);
        }
        else
        {
          v288 = *(unsigned int *)(v47 + 80);
          *(_QWORD *)(v47 + 72) = 0;
          v231 = v288;
          v289 = (_QWORD *)(v217 + 16 * v288);
          if ( (_QWORD *)v217 != v289 )
          {
            v290 = (_QWORD *)v217;
            do
            {
              *v290 = -4096;
              v290 += 2;
            }
            while ( v289 != v290 );
          }
          v27 = 1;
        }
        if ( !v231 )
        {
LABEL_768:
          ++*(_DWORD *)(v47 + 72);
          BUG();
        }
        v232 = v231 - 1;
        v26 = v232 & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
        v30 = v217 + 16 * v26;
        v184 = *(_QWORD *)v30;
        if ( v46 == *(_QWORD *)v30 )
          goto LABEL_208;
        v233 = 1;
        v234 = 0;
        if ( v184 != -4096 )
        {
          while ( 1 )
          {
            if ( v234 || v184 != -8192 )
              v30 = v234;
            v26 = v232 & (unsigned int)(v233 + v26);
            a6 = v217 + 16LL * (unsigned int)v26;
            v184 = *(_QWORD *)a6;
            if ( v46 == *(_QWORD *)a6 )
              break;
            if ( v184 == -4096 )
            {
LABEL_618:
              if ( v30 )
                goto LABEL_207;
              v30 = a6;
              goto LABEL_266;
            }
            ++v233;
            v234 = v30;
            v30 = v217 + 16LL * (unsigned int)v26;
          }
LABEL_303:
          v30 = a6;
LABEL_208:
          *(_DWORD *)(v47 + 72) = v27;
          if ( v184 != -4096 )
            --*(_DWORD *)(v47 + 76);
          goto LABEL_210;
        }
      }
LABEL_266:
      *(_DWORD *)(v47 + 72) = v27;
LABEL_210:
      *(_QWORD *)v30 = v46;
      *(_QWORD *)(v30 + 8) = 0;
      v387 = 0;
LABEL_34:
      v53 = *(_QWORD *)(v380 + 128);
      if ( !v53 )
      {
        v106 = *(_QWORD *)(v380 + 104);
        v30 = *(_QWORD *)(v106 + 96);
        v107 = v30 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v30 & 1) == 0 )
        {
          v108 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v30 &= 2u;
            if ( !(_DWORD)v30 )
              goto LABEL_36;
            v107 = sub_6E2500(v108, v106, v30, v27, v26, a6) & 0xFFFFFFFFFFFFFFFELL;
            v30 = v107 | 1;
            *(_QWORD *)(v106 + 96) = v107 | 1;
          }
        }
        if ( v107 )
        {
          if ( (v107 & 4) != 0 )
          {
            v30 &= 0xFFFFFFFFFFFFFFF8LL;
            if ( v30 )
            {
              v109 = *(_QWORD *)v30;
              v110 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
              if ( *(_DWORD *)(v30 + 8) != v110 )
              {
                *(_DWORD *)(v30 + 8) = v110;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v109 + 152LL))(v109, v106);
              }
            }
          }
        }
        if ( !*(_QWORD *)(v380 + 128) )
          goto LABEL_36;
        v53 = *(_QWORD *)(v380 + 128);
      }
      v53 = *(_QWORD *)(v53 + 88);
LABEL_36:
      v54 = *(_QWORD *)(v378 + 72);
      v55 = *(_DWORD *)(v54 + 80);
      v56 = *(__int64 **)(v54 + 64);
      if ( !v55 )
        goto LABEL_234;
      v57 = v55 - 1;
      v58 = ((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4);
      v59 = v57 & v58;
      v30 = (__int64)&v56[2 * ((unsigned int)v57 & v58)];
      v27 = *(_QWORD *)v30;
      if ( *(_QWORD *)v30 == v53 )
      {
LABEL_38:
        v60 = *(_QWORD *)(v30 + 8);
        goto LABEL_39;
      }
      v185 = 1;
      v26 = 0;
      if ( v27 != -4096 )
      {
        while ( 1 )
        {
          if ( !v26 && v27 == -8192 )
            v26 = v30;
          a6 = (unsigned int)(v185 + 1);
          v59 = v57 & (v185 + v59);
          v30 = (__int64)&v56[2 * v59];
          v27 = *(_QWORD *)v30;
          if ( v53 == *(_QWORD *)v30 )
            goto LABEL_38;
          if ( v27 == -4096 )
            break;
          ++v185;
        }
        if ( v26 )
          v30 = v26;
      }
      v27 = (unsigned int)(*(_DWORD *)(v54 + 72) + 1);
      if ( 4 * (int)v27 >= 3 * v55 )
      {
LABEL_234:
        v197 = (((((((2 * v55 - 1) | ((unsigned __int64)(2 * v55 - 1) >> 1)) >> 2)
                 | (2 * v55 - 1)
                 | ((unsigned __int64)(2 * v55 - 1) >> 1)) >> 4)
               | (((2 * v55 - 1) | ((unsigned __int64)(2 * v55 - 1) >> 1)) >> 2)
               | (2 * v55 - 1)
               | ((unsigned __int64)(2 * v55 - 1) >> 1)) >> 8)
             | (((((2 * v55 - 1) | ((unsigned __int64)(2 * v55 - 1) >> 1)) >> 2)
               | (2 * v55 - 1)
               | ((unsigned __int64)(2 * v55 - 1) >> 1)) >> 4)
             | (((2 * v55 - 1) | ((unsigned __int64)(2 * v55 - 1) >> 1)) >> 2)
             | (2 * v55 - 1)
             | ((unsigned __int64)(2 * v55 - 1) >> 1);
        v198 = ((v197 >> 16) | v197) + 1;
        if ( (unsigned int)v198 < 0x40 )
          LODWORD(v198) = 64;
        *(_DWORD *)(v54 + 80) = v198;
        v199 = sub_22300B0(16LL * (unsigned int)v198, 8, v30, v27, v26, a6);
        *(_QWORD *)(v54 + 64) = v199;
        if ( v56 )
        {
          v200 = *(unsigned int *)(v54 + 80);
          *(_QWORD *)(v54 + 72) = 0;
          v201 = (_QWORD *)v199;
          v202 = 2LL * v55;
          v203 = v200;
          v204 = &v56[v202];
          v205 = (_QWORD *)(v199 + 16 * v200);
          if ( (_QWORD *)v199 != v205 )
          {
            do
            {
              *v201 = -4096;
              v201 += 2;
            }
            while ( v205 != v201 );
          }
          v206 = v56;
          for ( j = v203 - 1; v204 != v206; v206 += 2 )
          {
            v208 = *v206;
            if ( *v206 != -8192 && v208 != -4096 )
            {
              if ( !v203 )
              {
                *(_QWORD *)&dword_0 = *v206;
                BUG();
              }
              v209 = j & (((unsigned int)v208 >> 9) ^ ((unsigned int)v208 >> 4));
              v210 = (_QWORD *)(v199 + 16LL * v209);
              v211 = *v210;
              if ( *v210 != v208 && v211 != -4096 )
              {
                v384 = 1;
                v321 = nullptr;
                while ( 1 )
                {
                  if ( !v321 && v211 == -8192 )
                    v321 = v210;
                  v209 = j & (v384 + v209);
                  v210 = (_QWORD *)(v199 + 16LL * v209);
                  v211 = *v210;
                  if ( v208 == *v210 )
                    break;
                  if ( v211 == -4096 )
                  {
                    if ( v321 )
                      v210 = v321;
                    break;
                  }
                  ++v384;
                }
              }
              v212 = v206[1];
              *v210 = v208;
              v210[1] = v212;
              ++*(_DWORD *)(v54 + 72);
            }
          }
          operator delete(v56, v202 * 8, 8);
          v199 = *(_QWORD *)(v54 + 64);
          v213 = *(_DWORD *)(v54 + 80);
          v27 = (unsigned int)(*(_DWORD *)(v54 + 72) + 1);
        }
        else
        {
          v285 = *(unsigned int *)(v54 + 80);
          *(_QWORD *)(v54 + 72) = 0;
          v213 = v285;
          v286 = (_QWORD *)(v199 + 16 * v285);
          if ( (_QWORD *)v199 != v286 )
          {
            v287 = (_QWORD *)v199;
            do
            {
              *v287 = -4096;
              v287 += 2;
            }
            while ( v286 != v287 );
          }
          v27 = 1;
        }
        if ( !v213 )
        {
LABEL_772:
          ++*(_DWORD *)(v54 + 72);
          BUG();
        }
        v214 = v213 - 1;
        v26 = v214 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
        v30 = v199 + 16 * v26;
        v186 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == v53 )
        {
LABEL_249:
          v186 = v53;
        }
        else
        {
          v328 = 1;
          v329 = 0;
          if ( v186 == -4096 )
            goto LABEL_283;
          while ( 1 )
          {
            if ( v186 != -8192 || v329 )
              v30 = v329;
            v26 = v214 & (unsigned int)(v328 + v26);
            a6 = v199 + 16LL * (unsigned int)v26;
            v186 = *(_QWORD *)a6;
            if ( v53 == *(_QWORD *)a6 )
              break;
            if ( v186 == -4096 )
            {
LABEL_576:
              if ( v30 )
                goto LABEL_214;
              v30 = a6;
              goto LABEL_283;
            }
            ++v328;
            v329 = v30;
            v30 = v199 + 16LL * (unsigned int)v26;
          }
LABEL_465:
          v30 = a6;
        }
LABEL_215:
        *(_DWORD *)(v54 + 72) = v27;
        if ( v186 != -4096 )
          --*(_DWORD *)(v54 + 76);
        goto LABEL_217;
      }
      if ( v55 - *(_DWORD *)(v54 + 76) - (unsigned int)v27 > v55 >> 3 )
      {
LABEL_214:
        v186 = *(_QWORD *)v30;
        goto LABEL_215;
      }
      v235 = (((((((((v57 | (v57 >> 1)) >> 2) | v57 | (v57 >> 1)) >> 4) | ((v57 | (v57 >> 1)) >> 2) | v57 | (v57 >> 1)) >> 8)
              | ((((v57 | (v57 >> 1)) >> 2) | v57 | (v57 >> 1)) >> 4)
              | ((v57 | (v57 >> 1)) >> 2)
              | v57
              | (v57 >> 1)) >> 16)
            | ((((((v57 | (v57 >> 1)) >> 2) | v57 | (v57 >> 1)) >> 4) | ((v57 | (v57 >> 1)) >> 2) | v57 | (v57 >> 1)) >> 8)
            | ((((v57 | (v57 >> 1)) >> 2) | v57 | (v57 >> 1)) >> 4)
            | ((v57 | (v57 >> 1)) >> 2)
            | v57
            | (v57 >> 1))
           + 1;
      if ( v235 < 0x40 )
        v235 = 64;
      *(_DWORD *)(v54 + 80) = v235;
      v236 = sub_22300B0(16LL * v235, 8, v30, v27, v26, a6);
      *(_QWORD *)(v54 + 64) = v236;
      if ( v56 )
      {
        v237 = *(unsigned int *)(v54 + 80);
        *(_QWORD *)(v54 + 72) = 0;
        v238 = (_QWORD *)v236;
        v239 = 2LL * v55;
        v240 = v237;
        v241 = (_QWORD *)(v236 + 16 * v237);
        if ( (_QWORD *)v236 != v241 )
        {
          do
          {
            *v238 = -4096;
            v238 += 2;
          }
          while ( v241 != v238 );
        }
        v242 = v56;
        v243 = v240 - 1;
        do
        {
          v244 = *v242;
          if ( *v242 != -4096 && v244 != -8192 )
          {
            if ( !v240 )
            {
              *(_QWORD *)&dword_0 = *v242;
              BUG();
            }
            v245 = v243 & (((unsigned int)v244 >> 9) ^ ((unsigned int)v244 >> 4));
            v246 = (_QWORD *)(v236 + 16LL * v245);
            v247 = *v246;
            if ( *v246 != v244 && v247 != -4096 )
            {
              v399 = 1;
              v385 = nullptr;
              while ( 1 )
              {
                if ( v247 == -8192 )
                {
                  if ( v385 )
                    v246 = v385;
                  v385 = v246;
                }
                v245 = v243 & (v399 + v245);
                v246 = (_QWORD *)(v236 + 16LL * v245);
                v247 = *v246;
                if ( v244 == *v246 )
                  break;
                if ( v247 == -4096 )
                {
                  if ( v385 )
                    v246 = v385;
                  break;
                }
                ++v399;
              }
            }
            v248 = v242[1];
            *v246 = v244;
            v246[1] = v248;
            ++*(_DWORD *)(v54 + 72);
          }
          v242 += 2;
        }
        while ( &v56[v239] != v242 );
        operator delete(v56, v239 * 8, 8);
        v236 = *(_QWORD *)(v54 + 64);
        v249 = *(_DWORD *)(v54 + 80);
        v27 = (unsigned int)(*(_DWORD *)(v54 + 72) + 1);
      }
      else
      {
        v293 = *(unsigned int *)(v54 + 80);
        *(_QWORD *)(v54 + 72) = 0;
        v249 = v293;
        v294 = (_QWORD *)(v236 + 16 * v293);
        if ( (_QWORD *)v236 != v294 )
        {
          v295 = (_QWORD *)v236;
          do
          {
            *v295 = -4096;
            v295 += 2;
          }
          while ( v294 != v295 );
        }
        v27 = 1;
      }
      if ( !v249 )
        goto LABEL_772;
      v250 = v249 - 1;
      v26 = v250 & v58;
      v30 = v236 + 16 * v26;
      v186 = *(_QWORD *)v30;
      if ( *(_QWORD *)v30 == v53 )
        goto LABEL_249;
      v251 = 1;
      v252 = 0;
      if ( v186 != -4096 )
      {
        while ( 1 )
        {
          if ( v252 || v186 != -8192 )
            v30 = v252;
          v26 = v250 & (unsigned int)(v251 + v26);
          a6 = v236 + 16LL * (unsigned int)v26;
          v186 = *(_QWORD *)a6;
          if ( v53 == *(_QWORD *)a6 )
            goto LABEL_465;
          if ( v186 == -4096 )
            goto LABEL_576;
          ++v251;
          v252 = v30;
          v30 = v236 + 16LL * (unsigned int)v26;
        }
      }
LABEL_283:
      *(_DWORD *)(v54 + 72) = v27;
LABEL_217:
      *(_QWORD *)v30 = v53;
      v60 = 0;
      *(_QWORD *)(v30 + 8) = 0;
LABEL_39:
      if ( v387 > v60 )
        goto LABEL_28;
      do
      {
        v71 = *--v45;
        v72 = *(_QWORD *)(*v45 + 128);
        v382 = a1->m128i_i64[0];
        v73 = v72;
        if ( !v72 )
        {
          v96 = *(_QWORD *)(v71 + 104);
          v30 = *(_QWORD *)(v96 + 96);
          v97 = v30 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v30 & 1) == 0 )
          {
            v98 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              v30 &= 2u;
              if ( !(_DWORD)v30 )
                goto LABEL_51;
              v97 = sub_6E2500(v98, *(_QWORD *)(v71 + 104), v30, v27, v26, a6) & 0xFFFFFFFFFFFFFFFELL;
              v30 = v97 | 1;
              *(_QWORD *)(v96 + 96) = v97 | 1;
            }
          }
          if ( v97 )
          {
            if ( (v97 & 4) != 0 )
            {
              v30 &= 0xFFFFFFFFFFFFFFF8LL;
              if ( v30 )
              {
                v99 = *(_QWORD *)v30;
                v100 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
                if ( *(_DWORD *)(v30 + 8) != v100 )
                {
                  *(_DWORD *)(v30 + 8) = v100;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v99 + 152LL))(v99, v96);
                }
              }
            }
          }
          v73 = *(_QWORD *)(v71 + 128);
          if ( !v73 )
            goto LABEL_51;
        }
        v72 = *(_QWORD *)(v73 + 88);
LABEL_51:
        v74 = *(_QWORD *)(v378 + 72);
        v75 = *(_DWORD *)(v74 + 80);
        v76 = *(__int64 **)(v74 + 64);
        if ( !v75 )
          goto LABEL_52;
        v61 = v75 - 1;
        v388 = ((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4);
        v27 = (v75 - 1) & v388;
        v30 = (__int64)&v76[2 * v27];
        v62 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == v72 )
        {
LABEL_42:
          v389 = *(_QWORD *)(v30 + 8);
          goto LABEL_43;
        }
        v138 = 1;
        v26 = 0;
        if ( v62 != -4096 )
        {
          while ( 1 )
          {
            if ( v62 == -8192 && !v26 )
              v26 = v30;
            a6 = (unsigned int)(v138 + 1);
            v27 = v61 & (v138 + (_DWORD)v27);
            v30 = (__int64)&v76[2 * (unsigned int)v27];
            v62 = *(_QWORD *)v30;
            if ( v72 == *(_QWORD *)v30 )
              goto LABEL_42;
            if ( v62 == -4096 )
              break;
            ++v138;
          }
          if ( v26 )
            v30 = v26;
        }
        v27 = (unsigned int)(*(_DWORD *)(v74 + 72) + 1);
        if ( 4 * (int)v27 < 3 * v75 )
        {
          if ( v75 - *(_DWORD *)(v74 + 76) - (unsigned int)v27 > v75 >> 3 )
          {
LABEL_151:
            v95 = *(_QWORD *)v30;
            goto LABEL_68;
          }
          v139 = ((v61 | ((unsigned __int64)v61 >> 1)) >> 2) | v61 | ((unsigned __int64)v61 >> 1);
          v140 = (((v139 >> 4) | v139) >> 8) | (v139 >> 4) | v139;
          v141 = ((v140 >> 16) | v140) + 1;
          if ( (unsigned int)v141 < 0x40 )
            LODWORD(v141) = 64;
          *(_DWORD *)(v74 + 80) = v141;
          v142 = sub_22300B0(16LL * (unsigned int)v141, 8, v30, v27, v26, a6);
          *(_QWORD *)(v74 + 64) = v142;
          if ( v76 )
          {
            v143 = *(unsigned int *)(v74 + 80);
            *(_QWORD *)(v74 + 72) = 0;
            v144 = (_QWORD *)v142;
            v145 = 2LL * v75;
            v146 = v143;
            v147 = (_QWORD *)(v142 + 16 * v143);
            if ( (_QWORD *)v142 != v147 )
            {
              do
              {
                *v144 = -4096;
                v144 += 2;
              }
              while ( v147 != v144 );
            }
            v148 = v76;
            v149 = v146 - 1;
            do
            {
              v150 = *v148;
              if ( *v148 != -8192 && v150 != -4096 )
              {
                if ( !v146 )
                {
                  *(_QWORD *)&dword_0 = *v148;
                  BUG();
                }
                v151 = v149 & (((unsigned int)v150 >> 9) ^ ((unsigned int)v150 >> 4));
                v152 = (_QWORD *)(v142 + 16LL * v151);
                v153 = *v152;
                if ( *v152 != v150 && v153 != -4096 )
                {
                  v397 = 1;
                  v274 = nullptr;
                  while ( 1 )
                  {
                    if ( !v274 && v153 == -8192 )
                      v274 = v152;
                    v151 = v149 & (v397 + v151);
                    v152 = (_QWORD *)(v142 + 16LL * v151);
                    v153 = *v152;
                    if ( v150 == *v152 )
                      break;
                    if ( v153 == -4096 )
                    {
                      if ( v274 )
                        v152 = v274;
                      break;
                    }
                    ++v397;
                  }
                }
                v154 = v148[1];
                *v152 = v150;
                v152[1] = v154;
                ++*(_DWORD *)(v74 + 72);
              }
              v148 += 2;
            }
            while ( &v76[v145] != v148 );
            operator delete(v76, v145 * 8, 8);
            v142 = *(_QWORD *)(v74 + 64);
            v155 = *(_DWORD *)(v74 + 80);
            v27 = (unsigned int)(*(_DWORD *)(v74 + 72) + 1);
          }
          else
          {
            v187 = *(unsigned int *)(v74 + 80);
            *(_QWORD *)(v74 + 72) = 0;
            v155 = v187;
            v188 = (_QWORD *)(v142 + 16 * v187);
            if ( (_QWORD *)v142 != v188 )
            {
              v189 = (_QWORD *)v142;
              do
              {
                *v189 = -4096;
                v189 += 2;
              }
              while ( v188 != v189 );
            }
            v27 = 1;
          }
          if ( !v155 )
          {
LABEL_760:
            ++*(_DWORD *)(v74 + 72);
            BUG();
          }
          v156 = v155 - 1;
          v26 = (v155 - 1) & v388;
          v30 = v142 + 16 * v26;
          v95 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 == v72 )
          {
LABEL_67:
            v95 = v72;
            goto LABEL_68;
          }
          v157 = 1;
          v158 = 0;
          if ( v95 != -4096 )
          {
            while ( 1 )
            {
              if ( v95 != -8192 || v158 )
                v30 = v158;
              v26 = v156 & (unsigned int)(v157 + v26);
              a6 = v142 + 16LL * (unsigned int)v26;
              v95 = *(_QWORD *)a6;
              if ( v72 == *(_QWORD *)a6 )
                break;
              if ( v95 == -4096 )
              {
LABEL_477:
                if ( v30 )
                  goto LABEL_151;
                v30 = a6;
                goto LABEL_175;
              }
              ++v157;
              v158 = v30;
              v30 = v142 + 16LL * (unsigned int)v26;
            }
LABEL_356:
            v30 = a6;
LABEL_68:
            *(_DWORD *)(v74 + 72) = v27;
            if ( v95 != -4096 )
              --*(_DWORD *)(v74 + 76);
            goto LABEL_70;
          }
        }
        else
        {
LABEL_52:
          v77 = (((((((2 * v75 - 1) | ((unsigned __int64)(2 * v75 - 1) >> 1)) >> 2)
                  | (2 * v75 - 1)
                  | ((unsigned __int64)(2 * v75 - 1) >> 1)) >> 4)
                | (((2 * v75 - 1) | ((unsigned __int64)(2 * v75 - 1) >> 1)) >> 2)
                | (2 * v75 - 1)
                | ((unsigned __int64)(2 * v75 - 1) >> 1)) >> 8)
              | (((((2 * v75 - 1) | ((unsigned __int64)(2 * v75 - 1) >> 1)) >> 2)
                | (2 * v75 - 1)
                | ((unsigned __int64)(2 * v75 - 1) >> 1)) >> 4)
              | (((2 * v75 - 1) | ((unsigned __int64)(2 * v75 - 1) >> 1)) >> 2)
              | (2 * v75 - 1)
              | ((unsigned __int64)(2 * v75 - 1) >> 1);
          v78 = ((v77 >> 16) | v77) + 1;
          if ( (unsigned int)v78 < 0x40 )
            LODWORD(v78) = 64;
          *(_DWORD *)(v74 + 80) = v78;
          v79 = sub_22300B0(16LL * (unsigned int)v78, 8, v30, v27, v26, a6);
          *(_QWORD *)(v74 + 64) = v79;
          if ( v76 )
          {
            v80 = *(unsigned int *)(v74 + 80);
            *(_QWORD *)(v74 + 72) = 0;
            v81 = (_QWORD *)v79;
            v82 = 2LL * v75;
            v83 = v80;
            v84 = &v76[v82];
            v85 = (_QWORD *)(v79 + 16 * v80);
            if ( (_QWORD *)v79 != v85 )
            {
              do
              {
                *v81 = -4096;
                v81 += 2;
              }
              while ( v85 != v81 );
            }
            v86 = v76;
            for ( k = v83 - 1; v84 != v86; v86 += 2 )
            {
              v88 = *v86;
              if ( *v86 != -8192 && v88 != -4096 )
              {
                if ( !v83 )
                {
                  *(_QWORD *)&dword_0 = *v86;
                  BUG();
                }
                v89 = k & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
                v90 = (_QWORD *)(v79 + 16LL * v89);
                v91 = *v90;
                if ( *v90 != v88 && v91 != -4096 )
                {
                  v390 = 1;
                  v271 = nullptr;
                  while ( 1 )
                  {
                    if ( !v271 && v91 == -8192 )
                      v271 = v90;
                    v89 = k & (v390 + v89);
                    v90 = (_QWORD *)(v79 + 16LL * v89);
                    v91 = *v90;
                    if ( v88 == *v90 )
                      break;
                    if ( v91 == -4096 )
                    {
                      if ( v271 )
                        v90 = v271;
                      break;
                    }
                    ++v390;
                  }
                }
                v92 = v86[1];
                *v90 = v88;
                v90[1] = v92;
                ++*(_DWORD *)(v74 + 72);
              }
            }
            operator delete(v76, v82 * 8, 8);
            v79 = *(_QWORD *)(v74 + 64);
            v93 = *(_DWORD *)(v74 + 80);
            v27 = (unsigned int)(*(_DWORD *)(v74 + 72) + 1);
          }
          else
          {
            v180 = *(unsigned int *)(v74 + 80);
            *(_QWORD *)(v74 + 72) = 0;
            v93 = v180;
            v181 = (_QWORD *)(v79 + 16 * v180);
            if ( (_QWORD *)v79 != v181 )
            {
              v182 = (_QWORD *)v79;
              do
              {
                *v182 = -4096;
                v182 += 2;
              }
              while ( v181 != v182 );
            }
            v27 = 1;
          }
          if ( !v93 )
            goto LABEL_760;
          v94 = v93 - 1;
          v26 = (v93 - 1) & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
          v30 = v79 + 16 * v26;
          v95 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 == v72 )
            goto LABEL_67;
          v291 = 1;
          v292 = 0;
          if ( v95 != -4096 )
          {
            while ( 1 )
            {
              if ( v292 || v95 != -8192 )
                v30 = v292;
              v26 = v94 & (unsigned int)(v291 + v26);
              a6 = v79 + 16LL * (unsigned int)v26;
              v95 = *(_QWORD *)a6;
              if ( v72 == *(_QWORD *)a6 )
                goto LABEL_356;
              if ( v95 == -4096 )
                goto LABEL_477;
              ++v291;
              v292 = v30;
              v30 = v79 + 16LL * (unsigned int)v26;
            }
          }
        }
LABEL_175:
        *(_DWORD *)(v74 + 72) = v27;
LABEL_70:
        *(_QWORD *)v30 = v72;
        *(_QWORD *)(v30 + 8) = 0;
        v389 = 0;
LABEL_43:
        v63 = *(_QWORD *)(v382 + 128);
        v64 = v63;
        if ( !v63 )
        {
          v133 = *(_QWORD *)(v382 + 104);
          v30 = *(_QWORD *)(v133 + 96);
          v134 = v30 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v30 & 1) == 0 )
          {
            v135 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              v30 &= 2u;
              if ( !(_DWORD)v30 )
                goto LABEL_45;
              v134 = sub_6E2500(v135, *(_QWORD *)(v382 + 104), v30, v27, v26, a6) & 0xFFFFFFFFFFFFFFFELL;
              v30 = v134 | 1;
              *(_QWORD *)(v133 + 96) = v134 | 1;
            }
          }
          if ( v134 )
          {
            if ( (v134 & 4) != 0 )
            {
              v30 &= 0xFFFFFFFFFFFFFFF8LL;
              if ( v30 )
              {
                v136 = *(_QWORD *)v30;
                v137 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
                if ( *(_DWORD *)(v30 + 8) != v137 )
                {
                  *(_DWORD *)(v30 + 8) = v137;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v136 + 152LL))(v136, v133);
                }
              }
            }
          }
          v64 = *(_QWORD *)(v382 + 128);
          if ( !v64 )
            goto LABEL_45;
        }
        v63 = *(_QWORD *)(v64 + 88);
LABEL_45:
        v65 = *(_QWORD *)(v378 + 72);
        v66 = *(_DWORD *)(v65 + 80);
        v67 = *(__int64 **)(v65 + 64);
        if ( !v66 )
          goto LABEL_176;
        v68 = v66 - 1;
        v381 = ((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4);
        v27 = (v66 - 1) & v381;
        v30 = (__int64)&v67[2 * v27];
        v69 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == v63 )
        {
LABEL_47:
          v70 = *(_QWORD *)(v30 + 8);
          continue;
        }
        v112 = 1;
        v26 = 0;
        if ( v69 != -4096 )
        {
          while ( 1 )
          {
            if ( v69 == -8192 && !v26 )
              v26 = v30;
            a6 = (unsigned int)(v112 + 1);
            v27 = v68 & (v112 + (_DWORD)v27);
            v30 = (__int64)&v67[2 * (unsigned int)v27];
            v69 = *(_QWORD *)v30;
            if ( v63 == *(_QWORD *)v30 )
              goto LABEL_47;
            if ( v69 == -4096 )
              break;
            ++v112;
          }
          if ( v26 )
            v30 = v26;
        }
        v27 = (unsigned int)(*(_DWORD *)(v65 + 72) + 1);
        if ( 4 * (int)v27 < 3 * v66 )
        {
          if ( v66 - *(_DWORD *)(v65 + 76) - (unsigned int)v27 > v66 >> 3 )
          {
LABEL_109:
            v113 = *(_QWORD *)v30;
            goto LABEL_110;
          }
          v114 = ((v68 | ((unsigned __int64)v68 >> 1)) >> 2) | v68 | ((unsigned __int64)v68 >> 1);
          v115 = (((v114 >> 4) | v114) >> 8) | (v114 >> 4) | v114;
          v116 = ((v115 >> 16) | v115) + 1;
          if ( (unsigned int)v116 < 0x40 )
            LODWORD(v116) = 64;
          *(_DWORD *)(v65 + 80) = v116;
          v117 = sub_22300B0(16LL * (unsigned int)v116, 8, v30, v27, v26, a6);
          *(_QWORD *)(v65 + 64) = v117;
          if ( v67 )
          {
            v118 = *(unsigned int *)(v65 + 80);
            v119 = (_QWORD *)v117;
            *(_QWORD *)(v65 + 72) = 0;
            v120 = 16LL * v66;
            v121 = v118;
            v122 = (_QWORD *)(v117 + 16 * v118);
            if ( (_QWORD *)v117 != v122 )
            {
              do
              {
                *v119 = -4096;
                v119 += 2;
              }
              while ( v122 != v119 );
            }
            v123 = v67;
            v124 = v121 - 1;
            do
            {
              v125 = *v123;
              if ( *v123 != -8192 && v125 != -4096 )
              {
                if ( !v121 )
                {
                  *(_QWORD *)&dword_0 = *v123;
                  BUG();
                }
                v126 = v124 & (((unsigned int)v125 >> 9) ^ ((unsigned int)v125 >> 4));
                v127 = (_QWORD *)(v117 + 16LL * v126);
                v128 = *v127;
                if ( v125 != *v127 && v128 != -4096 )
                {
                  v396 = 1;
                  v273 = nullptr;
                  while ( 1 )
                  {
                    if ( v128 == -8192 && !v273 )
                      v273 = v127;
                    v126 = v124 & (v396 + v126);
                    v127 = (_QWORD *)(v117 + 16LL * v126);
                    v128 = *v127;
                    if ( v125 == *v127 )
                      break;
                    if ( v128 == -4096 )
                    {
                      if ( v273 )
                        v127 = v273;
                      break;
                    }
                    ++v396;
                  }
                }
                v129 = v123[1];
                *v127 = v125;
                v127[1] = v129;
                ++*(_DWORD *)(v65 + 72);
              }
              v123 += 2;
            }
            while ( (__int64 *)((char *)v67 + v120) != v123 );
            operator delete(v67, v120, 8);
            v117 = *(_QWORD *)(v65 + 64);
            LODWORD(v120) = *(_DWORD *)(v65 + 80);
            v27 = (unsigned int)(*(_DWORD *)(v65 + 72) + 1);
          }
          else
          {
            *(_QWORD *)(v65 + 72) = 0;
            v120 = *(unsigned int *)(v65 + 80);
            v190 = (_QWORD *)(v117 + 16 * v120);
            if ( (_QWORD *)v117 != v190 )
            {
              v191 = (_QWORD *)v117;
              do
              {
                *v191 = -4096;
                v191 += 2;
              }
              while ( v190 != v191 );
            }
            v27 = 1;
          }
          if ( !(_DWORD)v120 )
            goto LABEL_764;
          v130 = v120 - 1;
          v26 = v130 & v381;
          v30 = v117 + 16 * v26;
          v113 = *(_QWORD *)v30;
          if ( v63 == *(_QWORD *)v30 )
            goto LABEL_110;
          v131 = 1;
          v132 = 0;
          if ( v113 != -4096 )
          {
            while ( 1 )
            {
              if ( v132 || v113 != -8192 )
                v30 = v132;
              v26 = v130 & (unsigned int)(v131 + v26);
              a6 = v117 + 16LL * (unsigned int)v26;
              v113 = *(_QWORD *)a6;
              if ( v63 == *(_QWORD *)a6 )
                goto LABEL_195;
              if ( v113 == -4096 )
                goto LABEL_484;
              ++v131;
              v132 = v30;
              v30 = v117 + 16LL * (unsigned int)v26;
            }
          }
        }
        else
        {
LABEL_176:
          v159 = (((((((2 * v66 - 1) | ((unsigned __int64)(2 * v66 - 1) >> 1)) >> 2)
                   | (2 * v66 - 1)
                   | ((unsigned __int64)(2 * v66 - 1) >> 1)) >> 4)
                 | (((2 * v66 - 1) | ((unsigned __int64)(2 * v66 - 1) >> 1)) >> 2)
                 | (2 * v66 - 1)
                 | ((unsigned __int64)(2 * v66 - 1) >> 1)) >> 8)
               | (((((2 * v66 - 1) | ((unsigned __int64)(2 * v66 - 1) >> 1)) >> 2)
                 | (2 * v66 - 1)
                 | ((unsigned __int64)(2 * v66 - 1) >> 1)) >> 4)
               | (((2 * v66 - 1) | ((unsigned __int64)(2 * v66 - 1) >> 1)) >> 2)
               | (2 * v66 - 1)
               | ((unsigned __int64)(2 * v66 - 1) >> 1);
          v160 = ((v159 >> 16) | v159) + 1;
          if ( (unsigned int)v160 < 0x40 )
            LODWORD(v160) = 64;
          *(_DWORD *)(v65 + 80) = v160;
          v161 = sub_22300B0(16LL * (unsigned int)v160, 8, v30, v27, v26, a6);
          *(_QWORD *)(v65 + 64) = v161;
          if ( v67 )
          {
            v162 = *(unsigned int *)(v65 + 80);
            v163 = (_QWORD *)v161;
            *(_QWORD *)(v65 + 72) = 0;
            v164 = 16LL * v66;
            v165 = v162;
            v166 = (__int64 *)((char *)v67 + v164);
            v167 = (_QWORD *)(v161 + 16 * v162);
            if ( (_QWORD *)v161 != v167 )
            {
              do
              {
                *v163 = -4096;
                v163 += 2;
              }
              while ( v167 != v163 );
            }
            v168 = v67;
            for ( m = v165 - 1; v166 != v168; v168 += 2 )
            {
              v170 = *v168;
              if ( *v168 != -4096 && v170 != -8192 )
              {
                if ( !v165 )
                {
                  *(_QWORD *)&dword_0 = *v168;
                  BUG();
                }
                v171 = m & (((unsigned int)v170 >> 9) ^ ((unsigned int)v170 >> 4));
                v172 = (_QWORD *)(v161 + 16LL * v171);
                v173 = *v172;
                if ( v170 != *v172 && v173 != -4096 )
                {
                  v383 = 1;
                  v272 = nullptr;
                  while ( 1 )
                  {
                    if ( v173 == -8192 && !v272 )
                      v272 = v172;
                    v171 = m & (v383 + v171);
                    v172 = (_QWORD *)(v161 + 16LL * v171);
                    v173 = *v172;
                    if ( v170 == *v172 )
                      break;
                    if ( v173 == -4096 )
                    {
                      if ( v272 )
                        v172 = v272;
                      break;
                    }
                    ++v383;
                  }
                }
                v174 = v168[1];
                *v172 = v170;
                v172[1] = v174;
                ++*(_DWORD *)(v65 + 72);
              }
            }
            operator delete(v67, v164, 8);
            v161 = *(_QWORD *)(v65 + 64);
            LODWORD(v164) = *(_DWORD *)(v65 + 80);
            v27 = (unsigned int)(*(_DWORD *)(v65 + 72) + 1);
          }
          else
          {
            *(_QWORD *)(v65 + 72) = 0;
            v164 = *(unsigned int *)(v65 + 80);
            v178 = (_QWORD *)(v161 + 16 * v164);
            if ( (_QWORD *)v161 != v178 )
            {
              v179 = (_QWORD *)v161;
              do
              {
                *v179 = -4096;
                v179 += 2;
              }
              while ( v178 != v179 );
            }
            v27 = 1;
          }
          if ( !(_DWORD)v164 )
          {
LABEL_764:
            ++*(_DWORD *)(v65 + 72);
            BUG();
          }
          v175 = v164 - 1;
          v26 = v175 & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
          v30 = v161 + 16 * v26;
          v113 = *(_QWORD *)v30;
          if ( v63 == *(_QWORD *)v30 )
            goto LABEL_110;
          v176 = 1;
          v177 = 0;
          if ( v113 != -4096 )
          {
            while ( 1 )
            {
              if ( v177 || v113 != -8192 )
                v30 = v177;
              v26 = v175 & (unsigned int)(v176 + v26);
              a6 = v161 + 16LL * (unsigned int)v26;
              v113 = *(_QWORD *)a6;
              if ( v63 == *(_QWORD *)a6 )
                break;
              if ( v113 == -4096 )
              {
LABEL_484:
                if ( v30 )
                  goto LABEL_109;
                v30 = a6;
                goto LABEL_136;
              }
              ++v176;
              v177 = v30;
              v30 = v161 + 16LL * (unsigned int)v26;
            }
LABEL_195:
            v30 = a6;
LABEL_110:
            *(_DWORD *)(v65 + 72) = v27;
            if ( v113 != -4096 )
              --*(_DWORD *)(v65 + 76);
            goto LABEL_112;
          }
        }
LABEL_136:
        *(_DWORD *)(v65 + 72) = v27;
LABEL_112:
        *(_QWORD *)v30 = v63;
        v70 = 0;
        *(_QWORD *)(v30 + 8) = 0;
      }
      while ( v389 > v70 );
      if ( v376 < (char *)v45 )
      {
        v30 = *v45;
        v111 = *(_QWORD *)v376;
        *(_QWORD *)v376 = *v45;
        *v45 = v111;
LABEL_28:
        v376 += 8;
        v44 = a1->m128i_i64[0];
        continue;
      }
      break;
    }
    result = (__int64 *)sub_A8F220(v376, v386, v393, v378);
    v9 = v376 - (char *)a1;
    if ( v376 - (char *)a1 <= 128 )
      return result;
    v386 = v376;
  }
  while ( v393 );
  v8 = (__int64 *)a1;
LABEL_229:
  v192 = v9 >> 3;
  v193 = ((v9 >> 3) - 2) >> 1;
  sub_A8CE90((__int64)v8, v193, v9 >> 3, v8[v193], v378, a6);
  do
  {
    --v193;
    sub_A8CE90((__int64)v8, v193, v192, v8[v193], v378, v194);
  }
  while ( v193 );
  v195 = v394;
  do
  {
    v196 = *--v195;
    *v195 = *v8;
    result = sub_A8CE90((__int64)v8, 0, v195 - v8, v196, v378, v194);
  }
  while ( (char *)v195 - (char *)v8 > 8 );
  return result;
}
