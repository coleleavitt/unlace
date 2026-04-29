__int64 __fastcall sub_16F260(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rdi
  void (*v8)(); // rax
  __int64 v9; // rax
  int *v10; // rbx
  __int64 v11; // r14
  unsigned __int8 v13; // [rsp+Fh] [rbp-49h]
  __int64 v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 1504);
  v14[3] = __readfsqword(0x28u);
  v8 = *(void (**)())(*(_QWORD *)v6 + 80LL);
  if ( v8 != nullsub_36 )
    ((void (__fastcall *)(__int64, __int64, _QWORD *))v8)(v6, a1, a4);
  if ( !(unsigned __int8)sub_60500(a4) || a4[3] )
    return 0;
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(int **)a3;
  v14[0] = 0;
  v11 = *(_QWORD *)(a1 + 784);
  v14[1] = 0;
  if ( 4 * v9 )
  {
    do
      sub_5FE10(v14, *v10++);
    while ( v10 != (int *)(*(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8)) );
  }
  if ( sub_605B0(v14, 0) )
  {
    qfree(v14[0]);
    return 0;
  }
  v13 = sub_6B8B0(v11, v14, 0, a2);
  qfree(v14[0]);
  return v13;
}
