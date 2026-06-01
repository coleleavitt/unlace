_QWORD *__fastcall sub_250350(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, int, int); // rax
  unsigned int *v5; // rax
  unsigned int v6; // r13d
  unsigned int v7; // r14d
  int v8; // ebp
  __int64 v9; // rsi
  _QWORD *v10; // r12
  char v11; // bp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  int v18; // r14d
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD *v23; // rax
  __int64 (__fastcall *v24)(__int64, int, int); // rax

  v4 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v4 == sub_650D0 )
  {
    v5 = *(unsigned int **)(a1[6] + 24LL * (int)a2);
    v6 = *v5;
LABEL_3:
    v7 = v5[1];
    goto LABEL_4;
  }
  v6 = v4((__int64)a1, a2, 0);
  v24 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v24 == sub_650D0 )
  {
    v5 = *(unsigned int **)(a1[6] + 24LL * (int)a2);
    goto LABEL_3;
  }
  v7 = v24((__int64)a1, a2, 1);
LABEL_4:
  v8 = *(_DWORD *)(a1[38] + 4LL * (int)a2);
  v9 = v7;
  v10 = (_QWORD *)sub_250510(a1, v6, a3, 1);
  v11 = v8 - 6;
  v17 = sub_24FFD0(a1, v7, v12, v13);
  if ( (v11 & 2) == 0 )
  {
    v9 = (__int64)v10;
    v10 = sub_244460(*(_QWORD *)(a1[41] + 112LL), (__int64)v10, v14, v15, v16);
  }
  v18 = v11 & 1;
  if ( (v11 & 1) != 0 )
  {
    v19 = v17;
    if ( !v10 )
      return (_QWORD *)v19;
  }
  else
  {
    v9 = v17;
    v23 = sub_244460(*(_QWORD *)(a1[41] + 112LL), v17, v14, v15, v16);
    v17 = (__int64)v23;
    if ( !v10 )
    {
      v19 = (__int64)v23;
      return sub_244460(*(_QWORD *)(a1[41] + 112LL), v19, v14, v15, v21);
    }
  }
  v20 = j__qalloc_or_throw(64, v9, v14, v15);
  *(_QWORD *)v20 = -1;
  v19 = v20;
  *(_DWORD *)(v20 + 8) = 18;
  *(_QWORD *)(v20 + 12) = -1;
  *(_QWORD *)(v20 + 24) = v10;
  *(_QWORD *)(v20 + 32) = v17;
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_DWORD *)(v20 + 56) = 0;
  *(_QWORD *)v20 = sub_2414F0((__int64)a1);
  sub_2441C0(v19, *(_QWORD *)(a1[41] + 112LL), 0);
  if ( v18 )
    return (_QWORD *)v19;
  return sub_244460(*(_QWORD *)(a1[41] + 112LL), v19, v14, v15, v21);
}
