__int64 __fastcall c_ekketsj(__int64 a1, __int64 a2, int *a3, int a4, int a5, int *a6, double a7, int a8, __int64 a9)
{
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r13
  int v12; // eax
  int v13; // r14d
  __int64 v14; // r12
  int v15; // ecx
  double v16; // xmm3_8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rsi
  int v20; // ecx
  int v21; // edx
  int *v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // esi
  int *v26; // rax
  int v27; // edi
  int v28; // edi
  __int64 v29; // rax
  _DWORD *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r14d
  int v39; // esi
  int *v40; // rdi
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // r10
  int v44; // ecx
  int v45; // r12d
  int *v46; // rax
  __int64 v47; // rbp
  __int64 v48; // r10
  bool v49; // r11
  __int64 v50; // rsi
  _DWORD *v51; // rax
  _DWORD *v52; // rdi
  int v53; // r14d
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __m128i v58; // xmm1
  __int64 v59; // rdx
  __int64 i; // rax
  int v61; // esi
  __int64 v62; // rdx
  _DWORD *v63; // rdi
  __int64 v64; // rdx
  int v65; // ebx
  int v66; // edx
  int v67; // r11d
  __int64 v68; // rax
  int v69; // eax
  int v70; // edx
  __int64 v71; // rbx
  __int64 v72; // r11
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // r10
  __int64 v78; // r11
  __int64 v79; // rdi
  int *v80; // r9
  int v81; // eax
  double v82; // xmm5_8
  __int64 v83; // rsi
  _DWORD *v84; // r8
  __int64 v85; // rax
  __int64 v86; // rsi
  double v87; // xmm1_8
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rax
  double v91; // xmm1_8
  __int64 v92; // rax
  int *v93; // rdi
  __int64 v94; // rdx
  double *v95; // rdx
  int v96; // eax
  int v97; // edx
  double v98; // xmm5_8
  int v99; // eax
  double v100; // xmm6_8
  double v101; // xmm2_8
  __int64 v102; // rax
  __int64 v103; // rax
  int *v104; // rsi
  __int64 v105; // r10
  int v106; // r8d
  __int64 v107; // rax
  int v108; // r14d
  __int64 v109; // rbx
  __int64 v110; // rdx
  int v111; // ecx
  int v112; // edi
  int v113; // eax
  char v114; // si
  int v115; // r8d
  int v116; // eax
  int v117; // r9d
  int v118; // eax
  int v119; // edx
  int v120; // edx
  int v121; // eax
  int v122; // eax
  int v123; // edx
  int *v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  int v127; // esi
  _DWORD *v128; // rax
  int v129; // ebx
  int v130; // edx
  __int64 v131; // rax
  _DWORD *v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rsi
  int v135; // ecx
  __int64 v136; // r8
  int *v137; // rsi
  int v138; // eax
  int v139; // edx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // rdi
  int *v143; // rax
  int v144; // edx
  int v145; // eax
  int v146; // eax
  int *v147; // r8
  int v148; // ebp
  __int64 v149; // rbx
  int v150; // r11d
  __int64 v151; // rdx
  __int64 v152; // rsi
  int *v153; // r10
  __int64 m; // rax
  int v155; // r9d
  int v156; // edi
  _DWORD *v157; // rcx
  __int64 v158; // rdx
  int v159; // eax
  int v160; // edx
  int v161; // eax
  int v162; // eax
  int v163; // edx
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rax
  double v168; // xmm1_8
  __int64 v169; // rax
  __int64 v170; // r9
  int *v171; // rdx
  __int64 v172; // rcx
  double *v173; // rcx
  __int64 v174; // r8
  _DWORD *v175; // rdi
  int v176; // edx
  _QWORD *v177; // rdi
  _QWORD *v178; // rsi
  __int64 v179; // rdx
  __int64 *v180; // rax
  __int64 v181; // r8
  __int64 v182; // xmm1_8
  __int64 v183; // rax
  __int64 v184; // xmm1_8
  bool v185; // cc
  int v186; // eax
  _QWORD *v187; // rax
  __int64 v188; // rdx
  __int64 v189; // xmm1_8
  __int64 v190; // xmm1_8
  int v191; // esi
  int v192; // edi
  int v193; // ecx
  int v194; // eax
  int v195; // edx
  int v196; // ecx
  int v197; // edx
  int v198; // r10d
  int v199; // r12d
  __int64 v200; // rbx
  unsigned int v201; // eax
  int *v202; // rdx
  int v203; // ebp
  __int64 v204; // r8
  __int64 v205; // rdx
  __int64 v206; // rdi
  __int64 v207; // r10
  __int64 v208; // rcx
  __int64 v209; // r11
  __int64 v210; // rbx
  unsigned int v211; // r9d
  unsigned int v212; // esi
  __int64 v213; // xmm1_8
  int v214; // r11d
  int v215; // r14d
  int v216; // ecx
  int v217; // ecx
  __int64 v218; // xmm1_8
  __int64 v219; // r9
  __int64 v220; // rdi
  int v221; // ecx
  __int64 v222; // xmm1_8
  __int64 v223; // rdi
  unsigned int v224; // eax
  __int64 v225; // rdx
  __int64 v226; // r10
  __int64 v227; // r12
  __int64 v228; // rsi
  __int64 v229; // r10
  __int64 v230; // rdx
  __int64 v231; // r8
  unsigned int v232; // edi
  __int128 v233; // xmm1
  int v234; // ecx
  unsigned int v235; // r9d
  __int64 v236; // xmm1_8
  int v237; // edi
  int v238; // eax
  int v239; // esi
  __int64 v240; // xmm1_8
  int v241; // edi
  __int64 v242; // rax
  int v243; // esi
  __int64 v244; // xmm1_8
  int v245; // edi
  __int64 v246; // rax
  int v247; // esi
  __int64 v248; // xmm1_8
  int v249; // edi
  int v250; // esi
  int v251; // ecx
  __int64 v252; // xmm1_8
  int v253; // eax
  __int64 v254; // xmm1_8
  __int64 v255; // r9
  int v256; // ebp
  int v257; // r10d
  int k; // ebx
  int v259; // r11d
  int *v260; // r12
  int v261; // ecx
  __int64 v262; // rax
  __int64 v263; // xmm1_8
  __int64 v264; // rcx
  __int64 v265; // rdi
  __int64 v266; // rax
  __int64 v267; // xmm1_8
  int v268; // eax
  int *v269; // rdi
  __int64 v270; // r11
  __int64 v271; // r9
  __int64 v272; // rsi
  int *v273; // r10
  int v274; // eax
  int v275; // r8d
  __int64 j; // rcx
  _QWORD *v277; // rax
  signed int v278; // edx
  __int64 v279; // rax
  __int64 v280; // xmm1_8
  double *v281; // rax
  __int64 v282; // xmm1_8
  __int64 v283; // r10
  double v284; // xmm6_8
  __int64 v285; // rbx
  _DWORD *v286; // r11
  _DWORD *v287; // rbp
  _DWORD *v288; // r13
  int v289; // r15d
  int v290; // ebx
  int n; // eax
  __int64 v292; // rdi
  __int64 v293; // rdx
  _BYTE *v294; // rsi
  int v295; // ecx
  __int64 v296; // rdx
  int v297; // esi
  _BYTE *v298; // rdx
  __int64 v299; // rdx
  int v300; // r9d
  int v301; // eax
  bool v302; // zf
  int *v303; // rcx
  __int64 v304; // r11
  __int64 v305; // rdi
  double *v306; // r8
  int v307; // eax
  double v308; // xmm4_8
  __int64 v309; // rdx
  int v310; // edi
  int v311; // ebx
  __int64 v312; // r9
  __int64 v313; // rdi
  __int64 v314; // r8
  __int64 v315; // rax
  __int64 v316; // rdx
  double v317; // xmm5_8
  double *v318; // rax
  __int64 v319; // rax
  int v320; // edx
  __int64 v321; // r12
  __int64 v322; // r8
  _DWORD *v323; // r10
  __int64 v324; // rbx
  int *v325; // r11
  int *v326; // rbx
  int v327; // edx
  int *v328; // rcx
  _DWORD *v329; // rdx
  int v330; // ebx
  int v331; // eax
  _DWORD *v332; // rdx
  __int64 v333; // rsi
  _OWORD *v334; // rax
  __int64 v335; // rbp
  unsigned int v336; // r14d
  int *v337; // rsi
  __int64 v338; // rcx
  __int64 v339; // rdx
  int v340; // ecx
  __int64 v341; // rax
  __int64 v342; // rcx
  __int64 v343; // rax
  int v344; // edx
  int v345; // edx
  __int64 v346; // r11
  __int64 v347; // rdx
  __int64 v348; // rdi
  int v349; // ecx
  __int64 v350; // r9
  __int64 v351; // rcx
  __int64 v352; // r9
  __int64 v353; // xmm0_8
  __int64 v354; // rax
  int *v355; // rdx
  _DWORD *v356; // rax
  int v357; // esi
  __int64 v358; // r8
  __int64 v359; // rcx
  __int64 v360; // rdx
  int v361; // esi
  __int64 v362; // rax
  __int64 v363; // rsi
  __int64 v364; // rcx
  int *v365; // r12
  int v366; // edx
  __int64 v367; // [rsp+0h] [rbp-198h]
  __int64 v368; // [rsp+8h] [rbp-190h]
  int v369; // [rsp+10h] [rbp-188h]
  __int64 v370; // [rsp+18h] [rbp-180h]
  __int64 v371; // [rsp+18h] [rbp-180h]
  unsigned int v372; // [rsp+18h] [rbp-180h]
  __int64 v373; // [rsp+20h] [rbp-178h]
  unsigned __int64 v374; // [rsp+20h] [rbp-178h]
  int v375; // [rsp+20h] [rbp-178h]
  __int64 v376; // [rsp+20h] [rbp-178h]
  int v377; // [rsp+20h] [rbp-178h]
  int v378; // [rsp+20h] [rbp-178h]
  int v379; // [rsp+2Ch] [rbp-16Ch]
  int *v380; // [rsp+30h] [rbp-168h]
  __int64 v381; // [rsp+30h] [rbp-168h]
  __int64 v382; // [rsp+38h] [rbp-160h]
  __int64 v383; // [rsp+38h] [rbp-160h]
  __int64 v384; // [rsp+40h] [rbp-158h]
  __int64 v385; // [rsp+48h] [rbp-150h]
  int v386; // [rsp+50h] [rbp-148h]
  __int64 v387; // [rsp+50h] [rbp-148h]
  __int64 v388; // [rsp+50h] [rbp-148h]
  int *v390; // [rsp+60h] [rbp-138h]
  int v391; // [rsp+68h] [rbp-130h]
  int v392; // [rsp+70h] [rbp-128h]
  int v393; // [rsp+74h] [rbp-124h]
  char v394; // [rsp+7Bh] [rbp-11Dh]
  __int64 v396; // [rsp+80h] [rbp-118h]
  int v397; // [rsp+88h] [rbp-110h]
  int v398; // [rsp+8Ch] [rbp-10Ch]
  int *v399; // [rsp+90h] [rbp-108h]
  int *v400; // [rsp+98h] [rbp-100h]
  __int64 v401; // [rsp+A0h] [rbp-F8h]
  __int64 v404; // [rsp+C8h] [rbp-D0h]
  __int64 v405; // [rsp+D0h] [rbp-C8h]
  __int64 v406; // [rsp+D8h] [rbp-C0h]
  int v408; // [rsp+ECh] [rbp-ACh]
  __int64 v409; // [rsp+F0h] [rbp-A8h]
  int *v410; // [rsp+F8h] [rbp-A0h]
  __int64 v411; // [rsp+100h] [rbp-98h]
  int v412; // [rsp+108h] [rbp-90h]
  int v413; // [rsp+10Ch] [rbp-8Ch]
  __int64 v414; // [rsp+110h] [rbp-88h]
  _DWORD *v415; // [rsp+118h] [rbp-80h]
  _DWORD *v416; // [rsp+120h] [rbp-78h]
  int *v417; // [rsp+128h] [rbp-70h]
  int *v418; // [rsp+130h] [rbp-68h]
  int v419; // [rsp+138h] [rbp-60h]
  int v420[15]; // [rsp+15Ch] [rbp-3Ch] BYREF

  v9 = a1;
  v10 = *(_QWORD *)(a1 + 160);
  v11 = *(_QWORD *)(a1 + 168);
  v379 = *a6;
  v401 = *(_QWORD *)(a1 + 80);
  v396 = *(_QWORD *)(a1 + 88);
  v369 = *(_DWORD *)(a1 + 240);
  v385 = *(_QWORD *)(a1 + 176);
  v367 = *(_QWORD *)(a1 + 40);
  v384 = *(_QWORD *)(a1 + 48);
  v368 = *(_QWORD *)(a1 + 56);
  v370 = *(_QWORD *)(a1 + 184);
  v413 = *(_DWORD *)(v367 + 4);
  v394 = *(_BYTE *)(a1 + 356);
  v12 = *(_DWORD *)(a1 + 340);
  v411 = *(_QWORD *)(a1 + 104);
  if ( v394 )
  {
    v13 = v12 > 0;
  }
  else
  {
    v13 = 0;
    *(_DWORD *)(a1 + 340) = (v12 >> 31) - ((v12 >> 31) ^ v12);
  }
  if ( a5 == 1 )
    *(_DWORD *)(a1 + 280) = 0;
  v397 = 0;
  v14 = *(int *)(v396 + 4LL * a8);
  v405 = v14;
  v406 = 4 * v14;
  v399 = (int *)(4 * v14 + v384);
  v412 = *v399;
  v393 = *(_DWORD *)(a1 + 292);
  if ( v393 )
  {
    v393 = *(_DWORD *)(v384 + 4LL * *(int *)(a1 + 308));
    v397 = *(_DWORD *)(v384 + 4LL * *(int *)(a1 + 312));
  }
  v15 = *(_DWORD *)(a1 + 288);
  *(double *)(a1 + 8) = (double)(v15
                               + *(_DWORD *)(a1 + 260)
                               - (*(_DWORD *)(a1 + 260)
                                - *(_DWORD *)(a1 + 284)
                                + *(_DWORD *)(*(_QWORD *)(a1 + 144) + 4LL * *(int *)(a1 + 360) + 4)
                                - 1));
  if ( v379 < 0 )
    goto LABEL_135;
  v16 = 0.0;
  if ( v379 )
  {
    LODWORD(i) = v15 + 1;
    v61 = v15 + v379;
    if ( *(_DWORD *)(a1 + 364) )
    {
      if ( *(_DWORD *)(v11 + 4LL * v61) == (_DWORD)v14 )
      {
        --v379;
        v16 = *(double *)(v385 + 8LL * v61);
        goto LABEL_9;
      }
      v174 = (int)i;
      v175 = (_DWORD *)(v11 + 4LL * (int)i);
      if ( *v175 == (_DWORD)v14 )
      {
LABEL_290:
        --v379;
        v318 = (double *)(v385 + 8 * v174);
        v16 = *v318;
        *v175 = *(_DWORD *)(v11 + 4LL * (v15 + v379) + 4);
        *v318 = *(double *)(v385 + 8LL * (*(_DWORD *)(v9 + 288) + v379) + 8);
        goto LABEL_9;
      }
      while ( 1 )
      {
        v176 = ((int)i + v61) >> 1;
        if ( (_DWORD)i == v176 )
          break;
        v174 = v176;
        v175 = (_DWORD *)(v11 + 4LL * v176);
        if ( *v175 >= (int)v14 )
        {
          v61 = ((int)i + v61) >> 1;
          if ( *v175 <= (int)v14 )
            goto LABEL_290;
        }
        else
        {
          LODWORD(i) = ((int)i + v61) >> 1;
        }
      }
    }
    else
    {
      if ( (int)i > v61 )
        goto LABEL_9;
      i = (int)i;
      v62 = 4LL * (int)i;
      v63 = (_DWORD *)(v11 + v62);
      if ( (_DWORD)v14 == *(_DWORD *)(v11 + v62) )
      {
LABEL_268:
        --v379;
        v281 = (double *)(v385 + 8 * i);
        v282 = *(_QWORD *)(v385 + 8LL * v61);
        v16 = *v281;
        *v63 = *(_DWORD *)(v11 + 4LL * v61);
        *(_QWORD *)v281 = v282;
        goto LABEL_9;
      }
      v64 = v11 + v62 + 4;
      for ( i = v15 + 2; v61 >= (int)i; ++i )
      {
        v63 = (_DWORD *)v64;
        v64 += 4;
        if ( *v63 == (_DWORD)v14 )
          goto LABEL_268;
      }
    }
    v16 = 0.0;
  }
LABEL_9:
  v404 = v401 + 4;
  v414 = v370 - 8;
  if ( !v394 )
  {
    v65 = *(_DWORD *)(v9 + 312);
    v66 = *(_DWORD *)(v9 + 308);
    v67 = *(_DWORD *)(v9 + 240);
    v68 = *(int *)(v404 + 4 * v14);
    v420[0] = *(_DWORD *)(v404 + 4 * v14);
    if ( v65 > v66 && *(_DWORD *)(v384 + 4 * v68) <= *(_DWORD *)(v384 + 4LL * v65) )
    {
      v378 = v67;
      sub_212110((_QWORD *)(v9 + 96), (int *)(v9 + 324), 1, v385, v11, v384, v404, a2, v420, v14, v66);
      sub_212110((_QWORD *)(v9 + 96), (int *)(v9 + 324), 0, v385, v11, v384, v404, a2, v420, v14, v65 + 1);
      v67 = v378;
    }
    sub_212110((_QWORD *)(v9 + 96), (int *)(v9 + 324), 1, v385, v11, v384, v404, a2, v420, v14, v67 + 1);
    v394 = 1;
    goto LABEL_48;
  }
  v17 = *v399;
  v18 = *v399;
  v19 = 4 * v17;
  v20 = v17 + *(_DWORD *)(v11 + 4 * v17);
  v21 = v17 + 1;
  if ( !v370 || (v13 & 1) == 0 )
  {
    if ( v20 >= v21 )
    {
      v124 = (int *)(v11 + v19 + 4);
      v125 = v11 + 4 * ((unsigned int)(v20 + ~v18) + (__int64)v21) + 4;
      do
      {
        while ( 1 )
        {
          v126 = *v124;
          v127 = *(_DWORD *)(v367 + 4 * v126);
          v128 = (_DWORD *)(v368 + 4 * v126);
          v129 = (*v128)--;
          v130 = v127 + v129 - 1;
          if ( v127 < v130 )
            break;
LABEL_108:
          if ( (int *)v125 == ++v124 )
            goto LABEL_109;
        }
        v131 = 4LL * v127;
        v132 = (_DWORD *)(v10 + v131);
        if ( (_DWORD)v14 != *(_DWORD *)(v10 + v131) )
        {
          v133 = v10 + v131 + 4;
          v134 = v10 + 4 + 4 * ((unsigned int)(~v127 + v130) + (__int64)v127);
          while ( v134 != v133 )
          {
            v132 = (_DWORD *)v133;
            v133 += 4;
            if ( *(_DWORD *)(v133 - 4) == (_DWORD)v14 )
              goto LABEL_129;
          }
          goto LABEL_108;
        }
LABEL_129:
        ++v124;
        *v132 = *(_DWORD *)(v10 + 4LL * v130);
      }
      while ( (int *)v125 != v124 );
    }
LABEL_109:
    v135 = *(_DWORD *)(v9 + 288);
    v34 = v135 + 1;
    v398 = v135 + v379;
    v35 = v369;
    v409 = v396 + 8LL * v369 + 12;
    v380 = (int *)(v409 + 4LL * v369 + 8);
    v418 = (int *)(v406 + v368);
    v417 = (int *)(v406 + v367);
    if ( v370 )
    {
      if ( v13 )
        goto LABEL_22;
      if ( v34 > v398 )
      {
        v144 = *(_DWORD *)(v406 + v367);
        goto LABEL_241;
      }
    }
    else
    {
      v143 = (int *)(v406 + v367);
      if ( v34 > v135 + v379 )
      {
LABEL_117:
        v144 = *v143;
        v145 = *v418;
        *v418 = 0;
        v146 = v144 + v145 - 1;
        if ( v13 )
          goto LABEL_118;
        goto LABEL_242;
      }
    }
    v136 = *(int *)(v11 + 4LL * v34);
    v137 = (int *)(v368 + 4 * v136);
    v138 = *v137;
    v139 = *v137 + *(_DWORD *)(v367 + 4 * v136);
    if ( *(_DWORD *)(v367 + 4LL * v380[v136]) <= v139 )
      goto LABEL_240;
    v140 = v135 + 2;
    v141 = v11 + 4LL * v34 - 4LL * (v34 + 1);
    while ( 1 )
    {
      *v137 = v138 + 1;
      *(_DWORD *)(v10 + 4LL * v139) = v14;
      if ( v398 < (int)v140 )
        break;
      v142 = *(int *)(v141 + 4 * v140++ + 4);
      v137 = (int *)(v368 + 4 * v142);
      v138 = *v137;
      v139 = *v137 + *(_DWORD *)(v367 + 4 * v142);
      if ( *(_DWORD *)(v367 + 4LL * v380[v142]) <= v139 )
        goto LABEL_240;
    }
    v143 = (int *)(v406 + v367);
    goto LABEL_117;
  }
  if ( v20 >= v21 )
  {
    v22 = (int *)(v11 + v19 + 4);
    v23 = v11 + 4 * ((unsigned int)(v20 + ~v18) + (__int64)v21) + 4;
    do
    {
      v24 = *v22;
      v25 = *(_DWORD *)(v367 + 4 * v24);
      v26 = (int *)(v368 + 4 * v24);
      v27 = *v26 - 1;
      *v26 = v27;
      v28 = v25 + v27;
      if ( v25 < v28 )
      {
        v29 = 4LL * v25;
        v30 = (_DWORD *)(v10 + v29);
        if ( (_DWORD)v14 == *(_DWORD *)(v10 + v29) )
        {
          v31 = v25;
LABEL_191:
          v190 = *(_QWORD *)(v414 + 8LL * v28);
          *v30 = *(_DWORD *)(v10 + 4LL * v28);
          *(_QWORD *)(v414 + 8 * v31) = v190;
        }
        else
        {
          v31 = v25 + 1LL;
          v32 = v10 + v29 + 4;
          while ( v10 + 4 + 4 * ((unsigned int)(~v25 + v28) + (__int64)v25) != v32 )
          {
            v30 = (_DWORD *)v32;
            v32 += 4;
            if ( *v30 == (_DWORD)v14 )
              goto LABEL_191;
            ++v31;
          }
        }
      }
      ++v22;
    }
    while ( (int *)v23 != v22 );
  }
  v33 = *(_DWORD *)(v9 + 288);
  v34 = v33 + 1;
  v398 = v379 + v33;
  v35 = v369;
  v409 = v396 + 8LL * v369 + 12;
  v380 = (int *)(v409 + 4LL * v369 + 8);
  v418 = (int *)(v406 + v368);
  v417 = (int *)(v406 + v367);
LABEL_22:
  if ( v398 >= v34 )
  {
    v36 = 4 * v35 + 4;
    v382 = v34;
    v408 = v14;
    v410 = (int *)(v36 + v409);
    v415 = (_DWORD *)v9;
    v416 = (_DWORD *)(v367 + v36);
    while ( 1 )
    {
      v37 = *(int *)(v11 + 4 * v382);
      v38 = *(_DWORD *)(v368 + 4 * v37);
      v390 = (int *)(v368 + 4 * v37);
      v392 = v38;
      v391 = v38 + 1;
      v39 = *(_DWORD *)(v367 + 4 * v37);
      v400 = (int *)(v367 + 4 * v37);
      v40 = &v380[v37];
      v41 = *v40;
      v42 = v39 + v38;
      if ( *(_DWORD *)(v367 + 4 * v41) <= v39 + v38 )
      {
        v43 = *v410;
        v44 = *(_DWORD *)(v367 + 4 * v43) + *(_DWORD *)(v368 + 4 * v43);
        v386 = *v410;
        v45 = v44 + 2;
        if ( *v416 - (v44 + 2) > v38 + 1 )
        {
          v46 = (int *)(v409 + 4 * v37);
          v47 = *v46;
          v380[v47] = v41;
          *(_DWORD *)(v409 + 4 * v41) = v47;
          v380[v43] = v37;
          v48 = v39;
          v49 = v38 == 0;
          v50 = 4LL * v39;
          *v410 = v37;
          *v46 = v386;
          *v40 = v369 + 1;
          v51 = (_DWORD *)(v10 + v50);
          *v400 = v45;
          v52 = (_DWORD *)(v10 + 4LL * v45);
          if ( v52 != (_DWORD *)(v10 + v50) && v38 )
          {
            v53 = v38 >> 3;
            if ( v53 > 0 )
            {
              v54 = 4LL * v44 + 8;
              if ( (v54 >= v50 + 32 || v50 >= 4LL * v44 + 40) && (unsigned int)v53 > 1 )
              {
                v55 = v10 + v54;
                v56 = 0;
                v57 = (unsigned int)(v53 - 1);
                do
                {
                  v58 = _mm_loadu_si128((const __m128i *)&v51[v56 + 4]);
                  *(__m128i *)(v55 + v56 * 4) = _mm_loadu_si128((const __m128i *)&v51[v56]);
                  *(__m128i *)(v55 + v56 * 4 + 16) = v58;
                  v56 += 8;
                }
                while ( 8 * (v57 + 1) != v56 );
              }
              else
              {
                v328 = (int *)(v10 + v50);
                v57 = (unsigned int)(v53 - 1);
                v329 = (_DWORD *)(v10 + 4LL * v45);
                do
                {
                  v330 = *v328;
                  v329 += 8;
                  v328 += 8;
                  *(v329 - 8) = v330;
                  *(v329 - 7) = *(v328 - 7);
                  *(v329 - 6) = *(v328 - 6);
                  *(v329 - 5) = *(v328 - 5);
                  *(v329 - 4) = *(v328 - 4);
                  *(v329 - 3) = *(v328 - 3);
                  *(v329 - 2) = *(v328 - 2);
                  *(v329 - 1) = *(v328 - 1);
                }
                while ( &v52[8 * v57 + 8] != v329 );
              }
              v59 = 32 * ((int)v57 + 1LL);
              v51 = (_DWORD *)((char *)v51 + v59);
              v52 = (_DWORD *)((char *)v52 + v59);
            }
            switch ( v392 % 8 )
            {
              case 1:
                goto LABEL_170;
              case 2:
                goto LABEL_169;
              case 3:
                goto LABEL_168;
              case 4:
                goto LABEL_167;
              case 5:
                goto LABEL_166;
              case 6:
                goto LABEL_165;
              case 7:
                v52[6] = v51[6];
LABEL_165:
                v52[5] = v51[5];
LABEL_166:
                v52[4] = v51[4];
LABEL_167:
                v52[3] = v51[3];
LABEL_168:
                v52[2] = v51[2];
LABEL_169:
                v52[1] = v51[1];
LABEL_170:
                *v52 = *v51;
                break;
              default:
                break;
            }
          }
          v177 = (_QWORD *)(v414 + 8LL * v45);
          v178 = (_QWORD *)(v414 + 8 * v48);
          if ( v177 != v178 && !v49 )
          {
            if ( v392 >> 3 > 0 )
            {
              v179 = v414 + 8LL * v45;
              v180 = (__int64 *)(v414 + 8 * v48);
              v181 = (unsigned int)((v392 >> 3) - 1);
              do
              {
                v182 = *v180;
                v180 += 8;
                v179 += 64;
                *(_QWORD *)(v179 - 64) = v182;
                *(_QWORD *)(v179 - 56) = *(v180 - 7);
                *(_QWORD *)(v179 - 48) = *(v180 - 6);
                *(_QWORD *)(v179 - 40) = *(v180 - 5);
                *(_QWORD *)(v179 - 32) = *(v180 - 4);
                *(_QWORD *)(v179 - 24) = *(v180 - 3);
                *(_QWORD *)(v179 - 16) = *(v180 - 2);
                *(_QWORD *)(v179 - 8) = *(v180 - 1);
              }
              while ( v180 != &v178[8 * v181 + 8] );
              v183 = ((int)v181 + 1LL) << 6;
              v178 = (_QWORD *)((char *)v178 + v183);
              v177 = (_QWORD *)((char *)v177 + v183);
            }
            switch ( v392 % 8 )
            {
              case 1:
                goto LABEL_184;
              case 2:
                goto LABEL_183;
              case 3:
                goto LABEL_182;
              case 4:
                goto LABEL_181;
              case 5:
                goto LABEL_180;
              case 6:
                goto LABEL_179;
              case 7:
                v177[6] = v178[6];
LABEL_179:
                v177[5] = v178[5];
LABEL_180:
                v177[4] = v178[4];
LABEL_181:
                v177[3] = v178[3];
LABEL_182:
                v177[2] = v178[2];
LABEL_183:
                v177[1] = v178[1];
LABEL_184:
                *v177 = *v178;
                break;
              default:
                break;
            }
          }
          v42 = v45 + v392;
          goto LABEL_186;
        }
        v191 = v415[72];
        v192 = v415[71];
        v419 = v415[65] - v191 - v192 - 3;
        if ( 2 * v369 >= v419 )
        {
          LODWORD(v14) = v408;
          v9 = (__int64)v415;
LABEL_240:
          v144 = *v417;
          *(_DWORD *)(v367 + 4) = -1;
          *(_BYTE *)(v9 + 356) = 0;
LABEL_241:
          v268 = *v418;
          *v418 = 0;
          v146 = v144 + v268 - 1;
LABEL_242:
          if ( v146 < v144 )
          {
            v394 = 0;
            v13 = 0;
            goto LABEL_48;
          }
          v269 = (int *)(v10 + 4LL * v144);
          v270 = v10 + 4 * ((unsigned int)(v146 - v144) + (__int64)v144) + 4;
          do
          {
            v271 = *v269;
            v272 = *(int *)(v384 + 4 * v271);
            v273 = (int *)(v11 + 4 * v272);
            v274 = v272 + 1;
            v275 = *v273;
            j = (int)v272 + 1;
            v13 = v272 + *v273;
            if ( v13 >= (int)v272 + 1 && (_DWORD)v14 != *(_DWORD *)(v11 + 4 * v272 + 4) )
            {
              for ( j = v274 + 1LL; v13 >= ++v274 && *(_DWORD *)(v11 + 4 * (j + 1) - 4) != (_DWORD)v14; ++j )
                ;
            }
            v277 = (_QWORD *)(v385 + 8 * j);
            *(_QWORD *)(a2 + 8 * v271) = *v277;
            if ( v393 > (int)v272 || v397 < (int)v272 )
            {
              *v273 = v275 - 1;
              v280 = *(_QWORD *)(v385 + 8LL * v13);
              *(_DWORD *)(v11 + 4 * j) = *(_DWORD *)(v11 + 4LL * v13);
              *v277 = v280;
            }
            else
            {
              *v277 = 0;
            }
            ++v269;
          }
          while ( (int *)v270 != v269 );
          if ( !v13 )
          {
            v394 = 0;
            goto LABEL_48;
          }
          v278 = *(_DWORD *)(v404 + 4 * v405);
          if ( v369 >= v278 )
          {
            v279 = v278;
            if ( *(double *)(a2 + 8LL * v278) != 0.0 )
            {
LABEL_301:
              v13 = 0;
              sub_210150(v9, a2, v278);
              goto LABEL_48;
            }
            while ( 1 )
            {
              v278 = *(_DWORD *)(v404 + 4 * v279);
              if ( v369 < v278 )
                break;
              v279 = v278;
              if ( *(double *)(a2 + 8LL * v278) != 0.0 )
                goto LABEL_301;
            }
          }
          v13 = 0;
          goto LABEL_48;
        }
        v193 = v415[70];
        if ( v193 <= 999999 )
        {
          v194 = v415[94];
          v195 = v415[65] - v192 + 4 * v191 + 1000;
          if ( v195 < v194 )
            v195 = v415[94];
          if ( v413 )
          {
            v196 = v193 + 1;
            v415[70] = v196;
            if ( a5 > 40 && 16 * v196 > a5 )
            {
              v415[70] = 1000000;
              v194 = (int)((double)v194 * 1.05);
            }
          }
          else
          {
            v415[70] = 1000000;
            v194 = (int)((double)v194 * 1.1);
          }
          if ( v195 <= v194 )
            v194 = v195;
          v197 = v415[96];
          v415[94] = v194;
          if ( v197 > 0 && v197 < v194 )
            v415[94] = v197;
        }
        v198 = *v380;
        if ( v369 > 0 )
        {
          v375 = 0;
          v199 = 1;
          while ( 1 )
          {
            v200 = v198;
            v387 = v198;
            v201 = *(_DWORD *)(v368 + 4LL * v198);
            v202 = (int *)(v367 + 4LL * v198);
            v203 = *v202;
            *v202 = v199;
            if ( v201 )
              break;
LABEL_224:
            ++v375;
            v198 = v380[v200];
            if ( v369 == v375 )
            {
              v255 = *v410;
              if ( 8 * v369 < v419 )
              {
                v256 = 3;
                v257 = 3 * v369 + v199;
              }
              else
              {
                v256 = 4 * v369 < v419;
                v257 = v199 + v256 * v369;
              }
              for ( k = 0; k < v369; ++k )
              {
                v257 -= v256;
                v259 = *(_DWORD *)(v368 + 4 * v255);
                v260 = (int *)(v367 + 4 * v255);
                v261 = v259 + *v260;
                if ( v259 )
                {
                  v262 = 0;
                  do
                  {
                    v263 = *(_QWORD *)(v370 + 8LL * v261 + 2 * v262 - 16);
                    *(_DWORD *)(v10 + 4LL * v257 + v262 - 4) = *(_DWORD *)(v10 + 4LL * v261 + v262 - 4);
                    *(_QWORD *)(v370 + 8LL * v257 + 2 * v262 - 16) = v263;
                    v262 -= 4;
                  }
                  while ( 4 * ~(unsigned __int64)(unsigned int)(v259 - 1) != v262 );
                  v257 -= v259;
                }
                *v260 = v257;
                v255 = *(int *)(v409 + 4 * v255);
              }
              goto LABEL_233;
            }
          }
          v204 = v199;
          v205 = v203;
          v206 = 8LL * v203;
          v207 = 4LL * v199;
          v208 = 4LL * v203;
          v209 = 8LL * v199 - 8;
          if ( v201 > 0xE
            && (v208 >= v207 + 16 || v207 >= v208 + 16)
            && (v206 - 8 >= 8LL * v199 + 24 || v209 >= v206 + 24)
            && (v10 + v207 >= v370 + 8 * (v199 + (unsigned __int64)v201) - 8
             || v370 + v209 >= v10 + 4 * (v199 + (unsigned __int64)v201)) )
          {
            LODWORD(v210) = v201 - 1;
            v211 = v201 - 1;
            v212 = -(int)((unsigned __int64)(v10 + v208) >> 2) & 3;
            if ( v212 + 3 > v201 - 1 )
            {
              v235 = v201;
              v234 = v199;
              v215 = v199 + 1;
LABEL_217:
              v236 = *(_QWORD *)(v414 + 8 * v205);
              v237 = v203 + 1;
              *(_DWORD *)(v10 + 4LL * v234) = *(_DWORD *)(v10 + 4 * v205);
              v238 = v234 + 1;
              *(_QWORD *)(v414 + 8LL * v234) = v236;
              if ( v235 != 1 )
              {
                v239 = *(_DWORD *)(v10 + 4LL * v237);
                v240 = *(_QWORD *)(v414 + 8LL * v237);
                v241 = v203 + 2;
                *(_DWORD *)(v10 + 4LL * v238) = v239;
                *(_QWORD *)(v414 + 8LL * v238) = v240;
                if ( v235 != 2 )
                {
                  v242 = v234 + 2;
                  v243 = *(_DWORD *)(v10 + 4LL * v241);
                  v244 = *(_QWORD *)(v414 + 8LL * v241);
                  v245 = v203 + 3;
                  *(_DWORD *)(v10 + 4 * v242) = v243;
                  *(_QWORD *)(v414 + 8 * v242) = v244;
                  if ( v235 != 3 )
                  {
                    v246 = v234 + 3;
                    v247 = *(_DWORD *)(v10 + 4LL * v245);
                    v248 = *(_QWORD *)(v414 + 8LL * v245);
                    v249 = v203 + 4;
                    *(_DWORD *)(v10 + 4 * v246) = v247;
                    v250 = v234 + 4;
                    *(_QWORD *)(v414 + 8 * v246) = v248;
                    if ( v235 != 4 )
                    {
                      v251 = v234 + 5;
                      v252 = *(_QWORD *)(v414 + 8LL * v249);
                      *(_DWORD *)(v10 + 4LL * v250) = *(_DWORD *)(v10 + 4LL * v249);
                      v253 = v203 + 5;
                      *(_QWORD *)(v414 + 8LL * v250) = v252;
                      if ( v235 != 5 )
                      {
                        v254 = *(_QWORD *)(v414 + 8LL * v253);
                        *(_DWORD *)(v10 + 4LL * v251) = *(_DWORD *)(v10 + 4LL * v253);
                        *(_QWORD *)(v414 + 8LL * v251) = v254;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              if ( v212 )
              {
                v213 = *(_QWORD *)(v414 + 8LL * v203);
                v214 = v203 + 1;
                *(_DWORD *)(v10 + 4LL * v199) = *(_DWORD *)(v10 + 4LL * v203);
                v215 = v199 + 1;
                *(_QWORD *)(v414 + 8LL * v199) = v213;
                v216 = v199 + 1;
                if ( v212 != 1 )
                {
                  v217 = *(_DWORD *)(v10 + 4LL * v214);
                  v218 = *(_QWORD *)(v414 + 8LL * v214);
                  v214 = v203 + 2;
                  v211 = v201 - 2;
                  *(_DWORD *)(v10 + 4LL * v215) = v217;
                  v216 = v199 + 2;
                  *(_QWORD *)(v414 + 8LL * v215) = v218;
                  if ( v212 != 2 )
                  {
                    v219 = v214;
                    v220 = v216;
                    v214 = v203 + 3;
                    v221 = *(_DWORD *)(v10 + 4 * v219);
                    v222 = *(_QWORD *)(v414 + 8 * v219);
                    v211 = v201 - 3;
                    *(_DWORD *)(v10 + 4 * v220) = v221;
                    v216 = v199 + 3;
                    *(_QWORD *)(v414 + 8 * v220) = v222;
                  }
                }
              }
              else
              {
                v211 = v201;
                v214 = v203;
                v216 = v199;
                v215 = v199 + 1;
              }
              v223 = v212;
              v224 = v201 - v212;
              v225 = v212 + (__int64)v203;
              v226 = v207 + 4LL * v212;
              v227 = v10 + 4 * v225;
              v228 = v370 + 8 * v225 - 8;
              v229 = v10 + v226;
              v230 = 0;
              v231 = v370 + 8 * (v223 + v204) - 8;
              v232 = 0;
              do
              {
                ++v232;
                *(__m128i *)(v229 + v230) = _mm_load_si128((const __m128i *)(v227 + v230));
                v233 = *(_OWORD *)(v228 + 2 * v230 + 16);
                *(_OWORD *)(v231 + 2 * v230) = *(_OWORD *)(v228 + 2 * v230);
                *(_OWORD *)(v231 + 2 * v230 + 16) = v233;
                v230 += 16;
              }
              while ( v232 < v224 >> 2 );
              v234 = (v224 & 0xFFFFFFFC) + v216;
              v235 = v211 - (v224 & 0xFFFFFFFC);
              v203 = (v224 & 0xFFFFFFFC) + v214;
              if ( (v224 & 0xFFFFFFFC) != v224 )
              {
                v205 = v203;
                goto LABEL_217;
              }
            }
          }
          else
          {
            v210 = v201 - 1;
            v264 = v10 + v208;
            v265 = v370 + v206;
            v266 = 0;
            do
            {
              v267 = *(_QWORD *)(v265 + 2 * v266 - 8);
              *(_DWORD *)(v10 + v207 + v266) = *(_DWORD *)(v264 + v266);
              *(_QWORD *)(v370 + 8LL * v199 + 2 * v266 - 8) = v267;
              v266 += 4;
            }
            while ( 4 * v210 + 4 != v266 );
            v215 = v199 + 1;
          }
          v199 = v210 + v215;
          v200 = v387;
          goto LABEL_224;
        }
LABEL_233:
        v42 = *v400 + v392;
      }
LABEL_186:
      *v390 = v391;
      *(_DWORD *)(v10 + 4LL * v42) = v408;
      v184 = *(_QWORD *)(v385 + 8 * v382);
      v185 = v398 < (int)v382++ + 1;
      *(_QWORD *)(v414 + 8LL * v42) = v184;
      if ( v185 )
      {
        LODWORD(v14) = v408;
        v9 = (__int64)v415;
        break;
      }
    }
  }
  v144 = *v417;
  v186 = *v418;
  *v418 = 0;
  v146 = v144 + v186 - 1;
LABEL_118:
  if ( v146 < v144 )
    goto LABEL_128;
  v147 = (int *)(v10 + 4LL * v144);
  v381 = v9;
  v13 = 0;
  v374 = v10 + 4 * (v144 + (unsigned __int64)(unsigned int)(v146 - v144)) + 4;
  v148 = 0;
  do
  {
    v149 = *v147;
    v150 = *v147;
    v151 = *(int *)(v384 + 4 * v149);
    v152 = 4 * v151;
    v153 = (int *)(v11 + 4 * v151);
    LODWORD(m) = v151 + 1;
    v155 = *v153;
    v156 = v151 + *v153;
    if ( (int)v151 + 1 <= v156 )
    {
      v157 = (_DWORD *)(v11 + v152 + 4);
      m = (int)m;
      if ( *v157 == (_DWORD)v14 )
      {
LABEL_189:
        v187 = (_QWORD *)(v385 + 8 * m);
        v188 = v148++;
        v13 = 1;
        *(_QWORD *)(a2 + 8 * v149) = *v187;
        v189 = *(_QWORD *)(v385 + 8LL * v156);
        a3[v188] = v150;
        *v153 = v155 - 1;
        *v157 = *(_DWORD *)(v11 + 4LL * v156);
        *v187 = v189;
      }
      else
      {
        LODWORD(m) = v151 + 2;
        v158 = v11 + v152 + 8;
        for ( m = (int)m; v156 >= (int)m; ++m )
        {
          v157 = (_DWORD *)v158;
          v158 += 4;
          if ( *v157 == (_DWORD)v14 )
            goto LABEL_189;
        }
      }
    }
    ++v147;
  }
  while ( (int *)v374 != v147 );
  v159 = v148;
  v9 = v381;
  if ( !v13 )
  {
LABEL_128:
    v394 = 0;
    v13 = 1;
    goto LABEL_48;
  }
  v283 = *(_QWORD *)(v381 + 112);
  v284 = *(double *)(v381 + 24);
  v285 = 4LL * *(int *)(v381 + 240);
  v286 = (_DWORD *)(v285 + a9);
  if ( !v159 )
  {
LABEL_356:
    a4 = 0;
    goto LABEL_299;
  }
  v388 = v11;
  v376 = v10;
  v287 = (_DWORD *)(v285 + a9 + v285);
  v288 = a3;
  v383 = (__int64)&a3[v159 - 1 + 1];
  v289 = 0;
  do
  {
    *v286 = *v288;
    *v287 = 0;
    v290 = v13;
    for ( n = v13 - 1; ; --n )
    {
      while ( 1 )
      {
        v292 = n;
        v293 = (int)v286[v292];
        v294 = (_BYTE *)(v283 + v293);
        if ( *(_BYTE *)(v283 + v293) == 1 )
          goto LABEL_277;
        v295 = v287[n];
        if ( *(_DWORD *)(v368 + 4 * v293) == v295 )
          break;
        v296 = *(int *)(v376 + 4LL * (v295 + *(_DWORD *)(v367 + 4 * v293)));
        v287[n] = v295 + 1;
        v297 = v296;
        v298 = (_BYTE *)(v283 + v296);
        if ( !*v298 )
        {
          ++v290;
          v286[v292 + 1] = v297;
          *v298 = 2;
          n = v290 - 1;
          v287[v292 + 1] = 0;
        }
      }
      v299 = v289++;
      *(_DWORD *)(a9 + 4 * v299) = v286[n];
      *v294 = 1;
LABEL_277:
      if ( !n )
        break;
      v290 = n;
    }
    ++v288;
  }
  while ( (_DWORD *)v383 != v288 );
  v300 = n;
  v301 = v289 - 1;
  v11 = v388;
  v9 = v381;
  v302 = v289 == 0;
  v10 = v376;
  if ( v302 )
    goto LABEL_356;
  v303 = (int *)(4LL * v301 + a9);
  v304 = (__int64)&v303[-v301 - 1];
  do
  {
    v305 = *v303;
    v306 = (double *)(a2 + 8 * v305);
    v307 = *v303;
    v308 = *(double *)(v385 + 8LL * *(int *)(v384 + 4 * v305)) * *v306;
    *(_BYTE *)(v283 + v305) = 0;
    if ( fabs(v308) < v284 )
    {
      *v306 = 0.0;
    }
    else
    {
      v309 = *(int *)(v367 + 4 * v305);
      v310 = *(_DWORD *)(v368 + 4 * v305);
      *v306 = v308;
      v311 = v300 + 1;
      a3[v300] = v307;
      if ( (int)v309 < (int)v309 + v310 )
      {
        v312 = v376 + 4 * v309;
        v313 = (unsigned int)(v310 - 1) + 1LL;
        v314 = v370 + 8 * v309;
        v315 = 0;
        do
        {
          v316 = *(int *)(v312 + 4 * v315);
          v317 = *(double *)(v314 + 8 * v315++ - 8);
          *(double *)(a2 + 8 * v316) = *(double *)(a2 + 8 * v316) - v317 * v308;
        }
        while ( v313 != v315 );
      }
      v300 = v311;
    }
    --v303;
  }
  while ( (int *)v304 != v303 );
  v9 = v381;
  a4 = v300;
LABEL_299:
  *(_QWORD *)(a2 + 8 * v405) = 0;
LABEL_48:
  v69 = *(_DWORD *)(v9 + 308);
  v70 = *(_DWORD *)(v9 + 312);
  if ( v69 == (_DWORD)v14 )
  {
    v69 = *(_DWORD *)(v404 + 4 * v405);
    *(_DWORD *)(v9 + 308) = v69;
  }
  else if ( (_DWORD)v14 == v70 )
  {
    v70 = *(_DWORD *)(v411 + 4 * v405);
    *(_DWORD *)(v9 + 312) = v70;
  }
  if ( v69 == v70 )
  {
    *(_DWORD *)(v9 + 292) = 0;
    *(_QWORD *)(v9 + 308) = 0xFFFFFFFF00000000LL;
  }
  if ( !v394 )
    goto LABEL_69;
  v71 = *(_QWORD *)(v9 + 144);
  v72 = *(int *)(v9 + 288);
  v73 = *(_QWORD *)(v9 + 176);
  v74 = *(_QWORD *)(v9 + 168);
  v75 = *(_QWORD *)(v9 + 136);
  v76 = *(int *)(v71 + 4LL * *(int *)(v9 + 360) + 4);
  v371 = *(_QWORD *)(v9 + 152);
  v77 = 8 * v72;
  v78 = 4 * v72;
  v79 = 4 * v76;
  v373 = 8 * v76;
  if ( !v13 )
  {
    v80 = (int *)(v75 + v79);
    *(_QWORD *)(a2 + 8 * v405) = 0;
    v81 = *(_DWORD *)(v9 + 240);
    v82 = *(double *)(v9 + 24);
    if ( v81 <= 0 )
    {
      if ( v379 )
      {
        a4 = 0;
        goto LABEL_63;
      }
      goto LABEL_69;
    }
    v83 = (unsigned int)(v81 - 1);
    v84 = (_DWORD *)(v75 + v79);
    v85 = 1;
    v86 = v83 + 2;
    while ( 1 )
    {
LABEL_59:
      v87 = *(double *)(a2 + 8 * v85);
      if ( v87 == 0.0 )
        goto LABEL_58;
      if ( fabs(v87) >= v82 )
        break;
      *(_QWORD *)(a2 + 8 * v85++) = 0;
      if ( v86 == v85 )
      {
LABEL_62:
        a4 = v80 - v84;
        if ( v379 )
        {
LABEL_63:
          v88 = v78 + v74;
          v89 = v77 + v73;
          v90 = 1;
          do
          {
            v91 = *(double *)(a2 + 8LL * *(int *)(v88 + 4 * v90)) * *(double *)(v89 + 8 * v90);
            ++v90;
            v16 = v16 - v91;
          }
          while ( (unsigned int)(v379 - 1) + 2LL != v90 );
        }
        if ( a4 > 0 )
        {
          v92 = v373 + v371;
          v93 = v80;
          do
          {
            v94 = *v93--;
            v92 -= 8;
            v95 = (double *)(a2 + 8 * v94);
            *(double *)(v92 + 8) = -*v95;
            *v95 = 0.0;
          }
          while ( &v80[-(a4 - 1) - 1] != v93 );
          goto LABEL_68;
        }
LABEL_309:
        if ( a4 )
          goto LABEL_68;
        goto LABEL_69;
      }
    }
    *v84-- = v85;
LABEL_58:
    if ( v86 == ++v85 )
      goto LABEL_62;
    goto LABEL_59;
  }
  if ( v379 )
  {
    v165 = v77 + v73;
    v166 = v78 + v74;
    v167 = 1;
    do
    {
      v168 = *(double *)(a2 + 8LL * *(int *)(v166 + 4 * v167)) * *(double *)(v165 + 8 * v167);
      ++v167;
      v16 = v16 - v168;
    }
    while ( (unsigned int)(v379 - 1) + 2LL != v167 );
  }
  if ( a4 <= 0 )
    goto LABEL_309;
  v169 = v75 + v79;
  v170 = v373 + v371;
  v171 = a3;
  do
  {
    v172 = *v171;
    v169 -= 4;
    ++v171;
    v170 -= 8;
    *(_DWORD *)(v169 + 4) = v172;
    v173 = (double *)(a2 + 8 * v172);
    *(double *)(v170 + 8) = -*v173;
    *v173 = 0.0;
  }
  while ( v75 + v79 - 4 - 4LL * (unsigned int)(a4 - 1) != v169 );
LABEL_68:
  v96 = *(_DWORD *)(v9 + 360) + 1;
  v97 = *(_DWORD *)(v71 + 4LL * v96);
  *(_DWORD *)(v9 + 360) = v96;
  *(_DWORD *)(v71 + 4LL * v96 + 4) = v97 - a4;
  *(_DWORD *)(v401 + 4LL * (*(_DWORD *)(v9 + 360) + v369) + 12) = v14;
LABEL_69:
  v98 = 0.00000001;
  if ( fabs(v16) <= fmin(0.00000001, 0.99999 * *(double *)v9) )
    goto LABEL_140;
  v99 = *(_DWORD *)(v9 + 296);
  if ( v99 <= 1 )
  {
    v100 = 0.000001;
    v98 = 0.00001;
  }
  else if ( v99 > 9 )
  {
    v100 = 0.000000001;
    if ( v99 > 49 )
    {
      v100 = 1.0e-10;
      v98 = 0.000000001;
    }
  }
  else
  {
    v100 = 0.0000001;
    v98 = 0.000001;
  }
  v101 = fabs(1.0 - fabs(v16) / fabs(a7 / *(double *)(v385 + 8LL * *v399)));
  if ( v101 <= v100 )
  {
    v372 = 0;
LABEL_78:
    *(_DWORD *)(v9 + 296) = v99 + 1;
    *v399 = *(_DWORD *)(v9 + 288);
    v102 = *(int *)(v9 + 288);
    *(double *)(v385 + 8 * v102) = 1.0 / v16;
    *(_DWORD *)(v11 + 4 * v102) = v379;
    v103 = *(int *)(v406 + v404);
    if ( v369 + 1 != (_DWORD)v103 )
    {
      v104 = (int *)(v411 + 4LL * v369 + 4);
      v105 = *(int *)(v411 + v406);
      v106 = *v104;
      *(_DWORD *)(v404 + 4 * v105) = v103;
      *(_DWORD *)(v411 + 4 * v103) = v105;
      *(_DWORD *)(v404 + 4LL * v106) = v14;
      *(_DWORD *)(v411 + v406) = v106;
      *(_DWORD *)(v406 + v404) = v369 + 1;
      *v104 = v14;
    }
    v107 = *(int *)(v9 + 324);
    v108 = *(_DWORD *)(v9 + 320);
    v109 = 4 * v107;
    if ( v108 )
    {
      if ( *(_DWORD *)(v384 + 4 * v107) >= v412 )
      {
        v377 = *(_DWORD *)(v9 + 324);
        if ( (unsigned int)c_ekk_IsSet(*(_QWORD *)(v9 + 96), (unsigned int)v14) )
        {
          --*(_DWORD *)(v9 + 320);
          c_ekk_Unset(*(_QWORD *)(v9 + 96), (unsigned int)v14);
          if ( v108 == 1 || (_DWORD)v14 != v377 )
          {
            if ( v108 == 1 )
              *(_DWORD *)(v9 + 324) = 0;
          }
          else
          {
            v319 = *(int *)(v401 + 4);
            if ( v108 > 2 )
            {
              v320 = 0;
              do
              {
                ++v320;
                v319 = *(int *)(v404 + 4 * v319);
              }
              while ( v320 != v108 - 2 );
            }
            *(_DWORD *)(v9 + 324) = v319;
            v109 = 4 * v319;
          }
        }
      }
    }
    v110 = *(int *)(v9 + 360);
    v111 = *(_DWORD *)(v9 + 288) + v379;
    v112 = *(_DWORD *)(v9 + 284);
    v113 = *(_DWORD *)(v401 + v109 + 4);
    v114 = *(_BYTE *)(v9 + 356);
    v115 = *(_DWORD *)(v9 + 260);
    *(_DWORD *)(v9 + 288) = v111;
    *(_DWORD *)(v9 + 328) = v113;
    *(double *)(v9 + 8) = (double)(v111 + v112 - *(_DWORD *)(*(_QWORD *)(v9 + 144) + 4 * v110 + 4) + 1)
                        - *(double *)(v9 + 8);
    if ( v114 || *(_DWORD *)(v9 + 308) < *(_DWORD *)(v9 + 312) )
      goto LABEL_141;
    v116 = v115 - v111;
    if ( *(int *)(v9 + 340) > 0 )
      v116 -= v112;
    v117 = v116 / v369;
    v118 = *(_DWORD *)(v9 + 256);
    if ( v117 > 4 )
    {
      v119 = 150 * v118;
      if ( 8 * v111 <= 150 * v118 )
        v119 = 8 * v111;
      v114 = v115 > v112 + v111 + v119;
    }
    v120 = *(_DWORD *)(v9 + 280);
    v121 = *(_DWORD *)(v9 + 264) + v118 - *(_DWORD *)(v9 + 316);
    if ( v121 > 50 )
      v121 = 50;
    if ( v117 > v121 )
    {
      if ( v120 > 999999 )
      {
LABEL_304:
        *(_BYTE *)(v9 + 356) = 1;
LABEL_305:
        v321 = *(_QWORD *)(v9 + 184);
        v322 = v396 + 8LL * v369 + 12;
        v323 = (_DWORD *)(v322 + 4LL * v369 + 8);
        v324 = 4LL * v369 + 4;
        v325 = (int *)(v322 + v324);
        v326 = (int *)(v367 + v324);
        v331 = v369;
        v332 = (_DWORD *)(v368 + 4);
        if ( v369 / 8 > 0 )
        {
          v333 = (unsigned int)(v369 / 8 - 1);
          v334 = (_OWORD *)(v368 + 4);
          do
          {
            *v334 = 0;
            v334 += 2;
            *(v334 - 1) = 0;
          }
          while ( (_OWORD *)(v368 + 32 * v333 + 36) != v334 );
          v332 += 8 * (int)v333 + 8;
          v331 = v369;
        }
        switch ( v331 % 8 )
        {
          case 1:
            goto LABEL_328;
          case 2:
            goto LABEL_327;
          case 3:
            goto LABEL_326;
          case 4:
            goto LABEL_325;
          case 5:
            goto LABEL_324;
          case 6:
            goto LABEL_323;
          case 7:
            v332[6] = 0;
LABEL_323:
            v332[5] = 0;
LABEL_324:
            v332[4] = 0;
LABEL_325:
            v332[3] = 0;
LABEL_326:
            v332[2] = 0;
LABEL_327:
            v332[1] = 0;
LABEL_328:
            *v332 = 0;
            break;
          default:
            break;
        }
        if ( v369 <= 0 )
        {
          *v323 = 1;
          *v325 = v369;
          *v326 = 1;
        }
        else
        {
          v335 = (unsigned int)(v369 - 1);
          v336 = v369 - 1;
          v337 = (int *)(v384 + 4);
          do
          {
            v338 = *v337;
            LODWORD(v339) = v338 + 1;
            v340 = v338 + *(_DWORD *)(v11 + 4 * v338);
            if ( (int)v339 <= v340 )
            {
              v339 = (int)v339;
              v341 = (int)v339 + 1LL;
              v342 = v341 + (unsigned int)(~*v337 + v340);
              while ( 1 )
              {
                if ( *(double *)(v385 + 8 * v339) != 0.0 )
                  ++*(_DWORD *)(v368 + 4LL * *(int *)(v11 + 4 * v339));
                v339 = v341;
                if ( v342 == v341 )
                  break;
                ++v341;
              }
            }
            ++v337;
          }
          while ( (int *)(v384 + 4 * v335 + 8) != v337 );
          v343 = 0;
          v344 = 1;
          *v323 = 1;
          do
          {
            v323[v343 + 1] = v343 + 2;
            *(_DWORD *)(v322 + 4 * v343 + 4) = v343;
            *(_DWORD *)(v367 + 4 * v343 + 4) = v344;
            v345 = *(_DWORD *)(v368 + 4 * v343 + 4) + v344;
            *(_DWORD *)(v368 + 4 * v343++ + 4) = 0;
            v344 = v117 + v345;
          }
          while ( v335 + 1 != v343 );
          *v325 = v369;
          *v326 = v344;
          v346 = 1;
          if ( v321 )
          {
            do
            {
              v347 = *(int *)(v384 + 4 * v346);
              LODWORD(v348) = v347 + 1;
              v349 = v347 + *(_DWORD *)(v11 + 4 * v347);
              if ( (int)v347 + 1 <= v349 )
              {
                v348 = (int)v348;
                v350 = (unsigned int)(~*(_DWORD *)(v384 + 4 * v346) + v349);
                v351 = (int)v348 + 1LL;
                v352 = v351 + v350;
                while ( 1 )
                {
                  v353 = *(_QWORD *)(v385 + 8 * v348);
                  v354 = 4LL * *(int *)(v11 + 4 * v348);
                  v355 = (int *)(v368 + v354);
                  v356 = (_DWORD *)(v367 + v354);
                  v357 = *v355;
                  *(_DWORD *)(v10 + 4LL * (v357 + *v356)) = v346;
                  v348 = v351;
                  *(_QWORD *)(v414 + 8LL * (v357 + *v356)) = v353;
                  *v355 = v357 + 1;
                  if ( v352 == v351 )
                    break;
                  ++v351;
                }
              }
              ++v346;
            }
            while ( v336 + 2LL != v346 );
          }
          else
          {
            v358 = 1;
            do
            {
              v359 = *(int *)(v384 + 4 * v358);
              LODWORD(v360) = v359 + 1;
              v361 = v359 + *(_DWORD *)(v11 + 4 * v359);
              if ( (int)v359 + 1 <= v361 )
              {
                v360 = (int)v360;
                v362 = (int)v360 + 1LL;
                v363 = v362 + (unsigned int)(~*(_DWORD *)(v384 + 4 * v358) + v361);
                while ( 1 )
                {
                  if ( *(double *)(v385 + 8 * v360) != 0.0 )
                  {
                    v364 = *(int *)(v11 + 4 * v360);
                    v365 = (int *)(v368 + 4 * v364);
                    v366 = *v365 + 1;
                    *(_DWORD *)(v10 + 4LL * (*v365 + *(_DWORD *)(v367 + 4 * v364))) = v358;
                    *v365 = v366;
                  }
                  v360 = v362;
                  if ( v363 == v362 )
                    break;
                  ++v362;
                }
              }
              ++v358;
            }
            while ( v336 + 2LL != v358 );
          }
        }
        goto LABEL_141;
      }
      v122 = *(_DWORD *)(v9 + 384);
LABEL_95:
      v123 = v120 + 1;
      *(_DWORD *)(v9 + 280) = v123;
      if ( a5 > 40 && 16 * v123 > a5 )
      {
        *(_DWORD *)(v9 + 280) = 1000000;
        *(_DWORD *)(v9 + 376) = (int)((double)*(int *)(v9 + 376) * 1.05);
      }
      if ( v122 > 0 && *(_DWORD *)(v9 + 376) > v122 )
      {
        *(_DWORD *)(v9 + 376) = v122;
        *(_BYTE *)(v9 + 356) = 1;
        goto LABEL_305;
      }
      goto LABEL_304;
    }
    if ( v120 <= 999999 )
    {
      v122 = *(_DWORD *)(v9 + 384);
      if ( v114 )
        goto LABEL_95;
      *(_DWORD *)(v9 + 280) = 1000000;
      v327 = (int)((double)*(int *)(v9 + 376) * 1.1);
      *(_DWORD *)(v9 + 376) = v327;
      if ( v122 > 0 && v327 > v122 )
        *(_DWORD *)(v9 + 376) = v122;
      *(_BYTE *)(v9 + 356) = 0;
    }
    else
    {
      *(_BYTE *)(v9 + 356) = v114;
      if ( v114 )
        goto LABEL_305;
    }
    *(_DWORD *)(v367 + 4) = 0;
    if ( *(int *)(v9 + 340) <= 0 || *(_DWORD *)(v9 + 316) - *(_DWORD *)(v9 + 264) <= 100 )
      goto LABEL_141;
LABEL_135:
    v160 = *(_DWORD *)(v9 + 276);
    v161 = *(_DWORD *)(v9 + 376);
    if ( 8 * a5 < v160 )
    {
      if ( a5 > 9 )
        v162 = (int)((double)v161 * fmin(2.0, (double)v160 / (double)(8 * a5)));
      else
        v162 = 2 * v161;
      *(_DWORD *)(v9 + 376) = v162;
    }
    else
    {
      v162 = (int)((double)v161 * 1.05);
      *(_DWORD *)(v9 + 376) = v162;
    }
    v163 = *(_DWORD *)(v9 + 384);
    v372 = 1;
    if ( v163 > 0 && v163 < v162 )
      *(_DWORD *)(v9 + 376) = v163;
    goto LABEL_141;
  }
  if ( v98 > v101 || v99 > 49 && v101 < 0.0000001 )
  {
    v372 = 1;
    goto LABEL_78;
  }
LABEL_140:
  v372 = 2;
LABEL_141:
  *a6 = v379;
  return v372;
}

