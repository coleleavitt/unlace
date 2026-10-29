char *__fastcall sub_B1AAF0(__int64 a1)
{
  unsigned int v1; // eax
  bool v2; // zf
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_FA77D0(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v1 > 3 )
    return "maybe_unused";
  v2 = v1 == 0;
  result = "unused";
  if ( v2 )
    return "maybe_unused";
  return result;
}
