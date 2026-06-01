__m128i *__fastcall sub_BF8730(__m128i *a1, __int64 a2, _DWORD *a3, unsigned int a4, __m128i *a5, __int64 a6)
{
  char v9; // r15
  bool v12; // al
  __int64 v13; // rdx
  unsigned __int8 **v14; // rax
  __int64 v15; // rdx
  unsigned int v17; // eax
  __int64 v18; // r10
  __int64 v19; // rsi
  unsigned int v20; // r11d
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r10
  unsigned int v25; // r11d
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int8 v29; // al
  _DWORD *v30; // rax
  __int64 v31; // rdx
  __m128i v32; // xmm3
  unsigned int v33; // eax
  unsigned int i; // edx
  unsigned __int8 **v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int8 **v38; // r14
  unsigned __int8 **v39; // rax
  unsigned __int8 **v40; // rbp
  unsigned __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rsi
  bool v45; // al
  bool v46; // al
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __m128i v49; // xmm1
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  unsigned int v55; // edi
  __int64 v56; // r15
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // r15
  __int16 v59; // ax
  char v60; // al
  unsigned int v61; // r11d
  bool v62; // al
  __m128i v63; // xmm6
  __int64 v64; // rax
  __m128i v65; // xmm4
  __int64 v66; // rax
  __m128i v67; // xmm2
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __m128i v73; // xmm6
  __m128i v74; // xmm5
  unsigned __int8 **v75; // rax
  __int64 v76; // rax
  __int64 v77; // r9
  __int64 v78; // rsi
  char v79; // al
  __int64 v80; // r10
  int v81; // r11d
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int8 v84; // dl
  unsigned int v85; // eax
  unsigned __int8 **v86; // rax
  unsigned __int8 **v87; // rbp
  unsigned __int8 **v88; // rax
  unsigned __int8 **v89; // r14
  unsigned __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  bool v93; // cc
  unsigned __int64 v94; // rax
  __int64 v95; // rsi
  unsigned __int8 **v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned int v100; // eax
  __int64 v101; // rdx
  char v102; // al
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r8
  char v109; // al
  __m128i v110; // xmm7
  bool v111; // al
  unsigned __int8 **v112; // rax
  __int64 v113; // rax
  unsigned __int8 **v114; // rax
  unsigned __int8 **v115; // rbp
  __int64 v116; // rax
  unsigned __int8 **v117; // rax
  int v118; // r11d
  unsigned __int8 **v119; // r15
  char v120; // al
  __int64 v121; // rax
  int v122; // eax
  __int64 v123; // rax
  int v124; // eax
  __int64 v126; // [rsp+0h] [rbp-D8h]
  unsigned int v127; // [rsp+0h] [rbp-D8h]
  __int64 v128; // [rsp+0h] [rbp-D8h]
  __int64 v129; // [rsp+0h] [rbp-D8h]
  bool v130; // [rsp+8h] [rbp-D0h]
  __int64 v131; // [rsp+8h] [rbp-D0h]
  unsigned int v132; // [rsp+8h] [rbp-D0h]
  unsigned int v133; // [rsp+8h] [rbp-D0h]
  unsigned int v134; // [rsp+8h] [rbp-D0h]
  unsigned int v135; // [rsp+8h] [rbp-D0h]
  __int64 v136; // [rsp+8h] [rbp-D0h]
  __int64 v137; // [rsp+8h] [rbp-D0h]
  unsigned int v138; // [rsp+8h] [rbp-D0h]
  _QWORD *v139; // [rsp+8h] [rbp-D0h]
  unsigned int v140; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v141; // [rsp+10h] [rbp-C8h]
  unsigned int v142; // [rsp+10h] [rbp-C8h]
  unsigned int v143; // [rsp+10h] [rbp-C8h]
  int v144; // [rsp+10h] [rbp-C8h]
  int v145; // [rsp+10h] [rbp-C8h]
  int v146; // [rsp+10h] [rbp-C8h]
  __int64 v147; // [rsp+18h] [rbp-C0h]
  char v148; // [rsp+20h] [rbp-B8h]
  bool v149; // [rsp+2Bh] [rbp-ADh]
  __int64 v150; // [rsp+38h] [rbp-A0h] BYREF
  void *v151[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v152; // [rsp+50h] [rbp-88h] BYREF
  __m128i v153; // [rsp+60h] [rbp-78h] BYREF

  v9 = (a5[8].m128i_i8[0] & 2) != 0;
  if ( (a5[8].m128i_i8[0] & 2) != 0 )
    goto LABEL_6;
  v12 = sub_A2B9C0(a5);
  if ( !v12 )
  {
    v13 = 2369;
LABEL_4:
    v14 = (unsigned __int8 **)sub_E0FED0(a2, a3, v13, 0);
    if ( v14 )
      sub_BED5E0(v14, a4);
    goto LABEL_8;
  }
  v130 = v12;
  v17 = sub_A2B770((__int64)a5);
  v18 = 0;
  v19 = v130;
  v20 = v17;
  if ( v17 )
  {
    v33 = sub_A2B770((__int64)a5);
    v18 = *(_QWORD *)(a2 + 32);
    v20 = *(_DWORD *)(a2 + 40);
    v19 = v130;
    for ( i = *(_DWORD *)(v18 + 128); v33 < i; i = *(_DWORD *)(v18 + 128) )
    {
      v18 = *(_QWORD *)(v18 + 16);
      --v20;
    }
    if ( v33 != i )
    {
      v35 = (unsigned __int8 **)sub_E0FED0(a2, a3, 2423, 1);
      v38 = v35;
      if ( v35 )
      {
        sub_BED5E0(v35, a4);
        sub_BED5E0(v38, (a5->m128i_i8[0] & 3) == 0);
      }
      sub_BEDD60(a2, a5->m128i_i64[0], a5->m128i_i64[1], v36, v37);
      goto LABEL_8;
    }
  }
  v149 = a4 == 10 || a4 <= 1;
  if ( !v149 )
  {
    v21 = 0;
    if ( ((1LL << a4) & 0x4E3) == 0 )
      v21 = v19;
    v149 = v21;
  }
  v140 = v20;
  v131 = v18;
  if ( sub_BEDB40(a4) && ((a6 & 4) != 0 || (byte_8[a6 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
  {
    if ( (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
    {
      v39 = (unsigned __int8 **)sub_E0FED0(a2, a3, 2377, 0);
      v40 = v39;
      if ( v39 )
      {
        sub_BED5E0(v39, a4);
        sub_AC60B0(v40, a6, 8u);
      }
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  v153 = _mm_loadu_si128(a5);
  v150 = 0;
  v147 = sub_A2B5D0(&v153);
  v22 = sub_E0E500(a2);
  v24 = v131;
  v25 = v140;
  if ( (*(_BYTE *)(v22 + 1) & 0x20) != 0 )
  {
    v19 = a2 + 792;
    v45 = sub_A2B910(a5, (_QWORD *)(a2 + 792));
    v24 = v131;
    v25 = v140;
    if ( v45 )
    {
      v19 = a5->m128i_i64[0];
      v46 = sub_BEBDD0(a2, a5->m128i_i64[0], a5->m128i_i64[1], 0);
      v24 = v131;
      v25 = v140;
      if ( v46 )
      {
        v150 = *(_QWORD *)(a2 + 816);
        goto LABEL_47;
      }
    }
  }
  v26 = a5->m128i_i64[0];
  if ( !a5->m128i_i64[0] )
    goto LABEL_35;
  v27 = a5->m128i_i64[0] & 3;
  if ( (v26 & 3) == 0 )
  {
    v28 = v26 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v28 )
    {
      v29 = *(_BYTE *)(v28 + 28) & 0x7F;
      switch ( v29 )
      {
        case 0x1Fu:
          if ( ((1LL << a4) & 0x4E3) != 0 )
          {
            v30 = (_DWORD *)sub_B792F0(v28, v19);
            if ( *v30 )
            {
              v31 = *(_QWORD *)(v28 + 48);
              v32 = _mm_loadu_si128(a5);
              a1[1].m128i_i64[0] = (__int64)v30;
              *a1 = v32;
              a1[1].m128i_i64[1] = v31;
              return a1;
            }
            v75 = (unsigned __int8 **)sub_E0FED0(a2, a3, 2497, 0);
            if ( v75 )
              sub_AC60B0(v75, *(_QWORD *)(v28 + 48), 8u);
            goto LABEL_8;
          }
          goto LABEL_86;
        case 0x1Du:
          if ( ((1LL << a4) & 0x4E3) != 0 )
          {
            v64 = *(_QWORD *)(v28 + 48);
            v65 = _mm_loadu_si128(a5);
            a1[1].m128i_i64[0] = v28 + 64;
            *a1 = v65;
            a1[1].m128i_i64[1] = v64;
            return a1;
          }
          goto LABEL_86;
        case 0x1Eu:
          if ( ((1LL << a4) & 0x4E3) != 0 )
          {
            v72 = *(_QWORD *)(v28 + 48);
            v73 = _mm_loadu_si128(a5);
            a1[1].m128i_i64[0] = v28 + 64;
            *a1 = v73;
            a1[1].m128i_i64[1] = v72;
            return a1;
          }
          goto LABEL_86;
      }
      v142 = v25;
      v136 = v24;
      if ( (unsigned int)v29 - 40 > 6 )
        goto LABEL_6;
      v76 = sub_B59B90(v28, *(_QWORD *)(a2 + 16));
      v77 = v28;
      if ( v76 )
        v77 = v76;
      v129 = v77;
      if ( *(char *)(v77 + 28) < 0 )
        goto LABEL_6;
      v78 = *(_QWORD *)(a2 + 16);
      v79 = sub_F32DA0(v147, v78);
      v80 = v136;
      v81 = v142;
      v148 = v79;
      v82 = *(_QWORD *)(a2 + 792);
      if ( v82 )
      {
        if ( (v82 & 3) == 0 )
        {
          v83 = v82 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v83 )
          {
            v84 = *(_BYTE *)(v83 + 28) & 0x7F;
            if ( (unsigned int)v84 - 40 <= 6 && v84 != 43 )
              v9 = *(_BYTE *)(v83 + 97) >> 7;
          }
        }
      }
      if ( !v136 && (!v149 || (*(_BYTE *)(v129 + 28) & 0x7F) != 0x2B) )
      {
        v106 = sub_E0E500(a2);
        v80 = 0;
        v81 = v142;
        if ( (*(_BYTE *)(v106 + 1) & 0x20) == 0
          || (v78 = a5->m128i_i64[0],
              v111 = sub_BEBDD0(a2, a5->m128i_i64[0], a5->m128i_i64[1], 0),
              v80 = 0,
              v81 = v142,
              !v111) )
        {
          if ( ((1LL << a4) & 0x4E3) == 0 )
          {
LABEL_86:
            v15 = 2443;
            goto LABEL_7;
          }
          if ( (*(_BYTE *)(v129 + 28) & 0x7F) == 0x2B || *(char *)(v129 + 97) >= 0 )
          {
            v144 = v81;
            if ( (*(_BYTE *)sub_E0E500(a2) & 8) != 0 && v9 )
              goto LABEL_6;
            v139 = (_QWORD *)(v147 & 0xFFFFFFFFFFFFFFF0LL);
            v109 = sub_BF86C0(*(_QWORD *)(v147 & 0xFFFFFFFFFFFFFFF0LL), v78, v147 & 0xFFFFFFFFFFFFFFF0LL, v107, v108);
            v80 = 0;
            v81 = v144;
            if ( v109 )
            {
              if ( !v148 )
              {
                if ( !v149 )
                {
LABEL_148:
                  v110 = _mm_loadu_si128(a5);
                  a1[1].m128i_i64[0] = 0;
                  *a1 = v110;
                  a1[1].m128i_i64[1] = v147;
                  return a1;
                }
                if ( (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
                {
                  v112 = (unsigned __int8 **)sub_E0FED0(a2, a3, 2429, 1);
                  if ( v112 )
                    sub_AC60B0(v112, v129, 0xAu);
                  goto LABEL_123;
                }
LABEL_6:
                v15 = 108;
LABEL_7:
                sub_E0FED0(a2, a3, v15, 0);
                goto LABEL_8;
              }
            }
            else
            {
              if ( !v149 )
                goto LABEL_148;
              if ( v148 )
              {
                if ( !*(_BYTE *)(a2 + 914)
                  || (v120 = sub_F436F0(*v139, *(_QWORD *)(a2 + 16)), v81 = v144, !v120)
                  || (v121 = sub_B685F0(v129), v122 = sub_B5A010(v129, v121), v80 = 0, v81 = v144, v122) )
                {
                  v145 = v81;
                  if ( (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
                  {
                    v116 = sub_E0E500(a2);
                    v117 = (unsigned __int8 **)sub_E0FF50(
                                                 a2,
                                                 a3,
                                                 (unsigned int)((*(unsigned __int8 *)(v116 + 1) << 27 >> 31) + 2431),
                                                 1);
                    v118 = v145;
                    v119 = v117;
                    if ( v117 )
                    {
                      sub_AC60B0(v117, v129, 0xAu);
                      sub_AC60B0(v119, v147, 8u);
                      v118 = v145;
                    }
                    v146 = v118;
                    sub_E10070(a2, *(unsigned int *)(v129 + 24), 103);
                    v80 = 0;
                    v81 = v146;
                  }
                  else
                  {
                    sub_E0FF50(a2, a3, 108, 0);
                    v80 = 0;
                    v81 = v145;
                  }
                }
              }
              else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v139 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                                         + 16LL)
                      - 43 > 1
                     || !*(_BYTE *)(a2 + 914)
                     || !(unsigned __int8)sub_F436F0(*v139, *(_QWORD *)(a2 + 16))
                     || (v123 = sub_B685F0(v129), v124 = sub_B5A010(v129, v123), v80 = 0, v81 = v144, v124) )
              {
                if ( (*(_BYTE *)(sub_E0E500(a2) + 1) & 8) != 0 )
                {
                  v113 = sub_E0E500(a2);
                  v114 = (unsigned __int8 **)sub_E0FED0(
                                               a2,
                                               a3,
                                               (unsigned int)((*(unsigned __int8 *)(v113 + 1) << 27 >> 31) + 2431),
                                               1);
                  v115 = v114;
                  if ( v114 )
                  {
                    sub_AC60B0(v114, v129, 0xAu);
                    sub_AC60B0(v115, v147, 8u);
                  }
                  goto LABEL_123;
                }
                goto LABEL_6;
              }
            }
          }
        }
      }
      v137 = v80;
      v143 = v81;
      v85 = sub_A2B7A0((__int64)a5);
      if ( !(unsigned __int8)sub_BF54B0(a2, a3, v129, v137, v85, &v150) )
        goto LABEL_8;
      v24 = v137;
      v25 = v143;
      if ( v150 )
      {
LABEL_47:
        v47 = a5->m128i_i64[0];
        if ( !a5->m128i_i64[0] || (v47 & 3) != 0 || (v48 = v47 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        {
LABEL_52:
          if ( !v24 )
            goto LABEL_53;
LABEL_64:
          v127 = v25;
          v52 = sub_E0E500(a2);
          v25 = v127;
          if ( (*(_BYTE *)(v52 + 1) & 0x20) == 0 || !**(_BYTE **)(a2 + 24) )
            goto LABEL_53;
LABEL_8:
          a1->m128i_i64[0] = 0;
          a1->m128i_i64[1] = 0;
          a1[1].m128i_i64[0] = 0;
          a1[1].m128i_i64[1] = 0;
          return a1;
        }
        goto LABEL_50;
      }
      if ( *(_BYTE *)(a2 + 914) )
        goto LABEL_8;
      v86 = (unsigned __int8 **)sub_E0FED0(a2, a3, 2373, 1);
      v87 = v86;
      if ( v86 )
      {
        sub_BED5E0(v86, a4);
        sub_AC60B0(v87, v129, 0xAu);
      }
LABEL_123:
      sub_E10070(a2, *(unsigned int *)(v129 + 24), 103);
      goto LABEL_8;
    }
LABEL_35:
    v41 = 0;
    if ( v24 )
    {
LABEL_36:
      v132 = v25;
      v126 = v24;
      v141 = v41;
      v42 = sub_A2B7A0((__int64)a5);
      v24 = v126;
      v25 = v132;
      v43 = *(_QWORD *)(v126 + 88);
      if ( v43 )
      {
        v44 = v126 + 80;
        do
        {
          if ( v141 > *(_QWORD *)(v43 + 32) || v141 == *(_QWORD *)(v43 + 32) && v42 > *(_DWORD *)(v43 + 40) )
          {
            v43 = *(_QWORD *)(v43 + 24);
          }
          else
          {
            v44 = v43;
            v43 = *(_QWORD *)(v43 + 16);
          }
        }
        while ( v43 );
        if ( v44 != v126 + 80 && v141 == *(_QWORD *)(v44 + 32) && v42 == *(_DWORD *)(v44 + 40) )
          v43 = v44 + 48;
      }
      v50 = a5->m128i_i64[0];
      v150 = v43;
      if ( !v50 )
        goto LABEL_64;
      if ( (v50 & 3) != 0 )
        goto LABEL_64;
      v51 = v50 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v51 || (*(_BYTE *)(v51 + 28) & 0x7F) != 0x2B )
        goto LABEL_64;
LABEL_51:
      ++v25;
      goto LABEL_52;
    }
    goto LABEL_103;
  }
  if ( v27 == 3 )
  {
    v53 = v26 >> 3;
    if ( (_DWORD)v53 )
    {
      v54 = *(_QWORD *)(a2 + 864);
      if ( v54 )
      {
        v55 = v53 - 1;
        v56 = a2 + 856;
        do
        {
          if ( *(_DWORD *)(v54 + 32) - 1 >= v55 )
          {
            v56 = v54;
            v54 = *(_QWORD *)(v54 + 16);
          }
          else
          {
            v54 = *(_QWORD *)(v54 + 24);
          }
        }
        while ( v54 );
        if ( a2 + 856 != v56 && *(_DWORD *)(v56 + 32) - 1 <= v55 )
        {
          v66 = sub_A2B7E0((__int64)a5);
          v67 = _mm_loadu_si128(a5);
          a1[1].m128i_i64[0] = v56 + 40;
          a1[1].m128i_i64[1] = v66;
          *a1 = v67;
          return a1;
        }
      }
      v13 = 2366;
      goto LABEL_4;
    }
    goto LABEL_35;
  }
  if ( v27 != 1 )
    goto LABEL_35;
  v57 = v26 & 0xFFFFFFFFFFFFFFFCLL;
  v58 = v57;
  v41 = v57;
  if ( v24 )
    goto LABEL_36;
  if ( v57 )
  {
    v59 = *(_WORD *)v57 & 0x1FF;
    if ( v59 == 48 )
    {
      v133 = v25;
      v60 = sub_C720B0(v57, *(_QWORD *)(a2 + 16), v23, v57);
      v61 = v133;
      if ( !v60 )
      {
        v62 = sub_BEBDD0(a2, a5->m128i_i64[0], a5->m128i_i64[1], 0);
        v61 = v133;
        if ( !v62 )
        {
          if ( !v149 )
          {
            v63 = _mm_loadu_si128(a5);
            a1[1].m128i_i64[0] = 0;
            *a1 = v63;
            a1[1].m128i_i64[1] = v147;
            return a1;
          }
          v95 = (__int64)a3;
          v96 = (unsigned __int8 **)sub_E0FED0(a2, a3, 2371, 1);
          if ( v96 )
          {
            v95 = a4;
            sub_BED5E0(v96, a4);
          }
          v100 = sub_BDCD00(v57, v95, v97, v98, v99);
          v101 = 2487;
          goto LABEL_134;
        }
      }
      v135 = v61;
      v71 = sub_B77A50(*(_QWORD *)(v57 + 16) & 0xFFFFFFFFFFFFFFF8LL, 0);
      v24 = 0;
      v25 = v135;
      v150 = v71;
    }
    else
    {
      if ( v59 != 76 )
        goto LABEL_103;
      v68 = *(_QWORD *)(v57 + 8);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) <= 4u
        && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) > 4u )
      {
        v138 = v25;
        v102 = sub_F32DA0(v68, *(_QWORD *)(a2 + 16));
        v24 = 0;
        v25 = v138;
        if ( !v102 )
        {
          sub_E0FED0(a2, a3, 108, 0);
          v100 = sub_BDCD00(v58, (__int64)a3, v103, v104, v105);
          v101 = 103;
LABEL_134:
          sub_E10070(a2, v100, v101);
          goto LABEL_8;
        }
      }
      v134 = v25;
      v128 = v24;
      v69 = sub_BE0500(v58);
      v24 = v128;
      v25 = v134;
      v150 = v69;
    }
    v70 = a5->m128i_i64[0];
    if ( !a5->m128i_i64[0] || (v70 & 3) != 0 || (v48 = v70 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
LABEL_53:
      if ( ((1LL << a4) & 0x4E3) != 0 || *(_DWORD *)(a2 + 900) <= v25 )
      {
        v49 = _mm_loadu_si128(a5);
        a1[1].m128i_i64[0] = v150;
        *a1 = v49;
        a1[1].m128i_i64[1] = v147;
        return a1;
      }
      goto LABEL_8;
    }
LABEL_50:
    if ( (*(_BYTE *)(v48 + 28) & 0x7F) != 0x2B )
      goto LABEL_52;
    goto LABEL_51;
  }
LABEL_103:
  if ( v149 )
  {
    v153.m128i_i8[4] &= ~1u;
    v153.m128i_i32[0] = 0;
    sub_BEBB50((__int64)a5, (__int64)&v153);
    v88 = (unsigned __int8 **)sub_E0FED0(a2, a3, 2374, 0);
    v89 = v88;
    if ( v88 )
    {
      sub_BED5E0(v88, a4);
      v90 = sub_A4F2F0(*(_QWORD *)(a2 + 16), a6, 1u);
      sub_A2FDB0((__int64)v151, &v153, *(_QWORD *)(a2 + 16), v90);
      sub_AC84E0(v89, (_BYTE *)v151[0], (signed __int64)v151[1]);
    }
    else
    {
      v94 = sub_A4F2F0(*(_QWORD *)(a2 + 16), a6, 1u);
      sub_A2FDB0((__int64)v151, &v153, *(_QWORD *)(a2 + 16), v94);
    }
    if ( v151[0] != &v152 )
      operator delete(v151[0]);
    sub_BEDD60(a2, a5->m128i_i64[0], a5->m128i_i64[1], v91, v92);
    v93 = v153.m128i_i32[0] <= 1u;
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = 0;
    a1[1].m128i_i64[0] = 0;
    a1[1].m128i_i64[1] = 0;
    if ( !v93 )
      sub_A2BBA0(v153.m128i_i32);
  }
  else
  {
    v74 = _mm_loadu_si128(a5);
    a1[1].m128i_i64[0] = 0;
    *a1 = v74;
    a1[1].m128i_i64[1] = v147;
  }
  return a1;
}

