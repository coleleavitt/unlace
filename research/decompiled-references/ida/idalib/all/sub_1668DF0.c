void __fastcall sub_1668DF0(__int64 a1, __int64 a2)
{
  char ***v3; // r12
  __int64 v4; // rax
  char ***v5; // rbx
  __int64 v6; // r13
  char ***v7; // r15
  __int64 v8; // rbp
  char v9; // al
  char **v10; // rax
  char ***v11; // rbx
  char ***v12; // rdi
  int v13; // ebx
  __int64 v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (char ***)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 56, v14);
  v5 = *(char ****)a1;
  v6 = v4;
  v7 = (char ***)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
  if ( *(char ****)a1 != v7 )
  {
    v8 = v4;
    do
    {
      *(_DWORD *)v8 = *(_DWORD *)v5;
      v10 = v5[1];
      *(_DWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 8) = v10;
      *(_QWORD *)(v8 + 16) = v8 + 32;
      *(_DWORD *)(v8 + 28) = 4;
      if ( *((_DWORD *)v5 + 6) )
        sub_1668090((char ***)(v8 + 16), v5 + 2);
      v9 = *((_BYTE *)v5 + 48);
      v5 += 7;
      v8 += 56;
      *(_BYTE *)(v8 - 8) = v9;
    }
    while ( v7 != v5 );
    v11 = *(char ****)a1;
    v7 = (char ***)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
    if ( *(char ****)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 7;
          v12 = (char ***)v7[2];
          if ( v12 == v7 + 4 )
            break;
          free(v12);
          if ( v7 == v11 )
          {
            v7 = *(char ****)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v7 != v11 );
      v7 = *(char ****)a1;
    }
  }
LABEL_10:
  v13 = v14[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v13;
}
