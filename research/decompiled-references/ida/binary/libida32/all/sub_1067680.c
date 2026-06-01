char __fastcall sub_1067680(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char result; // al

  v3 = *(_DWORD *)(a1 + 556);
  switch ( a3 )
  {
    case 4LL:
      result = 1;
      if ( *(_DWORD *)a2 != 1936746861 )
      {
        if ( *(_DWORD *)a2 == 875982950 )
          return *(_DWORD *)(a1 + 564) == 2;
        return 0;
      }
      goto LABEL_16;
    case 3LL:
      if ( *(_WORD *)a2 == 29540 && *(_BYTE *)(a2 + 2) == 112 )
        return v3 > 0;
      if ( *(_WORD *)a2 == 29549 && *(_BYTE *)(a2 + 2) == 97 )
        return *(_BYTE *)(a1 + 560);
      return 0;
    case 5LL:
      if ( *(_DWORD *)a2 == 1919972196 && *(_BYTE *)(a2 + 4) == 50 )
        return v3 > 1;
      return 0;
  }
  result = 0;
LABEL_16:
  if ( result )
    return 1;
  return result;
}

