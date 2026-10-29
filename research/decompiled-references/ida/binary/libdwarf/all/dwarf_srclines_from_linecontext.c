__int64 __fastcall dwarf_srclines_from_linecontext(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rcx

  if ( !a1 || *(_DWORD *)a1 != -804450031 )
  {
    _dwarf_error(0, a4, 305);
    return 1;
  }
  if ( !*(_BYTE *)(a1 + 4) )
  {
    _dwarf_error(*(_QWORD *)(a1 + 288), a4, 305);
    return 1;
  }
  v7 = *(_QWORD *)(a1 + 312);
  if ( v7 < 0 )
  {
    _dwarf_error_string(
      *(_QWORD *)(a1 + 288),
      a4,
      500,
      "DW_DLE_LINE_COUNT_WRONG Call to dwarf_srclines_from_linecontext finds an Impossible lines count");
    return 1;
  }
  *a2 = *(_QWORD *)(a1 + 304);
  *a3 = v7;
  return 0;
}

