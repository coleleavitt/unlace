unsigned __int64 __fastcall sub_BE6420(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx

  v7 = 12LL * a2 + 8 * (a2 + (unsigned __int64)(3 * a2));
  v8 = 32 * (a2 + 1LL) + 8 * ((v7 != 0) + ((v7 - (v7 != 0)) >> 3));
  v9 = a1[294];
  a1[304] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
    a1[294] = v8 + v10;
  else
    v10 = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x2B;
  if ( unk_2CAD564 )
    sub_EC5E10(43);
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_DWORD *)(v10 + 28) = a2;
  return v10;
}

