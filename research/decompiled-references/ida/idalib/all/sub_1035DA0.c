char *__fastcall sub_1035DA0(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  char *result; // rax

  if ( *(_BYTE *)(a1 + 24) == 64 )
    return "e";
  v3 = *(_QWORD *)(a1 + 112) == sub_21F90D0(a1, a2, a3);
  result = "g";
  if ( !v3 )
    return "u9__ieee128";
  return result;
}
