unsigned __int64 __fastcall sub_EDC020(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v7; // bp
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int16 v11; // ax

  v7 = a3 ^ 1;
  v8 = 8 * ((8 * (a2 + (unsigned __int64)(a3 ^ 1u)) + 15) >> 3) + 40;
  v9 = a1[294];
  a1[304] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
    a1[294] = v8 + v10;
  else
    v10 = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  v11 = *(_WORD *)v10;
  *(_DWORD *)(v10 + 32) = a2;
  *(_DWORD *)(v10 + 36) = 0;
  v11 &= 0xFE00u;
  *(_BYTE *)(v10 + 40) = v7;
  LOBYTE(v11) = v11 | 0xB7;
  *(_WORD *)v10 = v11;
  if ( unk_2CAD564 )
    sub_EC5E10(183);
  *(_QWORD *)(v10 + 8) = 47;
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = v10 + 32;
  return v10;
}

