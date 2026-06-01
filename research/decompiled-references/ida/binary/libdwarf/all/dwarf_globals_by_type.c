__int64 __fastcall dwarf_globals_by_type(_QWORD *a1, int a2, struct Dwarf_Debug_s *a3, __int64 *a4, __int64 a5)
{
  int v8; // ebp
  char *v9; // r14
  unsigned __int64 v10; // r8
  struct Dwarf_Debug_s *v11; // r9
  _DWORD *v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 *v16; // r9
  _QWORD *v17; // rsi
  char *v18; // r10
  int v19; // ebx
  int v20; // r12d
  char *v21; // r12
  unsigned __int64 v22; // rbp
  __int64 alloc; // r14
  int area_length_ck_wrapper; // eax
  int v25; // eax
  int v26; // edx
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  char *v30; // rdx
  __int64 v31; // rax
  char *v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  char *v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  char *v41; // rdx
  size_t v42; // rbx
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  _DWORD *v46; // rsi
  int debug_info; // eax
  int section; // eax
  __int64 v49; // rsi
  int v50; // eax
  int v51; // eax
  __int64 v52; // rbp
  int v53; // eax
  void *v54; // rdi
  __int64 v55; // rsi
  int v56; // eax
  int v57; // eax
  __int128 *v58; // rax
  __int64 *v59; // rdx
  int v60; // r9d
  int v61; // r8d
  __int64 v62; // r14
  __int64 v63; // rsi
  __int64 v64; // r10
  int v65; // r11d
  int v66; // eax
  unsigned __int64 v67; // r10
  __int64 v68; // rax
  int v69; // eax
  size_t v70; // rbp
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rdx
  _BYTE *v76; // rax
  __int64 v77; // rdx
  _BYTE *v78; // rsi
  char i; // al
  int v80; // edx
  __int64 v81; // rax
  Dwarf_Debug v82; // r9
  int v83; // r12d
  int v85; // [rsp+8h] [rbp-320h]
  struct Dwarf_Debug_s *v87; // [rsp+10h] [rbp-318h]
  __int64 *v88; // [rsp+10h] [rbp-318h]
  unsigned __int64 v89; // [rsp+10h] [rbp-318h]
  char *v90; // [rsp+10h] [rbp-318h]
  int v91; // [rsp+10h] [rbp-318h]
  int v92; // [rsp+10h] [rbp-318h]
  char *v93; // [rsp+18h] [rbp-310h]
  char *v94; // [rsp+18h] [rbp-310h]
  int v95; // [rsp+18h] [rbp-310h]
  int v96; // [rsp+18h] [rbp-310h]
  int v97; // [rsp+18h] [rbp-310h]
  struct Dwarf_Debug_s *v98; // [rsp+18h] [rbp-310h]
  struct Dwarf_Debug_s *v99; // [rsp+28h] [rbp-300h]
  size_t v100; // [rsp+30h] [rbp-2F8h]
  char *v101; // [rsp+40h] [rbp-2E8h]
  int v102; // [rsp+50h] [rbp-2D8h]
  Dwarf_Debug v103; // [rsp+58h] [rbp-2D0h]
  int v104; // [rsp+60h] [rbp-2C8h]
  _QWORD *v105; // [rsp+60h] [rbp-2C8h]
  unsigned __int64 v106; // [rsp+68h] [rbp-2C0h]
  unsigned __int64 v107; // [rsp+68h] [rbp-2C0h]
  int v108; // [rsp+74h] [rbp-2B4h]
  int v109; // [rsp+74h] [rbp-2B4h]
  unsigned __int64 v110; // [rsp+78h] [rbp-2B0h]
  __int16 v111; // [rsp+98h] [rbp-290h] BYREF
  __int16 v112; // [rsp+9Ah] [rbp-28Eh] BYREF
  unsigned __int16 v113; // [rsp+9Ch] [rbp-28Ch] BYREF
  __int16 v114; // [rsp+9Eh] [rbp-28Ah] BYREF
  int v115; // [rsp+A0h] [rbp-288h] BYREF
  int v116; // [rsp+A4h] [rbp-284h] BYREF
  void *v117; // [rsp+A8h] [rbp-280h] BYREF
  __int64 v118; // [rsp+B0h] [rbp-278h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-270h] BYREF
  void *v120; // [rsp+C0h] [rbp-268h] BYREF
  __int64 v121; // [rsp+C8h] [rbp-260h] BYREF
  unsigned __int64 v122; // [rsp+D0h] [rbp-258h] BYREF
  __int64 v123; // [rsp+D8h] [rbp-250h] BYREF
  __int64 v124; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-240h] BYREF
  __int64 v126; // [rsp+F0h] [rbp-238h] BYREF
  __int64 v127; // [rsp+F8h] [rbp-230h] BYREF
  __int64 v128; // [rsp+100h] [rbp-228h] BYREF
  __int64 v129; // [rsp+108h] [rbp-220h] BYREF
  __int64 v130; // [rsp+110h] [rbp-218h] BYREF
  unsigned __int64 v131; // [rsp+118h] [rbp-210h] BYREF
  __int64 v132; // [rsp+120h] [rbp-208h] BYREF
  char *s; // [rsp+128h] [rbp-200h] BYREF
  __int64 v134; // [rsp+130h] [rbp-1F8h] BYREF
  __int64 v135; // [rsp+138h] [rbp-1F0h] BYREF
  __int64 v136; // [rsp+140h] [rbp-1E8h] BYREF
  unsigned __int64 v137; // [rsp+148h] [rbp-1E0h] BYREF
  _QWORD v138[5]; // [rsp+150h] [rbp-1D8h] BYREF
  char v139[8]; // [rsp+178h] [rbp-1B0h] BYREF
  __int128 v140; // [rsp+180h] [rbp-1A8h] BYREF
  __int64 v141; // [rsp+190h] [rbp-198h]
  __int128 v142; // [rsp+1A0h] [rbp-188h] BYREF
  __int64 v143; // [rsp+1B0h] [rbp-178h]
  _BYTE v144[96]; // [rsp+1C0h] [rbp-168h] BYREF
  _BYTE v145[96]; // [rsp+220h] [rbp-108h] BYREF
  char v146[104]; // [rsp+280h] [rbp-A8h] BYREF
  unsigned __int64 v147; // [rsp+2E8h] [rbp-40h]

  v147 = __readfsqword(0x28u);
  *(_QWORD *)a3 = 0;
  v117 = nullptr;
  v118 = (__int64)&v117;
  *a4 = 0;
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_globals_by_type()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v8 = a2;
  switch ( a2 )
  {
    case 0:
      v9 = (char *)(a1 + 335);
      break;
    case 1:
      v9 = (char *)(a1 + 596);
      break;
    case 2:
      v9 = (char *)(a1 + 625);
      break;
    case 3:
      v9 = (char *)(a1 + 654);
      break;
    case 4:
      v9 = (char *)(a1 + 683);
      break;
    case 5:
      v9 = (char *)(a1 + 712);
      break;
    default:
      dwarfstring_constructor_static(v138, v146, 100);
      dwarfstring_append_printf_u(
        v138,
        "ERROR DW_DLE_GLOBAL_NULL: Passed in Dwarf_Global requested section %u which is unknown to dwarf_globals_by_type().",
        a2);
      v45 = dwarfstring_string(
              v138,
              "ERROR DW_DLE_GLOBAL_NULL: Passed in Dwarf_Global requested section %u which is unknown to dwarf_globals_by_type().",
              v44);
      _dwarf_error_string(a1, a5, 125, v45);
      dwarfstring_destructor(v138);
      return 1;
  }
  if ( (unsigned int)_dwarf_load_section(a1, v9, a5) == 1 )
    return 1;
  v10 = *((_QWORD *)v9 + 1);
  v11 = a3;
  if ( v10 )
  {
    v18 = *(char **)v9;
    s = nullptr;
    LODWORD(v130) = 0;
    v19 = *((_DWORD *)qword_A3380 + a2);
    v134 = 0;
    v20 = *((_DWORD *)qword_A33A0 + a2);
    v135 = 0;
    v136 = 0;
    if ( *a1 != 3959286781LL )
    {
      _dwarf_error_string(
        0,
        a5,
        81,
        "DW_DLE_DBG_NULL: calling for pubnames-like data Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
      v46 = v117;
      goto LABEL_49;
    }
    if ( !a1[45] )
    {
      v99 = a3;
      v94 = v18;
      v89 = v10;
      debug_info = _dwarf_load_debug_info(a1, a5);
      v10 = v89;
      v18 = v94;
      v11 = v99;
      if ( debug_info )
      {
LABEL_51:
        if ( debug_info == 1 )
          goto LABEL_52;
        goto LABEL_9;
      }
    }
    if ( v18 )
    {
      v108 = v19;
      s = v18;
      v102 = 0;
      v100 = 0;
      v93 = v18;
      v103 = v11;
      v104 = v20;
      v21 = &v18[v10];
      v22 = v10;
      while ( 1 )
      {
        v137 = 0;
        LODWORD(v131) = 0;
        LODWORD(v132) = 0;
        LODWORD(v130) = 0;
        alloc = _dwarf_get_alloc(a1, 34, 1);
        if ( !alloc )
        {
          sub_2C570((Dwarf_Debug)a1, v117);
          v117 = nullptr;
          _dwarf_error_string(a1, a5, 62, "DW_DLE_ALLOC_FAIL: Allocating a Dwarf_Global_Context for a pubnames entry.");
          v46 = v117;
          goto LABEL_49;
        }
        if ( v21 < s + 10 )
        {
          sub_2C610((__int64)a1, a5, 10);
LABEL_121:
          sub_2C570((Dwarf_Debug)a1, v117);
          v117 = nullptr;
          goto LABEL_122;
        }
        area_length_ck_wrapper = _dwarf_read_area_length_ck_wrapper(
                                   (int)a1,
                                   (int)&v137,
                                   (int)&s,
                                   (int)&v132,
                                   (int)&v131,
                                   v22,
                                   (__int64)v21,
                                   a5);
        if ( area_length_ck_wrapper )
          goto LABEL_124;
        if ( v21 < &s[v137] || v22 < v137 )
        {
          v85 = v137;
          dwarfstring_constructor(v138);
          v76 = (_BYTE *)dwarf_errmsg_by_number(v104);
          v77 = 0;
          v78 = v76;
          for ( i = *v76; (i & 0xDF) != 0; i = v78[v77] )
          {
            if ( i == 40 )
              break;
            ++v77;
          }
          dwarfstring_append_length();
          dwarfstring_append_printf_u(v138, ": For cu context %u ", v102);
          dwarfstring_append_printf_s();
          dwarfstring_append_printf_u(v138, "the length field at offset %u ", v100);
          dwarfstring_append_printf_u(v138, "has value %u ", v85);
          dwarfstring_append_printf_u(v138, "though just %u bytes remain in the section. Corrupt DWARF", v22 - v100);
          v81 = dwarfstring_string(v138, "though just %u bytes remain in the section. Corrupt DWARF", v80);
          _dwarf_error_string(a1, a5, v104, v81);
          dwarfstring_destructor(v138);
          goto LABEL_121;
        }
        v25 = v132;
        v26 = v131;
        *(_DWORD *)(alloc + 4) = 34;
        ++v102;
        *(_BYTE *)(alloc + 24) = v25;
        *(_DWORD *)(alloc + 16) = a2;
        v27 = v25 + v26;
        v28 = v137;
        *(_BYTE *)(alloc + 26) = v26;
        v29 = v27 + 2;
        *(_QWORD *)(alloc + 8) = a1;
        *(_BYTE *)(alloc + 25) = v28;
        *(_QWORD *)(alloc + 32) = v100;
        v30 = s;
        v101 = &s[v28];
        *(_QWORD *)(alloc + 40) = &s[v28];
        if ( v30 + 2 >= v21 )
        {
          sub_2C610((__int64)a1, a5, 2);
          goto LABEL_121;
        }
        area_length_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a1, &v134, v30, 2, v21, a5);
        if ( area_length_ck_wrapper )
          goto LABEL_124;
        v31 = v134;
        *(_WORD *)(alloc + 28) = v134;
        v32 = s + 2;
        s += 2;
        v33 = v100 + v29;
        if ( v31 != 2 )
        {
          sub_2C570((Dwarf_Debug)a1, v117);
          v117 = nullptr;
          dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
          _dwarf_error(a1, a5, v108);
          v46 = v117;
          goto LABEL_49;
        }
        v34 = *(unsigned __int8 *)(alloc + 24);
        if ( v21 < &v32[3 * (int)v34] )
        {
          sub_2C610((__int64)a1, a5, 3 * v34);
          sub_2C570((Dwarf_Debug)a1, v117);
          v117 = nullptr;
          dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
          v46 = v117;
          goto LABEL_49;
        }
        area_length_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a1, alloc + 48, v32, v34, v21, a5);
        if ( area_length_ck_wrapper )
          goto LABEL_124;
        v35 = *(unsigned __int8 *)(alloc + 24);
        v36 = v35 + v33;
        s += v35;
        area_length_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a1, alloc + 56, s, v35, v21, a5);
        if ( area_length_ck_wrapper )
          goto LABEL_124;
        v37 = *(unsigned __int8 *)(alloc + 24);
        v38 = &s[v37];
        v39 = v37 + v36;
        s = v38;
        if ( v21 < v38 )
          goto LABEL_138;
        area_length_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a1, &v135, v38, v37, *(_QWORD *)(alloc + 40), a5);
        if ( area_length_ck_wrapper )
        {
LABEL_124:
          v8 = a2;
          v96 = area_length_ck_wrapper;
          sub_2C570((Dwarf_Debug)a1, v117);
          v117 = nullptr;
          dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
          v11 = v103;
          debug_info = v96;
          goto LABEL_51;
        }
        v40 = *(unsigned __int8 *)(alloc + 24);
        v41 = &s[v40];
        v42 = v40 + v39;
        s = v41;
        if ( v21 < v41 )
        {
LABEL_138:
          v83 = v104;
          sub_2C570((Dwarf_Debug)a1, v117);
          v117 = nullptr;
          dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
LABEL_134:
          _dwarf_error(a1, a5, v83);
          goto LABEL_52;
        }
        v43 = v135;
        if ( !v135 )
        {
          if ( !*((_BYTE *)a1 + 8361) )
          {
            dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
            v100 = v42;
            v101 = s;
            goto LABEL_45;
          }
          if ( (unsigned int)sub_2C450(
                               (Dwarf_Debug)a1,
                               alloc,
                               0,
                               (__int64)"",
                               &v136,
                               &v130,
                               13,
                               (__int64 **)&v118,
                               0,
                               a5) )
            goto LABEL_114;
          v43 = v135;
          v41 = s;
        }
        v110 = v22;
        while ( v43 )
        {
          v69 = _dwarf_check_string_valid(a1, v93, v41, *(_QWORD *)(alloc + 40), 363, a5);
          if ( v69 )
          {
            v8 = a2;
            v97 = v69;
            sub_2C570((Dwarf_Debug)a1, v117);
            v11 = v103;
            debug_info = v97;
            v117 = nullptr;
            if ( !(_DWORD)v130 )
            {
              dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
              debug_info = v97;
              v11 = v103;
            }
            goto LABEL_51;
          }
          v90 = s;
          v70 = strlen(s);
          s = &v90[v70 + 1];
          if ( (unsigned int)sub_2C450(
                               (Dwarf_Debug)a1,
                               alloc,
                               v135,
                               (__int64)v90,
                               &v136,
                               &v130,
                               13,
                               (__int64 **)&v118,
                               0,
                               a5) )
            goto LABEL_114;
          v71 = *(unsigned __int8 *)(alloc + 24);
          if ( v21 < &s[v71] )
          {
            sub_2C610((__int64)a1, a5, 2 * v71);
LABEL_114:
            sub_2C570((Dwarf_Debug)a1, v117);
            v117 = nullptr;
            if ( (_DWORD)v130 )
            {
              v46 = nullptr;
              goto LABEL_49;
            }
LABEL_122:
            dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
            goto LABEL_52;
          }
          v72 = _dwarf_read_unaligned_ck_wrapper(a1, &v135, s, v71, *(_QWORD *)(alloc + 40), a5);
          if ( v72 )
          {
            v8 = a2;
            v82 = v103;
            if ( !(_DWORD)v130 )
            {
              v92 = v72;
              dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
              v82 = v103;
              v72 = v92;
            }
            v98 = v82;
            v91 = v72;
            sub_2C570((Dwarf_Debug)a1, v117);
            debug_info = v91;
            v11 = v98;
            v117 = nullptr;
            goto LABEL_51;
          }
          v73 = *(unsigned __int8 *)(alloc + 24);
          v74 = v42 + v73 + 1;
          v41 = &s[v73];
          s = v41;
          v42 = v70 + v74;
          if ( v21 < v41 )
          {
            v83 = v104;
            if ( !(_DWORD)v130 )
              dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
            sub_2C570((Dwarf_Debug)a1, v117);
            v117 = nullptr;
            goto LABEL_134;
          }
          v43 = v135;
        }
        v22 = v110;
        if ( v101 < v41 )
        {
          _dwarf_error(a1, a5, v104);
          if ( !(_DWORD)v130 )
            dwarf_dealloc((Dwarf_Debug)a1, (void *)alloc, 0x22u);
          sub_2C570((Dwarf_Debug)a1, v117);
          v46 = nullptr;
          v117 = nullptr;
LABEL_49:
          sub_2C570((Dwarf_Debug)a1, v46);
          return 1;
        }
        v75 = *(unsigned __int8 *)(alloc + 26);
        if ( v75 + v100 + *(unsigned __int8 *)(alloc + 25) + (unsigned __int64)*(unsigned __int8 *)(alloc + 24) >= v42 )
          v42 = v75 + v100 + *(unsigned __int8 *)(alloc + 25) + (unsigned __int64)*(unsigned __int8 *)(alloc + 24);
        v100 = v42;
        s = v101;
LABEL_45:
        if ( v101 >= v21 )
        {
          v8 = a2;
          v11 = v103;
          *a4 = v136;
          break;
        }
      }
    }
  }
LABEL_9:
  if ( v8 )
    goto LABEL_12;
  v87 = v11;
  if ( (unsigned int)_dwarf_load_section(a1, a1 + 306, a5) == 1 )
    return 1;
  v11 = v87;
  if ( a1[307] )
  {
    v119 = 0;
    v120 = nullptr;
    v115 = 0;
    section = _dwarf_load_section(a1, a1 + 306, a5);
    v11 = v87;
    if ( section )
      goto LABEL_111;
    if ( a1[307] )
    {
      v49 = 0;
      v105 = nullptr;
      while ( 1 )
      {
        v111 = 0;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v112 = 0;
        v50 = dwarf_dnames_header(a1, v49, &v120, &v119, a5);
        if ( v50 == -1 )
        {
          v11 = v87;
          goto LABEL_12;
        }
        if ( v50 == 1 )
          goto LABEL_52;
        v51 = dwarf_dnames_sizes(
                (int)v120,
                (int)&v121,
                0,
                0,
                0,
                (int)&v122,
                0,
                0,
                0,
                0,
                (__int64)&v123,
                (__int64)&v111,
                (__int64)&v112,
                a5);
        if ( v51 )
          break;
        if ( v122 )
        {
          v52 = 1;
          while ( 2 )
          {
            v114 = 0;
            memset(v144, 0, sizeof(v144));
            v140 = 0;
            v113 = 0;
            v124 = 0;
            v125 = 0;
            v126 = 0;
            v127 = 0;
            v128 = 0;
            v129 = 0;
            v130 = 0;
            v131 = 0;
            v132 = 0;
            s = nullptr;
            v134 = 0;
            memset(v145, 0, sizeof(v145));
            v142 = 0;
            v135 = 0;
            v116 = 0;
            v136 = 0;
            v141 = 0;
            v143 = 0;
            v53 = dwarf_dnames_name(
                    (int)v120,
                    v52,
                    (int)&v124,
                    (int)&v125,
                    (int)&v126,
                    (int)&v127,
                    (__int64)&v129,
                    (__int64)&v128,
                    (__int64)&v113,
                    12,
                    (__int64)&v140,
                    (__int64)&v142,
                    (__int64)&v131,
                    a5);
            v54 = v120;
            if ( v53 == 1 )
            {
LABEL_123:
              dwarf_dealloc_dnames(v54);
              goto LABEL_52;
            }
            if ( v53 == -1 )
            {
              dwarf_dealloc_dnames(v120);
              v11 = v87;
              goto LABEL_12;
            }
            if ( v113 <= 0x34u )
            {
              v55 = 0x10490044002400LL;
              if ( _bittest64(&v55, v113) )
              {
                if ( v131 > 0xB )
                {
                  dwarf_dealloc_dnames(v120);
                  _dwarf_error_string(
                    a1,
                    a5,
                    484,
                    "DW_DLE_DEBUG_NAMES_ERROR: a .debug_names index attribute count is unreasonable. Corrupt data.");
                  goto LABEL_52;
                }
                v56 = dwarf_dnames_entrypool(
                        (int)v120,
                        v129,
                        (int)&v132,
                        (int)&v114,
                        (int)&s,
                        (int)&v134,
                        (__int64)&v135,
                        a5);
                v54 = v120;
                if ( v56 == 1 )
                  goto LABEL_123;
                if ( v56 == -1 )
                {
                  dwarf_dealloc_dnames(v120);
                  _dwarf_error_string(
                    a1,
                    a5,
                    484,
                    "DW_DLE_DEBUG_NAMES_ERROR: a .debug_names entry has no entrypool. Unreasonable. Corrupt data.");
                  goto LABEL_52;
                }
                v57 = dwarf_dnames_entrypool_values(
                        (int)v120,
                        v134,
                        v135,
                        12,
                        (int)&v140,
                        (int)&v142,
                        (__int64)v144,
                        (__int64)v145,
                        (__int64)&v116,
                        (__int64)&v136,
                        (__int64)&v130,
                        a5);
                if ( v57 == 1 )
                  goto LABEL_93;
                if ( v57 == -1 )
                {
                  dwarf_dealloc_dnames(v120);
                  _dwarf_error_string(
                    a1,
                    a5,
                    484,
                    "DW_DLE_DEBUG_NAMES_ERROR: a .debug_names entry entrypool value  improperly empty. Unreasonable. Corrupt data.");
                  goto LABEL_52;
                }
                if ( s )
                {
                  v58 = &v140;
                  v59 = (__int64 *)v144;
                  v60 = 0;
                  v61 = 0;
                  v62 = 0;
                  v63 = 0;
                  do
                  {
                    if ( *(_WORD *)v58 == 1 )
                    {
                      v63 = *v59;
                      v61 = 1;
                    }
                    else if ( *(_WORD *)v58 == 3 )
                    {
                      v62 = *v59;
                      v60 = 1;
                    }
                    v58 = (__int128 *)((char *)v58 + 2);
                    ++v59;
                  }
                  while ( v58 != (__int128 *)((char *)&v140 + 2 * (_QWORD)s) );
                  if ( v61 )
                  {
                    v65 = 0;
                    v64 = 0;
LABEL_83:
                    v109 = v65;
                    v106 = v64;
                    if ( v60 )
                    {
                      v137 = 0;
                      v138[0] = 0;
                      v66 = dwarf_dnames_cu_table(v120, "cu", v63, &v137, v139, v138, 0.0);
                      v67 = v106;
                      if ( v66 )
                      {
                        if ( !v109 )
                          goto LABEL_78;
                      }
                      else
                      {
                        v67 = v137;
                      }
                      if ( !v105 || v105[6] != v67 )
                      {
                        v107 = v67;
                        v115 = 0;
                        v68 = _dwarf_get_alloc(a1, 34, 1);
                        v105 = (_QWORD *)v68;
                        if ( !v68 )
                        {
                          dwarf_dealloc_dnames(v120);
                          _dwarf_error_string(a1, a5, 62, "DW_DLE_ALLOC_FAIL: allocating Dwarf_Global_Context");
                          goto LABEL_52;
                        }
                        *(_DWORD *)(v68 + 4) = 34;
                        *(_QWORD *)(v68 + 8) = a1;
                        *(_DWORD *)(v68 + 20) = 1;
                        *(_QWORD *)(v68 + 48) = v107;
                      }
                      if ( (unsigned int)sub_2C450(
                                           (Dwarf_Debug)a1,
                                           (__int64)v105,
                                           v62,
                                           v127,
                                           a4,
                                           &v115,
                                           13,
                                           (__int64 **)&v118,
                                           v113,
                                           a5) == 1 )
                      {
                        if ( !v115 )
                          dwarf_dealloc((Dwarf_Debug)a1, v105, 0x22u);
LABEL_93:
                        dwarf_dealloc_dnames(v120);
                        goto LABEL_52;
                      }
                    }
                  }
                  else if ( v116 )
                  {
                    v64 = v136;
                    v65 = 1;
                    goto LABEL_83;
                  }
                }
              }
            }
LABEL_78:
            if ( v122 < ++v52 )
              break;
            continue;
          }
        }
        dwarf_dealloc_dnames(v120);
        v49 = v119;
        v120 = nullptr;
      }
      v95 = v51;
      dwarf_dealloc_dnames(v120);
      v11 = v87;
      section = v95;
LABEL_111:
      if ( section == 1 )
      {
LABEL_52:
        v46 = v117;
        goto LABEL_49;
      }
    }
  }
LABEL_12:
  v12 = v117;
  v88 = (__int64 *)v11;
  if ( v117 )
  {
    v13 = *a4;
    v14 = _dwarf_get_alloc(a1, 15, *a4);
    if ( !v14 )
    {
      sub_2C570((Dwarf_Debug)a1, v12);
      _dwarf_error_string(a1, a5, 62, "DW_DLE_ALLOC_FAIL: Allocating a Dwarf_Global");
      v46 = v12;
      goto LABEL_49;
    }
    v15 = 0;
    v16 = v88;
    if ( v13 > 0 )
    {
      do
      {
        v17 = v12;
        *(_QWORD *)(v14 + 8 * v15) = *(_QWORD *)v12;
        v12 = *((_DWORD **)v12 + 2);
        ++v15;
        *v17 = 0;
        dwarf_dealloc((Dwarf_Debug)a1, v17, 0x1Fu);
      }
      while ( v13 != v15 );
      v16 = v88;
    }
    *v16 = v14;
  }
  return 0;
}

