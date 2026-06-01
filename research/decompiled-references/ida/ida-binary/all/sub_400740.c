__int64 __fastcall sub_400740(__int64 a1, __int64 a2, __m128i si128)
{
  __int64 *v3; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r13
  char v15; // si
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // r13
  char v23; // si
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // r13
  char v27; // si
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // r13
  char v31; // si
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // r13
  char v35; // si
  __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // r13
  char v39; // si
  __int64 v40; // r15
  __int64 v41; // r12
  __int64 v42; // r13
  char v43; // si
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 v46; // r13
  int v47; // eax
  __int64 v48; // r12
  __int64 v49; // r12
  __int64 v50; // r12
  __int64 v51; // r15
  __int64 v52; // r12
  __int64 v53; // r13
  char v54; // si
  __int64 v55; // r15
  __int64 v56; // r12
  __int64 v57; // r13
  int v58; // eax
  __int64 v59; // r14
  __int64 v60; // r12
  __int64 v61; // r15
  __int64 v62; // r13
  __int64 v63; // r15
  unsigned __int8 v64; // r12
  __int64 v65; // rdi
  unsigned int v66; // esi
  __int64 v67; // r14
  __int64 v68; // r15
  __int64 v69; // r13
  __int64 v70; // r12
  char *v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r12
  const char *v75; // rdi
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // eax
  QT::QAbstractButton *v79; // r13
  __int64 v80; // r12
  QT::QAbstractButton *v81; // rdx
  __int64 v82; // r14
  __int64 v83; // r15
  int v84; // eax
  QT::QAbstractButton *v85; // r12
  int v86; // eax
  __int64 v87; // r14
  QT::QAbstractButton *v88; // r15
  int v89; // eax
  QT::QAbstractButton *v90; // r15
  __int64 v91; // r13
  QT::QAbstractButton *v92; // rdx
  QT::QAbstractButton *v93; // r14
  int v94; // eax
  QT::QAbstractButton *v95; // r12
  __m128i *v96; // rsi
  __int64 v97; // r15
  size_t v98; // r12
  const char *v99; // r14
  char *v100; // r14
  size_t v101; // rax
  size_t v102; // r15
  size_t v103; // r12
  __int64 v104; // rax
  unsigned __int64 v105; // r12
  __int64 v106; // rdx
  __int64 v107; // rsi
  void *v108; // rdi
  __int64 v109; // r13
  _BYTE *v110; // r12
  _BYTE *v111; // r14
  __int64 v112; // r12
  __int64 v113; // rax
  __int64 v114; // rdi
  __int64 v115; // r14
  QT::QAbstractButton *v116; // r13
  int v117; // eax
  QT::QAbstractButton *v118; // r13
  __int64 v119; // rbx
  QT::QAbstractButton *v120; // r15
  int v121; // r14d
  QT::QAbstractButton *v122; // r15
  __int64 v123; // rdx
  QT::QAbstractButton *i; // r12
  __int64 v126; // rax
  QT::QHeaderView *v127; // rax
  __int64 v128; // r13
  __int64 v129; // r14
  __int64 v130; // r15
  size_t v131; // rax
  const char *v132; // r13
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // r15
  __int64 v136; // r13
  __int64 v137; // r14
  char v138; // al
  __int64 v139; // r13
  __int64 v140; // r14
  __int64 v141; // r15
  int v142; // eax
  __int64 v143; // r15
  __int64 v144; // r13
  __int64 v145; // r14
  int v146; // eax
  QT::QAbstractButton *v147; // rcx
  __int64 v148; // r12
  __int64 v149; // rax
  __int64 v150; // rax
  int v151; // r15d
  int v152; // eax
  QT::QAbstractButton *v153; // rcx
  __int64 v154; // r12
  _DWORD *v155; // rax
  __int64 v156; // rdi
  __int64 v157; // rax
  int v158; // [rsp+0h] [rbp-D8h]
  QT::QAbstractButton *v159; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v160; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v161; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v162; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v163; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v164; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v165; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v166; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v167; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v168; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v169; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v170; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v171; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v172; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v173; // [rsp+8h] [rbp-D0h]
  QT::QAbstractButton *v174; // [rsp+8h] [rbp-D0h]
  _QWORD *v175; // [rsp+10h] [rbp-C8h]
  QT::QHeaderView *v176; // [rsp+18h] [rbp-C0h]
  QT::QHeaderView *v177; // [rsp+18h] [rbp-C0h]
  unsigned int v178; // [rsp+2Ch] [rbp-ACh] BYREF
  char *s; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v180; // [rsp+38h] [rbp-A0h]
  __m128i ptr[2]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v182[24]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v183; // [rsp+88h] [rbp-50h]
  unsigned __int64 v184; // [rsp+98h] [rbp-40h]

  v3 = *(__int64 **)(a2 + 16);
  v184 = __readfsqword(0x28u);
  v5 = v3[1];
  if ( v5 )
  {
    v6 = *v3;
    v7 = 0;
    v8 = *v3;
    while ( !*(_QWORD *)(v8 + 8) || strcmp(*(const char **)v8, "target_ea") )
    {
      ++v7;
      v8 += 40;
      if ( v5 == v7 )
        goto LABEL_11;
    }
    if ( *(_DWORD *)(v8 + 24) != 1 || (v13 = *(_QWORD *)(v8 + 32), v13 == -1) || *(_QWORD *)(a1 + 280) == v13 )
    {
LABEL_11:
      v159 = *(QT::QAbstractButton **)(a1 + 184);
      goto LABEL_12;
    }
    sub_400520(a1, v13, v9, v10, v11, v12);
    v5 = v3[1];
    v159 = *(QT::QAbstractButton **)(a1 + 184);
    if ( !v5 )
      goto LABEL_19;
    v6 = *v3;
LABEL_12:
    v14 = 0;
    while ( !*(_QWORD *)(v6 + 8) || strcmp(*(const char **)v6, "sync_enabled") )
    {
      ++v14;
      v6 += 40;
      if ( v14 == v5 )
        goto LABEL_19;
    }
    if ( *(_DWORD *)(v6 + 24) == 5 )
    {
      v15 = *(_BYTE *)(v6 + 32);
      goto LABEL_20;
    }
  }
  else
  {
    v159 = *(QT::QAbstractButton **)(a1 + 184);
  }
LABEL_19:
  v15 = 0;
LABEL_20:
  QT::QAbstractButton::setChecked(v159, v15);
  v16 = v3[1];
  v160 = *(QT::QAbstractButton **)(a1 + 192);
  if ( v16 )
  {
    v17 = *v3;
    v18 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v17 + 8) )
      {
        v19 = strcmp(*(const char **)v17, "include_local");
        if ( !v19 )
          break;
      }
      ++v18;
      v17 += 40;
      if ( v16 == v18 )
        goto LABEL_27;
    }
    if ( *(_DWORD *)(v17 + 24) == 5 )
      LOBYTE(v19) = *(_BYTE *)(v17 + 32);
  }
  else
  {
LABEL_27:
    LOBYTE(v19) = 0;
  }
  QT::QAbstractButton::setChecked(v160, v19);
  v20 = v3[1];
  v161 = *(QT::QAbstractButton **)(a1 + 200);
  if ( !v20 )
    goto LABEL_35;
  v21 = *v3;
  v22 = 0;
  while ( !*(_QWORD *)(v21 + 8) || strcmp(*(const char **)v21, "simplified_view") )
  {
    ++v22;
    v21 += 40;
    if ( v20 == v22 )
      goto LABEL_35;
  }
  if ( *(_DWORD *)(v21 + 24) == 5 )
    v23 = *(_BYTE *)(v21 + 32);
  else
LABEL_35:
    v23 = 1;
  QT::QAbstractButton::setChecked(v161, v23);
  v24 = v3[1];
  v162 = *(QT::QAbstractButton **)(a1 + 208);
  if ( !v24 )
    goto LABEL_43;
  v25 = *v3;
  v26 = 0;
  while ( !*(_QWORD *)(v25 + 8) || strcmp(*(const char **)v25, "show_address") )
  {
    ++v26;
    v25 += 40;
    if ( v24 == v26 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v25 + 24) == 5 )
    v27 = *(_BYTE *)(v25 + 32);
  else
LABEL_43:
    v27 = 1;
  QT::QAbstractButton::setChecked(v162, v27);
  v28 = v3[1];
  v163 = *(QT::QAbstractButton **)(a1 + 216);
  if ( !v28 )
    goto LABEL_51;
  v29 = *v3;
  v30 = 0;
  while ( !*(_QWORD *)(v29 + 8) || strcmp(*(const char **)v29, "show_segment") )
  {
    ++v30;
    v29 += 40;
    if ( v28 == v30 )
      goto LABEL_51;
  }
  if ( *(_DWORD *)(v29 + 24) == 5 )
    v31 = *(_BYTE *)(v29 + 32);
  else
LABEL_51:
    v31 = 1;
  QT::QAbstractButton::setChecked(v163, v31);
  v32 = v3[1];
  v164 = *(QT::QAbstractButton **)(a1 + 224);
  if ( !v32 )
    goto LABEL_59;
  v33 = *v3;
  v34 = 0;
  while ( !*(_QWORD *)(v33 + 8) || strcmp(*(const char **)v33, "show_offset") )
  {
    ++v34;
    v33 += 40;
    if ( v32 == v34 )
      goto LABEL_59;
  }
  if ( *(_DWORD *)(v33 + 24) == 5 )
    v35 = *(_BYTE *)(v33 + 32);
  else
LABEL_59:
    v35 = 1;
  QT::QAbstractButton::setChecked(v164, v35);
  v36 = v3[1];
  v165 = *(QT::QAbstractButton **)(a1 + 232);
  if ( !v36 )
    goto LABEL_67;
  v37 = *v3;
  v38 = 0;
  while ( !*(_QWORD *)(v37 + 8) || strcmp(*(const char **)v37, "show_data_items") )
  {
    ++v38;
    v37 += 40;
    if ( v36 == v38 )
      goto LABEL_67;
  }
  if ( *(_DWORD *)(v37 + 24) == 5 )
    v39 = *(_BYTE *)(v37 + 32);
  else
LABEL_67:
    v39 = 1;
  QT::QAbstractButton::setChecked(v165, v39);
  v40 = v3[1];
  v166 = *(QT::QAbstractButton **)(a1 + 240);
  if ( !v40 )
    goto LABEL_75;
  v41 = *v3;
  v42 = 0;
  while ( !*(_QWORD *)(v41 + 8) || strcmp(*(const char **)v41, "show_types") )
  {
    ++v42;
    v41 += 40;
    if ( v40 == v42 )
      goto LABEL_75;
  }
  if ( *(_DWORD *)(v41 + 24) == 5 )
    v43 = *(_BYTE *)(v41 + 32);
  else
LABEL_75:
    v43 = 1;
  QT::QAbstractButton::setChecked(v166, v43);
  v44 = v3[1];
  v167 = *(QT::QAbstractButton **)(a1 + 248);
  if ( v44 )
  {
    v45 = *v3;
    v46 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v45 + 8) )
      {
        v47 = strcmp(*(const char **)v45, "show_duplicates");
        if ( !v47 )
          break;
      }
      ++v46;
      v45 += 40;
      if ( v44 == v46 )
        goto LABEL_83;
    }
    if ( *(_DWORD *)(v45 + 24) == 5 )
      LOBYTE(v47) = *(_BYTE *)(v45 + 32);
  }
  else
  {
LABEL_83:
    LOBYTE(v47) = 0;
  }
  QT::QAbstractButton::setChecked(v167, v47);
  v48 = *(_QWORD *)(a1 + 112);
  *(_BYTE *)(v48 + 72) = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 192));
  v49 = *(_QWORD *)(a1 + 112);
  *(_BYTE *)(v49 + 73) = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 232));
  v50 = *(_QWORD *)(a1 + 112);
  *(_BYTE *)(v50 + 74) = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 240));
  v51 = v3[1];
  v168 = *(QT::QAbstractButton **)(a1 + 264);
  if ( !v51 )
    goto LABEL_91;
  v52 = *v3;
  v53 = 0;
  while ( !*(_QWORD *)(v52 + 8) || strcmp(*(const char **)v52, "shift_focus") )
  {
    ++v53;
    v52 += 40;
    if ( v51 == v53 )
      goto LABEL_91;
  }
  if ( *(_DWORD *)(v52 + 24) == 5 )
    v54 = *(_BYTE *)(v52 + 32);
  else
LABEL_91:
    v54 = 1;
  QT::QAbstractButton::setChecked(v168, v54);
  v55 = v3[1];
  v169 = *(QT::QAbstractButton **)(a1 + 256);
  if ( v55 )
  {
    v56 = *v3;
    v57 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v56 + 8) )
      {
        v58 = strcmp(*(const char **)v56, "show_argument_values");
        if ( !v58 )
          break;
      }
      ++v57;
      v56 += 40;
      if ( v55 == v57 )
        goto LABEL_99;
    }
    if ( *(_DWORD *)(v56 + 24) == 5 )
      LOBYTE(v58) = *(_BYTE *)(v56 + 32);
  }
  else
  {
LABEL_99:
    LOBYTE(v58) = 0;
  }
  QT::QAbstractButton::setChecked(v169, v58);
  v59 = v3[1];
  if ( v59 )
  {
    v60 = *v3;
    v61 = 0;
    v62 = *v3;
    while ( !*(_QWORD *)(v62 + 8) || strcmp(*(const char **)v62, "filters_section_expanded") )
    {
      ++v61;
      v62 += 40;
      if ( v59 == v61 )
        goto LABEL_107;
    }
    if ( *(_DWORD *)(v62 + 24) == 5 )
    {
      LOBYTE(v169) = *(_BYTE *)(v62 + 32);
      goto LABEL_108;
    }
LABEL_107:
    LOBYTE(v169) = 0;
LABEL_108:
    v63 = 0;
    while ( !*(_QWORD *)(v60 + 8) || strcmp(*(const char **)v60, "options_section_expanded") )
    {
      ++v63;
      v60 += 40;
      if ( v59 == v63 )
        goto LABEL_274;
    }
    if ( *(_DWORD *)(v60 + 24) == 5 )
    {
      v64 = *(_BYTE *)(v60 + 32) ^ 1;
      sub_1DDCB0(*(_QWORD *)(a1 + 136), (unsigned __int8)v169 ^ 1);
      v65 = *(_QWORD *)(a1 + 128);
      v66 = v64;
      goto LABEL_114;
    }
LABEL_274:
    v156 = *(_QWORD *)(a1 + 136);
    if ( (_BYTE)v169 )
    {
      sub_1DDCB0(v156, 0);
      v65 = *(_QWORD *)(a1 + 128);
      v66 = 1;
      goto LABEL_114;
    }
  }
  else
  {
    v156 = *(_QWORD *)(a1 + 136);
  }
  sub_1DDCB0(v156, 1u);
  v65 = *(_QWORD *)(a1 + 128);
  v66 = 1;
LABEL_114:
  sub_1DDCB0(v65, v66);
  v67 = v3[1];
  if ( !v67 )
    goto LABEL_125;
  v68 = *v3;
  v69 = 0;
  v70 = *v3;
  while ( 1 )
  {
    if ( *(_QWORD *)(v70 + 8) )
    {
      v71 = "filters";
      if ( !strcmp(*(const char **)v70, "filters") )
        break;
    }
    ++v69;
    v70 += 40;
    if ( v67 == v69 )
      goto LABEL_125;
  }
  v74 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v68 + 8) )
    {
      v75 = *(const char **)v68;
      v71 = "filters";
      if ( !strcmp(*(const char **)v68, "filters") )
        break;
    }
    ++v74;
    v68 += 40;
    if ( v67 == v74 )
    {
LABEL_123:
      if ( under_debugger )
        goto LABEL_298;
      goto LABEL_124;
    }
  }
  if ( *(_DWORD *)(v68 + 24) != 4 )
    goto LABEL_297;
  v175 = *(_QWORD **)(v68 + 32);
  v172 = (QT::QAbstractButton *)v175[1];
  if ( !v172 )
    goto LABEL_125;
  for ( i = nullptr; i != v172; i = (QT::QAbstractButton *)((char *)i + 1) )
  {
    v126 = *v175 + 16LL * (_QWORD)i;
    if ( *(_DWORD *)v126 == 3 )
    {
      v127 = *(QT::QHeaderView **)(v126 + 8);
      v183 = 1;
      memset(v182, 0, sizeof(v182));
      v128 = *((_QWORD *)v127 + 1);
      v177 = v127;
      if ( v128 )
      {
        v129 = *(_QWORD *)v127;
        v130 = 0;
        while ( !*(_QWORD *)(v129 + 8) || strcmp(*(const char **)v129, "pattern") )
        {
          ++v130;
          v129 += 40;
          if ( v128 == v130 )
            goto LABEL_254;
        }
        v131 = 0;
        v132 = (const char *)&unk_5C2F25;
        if ( *(_DWORD *)(v129 + 24) == 2 )
        {
          v133 = *(_QWORD *)(v129 + 32);
          v132 = &s1;
          if ( *(_QWORD *)(v133 + 8) )
            v132 = *(const char **)v133;
          v131 = 0;
          if ( v132 && *v132 )
            v131 = strlen(v132 + 1) + 1;
        }
      }
      else
      {
LABEL_254:
        v132 = (const char *)&unk_5C2F25;
        v131 = 0;
      }
      QT::QString::fromUtf8(ptr, v131, v132);
      si128 = _mm_load_si128((const __m128i *)v182);
      v134 = *(_QWORD *)&v182[16];
      *(__m128i *)v182 = _mm_load_si128(ptr);
      *(_QWORD *)&v182[16] = ptr[1].m128i_i64[0];
      ptr[1].m128i_i64[0] = v134;
      ptr[0] = si128;
      if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      v135 = *((_QWORD *)v177 + 1);
      if ( !v135 )
        goto LABEL_248;
      v136 = *(_QWORD *)v177;
      v137 = 0;
      while ( !*(_QWORD *)(v136 + 8) || strcmp(*(const char **)v136, "enabled") )
      {
        ++v137;
        v136 += 40;
        if ( v135 == v137 )
          goto LABEL_248;
      }
      if ( *(_DWORD *)(v136 + 24) == 5 )
        v138 = *(_BYTE *)(v136 + 32);
      else
LABEL_248:
        v138 = 1;
      LOBYTE(v183) = v138;
      v139 = *((_QWORD *)v177 + 1);
      if ( v139 )
      {
        v140 = *(_QWORD *)v177;
        v141 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v140 + 8) )
          {
            v142 = strcmp(*(const char **)v140, "use_regex");
            if ( !v142 )
              break;
          }
          ++v141;
          v140 += 40;
          if ( v139 == v141 )
            goto LABEL_253;
        }
        if ( *(_DWORD *)(v140 + 24) == 5 )
          LOBYTE(v142) = *(_BYTE *)(v140 + 32);
      }
      else
      {
LABEL_253:
        LOBYTE(v142) = 0;
      }
      BYTE1(v183) = v142;
      v143 = *((_QWORD *)v177 + 1);
      if ( v143 )
      {
        v144 = *(_QWORD *)v177;
        v145 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v144 + 8) )
          {
            v146 = strcmp(*(const char **)v144, "case_sensitive");
            if ( !v146 )
              break;
          }
          ++v145;
          v144 += 40;
          if ( v143 == v145 )
            goto LABEL_252;
        }
        if ( *(_DWORD *)(v144 + 24) == 5 )
          v146 = *(unsigned __int8 *)(v144 + 32);
      }
      else
      {
LABEL_252:
        v146 = 0;
      }
      HIDWORD(v183) = v146;
      sub_3FD080(*(_QWORD *)(a1 + 136), (QT::QString *)v182, 0);
      if ( *(_QWORD *)v182 && !_InterlockedSub(*(volatile signed __int32 **)v182, 1u) )
        free(*(void **)v182);
    }
  }
LABEL_125:
  v176 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 104));
  v78 = QT::QHeaderView::count(v176);
  v79 = (QT::QAbstractButton *)v3[1];
  LODWORD(v175) = v78;
  if ( !v79 )
    return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 104), 0xFFFFFFFFLL, 0);
  v80 = *v3;
  v81 = nullptr;
  v82 = *v3;
  v83 = *v3;
  while ( 1 )
  {
    if ( *(_QWORD *)(v83 + 8) )
    {
      v170 = v81;
      v84 = strcmp(*(const char **)v83, "user_customized_widths");
      v81 = v170;
      if ( !v84 )
        break;
    }
    v81 = (QT::QAbstractButton *)((char *)v81 + 1);
    v83 += 40;
    if ( v79 == v81 )
      goto LABEL_137;
  }
  v85 = nullptr;
  while ( 1 )
  {
    if ( *(_QWORD *)(v82 + 8) )
    {
      v86 = strcmp(*(const char **)v82, "user_customized_widths");
      if ( !v86 )
        break;
    }
    v85 = (QT::QAbstractButton *)((char *)v85 + 1);
    v82 += 40;
    if ( v79 == v85 )
    {
      LOBYTE(v86) = 0;
      goto LABEL_135;
    }
  }
  if ( *(_DWORD *)(v82 + 24) == 5 )
    LOBYTE(v86) = *(_BYTE *)(v82 + 32);
LABEL_135:
  *(_BYTE *)(a1 + 464) = v86;
  v79 = (QT::QAbstractButton *)v3[1];
  if ( !v79 )
    return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 104), 0xFFFFFFFFLL, 0);
  v80 = *v3;
LABEL_137:
  v87 = v80;
  v72 = v80;
  v88 = nullptr;
  while ( 1 )
  {
    if ( *(_QWORD *)(v72 + 8) )
    {
      v71 = "column_widths";
      v169 = (QT::QAbstractButton *)v72;
      v89 = strcmp(*(const char **)v72, "column_widths");
      v72 = (__int64)v169;
      if ( !v89 )
        break;
    }
    v88 = (QT::QAbstractButton *)((char *)v88 + 1);
    v72 += 40;
    if ( v88 == v79 )
      goto LABEL_149;
  }
  v90 = nullptr;
  while ( 1 )
  {
    if ( *(_QWORD *)(v87 + 8) )
    {
      v75 = *(const char **)v87;
      v71 = "column_widths";
      if ( !strcmp(*(const char **)v87, "column_widths") )
        break;
    }
    v90 = (QT::QAbstractButton *)((char *)v90 + 1);
    v87 += 40;
    if ( v90 == v79 )
    {
      if ( under_debugger )
LABEL_298:
        BUG();
LABEL_124:
      interr(1289, v71, v72, v73, *(double *)si128.m128i_i64);
      goto LABEL_125;
    }
  }
  if ( *(_DWORD *)(v87 + 24) != 4 )
LABEL_297:
    sub_3EE3F0(
      *(double *)si128.m128i_i64,
      (__int64)v75,
      (__int64)v71,
      v72,
      v73,
      v76,
      v77,
      v158,
      (__int64)v169,
      (__int64)v175);
  v153 = *(QT::QAbstractButton **)(v87 + 32);
  v88 = v79;
  if ( (int)v175 == *((_QWORD *)v153 + 1) && (int)v175 > 0 )
  {
    v154 = 0;
    do
    {
      v155 = (_DWORD *)(*(_QWORD *)v153 + 16 * v154);
      if ( *v155 == 1 )
      {
        v174 = v153;
        QT::QHeaderView::resizeSection(v176, v154, v155[2]);
        v153 = v174;
      }
      ++v154;
    }
    while ( (int)v175 != v154 );
    v88 = (QT::QAbstractButton *)v3[1];
    if ( !v88 )
      return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 104), 0xFFFFFFFFLL, 0);
    v80 = *v3;
  }
LABEL_149:
  v91 = v80;
  v92 = (QT::QAbstractButton *)v80;
  v93 = nullptr;
  while ( 1 )
  {
    if ( *((_QWORD *)v92 + 1) )
    {
      v171 = v92;
      v94 = strcmp(*(const char **)v92, "column_visibility");
      v92 = v171;
      if ( !v94 )
        break;
    }
    v93 = (QT::QAbstractButton *)((char *)v93 + 1);
    v92 = (QT::QAbstractButton *)((char *)v92 + 40);
    if ( v93 == v88 )
      goto LABEL_181;
  }
  v95 = nullptr;
  while ( 1 )
  {
    if ( *(_QWORD *)(v91 + 8) )
    {
      v96 = (__m128i *)"column_visibility";
      if ( !strcmp(*(const char **)v91, "column_visibility") )
        break;
    }
    v95 = (QT::QAbstractButton *)((char *)v95 + 1);
    v91 += 40;
    if ( v95 == v88 )
      goto LABEL_157;
  }
  if ( *(_DWORD *)(v91 + 24) != 2 )
  {
LABEL_157:
    s = nullptr;
    v97 = 1;
    v98 = 0;
    v180 = 0;
    v99 = (const char *)&unk_5C2F25;
    goto LABEL_158;
  }
  v157 = *(_QWORD *)(v91 + 32);
  v99 = &s1;
  if ( *(_QWORD *)(v157 + 8) )
    v99 = *(const char **)v157;
  s = nullptr;
  v180 = 0;
  if ( !v99 )
  {
    memset(ptr, 0, 24);
    goto LABEL_281;
  }
  v98 = strlen(v99);
  v97 = v98 + 1;
LABEL_158:
  v96 = (__m128i *)v99;
  s = (char *)qvector_reserve(&s, 0, v97, 1);
  *(_QWORD *)&v180 = v97;
  memmove(s, v99, v98);
  s[v98] = 0;
  memset(ptr, 0, 24);
  v100 = s;
  if ( (_QWORD)v180 )
    goto LABEL_159;
LABEL_281:
  v100 = (char *)&s1;
LABEL_159:
  memset(v182, 0, sizeof(v182));
  si128.m128i_i64[0] = 0;
  if ( !v100 )
  {
    v104 = ptr[0].m128i_i64[1];
    goto LABEL_285;
  }
  v101 = strlen(v100);
  v102 = v101 + 1;
  v103 = v101;
  v96 = (__m128i *)v100;
  *(_QWORD *)v182 = qvector_reserve(v182, 0, v101 + 1, 1);
  *(_QWORD *)&v182[8] = v102;
  memmove(*(void **)v182, v100, v103);
  *(_BYTE *)(*(_QWORD *)v182 + v103) = 0;
  v104 = ptr[0].m128i_i64[1];
  v105 = *(_QWORD *)&v182[8];
  v106 = ptr[0].m128i_i64[1];
  if ( !*(_QWORD *)&v182[8] || (v105 = (unsigned __int64)(*(_QWORD *)&v182[8] - 1LL) >> 1, ptr[0].m128i_i64[1] >= v105) )
  {
    if ( ptr[0].m128i_i64[1] != v105 )
    {
      ptr[0].m128i_i64[1] = v105;
      goto LABEL_165;
    }
LABEL_285:
    v105 = v104;
    goto LABEL_165;
  }
  v107 = ptr[0].m128i_i64[0];
  if ( ptr[1].m128i_i64[0] < v105 )
  {
    ptr[0].m128i_i64[0] = qvector_reserve(ptr, ptr[0].m128i_i64[0], v105, 1);
    v106 = ptr[0].m128i_i64[1];
    v107 = ptr[0].m128i_i64[0];
  }
  v108 = (void *)(v107 + v106);
  v96 = nullptr;
  memset(v108, 0, v105 - v106);
  ptr[0].m128i_i64[1] = v105;
LABEL_165:
  v109 = *(_QWORD *)v182;
  v110 = (_BYTE *)(ptr[0].m128i_i64[0] + v105);
  v111 = (_BYTE *)ptr[0].m128i_i64[0];
  if ( (_BYTE *)ptr[0].m128i_i64[0] != v110 )
  {
    do
    {
      v96 = (__m128i *)"%02X";
      v178 = 0;
      if ( (unsigned int)qsscanf(v109, "%02X", &v178) != 1 )
        break;
      if ( v178 > 0xFF )
        break;
      *v111++ = v178;
      v109 += 2;
    }
    while ( v110 != v111 );
    v112 = *(_QWORD *)v182;
    v113 = *(_QWORD *)&v182[8];
    v114 = *(_QWORD *)v182;
    if ( !*(_QWORD *)&v182[8] )
    {
LABEL_172:
      if ( !v114 )
        goto LABEL_174;
      goto LABEL_173;
    }
LABEL_171:
    v114 = v112;
    v112 = v112 + v113 - 1;
    goto LABEL_172;
  }
  v113 = *(_QWORD *)&v182[8];
  if ( *(_QWORD *)&v182[8] )
  {
    v112 = *(_QWORD *)v182;
    goto LABEL_171;
  }
  if ( *(_QWORD *)v182 )
  {
    v112 = *(_QWORD *)v182;
    v114 = *(_QWORD *)v182;
LABEL_173:
    *(_QWORD *)&v182[8] = 0;
    *(double *)si128.m128i_i64 = qfree(v114, v96->m128i_i8);
LABEL_174:
    if ( v112 != v109 )
      goto LABEL_175;
  }
  v96 = ptr;
  if ( (_DWORD)v175 == (unsigned int)sub_51A2D0(v176) )
  {
    *(_BYTE *)(a1 + 393) = QT::QHeaderView::isSectionHidden(v176, 1) ^ 1;
    v96 = (__m128i *)(&dword_0 + 3);
    *(_BYTE *)(a1 + 394) = QT::QHeaderView::isSectionHidden(v176, 2) ^ 1;
    *(_BYTE *)(a1 + 395) = QT::QHeaderView::isSectionHidden(v176, 3) ^ 1;
  }
LABEL_175:
  if ( ptr[0].m128i_i64[0] )
  {
    ptr[0].m128i_i64[1] = 0;
    *(double *)si128.m128i_i64 = qfree(ptr[0].m128i_i64[0], v96->m128i_i8);
  }
  if ( s )
  {
    *(_QWORD *)&v180 = 0;
    *(double *)si128.m128i_i64 = qfree(s, v96->m128i_i8);
  }
  v88 = (QT::QAbstractButton *)v3[1];
  if ( !v88 )
    return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 104), 0xFFFFFFFFLL, 0);
  v80 = *v3;
LABEL_181:
  v115 = v80;
  v73 = v80;
  v116 = nullptr;
  while ( 1 )
  {
    if ( *(_QWORD *)(v73 + 8) )
    {
      v71 = "column_order";
      v169 = (QT::QAbstractButton *)v73;
      v117 = strcmp(*(const char **)v73, "column_order");
      v73 = (__int64)v169;
      if ( !v117 )
        break;
    }
    v116 = (QT::QAbstractButton *)((char *)v116 + 1);
    v73 += 40;
    if ( v88 == v116 )
      goto LABEL_192;
  }
  v118 = nullptr;
  while ( 1 )
  {
    if ( *(_QWORD *)(v115 + 8) )
    {
      v75 = *(const char **)v115;
      v71 = "column_order";
      if ( !strcmp(*(const char **)v115, "column_order") )
        break;
    }
    v118 = (QT::QAbstractButton *)((char *)v118 + 1);
    v115 += 40;
    if ( v88 == v118 )
      goto LABEL_123;
  }
  if ( *(_DWORD *)(v115 + 24) != 4 )
    goto LABEL_297;
  v147 = *(QT::QAbstractButton **)(v115 + 32);
  v116 = v88;
  if ( (int)v175 == *((_QWORD *)v147 + 1) && (int)v175 > 0 )
  {
    v148 = 0;
    do
    {
      v149 = *(_QWORD *)v147 + 16 * v148;
      if ( *(_DWORD *)v149 == 1 )
      {
        v150 = *(_QWORD *)(v149 + 8);
        v151 = v150;
        if ( (int)v150 >= 0 && (int)v175 > (int)v150 )
        {
          v173 = v147;
          v152 = QT::QHeaderView::visualIndex(v176, v148);
          QT::QHeaderView::moveSection(v176, v152, v151);
          v147 = v173;
        }
      }
      ++v148;
    }
    while ( (int)v175 != v148 );
    v116 = (QT::QAbstractButton *)v3[1];
    if ( !v116 )
      return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 104), 0xFFFFFFFFLL, 0);
    v80 = *v3;
  }
LABEL_192:
  v119 = v80;
  v120 = nullptr;
  while ( !*(_QWORD *)(v119 + 8) || strcmp(*(const char **)v119, "sort_column") )
  {
    v120 = (QT::QAbstractButton *)((char *)v120 + 1);
    v119 += 40;
    if ( v120 == v116 )
      goto LABEL_251;
  }
  if ( *(_DWORD *)(v119 + 24) == 1 )
  {
    v121 = *(_DWORD *)(v119 + 32);
    goto LABEL_198;
  }
LABEL_251:
  v121 = -1;
LABEL_198:
  v122 = nullptr;
  while ( !*(_QWORD *)(v80 + 8) || strcmp(*(const char **)v80, "sort_descending") )
  {
    v122 = (QT::QAbstractButton *)((char *)v122 + 1);
    v80 += 40;
    if ( v122 == v116 )
      goto LABEL_271;
  }
  if ( *(_DWORD *)(v80 + 24) == 5 )
  {
    if ( v121 >= 0 && (int)v175 > v121 )
    {
      v123 = *(unsigned __int8 *)(v80 + 32);
      return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 104), (unsigned int)v121, v123);
    }
  }
  else
  {
LABEL_271:
    if ( (int)v175 > v121 )
    {
      v123 = 0;
      if ( v121 >= 0 )
        return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 104), (unsigned int)v121, v123);
    }
  }
  return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 104), 0xFFFFFFFFLL, 0);
}
