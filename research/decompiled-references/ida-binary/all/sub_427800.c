bool __fastcall sub_427800(__int64 a1, __int64 a2)
{
  int v2; // edx
  bool result; // al

  v2 = *(_DWORD *)(a2 + 24);
  result = 1;
  if ( (v2 & 0x20) == 0 )
  {
    result = 0;
    if ( (v2 & 8) != 0 )
      return *(_DWORD *)(a2 + 28) == -1;
  }
  return result;
}
