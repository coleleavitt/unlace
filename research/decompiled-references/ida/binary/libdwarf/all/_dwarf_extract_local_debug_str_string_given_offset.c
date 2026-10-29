__int64 __fastcall dwarf_extract_local_debug_str_string_given_offset(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-90h]
  int v18; // [rsp+14h] [rbp-84h]
  char *v19; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v20[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( a2 == 14 )
  {
LABEL_6:
    result = _dwarf_load_section(a1, a1 + 364, a5);
    if ( (_DWORD)result )
      return result;
    v10 = a1[364];
    v11 = a1[365];
    v12 = 53;
    v13 = v10 + a3;
    v14 = v10 + v11;
    goto LABEL_8;
  }
  if ( a2 != 31 )
  {
    if ( a2 - 37 > 3 && a2 != 7938 && a2 != 26 )
    {
      sub_1F300((__int64)a1, a5, a2);
      return 1;
    }
    goto LABEL_6;
  }
  result = _dwarf_load_section(a1, a1 + 161, a5);
  if ( (_DWORD)result )
    return result;
  v10 = a1[161];
  v11 = a1[162];
  v12 = 204;
  v13 = v10 + a3;
  v14 = v10 + v11;
LABEL_8:
  if ( a3 >= v11 )
  {
    v18 = v12;
    v17 = v11;
    v19 = "<unknownform>";
    dwarf_get_FORM_name(a2, (const char **)&v19);
    dwarfstring_constructor(v20);
    dwarfstring_append();
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_u(v20, "string offset of 0x%llx ", a3);
    dwarfstring_append_printf_u(v20, "is larger than the string section size of  0x%llx", v17);
    v16 = dwarfstring_string(v20, "is larger than the string section size of  0x%llx", v15);
    _dwarf_error_string(a1, a5, v18, v16);
    dwarfstring_destructor(v20);
    return 1;
  }
  result = _dwarf_check_string_valid(a1, v10, v13, v14, v12, a5);
  if ( !(_DWORD)result )
    *a4 = v13;
  return result;
}

