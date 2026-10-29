__m128i *__fastcall sub_1057AF0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __m128i *result; // rax
  bool v4; // zf

  v1 = a1[1];
  v2 = *a1;
  if ( v1 == 7 )
  {
    if ( *(_DWORD *)v2 == 1701733735 && *(_WORD *)(v2 + 4) == 26994 && *(_BYTE *)(v2 + 6) == 99 )
      return &off_2B30340;
    return (__m128i *)&off_2B303A0;
  }
  if ( v1 == 2 )
  {
    switch ( *(_WORD *)v2 )
    {
      case 0x3176:
        return &off_2B30350;
      case 0x3276:
        return &off_2B30360;
      case 0x3376:
        return &off_2B30370;
      default:
        v4 = *(_WORD *)v2 == 13430;
        result = (__m128i *)&off_2B303A0;
        if ( v4 )
          return (__m128i *)(&off_2B303A0 - 4);
        break;
    }
  }
  else
  {
    if ( v1 != 5 || *(_DWORD *)v2 != 1651470960 || *(_BYTE *)(v2 + 4) != 101 )
      return (__m128i *)&off_2B303A0;
    return &off_2B30390;
  }
  return result;
}

