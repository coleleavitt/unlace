void __fastcall sub_7FE960(char ***a1)
{
  char **v1; // rbx
  __int64 v2; // rax
  void *v3; // r12
  char *v4; // r13
  __int64 v5; // rax
  char *v6; // r15
  char *v7; // r12
  void *v8; // r14
  char *v9; // rsi
  char **v10; // [rsp+0h] [rbp-48h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 )
    {
      v10 = &v1[7 * v2];
      do
      {
        v3 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 3);
        sub_182CBA0(v3, v1 + 5);
        v4 = *v1;
        if ( *v1 )
        {
          v5 = *((unsigned int *)v1 + 2);
          if ( (_DWORD)v5 )
          {
            v6 = *v1;
            v7 = &v4[40 * v5];
            do
            {
              v8 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v6 + 8);
              v9 = v6 + 24;
              v6 += 40;
              sub_182CBA0(v8, v9);
            }
            while ( v7 != v6 );
          }
          sub_186B220(v4);
        }
        v1 += 7;
      }
      while ( v1 != v10 );
      v1 = *a1;
    }
    sub_186B220(v1 - 1);
  }
}

