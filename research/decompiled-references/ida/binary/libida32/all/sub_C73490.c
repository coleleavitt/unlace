unsigned __int64 __fastcall sub_C73490(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  char v11; // al
  char v12; // bp

  v8 = 8 * (a2 + (unsigned __int64)a3) + 40;
  v9 = a1[294];
  a1[304] += v8;
  v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + v10 && v9 )
    a1[294] = v8 + v10;
  else
    v10 = sub_962430((__int64)(a1 + 294), v8, v8, 3, a5, a6);
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x56;
  if ( unk_2CAD564 )
    sub_EC5E10(86);
  v11 = *(_BYTE *)(v10 + 3);
  *(_DWORD *)(v10 + 4) = a2;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  v12 = v11 & 0xF3 | (8 * (a3 & 1));
  *(_BYTE *)(v10 + 3) = v12;
  return v10;
}

