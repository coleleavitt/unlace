unsigned __int64 __fastcall sub_C97610(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned __int64 v10; // rbx

  v7 = 8LL * a2 + 48;
  v8 = a2;
  v9 = a1[294];
  a1[304] += v7;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v10 && v9 )
    a1[294] = v7 + v10;
  else
    v10 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x53;
  if ( unk_2CD7484 )
    sub_EE9B50(83);
  *(_QWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 4) = v8;
  *(_BYTE *)(v10 + 3) &= 0xF3u;
  *(_QWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 40) = 0;
  return v10;
}
