__int64 __fastcall dwarf_get_fde_n(__int64 *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // ecx
  unsigned __int64 v10; // rsi

  if ( !a1 )
  {
    _dwarf_error(0, a4, 100);
    return 1;
  }
  v6 = *a1;
  if ( !*a1 )
  {
    _dwarf_error(0, a4, 92);
    return 1;
  }
  v7 = *(_QWORD **)(v6 + 80);
  if ( !v7 || *v7 != 3959286781LL )
  {
    _dwarf_error_string(0, a4, 93, "DW_DLE_FDE_DBG_NULL: An fde contains a stale Dwarf_Debug ");
    return 1;
  }
  if ( *(_BYTE *)(v6 + 106) )
    v10 = v7[44];
  else
    v10 = v7[42];
  v8 = -1;
  if ( a2 >= v10 )
    return v8;
  *a3 = a1[a2];
  return 0;
}

