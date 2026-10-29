char *__fastcall sub_AF3F80(__int64 a1)
{
  unsigned int v1; // eax
  bool v2; // cf
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  v2 = v1 < 3;
  result = "regcall";
  if ( !v2 )
    return "__regcall";
  return result;
}

