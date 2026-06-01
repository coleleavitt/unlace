unsigned __int64 __fastcall sub_EF25E0(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax

  v7 = 8LL * (unsigned int)(a2 + 1) + 16;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  v10 = *(_WORD *)v9 & 0xFE00;
  LOBYTE(v10) = -5;
  *(_WORD *)v9 = v10;
  if ( unk_2CD7484 )
    sub_EE9B50(251);
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 12) = a2;
  return v9;
}
