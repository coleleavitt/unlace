__int64 __fastcall sub_6EEA40(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 *v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  bool v15; // al
  __int64 v16; // r11
  __int64 *v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rdx
  unsigned int v24; // edi
  __int64 *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rbp
  int v32; // esi
  __int64 v33; // r13
  __int64 *v34; // r15
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // rdx
  unsigned int v38; // edi
  __int64 *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rbp
  int v45; // esi
  __int64 v46; // r13
  __int64 *v47; // r14
  unsigned __int64 v48; // rdx
  unsigned int v49; // eax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  int v52; // esi
  __int64 v53; // rdx
  __int64 *v54; // rdi
  __int64 *v55; // rax
  __int64 *v56; // r15
  __int64 v57; // r13
  int v58; // r8d
  int v59; // r8d
  __int64 v60; // r12
  unsigned int v61; // ecx
  _QWORD *v62; // rdx
  __int64 v63; // r9
  int v64; // eax
  int v65; // esi
  unsigned int v66; // edi
  unsigned __int64 i; // r15
  unsigned __int64 v68; // rsi
  __int64 v69; // r9
  unsigned __int64 *v70; // rcx
  unsigned int v71; // r13d
  unsigned __int64 v72; // r8
  unsigned __int64 *v73; // rax
  unsigned __int64 v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // r14
  __int64 v77; // rax
  __int64 v78; // rbp
  int v79; // edi
  unsigned int v80; // edx
  __int64 *v81; // r13
  unsigned __int64 v82; // rsi
  int v83; // r9d
  unsigned int v84; // r12d
  __int64 *v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rbp
  unsigned __int64 v88; // rbx
  unsigned __int64 v89; // rax
  __int64 v90; // rbp
  int v91; // edi
  unsigned int v92; // edx
  __int64 *v93; // r14
  unsigned __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rcx
  int v97; // esi
  __int64 v98; // rcx
  _QWORD *v99; // rdi
  __int64 *v100; // r8
  __int64 *j; // rax
  __int64 v102; // rdx
  int v103; // r9d
  int v104; // r9d
  __int64 v105; // r13
  unsigned int v106; // edi
  _QWORD *v107; // rcx
  __int64 v108; // r10
  int v109; // eax
  int v110; // edx
  unsigned int v111; // esi
  __int64 v112; // rbp
  __int64 v113; // rdx
  unsigned __int64 v114; // rax
  _QWORD *v115; // rdx
  __int64 v116; // r13
  _DWORD *v117; // rdx
  int v118; // eax
  __int64 v119; // rbp
  __int64 v120; // rdx
  unsigned __int64 v121; // rax
  _QWORD *v122; // rdx
  __int64 v123; // r12
  _DWORD *v124; // rdx
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rsi
  int v128; // edx
  __int64 v129; // rsi
  __int64 *v130; // rdi
  __int64 *v131; // rax
  unsigned __int64 v132; // r15
  __int64 v133; // r13
  int v134; // esi
  int v135; // esi
  __int64 v136; // r10
  unsigned int v137; // ecx
  _QWORD *v138; // rdx
  __int64 v139; // r9
  __int64 *v140; // r9
  int v141; // edi
  int v142; // r14d
  __int64 *v143; // r13
  unsigned int v144; // r12d
  __int64 v145; // rsi
  __int64 v146; // r12
  __int64 v147; // rdx
  unsigned __int64 v148; // rax
  _QWORD *v149; // rdx
  __int64 v150; // r13
  __int64 v151; // rcx
  _DWORD *v152; // rdx
  int v153; // eax
  __int64 v154; // rax
  int v155; // r10d
  unsigned __int64 v156; // rax
  __int64 v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rcx
  int v160; // esi
  __int64 v161; // rcx
  _QWORD *v162; // rdi
  __int64 *v163; // r10
  __int64 *v164; // rax
  unsigned __int64 v165; // r15
  __int64 v166; // rdx
  int v167; // r8d
  int v168; // r8d
  __int64 v169; // rbx
  unsigned int v170; // edi
  _QWORD *v171; // rcx
  __int64 v172; // r9
  int v173; // edx
  int v174; // r10d
  __int64 v175; // r13
  unsigned __int64 v176; // rsi
  __int64 v177; // r13
  __int64 v178; // rdx
  unsigned __int64 v179; // rax
  _QWORD *v180; // rdx
  __int64 v181; // r14
  _DWORD *v182; // rdx
  unsigned __int64 v183; // rdx
  unsigned int v184; // eax
  _QWORD *v185; // rax
  __int64 v186; // rdx
  int v187; // esi
  __int64 v188; // rdx
  __int64 *v189; // rdi
  __int64 *v190; // rax
  __int64 v191; // r13
  int v192; // r8d
  int v193; // r8d
  __int64 v194; // r12
  unsigned int v195; // ecx
  _QWORD *v196; // rdx
  __int64 v197; // r9
  int v198; // esi
  __int64 v199; // rdi
  int v200; // r15d
  __int64 *v201; // r13
  unsigned __int64 v202; // rax
  _QWORD *v203; // rax
  __int64 v204; // rcx
  int v205; // esi
  __int64 v206; // rcx
  _QWORD *v207; // rdi
  __int64 *v208; // r8
  __int64 *k; // rax
  __int64 v210; // rdx
  int v211; // r9d
  int v212; // r9d
  __int64 v213; // r12
  unsigned int v214; // edi
  _QWORD *v215; // rcx
  __int64 v216; // r10
  int v217; // edx
  unsigned int v218; // esi
  int v219; // r12d
  __int64 *v220; // r9
  unsigned __int64 v221; // rax
  __int64 v222; // rax
  _QWORD *v223; // rax
  __int64 v224; // rcx
  int v225; // esi
  __int64 v226; // rcx
  _QWORD *v227; // rdi
  __int64 *v228; // r10
  __int64 *v229; // rax
  __int64 v230; // r15
  __int64 v231; // rdx
  int v232; // r8d
  int v233; // r8d
  __int64 v234; // rbx
  unsigned int v235; // edi
  _QWORD *v236; // rcx
  __int64 v237; // r9
  int v238; // edx
  int v239; // r10d
  __int64 v240; // r12
  __int64 v241; // rsi
  __int64 v242; // rax
  _QWORD *v243; // rax
  __int64 v244; // rsi
  int v245; // edx
  __int64 v246; // rsi
  __int64 *v247; // rdi
  __int64 *v248; // rax
  unsigned __int64 v249; // r14
  __int64 v250; // r13
  int v251; // ecx
  int v252; // ecx
  __int64 v253; // r10
  unsigned int v254; // esi
  _QWORD *v255; // rdx
  __int64 v256; // r9
  int v257; // edi
  int v258; // r15d
  __int64 v259; // r12
  __int64 v260; // rsi
  __int64 v261; // rdi
  int v262; // eax
  __int64 v263; // rdi
  int v264; // eax
  __int64 v265; // rdi
  int v266; // eax
  __int64 v267; // rdi
  int v268; // eax
  bool v269; // al
  __m128d v270; // xmm0
  int v271; // r13d
  __int64 *v272; // rbx
  __int64 v273; // rbp
  __int64 v274; // r14
  __int64 v275; // rcx
  int v276; // r14d
  bool v277; // al
  bool v278; // zf
  __int64 v279; // rax
  bool v280; // al
  __m128i v281; // xmm0
  __int64 v283; // [rsp+10h] [rbp-88h]
  __int64 *v284; // [rsp+10h] [rbp-88h]
  __int64 v285; // [rsp+10h] [rbp-88h]
  __int64 *v286; // [rsp+10h] [rbp-88h]
  __int64 *v287; // [rsp+10h] [rbp-88h]
  __int64 *v288; // [rsp+10h] [rbp-88h]
  __int64 v289; // [rsp+10h] [rbp-88h]
  __int64 v290; // [rsp+10h] [rbp-88h]
  __int64 *v291; // [rsp+10h] [rbp-88h]
  __int64 *v292; // [rsp+10h] [rbp-88h]
  __int64 *v293; // [rsp+10h] [rbp-88h]
  __int64 v294; // [rsp+10h] [rbp-88h]
  __int64 *v295; // [rsp+10h] [rbp-88h]
  __int64 *v296; // [rsp+10h] [rbp-88h]
  __int64 *v297; // [rsp+10h] [rbp-88h]
  __int64 *v298; // [rsp+10h] [rbp-88h]
  unsigned __int64 v299; // [rsp+18h] [rbp-80h]
  unsigned __int64 v300; // [rsp+18h] [rbp-80h]
  unsigned int v301; // [rsp+18h] [rbp-80h]
  __int64 v302; // [rsp+18h] [rbp-80h]
  unsigned __int64 v303; // [rsp+18h] [rbp-80h]
  __int64 *v304; // [rsp+18h] [rbp-80h]
  unsigned __int64 v305; // [rsp+18h] [rbp-80h]
  unsigned int v306; // [rsp+18h] [rbp-80h]
  unsigned __int64 v307; // [rsp+18h] [rbp-80h]
  __int64 v308; // [rsp+18h] [rbp-80h]
  unsigned __int64 v309; // [rsp+18h] [rbp-80h]
  unsigned __int64 v310; // [rsp+18h] [rbp-80h]
  unsigned int v311; // [rsp+18h] [rbp-80h]
  __int64 v312; // [rsp+18h] [rbp-80h]
  unsigned int v313; // [rsp+18h] [rbp-80h]
  unsigned __int64 v314; // [rsp+18h] [rbp-80h]
  __int64 v315; // [rsp+18h] [rbp-80h]
  unsigned __int64 v316; // [rsp+18h] [rbp-80h]
  __int64 v317; // [rsp+18h] [rbp-80h]
  unsigned __int64 v318; // [rsp+18h] [rbp-80h]
  unsigned __int64 v319; // [rsp+18h] [rbp-80h]
  __int64 v320; // [rsp+18h] [rbp-80h]
  __int64 v321; // [rsp+18h] [rbp-80h]
  __int64 v322; // [rsp+18h] [rbp-80h]
  _QWORD *v323; // [rsp+18h] [rbp-80h]
  _QWORD *v324; // [rsp+18h] [rbp-80h]
  _QWORD *v325; // [rsp+18h] [rbp-80h]
  _QWORD *v326; // [rsp+18h] [rbp-80h]
  unsigned __int64 v327; // [rsp+18h] [rbp-80h]
  unsigned __int64 v328; // [rsp+18h] [rbp-80h]
  __int64 v329; // [rsp+18h] [rbp-80h]
  __int64 v330; // [rsp+18h] [rbp-80h]
  __int64 v331; // [rsp+20h] [rbp-78h]
  __int64 v332; // [rsp+20h] [rbp-78h]
  __int64 v333; // [rsp+20h] [rbp-78h]
  __int64 v334; // [rsp+20h] [rbp-78h]
  __int64 *v335; // [rsp+20h] [rbp-78h]
  __int64 v336; // [rsp+20h] [rbp-78h]
  __int64 v337; // [rsp+20h] [rbp-78h]
  __int64 v338; // [rsp+20h] [rbp-78h]
  __int64 v339; // [rsp+20h] [rbp-78h]
  __int64 v340; // [rsp+20h] [rbp-78h]
  __int64 v341; // [rsp+20h] [rbp-78h]
  unsigned __int64 v342; // [rsp+20h] [rbp-78h]
  __int64 v343; // [rsp+20h] [rbp-78h]
  __int64 v344; // [rsp+20h] [rbp-78h]
  int v345; // [rsp+20h] [rbp-78h]
  int v346; // [rsp+20h] [rbp-78h]
  int v347; // [rsp+20h] [rbp-78h]
  int v348; // [rsp+20h] [rbp-78h]
  _QWORD *v349; // [rsp+20h] [rbp-78h]
  _QWORD *v350; // [rsp+20h] [rbp-78h]
  _QWORD *v351; // [rsp+20h] [rbp-78h]
  _QWORD *v352; // [rsp+20h] [rbp-78h]
  __int64 v353; // [rsp+20h] [rbp-78h]
  __int64 v354; // [rsp+20h] [rbp-78h]
  __int64 *v355; // [rsp+28h] [rbp-70h]
  int v356; // [rsp+28h] [rbp-70h]
  int v357; // [rsp+28h] [rbp-70h]
  int v358; // [rsp+28h] [rbp-70h]
  int v359; // [rsp+28h] [rbp-70h]
  __int64 *v360; // [rsp+30h] [rbp-68h]
  __int64 v362[8]; // [rsp+58h] [rbp-40h] BYREF

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 128 )
    return result;
  v360 = a2;
LABEL_3:
  v6 = result;
  v7 = result >> 4;
  v8 = v6 >> 3;
  if ( a3 )
  {
    v283 = a4;
    --a3;
    v9 = &a1->m128i_i64[v7];
    v10 = a1->m128i_i64[1];
    v11 = sub_6E8100(a4, *v9);
    v12 = sub_6E8100(v283, v10);
    v13 = *(v360 - 1);
    if ( v12 >= v11 )
    {
      v362[0] = v283;
      v269 = sub_6EDD20(v362, a1->m128i_i64[1], v13);
      v16 = v283;
      v17 = &a1->m128i_i64[1];
      if ( v269 )
      {
        v270 = (__m128d)_mm_loadu_si128(a1);
        v19 = a1->m128i_i64[1];
        *(__m128d *)a1 = _mm_shuffle_pd(v270, v270, 1);
      }
      else
      {
        v277 = sub_6EDD20(v362, *v9, *(v360 - 1));
        v17 = &a1->m128i_i64[1];
        v16 = v283;
        v278 = !v277;
        v279 = a1->m128i_i64[0];
        if ( v278 )
        {
          a1->m128i_i64[0] = *v9;
          *v9 = v279;
        }
        else
        {
          a1->m128i_i64[0] = *(v360 - 1);
          *(v360 - 1) = v279;
        }
        v19 = a1->m128i_i64[0];
      }
    }
    else
    {
      v14 = *v9;
      v362[0] = v283;
      v15 = sub_6EDD20(v362, v14, v13);
      v16 = v283;
      v17 = &a1->m128i_i64[1];
      if ( v15 )
      {
        v18 = a1->m128i_i64[0];
        a1->m128i_i64[0] = *v9;
        *v9 = v18;
        v19 = a1->m128i_i64[0];
      }
      else
      {
        v280 = sub_6EDD20(v362, a1->m128i_i64[1], *(v360 - 1));
        v281 = _mm_loadl_epi64(a1);
        v17 = &a1->m128i_i64[1];
        v16 = v283;
        if ( v280 )
        {
          a1->m128i_i64[0] = *(v360 - 1);
          *(v360 - 1) = v281.m128i_i64[0];
          v19 = a1->m128i_i64[0];
        }
        else
        {
          v19 = a1->m128i_i64[1];
          *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, v281);
        }
      }
    }
    v20 = (unsigned __int64)v360;
LABEL_11:
    while ( 2 )
    {
      v28 = *(_QWORD *)(v19 + 128);
      v29 = *v17;
      v30 = v28;
      if ( v28 )
      {
LABEL_12:
        v28 = *(_QWORD *)(v30 + 88);
LABEL_13:
        v31 = *(_QWORD *)(v16 + 72);
        v32 = 0;
        v33 = *(unsigned int *)(v31 + 80);
        v34 = *(__int64 **)(v31 + 64);
        if ( !(_DWORD)v33 )
          goto LABEL_221;
        v35 = (unsigned int)(v33 - 1);
        v36 = 1;
        v37 = nullptr;
        v38 = v35 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
        v39 = &v34[2 * v38];
        v40 = *v39;
        if ( v28 == *v39 )
        {
LABEL_15:
          v41 = *(_QWORD *)(v29 + 128);
          v42 = v39[1];
          v43 = v41;
          if ( v41 )
          {
LABEL_16:
            v41 = *(_QWORD *)(v43 + 88);
LABEL_17:
            v44 = *(_QWORD *)(v16 + 72);
            v45 = 0;
            v46 = *(unsigned int *)(v44 + 80);
            v47 = *(__int64 **)(v44 + 64);
            if ( !(_DWORD)v46 )
              goto LABEL_18;
            v21 = (unsigned int)(v46 - 1);
            v22 = 1;
            v23 = nullptr;
            v24 = v21 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
            v25 = &v47[2 * v24];
            v26 = *v25;
            if ( v41 == *v25 )
            {
LABEL_9:
              v27 = a1->m128i_i64[0];
              v19 = a1->m128i_i64[0];
              if ( v42 > v25[1] )
                goto LABEL_10;
LABEL_40:
              v287 = v17;
              for ( i = v20 - 8; ; i -= 8LL )
              {
                v87 = *(_QWORD *)i;
                v88 = *(_QWORD *)(*(_QWORD *)i + 128LL);
                v89 = v88;
                if ( !v88 )
                  break;
LABEL_49:
                v88 = *(_QWORD *)(v89 + 88);
LABEL_50:
                v90 = *(_QWORD *)(v16 + 72);
                v91 = 0;
                v92 = *(_DWORD *)(v90 + 80);
                v93 = *(__int64 **)(v90 + 64);
                if ( !v92 )
                  goto LABEL_51;
                v68 = v92 - 1;
                v69 = 1;
                v70 = nullptr;
                v71 = ((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4);
                v72 = (unsigned int)v68 & v71;
                v73 = (unsigned __int64 *)&v93[2 * v72];
                v74 = *v73;
                if ( v88 == *v73 )
                {
LABEL_42:
                  v75 = *(_QWORD *)(v27 + 128);
                  v76 = v73[1];
                  v77 = v75;
                  if ( !v75 )
                    goto LABEL_71;
                  goto LABEL_43;
                }
                while ( v74 != -4096 )
                {
                  if ( v74 == -8192 && !v70 )
                    v70 = v73;
                  v155 = v69 + 1;
                  v69 = (unsigned int)v68 & ((_DWORD)v72 + (_DWORD)v69);
                  v72 = (unsigned int)v69;
                  v73 = (unsigned __int64 *)&v93[2 * (unsigned int)v69];
                  v74 = *v73;
                  if ( v88 == *v73 )
                    goto LABEL_42;
                  LODWORD(v69) = v155;
                }
                v91 = 2 * v92;
                if ( !v70 )
                  v70 = v73;
                v109 = *(_DWORD *)(v90 + 72) + 1;
                v69 = (unsigned int)(4 * v109);
                if ( (unsigned int)v69 < 3 * v92 )
                {
                  v72 = v92 >> 3;
                  if ( (unsigned int)v72 >= v92 - *(_DWORD *)(v90 + 76) - v109 )
                  {
                    v336 = v16;
                    v306 = *(_DWORD *)(v90 + 80);
                    v156 = ((((v68 | (v68 >> 1)) >> 2) | v68 | (v68 >> 1)) >> 4)
                         | ((v68 | (v68 >> 1)) >> 2)
                         | v68
                         | (v68 >> 1);
                    v157 = ((((v156 >> 8) | v156) >> 16) | (v156 >> 8) | v156) + 1;
                    if ( (unsigned int)v157 < 0x40 )
                      LODWORD(v157) = 64;
                    *(_DWORD *)(v90 + 80) = v157;
                    v158 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v157, 8);
                    v159 = *(unsigned int *)(v90 + 80);
                    *(_QWORD *)(v90 + 64) = v158;
                    v16 = v336;
                    v160 = v159;
                    v161 = 16 * v159;
                    v162 = &v158[(unsigned __int64)v161 / 8];
                    if ( v93 )
                    {
                      *(_QWORD *)(v90 + 72) = 0;
                      v163 = &v93[2 * v306];
                      if ( v161 )
                      {
                        if ( (v161 & 0x10) == 0 || (*v158 = -4096, v158 += 2, v158 != v162) )
                        {
                          do
                          {
                            *v158 = -4096;
                            v158 += 4;
                            *(v158 - 2) = -4096;
                          }
                          while ( v158 != v162 );
                        }
                      }
                      v307 = i;
                      v164 = v93;
                      v165 = v88;
                      do
                      {
                        v166 = *v164;
                        if ( *v164 != -4096 && v166 != -8192 )
                        {
                          v167 = *(_DWORD *)(v90 + 80);
                          if ( !v167 )
                          {
                            *(_QWORD *)&dword_0 = *v164;
                            BUG();
                          }
                          v168 = v167 - 1;
                          v169 = *(_QWORD *)(v90 + 64);
                          v170 = v168 & (((unsigned int)v166 >> 9) ^ ((unsigned int)v166 >> 4));
                          v171 = (_QWORD *)(v169 + 16LL * v170);
                          v172 = *v171;
                          if ( v166 != *v171 )
                          {
                            v359 = 1;
                            v352 = nullptr;
                            while ( v172 != -4096 )
                            {
                              if ( !v352 )
                              {
                                if ( v172 != -8192 )
                                  v171 = nullptr;
                                v352 = v171;
                              }
                              v170 = v168 & (v359 + v170);
                              v171 = (_QWORD *)(v169 + 16LL * v170);
                              v172 = *v171;
                              if ( v166 == *v171 )
                                goto LABEL_191;
                              ++v359;
                            }
                            if ( v352 )
                              v171 = v352;
                          }
LABEL_191:
                          *v171 = v166;
                          v171[1] = v164[1];
                          ++*(_DWORD *)(v90 + 72);
                        }
                        v164 += 2;
                      }
                      while ( v163 != v164 );
                      v88 = v165;
                      i = v307;
                      v308 = v16;
                      operator delete();
                      v162 = *(_QWORD **)(v90 + 64);
                      v160 = *(_DWORD *)(v90 + 80);
                      v16 = v308;
                      v109 = *(_DWORD *)(v90 + 72) + 1;
                    }
                    else
                    {
                      *(_QWORD *)(v90 + 72) = 0;
                      if ( v158 == v162 )
                      {
                        v109 = 1;
                      }
                      else
                      {
                        if ( (v161 & 0x10) == 0 || (*v158 = -4096, v158 += 2, v158 != v162) )
                        {
                          do
                          {
                            *v158 = -4096;
                            v158 += 4;
                            *(v158 - 2) = -4096;
                          }
                          while ( v158 != v162 );
                        }
                        v162 = *(_QWORD **)(v90 + 64);
                        v160 = *(_DWORD *)(v90 + 80);
                        v109 = *(_DWORD *)(v90 + 72) + 1;
                      }
                    }
                    if ( !v160 )
                    {
LABEL_523:
                      *(_DWORD *)(v90 + 72) = v109;
                      BUG();
                    }
                    v173 = v160 - 1;
                    v174 = 1;
                    v72 = 0;
                    LODWORD(v175) = (v160 - 1) & v71;
                    v70 = &v162[2 * (unsigned int)v175];
                    v176 = *v70;
                    if ( v88 != *v70 )
                    {
                      while ( v176 != -4096 )
                      {
                        if ( !v72 && v176 == -8192 )
                          v72 = (unsigned __int64)v70;
                        v69 = (unsigned int)(v174 + 1);
                        v175 = v173 & (unsigned int)(v175 + v174);
                        v70 = &v162[2 * v175];
                        v176 = *v70;
                        if ( v88 == *v70 )
                          goto LABEL_68;
                        ++v174;
                      }
                      if ( v72 )
                        v70 = (unsigned __int64 *)v72;
                    }
                  }
                }
                else
                {
LABEL_51:
                  v333 = v16;
                  v301 = *(_DWORD *)(v90 + 80);
                  v94 = ((((((((((unsigned int)(v91 - 1) | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 2)
                             | (unsigned int)(v91 - 1)
                             | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 4)
                           | (((unsigned int)(v91 - 1) | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 2)
                           | (unsigned int)(v91 - 1)
                           | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 8)
                         | (((((unsigned int)(v91 - 1) | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 2)
                           | (unsigned int)(v91 - 1)
                           | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 4)
                         | (((unsigned int)(v91 - 1) | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 2)
                         | (unsigned int)(v91 - 1)
                         | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 16)
                       | (((((((unsigned int)(v91 - 1) | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 2)
                           | (unsigned int)(v91 - 1)
                           | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 4)
                         | (((unsigned int)(v91 - 1) | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 2)
                         | (unsigned int)(v91 - 1)
                         | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 8)
                       | (((((unsigned int)(v91 - 1) | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 2)
                         | (unsigned int)(v91 - 1)
                         | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 4)
                       | (((unsigned int)(v91 - 1) | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1)) >> 2)
                       | (unsigned int)(v91 - 1)
                       | ((unsigned __int64)(unsigned int)(v91 - 1) >> 1))
                      + 1;
                  if ( (unsigned int)v94 < 0x40 )
                    LODWORD(v94) = 64;
                  *(_DWORD *)(v90 + 80) = v94;
                  v95 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v94, 8);
                  v96 = *(unsigned int *)(v90 + 80);
                  *(_QWORD *)(v90 + 64) = v95;
                  v16 = v333;
                  v97 = v96;
                  v98 = 16 * v96;
                  v99 = &v95[(unsigned __int64)v98 / 8];
                  if ( v93 )
                  {
                    *(_QWORD *)(v90 + 72) = 0;
                    v100 = &v93[2 * v301];
                    if ( v98 )
                    {
                      if ( (v98 & 0x10) == 0 || (*v95 = -4096, v95 += 2, v95 != v99) )
                      {
                        do
                        {
                          *v95 = -4096;
                          v95 += 4;
                          *(v95 - 2) = -4096;
                        }
                        while ( v95 != v99 );
                      }
                    }
                    for ( j = v93; v100 != j; j += 2 )
                    {
                      v102 = *j;
                      if ( *j != -4096 && v102 != -8192 )
                      {
                        v103 = *(_DWORD *)(v90 + 80);
                        if ( !v103 )
                        {
                          *(_QWORD *)&dword_0 = *j;
                          BUG();
                        }
                        v104 = v103 - 1;
                        v105 = *(_QWORD *)(v90 + 64);
                        v106 = v104 & (((unsigned int)v102 >> 9) ^ ((unsigned int)v102 >> 4));
                        v107 = (_QWORD *)(v105 + 16LL * v106);
                        v108 = *v107;
                        if ( *v107 != v102 )
                        {
                          v346 = 1;
                          v324 = nullptr;
                          while ( v108 != -4096 )
                          {
                            if ( !v324 )
                            {
                              if ( v108 != -8192 )
                                v107 = nullptr;
                              v324 = v107;
                            }
                            v106 = v104 & (v346 + v106);
                            v107 = (_QWORD *)(v105 + 16LL * v106);
                            v108 = *v107;
                            if ( v102 == *v107 )
                              goto LABEL_63;
                            ++v346;
                          }
                          if ( v324 )
                            v107 = v324;
                        }
LABEL_63:
                        *v107 = v102;
                        v107[1] = j[1];
                        ++*(_DWORD *)(v90 + 72);
                      }
                    }
                    v302 = v16;
                    operator delete();
                    v99 = *(_QWORD **)(v90 + 64);
                    v97 = *(_DWORD *)(v90 + 80);
                    v16 = v302;
                    v109 = *(_DWORD *)(v90 + 72) + 1;
                  }
                  else
                  {
                    *(_QWORD *)(v90 + 72) = 0;
                    if ( v95 == v99 )
                    {
                      v109 = 1;
                    }
                    else
                    {
                      if ( (v98 & 0x10) == 0 || (*v95 = -4096, v95 += 2, v95 != v99) )
                      {
                        do
                        {
                          *v95 = -4096;
                          v95 += 4;
                          *(v95 - 2) = -4096;
                        }
                        while ( v95 != v99 );
                      }
                      v99 = *(_QWORD **)(v90 + 64);
                      v97 = *(_DWORD *)(v90 + 80);
                      v109 = *(_DWORD *)(v90 + 72) + 1;
                    }
                  }
                  if ( !v97 )
                    goto LABEL_523;
                  v110 = v97 - 1;
                  v111 = (v97 - 1) & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
                  v70 = &v99[2 * v111];
                  v72 = *v70;
                  if ( *v70 != v88 )
                  {
                    v271 = 1;
                    v69 = 0;
                    while ( v72 != -4096 )
                    {
                      if ( !v69 && v72 == -8192 )
                        v69 = (__int64)v70;
                      v111 = v110 & (v111 + v271);
                      v70 = &v99[2 * v111];
                      v72 = *v70;
                      if ( v88 == *v70 )
                        goto LABEL_68;
                      ++v271;
                    }
                    if ( v69 )
                      v70 = (unsigned __int64 *)v69;
                  }
                }
LABEL_68:
                *(_DWORD *)(v90 + 72) = v109;
                if ( *v70 != -4096 )
                  --*(_DWORD *)(v90 + 76);
                *v70 = v88;
                v76 = 0;
                v70[1] = 0;
                v75 = *(_QWORD *)(v27 + 128);
                v77 = v75;
                if ( !v75 )
                {
LABEL_71:
                  v112 = *(_QWORD *)(v27 + 104);
                  v113 = *(_QWORD *)(v112 + 96);
                  v114 = v113 & 0xFFFFFFFFFFFFFFFELL;
                  if ( (v113 & 1) != 0 )
                  {
                    if ( !v114 )
                      goto LABEL_44;
LABEL_79:
                    if ( (v114 & 4) != 0
                      && (v117 = (_DWORD *)(v113 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr
                      && (v267 = *(_QWORD *)v117, v268 = *(_DWORD *)(*(_QWORD *)v117 + 12LL), v117[2] != v268) )
                    {
                      v117[2] = v268;
                      v321 = v16;
                      (*(void (__fastcall **)(__int64, __int64, _DWORD *, unsigned __int64 *, unsigned __int64, __int64))(*(_QWORD *)v267 + 144LL))(
                        v267,
                        v112,
                        v117,
                        v70,
                        v72,
                        v69);
                      v77 = *(_QWORD *)(v27 + 128);
                      v16 = v321;
                    }
                    else
                    {
                      v77 = *(_QWORD *)(v27 + 128);
                    }
                  }
                  else
                  {
                    if ( v114 <= 3 || (v113 & 2) == 0 )
                      goto LABEL_44;
                    v115 = (_QWORD *)(v113 & 0xFFFFFFFFFFFFFFFCLL);
                    v116 = v115[2275];
                    if ( v116 )
                    {
                      v70 = (unsigned __int64 *)v115[274];
                      v115[284] += 24LL;
                      v114 = ((unsigned __int64)v70 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( v115[275] >= v114 + 24 && v70 )
                      {
                        v115[274] = v114 + 24;
                      }
                      else
                      {
                        v329 = v16;
                        v114 = sub_6A76A0((__int64)(v115 + 274), 24, 3);
                        v16 = v329;
                      }
                      *(_QWORD *)v114 = v116;
                      v113 = v114 | 5;
                      *(_DWORD *)(v114 + 8) = 0;
                      *(_QWORD *)(v114 + 16) = v112;
                      *(_QWORD *)(v112 + 96) = v114 | 5;
                      LOBYTE(v114) = v114 & 0xFA | 4;
                      goto LABEL_79;
                    }
                    *(_QWORD *)(v112 + 96) = v112 & 0xFFFFFFFFFFFFFFFALL | 1;
                    v77 = *(_QWORD *)(v27 + 128);
                  }
                  if ( !v77 )
                    goto LABEL_44;
                }
LABEL_43:
                v75 = *(_QWORD *)(v77 + 88);
LABEL_44:
                v78 = *(_QWORD *)(v16 + 72);
                v79 = 0;
                v80 = *(_DWORD *)(v78 + 80);
                v81 = *(__int64 **)(v78 + 64);
                if ( !v80 )
                  goto LABEL_244;
                v82 = v80 - 1;
                v83 = 1;
                v21 = 0;
                v84 = ((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4);
                v22 = (unsigned int)v82 & v84;
                v85 = &v81[2 * v22];
                v86 = *v85;
                if ( *v85 == v75 )
                {
LABEL_46:
                  if ( v76 <= v85[1] )
                    goto LABEL_167;
                  goto LABEL_47;
                }
                while ( v86 != -4096 )
                {
                  if ( v86 == -8192 && !v21 )
                    v21 = (unsigned __int64)v85;
                  v22 = (unsigned int)v82 & ((_DWORD)v22 + v83);
                  v85 = &v81[2 * v22];
                  v86 = *v85;
                  if ( v75 == *v85 )
                    goto LABEL_46;
                  ++v83;
                }
                v79 = 2 * v80;
                if ( !v21 )
                  v21 = (unsigned __int64)v85;
                v153 = *(_DWORD *)(v78 + 72) + 1;
                if ( 4 * v153 < 3 * v80 )
                {
                  v22 = v80 >> 3;
                  if ( (unsigned int)v22 >= v80 - *(_DWORD *)(v78 + 76) - v153 )
                  {
                    v340 = v16;
                    v313 = *(_DWORD *)(v78 + 80);
                    v221 = ((((v82 | (v82 >> 1)) >> 2) | v82 | (v82 >> 1)) >> 4)
                         | ((v82 | (v82 >> 1)) >> 2)
                         | v82
                         | (v82 >> 1);
                    v222 = ((((v221 >> 8) | v221) >> 16) | (v221 >> 8) | v221) + 1;
                    if ( (unsigned int)v222 < 0x40 )
                      LODWORD(v222) = 64;
                    *(_DWORD *)(v78 + 80) = v222;
                    v223 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v222, 8);
                    v224 = *(unsigned int *)(v78 + 80);
                    *(_QWORD *)(v78 + 64) = v223;
                    v16 = v340;
                    v225 = v224;
                    v226 = 16 * v224;
                    v227 = &v223[(unsigned __int64)v226 / 8];
                    if ( v81 )
                    {
                      *(_QWORD *)(v78 + 72) = 0;
                      v228 = &v81[2 * v313];
                      if ( v226 )
                      {
                        if ( (v226 & 0x10) == 0 || (*v223 = -4096, v223 += 2, v223 != v227) )
                        {
                          do
                          {
                            *v223 = -4096;
                            v223 += 4;
                            *(v223 - 2) = -4096;
                          }
                          while ( v223 != v227 );
                        }
                      }
                      v314 = i;
                      v229 = v81;
                      v230 = v75;
                      do
                      {
                        v231 = *v229;
                        if ( *v229 != -8192 && v231 != -4096 )
                        {
                          v232 = *(_DWORD *)(v78 + 80);
                          if ( !v232 )
                          {
                            *(_QWORD *)&dword_0 = *v229;
                            BUG();
                          }
                          v233 = v232 - 1;
                          v234 = *(_QWORD *)(v78 + 64);
                          v235 = v233 & (((unsigned int)v231 >> 9) ^ ((unsigned int)v231 >> 4));
                          v236 = (_QWORD *)(v234 + 16LL * v235);
                          v237 = *v236;
                          if ( v231 != *v236 )
                          {
                            v358 = 1;
                            v351 = nullptr;
                            while ( v237 != -4096 )
                            {
                              if ( !v351 )
                              {
                                if ( v237 != -8192 )
                                  v236 = nullptr;
                                v351 = v236;
                              }
                              v235 = v233 & (v358 + v235);
                              v236 = (_QWORD *)(v234 + 16LL * v235);
                              v237 = *v236;
                              if ( v231 == *v236 )
                                goto LABEL_278;
                              ++v358;
                            }
                            if ( v351 )
                              v236 = v351;
                          }
LABEL_278:
                          *v236 = v231;
                          v236[1] = v229[1];
                          ++*(_DWORD *)(v78 + 72);
                        }
                        v229 += 2;
                      }
                      while ( v228 != v229 );
                      v75 = v230;
                      i = v314;
                      v315 = v16;
                      operator delete();
                      v227 = *(_QWORD **)(v78 + 64);
                      v225 = *(_DWORD *)(v78 + 80);
                      v16 = v315;
                      v153 = *(_DWORD *)(v78 + 72) + 1;
                    }
                    else
                    {
                      *(_QWORD *)(v78 + 72) = 0;
                      if ( v223 == v227 )
                      {
                        v153 = 1;
                      }
                      else
                      {
                        if ( (v226 & 0x10) == 0 || (*v223 = -4096, v223 += 2, v223 != v227) )
                        {
                          do
                          {
                            *v223 = -4096;
                            v223 += 4;
                            *(v223 - 2) = -4096;
                          }
                          while ( v223 != v227 );
                        }
                        v227 = *(_QWORD **)(v78 + 64);
                        v225 = *(_DWORD *)(v78 + 80);
                        v153 = *(_DWORD *)(v78 + 72) + 1;
                      }
                    }
                    if ( !v225 )
                      goto LABEL_530;
                    v238 = v225 - 1;
                    v239 = 1;
                    v22 = 0;
                    LODWORD(v240) = (v225 - 1) & v84;
                    v21 = (unsigned __int64)&v227[2 * (unsigned int)v240];
                    v241 = *(_QWORD *)v21;
                    if ( v75 != *(_QWORD *)v21 )
                    {
                      while ( v241 != -4096 )
                      {
                        if ( !v22 && v241 == -8192 )
                          v22 = v21;
                        v240 = v238 & (unsigned int)(v240 + v239);
                        v21 = (unsigned __int64)&v227[2 * v240];
                        v241 = *(_QWORD *)v21;
                        if ( v75 == *(_QWORD *)v21 )
                          goto LABEL_164;
                        ++v239;
                      }
                      if ( v22 )
                        v21 = v22;
                    }
                  }
                }
                else
                {
LABEL_244:
                  v339 = v16;
                  v311 = *(_DWORD *)(v78 + 80);
                  v202 = ((((((((((unsigned int)(v79 - 1) | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 2)
                              | (unsigned int)(v79 - 1)
                              | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 4)
                            | (((unsigned int)(v79 - 1) | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 2)
                            | (unsigned int)(v79 - 1)
                            | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 8)
                          | (((((unsigned int)(v79 - 1) | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 2)
                            | (unsigned int)(v79 - 1)
                            | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 4)
                          | (((unsigned int)(v79 - 1) | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 2)
                          | (unsigned int)(v79 - 1)
                          | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 16)
                        | (((((((unsigned int)(v79 - 1) | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 2)
                            | (unsigned int)(v79 - 1)
                            | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 4)
                          | (((unsigned int)(v79 - 1) | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 2)
                          | (unsigned int)(v79 - 1)
                          | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 8)
                        | (((((unsigned int)(v79 - 1) | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 2)
                          | (unsigned int)(v79 - 1)
                          | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 4)
                        | (((unsigned int)(v79 - 1) | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1)) >> 2)
                        | (unsigned int)(v79 - 1)
                        | ((unsigned __int64)(unsigned int)(v79 - 1) >> 1))
                       + 1;
                  if ( (unsigned int)v202 < 0x40 )
                    LODWORD(v202) = 64;
                  *(_DWORD *)(v78 + 80) = v202;
                  v203 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v202, 8);
                  v204 = *(unsigned int *)(v78 + 80);
                  *(_QWORD *)(v78 + 64) = v203;
                  v16 = v339;
                  v205 = v204;
                  v206 = 16 * v204;
                  v207 = &v203[(unsigned __int64)v206 / 8];
                  if ( v81 )
                  {
                    *(_QWORD *)(v78 + 72) = 0;
                    v208 = &v81[2 * v311];
                    if ( v206 )
                    {
                      if ( (v206 & 0x10) == 0 || (*v203 = -4096, v203 += 2, v203 != v207) )
                      {
                        do
                        {
                          *v203 = -4096;
                          v203 += 4;
                          *(v203 - 2) = -4096;
                        }
                        while ( v203 != v207 );
                      }
                    }
                    for ( k = v81; v208 != k; k += 2 )
                    {
                      v210 = *k;
                      if ( *k != -8192 && v210 != -4096 )
                      {
                        v211 = *(_DWORD *)(v78 + 80);
                        if ( !v211 )
                        {
                          *(_QWORD *)&dword_0 = *k;
                          BUG();
                        }
                        v212 = v211 - 1;
                        v213 = *(_QWORD *)(v78 + 64);
                        v214 = v212 & (((unsigned int)v210 >> 9) ^ ((unsigned int)v210 >> 4));
                        v215 = (_QWORD *)(v213 + 16LL * v214);
                        v216 = *v215;
                        if ( v210 != *v215 )
                        {
                          v347 = 1;
                          v325 = nullptr;
                          while ( v216 != -4096 )
                          {
                            if ( v216 == -8192 )
                            {
                              if ( v325 )
                                v215 = v325;
                              v325 = v215;
                            }
                            v214 = v212 & (v347 + v214);
                            v215 = (_QWORD *)(v213 + 16LL * v214);
                            v216 = *v215;
                            if ( v210 == *v215 )
                              goto LABEL_256;
                            ++v347;
                          }
                          if ( v325 )
                            v215 = v325;
                        }
LABEL_256:
                        *v215 = v210;
                        v215[1] = k[1];
                        ++*(_DWORD *)(v78 + 72);
                      }
                    }
                    v312 = v16;
                    operator delete();
                    v207 = *(_QWORD **)(v78 + 64);
                    v205 = *(_DWORD *)(v78 + 80);
                    v16 = v312;
                    v153 = *(_DWORD *)(v78 + 72) + 1;
                  }
                  else
                  {
                    *(_QWORD *)(v78 + 72) = 0;
                    if ( v203 == v207 )
                    {
                      v153 = 1;
                    }
                    else
                    {
                      if ( (v206 & 0x10) == 0 || (*v203 = -4096, v203 += 2, v203 != v207) )
                      {
                        do
                        {
                          *v203 = -4096;
                          v203 += 4;
                          *(v203 - 2) = -4096;
                        }
                        while ( v203 != v207 );
                      }
                      v207 = *(_QWORD **)(v78 + 64);
                      v205 = *(_DWORD *)(v78 + 80);
                      v153 = *(_DWORD *)(v78 + 72) + 1;
                    }
                  }
                  if ( !v205 )
                  {
LABEL_530:
                    *(_DWORD *)(v78 + 72) = v153;
                    BUG();
                  }
                  v217 = v205 - 1;
                  v218 = (v205 - 1) & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
                  v21 = (unsigned __int64)&v207[2 * v218];
                  v22 = *(_QWORD *)v21;
                  if ( v75 != *(_QWORD *)v21 )
                  {
                    v219 = 1;
                    v220 = nullptr;
                    while ( v22 != -4096 )
                    {
                      if ( v22 == -8192 && !v220 )
                        v220 = (__int64 *)v21;
                      v218 = v217 & (v218 + v219);
                      v21 = (unsigned __int64)&v207[2 * v218];
                      v22 = *(_QWORD *)v21;
                      if ( v75 == *(_QWORD *)v21 )
                        goto LABEL_164;
                      ++v219;
                    }
                    if ( v220 )
                      v21 = (unsigned __int64)v220;
                  }
                }
LABEL_164:
                *(_DWORD *)(v78 + 72) = v153;
                if ( *(_QWORD *)v21 != -4096 )
                  --*(_DWORD *)(v78 + 76);
                *(_QWORD *)v21 = v75;
                *(_QWORD *)(v21 + 8) = 0;
                if ( v76 <= 0 )
                {
LABEL_167:
                  v20 = i;
                  if ( (unsigned __int64)v287 < i )
                  {
                    v154 = *v287;
                    v17 = v287 + 1;
                    *v287 = *(_QWORD *)i;
                    *(_QWORD *)i = v154;
                    v19 = a1->m128i_i64[0];
                    goto LABEL_11;
                  }
                  v322 = v16;
                  sub_6EEA40(v287, v360, a3, v16);
                  a4 = v322;
                  result = (char *)v287 - (char *)a1;
                  if ( (char *)v287 - (char *)a1 <= 128 )
                    return result;
                  v360 = v287;
                  goto LABEL_3;
                }
LABEL_47:
                v27 = a1->m128i_i64[0];
              }
              v177 = *(_QWORD *)(v87 + 104);
              v178 = *(_QWORD *)(v177 + 96);
              v179 = v178 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v178 & 1) != 0 )
              {
                if ( !v179 )
                  goto LABEL_50;
              }
              else
              {
                if ( v179 <= 3 || (v178 & 2) == 0 )
                  goto LABEL_50;
                v180 = (_QWORD *)(v178 & 0xFFFFFFFFFFFFFFFCLL);
                v181 = v180[2275];
                if ( !v181 )
                {
                  *(_QWORD *)(v177 + 96) = v177 & 0xFFFFFFFFFFFFFFFALL | 1;
                  v89 = *(_QWORD *)(v87 + 128);
                  goto LABEL_211;
                }
                v21 = v180[274];
                v180[284] += 24LL;
                v179 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v180[275] >= v179 + 24 && v21 )
                {
                  v180[274] = v179 + 24;
                }
                else
                {
                  v330 = v16;
                  v179 = sub_6A76A0((__int64)(v180 + 274), 24, 3);
                  v16 = v330;
                }
                *(_QWORD *)v179 = v181;
                v178 = v179 | 5;
                *(_DWORD *)(v179 + 8) = 0;
                *(_QWORD *)(v179 + 16) = v177;
                *(_QWORD *)(v177 + 96) = v179 | 5;
                LOBYTE(v179) = v179 & 0xFA | 4;
              }
              if ( (v179 & 4) != 0
                && (v182 = (_DWORD *)(v178 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr
                && (v265 = *(_QWORD *)v182, v266 = *(_DWORD *)(*(_QWORD *)v182 + 12LL), v182[2] != v266) )
              {
                v182[2] = v266;
                v320 = v16;
                (*(void (__fastcall **)(__int64, __int64, _DWORD *, unsigned __int64, __int64))(*(_QWORD *)v265 + 144LL))(
                  v265,
                  v177,
                  v182,
                  v21,
                  v22);
                v89 = *(_QWORD *)(v87 + 128);
                v16 = v320;
              }
              else
              {
                v89 = *(_QWORD *)(v87 + 128);
              }
LABEL_211:
              if ( !v89 )
                goto LABEL_50;
              goto LABEL_49;
            }
            while ( v26 != -4096 )
            {
              if ( v26 == -8192 && !v23 )
                v23 = v25;
              v24 = v21 & (v22 + v24);
              v25 = &v47[2 * v24];
              v26 = *v25;
              if ( v41 == *v25 )
                goto LABEL_9;
              v22 = (unsigned int)(v22 + 1);
            }
            v45 = 2 * v46;
            if ( !v23 )
              v23 = v25;
            v64 = *(_DWORD *)(v44 + 72) + 1;
            v22 = (unsigned int)(4 * v64);
            if ( (unsigned int)v22 < 3 * (int)v46 )
            {
              if ( (unsigned int)v46 >> 3 < (int)v46 - *(_DWORD *)(v44 + 76) - v64 )
                goto LABEL_37;
              v334 = v16;
              v303 = v20;
              v288 = v17;
              v125 = (((((((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4)
                        | ((v21 | (v21 >> 1)) >> 2)
                        | v21
                        | (v21 >> 1)) >> 8)
                      | ((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4)
                      | ((v21 | (v21 >> 1)) >> 2)
                      | v21
                      | (v21 >> 1)) >> 16)
                    | ((((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4)
                      | ((v21 | (v21 >> 1)) >> 2)
                      | v21
                      | (v21 >> 1)) >> 8)
                    | ((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4)
                    | ((v21 | (v21 >> 1)) >> 2)
                    | v21
                    | (v21 >> 1))
                   + 1;
              if ( (unsigned int)v125 < 0x40 )
                LODWORD(v125) = 64;
              *(_DWORD *)(v44 + 80) = v125;
              v126 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v125, 8);
              v127 = *(unsigned int *)(v44 + 80);
              v17 = v288;
              v20 = v303;
              v16 = v334;
              *(_QWORD *)(v44 + 64) = v126;
              v128 = v127;
              v129 = 16 * v127;
              v21 = (unsigned __int64)&v126[(unsigned __int64)v129 / 8];
              if ( v47 )
              {
                *(_QWORD *)(v44 + 72) = 0;
                v130 = &v47[2 * v46];
                if ( v129 )
                {
                  if ( (v129 & 0x10) == 0 || (*v126 = -4096, v126 += 2, v126 != (_QWORD *)v21) )
                  {
                    do
                    {
                      *v126 = -4096;
                      v126 += 4;
                      *(v126 - 2) = -4096;
                    }
                    while ( v126 != (_QWORD *)v21 );
                  }
                }
                v304 = v288;
                v131 = v47;
                v289 = v42;
                v132 = v20;
                do
                {
                  v133 = *v131;
                  if ( *v131 != -4096 && v133 != -8192 )
                  {
                    v134 = *(_DWORD *)(v44 + 80);
                    if ( !v134 )
                    {
                      *(_QWORD *)&dword_0 = *v131;
                      BUG();
                    }
                    v135 = v134 - 1;
                    v136 = *(_QWORD *)(v44 + 64);
                    v137 = v135 & (((unsigned int)v133 >> 9) ^ ((unsigned int)v133 >> 4));
                    v138 = (_QWORD *)(v136 + 16LL * v137);
                    v139 = *v138;
                    if ( *v138 != v133 )
                    {
                      v356 = 1;
                      v349 = nullptr;
                      while ( v139 != -4096 )
                      {
                        if ( v139 == -8192 )
                        {
                          if ( v349 )
                            v138 = v349;
                          v349 = v138;
                        }
                        v137 = v135 & (v356 + v137);
                        v138 = (_QWORD *)(v136 + 16LL * v137);
                        v139 = *v138;
                        if ( v133 == *v138 )
                          goto LABEL_132;
                        ++v356;
                      }
                      if ( v349 )
                        v138 = v349;
                    }
LABEL_132:
                    *v138 = v133;
                    v138[1] = v131[1];
                    ++*(_DWORD *)(v44 + 72);
                  }
                  v131 += 2;
                }
                while ( v130 != v131 );
                v140 = v304;
                v305 = v132;
                v42 = v289;
                v335 = v140;
                v290 = v16;
                operator delete();
                v21 = *(_QWORD *)(v44 + 64);
                v128 = *(_DWORD *)(v44 + 80);
                v16 = v290;
                v20 = v305;
                v17 = v335;
                v64 = *(_DWORD *)(v44 + 72) + 1;
              }
              else
              {
                *(_QWORD *)(v44 + 72) = 0;
                if ( v126 == (_QWORD *)v21 )
                {
                  v64 = 1;
                }
                else
                {
                  if ( (v129 & 0x10) == 0 || (*v126 = -4096, v126 += 2, v126 != (_QWORD *)v21) )
                  {
                    do
                    {
                      *v126 = -4096;
                      v126 += 4;
                      *(v126 - 2) = -4096;
                    }
                    while ( v126 != (_QWORD *)v21 );
                  }
                  v21 = *(_QWORD *)(v44 + 64);
                  v128 = *(_DWORD *)(v44 + 80);
                  v64 = *(_DWORD *)(v44 + 72) + 1;
                }
              }
              if ( !v128 )
              {
LABEL_525:
                *(_DWORD *)(v44 + 72) = v64;
                BUG();
              }
              v141 = v128 - 1;
              v142 = 1;
              v143 = nullptr;
              v144 = (v128 - 1) & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
              v23 = (__int64 *)(v21 + 16LL * v144);
              v145 = *v23;
              if ( v41 == *v23 )
                goto LABEL_37;
              while ( v145 != -4096 )
              {
                if ( v145 == -8192 && !v143 )
                  v143 = v23;
                v22 = (unsigned int)(v142 + 1);
                v144 = v141 & (v144 + v142);
                v23 = (__int64 *)(v21 + 16LL * v144);
                v145 = *v23;
                if ( v41 == *v23 )
                  goto LABEL_37;
                ++v142;
              }
            }
            else
            {
LABEL_18:
              v48 = (unsigned int)(v45 - 1);
              v331 = v16;
              v299 = v20;
              v284 = v17;
              v49 = (((((((((v48 | (v48 >> 1)) >> 2) | v48 | (v48 >> 1)) >> 4)
                       | ((v48 | (v48 >> 1)) >> 2)
                       | v48
                       | (v48 >> 1)) >> 8)
                     | ((((v48 | (v48 >> 1)) >> 2) | v48 | (v48 >> 1)) >> 4)
                     | ((v48 | (v48 >> 1)) >> 2)
                     | v48
                     | (v48 >> 1)) >> 16)
                   | ((((((v48 | (v48 >> 1)) >> 2) | v48 | (v48 >> 1)) >> 4)
                     | ((v48 | (v48 >> 1)) >> 2)
                     | v48
                     | (v48 >> 1)) >> 8)
                   | ((((v48 | (v48 >> 1)) >> 2) | v48 | (v48 >> 1)) >> 4)
                   | ((v48 | (v48 >> 1)) >> 2)
                   | v48
                   | (v48 >> 1))
                  + 1;
              if ( v49 < 0x40 )
                v49 = 64;
              *(_DWORD *)(v44 + 80) = v49;
              v50 = (_QWORD *)sub_25CC9C0(16LL * v49, 8);
              v51 = *(unsigned int *)(v44 + 80);
              v17 = v284;
              v20 = v299;
              v16 = v331;
              *(_QWORD *)(v44 + 64) = v50;
              v52 = v51;
              v53 = 16 * v51;
              v21 = (unsigned __int64)&v50[(unsigned __int64)v53 / 8];
              if ( v47 )
              {
                *(_QWORD *)(v44 + 72) = 0;
                v54 = &v47[2 * v46];
                if ( v53 )
                {
                  if ( (v53 & 0x10) == 0 || (*v50 = -4096, v50 += 2, v50 != (_QWORD *)v21) )
                  {
                    do
                    {
                      *v50 = -4096;
                      v50 += 4;
                      *(v50 - 2) = -4096;
                    }
                    while ( v50 != (_QWORD *)v21 );
                  }
                }
                v55 = v47;
                if ( v47 != v54 )
                {
                  v285 = v42;
                  v56 = v17;
                  do
                  {
                    v57 = *v55;
                    if ( *v55 != -4096 && v57 != -8192 )
                    {
                      v58 = *(_DWORD *)(v44 + 80);
                      if ( !v58 )
                      {
                        *(_QWORD *)&dword_0 = *v55;
                        BUG();
                      }
                      v59 = v58 - 1;
                      v60 = *(_QWORD *)(v44 + 64);
                      v61 = v59 & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
                      v62 = (_QWORD *)(v60 + 16LL * v61);
                      v63 = *v62;
                      if ( v57 != *v62 )
                      {
                        v348 = 1;
                        v326 = nullptr;
                        while ( v63 != -4096 )
                        {
                          if ( v63 == -8192 )
                          {
                            if ( v326 )
                              v62 = v326;
                            v326 = v62;
                          }
                          v61 = v59 & (v348 + v61);
                          v62 = (_QWORD *)(v60 + 16LL * v61);
                          v63 = *v62;
                          if ( v57 == *v62 )
                            goto LABEL_31;
                          ++v348;
                        }
                        if ( v326 )
                          v62 = v326;
                      }
LABEL_31:
                      *v62 = v57;
                      v62[1] = v55[1];
                      ++*(_DWORD *)(v44 + 72);
                    }
                    v55 += 2;
                  }
                  while ( v54 != v55 );
                  v17 = v56;
                  v42 = v285;
                }
                v332 = v16;
                v300 = v20;
                v286 = v17;
                operator delete();
                v21 = *(_QWORD *)(v44 + 64);
                v52 = *(_DWORD *)(v44 + 80);
                v17 = v286;
                v20 = v300;
                v16 = v332;
                v64 = *(_DWORD *)(v44 + 72) + 1;
              }
              else
              {
                *(_QWORD *)(v44 + 72) = 0;
                if ( v50 == (_QWORD *)v21 )
                {
                  v64 = 1;
                }
                else
                {
                  if ( (v53 & 0x10) == 0 || (*v50 = -4096, v50 += 2, v50 != (_QWORD *)v21) )
                  {
                    do
                    {
                      *v50 = -4096;
                      v50 += 4;
                      *(v50 - 2) = -4096;
                    }
                    while ( v50 != (_QWORD *)v21 );
                  }
                  v21 = *(_QWORD *)(v44 + 64);
                  v52 = *(_DWORD *)(v44 + 80);
                  v64 = *(_DWORD *)(v44 + 72) + 1;
                }
              }
              if ( !v52 )
                goto LABEL_525;
              v65 = v52 - 1;
              v66 = v65 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
              v23 = (__int64 *)(v21 + 16LL * v66);
              v22 = *v23;
              if ( v41 == *v23 )
                goto LABEL_37;
              v276 = 1;
              v143 = nullptr;
              while ( v22 != -4096 )
              {
                if ( v22 == -8192 && !v143 )
                  v143 = v23;
                v66 = v65 & (v66 + v276);
                v23 = (__int64 *)(v21 + 16LL * v66);
                v22 = *v23;
                if ( v41 == *v23 )
                  goto LABEL_37;
                ++v276;
              }
            }
            if ( v143 )
              v23 = v143;
LABEL_37:
            *(_DWORD *)(v44 + 72) = v64;
            if ( *v23 != -4096 )
              --*(_DWORD *)(v44 + 76);
            *v23 = v41;
            v23[1] = 0;
            v27 = a1->m128i_i64[0];
            v19 = a1->m128i_i64[0];
            if ( v42 > 0 )
            {
LABEL_10:
              ++v17;
              continue;
            }
            goto LABEL_40;
          }
LABEL_97:
          v119 = *(_QWORD *)(v29 + 104);
          v120 = *(_QWORD *)(v119 + 96);
          v121 = v120 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v120 & 1) != 0 )
          {
            if ( !v121 )
              goto LABEL_17;
          }
          else
          {
            if ( v121 <= 3 || (v120 & 2) == 0 )
              goto LABEL_17;
            v122 = (_QWORD *)(v120 & 0xFFFFFFFFFFFFFFFCLL);
            v123 = v122[2275];
            if ( !v123 )
            {
              *(_QWORD *)(v119 + 96) = v119 & 0xFFFFFFFFFFFFFFFALL | 1;
              v43 = *(_QWORD *)(v29 + 128);
              goto LABEL_108;
            }
            v35 = v122[274];
            v122[284] += 24LL;
            v121 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v122[275] >= v121 + 24 && v35 )
            {
              v122[274] = v121 + 24;
            }
            else
            {
              v353 = v16;
              v327 = v20;
              v297 = v17;
              v121 = sub_6A76A0((__int64)(v122 + 274), 24, 3);
              v16 = v353;
              v20 = v327;
              v17 = v297;
            }
            *(_QWORD *)v121 = v123;
            v120 = v121 | 5;
            *(_DWORD *)(v121 + 8) = 0;
            *(_QWORD *)(v121 + 16) = v119;
            *(_QWORD *)(v119 + 96) = v121 | 5;
            LOBYTE(v121) = v121 & 0xFA | 4;
          }
          if ( (v121 & 4) != 0
            && (v124 = (_DWORD *)(v120 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr
            && (v261 = *(_QWORD *)v124, v262 = *(_DWORD *)(*(_QWORD *)v124 + 12LL), v124[2] != v262) )
          {
            v124[2] = v262;
            v343 = v16;
            v318 = v20;
            v295 = v17;
            (*(void (__fastcall **)(__int64, __int64, _DWORD *, unsigned __int64, __int64))(*(_QWORD *)v261 + 144LL))(
              v261,
              v119,
              v124,
              v35,
              v36);
            v16 = v343;
            v20 = v318;
            v43 = *(_QWORD *)(v29 + 128);
            v17 = v295;
          }
          else
          {
            v43 = *(_QWORD *)(v29 + 128);
          }
LABEL_108:
          if ( !v43 )
            goto LABEL_17;
          goto LABEL_16;
        }
        while ( v40 != -4096 )
        {
          if ( v40 == -8192 && !v37 )
            v37 = v39;
          v38 = v35 & (v36 + v38);
          v39 = &v34[2 * v38];
          v40 = *v39;
          if ( v28 == *v39 )
            goto LABEL_15;
          v36 = (unsigned int)(v36 + 1);
        }
        v32 = 2 * v33;
        if ( !v37 )
          v37 = v39;
        v118 = *(_DWORD *)(v31 + 72) + 1;
        v36 = (unsigned int)(4 * v118);
        if ( (unsigned int)v36 < 3 * (int)v33 )
        {
          if ( (unsigned int)v33 >> 3 >= (int)v33 - *(_DWORD *)(v31 + 76) - v118 )
          {
            v341 = v16;
            v316 = v20;
            v293 = v17;
            v242 = (((((((((v35 | (v35 >> 1)) >> 2) | v35 | (v35 >> 1)) >> 4)
                      | ((v35 | (v35 >> 1)) >> 2)
                      | v35
                      | (v35 >> 1)) >> 8)
                    | ((((v35 | (v35 >> 1)) >> 2) | v35 | (v35 >> 1)) >> 4)
                    | ((v35 | (v35 >> 1)) >> 2)
                    | v35
                    | (v35 >> 1)) >> 16)
                  | ((((((v35 | (v35 >> 1)) >> 2) | v35 | (v35 >> 1)) >> 4)
                    | ((v35 | (v35 >> 1)) >> 2)
                    | v35
                    | (v35 >> 1)) >> 8)
                  | ((((v35 | (v35 >> 1)) >> 2) | v35 | (v35 >> 1)) >> 4)
                  | ((v35 | (v35 >> 1)) >> 2)
                  | v35
                  | (v35 >> 1))
                 + 1;
            if ( (unsigned int)v242 < 0x40 )
              LODWORD(v242) = 64;
            *(_DWORD *)(v31 + 80) = v242;
            v243 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v242, 8);
            v244 = *(unsigned int *)(v31 + 80);
            v17 = v293;
            v20 = v316;
            v16 = v341;
            *(_QWORD *)(v31 + 64) = v243;
            v245 = v244;
            v246 = 16 * v244;
            v35 = (unsigned __int64)&v243[(unsigned __int64)v246 / 8];
            if ( v34 )
            {
              *(_QWORD *)(v31 + 72) = 0;
              v247 = &v34[2 * v33];
              if ( v246 )
              {
                if ( (v246 & 0x10) == 0 || (*v243 = -4096, v243 += 2, v243 != (_QWORD *)v35) )
                {
                  do
                  {
                    *v243 = -4096;
                    v243 += 4;
                    *(v243 - 2) = -4096;
                  }
                  while ( v243 != (_QWORD *)v35 );
                }
              }
              v248 = v34;
              v317 = v29;
              v249 = v20;
              do
              {
                v250 = *v248;
                if ( *v248 != -4096 && v250 != -8192 )
                {
                  v251 = *(_DWORD *)(v31 + 80);
                  if ( !v251 )
                  {
                    *(_QWORD *)&dword_0 = *v248;
                    BUG();
                  }
                  v252 = v251 - 1;
                  v253 = *(_QWORD *)(v31 + 64);
                  v254 = v252 & (((unsigned int)v250 >> 9) ^ ((unsigned int)v250 >> 4));
                  v255 = (_QWORD *)(v253 + 16LL * v254);
                  v256 = *v255;
                  if ( v250 != *v255 )
                  {
                    v357 = 1;
                    v350 = nullptr;
                    while ( v256 != -4096 )
                    {
                      if ( v256 == -8192 )
                      {
                        if ( v350 )
                          v255 = v350;
                        v350 = v255;
                      }
                      v254 = v252 & (v357 + v254);
                      v255 = (_QWORD *)(v253 + 16LL * v254);
                      v256 = *v255;
                      if ( v250 == *v255 )
                        goto LABEL_299;
                      ++v357;
                    }
                    if ( v350 )
                      v255 = v350;
                  }
LABEL_299:
                  *v255 = v250;
                  v255[1] = v248[1];
                  ++*(_DWORD *)(v31 + 72);
                }
                v248 += 2;
              }
              while ( v247 != v248 );
              v342 = v249;
              v29 = v317;
              v355 = v293;
              v294 = v16;
              operator delete();
              v35 = *(_QWORD *)(v31 + 64);
              v245 = *(_DWORD *)(v31 + 80);
              v16 = v294;
              v20 = v342;
              v17 = v355;
              v118 = *(_DWORD *)(v31 + 72) + 1;
            }
            else
            {
              *(_QWORD *)(v31 + 72) = 0;
              if ( v243 == (_QWORD *)v35 )
              {
                v118 = 1;
              }
              else
              {
                if ( (v246 & 0x10) == 0 || (*v243 = -4096, v243 += 2, v243 != (_QWORD *)v35) )
                {
                  do
                  {
                    *v243 = -4096;
                    v243 += 4;
                    *(v243 - 2) = -4096;
                  }
                  while ( v243 != (_QWORD *)v35 );
                }
                v35 = *(_QWORD *)(v31 + 64);
                v245 = *(_DWORD *)(v31 + 80);
                v118 = *(_DWORD *)(v31 + 72) + 1;
              }
            }
            if ( !v245 )
              goto LABEL_526;
            v257 = v245 - 1;
            v258 = 1;
            v201 = nullptr;
            LODWORD(v259) = (v245 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
            v37 = (__int64 *)(v35 + 16LL * (unsigned int)v259);
            v260 = *v37;
            if ( v28 != *v37 )
            {
              while ( v260 != -4096 )
              {
                if ( v260 == -8192 && !v201 )
                  v201 = v37;
                v36 = (unsigned int)(v258 + 1);
                v259 = v257 & (unsigned int)(v259 + v258);
                v37 = (__int64 *)(v35 + 16 * v259);
                v260 = *v37;
                if ( v28 == *v37 )
                  goto LABEL_94;
                ++v258;
              }
LABEL_241:
              if ( v201 )
                v37 = v201;
            }
          }
        }
        else
        {
LABEL_221:
          v183 = (unsigned int)(v32 - 1);
          v337 = v16;
          v309 = v20;
          v291 = v17;
          v184 = (((((((((v183 | (v183 >> 1)) >> 2) | v183 | (v183 >> 1)) >> 4)
                    | ((v183 | (v183 >> 1)) >> 2)
                    | v183
                    | (v183 >> 1)) >> 8)
                  | ((((v183 | (v183 >> 1)) >> 2) | v183 | (v183 >> 1)) >> 4)
                  | ((v183 | (v183 >> 1)) >> 2)
                  | v183
                  | (v183 >> 1)) >> 16)
                | ((((((v183 | (v183 >> 1)) >> 2) | v183 | (v183 >> 1)) >> 4)
                  | ((v183 | (v183 >> 1)) >> 2)
                  | v183
                  | (v183 >> 1)) >> 8)
                | ((((v183 | (v183 >> 1)) >> 2) | v183 | (v183 >> 1)) >> 4)
                | ((v183 | (v183 >> 1)) >> 2)
                | v183
                | (v183 >> 1))
               + 1;
          if ( v184 < 0x40 )
            v184 = 64;
          *(_DWORD *)(v31 + 80) = v184;
          v185 = (_QWORD *)sub_25CC9C0(16LL * v184, 8);
          v186 = *(unsigned int *)(v31 + 80);
          v17 = v291;
          v20 = v309;
          v16 = v337;
          *(_QWORD *)(v31 + 64) = v185;
          v187 = v186;
          v188 = 16 * v186;
          v35 = (unsigned __int64)&v185[(unsigned __int64)v188 / 8];
          if ( v34 )
          {
            *(_QWORD *)(v31 + 72) = 0;
            v189 = &v34[2 * v33];
            if ( v188 )
            {
              if ( (v188 & 0x10) == 0 || (*v185 = -4096, v185 += 2, v185 != (_QWORD *)v35) )
              {
                do
                {
                  *v185 = -4096;
                  v185 += 4;
                  *(v185 - 2) = -4096;
                }
                while ( v185 != (_QWORD *)v35 );
              }
            }
            v190 = v34;
            if ( v34 != v189 )
            {
              do
              {
                v191 = *v190;
                if ( *v190 != -4096 && v191 != -8192 )
                {
                  v192 = *(_DWORD *)(v31 + 80);
                  if ( !v192 )
                  {
                    *(_QWORD *)&dword_0 = *v190;
                    BUG();
                  }
                  v193 = v192 - 1;
                  v194 = *(_QWORD *)(v31 + 64);
                  v195 = v193 & (((unsigned int)v191 >> 9) ^ ((unsigned int)v191 >> 4));
                  v196 = (_QWORD *)(v194 + 16LL * v195);
                  v197 = *v196;
                  if ( v191 != *v196 )
                  {
                    v345 = 1;
                    v323 = nullptr;
                    while ( v197 != -4096 )
                    {
                      if ( v197 == -8192 )
                      {
                        if ( v323 )
                          v196 = v323;
                        v323 = v196;
                      }
                      v195 = v193 & (v345 + v195);
                      v196 = (_QWORD *)(v194 + 16LL * v195);
                      v197 = *v196;
                      if ( v191 == *v196 )
                        goto LABEL_233;
                      ++v345;
                    }
                    if ( v323 )
                      v196 = v323;
                  }
LABEL_233:
                  *v196 = v191;
                  v196[1] = v190[1];
                  ++*(_DWORD *)(v31 + 72);
                }
                v190 += 2;
              }
              while ( v189 != v190 );
              v17 = v291;
            }
            v338 = v16;
            v310 = v20;
            v292 = v17;
            operator delete();
            v35 = *(_QWORD *)(v31 + 64);
            v187 = *(_DWORD *)(v31 + 80);
            v17 = v292;
            v20 = v310;
            v16 = v338;
            v118 = *(_DWORD *)(v31 + 72) + 1;
          }
          else
          {
            *(_QWORD *)(v31 + 72) = 0;
            if ( v185 == (_QWORD *)v35 )
            {
              v118 = 1;
            }
            else
            {
              if ( (v188 & 0x10) == 0 || (*v185 = -4096, v185 += 2, v185 != (_QWORD *)v35) )
              {
                do
                {
                  *v185 = -4096;
                  v185 += 4;
                  *(v185 - 2) = -4096;
                }
                while ( v185 != (_QWORD *)v35 );
              }
              v35 = *(_QWORD *)(v31 + 64);
              v187 = *(_DWORD *)(v31 + 80);
              v118 = *(_DWORD *)(v31 + 72) + 1;
            }
          }
          if ( !v187 )
          {
LABEL_526:
            *(_DWORD *)(v31 + 72) = v118;
            BUG();
          }
          v198 = v187 - 1;
          LODWORD(v199) = v198 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          v37 = (__int64 *)(v35 + 16LL * (unsigned int)v199);
          v36 = *v37;
          if ( v28 != *v37 )
          {
            v200 = 1;
            v201 = nullptr;
            while ( v36 != -4096 )
            {
              if ( !v201 && v36 == -8192 )
                v201 = v37;
              v199 = v198 & (unsigned int)(v199 + v200);
              v37 = (__int64 *)(v35 + 16 * v199);
              v36 = *v37;
              if ( v28 == *v37 )
                goto LABEL_94;
              ++v200;
            }
            goto LABEL_241;
          }
        }
LABEL_94:
        *(_DWORD *)(v31 + 72) = v118;
        if ( *v37 != -4096 )
          --*(_DWORD *)(v31 + 76);
        *v37 = v28;
        v42 = 0;
        v37[1] = 0;
        v41 = *(_QWORD *)(v29 + 128);
        v43 = v41;
        if ( v41 )
          goto LABEL_16;
        goto LABEL_97;
      }
      break;
    }
    v146 = *(_QWORD *)(v19 + 104);
    v147 = *(_QWORD *)(v146 + 96);
    v148 = v147 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v147 & 1) != 0 )
    {
      if ( !v148 )
        goto LABEL_13;
    }
    else
    {
      if ( v148 <= 3 || (v147 & 2) == 0 )
        goto LABEL_13;
      v149 = (_QWORD *)(v147 & 0xFFFFFFFFFFFFFFFCLL);
      v150 = v149[2275];
      if ( !v150 )
      {
        *(_QWORD *)(v146 + 96) = v146 & 0xFFFFFFFFFFFFFFFALL | 1;
        v30 = *(_QWORD *)(v19 + 128);
        goto LABEL_152;
      }
      v151 = v149[274];
      v149[284] += 24LL;
      v148 = (v151 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v149[275] >= v148 + 24 && v151 )
      {
        v149[274] = v148 + 24;
      }
      else
      {
        v354 = v16;
        v328 = v20;
        v298 = v17;
        v148 = sub_6A76A0((__int64)(v149 + 274), 24, 3);
        v16 = v354;
        v20 = v328;
        v17 = v298;
      }
      *(_QWORD *)v148 = v150;
      v147 = v148 | 5;
      *(_DWORD *)(v148 + 8) = 0;
      *(_QWORD *)(v148 + 16) = v146;
      *(_QWORD *)(v146 + 96) = v148 | 5;
      LOBYTE(v148) = v148 & 0xFA | 4;
    }
    if ( (v148 & 4) != 0
      && (v152 = (_DWORD *)(v147 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr
      && (v263 = *(_QWORD *)v152, v264 = *(_DWORD *)(*(_QWORD *)v152 + 12LL), v152[2] != v264) )
    {
      v152[2] = v264;
      v344 = v16;
      v319 = v20;
      v296 = v17;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v263 + 144LL))(v263, v146);
      v16 = v344;
      v20 = v319;
      v30 = *(_QWORD *)(v19 + 128);
      v17 = v296;
    }
    else
    {
      v30 = *(_QWORD *)(v19 + 128);
    }
LABEL_152:
    if ( !v30 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v272 = v360;
  v273 = v7 - 1;
  v274 = a4;
  while ( 1 )
  {
    sub_6E9CE0((__int64)a1, v273, v8, a1->m128i_i64[v273], v274);
    if ( !v273 )
      break;
    --v273;
  }
  result = (char *)v360 - (char *)a1;
  if ( (char *)v360 - (char *)a1 > 8 )
  {
    do
    {
      v275 = *--v272;
      *v272 = a1->m128i_i64[0];
      result = (__int64)sub_6E9CE0((__int64)a1, 0, ((char *)v272 - (char *)a1) >> 3, v275, v274);
    }
    while ( (char *)v272 - (char *)a1 > 8 );
  }
  return result;
}

