__int64 __fastcall dwarf_cie_section_offset(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_cie_section_offset()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !a2 )
  {
    _dwarf_error(a1, a4, 94);
    return 1;
  }
  *a3 = *(_QWORD *)(a2 + 40) - *(_QWORD *)(a2 + 144);
  return 0;
}

