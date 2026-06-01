__int64 __fastcall sub_11D9B40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // r15
  __int64 *v8; // rbp
  __int64 *v9; // rax
  __int64 v10; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 *v16; // [rsp+0h] [rbp-58h]
  __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2568) + 72LL))(*(_QWORD *)(a1 + 2568));
  if ( !v5 )
  {
    v15 = *(_QWORD *)(a2 + 176);
    v5 = operator new(0x148u);
    sub_21B6CD0(v5, v15);
  }
  v6 = sub_1105E80();
  v7 = *(__int64 **)(a2 + 8);
  v16 = v6;
  v8 = &v7[*(unsigned int *)(a2 + 16)];
  if ( v7 != v8 )
  {
    while ( !*v7 )
    {
      if ( v8 == ++v7 )
        goto LABEL_11;
    }
    while ( 1 )
    {
      v10 = *v7;
      v18[0] = *v7;
      if ( sub_1178040(v5, v18) )
      {
        v9 = v7 + 1;
        if ( v8 == v7 + 1 )
          goto LABEL_11;
      }
      else
      {
        sub_21B80F0(v5, v10);
        v9 = v7 + 1;
        if ( v8 == v7 + 1 )
          goto LABEL_11;
      }
      if ( !v7[1] )
        break;
LABEL_8:
      v7 = v9;
    }
    while ( v8 != ++v9 )
    {
      if ( *v9 )
        goto LABEL_8;
    }
  }
LABEL_11:
  if ( a4 )
  {
    sub_21B7DF0(v5, 2260);
    v12 = sub_21BB380(v16, 2260);
    v14 = sub_21B8AA0(v5, 0, v12, v13, a3, a4);
    sub_21B80F0(v5, v14);
  }
  return v5;
}
