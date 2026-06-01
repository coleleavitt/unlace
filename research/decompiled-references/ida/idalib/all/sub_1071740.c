_BYTE *__fastcall sub_1071740(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rsi
  __m128i v25; // xmm3
  const __m128i *v26; // rax
  __m128i si128; // xmm7
  __m128i v28; // xmm6
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __m128i v31; // xmm0
  __m128i v32; // xmm9
  __m128i v33; // xmm10
  __m128i v34; // xmm1
  __m128i v35; // xmm10
  __m128i v36; // xmm9
  __m128i v37; // xmm8
  __m128i v38; // xmm9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  char v56; // dl
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  size_t v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char v68; // al
  __int64 v69; // rcx
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  char v74; // al
  int v75; // edx
  unsigned __int16 v76; // ax
  __int64 v77; // r8
  char *v78; // rax
  size_t v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned int v82; // eax
  char v83; // al
  char v84; // al
  char v85; // al
  _BYTE *result; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  size_t v98; // rax
  size_t v99; // rax
  size_t v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int8 v109; // al
  bool v110; // zf
  char *v111; // rax
  unsigned int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // r8
  __int64 v136; // r9
  size_t v137; // rax
  int v138; // eax
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  size_t v148; // rax
  char *v149; // rax
  void *s1; // [rsp+8h] [rbp-158h]
  size_t n; // [rsp+10h] [rbp-150h]
  size_t na; // [rsp+10h] [rbp-150h]
  __int64 v153; // [rsp+18h] [rbp-148h]
  char v154; // [rsp+27h] [rbp-139h]
  __int64 v155; // [rsp+28h] [rbp-138h] BYREF
  __int64 v156; // [rsp+30h] [rbp-130h] BYREF
  __m128i v157; // [rsp+38h] [rbp-128h] BYREF
  __int64 v158; // [rsp+48h] [rbp-118h]
  __int64 v159; // [rsp+50h] [rbp-110h]
  __int16 v160; // [rsp+58h] [rbp-108h]
  __m128i v161[2]; // [rsp+68h] [rbp-F8h] BYREF
  __int16 v162; // [rsp+88h] [rbp-D8h]
  __m128i v163; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v164; // [rsp+A8h] [rbp-B8h]
  __int64 v165; // [rsp+B0h] [rbp-B0h]
  __int64 v166; // [rsp+B8h] [rbp-A8h]
  _QWORD v167[4]; // [rsp+C8h] [rbp-98h] BYREF
  __int16 v168; // [rsp+E8h] [rbp-78h]
  const char *v169; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v170; // [rsp+100h] [rbp-60h]
  __int64 v171; // [rsp+108h] [rbp-58h]
  __int64 v172; // [rsp+110h] [rbp-50h]
  __int64 v173; // [rsp+118h] [rbp-48h]

  LOWORD(v173) = 257;
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__arm";
  LOWORD(v166) = 259;
  v167[0] = "1";
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, a4, a5, a6, (char)v169, v170, v171, v172, 1u);
  v168 = 259;
  LOWORD(v166) = 259;
  LOWORD(v173) = 257;
  v167[0] = "1";
  v163.m128i_i64[0] = (__int64)"__arm__";
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, 257, v8, v9, (char)v169, v170, v171, v172, 1u);
  v12 = *(unsigned int *)(a1 + 260);
  if ( !(_DWORD)v12 && (unsigned int)(*(_DWORD *)(a1 + 264) - 15) <= 1 && (*(_BYTE *)(a2 + 1) & 8) != 0 )
  {
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"_GNU_SOURCE";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v10, v12, v11, (char)v169, v170, v171, v172, 1u);
  }
  v163.m128i_i64[0] = (__int64)"__REGISTER_PREFIX__";
  LOWORD(v173) = 257;
  v168 = 257;
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v10, v12, v11, (char)v169, v170, v171, v172, 1u);
  if ( *(_DWORD *)(a1 + 252) == 26 )
  {
    LOWORD(v173) = 257;
    v167[0] = "2";
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_ARCH_7K__";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v13, 259, 259, (char)v169, v170, v171, v172, 1u);
  }
  if ( *(_QWORD *)(a1 + 600) )
  {
    v159 = *(_QWORD *)(a1 + 600);
    v168 = 259;
    v121 = *(_QWORD *)(a1 + 592);
    v161[0].m128i_i64[0] = (__int64)"__";
    v162 = 259;
    v160 = 1283;
    v158 = v121;
    LOWORD(v173) = 257;
    v167[0] = "1";
    v157.m128i_i64[0] = (__int64)"__ARM_ARCH_";
    sub_A41580(&v163, &v157, v161, (__int64)"__ARM_ARCH_", v14, v15);
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v122, v123, v124, (char)v169, v170, v171, v172, v173);
  }
  v163.m128i_i32[0] = *(_DWORD *)(a1 + 624);
  LOWORD(v173) = 257;
  LOWORD(v166) = 265;
  v167[0] = "__ARM_ARCH";
  v168 = 259;
  sub_1039E30(a3, (__int64)v167, (__int64)&v163, v13, 257, 265, (char)v169, v170, v171, v172, 1u);
  if ( *(_DWORD *)(a1 + 624) > 7u )
  {
    v19 = *(_BYTE *)(a1 + 629);
    if ( (v19 & 0xC0) == 0xC0 )
    {
      v168 = 259;
      v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_CRYPTO";
      LOWORD(v166) = 259;
      LOWORD(v173) = 257;
      v167[0] = "1";
      sub_1039E30(a3, (__int64)&v163, (__int64)v167, 257, v17, v18, (char)v169, v170, v171, v172, 1u);
      v19 = *(_BYTE *)(a1 + 629);
      if ( (v19 & 0x40) == 0 )
      {
LABEL_12:
        if ( v19 >= 0 )
          goto LABEL_13;
        goto LABEL_212;
      }
    }
    else if ( (v19 & 0x40) == 0 )
    {
      goto LABEL_12;
    }
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_SHA2";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v16, v17, v18, (char)v169, v170, v171, v172, 1u);
    v19 = *(_BYTE *)(a1 + 629);
    if ( v19 >= 0 )
    {
LABEL_13:
      if ( (v19 & 0x10) == 0 )
      {
LABEL_14:
        LOWORD(v173) = 257;
        v168 = 259;
        v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_NUMERIC_MAXMIN";
        LOWORD(v166) = 259;
        v167[0] = "1";
        sub_1039E30(a3, (__int64)&v163, (__int64)v167, 259, v17, v18, (char)v169, v170, v171, v172, 1u);
        LOWORD(v173) = 257;
        v167[0] = "1";
        v168 = 259;
        v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_DIRECTED_ROUNDING";
        LOWORD(v166) = 259;
        sub_1039E30(a3, (__int64)&v163, (__int64)v167, v20, 259, 259, (char)v169, v170, v171, v172, 1u);
        goto LABEL_15;
      }
LABEL_209:
      LOWORD(v173) = 257;
      v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_CRC32";
      v167[0] = "1";
      v168 = 259;
      LOWORD(v166) = 259;
      sub_1039E30(a3, (__int64)&v163, (__int64)v167, v16, v17, v18, (char)v169, v170, v171, v172, 1u);
      goto LABEL_14;
    }
LABEL_212:
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_AES";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v16, v17, v18, (char)v169, v170, v171, v172, 1u);
    if ( (*(_BYTE *)(a1 + 629) & 0x10) == 0 )
      goto LABEL_14;
    goto LABEL_209;
  }
LABEL_15:
  if ( !*(_QWORD *)(a1 + 584) || *(_DWORD *)(a1 + 620) != 3 )
  {
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_ARCH_ISA_ARM";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v16, v17, v18, (char)v169, v170, v171, v172, 1u);
  }
  if ( sub_1070CD0(a1) )
  {
    LOWORD(v173) = 257;
    v167[0] = "2";
    goto LABEL_67;
  }
  v21 = *(_QWORD *)(a1 + 600);
  if ( !v21 )
    goto LABEL_154;
  v24 = *(_QWORD *)(a1 + 592);
  if ( (unsigned __int64)(v21 - 1) <= 0xE )
  {
    v40 = 0;
    v39 = 0;
  }
  else
  {
    v25 = 0;
    v26 = *(const __m128i **)(a1 + 592);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9740);
    v28 = _mm_load_si128((const __m128i *)&xmmword_23A8EB0);
    do
    {
      v29 = _mm_loadu_si128(v26++);
      v30 = _mm_and_si128(_mm_cmpeq_epi8(v29, si128), v28);
      v31 = _mm_unpackhi_epi8(v30, (__m128i)0LL);
      v32 = _mm_unpacklo_epi8(v30, (__m128i)0LL);
      v33 = _mm_unpackhi_epi16(v32, (__m128i)0LL);
      v34 = _mm_add_epi64(_mm_unpacklo_epi32(v33, (__m128i)0LL), _mm_unpackhi_epi32(v33, (__m128i)0LL));
      v35 = _mm_unpacklo_epi16(v32, (__m128i)0LL);
      v36 = _mm_unpacklo_epi16(v31, (__m128i)0LL);
      v37 = _mm_add_epi64(_mm_unpacklo_epi32(v36, (__m128i)0LL), _mm_unpackhi_epi32(v36, (__m128i)0LL));
      v38 = _mm_unpackhi_epi16(v31, (__m128i)0LL);
      v25 = _mm_add_epi64(
              _mm_add_epi64(v25, _mm_unpackhi_epi32(v38, (__m128i)0LL)),
              _mm_add_epi64(
                _mm_add_epi64(
                  v34,
                  _mm_add_epi64(_mm_unpacklo_epi32(v35, (__m128i)0LL), _mm_unpackhi_epi32(v35, (__m128i)0LL))),
                _mm_add_epi64(v37, _mm_unpacklo_epi32(v38, (__m128i)0LL))));
    }
    while ( v26 != (const __m128i *)(v24 + (v21 & 0xFFFFFFFFFFFFFFF0LL)) );
    v39 = v21 & 0xFFFFFFFFFFFFFFF0LL;
    v40 = _mm_add_epi64(v25, _mm_srli_si128(v25, 8)).m128i_u64[0];
    if ( v21 == (v21 & 0xFFFFFFFFFFFFFFF0LL) )
      goto LABEL_65;
  }
  v40 += *(_BYTE *)(v24 + v39) == 84;
  if ( v21 == v39 + 1 )
    goto LABEL_65;
  if ( *(_BYTE *)(v24 + v39 + 1) == 84 )
  {
    ++v40;
    if ( v21 == v39 + 2 )
      goto LABEL_65;
  }
  else if ( v21 == v39 + 2 )
  {
    goto LABEL_65;
  }
  if ( *(_BYTE *)(v24 + v39 + 2) == 84 )
    ++v40;
  if ( v21 != v39 + 3 )
  {
    if ( *(_BYTE *)(v24 + v39 + 3) == 84 )
      ++v40;
    if ( v39 + 4 != v21 )
    {
      if ( *(_BYTE *)(v24 + v39 + 4) == 84 )
        ++v40;
      if ( v39 + 5 != v21 )
      {
        if ( *(_BYTE *)(v24 + v39 + 5) == 84 )
          ++v40;
        if ( v21 != v39 + 6 )
        {
          if ( *(_BYTE *)(v24 + v39 + 6) == 84 )
            ++v40;
          if ( v21 != v39 + 7 )
          {
            if ( *(_BYTE *)(v24 + v39 + 7) == 84 )
              ++v40;
            if ( v21 != v39 + 8 )
            {
              if ( *(_BYTE *)(v24 + v39 + 8) == 84 )
                ++v40;
              if ( v21 != v39 + 9 )
              {
                if ( *(_BYTE *)(v24 + v39 + 9) == 84 )
                  ++v40;
                if ( v21 != v39 + 10 )
                {
                  if ( *(_BYTE *)(v24 + v39 + 10) == 84 )
                    ++v40;
                  if ( v21 != v39 + 11 )
                  {
                    if ( *(_BYTE *)(v24 + v39 + 11) == 84 )
                      ++v40;
                    if ( v21 != v39 + 12 )
                    {
                      if ( *(_BYTE *)(v24 + v39 + 12) == 84 )
                        ++v40;
                      if ( v21 != v39 + 13 )
                      {
                        if ( *(_BYTE *)(v24 + v39 + 13) == 84 )
                          ++v40;
                        if ( v21 != v39 + 14 && *(_BYTE *)(v24 + v39 + 14) == 84 )
                          ++v40;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_65:
  if ( !v40 )
  {
LABEL_154:
    if ( *(_DWORD *)(a1 + 624) <= 5u )
      goto LABEL_68;
  }
  v167[0] = "1";
  LOWORD(v173) = 257;
LABEL_67:
  v163.m128i_i64[0] = (__int64)"__ARM_ARCH_ISA_THUMB";
  v168 = 259;
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v21, v22, v23, (char)v169, v170, v171, v172, v173);
LABEL_68:
  v163.m128i_i64[0] = (__int64)"__ARM_32BIT_STATE";
  LOWORD(v173) = 257;
  v167[0] = "1";
  v168 = 259;
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v21, 257, 259, (char)v169, v170, v171, v172, 1u);
  v44 = *(_QWORD *)(a1 + 584);
  if ( v44 )
  {
    v161[0].m128i_i64[0] = (__int64)"'";
    v157.m128i_i64[0] = (__int64)"'";
    v128 = *(_QWORD *)(a1 + 576);
    v160 = 1283;
    v158 = v128;
    v159 = v44;
    LOWORD(v173) = 257;
    v162 = 259;
    sub_A41580(&v163, &v157, v161, 259, v42, v43);
    v168 = 259;
    v167[0] = "__ARM_ARCH_PROFILE";
    sub_1039E30(a3, (__int64)v167, (__int64)&v163, v129, v130, v131, (char)v169, v170, v171, v172, v173);
  }
  if ( (*(_BYTE *)(a1 + 393) & 0x10) != 0 )
  {
    LOWORD(v173) = 257;
    v167[0] = "1";
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_UNALIGNED";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v41, 257, 259, (char)v169, v170, v171, v172, 1u);
  }
  if ( *(_DWORD *)(a1 + 632) )
  {
    v156 = *(unsigned int *)(a1 + 632);
    LOWORD(v173) = 257;
    v162 = 259;
    v157.m128i_i64[0] = (__int64)&v156;
    v161[0].m128i_i64[0] = (__int64)"0x";
    v158 = 0;
    v160 = 271;
    sub_A41580(&v163, v161, &v157, 271, v42, v43);
    v168 = 259;
    v167[0] = "__ARM_FEATURE_LDREX";
    sub_1039E30(a3, (__int64)v167, (__int64)&v163, v125, v126, v127, (char)v169, v170, v171, v172, v173);
  }
  v45 = *(_DWORD *)(a1 + 624);
  if ( v45 == 5 )
    goto LABEL_77;
  if ( v45 != 6 )
  {
    if ( v45 <= 6 )
      goto LABEL_78;
    goto LABEL_77;
  }
  v148 = j__strlen("M");
  if ( v148 != *(_QWORD *)(a1 + 584) || v148 && memcmp(*(const void **)(a1 + 576), "M", v148) )
  {
LABEL_77:
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_CLZ";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v41, v42, v43, (char)v169, v170, v171, v172, 1u);
  }
LABEL_78:
  if ( *(_DWORD *)(a1 + 636) )
  {
    v156 = *(unsigned int *)(a1 + 636);
    v157.m128i_i64[0] = (__int64)&v156;
    v160 = 271;
    v161[0].m128i_i64[0] = (__int64)"0x";
    v162 = 259;
    LOWORD(v173) = 257;
    v158 = 0;
    sub_A41580(&v163, v161, &v157, v41, v42, v43);
    v167[0] = "__ARM_FP";
    v168 = 259;
    sub_1039E30(a3, (__int64)v167, (__int64)&v163, v118, v119, v120, (char)v169, v170, v171, v172, v173);
  }
  LOWORD(v173) = 257;
  v167[0] = "200";
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__ARM_ACLE";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v41, v42, v43, (char)v169, v170, v171, v172, 1u);
  LOWORD(v173) = 257;
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__ARM_FP16_FORMAT_IEEE";
  LOWORD(v166) = 259;
  v167[0] = "1";
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, 257, v46, v47, (char)v169, v170, v171, v172, 1u);
  v163.m128i_i64[0] = (__int64)"__ARM_FP16_ARGS";
  LOWORD(v173) = 257;
  v167[0] = "1";
  v168 = 259;
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v48, 257, 259, (char)v169, v170, v171, v172, 1u);
  v52 = *(_DWORD *)(a1 + 624);
  if ( v52 > 6 && (*(_BYTE *)(a1 + 628) & 4) != 0 )
  {
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_FMA";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v49, v50, v51, (char)v169, v170, v171, v172, 1u);
    v52 = *(_DWORD *)(a1 + 624);
  }
  if ( v52 - 5 <= 3 && *(_DWORD *)(a1 + 260) != 15 )
  {
    LOWORD(v173) = 257;
    v163.m128i_i64[0] = (__int64)"__THUMB_INTERWORK__";
    v167[0] = "1";
    v168 = 259;
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v49, v50, v51, (char)v169, v170, v171, v172, 1u);
  }
  v153 = a1 + 512;
  if ( !sub_9B4AA0(a1 + 512, "aapcs") || !sub_9B4AA0(v153, "aapcs-linux") || !sub_9B4AA0(v153, "aapcs-vfp") )
  {
    if ( *(_DWORD *)(a1 + 268) != 5 && *(_DWORD *)(a1 + 260) != 15 )
    {
      LOWORD(v173) = 257;
      v167[0] = "1";
      v168 = 259;
      v163.m128i_i64[0] = (__int64)"__ARM_EABI__";
      LOWORD(v166) = 259;
      sub_1039E30(a3, (__int64)&v163, (__int64)v167, v53, 259, 259, (char)v169, v170, v171, v172, 1u);
    }
    LOWORD(v173) = 257;
    LOWORD(v166) = 259;
    v167[0] = "1";
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_PCS";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, 259, v54, v55, (char)v169, v170, v171, v172, 1u);
  }
  v154 = *(_BYTE *)(a1 + 629);
  if ( (v154 & 0xC) == 0 || !sub_9B4AA0(v153, "aapcs-vfp") || (v138 = sub_9B4AA0(v153, "aapcs16"), v56 = v154, !v138) )
  {
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_PCS_VFP";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v53, v54, v55, (char)v169, v170, v171, v172, 1u);
    v56 = *(_BYTE *)(a1 + 629);
  }
  if ( (v56 & 4) == 0 && (*(_WORD *)(a1 + 628) & 0x81F) != 0x800 )
  {
    v57 = *(_BYTE *)(a2 + 44);
    if ( (v57 & 0x40) == 0 )
      goto LABEL_97;
LABEL_100:
    v163.m128i_i64[0] = (__int64)"__ARM_ROPI";
    LOWORD(v173) = 257;
    v167[0] = "1";
    v168 = 259;
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v53, v54, 257, (char)v169, v170, v171, v172, 1u);
    if ( *(char *)(a2 + 44) >= 0 )
      goto LABEL_98;
    goto LABEL_101;
  }
  LOWORD(v173) = 257;
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__SOFTFP__";
  LOWORD(v166) = 259;
  v167[0] = "1";
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v53, v54, v55, (char)v169, v170, v171, v172, 1u);
  v57 = *(_BYTE *)(a2 + 44);
  if ( (v57 & 0x40) != 0 )
    goto LABEL_100;
LABEL_97:
  if ( v57 >= 0 )
    goto LABEL_98;
LABEL_101:
  LOWORD(v173) = 257;
  v168 = 259;
  v167[0] = "1";
  v163.m128i_i64[0] = (__int64)"__ARM_RWPI";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v53, 259, v55, (char)v169, v170, v171, v172, 1u);
LABEL_98:
  v155 = 0;
  v58 = *(unsigned int *)(a1 + 616);
  switch ( (int)v58 )
  {
    case 1:
    case 2:
      v155 = *(_DWORD *)(a1 + 612) != 2;
      break;
    case 3:
      v155 = 3LL * (*(_DWORD *)(a1 + 612) != 2);
      break;
    case 4:
    case 5:
      if ( *(_DWORD *)(a1 + 612) != 2 )
        v155 = 7;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      if ( *(_DWORD *)(a1 + 612) != 2 || (_DWORD)v58 == 8 )
        goto LABEL_158;
      break;
    case 11:
    case 13:
    case 14:
    case 15:
    case 35:
    case 36:
    case 40:
LABEL_158:
      v155 = 15;
      break;
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
      v155 = 5;
      break;
    default:
      break;
  }
  LOWORD(v173) = 257;
  v157.m128i_i64[0] = (__int64)&v155;
  v162 = 259;
  v160 = 271;
  v161[0].m128i_i64[0] = (__int64)"0x";
  v158 = 0;
  sub_A41580(&v163, v161, &v157, v58, v54, v55);
  v168 = 259;
  v167[0] = "__ARM_FEATURE_COPROC";
  sub_1039E30(a3, (__int64)v167, (__int64)&v163, 259, v59, v60, (char)v169, v170, v171, v172, v173);
  if ( *(_DWORD *)(a1 + 616) == 39 )
  {
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__XSCALE__";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v61, v62, v63, (char)v169, v170, v171, v172, 1u);
  }
  if ( *(_DWORD *)(a1 + 612) == 2 )
  {
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__THUMBEL__";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v61, 259, 259, (char)v169, v170, v171, v172, 1u);
    v163.m128i_i64[0] = (__int64)"__thumb__";
    LOWORD(v173) = 257;
    v167[0] = "1";
    v168 = 259;
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v132, v133, v134, (char)v169, v170, v171, v172, 1u);
    if ( sub_1070CD0(a1) )
    {
      LOWORD(v173) = 257;
      LOWORD(v166) = 259;
      v167[0] = "1";
      v168 = 259;
      v163.m128i_i64[0] = (__int64)"__thumb2__";
      sub_1039E30(a3, (__int64)&v163, (__int64)v167, 259, v135, v136, (char)v169, v170, v171, v172, 1u);
    }
  }
  v64 = j__strlen("M");
  if ( v64 == *(_QWORD *)(a1 + 584) )
  {
    if ( v64 && memcmp(*(const void **)(a1 + 576), "M", v64) )
    {
      if ( *(_DWORD *)(a1 + 624) <= 5u )
        goto LABEL_112;
      goto LABEL_111;
    }
    if ( (*(_BYTE *)(a1 + 630) & 1) != 0 )
    {
LABEL_111:
      LOWORD(v173) = 257;
      v168 = 259;
      v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_SIMD32";
      v167[0] = "1";
      LOWORD(v166) = 259;
      sub_1039E30(a3, (__int64)&v163, (__int64)v167, v65, v66, v67, (char)v169, v170, v171, v172, 1u);
    }
  }
  else if ( *(_DWORD *)(a1 + 624) > 5u )
  {
    goto LABEL_111;
  }
LABEL_112:
  v68 = *(_BYTE *)(a1 + 629);
  if ( (v68 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 612) != 2 && (v68 & 2) == 0 )
      goto LABEL_115;
LABEL_163:
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_IDIV";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v65, v66, 257, (char)v169, v170, v171, v172, 1u);
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_ARCH_EXT_IDIV__";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v87, v88, v89, (char)v169, v170, v171, v172, 1u);
    goto LABEL_115;
  }
  if ( (v68 & 2) != 0 && *(_DWORD *)(a1 + 612) != 2 )
    goto LABEL_163;
LABEL_115:
  LOWORD(v173) = 257;
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__APCS_32__";
  LOWORD(v166) = 259;
  v167[0] = "1";
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, 259, v66, v67, (char)v169, v170, v171, v172, 1u);
  LOWORD(v173) = 257;
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__VFP_FP__";
  v167[0] = "1";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v69, 259, v70, (char)v169, v170, v171, v172, 1u);
  v74 = *(_BYTE *)(a1 + 628) & 0x1F;
  if ( !v74 )
    goto LABEL_126;
  if ( (*(_BYTE *)(a1 + 628) & 1) != 0 )
  {
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_VFPV2__";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v71, v72, v73, (char)v169, v170, v171, v172, 1u);
    v74 = *(_BYTE *)(a1 + 628) & 0x1F;
  }
  if ( (v74 & 2) != 0 )
  {
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_VFPV3__";
    LOWORD(v166) = 259;
    LOWORD(v173) = 257;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v71, v72, v73, (char)v169, v170, v171, v172, 1u);
    v74 = *(_BYTE *)(a1 + 628) & 0x1F;
  }
  if ( (v74 & 4) != 0 )
  {
    v163.m128i_i64[0] = (__int64)"__ARM_VFPV4__";
    LOWORD(v173) = 257;
    v167[0] = "1";
    v168 = 259;
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v71, 257, 259, (char)v169, v170, v171, v172, 1u);
    v74 = *(_BYTE *)(a1 + 628) & 0x1F;
    if ( (*(_BYTE *)(a1 + 628) & 0x10) == 0 )
      goto LABEL_122;
LABEL_220:
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FPV5__";
    LOWORD(v166) = 259;
    LOWORD(v173) = 257;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, 257, v72, v73, (char)v169, v170, v171, v172, 1u);
    v74 = *(_BYTE *)(a1 + 628) & 0x1F;
    goto LABEL_122;
  }
  if ( (v74 & 0x10) != 0 )
    goto LABEL_220;
LABEL_122:
  if ( (v74 & 8) != 0 && (*(_BYTE *)(a1 + 629) & 4) == 0 && *(_DWORD *)(a1 + 624) > 6u )
  {
    v167[0] = "1";
    LOWORD(v173) = 257;
    v168 = 259;
    LOWORD(v166) = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_NEON";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v71, v72, 257, (char)v169, v170, v171, v172, 1u);
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_NEON__";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v139, v140, v141, (char)v169, v170, v171, v172, 1u);
    v158 = 0;
    LOWORD(v173) = 257;
    v156 = *(_DWORD *)(a1 + 636) & 0xFFFFFFF7;
    v157.m128i_i64[0] = (__int64)&v156;
    v160 = 271;
    v161[0].m128i_i64[0] = (__int64)"0x";
    v162 = 259;
    sub_A41580(&v163, v161, &v157, v142, v143, v144);
    v168 = 259;
    v167[0] = "__ARM_NEON_FP";
    sub_1039E30(a3, (__int64)v167, (__int64)&v163, v145, v146, v147, (char)v169, v170, v171, v172, v173);
  }
LABEL_126:
  if ( *(_DWORD *)(a1 + 616) != 36 || (v109 = *(_BYTE *)(a1 + 628), (v109 & 0x60) == 0) )
  {
    if ( (*(_DWORD *)(a1 + 392) & 0x1FE000) == 0 )
      goto LABEL_128;
    goto LABEL_195;
  }
  v110 = ((v109 >> 5) & 2) == 0;
  v111 = "1";
  LOWORD(v173) = 257;
  if ( !v110 )
    v111 = "3";
  v168 = 259;
  v167[0] = v111;
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_MVE";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v71, 259, v73, (char)v169, v170, v171, v172, v173);
  if ( (*(_DWORD *)(a1 + 392) & 0x1FE000) != 0 )
  {
LABEL_195:
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_CDE";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v71, v72, v73, (char)v169, v170, v171, v172, 1u);
    LOWORD(v173) = 257;
    v112 = *(_DWORD *)(a1 + 392);
    v158 = 0;
    v162 = 259;
    v156 = (unsigned __int8)(v112 >> 13);
    v157.m128i_i64[0] = (__int64)&v156;
    v160 = 271;
    v161[0].m128i_i64[0] = (__int64)"0x";
    sub_A41580(&v163, v161, &v157, v113, v114, v115);
    v168 = 259;
    v167[0] = "__ARM_FEATURE_CDE_COPROC";
    sub_1039E30(a3, (__int64)v167, (__int64)&v163, 259, v116, v117, (char)v169, v170, v171, v172, v173);
  }
LABEL_128:
  v75 = 4;
  LOWORD(v173) = 257;
  v76 = *(_WORD *)(a2 + 46);
  if ( (v76 & 0x780) != 0 )
    v75 = (v76 >> 7) & 0xF;
  v163.m128i_i32[0] = v75;
  LOWORD(v166) = 265;
  v167[0] = "__ARM_SIZEOF_WCHAR_T";
  v168 = 259;
  sub_1039E30(a3, (__int64)v167, (__int64)&v163, v71, 259, v73, (char)v169, v170, v171, v172, v173);
  LOWORD(v173) = 257;
  v78 = "4";
  if ( (*(_BYTE *)(a2 + 47) & 0x10) != 0 )
    v78 = "1";
  v168 = 259;
  v167[0] = v78;
  v163.m128i_i64[0] = (__int64)"__ARM_SIZEOF_MINIMAL_ENUM";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, (__int64)"1", v77, 257, (char)v169, v170, v171, v172, v173);
  v82 = *(_DWORD *)(a1 + 624);
  if ( v82 == 8 )
  {
    if ( *(_DWORD *)(a1 + 620) != 3 )
      goto LABEL_184;
    v110 = (*(_BYTE *)(a2 + 157) & 1) == 0;
    v149 = "3";
    LOWORD(v173) = 257;
    if ( v110 )
      v149 = "1";
    LOWORD(v166) = 259;
    v168 = 259;
    v167[0] = v149;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_CMSE";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, 259, v80, v81, (char)v169, v170, v171, v172, v173);
    v82 = *(_DWORD *)(a1 + 624);
  }
  if ( v82 <= 5 )
    goto LABEL_134;
LABEL_184:
  v99 = j__strlen("6M");
  s1 = *(void **)(a1 + 592);
  v79 = *(_QWORD *)(a1 + 600);
  if ( v79 == v99 )
  {
    if ( !v79 )
      goto LABEL_134;
    n = *(_QWORD *)(a1 + 600);
    if ( !memcmp(s1, "6M", n) )
      goto LABEL_134;
    v100 = j__strlen("8M_BASE");
    v79 = n;
    if ( v100 != n )
      goto LABEL_189;
    goto LABEL_188;
  }
  na = *(_QWORD *)(a1 + 600);
  v137 = j__strlen("8M_BASE");
  v79 = na;
  if ( na != v137 )
  {
LABEL_189:
    LOWORD(v173) = 257;
    LOWORD(v166) = 259;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, 259, v81, (char)v169, v170, v171, v172, 1u);
    LOWORD(v173) = 257;
    v167[0] = "1";
    v168 = 259;
    LOWORD(v166) = 259;
    v163.m128i_i64[0] = (__int64)"__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v101, v102, 257, (char)v169, v170, v171, v172, 1u);
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v103, v104, v105, (char)v169, v170, v171, v172, 1u);
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v106, v107, v108, (char)v169, v170, v171, v172, 1u);
    if ( (*(_BYTE *)(a1 + 630) & 1) == 0 )
      goto LABEL_135;
    goto LABEL_190;
  }
  if ( na )
  {
LABEL_188:
    if ( memcmp(s1, "8M_BASE", v79) )
      goto LABEL_189;
  }
LABEL_134:
  if ( (*(_BYTE *)(a1 + 630) & 1) == 0 )
    goto LABEL_135;
LABEL_190:
  LOWORD(v173) = 257;
  v168 = 259;
  v167[0] = "1";
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_DSP";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, 259, v80, v81, (char)v169, v170, v171, v172, 1u);
LABEL_135:
  if ( *(_DWORD *)(a1 + 624) == 6 )
  {
    v98 = j__strlen("M");
    if ( v98 != *(_QWORD *)(a1 + 584) || v98 && memcmp(*(const void **)(a1 + 576), "M", v98) )
      goto LABEL_137;
  }
  else if ( *(_DWORD *)(a1 + 624) > 6u )
  {
LABEL_137:
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_SAT";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, v80, v81, (char)v169, v170, v171, v172, 1u);
    goto LABEL_138;
  }
  if ( (*(_BYTE *)(a1 + 630) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 45) & 0x10) == 0 )
      goto LABEL_139;
    goto LABEL_182;
  }
LABEL_138:
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_QBIT";
  LOWORD(v173) = 257;
  v167[0] = "1";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, v80, v81, (char)v169, v170, v171, v172, 1u);
  if ( (*(_BYTE *)(a2 + 45) & 0x10) == 0 )
    goto LABEL_139;
LABEL_182:
  LOWORD(v173) = 257;
  v167[0] = "1";
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__ARM_FP_FAST";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, 257, 259, (char)v169, v170, v171, v172, 1u);
LABEL_139:
  v83 = *(_BYTE *)(a1 + 276);
  if ( (*(_BYTE *)(a1 + 628) & 8) != 0 )
  {
    if ( !v83 )
      goto LABEL_141;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_FP16_VECTOR_ARITHMETIC";
    LOWORD(v166) = 259;
    LOWORD(v173) = 257;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, 257, v80, v81, (char)v169, v170, v171, v172, 1u);
    v83 = *(_BYTE *)(a1 + 276);
  }
  if ( !v83 )
  {
LABEL_141:
    v84 = *(_BYTE *)(a1 + 630);
    if ( (v84 & 2) == 0 )
      goto LABEL_142;
    goto LABEL_169;
  }
  LOWORD(v173) = 257;
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_FP16_SCALAR_ARITHMETIC";
  LOWORD(v166) = 259;
  v167[0] = "1";
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, v80, v81, (char)v169, v170, v171, v172, 1u);
  v84 = *(_BYTE *)(a1 + 630);
  if ( (v84 & 2) == 0 )
  {
LABEL_142:
    if ( (v84 & 4) == 0 )
      goto LABEL_143;
    goto LABEL_170;
  }
LABEL_169:
  LOWORD(v173) = 257;
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_DOTPROD";
  LOWORD(v166) = 259;
  v167[0] = "1";
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, v80, v81, (char)v169, v170, v171, v172, 1u);
  v84 = *(_BYTE *)(a1 + 630);
  if ( (v84 & 4) == 0 )
  {
LABEL_143:
    if ( (v84 & 0x10) == 0 )
      goto LABEL_144;
    goto LABEL_171;
  }
LABEL_170:
  LOWORD(v173) = 257;
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_MATMUL_INT8";
  LOWORD(v166) = 259;
  v167[0] = "1";
  v168 = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, v80, v81, (char)v169, v170, v171, v172, 1u);
  v84 = *(_BYTE *)(a1 + 630);
  if ( (v84 & 0x10) == 0 )
  {
LABEL_144:
    if ( (v84 & 0x20) == 0 )
      goto LABEL_145;
    goto LABEL_172;
  }
LABEL_171:
  LOWORD(v173) = 257;
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_PAUTH";
  v167[0] = "1";
  v168 = 259;
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, 259, 259, (char)v169, v170, v171, v172, 1u);
  if ( (*(_BYTE *)(a1 + 630) & 0x20) == 0 )
  {
LABEL_145:
    if ( !*(_BYTE *)(a1 + 280) )
      goto LABEL_146;
LABEL_173:
    v167[0] = "1";
    LOWORD(v173) = 257;
    v168 = 259;
    LOWORD(v166) = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_BF16";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, v80, 257, (char)v169, v170, v171, v172, 1u);
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_BF16_VECTOR_ARITHMETIC";
    LOWORD(v166) = 259;
    v167[0] = "1";
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v92, v93, v94, (char)v169, v170, v171, v172, 1u);
    LOWORD(v173) = 257;
    v168 = 259;
    v163.m128i_i64[0] = (__int64)"__ARM_BF16_FORMAT_ALTERNATIVE";
    v167[0] = "1";
    LOWORD(v166) = 259;
    sub_1039E30(a3, (__int64)&v163, (__int64)v167, v95, v96, v97, (char)v169, v170, v171, v172, 1u);
    if ( (*(_BYTE *)(a2 + 172) & 1) == 0 )
      goto LABEL_147;
    goto LABEL_174;
  }
LABEL_172:
  LOWORD(v173) = 257;
  LOWORD(v166) = 259;
  v167[0] = "1";
  v168 = 259;
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_BTI";
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, 259, v80, v81, (char)v169, v170, v171, v172, 1u);
  if ( *(_BYTE *)(a1 + 280) )
    goto LABEL_173;
LABEL_146:
  if ( (*(_BYTE *)(a2 + 172) & 1) == 0 )
    goto LABEL_147;
LABEL_174:
  LOWORD(v173) = 257;
  v168 = 259;
  v167[0] = "1";
  v163.m128i_i64[0] = (__int64)"__ARM_FEATURE_BTI_DEFAULT";
  LOWORD(v166) = 259;
  sub_1039E30(a3, (__int64)&v163, (__int64)v167, v79, 259, v81, (char)v169, v170, v171, v172, 1u);
LABEL_147:
  v85 = (*(_BYTE *)(a2 + 213) >> 4) & 3;
  if ( v85 )
  {
    LOWORD(v166) = 265;
    v168 = 259;
    v163.m128i_i32[0] = 4 * (v85 == 2) + 1;
    LOWORD(v173) = 257;
    v167[0] = "__ARM_FEATURE_PAC_DEFAULT";
    sub_1039E30(a3, (__int64)v167, (__int64)&v163, 259, v80, v81, (char)v169, v170, v171, v172, 1u);
  }
  result = (_BYTE *)*(unsigned int *)(a1 + 616);
  if ( (_DWORD)result == 18 )
  {
LABEL_152:
    LOWORD(v166) = 257;
    v167[0] = "1";
    v168 = 259;
    v169 = "__ARM_FEATURE_QRDMX";
    LOWORD(v173) = 259;
    return sub_1039E30(
             a3,
             (__int64)&v169,
             (__int64)v167,
             v79,
             v80,
             257,
             v163.m128i_i8[0],
             v163.m128i_i32[2],
             v164,
             v165,
             1u);
  }
  if ( (int)result <= 18 )
  {
    if ( (_DWORD)result != 17 )
      return result;
    goto LABEL_152;
  }
  if ( (int)result <= 32 )
  {
    v167[0] = "1";
    LOWORD(v166) = 257;
    v168 = 259;
    v169 = "__ARM_FEATURE_COMPLEX";
    LOWORD(v173) = 259;
    sub_1039E30(a3, (__int64)&v169, (__int64)v167, 259, v80, v81, v163.m128i_i8[0], v163.m128i_i32[2], v164, v165, 1u);
    LOWORD(v166) = 257;
    v168 = 259;
    v167[0] = "1";
    v169 = "__ARM_FEATURE_QRDMX";
    LOWORD(v173) = 259;
    return sub_1039E30(
             a3,
             (__int64)&v169,
             (__int64)v167,
             v90,
             259,
             v91,
             v163.m128i_i8[0],
             v163.m128i_i32[2],
             v164,
             v165,
             1u);
  }
  return result;
}
