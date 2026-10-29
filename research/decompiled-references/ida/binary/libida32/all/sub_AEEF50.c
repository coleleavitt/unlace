char *__fastcall sub_AEEF50(__int64 a1)
{
  unsigned int v1; // edx
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  result = "__fastcall";
  if ( v1 != 3 )
  {
    result = "fastcall";
    if ( v1 >= 3 )
      return (char *)"_fastcall";
  }
  return result;
}

