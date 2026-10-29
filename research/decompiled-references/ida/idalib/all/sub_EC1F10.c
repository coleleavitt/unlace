void __fastcall sub_EC1F10(__int64 a1, __int64 a2)
{
  char ***v2; // r13
  __int64 v4; // rax
  char ***v5; // rbp
  __int64 v6; // r14
  char ***v7; // rbx
  __int64 v8; // r15
  char **v9; // rax
  char ***v10; // rbp
  char ***v11; // rdi
  int v12; // ebp
  __int64 v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (char ***)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 152, v13);
  v5 = *(char ****)a1;
  v6 = v4;
  v7 = (char ***)(*(_QWORD *)a1 + 152LL * *(unsigned int *)(a1 + 8));
  if ( *(char ****)a1 != v7 )
  {
    v8 = v4;
    do
    {
      v9 = *v5;
      *(_DWORD *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 20) = 8;
      *(_QWORD *)v8 = v9;
      *(_QWORD *)(v8 + 8) = v8 + 24;
      if ( *((_DWORD *)v5 + 4) )
        sub_EC1DC0((char ***)(v8 + 8), v5 + 1);
      v5 += 19;
      v8 += 152;
    }
    while ( v7 != v5 );
    v10 = *(char ****)a1;
    v7 = (char ***)(*(_QWORD *)a1 + 152LL * *(unsigned int *)(a1 + 8));
    if ( *(char ****)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 19;
          v11 = (char ***)v7[1];
          if ( v11 == v7 + 3 )
            break;
          free(v11);
          if ( v7 == v10 )
          {
            v7 = *(char ****)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v7 != v10 );
      v7 = *(char ****)a1;
    }
  }
LABEL_10:
  v12 = v13[0];
  if ( v2 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v12;
}
