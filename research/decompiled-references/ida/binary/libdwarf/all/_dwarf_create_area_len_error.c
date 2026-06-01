unsigned __int64 __fastcall dwarf_create_area_len_error(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // edx
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  dwarfstring_constructor(v9);
  dwarfstring_append_printf_u(v9, "DW_DLE_HEADER_LEN_BIGGER_THAN_SECSIZE:  The header length of 0x%x is larger", a3);
  dwarfstring_append_printf_u(v9, " than the section length of 0x%x.", a4);
  v7 = dwarfstring_string(v9, " than the section length of 0x%x.", v6);
  _dwarf_error_string(a1, a2, 342, v7);
  dwarfstring_destructor(v9);
  return v10 - __readfsqword(0x28u);
}

