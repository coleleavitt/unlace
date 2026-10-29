__int64 __fastcall dwarf_get_address_size(__int64 a1, _WORD *a2, __int64 a3)
{
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    *a2 = *(unsigned __int8 *)(a1 + 280);
    return 0;
  }
  else
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_address_size()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
}

