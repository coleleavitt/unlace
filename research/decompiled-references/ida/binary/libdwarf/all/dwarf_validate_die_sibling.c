__int64 __fastcall dwarf_validate_die_sibling(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // rax
  _QWORD *v3; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( !a1 )
  {
    _dwarf_error(0, 0, 52);
    return 1;
  }
  v2 = *(_QWORD ***)(a1 + 16);
  if ( !v2 )
  {
    _dwarf_error(0, 0, 104);
    return 1;
  }
  v3 = *v2;
  if ( !v3 || *v3 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      0,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v5 = v3 + 19;
  if ( *(_DWORD *)(a1 + 32) )
    v5 = v3 + 13;
  *a2 = 0;
  v6 = v5[4];
  if ( !v5[5] || !v6 || *(_QWORD *)a1 != v6 )
  {
    v7 = **(_QWORD **)(a1 + 16);
    if ( *(_DWORD *)(a1 + 32) )
      v8 = *(_QWORD *)(v7 + 360);
    else
      v8 = *(_QWORD *)(v7 + 592);
    *a2 = v6 - v8;
    return 1;
  }
  return 0;
}

