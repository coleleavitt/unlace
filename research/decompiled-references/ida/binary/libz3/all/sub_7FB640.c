__int64 __fastcall sub_7FB640(char **a1)
{
  void *v1; // rbp
  __int64 result; // rax
  char *v3; // r14
  __int64 v4; // rax
  char *v5; // rbx
  char *v6; // r13
  void *v7; // rbp
  char *v8; // rsi

  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 3);
  result = sub_182CBA0(v1, a1 + 5);
  v3 = *a1;
  if ( *a1 )
  {
    v4 = *((unsigned int *)a1 + 2);
    if ( (_DWORD)v4 )
    {
      v5 = *a1;
      v6 = &v3[40 * v4];
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5 + 8);
        v8 = v5 + 24;
        v5 += 40;
        sub_182CBA0(v7, v8);
      }
      while ( v5 != v6 );
    }
    return sub_186B220(v3);
  }
  return result;
}

