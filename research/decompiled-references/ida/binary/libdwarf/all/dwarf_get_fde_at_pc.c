__int64 __fastcall dwarf_get_fde_at_pc(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v6; // rax
  _QWORD *v9; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi

  if ( !a1 )
  {
    _dwarf_error(0, a6, 100);
    return 1;
  }
  v6 = *a1;
  if ( !*a1 )
  {
    _dwarf_error(0, a6, 92);
    return 1;
  }
  v9 = *(_QWORD **)(v6 + 80);
  if ( !v9 || *v9 != 3959286781LL )
  {
    _dwarf_error_string(0, a6, 93, "DW_DLE_FDE_DBG_NULL: An fde contains a stale Dwarf_Debug ");
    return 1;
  }
  if ( *(_BYTE *)(v6 + 106) )
    v13 = v9[44];
  else
    v13 = v9[42];
  v14 = v13 - 1;
  if ( v14 < 0 )
    return 0xFFFFFFFFLL;
  v15 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = (v15 + v14) / 2;
      v17 = a1[v16];
      v18 = *(_QWORD *)(v17 + 32);
      if ( a2 >= v18 )
        break;
      v14 = v16 - 1;
      if ( v15 > v16 - 1 )
        return 0xFFFFFFFFLL;
    }
    if ( a2 < v18 + *(_QWORD *)(v17 + 48) )
      break;
    v15 = v16 + 1;
    if ( v16 + 1 > v14 )
      return 0xFFFFFFFFLL;
  }
  if ( !v17 )
    return 0xFFFFFFFFLL;
  if ( a4 )
    *a4 = v18;
  if ( a5 )
    *a5 = *(_QWORD *)(v17 + 32) + *(_QWORD *)(v17 + 48) - 1LL;
  *a3 = v17;
  return 0;
}

