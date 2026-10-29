void __fastcall sub_83D8C0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  void *v3; // rbx
  char *v4; // r13
  __int64 v5; // rax
  char *v6; // r15
  char *v7; // rbx
  void *v8; // r14
  char *v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-48h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v10 = v1 + 72 * v2;
      do
      {
        v3 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 40);
        sub_182CBA0(v3, v1 + 56);
        v4 = *(char **)(v1 + 8);
        if ( v4 )
        {
          v5 = *(unsigned int *)(v1 + 16);
          if ( (_DWORD)v5 )
          {
            v6 = *(char **)(v1 + 8);
            v7 = &v4[48 * v5];
            do
            {
              v8 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v6 + 16);
              v9 = v6 + 32;
              v6 += 48;
              sub_182CBA0(v8, v9);
            }
            while ( v7 != v6 );
          }
          sub_186B220(v4);
        }
        v1 += 72;
      }
      while ( v1 != v10 );
      v1 = *a1;
    }
    sub_186B220((void *)(v1 - 8));
  }
}

