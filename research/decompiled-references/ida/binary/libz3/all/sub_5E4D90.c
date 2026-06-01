__int64 __fastcall sub_5E4D90(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _DWORD *v4; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // esi
  _DWORD *v9; // rax
  __int64 v10; // rsi

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v4 || *v4 || v4[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
    return 0;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a1 + 40);
  if ( !*(_WORD *)(v6 + 4) && (v9 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL)) != nullptr && v8 == *v9 && v9[1] == 1 )
  {
    v10 = v7;
    v7 = v6;
    v6 = v10;
  }
  else
  {
    if ( *(_WORD *)(v7 + 4) )
      return 0;
    v9 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
    if ( !v9 || v8 != *v9 )
      return 0;
  }
  if ( v9[1] != 1 || *(_WORD *)(v6 + 4) != 1 )
    return 0;
  *a3 = v7;
  *a4 = v6;
  return 1;
}

