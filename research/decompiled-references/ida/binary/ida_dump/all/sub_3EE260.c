char __fastcall sub_3EE260(__int64 a1)
{
  int v1; // ecx
  int v2; // edx
  char result; // al
  int v4; // ecx
  int v5; // edx
  __int64 v6; // rsi

  v1 = *(unsigned __int16 *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 28);
  if ( (unsigned __int16)v1 > 0x3Cu )
  {
    if ( (unsigned __int16)(v1 - 108) > 0xBu )
    {
LABEL_3:
      result = 7;
      v4 = *(_DWORD *)(a1 + 28) & 0x1018;
      if ( v4 != 4112 )
        return (v4 == 4104 || (*(_DWORD *)(a1 + 28) & 0x1008) == 0) + 1;
      return result;
    }
  }
  else if ( (unsigned __int16)v1 <= 0x39u )
  {
    goto LABEL_3;
  }
  if ( (v2 & 0x10) != 0 )
  {
    result = 7;
    if ( (*(_BYTE *)(a1 + 33) & 8) == 0 )
    {
      if ( (v2 & 0x800) != 0 )
      {
        v6 = 0x2AA80050D0000007LL;
        if ( !_bittest64(&v6, (unsigned int)(v1 - 58)) )
          return 2 * ((*(_DWORD *)(a1 + 28) & 0x818) == 2064);
      }
      else
      {
        return (*(_DWORD *)(a1 + 28) & 0x818) == 16;
      }
    }
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 28) & 0x818;
    if ( v5 == 2056 || !v5 )
      return 2;
    else
      return v5 == 8 || v5 == 2048;
  }
  return result;
}
