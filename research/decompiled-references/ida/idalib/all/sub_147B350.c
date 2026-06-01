bool __fastcall sub_147B350(__int64 a1)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( (*(_BYTE *)(a1 + 720) & 2) == 0 )
  {
    v2 = **(_BYTE **)a1 & 7;
    if ( v2 != 1 && (v2 != 2 || !*(_DWORD *)(a1 + 96)) )
    {
      result = 0;
      if ( !*(_DWORD *)(a1 + 56) )
        return ((1LL << *(_DWORD *)(a1 + 96)) & 0x200F01) != 0;
    }
  }
  return result;
}
