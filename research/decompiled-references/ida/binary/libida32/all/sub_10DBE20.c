char ***__fastcall sub_10DBE20(char ***a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, int a6)
{
  const char *v7; // rsi
  void ***v8; // r15
  __int64 *v9; // r13
  void *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  __int64 v20; // rbx
  __m128 v21; // kr00_16
  const char **v22; // r14
  const char **v23; // rcx
  void ***v24; // rax
  unsigned __int8 **v25; // r12
  const char **v26; // r15
  __int64 v27; // r14
  size_t v28; // rax
  void **v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __m128i *v32; // r9
  void *v33; // rdx
  char *v34; // rbx
  void **v35; // rax
  void **v36; // rbp
  const char *v37; // rax
  size_t v38; // rcx
  char *v39; // rbx
  const char *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __m128i *v44; // r9
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  int v47; // eax
  __m128i *v48; // r10
  size_t v49; // r11
  __m128i *v50; // r9
  int v51; // r8d
  bool v52; // al
  __int64 v53; // rbx
  char *v54; // rsi
  size_t v55; // rax
  char *v56; // rdi
  char v57; // al
  int v58; // eax
  int v59; // esi
  __int64 *v60; // rbx
  bool v61; // zf
  char *v62; // r11
  size_t v63; // r10
  char v64; // al
  char *v65; // rdi
  size_t v66; // rsi
  char v67; // al
  char **v68; // r8
  bool v69; // al
  _QWORD *v70; // rbx
  _BYTE *v71; // rax
  signed __int64 v72; // rdx
  void **v73; // rax
  char ***v74; // rcx
  void **v75; // rdi
  int v77; // eax
  size_t v78; // rax
  size_t v79; // rdx
  __int64 v80; // rbp
  const char **v81; // rax
  const char *v82; // rbx
  __int64 v83; // rsi
  void **v84; // rbx
  __m128i v85; // xmm4
  __m128i v86; // xmm5
  __m128i v87; // xmm6
  __m128i v88; // xmm7
  __m128i v89; // xmm4
  __m128i v90; // xmm5
  const void *v91; // rbx
  __int128 v92; // kr10_16
  size_t v93; // rax
  _QWORD *v94; // rdi
  __int64 v95; // rsi
  _QWORD *i; // rsi
  __m128i v97; // xmm2
  const char *v98; // rax
  size_t v99; // rdx
  const char *v100; // rbp
  size_t v101; // r14
  unsigned int v102; // ebx
  int v103; // eax
  bool v104; // r10
  unsigned int v105; // r13d
  bool v106; // r9
  int v107; // r11d
  bool v108; // al
  char **v109; // rcx
  char *v110; // rsi
  char *v111; // rdi
  size_t v112; // rsi
  char v113; // al
  unsigned int v114; // edx
  int v115; // ebp
  bool v116; // r14
  char *v117; // rdi
  size_t v118; // rsi
  char v119; // al
  unsigned int v120; // r13d
  int v121; // eax
  bool v122; // al
  void ***v123; // r14
  __int64 v124; // rcx
  __int64 v125; // r8
  __m128i *v126; // r9
  _QWORD **v127; // r15
  __int8 v128; // r13
  _QWORD **v129; // r12
  int v130; // edi
  void *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // r8
  __m128i *v136; // r9
  char *v137; // rdi
  void *v138; // rax
  _QWORD *v139; // r8
  _QWORD *v140; // rdx
  _QWORD *v141; // rsi
  int v142; // edx
  __int64 v143; // rax
  char ***v144; // rcx
  char ***v145; // rcx
  unsigned int v146; // eax
  int v147; // eax
  _QWORD *v148; // rax
  char v149; // al
  __int64 v150; // rbx
  int v151; // ebp
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  _QWORD *v156; // rax
  _QWORD *j; // rdx
  unsigned int v158; // edx
  unsigned __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // r8
  __m128i *v162; // r9
  void **v163; // r13
  void **v164; // r15
  __int64 v165; // rcx
  const char *v166; // rdi
  __int64 v167; // r8
  __m128i *v168; // r9
  size_t v169; // rax
  _QWORD *v170; // r15
  _BYTE *v171; // rax
  signed __int64 v172; // rdx
  void **v173; // rax
  __int64 **v174; // [rsp+0h] [rbp-268h] BYREF
  __m128i v175; // [rsp+8h] [rbp-260h] BYREF
  void *v176; // [rsp+18h] [rbp-250h]
  void **v177; // [rsp+20h] [rbp-248h]
  void ***v178; // [rsp+28h] [rbp-240h]
  _QWORD *v179; // [rsp+30h] [rbp-238h]
  const char **v180; // [rsp+38h] [rbp-230h]
  __m128i *v181; // [rsp+40h] [rbp-228h]
  __int64 *v182; // [rsp+48h] [rbp-220h]
  _BOOL8 v183; // [rsp+50h] [rbp-218h]
  bool v184; // [rsp+5Fh] [rbp-209h]
  void **v185; // [rsp+60h] [rbp-208h]
  char ***v186; // [rsp+68h] [rbp-200h]
  int v187; // [rsp+70h] [rbp-1F8h]
  unsigned int v188; // [rsp+74h] [rbp-1F4h]
  void **p_s1; // [rsp+78h] [rbp-1F0h]
  __int64 *v190; // [rsp+80h] [rbp-1E8h]
  int v191; // [rsp+88h] [rbp-1E0h]
  int v192; // [rsp+8Ch] [rbp-1DCh]
  size_t v193; // [rsp+90h] [rbp-1D8h]
  __m128i *v194; // [rsp+98h] [rbp-1D0h]
  __m128i *v195; // [rsp+A0h] [rbp-1C8h]
  __m128i *v196; // [rsp+A8h] [rbp-1C0h]
  char *v197; // [rsp+B0h] [rbp-1B8h]
  size_t v198; // [rsp+B8h] [rbp-1B0h]
  _QWORD *v199; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v200; // [rsp+C8h] [rbp-1A0h]
  unsigned int v201; // [rsp+D0h] [rbp-198h]
  __m128 v202; // [rsp+E0h] [rbp-188h] BYREF
  int v203; // [rsp+F0h] [rbp-178h]
  __m128i v204; // [rsp+100h] [rbp-168h] BYREF
  int v205; // [rsp+110h] [rbp-158h]
  __m128i v206; // [rsp+120h] [rbp-148h] BYREF
  __m128i v207; // [rsp+130h] [rbp-138h] BYREF
  void **s1; // [rsp+140h] [rbp-128h] BYREF
  void *s1_8[2]; // [rsp+148h] [rbp-120h] BYREF
  __m128i v210; // [rsp+158h] [rbp-110h] BYREF
  __m128i v211; // [rsp+168h] [rbp-100h]
  void **v212; // [rsp+180h] [rbp-E8h] BYREF
  void *v213[2]; // [rsp+188h] [rbp-E0h] BYREF
  __m128i v214; // [rsp+198h] [rbp-D0h]
  __m128i v215; // [rsp+1A8h] [rbp-C0h]
  void *base[2]; // [rsp+1C0h] [rbp-A8h] BYREF
  __int64 v217; // [rsp+1D0h] [rbp-98h] BYREF
  __m128i v218; // [rsp+1D8h] [rbp-90h] BYREF
  __m128i v219; // [rsp+1E8h] [rbp-80h] BYREF
  char v220; // [rsp+1F8h] [rbp-70h]
  __m128i v221; // [rsp+200h] [rbp-68h] BYREF
  __m128i v222; // [rsp+210h] [rbp-58h] BYREF
  __m128i v223; // [rsp+220h] [rbp-48h] BYREF

  v186 = a1;
  v174 = (__int64 **)a2;
  v188 = a4;
  v179 = a5;
  v192 = a6;
  v175.m128i_i8[8] = a6;
  if ( !a5 )
    v179 = *(_QWORD **)(a2 + 8);
  if ( sub_10BB400(a3, 0xC12u) && sub_10BAF60(a3, 0xC07u, 0xBC6u) )
  {
    sub_FA3370((__int64)base, **v174, 0, 52);
    sub_10B4AF0((unsigned __int8 **)base, (__int64)"--offload");
    v7 = "--offload-arch";
    if ( !sub_10BB400(a3, 0xC07u) )
      v7 = "--no-offload-arch";
    sub_10B4AF0((unsigned __int8 **)base, (__int64)v7);
    sub_AC6300((__int64)base);
  }
  v8 = (void ***)a3;
  v199 = nullptr;
  v9 = &v217;
  v200 = 0;
  v201 = 0;
  v10 = (void *)j__strlen(&byte_22CD811);
  v11 = v179;
  v12 = sub_10B20E0((size_t)v174, v179, (void *)&byte_22CD811, v10, v188);
  v13 = *(unsigned int *)(v12 + 16);
  v14 = *(_QWORD *)(v12 + 8);
  v203 = 0;
  v175.m128i_i64[0] = v14 + 8 * v13;
  v202 = _mm_loadh_ps((const double *)v175.m128i_i64);
  sub_10B4AC0(&v202, v175.m128i_i64[0]);
  v16 = *(_QWORD *)(v15 + 8);
  v17 = *(unsigned int *)(v15 + 16);
  v205 = 0;
  v175.m128i_i64[0] = v16 + 8 * v17;
  v18 = _mm_loadl_epi64(&v175);
  v204 = _mm_unpacklo_epi64(v18, v18);
  sub_10B4AC0(&v204, v175.m128i_i64[0]);
  v19 = (_QWORD *)v202.m128_u64[0];
  v175.m128i_i64[0] = (__int64)(v11 + 2);
  v185 = base;
  v181 = &v206;
  while ( 1 )
  {
    if ( (_QWORD *)v204.m128i_i64[0] == v19 )
    {
      v123 = v8;
      sub_10B74D0((__m128i *)base, v175.m128i_i64[0]);
      if ( (unsigned int)(v218.m128i_i32[2] - 25) > 1 )
      {
        if ( base[0] != &v217 )
          operator delete(base[0]);
      }
      else
      {
        LODWORD(v213[0]) = 0;
        v213[1] = nullptr;
        v214.m128i_i64[0] = (__int64)v213;
        v214.m128i_i64[1] = (__int64)v213;
        v215.m128i_i64[0] = 0;
        sub_10DBC70((__int64)&v199, &v212, v213);
        sub_1005F90((__int64)&s1, (__int64)&v212);
        v127 = (_QWORD **)v213[1];
        v128 = v210.m128i_i8[8];
        if ( v213[1] )
        {
          do
          {
            sub_9C9C90((__int64)&v212, v127[3]);
            v129 = (_QWORD **)v127[2];
            operator delete(v127);
            v127 = v129;
          }
          while ( v129 );
        }
        if ( base[0] != &v217 )
          operator delete(base[0]);
        if ( v128 )
        {
          sub_FA3370((__int64)base, **v174, 0, 325);
          sub_AC84E0((unsigned __int8 **)base, s1, (signed __int64)s1_8[0]);
          sub_AC84E0((unsigned __int8 **)base, (_BYTE *)s1_8[1], v210.m128i_i64[0]);
          sub_AC6300((__int64)base);
        }
      }
      if ( !(_BYTE)v192 || (_DWORD)v200 )
        goto LABEL_156;
      v130 = 9;
      if ( v188 != 2 )
      {
        if ( v188 != 8 )
        {
          if ( v188 == 16 )
          {
            v212 = nullptr;
            v213[0] = nullptr;
            sub_10D9660((__int64)base, (__int64)&v199, (__int64)&v212, v124, v125, v126);
            goto LABEL_156;
          }
          if ( v188 == 4 )
          {
            v131 = (void *)j__strlen(&byte_22CD811);
            v132 = sub_10B20E0((size_t)v174, v179, (void *)&byte_22CD811, v131, 4u);
            v133 = sub_10B8FF0(v132, 0x8D4u);
            if ( v133 )
            {
              v137 = **(char ***)(v133 + 48);
              v138 = nullptr;
              v212 = (void **)v137;
              if ( !v137 )
              {
LABEL_155:
                v213[0] = v138;
                sub_10D9660((__int64)base, (__int64)&v199, (__int64)&v212, v134, v135, v136);
                goto LABEL_156;
              }
LABEL_154:
              v138 = (void *)j__strlen(v137);
              goto LABEL_155;
            }
            (*(void (__fastcall **)(void ***, _QWORD *, void ***))(*v179 + 664LL))(&v212, v179, v123);
            if ( (v215.m128i_i8[8] & 1) != 0 )
            {
              v170 = v179;
              sub_FA3370((__int64)base, *(_QWORD *)v179[1], 0, 479);
              v171 = (_BYTE *)sub_2291AE0(*((unsigned int *)v170 + 12));
              sub_AC84E0((unsigned __int8 **)base, v171, v172);
              if ( (v215.m128i_i8[8] & 1) != 0 )
              {
                v173 = v212;
                v212 = nullptr;
                v206.m128i_i64[0] = (__int64)v173;
              }
              else
              {
                v206.m128i_i64[0] = 0;
              }
              sub_21FD4D0(&s1, &v206);
              sub_AC84E0((unsigned __int8 **)base, s1, (signed __int64)s1_8[0]);
              sub_10B4AF0((unsigned __int8 **)base, (__int64)"--offload-arch");
              if ( s1 != &s1_8[1] )
                operator delete(s1);
              if ( v206.m128i_i64[0] )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v206.m128i_i64[0] + 8LL))(v206.m128i_i64[0]);
              sub_AC6300((__int64)base);
            }
            else if ( LODWORD(v213[0]) )
            {
              v175.m128i_i64[1] = (__int64)&v206;
              v175.m128i_i64[0] = (__int64)&v199;
              v163 = &v212[4 * LODWORD(v213[0])];
              v164 = v212;
              v174 = (__int64 **)&v217;
              do
              {
                while ( 1 )
                {
                  base[0] = v174;
                  sub_10B4F90(base, *v164, (__int64)v164[1] + (_QWORD)*v164);
                  v166 = (const char *)sub_2192600(v123, base[0], base[1]);
                  v206.m128i_i64[0] = (__int64)v166;
                  v169 = 0;
                  if ( v166 )
                    v169 = j__strlen(v166);
                  v206.m128i_i64[1] = v169;
                  sub_10D9660((__int64)&s1, v175.m128i_i64[0], v175.m128i_i64[1], v165, v167, v168);
                  if ( base[0] == v174 )
                    break;
                  operator delete(base[0]);
                  v164 += 4;
                  if ( v163 == v164 )
                    goto LABEL_198;
                }
                v164 += 4;
              }
              while ( v163 != v164 );
            }
            else
            {
              s1 = nullptr;
              s1_8[0] = nullptr;
              sub_10D9660((__int64)base, (__int64)&v199, (__int64)&s1, v160, v161, v162);
            }
LABEL_198:
            sub_10BC120(&v212);
          }
LABEL_156:
          sub_2193FB0(v123, 3079);
          sub_2193FB0(v123, 3014);
          v139 = &v199[2 * v201];
          v140 = v139;
          v141 = v139;
          if ( (_DWORD)v200 )
          {
            v174 = (__int64 **)&v199[2 * v201];
            v175.m128i_i64[0] = (__int64)v174;
            *(__m128 *)base = _mm_loadh_ps((const double *)&v174);
            sub_10D2EF0((__int64)base);
            v141 = base[0];
            v139 = (_QWORD *)v175.m128i_i64[0];
            v140 = base[1];
          }
          base[0] = &v217;
          base[1] = (void *)0x300000000LL;
          sub_10BD640((__int64)base, v141, v140, v139);
          v142 = (int)base[1];
          v143 = 16LL * LODWORD(base[1]);
          if ( (unsigned __int64)v143 > 0x10 )
          {
            qsort(base[0], v143 >> 4, 0x10u, (__compar_fn_t)sub_E15630);
            v142 = (int)base[1];
          }
          v144 = v186;
          *v186 = (char **)(v186 + 2);
          v144[1] = (char **)0x300000000LL;
          if ( v142 )
            sub_10BCC70(v144, (char ***)base);
          if ( base[0] != &v217 )
            free(base[0]);
          goto LABEL_86;
        }
        v130 = 47;
      }
      v137 = sub_FD3E40(v130);
      v212 = (void **)v137;
      v138 = nullptr;
      if ( !v137 )
        goto LABEL_155;
      goto LABEL_154;
    }
    v20 = *v19;
    if ( (unsigned __int8)sub_2195AD0(*v19, 3079) )
      break;
    if ( (unsigned __int8)sub_2195AD0(v20, 3014) )
    {
      v78 = j__strlen(",");
      v79 = 0;
      v80 = v78;
      v81 = *(const char ***)(v20 + 48);
      v82 = *v81;
      if ( *v81 )
        v79 = j__strlen(*v81);
      v83 = (__int64)v82;
      v84 = v185;
      sub_10B6F00((__int64)v185, v83, v79, (__int64)",", v80);
      v85 = _mm_loadu_si128((const __m128i *)&base[1]);
      v86 = _mm_loadu_si128(&v218);
      v87 = _mm_loadu_si128(&v219);
      LOBYTE(s1) = base[0];
      *(__m128i *)s1_8 = v85;
      v210 = v86;
      v211 = v87;
      if ( (void **)v219.m128i_i64[0] == v84 )
      {
        v211.m128i_i64[1] = 1;
        v211.m128i_i64[0] = (__int64)&s1;
      }
      v88 = _mm_load_si128(&v221);
      v89 = _mm_load_si128(&v222);
      v90 = _mm_load_si128(&v223);
      LOBYTE(v212) = v220;
      *(__m128i *)v213 = v88;
      v214 = v89;
      v215 = v90;
      if ( (void **)v223.m128i_i64[0] == v185 + 7 )
      {
        v215.m128i_i64[1] = 1;
        v215.m128i_i64[0] = (__int64)&v212;
      }
      v91 = s1_8[0];
      v176 = v213[0];
      LODWORD(v180) = v175.m128i_u8[8];
      if ( v213[0] != s1_8[0] )
      {
        v182 = v9;
        v178 = v8;
        while ( 1 )
        {
          v92 = *(_OWORD *)s1_8;
          v93 = j__strlen("all");
          if ( (void *)v93 != s1_8[1] || v93 && memcmp(v91, "all", v93) )
            break;
          if ( (_DWORD)v200 )
          {
            v114 = 4 * v200;
            v94 = v199;
            if ( (unsigned int)(4 * v200) < 0x40 )
              v114 = 64;
            if ( v201 <= v114 )
            {
              v95 = 2LL * v201;
LABEL_109:
              for ( i = &v94[v95]; i != v94; *(v94 - 1) = 0 )
              {
                *v94 = -1;
                v94 += 2;
              }
              v200 = 0;
              goto LABEL_112;
            }
            if ( (_DWORD)v200 == 1 )
            {
              v150 = 2048;
              v151 = 128;
              goto LABEL_183;
            }
            _BitScanReverse(&v146, v200 - 1);
            v147 = 1 << (33 - (v146 ^ 0x1F));
            if ( v147 < 64 )
              v147 = 64;
            if ( v201 != v147 )
            {
              v158 = 4 * v147 / 3u;
              v159 = (((v158 + 1)
                     | ((unsigned __int64)(v158 + 1) >> 1)
                     | (((v158 + 1) | ((unsigned __int64)(v158 + 1) >> 1)) >> 2)) >> 4)
                   | (v158 + 1)
                   | ((unsigned __int64)(v158 + 1) >> 1)
                   | (((v158 + 1) | ((unsigned __int64)(v158 + 1) >> 1)) >> 2)
                   | (((((v158 + 1)
                       | ((unsigned __int64)(v158 + 1) >> 1)
                       | (((v158 + 1) | ((unsigned __int64)(v158 + 1) >> 1)) >> 2)) >> 4)
                     | (v158 + 1)
                     | ((unsigned __int64)(v158 + 1) >> 1)
                     | (((v158 + 1) | ((unsigned __int64)(v158 + 1) >> 1)) >> 2)) >> 8);
              v151 = (v159 | (v159 >> 16)) + 1;
              v150 = 16 * ((v159 | (v159 >> 16)) + 1);
LABEL_183:
              operator delete();
              v201 = v151;
              v156 = (_QWORD *)sub_220C370(v150, 8, v152, v153, v154, v155);
              v200 = 0;
              v199 = v156;
              for ( j = &v156[2 * v201]; j != v156; *(v156 - 1) = 0 )
              {
                *v156 = -1;
                v156 += 2;
              }
              goto LABEL_112;
            }
            v200 = 0;
            v148 = &v199[2 * v201];
            do
            {
              *v94 = -1;
              v94 += 2;
              *(v94 - 1) = 0;
            }
            while ( v148 != v94 );
          }
          else
          {
            if ( !HIDWORD(v200) )
              goto LABEL_112;
            v94 = v199;
            v95 = 2LL * v201;
            if ( v201 <= 0x40 )
              goto LABEL_109;
            operator delete();
            v199 = nullptr;
            v200 = 0;
            v201 = 0;
          }
LABEL_112:
          sub_103B480(v181, v210.m128i_i64, v211.m128i_i64[0], v211.m128i_i64[1]);
          v91 = (const void *)v206.m128i_i64[0];
          v97 = _mm_load_si128(&v207);
          *(__m128i *)s1_8 = _mm_load_si128(&v206);
          v210 = v97;
          if ( (void *)v206.m128i_i64[0] == v176 )
          {
            v8 = v178;
            v9 = v182;
            goto LABEL_12;
          }
        }
        v98 = sub_10B6110(
                v174,
                (__int64)v178,
                (char *)v92,
                *((unsigned __int64 *)&v92 + 1),
                v175.m128i_i64[0],
                (char)v180);
        v100 = v98;
        v101 = v99;
        if ( !v201 )
          goto LABEL_112;
        v102 = v201 - 1;
        v177 = (void **)v199;
        v103 = sub_2224B50(v98, v99);
        v104 = v100 + 2 == nullptr;
        v105 = v102 & v103;
        v106 = v100 + 1 == nullptr;
        if ( v101 )
        {
          v107 = 1;
          while ( 1 )
          {
            v108 = v106;
            v109 = (char **)&v177[2 * v105];
            v110 = *v109;
            if ( *v109 != (char *)-1LL )
            {
              if ( v110 == (char *)-2LL )
              {
                v108 = v104;
              }
              else
              {
                if ( (char *)v101 != v109[1] )
                  goto LABEL_120;
                p_s1 = &v177[2 * v105];
                v187 = v107;
                v184 = v104;
                LOBYTE(v183) = v106;
                v121 = memcmp(v100, v110, v101);
                v106 = v183;
                v104 = v184;
                v107 = v187;
                v109 = (char **)p_s1;
                v108 = v121 == 0;
              }
            }
            if ( v108 )
              goto LABEL_124;
LABEL_120:
            v111 = *v109;
            v112 = (size_t)v109[1];
            v187 = v107;
            v184 = v104;
            LOBYTE(v183) = v106;
            v113 = sub_E16190(v111, v112, (const void *)0xFFFFFFFFFFFFFFFFLL, 0);
            v106 = v183;
            v104 = v184;
            if ( v113 )
              goto LABEL_112;
            v107 = v187 + 1;
            v105 = v102 & (v187 + v105);
          }
        }
        v115 = 1;
        v116 = v106;
        while ( 2 )
        {
          v109 = (char **)&v177[2 * v105];
          if ( *v109 == (char *)-1LL )
          {
            v122 = v116;
          }
          else
          {
            if ( *v109 != (char *)-2LL )
            {
              if ( !v109[1] )
                goto LABEL_124;
LABEL_133:
              v117 = *v109;
              v118 = (size_t)v109[1];
              LOBYTE(v183) = v104;
              v119 = sub_E16190(v117, v118, (const void *)0xFFFFFFFFFFFFFFFFLL, 0);
              v104 = v183;
              if ( v119 )
                goto LABEL_112;
              v120 = v115 + v105;
              ++v115;
              v105 = v102 & v120;
              continue;
            }
            v122 = v104;
          }
          break;
        }
        if ( v122 )
        {
LABEL_124:
          *v109 = (char *)-2LL;
          v109[1] = nullptr;
          LODWORD(v200) = v200 - 1;
          ++HIDWORD(v200);
          goto LABEL_112;
        }
        goto LABEL_133;
      }
    }
LABEL_12:
    v21 = v202;
    v19 = (_QWORD *)(v202.m128_u64[0] + 8);
    v202.m128_u64[0] = (unsigned __int64)v19;
    if ( v19 != (_QWORD *)v202.m128_u64[1] && !*(_QWORD *)(v21.m128_u64[0] + 8) )
    {
      do
        ++v19;
      while ( (_QWORD *)v21.m128_u64[1] != v19 && !*v19 );
      v202.m128_u64[0] = (unsigned __int64)v19;
    }
  }
  v22 = *(const char ***)(v20 + 48);
  v23 = &v22[*(unsigned int *)(v20 + 56)];
  v178 = &v212;
  v180 = v23;
  v190 = (__int64 *)&v199;
  if ( v22 == v23 )
    goto LABEL_12;
  v24 = v8;
  v25 = (unsigned __int8 **)v185;
  v26 = v22;
  v27 = (__int64)v24;
  while ( 1 )
  {
    while ( 1 )
    {
      v34 = (char *)*v26;
      if ( !*v26 )
        break;
      v28 = j__strlen(*v26);
      if ( v28 == 6 )
      {
        if ( *(_DWORD *)v34 == 1769234798 && *((_WORD *)v34 + 2) == 25974 )
          break;
      }
      else if ( !v28 )
      {
        break;
      }
      v29 = (void **)sub_10B6110(v174, v27, v34, v28, v175.m128i_i64[0], v175.m128i_i8[8]);
      v213[0] = v33;
      v212 = v29;
      if ( v33 )
      {
        sub_10D9390((__int64)v25, (__int64)v190, (__int64)v178, v30, v31, v32);
      }
      else if ( v175.m128i_i8[8] )
      {
        v145 = v186;
        *v186 = (char **)(v186 + 2);
        v145[1] = (char **)0x300000000LL;
        goto LABEL_86;
      }
      if ( v180 == ++v26 )
        goto LABEL_30;
    }
    (*(void (__fastcall **)(void ***, _QWORD *, __int64))(*v179 + 664LL))(v178, v179, v27);
    if ( (v215.m128i_i8[8] & 1) != 0 )
    {
      if ( v175.m128i_i8[8] )
      {
        v70 = v179;
        sub_FA3370((__int64)v25, *(_QWORD *)v179[1], 0, 479);
        v71 = (_BYTE *)sub_2291AE0(*((unsigned int *)v70 + 12));
        sub_AC84E0(v25, v71, v72);
        if ( (v215.m128i_i8[8] & 1) != 0 )
        {
          v73 = v212;
          v212 = nullptr;
          v206.m128i_i64[0] = (__int64)v73;
        }
        else
        {
          v206.m128i_i64[0] = 0;
        }
        sub_21FD4D0(&s1, v181);
        sub_AC84E0(v25, s1, (signed __int64)s1_8[0]);
        sub_10B4AF0(v25, (__int64)"--offload-arch");
        if ( s1 != &s1_8[1] )
          operator delete(s1);
        if ( v206.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v206.m128i_i64[0] + 8LL))(v206.m128i_i64[0]);
        sub_AC6300((__int64)v25);
      }
      else
      {
        v35 = v212;
        v212 = nullptr;
        s1 = v35;
        sub_9E1A20(v25, &s1);
        if ( s1 )
          (*((void (__fastcall **)(void **))*s1 + 1))(s1);
      }
      goto LABEL_29;
    }
    v177 = &v212[4 * LODWORD(v213[0])];
    if ( v212 == v177 )
      goto LABEL_29;
    v36 = v212;
    LODWORD(v176) = v175.m128i_u8[8];
    p_s1 = (void **)&s1;
LABEL_33:
    base[0] = v9;
    sub_10B4F90(v25, *v36, (__int64)v36[1] + (_QWORD)*v36);
    v37 = (const char *)(*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)v27 + 16LL))(
                          v27,
                          base[0],
                          base[1]);
    v38 = 0;
    v39 = (char *)v37;
    if ( v37 )
      v38 = strlen(v37);
    v40 = sub_10B6110(v174, v27, v39, v38, v175.m128i_i64[0], (char)v176);
    s1 = (void **)v40;
    s1_8[0] = (void *)v41;
    if ( !v41 )
      break;
    v45 = v201;
    if ( !v201 )
    {
      v206.m128i_i64[0] = 0;
      goto LABEL_69;
    }
    v46 = v201 - 1;
    v183 = (_BOOL8)v199;
    v47 = sub_2224B50(v40, v41);
    v48 = (__m128i *)s1;
    v49 = (size_t)s1_8[0];
    v191 = 1;
    LODWORD(v182) = v46 & v47;
    LOBYTE(v187) = (void **)((char *)s1 + 2) == nullptr;
    v184 = (void **)((char *)s1 + 1) == nullptr;
    v50 = nullptr;
    if ( s1_8[0] )
    {
      v51 = v46;
      while ( 1 )
      {
        v52 = v184;
        v53 = v183 + 16LL * (unsigned int)v182;
        v54 = *(char **)v53;
        if ( *(_QWORD *)v53 == -1 )
          goto LABEL_78;
        if ( v54 == (char *)-2LL )
          break;
        if ( v49 == *(_QWORD *)(v53 + 8) )
        {
          v196 = v50;
          LODWORD(v195) = v51;
          v194 = (__m128i *)v49;
          v193 = (size_t)v48;
          v77 = memcmp(v48, v54, v49);
          v48 = (__m128i *)v193;
          v49 = (size_t)v194;
          v51 = (int)v195;
          v50 = v196;
          if ( !v77 )
            goto LABEL_37;
        }
LABEL_48:
        v55 = *(_QWORD *)(v53 + 8);
        v56 = *(char **)v53;
        v195 = v50;
        v196 = (__m128i *)v49;
        v194 = v48;
        LODWORD(v193) = v51;
        v197 = v56;
        v198 = v55;
        v57 = sub_E16190(v56, v55, (const void *)0xFFFFFFFFFFFFFFFFLL, 0);
        v44 = v195;
        if ( v57 )
        {
          v43 = v53;
          goto LABEL_50;
        }
        v149 = sub_E16190(v197, v198, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
        v51 = v193;
        v48 = v194;
        v49 = (size_t)v196;
        if ( v195 || !v149 )
          v53 = (__int64)v195;
        v50 = (__m128i *)v53;
        LODWORD(v182) = v193 & (v191 + (_DWORD)v182);
        ++v191;
      }
      v52 = v187;
LABEL_78:
      if ( v52 )
        goto LABEL_37;
      goto LABEL_48;
    }
    while ( 1 )
    {
      v68 = (char **)(v183 + 16LL * (unsigned int)v182);
      if ( *v68 == (char *)-1LL )
      {
        v69 = v184;
      }
      else
      {
        if ( *v68 != (char *)-2LL )
        {
          if ( !v68[1] )
            goto LABEL_37;
          goto LABEL_60;
        }
        v69 = v187;
      }
      if ( v69 )
        goto LABEL_37;
LABEL_60:
      v62 = *v68;
      v63 = (size_t)v68[1];
      v196 = v50;
      v195 = (__m128i *)(v183 + 16LL * (unsigned int)v182);
      v194 = (__m128i *)v62;
      v193 = v63;
      v64 = sub_E16190(v62, v63, (const void *)0xFFFFFFFFFFFFFFFFLL, 0);
      v43 = (__int64)v195;
      v44 = v196;
      if ( v64 )
        break;
      v65 = (char *)v194;
      v66 = v193;
      v193 = (size_t)v196;
      v194 = v195;
      v67 = sub_E16190(v65, v66, (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      v50 = (__m128i *)v193;
      if ( !v193 && v67 )
        v50 = v194;
      LODWORD(v182) = v46 & (v191 + (_DWORD)v182);
      ++v191;
    }
LABEL_50:
    v45 = v201;
    if ( !v44 )
    {
      v45 = v201;
      v44 = (__m128i *)v43;
    }
    v41 = 3 * v45;
    v206.m128i_i64[0] = (__int64)v44;
    v58 = v200 + 1;
    v42 = (unsigned int)(4 * (v200 + 1));
    if ( (unsigned int)v42 < (unsigned int)v41 )
    {
      v42 = v45 - (v58 + HIDWORD(v200));
      v41 = v45 >> 3;
      if ( (unsigned int)v42 <= (unsigned int)v41 )
      {
        v59 = v45;
        goto LABEL_55;
      }
      goto LABEL_56;
    }
LABEL_69:
    v59 = 2 * v45;
LABEL_55:
    v60 = v190;
    sub_10D8F50((__int64)v190, v59, v41, v42, v43, (__int64)v44);
    sub_10C5570(v60, p_s1, v181);
    v44 = (__m128i *)v206.m128i_i64[0];
    v58 = v200 + 1;
LABEL_56:
    v61 = v44->m128i_i64[0] == -1;
    LODWORD(v200) = v58;
    if ( !v61 )
      --HIDWORD(v200);
    *v44 = _mm_load_si128((const __m128i *)&s1);
LABEL_37:
    if ( base[0] != v9 )
    {
      operator delete(base[0]);
      v36 += 4;
      if ( v177 == v36 )
        goto LABEL_29;
      goto LABEL_33;
    }
    v36 += 4;
    if ( v177 != v36 )
      goto LABEL_33;
LABEL_29:
    ++v26;
    sub_10BC120(v178);
    if ( v180 == v26 )
    {
LABEL_30:
      v8 = (void ***)v27;
      goto LABEL_12;
    }
  }
  if ( !v175.m128i_i8[8] )
    goto LABEL_37;
  v74 = v186;
  v75 = (void **)base[0];
  *v186 = (char **)(v186 + 2);
  v74[1] = (char **)0x300000000LL;
  if ( v75 != v185 + 2 )
    operator delete(v75);
  sub_10BC120(v178);
LABEL_86:
  operator delete();
  return v186;
}

