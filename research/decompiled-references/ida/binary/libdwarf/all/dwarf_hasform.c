__int64 __fastcall dwarf_hasform(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4)
{
  _QWORD **v6; // rcx
  _QWORD *v7; // r8

  if ( !a1 )
  {
    _dwarf_error(0, a4, 111);
    return 1;
  }
  v6 = *(_QWORD ***)(a1 + 8);
  if ( !v6 )
  {
    _dwarf_error(0, a4, 115);
    return 1;
  }
  v7 = *v6;
  if ( !*v6 || *v7 != 3959286781LL )
  {
    _dwarf_error_string(0, a4, 117, "DW_DLE_ATTR_DBG_NULL: Stale or null Dwarf_Debugin a Dwarf_CU_Context");
    return 1;
  }
  if ( v7 != *(_QWORD **)(a1 + 32) )
  {
    _dwarf_error_string(
      0,
      a4,
      117,
      "DW_DLE_ATTR_DBG_NULL: an attribute and its cu_context do not have the same Dwarf_Debug");
    return 1;
  }
  if ( !a3 )
  {
    _dwarf_error_string(
      v7,
      a4,
      498,
      " DW_DLE_INVALID_NULL_ARGUMENT calling dwarf_hasform: dw_return_bool must be passed as a non-NULL valid pointer");
    return 1;
  }
  *a3 = *(_WORD *)(a1 + 2) == a2;
  return 0;
}

