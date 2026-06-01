__int64 __fastcall sub_1EAADD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 result; // rax
  unsigned int v4; // ecx

  v2 = *(_DWORD *)(a1 + 9256);
  result = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 512) )
      v4 = *(_DWORD *)(a1 + 508);
    else
      v4 = *(_DWORD *)(a2 + 4);
    result = 0;
    if ( v4 <= 5 )
    {
      if ( ((1LL << v4) & 0x23) != 0 )
      {
        return (v2 >> 1) & 1;
      }
      else if ( ((1LL << v4) & 0x1C) != 0 )
      {
        return *(_DWORD *)(a1 + 9256) & 1;
      }
    }
  }
  return result;
}
