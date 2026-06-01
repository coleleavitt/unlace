__int64 __fastcall dwarf_die_CU_offset_range(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rax

  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  if ( !*(_QWORD *)v4 || **(_QWORD **)v4 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  *a2 = *(_QWORD *)(v4 + 72);
  *a3 = *(_QWORD *)(v4 + 8) + *(unsigned __int8 *)(v4 + 17) + (unsigned __int64)*(unsigned __int8 *)(v4 + 16);
  return 0;
}

