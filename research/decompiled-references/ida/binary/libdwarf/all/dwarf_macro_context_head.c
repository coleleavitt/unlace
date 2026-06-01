__int64 __fastcall dwarf_macro_context_head(
        __int64 a1,
        _WORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _QWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _WORD *a11,
        __int64 a12)
{
  if ( !a1 )
    goto LABEL_4;
  if ( *(_QWORD *)a1 != 2778 )
  {
    a1 = *(_QWORD *)(a1 + 168);
LABEL_4:
    _dwarf_error_string(a1, a12, 322, "DW_DLE_BAD_MACRO_HEADER_POINTER  NULL header or corrupt header");
    return 1;
  }
  *a2 = *(_WORD *)(a1 + 8);
  *a3 = *(_QWORD *)(a1 + 16);
  *a4 = *(_QWORD *)(a1 + 32);
  *a5 = *(unsigned __int16 *)(a1 + 40);
  *a6 = *(unsigned __int8 *)(a1 + 42);
  *a8 = *(_QWORD *)(a1 + 48);
  *a7 = *(_DWORD *)(a1 + 60);
  *a9 = *(_DWORD *)(a1 + 56);
  *a10 = *(_DWORD *)(a1 + 68);
  *a11 = *(unsigned __int8 *)(a1 + 72);
  return 0;
}

