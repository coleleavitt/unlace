__int64 __fastcall sub_C94990(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v13; // rbx
  char v14; // dl
  unsigned __int8 v15; // al

  v13 = sub_EEE9A0(48, a1, 8);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x55;
  if ( unk_2CD7484 )
    sub_EE9B50(85);
  v14 = *(_BYTE *)(v13 + 1);
  *(_QWORD *)(v13 + 8) = a2;
  *(_QWORD *)(v13 + 16) = a5;
  *(_QWORD *)(v13 + 24) = a6;
  *(_BYTE *)(v13 + 1) = (2 * (a3 & 3)) | v14 & 0xF9;
  *(_WORD *)(v13 + 1) &= 0xF807u;
  *(_WORD *)(v13 + 2) = (8 * (a4 & 0x7F)) | *(_WORD *)(v13 + 2) & 0xFC07;
  *(_QWORD *)v13 &= 0xF3FFFFFFuLL;
  v15 = sub_B62B80(v13);
  *(_BYTE *)(v13 + 1) = (v15 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v15 >> 2) & 7;
  *(_DWORD *)(v13 + 32) = a7;
  *(_DWORD *)(v13 + 36) = a8;
  *(_QWORD *)(v13 + 40) = a9;
  return v13;
}
