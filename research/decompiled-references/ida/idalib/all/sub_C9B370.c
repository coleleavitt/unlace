unsigned __int64 __fastcall sub_C9B370(_QWORD *a1, int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx

  v6 = a2;
  v7 = 4LL * a3 + 40 + 8LL * (unsigned int)(a2 + 1);
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x21;
  if ( unk_2CD7484 )
    sub_EE9B50(33);
  *(_QWORD *)(v9 + 32) = 0;
  *(_OWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 24) &= 0xE000FFFFuLL;
  *(_WORD *)(v9 + 24) = v6;
  return v9;
}
