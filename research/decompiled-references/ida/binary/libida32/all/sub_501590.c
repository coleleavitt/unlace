bool __fastcall sub_501590(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  bool result; // al
  __int64 v6; // rdi
  int v7; // r9d
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdx

  v4 = a1[2];
  if ( (int)a3 < *(_DWORD *)(v4 + 68) || (int)a3 > *(_DWORD *)(v4 + 72) )
    return 0;
  v6 = *(_QWORD *)(*a1 + 1576LL);
  if ( !*(_BYTE *)(v6 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v7 = a3 - *(_DWORD *)(*(_QWORD *)(v6 + 8) + 68LL);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v6 + 40) )
    sub_4FC970(v6, a2, a3, a4);
  v8 = (__int64)v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v6 + 32) + v8 + 56) = a3;
  v9 = (_QWORD *)(*(_QWORD *)(v6 + 32) + v8);
  if ( (unsigned __int64)(unsigned int)a4 >= v9[1] )
    return 0;
  v10 = (_QWORD *)(*v9 + 17LL * (unsigned int)a4);
  result = v10 != nullptr && a2 != nullptr;
  if ( !result )
    return v10 != nullptr;
  *a2 = *v10;
  *(_QWORD *)((char *)a2 + 5) = *(_QWORD *)((char *)v10 + 5);
  return result;
}

