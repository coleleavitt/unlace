char *__fastcall sub_74D580(__int64 a1)
{
  unsigned int v1; // eax
  char *v2; // rdx

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v1 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v1 = sub_C4A760(a1);
  v2 = "constant";
  if ( v1 != 1 )
  {
    v2 = "__constant";
    if ( v1 >= 2 )
      return "opencl_constant";
  }
  return v2;
}

