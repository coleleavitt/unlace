__int64 __fastcall sub_74D1D0(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  unsigned int v4; // eax
  unsigned int v5; // edx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
  {
    v1 = 4;
    v2 = *(_BYTE *)(a1 + 30) >> 4;
    if ( v2 <= 3 )
      return 2 * (unsigned int)(v2 > 1);
    return v1;
  }
  else
  {
    v4 = sub_C4A760(a1);
    v5 = 4;
    if ( v4 <= 3 )
      return 2 * (unsigned int)(v4 > 1);
    return v5;
  }
}

