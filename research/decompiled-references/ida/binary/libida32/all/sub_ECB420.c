unsigned __int64 __fastcall sub_ECB420(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  char v12; // cl

  v9 = 4LL * a2 + 16 + 8LL * (a4 + a2 + a3 + 2);
  v10 = a1[294];
  a1[304] += v9;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v11 && v10 )
    a1[294] = v9 + v11;
  else
    v11 = sub_962430((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  sub_EC5910((_WORD *)v11, 241);
  v12 = *(_BYTE *)(v11 + 1);
  *(_QWORD *)(v11 + 8) = 0;
  *(_BYTE *)(v11 + 1) = ((a4 & 1) << 6) | (32 * (a3 & 1)) & 0xBF | (16 * (a2 & 1)) & 0xBF | v12 & 0x8F;
  return v11;
}

