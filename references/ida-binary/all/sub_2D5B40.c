unsigned __int64 __fastcall sub_2D5B40(
        __int64 *a1,
        const __m128i *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm0_8
  unsigned __int64 v12; // r12
  int *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // r14
  int *v16; // rdx
  __int64 v17; // rax
  int *v18; // rax
  __m128i si128; // xmm7
  unsigned __int64 v20; // r14
  int *v21; // rdi
  __int64 v22; // r15
  __int64 v23; // r14
  int *v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm4
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r12
  void *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // r14
  _QWORD *v32; // rax
  int v33; // edx
  const __m128i *v34; // rsi
  QT::QWidget *v35; // r15
  void (__fastcall *v36)(QT::QAbstractScrollArea *, const char *); // rax
  __m128i v37; // xmm0
  __m128 v38; // xmm0
  __m128i *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __m128i v46; // xmm0
  __m128i *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  __m128 v54; // xmm0
  __m128i *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __m128 v60; // xmm4
  __m128 v61; // xmm5
  __m128 v62; // xmm0
  __m128i *v63; // r15
  __m128i v64; // xmm0
  double v65; // xmm0_8
  char *v66; // rsi
  void *v67; // r14
  __int64 v68; // r14
  __int64 v69; // r12
  __int64 v70; // rdx
  __int64 v71; // r14
  __int64 i; // r13
  __int64 *v73; // rax
  __int64 v74; // rdi
  char *v75; // rax
  __m128i v76; // xmm5
  __int64 v77; // r15
  __int64 v78; // r12
  __int64 v79; // rdx
  __int64 v80; // r15
  __int64 k; // r13
  __int64 *v82; // rax
  __int64 v83; // rdi
  __m128i *v84; // rax
  __m128i v85; // xmm2
  unsigned __int64 v86; // r13
  _BYTE *v87; // r14
  QT::QWidget *v88; // rcx
  __int64 v89; // rdx
  int v90; // eax
  QT::QWidget *v91; // r15
  double v92; // xmm0_8
  double v93; // xmm0_8
  __int64 v94; // rdi
  __int64 v95; // r12
  __int64 v96; // r14
  _QWORD *v97; // rbx
  __int64 v98; // rdi
  __int64 v99; // rdi
  int *v100; // rdi
  __int64 v101; // r15
  __int64 v102; // rbx
  int *v103; // rdx
  __int64 v104; // rax
  int *v105; // rdi
  __int64 v106; // r15
  __int64 v107; // rbx
  int *v108; // rdx
  __int64 v109; // rax
  size_t v111; // r14
  const void *v112; // r15
  void *v113; // rdi
  void *v114; // r8
  void *v115; // rdi
  _QWORD *v116; // r14
  int *v117; // r15
  void *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rax
  size_t v121; // r12
  __int64 v122; // rdi
  void *v123; // rax
  const __m128i **v124; // rsi
  int *v125; // r15
  void *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rax
  size_t v129; // r14
  __int64 v130; // rdi
  void *v131; // rax
  const __m128i **v132; // rsi
  __int64 v133; // r15
  __int64 v134; // r13
  int *v135; // rdx
  void *v136; // rax
  size_t v137; // rdx
  __int64 v138; // r14
  __int64 j; // r13
  int *v140; // rdx
  void *v141; // rax
  size_t v142; // rdx
  int v143; // r12d
  const char *v144; // r15
  const char *v145; // rsi
  void *v146; // r14
  int v147; // eax
  int v148; // eax
  __int64 v149; // rdi
  __int64 v150; // r12
  __int64 v151; // r14
  _QWORD *v152; // r13
  __int64 v153; // rdi
  __int64 v154; // rdi
  const char **v155; // rdx
  __int64 v156; // r14
  __int64 v157; // r13
  const char **v158; // rax
  const char *v159; // rdi
  __int64 v160; // rdi
  unsigned __int64 v161; // r12
  __int64 v162; // r14
  _QWORD *v163; // r13
  __int64 v164; // rdi
  __int64 v165; // rdi
  __int64 v166; // rdx
  __int64 v167; // r14
  __int64 v168; // r13
  __int64 *v169; // rax
  __int64 v170; // rdi
  __int64 v171; // rdx
  __int64 v172; // r14
  __int64 v173; // r13
  __int64 *v174; // rax
  __int64 v175; // rdi
  __int64 v176; // rdi
  __int64 v177; // r12
  __int64 v178; // r14
  _QWORD *v179; // r13
  __int64 v180; // rdi
  __int64 v181; // rdi
  __int64 v182; // rdx
  __int64 v183; // r14
  __int64 v184; // r13
  __int64 *v185; // rax
  __int64 v186; // rdi
  __int64 v187; // rdx
  __int64 v188; // r14
  __int64 v189; // r13
  __int64 *v190; // rax
  __int64 v191; // rdi
  __int64 v192; // r8
  __int64 v193; // r12
  const void *v194; // r14
  __m128i *v195; // r14
  __int64 v196; // rax
  void *v197; // r14
  char v198; // [rsp+0h] [rbp-2A0h]
  __int64 v199; // [rsp+8h] [rbp-298h]
  __int64 v200; // [rsp+10h] [rbp-290h]
  size_t n[2]; // [rsp+20h] [rbp-280h] BYREF
  int *v202; // [rsp+30h] [rbp-270h]
  const __m128i *v203; // [rsp+38h] [rbp-268h]
  void *v204[2]; // [rsp+40h] [rbp-260h] BYREF
  int v205; // [rsp+5Ch] [rbp-244h] BYREF
  char *v206; // [rsp+60h] [rbp-240h] BYREF
  __int128 v207; // [rsp+68h] [rbp-238h]
  const char **v208; // [rsp+80h] [rbp-220h] BYREF
  __int128 v209; // [rsp+88h] [rbp-218h]
  void *v210; // [rsp+A0h] [rbp-200h] BYREF
  __int128 v211; // [rsp+A8h] [rbp-1F8h]
  __m128i v212; // [rsp+C0h] [rbp-1E0h] BYREF
  int *v213; // [rsp+E0h] [rbp-1C0h] BYREF
  __m128i v214; // [rsp+E8h] [rbp-1B8h]
  int *v215; // [rsp+F8h] [rbp-1A8h]
  __m128i v216; // [rsp+100h] [rbp-1A0h]
  void *dest; // [rsp+110h] [rbp-190h] BYREF
  __int128 v218; // [rsp+118h] [rbp-188h]
  __int64 v219; // [rsp+128h] [rbp-178h] BYREF
  __int128 v220; // [rsp+130h] [rbp-170h]
  char v221; // [rsp+140h] [rbp-160h]
  int v222; // [rsp+144h] [rbp-15Ch]
  unsigned __int8 v223; // [rsp+148h] [rbp-158h]
  _BYTE v224[24]; // [rsp+150h] [rbp-150h] BYREF
  __int64 v225; // [rsp+168h] [rbp-138h]
  __int128 v226; // [rsp+170h] [rbp-130h]
  void *v227; // [rsp+180h] [rbp-120h]
  __int128 v228; // [rsp+188h] [rbp-118h]
  __int64 v229; // [rsp+198h] [rbp-108h] BYREF
  __int128 v230; // [rsp+1A0h] [rbp-100h]
  int v231; // [rsp+1B4h] [rbp-ECh]
  char v232; // [rsp+1B8h] [rbp-E8h]
  __int64 v233; // [rsp+1C0h] [rbp-E0h] BYREF
  __int128 v234; // [rsp+1C8h] [rbp-D8h]
  _OWORD v235[2]; // [rsp+1D8h] [rbp-C8h] BYREF
  _BYTE v236[24]; // [rsp+1F8h] [rbp-A8h] BYREF
  __m128 v237; // [rsp+210h] [rbp-90h]
  __int64 v238; // [rsp+220h] [rbp-80h]
  __int128 v239; // [rsp+228h] [rbp-78h]
  __m128i *v240; // [rsp+238h] [rbp-68h]
  __int64 v241; // [rsp+240h] [rbp-60h]
  char v242; // [rsp+248h] [rbp-58h]
  __int64 v243; // [rsp+250h] [rbp-50h]
  char s[10]; // [rsp+25Eh] [rbp-42h] BYREF
  unsigned __int64 v245; // [rsp+268h] [rbp-38h]

  v10 = 0.0;
  v203 = a2;
  v245 = __readfsqword(0x28u);
  v214 = 0;
  v213 = nullptr;
  v215 = nullptr;
  dest = nullptr;
  v219 = 0;
  v216 = 0;
  v218 = 0;
  v220 = 0;
  sub_2D1400((__int64)&v213, a2->m128i_i8);
  v223 = 1;
  v222 = 0;
  if ( a1 )
  {
    v202 = nullptr;
    v12 = a1[1];
    if ( v12 )
    {
      v202 = (int *)qalloc_or_throw(24 * v12);
      v125 = v202;
      v204[0] = nullptr;
      do
      {
        v126 = v204[0];
        v127 = *a1;
        a5 = 0;
        *(_QWORD *)v125 = 0;
        *(_OWORD *)(v125 + 2) = 0;
        v128 = 3LL * (_QWORD)v126;
        a2 = (const __m128i *)(v127 + 8 * v128);
        v129 = a2->m128i_u64[1];
        if ( v129 )
        {
          v130 = a2->m128i_i64[1];
          n[0] = v127 + 8 * v128;
          v131 = (void *)qalloc_or_throw(v130);
          v132 = (const __m128i **)n[0];
          *(_QWORD *)v125 = v131;
          *((_QWORD *)v125 + 2) = v129;
          a2 = *v132;
          memcpy(v131, a2, v129);
          *((_QWORD *)v125 + 1) = v129;
        }
        ++v204[0];
        v125 += 6;
      }
      while ( (void *)v12 != v204[0] );
    }
    v13 = v213;
    a9 = (__m128)_mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
    *(__m128 *)v204 = a9;
    if ( v213 )
    {
      v14 = v214.m128i_i64[0];
      if ( v214.m128i_i64[0] )
      {
        v15 = 0;
        do
        {
          v16 = &v13[6 * v15];
          v17 = *(_QWORD *)v16;
          if ( *(_QWORD *)v16 )
          {
            *((_QWORD *)v16 + 1) = 0;
            qfree(v17, a2->m128i_i8);
            v13 = v213;
          }
          ++v15;
        }
        while ( v14 != v15 );
      }
      v214.m128i_i64[0] = 0;
      v10 = qfree(v13, a2->m128i_i8);
    }
    v18 = v202;
    si128 = _mm_load_si128((const __m128i *)v204);
    v202 = nullptr;
    v20 = a1[4];
    v213 = v18;
    v214 = si128;
    if ( v20 )
    {
      v202 = (int *)qalloc_or_throw(24 * v20);
      v117 = v202;
      v204[0] = nullptr;
      do
      {
        v118 = v204[0];
        v119 = a1[3];
        a6 = 0;
        *(_QWORD *)v117 = 0;
        *(_OWORD *)(v117 + 2) = 0;
        v120 = 3LL * (_QWORD)v118;
        a2 = (const __m128i *)(v119 + 8 * v120);
        v121 = a2->m128i_u64[1];
        if ( v121 )
        {
          v122 = a2->m128i_i64[1];
          n[0] = v119 + 8 * v120;
          v123 = (void *)qalloc_or_throw(v122);
          v124 = (const __m128i **)n[0];
          *(_QWORD *)v117 = v123;
          *((_QWORD *)v117 + 2) = v121;
          a2 = *v124;
          memcpy(v123, a2, v121);
          *((_QWORD *)v117 + 1) = v121;
        }
        ++v204[0];
        v117 += 6;
      }
      while ( (void *)v20 != v204[0] );
    }
    v21 = v215;
    a10 = (__m128)_mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
    *(__m128 *)v204 = a10;
    if ( v215 )
    {
      v22 = v216.m128i_i64[0];
      if ( v216.m128i_i64[0] )
      {
        v23 = 0;
        do
        {
          v24 = &v21[6 * v23];
          v25 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 )
          {
            *((_QWORD *)v24 + 1) = 0;
            qfree(v25, a2->m128i_i8);
            v21 = v215;
          }
          ++v23;
        }
        while ( v22 != v23 );
      }
      v216.m128i_i64[0] = 0;
      v10 = qfree(v21, a2->m128i_i8);
    }
    v26 = _mm_load_si128((const __m128i *)v204);
    v215 = v202;
    v27 = a1[7];
    v216 = v26;
    v28 = v27;
    if ( !v27 || (v111 = v27 - 1, v27 == 1) )
    {
      *(_QWORD *)&v218 = 0;
    }
    else
    {
      v112 = (const void *)a1[6];
      v113 = dest;
      if ( *((_QWORD *)&v218 + 1) < v27 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v27, 1);
        v113 = dest;
      }
      *(_QWORD *)&v218 = v28;
      memmove(v113, v112, v111);
      *((char *)dest + v28 - 1) = 0;
    }
    sub_2D0770(&v219, a1 + 9);
    v221 = *((_BYTE *)a1 + 96);
    v222 = *((_DWORD *)a1 + 25);
    v223 = *((_BYTE *)a1 + 104);
  }
  v29 = (void *)sub_1F4200();
  v204[0] = v29;
  if ( (void *)v203->m128i_i64[0] == v29 )
  {
    v143 = (int)v29;
    v144 = (const char *)sub_1F3B50((__int64)v29, 1, v30, (__int64)v203, v10);
    sub_2D1400((__int64)&v213, (_BYTE *)&dword_0 + 1);
    v145 = (const char *)&v206;
    v222 = 0;
    v223 = 1;
    v206 = nullptr;
    v205 = 0;
    v207 = 0;
    callui(73, (unsigned int)&v206, v143, (_DWORD)v144, (unsigned int)&v205, (unsigned int)&callui);
    if ( v205 )
    {
      v222 = v205;
      memset(v224, 0, sizeof(v224));
      v225 = 0;
      v227 = nullptr;
      v229 = 0;
      v202 = (int *)v224;
      v226 = 0;
      v228 = 0;
      v230 = 0;
      sub_2D1400((__int64)v224, (const char *)&v206);
      v232 = 1;
      v231 = 0;
      v147 = sub_2D2750(
               (__int64)&v206,
               (__int64)v224,
               byte_5BB4BB,
               byte_5BB4B8,
               2,
               (__int64 (__fastcall *)(__int64, __int64, __int64, const char *))sub_2D02E0,
               (__int64)v204[0],
               (__int64)v144);
      v222 += v147;
      v233 = 0;
      memset(v235, 0, sizeof(v235));
      v234 = 0;
      memset(v236, 0, sizeof(v236));
      v237 = 0;
      sub_2D1400((__int64)&v233, v224);
      HIDWORD(v238) = 0;
      LOBYTE(v239) = 1;
      v148 = sub_2D2750(
               (__int64)&v206,
               (__int64)&v233,
               (const char *)&unk_5BB4C1,
               byte_5BB4BE,
               2,
               (__int64 (__fastcall *)(__int64, __int64, __int64, const char *))sub_2D41F0,
               (__int64)v204[0],
               (__int64)v144);
      v222 += v148;
      v208 = nullptr;
      v210 = nullptr;
      memset(&v212, 0, 24);
      n[0] = (size_t)&v212;
      v209 = 0;
      v211 = 0;
      sub_2D0940(&v208, v212.m128i_i64, (__int64 *)&v210, &v206);
      if ( (unsigned __int64)v211 <= 1 )
      {
        v192 = v228;
        if ( (unsigned __int64)v228 > 1 )
        {
          v197 = v227;
          if ( *((_QWORD *)&v211 + 1) < (unsigned __int64)v228 )
          {
            v199 = v228;
            v210 = (void *)qvector_reserve(&v210, v210, v228, 1);
            v192 = v199;
          }
          *(_QWORD *)&v211 = v192;
          v200 = v192;
          memmove(v210, v197, v192 - 1);
          *((char *)v210 + v200 - 1) = 0;
        }
        else
        {
          v193 = *(_QWORD *)v236;
          if ( *(_QWORD *)v236 > 1u )
          {
            v194 = *((const void **)&v235[1] + 1);
            if ( *((_QWORD *)&v211 + 1) < *(_QWORD *)v236 )
              v210 = (void *)qvector_reserve(&v210, v210, *(_QWORD *)v236, 1);
            *(_QWORD *)&v211 = v193;
            memmove(v210, v194, v193 - 1);
            *((char *)v210 + v193 - 1) = 0;
          }
        }
      }
      if ( !v212.m128i_i64[1] )
      {
        if ( (_QWORD)v230 )
        {
          sub_2D0770((__int64 *)n[0], &v229);
        }
        else if ( v237.m128_u64[0] )
        {
          sub_2D0770((__int64 *)n[0], &v236[16]);
        }
      }
      v145 = (const char *)&v208;
      sub_2D1580((__int64)&v213, (__int64)&v208, (_QWORD *)n[0], v210);
      v149 = v212.m128i_i64[0];
      if ( v212.m128i_i64[0] )
      {
        v150 = v212.m128i_i64[1];
        if ( v212.m128i_i64[1] )
        {
          v151 = 0;
          do
          {
            v152 = (_QWORD *)(v149 + 80 * v151);
            v153 = v152[4];
            if ( v153 )
            {
              v152[5] = 0;
              qfree(v153, (const char *)&v208);
            }
            v154 = v152[1];
            if ( v154 )
            {
              v152[2] = 0;
              qfree(v154, (const char *)&v208);
            }
            ++v151;
            v149 = v212.m128i_i64[0];
          }
          while ( v150 != v151 );
        }
        v212.m128i_i64[1] = 0;
        qfree(v149, (const char *)&v208);
      }
      if ( v210 )
      {
        *(_QWORD *)&v211 = 0;
        qfree(v210, (const char *)&v208);
      }
      v155 = v208;
      if ( v208 )
      {
        v156 = v209;
        if ( (_QWORD)v209 )
        {
          v157 = 0;
          do
          {
            v158 = &v155[3 * v157];
            v159 = *v158;
            if ( *v158 )
            {
              v158[1] = nullptr;
              qfree(v159, (const char *)&v208);
              v155 = v208;
            }
            ++v157;
          }
          while ( v156 != v157 );
        }
        *(_QWORD *)&v209 = 0;
        qfree(v155, (const char *)&v208);
      }
      v160 = *(_QWORD *)&v236[16];
      if ( *(_QWORD *)&v236[16] )
      {
        v161 = v237.m128_u64[0];
        if ( v237.m128_u64[0] )
        {
          v162 = 0;
          do
          {
            v163 = (_QWORD *)(v160 + 80 * v162);
            v164 = v163[4];
            if ( v164 )
            {
              v163[5] = 0;
              qfree(v164, (const char *)&v208);
            }
            v165 = v163[1];
            if ( v165 )
            {
              v163[2] = 0;
              qfree(v165, (const char *)&v208);
            }
            ++v162;
            v160 = *(_QWORD *)&v236[16];
          }
          while ( v161 != v162 );
        }
        v237.m128_u64[0] = 0;
        qfree(v160, (const char *)&v208);
      }
      if ( *((_QWORD *)&v235[1] + 1) )
      {
        *(_QWORD *)v236 = 0;
        qfree(*((_QWORD *)&v235[1] + 1), (const char *)&v208);
      }
      v166 = *(_QWORD *)&v235[0];
      if ( *(_QWORD *)&v235[0] )
      {
        v167 = *((_QWORD *)&v235[0] + 1);
        if ( *((_QWORD *)&v235[0] + 1) )
        {
          v168 = 0;
          do
          {
            v169 = (__int64 *)(v166 + 24 * v168);
            v170 = *v169;
            if ( *v169 )
            {
              v169[1] = 0;
              qfree(v170, (const char *)&v208);
              v166 = *(_QWORD *)&v235[0];
            }
            ++v168;
          }
          while ( v167 != v168 );
        }
        *((_QWORD *)&v235[0] + 1) = 0;
        qfree(v166, (const char *)&v208);
      }
      v171 = v233;
      if ( v233 )
      {
        v172 = v234;
        if ( (_QWORD)v234 )
        {
          v173 = 0;
          do
          {
            v174 = (__int64 *)(v171 + 24 * v173);
            v175 = *v174;
            if ( *v174 )
            {
              v174[1] = 0;
              qfree(v175, (const char *)&v208);
              v171 = v233;
            }
            ++v173;
          }
          while ( v172 != v173 );
        }
        *(_QWORD *)&v234 = 0;
        qfree(v171, (const char *)&v208);
      }
      v176 = v229;
      if ( v229 )
      {
        v177 = v230;
        if ( (_QWORD)v230 )
        {
          v178 = 0;
          do
          {
            v179 = (_QWORD *)(v176 + 80 * v178);
            v180 = v179[4];
            if ( v180 )
            {
              v179[5] = 0;
              qfree(v180, (const char *)&v208);
            }
            v181 = v179[1];
            if ( v181 )
            {
              v179[2] = 0;
              qfree(v181, (const char *)&v208);
            }
            ++v178;
            v176 = v229;
          }
          while ( v177 != v178 );
        }
        *(_QWORD *)&v230 = 0;
        qfree(v176, (const char *)&v208);
      }
      if ( v227 )
      {
        *(_QWORD *)&v228 = 0;
        qfree(v227, (const char *)&v208);
      }
      v182 = v225;
      if ( v225 )
      {
        v183 = v226;
        if ( (_QWORD)v226 )
        {
          v184 = 0;
          do
          {
            v185 = (__int64 *)(v182 + 24 * v184);
            v186 = *v185;
            if ( *v185 )
            {
              v185[1] = 0;
              qfree(v186, (const char *)&v208);
              v182 = v225;
            }
            ++v184;
          }
          while ( v183 != v184 );
        }
        *(_QWORD *)&v226 = 0;
        qfree(v182, (const char *)&v208);
      }
      v187 = *(_QWORD *)v224;
      if ( *(_QWORD *)v224 )
      {
        v188 = *(_QWORD *)&v224[8];
        if ( *(_QWORD *)&v224[8] )
        {
          v189 = 0;
          do
          {
            v190 = (__int64 *)(v187 + 24 * v189);
            v191 = *v190;
            if ( *v190 )
            {
              v190[1] = 0;
              qfree(v191, (const char *)&v208);
              v187 = *(_QWORD *)v224;
            }
            ++v189;
          }
          while ( v188 != v189 );
        }
        *(_QWORD *)&v224[8] = 0;
        qfree(v187, (const char *)&v208);
      }
    }
    else if ( dword_8BA8F4 > 0 )
    {
      v146 = v204[0];
      v145 = (const char *)v204[0];
      sub_2D41F0((__int64)&v213, (__int64)v204[0], v144);
      if ( v222 <= 0 )
      {
        v145 = (const char *)&v213;
        (*(void (__fastcall **)(void *, int **))(*(_QWORD *)v146 + 1016LL))(v146, &v213);
      }
    }
    if ( !v214.m128i_i64[0] && v144 )
    {
      v145 = (const char *)&v213;
      sub_1F9890((__int64 *)v204[0], (__int64)&v213, (__int64)v144);
    }
    if ( v206 )
    {
      *(_QWORD *)&v207 = 0;
      qfree(v206, v145);
    }
  }
  v31 = v222;
  if ( *(_QWORD *)(sub_2D1CC0((__int64)&v213, nullptr) + 8) < v31 )
    v222 = *(_QWORD *)(sub_2D1CC0((__int64)&v213, nullptr) + 8);
  if ( v222 > 0 )
  {
    do
    {
      v32 = (_QWORD *)sub_2D1CC0((__int64)&v213, nullptr);
      v33 = v222 - 1;
      if ( *(_QWORD *)(*v32 + 24LL * (v222 - 1) + 8) > 1u )
        break;
      --v222;
      v223 = 0;
    }
    while ( v33 > 0 );
  }
  LOBYTE(v233) = 0;
  v34 = (const __m128i *)&v233;
  sub_2D1CC0((__int64)&v213, (char *)&v233);
  if ( (_BYTE)v233 )
  {
    if ( qword_8CCE70 )
    {
      v35 = qword_8CCE70;
      v36 = *(void (__fastcall **)(QT::QAbstractScrollArea *, const char *))(*(_QWORD *)qword_8CCE70 + 32LL);
      if ( v36 == hintview_t__::vfunc_4 )
      {
        hintview_t__::vfunc_3(qword_8CCE70, (const char *)&v233);
        operator delete(v35, 0x490u);
      }
      else
      {
        ((void (__fastcall *)(QT::QWidget *))v36)(qword_8CCE70);
      }
    }
    v239 = 0;
    v233 = 0;
    memset(v236, 0, sizeof(v236));
    v237.m128_u64[0] = 0;
    v237.m128_u64[1] = -1;
    v238 = 0;
    v240 = nullptr;
    v241 = 0;
    v202 = (int *)v224;
    v234 = 0;
    memset(v235, 0, sizeof(v235));
    sub_1E8870((__int64)v224, 1);
    v37 = _mm_load_si128((const __m128i *)v224);
    v242 = 0;
    *(__m128i *)&v236[8] = v37;
    v38 = (__m128)_mm_load_si128((const __m128i *)&v224[16]);
    LODWORD(v238) = v226;
    v243 = 0;
    v237 = v38;
    sub_1E8790((__int64)&v233, 0, 0, 1, *(double *)v38.m128_u64);
    sub_1E88C0(&v233, 5);
    v242 = 1;
    strcpy(s, "Hint View");
    v212.m128i_i64[0] = (__int64)hintplace_t___vtable;
    v212.m128i_i32[2] = 0;
    v39 = (__m128i *)qalloc(16);
    if ( !v39 )
      sub_22DB40((int)"hintplace", 5, v40, v41, v42, v43, v38, (__m128)0LL, a5, a6, v44, v45, a9, a10, v198);
    v46 = _mm_load_si128(&v212);
    *v39 = v46;
    *(__m128i *)v204 = v46;
    *((_QWORD *)&v239 + 1) = v39;
    v47 = (__m128i *)qalloc(16);
    v54 = (__m128)_mm_load_si128((const __m128i *)v204);
    if ( !v47 )
      sub_22DB40((int)"hintplace", 5, v48, v49, v50, v51, v54, (__m128)0LL, a5, a6, v52, v53, a9, a10, v198);
    *v47 = (__m128i)v54;
    v240 = v47;
    v225 = 0xFFFFFFFFLL;
    *(_QWORD *)&v226 = 1;
    *(__m128 *)v204 = v54;
    memset(v224, 0, sizeof(v224));
    v55 = (__m128i *)qalloc(16);
    v62 = (__m128)_mm_load_si128((const __m128i *)v204);
    v63 = v55;
    if ( !v55 )
      sub_22DB40((int)"hintplace", 5, v56, v57, v58, v59, v62, (__m128)0LL, a5, a6, v60, v61, a9, a10, v198);
    *v55 = (__m128i)v62;
    if ( (_QWORD)v239 )
    {
      qfree(v239, &byte_5);
      *(_QWORD *)&v239 = 0;
    }
    *(__m128i *)&v236[8] = _mm_load_si128((const __m128i *)v224);
    v64 = _mm_load_si128((const __m128i *)&v224[16]);
    LODWORD(v238) = v226;
    v237 = (__m128)v64;
    *(_QWORD *)&v239 = (*(__int64 (__fastcall **)(__m128i *))(v63->m128i_i64[0] + 16))(v63);
    v65 = qfree(v63, &byte_5);
    *(_DWORD *)v236 = 1;
    v66 = s;
    v67 = (void *)operator new(0x490u);
    v204[0] = v67;
    sub_2D3980((QT::QWidget *)v67, s, (__int64)&v233);
    qword_8CCE70 = (QT::QWidget *)v67;
    v68 = v214.m128i_i64[0];
    v69 = 0;
    if ( v214.m128i_i64[0] )
    {
      v69 = qalloc_or_throw(24 * v214.m128i_i64[0]);
      v133 = v69;
      v134 = 0;
      do
      {
        v135 = v213;
        *(_QWORD *)v133 = 0;
        *(_OWORD *)(v133 + 8) = 0;
        v66 = (char *)&v135[6 * v134];
        if ( *((_QWORD *)v66 + 1) )
        {
          n[0] = *((_QWORD *)v66 + 1);
          v136 = (void *)qalloc_or_throw(n[0]);
          v137 = n[0];
          *(_QWORD *)v133 = v136;
          *(_QWORD *)(v133 + 16) = v137;
          v66 = *(char **)v66;
          memcpy(v136, v66, v137);
          *(_QWORD *)(v133 + 8) = n[0];
        }
        ++v134;
        v133 += 24;
      }
      while ( v68 != v134 );
    }
    v70 = *((_QWORD *)v204[0] + 128);
    *(__m128i *)n = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v68, (__m128i)(unsigned __int64)v68);
    if ( v70 )
    {
      v71 = *((_QWORD *)v204[0] + 129);
      if ( v71 )
      {
        for ( i = 0; i != v71; ++i )
        {
          v73 = (__int64 *)(v70 + 24 * i);
          v74 = *v73;
          if ( *v73 )
          {
            v73[1] = 0;
            v65 = qfree(v74, v66, v65);
            v70 = *((_QWORD *)v204[0] + 128);
          }
        }
      }
      *((_QWORD *)v204[0] + 129) = 0;
      v65 = qfree(v70, v66, v65);
    }
    v75 = (char *)v204[0];
    v76 = _mm_load_si128((const __m128i *)n);
    v77 = v216.m128i_i64[0];
    *((_QWORD *)v204[0] + 128) = v69;
    v78 = 0;
    *(__m128i *)(v75 + 1032) = v76;
    if ( v77 )
    {
      v78 = qalloc_or_throw(24 * v77);
      v138 = v78;
      for ( j = 0; j != v77; ++j )
      {
        v140 = v215;
        *(_QWORD *)v138 = 0;
        *(_OWORD *)(v138 + 8) = 0;
        v66 = (char *)&v140[6 * j];
        if ( *((_QWORD *)v66 + 1) )
        {
          n[0] = *((_QWORD *)v66 + 1);
          v141 = (void *)qalloc_or_throw(n[0]);
          v142 = n[0];
          *(_QWORD *)v138 = v141;
          *(_QWORD *)(v138 + 16) = v142;
          v66 = *(char **)v66;
          memcpy(v141, v66, v142);
          *(_QWORD *)(v138 + 8) = n[0];
        }
        v138 += 24;
      }
    }
    v79 = *((_QWORD *)v204[0] + 131);
    *(__m128i *)n = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v77, (__m128i)(unsigned __int64)v77);
    if ( v79 )
    {
      v80 = *((_QWORD *)v204[0] + 132);
      if ( v80 )
      {
        for ( k = 0; k != v80; ++k )
        {
          v82 = (__int64 *)(v79 + 24 * k);
          v83 = *v82;
          if ( *v82 )
          {
            v82[1] = 0;
            v65 = qfree(v83, v66, v65);
            v79 = *((_QWORD *)v204[0] + 131);
          }
        }
      }
      *((_QWORD *)v204[0] + 132) = 0;
      v65 = qfree(v79, v66, v65);
    }
    v84 = (__m128i *)v204[0];
    v85 = _mm_load_si128((const __m128i *)n);
    v86 = v218;
    *((_QWORD *)v204[0] + 131) = v78;
    v84[66] = v85;
    if ( v86 > 1 )
    {
      v114 = dest;
      v115 = (void *)v84[67].m128i_i64[0];
      if ( v84[68].m128i_i64[0] < v86 )
      {
        v195 = v84;
        n[0] = (size_t)dest;
        v196 = qvector_reserve(&v84[67], v115, v86, 1);
        v195[67].m128i_i64[0] = v196;
        v114 = (void *)n[0];
        v115 = (void *)v196;
      }
      v116 = v204[0];
      *((_QWORD *)v204[0] + 135) = v86;
      memmove(v115, v114, v86 - 1);
      *(_BYTE *)(v116[134] + v86 - 1) = 0;
    }
    else
    {
      *((_QWORD *)v204[0] + 135) = 0;
    }
    v87 = v204[0];
    sub_2D0770((__int64 *)v204[0] + 137, &v219);
    v88 = qword_8CCE70;
    v89 = v223;
    v87[1120] = v221;
    v90 = v222;
    v91 = v88;
    v87[1128] = v89;
    *((_DWORD *)v87 + 281) = v90;
    *((_DWORD *)v88 + 290) = v90;
    *(_QWORD *)v224 = sub_2D3180(v88, (__int64)&v219, v89, (__int64)v88, v65);
    if ( *((_QWORD *)v91 + 129) )
      sub_2D0F00((__int64)v91, (const char *)&v219);
    v34 = v203;
    sub_2D2560(v91, v203, v202);
    QT::QWidget::show(qword_8CCE70);
    v92 = qfree(*((_QWORD *)&v239 + 1), v34->m128i_i8);
    *((_QWORD *)&v239 + 1) = 0;
    v93 = qfree(v240, v34->m128i_i8, v92);
    v240 = nullptr;
    if ( (_QWORD)v239 )
      qfree(v239, v34->m128i_i8, v93);
  }
  v94 = v219;
  if ( v219 )
  {
    v95 = v220;
    if ( (_QWORD)v220 )
    {
      v96 = 0;
      do
      {
        v97 = (_QWORD *)(v94 + 80 * v96);
        v98 = v97[4];
        if ( v98 )
        {
          v97[5] = 0;
          qfree(v98, v34->m128i_i8);
        }
        v99 = v97[1];
        if ( v99 )
        {
          v97[2] = 0;
          qfree(v99, v34->m128i_i8);
        }
        v94 = v219;
        ++v96;
      }
      while ( v95 != v96 );
    }
    *(_QWORD *)&v220 = 0;
    qfree(v94, v34->m128i_i8);
  }
  if ( dest )
  {
    *(_QWORD *)&v218 = 0;
    qfree(dest, v34->m128i_i8);
  }
  v100 = v215;
  if ( v215 )
  {
    v101 = v216.m128i_i64[0];
    if ( v216.m128i_i64[0] )
    {
      v102 = 0;
      do
      {
        v103 = &v100[6 * v102];
        v104 = *(_QWORD *)v103;
        if ( *(_QWORD *)v103 )
        {
          *((_QWORD *)v103 + 1) = 0;
          qfree(v104, v34->m128i_i8);
          v100 = v215;
        }
        ++v102;
      }
      while ( v101 != v102 );
    }
    v216.m128i_i64[0] = 0;
    qfree(v100, v34->m128i_i8);
  }
  v105 = v213;
  if ( v213 )
  {
    v106 = v214.m128i_i64[0];
    if ( v214.m128i_i64[0] )
    {
      v107 = 0;
      do
      {
        v108 = &v105[6 * v107];
        v109 = *(_QWORD *)v108;
        if ( *(_QWORD *)v108 )
        {
          *((_QWORD *)v108 + 1) = 0;
          qfree(v109, v34->m128i_i8);
          v105 = v213;
        }
        ++v107;
      }
      while ( v106 != v107 );
    }
    v214.m128i_i64[0] = 0;
    qfree(v105, v34->m128i_i8);
  }
  return v245 - __readfsqword(0x28u);
}
