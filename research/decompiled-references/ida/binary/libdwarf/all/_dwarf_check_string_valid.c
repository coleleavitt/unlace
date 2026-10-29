__int64 __fastcall dwarf_check_string_valid(__int64 a1, unsigned __int64 a2, _BYTE *a3, _BYTE *a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( (unsigned __int64)a3 < a2 || a3 >= a4 )
  {
    _dwarf_error(a1, a6, a5);
    return 1;
  }
  result = 0;
  if ( !*(_BYTE *)(a1 + 281) )
  {
    do
    {
      if ( !*a3 )
        return 0;
      ++a3;
    }
    while ( a4 != a3 );
    _dwarf_error(a1, a6, 303);
    return 1;
  }
  return result;
}

