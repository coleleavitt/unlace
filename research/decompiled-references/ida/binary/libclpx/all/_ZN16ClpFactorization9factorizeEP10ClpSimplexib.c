__int64 __fastcall ClpFactorization::factorize(
        ClpFactorization *this,
        ClpSimplex *a2,
        int a3,
        char a4,
        __m128 si128,
        __m128i a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  int v12; // ebx
  __int64 v14; // rdi
  ClpSimplex *v16; // r13
  double *v17; // r15
  int v18; // r14d
  __int64 v19; // rax
  bool v20; // cf
  int *v21; // r10
  int v22; // edx
  unsigned int v23; // esi
  int v24; // edi
  char v25; // cl
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // edx
  unsigned int v29; // ebx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  int *v34; // rax
  double *v35; // rdi
  int v36; // edx
  int *v37; // rax
  int v38; // edx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  __int64 v42; // r15
  int v43; // eax
  __int64 v44; // rdi
  int v45; // ecx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  _DWORD *v50; // rsi
  _OWORD *v51; // rdx
  __int64 v52; // rcx
  double *v53; // rdi
  _DWORD *v54; // rdx
  int v55; // edi
  int *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  double *v60; // r14
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbx
  int *v64; // rax
  int v65; // ecx
  double *v66; // r10
  int v67; // edx
  int *v68; // rax
  int v69; // esi
  int v70; // edx
  __int64 v71; // rcx
  int v72; // eax
  const void *v73; // rdi
  ClpNetworkBasis *v74; // r13
  CoinFactorization *v75; // rdi
  __int64 v76; // rdi
  int v77; // eax
  __int64 v78; // r14
  int v79; // eax
  int v80; // edx
  __int64 v81; // rdx
  __int64 v82; // rsi
  __int64 v83; // r13
  int v84; // ecx
  int v85; // ecx
  __int64 v86; // rdi
  __int64 v87; // r8
  int *v88; // rax
  __int64 v89; // rdx
  double *v90; // r11
  __int64 v91; // rcx
  double v92; // r11
  int *v93; // rcx
  int v94; // edx
  int v95; // eax
  CoinFactorization *v96; // rdi
  bool v97; // cc
  __int64 v99; // rdx
  double *v100; // r10
  unsigned int v101; // ecx
  __m128i v102; // xmm2
  __m128 v103; // xmm2
  _DWORD *v104; // rdx
  _OWORD *v105; // rcx
  int v106; // edi
  __int64 v107; // rdx
  __int64 v108; // r10
  double *v109; // rbx
  __int64 v110; // rcx
  double *v111; // rdi
  __int64 v112; // r10
  int v113; // ebx
  _DWORD *v114; // rdi
  int v115; // eax
  int v116; // ecx
  __int64 v117; // rax
  __int64 v118; // rdi
  double *v119; // r15
  _BYTE *v120; // rcx
  int v121; // esi
  int v122; // esi
  int v123; // eax
  int v124; // r9d
  int v125; // edx
  int v126; // esi
  __int64 v127; // rdi
  unsigned int v128; // r10d
  __int64 v129; // r15
  double *v130; // r11
  unsigned __int64 v131; // rcx
  __int64 v132; // rax
  int v133; // r9d
  unsigned int v134; // r8d
  unsigned int v135; // ecx
  __int64 v136; // r10
  __int64 v137; // rdi
  __int64 v138; // rax
  char *v139; // rdi
  char *v140; // r10
  double *v141; // rdi
  int v142; // eax
  int v143; // edx
  int v144; // edi
  int v145; // ecx
  double *v146; // r10
  double *v147; // r8
  _BYTE *v148; // rax
  __int64 v149; // r10
  __int64 v150; // r8
  __int64 v151; // r11
  __int64 v152; // r15
  __int64 v153; // rbx
  double v154; // xmm2_8
  __int64 v155; // rax
  __int64 v156; // rdi
  double *v157; // r9
  _BYTE *v158; // rcx
  __int64 v159; // rax
  int v160; // esi
  int i; // ecx
  _BYTE *v162; // rdx
  __int64 v163; // rsi
  double *v164; // rdi
  __int64 v165; // rcx
  __int64 v166; // rdx
  double *v167; // rdi
  __int64 v168; // rax
  _BYTE *v169; // rdx
  __int64 v170; // rax
  double *v171; // r9
  _BYTE *v172; // rcx
  char v173; // dl
  double v174; // xmm3_8
  double v175; // xmm4_8
  int v176; // edx
  __int64 v177; // rcx
  _BYTE *v178; // rdx
  char v179; // di
  double v180; // xmm3_8
  double v181; // xmm4_8
  __int64 v182; // r9
  int *v183; // r8
  _DWORD *v184; // rax
  double *v185; // rbx
  __int64 v186; // rcx
  int v187; // edi
  __int64 v188; // rax
  int v189; // edi
  __int64 v190; // rdi
  double *v191; // r10
  int v192; // edi
  __int64 v193; // rax
  int v194; // edi
  __int64 v195; // rdi
  double *v196; // r10
  __int64 v197; // rdi
  double *v198; // r10
  __int64 v199; // rax
  _BYTE *v200; // rcx
  double v201; // rax
  int v202; // esi
  double *v203; // rdi
  __int64 v204; // r8
  __int64 v205; // rsi
  __int64 v206; // rcx
  int v207; // r10d
  __int64 v208; // rax
  double *v209; // r13
  __int64 v210; // rdx
  int v211; // edi
  __int64 v212; // rdx
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rbx
  int v217; // edi
  void *v218; // rdi
  const void *v219; // rsi
  __int64 v220; // rax
  void *v221; // rdi
  const void *v222; // rsi
  CoinFactorization *v223; // rdi
  int v224; // esi
  __int64 j; // rbx
  __int64 v226; // rax
  int v227; // eax
  int v228; // esi
  CoinIndexedVector *v229; // rdi
  __int64 v230; // rax
  int *v231; // r8
  int *v232; // r9
  const int *v233; // r15
  int *v234; // rdx
  double *v235; // rbx
  double *v236; // rcx
  ClpNetworkBasis *v237; // rbx
  CoinFactorization *v238; // rdi
  __int64 v239; // rax
  int v240; // edx
  int v241; // esi
  int v242; // eax
  char *v243; // r13
  double *v244; // r8
  double *v245; // rsi
  __int64 v246; // rcx
  double *v247; // rax
  __int64 v248; // rdx
  int *v249; // rax
  unsigned __int64 v250; // rcx
  __int64 v251; // rdx
  __int64 v252; // rax
  __int64 v253; // rbx
  int v254; // edi
  __int64 v255; // rax
  int v256; // edx
  int v257; // esi
  int v258; // ecx
  int *v259; // rax
  int v260; // r10d
  double *v261; // r11
  double *v262; // rax
  double *v263; // r8
  __int64 v264; // rax
  __int64 v265; // rdx
  __int64 v266; // rbx
  __int64 v267; // rax
  double v268; // xmm4_8
  __int64 v269; // rsi
  __int64 v270; // r13
  double *v271; // r9
  double *v272; // r8
  int *v273; // r10
  __int64 v274; // rax
  double v275; // xmm5_8
  double *v276; // r11
  __int64 v277; // rdi
  _BYTE *v278; // rcx
  char v279; // dl
  _BYTE *v280; // rcx
  __int64 v281; // rdx
  int v282; // esi
  double *v283; // rbx
  __int64 v284; // rax
  double *v285; // rdi
  double *v286; // r8
  int *v287; // r10
  _QWORD *v288; // r9
  __int64 v289; // rax
  _BYTE *v290; // rdx
  double *v291; // rbx
  __int64 v292; // rax
  unsigned int *v293; // rdi
  __int64 v294; // rsi
  __int64 v295; // rax
  int v296; // r15d
  int v297; // ebx
  __int64 v298; // rax
  __int64 v299; // rdx
  int *v300; // r14
  __int64 v301; // r13
  __int64 v302; // rax
  __int64 v303; // rcx
  int v304; // esi
  __int64 v305; // rdi
  int v306; // edx
  __int64 v307; // rdx
  double v308; // xmm3_8
  __int64 v309; // [rsp+0h] [rbp-100h]
  __int64 v310; // [rsp+8h] [rbp-F8h]
  char v312; // [rsp+16h] [rbp-EAh]
  int n; // [rsp+18h] [rbp-E8h]
  __int64 na; // [rsp+18h] [rbp-E8h]
  unsigned int v316; // [rsp+20h] [rbp-E0h]
  __int64 v317; // [rsp+20h] [rbp-E0h]
  unsigned int v318; // [rsp+28h] [rbp-D8h]
  int v319; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v320; // [rsp+30h] [rbp-D0h]
  __int64 v321; // [rsp+38h] [rbp-C8h]
  __int64 v322; // [rsp+38h] [rbp-C8h]
  size_t v323; // [rsp+40h] [rbp-C0h]
  __int64 v324; // [rsp+40h] [rbp-C0h]
  int v325; // [rsp+48h] [rbp-B8h]
  __int64 v326; // [rsp+48h] [rbp-B8h]
  __int64 v327; // [rsp+50h] [rbp-B0h]
  __int64 v328; // [rsp+58h] [rbp-A8h]
  __int64 v329; // [rsp+58h] [rbp-A8h]
  int *v330; // [rsp+60h] [rbp-A0h]
  int *v331; // [rsp+60h] [rbp-A0h]
  __int64 v332; // [rsp+68h] [rbp-98h]
  void *v333; // [rsp+68h] [rbp-98h]
  _DWORD *s; // [rsp+70h] [rbp-90h]
  int *sa; // [rsp+70h] [rbp-90h]
  __int64 v336; // [rsp+78h] [rbp-88h]
  int v337; // [rsp+78h] [rbp-88h]
  _DWORD *v338; // [rsp+80h] [rbp-80h] BYREF
  int *v339; // [rsp+88h] [rbp-78h]
  int *v340; // [rsp+90h] [rbp-70h]
  int *v341; // [rsp+98h] [rbp-68h]
  double *v342; // [rsp+A0h] [rbp-60h]
  double *v343; // [rsp+A8h] [rbp-58h]
  int v344; // [rsp+B0h] [rbp-50h]
  int v345; // [rsp+B4h] [rbp-4Ch]
  int v346[2]; // [rsp+B8h] [rbp-48h]
  int v347; // [rsp+C0h] [rbp-40h] BYREF
  int v348; // [rsp+C4h] [rbp-3Ch] BYREF
  double v349[7]; // [rsp+C8h] [rbp-38h] BYREF

  v12 = *((_DWORD *)a2 + 26);
  v345 = v12;
  if ( !v12 )
    return (unsigned int)v345;
  v14 = *((_QWORD *)this + 2);
  v16 = a2;
  v17 = *((double **)a2 + 24);
  v18 = *((_DWORD *)a2 + 27);
  v19 = *((_QWORD *)this + 1);
  if ( v14 )
  {
    *(_DWORD *)(v14 + 56) = -99;
    v20 = *((_DWORD *)a2 + 77) == 0;
    v21 = *((int **)a2 + 157);
    v312 = 0;
    v343 = v17;
    v330 = v21;
    v22 = *((_DWORD *)a2 + 77) == 0 ? 2 : 10;
    if ( a4 )
      v22 = v20 ? 6 : 14;
    *(_DWORD *)(v14 + 96) = v22;
    v23 = v12 >> 31;
    v316 = a3 & 0xFFFFFFFD;
    v24 = v12 / 8;
    v25 = v12 + ((unsigned int)(v12 >> 31) >> 29);
    v26 = (unsigned int)(v12 - 1);
    LODWORD(v341) = v24;
    v325 = v26;
    v309 = v26;
    v310 = 4 * v26;
    v328 = (__int64)&v21[v26 + 1];
    LODWORD(v340) = (v25 & 7) - (v23 >> 29);
    v27 = (unsigned int)((v22 >> 3) - 1);
    v327 = 8 * (v27 + 1);
    v28 = 1;
    v323 = 8 * v27;
    if ( v24 > 0 )
      v28 = v24;
    v29 = v28;
    v344 = v28;
    v30 = v28 & 0xFFFFFFFC;
    v319 = v30;
    v318 = v29 >> 2;
    n = v24 - v30;
    v321 = 32 * v30;
    if ( !v19 )
      goto LABEL_110;
LABEL_8:
    if ( *(int *)(v19 + 176) >= -98 )
    {
LABEL_111:
      if ( v312 && *((int *)v16 + 325) < 0 && a3 > 0 )
        ClpSimplexDual::changeBounds(v16, 3, nullptr, v349);
      return *(unsigned int *)(*((_QWORD *)this + 2) + 56LL);
    }
LABEL_9:
    v31 = *((_QWORD **)v16 + 132);
    v347 = 0;
    *(_QWORD *)v346 = *v31;
    v32 = (*(__int64 (__fastcall **)(double *, ClpSimplex *, _QWORD, _QWORD))(*(_QWORD *)v343 + 464LL))(v343, v16, 0, 0);
    v33 = v347;
    if ( v32 )
    {
      if ( v345 > 0 )
      {
        v34 = v330;
        v35 = *(double **)v346;
        do
        {
          v36 = *v34;
          if ( *v34 >= v18 )
          {
            v347 = v33 + 1;
            *((_DWORD *)v35 + v33) = v36 - v18;
            v33 = v347;
          }
          ++v34;
        }
        while ( (int *)v328 != v34 );
        v37 = v330;
        while ( 1 )
        {
          v38 = *v37;
          if ( *v37 < v18 )
          {
            if ( v38 < 0 )
            {
              v122 = v345;
              v347 = 0;
              v33 = 0;
              v123 = 0;
              do
              {
                if ( (*(_BYTE *)(*((_QWORD *)v16 + 33) + v123 + *((_DWORD *)v16 + 27)) & 7) == 1 )
                {
                  v347 = v33 + 1;
                  *((_DWORD *)v35 + v33) = v123;
                  v33 = v347;
                }
                ++v123;
              }
              while ( v123 != v122 );
              goto LABEL_147;
            }
            v39 = v347++;
            *((_DWORD *)v35 + v39) = v38;
          }
          if ( (int *)v328 == ++v37 )
          {
            v40 = v347;
            *(_QWORD *)v346 = v35;
            goto LABEL_21;
          }
        }
      }
      v40 = v347;
    }
    else
    {
      v121 = v345;
      if ( v345 > 0 )
      {
        v35 = *(double **)v346;
        do
        {
          if ( (*(_BYTE *)(*((_QWORD *)v16 + 33) + (int)v32 + *((_DWORD *)v16 + 27)) & 7) == 1 )
          {
            v347 = v33 + 1;
            *((_DWORD *)v35 + v33) = v32;
            v33 = v347;
          }
          LODWORD(v32) = v32 + 1;
        }
        while ( (_DWORD)v32 != v121 );
LABEL_147:
        *(_QWORD *)v346 = v35;
      }
      (*(void (__fastcall **)(double *, ClpSimplex *, _QWORD, int *))(*(_QWORD *)v343 + 320LL))(v343, v16, 0, &v347);
      v40 = v347;
    }
LABEL_21:
    if ( *((_DWORD *)v16 + 339) >= v40 )
    {
      if ( v345 <= v40 )
        goto LABEL_23;
      v124 = v40 - 1;
      v125 = v40 - 1;
      v126 = v345 - v40;
      if ( (int)v33 <= v40 - 1 )
      {
        v339 = (int *)v126;
        v127 = 4LL * v40;
        v128 = v40 - v33;
        v129 = 4 * (v40 + (__int64)v126);
        LOBYTE(v342) = v127 - 16 >= v129;
        if ( (v129 - 16 >= v127) | (unsigned __int8)v342 && v128 > 0xC )
        {
          v130 = *(double **)v346;
          v131 = ((unsigned __int64)(*(_QWORD *)v346 + v127 - 16) >> 2) & 3;
          if ( (int)v131 + 3 > (unsigned int)(v124 - v33) )
            goto LABEL_165;
          if ( (_DWORD)v131 )
          {
            *(_DWORD *)(*(_QWORD *)v346 + 4LL * (v126 + v124)) = *(_DWORD *)(*(_QWORD *)v346 + 4LL * v124);
            v125 = v40 - 2;
            if ( (_DWORD)v131 != 1 )
            {
              *((_DWORD *)v130 + v126 + v125) = *((_DWORD *)v130 + v125);
              v125 = v40 - 3;
              if ( (_DWORD)v131 != 2 )
              {
                *((_DWORD *)v130 + v126 + v125) = *((_DWORD *)v130 + v125);
                v125 = v40 - 4;
              }
            }
          }
          v132 = 4 * ~v131;
          v133 = v128 - v131;
          v134 = (v128 - (unsigned int)v131) >> 2;
          v135 = 0;
          v136 = v129 + v132 - 12;
          v137 = v127 + v132 - 12;
          v138 = 0;
          v139 = (char *)v130 + v137;
          v140 = (char *)v130 + v136;
          do
          {
            si128 = (__m128)_mm_load_si128((const __m128i *)&v139[v138]);
            ++v135;
            *(__m128 *)&v140[v138] = si128;
            v138 -= 16;
          }
          while ( v135 < v134 );
          *(_QWORD *)v346 = v130;
          v125 -= v133 & 0xFFFFFFFC;
          if ( (v133 & 0xFFFFFFFC) != v133 )
          {
LABEL_165:
            v141 = *(double **)v346;
            *(_DWORD *)(*(_QWORD *)v346 + 4LL * (v126 + v125)) = *(_DWORD *)(*(_QWORD *)v346 + 4LL * v125);
            if ( (int)v33 <= v125 - 1 )
            {
              *((_DWORD *)v141 + v126 + v125 - 1) = *((_DWORD *)v141 + v125 - 1);
              if ( (int)v33 <= v125 - 2 )
              {
                *((_DWORD *)v141 + v126 + v125 - 2) = *((_DWORD *)v141 + v125 - 2);
                if ( (int)v33 <= v125 - 3 )
                {
                  *((_DWORD *)v141 + v126 + v125 - 3) = *((_DWORD *)v141 + v125 - 3);
                  v142 = v125 - 4;
                  if ( (int)v33 <= v125 - 4 )
                  {
                    v143 = v125 - 5;
                    *((_DWORD *)v141 + v126 + v142) = *((_DWORD *)v141 + v142);
                    if ( (int)v33 <= v143 )
                      *((_DWORD *)v141 + v126 + v143) = *((_DWORD *)v141 + v143);
                  }
                }
              }
            }
          }
        }
        else
        {
          v182 = (unsigned int)(v124 - v33);
          v183 = v339;
          v184 = (_DWORD *)(*(_QWORD *)v346 + v127 - 4);
          v185 = *(double **)v346;
          v186 = (__int64)&v184[-v182 - 1];
          do
          {
            v184[(_QWORD)v183] = *v184;
            --v184;
          }
          while ( (_DWORD *)v186 != v184 );
          *(_QWORD *)v346 = v185;
        }
      }
      v144 = v345;
      v347 = v345;
      if ( v345 <= 0 )
      {
        v42 = 0;
        LODWORD(v33) = 0;
        v342 = *(double **)v346;
        v41 = v345;
        goto LABEL_24;
      }
      LODWORD(v33) = 0;
      v145 = 0;
      v146 = *(double **)v346;
      while ( 2 )
      {
        v42 = 4LL * (int)v33;
        v147 = (double *)((char *)v146 + v42);
        v148 = (_BYTE *)(*((_QWORD *)v16 + 33) + v145 + *((_DWORD *)v16 + 27));
        if ( (*v148 & 7) == 1 )
        {
LABEL_176:
          v42 += 4;
          *(_DWORD *)v147 = v145;
          LODWORD(v33) = v33 + 1;
          v147 = (double *)((char *)v146 + v42);
        }
        else if ( v126 )
        {
          --v126;
          *v148 = *v148 & 0xF8 | 1;
          goto LABEL_176;
        }
        if ( ++v145 == v144 )
        {
          *(_QWORD *)v346 = v146;
          v342 = v147;
          v41 = v347 - v33;
          goto LABEL_24;
        }
        continue;
      }
    }
    v347 = v33;
    if ( v18 <= 0 )
      goto LABEL_140;
    v117 = 0;
    v118 = (unsigned int)(v18 - 1) + 1LL;
    v119 = *(double **)v346;
    while ( 1 )
    {
      while ( 1 )
      {
        v120 = (_BYTE *)(v117 + *((_QWORD *)v16 + 33));
        if ( (*v120 & 7) == 1 )
          break;
LABEL_135:
        if ( v118 == ++v117 )
          goto LABEL_139;
      }
      if ( v347 >= v345 )
      {
        *v120 = *v120 & 0xF8 | 4;
        goto LABEL_135;
      }
      ++v117;
      ++v347;
      if ( v118 == v117 )
      {
LABEL_139:
        *(_QWORD *)v346 = v119;
LABEL_140:
        v347 = v33;
        (*(void (__fastcall **)(double *, ClpSimplex *, _QWORD, int *))(*(_QWORD *)v343 + 320LL))(v343, v16, 0, &v347);
        v40 = v347;
LABEL_23:
        v41 = v40 - v33;
        v42 = 4LL * (int)v33;
        v342 = (double *)(v42 + *(_QWORD *)v346);
LABEL_24:
        v348 = v41;
        v339 = &v348;
        v43 = (*(__int64 (__fastcall **)(double *))(*(_QWORD *)v343 + 136LL))(v343);
        v44 = *((_QWORD *)this + 2);
        v45 = 3 * (v347 + v33 + v43) + 20000;
        v46 = *((_DWORD *)v16 + 77);
        LODWORD(v338) = v45;
        LODWORD(v349[0]) = v46;
        (*(void (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v44 + 104LL))(v44, v349, 0);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 144LL))(
          *((_QWORD *)this + 2),
          (unsigned int)v345,
          (unsigned int)(v33 + v348),
          (unsigned int)v338,
          (unsigned int)(2 * (_DWORD)v338));
        v332 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
        s = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2));
        v336 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 80LL))(*((_QWORD *)this + 2));
        v47 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
        v48 = *((_QWORD *)this + 2);
        v338 = (_DWORD *)v47;
        v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 72LL))(v48);
        v50 = v338;
        if ( (int)v341 > 0 )
        {
          si128.m128_u64[0] = 0;
          v51 = v338;
          v52 = (__int64)&v338[v323 + 8];
          v53 = *(double **)v346;
          do
          {
            *v51 = 0;
            v51 += 2;
            *(v51 - 1) = 0;
          }
          while ( (_OWORD *)v52 != v51 );
          *(_QWORD *)v346 = v53;
          v54 = &v50[v327];
          switch ( (int)v340 )
          {
            case 1:
              v97 = (int)v341 <= 3;
              *v54 = 0;
              if ( v97 )
                goto LABEL_130;
              goto LABEL_83;
            case 2:
              goto LABEL_81;
            case 3:
              goto LABEL_117;
            case 4:
              goto LABEL_119;
            case 5:
              goto LABEL_122;
            case 6:
              goto LABEL_125;
            case 7:
              goto LABEL_128;
            default:
              goto LABEL_82;
          }
        }
        switch ( (int)v340 )
        {
          case 1:
            *v338 = 0;
            v104 = (_DWORD *)v49;
            goto LABEL_90;
          case 2:
            v54 = v338;
            goto LABEL_81;
          case 3:
            v54 = v338;
LABEL_117:
            v54[2] = 0;
            goto LABEL_81;
          case 4:
            v54 = v338;
LABEL_119:
            v54[3] = 0;
            goto LABEL_120;
          case 5:
            v54 = v338;
LABEL_122:
            v54[4] = 0;
            goto LABEL_123;
          case 6:
            v54 = v338;
LABEL_125:
            v54[5] = 0;
            goto LABEL_126;
          case 7:
            v54 = v338;
LABEL_128:
            v54[6] = 0;
            v54[5] = 0;
LABEL_126:
            v54[4] = 0;
LABEL_123:
            v54[3] = 0;
LABEL_120:
            v54[2] = 0;
LABEL_81:
            *(_QWORD *)v54 = 0;
            if ( (int)v341 <= 0 )
            {
              v104 = (_DWORD *)v49;
              goto LABEL_90;
            }
LABEL_82:
            if ( (int)v341 <= 3 )
            {
LABEL_130:
              v105 = (_OWORD *)v49;
              v106 = (int)v341;
            }
            else
            {
LABEL_83:
              v99 = v49;
              v338 = (_DWORD *)(v49 + 32);
              si128.m128_u64[0] = 0;
              v100 = *(double **)v346;
              a6 = (__m128i)_mm_loadh_ps((const double *)&v338);
              v101 = 0;
              do
              {
                v102 = _mm_load_si128((const __m128i *)&xmmword_28A1B0);
                ++v101;
                v99 += 128;
                *(_OWORD *)(v99 - 128) = 0;
                v103 = (__m128)_mm_add_epi64(v102, a6);
                a6 = _mm_add_epi64(a6, (__m128i)xmmword_28A1A0);
                *(_OWORD *)(v99 - 112) = 0;
                *(_OWORD *)(v99 - 96) = 0;
                *(_OWORD *)(v99 - 80) = 0;
                *(_OWORD *)(v99 - 64) = 0;
                *(_OWORD *)(v99 - 48) = 0;
                *(_OWORD *)(v99 - 32) = 0;
                *(_OWORD *)(v99 - 16) = 0;
              }
              while ( v101 < v318 );
              a12 = _mm_movehl_ps(a12, v103);
              *(_QWORD *)v346 = v100;
              v104 = (_DWORD *)a12.m128_u64[0];
              v105 = (_OWORD *)(v49 + v321);
              if ( v319 == v344 )
                goto LABEL_90;
              v106 = n;
            }
            si128.m128_u64[0] = 0;
            v104 = v105 + 2;
            *v105 = 0;
            v105[1] = 0;
            if ( v106 != 1 )
            {
              v104 = v105 + 4;
              v105[2] = 0;
              v105[3] = 0;
              if ( v106 != 2 )
              {
                v105[4] = 0;
                v104 = v105 + 6;
                v105[5] = 0;
              }
            }
LABEL_90:
            switch ( (int)v340 )
            {
              case 1:
                goto LABEL_97;
              case 2:
                goto LABEL_96;
              case 3:
                goto LABEL_95;
              case 4:
                goto LABEL_94;
              case 5:
                goto LABEL_93;
              case 6:
                goto LABEL_92;
              case 7:
                v104[6] = 0;
LABEL_92:
                v104[5] = 0;
LABEL_93:
                v104[4] = 0;
LABEL_94:
                v104[3] = 0;
LABEL_95:
                v104[2] = 0;
LABEL_96:
                v104[1] = 0;
LABEL_97:
                *v104 = 0;
                break;
              default:
                break;
            }
LABEL_98:
            if ( (int)v33 > 0 )
            {
              LODWORD(v338) = v33;
              si128.m128_u64[0] = 0xBFF0000000000000LL;
              v107 = 0;
              v108 = (unsigned int)(v33 - 1) + 1LL;
              v109 = *(double **)v346;
              do
              {
                v110 = *((int *)v109 + v107);
                *((_DWORD *)v109 + v107) = v110 + v18;
                s[v107] = v110;
                *(_DWORD *)(v336 + 4 * v107) = v107;
                *(_QWORD *)(v332 + 8 * v107) = 0xBFF0000000000000LL;
                v50[v110] = 1;
                *(_DWORD *)(v49 + 4 * v107++) = 1;
              }
              while ( v108 != v107 );
              LODWORD(v33) = (_DWORD)v338;
            }
            v111 = v343;
            *(_DWORD *)(v42 + v336) = v33;
            v112 = *(_QWORD *)v111;
            v348 = v347 - v33;
            (*(void (__fastcall **)(double *, ClpSimplex *, double *, int *, _DWORD *, __int64, double, double, _DWORD *, __int64, __int64))(v112 + 144))(
              v111,
              v16,
              v342,
              v339,
              s,
              v42 + v336,
              *(double *)si128.m128_u64,
              *(double *)a6.m128i_i64,
              v50,
              v42 + v49,
              v332);
            v113 = v348 + v33;
            v347 = v113;
            if ( v113 < v345 )
              memset((void *)(*(_QWORD *)v346 + 4LL * v113), 255, 4LL * (unsigned int)(v325 - v113) + 4);
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2));
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 160LL))(*((_QWORD *)this + 2));
            v114 = *((_DWORD **)this + 2);
            v115 = v114[14];
            if ( v115 == -1 )
            {
              v116 = v114[24];
              if ( v116 % 3 )
              {
                v114[14] = -99;
                v114[24] = v116 - v116 % 3;
                goto LABEL_109;
              }
            }
            else
            {
              if ( v115 == -99 )
                goto LABEL_109;
              if ( !v115 && v347 == v345 )
              {
                (*(void (__fastcall **)(_DWORD *, _QWORD, int *))(*(_QWORD *)v114 + 168LL))(v114, *(_QWORD *)v346, v330);
                goto LABEL_109;
              }
            }
            if ( v316 )
              goto LABEL_109;
            (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)v114 + 176LL))(
              v114,
              *(_QWORD *)v346,
              (unsigned int)v18);
            v149 = *((_QWORD *)v16 + 123);
            v150 = *((_QWORD *)v16 + 126);
            v151 = *((_QWORD *)v16 + 150);
            v152 = *((_QWORD *)v16 + 124);
            v153 = *((_QWORD *)v16 + 127);
            v342 = *((double **)v16 + 151);
            v154 = *((double *)v16 + 94);
            if ( v18 <= 0 )
            {
              if ( v345 <= 0 )
                goto LABEL_241;
              v159 = *((_QWORD *)v16 + 33);
              if ( a4 )
                goto LABEL_187;
            }
            else
            {
              v155 = 0;
              v156 = (unsigned int)(v18 - 1) + 1LL;
              if ( a4 )
              {
                v157 = *(double **)v346;
                do
                {
                  v158 = (_BYTE *)(v155 + *((_QWORD *)v16 + 33));
                  if ( (*v158 & 7) == 1 )
                    *v158 = *v158 & 0xF8 | 4;
                  ++v155;
                }
                while ( v156 != v155 );
                *(_QWORD *)v346 = v157;
                if ( v345 <= 0 )
                  goto LABEL_241;
                v159 = *((_QWORD *)v16 + 33);
LABEL_187:
                v160 = v345;
                for ( i = 0; i != v160; ++i )
                {
                  v162 = (_BYTE *)(v159 + i + *((_DWORD *)v16 + 27));
                  if ( (*v162 & 7) == 1 )
                  {
                    *v162 = *v162 & 0xF8 | 4;
                    v159 = *((_QWORD *)v16 + 33);
                  }
                }
                v163 = v309 + 1;
                goto LABEL_192;
              }
              v171 = *(double **)v346;
              do
              {
                v172 = (_BYTE *)(v155 + *((_QWORD *)v16 + 33));
                if ( (*v172 & 7) == 1 )
                {
                  a6.m128i_i64[0] = *(_QWORD *)(v149 + 8 * v155);
                  v173 = *v172 & 0xF8;
                  v174 = *(double *)(v150 + 8 * v155);
                  if ( *(double *)a6.m128i_i64 <= -v154 && v154 <= v174 )
                  {
                    *v172 = v173;
                  }
                  else
                  {
                    v175 = *(double *)(v151 + 8 * v155);
                    si128.m128_u64[0] = fabs(v175 - *(double *)a6.m128i_i64);
                    if ( fabs(v175 - v174) > *(double *)si128.m128_u64 )
                    {
                      *v172 = v173 | 3;
                      *(_QWORD *)(v151 + 8 * v155) = a6.m128i_i64[0];
                    }
                    else
                    {
                      *v172 = v173 | 2;
                      *(double *)(v151 + 8 * v155) = v174;
                    }
                  }
                }
                ++v155;
              }
              while ( v156 != v155 );
              *(_QWORD *)v346 = v171;
              if ( v345 <= 0 )
              {
LABEL_241:
                *(_DWORD *)(*((_QWORD *)this + 2) + 56LL) = -99;
                goto LABEL_200;
              }
              v159 = *((_QWORD *)v16 + 33);
            }
            v177 = 0;
            v163 = v309 + 1;
            do
            {
              v178 = (_BYTE *)(v159 + (int)v177 + *((_DWORD *)v16 + 27));
              if ( (*v178 & 7) == 1 )
              {
                a6.m128i_i64[0] = *(_QWORD *)(v149 + 8 * v177);
                v179 = *v178 & 0xF8;
                v180 = *(double *)(v150 + 8 * v177);
                if ( *(double *)a6.m128i_i64 <= -v154 && v154 <= v180 )
                {
                  *v178 = v179;
                  v159 = *((_QWORD *)v16 + 33);
                }
                else
                {
                  v181 = *(double *)(v151 + 8 * v177);
                  si128.m128_u64[0] = fabs(v181 - *(double *)a6.m128i_i64);
                  if ( fabs(v181 - v180) > *(double *)si128.m128_u64 )
                  {
                    *v178 = v179 | 3;
                    *(_QWORD *)(v151 + 8 * v177) = a6.m128i_i64[0];
                  }
                  else
                  {
                    *v178 = v179 | 2;
                    *(double *)(v151 + 8 * v177) = v180;
                  }
                  v159 = *((_QWORD *)v16 + 33);
                }
              }
              ++v177;
            }
            while ( v163 != v177 );
LABEL_192:
            v164 = *(double **)v346;
            v165 = *(_QWORD *)v346 + v310 + 4;
            while ( 1 )
            {
              v166 = *(int *)v164;
              v164 = (double *)((char *)v164 + 4);
              *(_BYTE *)(v159 + v166) = *(_BYTE *)(v159 + v166) & 0xF8 | 1;
              if ( v164 == (double *)v165 )
                break;
              v159 = *((_QWORD *)v16 + 33);
            }
            v167 = v342;
            *(_DWORD *)(*((_QWORD *)this + 2) + 56LL) = -99;
            v168 = 0;
            do
            {
              if ( (*(_BYTE *)(*((_QWORD *)v16 + 33) + (int)v168 + *((_DWORD *)v16 + 27)) & 7) != 1 )
              {
                si128.m128_u64[0] = *(_QWORD *)(v152 + 8 * v168);
                if ( *(double *)si128.m128_u64 == *(double *)(v153 + 8 * v168) )
                {
                  v167[v168] = *(double *)si128.m128_u64;
                  v169 = (_BYTE *)(*((_QWORD *)v16 + 33) + *((_DWORD *)v16 + 27) + (int)v168);
                  *v169 = *v169 & 0xF8 | 5;
                }
              }
              ++v168;
            }
            while ( v163 != v168 );
LABEL_200:
            if ( v18 > 0 )
            {
              v170 = 0;
              do
              {
                if ( (*(_BYTE *)(*((_QWORD *)v16 + 33) + v170) & 7) != 1 )
                {
                  si128.m128_u64[0] = *(_QWORD *)(v149 + 8 * v170);
                  if ( *(double *)si128.m128_u64 == *(double *)(v150 + 8 * v170) )
                  {
                    *(_QWORD *)(v151 + 8 * v170) = si128.m128_u64[0];
                    *(_BYTE *)(v170 + *((_QWORD *)v16 + 33)) = *(_BYTE *)(v170 + *((_QWORD *)v16 + 33)) & 0xF8 | 5;
                  }
                }
                ++v170;
              }
              while ( v170 != (unsigned int)(v18 - 1) + 1LL );
            }
            v312 = 1;
LABEL_109:
            v19 = *((_QWORD *)this + 1);
            if ( v19 )
              goto LABEL_8;
LABEL_110:
            if ( *(int *)(*((_QWORD *)this + 2) + 56LL) >= -98 )
              goto LABEL_111;
            break;
          default:
            goto LABEL_98;
        }
        goto LABEL_9;
      }
    }
  }
  v176 = *(_DWORD *)(v19 + 68);
  if ( v176 > 1 && 10 * *(_DWORD *)(v19 + 920) > v176 + 10 )
  {
    *(double *)si128.m128_u64 = 1.1 * *(double *)(v19 + 16);
    *(_QWORD *)(v19 + 16) = si128.m128_u64[0];
  }
  if ( *(_QWORD *)this )
  {
    *(_DWORD *)(v19 + 176) = 0;
    *(_DWORD *)(v19 + 68) = 0;
    goto LABEL_222;
  }
  v55 = v345;
  *(_DWORD *)(v19 + 176) = -99;
  v56 = *((int **)a2 + 157);
  LODWORD(v338) = v18;
  v337 = 0;
  sa = v56;
  v320 = v18 + v55;
  v344 = v18 + v55;
  v322 = 4LL * v18;
  v57 = (unsigned int)(v55 - 1);
  na = 4LL * (unsigned int)(v18 + v55 - 1) + 4;
  v58 = (__int64)&v56[v57 + 1];
  v326 = v57 + 1;
  v324 = 4 * (v57 + 1);
  v59 = (unsigned int)(v18 - 1);
  v331 = (int *)v58;
  v60 = (double *)v16;
  v329 = v59;
  v317 = 4 * v59;
  do
  {
    v61 = *((_QWORD **)v60 + 132);
    ++v337;
    v348 = 0;
    *(_QWORD *)v346 = *v61;
    v62 = (*(__int64 (__fastcall **)(double *, double *, _QWORD, _QWORD))(*(_QWORD *)v17 + 464LL))(v17, v60, 0, 0);
    v63 = v348;
    if ( v62 )
    {
      if ( v345 > 0 )
      {
        v64 = sa;
        v65 = (int)v338;
        v66 = *(double **)v346;
        do
        {
          v67 = *v64;
          if ( *v64 >= v65 )
          {
            v348 = v63 + 1;
            *((_DWORD *)v66 + v63) = v67 - v65;
            v63 = v348;
          }
          ++v64;
        }
        while ( v331 != v64 );
        v68 = sa;
        v69 = (int)v338;
        while ( 1 )
        {
          v70 = *v68;
          if ( *v68 < v69 )
          {
            if ( v70 < 0 )
            {
              v241 = v345;
              v348 = 0;
              v63 = 0;
              v242 = 0;
              v203 = v66;
              do
              {
                if ( (*(_BYTE *)(*((_QWORD *)v60 + 33) + v242 + *((_DWORD *)v60 + 27)) & 7) == 1 )
                {
                  v348 = v63 + 1;
                  *((_DWORD *)v66 + v63) = v242;
                  v63 = v348;
                }
                ++v242;
              }
              while ( v242 != v241 );
              goto LABEL_303;
            }
            v71 = v348++;
            *((_DWORD *)v66 + v71) = v70;
          }
          if ( v331 == ++v68 )
          {
            v72 = v348;
            *(_QWORD *)v346 = v66;
            goto LABEL_41;
          }
        }
      }
      v72 = v348;
    }
    else
    {
      v202 = v345;
      if ( v345 > 0 )
      {
        v203 = *(double **)v346;
        do
        {
          if ( (*(_BYTE *)(*((_QWORD *)v60 + 33) + (int)v62 + *((_DWORD *)v60 + 27)) & 7) == 1 )
          {
            v348 = v63 + 1;
            *((_DWORD *)v203 + v63) = v62;
            v63 = v348;
          }
          LODWORD(v62) = v62 + 1;
        }
        while ( (_DWORD)v62 != v202 );
LABEL_303:
        *(_QWORD *)v346 = v203;
      }
      (*(void (__fastcall **)(double *, double *, _QWORD, int *))(*(_QWORD *)v17 + 320LL))(v17, v60, 0, &v348);
      v72 = v348;
    }
LABEL_41:
    if ( *((_DWORD *)v60 + 339) >= v72 )
      goto LABEL_42;
    v348 = v63;
    if ( (int)v338 <= 0 )
      goto LABEL_295;
    v197 = v329 + 1;
    v198 = *(double **)v346;
    v199 = 0;
    do
    {
      while ( 1 )
      {
        v200 = (_BYTE *)(v199 + *((_QWORD *)v60 + 33));
        if ( (*v200 & 7) == 1 )
          break;
LABEL_290:
        if ( v197 == ++v199 )
          goto LABEL_294;
      }
      if ( v348 >= v345 )
      {
        *v200 = *v200 & 0xF8 | 4;
        goto LABEL_290;
      }
      ++v199;
      ++v348;
    }
    while ( v197 != v199 );
LABEL_294:
    *(_QWORD *)v346 = v198;
LABEL_295:
    v201 = *v17;
    v348 = v63;
    (*(void (__fastcall **)(double *, double *, _QWORD, int *))(*(_QWORD *)&v201 + 320LL))(v17, v60, 0, &v348);
LABEL_42:
    v73 = *((const void **)v60 + 24);
    v74 = *(ClpNetworkBasis **)this;
    if ( v73
      && (v333 = __dynamic_cast(
                   v73,
                   (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                   (const struct __class_type_info *)&`typeinfo for'ClpNetworkMatrix,
                   0)) != nullptr )
    {
      v75 = *((CoinFactorization **)this + 1);
      *((_DWORD *)v75 + 288) = 0;
      if ( !v74
        || (ClpNetworkBasis::~ClpNetworkBasis(v74),
            operator delete(v74),
            v75 = *((CoinFactorization **)this + 1),
            *(_QWORD *)this = 0,
            v75) )
      {
        CoinFactorization::maximumPivots(v75, 1);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), 1);
      }
    }
    else
    {
      if ( v74 )
      {
        ClpNetworkBasis::~ClpNetworkBasis(v74);
        operator delete(v74);
        *(_QWORD *)this = 0;
      }
      v333 = nullptr;
    }
    v76 = *((_QWORD *)this + 1);
    v341 = (int *)v349;
    v77 = *(_DWORD *)(v76 + 176);
    v340 = (int *)(int)v63;
    if ( v77 == -99 )
    {
      v343 = v60;
      while ( 1 )
      {
        while ( 1 )
        {
          CoinFactorization::gutsOfDestructor((CoinFactorization *)v76, 1);
          CoinFactorization::gutsOfInitialize(*((CoinFactorization **)this + 1), 2);
          LODWORD(v349[0]) = v348 - v63;
          v78 = (__int64)v340;
          v342 = (double *)(4LL * (_QWORD)v340 + *(_QWORD *)v346);
          v79 = v63 + (*(__int64 (__fastcall **)(double *, double *, int *))(*(_QWORD *)v17 + 136LL))(v17, v342, v341);
          if ( *((_DWORD *)v343 + 77) )
          {
            LODWORD(v63) = v348 - LODWORD(v349[0]);
            v80 = v348;
            v78 = v348 - LODWORD(v349[0]);
            v340 = (int *)(v348 - LODWORD(v349[0]));
            v342 = (double *)(v78 * 4 + *(_QWORD *)v346);
          }
          else
          {
            v80 = v63 + LODWORD(v349[0]);
          }
          CoinFactorization::getAreas(
            *((CoinFactorization **)this + 1),
            v345,
            v80,
            3 * (v348 + v79) + 20000,
            2 * (3 * (v348 + v79) + 20000));
          v81 = *((_QWORD *)this + 1);
          v82 = *(_QWORD *)(v81 + 208);
          v83 = *(_QWORD *)(v81 + 232);
          if ( *(int *)(v81 + 216) <= -2 )
            v82 = 0;
          if ( *(int *)(v81 + 240) <= -2 )
            v83 = 0;
          v84 = *(_DWORD *)(v81 + 32) + 1;
          if ( *(_DWORD *)(v81 + 32) != -1 )
          {
            v192 = *(_DWORD *)(v81 + 32) + 8;
            v193 = v82;
            if ( v84 >= 0 )
              v192 = *(_DWORD *)(v81 + 32) + 1;
            v194 = v192 >> 3;
            if ( v194 > 0 )
            {
              si128.m128_u64[0] = 0;
              v195 = (unsigned int)(v194 - 1);
              v196 = *(double **)v346;
              do
              {
                *(_OWORD *)v193 = 0;
                v193 += 32;
                *(_OWORD *)(v193 - 16) = 0;
              }
              while ( v82 + 32 * v195 + 32 != v193 );
              *(_QWORD *)v346 = v196;
              v193 = v82 + 32 * ((int)v195 + 1LL);
            }
            switch ( v84 % 8 )
            {
              case 1:
                goto LABEL_276;
              case 2:
                goto LABEL_275;
              case 3:
                goto LABEL_274;
              case 4:
                goto LABEL_273;
              case 5:
                goto LABEL_272;
              case 6:
                goto LABEL_271;
              case 7:
                *(_DWORD *)(v193 + 24) = 0;
LABEL_271:
                *(_DWORD *)(v193 + 20) = 0;
LABEL_272:
                *(_DWORD *)(v193 + 16) = 0;
LABEL_273:
                *(_DWORD *)(v193 + 12) = 0;
LABEL_274:
                *(_DWORD *)(v193 + 8) = 0;
LABEL_275:
                *(_DWORD *)(v193 + 4) = 0;
LABEL_276:
                *(_DWORD *)v193 = 0;
                break;
              default:
                break;
            }
          }
          v85 = *(_DWORD *)(v81 + 52) + 1;
          if ( *(_DWORD *)(v81 + 52) != -1 )
          {
            v187 = *(_DWORD *)(v81 + 52) + 8;
            v188 = v83;
            if ( v85 >= 0 )
              v187 = *(_DWORD *)(v81 + 52) + 1;
            v189 = v187 >> 3;
            if ( v189 > 0 )
            {
              si128.m128_u64[0] = 0;
              v190 = (unsigned int)(v189 - 1);
              v191 = *(double **)v346;
              do
              {
                *(_OWORD *)v188 = 0;
                v188 += 32;
                *(_OWORD *)(v188 - 16) = 0;
              }
              while ( v83 + 32 * v190 + 32 != v188 );
              *(_QWORD *)v346 = v191;
              v188 = v83 + 32 * ((int)v190 + 1LL);
            }
            switch ( v85 % 8 )
            {
              case 1:
                goto LABEL_262;
              case 2:
                goto LABEL_261;
              case 3:
                goto LABEL_260;
              case 4:
                goto LABEL_259;
              case 5:
                goto LABEL_258;
              case 6:
                goto LABEL_257;
              case 7:
                *(_DWORD *)(v188 + 24) = 0;
LABEL_257:
                *(_DWORD *)(v188 + 20) = 0;
LABEL_258:
                *(_DWORD *)(v188 + 16) = 0;
LABEL_259:
                *(_DWORD *)(v188 + 12) = 0;
LABEL_260:
                *(_DWORD *)(v188 + 8) = 0;
LABEL_261:
                *(_DWORD *)(v188 + 4) = 0;
LABEL_262:
                *(_DWORD *)v188 = 0;
                break;
              default:
                break;
            }
          }
          v86 = *(_QWORD *)(v81 + 600);
          v87 = *(_QWORD *)(v81 + 624);
          v88 = *(int **)(v81 + 648);
          if ( *(int *)(v81 + 608) <= -2 )
            v86 = 0;
          if ( *(int *)(v81 + 632) <= -2 )
            v87 = 0;
          if ( *(int *)(v81 + 656) <= -2 )
            v88 = nullptr;
          if ( (int)v63 > 0 )
          {
            v89 = 0;
            v90 = *(double **)v346;
            do
            {
              v91 = *((int *)v90 + v89);
              *(_DWORD *)(v87 + 4 * v89) = v91;
              v88[v89] = v89;
              *(_QWORD *)(v86 + 8 * v89) = 0xBFF0000000000000LL;
              *(_DWORD *)(v82 + 4 * v91) = 1;
              *(_DWORD *)(v83 + 4 * v89++) = 1;
            }
            while ( (unsigned int)(v63 - 1) + 1LL != v89 );
            *(_QWORD *)v346 = v90;
          }
          v92 = *v17;
          v339 = v88;
          v93 = v341;
          v88[v78] = v63;
          LODWORD(v349[0]) = v348 - v63;
          (*(void (__fastcall **)(double *, double *, double *, int *, __int64, int *, __int64, __int64, __int64))(*(_QWORD *)&v92 + 144LL))(
            v17,
            v343,
            v342,
            v93,
            v87,
            &v88[v78],
            v82,
            v83 + v78 * 4,
            v86);
          v94 = v63 + LODWORD(v349[0]);
          v348 = v63 + LODWORD(v349[0]);
          if ( (_DWORD)v63 + LODWORD(v349[0]) )
            v94 = *(_DWORD *)(v83 + 4LL * v94 - 4) + v339[v94 - 1];
          v95 = v94 - v345;
          v96 = *((CoinFactorization **)this + 1);
          *((_DWORD *)this + 17) = 0;
          *((_DWORD *)this + 18) = v95;
          v97 = *((_DWORD *)v96 + 288) <= 2;
          *((_DWORD *)v96 + 147) = v94;
          if ( v97 && *((_DWORD *)v96 + 8) == *((_DWORD *)v96 + 11) )
            CoinFactorization::preProcess(v96, 3, -1);
          else
            CoinFactorization::preProcess(v96, 2, -1);
          CoinFactorization::factor(*((CoinFactorization **)this + 1));
          v76 = *((_QWORD *)this + 1);
          *((_DWORD *)this + 16) = *(_DWORD *)(v76 + 72)
                                 - *(_DWORD *)(v76 + 864) * *(_DWORD *)(v76 + 864)
                                 - *(_DWORD *)(v76 + 704);
          v77 = *(_DWORD *)(v76 + 176);
          if ( v77 != -99 )
            break;
          *(double *)si128.m128_u64 = *(double *)(v76 + 16) + *(double *)(v76 + 16);
          *(_QWORD *)(v76 + 16) = si128.m128_u64[0];
        }
        if ( v77 != -1 )
        {
          v60 = v343;
          goto LABEL_74;
        }
        if ( *((_DWORD *)v343 + 77) && v337 <= 2 )
          break;
        if ( !*(_DWORD *)(v76 + 868) )
        {
          v60 = v343;
          goto LABEL_286;
        }
        *(_DWORD *)(v76 + 868) = 0;
        *(_DWORD *)(v76 + 176) = -99;
      }
      v60 = v343;
    }
    else
    {
LABEL_74:
      if ( !v77 )
      {
        LODWORD(v349[0]) = v345;
        (*(void (__fastcall **)(double *, double *, __int64, double *))(*(_QWORD *)v17 + 320LL))(v17, v60, 12, v349);
        v204 = *((_QWORD *)this + 1);
        v205 = *(_QWORD *)(v204 + 128);
        v206 = *(_QWORD *)(v204 + 152);
        if ( *(int *)(v204 + 136) <= -2 )
          v205 = 0;
        if ( *(int *)(v204 + 160) <= -2 )
          v206 = 0;
        if ( (int)v63 <= 0 )
        {
          LODWORD(v63) = 0;
        }
        else
        {
          v207 = (int)v338;
          v208 = 0;
          v209 = *(double **)v346;
          do
          {
            v210 = *(int *)(v206 + v208);
            v211 = *(_DWORD *)((char *)v209 + v208);
            v208 += 4;
            sa[*(int *)(v205 + 4 * v210)] = v207 + v211;
          }
          while ( 4LL * (unsigned int)(v63 - 1) + 4 != v208 );
          *(_QWORD *)v346 = v209;
        }
        v212 = SLODWORD(v349[0]);
        if ( (int)v63 < SLODWORD(v349[0]) )
        {
          v213 = (int)v63 + 1;
          v214 = 4 * ((int)v63 - v213);
          v215 = v214 + v206;
          v216 = v214 + *(_QWORD *)v346;
          do
          {
            sa[*(int *)(v205 + 4LL * *(int *)(v215 + 4 * v213))] = *(_DWORD *)(v216 + 4 * v213);
            v212 = SLODWORD(v349[0]);
            v217 = v213++;
          }
          while ( SLODWORD(v349[0]) > v217 );
        }
        v218 = *(void **)(v204 + 80);
        v219 = *(const void **)(v204 + 104);
        if ( *(int *)(v204 + 88) <= -2 )
          v218 = nullptr;
        if ( *(int *)(v204 + 112) <= -2 )
          v219 = nullptr;
        memcpy(v218, v219, 4 * v212);
        v220 = *((_QWORD *)this + 1);
        v221 = *(void **)(v220 + 152);
        v222 = *(const void **)(v220 + 128);
        if ( *(int *)(v220 + 160) <= -2 )
          v221 = nullptr;
        if ( *(int *)(v220 + 136) <= -2 )
          v222 = nullptr;
        memcpy(v221, v222, 4LL * SLODWORD(v349[0]));
        if ( !v333 )
        {
          CoinFactorization::checkSparse(*((CoinFactorization **)this + 1));
          v77 = *(_DWORD *)(*((_QWORD *)this + 1) + 176LL);
          continue;
        }
        v223 = *((CoinFactorization **)this + 1);
        v16 = (ClpSimplex *)v60;
        v18 = (int)v338;
        if ( v223 )
        {
          v224 = 2000;
          if ( *((int *)v223 + 16) >= 2000 )
            v224 = *((_DWORD *)v223 + 16);
          CoinFactorization::maximumPivots(v223, v224);
        }
        else
        {
          v293 = *((unsigned int **)this + 2);
          v294 = 2000;
          if ( (int)v293[12] >= 2000 )
            v294 = v293[12];
          (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v293 + 24LL))(v293, v294);
        }
        for ( j = 0; j != 4; ++j )
        {
          v226 = *((_QWORD *)this + 1);
          if ( v226 )
            v227 = *(_DWORD *)(v226 + 64);
          else
            v227 = *(_DWORD *)(*((_QWORD *)this + 2) + 48LL);
          v228 = v227 + *((_DWORD *)v16 + 26);
          if ( j == 3 || *(int *)(*((_QWORD *)v16 + 20) + 16LL) > 1 )
            v228 += *((_DWORD *)v16 + 27);
          v229 = *((CoinIndexedVector **)v16 + j + 132);
          CoinIndexedVector::reserve(v229, v228);
        }
        v230 = *((_QWORD *)this + 1);
        v97 = *(_DWORD *)(v230 + 560) <= -2;
        v231 = *(int **)(v230 + 128);
        v232 = *(int **)(v230 + 648);
        v233 = *(const int **)(v230 + 232);
        v234 = *(int **)(v230 + 624);
        v346[0] = *(_DWORD *)(v230 + 32);
        v235 = *(double **)(v230 + 552);
        v236 = *(double **)(v230 + 600);
        if ( v97 )
          v235 = nullptr;
        v97 = *(_DWORD *)(v230 + 136) <= -2;
        v343 = v235;
        if ( v97 )
          v231 = nullptr;
        v97 = *(_DWORD *)(v230 + 656) <= -2;
        v339 = v231;
        if ( v97 )
          v232 = nullptr;
        v97 = *(_DWORD *)(v230 + 240) <= -2;
        v340 = v232;
        if ( v97 )
          v233 = nullptr;
        if ( *(int *)(v230 + 632) <= -2 )
          v234 = nullptr;
        v97 = *(_DWORD *)(v230 + 608) <= -2;
        v341 = v234;
        if ( v97 )
          v236 = nullptr;
        v342 = v236;
        v237 = (ClpNetworkBasis *)operator new(0x70u);
        ClpNetworkBasis::ClpNetworkBasis(v237, v16, v346[0], v343, v339, v340, v233, v341, v342);
        v238 = *((CoinFactorization **)this + 1);
        *(_QWORD *)this = v237;
        CoinFactorization::gutsOfDestructor(v238, 1);
        v239 = *((_QWORD *)this + 1);
        v240 = *((_DWORD *)v16 + 26);
        *(_DWORD *)(v239 + 176) = 0;
        *(_DWORD *)(v239 + 32) = v240;
        goto LABEL_222;
      }
      if ( v77 != -1 )
        continue;
    }
LABEL_286:
    if ( (a3 & 0xFFFFFFFD) != 0 )
      return (unsigned int)-1;
    if ( v320 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_461;
    v243 = (char *)operator new[](4 * v320);
    v244 = (double *)&v243[v322];
    if ( v344 > 0 )
    {
      v343 = (double *)&v243[v322];
      memset(v243, 255, na);
      v244 = (double *)&v243[v322];
    }
    if ( (int)v63 <= 0 )
    {
      LODWORD(v63) = 0;
    }
    else
    {
      v245 = *(double **)v346;
      v246 = *(_QWORD *)v346 + 4LL * (unsigned int)(v63 - 1) + 4;
      v247 = *(double **)v346;
      do
      {
        v248 = *(int *)v247;
        v247 = (double *)((char *)v247 + 4);
        *((_DWORD *)v244 + v248) = 1;
      }
      while ( (double *)v246 != v247 );
      *(_QWORD *)v346 = v245;
    }
    if ( v348 > (int)v63 )
    {
      v249 = (int *)(*(_QWORD *)v346 + 4LL * (int)v63);
      v250 = *(_QWORD *)v346 + 4 * ((int)v63 + (unsigned __int64)(unsigned int)(v348 - 1 - v63)) + 4;
      do
      {
        v251 = *v249++;
        *(_DWORD *)&v243[4 * v251] = 1;
      }
      while ( (int *)v250 != v249 );
    }
    v252 = *((_QWORD *)this + 1);
    v348 = 0;
    *(_QWORD *)v346 = v252;
    v253 = *(_QWORD *)(v252 + 80);
    if ( v345 <= 0 )
    {
      if ( *(int *)(v252 + 88) <= -2 )
        v253 = 0;
    }
    else
    {
      v343 = v244;
      memset(sa, 255, v324);
      v244 = v343;
      v254 = v345;
      v255 = 0;
      if ( *(int *)(*(_QWORD *)v346 + 88LL) <= -2 )
        v253 = 0;
      do
      {
        if ( *((int *)v244 + v255) >= 0 )
        {
          v256 = v348;
          v257 = *(_DWORD *)(v253 + 4LL * v348);
          if ( v257 >= 0 )
          {
            *((_DWORD *)v244 + v255) = v257;
          }
          else
          {
            v258 = *((_DWORD *)v60 + 27) + v255;
            *((_DWORD *)v244 + v255) = -1;
            *(_BYTE *)(*((_QWORD *)v60 + 33) + v258) = *(_BYTE *)(*((_QWORD *)v60 + 33) + v258) & 0xF8 | 4;
            v256 = v348;
          }
          v348 = v256 + 1;
        }
        ++v255;
      }
      while ( v254 > (int)v255 );
    }
    if ( (int)v338 <= 0 )
    {
      v261 = *((double **)v60 + 157);
      if ( v345 > 0 )
        goto LABEL_388;
      goto LABEL_458;
    }
    v259 = (int *)v243;
    do
    {
      if ( *v259 >= 0 )
      {
        v260 = -1;
        if ( *(int *)(v253 + 4LL * v348) >= 0 )
          v260 = *(_DWORD *)(v253 + 4LL * v348);
        ++v348;
        *v259 = v260;
      }
      ++v259;
    }
    while ( &v243[v317 + 4] != (char *)v259 );
    v261 = *((double **)v60 + 157);
    if ( v345 <= 0 )
    {
LABEL_396:
      v266 = 0;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)v60 + 33) + v266) & 7) == 1 )
        {
          v267 = *(int *)&v243[4 * v266];
          if ( (int)v267 >= 0 )
            *((_DWORD *)v261 + v267) = v266;
        }
        ++v266;
      }
      while ( v329 + 1 != v266 );
      v342 = v261;
      operator delete[](v243);
      v269 = *((_QWORD *)v60 + 126);
      v270 = *((_QWORD *)v60 + 123);
      v271 = *((double **)v60 + 150);
      v272 = *((double **)v60 + 124);
      v273 = *((int **)v60 + 127);
      v343 = *((double **)v60 + 151);
      v274 = 0;
      *(_QWORD *)v346 = v269;
      v275 = v60[94];
      v276 = v342;
      if ( a4 )
      {
        v277 = v269;
        do
        {
          v280 = (_BYTE *)(v274 + *((_QWORD *)v60 + 33));
          if ( (*v280 & 7) == 1 )
            *v280 = *v280 & 0xF8 | 4;
          ++v274;
        }
        while ( v266 != v274 );
      }
      else
      {
        v277 = v269;
        v268 = -v275;
        do
        {
          v278 = (_BYTE *)(v274 + *((_QWORD *)v60 + 33));
          if ( (*v278 & 7) == 1 )
          {
            a6.m128i_i64[0] = *(_QWORD *)(v270 + 8 * v274);
            v279 = *v278 & 0xF8;
            a7 = *(double *)(v269 + 8 * v274);
            if ( *(double *)a6.m128i_i64 > v268 || v275 > a7 )
            {
              v308 = v271[v274];
              si128.m128_u64[0] = fabs(v308 - *(double *)a6.m128i_i64);
              a8 = fabs(v308 - a7);
              if ( a8 > *(double *)si128.m128_u64 )
              {
                *v278 = v279 | 3;
                v271[v274] = *(double *)a6.m128i_i64;
              }
              else
              {
                *v278 = v279 | 2;
                v271[v274] = a7;
              }
            }
            else
            {
              *v278 = v279;
            }
          }
          ++v274;
        }
        while ( v266 != v274 );
      }
      *(_QWORD *)v346 = v277;
    }
    else
    {
LABEL_388:
      *(_QWORD *)v346 = v244;
      v262 = (double *)memset(v261, 255, v324);
      v263 = *(double **)v346;
      v261 = v262;
      v264 = 0;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)v60 + 33) + (int)v264 + *((_DWORD *)v60 + 27)) & 7) == 1 )
        {
          v265 = *((int *)v263 + v264);
          if ( (int)v265 >= 0 )
            *((_DWORD *)v261 + v265) = (_DWORD)v338 + v264;
        }
        ++v264;
      }
      while ( v326 != v264 );
      if ( (int)v338 > 0 )
        goto LABEL_396;
LABEL_458:
      v342 = v261;
      operator delete[](v243);
      v270 = *((_QWORD *)v60 + 123);
      v271 = *((double **)v60 + 150);
      v272 = *((double **)v60 + 124);
      v273 = *((int **)v60 + 127);
      v276 = v342;
      *(double *)v346 = v60[126];
      v343 = *((double **)v60 + 151);
    }
    if ( v345 <= 0 )
    {
      v343 = v271;
      (*(void (__fastcall **)(double *, double *, __int64, double *, double *, double, double, double, double, double))(*(_QWORD *)v17 + 320LL))(
        v17,
        v60,
        1,
        v349,
        v272,
        *(double *)si128.m128_u64,
        *(double *)a6.m128i_i64,
        a7,
        a8,
        v268);
      v288 = v343;
      *(_DWORD *)(*((_QWORD *)this + 1) + 176LL) = -99;
      goto LABEL_426;
    }
    v281 = 0;
    v282 = (int)v338;
    v283 = *(double **)v346;
    while ( 2 )
    {
      v284 = *((int *)v276 + v281);
      if ( (int)v284 >= 0 )
      {
        if ( (int)v284 < v282 )
          goto LABEL_416;
      }
      else
      {
        v284 = (int)v281 + *((_DWORD *)v60 + 27);
LABEL_416:
        *(_BYTE *)(*((_QWORD *)v60 + 33) + v284) = *(_BYTE *)(*((_QWORD *)v60 + 33) + v284) & 0xF8 | 1;
      }
      if ( v326 != ++v281 )
        continue;
      break;
    }
    *(_QWORD *)v346 = v283;
    v340 = (int *)v271;
    v341 = v273;
    v342 = v272;
    (*(void (__fastcall **)(double *, double *, __int64, double *, double, double, double, double, double))(*(_QWORD *)v17 + 320LL))(
      v17,
      v60,
      1,
      v349,
      *(double *)si128.m128_u64,
      *(double *)a6.m128i_i64,
      a7,
      a8,
      v268);
    v285 = v343;
    v286 = v342;
    v287 = v341;
    v288 = v340;
    *(_DWORD *)(*((_QWORD *)this + 1) + 176LL) = -99;
    v289 = 0;
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v60 + 33) + (int)v289 + *((_DWORD *)v60 + 27)) & 7) != 1 )
      {
        *(double *)si128.m128_u64 = v286[v289];
        if ( *(double *)si128.m128_u64 == *(double *)&v287[2 * v289] )
        {
          v285[v289] = *(double *)si128.m128_u64;
          v290 = (_BYTE *)(*((_QWORD *)v60 + 33) + *((_DWORD *)v60 + 27) + (int)v289);
          *v290 = *v290 & 0xF8 | 5;
        }
      }
      ++v289;
    }
    while ( v326 != v289 );
    *(_QWORD *)v346 = v283;
LABEL_426:
    if ( (int)v338 > 0 )
    {
      v291 = *(double **)v346;
      v292 = 0;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)v60 + 33) + v292) & 7) != 1 )
        {
          si128.m128_u64[0] = *(_QWORD *)(v270 + 8 * v292);
          if ( *(double *)si128.m128_u64 == v291[v292] )
          {
            v288[v292] = si128.m128_u64[0];
            *(_BYTE *)(v292 + *((_QWORD *)v60 + 33)) = *(_BYTE *)(v292 + *((_QWORD *)v60 + 33)) & 0xF8 | 5;
          }
        }
        ++v292;
      }
      while ( v329 + 1 != v292 );
    }
    v77 = *(_DWORD *)(*((_QWORD *)this + 1) + 176LL);
  }
  while ( v77 < -98 );
  v16 = (ClpSimplex *)v60;
  v18 = (int)v338;
  if ( v77 )
    return (unsigned int)v77;
LABEL_222:
  if ( *((_DWORD *)v16 + 325) != 2 )
    return 0;
  v295 = *(_QWORD *)(*((_QWORD *)v16 + 20) + 24LL);
  v296 = *(_DWORD *)(v295 + 64);
  if ( !*(_BYTE *)(v295 + 8) )
    v296 = *(_DWORD *)(v295 + 68);
  v297 = v18 - v296;
  if ( (unsigned __int64)v296 > 0x1FFFFFFFFFFFFFFELL )
LABEL_461:
    __cxa_throw_bad_array_new_length();
  v298 = operator new[](4LL * v296);
  v299 = *((_QWORD *)this + 1);
  v300 = (int *)v298;
  v301 = *((_QWORD *)v16 + 157);
  if ( v299 )
  {
    v302 = 0;
    if ( *(int *)(v299 + 88) >= -1 )
      v302 = *(_QWORD *)(v299 + 80);
  }
  else
  {
    v302 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 128LL))(*((_QWORD *)this + 2));
  }
  if ( v345 > 0 )
  {
    v303 = 0;
    v304 = 0;
    v305 = 4LL * (unsigned int)(v345 - 1) + 4;
    do
    {
      v306 = *(_DWORD *)(v301 + v303) - v297;
      if ( v306 >= 0 && v306 < v296 )
      {
        v307 = v304++;
        v300[v307] = *(_DWORD *)(v302 + v303);
      }
      v303 += 4;
    }
    while ( v305 != v303 );
    if ( v304 )
      CoinFactorization::emptyRows(*((CoinFactorization **)this + 1), v304, v300);
  }
  operator delete[](v300);
  return *(unsigned int *)(*((_QWORD *)this + 1) + 176LL);
}

