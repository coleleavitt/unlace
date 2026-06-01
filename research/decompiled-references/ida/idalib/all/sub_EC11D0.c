void __fastcall sub_EC11D0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // r12
  int v9; // eax
  char ***v10; // rsi
  char ***v11; // rdi
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  int v14; // ebp
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 56, v15);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v4;
    do
    {
      while ( 1 )
      {
        *(_QWORD *)v8 = *v5;
        v9 = *((_DWORD *)v5 + 2);
        *(_DWORD *)(v8 + 24) = 0;
        *(_DWORD *)(v8 + 8) = v9;
        *(_QWORD *)(v8 + 16) = v8 + 32;
        *(_DWORD *)(v8 + 28) = 1;
        if ( *((_DWORD *)v5 + 6) )
          break;
        v5 += 7;
        v8 += 56;
        if ( v7 == v5 )
          goto LABEL_6;
      }
      v10 = (char ***)(v5 + 2);
      v11 = (char ***)(v8 + 16);
      v5 += 7;
      v8 += 56;
      sub_EC0E30(v11, v10);
    }
    while ( v7 != v5 );
LABEL_6:
    v12 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 7;
          v13 = (_QWORD *)v7[2];
          if ( v13 == v7 + 4 )
            break;
          free(v13);
          if ( v7 == v12 )
          {
            v7 = *(_QWORD **)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v7 != v12 );
      v7 = *(_QWORD **)a1;
    }
  }
LABEL_10:
  v14 = v15[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v14;
}
