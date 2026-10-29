__int64 __fastcall dwarf_get_macro_op(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        _WORD *a4,
        _WORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v7; // r13
  unsigned __int8 *v10; // rax
  __int64 v11; // rsi
  __int16 v12; // di
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  _BYTE v17[32]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v18[56]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( !a1 )
  {
    v7 = 0;
    goto LABEL_3;
  }
  v7 = a1[21];
  if ( *a1 != 2778 )
  {
LABEL_3:
    _dwarf_error_string(v7, a7, 322, "DW_DLE_BAD_MACRO_HEADER_POINTER  NULL header or corrupt header");
    return 1;
  }
  if ( a2 >= a1[11] )
  {
    _dwarf_error(a1[21], a7, 323);
    return 1;
  }
  v10 = (unsigned __int8 *)(a1[13] + 24 * a2);
  v11 = a1[2];
  v12 = *v10;
  if ( *v10 )
  {
    v13 = v11 + *((_QWORD *)v10 + 2) - 1LL - a1[14];
    if ( v13 >= a1[3] )
    {
      dwarfstring_constructor_static(v17, v18, 50);
      dwarfstring_append_printf_u(v17, "DW_DLE_MACRO_OFFSET_BAD: offset 0x%lx", v13);
      dwarfstring_append_printf_u(v17, " >= section size of 0x%lx", a1[3]);
      v16 = dwarfstring_string(v17, " >= section size of 0x%lx", v15);
      _dwarf_error_string(v7, a7, 318, v16);
      dwarfstring_destructor(v17);
      return 1;
    }
    *a3 = v13;
    *a4 = v12;
    v14 = *((_QWORD *)v10 + 1);
    if ( v14 )
    {
      *a5 = *(unsigned __int8 *)(v14 + 1);
      *a6 = *(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL);
    }
    else
    {
      *a5 = 0;
      *a6 = 0;
    }
    return 0;
  }
  else
  {
    *a3 = a1[4] + v11 - 1;
    *a4 = 0;
    *a5 = 0;
    *a6 = 0;
    return 0;
  }
}

