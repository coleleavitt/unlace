unsigned __int64 __fastcall sub_C97110(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx

  v7 = 24LL * a2 + 40;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0xC;
  if ( unk_2CD7484 )
    sub_EE9B50(12);
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 28) = a2;
  *(_QWORD *)(v9 + 32) = 0;
  return v9;
}
