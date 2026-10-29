bool __fastcall sub_EA9FC0(__int64 a1)
{
  bool result; // al
  unsigned int v2; // ecx

  result = 1;
  if ( *(_BYTE *)(a1 + 168) )
  {
    v2 = *(_DWORD *)(a1 + 64);
    result = 0;
    if ( v2 <= 0x25 )
      return ((1LL << v2) & 0x30A01FE01CLL) != 0;
  }
  return result;
}

