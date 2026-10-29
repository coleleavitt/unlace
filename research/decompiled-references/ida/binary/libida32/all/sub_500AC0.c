__int64 __fastcall sub_500AC0(_QWORD *a1, __int64 a2, int a3, unsigned int *a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // r9
  unsigned int *v11; // rdx
  _QWORD *v12; // r9
  unsigned int *v13; // rax
  __int64 v14; // rdx

  if ( a4 )
    *a4 = a2;
  v6 = a1[2];
  if ( a3 < *(_DWORD *)(v6 + 68) || a3 > *(_DWORD *)(v6 + 72) )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(v6 + 8) & 1) == 0 || *(_DWORD *)(v6 + 80) == a3 )
    goto LABEL_19;
  v8 = *(_QWORD *)(*a1 + 1576LL);
  if ( !*(_BYTE *)(v8 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v9 = a3 - *(_DWORD *)(*(_QWORD *)(v8 + 8) + 68LL);
  if ( v9 >= *(_QWORD *)(v8 + 40) )
    sub_4FC970();
  v10 = v9 << 6;
  *(_DWORD *)(*(_QWORD *)(v8 + 32) + v10 + 56) = a3;
  v11 = sub_4FED00((unsigned int **)(*(_QWORD *)(v8 + 32) + v10), a2);
  if ( v11 == (unsigned int *)(*v12 + 17LL * v12[1])
    || (unsigned int)a2 < *v11
    || (unsigned int)a2 >= v11[1]
    || !v11
    || (result = v11[2], (_DWORD)result == -1) && *((_BYTE *)v11 + 12) != 2 )
  {
LABEL_19:
    v13 = sub_4EE820((__int64)(a1 + 194), a2);
    if ( !v13 )
      return 0xFFFFFFFFLL;
    if ( a4 )
      *a4 = *v13;
    v14 = a1[2];
    if ( *(_DWORD *)(v14 + 80) == a3 )
      return v13[7];
    else
      return v13[a3 - *(_DWORD *)(v14 + 68) + 8];
  }
  else if ( a4 )
  {
    *a4 = *v11;
  }
  return result;
}

