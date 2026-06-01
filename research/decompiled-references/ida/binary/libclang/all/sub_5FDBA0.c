__int64 __fastcall sub_5FDBA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        __int128 a15,
        __int128 a16,
        __int64 a17,
        double a18,
        double a19,
        __int64 a20)
{
  __int64 v12; // rbp
  __int32 v13; // r14d
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  unsigned __int64 v19; // r12
  const __m128i *v20; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  const __m128i *v24; // r13
  const __m128i *v25; // r15
  __m128i v26; // xmm0
  __int64 v27; // rcx
  unsigned int v28; // r13d
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // esi
  unsigned int v34; // edx
  unsigned int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __m128i v38; // xmm0
  __m128i v39; // xmm2
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  __int64 v42; // rax
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  unsigned int v46; // eax
  __int64 v47; // rbx
  __m128i *p_si128; // r12
  unsigned __int64 v49; // r14
  __m128i v50; // xmm0
  __int64 v51; // rbx
  __int64 v52; // rax
  __m128i v53; // xmm0
  unsigned __int32 v54; // r13d
  _BYTE *v55; // rdi
  __m128i v56; // xmm1
  __m128i v57; // xmm1
  __int64 v58; // rax
  unsigned int v59; // ecx
  __int64 v60; // r15
  unsigned int v61; // r13d
  __int64 v62; // rbx
  __int64 v63; // r13
  unsigned int v64; // r12d
  __m128i *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 *v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 v73; // rdx
  __int64 *v74; // rax
  unsigned __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rbx
  _WORD *v78; // r13
  __m128i v79; // xmm0
  int v80; // edx
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  __int64 v84; // rdx
  __m128i v85; // xmm0
  char *v86; // rcx
  __m128i *v87; // rsi
  __m128i *v88; // rdx
  __m128i v89; // xmm0
  __int64 v90; // rdx
  char *v91; // rcx
  __m128i *v92; // rax
  __m128i *v93; // rdx
  __int64 v94; // r14
  unsigned int v95; // r13d
  size_t v96; // rdx
  __int64 v97; // rax
  __m128i v98; // xmm0
  __int64 v99; // r15
  int v100; // edx
  int v101; // ecx
  int v102; // r8d
  int v103; // r9d
  __int64 v104; // rax
  int v105; // eax
  __m128i *v106; // rax
  __int64 v107; // rax
  const __m128i *v108; // rbx
  unsigned __int64 v109; // r9
  __m128i *v110; // r13
  __int64 v111; // r15
  __m128i v112; // xmm0
  __int64 v113; // rax
  __int64 v114; // rax
  __m128i v115; // xmm0
  unsigned __int32 v116; // r12d
  const __m128i *v117; // rax
  size_t v118; // rdx
  __m128i *v119; // r15
  unsigned __int64 v120; // r9
  __m128i *v121; // rdi
  __int32 v122; // r15d
  _BYTE *v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 *v127; // rax
  unsigned __int64 v128; // rdx
  int v129; // r15d
  int v130; // eax
  __m128i *v131; // rax
  __m128i v132; // [rsp+0h] [rbp-1B8h]
  __m128i v133; // [rsp+20h] [rbp-198h]
  __m128i v134; // [rsp+20h] [rbp-198h]
  __m128i v135; // [rsp+20h] [rbp-198h]
  __m128i v136; // [rsp+20h] [rbp-198h]
  __m128i v137; // [rsp+20h] [rbp-198h]
  __m128i v138; // [rsp+20h] [rbp-198h]
  __m128i v139; // [rsp+20h] [rbp-198h]
  __m128i v140; // [rsp+20h] [rbp-198h]
  __m128i v141; // [rsp+30h] [rbp-188h]
  unsigned int v142; // [rsp+40h] [rbp-178h]
  __int64 v143; // [rsp+40h] [rbp-178h]
  __int64 v144; // [rsp+40h] [rbp-178h]
  int v145; // [rsp+48h] [rbp-170h]
  __int64 TranslationUnit; // [rsp+48h] [rbp-170h]
  unsigned int v147; // [rsp+48h] [rbp-170h]
  unsigned int v148; // [rsp+50h] [rbp-168h]
  __int64 v149; // [rsp+50h] [rbp-168h]
  unsigned int v150; // [rsp+50h] [rbp-168h]
  _BYTE *v151; // [rsp+50h] [rbp-168h]
  __int64 v152; // [rsp+50h] [rbp-168h]
  double v153[2]; // [rsp+58h] [rbp-160h] BYREF
  __int64 v154; // [rsp+68h] [rbp-150h]
  int v155; // [rsp+74h] [rbp-144h]
  char v156; // [rsp+7Bh] [rbp-13Dh]
  unsigned int v157; // [rsp+7Ch] [rbp-13Ch]
  void *v158; // [rsp+80h] [rbp-138h] BYREF
  __int64 v159; // [rsp+88h] [rbp-130h]
  __int128 v160; // [rsp+90h] [rbp-128h] BYREF
  __int128 v161; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v162[24]; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v163; // [rsp+C8h] [rbp-F0h]
  __m128i v164; // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v165; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i v166; // [rsp+F0h] [rbp-C8h] BYREF
  __m128i v167; // [rsp+100h] [rbp-B8h] BYREF
  __m128i v168; // [rsp+110h] [rbp-A8h] BYREF
  __m128i v169; // [rsp+120h] [rbp-98h]
  int v170; // [rsp+130h] [rbp-88h]
  __m128i si128; // [rsp+140h] [rbp-78h] BYREF
  __m128i v172; // [rsp+150h] [rbp-68h] BYREF
  __m128i v173; // [rsp+160h] [rbp-58h]
  void *ptr; // [rsp+170h] [rbp-48h]
  unsigned __int64 v175; // [rsp+178h] [rbp-40h]
  _BYTE v176[56]; // [rsp+180h] [rbp-38h] BYREF

  v12 = a1;
  v13 = a15;
  v142 = a17;
  v160 = (__int128)_mm_loadu_si128((const __m128i *)&a15);
  v155 = HIDWORD(a17);
  v161 = (__int128)_mm_loadu_si128((const __m128i *)&a16);
  v153[1] = a18;
  v153[0] = a19;
  v154 = a20;
  v14 = sub_5FD3D0(a1, a2, a3, a4, a5, a6, v160, v161);
  v145 = v14;
  v18 = v14;
  v19 = HIDWORD(v14);
  v148 = HIDWORD(v14);
  LOBYTE(v20) = HIDWORD(v14) != 0 && (_DWORD)v14 != 0;
  v156 = (char)v20;
  if ( !(_BYTE)v20 )
    return 2;
  v22 = *(unsigned int *)(a1 + 296);
  si128 = _mm_load_si128((const __m128i *)&v160);
  v172 = _mm_load_si128((const __m128i *)&v161);
  if ( (_DWORD)v22 )
  {
    v23 = *(_QWORD *)(a1 + 288) + (v22 << 6) - 64;
    v20 = *(const __m128i **)(v23 + 48);
    v24 = (const __m128i *)((char *)v20 + 40 * *(unsigned int *)(v23 + 56));
    if ( v20 != v24 )
    {
      v25 = *(const __m128i **)(v23 + 48);
      do
      {
        v133 = _mm_load_si128(&si128);
        v141 = _mm_load_si128(&v172);
        v132 = _mm_loadu_si128(v25);
        v26 = _mm_loadu_si128(v25 + 1);
        if ( (unsigned __int8)sub_63A900(
                                a1,
                                a2,
                                (_DWORD)v20,
                                v15,
                                v16,
                                v17,
                                v132.m128i_i32[0],
                                v132.m128i_i64[1],
                                v26.m128i_i64[0],
                                v26.m128i_i64[1],
                                v133.m128i_i32[0],
                                v133.m128i_i64[1],
                                v141.m128i_i64[0],
                                v141.m128i_i64[1]) )
        {
          if ( v25[2].m128i_i32[0] == 1 )
            return 1;
        }
        v25 = (const __m128i *)((char *)v25 + 40);
      }
      while ( v24 != v25 );
    }
  }
  if ( !*(_BYTE *)(a1 + 280) )
  {
    switch ( v13 )
    {
      case 2:
      case 4:
      case 31:
      case 32:
        v135 = _mm_load_si128((const __m128i *)&v160);
        v66 = sub_63A250(a1, a2, (_DWORD)v20, v15, v16, v17, v135.m128i_i32[0], v135.m128i_i64[1]);
        if ( !v66 )
          goto LABEL_79;
        if ( (*(_BYTE *)(v66 + 29) & 1) == 0 )
          goto LABEL_14;
        v67 = sub_79A2B0(v66);
        v68 = *(__int64 **)v67;
        v69 = *(_QWORD *)v67 + 8LL * *(unsigned int *)(v67 + 8);
        if ( (unsigned __int64)v68 < v69 )
        {
          while ( 1 )
          {
            v27 = *v68;
            if ( *(_WORD *)(*v68 + 32) == 209 )
              break;
            if ( (__int64 *)v69 == ++v68 )
              goto LABEL_14;
          }
        }
        else
        {
          if ( v68 == (__int64 *)v69 )
            goto LABEL_14;
          while ( 1 )
          {
            v27 = *(_QWORD *)v69;
            if ( *(_WORD *)(*(_QWORD *)v69 + 32LL) == 209 )
              break;
            v69 += 8LL;
            if ( v68 == (__int64 *)v69 )
              goto LABEL_14;
          }
        }
        if ( v68 == (__int64 *)v69 )
          goto LABEL_14;
        *(_BYTE *)(a1 + 280) = 1;
        goto LABEL_79;
      case 14:
        LODWORD(v160) = 14;
        v136 = _mm_load_si128((const __m128i *)&v160);
        v70 = sub_63A250(a1, a2, (_DWORD)v20, v15, v16, v17, v136.m128i_i32[0], v136.m128i_i64[1]);
        if ( v70 && (*(_BYTE *)(v70 + 28) & 0x7F) == 0x49 )
          *(_BYTE *)(a1 + 280) = *(_WORD *)(v70 + 74) != 0;
        goto LABEL_79;
      case 16:
      case 17:
        v134 = _mm_load_si128((const __m128i *)&v160);
        v30 = sub_63A250(a1, a2, (_DWORD)v20, v15, v16, v17, v134.m128i_i32[0], v134.m128i_i64[1]);
        if ( !v30 || (*(_BYTE *)(v30 + 28) & 0x7F) != 0x10 )
          goto LABEL_120;
        if ( ((*(_QWORD *)(v30 + 56) >> 26) & 0x7F) != 0 )
          goto LABEL_119;
        v31 = *(_QWORD *)(v30 + 96);
        v27 = v31 + 8LL * *(unsigned int *)(v30 + 104);
        if ( v31 == v27 )
        {
          if ( v13 == 16 )
            goto LABEL_13;
          goto LABEL_14;
        }
        v32 = *(_QWORD *)(v30 + 96);
        while ( (*(_BYTE *)(*(_QWORD *)v32 + 97LL) & 0x10) == 0 || (*(_WORD *)(*(_QWORD *)v32 + 97LL) & 0xFE0) == 0 )
        {
          v32 += 8;
          if ( v27 == v32 )
          {
            if ( v13 == 16 )
              goto LABEL_13;
            v157 = *(_DWORD *)(a1 + 20);
            goto LABEL_27;
          }
        }
LABEL_119:
        *(_BYTE *)(a1 + 280) = 1;
LABEL_120:
        if ( v13 != 16 )
          goto LABEL_79;
        goto LABEL_13;
      case 21:
        LODWORD(v160) = 21;
        v137 = _mm_load_si128((const __m128i *)&v160);
        v71 = sub_63A250(a1, a2, (_DWORD)v20, v15, v16, v17, v137.m128i_i32[0], v137.m128i_i64[1]);
        v72 = v71;
        if ( !v71 )
          goto LABEL_79;
        if ( (*(_BYTE *)(v71 + 28) & 0x7Fu) - 33 > 3 )
          goto LABEL_14;
        if ( (*(_BYTE *)(v71 + 29) & 1) == 0 )
          goto LABEL_79;
        v73 = sub_79A2B0(v71);
        v74 = *(__int64 **)v73;
        v75 = *(_QWORD *)v73 + 8LL * *(unsigned int *)(v73 + 8);
        if ( (unsigned __int64)v74 < v75 )
        {
          while ( 1 )
          {
            v27 = *v74;
            if ( *(_WORD *)(*v74 + 32) == 209 )
              break;
            if ( (__int64 *)v75 == ++v74 )
              goto LABEL_157;
          }
        }
        else
        {
          if ( v74 == (__int64 *)v75 )
          {
LABEL_157:
            if ( (*(_BYTE *)(v72 + 29) & 1) == 0 )
            {
LABEL_79:
              v28 = *(_DWORD *)(a1 + 20);
              if ( v142 - 70 <= 3 || v142 == 350 )
                goto LABEL_30;
              goto LABEL_16;
            }
            v126 = sub_79A2B0(v72);
            v127 = *(__int64 **)v126;
            v128 = *(_QWORD *)v126 + 8LL * *(unsigned int *)(v126 + 8);
            if ( (unsigned __int64)v127 < v128 )
            {
              while ( 1 )
              {
                v27 = *v127;
                if ( *(_WORD *)(*v127 + 32) == 313 )
                  break;
                if ( (__int64 *)v128 == ++v127 )
                  goto LABEL_79;
              }
            }
            else
            {
              if ( v127 == (__int64 *)v128 )
                goto LABEL_79;
              while ( 1 )
              {
                v27 = *(_QWORD *)v128;
                if ( *(_WORD *)(*(_QWORD *)v128 + 32LL) == 313 )
                  break;
                v128 += 8LL;
                if ( v127 == (__int64 *)v128 )
                  goto LABEL_79;
              }
            }
            if ( v127 == (__int64 *)v128 )
              goto LABEL_79;
LABEL_91:
            *(_BYTE *)(a1 + 280) = 1;
            goto LABEL_14;
          }
          while ( 1 )
          {
            v27 = *(_QWORD *)v75;
            if ( *(_WORD *)(*(_QWORD *)v75 + 32LL) == 209 )
              break;
            v75 += 8LL;
            if ( v74 == (__int64 *)v75 )
              goto LABEL_157;
          }
        }
        if ( v74 != (__int64 *)v75 )
          goto LABEL_91;
        goto LABEL_157;
      default:
        goto LABEL_48;
    }
  }
  if ( v13 != 16 )
  {
LABEL_48:
    v157 = *(_DWORD *)(a1 + 20);
    if ( (unsigned int)(v13 - 500) > 3 )
    {
LABEL_27:
      v27 = v142;
      v28 = v157;
      if ( v142 - 70 <= 3 || v142 == 350 || (unsigned int)(v13 - 400) <= 0x29 )
        goto LABEL_30;
      goto LABEL_16;
    }
    v58 = *(unsigned int *)(a1 + 24);
    v59 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) = v58;
    if ( (unsigned int)v58 < v59 )
    {
      while ( 1 )
      {
        v60 = *(_QWORD *)(a1 + 272);
        v61 = *(_DWORD *)(*(_QWORD *)a1 + 24LL * (unsigned int)v58 + 4);
        if ( v145 == v61 || v148 == v61 )
          break;
        if ( !(unsigned __int8)sub_CB1620(*(_QWORD *)(a1 + 272), v61) )
        {
          sub_CB1620(v60, v148);
          v58 = *(unsigned int *)(a1 + 20);
          v59 = *(_DWORD *)(a1 + 16);
          break;
        }
        v59 = *(_DWORD *)(a1 + 16);
        v58 = (unsigned int)(*(_DWORD *)(a1 + 20) + 1);
        *(_DWORD *)(a1 + 20) = v58;
        if ( (unsigned int)v58 >= v59 )
          goto LABEL_63;
      }
      if ( (unsigned int)v58 < v59 )
      {
        if ( v13 != 502 )
        {
          while ( 1 )
          {
            v62 = (unsigned int)v58;
            v63 = *(_QWORD *)(a1 + 272);
            v64 = *(_DWORD *)(*(_QWORD *)a1 + 24LL * (unsigned int)v58 + 4);
            if ( v145 != v64
              && v148 != v64
              && ((unsigned __int8)sub_CB1620(*(_QWORD *)(a1 + 272), v64) || (unsigned __int8)sub_CB1620(v63, v148)) )
            {
              goto LABEL_111;
            }
            v65 = (__m128i *)(*(_QWORD *)(a1 + 8) + 32 * v62);
            if ( v65->m128i_i32[0] != 502 )
            {
              LODWORD(v160) = v13;
              *v65 = _mm_load_si128((const __m128i *)&v160);
              v65[1] = _mm_load_si128((const __m128i *)&v161);
            }
            LODWORD(v58) = *(_DWORD *)(a1 + 20) + 1;
            *(_DWORD *)(a1 + 20) = v58;
            if ( (unsigned int)v58 >= *(_DWORD *)(a1 + 16) )
              goto LABEL_63;
          }
        }
        v94 = *(_QWORD *)(a1 + 272);
        v95 = *(_DWORD *)(*(_QWORD *)a1 + 24 * v58 + 4);
        if ( (_DWORD)v18 == v95 )
        {
          LODWORD(v160) = 502;
          v106 = (__m128i *)(*(_QWORD *)(a1 + 8) + 32 * v58);
          *v106 = _mm_load_si128((const __m128i *)&v160);
          v106[1] = _mm_load_si128((const __m128i *)&v161);
        }
        else if ( (_DWORD)v19 != v95
               && ((unsigned __int8)sub_CB1620(*(_QWORD *)(a1 + 272), v95) || (unsigned __int8)sub_CB1620(v94, v148)) )
        {
LABEL_111:
          LODWORD(v58) = *(_DWORD *)(a1 + 20);
          goto LABEL_63;
        }
        LODWORD(v58) = *(_DWORD *)(a1 + 20) + 1;
      }
    }
LABEL_63:
    *(_QWORD *)(a1 + 20) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v157), _mm_cvtsi32_si128(v58)).m128i_u64[0];
    return 2;
  }
LABEL_13:
  if ( v142 != 14 )
  {
LABEL_14:
    v27 = v142;
    v28 = *(_DWORD *)(a1 + 20);
    if ( v142 - 70 <= 3 || v142 == 350 )
    {
LABEL_30:
      sub_638F50(v162, 70, 0);
      v29 = *(_DWORD *)v162;
      v142 = *(_DWORD *)v162;
LABEL_31:
      *(_DWORD *)v162 = v29;
      v33 = 1;
      sub_5F9090(
        a1,
        1,
        v18,
        v27,
        v16,
        v17,
        (__int128)_mm_load_si128((const __m128i *)v162),
        _mm_load_si128((const __m128i *)&v162[16]));
      v38 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 20));
      if ( (unsigned int)(v13 - 100) > 0x38 )
      {
        LODWORD(v160) = v13;
        v56 = _mm_load_si128((const __m128i *)&v160);
        ptr = v176;
        si128 = v56;
        v57 = _mm_load_si128((const __m128i *)&v161);
        v175 = 0;
        v172 = v57;
        v158 = &v160;
        v173 = _mm_unpacklo_epi64(
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v19)),
                 _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), v38));
        goto LABEL_46;
      }
      if ( (unsigned int)_mm_cvtsi128_si32(v38) < *(_DWORD *)(a1 + 16) )
      {
        LODWORD(v160) = v13;
        v140 = _mm_load_si128((const __m128i *)&v160);
        v97 = sub_63A260(
                a1,
                1,
                v34,
                v35,
                v36,
                v37,
                v140.m128i_i32[0],
                v140.m128i_i32[2],
                _mm_load_si128((const __m128i *)&v161).m128i_i64[0]);
        v98 = _mm_load_si128((const __m128i *)&v160);
        *(_QWORD *)&v153[0] = v97;
        v99 = v97;
        v104 = sub_63A250(a1, 1, v100, v101, v102, v103, v98.m128i_i32[0], v98.m128i_i64[1]);
        v35 = *(_DWORD *)(a1 + 20);
        v157 = v35;
        v147 = v35;
        v149 = v104;
        if ( v104 )
        {
          LODWORD(a1) = v99;
          if ( (unsigned int)sub_AC6DA0(v99) )
          {
            v150 = *(_DWORD *)(v149 + 24);
            v34 = v150;
            if ( v150 )
            {
              LODWORD(a1) = v99;
              v105 = sub_AC6DA0(v99);
              v34 = v150;
              if ( v150 == v105 )
              {
                LODWORD(a1) = LODWORD(v153[0]);
                v152 = v157;
                v129 = *(_DWORD *)(*(_QWORD *)v12 + 24LL * v157 + 4);
                v130 = sub_AC6DA0(*(_QWORD *)&v153[0]);
                v34 = v152;
                if ( v129 == v130 )
                {
                  if ( v142 - 70 > 3 )
                  {
                    v131 = (__m128i *)(*(_QWORD *)(v12 + 8) + 32 * v152);
                    v33 = v131->m128i_i32[0];
                    v34 = v131->m128i_i32[0] - 70;
                    if ( v34 <= 3 )
                    {
                      *v131 = _mm_load_si128((const __m128i *)v162);
                      v131[1] = _mm_load_si128((const __m128i *)&v162[16]);
                      v157 = *(_DWORD *)(v12 + 20);
                    }
                  }
                  v147 = v157 + 1;
                  *(_DWORD *)(v12 + 20) = v157 + 1;
                }
              }
            }
          }
        }
        v39 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v19)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v147)));
      }
      else
      {
        v39 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v19)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), v38));
      }
      v40 = _mm_load_si128((const __m128i *)&v161);
      LODWORD(v160) = v13;
      v41 = _mm_load_si128((const __m128i *)&v160);
      v158 = &v160;
      ptr = v176;
      v175 = 0;
      si128 = v41;
      v172 = v40;
      v173 = v39;
      v164 = v41;
      v165 = v40;
      v159 = 0;
      v168 = v41;
      v169 = v40;
      v42 = sub_63A260(a1, v33, v34, v35, v36, v37, v41.m128i_i32[0], v41.m128i_i32[2], v40.m128i_i64[0]);
      if ( (*(_WORD *)v42 & 0x1FF) != 0x5C
        || (*(_BYTE *)(v42 + 4) & 0x3Fu) - 42 > 1
        || (v76 = *(unsigned __int8 *)(v42 + 3), v77 = *(_QWORD *)(v42 + v76), (*(_WORD *)v77 & 0x1FF) != 0x50)
        || (v78 = *(_WORD **)(v77 + 16), (*v78 & 0x1FF) != 0x48) )
      {
        v46 = v159;
        goto LABEL_37;
      }
      v138 = _mm_load_si128(&v164);
      v143 = sub_63A250(a1, v33, v76, v43, v44, v45, v138.m128i_i32[0], v138.m128i_i64[1]);
      v139 = _mm_load_si128(&v164);
      v79 = _mm_load_si128(&v165);
      TranslationUnit = clang_Cursor_getTranslationUnit(
                          a1,
                          v33,
                          v80,
                          v81,
                          v82,
                          v83,
                          v139.m128i_i32[0],
                          v139.m128i_i32[2],
                          v79.m128i_i32[0],
                          v79.m128i_i64[1]);
      sub_639270(&v166, v78, v143, TranslationUnit, 0);
      v84 = (unsigned int)v159;
      v85 = _mm_load_si128(&v166);
      v170 = 2;
      v168 = v85;
      v169 = _mm_load_si128(&v167);
      if ( HIDWORD(v159) >= (unsigned __int64)(unsigned int)v159 + 1 )
      {
        v86 = (char *)v158;
        v87 = &v168;
        goto LABEL_99;
      }
      if ( &v168 < v158 )
      {
        v125 = (unsigned int)v159 + 1LL;
      }
      else
      {
        v151 = v158;
        v125 = (unsigned int)v159 + 1LL;
        if ( &v168 < (__m128i *)((char *)v158 + 40 * (unsigned int)v159) )
        {
          sub_25D6060(&v158, &v160, v125, 40);
          v84 = (unsigned int)v159;
          v86 = (char *)v158;
          v87 = (__m128i *)((char *)v158 + (char *)&v168 - v151);
          goto LABEL_99;
        }
      }
      sub_25D6060(&v158, &v160, v125, 40);
      v84 = (unsigned int)v159;
      v86 = (char *)v158;
      v87 = &v168;
LABEL_99:
      v88 = (__m128i *)&v86[40 * v84];
      *v88 = _mm_loadu_si128(v87);
      v89 = _mm_loadu_si128(v87 + 1);
      LODWORD(v159) = v159 + 1;
      v88[1] = v89;
      v88[2].m128i_i64[0] = v87[2].m128i_i64[0];
      sub_639270(&v166, v77, v143, TranslationUnit, 0);
      v90 = (unsigned int)v159;
      v170 = 1;
      v168 = _mm_load_si128(&v166);
      v169 = _mm_load_si128(&v167);
      if ( HIDWORD(v159) >= (unsigned __int64)(unsigned int)v159 + 1 )
      {
        v91 = (char *)v158;
        v92 = &v168;
LABEL_101:
        v93 = (__m128i *)&v91[40 * v90];
        *v93 = _mm_loadu_si128(v92);
        v93[1] = _mm_loadu_si128(v92 + 1);
        v93[2].m128i_i64[0] = v92[2].m128i_i64[0];
        v46 = v159 + 1;
        LODWORD(v159) = v159 + 1;
LABEL_37:
        if ( v46 )
        {
          if ( ptr != v176 )
          {
            free(ptr);
            v46 = v159;
          }
          ptr = v158;
          v175 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), _mm_cvtsi32_si128(HIDWORD(v159))).m128i_u64[0];
LABEL_41:
          v47 = *(unsigned int *)(v12 + 296);
          p_si128 = &si128;
          v49 = *(_QWORD *)(v12 + 288);
          if ( *(unsigned int *)(v12 + 300) < (unsigned __int64)(v47 + 1) )
          {
            if ( (unsigned __int64)&si128 < v49 || (unsigned __int64)&si128 >= v49 + (v47 << 6) )
            {
              v144 = -1;
              v156 = 0;
            }
            else
            {
              v144 = (__int64)((__int64)si128.m128i_i64 - v49) >> 6;
            }
            v107 = sub_25D5F70(v12 + 288, v12 + 304, v47 + 1, 64, &v168);
            v108 = *(const __m128i **)(v12 + 288);
            v49 = v107;
            v109 = (unsigned __int64)*(unsigned int *)(v12 + 296) << 6;
            v110 = (__m128i *)((char *)v108 + v109);
            if ( v108 != (const __m128i *)&v108->m128i_i8[v109] )
            {
              v111 = v107 + 48;
              do
              {
                v112 = _mm_loadu_si128(v108);
                v113 = v108[2].m128i_i64[0];
                v108 += 4;
                *(_QWORD *)(v111 - 16) = v113;
                v114 = v108[-2].m128i_i64[1];
                *(__m128i *)(v111 - 48) = v112;
                v115 = _mm_loadu_si128(v108 - 3);
                *(_QWORD *)v111 = v111 + 16;
                *(_QWORD *)(v111 + 8) = 0;
                v116 = v108[-1].m128i_u32[2];
                *(_QWORD *)(v111 - 8) = v114;
                *(__m128i *)(v111 - 32) = v115;
                if ( v116 && (const __m128i *)v111 != &v108[-1] )
                {
                  v117 = (const __m128i *)v108[-1].m128i_i64[0];
                  if ( v117 == v108 )
                  {
                    sub_25D6060(v111, v111 + 16, v116, 40);
                    v118 = 40LL * v108[-1].m128i_u32[2];
                    if ( v118 )
                      memcpy(*(void **)v111, (const void *)v108[-1].m128i_i64[0], v118);
                    *(_DWORD *)(v111 + 8) = v116;
                    v108[-1].m128i_i32[2] = 0;
                  }
                  else
                  {
                    *(_QWORD *)v111 = v117;
                    *(_DWORD *)(v111 + 8) = v108[-1].m128i_i32[2];
                    *(_DWORD *)(v111 + 12) = v108[-1].m128i_i32[3];
                    v108[-1].m128i_i64[0] = (__int64)v108;
                    v108[-1].m128i_i64[1] = 0;
                  }
                }
                v111 += 64;
              }
              while ( v110 != v108 );
              v119 = *(__m128i **)(v12 + 288);
              v120 = (unsigned __int64)*(unsigned int *)(v12 + 296) << 6;
              v110 = (__m128i *)((char *)v119 + v120);
              if ( v119 != (__m128i *)&v119->m128i_i8[v120] )
              {
                do
                {
                  v121 = (__m128i *)v110[-1].m128i_i64[0];
                  if ( v121 != v110 )
                    free(v121);
                  v110 -= 4;
                }
                while ( v119 != v110 );
                v110 = *(__m128i **)(v12 + 288);
              }
            }
            v122 = v168.m128i_i32[0];
            if ( (__m128i *)(v12 + 304) != v110 )
              free(v110);
            p_si128 = &si128;
            *(_QWORD *)(v12 + 288) = v49;
            *(_DWORD *)(v12 + 300) = v122;
            v47 = *(unsigned int *)(v12 + 296);
            if ( v156 )
              p_si128 = (__m128i *)(v49 + (v144 << 6));
          }
          v50 = _mm_loadu_si128(p_si128);
          v51 = v49 + (v47 << 6);
          *(_QWORD *)(v51 + 32) = p_si128[2].m128i_i64[0];
          v52 = p_si128[2].m128i_i64[1];
          *(__m128i *)v51 = v50;
          v53 = _mm_loadu_si128(p_si128 + 1);
          *(_QWORD *)(v51 + 48) = v51 + 64;
          *(_QWORD *)(v51 + 56) = 0;
          v54 = p_si128[3].m128i_u32[2];
          *(_QWORD *)(v51 + 40) = v52;
          *(__m128i *)(v51 + 16) = v53;
          if ( v54 && (__m128i *)(v51 + 48) != &p_si128[3] )
          {
            sub_25D6060(v51 + 48, v51 + 64, v54, 40);
            v96 = 40LL * p_si128[3].m128i_u32[2];
            if ( v96 )
              memcpy(*(void **)(v51 + 48), (const void *)p_si128[3].m128i_i64[0], v96);
            *(_DWORD *)(v51 + 56) = v54;
          }
          v55 = ptr;
          ++*(_DWORD *)(v12 + 296);
          if ( v55 != v176 )
            free(v55);
          return 2;
        }
LABEL_46:
        LODWORD(v175) = 0;
        if ( v158 != &v160 )
          free(v158);
        goto LABEL_41;
      }
      v123 = v158;
      if ( &v168 < v158 )
      {
        v124 = (unsigned int)v159 + 1LL;
      }
      else
      {
        v124 = (unsigned int)v159 + 1LL;
        if ( &v168 < (__m128i *)((char *)v158 + 40 * (unsigned int)v159) )
        {
          sub_25D6060(&v158, &v160, v124, 40);
          v91 = (char *)v158;
          v90 = (unsigned int)v159;
          v92 = (__m128i *)((char *)v158 + (char *)&v168 - v123);
          goto LABEL_101;
        }
      }
      sub_25D6060(&v158, &v160, v124, 40);
      v90 = (unsigned int)v159;
      v91 = (char *)v158;
      v92 = &v168;
      goto LABEL_101;
    }
LABEL_16:
    *(_DWORD *)&v162[4] = v155;
    *(__m128 *)&v162[8] = _mm_loadh_ps(v153);
    v163 = v154;
    v29 = v142;
    goto LABEL_31;
  }
  return 1;
}

