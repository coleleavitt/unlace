bool __fastcall sub_22B7F00(__int64 a1)
{
  unsigned int v1; // ecx
  bool result; // al

  v1 = *(_DWORD *)(a1 + 32);
  result = 0;
  if ( v1 <= 0x3B )
    return ((1LL << v1) & 0xFBFFFEC9F5A7DAALL) != 0;
  return result;
}
