__int64 __fastcall dwarf_srclines_subprog_data(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  _QWORD *v7; // rax

  if ( a2 < 0 )
  {
    _dwarf_error_string(
      *(_QWORD *)(a1 + 288),
      a6,
      499,
      "DW_DLE_LINE_INDEX_WRONG Call to dwarf_srclines_subprog_data finds an Impossible index argument value");
    return 1;
  }
  if ( !a1 || *(_DWORD *)a1 != -804450031 )
  {
    _dwarf_error(0, a6, 305);
    return 1;
  }
  if ( !a2 || *(_QWORD *)(a1 + 264) < (unsigned __int64)a2 )
  {
    _dwarf_error(*(_QWORD *)(a1 + 288), a6, 306);
    return 1;
  }
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 256) + 24 * a2 - 24);
  *a3 = *v7;
  *a4 = v7[1];
  *a5 = v7[2];
  return 0;
}

