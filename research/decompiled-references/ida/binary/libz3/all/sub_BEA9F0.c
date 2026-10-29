// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_BEA9F0(__int64 *a1, _QWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  char **v5; // r13
  char **v6; // r13
  char **exception; // r13
  char **v8; // r13
  char **v9; // r13
  _QWORD *v13; // rax
  __m128i *v14; // rbx
  __int64 v15; // r15
  void *v16; // rdi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rax
  void *v22; // r14
  _QWORD *v23; // rax
  int v24; // r15d
  __int64 v25; // r11
  int v26; // r8d
  size_t v27; // r14
  unsigned int v28; // r9d
  const __m128i *v29; // r12
  __int64 v30; // r13
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __m128i *v33; // rsi
  __m128i *i; // rax
  __int64 v35; // rdx
  _DWORD *v36; // rax
  unsigned int v37; // r15d
  int v38; // ecx
  __int64 v39; // r8
  __m128i *v40; // rdi
  __m128i *v41; // rax
  __int64 *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __m128i *v45; // rax
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // r15
  __m128i *v49; // rsi
  _DWORD *v50; // r10
  const __m128i *i2; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  _DWORD *v54; // rdi
  const __m128i *k; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __m128i *v58; // rcx
  __m128i *v59; // rdx
  const __m128i *v60; // rax
  const __m128i *j; // r15
  __int64 v62; // rdx
  __m128i *v63; // rsi
  _DWORD *v64; // rdi
  __m128i *v65; // rdx
  __m128i v66; // xmm0
  bool v67; // zf
  _DWORD *v68; // r8
  __int64 v69; // rcx
  int v70; // edi
  __int64 v71; // rcx
  unsigned int v72; // esi
  __int64 v73; // rax
  __m128i *v74; // rdi
  _DWORD *v75; // r9
  const __m128i *mm; // rax
  __int64 v77; // rdx
  __int64 v78; // rdx
  unsigned int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  _QWORD *v82; // rcx
  __int64 v83; // rdi
  unsigned int v84; // ecx
  __int64 v85; // rax
  __m128i *v86; // rsi
  _DWORD *v87; // r10
  const __m128i *jj; // rax
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // r15
  unsigned int v92; // ecx
  _DWORD *v93; // r10
  __int64 v94; // rdx
  __int64 v95; // rdi
  __m128i *v96; // rsi
  const __m128i *kk; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  _DWORD *v100; // rax
  unsigned int v101; // ecx
  __int64 v102; // rax
  __m128i *v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // rdi
  unsigned int v106; // ecx
  __int64 v107; // rax
  __m128i *v108; // rsi
  const __m128i *m; // rax
  __int64 v110; // rdx
  __int64 v111; // rdx
  char v112; // al
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 *v115; // r12
  unsigned __int64 v116; // r13
  __int64 v117; // rsi
  unsigned int v119; // ecx
  unsigned int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rdx
  unsigned int v123; // ecx
  size_t v124; // rsi
  unsigned int *v125; // rax
  _DWORD *v126; // rsi
  unsigned int v127; // edx
  unsigned int v128; // eax
  unsigned int *v129; // rax
  unsigned int v130; // ecx
  unsigned int v131; // eax
  unsigned int *v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rsi
  __int64 v135; // r8
  unsigned int v136; // ecx
  __int64 v137; // rax
  __m128i *v138; // rdi
  const __m128i *ii; // rax
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // r9
  __int64 v143; // rcx
  __int64 v144; // rdi
  __int64 v145; // rax
  unsigned int v146; // eax
  __int64 v147; // rdx
  _DWORD *v148; // rdi
  int v149; // eax
  __int64 *v150; // rdx
  unsigned int v151; // ecx
  __int64 v152; // rax
  __m128i *v153; // rsi
  const __m128i *n; // rax
  __int64 v155; // rdx
  __int64 v156; // rdx
  unsigned int v157; // edx
  unsigned int v158; // ecx
  unsigned int *v159; // rax
  _DWORD *v160; // rcx
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // r9
  __int64 v164; // rsi
  _DWORD *v165; // rax
  _DWORD *v166; // rax
  __int64 v167; // rax
  _DWORD *v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rsi
  __int64 v171; // rcx
  unsigned int v172; // edi
  __int64 v173; // rax
  __m128i *v174; // r8
  const __m128i *nn; // rax
  __int64 v176; // rdx
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // rdi
  __int64 v180; // rax
  __int64 v181; // rax
  unsigned int v182; // ecx
  int v183; // eax
  unsigned int v184; // ecx
  __int64 v185; // rax
  __m128i *v186; // rsi
  _DWORD *v187; // rdi
  const __m128i *i1; // rax
  __int64 v189; // rdx
  __int64 v190; // rdx
  unsigned int v191; // edx
  unsigned int v192; // eax
  unsigned int *v193; // rax
  _QWORD *v194; // rax
  __int64 v195; // [rsp+8h] [rbp-F8h]
  int v196; // [rsp+8h] [rbp-F8h]
  __int64 v197; // [rsp+8h] [rbp-F8h]
  __int64 v198; // [rsp+8h] [rbp-F8h]
  __m128i *v199; // [rsp+10h] [rbp-F0h]
  unsigned int v200; // [rsp+10h] [rbp-F0h]
  int v201; // [rsp+10h] [rbp-F0h]
  unsigned int v202; // [rsp+10h] [rbp-F0h]
  unsigned int v203; // [rsp+10h] [rbp-F0h]
  __int64 v204; // [rsp+10h] [rbp-F0h]
  __int64 v205; // [rsp+10h] [rbp-F0h]
  unsigned int v206; // [rsp+10h] [rbp-F0h]
  __int64 v207; // [rsp+10h] [rbp-F0h]
  int v208; // [rsp+18h] [rbp-E8h]
  __int64 v209; // [rsp+18h] [rbp-E8h]
  __int64 v210; // [rsp+18h] [rbp-E8h]
  __int64 v211; // [rsp+18h] [rbp-E8h]
  unsigned int v212; // [rsp+18h] [rbp-E8h]
  __int64 v213; // [rsp+18h] [rbp-E8h]
  __int64 v214; // [rsp+18h] [rbp-E8h]
  __int64 v215; // [rsp+18h] [rbp-E8h]
  __int64 v216; // [rsp+18h] [rbp-E8h]
  __int64 v217; // [rsp+18h] [rbp-E8h]
  __int64 v218; // [rsp+18h] [rbp-E8h]
  __int64 v219; // [rsp+18h] [rbp-E8h]
  __int64 v220; // [rsp+18h] [rbp-E8h]
  __int64 v221; // [rsp+18h] [rbp-E8h]
  int v222; // [rsp+20h] [rbp-E0h]
  __int64 v223; // [rsp+28h] [rbp-D8h]
  unsigned int v224; // [rsp+38h] [rbp-C8h]
  int v225; // [rsp+3Ch] [rbp-C4h]
  int v227; // [rsp+48h] [rbp-B8h]
  __m128i *v228; // [rsp+48h] [rbp-B8h]
  unsigned int v230; // [rsp+54h] [rbp-ACh]
  __int64 v231; // [rsp+58h] [rbp-A8h]
  _QWORD *v234; // [rsp+70h] [rbp-90h]
  void *v235; // [rsp+70h] [rbp-90h]
  _DWORD *v236; // [rsp+78h] [rbp-88h]
  _DWORD *v237; // [rsp+78h] [rbp-88h]
  _DWORD *v238; // [rsp+78h] [rbp-88h]
  _QWORD v239[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v240[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v241[8]; // [rsp+C0h] [rbp-40h] BYREF

  v222 = a3;
  v13 = (_QWORD *)sub_186B270(0x18u);
  v13[1] = a5;
  *v13 = 0x100000002LL;
  v236 = v13 + 1;
  v14 = (__m128i *)sub_186B270(0x80u);
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = 0;
  v223 = a2[2];
  v224 = sub_163C3C0(*a2 + 1728LL, a3);
  v240[0] = 0;
  v15 = *a2;
  v240[1] = 0;
  v16 = qword_1C7F2C0;
  v241[0] = 1;
  v241[1] = 0;
  if ( (a4 & 0x80000000) != 0 )
  {
    v235 = qword_1C7F2C0;
    sub_1830C40(qword_1C7F2C0, v240, a4);
    v16 = v235;
  }
  else
  {
    LODWORD(v240[0]) = a4;
  }
  sub_182CBA0(v16, v241);
  v20 = *(_QWORD *)(v15 + 1840);
  BYTE4(v241[0]) &= ~1u;
  LODWORD(v241[0]) = 1;
  if ( !v20 )
  {
    sub_16669E0(v15 + 1832);
    v20 = *(_QWORD *)(v15 + 1840);
  }
  v21 = sub_166A700(v20, (unsigned int)v240, 1, v17, v18, v19);
  v22 = qword_1C7F2C0;
  v231 = v21;
  sub_182CBA0(qword_1C7F2C0, v240);
  sub_182CBA0(v22, v241);
  if ( v231 )
    ++*(_DWORD *)(v231 + 8);
  v23 = (_QWORD *)sub_186B270(0x18u);
  *v23 = 0x100000002LL;
  v24 = 7;
  v25 = 8;
  v234 = v23 + 1;
  v227 = 0;
  v23[1] = v231;
  v225 = 0;
  v230 = 8;
LABEL_8:
  while ( 1 )
  {
    v26 = v24;
    v27 = 16 * v25;
    v28 = *(v236 - 1);
    v29 = &v14[v25];
    if ( !v28 )
      break;
    v30 = *(_QWORD *)&v236[2 * v28 - 2];
    v31 = *(_DWORD *)(v30 + 12);
    v32 = 16LL * (v24 & v31);
    v33 = &v14[(unsigned __int64)v32 / 0x10];
    if ( v32 != v27 )
    {
      for ( i = &v14[(unsigned __int64)v32 / 0x10]; i != v29; ++i )
      {
        v35 = i->m128i_i64[0];
        if ( i->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v35 + 12) == v31 && v30 == v35 )
          {
            v54 = v236;
            k = v33;
            goto LABEL_66;
          }
        }
        else if ( !v35 )
        {
          goto LABEL_16;
        }
      }
    }
    if ( v33 == v14 )
    {
LABEL_16:
      if ( !*(_WORD *)(v30 + 4) )
      {
        v36 = *(_DWORD **)(*(_QWORD *)(v30 + 16) + 24LL);
        if ( v36 )
        {
          if ( *v36 || v36[1] != 4 )
          {
            if ( *v36 == *(_DWORD *)(*a2 + 1768LL) && v36[1] == 29 && *(_DWORD *)(v30 + 24) == 2 )
            {
              v90 = *(_QWORD *)(v30 + 32);
              v91 = *(_QWORD *)(v30 + 40);
              goto LABEL_217;
            }
          }
          else
          {
            v90 = *(_QWORD *)(v30 + 40);
            v91 = *(_QWORD *)(v30 + 48);
LABEL_217:
            v119 = *(v236 - 2);
            if ( v28 == v119 )
            {
              v130 = (3 * v28 + 1) >> 1;
              v131 = 8 * v130 + 8;
              if ( 8 * v28 + 8 >= v131 || v28 >= v130 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v240, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v240);
                sub_233E40((__int64)v240);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v196 = v26;
              v202 = (3 * v28 + 1) >> 1;
              v213 = v90;
              v132 = (unsigned int *)sub_186B300(v236 - 2, v131);
              v119 = v202;
              v28 = v132[1];
              v236 = v132 + 2;
              v90 = v213;
              *v132 = v202;
              v26 = v196;
            }
            *(_QWORD *)&v236[2 * v28] = v90;
            v120 = v28 + 1;
            *(v236 - 1) = v28 + 1;
            if ( v28 + 1 == v119 )
            {
              v127 = (3 * v119 + 1) >> 1;
              v128 = 8 * v127 + 8;
              if ( 8 * v28 + 16 >= v128 || v119 >= v127 )
              {
                v9 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v240, "Overflow encountered when expanding vector");
                *v9 = (char *)off_1C63128;
                sub_2333C0(v9 + 1, v240);
                sub_233E40((__int64)v240);
                __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v201 = v26;
              v212 = (3 * v119 + 1) >> 1;
              v129 = (unsigned int *)sub_186B300(v236 - 2, v128);
              v26 = v201;
              v236 = v129 + 2;
              *v129 = v212;
              v120 = v129[1];
            }
            *(_QWORD *)&v236[2 * v120] = v91;
            *(v236 - 1) = v120 + 1;
          }
        }
      }
      v37 = 2 * v230;
      if ( 3 * v230 < 4 * (v225 + v227) )
      {
        v230 *= 2;
        v27 = 16LL * v37;
        v58 = (__m128i *)sub_186B270(v27);
        v59 = v58;
        v60 = &v58[v27 / 0x10];
        if ( v37 )
        {
          if ( (v27 & 0x10) == 0 || (v59 = v58 + 1, *v58 = 0, &v58[1] != v60) )
          {
            do
            {
              *v59 = 0;
              v59 += 2;
              v59[-1] = 0;
            }
            while ( v59 != v60 );
          }
        }
        v26 = v37 - 1;
        for ( j = v14; j != v29; *v65 = v66 )
        {
          while ( j->m128i_i64[0] <= 1uLL )
          {
            if ( ++j == v29 )
              goto LABEL_90;
          }
          v62 = 16LL * (*(_DWORD *)(j->m128i_i64[0] + 12) & (unsigned int)v26);
          v63 = &v58[(unsigned __int64)v62 / 0x10];
          if ( v27 == v62 )
          {
LABEL_93:
            if ( v58 == v63 )
            {
LABEL_170:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v64 = v236;
            v65 = v58;
            while ( v65->m128i_i64[0] )
            {
              if ( v63 == ++v65 )
                goto LABEL_170;
            }
          }
          else
          {
            v64 = v236;
            v65 = &v58[(unsigned __int64)v62 / 0x10];
            while ( v65->m128i_i64[0] )
            {
              if ( v60 == ++v65 )
                goto LABEL_93;
            }
          }
          v66 = _mm_loadu_si128(j++);
          v236 = v64;
        }
LABEL_90:
        if ( v14 )
        {
          v199 = &v58[v27 / 0x10];
          v208 = v26;
          v228 = v58;
          sub_186B220(v14);
          v60 = v199;
          v26 = v208;
          v58 = v228;
        }
        v227 = 0;
        v29 = v60;
        v14 = v58;
      }
      v38 = *(_DWORD *)(v30 + 12);
      v39 = 16LL * (v38 & (unsigned int)v26);
      v40 = &v14[(unsigned __int64)v39 / 0x10];
      if ( v39 == v27 )
      {
        v42 = nullptr;
LABEL_29:
        if ( v40 == v14 )
        {
LABEL_37:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v41 = v14;
        while ( 1 )
        {
          while ( 1 )
          {
            v44 = v41->m128i_i64[0];
            if ( v41->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v44 + 12) == v38 && v30 == v44 )
              goto LABEL_220;
            if ( v40 == ++v41 )
              goto LABEL_37;
          }
          if ( !v44 )
            break;
          v42 = (__int64 *)v41++;
          if ( v40 == v41 )
            goto LABEL_37;
        }
        if ( v42 )
          goto LABEL_99;
LABEL_188:
        v42 = (__int64 *)v41;
      }
      else
      {
        v41 = &v14[(unsigned __int64)v39 / 0x10];
        v42 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v43 = v41->m128i_i64[0];
            if ( v41->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v43 + 12) == v38 && v30 == v43 )
            {
LABEL_220:
              v41->m128i_i64[0] = v30;
              v41->m128i_i64[1] = 0;
              v25 = v230;
              v24 = v230 - 1;
              goto LABEL_8;
            }
            if ( ++v41 == v29 )
              goto LABEL_29;
          }
          if ( !v43 )
            break;
          v42 = (__int64 *)v41++;
          if ( v41 == v29 )
            goto LABEL_29;
        }
        if ( !v42 )
          goto LABEL_188;
LABEL_99:
        --v227;
      }
      v25 = v230;
      *v42 = v30;
      v42[1] = 0;
      v24 = v230 - 1;
      ++v225;
      continue;
    }
    v45 = v14;
    while ( 1 )
    {
      v46 = v45->m128i_i64[0];
      if ( v45->m128i_i64[0] > 1uLL )
        break;
      if ( !v46 )
        goto LABEL_16;
LABEL_42:
      if ( v33 == ++v45 )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(v46 + 12) != v31 || v30 != v46 )
      goto LABEL_42;
    k = &v14[(unsigned __int64)v32 / 0x10];
    if ( v32 == v27 )
    {
LABEL_70:
      if ( v33 != v14 )
      {
        for ( k = v14; v33 != k; ++k )
        {
          v57 = k->m128i_i64[0];
          if ( k->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v57 + 12) == v31 && v30 == v57 )
              goto LABEL_103;
          }
          else if ( !v57 )
          {
            break;
          }
        }
      }
LABEL_401:
      BUG();
    }
    v54 = v236;
    while ( 1 )
    {
LABEL_66:
      while ( 1 )
      {
        v56 = k->m128i_i64[0];
        if ( k->m128i_i64[0] > 1uLL )
          break;
        if ( !v56 )
          goto LABEL_401;
        if ( ++k == v29 )
        {
LABEL_69:
          v236 = v54;
          goto LABEL_70;
        }
      }
      if ( *(_DWORD *)(v56 + 12) == v31 && v30 == v56 )
        break;
      if ( ++k == v29 )
        goto LABEL_69;
    }
    v236 = v54;
LABEL_103:
    v67 = k->m128i_i64[1] == 0;
    *(v236 - 1) = v28 - 1;
    if ( !v67 )
      continue;
    if ( *(_WORD *)(v30 + 4) || (v68 = *(_DWORD **)(*(_QWORD *)(v30 + 16) + 24LL)) == nullptr )
    {
      v69 = *a2;
      if ( a4 >= v224 )
        goto LABEL_126;
      goto LABEL_189;
    }
    if ( !*v68 )
    {
      if ( v68[1] == 4 )
      {
        v105 = *(_QWORD *)(v30 + 40);
        v106 = *(_DWORD *)(v105 + 12);
        v107 = 16LL * (v24 & v106);
        v108 = &v14[(unsigned __int64)v107 / 0x10];
        if ( v107 == v27 )
        {
LABEL_179:
          if ( v108 != v14 )
          {
            for ( m = v14; v108 != m; ++m )
            {
              v111 = m->m128i_i64[0];
              if ( m->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v111 + 12) == v106 && v105 == v111 )
                  goto LABEL_254;
              }
              else if ( !v111 )
              {
                break;
              }
            }
          }
        }
        else
        {
          m = &v14[(unsigned __int64)v107 / 0x10];
          while ( 1 )
          {
            while ( 1 )
            {
              v110 = m->m128i_i64[0];
              if ( m->m128i_i64[0] > 1uLL )
                break;
              if ( !v110 )
                goto LABEL_399;
              if ( ++m == v29 )
                goto LABEL_179;
            }
            if ( *(_DWORD *)(v110 + 12) == v106 && v105 == v110 )
              break;
            if ( ++m == v29 )
              goto LABEL_179;
          }
LABEL_254:
          v134 = *(_QWORD *)(v30 + 48);
          v135 = m->m128i_i64[1];
          v136 = *(_DWORD *)(v134 + 12);
          v137 = 16LL * (v24 & v136);
          v138 = &v14[(unsigned __int64)v137 / 0x10];
          if ( v137 != v27 )
          {
            ii = &v14[(unsigned __int64)v137 / 0x10];
            do
            {
              while ( 1 )
              {
                v140 = ii->m128i_i64[0];
                if ( ii->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v140 + 12) == v136 && v134 == v140 )
                {
LABEL_270:
                  v142 = ii->m128i_i64[1];
                  v143 = *(_QWORD *)(v30 + 32);
                  v144 = a2[2];
                  if ( *(_QWORD *)(v144 + 856) == v143 || v135 == v142 )
                  {
                    v142 = v135;
                  }
                  else if ( *(_QWORD *)(v144 + 864) != v143 )
                  {
                    v215 = v25;
                    v145 = sub_15E1BF0(v144);
                    v25 = v215;
                    v142 = v145;
                  }
                  if ( v142 )
                    ++*(_DWORD *)(v142 + 8);
                  if ( v234 )
                  {
                    v146 = *((_DWORD *)v234 - 1);
                    if ( v146 == *((_DWORD *)v234 - 2) )
                    {
                      v157 = (3 * v146 + 1) >> 1;
                      v158 = 8 * v157 + 8;
                      if ( 8 * v146 + 8 >= v158 || v146 >= v157 )
                      {
                        v8 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v240, "Overflow encountered when expanding vector");
                        *v8 = (char *)off_1C63128;
                        sub_2333C0(v8 + 1, v240);
                        sub_233E40((__int64)v240);
                        __cxa_throw(
                          v8,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v197 = v25;
                      v203 = (3 * v146 + 1) >> 1;
                      v216 = v142;
                      v159 = (unsigned int *)sub_186B300(v234 - 1, v158);
                      v160 = v159 + 2;
                      v142 = v216;
                      v234 = v159 + 2;
                      v25 = v197;
                      v148 = v159 + 2;
                      *v159 = v203;
                      LODWORD(v159) = v159[1];
                      v150 = (__int64 *)&v160[2 * (unsigned int)v159];
                      v149 = (_DWORD)v159 + 1;
                    }
                    else
                    {
                      v147 = v146;
                      v148 = v234;
                      v149 = v146 + 1;
                      v150 = &v234[v147];
                    }
                  }
                  else
                  {
                    v204 = v25;
                    v217 = v142;
                    v161 = (_QWORD *)sub_186B270(0x18u);
                    *v161 = 2;
                    v142 = v217;
                    v234 = v161 + 1;
                    v150 = v161 + 1;
                    v25 = v204;
                    v149 = 1;
                    v148 = v234;
                  }
                  *v150 = v142;
                  *(v148 - 1) = v149;
                  v151 = *(_DWORD *)(v30 + 12);
                  v152 = 16LL * (v24 & v151);
                  v153 = &v14[(unsigned __int64)v152 / 0x10];
                  if ( v152 != v27 )
                  {
                    for ( n = &v14[(unsigned __int64)v152 / 0x10]; n != v29; ++n )
                    {
                      v155 = n->m128i_i64[0];
                      if ( n->m128i_i64[0] > 1uLL )
                      {
                        if ( *(_DWORD *)(v155 + 12) == v151 && v30 == v155 )
                        {
LABEL_300:
                          n->m128i_i64[1] = v142;
                          goto LABEL_8;
                        }
                      }
                      else if ( !v155 )
                      {
                        goto LABEL_392;
                      }
                    }
                  }
                  if ( v153 != v14 )
                  {
                    for ( n = v14; v153 != n; ++n )
                    {
                      v156 = n->m128i_i64[0];
                      if ( n->m128i_i64[0] > 1uLL )
                      {
                        if ( *(_DWORD *)(v156 + 12) == v151 && v30 == v156 )
                          goto LABEL_300;
                      }
                      else if ( !v156 )
                      {
                        break;
                      }
                    }
                  }
LABEL_392:
                  *(_QWORD *)&byte_8 = v142;
                  BUG();
                }
                if ( ++ii == v29 )
                  goto LABEL_262;
              }
              if ( !v140 )
                goto LABEL_399;
              ++ii;
            }
            while ( ii != v29 );
          }
LABEL_262:
          if ( v138 != v14 )
          {
            for ( ii = v14; v138 != ii; ++ii )
            {
              v141 = ii->m128i_i64[0];
              if ( ii->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v141 + 12) == v136 && v134 == v141 )
                  goto LABEL_270;
              }
              else if ( !v141 )
              {
                break;
              }
            }
          }
        }
LABEL_399:
        BUG();
      }
      v69 = *a2;
      if ( !*(_DWORD *)(*a2 + 1768LL) )
        goto LABEL_148;
LABEL_108:
      if ( a4 < v224 )
      {
LABEL_189:
        v210 = v25;
        v112 = sub_163D5B0(v69 + 1752, v30);
        v25 = v210;
        if ( v112 )
          goto LABEL_149;
        v69 = *a2;
        if ( *(_WORD *)(v30 + 4) || (v68 = *(_DWORD **)(*(_QWORD *)(v30 + 16) + 24LL)) == nullptr )
        {
LABEL_126:
          v209 = v25;
          sub_1407560(
            (unsigned int)v239,
            v69 + 1848,
            v69 + 2112,
            v222,
            v231,
            v30,
            0,
            *(_QWORD *)(*(_QWORD *)(v69 + 1848) + 840LL),
            1);
          v78 = v239[0];
          v25 = v209;
          if ( v239[0] )
            ++*(_DWORD *)(v239[0] + 8LL);
          if ( v234 )
          {
            v79 = *((_DWORD *)v234 - 1);
            if ( v79 == *((_DWORD *)v234 - 2) )
            {
              v123 = (3 * v79 + 1) >> 1;
              v124 = 8 * v123 + 8;
              if ( 8 * v79 + 8 >= (unsigned int)v124 || v79 >= v123 )
              {
                v6 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v240, "Overflow encountered when expanding vector");
                *v6 = (char *)off_1C63128;
                sub_2333C0(v6 + 1, v240);
                sub_233E40((__int64)v240);
                __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v195 = v209;
              v200 = (3 * v79 + 1) >> 1;
              v211 = v78;
              v125 = (unsigned int *)sub_186B300(v234 - 1, v124);
              v126 = v125 + 2;
              v83 = v239[0];
              v234 = v125 + 2;
              v78 = v211;
              *v125 = v200;
              v25 = v195;
              LODWORD(v125) = v125[1];
              v82 = &v126[2 * (unsigned int)v125];
              v81 = (_DWORD)v125 + 1;
            }
            else
            {
              v80 = v79;
              v81 = v79 + 1;
              v82 = &v234[v80];
              v83 = v78;
            }
          }
          else
          {
            v205 = v209;
            v218 = v78;
            v162 = (_QWORD *)sub_186B270(0x18u);
            *v162 = 2;
            v83 = v239[0];
            v234 = v162 + 1;
            v82 = v162 + 1;
            v78 = v218;
            v81 = 1;
            v25 = v205;
          }
          *v82 = v78;
          *((_DWORD *)v234 - 1) = v81;
          v84 = *(_DWORD *)(v30 + 12);
          v85 = 16LL * (v24 & v84);
          v86 = &v14[(unsigned __int64)v85 / 0x10];
          if ( v85 == v27 )
          {
LABEL_221:
            if ( v14 != v86 )
            {
              v87 = v236;
              for ( jj = v14; v86 != jj; ++jj )
              {
                v121 = jj->m128i_i64[0];
                if ( jj->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v121 + 12) == v84 && v30 == v121 )
                    goto LABEL_251;
                }
                else if ( !v121 )
                {
                  break;
                }
              }
            }
LABEL_393:
            *(_QWORD *)&byte_8 = v83;
            BUG();
          }
          v87 = v236;
          jj = &v14[(unsigned __int64)v85 / 0x10];
          while ( 1 )
          {
            v89 = jj->m128i_i64[0];
            if ( jj->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v89 + 12) == v84 && v30 == v89 )
              {
LABEL_251:
                v236 = v87;
                v133 = v239[1];
                jj->m128i_i64[1] = v83;
                if ( v83 )
                {
                  v67 = (*(_DWORD *)(v83 + 8))-- == 1;
                  if ( v67 )
                  {
                    v214 = v25;
                    sub_15D7BC0(v133, v83);
                    v25 = v214;
                  }
                }
                goto LABEL_8;
              }
            }
            else if ( !v89 )
            {
              goto LABEL_393;
            }
            if ( ++jj == v29 )
              goto LABEL_221;
          }
        }
      }
      v70 = *(_DWORD *)(v69 + 1768);
      if ( *v68 == v70 )
      {
        if ( v68[1] == 36
          || v68[1] == 25
          && *(_DWORD *)(v30 + 24) == 1
          && (v99 = *(_QWORD *)(v30 + 32), !*(_WORD *)(v99 + 4))
          && (v100 = *(_DWORD **)(*(_QWORD *)(v99 + 16) + 24LL)) != nullptr
          && *v100 == v70
          && v100[1] == 37
          || a4 < v224
          && (v68[1] == 24
           && *(_DWORD *)(v30 + 24) == 1
           && (v167 = *(_QWORD *)(v30 + 32), !*(_WORD *)(v167 + 4))
           && (v168 = *(_DWORD **)(*(_QWORD *)(v167 + 16) + 24LL)) != nullptr
           && *v168 == v70
           && v168[1] == 37
           || v68[1] == 28
           && *(_DWORD *)(v30 + 24) == 2
           && ((v163 = *(_QWORD *)(v30 + 32), v164 = *(_QWORD *)(v30 + 40), !*(_WORD *)(v163 + 4))
            && (v165 = *(_DWORD **)(*(_QWORD *)(v163 + 16) + 24LL)) != nullptr
            && *v165 == v70
            && v165[1] == 37
            && sub_BE7400(v70, v164)
            || !*(_WORD *)(v164 + 4)
            && (v166 = *(_DWORD **)(*(_QWORD *)(v164 + 16) + 24LL)) != nullptr
            && *v166 == v70
            && v166[1] == 37
            && sub_BE7400(v70, v163))) )
        {
          v101 = *(_DWORD *)(v30 + 12);
          v95 = *(_QWORD *)(a2[2] + 856LL);
          v102 = 16LL * (v24 & v101);
          v103 = &v14[(unsigned __int64)v102 / 0x10];
          if ( v102 == v27 )
          {
LABEL_193:
            if ( v103 != v14 )
            {
              v93 = v236;
              for ( kk = v14; v103 != kk; ++kk )
              {
                v113 = kk->m128i_i64[0];
                if ( kk->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v113 + 12) == v101 && v30 == v113 )
                    goto LABEL_248;
                }
                else if ( !v113 )
                {
                  break;
                }
              }
            }
LABEL_398:
            *(_QWORD *)&byte_8 = *(_QWORD *)(a2[2] + 856LL);
            BUG();
          }
          kk = &v14[(unsigned __int64)v102 / 0x10];
          while ( 1 )
          {
            v104 = kk->m128i_i64[0];
            if ( kk->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v104 + 12) == v101 && v30 == v104 )
                goto LABEL_249;
            }
            else if ( !v104 )
            {
              goto LABEL_398;
            }
            if ( ++kk == v29 )
              goto LABEL_193;
          }
        }
        if ( v68[1] == 29 && *(_DWORD *)(v30 + 24) == 2 )
        {
          v71 = *(_QWORD *)(v30 + 32);
          v72 = *(_DWORD *)(v71 + 12);
          v73 = 16LL * (v24 & v72);
          v74 = &v14[(unsigned __int64)v73 / 0x10];
          if ( v73 != v27 )
          {
            v75 = v236;
            for ( mm = &v14[(unsigned __int64)v73 / 0x10]; mm != v29; ++mm )
            {
              v77 = mm->m128i_i64[0];
              if ( mm->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v77 + 12) == v72 && v71 == v77 )
                {
LABEL_332:
                  v170 = *(_QWORD *)(v30 + 40);
                  v171 = mm->m128i_i64[1];
                  v238 = v75;
                  v172 = *(_DWORD *)(v170 + 12);
                  v173 = 16LL * (v24 & v172);
                  v174 = &v14[(unsigned __int64)v173 / 0x10];
                  if ( v173 != v27 )
                  {
                    for ( nn = &v14[(unsigned __int64)v173 / 0x10]; nn != v29; ++nn )
                    {
                      v176 = nn->m128i_i64[0];
                      if ( nn->m128i_i64[0] > 1uLL )
                      {
                        if ( *(_DWORD *)(v176 + 12) == v172 && v170 == v176 )
                        {
LABEL_348:
                          v178 = nn->m128i_i64[1];
                          v179 = a2[2];
                          v180 = *(_QWORD *)(v179 + 864);
                          if ( v171 != v178 && v171 != v180 )
                          {
                            if ( v178 == v180 )
                            {
                              v178 = v171;
                            }
                            else
                            {
                              v219 = v25;
                              v181 = sub_15E1B70(v179);
                              v25 = v219;
                              v178 = v181;
                            }
                          }
                          if ( v178 )
                            ++*(_DWORD *)(v178 + 8);
                          if ( v234 )
                          {
                            v182 = *((_DWORD *)v234 - 2);
                            if ( *((_DWORD *)v234 - 1) == v182 )
                            {
                              v191 = (3 * v182 + 1) >> 1;
                              v192 = 8 * v191 + 8;
                              if ( 8 * v182 + 8 >= v192 || v182 >= v191 )
                              {
                                v5 = (char **)__cxa_allocate_exception(0x28u);
                                sub_24ABB0(v240, "Overflow encountered when expanding vector");
                                *v5 = (char *)off_1C63128;
                                sub_2333C0(v5 + 1, v240);
                                sub_233E40((__int64)v240);
                                __cxa_throw(
                                  v5,
                                  (struct type_info *)&`typeinfo for'default_exception,
                                  (void (*)(void *))sub_230E50);
                              }
                              v198 = v25;
                              v206 = (3 * v182 + 1) >> 1;
                              v220 = v178;
                              v193 = (unsigned int *)sub_186B300(v234 - 1, v192);
                              v178 = v220;
                              v234 = v193 + 2;
                              v25 = v198;
                              *v193 = v206;
                            }
                          }
                          else
                          {
                            v207 = v25;
                            v221 = v178;
                            v194 = (_QWORD *)sub_186B270(0x18u);
                            *v194 = 2;
                            v178 = v221;
                            v234 = v194 + 1;
                            v25 = v207;
                          }
                          v183 = *((_DWORD *)v234 - 1);
                          v234[v183] = v178;
                          *((_DWORD *)v234 - 1) = v183 + 1;
                          v184 = *(_DWORD *)(v30 + 12);
                          v185 = 16LL * (v24 & v184);
                          v186 = &v14[(unsigned __int64)v185 / 0x10];
                          if ( v185 == v27 )
                          {
LABEL_364:
                            if ( v14 != v186 )
                            {
                              v187 = v238;
                              for ( i1 = v14; v186 != i1; ++i1 )
                              {
                                v190 = i1->m128i_i64[0];
                                if ( i1->m128i_i64[0] > 1uLL )
                                {
                                  if ( *(_DWORD *)(v190 + 12) == v184 && v30 == v190 )
                                    goto LABEL_378;
                                }
                                else if ( !v190 )
                                {
                                  break;
                                }
                              }
                            }
LABEL_391:
                            *(_QWORD *)&byte_8 = v178;
                            BUG();
                          }
                          v187 = v238;
                          i1 = &v14[(unsigned __int64)v185 / 0x10];
                          while ( 1 )
                          {
                            v189 = i1->m128i_i64[0];
                            if ( i1->m128i_i64[0] > 1uLL )
                            {
                              if ( *(_DWORD *)(v189 + 12) == v184 && v30 == v189 )
                              {
LABEL_378:
                                v236 = v187;
                                i1->m128i_i64[1] = v178;
                                goto LABEL_8;
                              }
                            }
                            else if ( !v189 )
                            {
                              goto LABEL_391;
                            }
                            if ( ++i1 == v29 )
                              goto LABEL_364;
                          }
                        }
                      }
                      else if ( !v176 )
                      {
                        goto LABEL_402;
                      }
                    }
                  }
                  if ( v174 != v14 )
                  {
                    nn = v14;
                    while ( 1 )
                    {
                      v177 = nn->m128i_i64[0];
                      if ( nn->m128i_i64[0] > 1uLL )
                      {
                        if ( *(_DWORD *)(v177 + 12) == v172 && v170 == v177 )
                          goto LABEL_348;
                      }
                      else if ( !v177 )
                      {
                        goto LABEL_402;
                      }
                      if ( v174 == ++nn )
                        goto LABEL_402;
                    }
                  }
                  goto LABEL_402;
                }
              }
              else if ( !v77 )
              {
                goto LABEL_402;
              }
            }
          }
          if ( v14 != v74 )
          {
            v75 = v236;
            for ( mm = v14; v74 != mm; ++mm )
            {
              v169 = mm->m128i_i64[0];
              if ( mm->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v169 + 12) == v72 && v71 == v169 )
                  goto LABEL_332;
              }
              else if ( !v169 )
              {
                break;
              }
            }
          }
LABEL_402:
          BUG();
        }
      }
      goto LABEL_126;
    }
    v69 = *a2;
    if ( *v68 != *(_DWORD *)(*a2 + 1768LL) )
      goto LABEL_108;
LABEL_148:
    if ( v68[1] != 35 )
      goto LABEL_108;
LABEL_149:
    v92 = *(_DWORD *)(v30 + 12);
    v93 = v236;
    v94 = 16LL * (v24 & v92);
    v95 = *(_QWORD *)(a2[2] + 864LL);
    v96 = &v14[(unsigned __int64)v94 / 0x10];
    kk = &v14[(unsigned __int64)v94 / 0x10];
    if ( v94 == v27 )
    {
LABEL_229:
      if ( v96 != v14 )
      {
        v93 = v236;
        for ( kk = v14; v96 != kk; ++kk )
        {
          v122 = kk->m128i_i64[0];
          if ( kk->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v122 + 12) == v92 && v30 == v122 )
              goto LABEL_248;
          }
          else if ( !v122 )
          {
            break;
          }
        }
      }
LABEL_394:
      *(_QWORD *)&byte_8 = *(_QWORD *)(a2[2] + 864LL);
      BUG();
    }
    while ( 2 )
    {
      v98 = kk->m128i_i64[0];
      if ( kk->m128i_i64[0] <= 1uLL )
      {
        if ( !v98 )
          goto LABEL_394;
        goto LABEL_153;
      }
      if ( *(_DWORD *)(v98 + 12) != v92 || v30 != v98 )
      {
LABEL_153:
        if ( ++kk == v29 )
          goto LABEL_229;
        continue;
      }
      break;
    }
LABEL_248:
    v236 = v93;
LABEL_249:
    kk->m128i_i64[1] = v95;
  }
  a1[1] = a2[2];
  v47 = *(_DWORD *)(a5 + 12);
  v48 = 16LL * (v47 & (unsigned int)v24);
  v49 = &v14[(unsigned __int64)v48 / 0x10];
  if ( v48 == v27 )
  {
LABEL_54:
    if ( v14 != v49 )
    {
      v50 = v236;
      for ( i2 = v14; v49 != i2; ++i2 )
      {
        v53 = i2->m128i_i64[0];
        if ( i2->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v53 + 12) == v47 && v53 == a5 )
            goto LABEL_201;
        }
        else if ( !v53 )
        {
          break;
        }
      }
    }
LABEL_400:
    BUG();
  }
  v50 = v236;
  i2 = &v14[(unsigned __int64)v48 / 0x10];
  while ( 1 )
  {
    while ( 1 )
    {
      v52 = i2->m128i_i64[0];
      if ( i2->m128i_i64[0] > 1uLL )
        break;
      if ( !v52 )
        goto LABEL_400;
      if ( ++i2 == v29 )
        goto LABEL_54;
    }
    if ( *(_DWORD *)(v52 + 12) == v47 && v52 == a5 )
      break;
    if ( ++i2 == v29 )
      goto LABEL_54;
  }
LABEL_201:
  v114 = i2->m128i_i64[1];
  v237 = v50;
  if ( v114 )
    ++*(_DWORD *)(v114 + 8);
  *a1 = v114;
  sub_14B9B80(*a2 + 1192LL, a1);
  if ( v234 )
  {
    v115 = v234;
    v116 = (unsigned __int64)&v234[*((unsigned int *)v234 - 1)];
    if ( (unsigned __int64)v234 < v116 )
    {
      do
      {
        while ( 1 )
        {
          v117 = *v115;
          if ( *v115 )
          {
            v67 = (*(_DWORD *)(v117 + 8))-- == 1;
            if ( v67 )
              break;
          }
          if ( (unsigned __int64)++v115 >= v116 )
            goto LABEL_210;
        }
        ++v115;
        sub_15D7BC0(v223, v117);
      }
      while ( (unsigned __int64)v115 < v116 );
    }
LABEL_210:
    sub_186B220(v234 - 1);
  }
  if ( v14 )
    sub_186B220(v14);
  sub_186B220(v237 - 2);
  return a1;
}

