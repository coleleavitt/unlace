__int64 __fastcall sub_1F170(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD **v6; // r8
  _QWORD *v7; // rcx

  if ( !a3 )
  {
    _dwarf_error(0, a4, 111);
    return 1;
  }
  v6 = *(_QWORD ***)(a3 + 8);
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
  if ( *(_QWORD **)(a3 + 32) != v7 )
  {
    _dwarf_error_string(
      0,
      a4,
      117,
      "DW_DLE_ATTR_DBG_NULL: an attribute and its cu_context do not have the same Dwarf_Debug");
    return 1;
  }
  *a2 = v6;
  *a1 = v7;
  return 0;
}

