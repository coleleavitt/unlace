unsigned __int64 __fastcall sub_EF2DE0(_QWORD *a1, int a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int16 v11; // ax
  char v12; // dl

  v6 = a2;
  v8 = 8LL * (a2 + (unsigned int)a3 + 1) + 16;
  v9 = a1[294];
  a1[304] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
    a1[294] = v8 + v10;
  else
    v10 = sub_986170((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  v11 = *(_WORD *)v10 & 0xFE00;
  LOBYTE(v11) = -100;
  *(_WORD *)v10 = v11;
  if ( unk_2CD7484 )
    sub_EE9B50(156);
  v12 = *(_BYTE *)(v10 + 14);
  *(_WORD *)(v10 + 12) = v6;
  *(_DWORD *)(v10 + 8) = 0;
  *(_BYTE *)(v10 + 14) = a3 & 1 | v12 & 0xFE;
  return v10;
}
