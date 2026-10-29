unsigned __int64 __fastcall sub_EEF0A0(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // r13
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  char v13; // al
  char v14; // r13

  v7 = a4 != 0;
  v10 = 8LL * (a4 != 0) + 16;
  v11 = a1[294];
  a1[304] += v10;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v10 + v12 && v11 )
    a1[294] = v10 + v12;
  else
    v12 = sub_986170((__int64)(a1 + 294), v10, v10, 3, a5, a6);
  sub_EE9650((_WORD *)v12, 139);
  v13 = 2 * v7;
  v14 = *(_BYTE *)(v12 + 1);
  *(_QWORD *)(v12 + 8) = a3;
  *(_BYTE *)(v12 + 1) = v13 | v14 & 0xFD;
  if ( a4 )
    *(_QWORD *)(v12 + 16) = a4;
  *(_DWORD *)(v12 + 4) = a2;
  return v12;
}
