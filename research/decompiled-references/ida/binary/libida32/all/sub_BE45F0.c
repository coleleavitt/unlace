unsigned __int64 __fastcall sub_BE45F0(_QWORD *a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  char v10; // al

  v7 = 8LL * a2 + 24;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 4;
  if ( unk_2CAD564 )
    sub_EC5E10(4);
  v10 = *(_BYTE *)(v9 + 2);
  *(_QWORD *)(v9 + 8) = 0;
  *(_BYTE *)(v9 + 2) = v10 & 7 | 0x20;
  *(_BYTE *)(v9 + 3) = *(_BYTE *)(v9 + 3) & 0xFD | (2 * (a2 & 1));
  return v9;
}

