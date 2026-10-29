char *__fastcall sub_B0D430(__int64 a1)
{
  unsigned int v1; // edx
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_FA77D0(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  result = "__cdecl";
  if ( v1 != 3 )
  {
    result = "cdecl";
    if ( v1 >= 3 )
      return "_cdecl";
  }
  return result;
}
