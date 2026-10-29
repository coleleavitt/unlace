__int64 __fastcall dwarf_formsig8(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD **v5; // rdi
  _QWORD *v6; // r12
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax

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
  if ( !*v5 || *v6 != 3959286781LL )
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
  result = 0xFFFFFFFFLL;
  if ( *(_WORD *)(a1 + 2) == 32 )
  {
    v8 = _dwarf_calculate_info_section_end_ptr(v5);
    v9 = *(_QWORD **)(a1 + 16);
    if ( (unsigned __int64)(v9 + 1) <= v8 )
    {
      *a2 = *v9;
      return 0;
    }
    _dwarf_error(v6, a3, 119);
    return 1;
  }
  return result;
}

