__int64 __fastcall sub_1BF54C0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        int a9)
{
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rdi
  unsigned int v26; // eax
  int v27; // esi
  int v28; // edi
  int v29; // r13d
  __int64 v30; // r14
  unsigned int v31; // eax
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // r13
  unsigned int v36; // edx
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // al
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rdx
  _QWORD *v51; // rax
  unsigned __int64 v52; // rax
  __int64 *v53; // rdx
  unsigned __int8 v54; // r14
  __int64 *v55; // r13
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int8 v58; // dl
  const __m128i *v59; // rax
  _QWORD *v60; // rdi
  const __m128i *v61; // rcx
  __int64 v62; // rcx
  int v63; // ecx
  int v64; // esi
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  const __m128i *v70; // rcx
  __int64 v71; // rcx
  __int8 v72; // si
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int16 v78; // ax
  __int64 *v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned __int64 v84; // r10
  __int64 v85; // r13
  __int64 *v86; // r10
  __int64 *v87; // rbp
  __int64 v88; // r12
  int v89; // r13d
  unsigned __int8 v90; // al
  __int64 v91; // r14
  unsigned __int8 v92; // cl
  __int64 v93; // rcx
  __int64 v94; // rdx
  __m128i si128; // xmm2
  int v96; // r13d
  __int64 v97; // r14
  unsigned int v98; // eax
  unsigned int v99; // r13d
  unsigned int v100; // eax
  __int64 *v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // r8
  __int64 *v106; // rsi
  unsigned __int64 v107; // rsi
  unsigned __int64 v108; // rcx
  __int64 v109; // rsi
  __int64 v110; // rax
  unsigned __int64 v111; // rcx
  _QWORD *v112; // rsi
  unsigned __int64 v113; // r10
  __int64 v114; // r13
  __int64 *v115; // r10
  __int64 *v116; // r14
  __int64 v117; // rbp
  int v118; // r13d
  unsigned __int8 v119; // al
  __int64 v120; // r11
  unsigned __int8 v121; // cl
  __int64 v122; // rcx
  __int64 v123; // rdx
  char v124; // al
  unsigned __int8 v125; // dl
  char v126; // al
  __int64 v127; // rax
  __int64 v128; // rdi
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  bool v131; // al
  _QWORD *v132; // [rsp-8h] [rbp-100h]
  __int64 *v133; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v134; // [rsp+8h] [rbp-F0h]
  int v135; // [rsp+10h] [rbp-E8h]
  int v136; // [rsp+14h] [rbp-E4h]
  __int64 v137; // [rsp+18h] [rbp-E0h]
  __m128i *v138; // [rsp+20h] [rbp-D8h]
  char v139; // [rsp+2Bh] [rbp-CDh]
  unsigned int v140; // [rsp+2Ch] [rbp-CCh]
  _QWORD *v141; // [rsp+30h] [rbp-C8h]
  __int16 **v142; // [rsp+38h] [rbp-C0h]
  __int64 v143; // [rsp+40h] [rbp-B8h]
  __int64 v144; // [rsp+48h] [rbp-B0h]
  __int64 v145; // [rsp+50h] [rbp-A8h]
  __int64 v146; // [rsp+58h] [rbp-A0h]
  unsigned __int64 *v147; // [rsp+60h] [rbp-98h]
  __int16 *v148; // [rsp+68h] [rbp-90h] BYREF
  const __m128i *v149; // [rsp+70h] [rbp-88h] BYREF
  __int16 *v150; // [rsp+78h] [rbp-80h] BYREF
  __m128 v151; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v152; // [rsp+90h] [rbp-68h]
  unsigned __int64 v153; // [rsp+A0h] [rbp-58h] BYREF
  __m128 v154; // [rsp+A8h] [rbp-50h]

  v148 = (__int16 *)a2;
  v135 = a6;
  v136 = a9;
  sub_1BD2860((__int64 *)a5, 2);
  v13 = *(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)v13;
  if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) != 48 )
    goto LABEL_12;
  v15 = *((_QWORD *)v148 + 1);
  v16 = v15;
  if ( sub_1BC70C0(a3, v15)
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
    && (v16 = (unsigned int)sub_EEB7E0(v18, v15, *(double *)a7.m128_u64),
        v40 = sub_183BD10((__int64)a1, v16, v15, a3, v38, v39),
        v18 = (__int64)v148,
        v40) )
  {
    v20 = (unsigned int)sub_C00A40(v18, v16, v17, v18, v19);
    if ( (unsigned __int8)sub_1E63330(a1, v20, a3, 1, 0) )
      goto LABEL_4;
    v141 = sub_F60F10(v14, v20, v21, v22, v23, v24);
    if ( (*((_BYTE *)v141 + 28) & 0x7Fu) - 59 > 2 )
      goto LABEL_4;
    v139 = 1;
    goto LABEL_36;
  }
  v41 = (unsigned int)sub_C00A40(v18, v16, v17, v18, v19);
  v139 = sub_1E63330(a1, v41, a3, 1, 0);
  if ( v139 || (v141 = sub_F60F10(v14, v41, v42, v43, v44, v45), (*((_BYTE *)v141 + 28) & 0x7Fu) - 59 > 2) )
  {
LABEL_12:
    v20 = (__int64)v148;
    goto LABEL_13;
  }
LABEL_36:
  v78 = *v148;
  v147 = (unsigned __int64 *)v148;
  LOWORD(v133) = v78;
  if ( (v78 & 0x1FF) == 0x35 )
  {
    v150 = v148;
    v140 = v135 == 2;
    sub_1BD2860((__int64 *)a5, 2);
    v79 = v141;
    v84 = sub_1A3D890((__int64)a1, (__int64)v141, v80, v81, v82, v83);
    if ( v84 )
    {
      v137 = a3;
      v142 = &v150;
      v138 = a4;
      do
      {
        v85 = v84;
        v86 = (__int64 *)(v84 & 0xFFFFFFFFFFFFFFF8LL);
        v87 = v86;
        v88 = (__int64)v86;
        v89 = (v85 >> 2) & 1;
        if ( v89 )
        {
          v88 = 0;
          if ( v86 )
            v88 = *v86;
        }
        v90 = *(_BYTE *)(v88 + 28) & 0x7F;
        if ( v90 != 81 )
        {
          if ( ((v90 + 52) & 0x7Fu) <= 1 || (v91 = v88, (unsigned int)v90 - 53 <= 1) )
          {
            v91 = sub_B72ED0(v88);
            v90 = *(_BYTE *)(v91 + 28) & 0x7F;
          }
          v92 = *(_BYTE *)(v91 + 29);
          v133 = nullptr;
          v93 = (v92 >> 5) & 3;
          v94 = v93 | v88;
          v153 = v93 | v88;
          if ( v90 == 71 )
          {
            v94 = *(_QWORD *)(v91 + 48);
            v133 = (__int64 *)v91;
            v91 = v94;
            v90 = *(_BYTE *)(v94 + 28) & 0x7F;
          }
          if ( v90 == 38 )
          {
            v134 = v91;
            a7 = _mm_loadh_ps((const double *)&v133);
            v154 = a7;
            si128 = _mm_load_si128((const __m128i *)&v153);
            v152 = a7.m128_u64[1];
            v151 = (__m128)si128;
            if ( *(char *)(v91 + 28) >= 0 )
            {
              v79 = (__int64 *)v91;
              if ( sub_1844E80((__int64)a1, v91, v94, v93) )
              {
                if ( v133 )
                {
                  v79 = v133;
                  sub_1BF38D0(
                    a1,
                    v133,
                    v151.m128_i64[0],
                    (unsigned __int64 *)v142,
                    1u,
                    a5,
                    *(double *)a7.m128_u64,
                    a8,
                    0,
                    v140);
                }
                else
                {
                  v79 = (__int64 *)v91;
                  v145 = 0;
                  v146 = 0;
                  sub_1BF10B0(
                    a1,
                    v91,
                    v151.m128_i64[0],
                    (unsigned __int64 *)v142,
                    1u,
                    (unsigned int *)a5,
                    a7,
                    a8,
                    0,
                    0,
                    v140,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0,
                    0);
                }
              }
            }
          }
        }
        if ( !v89 )
          break;
        if ( !v87 )
          break;
        v84 = v87[1];
      }
      while ( v84 );
      a3 = v137;
      a4 = v138;
    }
    v96 = *(_DWORD *)(a5 + 2864);
    v97 = *(unsigned int *)(a5 + 8);
    v98 = sub_EEB7E0((unsigned __int64)v150, (__int64)v79, *(double *)a7.m128_u64);
    v27 = (int)a1;
    v28 = a5;
    v99 = v96 & 0x3FFFFFFF;
    v100 = sub_1BF27B0(a5, a1, v98, (__int64 **)&v151, *(double *)a7.m128_u64, a8);
    v36 = v100;
    if ( v100 != 1 )
    {
      if ( v100 )
      {
        if ( v100 == 2 )
          return v36;
        if ( v100 != 3 )
          return sub_1BF6010(v28, v27, v36, v32, v33, v34, a9);
      }
      LODWORD(v134) = v100;
      v133 = *(__int64 **)v151.m128_u64[0];
      v101 = v133;
      v153 = sub_B987D0(v133, (__int64)v133);
      v104 = sub_C1BEF0((__int64)&v153, (__int64)v101, v102, v103);
      v105 = a4->m128i_i64[0];
      v106 = v133;
      a4[2].m128i_i64[1] = 0;
      v36 = v134;
      a4[7].m128i_i64[1] = (__int64)v106;
      v107 = v151.m128_u64[0];
      a4->m128i_i64[0] = v105 & 0xFFFFF80400000000LL | 0x2000000000LL;
      v108 = a4[4].m128i_i64[0] & 0xFFFFF80400000000LL | 0x2000000000LL;
      a4[3].m128i_i8[8] = (2 * (v97 + (unsigned __int64)v99 > 1)) | a4[3].m128i_i8[8] & 0xFD;
      v109 = *(_QWORD *)(v107 + 8);
      a4[4].m128i_i64[0] = v108;
      a4[8].m128i_i64[0] = v109;
      a4[6].m128i_i64[1] = 0;
      a4[4].m128i_i64[1] = v104;
      a4[5].m128i_i64[0] = a3;
      a4[5].m128i_i64[1] = a3;
      a4[6].m128i_i64[0] = a3;
      if ( v36 != 1 )
        return v36;
    }
    sub_1BD2860((__int64 *)a5, 2);
    LOBYTE(v137) = 1;
    v110 = v147[3] - v147[2];
    v142 = (__int16 **)v147[2];
    v140 = v110 >> 3;
  }
  else
  {
    LOBYTE(v137) = 0;
    v140 = 1;
    v142 = &v148;
  }
  v112 = v141;
  v113 = sub_1A3D890((__int64)a1, (__int64)v141, v74, v75, v76, v77);
  if ( !v113 )
    goto LABEL_85;
  v138 = a4;
  v147 = &v153;
  LODWORD(v141) = (unsigned __int8)v139 ^ 1;
  do
  {
    v114 = v113;
    v115 = (__int64 *)(v113 & 0xFFFFFFFFFFFFFFF8LL);
    v116 = v115;
    v117 = (__int64)v115;
    v118 = (v114 >> 2) & 1;
    if ( v118 )
    {
      v117 = 0;
      if ( v115 )
        v117 = *v115;
    }
    v119 = *(_BYTE *)(v117 + 28) & 0x7F;
    if ( v119 != 81 )
    {
      if ( ((v119 + 52) & 0x7Fu) <= 1 || (v120 = v117, (unsigned int)v119 - 53 <= 1) )
      {
        v120 = sub_B72ED0(v117);
        v119 = *(_BYTE *)(v120 + 28) & 0x7F;
      }
      v121 = *(_BYTE *)(v120 + 29);
      v133 = nullptr;
      v122 = (v121 >> 5) & 3;
      v153 = v122 | v117;
      if ( v119 == 71 )
      {
        v123 = *(_QWORD *)(v120 + 48);
        v133 = (__int64 *)v120;
        v120 = v123;
        v119 = *(_BYTE *)(v123 + 28) & 0x7F;
      }
      if ( v119 == 38 )
      {
        v134 = v120;
        a7 = _mm_loadh_ps((const double *)&v133);
        v154 = a7;
        a8 = (__m128)_mm_load_si128((const __m128i *)&v153);
        v152 = a7.m128_u64[1];
        v151 = a8;
        v124 = *(_BYTE *)(v120 + 28);
        if ( (_BYTE)v137 )
        {
          if ( v124 < 0 )
            goto LABEL_81;
          v125 = 0;
          if ( !v139 && v140 == 1 && (**v142 & 0x1FF) == 0x35 )
          {
            v127 = *(_QWORD *)(*(_QWORD *)(v120 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v127 + 16) != 26 )
            {
              v128 = *(_QWORD *)(*(_QWORD *)(v120 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              v134 = v120;
              v127 = sub_F63050(v128, v112, 0, v122);
              v120 = v134;
            }
            v125 = 0;
            if ( *(_WORD *)(v127 + 22) )
            {
              v129 = *(_QWORD *)(v127 + 48);
              v134 = v120;
              v153 = v129;
              v130 = sub_C1BEF0((__int64)v147, (__int64)v112, 0, v122);
              v131 = sub_1BC70C0(a3, v130);
              v120 = v134;
              v125 = v131;
            }
          }
          goto LABEL_90;
        }
        if ( v124 >= 0 )
        {
          v112 = (_QWORD *)(&dword_0 + 1);
          v134 = v120;
          v126 = sub_B99130(v120, 1);
          v120 = v134;
          if ( v126 )
          {
            v125 = (unsigned __int8)v141;
LABEL_90:
            if ( v133 )
            {
              sub_1BF38D0(
                a1,
                v133,
                v151.m128_i64[0],
                (unsigned __int64 *)v142,
                v140,
                a5,
                *(double *)a7.m128_u64,
                a8,
                v125,
                v135 == 2);
              v112 = v132;
            }
            else
            {
              v143 = 0;
              v112 = (_QWORD *)v120;
              v144 = 0;
              sub_1BF10B0(
                a1,
                v120,
                v151.m128_i64[0],
                (unsigned __int64 *)v142,
                v140,
                (unsigned int *)a5,
                a7,
                a8,
                v125,
                0,
                v135 == 2,
                0,
                0,
                0,
                0,
                0,
                0,
                0);
            }
          }
        }
      }
    }
LABEL_81:
    if ( !v118 )
      break;
    if ( !v116 )
      break;
    v113 = v116[1];
  }
  while ( v113 );
  a4 = v138;
LABEL_85:
  v20 = (__int64)v148;
  v25 = (unsigned __int64)v148;
  if ( !v139 )
  {
LABEL_13:
    v25 = v20;
    if ( (*(_WORD *)v20 & 0x1FF) != 0x35 )
    {
      v46 = *(_QWORD *)(v20 + 8);
      v20 = (unsigned int)sub_EEB7E0(v20, v20, *(double *)a7.m128_u64);
      if ( (unsigned __int8)sub_1E63330(a1, v20, v46, 1, 0) )
        goto LABEL_4;
      v50 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v148 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v50 + 16) == 48 )
      {
        v51 = sub_F60F10(*v50, v20, (__int64)v50, v47, v48, v49);
        if ( (*((_BYTE *)v51 + 28) & 0x7Fu) - 59 <= 2 )
        {
          v52 = sub_B9F870((__int64)v51);
          v133 = v53;
          if ( (__int64 *)v52 != v53 )
          {
            v54 = v136;
            v55 = (__int64 *)v52;
            v135 = v135 != 0;
            do
            {
              while ( 1 )
              {
                v153 = *v55;
                v20 = v153 & 0xFFFFFFFFFFFFFFF8LL;
                v56 = *(_QWORD *)((v153 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                if ( (v56 & 4) != 0 )
                  v57 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF8LL);
                else
                  v57 = v56 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v57 )
                  v57 -= 64LL;
                v58 = *(_BYTE *)(v20 + 28) & 0x7F;
                if ( (unsigned int)v58 - 53 <= 1 )
                {
                  v20 = *(_QWORD *)(v20 + 64);
                  v58 = *(_BYTE *)(v20 + 28) & 0x7F;
                }
                if ( v58 == 71 )
                  break;
                ++v55;
                sub_1BECF20((__int64)a1, v20, v153, (unsigned __int64)v148, a3, a5, v54, v135, 1, 0);
                if ( v133 == v55 )
                  goto LABEL_4;
              }
              ++v55;
              sub_1BEE2D0((__int64)a1, (_QWORD *)v20, v153, v57, (__int64)v148, a3, a5, v54, v135);
            }
            while ( v133 != v55 );
          }
        }
LABEL_4:
        v25 = (unsigned __int64)v148;
      }
      else
      {
        v25 = (unsigned __int64)v148;
      }
    }
  }
  v26 = sub_EEB7E0(v25, v20, *(double *)a7.m128_u64);
  v27 = (int)a1;
  v28 = a5;
  v29 = *(_DWORD *)(a5 + 2864);
  v30 = *(unsigned int *)(a5 + 8);
  v31 = sub_1BF27B0(a5, a1, v26, (__int64 **)&v149, *(double *)a7.m128_u64, a8);
  v35 = v29 & 0x3FFFFFFF;
  v36 = v31;
  switch ( v31 )
  {
    case 1u:
      return v36;
    case 0u:
      goto LABEL_29;
    case 2u:
      return v36;
    case 3u:
LABEL_29:
      v59 = v149;
      v60 = (_QWORD *)v149->m128i_i64[0];
      LOBYTE(v27) = (unsigned __int64)(v30 + v35) > 1;
      if ( (*(_BYTE *)(v149->m128i_i64[0] + 28) & 0x7F) == 0x26 )
      {
        if ( (*v148 & 0x1FF) == 0x35 )
        {
          v111 = a4->m128i_i64[0] & 0xFFFFF80400000000LL;
          a4[2].m128i_i64[1] = 0;
          a4->m128i_i64[0] = v111 | 0x42000000000LL;
        }
        else
        {
          v61 = (const __m128i *)v149[3].m128i_i64[0];
          if ( (v61->m128i_i32[0] & 0x7FFFFFFF) == 4 )
          {
            a4[3].m128i_i8[8] |= 1u;
          }
          else
          {
            *a4 = _mm_loadu_si128(v61 + 1);
            a4[1] = _mm_loadu_si128(v61 + 2);
            a4[2] = _mm_loadu_si128(v61 + 3);
            v62 = v61[4].m128i_i64[0];
            a4[3].m128i_i8[8] &= ~1u;
            a4[3].m128i_i64[0] = v62;
          }
        }
        v63 = 2 * v27;
        v64 = a4[3].m128i_u8[8];
        a4[7].m128i_i64[1] = (__int64)v60;
        LODWORD(v133) = v36;
        v65 = v63 | v64 & 0xFFFFFFFD;
        a4[3].m128i_i8[8] = v65;
        v66 = v59->m128i_i64[1];
        a4[6].m128i_i64[1] = 0;
        a4[8].m128i_i64[0] = v66;
        a4[4].m128i_i64[0] = a4[4].m128i_i64[0] & 0xFFFFF80400000000LL | 0x2000000000LL;
        v153 = sub_B987D0(v60, v65);
        v69 = sub_C1BEF0((__int64)&v153, v65, v67, v68);
        a4[5].m128i_i64[0] = a3;
        v36 = (unsigned int)v133;
        a4[4].m128i_i64[1] = v69;
        a4[5].m128i_i64[1] = a3;
        a4[6].m128i_i64[0] = a3;
      }
      else
      {
        v70 = (const __m128i *)v149[3].m128i_i64[0];
        *a4 = _mm_loadu_si128(v70 + 1);
        a4[1] = _mm_loadu_si128(v70 + 2);
        a4[2] = _mm_loadu_si128(v70 + 3);
        v71 = v70[4].m128i_i64[0];
        a4[7].m128i_i64[1] = (__int64)v60;
        a4[3].m128i_i64[0] = v71;
        v72 = a4[3].m128i_i8[8] & 0xFD | (2 * v27);
        a4[3].m128i_i8[8] = v72;
        v73 = v59->m128i_i64[1];
        a4[3].m128i_i8[8] = v72 & 0xFE;
        a4[8].m128i_i64[0] = v73;
        a4[4] = _mm_loadu_si128(v59 + 7);
        a4[5] = _mm_loadu_si128(v59 + 8);
        a4[6] = _mm_loadu_si128(v59 + 9);
        a4[7].m128i_i64[0] = v59[10].m128i_i64[0];
      }
      return v36;
  }
  return sub_1BF6010(v28, v27, v36, v32, v33, v34, a9);
}
