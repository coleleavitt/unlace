__int64 __fastcall sub_3C0880(_QWORD *a1, _BYTE *a2, char a3)
{
  __int64 module_data; // rax
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d

  if ( !a1 )
    return 0;
  if ( !a2 || !*a2 )
  {
    if ( *a1 )
    {
      a1[1] = 0;
      qfree();
      *a1 = 0;
      a1[2] = 0;
    }
    clear_tinfo_t();
    return 1;
  }
  if ( !(unsigned __int8)parse_decl() )
    return 0;
  module_data = get_module_data();
  v5 = module_data;
  if ( (unsigned __int8)sub_329720(a1 + 3, module_data, -1) )
    return 1;
  if ( a3 )
    return 0;
  sub_2B1D90((unsigned int)"AUTOHIDE NONE\nSorry, the entered type is inacceptable", v5, v6, v7, v8, v9);
  return 0;
}
