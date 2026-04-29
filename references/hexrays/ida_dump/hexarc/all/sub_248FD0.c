_QWORD *__fastcall sub_248FD0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rax
  unsigned int *v5; // rax
  unsigned int v6; // r13d
  int v7; // r14d
  int v8; // ebp
  _QWORD *v9; // r12
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // r15
  int v18; // r14d
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v25; // rax
  __int64 (__fastcall *v26)(__int64, int, int); // rax

  v4 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v4 == sub_5EB50 )
  {
    v5 = *(unsigned int **)(a1[6] + 24LL * (int)a2);
    v6 = *v5;
LABEL_3:
    v7 = v5[1];
    goto LABEL_4;
  }
  v6 = v4((__int64)a1, a2, 0);
  v26 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v26 == sub_5EB50 )
  {
    v5 = *(unsigned int **)(a1[6] + 24LL * (int)a2);
    goto LABEL_3;
  }
  v7 = v26((__int64)a1, a2, 1);
LABEL_4:
  v8 = *(_DWORD *)(a1[38] + 4LL * (int)a2);
  v9 = (_QWORD *)sub_249190(a1, v6, a3, 1);
  v10 = v8 - 6;
  v17 = sub_248C50(a1, v7, v11, v12, v13);
  if ( (v10 & 2) == 0 )
    v9 = sub_23D0E0(*(_QWORD *)(a1[41] + 112LL), (__int64)v9, v14, v15, v16);
  v18 = v10 & 1;
  if ( (v10 & 1) != 0 )
  {
    v19 = (__int64)v17;
    if ( !v9 )
      return (_QWORD *)v19;
  }
  else
  {
    v25 = sub_23D0E0(*(_QWORD *)(a1[41] + 112LL), (__int64)v17, v14, v15, v16);
    v17 = v25;
    if ( !v9 )
    {
      v19 = (__int64)v25;
      return sub_23D0E0(*(_QWORD *)(a1[41] + 112LL), v19, v21, v22, v23);
    }
  }
  v20 = j__qalloc_or_throw(64);
  *(_QWORD *)v20 = -1;
  v19 = v20;
  *(_DWORD *)(v20 + 8) = 18;
  *(_QWORD *)(v20 + 12) = -1;
  *(_QWORD *)(v20 + 24) = v9;
  *(_QWORD *)(v20 + 32) = v17;
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_DWORD *)(v20 + 56) = 0;
  *(_QWORD *)v20 = sub_23A170((__int64)a1);
  sub_23CE40(v19, *(_QWORD *)(a1[41] + 112LL), 0);
  if ( v18 )
    return (_QWORD *)v19;
  return sub_23D0E0(*(_QWORD *)(a1[41] + 112LL), v19, v21, v22, v23);
}
