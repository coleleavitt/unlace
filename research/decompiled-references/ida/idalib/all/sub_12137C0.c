bool __fastcall sub_12137C0(__int64 a1)
{
  unsigned int v1; // edx
  bool result; // al

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 < 0x12 )
    return 0;
  result = 1;
  if ( v1 > 0x13 )
  {
    result = 0;
    if ( v1 == 38 )
      return *(_DWORD *)(a1 + 60) == 15;
  }
  return result;
}
