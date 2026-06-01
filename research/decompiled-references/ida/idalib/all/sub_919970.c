signed __int64 __fastcall sub_919970(__int64 a1, __int64 a2, unsigned int *a3, const __m128i *a4, __int64 a5)
{
  __int64 v5; // r11
  const __m128i *v7; // rbx
  __int64 v8; // r12
  int v9; // r9d
  int v10; // esi
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // r15d
  unsigned __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 v19; // r14
  __int64 v20; // r13
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rsi
  const __m128i *v26; // rax
  unsigned __int64 v27; // rdx
  _DWORD *v28; // r15
  __int64 v29; // rdx
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  char *v35; // r9
  unsigned __int64 v36; // r10
  char *v37; // r12
  __m128i *v38; // rdi
  unsigned __int64 v39; // rbp
  __int64 v40; // rax
  unsigned __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  int v45; // edi
  unsigned __int64 v46; // rbp
  unsigned int v47; // eax
  __int64 v48; // r14
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // rdi
  __int64 v51; // r8
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // r9
  __int64 v54; // rsi
  const __m128i *v55; // rax
  unsigned __int64 v56; // rdx
  _DWORD *v57; // r8
  __int64 v58; // rdx
  _QWORD *v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rsi
  char *v64; // r9
  unsigned __int64 v65; // r12
  char *v66; // r13
  __m128i *v67; // rdi
  unsigned __int64 v68; // r10
  __int64 v69; // rax
  unsigned __int64 v70; // r9
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rbp
  unsigned int v75; // eax
  __int64 v76; // r14
  unsigned __int64 v77; // r12
  unsigned __int64 v78; // rdi
  __int64 v79; // r8
  unsigned __int64 v80; // r10
  unsigned __int64 v81; // r9
  __int64 v82; // rsi
  const __m128i *v83; // rax
  unsigned __int64 v84; // rdx
  _DWORD *v85; // r8
  __int64 v86; // rdx
  _QWORD *v87; // rdx
  unsigned __int64 v88; // rax
  __int64 v89; // rsi
  char *v92; // r9
  unsigned __int64 v93; // r12
  char *v94; // r13
  __m128i *v95; // rdi
  unsigned __int64 v96; // r10
  __int64 v97; // rax
  unsigned __int64 v98; // r9
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // rbp
  unsigned int v103; // eax
  __int64 v104; // r14
  unsigned __int64 v105; // r12
  unsigned __int64 v106; // rdi
  __int64 v107; // r8
  unsigned __int64 v108; // r10
  unsigned __int64 v109; // r9
  __int64 v110; // rsi
  const __m128i *v111; // rax
  unsigned __int64 v112; // rdx
  _DWORD *v113; // r8
  __int64 v114; // rdx
  _QWORD *v115; // rdx
  unsigned __int64 v116; // rax
  __int64 v117; // rsi
  char *v120; // r9
  unsigned __int64 v121; // r12
  char *v122; // r13
  __m128i *v123; // rdi
  unsigned __int64 v124; // r10
  __int64 v125; // rax
  unsigned __int64 v126; // r9
  __int64 v127; // rax
  _QWORD *v128; // rax
  __int64 v129; // rax
  unsigned int v130; // eax
  unsigned int v132; // esi
  unsigned int v133; // r15d
  unsigned int v134; // eax
  __int64 v135; // rdx
  char *v136; // r9
  __int64 v137; // rdx
  char *v138; // r9
  __int64 v139; // rdx
  char *v140; // r9
  __int64 v141; // rdx
  char *v142; // r9
  unsigned __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rsi
  char *v146; // rdx
  const __m128i *v147; // r10
  __int64 v148; // rsi
  __int64 v149; // r12
  char *v152; // rdx
  unsigned __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rsi
  char *v156; // rdx
  const __m128i *v157; // r8
  __int64 v158; // r12
  __int64 v159; // rsi
  char *v162; // rdx
  unsigned __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rsi
  char *v166; // rdx
  const __m128i *v167; // r8
  __int64 v168; // r12
  __int64 v169; // rsi
  char *v172; // rdx
  unsigned __int64 v173; // rcx
  __int64 v174; // rdx
  __int64 v175; // rsi
  char *v176; // rdx
  const __m128i *v177; // r8
  __int64 v178; // r12
  __int64 v179; // rsi
  char *v182; // rdx
  unsigned __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rsi
  char *v186; // rax
  __int64 *v187; // r10
  __int64 v188; // r12
  __int64 v189; // rsi
  char *v192; // rax
  unsigned __int64 v193; // rcx
  __int64 v194; // rax
  __int64 v195; // rsi
  char *v196; // rax
  __int64 *v197; // r8
  __int64 v198; // r12
  __int64 v199; // rsi
  char *v202; // rax
  unsigned __int64 v203; // rcx
  __int64 v204; // rax
  __int64 v205; // rsi
  char *v206; // rax
  __int64 *v207; // r8
  __int64 v208; // rsi
  __int64 v209; // r12
  char *v212; // rax
  unsigned __int64 v213; // rcx
  __int64 v214; // rax
  __int64 v215; // rsi
  char *v216; // rax
  __int64 *v217; // r8
  __int64 v218; // r12
  __int64 v219; // rsi
  char *v222; // rax
  _QWORD *v223; // rcx
  __int64 v224; // rsi
  __int64 v225; // rdx
  _QWORD *v228; // rcx
  __int64 v229; // rdx
  __int64 v230; // rsi
  _QWORD *v233; // rcx
  __int64 v234; // rsi
  __int64 v235; // rdx
  _QWORD *v238; // rcx
  __int64 v239; // rdx
  __int64 v240; // rsi
  unsigned int v243; // r8d
  unsigned int v244; // r10d
  __m128i *v245; // rdi
  unsigned __int64 v246; // r9
  __int64 v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rdx
  unsigned int v250; // r15d
  __m128i *v251; // rdi
  unsigned __int64 v252; // r9
  __int64 v253; // rax
  __int64 v254; // rdx
  __int64 v255; // rdx
  unsigned int v256; // r8d
  unsigned int v257; // r10d
  __m128i *v258; // rdi
  unsigned __int64 v259; // r9
  __int64 v260; // rax
  __int64 v261; // rdx
  __int64 v262; // rdx
  unsigned int v263; // r8d
  unsigned int v264; // r10d
  __m128i *v265; // rdi
  unsigned __int64 v266; // r9
  __int64 v267; // rax
  __int64 v268; // rdx
  __int64 v269; // rdx
  __m128i *v286; // rax
  char *v287; // rdx
  const __m128i *v288; // rbx
  __m128i *v289; // rax
  __m128i v290; // xmm4
  __m128i *v291; // rax
  char *v292; // rdx
  const __m128i *v293; // rbx
  __m128i *v294; // rax
  __m128i v295; // xmm0
  __m128i *v296; // rax
  char *v297; // rdx
  const __m128i *v298; // rbx
  __m128i *v299; // rax
  __m128i v300; // xmm6
  __m128i *v301; // rax
  char *v302; // rdx
  const __m128i *v303; // rbx
  __m128i *v304; // rax
  __m128i v305; // xmm2
  __m128i *v306; // rax
  char *v307; // rdx
  const __m128i *v308; // rbx
  __m128i *v309; // rax
  __m128i v310; // xmm2
  __m128i *v311; // rax
  char *v312; // rdx
  const __m128i *v313; // rbx
  __m128i *v314; // rax
  __m128i v315; // xmm6
  __m128i *v316; // rax
  char *v317; // rdx
  const __m128i *v318; // rbx
  __m128i *v319; // rax
  __m128i v320; // xmm4
  __m128i *v321; // rax
  char *v322; // rdx
  const __m128i *v323; // rbx
  __m128i *v324; // rax
  __m128i v325; // xmm0
  unsigned __int64 v326; // r8
  __int64 v327; // rdx
  __int64 v328; // rcx
  char *v331; // rdx
  unsigned __int64 v332; // r10
  __int64 v333; // rdx
  __int64 v334; // rcx
  char *v337; // rdx
  unsigned __int64 v338; // r8
  __int64 v339; // rdx
  __int64 v340; // rcx
  char *v343; // rdx
  unsigned __int64 v344; // r8
  __int64 v345; // rdx
  __int64 v346; // rcx
  char *v349; // rdx
  const __m128i *v350; // rbp
  char *v351; // rcx
  const __m128i *v352; // rbp
  char *v353; // rcx
  const __m128i *v354; // rbp
  char *v355; // rcx
  const __m128i *v356; // rbp
  char *v357; // rcx
  unsigned int v358; // r10d
  unsigned __int64 v359; // rcx
  _QWORD *v360; // rax
  __int64 v361; // r9
  char *v364; // r9
  char *v365; // r13
  unsigned __int64 v366; // r9
  __int64 v367; // rdx
  unsigned int v368; // ebx
  unsigned int v369; // r10d
  unsigned __int64 v370; // rcx
  _QWORD *v371; // rax
  __int64 v372; // r9
  char *v375; // r9
  char *v376; // r13
  unsigned __int64 v377; // r9
  __int64 v378; // rdx
  unsigned int v379; // ebx
  unsigned int v380; // r10d
  unsigned __int64 v381; // rcx
  _QWORD *v382; // rax
  __int64 v383; // r9
  char *v386; // r9
  char *v387; // r13
  unsigned __int64 v388; // r9
  __int64 v389; // rdx
  unsigned int v390; // ebx
  unsigned __int64 v391; // rcx
  _QWORD *v392; // rdx
  __int64 v393; // rsi
  char *v396; // r9
  char *v397; // r10
  __int64 v398; // rdx
  unsigned int v399; // ebx
  __int64 v400; // rsi
  __int64 v401; // rdx
  __int64 v404; // rsi
  __int64 v405; // rdx
  __int64 v408; // rsi
  __int64 v409; // rdx
  __int64 v412; // rsi
  __int64 v413; // rdx
  char *v416; // rax
  char *v417; // rsi
  char *v418; // rsi
  char *v419; // rsi
  _QWORD *v420; // rdi
  __int64 v421; // rdx
  __int64 v422; // rax
  _QWORD *v425; // rdi
  __int64 v426; // rdx
  __int64 v427; // rax
  _QWORD *v430; // rdi
  __int64 v431; // rax
  __int64 v432; // rdx
  _QWORD *v435; // rsi
  __int64 v436; // r8
  __int64 v437; // rdx
  unsigned int v440; // edx
  unsigned int v441; // esi
  unsigned int v442; // edx
  unsigned int v443; // edx
  unsigned int v444; // ebx
  __int64 v445; // [rsp+8h] [rbp-C0h]
  int v446; // [rsp+10h] [rbp-B8h]
  unsigned int v447; // [rsp+14h] [rbp-B4h]
  unsigned int v448; // [rsp+14h] [rbp-B4h]
  unsigned __int64 v450; // [rsp+20h] [rbp-A8h]
  unsigned int v451; // [rsp+20h] [rbp-A8h]
  unsigned int v452; // [rsp+20h] [rbp-A8h]
  unsigned int v453; // [rsp+20h] [rbp-A8h]
  unsigned int v454; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v455; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v456; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v457; // [rsp+28h] [rbp-A0h]
  __int64 v458; // [rsp+30h] [rbp-98h]
  unsigned __int64 v459; // [rsp+30h] [rbp-98h]
  __int8 *v460; // [rsp+38h] [rbp-90h]
  char v461; // [rsp+38h] [rbp-90h]
  char v462; // [rsp+38h] [rbp-90h]
  char v463; // [rsp+38h] [rbp-90h]
  char v464; // [rsp+40h] [rbp-88h]
  bool v465; // [rsp+40h] [rbp-88h]
  unsigned __int64 v466; // [rsp+40h] [rbp-88h]
  unsigned __int64 v467; // [rsp+40h] [rbp-88h]
  unsigned __int64 v468; // [rsp+40h] [rbp-88h]
  unsigned int v469; // [rsp+48h] [rbp-80h]
  __int8 *v470; // [rsp+48h] [rbp-80h]
  int v471; // [rsp+48h] [rbp-80h]
  int v472; // [rsp+50h] [rbp-78h]
  char v473; // [rsp+50h] [rbp-78h]
  int v474; // [rsp+54h] [rbp-74h]
  char v475; // [rsp+54h] [rbp-74h]
  char v476; // [rsp+54h] [rbp-74h]
  char v477; // [rsp+54h] [rbp-74h]
  const __m128i *v478; // [rsp+58h] [rbp-70h]
  unsigned int v479; // [rsp+58h] [rbp-70h]
  int v480; // [rsp+58h] [rbp-70h]
  unsigned int v481; // [rsp+58h] [rbp-70h]
  int v482; // [rsp+58h] [rbp-70h]
  unsigned int v483; // [rsp+58h] [rbp-70h]
  int v484; // [rsp+58h] [rbp-70h]
  unsigned int v485; // [rsp+58h] [rbp-70h]
  int v486; // [rsp+60h] [rbp-68h]
  int v487; // [rsp+60h] [rbp-68h]
  int v488; // [rsp+60h] [rbp-68h]
  unsigned int v489; // [rsp+68h] [rbp-60h]
  const __m128i *v490; // [rsp+68h] [rbp-60h]
  const __m128i *v491; // [rsp+68h] [rbp-60h]
  const __m128i *v492; // [rsp+68h] [rbp-60h]
  unsigned int v493; // [rsp+70h] [rbp-58h]
  const __m128i *v494; // [rsp+78h] [rbp-50h]
  unsigned int v495; // [rsp+78h] [rbp-50h]
  char v496; // [rsp+80h] [rbp-48h]
  unsigned int v497; // [rsp+80h] [rbp-48h]
  char v498; // [rsp+87h] [rbp-41h]
  const __m128i *v499; // [rsp+88h] [rbp-40h]
  const __m128i *v500; // [rsp+88h] [rbp-40h]
  const __m128i *v501; // [rsp+88h] [rbp-40h]

  v5 = a2;
  v7 = a4;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 272);
  v10 = *(_DWORD *)(a1 + 40);
  v458 = *(_QWORD *)(a1 + 112);
  v11 = *(_DWORD *)(a1 + 24);
  v472 = *(_DWORD *)(a1 + 264);
  v445 = *(_QWORD *)(a1 + 128);
  v446 = *(_DWORD *)(a1 + 260);
  v12 = a5 + (_DWORD)a4 - v8;
  v13 = 1 << *(_DWORD *)(a1 + 256);
  v14 = v12 - v11;
  v15 = v12 - v13;
  if ( v13 >= v14 )
    v15 = v11;
  switch ( v9 )
  {
    case 6:
      v453 = v15;
      v470 = &v7->m128i_i8[a5];
      v457 = (unsigned __int64)&v7->m128i_u64[-1] + a5;
      v448 = *a3;
      v479 = a3[1];
      if ( v10 )
      {
        v453 = v11;
        v501 = (const __m128i *)(v8 + v11);
        v102 = (unsigned __int64)v7->m128i_u64 + (v7 == v501);
        v103 = (_DWORD)v7 + (v7 == v501) - v8 - v11;
      }
      else
      {
        v501 = (const __m128i *)(v8 + v15);
        v102 = (unsigned __int64)v7->m128i_u64 + (v7 == v501);
        v103 = (_DWORD)v7 + (v7 == v501) - v8 - v11;
        if ( v103 > v13 )
          v103 = v13;
      }
      v497 = 0;
      if ( v479 > v103 )
      {
        v497 = a3[1];
        v479 = 0;
      }
      if ( v448 <= v103 )
      {
        v498 = 0;
        v495 = 0;
      }
      else
      {
        v495 = *a3;
        v498 = 1;
        v448 = 0;
      }
      v104 = v8;
      v492 = (const __m128i *)(v470 - 32);
LABEL_115:
      v463 = 64 - v472;
      while ( 1 )
      {
        v105 = v102 + 256;
        v106 = v102 + 1;
        v465 = v448 != 0;
        if ( v102 + 1 > v457 )
          break;
        v107 = *(_QWORD *)v102;
        v108 = 1;
        v109 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v102) >> v463;
        v110 = *(unsigned int *)(v458 + 4 * v109);
        v477 = 64 - v446;
        v111 = (const __m128i *)(v104 + v110);
        while ( 1 )
        {
          v113 = (_DWORD *)(v445 + 4 * ((0xCF1BBCDCBF9B0000LL * v107) >> v477));
          v114 = (unsigned int)*v113;
          v488 = v102 - v104;
          *v113 = v102 - v104;
          *(_DWORD *)(v458 + 4 * v109) = v102 - v104;
          if ( *(_DWORD *)(v102 + 1LL - v448) == *(_DWORD *)(v102 + 1) && v448 )
          {
            v115 = (_QWORD *)(v102 - v448 + 5);
            v116 = v102 + 5;
            v468 = (unsigned __int64)(v470 - 7);
            if ( v102 + 5 >= (unsigned __int64)(v470 - 7) )
            {
              v140 = (char *)(v102 + 5);
            }
            else
            {
              v117 = *(_QWORD *)(v102 + 5);
              if ( *v115 != v117 )
              {
                _RCX = v117 ^ *v115;
                __asm { tzcnt   r9, rcx }
                v120 = (char *)((unsigned int)_R9 >> 3);
                goto LABEL_131;
              }
              v140 = (char *)(v102 + 13);
              v223 = (_QWORD *)(v102 - v448 + 13);
              if ( v468 > v102 + 13 )
              {
                v224 = *(_QWORD *)(v102 - v448 + 13);
                v225 = *(_QWORD *)(v102 + 13);
                if ( v225 != v224 )
                {
LABEL_271:
                  _RDX = v224 ^ v225;
                  __asm { tzcnt   rdx, rdx }
                  v120 = &v140[((unsigned int)_RDX >> 3) - v116];
                  goto LABEL_131;
                }
                while ( 1 )
                {
                  v140 += 8;
                  ++v223;
                  if ( v468 <= (unsigned __int64)v140 )
                    break;
                  v225 = *v223;
                  v224 = *(_QWORD *)v140;
                  if ( *v223 != *(_QWORD *)v140 )
                    goto LABEL_271;
                }
              }
              v115 = v223;
            }
            if ( v140 < v470 - 3 && *(_DWORD *)v115 == *(_DWORD *)v140 )
            {
              v140 += 4;
              v115 = (_QWORD *)((char *)v115 + 4);
            }
            if ( v140 < v470 - 1 && *(_WORD *)v115 == *(_WORD *)v140 )
            {
              v140 += 2;
              v115 = (_QWORD *)((char *)v115 + 2);
            }
            if ( v140 < v470 )
              v140 += *(_BYTE *)v115 == (unsigned __int8)*v140;
            v120 = &v140[-v116];
LABEL_131:
            v121 = v102 + 1;
            v122 = v120 + 4;
            v123 = *(__m128i **)(v5 + 24);
            v124 = v102 + 1 - (_QWORD)v7;
            if ( v102 + 1 > (unsigned __int64)v492 )
            {
              sub_916400(v123, v7, v102 + 1, v492);
            }
            else
            {
              *v123 = _mm_loadu_si128(v7);
              if ( v124 <= 0x10 )
              {
                *(_QWORD *)(v5 + 24) += v124;
                v125 = *(_QWORD *)(v5 + 8);
LABEL_134:
                *(_WORD *)(v125 + 4) = v124;
                v126 = (unsigned __int64)(v120 + 1);
                **(_DWORD **)(v5 + 8) = 1;
                v127 = *(_QWORD *)(v5 + 8);
                if ( v126 > 0xFFFF )
                {
                  *(_DWORD *)(v5 + 72) = 2;
                  *(_DWORD *)(v5 + 76) = (v127 - *(_QWORD *)v5) >> 3;
                }
                *(_WORD *)(v127 + 6) = v126;
                *(_QWORD *)(v5 + 8) += 8LL;
                goto LABEL_137;
              }
              v286 = *(__m128i **)(v5 + 24);
              v286[1] = _mm_loadu_si128(v7 + 1);
              if ( (__int64)(v124 - 16) > 16 )
              {
                v287 = &v286->m128i_i8[v124];
                v288 = v7 + 2;
                v289 = v286 + 2;
                do
                {
                  v290 = _mm_loadu_si128(v288);
                  v289 += 2;
                  v288 += 2;
                  v289[-2] = v290;
                  v289[-1] = _mm_loadu_si128(v288 - 1);
                }
                while ( v287 > (char *)v289 );
              }
            }
            *(_QWORD *)(v5 + 24) += v124;
            v125 = *(_QWORD *)(v5 + 8);
            if ( v124 > 0xFFFF )
            {
              v139 = v125 - *(_QWORD *)v5;
              *(_DWORD *)(v5 + 72) = 1;
              *(_DWORD *)(v5 + 76) = v139 >> 3;
            }
            goto LABEL_134;
          }
          v107 = *(_QWORD *)v106;
          v109 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v106) >> v463;
          if ( (unsigned int)v110 > v453 && v111->m128i_i64[0] == *(_QWORD *)v102 )
            break;
          v110 = *(unsigned int *)(v458 + 4 * v109);
          v111 = (const __m128i *)(v104 + v110);
          if ( (unsigned int)v114 > v453 )
          {
            v112 = v104 + v114;
            if ( *(_DWORD *)v112 == *(_DWORD *)v102 )
            {
              v468 = (unsigned __int64)(v470 - 7);
              if ( (unsigned int)v110 <= v453 || v111->m128i_i64[0] != v107 )
              {
                v213 = v102 + 4;
                if ( v102 + 4 >= v468 )
                {
                  v217 = (__int64 *)(v112 + 4);
                  v216 = (char *)(v102 + 4);
                }
                else
                {
                  v214 = *(_QWORD *)(v112 + 4);
                  v215 = *(_QWORD *)(v102 + 4);
                  if ( v214 != v215 )
                  {
                    _RAX = v215 ^ v214;
                    __asm { tzcnt   rax, rax }
                    v222 = (char *)((unsigned int)_RAX >> 3);
                    goto LABEL_407;
                  }
                  v216 = (char *)(v102 + 12);
                  v217 = (__int64 *)(v112 + 12);
                  if ( v102 + 12 < v468 )
                  {
                    v218 = *(_QWORD *)(v112 + 12);
                    v219 = *(_QWORD *)(v102 + 12);
                    if ( v219 != v218 )
                    {
LABEL_268:
                      _RSI = v218 ^ v219;
                      __asm { tzcnt   rsi, rsi }
                      v222 = &v216[((unsigned int)_RSI >> 3) - v213];
                      goto LABEL_407;
                    }
                    while ( 1 )
                    {
                      v216 += 8;
                      ++v217;
                      if ( (unsigned __int64)v216 >= v468 )
                        break;
                      v219 = *v217;
                      v218 = *(_QWORD *)v216;
                      if ( *v217 != *(_QWORD *)v216 )
                        goto LABEL_268;
                    }
                  }
                }
                if ( v216 < v470 - 3 && *(_DWORD *)v217 == *(_DWORD *)v216 )
                {
                  v216 += 4;
                  v217 = (__int64 *)((char *)v217 + 4);
                }
                if ( v216 < v470 - 1 && *(_WORD *)v217 == *(_WORD *)v216 )
                {
                  v216 += 2;
                  v217 = (__int64 *)((char *)v217 + 2);
                }
                if ( v216 < v470 )
                  v216 += *(_BYTE *)v217 == (unsigned __int8)*v216;
                v222 = &v216[-v213];
LABEL_407:
                v122 = v222 + 4;
                v256 = v102 - v112;
                if ( v102 > (unsigned __int64)v7 && v112 > (unsigned __int64)v501 )
                {
                  v121 = v102;
                  if ( *(_BYTE *)(v102 - 1) == *(_BYTE *)(v112 - 1) )
                  {
                    v482 = v106;
                    do
                    {
                      --v121;
                      --v112;
                      v122 = &v222[v102 + 4 - v121];
                    }
                    while ( (unsigned __int64)v7 < v121
                         && v112 > (unsigned __int64)v501
                         && *(_BYTE *)(v121 - 1) == *(_BYTE *)(v112 - 1) );
                    goto LABEL_356;
                  }
                  goto LABEL_357;
                }
LABEL_545:
                v121 = v102;
                goto LABEL_357;
              }
              v338 = v106 + 8;
              if ( v106 + 8 >= v468 )
              {
                v352 = (const __m128i *)&v111->m128i_u64[1];
                v353 = (char *)(v106 + 8);
              }
              else
              {
                v339 = v111->m128i_i64[1];
                v340 = *(_QWORD *)(v106 + 8);
                if ( v339 != v340 )
                {
                  _RDX = v340 ^ v339;
                  __asm { tzcnt   rdx, rdx }
                  v343 = (char *)((unsigned int)_RDX >> 3);
LABEL_572:
                  v122 = v343 + 8;
                  v256 = v106 - (_DWORD)v111;
                  if ( (unsigned __int64)v7 >= v106 || v111 <= v501 )
                  {
                    v121 = v106;
                  }
                  else
                  {
                    v121 = v106;
                    if ( v111[-1].m128i_i8[15] == *(_BYTE *)(v106 - 1) )
                    {
                      do
                      {
                        --v121;
                        v111 = (const __m128i *)((char *)v111 - 1);
                      }
                      while ( (unsigned __int64)v7 < v121
                           && v111 > v501
                           && *(_BYTE *)(v121 - 1) == v111[-1].m128i_i8[15] );
                      v122 = &v343[v106 + 8 - v121];
                    }
                  }
                  goto LABEL_357;
                }
                v353 = (char *)(v106 + 16);
                v352 = v111 + 1;
                if ( v106 + 16 < v468 )
                {
                  v400 = v111[1].m128i_i64[0];
                  v401 = *(_QWORD *)(v106 + 16);
                  if ( v400 != v401 )
                  {
LABEL_678:
                    _RDX = v400 ^ v401;
                    __asm { tzcnt   rdx, rdx }
                    v343 = &v353[((unsigned int)_RDX >> 3) - v338];
                    goto LABEL_572;
                  }
                  while ( 1 )
                  {
                    v353 += 8;
                    v352 = (const __m128i *)((char *)v352 + 8);
                    if ( (unsigned __int64)v353 >= v468 )
                      break;
                    v400 = v352->m128i_i64[0];
                    v401 = *(_QWORD *)v353;
                    if ( v352->m128i_i64[0] != *(_QWORD *)v353 )
                      goto LABEL_678;
                  }
                }
              }
              if ( v353 < v470 - 3 && v352->m128i_i32[0] == *(_DWORD *)v353 )
              {
                v353 += 4;
                v352 = (const __m128i *)((char *)v352 + 4);
              }
              if ( v353 < v470 - 1 && v352->m128i_i16[0] == *(_WORD *)v353 )
              {
                v353 += 2;
                v352 = (const __m128i *)((char *)v352 + 2);
              }
              if ( v353 < v470 )
                v353 += v352->m128i_i8[0] == (unsigned __int8)*v353;
              v343 = &v353[-v338];
              goto LABEL_572;
            }
          }
          if ( v106 >= v105 )
          {
            ++v108;
            v105 += 256LL;
            _mm_prefetch((const char *)(v106 + 64), 1);
            _mm_prefetch((const char *)(v106 + 128), 1);
          }
          v102 = v106;
          if ( v106 + v108 > v457 )
            goto LABEL_147;
          v106 += v108;
        }
        v163 = v102 + 8;
        v468 = (unsigned __int64)(v470 - 7);
        if ( v102 + 8 >= (unsigned __int64)(v470 - 7) )
        {
          v167 = (const __m128i *)&v111->m128i_u64[1];
          v166 = (char *)(v102 + 8);
        }
        else
        {
          v164 = v111->m128i_i64[1];
          v165 = *(_QWORD *)(v102 + 8);
          if ( v164 != v165 )
          {
            _RDX = v165 ^ v164;
            __asm { tzcnt   rdx, rdx }
            v172 = (char *)((unsigned int)_RDX >> 3);
            goto LABEL_349;
          }
          v166 = (char *)(v102 + 16);
          v167 = v111 + 1;
          if ( v468 > v102 + 16 )
          {
            v168 = v111[1].m128i_i64[0];
            v169 = *(_QWORD *)(v102 + 16);
            if ( v169 != v168 )
            {
LABEL_235:
              _RSI = v168 ^ v169;
              __asm { tzcnt   rsi, rsi }
              v172 = &v166[((unsigned int)_RSI >> 3) - v163];
              goto LABEL_349;
            }
            while ( 1 )
            {
              v166 += 8;
              v167 = (const __m128i *)((char *)v167 + 8);
              if ( v468 <= (unsigned __int64)v166 )
                break;
              v169 = v167->m128i_i64[0];
              v168 = *(_QWORD *)v166;
              if ( v167->m128i_i64[0] != *(_QWORD *)v166 )
                goto LABEL_235;
            }
          }
        }
        if ( v166 < v470 - 3 && v167->m128i_i32[0] == *(_DWORD *)v166 )
        {
          v166 += 4;
          v167 = (const __m128i *)((char *)v167 + 4);
        }
        if ( v166 < v470 - 1 && v167->m128i_i16[0] == *(_WORD *)v166 )
        {
          v166 += 2;
          v167 = (const __m128i *)((char *)v167 + 2);
        }
        if ( v166 < v470 )
          v166 += v167->m128i_i8[0] == (unsigned __int8)*v166;
        v172 = &v166[-v163];
LABEL_349:
        v122 = v172 + 8;
        v256 = v102 - (_DWORD)v111;
        if ( v102 <= (unsigned __int64)v7 || v111 <= v501 )
          goto LABEL_545;
        v121 = v102;
        if ( *(_BYTE *)(v102 - 1) == v111[-1].m128i_i8[15] )
        {
          v482 = v106;
          do
          {
            --v121;
            v111 = (const __m128i *)((char *)v111 - 1);
            v122 = &v172[v102 + 8 - v121];
          }
          while ( (unsigned __int64)v7 < v121 && v111 > v501 && *(_BYTE *)(v121 - 1) == v111[-1].m128i_i8[15] );
LABEL_356:
          LODWORD(v106) = v482;
        }
LABEL_357:
        if ( v108 <= 3 )
          *(_DWORD *)(v458 + 4 * v109) = v106 - v104;
        v257 = v256 + 3;
        v258 = *(__m128i **)(v5 + 24);
        v259 = v121 - (_QWORD)v7;
        if ( v121 > (unsigned __int64)v492 )
        {
          v483 = v256;
          sub_916400(v258, v7, v121, v492);
          v256 = v483;
LABEL_366:
          *(_QWORD *)(v5 + 24) += v259;
          v260 = *(_QWORD *)(v5 + 8);
          if ( v259 > 0xFFFF )
          {
            v262 = v260 - *(_QWORD *)v5;
            *(_DWORD *)(v5 + 72) = 1;
            *(_DWORD *)(v5 + 76) = v262 >> 3;
          }
          goto LABEL_362;
        }
        *v258 = _mm_loadu_si128(v7);
        if ( v259 > 0x10 )
        {
          v316 = *(__m128i **)(v5 + 24);
          v316[1] = _mm_loadu_si128(v7 + 1);
          if ( (__int64)(v259 - 16) > 16 )
          {
            v317 = &v316->m128i_i8[v259];
            v318 = v7 + 2;
            v319 = v316 + 2;
            do
            {
              v320 = _mm_loadu_si128(v318);
              v319 += 2;
              v318 += 2;
              v319[-2] = v320;
              v319[-1] = _mm_loadu_si128(v318 - 1);
            }
            while ( v317 > (char *)v319 );
          }
          goto LABEL_366;
        }
        *(_QWORD *)(v5 + 24) += v259;
        v260 = *(_QWORD *)(v5 + 8);
LABEL_362:
        *(_WORD *)(v260 + 4) = v259;
        **(_DWORD **)(v5 + 8) = v257;
        v261 = *(_QWORD *)(v5 + 8);
        if ( (unsigned __int64)(v122 - 3) > 0xFFFF )
        {
          *(_DWORD *)(v5 + 72) = 2;
          *(_DWORD *)(v5 + 76) = (v261 - *(_QWORD *)v5) >> 3;
        }
        *(_WORD *)(v261 + 6) = (_WORD)v122 - 3;
        *(_QWORD *)(v5 + 8) += 8LL;
        v479 = v448;
        v448 = v256;
LABEL_137:
        v102 = (unsigned __int64)&v122[v121];
        v7 = (const __m128i *)&v122[v121];
        if ( (unsigned __int64)&v122[v121] <= v457 )
        {
          v128 = (_QWORD *)(v104 + (unsigned int)(v488 + 2));
          *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *v128) >> v463)) = v488 + 2;
          *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v102 - 2)) >> v463)) = v102 - 2 - v104;
          *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBF9B0000LL * *v128) >> v477)) = v488 + 2;
          *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v102 - 1)) >> v477)) = v102 - 1 - v104;
          v129 = v479;
          if ( *(_DWORD *)(v102 - v479) != *(_DWORD *)v102 || !v479 )
          {
LABEL_140:
            v7 = (const __m128i *)v102;
            goto LABEL_115;
          }
          v380 = v448;
          while ( 2 )
          {
            v381 = v102 + 4;
            v382 = (_QWORD *)(v102 - v129 + 4);
            if ( v102 + 4 >= v468 )
            {
              v417 = (char *)(v102 + 4);
            }
            else
            {
              v383 = *(_QWORD *)(v102 + 4);
              if ( *v382 != v383 )
              {
                _R9 = *v382 ^ v383;
                __asm { tzcnt   r9, r9 }
                v386 = (char *)((unsigned int)_R9 >> 3);
LABEL_659:
                v387 = v386 + 4;
                *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)v102) >> v477)) = v102 - v104;
                *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)v102) >> v463)) = v102 - v104;
                if ( (unsigned __int64)v492 < v102 )
                  sub_916400(*(__m128i **)(v5 + 24), (const __m128i *)v102, v102, v492);
                else
                  *(__m128i *)*(_QWORD *)(v5 + 24) = _mm_loadu_si128((const __m128i *)v102);
                v388 = (unsigned __int64)(v386 + 1);
                *(_WORD *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
                **(_DWORD **)(v5 + 8) = 1;
                v389 = *(_QWORD *)(v5 + 8);
                if ( v388 > 0xFFFF )
                {
                  *(_DWORD *)(v5 + 72) = 2;
                  *(_DWORD *)(v5 + 76) = (v389 - *(_QWORD *)v5) >> 3;
                }
                *(_WORD *)(v389 + 6) = v388;
                v102 += (unsigned __int64)v387;
                *(_QWORD *)(v5 + 8) += 8LL;
                if ( v102 > v457 || (v129 = v380, v380 == 0 || *(_DWORD *)(v102 - v380) != *(_DWORD *)v102) )
                {
                  v390 = v479;
                  v479 = v380;
                  v448 = v390;
                  goto LABEL_140;
                }
                v440 = v479;
                v479 = v380;
                v380 = v440;
                continue;
              }
              v417 = (char *)(v102 + 12);
              v425 = v382 + 1;
              if ( v468 <= v102 + 12 )
              {
                ++v382;
              }
              else
              {
                v426 = v382[1];
                v427 = *(_QWORD *)(v102 + 12);
                if ( v427 != v426 )
                {
                  _RAX = v426 ^ v427;
LABEL_751:
                  __asm { tzcnt   r9, rax }
                  v386 = &v417[((unsigned int)_R9 >> 3) - v381];
                  goto LABEL_659;
                }
                v382 = v425;
                while ( 1 )
                {
                  v417 += 8;
                  ++v382;
                  if ( v468 <= (unsigned __int64)v417 )
                    break;
                  if ( *v382 != *(_QWORD *)v417 )
                  {
                    _RAX = *(_QWORD *)v417 ^ *v382;
                    goto LABEL_751;
                  }
                }
              }
            }
            break;
          }
          if ( v417 < v470 - 3 && *(_DWORD *)v382 == *(_DWORD *)v417 )
          {
            v417 += 4;
            v382 = (_QWORD *)((char *)v382 + 4);
          }
          if ( v417 < v470 - 1 && *(_WORD *)v382 == *(_WORD *)v417 )
          {
            v417 += 2;
            v382 = (_QWORD *)((char *)v382 + 2);
          }
          if ( v417 < v470 )
            v417 += *(_BYTE *)v382 == (unsigned __int8)*v417;
          v386 = &v417[-v381];
          goto LABEL_659;
        }
      }
LABEL_147:
      if ( v498 && v465 )
      {
        v497 = v495;
      }
      else
      {
        v132 = v495;
        if ( v448 )
          v132 = v448;
        v448 = v132;
      }
      *a3 = v448;
      v130 = v479;
      if ( !v479 )
        v130 = v497;
      a3[1] = v130;
      return v470 - (__int8 *)v7;
    case 7:
      v452 = v15;
      v470 = &v7->m128i_i8[a5];
      v456 = (unsigned __int64)&v7->m128i_u64[-1] + a5;
      v448 = *a3;
      v479 = a3[1];
      if ( v10 )
      {
        v452 = v11;
        v500 = (const __m128i *)(v8 + v11);
        v74 = (unsigned __int64)v7->m128i_u64 + (v7 == v500);
        v75 = (_DWORD)v7 + (v7 == v500) - v8 - v11;
      }
      else
      {
        v500 = (const __m128i *)(v8 + v15);
        v74 = (unsigned __int64)v7->m128i_u64 + (v7 == v500);
        v75 = (_DWORD)v7 + (v7 == v500) - v8 - v11;
        if ( v75 > v13 )
          v75 = v13;
      }
      v497 = 0;
      if ( v479 > v75 )
      {
        v497 = a3[1];
        v479 = 0;
      }
      if ( v448 <= v75 )
      {
        v498 = 0;
        v495 = 0;
      }
      else
      {
        v495 = *a3;
        v498 = 1;
        v448 = 0;
      }
      v76 = v8;
      v491 = (const __m128i *)(v470 - 32);
LABEL_81:
      v462 = 64 - v472;
      while ( 1 )
      {
        v77 = v74 + 256;
        v78 = v74 + 1;
        v465 = v448 != 0;
        if ( v74 + 1 > v456 )
          goto LABEL_147;
        v79 = *(_QWORD *)v74;
        v80 = 1;
        v476 = 64 - v446;
        v81 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v74) >> v462;
        v82 = *(unsigned int *)(v458 + 4 * v81);
        v83 = (const __m128i *)(v76 + v82);
        while ( 1 )
        {
          v85 = (_DWORD *)(v445 + 4 * ((0xCF1BBCDCBFA56300LL * v79) >> v476));
          v86 = (unsigned int)*v85;
          v487 = v74 - v76;
          *v85 = v74 - v76;
          *(_DWORD *)(v458 + 4 * v81) = v74 - v76;
          if ( *(_DWORD *)(v74 + 1LL - v448) == *(_DWORD *)(v74 + 1) && v448 )
          {
            v87 = (_QWORD *)(v74 - v448 + 5);
            v88 = v74 + 5;
            v467 = (unsigned __int64)(v470 - 7);
            if ( v74 + 5 >= (unsigned __int64)(v470 - 7) )
            {
              v136 = (char *)(v74 + 5);
            }
            else
            {
              v89 = *(_QWORD *)(v74 + 5);
              if ( *v87 != v89 )
              {
                _RCX = v89 ^ *v87;
                __asm { tzcnt   r9, rcx }
                v92 = (char *)((unsigned int)_R9 >> 3);
                goto LABEL_97;
              }
              v136 = (char *)(v74 + 13);
              v228 = (_QWORD *)(v74 - v448 + 13);
              if ( v467 > v74 + 13 )
              {
                v229 = *(_QWORD *)(v74 - v448 + 13);
                v230 = *(_QWORD *)(v74 + 13);
                if ( v229 != v230 )
                {
LABEL_274:
                  _RDX = v230 ^ v229;
                  __asm { tzcnt   rdx, rdx }
                  v92 = &v136[((unsigned int)_RDX >> 3) - v88];
                  goto LABEL_97;
                }
                while ( 1 )
                {
                  v136 += 8;
                  ++v228;
                  if ( v467 <= (unsigned __int64)v136 )
                    break;
                  v229 = *v228;
                  v230 = *(_QWORD *)v136;
                  if ( *v228 != *(_QWORD *)v136 )
                    goto LABEL_274;
                }
              }
              v87 = v228;
            }
            if ( v136 < v470 - 3 && *(_DWORD *)v87 == *(_DWORD *)v136 )
            {
              v136 += 4;
              v87 = (_QWORD *)((char *)v87 + 4);
            }
            if ( v136 < v470 - 1 && *(_WORD *)v87 == *(_WORD *)v136 )
            {
              v136 += 2;
              v87 = (_QWORD *)((char *)v87 + 2);
            }
            if ( v136 < v470 )
              v136 += *(_BYTE *)v87 == (unsigned __int8)*v136;
            v92 = &v136[-v88];
LABEL_97:
            v93 = v74 + 1;
            v94 = v92 + 4;
            v95 = *(__m128i **)(v5 + 24);
            v96 = v74 + 1 - (_QWORD)v7;
            if ( v74 + 1 > (unsigned __int64)v491 )
            {
              sub_916400(v95, v7, v74 + 1, v491);
            }
            else
            {
              *v95 = _mm_loadu_si128(v7);
              if ( v96 <= 0x10 )
              {
                *(_QWORD *)(v5 + 24) += v96;
                v97 = *(_QWORD *)(v5 + 8);
LABEL_100:
                *(_WORD *)(v97 + 4) = v96;
                v98 = (unsigned __int64)(v92 + 1);
                **(_DWORD **)(v5 + 8) = 1;
                v99 = *(_QWORD *)(v5 + 8);
                if ( v98 > 0xFFFF )
                {
                  *(_DWORD *)(v5 + 72) = 2;
                  *(_DWORD *)(v5 + 76) = (v99 - *(_QWORD *)v5) >> 3;
                }
                *(_WORD *)(v99 + 6) = v98;
                *(_QWORD *)(v5 + 8) += 8LL;
                goto LABEL_103;
              }
              v296 = *(__m128i **)(v5 + 24);
              v296[1] = _mm_loadu_si128(v7 + 1);
              if ( (__int64)(v96 - 16) > 16 )
              {
                v297 = &v296->m128i_i8[v96];
                v298 = v7 + 2;
                v299 = v296 + 2;
                do
                {
                  v300 = _mm_loadu_si128(v298);
                  v299 += 2;
                  v298 += 2;
                  v299[-2] = v300;
                  v299[-1] = _mm_loadu_si128(v298 - 1);
                }
                while ( v297 > (char *)v299 );
              }
            }
            *(_QWORD *)(v5 + 24) += v96;
            v97 = *(_QWORD *)(v5 + 8);
            if ( v96 > 0xFFFF )
            {
              v135 = v97 - *(_QWORD *)v5;
              *(_DWORD *)(v5 + 72) = 1;
              *(_DWORD *)(v5 + 76) = v135 >> 3;
            }
            goto LABEL_100;
          }
          v79 = *(_QWORD *)v78;
          v81 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v78) >> v462;
          if ( v452 < (unsigned int)v82 && v83->m128i_i64[0] == *(_QWORD *)v74 )
            break;
          v82 = *(unsigned int *)(v458 + 4 * v81);
          v83 = (const __m128i *)(v76 + v82);
          if ( v452 < (unsigned int)v86 )
          {
            v84 = v76 + v86;
            if ( *(_DWORD *)v84 == *(_DWORD *)v74 )
            {
              v467 = (unsigned __int64)(v470 - 7);
              if ( v452 >= (unsigned int)v82 || v83->m128i_i64[0] != v79 )
              {
                v193 = v74 + 4;
                if ( v74 + 4 >= v467 )
                {
                  v197 = (__int64 *)(v84 + 4);
                  v196 = (char *)(v74 + 4);
                }
                else
                {
                  v194 = *(_QWORD *)(v84 + 4);
                  v195 = *(_QWORD *)(v74 + 4);
                  if ( v194 != v195 )
                  {
                    _RAX = v195 ^ v194;
                    __asm { tzcnt   rax, rax }
                    v202 = (char *)((unsigned int)_RAX >> 3);
                    goto LABEL_461;
                  }
                  v196 = (char *)(v74 + 12);
                  v197 = (__int64 *)(v84 + 12);
                  if ( v74 + 12 < v467 )
                  {
                    v198 = *(_QWORD *)(v84 + 12);
                    v199 = *(_QWORD *)(v74 + 12);
                    if ( v199 != v198 )
                    {
LABEL_254:
                      _RSI = v198 ^ v199;
                      __asm { tzcnt   rsi, rsi }
                      v202 = &v196[((unsigned int)_RSI >> 3) - v193];
                      goto LABEL_461;
                    }
                    while ( 1 )
                    {
                      v196 += 8;
                      ++v197;
                      if ( (unsigned __int64)v196 >= v467 )
                        break;
                      v199 = *v197;
                      v198 = *(_QWORD *)v196;
                      if ( *v197 != *(_QWORD *)v196 )
                        goto LABEL_254;
                    }
                  }
                }
                if ( v196 < v470 - 3 && *(_DWORD *)v197 == *(_DWORD *)v196 )
                {
                  v196 += 4;
                  v197 = (__int64 *)((char *)v197 + 4);
                }
                if ( v196 < v470 - 1 && *(_WORD *)v197 == *(_WORD *)v196 )
                {
                  v196 += 2;
                  v197 = (__int64 *)((char *)v197 + 2);
                }
                if ( v196 < v470 )
                  v196 += *(_BYTE *)v197 == (unsigned __int8)*v196;
                v202 = &v196[-v193];
LABEL_461:
                v94 = v202 + 4;
                v263 = v74 - v84;
                if ( v84 > (unsigned __int64)v500 && v74 > (unsigned __int64)v7 )
                {
                  v93 = v74;
                  if ( *(_BYTE *)(v74 - 1) == *(_BYTE *)(v84 - 1) )
                  {
                    v484 = v78;
                    do
                    {
                      --v93;
                      --v84;
                      v94 = &v202[v74 + 4 - v93];
                    }
                    while ( (unsigned __int64)v7 < v93
                         && (unsigned __int64)v500 < v84
                         && *(_BYTE *)(v93 - 1) == *(_BYTE *)(v84 - 1) );
                    goto LABEL_385;
                  }
                  goto LABEL_386;
                }
LABEL_548:
                v93 = v74;
                goto LABEL_386;
              }
              v344 = v78 + 8;
              if ( v78 + 8 >= v467 )
              {
                v350 = (const __m128i *)&v83->m128i_u64[1];
                v351 = (char *)(v78 + 8);
              }
              else
              {
                v345 = v83->m128i_i64[1];
                v346 = *(_QWORD *)(v78 + 8);
                if ( v345 != v346 )
                {
                  _RDX = v346 ^ v345;
                  __asm { tzcnt   rdx, rdx }
                  v349 = (char *)((unsigned int)_RDX >> 3);
LABEL_582:
                  v94 = v349 + 8;
                  v263 = v78 - (_DWORD)v83;
                  if ( (unsigned __int64)v7 >= v78 || v500 >= v83 )
                  {
                    v93 = v78;
                  }
                  else
                  {
                    v93 = v78;
                    if ( v83[-1].m128i_i8[15] == *(_BYTE *)(v78 - 1) )
                    {
                      do
                      {
                        --v93;
                        v83 = (const __m128i *)((char *)v83 - 1);
                      }
                      while ( (unsigned __int64)v7 < v93 && v500 < v83 && *(_BYTE *)(v93 - 1) == v83[-1].m128i_i8[15] );
                      v94 = &v349[v78 + 8 - v93];
                    }
                  }
                  goto LABEL_386;
                }
                v351 = (char *)(v78 + 16);
                v350 = v83 + 1;
                if ( v78 + 16 < v467 )
                {
                  v404 = v83[1].m128i_i64[0];
                  v405 = *(_QWORD *)(v78 + 16);
                  if ( v405 != v404 )
                  {
LABEL_684:
                    _RDX = v404 ^ v405;
                    __asm { tzcnt   rdx, rdx }
                    v349 = &v351[((unsigned int)_RDX >> 3) - v344];
                    goto LABEL_582;
                  }
                  while ( 1 )
                  {
                    v351 += 8;
                    v350 = (const __m128i *)((char *)v350 + 8);
                    if ( (unsigned __int64)v351 >= v467 )
                      break;
                    v404 = v350->m128i_i64[0];
                    v405 = *(_QWORD *)v351;
                    if ( v350->m128i_i64[0] != *(_QWORD *)v351 )
                      goto LABEL_684;
                  }
                }
              }
              if ( v351 < v470 - 3 && v350->m128i_i32[0] == *(_DWORD *)v351 )
              {
                v351 += 4;
                v350 = (const __m128i *)((char *)v350 + 4);
              }
              if ( v351 < v470 - 1 && v350->m128i_i16[0] == *(_WORD *)v351 )
              {
                v351 += 2;
                v350 = (const __m128i *)((char *)v350 + 2);
              }
              if ( v351 < v470 )
                v351 += v350->m128i_i8[0] == (unsigned __int8)*v351;
              v349 = &v351[-v344];
              goto LABEL_582;
            }
          }
          if ( v78 >= v77 )
          {
            ++v80;
            v77 += 256LL;
            _mm_prefetch((const char *)(v78 + 64), 1);
            _mm_prefetch((const char *)(v78 + 128), 1);
          }
          v74 = v78;
          if ( v78 + v80 > v456 )
            goto LABEL_147;
          v78 += v80;
        }
        v153 = v74 + 8;
        v467 = (unsigned __int64)(v470 - 7);
        if ( v74 + 8 >= (unsigned __int64)(v470 - 7) )
        {
          v157 = (const __m128i *)&v83->m128i_u64[1];
          v156 = (char *)(v74 + 8);
        }
        else
        {
          v154 = v83->m128i_i64[1];
          v155 = *(_QWORD *)(v74 + 8);
          if ( v154 != v155 )
          {
            _RDX = v155 ^ v154;
            __asm { tzcnt   rdx, rdx }
            v162 = (char *)((unsigned int)_RDX >> 3);
            goto LABEL_378;
          }
          v156 = (char *)(v74 + 16);
          v157 = v83 + 1;
          if ( v467 > v74 + 16 )
          {
            v158 = v83[1].m128i_i64[0];
            v159 = *(_QWORD *)(v74 + 16);
            if ( v159 != v158 )
            {
LABEL_230:
              _RSI = v158 ^ v159;
              __asm { tzcnt   rsi, rsi }
              v162 = &v156[((unsigned int)_RSI >> 3) - v153];
              goto LABEL_378;
            }
            while ( 1 )
            {
              v156 += 8;
              v157 = (const __m128i *)((char *)v157 + 8);
              if ( v467 <= (unsigned __int64)v156 )
                break;
              v159 = v157->m128i_i64[0];
              v158 = *(_QWORD *)v156;
              if ( v157->m128i_i64[0] != *(_QWORD *)v156 )
                goto LABEL_230;
            }
          }
        }
        if ( v156 < v470 - 3 && v157->m128i_i32[0] == *(_DWORD *)v156 )
        {
          v156 += 4;
          v157 = (const __m128i *)((char *)v157 + 4);
        }
        if ( v156 < v470 - 1 && v157->m128i_i16[0] == *(_WORD *)v156 )
        {
          v156 += 2;
          v157 = (const __m128i *)((char *)v157 + 2);
        }
        if ( v156 < v470 )
          v156 += v157->m128i_i8[0] == (unsigned __int8)*v156;
        v162 = &v156[-v153];
LABEL_378:
        v94 = v162 + 8;
        v263 = v74 - (_DWORD)v83;
        if ( v500 >= v83 || v74 <= (unsigned __int64)v7 )
          goto LABEL_548;
        v93 = v74;
        if ( v83[-1].m128i_i8[15] == *(_BYTE *)(v74 - 1) )
        {
          v484 = v78;
          do
          {
            --v93;
            v83 = (const __m128i *)((char *)v83 - 1);
            v94 = &v162[v74 + 8 - v93];
          }
          while ( (unsigned __int64)v7 < v93 && v500 < v83 && *(_BYTE *)(v93 - 1) == v83[-1].m128i_i8[15] );
LABEL_385:
          LODWORD(v78) = v484;
        }
LABEL_386:
        if ( v80 <= 3 )
          *(_DWORD *)(v458 + 4 * v81) = v78 - v76;
        v264 = v263 + 3;
        v265 = *(__m128i **)(v5 + 24);
        v266 = v93 - (_QWORD)v7;
        if ( v93 > (unsigned __int64)v491 )
        {
          v485 = v263;
          sub_916400(v265, v7, v93, v491);
          v263 = v485;
LABEL_395:
          *(_QWORD *)(v5 + 24) += v266;
          v267 = *(_QWORD *)(v5 + 8);
          if ( v266 > 0xFFFF )
          {
            v269 = v267 - *(_QWORD *)v5;
            *(_DWORD *)(v5 + 72) = 1;
            *(_DWORD *)(v5 + 76) = v269 >> 3;
          }
          goto LABEL_391;
        }
        *v265 = _mm_loadu_si128(v7);
        if ( v266 > 0x10 )
        {
          v311 = *(__m128i **)(v5 + 24);
          v311[1] = _mm_loadu_si128(v7 + 1);
          if ( (__int64)(v266 - 16) > 16 )
          {
            v312 = &v311->m128i_i8[v266];
            v313 = v7 + 2;
            v314 = v311 + 2;
            do
            {
              v315 = _mm_loadu_si128(v313);
              v314 += 2;
              v313 += 2;
              v314[-2] = v315;
              v314[-1] = _mm_loadu_si128(v313 - 1);
            }
            while ( v312 > (char *)v314 );
          }
          goto LABEL_395;
        }
        *(_QWORD *)(v5 + 24) += v266;
        v267 = *(_QWORD *)(v5 + 8);
LABEL_391:
        *(_WORD *)(v267 + 4) = v266;
        **(_DWORD **)(v5 + 8) = v264;
        v268 = *(_QWORD *)(v5 + 8);
        if ( (unsigned __int64)(v94 - 3) > 0xFFFF )
        {
          *(_DWORD *)(v5 + 72) = 2;
          *(_DWORD *)(v5 + 76) = (v268 - *(_QWORD *)v5) >> 3;
        }
        *(_WORD *)(v268 + 6) = (_WORD)v94 - 3;
        *(_QWORD *)(v5 + 8) += 8LL;
        v479 = v448;
        v448 = v263;
LABEL_103:
        v74 = (unsigned __int64)&v94[v93];
        v7 = (const __m128i *)&v94[v93];
        if ( (unsigned __int64)&v94[v93] <= v456 )
        {
          v100 = (_QWORD *)(v76 + (unsigned int)(v487 + 2));
          *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *v100) >> v462)) = v487 + 2;
          *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v74 - 2)) >> v462)) = v74 - 2 - v76;
          *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBFA56300LL * *v100) >> v476)) = v487 + 2;
          *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBFA56300LL * *(_QWORD *)(v74 - 1)) >> v476)) = v74 - 1 - v76;
          v101 = v479;
          if ( *(_DWORD *)(v74 - v479) != *(_DWORD *)v74 || !v479 )
          {
LABEL_106:
            v7 = (const __m128i *)v74;
            goto LABEL_81;
          }
          v358 = v448;
          while ( 2 )
          {
            v359 = v74 + 4;
            v360 = (_QWORD *)(v74 - v101 + 4);
            if ( v74 + 4 >= v467 )
            {
              v418 = (char *)(v74 + 4);
            }
            else
            {
              v361 = *(_QWORD *)(v74 + 4);
              if ( *v360 != v361 )
              {
                _R9 = *v360 ^ v361;
                __asm { tzcnt   r9, r9 }
                v364 = (char *)((unsigned int)_R9 >> 3);
LABEL_637:
                v365 = v364 + 4;
                *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBFA56300LL * *(_QWORD *)v74) >> v476)) = v74 - v76;
                *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)v74) >> v462)) = v74 - v76;
                if ( (unsigned __int64)v491 < v74 )
                  sub_916400(*(__m128i **)(v5 + 24), (const __m128i *)v74, v74, v491);
                else
                  *(__m128i *)*(_QWORD *)(v5 + 24) = _mm_loadu_si128((const __m128i *)v74);
                v366 = (unsigned __int64)(v364 + 1);
                *(_WORD *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
                **(_DWORD **)(v5 + 8) = 1;
                v367 = *(_QWORD *)(v5 + 8);
                if ( v366 > 0xFFFF )
                {
                  *(_DWORD *)(v5 + 72) = 2;
                  *(_DWORD *)(v5 + 76) = (v367 - *(_QWORD *)v5) >> 3;
                }
                *(_WORD *)(v367 + 6) = v366;
                v74 += (unsigned __int64)v365;
                *(_QWORD *)(v5 + 8) += 8LL;
                if ( v74 > v456 || (v101 = v358, v358 == 0 || *(_DWORD *)(v74 - v358) != *(_DWORD *)v74) )
                {
                  v368 = v479;
                  v479 = v358;
                  v448 = v368;
                  goto LABEL_106;
                }
                v442 = v479;
                v479 = v358;
                v358 = v442;
                continue;
              }
              v418 = (char *)(v74 + 12);
              v430 = v360 + 1;
              if ( v467 <= v74 + 12 )
              {
                ++v360;
              }
              else
              {
                v431 = v360[1];
                v432 = *(_QWORD *)(v74 + 12);
                if ( v431 != v432 )
                {
                  _RAX = v432 ^ v431;
LABEL_755:
                  __asm { tzcnt   r9, rax }
                  v364 = &v418[((unsigned int)_R9 >> 3) - v359];
                  goto LABEL_637;
                }
                v360 = v430;
                while ( 1 )
                {
                  v418 += 8;
                  ++v360;
                  if ( v467 <= (unsigned __int64)v418 )
                    break;
                  if ( *v360 != *(_QWORD *)v418 )
                  {
                    _RAX = *(_QWORD *)v418 ^ *v360;
                    goto LABEL_755;
                  }
                }
              }
            }
            break;
          }
          if ( v418 < v470 - 3 && *(_DWORD *)v360 == *(_DWORD *)v418 )
          {
            v418 += 4;
            v360 = (_QWORD *)((char *)v360 + 4);
          }
          if ( v418 < v470 - 1 && *(_WORD *)v360 == *(_WORD *)v418 )
          {
            v418 += 2;
            v360 = (_QWORD *)((char *)v360 + 2);
          }
          if ( v418 < v470 )
            v418 += *(_BYTE *)v360 == (unsigned __int8)*v418;
          v364 = &v418[-v359];
          goto LABEL_637;
        }
      }
    case 5:
      v451 = v15;
      v470 = &v7->m128i_i8[a5];
      v455 = (unsigned __int64)&v7->m128i_u64[-1] + a5;
      v448 = *a3;
      v479 = a3[1];
      if ( v10 )
      {
        v451 = v11;
        v499 = (const __m128i *)(v8 + v11);
        v46 = (unsigned __int64)v7->m128i_u64 + (v7 == v499);
        v47 = (_DWORD)v7 + (v7 == v499) - v8 - v11;
      }
      else
      {
        v499 = (const __m128i *)(v8 + v15);
        v46 = (unsigned __int64)v7->m128i_u64 + (v7 == v499);
        v47 = (_DWORD)v7 + (v7 == v499) - v8 - v11;
        if ( v47 > v13 )
          v47 = v13;
      }
      v497 = 0;
      if ( v479 > v47 )
      {
        v497 = a3[1];
        v479 = 0;
      }
      if ( v448 <= v47 )
      {
        v498 = 0;
        v495 = 0;
      }
      else
      {
        v495 = *a3;
        v498 = 1;
        v448 = 0;
      }
      v48 = v8;
      v490 = (const __m128i *)(v470 - 32);
LABEL_47:
      v461 = 64 - v472;
      while ( 1 )
      {
        v49 = v46 + 256;
        v50 = v46 + 1;
        v465 = v448 != 0;
        if ( v46 + 1 > v455 )
          goto LABEL_147;
        v51 = *(_QWORD *)v46;
        v52 = 1;
        v53 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v46) >> v461;
        v54 = *(unsigned int *)(v458 + 4 * v53);
        v475 = 64 - v446;
        v55 = (const __m128i *)(v48 + v54);
        while ( 1 )
        {
          v57 = (_DWORD *)(v445 + 4 * ((0xCF1BBCDCBB000000LL * v51) >> v475));
          v58 = (unsigned int)*v57;
          v486 = v46 - v48;
          *v57 = v46 - v48;
          *(_DWORD *)(v458 + 4 * v53) = v46 - v48;
          if ( *(_DWORD *)(v46 + 1LL - v448) == *(_DWORD *)(v46 + 1) && v448 )
          {
            v59 = (_QWORD *)(v46 - v448 + 5);
            v60 = v46 + 5;
            v466 = (unsigned __int64)(v470 - 7);
            if ( v46 + 5 >= (unsigned __int64)(v470 - 7) )
            {
              v142 = (char *)(v46 + 5);
            }
            else
            {
              v61 = *(_QWORD *)(v46 + 5);
              if ( *v59 != v61 )
              {
                _RCX = v61 ^ *v59;
                __asm { tzcnt   r9, rcx }
                v64 = (char *)((unsigned int)_R9 >> 3);
                goto LABEL_63;
              }
              v142 = (char *)(v46 + 13);
              v238 = (_QWORD *)(v46 - v448 + 13);
              if ( v466 > v46 + 13 )
              {
                v239 = *(_QWORD *)(v46 - v448 + 13);
                v240 = *(_QWORD *)(v46 + 13);
                if ( v239 != v240 )
                {
LABEL_280:
                  _RDX = v240 ^ v239;
                  __asm { tzcnt   rdx, rdx }
                  v64 = &v142[((unsigned int)_RDX >> 3) - v60];
                  goto LABEL_63;
                }
                while ( 1 )
                {
                  v142 += 8;
                  ++v238;
                  if ( v466 <= (unsigned __int64)v142 )
                    break;
                  v239 = *v238;
                  v240 = *(_QWORD *)v142;
                  if ( *v238 != *(_QWORD *)v142 )
                    goto LABEL_280;
                }
              }
              v59 = v238;
            }
            if ( v142 < v470 - 3 && *(_DWORD *)v59 == *(_DWORD *)v142 )
            {
              v142 += 4;
              v59 = (_QWORD *)((char *)v59 + 4);
            }
            if ( v142 < v470 - 1 && *(_WORD *)v59 == *(_WORD *)v142 )
            {
              v142 += 2;
              v59 = (_QWORD *)((char *)v59 + 2);
            }
            if ( v142 < v470 )
              v142 += *(_BYTE *)v59 == (unsigned __int8)*v142;
            v64 = &v142[-v60];
LABEL_63:
            v65 = v46 + 1;
            v66 = v64 + 4;
            v67 = *(__m128i **)(v5 + 24);
            v68 = v46 + 1 - (_QWORD)v7;
            if ( v46 + 1 > (unsigned __int64)v490 )
            {
              sub_916400(v67, v7, v46 + 1, v490);
            }
            else
            {
              *v67 = _mm_loadu_si128(v7);
              if ( v68 <= 0x10 )
              {
                *(_QWORD *)(v5 + 24) += v68;
                v69 = *(_QWORD *)(v5 + 8);
LABEL_66:
                *(_WORD *)(v69 + 4) = v68;
                v70 = (unsigned __int64)(v64 + 1);
                **(_DWORD **)(v5 + 8) = 1;
                v71 = *(_QWORD *)(v5 + 8);
                if ( v70 > 0xFFFF )
                {
                  *(_DWORD *)(v5 + 72) = 2;
                  *(_DWORD *)(v5 + 76) = (v71 - *(_QWORD *)v5) >> 3;
                }
                *(_WORD *)(v71 + 6) = v70;
                *(_QWORD *)(v5 + 8) += 8LL;
                goto LABEL_69;
              }
              v301 = *(__m128i **)(v5 + 24);
              v301[1] = _mm_loadu_si128(v7 + 1);
              if ( (__int64)(v68 - 16) > 16 )
              {
                v302 = &v301->m128i_i8[v68];
                v303 = v7 + 2;
                v304 = v301 + 2;
                do
                {
                  v305 = _mm_loadu_si128(v303);
                  v304 += 2;
                  v303 += 2;
                  v304[-2] = v305;
                  v304[-1] = _mm_loadu_si128(v303 - 1);
                }
                while ( v302 > (char *)v304 );
              }
            }
            *(_QWORD *)(v5 + 24) += v68;
            v69 = *(_QWORD *)(v5 + 8);
            if ( v68 > 0xFFFF )
            {
              v141 = v69 - *(_QWORD *)v5;
              *(_DWORD *)(v5 + 72) = 1;
              *(_DWORD *)(v5 + 76) = v141 >> 3;
            }
            goto LABEL_66;
          }
          v51 = *(_QWORD *)v50;
          v53 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v50) >> v461;
          if ( v451 < (unsigned int)v54 && v55->m128i_i64[0] == *(_QWORD *)v46 )
            break;
          v54 = *(unsigned int *)(v458 + 4 * v53);
          v55 = (const __m128i *)(v48 + v54);
          if ( v451 < (unsigned int)v58 )
          {
            v56 = v48 + v58;
            if ( *(_DWORD *)v56 == *(_DWORD *)v46 )
            {
              v466 = (unsigned __int64)(v470 - 7);
              if ( v451 >= (unsigned int)v54 || v55->m128i_i64[0] != v51 )
              {
                v203 = v46 + 4;
                if ( v46 + 4 >= v466 )
                {
                  v207 = (__int64 *)(v56 + 4);
                  v206 = (char *)(v46 + 4);
                }
                else
                {
                  v204 = *(_QWORD *)(v56 + 4);
                  v205 = *(_QWORD *)(v46 + 4);
                  if ( v204 != v205 )
                  {
                    _RAX = v205 ^ v204;
                    __asm { tzcnt   rax, rax }
                    v212 = (char *)((unsigned int)_RAX >> 3);
                    goto LABEL_425;
                  }
                  v206 = (char *)(v46 + 12);
                  v207 = (__int64 *)(v56 + 12);
                  if ( v46 + 12 < v466 )
                  {
                    v208 = *(_QWORD *)(v56 + 12);
                    v209 = *(_QWORD *)(v46 + 12);
                    if ( v208 != v209 )
                    {
LABEL_261:
                      _RSI = v209 ^ v208;
                      __asm { tzcnt   rsi, rsi }
                      v212 = &v206[((unsigned int)_RSI >> 3) - v203];
                      goto LABEL_425;
                    }
                    while ( 1 )
                    {
                      v206 += 8;
                      ++v207;
                      if ( (unsigned __int64)v206 >= v466 )
                        break;
                      v208 = *v207;
                      v209 = *(_QWORD *)v206;
                      if ( *v207 != *(_QWORD *)v206 )
                        goto LABEL_261;
                    }
                  }
                }
                if ( v206 < v470 - 3 && *(_DWORD *)v207 == *(_DWORD *)v206 )
                {
                  v206 += 4;
                  v207 = (__int64 *)((char *)v207 + 4);
                }
                if ( v206 < v470 - 1 && *(_WORD *)v207 == *(_WORD *)v206 )
                {
                  v206 += 2;
                  v207 = (__int64 *)((char *)v207 + 2);
                }
                if ( v206 < v470 )
                  v206 += *(_BYTE *)v207 == (unsigned __int8)*v206;
                v212 = &v206[-v203];
LABEL_425:
                v66 = v212 + 4;
                v243 = v46 - v56;
                if ( v56 > (unsigned __int64)v499 && v46 > (unsigned __int64)v7 )
                {
                  v65 = v46;
                  if ( *(_BYTE *)(v56 - 1) == *(_BYTE *)(v46 - 1) )
                  {
                    v480 = v50;
                    do
                    {
                      --v65;
                      --v56;
                      v66 = &v212[v46 + 4 - v65];
                    }
                    while ( (unsigned __int64)v7 < v65
                         && v56 > (unsigned __int64)v499
                         && *(_BYTE *)(v65 - 1) == *(_BYTE *)(v56 - 1) );
                    goto LABEL_298;
                  }
                  goto LABEL_299;
                }
LABEL_547:
                v65 = v46;
                goto LABEL_299;
              }
              v326 = v50 + 8;
              if ( v50 + 8 >= v466 )
              {
                v356 = (const __m128i *)&v55->m128i_u64[1];
                v357 = (char *)(v50 + 8);
              }
              else
              {
                v327 = v55->m128i_i64[1];
                v328 = *(_QWORD *)(v50 + 8);
                if ( v327 != v328 )
                {
                  _RDX = v328 ^ v327;
                  __asm { tzcnt   rdx, rdx }
                  v331 = (char *)((unsigned int)_RDX >> 3);
LABEL_552:
                  v66 = v331 + 8;
                  v243 = v50 - (_DWORD)v55;
                  if ( v55 <= v499 || (unsigned __int64)v7 >= v50 )
                  {
                    v65 = v50;
                  }
                  else
                  {
                    v65 = v50;
                    if ( v55[-1].m128i_i8[15] == *(_BYTE *)(v50 - 1) )
                    {
                      do
                      {
                        --v65;
                        v55 = (const __m128i *)((char *)v55 - 1);
                      }
                      while ( (unsigned __int64)v7 < v65 && v55 > v499 && *(_BYTE *)(v65 - 1) == v55[-1].m128i_i8[15] );
                      v66 = &v331[v50 + 8 - v65];
                    }
                  }
                  goto LABEL_299;
                }
                v357 = (char *)(v50 + 16);
                v356 = v55 + 1;
                if ( v50 + 16 < v466 )
                {
                  v412 = v55[1].m128i_i64[0];
                  v413 = *(_QWORD *)(v50 + 16);
                  if ( v413 != v412 )
                  {
LABEL_696:
                    _RDX = v412 ^ v413;
                    __asm { tzcnt   rdx, rdx }
                    v331 = &v357[((unsigned int)_RDX >> 3) - v326];
                    goto LABEL_552;
                  }
                  while ( 1 )
                  {
                    v357 += 8;
                    v356 = (const __m128i *)((char *)v356 + 8);
                    if ( (unsigned __int64)v357 >= v466 )
                      break;
                    v412 = v356->m128i_i64[0];
                    v413 = *(_QWORD *)v357;
                    if ( v356->m128i_i64[0] != *(_QWORD *)v357 )
                      goto LABEL_696;
                  }
                }
              }
              if ( v357 < v470 - 3 && v356->m128i_i32[0] == *(_DWORD *)v357 )
              {
                v357 += 4;
                v356 = (const __m128i *)((char *)v356 + 4);
              }
              if ( v357 < v470 - 1 && v356->m128i_i16[0] == *(_WORD *)v357 )
              {
                v357 += 2;
                v356 = (const __m128i *)((char *)v356 + 2);
              }
              if ( v357 < v470 )
                v357 += v356->m128i_i8[0] == (unsigned __int8)*v357;
              v331 = &v357[-v326];
              goto LABEL_552;
            }
          }
          if ( v50 >= v49 )
          {
            ++v52;
            v49 += 256LL;
            _mm_prefetch((const char *)(v50 + 64), 1);
            _mm_prefetch((const char *)(v50 + 128), 1);
          }
          v46 = v50;
          if ( v50 + v52 > v455 )
            goto LABEL_147;
          v50 += v52;
        }
        v173 = v46 + 8;
        v466 = (unsigned __int64)(v470 - 7);
        if ( v46 + 8 >= (unsigned __int64)(v470 - 7) )
        {
          v177 = (const __m128i *)&v55->m128i_u64[1];
          v176 = (char *)(v46 + 8);
        }
        else
        {
          v174 = v55->m128i_i64[1];
          v175 = *(_QWORD *)(v46 + 8);
          if ( v174 != v175 )
          {
            _RDX = v175 ^ v174;
            __asm { tzcnt   rdx, rdx }
            v182 = (char *)((unsigned int)_RDX >> 3);
            goto LABEL_291;
          }
          v176 = (char *)(v46 + 16);
          v177 = v55 + 1;
          if ( v466 > v46 + 16 )
          {
            v178 = v55[1].m128i_i64[0];
            v179 = *(_QWORD *)(v46 + 16);
            if ( v179 != v178 )
            {
LABEL_240:
              _RSI = v178 ^ v179;
              __asm { tzcnt   rsi, rsi }
              v182 = &v176[((unsigned int)_RSI >> 3) - v173];
              goto LABEL_291;
            }
            while ( 1 )
            {
              v176 += 8;
              v177 = (const __m128i *)((char *)v177 + 8);
              if ( v466 <= (unsigned __int64)v176 )
                break;
              v179 = v177->m128i_i64[0];
              v178 = *(_QWORD *)v176;
              if ( v177->m128i_i64[0] != *(_QWORD *)v176 )
                goto LABEL_240;
            }
          }
        }
        if ( v176 < v470 - 3 && v177->m128i_i32[0] == *(_DWORD *)v176 )
        {
          v176 += 4;
          v177 = (const __m128i *)((char *)v177 + 4);
        }
        if ( v176 < v470 - 1 && v177->m128i_i16[0] == *(_WORD *)v176 )
        {
          v176 += 2;
          v177 = (const __m128i *)((char *)v177 + 2);
        }
        if ( v176 < v470 )
          v176 += v177->m128i_i8[0] == (unsigned __int8)*v176;
        v182 = &v176[-v173];
LABEL_291:
        v66 = v182 + 8;
        v243 = v46 - (_DWORD)v55;
        if ( v46 <= (unsigned __int64)v7 || v55 <= v499 )
          goto LABEL_547;
        v65 = v46;
        if ( *(_BYTE *)(v46 - 1) == v55[-1].m128i_i8[15] )
        {
          v480 = v50;
          do
          {
            --v65;
            v55 = (const __m128i *)((char *)v55 - 1);
            v66 = &v182[v46 + 8 - v65];
          }
          while ( (unsigned __int64)v7 < v65 && v55 > v499 && *(_BYTE *)(v65 - 1) == v55[-1].m128i_i8[15] );
LABEL_298:
          LODWORD(v50) = v480;
        }
LABEL_299:
        if ( v52 <= 3 )
          *(_DWORD *)(v458 + 4 * v53) = v50 - v48;
        v244 = v243 + 3;
        v245 = *(__m128i **)(v5 + 24);
        v246 = v65 - (_QWORD)v7;
        if ( v65 > (unsigned __int64)v490 )
        {
          v481 = v243;
          sub_916400(v245, v7, v65, v490);
          v243 = v481;
LABEL_308:
          *(_QWORD *)(v5 + 24) += v246;
          v247 = *(_QWORD *)(v5 + 8);
          if ( v246 > 0xFFFF )
          {
            v249 = v247 - *(_QWORD *)v5;
            *(_DWORD *)(v5 + 72) = 1;
            *(_DWORD *)(v5 + 76) = v249 >> 3;
          }
          goto LABEL_304;
        }
        *v245 = _mm_loadu_si128(v7);
        if ( v246 > 0x10 )
        {
          v306 = *(__m128i **)(v5 + 24);
          v306[1] = _mm_loadu_si128(v7 + 1);
          if ( (__int64)(v246 - 16) > 16 )
          {
            v307 = &v306->m128i_i8[v246];
            v308 = v7 + 2;
            v309 = v306 + 2;
            do
            {
              v310 = _mm_loadu_si128(v308);
              v309 += 2;
              v308 += 2;
              v309[-2] = v310;
              v309[-1] = _mm_loadu_si128(v308 - 1);
            }
            while ( v307 > (char *)v309 );
          }
          goto LABEL_308;
        }
        *(_QWORD *)(v5 + 24) += v246;
        v247 = *(_QWORD *)(v5 + 8);
LABEL_304:
        *(_WORD *)(v247 + 4) = v246;
        **(_DWORD **)(v5 + 8) = v244;
        v248 = *(_QWORD *)(v5 + 8);
        if ( (unsigned __int64)(v66 - 3) > 0xFFFF )
        {
          *(_DWORD *)(v5 + 72) = 2;
          *(_DWORD *)(v5 + 76) = (v248 - *(_QWORD *)v5) >> 3;
        }
        *(_WORD *)(v248 + 6) = (_WORD)v66 - 3;
        *(_QWORD *)(v5 + 8) += 8LL;
        v479 = v448;
        v448 = v243;
LABEL_69:
        v46 = (unsigned __int64)&v66[v65];
        v7 = (const __m128i *)&v66[v65];
        if ( (unsigned __int64)&v66[v65] <= v455 )
        {
          v72 = (_QWORD *)(v48 + (unsigned int)(v486 + 2));
          *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *v72) >> v461)) = v486 + 2;
          *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v46 - 2)) >> v461)) = v46 - 2 - v48;
          *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBB000000LL * *v72) >> v475)) = v486 + 2;
          *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBB000000LL * *(_QWORD *)(v46 - 1)) >> v475)) = v46 - 1 - v48;
          v73 = v479;
          if ( *(_DWORD *)(v46 - v479) != *(_DWORD *)v46 || !v479 )
          {
LABEL_72:
            v7 = (const __m128i *)v46;
            goto LABEL_47;
          }
          v369 = v448;
          while ( 2 )
          {
            v370 = v46 + 4;
            v371 = (_QWORD *)(v46 - v73 + 4);
            if ( v46 + 4 >= v466 )
            {
              v419 = (char *)(v46 + 4);
            }
            else
            {
              v372 = *(_QWORD *)(v46 + 4);
              if ( *v371 != v372 )
              {
                _R9 = *v371 ^ v372;
                __asm { tzcnt   r9, r9 }
                v375 = (char *)((unsigned int)_R9 >> 3);
LABEL_648:
                v376 = v375 + 4;
                *(_DWORD *)(v445 + 4 * ((0xCF1BBCDCBB000000LL * *(_QWORD *)v46) >> v475)) = v46 - v48;
                *(_DWORD *)(v458 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)v46) >> v461)) = v46 - v48;
                if ( (unsigned __int64)v490 < v46 )
                  sub_916400(*(__m128i **)(v5 + 24), (const __m128i *)v46, v46, v490);
                else
                  *(__m128i *)*(_QWORD *)(v5 + 24) = _mm_loadu_si128((const __m128i *)v46);
                v377 = (unsigned __int64)(v375 + 1);
                *(_WORD *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
                **(_DWORD **)(v5 + 8) = 1;
                v378 = *(_QWORD *)(v5 + 8);
                if ( v377 > 0xFFFF )
                {
                  *(_DWORD *)(v5 + 72) = 2;
                  *(_DWORD *)(v5 + 76) = (v378 - *(_QWORD *)v5) >> 3;
                }
                *(_WORD *)(v378 + 6) = v377;
                v46 += (unsigned __int64)v376;
                *(_QWORD *)(v5 + 8) += 8LL;
                if ( v46 > v455 || (v73 = v369, v369 == 0 || *(_DWORD *)(v46 - v369) != *(_DWORD *)v46) )
                {
                  v379 = v479;
                  v479 = v369;
                  v448 = v379;
                  goto LABEL_72;
                }
                v443 = v479;
                v479 = v369;
                v369 = v443;
                continue;
              }
              v419 = (char *)(v46 + 12);
              v420 = v371 + 1;
              if ( v466 <= v46 + 12 )
              {
                ++v371;
              }
              else
              {
                v421 = v371[1];
                v422 = *(_QWORD *)(v46 + 12);
                if ( v422 != v421 )
                {
                  _RAX = v421 ^ v422;
LABEL_747:
                  __asm { tzcnt   r9, rax }
                  v375 = &v419[((unsigned int)_R9 >> 3) - v370];
                  goto LABEL_648;
                }
                v371 = v420;
                while ( 1 )
                {
                  v419 += 8;
                  ++v371;
                  if ( v466 <= (unsigned __int64)v419 )
                    break;
                  if ( *v371 != *(_QWORD *)v419 )
                  {
                    _RAX = *(_QWORD *)v419 ^ *v371;
                    goto LABEL_747;
                  }
                }
              }
            }
            break;
          }
          if ( v419 < v470 - 3 && *(_DWORD *)v371 == *(_DWORD *)v419 )
          {
            v419 += 4;
            v371 = (_QWORD *)((char *)v371 + 4);
          }
          if ( v419 < v470 - 1 && *(_WORD *)v371 == *(_WORD *)v419 )
          {
            v419 += 2;
            v371 = (_QWORD *)((char *)v371 + 2);
          }
          if ( v419 < v470 )
            v419 += *(_BYTE *)v371 == (unsigned __int8)*v419;
          v375 = &v419[-v370];
          goto LABEL_648;
        }
      }
    default:
      v447 = v15;
      v16 = *a3;
      v460 = &v7->m128i_i8[a5];
      v450 = (unsigned __int64)&v7->m128i_u64[-1] + a5;
      v469 = a3[1];
      if ( v10 )
      {
        v447 = v11;
        v494 = (const __m128i *)(v8 + v11);
        v17 = (unsigned __int64)v7->m128i_u64 + (v7 == v494);
        v18 = (_DWORD)v7 + (v7 == v494) - v8 - v11;
      }
      else
      {
        v494 = (const __m128i *)(v8 + v15);
        v17 = (unsigned __int64)v7->m128i_u64 + (v7 == v494);
        v18 = (_DWORD)v7 + (v7 == v494) - v8 - v11;
        if ( v18 > v13 )
          v18 = v13;
      }
      v489 = 0;
      if ( v469 > v18 )
      {
        v489 = a3[1];
        v469 = 0;
      }
      if ( v16 <= v18 )
      {
        v496 = 0;
        v493 = 0;
      }
      else
      {
        v496 = 1;
        v493 = *a3;
        v16 = 0;
      }
      v454 = v16;
      v19 = v8;
      v473 = 64 - v472;
      v20 = v458;
LABEL_13:
      v478 = (const __m128i *)(v460 - 32);
      while ( 1 )
      {
        v21 = v17 + 256;
        v22 = v17 + 1;
        if ( v17 + 1 > v450 )
          break;
        v23 = 1;
        v464 = 32 - v446;
        v24 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v17) >> v473;
        v25 = *(unsigned int *)(v20 + 4 * v24);
        v26 = (const __m128i *)(v19 + v25);
        while ( 1 )
        {
          v28 = (_DWORD *)(v445 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)v17) >> v464));
          v29 = (unsigned int)*v28;
          v474 = v17 - v19;
          *v28 = v17 - v19;
          *(_DWORD *)(v20 + 4 * v24) = v17 - v19;
          if ( *(_DWORD *)(v17 + 1LL - v454) == *(_DWORD *)(v17 + 1) && v454 )
          {
            v30 = (_QWORD *)(v17 - v454 + 5);
            v31 = v17 + 5;
            v459 = (unsigned __int64)(v460 - 7);
            if ( v17 + 5 >= (unsigned __int64)(v460 - 7) )
            {
              v138 = (char *)(v17 + 5);
            }
            else
            {
              v32 = *(_QWORD *)(v17 + 5);
              if ( *v30 != v32 )
              {
                _RCX = v32 ^ *v30;
                __asm { tzcnt   r9, rcx }
                v35 = (char *)((unsigned int)_R9 >> 3);
                goto LABEL_29;
              }
              v138 = (char *)(v17 + 13);
              v233 = (_QWORD *)(v17 - v454 + 13);
              if ( v459 > v17 + 13 )
              {
                v234 = *(_QWORD *)(v17 - v454 + 13);
                v235 = *(_QWORD *)(v17 + 13);
                if ( v235 != v234 )
                {
LABEL_277:
                  _RDX = v234 ^ v235;
                  __asm { tzcnt   rdx, rdx }
                  v35 = &v138[((unsigned int)_RDX >> 3) - v31];
                  goto LABEL_29;
                }
                while ( 1 )
                {
                  v138 += 8;
                  ++v233;
                  if ( v459 <= (unsigned __int64)v138 )
                    break;
                  v235 = *v233;
                  v234 = *(_QWORD *)v138;
                  if ( *v233 != *(_QWORD *)v138 )
                    goto LABEL_277;
                }
              }
              v30 = v233;
            }
            if ( v138 < v460 - 3 && *(_DWORD *)v30 == *(_DWORD *)v138 )
            {
              v138 += 4;
              v30 = (_QWORD *)((char *)v30 + 4);
            }
            if ( v138 < v460 - 1 && *(_WORD *)v30 == *(_WORD *)v138 )
            {
              v138 += 2;
              v30 = (_QWORD *)((char *)v30 + 2);
            }
            if ( v138 < v460 )
              v138 += *(_BYTE *)v30 == (unsigned __int8)*v138;
            v35 = &v138[-v31];
LABEL_29:
            v36 = v17 + 1;
            v37 = v35 + 4;
            v38 = *(__m128i **)(v5 + 24);
            v39 = v17 + 1 - (_QWORD)v7;
            if ( v36 > (unsigned __int64)v478 )
            {
              sub_916400(v38, v7, v36, v478);
            }
            else
            {
              *v38 = _mm_loadu_si128(v7);
              if ( v39 <= 0x10 )
              {
                *(_QWORD *)(v5 + 24) += v39;
                v40 = *(_QWORD *)(v5 + 8);
LABEL_32:
                *(_WORD *)(v40 + 4) = v39;
                v41 = (unsigned __int64)(v35 + 1);
                **(_DWORD **)(v5 + 8) = 1;
                v42 = *(_QWORD *)(v5 + 8);
                if ( v41 > 0xFFFF )
                {
                  *(_DWORD *)(v5 + 72) = 2;
                  *(_DWORD *)(v5 + 76) = (v42 - *(_QWORD *)v5) >> 3;
                }
                *(_WORD *)(v42 + 6) = v41;
                *(_QWORD *)(v5 + 8) += 8LL;
                goto LABEL_35;
              }
              v291 = *(__m128i **)(v5 + 24);
              v291[1] = _mm_loadu_si128(v7 + 1);
              if ( (__int64)(v39 - 16) > 16 )
              {
                v292 = &v291->m128i_i8[v39];
                v293 = v7 + 2;
                v294 = v291 + 2;
                do
                {
                  v295 = _mm_loadu_si128(v293);
                  v294 += 2;
                  v293 += 2;
                  v294[-2] = v295;
                  v294[-1] = _mm_loadu_si128(v293 - 1);
                }
                while ( v292 > (char *)v294 );
              }
            }
            *(_QWORD *)(v5 + 24) += v39;
            v40 = *(_QWORD *)(v5 + 8);
            if ( v39 > 0xFFFF )
            {
              v137 = v40 - *(_QWORD *)v5;
              *(_DWORD *)(v5 + 72) = 1;
              *(_DWORD *)(v5 + 76) = v137 >> 3;
            }
            goto LABEL_32;
          }
          v24 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v22) >> v473;
          if ( (unsigned int)v25 > v447 && v26->m128i_i64[0] == *(_QWORD *)v17 )
            break;
          v25 = *(unsigned int *)(v20 + 4 * v24);
          v26 = (const __m128i *)(v19 + v25);
          if ( (unsigned int)v29 > v447 )
          {
            v27 = v19 + v29;
            if ( *(_DWORD *)v27 == *(_DWORD *)v17 )
            {
              v459 = (unsigned __int64)(v460 - 7);
              if ( (unsigned int)v25 <= v447 || v26->m128i_i64[0] != *(_QWORD *)v22 )
              {
                v183 = v17 + 4;
                if ( v17 + 4 >= v459 )
                {
                  v187 = (__int64 *)(v27 + 4);
                  v186 = (char *)(v17 + 4);
                }
                else
                {
                  v184 = *(_QWORD *)(v27 + 4);
                  v185 = *(_QWORD *)(v17 + 4);
                  if ( v184 != v185 )
                  {
                    _RAX = v185 ^ v184;
                    __asm { tzcnt   rax, rax }
                    v192 = (char *)((unsigned int)_RAX >> 3);
                    goto LABEL_443;
                  }
                  v186 = (char *)(v17 + 12);
                  v187 = (__int64 *)(v27 + 12);
                  if ( v17 + 12 < v459 )
                  {
                    v188 = *(_QWORD *)(v27 + 12);
                    v189 = *(_QWORD *)(v17 + 12);
                    if ( v189 != v188 )
                    {
LABEL_247:
                      _RSI = v188 ^ v189;
                      __asm { tzcnt   rsi, rsi }
                      v192 = &v186[((unsigned int)_RSI >> 3) - v183];
                      goto LABEL_443;
                    }
                    while ( 1 )
                    {
                      v186 += 8;
                      ++v187;
                      if ( (unsigned __int64)v186 >= v459 )
                        break;
                      v189 = *v187;
                      v188 = *(_QWORD *)v186;
                      if ( *v187 != *(_QWORD *)v186 )
                        goto LABEL_247;
                    }
                  }
                }
                if ( v186 < v460 - 3 && *(_DWORD *)v187 == *(_DWORD *)v186 )
                {
                  v186 += 4;
                  v187 = (__int64 *)((char *)v187 + 4);
                }
                if ( v186 < v460 - 1 && *(_WORD *)v187 == *(_WORD *)v186 )
                {
                  v186 += 2;
                  v187 = (__int64 *)((char *)v187 + 2);
                }
                if ( v186 < v460 )
                  v186 += *(_BYTE *)v187 == (unsigned __int8)*v186;
                v192 = &v186[-v183];
LABEL_443:
                v37 = v192 + 4;
                v250 = v17 - v27;
                if ( v17 > (unsigned __int64)v7 && v27 > (unsigned __int64)v494 )
                {
                  v36 = v17;
                  if ( *(_BYTE *)(v27 - 1) == *(_BYTE *)(v17 - 1) )
                  {
                    v471 = v22;
                    do
                    {
                      --v36;
                      --v27;
                      v37 = &v192[v17 + 4 - v36];
                    }
                    while ( (unsigned __int64)v7 < v36
                         && v27 > (unsigned __int64)v494
                         && *(_BYTE *)(v36 - 1) == *(_BYTE *)(v27 - 1) );
                    goto LABEL_327;
                  }
                  goto LABEL_328;
                }
LABEL_546:
                v36 = v17;
                goto LABEL_328;
              }
              v332 = v22 + 8;
              if ( v22 + 8 >= v459 )
              {
                v354 = (const __m128i *)&v26->m128i_u64[1];
                v355 = (char *)(v22 + 8);
              }
              else
              {
                v333 = v26->m128i_i64[1];
                v334 = *(_QWORD *)(v22 + 8);
                if ( v333 != v334 )
                {
                  _RDX = v334 ^ v333;
                  __asm { tzcnt   rdx, rdx }
                  v337 = (char *)((unsigned int)_RDX >> 3);
LABEL_562:
                  v37 = v337 + 8;
                  v250 = v22 - (_DWORD)v26;
                  if ( (unsigned __int64)v7 >= v22 || v26 <= v494 )
                  {
                    v36 = v22;
                  }
                  else
                  {
                    v36 = v22;
                    if ( *(_BYTE *)(v22 - 1) == v26[-1].m128i_i8[15] )
                    {
                      do
                      {
                        --v36;
                        v26 = (const __m128i *)((char *)v26 - 1);
                      }
                      while ( (unsigned __int64)v7 < v36 && v26 > v494 && *(_BYTE *)(v36 - 1) == v26[-1].m128i_i8[15] );
                      v37 = &v337[v22 + 8 - v36];
                    }
                  }
                  goto LABEL_328;
                }
                v355 = (char *)(v22 + 16);
                v354 = v26 + 1;
                if ( v22 + 16 < v459 )
                {
                  v408 = v26[1].m128i_i64[0];
                  v409 = *(_QWORD *)(v22 + 16);
                  if ( v409 != v408 )
                  {
LABEL_690:
                    _RDX = v408 ^ v409;
                    __asm { tzcnt   rdx, rdx }
                    v337 = &v355[((unsigned int)_RDX >> 3) - v332];
                    goto LABEL_562;
                  }
                  while ( 1 )
                  {
                    v355 += 8;
                    v354 = (const __m128i *)((char *)v354 + 8);
                    if ( (unsigned __int64)v355 >= v459 )
                      break;
                    v408 = v354->m128i_i64[0];
                    v409 = *(_QWORD *)v355;
                    if ( v354->m128i_i64[0] != *(_QWORD *)v355 )
                      goto LABEL_690;
                  }
                }
              }
              if ( v355 < v460 - 3 && v354->m128i_i32[0] == *(_DWORD *)v355 )
              {
                v355 += 4;
                v354 = (const __m128i *)((char *)v354 + 4);
              }
              if ( v355 < v460 - 1 && v354->m128i_i16[0] == *(_WORD *)v355 )
              {
                v355 += 2;
                v354 = (const __m128i *)((char *)v354 + 2);
              }
              if ( v355 < v460 )
                v355 += v354->m128i_i8[0] == (unsigned __int8)*v355;
              v337 = &v355[-v332];
              goto LABEL_562;
            }
          }
          if ( v22 >= v21 )
          {
            ++v23;
            v21 += 256LL;
            _mm_prefetch((const char *)(v22 + 64), 1);
            _mm_prefetch((const char *)(v22 + 128), 1);
          }
          v17 = v22;
          if ( v22 + v23 > v450 )
            goto LABEL_156;
          v22 += v23;
        }
        v143 = v17 + 8;
        v459 = (unsigned __int64)(v460 - 7);
        if ( v17 + 8 >= (unsigned __int64)(v460 - 7) )
        {
          v147 = (const __m128i *)&v26->m128i_u64[1];
          v146 = (char *)(v17 + 8);
        }
        else
        {
          v144 = v26->m128i_i64[1];
          v145 = *(_QWORD *)(v17 + 8);
          if ( v144 != v145 )
          {
            _RDX = v145 ^ v144;
            __asm { tzcnt   rdx, rdx }
            v152 = (char *)((unsigned int)_RDX >> 3);
            goto LABEL_320;
          }
          v146 = (char *)(v17 + 16);
          v147 = v26 + 1;
          if ( v459 > v17 + 16 )
          {
            v148 = v26[1].m128i_i64[0];
            v149 = *(_QWORD *)(v17 + 16);
            if ( v148 != v149 )
            {
LABEL_225:
              _RSI = v149 ^ v148;
              __asm { tzcnt   rsi, rsi }
              v152 = &v146[((unsigned int)_RSI >> 3) - v143];
              goto LABEL_320;
            }
            while ( 1 )
            {
              v146 += 8;
              v147 = (const __m128i *)((char *)v147 + 8);
              if ( v459 <= (unsigned __int64)v146 )
                break;
              v148 = v147->m128i_i64[0];
              v149 = *(_QWORD *)v146;
              if ( v147->m128i_i64[0] != *(_QWORD *)v146 )
                goto LABEL_225;
            }
          }
        }
        if ( v146 < v460 - 3 && v147->m128i_i32[0] == *(_DWORD *)v146 )
        {
          v146 += 4;
          v147 = (const __m128i *)((char *)v147 + 4);
        }
        if ( v146 < v460 - 1 && v147->m128i_i16[0] == *(_WORD *)v146 )
        {
          v146 += 2;
          v147 = (const __m128i *)((char *)v147 + 2);
        }
        if ( v146 < v460 )
          v146 += v147->m128i_i8[0] == (unsigned __int8)*v146;
        v152 = &v146[-v143];
LABEL_320:
        v37 = v152 + 8;
        v250 = v17 - (_DWORD)v26;
        if ( v26 <= v494 || v17 <= (unsigned __int64)v7 )
          goto LABEL_546;
        v36 = v17;
        if ( *(_BYTE *)(v17 - 1) == v26[-1].m128i_i8[15] )
        {
          v471 = v22;
          do
          {
            --v36;
            v26 = (const __m128i *)((char *)v26 - 1);
            v37 = &v152[v17 + 8 - v36];
          }
          while ( (unsigned __int64)v7 < v36 && v26 > v494 && *(_BYTE *)(v36 - 1) == v26[-1].m128i_i8[15] );
LABEL_327:
          LODWORD(v22) = v471;
        }
LABEL_328:
        if ( v23 <= 3 )
          *(_DWORD *)(v20 + 4 * v24) = v22 - v19;
        v251 = *(__m128i **)(v5 + 24);
        v252 = v36 - (_QWORD)v7;
        if ( v36 > (unsigned __int64)v478 )
        {
          sub_916400(v251, v7, v36, v478);
LABEL_337:
          *(_QWORD *)(v5 + 24) += v252;
          v253 = *(_QWORD *)(v5 + 8);
          if ( v252 > 0xFFFF )
          {
            v255 = v253 - *(_QWORD *)v5;
            *(_DWORD *)(v5 + 72) = 1;
            *(_DWORD *)(v5 + 76) = v255 >> 3;
          }
          goto LABEL_333;
        }
        *v251 = _mm_loadu_si128(v7);
        if ( v252 > 0x10 )
        {
          v321 = *(__m128i **)(v5 + 24);
          v321[1] = _mm_loadu_si128(v7 + 1);
          if ( (__int64)(v252 - 16) > 16 )
          {
            v322 = &v321->m128i_i8[v252];
            v323 = v7 + 2;
            v324 = v321 + 2;
            do
            {
              v325 = _mm_loadu_si128(v323);
              v324 += 2;
              v323 += 2;
              v324[-2] = v325;
              v324[-1] = _mm_loadu_si128(v323 - 1);
            }
            while ( v322 > (char *)v324 );
          }
          goto LABEL_337;
        }
        *(_QWORD *)(v5 + 24) += v252;
        v253 = *(_QWORD *)(v5 + 8);
LABEL_333:
        *(_WORD *)(v253 + 4) = v252;
        **(_DWORD **)(v5 + 8) = v250 + 3;
        v254 = *(_QWORD *)(v5 + 8);
        if ( (unsigned __int64)(v37 - 3) > 0xFFFF )
        {
          *(_DWORD *)(v5 + 72) = 2;
          *(_DWORD *)(v5 + 76) = (v254 - *(_QWORD *)v5) >> 3;
        }
        *(_WORD *)(v254 + 6) = (_WORD)v37 - 3;
        *(_QWORD *)(v5 + 8) += 8LL;
        v469 = v454;
        v454 = v250;
LABEL_35:
        v17 = (unsigned __int64)&v37[v36];
        v7 = (const __m128i *)&v37[v36];
        if ( (unsigned __int64)&v37[v36] <= v450 )
        {
          v43 = (_QWORD *)(v19 + (unsigned int)(v474 + 2));
          *(_DWORD *)(v20 + 4 * ((0xCF1BBCDCB7A56463LL * *v43) >> v473)) = v474 + 2;
          *(_DWORD *)(v20 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v17 - 2)) >> v473)) = v17 - 2 - v19;
          *(_DWORD *)(v445 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)v43) >> v464)) = v474 + 2;
          *(_DWORD *)(v445 + 4LL * ((unsigned int)(-1640531535 * *(_DWORD *)(v17 - 1)) >> v464)) = v17 - 1 - v19;
          v44 = v469;
          v45 = *(_DWORD *)v17;
          if ( *(_DWORD *)(v17 - v469) != *(_DWORD *)v17 || !v469 )
          {
LABEL_38:
            v7 = (const __m128i *)v17;
            goto LABEL_13;
          }
          while ( 2 )
          {
            v391 = v17 + 4;
            v392 = (_QWORD *)(v17 + 4 - v44);
            if ( v17 + 4 >= v459 )
            {
              v416 = (char *)(v17 + 4);
            }
            else
            {
              v393 = *(_QWORD *)(v17 + 4);
              if ( *v392 != v393 )
              {
                _RAX = v393 ^ *v392;
                __asm { tzcnt   rax, rax }
                v396 = (char *)((unsigned int)_RAX >> 3);
LABEL_669:
                v397 = v396 + 4;
                *(_DWORD *)(v445 + 4LL * ((unsigned int)(-1640531535 * v45) >> v464)) = v17 - v19;
                *(_DWORD *)(v20 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)v17) >> v473)) = v17 - v19;
                if ( (unsigned __int64)v478 < v17 )
                  sub_916400(*(__m128i **)(v5 + 24), (const __m128i *)v17, v17, v478);
                else
                  *(__m128i *)*(_QWORD *)(v5 + 24) = _mm_loadu_si128((const __m128i *)v17);
                *(_WORD *)(*(_QWORD *)(v5 + 8) + 4LL) = 0;
                **(_DWORD **)(v5 + 8) = 1;
                v398 = *(_QWORD *)(v5 + 8);
                if ( (unsigned __int64)(v396 + 1) > 0xFFFF )
                {
                  *(_DWORD *)(v5 + 72) = 2;
                  *(_DWORD *)(v5 + 76) = (v398 - *(_QWORD *)v5) >> 3;
                }
                *(_WORD *)(v398 + 6) = (_WORD)v396 + 1;
                v17 += (unsigned __int64)v397;
                *(_QWORD *)(v5 + 8) += 8LL;
                if ( v17 > v450 )
                {
                  v444 = v469;
                  v469 = v454;
                  v454 = v444;
                  goto LABEL_38;
                }
                v44 = v454;
                v45 = *(_DWORD *)v17;
                if ( v454 == 0 || *(_DWORD *)(v17 - v454) != *(_DWORD *)v17 )
                {
                  v399 = v469;
                  v469 = v454;
                  v454 = v399;
                  goto LABEL_38;
                }
                v441 = v454;
                v454 = v469;
                v469 = v441;
                continue;
              }
              v416 = (char *)(v17 + 12);
              v435 = v392 + 1;
              if ( v459 <= v17 + 12 )
              {
                ++v392;
              }
              else
              {
                v436 = v392[1];
                v437 = *(_QWORD *)(v17 + 12);
                if ( v437 != v436 )
                {
                  _RDX = v436 ^ v437;
LABEL_759:
                  __asm { tzcnt   r9, rdx }
                  v396 = &v416[((unsigned int)_R9 >> 3) - v391];
                  goto LABEL_669;
                }
                v392 = v435;
                while ( 1 )
                {
                  v416 += 8;
                  ++v392;
                  if ( v459 <= (unsigned __int64)v416 )
                    break;
                  if ( *v392 != *(_QWORD *)v416 )
                  {
                    _RDX = *(_QWORD *)v416 ^ *v392;
                    goto LABEL_759;
                  }
                }
              }
            }
            break;
          }
          if ( v416 < v460 - 3 && *(_DWORD *)v392 == *(_DWORD *)v416 )
          {
            v416 += 4;
            v392 = (_QWORD *)((char *)v392 + 4);
          }
          if ( v416 < v460 - 1 && *(_WORD *)v392 == *(_WORD *)v416 )
          {
            v416 += 2;
            v392 = (_QWORD *)((char *)v392 + 2);
          }
          if ( v416 < v460 )
            v416 += *(_BYTE *)v392 == (unsigned __int8)*v416;
          v396 = &v416[-v391];
          goto LABEL_669;
        }
      }
LABEL_156:
      v133 = v454;
      if ( v496 && v454 )
      {
        v489 = v493;
      }
      else if ( !v454 )
      {
        v133 = v493;
      }
      v134 = v469;
      if ( !v469 )
        v134 = v489;
      *a3 = v133;
      a3[1] = v134;
      return v460 - (__int8 *)v7;
  }
}
