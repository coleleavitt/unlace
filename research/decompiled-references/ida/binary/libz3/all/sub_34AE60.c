__int64 __fastcall sub_34AE60(__int64 a1)
{
  char *v2; // r15
  __int64 v3; // rax
  char *v4; // rbx
  char *v5; // r14
  void *v6; // rbp
  char *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rbp
  void *v11; // r14
  void *v12; // rdi
  void *v13; // rbx

  v2 = *(char **)(a1 + 72);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 80);
    if ( (_DWORD)v3 )
    {
      v4 = *(char **)(a1 + 72);
      v5 = &v2[40 * v3];
      do
      {
        v6 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 8);
        v7 = v4 + 24;
        v4 += 40;
        sub_182CBA0(v6, v7);
      }
      while ( v4 != v5 );
    }
    sub_186B220(v2);
  }
  v8 = *(_QWORD **)(a1 + 64);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 )
    {
      v10 = &v8[5 * v9];
      do
      {
        while ( 1 )
        {
          v11 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v8 + 1);
          sub_182CBA0(v11, v8 + 3);
          if ( !*v8 )
            break;
          v12 = (void *)(*v8 - 8LL);
          v8 += 5;
          sub_186B220(v12);
          if ( v8 == v10 )
          {
            v8 = *(_QWORD **)(a1 + 64);
            goto LABEL_12;
          }
        }
        v8 += 5;
      }
      while ( v10 != v8 );
      v8 = *(_QWORD **)(a1 + 64);
    }
LABEL_12:
    sub_186B220(v8 - 1);
  }
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 32);
  return sub_182CBA0(v13, a1 + 48);
}

