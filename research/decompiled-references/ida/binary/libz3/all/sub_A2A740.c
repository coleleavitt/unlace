__int64 __fastcall sub_A2A740(char **a1)
{
  char *v1; // rbx
  __int64 result; // rax
  char *v3; // r12
  void *v4; // rbp
  char *v5; // rsi

  v1 = *a1;
  result = 5LL * *((unsigned int *)a1 + 2);
  v3 = &(*a1)[40 * *((unsigned int *)a1 + 2)];
  if ( *a1 != v3 )
  {
    do
    {
      v4 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v1);
      v5 = v1 + 16;
      v1 += 40;
      result = sub_182CBA0(v4, v5);
    }
    while ( v3 != v1 );
    v3 = *a1;
  }
  if ( v3 != (char *)(a1 + 2) )
  {
    if ( v3 )
      return sub_186B220(v3);
  }
  return result;
}

