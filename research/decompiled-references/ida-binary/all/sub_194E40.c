unsigned __int64 __fastcall sub_194E40(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  char *p_src; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // r8
  const __m128i *v15; // r15
  char *v16; // r12
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbp
  const char *v19; // r13
  const char *v20; // rdi
  char *v21; // rbp
  __int64 v22; // r13
  __int64 v23; // r12
  char *v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  __m128i v31; // xmm0
  unsigned __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rbp
  _QWORD *v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  const char *v42; // r13
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 *v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbp
  unsigned __int64 v51; // r12
  const void *v52; // r15
  const char *v53; // rsi
  const char *v54; // rsi
  __int64 v55; // r12
  const char *v56; // rsi
  const char *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  const char *v61; // rdx
  void *v62; // rdi
  const char *v63; // rsi
  const char *v64; // rdi
  std::__detail::_Prime_rehash_policy *v65; // r8
  const char **v66; // rbp
  __int64 v67; // r15
  const char *v68; // rdi
  __int64 module_data; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 *v73; // rdi
  __m256i *v74; // rbx
  __int64 v75; // r14
  __int64 v76; // rax
  const char *v77; // r15
  _QWORD *v78; // r10
  __int64 v79; // r12
  _QWORD *v80; // rax
  _QWORD *v81; // rsi
  __int64 v82; // rbx
  void **v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  char *v87; // rdi
  __int64 v88; // r15
  __int64 v89; // r12
  char *v90; // r13
  __int64 v91; // rdi
  __int64 v92; // rdi
  __int64 v93; // rdi
  __int64 v94; // rdi
  __int64 v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 *v99; // rbp
  unsigned __int64 v100; // r14
  _QWORD *v101; // rax
  _QWORD *v102; // rbx
  void *v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rdx
  __int64 v106; // r8
  void **v107; // rcx
  _QWORD *v108; // rbx
  _QWORD *v109; // rbp
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // r8
  void **v114; // rcx
  unsigned __int64 v115; // rdi
  __int64 v116; // r12
  __int64 v117; // rbp
  _QWORD *v118; // rbx
  __int64 v119; // rdi
  __int64 v120; // rdi
  __int64 v121; // rdi
  __int64 v122; // rdi
  __int64 v123; // rdi
  __int64 v124; // rdi
  _QWORD *v126; // rax
  __int64 *v127; // rax
  std::__detail::_Prime_rehash_policy *v128; // rdi
  __int64 *v129; // rbp
  __int64 v130; // rsi
  unsigned __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  void **v134; // r13
  __int64 v135; // r12
  void ***v136; // rax
  __int64 *v137; // rdx
  unsigned __int64 v138; // r9
  size_t v139; // r12
  void **v140; // rsi
  void **v141; // r10
  unsigned __int64 v142; // rdi
  void **v143; // rcx
  unsigned __int64 v144; // rdx
  void ***v145; // rax
  __int64 v146; // rdx
  const char *v147; // rdi
  __int64 *v148; // r15
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __m128i v152; // xmm0
  void **v153; // rbp
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __m128i v157; // xmm0
  bool v158; // zf
  const char *v159; // rdx
  void *v160; // rdi
  _QWORD *v161; // r9
  _QWORD *v162; // rax
  _QWORD *v163; // rcx
  __int64 v164; // r12
  __int64 v165; // rax
  __int64 v166; // r15
  __int64 v167; // r13
  __int64 *v168; // rbx
  __int64 v169; // rbx
  size_t v170; // r12
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // rdi
  size_t v175; // r13
  size_t v176; // r13
  void *v177; // rdi
  void *v178; // rax
  __m128i si128; // xmm0
  __m128i v180; // xmm0
  size_t v181; // r13
  size_t v182; // r13
  __int64 v183; // rax
  __m128i v184; // xmm0
  __int64 v185; // rax
  __m256i *v186; // r13
  size_t v187; // r14
  size_t v188; // r14
  __m128i v189; // xmm0
  __int64 v190; // rax
  void **v191; // r13
  size_t v192; // r14
  size_t v193; // r14
  __m128i v194; // xmm0
  __int64 v195; // rax
  void *v196; // rax
  void *v197; // rax
  void *v198; // rax
  void *v199; // rax
  std::__detail::_Prime_rehash_policy *v201[2]; // [rsp+8h] [rbp-228h] BYREF
  __int64 *v202; // [rsp+18h] [rbp-218h]
  const __m128i *v203; // [rsp+20h] [rbp-210h]
  void **p_dest; // [rsp+28h] [rbp-208h]
  void **v205; // [rsp+30h] [rbp-200h]
  __m256i *p_s1; // [rsp+38h] [rbp-1F8h]
  void **v207; // [rsp+40h] [rbp-1F0h]
  __int64 v208; // [rsp+48h] [rbp-1E8h] BYREF
  __int64 v209; // [rsp+50h] [rbp-1E0h] BYREF
  __int64 v210; // [rsp+58h] [rbp-1D8h] BYREF
  int v211; // [rsp+60h] [rbp-1D0h]
  unsigned __int64 v212; // [rsp+68h] [rbp-1C8h]
  __m128i v213; // [rsp+70h] [rbp-1C0h] BYREF
  unsigned __int64 v214; // [rsp+88h] [rbp-1A8h] BYREF
  __m128i v215; // [rsp+90h] [rbp-1A0h] BYREF
  void *src; // [rsp+A8h] [rbp-188h] BYREF
  size_t n[3]; // [rsp+B0h] [rbp-180h]
  void *dest; // [rsp+C8h] [rbp-168h] BYREF
  __m128i v219; // [rsp+D0h] [rbp-160h]
  void *s[2]; // [rsp+E8h] [rbp-148h] BYREF
  void *v221[2]; // [rsp+F8h] [rbp-138h] BYREF
  __int64 v222; // [rsp+108h] [rbp-128h]
  __int64 v223; // [rsp+110h] [rbp-120h]
  void *v224; // [rsp+118h] [rbp-118h] BYREF
  size_t v225[2]; // [rsp+120h] [rbp-110h]
  void *v226; // [rsp+130h] [rbp-100h]
  size_t v227[2]; // [rsp+138h] [rbp-F8h]
  void *v228; // [rsp+148h] [rbp-E8h]
  __m128i v229; // [rsp+150h] [rbp-E0h] BYREF
  int v230; // [rsp+160h] [rbp-D0h]
  __m256i s1; // [rsp+168h] [rbp-C8h] BYREF
  int v232; // [rsp+188h] [rbp-A8h] BYREF
  __int64 v233; // [rsp+190h] [rbp-A0h]
  void *v234; // [rsp+198h] [rbp-98h] BYREF
  size_t v235[2]; // [rsp+1A0h] [rbp-90h]
  void *v236; // [rsp+1B0h] [rbp-80h]
  size_t v237[2]; // [rsp+1B8h] [rbp-78h]
  __int64 v238; // [rsp+1C8h] [rbp-68h]
  __m128i v239; // [rsp+1D0h] [rbp-60h] BYREF
  __int32 v240; // [rsp+1E0h] [rbp-50h]
  unsigned __int64 v241; // [rsp+1F0h] [rbp-40h]

  v202 = a1;
  v241 = __readfsqword(0x28u);
  v213 = 0;
  v212 = 0;
  v214 = 0;
  v215 = 0;
  netnode_check(&v208, "$ curlocs", 0, 0);
  v2 = 65;
  v5 = netnode_supfirst(v208, 65);
  for ( v201[0] = (std::__detail::_Prime_rehash_policy *)&v209; v5 != -1; v5 = netnode_supnext(v208, v5, 65) )
  {
    v209 = v5;
    if ( (unsigned __int8)netnode_exist(v201[0]) )
    {
      p_src = (char *)&src;
      src = nullptr;
      *(_OWORD *)n = 0;
      netnode_get_name(v209, &src);
      v11 = src;
      if ( n[0] > 2 && *(_BYTE *)src == 36 && *((_BYTE *)src + 1) == 32 )
      {
        v211 = 0;
        v205 = (void **)&v210;
        v210 = -1;
        navstack_t_register_live(&v210);
        dest = nullptr;
        v219 = 0;
        v210 = v209;
        p_src = (char *)&dest;
        p_dest = &dest;
        navstack_t_get_all_current(&v210, &dest);
        v14 = dest;
        v203 = (const __m128i *)((char *)dest + 96 * v219.m128i_i64[0]);
        if ( dest != v203 )
        {
          v15 = (const __m128i *)dest;
          v16 = (char *)&::s1;
          do
          {
            if ( v15[3].m128i_i64[1] > 1uLL )
            {
              v17 = v214;
              v12 = v215.m128i_i64[0] << 7;
              v18 = v214 + (v215.m128i_i64[0] << 7);
              if ( v214 == v18 )
                goto LABEL_245;
              v19 = (const char *)v15[3].m128i_i64[0];
              while ( 1 )
              {
                v20 = &::s1;
                if ( *(_QWORD *)(v17 + 56) )
                  v20 = *(const char **)(v17 + 48);
                p_src = (char *)v19;
                if ( !strcmp(v20, v19) )
                  break;
                v17 += 128LL;
                if ( v18 == v17 )
                  goto LABEL_245;
              }
              if ( !v17 )
              {
LABEL_245:
                v221[0] = nullptr;
                v221[1] = (void *)-1LL;
                v153 = s;
                v222 = 0;
                v223 = 0;
                *(_OWORD *)s = 0;
                if ( v15 != (const __m128i *)s )
                {
                  *(__m128i *)s = _mm_loadu_si128(v15);
                  *(__m128i *)v221 = _mm_loadu_si128(v15 + 1);
                  LODWORD(v222) = v15[2].m128i_i32[0];
                  v174 = v15[2].m128i_i64[1];
                  if ( v174 )
                    v223 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v174 + 16LL))(v174);
                }
                v224 = nullptr;
                *(_OWORD *)v225 = 0;
                v175 = v15[3].m128i_u64[1];
                if ( v175 )
                {
                  v224 = (void *)qalloc_or_throw(v15[3].m128i_i64[1]);
                  v225[1] = v175;
                  p_src = (char *)v15[3].m128i_i64[0];
                  memcpy(v224, p_src, v175);
                  v225[0] = v175;
                }
                v226 = nullptr;
                *(_OWORD *)v227 = 0;
                v176 = v15[5].m128i_u64[0];
                if ( v176 )
                {
                  v226 = (void *)qalloc_or_throw(v15[5].m128i_i64[0]);
                  v227[1] = v176;
                  p_src = (char *)v15[4].m128i_i64[1];
                  memcpy(v226, p_src, v176);
                  v227[0] = v176;
                }
                v42 = (const char *)n[0];
                v152 = 0;
                v228 = nullptr;
                v229 = 0;
                if ( !n[0] )
                {
                  v230 = 0;
LABEL_254:
                  if ( under_debugger )
                    BUG();
                  interr(41583, p_src, v12, v13, 0.0);
LABEL_256:
                  dest = v16;
                  v219 = v152;
LABEL_218:
                  v158 = *(_QWORD *)(v5 + 8) == 0;
                  *(_DWORD *)(v5 + 72) = 3;
                  v159 = v42;
                  if ( !v158 )
                    v159 = *(const char **)v5;
                  v53 = v42;
                  if ( *(_QWORD *)(v5 + 56) )
                    v53 = *(const char **)(v5 + 48);
                  v160 = (void *)v42;
                  if ( v153 )
                    v160 = dest;
                  navstack_t_perform_move(v160, v53, v159, 1);
                  goto LABEL_78;
                }
                v178 = (void *)qalloc_or_throw(n[0]);
                p_src = (char *)src;
                v228 = v178;
                v229.m128i_i64[1] = (__int64)v42;
                memcpy(v178, src, (size_t)v42);
                v229.m128i_i64[0] = (__int64)v42;
                v230 = 0;
                if ( n[0] <= 2 || *(_BYTE *)src != 36 || *((_BYTE *)src + 1) != 32 )
                  goto LABEL_254;
                p_src = (char *)v214;
                v12 = v215.m128i_i64[1];
                if ( (unsigned __int64)s < v214 || (unsigned __int64)s >= v214 + (v215.m128i_i64[1] << 7) )
                {
                  v190 = v215.m128i_i64[0];
                  if ( v215.m128i_i64[1] < (unsigned __int64)(v215.m128i_i64[0] + 1) )
                  {
                    v214 = qvector_reserve(&v214, v214, v215.m128i_i64[0] + 1, 128);
                    p_src = (char *)v214;
                    v190 = v215.m128i_i64[0];
                  }
                  v191 = (void **)&p_src[128 * v190];
                  v191[2] = nullptr;
                  v191[3] = (void *)-1LL;
                  v191[4] = nullptr;
                  v191[5] = nullptr;
                  *(_OWORD *)v191 = 0;
                  if ( v191 != s )
                  {
                    *(__m128i *)v191 = _mm_load_si128((const __m128i *)s);
                    *((__m128i *)v191 + 1) = _mm_load_si128((const __m128i *)v221);
                    *((_DWORD *)v191 + 8) = v222;
                    if ( v223 )
                      v191[5] = (void *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v223 + 16LL))(
                                          v223,
                                          p_src,
                                          v12);
                  }
                  v191[6] = nullptr;
                  *(_OWORD *)(v191 + 7) = 0;
                  v192 = v225[0];
                  if ( v225[0] )
                  {
                    v197 = (void *)qalloc_or_throw(v225[0]);
                    v191[6] = v197;
                    v191[8] = (void *)v192;
                    p_src = (char *)v224;
                    memcpy(v197, v224, v192);
                    v191[7] = (void *)v192;
                  }
                  v191[9] = nullptr;
                  *((_OWORD *)v191 + 5) = 0;
                  v193 = v227[0];
                  if ( v227[0] )
                  {
                    v196 = (void *)qalloc_or_throw(v227[0]);
                    v191[9] = v196;
                    v191[11] = (void *)v193;
                    p_src = (char *)v226;
                    memcpy(v196, v226, v193);
                    v191[10] = (void *)v193;
                  }
                  v194 = _mm_loadu_si128(&v229);
                  v191[12] = v228;
                  *(__m128i *)(v191 + 13) = v194;
                  *((_DWORD *)v191 + 30) = v230;
                  ++v215.m128i_i64[0];
                }
                else
                {
                  si128 = _mm_load_si128((const __m128i *)s);
                  v233 = 0;
                  *(__m128i *)s1.m256i_i8 = si128;
                  v180 = _mm_load_si128((const __m128i *)v221);
                  v232 = v222;
                  *(__m128i *)&s1.m256i_u64[2] = v180;
                  if ( v223 )
                    v233 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v223 + 16LL))(
                             v223,
                             v214,
                             v215.m128i_i64[1]);
                  v181 = v225[0];
                  v234 = nullptr;
                  *(_OWORD *)v235 = 0;
                  if ( v225[0] )
                  {
                    v234 = (void *)qalloc_or_throw(v225[0]);
                    v235[1] = v181;
                    memcpy(v234, v224, v181);
                    v235[0] = v181;
                  }
                  v182 = v227[0];
                  v236 = nullptr;
                  *(_OWORD *)v237 = 0;
                  if ( v227[0] )
                  {
                    v236 = (void *)qalloc_or_throw(v227[0]);
                    v237[1] = v182;
                    memcpy(v236, v226, v182);
                    v237[0] = v182;
                  }
                  v183 = (__int64)v228;
                  p_src = (char *)v214;
                  v228 = nullptr;
                  v184 = _mm_loadu_si128(&v229);
                  v238 = v183;
                  v239 = v184;
                  v240 = v230;
                  v185 = v215.m128i_i64[0];
                  v229 = 0;
                  v12 = v215.m128i_i64[0] + 1;
                  if ( v215.m128i_i64[1] < (unsigned __int64)(v215.m128i_i64[0] + 1) )
                  {
                    p_s1 = &s1;
                    v214 = qvector_reserve(&v214, v214, v12, 128);
                    p_src = (char *)v214;
                    v185 = v215.m128i_i64[0];
                  }
                  v186 = (__m256i *)&p_src[128 * v185];
                  v186->m256i_i64[2] = 0;
                  v186->m256i_i64[3] = -1;
                  v186[1].m256i_i64[0] = 0;
                  v186[1].m256i_i64[1] = 0;
                  p_s1 = &s1;
                  *(_OWORD *)v186->m256i_i8 = 0;
                  if ( v186 != &s1 )
                  {
                    *(__m128i *)v186->m256i_i8 = _mm_load_si128((const __m128i *)&s1);
                    *(__m128i *)&v186->m256i_u64[2] = _mm_load_si128((const __m128i *)&s1.m256i_u64[2]);
                    v186[1].m256i_i32[0] = v232;
                    if ( v233 )
                      v186[1].m256i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v233 + 16LL))(v233);
                  }
                  v186[1].m256i_i64[2] = 0;
                  *(_OWORD *)&v186[1].m256i_u64[3] = 0;
                  v187 = v235[0];
                  if ( v235[0] )
                  {
                    v199 = (void *)qalloc_or_throw(v235[0]);
                    v186[1].m256i_i64[2] = (__int64)v199;
                    v186[2].m256i_i64[0] = v187;
                    p_src = (char *)v234;
                    memcpy(v199, v234, v187);
                    v186[1].m256i_i64[3] = v187;
                  }
                  v186[2].m256i_i64[1] = 0;
                  *(_OWORD *)&v186[2].m256i_u64[2] = 0;
                  v188 = v237[0];
                  if ( v237[0] )
                  {
                    v198 = (void *)qalloc_or_throw(v237[0]);
                    v186[2].m256i_i64[1] = (__int64)v198;
                    v186[2].m256i_i64[3] = v188;
                    p_src = (char *)v236;
                    memcpy(v198, v236, v188);
                    v186[2].m256i_i64[2] = v188;
                  }
                  v189 = _mm_loadu_si128(&v239);
                  v186[3].m256i_i64[0] = v238;
                  *(__m128i *)&v186[3].m256i_u64[1] = v189;
                  v186[3].m256i_i32[6] = v240;
                  if ( v233 )
                  {
                    qfree(v233, p_src, v12, v13, v14);
                    v233 = 0;
                  }
                  if ( v234 )
                  {
                    v235[0] = 0;
                    qfree(v234, p_src, v12, v13, v14);
                    v234 = nullptr;
                    v235[1] = 0;
                  }
                  if ( v236 )
                  {
                    v237[0] = 0;
                    qfree(v236, p_src, v12, v13, v14);
                  }
                  if ( v234 )
                  {
                    v235[0] = 0;
                    qfree(v234, p_src, v12, v13, v14);
                  }
                  if ( v233 )
                    qfree(v233, p_src, v12, v13, v14);
                  ++v215.m128i_i64[0];
                  if ( v228 )
                  {
                    v229.m128i_i64[0] = 0;
                    qfree(v228, p_src, v12, v13, v14);
                  }
                }
                if ( v223 )
                {
                  qfree(v223, p_src, v12, v13, v14);
                  v223 = 0;
                }
                if ( v224 )
                {
                  v225[0] = 0;
                  qfree(v224, p_src, v12, v13, v14);
                  v224 = nullptr;
                  v225[1] = 0;
                }
                if ( v226 )
                {
                  v227[0] = 0;
                  qfree(v226, p_src, v12, v13, v14);
                }
                if ( v224 )
                {
                  v225[0] = 0;
                  qfree(v224, p_src, v12, v13, v14);
                }
                if ( v223 )
                  qfree(v223, p_src, v12, v13, v14);
              }
            }
            v15 += 6;
          }
          while ( v203 != v15 );
          v203 = (const __m128i *)dest;
        }
        v21 = (char *)v203;
        if ( v203 )
        {
          v22 = v219.m128i_i64[0];
          if ( v219.m128i_i64[0] )
          {
            v23 = 0;
            do
            {
              v24 = &v21[96 * v23];
              v25 = *((_QWORD *)v24 + 5);
              if ( v25 )
              {
                qfree(v25, p_src, v12, v13, v14);
                *((_QWORD *)v24 + 5) = 0;
              }
              v26 = *((_QWORD *)v24 + 6);
              if ( v26 )
              {
                *((_QWORD *)v24 + 7) = 0;
                qfree(v26, p_src, v12, v13, v14);
                *((_QWORD *)v24 + 6) = 0;
                *((_QWORD *)v24 + 8) = 0;
              }
              v27 = *((_QWORD *)v24 + 9);
              if ( v27 )
              {
                *((_QWORD *)v24 + 10) = 0;
                qfree(v27, p_src, v12, v13, v14);
              }
              v28 = *((_QWORD *)v24 + 6);
              if ( v28 )
              {
                *((_QWORD *)v24 + 7) = 0;
                qfree(v28, p_src, v12, v13, v14);
              }
              v29 = *((_QWORD *)v24 + 5);
              if ( v29 )
                qfree(v29, p_src, v12, v13, v14);
              ++v23;
              v21 = (char *)dest;
            }
            while ( v22 != v23 );
            v203 = (const __m128i *)dest;
          }
          v219.m128i_i64[0] = 0;
          qfree(v203, p_src, v12, v13, v14);
        }
        navstack_t_deregister_live(v205);
        v11 = src;
      }
      if ( v11 )
      {
        n[0] = 0;
        qfree(v11, p_src, v8, v9, v10);
      }
    }
    v2 = v5;
  }
  v30 = v212;
  v31 = _mm_loadu_si128(&v213);
  v32 = v214;
  v213 = _mm_loadu_si128(&v215);
  v33 = v213.m128i_i64[0];
  v212 = v214;
  v214 = v30;
  v215 = v31;
  if ( v30 )
  {
    if ( v31.m128i_i64[0] )
    {
      v34 = 0;
      do
      {
        v35 = (_QWORD *)(v30 + (v34 << 7));
        v36 = v35[12];
        if ( v36 )
        {
          v35[13] = 0;
          qfree(v36, v2, v3, v4, v6);
        }
        v37 = v35[5];
        if ( v37 )
        {
          qfree(v37, v2, v3, v4, v6);
          v35[5] = 0;
        }
        v38 = v35[6];
        if ( v38 )
        {
          v35[7] = 0;
          qfree(v38, v2, v3, v4, v6);
          v35[6] = 0;
          v35[8] = 0;
        }
        v39 = v35[9];
        if ( v39 )
        {
          v35[10] = 0;
          qfree(v39, v2, v3, v4, v6);
        }
        v40 = v35[6];
        if ( v40 )
        {
          v35[7] = 0;
          qfree(v40, v2, v3, v4, v6);
        }
        v41 = v35[5];
        if ( v41 )
          qfree(v41, v2, v3, v4, v6);
        ++v34;
        v30 = v214;
      }
      while ( v31.m128i_i64[0] != v34 );
    }
    v215.m128i_i64[0] = 0;
    qfree(v30, v2, v3, v4, v6);
    v33 = v213.m128i_i64[0];
    v32 = v212;
  }
  v5 = v32 + 48;
  s[1] = &dword_0 + 1;
  v17 = v32 + (v33 << 7);
  v207 = &v224;
  v42 = &::s1;
  s[0] = &v224;
  v221[0] = nullptr;
  v221[1] = nullptr;
  LODWORD(v222) = 1065353216;
  v223 = 0;
  v224 = nullptr;
  if ( v17 == v32 )
    goto LABEL_107;
  while ( 2 )
  {
    dest = nullptr;
    v219 = 0;
    v43 = a2[1];
    if ( (int)v43 <= 0 )
      goto LABEL_82;
    v44 = 0;
    v45 = 16 * (3LL * (unsigned int)(v43 - 1) + 3);
    while ( 1 )
    {
      v46 = (__int64 *)(v44 + *a2);
      if ( (unsigned __int8)sub_194240(v46, v5) )
        break;
      v44 += 48;
      if ( v45 == v44 )
        goto LABEL_82;
    }
    if ( !v46 )
    {
LABEL_82:
      v63 = v42;
      if ( *(_QWORD *)(v5 + 56) )
        v63 = *(const char **)(v5 + 48);
      v53 = v63 + 2;
      v64 = v42;
      if ( *(_QWORD *)(v5 + 8) )
        v64 = *(const char **)v5;
      if ( strcmp(v64, v53) )
      {
        sub_191EF0((__int64)&s1, v5);
        v152 = _mm_loadu_si128((const __m128i *)&s1.m256i_u64[1]);
        v16 = (char *)s1.m256i_i64[0];
        memset(&s1, 0, 24);
        v153 = (void **)v152.m128i_i64[0];
        if ( !dest )
          goto LABEL_256;
        *(__m128i *)v201 = v152;
        v219.m128i_i64[0] = 0;
        qfree(dest, v5, v149, v150, v151);
        v157 = _mm_load_si128((const __m128i *)v201);
        dest = v16;
        v219 = v157;
        if ( s1.m256i_i64[0] )
        {
          s1.m256i_i64[1] = 0;
          qfree(s1.m256i_i64[0], v5, v154, v155, v156);
          v153 = (void **)v219.m128i_i64[0];
        }
        goto LABEL_218;
      }
LABEL_87:
      *(_DWORD *)(v5 + 72) = 1;
      goto LABEL_78;
    }
    sub_191EF0((__int64)&s1, (__int64)(v46 + 3));
    v50 = *(_QWORD *)(v5 + 56);
    v51 = s1.m256i_u64[1];
    v52 = (const void *)s1.m256i_i64[0];
    if ( v50 )
    {
      v53 = *(const char **)(v5 + 48);
      if ( !s1.m256i_i64[1] )
      {
        if ( *v53 )
        {
          v219.m128i_i64[0] = 0;
          goto LABEL_65;
        }
        goto LABEL_89;
      }
    }
    else
    {
      v53 = v42;
      if ( !s1.m256i_i64[1] )
        goto LABEL_89;
    }
    if ( !strcmp((const char *)s1.m256i_i64[0], v53) )
    {
LABEL_89:
      if ( v52 )
      {
        s1.m256i_i64[1] = 0;
        qfree(v52, v53, v47, v48, v49);
        *(_DWORD *)(v5 + 72) = 1;
        goto LABEL_78;
      }
      goto LABEL_87;
    }
    v65 = (std::__detail::_Prime_rehash_policy *)(v51 - 1);
    if ( v51 == 1 )
    {
      v219.m128i_i64[0] = 0;
    }
    else
    {
      v177 = dest;
      if ( v219.m128i_i64[1] < v51 )
      {
        v201[0] = (std::__detail::_Prime_rehash_policy *)(v51 - 1);
        dest = (void *)qvector_reserve(&dest, dest, v51, 1);
        v65 = v201[0];
        v177 = dest;
      }
      v219.m128i_i64[0] = v51;
      memmove(v177, v52, (size_t)v65);
      *((char *)dest + v51 - 1) = 0;
      v52 = (const void *)s1.m256i_i64[0];
      v50 = *(_QWORD *)(v5 + 56);
    }
    if ( !v50 )
    {
      v54 = v42;
      goto LABEL_66;
    }
LABEL_65:
    v54 = *(const char **)(v5 + 48);
LABEL_66:
    v55 = *(_QWORD *)(v5 + 8);
    v56 = v54 + 2;
    v57 = v42;
    if ( v55 )
      v57 = *(const char **)v5;
    if ( strcmp(v57, v56) )
    {
      if ( v52 )
      {
        s1.m256i_i64[1] = 0;
        qfree(v52, v56, v58, v59, v60);
        *(_DWORD *)(v5 + 72) = 4;
        v50 = *(_QWORD *)(v5 + 56);
        v55 = *(_QWORD *)(v5 + 8);
      }
      else
      {
        *(_DWORD *)(v5 + 72) = 4;
      }
      goto LABEL_71;
    }
    if ( v52 )
    {
      s1.m256i_i64[1] = 0;
      qfree(v52, v56, v58, v59, v60);
      *(_DWORD *)(v5 + 72) = 2;
      v55 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      *(_DWORD *)(v5 + 72) = 2;
    }
    v66 = (const char **)*v202;
    v67 = *v202 + 24 * v202[1];
    if ( *v202 == v67 )
    {
LABEL_226:
      v50 = *(_QWORD *)(v5 + 56);
      goto LABEL_71;
    }
    while ( 1 )
    {
      if ( v66[1] )
      {
        v56 = *v66;
        v68 = v42;
        if ( !v55 )
          goto LABEL_101;
        goto LABEL_106;
      }
      if ( !v55 )
        break;
      v56 = v42;
LABEL_106:
      v68 = *(const char **)v5;
LABEL_101:
      if ( !strcmp(v68, v56) )
      {
        if ( (const char **)v67 == v66 )
          goto LABEL_226;
        goto LABEL_212;
      }
      v66 += 3;
      if ( (const char **)v67 == v66 )
        goto LABEL_226;
    }
    if ( (const char **)v67 == v66 )
    {
      v50 = *(_QWORD *)(v5 + 56);
      v61 = &::s1;
      goto LABEL_73;
    }
LABEL_212:
    v147 = *v66;
    if ( *v66 )
    {
      v66[1] = nullptr;
      qfree(v147, v56, v58, v59, v60);
    }
    v148 = v202;
    memmove(v66, v66 + 3, *v202 + 24 * v202[1] - (_QWORD)v66 - 24);
    --v148[1];
    v50 = *(_QWORD *)(v5 + 56);
    v55 = *(_QWORD *)(v5 + 8);
LABEL_71:
    v61 = v42;
    if ( v55 )
      v61 = *(const char **)v5;
LABEL_73:
    v53 = v42;
    if ( v50 )
      v53 = *(const char **)(v5 + 48);
    v62 = (void *)v42;
    if ( v219.m128i_i64[0] )
      v62 = dest;
    navstack_t_perform_move(v62, v53, v61, 0);
LABEL_78:
    if ( dest )
    {
      v219.m128i_i64[0] = 0;
      qfree(dest, v53, v47, v48, v49);
    }
    if ( v17 != v5 + 80 )
    {
      v5 += 128;
      continue;
    }
    break;
  }
LABEL_107:
  if ( dword_8CD7F0 )
  {
    module_data = get_module_data();
    if ( module_data )
    {
      v73 = *(__int64 **)(module_data + 912);
      if ( v73 )
        sub_191CF0(v73, a2, v70, v71, v72);
    }
  }
  *(_OWORD *)&s1.m256i_u64[1] = 1u;
  v205 = &v234;
  s1.m256i_i64[0] = (__int64)&v234;
  s1.m256i_i64[3] = 0;
  v232 = 1065353216;
  v233 = 0;
  v234 = nullptr;
  if ( qword_8CB508 )
  {
    v74 = *(__m256i **)qword_8CB508;
    p_s1 = (__m256i *)(*(_QWORD *)qword_8CB508 + 24LL * *(_QWORD *)(qword_8CB508 + 8));
    if ( p_s1 != v74 )
    {
      v201[0] = (std::__detail::_Prime_rehash_policy *)&v232;
      p_dest = (void **)&s1.m256i_i64[2];
      while ( 1 )
      {
        v75 = 1;
        if ( v74->m256i_i64[1] > 1uLL )
          break;
LABEL_125:
        v74 = (__m256i *)((char *)v74 + 24);
        if ( p_s1 == v74 )
          goto LABEL_126;
      }
      while ( 2 )
      {
        v76 = v74->m256i_i64[0] + 16 * v75;
        if ( !*(_BYTE *)v76 )
        {
          v77 = (const char *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *(const QT::QObject **)(v76 + 8));
          sub_1949B0(v202, v77, 1);
          if ( s1.m256i_i64[3] )
          {
            v78 = *(_QWORD **)(s1.m256i_i64[0] + 8 * ((unsigned __int64)v77 % s1.m256i_i64[1]));
            v79 = (unsigned __int64)v77 % s1.m256i_i64[1];
            if ( !v78 )
              goto LABEL_188;
            v80 = (_QWORD *)*v78;
            if ( v77 == *(const char **)(*v78 + 8LL) )
            {
LABEL_122:
              if ( !v78 || !*v78 )
                goto LABEL_188;
            }
            else
            {
              while ( 1 )
              {
                v81 = (_QWORD *)*v80;
                if ( !*v80 )
                  break;
                v78 = v80;
                if ( (unsigned __int64)v77 % s1.m256i_i64[1] != v81[1] % s1.m256i_i64[1] )
                  break;
                v80 = (_QWORD *)*v80;
                if ( v77 == (const char *)v81[1] )
                  goto LABEL_122;
              }
LABEL_188:
              v127 = (__int64 *)operator new(0x10u);
              *v127 = 0;
              v128 = v201[0];
              v129 = v127;
              v127[1] = (__int64)v77;
              v130 = s1.m256i_i64[1];
              if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                      v128,
                                      s1.m256i_u64[1],
                                      s1.m256i_u64[3],
                                      1u) )
              {
                v138 = v131;
                if ( v131 == 1 )
                {
                  v234 = nullptr;
                  v134 = v205;
                }
                else
                {
                  if ( v131 > 0xFFFFFFFFFFFFFFFLL )
                  {
                    if ( v131 >> 61 )
                      sub_162118(v128, v130, v131, v132, v133, v131 >> 61);
                    std::__throw_bad_alloc();
                  }
                  v139 = 8 * v131;
                  v203 = (const __m128i *)v131;
                  v134 = (void **)operator new(8 * v131);
                  memset(v134, 0, v139);
                  v138 = (unsigned __int64)v203;
                }
                v140 = (void **)s1.m256i_i64[2];
                v141 = p_dest;
                v142 = 0;
                for ( s1.m256i_i64[2] = 0; v140; v142 = v144 )
                {
                  while ( 1 )
                  {
                    v143 = v140;
                    v140 = (void **)*v140;
                    v144 = (unsigned __int64)v143[1] % v138;
                    v145 = (void ***)&v134[v144];
                    if ( !*v145 )
                      break;
                    *v143 = **v145;
                    **v145 = v143;
                    if ( !v140 )
                      goto LABEL_203;
                  }
                  *v143 = (void *)s1.m256i_i64[2];
                  s1.m256i_i64[2] = (__int64)v143;
                  *v145 = v141;
                  if ( *v143 )
                    v134[v142] = v143;
                }
LABEL_203:
                if ( (void **)s1.m256i_i64[0] != v205 )
                {
                  v203 = (const __m128i *)v138;
                  operator delete((void *)s1.m256i_i64[0], 8 * s1.m256i_i64[1]);
                  v138 = (unsigned __int64)v203;
                }
                s1.m256i_i64[1] = v138;
                s1.m256i_i64[0] = (__int64)v134;
                v79 = (unsigned __int64)v77 % v138;
              }
              else
              {
                v134 = (void **)s1.m256i_i64[0];
              }
              v135 = v79;
              v136 = (void ***)&v134[v135];
              v137 = (__int64 *)v134[v135];
              if ( v137 )
              {
                *v129 = *v137;
                **v136 = v129;
              }
              else
              {
                v146 = s1.m256i_i64[2];
                s1.m256i_i64[2] = (__int64)v129;
                *v129 = v146;
                if ( v146 )
                {
                  v134[*(_QWORD *)(v146 + 8) % s1.m256i_i64[1]] = v129;
                  v136 = (void ***)(v135 * 8 + s1.m256i_i64[0]);
                }
                *v136 = p_dest;
              }
              ++s1.m256i_i64[3];
            }
          }
          else
          {
            v126 = (_QWORD *)s1.m256i_i64[2];
            if ( !s1.m256i_i64[2] )
            {
LABEL_187:
              v79 = (unsigned __int64)v77 % s1.m256i_i64[1];
              goto LABEL_188;
            }
            while ( v77 != (const char *)v126[1] )
            {
              v126 = (_QWORD *)*v126;
              if ( !v126 )
                goto LABEL_187;
            }
          }
        }
        if ( (unsigned __int64)++v75 >= v74->m256i_i64[1] )
          goto LABEL_125;
        continue;
      }
    }
  }
  else
  {
    v195 = operator new(0x18u);
    *(_QWORD *)v195 = 0;
    qword_8CB508 = v195;
    *(_OWORD *)(v195 + 8) = 0;
  }
LABEL_126:
  netnode_check(&v209, "$ curlocs", 0, 0);
  v82 = netnode_supfirst(v209, 65);
  if ( v82 != -1 )
  {
    while ( 2 )
    {
      v210 = v82;
      if ( !(unsigned __int8)netnode_exist(&v210) )
        goto LABEL_148;
      src = nullptr;
      *(_OWORD *)n = 0;
      netnode_get_name(v210, &src);
      if ( n[0] > 2 && *(_BYTE *)src == 36 && *((_BYTE *)src + 1) == 32 )
      {
        v214 = -1;
        v215.m128i_i32[0] = 0;
        navstack_t_register_live(&v214);
        dest = nullptr;
        v219 = 0;
        v214 = v210;
        v83 = &dest;
        p_dest = &dest;
        navstack_t_get_all_current(&v214, &dest);
        v87 = (char *)dest;
        v88 = v219.m128i_i64[0];
        if ( dest )
        {
          if ( v219.m128i_i64[0] )
          {
            v89 = 0;
            do
            {
              v90 = &v87[96 * v89];
              v91 = *((_QWORD *)v90 + 5);
              if ( v91 )
              {
                qfree(v91, &dest, v84, v85, v86);
                *((_QWORD *)v90 + 5) = 0;
              }
              v92 = *((_QWORD *)v90 + 6);
              if ( v92 )
              {
                *((_QWORD *)v90 + 7) = 0;
                qfree(v92, &dest, v84, v85, v86);
                *((_QWORD *)v90 + 6) = 0;
                *((_QWORD *)v90 + 8) = 0;
              }
              v93 = *((_QWORD *)v90 + 9);
              if ( v93 )
              {
                *((_QWORD *)v90 + 10) = 0;
                qfree(v93, &dest, v84, v85, v86);
              }
              v94 = *((_QWORD *)v90 + 6);
              if ( v94 )
              {
                *((_QWORD *)v90 + 7) = 0;
                qfree(v94, &dest, v84, v85, v86);
              }
              v95 = *((_QWORD *)v90 + 5);
              if ( v95 )
                qfree(v95, &dest, v84, v85, v86);
              ++v89;
              v87 = (char *)dest;
            }
            while ( v88 != v89 );
            v219.m128i_i64[0] = 0;
            qfree(dest, &dest, v84, v85, v86);
            navstack_t_deregister_live(&v214);
LABEL_146:
            if ( src )
            {
              n[0] = 0;
              qfree(src, v83, v96, v97, v98);
            }
LABEL_148:
            v82 = netnode_supnext(v209, v82, 65);
            if ( v82 == -1 )
              goto LABEL_149;
            continue;
          }
          qfree(dest, &dest, v84, v85, v86);
          navstack_t_deregister_live(&v214);
        }
        else
        {
          navstack_t_deregister_live(&v214);
          if ( v88 )
            goto LABEL_146;
        }
      }
      break;
    }
    netnode_kill(&v210);
    v83 = (void **)v82;
    netnode_supdel(v209, v82, 65);
    goto LABEL_146;
  }
LABEL_149:
  v99 = nullptr;
  v202 = (__int64 *)xmmword_8CB528;
  if ( (_QWORD)xmmword_8CB528 )
  {
    do
    {
LABEL_150:
      v100 = *(_QWORD *)(qword_8CB520 + 8LL * (_QWORD)v99);
      if ( s1.m256i_i64[3] )
      {
        v161 = *(_QWORD **)(s1.m256i_i64[0] + 8 * (v100 % s1.m256i_i64[1]));
        if ( v161 )
        {
          v162 = (_QWORD *)*v161;
          if ( v100 == *(_QWORD *)(*v161 + 8LL) )
          {
LABEL_232:
            if ( v161 && *v161 )
              goto LABEL_155;
          }
          else
          {
            while ( 1 )
            {
              v163 = (_QWORD *)*v162;
              if ( !*v162 )
                break;
              v161 = v162;
              if ( v100 % s1.m256i_i64[1] != v163[1] % s1.m256i_i64[1] )
                break;
              v162 = (_QWORD *)*v162;
              if ( v100 == v163[1] )
                goto LABEL_232;
            }
          }
        }
      }
      else
      {
        v101 = (_QWORD *)s1.m256i_i64[2];
        if ( s1.m256i_i64[2] )
        {
          while ( v100 != v101[1] )
          {
            v101 = (_QWORD *)*v101;
            if ( !v101 )
              goto LABEL_234;
          }
LABEL_155:
          v99 = (__int64 *)((char *)v99 + 1);
          if ( v99 == v202 )
            break;
          goto LABEL_150;
        }
      }
LABEL_234:
      v201[0] = (std::__detail::_Prime_rehash_policy *)(v100 + 384);
      v164 = sub_1EA540(v100 + 384);
      v165 = a2[1];
      if ( (int)v165 <= 0 )
        goto LABEL_266;
      v166 = 0;
      v167 = 16 * (3LL * (unsigned int)(v165 - 1) + 3);
      while ( 1 )
      {
        v168 = (__int64 *)(v166 + *a2);
        if ( (unsigned __int8)sub_194240(v168, v164) )
          break;
        v166 += 48;
        if ( v166 == v167 )
          goto LABEL_266;
      }
      if ( v168 )
        v169 = (__int64)(v168 + 3);
      else
LABEL_266:
        v169 = sub_1EA540(v201[0]);
      dest = nullptr;
      v219 = 0;
      v170 = *(_QWORD *)(v169 + 8);
      if ( v170 )
      {
        dest = (void *)qalloc_or_throw(*(_QWORD *)(v169 + 8));
        v219.m128i_i64[1] = v170;
        memcpy(dest, *(const void **)v169, v170);
        v219.m128i_i64[0] = v170;
      }
      sub_192020(v100, (__int64)&dest);
      if ( !dest )
        goto LABEL_155;
      qfree(dest, &dest, v171, v172, v173);
      v99 = (__int64 *)((char *)v99 + 1);
    }
    while ( v99 != v202 );
  }
  v102 = (_QWORD *)s1.m256i_i64[2];
  if ( s1.m256i_i64[2] )
  {
    do
    {
      v103 = v102;
      v102 = (_QWORD *)*v102;
      operator delete(v103, 0x10u);
    }
    while ( v102 );
  }
  v104 = 0;
  memset((void *)s1.m256i_i64[0], 0, 8 * s1.m256i_i64[1]);
  v107 = v205;
  *(_OWORD *)&s1.m256i_u64[2] = 0u;
  if ( (void **)s1.m256i_i64[0] != v205 )
  {
    v104 = 8 * s1.m256i_i64[1];
    operator delete((void *)s1.m256i_i64[0], 8 * s1.m256i_i64[1]);
  }
  v108 = v221[0];
  if ( v221[0] )
  {
    do
    {
      v109 = v108;
      v108 = (_QWORD *)*v108;
      v110 = v109[1];
      if ( v110 )
      {
        v109[2] = 0;
        qfree(v110, v104, v105, v107, v106);
      }
      v104 = 32;
      operator delete(v109, 0x20u);
    }
    while ( v108 );
  }
  v111 = 0;
  memset(s[0], 0, 8 * (__int64)s[1]);
  v114 = v207;
  v221[1] = nullptr;
  v221[0] = nullptr;
  if ( s[0] != v207 )
  {
    v111 = 8 * (__int64)s[1];
    operator delete(s[0], 8 * (__int64)s[1]);
  }
  v115 = v212;
  if ( v212 )
  {
    v116 = v213.m128i_i64[0];
    if ( v213.m128i_i64[0] )
    {
      v117 = 0;
      do
      {
        v118 = (_QWORD *)(v115 + (v117 << 7));
        v119 = v118[12];
        if ( v119 )
        {
          v118[13] = 0;
          qfree(v119, v111, v112, v114, v113);
        }
        v120 = v118[5];
        if ( v120 )
        {
          qfree(v120, v111, v112, v114, v113);
          v118[5] = 0;
        }
        v121 = v118[6];
        if ( v121 )
        {
          v118[7] = 0;
          qfree(v121, v111, v112, v114, v113);
          v118[6] = 0;
          v118[8] = 0;
        }
        v122 = v118[9];
        if ( v122 )
        {
          v118[10] = 0;
          qfree(v122, v111, v112, v114, v113);
        }
        v123 = v118[6];
        if ( v123 )
        {
          v118[7] = 0;
          qfree(v123, v111, v112, v114, v113);
        }
        v124 = v118[5];
        if ( v124 )
          qfree(v124, v111, v112, v114, v113);
        ++v117;
        v115 = v212;
      }
      while ( v116 != v117 );
    }
    v213.m128i_i64[0] = 0;
    qfree(v115, v111, v112, v114, v113);
  }
  return v241 - __readfsqword(0x28u);
}
