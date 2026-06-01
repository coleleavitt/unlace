const char *__fastcall sub_21B1770(_DWORD *a1)
{
  __int64 (*v1)(void); // rax
  char v2; // al
  bool v3; // zf
  const char *result; // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v1 == (char *)sub_21B1110 )
    v2 = a1[2] == 12;
  else
    v2 = v1();
  v3 = v2 == 0;
  result = "aix5coff64-rs6000";
  if ( v3 )
    return "aixcoff-rs6000";
  return result;
}
