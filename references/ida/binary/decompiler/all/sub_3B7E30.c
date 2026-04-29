__int64 __fastcall sub_3B7E30(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rsi
  int v10; // eax
  char v11; // dl

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = sub_3856D0(v4, *a2);
  if ( !v5 )
    return 6;
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_13;
    if ( v2 != *(_QWORD *)(v5 + 8) )
      return 6;
  }
  v8 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v9 = sub_3856D0(v4, *a2);
  if ( !v9 )
    return 7;
  v10 = *(_DWORD *)(a1 + 24);
  if ( !v10 )
    goto LABEL_11;
  if ( v10 != 1 )
LABEL_13:
    sub_3B5950(v4);
  if ( v8 != *(_QWORD *)(v9 + 8) )
    return 7;
LABEL_11:
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v9);
  result = 3;
  if ( !v11 )
    return 7;
  return result;
}
