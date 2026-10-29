__int64 __fastcall dwarf_get_xu_section_names(__int64 a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v5; // rbp
  __int64 v6; // rsi
  __int64 result; // rax
  int v8; // edx
  __int64 v9; // rax
  _BYTE v11[40]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( !a1 )
  {
    _dwarf_error_string(0, a5, 268, "DW_DLE_XU_TYPE_ARG_ERROR: Dwarf_Xu_Index_Header is NULL");
    return 1;
  }
  v5 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 || *v5 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_xu_section_names()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a2 >= *(_QWORD *)(a1 + 32) )
  {
    dwarfstring_constructor(v11);
    dwarfstring_append_printf_u(v11, "ERROR: DW_DLE_XU_NAME_COL_ERROR as the column index of %u ", a2);
    dwarfstring_append_printf_u(v11, " is too high. There are %u sections.", *(_QWORD *)(a1 + 32));
    v9 = dwarfstring_string(v11, " is too high. There are %u sections.", v8);
    _dwarf_error_string(v5, a5, 270, v9);
    dwarfstring_destructor(v11);
    return 1;
  }
  v6 = *(_QWORD *)(a1 + 8 * a2 + 96);
  result = 0xFFFFFFFFLL;
  if ( v6 )
  {
    *a3 = v6;
    *a4 = off_B7680[v6];
    return 0;
  }
  return result;
}

