__m128 *__fastcall sub_665810(__m128 *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // rsi
  char **v10; // rbp
  char **v11; // rbp
  char **v12; // rbp
  char **v13; // rbp
  char **exception; // rbp
  char **v15; // rbp
  _QWORD *v17; // r12
  _QWORD *v18; // rdi
  unsigned int v19; // eax
  _QWORD *v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  const __m128i *v23; // rbx
  unsigned int v24; // r10d
  __int64 v25; // r8
  __int64 v26; // r11
  size_t v27; // r15
  __m128i *v28; // rbp
  __int64 v29; // r13
  unsigned int v30; // r10d
  int v31; // ecx
  __int64 v32; // r9
  __m128i *v33; // rsi
  const __m128i *i; // rax
  __int64 v35; // rdx
  __int16 v36; // ax
  __int64 v37; // rax
  __int64 *v38; // rdx
  unsigned int v39; // r8d
  __int64 *v40; // rdi
  __int64 v41; // r8
  __int64 *v42; // rsi
  __int64 *j; // rbp
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edi
  unsigned int v47; // r15d
  _QWORD *v48; // rcx
  int v49; // r12d
  __int64 v50; // rbp
  __int64 v51; // rax
  int v52; // r8d
  const __m128i *v53; // rsi
  __int64 v54; // rdx
  const __m128i *v55; // r10
  const __m128i *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rax
  unsigned int v59; // edx
  __int64 v60; // rsi
  int v61; // edx
  _QWORD *v62; // rsi
  __m128i *v63; // rax
  __int64 v64; // rdx
  __m128i si128; // xmm1
  __m128i *v66; // rax
  __m128i *v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // r8
  const __m128i *v72; // rcx
  int v73; // esi
  __int64 v74; // rax
  const __m128i *v75; // rdi
  const __m128i *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned int v79; // ebx
  unsigned int v80; // edx
  unsigned int v81; // eax
  unsigned int *v82; // rax
  __int64 v83; // rdx
  _OWORD *v84; // rax
  int v85; // r9d
  int v86; // esi
  int v87; // ebx
  __int64 v88; // r15
  _QWORD *v89; // rcx
  int v90; // edx
  __int64 v91; // rbp
  char *v92; // rax
  _QWORD *v93; // rdi
  unsigned __int64 v94; // rax
  __int64 v95; // rsi
  double v96; // rdi
  void *v97; // rbx
  __int64 v98; // rax
  _QWORD *v99; // rdx
  unsigned int v100; // eax
  __int64 v101; // rcx
  int v102; // eax
  _QWORD *v103; // rcx
  __int64 v104; // rdx
  __m128 *v105; // rbp
  int v106; // r9d
  __int64 v107; // r10
  __int64 v108; // r15
  int v109; // ecx
  __m128 v110; // xmm0
  __int64 v111; // rax
  __m128 *v112; // rsi
  __m128 *v113; // rax
  __m128 *v114; // rdi
  unsigned __int64 v115; // rdx
  __int64 v116; // r15
  double v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rbx
  _QWORD *v121; // rax
  unsigned int v122; // edx
  __int64 v123; // rcx
  int v124; // edx
  __int64 *v125; // rcx
  __int64 v126; // rcx
  int v127; // r10d
  __int64 v128; // rcx
  __m128i *v129; // rbp
  int v130; // esi
  __int64 v131; // r10
  const __m128i *v132; // rdi
  __m128i *k; // rax
  __m128i *v134; // rcx
  __int64 v135; // rdx
  unsigned __int64 v136; // rax
  __int64 v137; // rcx
  int v138; // r11d
  __int64 v139; // r10
  __int64 v140; // rbp
  int v141; // ecx
  __m128i v142; // xmm0
  __int64 v143; // r11
  const __m128i *v144; // rsi
  __m128i *m; // rax
  __m128i *v146; // rdi
  __int64 v147; // rdx
  unsigned int v148; // ebp
  unsigned int v149; // ecx
  unsigned int *v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rax
  _QWORD *v153; // rax
  __int64 v154; // rax
  __int64 v156; // rdi
  bool v157; // zf
  char *v158; // rbx
  char *v159; // rbp
  __int64 v160; // rsi
  void *v161; // rdi
  __m128 *v162; // rax
  int v163; // r11d
  __m128i *v164; // rcx
  const __m128i *v165; // rax
  __m128i *v166; // r8
  __int64 v167; // rdx
  __m128 *v168; // rsi
  __m128i *v169; // rdx
  const __m128i *v170; // rax
  int v171; // r10d
  __m128i *v172; // r8
  const __m128i *v173; // rcx
  int v174; // r11d
  __m128i *v175; // r9
  __int64 v176; // rax
  __m128i *v177; // rdx
  __m128i *v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rdx
  unsigned __int64 v181; // rax
  __int64 v182; // r8
  unsigned int v183; // ebp
  unsigned int v184; // ecx
  unsigned int *v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rax
  _QWORD *v188; // rdi
  __int64 v189; // rbx
  unsigned int v190; // eax
  __int64 v191; // rdx
  int v192; // eax
  __int64 *v193; // rdx
  double v194; // rbx
  __int64 v195; // rdx
  __int64 v196; // rax
  __int64 v197; // rsi
  __int64 v198; // rax
  __int64 v199; // rbx
  _QWORD *v200; // rax
  unsigned int v201; // edx
  __int64 v202; // rcx
  int v203; // edx
  _QWORD *v204; // rcx
  __int64 v205; // rbx
  _QWORD *v206; // rax
  unsigned int v207; // edx
  __int64 v208; // rcx
  int v209; // edx
  __int64 *v210; // rcx
  _QWORD *v211; // rax
  unsigned int v212; // edx
  __int64 v213; // rcx
  int v214; // edx
  __int64 *v215; // rcx
  const __m128i *v216; // rax
  int v217; // edx
  __int64 v218; // r8
  void *v219; // r9
  _QWORD *v220; // rsi
  __int64 v221; // rax
  __int64 v222; // r12
  __m128i *v223; // r13
  const __m128i *v224; // rbx
  _QWORD *v225; // r9
  __int64 v226; // rcx
  __int64 v227; // r15
  void **v228; // r10
  int v229; // r14d
  int v230; // r11d
  __int64 v231; // rdx
  __m128i *v232; // rsi
  __m128i *v233; // rdx
  const __m128i *v234; // rax
  int v235; // edx
  __int64 v236; // r8
  const __m128i *v237; // r15
  __m128i *v238; // r9
  __int64 v239; // rbp
  int v240; // r11d
  __int64 v241; // rax
  __m128i *v242; // rdx
  __m128i *v243; // rax
  int v244; // r9d
  __int64 v245; // rdi
  __int64 v246; // rcx
  int v247; // edx
  __int64 v248; // rax
  __int64 v249; // rbx
  _QWORD *v250; // rax
  unsigned int v251; // edx
  unsigned int v252; // ebp
  unsigned int v253; // eax
  int v254; // r9d
  size_t v255; // r15
  __int64 v256; // rdx
  int v257; // esi
  __int64 v258; // rax
  const __m128i *v259; // rdi
  __m128i *v260; // r8
  __int64 v261; // rcx
  unsigned int v262; // ebx
  size_t v263; // rsi
  __int64 v264; // rax
  _DWORD *v265; // rdx
  __int64 v266; // rsi
  unsigned int v267; // edx
  size_t v268; // rsi
  _DWORD *v269; // rax
  __int64 v270; // rdx
  _QWORD *v271; // rdx
  unsigned int v272; // ebx
  unsigned int v273; // ecx
  unsigned int *v274; // rdx
  __int64 v275; // rcx
  unsigned int v276; // ecx
  size_t v277; // rsi
  _DWORD *v278; // rdx
  __int64 v279; // rcx
  unsigned int v280; // ecx
  size_t v281; // rsi
  _DWORD *v282; // rdx
  __int64 v283; // rcx
  __int64 v284; // rdx
  _QWORD *v285; // rax
  const __m128i *v286; // rax
  __int64 m128i_i64; // r8
  __m128i *v288; // rdi
  __int64 v289; // rax
  int v290; // r11d
  __int64 v291; // rcx
  __m128i *v292; // rbp
  const __m128i *v293; // r13
  const __m128i *v294; // rbx
  __int64 v295; // rax
  __m128i *v296; // rdx
  __m128i *v297; // rax
  _QWORD *v298; // rax
  unsigned int v299; // ebp
  unsigned int v300; // ecx
  unsigned int *v301; // rdx
  _QWORD *v302; // rax
  _QWORD *v303; // rax
  _QWORD *v304; // rax
  _QWORD *v305; // rax
  _QWORD *v306; // rax
  int v307; // [rsp+0h] [rbp-1A8h]
  int v308; // [rsp+8h] [rbp-1A0h]
  unsigned int v309; // [rsp+Ch] [rbp-19Ch]
  __int64 v310; // [rsp+10h] [rbp-198h]
  __m128 *v311; // [rsp+18h] [rbp-190h]
  int v312[4]; // [rsp+20h] [rbp-188h] BYREF
  int v313[4]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v314; // [rsp+40h] [rbp-168h]
  int v315[2]; // [rsp+48h] [rbp-160h]
  __int64 v316; // [rsp+50h] [rbp-158h]
  int v317[2]; // [rsp+58h] [rbp-150h]
  _QWORD *v318; // [rsp+60h] [rbp-148h]
  __int64 v319; // [rsp+68h] [rbp-140h]
  int v320; // [rsp+70h] [rbp-138h]
  int v321; // [rsp+74h] [rbp-134h]
  __m128i *v322; // [rsp+78h] [rbp-130h]
  int v323; // [rsp+80h] [rbp-128h]
  __int64 v324; // [rsp+88h] [rbp-120h]
  void *v325; // [rsp+90h] [rbp-118h] BYREF
  int v326[2]; // [rsp+98h] [rbp-110h]
  int v327; // [rsp+A0h] [rbp-108h]
  int v328; // [rsp+A8h] [rbp-100h]
  int v329[2]; // [rsp+B0h] [rbp-F8h] BYREF
  int v330; // [rsp+B8h] [rbp-F0h]
  int v331; // [rsp+C0h] [rbp-E8h]
  __int64 v332; // [rsp+C8h] [rbp-E0h]
  void *v333; // [rsp+D0h] [rbp-D8h] BYREF
  void *v334; // [rsp+D8h] [rbp-D0h]
  __int64 v335; // [rsp+E0h] [rbp-C8h]
  int v336[48]; // [rsp+E8h] [rbp-C0h] BYREF

  v17 = a2;
  v311 = a1;
  v18 = (_QWORD *)a2[13];
  v310 = a3;
  v320 = a5;
  if ( v18 )
  {
    v19 = *((_DWORD *)v18 - 1);
    v309 = v19;
    if ( v19 == *((_DWORD *)v18 - 2) )
    {
      v79 = (3 * v19 + 1) >> 1;
      v80 = 8 * v19 + 8;
      v81 = 8 * v79 + 8;
      if ( v80 >= v81 || *((_DWORD *)v18 - 1) >= v79 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v333, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v333);
        sub_233E40((__int64)&v333);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v82 = (unsigned int *)sub_186B300(v18 - 1, v81);
      v83 = v82[1];
      v18 = v82 + 2;
      *v82 = v79;
      a2[13] = v82 + 2;
      LODWORD(v82) = v83;
      v20 = &v18[v83];
      v21 = (_DWORD)v82 + 1;
    }
    else
    {
      v20 = &v18[v19];
      v21 = v19 + 1;
    }
  }
  else
  {
    v153 = (_QWORD *)sub_186B270(0x18u);
    v309 = 0;
    v18 = v153 + 1;
    *v153 = 2;
    v21 = 1;
    a2[13] = v18;
    v20 = v18;
  }
  *v20 = v310;
  *((_DWORD *)v18 - 1) = v21;
  v22 = a2[14];
  if ( v22 )
    *(_DWORD *)(v22 - 4) = 0;
  v23 = *(const __m128i **)a4;
LABEL_7:
  while ( 2 )
  {
    v24 = *((_DWORD *)v18 - 1);
    v25 = *(unsigned int *)(a4 + 8);
    v26 = (unsigned int)v25;
    v27 = 16 * v25;
    v28 = (__m128i *)&v23[v25];
    if ( v309 >= v24 )
      goto LABEL_72;
    v29 = v18[v24 - 1];
    v30 = v24 - 1;
    v31 = *(_DWORD *)(v29 + 12);
    v32 = 16LL * (v31 & (unsigned int)(v25 - 1));
    v33 = (__m128i *)&v23[(unsigned __int64)v32 / 0x10];
    if ( v32 != v27 )
    {
      for ( i = &v23[(unsigned __int64)v32 / 0x10]; i != v28; ++i )
      {
        v35 = i->m128i_i64[0];
        if ( i->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v35 + 12) == v31 && v29 == v35 )
          {
LABEL_69:
            *((_DWORD *)v18 - 1) = v30;
            v18 = (_QWORD *)v17[13];
            goto LABEL_70;
          }
        }
        else if ( !v35 )
        {
          goto LABEL_15;
        }
      }
    }
    if ( v33 == v23 )
    {
LABEL_15:
      v36 = *(_WORD *)(v29 + 4);
      if ( v36 == 1 )
        goto LABEL_50;
      goto LABEL_16;
    }
    v63 = (__m128i *)v23;
    while ( 1 )
    {
      v64 = v63->m128i_i64[0];
      if ( v63->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v64 + 12) == v31 && v29 == v64 )
        goto LABEL_69;
LABEL_46:
      if ( v33 == ++v63 )
        goto LABEL_15;
    }
    if ( v64 )
      goto LABEL_46;
    v36 = *(_WORD *)(v29 + 4);
    if ( v36 == 1 )
    {
LABEL_50:
      si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
      if ( 3 * (int)v25 < (unsigned int)(4 * (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 16))) )
      {
        v312[0] = 2 * v25;
        v27 = 16LL * (unsigned int)(2 * v25);
        *(__m128i *)v313 = si128;
        v170 = (const __m128i *)sub_186B270(v27);
        v171 = v312[0];
        si128 = _mm_load_si128((const __m128i *)v313);
        v23 = v170;
        v172 = (__m128i *)&v170[v27 / 0x10];
        if ( v312[0] )
        {
          if ( (v27 & 0x10) == 0 || (*v170 = 0, ++v170, v170 != v172) )
          {
            do
            {
              *v170 = 0;
              v170 += 2;
              v170[-1] = 0;
            }
            while ( v170 != v172 );
          }
        }
        v173 = *(const __m128i **)a4;
        v174 = v171 - 1;
        v28 = v172;
        v175 = (__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8));
        if ( *(__m128i **)a4 != v175 )
        {
          do
          {
            if ( v173->m128i_i64[0] > 1uLL )
            {
              v176 = 16LL * (*(_DWORD *)(v173->m128i_i64[0] + 12) & (unsigned int)v174);
              v177 = (__m128i *)&v23[(unsigned __int64)v176 / 0x10];
              if ( v27 == v176 )
              {
LABEL_231:
                if ( v23 == v177 )
                {
LABEL_271:
                  *(_QWORD *)v317 = v172;
                  LODWORD(v316) = v171;
                  *(_QWORD *)v315 = v175;
                  LODWORD(v314) = v171 - 1;
                  *(_QWORD *)v313 = v173;
                  *(__m128i *)v312 = si128;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v178 = (__m128i *)v23;
                while ( v178->m128i_i64[0] )
                {
                  if ( v177 == ++v178 )
                    goto LABEL_271;
                }
              }
              else
              {
                v178 = (__m128i *)&v23[(unsigned __int64)v176 / 0x10];
                while ( v178->m128i_i64[0] )
                {
                  if ( v172 == ++v178 )
                    goto LABEL_231;
                }
              }
              *v178 = _mm_loadu_si128(v173);
            }
            ++v173;
          }
          while ( v175 != v173 );
          v175 = *(__m128i **)a4;
        }
        if ( v175 )
        {
          LODWORD(v314) = v171;
          v312[0] = v171 - 1;
          *(__m128i *)v313 = si128;
          sub_186B220(v175);
          v171 = v314;
          si128 = _mm_load_si128((const __m128i *)v313);
          v174 = v312[0];
        }
        v31 = *(_DWORD *)(v29 + 12);
        *(_QWORD *)a4 = v23;
        *(_DWORD *)(a4 + 8) = v171;
        *(_DWORD *)(a4 + 16) = 0;
        v32 = 16LL * (v31 & (unsigned int)v174);
        v33 = (__m128i *)&v23[(unsigned __int64)v32 / 0x10];
      }
      if ( v32 == v27 )
      {
        v67 = nullptr;
      }
      else
      {
        v66 = v33;
        v67 = nullptr;
        do
        {
          while ( 1 )
          {
            v68 = v66->m128i_i64[0];
            if ( v66->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v68 + 12) == v31 && v29 == v68 )
              goto LABEL_274;
            if ( ++v66 == v28 )
              goto LABEL_59;
          }
          if ( !v68 )
          {
LABEL_176:
            if ( v67 )
              --*(_DWORD *)(a4 + 16);
            else
              v67 = v66;
            *v67 = si128;
            ++*(_DWORD *)(a4 + 12);
            goto LABEL_68;
          }
          v67 = v66++;
        }
        while ( v66 != v28 );
      }
LABEL_59:
      if ( v23 == v33 )
        goto LABEL_67;
      v66 = (__m128i *)v23;
      while ( 1 )
      {
        while ( 1 )
        {
          v69 = v66->m128i_i64[0];
          if ( v66->m128i_i64[0] > 1uLL )
            break;
          if ( !v69 )
            goto LABEL_176;
          v67 = v66++;
          if ( v66 == v33 )
            goto LABEL_67;
        }
        if ( *(_DWORD *)(v69 + 12) == v31 && v29 == v69 )
          break;
        if ( ++v66 == v33 )
          goto LABEL_67;
      }
LABEL_274:
      *v66 = si128;
      goto LABEL_68;
    }
LABEL_16:
    if ( v36 != 2 )
    {
      if ( v36 )
      {
        sub_1872CE0("");
        sub_1873130(114, 142);
      }
      v37 = *((unsigned int *)v17 + 14);
      v38 = (__int64 *)v17[6];
      v39 = v37 - 1;
      v37 *= 16;
      v40 = (__int64 *)((char *)v38 + v37);
      v41 = 16LL * (v31 & v39);
      v42 = &v38[(unsigned __int64)v41 / 8];
      if ( v41 != v37 )
      {
        for ( j = &v38[(unsigned __int64)v41 / 8]; v40 != j; j += 2 )
        {
          v44 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v44 + 12) == v31 && v29 == v44 )
              goto LABEL_126;
          }
          else if ( !v44 )
          {
            goto LABEL_25;
          }
        }
      }
      while ( v42 != v38 )
      {
        v152 = *v38;
        if ( (unsigned __int64)*v38 > 1 )
        {
          if ( *(_DWORD *)(v152 + 12) == v31 && v29 == v152 )
          {
            j = v38;
LABEL_126:
            v116 = j[1];
            if ( !v116 )
            {
              v194 = *(double *)v17;
              v195 = sub_15D1F10(v29);
              v196 = v17[12];
              if ( v196 )
                v197 = *(unsigned int *)(v196 - 4);
              else
                v197 = 0;
              v198 = sub_15DB5C0(*(_QWORD *)&v194, v197, v195);
              v199 = *(_QWORD *)(v29 + 16);
              v116 = v198;
              v200 = (_QWORD *)v17[12];
              if ( v200 )
              {
                v201 = *((_DWORD *)v200 - 1);
                if ( v201 == *((_DWORD *)v200 - 2) )
                {
                  v280 = (3 * v201 + 1) >> 1;
                  v281 = 8 * v280 + 8;
                  if ( 8 * v201 + 8 >= (unsigned int)v281 || v201 >= v280 )
                  {
                    v15 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v333, "Overflow encountered when expanding vector");
                    *v15 = (char *)off_1C63128;
                    sub_2333C0(v15 + 1, &v333);
                    sub_233E40((__int64)&v333);
                    __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v312[0] = (3 * v201 + 1) >> 1;
                  v282 = (_DWORD *)sub_186B300(v200 - 1, v281);
                  v200 = v282 + 2;
                  *v282 = v312[0];
                  v283 = (unsigned int)v282[1];
                  v17[12] = v282 + 2;
                  LODWORD(v282) = v283;
                  v204 = &v200[v283];
                  v203 = (_DWORD)v282 + 1;
                }
                else
                {
                  v202 = v201;
                  v203 = v201 + 1;
                  v204 = &v200[v202];
                }
              }
              else
              {
                v302 = (_QWORD *)sub_186B270(0x18u);
                v203 = 1;
                *v302 = 2;
                v200 = v302 + 1;
                v17[12] = v200;
                v204 = v200;
              }
              *v204 = *(_QWORD *)(v199 + 16);
              *((_DWORD *)v200 - 1) = v203;
              v205 = sub_15D1F10(v29);
              v206 = (_QWORD *)v17[11];
              if ( v206 )
              {
                v207 = *((_DWORD *)v206 - 1);
                if ( v207 == *((_DWORD *)v206 - 2) )
                {
                  v276 = (3 * v207 + 1) >> 1;
                  v277 = 8 * v276 + 8;
                  if ( 8 * v207 + 8 >= (unsigned int)v277 || v207 >= v276 )
                  {
                    v11 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v333, "Overflow encountered when expanding vector");
                    *v11 = (char *)off_1C63128;
                    sub_2333C0(v11 + 1, &v333);
                    sub_233E40((__int64)&v333);
                    __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v312[0] = (3 * v207 + 1) >> 1;
                  v278 = (_DWORD *)sub_186B300(v206 - 1, v277);
                  v206 = v278 + 2;
                  *v278 = v312[0];
                  v279 = (unsigned int)v278[1];
                  v17[11] = v278 + 2;
                  LODWORD(v278) = v279;
                  v210 = &v206[v279];
                  v209 = (_DWORD)v278 + 1;
                }
                else
                {
                  v208 = v207;
                  v209 = v207 + 1;
                  v210 = &v206[v208];
                }
              }
              else
              {
                v305 = (_QWORD *)sub_186B270(0x18u);
                v209 = 1;
                *v305 = 2;
                v206 = v305 + 1;
                v17[11] = v206;
                v210 = v206;
              }
              *v210 = v205;
              *((_DWORD *)v206 - 1) = v209;
              j[1] = v116;
              if ( v116 )
                ++*(_DWORD *)(v116 + 8);
              v211 = (_QWORD *)v17[10];
              if ( v211 )
              {
                v212 = *((_DWORD *)v211 - 1);
                if ( v212 == *((_DWORD *)v211 - 2) )
                {
                  v272 = (3 * v212 + 1) >> 1;
                  v273 = 8 * v272 + 8;
                  if ( 8 * v212 + 8 >= v273 || v212 >= v272 )
                  {
                    v6 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v333, "Overflow encountered when expanding vector");
                    *v6 = (char *)off_1C63128;
                    sub_2333C0(v6 + 1, &v333);
                    sub_233E40((__int64)&v333);
                    __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v274 = (unsigned int *)sub_186B300(v211 - 1, v273);
                  v211 = v274 + 2;
                  v275 = v274[1];
                  *v274 = v272;
                  v17[10] = v274 + 2;
                  LODWORD(v274) = v275;
                  v215 = &v211[v275];
                  v214 = (_DWORD)v274 + 1;
                }
                else
                {
                  v213 = v212;
                  v214 = v212 + 1;
                  v215 = &v211[v213];
                }
              }
              else
              {
                v303 = (_QWORD *)sub_186B270(0x18u);
                v214 = 1;
                *v303 = 2;
                v211 = v303 + 1;
                v17[10] = v211;
                v215 = v211;
              }
              *v215 = v116;
              *((_DWORD *)v211 - 1) = v214;
            }
            if ( v320 )
            {
              v117 = *(double *)v17;
              v118 = sub_15D1F10(v116);
              v119 = sub_15DB5C0(*(_QWORD *)&v117, (unsigned int)(*(_DWORD *)(v116 + 16) + v320), v118);
              v120 = v119;
              *(__m128i *)v312 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v119);
              if ( v119 )
                ++*(_DWORD *)(v119 + 8);
              v121 = (_QWORD *)v17[10];
              if ( v121 )
              {
                v122 = *((_DWORD *)v121 - 1);
                if ( v122 == *((_DWORD *)v121 - 2) )
                {
                  v183 = (3 * v122 + 1) >> 1;
                  v184 = 8 * v183 + 8;
                  if ( 8 * v122 + 8 >= v184 || v122 >= v183 )
                  {
                    v5 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v333, "Overflow encountered when expanding vector");
                    *v5 = (char *)off_1C63128;
                    sub_2333C0(v5 + 1, &v333);
                    sub_233E40((__int64)&v333);
                    __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v185 = (unsigned int *)sub_186B300(v121 - 1, v184);
                  v121 = v185 + 2;
                  v186 = v185[1];
                  *v185 = v183;
                  v17[10] = v185 + 2;
                  LODWORD(v185) = v186;
                  v125 = &v121[v186];
                  v124 = (_DWORD)v185 + 1;
                }
                else
                {
                  v123 = v122;
                  v124 = v122 + 1;
                  v125 = &v121[v123];
                }
              }
              else
              {
                v298 = (_QWORD *)sub_186B270(0x18u);
                v124 = 1;
                *v298 = 2;
                v121 = v298 + 1;
                v17[10] = v121;
                v125 = v121;
              }
              *v125 = v120;
              *((_DWORD *)v121 - 1) = v124;
              v126 = *(unsigned int *)(a4 + 8);
              if ( 3 * (int)v126 < (unsigned int)(4 * (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 16))) )
              {
                LODWORD(v314) = 2 * v126;
                *(_QWORD *)v313 = 16LL * (unsigned int)(2 * v126);
                v234 = (const __m128i *)sub_186B270(*(size_t *)v313);
                v128 = *(_QWORD *)v313;
                v235 = v314;
                v23 = v234;
                v236 = (__int64)v234->m128i_i64 + *(_QWORD *)v313;
                if ( (_DWORD)v314 )
                {
                  if ( (v313[0] & 0x10) == 0 || (*v234 = 0, ++v234, v234 != (const __m128i *)v236) )
                  {
                    do
                    {
                      *v234 = 0;
                      v234 += 2;
                      v234[-1] = 0;
                    }
                    while ( v234 != (const __m128i *)v236 );
                  }
                }
                v237 = *(const __m128i **)a4;
                v127 = v235 - 1;
                v129 = (__m128i *)v236;
                v238 = (__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8));
                if ( *(__m128i **)a4 != v238 )
                {
                  v239 = *(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8);
                  v240 = v235;
                  do
                  {
                    if ( v237->m128i_i64[0] > 1uLL )
                    {
                      v241 = 16LL * (*(_DWORD *)(v237->m128i_i64[0] + 12) & (unsigned int)v127);
                      v242 = (__m128i *)&v23[(unsigned __int64)v241 / 0x10];
                      if ( v128 == v241 )
                      {
LABEL_343:
                        if ( v23 == v242 )
                        {
LABEL_378:
                          v317[0] = v240;
                          v316 = a4;
                          *(_QWORD *)v315 = v17;
                          v314 = v236;
                          *(_QWORD *)v313 = v29;
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v243 = (__m128i *)v23;
                        while ( v243->m128i_i64[0] )
                        {
                          if ( v242 == ++v243 )
                            goto LABEL_378;
                        }
                      }
                      else
                      {
                        v243 = (__m128i *)&v23[(unsigned __int64)v241 / 0x10];
                        while ( v243->m128i_i64[0] )
                        {
                          if ( (__m128i *)v236 == ++v243 )
                            goto LABEL_343;
                        }
                      }
                      *v243 = _mm_loadu_si128(v237);
                    }
                    ++v237;
                  }
                  while ( (const __m128i *)v239 != v237 );
                  v238 = *(__m128i **)a4;
                  v129 = (__m128i *)v236;
                  v235 = v240;
                }
                if ( v238 )
                {
                  v315[0] = v235;
                  v314 = v128;
                  v313[0] = v127;
                  sub_186B220(v238);
                  v235 = v315[0];
                  v128 = v314;
                  v127 = v313[0];
                }
                *(_QWORD *)a4 = v23;
                *(_DWORD *)(a4 + 8) = v235;
                *(_DWORD *)(a4 + 16) = 0;
              }
              else
              {
                v23 = *(const __m128i **)a4;
                v127 = v126 - 1;
                v128 = 16 * v126;
                v129 = (__m128i *)(*(_QWORD *)a4 + v128);
              }
              v130 = *(_DWORD *)(v29 + 12);
              v131 = 16LL * (v130 & (unsigned int)v127);
              v132 = &v23[(unsigned __int64)v131 / 0x10];
              if ( v131 == v128 )
              {
                v134 = nullptr;
              }
              else
              {
                k = (__m128i *)&v23[(unsigned __int64)v131 / 0x10];
                v134 = nullptr;
                do
                {
                  v135 = k->m128i_i64[0];
                  if ( k->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v135 + 12) == v130 && v29 == v135 )
                    {
LABEL_449:
                      *k = _mm_load_si128((const __m128i *)v312);
                      goto LABEL_68;
                    }
                  }
                  else
                  {
                    if ( !v135 )
                    {
LABEL_264:
                      if ( v134 )
                        --*(_DWORD *)(a4 + 16);
                      else
                        v134 = k;
                      *v134 = _mm_load_si128((const __m128i *)v312);
                      ++*(_DWORD *)(a4 + 12);
                      goto LABEL_68;
                    }
                    v134 = k;
                  }
                  ++k;
                }
                while ( k != v129 );
              }
              if ( v132 != v23 )
              {
                for ( k = (__m128i *)v23; v132 != k; ++k )
                {
                  v179 = k->m128i_i64[0];
                  if ( k->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v179 + 12) == v130 && v29 == v179 )
                      goto LABEL_449;
                  }
                  else
                  {
                    if ( !v179 )
                      goto LABEL_264;
                    v134 = k;
                  }
                }
              }
            }
            else
            {
              v137 = *(unsigned int *)(a4 + 8);
              if ( 3 * (int)v137 < (unsigned int)(4 * (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 16))) )
              {
                v313[0] = 2 * v137;
                *(_QWORD *)v312 = 16LL * (unsigned int)(2 * v137);
                v216 = (const __m128i *)sub_186B270(*(size_t *)v312);
                v139 = *(_QWORD *)v312;
                v217 = v313[0];
                v23 = v216;
                v218 = (__int64)v216->m128i_i64 + *(_QWORD *)v312;
                if ( v313[0] )
                {
                  if ( (v312[0] & 0x10) == 0 || (*v216 = 0, ++v216, (const __m128i *)v218 != v216) )
                  {
                    do
                    {
                      *v216 = 0;
                      v216 += 2;
                      v216[-1] = 0;
                    }
                    while ( (const __m128i *)v218 != v216 );
                  }
                }
                v138 = v217 - 1;
                v140 = v218;
                v219 = (void *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8));
                if ( *(void **)a4 != v219 )
                {
                  v220 = v17;
                  v221 = v29;
                  v222 = *(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8);
                  v223 = (__m128i *)v23;
                  v224 = *(const __m128i **)a4;
                  v225 = v220;
                  v226 = v116;
                  v227 = v139;
                  v228 = (void **)a4;
                  v229 = v217 - 1;
                  v230 = v217;
                  do
                  {
                    if ( v224->m128i_i64[0] > 1uLL )
                    {
                      v231 = 16LL * (*(_DWORD *)(v224->m128i_i64[0] + 12) & (unsigned int)v229);
                      v232 = &v223[(unsigned __int64)v231 / 0x10];
                      if ( v227 == v231 )
                      {
LABEL_321:
                        if ( v223 == v232 )
                        {
LABEL_379:
                          v317[0] = v230;
                          v316 = (__int64)v228;
                          *(_QWORD *)v315 = v225;
                          v314 = v218;
                          *(_QWORD *)v313 = v226;
                          *(_QWORD *)v312 = v221;
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v233 = v223;
                        while ( v233->m128i_i64[0] )
                        {
                          if ( v232 == ++v233 )
                            goto LABEL_379;
                        }
                      }
                      else
                      {
                        v233 = &v223[(unsigned __int64)v231 / 0x10];
                        while ( v233->m128i_i64[0] )
                        {
                          if ( (__m128i *)v218 == ++v233 )
                            goto LABEL_321;
                        }
                      }
                      *v233 = _mm_loadu_si128(v224);
                    }
                    ++v224;
                  }
                  while ( (const __m128i *)v222 != v224 );
                  v217 = v230;
                  v138 = v229;
                  a4 = (__int64)v228;
                  v17 = v225;
                  v219 = *v228;
                  v23 = v223;
                  v139 = v227;
                  v29 = v221;
                  v140 = v218;
                  v116 = v226;
                }
                if ( v219 )
                {
                  LODWORD(v314) = v217;
                  *(_QWORD *)v313 = v139;
                  v312[0] = v138;
                  sub_186B220(v219);
                  v217 = v314;
                  v139 = *(_QWORD *)v313;
                  v138 = v312[0];
                }
                *(_QWORD *)a4 = v23;
                *(_DWORD *)(a4 + 8) = v217;
                *(_DWORD *)(a4 + 16) = 0;
              }
              else
              {
                v23 = *(const __m128i **)a4;
                v138 = v137 - 1;
                v139 = 16 * v137;
                v140 = *(_QWORD *)a4 + 16 * v137;
              }
              v141 = *(_DWORD *)(v29 + 12);
              v142 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v116);
              v143 = 16LL * (v141 & (unsigned int)v138);
              v144 = &v23[(unsigned __int64)v143 / 0x10];
              if ( v143 == v139 )
              {
                v146 = nullptr;
              }
              else
              {
                m = (__m128i *)&v23[(unsigned __int64)v143 / 0x10];
                v146 = nullptr;
                do
                {
                  v147 = m->m128i_i64[0];
                  if ( m->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v147 + 12) == v141 && v29 == v147 )
                    {
LABEL_382:
                      *m = v142;
                      goto LABEL_68;
                    }
                  }
                  else
                  {
                    if ( !v147 )
                    {
LABEL_261:
                      if ( v146 )
                        --*(_DWORD *)(a4 + 16);
                      else
                        v146 = m;
                      *v146 = v142;
                      ++*(_DWORD *)(a4 + 12);
                      goto LABEL_68;
                    }
                    v146 = m;
                  }
                  ++m;
                }
                while ( m != (__m128i *)v140 );
              }
              if ( v144 != v23 )
              {
                for ( m = (__m128i *)v23; v144 != m; ++m )
                {
                  v180 = m->m128i_i64[0];
                  if ( m->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v180 + 12) == v141 && v29 == v180 )
                      goto LABEL_382;
                  }
                  else
                  {
                    if ( !v180 )
                      goto LABEL_261;
                    v146 = m;
                  }
                }
              }
            }
LABEL_67:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
        }
        else if ( !v152 )
        {
          break;
        }
        v38 += 2;
      }
LABEL_25:
      v45 = v17[14];
      if ( v45 )
      {
        *(_DWORD *)(v45 - 4) = 0;
        v26 = *(unsigned int *)(a4 + 8);
      }
      v46 = *(_DWORD *)(v29 + 24);
      v47 = 0;
      if ( !v46 )
        goto LABEL_406;
      LOBYTE(v312[0]) = 0;
      v48 = v17;
      v49 = 1;
LABEL_29:
      v50 = *(_QWORD *)(v29 + 8LL * v47 + 32);
      v51 = 16LL * (unsigned int)v26;
      v52 = *(_DWORD *)(v50 + 12);
      v53 = &v23[(unsigned __int64)v51 / 0x10];
      v54 = 16LL * (v52 & (unsigned int)(v26 - 1));
      v55 = &v23[(unsigned __int64)v54 / 0x10];
      if ( v54 == v51 )
        goto LABEL_281;
      v56 = &v23[(unsigned __int64)v54 / 0x10];
      while ( 1 )
      {
        v57 = v56->m128i_i64[0];
        if ( v56->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v57 + 12) == v52 && v50 == v57 )
          {
LABEL_288:
            if ( (_BYTE)v49 )
            {
              v188 = (_QWORD *)v48[14];
              v189 = v56->m128i_i64[1];
              if ( v188 )
              {
                v190 = *((_DWORD *)v188 - 1);
                if ( v190 == *((_DWORD *)v188 - 2) )
                {
                  v267 = (3 * v190 + 1) >> 1;
                  v268 = 8 * v267 + 8;
                  if ( 8 * v190 + 8 >= (unsigned int)v268 || v190 >= v267 )
                  {
                    v13 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v333, "Overflow encountered when expanding vector");
                    *v13 = (char *)off_1C63128;
                    sub_2333C0(v13 + 1, &v333);
                    sub_233E40((__int64)&v333);
                    __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v314 = (__int64)v48;
                  v313[0] = (3 * v190 + 1) >> 1;
                  v269 = (_DWORD *)sub_186B300(v188 - 1, v268);
                  v48 = (_QWORD *)v314;
                  v188 = v269 + 2;
                  *v269 = v313[0];
                  v270 = (unsigned int)v269[1];
                  v48[14] = v269 + 2;
                  LODWORD(v269) = v270;
                  v193 = &v188[v270];
                  v192 = (_DWORD)v269 + 1;
                }
                else
                {
                  v191 = v190;
                  v192 = v190 + 1;
                  v193 = &v188[v191];
                }
              }
              else
              {
                *(_QWORD *)v313 = v48;
                v304 = (_QWORD *)sub_186B270(0x18u);
                v48 = *(_QWORD **)v313;
                v188 = v304 + 1;
                *v304 = 2;
                v192 = 1;
                v48[14] = v188;
                v193 = v188;
              }
              *v193 = v189;
              *((_DWORD *)v188 - 1) = v192;
              v46 = *(_DWORD *)(v29 + 24);
              LOBYTE(v312[0]) |= v189 != v50;
            }
LABEL_40:
            if ( ++v47 < v46 )
            {
              v23 = *(const __m128i **)a4;
              LODWORD(v26) = *(_DWORD *)(a4 + 8);
              goto LABEL_29;
            }
            v244 = v49;
            v17 = v48;
            if ( !(_BYTE)v244 )
              goto LABEL_195;
            if ( LOBYTE(v312[0]) )
            {
              v245 = *v48;
              v246 = v48[14];
              if ( v246 )
                v247 = *(_DWORD *)(v246 - 4);
              else
                v247 = 0;
              v248 = sub_15DC610(
                       v245,
                       *(_QWORD *)(v29 + 16),
                       v247,
                       v246,
                       v52,
                       v244,
                       v307,
                       v308,
                       v310,
                       (int)v311,
                       v312[0],
                       v312[2],
                       v313[0],
                       v313[2],
                       v314,
                       *(void **)v315);
              v249 = v248;
              if ( v248 )
                ++*(_DWORD *)(v248 + 8);
              v250 = (_QWORD *)v17[10];
              if ( v250 )
              {
                v251 = *((_DWORD *)v250 - 1);
                if ( v251 == *((_DWORD *)v250 - 2) )
                {
                  v299 = (3 * v251 + 1) >> 1;
                  v300 = 8 * v299 + 8;
                  if ( 8 * v251 + 8 >= v300 || v251 >= v299 )
                  {
                    v12 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v333, "Overflow encountered when expanding vector");
                    *v12 = (char *)off_1C63128;
                    sub_2333C0(v12 + 1, &v333);
                    sub_233E40((__int64)&v333);
                    __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v301 = (unsigned int *)sub_186B300(v250 - 1, v300);
                  v250 = v301 + 2;
                  *v301 = v299;
                  v251 = v301[1];
                  v17[10] = v250;
                }
              }
              else
              {
                v306 = (_QWORD *)sub_186B270(0x18u);
                v251 = 0;
                *v306 = 2;
                v250 = v306 + 1;
                v17[10] = v250;
              }
              v250[v251] = v249;
              *((_DWORD *)v250 - 1) = v251 + 1;
              v26 = *(unsigned int *)(a4 + 8);
LABEL_361:
              v252 = 2 * v26;
              v253 = 4 * (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 16));
              *(__m128i *)v312 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v249);
              if ( 3 * (int)v26 < v253 )
              {
                v255 = 16LL * v252;
                v286 = (const __m128i *)sub_186B270(v255);
                v23 = v286;
                m128i_i64 = (__int64)v286[v255 / 0x10].m128i_i64;
                if ( v252 )
                {
                  if ( (v255 & 0x10) == 0 || (*v286 = 0, ++v286, v286 != (const __m128i *)m128i_i64) )
                  {
                    do
                    {
                      *v286 = 0;
                      v286 += 2;
                      v286[-1] = 0;
                    }
                    while ( v286 != (const __m128i *)m128i_i64 );
                  }
                }
                v288 = *(__m128i **)a4;
                v254 = v252 - 1;
                v256 = m128i_i64;
                v289 = 16LL * *(unsigned int *)(a4 + 8);
                if ( *(_QWORD *)a4 != *(_QWORD *)a4 + v289 )
                {
                  v290 = v252;
                  v291 = v29;
                  v292 = (__m128i *)v23;
                  v293 = (const __m128i *)(*(_QWORD *)a4 + v289);
                  v294 = *(const __m128i **)a4;
                  do
                  {
                    if ( v294->m128i_i64[0] > 1uLL )
                    {
                      v295 = 16LL * (*(_DWORD *)(v294->m128i_i64[0] + 12) & (unsigned int)v254);
                      v296 = &v292[(unsigned __int64)v295 / 0x10];
                      if ( v255 == v295 )
                      {
LABEL_422:
                        if ( v292 == v296 )
                        {
LABEL_444:
                          v317[0] = v290;
                          v316 = a4;
                          *(_QWORD *)v315 = v17;
                          v314 = m128i_i64;
                          *(_QWORD *)v313 = v291;
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v297 = v292;
                        while ( v297->m128i_i64[0] )
                        {
                          if ( v296 == ++v297 )
                            goto LABEL_444;
                        }
                      }
                      else
                      {
                        v297 = &v292[(unsigned __int64)v295 / 0x10];
                        while ( v297->m128i_i64[0] )
                        {
                          if ( (__m128i *)m128i_i64 == ++v297 )
                            goto LABEL_422;
                        }
                      }
                      *v297 = _mm_loadu_si128(v294);
                    }
                    ++v294;
                  }
                  while ( v293 != v294 );
                  v288 = *(__m128i **)a4;
                  v23 = v292;
                  v29 = v291;
                  v256 = m128i_i64;
                  v252 = v290;
                }
                if ( v288 )
                {
                  v314 = v256;
                  v313[0] = v254;
                  sub_186B220(v288);
                  v256 = v314;
                  v254 = v313[0];
                }
                *(_QWORD *)a4 = v23;
                *(_DWORD *)(a4 + 8) = v252;
                *(_DWORD *)(a4 + 16) = 0;
              }
              else
              {
                v23 = *(const __m128i **)a4;
                v254 = v26 - 1;
                v255 = 16 * v26;
                v256 = *(_QWORD *)a4 + 16 * v26;
              }
              v257 = *(_DWORD *)(v29 + 12);
              v258 = 16LL * (v257 & (unsigned int)v254);
              v259 = &v23[(unsigned __int64)v258 / 0x10];
              if ( v258 == v255 )
              {
                v260 = nullptr;
LABEL_396:
                if ( v259 != v23 )
                {
                  k = (__m128i *)v23;
                  while ( 1 )
                  {
                    v284 = k->m128i_i64[0];
                    if ( k->m128i_i64[0] > 1uLL )
                    {
                      if ( *(_DWORD *)(v284 + 12) == v257 && v29 == v284 )
                        goto LABEL_449;
                    }
                    else
                    {
                      if ( !v284 )
                      {
                        if ( v260 )
                        {
                          --*(_DWORD *)(a4 + 16);
                          k = v260;
                        }
                        goto LABEL_434;
                      }
                      v260 = k;
                    }
                    if ( v259 == ++k )
                      goto LABEL_67;
                  }
                }
                goto LABEL_67;
              }
              k = (__m128i *)&v23[(unsigned __int64)v258 / 0x10];
              v260 = nullptr;
              while ( 2 )
              {
                v261 = k->m128i_i64[0];
                if ( k->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v261 + 12) == v257 && v29 == v261 )
                    goto LABEL_449;
                  goto LABEL_367;
                }
                if ( v261 )
                {
                  v260 = k;
LABEL_367:
                  if ( ++k == (__m128i *)v256 )
                    goto LABEL_396;
                  continue;
                }
                break;
              }
              if ( v260 )
              {
                --*(_DWORD *)(a4 + 16);
                k = v260;
              }
LABEL_434:
              *k = _mm_load_si128((const __m128i *)v312);
              ++*(_DWORD *)(a4 + 12);
LABEL_68:
              v18 = (_QWORD *)v17[13];
              --*((_DWORD *)v18 - 1);
              goto LABEL_7;
            }
            v26 = *(unsigned int *)(a4 + 8);
LABEL_406:
            v249 = v29;
            goto LABEL_361;
          }
        }
        else if ( !v57 )
        {
          goto LABEL_36;
        }
        if ( v53 == ++v56 )
        {
LABEL_281:
          while ( v55 != v23 )
          {
            v187 = v23->m128i_i64[0];
            if ( v23->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v187 + 12) == v52 && v50 == v187 )
              {
                v56 = v23;
                goto LABEL_288;
              }
            }
            else if ( !v187 )
            {
              break;
            }
            ++v23;
          }
LABEL_36:
          v58 = (_QWORD *)v48[13];
          if ( v58 )
          {
            v59 = *((_DWORD *)v58 - 1);
            if ( v59 == *((_DWORD *)v58 - 2) )
            {
              v262 = (3 * v59 + 1) >> 1;
              v263 = 8 * v262 + 8;
              if ( 8 * v59 + 8 >= (unsigned int)v263 || v59 >= v262 )
              {
                v10 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v333, "Overflow encountered when expanding vector");
                *v10 = (char *)off_1C63128;
                sub_2333C0(v10 + 1, &v333);
                sub_233E40((__int64)&v333);
                __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              *(_QWORD *)v313 = v48;
              v264 = sub_186B300(v58 - 1, v263);
              v48 = *(_QWORD **)v313;
              v265 = (_DWORD *)v264;
              v58 = (_QWORD *)(v264 + 8);
              v266 = (unsigned int)v265[1];
              *v265 = v262;
              v48[13] = v58;
              LODWORD(v265) = v266;
              v62 = &v58[v266];
              v61 = (_DWORD)v265 + 1;
            }
            else
            {
              v60 = v59;
              v61 = v59 + 1;
              v62 = &v58[v60];
            }
          }
          else
          {
            *(_QWORD *)v313 = v48;
            v285 = (_QWORD *)sub_186B270(0x18u);
            v48 = *(_QWORD **)v313;
            v61 = 1;
            *v285 = 2;
            v58 = v285 + 1;
            v48[13] = v58;
            v62 = v58;
          }
          *v62 = v50;
          v49 = 0;
          *((_DWORD *)v58 - 1) = v61;
          v46 = *(_DWORD *)(v29 + 24);
          goto LABEL_40;
        }
      }
    }
    *(_QWORD *)v317 = *v17;
    v333 = *(void **)v317;
    *(_QWORD *)v315 = v336;
    v334 = v336;
    v335 = 0x1000000000LL;
    v313[0] = *(_DWORD *)(v29 + 20) + v320;
    v84 = (_OWORD *)sub_186B270(0x80u);
    v86 = *(_DWORD *)(v29 + 72);
    *(_QWORD *)v326 = 8;
    v87 = (int)v84;
    v327 = 0;
    *v84 = 0;
    v84[1] = 0;
    v84[2] = 0;
    v84[3] = 0;
    v84[4] = 0;
    v84[5] = 0;
    v84[6] = 0;
    v84[7] = 0;
    if ( v86 )
    {
      v88 = 0;
      *(_QWORD *)v312 = v329;
      v314 = (__int64)&v325;
      do
      {
        sub_665810(
          v312[0],
          (int)v17,
          *(_QWORD *)(v29 + 16LL * *(unsigned int *)(v29 + 20) + 8 * v88 + 80),
          v314,
          v313[0],
          v85,
          v307,
          v308,
          v310,
          (int)v311,
          v312[0],
          v312[2],
          v313[0],
          *(__int64 *)&v313[2],
          v314,
          v315[0],
          v316,
          v317[0],
          (int)v318,
          v319,
          v320,
          (int)v322,
          v323,
          v324,
          v87,
          v326[0],
          v327,
          v328,
          *(__int64 *)v329,
          v330,
          v331,
          v332,
          v333,
          (int)v334);
        v90 = v335;
        v87 = (int)v325;
        v91 = *(_QWORD *)v329;
        if ( (unsigned int)v335 < HIDWORD(v335) )
        {
          v89 = v334;
        }
        else
        {
          LODWORD(v316) = 2 * HIDWORD(v335);
          v92 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v335)));
          v90 = v335;
          v93 = v334;
          v89 = v92;
          if ( (_DWORD)v335 )
          {
            if ( (unsigned int)(v335 - 1) <= 2 || v92 == (char *)v334 + 8 )
            {
              v181 = 0;
              v182 = 8LL * (unsigned int)v335;
              do
              {
                v89[v181 / 8] = v93[v181 / 8];
                v181 += 8LL;
              }
              while ( v181 != v182 );
            }
            else
            {
              v94 = 0;
              v95 = 16LL * ((unsigned int)v335 >> 1);
              do
              {
                *(__m128i *)&v89[v94 / 8] = _mm_loadu_si128((const __m128i *)&v93[v94 / 8]);
                v94 += 16LL;
              }
              while ( v94 != v95 );
              if ( (v90 & 1) != 0 )
                v89[v90 & 0xFFFFFFFE] = v93[v90 & 0xFFFFFFFE];
            }
          }
          if ( v93 != *(_QWORD **)v315 && v93 )
          {
            v318 = v89;
            sub_186B220(v93);
            v90 = v335;
            v89 = v318;
          }
          v334 = v89;
          HIDWORD(v335) = v316;
        }
        ++v88;
        v89[v90] = v91;
        LODWORD(v335) = v90 + 1;
      }
      while ( (unsigned int)v88 < *(_DWORD *)(v29 + 72) );
    }
    else
    {
      *(_QWORD *)v312 = v329;
      v314 = (__int64)&v325;
    }
    sub_665810(
      v312[0],
      (int)v17,
      *(_QWORD *)(v29 + 24),
      v314,
      v313[0],
      v85,
      v307,
      v308,
      v310,
      (int)v311,
      v312[0],
      v312[2],
      v313[0],
      *(__int64 *)&v313[2],
      v314,
      v315[0],
      v316,
      v317[0],
      (int)v318,
      v319,
      v320,
      (int)v322,
      v323,
      v324,
      v87,
      v326[0],
      v327,
      v328,
      *(__int64 *)v329,
      v330,
      v331,
      v332,
      v333,
      (int)v334);
    v96 = *(double *)v17;
    v314 = *(_QWORD *)v329;
    v97 = v325;
    v98 = sub_15DB950(*(_QWORD *)&v96, v29, (unsigned int)v335, v334, *(_QWORD *)v329);
    *(_QWORD *)v313 = v98;
    if ( v98 )
      ++*(_DWORD *)(v98 + 8);
    v99 = (_QWORD *)v17[10];
    if ( v99 )
    {
      v100 = *((_DWORD *)v99 - 1);
      if ( v100 == *((_DWORD *)v99 - 2) )
      {
        v148 = (3 * v100 + 1) >> 1;
        v149 = 8 * v148 + 8;
        if ( 8 * v100 + 8 >= v149 || v100 >= v148 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(*(__int64 **)v312, "Overflow encountered when expanding vector");
          v8 = *(_QWORD *)v312;
          v9 = *(_QWORD **)v312;
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v9);
          sub_233E40(v8);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v150 = (unsigned int *)sub_186B300(v99 - 1, v149);
        v151 = v150[1];
        v99 = v150 + 2;
        *v150 = v148;
        v17[10] = v150 + 2;
        LODWORD(v150) = v151;
        v103 = &v99[v151];
        v102 = (_DWORD)v150 + 1;
      }
      else
      {
        v101 = v100;
        v102 = v100 + 1;
        v103 = &v99[v101];
      }
    }
    else
    {
      v271 = (_QWORD *)sub_186B270(0x18u);
      *v271 = 2;
      v102 = 1;
      v99 = v271 + 1;
      v17[10] = v99;
      v103 = v99;
    }
    *v103 = *(_QWORD *)v313;
    *((_DWORD *)v99 - 1) = v102;
    v104 = *(unsigned int *)(a4 + 8);
    if ( 3 * (int)v104 < (unsigned int)(4 * (*(_DWORD *)(a4 + 12) + *(_DWORD *)(a4 + 16))) )
    {
      LODWORD(v316) = 2 * v104;
      *(_QWORD *)v312 = 16LL * (unsigned int)(2 * v104);
      v162 = (__m128 *)sub_186B270(*(size_t *)v312);
      v107 = *(_QWORD *)v312;
      v163 = v316;
      v105 = v162;
      v164 = (__m128i *)((char *)v162 + *(_QWORD *)v312);
      if ( (_DWORD)v316 )
      {
        if ( (v312[0] & 0x10) == 0 || (*v162 = 0, ++v162, v162 != (__m128 *)v164) )
        {
          do
          {
            *v162 = 0;
            v162 += 2;
            v162[-1] = 0;
          }
          while ( v162 != (__m128 *)v164 );
        }
      }
      v165 = *(const __m128i **)a4;
      v106 = v163 - 1;
      v108 = (__int64)v164;
      v166 = (__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 8));
      if ( *(__m128i **)a4 != v166 )
      {
        do
        {
          if ( v165->m128i_i64[0] > 1uLL )
          {
            v167 = 16LL * (*(_DWORD *)(v165->m128i_i64[0] + 12) & (unsigned int)v106);
            v168 = &v105[(unsigned __int64)v167 / 0x10];
            if ( v107 == v167 )
            {
LABEL_209:
              if ( v105 == v168 )
              {
LABEL_270:
                v322 = v164;
                v321 = v163;
                v319 = v107;
                LODWORD(v318) = v163 - 1;
                v316 = (__int64)v166;
                *(_QWORD *)v312 = v165;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v169 = (__m128i *)v105;
              while ( v169->m128i_i64[0] )
              {
                if ( v168 == (__m128 *)++v169 )
                  goto LABEL_270;
              }
            }
            else
            {
              v169 = (__m128i *)&v105[(unsigned __int64)v167 / 0x10];
              while ( v169->m128i_i64[0] )
              {
                if ( v164 == ++v169 )
                  goto LABEL_209;
              }
            }
            *v169 = _mm_loadu_si128(v165);
          }
          ++v165;
        }
        while ( v166 != v165 );
        v166 = *(__m128i **)a4;
      }
      if ( v166 )
      {
        LODWORD(v318) = v163;
        v316 = v107;
        v312[0] = v163 - 1;
        sub_186B220(v166);
        v163 = (int)v318;
        v107 = v316;
        v106 = v312[0];
      }
      *(_QWORD *)a4 = v105;
      *(_DWORD *)(a4 + 8) = v163;
      *(_DWORD *)(a4 + 16) = 0;
    }
    else
    {
      v105 = *(__m128 **)a4;
      v106 = v104 - 1;
      v107 = 16 * v104;
      v108 = *(_QWORD *)a4 + 16 * v104;
    }
    v109 = *(_DWORD *)(v29 + 12);
    v110 = _mm_loadh_ps((const double *)v313);
    v111 = 16LL * (v109 & (unsigned int)v106);
    v112 = &v105[(unsigned __int64)v111 / 0x10];
    if ( v111 != v107 )
    {
      v113 = &v105[(unsigned __int64)v111 / 0x10];
      v114 = nullptr;
      while ( 1 )
      {
        v115 = v113->m128_u64[0];
        if ( v113->m128_u64[0] > 1 )
        {
          if ( *(_DWORD *)(v115 + 12) == v109 && v29 == v115 )
          {
            *v113 = v110;
            goto LABEL_180;
          }
        }
        else
        {
          if ( !v115 )
          {
            if ( v114 )
              goto LABEL_241;
            v114 = v113;
            goto LABEL_242;
          }
          v114 = v113;
        }
        if ( ++v113 == (__m128 *)v108 )
          goto LABEL_146;
      }
    }
    v114 = nullptr;
LABEL_146:
    while ( 2 )
    {
      if ( v112 == v105 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v136 = v105->m128_u64[0];
      if ( v105->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v136 + 12) == v109 && v29 == v136 )
        {
          *v105 = v110;
          goto LABEL_180;
        }
        goto LABEL_145;
      }
      if ( v136 )
      {
        v114 = v105;
LABEL_145:
        ++v105;
        continue;
      }
      break;
    }
    if ( v114 )
LABEL_241:
      --*(_DWORD *)(a4 + 16);
    else
      v114 = v105;
LABEL_242:
    *v114 = v110;
    ++*(_DWORD *)(a4 + 12);
LABEL_180:
    --*(_DWORD *)(v17[13] - 4LL);
    if ( v97 )
      sub_186B220(v97);
    v156 = v314;
    if ( v314 )
    {
      v312[0] = *(_DWORD *)(v314 + 8);
      v157 = v312[0] == 1;
      *(_DWORD *)(v314 + 8) = v312[0] - 1;
      if ( v157 )
        sub_15D7BC0(*(_QWORD *)v317, v156);
    }
    v158 = (char *)v334;
    v159 = (char *)v334 + 8 * (unsigned int)v335;
    if ( v334 < v159 )
    {
      do
      {
        while ( 1 )
        {
          v160 = *(_QWORD *)v158;
          if ( *(_QWORD *)v158 )
          {
            v161 = v333;
            v157 = (*(_DWORD *)(v160 + 8))-- == 1;
            if ( v157 )
              break;
          }
          v158 += 8;
          if ( v158 >= v159 )
            goto LABEL_191;
        }
        sub_15D7BC0(v161, v160);
        v158 += 8;
      }
      while ( v158 < v159 );
LABEL_191:
      v158 = (char *)v334;
    }
    if ( v158 != *(char **)v315 && v158 )
      sub_186B220(v158);
LABEL_195:
    v18 = (_QWORD *)v17[13];
    v23 = *(const __m128i **)a4;
LABEL_70:
    if ( v18 )
      continue;
    break;
  }
  v25 = *(unsigned int *)(a4 + 8);
LABEL_72:
  v70 = v25 - 1;
  v71 = 16 * v25;
  v72 = &v23[(unsigned __int64)v71 / 0x10];
  v73 = *(_DWORD *)(v310 + 12);
  v74 = 16LL * (v73 & v70);
  v75 = &v23[(unsigned __int64)v74 / 0x10];
  if ( v74 == v71 )
  {
LABEL_80:
    while ( v75 != v23 )
    {
      v78 = v23->m128i_i64[0];
      if ( v23->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v78 + 12) == v73 && v78 == v310 )
        {
          v76 = v23;
          goto LABEL_173;
        }
      }
      else if ( !v78 )
      {
        break;
      }
      ++v23;
    }
LABEL_460:
    BUG();
  }
  v76 = &v23[(unsigned __int64)v74 / 0x10];
  while ( 1 )
  {
    while ( 1 )
    {
      v77 = v76->m128i_i64[0];
      if ( v76->m128i_i64[0] > 1uLL )
        break;
      if ( !v77 )
        goto LABEL_460;
      if ( v72 == ++v76 )
        goto LABEL_80;
    }
    if ( *(_DWORD *)(v77 + 12) == v73 && v77 == v310 )
      break;
    if ( v72 == ++v76 )
      goto LABEL_80;
  }
LABEL_173:
  v154 = v76->m128i_i64[1];
  *v311 = _mm_loadh_ps((const double *)v17);
  if ( v154 )
    ++*(_DWORD *)(v154 + 8);
  return v311;
}

