unsigned __int64 __fastcall sub_C72790(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // ax
  __int64 v7; // rsi
  __int16 v8; // bp
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int16 v11; // si

  v6 = a2;
  v7 = 8LL * a2 + 24;
  v8 = v6;
  v9 = a1[294];
  a1[304] += v7;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v10 && v9 )
    a1[294] = v7 + v10;
  else
    v10 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x3C;
  if ( unk_2CAD564 )
    sub_EC5E10(60);
  v11 = *(_WORD *)(v10 + 2);
  *(_QWORD *)(v10 + 8) = 0;
  *(_WORD *)(v10 + 2) = (16 * v8) | v11 & 0xF;
  return v10;
}

