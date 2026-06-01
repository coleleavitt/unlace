char *__fastcall sub_74F740(__int64 a1)
{
  unsigned int v1; // eax
  char *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = "ownership_takes";
  if ( v1 <= 5 )
  {
    v2 = "ownership_returns";
    if ( v1 <= 2 )
      return "ownership_holds";
  }
  return v2;
}

