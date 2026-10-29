unsigned __int64 __fastcall sub_BE4D10(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int16 v8; // bp
  __int64 v9; // rax
  unsigned __int64 v10; // rbx

  v6 = (unsigned int)(a2 + 1);
  v7 = 8 * v6 + 32;
  v8 = v6;
  v9 = a1[294];
  a1[304] += v7;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v10 && v9 )
    a1[294] = v7 + v10;
  else
    v10 = sub_962430((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x44;
  if ( unk_2CAD564 )
    sub_EC5E10(68);
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 16) &= 0xFFFF000100000000LL;
  *(_WORD *)(v10 + 22) = v8;
  return v10;
}

