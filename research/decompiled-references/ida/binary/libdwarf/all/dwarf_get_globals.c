__int64 __fastcall dwarf_get_globals(struct Dwarf_Debug_s *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
    return dwarf_globals_by_type(a1);
  _dwarf_error_string(
    0,
    a4,
    81,
    "DW_DLE_DBG_NULL: dbg argument to dwarf_get_globals()either null or it containsa stale Dwarf_Debug pointer");
  return 1;
}

