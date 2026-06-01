__int64 __fastcall sub_3B7DC0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  int v17; // edi
  __int64 *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 *v23; // r8
  __int64 *i; // rax
  __int64 v25; // rdx
  unsigned int v26; // ebp
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rcx
  int v37; // edx
  __int64 *v38; // rcx
  unsigned int v39; // edx
  __int64 v40; // rbp
  int v41; // r9d
  size_t v42; // r15
  __int64 *v43; // r12
  int v44; // ecx
  __int64 v45; // r9
  __int64 v46; // rsi
  __int64 *v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rax
  int *v51; // rax
  int v52; // edi
  char *v53; // rdx
  __int64 v54; // rax
  unsigned int v55; // ecx
  char *v56; // rsi
  __int64 v57; // rcx
  char *v58; // r8
  char *v59; // rax
  int v60; // ecx
  __int64 v61; // r13
  _QWORD *v62; // rax
  void *v63; // r14
  __int64 v64; // rdi
  int v65; // ebp
  __int64 v66; // rax
  __int64 v67; // rbx
  unsigned int v68; // edx
  __int64 v69; // r12
  __int64 v70; // rdx
  __int64 v71; // r15
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rbp
  __int64 v74; // r15
  __int64 v75; // r10
  __int64 v76; // r12
  unsigned __int64 v77; // rdx
  __int64 *v78; // rbx
  __int64 v79; // rdx
  void *v80; // rdi
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // r14
  unsigned int v84; // eax
  __int64 v85; // rdx
  int v86; // eax
  __int64 *v87; // rdx
  void *v88; // r14
  __int64 v89; // rax
  int v90; // ecx
  __int64 v91; // rbp
  __int64 v92; // rsi
  __int64 v93; // rdi
  bool v94; // zf
  __int64 *v95; // rbp
  __int64 *v96; // r12
  __int64 v97; // rsi
  __int64 result; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rax
  unsigned int v103; // ebp
  unsigned int v104; // ecx
  unsigned int *v105; // rdx
  unsigned int v106; // edx
  size_t v107; // rsi
  unsigned int *v108; // rax
  __int64 v109; // rdx
  _QWORD *v110; // rax
  unsigned __int64 v111; // rax
  _QWORD *v112; // rax
  _DWORD *v113; // rax
  unsigned int v114; // ebx
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  unsigned int v117; // ebp
  size_t v118; // rsi
  unsigned int *v119; // rax
  unsigned int v120; // eax
  int v121; // eax
  __int64 v122; // rax
  __int64 v123; // r8
  __int64 v124; // rax
  unsigned int v125; // ebp
  __int64 v126; // rbx
  char v127; // dl
  __int64 v128; // r14
  __int64 v129; // r12
  _QWORD *v130; // rcx
  unsigned int v131; // eax
  __int64 v132; // rdx
  int v133; // eax
  _QWORD *v134; // rdx
  unsigned int v135; // r15d
  unsigned int v136; // edx
  unsigned int *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  int v140; // r8d
  __m128i *v141; // rdx
  __m128i *v142; // rax
  const __m128i *v143; // r14
  __m128i *v144; // rcx
  __int64 v145; // rdx
  __m128i *v146; // rsi
  __m128i *v147; // rdx
  _QWORD *v148; // rax
  _QWORD *v149; // rax
  int v150; // edx
  unsigned int v151; // ebx
  int v152; // eax
  __int64 v153; // r8
  int v154; // r14d
  __int64 v155; // rax
  __int64 v156; // rdi
  unsigned int v157; // edx
  __int64 v158; // r15
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rbx
  __int64 v162; // r12
  unsigned __int64 v163; // rax
  char v164; // al
  __int64 v165; // rax
  __int64 v166; // rbp
  __int64 v167; // rax
  unsigned __int64 v168; // r12
  int v169; // edx
  unsigned int v170; // ecx
  int v171; // eax
  int v172; // r14d
  __int64 v173; // rax
  __int64 v174; // rbx
  unsigned int v175; // edx
  __int64 v176; // r15
  __int64 v177; // rdx
  __int64 v178; // r9
  __int64 v179; // rcx
  unsigned __int64 v180; // rax
  unsigned __int64 v181; // rax
  char v182; // al
  __int64 v183; // rax
  char v184; // al
  __int64 v185; // rbx
  __int64 v186; // rax
  int v187; // ecx
  __int64 v188; // rdx
  __int64 v189; // rsi
  const __m128i *v190; // rbx
  __m128i *v191; // r15
  __int64 v192; // rdx
  __int64 v193; // rsi
  __m128i *v194; // rdx
  __m128i v195; // xmm0
  size_t v196; // r12
  __int64 v197; // rax
  __int64 v198; // r15
  __int64 v199; // rcx
  size_t v200; // rdx
  __m128i *v201; // rdi
  __int64 v202; // rdx
  const __m128i *v203; // r14
  __int64 v204; // rdx
  __m128i *v205; // rsi
  __m128i *v206; // rdx
  unsigned __int64 v207; // rax
  char v208; // al
  char **exception; // r12
  __int64 v210; // rdx
  char **v211; // r13
  __int64 v212; // rdx
  char **v213; // r12
  __int64 v214; // rdx
  char **v215; // r12
  __int64 v216; // rdx
  int sb; // [rsp+0h] [rbp-148h]
  _DWORD *s; // [rsp+0h] [rbp-148h]
  int sa; // [rsp+0h] [rbp-148h]
  __int64 v221; // [rsp+18h] [rbp-130h]
  __int64 v222; // [rsp+28h] [rbp-120h]
  __int64 v223; // [rsp+28h] [rbp-120h]
  unsigned int v224; // [rsp+30h] [rbp-118h]
  __int64 v225; // [rsp+30h] [rbp-118h]
  __int64 v226; // [rsp+30h] [rbp-118h]
  __int64 v227; // [rsp+30h] [rbp-118h]
  __int64 v228; // [rsp+30h] [rbp-118h]
  __int64 v229; // [rsp+30h] [rbp-118h]
  __int64 v230; // [rsp+30h] [rbp-118h]
  __int64 v231; // [rsp+30h] [rbp-118h]
  size_t v232; // [rsp+30h] [rbp-118h]
  __int64 v233; // [rsp+30h] [rbp-118h]
  __int64 v234; // [rsp+30h] [rbp-118h]
  __int64 v235; // [rsp+30h] [rbp-118h]
  __int64 v236; // [rsp+38h] [rbp-110h]
  __int64 v237; // [rsp+38h] [rbp-110h]
  __int64 v238; // [rsp+38h] [rbp-110h]
  __int64 v239; // [rsp+38h] [rbp-110h]
  int v240; // [rsp+38h] [rbp-110h]
  __int64 v241; // [rsp+38h] [rbp-110h]
  const __m128i *v242; // [rsp+38h] [rbp-110h]
  __int64 v243; // [rsp+38h] [rbp-110h]
  __int64 v244; // [rsp+40h] [rbp-108h]
  __int64 v245; // [rsp+40h] [rbp-108h]
  __int64 v246; // [rsp+40h] [rbp-108h]
  int v247; // [rsp+40h] [rbp-108h]
  _QWORD *v248; // [rsp+48h] [rbp-100h]
  __int64 v250; // [rsp+58h] [rbp-F0h]
  __int64 v251; // [rsp+60h] [rbp-E8h]
  __int64 v252; // [rsp+68h] [rbp-E0h]
  __int64 v253; // [rsp+70h] [rbp-D8h]
  _QWORD v254[2]; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v255[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v256[5]; // [rsp+B0h] [rbp-98h] BYREF
  __m128i v257; // [rsp+E8h] [rbp-60h]
  _QWORD *v258; // [rsp+F8h] [rbp-50h]
  __int64 v259; // [rsp+100h] [rbp-48h]
  int v260; // [rsp+108h] [rbp-40h]

  v8 = *(unsigned int *)(a1 + 208);
  v9 = *(__int64 **)(a1 + 200);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 16;
  v12 = (__int64 *)((char *)v9 + v8);
  v13 = 16LL * (v10 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 == v8 )
  {
LABEL_101:
    while ( v14 != v9 )
    {
      v100 = *v9;
      if ( (unsigned __int64)*v9 > 1 )
      {
        if ( *(_DWORD *)(v100 + 12) == v10 && a2 == v100 )
        {
          v15 = v9;
          goto LABEL_10;
        }
      }
      else if ( !v100 )
      {
        break;
      }
      v9 += 2;
    }
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 836);
  }
  v15 = &v9[(unsigned __int64)v13 / 8];
  while ( 1 )
  {
    v16 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
      break;
    if ( !v16 )
      goto LABEL_8;
LABEL_5:
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_101;
  }
  if ( *(_DWORD *)(v16 + 12) != v10 || a2 != v16 )
    goto LABEL_5;
LABEL_10:
  v222 = v15[1];
  v17 = *(_DWORD *)(a4 + 12);
  v252 = *(_QWORD *)(a1 + 8);
  v18 = *(__int64 **)(a1 + 224);
  v19 = *(unsigned int *)(a1 + 232);
  v20 = v19 - 1;
  v19 *= 16;
  v21 = (__int64 *)((char *)v18 + v19);
  v22 = 16LL * (v17 & v20);
  v23 = &v18[(unsigned __int64)v22 / 8];
  if ( v22 != v19 )
  {
    for ( i = &v18[(unsigned __int64)v22 / 8]; v21 != i; i += 2 )
    {
      v25 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v25 + 12) == v17 && a4 == v25 )
        {
LABEL_40:
          v50 = i[1];
          v221 = v50;
          if ( v50 )
            ++*(_DWORD *)(v50 + 8);
          goto LABEL_42;
        }
      }
      else if ( !v25 )
      {
        goto LABEL_17;
      }
    }
  }
  for ( ; v23 != v18; v18 += 2 )
  {
    v99 = *v18;
    if ( (unsigned __int64)*v18 > 1 )
    {
      if ( *(_DWORD *)(v99 + 12) == v17 && a4 == v99 )
      {
        i = v18;
        goto LABEL_40;
      }
    }
    else if ( !v99 )
    {
      break;
    }
  }
LABEL_17:
  v26 = *(_DWORD *)(a4 + 16);
  v27 = sub_15D1F10(a4);
  v28 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 840LL);
  if ( v27 != v28 )
  {
    if ( !(unsigned __int8)sub_1673B10(a1 + 24, v27) )
    {
      sub_1872CE0("");
      sub_1873130(114, 761);
    }
    v29 = *(_QWORD *)(*(_QWORD *)(v27 + 24) + 8LL);
    if ( *(_BYTE *)(v29 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v30 = *(_QWORD *)(sub_3B49C0(a1 + 168, *(_DWORD *)v29) + 16);
    if ( v30 )
    {
      v31 = *(unsigned int *)(v30 - 4);
      v32 = 1;
      if ( (unsigned int)v31 > 1 )
      {
        do
          ++v32;
        while ( v31 >= 1LL << v32 );
      }
    }
    else
    {
      v32 = 1;
    }
    v28 = sub_1674700(a1 + 24, v32);
  }
  v33 = sub_15DB5C0(v252, v26, v28);
  v221 = v33;
  if ( v33 )
    *(_DWORD *)(v33 + 8) += 2;
  v34 = *(_QWORD **)(a1 + 256);
  if ( v34 )
  {
    v35 = *((_DWORD *)v34 - 1);
    if ( v35 == *((_DWORD *)v34 - 2) )
    {
      v103 = (3 * v35 + 1) >> 1;
      v104 = 8 * v103 + 8;
      if ( 8 * v35 + 8 >= v104 || v35 >= v103 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C7E7E(v256, "Overflow encountered when expanding vector", v210);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v256);
        sub_233E40((__int64)v256);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v105 = (unsigned int *)sub_186B300(v34 - 1, v104);
      v34 = v105 + 2;
      *v105 = v103;
      *(_QWORD *)(a1 + 256) = v105 + 2;
      LODWORD(v105) = v105[1];
      v38 = &v34[(unsigned int)v105];
      v37 = (_DWORD)v105 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v34[v36];
    }
  }
  else
  {
    v148 = (_QWORD *)sub_186B270(0x18u);
    *v148 = 2;
    v34 = v148 + 1;
    v37 = 1;
    *(_QWORD *)(a1 + 256) = v34;
    v38 = v34;
  }
  *v38 = v221;
  *((_DWORD *)v34 - 1) = v37;
  v39 = *(_DWORD *)(a1 + 232);
  if ( 3 * v39 < 4 * (*(_DWORD *)(a1 + 236) + *(_DWORD *)(a1 + 240)) )
  {
    sa = 2 * v39;
    v42 = 32LL * v39;
    v139 = sub_186B270(v42);
    v140 = sa;
    v40 = v139;
    v141 = (__m128i *)v139;
    v142 = (__m128i *)(v42 + v139);
    if ( sa )
    {
      if ( (((_BYTE)v142 - (_BYTE)v40) & 0x10) == 0
        || (v141 = (__m128i *)(v40 + 16), *(_OWORD *)v40 = 0, v142 != (__m128i *)(v40 + 16)) )
      {
        do
        {
          *v141 = 0;
          v141 += 2;
          v141[-1] = 0;
        }
        while ( v142 != v141 );
      }
    }
    v41 = sa - 1;
    v43 = (__int64 *)v142;
    v143 = *(const __m128i **)(a1 + 224);
    v144 = (__m128i *)&v143[*(unsigned int *)(a1 + 232)];
    if ( v143 != v144 )
    {
      do
      {
        if ( v143->m128i_i64[0] > 1uLL )
        {
          v145 = 16LL * (*(_DWORD *)(v143->m128i_i64[0] + 12) & (unsigned int)v41);
          v146 = (__m128i *)(v40 + v145);
          if ( v42 == v145 )
          {
LABEL_198:
            if ( (__m128i *)v40 == v146 )
            {
LABEL_211:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v147 = (__m128i *)v40;
            while ( v147->m128i_i64[0] )
            {
              if ( v146 == ++v147 )
                goto LABEL_211;
            }
          }
          else
          {
            v147 = (__m128i *)(v40 + v145);
            while ( v147->m128i_i64[0] )
            {
              if ( v142 == ++v147 )
                goto LABEL_198;
            }
          }
          *v147 = _mm_loadu_si128(v143);
        }
        ++v143;
      }
      while ( v144 != v143 );
      v144 = *(__m128i **)(a1 + 224);
    }
    if ( v144 )
    {
      sub_186B220(v144);
      v140 = sa;
      v41 = sa - 1;
    }
    *(_QWORD *)(a1 + 224) = v40;
    *(_DWORD *)(a1 + 232) = v140;
    *(_DWORD *)(a1 + 240) = 0;
  }
  else
  {
    v40 = *(_QWORD *)(a1 + 224);
    v41 = v39 - 1;
    v42 = 16LL * v39;
    v43 = (__int64 *)(v40 + v42);
  }
  v44 = *(_DWORD *)(a4 + 12);
  v45 = 16LL * (v44 & (unsigned int)v41);
  v46 = v40 + v45;
  if ( v45 != v42 )
  {
    v47 = (__int64 *)(v40 + v45);
    v48 = nullptr;
    while ( 1 )
    {
      v49 = *v47;
      if ( (unsigned __int64)*v47 > 1 )
      {
        if ( *(_DWORD *)(v49 + 12) == v44 && a4 == v49 )
        {
          *v47 = a4;
          v47[1] = v221;
          goto LABEL_42;
        }
      }
      else
      {
        if ( !v49 )
        {
          if ( v48 )
            goto LABEL_208;
          v48 = v47;
          goto LABEL_209;
        }
        v48 = v47;
      }
      v47 += 2;
      if ( v47 == v43 )
        goto LABEL_120;
    }
  }
  v48 = nullptr;
LABEL_120:
  while ( 2 )
  {
    if ( v46 == v40 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v102 = *(_QWORD *)v40;
    if ( *(_QWORD *)v40 > 1u )
    {
      if ( *(_DWORD *)(v102 + 12) == v44 && a4 == v102 )
      {
        *(_QWORD *)v40 = a4;
        *(_QWORD *)(v40 + 8) = v221;
        goto LABEL_42;
      }
      goto LABEL_119;
    }
    if ( v102 )
    {
      v48 = (_QWORD *)v40;
LABEL_119:
      v40 += 16;
      continue;
    }
    break;
  }
  if ( v48 )
LABEL_208:
    --*(_DWORD *)(a1 + 240);
  else
    v48 = (_QWORD *)v40;
LABEL_209:
  *v48 = a4;
  v48[1] = v221;
  ++*(_DWORD *)(a1 + 236);
LABEL_42:
  v51 = *(int **)(*(_QWORD *)(sub_15D1F10(a5) + 24) + 8LL);
  if ( *((_BYTE *)v51 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v52 = *v51;
  v53 = *(char **)(a1 + 168);
  v54 = *(unsigned int *)(a1 + 176);
  v55 = v54 - 1;
  v54 *= 24;
  v56 = &v53[v54];
  v57 = 24LL * (v52 & v55);
  v58 = &v53[v57];
  if ( v57 != v54 )
  {
    v59 = &v53[v57];
    do
    {
      v60 = *((_DWORD *)v59 + 1);
      if ( v60 == 2 )
      {
        if ( v52 == *(_DWORD *)v59 && v52 == *((_DWORD *)v59 + 2) )
          goto LABEL_50;
      }
      else if ( !v60 )
      {
        goto LABEL_335;
      }
      v59 += 24;
    }
    while ( v56 != v59 );
  }
  if ( v53 == v58 )
LABEL_335:
    BUG();
  while ( 2 )
  {
    v101 = *((_DWORD *)v53 + 1);
    if ( v101 != 2 )
    {
      if ( !v101 )
        goto LABEL_335;
LABEL_112:
      v53 += 24;
      if ( v58 == v53 )
        goto LABEL_335;
      continue;
    }
    break;
  }
  if ( v52 != *(_DWORD *)v53 || v52 != *((_DWORD *)v53 + 2) )
    goto LABEL_112;
  v59 = v53;
LABEL_50:
  v61 = *((_QWORD *)v59 + 2);
  if ( *(_BYTE *)(v61 + 24) )
    goto LABEL_51;
  v112 = (_QWORD *)sub_186B270(0x18u);
  v248 = v112 + 1;
  v112[1] = *(_QWORD *)v61;
  *v112 = 0x100000002LL;
  v113 = *(_DWORD **)(v61 + 16);
  s = v113;
  if ( v113 )
  {
    v114 = *(v113 - 1);
    if ( v114 )
    {
      v115 = (_QWORD *)sub_186B270(0xAu);
      *v115 = 2;
      v116 = v115 + 1;
      s = v116;
      while ( 1 )
      {
        v120 = *((_DWORD *)v116 - 2);
        if ( v120 >= v114 )
          break;
        v117 = (3 * v120 + 1) >> 1;
        v118 = v117 + 8;
        if ( v120 + 8 >= (unsigned int)v118 || v120 >= v117 )
        {
          v213 = (char **)__cxa_allocate_exception(0x28u);
          sub_C7E7E(v256, "Overflow encountered when expanding vector", v214);
          *v213 = (char *)off_1C63128;
          sub_2333C0(v213 + 1, v256);
          sub_233E40((__int64)v256);
          __cxa_throw(v213, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v119 = (unsigned int *)sub_186B300(s - 2, v118);
        *v119 = v117;
        s = v119 + 2;
        v116 = v119 + 2;
      }
      *(s - 1) = v114;
      memset(s, 0, v114);
    }
    else
    {
      s = nullptr;
    }
  }
LABEL_157:
  while ( 2 )
  {
    while ( 2 )
    {
      v121 = *((_DWORD *)v248 - 1);
      if ( !v121 )
      {
        *(_BYTE *)(v61 + 24) = 1;
        if ( s )
          sub_186B220(s - 2);
        sub_186B220(v248 - 1);
        goto LABEL_51;
      }
      v122 = (unsigned int)(v121 - 1);
      v123 = v248[v122];
      if ( *((_BYTE *)s + *(unsigned int *)(v123 + 36)) )
      {
        *((_DWORD *)v248 - 1) = v122;
        continue;
      }
      break;
    }
    v124 = *(_QWORD *)(v123 + 24);
    if ( !v124 )
    {
      v125 = 0;
LABEL_221:
      v150 = *(_DWORD *)(v123 + 80);
      v151 = 2 * v150;
      if ( 3 * v150 < (unsigned int)(4 * (*(_DWORD *)(v123 + 84) + *(_DWORD *)(v123 + 88))) )
      {
        v234 = v123;
        v196 = 16LL * v151;
        v197 = sub_186B270(v196);
        v123 = v234;
        v198 = v197;
        v199 = v197;
        v200 = v197 + v196;
        if ( v151 )
        {
          if ( (v196 & 0x10) == 0 || (v199 = v197 + 16, *(_QWORD *)(v197 + 8) = 0, v197 + 16 != v200) )
          {
            do
            {
              *(_QWORD *)(v199 + 8) = 0;
              v199 += 32;
              *(_QWORD *)(v199 - 8) = 0;
            }
            while ( v199 != v200 );
          }
        }
        v201 = *(__m128i **)(v234 + 72);
        v202 = *(unsigned int *)(v234 + 80);
        v203 = v201;
        v242 = &v201[v202];
        if ( v201 != &v201[v202] )
        {
          do
          {
            if ( v203->m128i_i64[1] > 1uLL )
            {
              v204 = 16LL * (v203->m128i_i32[0] & (v151 - 1));
              v205 = (__m128i *)(v197 + v204);
              if ( v196 == v204 )
              {
LABEL_308:
                if ( (__m128i *)v197 == v205 )
                {
LABEL_331:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v206 = (__m128i *)v197;
                while ( v206->m128i_i64[1] )
                {
                  if ( v205 == ++v206 )
                    goto LABEL_331;
                }
              }
              else
              {
                v206 = (__m128i *)(v197 + v204);
                while ( v206->m128i_i64[1] )
                {
                  if ( (__m128i *)(v197 + v196) == ++v206 )
                    goto LABEL_308;
                }
              }
              *v206 = _mm_loadu_si128(v203);
            }
            ++v203;
          }
          while ( v242 != v203 );
          v201 = *(__m128i **)(v234 + 72);
        }
        if ( v201 )
        {
          sub_186B220(v201);
          v123 = v234;
        }
        *(_QWORD *)(v123 + 72) = v198;
        *(_DWORD *)(v123 + 80) = v151;
        *(_DWORD *)(v123 + 88) = 0;
      }
      v227 = v123;
      v152 = sub_182A670(*(_QWORD *)(v123 + 56), *(_QWORD *)(v123 + 8));
      v153 = v227;
      v154 = v152;
      v155 = *(unsigned int *)(v227 + 80);
      v156 = *(_QWORD *)(v227 + 72);
      v157 = v155 - 1;
      v155 *= 16;
      v158 = v156 + v155;
      v159 = 16LL * (v154 & v157);
      v160 = v156 + v159;
      if ( v159 == v155 )
      {
        v162 = 0;
      }
      else
      {
        v161 = v156 + v159;
        v162 = 0;
        do
        {
          v163 = *(_QWORD *)(v161 + 8);
          if ( v163 > 1 )
          {
            if ( v154 == *(_DWORD *)v161 )
            {
              v237 = v160;
              v228 = v153;
              v164 = sub_182A660(*(_QWORD *)(v153 + 64), *(_QWORD *)(v163 + 8), *(_QWORD *)(v153 + 8));
              v153 = v228;
              v160 = v237;
              if ( v164 )
              {
LABEL_230:
                *(_QWORD *)(v161 + 8) = v153;
                goto LABEL_231;
              }
            }
          }
          else
          {
            if ( !v163 )
            {
LABEL_328:
              if ( v162 )
              {
                --*(_DWORD *)(v153 + 88);
                v161 = v162;
              }
              *(_QWORD *)(v161 + 8) = v153;
              *(_DWORD *)v161 = v154;
              ++*(_DWORD *)(v153 + 84);
LABEL_231:
              v251 = 0;
              v253 = 8LL * v125;
              if ( v125 )
              {
                do
                {
                  v165 = *(_QWORD *)(*(_QWORD *)(v153 + 24) + v251);
                  v166 = *(_QWORD *)(v165 + 72);
                  v167 = v166 + 16LL * *(unsigned int *)(v165 + 80);
                  v250 = v167;
                  if ( v166 != v167 )
                  {
                    while ( *(_QWORD *)(v166 + 8) <= 1u )
                    {
                      v166 += 16;
                      if ( v167 == v166 )
                        goto LABEL_260;
                    }
                    if ( v166 != v167 )
                    {
                      v168 = *(_QWORD *)(v166 + 8);
                      do
                      {
                        v169 = *(_DWORD *)(v153 + 80);
                        v170 = 2 * v169;
                        if ( 3 * v169 < (unsigned int)(4 * (*(_DWORD *)(v153 + 84) + *(_DWORD *)(v153 + 88))) )
                        {
                          v185 = v170;
                          v246 = v153;
                          v240 = 2 * v169;
                          v232 = 16LL * v170;
                          v186 = sub_186B270(v232);
                          v187 = v240;
                          v153 = v246;
                          v188 = v186;
                          v189 = v186 + 16 * v185;
                          if ( v240 )
                          {
                            if ( ((16 * (_BYTE)v185) & 0x10) == 0
                              || (v188 = v186 + 16, *(_QWORD *)(v186 + 8) = 0, v186 + 16 != v189) )
                            {
                              do
                              {
                                *(_QWORD *)(v188 + 8) = 0;
                                v188 += 32;
                                *(_QWORD *)(v188 - 8) = 0;
                              }
                              while ( v188 != v189 );
                            }
                          }
                          v190 = *(const __m128i **)(v246 + 72);
                          v191 = (__m128i *)&v190[*(unsigned int *)(v246 + 80)];
                          if ( v190 != v191 )
                          {
                            do
                            {
                              while ( v190->m128i_i64[1] <= 1uLL )
                              {
                                if ( v191 == ++v190 )
                                  goto LABEL_281;
                              }
                              v192 = 16LL * (v190->m128i_i32[0] & (unsigned int)(v240 - 1));
                              v193 = v186 + v192;
                              if ( v232 == v192 )
                              {
LABEL_285:
                                if ( v186 == v193 )
                                {
LABEL_290:
                                  sub_1872CE0("");
                                  sub_1873130(114, 213);
                                }
                                v194 = (__m128i *)v186;
                                while ( v194->m128i_i64[1] )
                                {
                                  if ( (__m128i *)v193 == ++v194 )
                                    goto LABEL_290;
                                }
                              }
                              else
                              {
                                v194 = (__m128i *)(v186 + v192);
                                while ( v194->m128i_i64[1] )
                                {
                                  if ( (__m128i *)(v186 + v232) == ++v194 )
                                    goto LABEL_285;
                                }
                              }
                              v195 = _mm_loadu_si128(v190++);
                              *v194 = v195;
                            }
                            while ( v191 != v190 );
LABEL_281:
                            v191 = *(__m128i **)(v246 + 72);
                          }
                          if ( v191 )
                          {
                            v247 = v240;
                            v241 = v186;
                            v233 = v153;
                            sub_186B220(v191);
                            v187 = v247;
                            v186 = v241;
                            v153 = v233;
                          }
                          *(_QWORD *)(v153 + 72) = v186;
                          *(_DWORD *)(v153 + 80) = v187;
                          *(_DWORD *)(v153 + 88) = 0;
                        }
                        v229 = v153;
                        v171 = sub_182A670(*(_QWORD *)(v153 + 56), *(_QWORD *)(v168 + 8));
                        v153 = v229;
                        v172 = v171;
                        v173 = *(unsigned int *)(v229 + 80);
                        v174 = *(_QWORD *)(v229 + 72);
                        v175 = v173 - 1;
                        v173 *= 16;
                        v176 = v174 + v173;
                        v177 = 16LL * (v172 & v175);
                        v178 = v174 + v177;
                        if ( v177 == v173 )
                        {
                          v179 = 0;
                          while ( 1 )
                          {
LABEL_249:
                            if ( v178 == v174 )
                            {
                              sub_1872CE0("");
                              sub_1873130(114, 405);
                            }
                            v181 = *(_QWORD *)(v174 + 8);
                            if ( v181 > 1 )
                            {
                              if ( v172 == *(_DWORD *)v174 )
                              {
                                v245 = v179;
                                v239 = v178;
                                v231 = v153;
                                v184 = sub_182A660(*(_QWORD *)(v153 + 64), *(_QWORD *)(v181 + 8), *(_QWORD *)(v168 + 8));
                                v153 = v231;
                                v178 = v239;
                                v179 = v245;
                                if ( v184 )
                                  goto LABEL_254;
                              }
                            }
                            else
                            {
                              if ( !v181 )
                              {
LABEL_264:
                                if ( v179 )
                                  --*(_DWORD *)(v153 + 88);
                                else
                                  v179 = v174;
                                *(_QWORD *)(v179 + 8) = v168;
                                *(_DWORD *)v179 = v172;
                                ++*(_DWORD *)(v153 + 84);
                                goto LABEL_255;
                              }
                              v179 = v174;
                            }
                            v174 += 16;
                          }
                        }
                        v174 += v177;
                        v179 = 0;
                        while ( 1 )
                        {
                          while ( 1 )
                          {
                            v180 = *(_QWORD *)(v174 + 8);
                            if ( v180 > 1 )
                              break;
                            if ( !v180 )
                              goto LABEL_264;
                            v179 = v174;
                            v174 += 16;
                            if ( v176 == v174 )
                            {
LABEL_246:
                              v174 = *(_QWORD *)(v153 + 72);
                              goto LABEL_249;
                            }
                          }
                          if ( v172 == *(_DWORD *)v174 )
                          {
                            v244 = v179;
                            v238 = v178;
                            v230 = v153;
                            v182 = sub_182A660(*(_QWORD *)(v153 + 64), *(_QWORD *)(v180 + 8), *(_QWORD *)(v168 + 8));
                            v153 = v230;
                            v178 = v238;
                            v179 = v244;
                            if ( v182 )
                              break;
                          }
                          v174 += 16;
                          if ( v176 == v174 )
                            goto LABEL_246;
                        }
LABEL_254:
                        *(_QWORD *)(v174 + 8) = v168;
LABEL_255:
                        v183 = v166 + 16;
                        if ( v250 == v166 + 16 )
                          break;
                        while ( 1 )
                        {
                          v168 = *(_QWORD *)(v183 + 8);
                          v166 = v183;
                          if ( v168 > 1 )
                            break;
                          v183 += 16;
                          if ( v250 == v183 )
                            goto LABEL_260;
                        }
                      }
                      while ( v183 != v250 );
                    }
                  }
LABEL_260:
                  v251 += 8;
                }
                while ( v251 != v253 );
              }
              *((_BYTE *)s + *(unsigned int *)(v153 + 36)) = 1;
              --*((_DWORD *)v248 - 1);
              goto LABEL_157;
            }
            v162 = v161;
          }
          v161 += 16;
        }
        while ( v158 != v161 );
        v156 = *(_QWORD *)(v153 + 72);
      }
      v161 = v156;
      if ( v160 == v156 )
      {
LABEL_327:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v207 = *(_QWORD *)(v161 + 8);
        if ( v207 > 1 )
        {
          if ( v154 == *(_DWORD *)v161 )
          {
            v243 = v160;
            v235 = v153;
            v208 = sub_182A660(*(_QWORD *)(v153 + 64), *(_QWORD *)(v207 + 8), *(_QWORD *)(v153 + 8));
            v153 = v235;
            v160 = v243;
            if ( v208 )
              goto LABEL_230;
          }
        }
        else
        {
          if ( !v207 )
            goto LABEL_328;
          v162 = v161;
        }
        v161 += 16;
        if ( v160 == v161 )
          goto LABEL_327;
      }
    }
    v125 = *(_DWORD *)(v124 - 4);
    if ( !v125 )
      goto LABEL_221;
    v126 = 0;
    v127 = 1;
    v128 = 8LL * v125;
    while ( 1 )
    {
      v129 = *(_QWORD *)(v124 + v126);
      if ( !*((_BYTE *)s + *(unsigned int *)(v129 + 36)) )
        break;
      v126 += 8;
      if ( v128 == v126 )
        goto LABEL_178;
LABEL_172:
      v124 = *(_QWORD *)(v123 + 24);
    }
    v130 = v248;
    if ( v248 )
    {
      v131 = *((_DWORD *)v248 - 1);
      if ( v131 == *((_DWORD *)v248 - 2) )
      {
        v135 = (3 * v131 + 1) >> 1;
        v136 = 8 * v135 + 8;
        if ( 8 * v131 + 8 >= v136 || v131 >= v135 )
        {
          v215 = (char **)__cxa_allocate_exception(0x28u);
          sub_C7E7E(v256, "Overflow encountered when expanding vector", v216);
          *v215 = (char *)off_1C63128;
          sub_2333C0(v215 + 1, v256);
          sub_233E40((__int64)v256);
          __cxa_throw(v215, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v225 = v123;
        v137 = (unsigned int *)sub_186B300(v248 - 1, v136);
        v138 = v137[1];
        v130 = v137 + 2;
        v123 = v225;
        *v137 = v135;
        v248 = v130;
        LODWORD(v137) = v138;
        v134 = &v130[v138];
        v133 = (_DWORD)v137 + 1;
      }
      else
      {
        v132 = v131;
        v133 = v131 + 1;
        v134 = &v248[v132];
      }
    }
    else
    {
      v226 = v123;
      v149 = (_QWORD *)sub_186B270(0x18u);
      *v149 = 2;
      v123 = v226;
      v248 = v149 + 1;
      v134 = v149 + 1;
      v130 = v149 + 1;
      v133 = 1;
    }
    v126 += 8;
    *v134 = v129;
    v127 = 0;
    *((_DWORD *)v130 - 1) = v133;
    if ( v128 != v126 )
      goto LABEL_172;
LABEL_178:
    if ( v127 )
      goto LABEL_221;
    if ( v248 )
      continue;
    break;
  }
  *(_BYTE *)(v61 + 24) = 1;
  if ( s )
    sub_186B220(s - 2);
LABEL_51:
  v256[2] = v61;
  v256[0] = v61 + 32;
  v256[1] = v222;
  v256[3] = 0;
  v256[4] = 0;
  v257 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v61 + 32), (__m128i)(unsigned __int64)(v61 + 32));
  v62 = (_QWORD *)sub_186B270(0x80u);
  v62[1] = 0;
  v63 = v62;
  v64 = *(_QWORD *)(v61 + 600);
  v62[3] = 0;
  v62[5] = 0;
  v62[7] = 0;
  v62[9] = 0;
  v62[11] = 0;
  v62[13] = 0;
  v62[15] = 0;
  v258 = v62;
  v259 = 8;
  v260 = 0;
  v65 = sub_182A670(v64, v222);
  v66 = *(unsigned int *)(v61 + 624);
  v67 = *(_QWORD *)(v61 + 616);
  v68 = v66 - 1;
  v66 *= 16;
  v69 = v67 + v66;
  v70 = 16LL * (v65 & v68);
  v71 = v67 + v70;
  if ( v70 != v66 )
  {
    v67 += v70;
    while ( 1 )
    {
      v72 = *(_QWORD *)(v67 + 8);
      if ( v72 > 1 )
      {
        if ( v65 == *(_DWORD *)v67 && (unsigned __int8)sub_182A660(*(_QWORD *)(v61 + 608), *(_QWORD *)(v72 + 8), v222) )
        {
LABEL_132:
          v109 = *(_QWORD *)(v61 + 616) + 16LL * *(unsigned int *)(v61 + 624);
          if ( v67 == v109 )
          {
            v73 = *(_QWORD *)(v67 + 8);
          }
          else
          {
            while ( 1 )
            {
              v73 = *(_QWORD *)(v67 + 8);
              if ( v73 > 1 )
                break;
              if ( v67 + 16 == v109 )
              {
                v73 = *(_QWORD *)(v67 + 24);
                goto LABEL_59;
              }
              v67 += 16;
            }
          }
          goto LABEL_59;
        }
      }
      else if ( !v72 )
      {
LABEL_57:
        v67 = *(_QWORD *)(v61 + 616);
        goto LABEL_58;
      }
      v67 += 16;
      if ( v69 == v67 )
      {
        v67 = *(_QWORD *)(v61 + 616);
        break;
      }
    }
  }
  if ( v71 != v67 )
  {
    while ( 1 )
    {
      v111 = *(_QWORD *)(v67 + 8);
      if ( v111 > 1 )
      {
        if ( v65 == *(_DWORD *)v67 && (unsigned __int8)sub_182A660(*(_QWORD *)(v61 + 608), *(_QWORD *)(v111 + 8), v222) )
          goto LABEL_132;
      }
      else if ( !v111 )
      {
        goto LABEL_57;
      }
      v67 += 16;
      if ( v71 == v67 )
        goto LABEL_57;
    }
  }
LABEL_58:
  v73 = *(_QWORD *)(v67 + 16LL * *(unsigned int *)(v61 + 624) + 8);
LABEL_59:
  sub_186B220(v63);
  v74 = *(_QWORD *)(v73 + 72);
  v75 = 16LL * *(unsigned int *)(v73 + 80);
  v76 = v74 + v75;
  if ( v74 == v74 + v75 )
  {
    sub_15D1F10(v221);
    goto LABEL_161;
  }
  do
  {
    if ( *(_QWORD *)(v74 + 8) > 1u )
      break;
    v74 += 16;
  }
  while ( v76 != v74 );
  v236 = *(_QWORD *)(a1 + 8);
  v223 = sub_15D1F10(v221);
  if ( v76 == v74 )
    goto LABEL_161;
  v77 = *(_QWORD *)(v74 + 8);
  v78 = nullptr;
  do
  {
    v79 = *(unsigned int *)(v77 + 36);
    v254[0] = 0;
    v254[1] = 0;
    v80 = qword_1C7F2C0;
    v255[0] = 1;
    v81 = *(_QWORD *)(a1 + 8);
    v255[1] = 0;
    if ( (int)v79 < 0 )
      sub_1830C40(qword_1C7F2C0, v254, v79);
    else
      LODWORD(v254[0]) = v79;
    sub_182CBA0(v80, v255);
    LODWORD(v255[0]) = 1;
    BYTE4(v255[0]) &= ~1u;
    sub_16746C0(a1 + 24, v254, v223);
    v82 = sub_15E1B70(v81);
    v83 = v82;
    if ( v82 )
      ++*(_DWORD *)(v82 + 8);
    if ( v78 )
    {
      v84 = *((_DWORD *)v78 - 1);
      if ( v84 == *((_DWORD *)v78 - 2) )
      {
        v106 = (3 * v84 + 1) >> 1;
        v107 = 8 * v106 + 8;
        if ( 8 * v84 + 8 >= (unsigned int)v107 || v84 >= v106 )
        {
          v211 = (char **)__cxa_allocate_exception(0x28u);
          sub_C7E7E(v256, "Overflow encountered when expanding vector", v212);
          *v211 = (char *)off_1C63128;
          sub_2333C0(v211 + 1, v256);
          sub_233E40((__int64)v256);
          __cxa_throw(v211, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v224 = (3 * v84 + 1) >> 1;
        v108 = (unsigned int *)sub_186B300(v78 - 1, v107);
        v78 = (__int64 *)(v108 + 2);
        *v108 = v224;
        LODWORD(v108) = v108[1];
        v87 = &v78[(unsigned int)v108];
        v86 = (_DWORD)v108 + 1;
      }
      else
      {
        v85 = v84;
        v86 = v84 + 1;
        v87 = &v78[v85];
      }
    }
    else
    {
      v110 = (_QWORD *)sub_186B270(0x18u);
      v78 = v110 + 1;
      *v110 = 2;
      v86 = 1;
      v87 = v78;
    }
    *v87 = v83;
    v88 = qword_1C7F2C0;
    *((_DWORD *)v78 - 1) = v86;
    sub_182CBA0(v88, v254);
    sub_182CBA0(v88, v255);
    v89 = v74 + 16;
    if ( v76 == v74 + 16 )
      break;
    while ( 1 )
    {
      v77 = *(_QWORD *)(v89 + 8);
      v74 = v89;
      if ( v77 > 1 )
        break;
      v89 += 16;
      if ( v76 == v89 )
        goto LABEL_77;
    }
  }
  while ( v76 != v89 );
LABEL_77:
  v90 = *((_DWORD *)v78 - 1);
  if ( !v90 )
  {
LABEL_161:
    sub_1872CE0("");
    sub_1873130(114, 849);
  }
  if ( v90 == 1 )
  {
    v91 = *v78;
    if ( *v78 )
LABEL_80:
      ++*(_DWORD *)(v91 + 8);
  }
  else
  {
    v91 = sub_15E1AF0(*(_QWORD *)(a1 + 8));
    if ( v91 )
      goto LABEL_80;
  }
  v92 = *a3;
  if ( *a3 )
  {
    v93 = a3[1];
    v94 = (*(_DWORD *)(v92 + 8))-- == 1;
    if ( v94 )
      sub_15D7BC0(v93, v92);
  }
  *a3 = v91;
  v95 = v78;
  v96 = &v78[*((unsigned int *)v78 - 1)];
  if ( v78 < v96 )
  {
    do
    {
      while ( 1 )
      {
        v97 = *v95;
        if ( *v95 )
        {
          v94 = (*(_DWORD *)(v97 + 8))-- == 1;
          if ( v94 )
            break;
        }
        if ( ++v95 >= v96 )
          goto LABEL_90;
      }
      ++v95;
      sub_15D7BC0(v236, v97);
    }
    while ( v95 < v96 );
  }
LABEL_90:
  result = sub_186B220(v78 - 1);
  if ( v221 )
  {
    sb = *(_DWORD *)(v221 + 8);
    result = (unsigned int)(sb - 1);
    *(_DWORD *)(v221 + 8) = result;
    if ( sb == 1 )
      return sub_15D7BC0(v252, v221);
  }
  return result;
}

