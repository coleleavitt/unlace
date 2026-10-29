unsigned __int64 __fastcall dwarf_create_address_size_dwarf_error(__int64 a1, __int64 a2, int a3, int a4)
{
  const char *v6; // rdx
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  dwarfstring_constructor(v9);
  dwarfstring_append();
  dwarfstring_append_printf_u(v9, ": Address size of %u ", a3);
  dwarfstring_append_printf_s();
  v7 = dwarfstring_string(v9, "%s is not supported. Corrupt DWARF.", v6);
  _dwarf_error_string(a1, a2, a4, v7);
  dwarfstring_destructor(v9);
  return v10 - __readfsqword(0x28u);
}

