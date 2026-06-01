unsigned __int64 __fastcall sub_4AB30(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // edx
  __int64 v6; // rax
  _BYTE v8[32]; // [rsp+0h] [rbp-118h] BYREF
  _BYTE v9[200]; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v10; // [rsp+E8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  dwarfstring_constructor_static(v8, v9, 200);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append_printf_u(v8, " Bad value: 0x%x", a4);
  v6 = dwarfstring_string(v8, " Bad value: 0x%x", v5);
  _dwarf_error_string(a1, a2, 357, v6);
  dwarfstring_destructor(v8);
  return v10 - __readfsqword(0x28u);
}

