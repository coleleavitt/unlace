unsigned __int64 __fastcall sub_C72550(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx

  v6 = a2;
  v7 = 8 * (a2 + 1) + 32;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x33;
  if ( unk_2CAD564 )
    sub_EC5E10(51);
  *(_QWORD *)(v9 + 8) = 0;
  *(_OWORD *)(v9 + 16) = 0;
  *(_WORD *)(v9 + 4) = v6;
  *(_QWORD *)(v9 + 8 * v6 + 32) = 0;
  return v9;
}

