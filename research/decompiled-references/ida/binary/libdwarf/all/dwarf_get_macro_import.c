__int64 __fastcall dwarf_get_macro_import(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v7; // r8
  unsigned int v8; // edx
  unsigned __int8 *v10; // rsi
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD v14[3]; // [rsp+0h] [rbp-18h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( !a1 )
  {
    v7 = 0;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)a1 != 2778 )
  {
LABEL_3:
    _dwarf_error_string(v7, a4, 322, "DW_DLE_BAD_MACRO_HEADER_POINTER  NULL header or corrupt header");
    return 1;
  }
  if ( a2 >= *(_QWORD *)(a1 + 88) )
  {
    _dwarf_error(*(_QWORD *)(a1 + 168), a4, 323);
    return 1;
  }
  v10 = (unsigned __int8 *)(*(_QWORD *)(a1 + 104) + 24 * a2);
  v11 = *v10;
  if ( v11 == 7 || (v8 = -1, v11 == 10) )
  {
    v12 = *((_QWORD *)v10 + 2);
    v13 = *(unsigned __int8 *)(a1 + 64);
    v14[0] = 0;
    if ( __CFADD__(v13, v12) )
    {
      _dwarf_error_string(v7, a4, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
    }
    else
    {
      if ( *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 112) >= (unsigned __int64)(v13 + v12) )
      {
        (*(void (__fastcall **)(_QWORD *))(v7 + 8296))(v14);
        v8 = 0;
        *a3 = v14[0];
        return v8;
      }
      _dwarf_error_string(v7, a4, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    }
    return 1;
  }
  return v8;
}

