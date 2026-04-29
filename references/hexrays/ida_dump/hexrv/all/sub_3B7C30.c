__int64 __fastcall sub_3B7C30(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rbp
  int v12; // eax
  char v13; // dl

  v4 = *a2;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *a2;
  v8 = sub_384970(v6, v7);
  if ( !v8 )
    return 6;
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 )
  {
    if ( v9 != 1 )
      goto LABEL_13;
    if ( v4 != *(_QWORD *)(v8 + 8) )
      return 6;
  }
  v11 = *a2;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_384970(v6, v11);
  if ( !v7 )
    return 7;
  v12 = *(_DWORD *)(a1 + 24);
  if ( !v12 )
    goto LABEL_11;
  if ( v12 != 1 )
LABEL_13:
    sub_3B5750(a3, v6, v7);
  if ( v11 != *(_QWORD *)(v7 + 8) )
    return 7;
LABEL_11:
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v7);
  result = 3;
  if ( !v13 )
    return 7;
  return result;
}
