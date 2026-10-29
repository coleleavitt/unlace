unsigned __int64 __fastcall sub_F01640(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int16 v8; // ax

  v6 = a1[294];
  a1[304] += 80LL;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + 80 && v6 )
    a1[294] = v7 + 80;
  else
    v7 = sub_986170((__int64)(a1 + 294), 80, 80, 3, a5, a6);
  *(_BYTE *)(v7 + 48) = 1;
  *(_QWORD *)(v7 + 40) = 0x200000000LL;
  v8 = *(_WORD *)v7 & 0xFE00;
  LOBYTE(v8) = -66;
  *(_WORD *)v7 = v8;
  if ( unk_2CD7484 )
    sub_EE9B50(190);
  *(_QWORD *)(v7 + 8) = 62;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 32) = a2;
  *(_DWORD *)(v7 + 36) = a2;
  *(_QWORD *)(v7 + 24) = v7 + 40;
  return v7;
}
