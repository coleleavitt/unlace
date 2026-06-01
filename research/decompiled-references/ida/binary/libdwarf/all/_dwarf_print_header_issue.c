unsigned __int64 __fastcall dwarf_print_header_issue(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  _BYTE v16[40]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a8 )
  {
    if ( *(_DWORD *)dwarf_cmdline_options )
    {
      dwarfstring_constructor(v16);
      dwarfstring_append();
      dwarfstring_append();
      dwarfstring_append_printf_i(v16, " %lld", a4);
      if ( a5 | a6 | a7 )
      {
        dwarfstring_append_printf_u(v16, "; Mismatch index %u", a5);
        dwarfstring_append_printf_u(v16, " stdval %u", a6);
        dwarfstring_append_printf_u(v16, " linetabval %u", a7);
      }
      v11 = *(_QWORD *)(a1 + 1056);
      if ( a3 < v11 || a3 >= v11 + *(_QWORD *)(a1 + 1064) )
      {
        dwarfstring_append();
      }
      else
      {
        v12 = a3 - v11;
        dwarfstring_append_printf_u(v16, " at offset 0x%08llx", v12);
        dwarfstring_append_printf_u(v16, "  ( %llu ) ", v12);
      }
      dwarfstring_append();
      v13 = dwarfstring_string(v16, "***\n");
      _dwarf_printf(a1, v13);
      dwarfstring_destructor(v16);
    }
    ++*a8;
  }
  return v17 - __readfsqword(0x28u);
}

