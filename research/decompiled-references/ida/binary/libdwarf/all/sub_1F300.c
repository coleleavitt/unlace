unsigned __int64 __fastcall sub_1F300(__int64 a1, __int64 a2, unsigned int a3)
{
  const char *v4; // rdx
  __int64 v5; // rax
  char *v7; // [rsp+8h] [rbp-120h] BYREF
  _BYTE v8[32]; // [rsp+10h] [rbp-118h] BYREF
  _BYTE v9[200]; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v10; // [rsp+F8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v7 = "<unknown form>";
  dwarfstring_constructor_static(v8, v9, 200);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append_printf_u(v8, " on seeing form  0x%x ", a3);
  dwarf_get_FORM_name(a3, (const char **)&v7);
  dwarfstring_append_printf_s();
  v5 = dwarfstring_string(v8, " (%s)", v4);
  _dwarf_error_string(a1, a2, 114, v5);
  dwarfstring_destructor(v8);
  return v10 - __readfsqword(0x28u);
}

