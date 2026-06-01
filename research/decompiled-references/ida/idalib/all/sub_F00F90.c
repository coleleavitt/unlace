unsigned __int64 __fastcall sub_F00F90(_QWORD *a1, int a2, int a3, const void *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  int v11; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  __int16 v15; // dx
  bool v16; // zf

  v9 = 8 * ((8 * (unsigned __int64)(unsigned int)a5 + 15) >> 3) + 48;
  v11 = a6;
  v12 = a1[294];
  a1[304] += v9;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v13 && v12 )
    a1[294] = v9 + v13;
  else
    v13 = sub_986170((__int64)(a1 + 294), v9, 8 * ((8 * (unsigned __int64)(unsigned int)a5 + 15) >> 3) + 48, 3, a5, a6);
  v14 = sub_EF5330(v13 + 40, a4, a5, 0, 0);
  v15 = *(_WORD *)v13 & 0xFE00;
  LOBYTE(v15) = -23;
  v16 = unk_2CD7484 == 0;
  *(_WORD *)v13 = v15;
  if ( !v16 )
    sub_EE9B50(233);
  *(_DWORD *)(v13 + 8) = 9;
  *(_DWORD *)(v13 + 12) = a2;
  *(_DWORD *)(v13 + 16) = a3;
  *(_QWORD *)(v13 + 24) = v14;
  *(_DWORD *)(v13 + 32) = v11;
  return v13;
}
