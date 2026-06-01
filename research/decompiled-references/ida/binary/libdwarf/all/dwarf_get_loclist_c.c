__int64 __fastcall dwarf_get_loclist_c(struct Dwarf_Attribute_s *a1, __int64 **a2, _QWORD *a3, Dwarf_Error *a4)
{
  __int64 v5; // r13
  __int64 v6; // r15
  Dwarf_Half v8; // bp
  unsigned __int16 v9; // r12
  int v10; // eax
  int v11; // r10d
  __int64 alloc; // rax
  int v13; // r10d
  __int64 v14; // r11
  int v15; // eax
  unsigned int v16; // eax
  __int64 *v17; // r11
  unsigned int v18; // ebx
  __int16 v19; // ax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r13
  __int64 v29; // r9
  _BOOL4 v30; // r10d
  __int64 v31; // rax
  Dwarf_Error *v32; // r8
  __int64 *v33; // r13
  int v34; // edx
  __int64 v35; // rbx
  int v36; // r15d
  __int64 v37; // r14
  __int64 v38; // r11
  __int64 v39; // rbp
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  int section; // eax
  __int64 *v48; // r11
  int v49; // r10d
  unsigned __int64 v50; // rbp
  __int64 v51; // rdi
  int fission_addition_die; // eax
  int v53; // ebx
  unsigned __int64 v54; // r9
  Dwarf_Error *v55; // r14
  int v56; // edx
  __int64 v57; // rax
  __int64 *v58; // r11
  unsigned __int64 v59; // rax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // r10d
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rbp
  unsigned __int64 v67; // r9
  __int64 v68; // rdi
  __int64 v69; // r13
  __int64 v70; // rbx
  __int64 v71; // r15
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  __int64 v76; // rbx
  const char *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbx
  char v82; // al
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  int v87; // eax
  unsigned int v88; // [rsp+0h] [rbp-108h]
  __int64 *v89; // [rsp+0h] [rbp-108h]
  __int64 *v90; // [rsp+0h] [rbp-108h]
  unsigned int v92; // [rsp+20h] [rbp-E8h]
  __int64 *v93; // [rsp+20h] [rbp-E8h]
  __int64 *v94; // [rsp+20h] [rbp-E8h]
  void *v95; // [rsp+20h] [rbp-E8h]
  __int64 *v96; // [rsp+20h] [rbp-E8h]
  __int64 *v97; // [rsp+20h] [rbp-E8h]
  void *v98; // [rsp+20h] [rbp-E8h]
  unsigned __int16 v99; // [rsp+28h] [rbp-E0h]
  int v100; // [rsp+28h] [rbp-E0h]
  __int64 v101; // [rsp+28h] [rbp-E0h]
  __int64 v102; // [rsp+28h] [rbp-E0h]
  int v103; // [rsp+28h] [rbp-E0h]
  int v104; // [rsp+28h] [rbp-E0h]
  int v105; // [rsp+28h] [rbp-E0h]
  __int64 v106; // [rsp+28h] [rbp-E0h]
  int v107; // [rsp+30h] [rbp-D8h]
  unsigned int v108; // [rsp+30h] [rbp-D8h]
  Dwarf_Error *v109; // [rsp+30h] [rbp-D8h]
  Dwarf_Error *v110; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v111; // [rsp+38h] [rbp-D0h]
  __int64 *v112; // [rsp+38h] [rbp-D0h]
  __int64 v113; // [rsp+38h] [rbp-D0h]
  __int64 v114; // [rsp+38h] [rbp-D0h]
  __int64 v115; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v116; // [rsp+58h] [rbp-B0h]
  unsigned __int16 v117; // [rsp+66h] [rbp-A2h] BYREF
  int v118; // [rsp+68h] [rbp-A0h] BYREF
  int v119; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned __int64 v120; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v121[24]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v122; // [rsp+90h] [rbp-78h]
  Dwarf_Half v123[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v124; // [rsp+B0h] [rbp-58h]
  __int64 v125; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v126; // [rsp+C8h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  v118 = 1;
  v120 = 0;
  if ( !a1 )
  {
    _dwarf_error_string(0, a4, 111, "DW_DLE_ATTR_NULLNULL Dwarf_Attribute argument passed to dwarf_get_loclist_c()");
    return 1;
  }
  v123[0] = 0;
  v5 = *((_QWORD *)a1 + 1);
  if ( !v5 )
  {
    _dwarf_error(0, a4, 115);
    return 1;
  }
  v6 = *(_QWORD *)v5;
  if ( !*(_QWORD *)v5 || *(_QWORD *)v6 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: dbg argument to _dwarf_get_loclist_lle_count()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v88 = dwarf_whatform(a1, v123, a4);
  if ( v88 )
    return v88;
  v8 = v123[0];
  if ( *(_QWORD *)v6 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_loclist_c()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v92 = v123[0];
  v9 = *(_WORD *)(v5 + 18);
  v10 = sub_39530(v9, v123[0], *(_DWORD *)(v5 + 360));
  v11 = v10;
  if ( v8 == 23 || v8 == 34 )
  {
    v100 = v10;
    v24 = dwarf_global_formref_b(a1, &v120, &v118, a4);
    if ( v24 )
      return v24;
    if ( v100 != 5 )
      goto LABEL_38;
    if ( v8 == 34 )
    {
      if ( !*(_DWORD *)(v5 + 440) && *(_QWORD *)(v6 + 6640) != 1 )
      {
        v25 = *(_QWORD *)(v6 + 32);
        if ( v25 )
        {
          if ( v25 != v6 )
          {
            v26 = *(_QWORD *)(v25 + 32);
            if ( v26 )
            {
              if ( v25 == v26 )
              {
                v6 = *(_QWORD *)(v6 + 32);
                if ( *(_QWORD *)v6 != 3959286781LL )
                {
                  _dwarf_error_string(
                    0,
                    a4,
                    81,
                    "DW_DLE_DBG_NULL: dbg argument to dwarf_loclists_get_lle_head() via attribute(sec)either null or it c"
                    "ontainsa stale Dwarf_Debug pointer");
                  return 1;
                }
              }
            }
          }
        }
      }
      goto LABEL_37;
    }
  }
  else if ( v10 != 5 )
  {
    goto LABEL_13;
  }
  v44 = *(_QWORD *)(v6 + 3384);
  if ( !v44 || v120 >= v44 )
  {
    v45 = *(_QWORD *)(v6 + 32);
    if ( v45 )
    {
      if ( v45 != v6 )
      {
        v46 = *(_QWORD *)(v45 + 32);
        if ( v46 )
        {
          if ( v45 == v46 )
          {
            v6 = *(_QWORD *)(v6 + 32);
            if ( *(_QWORD *)v6 != 3959286781LL )
            {
              _dwarf_error_string(
                0,
                a4,
                81,
                "DW_DLE_DBG_NULL: dbg argument to dwarf_loclists_get_lle_head() via attribute(secb)either null or it cont"
                "ainsa stale Dwarf_Debug pointer");
              return 1;
            }
          }
        }
      }
    }
  }
LABEL_37:
  if ( (unsigned int)_dwarf_load_section(v6, v6 + 3376, a4) == 1 )
    return 1;
LABEL_38:
  v9 = *(_WORD *)(v5 + 18);
  v11 = sub_39530(v9, v92, *(_DWORD *)(v5 + 360));
LABEL_13:
  v99 = *(_WORD *)a1;
  if ( v11 == 99 )
  {
    *(_QWORD *)v121 = "<unknownform>";
    *(_QWORD *)&v121[8] = "<unknown attribute>";
    dwarfstring_constructor(v123);
    dwarf_get_FORM_name(v92, (const char **)v121);
    dwarf_get_AT_name(v99, (const char **)&v121[8]);
    dwarfstring_append_printf_u(v123, "DW_DLE_LOC_EXPR_BAD: For Compilation Unit version %u", v9);
    dwarfstring_append_printf_u(v123, ", attribute 0x%x (", v99);
    dwarfstring_append();
    dwarfstring_append_printf_u(v123, ") form 0x%x (", v8);
    dwarfstring_append();
    dwarfstring_append();
    dwarfstring_append();
    v43 = dwarfstring_string(v123, " we don't understand the location");
    _dwarf_error_string(v6, a4, 128, v43);
    dwarfstring_destructor(v123);
    return 1;
  }
  v107 = v11;
  v111 = *(_BYTE *)(v5 + 32);
  alloc = _dwarf_get_alloc(v6, 59, 1);
  v13 = v107;
  v14 = alloc;
  if ( !alloc )
  {
    _dwarf_error(v6, a4, 62);
    return 1;
  }
  *(_WORD *)(alloc + 20) = v9;
  *(_WORD *)(alloc + 40) = v107;
  *(_QWORD *)(alloc + 48) = v6;
  *(_DWORD *)(alloc + 24) = v111;
  v108 = v111;
  *(_DWORD *)(alloc + 16) = v99 | (v92 << 16);
  v15 = *(unsigned __int8 *)(v5 + 16);
  *(_QWORD *)(v14 + 32) = v5;
  *(_DWORD *)(v14 + 28) = v15;
  *(_QWORD *)(v14 + 56) = &dword_ADAB4;
  *(_DWORD *)(v14 + 108) = *(_DWORD *)(v5 + 440);
  *(_QWORD *)(v14 + 112) = *(_QWORD *)(v5 + 424);
  *(_DWORD *)(v14 + 120) = *(_DWORD *)(v5 + 344);
  *(_QWORD *)(v14 + 128) = *(_QWORD *)(v5 + 392);
  *(_QWORD *)(v14 + 144) = *(_QWORD *)(v5 + 384);
  *(_DWORD *)(v14 + 136) = *(_DWORD *)(v5 + 372);
  if ( (unsigned int)(v13 - 1) > 1 )
  {
    if ( v13 )
    {
      v101 = v14;
      v27 = _dwarf_loclists_fill_in_lle_head(v6, a1, v92, v120, v14, a4);
      v17 = (__int64 *)v101;
      v18 = v27;
      if ( !v27 )
      {
        v28 = *(_QWORD *)(v101 + 8);
        v29 = *(_QWORD *)(v101 + 128);
        v30 = *(_DWORD *)(v101 + 120) == 0;
        if ( !v28 )
          goto LABEL_24;
        v102 = *(_QWORD *)(v101 + 32);
        v31 = v28;
        v32 = a4;
        v33 = v17;
        v95 = (void *)v6;
        v34 = 0;
        v35 = 0;
        v36 = v30;
        v37 = v29;
        v38 = v31;
        while ( 1 )
        {
          v39 = *v33 + 152 * v35;
          switch ( *(_BYTE *)(v39 + 2) )
          {
            case 0:
            case 5:
              goto LABEL_46;
            case 1:
              *(_QWORD *)v123 = 0;
              if ( v34 )
              {
                *(_DWORD *)(v39 + 4) = 1;
                *(_QWORD *)(v39 + 32) = 0;
LABEL_58:
                v36 = 1;
                goto LABEL_59;
              }
              v113 = v38;
              v109 = v32;
              v60 = _dwarf_look_in_local_and_tied_by_index(v95, v102, *(_QWORD *)(v39 + 24), v123, v32);
              v32 = v109;
              v38 = v113;
              v36 = v60;
              if ( v60 )
              {
                *(_DWORD *)(v39 + 4) = 1;
                *(_QWORD *)(v39 + 32) = 0;
                if ( v60 == 1 && v109 )
                {
                  dwarf_dealloc_error(v95, *v109);
                  v32 = v109;
                  v38 = v113;
                  *v109 = nullptr;
                }
                goto LABEL_58;
              }
              v37 = *(_QWORD *)v123;
              *(_QWORD *)(v39 + 32) = *(_QWORD *)v123;
LABEL_59:
              v34 = v36;
LABEL_46:
              if ( v38 == ++v35 )
              {
                v17 = v33;
                goto LABEL_24;
              }
              break;
            case 2:
              *(_QWORD *)v123 = 0;
              if ( v34 )
              {
                *(_QWORD *)(v39 + 32) = 0;
LABEL_55:
                *(_DWORD *)(v39 + 4) = 1;
                *(_QWORD *)(v39 + 48) = 0;
                goto LABEL_45;
              }
              v114 = v38;
              v110 = v32;
              v62 = _dwarf_look_in_local_and_tied_by_index(v95, v102, *(_QWORD *)(v39 + 24), v123, v32);
              v32 = v110;
              v38 = v114;
              if ( v62 )
              {
                *(_DWORD *)(v39 + 4) = 1;
                *(_QWORD *)(v39 + 32) = 0;
                if ( v62 != 1 || !v110 )
                  goto LABEL_55;
                dwarf_dealloc_error(v95, *v110);
                v32 = v110;
                v38 = v114;
                *v110 = nullptr;
                *(_DWORD *)(v39 + 4) = 1;
                *(_QWORD *)(v39 + 48) = 0;
                goto LABEL_45;
              }
              v86 = *(_QWORD *)(v39 + 40);
              *(_QWORD *)(v39 + 32) = *(_QWORD *)v123;
              v87 = _dwarf_look_in_local_and_tied_by_index(v95, v102, v86, v123, v110);
              v32 = v110;
              v38 = v114;
              v34 = v87;
              if ( v87 )
              {
                *(_DWORD *)(v39 + 4) = 1;
                *(_QWORD *)(v39 + 48) = 0;
                if ( v87 == 1 )
                {
LABEL_107:
                  if ( v32 )
                  {
                    dwarf_dealloc_error(v95, *v32);
                    v32 = v110;
                    v38 = v114;
                    *v110 = nullptr;
                  }
                }
LABEL_45:
                v34 = 1;
                goto LABEL_46;
              }
              *(_QWORD *)(v39 + 48) = *(_QWORD *)v123;
              goto LABEL_46;
            case 3:
              *(_QWORD *)v123 = 0;
              if ( v34 )
              {
                *(_DWORD *)(v39 + 4) = 1;
                *(_QWORD *)(v39 + 32) = 0;
                goto LABEL_45;
              }
              v114 = v38;
              v110 = v32;
              v61 = _dwarf_look_in_local_and_tied_by_index(v95, v102, *(_QWORD *)(v39 + 24), v123, v32);
              v32 = v110;
              v38 = v114;
              v34 = v61;
              if ( !v61 )
              {
                v85 = *(_QWORD *)v123;
                *(_QWORD *)(v39 + 32) = *(_QWORD *)v123;
                *(_QWORD *)(v39 + 48) = *(_QWORD *)(v39 + 40) + v85;
                goto LABEL_46;
              }
              *(_DWORD *)(v39 + 4) = 1;
              *(_QWORD *)(v39 + 32) = 0;
              if ( v61 != 1 )
                goto LABEL_45;
              goto LABEL_107;
            case 4:
              if ( v36 )
              {
                *(_DWORD *)(v39 + 4) = 1;
                *(_QWORD *)(v39 + 32) = 0;
                *(_QWORD *)(v39 + 48) = 0;
              }
              else
              {
                *(_QWORD *)(v39 + 32) = v37 + *(_QWORD *)(v39 + 24);
                *(_QWORD *)(v39 + 48) = v37 + *(_QWORD *)(v39 + 40);
              }
              goto LABEL_46;
            case 6:
              v37 = *(_QWORD *)(v39 + 24);
              v36 = 0;
              *(_QWORD *)(v39 + 32) = v37;
              *(_QWORD *)(v39 + 48) = v37;
              goto LABEL_46;
            case 7:
              *(_QWORD *)(v39 + 32) = *(_QWORD *)(v39 + 24);
              *(_QWORD *)(v39 + 48) = *(_QWORD *)(v39 + 40);
              goto LABEL_46;
            case 8:
              v40 = *(_QWORD *)(v39 + 24);
              *(_QWORD *)(v39 + 32) = v40;
              *(_QWORD *)(v39 + 48) = *(_QWORD *)(v39 + 40) + v40;
              goto LABEL_46;
            default:
              v55 = v32;
              dwarfstring_constructor(v123);
              dwarfstring_append_printf_u(
                v123,
                "DW_DLE_LOCLISTS_ERROR: improper DW_LLE code of 0x%x is unknown. DWARF5 loclists error",
                *(unsigned __int8 *)(v39 + 2));
              v57 = dwarfstring_string(
                      v123,
                      "DW_DLE_LOCLISTS_ERROR: improper DW_LLE code of 0x%x is unknown. DWARF5 loclists error",
                      v56);
              _dwarf_error_string(v95, v55, 469, v57);
              dwarfstring_destructor(v123);
              v58 = v33;
              goto LABEL_89;
          }
        }
      }
      goto LABEL_61;
    }
    v93 = (__int64 *)v14;
    v125 = 0;
    *(_OWORD *)v123 = 0;
    v124 = 0;
    if ( v8 == 24 )
    {
      v41 = dwarf_formexprloc(a1, (Dwarf_Unsigned *)v123, (Dwarf_Ptr *)&v123[4], a4);
      v17 = v93;
      v18 = v41;
      if ( !v41 )
      {
        LOWORD(v124) = *((_WORD *)v93 + 20);
        v42 = *(_QWORD *)&v123[4] - *(_QWORD *)(v6 + 360);
        v125 = 0;
        *((_QWORD *)&v124 + 1) = v42;
LABEL_20:
        v20 = 0xFFFFFFFFLL;
        v94 = v17;
        if ( v111 == 8 )
          v20 = -1;
        v21 = _dwarf_get_alloc(v6, 58, 1);
        if ( v21 )
        {
          *(_QWORD *)(v21 + 16) = &dword_ADAB4;
          *v94 = v21;
          v22 = *((unsigned __int16 *)v94 + 12);
          v94[1] = 1;
          v23 = _dwarf_fill_in_locdesc_op_c(
                  (Dwarf_Debug)v6,
                  0,
                  (__int64)v94,
                  (__int64)v123,
                  v22,
                  *(unsigned __int8 *)(v5 + 16),
                  *(unsigned __int16 *)(v5 + 18),
                  0,
                  v20,
                  0,
                  (__int64)a4);
          v17 = v94;
          v18 = v23;
          v94[12] += *(_QWORD *)v123;
          if ( !v23 )
            goto LABEL_24;
          dwarf_dealloc((Dwarf_Debug)v6, (void *)*v94, 0x3Au);
          v17 = v94;
          *v94 = 0;
          v94[1] = 0;
        }
        else
        {
          _dwarf_error(v6, a4, 62);
          v17 = v94;
          v18 = 1;
        }
      }
    }
    else
    {
      *(_OWORD *)&v121[8] = 0;
      v122 = 0;
      v16 = _dwarf_formblock_internal(v6, a1, v5, &v121[8], a4);
      v17 = v93;
      v18 = v16;
      if ( !v16 )
      {
        *(_QWORD *)v123 = *(_QWORD *)&v121[8];
        *(_QWORD *)&v123[4] = *(_QWORD *)&v121[16];
        v19 = *((_WORD *)v93 + 20);
        v125 = 0;
        LOWORD(v124) = v19;
        *((_QWORD *)&v124 + 1) = *((_QWORD *)&v122 + 1);
        goto LABEL_20;
      }
    }
LABEL_61:
    dwarf_dealloc_loc_head_c(v17);
    return v18;
  }
  v96 = (__int64 *)v14;
  v103 = v13;
  *(_QWORD *)v121 = 0;
  section = dwarf_global_formref(a1, (Dwarf_Off *)v121, a4);
  v48 = v96;
  if ( section )
  {
LABEL_86:
    v88 = section;
    dwarf_dealloc_loc_head_c(v48);
    return v88;
  }
  v49 = v103;
  if ( *(_QWORD *)(v6 + 1520) )
  {
    v50 = *(_QWORD *)(v6 + 1528);
  }
  else
  {
    section = _dwarf_load_section(v6, v6 + 1520, a4);
    v48 = v96;
    if ( section )
      goto LABEL_86;
    v50 = *(_QWORD *)(v6 + 1528);
    v49 = v103;
    if ( !v50 )
      goto LABEL_161;
  }
  if ( *(_QWORD *)v121 >= v50 )
  {
    v89 = v48;
    _dwarf_error(v6, a4, 356);
    v48 = v89;
LABEL_100:
    section = 1;
    goto LABEL_86;
  }
  v51 = *((_QWORD *)a1 + 5);
  v97 = v48;
  v104 = v49;
  *(_QWORD *)&v121[8] = 0;
  *(_QWORD *)v123 = 0;
  fission_addition_die = _dwarf_get_fission_addition_die(v51, 5, &v121[8], v123, a4);
  v48 = v97;
  v53 = fission_addition_die;
  if ( fission_addition_die )
  {
LABEL_93:
    section = v53;
    goto LABEL_86;
  }
  if ( *(_QWORD *)&v121[8] >= v50 || (v116 = *(_QWORD *)v121 + *(_QWORD *)&v121[8], *(_QWORD *)v121 = v116, v116 >= v50) )
  {
    _dwarf_error(v6, a4, 356);
    v48 = v97;
    v53 = 1;
    goto LABEL_93;
  }
  if ( v104 != 2 )
  {
    v54 = v116;
    while ( 1 )
    {
      *(_QWORD *)v121 = 0;
      LOWORD(v119) = 254;
      *(_QWORD *)&v121[8] = 0;
      section = sub_39C90(v6, (__int64)v123, v121, &v121[8], (__int16 *)&v119, v54, v111, (__int64)a4);
      if ( section )
      {
        v48 = v97;
        goto LABEL_86;
      }
      v54 = *(_QWORD *)v123 + *((_QWORD *)&v124 + 1);
      if ( *(_OWORD *)v121 == 0 )
        break;
      ++v53;
    }
    v63 = v104;
    v48 = v97;
    if ( v53 )
      goto LABEL_115;
LABEL_161:
    section = -1;
    goto LABEL_86;
  }
  v59 = v116;
  v112 = v97;
  while ( 1 )
  {
    v119 = 0;
    *(_QWORD *)v121 = 0;
    *(_QWORD *)&v121[8] = 0;
    v117 = 0;
    section = sub_395B0(v6, (__int64)v123, (__int64 *)v121, &v121[8], &v119, &v117, v59, v108, 2, (__int64)a4);
    if ( section )
    {
LABEL_98:
      v48 = v112;
      goto LABEL_86;
    }
    ++v53;
    if ( v119 )
      break;
    v59 = *(_QWORD *)v123 + *((_QWORD *)&v124 + 1);
  }
  v63 = 2;
  v48 = v97;
  if ( !v53 )
    goto LABEL_161;
LABEL_115:
  v112 = v48;
  v105 = v63;
  v115 = v53;
  v64 = _dwarf_get_alloc(v6, 58, v53);
  if ( !v64 )
  {
    _dwarf_error(v6, a4, 62);
    v48 = v112;
    goto LABEL_100;
  }
  *(_QWORD *)(v64 + 16) = &dword_ADAB4;
  v65 = 0;
  v66 = v112[4];
  *v112 = v64;
  v112[1] = v115;
  v112[20] = v116;
  v67 = v116;
  do
  {
    v119 = 0;
    v117 = 0;
    *(_QWORD *)v121 = 0;
    *(_QWORD *)&v121[8] = 0;
    v125 = 0;
    *(_OWORD *)v123 = 0;
    v124 = 0;
    if ( v105 == 2 )
      section = sub_395B0(v6, (__int64)v123, (__int64 *)v121, &v121[8], &v119, &v117, v67, v108, 2, (__int64)a4);
    else
      section = sub_39C90(v6, (__int64)v123, v121, &v121[8], (__int16 *)&v117, v67, v108, (__int64)a4);
    if ( section )
      goto LABEL_98;
    section = _dwarf_fill_in_locdesc_op_c(
                (Dwarf_Debug)v6,
                v65,
                (__int64)v112,
                (__int64)v123,
                v108,
                *(unsigned __int8 *)(v66 + 16),
                *(unsigned __int16 *)(v66 + 18),
                *(__int64 *)v121,
                *(__int64 *)&v121[8],
                v117,
                (__int64)a4);
    if ( section )
      goto LABEL_98;
    ++v65;
    v67 = *((_QWORD *)&v124 + 1) + *(_QWORD *)v123;
  }
  while ( v115 != v65 );
  v17 = v112;
  v68 = v112[16];
  v69 = v112[1];
  v112[12] = v67 - v116;
  if ( v105 != 1 )
  {
    if ( v69 )
    {
      v98 = (void *)v6;
      v70 = 0;
      v106 = v112[4];
      do
      {
        v71 = *v112 + 152 * v70;
        switch ( *(_BYTE *)(v71 + 2) )
        {
          case 0:
            break;
          case 1:
            *(_QWORD *)v123 = 0;
            v75 = _dwarf_look_in_local_and_tied_by_index(v98, v106, *(_QWORD *)(v71 + 40), v123, a4);
            if ( v75 )
            {
              *(_DWORD *)(v71 + 4) = 1;
              *(_QWORD *)(v71 + 32) = 0;
              *(_QWORD *)(v71 + 48) = 0;
              if ( v75 == 1 )
                goto LABEL_132;
            }
            else
            {
              v83 = *(_QWORD *)v123;
              *(_QWORD *)(v71 + 32) = *(_QWORD *)v123;
              *(_QWORD *)(v71 + 48) = v83;
            }
            break;
          case 2:
            *(_QWORD *)v123 = 0;
            v73 = _dwarf_look_in_local_and_tied_by_index(v98, v106, *(_QWORD *)(v71 + 24), v123, a4);
            if ( v73 )
            {
              *(_DWORD *)(v71 + 4) = 1;
              *(_QWORD *)(v71 + 32) = 0;
              if ( v73 == 1 && a4 )
              {
                dwarf_dealloc_error(v98, *a4);
                *a4 = nullptr;
              }
            }
            else
            {
              *(_QWORD *)(v71 + 32) = *(_QWORD *)v123;
            }
            v74 = _dwarf_look_in_local_and_tied_by_index(v98, v106, *(_QWORD *)(v71 + 24), v123, a4);
            if ( v74 )
            {
              *(_DWORD *)(v71 + 4) = 1;
              *(_QWORD *)(v71 + 48) = 0;
              if ( v74 == 1 )
                goto LABEL_132;
            }
            else
            {
              *(_QWORD *)(v71 + 48) = *(_QWORD *)v123;
            }
            break;
          case 3:
            *(_QWORD *)v123 = 0;
            v72 = _dwarf_look_in_local_and_tied_by_index(v98, v106, *(_QWORD *)(v71 + 24), v123, a4);
            if ( v72 )
            {
              *(_DWORD *)(v71 + 4) = 1;
              *(_QWORD *)(v71 + 32) = 0;
              if ( v72 == 1 )
              {
LABEL_132:
                if ( a4 )
                {
                  dwarf_dealloc_error(v98, *a4);
                  *a4 = nullptr;
                }
              }
            }
            else
            {
              v84 = *(_QWORD *)v123;
              *(_QWORD *)(v71 + 32) = *(_QWORD *)v123;
              *(_QWORD *)(v71 + 48) = *(_QWORD *)(v71 + 40) + v84;
            }
            break;
          case 4:
            *(_QWORD *)(v71 + 32) = v68 + *(_QWORD *)(v71 + 24);
            *(_QWORD *)(v71 + 48) = v68 + *(_QWORD *)(v71 + 40);
            break;
          default:
            v90 = v112;
            v76 = *v112 + 152 * v70;
            v6 = (__int64)v98;
            dwarfstring_constructor(v123);
            v77 = "DW_DLE_LOCLISTS_ERROR: improper LLEX code of 0x%x is unknown. GNU LLEX dwo loclists error";
            dwarfstring_append_printf_u(
              v123,
              "DW_DLE_LOCLISTS_ERROR: improper LLEX code of 0x%x is unknown. GNU LLEX dwo loclists error",
              *(unsigned __int8 *)(v76 + 2));
            goto LABEL_145;
        }
        ++v70;
      }
      while ( v70 != v69 );
      v17 = v112;
    }
    goto LABEL_24;
  }
  v79 = 0;
  v80 = 0;
  if ( !v69 )
  {
LABEL_24:
    *a2 = v17;
    *a3 = v17[1];
    return v88;
  }
  while ( 1 )
  {
    v81 = v79 + *v112;
    v82 = *(_BYTE *)(v81 + 2);
    if ( v82 == 4 )
    {
      *(_QWORD *)(v81 + 32) = v68 + *(_QWORD *)(v81 + 24);
      *(_QWORD *)(v81 + 48) = v68 + *(_QWORD *)(v81 + 40);
      goto LABEL_152;
    }
    if ( v82 == 6 )
    {
      v68 = *(_QWORD *)(v81 + 40);
      *(_QWORD *)(v81 + 32) = v68;
      *(_QWORD *)(v81 + 48) = v68;
      goto LABEL_152;
    }
    if ( v82 )
      break;
LABEL_152:
    ++v80;
    v79 += 152;
    if ( v80 == v69 )
      goto LABEL_24;
  }
  v90 = v112;
  dwarfstring_constructor(v123);
  v77 = "DW_DLE_LOCLISTS_ERROR: improper synthesized LLE code of 0x%x is unknown. In standard DWARF3/4 loclist";
  dwarfstring_append_printf_u(
    v123,
    "DW_DLE_LOCLISTS_ERROR: improper synthesized LLE code of 0x%x is unknown. In standard DWARF3/4 loclist",
    *(unsigned __int8 *)(v81 + 2));
LABEL_145:
  v78 = dwarfstring_string(v123, v77);
  _dwarf_error_string(v6, a4, 469, v78);
  dwarfstring_destructor(v123);
  v58 = v90;
LABEL_89:
  dwarf_dealloc_loc_head_c(v58);
  return 1;
}

