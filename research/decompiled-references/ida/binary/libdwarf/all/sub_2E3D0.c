unsigned __int64 __fastcall sub_2E3D0(_QWORD *a1, int a2, const char *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  const char *v8; // rdx
  __int64 v9; // rax
  _BYTE v12[40]; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( *a1 == 3959286781LL )
    {
      v7 = 473;
      if ( a2 )
        v7 = 472;
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = 0;
  }
  dwarfstring_constructor(v12);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append_printf_u(v12, a3, a4);
  dwarfstring_append_printf_s();
  v9 = dwarfstring_string(v12, " for section %s", v8);
  _dwarf_error_string(a1, a5, v7, v9);
  dwarfstring_destructor(v12);
  return v13 - __readfsqword(0x28u);
}

