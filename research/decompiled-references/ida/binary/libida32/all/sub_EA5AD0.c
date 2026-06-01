bool __fastcall sub_EA5AD0(__int64 a1)
{
  bool result; // al
  unsigned int v2; // edx

  result = 0;
  if ( *(_DWORD *)(a1 + 44) == 15 )
  {
    v2 = *(_DWORD *)(a1 + 48);
    result = 1;
    if ( v2 - 27 > 1 )
      return v2 <= 1;
  }
  return result;
}

