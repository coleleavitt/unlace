__int64 __fastcall qfilelength(unsigned int a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbp

  v1 = -1;
  v2 = qtell();
  if ( v2 != -1 )
  {
    v3 = v2;
    v1 = qseek(a1, 0, 2);
    qseek(a1, v3, 0);
  }
  return v1;
}

