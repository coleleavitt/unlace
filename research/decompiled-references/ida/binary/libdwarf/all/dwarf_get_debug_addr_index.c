__int64 __fastcall dwarf_get_debug_addr_index(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD **v4; // r13
  _QWORD *v5; // r14
  __int64 result; // rax
  unsigned int v7; // r15d
  __int64 v9; // rsi
  _QWORD v10[9]; // [rsp+0h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !a1 )
  {
    _dwarf_error(0, a3, 111);
    return 1;
  }
  v4 = *(_QWORD ***)(a1 + 8);
  if ( !v4 )
  {
    _dwarf_error(0, a3, 115);
    return 1;
  }
  v5 = *v4;
  if ( !*v4 || *v5 != 3959286781LL )
  {
    _dwarf_error_string(0, a3, 117, "DW_DLE_ATTR_DBG_NULL: Stale or null Dwarf_Debugin a Dwarf_CU_Context");
    return 1;
  }
  if ( v5 != *(_QWORD **)(a1 + 32) )
  {
    _dwarf_error_string(
      0,
      a3,
      117,
      "DW_DLE_ATTR_DBG_NULL: an attribute and its cu_context do not have the same Dwarf_Debug");
    return 1;
  }
  v7 = *(unsigned __int16 *)(a1 + 2);
  if ( !(unsigned int)dwarf_addr_form_is_indexed(*(unsigned __int16 *)(a1 + 2)) )
  {
    _dwarf_error(v5, a3, 258);
    return 1;
  }
  v9 = *(_QWORD *)(a1 + 16);
  v10[0] = 0;
  result = _dwarf_get_addr_index_itself(v7, v9, v5, v4, v10, a3);
  *a2 = v10[0];
  return result;
}

