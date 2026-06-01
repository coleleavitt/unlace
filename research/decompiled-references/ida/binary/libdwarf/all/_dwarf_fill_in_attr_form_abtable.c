__int64 __fastcall dwarf_fill_in_attr_form_abtable(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  size_t v7; // rbx
  __int64 v8; // r13
  void *v10; // rax
  void *v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rax
  int v20; // edx
  __int64 v21; // rax
  _QWORD v22[2]; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v26[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v7 = a4[6];
  v8 = *a1;
  v22[0] = a2;
  v27 = __readfsqword(0x28u);
  v10 = calloc(v7, 2u);
  a4[9] = v10;
  if ( !v10 )
  {
    sub_1E520(v8, v7, (__int64)"abbrev_list->abl_attr", a5);
    return 1;
  }
  v11 = calloc(v7, 2u);
  a4[10] = v11;
  if ( !v11 )
  {
    sub_1E520(v8, v7, (__int64)"abbrev_list->abl_form", a5);
    return 1;
  }
  if ( a4[7] )
  {
    v19 = calloc(v7, 8u);
    a4[11] = v19;
    if ( !v19 )
    {
      sub_1E520(v8, v7, (__int64)"abbrev_list->abl_implicit_const", a5);
      return 1;
    }
  }
  if ( v7 )
  {
    v12 = 0;
    while ( 1 )
    {
      v23 = 0;
      v24 = 0;
      v25 = 0;
      if ( (unsigned int)_dwarf_leb128_uword_wrapper(v8, v22, a3, &v23, a5) == 1 )
        return 1;
      if ( v23 > 0xFFFF )
        break;
      *(_WORD *)(a4[9] + 2 * v12) = v23;
      if ( v23 > 0x3FFF )
      {
        _dwarf_error(v8, a5, 451);
        return 1;
      }
      if ( (unsigned int)_dwarf_leb128_uword_wrapper(v8, v22, a3, &v24, a5) == 1 )
        return 1;
      if ( v24 > 0xFFFF )
      {
        _dwarf_error_string(
          v8,
          a5,
          116,
          "DW_DLE_ATTR_FORM_SIZE_BAD : reading attr_form of an abbrev list entry: the ULEB form number is too large to be"
          " valid. Corrupt Dwarf.");
        return 1;
      }
      if ( !(unsigned int)_dwarf_valid_form_we_know(v24, v23) )
      {
        dwarfstring_constructor(v26);
        dwarfstring_append();
        dwarfstring_append_printf_u(v26, " attr 0x%x ", v23);
        dwarfstring_append_printf_u(v26, " attrform 0x%x ", v24);
        v21 = dwarfstring_string(v26, " attrform 0x%x ", v20);
        v17 = 321;
        v18 = v21;
        goto LABEL_18;
      }
      *(_WORD *)(a4[9] + 2 * v12) = v23;
      *(_WORD *)(a4[10] + 2 * v12) = v24;
      if ( v24 == 33 )
      {
        if ( (unsigned int)_dwarf_leb128_sword_wrapper(v8, v22, a3, &v25, a5) == 1 )
          return 1;
        v13 = a4[11];
        v14 = v25;
        ++a4[7];
        *(_QWORD *)(v13 + 8 * v12++) = v14;
        if ( v12 >= a4[6] )
          return 0;
      }
      else if ( ++v12 >= a4[6] )
      {
        return 0;
      }
    }
    dwarfstring_constructor(v26);
    dwarfstring_append();
    dwarfstring_append();
    v16 = dwarfstring_string(v26, " for abbrev list entry the ULEB number is too large. Corrupt Dwarf.");
    v17 = 116;
    v18 = v16;
LABEL_18:
    _dwarf_error_string(v8, a5, v17, v18);
    dwarfstring_destructor(v26);
    return 1;
  }
  return 0;
}

