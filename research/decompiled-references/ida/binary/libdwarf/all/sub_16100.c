__int64 __fastcall sub_16100(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, __int64 a6)
{
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v11; // r11
  __int64 v12; // r15
  __int64 v13; // rax
  _BYTE *v14; // rdi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  _BYTE *v17; // r15
  __int64 result; // rax
  unsigned __int64 v19; // r10
  _BYTE *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 alloc; // rax
  _QWORD *v25; // r15
  __int64 v26; // rbp
  int abbrev_for_code; // eax
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rbp
  __int64 v35; // rax
  unsigned int v36; // eax
  int v37; // edx
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  int v42; // [rsp+8h] [rbp-140h]
  unsigned int v43; // [rsp+8h] [rbp-140h]
  __int64 v44; // [rsp+10h] [rbp-138h]
  unsigned __int64 v45; // [rsp+10h] [rbp-138h]
  __int64 v46; // [rsp+10h] [rbp-138h]
  unsigned __int64 v47; // [rsp+10h] [rbp-138h]
  int v48; // [rsp+10h] [rbp-138h]
  int v49; // [rsp+3Ch] [rbp-10Ch] BYREF
  _BYTE *v50; // [rsp+40h] [rbp-108h] BYREF
  __int64 v51; // [rsp+48h] [rbp-100h] BYREF
  __int64 v52; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE *v53; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD v54[4]; // [rsp+60h] [rbp-E8h] BYREF
  char v55[136]; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v56; // [rsp+108h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v50 = nullptr;
  v51 = 0;
  v52 = 0;
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error(0, a6, 81);
    return 1;
  }
  v8 = a2;
  v9 = a3;
  if ( a4 )
    v11 = a1[45];
  else
    v11 = a1[74];
  if ( !v11 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
  {
    v54[0] = 0;
    if ( a3 )
    {
      v21 = *(_QWORD *)(a3 + 72);
      v46 = v11;
      result = _dwarf_length_of_cu_header(a1, v21, a4, v54, a6);
      if ( (_DWORD)result )
        return result;
      v50 = (_BYTE *)(v46 + v21 + v54[0]);
      v22 = _dwarf_calculate_info_section_end_ptr(v9);
      v23 = v54[0] + v21;
      *(_DWORD *)(v9 + 364) = 1;
      *(_QWORD *)(v9 + 600) = v23;
      v19 = v22;
LABEL_38:
      v47 = v19;
      if ( (unsigned __int64)v50 >= v19 || !*v50 )
        return 0xFFFFFFFFLL;
      alloc = _dwarf_get_alloc(a1, 8, 1);
      v25 = (_QWORD *)alloc;
      if ( !alloc )
      {
        _dwarf_error(a1, a6, 62);
        return 1;
      }
      *(_DWORD *)(alloc + 32) = a4;
      *(_QWORD *)alloc = v50;
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(alloc + 16) = v9;
      if ( (unsigned int)_dwarf_leb128_uword_wrapper(a1, &v50, v47, &v51, a6) != 1 )
      {
        if ( v47 < (unsigned __int64)v50 )
        {
          dwarf_dealloc_die(v25);
          _dwarf_error(a1, a6, 109);
          return 1;
        }
        v26 = v51;
        if ( !v51 )
        {
          dwarf_dealloc_die(v25);
          return 0xFFFFFFFFLL;
        }
        v25[3] = v51;
        abbrev_for_code = _dwarf_get_abbrev_for_code(v25[2], v26, v25 + 1, &v52, a6);
        if ( abbrev_for_code != 1 )
        {
          if ( abbrev_for_code == -1 )
          {
            v55[0] = 0;
            dwarfstring_constructor_static(v54, v55, 130);
            dwarf_dealloc_die(v25);
            dwarfstring_append_printf_u(
              v54,
              "DW_DLE_DIE_ABBREV_LIST_NULL: There is no abbrev present for code %u in this compilation unit. ",
              v26);
            dwarfstring_append_printf_u(v54, "The highest known code in any compilation unit is %u .", v52);
            v40 = dwarfstring_string(v54, "The highest known code in any compilation unit is %u .", v39);
            _dwarf_error_string(a1, a6, 151, v40);
            dwarfstring_destructor(v54);
          }
          else
          {
            v28 = v25[1];
            if ( !*(_QWORD *)(v28 + 72) )
            {
              v34 = *(_QWORD *)(v28 + 40);
              v35 = _dwarf_calculate_abbrev_section_end_ptr(v25[2]);
              v36 = _dwarf_fill_in_attr_form_abtable(v25[2], v34, v35, v25[1], a6);
              if ( v36 )
              {
                v43 = v36;
                dwarf_dealloc_die(v25);
                return v43;
              }
            }
            if ( v8
              || (unsigned __int16)(*(_WORD *)(v25[1] + 8LL) - 17) <= 0x39u
              && (v33 = 0x201080000000001LL, _bittest64(&v33, (unsigned int)*(unsigned __int16 *)(v25[1] + 8LL) - 17)) )
            {
              *a5 = v25;
              return 0;
            }
            dwarf_dealloc_die(v25);
            _dwarf_error(a1, a6, 105);
          }
          return 1;
        }
      }
      dwarf_dealloc_die(v25);
    }
    else
    {
      _dwarf_error_string(a1, a6, 103, "DW_DLE_DBG_NO_CU_CONTEXT: Setting up a new CU failed loading root die");
    }
    return 1;
  }
  v9 = *(_QWORD *)(a2 + 16);
  v49 = 0;
  if ( !v9 )
  {
    _dwarf_error(0, a6, 104);
    return 1;
  }
  if ( !*(_QWORD *)v9 || **(_QWORD **)v9 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v44 = v11;
  v50 = *(_BYTE **)a2;
  if ( !*v50 )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD *)(v9 + 72);
  v13 = _dwarf_calculate_info_section_end_ptr(v9);
  v14 = v50;
  if ( !*v50 )
    return 0xFFFFFFFFLL;
  v15 = v13;
  v16 = v44 + v12;
  v17 = nullptr;
  v45 = v16;
  while ( 1 )
  {
LABEL_13:
    v53 = nullptr;
    result = sub_15AD0((unsigned __int64)v14, (__int64 *)v9, v15, v45, 1, &v49, (unsigned __int64 *)&v53, a6);
    if ( (_DWORD)result )
      return result;
    if ( v53 == v50 || v53 < v50 )
    {
      v42 = (int)v53;
      dwarfstring_constructor(v54);
      dwarfstring_append_printf_u(v54, "DW_DLE_NEXT_DIE_LOW_ERROR: Somehow the next die pointer 0x%x", v42);
      dwarfstring_append_printf_u(
        v54,
        " points before the current die pointer 0x%x so an overflow of some sort happened",
        (_DWORD)v50);
      v30 = dwarfstring_string(
              v54,
              " points before the current die pointer 0x%x so an overflow of some sort happened",
              v29);
      v31 = 284;
      v32 = v30;
LABEL_57:
      _dwarf_error_string(a1, a6, v31, v32);
      dwarfstring_destructor(v54);
      return 1;
    }
    if ( v15 < (unsigned __int64)v53 )
    {
      v48 = (int)v53;
      dwarfstring_constructor(v54);
      dwarfstring_append_printf_u(v54, "DW_DLE_NEXT_DIE_PAST_END: the next DIE at 0x%x", v48);
      dwarfstring_append_printf_u(v54, " would be past  the end of the section (0x%x), which is an error.", v15);
      v38 = dwarfstring_string(v54, " would be past  the end of the section (0x%x), which is an error.", v37);
      v31 = 252;
      v32 = v38;
      goto LABEL_57;
    }
    v50 = v53;
    if ( (unsigned __int64)v53 >= v15 )
      break;
    if ( *v53 )
    {
      v14 = v53;
      if ( v49 )
        ++v17;
      goto LABEL_22;
    }
    if ( !v49 )
      break;
    v14 = v53 + 1;
    v49 = 0;
    v50 = v53 + 1;
    if ( (_BYTE *)v15 == v53 + 1 || !v53[1] )
      break;
LABEL_22:
    if ( !v17 )
      goto LABEL_23;
  }
  if ( !v17 )
  {
LABEL_23:
    v19 = v15;
    v8 = a2;
    goto LABEL_38;
  }
  v14 = v50;
  v20 = &v50[(_QWORD)v17 - v15];
  while ( v17 != v20 )
  {
    if ( *v14 )
      goto LABEL_13;
    v50 = ++v14;
    if ( !--v17 )
      goto LABEL_23;
  }
  return 0xFFFFFFFFLL;
}

