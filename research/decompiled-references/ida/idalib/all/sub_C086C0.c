unsigned __int64 __fastcall sub_C086C0(_QWORD *a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int16 v9; // ax

  v6 = a1[294];
  v7 = ((8 * a2) & 0x7F8) + 48LL;
  a1[304] += v7;
  v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v8 && v6 )
    a1[294] = v7 + v8;
  else
    v8 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v8 = *(_WORD *)v8 & 0xFE00 | 0x77;
  if ( unk_2CD7484 )
    sub_EE9B50(119);
  v9 = *(_WORD *)(v8 + 2);
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  v9 &= 0xFE07u;
  *(_QWORD *)(v8 + 40) = 0;
  LOBYTE(v9) = v9 | 0xB0;
  *(_WORD *)(v8 + 2) = v9;
  return v8;
}
