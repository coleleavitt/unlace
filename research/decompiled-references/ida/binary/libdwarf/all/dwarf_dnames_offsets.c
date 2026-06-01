__int64 __fastcall dwarf_dnames_offsets(
        _QWORD *a1,
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
        __int64 a12)
{
  if ( a1 && *a1 == 43981 )
  {
    if ( a2 )
      *a2 = a1[5];
    if ( a3 )
      *a3 = a1[21];
    if ( a4 )
      *a4 = a1[22];
    if ( a5 )
      *a5 = a1[23];
    if ( a6 )
      *a6 = a1[24];
    if ( a7 )
      *a7 = a1[25];
    if ( a8 )
      *a8 = a1[26];
    if ( a9 )
      *a9 = a1[27];
    if ( a10 )
      *a10 = a1[28];
    if ( a11 )
      *a11 = a1[29];
    return 0;
  }
  else
  {
    _dwarf_error_string(
      0,
      a12,
      81,
      "DW_DLE_DBG_NULL: A call to dwarf_dnames_offsets() has a NULL Dwarf_Dnames_Head or an improper one.");
    return 1;
  }
}

