char __fastcall sub_50E090(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  void *v8; // r15
  _DWORD *v9; // rax
  char result; // al

  sub_4D6490(*(_QWORD *)(a1 + 24));
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
  if ( !v9 )
    return 0;
  if ( *v9 )
    return 0;
  if ( v9[1] != 2 )
    return 0;
  if ( !(unsigned __int8)sub_50D4D0(a1, *(_QWORD *)(a2 + 32), a5, a3, a4, 0) )
    return 0;
  result = sub_50D4D0(a1, *(_QWORD *)(a2 + 40), a5, a3, a4, 1u);
  if ( !result )
    return 0;
  if ( *a3 == -1 )
    return *a5 != -1;
  return result;
}

