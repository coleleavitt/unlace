unsigned __int64 __fastcall sub_F00240(_QWORD *a1, int a2, int a3, const void *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  __int16 v14; // dx
  bool v15; // zf

  v9 = 8 * ((8 * (unsigned __int64)(unsigned int)a5 + 15) >> 3) + 40;
  v11 = a1[294];
  a1[304] += v9;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v12 && v11 )
    a1[294] = v9 + v12;
  else
    v12 = sub_986170((__int64)(a1 + 294), v9, 8 * ((8 * (unsigned __int64)(unsigned int)a5 + 15) >> 3) + 40, 3, a5, a6);
  v13 = sub_EF5330(v12 + 32, a4, a5, 0, 0);
  v14 = *(_WORD *)v12 & 0xFE00;
  LOBYTE(v14) = -30;
  v15 = unk_2CD7484 == 0;
  *(_WORD *)v12 = v14;
  if ( !v15 )
    sub_EE9B50(226);
  *(_DWORD *)(v12 + 8) = 107;
  *(_DWORD *)(v12 + 12) = a2;
  *(_DWORD *)(v12 + 16) = a3;
  *(_QWORD *)(v12 + 24) = v13;
  return v12;
}
