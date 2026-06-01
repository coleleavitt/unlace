__int64 __fastcall sub_50B880(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        __int64 a15,
        unsigned int a16,
        unsigned int *a17)
{
  unsigned int v18; // eax
  __m128i v19; // xmm0
  bool v20; // zf
  char v21; // al
  char *v22; // rbx
  int v23; // r13d
  const char *v24; // rbp
  char *v25; // r15
  char v26; // al
  char v27; // al
  unsigned int v28; // ebx
  char v30; // al
  bool v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  char *v37; // rax
  char *v38; // rbx
  size_t v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rax
  const char *v45; // rsi
  __int64 v46; // r8
  __int64 v47; // r9
  size_t v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // r13d
  int v51; // ecx
  const char *v52; // rax
  char v53; // dl
  int v54; // ecx
  size_t v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  size_t v62; // r15
  unsigned __int64 v63; // rax
  int v64; // edx
  const char *v65; // rax
  char v66; // dl
  int v67; // ecx
  size_t v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  size_t v75; // r15
  unsigned __int64 v76; // rax
  int v77; // edx
  const char *v78; // rax
  char v79; // dl
  int v80; // ecx
  size_t v81; // rax
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  char *v88; // rax
  const char *v89; // rdi
  char *v90; // r15
  char *v91; // rax
  const char *v92; // rsi
  char *v93; // rax
  __int32 v94; // eax
  const char *v95; // rdx
  char v96; // si
  char *v97; // rax
  const char *v98; // rdx
  char *v99; // r9
  char *v100; // rbx
  size_t v101; // rax
  int v102; // ebp
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __m128 v106; // xmm4
  __m128 v107; // xmm5
  unsigned int v108; // eax
  char v109; // dl
  unsigned int v110; // eax
  const char **v111; // rdx
  size_t v112; // rax
  char *v113; // rbx
  unsigned __int64 v114; // rcx
  void **v115; // rsi
  __int64 v116; // r9
  __int64 v117; // rcx
  __int64 v118; // rax
  int v119; // ebx
  char v120; // al
  unsigned int v121; // eax
  const char **v122; // rdx
  __int64 v123; // rsi
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rax
  void *v129; // r13
  __int64 v130; // rbx
  __m128i v131; // xmm0
  __int64 v132; // rax
  __int64 i; // rbp
  volatile signed __int32 *v134; // rax
  size_t v135; // rax
  __int64 v136; // rcx
  __int64 v137; // r9
  char v138; // al
  char v139; // bl
  __int64 v140; // rdx
  const char *v141; // rax
  char v142; // dl
  int v143; // ecx
  int v144; // ecx
  char *v145; // rax
  const char *v146; // r15
  char *v147; // rax
  char v148; // cl
  int v149; // eax
  __int64 v150; // r9
  int v151; // r15d
  int v152; // eax
  char *v153; // rdi
  size_t v154; // rdx
  __int64 v155; // rbx
  __int64 j; // rbp
  volatile signed __int32 *v157; // rax
  _BYTE *v158; // rax
  __int64 v159; // r8
  int v160; // edx
  int *v161; // rax
  int v162; // esi
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __m128i *v166; // r15
  __int64 v167; // rsi
  __int64 v168; // r8
  __int64 v169; // r9
  unsigned int v170; // eax
  char v171; // dl
  __int32 v172; // esi
  __int64 v173; // rax
  volatile signed __int32 *v174; // rdi
  __int32 v175; // edx
  __int32 v176; // edx
  int v177; // eax
  unsigned int v178; // edx
  __int16 **v179; // rax
  __int16 *v180; // rax
  __int64 v181; // rdx
  volatile signed __int32 *v182; // rdi
  __int8 v183; // al
  __int64 v184; // r8
  volatile signed __int32 *v185; // rdx
  int k; // r14d
  void **v187; // r14
  void **v188; // rbx
  int *v189; // rsi
  __int64 v190; // r8
  __int64 v191; // r9
  size_t v192; // rax
  unsigned __int64 v193; // rdx
  int v194; // ecx
  const char *v195; // rax
  char v196; // dl
  int v197; // ecx
  size_t v198; // rax
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rdx
  __int64 v202; // rcx
  __m128i v203; // xmm0
  __m128 si128; // xmm1
  __int64 v205; // r8
  __int64 v206; // r9
  const char *v207; // rdi
  const char *v208; // rax
  char v209; // dl
  const char *v210; // rax
  char v211; // dl
  int v212; // ecx
  size_t v213; // rax
  __int64 v214; // rdx
  volatile signed __int32 *v215; // rdi
  __int32 v216; // edx
  volatile signed __int32 *v217; // rdi
  __int64 v218; // [rsp+0h] [rbp-180h]
  unsigned int v220; // [rsp+18h] [rbp-168h]
  int *v221; // [rsp+18h] [rbp-168h]
  char *nptr; // [rsp+20h] [rbp-160h]
  char *nptrc; // [rsp+20h] [rbp-160h]
  char *nptra; // [rsp+20h] [rbp-160h]
  char *nptrd; // [rsp+20h] [rbp-160h]
  int nptrb; // [rsp+20h] [rbp-160h]
  char *v227; // [rsp+28h] [rbp-158h]
  char *v228; // [rsp+28h] [rbp-158h]
  int v229; // [rsp+28h] [rbp-158h]
  char *v230; // [rsp+28h] [rbp-158h]
  unsigned __int8 v232; // [rsp+40h] [rbp-140h]
  const char *v233; // [rsp+40h] [rbp-140h]
  char *v236; // [rsp+58h] [rbp-128h]
  __int64 v237; // [rsp+58h] [rbp-128h]
  unsigned int v238; // [rsp+58h] [rbp-128h]
  unsigned int v239; // [rsp+60h] [rbp-120h]
  const char *v240; // [rsp+68h] [rbp-118h]
  int v241; // [rsp+70h] [rbp-110h]
  char *v242; // [rsp+80h] [rbp-100h]
  const char *v243; // [rsp+88h] [rbp-F8h]
  __int64 v244; // [rsp+88h] [rbp-F8h]
  __int32 v245; // [rsp+90h] [rbp-F0h]
  char *v246; // [rsp+98h] [rbp-E8h] BYREF
  __int128 v247; // [rsp+A0h] [rbp-E0h]
  void *v248[2]; // [rsp+B8h] [rbp-C8h] BYREF
  __int64 v249; // [rsp+C8h] [rbp-B8h]
  __int128 v250; // [rsp+D8h] [rbp-A8h] BYREF
  char v251; // [rsp+E8h] [rbp-98h]
  __int32 v252; // [rsp+ECh] [rbp-94h]
  __int64 v253; // [rsp+F0h] [rbp-90h]
  __int64 v254; // [rsp+F8h] [rbp-88h]
  const char *v255; // [rsp+100h] [rbp-80h]
  char v256; // [rsp+108h] [rbp-78h]
  void *ptr[2]; // [rsp+110h] [rbp-70h] BYREF
  __int64 v258; // [rsp+120h] [rbp-60h]
  bool v259; // [rsp+128h] [rbp-58h]
  __int64 v260; // [rsp+12Ch] [rbp-54h]
  unsigned __int64 v261; // [rsp+140h] [rbp-40h]

  v261 = __readfsqword(0x28u);
  v18 = *a17;
  v250 = 0;
  v19.m128i_i64[0] = 0;
  v251 = 0;
  v253 = 0;
  v258 = 0;
  *(_OWORD *)ptr = 0;
  v220 = v18;
  v254 = 0xFFFFFFFFLL;
  v259 = 0;
  v20 = a3[1].m128i_i64[0] == 0;
  v260 = 0xFFFFFFFFLL;
  v252 = a6;
  if ( v20 )
    goto LABEL_2;
  v126 = a3->m128i_i64[0];
  v127 = 0;
  if ( !a3->m128i_i64[0] )
    goto LABEL_158;
  if ( *(int *)v126 > 1 )
  {
    v127 = *(_QWORD *)(v126 + 8);
LABEL_158:
    v128 = QT::QArrayData::allocate(v248, 96, 16, v127, 1, a6);
    v129 = (void *)a3->m128i_i64[0];
    v130 = a3->m128i_i64[1];
    v131 = _mm_loadl_epi64((const __m128i *)v248);
    a9 = (__m128)(unsigned __int64)v128;
    v132 = a3[1].m128i_i64[0];
    a3[1].m128i_i64[0] = 0;
    v19 = _mm_unpacklo_epi64(v131, (__m128i)a9);
    *a3 = v19;
    if ( v129 && !_InterlockedSub((volatile signed __int32 *)v129, 1u) )
    {
      for ( i = v130 + 96 * v132; i != v130; v130 += 96 )
      {
        v134 = *(volatile signed __int32 **)(v130 + 56);
        if ( v134 && !_InterlockedSub(v134, 1u) )
          free(*(void **)(v130 + 56));
      }
      free(v129);
    }
    goto LABEL_2;
  }
  v155 = a3->m128i_i64[1];
  for ( j = v155 + 96 * a3[1].m128i_i64[0]; j != v155; v155 += 96 )
  {
    v157 = *(volatile signed __int32 **)(v155 + 56);
    if ( v157 && !_InterlockedSub(v157, 1u) )
      free(*(void **)(v155 + 56));
  }
  a3[1].m128i_i64[0] = 0;
LABEL_2:
  v21 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 )
  {
    v22 = (char *)a2;
    v23 = 0;
    v24 = nullptr;
    v218 = a2;
    while ( v21 != 60 )
    {
      if ( v21 <= 60 )
      {
        if ( v21 == 32 )
        {
          v23 += v24 == nullptr;
          if ( !*v22 )
          {
LABEL_24:
            if ( !v24 || !*v24 )
              goto LABEL_26;
            v259 = 0;
            LODWORD(v250) = v23;
            DWORD1(v250) = (_DWORD)v24 - v218;
            v192 = strlen(v24);
            v193 = (unsigned int)(v192 - 1);
            v194 = v192 - 1;
            if ( (int)v192 - 1 > 0 )
            {
              do
              {
                if ( v24[v193] != 32 )
                {
                  v194 = v193;
                  goto LABEL_283;
                }
                --v193;
              }
              while ( v193 );
              v194 = 0;
            }
            else
            {
              v193 = (int)v193;
LABEL_283:
              if ( v193 >= v192 - 1 )
                goto LABEL_284;
            }
            v24[v194 + 1] = 0;
LABEL_284:
            v195 = sub_4F9030(v24, 0);
            v196 = *v195;
            if ( *v195 )
            {
              v197 = 0;
              do
              {
                ++v195;
                v197 += v196 != 126;
                v196 = *v195;
              }
              while ( *v195 );
            }
            else
            {
              v197 = 0;
            }
            DWORD2(v250) = v197;
            v251 = 0;
            v198 = strlen(v24);
            QT::QString::fromUtf8(v248, v198, v24);
            v201 = v258;
            v202 = v249;
            v203 = _mm_loadu_si128((const __m128i *)ptr);
            si128 = (__m128)_mm_load_si128((const __m128i *)v248);
            v258 = v249;
            v249 = v201;
            *(__m128 *)ptr = si128;
            *(__m128i *)v248 = v203;
            if ( v203.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v203.m128i_i64[0], 1u) )
              free(v248[0]);
            sub_50AC80(a3, a3[1].m128i_i64[0], (__int64)&v250, *(double *)v203.m128i_i64, si128, a9, v202, v199, v200);
            if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
              sub_503260(a3, 0, 0, 0, v205, v206, *(double *)v203.m128i_i64, *(double *)si128.m128_u64, a9);
            goto LABEL_26;
          }
          goto LABEL_32;
        }
        if ( v21 != 37 )
        {
LABEL_20:
          v27 = *v22;
          goto LABEL_21;
        }
        *v22 = 0;
        if ( !v24 || !*v24 )
        {
LABEL_8:
          v25 = v22 + 1;
          DWORD1(v250) = (_DWORD)v22 - v218;
          v26 = v22[1];
          if ( v26 == 47 )
          {
            v218 += 2;
            goto LABEL_12;
          }
          if ( v26 == 37 )
          {
            if ( !v24 )
              v24 = v22 + 1;
            goto LABEL_12;
          }
          v229 = strtol(v22 + 1, nullptr, 10);
          v108 = v22[1];
          v109 = v22[1];
          if ( v108 > 0x7F )
            goto LABEL_127;
          while ( v108 - 48 <= 9 )
          {
            v108 = *++v25;
            v109 = v108;
            if ( v108 > 0x7F )
              goto LABEL_127;
          }
          if ( v109 == 42 )
          {
            v251 = 42;
            *(_QWORD *)&v250 = 0;
            DWORD2(v250) = 0;
            v121 = *(_DWORD *)a15;
            if ( *(_DWORD *)a15 > 0x2Fu )
            {
              v122 = *(const char ***)(a15 + 8);
              *(_QWORD *)(a15 + 8) = v122 + 1;
            }
            else
            {
              v122 = (const char **)(*(_QWORD *)(a15 + 16) + v121);
              *(_DWORD *)a15 = v121 + 8;
            }
            v123 = a3[1].m128i_i64[0];
            v255 = *v122;
            sub_50AC80(a3, v123, (__int64)&v250, *(double *)v19.m128i_i64, a8, a9, v103, v104, v105);
            if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
              sub_503260(a3, 0, 0, 0, v124, v125, *(double *)v19.m128i_i64, *(double *)a8.m128_u64, a9);
            v218 += 2;
            v22 = v25;
            v27 = *v25;
          }
          else
          {
LABEL_127:
            v246 = nullptr;
            v247 = 0;
            v110 = *(_DWORD *)a15;
            if ( *(_DWORD *)a15 > 0x2Fu )
            {
              v111 = *(const char ***)(a15 + 8);
              *(_QWORD *)(a15 + 8) = v111 + 1;
            }
            else
            {
              v111 = (const char **)(*(_QWORD *)(a15 + 16) + v110);
              *(_DWORD *)a15 = v110 + 8;
            }
            v233 = *v111;
            sub_4F9450(
              a1,
              *v111,
              (unsigned int)*v25,
              (__int64 *)&v246,
              1,
              v105,
              (__m128)0LL,
              a8,
              a9,
              a10,
              v106,
              v107,
              a13,
              a14);
            if ( (_QWORD)v247 )
            {
              v112 = v247 - 1;
              v113 = v246;
              v114 = (unsigned __int64)(v247 - 1) >> 63;
            }
            else
            {
              LOBYTE(v114) = 0;
              v112 = 0;
              v113 = (char *)&s1;
            }
            if ( !v113 || (_BYTE)v114 )
            {
              v112 = 0;
              if ( v113 )
                v112 = strlen(v113);
            }
            v115 = (void **)v112;
            QT::QString::fromUtf8(v248, v112, v113);
            v117 = v258;
            v118 = v249;
            v19 = _mm_loadu_si128((const __m128i *)ptr);
            a8 = (__m128)_mm_load_si128((const __m128i *)v248);
            v258 = v249;
            v249 = v117;
            *(__m128 *)ptr = a8;
            *(__m128i *)v248 = v19;
            if ( v19.m128i_i64[0] )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)v19.m128i_i64[0], 1u) )
                free(v248[0]);
              v118 = v258;
            }
            LODWORD(v250) = v23;
            v119 = 0;
            if ( v118 )
            {
              v115 = ptr;
              QT::QString::split(v248, ptr, 10, 0, 1);
              if ( v249 <= 0 )
              {
                v185 = (volatile signed __int32 *)v248[0];
                v119 = 0;
              }
              else
              {
                v185 = (volatile signed __int32 *)v248[0];
                for ( k = 0; k < v249; ++k )
                {
                  if ( !v185 || *(int *)v185 > 1 )
                  {
                    v115 = nullptr;
                    sub_1B21C0((__m128i *)v248, 0, 0, 0, v184, v116);
                    v185 = (volatile signed __int32 *)v248[0];
                  }
                  if ( v119 < *((_DWORD *)v248[1] + 6 * k + 4) )
                    v119 = *((_DWORD *)v248[1] + 6 * k + 4);
                }
                v23 += v119;
              }
              if ( v185 && !_InterlockedSub(v185, 1u) )
              {
                if ( v248[1] != (char *)v248[1] + 24 * v249 )
                {
                  nptrb = v119;
                  v187 = (void **)v248[1];
                  v188 = (void **)((char *)v248[1] + 24 * v249);
                  do
                  {
                    if ( *v187 && !_InterlockedSub((volatile signed __int32 *)*v187, 1u) )
                      free(*v187);
                    v187 += 3;
                  }
                  while ( v188 != v187 );
                  v119 = nptrb;
                }
                free(v248[0]);
              }
            }
            DWORD2(v250) = v119;
            LODWORD(v254) = v229;
            v255 = v233;
            v256 = *v25;
            v120 = v256;
            if ( v256 != 104 )
              v120 = 32;
            v251 = v120;
            if ( v229 > 0 || v258 )
            {
              v115 = (void **)&v250;
              sub_50B680(a3, (__int64)&v250, (int *)a15, v220, a16, v116, *(double *)v19.m128i_i64, a8, a9);
            }
            if ( v246 )
            {
              *(_QWORD *)&v247 = 0;
              *(double *)v19.m128i_i64 = qfree(v246, (const char *)v115);
            }
            v27 = *v25;
            v22 = v25;
          }
          goto LABEL_23;
        }
        v259 = 0;
        LODWORD(v250) = v23;
        DWORD1(v250) = (_DWORD)v24 - v218;
        v62 = strlen(v24);
        v63 = (unsigned int)(v62 - 1);
        v64 = v63;
        if ( (int)v63 > 0 )
        {
          do
          {
            if ( v24[v63] != 32 )
            {
              v64 = v63;
              goto LABEL_86;
            }
            --v63;
          }
          while ( v63 );
          v64 = 0;
        }
        else
        {
          v63 = (int)v63;
LABEL_86:
          if ( v63 >= v62 - 1 )
            goto LABEL_87;
        }
        v24[v64 + 1] = 0;
LABEL_87:
        v65 = sub_4F9030(v24, 0);
        v66 = *v65;
        if ( *v65 )
        {
          v67 = 0;
          do
          {
            ++v65;
            v67 += v66 != 126;
            v66 = *v65;
          }
          while ( *v65 );
        }
        else
        {
          v67 = 0;
        }
        DWORD2(v250) = v67;
        v251 = 0;
        v68 = strlen(v24);
        QT::QString::fromUtf8(v248, v68, v24);
        v71 = v258;
        v72 = v249;
        v19 = _mm_loadu_si128((const __m128i *)ptr);
        a8 = (__m128)_mm_load_si128((const __m128i *)v248);
        v258 = v249;
        v249 = v71;
        *(__m128 *)ptr = a8;
        *(__m128i *)v248 = v19;
        if ( v19.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v19.m128i_i64[0], 1u) )
          free(v248[0]);
        sub_50AC80(a3, a3[1].m128i_i64[0], (__int64)&v250, *(double *)v19.m128i_i64, a8, a9, v72, v69, v70);
        if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
          sub_503260(a3, 0, 0, 0, v73, v74, *(double *)v19.m128i_i64, *(double *)a8.m128_u64, a9);
        v23 += v62;
        v24 = nullptr;
        goto LABEL_8;
      }
      if ( v21 == 92 )
      {
        v27 = v22[1];
        v25 = v22 + 1;
        if ( v27 == 32 )
          goto LABEL_12;
        ++v22;
LABEL_21:
        if ( !v24 )
          v24 = v22;
LABEL_23:
        if ( !v27 )
          goto LABEL_24;
LABEL_32:
        v25 = v22;
        goto LABEL_12;
      }
      if ( v21 != 124 )
        goto LABEL_20;
      *v22 = 0;
      if ( v24 )
      {
        if ( *v24 )
        {
          LODWORD(v250) = v23;
          v259 = 0;
          DWORD1(v250) = (_DWORD)v24 - v218;
          v48 = strlen(v24);
          v49 = (unsigned int)(v48 - 1);
          v50 = v48 + v23;
          v51 = v48 - 1;
          if ( (int)v48 - 1 > 0 )
          {
            do
            {
              if ( v24[v49] != 32 )
              {
                v51 = v49;
                goto LABEL_70;
              }
              --v49;
            }
            while ( v49 );
            v51 = 0;
          }
          else
          {
            v49 = (int)v49;
LABEL_70:
            if ( v49 >= v48 - 1 )
              goto LABEL_71;
          }
          v24[v51 + 1] = 0;
LABEL_71:
          v52 = sub_4F9030(v24, 0);
          v53 = *v52;
          if ( *v52 )
          {
            v54 = 0;
            do
            {
              ++v52;
              v54 += v53 != 126;
              v53 = *v52;
            }
            while ( *v52 );
          }
          else
          {
            v54 = 0;
          }
          DWORD2(v250) = v54;
          v251 = 0;
          v55 = strlen(v24);
          QT::QString::fromUtf8(v248, v55, v24);
          v58 = v258;
          v59 = v249;
          v19 = _mm_loadu_si128((const __m128i *)ptr);
          a8 = (__m128)_mm_load_si128((const __m128i *)v248);
          v258 = v249;
          v249 = v58;
          *(__m128 *)ptr = a8;
          *(__m128i *)v248 = v19;
          if ( v19.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v19.m128i_i64[0], 1u) )
            free(v248[0]);
          sub_50AC80(a3, a3[1].m128i_i64[0], (__int64)&v250, *(double *)v19.m128i_i64, a8, a9, v59, v56, v57);
          if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
            sub_503260(a3, 0, 0, 0, v60, v61, *(double *)v19.m128i_i64, *(double *)a8.m128_u64, a9);
          *v22 = 32;
          v23 = v50 + 1;
          v25 = v22;
          v24 = nullptr;
          goto LABEL_12;
        }
        *v22 = 32;
        v25 = v22;
      }
      else
      {
        *v22 = 32;
        ++v23;
        v25 = v22;
      }
LABEL_12:
      v21 = v25[1];
      v22 = v25 + 1;
      if ( !v21 )
        goto LABEL_24;
    }
    if ( !strchr(v22, 62) )
      goto LABEL_309;
    *v22 = 0;
    if ( !v24 || !*v24 )
    {
LABEL_36:
      v30 = v22[1];
      *v22 = 60;
      v31 = v30 == 45 || v30 == 124;
      if ( v31 )
      {
        DWORD2(v250) = 0;
        v251 = v30;
        if ( v30 == 45 && ((char *)a2 != v22 || *(_BYTE *)(a2 + 2) != 62 || *(_BYTE *)(a2 + 3)) )
          goto LABEL_309;
        LODWORD(v250) = v23;
        DWORD1(v250) = (_DWORD)v22 - v218;
        QT::QString::assign(ptr, &unk_5C2F25, 0);
        sub_50AC80(a3, a3[1].m128i_i64[0], (__int64)&v250, *(double *)v19.m128i_i64, a8, a9, v32, v33, v34);
        if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
          sub_503260(a3, 0, 0, 0, v35, v36, *(double *)v19.m128i_i64, *(double *)a8.m128_u64, a9);
        v27 = v22[2];
        v22 += 2;
        goto LABEL_23;
      }
      if ( v30 == 61 )
      {
        v251 = 61;
        DWORD2(v250) = 0;
        if ( (char *)a2 != v22 || *(_BYTE *)(a2 + 2) != 58 )
          goto LABEL_309;
        LODWORD(v250) = v23;
        DWORD1(v250) = a2 - v218;
        v37 = strchr((const char *)(a2 + 3), 62);
        v246 = nullptr;
        v38 = v37;
        v247 = 0;
        v39 = (size_t)&v37[-a2 - 3];
        if ( v37 != (char *)(a2 + 3) )
        {
          v153 = nullptr;
          v154 = v39 + 1;
          if ( v39 != -1 )
          {
            v246 = (char *)qvector_reserve(&v246, 0, v154, 1);
            v154 = v39 + 1;
            v153 = v246;
          }
          *(_QWORD *)&v247 = v154;
          memmove(v153, (const void *)(a2 + 3), v39);
          v246[v39] = 0;
        }
        sub_518A60((QT::QString *)v248);
        v40 = v258;
        v19 = _mm_loadu_si128((const __m128i *)ptr);
        a8 = (__m128)_mm_load_si128((const __m128i *)v248);
        v258 = v249;
        v249 = v40;
        *(__m128 *)ptr = a8;
        *(__m128i *)v248 = v19;
        if ( v19.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v19.m128i_i64[0], 1u) )
          free(v248[0]);
        v22 = v38 + 1;
        LODWORD(v254) = strtol(v22, nullptr, 10);
        if ( (int)v254 > 0 )
        {
          v44 = strchr(v22, 62);
          if ( v44 )
            v22 = v44 + 1;
        }
        v45 = (const char *)a3[1].m128i_i64[0];
        sub_50AC80(a3, (__int64)v45, (__int64)&v250, *(double *)v19.m128i_i64, a8, a9, v41, v42, v43);
        if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
        {
          v45 = nullptr;
          sub_503260(a3, 0, 0, 0, v46, v47, *(double *)v19.m128i_i64, *(double *)a8.m128_u64, a9);
        }
        if ( v246 )
        {
          *(_QWORD *)&v247 = 0;
          *(double *)v19.m128i_i64 = qfree(v246, v45);
        }
        goto LABEL_62;
      }
      v88 = strchr(v22, 58);
      if ( !v88 )
        goto LABEL_309;
      while ( 1 )
      {
        v89 = v88 + 1;
        if ( *(v88 - 1) != 92 )
          break;
        v88 = strchr(v89, 58);
        if ( !v88 )
          goto LABEL_309;
      }
      v227 = v88;
      v90 = v88 + 1;
      v91 = (char *)skip_spaces(v89);
      v92 = v91 + 1;
      LODWORD(v91) = *v91;
      v232 = (unsigned __int8)v91;
      v239 = (unsigned int)v91;
      if ( !strchr("AqhSNnLlMmuDoOsYH$IiBkKFfTyXeEtbRCrcp", (int)v91)
        || (v241 = strtol(v92, nullptr, 10), nptr = v227, (v93 = strchr(v227, 62)) == nullptr) )
      {
LABEL_309:
        v28 = 0;
        goto LABEL_27;
      }
      v228 = v93;
      v242 = v93 + 1;
      v94 = strtol(v93 + 1, nullptr, 10);
      v95 = v22 + 1;
      v245 = v94;
      v240 = v22 + 1;
      v96 = v228[1];
      v228[1] = 0;
      LODWORD(v250) = v23;
      DWORD1(v250) = (_DWORD)v22 - v218;
      *nptr = 0;
      if ( v22[1] == 32 )
      {
        do
          ++v95;
        while ( *v95 == 32 );
      }
      else
      {
        v95 = v22 + 1;
      }
      v236 = nptr;
      nptrc = (char *)v95;
      v97 = strchr(v95, 58);
      v98 = nptrc;
      v99 = v236;
      v100 = v97;
      if ( v97 )
      {
        nptra = (char *)v24;
        v243 = v98;
        do
        {
          if ( *(v100 - 1) == 92 )
          {
            v101 = strlen(v100);
            v102 = v101;
            memmove(v100 - 1, v100, v101);
            v100[v102 - 1] = 32;
          }
          v100 = strchr(v100 + 1, 58);
        }
        while ( v100 );
        v24 = nptra;
        v99 = v236;
        v98 = v243;
      }
      nptrd = (char *)v98;
      v237 = (__int64)v99;
      v135 = strlen(v98);
      QT::QString::fromUtf8(v248, v135, nptrd);
      v19 = _mm_loadu_si128((const __m128i *)ptr);
      a8 = (__m128)_mm_load_si128((const __m128i *)v248);
      v136 = v249;
      v249 = v258;
      v137 = v237;
      v258 = v136;
      *(__m128 *)ptr = a8;
      *(__m128i *)v248 = v19;
      if ( v19.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v19.m128i_i64[0], 1u) )
      {
        free(v248[0]);
        v137 = v237;
      }
      v244 = v137;
      v138 = toupper(v232);
      v139 = v138;
      if ( v138 == 82 )
      {
        v31 = 1;
        v238 = v220;
      }
      else
      {
        v238 = v220 + 1;
        if ( v138 == 67 )
        {
          v31 = 1;
        }
        else if ( (unsigned __int8)(v232 - 66) > 0x32u
               || (v140 = 0x4020000000009LL, !_bittest64(&v140, (unsigned int)v232 - 66)) )
        {
          v158 = (_BYTE *)sub_508440(v239);
          if ( v158 )
          {
            v251 = v158[8];
            (*(void (__fastcall **)(_BYTE *, __int128 *, const char *, __int64, __int64, __int64))(*(_QWORD *)v158 + 48LL))(
              v158,
              &v250,
              v240,
              a15,
              v159,
              v244);
            ++v220;
            goto LABEL_186;
          }
          v210 = sub_4F9030(v240, 0);
          v211 = *v210;
          if ( *v210 )
          {
            v212 = 0;
            do
            {
              ++v210;
              v212 += v211 != 126;
              v211 = *v210;
            }
            while ( *v210 );
          }
          else
          {
            v212 = 0;
          }
          DWORD2(v250) = v212;
          v251 = 0;
          v254 = 0;
          sub_50B680(a3, (__int64)&v250, (int *)a15, v220, a16, v244, *(double *)v19.m128i_i64, a8, a9);
          v23 += DWORD2(v250);
          LODWORD(v250) = v23;
          *(_QWORD *)((char *)&v250 + 4) = (unsigned int)(v244 - v218 + 1);
          v213 = strlen(v90);
          QT::QString::fromUtf8(v248, v213, v90);
          v214 = v258;
          v19 = _mm_loadu_si128((const __m128i *)ptr);
          a8 = (__m128)_mm_load_si128((const __m128i *)v248);
          v258 = v249;
          v249 = v214;
          *(__m128 *)ptr = a8;
          *(__m128i *)v248 = v19;
          if ( v19.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v19.m128i_i64[0], 1u) )
            free(v248[0]);
LABEL_185:
          v251 = v232;
          v220 = v238;
LABEL_186:
          LODWORD(v254) = v241;
          v228[1] = v96;
          v145 = sub_507CF0(v90);
          v146 = v145;
          if ( !v145 )
            goto LABEL_309;
          v147 = sub_507CF0(v145);
          v230 = v147;
          if ( !v147 )
            goto LABEL_309;
          v22 = strchr(v147, 62);
          if ( !v22 )
            goto LABEL_309;
          v148 = v232 - 66;
          if ( (unsigned __int8)(v232 - 66) <= 0x2Cu )
          {
            if ( ((1LL << v148) & 0x180000803844LL) != 0 )
            {
              if ( *v146 == 43 )
                HIDWORD(v254) = 1;
              goto LABEL_306;
            }
            if ( ((1LL << v148) & 0x20100000209LL) != 0 )
            {
LABEL_192:
              HIDWORD(v254) = strtoul(v146, nullptr, 0);
LABEL_193:
              if ( sub_4F9D90((__int64)&v250) )
                HIDWORD(v250) = 4096;
              v149 = strtol(v230, nullptr, 10);
              DWORD2(v250) = v149;
              v151 = v149;
              if ( v232 == 75 )
              {
                if ( !v149 )
                  DWORD2(v250) = 12;
              }
              else if ( (v232 == 66 || v232 == 107) && !v149 )
              {
                QT::QString::toUtf8_helper((QT::QString *)v248, (const QT::QString *)ptr);
                v207 = (const char *)v248[1];
                if ( !v248[1] )
                  v207 = (const char *)&QT::QByteArray::_empty;
                v208 = sub_4F9030(v207, 0);
                v209 = *v208;
                if ( *v208 )
                {
                  v151 = 0;
                  do
                  {
                    ++v208;
                    v151 += v209 != 126;
                    v209 = *v208;
                  }
                  while ( *v208 );
                }
                DWORD2(v250) = v151;
                if ( v248[0] && !_InterlockedSub((volatile signed __int32 *)v248[0], 1u) )
                  free(v248[0]);
              }
              sub_50B680(a3, (__int64)&v250, (int *)a15, v238 - 1, a16, v150, *(double *)v19.m128i_i64, a8, a9);
LABEL_200:
              v152 = DWORD2(v250);
              if ( !DWORD2(v250) )
                v152 = 1;
              v23 += v152;
LABEL_62:
              v27 = *v22;
              goto LABEL_23;
            }
          }
          if ( sub_4F9D90((__int64)&v250) )
            goto LABEL_192;
LABEL_306:
          HIDWORD(v250) = strtol(v146, nullptr, 10);
          goto LABEL_193;
        }
      }
      v141 = sub_4F9030(v240, 0);
      v142 = *v141;
      if ( *v141 )
      {
        v143 = 0;
        do
        {
          ++v141;
          v143 += v142 != 126;
          v142 = *v141;
        }
        while ( *v141 );
        v144 = v143 + 2;
      }
      else
      {
        v144 = 2;
      }
      DWORD2(v250) = v144;
      if ( v31 )
      {
        v160 = 0;
        v251 = v139;
        LODWORD(v254) = v241;
        v228[1] = v96;
        if ( v239 <= 0x7F )
          v160 = 2 * (islower(v239) != 0);
        v161 = (int *)(a4 + 4LL * (v160 + (v139 != 82)));
        v162 = *v161;
        v221 = v161;
        if ( *v161 == -1 )
        {
          v162 = v250;
          *v161 = v250;
        }
        else
        {
          LODWORD(v250) = *v161;
        }
        v166 = (__m128i *)sub_4F9DA0(a5, v162, 0);
        if ( !v166 )
        {
          v238 += v139 == 82;
          v19.m128i_i64[0] = 0;
          v166 = (__m128i *)operator new(0x90u);
          *v166 = 0;
          v189 = *(int **)(a5 + 16);
          v166[1].m128i_i64[0] = 0;
          memset(&v166[1].m128i_u64[1], 0, 0x58u);
          v248[0] = v166;
          v166[7].m128i_i32[0] = 0;
          v166[3].m128i_i32[2] = -1;
          v166[6].m128i_i32[3] = -1;
          v166[7].m128i_i8[4] = 0;
          v166[8].m128i_i8[12] = 0;
          sub_5029D0((int **)a5, v189, (__int64 *)v248, 0, v190, v191);
          if ( !*(_QWORD *)a5 || **(int **)a5 > 1 )
            sub_5025F0(a5, 0, 0, 0, v164, v165);
          v166[1].m128i_i32[2] = v250;
        }
        v259 = v238 - 1 == a16;
        v167 = v166[1].m128i_i64[0];
        if ( v167 )
        {
          if ( v166[2].m128i_i32[3] == v252 )
            v166[8].m128i_i8[12] = 1;
        }
        else
        {
          v166[2].m128i_i32[3] = v252;
        }
        sub_50AC80(v166, v167, (__int64)&v250, *(double *)v19.m128i_i64, a8, a9, v163, v164, v165);
        if ( !v166->m128i_i64[0] || *(int *)v166->m128i_i64[0] > 1 )
          sub_503260(v166, 0, 0, 0, v168, v169, *(double *)v19.m128i_i64, *(double *)a8.m128_u64, a9);
        sub_50B680(a3, (__int64)&v250, (int *)a15, v238 - 1, a16, v169, *(double *)v19.m128i_i64, a8, a9);
        v170 = v228[1];
        v171 = v228[1];
        if ( v170 <= 0x7F )
        {
          while ( v170 - 48 <= 9 )
          {
            v170 = *++v242;
            v171 = *v242;
            if ( v170 > 0x7F )
              goto LABEL_251;
          }
          if ( v171 == 62 )
          {
            v172 = v166[1].m128i_i32[0];
            v166[7].m128i_i8[4] = 1;
            if ( !v172 )
              goto LABEL_249;
            v173 = v166->m128i_i64[1];
            v174 = *(volatile signed __int32 **)(v173 + 56);
            v175 = *(_DWORD *)v173;
            if ( v174 )
            {
              _InterlockedAdd(v174, 1u);
              v166[1].m128i_i32[2] = v175;
              if ( !_InterlockedSub(v174, 1u) )
                free((void *)v174);
              if ( !v166[1].m128i_i64[0] )
              {
                v166[2].m128i_i32[3] = 0;
                goto LABEL_239;
              }
              v173 = v166->m128i_i64[1];
              v215 = *(volatile signed __int32 **)(v173 + 56);
              v216 = *(_DWORD *)(v173 + 20);
              if ( !v215 )
              {
LABEL_339:
                v166[2].m128i_i32[3] = v216;
LABEL_331:
                v217 = *(volatile signed __int32 **)(v173 + 56);
                v176 = *(_DWORD *)(v173 + 4);
                if ( v217 )
                {
                  _InterlockedAdd(v217, 1u);
                  v166[1].m128i_i32[3] = v176;
                  if ( !_InterlockedSub(v217, 1u) )
                    free((void *)v217);
LABEL_241:
                  v177 = 1;
                  if ( !v166[8].m128i_i8[12] )
                    v177 = v166[1].m128i_i32[0];
                  v166[7].m128i_i32[2] = v177;
                  v178 = *(_DWORD *)a15;
                  if ( *(_DWORD *)a15 > 0x2Fu )
                  {
                    v179 = *(__int16 ***)(a15 + 8);
                    *(_QWORD *)(a15 + 8) = v179 + 1;
                  }
                  else
                  {
                    v179 = (__int16 **)(*(_QWORD *)(a15 + 16) + v178);
                    *(_DWORD *)a15 = v178 + 8;
                  }
                  v180 = *v179;
                  v20 = v166[1].m128i_i64[0] == 0;
                  v166[8].m128i_i64[0] = (__int64)v180;
                  v166[7].m128i_i16[6] = *v180;
                  v166[8].m128i_i32[2] = v245;
                  if ( v20 )
                  {
                    v183 = 0;
                  }
                  else
                  {
                    v181 = v166->m128i_i64[1];
                    v182 = *(volatile signed __int32 **)(v181 + 56);
                    v183 = *(_BYTE *)(v181 + 16);
                    if ( v182 )
                    {
                      _InterlockedAdd(v182, 1u);
                      v166[2].m128i_i8[8] = v183;
                      if ( !_InterlockedSub(v182, 1u) )
                        free((void *)v182);
                      goto LABEL_249;
                    }
                  }
                  v166[2].m128i_i8[8] = v183;
LABEL_249:
                  v22 = v242;
                  *v221 = -1;
                  v220 = v238;
                  goto LABEL_200;
                }
LABEL_240:
                v166[1].m128i_i32[3] = v176;
                goto LABEL_241;
              }
            }
            else
            {
              v166[1].m128i_i32[2] = v175;
              v215 = *(volatile signed __int32 **)(v173 + 56);
              v216 = *(_DWORD *)(v173 + 20);
              if ( !v215 )
                goto LABEL_339;
            }
            _InterlockedAdd(v215, 1u);
            v166[2].m128i_i32[3] = v216;
            if ( !_InterlockedSub(v215, 1u) )
              free((void *)v215);
            if ( v166[1].m128i_i64[0] )
            {
              v173 = v166->m128i_i64[1];
              goto LABEL_331;
            }
LABEL_239:
            v176 = 0;
            goto LABEL_240;
          }
LABEL_251:
          v228 = v242 - 1;
        }
        v22 = v228;
        v220 = v238;
        goto LABEL_200;
      }
      goto LABEL_185;
    }
    v259 = 0;
    LODWORD(v250) = v23;
    DWORD1(v250) = (_DWORD)v24 - v218;
    v75 = strlen(v24);
    v76 = (unsigned int)(v75 - 1);
    v77 = v76;
    if ( (int)v76 > 0 )
    {
      do
      {
        if ( v24[v76] != 32 )
        {
          v77 = v76;
          goto LABEL_102;
        }
        --v76;
      }
      while ( v76 );
      v77 = 0;
    }
    else
    {
      v76 = (int)v76;
LABEL_102:
      if ( v76 >= v75 - 1 )
        goto LABEL_103;
    }
    v24[v77 + 1] = 0;
LABEL_103:
    v78 = sub_4F9030(v24, 0);
    v79 = *v78;
    if ( *v78 )
    {
      v80 = 0;
      do
      {
        ++v78;
        v80 += v79 != 126;
        v79 = *v78;
      }
      while ( *v78 );
    }
    else
    {
      v80 = 0;
    }
    DWORD2(v250) = v80;
    v251 = 0;
    v81 = strlen(v24);
    QT::QString::fromUtf8(v248, v81, v24);
    v84 = v258;
    v85 = v249;
    v19 = _mm_loadu_si128((const __m128i *)ptr);
    a8 = (__m128)_mm_load_si128((const __m128i *)v248);
    v258 = v249;
    v249 = v84;
    *(__m128 *)ptr = a8;
    *(__m128i *)v248 = v19;
    if ( v19.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v19.m128i_i64[0], 1u) )
      free(v248[0]);
    sub_50AC80(a3, a3[1].m128i_i64[0], (__int64)&v250, *(double *)v19.m128i_i64, a8, a9, v85, v82, v83);
    if ( !a3->m128i_i64[0] || *(int *)a3->m128i_i64[0] > 1 )
      sub_503260(a3, 0, 0, 0, v86, v87, *(double *)v19.m128i_i64, *(double *)a8.m128_u64, a9);
    v23 += v75;
    v24 = nullptr;
    goto LABEL_36;
  }
LABEL_26:
  v28 = 1;
  *a17 = v220;
LABEL_27:
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v28;
}
