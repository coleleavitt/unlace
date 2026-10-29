bool __fastcall sub_C7A510(__int64 a1)
{
  bool result; // al
  unsigned int v2; // ecx

  result = 1;
  if ( *(_DWORD *)(a1 + 8) == 13 )
  {
    v2 = *(_DWORD *)(a1 + 64);
    if ( v2 <= 0xC )
      return ((1LL << v2) & 0x1A94) == 0;
  }
  return result;
}

