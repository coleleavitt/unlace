__int64 __fastcall sub_1E8D20(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rdi
  char v17; // al

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v4 = *(_QWORD *)(a1 + 72);
  v6 = *(int **)(a2 + 8);
  v7 = v4 + 8;
  v8 = *(_QWORD *)(v4 + 16);
  v9 = v6[4];
  if ( !v8 )
    return 0;
  v10 = v7;
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v8 + 16);
      v12 = *(_QWORD *)(v8 + 24);
      if ( (int)v9 <= *(_DWORD *)(v8 + 32) )
        break;
      v8 = *(_QWORD *)(v8 + 24);
      if ( !v12 )
        goto LABEL_8;
    }
    v10 = v8;
    v8 = *(_QWORD *)(v8 + 16);
  }
  while ( v11 );
LABEL_8:
  if ( v7 == v10 || (int)v9 < *(_DWORD *)(v10 + 32) )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 440LL) < v9 )
    sub_1E5800(v10);
  v13 = *(_QWORD *)(*(_QWORD *)v6 + 432LL) + 104 * v9;
  v6[4] = *(_DWORD *)(a1 + 92);
  v14 = sub_14F260((__int64 *)(a1 + 48));
  sub_14F140((unsigned int *)v14);
  *(_DWORD *)v14 = 1;
  v15 = j__qalloc_or_throw(16);
  sub_11D380(v15, (unsigned __int8 *)a2);
  *(_QWORD *)(v14 + 32) = v15;
  *(_QWORD *)(v14 + 8) = a2;
  v16 = *(_QWORD *)(a1 + 8);
  v17 = sub_1E76E0((unsigned __int8 *)v16);
  if ( (unsigned __int8)sub_1E8780(
                          *(_QWORD *)(v16 + 1504),
                          (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL),
                          v13,
                          *(int **)(a1 + 80),
                          *(_DWORD *)(a1 + 88),
                          v17) )
    return 0;
  else
    return 4294967276LL;
}
