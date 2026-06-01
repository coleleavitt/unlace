__int64 __fastcall dwarf_tied_compare_function(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // dl

  if ( a1 >= a1 + 8 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_BYTE *)(a2 + v2);
    if ( *(char *)(a1 + v2) < v3 )
      return 0xFFFFFFFFLL;
    if ( *(char *)(a1 + v2) > v3 )
      break;
    if ( ++v2 == 8 )
      return 0;
  }
  return 1;
}

