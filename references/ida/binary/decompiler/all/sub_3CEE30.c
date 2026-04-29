__int64 __fastcall sub_3CEE30(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // r9
  int v11; // r10d
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 result; // rax

  v8 = sub_3C8680(a4, *(_DWORD *)(a5 + 20), *(_DWORD *)(a5 + 24));
  v12 = v8;
  if ( v11 < 0 )
  {
    result = 0;
    if ( !v12 )
      return result;
    goto LABEL_10;
  }
  v13 = *(_QWORD *)(a4 + 64);
  if ( v11 < *(_DWORD *)(v13 + 64) )
  {
    if ( (unsigned int)v11 >= *(_DWORD *)(v13 + 64) )
      sub_3C5320(a4);
    v14 = *(_QWORD *)(v13 + 528);
    v15 = *(_QWORD *)(v14 + 8LL * v11);
    if ( !v8 )
    {
      if ( v15 )
      {
        sub_3CE9B0(a1, a2, a3, *(_QWORD *)(v14 + 8LL * v11));
        return 1;
      }
      goto LABEL_13;
    }
LABEL_11:
    if ( !(unsigned __int8)sub_3CC9A0(a1, a2, a3, *(_QWORD *)(v10 + 64)) )
      sub_3CE3C0(a1, a2, a3, v15, v12);
    return 1;
  }
  if ( v8 )
  {
LABEL_10:
    v15 = 0;
    goto LABEL_11;
  }
LABEL_13:
  result = 0;
  if ( !(v9 | v11) )
    return sub_3CC9A0(a1, a2, a3, *(_QWORD *)(a4 + 8));
  return result;
}
