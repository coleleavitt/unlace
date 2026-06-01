unsigned __int64 __fastcall sub_C729C0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int16 v9; // ax

  v6 = a1[294];
  v7 = 8LL * a2 + 32;
  a1[304] += v7;
  v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v8 && v6 )
    a1[294] = v7 + v8;
  else
    v8 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v8 = *(_WORD *)v8 & 0xFE00 | 0x3B;
  if ( unk_2CAD564 )
    sub_EC5E10(59);
  v9 = *(_WORD *)(v8 + 1);
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_WORD *)(v8 + 1) = v9 & 0xF801 | 0x3C2;
  return v8;
}

