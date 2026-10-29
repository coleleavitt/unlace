__int64 __fastcall sub_8D96A0(const char *a1)
{
  char *v1; // rax
  char *v2; // rbp

  if ( (unsigned __int8)qisdir(a1) )
    return 0;
  v1 = strrchr(a1, 47);
  v2 = v1;
  if ( v1 )
  {
    *v1 = 0;
    sub_8D96A0(a1);
    *v2 = 47;
  }
  return qmkdir(a1, 511);
}

