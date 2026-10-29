signed __int64 __fastcall sub_8FACD0(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  __int64 v5; // r10
  const __m128i *v6; // rsi
  int v7; // eax
  __int64 v9; // r14
  unsigned int v10; // r15d
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  unsigned __int64 v19; // r9
  __int64 *v20; // rax
  unsigned __int64 v21; // rax
  unsigned int v22; // r11d
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r13
  unsigned int v25; // ebx
  unsigned int v26; // edi
  unsigned int *v27; // rbp
  __int64 v28; // rax
  unsigned int *v29; // r14
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // ebx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  char *v42; // rdx
  char *v43; // r12
  int v44; // r14d
  unsigned __int64 v45; // rbx
  char *v46; // rdi
  __m128i *v47; // rdi
  unsigned __int64 v48; // r9
  const __m128i *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int v52; // edi
  unsigned __int64 v53; // rdi
  unsigned int v54; // ebp
  _DWORD *v55; // rcx
  __int64 v56; // rdx
  __int64 *v57; // rdx
  _QWORD *v58; // rbx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // r12
  __int64 v62; // rdx
  __int64 v63; // rbp
  char *v66; // rbp
  __int64 v67; // r14
  unsigned int v68; // r15d
  unsigned int v69; // edx
  int v70; // ecx
  unsigned int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rbp
  int v74; // edx
  int v75; // r8d
  int v76; // r9d
  unsigned __int64 v77; // r9
  __int64 *v78; // rax
  unsigned __int64 v79; // rax
  unsigned int v80; // r11d
  unsigned __int64 v81; // r12
  unsigned __int64 v82; // r13
  unsigned int v83; // ebx
  unsigned int v84; // edi
  unsigned int *v85; // rbp
  __int64 v86; // rax
  unsigned int *v87; // r14
  unsigned int v88; // r8d
  __int64 v89; // rcx
  __int64 v90; // rdx
  unsigned int v91; // ebx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // rdi
  unsigned __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // rcx
  char *v100; // rdx
  char *v101; // r12
  int v102; // r14d
  unsigned __int64 v103; // rbx
  char *v104; // rdi
  __m128i *v105; // rdi
  unsigned __int64 v106; // r9
  const __m128i *v107; // r13
  __int64 v108; // rax
  __int64 v109; // rdx
  unsigned int v110; // edi
  unsigned __int64 v111; // rdi
  unsigned int v112; // ebp
  _DWORD *v113; // rcx
  __int64 v114; // rdx
  __int64 *v115; // rdx
  _QWORD *v116; // rbx
  unsigned __int64 v117; // rcx
  unsigned __int64 v118; // rdi
  unsigned __int64 v119; // r12
  __int64 v120; // rdx
  __int64 v121; // rbp
  char *v124; // rbp
  unsigned int v125; // ebp
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // r12
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rdi
  unsigned __int64 v130; // r13
  __int64 v131; // rcx
  __int64 v132; // rax
  char *v135; // r8
  unsigned int v136; // ebp
  unsigned __int64 v137; // rdx
  unsigned __int64 v138; // r12
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // rdi
  unsigned __int64 v141; // r13
  __int64 v142; // rcx
  __int64 v143; // rax
  char *v146; // r8
  __int64 v147; // rdx
  __int64 v148; // rdi
  char *v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rdi
  char *v156; // rdx
  bool v157; // cc
  __int64 v158; // rdi
  unsigned __int64 v159; // rcx
  char *v160; // r8
  unsigned __int64 v161; // rax
  unsigned __int64 v162; // rbx
  __int64 v163; // rbp
  __int64 v164; // r12
  char *v167; // rbp
  __m128i *v168; // rdi
  unsigned __int64 v169; // r9
  __int64 v170; // rax
  unsigned __int64 v171; // rbp
  __int64 v172; // rax
  __int64 v173; // r11
  int v174; // r12d
  int v175; // r11d
  unsigned int v176; // ecx
  __int64 v177; // rax
  __int64 v178; // rdi
  unsigned __int64 v179; // rcx
  char *v180; // r8
  unsigned __int64 v181; // rax
  unsigned __int64 v182; // rbx
  __int64 v183; // rbp
  __int64 v184; // r12
  char *v187; // rbp
  __m128i *v188; // rdi
  unsigned __int64 v189; // r9
  __int64 v190; // rax
  unsigned __int64 v191; // rbp
  __int64 v192; // rax
  __int64 v193; // r11
  int v194; // r12d
  int v195; // r11d
  unsigned int v196; // ecx
  _DWORD *v197; // rax
  unsigned __int64 v198; // rcx
  unsigned __int64 v199; // rax
  unsigned __int64 j; // rax
  unsigned __int64 v201; // rcx
  unsigned __int64 v202; // rax
  unsigned __int64 i; // rax
  char *v204; // rdx
  __int64 *v205; // r13
  __int64 *v206; // rbp
  char *v207; // rdx
  __int64 *v208; // r13
  __int64 *v209; // rbp
  __int64 *v210; // r12
  __int64 *v211; // rbp
  __int64 *v212; // r12
  __int64 *v213; // rbp
  __int64 v214; // rdx
  __int64 v215; // rdx
  __int64 v216; // rdx
  __int64 v217; // rdx
  __m128i *v218; // rax
  char *v219; // rdx
  const __m128i *v220; // rsi
  __m128i *v221; // rax
  __m128i v222; // xmm2
  __m128i *v223; // rax
  char *v224; // rdx
  const __m128i *v225; // rsi
  __m128i *v226; // rax
  __m128i v227; // xmm0
  char *v228; // rcx
  __int64 *v229; // rbx
  char *v230; // rdx
  signed __int64 v231; // rdx
  char *v232; // rcx
  __int64 *v233; // rbx
  char *v234; // rdx
  signed __int64 v235; // rdx
  char *v236; // rcx
  __int64 *v237; // rdi
  char *v238; // rax
  signed __int64 v239; // rax
  char *v240; // rcx
  __int64 *v241; // rdi
  char *v242; // rax
  signed __int64 v243; // rax
  __int64 v244; // r8
  __int64 v245; // rdi
  __int64 v248; // rdx
  __int64 v249; // r14
  __int64 v252; // r14
  __int64 v253; // rdx
  __int64 v256; // rdi
  __int64 v257; // r8
  __int64 v260; // rdx
  __int64 v261; // r13
  __int64 v264; // r13
  __int64 v265; // rdx
  unsigned __int64 v276; // rcx
  __int64 v277; // rdx
  __int64 v278; // rdi
  char *v281; // rdx
  unsigned __int64 v282; // rcx
  __int64 v283; // rdx
  __int64 v284; // rdi
  char *v287; // rdx
  __m128i *v288; // rax
  char *v289; // rdx
  const __m128i *v290; // rsi
  __m128i *v291; // rax
  __m128i v292; // xmm6
  __m128i *v293; // rax
  char *v294; // rdx
  const __m128i *v295; // rsi
  __m128i *v296; // rax
  __m128i v297; // xmm6
  char *v298; // rsi
  unsigned __int64 v299; // rcx
  char *v300; // r8
  unsigned __int64 v301; // rdx
  unsigned __int64 v302; // rbx
  __int64 v303; // rdi
  __int64 v304; // rbp
  unsigned __int64 v307; // rbx
  __m128i *v308; // rdi
  __int64 v309; // rax
  unsigned __int64 v310; // rax
  int v311; // eax
  __int64 v312; // rsi
  unsigned __int64 v313; // rcx
  char *v314; // r8
  unsigned __int64 v315; // rdx
  unsigned __int64 v316; // rbx
  __int64 v317; // rdi
  __int64 v318; // rbp
  char *v321; // rbx
  __m128i *v322; // rdi
  __int64 v323; // rax
  unsigned __int64 v324; // rax
  int v325; // eax
  __int64 *v326; // r8
  char *v327; // rdx
  __int64 *v328; // r8
  char *v329; // rdx
  __int64 v330; // r12
  __int64 v331; // rdi
  __int64 v334; // r12
  __int64 v335; // rdi
  __int64 v338; // r8
  __int64 v339; // rdx
  __int64 v342; // rdx
  __int64 v343; // r8
  _DWORD *v346; // rbp
  _DWORD *v347; // rdi
  _QWORD *v348; // rbp
  _QWORD *v349; // rdi
  __int64 v350; // rdi
  __int64 v351; // rbx
  __int64 v354; // rdi
  __int64 v355; // rbx
  unsigned __int64 v358; // r8
  __int64 v359; // rax
  __int64 v360; // rcx
  char *v363; // rax
  unsigned __int64 v364; // r8
  __int64 v365; // rax
  __int64 v366; // rcx
  char *v369; // rax
  char *v370; // rcx
  signed __int64 v373; // rax
  char *v374; // rcx
  signed __int64 v377; // rax
  __int64 v378; // rax
  __int64 v381; // rax
  __int64 *v384; // r14
  __int64 *v385; // rcx
  __int64 *v386; // r14
  __int64 *v387; // rcx
  __int64 *v388; // rbp
  char *v389; // rax
  __int64 *v390; // rbp
  char *v391; // rax
  __int64 *v392; // rsi
  char *v393; // rax
  __int64 *v394; // rsi
  char *v395; // rax
  char *v396; // r12
  signed __int64 v399; // rcx
  char *v400; // r12
  signed __int64 v403; // rcx
  __int64 v404; // rbp
  __int64 v405; // rdx
  __int64 v408; // rbp
  __int64 v409; // rdx
  __int64 v412; // rdi
  __int64 v413; // rcx
  __int64 v416; // rdi
  __int64 v417; // rcx
  __int64 v420; // rdx
  __int64 v421; // rdi
  __int64 v424; // rdx
  __int64 v425; // rdi
  __int64 *v428; // rbp
  char *v429; // r8
  __int64 *v430; // rbp
  char *v431; // r8
  _QWORD *v432; // r8
  _QWORD *v433; // rcx
  _QWORD *v434; // r8
  _QWORD *v435; // rcx
  int v436; // eax
  int v437; // eax
  __int64 v438; // rcx
  __int64 v439; // rdi
  __int64 v442; // rcx
  __int64 v443; // rdi
  char *v446; // r13
  signed __int64 v449; // rcx
  char *v450; // r13
  signed __int64 v453; // rcx
  __int64 *v458; // r12
  char *v459; // rcx
  __int64 *v460; // r12
  char *v461; // rcx
  __int64 v466; // [rsp+0h] [rbp-C8h]
  __int64 v467; // [rsp+0h] [rbp-C8h]
  const __m128i *v468; // [rsp+8h] [rbp-C0h]
  __int64 v469; // [rsp+10h] [rbp-B8h]
  __int64 v470; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v472; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v473; // [rsp+20h] [rbp-A8h]
  __int64 v474; // [rsp+28h] [rbp-A0h]
  __int64 v475; // [rsp+28h] [rbp-A0h]
  int v476; // [rsp+30h] [rbp-98h]
  char v477; // [rsp+34h] [rbp-94h]
  char v478; // [rsp+34h] [rbp-94h]
  __int64 v479; // [rsp+38h] [rbp-90h]
  __int64 v480; // [rsp+38h] [rbp-90h]
  unsigned __int64 v481; // [rsp+40h] [rbp-88h]
  unsigned __int64 v482; // [rsp+40h] [rbp-88h]
  __int64 v483; // [rsp+48h] [rbp-80h]
  __int64 v484; // [rsp+48h] [rbp-80h]
  __int64 v485; // [rsp+50h] [rbp-78h]
  __int64 v486; // [rsp+50h] [rbp-78h]
  char v487; // [rsp+58h] [rbp-70h]
  char v488; // [rsp+58h] [rbp-70h]
  char v489; // [rsp+5Ch] [rbp-6Ch]
  char v490; // [rsp+5Ch] [rbp-6Ch]
  unsigned int v491; // [rsp+60h] [rbp-68h]
  unsigned int v492; // [rsp+60h] [rbp-68h]
  int v493; // [rsp+64h] [rbp-64h]
  int v494; // [rsp+64h] [rbp-64h]
  int v495; // [rsp+68h] [rbp-60h]
  __int64 v496; // [rsp+68h] [rbp-60h]
  __int64 v497; // [rsp+68h] [rbp-60h]
  char *v498; // [rsp+70h] [rbp-58h]
  char *v499; // [rsp+70h] [rbp-58h]
  unsigned __int64 v500; // [rsp+78h] [rbp-50h]
  unsigned __int64 v501; // [rsp+78h] [rbp-50h]
  __int64 *v502; // [rsp+80h] [rbp-48h]
  __int64 *v503; // [rsp+80h] [rbp-48h]
  char v504; // [rsp+88h] [rbp-40h]
  char v505; // [rsp+88h] [rbp-40h]
  unsigned int v506; // [rsp+8Ch] [rbp-3Ch]
  unsigned int v507; // [rsp+8Ch] [rbp-3Ch]

  v5 = a2;
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 272);
  switch ( v7 )
  {
    case 6:
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_DWORD *)(a1 + 24);
      v474 = *(_QWORD *)(a1 + 112);
      v483 = *(_QWORD *)(a1 + 128);
      v11 = 1 << *(_DWORD *)(a1 + 256);
      v12 = a5 + (_DWORD)a4 - v9;
      v13 = v12 - v11;
      if ( v11 >= v12 - v10 )
        v13 = *(_DWORD *)(a1 + 24);
      if ( !*(_DWORD *)(a1 + 40) )
        v10 = v13;
      v468 = (const __m128i *)((char *)v6 + a5);
      v472 = (unsigned __int64)&v6->m128i_u64[-1] + a5;
      v502 = (__int64 *)(v9 + v10);
      v495 = a3[1];
      v14 = *(_QWORD *)(a1 + 248);
      v476 = *a3;
      v15 = *(_QWORD *)(v14 + 112);
      v485 = *(_QWORD *)(v14 + 128);
      v469 = *(_QWORD *)(v14 + 8);
      v481 = v469 + *(unsigned int *)(v14 + 24);
      v479 = v15;
      v493 = *(_QWORD *)v14 - v469;
      v16 = *(_DWORD *)(v14 + 264);
      v498 = *(char **)v14;
      v506 = v10 - v493;
      v17 = *(_DWORD *)(v14 + 260);
      v18 = *(_QWORD *)v14 - v481 + (_DWORD)v6 - (v9 + v10);
      if ( *(_DWORD *)(a1 + 296) )
      {
        v201 = 4LL << v17;
        if ( 4LL << v16 )
        {
          v202 = 0;
          do
          {
            _mm_prefetch((const char *)(v15 + v202), 2);
            v202 += 64LL;
          }
          while ( 4LL << v16 > v202 );
        }
        if ( v201 )
        {
          for ( i = 0; i < v201; i += 64LL )
            _mm_prefetch((const char *)(v485 + i), 2);
        }
      }
      v19 = (unsigned __int64)v6->m128i_u64 + (v18 == 0);
      if ( v472 <= v19 )
        goto LABEL_63;
      v466 = *(_QWORD *)(a1 + 8);
      v491 = v10 - 1;
      v487 = 56 - v16;
      v504 = 56 - v17;
      v477 = 64 - *(_DWORD *)(a1 + 264);
      v489 = 64 - *(_DWORD *)(a1 + 260);
      v500 = (unsigned __int64)&v468[-1].m128i_u64[1] + 1;
LABEL_17:
      v22 = v19 - v466;
      v23 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v19) >> v487;
      v24 = (0xCF1BBCDCBF9B0000LL * *(_QWORD *)v19) >> v504;
      v25 = *(_DWORD *)(v479 + 4 * (v23 >> 8));
      v26 = *(_DWORD *)(v485 + 4 * (v24 >> 8));
      v27 = (unsigned int *)(v474 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)v19) >> v477));
      v28 = *v27;
      v29 = (unsigned int *)(v483 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)v19) >> v489));
      v30 = *v29;
      v31 = (unsigned int)(v19 - v466 - v476 + 1);
      v32 = v466 + v31;
      if ( v10 > (unsigned int)v31 )
        v32 = v469 + (unsigned int)v31 + v493 - v10;
      *v29 = v22;
      *v27 = v22;
      if ( v491 - (unsigned int)v31 <= 2 || *(_DWORD *)v32 != *(_DWORD *)(v19 + 1) )
      {
        if ( v10 >= (unsigned int)v28 )
        {
          if ( (_BYTE)v23 == (_BYTE)v25 )
          {
            v33 = v25 >> 8;
            v34 = v469 + v33;
            if ( v481 < v34 && *(_QWORD *)v34 == *(_QWORD *)v19 )
            {
              v35 = v19 + 8;
              v36 = (unsigned __int64)&v498[v19 - v34];
              if ( (unsigned __int64)v468 < v36 )
                v36 = (unsigned __int64)v468;
              v37 = v36 - 7;
              if ( v35 >= v36 - 7 )
              {
                v386 = (__int64 *)(v34 + 8);
                v387 = (__int64 *)(v19 + 8);
              }
              else
              {
                v38 = *(_QWORD *)(v34 + 8);
                v39 = *(_QWORD *)(v19 + 8);
                if ( v38 != v39 )
                {
                  _RDX = v39 ^ v38;
                  __asm { tzcnt   rdx, rdx }
                  v42 = (char *)((unsigned int)_RDX >> 3);
                  goto LABEL_30;
                }
                v387 = (__int64 *)(v19 + 16);
                v386 = (__int64 *)(v34 + 16);
                if ( v37 > v19 + 16 )
                {
                  v404 = *(_QWORD *)(v34 + 16);
                  v405 = *(_QWORD *)(v19 + 16);
                  if ( v404 != v405 )
                  {
LABEL_643:
                    _RDX = v404 ^ v405;
                    __asm { tzcnt   rdx, rdx }
                    v42 = (char *)v387 + ((unsigned int)_RDX >> 3) - v35;
                    goto LABEL_30;
                  }
                  while ( 1 )
                  {
                    ++v387;
                    ++v386;
                    if ( v37 <= (unsigned __int64)v387 )
                      break;
                    v404 = *v386;
                    v405 = *v387;
                    if ( *v386 != *v387 )
                      goto LABEL_643;
                  }
                }
              }
              if ( (unsigned __int64)v387 < v36 - 3 && *(_DWORD *)v386 == *(_DWORD *)v387 )
              {
                v387 = (__int64 *)((char *)v387 + 4);
                v386 = (__int64 *)((char *)v386 + 4);
              }
              if ( (unsigned __int64)v387 < v36 - 1 && *(_WORD *)v386 == *(_WORD *)v387 )
              {
                v387 = (__int64 *)((char *)v387 + 2);
                v386 = (__int64 *)((char *)v386 + 2);
              }
              if ( v36 > (unsigned __int64)v387 )
                v387 = (__int64 *)((char *)v387 + (*(_BYTE *)v386 == *(_BYTE *)v387));
              v42 = (char *)v387 - v35;
LABEL_30:
              if ( v498 != &v42[v34 + 8] )
                goto LABEL_31;
              v400 = &v42[v35];
              if ( (unsigned __int64)v400 >= v500 )
              {
                v430 = v502;
                v431 = v400;
              }
              else
              {
                if ( *v502 != *(_QWORD *)v400 )
                {
                  _RCX = *v502 ^ *(_QWORD *)v400;
                  __asm { tzcnt   rcx, rcx }
                  v403 = (unsigned int)_RCX >> 3;
LABEL_640:
                  v42 += v403;
LABEL_31:
                  v43 = v42 + 8;
                  v44 = v22 + v493 - v10 - v33;
                  if ( (unsigned __int64)v6 < v19 )
                  {
                    v45 = v19;
                    if ( *(_BYTE *)(v34 - 1) != *(_BYTE *)(v19 - 1) )
                      goto LABEL_37;
                    do
                    {
                      --v45;
                      --v34;
                      v46 = &v42[v19 + 8 - v45];
                    }
                    while ( v45 > (unsigned __int64)v6 && v481 < v34 && *(_BYTE *)(v45 - 1) == *(_BYTE *)(v34 - 1) );
                    goto LABEL_36;
                  }
                  goto LABEL_430;
                }
                v431 = v400 + 8;
                v430 = v502 + 1;
                if ( v500 > (unsigned __int64)(v400 + 8) )
                {
                  v442 = *((_QWORD *)v400 + 1);
                  v443 = v502[1];
                  if ( v442 != v443 )
                  {
LABEL_737:
                    _RCX = v443 ^ v442;
                    __asm { tzcnt   rcx, rcx }
                    v403 = &v431[(unsigned int)_RCX >> 3] - v400;
                    goto LABEL_640;
                  }
                  while ( 1 )
                  {
                    v431 += 8;
                    ++v430;
                    if ( v500 <= (unsigned __int64)v431 )
                      break;
                    v443 = *v430;
                    v442 = *(_QWORD *)v431;
                    if ( *v430 != *(_QWORD *)v431 )
                      goto LABEL_737;
                  }
                }
              }
              if ( v431 < &v468[-1].m128i_i8[13] && *(_DWORD *)v430 == *(_DWORD *)v431 )
              {
                v431 += 4;
                v430 = (__int64 *)((char *)v430 + 4);
              }
              if ( v431 < &v468[-1].m128i_i8[15] && *(_WORD *)v430 == *(_WORD *)v431 )
              {
                v431 += 2;
                v430 = (__int64 *)((char *)v430 + 2);
              }
              if ( v468 > (const __m128i *)v431 && *(_BYTE *)v430 == *v431 )
                ++v431;
              v403 = v431 - v400;
              goto LABEL_640;
            }
          }
LABEL_13:
          if ( v10 >= v30 )
          {
            if ( (_BYTE)v24 != (_BYTE)v26
              || (v52 = v26 >> 8, v21 = v469 + v52, v481 >= v21)
              || *(_DWORD *)v21 != *(_DWORD *)v19 )
            {
LABEL_15:
              v19 += ((__int64)(v19 - (_QWORD)v6) >> 8) + 1;
              goto LABEL_16;
            }
            v30 = v506 + v52;
          }
          else
          {
            v21 = v466 + v30;
            if ( *(_DWORD *)v21 != *(_DWORD *)v19 )
              goto LABEL_15;
          }
          v45 = v19 + 1;
          v53 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)(v19 + 1)) >> v487;
          v54 = *(_DWORD *)(v479 + 4 * (v53 >> 8));
          v55 = (_DWORD *)(v474 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v19 + 1)) >> v477));
          v56 = (unsigned int)*v55;
          *v55 = v22 + 1;
          if ( v10 < (unsigned int)v56 )
          {
            v57 = (__int64 *)(v466 + v56);
            if ( *v57 != *(_QWORD *)(v19 + 1) )
              goto LABEL_49;
            v358 = v19 + 9;
            if ( v19 + 9 >= v500 )
            {
              v388 = v57 + 1;
              v389 = (char *)(v19 + 9);
            }
            else
            {
              v359 = v57[1];
              v360 = *(_QWORD *)(v19 + 9);
              if ( v359 != v360 )
              {
                _RAX = v360 ^ v359;
                __asm { tzcnt   rax, rax }
                v363 = (char *)((unsigned int)_RAX >> 3);
                goto LABEL_540;
              }
              v389 = (char *)(v19 + 17);
              v388 = v57 + 2;
              if ( v500 > v19 + 17 )
              {
                v412 = v57[2];
                v413 = *(_QWORD *)(v19 + 17);
                if ( v413 != v412 )
                {
LABEL_655:
                  _RCX = v412 ^ v413;
                  __asm { tzcnt   rcx, rcx }
                  v363 = &v389[((unsigned int)_RCX >> 3) - v358];
                  goto LABEL_540;
                }
                while ( 1 )
                {
                  v389 += 8;
                  ++v388;
                  if ( v500 <= (unsigned __int64)v389 )
                    break;
                  v412 = *v388;
                  v413 = *(_QWORD *)v389;
                  if ( *v388 != *(_QWORD *)v389 )
                    goto LABEL_655;
                }
              }
            }
            if ( v389 < &v468[-1].m128i_i8[13] && *(_DWORD *)v388 == *(_DWORD *)v389 )
            {
              v389 += 4;
              v388 = (__int64 *)((char *)v388 + 4);
            }
            if ( v389 < &v468[-1].m128i_i8[15] && *(_WORD *)v388 == *(_WORD *)v389 )
            {
              v389 += 2;
              v388 = (__int64 *)((char *)v388 + 2);
            }
            if ( v468 > (const __m128i *)v389 )
              v389 += *(_BYTE *)v388 == (unsigned __int8)*v389;
            v363 = &v389[-v358];
LABEL_540:
            v43 = v363 + 8;
            v44 = v45 - (_DWORD)v57;
            if ( v45 > (unsigned __int64)v6 && v502 < v57 && *(_BYTE *)v19 == *((_BYTE *)v57 - 1) )
            {
              do
              {
                --v45;
                v57 = (__int64 *)((char *)v57 - 1);
                v46 = &v363[v19 + 9 - v45];
              }
              while ( v45 > (unsigned __int64)v6 && v502 < v57 && *(_BYTE *)(v45 - 1) == *((_BYTE *)v57 - 1) );
LABEL_36:
              v43 = v46;
              goto LABEL_37;
            }
            goto LABEL_37;
          }
          if ( (_BYTE)v53 != (_BYTE)v54
            || (v125 = v54 >> 8, v126 = v469 + v125, v481 >= v126)
            || *(_QWORD *)v126 != *(_QWORD *)(v19 + 1) )
          {
LABEL_49:
            v58 = (_QWORD *)(v21 + 4);
            v59 = v19 + 4;
            if ( v10 > v30 )
            {
              v60 = v59 + v498 - (char *)v58;
              if ( (unsigned __int64)v468 < v60 )
                v60 = (unsigned __int64)v468;
              v61 = v60 - 7;
              if ( v60 - 7 <= v59 )
              {
                v205 = (__int64 *)(v21 + 4);
                v206 = (__int64 *)(v19 + 4);
              }
              else
              {
                v62 = *(_QWORD *)(v21 + 4);
                v63 = *(_QWORD *)(v19 + 4);
                if ( v62 != v63 )
                {
                  _RBP = v62 ^ v63;
                  __asm { tzcnt   rbp, rbp }
                  v66 = (char *)((unsigned int)_RBP >> 3);
                  goto LABEL_55;
                }
                v206 = (__int64 *)(v19 + 12);
                v205 = (__int64 *)(v21 + 12);
                if ( v61 > v19 + 12 )
                {
                  v252 = *(_QWORD *)(v21 + 12);
                  v253 = *(_QWORD *)(v19 + 12);
                  if ( v253 != v252 )
                  {
LABEL_365:
                    _RDX = v252 ^ v253;
                    __asm { tzcnt   rdx, rdx }
                    v66 = (char *)v206 + ((unsigned int)_RDX >> 3) - v59;
                    goto LABEL_55;
                  }
                  while ( 1 )
                  {
                    ++v206;
                    ++v205;
                    if ( v61 <= (unsigned __int64)v206 )
                      break;
                    v253 = *v205;
                    v252 = *v206;
                    if ( *v205 != *v206 )
                      goto LABEL_365;
                  }
                }
              }
              if ( (unsigned __int64)v206 < v60 - 3 && *(_DWORD *)v205 == *(_DWORD *)v206 )
              {
                v206 = (__int64 *)((char *)v206 + 4);
                v205 = (__int64 *)((char *)v205 + 4);
              }
              if ( (unsigned __int64)v206 < v60 - 1 && *(_WORD *)v205 == *(_WORD *)v206 )
              {
                v206 = (__int64 *)((char *)v206 + 2);
                v205 = (__int64 *)((char *)v205 + 2);
              }
              if ( v60 > (unsigned __int64)v206 )
                v206 = (__int64 *)((char *)v206 + (*(_BYTE *)v205 == *(_BYTE *)v206));
              v66 = (char *)v206 - v59;
LABEL_55:
              if ( v498 != (char *)v58 + (_QWORD)v66 )
              {
LABEL_56:
                v43 = v66 + 4;
                v44 = v22 - v30;
                if ( v481 < v21 && (unsigned __int64)v6 < v19 )
                {
                  v45 = v19;
                  if ( *(_BYTE *)(v19 - 1) == *(_BYTE *)(v21 - 1) )
                  {
                    do
                    {
                      --v45;
                      --v21;
                      v43 = &v66[v19 + 4 - v45];
                    }
                    while ( v45 > (unsigned __int64)v6 && v481 < v21 && *(_BYTE *)(v45 - 1) == *(_BYTE *)(v21 - 1) );
                  }
                  goto LABEL_37;
                }
LABEL_430:
                v45 = v19;
                goto LABEL_37;
              }
              v232 = &v66[v59];
              v233 = v502;
              if ( (unsigned __int64)v232 >= v500 )
              {
                v234 = v232;
                goto LABEL_323;
              }
              if ( *v502 == *(_QWORD *)v232 )
              {
                v234 = v232 + 8;
                v233 = v502 + 1;
                if ( v500 <= (unsigned __int64)(v232 + 8) )
                {
LABEL_323:
                  if ( v234 < &v468[-1].m128i_i8[13] && *(_DWORD *)v233 == *(_DWORD *)v234 )
                  {
                    v234 += 4;
                    v233 = (__int64 *)((char *)v233 + 4);
                  }
                  if ( v234 < &v468[-1].m128i_i8[15] && *(_WORD *)v233 == *(_WORD *)v234 )
                  {
                    v234 += 2;
                    v233 = (__int64 *)((char *)v233 + 2);
                  }
                  if ( v468 > (const __m128i *)v234 )
                    v234 += *(_BYTE *)v233 == (unsigned __int8)*v234;
                  v235 = v234 - v232;
                  goto LABEL_332;
                }
                v330 = v502[1];
                v331 = *((_QWORD *)v232 + 1);
                if ( v331 == v330 )
                {
                  do
                  {
                    v234 += 8;
                    ++v233;
                    if ( v500 <= (unsigned __int64)v234 )
                      goto LABEL_323;
                    v331 = *v233;
                    v330 = *(_QWORD *)v234;
                  }
                  while ( *v233 == *(_QWORD *)v234 );
                }
                _RDI = v330 ^ v331;
                __asm { tzcnt   rdi, rdi }
                v235 = &v234[(unsigned int)_RDI >> 3] - v232;
              }
              else
              {
                _RDX = *(_QWORD *)v232 ^ *v502;
                __asm { tzcnt   rdx, rdx }
                v235 = (unsigned int)_RDX >> 3;
              }
LABEL_332:
              v66 += v235;
              goto LABEL_56;
            }
            if ( v500 <= v59 )
            {
              v204 = (char *)(v19 + 4);
            }
            else
            {
              v147 = *(_QWORD *)(v21 + 4);
              v148 = *(_QWORD *)(v19 + 4);
              if ( v147 != v148 )
              {
                _RDX = v148 ^ v147;
                __asm { tzcnt   rdx, rdx }
                v151 = (char *)((unsigned int)_RDX >> 3);
                goto LABEL_156;
              }
              v204 = (char *)(v19 + 12);
              v58 = (_QWORD *)(v21 + 12);
              if ( v500 > v19 + 12 )
              {
                v256 = *(_QWORD *)(v21 + 12);
                v257 = *(_QWORD *)(v19 + 12);
                if ( v256 != v257 )
                {
LABEL_368:
                  _RDI = v257 ^ v256;
                  __asm { tzcnt   rdi, rdi }
                  v151 = &v204[((unsigned int)_RDI >> 3) - v59];
LABEL_156:
                  v43 = v151 + 4;
                  v44 = v19 - v21;
                  if ( (unsigned __int64)v6 >= v19 || (unsigned __int64)v502 >= v21 )
                    goto LABEL_430;
                  v45 = v19;
                  if ( *(_BYTE *)(v21 - 1) == *(_BYTE *)(v19 - 1) )
                  {
                    do
                    {
                      --v45;
                      --v21;
                      v43 = &v151[v19 + 4 - v45];
                    }
                    while ( v45 > (unsigned __int64)v6
                         && (unsigned __int64)v502 < v21
                         && *(_BYTE *)(v45 - 1) == *(_BYTE *)(v21 - 1) );
                  }
LABEL_37:
                  v47 = *(__m128i **)(v5 + 24);
                  v48 = v45 - (_QWORD)v6;
                  v49 = v468 - 2;
                  if ( v45 > (unsigned __int64)&v468[-2] )
                  {
                    sub_8F26C0(v47, v6, v45, v468 - 2);
                  }
                  else
                  {
                    *v47 = _mm_loadu_si128(v6);
                    if ( v48 <= 0x10 )
                    {
                      *(_QWORD *)(v5 + 24) += v48;
                      v50 = *(_QWORD *)(v5 + 8);
LABEL_40:
                      *(_WORD *)(v50 + 4) = v48;
                      **(_DWORD **)(v5 + 8) = v44 + 3;
                      v51 = *(_QWORD *)(v5 + 8);
                      if ( (unsigned __int64)(v43 - 3) > 0xFFFF )
                      {
                        *(_DWORD *)(v5 + 72) = 2;
                        *(_DWORD *)(v5 + 76) = (v51 - *(_QWORD *)v5) >> 3;
                      }
                      *(_WORD *)(v51 + 6) = (_WORD)v43 - 3;
                      *(_QWORD *)(v5 + 8) += 8LL;
                      v495 = v476;
                      v476 = v44;
LABEL_187:
                      v19 = (unsigned __int64)&v43[v45];
                      v6 = (const __m128i *)&v43[v45];
                      if ( v472 < (unsigned __int64)&v43[v45] )
                        goto LABEL_16;
                      v173 = v22 + 2;
                      v174 = v495;
                      *(_DWORD *)(v474 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v466 + v173)) >> v477)) = v173;
                      *(_DWORD *)(v474 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v19 - 2)) >> v477)) = v19 - 2 - v466;
                      *(_DWORD *)(v483 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v466 + v173)) >> v489)) = v173;
                      *(_DWORD *)(v483 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v19 - 1)) >> v489)) = v19 - 1 - v466;
                      while ( 1 )
                      {
                        v175 = v19 - v466;
                        v176 = v19 - v466 - v174;
                        v177 = v176 + v466;
                        if ( v10 > v176 )
                          v177 = v176 - (unsigned __int64)v506 + v469;
                        if ( v174 + v491 - v175 <= 2 || *(_DWORD *)v177 != *(_DWORD *)v19 )
                        {
                          v495 = v174;
                          v6 = (const __m128i *)v19;
                          goto LABEL_16;
                        }
                        v157 = v10 <= v176;
                        v312 = v177 + 4;
                        v313 = v19 + 4;
                        v314 = (char *)v468;
                        if ( !v157 )
                          v314 = v498;
                        v315 = (unsigned __int64)&v314[v313 - v312];
                        if ( (unsigned __int64)v468 < v315 )
                          v315 = (unsigned __int64)v468;
                        v316 = v315 - 7;
                        if ( v313 >= v315 - 7 )
                          break;
                        v317 = *(_QWORD *)(v177 + 4);
                        v318 = *(_QWORD *)(v19 + 4);
                        if ( v317 != v318 )
                        {
                          _RDI = v318 ^ v317;
                          __asm { tzcnt   rdi, rdi }
                          v321 = (char *)((unsigned int)_RDI >> 3);
                          goto LABEL_452;
                        }
                        v349 = (_QWORD *)(v19 + 12);
                        v348 = (_QWORD *)(v177 + 12);
                        if ( v316 <= v19 + 12 )
                          goto LABEL_516;
                        v496 = *(_QWORD *)(v177 + 12);
                        v378 = *(_QWORD *)(v19 + 12);
                        if ( v496 == v378 )
                        {
                          while ( 1 )
                          {
                            ++v349;
                            ++v348;
                            if ( v316 <= (unsigned __int64)v349 )
                              goto LABEL_516;
                            if ( *v348 != *v349 )
                            {
                              _RAX = *v349 ^ *v348;
                              goto LABEL_568;
                            }
                          }
                        }
                        _RAX = v496 ^ v378;
LABEL_568:
                        __asm { tzcnt   rax, rax }
                        v321 = (char *)v349 + ((unsigned int)_RAX >> 3) - v313;
LABEL_452:
                        if ( v314 != &v321[v312] )
                          goto LABEL_453;
                        v374 = &v321[v313];
                        if ( (unsigned __int64)v374 >= v500 )
                        {
                          v392 = v502;
                          v393 = v374;
LABEL_614:
                          if ( v393 < &v468[-1].m128i_i8[13] && *(_DWORD *)v392 == *(_DWORD *)v393 )
                          {
                            v393 += 4;
                            v392 = (__int64 *)((char *)v392 + 4);
                          }
                          if ( v393 < &v468[-1].m128i_i8[15] && *(_WORD *)v392 == *(_WORD *)v393 )
                          {
                            v393 += 2;
                            v392 = (__int64 *)((char *)v392 + 2);
                          }
                          if ( v468 > (const __m128i *)v393 )
                            v393 += *(_BYTE *)v392 == (unsigned __int8)*v393;
                          v377 = v393 - v374;
                          goto LABEL_564;
                        }
                        if ( *v502 == *(_QWORD *)v374 )
                        {
                          v393 = v374 + 8;
                          v392 = v502 + 1;
                          if ( v500 <= (unsigned __int64)(v374 + 8) )
                            goto LABEL_614;
                          v420 = v502[1];
                          v421 = *((_QWORD *)v374 + 1);
                          if ( v420 == v421 )
                          {
                            do
                            {
                              v393 += 8;
                              ++v392;
                              if ( v500 <= (unsigned __int64)v393 )
                                goto LABEL_614;
                              v420 = *v392;
                              v421 = *(_QWORD *)v393;
                            }
                            while ( *v392 == *(_QWORD *)v393 );
                          }
                          _RDX = v421 ^ v420;
                          __asm { tzcnt   rdx, rdx }
                          v377 = &v393[(unsigned int)_RDX >> 3] - v374;
                        }
                        else
                        {
                          _RAX = *(_QWORD *)v374 ^ *v502;
                          __asm { tzcnt   rax, rax }
                          v377 = (unsigned int)_RAX >> 3;
                        }
LABEL_564:
                        v321 += v377;
LABEL_453:
                        v322 = *(__m128i **)(v5 + 24);
                        if ( (unsigned __int64)v49 < v19 )
                          sub_8F26C0(v322, (const __m128i *)v19, v19, v49);
                        else
                          *v322 = _mm_loadu_si128((const __m128i *)v19);
                        *(_WORD *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
                        **(_DWORD **)(v5 + 8) = 1;
                        v323 = *(_QWORD *)(v5 + 8);
                        if ( (unsigned __int64)(v321 + 1) > 0xFFFF )
                        {
                          *(_DWORD *)(v5 + 72) = 2;
                          *(_DWORD *)(v5 + 76) = (v323 - *(_QWORD *)v5) >> 3;
                        }
                        *(_WORD *)(v323 + 6) = (_WORD)v321 + 1;
                        *(_QWORD *)(v5 + 8) += 8LL;
                        *(_DWORD *)(v483 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)v19) >> v489)) = v175;
                        v324 = 0xCF1BBCDCB7A56463LL * *(_QWORD *)v19;
                        v19 += (unsigned __int64)(v321 + 4);
                        *(_DWORD *)(v474 + 4 * (v324 >> v477)) = v175;
                        if ( v472 < v19 )
                        {
                          v436 = v476;
                          v6 = (const __m128i *)v19;
                          v476 = v174;
                          v495 = v436;
LABEL_16:
                          if ( v472 <= v19 )
                            goto LABEL_63;
                          goto LABEL_17;
                        }
                        v325 = v174;
                        v174 = v476;
                        v476 = v325;
                      }
                      v348 = (_QWORD *)(v177 + 4);
                      v349 = (_QWORD *)(v19 + 4);
LABEL_516:
                      if ( (unsigned __int64)v349 < v315 - 3 && *(_DWORD *)v348 == *(_DWORD *)v349 )
                      {
                        v349 = (_QWORD *)((char *)v349 + 4);
                        v348 = (_QWORD *)((char *)v348 + 4);
                      }
                      if ( (unsigned __int64)v349 < v315 - 1 && *(_WORD *)v348 == *(_WORD *)v349 )
                      {
                        v349 = (_QWORD *)((char *)v349 + 2);
                        v348 = (_QWORD *)((char *)v348 + 2);
                      }
                      if ( v315 > (unsigned __int64)v349 )
                        v349 = (_QWORD *)((char *)v349 + (*(_BYTE *)v348 == *(_BYTE *)v349));
                      v321 = (char *)v349 - v313;
                      goto LABEL_452;
                    }
                    v223 = *(__m128i **)(v5 + 24);
                    v223[1] = _mm_loadu_si128(v6 + 1);
                    if ( (__int64)(v48 - 16) > 16 )
                    {
                      v224 = &v223->m128i_i8[v48];
                      v225 = v6 + 2;
                      v226 = v223 + 2;
                      do
                      {
                        v227 = _mm_loadu_si128(v225);
                        v226 += 2;
                        v225 += 2;
                        v226[-2] = v227;
                        v226[-1] = _mm_loadu_si128(v225 - 1);
                      }
                      while ( v224 > (char *)v226 );
                    }
                  }
                  *(_QWORD *)(v5 + 24) += v48;
                  v50 = *(_QWORD *)(v5 + 8);
                  if ( v48 > 0xFFFF )
                  {
                    v214 = v50 - *(_QWORD *)v5;
                    *(_DWORD *)(v5 + 72) = 1;
                    *(_DWORD *)(v5 + 76) = v214 >> 3;
                  }
                  goto LABEL_40;
                }
                while ( 1 )
                {
                  v204 += 8;
                  ++v58;
                  if ( v500 <= (unsigned __int64)v204 )
                    break;
                  v256 = *v58;
                  v257 = *(_QWORD *)v204;
                  if ( *v58 != *(_QWORD *)v204 )
                    goto LABEL_368;
                }
              }
            }
            if ( v204 < &v468[-1].m128i_i8[13] && *(_DWORD *)v58 == *(_DWORD *)v204 )
            {
              v204 += 4;
              v58 = (_QWORD *)((char *)v58 + 4);
            }
            if ( v204 < &v468[-1].m128i_i8[15] && *(_WORD *)v58 == *(_WORD *)v204 )
            {
              v204 += 2;
              v58 = (_QWORD *)((char *)v58 + 2);
            }
            if ( v468 > (const __m128i *)v204 )
              v204 += *(_BYTE *)v58 == (unsigned __int8)*v204;
            v151 = &v204[-v59];
            goto LABEL_156;
          }
          v127 = v19 + 9;
          v128 = (unsigned __int64)&v498[v19 + 1 - v126];
          if ( (unsigned __int64)v468 < v128 )
            v128 = (unsigned __int64)v468;
          v129 = v128 - 7;
          v130 = v128;
          if ( v127 >= v128 - 7 )
          {
            v432 = (_QWORD *)(v126 + 8);
            v433 = (_QWORD *)(v19 + 9);
          }
          else
          {
            v131 = *(_QWORD *)(v126 + 8);
            v132 = *(_QWORD *)(v19 + 9);
            if ( v131 != v132 )
            {
              _RCX = v132 ^ v131;
              __asm { tzcnt   rcx, rcx }
              v135 = (char *)((unsigned int)_RCX >> 3);
              goto LABEL_131;
            }
            v433 = (_QWORD *)(v19 + 17);
            v432 = (_QWORD *)(v126 + 16);
            while ( v129 > (unsigned __int64)v433 )
            {
              if ( *v432 != *v433 )
              {
                _RAX = *v432 ^ *v433;
                __asm { tzcnt   rax, rax }
                v135 = (char *)v433 + ((unsigned int)_RAX >> 3) - v127;
                goto LABEL_131;
              }
              ++v433;
              ++v432;
            }
          }
          if ( (unsigned __int64)v433 < v130 - 3 && *(_DWORD *)v432 == *(_DWORD *)v433 )
          {
            v433 = (_QWORD *)((char *)v433 + 4);
            v432 = (_QWORD *)((char *)v432 + 4);
          }
          if ( (unsigned __int64)v433 < v130 - 1 && *(_WORD *)v432 == *(_WORD *)v433 )
          {
            v433 = (_QWORD *)((char *)v433 + 2);
            v432 = (_QWORD *)((char *)v432 + 2);
          }
          if ( v130 > (unsigned __int64)v433 && *(_BYTE *)v432 == *(_BYTE *)v433 )
            v433 = (_QWORD *)((char *)v433 + 1);
          v135 = (char *)v433 - v127;
LABEL_131:
          if ( v498 != &v135[v126 + 8] )
          {
LABEL_132:
            v43 = v135 + 8;
            v44 = v493 - v10 + v22 + 1 - v125;
            if ( v45 > (unsigned __int64)v6 && *(_BYTE *)(v126 - 1) == *(_BYTE *)v19 )
            {
              do
              {
                --v45;
                --v126;
                v43 = &v135[v19 + 9 - v45];
              }
              while ( v45 > (unsigned __int64)v6 && v481 < v126 && *(_BYTE *)(v45 - 1) == *(_BYTE *)(v126 - 1) );
            }
            goto LABEL_37;
          }
          v446 = &v135[v127];
          if ( (unsigned __int64)&v135[v127] >= v500 )
          {
            v458 = v502;
            v459 = v446;
          }
          else
          {
            if ( *v502 != *(_QWORD *)v446 )
            {
              _RCX = *(_QWORD *)v446 ^ *v502;
              __asm { tzcnt   rcx, rcx }
              v449 = (unsigned int)_RCX >> 3;
LABEL_744:
              v135 += v449;
              goto LABEL_132;
            }
            v459 = v446 + 8;
            v458 = v502 + 1;
            while ( v500 > (unsigned __int64)v459 )
            {
              if ( *v458 != *(_QWORD *)v459 )
              {
                _RAX = *v458 ^ *(_QWORD *)v459;
                __asm { tzcnt   rax, rax }
                v449 = &v459[(unsigned int)_RAX >> 3] - v446;
                goto LABEL_744;
              }
              v459 += 8;
              ++v458;
            }
          }
          if ( v459 < &v468[-1].m128i_i8[13] && *(_DWORD *)v458 == *(_DWORD *)v459 )
          {
            v459 += 4;
            v458 = (__int64 *)((char *)v458 + 4);
          }
          if ( v459 < &v468[-1].m128i_i8[15] && *(_WORD *)v458 == *(_WORD *)v459 )
          {
            v459 += 2;
            v458 = (__int64 *)((char *)v458 + 2);
          }
          if ( v468 > (const __m128i *)v459 && *(_BYTE *)v458 == *v459 )
            ++v459;
          v449 = v459 - v446;
          goto LABEL_744;
        }
        v20 = (__int64 *)(v466 + v28);
        if ( *v20 != *(_QWORD *)v19 )
          goto LABEL_13;
        v276 = v19 + 8;
        if ( v19 + 8 >= v500 )
        {
          v328 = v20 + 1;
          v329 = (char *)(v19 + 8);
        }
        else
        {
          v277 = v20[1];
          v278 = *(_QWORD *)(v19 + 8);
          if ( v277 != v278 )
          {
            _RDX = v278 ^ v277;
            __asm { tzcnt   rdx, rdx }
            v281 = (char *)((unsigned int)_RDX >> 3);
            goto LABEL_404;
          }
          v329 = (char *)(v19 + 16);
          v328 = v20 + 2;
          if ( v500 > v19 + 16 )
          {
            v354 = v20[2];
            v355 = *(_QWORD *)(v19 + 16);
            if ( v354 != v355 )
            {
LABEL_533:
              _RDI = v355 ^ v354;
              __asm { tzcnt   rdi, rdi }
              v281 = &v329[((unsigned int)_RDI >> 3) - v276];
LABEL_404:
              v43 = v281 + 8;
              v44 = v19 - (_DWORD)v20;
              if ( (unsigned __int64)v6 >= v19 || v502 >= v20 )
                goto LABEL_430;
              v45 = v19;
              if ( *(_BYTE *)(v19 - 1) == *((_BYTE *)v20 - 1) )
              {
                do
                {
                  --v45;
                  v20 = (__int64 *)((char *)v20 - 1);
                  v43 = &v281[v19 + 8 - v45];
                }
                while ( v45 > (unsigned __int64)v6 && v502 < v20 && *(_BYTE *)(v45 - 1) == *((_BYTE *)v20 - 1) );
              }
              goto LABEL_37;
            }
            while ( 1 )
            {
              v329 += 8;
              ++v328;
              if ( v500 <= (unsigned __int64)v329 )
                break;
              v354 = *v328;
              v355 = *(_QWORD *)v329;
              if ( *v328 != *(_QWORD *)v329 )
                goto LABEL_533;
            }
          }
        }
        if ( v329 < &v468[-1].m128i_i8[13] && *(_DWORD *)v328 == *(_DWORD *)v329 )
        {
          v329 += 4;
          v328 = (__int64 *)((char *)v328 + 4);
        }
        if ( v329 < &v468[-1].m128i_i8[15] && *(_WORD *)v328 == *(_WORD *)v329 )
        {
          v329 += 2;
          v328 = (__int64 *)((char *)v328 + 2);
        }
        if ( v468 > (const __m128i *)v329 )
          v329 += *(_BYTE *)v328 == (unsigned __int8)*v329;
        v281 = &v329[-v276];
        goto LABEL_404;
      }
      v157 = v10 <= (unsigned int)v31;
      v158 = v32 + 4;
      v159 = v19 + 5;
      v160 = (char *)v468;
      if ( !v157 )
        v160 = v498;
      v161 = (unsigned __int64)&v160[v159 - v158];
      if ( (unsigned __int64)v468 < v161 )
        v161 = (unsigned __int64)v468;
      v162 = v161 - 7;
      if ( v159 >= v161 - 7 )
      {
        v212 = (__int64 *)(v32 + 4);
        v213 = (__int64 *)(v19 + 5);
      }
      else
      {
        v163 = *(_QWORD *)(v32 + 4);
        v164 = *(_QWORD *)(v19 + 5);
        if ( v163 != v164 )
        {
          _RBP = v164 ^ v163;
          __asm { tzcnt   rbp, rbp }
          v167 = (char *)((unsigned int)_RBP >> 3);
          goto LABEL_180;
        }
        v213 = (__int64 *)(v19 + 13);
        v212 = (__int64 *)(v32 + 12);
        if ( v162 > v19 + 13 )
        {
          v264 = *(_QWORD *)(v32 + 12);
          v265 = *(_QWORD *)(v19 + 13);
          if ( v265 != v264 )
          {
LABEL_374:
            _RDX = v264 ^ v265;
            __asm { tzcnt   rdx, rdx }
            v167 = (char *)v213 + ((unsigned int)_RDX >> 3) - v159;
            goto LABEL_180;
          }
          while ( 1 )
          {
            ++v213;
            ++v212;
            if ( v162 <= (unsigned __int64)v213 )
              break;
            v265 = *v212;
            v264 = *v213;
            if ( *v212 != *v213 )
              goto LABEL_374;
          }
        }
      }
      if ( (unsigned __int64)v213 < v161 - 3 && *(_DWORD *)v212 == *(_DWORD *)v213 )
      {
        v213 = (__int64 *)((char *)v213 + 4);
        v212 = (__int64 *)((char *)v212 + 4);
      }
      if ( (unsigned __int64)v213 < v161 - 1 && *(_WORD *)v212 == *(_WORD *)v213 )
      {
        v213 = (__int64 *)((char *)v213 + 2);
        v212 = (__int64 *)((char *)v212 + 2);
      }
      if ( v161 > (unsigned __int64)v213 )
        v213 = (__int64 *)((char *)v213 + (*(_BYTE *)v212 == *(_BYTE *)v213));
      v167 = (char *)v213 - v159;
LABEL_180:
      if ( v160 != &v167[v158] )
        goto LABEL_181;
      v240 = &v167[v159];
      if ( (unsigned __int64)v240 >= v500 )
      {
        v241 = v502;
        v242 = v240;
        goto LABEL_347;
      }
      if ( *v502 == *(_QWORD *)v240 )
      {
        v242 = v240 + 8;
        v241 = v502 + 1;
        if ( v500 <= (unsigned __int64)(v240 + 8) )
        {
LABEL_347:
          if ( v242 < &v468[-1].m128i_i8[13] && *(_DWORD *)v241 == *(_DWORD *)v242 )
          {
            v242 += 4;
            v241 = (__int64 *)((char *)v241 + 4);
          }
          if ( v242 < &v468[-1].m128i_i8[15] && *(_WORD *)v241 == *(_WORD *)v242 )
          {
            v242 += 2;
            v241 = (__int64 *)((char *)v241 + 2);
          }
          if ( v468 > (const __m128i *)v242 )
            v242 += *(_BYTE *)v241 == (unsigned __int8)*v242;
          v243 = v242 - v240;
          goto LABEL_356;
        }
        v342 = *((_QWORD *)v240 + 1);
        v343 = v502[1];
        if ( v342 == v343 )
        {
          do
          {
            v242 += 8;
            ++v241;
            if ( v500 <= (unsigned __int64)v242 )
              goto LABEL_347;
            v342 = *v241;
            v343 = *(_QWORD *)v242;
          }
          while ( *v241 == *(_QWORD *)v242 );
        }
        _RDX = v343 ^ v342;
        __asm { tzcnt   rdx, rdx }
        v243 = &v242[(unsigned int)_RDX >> 3] - v240;
      }
      else
      {
        _RAX = *(_QWORD *)v240 ^ *v502;
        __asm { tzcnt   rax, rax }
        v243 = (unsigned int)_RAX >> 3;
      }
LABEL_356:
      v167 += v243;
LABEL_181:
      v45 = v19 + 1;
      v43 = v167 + 4;
      v168 = *(__m128i **)(v5 + 24);
      v49 = v468 - 2;
      v169 = v19 + 1 - (_QWORD)v6;
      if ( v45 > (unsigned __int64)&v468[-2] )
      {
        sub_8F26C0(v168, v6, v45, v468 - 2);
      }
      else
      {
        *v168 = _mm_loadu_si128(v6);
        if ( v169 <= 0x10 )
        {
          *(_QWORD *)(v5 + 24) += v169;
          v170 = *(_QWORD *)(v5 + 8);
LABEL_184:
          *(_WORD *)(v170 + 4) = v169;
          v171 = (unsigned __int64)(v167 + 1);
          **(_DWORD **)(v5 + 8) = 1;
          v172 = *(_QWORD *)(v5 + 8);
          if ( v171 > 0xFFFF )
          {
            *(_DWORD *)(v5 + 72) = 2;
            *(_DWORD *)(v5 + 76) = (v172 - *(_QWORD *)v5) >> 3;
          }
          *(_WORD *)(v172 + 6) = v171;
          *(_QWORD *)(v5 + 8) += 8LL;
          goto LABEL_187;
        }
        v293 = *(__m128i **)(v5 + 24);
        v293[1] = _mm_loadu_si128(v6 + 1);
        if ( (__int64)(v169 - 16) > 16 )
        {
          v294 = &v293->m128i_i8[v169];
          v295 = v6 + 2;
          v296 = v293 + 2;
          do
          {
            v297 = _mm_loadu_si128(v295);
            v296 += 2;
            v295 += 2;
            v296[-2] = v297;
            v296[-1] = _mm_loadu_si128(v295 - 1);
          }
          while ( v294 > (char *)v296 );
        }
      }
      *(_QWORD *)(v5 + 24) += v169;
      v170 = *(_QWORD *)(v5 + 8);
      if ( v169 > 0xFFFF )
      {
        v216 = v170 - *(_QWORD *)v5;
        *(_DWORD *)(v5 + 72) = 1;
        *(_DWORD *)(v5 + 76) = v216 >> 3;
      }
      goto LABEL_184;
    case 7:
      v67 = *(_QWORD *)(a1 + 8);
      v68 = *(_DWORD *)(a1 + 24);
      v475 = *(_QWORD *)(a1 + 112);
      v484 = *(_QWORD *)(a1 + 128);
      v69 = 1 << *(_DWORD *)(a1 + 256);
      v70 = a5 + (_DWORD)a4 - v67;
      v71 = v70 - v69;
      if ( v69 >= v70 - v68 )
        v71 = *(_DWORD *)(a1 + 24);
      if ( !*(_DWORD *)(a1 + 40) )
        v68 = v71;
      v468 = (const __m128i *)((char *)v6 + a5);
      v473 = (unsigned __int64)&v6->m128i_u64[-1] + a5;
      v503 = (__int64 *)(v67 + v68);
      v495 = a3[1];
      v72 = *(_QWORD *)(a1 + 248);
      v476 = *a3;
      v73 = *(_QWORD *)(v72 + 112);
      v486 = *(_QWORD *)(v72 + 128);
      v470 = *(_QWORD *)(v72 + 8);
      v482 = v470 + *(unsigned int *)(v72 + 24);
      v480 = v73;
      v494 = *(_QWORD *)v72 - v470;
      v74 = *(_DWORD *)(v72 + 264);
      v499 = *(char **)v72;
      v507 = v68 - v494;
      v75 = *(_DWORD *)(v72 + 260);
      v76 = *(_QWORD *)v72 - v482 + (_DWORD)v6 - (v67 + v68);
      if ( *(_DWORD *)(a1 + 296) )
      {
        v198 = 4LL << v75;
        if ( 4LL << v74 )
        {
          v199 = 0;
          do
          {
            _mm_prefetch((const char *)(v73 + v199), 2);
            v199 += 64LL;
          }
          while ( 4LL << v74 > v199 );
        }
        if ( v198 )
        {
          for ( j = 0; j < v198; j += 64LL )
            _mm_prefetch((const char *)(v486 + j), 2);
        }
      }
      v77 = (unsigned __int64)v6->m128i_u64 + (v76 == 0);
      if ( v473 > v77 )
      {
        v467 = *(_QWORD *)(a1 + 8);
        v492 = v68 - 1;
        v488 = 56 - v74;
        v505 = 56 - v75;
        v478 = 64 - *(_DWORD *)(a1 + 264);
        v490 = 64 - *(_DWORD *)(a1 + 260);
        v501 = (unsigned __int64)&v468[-1].m128i_u64[1] + 1;
        while ( 1 )
        {
          v80 = v77 - v467;
          v81 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v77) >> v488;
          v82 = (0xCF1BBCDCBFA56300LL * *(_QWORD *)v77) >> v505;
          v83 = *(_DWORD *)(v480 + 4 * (v81 >> 8));
          v84 = *(_DWORD *)(v486 + 4 * (v82 >> 8));
          v85 = (unsigned int *)(v475 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)v77) >> v478));
          v86 = *v85;
          v87 = (unsigned int *)(v484 + 4 * ((0xCF1BBCDCBFA56300LL * *(_QWORD *)v77) >> v490));
          v88 = *v87;
          v89 = (unsigned int)(v77 - v467 - v476 + 1);
          v90 = v467 + v89;
          if ( v68 > (unsigned int)v89 )
            v90 = v470 + (unsigned int)v89 + v494 - v68;
          *v87 = v80;
          *v85 = v80;
          if ( v492 - (unsigned int)v89 > 2 && *(_DWORD *)v90 == *(_DWORD *)(v77 + 1) )
          {
            v157 = v68 <= (unsigned int)v89;
            v178 = v90 + 4;
            v179 = v77 + 5;
            v180 = (char *)v468;
            if ( !v157 )
              v180 = v499;
            v181 = (unsigned __int64)&v180[v179 - v178];
            if ( (unsigned __int64)v468 < v181 )
              v181 = (unsigned __int64)v468;
            v182 = v181 - 7;
            if ( v179 >= v181 - 7 )
            {
              v210 = (__int64 *)(v90 + 4);
              v211 = (__int64 *)(v77 + 5);
            }
            else
            {
              v183 = *(_QWORD *)(v90 + 4);
              v184 = *(_QWORD *)(v77 + 5);
              if ( v183 != v184 )
              {
                _RBP = v184 ^ v183;
                __asm { tzcnt   rbp, rbp }
                v187 = (char *)((unsigned int)_RBP >> 3);
                goto LABEL_201;
              }
              v211 = (__int64 *)(v77 + 13);
              v210 = (__int64 *)(v90 + 12);
              if ( v182 > v77 + 13 )
              {
                v260 = *(_QWORD *)(v90 + 12);
                v261 = *(_QWORD *)(v77 + 13);
                if ( v260 != v261 )
                {
LABEL_371:
                  _RDX = v261 ^ v260;
                  __asm { tzcnt   rdx, rdx }
                  v187 = (char *)v211 + ((unsigned int)_RDX >> 3) - v179;
                  goto LABEL_201;
                }
                while ( 1 )
                {
                  ++v211;
                  ++v210;
                  if ( v182 <= (unsigned __int64)v211 )
                    break;
                  v260 = *v210;
                  v261 = *v211;
                  if ( *v210 != *v211 )
                    goto LABEL_371;
                }
              }
            }
            if ( (unsigned __int64)v211 < v181 - 3 && *(_DWORD *)v210 == *(_DWORD *)v211 )
            {
              v211 = (__int64 *)((char *)v211 + 4);
              v210 = (__int64 *)((char *)v210 + 4);
            }
            if ( (unsigned __int64)v211 < v181 - 1 && *(_WORD *)v210 == *(_WORD *)v211 )
            {
              v211 = (__int64 *)((char *)v211 + 2);
              v210 = (__int64 *)((char *)v210 + 2);
            }
            if ( v181 > (unsigned __int64)v211 )
              v211 = (__int64 *)((char *)v211 + (*(_BYTE *)v210 == *(_BYTE *)v211));
            v187 = (char *)v211 - v179;
LABEL_201:
            if ( v180 != &v187[v178] )
            {
LABEL_202:
              v103 = v77 + 1;
              v101 = v187 + 4;
              v188 = *(__m128i **)(v5 + 24);
              v107 = v468 - 2;
              v189 = v77 + 1 - (_QWORD)v6;
              if ( v103 > (unsigned __int64)&v468[-2] )
              {
                sub_8F26C0(v188, v6, v103, v468 - 2);
              }
              else
              {
                *v188 = _mm_loadu_si128(v6);
                if ( v189 <= 0x10 )
                {
                  *(_QWORD *)(v5 + 24) += v189;
                  v190 = *(_QWORD *)(v5 + 8);
LABEL_205:
                  *(_WORD *)(v190 + 4) = v189;
                  v191 = (unsigned __int64)(v187 + 1);
                  **(_DWORD **)(v5 + 8) = 1;
                  v192 = *(_QWORD *)(v5 + 8);
                  if ( v191 > 0xFFFF )
                  {
                    *(_DWORD *)(v5 + 72) = 2;
                    *(_DWORD *)(v5 + 76) = (v192 - *(_QWORD *)v5) >> 3;
                  }
                  *(_WORD *)(v192 + 6) = v191;
                  *(_QWORD *)(v5 + 8) += 8LL;
                  goto LABEL_208;
                }
                v288 = *(__m128i **)(v5 + 24);
                v288[1] = _mm_loadu_si128(v6 + 1);
                if ( (__int64)(v189 - 16) > 16 )
                {
                  v289 = &v288->m128i_i8[v189];
                  v290 = v6 + 2;
                  v291 = v288 + 2;
                  do
                  {
                    v292 = _mm_loadu_si128(v290);
                    v291 += 2;
                    v290 += 2;
                    v291[-2] = v292;
                    v291[-1] = _mm_loadu_si128(v290 - 1);
                  }
                  while ( v289 > (char *)v291 );
                }
              }
              *(_QWORD *)(v5 + 24) += v189;
              v190 = *(_QWORD *)(v5 + 8);
              if ( v189 > 0xFFFF )
              {
                v217 = v190 - *(_QWORD *)v5;
                *(_DWORD *)(v5 + 72) = 1;
                *(_DWORD *)(v5 + 76) = v217 >> 3;
              }
              goto LABEL_205;
            }
            v236 = &v187[v179];
            if ( (unsigned __int64)v236 >= v501 )
            {
              v237 = v503;
              v238 = v236;
              goto LABEL_335;
            }
            if ( *v503 == *(_QWORD *)v236 )
            {
              v238 = v236 + 8;
              v237 = v503 + 1;
              if ( v501 <= (unsigned __int64)(v236 + 8) )
                goto LABEL_335;
              v338 = *((_QWORD *)v236 + 1);
              v339 = v503[1];
              if ( v339 == v338 )
              {
                while ( 1 )
                {
                  v238 += 8;
                  ++v237;
                  if ( v501 <= (unsigned __int64)v238 )
                    break;
                  v339 = *v237;
                  v338 = *(_QWORD *)v238;
                  if ( *v237 != *(_QWORD *)v238 )
                    goto LABEL_493;
                }
LABEL_335:
                if ( v238 < &v468[-1].m128i_i8[13] && *(_DWORD *)v237 == *(_DWORD *)v238 )
                {
                  v238 += 4;
                  v237 = (__int64 *)((char *)v237 + 4);
                }
                if ( v238 < &v468[-1].m128i_i8[15] && *(_WORD *)v237 == *(_WORD *)v238 )
                {
                  v238 += 2;
                  v237 = (__int64 *)((char *)v237 + 2);
                }
                if ( v468 > (const __m128i *)v238 )
                  v238 += *(_BYTE *)v237 == (unsigned __int8)*v238;
                v239 = v238 - v236;
              }
              else
              {
LABEL_493:
                _RDX = v338 ^ v339;
                __asm { tzcnt   rdx, rdx }
                v239 = &v238[(unsigned int)_RDX >> 3] - v236;
              }
            }
            else
            {
              _RAX = *(_QWORD *)v236 ^ *v503;
              __asm { tzcnt   rax, rax }
              v239 = (unsigned int)_RAX >> 3;
            }
            v187 += v239;
            goto LABEL_202;
          }
          if ( v68 >= (unsigned int)v86 )
          {
            if ( (_BYTE)v81 == (_BYTE)v83 )
            {
              v91 = v83 >> 8;
              v92 = v470 + v91;
              if ( v482 < v92 && *(_QWORD *)v92 == *(_QWORD *)v77 )
              {
                v93 = v77 + 8;
                v94 = (unsigned __int64)&v499[v77 - v92];
                if ( (unsigned __int64)v468 < v94 )
                  v94 = (unsigned __int64)v468;
                v95 = v94 - 7;
                if ( v93 >= v94 - 7 )
                {
                  v384 = (__int64 *)(v92 + 8);
                  v385 = (__int64 *)(v77 + 8);
                }
                else
                {
                  v96 = *(_QWORD *)(v92 + 8);
                  v97 = *(_QWORD *)(v77 + 8);
                  if ( v96 != v97 )
                  {
                    _RDX = v97 ^ v96;
                    __asm { tzcnt   rdx, rdx }
                    v100 = (char *)((unsigned int)_RDX >> 3);
                    goto LABEL_90;
                  }
                  v385 = (__int64 *)(v77 + 16);
                  v384 = (__int64 *)(v92 + 16);
                  if ( v95 > v77 + 16 )
                  {
                    v408 = *(_QWORD *)(v92 + 16);
                    v409 = *(_QWORD *)(v77 + 16);
                    if ( v408 != v409 )
                    {
LABEL_649:
                      _RDX = v408 ^ v409;
                      __asm { tzcnt   rdx, rdx }
                      v100 = (char *)v385 + ((unsigned int)_RDX >> 3) - v93;
                      goto LABEL_90;
                    }
                    while ( 1 )
                    {
                      ++v385;
                      ++v384;
                      if ( v95 <= (unsigned __int64)v385 )
                        break;
                      v408 = *v384;
                      v409 = *v385;
                      if ( *v384 != *v385 )
                        goto LABEL_649;
                    }
                  }
                }
                if ( (unsigned __int64)v385 < v94 - 3 && *(_DWORD *)v384 == *(_DWORD *)v385 )
                {
                  v385 = (__int64 *)((char *)v385 + 4);
                  v384 = (__int64 *)((char *)v384 + 4);
                }
                if ( (unsigned __int64)v385 < v94 - 1 && *(_WORD *)v384 == *(_WORD *)v385 )
                {
                  v385 = (__int64 *)((char *)v385 + 2);
                  v384 = (__int64 *)((char *)v384 + 2);
                }
                if ( v94 > (unsigned __int64)v385 )
                  v385 = (__int64 *)((char *)v385 + (*(_BYTE *)v384 == *(_BYTE *)v385));
                v100 = (char *)v385 - v93;
LABEL_90:
                if ( v499 != &v100[v92 + 8] )
                {
LABEL_91:
                  v101 = v100 + 8;
                  v102 = v80 + v494 - v68 - v91;
                  if ( (unsigned __int64)v6 < v77 )
                  {
                    v103 = v77;
                    if ( *(_BYTE *)(v92 - 1) != *(_BYTE *)(v77 - 1) )
                      goto LABEL_97;
                    do
                    {
                      --v103;
                      --v92;
                      v104 = &v100[v77 + 8 - v103];
                    }
                    while ( v103 > (unsigned __int64)v6 && v482 < v92 && *(_BYTE *)(v103 - 1) == *(_BYTE *)(v92 - 1) );
                    goto LABEL_96;
                  }
LABEL_429:
                  v103 = v77;
                  goto LABEL_97;
                }
                v396 = &v100[v93];
                if ( (unsigned __int64)v396 >= v501 )
                {
                  v428 = v503;
                  v429 = v396;
                }
                else
                {
                  if ( *v503 != *(_QWORD *)v396 )
                  {
                    _RCX = *v503 ^ *(_QWORD *)v396;
                    __asm { tzcnt   rcx, rcx }
                    v399 = (unsigned int)_RCX >> 3;
LABEL_636:
                    v100 += v399;
                    goto LABEL_91;
                  }
                  v429 = v396 + 8;
                  v428 = v503 + 1;
                  if ( v501 > (unsigned __int64)(v396 + 8) )
                  {
                    v438 = *((_QWORD *)v396 + 1);
                    v439 = v503[1];
                    if ( v438 != v439 )
                    {
LABEL_731:
                      _RCX = v439 ^ v438;
                      __asm { tzcnt   rcx, rcx }
                      v399 = &v429[(unsigned int)_RCX >> 3] - v396;
                      goto LABEL_636;
                    }
                    while ( 1 )
                    {
                      v429 += 8;
                      ++v428;
                      if ( v501 <= (unsigned __int64)v429 )
                        break;
                      v439 = *v428;
                      v438 = *(_QWORD *)v429;
                      if ( *v428 != *(_QWORD *)v429 )
                        goto LABEL_731;
                    }
                  }
                }
                if ( v429 < &v468[-1].m128i_i8[13] && *(_DWORD *)v428 == *(_DWORD *)v429 )
                {
                  v429 += 4;
                  v428 = (__int64 *)((char *)v428 + 4);
                }
                if ( v429 < &v468[-1].m128i_i8[15] && *(_WORD *)v428 == *(_WORD *)v429 )
                {
                  v429 += 2;
                  v428 = (__int64 *)((char *)v428 + 2);
                }
                if ( v468 > (const __m128i *)v429 && *(_BYTE *)v428 == *v429 )
                  ++v429;
                v399 = v429 - v396;
                goto LABEL_636;
              }
            }
LABEL_73:
            if ( v68 >= v88 )
            {
              if ( (_BYTE)v82 != (_BYTE)v84
                || (v110 = v84 >> 8, v79 = v470 + v110, v482 >= v79)
                || *(_DWORD *)v79 != *(_DWORD *)v77 )
              {
LABEL_75:
                v77 += ((__int64)(v77 - (_QWORD)v6) >> 8) + 1;
                goto LABEL_76;
              }
              v88 = v507 + v110;
            }
            else
            {
              v79 = v467 + v88;
              if ( *(_DWORD *)v79 != *(_DWORD *)v77 )
                goto LABEL_75;
            }
            v103 = v77 + 1;
            v111 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)(v77 + 1)) >> v488;
            v112 = *(_DWORD *)(v480 + 4 * (v111 >> 8));
            v113 = (_DWORD *)(v475 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v77 + 1)) >> v478));
            v114 = (unsigned int)*v113;
            *v113 = v80 + 1;
            if ( v68 >= (unsigned int)v114 )
            {
              if ( (_BYTE)v111 == (_BYTE)v112 )
              {
                v136 = v112 >> 8;
                v137 = v470 + v136;
                if ( v482 < v137 && *(_QWORD *)v137 == *(_QWORD *)(v77 + 1) )
                {
                  v138 = v77 + 9;
                  v139 = (unsigned __int64)&v499[v77 + 1 - v137];
                  if ( (unsigned __int64)v468 < v139 )
                    v139 = (unsigned __int64)v468;
                  v140 = v139 - 7;
                  v141 = v139;
                  if ( v138 >= v139 - 7 )
                  {
                    v434 = (_QWORD *)(v137 + 8);
                    v435 = (_QWORD *)(v77 + 9);
                  }
                  else
                  {
                    v142 = *(_QWORD *)(v137 + 8);
                    v143 = *(_QWORD *)(v77 + 9);
                    if ( v142 != v143 )
                    {
                      _RCX = v143 ^ v142;
                      __asm { tzcnt   rcx, rcx }
                      v146 = (char *)((unsigned int)_RCX >> 3);
                      goto LABEL_146;
                    }
                    v435 = (_QWORD *)(v77 + 17);
                    v434 = (_QWORD *)(v137 + 16);
                    while ( v140 > (unsigned __int64)v435 )
                    {
                      if ( *v434 != *v435 )
                      {
                        _RAX = *v434 ^ *v435;
                        __asm { tzcnt   rax, rax }
                        v146 = (char *)v435 + ((unsigned int)_RAX >> 3) - v138;
                        goto LABEL_146;
                      }
                      ++v435;
                      ++v434;
                    }
                  }
                  if ( (unsigned __int64)v435 < v141 - 3 && *(_DWORD *)v434 == *(_DWORD *)v435 )
                  {
                    v435 = (_QWORD *)((char *)v435 + 4);
                    v434 = (_QWORD *)((char *)v434 + 4);
                  }
                  if ( (unsigned __int64)v435 < v141 - 1 && *(_WORD *)v434 == *(_WORD *)v435 )
                  {
                    v435 = (_QWORD *)((char *)v435 + 2);
                    v434 = (_QWORD *)((char *)v434 + 2);
                  }
                  if ( v141 > (unsigned __int64)v435 && *(_BYTE *)v434 == *(_BYTE *)v435 )
                    v435 = (_QWORD *)((char *)v435 + 1);
                  v146 = (char *)v435 - v138;
LABEL_146:
                  if ( v499 != &v146[v137 + 8] )
                  {
LABEL_147:
                    v101 = v146 + 8;
                    v102 = v494 - v68 + v80 + 1 - v136;
                    if ( v103 > (unsigned __int64)v6 && *(_BYTE *)(v137 - 1) == *(_BYTE *)v77 )
                    {
                      do
                      {
                        --v103;
                        --v137;
                        v101 = &v146[v77 + 9 - v103];
                      }
                      while ( v103 > (unsigned __int64)v6 && v482 < v137 && *(_BYTE *)(v103 - 1) == *(_BYTE *)(v137 - 1) );
                    }
                    goto LABEL_97;
                  }
                  v450 = &v146[v138];
                  if ( (unsigned __int64)&v146[v138] >= v501 )
                  {
                    v460 = v503;
                    v461 = v450;
                  }
                  else
                  {
                    if ( *v503 != *(_QWORD *)v450 )
                    {
                      _RCX = *(_QWORD *)v450 ^ *v503;
                      __asm { tzcnt   rcx, rcx }
                      v453 = (unsigned int)_RCX >> 3;
LABEL_748:
                      v146 += v453;
                      goto LABEL_147;
                    }
                    v461 = v450 + 8;
                    v460 = v503 + 1;
                    while ( v501 > (unsigned __int64)v461 )
                    {
                      if ( *v460 != *(_QWORD *)v461 )
                      {
                        _RAX = *v460 ^ *(_QWORD *)v461;
                        __asm { tzcnt   rax, rax }
                        v453 = &v461[(unsigned int)_RAX >> 3] - v450;
                        goto LABEL_748;
                      }
                      v461 += 8;
                      ++v460;
                    }
                  }
                  if ( v461 < &v468[-1].m128i_i8[13] && *(_DWORD *)v460 == *(_DWORD *)v461 )
                  {
                    v461 += 4;
                    v460 = (__int64 *)((char *)v460 + 4);
                  }
                  if ( v461 < &v468[-1].m128i_i8[15] && *(_WORD *)v460 == *(_WORD *)v461 )
                  {
                    v461 += 2;
                    v460 = (__int64 *)((char *)v460 + 2);
                  }
                  if ( v468 > (const __m128i *)v461 && *(_BYTE *)v460 == *v461 )
                    ++v461;
                  v453 = v461 - v450;
                  goto LABEL_748;
                }
              }
            }
            else
            {
              v115 = (__int64 *)(v467 + v114);
              if ( *v115 == *(_QWORD *)(v77 + 1) )
              {
                v364 = v77 + 9;
                if ( v77 + 9 >= v501 )
                {
                  v390 = v115 + 1;
                  v391 = (char *)(v77 + 9);
                }
                else
                {
                  v365 = v115[1];
                  v366 = *(_QWORD *)(v77 + 9);
                  if ( v365 != v366 )
                  {
                    _RAX = v366 ^ v365;
                    __asm { tzcnt   rax, rax }
                    v369 = (char *)((unsigned int)_RAX >> 3);
                    goto LABEL_550;
                  }
                  v391 = (char *)(v77 + 17);
                  v390 = v115 + 2;
                  if ( v501 > v77 + 17 )
                  {
                    v416 = v115[2];
                    v417 = *(_QWORD *)(v77 + 17);
                    if ( v416 != v417 )
                    {
LABEL_661:
                      _RCX = v416 ^ v417;
                      __asm { tzcnt   rcx, rcx }
                      v369 = &v391[((unsigned int)_RCX >> 3) - v364];
                      goto LABEL_550;
                    }
                    while ( 1 )
                    {
                      v391 += 8;
                      ++v390;
                      if ( v501 <= (unsigned __int64)v391 )
                        break;
                      v416 = *v390;
                      v417 = *(_QWORD *)v391;
                      if ( *v390 != *(_QWORD *)v391 )
                        goto LABEL_661;
                    }
                  }
                }
                if ( v391 < &v468[-1].m128i_i8[13] && *(_DWORD *)v390 == *(_DWORD *)v391 )
                {
                  v391 += 4;
                  v390 = (__int64 *)((char *)v390 + 4);
                }
                if ( v391 < &v468[-1].m128i_i8[15] && *(_WORD *)v390 == *(_WORD *)v391 )
                {
                  v391 += 2;
                  v390 = (__int64 *)((char *)v390 + 2);
                }
                if ( v468 > (const __m128i *)v391 )
                  v391 += *(_BYTE *)v390 == (unsigned __int8)*v391;
                v369 = &v391[-v364];
LABEL_550:
                v101 = v369 + 8;
                v102 = v103 - (_DWORD)v115;
                if ( v503 < v115 && v103 > (unsigned __int64)v6 && *((_BYTE *)v115 - 1) == *(_BYTE *)v77 )
                {
                  do
                  {
                    --v103;
                    v115 = (__int64 *)((char *)v115 - 1);
                    v104 = &v369[v77 + 9 - v103];
                  }
                  while ( v103 > (unsigned __int64)v6 && v503 < v115 && *(_BYTE *)(v103 - 1) == *((_BYTE *)v115 - 1) );
LABEL_96:
                  v101 = v104;
                  goto LABEL_97;
                }
                goto LABEL_97;
              }
            }
            v116 = (_QWORD *)(v79 + 4);
            v117 = v77 + 4;
            if ( v68 > v88 )
            {
              v118 = v117 + v499 - (char *)v116;
              if ( (unsigned __int64)v468 < v118 )
                v118 = (unsigned __int64)v468;
              v119 = v118 - 7;
              if ( v118 - 7 <= v117 )
              {
                v208 = (__int64 *)(v79 + 4);
                v209 = (__int64 *)(v77 + 4);
              }
              else
              {
                v120 = *(_QWORD *)(v79 + 4);
                v121 = *(_QWORD *)(v77 + 4);
                if ( v120 != v121 )
                {
                  _RBP = v120 ^ v121;
                  __asm { tzcnt   rbp, rbp }
                  v124 = (char *)((unsigned int)_RBP >> 3);
                  goto LABEL_115;
                }
                v209 = (__int64 *)(v77 + 12);
                v208 = (__int64 *)(v79 + 12);
                if ( v119 > v77 + 12 )
                {
                  v248 = *(_QWORD *)(v79 + 12);
                  v249 = *(_QWORD *)(v77 + 12);
                  if ( v248 != v249 )
                  {
LABEL_362:
                    _RDX = v249 ^ v248;
                    __asm { tzcnt   rdx, rdx }
                    v124 = (char *)v209 + ((unsigned int)_RDX >> 3) - v117;
                    goto LABEL_115;
                  }
                  while ( 1 )
                  {
                    ++v209;
                    ++v208;
                    if ( v119 <= (unsigned __int64)v209 )
                      break;
                    v248 = *v208;
                    v249 = *v209;
                    if ( *v208 != *v209 )
                      goto LABEL_362;
                  }
                }
              }
              if ( (unsigned __int64)v209 < v118 - 3 && *(_DWORD *)v208 == *(_DWORD *)v209 )
              {
                v209 = (__int64 *)((char *)v209 + 4);
                v208 = (__int64 *)((char *)v208 + 4);
              }
              if ( (unsigned __int64)v209 < v118 - 1 && *(_WORD *)v208 == *(_WORD *)v209 )
              {
                v209 = (__int64 *)((char *)v209 + 2);
                v208 = (__int64 *)((char *)v208 + 2);
              }
              if ( v118 > (unsigned __int64)v209 )
                v209 = (__int64 *)((char *)v209 + (*(_BYTE *)v208 == *(_BYTE *)v209));
              v124 = (char *)v209 - v117;
LABEL_115:
              if ( v499 != (char *)v116 + (_QWORD)v124 )
              {
LABEL_116:
                v101 = v124 + 4;
                v102 = v80 - v88;
                if ( (unsigned __int64)v6 >= v77 || v482 >= v79 )
                  goto LABEL_429;
                v103 = v77;
                if ( *(_BYTE *)(v77 - 1) == *(_BYTE *)(v79 - 1) )
                {
                  do
                  {
                    --v103;
                    --v79;
                    v101 = &v124[v77 + 4 - v103];
                  }
                  while ( v103 > (unsigned __int64)v6 && v482 < v79 && *(_BYTE *)(v103 - 1) == *(_BYTE *)(v79 - 1) );
                }
                goto LABEL_97;
              }
              v228 = &v124[v117];
              v229 = v503;
              if ( (unsigned __int64)v228 >= v501 )
              {
                v230 = v228;
                goto LABEL_311;
              }
              if ( *v503 == *(_QWORD *)v228 )
              {
                v230 = v228 + 8;
                v229 = v503 + 1;
                if ( v501 <= (unsigned __int64)(v228 + 8) )
                  goto LABEL_311;
                v334 = v503[1];
                v335 = *((_QWORD *)v228 + 1);
                if ( v335 == v334 )
                {
                  while ( 1 )
                  {
                    v230 += 8;
                    ++v229;
                    if ( v501 <= (unsigned __int64)v230 )
                      break;
                    v335 = *v229;
                    v334 = *(_QWORD *)v230;
                    if ( *v229 != *(_QWORD *)v230 )
                      goto LABEL_487;
                  }
LABEL_311:
                  if ( v230 < &v468[-1].m128i_i8[13] && *(_DWORD *)v229 == *(_DWORD *)v230 )
                  {
                    v230 += 4;
                    v229 = (__int64 *)((char *)v229 + 4);
                  }
                  if ( v230 < &v468[-1].m128i_i8[15] && *(_WORD *)v229 == *(_WORD *)v230 )
                  {
                    v230 += 2;
                    v229 = (__int64 *)((char *)v229 + 2);
                  }
                  if ( v468 > (const __m128i *)v230 )
                    v230 += *(_BYTE *)v229 == (unsigned __int8)*v230;
                  v231 = v230 - v228;
                }
                else
                {
LABEL_487:
                  _RDI = v334 ^ v335;
                  __asm { tzcnt   rdi, rdi }
                  v231 = &v230[(unsigned int)_RDI >> 3] - v228;
                }
              }
              else
              {
                _RDX = *(_QWORD *)v228 ^ *v503;
                __asm { tzcnt   rdx, rdx }
                v231 = (unsigned int)_RDX >> 3;
              }
              v124 += v231;
              goto LABEL_116;
            }
            if ( v501 <= v117 )
            {
              v207 = (char *)(v77 + 4);
            }
            else
            {
              v152 = *(_QWORD *)(v79 + 4);
              v153 = *(_QWORD *)(v77 + 4);
              if ( v152 != v153 )
              {
                _RDX = v153 ^ v152;
                __asm { tzcnt   rdx, rdx }
                v156 = (char *)((unsigned int)_RDX >> 3);
                goto LABEL_166;
              }
              v207 = (char *)(v77 + 12);
              v116 = (_QWORD *)(v79 + 12);
              if ( v501 > v77 + 12 )
              {
                v244 = *(_QWORD *)(v79 + 12);
                v245 = *(_QWORD *)(v77 + 12);
                if ( v245 != v244 )
                {
LABEL_359:
                  _RDI = v244 ^ v245;
                  __asm { tzcnt   rdi, rdi }
                  v156 = &v207[((unsigned int)_RDI >> 3) - v117];
LABEL_166:
                  v101 = v156 + 4;
                  v102 = v77 - v79;
                  if ( (unsigned __int64)v6 >= v77 || (unsigned __int64)v503 >= v79 )
                    goto LABEL_429;
                  v103 = v77;
                  if ( *(_BYTE *)(v79 - 1) == *(_BYTE *)(v77 - 1) )
                  {
                    do
                    {
                      --v103;
                      --v79;
                      v101 = &v156[v77 + 4 - v103];
                    }
                    while ( v103 > (unsigned __int64)v6
                         && (unsigned __int64)v503 < v79
                         && *(_BYTE *)(v103 - 1) == *(_BYTE *)(v79 - 1) );
                  }
                  goto LABEL_97;
                }
                while ( 1 )
                {
                  v207 += 8;
                  ++v116;
                  if ( v501 <= (unsigned __int64)v207 )
                    break;
                  v245 = *v116;
                  v244 = *(_QWORD *)v207;
                  if ( *v116 != *(_QWORD *)v207 )
                    goto LABEL_359;
                }
              }
            }
            if ( v207 < &v468[-1].m128i_i8[13] && *(_DWORD *)v116 == *(_DWORD *)v207 )
            {
              v207 += 4;
              v116 = (_QWORD *)((char *)v116 + 4);
            }
            if ( v207 < &v468[-1].m128i_i8[15] && *(_WORD *)v116 == *(_WORD *)v207 )
            {
              v207 += 2;
              v116 = (_QWORD *)((char *)v116 + 2);
            }
            if ( v468 > (const __m128i *)v207 )
              v207 += *(_BYTE *)v116 == (unsigned __int8)*v207;
            v156 = &v207[-v117];
            goto LABEL_166;
          }
          v78 = (__int64 *)(v467 + v86);
          if ( *v78 != *(_QWORD *)v77 )
            goto LABEL_73;
          v282 = v77 + 8;
          if ( v77 + 8 >= v501 )
            break;
          v283 = v78[1];
          v284 = *(_QWORD *)(v77 + 8);
          if ( v283 == v284 )
          {
            v327 = (char *)(v77 + 16);
            v326 = v78 + 2;
            if ( v501 <= v77 + 16 )
              goto LABEL_460;
            v350 = v78[2];
            v351 = *(_QWORD *)(v77 + 16);
            if ( v350 == v351 )
            {
              do
              {
                v327 += 8;
                ++v326;
                if ( v501 <= (unsigned __int64)v327 )
                  goto LABEL_460;
                v350 = *v326;
                v351 = *(_QWORD *)v327;
              }
              while ( *v326 == *(_QWORD *)v327 );
            }
            _RDI = v351 ^ v350;
            __asm { tzcnt   rdi, rdi }
            v287 = &v327[((unsigned int)_RDI >> 3) - v282];
          }
          else
          {
            _RDX = v284 ^ v283;
            __asm { tzcnt   rdx, rdx }
            v287 = (char *)((unsigned int)_RDX >> 3);
          }
LABEL_414:
          v101 = v287 + 8;
          v102 = v77 - (_DWORD)v78;
          if ( v503 >= v78 || (unsigned __int64)v6 >= v77 )
            goto LABEL_429;
          v103 = v77;
          if ( *((_BYTE *)v78 - 1) == *(_BYTE *)(v77 - 1) )
          {
            do
            {
              --v103;
              v78 = (__int64 *)((char *)v78 - 1);
              v101 = &v287[v77 + 8 - v103];
            }
            while ( v103 > (unsigned __int64)v6 && v503 < v78 && *(_BYTE *)(v103 - 1) == *((_BYTE *)v78 - 1) );
          }
LABEL_97:
          v105 = *(__m128i **)(v5 + 24);
          v106 = v103 - (_QWORD)v6;
          v107 = v468 - 2;
          if ( v103 > (unsigned __int64)&v468[-2] )
          {
            sub_8F26C0(v105, v6, v103, v468 - 2);
LABEL_293:
            *(_QWORD *)(v5 + 24) += v106;
            v108 = *(_QWORD *)(v5 + 8);
            if ( v106 > 0xFFFF )
            {
              v215 = v108 - *(_QWORD *)v5;
              *(_DWORD *)(v5 + 72) = 1;
              *(_DWORD *)(v5 + 76) = v215 >> 3;
            }
            goto LABEL_100;
          }
          *v105 = _mm_loadu_si128(v6);
          if ( v106 > 0x10 )
          {
            v218 = *(__m128i **)(v5 + 24);
            v218[1] = _mm_loadu_si128(v6 + 1);
            if ( (__int64)(v106 - 16) > 16 )
            {
              v219 = &v218->m128i_i8[v106];
              v220 = v6 + 2;
              v221 = v218 + 2;
              do
              {
                v222 = _mm_loadu_si128(v220);
                v221 += 2;
                v220 += 2;
                v221[-2] = v222;
                v221[-1] = _mm_loadu_si128(v220 - 1);
              }
              while ( v219 > (char *)v221 );
            }
            goto LABEL_293;
          }
          *(_QWORD *)(v5 + 24) += v106;
          v108 = *(_QWORD *)(v5 + 8);
LABEL_100:
          *(_WORD *)(v108 + 4) = v106;
          **(_DWORD **)(v5 + 8) = v102 + 3;
          v109 = *(_QWORD *)(v5 + 8);
          if ( (unsigned __int64)(v101 - 3) > 0xFFFF )
          {
            *(_DWORD *)(v5 + 72) = 2;
            *(_DWORD *)(v5 + 76) = (v109 - *(_QWORD *)v5) >> 3;
          }
          *(_WORD *)(v109 + 6) = (_WORD)v101 - 3;
          *(_QWORD *)(v5 + 8) += 8LL;
          v495 = v476;
          v476 = v102;
LABEL_208:
          v77 = (unsigned __int64)&v101[v103];
          v6 = (const __m128i *)&v101[v103];
          if ( v473 < (unsigned __int64)&v101[v103] )
            goto LABEL_76;
          v193 = v80 + 2;
          v194 = v495;
          *(_DWORD *)(v475 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v467 + v193)) >> v478)) = v193;
          *(_DWORD *)(v475 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v77 - 2)) >> v478)) = v77 - 2 - v467;
          *(_DWORD *)(v484 + 4 * ((0xCF1BBCDCBFA56300LL * *(_QWORD *)(v467 + v193)) >> v490)) = v193;
          *(_DWORD *)(v484 + 4 * ((0xCF1BBCDCBFA56300LL * *(_QWORD *)(v77 - 1)) >> v490)) = v77 - 1 - v467;
          while ( 1 )
          {
            v195 = v77 - v467;
            v196 = v77 - v467 - v194;
            v197 = (_DWORD *)(v196 + v467);
            if ( v68 > v196 )
              v197 = (_DWORD *)(v196 - (unsigned __int64)v507 + v470);
            if ( v194 + v492 - v195 <= 2 || *v197 != *(_DWORD *)v77 )
            {
              v495 = v194;
              v6 = (const __m128i *)v77;
              goto LABEL_76;
            }
            v157 = v68 <= v196;
            v298 = (char *)(v197 + 1);
            v299 = v77 + 4;
            v300 = (char *)v468;
            if ( !v157 )
              v300 = v499;
            v301 = v299 + v300 - v298;
            if ( (unsigned __int64)v468 < v301 )
              v301 = (unsigned __int64)v468;
            v302 = v301 - 7;
            if ( v299 >= v301 - 7 )
            {
              v346 = v197 + 1;
              v347 = (_DWORD *)(v77 + 4);
LABEL_505:
              if ( (unsigned __int64)v347 < v301 - 3 && *v346 == *v347 )
              {
                ++v347;
                ++v346;
              }
              if ( (unsigned __int64)v347 < v301 - 1 && *(_WORD *)v346 == *(_WORD *)v347 )
              {
                v347 = (_DWORD *)((char *)v347 + 2);
                v346 = (_DWORD *)((char *)v346 + 2);
              }
              if ( v301 > (unsigned __int64)v347 )
                v347 = (_DWORD *)((char *)v347 + (*(_BYTE *)v346 == *(_BYTE *)v347));
              v307 = (unsigned __int64)v347 - v299;
              goto LABEL_438;
            }
            v303 = *(_QWORD *)(v197 + 1);
            v304 = *(_QWORD *)(v77 + 4);
            if ( v303 != v304 )
            {
              _RDI = v304 ^ v303;
              __asm { tzcnt   rdi, rdi }
              v307 = (unsigned int)_RDI >> 3;
              goto LABEL_438;
            }
            v347 = (_DWORD *)(v77 + 12);
            v346 = v197 + 3;
            if ( v302 <= v77 + 12 )
              goto LABEL_505;
            v497 = *(_QWORD *)(v197 + 3);
            v381 = *(_QWORD *)(v77 + 12);
            if ( v381 == v497 )
            {
              while ( 1 )
              {
                v347 += 2;
                v346 += 2;
                if ( v302 <= (unsigned __int64)v347 )
                  goto LABEL_505;
                if ( *(_QWORD *)v346 != *(_QWORD *)v347 )
                {
                  _RAX = *(_QWORD *)v347 ^ *(_QWORD *)v346;
                  goto LABEL_572;
                }
              }
            }
            _RAX = v497 ^ v381;
LABEL_572:
            __asm { tzcnt   rax, rax }
            v307 = (unsigned __int64)v347 + ((unsigned int)_RAX >> 3) - v299;
LABEL_438:
            if ( v300 != &v298[v307] )
              goto LABEL_439;
            v370 = (char *)(v307 + v299);
            if ( (unsigned __int64)v370 >= v501 )
            {
              v394 = v503;
              v395 = v370;
LABEL_624:
              if ( v395 < &v468[-1].m128i_i8[13] && *(_DWORD *)v394 == *(_DWORD *)v395 )
              {
                v395 += 4;
                v394 = (__int64 *)((char *)v394 + 4);
              }
              if ( v395 < &v468[-1].m128i_i8[15] && *(_WORD *)v394 == *(_WORD *)v395 )
              {
                v395 += 2;
                v394 = (__int64 *)((char *)v394 + 2);
              }
              if ( v468 > (const __m128i *)v395 )
                v395 += *(_BYTE *)v394 == (unsigned __int8)*v395;
              v373 = v395 - v370;
              goto LABEL_560;
            }
            if ( *v503 == *(_QWORD *)v370 )
            {
              v395 = v370 + 8;
              v394 = v503 + 1;
              if ( v501 <= (unsigned __int64)(v370 + 8) )
                goto LABEL_624;
              v424 = v503[1];
              v425 = *((_QWORD *)v370 + 1);
              if ( v424 == v425 )
              {
                do
                {
                  v395 += 8;
                  ++v394;
                  if ( v501 <= (unsigned __int64)v395 )
                    goto LABEL_624;
                  v424 = *v394;
                  v425 = *(_QWORD *)v395;
                }
                while ( *v394 == *(_QWORD *)v395 );
              }
              _RDX = v425 ^ v424;
              __asm { tzcnt   rdx, rdx }
              v373 = &v395[(unsigned int)_RDX >> 3] - v370;
            }
            else
            {
              _RAX = *(_QWORD *)v370 ^ *v503;
              __asm { tzcnt   rax, rax }
              v373 = (unsigned int)_RAX >> 3;
            }
LABEL_560:
            v307 += v373;
LABEL_439:
            v308 = *(__m128i **)(v5 + 24);
            if ( v77 > (unsigned __int64)v107 )
              sub_8F26C0(v308, (const __m128i *)v77, v77, v107);
            else
              *v308 = _mm_loadu_si128((const __m128i *)v77);
            *(_WORD *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
            **(_DWORD **)(v5 + 8) = 1;
            v309 = *(_QWORD *)(v5 + 8);
            if ( v307 + 1 > 0xFFFF )
            {
              *(_DWORD *)(v5 + 72) = 2;
              *(_DWORD *)(v5 + 76) = (v309 - *(_QWORD *)v5) >> 3;
            }
            *(_WORD *)(v309 + 6) = v307 + 1;
            *(_QWORD *)(v5 + 8) += 8LL;
            *(_DWORD *)(v484 + 4 * ((0xCF1BBCDCBFA56300LL * *(_QWORD *)v77) >> v490)) = v195;
            v310 = 0xCF1BBCDCB7A56463LL * *(_QWORD *)v77;
            v77 += v307 + 4;
            *(_DWORD *)(v475 + 4 * (v310 >> v478)) = v195;
            if ( v473 < v77 )
              break;
            v311 = v194;
            v194 = v476;
            v476 = v311;
          }
          v437 = v476;
          v6 = (const __m128i *)v77;
          v476 = v194;
          v495 = v437;
LABEL_76:
          if ( v77 >= v473 )
            goto LABEL_63;
        }
        v326 = v78 + 1;
        v327 = (char *)(v77 + 8);
LABEL_460:
        if ( v327 < &v468[-1].m128i_i8[13] && *(_DWORD *)v326 == *(_DWORD *)v327 )
        {
          v327 += 4;
          v326 = (__int64 *)((char *)v326 + 4);
        }
        if ( v327 < &v468[-1].m128i_i8[15] && *(_WORD *)v326 == *(_WORD *)v327 )
        {
          v327 += 2;
          v326 = (__int64 *)((char *)v326 + 2);
        }
        if ( v468 > (const __m128i *)v327 )
          v327 += *(_BYTE *)v326 == (unsigned __int8)*v327;
        v287 = &v327[-v282];
        goto LABEL_414;
      }
LABEL_63:
      *a3 = v476;
      a3[1] = v495;
      return (char *)v468 - (char *)v6;
    case 5:
      return sub_8F2750(a1, v5, a3, a4, a5);
    default:
      return sub_8F4030(a1, v5, a3, a4, a5);
  }
}

