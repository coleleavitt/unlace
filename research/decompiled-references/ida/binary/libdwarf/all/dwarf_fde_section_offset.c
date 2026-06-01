__int64 __fastcall dwarf_fde_section_offset(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_fde_section_offset()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !a2 )
  {
    _dwarf_error(a1, a5, 92);
    return 1;
  }
  *a3 = a2[7] - a2[18];
  *a4 = a2[1];
  return 0;
}

