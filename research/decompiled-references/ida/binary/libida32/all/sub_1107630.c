__int64 __fastcall sub_1107630(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  __int64 v3; // rsi

  result = 0x657B6EFDFFF80000LL;
  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0x617B6EFDFFF80000LL;
  if ( v2 <= 0x38 && ((0x18000681800403AuLL >> v2) & 1) != 0 )
  {
    result = 0x657F6EFDFFF80000LL;
    v3 = 0x617F6EFDFFF80000LL;
  }
  if ( v2 != 38 )
  {
    if ( v2 - 3 > 2 )
    {
      if ( v2 - 27 >= 2 )
        result = v3;
    }
    else
    {
      if ( v2 == 5 )
        return v3;
      if ( *(_DWORD *)(a1 + 64) != 13 )
      {
LABEL_8:
        if ( *(_DWORD *)(a1 + 64) != 13 )
          return result | 0x1C0;
        return result;
      }
      result = v3;
    }
    if ( v2 - 3 > 1 )
      return result;
    goto LABEL_8;
  }
  return result;
}

