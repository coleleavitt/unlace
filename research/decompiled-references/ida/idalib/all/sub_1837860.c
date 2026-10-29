_BOOL8 __fastcall sub_1837860(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int16 v2; // si
  _BOOL4 v3; // edx
  __int16 v5; // ax

  while ( 1 )
  {
    v1 = sub_BFBAE0(a1);
    v2 = *(_WORD *)v1 & 0x1FF;
    if ( ((v2 + 434) & 0x1FFu) <= 0x25 )
    {
      v3 = ((0x2004000001uLL >> (*(_BYTE *)v1 - 78)) & 1) == 0;
    }
    else
    {
      if ( v2 > 0x3Fu )
        break;
      v3 = ((0xC090000000000100LL >> *(_BYTE *)v1) & 1) == 0;
    }
    if ( !v3 )
      return v3;
    if ( v2 != 4 )
      break;
    a1 = *(_QWORD *)(v1 + 16);
  }
  v3 = 1;
  if ( ((v2 + 394) & 0x1FFu) <= 1 )
  {
    v5 = (*(_WORD *)(v1 + 2) >> 3) & 0x3F;
    if ( (((_BYTE)v5 + 62) & 0x3Fu) > 6 )
      LOBYTE(v3) = (unsigned int)(unsigned __int8)v5 - 16 <= 2;
  }
  return v3;
}
