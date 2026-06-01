__int64 __fastcall dwarf_macro_context_total_length(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  if ( !a1 )
    goto LABEL_4;
  if ( *a1 != 2778 )
  {
    a1 = (_QWORD *)a1[21];
LABEL_4:
    _dwarf_error_string(a1, a3, 322, "DW_DLE_BAD_MACRO_HEADER_POINTER  NULL header or corrupt header");
    return 1;
  }
  *a2 = a1[4];
  return 0;
}

