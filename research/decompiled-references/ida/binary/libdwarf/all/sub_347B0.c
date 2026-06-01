__int64 __fastcall sub_347B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned __int64 a5,
        char **a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v14; // r15
  char *v15; // rdx
  char *v16; // r10
  __int16 v17; // ax
  char *v18; // rax
  void *v19; // r11
  char *v20; // rax
  unsigned __int16 v21; // dx
  char *v22; // rsi
  unsigned __int64 v23; // r10
  void *v24; // r11
  __int64 v25; // r13
  char *v26; // rdx
  char *v27; // rdx
  char *v28; // rax
  char v29; // dl
  int v30; // edx
  _BYTE *v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rdx
  char *v35; // rsi
  char *v36; // rax
  __int64 v37; // rax
  __int64 result; // rax
  const char *v39; // rsi
  __int64 v40; // rax
  char v41; // dl
  char *v42; // r12
  unsigned __int64 v43; // rax
  char *v44; // r12
  _QWORD *v45; // r14
  char *v46; // rbx
  char *v47; // rbp
  __int64 v48; // r12
  char *v49; // rbp
  __int64 v50; // rbx
  void *v51; // rax
  char *v52; // r10
  unsigned __int64 v53; // r12
  char *v54; // r13
  char *v55; // rdx
  unsigned __int64 v56; // rbx
  char *v57; // r14
  char *v58; // rax
  size_t v59; // rdx
  char *v60; // rdx
  unsigned __int64 v61; // r15
  char *v62; // r13
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  _QWORD *v67; // rax
  _QWORD *v68; // r12
  char *v69; // rdx
  size_t v70; // rax
  char *v71; // r13
  char *v72; // rsi
  __int64 *v73; // rax
  char *v74; // r12
  __int64 v75; // rax
  char *v76; // rsi
  unsigned __int64 v77; // rax
  bool v78; // cf
  unsigned __int64 v79; // r12
  void *v80; // rax
  void *v81; // r11
  unsigned __int64 v82; // r13
  _QWORD *v83; // rdx
  __int64 v84; // rdi
  unsigned __int64 v85; // rbp
  _QWORD *v86; // r10
  __int64 v87; // r14
  _QWORD *v88; // r12
  char *v89; // rbx
  _QWORD *v90; // r13
  unsigned int v91; // eax
  __int64 v92; // rdx
  _QWORD *v93; // rbp
  char *v94; // r10
  unsigned __int64 v95; // rt1
  char *v96; // r12
  unsigned __int64 v97; // rax
  char *v98; // r12
  _QWORD *v99; // rax
  __int64 v100; // r10
  __int16 v101; // r11
  _QWORD *v102; // rbx
  char *v103; // rbp
  char *v104; // r12
  unsigned __int64 v105; // r10
  char *v106; // rax
  char *v107; // rdx
  bool v108; // zf
  char v109; // al
  _BYTE *v110; // rax
  _BYTE *v111; // rbp
  unsigned __int64 *v112; // r13
  unsigned __int64 v113; // rsi
  unsigned __int64 v114; // rdx
  void *v115; // r14
  unsigned int data16; // eax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned __int64 v120; // rdi
  char *v121; // r13
  void *v122; // rax
  void *v123; // r12
  _QWORD *v124; // rax
  char *v125; // r10
  _QWORD *v126; // r14
  unsigned __int64 v127; // r13
  __int64 v128; // r15
  _QWORD *v129; // r12
  unsigned __int64 v130; // rcx
  _QWORD *v131; // rax
  __int64 v132; // r8
  int v133; // r15d
  void *v134; // r12
  void *v135; // rax
  void *v136; // rdi
  __int64 v137; // r15
  unsigned __int64 v138; // r14
  _QWORD *v139; // r8
  void *v140; // rcx
  unsigned __int64 v141; // r12
  __int64 v142; // r13
  __int64 v143; // rbx
  unsigned __int64 v144; // r13
  _QWORD *v145; // r14
  __int64 v146; // rsi
  __int64 v147; // rdx
  unsigned int v148; // eax
  __int64 v149; // rdx
  __int64 v150; // rax
  _QWORD *v151; // rax
  const char *v152; // rdx
  _QWORD *v153; // rax
  void *v154; // rt2
  int v155; // r9d
  int v156; // r8d
  int v157; // esi
  unsigned int v158; // eax
  __int64 v159; // rax
  __int64 v160; // [rsp-10h] [rbp-148h]
  unsigned __int64 v161; // [rsp+0h] [rbp-138h]
  unsigned __int64 v162; // [rsp+0h] [rbp-138h]
  unsigned __int64 v164; // [rsp+0h] [rbp-138h]
  unsigned int v165; // [rsp+0h] [rbp-138h]
  unsigned int v166; // [rsp+0h] [rbp-138h]
  int v167; // [rsp+0h] [rbp-138h]
  unsigned int v168; // [rsp+0h] [rbp-138h]
  __int64 v169; // [rsp+0h] [rbp-138h]
  unsigned int v170; // [rsp+0h] [rbp-138h]
  unsigned __int64 v171; // [rsp+10h] [rbp-128h]
  char *v173; // [rsp+20h] [rbp-118h]
  char *v174; // [rsp+20h] [rbp-118h]
  char *v175; // [rsp+20h] [rbp-118h]
  char *v176; // [rsp+20h] [rbp-118h]
  char *v177; // [rsp+20h] [rbp-118h]
  char *v178; // [rsp+20h] [rbp-118h]
  void *v179; // [rsp+20h] [rbp-118h]
  void *v180; // [rsp+28h] [rbp-110h]
  unsigned __int64 v181; // [rsp+28h] [rbp-110h]
  void *v182; // [rsp+28h] [rbp-110h]
  void *ptr; // [rsp+30h] [rbp-108h]
  void *ptra; // [rsp+30h] [rbp-108h]
  void *ptrb; // [rsp+30h] [rbp-108h]
  char *ptrc; // [rsp+30h] [rbp-108h]
  char *ptrd; // [rsp+30h] [rbp-108h]
  int ptre; // [rsp+30h] [rbp-108h]
  void *ptrf; // [rsp+30h] [rbp-108h]
  _QWORD *ptrg; // [rsp+30h] [rbp-108h]
  void *v191; // [rsp+38h] [rbp-100h]
  unsigned __int64 v192; // [rsp+38h] [rbp-100h]
  __int16 v193; // [rsp+38h] [rbp-100h]
  __int16 v194; // [rsp+38h] [rbp-100h]
  unsigned __int64 i; // [rsp+38h] [rbp-100h]
  void *v196; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v197; // [rsp+40h] [rbp-F8h]
  _QWORD *v198; // [rsp+48h] [rbp-F0h]
  _QWORD *v199; // [rsp+50h] [rbp-E8h]
  __int16 v200; // [rsp+50h] [rbp-E8h]
  char *s; // [rsp+68h] [rbp-D0h] BYREF
  void *v202; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v203; // [rsp+78h] [rbp-C0h] BYREF
  unsigned __int64 v204; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v205; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v206; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v207; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v208; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v209; // [rsp+A8h] [rbp-90h] BYREF
  unsigned __int64 v210; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v211; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v212; // [rsp+C0h] [rbp-78h] BYREF
  unsigned __int64 v213; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v214[13]; // [rsp+D0h] [rbp-68h] BYREF

  v8 = a3 + a5;
  v9 = a1;
  v10 = a7;
  v214[5] = __readfsqword(0x28u);
  s = a4;
  v202 = nullptr;
  *(_QWORD *)(a7 + 88) = a4;
  v214[0] = 0;
  if ( a3 + a5 < (unsigned __int64)(a4 + 4) )
    goto LABEL_37;
  (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 8296))(v214, a4, 4);
  v161 = v214[0];
  if ( v214[0] == 0xFFFFFFFFLL )
  {
    v214[0] = 0;
    v35 = s + 4;
    v36 = s + 12;
    s += 4;
    if ( v8 < (unsigned __int64)v36 )
      goto LABEL_37;
    (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 8296))(v214, v35, 8);
    v37 = v214[0];
    v161 = v214[0];
    if ( a5 >= v214[0] )
    {
      v14 = 8;
      v15 = s + 8;
      v16 = &s[v214[0] + 8];
      v17 = 12;
      goto LABEL_6;
    }
    goto LABEL_41;
  }
  if ( v214[0] )
  {
    v37 = v214[0];
    if ( a5 >= v214[0] )
      goto LABEL_5;
    goto LABEL_41;
  }
  if ( !*(_BYTE *)(a1 + 8360) )
  {
LABEL_5:
    v14 = 4;
    v15 = s + 4;
    v16 = &s[v214[0] + 4];
    v17 = 4;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 232) != 8 )
  {
    v15 = s + 4;
    v17 = 4;
    v14 = 4;
    v16 = s + 4;
    goto LABEL_6;
  }
  if ( v8 < (unsigned __int64)(s + 8) )
    goto LABEL_37;
  (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 8296))(v214, s, 8);
  v37 = v214[0];
  v161 = v214[0];
  if ( a5 < v214[0] )
  {
LABEL_41:
    _dwarf_create_area_len_error(a1, a8, v37, a5);
    return 1;
  }
  v14 = 8;
  v15 = s + 8;
  v16 = &s[v214[0] + 8];
  v17 = 8;
LABEL_6:
  *(_WORD *)(a7 + 40) = v17;
  *(_QWORD *)(a7 + 96) = v16;
  v18 = &a4[-*(_QWORD *)(a1 + 1056)];
  s = v15;
  *(_QWORD *)(a7 + 16) = v18;
  if ( v8 < (unsigned __int64)v16 )
  {
    dwarfstring_constructor(v214);
    v39 = "DW_DLE_DEBUG_LINE_LENGTH_BAD  the total length of this line table is too large at %llu bytes";
    dwarfstring_append_printf_u(
      v214,
      "DW_DLE_DEBUG_LINE_LENGTH_BAD  the total length of this line table is too large at %llu bytes",
      v161);
LABEL_45:
    v40 = dwarfstring_string(v214, v39);
    _dwarf_error_string(v9, a8, 54, v40);
    dwarfstring_destructor(v214);
    return 1;
  }
  v173 = v16;
  *(_QWORD *)(a7 + 32) = v161;
  if ( (unsigned int)_dwarf_read_unaligned_ck_wrapper(a1, &v202, v15, 2, v16, a8) == 1 )
    return 1;
  v19 = v202;
  v20 = s;
  v21 = (_WORD)v202 - 2;
  v22 = s + 2;
  *(_WORD *)(a7 + 24) = (_WORD)v202;
  s = v22;
  if ( v21 > 3u && (_WORD)v19 != 0xF006 )
  {
    _dwarf_error(a1, a8, 48);
    return 1;
  }
  if ( (_WORD)v19 == 5 )
  {
    if ( v22 >= v173 )
      goto LABEL_48;
    *(_BYTE *)(a7 + 42) = v20[2];
    s = v20 + 3;
    if ( v20 + 3 >= v173 )
      goto LABEL_48;
    v41 = v20[3];
    v22 = v20 + 4;
    s = v20 + 4;
    *(_BYTE *)(a7 + 43) = v41;
  }
  else
  {
    *(_BYTE *)(a7 + 42) = *(_BYTE *)(a2 + 32);
    *(_BYTE *)(a7 + 43) = *(_BYTE *)(a2 + 33);
  }
  v214[0] = 0;
  if ( __CFADD__(v14, v22) )
    goto LABEL_56;
  if ( v173 < &v22[v14] )
  {
LABEL_37:
    _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  v180 = v19;
  (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 8296))(v214, v22, v14);
  v23 = (unsigned __int64)v173;
  v24 = v180;
  v25 = v214[0];
  if ( v161 < v214[0] )
  {
    dwarfstring_constructor(v214);
    v39 = "DW_DLE_DEBUG_LINE_LENGTH_BAD  the prologue length of  this line table is too large at %llu bytes";
    dwarfstring_append_printf_u(
      v214,
      "DW_DLE_DEBUG_LINE_LENGTH_BAD  the prologue length of  this line table is too large at %llu bytes",
      v25);
    goto LABEL_45;
  }
  v26 = s;
  *(_QWORD *)(a7 + 56) = v214[0];
  v27 = &v26[v14];
  s = v27;
  *(_QWORD *)(a7 + 112) = v27;
  if ( v27 >= v173 )
    goto LABEL_48;
  *(_BYTE *)(a7 + 80) = *v27;
  v28 = v27 + 1;
  s = v27 + 1;
  if ( (unsigned __int16)((_WORD)v180 - 4) <= 1u || (_WORD)v180 == 0xF006 )
  {
    if ( v28 < v173 )
    {
      *(_BYTE *)(a7 + 81) = v27[1];
      v28 = v27 + 2;
      s = v27 + 2;
      goto LABEL_18;
    }
LABEL_48:
    _dwarf_error(a1, a8, 54);
    return 1;
  }
LABEL_18:
  if ( v28 >= v173 )
    goto LABEL_48;
  *(_BYTE *)(a7 + 120) = *v28;
  s = v28 + 1;
  if ( v28 + 1 >= v173 )
    goto LABEL_48;
  *(_BYTE *)(a7 + 121) = v28[1];
  s = v28 + 2;
  if ( v28 + 2 >= v173 )
    goto LABEL_58;
  v29 = v28[2];
  *(_BYTE *)(a7 + 122) = v29;
  if ( !v29 )
  {
    _dwarf_error(a1, a8, 330);
    return 1;
  }
  s = v28 + 3;
  if ( v28 + 3 >= v173 )
    goto LABEL_58;
  v30 = (unsigned __int8)v28[3];
  v31 = v28 + 4;
  *(_QWORD *)(a7 + 128) = v31;
  *(_BYTE *)(a7 + 123) = v30;
  LOBYTE(v32) = v30 - 1;
  *(_BYTE *)(a7 + 136) = v30 - 1;
  s = &v31[v30 - 1];
  if ( s >= v173 )
    goto LABEL_58;
  if ( (unsigned __int8)v32 > 0xFu )
  {
    _dwarf_print_header_issue(
      a1,
      (int)"Too many standard operands in linetable header: ",
      (int)a4,
      (unsigned __int8)v32,
      0,
      0,
      0,
      0);
    v31 = *(_BYTE **)(a7 + 128);
    v32 = 15;
    v23 = (unsigned __int64)v173;
    v24 = v180;
    if ( (unsigned __int64)(v31 + 15) < v8 )
      goto LABEL_27;
LABEL_61:
    _dwarf_error_string(
      a1,
      a8,
      56,
      "DW_DLE_LINE_NUM_OPERANDS_BAD: The .debug_line section is too short to be real as a standard opcode table does not fit");
    return 1;
  }
  if ( (unsigned __int64)&v31[(char)v32] >= v8 )
    goto LABEL_61;
  v32 = (char)v32;
  if ( (_BYTE)v30 != 1 )
  {
LABEL_27:
    v33 = 0;
    while ( *((_BYTE *)qword_B8AE0 + v33) == v31[v33] )
    {
      if ( (unsigned int)++v33 >= v32 )
        goto LABEL_63;
    }
    if ( v32 > 0xC )
      v32 = 12;
    v34 = 0;
    do
    {
      if ( *((_BYTE *)qword_B8AD0 + v34) != v31[v34] )
      {
        _dwarf_error_string(
          a1,
          a8,
          56,
          "DW_DLE_LINE_NUM_OPERANDS_BAD we cannot determine the size of the standard opcode table in the line table header");
        return 1;
      }
      ++v34;
    }
    while ( (unsigned int)v34 < v32 );
LABEL_63:
    if ( (_WORD)v24 == 2 )
    {
      if ( *(_BYTE *)(a7 + 136) == 12 )
      {
        v164 = v23;
        _dwarf_print_header_issue(
          a1,
          (int)"standard DWARF3 operands matched, but is DWARF2 linetable: count",
          (int)a4,
          v32,
          0,
          0,
          0,
          0);
        v23 = v164;
      }
      if ( (unsigned __int64)s < v23 )
        goto LABEL_80;
    }
    else
    {
      v42 = s;
      if ( (unsigned __int64)s < v23 )
        goto LABEL_65;
    }
    _dwarf_error_string(
      a1,
      a8,
      120,
      "DW_DLE_LINE_OFFSET_BAD we run off the end of the .debug_line section reading a line table header");
    return 1;
  }
  if ( (_WORD)v180 == 2 )
    goto LABEL_80;
  v42 = s;
LABEL_65:
  if ( (unsigned __int16)v24 <= 4u )
  {
LABEL_80:
    v162 = v23;
    v51 = calloc(0x28u, 1u);
    v52 = (char *)v162;
    *(_QWORD *)(a7 + 144) = v51;
    if ( !v51 )
      goto LABEL_187;
    v53 = 0;
    v54 = v52;
    v175 = a4;
    v55 = s;
    v56 = 5;
    while ( *v55 )
    {
      v57 = *(char **)(a7 + 144);
      if ( v53 >= v56 )
      {
        v58 = (char *)realloc(*(void **)(a7 + 144), 16 * v56);
        v57 = v58;
        if ( !v58 )
        {
          _dwarf_error_string(
            a1,
            a8,
            62,
            "DW_DLE_ALLOC_FAIL reallocating an array of include directories in a line table");
          return 1;
        }
        v59 = 8 * v56;
        v56 *= 2LL;
        memset(&v58[v59], 0, v59);
        *(_QWORD *)(a7 + 144) = v57;
        v55 = s;
      }
      *(_QWORD *)&v57[8 * v53] = v55;
      result = _dwarf_check_string_valid(a1, v175, v55, v54, 364, a8);
      if ( (_DWORD)result )
        return result;
      ++v53;
      v55 = &s[strlen(s) + 1];
      s = v55;
      if ( v55 >= v54 )
      {
        v9 = a1;
        goto LABEL_103;
      }
    }
    v60 = v55 + 1;
    v9 = a1;
    s = v60;
    *(_QWORD *)(a7 + 152) = v53;
    if ( v54 >= v60 )
    {
      if ( v60 == v54 )
        goto LABEL_103;
      v61 = (unsigned __int64)v54;
      while ( *v60 )
      {
        v67 = calloc(0x60u, 1u);
        v68 = v67;
        if ( !v67 )
          goto LABEL_187;
        _dwarf_add_to_files_list(a7, v67);
        v69 = s;
        v68[1] = s;
        result = _dwarf_check_string_valid(a1, v175, v69, v61, 364, a8);
        if ( (_DWORD)result )
          return result;
        v70 = strlen(s);
        v203 = 0;
        v71 = &s[v70 + 1];
        s = v71;
        v204 = 0;
        if ( (unsigned int)dwarf_decode_leb128(v71, &v203, &v204, v61) == 1 )
          goto LABEL_99;
        v62 = &v71[v203];
        s = v62;
        if ( *(_QWORD *)(a7 + 152) < v204 )
        {
          _dwarf_error(a1, a8, 127);
          return 1;
        }
        v68[3] = v204;
        *((_BYTE *)v68 + 88) = 1;
        v205 = 0;
        v206 = 0;
        if ( (unsigned int)dwarf_decode_leb128(v62, &v205, &v206, v61) == 1
          || (v63 = v206,
              v64 = v205,
              *((_BYTE *)v68 + 89) = 1,
              v213 = 0,
              v68[4] = v63,
              s = &v62[v64],
              v214[0] = 0,
              (unsigned int)dwarf_decode_leb128(&v62[v64], &v213, v214, v61) == 1) )
        {
LABEL_99:
          _dwarf_error_string(a1, a8, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
          return 1;
        }
        v65 = v214[0];
        v66 = v213;
        *((_BYTE *)v68 + 90) = 1;
        v60 = &s[v66];
        s = v60;
        v68[5] = v65;
        if ( (unsigned __int64)v60 >= v61 )
          goto LABEL_103;
      }
      v105 = v61;
      s = v60 + 1;
      if ( v61 >= (unsigned __int64)(v60 + 1) )
      {
LABEL_149:
        v106 = (char *)(*(_QWORD *)(v10 + 112) + *(_QWORD *)(v10 + 56));
        goto LABEL_150;
      }
    }
    goto LABEL_58;
  }
  if ( (_WORD)v24 != 0xF006 )
  {
    v213 = 0;
    goto LABEL_68;
  }
  s = v42 + 1;
  if ( v23 < (unsigned __int64)(v42 + 1) )
    goto LABEL_58;
  if ( v42 + 1 == (char *)v23 || v42[1] )
    goto LABEL_103;
  v72 = v42 + 2;
  s = v42 + 2;
  if ( v23 < (unsigned __int64)(v42 + 2) )
  {
LABEL_58:
    _dwarf_error(v9, a8, 120);
    return 1;
  }
  v73 = &qword_A3498;
  v74 = v42 + 7;
  do
  {
    if ( v72 == (char *)v23 || *v72 != *(_BYTE *)v73 )
      goto LABEL_103;
    ++v72;
    v73 = (__int64 *)((char *)v73 + 1);
    s = v72;
  }
  while ( v72 != v74 );
  v214[0] = 0;
  if ( __CFADD__(v14, v72) )
  {
LABEL_56:
    _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
    return 1;
  }
  if ( v23 < (unsigned __int64)&v72[v14] )
    goto LABEL_37;
  v182 = v24;
  v176 = (char *)v23;
  (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 8296))(v214, v72, v14);
  v75 = v214[0];
  v214[0] = 0;
  v76 = &s[v14];
  *(_QWORD *)(a7 + 72) = v75;
  s = v76;
  if ( __CFADD__(v14, v76) )
    goto LABEL_56;
  if ( v176 < &v76[v14] )
    goto LABEL_37;
  (*(void (__fastcall **)(_QWORD *, char *, __int64))(a1 + 8296))(v214, v76, v14);
  v23 = (unsigned __int64)v176;
  v77 = v214[0];
  v24 = v182;
  v42 = &s[v14];
  v78 = v176 < &s[v14];
  *(_QWORD *)(a7 + 64) = v214[0];
  s = v42;
  if ( v78 )
  {
    _dwarf_error_string(a1, a8, 120, "DW_DLE_LINE_OFFSET_BAD The line table pointer points past end of line table.");
    return 1;
  }
  if ( *(_QWORD *)(a1 + 240) < v77 )
  {
    _dwarf_error_string(
      a1,
      a8,
      120,
      "DW_DLE_LINE_OFFSET_BAD The line table actuals offset is larger than  the size of the object file. Corrupt DWARF");
    return 1;
  }
  if ( v176 < &v42[v77] )
  {
    _dwarf_error_string(a1, a8, 120, "DW_DLE_LINE_OFFSET_BAD The line table actuals offset is too large to be real.");
    return 1;
  }
  v213 = 0;
  if ( v42 >= v176 )
  {
LABEL_103:
    _dwarf_error(v9, a8, 235);
    return 1;
  }
LABEL_68:
  v43 = (unsigned __int8)*v42;
  v44 = v42 + 1;
  s = v44;
  v174 = (char *)v43;
  *(_QWORD *)(a7 + 160) = v43;
  if ( !v43 )
  {
    v45 = nullptr;
    goto LABEL_125;
  }
  ptr = v24;
  v181 = v23;
  v45 = malloc(16 * v43);
  if ( !v45 )
    goto LABEL_187;
  v46 = nullptr;
  v47 = v44;
  do
  {
    v207 = 0;
    v208 = 0;
    if ( (unsigned int)dwarf_decode_leb128(v47, &v207, &v208, v181) == 1
      || (v48 = 2LL * (_QWORD)v46,
          v49 = &v47[v207],
          v209 = 0,
          v45[2 * (_QWORD)v46] = v208,
          s = v49,
          v210 = 0,
          (unsigned int)dwarf_decode_leb128(v49, &v209, &v210, v181) == 1) )
    {
      v50 = a1;
      goto LABEL_75;
    }
    v47 = &v49[v209];
    ++v46;
    s = v47;
    v45[v48 + 1] = v210;
  }
  while ( v174 != v46 );
  v9 = a1;
  v10 = a7;
  v23 = v181;
  v24 = ptr;
LABEL_125:
  v191 = v24;
  ptra = (void *)v23;
  if ( (unsigned int)sub_324A0((__int64 *)&s, &v213, v9, a8, v23) )
  {
LABEL_76:
    free(v45);
    return 1;
  }
  v79 = v213;
  if ( v161 < v213 )
  {
    free(v45);
    dwarfstring_constructor(v214);
    v39 = "DW_DLE_DEBUG_LINE_LENGTH_BAD  the directories count of  this line table is too large at %llu";
    dwarfstring_append_printf_u(
      v214,
      "DW_DLE_DEBUG_LINE_LENGTH_BAD  the directories count of  this line table is too large at %llu",
      v213);
    goto LABEL_45;
  }
  v80 = calloc(8 * v213, 1u);
  v81 = v191;
  *(_QWORD *)(v10 + 144) = v80;
  if ( !v80 )
  {
LABEL_186:
    free(v45);
    goto LABEL_187;
  }
  if ( !v174 && v79 )
  {
    free(v45);
    _dwarf_error_string(
      v9,
      a8,
      346,
      "DW_DLE_DIRECTORY_FORMAT_COUNT_VS_DIRECTORIES_MISMATCH: format count is zero yet directories count > 0");
    return 1;
  }
  v82 = 0;
  v83 = v45;
  v84 = v9;
  v86 = (_QWORD *)v10;
  v85 = (unsigned __int64)ptra;
  while ( 2 )
  {
    if ( v82 < v213 )
    {
      if ( !v174 )
        goto LABEL_174;
      v192 = v82;
      v87 = 8 * v82;
      v88 = v83;
      v89 = nullptr;
      ptrb = v83;
      v90 = v86;
      v196 = v81;
      do
      {
        v92 = v88[1];
        if ( (unsigned __int64)s >= v85 )
        {
          free(ptrb);
          _dwarf_error_string(v84, a8, 235, " Running off end of line table reading directory path");
          return 1;
        }
        if ( *v88 != 1 )
        {
          v115 = ptrb;
          goto LABEL_171;
        }
        v214[0] = 0;
        v91 = _dwarf_decode_line_string_form(v84, 1, v92, v14, (int)&s, v85, (__int64)v214, a8);
        if ( v91 )
        {
          v165 = v91;
          free(ptrb);
          return v165;
        }
        ++v89;
        v88 += 2;
        *(_QWORD *)(v90[18] + v87) = v214[0];
      }
      while ( v174 != v89 );
      v86 = v90;
      v83 = ptrb;
      v82 = v192;
      v81 = v196;
LABEL_174:
      if ( v85 >= (unsigned __int64)s )
      {
        ++v82;
        continue;
      }
      v115 = v83;
LABEL_171:
      v9 = v84;
      free(v115);
      goto LABEL_103;
    }
    break;
  }
  v95 = v85;
  v93 = v86;
  v94 = (char *)v95;
  v96 = s;
  v9 = v84;
  v93[19] = v213;
  v93[22] = v83;
  v210 = 0;
  if ( (unsigned __int64)v96 >= v95 )
    goto LABEL_103;
  v97 = (unsigned __int8)*v96;
  v98 = v96 + 1;
  v193 = (__int16)v81;
  v177 = v94;
  v93[23] = v97;
  ptrc = (char *)v97;
  s = v98;
  v99 = malloc(16 * v97);
  v100 = (__int64)v177;
  v101 = v193;
  v45 = v99;
  if ( !v99 )
  {
LABEL_187:
    _dwarf_error(v9, a8, 62);
    return 1;
  }
  if ( v98 >= v177 )
  {
    free(v99);
    _dwarf_error_string(v84, a8, 235, "DW_DLE_LINE_NUMBER_HEADER_ERROR: reading filename format entries");
    return 1;
  }
  if ( ptrc )
  {
    v102 = v99;
    v199 = v93;
    v103 = nullptr;
    while ( 1 )
    {
      v211 = 0;
      v212 = 0;
      if ( (unsigned int)dwarf_decode_leb128(v98, &v211, &v212, v177) == 1 )
        break;
      v104 = &v98[v211];
      s = v104;
      *v102 = v212;
      v213 = 0;
      v214[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(v104, &v213, v214, v177) == 1 )
        break;
      v98 = &v104[v213];
      ++v103;
      v102 += 2;
      s = v98;
      *(v102 - 1) = v214[0];
      if ( ptrc == v103 )
      {
        v9 = v84;
        v93 = v199;
        v100 = (__int64)v177;
        v101 = v193;
        goto LABEL_158;
      }
    }
    v50 = v84;
LABEL_75:
    _dwarf_error_string(v50, a8, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
    goto LABEL_76;
  }
LABEL_158:
  v194 = v101;
  v178 = (char *)v100;
  if ( (unsigned int)sub_324A0((__int64 *)&s, &v210, v9, a8, v100) )
    goto LABEL_76;
  v197 = 0;
  if ( v161 < v210 )
  {
    dwarfstring_constructor(v214);
    dwarfstring_append_printf_u(
      v214,
      "DW_DLE_DEBUG_LINE_LENGTH_BAD  the files count of  this line table is too large at %llu files",
      v210);
    v150 = dwarfstring_string(
             v214,
             "DW_DLE_DEBUG_LINE_LENGTH_BAD  the files count of  this line table is too large at %llu files",
             v149);
    _dwarf_error_string(v9, a8, 54, v150);
    dwarfstring_destructor(v214);
    goto LABEL_76;
  }
  v198 = v93;
  v200 = v194;
  while ( v197 < v210 )
  {
    v110 = calloc(0x60u, 1u);
    v111 = v110;
    if ( !v110 )
    {
      free(v45);
      _dwarf_error_string(v9, a8, 62, "DW_DLE_ALLOC_FAIL: Unable to malloc Dwarf_File_Entry_s");
      return 1;
    }
    _dwarf_add_to_files_list(v198, v110);
    v112 = v45;
    for ( i = 0; i < (unsigned __int64)ptrc; ++i )
    {
      v214[0] = 0;
      v113 = *v112;
      v114 = v112[1];
      if ( s >= v178 )
      {
        free(v45);
        _dwarf_error_string(
          v9,
          a8,
          235,
          "DW_DLE_LINE_NUMBER_HEADER_ERROR: file name format count too large to be correct. Corrupt DWARF/");
        return 1;
      }
      if ( v113 > 8 )
      {
        if ( v113 != 8193 )
        {
LABEL_209:
          _dwarf_report_bad_lnct(v9, v113, 235, "DW_DLE_LINE_NUMBER_HEADER_ERROR", a8);
          free(v45);
          return 1;
        }
        data16 = _dwarf_decode_line_string_form(v9, 8193, v114, v14, (int)&s, (int)v178, (__int64)(v111 + 16), a8);
LABEL_189:
        if ( data16 )
        {
LABEL_199:
          v166 = data16;
          free(v45);
          return v166;
        }
      }
      else
      {
        if ( !v113 )
          goto LABEL_209;
        switch ( v113 )
        {
          case 2uLL:
            data16 = _dwarf_decode_line_udata_form(v9, 2, v114, (int)&s, (int)v214, (int)v178, a8);
            if ( data16 )
              goto LABEL_199;
            v117 = v214[0];
            v111[88] = 1;
            *((_QWORD *)v111 + 3) = v117;
            break;
          case 3uLL:
            data16 = _dwarf_decode_line_udata_form(v9, 3, v114, (int)&s, (int)v111 + 32, (int)v178, a8);
            if ( data16 )
              goto LABEL_199;
            v111[89] = 1;
            break;
          case 4uLL:
            data16 = _dwarf_decode_line_udata_form(v9, 4, v114, (int)&s, (int)v111 + 40, (int)v178, a8);
            if ( data16 )
              goto LABEL_199;
            v111[90] = 1;
            break;
          case 5uLL:
            if ( v114 != 30 )
            {
              free(v45);
              _dwarf_error(v9, a8, 400);
              return 1;
            }
            data16 = _dwarf_extract_data16(v9, s, s, v178, v111 + 72, a8);
            if ( data16 )
              goto LABEL_199;
            s += 16;
            v111[91] = 1;
            break;
          case 6uLL:
            data16 = _dwarf_decode_line_string_form(v9, 6, v114, v14, (int)&s, (int)v178, (__int64)(v111 + 48), a8);
            goto LABEL_189;
          case 7uLL:
            data16 = _dwarf_decode_line_udata_form(v9, 7, v114, (int)&s, (int)v214, (int)v178, a8);
            if ( data16 )
              goto LABEL_199;
            v118 = v214[0];
            v111[92] = 1;
            *((_QWORD *)v111 + 7) = v118;
            break;
          case 8uLL:
            data16 = _dwarf_decode_line_udata_form(v9, 8, v114, (int)&s, (int)v214, (int)v178, a8);
            if ( data16 )
              goto LABEL_199;
            v119 = v214[0];
            v111[93] = 1;
            *((_QWORD *)v111 + 8) = v119;
            break;
          default:
            data16 = _dwarf_decode_line_string_form(v9, 1, v114, v14, (int)&s, (int)v178, (__int64)(v111 + 8), a8);
            goto LABEL_189;
        }
      }
      v112 += 2;
      if ( v178 < s )
      {
        free(v45);
        _dwarf_error_string(
          v9,
          a8,
          235,
          "DW_DLE_LINE_NUMBER_HEADER_ERROR: Reading line table header filenames runs off end of section. Corrupt Dwarf");
        return 1;
      }
    }
    ++v197;
  }
  v10 = (__int64)v198;
  v105 = (unsigned __int64)v178;
  v198[26] = v45;
  if ( v200 != -4090 )
    goto LABEL_149;
  v214[0] = 0;
  if ( s >= v178 )
    goto LABEL_103;
  v120 = (unsigned __int8)*s;
  v121 = s + 1;
  ptrd = v178;
  ++s;
  v179 = (void *)v120;
  v122 = malloc(8 * v120);
  v123 = v122;
  if ( !v122 )
  {
    _dwarf_error_string(v9, a8, 62, "DW_DLE_ALLOC_FAIL allocating subprog_entry_types");
    return 1;
  }
  if ( v161 < v120 )
  {
    sub_32190(v9, a8, (__int64)"Subprog format count Count too large to be real", v120);
    free(v123);
    return 1;
  }
  if ( v121 >= ptrd )
  {
    free(v122);
    _dwarf_error_string(v9, a8, 235, "DW_DLE_LINE_NUMBER_HEADER_ERROR: Line table forms odd, experimental libdwarf");
    return 1;
  }
  v124 = malloc(8 * v120);
  v125 = ptrd;
  if ( !v124 )
  {
    free(v123);
    _dwarf_error(v9, a8, 62);
    _dwarf_error_string(v9, a8, 62, "DW_DLE_ALLOC_FAIL allocating subprog_entry_forms");
    return 1;
  }
  ptre = v14;
  v126 = v123;
  v127 = 0;
  v128 = (__int64)v125;
  v129 = v124;
  while ( v127 < v120 )
  {
    if ( (unsigned int)sub_324A0((__int64 *)&s, &v126[v127], v9, a8, v128) )
      goto LABEL_247;
    v130 = v126[v127];
    if ( v161 < v130 )
    {
      v153 = v129;
      v152 = "Subprog entry_types[i] count Count too large to be real";
      v134 = v126;
      v45 = v153;
      goto LABEL_244;
    }
    if ( (unsigned int)sub_324A0((__int64 *)&s, &v129[v127], v9, a8, v128) )
    {
LABEL_247:
      v154 = v126;
      v45 = v129;
      v134 = v154;
      goto LABEL_245;
    }
    v130 = v129[v127];
    if ( v161 < v130 )
    {
      v151 = v129;
      v152 = "Subprog entry_forms[i] count Count too large to be real";
      v134 = v126;
      v45 = v151;
      goto LABEL_244;
    }
    ++v127;
  }
  v131 = v129;
  v132 = v128;
  v133 = ptre;
  ptrf = (void *)v132;
  v134 = v126;
  v45 = v131;
  if ( (unsigned int)sub_324A0((__int64 *)&s, v214, v9, a8, v132) )
    goto LABEL_245;
  LODWORD(v130) = v214[0];
  if ( v161 < v214[0] )
  {
    v152 = "Subprogs Count too large to be real";
LABEL_244:
    sub_32190(v9, a8, (__int64)v152, v130);
LABEL_245:
    free(v134);
    goto LABEL_76;
  }
  v135 = calloc(24LL * v214[0], 1u);
  v198[32] = v135;
  if ( !v135 )
  {
    free(v134);
    goto LABEL_186;
  }
  v167 = v133;
  v136 = v45;
  v137 = v9;
  v138 = 0;
  v139 = v198;
  v140 = v134;
  v141 = (unsigned __int64)ptrf;
  while ( 1 )
  {
    v142 = v214[0];
    if ( v138 >= v214[0] )
    {
      v10 = (__int64)v139;
      free(v140);
      v9 = v137;
      free(v136);
      v159 = *(_QWORD *)(v10 + 72);
      *(_QWORD *)(v10 + 264) = v142;
      v105 = v141;
      v106 = (char *)(*(_QWORD *)(v10 + 112) + v159);
LABEL_150:
      v107 = s;
      if ( v105 >= (unsigned __int64)s )
      {
        if ( s != v106 && v106 < s )
        {
          _dwarf_error(v9, a8, 55);
          return 1;
        }
        v108 = *(_QWORD *)(v10 + 64) == 0;
        *(_QWORD *)(v10 + 88) = s;
        v109 = 2;
        if ( v108 )
          v109 = (unsigned __int64)v107 < *(_QWORD *)(v10 + 96);
        *(_BYTE *)(v10 + 296) = v109;
        *a6 = v107;
        return 0;
      }
      goto LABEL_58;
    }
    v143 = v139[32] + 24 * v138;
    if ( (unsigned __int64)s >= v141 )
      break;
    ptrg = v139;
    v144 = 0;
    v171 = v138;
    v145 = v140;
    while ( v144 < (unsigned __int64)v179 )
    {
      v146 = v145[v144];
      v147 = *((_QWORD *)v136 + v144);
      if ( v146 == 7 )
      {
        v155 = v141;
        v156 = v143 + 8;
        v157 = 7;
        v160 = a8;
LABEL_256:
        v158 = _dwarf_decode_line_udata_form(v137, v157, v147, (int)&s, v156, v155, v160);
        if ( v158 )
        {
          v170 = v158;
          free(v136);
          free(v145);
          return v170;
        }
        goto LABEL_240;
      }
      if ( v146 == 8 )
      {
        v155 = v141;
        v156 = v143 + 16;
        v157 = 8;
        v160 = a8;
        goto LABEL_256;
      }
      if ( v146 != 6 )
      {
        v169 = v145[v144];
        free(v136);
        free(v145);
        _dwarf_report_bad_lnct(v137, v169, 235, "DW_DLE_LINE_NUMBER_HEADER_ERROR", a8);
        return 1;
      }
      v148 = _dwarf_decode_line_string_form(v137, 6, v147, v167, (int)&s, v141, v143, a8);
      if ( v148 )
      {
        v168 = v148;
        free(v145);
        free(v136);
        return v168;
      }
LABEL_240:
      if ( (unsigned __int64)s >= v141 )
      {
        free(v145);
        free(v136);
        _dwarf_error_string(
          v137,
          a8,
          235,
          "DW_DLE_LINE_NUMBER_HEADER_ERROR: Reading suprogram entry DW_LNCT* types  we run off the end of the table");
        return 1;
      }
      ++v144;
    }
    v140 = v145;
    v139 = ptrg;
    v138 = v171 + 1;
  }
  free(v140);
  free(v136);
  _dwarf_error_string(
    v137,
    a8,
    235,
    "DW_DLE_LINE_NUMBER_HEADER_ERROR: Reading suprogram entry subprogs in experimental line table we run off the end of the table");
  return 1;
}

