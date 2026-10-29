unsigned __int64 __fastcall sub_EDD810(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v9; // bp
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  __int16 v14; // dx
  bool v15; // zf

  v9 = a5;
  v10 = 8 * ((8 * (unsigned __int64)(a4 != 0) + 15) >> 3) + 48;
  v11 = a1[294];
  a1[304] += v10;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v10 + v12 && v11 )
    a1[294] = v10 + v12;
  else
    v12 = sub_962430((__int64)(a1 + 294), v10, v10, 3, a5, a6);
  v13 = sub_ED15F0(v12 + 40, nullptr, 0, a4, 0);
  v14 = *(_WORD *)v12 & 0xFE00;
  LOBYTE(v14) = -80;
  v15 = unk_2CAD564 == 0;
  *(_WORD *)v12 = v14;
  if ( !v15 )
    sub_EC5E10(176);
  *(_DWORD *)(v12 + 8) = 65;
  *(_DWORD *)(v12 + 12) = a2;
  *(_DWORD *)(v12 + 16) = a3;
  *(_QWORD *)(v12 + 24) = v13;
  *(_BYTE *)(v12 + 32) = v9;
  return v12;
}

