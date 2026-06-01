unsigned __int64 __fastcall sub_ECB2A0(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  char v11; // dl

  v8 = 8LL * (a2 + a3 + 2) + 24;
  v9 = a1[294];
  a1[304] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
    a1[294] = v8 + v10;
  else
    v10 = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  sub_EC5910((_WORD *)v10, 131);
  v11 = *(_BYTE *)(v10 + 1);
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_BYTE *)(v10 + 1) = (4 * (a3 & 1)) & 0xF7 | (2 * (a2 & 1)) & 0xF7 | v11 & 0xF1;
  return v10;
}

