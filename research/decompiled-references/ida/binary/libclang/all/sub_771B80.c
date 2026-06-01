void __fastcall sub_771B80(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int *v4; // r12
  __int64 v5; // r14
  int *v6; // rbx
  _QWORD *v7; // rbp
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdi
  int *v11; // rbp
  int *v12; // rdi
  int v13; // ebp
  int *v14; // [rsp+8h] [rbp-50h]
  _QWORD v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v14 = (int *)(a1 + 16);
  v3 = sub_25D5F70(a1, a1 + 16, a2, 120, v15);
  v4 = *(int **)a1;
  v5 = v3;
  v6 = (int *)(*(_QWORD *)a1 + 120LL * *(unsigned int *)(a1 + 8));
  if ( *(int **)a1 != v6 )
  {
    v7 = (_QWORD *)(v3 + 8);
    do
    {
      while ( 1 )
      {
        v8 = *v4;
        v7[1] = 0x400000000LL;
        *((_DWORD *)v7 - 2) = v8;
        *v7 = v7 + 2;
        if ( v4[4] )
          break;
        v4 += 30;
        v7 += 15;
        if ( v6 == v4 )
          goto LABEL_6;
      }
      v9 = (__int64)(v4 + 2);
      v10 = (__int64)v7;
      v4 += 30;
      v7 += 15;
      sub_76D690(v10, v9);
    }
    while ( v6 != v4 );
LABEL_6:
    v11 = *(int **)a1;
    v6 = (int *)(*(_QWORD *)a1 + 120LL * *(unsigned int *)(a1 + 8));
    if ( *(int **)a1 != v6 )
    {
      do
      {
        v6 -= 30;
        v12 = *((int **)v6 + 1);
        if ( v12 != v6 + 6 )
          free(v12);
      }
      while ( v11 != v6 );
      v6 = *(int **)a1;
    }
  }
  v13 = v15[0];
  if ( v14 != v6 )
    free(v6);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v13;
}

