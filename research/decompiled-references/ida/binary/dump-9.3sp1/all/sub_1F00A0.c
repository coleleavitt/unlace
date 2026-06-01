__int64 __fastcall sub_1F00A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int *v13; // r13
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  char v21; // al

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
    sub_1ECB80(v10);
  v13 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)v6 + 432LL) + 104 * v9);
  v6[4] = *(_DWORD *)(a1 + 92);
  v14 = sub_155920((__int64 *)(a1 + 48));
  sub_155800((unsigned int *)v14);
  *(_DWORD *)v14 = 1;
  v17 = j__qalloc_or_throw(16, v12, v15, v16);
  sub_123A40(v17, (unsigned __int8 *)a2, v18, v19);
  *(_QWORD *)(v14 + 32) = v17;
  *(_QWORD *)(v14 + 8) = a2;
  v20 = *(_QWORD *)(a1 + 8);
  v21 = sub_1EEA60((unsigned __int8 *)v20);
  if ( (unsigned __int8)sub_1EFB00(
                          *(_QWORD *)(v20 + 1504),
                          (__int64 *)(*(_QWORD *)(a2 + 8) + 8LL),
                          v13,
                          *(int **)(a1 + 80),
                          *(_DWORD *)(a1 + 88),
                          v21) )
    return 0;
  else
    return 4294967276LL;
}
