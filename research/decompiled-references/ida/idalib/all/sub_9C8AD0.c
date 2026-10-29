bool __fastcall sub_9C8AD0(__int64 a1)
{
  char v1; // dl
  int v3; // eax
  unsigned __int8 v4; // dl

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
  {
    if ( (unsigned int)sub_FA77D0(a1) == 4 )
      return 1;
    if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    {
      if ( (unsigned int)sub_FA77D0(a1) == 5 )
        return 1;
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
      {
        if ( (unsigned int)sub_FA77D0(a1) != 6 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
            v3 = sub_FA77D0(a1);
          else
            v3 = *(_BYTE *)(a1 + 34) >> 4;
          return v3 == 7;
        }
        return 1;
      }
      v4 = *(_BYTE *)(a1 + 34) >> 4;
      v3 = v4;
    }
    else
    {
      v4 = *(_BYTE *)(a1 + 34) >> 4;
      v3 = v4;
      if ( v4 == 5 )
        return 1;
    }
    if ( v4 != 6 )
      return v3 == 7;
    return 1;
  }
  v1 = *(_BYTE *)(a1 + 34) >> 4;
  return v1 == 4 || v1 == 5 || v1 == 6 || v1 == 7;
}
