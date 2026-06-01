bool __fastcall getn_sreg_range(_QWORD *a1, int a2, __int64 a3)
{
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  bool result; // al
  __int64 v8; // rdi
  int v9; // r9d
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  bool v13; // zf
  _QWORD *v14; // rdx

  v5 = *(_QWORD **)(qword_2CA1698 + 1480);
  v6 = v5[2];
  if ( a2 < *(_DWORD *)(v6 + 68) || a2 > *(_DWORD *)(v6 + 72) )
    return 0;
  v8 = *(_QWORD *)(*v5 + 1576LL);
  if ( !*(_BYTE *)(v8 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v9 = a2 - *(_DWORD *)(*(_QWORD *)(v8 + 8) + 68LL);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 40) )
    sub_4FC970(v8, v9, a3, a1);
  v10 = (__int64)v9 << 6;
  *(_DWORD *)(*(_QWORD *)(v8 + 32) + v10 + 56) = a2;
  v11 = (_QWORD *)(v10 + *(_QWORD *)(v8 + 32));
  if ( (unsigned __int64)(unsigned int)a3 >= v11[1] )
    return 0;
  v12 = 17LL * (unsigned int)a3;
  v13 = *v11 + v12 == 0;
  v14 = (_QWORD *)(*v11 + v12);
  result = !v13 && a1 != nullptr;
  if ( !result )
    return !v13;
  *a1 = *v14;
  *(_QWORD *)((char *)a1 + 5) = *(_QWORD *)((char *)v14 + 5);
  return result;
}

