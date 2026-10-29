unsigned __int64 __fastcall sub_F01700(_QWORD *a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int16 v11; // ax

  v8 = 8 * ((8 * (unsigned __int64)a2 + 39) >> 3) + 48;
  v9 = a1[294];
  a1[304] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
    a1[294] = v8 + v10;
  else
    v10 = sub_986170((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  v11 = *(_WORD *)v10;
  *(_DWORD *)(v10 + 40) = a2;
  *(_DWORD *)(v10 + 44) = 2;
  v11 &= 0xFE00u;
  *(_BYTE *)(v10 + 48) = 1;
  LOBYTE(v11) = v11 | 0xBD;
  *(_WORD *)v10 = v11;
  if ( unk_2CD7484 )
    sub_EE9B50(189);
  *(_DWORD *)(v10 + 32) = a3;
  *(_QWORD *)(v10 + 8) = 69;
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 36) = 2 * a3;
  *(_QWORD *)(v10 + 24) = v10 + 40;
  return v10;
}
