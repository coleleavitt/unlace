bool __fastcall sub_5E4500(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _DWORD *v4; // rax
  int v6; // r8d
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rsi
  _DWORD *v10; // rdi

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v4 || *v4 || v4[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
    return 0;
  v6 = *(_DWORD *)(a1 + 40);
  *a3 = *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_WORD *)(v7 + 4) == 0;
  *a4 = v7;
  v9 = *a3;
  if ( !v8 || (v10 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) == nullptr || v6 != *v10 || v10[1] )
  {
    *a3 = v7;
    *a4 = v9;
    if ( *(_WORD *)(*a3 + 4) == 1 && !*(_WORD *)(v9 + 4) )
    {
      v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( v10 )
      {
        if ( v6 == *v10 )
          return v10[1] == 0;
      }
    }
    return 0;
  }
  if ( *(_WORD *)(v9 + 4) != 1 )
    return 0;
  return v10[1] == 0;
}

