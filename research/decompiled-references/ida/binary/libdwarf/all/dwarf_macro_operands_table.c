__int64 __fastcall dwarf_macro_operands_table(
        __int64 a1,
        unsigned __int16 a2,
        _WORD *a3,
        _WORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int8 *v8; // rax

  if ( !a1 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v6 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)a1 != 2778 )
  {
LABEL_3:
    _dwarf_error_string(v6, a6, 322, "DW_DLE_BAD_MACRO_HEADER_POINTER  NULL header or corrupt header");
    return 1;
  }
  if ( a2 >= *(unsigned __int8 *)(a1 + 72) )
  {
    _dwarf_error(*(_QWORD *)(a1 + 168), a6, 323);
    return 1;
  }
  v8 = (unsigned __int8 *)(*(_QWORD *)(a1 + 80) + 16LL * a2);
  *a3 = *v8;
  *a4 = v8[1];
  *a5 = *((_QWORD *)v8 + 1);
  return 0;
}

