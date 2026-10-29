bool __fastcall sub_1213820(__int64 a1)
{
  unsigned int v1; // ecx
  bool result; // al

  v1 = *(_DWORD *)(a1 + 48);
  result = 1;
  if ( v1 <= 0x2A )
    return ((1LL << v1) & 0x68000000000LL) == 0;
  return result;
}
