char *__fastcall sub_B174A0(__int64 a1)
{
  unsigned int v1; // edx
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_FA77D0(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  result = "__pascal";
  if ( v1 != 3 )
  {
    result = "pascal";
    if ( v1 >= 3 )
      return (char *)"_pascal";
  }
  return result;
}
