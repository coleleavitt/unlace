unsigned __int64 __fastcall sub_C08840(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // si

  v6 = a2;
  v7 = 8 * (a2 + (unsigned __int64)(a2 + 1)) + 32;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x39;
  if ( unk_2CD7484 )
    sub_EE9B50(57);
  v10 = *(_WORD *)(v9 + 16);
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 20) = 0;
  *(_WORD *)(v9 + 16) = v6 & 0x7FFF | v10 & 0x8000;
  return v9;
}
