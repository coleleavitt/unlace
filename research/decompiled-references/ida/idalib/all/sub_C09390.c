unsigned __int64 __fastcall sub_C09390(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx

  v7 = 8LL * (a2 == 1) + 56LL * (a2 == 2) + 24;
  v8 = a1[294];
  a1[304] += v7;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + v9 && v8 )
    a1[294] = v7 + v9;
  else
    v9 = sub_986170((__int64)(a1 + 294), v7, v7, 3, a5, a6);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x3D;
  if ( unk_2CD7484 )
    sub_EE9B50(61);
  *(_QWORD *)(v9 + 8) = 0;
  *(_BYTE *)(v9 + 2) = (8 * (a2 & 3)) | *(_BYTE *)(v9 + 2) & 0xE7;
  if ( a2 == 2 )
  {
    *(_BYTE *)(v9 + 28) &= ~1u;
    *(_DWORD *)(v9 + 24) = 0;
  }
  return v9;
}
