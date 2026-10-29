__int64 __fastcall sub_22A0D00(__int64 a1, __int64 a2)
{
  if ( a2 == 7 )
    return 0;
  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 49 )
      return 1;
    if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 50 )
      return 2;
    if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 51 )
      return 3;
    if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 52 )
      return 5;
    if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 53 )
      return 6;
    if ( *(_DWORD *)a1 == 809003875 && *(_BYTE *)(a1 + 4) == 55 )
      return 7;
    if ( *(_DWORD *)a1 == 825781091 && *(_BYTE *)(a1 + 4) == 48 )
      return 8;
    if ( *(_DWORD *)a1 == 909667171 && *(_BYTE *)(a1 + 4) == 48 )
      return 10;
    return 0;
  }
  if ( a2 != 6 )
    return 0;
  if ( *(_DWORD *)a1 == 809003875 && *(_WORD *)(a1 + 4) == 29491 )
    return 4;
  if ( *(_DWORD *)a1 != 825781091 || *(_WORD *)(a1 + 4) != 30256 )
  {
    if ( *(_DWORD *)a1 == 909667171 && *(_WORD *)(a1 + 4) == 30256 )
      return 11;
    return 0;
  }
  return 9;
}
