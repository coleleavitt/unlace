const char *__fastcall sub_AF05E0(__int64 a1)
{
  int v1; // edx
  const char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  result = "__multiple_inheritance";
  if ( v1 != 1 )
  {
    result = "__single_inheritance";
    if ( v1 )
    {
      result = "__virtual_inheritance";
      if ( v1 != 2 )
        return "__unspecified_inheritance";
    }
  }
  return result;
}

