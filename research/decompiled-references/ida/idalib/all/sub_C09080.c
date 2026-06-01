unsigned __int64 __fastcall sub_C09080(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx

  v6 = 32LL * a5;
  v7 = 16 * (a2 + (unsigned __int64)a4) + 8LL * a3 + 32 + v6;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, v6, a6);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x47;
  if ( unk_2CD7484 )
    sub_EE9B50(71);
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  return v9;
}
