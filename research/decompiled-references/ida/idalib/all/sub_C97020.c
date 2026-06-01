unsigned __int64 __fastcall sub_C97020(_QWORD *a1, int a2, unsigned __int8 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  char v11; // al
  char v12; // bp

  v8 = a1[294];
  v9 = 16 * (unsigned int)a3 + 8 * a2 + 64 + 32 * a4;
  a1[304] += v9;
  v10 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v10 && v8 )
    a1[294] = v9 + v10;
  else
    v10 = sub_986170((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x18;
  if ( unk_2CD7484 )
    sub_EE9B50(24);
  v11 = *(_BYTE *)(v10 + 2);
  *(_DWORD *)(v10 + 4) = a2;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  v12 = v11 & 0xF7 | (8 * (a3 & 1));
  *(_DWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_OWORD *)(v10 + 40) = 0;
  *(_BYTE *)(v10 + 2) = v12;
  return v10;
}
