__int64 __fastcall sub_C70AF0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, int a6, int a7, __int64 a8)
{
  __int64 v12; // rbx
  char v13; // dl
  unsigned __int8 v14; // al
  char v15; // dl

  v12 = sub_ECAC60(48, a1, 8);
  *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 0x54;
  if ( unk_2CAD564 )
    sub_EC5E10(84);
  v13 = *(_BYTE *)(v12 + 1);
  *(_QWORD *)(v12 + 8) = a2;
  *(_QWORD *)(v12 + 16) = a4;
  *(_QWORD *)(v12 + 24) = a5;
  *(_BYTE *)(v12 + 1) = (2 * (a3 & 3)) | v13 & 0xF9;
  *(_WORD *)(v12 + 1) &= 0xF807u;
  *(_QWORD *)v12 = *(_QWORD *)v12 & 0xF007FFFFLL | 0x280000;
  v14 = sub_B3EE40(v12);
  v15 = *(_BYTE *)(v12 + 1);
  *(_DWORD *)(v12 + 32) = a6;
  *(_BYTE *)(v12 + 1) = (v14 << 6) | v15 & 0x3F;
  *(_BYTE *)(v12 + 2) = *(_BYTE *)(v12 + 2) & 0xF8 | (v14 >> 2) & 7;
  *(_DWORD *)(v12 + 36) = a7;
  *(_QWORD *)(v12 + 40) = a8;
  return v12;
}

