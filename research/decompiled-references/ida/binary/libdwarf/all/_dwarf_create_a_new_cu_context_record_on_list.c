__int64 __fastcall dwarf_create_a_new_cu_context_record_on_list(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6,
        void **a7,
        Dwarf_Error *a8)
{
  struct Dwarf_Debug_s *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r13
  Dwarf_Half *v14; // rax
  Dwarf_Half *v15; // r13
  size_t v16; // rax
  Dwarf_Half *v17; // r8
  char *v18; // r10
  __int64 v19; // rdx
  Dwarf_Half *v20; // rcx
  __int64 alloc; // rax
  void *v23; // rbp
  char v24; // si
  char *v25; // rax
  __int64 v26; // rdx
  int v27; // eax
  void *v28; // rbp
  Dwarf_Half *v29; // r8
  Dwarf_Half *v30; // r10
  __int64 v31; // r13
  Dwarf_Half *v32; // r9
  __int64 v33; // r8
  unsigned __int64 v34; // rax
  char *v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // r10
  unsigned __int8 v38; // cl
  Dwarf_Half *v39; // rax
  char *v40; // r8
  __int16 v41; // dx
  __int64 v42; // r12
  void *v43; // rbp
  unsigned __int8 v44; // cl
  __int64 v45; // rsi
  __int64 v46; // r12
  unsigned __int64 v47; // rax
  void *v48; // rax
  __int16 v49; // r12
  __int16 v50; // ax
  int has_debug_fission_tu_index; // eax
  char *v52; // rdx
  __int64 v53; // rcx
  int debugfission_for_key; // eax
  unsigned __int64 v55; // rax
  unsigned int v56; // ecx
  int all_offsets_via_fission; // eax
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rsi
  __int64 i; // rax
  void *v62; // rbp
  __int64 v63; // rax
  int debugfission_for_offset; // eax
  void *v65; // rbp
  __int64 v66; // rax
  int v67; // ecx
  __int64 v68; // rbp
  struct Dwarf_Attribute_s *v69; // rbx
  int v70; // r13d
  int v71; // eax
  int v72; // eax
  char *v73; // rsi
  unsigned __int16 v74; // ax
  int v75; // eax
  unsigned __int16 v76; // ax
  int v77; // esi
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  char *v84; // rax
  int v85; // eax
  int v86; // eax
  const char *v87; // rbx
  char v88; // al
  int v89; // eax
  char v90; // dl
  const char *v91; // r13
  int v92; // ecx
  Dwarf_Attribute *v93; // r13
  Dwarf_Attribute *v94; // r12
  __int64 v95; // r13
  struct Dwarf_Debug_s *v96; // rbp
  Dwarf_Signed v97; // rbx
  Dwarf_Attribute v98; // rsi
  __int64 v99; // rax
  __int64 v100; // r11
  int v101; // eax
  int v102; // ecx
  Dwarf_Attribute *v103; // r13
  __int64 v104; // rbp
  Dwarf_Signed v105; // rbx
  Dwarf_Attribute v106; // rsi
  __int16 v107; // ax
  Dwarf_Attribute *v108; // r13
  __int64 v109; // r12
  Dwarf_Signed v110; // rbx
  Dwarf_Attribute v111; // rsi
  int v112; // eax
  __int64 v113; // r12
  Dwarf_Signed v114; // rbp
  Dwarf_Attribute v115; // rsi
  void *v116; // rbp
  __int64 v117; // r13
  Dwarf_Signed v118; // rbx
  Dwarf_Attribute v119; // rsi
  __int64 v120; // r13
  Dwarf_Signed v121; // rbx
  Dwarf_Attribute v122; // rsi
  __int64 v123; // r13
  Dwarf_Signed v124; // rbx
  Dwarf_Attribute v125; // rsi
  __int64 v126; // r13
  Dwarf_Signed v127; // rbx
  Dwarf_Attribute v128; // rsi
  __int64 v129; // r12
  struct Dwarf_Debug_s *v130; // rbp
  Dwarf_Signed v131; // rbx
  Dwarf_Attribute v132; // rsi
  __int64 v133; // r12
  Dwarf_Signed v134; // rbx
  Dwarf_Attribute v135; // rsi
  Dwarf_Signed v136; // r13
  __int64 v137; // rbp
  Dwarf_Attribute *v138; // r12
  Dwarf_Attribute v139; // rsi
  __int64 v140; // r12
  Dwarf_Signed v141; // rbx
  Dwarf_Attribute v142; // rsi
  __int64 v143; // r13
  Dwarf_Signed v144; // rbx
  Dwarf_Attribute v145; // rsi
  __int64 v146; // r13
  Dwarf_Signed v147; // rbx
  Dwarf_Attribute v148; // rsi
  char *v149; // [rsp+8h] [rbp-120h]
  int v150; // [rsp+8h] [rbp-120h]
  unsigned int v151; // [rsp+8h] [rbp-120h]
  Dwarf_Half *v152; // [rsp+8h] [rbp-120h]
  Dwarf_Half *v153; // [rsp+8h] [rbp-120h]
  Dwarf_Half *v154; // [rsp+8h] [rbp-120h]
  __int16 v155; // [rsp+8h] [rbp-120h]
  int v156; // [rsp+8h] [rbp-120h]
  int v157; // [rsp+8h] [rbp-120h]
  int v158; // [rsp+8h] [rbp-120h]
  __int16 v159; // [rsp+8h] [rbp-120h]
  char *s; // [rsp+10h] [rbp-118h]
  int sa; // [rsp+10h] [rbp-118h]
  int sb; // [rsp+10h] [rbp-118h]
  Dwarf_Half *v164; // [rsp+20h] [rbp-108h]
  int v165; // [rsp+20h] [rbp-108h]
  int v166; // [rsp+20h] [rbp-108h]
  Dwarf_Debug v168; // [rsp+38h] [rbp-F0h]
  unsigned __int8 v169; // [rsp+40h] [rbp-E8h]
  struct Dwarf_Die_s *v170; // [rsp+40h] [rbp-E8h]
  char *v171; // [rsp+48h] [rbp-E0h]
  __int64 v172; // [rsp+48h] [rbp-E0h]
  char *v173; // [rsp+50h] [rbp-D8h]
  Dwarf_Half *v174; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v175; // [rsp+50h] [rbp-D8h]
  __int16 v176; // [rsp+50h] [rbp-D8h]
  Dwarf_Half *v177; // [rsp+58h] [rbp-D0h]
  __int64 v178; // [rsp+58h] [rbp-D0h]
  char *v179; // [rsp+58h] [rbp-D0h]
  Dwarf_Half *v180; // [rsp+58h] [rbp-D0h]
  Dwarf_Half *v181; // [rsp+58h] [rbp-D0h]
  __int64 v182; // [rsp+58h] [rbp-D0h]
  char *v183; // [rsp+60h] [rbp-C8h]
  unsigned __int8 v184; // [rsp+60h] [rbp-C8h]
  __int64 v185; // [rsp+60h] [rbp-C8h]
  __int64 v186; // [rsp+68h] [rbp-C0h]
  __int16 v187; // [rsp+74h] [rbp-B4h]
  char v188; // [rsp+77h] [rbp-B1h]
  char *v189; // [rsp+78h] [rbp-B0h]
  Dwarf_Half v190; // [rsp+86h] [rbp-A2h] BYREF
  Dwarf_Half v191; // [rsp+88h] [rbp-A0h] BYREF
  Dwarf_Half v192; // [rsp+8Ah] [rbp-9Eh] BYREF
  int v193; // [rsp+8Ch] [rbp-9Ch] BYREF
  Dwarf_Die v194; // [rsp+90h] [rbp-98h] BYREF
  Dwarf_Attribute *v195; // [rsp+98h] [rbp-90h] BYREF
  Dwarf_Signed v196; // [rsp+A0h] [rbp-88h] BYREF
  unsigned __int64 v197; // [rsp+A8h] [rbp-80h] BYREF
  char *s2[5]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v199; // [rsp+D8h] [rbp-50h] BYREF
  _QWORD v200[9]; // [rsp+E0h] [rbp-48h] BYREF

  v10 = (struct Dwarf_Debug_s *)a1;
  v200[1] = __readfsqword(0x28u);
  if ( a5 + _dwarf_length_of_cu_header_simple(a1, a3) >= a4 )
  {
    _dwarf_error(a1, a8, 131);
    return 1;
  }
  v197 = 0;
  if ( a3 )
  {
    s = (char *)a1[68];
    v168 = (Dwarf_Debug)(a1 + 13);
    v149 = (char *)a1[46];
    alloc = _dwarf_get_alloc(a1, 32, 1);
    v12 = alloc;
    if ( alloc )
    {
      *(_QWORD *)alloc = a1;
      *(_DWORD *)(alloc + 648) = a3;
      v13 = a1[45];
      goto LABEL_5;
    }
LABEL_60:
    _dwarf_error(a1, a8, 62);
    return 1;
  }
  s = (char *)a1[97];
  v168 = (Dwarf_Debug)(a1 + 19);
  v149 = (char *)a1[75];
  v11 = _dwarf_get_alloc(a1, 32, 1);
  v12 = v11;
  if ( !v11 )
    goto LABEL_60;
  *(_QWORD *)v11 = a1;
  *(_DWORD *)(v11 + 648) = 0;
  v13 = a1[74];
LABEL_5:
  if ( !v13 || a5 >= (unsigned __int64)v149 || (unsigned __int64)v149 < a5 + 4 )
  {
LABEL_24:
    v23 = *(void **)(v12 + 624);
    if ( v23 )
    {
      _dwarf_free_abbrev_hash_table_contents(*(_QWORD *)(v12 + 624), 0);
      free(v23);
      *(_QWORD *)(v12 + 624) = 0;
    }
    dwarf_dealloc((Dwarf_Debug)a1, (void *)v12, 0x20u);
    _dwarf_error(a1, a8, 334);
    return 1;
  }
  v14 = (Dwarf_Half *)&v149[v13];
  v15 = (Dwarf_Half *)(a5 + v13);
  v164 = v14;
  if ( s )
  {
    v16 = strlen(s);
    if ( v16 > 4 && !strcmp(&s[v16 - 4], ".dwo") )
      *(_DWORD *)(v12 + 360) = 1;
  }
  s2[0] = nullptr;
  if ( v164 < v15 + 2 )
    goto LABEL_35;
  ((void (__fastcall *)(char **, Dwarf_Half *, __int64))a1[1037])(s2, v15, 4);
  v17 = v15 + 2;
  v18 = s2[0];
  if ( s2[0] == (char *)0xFFFFFFFFLL )
  {
    s2[0] = nullptr;
    if ( v164 < v15 + 6 )
      goto LABEL_35;
    ((void (__fastcall *)(char **, Dwarf_Half *, __int64))a1[1037])(s2, v17, 8);
    v20 = v15 + 6;
    v19 = 4;
    v18 = s2[0];
    if ( v149 >= s2[0] )
      goto LABEL_29;
LABEL_184:
    _dwarf_create_area_len_error(a1, a8, v18, v149);
    goto LABEL_36;
  }
  if ( s2[0] )
  {
    if ( v149 >= s2[0] )
    {
      v169 = 4;
      v24 = 0;
      v26 = 4;
      v171 = &s2[0][a5 + 4];
      goto LABEL_39;
    }
    goto LABEL_184;
  }
  if ( !*((_BYTE *)a1 + 8360) || *((_BYTE *)a1 + 232) != 8 )
    goto LABEL_31;
  if ( v164 < v15 + 4 )
  {
LABEL_35:
    _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    goto LABEL_36;
  }
  ((void (__fastcall *)(char **, Dwarf_Half *, __int64, Dwarf_Half *, Dwarf_Half *))a1[1037])(s2, v15, 8, v15 + 4, v17);
  v19 = 0;
  v20 = v15 + 4;
  v18 = s2[0];
  if ( v149 < s2[0] )
  {
    _dwarf_create_area_len_error(a1, a8, s2[0], v149);
LABEL_36:
    v27 = 1;
    goto LABEL_32;
  }
LABEL_29:
  if ( !v18 )
  {
LABEL_31:
    v27 = -1;
LABEL_32:
    v28 = *(void **)(v12 + 624);
    if ( v28 )
    {
      v150 = v27;
      _dwarf_free_abbrev_hash_table_contents(*(_QWORD *)(v12 + 624), 0);
      free(v28);
      v27 = v150;
      *(_QWORD *)(v12 + 624) = 0;
    }
    v151 = v27;
    dwarf_dealloc(v10, (void *)v12, 0x20u);
    return v151;
  }
  v24 = v19;
  v169 = 8;
  v17 = v20;
  v25 = &v18[a5 + 8 + v19];
  v26 = v19 + 8;
  v171 = v25;
LABEL_39:
  *(_BYTE *)(v12 + 17) = v24;
  *(_QWORD *)(v12 + 8) = v18;
  *(_BYTE *)(v12 + 16) = v169;
  if ( v149 < &v18[v26] || v149 < v171 )
  {
    _dwarf_error(a1, a8, 47);
    goto LABEL_36;
  }
  LOWORD(s2[0]) = 0;
  if ( v164 < v17 + 1 )
    goto LABEL_54;
  v177 = v17 + 1;
  v173 = v18;
  v152 = v17;
  ((void (__fastcall *)(char **, Dwarf_Half *, __int64))a1[1037])(s2, v17, 2);
  v29 = v152;
  v30 = (Dwarf_Half *)v173;
  v31 = LOWORD(s2[0]);
  v32 = v177;
  if ( LOWORD(s2[0]) == 5 )
  {
    if ( v164 < &v177[v169 / 2u + 1] )
    {
      _dwarf_error_string(
        a1,
        a8,
        285,
        "DW_DLE_UT_TYPE_ERROR:  Reading the unit type, address size, and abbrev_offset of the DWARF5 header will run off "
        "the end of the section. Corrupt DWARF");
      v32 = v177;
      v29 = v152;
      v30 = (Dwarf_Half *)v173;
    }
    LOBYTE(s2[0]) = 0;
    if ( v164 >= (Dwarf_Half *)((char *)v29 + 3) )
    {
      v183 = (char *)v29 + 3;
      v180 = v29;
      v175 = (unsigned __int64)v30;
      ((void (__fastcall *)(char **, Dwarf_Half *, __int64))a1[1037])(s2, v32, 1);
      v42 = LOBYTE(s2[0]);
      if ( (unsigned int)LOBYTE(s2[0]) - 1 > 5 )
      {
        dwarfstring_constructor(s2);
        dwarfstring_append_printf_u(s2, "DW_DLE_CU_UT_TYPE_ERROR: we do not know  the CU header unit_type 0x%x", v42);
        dwarfstring_append_printf_u(s2, " (%u) so cannotprocess this compilation_unit. A valid type ", v42);
        dwarfstring_append();
        v99 = dwarfstring_string(s2, "would be DW_UT_compile, for example");
        _dwarf_error_string(a1, a8, 285, v99);
        dwarfstring_destructor(s2);
        goto LABEL_55;
      }
      LOBYTE(s2[0]) = 0;
      if ( v164 >= v180 + 2 )
      {
        v181 = v180 + 2;
        ((void (__fastcall *)(char **, char *, __int64))a1[1037])(s2, v183, 1);
        v44 = (unsigned __int8)s2[0];
        s2[0] = nullptr;
        if ( __CFADD__(v181, v169) )
        {
LABEL_220:
          _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
          goto LABEL_55;
        }
        if ( v164 >= &v181[v169 / 2u] )
        {
          v184 = v44;
          ((void (__fastcall *)(char **, Dwarf_Half *, _QWORD))a1[1037])(s2, v181, v169);
          v37 = v175;
          v39 = &v181[v169 / 2u];
          v41 = (unsigned __int8)v42;
          v40 = s2[0];
          v38 = v184;
          goto LABEL_66;
        }
      }
    }
LABEL_54:
    _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    goto LABEL_55;
  }
  if ( (unsigned __int16)(LOWORD(s2[0]) - 2) > 2u )
  {
    _dwarf_error(a1, a8, 48);
    goto LABEL_55;
  }
  v33 = v169;
  v34 = (unsigned __int64)&v177[v169 / 2u] + 1;
  if ( (unsigned __int64)v164 < v34 )
  {
    _dwarf_error_string(
      a1,
      a8,
      285,
      "DW_DLE_UT_TYPE_ERROR:  Reading the address size, and abbrev_offset of the DWARF header will run off the end of the"
      " section. Corrupt DWARF");
    v34 = (unsigned __int64)&v177[v169 / 2u] + 1;
    v33 = v169;
    v32 = v177;
    v30 = (Dwarf_Half *)v173;
  }
  s2[0] = nullptr;
  if ( __CFADD__(v33, v32) )
    goto LABEL_220;
  if ( v164 < (Dwarf_Half *)((char *)v32 + v33) )
    goto LABEL_54;
  v178 = (__int64)v32 + v33;
  v174 = (Dwarf_Half *)v34;
  v153 = v30;
  ((void (__fastcall *)(char **, Dwarf_Half *, __int64))a1[1037])(s2, v32, v33);
  v35 = s2[0];
  LOBYTE(s2[0]) = 0;
  v36 = v178;
  if ( v164 < v174 )
    goto LABEL_54;
  v179 = v35;
  ((void (__fastcall *)(char **, __int64, __int64))a1[1037])(s2, v36, 1);
  v37 = (unsigned __int64)v153;
  v38 = (unsigned __int8)s2[0];
  v39 = v174;
  v40 = v179;
  if ( a3 )
  {
    v41 = 1;
    v42 = 1;
  }
  else
  {
    v41 = 2;
    v42 = 2;
  }
LABEL_66:
  *(_WORD *)(v12 + 18) = v31;
  *(_WORD *)(v12 + 652) = v41;
  *(_BYTE *)(v12 + 32) = v38;
  *(_QWORD *)(v12 + 24) = v40;
  if ( !v38 )
  {
    _dwarf_error(a1, a8, 371);
    goto LABEL_55;
  }
  if ( (unsigned __int8)(v38 - 2) > 6u )
  {
    _dwarf_create_address_size_dwarf_error(a1, a8, v38, 50, "DW_DLE_ADDRESS_SIZE_ERROR::");
    goto LABEL_55;
  }
  *(_BYTE *)(v12 + 33) = 0;
  if ( v164 < v39 )
    goto LABEL_24;
  v45 = 0;
  if ( (unsigned __int64)(v31 - 4) > 1 )
  {
LABEL_70:
    if ( v37 < v45 + v169 + 3 )
    {
LABEL_122:
      v65 = *(void **)(v12 + 624);
      if ( v65 )
      {
        _dwarf_free_abbrev_hash_table_contents(*(_QWORD *)(v12 + 624), 0);
        free(v65);
        *(_QWORD *)(v12 + 624) = 0;
      }
      dwarf_dealloc((Dwarf_Debug)a1, (void *)v12, 0x20u);
      _dwarf_error_string(a1, a8, 47, "DW_DLE_CU_LENGTH_ERROR: reading version stamp and address size fields");
    }
    else
    {
      switch ( v42 )
      {
        case 2LL:
        case 6LL:
          if ( v164 < v39 + 4 )
            goto LABEL_223;
          v154 = (Dwarf_Half *)v37;
          v46 = *(_QWORD *)v39;
          v27 = _dwarf_read_unaligned_ck_wrapper(a1, &v197, v39 + 4, v169, v164, a8);
          if ( v27 )
            goto LABEL_32;
          *(_QWORD *)(v12 + 82) = v46;
          *(_DWORD *)(v12 + 336) = 1;
          v47 = v197;
          *(_QWORD *)(v12 + 96) = v197;
          if ( v47 < (unsigned __int64)v154 )
            goto LABEL_75;
          v116 = *(void **)(v12 + 624);
          if ( v116 )
          {
            _dwarf_free_abbrev_hash_table_contents(*(_QWORD *)(v12 + 624), 0);
            free(v116);
            *(_QWORD *)(v12 + 624) = 0;
          }
          dwarf_dealloc((Dwarf_Debug)a1, (void *)v12, 0x20u);
          _dwarf_error(a1, a8, 239);
          break;
        case 4LL:
        case 5LL:
          goto LABEL_100;
        default:
          goto LABEL_75;
      }
    }
    return 1;
  }
  switch ( (char)v42 )
  {
    case 2:
    case 6:
      v45 = (unsigned __int8)(v169 + 8);
      goto LABEL_70;
    case 4:
    case 5:
      if ( v37 < v169 + 11 )
        goto LABEL_122;
LABEL_100:
      if ( v164 < v39 + 4 )
      {
LABEL_223:
        _dwarf_error_string(a1, a8, 47, "DW_DLE_CU_LENGTH_ERROR: reading Dwarf_Sig8 signature field");
        v43 = *(void **)(v12 + 624);
        if ( v43 )
          goto LABEL_56;
        goto LABEL_57;
      }
      v63 = *(_QWORD *)v39;
      *(_DWORD *)(v12 + 336) = 1;
      *(_QWORD *)(v12 + 82) = v63;
LABEL_75:
      v48 = calloc(1u, 0x20u);
      *(_QWORD *)(v12 + 624) = v48;
      if ( !v48 )
      {
        dwarf_dealloc((Dwarf_Debug)a1, (void *)v12, 0x20u);
        goto LABEL_60;
      }
      *(_QWORD *)(v12 + 72) = a5;
      *((_QWORD *)v168 + 3) = v171;
      v49 = *(_WORD *)(v12 + 18);
      v199 = *(_QWORD *)(v12 + 82);
      v50 = *(_WORD *)(v12 + 652);
      if ( v50 == 6 || v50 == 2 && v49 == 4 )
      {
        has_debug_fission_tu_index = _dwarf_file_has_debug_fission_tu_index(a1);
        v52 = "tu";
        if ( has_debug_fission_tu_index )
          goto LABEL_80;
      }
      else if ( (v50 == 5 || v50 == 1 && v49 == 4) && (unsigned int)_dwarf_file_has_debug_fission_cu_index(a1) )
      {
        v52 = "cu";
LABEL_80:
        v53 = v12 + 104;
        if ( *(_DWORD *)(v12 + 336) )
        {
          debugfission_for_key = dwarf_get_debugfission_for_key(a1, &v199, v52, v53, a8);
          if ( debugfission_for_key == 1 )
            goto LABEL_55;
          if ( debugfission_for_key == -1 )
          {
            _dwarf_error_string(
              a1,
              a8,
              291,
              "DW_DLE_MISSING_REQUIRED_CU_OFFSET_HASH:  dwarf_get_debugfission_for_key returned DW_DLV_NO_ENTRY, something is wrong");
            goto LABEL_55;
          }
        }
        else
        {
          debugfission_for_offset = _dwarf_get_debugfission_for_offset(a1, a5, v52, v53, a8);
          if ( debugfission_for_offset == 1 )
            goto LABEL_55;
          if ( debugfission_for_offset == -1 )
          {
            _dwarf_error_string(
              a1,
              a8,
              291,
              "DW_DLE_MISSING_REQUIRED_CU_OFFSET_HASH:  dwarf_get_debugfission_for_offset returned DW_DLV_NO_ENTRY, something is wrong");
            goto LABEL_55;
          }
          *(_DWORD *)(v12 + 336) = 1;
          *(_QWORD *)(v12 + 82) = *(_QWORD *)(v12 + 120);
        }
      }
      if ( *(_QWORD *)(v12 + 104) )
      {
        s2[0] = nullptr;
        v55 = *(_QWORD *)(v12 + 24) + _dwarf_get_dwp_extra_offset(v12 + 104, 3, s2);
        *(_QWORD *)(v12 + 24) = v55;
      }
      else
      {
        v55 = *(_QWORD *)(v12 + 24);
      }
      if ( v55 >= a1[104] )
      {
        _dwarf_error(a1, a8, 49);
        goto LABEL_55;
      }
      v56 = *(_DWORD *)(v12 + 648);
      v194 = nullptr;
      all_offsets_via_fission = sub_16100(a1, 0, v12, v56, &v194, (__int64)a8);
      if ( all_offsets_via_fission )
      {
        if ( all_offsets_via_fission != -1 )
          goto LABEL_88;
        goto LABEL_114;
      }
      v190 = 0;
      v66 = *((_QWORD *)v194 + 2);
      v193 = 0;
      v170 = v194;
      v185 = v66;
      LOWORD(v66) = *(_WORD *)(v66 + 18);
      v195 = nullptr;
      v196 = 0;
      v176 = v66;
      v67 = dwarf_attrlist(v194, &v195, &v196, a8);
      if ( v67 )
        goto LABEL_199;
      if ( v196 <= 0 )
      {
        v103 = v195;
        goto LABEL_211;
      }
      v68 = 0;
      v187 = v49;
      v182 = -1;
      v172 = -1;
      v186 = -1;
      while ( 1 )
      {
        v191 = 0;
        v192 = 0;
        v69 = v195[v68];
        v70 = dwarf_whatattr(v69, &v191, a8);
        if ( v70 != 1 || !a8 )
          break;
        dwarf_dealloc_error(a1, *a8);
        *a8 = nullptr;
        if ( dwarf_whatform(v69, &v192, a8) == 1 )
          goto LABEL_132;
LABEL_133:
        if ( ++v68 >= v196 )
        {
          v100 = v172;
          v10 = (struct Dwarf_Debug_s *)a1;
          if ( v186 >= 0 && *(_BYTE *)(v12 + 34) == 2 )
          {
            v102 = sub_15970((__int64)a1, (__int64)"DW_AT_entry_pc", v195[v186], v182, (Dwarf_Addr *)v12, &v193, a8);
            v100 = v172;
            if ( v102 )
            {
              v108 = v195;
              if ( v196 > 0 )
              {
                v165 = v102;
                v109 = 0;
                v110 = v196;
                do
                {
                  v111 = v108[v109++];
                  dwarf_dealloc((Dwarf_Debug)a1, v111, 0xAu);
                }
                while ( v110 != v109 );
                v49 = v187;
                v102 = v165;
                v10 = (struct Dwarf_Debug_s *)a1;
              }
LABEL_251:
              v157 = v102;
              dwarf_dealloc(v10, v108, 0xFu);
              LOWORD(s2[0]) = 0;
              *(_DWORD *)(v12 + 348) = 1;
              v112 = dwarf_die_abbrev_children_flag(v170, (Dwarf_Half *)s2);
              v67 = v157;
              if ( !v112 )
                *(_DWORD *)(v12 + 348) = LOWORD(s2[0]);
              goto LABEL_199;
            }
          }
          if ( v100 >= 0 )
          {
            v101 = sub_15970((__int64)a1, (__int64)"DW_AT_low_pc", v195[v100], v182, (Dwarf_Addr *)v12, &v193, a8);
            v102 = v101;
            if ( v101 )
            {
              v108 = v195;
              if ( v196 > 0 )
              {
                v166 = v101;
                v113 = 0;
                v114 = v196;
                do
                {
                  v115 = v108[v113++];
                  dwarf_dealloc((Dwarf_Debug)a1, v115, 0xAu);
                }
                while ( v113 != v114 );
                v49 = v187;
                v102 = v166;
              }
              goto LABEL_251;
            }
          }
          v103 = v195;
          if ( v196 > 0 )
          {
            v104 = 0;
            v105 = v196;
            do
            {
              v106 = v103[v104++];
              dwarf_dealloc((Dwarf_Debug)a1, v106, 0xAu);
            }
            while ( v105 != v104 );
            v10 = (struct Dwarf_Debug_s *)a1;
          }
LABEL_211:
          dwarf_dealloc(v10, v103, 0xFu);
          LOWORD(s2[0]) = 0;
          *(_DWORD *)(v12 + 348) = 1;
          v195 = nullptr;
          v196 = 0;
          if ( !dwarf_die_abbrev_children_flag(v170, (Dwarf_Half *)s2) )
            *(_DWORD *)(v12 + 348) = LOWORD(s2[0]);
          goto LABEL_213;
        }
      }
      v71 = dwarf_whatform(v69, &v192, a8);
      if ( v71 == 1 && a8 )
      {
LABEL_132:
        dwarf_dealloc_error(a1, *a8);
        *a8 = nullptr;
        goto LABEL_133;
      }
      if ( v71 | v70 )
        goto LABEL_133;
      if ( v192 == 26 || (unsigned __int16)(v192 - 37) <= 3u )
        *(_DWORD *)(v12 + 356) = 1;
      if ( v191 <= 0x91u )
      {
        if ( v191 <= 0x51u )
        {
          if ( v191 == 17 )
          {
            v172 = v68;
          }
          else if ( v191 == 37 )
          {
            v197 = 0;
            s2[0] = nullptr;
            v86 = dwarf_die_text();
            if ( v86 == 1 )
            {
              dwarf_dealloc_error(*(_QWORD *)v185, v197);
            }
            else if ( v86 != -1 && *s2[0] )
            {
              v188 = *s2[0];
              v87 = s2[0];
              v88 = *s2[0];
              v189 = s2[0];
              do
              {
                if ( v88 == 77 && !strncmp("Metrowerks", v87, 0xAu) )
                {
                  *(_BYTE *)(v185 + 34) = 1;
                  goto LABEL_133;
                }
                v88 = *++v87;
              }
              while ( v88 );
              v90 = v188;
              v91 = v189;
              while ( v90 != 65 || strncmp("Apple", v91, 5u) )
              {
                v90 = *++v91;
                if ( !v90 )
                  goto LABEL_133;
              }
              *(_BYTE *)(v185 + 34) = 2;
            }
          }
        }
        else
        {
          switch ( v191 )
          {
            case 0x52u:
              v186 = v68;
              goto LABEL_133;
            case 0x55u:
              s2[0] = nullptr;
              LODWORD(v197) = *(_DWORD *)(v12 + 648);
              v83 = _dwarf_internal_global_formref_b();
              if ( v83 )
              {
                v92 = v83;
                v10 = (struct Dwarf_Debug_s *)a1;
                v93 = v195;
                if ( v196 <= 0 )
                  goto LABEL_198;
                sb = v83;
                v159 = v49;
                v140 = 0;
                v130 = (struct Dwarf_Debug_s *)a1;
                v141 = v196;
                do
                {
                  v142 = v93[v140++];
                  dwarf_dealloc((Dwarf_Debug)a1, v142, 0xAu);
                }
                while ( v141 != v140 );
LABEL_284:
                v49 = v159;
                v92 = sb;
                v10 = v130;
                goto LABEL_198;
              }
              v84 = s2[0];
              *(_DWORD *)(v12 + 368) = 1;
              *(_QWORD *)(v12 + 536) = v84;
              break;
            case 0x72u:
              LODWORD(s2[0]) = *(_DWORD *)(v12 + 648);
              v85 = _dwarf_internal_global_formref_b();
              if ( v85 )
              {
                v92 = v85;
                v10 = (struct Dwarf_Debug_s *)a1;
                v93 = v195;
                if ( v196 > 0 )
                {
                  sa = v85;
                  v155 = v49;
                  v94 = v195;
                  v146 = 0;
                  v96 = (struct Dwarf_Debug_s *)a1;
                  v147 = v196;
                  do
                  {
                    v148 = v94[v146++];
                    dwarf_dealloc((Dwarf_Debug)a1, v148, 0xAu);
                  }
                  while ( v147 != v146 );
                  goto LABEL_197;
                }
                goto LABEL_198;
              }
              *(_DWORD *)(v12 + 452) = 1;
              goto LABEL_133;
            case 0x73u:
              goto LABEL_165;
            case 0x74u:
              LODWORD(s2[0]) = *(_DWORD *)(v12 + 648);
              v81 = _dwarf_internal_global_formref_b();
              if ( v81 )
              {
                v92 = v81;
                v10 = (struct Dwarf_Debug_s *)a1;
                v93 = v195;
                if ( v196 > 0 )
                {
                  sa = v81;
                  v155 = v49;
                  v94 = v195;
                  v95 = 0;
                  v96 = (struct Dwarf_Debug_s *)a1;
                  v97 = v196;
                  do
                  {
                    v98 = v94[v95++];
                    dwarf_dealloc((Dwarf_Debug)a1, v98, 0xAu);
                  }
                  while ( v97 != v95 );
                  goto LABEL_197;
                }
                goto LABEL_198;
              }
              *(_QWORD *)(v12 + 576) = 0x100000001LL;
              goto LABEL_133;
            case 0x75u:
              goto LABEL_156;
            case 0x76u:
              goto LABEL_160;
            case 0x8Cu:
              LODWORD(s2[0]) = *(_DWORD *)(v12 + 648);
              v78 = _dwarf_internal_global_formref_b();
              if ( v78 )
              {
                v92 = v78;
                v10 = (struct Dwarf_Debug_s *)a1;
                v93 = v195;
                if ( v196 > 0 )
                {
                  sa = v78;
                  v155 = v49;
                  v94 = v195;
                  v126 = 0;
                  v96 = (struct Dwarf_Debug_s *)a1;
                  v127 = v196;
                  do
                  {
                    v128 = v94[v126++];
                    dwarf_dealloc((Dwarf_Debug)a1, v128, 0xAu);
                  }
                  while ( v127 != v126 );
                  goto LABEL_197;
                }
                goto LABEL_198;
              }
              *(_QWORD *)(v12 + 440) = 0x100000001LL;
              goto LABEL_133;
            case 0x90u:
              s2[0] = nullptr;
              v75 = dwarf_formudata(v69, (Dwarf_Unsigned *)s2, a8);
              if ( v75 )
              {
                v92 = v75;
                v10 = (struct Dwarf_Debug_s *)a1;
                v93 = v195;
                if ( v196 > 0 )
                {
                  sa = v75;
                  v155 = v49;
                  v94 = v195;
                  v117 = 0;
                  v96 = (struct Dwarf_Debug_s *)a1;
                  v118 = v196;
                  do
                  {
                    v119 = v94[v117++];
                    dwarf_dealloc((Dwarf_Debug)a1, v119, 0xAu);
                  }
                  while ( v118 != v117 );
                  goto LABEL_197;
                }
                goto LABEL_198;
              }
              v76 = (unsigned __int16)s2[0];
              v77 = *(_DWORD *)(v12 + 40);
              *(_WORD *)(v12 + 36) = s2[0];
              if ( v77 )
                dwarf_lvn_name_direct(v76, *(_QWORD *)(v12 + 48), v12 + 64, v12 + 56);
              goto LABEL_133;
            case 0x91u:
              s2[0] = nullptr;
              v72 = dwarf_formudata(v69, (Dwarf_Unsigned *)s2, a8);
              if ( v72 )
              {
                v92 = v72;
                v10 = (struct Dwarf_Debug_s *)a1;
                v93 = v195;
                if ( v196 > 0 )
                {
                  sa = v72;
                  v155 = v49;
                  v94 = v195;
                  v123 = 0;
                  v96 = (struct Dwarf_Debug_s *)a1;
                  v124 = v196;
                  do
                  {
                    v125 = v94[v123++];
                    dwarf_dealloc((Dwarf_Debug)a1, v125, 0xAu);
                  }
                  while ( v124 != v123 );
                  goto LABEL_197;
                }
                goto LABEL_198;
              }
              v73 = s2[0];
              v74 = *(_WORD *)(v12 + 36);
              *(_DWORD *)(v12 + 40) = 1;
              *(_QWORD *)(v12 + 48) = v73;
              if ( v74 )
                dwarf_lvn_name_direct(v74, v73, v12 + 64, v12 + 56);
              goto LABEL_133;
            default:
              goto LABEL_133;
          }
        }
        goto LABEL_133;
      }
      if ( v191 != 8498 )
      {
        if ( v191 > 0x2132u )
        {
          if ( v191 == 8499 )
          {
LABEL_165:
            LODWORD(s2[0]) = *(_DWORD *)(v12 + 648);
            v82 = _dwarf_internal_global_formref_b();
            if ( v82 )
            {
              v92 = v82;
              v10 = (struct Dwarf_Debug_s *)a1;
              v93 = v195;
              if ( v196 > 0 )
              {
                sa = v82;
                v155 = v49;
                v94 = v195;
                v120 = 0;
                v96 = (struct Dwarf_Debug_s *)a1;
                v121 = v196;
                do
                {
                  v122 = v94[v120++];
                  dwarf_dealloc((Dwarf_Debug)a1, v122, 0xAu);
                }
                while ( v121 != v120 );
                goto LABEL_197;
              }
              goto LABEL_198;
            }
            if ( *(_DWORD *)(v12 + 648) == LODWORD(s2[0]) )
              *(_DWORD *)(v12 + 372) = 1;
            v182 = v68;
          }
        }
        else if ( v191 == 8496 )
        {
LABEL_160:
          v80 = dwarf_formstring(v69, (char **)(v12 + 592), a8);
          if ( v80 )
          {
            v92 = v80;
            v10 = (struct Dwarf_Debug_s *)a1;
            v93 = v195;
            if ( v196 <= 0 )
              goto LABEL_198;
            sb = v80;
            v159 = v49;
            v129 = 0;
            v130 = (struct Dwarf_Debug_s *)a1;
            v131 = v196;
            do
            {
              v132 = v93[v129++];
              dwarf_dealloc((Dwarf_Debug)a1, v132, 0xAu);
            }
            while ( v131 != v129 );
            goto LABEL_284;
          }
          *(_DWORD *)(v12 + 352) = 1;
        }
        else if ( v191 == 8497 )
        {
LABEL_156:
          if ( v176 != 4 )
          {
            v136 = v196;
            v10 = (struct Dwarf_Debug_s *)a1;
            v137 = 0;
            v138 = v195;
            if ( v196 > 0 )
            {
              do
              {
                v139 = v138[v137++];
                dwarf_dealloc((Dwarf_Debug)a1, v139, 0xAu);
              }
              while ( v136 != v137 );
            }
            dwarf_dealloc((Dwarf_Debug)a1, v138, 0xFu);
            _dwarf_error(a1, a8, 369);
LABEL_201:
            dwarf_dealloc_die(v170);
            goto LABEL_55;
          }
          v200[0] = 0;
          v79 = dwarf_formsig8_const(v69, v200, a8);
          if ( v79 )
          {
            v92 = v79;
            v10 = (struct Dwarf_Debug_s *)a1;
            v93 = v195;
            if ( v196 <= 0 )
              goto LABEL_198;
            sb = v79;
            v159 = v49;
            v133 = 0;
            v130 = (struct Dwarf_Debug_s *)a1;
            v134 = v196;
            do
            {
              v135 = v93[v133++];
              dwarf_dealloc((Dwarf_Debug)a1, v135, 0xAu);
            }
            while ( v134 != v133 );
            goto LABEL_284;
          }
          if ( *(_DWORD *)(v12 + 336) )
          {
            if ( *(_QWORD *)(v12 + 82) != v200[0] )
              dwarf_insert_harmless_error(
                (Dwarf_Debug)a1,
                "DW_DLE_SIGNATURE_MISMATCHDWARF4 extension fission signature and DW_AT_GNU_dwo_id do not match ignoring D"
                "W_AT[_GNU]_dwo_id");
          }
          else
          {
            *(_QWORD *)(v12 + 82) = v200[0];
            *(_DWORD *)(v12 + 336) = 1;
          }
        }
        goto LABEL_133;
      }
      LODWORD(s2[0]) = *(_DWORD *)(v12 + 648);
      v89 = _dwarf_internal_global_formref_b();
      if ( !v89 )
      {
        *(_DWORD *)(v12 + 552) = 1;
        goto LABEL_133;
      }
      v92 = v89;
      v10 = (struct Dwarf_Debug_s *)a1;
      v93 = v195;
      if ( v196 > 0 )
      {
        sa = v89;
        v155 = v49;
        v94 = v195;
        v143 = 0;
        v96 = (struct Dwarf_Debug_s *)a1;
        v144 = v196;
        do
        {
          v145 = v94[v143++];
          dwarf_dealloc((Dwarf_Debug)a1, v145, 0xAu);
        }
        while ( v144 != v143 );
LABEL_197:
        v93 = v94;
        v92 = sa;
        v49 = v155;
        v10 = v96;
      }
LABEL_198:
      v156 = v92;
      dwarf_dealloc(v10, v93, 0xFu);
      v67 = v156;
LABEL_199:
      if ( v67 == -1 )
      {
        if ( a7 )
          *a7 = v170;
        else
          dwarf_dealloc_die(v170);
        if ( !v193 )
        {
          *(_DWORD *)(v12 + 348) = 0;
          if ( v49 != 4 )
          {
LABEL_115:
            if ( !*(_DWORD *)(v12 + 336) )
              goto LABEL_89;
LABEL_116:
            all_offsets_via_fission = _dwarf_find_all_offsets_via_fission(v10, v12, a8);
LABEL_88:
            if ( all_offsets_via_fission == 1 )
              goto LABEL_55;
            goto LABEL_89;
          }
          v107 = *(_WORD *)(v12 + 80);
LABEL_239:
          if ( !*(_DWORD *)(v12 + 336) )
            goto LABEL_89;
          if ( v107 == 17 || v107 == 65 )
            *(_WORD *)(v12 + 652) = 4;
          goto LABEL_116;
        }
LABEL_114:
        if ( v49 != 4 )
          goto LABEL_115;
        v107 = *(_WORD *)(v12 + 80);
        if ( *(_DWORD *)(v12 + 348) )
        {
          if ( !*(_DWORD *)(v12 + 336) )
            goto LABEL_89;
          if ( v107 == 17 )
          {
            *(_WORD *)(v12 + 652) = 5;
          }
          else if ( v107 == 65 )
          {
            *(_WORD *)(v12 + 652) = 6;
          }
          goto LABEL_116;
        }
        goto LABEL_239;
      }
      if ( v67 == 1 )
        goto LABEL_201;
LABEL_213:
      v27 = dwarf_tag(v170, &v190, a8);
      if ( !v27 )
      {
        *(_WORD *)(v12 + 80) = v190;
        if ( a7 )
          *a7 = v170;
        else
          dwarf_dealloc_die(v170);
        goto LABEL_114;
      }
      if ( !a7 )
      {
        v158 = v27;
        dwarf_dealloc_die(v170);
        v27 = v158;
        if ( v158 == 1 )
          goto LABEL_55;
LABEL_216:
        if ( v27 == -1 )
          goto LABEL_32;
LABEL_89:
        v58 = *(_QWORD *)(a2 + 8);
        if ( v58 )
        {
          v59 = *(_QWORD *)(a2 + 16);
          if ( !v59 )
          {
LABEL_97:
            dwarf_dealloc_die(*a7);
            *a7 = nullptr;
            v62 = *(void **)(v12 + 624);
            if ( v62 )
            {
              _dwarf_free_abbrev_hash_table_contents(*(_QWORD *)(v12 + 624), 0);
              free(v62);
              *(_QWORD *)(v12 + 624) = 0;
            }
            dwarf_dealloc(v10, (void *)v12, 0x20u);
            _dwarf_error_string(
              v10,
              a8,
              104,
              "DW_DLE_DIE_NO_CU_CONTEXTImpossible error inserting into internal context list");
            return 1;
          }
          v60 = *(_QWORD *)(v12 + 72);
          if ( *(_QWORD *)(v59 + 72) < v60 )
          {
            *(_QWORD *)(v59 + 640) = v12;
            *(_QWORD *)(a2 + 16) = v12;
          }
          else
          {
            if ( v60 >= *(_QWORD *)(v58 + 72) )
            {
              for ( i = *(_QWORD *)(v58 + 640); i; i = *(_QWORD *)(i + 640) )
              {
                if ( v60 < *(_QWORD *)(i + 72) )
                {
                  *(_QWORD *)(v58 + 640) = v12;
                  *(_QWORD *)(v12 + 640) = i;
                  goto LABEL_118;
                }
                v58 = i;
              }
              goto LABEL_97;
            }
            *(_QWORD *)(a2 + 8) = v12;
            *(_QWORD *)(v12 + 640) = v58;
          }
        }
        else
        {
          *(__m128i *)(a2 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
        }
LABEL_118:
        *a6 = v12;
        return 0;
      }
      *a7 = v170;
      if ( v27 != 1 )
        goto LABEL_216;
LABEL_55:
      v43 = *(void **)(v12 + 624);
      if ( v43 )
      {
LABEL_56:
        _dwarf_free_abbrev_hash_table_contents(v43, 0);
        free(v43);
        *(_QWORD *)(v12 + 624) = 0;
      }
LABEL_57:
      dwarf_dealloc(v10, (void *)v12, 0x20u);
      return 1;
    default:
      v45 = 0;
      goto LABEL_70;
  }
}

