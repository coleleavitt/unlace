__int64 __fastcall sub_518710(_QWORD *a1, unsigned __int64 a2, int a3, unsigned __int64 *a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  __int64 v10; // r9
  unsigned __int64 *v11; // rdx
  _QWORD *v12; // r9
  unsigned __int64 *v13; // rax
  __int64 v14; // rdx

  if ( a4 )
    *a4 = a2;
  v6 = a1[2];
  if ( a3 < *(_DWORD *)(v6 + 68) || a3 > *(_DWORD *)(v6 + 72) )
    return -1;
  if ( (*(_BYTE *)(v6 + 8) & 1) == 0 || *(_DWORD *)(v6 + 80) == a3 )
    goto LABEL_19;
  v8 = *(_QWORD *)(*a1 + 1768LL);
  if ( !*(_BYTE *)(v8 + 152) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v9 = a3 - *(_DWORD *)(*(_QWORD *)(v8 + 8) + 68LL);
  if ( v9 >= *(_QWORD *)(v8 + 40) )
    sub_5144F0();
  v10 = v9 << 6;
  *(_DWORD *)(*(_QWORD *)(v8 + 32) + v10 + 56) = a3;
  v11 = sub_5168B0((unsigned __int64 **)(*(_QWORD *)(v8 + 32) + v10), a2);
  if ( v11 == (unsigned __int64 *)(*v12 + 33LL * v12[1])
    || a2 < *v11
    || a2 >= v11[1]
    || !v11
    || (result = v11[2], result == -1) && *((_BYTE *)v11 + 24) != 2 )
  {
LABEL_19:
    v13 = sub_505D70((__int64)(a1 + 203), a2);
    if ( !v13 )
      return -1;
    if ( a4 )
      *a4 = *v13;
    v14 = a1[2];
    if ( *(_DWORD *)(v14 + 80) == a3 )
      return v13[6];
    else
      return v13[a3 - *(_DWORD *)(v14 + 68) + 7];
  }
  else if ( a4 )
  {
    *a4 = *v11;
  }
  return result;
}
