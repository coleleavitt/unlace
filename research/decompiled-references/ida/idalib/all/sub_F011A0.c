unsigned __int64 __fastcall sub_F011A0(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  __int16 v13; // dx
  bool v14; // zf

  v9 = 8 * ((8 * (unsigned __int64)(a4 != 0) + 15) >> 3) + 40;
  v10 = a1[294];
  a1[304] += v9;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v11 && v10 )
    a1[294] = v9 + v11;
  else
    v11 = sub_986170((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  v12 = sub_EF5330(v11 + 32, nullptr, 0, a4, 0);
  v13 = *(_WORD *)v11 & 0xFE00;
  LOBYTE(v13) = -71;
  v14 = unk_2CD7484 == 0;
  *(_WORD *)v11 = v13;
  if ( !v14 )
    sub_EE9B50(185);
  *(_DWORD *)(v11 + 8) = 42;
  *(_DWORD *)(v11 + 12) = a2;
  *(_DWORD *)(v11 + 16) = a3;
  *(_QWORD *)(v11 + 24) = v12;
  return v11;
}
