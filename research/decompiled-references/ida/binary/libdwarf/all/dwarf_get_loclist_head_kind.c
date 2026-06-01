__int64 __fastcall dwarf_get_loclist_head_kind(__int64 a1, _DWORD *a2, __int64 a3)
{
  if ( a1 )
  {
    *a2 = *(unsigned __int16 *)(a1 + 40);
    return 0;
  }
  else
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: NULL Dwarf_Loc_Head_c argument passed to dwarf_get_loclist_head_kind()");
    return 1;
  }
}

