unsigned __int64 __fastcall sub_EEEC90(_QWORD *a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  char v10; // al
  char v11; // bp

  v7 = 8LL * a2 + 32;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  sub_EE9650((_WORD *)v9, 1);
  v10 = *(_BYTE *)(v9 + 1);
  *(_QWORD *)(v9 + 8) = 0;
  v11 = v10 & 0xFD | (2 * (a2 & 1));
  *(_BYTE *)(v9 + 1) = v11;
  return v9;
}
