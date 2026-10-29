char *__fastcall sub_AF58C0(__int64 a1)
{
  unsigned int v1; // edx
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  result = "__stdcall";
  if ( v1 != 3 )
  {
    result = "stdcall";
    if ( v1 >= 3 )
      return (char *)"_stdcall";
  }
  return result;
}

