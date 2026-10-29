__int64 __fastcall dwarf_dnames_sizes(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _WORD *a12,
        _WORD *a13,
        __int64 a14)
{
  if ( a1 && *(_QWORD *)a1 == 43981 )
  {
    if ( a2 )
      *a2 = *(_QWORD *)(a1 + 88);
    if ( a3 )
      *a3 = *(_QWORD *)(a1 + 96);
    if ( a4 )
      *a4 = *(_QWORD *)(a1 + 104);
    if ( a5 )
      *a5 = *(_QWORD *)(a1 + 112);
    if ( a6 )
      *a6 = *(_QWORD *)(a1 + 128);
    if ( a7 )
      *a7 = *(_QWORD *)(a1 + 136);
    if ( a8 )
      *a8 = *(_QWORD *)(a1 + 144);
    if ( a9 )
      *a9 = *(_QWORD *)(a1 + 152);
    if ( a10 )
      *a10 = *(_QWORD *)(a1 + 160);
    if ( a11 )
      *a11 = *(_QWORD *)(a1 + 32);
    if ( a12 )
      *a12 = *(_WORD *)(a1 + 82);
    if ( a13 )
      *a13 = *(_WORD *)(a1 + 80);
    return 0;
  }
  else
  {
    _dwarf_error_string(
      0,
      a14,
      81,
      "DW_DLE_DBG_NULL: A call to dwarf_dnames_sizes() has a NULL Dwarf_Dnames_Head or an improper one.");
    return 1;
  }
}

