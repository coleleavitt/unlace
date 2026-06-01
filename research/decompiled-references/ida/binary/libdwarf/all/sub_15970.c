int __fastcall sub_15970(
        __int64 a1,
        __int64 a2,
        struct Dwarf_Attribute_s *a3,
        __int64 a4,
        Dwarf_Addr *a5,
        _DWORD *a6,
        Dwarf_Error *a7)
{
  int result; // eax
  int is_indexed; // eax
  __int64 v12; // rax
  Dwarf_Half v14; // [rsp+1Eh] [rbp-6Ah] BYREF
  _BYTE v15[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v14 = 0;
  result = dwarf_whatform(a3, &v14, a7);
  if ( !result )
  {
    is_indexed = dwarf_addr_form_is_indexed(v14);
    if ( a4 < 0 && is_indexed )
    {
      dwarfstring_constructor(v15);
      dwarfstring_append();
      dwarfstring_append();
      dwarfstring_append();
      v12 = dwarfstring_string(v15, " CU_DIE uses an indexed attribute yet DW_AT_addr_base is not in the CU DIE.");
      _dwarf_error_string(a1, a7, 115, v12);
      dwarfstring_destructor(v15);
      return 1;
    }
    else if ( v14 == 16 )
    {
      *a6 = 1;
      return -1;
    }
    else
    {
      result = dwarf_formaddr(a3, a5 + 47, a7);
      if ( !result )
      {
        *(Dwarf_Addr *)((char *)a5 + 340) = 0x100000001LL;
        a5[49] = a5[47];
      }
    }
  }
  return result;
}

