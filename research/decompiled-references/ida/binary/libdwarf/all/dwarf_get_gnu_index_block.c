__int64 __fastcall dwarf_get_gnu_index_block(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _WORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rax

  if ( a1 )
  {
    result = 0xFFFFFFFFLL;
    if ( a2 < *(_QWORD *)(a1 + 40) )
    {
      v9 = *(_QWORD *)(a1 + 32) + 112 * a2;
      if ( a3 )
        *a3 = *(_QWORD *)(v9 + 24);
      if ( a4 )
        *a4 = *(_WORD *)(v9 + 36);
      if ( a5 )
        *a5 = *(_QWORD *)(v9 + 48);
      if ( a6 )
        *a6 = *(_QWORD *)(v9 + 56);
      if ( a7 )
        *a7 = *(_QWORD *)(v9 + 96);
      return 0;
    }
  }
  else
  {
    _dwarf_error_string(0, a8, 81, "DW_DLE_DBG_NULL: in dwarf_get_gnu_index_block");
    return 1;
  }
  return result;
}

