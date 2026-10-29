unsigned __int64 __fastcall sub_BE6000(
        _QWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        char a6,
        int a7,
        unsigned int a8,
        unsigned __int64 a9)
{
  char v14; // r9
  unsigned __int64 v15; // r8
  bool v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  char v21; // al
  unsigned __int8 v22; // al
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  char v29; // [rsp+14h] [rbp-44h]
  int v30; // [rsp+18h] [rbp-40h]

  v14 = a8;
  v15 = HIDWORD(a9);
  v16 = HIDWORD(a9) != 0;
  v17 = 8LL * v16 + 24;
  v18 = a1[294];
  a1[304] += v17;
  v19 = v17 + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= v19 && v18 )
  {
    a1[294] = v19;
    v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v28 = a4;
    v26 = a2;
    v24 = sub_962430((__int64)(a1 + 294), v17, 8LL * v16 + 24, 3, v15, a8);
    v15 = HIDWORD(a9);
    v14 = a8;
    v20 = v24;
    a4 = v28;
    a2 = v26;
  }
  *(_WORD *)v20 = *(_WORD *)v20 & 0xFE00 | 4;
  if ( unk_2CAD564 )
  {
    v30 = v15;
    v29 = v14;
    v27 = a4;
    v25 = a2;
    sub_EC5E10(4);
    LODWORD(v15) = v30;
    v14 = v29;
    a4 = v27;
    a2 = v25;
  }
  v21 = *(_BYTE *)(v20 + 1);
  *(_QWORD *)(v20 + 8) = a4;
  *(_DWORD *)(v20 + 4) = a7;
  *(_QWORD *)(v20 + 16) = a2;
  *(_BYTE *)(v20 + 2) = 8 * a3;
  *(_BYTE *)(v20 + 1) = (8 * (a6 & 7)) | (2 * (a5 & 3)) | v21 & 1;
  *(_BYTE *)(v20 + 3) = (2 * v16) | v14 & 1 | *(_BYTE *)(v20 + 3) & 0xFC;
  if ( (*(_QWORD *)v20 & 0x2000000LL) != 0 )
  {
    *(_DWORD *)(v20 + 28) = v15;
    *(_DWORD *)(v20 + 24) = a9;
  }
  v22 = sub_B3E6D0(v20, (__int64)a1);
  *(_BYTE *)(v20 + 1) = (v22 << 6) | *(_BYTE *)(v20 + 1) & 0x3F;
  *(_BYTE *)(v20 + 2) = *(_BYTE *)(v20 + 2) & 0xF8 | (v22 >> 2) & 7;
  return v20;
}

