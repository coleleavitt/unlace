__int64 __fastcall sub_2DAE10(__int64 a1)
{
  int v1; // eax
  unsigned int i; // ebp

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 10 )
    return 0xFFFFFFFFLL;
  while ( v1 > 8 && (v1 == 32 || v1 <= 13) )
  {
    v1 = std::istream::get(*(std::istream **)a1);
    *(_DWORD *)(a1 + 8) = v1;
    if ( v1 == 10 )
      return 0xFFFFFFFFLL;
  }
  for ( i = 0; (unsigned int)(v1 - 48) <= 9; *(_DWORD *)(a1 + 8) = v1 )
  {
    i = v1 + 10 * i - 48;
    v1 = std::istream::get(*(std::istream **)a1);
  }
  return i;
}

