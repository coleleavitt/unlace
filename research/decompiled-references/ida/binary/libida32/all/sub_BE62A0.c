unsigned __int64 __fastcall sub_BE62A0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        unsigned __int64 a9)
{
  bool v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  char v16; // al
  unsigned __int8 v17; // al
  __int64 v19; // rax
  char v20; // [rsp+8h] [rbp-40h]
  char v21; // [rsp+8h] [rbp-40h]
  char v22; // [rsp+Ch] [rbp-3Ch]
  char v23; // [rsp+Ch] [rbp-3Ch]

  v12 = HIDWORD(a9) != 0;
  v13 = 8LL * v12 + 40;
  v14 = a1[294];
  a1[304] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v13 + v15 && v14 )
  {
    a1[294] = v13 + v15;
  }
  else
  {
    v23 = a6;
    v21 = a5;
    v19 = sub_962430((__int64)(a1 + 294), v13, 8LL * v12 + 40, 3, a5, a6);
    LOBYTE(a6) = v23;
    LOBYTE(a5) = v21;
    v15 = v19;
  }
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x4A;
  if ( unk_2CAD564 )
  {
    v22 = a6;
    v20 = a5;
    sub_EC5E10(74);
    LOBYTE(a6) = v22;
    LOBYTE(a5) = v20;
  }
  v16 = *(_BYTE *)(v15 + 1);
  *(_QWORD *)(v15 + 8) = a4;
  *(_QWORD *)(v15 + 16) = a2;
  *(_QWORD *)(v15 + 24) = a3;
  *(_BYTE *)(v15 + 1) = (8 * (a6 & 7)) | (2 * (a5 & 3)) | v16 & 1;
  *(_DWORD *)(v15 + 32) = a7;
  *(_DWORD *)(v15 + 36) = a8;
  *(_BYTE *)(v15 + 2) = (8 * v12) | *(_BYTE *)(v15 + 2) & 0xF0;
  if ( (*(_DWORD *)v15 & 0x80000) != 0 )
    *(_QWORD *)(v15 + 40) = a9;
  v17 = sub_B3F110(v15);
  *(_BYTE *)(v15 + 1) = (v17 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v17 >> 2) & 7;
  return v15;
}

