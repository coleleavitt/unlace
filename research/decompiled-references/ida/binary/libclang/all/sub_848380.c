void __fastcall sub_848380(__int64 a1, __int64 a2)
{
  int *v2; // r14
  __int64 v4; // rax
  int *v5; // rbp
  __int64 v6; // r13
  int *v7; // rbx
  __int64 v8; // r15
  int *v9; // rsi
  __int64 v10; // rdi
  int *v11; // rbp
  int v12; // ebp
  __int64 v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (int *)(a1 + 16);
  v4 = sub_25D5F70(a1, a1 + 16, a2, 56, v13);
  v5 = *(int **)a1;
  v6 = v4;
  v7 = (int *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
  if ( *(int **)a1 != v7 )
  {
    v8 = v4;
    do
    {
      v9 = v5;
      v10 = v8;
      v5 += 14;
      v8 += 56;
      sub_69F700(v10, v9);
    }
    while ( v7 != v5 );
    v11 = *(int **)a1;
    v7 = (int *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
    if ( *(int **)a1 != v7 )
    {
      do
      {
        v7 -= 14;
        if ( (unsigned int)*v7 > 1 )
          sub_69F740((__int64)v7);
      }
      while ( v11 != v7 );
      v7 = *(int **)a1;
    }
  }
  v12 = v13[0];
  if ( v2 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v12;
}

