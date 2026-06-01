char *__fastcall sub_AEC670(__int64 a1)
{
  int v1; // eax
  bool v2; // zf
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_F83A90(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  v2 = v1 == 0;
  result = "constinit";
  if ( !v2 )
    return "require_constant_initialization";
  return result;
}

