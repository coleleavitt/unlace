__int64 __fastcall sub_F491D0(_QWORD *a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  __int64 result; // rax

  v2 = (*(_WORD *)(*a1 + 18LL) >> 3) & 0x1FF;
  if ( ((v2 + 74) & 0x1FFu) <= 0x31
    && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(*a1 + 18LL) >> 3) + 74)) & 1) != 0 )
  {
    return *(_BYTE *)(a1[1] + 8LL) & 0x7F;
  }
  if ( v2 == 440 )
    return 4;
  if ( v2 <= 0x1B8u )
  {
    if ( v2 == 435 )
      return 1;
    if ( v2 < 0x1B3u )
      return 0;
    if ( v2 != 437 )
    {
      result = 19;
      if ( v2 < 0x1B5u )
        return result;
      if ( v2 != 439 )
        return sub_F492D0(a1, a2);
      return 3;
    }
    return 2;
  }
  if ( v2 == 448 )
    return 2;
  if ( v2 <= 0x1C0u )
  {
    if ( v2 == 441 )
      return 5;
    if ( v2 == 442 )
      return 6;
    return sub_F492D0(a1, a2);
  }
  if ( v2 == 450 )
    return 3;
  if ( v2 >= 0x1C2u && ((v2 + 24) & 0x1FFu) <= 0x14 )
    return 0;
  return sub_F492D0(a1, a2);
}

