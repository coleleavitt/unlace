__int64 __fastcall sub_4172C0(__m128i *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, int a5, __int64 a6)
{
  _QWORD *v7; // rbp
  bool v8; // zf
  const char *v9; // rbx
  unsigned __int64 v10; // r12
  char v11; // al
  __int64 v12; // rdx
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
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r9
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdx
  size_t v37; // rax
  size_t v38; // r14
  size_t v39; // rax
  size_t v40; // rbx
  __int64 v41; // rdx
  size_t v42; // rbx
  unsigned __int64 v43; // rax
  void *v44; // r13
  _QWORD *v45; // r14
  unsigned __int64 v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rax
  char *v49; // r9
  __int64 v50; // rdx
  __m128i v51; // xmm0
  void *v52; // r14
  _DWORD *v53; // rax
  size_t v54; // r13
  void *v55; // rbx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rax
  __m128i v60; // xmm0
  void *v61; // rdi
  unsigned int v62; // r13d
  __int64 v63; // r13
  __int64 v64; // r14
  void **v65; // rbx
  void *v66; // rdi
  void *v67; // rdi
  char v68; // al
  int v69; // eax
  unsigned __int64 v70; // rax
  size_t v72; // rax
  size_t v73; // r13
  _BOOL4 v74; // ebx
  __int64 v75; // rsi
  size_t v76; // rax
  size_t v77; // rbx
  size_t v78; // rbx
  void *v79; // r14
  _QWORD *v80; // r13
  void *v81; // r8
  __int64 v82; // rsi
  __int64 v83; // rax
  char *v84; // r9
  __int64 v85; // rax
  unsigned __int64 v86; // r8
  void *v87; // r14
  __m128i v88; // xmm0
  size_t v89; // r13
  void *v90; // rbx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rax
  __m128i v95; // xmm0
  void *v96; // rdi
  unsigned __int8 v97; // al
  int v98; // eax
  void *v99; // rdi
  size_t v100; // r13
  __int64 v101; // rax
  __m128i v102; // xmm0
  __m128i v103; // xmm2
  __m128i v104; // xmm1
  __m128i v105; // xmm3
  __int64 v106; // rax
  __int64 v107; // rdx
  __m128i v108; // xmm3
  __int64 v109; // rbx
  __int64 v110; // rbp
  void *v111; // rdi
  void *v112; // rdi
  unsigned __int64 v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rsi
  __int64 v118; // r13
  __int64 v119; // rax
  __int64 v120; // rax
  void *v121; // r14
  unsigned __int64 v122; // r8
  __int64 v123; // rax
  __int64 v124; // rsi
  __m128i v125; // xmm0
  unsigned __int64 v126; // rcx
  __int64 v127; // rax
  __m128i v128; // xmm0
  __int64 v129; // rdx
  __int64 v130; // rsi
  __int64 v131; // r14
  size_t v132; // rax
  size_t v133; // r13
  const char *v134; // rax
  size_t v135; // rax
  size_t v136; // rbx
  size_t v137; // r13
  __int64 v138; // rax
  void *v139; // rbx
  unsigned __int64 v140; // r8
  __int64 v141; // rax
  __int64 v142; // rsi
  __int64 v143; // rdx
  __int64 v144; // rax
  __m128i v145; // xmm0
  unsigned __int64 v146; // r8
  unsigned __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rsi
  __int64 v152; // r8
  __int64 v153; // r8
  void *v154; // r13
  size_t v155; // r14
  __int64 v156; // rax
  __int64 v157; // r8
  __int64 v158; // rax
  __int64 v159; // rsi
  unsigned __int64 v160; // rcx
  __int64 v161; // rax
  __m128i v162; // xmm0
  __int64 v163; // rdx
  __int64 v164; // rsi
  __int64 v165; // r14
  size_t v166; // rax
  size_t v167; // r13
  const char *v168; // rax
  size_t v169; // rax
  size_t v170; // rbx
  __int64 v171; // rax
  __int64 v172; // rax
  void *v173; // r14
  void *v174; // r13
  __int64 v175; // r8
  __int64 v176; // rdx
  __int64 v177; // rsi
  __int64 v178; // rax
  __m128i v179; // xmm0
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  void *v189; // rax
  const void *v190; // rsi
  void *v191; // rax
  const void *v192; // rsi
  __int64 v193; // rax
  __int64 v194; // rax
  void *v195; // rdi
  size_t v196; // r13
  void *v197; // rdi
  __int64 v198; // rdx
  void *v199; // rdi
  size_t v200; // r14
  void *v201; // rdi
  size_t v202; // r13
  void *v203; // rdi
  __int64 v204; // rdx
  __int64 v205; // rax
  __int64 v206; // rax
  size_t v207; // r14
  void *v208; // rax
  char *v209; // rsi
  __int64 v210; // rax
  __int64 v211; // rax
  void *v212; // rsi
  __int64 v213; // rax
  void *v214; // rsi
  __int64 v215; // rax
  __int64 v216; // rax
  __m128i n; // [rsp+8h] [rbp-190h] BYREF
  unsigned __int64 p_src; // [rsp+18h] [rbp-180h]
  void *v219; // [rsp+20h] [rbp-178h]
  unsigned __int64 v220; // [rsp+28h] [rbp-170h]
  __int64 v221; // [rsp+30h] [rbp-168h]
  __m128i v222; // [rsp+38h] [rbp-160h] BYREF
  __m128i *v223; // [rsp+48h] [rbp-150h]
  unsigned __int64 v224; // [rsp+50h] [rbp-148h]
  __int64 v225; // [rsp+58h] [rbp-140h]
  __m128i v226; // [rsp+60h] [rbp-138h] BYREF
  __m128i v227; // [rsp+70h] [rbp-128h] BYREF
  __m128i v228; // [rsp+80h] [rbp-118h] BYREF
  __int64 v229; // [rsp+90h] [rbp-108h]
  void *src; // [rsp+A0h] [rbp-F8h] BYREF
  size_t v231[2]; // [rsp+A8h] [rbp-F0h]
  void *dest; // [rsp+B8h] [rbp-E0h] BYREF
  __int128 v233; // [rsp+C0h] [rbp-D8h]
  void *v234; // [rsp+D0h] [rbp-C8h]
  int v235; // [rsp+E0h] [rbp-B8h] BYREF
  unsigned __int64 v236; // [rsp+110h] [rbp-88h]
  __m128i v237; // [rsp+120h] [rbp-78h]
  __m128i v238; // [rsp+130h] [rbp-68h]
  __m128i v239; // [rsp+140h] [rbp-58h]
  __int64 v240; // [rsp+150h] [rbp-48h]
  unsigned __int64 v241; // [rsp+158h] [rbp-40h]

  v7 = a2;
  LODWORD(v219) = a5;
  n.m128i_i64[0] = a6;
  v241 = __readfsqword(0x28u);
  v8 = a2[5] == 0;
  *(_DWORD *)a2 = 0;
  v222.m128i_i64[0] = (__int64)haystack;
  if ( !v8 )
    v222.m128i_i64[0] = a2[4];
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
    v62 = -3;
    set_error_string(0, v9);
    return v62;
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
      v220 = (unsigned __int64)v7;
      v20 = v17;
      v221 = v15;
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
          v7 = (_QWORD *)v220;
          v10 = p_src;
          v23 = v19;
          v15 = v221;
          goto LABEL_16;
        }
      }
      v23 = v19;
      v24 = v20;
      v7 = (_QWORD *)v220;
      v10 = p_src;
      v15 = v221;
      if ( v24 - v23 >= 0 )
      {
        v62 = -21;
        set_error_string(0, v9);
        return v62;
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
            v62 = -30;
            set_error_data(0, v10, v12, v13, v14, v22);
            return v62;
          }
        }
      }
    }
  }
  if ( ((unsigned __int8)v219 & 0x20) == 0 )
  {
    v16 = (unsigned __int64)v9;
    p_src = v15;
    v98 = sub_415A10((__int64)a1, (__int64)v9);
    v15 = p_src;
    if ( v98 )
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
    *(_OWORD *)v231 = 0;
    v233 = 0;
    if ( v9 )
    {
      v72 = strlen(v9);
      v73 = v72;
      if ( v72 )
      {
        p_src = (unsigned __int64)&src;
        v219 = (void *)(v72 + 1);
        v16 = (unsigned __int64)v9;
        src = (void *)qvector_reserve(&src, 0, v72 + 1, 1);
        v231[0] = (size_t)v219;
        memmove(src, v9, v73);
        *((_BYTE *)src + v73) = 0;
      }
    }
    p_src = (unsigned __int64)&src;
    v74 = sub_535940(a1, v16, v12, v13, v14) != 2;
    if ( (a1[3].m128i_i8[4] & 7) != 0 )
    {
      v75 = (unsigned int)(1 << ((a1[3].m128i_i8[4] & 7) - 1));
    }
    else
    {
      p_src = (unsigned __int64)&src;
      v75 = (unsigned __int8)getinf(61);
    }
    p_src = (unsigned __int64)&src;
    v234 = (void *)extend_sign(v10, v75, v74);
    if ( n.m128i_i64[1] && (v76 = strlen((const char *)n.m128i_i64[1]), (v77 = v76) != 0) )
    {
      v99 = dest;
      v100 = v76 + 1;
      if ( *((_QWORD *)&v233 + 1) < v76 + 1 )
      {
        p_src = (unsigned __int64)&src;
        dest = (void *)qvector_reserve(&dest, dest, v100, 1);
        v99 = dest;
      }
      *(_QWORD *)&v233 = v100;
      memmove(v99, (const void *)n.m128i_i64[1], v77);
      *((_BYTE *)dest + v77) = 0;
    }
    else
    {
      *(_QWORD *)&v233 = 0;
    }
    v78 = v231[0];
    if ( n.m128i_i64[0] == -1 )
    {
      v173 = nullptr;
      if ( v231[0] )
      {
        p_src = (unsigned __int64)&src;
        v173 = (void *)qalloc_or_throw(v231[0]);
        memcpy(v173, src, v78);
      }
      v174 = nullptr;
      n.m128i_i64[0] = v233;
      if ( (_QWORD)v233 )
      {
        v174 = (void *)qalloc_or_throw(v233);
        memcpy(v174, dest, n.m128i_u64[0]);
      }
      v175 = (__int64)v234;
      v176 = a1->m128i_i64[1];
      v177 = a1->m128i_i64[0];
      v236 = (unsigned __int64)v234;
      if ( a1[1].m128i_i64[0] < (unsigned __int64)(v176 + 1) )
      {
        n.m128i_i64[1] = (__int64)v234;
        v205 = qvector_reserve(a1, v177, v176 + 1, 56);
        v176 = a1->m128i_i64[1];
        v175 = n.m128i_i64[1];
        a1->m128i_i64[0] = v205;
        v177 = v205;
      }
      v178 = v177 + 56 * v176;
      *(__m128i *)(v178 + 8) = _mm_unpacklo_epi64((__m128i)v78, (__m128i)v78);
      v179 = _mm_loadl_epi64(&n);
      *(_QWORD *)v178 = v173;
      v87 = nullptr;
      *(_QWORD *)(v178 + 24) = v174;
      *(_QWORD *)(v178 + 48) = v175;
      *(__m128i *)(v178 + 32) = _mm_unpacklo_epi64(v179, v179);
      v89 = v231[0];
      ++a1->m128i_i64[1];
      if ( !v89 )
      {
LABEL_98:
        v90 = nullptr;
        n.m128i_i64[0] = v233;
        if ( (_QWORD)v233 )
        {
          v90 = (void *)qalloc_or_throw(v233);
          memcpy(v90, dest, n.m128i_u64[0]);
        }
        v91 = (__int64)v234;
        v92 = v7[19];
        v93 = v7[18];
        v236 = (unsigned __int64)v234;
        if ( v7[20] < (unsigned __int64)(v92 + 1) )
        {
          n.m128i_i64[1] = (__int64)v234;
          v180 = qvector_reserve(v7 + 18, v93, v92 + 1, 56);
          v7[18] = v180;
          v93 = v180;
          v91 = n.m128i_i64[1];
          v92 = v7[19];
        }
        v94 = v93 + 56 * v92;
        *(__m128i *)(v94 + 8) = _mm_unpacklo_epi64((__m128i)v89, (__m128i)v89);
        v95 = _mm_loadl_epi64(&n);
        *(_QWORD *)v94 = v87;
        *(_QWORD *)(v94 + 24) = v90;
        *(_QWORD *)(v94 + 48) = v91;
        *(__m128i *)(v94 + 32) = _mm_unpacklo_epi64(v95, v95);
        v96 = dest;
        ++v7[19];
        if ( v96 )
        {
          *(_QWORD *)&v233 = 0;
          qfree(v96);
        }
        if ( src )
        {
          v231[0] = 0;
          qfree(src);
          v68 = a1[3].m128i_i8[4] & 7;
          if ( v68 )
            goto LABEL_76;
          goto LABEL_106;
        }
LABEL_75:
        v68 = a1[3].m128i_i8[4] & 7;
        if ( v68 )
        {
LABEL_76:
          v69 = 1 << (v68 - 1);
          goto LABEL_77;
        }
LABEL_106:
        v69 = (unsigned __int8)getinf(61);
LABEL_77:
        v70 = (unsigned int)(8 * v69 - 1);
        if ( (unsigned __int64)(int)v70 <= 0x3F
          && _bittest64((const __int64 *)&v10, v70)
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
      v79 = nullptr;
      v80 = (_QWORD *)(a1->m128i_i64[0] + 56 * n.m128i_i64[0]);
      if ( v231[0] )
      {
        p_src = (unsigned __int64)&src;
        v79 = (void *)qalloc_or_throw(v231[0]);
        memcpy(v79, src, v78);
      }
      n = (__m128i)(unsigned __int64)v233;
      if ( (_QWORD)v233 )
      {
        n.m128i_i64[1] = qalloc_or_throw(v233);
        memcpy((void *)n.m128i_i64[1], dest, n.m128i_u64[0]);
      }
      v81 = v234;
      v82 = a1->m128i_i64[0];
      v83 = a1->m128i_i64[1];
      v236 = (unsigned __int64)v234;
      v84 = (char *)v80 - v82;
      if ( a1[1].m128i_i64[0] < (unsigned __int64)(v83 + 1) )
      {
        v219 = v234;
        p_src = (unsigned __int64)v80 - v82;
        v101 = qvector_reserve(a1, v82, v83 + 1, 56);
        v84 = (char *)v80 - v82;
        v81 = v219;
        a1->m128i_i64[0] = v101;
        v80 = (_QWORD *)((char *)v80 + v101 - v82);
        v83 = a1->m128i_i64[1];
      }
      p_src = (unsigned __int64)v81;
      memmove(v80 + 7, v80, 56 * v83 - (_QWORD)v84);
      v85 = n.m128i_i64[1];
      v86 = p_src;
      *v80 = v79;
      v87 = nullptr;
      *(__m128i *)(v80 + 1) = _mm_unpacklo_epi64((__m128i)v78, (__m128i)v78);
      v88 = _mm_loadl_epi64(&n);
      v80[3] = v85;
      v80[6] = v86;
      *((__m128i *)v80 + 2) = _mm_unpacklo_epi64(v88, v88);
      v89 = v231[0];
      ++a1->m128i_i64[1];
      if ( !v89 )
        goto LABEL_98;
    }
    p_src = (unsigned __int64)&src;
    v87 = (void *)qalloc_or_throw(v89);
    memcpy(v87, src, v89);
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
    v97 = getinf(61);
    v15 = p_src;
    v27 = v97;
  }
  v28 = (unsigned int)(8 * v27);
  v29 = -1;
  if ( (int)v28 <= 63 )
    v29 = (1LL << v28) - 1;
  if ( v10 && (v29 & v10 & v15) == 0 )
  {
    v62 = -18;
    set_error_data(1, v15, v12, v28, v14, v29);
    set_error_data(0, v10, v182, v183, v184, v185);
    return v62;
  }
  v220 = v15;
  p_src = v29;
  v226 = 0u;
  v227.m128i_i64[1] = 0;
  v223 = &v226;
  sub_414440((__int64)&v226, (__int64)a1);
  v8 = a1->m128i_i64[1] == 0;
  v30 = p_src;
  v31 = v220;
  v221 = v226.m128i_i64[1];
  v219 = (void *)v226.m128i_i64[0];
  v222.m128i_i64[1] = v227.m128i_i64[1];
  v32 = a1[2].m128i_u64[0];
  if ( v8 )
  {
    v113 = a1[2].m128i_u64[1];
    v114 = a1[1].m128i_i64[1];
    v235 = 1;
    p_src = (unsigned __int64)&v235;
    if ( v113 < v32 + 1 )
    {
      n.m128i_i64[0] = v30;
      v194 = qvector_reserve(&a1[1].m128i_u64[1], v114, v32 + 1, 4);
      a1[1].m128i_i64[1] = v194;
      v114 = v194;
      v31 = v220;
      v32 = a1[2].m128i_u64[0];
      v30 = n.m128i_i64[0];
    }
    *(_DWORD *)(v114 + 4 * v32) = 1;
    v115 = a1[2].m128i_i64[0] + 1;
    a1[2].m128i_i64[0] = v115;
    if ( (v30 & (v10 ^ v31)) != 0 )
    {
      ++*(_DWORD *)(a1[1].m128i_i64[1] + 4 * v115 - 4);
      v116 = a1->m128i_i64[1];
      v117 = a1->m128i_i64[0];
      if ( a1[1].m128i_i64[0] < (unsigned __int64)(v116 + 1) )
      {
        v220 = v31;
        n.m128i_i64[0] = v30;
        v117 = qvector_reserve(a1, v117, v116 + 1, 56);
        v31 = v220;
        v30 = n.m128i_i64[0];
        a1->m128i_i64[0] = v117;
        v116 = a1->m128i_i64[1];
      }
      n.m128i_i64[0] = v30;
      v118 = v117 + 56 * v116;
      *(_QWORD *)v118 = 0;
      *(_QWORD *)(v118 + 24) = 0;
      *(_OWORD *)(v118 + 8) = 0;
      *(_OWORD *)(v118 + 32) = 0;
      ++a1->m128i_i64[1];
      *(_QWORD *)(v118 + 48) = v30 & v31;
      sub_35A790((char **)v118);
      v119 = *(_QWORD *)(v118 + 8);
      v30 = n.m128i_i64[0];
      v220 = 0;
      v222.m128i_i64[0] = v119;
      if ( v119 )
      {
        v207 = v119;
        v208 = (void *)qalloc_or_throw(v119);
        v209 = *(char **)v118;
        v220 = (unsigned __int64)v208;
        memcpy(v208, v209, v207);
        v30 = n.m128i_i64[0];
      }
      v120 = *(_QWORD *)(v118 + 32);
      v121 = nullptr;
      n.m128i_i64[0] = v120;
      if ( v120 )
      {
        v224 = v30;
        v121 = (void *)qalloc_or_throw(v120);
        memcpy(v121, *(const void **)(v118 + 24), n.m128i_u64[0]);
        v30 = v224;
      }
      v122 = *(_QWORD *)(v118 + 48);
      v123 = v7[19];
      v124 = v7[18];
      v236 = v122;
      if ( v7[20] < (unsigned __int64)(v123 + 1) )
      {
        v225 = v30;
        v224 = v122;
        v210 = qvector_reserve(v7 + 18, v124, v123 + 1, 56);
        v7[18] = v210;
        v124 = v210;
        v30 = v225;
        v123 = v7[19];
        v122 = v224;
      }
      v125 = _mm_loadl_epi64(&v222);
      v126 = v220;
      v127 = v124 + 56 * v123;
      *(__m128i *)(v127 + 8) = _mm_unpacklo_epi64(v125, v125);
      v128 = _mm_loadl_epi64(&n);
      *(_QWORD *)v127 = v126;
      *(_QWORD *)(v127 + 24) = v121;
      *(_QWORD *)(v127 + 48) = v122;
      *(__m128i *)(v127 + 32) = _mm_unpacklo_epi64(v128, v128);
      ++v7[19];
    }
    v129 = a1->m128i_i64[1];
    v130 = a1->m128i_i64[0];
    if ( a1[1].m128i_i64[0] < (unsigned __int64)(v129 + 1) )
    {
      n.m128i_i64[0] = v30;
      v193 = qvector_reserve(a1, v130, v129 + 1, 56);
      v129 = a1->m128i_i64[1];
      v30 = n.m128i_i64[0];
      a1->m128i_i64[0] = v193;
      v130 = v193;
    }
    v131 = v130 + 56 * v129;
    *(_QWORD *)v131 = 0;
    *(_QWORD *)(v131 + 24) = 0;
    *(_OWORD *)(v131 + 8) = 0;
    *(_OWORD *)(v131 + 32) = 0;
    ++a1->m128i_i64[1];
    if ( v9 && (n.m128i_i64[0] = v30, v132 = strlen(v9), v30 = n.m128i_i64[0], (v133 = v132) != 0) )
    {
      v203 = *(void **)v131;
      v204 = v132 + 1;
      if ( *(_QWORD *)(v131 + 16) < v132 + 1 )
      {
        v214 = *(void **)v131;
        v220 = n.m128i_i64[0];
        n.m128i_i64[0] = v132 + 1;
        v215 = qvector_reserve(v131, v214, v204, 1);
        v30 = v220;
        v204 = n.m128i_i64[0];
        *(_QWORD *)v131 = v215;
        v203 = (void *)v215;
      }
      *(_QWORD *)(v131 + 8) = v204;
      n.m128i_i64[0] = v30;
      memmove(v203, v9, v133);
      v30 = n.m128i_i64[0];
      *(_BYTE *)(*(_QWORD *)v131 + v133) = 0;
    }
    else
    {
      *(_QWORD *)(v131 + 8) = 0;
    }
    v134 = (const char *)n.m128i_i64[1];
    *(_QWORD *)(v131 + 48) = v10 & v30;
    if ( v134 && (v135 = strlen(v134), (v136 = v135) != 0) )
    {
      v201 = *(void **)(v131 + 24);
      v202 = v135 + 1;
      if ( *(_QWORD *)(v131 + 40) < v135 + 1 )
      {
        v216 = qvector_reserve(v131 + 24, *(_QWORD *)(v131 + 24), v202, 1);
        *(_QWORD *)(v131 + 24) = v216;
        v201 = (void *)v216;
      }
      *(_QWORD *)(v131 + 32) = v202;
      memmove(v201, (const void *)n.m128i_i64[1], v136);
      *(_BYTE *)(*(_QWORD *)(v131 + 24) + v136) = 0;
    }
    else
    {
      *(_QWORD *)(v131 + 32) = 0;
    }
    n.m128i_i64[1] = 0;
    v137 = *(_QWORD *)(v131 + 8);
    if ( v137 )
    {
      v191 = (void *)qalloc_or_throw(*(_QWORD *)(v131 + 8));
      v192 = *(const void **)v131;
      n.m128i_i64[1] = (__int64)v191;
      memcpy(v191, v192, v137);
    }
    v138 = *(_QWORD *)(v131 + 32);
    v139 = nullptr;
    n.m128i_i64[0] = v138;
    if ( v138 )
    {
      v139 = (void *)qalloc_or_throw(v138);
      memcpy(v139, *(const void **)(v131 + 24), n.m128i_u64[0]);
    }
    v140 = *(_QWORD *)(v131 + 48);
    v141 = v7[19];
    v142 = v7[18];
    v236 = v140;
    v143 = v141 + 1;
    if ( v7[20] >= (unsigned __int64)(v141 + 1) )
      goto LABEL_153;
    goto LABEL_181;
  }
  if ( !v32 )
  {
    v35 = a1[1].m128i_i64[1];
    v146 = 1;
LABEL_156:
    v147 = a1[2].m128i_u64[1];
    v148 = v35;
    v235 = 1;
    p_src = (unsigned __int64)&v235;
    if ( v147 < v146 )
    {
      n.m128i_i64[0] = v30;
      v188 = qvector_reserve(&a1[1].m128i_u64[1], v35, v146, 4);
      a1[1].m128i_i64[1] = v188;
      v148 = v188;
      v31 = v220;
      v32 = a1[2].m128i_u64[0];
      v30 = n.m128i_i64[0];
    }
    *(_DWORD *)(v148 + 4 * v32) = 1;
    v149 = a1[2].m128i_i64[0] + 1;
    a1[2].m128i_i64[0] = v149;
    if ( (v30 & (v10 ^ v31)) != 0 )
    {
      ++*(_DWORD *)(a1[1].m128i_i64[1] + 4 * v149 - 4);
      v150 = a1->m128i_i64[1];
      v151 = a1->m128i_i64[0];
      if ( a1[1].m128i_i64[0] < (unsigned __int64)(v150 + 1) )
      {
        v220 = v31;
        n.m128i_i64[0] = v30;
        v151 = qvector_reserve(a1, v151, v150 + 1, 56);
        v31 = v220;
        v30 = n.m128i_i64[0];
        a1->m128i_i64[0] = v151;
        v150 = a1->m128i_i64[1];
      }
      v220 = v30;
      v152 = v151 + 56 * v150;
      *(_QWORD *)v152 = 0;
      *(_QWORD *)(v152 + 24) = 0;
      *(_OWORD *)(v152 + 8) = 0;
      *(_OWORD *)(v152 + 32) = 0;
      ++a1->m128i_i64[1];
      *(_QWORD *)(v152 + 48) = v30 & v31;
      n.m128i_i64[0] = v152;
      sub_35A790((char **)v152);
      v153 = n.m128i_i64[0];
      v154 = nullptr;
      v30 = v220;
      v155 = *(_QWORD *)(n.m128i_i64[0] + 8);
      if ( v155 )
      {
        v154 = (void *)qalloc_or_throw(*(_QWORD *)(n.m128i_i64[0] + 8));
        memcpy(v154, *(const void **)n.m128i_i64[0], v155);
        v30 = v220;
        v153 = n.m128i_i64[0];
      }
      v220 = 0;
      v156 = *(_QWORD *)(v153 + 32);
      n.m128i_i64[0] = v156;
      if ( v156 )
      {
        v224 = v30;
        v222.m128i_i64[0] = v153;
        v220 = qalloc_or_throw(v156);
        memcpy((void *)v220, *(const void **)(v222.m128i_i64[0] + 24), n.m128i_u64[0]);
        v30 = v224;
        v153 = v222.m128i_i64[0];
      }
      v157 = *(_QWORD *)(v153 + 48);
      v158 = v7[19];
      v159 = v7[18];
      v236 = v157;
      if ( v7[20] < (unsigned __int64)(v158 + 1) )
      {
        v224 = v30;
        v222.m128i_i64[0] = v157;
        v206 = qvector_reserve(v7 + 18, v159, v158 + 1, 56);
        v7[18] = v206;
        v159 = v206;
        v30 = v224;
        v158 = v7[19];
        v157 = v222.m128i_i64[0];
      }
      v160 = v220;
      v161 = v159 + 56 * v158;
      *(__m128i *)(v161 + 8) = _mm_unpacklo_epi64((__m128i)v155, (__m128i)v155);
      v162 = _mm_loadl_epi64(&n);
      *(_QWORD *)v161 = v154;
      *(_QWORD *)(v161 + 24) = v160;
      *(_QWORD *)(v161 + 48) = v157;
      *(__m128i *)(v161 + 32) = _mm_unpacklo_epi64(v162, v162);
      ++v7[19];
    }
    v163 = a1->m128i_i64[1];
    v164 = a1->m128i_i64[0];
    if ( a1[1].m128i_i64[0] < (unsigned __int64)(v163 + 1) )
    {
      n.m128i_i64[0] = v30;
      v187 = qvector_reserve(a1, v164, v163 + 1, 56);
      v163 = a1->m128i_i64[1];
      v30 = n.m128i_i64[0];
      a1->m128i_i64[0] = v187;
      v164 = v187;
    }
    v165 = v164 + 56 * v163;
    *(_QWORD *)v165 = 0;
    *(_QWORD *)(v165 + 24) = 0;
    *(_OWORD *)(v165 + 8) = 0;
    *(_OWORD *)(v165 + 32) = 0;
    ++a1->m128i_i64[1];
    if ( v9 && (n.m128i_i64[0] = v30, v166 = strlen(v9), v30 = n.m128i_i64[0], (v167 = v166) != 0) )
    {
      v197 = *(void **)v165;
      v198 = v166 + 1;
      if ( *(_QWORD *)(v165 + 16) < v166 + 1 )
      {
        v212 = *(void **)v165;
        v220 = n.m128i_i64[0];
        n.m128i_i64[0] = v166 + 1;
        v213 = qvector_reserve(v165, v212, v198, 1);
        v30 = v220;
        v198 = n.m128i_i64[0];
        *(_QWORD *)v165 = v213;
        v197 = (void *)v213;
      }
      *(_QWORD *)(v165 + 8) = v198;
      n.m128i_i64[0] = v30;
      memmove(v197, v9, v167);
      v30 = n.m128i_i64[0];
      *(_BYTE *)(*(_QWORD *)v165 + v167) = 0;
    }
    else
    {
      *(_QWORD *)(v165 + 8) = 0;
    }
    v168 = (const char *)n.m128i_i64[1];
    *(_QWORD *)(v165 + 48) = v10 & v30;
    if ( v168 && (v169 = strlen(v168), (v170 = v169) != 0) )
    {
      v195 = *(void **)(v165 + 24);
      v196 = v169 + 1;
      if ( *(_QWORD *)(v165 + 40) < v169 + 1 )
      {
        v211 = qvector_reserve(v165 + 24, *(_QWORD *)(v165 + 24), v196, 1);
        *(_QWORD *)(v165 + 24) = v211;
        v195 = (void *)v211;
      }
      *(_QWORD *)(v165 + 32) = v196;
      memmove(v195, (const void *)n.m128i_i64[1], v170);
      *(_BYTE *)(*(_QWORD *)(v165 + 24) + v170) = 0;
    }
    else
    {
      *(_QWORD *)(v165 + 32) = 0;
    }
    n.m128i_i64[1] = 0;
    v137 = *(_QWORD *)(v165 + 8);
    if ( v137 )
    {
      v189 = (void *)qalloc_or_throw(*(_QWORD *)(v165 + 8));
      v190 = *(const void **)v165;
      n.m128i_i64[1] = (__int64)v189;
      memcpy(v189, v190, v137);
    }
    v171 = *(_QWORD *)(v165 + 32);
    v139 = nullptr;
    n.m128i_i64[0] = v171;
    if ( v171 )
    {
      v139 = (void *)qalloc_or_throw(v171);
      memcpy(v139, *(const void **)(v165 + 24), n.m128i_u64[0]);
    }
    v140 = *(_QWORD *)(v165 + 48);
    v141 = v7[19];
    v142 = v7[18];
    v236 = v140;
    v143 = v141 + 1;
    if ( v7[20] >= (unsigned __int64)(v141 + 1) )
      goto LABEL_153;
LABEL_181:
    v220 = v140;
    v172 = qvector_reserve(v7 + 18, v142, v143, 56);
    v7[18] = v172;
    v142 = v172;
    v140 = v220;
    v141 = v7[19];
LABEL_153:
    v144 = v142 + 56 * v141;
    *(_QWORD *)v144 = n.m128i_i64[1];
    *(_QWORD *)(v144 + 24) = v139;
    *(__m128i *)(v144 + 8) = _mm_unpacklo_epi64((__m128i)v137, (__m128i)v137);
    v145 = _mm_loadl_epi64(&n);
    *(_QWORD *)(v144 + 48) = v140;
    *(__m128i *)(v144 + 32) = _mm_unpacklo_epi64(v145, v145);
    ++v7[19];
    goto LABEL_64;
  }
  v33 = 0;
  v34 = 0;
  while ( (p_src & (v220 ^ *(_QWORD *)(a1->m128i_i64[0] + 56 * v34 + 48))) != 0 )
  {
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
    v146 = v32 + 1;
    goto LABEL_156;
  }
  src = nullptr;
  dest = nullptr;
  *(_OWORD *)v231 = 0;
  v233 = 0;
  if ( v9 )
  {
    v220 = p_src;
    p_src = v33;
    v37 = strlen(v9);
    v33 = p_src;
    v30 = v220;
    v38 = v37;
    if ( v37 )
    {
      v224 = v220;
      v222.m128i_i64[0] = p_src;
      p_src = (unsigned __int64)&src;
      v220 = v37 + 1;
      src = (void *)qvector_reserve(&src, 0, v37 + 1, 1);
      v231[0] = v220;
      memmove(src, v9, v38);
      v30 = v224;
      v33 = v222.m128i_i64[0];
      *((_BYTE *)src + v38) = 0;
    }
  }
  v234 = (void *)(v10 & v30);
  if ( n.m128i_i64[1] && (p_src = v33, v39 = strlen((const char *)n.m128i_i64[1]), v33 = p_src, (v40 = v39) != 0) )
  {
    v199 = dest;
    v200 = v39 + 1;
    if ( *((_QWORD *)&v233 + 1) < v39 + 1 )
    {
      v220 = p_src;
      p_src = (unsigned __int64)&src;
      dest = (void *)qvector_reserve(&dest, dest, v39 + 1, 1);
      v33 = v220;
      v199 = dest;
    }
    p_src = v33;
    *(_QWORD *)&v233 = v200;
    memmove(v199, (const void *)n.m128i_i64[1], v40);
    v33 = p_src;
    *((_BYTE *)dest + v40) = 0;
  }
  else
  {
    *(_QWORD *)&v233 = 0;
  }
  v41 = a1->m128i_i64[0];
  n.m128i_i64[1] = 4 * v33;
  v42 = v231[0];
  v43 = v34 + *(int *)(a1[1].m128i_i64[1] + 4 * v33);
  if ( n.m128i_i64[0] < v34 || n.m128i_i64[0] >= v43 )
  {
    v44 = nullptr;
    v45 = (_QWORD *)(v41 + 56 * v43);
    if ( v231[0] )
    {
      p_src = (unsigned __int64)&src;
      v44 = (void *)qalloc_or_throw(v231[0]);
      memcpy(v44, src, v42);
    }
    p_src = 0;
    n.m128i_i64[0] = v233;
    if ( (_QWORD)v233 )
    {
      p_src = qalloc_or_throw(v233);
      memcpy((void *)p_src, dest, n.m128i_u64[0]);
    }
    v46 = (unsigned __int64)v234;
    v47 = a1->m128i_i64[0];
    v48 = a1->m128i_i64[1];
    v236 = (unsigned __int64)v234;
    v49 = (char *)v45 - v47;
    v50 = v48 + 1;
    if ( a1[1].m128i_i64[0] >= (unsigned __int64)(v48 + 1) )
      goto LABEL_54;
  }
  else
  {
    v44 = nullptr;
    v45 = (_QWORD *)(v41 + 56 * n.m128i_i64[0]);
    if ( v231[0] )
    {
      p_src = (unsigned __int64)&src;
      v44 = (void *)qalloc_or_throw(v231[0]);
      memcpy(v44, src, v42);
    }
    p_src = 0;
    n.m128i_i64[0] = v233;
    if ( (_QWORD)v233 )
    {
      p_src = qalloc_or_throw(v233);
      memcpy((void *)p_src, dest, n.m128i_u64[0]);
    }
    v46 = (unsigned __int64)v234;
    v47 = a1->m128i_i64[0];
    v48 = a1->m128i_i64[1];
    v236 = (unsigned __int64)v234;
    v49 = (char *)v45 - v47;
    v50 = v48 + 1;
    if ( a1[1].m128i_i64[0] >= (unsigned __int64)(v48 + 1) )
      goto LABEL_54;
  }
  v222.m128i_i64[0] = (__int64)v234;
  v220 = (unsigned __int64)v45 - v47;
  v181 = qvector_reserve(a1, v47, v50, 56);
  v49 = (char *)v45 - v47;
  v46 = v222.m128i_i64[0];
  a1->m128i_i64[0] = v181;
  v45 = (_QWORD *)((char *)v45 + v181 - v47);
  v48 = a1->m128i_i64[1];
LABEL_54:
  v220 = v46;
  memmove(v45 + 7, v45, 56 * v48 - (_QWORD)v49);
  *v45 = v44;
  *(__m128i *)(v45 + 1) = _mm_unpacklo_epi64((__m128i)v42, (__m128i)v42);
  v45[3] = p_src;
  v51 = _mm_loadl_epi64(&n);
  *((__m128i *)v45 + 2) = _mm_unpacklo_epi64(v51, v51);
  v45[6] = v220;
  v52 = nullptr;
  v53 = (_DWORD *)(a1[1].m128i_i64[1] + n.m128i_i64[1]);
  ++a1->m128i_i64[1];
  ++*v53;
  v54 = v231[0];
  if ( v231[0] )
  {
    p_src = (unsigned __int64)&src;
    v52 = (void *)qalloc_or_throw(v231[0]);
    memcpy(v52, src, v54);
  }
  v55 = nullptr;
  n.m128i_i64[0] = v233;
  if ( (_QWORD)v233 )
  {
    v55 = (void *)qalloc_or_throw(v233);
    memcpy(v55, dest, n.m128i_u64[0]);
  }
  v56 = (__int64)v234;
  v57 = v7[19];
  v58 = v7[18];
  v236 = (unsigned __int64)v234;
  if ( v7[20] < (unsigned __int64)(v57 + 1) )
  {
    n.m128i_i64[1] = (__int64)v234;
    v186 = qvector_reserve(v7 + 18, v58, v57 + 1, 56);
    v7[18] = v186;
    v58 = v186;
    v56 = n.m128i_i64[1];
    v57 = v7[19];
  }
  v59 = v58 + 56 * v57;
  *(__m128i *)(v59 + 8) = _mm_unpacklo_epi64((__m128i)v54, (__m128i)v54);
  v60 = _mm_loadl_epi64(&n);
  *(_QWORD *)v59 = v52;
  *(_QWORD *)(v59 + 24) = v55;
  *(_QWORD *)(v59 + 48) = v56;
  *(__m128i *)(v59 + 32) = _mm_unpacklo_epi64(v60, v60);
  v61 = dest;
  ++v7[19];
  if ( v61 )
  {
    *(_QWORD *)&v233 = 0;
    qfree(v61);
  }
  if ( src )
  {
    v231[0] = 0;
    qfree(src);
  }
LABEL_64:
  v62 = sub_414D20((__int64)a1);
  if ( !v62 )
  {
    if ( v222.m128i_i64[1] )
      qfree((void *)v222.m128i_i64[1]);
    if ( v219 )
    {
      v63 = 0;
      v64 = v221;
      v65 = (void **)v219;
      if ( v221 )
      {
        do
        {
          v66 = v65[3];
          if ( v66 )
          {
            v65[4] = nullptr;
            qfree(v66);
          }
          v67 = *v65;
          if ( *v65 )
          {
            v65[1] = nullptr;
            qfree(v67);
          }
          ++v63;
          v65 += 7;
        }
        while ( v64 != v63 );
      }
      qfree(v219);
    }
    goto LABEL_75;
  }
  v102 = _mm_loadu_si128(a1);
  v103 = _mm_loadu_si128(a1 + 1);
  v104 = _mm_loadu_si128(a1 + 2);
  *a1 = _mm_load_si128(&v226);
  v105 = _mm_load_si128(&v227);
  v106 = a1[3].m128i_i64[0];
  v107 = v229;
  v227 = v103;
  a1[1] = v105;
  v108 = _mm_load_si128(&v228);
  v226 = v102;
  v240 = v106;
  a1[3].m128i_i64[0] = v107;
  v229 = v106;
  v237 = v102;
  v238 = v103;
  v239 = v104;
  a1[2] = v108;
  v228 = v104;
  if ( v103.m128i_i64[1] )
    qfree((void *)v103.m128i_i64[1]);
  if ( v102.m128i_i64[0] )
  {
    v109 = v102.m128i_i64[0];
    v110 = 0;
    if ( v102.m128i_i64[1] )
    {
      do
      {
        v111 = *(void **)(v109 + 24);
        if ( v111 )
        {
          *(_QWORD *)(v109 + 32) = 0;
          qfree(v111);
        }
        v112 = *(void **)v109;
        if ( *(_QWORD *)v109 )
        {
          *(_QWORD *)(v109 + 8) = 0;
          qfree(v112);
        }
        ++v110;
        v109 += 56;
      }
      while ( v110 != v102.m128i_i64[1] );
    }
    qfree((void *)v102.m128i_i64[0]);
  }
  return v62;
}
