__int64 __fastcall sub_C66B40(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // r14d
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  int *v14; // rbp
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __m128i *v20; // r13
  __int64 v21; // r15
  __int64 v22; // r12
  unsigned __int8 v23; // al
  int v24; // r14d
  __m128 v25; // xmm0
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // r15
  int v30; // ecx
  unsigned __int64 v31; // rcx
  _QWORD *v32; // r11
  unsigned int v33; // r14d
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 *v36; // r8
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rbx
  unsigned __int64 v42; // r13
  __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  unsigned __int8 **v45; // rax
  unsigned int v46; // ebp
  unsigned __int8 **v47; // rax
  unsigned __int8 **v48; // r12
  void *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // r15d
  unsigned __int64 v54; // r13
  unsigned __int8 **v55; // rax
  unsigned __int8 **v56; // rbx
  unsigned __int8 **v57; // rax
  unsigned int v58; // eax
  __m128i *v59; // r13
  __int64 v60; // rax
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // r15
  unsigned __int8 **v63; // rax
  unsigned __int8 **v64; // rbx
  __m128i v65; // xmm1
  __int64 v66; // rax
  _QWORD *v67; // rax
  bool v68; // al
  unsigned __int8 **v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  char v73; // al
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  _QWORD *v79; // rcx
  _QWORD *v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rax
  char v85; // dl
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r9
  unsigned __int64 v90; // r13
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // r8
  unsigned __int64 v94; // r12
  unsigned __int64 *v95; // rbx
  char v96; // al
  char v97; // al
  __int64 v98; // rdi
  __int64 v99; // rax
  unsigned __int64 v100; // rbx
  unsigned int v101; // eax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int64 v106; // rax
  int v107; // eax
  __int64 v108; // rbx
  __int64 v109; // rdx
  unsigned __int64 *v110; // rsi
  _QWORD *v111; // rax
  _QWORD *v112; // r15
  _BYTE *v113; // rdx
  __int64 v114; // rax
  __int64 v115; // r13
  __int64 v116; // r15
  unsigned __int8 **v117; // rax
  unsigned __int8 **v118; // rbx
  __int64 v119; // rdx
  int v120; // eax
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r15
  unsigned __int8 **v125; // rax
  unsigned __int8 **v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rbx
  __int64 v129; // r13
  __int64 v130; // rbp
  __int64 v131; // rdx
  __int64 v132; // r13
  __int64 v133; // rbx
  void *v134; // rdi
  _QWORD *v135; // [rsp+8h] [rbp-140h] BYREF
  __m128i *v136; // [rsp+10h] [rbp-138h]
  unsigned __int64 v137; // [rsp+18h] [rbp-130h]
  unsigned __int64 *v138; // [rsp+20h] [rbp-128h]
  __m128i *v139; // [rsp+28h] [rbp-120h]
  __int64 *v140; // [rsp+30h] [rbp-118h]
  int v141; // [rsp+38h] [rbp-110h]
  unsigned __int8 v142; // [rsp+3Fh] [rbp-109h]
  _QWORD *v143; // [rsp+40h] [rbp-108h]
  __int64 *v144; // [rsp+48h] [rbp-100h]
  _QWORD *v145; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v146; // [rsp+58h] [rbp-F0h]
  __m128i v147; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 *v148; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v149; // [rsp+78h] [rbp-D0h]
  void *v150[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v151; // [rsp+90h] [rbp-B8h]
  __int64 v152; // [rsp+98h] [rbp-B0h]
  __m128 v153; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v154; // [rsp+B0h] [rbp-98h]
  unsigned int v155; // [rsp+B8h] [rbp-90h]
  __int64 *v156; // [rsp+C0h] [rbp-88h]
  __int64 v157; // [rsp+D0h] [rbp-78h] BYREF
  char v158; // [rsp+D8h] [rbp-70h]

  v3 = a2;
  v4 = sub_E32240(a1->m128i_i64[0]);
  v7 = a1->m128i_i64[0];
  if ( (*(_BYTE *)(v4 + 1) & 0x20) == 0 )
  {
    v6 = *(unsigned int *)(v7 + 48);
    if ( !(_DWORD)v6 || !*(_BYTE *)(v7 + 914) && !*(_BYTE *)(v7 + 915) )
    {
      v8 = (__int64 *)sub_E33C10(v7, a2, 108, 0);
      v9 = sub_EEC8C0(a2);
      if ( v8 )
      {
        v157 = v9;
        v158 = 1;
        sub_AEC610(v8, &v157);
      }
      return 0;
    }
  }
  v12 = *(_QWORD *)(a2 + 24);
  v13 = a1->m128i_i64[0];
  v14 = (int *)&v157;
  LODWORD(v157) = 0;
  BYTE4(v157) &= ~1u;
  v10 = sub_C39A10((__int64)&v157, v13, v12, v5, v6);
  if ( !(_BYTE)v10 )
  {
    v19 = a1->m128i_i64[0];
    if ( *(_DWORD *)(a1->m128i_i64[0] + 48) && (*(_BYTE *)(v19 + 914) || *(_BYTE *)(v19 + 915)) )
    {
      **(_BYTE **)(v19 + 24) = 1;
      sub_C5C820(a1, *(__m128i **)(v3 + 16), v15, v16, v17, v18);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ( !(unsigned __int8)sub_C5C820(a1, *(__m128i **)(v3 + 16), v15, v16, v17, v18) )
    goto LABEL_13;
  v20 = (__m128i *)a1->m128i_i64[1];
  v21 = *(_QWORD *)(v3 + 32);
  v22 = a1->m128i_i64[0];
  v23 = (*(_WORD *)(v3 + 2) >> 3) & 0x3F;
  v24 = v23 - 13;
  if ( v23 < 0x1Du )
    v24 = v23 - 20;
  if ( (v20[1].m128i_i8[8] & 1) != 0 )
  {
LABEL_13:
    v10 = 0;
    goto LABEL_14;
  }
  v135 = *(_QWORD **)(*(_QWORD *)(v3 + 16) + 8LL);
  if ( (*(_BYTE *)(sub_E32240(v22) + 1) & 0x20) == 0 )
  {
LABEL_44:
    sub_E33C10(v22, v3, 108, 0);
    v10 = 0;
    goto LABEL_14;
  }
  v136 = &v147;
  sub_C1C470(&v147, v22, (_DWORD *)v3, 2u, v20, (__int64)v135);
  v135 = (_QWORD *)v3;
  v154 = v21;
  v155 = v24;
  v25 = _mm_loadh_ps((const double *)&v135);
  v156 = &v157;
  v153 = v25;
  if ( (v149 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_13;
  v26 = v20[1].m128i_u8[8];
  v137 = v149;
  if ( (v26 & 1) != 0 )
    goto LABEL_13;
  if ( sub_C105C0((__int64)&v20[1].m128i_i64[1])
    || (v28 = v137, LODWORD(v135) = v20[3].m128i_i32[2], (_DWORD)v135 == 1) && (v26 &= 4u, (_DWORD)v26) )
  {
    if ( (*(_BYTE *)(sub_E32240(v22) + 1) & 0x10) != 0 )
    {
      v68 = sub_C105C0((__int64)&v20[1].m128i_i64[1]);
      v69 = (unsigned __int8 **)sub_E33C10(v22, v3, !v68 ? 2375 : 2370, 0);
      if ( v69 )
        sub_C11320(v69, 2);
      goto LABEL_13;
    }
    goto LABEL_44;
  }
  v29 = (__int64)v148;
  v30 = *(_DWORD *)v148;
  v138 = v148;
  if ( !v30 )
  {
LABEL_54:
    v10 = *(unsigned __int8 *)(v22 + 914);
    if ( !(_BYTE)v10 )
    {
      v47 = (unsigned __int8 **)sub_E33C10(v22, v3, 2372, 0);
      v48 = v47;
      if ( v47 )
      {
        sub_C11320(v47, 2);
        sub_C11320(v48, *(_DWORD *)v138 == 1);
        v49 = (void *)sub_EEC8C0(v3);
        LOBYTE(v150[1]) = 1;
        v150[0] = v49;
        sub_AEC610((__int64 *)v48, (__int64 *)v150);
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v139 = v20;
  v31 = 0;
  v32 = nullptr;
  v138 = (unsigned __int64 *)v150;
  v144 = (__int64 *)(v22 + 824);
  v143 = nullptr;
  v137 = v3;
  v141 = (_DWORD)v135 - 1;
  v142 = 0;
  v33 = 0;
  v140 = &v157;
  v34 = v28;
  while ( 1 )
  {
    if ( (v34 & 1) != 0
      || (v35 = *(_QWORD *)&byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL] & 1LL,
          (v26 = (unsigned int)v35 | v34 & 4 | *(_QWORD *)&byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v65 = _mm_load_si128(&v147);
        v145 = v32;
        v26 = (unsigned __int64)v138;
        v66 = v139[3].m128i_i64[0];
        *(__m128i *)v150 = v65;
        v151 = v66;
        v152 = v33;
        v67 = sub_C2F440(v144, v138);
        v32 = v145;
        if ( v67 )
        {
          v27 = *((unsigned int *)v67 + 8);
          if ( (_DWORD)v27 )
          {
            v31 = *(_QWORD *)&byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
            v34 = v31 | v34 & 2 | byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL] & 2;
          }
        }
      }
    }
    if ( (_DWORD)v135 == v33 )
      goto LABEL_57;
    v36 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
    v37 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
    v38 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v141 == v33 )
    {
      if ( (_BYTE)v38 == 14 )
      {
LABEL_57:
        if ( (v34 & 4) != 0
          || (v36 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF0LL), (byte_8[v34 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
        {
          v10 = v142;
          v44 = v137;
          v14 = (int *)v140;
          if ( (*(_BYTE *)(sub_E32240(v22) + 1) & 8) != 0 )
          {
            v53 = 0;
            if ( v143 )
            {
              v53 = *((_DWORD *)v143 + 6);
              v54 = 2;
            }
            else
            {
              v54 = v147.m128i_i64[0];
              if ( v147.m128i_i64[0] )
              {
                if ( (v147.m128i_i8[0] & 3) != 0 )
                {
                  if ( (v147.m128i_i8[0] & 3) == 1 )
                  {
                    v54 = v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
                    if ( (v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                    {
                      v54 = 0;
                      v53 = sub_C00A40(v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v26, v50, v51, v52);
                    }
                  }
                  else
                  {
                    v54 = 0;
                  }
                }
                else
                {
                  v54 = v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                  {
                    v143 = (_QWORD *)(v147.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
                    v53 = *(_DWORD *)(v54 + 24);
                    v54 = 1;
                  }
                }
              }
            }
            v55 = (unsigned __int8 **)sub_E33C10(v22, v44, 2376, 1);
            v56 = v55;
            if ( v55 )
            {
              sub_C11320(v55, 2);
              sub_C11320(v56, v54);
              sub_AE9DF0(v56, (__int64)v143, 0xAu);
            }
            v57 = (unsigned __int8 **)sub_E33DB0(v22, v53, 2506);
            if ( v57 )
              sub_C11320(v57, v54);
            goto LABEL_14;
          }
LABEL_123:
          sub_E33C10(v22, v44, 108, 0);
          goto LABEL_14;
        }
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v36 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
        {
          v26 = v22;
          v146 = (unsigned __int64)v32;
          v145 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
          v96 = sub_C118B0(v136->m128i_i64, v22, 2u);
          v36 = v145;
          v32 = (_QWORD *)v146;
          if ( !v96 )
          {
            v26 = v137;
            v97 = sub_C287E0(v22, v137, 2, v34);
            v36 = v145;
            v32 = (_QWORD *)v146;
            if ( v97 )
            {
LABEL_122:
              v14 = (int *)v140;
              goto LABEL_13;
            }
          }
        }
        if ( (_DWORD)v135 == v33 )
        {
          v138 = (unsigned __int64 *)v29;
          v108 = v137;
          v109 = v34;
          v14 = (int *)v140;
          v135 = v32;
          v10 = sub_C252A0(&v153, (_DWORD *)v29, v109, v31, (__int64)v36);
          if ( (_BYTE)v10 )
          {
            if ( v135 && (*((_BYTE *)v135 + 68) & 1) != 0 )
              v10 = sub_C12D50(v22, v108, v29, (__int64)v135);
            goto LABEL_14;
          }
          goto LABEL_13;
        }
        v37 = *v36;
        v38 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v36 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        goto LABEL_32;
      }
      if ( (unsigned __int8)(v38 - 2) > 4u )
        goto LABEL_71;
LABEL_33:
      v39 = sub_A72040(*(_QWORD **)(v22 + 16), v34);
      v41 = v39;
      if ( !v39 || (unsigned int)*(unsigned __int8 *)(v39 + 16) - 2 > 1 )
        BUG();
      v31 = (unsigned __int64)v139;
      v26 = *(_QWORD *)(v39 + 40);
      v42 = *(_QWORD *)(v139[3].m128i_i64[0] + 8LL * v33);
      v43 = *(unsigned __int8 *)(v39 + 19);
      if ( (v43 & 2) != 0 )
      {
        LODWORD(v150[1]) = *(_DWORD *)(v26 + 8);
        if ( LODWORD(v150[1]) <= 0x40 )
        {
          v150[0] = *(void **)v26;
          goto LABEL_38;
        }
        sub_2205510(v138);
        v46 = (unsigned int)v150[1];
      }
      else
      {
        v43 = ((unsigned __int8)v43 >> 2) & 0x1F;
        v46 = 8 * v43;
        LODWORD(v150[1]) = 8 * v43;
        if ( 8 * (int)v43 > 64 )
        {
          sub_2205470(v138, v26, 0);
          v46 = (unsigned int)v150[1];
        }
        else
        {
          v150[0] = (void *)v26;
        }
      }
      if ( v46 <= 0x40 )
      {
LABEL_38:
        if ( (void *)v42 >= v150[0] )
        {
          v10 = v142;
          v44 = v137;
          v14 = (int *)v140;
          goto LABEL_40;
        }
        goto LABEL_50;
      }
      v43 = v46 - (unsigned int)sub_2206780(v138);
      if ( (unsigned int)v43 <= 0x40 )
      {
        if ( v42 >= *(_QWORD *)v150[0] )
        {
          v10 = v142;
          v44 = v137;
          v14 = (int *)v140;
          if ( v150[0] )
            operator delete[](v150[0]);
          goto LABEL_40;
        }
      }
      else if ( !v150[0] )
      {
        goto LABEL_50;
      }
      operator delete[](v150[0]);
LABEL_50:
      v34 = *(_QWORD *)(v41 + 32);
      if ( v42 >= *(unsigned int *)(v29 + 16) )
      {
        v58 = sub_C00A40(v137, v26, v43, v31, v40);
        if ( !(unsigned __int8)sub_C19980(v22, v41, v58) )
          goto LABEL_122;
        v26 = (unsigned int)v42;
        sub_C0FCF0(v29, v42);
        v27 = *(_QWORD *)(v29 + 8);
        v32 = nullptr;
        v29 = v27 + 56LL * (unsigned int)v42;
      }
      else
      {
        v27 = *(_QWORD *)(v29 + 8);
        v32 = nullptr;
        v29 = v27 + 56 * v42;
      }
      goto LABEL_52;
    }
LABEL_32:
    v27 = (unsigned int)(v38 - 2);
    if ( (unsigned __int8)(v38 - 2) <= 4u )
      goto LABEL_33;
    if ( (_BYTE)v38 == 14 )
    {
      v88 = v33;
      v89 = v34;
      v138 = (unsigned __int64 *)v29;
      v10 = v142;
      v44 = v137;
      v14 = (int *)v140;
      v90 = *(_QWORD *)(v139[3].m128i_i64[0] + 8 * v88);
      if ( v90 <= 1 )
      {
        if ( *(_BYTE *)(v37 + 16) != 14 )
        {
          v135 = (_QWORD *)v89;
          v91 = sub_F63050(v37, v26, v88, v31);
          v89 = (__int64)v135;
          v37 = v91;
        }
        v94 = sub_C0F760(v89, *(_QWORD *)(v37 + 32), 0);
        if ( *(_DWORD *)v138 == 5 )
        {
          v110 = v138 + 1;
          if ( v90 )
            v110 = v138 + 3;
          v10 = sub_C1F500(&v153, (__int64)v110, v94, v92, v93);
          goto LABEL_14;
        }
        v95 = v138 + 1;
        if ( v90 )
          v95 = v138 + 4;
        if ( (v94 & 1) != 0 || (byte_8[v94 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        {
          v111 = (_QWORD *)sub_E33C10(v153.m128_u64[0], v153.m128_u64[1], 2442, 0);
          v112 = v111;
          if ( v111 )
          {
            if ( !*v111 )
            {
              v119 = v111[1];
              v120 = *(_DWORD *)(v119 + 14976);
              if ( v120 )
              {
                v127 = (unsigned int)(v120 - 1);
                v135 = v14;
                *(_DWORD *)(v119 + 14976) = v127;
                v128 = *(_QWORD *)(v119 + 8 * v127 + 14848);
                v129 = *(unsigned int *)(v128 + 536);
                *(_BYTE *)v128 = 0;
                v130 = v128;
                v131 = *(_QWORD *)(v128 + 528);
                *(_DWORD *)(v128 + 424) = 0;
                v132 = v131 + (v129 << 6);
                v133 = v131;
                while ( v133 != v132 )
                {
                  v132 -= 64;
                  v134 = *(void **)(v132 + 24);
                  if ( v134 != (void *)(v132 + 40) )
                    operator delete(v134);
                }
                v121 = v130;
                v14 = (int *)v135;
                *(_DWORD *)(v121 + 536) = 0;
              }
              else
              {
                v121 = operator new(0x3A0u);
                *(_BYTE *)v121 = 0;
                v122 = v121 + 96;
                do
                {
                  v123 = v122 + 16;
                  *(_QWORD *)(v122 + 8) = 0;
                  v122 += 32;
                  *(_QWORD *)(v122 - 32) = v123;
                  *(_BYTE *)(v122 - 16) = 0;
                }
                while ( v122 != v121 + 416 );
                *(_QWORD *)(v121 + 416) = v121 + 432;
                *(_QWORD *)(v121 + 424) = 0x800000000LL;
                *(_QWORD *)(v121 + 528) = v121 + 544;
                *(_QWORD *)(v121 + 536) = 0x600000000LL;
              }
              *v112 = v121;
            }
            *(_BYTE *)(*v112 + *(unsigned __int8 *)*v112 + 1LL) = 8;
            v113 = (_BYTE *)*v112;
            v114 = *(unsigned __int8 *)*v112;
            *v113 = v114 + 1;
            *(_QWORD *)&v113[8 * v114 + 16] = v94;
          }
          goto LABEL_14;
        }
        if ( (unsigned __int8)sub_C17F00(v153.m128_i64[0], v153.m128_i64[1], v154, v95)
          && (unsigned __int8)sub_C12170(v153.m128_i64[0], v153.m128_i64[1], v95, v155, v156 + 1) )
        {
          v10 = sub_C17F00(v153.m128_i64[0], v153.m128_i64[1], v94, v95);
          goto LABEL_14;
        }
        goto LABEL_13;
      }
      goto LABEL_40;
    }
LABEL_71:
    v145 = v36;
    v146 = 8LL * v33;
    if ( (unsigned int)*(unsigned __int8 *)(v37 + 16) - 57 <= 1 )
    {
      v59 = v139;
      v10 = v142;
      v138 = (unsigned __int64 *)v29;
      v44 = v137;
      v14 = (int *)v140;
      goto LABEL_73;
    }
    v70 = sub_C10A30(v37, v26, v27, v31);
    v36 = v145;
    if ( v70 )
      break;
    v72 = (_QWORD *)(*(_QWORD *)(v139[3].m128i_i64[0] + 8LL * v33) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v72 && (*((_BYTE *)v72 + 28) & 0x7Fu) - 49 <= 2 )
    {
      if ( (*((_BYTE *)v72 + 68) & 2) != 0 )
      {
        v26 = v22;
        v146 = *(_QWORD *)(v139[3].m128i_i64[0] + 8LL * v33) & 0xFFFFFFFFFFFFFFF8LL;
        v73 = sub_C118B0(v136->m128i_i64, v22, 2u);
        v36 = v145;
        v72 = (_QWORD *)v146;
        if ( !v73 )
        {
          v124 = v146;
          v14 = (int *)v140;
          v125 = (unsigned __int8 **)sub_E33C10(v22, v137, 2368, 1);
          v126 = v125;
          if ( v125 )
          {
            sub_C11320(v125, 2);
            sub_AE9DF0(v126, v124, 0xAu);
          }
          sub_E33DB0(v22, *(unsigned int *)(v124 + 24), 103);
          goto LABEL_13;
        }
      }
      v74 = *v36;
      v145 = v72;
      v75 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF0LL), v26, v71, v72, v36);
      v79 = v145;
      if ( *(_BYTE *)(v75 + 73) >> 5 == 2 )
      {
        v80 = *(_QWORD **)(v29 + 8);
        if ( !v80 )
          goto LABEL_148;
        v81 = *(_QWORD *)(v29 + 8);
        if ( *((char *)v80 + 29) < 0 )
        {
          v82 = *(_QWORD *)(v29 + 8);
          v146 = (unsigned __int64)v145;
          v145 = v80;
          v83 = sub_B72720(v82);
          v79 = (_QWORD *)v146;
          v80 = v145;
          v81 = v83;
        }
        v84 = (__int64)v79;
        if ( *((char *)v79 + 29) < 0 )
        {
          v146 = (unsigned __int64)v80;
          v145 = v79;
          v84 = sub_B72720((__int64)v79);
          v80 = (_QWORD *)v146;
          v79 = v145;
        }
        if ( v84 != v81 )
        {
LABEL_148:
          v115 = (__int64)v79;
          v116 = (__int64)v80;
          v10 = v142;
          v14 = (int *)v140;
          v117 = (unsigned __int8 **)sub_E33C10(v22, v137, 2367, 0);
          v118 = v117;
          if ( v117 )
          {
            sub_C11320(v117, 2);
            sub_AE9DF0(v118, v115, 0xAu);
            sub_C11320(v118, v116 == 0);
            sub_AE9DF0(v118, v116, 0xAu);
            goto LABEL_14;
          }
          goto LABEL_13;
        }
        v29 = *(_QWORD *)(v29 + 16);
      }
      else
      {
        v107 = sub_C1D4D0((__int64)v145, v26, v76, (__int64)v145, v77, v78);
        v79 = v145;
        v29 = *(_QWORD *)(v29 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v29 + 16) + v107);
      }
      v85 = *((_BYTE *)v79 + 68);
      v26 = v79[6];
      v145 = v79;
      v86 = sub_C0F760(v34, v26, (v85 & 2) != 0);
      v31 = (unsigned __int64)v145;
      v34 = v86;
      v87 = v145[6];
      if ( (v87 & 4) != 0 )
      {
        v143 = v145;
        v32 = v145;
      }
      else
      {
        v32 = v145;
        if ( (byte_8[v87 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
          v143 = v145;
      }
    }
    else
    {
      v98 = *v145;
      v145 = nullptr;
      v99 = sub_F63270(v98);
      v100 = *(_QWORD *)(v139[3].m128i_i64[0] + 8LL * v33) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v100
        && (*(_BYTE *)((*(_QWORD *)(v139[3].m128i_i64[0] + 8LL * v33) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 >= 3 )
      {
        v100 = 0;
      }
      v101 = sub_C30BC0(v99, v100);
      v102 = *(_QWORD *)(v29 + 8);
      v29 = v102 + 56LL * v101;
      v26 = sub_A7A9D0(*(_QWORD *)(v22 + 16), v100, v103, v102, v104, v105);
      v106 = sub_C0F760(v34, v26, 0);
      v32 = v145;
      v34 = v106;
    }
LABEL_52:
    ++v33;
    if ( !*(_DWORD *)v29 )
    {
      v3 = v137;
      v14 = (int *)v140;
      v138 = (unsigned __int64 *)v29;
      goto LABEL_54;
    }
  }
  v59 = v139;
  v138 = (unsigned __int64 *)v29;
  v37 = v70;
  v10 = v142;
  v44 = v137;
  v14 = (int *)v140;
LABEL_73:
  v60 = v59[3].m128i_i64[0];
  v61 = *(unsigned int *)(v37 + 20);
  v62 = *(_QWORD *)(v60 + v146);
  if ( v62 == v61 )
  {
LABEL_40:
    if ( (*(_BYTE *)(sub_E32240(v22) + 1) & 0x10) != 0 )
    {
      v45 = (unsigned __int8 **)sub_E33C10(v22, v44, 2370, 0);
      if ( v45 )
        sub_C11320(v45, 2);
      goto LABEL_14;
    }
    goto LABEL_123;
  }
  if ( v62 <= v61 )
  {
    v10 = sub_C252A0(&v153, (_DWORD *)(v138[1] + 56LL * (unsigned int)v62), *(_QWORD *)(v37 + 32), v146, (__int64)v36);
  }
  else
  {
    v63 = (unsigned __int8 **)sub_E33C90(v22, v44, 2381, 0);
    v64 = v63;
    if ( !v63 )
      goto LABEL_13;
    sub_AE9DF0(v63, v62, 3u);
    sub_C11320(v64, 0);
    sub_AE9DF0(v64, v61, 3u);
  }
LABEL_14:
  if ( (unsigned int)v157 > 1 )
    sub_A4F8E0(v14);
  return v10;
}
