__int64 __fastcall dwarf_get_location_op_value_c(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 v8; // rax

  if ( a1 )
  {
    if ( a2 < *(unsigned __int16 *)(a1 + 104) )
    {
      v8 = *(_QWORD *)(a1 + 112) + 80 * a2;
      *a3 = *(_BYTE *)v8;
      *a4 = *(_QWORD *)(v8 + 32);
      *a5 = *(_QWORD *)(v8 + 40);
      *a6 = *(_QWORD *)(v8 + 48);
      *a7 = *(_QWORD *)(v8 + 64);
      return 0;
    }
    _dwarf_error(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 48LL), a8, 312);
  }
  else
  {
    _dwarf_error_string(
      0,
      a8,
      81,
      "DW_DLE_DBG_NULLDwarf_Locdesc_c_Head_c NULL in calling dwarf_get_location_op_value_c()");
  }
  return 1;
}

