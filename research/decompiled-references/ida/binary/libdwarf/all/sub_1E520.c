unsigned __int64 __fastcall sub_1E520(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  __int64 v6; // rax
  _BYTE v8[40]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  dwarfstring_constructor(v8);
  dwarfstring_append_printf_s();
  dwarfstring_append_printf_u(v8, " with %u entries failed.", a2);
  v6 = dwarfstring_string(v8, " with %u entries failed.", v5);
  _dwarf_error_string(a1, a4, 62, v6);
  dwarfstring_destructor(v8);
  return v9 - __readfsqword(0x28u);
}

