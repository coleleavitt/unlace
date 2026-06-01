__int64 __fastcall sub_452940(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rax
  _QWORD *v9; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // rdi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v6 == sub_3D58E0 )
    v7 = (_QWORD *)(a2 + 16);
  else
    v7 = (_QWORD *)v6(a2);
  if ( (unsigned __int64)a3 < *v7 )
    return a1;
  if ( (unsigned __int64)a3 >= v7[1] )
    return a1;
  v9 = a3;
  if ( a3 != (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
    return a1;
  switch_dbctx(*(int *)(a2 + 8));
  v14 = *(_QWORD **)(a2 + 56);
  v15 = (_QWORD *)(a2 + 48);
  if ( !v14 )
    goto LABEL_14;
  v9 = (_QWORD *)(a2 + 48);
  do
  {
    while ( 1 )
    {
      v12 = v14[2];
      v11 = v14[3];
      if ( v14[4] < (unsigned __int64)a3 )
        break;
      v9 = v14;
      v14 = (_QWORD *)v14[2];
      if ( !v12 )
        goto LABEL_12;
    }
    v14 = (_QWORD *)v14[3];
  }
  while ( v11 );
LABEL_12:
  if ( v9 == v15 || (unsigned __int64)a3 < v9[4] )
LABEL_14:
    sub_44E230(v15, v9, v11, v12, v13);
  sub_3573A0((char **)a1);
  return a1;
}

