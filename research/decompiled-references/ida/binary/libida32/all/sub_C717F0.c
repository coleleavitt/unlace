__int64 __fastcall sub_C717F0(__int64 a1, int a2, __int64 a3, char a4)
{
  char v6; // r14
  __int64 v7; // rbx
  char v8; // r14
  char v9; // al
  __int16 v10; // ax
  unsigned __int8 v11; // al

  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 89LL);
  v7 = sub_ECAC60(16, a1, 8);
  v8 = v6 & 1;
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x62;
  if ( unk_2CAD564 )
    sub_EC5E10(98);
  v9 = *(_BYTE *)(v7 + 1);
  *(_QWORD *)(v7 + 8) = a3;
  *(_DWORD *)(v7 + 4) = a2;
  *(_BYTE *)(v7 + 1) = (2 * v8) | v9 & 0xF9;
  v10 = *(_WORD *)(v7 + 1) & 0xF807;
  *(_WORD *)(v7 + 1) = v10;
  *(_BYTE *)(v7 + 2) = (8 * (a4 & 1)) & 0xEF | HIBYTE(v10) & 0xE7;
  v11 = sub_B3F7F0((_QWORD *)v7);
  *(_BYTE *)(v7 + 1) = (v11 << 6) | *(_BYTE *)(v7 + 1) & 0x3F;
  *(_BYTE *)(v7 + 2) = *(_BYTE *)(v7 + 2) & 0xF8 | (v11 >> 2) & 7;
  return v7;
}

