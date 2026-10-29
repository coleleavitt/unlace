__int64 *__fastcall sub_A6B4E0(__m128i *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  int v82; // r8d
  __int64 *v83; // r9
  _QWORD *v84; // rdx
  __int64 *v85; // rdi
  int k; // r11d
  __int64 v87; // r13
  unsigned int v88; // ecx
  _QWORD *v89; // rdx
  __int64 v90; // r10
  __int64 v91; // rcx
  int v92; // esi
  int v93; // edi
  __int64 v94; // rsi
  __int64 v95; // rbp
  unsigned __int64 v96; // rax
  _QWORD *v97; // rdi
  __int64 v98; // rdi
  int v99; // eax
  __int64 v100; // r12
  unsigned __int64 v101; // rax
  _QWORD *v102; // rdi
  __int64 v103; // rdi
  int v104; // eax
  __int64 v105; // rbp
  unsigned __int64 v106; // rax
  _QWORD *v107; // rdi
  __int64 v108; // rdi
  int v109; // eax
  __int64 v110; // rax
  int v111; // esi
  __int64 v112; // rdi
  unsigned __int64 v113; // rdi
  unsigned __int64 v114; // rdi
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rdx
  _QWORD *v118; // rcx
  __int64 v119; // rsi
  int v120; // r8d
  _QWORD *v121; // rdx
  __int64 *v122; // rdi
  int v123; // r10d
  __int64 v124; // r14
  unsigned int v125; // ecx
  _QWORD *v126; // rdx
  __int64 v127; // r9
  __int64 v128; // rcx
  __int64 v129; // rsi
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
  int v164; // r8d
  __int64 *v165; // r9
  _QWORD *v166; // rdx
  __int64 *v167; // rdi
  int m; // r11d
  __int64 v169; // r14
  unsigned int v170; // ecx
  _QWORD *v171; // rdx
  __int64 v172; // r10
  __int64 v173; // rcx
  __int64 v174; // rsi
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
  int v202; // r8d
  __int64 *v203; // r10
  _QWORD *v204; // rcx
  __int64 *v205; // rdi
  int j; // r11d
  __int64 v207; // r14
  unsigned int v208; // ecx
  _QWORD *v209; // rdx
  __int64 v210; // r9
  __int64 v211; // rcx
  int v212; // edi
  int v213; // edi
  unsigned __int64 v214; // rdi
  __int64 v215; // rdi
  __int64 v216; // rax
  __int64 v217; // rcx
  _QWORD *v218; // rdx
  int v219; // r8d
  __int64 *v220; // r10
  _QWORD *v221; // rcx
  __int64 *v222; // rdi
  int i; // r11d
  __int64 v224; // r13
  unsigned int v225; // ecx
  _QWORD *v226; // rdx
  __int64 v227; // r9
  __int64 v228; // rcx
  int v229; // edi
  int v230; // edi
  int v231; // r10d
  __int64 v232; // r11
  unsigned int v233; // edi
  __int64 v234; // rax
  __int64 v235; // rcx
  _QWORD *v236; // rdx
  int v237; // r8d
  __int64 *v238; // r12
  _QWORD *v239; // rcx
  __int64 *v240; // rcx
  int v241; // r10d
  __int64 v242; // r11
  unsigned int v243; // edi
  _QWORD *v244; // rdx
  __int64 v245; // r9
  __int64 v246; // rdi
  int v247; // edi
  int v248; // edi
  int v249; // r10d
  __int64 v250; // r11
  unsigned int v251; // edi
  __int64 v252; // rax
  __int64 v253; // rcx
  _QWORD *v254; // rdx
  int v255; // r8d
  __int64 *v256; // r12
  _QWORD *v257; // rcx
  __int64 *v258; // rcx
  int v259; // r10d
  __int64 v260; // r11
  unsigned int v261; // edi
  _QWORD *v262; // rdx
  __int64 v263; // r9
  __int64 v264; // rdi
  int v265; // edi
  int v266; // edi
  int v267; // r10d
  __int64 v268; // r11
  _QWORD *v269; // r12
  _QWORD *v270; // r13
  _QWORD *v271; // r13
  _QWORD *v272; // r12
  __int64 v273; // rbp
  __int64 v274; // rbx
  unsigned int v275; // esi
  __int64 v276; // rdi
  __int64 v277; // r13
  __int64 v278; // rax
  __int64 v279; // rbx
  unsigned int v280; // esi
  __int64 v281; // rdi
  __int64 v282; // rax
  __int64 v283; // rcx
  _QWORD *v284; // rcx
  _QWORD *v285; // rdx
  __int64 v286; // rcx
  _QWORD *v287; // rcx
  _QWORD *v288; // rdx
  int v289; // r11d
  __int64 v290; // r10
  __int64 v291; // rcx
  _QWORD *v292; // rcx
  _QWORD *v293; // rdx
  __int64 v294; // rcx
  _QWORD *v295; // rcx
  _QWORD *v296; // rdx
  __int64 v297; // rbp
  __int64 v298; // rbx
  __int64 v299; // rax
  __int64 v300; // rbx
  unsigned int v301; // esi
  __int64 v302; // rdi
  __int64 v303; // rbx
  bool v304; // cc
  __int64 v305; // rax
  __int64 v306; // rbp
  __int64 v307; // rbx
  __int64 v308; // rax
  __int64 v309; // rbx
  unsigned int v310; // esi
  __int64 v311; // rdi
  __int64 v312; // r12
  __int64 v313; // rax
  __int64 v314; // rbx
  unsigned int v315; // esi
  __int64 v316; // rdi
  __int64 v317; // rax
  _QWORD *v318; // r12
  _QWORD *v319; // r12
  int v320; // r11d
  __int64 *v321; // r15
  __int64 v322; // rcx
  int v323; // r11d
  __int64 *v324; // r14
  __int64 v325; // rcx
  int v326; // r10d
  __int64 v327; // r11
  int v328; // edi
  int v329; // edi
  unsigned int v330; // esi
  int v331; // r11d
  int v332; // edi
  int v333; // edi
  unsigned int v334; // esi
  int v335; // r11d
  int v336; // esi
  int v337; // esi
  __int64 v338; // rdi
  unsigned int v339; // r13d
  int v340; // r10d
  unsigned int v341; // r10d
  int v342; // esi
  int v343; // esi
  __int64 v344; // rdi
  unsigned int v345; // r13d
  int v346; // r10d
  unsigned int v347; // r10d
  int v348; // r14d
  __int64 v349; // r11
  int v350; // ecx
  bool v351; // zf
  int v352; // r14d
  __int64 v353; // r11
  int v354; // ecx
  int v355; // r14d
  __int64 v356; // r11
  int v357; // ecx
  int v358; // r14d
  __int64 v359; // r11
  int v360; // ecx
  int v361; // r13d
  __int64 v362; // r11
  int v363; // ecx
  int v364; // r11d
  __int64 v365; // r14
  int v366; // ecx
  int v367; // r13d
  __int64 v368; // r11
  int v369; // ecx
  unsigned int v370; // r11d
  __int64 *v371; // r10
  unsigned int v372; // r11d
  __int64 *v373; // r10
  char *v374; // [rsp+0h] [rbp-A8h]
  __m128d v375; // [rsp+0h] [rbp-A8h]
  __int64 v376; // [rsp+10h] [rbp-98h]
  __int64 v378; // [rsp+20h] [rbp-88h]
  unsigned int v379; // [rsp+20h] [rbp-88h]
  __int64 v380; // [rsp+20h] [rbp-88h]
  int v381; // [rsp+20h] [rbp-88h]
  int v382; // [rsp+20h] [rbp-88h]
  _QWORD *v383; // [rsp+20h] [rbp-88h]
  char *v384; // [rsp+28h] [rbp-80h]
  __int64 v385; // [rsp+30h] [rbp-78h]
  unsigned int v386; // [rsp+30h] [rbp-78h]
  __int64 v387; // [rsp+30h] [rbp-78h]
  int v388; // [rsp+30h] [rbp-78h]
  int v389; // [rsp+30h] [rbp-78h]
  _QWORD *v390; // [rsp+30h] [rbp-78h]
  __int64 v391; // [rsp+38h] [rbp-70h]
  __int64 *v392; // [rsp+40h] [rbp-68h]
  __int64 *v393; // [rsp+48h] [rbp-60h]
  int v394; // [rsp+50h] [rbp-58h]
  int v395; // [rsp+50h] [rbp-58h]
  int v396; // [rsp+50h] [rbp-58h]
  int v397; // [rsp+50h] [rbp-58h]
  __int64 v398; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v399[8]; // [rsp+68h] [rbp-40h] BYREF

  result = (__int64 *)(a2 - (char *)a1);
  v384 = a2;
  v391 = a3;
  v376 = a4;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  v8 = (__int64 *)a1;
  v9 = a2 - (char *)a1;
  if ( !a3 )
  {
    v392 = (__int64 *)a2;
    goto LABEL_229;
  }
  v393 = &a1->m128i_i64[1];
  do
  {
    v10 = v9 >> 4;
    --v391;
    v11 = &a1->m128i_i64[v10];
    v12 = a1->m128i_i64[1];
    v13 = *v11;
    v14 = *(_QWORD *)(*v11 + 128);
    if ( v14
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104), v10, a4, a5, a6),
          (v14 = *(_QWORD *)(v13 + 128)) != 0) )
    {
      v14 = *(_QWORD *)(v14 + 88);
    }
    v15 = *(_QWORD *)(v376 + 72);
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
    v320 = 1;
    v321 = nullptr;
    if ( v10 != -4096 )
    {
      while ( 1 )
      {
        if ( v10 == -8192 && !v321 )
          v321 = v20;
        v19 = (unsigned int)a6 & (v320 + (_DWORD)v19);
        v20 = (__int64 *)(v18 + 16LL * (unsigned int)v19);
        v10 = *v20;
        if ( v14 == *v20 )
          goto LABEL_8;
        if ( v10 == -4096 )
          break;
        ++v320;
      }
      if ( v321 )
        v20 = v321;
    }
    v10 = (unsigned int)(*(_DWORD *)(v15 + 72) + 1);
    a4 = 3 * v16;
    a5 = (unsigned int)(4 * v10);
    if ( (unsigned int)a5 < (unsigned int)a4 )
    {
      v322 = v16 - *(_DWORD *)(v15 + 76) - (unsigned int)v10;
      v18 = v16 >> 3;
      if ( (unsigned int)v322 > (unsigned int)v18 )
        goto LABEL_450;
      sub_6E50A0(v17, v16, v10, v322, v18, a6);
      v336 = *(_DWORD *)(v15 + 80);
      if ( !v336 )
      {
LABEL_766:
        ++*(_DWORD *)(v15 + 72);
        BUG();
      }
      v337 = v336 - 1;
      v338 = *(_QWORD *)(v15 + 64);
      v339 = v337 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v10 = (unsigned int)(*(_DWORD *)(v15 + 72) + 1);
      v20 = (__int64 *)(v338 + 16LL * v339);
      v19 = *v20;
      if ( v14 == *v20 )
        goto LABEL_451;
      v340 = 1;
      v18 = 0;
      if ( v19 != -4096 )
      {
        while ( 1 )
        {
          if ( v19 != -8192 || v18 )
            v20 = (__int64 *)v18;
          v18 = (unsigned int)(v340 + 1);
          v341 = v337 & (v339 + v340);
          v339 = v341;
          a6 = v338 + 16LL * v341;
          v19 = *(_QWORD *)a6;
          if ( v14 == *(_QWORD *)a6 )
          {
            v20 = (__int64 *)(v338 + 16LL * v341);
            goto LABEL_451;
          }
          if ( v19 == -4096 )
            break;
          v340 = v18;
          v18 = (__int64)v20;
          v20 = (__int64 *)a6;
        }
        if ( v20 )
          goto LABEL_450;
        v20 = (__int64 *)(v338 + 16LL * v341);
      }
    }
    else
    {
LABEL_486:
      sub_6E50A0(v17, 2 * v16, v10, a4, a5, a6);
      v328 = *(_DWORD *)(v15 + 80);
      if ( !v328 )
        goto LABEL_766;
      v329 = v328 - 1;
      v18 = *(_QWORD *)(v15 + 64);
      v330 = v329 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v10 = (unsigned int)(*(_DWORD *)(v15 + 72) + 1);
      v20 = (__int64 *)(v18 + 16LL * v330);
      v19 = *v20;
      if ( v14 == *v20 )
        goto LABEL_451;
      v331 = 1;
      a6 = 0;
      if ( v19 != -4096 )
      {
        while ( 1 )
        {
          if ( v19 != -8192 || a6 )
            v20 = (__int64 *)a6;
          a6 = (unsigned int)(v331 + 1);
          v370 = v330 + v331;
          v330 = v329 & v370;
          v371 = (__int64 *)(v18 + 16LL * (v329 & v370));
          v19 = *v371;
          if ( v14 == *v371 )
          {
            v20 = (__int64 *)(v18 + 16LL * (v329 & v370));
            goto LABEL_451;
          }
          if ( v19 == -4096 )
            break;
          v331 = a6;
          a6 = (__int64)v20;
          v20 = v371;
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
        v20 = (__int64 *)(v18 + 16LL * (v329 & v370));
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
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v10, v19, v18, a6),
          (v22 = *(_QWORD *)(v12 + 128)) != 0) )
    {
      v22 = *(_QWORD *)(v22 + 88);
    }
    v23 = *(_QWORD *)(v376 + 72);
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
    v323 = 1;
    v324 = nullptr;
    if ( v29 != -4096 )
    {
      while ( 1 )
      {
        if ( v29 == -8192 && !v324 )
          v324 = v28;
        v27 = (unsigned int)a6 & (v323 + (_DWORD)v27);
        v28 = (__int64 *)(v26 + 16LL * (unsigned int)v27);
        v29 = *v28;
        if ( v22 == *v28 )
          goto LABEL_13;
        if ( v29 == -4096 )
          break;
        ++v323;
      }
      if ( v324 )
        v28 = v324;
    }
    v10 = (unsigned int)(*(_DWORD *)(v23 + 72) + 1);
    v19 = 3 * v24;
    v18 = (unsigned int)(4 * v10);
    if ( (unsigned int)v18 < (unsigned int)v19 )
    {
      v325 = v24 - *(_DWORD *)(v23 + 76) - (unsigned int)v10;
      v26 = v24 >> 3;
      if ( (unsigned int)v325 > (unsigned int)v26 )
        goto LABEL_457;
      sub_6E50A0(v25, v24, v10, v325, v26, a6);
      v342 = *(_DWORD *)(v23 + 80);
      if ( !v342 )
      {
LABEL_759:
        ++*(_DWORD *)(v23 + 72);
        BUG();
      }
      v343 = v342 - 1;
      v344 = *(_QWORD *)(v23 + 64);
      v345 = v343 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      LODWORD(v10) = *(_DWORD *)(v23 + 72) + 1;
      v28 = (__int64 *)(v344 + 16LL * v345);
      v27 = *v28;
      if ( v22 == *v28 )
        goto LABEL_458;
      v346 = 1;
      v26 = 0;
      if ( v27 != -4096 )
      {
        while ( 1 )
        {
          if ( v27 != -8192 || v26 )
            v28 = (__int64 *)v26;
          v26 = (unsigned int)(v346 + 1);
          v347 = v343 & (v345 + v346);
          v345 = v347;
          a6 = v344 + 16LL * v347;
          v27 = *(_QWORD *)a6;
          if ( v22 == *(_QWORD *)a6 )
          {
            v28 = (__int64 *)(v344 + 16LL * v347);
            goto LABEL_458;
          }
          if ( v27 == -4096 )
            break;
          v346 = v26;
          v26 = (__int64)v28;
          v28 = (__int64 *)a6;
        }
        if ( v28 )
          goto LABEL_457;
        v28 = (__int64 *)(v344 + 16LL * v347);
      }
    }
    else
    {
LABEL_490:
      sub_6E50A0(v25, 2 * v24, v10, v19, v18, a6);
      v332 = *(_DWORD *)(v23 + 80);
      if ( !v332 )
        goto LABEL_759;
      v333 = v332 - 1;
      v26 = *(_QWORD *)(v23 + 64);
      v334 = v333 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      LODWORD(v10) = *(_DWORD *)(v23 + 72) + 1;
      v28 = (__int64 *)(v26 + 16LL * v334);
      v27 = *v28;
      if ( v22 == *v28 )
        goto LABEL_458;
      v335 = 1;
      a6 = 0;
      if ( v27 != -4096 )
      {
        while ( 1 )
        {
          if ( v27 != -8192 || a6 )
            v28 = (__int64 *)a6;
          a6 = (unsigned int)(v335 + 1);
          v372 = v334 + v335;
          v334 = v333 & v372;
          v373 = (__int64 *)(v26 + 16LL * (v333 & v372));
          v27 = *v373;
          if ( v22 == *v373 )
          {
            v28 = (__int64 *)(v26 + 16LL * (v333 & v372));
            goto LABEL_458;
          }
          if ( v27 == -4096 )
            break;
          v335 = a6;
          a6 = (__int64)v28;
          v28 = v373;
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
        v28 = (__int64 *)(v26 + 16LL * (v333 & v372));
      }
    }
    *(_DWORD *)(v23 + 72) = v10;
LABEL_460:
    *v28 = v22;
    v30 = 0;
    v28[1] = 0;
LABEL_14:
    v31 = *((_QWORD *)v384 - 1);
    v32 = *(_QWORD *)(v31 + 128);
    if ( v21 <= v30 )
    {
      v398 = *((_QWORD *)v384 - 1);
      v273 = a1->m128i_i64[1];
      if ( v32
        || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v30, v27, v26, a6),
            (v32 = *(_QWORD *)(v31 + 128)) != 0) )
      {
        v32 = *(_QWORD *)(v32 + 88);
      }
      v398 = v32;
      v274 = *(_QWORD *)(v376 + 72);
      v275 = *(_DWORD *)(v274 + 80);
      if ( v275 )
      {
        a6 = v275 - 1;
        v26 = *(_QWORD *)(v274 + 64);
        v27 = (unsigned int)a6 & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
        v30 = v26 + 16 * v27;
        v276 = *(_QWORD *)v30;
        if ( v32 == *(_QWORD *)v30 )
        {
LABEL_336:
          v277 = *(_QWORD *)(v30 + 8);
          goto LABEL_337;
        }
        v355 = 1;
        v356 = 0;
        if ( v276 != -4096 )
        {
          while ( 1 )
          {
            if ( !v356 && v276 == -8192 )
              v356 = v30;
            v27 = (unsigned int)a6 & ((_DWORD)v27 + v355);
            v30 = v26 + 16 * v27;
            v276 = *(_QWORD *)v30;
            if ( v32 == *(_QWORD *)v30 )
              goto LABEL_336;
            if ( v276 == -4096 )
            {
              if ( v356 )
                v30 = v356;
              break;
            }
            ++v355;
          }
        }
        v357 = *(_DWORD *)(v274 + 72);
        v399[0] = v30;
        v27 = (unsigned int)(v357 + 1);
        v26 = (unsigned int)(4 * v27);
        if ( (unsigned int)v26 < 3 * v275 )
        {
          v26 = v275 >> 3;
          if ( v275 - *(_DWORD *)(v274 + 76) - (unsigned int)v27 > (unsigned int)v26 )
          {
LABEL_529:
            v351 = *(_QWORD *)v30 == -4096;
            *(_DWORD *)(v274 + 72) = v27;
            if ( !v351 )
              --*(_DWORD *)(v274 + 76);
            *(_QWORD *)v30 = v32;
            v277 = 0;
            *(_QWORD *)(v30 + 8) = 0;
LABEL_337:
            v398 = v273;
            v278 = *(_QWORD *)(v273 + 128);
            if ( v278
              || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v273 + 104) + 96LL), *(_QWORD *)(v273 + 104), v30, v27, v26, a6),
                  (v278 = *(_QWORD *)(v273 + 128)) != 0) )
            {
              v278 = *(_QWORD *)(v278 + 88);
            }
            v398 = v278;
            v279 = *(_QWORD *)(v376 + 72);
            v280 = *(_DWORD *)(v279 + 80);
            if ( v280 )
            {
              a6 = v280 - 1;
              v26 = *(_QWORD *)(v279 + 64);
              v27 = (unsigned int)a6 & (((unsigned int)v278 >> 9) ^ ((unsigned int)v278 >> 4));
              v30 = v26 + 16 * v27;
              v281 = *(_QWORD *)v30;
              if ( *(_QWORD *)v30 == v278 )
              {
LABEL_341:
                v282 = *(_QWORD *)(v30 + 8);
                goto LABEL_342;
              }
              v348 = 1;
              v349 = 0;
              if ( v281 != -4096 )
              {
                while ( 1 )
                {
                  if ( v281 == -8192 && !v349 )
                    v349 = v30;
                  v27 = (unsigned int)a6 & ((_DWORD)v27 + v348);
                  v30 = v26 + 16 * v27;
                  v281 = *(_QWORD *)v30;
                  if ( v278 == *(_QWORD *)v30 )
                    goto LABEL_341;
                  if ( v281 == -4096 )
                  {
                    if ( v349 )
                      v30 = v349;
                    break;
                  }
                  ++v348;
                }
              }
              v350 = *(_DWORD *)(v279 + 72);
              v399[0] = v30;
              v27 = (unsigned int)(v350 + 1);
              v26 = (unsigned int)(4 * v27);
              if ( (unsigned int)v26 < 3 * v280 )
              {
                v26 = v280 >> 3;
                if ( v280 - *(_DWORD *)(v279 + 76) - (unsigned int)v27 > (unsigned int)v26 )
                {
LABEL_511:
                  v351 = *(_QWORD *)v30 == -4096;
                  *(_DWORD *)(v279 + 72) = v27;
                  if ( !v351 )
                    --*(_DWORD *)(v279 + 76);
                  *(_QWORD *)v30 = v278;
                  v282 = 0;
                  *(_QWORD *)(v30 + 8) = 0;
LABEL_342:
                  if ( v277 > v282 )
                  {
                    v44 = a1->m128i_i64[1];
                    v375 = (__m128d)_mm_loadu_si128(a1);
                    *(__m128d *)a1 = _mm_shuffle_pd(v375, v375, 1);
                    goto LABEL_27;
                  }
                  v297 = *v11;
                  v298 = *((_QWORD *)v384 - 1);
                  v398 = v298;
                  v299 = *(_QWORD *)(v298 + 128);
                  if ( v299
                    || (sub_6E4DB0(
                          (__int64 *)(*(_QWORD *)(v298 + 104) + 96LL),
                          *(_QWORD *)(v298 + 104),
                          v30,
                          v27,
                          v26,
                          a6),
                        (v299 = *(_QWORD *)(v298 + 128)) != 0) )
                  {
                    v299 = *(_QWORD *)(v299 + 88);
                  }
                  v398 = v299;
                  v300 = *(_QWORD *)(v376 + 72);
                  v301 = *(_DWORD *)(v300 + 80);
                  if ( v301 )
                  {
                    a6 = v301 - 1;
                    v26 = *(_QWORD *)(v300 + 64);
                    v27 = (unsigned int)a6 & (((unsigned int)v299 >> 9) ^ ((unsigned int)v299 >> 4));
                    v30 = v26 + 16 * v27;
                    v302 = *(_QWORD *)v30;
                    if ( v299 == *(_QWORD *)v30 )
                    {
LABEL_373:
                      v303 = *(_QWORD *)(v30 + 8);
LABEL_374:
                      v304 = sub_A68C30((__int64 *)(v376 + 72), v297, v30, v27, v26, a6) < v303;
                      v305 = a1->m128i_i64[0];
                      if ( v304 )
                      {
                        v30 = *((_QWORD *)v384 - 1);
                        a1->m128i_i64[0] = v30;
                        *((_QWORD *)v384 - 1) = v305;
                      }
                      else
                      {
                        v30 = *v11;
                        a1->m128i_i64[0] = *v11;
                        *v11 = v305;
                      }
                      v44 = a1->m128i_i64[0];
                      goto LABEL_27;
                    }
                    v364 = 1;
                    v365 = 0;
                    if ( v302 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v365 && v302 == -8192 )
                          v365 = v30;
                        v27 = (unsigned int)a6 & ((_DWORD)v27 + v364);
                        v30 = v26 + 16 * v27;
                        v302 = *(_QWORD *)v30;
                        if ( v299 == *(_QWORD *)v30 )
                          goto LABEL_373;
                        if ( v302 == -4096 )
                        {
                          if ( v365 )
                            v30 = v365;
                          break;
                        }
                        ++v364;
                      }
                    }
                    v366 = *(_DWORD *)(v300 + 72);
                    v399[0] = v30;
                    v27 = (unsigned int)(v366 + 1);
                    v26 = (unsigned int)(4 * v27);
                    if ( (unsigned int)v26 < 3 * v301 )
                    {
                      v26 = v301 >> 3;
                      if ( v301 - *(_DWORD *)(v300 + 76) - (unsigned int)v27 > (unsigned int)v26 )
                        goto LABEL_560;
                      goto LABEL_559;
                    }
                  }
                  else
                  {
                    v399[0] = 0;
                  }
                  v301 *= 2;
LABEL_559:
                  sub_6E50A0(v300 + 64, v301, v30, v27, v26, a6);
                  sub_A49FE0((__int64 *)(v300 + 64), &v398, v399);
                  v299 = v398;
                  v30 = v399[0];
                  v27 = (unsigned int)(*(_DWORD *)(v300 + 72) + 1);
LABEL_560:
                  v351 = *(_QWORD *)v30 == -4096;
                  *(_DWORD *)(v300 + 72) = v27;
                  if ( !v351 )
                    --*(_DWORD *)(v300 + 76);
                  *(_QWORD *)v30 = v299;
                  v303 = 0;
                  *(_QWORD *)(v30 + 8) = 0;
                  goto LABEL_374;
                }
LABEL_516:
                sub_6E50A0(v279 + 64, v280, v30, v27, v26, a6);
                sub_A49FE0((__int64 *)(v279 + 64), &v398, v399);
                v278 = v398;
                v30 = v399[0];
                v27 = (unsigned int)(*(_DWORD *)(v279 + 72) + 1);
                goto LABEL_511;
              }
            }
            else
            {
              v399[0] = 0;
            }
            v280 *= 2;
            goto LABEL_516;
          }
LABEL_534:
          sub_6E50A0(v274 + 64, v275, v30, v27, v26, a6);
          sub_A49FE0((__int64 *)(v274 + 64), &v398, v399);
          v32 = v398;
          v30 = v399[0];
          v27 = (unsigned int)(*(_DWORD *)(v274 + 72) + 1);
          goto LABEL_529;
        }
      }
      else
      {
        v399[0] = 0;
      }
      v275 *= 2;
      goto LABEL_534;
    }
    v33 = *v11;
    v398 = *((_QWORD *)v384 - 1);
    if ( v32
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v31 + 104) + 96LL), *(_QWORD *)(v31 + 104), v30, v27, v26, a6),
          (v32 = *(_QWORD *)(v31 + 128)) != 0) )
    {
      v32 = *(_QWORD *)(v32 + 88);
    }
    v398 = v32;
    v34 = *(_QWORD *)(v376 + 72);
    v35 = *(_DWORD *)(v34 + 80);
    if ( !v35 )
    {
      v399[0] = 0;
LABEL_542:
      v35 *= 2;
LABEL_543:
      sub_6E50A0(v34 + 64, v35, v30, v27, v26, a6);
      sub_A49FE0((__int64 *)(v34 + 64), &v398, v399);
      v32 = v398;
      v30 = v399[0];
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
    v358 = 1;
    v359 = 0;
    if ( v36 != -4096 )
    {
      while ( 1 )
      {
        if ( v36 == -8192 && !v359 )
          v359 = v30;
        v27 = (unsigned int)a6 & ((_DWORD)v27 + v358);
        v30 = v26 + 16 * v27;
        v36 = *(_QWORD *)v30;
        if ( v32 == *(_QWORD *)v30 )
          break;
        if ( v36 == -4096 )
        {
          if ( v359 )
            v30 = v359;
          goto LABEL_536;
        }
        ++v358;
      }
LABEL_19:
      v37 = *(_QWORD *)(v30 + 8);
      goto LABEL_20;
    }
LABEL_536:
    v360 = *(_DWORD *)(v34 + 72);
    v399[0] = v30;
    v27 = (unsigned int)(v360 + 1);
    v26 = (unsigned int)(4 * v27);
    if ( (unsigned int)v26 >= 3 * v35 )
      goto LABEL_542;
    v26 = v35 >> 3;
    if ( v35 - *(_DWORD *)(v34 + 76) - (unsigned int)v27 <= (unsigned int)v26 )
      goto LABEL_543;
LABEL_538:
    v351 = *(_QWORD *)v30 == -4096;
    *(_DWORD *)(v34 + 72) = v27;
    if ( !v351 )
      --*(_DWORD *)(v34 + 76);
    *(_QWORD *)v30 = v32;
    v37 = 0;
    *(_QWORD *)(v30 + 8) = 0;
LABEL_20:
    v398 = v33;
    v38 = *(_QWORD *)(v33 + 128);
    if ( v38
      || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v33 + 104) + 96LL), *(_QWORD *)(v33 + 104), v30, v27, v26, a6),
          (v38 = *(_QWORD *)(v33 + 128)) != 0) )
    {
      v38 = *(_QWORD *)(v38 + 88);
    }
    v398 = v38;
    v39 = *(_QWORD *)(v376 + 72);
    v40 = *(_DWORD *)(v39 + 80);
    if ( !v40 )
    {
      v399[0] = 0;
LABEL_524:
      v40 *= 2;
LABEL_525:
      sub_6E50A0(v39 + 64, v40, v30, v27, v26, a6);
      sub_A49FE0((__int64 *)(v39 + 64), &v398, v399);
      v38 = v398;
      v30 = v399[0];
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
    v352 = 1;
    v353 = 0;
    if ( v41 != -4096 )
    {
      while ( 1 )
      {
        if ( v41 == -8192 && !v353 )
          v353 = v30;
        v27 = (unsigned int)a6 & ((_DWORD)v27 + v352);
        v30 = v26 + 16 * v27;
        v41 = *(_QWORD *)v30;
        if ( v38 == *(_QWORD *)v30 )
          break;
        if ( v41 == -4096 )
        {
          if ( v353 )
            v30 = v353;
          goto LABEL_518;
        }
        ++v352;
      }
LABEL_24:
      v42 = *(_QWORD *)(v30 + 8);
      goto LABEL_25;
    }
LABEL_518:
    v354 = *(_DWORD *)(v39 + 72);
    v399[0] = v30;
    v27 = (unsigned int)(v354 + 1);
    v26 = (unsigned int)(4 * v27);
    if ( (unsigned int)v26 >= 3 * v40 )
      goto LABEL_524;
    v26 = v40 >> 3;
    if ( v40 - *(_DWORD *)(v39 + 76) - (unsigned int)v27 <= (unsigned int)v26 )
      goto LABEL_525;
LABEL_520:
    v351 = *(_QWORD *)v30 == -4096;
    *(_DWORD *)(v39 + 72) = v27;
    if ( !v351 )
      --*(_DWORD *)(v39 + 76);
    *(_QWORD *)v30 = v38;
    v42 = 0;
    *(_QWORD *)(v30 + 8) = 0;
LABEL_25:
    if ( v37 <= v42 )
    {
      v306 = a1->m128i_i64[1];
      v307 = *((_QWORD *)v384 - 1);
      v398 = v307;
      v308 = *(_QWORD *)(v307 + 128);
      if ( v308
        || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v307 + 104) + 96LL), *(_QWORD *)(v307 + 104), v30, v27, v26, a6),
            (v308 = *(_QWORD *)(v307 + 128)) != 0) )
      {
        v308 = *(_QWORD *)(v308 + 88);
      }
      v398 = v308;
      v309 = *(_QWORD *)(v376 + 72);
      v310 = *(_DWORD *)(v309 + 80);
      if ( v310 )
      {
        a6 = v310 - 1;
        v26 = *(_QWORD *)(v309 + 64);
        v27 = (unsigned int)a6 & (((unsigned int)v308 >> 9) ^ ((unsigned int)v308 >> 4));
        v30 = v26 + 16 * v27;
        v311 = *(_QWORD *)v30;
        if ( v308 == *(_QWORD *)v30 )
        {
LABEL_381:
          v312 = *(_QWORD *)(v30 + 8);
          goto LABEL_382;
        }
        v367 = 1;
        v368 = 0;
        if ( v311 != -4096 )
        {
          while ( 1 )
          {
            if ( !v368 && v311 == -8192 )
              v368 = v30;
            v27 = (unsigned int)a6 & (v367 + (_DWORD)v27);
            v30 = v26 + 16LL * (unsigned int)v27;
            v311 = *(_QWORD *)v30;
            if ( v308 == *(_QWORD *)v30 )
              goto LABEL_381;
            if ( v311 == -4096 )
            {
              if ( v368 )
                v30 = v368;
              break;
            }
            ++v367;
          }
        }
        v369 = *(_DWORD *)(v309 + 72);
        v399[0] = v30;
        v27 = (unsigned int)(v369 + 1);
        v26 = (unsigned int)(4 * v27);
        if ( (unsigned int)v26 < 3 * v310 )
        {
          v26 = v310 >> 3;
          if ( v310 - *(_DWORD *)(v309 + 76) - (unsigned int)v27 > (unsigned int)v26 )
            goto LABEL_554;
          goto LABEL_553;
        }
      }
      else
      {
        v399[0] = 0;
      }
      v310 *= 2;
LABEL_553:
      sub_6E50A0(v309 + 64, v310, v30, v27, v26, a6);
      sub_A49FE0((__int64 *)(v309 + 64), &v398, v399);
      v308 = v398;
      v30 = v399[0];
      v27 = (unsigned int)(*(_DWORD *)(v309 + 72) + 1);
LABEL_554:
      v351 = *(_QWORD *)v30 == -4096;
      *(_DWORD *)(v309 + 72) = v27;
      if ( !v351 )
        --*(_DWORD *)(v309 + 76);
      *(_QWORD *)v30 = v308;
      v312 = 0;
      *(_QWORD *)(v30 + 8) = 0;
LABEL_382:
      v398 = v306;
      v313 = *(_QWORD *)(v306 + 128);
      if ( v313
        || (sub_6E4DB0((__int64 *)(*(_QWORD *)(v306 + 104) + 96LL), *(_QWORD *)(v306 + 104), v30, v27, v26, a6),
            (v313 = *(_QWORD *)(v306 + 128)) != 0) )
      {
        v313 = *(_QWORD *)(v313 + 88);
      }
      v398 = v313;
      v314 = *(_QWORD *)(v376 + 72);
      v315 = *(_DWORD *)(v314 + 80);
      if ( v315 )
      {
        a6 = v315 - 1;
        v26 = *(_QWORD *)(v314 + 64);
        v27 = (unsigned int)a6 & (((unsigned int)v313 >> 9) ^ ((unsigned int)v313 >> 4));
        v30 = v26 + 16 * v27;
        v316 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == v313 )
        {
LABEL_386:
          v317 = *(_QWORD *)(v30 + 8);
LABEL_387:
          v30 = a1->m128i_i64[0];
          if ( v312 <= v317 )
          {
            v44 = a1->m128i_i64[1];
            a1->m128i_i64[1] = v30;
            a1->m128i_i64[0] = v44;
          }
          else
          {
            a1->m128i_i64[0] = *((_QWORD *)v384 - 1);
            *((_QWORD *)v384 - 1) = v30;
            v44 = a1->m128i_i64[0];
          }
          goto LABEL_27;
        }
        v361 = 1;
        v362 = 0;
        if ( v316 != -4096 )
        {
          while ( 1 )
          {
            if ( !v362 && v316 == -8192 )
              v362 = v30;
            v27 = (unsigned int)a6 & (v361 + (_DWORD)v27);
            v30 = v26 + 16LL * (unsigned int)v27;
            v316 = *(_QWORD *)v30;
            if ( v313 == *(_QWORD *)v30 )
              goto LABEL_386;
            if ( v316 == -4096 )
            {
              if ( v362 )
                v30 = v362;
              break;
            }
            ++v361;
          }
        }
        v363 = *(_DWORD *)(v314 + 72);
        v399[0] = v30;
        v27 = (unsigned int)(v363 + 1);
        v26 = (unsigned int)(4 * v27);
        if ( (unsigned int)v26 < 3 * v315 )
        {
          v26 = v315 >> 3;
          if ( v315 - *(_DWORD *)(v314 + 76) - (unsigned int)v27 > (unsigned int)v26 )
          {
LABEL_599:
            v351 = *(_QWORD *)v30 == -4096;
            *(_DWORD *)(v314 + 72) = v27;
            if ( !v351 )
              --*(_DWORD *)(v314 + 76);
            *(_QWORD *)v30 = v313;
            v317 = 0;
            *(_QWORD *)(v30 + 8) = 0;
            goto LABEL_387;
          }
LABEL_604:
          sub_6E50A0(v314 + 64, v315, v30, v27, v26, a6);
          sub_A49FE0((__int64 *)(v314 + 64), &v398, v399);
          v313 = v398;
          v30 = v399[0];
          v27 = (unsigned int)(*(_DWORD *)(v314 + 72) + 1);
          goto LABEL_599;
        }
      }
      else
      {
        v399[0] = 0;
      }
      v315 *= 2;
      goto LABEL_604;
    }
    v30 = *v11;
    v43 = a1->m128i_i64[0];
    a1->m128i_i64[0] = *v11;
    *v11 = v43;
    v44 = a1->m128i_i64[0];
LABEL_27:
    v374 = (char *)v393;
    v45 = (__int64 *)v384;
    while ( 2 )
    {
      v46 = *(_QWORD *)(v44 + 128);
      v392 = (__int64 *)v374;
      v378 = *(_QWORD *)v374;
      if ( !v46 )
      {
        v100 = *(_QWORD *)(v44 + 104);
        v30 = *(_QWORD *)(v100 + 96);
        v101 = v30 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v30 & 1) == 0 )
        {
          v102 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v30 &= 2u;
            if ( !(_DWORD)v30 )
              goto LABEL_31;
            v101 = sub_6C1EC0(v102, *(_QWORD *)(v44 + 104), v30, v27, v26, a6) & 0xFFFFFFFFFFFFFFFELL;
            v30 = v101 | 1;
            *(_QWORD *)(v100 + 96) = v101 | 1;
          }
        }
        if ( v101 )
        {
          if ( (v101 & 4) != 0 )
          {
            v30 &= 0xFFFFFFFFFFFFFFF8LL;
            if ( v30 )
            {
              v103 = *(_QWORD *)v30;
              v104 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
              if ( *(_DWORD *)(v30 + 8) != v104 )
              {
                *(_DWORD *)(v30 + 8) = v104;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v103 + 152LL))(v103, v100);
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
      v47 = *(_QWORD *)(v376 + 72);
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
        v385 = *(_QWORD *)(v30 + 8);
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
        v251 = (((((((((v50 | (v50 >> 1)) >> 2) | v50 | (v50 >> 1)) >> 4) | ((v50 | (v50 >> 1)) >> 2) | v50 | (v50 >> 1)) >> 8)
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
        if ( v251 < 0x40 )
          v251 = 64;
        *(_DWORD *)(v47 + 80) = v251;
        v252 = sub_220C370(16LL * v251, 8, v30, v27, v26, a6);
        *(_QWORD *)(v47 + 64) = v252;
        if ( v49 )
        {
          v253 = *(unsigned int *)(v47 + 80);
          *(_QWORD *)(v47 + 72) = 0;
          v254 = (_QWORD *)v252;
          v255 = v253;
          v256 = &v49[2 * v48];
          v257 = (_QWORD *)(v252 + 16 * v253);
          if ( (_QWORD *)v252 != v257 )
          {
            do
            {
              *v254 = -4096;
              v254 += 2;
            }
            while ( v257 != v254 );
          }
          v258 = v49;
          v259 = v255 - 1;
          do
          {
            v260 = *v258;
            if ( *v258 != -8192 && v260 != -4096 )
            {
              if ( !v255 )
              {
                *(_QWORD *)&dword_0 = *v258;
                BUG();
              }
              v261 = v259 & (((unsigned int)v260 >> 9) ^ ((unsigned int)v260 >> 4));
              v262 = (_QWORD *)(v252 + 16LL * v261);
              v263 = *v262;
              if ( *v262 != v260 && v263 != -4096 )
              {
                v396 = 1;
                v390 = nullptr;
                while ( 1 )
                {
                  if ( !v390 )
                  {
                    if ( v263 != -8192 )
                      v262 = nullptr;
                    v390 = v262;
                  }
                  v261 = v259 & (v396 + v261);
                  v262 = (_QWORD *)(v252 + 16LL * v261);
                  v263 = *v262;
                  if ( v260 == *v262 )
                    break;
                  if ( v263 == -4096 )
                  {
                    if ( v390 )
                      v262 = v390;
                    break;
                  }
                  ++v396;
                }
              }
              v264 = v258[1];
              *v262 = v260;
              v262[1] = v264;
              ++*(_DWORD *)(v47 + 72);
            }
            v258 += 2;
          }
          while ( v256 != v258 );
          operator delete();
          v252 = *(_QWORD *)(v47 + 64);
          v265 = *(_DWORD *)(v47 + 80);
          v27 = (unsigned int)(*(_DWORD *)(v47 + 72) + 1);
        }
        else
        {
          v294 = *(unsigned int *)(v47 + 80);
          *(_QWORD *)(v47 + 72) = 0;
          v265 = v294;
          v295 = (_QWORD *)(v252 + 16 * v294);
          if ( (_QWORD *)v252 != v295 )
          {
            v296 = (_QWORD *)v252;
            do
            {
              *v296 = -4096;
              v296 += 2;
            }
            while ( v295 != v296 );
          }
          v27 = 1;
        }
        if ( !v265 )
          goto LABEL_768;
        v266 = v265 - 1;
        v26 = v266 & v51;
        v30 = v252 + 16 * v26;
        v184 = *(_QWORD *)v30;
        if ( v46 == *(_QWORD *)v30 )
          goto LABEL_208;
        v267 = 1;
        v268 = 0;
        if ( v184 != -4096 )
        {
          while ( 1 )
          {
            if ( v268 || v184 != -8192 )
              v30 = v268;
            v26 = v266 & (unsigned int)(v267 + v26);
            a6 = v252 + 16LL * (unsigned int)v26;
            v184 = *(_QWORD *)a6;
            if ( v46 == *(_QWORD *)a6 )
              goto LABEL_303;
            if ( v184 == -4096 )
              goto LABEL_618;
            ++v267;
            v268 = v30;
            v30 = v252 + 16LL * (unsigned int)v26;
          }
        }
      }
      else
      {
LABEL_250:
        v214 = (((((((2 * v48 - 1) | ((unsigned __int64)(2 * v48 - 1) >> 1)) >> 2)
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
        v215 = ((v214 >> 16) | v214) + 1;
        if ( (unsigned int)v215 < 0x40 )
          LODWORD(v215) = 64;
        *(_DWORD *)(v47 + 80) = v215;
        v216 = sub_220C370(16LL * (unsigned int)v215, 8, v30, v27, v26, a6);
        *(_QWORD *)(v47 + 64) = v216;
        if ( v49 )
        {
          v217 = *(unsigned int *)(v47 + 80);
          *(_QWORD *)(v47 + 72) = 0;
          v218 = (_QWORD *)v216;
          v219 = v217;
          v220 = &v49[2 * v48];
          v221 = (_QWORD *)(v216 + 16 * v217);
          if ( (_QWORD *)v216 != v221 )
          {
            do
            {
              *v218 = -4096;
              v218 += 2;
            }
            while ( v221 != v218 );
          }
          v222 = v49;
          for ( i = v219 - 1; v220 != v222; v222 += 2 )
          {
            v224 = *v222;
            if ( *v222 != -8192 && v224 != -4096 )
            {
              if ( !v219 )
              {
                *(_QWORD *)&dword_0 = *v222;
                BUG();
              }
              v225 = i & (((unsigned int)v224 >> 9) ^ ((unsigned int)v224 >> 4));
              v226 = (_QWORD *)(v216 + 16LL * v225);
              v227 = *v226;
              if ( *v226 != v224 && v227 != -4096 )
              {
                v389 = 1;
                v318 = nullptr;
                while ( 1 )
                {
                  if ( !v318 && v227 == -8192 )
                    v318 = v226;
                  v225 = i & (v389 + v225);
                  v226 = (_QWORD *)(v216 + 16LL * v225);
                  v227 = *v226;
                  if ( v224 == *v226 )
                    break;
                  if ( v227 == -4096 )
                  {
                    if ( v318 )
                      v226 = v318;
                    break;
                  }
                  ++v389;
                }
              }
              v228 = v222[1];
              *v226 = v224;
              v226[1] = v228;
              ++*(_DWORD *)(v47 + 72);
            }
          }
          operator delete();
          v216 = *(_QWORD *)(v47 + 64);
          v229 = *(_DWORD *)(v47 + 80);
          v27 = (unsigned int)(*(_DWORD *)(v47 + 72) + 1);
        }
        else
        {
          v286 = *(unsigned int *)(v47 + 80);
          *(_QWORD *)(v47 + 72) = 0;
          v229 = v286;
          v287 = (_QWORD *)(v216 + 16 * v286);
          if ( (_QWORD *)v216 != v287 )
          {
            v288 = (_QWORD *)v216;
            do
            {
              *v288 = -4096;
              v288 += 2;
            }
            while ( v287 != v288 );
          }
          v27 = 1;
        }
        if ( !v229 )
        {
LABEL_768:
          ++*(_DWORD *)(v47 + 72);
          BUG();
        }
        v230 = v229 - 1;
        v26 = v230 & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
        v30 = v216 + 16 * v26;
        v184 = *(_QWORD *)v30;
        if ( v46 == *(_QWORD *)v30 )
          goto LABEL_208;
        v231 = 1;
        v232 = 0;
        if ( v184 != -4096 )
        {
          while ( 1 )
          {
            if ( v232 || v184 != -8192 )
              v30 = v232;
            v26 = v230 & (unsigned int)(v231 + v26);
            a6 = v216 + 16LL * (unsigned int)v26;
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
            ++v231;
            v232 = v30;
            v30 = v216 + 16LL * (unsigned int)v26;
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
      v385 = 0;
LABEL_34:
      v53 = *(_QWORD *)(v378 + 128);
      if ( !v53 )
      {
        v105 = *(_QWORD *)(v378 + 104);
        v30 = *(_QWORD *)(v105 + 96);
        v106 = v30 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v30 & 1) == 0 )
        {
          v107 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v30 &= 2u;
            if ( !(_DWORD)v30 )
              goto LABEL_36;
            v106 = sub_6C1EC0(v107, v105, v30, v27, v26, a6) & 0xFFFFFFFFFFFFFFFELL;
            v30 = v106 | 1;
            *(_QWORD *)(v105 + 96) = v106 | 1;
          }
        }
        if ( v106 )
        {
          if ( (v106 & 4) != 0 )
          {
            v30 &= 0xFFFFFFFFFFFFFFF8LL;
            if ( v30 )
            {
              v108 = *(_QWORD *)v30;
              v109 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
              if ( *(_DWORD *)(v30 + 8) != v109 )
              {
                *(_DWORD *)(v30 + 8) = v109;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v108 + 152LL))(v108, v105);
              }
            }
          }
        }
        if ( !*(_QWORD *)(v378 + 128) )
          goto LABEL_36;
        v53 = *(_QWORD *)(v378 + 128);
      }
      v53 = *(_QWORD *)(v53 + 88);
LABEL_36:
      v54 = *(_QWORD *)(v376 + 72);
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
        v199 = sub_220C370(16LL * (unsigned int)v198, 8, v30, v27, v26, a6);
        *(_QWORD *)(v54 + 64) = v199;
        if ( v56 )
        {
          v200 = *(unsigned int *)(v54 + 80);
          *(_QWORD *)(v54 + 72) = 0;
          v201 = (_QWORD *)v199;
          v202 = v200;
          v203 = &v56[2 * v55];
          v204 = (_QWORD *)(v199 + 16 * v200);
          if ( (_QWORD *)v199 != v204 )
          {
            do
            {
              *v201 = -4096;
              v201 += 2;
            }
            while ( v204 != v201 );
          }
          v205 = v56;
          for ( j = v202 - 1; v203 != v205; v205 += 2 )
          {
            v207 = *v205;
            if ( *v205 != -8192 && v207 != -4096 )
            {
              if ( !v202 )
              {
                *(_QWORD *)&dword_0 = *v205;
                BUG();
              }
              v208 = j & (((unsigned int)v207 >> 9) ^ ((unsigned int)v207 >> 4));
              v209 = (_QWORD *)(v199 + 16LL * v208);
              v210 = *v209;
              if ( *v209 != v207 && v210 != -4096 )
              {
                v382 = 1;
                v319 = nullptr;
                while ( 1 )
                {
                  if ( !v319 && v210 == -8192 )
                    v319 = v209;
                  v208 = j & (v382 + v208);
                  v209 = (_QWORD *)(v199 + 16LL * v208);
                  v210 = *v209;
                  if ( v207 == *v209 )
                    break;
                  if ( v210 == -4096 )
                  {
                    if ( v319 )
                      v209 = v319;
                    break;
                  }
                  ++v382;
                }
              }
              v211 = v205[1];
              *v209 = v207;
              v209[1] = v211;
              ++*(_DWORD *)(v54 + 72);
            }
          }
          operator delete();
          v199 = *(_QWORD *)(v54 + 64);
          v212 = *(_DWORD *)(v54 + 80);
          v27 = (unsigned int)(*(_DWORD *)(v54 + 72) + 1);
        }
        else
        {
          v283 = *(unsigned int *)(v54 + 80);
          *(_QWORD *)(v54 + 72) = 0;
          v212 = v283;
          v284 = (_QWORD *)(v199 + 16 * v283);
          if ( (_QWORD *)v199 != v284 )
          {
            v285 = (_QWORD *)v199;
            do
            {
              *v285 = -4096;
              v285 += 2;
            }
            while ( v284 != v285 );
          }
          v27 = 1;
        }
        if ( !v212 )
        {
LABEL_772:
          ++*(_DWORD *)(v54 + 72);
          BUG();
        }
        v213 = v212 - 1;
        v26 = v213 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
        v30 = v199 + 16 * v26;
        v186 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == v53 )
        {
LABEL_249:
          v186 = v53;
        }
        else
        {
          v326 = 1;
          v327 = 0;
          if ( v186 == -4096 )
            goto LABEL_283;
          while ( 1 )
          {
            if ( v186 != -8192 || v327 )
              v30 = v327;
            v26 = v213 & (unsigned int)(v326 + v26);
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
            ++v326;
            v327 = v30;
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
      v233 = (((((((((v57 | (v57 >> 1)) >> 2) | v57 | (v57 >> 1)) >> 4) | ((v57 | (v57 >> 1)) >> 2) | v57 | (v57 >> 1)) >> 8)
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
      if ( v233 < 0x40 )
        v233 = 64;
      *(_DWORD *)(v54 + 80) = v233;
      v234 = sub_220C370(16LL * v233, 8, v30, v27, v26, a6);
      *(_QWORD *)(v54 + 64) = v234;
      if ( v56 )
      {
        v235 = *(unsigned int *)(v54 + 80);
        *(_QWORD *)(v54 + 72) = 0;
        v236 = (_QWORD *)v234;
        v237 = v235;
        v238 = &v56[2 * v55];
        v239 = (_QWORD *)(v234 + 16 * v235);
        if ( (_QWORD *)v234 != v239 )
        {
          do
          {
            *v236 = -4096;
            v236 += 2;
          }
          while ( v239 != v236 );
        }
        v240 = v56;
        v241 = v237 - 1;
        do
        {
          v242 = *v240;
          if ( *v240 != -4096 && v242 != -8192 )
          {
            if ( !v237 )
            {
              *(_QWORD *)&dword_0 = *v240;
              BUG();
            }
            v243 = v241 & (((unsigned int)v242 >> 9) ^ ((unsigned int)v242 >> 4));
            v244 = (_QWORD *)(v234 + 16LL * v243);
            v245 = *v244;
            if ( *v244 != v242 && v245 != -4096 )
            {
              v397 = 1;
              v383 = nullptr;
              while ( 1 )
              {
                if ( v245 == -8192 )
                {
                  if ( v383 )
                    v244 = v383;
                  v383 = v244;
                }
                v243 = v241 & (v397 + v243);
                v244 = (_QWORD *)(v234 + 16LL * v243);
                v245 = *v244;
                if ( v242 == *v244 )
                  break;
                if ( v245 == -4096 )
                {
                  if ( v383 )
                    v244 = v383;
                  break;
                }
                ++v397;
              }
            }
            v246 = v240[1];
            *v244 = v242;
            v244[1] = v246;
            ++*(_DWORD *)(v54 + 72);
          }
          v240 += 2;
        }
        while ( v238 != v240 );
        operator delete();
        v234 = *(_QWORD *)(v54 + 64);
        v247 = *(_DWORD *)(v54 + 80);
        v27 = (unsigned int)(*(_DWORD *)(v54 + 72) + 1);
      }
      else
      {
        v291 = *(unsigned int *)(v54 + 80);
        *(_QWORD *)(v54 + 72) = 0;
        v247 = v291;
        v292 = (_QWORD *)(v234 + 16 * v291);
        if ( (_QWORD *)v234 != v292 )
        {
          v293 = (_QWORD *)v234;
          do
          {
            *v293 = -4096;
            v293 += 2;
          }
          while ( v292 != v293 );
        }
        v27 = 1;
      }
      if ( !v247 )
        goto LABEL_772;
      v248 = v247 - 1;
      v26 = v248 & v58;
      v30 = v234 + 16 * v26;
      v186 = *(_QWORD *)v30;
      if ( *(_QWORD *)v30 == v53 )
        goto LABEL_249;
      v249 = 1;
      v250 = 0;
      if ( v186 != -4096 )
      {
        while ( 1 )
        {
          if ( v250 || v186 != -8192 )
            v30 = v250;
          v26 = v248 & (unsigned int)(v249 + v26);
          a6 = v234 + 16LL * (unsigned int)v26;
          v186 = *(_QWORD *)a6;
          if ( v53 == *(_QWORD *)a6 )
            goto LABEL_465;
          if ( v186 == -4096 )
            goto LABEL_576;
          ++v249;
          v250 = v30;
          v30 = v234 + 16LL * (unsigned int)v26;
        }
      }
LABEL_283:
      *(_DWORD *)(v54 + 72) = v27;
LABEL_217:
      *(_QWORD *)v30 = v53;
      v60 = 0;
      *(_QWORD *)(v30 + 8) = 0;
LABEL_39:
      if ( v385 > v60 )
        goto LABEL_28;
      do
      {
        v71 = *--v45;
        v72 = *(_QWORD *)(*v45 + 128);
        v380 = a1->m128i_i64[0];
        v73 = v72;
        if ( !v72 )
        {
          v95 = *(_QWORD *)(v71 + 104);
          v30 = *(_QWORD *)(v95 + 96);
          v96 = v30 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v30 & 1) == 0 )
          {
            v97 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v30 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              v30 &= 2u;
              if ( !(_DWORD)v30 )
                goto LABEL_51;
              v96 = sub_6C1EC0(v97, *(_QWORD *)(v71 + 104), v30, v27, v26, a6) & 0xFFFFFFFFFFFFFFFELL;
              v30 = v96 | 1;
              *(_QWORD *)(v95 + 96) = v96 | 1;
            }
          }
          if ( v96 )
          {
            if ( (v96 & 4) != 0 )
            {
              v30 &= 0xFFFFFFFFFFFFFFF8LL;
              if ( v30 )
              {
                v98 = *(_QWORD *)v30;
                v99 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
                if ( *(_DWORD *)(v30 + 8) != v99 )
                {
                  *(_DWORD *)(v30 + 8) = v99;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v98 + 152LL))(v98, v95);
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
        v74 = *(_QWORD *)(v376 + 72);
        v75 = *(_DWORD *)(v74 + 80);
        v76 = *(__int64 **)(v74 + 64);
        if ( !v75 )
          goto LABEL_52;
        v61 = v75 - 1;
        v386 = ((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4);
        v27 = (v75 - 1) & v386;
        v30 = (__int64)&v76[2 * v27];
        v62 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == v72 )
        {
LABEL_42:
          v387 = *(_QWORD *)(v30 + 8);
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
            v94 = *(_QWORD *)v30;
            goto LABEL_68;
          }
          v139 = ((v61 | ((unsigned __int64)v61 >> 1)) >> 2) | v61 | ((unsigned __int64)v61 >> 1);
          v140 = (((v139 >> 4) | v139) >> 8) | (v139 >> 4) | v139;
          v141 = ((v140 >> 16) | v140) + 1;
          if ( (unsigned int)v141 < 0x40 )
            LODWORD(v141) = 64;
          *(_DWORD *)(v74 + 80) = v141;
          v142 = sub_220C370(16LL * (unsigned int)v141, 8, v30, v27, v26, a6);
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
                  v395 = 1;
                  v272 = nullptr;
                  while ( 1 )
                  {
                    if ( !v272 && v153 == -8192 )
                      v272 = v152;
                    v151 = v149 & (v395 + v151);
                    v152 = (_QWORD *)(v142 + 16LL * v151);
                    v153 = *v152;
                    if ( v150 == *v152 )
                      break;
                    if ( v153 == -4096 )
                    {
                      if ( v272 )
                        v152 = v272;
                      break;
                    }
                    ++v395;
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
            operator delete();
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
          v26 = (v155 - 1) & v386;
          v30 = v142 + 16 * v26;
          v94 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 == v72 )
          {
LABEL_67:
            v94 = v72;
            goto LABEL_68;
          }
          v157 = 1;
          v158 = 0;
          if ( v94 != -4096 )
          {
            while ( 1 )
            {
              if ( v94 != -8192 || v158 )
                v30 = v158;
              v26 = v156 & (unsigned int)(v157 + v26);
              a6 = v142 + 16LL * (unsigned int)v26;
              v94 = *(_QWORD *)a6;
              if ( v72 == *(_QWORD *)a6 )
                break;
              if ( v94 == -4096 )
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
            if ( v94 != -4096 )
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
          v79 = sub_220C370(16LL * (unsigned int)v78, 8, v30, v27, v26, a6);
          *(_QWORD *)(v74 + 64) = v79;
          if ( v76 )
          {
            v80 = *(unsigned int *)(v74 + 80);
            *(_QWORD *)(v74 + 72) = 0;
            v81 = (_QWORD *)v79;
            v82 = v80;
            v83 = &v76[2 * v75];
            v84 = (_QWORD *)(v79 + 16 * v80);
            if ( (_QWORD *)v79 != v84 )
            {
              do
              {
                *v81 = -4096;
                v81 += 2;
              }
              while ( v84 != v81 );
            }
            v85 = v76;
            for ( k = v82 - 1; v83 != v85; v85 += 2 )
            {
              v87 = *v85;
              if ( *v85 != -8192 && v87 != -4096 )
              {
                if ( !v82 )
                {
                  *(_QWORD *)&dword_0 = *v85;
                  BUG();
                }
                v88 = k & (((unsigned int)v87 >> 9) ^ ((unsigned int)v87 >> 4));
                v89 = (_QWORD *)(v79 + 16LL * v88);
                v90 = *v89;
                if ( *v89 != v87 && v90 != -4096 )
                {
                  v388 = 1;
                  v269 = nullptr;
                  while ( 1 )
                  {
                    if ( !v269 && v90 == -8192 )
                      v269 = v89;
                    v88 = k & (v388 + v88);
                    v89 = (_QWORD *)(v79 + 16LL * v88);
                    v90 = *v89;
                    if ( v87 == *v89 )
                      break;
                    if ( v90 == -4096 )
                    {
                      if ( v269 )
                        v89 = v269;
                      break;
                    }
                    ++v388;
                  }
                }
                v91 = v85[1];
                *v89 = v87;
                v89[1] = v91;
                ++*(_DWORD *)(v74 + 72);
              }
            }
            operator delete();
            v79 = *(_QWORD *)(v74 + 64);
            v92 = *(_DWORD *)(v74 + 80);
            v27 = (unsigned int)(*(_DWORD *)(v74 + 72) + 1);
          }
          else
          {
            v180 = *(unsigned int *)(v74 + 80);
            *(_QWORD *)(v74 + 72) = 0;
            v92 = v180;
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
          if ( !v92 )
            goto LABEL_760;
          v93 = v92 - 1;
          v26 = (v92 - 1) & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
          v30 = v79 + 16 * v26;
          v94 = *(_QWORD *)v30;
          if ( *(_QWORD *)v30 == v72 )
            goto LABEL_67;
          v289 = 1;
          v290 = 0;
          if ( v94 != -4096 )
          {
            while ( 1 )
            {
              if ( v290 || v94 != -8192 )
                v30 = v290;
              v26 = v93 & (unsigned int)(v289 + v26);
              a6 = v79 + 16LL * (unsigned int)v26;
              v94 = *(_QWORD *)a6;
              if ( v72 == *(_QWORD *)a6 )
                goto LABEL_356;
              if ( v94 == -4096 )
                goto LABEL_477;
              ++v289;
              v290 = v30;
              v30 = v79 + 16LL * (unsigned int)v26;
            }
          }
        }
LABEL_175:
        *(_DWORD *)(v74 + 72) = v27;
LABEL_70:
        *(_QWORD *)v30 = v72;
        *(_QWORD *)(v30 + 8) = 0;
        v387 = 0;
LABEL_43:
        v63 = *(_QWORD *)(v380 + 128);
        v64 = v63;
        if ( !v63 )
        {
          v133 = *(_QWORD *)(v380 + 104);
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
              v134 = sub_6C1EC0(v135, *(_QWORD *)(v380 + 104), v30, v27, v26, a6) & 0xFFFFFFFFFFFFFFFELL;
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
          v64 = *(_QWORD *)(v380 + 128);
          if ( !v64 )
            goto LABEL_45;
        }
        v63 = *(_QWORD *)(v64 + 88);
LABEL_45:
        v65 = *(_QWORD *)(v376 + 72);
        v66 = *(_DWORD *)(v65 + 80);
        v67 = *(__int64 **)(v65 + 64);
        if ( !v66 )
          goto LABEL_176;
        v68 = v66 - 1;
        v379 = ((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4);
        v27 = (v66 - 1) & v379;
        v30 = (__int64)&v67[2 * v27];
        v69 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 == v63 )
        {
LABEL_47:
          v70 = *(_QWORD *)(v30 + 8);
          continue;
        }
        v111 = 1;
        v26 = 0;
        if ( v69 != -4096 )
        {
          while ( 1 )
          {
            if ( v69 == -8192 && !v26 )
              v26 = v30;
            a6 = (unsigned int)(v111 + 1);
            v27 = v68 & (v111 + (_DWORD)v27);
            v30 = (__int64)&v67[2 * (unsigned int)v27];
            v69 = *(_QWORD *)v30;
            if ( v63 == *(_QWORD *)v30 )
              goto LABEL_47;
            if ( v69 == -4096 )
              break;
            ++v111;
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
            v112 = *(_QWORD *)v30;
            goto LABEL_110;
          }
          v113 = ((v68 | ((unsigned __int64)v68 >> 1)) >> 2) | v68 | ((unsigned __int64)v68 >> 1);
          v114 = (((v113 >> 4) | v113) >> 8) | (v113 >> 4) | v113;
          v115 = ((v114 >> 16) | v114) + 1;
          if ( (unsigned int)v115 < 0x40 )
            LODWORD(v115) = 64;
          *(_DWORD *)(v65 + 80) = v115;
          v116 = sub_220C370(16LL * (unsigned int)v115, 8, v30, v27, v26, a6);
          *(_QWORD *)(v65 + 64) = v116;
          if ( v67 )
          {
            v117 = *(unsigned int *)(v65 + 80);
            v118 = (_QWORD *)v116;
            *(_QWORD *)(v65 + 72) = 0;
            v119 = 2LL * v66;
            v120 = v117;
            v121 = (_QWORD *)(v116 + 16 * v117);
            if ( (_QWORD *)v116 != v121 )
            {
              do
              {
                *v118 = -4096;
                v118 += 2;
              }
              while ( v121 != v118 );
            }
            v122 = v67;
            v123 = v120 - 1;
            do
            {
              v124 = *v122;
              if ( *v122 != -8192 && v124 != -4096 )
              {
                if ( !v120 )
                {
                  *(_QWORD *)&dword_0 = *v122;
                  BUG();
                }
                v125 = v123 & (((unsigned int)v124 >> 9) ^ ((unsigned int)v124 >> 4));
                v126 = (_QWORD *)(v116 + 16LL * v125);
                v127 = *v126;
                if ( v124 != *v126 && v127 != -4096 )
                {
                  v394 = 1;
                  v271 = nullptr;
                  while ( 1 )
                  {
                    if ( v127 == -8192 && !v271 )
                      v271 = v126;
                    v125 = v123 & (v394 + v125);
                    v126 = (_QWORD *)(v116 + 16LL * v125);
                    v127 = *v126;
                    if ( v124 == *v126 )
                      break;
                    if ( v127 == -4096 )
                    {
                      if ( v271 )
                        v126 = v271;
                      break;
                    }
                    ++v394;
                  }
                }
                v128 = v122[1];
                *v126 = v124;
                v126[1] = v128;
                ++*(_DWORD *)(v65 + 72);
              }
              v122 += 2;
            }
            while ( &v67[v119] != v122 );
            operator delete();
            v116 = *(_QWORD *)(v65 + 64);
            LODWORD(v129) = *(_DWORD *)(v65 + 80);
            v27 = (unsigned int)(*(_DWORD *)(v65 + 72) + 1);
          }
          else
          {
            *(_QWORD *)(v65 + 72) = 0;
            v129 = *(unsigned int *)(v65 + 80);
            v190 = (_QWORD *)(v116 + 16 * v129);
            if ( (_QWORD *)v116 != v190 )
            {
              v191 = (_QWORD *)v116;
              do
              {
                *v191 = -4096;
                v191 += 2;
              }
              while ( v190 != v191 );
            }
            v27 = 1;
          }
          if ( !(_DWORD)v129 )
            goto LABEL_764;
          v130 = v129 - 1;
          v26 = v130 & v379;
          v30 = v116 + 16 * v26;
          v112 = *(_QWORD *)v30;
          if ( v63 == *(_QWORD *)v30 )
            goto LABEL_110;
          v131 = 1;
          v132 = 0;
          if ( v112 != -4096 )
          {
            while ( 1 )
            {
              if ( v132 || v112 != -8192 )
                v30 = v132;
              v26 = v130 & (unsigned int)(v131 + v26);
              a6 = v116 + 16LL * (unsigned int)v26;
              v112 = *(_QWORD *)a6;
              if ( v63 == *(_QWORD *)a6 )
                goto LABEL_195;
              if ( v112 == -4096 )
                goto LABEL_484;
              ++v131;
              v132 = v30;
              v30 = v116 + 16LL * (unsigned int)v26;
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
          v161 = sub_220C370(16LL * (unsigned int)v160, 8, v30, v27, v26, a6);
          *(_QWORD *)(v65 + 64) = v161;
          if ( v67 )
          {
            v162 = *(unsigned int *)(v65 + 80);
            v163 = (_QWORD *)v161;
            *(_QWORD *)(v65 + 72) = 0;
            v164 = v162;
            v165 = &v67[2 * v66];
            v166 = (_QWORD *)(v161 + 16 * v162);
            if ( (_QWORD *)v161 != v166 )
            {
              do
              {
                *v163 = -4096;
                v163 += 2;
              }
              while ( v166 != v163 );
            }
            v167 = v67;
            for ( m = v164 - 1; v165 != v167; v167 += 2 )
            {
              v169 = *v167;
              if ( *v167 != -4096 && v169 != -8192 )
              {
                if ( !v164 )
                {
                  *(_QWORD *)&dword_0 = *v167;
                  BUG();
                }
                v170 = m & (((unsigned int)v169 >> 9) ^ ((unsigned int)v169 >> 4));
                v171 = (_QWORD *)(v161 + 16LL * v170);
                v172 = *v171;
                if ( v169 != *v171 && v172 != -4096 )
                {
                  v381 = 1;
                  v270 = nullptr;
                  while ( 1 )
                  {
                    if ( v172 == -8192 && !v270 )
                      v270 = v171;
                    v170 = m & (v381 + v170);
                    v171 = (_QWORD *)(v161 + 16LL * v170);
                    v172 = *v171;
                    if ( v169 == *v171 )
                      break;
                    if ( v172 == -4096 )
                    {
                      if ( v270 )
                        v171 = v270;
                      break;
                    }
                    ++v381;
                  }
                }
                v173 = v167[1];
                *v171 = v169;
                v171[1] = v173;
                ++*(_DWORD *)(v65 + 72);
              }
            }
            operator delete();
            v161 = *(_QWORD *)(v65 + 64);
            LODWORD(v174) = *(_DWORD *)(v65 + 80);
            v27 = (unsigned int)(*(_DWORD *)(v65 + 72) + 1);
          }
          else
          {
            *(_QWORD *)(v65 + 72) = 0;
            v174 = *(unsigned int *)(v65 + 80);
            v178 = (_QWORD *)(v161 + 16 * v174);
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
          if ( !(_DWORD)v174 )
          {
LABEL_764:
            ++*(_DWORD *)(v65 + 72);
            BUG();
          }
          v175 = v174 - 1;
          v26 = v175 & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
          v30 = v161 + 16 * v26;
          v112 = *(_QWORD *)v30;
          if ( v63 == *(_QWORD *)v30 )
            goto LABEL_110;
          v176 = 1;
          v177 = 0;
          if ( v112 != -4096 )
          {
            while ( 1 )
            {
              if ( v177 || v112 != -8192 )
                v30 = v177;
              v26 = v175 & (unsigned int)(v176 + v26);
              a6 = v161 + 16LL * (unsigned int)v26;
              v112 = *(_QWORD *)a6;
              if ( v63 == *(_QWORD *)a6 )
                break;
              if ( v112 == -4096 )
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
            if ( v112 != -4096 )
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
      while ( v387 > v70 );
      if ( v374 < (char *)v45 )
      {
        v30 = *v45;
        v110 = *(_QWORD *)v374;
        *(_QWORD *)v374 = *v45;
        *v45 = v110;
LABEL_28:
        v374 += 8;
        v44 = a1->m128i_i64[0];
        continue;
      }
      break;
    }
    result = (__int64 *)sub_A6B4E0(v374, v384, v391, v376);
    v9 = v374 - (char *)a1;
    if ( v374 - (char *)a1 <= 128 )
      return result;
    v384 = v374;
  }
  while ( v391 );
  v8 = (__int64 *)a1;
LABEL_229:
  v192 = v9 >> 3;
  v193 = ((v9 >> 3) - 2) >> 1;
  sub_A69150((__int64)v8, v193, v9 >> 3, v8[v193], v376, a6);
  do
  {
    --v193;
    sub_A69150((__int64)v8, v193, v192, v8[v193], v376, v194);
  }
  while ( v193 );
  v195 = v392;
  do
  {
    v196 = *--v195;
    *v195 = *v8;
    result = sub_A69150((__int64)v8, 0, v195 - v8, v196, v376, v194);
  }
  while ( (char *)v195 - (char *)v8 > 8 );
  return result;
}

