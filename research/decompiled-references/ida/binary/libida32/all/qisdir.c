bool __fastcall qisdir(char *a1)
{
  int v1; // edx
  bool result; // al
  __int16 v3; // [rsp+Ch] [rbp-5Ch]

  v1 = qstat(a1);
  result = 0;
  if ( !v1 )
    return (v3 & 0xF000) == 0x4000;
  return result;
}

