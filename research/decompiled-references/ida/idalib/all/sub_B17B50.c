char *__fastcall sub_B17B50(__int64 a1)
{
  unsigned int v1; // eax
  bool v2; // cf
  char *result; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v1 = sub_FA77D0(a1);
  else
    v1 = *(_BYTE *)(a1 + 34) >> 4;
  v2 = v1 < 2;
  result = "vls_cc";
  if ( !v2 )
    return "riscv_vls_cc";
  return result;
}
