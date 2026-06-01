__int64 __fastcall sub_EAC130(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // al
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int8 v15; // r12
  void *v16; // r13
  int v17; // r12d
  __int64 v18; // rbp
  int v19; // eax
  bool v20; // bp
  __m128i *v21; // rax
  __int64 v22; // rcx
  char *v23; // rbx
  __m128i v24; // xmm0
  char *v25; // rbp
  _DWORD *v26; // rdx
  _DWORD *v27; // rsi
  int v28; // eax
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  __m128i *v32; // rcx
  unsigned __int64 v33; // rax
  _QWORD *v34; // r15
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  char *v38; // rdx
  int v39; // eax
  char *v40; // rdx
  bool v41; // cc
  char *v42; // rbp
  __int64 v43; // rbx
  unsigned __int64 v44; // rdx
  int v45; // eax
  __m128i *v46; // rsi
  __m128i *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r13
  char *v50; // r15
  unsigned __int64 v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  char *v54; // rdx
  __m128i *v55; // r13
  __int64 v56; // r12
  __int64 v57; // rax
  __m128i *v58; // r14
  unsigned __int64 v59; // rdx
  __int64 *v60; // r12
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __m128i *v63; // rax
  __int64 v64; // rax
  __m128i *v65; // rbp
  __m128i *v66; // r12
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 *v69; // rax
  __m128i *v70; // rbx
  _BYTE *v71; // rbp
  __int64 v72; // rax
  signed __int64 v73; // r15
  unsigned __int64 v74; // rdx
  unsigned int v75; // r13d
  unsigned int v76; // r15d
  __int64 v77; // r13
  __int64 v78; // rdi
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  char *v82; // rdi
  __int64 v83; // rbx
  __m128i *v84; // rbx
  __m128i *v85; // rbp
  _QWORD *v86; // rbp
  __int64 v87; // rbx
  __int64 v88; // rdx
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // r12
  __int64 v91; // rax
  _QWORD *v92; // rsi
  __int64 v93; // rdx
  unsigned __int64 v94; // rdi
  void *v95; // r12
  signed __int64 v96; // rbp
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // rdx
  __int64 v100; // rdx
  __int64 v101; // rax
  unsigned __int64 v102; // rcx
  char *v103; // rdx
  int v104; // eax
  char *v105; // rdx
  unsigned __int64 v106; // rdx
  int v107; // eax
  __int64 *v108; // rsi
  __int64 *v109; // rcx
  __int64 v110; // rdx
  _QWORD *v111; // rax
  char *v112; // rdx
  _QWORD *v113; // rsi
  __int64 v114; // rcx
  char *v115; // rdx
  int v116; // eax
  unsigned __int64 v117; // rdx
  int v118; // eax
  __m128i *v119; // rsi
  __int64 v120; // rdx
  unsigned __int64 v121; // rdx
  int v122; // ecx
  __int64 *v123; // rdi
  __int64 *v124; // rsi
  __int64 v125; // rdx
  unsigned __int64 v126; // rax
  __m128i *v127; // rdx
  __int64 v128; // rsi
  __m128i *v129; // r14
  __m128i *v130; // rcx
  unsigned __int64 v131; // r9
  unsigned __int64 v132; // r8
  unsigned __int64 v133; // rdi
  __int64 v134; // rax
  unsigned __int64 v135; // rcx
  __int64 *v136; // rdx
  __int64 v137; // rax
  __m128i *v138; // r15
  int v139; // r15d
  char v140; // r10
  __int64 v141; // rax
  unsigned __int64 v142; // r12
  unsigned __int64 v143; // rax
  __int64 v144; // rcx
  unsigned __int64 v145; // rtt
  __int64 *v146; // rax
  __m128i **v147; // rax
  __int64 v148; // r12
  char v149; // r14
  unsigned __int64 v150; // rax
  __m128i *v151; // rdx
  __m128i *v152; // rbx
  __int64 v153; // rsi
  __m128i *v154; // r13
  __m128i *v155; // rcx
  unsigned __int64 v156; // rdi
  __int64 v157; // rax
  unsigned __int64 v158; // rcx
  __int64 *v159; // rdx
  __int64 v160; // rax
  __m128i *v161; // rbp
  int v162; // ebp
  __int64 v163; // r15
  unsigned __int64 v164; // rax
  __m128i *v165; // rdx
  __m128i *v166; // rbx
  __int64 v167; // rsi
  __m128i *v168; // r14
  __m128i *v169; // rcx
  unsigned __int64 v170; // rdi
  __int64 v171; // rax
  unsigned __int64 v172; // rcx
  __int64 *v173; // rdx
  __int64 v174; // rax
  __m128i *v175; // rbp
  int v176; // ebp
  __int64 v177; // rbp
  __int64 v178; // rax
  __m128i *v179; // rdx
  unsigned __int64 v180; // rbx
  char v181; // r10
  __int64 v182; // rsi
  __m128i *v183; // r15
  __m128i *v184; // rax
  unsigned __int64 v185; // rdi
  __int64 v186; // rax
  unsigned __int64 v187; // rcx
  __int64 *v188; // rdx
  __int64 *v189; // rcx
  __int64 v190; // rax
  __m128i *v191; // r12
  int v192; // r12d
  unsigned __int64 v193; // rax
  __int64 *v194; // rax
  __int64 v195; // rax
  __int64 v196; // r15
  unsigned __int64 v197; // rax
  __m128i *v198; // rdx
  __m128i *v199; // r13
  __int64 v200; // rsi
  __m128i *v201; // r14
  unsigned __int64 v202; // rdi
  __int64 v203; // rax
  unsigned __int64 v204; // rcx
  __int64 *v205; // rdx
  __int64 v206; // rax
  __m128i *v207; // rbp
  int v208; // ebp
  unsigned __int64 v209; // rax
  __m128i *v210; // rdx
  __m128i *v211; // rbp
  __int64 v212; // rsi
  __m128i *v213; // r13
  unsigned __int64 v214; // rdi
  __int64 v215; // rax
  unsigned __int64 v216; // rcx
  __int64 *v217; // rdx
  __int64 v218; // rax
  __m128i *v219; // rbx
  int v220; // ebx
  __int64 v221; // rax
  __int64 v222; // rax
  __int64 v223; // rax
  __int64 v224; // rax
  __int64 v226; // [rsp+8h] [rbp-1810h]
  unsigned __int64 v227; // [rsp+8h] [rbp-1810h]
  char v228; // [rsp+8h] [rbp-1810h]
  __int64 v229; // [rsp+8h] [rbp-1810h]
  char v231; // [rsp+20h] [rbp-17F8h]
  __int64 v232; // [rsp+38h] [rbp-17E0h]
  char v233; // [rsp+50h] [rbp-17C8h]
  __m128i *v234; // [rsp+50h] [rbp-17C8h]
  char v235; // [rsp+50h] [rbp-17C8h]
  char v236; // [rsp+50h] [rbp-17C8h]
  char v237; // [rsp+50h] [rbp-17C8h]
  char v238; // [rsp+50h] [rbp-17C8h]
  __int64 v239; // [rsp+60h] [rbp-17B8h]
  char v240; // [rsp+6Fh] [rbp-17A9h]
  __int64 v241; // [rsp+78h] [rbp-17A0h] BYREF
  __m128i si128; // [rsp+80h] [rbp-1798h] BYREF
  void *v243[2]; // [rsp+90h] [rbp-1788h] BYREF
  _DWORD *v244; // [rsp+A0h] [rbp-1778h]
  void *v245; // [rsp+B0h] [rbp-1768h]
  __int64 v246; // [rsp+B8h] [rbp-1760h]
  __m128i v247; // [rsp+C0h] [rbp-1758h] BYREF
  void *ptr; // [rsp+D0h] [rbp-1748h] BYREF
  __int64 v249; // [rsp+D8h] [rbp-1740h]
  _BYTE v250[64]; // [rsp+E0h] [rbp-1738h] BYREF
  __m128i *v251; // [rsp+120h] [rbp-16F8h] BYREF
  __int64 v252; // [rsp+128h] [rbp-16F0h]
  _BYTE v253[128]; // [rsp+130h] [rbp-16E8h] BYREF
  void *src[2]; // [rsp+1B0h] [rbp-1668h] BYREF
  _BYTE v255[128]; // [rsp+1C0h] [rbp-1658h] BYREF
  void *dest; // [rsp+240h] [rbp-15D8h] BYREF
  __int64 v257; // [rsp+248h] [rbp-15D0h]
  _BYTE v258[512]; // [rsp+250h] [rbp-15C8h] BYREF
  void *v259; // [rsp+450h] [rbp-13C8h] BYREF
  int v260; // [rsp+458h] [rbp-13C0h]
  __int64 v261; // [rsp+460h] [rbp-13B8h] BYREF

  dest = v258;
  v257 = 0x4000000000LL;
  ptr = v250;
  v249 = 0x800000000LL;
  v7 = sub_B6AC30(a2 + 64);
  if ( v7 )
  {
    while ( 1 )
    {
      v10 = *(_BYTE *)(v7 + 28) & 0x7F;
      if ( (unsigned int)v10 - 49 <= 2 )
        break;
      if ( v10 == 9 || v10 == 32 )
      {
        v79 = (unsigned int)v249;
        v80 = (unsigned int)v249 + 1LL;
        if ( v80 > HIDWORD(v249) )
        {
          sub_22134E0(&ptr, v250, v80, 8);
          v79 = (unsigned int)v249;
        }
        *((_QWORD *)ptr + v79) = v7;
        LODWORD(v249) = v249 + 1;
LABEL_6:
        v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v7 )
          goto LABEL_13;
      }
      else
      {
        v11 = *(unsigned int *)(a3 + 8);
        if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_22134E0(a3, a3 + 16, v11 + 1, 8);
          v11 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = v7;
        ++*(_DWORD *)(a3 + 8);
        v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v7 )
          goto LABEL_13;
      }
    }
    v8 = (unsigned int)v257;
    v9 = (unsigned int)v257 + 1LL;
    if ( v9 > HIDWORD(v257) )
    {
      sub_22134E0(&dest, v258, v9, 8);
      v8 = (unsigned int)v257;
    }
    *((_QWORD *)dest + v8) = v7;
    LODWORD(v257) = v257 + 1;
    goto LABEL_6;
  }
LABEL_13:
  v12 = 0;
  if ( !(_DWORD)v257 )
    goto LABEL_123;
  v13 = *((_QWORD *)dest + (unsigned int)v257 - 1);
  v232 = v13;
  if ( *(char *)(a2 + 74) < 0 )
  {
    v100 = (unsigned int)(v257 - 1);
    LODWORD(v257) = v257 - 1;
    if ( v13 )
      goto LABEL_26;
    v232 = *((_QWORD *)dest + v100 - 1);
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v232 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 2 > 1 )
  {
LABEL_166:
    v232 = 0;
    goto LABEL_26;
  }
  v15 = *(_BYTE *)(v14 + 19);
  v16 = *(void **)(v14 + 40);
  if ( (v15 & 2) != 0 )
  {
    v17 = *((_DWORD *)v16 + 2);
    v260 = v17;
    if ( (unsigned int)v17 <= 0x40 )
    {
      v16 = *(void **)v16;
      v259 = v16;
      goto LABEL_169;
    }
    sub_21E17D0(&v259);
    v17 = v260;
    v16 = v259;
  }
  else
  {
    v17 = 8 * ((v15 >> 2) & 0x1F);
    v260 = v17;
    if ( v17 > 64 )
    {
      sub_21E1730(&v259, v16, 0);
      v17 = v260;
      v16 = v259;
    }
    else
    {
      v259 = v16;
    }
  }
  if ( (unsigned int)v17 <= 0x40 )
  {
LABEL_169:
    if ( !v17 )
      goto LABEL_25;
    v20 = (__int64)((_QWORD)v16 << (64 - (unsigned __int8)v17)) >> (64 - (unsigned __int8)v17) > 2;
    goto LABEL_24;
  }
  v18 = *((_QWORD *)v16 + ((unsigned int)(v17 - 1) >> 6)) & (1LL << ((unsigned __int8)v17 - 1));
  if ( v18 )
    v19 = sub_21E2AC0(&v259);
  else
    v19 = sub_21E2A40(&v259);
  if ( (unsigned int)(v17 + 1 - v19) <= 0x40 )
  {
    v20 = *(_QWORD *)v16 > 2LL;
  }
  else
  {
    v20 = v18 == 0;
    if ( !v16 )
      goto LABEL_24;
  }
  operator delete[](v16);
LABEL_24:
  if ( v20 )
    goto LABEL_166;
LABEL_25:
  v232 = *((_QWORD *)dest + (unsigned int)v257 - 1);
  LODWORD(v257) = v257 - 1;
LABEL_26:
  sub_B62CC0((__int64)&v259, (__int64 *)(a2 + 40));
  v21 = (__m128i *)sub_978080(
                     &v259,
                     0,
                     0,
                     *(_BYTE **)(*(_QWORD *)(a1 + 2320) + 784LL),
                     *(_QWORD *)(*(_QWORD *)(a1 + 2320) + 792LL));
  v245 = &v247;
  if ( (__m128i *)v21->m128i_i64[0] == &v21[1] )
  {
    v247 = _mm_loadu_si128(v21 + 1);
  }
  else
  {
    v245 = (void *)v21->m128i_i64[0];
    v247.m128i_i64[0] = v21[1].m128i_i64[0];
  }
  v22 = v21->m128i_i64[1];
  v21[1].m128i_i8[0] = 0;
  v246 = v22;
  v21->m128i_i64[0] = (__int64)v21[1].m128i_i64;
  v21->m128i_i64[1] = 0;
  if ( v259 != &v261 )
    operator delete(v259);
  v23 = (char *)v245;
  v24.m128i_i64[0] = 0;
  v244 = nullptr;
  *(_OWORD *)v243 = 0;
  v25 = (char *)v245 + v246;
  if ( v245 != (char *)v245 + v246 )
  {
    v26 = nullptr;
    v27 = nullptr;
    while ( 1 )
    {
      v28 = *v23;
      LODWORD(v259) = v28;
      if ( v27 == v26 )
      {
        ++v23;
        sub_EABFE0((__int64)v243, v27, (int *)&v259);
        if ( v23 == v25 )
          break;
      }
      else
      {
        *v27 = v28;
        ++v23;
        v243[1] = v27 + 1;
        if ( v25 == v23 )
          break;
      }
      v27 = v243[1];
      v26 = v244;
    }
  }
  v29 = (__int64)v243;
  sub_EAB770(&v259, (__int64 *)v243);
  v32 = (__m128i *)v253;
  v241 = 0;
  v252 = 0x1000000000LL;
  v33 = (unsigned int)v257;
  v251 = (__m128i *)v253;
  if ( !(_DWORD)v257 )
  {
    v56 = 0;
    v55 = (__m128i *)v253;
    v57 = 8LL * (unsigned int)v252;
    v58 = (__m128i *)&v253[v57];
    goto LABEL_67;
  }
  v34 = nullptr;
  v35 = 0;
  do
  {
    while ( 1 )
    {
      if ( v33 <= v35 )
      {
        v106 = (unsigned int)v252 + 1LL;
        v107 = v252;
        v108 = &v251->m128i_i64[(unsigned int)v252];
        v109 = &v241;
        if ( v106 > HIDWORD(v252) )
        {
          v148 = -1;
          v149 = 0;
          if ( v251 <= (__m128i *)&v241 && v108 > &v241 )
          {
            v149 = 1;
            v148 = ((char *)&v241 - (char *)v251) >> 3;
          }
          v150 = sub_22136C0(&v251, v253, v106, 8, src);
          v151 = v251;
          v152 = (__m128i *)v150;
          v153 = 8LL * (unsigned int)v252;
          v154 = (__m128i *)((char *)v251 + v153);
          if ( v251 != (__m128i *)&v251->m128i_i8[v153] )
          {
            v155 = v251;
            if ( ((unsigned __int64)v251 >= v150 + 16 || v150 >= (unsigned __int64)&v251[1])
              && (unsigned __int64)(v153 - 8) > 0x10 )
            {
              v156 = ((unsigned __int64)(v153 - 8) >> 3) + 1;
              v157 = 0;
              a5 = 0.0;
              do
              {
                v24 = _mm_loadu_si128(&v151[v157]);
                v151[v157] = 0;
                v152[v157++] = v24;
              }
              while ( v156 >> 1 != v157 );
              v158 = v156 & 0xFFFFFFFFFFFFFFFELL;
              v159 = &v151->m128i_i64[v158];
              v155 = (__m128i *)((char *)v152 + v158 * 8);
              if ( (v156 & 0xFFFFFFFFFFFFFFFELL) != v156 )
              {
                v160 = *v159;
                *v159 = 0;
                v155->m128i_i64[0] = v160;
              }
            }
            else
            {
              v159 = (__int64 *)v150;
              do
              {
                v221 = v155->m128i_i64[0];
                v155->m128i_i64[0] = 0;
                v155 = (__m128i *)((char *)v155 + 8);
                *v159++ = v221;
              }
              while ( v154 != v155 );
            }
            v161 = v251;
            v154 = (__m128i *)((char *)v251 + v153);
            if ( v251 != (__m128i *)&v251->m128i_i8[v153] )
            {
              do
              {
                while ( 1 )
                {
                  v154 = (__m128i *)((char *)v154 - 8);
                  if ( !v154->m128i_i64[0] )
                    break;
                  (*(void (__fastcall **)(__int64, __int64, __int64 *, __m128i *, double, double))(*(_QWORD *)v154->m128i_i64[0]
                                                                                                 + 8LL))(
                    v154->m128i_i64[0],
                    v153,
                    v159,
                    v155,
                    *(double *)v24.m128i_i64,
                    a5);
                  if ( v161 == v154 )
                    goto LABEL_195;
                }
              }
              while ( v161 != v154 );
LABEL_195:
              v154 = v251;
            }
          }
          v162 = (int)src[0];
          if ( v154 != (__m128i *)v253 )
            free(v154);
          v109 = &v152->m128i_i64[v148];
          v251 = v152;
          HIDWORD(v252) = v162;
          if ( !v149 )
            v109 = &v241;
          v107 = v252;
          v108 = &v152->m128i_i64[(unsigned int)v252];
        }
        v110 = *v109;
        *v109 = 0;
        v35 = 0;
        *v108 = v110;
        LODWORD(v252) = v107 + 1;
      }
      v42 = (char *)dest;
      v43 = *(_QWORD *)dest;
      if ( (*(_BYTE *)(*(_QWORD *)dest + 68LL) & 1) == 0 || sub_B544B0(*(_QWORD *)dest) )
        break;
      if ( v34 )
      {
        v101 = *((unsigned int *)v34 + 4);
        v102 = *((unsigned int *)v34 + 5);
        ++*((_DWORD *)v34 + 134);
        if ( v101 + 1 > v102 )
        {
          sub_22134E0(v34 + 1, v34 + 3, v101 + 1, 8);
          v101 = *((unsigned int *)v34 + 4);
        }
      }
      else
      {
        v34 = (_QWORD *)operator new(0x220u);
        memset(v34, 0, 0x220u);
        *((_DWORD *)v34 + 134) = 1;
        v34[1] = v34 + 3;
        v34[2] = 0x4000000000LL;
        *v34 = &off_2B22230;
        v101 = 0;
      }
      *(_QWORD *)(v34[1] + 8 * v101) = v43;
      v32 = (__m128i *)(unsigned int)v257;
      v103 = (char *)dest;
      ++*((_DWORD *)v34 + 4);
      v104 = (int)v32;
      v105 = &v103[8 * (_QWORD)v32];
      if ( v105 != v42 + 8 )
      {
        memmove(v42, v42 + 8, v105 - (v42 + 8));
        v104 = v257;
      }
      v33 = (unsigned int)(v104 - 1);
      LODWORD(v257) = v33;
LABEL_43:
      if ( !(_DWORD)v33 )
        goto LABEL_59;
    }
    if ( v34 )
    {
      si128.m128i_i64[0] = (__int64)v34;
      v44 = (unsigned int)v252 + 1LL;
      v45 = v252;
      v46 = (__m128i *)((char *)v251 + 8 * (unsigned int)v252);
      v47 = &si128;
      if ( v44 > HIDWORD(v252) )
      {
        v239 = -1;
        v240 = 0;
        if ( v251 <= &si128 && v46 > &si128 )
        {
          v240 = 1;
          v239 = ((char *)&si128 - (char *)v251) >> 3;
        }
        v126 = sub_22136C0(&v251, v253, v44, 8, src);
        v127 = v251;
        v234 = (__m128i *)v126;
        v128 = 8LL * (unsigned int)v252;
        v129 = (__m128i *)((char *)v251 + v128);
        if ( v251 != (__m128i *)&v251->m128i_i8[v128] )
        {
          v130 = v251;
          v131 = v126;
          v132 = v128 - 8;
          if ( ((unsigned __int64)v251 >= v126 + 16 || v126 >= (unsigned __int64)&v251[1]) && v132 > 0x10 )
          {
            v133 = ((unsigned __int64)(v128 - 8) >> 3) + 1;
            v134 = 0;
            a5 = 0.0;
            v132 = v131;
            do
            {
              v24 = _mm_loadu_si128(&v127[v134]);
              v127[v134] = 0;
              *(__m128i *)(v131 + v134 * 16) = v24;
              ++v134;
            }
            while ( v134 != v133 >> 1 );
            v135 = v133 & 0xFFFFFFFFFFFFFFFELL;
            v136 = &v127->m128i_i64[v135];
            v130 = (__m128i *)((char *)v234 + v135 * 8);
            if ( (v133 & 0xFFFFFFFFFFFFFFFELL) != v133 )
            {
              v137 = *v136;
              *v136 = 0;
              v130->m128i_i64[0] = v137;
            }
          }
          else
          {
            v136 = (__int64 *)v126;
            do
            {
              v195 = v130->m128i_i64[0];
              v130->m128i_i64[0] = 0;
              v130 = (__m128i *)((char *)v130 + 8);
              *v136++ = v195;
            }
            while ( v129 != v130 );
          }
          v138 = v251;
          v129 = (__m128i *)((char *)v251 + v128);
          if ( v251 != (__m128i *)&v251->m128i_i8[v128] )
          {
            do
            {
              while ( 1 )
              {
                v129 = (__m128i *)((char *)v129 - 8);
                if ( !v129->m128i_i64[0] )
                  break;
                (*(void (__fastcall **)(__int64, __int64, __int64 *, __m128i *, unsigned __int64, double, double))(*(_QWORD *)v129->m128i_i64[0] + 8LL))(
                  v129->m128i_i64[0],
                  v128,
                  v136,
                  v130,
                  v132,
                  *(double *)v24.m128i_i64,
                  a5);
                if ( v138 == v129 )
                  goto LABEL_160;
              }
            }
            while ( v138 != v129 );
LABEL_160:
            v129 = v251;
          }
        }
        v139 = (int)src[0];
        if ( v129 != (__m128i *)v253 )
          free(v129);
        HIDWORD(v252) = v139;
        v251 = v234;
        v46 = (__m128i *)((char *)v234 + 8 * (unsigned int)v252);
        v45 = v252;
        v47 = (__m128i *)((char *)v234 + 8 * v239);
        if ( !v240 )
          v47 = &si128;
      }
      v48 = v47->m128i_i64[0];
      v47->m128i_i64[0] = 0;
      v46->m128i_i64[0] = v48;
      LODWORD(v252) = v45 + 1;
      if ( si128.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[0] + 8LL))(si128.m128i_i64[0]);
    }
    v49 = v241;
    if ( !v241 )
    {
      v49 = operator new(0x220u);
      v241 = v49;
      memset((void *)v49, 0, 0x220u);
      *(_QWORD *)v49 = &off_2B22200;
      *(_QWORD *)(v49 + 8) = v49 + 24;
      *(_QWORD *)(v49 + 16) = 0x4000000000LL;
    }
    v50 = v42 + 8;
    v51 = sub_A73FE0(a1, *(_QWORD *)(*(_QWORD *)(v43 + 48) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v51 > 0x3F )
    {
      v111 = (_QWORD *)operator new(0x220u);
      v112 = (char *)dest;
      v113 = v111;
      si128.m128i_i64[0] = (__int64)v111;
      memset(v111, 0, 0x220u);
      v114 = (unsigned int)v257;
      v111[3] = v43;
      *v111 = &off_2B22200;
      v111[1] = v111 + 3;
      v115 = &v112[8 * v114];
      v111[2] = 0x4000000001LL;
      v116 = v114;
      *((_DWORD *)v113 + 134) = v51;
      if ( v115 != v50 )
      {
        memmove(v42, v42 + 8, v115 - v50);
        v116 = v257;
      }
      v31 = HIDWORD(v252);
      LODWORD(v257) = v116 - 1;
      v117 = (unsigned int)v252 + 1LL;
      v118 = v252;
      v119 = (__m128i *)((char *)v251 + 8 * (unsigned int)v252);
      v32 = &si128;
      if ( v117 > HIDWORD(v252) )
      {
        v163 = -1;
        v236 = 0;
        if ( v251 <= &si128 && v119 > &si128 )
        {
          v236 = 1;
          v163 = ((char *)&si128 - (char *)v251) >> 3;
        }
        v164 = sub_22136C0(&v251, v253, v117, 8, src);
        v165 = v251;
        v166 = (__m128i *)v164;
        v167 = 8LL * (unsigned int)v252;
        v168 = (__m128i *)((char *)v251 + v167);
        if ( v251 != (__m128i *)&v251->m128i_i8[v167] )
        {
          v169 = v251;
          v31 = v167 - 8;
          if ( ((unsigned __int64)v251 >= v164 + 16 || v164 >= (unsigned __int64)&v251[1]) && v31 > 0x10 )
          {
            v170 = ((unsigned __int64)(v167 - 8) >> 3) + 1;
            v171 = 0;
            a5 = 0.0;
            do
            {
              v24 = _mm_loadu_si128(&v165[v171]);
              v165[v171] = 0;
              v166[v171++] = v24;
            }
            while ( v171 != v170 >> 1 );
            v172 = v170 & 0xFFFFFFFFFFFFFFFELL;
            v173 = &v165->m128i_i64[v172];
            v169 = (__m128i *)((char *)v166 + v172 * 8);
            if ( (v170 & 0xFFFFFFFFFFFFFFFELL) != v170 )
            {
              v174 = *v173;
              *v173 = 0;
              v169->m128i_i64[0] = v174;
            }
          }
          else
          {
            v173 = (__int64 *)v164;
            do
            {
              v222 = v169->m128i_i64[0];
              v169->m128i_i64[0] = 0;
              v169 = (__m128i *)((char *)v169 + 8);
              *v173++ = v222;
            }
            while ( v168 != v169 );
          }
          v175 = v251;
          v168 = (__m128i *)((char *)v251 + v167);
          if ( v251 != (__m128i *)&v251->m128i_i8[v167] )
          {
            do
            {
              while ( 1 )
              {
                v168 = (__m128i *)((char *)v168 - 8);
                if ( !v168->m128i_i64[0] )
                  break;
                (*(void (__fastcall **)(__int64, __int64, __int64 *, __m128i *, double, double))(*(_QWORD *)v168->m128i_i64[0]
                                                                                               + 8LL))(
                  v168->m128i_i64[0],
                  v167,
                  v173,
                  v169,
                  *(double *)v24.m128i_i64,
                  a5);
                if ( v175 == v168 )
                  goto LABEL_222;
              }
            }
            while ( v175 != v168 );
LABEL_222:
            v168 = v251;
          }
        }
        v176 = (int)src[0];
        if ( v168 != (__m128i *)v253 )
          free(v168);
        v32 = (__m128i *)((char *)v166 + 8 * v163);
        v251 = v166;
        HIDWORD(v252) = v176;
        if ( !v236 )
          v32 = &si128;
        v118 = v252;
        v119 = (__m128i *)((char *)v166 + 8 * (unsigned int)v252);
      }
      v120 = v32->m128i_i64[0];
      v32->m128i_i64[0] = 0;
      v119->m128i_i64[0] = v120;
      LODWORD(v252) = v118 + 1;
      if ( si128.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[0] + 8LL))(si128.m128i_i64[0]);
      v33 = (unsigned int)v257;
      v34 = nullptr;
      goto LABEL_43;
    }
    v140 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v49 + 16LL))(v49, (unsigned int)v51);
    if ( v140 )
    {
      v36 = *(unsigned int *)(v49 + 16);
      v37 = *(unsigned int *)(v49 + 20);
      *(_DWORD *)(v49 + 536) += v51;
      if ( v36 + 1 > v37 )
      {
        v235 = v140;
        sub_22134E0(v49 + 8, v49 + 24, v36 + 1, 8);
        v36 = *(unsigned int *)(v49 + 16);
        v140 = v235;
      }
      *(_QWORD *)(*(_QWORD *)(v49 + 8) + 8 * v36) = v43;
      v32 = (__m128i *)(unsigned int)v257;
      v38 = (char *)dest;
      ++*(_DWORD *)(v49 + 16);
      v39 = (int)v32;
      v40 = &v38[8 * (_QWORD)v32];
      if ( v40 != v50 )
      {
        v233 = v140;
        memmove(v42, v42 + 8, v40 - v50);
        v39 = v257;
        v140 = v233;
      }
      v33 = (unsigned int)(v39 - 1);
      v34 = nullptr;
      v41 = *(_DWORD *)(v49 + 536) <= 63;
      LODWORD(v257) = v33;
      if ( !v41 )
      {
        v31 = (unsigned __int64)v251;
        v121 = (unsigned int)v252 + 1LL;
        v122 = v252;
        v123 = &v251->m128i_i64[(unsigned int)v252];
        v124 = &v241;
        if ( v121 > HIDWORD(v252) )
        {
          if ( v251 > (__m128i *)&v241 || v123 <= &v241 )
          {
            v177 = -1;
            v140 = 0;
          }
          else
          {
            v177 = ((char *)&v241 - (char *)v251) >> 3;
          }
          v237 = v140;
          v178 = sub_22136C0(&v251, v253, v121, 8, src);
          v179 = v251;
          v180 = v178;
          v181 = v237;
          v182 = 8LL * (unsigned int)v252;
          v183 = (__m128i *)((char *)v251 + v182);
          if ( v251 != (__m128i *)&v251->m128i_i8[v182] )
          {
            v184 = v251;
            v31 = v180 + 16;
            LOBYTE(v31) = (unsigned __int64)v251 >= v180 + 16;
            if ( (unsigned __int8)v31 | (v180 >= (unsigned __int64)&v251[1]) && (unsigned __int64)(v182 - 8) > 0x10 )
            {
              v185 = ((unsigned __int64)(v182 - 8) >> 3) + 1;
              v186 = 0;
              a5 = 0.0;
              do
              {
                v24 = _mm_loadu_si128(&v179[v186]);
                v179[v186] = 0;
                *(__m128i *)(v180 + v186 * 16) = v24;
                ++v186;
              }
              while ( v185 >> 1 != v186 );
              v187 = v185 & 0xFFFFFFFFFFFFFFFELL;
              v188 = &v179->m128i_i64[v187];
              v189 = (__int64 *)(v180 + v187 * 8);
              if ( (v185 & 0xFFFFFFFFFFFFFFFELL) != v185 )
              {
                v190 = *v188;
                *v188 = 0;
                *v189 = v190;
              }
            }
            else
            {
              v188 = (__int64 *)v180;
              do
              {
                v189 = (__int64 *)v184->m128i_i64[0];
                v184->m128i_i64[0] = 0;
                v184 = (__m128i *)((char *)v184 + 8);
                *v188++ = (__int64)v189;
              }
              while ( v183 != v184 );
            }
            v191 = v251;
            v183 = (__m128i *)((char *)v251 + v182);
            if ( v251 != (__m128i *)&v251->m128i_i8[v182] )
            {
              do
              {
                while ( 1 )
                {
                  v183 = (__m128i *)((char *)v183 - 8);
                  if ( !v183->m128i_i64[0] )
                    break;
                  (*(void (__fastcall **)(__int64, __int64, __int64 *, __int64 *, double, double))(*(_QWORD *)v183->m128i_i64[0]
                                                                                                 + 8LL))(
                    v183->m128i_i64[0],
                    v182,
                    v188,
                    v189,
                    *(double *)v24.m128i_i64,
                    a5);
                  if ( v191 == v183 )
                    goto LABEL_244;
                }
              }
              while ( v191 != v183 );
LABEL_244:
              v183 = v251;
              v181 = v237;
            }
          }
          v192 = (int)src[0];
          if ( v183 != (__m128i *)v253 )
          {
            v238 = v181;
            free(v183);
            v181 = v238;
          }
          v124 = (__int64 *)(v180 + 8 * v177);
          v251 = (__m128i *)v180;
          HIDWORD(v252) = v192;
          if ( !v181 )
            v124 = &v241;
          v122 = v252;
          v123 = (__int64 *)(v180 + 8LL * (unsigned int)v252);
          v33 = (unsigned int)v257;
        }
        v125 = *v124;
        v32 = (__m128i *)(unsigned int)(v122 + 1);
        *v124 = 0;
        v34 = nullptr;
        v35 = 0;
        *v123 = v125;
        LODWORD(v252) = (_DWORD)v32;
      }
      goto LABEL_43;
    }
    v52 = (unsigned int)v257;
    ++v35;
    v53 = (unsigned int)v257 + 1LL;
    if ( v53 > HIDWORD(v257) )
    {
      sub_22134E0(&dest, v258, v53, 8);
      v52 = (unsigned int)v257;
    }
    *((_QWORD *)dest + v52) = v43;
    v33 = (unsigned int)v257;
    v32 = (__m128i *)dest;
    LODWORD(v257) = v257 + 1;
    v54 = (char *)dest + 8 * (unsigned int)v257;
    if ( v54 != v50 )
    {
      memmove(v42, v42 + 8, v54 - v50);
      v33 = (unsigned int)(v257 - 1);
    }
    LODWORD(v257) = v33;
    v34 = nullptr;
  }
  while ( (_DWORD)v33 );
LABEL_59:
  v30 = (unsigned int)v252;
  v55 = v251;
  v56 = v241;
  v57 = 8LL * (unsigned int)v252;
  v29 = (unsigned int)v252;
  v58 = (__m128i *)((char *)v251 + v57);
  if ( v241 )
  {
    v59 = (unsigned int)v252 + 1LL;
    v60 = &v241;
    if ( v59 > HIDWORD(v252) )
    {
      v229 = -1;
      v231 = 0;
      if ( v251 <= (__m128i *)&v241 && v58 > (__m128i *)&v241 )
      {
        v231 = 1;
        v229 = ((char *)&v241 - (char *)v251) >> 3;
      }
      v209 = sub_22136C0(&v251, v253, v59, 8, src);
      v210 = v251;
      v211 = (__m128i *)v209;
      v212 = 8LL * (unsigned int)v252;
      v213 = (__m128i *)((char *)v251 + v212);
      if ( v251 != (__m128i *)&v251->m128i_i8[v212] )
      {
        v32 = v251;
        v31 = v212 - 8;
        if ( ((unsigned __int64)v251 >= v209 + 16 || v209 >= (unsigned __int64)&v251[1]) && v31 > 0x10 )
        {
          v214 = ((unsigned __int64)(v212 - 8) >> 3) + 1;
          v215 = 0;
          a5 = 0.0;
          do
          {
            v24 = _mm_loadu_si128(&v210[v215]);
            v210[v215] = 0;
            v211[v215++] = v24;
          }
          while ( v214 >> 1 != v215 );
          v216 = v214 & 0xFFFFFFFFFFFFFFFELL;
          v217 = &v210->m128i_i64[v216];
          v32 = (__m128i *)((char *)v211 + v216 * 8);
          if ( (v214 & 0xFFFFFFFFFFFFFFFELL) != v214 )
          {
            v218 = *v217;
            *v217 = 0;
            v32->m128i_i64[0] = v218;
          }
        }
        else
        {
          v217 = (__int64 *)v209;
          do
          {
            v223 = v32->m128i_i64[0];
            v32->m128i_i64[0] = 0;
            v32 = (__m128i *)((char *)v32 + 8);
            *v217++ = v223;
          }
          while ( v213 != v32 );
        }
        v219 = v251;
        v213 = (__m128i *)((char *)v251 + v212);
        if ( v251 != (__m128i *)&v251->m128i_i8[v212] )
        {
          do
          {
            while ( 1 )
            {
              v213 = (__m128i *)((char *)v213 - 8);
              if ( !v213->m128i_i64[0] )
                break;
              (*(void (__fastcall **)(__int64, __int64, __int64 *, __m128i *, double, double))(*(_QWORD *)v213->m128i_i64[0]
                                                                                             + 8LL))(
                v213->m128i_i64[0],
                v212,
                v217,
                v32,
                *(double *)v24.m128i_i64,
                a5);
              if ( v219 == v213 )
                goto LABEL_296;
            }
          }
          while ( v219 != v213 );
LABEL_296:
          v213 = v251;
        }
      }
      v220 = (int)src[0];
      if ( v213 != (__m128i *)v253 )
        free(v213);
      v251 = v211;
      HIDWORD(v252) = v220;
      LODWORD(v29) = v252;
      v58 = (__m128i *)((char *)v211 + 8 * (unsigned int)v252);
      if ( v231 )
        v60 = &v211->m128i_i64[v229];
    }
    v61 = *v60;
    v30 = (unsigned int)(v29 + 1);
    *v60 = 0;
    v56 = v241;
    v29 = v30;
    v58->m128i_i64[0] = v61;
    v55 = v251;
    v57 = 8 * v30;
    LODWORD(v252) = v30;
    v58 = (__m128i *)((char *)v251 + 8 * v30);
  }
  if ( v34 )
  {
    v62 = v30 + 1;
    si128.m128i_i64[0] = (__int64)v34;
    v63 = &si128;
    if ( v62 > HIDWORD(v252) )
    {
      v196 = -1;
      v228 = 0;
      if ( v55 <= &si128 && v58 > &si128 )
      {
        v228 = 1;
        v196 = ((char *)&si128 - (char *)v55) >> 3;
      }
      v197 = sub_22136C0(&v251, v253, v62, 8, src);
      v198 = v251;
      v199 = (__m128i *)v197;
      v200 = 8LL * (unsigned int)v252;
      v201 = (__m128i *)((char *)v251 + v200);
      if ( v251 != (__m128i *)&v251->m128i_i8[v200] )
      {
        v32 = v251;
        v31 = v200 - 8;
        if ( ((unsigned __int64)v251 >= v197 + 16 || v197 >= (unsigned __int64)&v251[1]) && v31 > 0x10 )
        {
          v202 = ((unsigned __int64)(v200 - 8) >> 3) + 1;
          v203 = 0;
          a5 = 0.0;
          do
          {
            v24 = _mm_loadu_si128(&v198[v203]);
            v198[v203] = 0;
            v199[v203++] = v24;
          }
          while ( v202 >> 1 != v203 );
          v204 = v202 & 0xFFFFFFFFFFFFFFFELL;
          v205 = &v198->m128i_i64[v204];
          v32 = (__m128i *)((char *)v199 + v204 * 8);
          if ( (v202 & 0xFFFFFFFFFFFFFFFELL) != v202 )
          {
            v206 = *v205;
            *v205 = 0;
            v32->m128i_i64[0] = v206;
          }
        }
        else
        {
          v205 = (__int64 *)v197;
          do
          {
            v224 = v32->m128i_i64[0];
            v32->m128i_i64[0] = 0;
            v32 = (__m128i *)((char *)v32 + 8);
            *v205++ = v224;
          }
          while ( v201 != v32 );
        }
        v207 = v251;
        v201 = (__m128i *)((char *)v251 + v200);
        if ( v251 != (__m128i *)&v251->m128i_i8[v200] )
        {
          do
          {
            while ( 1 )
            {
              v201 = (__m128i *)((char *)v201 - 8);
              if ( !v201->m128i_i64[0] )
                break;
              (*(void (__fastcall **)(__int64, __int64, __int64 *, __m128i *, double, double))(*(_QWORD *)v201->m128i_i64[0]
                                                                                             + 8LL))(
                v201->m128i_i64[0],
                v200,
                v205,
                v32,
                *(double *)v24.m128i_i64,
                a5);
              if ( v207 == v201 )
                goto LABEL_275;
            }
          }
          while ( v207 != v201 );
LABEL_275:
          v201 = v251;
        }
      }
      v208 = (int)src[0];
      if ( v201 != (__m128i *)v253 )
        free(v201);
      v251 = v199;
      HIDWORD(v252) = v208;
      v29 = (unsigned int)v252;
      v58 = (__m128i *)((char *)v199 + 8 * (unsigned int)v252);
      v63 = (__m128i *)((char *)v199 + 8 * v196);
      if ( !v228 )
        v63 = &si128;
    }
    v30 = v63->m128i_i64[0];
    v63->m128i_i64[0] = 0;
    v64 = (unsigned int)(v29 + 1);
    v58->m128i_i64[0] = v30;
    LODWORD(v252) = v29 + 1;
    if ( si128.m128i_i64[0] )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)si128.m128i_i64[0] + 8LL))(si128.m128i_i64[0]);
      v64 = (unsigned int)v252;
    }
    v55 = v251;
    v57 = 8 * v64;
    v58 = (__m128i *)((char *)v251 + v57);
  }
LABEL_67:
  if ( v55 == v58 )
  {
    v70 = v58;
  }
  else
  {
    v65 = (__m128i *)&v55->m128i_u64[1];
    v29 = v57 >> 3;
    v30 = 0xFFFFFFFFuLL % (v57 >> 3);
    if ( v57 >> 3 <= 0xFFFFFFFFuLL / (v57 >> 3) )
    {
      v29 = (v57 >> 3) & 1;
      if ( !(_DWORD)v29 )
      {
        v65 = v55 + 1;
        *(__m128i *)src = _mm_load_si128((const __m128i *)&unk_2383B90);
        v193 = sub_EABBD0((__int64)src, (unsigned __int64 *)&v259, src);
        v30 = v55->m128i_u64[1];
        v194 = &v55->m128i_i64[v193];
        v29 = *v194;
        v55->m128i_i64[1] = *v194;
        *v194 = v30;
      }
      if ( v65 != v58 )
      {
        v226 = v56;
        do
        {
          v141 = (char *)v65++ - (char *)v55;
          src[0] = nullptr;
          v141 >>= 3;
          v142 = v141 + 2;
          src[1] = (void *)((v141 + 2) * (v141 + 1) - 1);
          v143 = sub_EABBD0((__int64)src, (unsigned __int64 *)&v259, src);
          v144 = v65[-1].m128i_i64[0];
          v145 = v143;
          v146 = &v55->m128i_i64[v143 / v142];
          v29 = *v146;
          v65[-1].m128i_i64[0] = *v146;
          *v146 = v144;
          v147 = (__m128i **)v55 + v145 % v142;
          v30 = v65[-1].m128i_u64[1];
          v32 = *v147;
          v65[-1].m128i_i64[1] = (__int64)*v147;
          *v147 = (__m128i *)v30;
        }
        while ( v65 != v58 );
LABEL_72:
        v56 = v226;
      }
      v58 = v251;
      v70 = (__m128i *)((char *)v251 + 8 * (unsigned int)v252);
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      if ( v65 != v58 )
      {
        v226 = v56;
        v66 = (__m128i *)&v55->m128i_u64[1];
        do
        {
          v67 = (char *)v66 - (char *)v55;
          v66 = (__m128i *)((char *)v66 + 8);
          src[0] = nullptr;
          src[1] = (void *)(v67 >> 3);
          v68 = sub_EABBD0((__int64)&si128, (unsigned __int64 *)&v259, src);
          v30 = v66[-1].m128i_u64[1];
          v69 = &v55->m128i_i64[v68];
          v29 = *v69;
          v66[-1].m128i_i64[1] = *v69;
          *v69 = v30;
        }
        while ( v66 != v58 );
        goto LABEL_72;
      }
      v70 = v58;
      v58 = v55;
    }
  }
  v71 = v255;
  src[0] = v255;
  src[1] = (void *)0x1000000000LL;
  if ( v58 == v70 )
  {
LABEL_207:
    v76 = 0;
  }
  else
  {
    do
    {
      v77 = v58->m128i_i64[0];
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v58->m128i_i64[0] + 24LL))(v58->m128i_i64[0]) )
      {
        v78 = *(_QWORD *)(v77 + 8);
        v29 = v78 + 8LL * *(unsigned int *)(v77 + 16);
        sub_EABE30(v78, v29, (unsigned __int64 *)&v259);
      }
      v31 = *(_QWORD *)(v77 + 8);
      v72 = LODWORD(src[1]);
      v32 = (__m128i *)HIDWORD(src[1]);
      v73 = 8LL * *(unsigned int *)(v77 + 16);
      v74 = LODWORD(src[1]) + (v73 >> 3);
      if ( v74 > HIDWORD(src[1]) )
      {
        v29 = (__int64)v255;
        v227 = *(_QWORD *)(v77 + 8);
        sub_22134E0(src, v255, v74, 8);
        v72 = LODWORD(src[1]);
        v31 = v227;
      }
      if ( v73 )
      {
        v29 = v31;
        memcpy((char *)src[0] + 8 * v72, (const void *)v31, v73);
        LODWORD(v72) = src[1];
      }
      v75 = v72 + (v73 >> 3);
      v58 = (__m128i *)((char *)v58 + 8);
      v76 = v75;
      LODWORD(src[1]) = v75;
    }
    while ( v70 != v58 );
    v81 = (unsigned int)v257;
    v30 = v75;
    if ( v75 <= (unsigned __int64)(unsigned int)v257 )
    {
      v71 = src[0];
      if ( !v75 )
        goto LABEL_207;
      v29 = (__int64)src[0];
      memmove(dest, src[0], 8LL * v75);
      v71 = src[0];
    }
    else
    {
      if ( v75 > (unsigned __int64)HIDWORD(v257) )
      {
        LODWORD(v257) = 0;
        sub_22134E0(&dest, v258, v75, 8);
        v71 = src[0];
        v30 = LODWORD(src[1]);
        v81 = 0;
        v82 = (char *)dest;
        v29 = (__int64)src[0];
      }
      else
      {
        v71 = src[0];
        v82 = (char *)dest;
        v83 = 8LL * (unsigned int)v257;
        v29 = (__int64)src[0];
        if ( (_DWORD)v257 )
        {
          memmove(dest, src[0], 8LL * (unsigned int)v257);
          v71 = src[0];
          v81 = v83;
          v30 = LODWORD(src[1]);
          v82 = (char *)dest + v83;
          v29 = (__int64)src[0] + v83;
        }
      }
      v30 *= 8LL;
      v32 = (__m128i *)&v71[v30];
      if ( (_BYTE *)v29 != &v71[v30] )
      {
        memcpy(v82, (const void *)v29, v30 - v81);
        v71 = src[0];
      }
    }
  }
  LODWORD(v257) = v76;
  if ( v71 != v255 )
    free(v71);
  if ( v56 )
    (*(void (__fastcall **)(__int64, __int64, unsigned __int64, __m128i *, unsigned __int64))(*(_QWORD *)v56 + 8LL))(
      v56,
      v29,
      v30,
      v32,
      v31);
  v84 = v251;
  v85 = (__m128i *)((char *)v251 + 8 * (unsigned int)v252);
  if ( v251 != v85 )
  {
    do
    {
      while ( 1 )
      {
        v85 = (__m128i *)((char *)v85 - 8);
        if ( !v85->m128i_i64[0] )
          break;
        (*(void (__fastcall **)(__int64, __int64, unsigned __int64, __m128i *, unsigned __int64))(*(_QWORD *)v85->m128i_i64[0]
                                                                                                + 8LL))(
          v85->m128i_i64[0],
          v29,
          v30,
          v32,
          v31);
        if ( v84 == v85 )
          goto LABEL_99;
      }
    }
    while ( v84 != v85 );
LABEL_99:
    v85 = v251;
  }
  if ( v85 != (__m128i *)v253 )
    free(v85);
  v86 = dest;
  v87 = 8LL * (unsigned int)v257;
  v88 = *(unsigned int *)(a3 + 8);
  v89 = *(unsigned int *)(a3 + 12);
  v90 = v87 >> 3;
  LODWORD(v91) = v88 + (v87 >> 3);
  if ( v88 + (v87 >> 3) > v89 )
  {
    sub_22134E0(a3, a3 + 16, v88 + v90, 8);
    v88 = *(unsigned int *)(a3 + 8);
    v89 = *(unsigned int *)(a3 + 12);
    LODWORD(v91) = v90 + v88;
  }
  v92 = (_QWORD *)(*(_QWORD *)a3 + 8 * v88);
  if ( v87 )
  {
    if ( v87 == 8 )
      goto LABEL_109;
    v93 = 0;
    do
    {
      *(__m128i *)&v92[v93] = _mm_loadu_si128((const __m128i *)&v86[v93]);
      v93 += 2;
    }
    while ( 2 * (v90 >> 1) != v93 );
    v94 = 8 * (v90 & 0xFFFFFFFFFFFFFFFELL);
    v86 = (_QWORD *)((char *)v86 + v94);
    v92 = (_QWORD *)((char *)v92 + v94);
    if ( v90 != (v90 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_109:
      *v92 = *v86;
  }
  v95 = ptr;
  v96 = 8LL * (unsigned int)v249;
  *(_DWORD *)(a3 + 8) = v91;
  v91 = (unsigned int)v91;
  v97 = (unsigned int)v91 + (v96 >> 3);
  if ( v97 > v89 )
  {
    sub_22134E0(a3, a3 + 16, v97, 8);
    v91 = *(unsigned int *)(a3 + 8);
  }
  if ( v96 )
  {
    memcpy((void *)(*(_QWORD *)a3 + 8 * v91), v95, v96);
    LODWORD(v91) = *(_DWORD *)(a3 + 8);
  }
  LODWORD(v91) = (v96 >> 3) + v91;
  *(_DWORD *)(a3 + 8) = v91;
  if ( v232 )
  {
    v91 = (unsigned int)v91;
    v98 = (unsigned int)v91 + 1LL;
    if ( v98 > *(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v98, 8);
      v91 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v91) = v232;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( v243[0] )
    operator delete(v243[0]);
  if ( v245 != &v247 )
    operator delete(v245);
  v12 = 1;
LABEL_123:
  if ( ptr != v250 )
    free(ptr);
  if ( dest != v258 )
    free(dest);
  return v12;
}

