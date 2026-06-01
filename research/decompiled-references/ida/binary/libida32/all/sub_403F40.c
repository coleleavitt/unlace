__int64 __fastcall sub_403F40(__m128i *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, int a5, __int64 a6)
{
  _QWORD *v7; // rbp
  bool v8; // zf
  const char *v9; // rbx
  unsigned __int64 v10; // r12
  char v11; // al
  size_t v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rbp
  const char *v21; // rdi
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // r13
  __int8 v25; // al
  int v26; // eax
  int v27; // ecx
  size_t v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r9
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rsi
  size_t v38; // rax
  size_t v39; // r14
  size_t v40; // rax
  size_t v41; // rbx
  __int64 v42; // rdx
  size_t v43; // rbx
  unsigned __int64 v44; // rax
  void *v45; // r13
  _QWORD *v46; // r14
  unsigned __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rax
  char *v50; // r9
  __int64 v51; // rdx
  const char *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r9
  __m128i v56; // xmm0
  unsigned __int64 v57; // r8
  void *v58; // r14
  _DWORD *v59; // rax
  size_t v60; // r13
  void *v61; // rbx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  __m128i v66; // xmm0
  void *v67; // rdi
  unsigned int v68; // r13d
  __int64 v69; // r13
  __int64 v70; // r14
  void **v71; // rbx
  void *v72; // rdi
  void *v73; // rdi
  char v74; // al
  int v75; // eax
  unsigned __int64 v76; // rax
  size_t v78; // rax
  size_t v79; // r13
  _BOOL4 v80; // ebx
  unsigned __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  size_t v86; // rax
  size_t v87; // rbx
  size_t v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // rdx
  void *v91; // r14
  _QWORD *v92; // r13
  void *v93; // r8
  __int64 v94; // rsi
  __int64 v95; // rax
  char *v96; // r9
  const char *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // r8
  void *v102; // r14
  __m128i v103; // xmm0
  size_t v104; // r13
  void *v105; // rbx
  __int64 v106; // r8
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rax
  __m128i v110; // xmm0
  void *v111; // rdi
  unsigned __int8 v112; // al
  int v113; // eax
  void *v114; // rdi
  size_t v115; // r13
  __int64 v116; // rax
  void *v117; // rax
  __m128i v118; // xmm0
  __m128i v119; // xmm2
  __m128i v120; // xmm1
  __m128i v121; // xmm3
  __int64 v122; // rax
  __int64 v123; // rdx
  __m128i v124; // xmm3
  __int64 v125; // rbx
  __int64 v126; // rbp
  void *v127; // rdi
  void *v128; // rdi
  unsigned __int64 v129; // rdx
  unsigned __int64 v130; // r8
  __int64 v131; // rsi
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rsi
  __int64 v135; // r13
  const char *v136; // rsi
  __int64 v137; // rdx
  const char *v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rax
  void *v141; // r14
  __int64 v142; // rax
  __int64 v143; // rsi
  __m128i v144; // xmm0
  unsigned __int64 v145; // rcx
  __int64 v146; // rax
  __m128i v147; // xmm0
  __int64 v148; // rdx
  const char *v149; // rsi
  __int64 v150; // rcx
  char *v151; // r14
  size_t v152; // rax
  size_t v153; // r13
  const char *v154; // rax
  unsigned __int64 v155; // r9
  size_t v156; // rax
  size_t v157; // rbx
  size_t v158; // r13
  __int64 v159; // rax
  void *v160; // rbx
  unsigned __int64 v161; // r8
  __int64 v162; // rax
  __int64 v163; // rsi
  __int64 v164; // rdx
  __int64 v165; // rax
  __m128i v166; // xmm0
  unsigned __int64 v167; // r8
  unsigned __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rsi
  __int64 v173; // r8
  const char *v174; // rsi
  __int64 v175; // rdx
  const char *v176; // rcx
  __int64 v177; // r8
  void *v178; // r13
  size_t v179; // r14
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rsi
  unsigned __int64 v183; // rcx
  __int64 v184; // rax
  __m128i v185; // xmm0
  __int64 v186; // rdx
  const char *v187; // rsi
  __int64 v188; // rcx
  char *v189; // r14
  size_t v190; // rax
  size_t v191; // r13
  const char *v192; // rax
  unsigned __int64 v193; // r9
  size_t v194; // rax
  size_t v195; // rbx
  __int64 v196; // rax
  __int64 v197; // rax
  void *v198; // r14
  void *v199; // r13
  char *v200; // rax
  __m128i v201; // xmm0
  void *v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  void *v212; // rax
  void *v213; // rax
  void *v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  void *v217; // rdi
  size_t v218; // r13
  char *v219; // rdi
  __int64 v220; // rdx
  void *v221; // rdi
  size_t v222; // r14
  void *v223; // rdi
  size_t v224; // r13
  char *v225; // rdi
  __int64 v226; // rdx
  __int64 v227; // rax
  void *v228; // rax
  void *v229; // rax
  void *v230; // rax
  __int64 v231; // rax
  size_t v232; // r14
  void *v233; // rax
  __int64 v234; // rax
  __int64 v235; // rax
  char *v236; // rsi
  __int64 v237; // rax
  char *v238; // rsi
  __int64 v239; // rax
  __int64 v240; // rax
  __m128i n; // [rsp+8h] [rbp-190h] BYREF
  unsigned __int64 p_src; // [rsp+18h] [rbp-180h]
  void *v243; // [rsp+20h] [rbp-178h]
  unsigned __int64 v244; // [rsp+28h] [rbp-170h]
  __int64 v245; // [rsp+30h] [rbp-168h]
  __m128i v246; // [rsp+38h] [rbp-160h] BYREF
  __m128i *v247; // [rsp+48h] [rbp-150h]
  unsigned __int64 v248; // [rsp+50h] [rbp-148h]
  __int64 v249; // [rsp+58h] [rbp-140h]
  __m128i v250; // [rsp+60h] [rbp-138h] BYREF
  __m128i v251; // [rsp+70h] [rbp-128h] BYREF
  __m128i v252; // [rsp+80h] [rbp-118h] BYREF
  __int64 v253; // [rsp+90h] [rbp-108h]
  void *src; // [rsp+A0h] [rbp-F8h] BYREF
  size_t v255[2]; // [rsp+A8h] [rbp-F0h]
  void *dest; // [rsp+B8h] [rbp-E0h] BYREF
  __int128 v257; // [rsp+C0h] [rbp-D8h]
  void *v258; // [rsp+D0h] [rbp-C8h]
  int v259; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned __int64 v260; // [rsp+110h] [rbp-88h]
  __m128i v261; // [rsp+120h] [rbp-78h]
  __m128i v262; // [rsp+130h] [rbp-68h]
  __m128i v263; // [rsp+140h] [rbp-58h]
  __int64 v264; // [rsp+150h] [rbp-48h]
  unsigned __int64 v265; // [rsp+158h] [rbp-40h]

  v7 = a2;
  LODWORD(v243) = a5;
  n.m128i_i64[0] = a6;
  v265 = __readfsqword(0x28u);
  v8 = a2[5] == 0;
  *(_DWORD *)a2 = 0;
  v246.m128i_i64[0] = (__int64)haystack;
  if ( !v8 )
    v246.m128i_i64[0] = a2[4];
  v9 = haystack;
  if ( *(_QWORD *)(a3 + 8) )
    v9 = *(const char **)a3;
  v8 = *(_QWORD *)(a3 + 32) == 0;
  v10 = *(_QWORD *)(a3 + 48);
  n.m128i_i64[1] = (__int64)haystack;
  if ( !v8 )
    n.m128i_i64[1] = *(_QWORD *)(a3 + 24);
  p_src = a4;
  v11 = is_uname(v9);
  v15 = p_src;
  if ( !v11 )
  {
    v68 = -3;
    set_error_string();
    return v68;
  }
  v16 = a1->m128i_u64[1];
  if ( v16 )
  {
    v17 = a1->m128i_i64[0];
    v18 = a1->m128i_i64[0] - 56;
    if ( v16 == -1 || (v12 = 7 * v16, v18 = v17 + 56 * v16, v17 != v18) )
    {
      p_src = v10;
      v19 = v17;
      v244 = (unsigned __int64)v7;
      v20 = v17;
      v245 = v15;
      while ( 1 )
      {
        v21 = haystack;
        if ( *(_QWORD *)(v20 + 8) )
          v21 = *(const char **)v20;
        if ( !strcmp(v21, v9) )
          break;
        v20 += 56;
        if ( v20 == v18 )
        {
          v7 = (_QWORD *)v244;
          v10 = p_src;
          v23 = v19;
          v15 = v245;
          goto LABEL_16;
        }
      }
      v23 = v19;
      v24 = v20;
      v7 = (_QWORD *)v244;
      v10 = p_src;
      v15 = v245;
      if ( v24 - v23 >= 0 )
      {
        v68 = -21;
        set_error_string();
        return v68;
      }
LABEL_16:
      if ( v16 > 0xFD )
      {
        v12 = v23 + 56 * v16;
        if ( v23 != v12 )
        {
          v13 = 1;
          do
          {
            if ( v10 == *(_QWORD *)(v23 + 48) )
              ++v13;
            v23 += 56;
          }
          while ( v12 != v23 );
          if ( v13 > 0xFE )
          {
            v68 = -30;
            set_error_data(0, v10, v12, v13, v14, v22);
            return v68;
          }
        }
      }
    }
  }
  if ( ((unsigned __int8)v243 & 0x20) == 0 )
  {
    v16 = (unsigned __int64)v9;
    p_src = v15;
    v113 = sub_402670((__int64)a1, (__int64)v9);
    v15 = p_src;
    if ( v113 )
      return (unsigned int)-31;
  }
  if ( n.m128i_i64[0] >= 0 && n.m128i_i64[0] < (unsigned __int64)a1->m128i_i64[1] )
  {
    v25 = a1[3].m128i_i8[4];
    if ( (v25 & 0x10) != 0 )
      goto LABEL_27;
LABEL_82:
    src = nullptr;
    dest = nullptr;
    *(_OWORD *)v255 = 0;
    v257 = 0;
    if ( v9 )
    {
      v78 = strlen(v9);
      v79 = v78;
      if ( v78 )
      {
        p_src = (unsigned __int64)&src;
        v243 = (void *)(v78 + 1);
        v16 = (unsigned __int64)v9;
        src = (void *)qvector_reserve(&src, 0, v78 + 1, 1);
        v255[0] = (size_t)v243;
        memmove(src, v9, v79);
        *((_BYTE *)src + v79) = 0;
      }
    }
    p_src = (unsigned __int64)&src;
    v80 = sub_51CE10(a1, v16, v12, v13, v14) != 2;
    if ( (a1[3].m128i_i8[4] & 7) != 0 )
    {
      v81 = (unsigned int)(1 << ((a1[3].m128i_i8[4] & 7) - 1));
    }
    else
    {
      p_src = (unsigned __int64)&src;
      v81 = (unsigned __int8)getinf(61);
    }
    p_src = (unsigned __int64)&src;
    v258 = (void *)extend_sign(v10, v81, v80);
    if ( n.m128i_i64[1] && (v86 = strlen((const char *)n.m128i_i64[1]), (v87 = v86) != 0) )
    {
      v114 = dest;
      v115 = v86 + 1;
      if ( *((_QWORD *)&v257 + 1) < v86 + 1 )
      {
        p_src = (unsigned __int64)&src;
        dest = (void *)qvector_reserve(&dest, dest, v115, 1);
        v114 = dest;
      }
      v81 = n.m128i_u64[1];
      *(_QWORD *)&v257 = v115;
      memmove(v114, (const void *)n.m128i_i64[1], v87);
      *((_BYTE *)dest + v87) = 0;
    }
    else
    {
      *(_QWORD *)&v257 = 0;
    }
    v88 = v255[0];
    if ( n.m128i_i64[0] == -1 )
    {
      v198 = nullptr;
      if ( v255[0] )
      {
        p_src = (unsigned __int64)&src;
        v228 = (void *)qalloc_or_throw(v255[0], (const char *)v81, v82, v83, v84, v85);
        v81 = (unsigned __int64)src;
        v198 = v228;
        memcpy(v228, src, v88);
      }
      v199 = nullptr;
      n.m128i_i64[0] = v257;
      if ( (_QWORD)v257 )
      {
        v199 = (void *)qalloc_or_throw(v257, (const char *)v81, v82, v83, v84, v85);
        memcpy(v199, dest, n.m128i_u64[0]);
      }
      v101 = (__int64)v258;
      v98 = a1->m128i_i64[1];
      v97 = (const char *)a1->m128i_i64[0];
      v260 = (unsigned __int64)v258;
      if ( a1[1].m128i_i64[0] < (unsigned __int64)(v98 + 1) )
      {
        n.m128i_i64[1] = (__int64)v258;
        v227 = qvector_reserve(a1, v97, v98 + 1, 56);
        v98 = a1->m128i_i64[1];
        v101 = n.m128i_i64[1];
        a1->m128i_i64[0] = v227;
        v97 = (const char *)v227;
      }
      v99 = 7 * v98;
      v200 = (char *)&v97[56 * v98];
      *(__m128i *)(v200 + 8) = _mm_unpacklo_epi64((__m128i)v88, (__m128i)v88);
      v201 = _mm_loadl_epi64(&n);
      *(_QWORD *)v200 = v198;
      v102 = nullptr;
      *((_QWORD *)v200 + 3) = v199;
      *((_QWORD *)v200 + 6) = v101;
      *((__m128i *)v200 + 2) = _mm_unpacklo_epi64(v201, v201);
      v104 = v255[0];
      ++a1->m128i_i64[1];
      if ( !v104 )
      {
LABEL_98:
        v105 = nullptr;
        n.m128i_i64[0] = v257;
        if ( (_QWORD)v257 )
        {
          v105 = (void *)qalloc_or_throw(v257, v97, v98, v99, v101, v85);
          memcpy(v105, dest, n.m128i_u64[0]);
        }
        v106 = (__int64)v258;
        v107 = v7[19];
        v108 = v7[18];
        v260 = (unsigned __int64)v258;
        if ( v7[20] < (unsigned __int64)(v107 + 1) )
        {
          n.m128i_i64[1] = (__int64)v258;
          v203 = qvector_reserve(v7 + 18, v108, v107 + 1, 56);
          v7[18] = v203;
          v108 = v203;
          v106 = n.m128i_i64[1];
          v107 = v7[19];
        }
        v109 = v108 + 56 * v107;
        *(__m128i *)(v109 + 8) = _mm_unpacklo_epi64((__m128i)v104, (__m128i)v104);
        v110 = _mm_loadl_epi64(&n);
        *(_QWORD *)v109 = v102;
        *(_QWORD *)(v109 + 24) = v105;
        *(_QWORD *)(v109 + 48) = v106;
        *(__m128i *)(v109 + 32) = _mm_unpacklo_epi64(v110, v110);
        v111 = dest;
        ++v7[19];
        if ( v111 )
        {
          *(_QWORD *)&v257 = 0;
          qfree(v111);
        }
        if ( src )
        {
          v255[0] = 0;
          qfree(src);
          v74 = a1[3].m128i_i8[4] & 7;
          if ( v74 )
            goto LABEL_76;
          goto LABEL_106;
        }
LABEL_75:
        v74 = a1[3].m128i_i8[4] & 7;
        if ( v74 )
        {
LABEL_76:
          v75 = 1 << (v74 - 1);
          goto LABEL_77;
        }
LABEL_106:
        v75 = (unsigned __int8)getinf(61);
LABEL_77:
        v76 = (unsigned int)(8 * v75 - 1);
        if ( (unsigned __int64)(int)v76 <= 0x3F
          && _bittest64((const __int64 *)&v10, v76)
          && (a1[3].m128i_i8[4] & 0x60) != 0x40 )
        {
          a1[3].m128i_i32[0] |= 0x40u;
        }
        *(_DWORD *)v7 = 6;
        return 0;
      }
    }
    else
    {
      v89 = n.m128i_i64[0];
      v90 = a1->m128i_i64[0];
      v91 = nullptr;
      v92 = (_QWORD *)(a1->m128i_i64[0] + 56 * n.m128i_i64[0]);
      if ( v255[0] )
      {
        p_src = (unsigned __int64)&src;
        v117 = (void *)qalloc_or_throw(v255[0], (const char *)v81, v90, n.m128i_i64[0], v84, v85);
        v81 = (unsigned __int64)src;
        v91 = v117;
        memcpy(v117, src, v88);
      }
      n = (__m128i)(unsigned __int64)v257;
      if ( (_QWORD)v257 )
      {
        n.m128i_i64[1] = qalloc_or_throw(v257, (const char *)v81, v90, v89, v84, v85);
        memcpy((void *)n.m128i_i64[1], dest, n.m128i_u64[0]);
      }
      v93 = v258;
      v94 = a1->m128i_i64[0];
      v95 = a1->m128i_i64[1];
      v260 = (unsigned __int64)v258;
      v96 = (char *)v92 - v94;
      if ( a1[1].m128i_i64[0] < (unsigned __int64)(v95 + 1) )
      {
        v243 = v258;
        p_src = (unsigned __int64)v92 - v94;
        v116 = qvector_reserve(a1, v94, v95 + 1, 56);
        v96 = (char *)v92 - v94;
        v93 = v243;
        a1->m128i_i64[0] = v116;
        v92 = (_QWORD *)((char *)v92 + v116 - v94);
        v95 = a1->m128i_i64[1];
      }
      v97 = (const char *)v92;
      p_src = (unsigned __int64)v93;
      memmove(v92 + 7, v92, 56 * v95 - (_QWORD)v96);
      v100 = n.m128i_i64[1];
      v101 = p_src;
      *v92 = v91;
      v102 = nullptr;
      *(__m128i *)(v92 + 1) = _mm_unpacklo_epi64((__m128i)v88, (__m128i)v88);
      v103 = _mm_loadl_epi64(&n);
      v92[3] = v100;
      v92[6] = v101;
      *((__m128i *)v92 + 2) = _mm_unpacklo_epi64(v103, v103);
      v104 = v255[0];
      ++a1->m128i_i64[1];
      if ( !v104 )
        goto LABEL_98;
    }
    p_src = (unsigned __int64)&src;
    v202 = (void *)qalloc_or_throw(v104, v97, v98, v99, v101, v85);
    v97 = (const char *)src;
    v102 = v202;
    memcpy(v202, src, v104);
    goto LABEL_98;
  }
  n.m128i_i64[0] = -1;
  v25 = a1[3].m128i_i8[4];
  if ( (v25 & 0x10) == 0 )
    goto LABEL_82;
LABEL_27:
  if ( v15 == -1 )
    v15 = v10;
  v26 = v25 & 7;
  if ( v26 )
  {
    v27 = 1 << (v26 - 1);
  }
  else
  {
    p_src = v15;
    v112 = getinf(61);
    v15 = p_src;
    v27 = v112;
  }
  v28 = (unsigned int)(8 * v27);
  v29 = -1;
  if ( (int)v28 <= 63 )
    v29 = (1LL << v28) - 1;
  if ( v10 && (v29 & v10 & v15) == 0 )
  {
    v68 = -18;
    set_error_data(1, v15, v12, v28, v14, v29);
    set_error_data(0, v10, v205, v206, v207, v208);
    return v68;
  }
  v244 = v15;
  p_src = v29;
  v250 = 0u;
  v251.m128i_i64[1] = 0;
  v247 = &v250;
  sub_4010A0((__int64)&v250, a1, v12, v28, v14, v29);
  v8 = a1->m128i_i64[1] == 0;
  v30 = p_src;
  v31 = v244;
  v245 = v250.m128i_i64[1];
  v243 = (void *)v250.m128i_i64[0];
  v246.m128i_i64[1] = v251.m128i_i64[1];
  v32 = a1[2].m128i_u64[0];
  if ( v8 )
  {
    v129 = a1[2].m128i_u64[1];
    v130 = v32 + 1;
    v131 = a1[1].m128i_i64[1];
    v259 = 1;
    p_src = (unsigned __int64)&v259;
    if ( v129 < v32 + 1 )
    {
      n.m128i_i64[0] = v30;
      v216 = qvector_reserve(&a1[1].m128i_u64[1], v131, v32 + 1, 4);
      a1[1].m128i_i64[1] = v216;
      v131 = v216;
      v31 = v244;
      v32 = a1[2].m128i_u64[0];
      v30 = n.m128i_i64[0];
    }
    *(_DWORD *)(v131 + 4 * v32) = 1;
    v132 = a1[2].m128i_i64[0] + 1;
    a1[2].m128i_i64[0] = v132;
    if ( (v30 & (v10 ^ v31)) != 0 )
    {
      ++*(_DWORD *)(a1[1].m128i_i64[1] + 4 * v132 - 4);
      v133 = a1->m128i_i64[1];
      v134 = a1->m128i_i64[0];
      if ( a1[1].m128i_i64[0] < (unsigned __int64)(v133 + 1) )
      {
        v244 = v31;
        n.m128i_i64[0] = v30;
        v134 = qvector_reserve(a1, v134, v133 + 1, 56);
        v31 = v244;
        v30 = n.m128i_i64[0];
        a1->m128i_i64[0] = v134;
        v133 = a1->m128i_i64[1];
      }
      n.m128i_i64[0] = v30;
      v135 = v134 + 56 * v133;
      v136 = "MM_%llXh_%s";
      *(_QWORD *)v135 = 0;
      *(_QWORD *)(v135 + 24) = 0;
      *(_OWORD *)(v135 + 8) = 0;
      *(_OWORD *)(v135 + 32) = 0;
      ++a1->m128i_i64[1];
      *(_QWORD *)(v135 + 48) = v30 & v31;
      sub_3573A0((char **)v135);
      v139 = *(_QWORD *)(v135 + 8);
      v30 = n.m128i_i64[0];
      v244 = 0;
      v246.m128i_i64[0] = v139;
      if ( v139 )
      {
        v232 = v139;
        v233 = (void *)qalloc_or_throw(v139, "MM_%llXh_%s", v137, v138);
        v136 = *(const char **)v135;
        v244 = (unsigned __int64)v233;
        memcpy(v233, v136, v232);
        v30 = n.m128i_i64[0];
      }
      v140 = *(_QWORD *)(v135 + 32);
      v141 = nullptr;
      n.m128i_i64[0] = v140;
      if ( v140 )
      {
        v248 = v30;
        v141 = (void *)qalloc_or_throw(v140, v136);
        memcpy(v141, *(const void **)(v135 + 24), n.m128i_u64[0]);
        v30 = v248;
      }
      v130 = *(_QWORD *)(v135 + 48);
      v142 = v7[19];
      v143 = v7[18];
      v260 = v130;
      if ( v7[20] < (unsigned __int64)(v142 + 1) )
      {
        v249 = v30;
        v248 = v130;
        v234 = qvector_reserve(v7 + 18, v143, v142 + 1, 56);
        v7[18] = v234;
        v143 = v234;
        v30 = v249;
        v142 = v7[19];
        v130 = v248;
      }
      v144 = _mm_loadl_epi64(&v246);
      v145 = v244;
      v146 = v143 + 56 * v142;
      *(__m128i *)(v146 + 8) = _mm_unpacklo_epi64(v144, v144);
      v147 = _mm_loadl_epi64(&n);
      *(_QWORD *)v146 = v145;
      *(_QWORD *)(v146 + 24) = v141;
      *(_QWORD *)(v146 + 48) = v130;
      *(__m128i *)(v146 + 32) = _mm_unpacklo_epi64(v147, v147);
      ++v7[19];
    }
    v148 = a1->m128i_i64[1];
    v149 = (const char *)a1->m128i_i64[0];
    if ( a1[1].m128i_i64[0] < (unsigned __int64)(v148 + 1) )
    {
      n.m128i_i64[0] = v30;
      v215 = qvector_reserve(a1, v149, v148 + 1, 56);
      v148 = a1->m128i_i64[1];
      v30 = n.m128i_i64[0];
      a1->m128i_i64[0] = v215;
      v149 = (const char *)v215;
    }
    v150 = 7 * v148;
    v151 = (char *)&v149[56 * v148];
    *(_QWORD *)v151 = 0;
    *((_QWORD *)v151 + 3) = 0;
    *(_OWORD *)(v151 + 8) = 0;
    *((_OWORD *)v151 + 2) = 0;
    ++a1->m128i_i64[1];
    if ( v9 && (n.m128i_i64[0] = v30, v152 = strlen(v9), v30 = n.m128i_i64[0], (v153 = v152) != 0) )
    {
      v225 = *(char **)v151;
      v226 = v152 + 1;
      if ( *((_QWORD *)v151 + 2) < v152 + 1 )
      {
        v238 = *(char **)v151;
        v244 = n.m128i_i64[0];
        n.m128i_i64[0] = v152 + 1;
        v239 = qvector_reserve(v151, v238, v226, 1);
        v30 = v244;
        v226 = n.m128i_i64[0];
        *(_QWORD *)v151 = v239;
        v225 = (char *)v239;
      }
      *((_QWORD *)v151 + 1) = v226;
      v149 = v9;
      n.m128i_i64[0] = v30;
      memmove(v225, v9, v153);
      v30 = n.m128i_i64[0];
      *(_BYTE *)(*(_QWORD *)v151 + v153) = 0;
    }
    else
    {
      *((_QWORD *)v151 + 1) = 0;
    }
    v154 = (const char *)n.m128i_i64[1];
    v155 = v10 & v30;
    *((_QWORD *)v151 + 6) = v155;
    if ( v154 && (v156 = strlen(v154), (v157 = v156) != 0) )
    {
      v223 = *((void **)v151 + 3);
      v224 = v156 + 1;
      if ( *((_QWORD *)v151 + 5) < v156 + 1 )
      {
        v240 = qvector_reserve(v151 + 24, *((_QWORD *)v151 + 3), v224, 1);
        *((_QWORD *)v151 + 3) = v240;
        v223 = (void *)v240;
      }
      *((_QWORD *)v151 + 4) = v224;
      v149 = (const char *)n.m128i_i64[1];
      memmove(v223, (const void *)n.m128i_i64[1], v157);
      *(_BYTE *)(*((_QWORD *)v151 + 3) + v157) = 0;
    }
    else
    {
      *((_QWORD *)v151 + 4) = 0;
    }
    n.m128i_i64[1] = 0;
    v158 = *((_QWORD *)v151 + 1);
    if ( v158 )
    {
      v214 = (void *)qalloc_or_throw(*((_QWORD *)v151 + 1), v149, v148, v150, v130, v155);
      v149 = *(const char **)v151;
      n.m128i_i64[1] = (__int64)v214;
      memcpy(v214, v149, v158);
    }
    v159 = *((_QWORD *)v151 + 4);
    v160 = nullptr;
    n.m128i_i64[0] = v159;
    if ( v159 )
    {
      v160 = (void *)qalloc_or_throw(v159, v149, v148, v150, v130, v155);
      memcpy(v160, *((const void **)v151 + 3), n.m128i_u64[0]);
    }
    v161 = *((_QWORD *)v151 + 6);
    v162 = v7[19];
    v163 = v7[18];
    v260 = v161;
    v164 = v162 + 1;
    if ( v7[20] >= (unsigned __int64)(v162 + 1) )
      goto LABEL_153;
    goto LABEL_181;
  }
  if ( !v32 )
  {
    v35 = a1[1].m128i_i64[1];
    v167 = 1;
LABEL_156:
    v168 = a1[2].m128i_u64[1];
    v169 = v35;
    v259 = 1;
    p_src = (unsigned __int64)&v259;
    if ( v168 < v167 )
    {
      n.m128i_i64[0] = v30;
      v211 = qvector_reserve(&a1[1].m128i_u64[1], v35, v167, 4);
      a1[1].m128i_i64[1] = v211;
      v169 = v211;
      v31 = v244;
      v32 = a1[2].m128i_u64[0];
      v30 = n.m128i_i64[0];
    }
    *(_DWORD *)(v169 + 4 * v32) = 1;
    v170 = a1[2].m128i_i64[0] + 1;
    a1[2].m128i_i64[0] = v170;
    if ( (v30 & (v10 ^ v31)) != 0 )
    {
      ++*(_DWORD *)(a1[1].m128i_i64[1] + 4 * v170 - 4);
      v171 = a1->m128i_i64[1];
      v172 = a1->m128i_i64[0];
      if ( a1[1].m128i_i64[0] < (unsigned __int64)(v171 + 1) )
      {
        v244 = v31;
        n.m128i_i64[0] = v30;
        v172 = qvector_reserve(a1, v172, v171 + 1, 56);
        v31 = v244;
        v30 = n.m128i_i64[0];
        a1->m128i_i64[0] = v172;
        v171 = a1->m128i_i64[1];
      }
      v244 = v30;
      v173 = v172 + 56 * v171;
      v174 = "MM_%llXh_%s";
      *(_QWORD *)v173 = 0;
      *(_QWORD *)(v173 + 24) = 0;
      *(_OWORD *)(v173 + 8) = 0;
      *(_OWORD *)(v173 + 32) = 0;
      ++a1->m128i_i64[1];
      *(_QWORD *)(v173 + 48) = v30 & v31;
      n.m128i_i64[0] = v173;
      sub_3573A0((char **)v173);
      v177 = n.m128i_i64[0];
      v178 = nullptr;
      v30 = v244;
      v179 = *(_QWORD *)(n.m128i_i64[0] + 8);
      if ( v179 )
      {
        v178 = (void *)qalloc_or_throw(*(_QWORD *)(n.m128i_i64[0] + 8), "MM_%llXh_%s", v175, v176);
        v174 = *(const char **)n.m128i_i64[0];
        memcpy(v178, *(const void **)n.m128i_i64[0], v179);
        v30 = v244;
        v177 = n.m128i_i64[0];
      }
      v244 = 0;
      v180 = *(_QWORD *)(v177 + 32);
      n.m128i_i64[0] = v180;
      if ( v180 )
      {
        v248 = v30;
        v246.m128i_i64[0] = v177;
        v244 = qalloc_or_throw(v180, v174, v175, v176, v177, v30);
        memcpy((void *)v244, *(const void **)(v246.m128i_i64[0] + 24), n.m128i_u64[0]);
        v30 = v248;
        v177 = v246.m128i_i64[0];
      }
      v167 = *(_QWORD *)(v177 + 48);
      v181 = v7[19];
      v182 = v7[18];
      v260 = v167;
      if ( v7[20] < (unsigned __int64)(v181 + 1) )
      {
        v248 = v30;
        v246.m128i_i64[0] = v167;
        v231 = qvector_reserve(v7 + 18, v182, v181 + 1, 56);
        v7[18] = v231;
        v182 = v231;
        v30 = v248;
        v181 = v7[19];
        v167 = v246.m128i_i64[0];
      }
      v183 = v244;
      v184 = v182 + 56 * v181;
      *(__m128i *)(v184 + 8) = _mm_unpacklo_epi64((__m128i)v179, (__m128i)v179);
      v185 = _mm_loadl_epi64(&n);
      *(_QWORD *)v184 = v178;
      *(_QWORD *)(v184 + 24) = v183;
      *(_QWORD *)(v184 + 48) = v167;
      *(__m128i *)(v184 + 32) = _mm_unpacklo_epi64(v185, v185);
      ++v7[19];
    }
    v186 = a1->m128i_i64[1];
    v187 = (const char *)a1->m128i_i64[0];
    if ( a1[1].m128i_i64[0] < (unsigned __int64)(v186 + 1) )
    {
      n.m128i_i64[0] = v30;
      v210 = qvector_reserve(a1, v187, v186 + 1, 56);
      v186 = a1->m128i_i64[1];
      v30 = n.m128i_i64[0];
      a1->m128i_i64[0] = v210;
      v187 = (const char *)v210;
    }
    v188 = 7 * v186;
    v189 = (char *)&v187[56 * v186];
    *(_QWORD *)v189 = 0;
    *((_QWORD *)v189 + 3) = 0;
    *(_OWORD *)(v189 + 8) = 0;
    *((_OWORD *)v189 + 2) = 0;
    ++a1->m128i_i64[1];
    if ( v9 && (n.m128i_i64[0] = v30, v190 = strlen(v9), v30 = n.m128i_i64[0], (v191 = v190) != 0) )
    {
      v219 = *(char **)v189;
      v220 = v190 + 1;
      if ( *((_QWORD *)v189 + 2) < v190 + 1 )
      {
        v236 = *(char **)v189;
        v244 = n.m128i_i64[0];
        n.m128i_i64[0] = v190 + 1;
        v237 = qvector_reserve(v189, v236, v220, 1);
        v30 = v244;
        v220 = n.m128i_i64[0];
        *(_QWORD *)v189 = v237;
        v219 = (char *)v237;
      }
      *((_QWORD *)v189 + 1) = v220;
      v187 = v9;
      n.m128i_i64[0] = v30;
      memmove(v219, v9, v191);
      v30 = n.m128i_i64[0];
      *(_BYTE *)(*(_QWORD *)v189 + v191) = 0;
    }
    else
    {
      *((_QWORD *)v189 + 1) = 0;
    }
    v192 = (const char *)n.m128i_i64[1];
    v193 = v10 & v30;
    *((_QWORD *)v189 + 6) = v193;
    if ( v192 && (v194 = strlen(v192), (v195 = v194) != 0) )
    {
      v217 = *((void **)v189 + 3);
      v218 = v194 + 1;
      if ( *((_QWORD *)v189 + 5) < v194 + 1 )
      {
        v235 = qvector_reserve(v189 + 24, *((_QWORD *)v189 + 3), v218, 1);
        *((_QWORD *)v189 + 3) = v235;
        v217 = (void *)v235;
      }
      *((_QWORD *)v189 + 4) = v218;
      v187 = (const char *)n.m128i_i64[1];
      memmove(v217, (const void *)n.m128i_i64[1], v195);
      *(_BYTE *)(*((_QWORD *)v189 + 3) + v195) = 0;
    }
    else
    {
      *((_QWORD *)v189 + 4) = 0;
    }
    n.m128i_i64[1] = 0;
    v158 = *((_QWORD *)v189 + 1);
    if ( v158 )
    {
      v213 = (void *)qalloc_or_throw(*((_QWORD *)v189 + 1), v187, v186, v188, v167, v193);
      v187 = *(const char **)v189;
      n.m128i_i64[1] = (__int64)v213;
      memcpy(v213, v187, v158);
    }
    v196 = *((_QWORD *)v189 + 4);
    v160 = nullptr;
    n.m128i_i64[0] = v196;
    if ( v196 )
    {
      v160 = (void *)qalloc_or_throw(v196, v187, v186, v188, v167, v193);
      memcpy(v160, *((const void **)v189 + 3), n.m128i_u64[0]);
    }
    v161 = *((_QWORD *)v189 + 6);
    v162 = v7[19];
    v163 = v7[18];
    v260 = v161;
    v164 = v162 + 1;
    if ( v7[20] >= (unsigned __int64)(v162 + 1) )
      goto LABEL_153;
LABEL_181:
    v244 = v161;
    v197 = qvector_reserve(v7 + 18, v163, v164, 56);
    v7[18] = v197;
    v163 = v197;
    v161 = v244;
    v162 = v7[19];
LABEL_153:
    v165 = v163 + 56 * v162;
    *(_QWORD *)v165 = n.m128i_i64[1];
    *(_QWORD *)(v165 + 24) = v160;
    *(__m128i *)(v165 + 8) = _mm_unpacklo_epi64((__m128i)v158, (__m128i)v158);
    v166 = _mm_loadl_epi64(&n);
    *(_QWORD *)(v165 + 48) = v161;
    *(__m128i *)(v165 + 32) = _mm_unpacklo_epi64(v166, v166);
    ++v7[19];
    goto LABEL_64;
  }
  v33 = 0;
  v34 = 0;
  while ( 1 )
  {
    v37 = v244 ^ *(_QWORD *)(a1->m128i_i64[0] + 56 * v34 + 48);
    if ( (p_src & v37) == 0 )
      break;
    v35 = a1[1].m128i_i64[1];
    v36 = *(int *)(v35 + 4 * v33++);
    v34 += v36;
    if ( v33 == v32 )
      goto LABEL_155;
  }
  if ( v33 >= v32 )
  {
    v35 = a1[1].m128i_i64[1];
LABEL_155:
    v167 = v32 + 1;
    goto LABEL_156;
  }
  src = nullptr;
  dest = nullptr;
  *(_OWORD *)v255 = 0;
  v257 = 0;
  if ( v9 )
  {
    v244 = p_src;
    p_src = v33;
    v38 = strlen(v9);
    v33 = p_src;
    v30 = v244;
    v39 = v38;
    if ( v38 )
    {
      v248 = v244;
      v246.m128i_i64[0] = p_src;
      p_src = (unsigned __int64)&src;
      v244 = v38 + 1;
      v37 = (__int64)v9;
      src = (void *)qvector_reserve(&src, 0, v38 + 1, 1);
      v255[0] = v244;
      memmove(src, v9, v39);
      v30 = v248;
      v33 = v246.m128i_i64[0];
      *((_BYTE *)src + v39) = 0;
    }
  }
  v258 = (void *)(v10 & v30);
  if ( n.m128i_i64[1] && (p_src = v33, v40 = strlen((const char *)n.m128i_i64[1]), v33 = p_src, (v41 = v40) != 0) )
  {
    v221 = dest;
    v222 = v40 + 1;
    if ( *((_QWORD *)&v257 + 1) < v40 + 1 )
    {
      v244 = p_src;
      p_src = (unsigned __int64)&src;
      dest = (void *)qvector_reserve(&dest, dest, v40 + 1, 1);
      v33 = v244;
      v221 = dest;
    }
    v37 = n.m128i_i64[1];
    p_src = v33;
    *(_QWORD *)&v257 = v222;
    memmove(v221, (const void *)n.m128i_i64[1], v41);
    v33 = p_src;
    *((_BYTE *)dest + v41) = 0;
  }
  else
  {
    *(_QWORD *)&v257 = 0;
  }
  v42 = a1->m128i_i64[0];
  n.m128i_i64[1] = 4 * v33;
  v43 = v255[0];
  v44 = v34 + *(int *)(a1[1].m128i_i64[1] + 4 * v33);
  if ( n.m128i_i64[0] < v34 || n.m128i_i64[0] >= v44 )
  {
    v45 = nullptr;
    v46 = (_QWORD *)(v42 + 56 * v44);
    if ( v255[0] )
    {
      p_src = (unsigned __int64)&src;
      v230 = (void *)qalloc_or_throw(v255[0], (const char *)v37);
      v37 = (__int64)src;
      v45 = v230;
      memcpy(v230, src, v43);
    }
    p_src = 0;
    n.m128i_i64[0] = v257;
    if ( (_QWORD)v257 )
    {
      p_src = qalloc_or_throw(v257, (const char *)v37);
      memcpy((void *)p_src, dest, n.m128i_u64[0]);
    }
    v47 = (unsigned __int64)v258;
    v48 = a1->m128i_i64[0];
    v49 = a1->m128i_i64[1];
    v260 = (unsigned __int64)v258;
    v50 = (char *)v46 - v48;
    v51 = v49 + 1;
    if ( a1[1].m128i_i64[0] >= (unsigned __int64)(v49 + 1) )
      goto LABEL_54;
  }
  else
  {
    v45 = nullptr;
    v46 = (_QWORD *)(v42 + 56 * n.m128i_i64[0]);
    if ( v255[0] )
    {
      p_src = (unsigned __int64)&src;
      v229 = (void *)qalloc_or_throw(v255[0], (const char *)v37);
      v37 = (__int64)src;
      v45 = v229;
      memcpy(v229, src, v43);
    }
    p_src = 0;
    n.m128i_i64[0] = v257;
    if ( (_QWORD)v257 )
    {
      p_src = qalloc_or_throw(v257, (const char *)v37);
      memcpy((void *)p_src, dest, n.m128i_u64[0]);
    }
    v47 = (unsigned __int64)v258;
    v48 = a1->m128i_i64[0];
    v49 = a1->m128i_i64[1];
    v260 = (unsigned __int64)v258;
    v50 = (char *)v46 - v48;
    v51 = v49 + 1;
    if ( a1[1].m128i_i64[0] >= (unsigned __int64)(v49 + 1) )
      goto LABEL_54;
  }
  v246.m128i_i64[0] = (__int64)v258;
  v244 = (unsigned __int64)v46 - v48;
  v204 = qvector_reserve(a1, v48, v51, 56);
  v50 = (char *)v46 - v48;
  v47 = v246.m128i_i64[0];
  a1->m128i_i64[0] = v204;
  v46 = (_QWORD *)((char *)v46 + v204 - v48);
  v49 = a1->m128i_i64[1];
LABEL_54:
  v52 = (const char *)v46;
  v244 = v47;
  memmove(v46 + 7, v46, 56 * v49 - (_QWORD)v50);
  *v46 = v45;
  *(__m128i *)(v46 + 1) = _mm_unpacklo_epi64((__m128i)v43, (__m128i)v43);
  v46[3] = p_src;
  v56 = _mm_loadl_epi64(&n);
  *((__m128i *)v46 + 2) = _mm_unpacklo_epi64(v56, v56);
  v57 = v244;
  v46[6] = v244;
  v58 = nullptr;
  v59 = (_DWORD *)(a1[1].m128i_i64[1] + n.m128i_i64[1]);
  ++a1->m128i_i64[1];
  ++*v59;
  v60 = v255[0];
  if ( v255[0] )
  {
    p_src = (unsigned __int64)&src;
    v212 = (void *)qalloc_or_throw(v255[0], v52, v53, v54, v57, v55);
    v52 = (const char *)src;
    v58 = v212;
    memcpy(v212, src, v60);
  }
  v61 = nullptr;
  n.m128i_i64[0] = v257;
  if ( (_QWORD)v257 )
  {
    v61 = (void *)qalloc_or_throw(v257, v52, v53, v54, v57, v55);
    memcpy(v61, dest, n.m128i_u64[0]);
  }
  v62 = (__int64)v258;
  v63 = v7[19];
  v64 = v7[18];
  v260 = (unsigned __int64)v258;
  if ( v7[20] < (unsigned __int64)(v63 + 1) )
  {
    n.m128i_i64[1] = (__int64)v258;
    v209 = qvector_reserve(v7 + 18, v64, v63 + 1, 56);
    v7[18] = v209;
    v64 = v209;
    v62 = n.m128i_i64[1];
    v63 = v7[19];
  }
  v65 = v64 + 56 * v63;
  *(__m128i *)(v65 + 8) = _mm_unpacklo_epi64((__m128i)v60, (__m128i)v60);
  v66 = _mm_loadl_epi64(&n);
  *(_QWORD *)v65 = v58;
  *(_QWORD *)(v65 + 24) = v61;
  *(_QWORD *)(v65 + 48) = v62;
  *(__m128i *)(v65 + 32) = _mm_unpacklo_epi64(v66, v66);
  v67 = dest;
  ++v7[19];
  if ( v67 )
  {
    *(_QWORD *)&v257 = 0;
    qfree(v67);
  }
  if ( src )
  {
    v255[0] = 0;
    qfree(src);
  }
LABEL_64:
  v68 = sub_401980((__int64)a1);
  if ( !v68 )
  {
    if ( v246.m128i_i64[1] )
      qfree((void *)v246.m128i_i64[1]);
    if ( v243 )
    {
      v69 = 0;
      v70 = v245;
      v71 = (void **)v243;
      if ( v245 )
      {
        do
        {
          v72 = v71[3];
          if ( v72 )
          {
            v71[4] = nullptr;
            qfree(v72);
          }
          v73 = *v71;
          if ( *v71 )
          {
            v71[1] = nullptr;
            qfree(v73);
          }
          ++v69;
          v71 += 7;
        }
        while ( v70 != v69 );
      }
      qfree(v243);
    }
    goto LABEL_75;
  }
  v118 = _mm_loadu_si128(a1);
  v119 = _mm_loadu_si128(a1 + 1);
  v120 = _mm_loadu_si128(a1 + 2);
  *a1 = _mm_load_si128(&v250);
  v121 = _mm_load_si128(&v251);
  v122 = a1[3].m128i_i64[0];
  v123 = v253;
  v251 = v119;
  a1[1] = v121;
  v124 = _mm_load_si128(&v252);
  v250 = v118;
  v264 = v122;
  a1[3].m128i_i64[0] = v123;
  v253 = v122;
  v261 = v118;
  v262 = v119;
  v263 = v120;
  a1[2] = v124;
  v252 = v120;
  if ( v119.m128i_i64[1] )
    qfree((void *)v119.m128i_i64[1]);
  if ( v118.m128i_i64[0] )
  {
    v125 = v118.m128i_i64[0];
    v126 = 0;
    if ( v118.m128i_i64[1] )
    {
      do
      {
        v127 = *(void **)(v125 + 24);
        if ( v127 )
        {
          *(_QWORD *)(v125 + 32) = 0;
          qfree(v127);
        }
        v128 = *(void **)v125;
        if ( *(_QWORD *)v125 )
        {
          *(_QWORD *)(v125 + 8) = 0;
          qfree(v128);
        }
        ++v126;
        v125 += 56;
      }
      while ( v126 != v118.m128i_i64[1] );
    }
    qfree((void *)v118.m128i_i64[0]);
  }
  return v68;
}

