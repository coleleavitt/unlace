__int64 __fastcall sub_C47E70(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // r15
  __int16 v8; // ax
  unsigned __int8 **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  unsigned __int8 **v14; // r12
  void *v15; // rax
  unsigned int v16; // r15d
  unsigned __int32 v17; // eax
  __int64 v18; // rsi
  char v19; // r12
  __int64 v21; // rsi
  __int64 v22; // rax
  __int8 v23; // al
  __int64 v24; // rsi
  bool v25; // al
  __int64 v26; // rcx
  __int64 v27; // r12
  __int64 v28; // rdi
  __int8 v29; // al
  __int64 v30; // rsi
  bool v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rax
  void *v36; // rdx
  __int64 v37; // rsi
  __int8 v38; // al
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rsi
  void *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rsi
  unsigned int v46; // eax
  void *v47; // rbp
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  char v51; // al
  char v52; // r14
  bool v53; // zf
  _BOOL8 v54; // rcx
  __int64 v55; // rdx
  _QWORD *v56; // r13
  unsigned __int64 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  size_t v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r13
  __int64 v68; // r12
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdi
  unsigned __int64 v72; // r14
  bool v73; // al
  __int64 v74; // rax
  __int64 v75; // r14
  __int64 v76; // rax
  unsigned __int64 v77; // rax
  _DWORD *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdi
  unsigned __int8 **v81; // rax
  unsigned __int8 **v82; // r12
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rbp
  __int64 v98; // rbx
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // r14
  int v101; // eax
  __int64 v102; // rax
  unsigned __int64 v103; // rdi
  unsigned __int8 v104; // cl
  __int64 v105; // rax
  unsigned __int64 v106; // rax
  __int64 v107; // r14
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  unsigned __int8 **v112; // rax
  unsigned __int8 **v113; // r12
  __int64 v114; // r12
  __int64 v115; // r14
  __int64 v116; // rax
  unsigned __int64 v117; // rax
  _DWORD *v118; // rax
  unsigned __int8 **v119; // rax
  unsigned __int8 **v120; // rax
  unsigned __int8 **v121; // r12
  __int64 v122; // rsi
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  unsigned __int64 v130; // rax
  __int64 v131; // rdi
  __int64 v132; // r12
  unsigned __int64 v133; // r12
  _DWORD *v134; // rax
  size_t n; // [rsp+8h] [rbp-140h] BYREF
  char v136; // [rsp+17h] [rbp-131h]
  __int64 v137; // [rsp+18h] [rbp-130h]
  __m128i si128; // [rsp+20h] [rbp-128h] BYREF
  __int64 v139[2]; // [rsp+30h] [rbp-118h] BYREF
  void *v140[2]; // [rsp+40h] [rbp-108h] BYREF
  __int8 v141; // [rsp+50h] [rbp-F8h]
  __m128 v142; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v143; // [rsp+90h] [rbp-B8h]
  char v144; // [rsp+98h] [rbp-B0h]
  __int64 v145; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v147; // [rsp+B8h] [rbp-90h]
  _BYTE v148[65]; // [rsp+C0h] [rbp-88h] BYREF
  char v149; // [rsp+101h] [rbp-47h]

  v7 = *(_QWORD *)(a2 + 16);
  v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  switch ( (char)v8 )
  {
    case 1:
    case 40:
    case 41:
    case 42:
    case 63:
      v18 = *(_QWORD *)(a2 + 16);
      v19 = sub_C48CF0(a1, v18);
      if ( !v19 )
        return 0;
      if ( (unsigned __int8)sub_F67340(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
        goto LABEL_97;
      v50 = a1->m128i_i64[1];
      v51 = *(_BYTE *)(v50 + 128) & 1;
      v52 = v51;
      v53 = (*(_BYTE *)(v50 + 128) & 2) == 0;
      v54 = (*(_BYTE *)(v50 + 128) & 2) != 0;
      v136 = (*(_BYTE *)(v50 + 128) & 2) != 0;
      if ( !v53 || (*(_BYTE *)(v50 + 24) & 1) != 0 )
      {
        if ( !v51 )
          goto LABEL_91;
        v55 = a1->m128i_i64[0];
        v136 = 0;
      }
      else
      {
        v55 = a1->m128i_i64[0];
        if ( !v51 )
        {
          v56 = *(_QWORD **)(v55 + 16);
          v57 = sub_F68450(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), v18, v55, v54, v49);
          v62 = sub_C0FCA0(a1->m128i_i64[1] + 24, *(_QWORD *)(a1->m128i_i64[0] + 16), v58, v59, v60, v61);
          v136 = sub_AC0070(v56, v62, v57, v63, v64);
          if ( !v136 )
          {
            v52 = v19;
            goto LABEL_91;
          }
          v55 = a1->m128i_i64[0];
        }
      }
      v137 = v55;
      v65 = j__strlen("allocate");
      v66 = v137;
      n = v65;
      v67 = *(_QWORD *)(v137 + 32);
      v68 = v137 + 56;
      if ( v67 == v137 + 56 )
        goto LABEL_133;
      while ( 1 )
      {
        v75 = *(_QWORD *)(v67 + 24);
        if ( v75 )
        {
          if ( (*(_BYTE *)(v75 + 28) & 0x7Fu) - 35 <= 3 )
          {
            v76 = *(_QWORD *)(v75 + 40);
            if ( (v76 & 7) == 0 )
            {
              v77 = v76 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v77 )
              {
                v78 = *(_DWORD **)(v77 + 16);
                if ( n == *v78 && (!n || !memcmp(v78 + 4, "allocate", n)) )
                {
                  v79 = *(_QWORD *)(sub_B8C1B0(v75 + 72) + 16);
                  if ( (v79 & 4) != 0 )
                    v69 = *(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF8LL);
                  else
                    v69 = v79 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( !v69 )
                    BUG();
                  if ( (*(_BYTE *)(v69 - 36) & 0x7Fu) - 60 <= 1 )
                  {
                    v70 = *(_QWORD *)(v69 - 24);
                    v71 = v69 - 64;
                    if ( (v70 & 7) != 0 )
                    {
                      sub_B8EC80(v71);
                    }
                    else
                    {
                      v72 = v70 & 0xFFFFFFFFFFFFFFF8LL;
                      v137 = *(_QWORD *)(v69 + 104);
                      v73 = sub_B8EC80(v71);
                      if ( v72 )
                      {
                        if ( v73 )
                        {
                          v74 = *(_QWORD *)(v72 + 16);
                          if ( *(_DWORD *)v74 == 9
                            && *(_QWORD *)(v74 + 16) == 0x6F7461636F6C6C61LL
                            && *(_BYTE *)(v74 + 24) == 114
                            && *(_DWORD *)v137
                            && (*(_DWORD *)(v137 + 8) & 0x7FFFFFFF) == 1 )
                          {
                            if ( *(_DWORD *)(v67 + 128) )
                              goto LABEL_97;
LABEL_132:
                            v66 = a1->m128i_i64[0];
LABEL_133:
                            v114 = v66;
                            v115 = *(_QWORD *)(*(_QWORD *)(v66 + 32) + 24LL);
                            if ( v115 )
                            {
                              v116 = *(_QWORD *)(v115 + 40);
                              if ( (v116 & 7) == 0 )
                              {
                                v117 = v116 & 0xFFFFFFFFFFFFFFF8LL;
                                if ( v117 )
                                {
                                  v118 = *(_DWORD **)(v117 + 16);
                                  if ( *v118 == 7 && !memcmp(v118 + 4, "current", 7u) )
                                  {
                                    v130 = sub_B72690(v115 + 72);
                                    if ( (*(_BYTE *)(v130 + 8) & 0x7Fu) - 58 > 3 )
                                      goto LABEL_156;
                                    v131 = v130 - 64;
                                    if ( v130 == 64 )
                                      goto LABEL_156;
                                    v132 = *(_QWORD *)(v130 - 24);
                                    if ( (v132 & 7) != 0 )
                                    {
                                      sub_B8EC80(v131);
                                      goto LABEL_156;
                                    }
                                    if ( !sub_B8EC80(v131)
                                      || (v133 = v132 & 0xFFFFFFFFFFFFFFF8LL) == 0
                                      || (v134 = *(_DWORD **)(v133 + 16), *v134 != 15)
                                      || memcmp(v134 + 4, "source_location", 0xFu) )
                                    {
LABEL_156:
                                      v114 = a1->m128i_i64[0];
                                      goto LABEL_137;
                                    }
LABEL_97:
                                    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 0x3F )
                                      return 1;
                                    v95 = a1->m128i_i64[1];
                                    v16 = *(_BYTE *)(v95 + 128) & 1;
                                    if ( (*(_BYTE *)(v95 + 128) & 1) == 0 )
                                      return 1;
                                    sub_C243E0(v95, *(_QWORD *)(a1->m128i_i64[0] + 16), *(_QWORD *)(a2 + 8));
                                    return v16;
                                  }
                                }
                              }
                            }
LABEL_137:
                            if ( (*(_BYTE *)(sub_E32240(v114) + 2) & 2) != 0 )
                              goto LABEL_97;
                            v52 = v136;
LABEL_91:
                            if ( (unsigned __int8)sub_F67340(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL))
                              && (*(_BYTE *)(sub_E32240(a1->m128i_i64[0]) + 1) & 8) != 0 )
                            {
                              v80 = a1->m128i_i64[0];
                              if ( v52 )
                              {
                                v81 = (unsigned __int8 **)sub_E33C90(v80, a2, 2421, 0);
                                v82 = v81;
                                if ( v81 )
                                {
                                  sub_AE9DF0(v81, *(_QWORD *)(v7 + 8), 8u);
                                  v83 = sub_E32240(a1->m128i_i64[0]);
                                  sub_AE9DF0(v82, (*(_BYTE *)(v83 + 2) & 2) != 0, 3u);
                                  v88 = sub_C0FCA0(
                                          a1->m128i_i64[1] + 24,
                                          *(_QWORD *)(a1->m128i_i64[0] + 16),
                                          v84,
                                          v85,
                                          v86,
                                          v87);
                                  v89 = *(_QWORD *)&byte_8[v88 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                      | ((unsigned __int8)*(_QWORD *)&byte_8[v88 & 0xFFFFFFFFFFFFFFF0LL]
                                       | (unsigned __int8)v88)
                                      & 7;
                                  sub_AE9DF0(v82, v89, 8u);
                                  v93 = sub_F68450(
                                          *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                                          v89,
                                          v90,
                                          v91,
                                          v92);
                                  sub_AE9DF0(v82, v93, 8u);
                                }
                                else
                                {
                                  sub_E32240(a1->m128i_i64[0]);
                                  v122 = *(_QWORD *)(a1->m128i_i64[0] + 16);
                                  sub_C0FCA0(a1->m128i_i64[1] + 24, v122, v123, v124, v125, v126);
                                  sub_F68450(
                                    *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                                    v122,
                                    v127,
                                    v128,
                                    v129);
                                }
                              }
                              else
                              {
                                v120 = (unsigned __int8 **)sub_E33C90(v80, a2, 2417, 0);
                                v121 = v120;
                                if ( v120 )
                                {
                                  sub_C11320(v120, 3);
                                  sub_AE9DF0(v121, *(_QWORD *)(v7 + 8), 8u);
                                }
                              }
                            }
                            else
                            {
                              v112 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], a2, 2417, 0);
                              v113 = v112;
                              if ( v112 )
                              {
                                sub_C11320(v112, 2);
                                sub_AE9DF0(
                                  v113,
                                  (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2320LL) + 1LL) & 8) != 0,
                                  3u);
                              }
                            }
                            v94 = a1->m128i_i64[1];
                            *(_BYTE *)(v94 + 24) |= 1u;
                            *(_DWORD *)(v94 + 56) = 0;
                            goto LABEL_97;
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
        v67 = *(_QWORD *)(v67 + 16);
        if ( v67 == v68 )
          goto LABEL_132;
      }
    case 4:
      v36 = (void *)a1->m128i_i64[0];
      v37 = *(_QWORD *)(a2 + 16);
      v142 = 0u;
      ptr = v148;
      v147 = 0x800000000LL;
      v38 = a1[1].m128i_i8[0];
      v143 = 0;
      v144 |= 1u;
      v145 = 0;
      v149 = 0;
      v140[0] = v36;
      v140[1] = &v142;
      v141 = v38;
      v16 = sub_C5C820(v140, v37);
      if ( !(_BYTE)v16 )
        goto LABEL_35;
      v96 = *(_QWORD *)(a2 + 16);
      BYTE4(v140[0]) &= ~1u;
      LODWORD(v140[0]) = 0;
      v16 = sub_C36570(a1->m128i_i64[0], (_DWORD *)a2, *(_QWORD *)(v96 + 8), (__int64)&v142, (__int64)v140, 0);
      if ( (_BYTE)v16 )
      {
LABEL_51:
        sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)v140);
        goto LABEL_52;
      }
      v16 = a1[1].m128i_u8[0];
      if ( !(_BYTE)v16 )
        goto LABEL_52;
      v97 = a1->m128i_i64[1];
      v98 = a1->m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)&v142);
      if ( sub_A4F6F0(&si128) )
        goto LABEL_126;
      if ( !si128.m128i_i64[0] )
        goto LABEL_126;
      if ( (si128.m128i_i8[0] & 3) != 0 )
        goto LABEL_126;
      v99 = si128.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      v100 = si128.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      if ( (si128.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_126;
      v101 = *(_BYTE *)(v99 + 28) & 0x7F;
      if ( (unsigned int)(v101 - 40) > 6 || v101 != 40 && v101 != 46 )
        goto LABEL_126;
      v102 = *(_QWORD *)(v99 + 16);
      v103 = v102 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v102 & 4) != 0 )
        v103 = *(_QWORD *)(v103 + 8);
      if ( !v103 )
        goto LABEL_126;
      v104 = *(_BYTE *)(sub_B8EAA0(v103) + 8) & 0x7F;
      if ( v104 <= 0x12u )
      {
        if ( ((1LL << v104) & 0x40182) != 0 )
          goto LABEL_114;
LABEL_126:
        v16 = 0;
        goto LABEL_52;
      }
      if ( ((v104 + 94) & 0x7Fu) > 5 )
        goto LABEL_126;
LABEL_114:
      v105 = *(_QWORD *)(v100 + 48);
      if ( (v105 & 1) == 0 && (byte_8[v105 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
        goto LABEL_126;
      n = (size_t)v139;
      v106 = sub_B7D120(v100, v139);
      if ( !v106 )
        goto LABEL_126;
      if ( (*(_QWORD *)(v106 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_126;
      v107 = sub_BFB9F0(v106);
      if ( !sub_C11780(v107, (__int64)v139) )
        goto LABEL_126;
      sub_A4F2D0(n, v107, 0, 0);
      v108 = v139[0];
      sub_C24210(v97, v139[0], (__int64 *)v139[1], 1);
      v111 = *(_QWORD *)(*(_QWORD *)(v107 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v111 + 16) != 42 )
        v111 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v107 + 8) & 0xFFFFFFFFFFFFFFF0LL), v108, v109, v110);
      sub_C12C40(v97, v98, v107, *(_QWORD *)(v111 + 32));
LABEL_52:
      if ( LODWORD(v140[0]) > 1 )
        sub_A4F8E0((int *)v140);
LABEL_35:
      if ( ptr != v148 )
        free(ptr);
      return v16;
    case 6:
      if ( !(unsigned __int8)sub_C48CF0(a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      v25 = sub_A4F700((_QWORD *)a1->m128i_i64[1]);
      v27 = a1->m128i_i64[1];
      if ( !v25 && !*(_QWORD *)(v27 + 16) )
        return 1;
      if ( (*(_BYTE *)(v27 + 24) & 1) != 0 )
        return 0;
      v28 = a1->m128i_i64[0];
      if ( (*(_BYTE *)(v27 + 128) & 1) != 0 )
      {
        v119 = (unsigned __int8 **)sub_E33C90(v28, a2, 2461, 0);
        if ( v119 )
          sub_C11320(v119, 1);
        *(_BYTE *)(v27 + 24) |= 1u;
        *(_DWORD *)(v27 + 56) = 0;
        return 0;
      }
      return (unsigned int)sub_C30760(v28, a2, a1->m128i_i64[1], v26);
    case 7:
    case 8:
      v29 = a1[1].m128i_i8[0];
      v30 = *(_QWORD *)(a2 + 16);
      v142 = (__m128)_mm_loadu_si128(a1);
      LOBYTE(v143) = v29;
      if ( !(unsigned __int8)sub_C48CF0(&v142, v30) )
        return 0;
      v31 = sub_A4F700((_QWORD *)a1->m128i_i64[1]);
      v34 = a1->m128i_i64[1];
      if ( !v31 && !*(_QWORD *)(v34 + 16) )
        return 1;
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v35 + 16) != 42 )
        v35 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), v30, v32, v33);
      return (unsigned int)sub_C2E310(a1->m128i_i64[0], a2, *(_QWORD *)(v35 + 32), v34);
    case 9:
      if ( !(unsigned __int8)sub_C48CF0(a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      return (unsigned int)sub_C37170((__int64 *)a1->m128i_i64[0], a2, (__m128i *)a1->m128i_i64[1]);
    case 11:
      if ( (*(_BYTE *)(v7 + 1) & 6) != 0 )
      {
        v21 = *(_QWORD *)(a2 + 16);
        n = a1->m128i_u64[1];
        LOBYTE(v143) = a1[1].m128i_i8[0];
        v142 = _mm_loadh_ps((const double *)&n);
        if ( (unsigned __int8)sub_C5C820(&v142, v21) )
          goto LABEL_17;
      }
      else
      {
        v40 = sub_C2BF90(
                *(_QWORD *)(a1->m128i_i64[0] + 32),
                *(_QWORD *)(a2 + 16),
                *(_QWORD *)(v7 + 8),
                1,
                a1->m128i_i64[1]);
        if ( (unsigned __int8)sub_C4F9A0(v40, a1->m128i_i64[0], a1->m128i_i64[1], v7) )
        {
LABEL_17:
          v22 = sub_A72040(*(_QWORD **)(a1->m128i_i64[0] + 16), *(_QWORD *)(v7 + 8));
          v16 = 1;
          if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 2 > 1 )
            sub_C12C40(a1->m128i_i64[1], a1->m128i_i64[0], a2, *(_QWORD *)(v22 + 32));
          else
            sub_C123F0(a1->m128i_i64[1], a1->m128i_i64[0], a2, v22);
          return v16;
        }
      }
      return 0;
    case 12:
      v23 = a1[1].m128i_i8[0];
      v24 = *(_QWORD *)(a2 + 16);
      v142 = (__m128)_mm_loadu_si128(a1);
      LOBYTE(v143) = v23;
      return (unsigned int)sub_C5C820(&v142, v24);
    case 13:
      sub_C3FAF0(a1->m128i_i64[0], *(_QWORD *)(a2 + 16), a3, (unsigned __int8)v8, a5);
      sub_C243E0(a1->m128i_i64[1], *(_QWORD *)(a1->m128i_i64[0] + 16), *(_QWORD *)(a2 + 8));
      return 1;
    case 21:
      v9 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], a2, 2417, 0);
      v14 = v9;
      if ( v9 )
      {
        sub_C11320(v9, 2);
        sub_AE9DF0(v14, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2320LL) + 1LL) & 8) != 0, 3u);
      }
      v15 = (void *)a1->m128i_i64[0];
      v142.m128_i8[4] &= ~1u;
      v142.m128_i32[0] = 0;
      v140[0] = v15;
      v140[1] = &v142;
      v16 = sub_C44E70((__int64 *)v140, v7, v10, v11, v12, v13);
      if ( !(_BYTE)v16 )
      {
        if ( v142.m128_i32[0] > 1u )
          sub_A4F8E0((int *)&v142);
        v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
        goto LABEL_40;
      }
      v17 = v142.m128_i32[0];
      if ( v142.m128_i32[0] == 2 )
      {
        v46 = sub_A97D20(*(_QWORD *)(a1->m128i_i64[0] + 16), *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        sub_C16870((__int64)v140, (__int64)&v142.m128_i64[1], v46);
        v47 = v140[0];
        if ( LODWORD(v140[1]) > 0x40 )
        {
          v47 = *(void **)v140[0];
          operator delete[](v140[0]);
        }
        sub_A4F2D0((__int64)v140, 0, 0, 0);
        *(__m128i *)a1->m128i_i64[1] = _mm_load_si128((const __m128i *)v140);
        *(_BYTE *)(a1->m128i_i64[1] + 128) &= ~2u;
        *(_QWORD *)(a1->m128i_i64[1] + 16) = v47;
        v48 = a1->m128i_i64[1];
        *(_BYTE *)(v48 + 24) |= 1u;
        *(_DWORD *)(v48 + 56) = 0;
        *(_BYTE *)(a1->m128i_i64[1] + 128) &= ~1u;
        v17 = v142.m128_i32[0];
      }
      else if ( v142.m128_i32[0] == 7 )
      {
        sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v142);
        v17 = v142.m128_i32[0];
      }
      else
      {
        v16 = 0;
      }
      if ( v17 > 1 )
LABEL_9:
        sub_A4F8E0((int *)&v142);
      return v16;
    default:
LABEL_40:
      switch ( ((_BYTE)v8 + 125) & 0x7F )
      {
        case 0:
          v44 = *(_QWORD *)(a2 + 16);
          v45 = a1->m128i_i64[0];
          LODWORD(v140[0]) = 0;
          BYTE4(v140[0]) &= ~1u;
          v142.m128_i8[4] &= ~1u;
          v142.m128_i32[0] = 0;
          if ( (unsigned __int8)sub_C39A10((__int64)&v142, v45, v44, a4, a5)
            && (v16 = sub_C36960(a1->m128i_i64[0], (__int64)v140, (__int64)&v142, a2), (_BYTE)v16) )
          {
            sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)v140);
          }
          else
          {
            v16 = 0;
          }
          if ( v142.m128_i32[0] > 1u )
            sub_A4F8E0((int *)&v142);
          if ( LODWORD(v140[0]) > 1 )
            sub_A4F8E0((int *)v140);
          break;
        case 1:
          v41 = *(_QWORD *)(a2 + 16);
          v142 = 0u;
          ptr = v148;
          v147 = 0x800000000LL;
          v42 = (void *)a1->m128i_i64[0];
          v143 = 0;
          v144 |= 1u;
          v145 = 0;
          v149 = 0;
          v140[0] = v42;
          v140[1] = &v142;
          v141 = 0;
          v16 = sub_C5C820(v140, v41);
          if ( !(_BYTE)v16 )
            goto LABEL_35;
          v43 = *(_QWORD *)(a2 + 16);
          BYTE4(v140[0]) &= ~1u;
          LODWORD(v140[0]) = 0;
          v16 = sub_C36570(a1->m128i_i64[0], (_DWORD *)a2, *(_QWORD *)(v43 + 8), (__int64)&v142, (__int64)v140, 0);
          if ( (_BYTE)v16 )
            goto LABEL_51;
          goto LABEL_52;
        case 2:
        case 0x10:
          v16 = sub_C48CF0(a1, *(_QWORD *)(a2 + 16));
          break;
        case 0x37:
        case 0x3C:
          v142.m128_i32[0] = 0;
          v39 = a1->m128i_i64[0];
          v142.m128_i8[4] &= ~1u;
          v16 = sub_C39A10((__int64)&v142, v39, *(_QWORD *)(a2 + 16), a4, a5);
          if ( (_BYTE)v16 )
            sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v142);
          if ( v142.m128_i32[0] > 1u )
            goto LABEL_9;
          break;
        default:
          v16 = sub_C14310(a1->m128i_i64[0], a2);
          break;
      }
      return v16;
  }
}
