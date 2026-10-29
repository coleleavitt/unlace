__int64 __fastcall dwarf_whatattr(__int64 a1, _WORD *a2, __int64 a3)
{
  _QWORD **v5; // rdx
  _QWORD *v6; // rdx

  if ( !a1 )
  {
    _dwarf_error(0, a3, 111);
    return 1;
  }
  v5 = *(_QWORD ***)(a1 + 8);
  if ( !v5 )
  {
    _dwarf_error(0, a3, 115);
    return 1;
  }
  v6 = *v5;
  if ( !v6 || *v6 != 3959286781LL )
  {
    _dwarf_error_string(0, a3, 117, "DW_DLE_ATTR_DBG_NULL: Stale or null Dwarf_Debugin a Dwarf_CU_Context");
    return 1;
  }
  if ( v6 != *(_QWORD **)(a1 + 32) )
  {
    _dwarf_error_string(
      0,
      a3,
      117,
      "DW_DLE_ATTR_DBG_NULL: an attribute and its cu_context do not have the same Dwarf_Debug");
    return 1;
  }
  *a2 = *(_WORD *)a1;
  return 0;
}

