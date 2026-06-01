__int64 __fastcall dwarf_srclines_two_level_from_linecontext(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  if ( !a1 || *(_DWORD *)a1 != -804450031 )
  {
    _dwarf_error(0, a6, 305);
    return 1;
  }
  if ( !*(_BYTE *)(a1 + 4) )
  {
    _dwarf_error(*(_QWORD *)(a1 + 288), a6, 305);
    return 1;
  }
  if ( (__int64)(*(_QWORD *)(a1 + 328) | *(_QWORD *)(a1 + 312)) < 0 )
  {
    _dwarf_error_string(
      *(_QWORD *)(a1 + 288),
      a6,
      500,
      "DW_DLE_LINE_COUNT_WRONG Call to dwarf_srclines_two_level_from_linecontext finds an Impossible lines count");
    return 1;
  }
  *a2 = *(_QWORD *)(a1 + 304);
  *a3 = *(_QWORD *)(a1 + 312);
  *a4 = *(_QWORD *)(a1 + 320);
  *a5 = *(_QWORD *)(a1 + 328);
  return 0;
}

