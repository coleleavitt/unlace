unsigned __int64 __fastcall sub_C9B0B0(_QWORD *a1, unsigned int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  int v12; // esi
  unsigned int v14; // esi

  v7 = 8LL * a2;
  if ( !a3 )
    v7 = 0;
  v9 = v7 + 16LL * a2 + 40;
  v10 = a1[294];
  a1[304] += v9;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v11 && v10 )
    a1[294] = v9 + v11;
  else
    v11 = sub_986170((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x26;
  if ( unk_2CD7484 )
    sub_EE9B50(38);
  v12 = *(_DWORD *)(v11 + 16);
  *(_QWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 20) = 0;
  v14 = a2 & 0x7FFFFFFF | v12 & 0x80000000;
  *(_DWORD *)(v11 + 16) = v14;
  *(_BYTE *)(v11 + 19) = (a3 << 7) | HIBYTE(v14) & 0x7F;
  return v11;
}
