__int64 __fastcall sub_3C5EC0(__int64 *a1, _BYTE *a2, unsigned __int8 a3)
{
  __int64 module_data; // rsi
  __int64 v7; // rdi

  if ( !a1 )
    return 0;
  if ( !a2 || !*a2 )
  {
    v7 = *a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v7);
      *a1 = 0;
      a1[2] = 0;
    }
    clear_tinfo_t(a1 + 3);
    return 1;
  }
  if ( !(unsigned __int8)parse_decl(a1 + 3, a1, 0, a2, (unsigned int)a3 + 33930) )
    return 0;
  module_data = get_module_data((unsigned int)dword_4EB8F8);
  if ( sub_32CEA0(a1 + 3, module_data, -1) )
    return 1;
  if ( a3 )
    return 0;
  sub_2B5230((__int64)"AUTOHIDE NONE\nSorry, the entered type is inacceptable");
  return 0;
}
