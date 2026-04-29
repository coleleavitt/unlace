__int64 __fastcall sub_5E60(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned int v3; // edx

  v2 = *(_WORD *)(a2 + 24);
  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( v2 != 81 && v2 != 497 )
    {
      v3 = -1;
      if ( v2 == 14 && *(_BYTE *)(a2 + 41) == 1 && *(_BYTE *)(a2 + 81) == 1 )
      {
        v3 = *(unsigned __int16 *)(a2 + 86);
        if ( *(_WORD *)(a2 + 46) != (_WORD)v3 )
          return (unsigned int)-1;
      }
      return v3;
    }
  }
  else if ( v2 != 30 )
  {
    v3 = -1;
    if ( v2 != 14 || *(_BYTE *)(a2 + 41) != 1 || *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) != 15 )
      return v3;
    return *(unsigned __int16 *)(a2 + 46);
  }
  v3 = -1;
  if ( *(_BYTE *)(a2 + 41) == 1 )
    return *(unsigned __int16 *)(a2 + 46);
  return v3;
}
