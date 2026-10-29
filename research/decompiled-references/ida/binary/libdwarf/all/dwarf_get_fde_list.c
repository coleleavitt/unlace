__int64 __fastcall dwarf_get_fde_list(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( a1 && *a1 == 3959286781LL )
  {
    result = _dwarf_load_section(a1, a1 + 480, a6);
    if ( !(_DWORD)result )
      return _dwarf_get_fde_list_internal((int)a1, a2, a3, a4, a5, a1[480], a1[483], a1[481], -1, 0, a6);
  }
  else
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_fde_list()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  return result;
}

