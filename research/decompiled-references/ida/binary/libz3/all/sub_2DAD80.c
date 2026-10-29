__int64 __fastcall sub_2DAD80(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  int i; // eax
  int v4; // edx

  v2 = a2;
  for ( i = *(_DWORD *)(a1 + 8); i > 8; *(_DWORD *)(a1 + 8) = i )
  {
    if ( i <= 13 )
    {
      if ( i == 10 )
        ++*(_DWORD *)(a1 + 12);
    }
    else if ( i != 32 )
    {
      break;
    }
    i = std::istream::get(*(std::istream **)a1);
  }
  v4 = (char)*a2;
  if ( !*a2 )
    return 1;
  while ( i && v4 == i )
  {
    ++v2;
    i = std::istream::get(*(std::istream **)a1);
    *(_DWORD *)(a1 + 8) = i;
    v4 = (char)*v2;
    if ( !*v2 )
      return 1;
  }
  return 0;
}

