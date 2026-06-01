bool __fastcall sub_EAA0E0(__int64 a1)
{
  bool result; // al
  unsigned int v2; // ecx

  result = 1;
  if ( *(_BYTE *)(a1 + 120) )
  {
    v2 = *(_DWORD *)(a1 + 64);
    result = 0;
    if ( v2 <= 0x12 )
      return ((1LL << v2) & 0x6661C) != 0;
  }
  return result;
}

