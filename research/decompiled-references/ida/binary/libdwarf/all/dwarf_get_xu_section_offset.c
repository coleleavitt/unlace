__int64 __fastcall dwarf_get_xu_section_offset(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // r15
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r10
  unsigned __int64 *v22; // rcx
  unsigned __int64 *v23; // r8
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const char *v28; // rsi
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // r12
  unsigned __int64 v34; // rbx
  int section; // eax
  unsigned __int64 v36; // rax
  const char *v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+8h] [rbp-80h]
  unsigned __int64 v40; // [rsp+8h] [rbp-80h]
  int v41; // [rsp+8h] [rbp-80h]
  _QWORD v44[13]; // [rsp+20h] [rbp-68h] BYREF

  v44[5] = __readfsqword(0x28u);
  if ( !a1 )
  {
    _dwarf_error_string(0, a6, 268, "DW_DLE_XU_TYPE_ARG_ERROR: Dwarf_Xu_Index_Header pointer is null");
    return 1;
  }
  v7 = *a1;
  if ( !*a1 || *(_QWORD *)v7 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_xu_section_offset()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v9 = a1[4];
  if ( v9 < a3 )
  {
    dwarfstring_constructor(v44);
    dwarfstring_append_printf_u(
      v44,
      "DW_DLE_XU_TYPE_ARG_ERROR:  dwarf_get_xu_section_offset was passed an invalid cu/tu column index of %u",
      a3);
    v25 = dwarfstring_string(
            v44,
            "DW_DLE_XU_TYPE_ARG_ERROR:  dwarf_get_xu_section_offset was passed an invalid cu/tu column index of %u",
            v24);
    v26 = 268;
    v27 = v25;
LABEL_17:
    _dwarf_error_string(v7, a6, v26, v27);
    dwarfstring_destructor(v44);
    return 1;
  }
  if ( !a2 )
  {
    dwarfstring_constructor(v44);
    v28 = "ERROR: DW_DLE_ERRONEOUS_XU_INDEX_SECTION The row index passed to dwarf_get_xu_section_offset() is zero, which "
          "is not a valid row in  the offset-table or the size table as we think of them as 1-origin.";
    dwarfstring_append();
LABEL_20:
    v29 = dwarfstring_string(v44, v28);
    v26 = 270;
    v27 = v29;
    goto LABEL_17;
  }
  if ( (unsigned __int64)(a2 - 1) >= a1[5] )
  {
    dwarfstring_constructor(v44);
    dwarfstring_append_printf_u(v44, "ERROR: DW_DLE_XU_NAME_COL_ERROR as the row index of %u ", a2 - 1);
    dwarfstring_append_printf_u(v44, " is too high. Valid units must be < %u ", a1[5]);
    v31 = dwarfstring_string(v44, " is too high. Valid units must be < %u ", v30);
    _dwarf_error_string(v7, a6, 270, v31);
    dwarfstring_destructor(v44);
    return 1;
  }
  if ( v9 == a3 )
  {
    dwarfstring_constructor(v44);
    dwarfstring_append_printf_u(v44, "ERROR: DW_DLE_XU_NAME_COL_ERROR as the column index of %u ", v9);
    v28 = " is too high. Valid column indexes  must be < %u ";
    dwarfstring_append_printf_u(v44, " is too high. Valid column indexes  must be < %u ", v9);
    goto LABEL_20;
  }
  v11 = a1[2];
  v12 = 4 * a3;
  v13 = 4 * v9 * (a2 - 1);
  if ( v13 >= v11 )
  {
    _dwarf_error_string(*a1, a6, 270, "DW_DLE_XU_NAME_COL_ERROR row offset past end of section.");
    return 1;
  }
  if ( v12 >= v11 )
  {
    _dwarf_error_string(*a1, a6, 270, "DW_DLE_XU_NAME_COL_ERROR entry offset past end of section.");
    return 1;
  }
  v14 = a1[10];
  v15 = a1[1];
  v44[0] = 0;
  v16 = v15 + v11;
  v17 = v15 + v13 + v12 + v14;
  v18 = v15 + a1[11] + v12 + v13;
  if ( v16 < v17 + 4
    || (v39 = v16,
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v7 + 8296))(v44, v17, 4),
        v19 = v44[0],
        v44[0] = 0,
        v39 < v18 + 4) )
  {
    _dwarf_error_string(v7, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  v40 = v19;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v7 + 8296))(v44, v18, 4);
  v20 = v44[0];
  v21 = v40;
  v22 = a4;
  v23 = a5;
  if ( !v44[0] )
  {
    *a4 = v40;
    *a5 = 0;
    return 0;
  }
  if ( a3 >= a1[4] )
  {
    dwarfstring_constructor(v44);
    dwarfstring_append_printf_u(v44, "ERROR: DW_DLE_XU_NAME_COL_ERROR as the column index of %u ", a3);
    v37 = " is too high. There are %u sections.";
    dwarfstring_append_printf_u(v44, " is too high. There are %u sections.", a1[4]);
LABEL_50:
    v38 = dwarfstring_string(v44, v37);
    _dwarf_error_string(v7, a6, 270, v38);
    dwarfstring_destructor(v44);
    return 1;
  }
  v32 = a1[a3 + 12];
  switch ( v32 )
  {
    case 1LL:
      v33 = v7 + 360;
      break;
    case 2LL:
      v33 = v7 + 592;
      break;
    case 3LL:
      v33 = v7 + 824;
      break;
    case 4LL:
      v33 = v7 + 1056;
      break;
    case 5LL:
      v33 = v7 + 3376;
      if ( a1[3] <= 4u )
        v33 = v7 + 1520;
      break;
    case 6LL:
    case 7LL:
      v33 = v7 + 6160;
      break;
    case 8LL:
      v33 = v7 + 3608;
      if ( a1[3] <= 4u )
        v33 = v7 + 5928;
      break;
    default:
      dwarfstring_constructor(v44);
      v37 = "DW_DLE_XU_NAME_COL_ERROR the .debug_cu/tu_index section has an unexpected DW_SECT  number of %u.";
      dwarfstring_append_printf_u(
        v44,
        "DW_DLE_XU_NAME_COL_ERROR the .debug_cu/tu_index section has an unexpected DW_SECT  number of %u.",
        v32);
      goto LABEL_50;
  }
  v34 = *(_QWORD *)(v33 + 8);
  if ( !v34 )
  {
    section = _dwarf_load_section(v7, v33, a6);
    v21 = v40;
    v22 = a4;
    v23 = a5;
    if ( section == 1 )
    {
      dwarf_dealloc_error(v7, *a6);
      v21 = v40;
      v22 = a4;
      *a6 = 0;
      v23 = a5;
    }
    else if ( section != -1 )
    {
      v34 = *(_QWORD *)(v33 + 8);
      goto LABEL_26;
    }
    v36 = *(_QWORD *)(v7 + 240);
    if ( v36 < v21 )
    {
      _dwarf_error_string(v7, a6, 270, "DW_DLE_XU_NAME_COL_ERROR area offset larger than file size.");
      return 1;
    }
    if ( v36 < v20 )
    {
      _dwarf_error_string(v7, a6, 270, "DW_DLE_XU_NAME_COL_ERROR area size larger than file size.");
      return 1;
    }
    goto LABEL_29;
  }
LABEL_26:
  if ( v21 && v21 >= v34 )
  {
    v41 = v21;
    dwarfstring_constructor(v44);
    dwarfstring_append_printf_u(v44, "DW_DLE_XU_NAME_COL_ERROR area offset 0x%x ", v41);
    v37 = " larger than target section size of 0x%x.";
    dwarfstring_append_printf_u(v44, " larger than target section size of 0x%x.", v34);
    goto LABEL_50;
  }
  if ( v34 < v20 )
  {
    dwarfstring_constructor(v44);
    dwarfstring_append_printf_u(v44, "DW_DLE_XU_NAME_COL_ERROR area size 0x%x ", v20);
    v37 = " larger than target section size of 0x%x.";
    dwarfstring_append_printf_u(v44, " larger than target section size of 0x%x.", v34);
    goto LABEL_50;
  }
LABEL_29:
  *v22 = v21;
  *v23 = v20;
  return 0;
}

