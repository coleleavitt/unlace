char *__fastcall sub_74FCE0(__int64 a1)
{
  unsigned int v1; // eax
  char *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = "__pascal";
  if ( v1 != 3 )
  {
    v2 = "pascal";
    if ( v1 >= 4 )
      return "_pascal";
  }
  return v2;
}

