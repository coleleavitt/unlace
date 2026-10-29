void __fastcall sub_B69D40(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbp
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // r15
  int v9; // eax
  char ***v10; // rsi
  char ***v11; // rdi
  _DWORD *v12; // rbp
  _QWORD *v13; // rdi
  int v14; // ebp
  _QWORD v15[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 120, v15);
  v5 = *(_DWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 120LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v4;
    do
    {
      while ( 1 )
      {
        v9 = *v5;
        *(_DWORD *)(v8 + 16) = 0;
        *(_DWORD *)(v8 + 20) = 4;
        *(_DWORD *)v8 = v9;
        *(_QWORD *)(v8 + 8) = v8 + 24;
        if ( v5[4] )
          break;
        v5 += 30;
        v8 += 120;
        if ( v7 == (_QWORD *)v5 )
          goto LABEL_6;
      }
      v10 = (char ***)(v5 + 2);
      v11 = (char ***)(v8 + 8);
      v5 += 30;
      v8 += 120;
      sub_B69B60(v11, v10);
    }
    while ( v7 != (_QWORD *)v5 );
LABEL_6:
    v12 = *(_DWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 120LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 15;
          v13 = (_QWORD *)v7[1];
          if ( v13 == v7 + 3 )
            break;
          free(v13);
          if ( v7 == (_QWORD *)v12 )
          {
            v7 = *(_QWORD **)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v7 != (_QWORD *)v12 );
      v7 = *(_QWORD **)a1;
    }
  }
LABEL_10:
  v14 = v15[0];
  if ( v2 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v14;
}
