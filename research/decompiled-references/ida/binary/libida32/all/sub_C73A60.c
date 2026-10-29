unsigned __int64 __fastcall sub_C73A60(
        _QWORD *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  char v8; // bp
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  char v12; // al
  char v13; // r8
  char v14; // si

  v8 = a5;
  v9 = 8 * ((unsigned __int8)a5 + (unsigned __int64)(a4 + a3 + (unsigned int)a2)) + 56;
  v10 = a1[294];
  a1[304] += v9;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + v11 && v10 )
    a1[294] = v9 + v11;
  else
    v11 = sub_962430((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x6A;
  if ( unk_2CAD564 )
    sub_EC5E10(106);
  v12 = *(_BYTE *)(v11 + 2);
  v13 = *(_BYTE *)(v11 + 3);
  *(_DWORD *)(v11 + 4) = a4;
  *(_OWORD *)(v11 + 40) = 0;
  v14 = v12 & 0xEF | (16 * (a2 & 1));
  *(_QWORD *)(v11 + 8) = 0;
  *(_BYTE *)(v11 + 2) = v14;
  *(_BYTE *)(v11 + 3) = v13 & 0xF7 | (8 * (v8 & 1));
  return v11;
}

