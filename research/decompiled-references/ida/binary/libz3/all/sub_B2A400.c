__m128i *__fastcall sub_B2A400(__m128i *a1, const __m128i *a2, double a3, __m128 a4)
{
  int v6; // ecx
  __int32 v7; // edi
  __int32 v8; // esi
  int v9; // edx
  __int64 v10; // r10
  __int64 v11; // r9
  const __m128i *v12; // rbx
  __m128i *v13; // rbp
  void *v14; // r13
  __int32 v15; // edx
  int v16; // edx
  __int32 v17; // ecx
  __int32 v18; // ecx
  int v19; // edx
  void *v20; // r13
  void *v21; // r13
  void *v22; // r13
  int v23; // edx
  void *v24; // r13
  __int32 v25; // edx
  int v26; // edx
  __int32 v27; // ecx
  __int32 v28; // ecx
  int v29; // edx
  void *v30; // r13
  void *v31; // rdi
  void *v32; // r13
  __int8 v33; // dl
  __int8 v34; // al
  void *v35; // r12
  __int32 v36; // eax
  int v37; // eax
  void *v38; // r12
  __int32 v39; // eax
  int v40; // eax
  unsigned int *v41; // rax
  unsigned int *v42; // rax
  void *v43; // r12
  void *v44; // rbx
  void *v46; // r13
  __int32 v47; // edx
  int v48; // edx
  void *v49; // r13
  __int32 v50; // ecx
  int v51; // edx
  void *v52; // r13
  void *v53; // r13
  int v54; // edx
  void *v55; // r13
  __int32 v56; // edx
  __m128i *v57; // rax
  __int32 v58; // edx
  int v59; // edx
  __int32 v60; // ecx
  unsigned int v61; // ecx
  int v62; // edx
  char v63; // cl
  void *v64; // rbp
  __int32 v65; // eax
  int v66; // eax
  void *v67; // rbp
  __int32 v68; // eax
  __int32 v69; // eax
  unsigned int *v70; // rbp
  bool v71; // zf
  void *v72; // rbp
  void *v73; // rbx
  int v74; // r8d
  __m128 v75; // xmm0
  unsigned int *v76; // xmm1_8
  _DWORD *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  __m128i si128; // xmm0
  void *v81; // r13
  __int32 v82; // edx
  int v83; // edx
  __int32 v84; // ecx
  __int32 v85; // eax
  int v86; // eax
  void *v87; // r13
  void *v88; // r14
  void *v89; // r14
  char v90; // cl
  void *v91; // r14
  __int32 v92; // eax
  int v93; // eax
  void *v94; // r14
  __int32 v95; // eax
  __int32 v96; // eax
  void *v97; // r14
  void *v98; // rbx
  void *v99; // r13
  __int32 v100; // edx
  int v101; // edx
  __int32 v102; // ecx
  unsigned int v103; // ecx
  void *v104; // r13
  unsigned __int32 v105; // ecx
  void *v106; // r13
  __int32 v107; // edx
  int v108; // edx
  __int32 v109; // ecx
  __int32 v110; // ecx
  void *v111; // r13
  __int32 v112; // edx
  _BOOL4 v113; // edx
  void *v114; // r13
  void *v115; // rdi
  void *v116; // r13
  __int8 v117; // dl
  __int8 v118; // al
  void *v119; // r12
  __int32 v120; // eax
  int v121; // eax
  void *v122; // r12
  __int32 v123; // eax
  int v124; // eax
  unsigned int *v125; // rax
  __int32 v126; // edx
  _BOOL4 v127; // edx
  __int64 v128; // r14
  unsigned int *v129; // r12
  _BOOL4 v130; // edx
  void *v131; // r13
  void *v132; // r13
  int v133; // edx
  void *v134; // r13
  __int32 v135; // edx
  int v136; // edx
  __int32 v137; // ecx
  unsigned int v138; // ecx
  void *v139; // r13
  void *v140; // rdi
  void *v141; // r13
  __int8 v142; // dl
  __int8 v143; // al
  void *v144; // r12
  __int32 v145; // eax
  int v146; // eax
  void *v147; // r12
  __int32 v148; // eax
  int v149; // eax
  unsigned int *v150; // rax
  unsigned int *v151; // r14
  unsigned int *v152; // r12
  _QWORD *v153; // rax
  int v154; // edx
  void *v155; // r12
  void *v156; // rbx
  void *v157; // r13
  void *v158; // r13
  int v159; // edx
  void *v160; // r13
  __int32 v161; // edx
  int v162; // edx
  __int32 v163; // ecx
  unsigned int v164; // ecx
  void *v165; // r13
  void *v166; // rdi
  void *v167; // r13
  __int8 v168; // dl
  __int8 v169; // al
  void *v170; // r12
  __int32 v171; // eax
  int v172; // eax
  void *v173; // r12
  __int32 v174; // eax
  int v175; // eax
  unsigned int *v176; // rax
  unsigned int *v177; // r14
  unsigned int *v178; // r12
  __int64 v179; // rax
  unsigned int v180; // edx
  void *v181; // r12
  void *v182; // rbx
  char v183; // cl
  void *v184; // rbp
  __int32 v185; // eax
  int v186; // eax
  void *v187; // rbp
  __int32 v188; // eax
  __int32 v189; // eax
  unsigned int *v190; // rbp
  void *v191; // rbp
  void *v192; // rbx
  __int64 v193; // r9
  char v194; // dl
  char v195; // al
  void *v196; // rdi
  __int32 v197; // eax
  __int32 v198; // eax
  __int64 v199; // rsi
  __int64 v200; // rdi
  char v201; // al
  char v202; // cl
  void *v203; // rdi
  __int32 v204; // eax
  int v205; // eax
  unsigned int *v206; // rax
  unsigned int *v207; // rax
  void *v208; // r12
  void *v209; // r12
  void *v210; // rbx
  __int32 v211; // edx
  _BOOL4 v212; // edx
  int v213; // edx
  __int32 v214; // edx
  _BOOL4 v215; // edx
  int v216; // edx
  __int32 v217; // edx
  _BOOL4 v218; // edx
  int v219; // edx
  __int32 v220; // edx
  _BOOL4 v221; // edx
  int v222; // edx
  __int8 *v223; // rdx
  _BOOL4 v224; // edx
  _BOOL4 v225; // edx
  _BOOL4 v226; // edx
  __int32 v227; // edx
  _BOOL4 v228; // edx
  __int32 v229; // edx
  _BOOL4 v230; // edx
  unsigned int *v231; // r14
  unsigned int *v232; // r12
  _BOOL4 v233; // edx
  __int32 v234; // edx
  _BOOL4 v235; // eax
  __int64 v236; // r14
  __int64 v237; // rax
  unsigned int *v238; // rdi
  unsigned int *v239; // rsi
  __int64 v240; // rax
  unsigned int *v241; // rsi
  unsigned int *v242; // rdi
  char v243; // cl
  void *v244; // rbp
  __int32 v245; // eax
  int v246; // eax
  void *v247; // rbp
  __int32 v248; // eax
  __int32 v249; // eax
  unsigned int *v250; // rbp
  __int64 v251; // r14
  __int64 v252; // rax
  unsigned int v253; // edx
  unsigned int *v254; // rsi
  unsigned int *v255; // rbp
  __int64 v256; // rax
  unsigned int *v257; // rdi
  _QWORD *v258; // rax
  unsigned int *v259; // rdi
  unsigned int *v260; // rsi
  _QWORD *v261; // rax
  unsigned int *v262; // rsi
  unsigned int *v263; // rdi
  unsigned int *v264; // r14
  __int64 v265; // rbp
  _QWORD *v266; // rax
  int v267; // edx
  unsigned int *v268; // rsi
  unsigned int *v269; // r14
  _QWORD *v270; // rax
  unsigned int *v271; // rdi
  void *v272; // r13
  unsigned int *v273; // rax
  unsigned int *v274; // rcx
  unsigned int *v275; // rdi
  unsigned int *v276; // rax
  unsigned int *v277; // rdi
  unsigned int *v278; // r14
  __int64 v279; // rax
  unsigned int v280; // edx
  unsigned int *v281; // rsi
  unsigned int *v282; // r14
  __int64 v283; // rax
  unsigned int *v284; // rdi
  unsigned int *v285; // rbp
  __int64 v286; // r14
  _QWORD *v287; // rax
  int v288; // edx
  unsigned int *v289; // rsi
  unsigned int *v290; // rbp
  _QWORD *v291; // rax
  unsigned int *v292; // rdi
  unsigned int *v293; // rax
  __int64 v294; // rcx
  unsigned int *v295; // rdi
  unsigned int *v296; // rax
  unsigned int *v297; // rdi
  void *v298; // rdi
  __int32 v299; // eax
  __int32 v300; // eax
  void *v301; // rdi
  __int32 v302; // edx
  int v303; // edx
  const __m128i *v304; // rdx
  const __m128i *v305; // rdx
  __int8 *v306; // rdx
  __int8 *v307; // rdx
  const __m128i *v308; // rdx
  const __m128i *v309; // rdx
  const __m128i *v310; // rdx
  __int8 *v311; // rdx
  __m128 v312; // [rsp+0h] [rbp-168h] BYREF
  unsigned int *v313; // [rsp+10h] [rbp-158h]
  void *v314; // [rsp+18h] [rbp-150h]
  void *v315; // [rsp+20h] [rbp-148h]
  __int64 v316; // [rsp+28h] [rbp-140h]
  __int64 v317; // [rsp+30h] [rbp-138h]
  unsigned int *v318; // [rsp+38h] [rbp-130h]
  unsigned int *v319; // [rsp+40h] [rbp-128h]
  __int32 *m128i_i32; // [rsp+48h] [rbp-120h]
  __int32 *v321; // [rsp+50h] [rbp-118h]
  __m128i *v322; // [rsp+58h] [rbp-110h]
  __m128i *v323; // [rsp+60h] [rbp-108h]
  int *v324; // [rsp+68h] [rbp-100h]
  __int32 v325; // [rsp+70h] [rbp-F8h] BYREF
  __int32 v326; // [rsp+78h] [rbp-F0h] BYREF
  char v327; // [rsp+7Ch] [rbp-ECh]
  __int32 v328; // [rsp+88h] [rbp-E0h] BYREF
  char v329; // [rsp+8Ch] [rbp-DCh]
  __int32 v330; // [rsp+A0h] [rbp-C8h] BYREF
  __int32 v331; // [rsp+A8h] [rbp-C0h] BYREF
  char v332; // [rsp+ACh] [rbp-BCh]
  __int64 v333; // [rsp+B0h] [rbp-B8h]
  int v334; // [rsp+B8h] [rbp-B0h] BYREF
  char v335; // [rsp+BCh] [rbp-ACh]
  __int64 v336; // [rsp+C0h] [rbp-A8h]
  __int32 v337; // [rsp+D0h] [rbp-98h] BYREF
  __int32 v338; // [rsp+D8h] [rbp-90h] BYREF
  char v339; // [rsp+DCh] [rbp-8Ch]
  __int64 v340; // [rsp+E0h] [rbp-88h]
  int v341; // [rsp+E8h] [rbp-80h] BYREF
  char v342; // [rsp+ECh] [rbp-7Ch]
  __int64 v343; // [rsp+F0h] [rbp-78h]
  int v344; // [rsp+100h] [rbp-68h] BYREF
  __int64 v345; // [rsp+108h] [rbp-60h] BYREF
  __int64 v346; // [rsp+110h] [rbp-58h]
  __int64 v347; // [rsp+118h] [rbp-50h] BYREF
  __int64 v348; // [rsp+120h] [rbp-48h]

  v6 = a1->m128i_i32[2];
  if ( v6 == 1 && !a1[1].m128i_i32[0] && a1[3].m128i_i32[0] == 1 && !a1[3].m128i_i32[2] )
    return a1;
  v7 = a2->m128i_i32[2];
  v8 = a2[3].m128i_i32[0];
  if ( v7 == 1 && !a2[1].m128i_i32[0] && v8 == 1 )
  {
    v74 = a2[3].m128i_i32[2];
    if ( !v74 )
    {
      sub_B290A0(a1, a2);
      v75 = (__m128)_mm_loadu_si128(a1 + 6);
      v76 = (unsigned int *)_mm_movehl_ps(a4, v75).m128_u64[0];
      v77 = (_DWORD *)v75.m128_u64[0];
      if ( v75.m128_u64[0] )
      {
        v78 = a1[6].m128i_i64[1];
        v312 = v75;
        if ( a1[6].m128i_i64[0] != v78 && v78 )
        {
          v79 = sub_180C100(*(_QWORD *)(a1->m128i_i64[0] + 56), 24);
          si128 = _mm_load_si128((const __m128i *)&v312);
          *v77 = (*v77 + 1) & 0x3FFFFFFF | *v77 & 0xC0000000;
          v77 = (_DWORD *)v79;
          *v76 = (*v76 + 1) & 0x3FFFFFFF | *v76 & 0xC0000000;
          *(_QWORD *)v79 = 0;
          *(__m128i *)(v79 + 8) = si128;
        }
      }
      else
      {
        v77 = v76;
      }
      a1[6] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v77, (__m128i)(unsigned __int64)v77);
      return a1;
    }
    v9 = a1[3].m128i_i32[0];
    v10 = (__int64)&a1->m128i_i64[1];
    v11 = (__int64)&a2->m128i_i64[1];
    v12 = a2 + 3;
    LOBYTE(v314) = a1[5].m128i_i8[8];
    LOBYTE(v316) = a1[5].m128i_i8[9];
    LOBYTE(v315) = a2[5].m128i_i8[8];
    LOBYTE(v317) = a2[5].m128i_i8[9];
    v313 = (unsigned int *)a1[6].m128i_i64[0];
    v312.m128_u64[0] = a1[6].m128i_u64[1];
    v319 = (unsigned int *)a2[6].m128i_i64[0];
    v318 = (unsigned int *)a2[6].m128i_i64[1];
    if ( v9 )
    {
      v13 = a1 + 3;
      if ( v9 != 1 )
      {
        if ( !v6 )
          goto LABEL_511;
        if ( v6 != 1 )
          goto LABEL_156;
LABEL_109:
        if ( a1[1].m128i_i32[0] < 0 )
          goto LABEL_110;
LABEL_7:
        if ( !v8 )
          goto LABEL_157;
        if ( v8 != 1 )
        {
LABEL_9:
          if ( !v7 || v7 == 1 && a2[1].m128i_i32[0] < 0 )
          {
            sub_B304A0(&v337, v13, v11);
            sub_B304A0(&v344, v13, v12);
            v183 = v316;
            a1[5].m128i_i8[8] = v316 | (unsigned __int8)v315;
            v184 = qword_1C7F2C0;
            a1[5].m128i_i8[9] = v183 | v317;
            a1->m128i_i32[2] = v337;
            if ( (v339 & 1) != 0 )
            {
              sub_182C690(v184, &a1[1], &v338);
            }
            else
            {
              v185 = v338;
              a1[1].m128i_i8[4] &= ~1u;
              a1[1].m128i_i32[0] = v185;
            }
            if ( (v342 & 1) != 0 )
            {
              sub_182C690(v184, &a1[2], &v341);
            }
            else
            {
              v186 = v341;
              a1[2].m128i_i8[4] &= ~1u;
              a1[2].m128i_i32[0] = v186;
            }
            v187 = qword_1C7F2C0;
            a1[3].m128i_i32[0] = v344;
            if ( (v345 & 0x100000000LL) != 0 )
            {
              sub_182C690(v187, &a1[3].m128i_u64[1], &v345);
            }
            else
            {
              v188 = v345;
              a1[3].m128i_i8[12] &= ~1u;
              a1[3].m128i_i32[2] = v188;
            }
            if ( (v347 & 0x100000000LL) != 0 )
            {
              sub_182C690(v187, &a1[4].m128i_u64[1], &v347);
            }
            else
            {
              v189 = v347;
              a1[4].m128i_i8[12] &= ~1u;
              a1[4].m128i_i32[2] = v189;
            }
            v190 = nullptr;
            if ( a1->m128i_i32[2] == 1 )
            {
              v286 = a1->m128i_i64[0];
              if ( v312.m128_u64[0] )
              {
                if ( !v319 || v319 == (unsigned int *)v312.m128_u64[0] )
                {
                  v190 = (unsigned int *)v312.m128_u64[0];
                }
                else
                {
                  v293 = (unsigned int *)sub_180C100(*(_QWORD *)(v286 + 56), 24);
                  v294 = v312.m128_u64[0];
                  v190 = v293;
                  v295 = v319;
                  *(_DWORD *)v312.m128_u64[0] = (*(_DWORD *)v312.m128_u64[0] + 1) & 0x3FFFFFFF
                                              | *(_DWORD *)v312.m128_u64[0] & 0xC0000000;
                  *v295 = (*v295 + 1) & 0x3FFFFFFF | *v295 & 0xC0000000;
                  *(_QWORD *)v293 = 0;
                  *((_QWORD *)v293 + 1) = v294;
                  *((_QWORD *)v293 + 2) = v295;
                }
              }
              else
              {
                v190 = v319;
                if ( !v319 )
                {
                  v71 = a1[3].m128i_i32[0] == 1;
                  a1[6].m128i_i64[0] = (__int64)v313;
                  if ( !v71 )
                    goto LABEL_345;
                  goto LABEL_639;
                }
              }
              if ( v313 && v190 != v313 )
              {
                v296 = (unsigned int *)sub_180C100(*(_QWORD *)(v286 + 56), 24);
                v297 = v313;
                *v190 = (*v190 + 1) & 0x3FFFFFFF | *v190 & 0xC0000000;
                *v297 = (*v297 + 1) & 0x3FFFFFFF | *v297 & 0xC0000000;
                *((_QWORD *)v296 + 1) = v190;
                v190 = v296;
                *(_QWORD *)v296 = 0;
                *((_QWORD *)v296 + 2) = v297;
              }
            }
            v71 = a1[3].m128i_i32[0] == 1;
            a1[6].m128i_i64[0] = (__int64)v190;
            if ( !v71 )
            {
LABEL_345:
              v312.m128_u64[0] = 0;
LABEL_346:
              v191 = qword_1C7F2C0;
              a1[6].m128i_i64[1] = v312.m128_u64[0];
              sub_182CBA0(v191, &v345);
              sub_182CBA0(v191, &v347);
              v192 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v338);
              sub_182CBA0(v192, &v341);
              return a1;
            }
            v285 = (unsigned int *)v312.m128_u64[0];
            v286 = a1->m128i_i64[0];
            if ( v312.m128_u64[0] )
            {
              if ( v318 != (unsigned int *)v312.m128_u64[0] && v318 )
              {
                v287 = (_QWORD *)sub_180C100(*(_QWORD *)(v286 + 56), 24);
                v288 = *(_DWORD *)v312.m128_u64[0];
                v289 = v318;
                v312.m128_u64[0] = (unsigned __int64)v287;
                *v285 = (v288 + 1) & 0x3FFFFFFF | v288 & 0xC0000000;
                *v289 = (*v289 + 1) & 0x3FFFFFFF | *v289 & 0xC0000000;
                *v287 = 0;
                v287[1] = v285;
                v287[2] = v289;
              }
              goto LABEL_585;
            }
LABEL_639:
            if ( !v318 )
            {
              v312.m128_u64[0] = (unsigned __int64)v313;
              goto LABEL_346;
            }
            v312.m128_u64[0] = (unsigned __int64)v318;
LABEL_585:
            v290 = v313;
            if ( (unsigned int *)v312.m128_u64[0] != v313 && v313 )
            {
              v291 = (_QWORD *)sub_180C100(*(_QWORD *)(v286 + 56), 24);
              v292 = (unsigned int *)v312.m128_u64[0];
              v312.m128_u64[0] = (unsigned __int64)v291;
              *v292 = (*v292 + 1) & 0x3FFFFFFF | *v292 & 0xC0000000;
              *v290 = (*v290 + 1) & 0x3FFFFFFF | *v290 & 0xC0000000;
              *v291 = 0;
              v291[1] = v292;
              v291[2] = v290;
            }
            goto LABEL_346;
          }
          v344 = v6;
          v345 = 0;
          v346 = 0;
          v14 = qword_1C7F2C0;
          v347 = 1;
          v348 = 0;
          m128i_i32 = a1[1].m128i_i32;
          if ( (a1[1].m128i_i8[4] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v345, &a1[1]);
          else
            LODWORD(v345) = a1[1].m128i_i32[0];
          v321 = a1[2].m128i_i32;
          if ( (a1[2].m128i_i8[4] & 1) != 0 )
          {
            sub_182C690(v14, &v347, &a1[2]);
          }
          else
          {
            v15 = a1[2].m128i_i32[0];
            BYTE4(v347) &= ~1u;
            LODWORD(v347) = v15;
          }
          v16 = v344;
          if ( v344 == 1 )
          {
            if ( !(_DWORD)v345 )
            {
LABEL_22:
              v332 &= 0xFCu;
              v21 = qword_1C7F2C0;
              v335 &= 0xFCu;
              v330 = v16;
              v331 = 0;
              v333 = 0;
              v334 = 1;
              v336 = 0;
              if ( (v345 & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, &v331, &v345);
              else
                v331 = v345;
              if ( (v347 & 0x100000000LL) != 0 )
              {
                sub_182C690(v21, &v334, &v347);
              }
              else
              {
                v335 &= ~1u;
                v334 = v347;
              }
              v22 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v345);
              sub_182CBA0(v22, &v347);
              v23 = a1[3].m128i_i32[0];
              v24 = qword_1C7F2C0;
              v345 = 0;
              v344 = v23;
              v346 = 0;
              v347 = 1;
              v348 = 0;
              v322 = (__m128i *)((char *)a1 + 56);
              if ( (a1[3].m128i_i8[12] & 1) != 0 )
                sub_182C690(qword_1C7F2C0, &v345, &a1[3].m128i_u64[1]);
              else
                LODWORD(v345) = a1[3].m128i_i32[2];
              v323 = (__m128i *)((char *)a1 + 72);
              if ( (a1[4].m128i_i8[12] & 1) != 0 )
              {
                sub_182C690(v24, &v347, &a1[4].m128i_u64[1]);
              }
              else
              {
                v25 = a1[4].m128i_i32[2];
                BYTE4(v347) &= ~1u;
                LODWORD(v347) = v25;
              }
              v26 = v344;
              if ( v344 == 1 )
              {
                if ( !(_DWORD)v345 )
                  goto LABEL_38;
                v227 = a2[3].m128i_i32[0];
                if ( v227 != 1 )
                {
                  if ( (int)v345 < 0 )
                    v228 = v227 == 0;
                  else
                    v228 = v227 != 0;
                  v29 = 2 * v228;
                  goto LABEL_35;
                }
                v30 = qword_1C7F2C0;
                if ( a2[3].m128i_i32[2] )
                {
                  v306 = &a2[3].m128i_i8[8];
                  if ( (v347 & 0x100000000LL) != 0
                    || (_DWORD)v347 != 1
                    || (a2[4].m128i_i8[12] & 1) != 0
                    || a2[4].m128i_i32[2] != 1 )
                  {
                    sub_1848FF0(qword_1C7F2C0, &v345, v306);
                    goto LABEL_37;
                  }
                  sub_1831650(qword_1C7F2C0, &v345, v306);
LABEL_36:
                  sub_182CBA0(v30, &v347);
                  BYTE4(v347) &= ~1u;
                  LODWORD(v347) = 1;
LABEL_37:
                  v26 = v344;
LABEL_38:
                  v339 &= 0xFCu;
                  v31 = qword_1C7F2C0;
                  v342 &= 0xFCu;
                  v337 = v26;
                  v338 = 0;
                  v340 = 0;
                  v341 = 1;
                  v343 = 0;
                  if ( (v345 & 0x100000000LL) != 0 )
                  {
                    v324 = (int *)qword_1C7F2C0;
                    sub_182C690(qword_1C7F2C0, &v338, &v345);
                  }
                  else
                  {
                    v338 = v345;
                  }
                  if ( (v347 & 0x100000000LL) != 0 )
                  {
                    sub_182C690(v31, &v341, &v347);
                  }
                  else
                  {
                    v342 &= ~1u;
                    v341 = v347;
                  }
                  v32 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v345);
                  sub_182CBA0(v32, &v347);
                  if ( (a1->m128i_i32[2] != 1 || a1[1].m128i_i32[0] || (v33 = a1[5].m128i_i8[8]) != 0)
                    && (a2->m128i_i32[2] != 1 || a2[1].m128i_i32[0] || (v33 = a2[5].m128i_i8[8]) != 0) )
                  {
                    v33 = (unsigned __int8)v315 | (unsigned __int8)v314;
                  }
                  v34 = v317 | v316;
                  a1[5].m128i_i8[8] = v33;
                  a1[5].m128i_i8[9] = v34;
                  v35 = qword_1C7F2C0;
                  a1->m128i_i32[2] = v330;
                  if ( (v332 & 1) != 0 )
                  {
                    sub_182C690(v35, m128i_i32, &v331);
                  }
                  else
                  {
                    v36 = v331;
                    a1[1].m128i_i8[4] &= ~1u;
                    a1[1].m128i_i32[0] = v36;
                  }
                  if ( (v335 & 1) != 0 )
                  {
                    sub_182C690(v35, v321, &v334);
                  }
                  else
                  {
                    v37 = v334;
                    a1[2].m128i_i8[4] &= ~1u;
                    a1[2].m128i_i32[0] = v37;
                  }
                  v38 = qword_1C7F2C0;
                  a1[3].m128i_i32[0] = v337;
                  if ( (v339 & 1) != 0 )
                  {
                    sub_182C690(v38, v322, &v338);
                  }
                  else
                  {
                    v39 = v338;
                    a1[3].m128i_i8[12] &= ~1u;
                    a1[3].m128i_i32[2] = v39;
                  }
                  if ( (v342 & 1) != 0 )
                  {
                    sub_182C690(v38, v323, &v341);
                  }
                  else
                  {
                    v40 = v341;
                    a1[4].m128i_i8[12] &= ~1u;
                    a1[4].m128i_i32[2] = v40;
                  }
                  v41 = nullptr;
                  if ( a1->m128i_i32[2] == 1 )
                  {
                    v231 = v313;
                    if ( v313 )
                    {
                      v232 = v319;
                      if ( v319 == v313 || !v319 )
                      {
                        v41 = v313;
                      }
                      else
                      {
                        v41 = (unsigned int *)sub_180C100(*(_QWORD *)(a1->m128i_i64[0] + 56), 24);
                        *v313 = (*v313 + 1) & 0x3FFFFFFF | *v313 & 0xC0000000;
                        *v232 = (*v232 + 1) & 0x3FFFFFFF | *v232 & 0xC0000000;
                        *(_QWORD *)v41 = 0;
                        *((_QWORD *)v41 + 1) = v231;
                        *((_QWORD *)v41 + 2) = v232;
                      }
                    }
                    else
                    {
                      v41 = v319;
                    }
                  }
                  a1[6].m128i_i64[0] = (__int64)v41;
                  v42 = nullptr;
                  if ( a1[3].m128i_i32[0] == 1 )
                    v42 = sub_B2A210(a1->m128i_i64, (unsigned int *)v312.m128_u64[0], v318, v313, v319);
LABEL_56:
                  v43 = qword_1C7F2C0;
                  a1[6].m128i_i64[1] = (__int64)v42;
                  sub_182CBA0(v43, &v338);
                  sub_182CBA0(v43, &v341);
                  v44 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v331);
                  sub_182CBA0(v44, &v334);
                  return a1;
                }
              }
              else
              {
                v27 = a2[3].m128i_i32[0];
                if ( v27 != 1 )
                {
                  if ( v344 )
                    v233 = v27 != 0;
                  else
                    v233 = v27 == 0;
                  v29 = 2 * v233;
                  goto LABEL_35;
                }
                v28 = a2[3].m128i_i32[2];
                if ( v28 )
                {
                  if ( v344 )
                    v29 = 2 * (v28 >= 0);
                  else
                    v29 = 2 * ((unsigned int)v28 >> 31);
LABEL_35:
                  v30 = qword_1C7F2C0;
                  v344 = v29;
                  sub_182CEF0(qword_1C7F2C0, &v345);
                  goto LABEL_36;
                }
                v30 = qword_1C7F2C0;
              }
              v344 = 1;
              sub_182CEF0(v30, &v345);
              goto LABEL_36;
            }
            v229 = a2->m128i_i32[2];
            if ( v229 != 1 )
            {
              if ( (int)v345 < 0 )
                v230 = v229 == 0;
              else
                v230 = v229 != 0;
              v19 = 2 * v230;
              goto LABEL_19;
            }
            v20 = qword_1C7F2C0;
            if ( a2[1].m128i_i32[0] )
            {
              v309 = a2 + 1;
              if ( (v347 & 0x100000000LL) != 0
                || (_DWORD)v347 != 1
                || (a2[2].m128i_i8[4] & 1) != 0
                || a2[2].m128i_i32[0] != 1 )
              {
                sub_1848FF0(qword_1C7F2C0, &v345, v309);
                goto LABEL_21;
              }
              sub_1831650(qword_1C7F2C0, &v345, v309);
LABEL_20:
              sub_182CBA0(v20, &v347);
              BYTE4(v347) &= ~1u;
              LODWORD(v347) = 1;
LABEL_21:
              v16 = v344;
              goto LABEL_22;
            }
          }
          else
          {
            v17 = a2->m128i_i32[2];
            if ( v17 != 1 )
            {
              v19 = 2 * (v17 != 0);
              goto LABEL_19;
            }
            v18 = a2[1].m128i_i32[0];
            if ( v18 )
            {
              v19 = 2 * (v18 >= 0);
LABEL_19:
              v20 = qword_1C7F2C0;
              v344 = v19;
              sub_182CEF0(qword_1C7F2C0, &v345);
              goto LABEL_20;
            }
            v20 = qword_1C7F2C0;
          }
          v344 = 1;
          sub_182CEF0(v20, &v345);
          goto LABEL_20;
        }
LABEL_156:
        if ( a2[3].m128i_i32[2] <= 0 )
        {
LABEL_157:
          v344 = v9;
          v345 = 0;
          v346 = 0;
          v106 = qword_1C7F2C0;
          v347 = 1;
          v348 = 0;
          m128i_i32 = &a1[3].m128i_i32[2];
          if ( (a1[3].m128i_i8[12] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v345, &a1[3].m128i_u64[1]);
          else
            LODWORD(v345) = a1[3].m128i_i32[2];
          v321 = &a1[4].m128i_i32[2];
          if ( (a1[4].m128i_i8[12] & 1) != 0 )
          {
            sub_182C690(v106, &v347, &a1[4].m128i_u64[1]);
          }
          else
          {
            v107 = a1[4].m128i_i32[2];
            BYTE4(v347) &= ~1u;
            LODWORD(v347) = v107;
          }
          v108 = v344;
          if ( v344 == 1 )
          {
            if ( !(_DWORD)v345 )
              goto LABEL_280;
            v217 = a2->m128i_i32[2];
            if ( v217 == 1 )
            {
              v111 = qword_1C7F2C0;
              if ( a2[1].m128i_i32[0] )
              {
                v310 = a2 + 1;
                if ( (v347 & 0x100000000LL) != 0
                  || (_DWORD)v347 != 1
                  || (a2[2].m128i_i8[4] & 1) != 0
                  || a2[2].m128i_i32[0] != 1 )
                {
                  sub_1848FF0(qword_1C7F2C0, &v345, v310);
                  goto LABEL_392;
                }
                sub_1831650(qword_1C7F2C0, &v345, v310);
LABEL_391:
                sub_182CBA0(v111, &v347);
                BYTE4(v347) &= ~1u;
                LODWORD(v347) = 1;
LABEL_392:
                v108 = v344;
LABEL_280:
                v332 &= 0xFCu;
                v157 = qword_1C7F2C0;
                v335 &= 0xFCu;
                v330 = v108;
                v331 = 0;
                v333 = 0;
                v334 = 1;
                v336 = 0;
                if ( (v345 & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, &v331, &v345);
                else
                  v331 = v345;
                if ( (v347 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v157, &v334, &v347);
                }
                else
                {
                  v335 &= ~1u;
                  v334 = v347;
                }
                v158 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v345);
                sub_182CBA0(v158, &v347);
                v159 = a1->m128i_i32[2];
                v160 = qword_1C7F2C0;
                v345 = 0;
                v344 = v159;
                v346 = 0;
                v347 = 1;
                v348 = 0;
                v322 = a1 + 1;
                if ( (a1[1].m128i_i8[4] & 1) != 0 )
                  sub_182C690(qword_1C7F2C0, &v345, &a1[1]);
                else
                  LODWORD(v345) = a1[1].m128i_i32[0];
                v323 = a1 + 2;
                if ( (a1[2].m128i_i8[4] & 1) != 0 )
                {
                  sub_182C690(v160, &v347, &a1[2]);
                }
                else
                {
                  v161 = a1[2].m128i_i32[0];
                  BYTE4(v347) &= ~1u;
                  LODWORD(v347) = v161;
                }
                v162 = v344;
                if ( v344 == 1 )
                {
                  if ( !(_DWORD)v345 )
                  {
LABEL_294:
                    v339 &= 0xFCu;
                    v166 = qword_1C7F2C0;
                    v342 &= 0xFCu;
                    v337 = v162;
                    v338 = 0;
                    v340 = 0;
                    v341 = 1;
                    v343 = 0;
                    if ( (v345 & 0x100000000LL) != 0 )
                    {
                      v324 = (int *)qword_1C7F2C0;
                      sub_182C690(qword_1C7F2C0, &v338, &v345);
                    }
                    else
                    {
                      v338 = v345;
                    }
                    if ( (v347 & 0x100000000LL) != 0 )
                    {
                      sub_182C690(v166, &v341, &v347);
                    }
                    else
                    {
                      v342 &= ~1u;
                      v341 = v347;
                    }
                    v167 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, &v345);
                    sub_182CBA0(v167, &v347);
                    v168 = (unsigned __int8)v315 | v316;
                    if ( a1->m128i_i32[2] != 1 || a1[1].m128i_i32[0] || a1[5].m128i_i8[8] )
                    {
                      v71 = a2[3].m128i_i32[0] == 1;
                      a1[5].m128i_i8[8] = v168;
                      if ( !v71 || a2[3].m128i_i32[2] || a2[5].m128i_i8[9] )
                        v169 = v317 | (unsigned __int8)v314;
                      else
                        v169 = 0;
                    }
                    else
                    {
                      a1[5].m128i_i8[8] = v168;
                      v169 = 0;
                    }
                    a1[5].m128i_i8[9] = v169;
                    v170 = qword_1C7F2C0;
                    a1->m128i_i32[2] = v330;
                    if ( (v332 & 1) != 0 )
                    {
                      sub_182C690(v170, v322, &v331);
                    }
                    else
                    {
                      v171 = v331;
                      a1[1].m128i_i8[4] &= ~1u;
                      a1[1].m128i_i32[0] = v171;
                    }
                    if ( (v335 & 1) != 0 )
                    {
                      sub_182C690(v170, v323, &v334);
                    }
                    else
                    {
                      v172 = v334;
                      a1[2].m128i_i8[4] &= ~1u;
                      a1[2].m128i_i32[0] = v172;
                    }
                    v173 = qword_1C7F2C0;
                    a1[3].m128i_i32[0] = v337;
                    if ( (v339 & 1) != 0 )
                    {
                      sub_182C690(v173, m128i_i32, &v338);
                    }
                    else
                    {
                      v174 = v338;
                      a1[3].m128i_i8[12] &= ~1u;
                      a1[3].m128i_i32[2] = v174;
                    }
                    if ( (v342 & 1) != 0 )
                    {
                      sub_182C690(v173, v321, &v341);
                    }
                    else
                    {
                      v175 = v341;
                      a1[4].m128i_i8[12] &= ~1u;
                      a1[4].m128i_i32[2] = v175;
                    }
                    v176 = nullptr;
                    if ( a1->m128i_i32[2] == 1 )
                      v176 = sub_B2A210(a1->m128i_i64, (unsigned int *)v312.m128_u64[0], v319, v313, v318);
                    v71 = a1[3].m128i_i32[0] == 1;
                    a1[6].m128i_i64[0] = (__int64)v176;
                    if ( v71 )
                    {
                      v177 = v313;
                      if ( v313 )
                      {
                        v178 = v318;
                        if ( v318 != v313 && v318 )
                        {
                          v179 = sub_180C100(*(_QWORD *)(a1->m128i_i64[0] + 56), 24);
                          v180 = *v313;
                          v313 = (unsigned int *)v179;
                          *v177 = (v180 + 1) & 0x3FFFFFFF | v180 & 0xC0000000;
                          *v178 = (*v178 + 1) & 0x3FFFFFFF | *v178 & 0xC0000000;
                          *(_QWORD *)v179 = 0;
                          *(_QWORD *)(v179 + 8) = v177;
                          *(_QWORD *)(v179 + 16) = v178;
                        }
                      }
                      else
                      {
                        v313 = v318;
                      }
                    }
                    else
                    {
                      v313 = nullptr;
                    }
                    v181 = qword_1C7F2C0;
                    a1[6].m128i_i64[1] = (__int64)v313;
                    sub_182CBA0(v181, &v338);
                    sub_182CBA0(v181, &v341);
                    v182 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, &v331);
                    sub_182CBA0(v182, &v334);
                    return a1;
                  }
                  v220 = a2[3].m128i_i32[0];
                  if ( v220 == 1 )
                  {
                    v165 = qword_1C7F2C0;
                    if ( a2[3].m128i_i32[2] )
                    {
                      v311 = &a2[3].m128i_i8[8];
                      if ( (v347 & 0x100000000LL) != 0
                        || (_DWORD)v347 != 1
                        || (a2[4].m128i_i8[12] & 1) != 0
                        || a2[4].m128i_i32[2] != 1 )
                      {
                        sub_1848FF0(qword_1C7F2C0, &v345, v311);
                        goto LABEL_399;
                      }
                      sub_1831650(qword_1C7F2C0, &v345, v311);
LABEL_398:
                      sub_182CBA0(v165, &v347);
                      BYTE4(v347) &= ~1u;
                      LODWORD(v347) = 1;
LABEL_399:
                      v162 = v344;
                      goto LABEL_294;
                    }
LABEL_292:
                    v344 = 1;
                    sub_182CEF0(v165, &v345);
                    goto LABEL_398;
                  }
                  if ( (int)v345 < 0 )
                    v221 = v220 == 0;
                  else
                    v221 = v220 != 0;
                  v222 = 2 * v221;
                }
                else
                {
                  v163 = a2[3].m128i_i32[0];
                  if ( v163 == 1 )
                  {
                    v164 = a2[3].m128i_u32[2];
                    if ( !v164 )
                    {
                      v165 = qword_1C7F2C0;
                      goto LABEL_292;
                    }
                    if ( v344 )
                      v164 = ~v164;
                    v222 = 2 * (v164 >> 31);
                  }
                  else
                  {
                    if ( v344 )
                      v226 = v163 != 0;
                    else
                      v226 = v163 == 0;
                    v222 = 2 * v226;
                  }
                }
                v165 = qword_1C7F2C0;
                v344 = v222;
                sub_182CEF0(qword_1C7F2C0, &v345);
                goto LABEL_398;
              }
LABEL_165:
              v344 = 1;
              sub_182CEF0(v111, &v345);
              goto LABEL_391;
            }
            if ( (int)v345 < 0 )
              v218 = v217 == 0;
            else
              v218 = v217 != 0;
            v219 = 2 * v218;
          }
          else
          {
            v109 = a2->m128i_i32[2];
            if ( v109 == 1 )
            {
              v110 = a2[1].m128i_i32[0];
              if ( !v110 )
              {
                v111 = qword_1C7F2C0;
                goto LABEL_165;
              }
              v219 = 2 * (v110 >= 0);
            }
            else
            {
              v219 = 2 * (v109 != 0);
            }
          }
          v111 = qword_1C7F2C0;
          v344 = v219;
          sub_182CEF0(qword_1C7F2C0, &v345);
          goto LABEL_391;
        }
        goto LABEL_9;
      }
      if ( a1[3].m128i_i32[2] > 0 )
      {
        if ( !v6 )
          goto LABEL_511;
LABEL_371:
        v9 = 1;
        goto LABEL_6;
      }
      goto LABEL_147;
    }
    if ( v74 > 0 )
    {
LABEL_428:
      if ( a2[1].m128i_i32[0] < 0 )
      {
LABEL_85:
        m128i_i32 = (__int32 *)v11;
        v316 = v10;
        sub_B304A0(&v337, v10, v12);
        sub_B304A0(&v344, v316, m128i_i32);
        v63 = (char)v314;
        a1[5].m128i_i8[8] = (unsigned __int8)v314 | v317;
        v64 = qword_1C7F2C0;
        a1[5].m128i_i8[9] = v63 | (unsigned __int8)v315;
        a1->m128i_i32[2] = v337;
        if ( (v339 & 1) != 0 )
        {
          sub_182C690(v64, &a1[1], &v338);
        }
        else
        {
          v65 = v338;
          a1[1].m128i_i8[4] &= ~1u;
          a1[1].m128i_i32[0] = v65;
        }
        if ( (v342 & 1) != 0 )
        {
          sub_182C690(v64, &a1[2], &v341);
        }
        else
        {
          v66 = v341;
          a1[2].m128i_i8[4] &= ~1u;
          a1[2].m128i_i32[0] = v66;
        }
        v67 = qword_1C7F2C0;
        a1[3].m128i_i32[0] = v344;
        if ( (v345 & 0x100000000LL) != 0 )
        {
          sub_182C690(v67, &a1[3].m128i_u64[1], &v345);
        }
        else
        {
          v68 = v345;
          a1[3].m128i_i8[12] &= ~1u;
          a1[3].m128i_i32[2] = v68;
        }
        if ( (v347 & 0x100000000LL) != 0 )
        {
          sub_182C690(v67, &a1[4].m128i_u64[1], &v347);
        }
        else
        {
          v69 = v347;
          a1[4].m128i_i8[12] &= ~1u;
          a1[4].m128i_i32[2] = v69;
        }
        v70 = nullptr;
        if ( a1->m128i_i32[2] == 1 )
        {
          v251 = a1->m128i_i64[0];
          if ( v313 )
          {
            if ( !v318 || v318 == v313 )
            {
              v70 = v313;
            }
            else
            {
              v273 = (unsigned int *)sub_180C100(*(_QWORD *)(v251 + 56), 24);
              v274 = v313;
              v70 = v273;
              v275 = v318;
              *v313 = (*v313 + 1) & 0x3FFFFFFF | *v313 & 0xC0000000;
              *v275 = (*v275 + 1) & 0x3FFFFFFF | *v275 & 0xC0000000;
              *(_QWORD *)v273 = 0;
              *((_QWORD *)v273 + 1) = v274;
              *((_QWORD *)v273 + 2) = v275;
            }
          }
          else
          {
            v70 = v318;
            if ( !v318 )
            {
              v71 = a1[3].m128i_i32[0] == 1;
              a1[6].m128i_i64[0] = v312.m128_u64[0];
              if ( !v71 )
                goto LABEL_95;
              goto LABEL_609;
            }
          }
          if ( v312.m128_u64[0] && (unsigned int *)v312.m128_u64[0] != v70 )
          {
            v276 = (unsigned int *)sub_180C100(*(_QWORD *)(v251 + 56), 24);
            v277 = (unsigned int *)v312.m128_u64[0];
            *v70 = (*v70 + 1) & 0x3FFFFFFF | *v70 & 0xC0000000;
            *v277 = (*v277 + 1) & 0x3FFFFFFF | *v277 & 0xC0000000;
            *((_QWORD *)v276 + 1) = v70;
            v70 = v276;
            *(_QWORD *)v276 = 0;
            *((_QWORD *)v276 + 2) = v277;
          }
        }
        v71 = a1[3].m128i_i32[0] == 1;
        a1[6].m128i_i64[0] = (__int64)v70;
        if ( !v71 )
        {
LABEL_95:
          v313 = nullptr;
LABEL_96:
          v72 = qword_1C7F2C0;
          a1[6].m128i_i64[1] = (__int64)v313;
          sub_182CBA0(v72, &v345);
          sub_182CBA0(v72, &v347);
          v73 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v338);
          sub_182CBA0(v73, &v341);
          return a1;
        }
        v250 = v313;
        v251 = a1->m128i_i64[0];
        if ( v313 )
        {
          if ( v319 && v319 != v313 )
          {
            v252 = sub_180C100(*(_QWORD *)(v251 + 56), 24);
            v253 = *v313;
            v254 = v319;
            v313 = (unsigned int *)v252;
            *v250 = (v253 + 1) & 0x3FFFFFFF | v253 & 0xC0000000;
            *v254 = (*v254 + 1) & 0x3FFFFFFF | *v254 & 0xC0000000;
            *(_QWORD *)v252 = 0;
            *(_QWORD *)(v252 + 8) = v250;
            *(_QWORD *)(v252 + 16) = v254;
          }
          goto LABEL_525;
        }
LABEL_609:
        v313 = (unsigned int *)v312.m128_u64[0];
        if ( !v319 )
          goto LABEL_96;
        v313 = v319;
LABEL_525:
        v255 = (unsigned int *)v312.m128_u64[0];
        if ( v312.m128_u64[0] && (unsigned int *)v312.m128_u64[0] != v313 )
        {
          v256 = sub_180C100(*(_QWORD *)(v251 + 56), 24);
          v257 = v313;
          v313 = (unsigned int *)v256;
          *v257 = (*v257 + 1) & 0x3FFFFFFF | *v257 & 0xC0000000;
          *v255 = (*v255 + 1) & 0x3FFFFFFF | *v255 & 0xC0000000;
          *(_QWORD *)v256 = 0;
          *(_QWORD *)(v256 + 8) = v257;
          *(_QWORD *)(v256 + 16) = v255;
        }
        goto LABEL_96;
      }
      goto LABEL_138;
    }
LABEL_60:
    v344 = v9;
    v345 = 0;
    v346 = 0;
    v46 = qword_1C7F2C0;
    v347 = 1;
    v348 = 0;
    m128i_i32 = &a1[3].m128i_i32[2];
    if ( (a1[3].m128i_i8[12] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v345, &a1[3].m128i_u64[1]);
    else
      LODWORD(v345) = a1[3].m128i_i32[2];
    v321 = &a1[4].m128i_i32[2];
    if ( (a1[4].m128i_i8[12] & 1) != 0 )
    {
      sub_182C690(v46, &v347, &a1[4].m128i_u64[1]);
    }
    else
    {
      v47 = a1[4].m128i_i32[2];
      BYTE4(v347) &= ~1u;
      LODWORD(v347) = v47;
    }
    v48 = v344;
    v49 = qword_1C7F2C0;
    if ( v344 == 1 )
    {
      if ( !(_DWORD)v345 )
      {
LABEL_70:
        v332 &= 0xFCu;
        v52 = qword_1C7F2C0;
        v335 &= 0xFCu;
        v330 = v48;
        v331 = 0;
        v333 = 0;
        v334 = 1;
        v336 = 0;
        if ( (v345 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v331, &v345);
        else
          v331 = v345;
        if ( (v347 & 0x100000000LL) != 0 )
        {
          sub_182C690(v52, &v334, &v347);
        }
        else
        {
          v335 &= ~1u;
          v334 = v347;
        }
        v53 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v345);
        sub_182CBA0(v53, &v347);
        v54 = a1->m128i_i32[2];
        v55 = qword_1C7F2C0;
        v345 = 0;
        v344 = v54;
        v346 = 0;
        v347 = 1;
        v348 = 0;
        v322 = a1 + 1;
        if ( (a1[1].m128i_i8[4] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v345, &a1[1]);
          v57 = a1 + 2;
          v323 = a1 + 2;
          if ( (a1[2].m128i_i8[4] & 1) == 0 )
            goto LABEL_76;
        }
        else
        {
          v56 = a1[1].m128i_i32[0];
          v57 = a1 + 2;
          v323 = a1 + 2;
          LODWORD(v345) = v56;
          if ( (a1[2].m128i_i8[4] & 1) == 0 )
          {
LABEL_76:
            v58 = a1[2].m128i_i32[0];
            BYTE4(v347) &= ~1u;
            LODWORD(v347) = v58;
            goto LABEL_77;
          }
        }
        sub_182C690(v55, &v347, v57);
LABEL_77:
        v59 = v344;
        if ( v344 == 1 )
        {
          if ( !(_DWORD)v345 )
          {
LABEL_175:
            v339 &= 0xFCu;
            v115 = qword_1C7F2C0;
            v342 &= 0xFCu;
            v337 = v59;
            v338 = 0;
            v340 = 0;
            v341 = 1;
            v343 = 0;
            if ( (v345 & 0x100000000LL) != 0 )
            {
              v324 = (int *)qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v338, &v345);
            }
            else
            {
              v338 = v345;
            }
            if ( (v347 & 0x100000000LL) != 0 )
            {
              sub_182C690(v115, &v341, &v347);
            }
            else
            {
              v342 &= ~1u;
              v341 = v347;
            }
            v116 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v345);
            sub_182CBA0(v116, &v347);
            if ( (a1[3].m128i_i32[0] != 1 || a1[3].m128i_i32[2] || (v117 = a1[5].m128i_i8[9]) != 0)
              && (a2[3].m128i_i32[0] != 1 || a2[3].m128i_i32[2] || (v117 = a2[5].m128i_i8[9]) != 0) )
            {
              v117 = v316 | v317;
            }
            v118 = (unsigned __int8)v314 | (unsigned __int8)v315;
            a1[5].m128i_i8[8] = v117;
            a1[5].m128i_i8[9] = v118;
            v119 = qword_1C7F2C0;
            a1->m128i_i32[2] = v330;
            if ( (v332 & 1) != 0 )
            {
              sub_182C690(v119, v322, &v331);
            }
            else
            {
              v120 = v331;
              a1[1].m128i_i8[4] &= ~1u;
              a1[1].m128i_i32[0] = v120;
            }
            if ( (v335 & 1) != 0 )
            {
              sub_182C690(v119, v323, &v334);
            }
            else
            {
              v121 = v334;
              a1[2].m128i_i8[4] &= ~1u;
              a1[2].m128i_i32[0] = v121;
            }
            v122 = qword_1C7F2C0;
            a1[3].m128i_i32[0] = v337;
            if ( (v339 & 1) != 0 )
            {
              sub_182C690(v122, m128i_i32, &v338);
            }
            else
            {
              v123 = v338;
              a1[3].m128i_i8[12] &= ~1u;
              a1[3].m128i_i32[2] = v123;
            }
            if ( (v342 & 1) != 0 )
            {
              sub_182C690(v122, v321, &v341);
            }
            else
            {
              v124 = v341;
              a1[4].m128i_i8[12] &= ~1u;
              a1[4].m128i_i32[2] = v124;
            }
            v125 = nullptr;
            if ( a1->m128i_i32[2] == 1 )
            {
              v128 = v312.m128_u64[0];
              if ( v312.m128_u64[0] )
              {
                v129 = v318;
                if ( !v318 || v318 == (unsigned int *)v312.m128_u64[0] )
                {
                  v125 = (unsigned int *)v312.m128_u64[0];
                }
                else
                {
                  v125 = (unsigned int *)sub_180C100(*(_QWORD *)(a1->m128i_i64[0] + 56), 24);
                  *(_DWORD *)v312.m128_u64[0] = (*(_DWORD *)v312.m128_u64[0] + 1) & 0x3FFFFFFF
                                              | *(_DWORD *)v312.m128_u64[0] & 0xC0000000;
                  *v129 = (*v129 + 1) & 0x3FFFFFFF | *v129 & 0xC0000000;
                  *(_QWORD *)v125 = 0;
                  *((_QWORD *)v125 + 1) = v128;
                  *((_QWORD *)v125 + 2) = v129;
                }
              }
              else
              {
                v125 = v318;
              }
            }
            a1[6].m128i_i64[0] = (__int64)v125;
            v42 = nullptr;
            if ( a1[3].m128i_i32[0] == 1 )
              v42 = sub_B2A210(a1->m128i_i64, v313, v319, (unsigned int *)v312.m128_u64[0], v318);
            goto LABEL_56;
          }
          v112 = a2->m128i_i32[2];
          if ( v112 == 1 )
          {
            v114 = qword_1C7F2C0;
            if ( a2[1].m128i_i32[0] )
            {
              v304 = a2 + 1;
              if ( (v347 & 0x100000000LL) != 0
                || (_DWORD)v347 != 1
                || (a2[2].m128i_i8[4] & 1) != 0
                || a2[2].m128i_i32[0] != 1 )
              {
                sub_1848FF0(qword_1C7F2C0, &v345, v304);
                goto LABEL_174;
              }
              sub_1831650(qword_1C7F2C0, &v345, v304);
LABEL_173:
              sub_182CBA0(v114, &v347);
              BYTE4(v347) &= ~1u;
              LODWORD(v347) = 1;
LABEL_174:
              v59 = v344;
              goto LABEL_175;
            }
LABEL_172:
            v344 = 1;
            sub_182CEF0(v114, &v345);
            goto LABEL_173;
          }
          if ( (int)v345 < 0 )
            v113 = v112 == 0;
          else
            v113 = v112 != 0;
          v62 = 2 * v113;
        }
        else
        {
          v60 = a2->m128i_i32[2];
          if ( v60 == 1 )
          {
            v61 = a2[1].m128i_u32[0];
            if ( v61 )
            {
              if ( v344 )
                v61 = ~v61;
              v62 = 2 * (v61 >> 31);
              goto LABEL_224;
            }
            v114 = qword_1C7F2C0;
            goto LABEL_172;
          }
          if ( v344 )
            v130 = v60 != 0;
          else
            v130 = v60 == 0;
          v62 = 2 * v130;
        }
LABEL_224:
        v114 = qword_1C7F2C0;
        v344 = v62;
        sub_182CEF0(qword_1C7F2C0, &v345);
        goto LABEL_173;
      }
      v126 = a2[3].m128i_i32[0];
      if ( v126 != 1 )
      {
        if ( (int)v345 < 0 )
          v127 = v126 == 0;
        else
          v127 = v126 != 0;
        v51 = 2 * v127;
        goto LABEL_67;
      }
      if ( a2[3].m128i_i32[2] )
      {
        v223 = &a2[3].m128i_i8[8];
        if ( (v347 & 0x100000000LL) != 0
          || (_DWORD)v347 != 1
          || (a2[4].m128i_i8[12] & 1) != 0
          || a2[4].m128i_i32[2] != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, &v345, v223);
          goto LABEL_69;
        }
        sub_1831650(qword_1C7F2C0, &v345, v223);
LABEL_68:
        sub_182CBA0(v49, &v347);
        BYTE4(v347) &= ~1u;
        LODWORD(v347) = 1;
LABEL_69:
        v48 = v344;
        goto LABEL_70;
      }
    }
    else
    {
      v50 = a2[3].m128i_i32[0];
      if ( v50 != 1 )
      {
        v51 = 2 * (v50 == 0);
LABEL_67:
        v344 = v51;
        sub_182CEF0(qword_1C7F2C0, &v345);
        goto LABEL_68;
      }
      v105 = a2[3].m128i_u32[2];
      if ( v105 )
      {
        v51 = 2 * (v105 >> 31);
        goto LABEL_67;
      }
    }
    v344 = 1;
    sub_182CEF0(qword_1C7F2C0, &v345);
    goto LABEL_68;
  }
  v9 = a1[3].m128i_i32[0];
  v10 = (__int64)&a1->m128i_i64[1];
  v11 = (__int64)&a2->m128i_i64[1];
  v12 = a2 + 3;
  LOBYTE(v314) = a1[5].m128i_i8[8];
  LOBYTE(v316) = a1[5].m128i_i8[9];
  LOBYTE(v315) = a2[5].m128i_i8[8];
  LOBYTE(v317) = a2[5].m128i_i8[9];
  v313 = (unsigned int *)a1[6].m128i_i64[0];
  v312.m128_u64[0] = a1[6].m128i_u64[1];
  v319 = (unsigned int *)a2[6].m128i_i64[0];
  v318 = (unsigned int *)a2[6].m128i_i64[1];
  if ( v9 )
  {
    v13 = a1 + 3;
    if ( v9 != 1 )
    {
      if ( !v6 )
        goto LABEL_110;
LABEL_6:
      if ( v6 != 1 )
        goto LABEL_7;
      goto LABEL_109;
    }
    if ( a1[3].m128i_i32[2] > 0 )
    {
      if ( !v6 )
      {
LABEL_110:
        if ( !v8 )
          goto LABEL_111;
        if ( v8 != 1 )
        {
LABEL_348:
          if ( !v7 || v7 == 1 && a2[1].m128i_i32[0] < 0 )
          {
            v321 = (__int32 *)v11;
            m128i_i32 = &v325;
            v324 = (int *)v10;
            sub_B304A0(&v325, v10, v12);
            v193 = (__int64)v321;
            v321 = &v330;
            v322 = (__m128i *)v193;
            sub_B304A0(&v330, v13, v193);
            v323 = (__m128i *)&v337;
            sub_B304A0(&v337, v324, v322);
            v324 = &v344;
            sub_B304A0(&v344, v13, v12);
            LOBYTE(v322) = (unsigned __int8)v314 | v317;
            LOBYTE(v314) = (unsigned __int8)v315 | (unsigned __int8)v314;
            if ( sub_B286B0((__int64)&v325, (__int64)&v330)
              || (v194 = sub_B28610((__int64)m128i_i32, (__int64)v321), v195 = v316 | (unsigned __int8)v315, v194)
              && (_BYTE)v322 != 1
              && v195 )
            {
              a1->m128i_i32[2] = v325;
              v196 = qword_1C7F2C0;
              if ( (v327 & 1) != 0 )
              {
                v315 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, &a1[1], &v326);
                v196 = v315;
              }
              else
              {
                v197 = v326;
                a1[1].m128i_i8[4] &= ~1u;
                a1[1].m128i_i32[0] = v197;
              }
              if ( (v329 & 1) != 0 )
              {
                sub_182C690(v196, &a1[2], &v328);
              }
              else
              {
                v198 = v328;
                a1[2].m128i_i8[4] &= ~1u;
                a1[2].m128i_i32[0] = v198;
              }
            }
            else
            {
              a1->m128i_i32[2] = v330;
              v301 = qword_1C7F2C0;
              if ( (v332 & 1) != 0 )
              {
                LOBYTE(m128i_i32) = v195;
                v315 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, &a1[1], &v331);
                v195 = (char)m128i_i32;
                v301 = v315;
              }
              else
              {
                v302 = v331;
                a1[1].m128i_i8[4] &= ~1u;
                a1[1].m128i_i32[0] = v302;
              }
              if ( (v335 & 1) != 0 )
              {
                LOBYTE(v315) = v195;
                sub_182C690(v301, &a1[2], &v334);
                v195 = (char)v315;
              }
              else
              {
                v303 = v334;
                a1[2].m128i_i8[4] &= ~1u;
                a1[2].m128i_i32[0] = v303;
              }
              LOBYTE(v322) = v195;
            }
            v199 = (__int64)v323;
            v200 = (__int64)v324;
            a1[5].m128i_i8[8] = (char)v322;
            if ( sub_B286B0(v200, v199)
              || (v201 = sub_B28610((__int64)v323, (__int64)v324), v202 = v317 | v316, v201) && (_BYTE)v314 != 1 && v202 )
            {
              v203 = qword_1C7F2C0;
              a1[3].m128i_i32[0] = v337;
              if ( (v339 & 1) != 0 )
              {
                v315 = v203;
                sub_182C690(v203, &a1[3].m128i_u64[1], &v338);
              }
              else
              {
                v204 = v338;
                a1[3].m128i_i8[12] &= ~1u;
                a1[3].m128i_i32[2] = v204;
              }
              if ( (v342 & 1) != 0 )
              {
                sub_182C690(v203, &a1[4].m128i_u64[1], &v341);
              }
              else
              {
                v205 = v341;
                a1[4].m128i_i8[12] &= ~1u;
                a1[4].m128i_i32[2] = v205;
              }
            }
            else
            {
              v298 = qword_1C7F2C0;
              a1[3].m128i_i32[0] = v344;
              if ( (v345 & 0x100000000LL) != 0 )
              {
                LOBYTE(v315) = v202;
                v314 = v298;
                sub_182C690(v298, &a1[3].m128i_u64[1], &v345);
                v202 = (char)v315;
              }
              else
              {
                v299 = v345;
                a1[3].m128i_i8[12] &= ~1u;
                a1[3].m128i_i32[2] = v299;
              }
              if ( (v347 & 0x100000000LL) != 0 )
              {
                LOBYTE(v314) = v202;
                sub_182C690(v298, &a1[4].m128i_u64[1], &v347);
                v202 = (char)v314;
              }
              else
              {
                v300 = v347;
                a1[4].m128i_i8[12] &= ~1u;
                a1[4].m128i_i32[2] = v300;
              }
              LOBYTE(v314) = v202;
            }
            a1[5].m128i_i8[9] = (char)v314;
            v206 = nullptr;
            if ( a1->m128i_i32[2] == 1 )
              v206 = sub_B2A000(a1->m128i_i64, v313, (unsigned int *)v312.m128_u64[0], v319, v318);
            a1[6].m128i_i64[0] = (__int64)v206;
            v207 = nullptr;
            if ( a1[3].m128i_i32[0] == 1 )
              v207 = sub_B2A000(a1->m128i_i64, v313, (unsigned int *)v312.m128_u64[0], v319, v318);
            a1[6].m128i_i64[1] = (__int64)v207;
            v312.m128_u64[0] = (unsigned __int64)qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v345);
            sub_182CBA0(v312.m128_u64[0], &v347);
            v208 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v338);
            sub_182CBA0(v208, &v341);
            v209 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v331);
            sub_182CBA0(v209, &v334);
            v210 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v326);
            sub_182CBA0(v210, &v328);
            return a1;
          }
          sub_B304A0(&v337, v10, v12);
          sub_B304A0(&v344, v13, v12);
          v243 = v317;
          a1[5].m128i_i8[8] = v317 | (unsigned __int8)v314;
          v244 = qword_1C7F2C0;
          a1[5].m128i_i8[9] = v243 | v316;
          a1->m128i_i32[2] = v337;
          if ( (v339 & 1) != 0 )
          {
            sub_182C690(v244, &a1[1], &v338);
          }
          else
          {
            v245 = v338;
            a1[1].m128i_i8[4] &= ~1u;
            a1[1].m128i_i32[0] = v245;
          }
          if ( (v342 & 1) != 0 )
          {
            sub_182C690(v244, &a1[2], &v341);
          }
          else
          {
            v246 = v341;
            a1[2].m128i_i8[4] &= ~1u;
            a1[2].m128i_i32[0] = v246;
          }
          v247 = qword_1C7F2C0;
          a1[3].m128i_i32[0] = v344;
          if ( (v345 & 0x100000000LL) != 0 )
          {
            sub_182C690(v247, &a1[3].m128i_u64[1], &v345);
          }
          else
          {
            v248 = v345;
            a1[3].m128i_i8[12] &= ~1u;
            a1[3].m128i_i32[2] = v248;
          }
          if ( (v347 & 0x100000000LL) != 0 )
          {
            sub_182C690(v247, &a1[4].m128i_u64[1], &v347);
          }
          else
          {
            v249 = v347;
            a1[4].m128i_i8[12] &= ~1u;
            a1[4].m128i_i32[2] = v249;
          }
          if ( a1->m128i_i32[2] == 1 )
          {
            v278 = v313;
            v265 = a1->m128i_i64[0];
            if ( v313 )
            {
              if ( v318 && v318 != v313 )
              {
                v279 = sub_180C100(*(_QWORD *)(v265 + 56), 24);
                v280 = *v313;
                v281 = v318;
                v313 = (unsigned int *)v279;
                *v278 = (v280 + 1) & 0x3FFFFFFF | v280 & 0xC0000000;
                *v281 = (*v281 + 1) & 0x3FFFFFFF | *v281 & 0xC0000000;
                *(_QWORD *)v279 = 0;
                *(_QWORD *)(v279 + 8) = v278;
                *(_QWORD *)(v279 + 16) = v281;
              }
            }
            else
            {
              if ( !v318 )
              {
                v71 = a1[3].m128i_i32[0] == 1;
                a1[6].m128i_i64[0] = (__int64)v319;
                if ( !v71 )
                  goto LABEL_507;
                if ( !v312.m128_u64[0] )
                  goto LABEL_627;
                goto LABEL_548;
              }
              v313 = v318;
            }
            v282 = v319;
            if ( v319 && v313 != v319 )
            {
              v283 = sub_180C100(*(_QWORD *)(v265 + 56), 24);
              v284 = v313;
              v313 = (unsigned int *)v283;
              *v284 = (*v284 + 1) & 0x3FFFFFFF | *v284 & 0xC0000000;
              *v282 = (*v282 + 1) & 0x3FFFFFFF | *v282 & 0xC0000000;
              *(_QWORD *)v283 = 0;
              *(_QWORD *)(v283 + 8) = v284;
              *(_QWORD *)(v283 + 16) = v282;
            }
          }
          else
          {
            v313 = nullptr;
          }
          v71 = a1[3].m128i_i32[0] == 1;
          a1[6].m128i_i64[0] = (__int64)v313;
          if ( !v71 )
          {
LABEL_507:
            v312.m128_u64[0] = 0;
            goto LABEL_346;
          }
          v264 = (unsigned int *)v312.m128_u64[0];
          v265 = a1->m128i_i64[0];
          if ( v312.m128_u64[0] )
          {
            if ( v318 != (unsigned int *)v312.m128_u64[0] && v318 )
            {
              v266 = (_QWORD *)sub_180C100(*(_QWORD *)(v265 + 56), 24);
              v267 = *(_DWORD *)v312.m128_u64[0];
              v268 = v318;
              v312.m128_u64[0] = (unsigned __int64)v266;
              *v264 = (v267 + 1) & 0x3FFFFFFF | v267 & 0xC0000000;
              *v268 = (*v268 + 1) & 0x3FFFFFFF | *v268 & 0xC0000000;
              *v266 = 0;
              v266[1] = v264;
              v266[2] = v268;
            }
            goto LABEL_548;
          }
          if ( !v318 )
          {
LABEL_627:
            v312.m128_u64[0] = (unsigned __int64)v319;
            goto LABEL_346;
          }
          v312.m128_u64[0] = (unsigned __int64)v318;
LABEL_548:
          v269 = v319;
          if ( v319 && (unsigned int *)v312.m128_u64[0] != v319 )
          {
            v270 = (_QWORD *)sub_180C100(*(_QWORD *)(v265 + 56), 24);
            v271 = (unsigned int *)v312.m128_u64[0];
            v312.m128_u64[0] = (unsigned __int64)v270;
            *v271 = (*v271 + 1) & 0x3FFFFFFF | *v271 & 0xC0000000;
            *v269 = (*v269 + 1) & 0x3FFFFFFF | *v269 & 0xC0000000;
            *v270 = 0;
            v270[1] = v271;
            v270[2] = v269;
          }
          goto LABEL_346;
        }
LABEL_511:
        if ( a2[3].m128i_i32[2] <= 0 )
        {
LABEL_111:
          v344 = v9;
          v345 = 0;
          v346 = 0;
          v81 = qword_1C7F2C0;
          v347 = 1;
          v348 = 0;
          v321 = &a1[3].m128i_i32[2];
          if ( (a1[3].m128i_i8[12] & 1) != 0 )
          {
            m128i_i32 = (__int32 *)v11;
            v317 = v10;
            sub_182C690(qword_1C7F2C0, &v345, &a1[3].m128i_u64[1]);
            v11 = (__int64)m128i_i32;
            v10 = v317;
          }
          else
          {
            LODWORD(v345) = a1[3].m128i_i32[2];
          }
          v322 = (__m128i *)((char *)a1 + 72);
          if ( (a1[4].m128i_i8[12] & 1) != 0 )
          {
            m128i_i32 = (__int32 *)v11;
            v317 = v10;
            sub_182C690(v81, &v347, &a1[4].m128i_u64[1]);
            v11 = (__int64)m128i_i32;
            v10 = v317;
          }
          else
          {
            v82 = a1[4].m128i_i32[2];
            BYTE4(v347) &= ~1u;
            LODWORD(v347) = v82;
          }
          v83 = v344;
          if ( v344 == 1 )
          {
            if ( !(_DWORD)v345 )
              goto LABEL_120;
            v234 = a2->m128i_i32[2];
            if ( v234 != 1 )
            {
              if ( (int)v345 < 0 )
                v235 = v234 == 0;
              else
                v235 = v234 != 0;
              v86 = 2 * v235;
              goto LABEL_119;
            }
            v272 = qword_1C7F2C0;
            if ( a2[1].m128i_i32[0] )
            {
              v305 = a2 + 1;
              if ( (v347 & 0x100000000LL) != 0
                || (_DWORD)v347 != 1
                || (a2[2].m128i_i8[4] & 1) != 0
                || a2[2].m128i_i32[0] != 1 )
              {
                m128i_i32 = (__int32 *)v11;
                v317 = v10;
                sub_1848FF0(qword_1C7F2C0, &v345, v305);
                v83 = v344;
                v10 = v317;
                v11 = (__int64)m128i_i32;
LABEL_120:
                v339 &= 0xFCu;
                v88 = qword_1C7F2C0;
                v342 &= 0xFCu;
                v337 = v83;
                v338 = 0;
                v340 = 0;
                v341 = 1;
                v343 = 0;
                if ( (v345 & 0x100000000LL) != 0 )
                {
                  m128i_i32 = (__int32 *)v11;
                  v317 = v10;
                  sub_182C690(qword_1C7F2C0, &v338, &v345);
                  v11 = (__int64)m128i_i32;
                  v10 = v317;
                }
                else
                {
                  v338 = v345;
                }
                if ( (v347 & 0x100000000LL) != 0 )
                {
                  m128i_i32 = (__int32 *)v11;
                  v317 = v10;
                  sub_182C690(v88, &v341, &v347);
                  v11 = (__int64)m128i_i32;
                  v10 = v317;
                }
                else
                {
                  v342 &= ~1u;
                  v341 = v347;
                }
                v89 = qword_1C7F2C0;
                m128i_i32 = (__int32 *)v11;
                v317 = v10;
                sub_182CBA0(qword_1C7F2C0, &v345);
                sub_182CBA0(v89, &v347);
                sub_B304A0(&v344, v317, m128i_i32);
                v90 = (char)v315;
                v91 = qword_1C7F2C0;
                a1[5].m128i_i8[8] = (unsigned __int8)v315 | v316;
                a1[5].m128i_i8[9] = v90 | (unsigned __int8)v314;
                a1->m128i_i32[2] = v337;
                if ( (v339 & 1) != 0 )
                {
                  sub_182C690(v91, &a1[1], &v338);
                }
                else
                {
                  v92 = v338;
                  a1[1].m128i_i8[4] &= ~1u;
                  a1[1].m128i_i32[0] = v92;
                }
                if ( (v342 & 1) != 0 )
                {
                  sub_182C690(v91, &a1[2], &v341);
                }
                else
                {
                  v93 = v341;
                  a1[2].m128i_i8[4] &= ~1u;
                  a1[2].m128i_i32[0] = v93;
                }
                v94 = qword_1C7F2C0;
                a1[3].m128i_i32[0] = v344;
                if ( (v345 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v94, v321, &v345);
                }
                else
                {
                  v95 = v345;
                  a1[3].m128i_i8[12] &= ~1u;
                  a1[3].m128i_i32[2] = v95;
                }
                if ( (v347 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v94, v322, &v347);
                }
                else
                {
                  v96 = v347;
                  a1[4].m128i_i8[12] &= ~1u;
                  a1[4].m128i_i32[2] = v96;
                }
                if ( a1->m128i_i32[2] == 1 )
                {
                  v236 = a1->m128i_i64[0];
                  if ( v312.m128_u64[0] )
                  {
                    if ( v319 && v319 != (unsigned int *)v312.m128_u64[0] )
                    {
                      v258 = (_QWORD *)sub_180C100(*(_QWORD *)(v236 + 56), 24);
                      v259 = (unsigned int *)v312.m128_u64[0];
                      v260 = v319;
                      v312.m128_u64[0] = (unsigned __int64)v258;
                      *v259 = (*v259 + 1) & 0x3FFFFFFF | *v259 & 0xC0000000;
                      *v260 = (*v260 + 1) & 0x3FFFFFFF | *v260 & 0xC0000000;
                      *v258 = 0;
                      v258[1] = v259;
                      v258[2] = v260;
                    }
                  }
                  else
                  {
                    if ( !v319 )
                    {
                      v71 = a1[3].m128i_i32[0] == 1;
                      a1[6].m128i_i64[0] = (__int64)v318;
                      if ( !v71 )
                        goto LABEL_135;
                      if ( !v313 )
                        goto LABEL_596;
                      goto LABEL_492;
                    }
                    v312.m128_u64[0] = (unsigned __int64)v319;
                  }
                  if ( v318 && (unsigned int *)v312.m128_u64[0] != v318 )
                  {
                    v261 = (_QWORD *)sub_180C100(*(_QWORD *)(v236 + 56), 24);
                    v262 = (unsigned int *)v312.m128_u64[0];
                    v263 = v318;
                    v312.m128_u64[0] = (unsigned __int64)v261;
                    *v262 = (*v262 + 1) & 0x3FFFFFFF | *v262 & 0xC0000000;
                    *v263 = (*v263 + 1) & 0x3FFFFFFF | *v263 & 0xC0000000;
                    *v261 = 0;
                    v261[1] = v262;
                    v261[2] = v263;
                  }
                }
                else
                {
                  v312.m128_u64[0] = 0;
                }
                v71 = a1[3].m128i_i32[0] == 1;
                a1[6].m128i_i64[0] = v312.m128_u64[0];
                if ( !v71 )
                {
LABEL_135:
                  v313 = nullptr;
LABEL_136:
                  v97 = qword_1C7F2C0;
                  a1[6].m128i_i64[1] = (__int64)v313;
                  sub_182CBA0(v97, &v345);
                  sub_182CBA0(v97, &v347);
                  v98 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v338);
                  sub_182CBA0(v98, &v341);
                  return a1;
                }
                v236 = a1->m128i_i64[0];
                if ( v313 )
                {
                  if ( v319 && v319 != v313 )
                  {
                    v237 = sub_180C100(*(_QWORD *)(v236 + 56), 24);
                    v238 = v313;
                    v239 = v319;
                    v313 = (unsigned int *)v237;
                    *v238 = (*v238 + 1) & 0x3FFFFFFF | *v238 & 0xC0000000;
                    *v239 = (*v239 + 1) & 0x3FFFFFFF | *v239 & 0xC0000000;
                    *(_QWORD *)v237 = 0;
                    *(_QWORD *)(v237 + 8) = v238;
                    *(_QWORD *)(v237 + 16) = v239;
                  }
                  goto LABEL_492;
                }
                if ( !v319 )
                {
LABEL_596:
                  v313 = v318;
                  goto LABEL_136;
                }
                v313 = v319;
LABEL_492:
                if ( v318 && v313 != v318 )
                {
                  v240 = sub_180C100(*(_QWORD *)(v236 + 56), 24);
                  v241 = v313;
                  v242 = v318;
                  v313 = (unsigned int *)v240;
                  *v241 = (*v241 + 1) & 0x3FFFFFFF | *v241 & 0xC0000000;
                  *v242 = (*v242 + 1) & 0x3FFFFFFF | *v242 & 0xC0000000;
                  *(_QWORD *)v240 = 0;
                  *(_QWORD *)(v240 + 8) = v241;
                  *(_QWORD *)(v240 + 16) = v242;
                }
                goto LABEL_136;
              }
              m128i_i32 = (__int32 *)v11;
              v317 = v10;
              sub_1831650(qword_1C7F2C0, &v345, v305);
LABEL_554:
              sub_182CBA0(v272, &v347);
              BYTE4(v347) &= ~1u;
              v83 = v344;
              LODWORD(v347) = 1;
              v10 = v317;
              v11 = (__int64)m128i_i32;
              goto LABEL_120;
            }
          }
          else
          {
            v84 = a2->m128i_i32[2];
            if ( v84 != 1 )
            {
              v86 = 2 * (v84 != 0);
              goto LABEL_119;
            }
            v85 = a2[1].m128i_i32[0];
            if ( v85 )
            {
              v86 = 2 * (v85 >= 0);
LABEL_119:
              v87 = qword_1C7F2C0;
              m128i_i32 = (__int32 *)v11;
              v317 = v10;
              v344 = v86;
              sub_182CEF0(qword_1C7F2C0, &v345);
              sub_182CBA0(v87, &v347);
              BYTE4(v347) &= ~1u;
              v83 = v344;
              LODWORD(v347) = 1;
              v11 = (__int64)m128i_i32;
              v10 = v317;
              goto LABEL_120;
            }
            v272 = qword_1C7F2C0;
          }
          m128i_i32 = (__int32 *)v11;
          v317 = v10;
          v344 = 1;
          sub_182CEF0(v272, &v345);
          goto LABEL_554;
        }
        goto LABEL_348;
      }
      goto LABEL_371;
    }
  }
  if ( !v8 )
    goto LABEL_60;
  if ( v8 != 1 )
    goto LABEL_84;
LABEL_147:
  if ( a2[3].m128i_i32[2] <= 0 )
    goto LABEL_60;
LABEL_84:
  if ( !v7 )
    goto LABEL_85;
  if ( v7 == 1 )
    goto LABEL_428;
LABEL_138:
  v344 = v6;
  v345 = 0;
  v346 = 0;
  v99 = qword_1C7F2C0;
  v347 = 1;
  v348 = 0;
  m128i_i32 = a1[1].m128i_i32;
  if ( (a1[1].m128i_i8[4] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v345, &a1[1]);
  else
    LODWORD(v345) = a1[1].m128i_i32[0];
  v321 = a1[2].m128i_i32;
  if ( (a1[2].m128i_i8[4] & 1) != 0 )
  {
    sub_182C690(v99, &v347, &a1[2]);
  }
  else
  {
    v100 = a1[2].m128i_i32[0];
    BYTE4(v347) &= ~1u;
    LODWORD(v347) = v100;
  }
  v101 = v344;
  if ( v344 != 1 )
  {
    v102 = a2[3].m128i_i32[0];
    if ( v102 == 1 )
    {
      v103 = a2[3].m128i_u32[2];
      if ( !v103 )
      {
        v104 = qword_1C7F2C0;
LABEL_146:
        v344 = 1;
        sub_182CEF0(v104, &v345);
        goto LABEL_384;
      }
      if ( v344 )
        v103 = ~v103;
      v216 = 2 * (v103 >> 31);
    }
    else
    {
      if ( v344 )
        v225 = v102 != 0;
      else
        v225 = v102 == 0;
      v216 = 2 * v225;
    }
LABEL_383:
    v104 = qword_1C7F2C0;
    v344 = v216;
    sub_182CEF0(qword_1C7F2C0, &v345);
    goto LABEL_384;
  }
  if ( !(_DWORD)v345 )
    goto LABEL_226;
  v214 = a2[3].m128i_i32[0];
  if ( v214 != 1 )
  {
    if ( (int)v345 < 0 )
      v215 = v214 == 0;
    else
      v215 = v214 != 0;
    v216 = 2 * v215;
    goto LABEL_383;
  }
  v104 = qword_1C7F2C0;
  if ( !a2[3].m128i_i32[2] )
    goto LABEL_146;
  v307 = &a2[3].m128i_i8[8];
  if ( (v347 & 0x100000000LL) != 0 || (_DWORD)v347 != 1 || (a2[4].m128i_i8[12] & 1) != 0 || a2[4].m128i_i32[2] != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, &v345, v307);
    goto LABEL_385;
  }
  sub_1831650(qword_1C7F2C0, &v345, v307);
LABEL_384:
  sub_182CBA0(v104, &v347);
  BYTE4(v347) &= ~1u;
  LODWORD(v347) = 1;
LABEL_385:
  v101 = v344;
LABEL_226:
  v332 &= 0xFCu;
  v131 = qword_1C7F2C0;
  v335 &= 0xFCu;
  v330 = v101;
  v331 = 0;
  v333 = 0;
  v334 = 1;
  v336 = 0;
  if ( (v345 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v331, &v345);
  else
    v331 = v345;
  if ( (v347 & 0x100000000LL) != 0 )
  {
    sub_182C690(v131, &v334, &v347);
  }
  else
  {
    v335 &= ~1u;
    v334 = v347;
  }
  v132 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v345);
  sub_182CBA0(v132, &v347);
  v133 = a1[3].m128i_i32[0];
  v134 = qword_1C7F2C0;
  v345 = 0;
  v344 = v133;
  v346 = 0;
  v347 = 1;
  v348 = 0;
  v322 = (__m128i *)((char *)a1 + 56);
  if ( (a1[3].m128i_i8[12] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v345, &a1[3].m128i_u64[1]);
  else
    LODWORD(v345) = a1[3].m128i_i32[2];
  v323 = (__m128i *)((char *)a1 + 72);
  if ( (a1[4].m128i_i8[12] & 1) != 0 )
  {
    sub_182C690(v134, &v347, &a1[4].m128i_u64[1]);
  }
  else
  {
    v135 = a1[4].m128i_i32[2];
    BYTE4(v347) &= ~1u;
    LODWORD(v347) = v135;
  }
  v136 = v344;
  if ( v344 != 1 )
  {
    v137 = a2->m128i_i32[2];
    if ( v137 == 1 )
    {
      v138 = a2[1].m128i_u32[0];
      if ( !v138 )
      {
        v139 = qword_1C7F2C0;
        goto LABEL_238;
      }
      if ( v344 )
        v138 = ~v138;
      v213 = 2 * (v138 >> 31);
    }
    else
    {
      if ( v344 )
        v224 = v137 != 0;
      else
        v224 = v137 == 0;
      v213 = 2 * v224;
    }
    goto LABEL_376;
  }
  if ( (_DWORD)v345 )
  {
    v211 = a2->m128i_i32[2];
    if ( v211 == 1 )
    {
      v139 = qword_1C7F2C0;
      if ( a2[1].m128i_i32[0] )
      {
        v308 = a2 + 1;
        if ( (v347 & 0x100000000LL) != 0 || (_DWORD)v347 != 1 || (a2[2].m128i_i8[4] & 1) != 0 || a2[2].m128i_i32[0] != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, &v345, v308);
          goto LABEL_378;
        }
        sub_1831650(qword_1C7F2C0, &v345, v308);
LABEL_377:
        sub_182CBA0(v139, &v347);
        BYTE4(v347) &= ~1u;
        LODWORD(v347) = 1;
LABEL_378:
        v136 = v344;
        goto LABEL_240;
      }
LABEL_238:
      v344 = 1;
      sub_182CEF0(v139, &v345);
      goto LABEL_377;
    }
    if ( (int)v345 < 0 )
      v212 = v211 == 0;
    else
      v212 = v211 != 0;
    v213 = 2 * v212;
LABEL_376:
    v139 = qword_1C7F2C0;
    v344 = v213;
    sub_182CEF0(qword_1C7F2C0, &v345);
    goto LABEL_377;
  }
LABEL_240:
  v339 &= 0xFCu;
  v140 = qword_1C7F2C0;
  v342 &= 0xFCu;
  v337 = v136;
  v338 = 0;
  v340 = 0;
  v341 = 1;
  v343 = 0;
  if ( (v345 & 0x100000000LL) != 0 )
  {
    v324 = (int *)qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v338, &v345);
  }
  else
  {
    v338 = v345;
  }
  if ( (v347 & 0x100000000LL) != 0 )
  {
    sub_182C690(v140, &v341, &v347);
  }
  else
  {
    v342 &= ~1u;
    v341 = v347;
  }
  v141 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v345);
  sub_182CBA0(v141, &v347);
  v142 = (unsigned __int8)v314 | v317;
  if ( a1[3].m128i_i32[0] != 1 || a1[3].m128i_i32[2] || a1[5].m128i_i8[9] )
  {
    v71 = a2->m128i_i32[2] == 1;
    a1[5].m128i_i8[8] = v142;
    if ( !v71 || a2[1].m128i_i32[0] || a2[5].m128i_i8[8] )
      v143 = v316 | (unsigned __int8)v315;
    else
      v143 = 0;
  }
  else
  {
    a1[5].m128i_i8[8] = v142;
    v143 = 0;
  }
  a1[5].m128i_i8[9] = v143;
  v144 = qword_1C7F2C0;
  a1->m128i_i32[2] = v330;
  if ( (v332 & 1) != 0 )
  {
    sub_182C690(v144, m128i_i32, &v331);
  }
  else
  {
    v145 = v331;
    a1[1].m128i_i8[4] &= ~1u;
    a1[1].m128i_i32[0] = v145;
  }
  if ( (v335 & 1) != 0 )
  {
    sub_182C690(v144, v321, &v334);
  }
  else
  {
    v146 = v334;
    a1[2].m128i_i8[4] &= ~1u;
    a1[2].m128i_i32[0] = v146;
  }
  v147 = qword_1C7F2C0;
  a1[3].m128i_i32[0] = v337;
  if ( (v339 & 1) != 0 )
  {
    sub_182C690(v147, v322, &v338);
  }
  else
  {
    v148 = v338;
    a1[3].m128i_i8[12] &= ~1u;
    a1[3].m128i_i32[2] = v148;
  }
  if ( (v342 & 1) != 0 )
  {
    sub_182C690(v147, v323, &v341);
  }
  else
  {
    v149 = v341;
    a1[4].m128i_i8[12] &= ~1u;
    a1[4].m128i_i32[2] = v149;
  }
  v150 = nullptr;
  if ( a1->m128i_i32[2] == 1 )
    v150 = sub_B2A210(a1->m128i_i64, v313, v318, (unsigned int *)v312.m128_u64[0], v319);
  v71 = a1[3].m128i_i32[0] == 1;
  a1[6].m128i_i64[0] = (__int64)v150;
  if ( v71 )
  {
    v151 = (unsigned int *)v312.m128_u64[0];
    if ( v312.m128_u64[0] )
    {
      v152 = v319;
      if ( v319 && v319 != (unsigned int *)v312.m128_u64[0] )
      {
        v153 = (_QWORD *)sub_180C100(*(_QWORD *)(a1->m128i_i64[0] + 56), 24);
        v154 = *(_DWORD *)v312.m128_u64[0];
        v312.m128_u64[0] = (unsigned __int64)v153;
        *v151 = (v154 + 1) & 0x3FFFFFFF | v154 & 0xC0000000;
        *v152 = (*v152 + 1) & 0x3FFFFFFF | *v152 & 0xC0000000;
        *v153 = 0;
        v153[1] = v151;
        v153[2] = v152;
      }
    }
    else
    {
      v312.m128_u64[0] = (unsigned __int64)v319;
    }
  }
  else
  {
    v312.m128_u64[0] = 0;
  }
  v155 = qword_1C7F2C0;
  a1[6].m128i_i64[1] = v312.m128_u64[0];
  sub_182CBA0(v155, &v338);
  sub_182CBA0(v155, &v341);
  v156 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v331);
  sub_182CBA0(v156, &v334);
  return a1;
}

