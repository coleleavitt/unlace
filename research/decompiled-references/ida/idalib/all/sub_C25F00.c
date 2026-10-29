void __fastcall sub_C25F00(__int64 a1, __int64 a2)
{
  int *v2; // r13
  __int64 v4; // rax
  int *v5; // r12
  __int64 v6; // r14
  int *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  int *v11; // r12
  int v12; // r12d
  _QWORD v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (int *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 56, v13);
  v5 = *(int **)a1;
  v6 = v4;
  v7 = (int *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
  if ( *(int **)a1 != v7 )
  {
    v8 = v4;
    do
    {
      v9 = (__int64)v5;
      v10 = v8;
      v5 += 14;
      v8 += 56;
      sub_A4F8A0(v10, v9);
    }
    while ( v7 != v5 );
    v11 = *(int **)a1;
    v7 = (int *)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
    if ( *(int **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 14;
          if ( (unsigned int)*v7 > 1 )
            break;
          if ( v11 == v7 )
            goto LABEL_7;
        }
        sub_A4F8E0(v7);
      }
      while ( v11 != v7 );
LABEL_7:
      v7 = *(int **)a1;
    }
  }
  v12 = v13[0];
  if ( v7 != v2 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v12;
}
