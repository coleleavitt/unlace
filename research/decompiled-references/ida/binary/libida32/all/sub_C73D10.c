unsigned __int64 __fastcall sub_C73D10(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx

  v7 = a1[294];
  v8 = 8LL * a3 + 56LL * (a2 ^ 1u) + 24;
  a1[304] += v8;
  v9 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v9 && v7 )
    a1[294] = v8 + v9;
  else
    v9 = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 6;
  if ( unk_2CAD564 )
    sub_EC5E10(6);
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_BYTE *)(v9 + 3) = (8 * (a2 & 1)) | *(_BYTE *)(v9 + 3) & 0xF7;
  if ( !a2 )
  {
    *(_BYTE *)(v9 + 28) &= ~1u;
    *(_DWORD *)(v9 + 24) = 0;
  }
  return v9;
}

