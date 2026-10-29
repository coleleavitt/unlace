__int64 *__fastcall sub_19CB370(
        __m128 *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        char a14,
        _QWORD *a15)
{
  __int64 v18; // r14
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // al
  _WORD *v29; // rax
  __int64 v30; // rbp
  _BYTE *v31; // r14
  __int64 v32; // r11
  unsigned __int8 v33; // al
  __int64 v34; // rsi
  __m128 v35; // xmm0
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r11
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int8 v45; // al
  int v46; // r15d
  unsigned __int64 v47; // rbp
  unsigned __int32 v48; // r11d
  unsigned __int32 v49; // eax
  bool v50; // al
  unsigned __int64 v51; // rax
  __int64 v52; // r15
  __int64 *v53; // rsi
  __int64 *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  _QWORD *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rbx
  int v63; // eax
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r13
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r12
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // eax
  _DWORD *v82; // rax
  _QWORD *v83; // rsi
  unsigned __int8 v84; // r15
  __int64 v85; // r14
  __int64 v86; // rax
  int v87; // ebx
  __int64 v88; // rdx
  __int64 v89; // rbp
  __int64 v90; // r12
  _WORD *v91; // rax
  __int64 v92; // r11
  __int64 v93; // r13
  __int16 v94; // ax
  unsigned __int8 v95; // al
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  void *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rcx
  char v104; // al
  __int64 v105; // rax
  __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  __int64 v112; // rdx
  char v113; // si
  __int64 v114; // rcx
  bool v115; // al
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // r11
  char v121; // al
  char v122; // r14
  _QWORD *v123; // rsi
  char v124; // al
  char v125; // al
  _QWORD *v126; // rsi
  char v127; // al
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rbx
  char v131; // dl
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r14
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rax
  __int64 v140; // rdx
  unsigned int v141; // ecx
  __int64 v142; // rax
  __int64 v143; // rax
  char v144; // al
  char v145; // [rsp-20h] [rbp-188h]
  unsigned int v146; // [rsp+0h] [rbp-168h]
  _DWORD *v147; // [rsp+0h] [rbp-168h]
  __int64 v148; // [rsp+0h] [rbp-168h]
  __int64 v149; // [rsp+8h] [rbp-160h] BYREF
  unsigned __int32 v150; // [rsp+10h] [rbp-158h]
  unsigned __int8 v151; // [rsp+14h] [rbp-154h]
  bool v152; // [rsp+16h] [rbp-152h]
  __int8 v153; // [rsp+17h] [rbp-151h]
  _DWORD *v154; // [rsp+18h] [rbp-150h] BYREF
  unsigned int v155; // [rsp+20h] [rbp-148h] BYREF
  int v156; // [rsp+24h] [rbp-144h] BYREF
  __int64 v157; // [rsp+28h] [rbp-140h] BYREF
  __int64 v158; // [rsp+30h] [rbp-138h] BYREF
  __int64 v159; // [rsp+38h] [rbp-130h]
  __m128 v160; // [rsp+40h] [rbp-128h] BYREF
  __m128 *v161; // [rsp+50h] [rbp-118h]
  _BYTE v162[24]; // [rsp+60h] [rbp-108h] BYREF
  void *v163; // [rsp+78h] [rbp-F0h]
  __int64 v164; // [rsp+80h] [rbp-E8h]
  char v165[24]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v166; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v167; // [rsp+A8h] [rbp-C0h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B8h]
  unsigned int v169; // [rsp+BCh] [rbp-ACh]
  __m128i v170; // [rsp+C0h] [rbp-A8h] BYREF
  char v171; // [rsp+118h] [rbp-50h]
  unsigned int v172; // [rsp+120h] [rbp-48h]
  char v173; // [rsp+124h] [rbp-44h]

  v154 = a2;
  v146 = a4;
  v18 = a13;
  v19 = *(_DWORD *)a11 == 1;
  v151 = a5;
  if ( v19 )
    return (__int64 *)sub_19C5C90(
                        (__int64)a1,
                        (unsigned __int64)v154,
                        a3,
                        v151,
                        v146,
                        (__int64)a6,
                        *(double *)a7.m128_u64,
                        a9,
                        a10,
                        a11 + 120,
                        a12);
  v20 = *(_QWORD *)(a11 + 120) & 7LL;
  if ( (_DWORD)v20 == 6 && *(_DWORD *)(*(_QWORD *)(a11 + 120) & 0xFFFFFFFFFFFFFFF8LL) == 15 )
  {
    v43 = a6->m128i_i64[1];
    if ( v43 )
    {
      if ( sub_E917A0(v43, (__int64)a2, v20, a4, a5, (__int64)a6) )
        return (__int64 *)sub_19C5C90(
                            (__int64)a1,
                            (unsigned __int64)v154,
                            a3,
                            v151,
                            v146,
                            (__int64)a6,
                            *(double *)a7.m128_u64,
                            a9,
                            a10,
                            a11 + 120,
                            a12);
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
      return (__int64 *)sub_19C5C90(
                          (__int64)a1,
                          (unsigned __int64)v154,
                          a3,
                          v151,
                          v146,
                          (__int64)a6,
                          *(double *)a7.m128_u64,
                          a9,
                          a10,
                          a11 + 120,
                          a12);
    }
  }
  v157 = a3;
  if ( v151 )
  {
    v21 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) != 42 )
      v21 = sub_F63050(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, v20, a4);
    v157 = *(_QWORD *)(v21 + 32);
  }
  v19 = *(_DWORD *)a11 == 5;
  *(_QWORD *)(a11 + 104) = v157;
  v158 = *(_QWORD *)(a11 + 120);
  v155 = *(_DWORD *)(a11 + 128);
  if ( v19 )
    return (_QWORD *)(&dword_0 + 1);
  v23 = sub_15F1640((__int64)a1, 0);
  v27 = v23;
  if ( a13 )
  {
    if ( v23 )
    {
      if ( v154 )
      {
        v28 = *(_BYTE *)(v23 + 28);
        v149 = v27;
        if ( (v28 & 0x7D) == 0x24 )
        {
          v29 = (_WORD *)sub_BFB840((__int64)v154);
          v27 = v149;
          if ( (*v29 & 0x1FF) == 0x62 && *(_QWORD *)(a13 + 24) != a13 )
          {
            while ( 1 )
            {
              v63 = *(_DWORD *)(v18 + 8);
              if ( (v63 & 0x4000) != 0 )
                break;
              v18 = *(_QWORD *)v18;
              if ( v18 == *(_QWORD *)(v18 + 24) )
                goto LABEL_14;
            }
            if ( (v63 & 0x2000) == 0 )
            {
              sub_168B9F0((__int64)&v166, &a1->m128_i64[1], v155, 0x1A0Au, 0);
              v64 = *(_BYTE *)(v149 + 28) & 0x7F;
              if ( v171 )
              {
                sub_AE9DF0((unsigned __int8 **)&v170, v64 == 36, 2u);
              }
              else if ( v173 )
              {
                v152 = v64 == 36;
                v96 = sub_168B9E0(&v166);
                v100 = v152;
                v149 = v96;
                v101 = ptr;
                if ( ptr )
                {
                  v101 = (void *)(*(__int64 (__fastcall **)(void *, __int64 *, bool))(*(_QWORD *)ptr + 32LL))(
                                   ptr,
                                   &a1->m128_i64[1],
                                   v152);
                  v100 = v152;
                }
                *(_QWORD *)v162 = v101;
                v152 = v100;
                v102 = sub_1587BC0(v149, (__int64 *)v162, v100, v97, v98, v99);
                sub_AE9DF0((unsigned __int8 **)(*v102 + 32LL * v172 + 8), v152, 2u);
              }
              sub_15F7200(&v166);
            }
          }
        }
      }
    }
  }
LABEL_14:
  if ( !*(_DWORD *)(a11 + 16) )
  {
    if ( !a15 || v151 || (v24 = (__int64)v154) == 0 || (*v154 & 0x10000) != 0 )
    {
      v47 = 1;
      v149 = (__int64)v162;
LABEL_47:
      if ( a6->m128i_i64[1] )
        v52 = sub_16A2930((__int64)a1, (__int64)a6, 0, v25, v26, v27);
      else
        v52 = (__int64)sub_169D2C0((__int64)a1, v157, v24, v25, v26, v27);
      v53 = &a1->m128_i64[1];
      if ( v47 > 1 )
      {
        sub_168B9F0((__int64)&v166, v53, v146, 0x10B3u, 0);
        v61 = sub_17B3DD0((__int64)&v166, &v158);
        v62 = v61;
        if ( *(_BYTE *)(v61 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v61 + 32), v52, 0xCu);
        }
        else if ( *(_BYTE *)(v61 + 132) )
        {
          v76 = sub_168B9E0((_QWORD *)v61);
          v77 = *(_QWORD *)(v62 + 16);
          if ( v77 )
            v77 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v77 + 32LL))(*(_QWORD *)(v62 + 16));
          *(_QWORD *)v162 = v77;
          v78 = sub_1587BC0(v76, (__int64 *)v149, v72, v73, v74, v75);
          sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * *(unsigned int *)(v62 + 128) + 8), v52, 0xCu);
        }
        LOWORD(v161) = 15917;
        v162[20] = 0;
        *(_QWORD *)&v162[12] = 0;
        v163 = (void *)(v149 + 40);
        v165[16] = 0;
        *(_DWORD *)v162 = v146;
        *(_DWORD *)&v162[4] = v146;
        v162[8] = 1;
        strcpy(v165, "->");
        v164 = 2;
        sub_1589170(v62, (_DWORD *)v149);
        if ( v163 != (void *)(v149 + 40) )
          operator delete(v163);
      }
      else
      {
        sub_168B9F0((__int64)&v166, v53, *(_DWORD *)(a11 + 128), 0x10B2u, 0);
        v54 = &v158;
        v55 = sub_17B3DD0((__int64)&v166, &v158);
        v56 = v55;
        if ( *(_BYTE *)(v55 + 120) )
        {
          v54 = (__int64 *)v52;
          sub_AE9DF0((unsigned __int8 **)(v55 + 32), v52, 0xCu);
        }
        else if ( *(_BYTE *)(v55 + 132) )
        {
          v69 = sub_168B9E0((_QWORD *)v55);
          v70 = *(_QWORD *)(v56 + 16);
          if ( v70 )
            v70 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v70 + 32LL))(*(_QWORD *)(v56 + 16));
          *(_QWORD *)v162 = v70;
          v71 = sub_1587BC0(v69, (__int64 *)v149, v65, v66, v67, v68);
          v54 = (__int64 *)v52;
          sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * *(unsigned int *)(v56 + 128) + 8), v52, 0xCu);
        }
        if ( a6->m128i_i64[1] )
        {
          *(_QWORD *)v162 = a6->m128i_i64[0];
        }
        else if ( v154 )
        {
          *(_QWORD *)v162 = sub_EEC8C0((unsigned __int64)v154, (__int64)v54, *(double *)a7.m128_u64);
        }
        else
        {
          *(_QWORD *)v162 = 0;
        }
        sub_1587DB0(v56, (__int64 *)v149);
      }
      sub_15F7200(&v166);
      return (__int64 *)v47;
    }
    v44 = a1[38].m128_i64[0];
    v45 = a1[787].m128_i8[0];
    v150 = a1[700].m128_u32[0];
    v152 = v45;
    v153 = a1[703].m128_i8[0];
    v46 = *(_DWORD *)(a1[16].m128_u64[1] + 204);
    *(_QWORD *)v162 = 0;
    v160.m128_i8[0] = 0;
    v149 = (__int64)v162;
    a1[787].m128_i8[0] = 1;
    a1[703].m128_i8[0] = 1;
    v47 = sub_19B0570((__int64)a1, v44, v24, v146, 37, (__int64 *)v162, a7, a8, &v160);
    v48 = v150;
    v49 = a1[700].m128_u32[0];
    if ( v47 >= 2 )
    {
      if ( v150 < v49 )
      {
LABEL_40:
        v47 = 1;
LABEL_41:
        v50 = v152;
        a1[700].m128_i32[0] = v48;
        a1[787].m128_i8[0] = v50;
        a1[703].m128_i8[0] = v153;
        v51 = a1[16].m128_u64[1];
        if ( *(_DWORD *)(v51 + 204) == 5 )
          *(_BYTE *)(v51 + 194) = 1;
        v24 = 3;
        if ( v46 )
          v46 = 3;
        *(_DWORD *)(v51 + 204) = v46;
        goto LABEL_47;
      }
      v166 = a6->m128i_i64[0];
      sub_E90750((__int64)&v167, &a6->m128i_i64[1]);
      v170 = _mm_loadu_si128(a6 + 2);
      v79 = sub_19CC5E0(
              (_DWORD)a1,
              *a15,
              (unsigned int)v47 & 0xFFFFFFFE,
              v146,
              37,
              (unsigned int)&v166,
              a9,
              a15[1],
              a15[2]);
      v48 = v150;
      v27 = v169;
      v47 = v79;
      if ( v169 )
      {
        free(ptr);
        v48 = v150;
      }
      v49 = a1[700].m128_u32[0];
    }
    if ( v48 >= v49 )
      goto LABEL_41;
    goto LABEL_40;
  }
  if ( a6->m128i_i64[1]
    || !v154
    || (v24 = *(unsigned __int16 *)v154, LOWORD(v24) = v24 & 0x1FF, (_WORD)v24 == 98)
    && (*(_QWORD *)v154 & 0x80000) != 0 )
  {
    if ( !a14 && (unsigned __int8)sub_19CB090((__int64)a1, (__int64)v154, v157, (unsigned int *)a6, a11, v27) )
      return (_QWORD *)(&dword_0 + 1);
  }
  v30 = a11 + 120;
  v31 = *(_BYTE **)(a11 + 8);
  if ( (unsigned int)(*(_DWORD *)a11 - 3) <= 1 )
  {
    v57 = *(unsigned int *)(a11 + 16);
    *(_WORD *)(a11 + 163) = 0;
    v58 = (_QWORD *)a1[15].m128_u64[1];
    v149 = (__int64)&v31[8 * v57];
    v59 = sub_15AB9E0((__int64)a6, v58, v24, v149, v26, v27);
    return (__int64 *)sub_C9A750(
                        (_QWORD *)a1[15].m128_u64[1],
                        *(_DWORD *)a11 == 4,
                        v154,
                        a3,
                        v151,
                        v146,
                        v59,
                        v60,
                        a9,
                        (const __m128i *)(a11 + 120),
                        a12,
                        v31,
                        (char *)v149);
  }
  v159 = *(_QWORD *)v31;
  v32 = v159 & 0xFFFFFFFFFFFFFFF8LL;
  v33 = *(_BYTE *)((v159 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
  if ( (unsigned int)v33 - 53 <= 1 || ((v33 + 52) & 0x7Fu) <= 1 )
    v32 = sub_B72ED0(v159 & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(char *)(v32 + 28) < 0 )
    return (_QWORD *)(&dword_0 + 1);
  if ( !v154 )
  {
    v149 = v32;
    if ( !(unsigned __int8)sub_B72F20(v32) )
    {
      if ( a12 || a9 )
        return (__int64 *)sub_1CD7830(a1, a6, a9, a11, 0, a12);
      else
        return (__int64 *)sub_190AE60(
                            (__int64)a1,
                            a6->m128i_i64,
                            a11 + 120,
                            v149,
                            v159 & 0xFFFFFFFFFFFFFFF8LL,
                            0,
                            (__m128i)a7,
                            a8,
                            0);
    }
    v80 = *(unsigned int *)(a11 + 128);
    v81 = a6->m128i_i32[0];
    if ( a6->m128i_i32[1] && v81 )
      v80 = v81;
    v82 = sub_19B4F00((__int64)a1, v80, a3, 1);
    v32 = v149;
    v154 = v82;
  }
  v161 = a1;
  v34 = v32;
  *(_QWORD *)&v162[16] = a1;
  v149 = (__int64)&v154;
  v35 = _mm_loadh_ps((const double *)&v149);
  v160 = v35;
  *(__m128 *)v162 = v35;
  v149 = v32;
  if ( (unsigned __int8)sub_18F5260(
                          (__int64)a1,
                          v32,
                          (int *)&v155,
                          1u,
                          0,
                          0,
                          (__m128i)v35,
                          *(double *)a8.m128_u64,
                          0,
                          0,
                          0) )
    return (_QWORD *)(&dword_0 + 1);
  v38 = v149;
  v39 = *(_BYTE *)(v149 + 28) & 0x7F;
  v40 = v39;
  v41 = (unsigned int)v39 - 49;
  if ( (unsigned int)v41 <= 2 )
  {
    if ( !**(_BYTE **)v162 && (*(_BYTE *)(**(_QWORD **)&v162[8] + 1LL) & 6) == 0 )
    {
      v42 = sub_1A0BEA0(*(_QWORD *)&v162[16], **(_QWORD **)&v162[8]);
      if ( v42 == 1 )
        return (_QWORD *)(&dword_0 + 1);
      v38 = v149;
      **(_QWORD **)&v162[8] = v42 & 0xFFFFFFFFFFFFFFFELL;
    }
    return (__int64 *)sub_19C4FE0(a1, (unsigned __int64)v154, v151, v146, (__int64)a6, v38, v35, a8, v159, a11 + 120);
  }
  if ( v39 == 48 )
  {
    v83 = (_QWORD *)a1[15].m128_u64[1];
    v84 = v151;
    v85 = v83[2390];
    v147 = v154;
    v86 = sub_15AB9E0((__int64)a6, v83, 48, v41, v36, v37);
    v87 = *(_DWORD *)(a11 + 128);
    v89 = v88;
    v90 = v86;
    v91 = (_WORD *)sub_EEE9A0(56, (_QWORD *)a1[15].m128_u64[1], 8u);
    v92 = v149;
    v93 = (__int64)v91;
    *v91 = *v91 & 0xFE00 | 0x32;
    if ( unk_2CD7484 )
    {
      sub_EE9B50(50);
      v92 = v149;
    }
    v94 = *(_WORD *)(v93 + 1);
    *(_QWORD *)(v93 + 8) = v85;
    *(_QWORD *)(v93 + 24) = v92;
    *(_DWORD *)(v93 + 32) = v87;
    *(_BYTE *)(v93 + 36) = v84;
    *(_WORD *)(v93 + 1) = v94 & 0xF801 | 2;
    *(_QWORD *)(v93 + 40) = v90;
    *(_QWORD *)(v93 + 16) = v147;
    *(_QWORD *)(v93 + 48) = v89;
    v95 = sub_B63470(v93);
    *(_BYTE *)(v93 + 1) = (v95 << 6) | *(_BYTE *)(v93 + 1) & 0x3F;
    *(_BYTE *)(v93 + 2) = *(_BYTE *)(v93 + 2) & 0xF8 | (v95 >> 2) & 7;
    return (__int64 *)v93;
  }
  if ( v39 == 32 )
  {
    if ( (unsigned __int8)sub_19C40B0((unsigned __int8 **)v162) )
      return (_QWORD *)(&dword_0 + 1);
    return (__int64 *)sub_19C5550(
                        a1,
                        (__int64)a6,
                        v155,
                        v149,
                        v159,
                        (unsigned __int64)v154,
                        *(double *)v35.m128_u64,
                        a8);
  }
  v103 = (unsigned int)v39 - 40;
  if ( (unsigned int)v103 <= 6 )
  {
    if ( !*(_BYTE *)v160.m128_u64[0] )
    {
      v104 = sub_19C4130((__int64)&v160, v35, a8, v34, v39, v103, v36, v37);
      v38 = v149;
      if ( v104 )
        return (_QWORD *)(&dword_0 + 1);
    }
    v105 = *(_QWORD *)(v38 + 48);
    v149 = v38;
    v166 = v105;
    v106 = sub_C1BEF0((__int64)&v166, v34, v40, v103);
    v111 = sub_15AB9E0((__int64)a6, (_QWORD *)a1[15].m128_u64[1], v107, v108, v109, v110);
    v113 = v151;
    v145 = 1;
    return sub_19C4C50(a1, (__int64)v154, v113, v146, v111, v112, v35, a8, a9, v149, v159, 0, v30, v106, v145, 0, 0);
  }
  v114 = (unsigned int)v39 - 35;
  if ( (unsigned int)v114 <= 3 )
  {
    v115 = sub_B979F0((_QWORD *)v149);
    v120 = v149;
    if ( v115 )
    {
      if ( !*(_BYTE *)v160.m128_u64[0] )
      {
        v121 = sub_19C4130((__int64)&v160, v35, a8, v34, v116, v117, v118, v119);
        v120 = v149;
        if ( v121 )
          return (_QWORD *)(&dword_0 + 1);
      }
      v106 = *(_QWORD *)(v120 + 48);
      v122 = 1;
    }
    else
    {
      v106 = *(_QWORD *)(a1[15].m128_u64[1] + 19088);
      v124 = sub_B98200((_QWORD *)v149, v34);
      v120 = v149;
      if ( v124 )
      {
        v144 = sub_19C40B0((unsigned __int8 **)v162);
        v120 = v149;
        if ( v144 )
          return (_QWORD *)(&dword_0 + 1);
      }
      v122 = 0;
    }
    v123 = (_QWORD *)a1[15].m128_u64[1];
    v149 = v120;
    v111 = sub_15AB9E0((__int64)a6, v123, v116, v117, v118, v119);
    v113 = v151;
    v145 = v122;
    return sub_19C4C50(a1, (__int64)v154, v113, v146, v111, v112, v35, a8, a9, v149, v159, 0, v30, v106, v145, 0, 0);
  }
  if ( v39 == 33 )
  {
    if ( !*(_BYTE *)v160.m128_u64[0] )
    {
      v125 = sub_19C4130((__int64)&v160, v35, a8, v34, v39, v114, v36, v37);
      v38 = v149;
      if ( v125 )
        return (_QWORD *)(&dword_0 + 1);
    }
    v126 = (_QWORD *)a1[15].m128_u64[1];
    v106 = *(_QWORD *)(v38 + 48);
    v149 = v38;
    v111 = sub_15AB9E0((__int64)a6, v126, v40, v114, v36, v37);
    v113 = v151;
    v145 = 0;
    return sub_19C4C50(a1, (__int64)v154, v113, v146, v111, v112, v35, a8, a9, v149, v159, 0, v30, v106, v145, 0, 0);
  }
  if ( v39 != 69 )
  {
    v148 = v149;
    v141 = 5296;
    if ( (unsigned int)v39 - 58 > 9 )
      v141 = 5297;
    sub_168B9F0((__int64)&v166, &a1->m128_i64[1], v155, v141, 0);
    v142 = sub_17B3DD0((__int64)&v166, &v158);
    v143 = sub_1605D30(v142, &v157);
    v156 = v151;
    sub_1587D10(v143, &v156);
    sub_15F7200(&v166);
    sub_168B9F0((__int64)&v166, &a1->m128_i64[1], *(_DWORD *)(v148 + 24), 0x17C1u, 0);
    sub_17B3DD0((__int64)&v166, &v158);
    sub_15F7200(&v166);
    *(_WORD *)(a11 + 163) = 0;
    return (_QWORD *)(&dword_0 + 1);
  }
  if ( !*(_BYTE *)v160.m128_u64[0] )
  {
    v127 = sub_19C4130((__int64)&v160, v35, a8, v34, v39, v114, v36, v37);
    v38 = v149;
    if ( v127 )
      return (_QWORD *)(&dword_0 + 1);
  }
  if ( a12 )
  {
    v128 = v38;
    v129 = sub_1CD7BB0(a1, v38, a9, *(unsigned int *)(a11 + 128), a12);
    v130 = v129;
    if ( v131 )
      return (_QWORD *)(&dword_0 + 1);
    if ( v129 )
    {
      if ( !(unsigned int)sub_B740B0(v129) )
      {
        v128 = 1;
        sub_B74430(v130, 1, v155);
      }
      v166 = *(_QWORD *)(v130 + 48);
      v134 = sub_C1BEF0((__int64)&v166, v128, v132, v133);
      v139 = sub_15AB9E0((__int64)a6, (_QWORD *)a1[15].m128_u64[1], v135, v136, v137, v138);
      return sub_19C4C50(a1, (__int64)v154, v151, v146, v139, v140, v35, a8, a9, v130, v159, 0, v30, v134, 1, 0, a12);
    }
    else
    {
      return (__int64 *)sub_19C5C90(
                          (__int64)a1,
                          (unsigned __int64)v154,
                          *((_QWORD *)v154 + 1),
                          v151,
                          v146,
                          (__int64)a6,
                          *(double *)v35.m128_u64,
                          a9,
                          a10,
                          v30,
                          a12);
    }
  }
  else
  {
    sub_1CCEE00(a1, a6, a9 != 0, v38, v155);
    return (_QWORD *)(&dword_0 + 1);
  }
}
