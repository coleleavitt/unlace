unsigned __int64 __fastcall sub_EFF880(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax

  v7 = 8 * ((8 * (unsigned __int64)a2 + 15) >> 3) + 48;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  v10 = *(_WORD *)v9;
  *(_DWORD *)(v9 + 40) = a2;
  *(_DWORD *)(v9 + 44) = 0;
  v10 &= 0xFE00u;
  *(_BYTE *)(v9 + 48) = 0;
  LOBYTE(v10) = v10 | 0xE9;
  *(_WORD *)v9 = v10;
  if ( unk_2CD7484 )
    sub_EE9B50(233);
  *(_QWORD *)(v9 + 8) = 9;
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 32) = 103;
  *(_QWORD *)(v9 + 24) = v9 + 40;
  return v9;
}
