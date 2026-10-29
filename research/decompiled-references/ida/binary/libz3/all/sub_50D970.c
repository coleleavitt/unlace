bool __fastcall sub_50D970(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  void *v8; // r15
  _DWORD *v9; // rax
  bool result; // al
  _DWORD *v11; // rax
  __int64 v12; // rsi
  unsigned __int8 v13; // r9
  _DWORD *v14; // rax

  v8 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a4);
  sub_182CBA0(v8, a4 + 16);
  *(_BYTE *)(a4 + 20) &= ~1u;
  *(_DWORD *)(a4 + 16) = 1;
  *a3 = -1;
  *a5 = -1;
  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v9 || *v9 != 5 )
    return 0;
  if ( v9[1] != 4 )
  {
LABEL_7:
    if ( v9[1] != 5 )
      return 0;
    v11 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a2 + 32)) + 24);
    if ( !v11 || *v11 != 5 || v11[1] || !(unsigned __int8)sub_50D4D0(a1, *(_QWORD *)(a2 + 32), a5, a3, a4, 1u) )
      return 0;
    v12 = *(_QWORD *)(a2 + 40);
    v13 = 0;
    goto LABEL_13;
  }
  v14 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a2 + 32)) + 24);
  if ( !v14 || *v14 != 5 || v14[1] )
  {
    if ( *(_WORD *)(a2 + 4) )
      return 0;
    v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v9 || *v9 != 5 )
      return 0;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)sub_50D4D0(a1, *(_QWORD *)(a2 + 32), a5, a3, a4, 0) )
    return 0;
  v12 = *(_QWORD *)(a2 + 40);
  v13 = 1;
LABEL_13:
  if ( !(unsigned __int8)sub_50D4D0(a1, v12, a5, a3, a4, v13) )
    return 0;
  result = 1;
  if ( *a3 == -1 )
    return *a5 != -1;
  return result;
}

