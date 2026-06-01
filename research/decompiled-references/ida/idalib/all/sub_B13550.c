char *__fastcall sub_B13550(__int64 a1)
{
  int v1; // edx
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_FA77D0(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  result = "inout";
  if ( v1 != 1 )
  {
    result = "in";
    if ( v1 )
      return "out";
  }
  return result;
}
