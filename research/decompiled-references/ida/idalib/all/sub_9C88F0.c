char __fastcall sub_9C88F0(__int64 a1)
{
  char v1; // al
  int v3; // edx
  unsigned __int8 v4; // al

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
  {
    if ( (unsigned int)((__int64 (*)(void))sub_FA77D0)() != 2 )
    {
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
      {
        if ( (unsigned int)sub_FA77D0(a1) != 3 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
            v3 = sub_FA77D0(a1);
          else
            v3 = *(_BYTE *)(a1 + 34) >> 4;
          return v3 == 5;
        }
      }
      else
      {
        v4 = *(_BYTE *)(a1 + 34) >> 4;
        v3 = v4;
        if ( v4 != 3 )
          return v3 == 5;
      }
    }
    return 1;
  }
  v1 = *(_BYTE *)(a1 + 34) >> 4;
  return v1 == 2 || v1 == 3 || v1 == 5;
}
