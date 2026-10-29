unsigned __int64 __fastcall dwarf_error_creation(_QWORD *a1, __int64 a2, const char *a3)
{
  __int64 v5; // rax
  _BYTE v6[40]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( a1 && *a1 == 3959286781LL )
  {
    dwarfstring_constructor(v6);
    dwarfstring_append();
    dwarfstring_append();
    v5 = dwarfstring_string(v6, a3);
    _dwarf_error_string(a1, a2, 467, v5);
    dwarfstring_destructor(v6);
  }
  return v7 - __readfsqword(0x28u);
}

