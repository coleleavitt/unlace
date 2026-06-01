const char *__fastcall sub_741580(__int64 a1)
{
  unsigned int v1; // eax
  const char *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = "__virtual_inheritance";
  if ( v1 != 2 )
  {
    v2 = "__unspecified_inheritance";
    if ( v1 <= 2 )
    {
      v2 = "__single_inheritance";
      if ( v1 )
        return "__multiple_inheritance";
    }
  }
  return v2;
}

