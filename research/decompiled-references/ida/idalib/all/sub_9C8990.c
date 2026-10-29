char __fastcall sub_9C8990(__int64 a1)
{
  char v1; // al
  int v3; // eax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
  {
    if ( (unsigned int)sub_FA77D0(a1) == 2 )
    {
      return 1;
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v3 = sub_FA77D0(a1);
      else
        v3 = *(_BYTE *)(a1 + 34) >> 4;
      return v3 == 3;
    }
  }
  else
  {
    v1 = *(_BYTE *)(a1 + 34) >> 4;
    return v1 == 2 || v1 == 3;
  }
}
