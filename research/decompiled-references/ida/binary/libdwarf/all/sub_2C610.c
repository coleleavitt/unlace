unsigned __int64 __fastcall sub_2C610(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  _BYTE v6[40]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  dwarfstring_constructor(v6);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append_printf_u(v6, " %u bytes of space needed but the section is out of space ", a3);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append();
  v4 = dwarfstring_string(v6, ".");
  _dwarf_error_string(a1, a2, 124, v4);
  dwarfstring_destructor(v6);
  return v7 - __readfsqword(0x28u);
}

