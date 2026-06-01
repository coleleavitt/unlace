__int16 __fastcall sub_2123710(__int64 a1, int a2)
{
  __int16 v2; // ax
  __int16 result; // ax

  v2 = *(_WORD *)(a1 + 12);
  if ( a2 == 1 )
  {
    result = v2 & 0xEFE7 | 8;
    HIBYTE(result) |= 0x10u;
    *(_WORD *)(a1 + 12) = result;
  }
  else
  {
    if ( a2 )
      LOWORD(a2) = 8 * (a2 != 2) + 16;
    result = a2 | v2 & 0xEFE7;
    HIBYTE(result) |= 0x10u;
    *(_WORD *)(a1 + 12) = result;
  }
  return result;
}
