unsigned __int64 __fastcall sub_2E2B0(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  const char *v6; // rdx
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( *a1 == 3959286781LL )
    {
      v5 = 473;
      if ( a2 )
        v5 = 472;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = 0;
  }
  dwarfstring_constructor(v9);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append_printf_s();
  v7 = dwarfstring_string(v9, " for section %s", v6);
  _dwarf_error_string(a1, a4, v5, v7);
  dwarfstring_destructor(v9);
  return v10 - __readfsqword(0x28u);
}

