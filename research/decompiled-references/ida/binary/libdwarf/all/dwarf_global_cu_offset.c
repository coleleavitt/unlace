__int64 __fastcall dwarf_global_cu_offset(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
    {
      *a2 = *(_QWORD *)(v4 + 48);
      return 0;
    }
    _dwarf_error_string(0, a3, 126, "DW_DLE_GLOBAL_CONTEXT_NULL in call of dwarf_global_cu_offset()");
  }
  else
  {
    _dwarf_error(0, a3, 125);
  }
  return 1;
}

