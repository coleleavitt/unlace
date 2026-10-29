__int64 __fastcall dwarf_set_tied_dbg(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_set_tied_dbg()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a1 == a2 )
  {
    _dwarf_error_string(
      a1,
      a3,
      308,
      "DW_DLE_NO_TIED_FILE_AVAILABLE: bad argument to dwarf_set_tied_dbg(), tied and main must not be the same pointer!");
    return 1;
  }
  if ( a2 )
  {
    if ( a1[4] )
    {
      _dwarf_error_string(
        a1,
        a3,
        308,
        "DW_DLE_NO_TIED_FILE_AVAILABLE: bad argument to dwarf_set_tied_dbg(), primary_dbg already has a secondary_dbg!");
      return 1;
    }
    a1[1356] = a2;
    a1[4] = a2;
    a2[4] = a2;
    a2[5] = a1;
    if ( *a2 != 3959286781LL )
    {
      _dwarf_error_string(
        0,
        a3,
        81,
        "DW_DLE_DBG_NULL: dbg argument to dwarf_set_tied_dbg() dw_secondary_dbgis invalideither null or it containsa stal"
        "e Dwarf_Debug pointer");
      return 1;
    }
    a1[4] = a2;
    return 0;
  }
  else
  {
    a1[4] = 0;
    a1[1356] = 0;
    return 0;
  }
}

