__int64 __fastcall dwarf_formflag(__int64 a1, _DWORD *a2, __int64 a3)
{
  _QWORD **v5; // rdx
  _QWORD *v6; // r8
  unsigned int v8; // edx

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
    _dwarf_error_string(
      0,
      a3,
      117,
      "DW_DLE_ATTR_DBG_NULL: dwarf_formflag() attribute passed in has NULL or stale Dwarf_Debug pointer");
    return 1;
  }
  if ( *(_QWORD **)(a1 + 32) != v6 )
  {
    _dwarf_error_string(
      0,
      a3,
      117,
      "DW_DLE_ATTR_DBG_NULL: an attribute and its cu_context do not have the same Dwarf_Debug");
    return 1;
  }
  v8 = *(unsigned __int16 *)(a1 + 2);
  if ( (_WORD)v8 == 25 )
  {
    *a2 = 1;
    return 0;
  }
  else
  {
    if ( (_WORD)v8 != 12 )
    {
      sub_1F300((__int64)v6, a3, v8);
      return 1;
    }
    *a2 = **(unsigned __int8 **)(a1 + 16);
    return 0;
  }
}

