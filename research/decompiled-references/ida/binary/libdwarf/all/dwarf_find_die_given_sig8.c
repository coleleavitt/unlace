__int64 __fastcall dwarf_find_die_given_sig8(struct Dwarf_Debug_s *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
    return _dwarf_internal_find_die_given_sig8(a1);
  _dwarf_error_string(
    0,
    a5,
    81,
    "DW_DLE_DBG_NULL: dbg argument to dwarf_find_die_given_sig8()either null or it containsa stale Dwarf_Debug pointer");
  return 1;
}

