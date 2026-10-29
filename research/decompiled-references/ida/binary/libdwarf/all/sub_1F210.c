unsigned __int64 __fastcall sub_1F210(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v6; // rax
  const char *v8; // [rsp+0h] [rbp-68h] BYREF
  char *v9; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v10[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = nullptr;
  dwarfstring_constructor(v10);
  dwarf_get_FORM_name(a3, &v8);
  dwarf_get_AT_name(a4, (const char **)&v9);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append_printf_s();
  dwarfstring_append();
  dwarfstring_append();
  v6 = dwarfstring_string(v10, "is not a valid reference form");
  _dwarf_error_string(a1, a2, 226, v6);
  dwarfstring_destructor(v10);
  return v11 - __readfsqword(0x28u);
}

