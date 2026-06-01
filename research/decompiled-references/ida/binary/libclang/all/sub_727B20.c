char *__fastcall sub_727B20(__int64 a1)
{
  unsigned int v1; // eax
  char *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = "alignas";
  if ( v1 != 4 )
  {
    v2 = "_Alignas";
    if ( v1 <= 4 )
    {
      v2 = "aligned";
      if ( v1 == 3 )
        return "align";
    }
  }
  return v2;
}

