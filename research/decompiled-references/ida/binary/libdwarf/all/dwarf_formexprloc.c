__int64 __fastcall dwarf_formexprloc(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int16 v6; // r14
  const char *v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // r15
  __int64 started; // rax
  const char *v12; // rsi
  __int64 v13; // rax
  char *v14; // [rsp+0h] [rbp-98h]
  int v15; // [rsp+0h] [rbp-98h]
  __int64 v16; // [rsp+8h] [rbp-90h]
  __int64 v17; // [rsp+10h] [rbp-88h] BYREF
  __int64 v18; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  char *v20; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v21[13]; // [rsp+30h] [rbp-68h] BYREF

  v21[5] = __readfsqword(0x28u);
  v17 = 0;
  v18 = 0;
  if ( (unsigned int)sub_1F170(&v17, &v18, a1, a4) )
    return 1;
  v6 = *(_WORD *)(a1 + 2);
  if ( v6 != 24 )
  {
    v20 = "<name not known>";
    dwarfstring_constructor(v21);
    dwarf_get_FORM_name(v6, (const char **)&v20);
    dwarfstring_append_printf_u(v21, "DW_DLE_ATTR_EXPRLOC_FORM_BAD: The form is 0x%x ", v6);
    dwarfstring_append_printf_s();
    v8 = dwarfstring_string(v21, "(%s) but should be DW_FORM_exprloc. Corrupt Dwarf.", v7);
    _dwarf_error_string(v17, a4, 224, v8);
    dwarfstring_destructor(v21);
    return 1;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v19 = 0;
  started = _dwarf_calculate_info_section_start_ptr(v18, &v19);
  v20 = nullptr;
  v21[0] = 0;
  if ( (unsigned int)dwarf_decode_leb128(v10, &v20, v21, v19 + started) == 1 )
  {
    _dwarf_error_string(v17, a4, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
    return 1;
  }
  if ( v19 < v21[0] )
  {
    v15 = v21[0];
    dwarfstring_constructor(v21);
    dwarfstring_append_printf_u(v21, "DW_DLE_ATTR_OUTSIDE_SECTION: The expression length is %u,", v15);
    v12 = " but the section length is just %u. Corrupt Dwarf.";
    dwarfstring_append_printf_u(v21, " but the section length is just %u. Corrupt Dwarf.", v19);
LABEL_10:
    v13 = dwarfstring_string(v21, v12);
    _dwarf_error_string(v17, a4, 281, v13);
    dwarfstring_destructor(v21);
    return 1;
  }
  v16 = v21[0];
  v14 = v20;
  result = _dwarf_reference_outside_section(*(_QWORD *)(a1 + 40), v10, &v20[v21[0] + v10]);
  if ( (_DWORD)result )
  {
    dwarfstring_constructor(v21);
    dwarfstring_append_printf_u(v21, "DW_DLE_ATTR_OUTSIDE_SECTION: The expression length %u,", v16);
    dwarfstring_append_printf_u(v21, " plus the leb value length of %u ", (_DWORD)v14);
    v12 = " runs past the end of the section. Corrupt Dwarf.";
    dwarfstring_append();
    goto LABEL_10;
  }
  *a2 = v16;
  *a3 = &v14[v10];
  return result;
}

