__int64 __fastcall dwarf_get_rnglists_entry_fields_a(
        _QWORD *a1,
        unsigned __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        __int64 a10)
{
  unsigned int v11; // edx
  __int64 v15; // rax

  if ( !a1 || !a1[7] || a1[5] != 43981 )
  {
    _dwarf_error_string(
      0,
      a10,
      81,
      "DW_DLE_DBG_NULL NULL or invalid Dwarf_Rnglists_Head argument passed to dwarf_get_rnglists_entry_fields_a()");
    return 1;
  }
  v11 = -1;
  if ( a2 >= a1[3] )
    return v11;
  v15 = *(_QWORD *)(*a1 + 8 * a2);
  if ( a3 )
    *a3 = *(_DWORD *)v15;
  if ( a4 )
    *a4 = *(_DWORD *)(v15 + 4);
  if ( a5 )
    *a5 = *(_QWORD *)(v15 + 16);
  if ( a6 )
    *a6 = *(_QWORD *)(v15 + 24);
  if ( a7 )
    *a7 = *(_DWORD *)(v15 + 8);
  if ( a8 )
    *a8 = *(_QWORD *)(v15 + 32);
  if ( a9 )
    *a9 = *(_QWORD *)(v15 + 40);
  return 0;
}

