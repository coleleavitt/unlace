unsigned __int64 __fastcall sub_B83E20(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  unsigned __int64 v15; // r15
  char v16; // r14
  char v18; // dl

  v15 = sub_B6C590(136, a1, a7, 0);
  sub_B4E870(v15, 0x12u, a7, a2);
  *(_QWORD *)(v15 + 40) = a4;
  *(_QWORD *)v15 = &off_2B206B0;
  sub_B6A340(v15 + 48, 18);
  v16 = *(_BYTE *)(v15 + 58);
  *(_QWORD *)(v15 + 96) = 0;
  *(_DWORD *)(v15 + 104) = 0;
  *(_QWORD *)v15 = &off_2BD9990;
  *(_QWORD *)(v15 + 80) = a5;
  *(_QWORD *)(v15 + 88) = a6;
  *(_DWORD *)(v15 + 108) = a3;
  *(_QWORD *)(v15 + 112) = 0;
  *(_QWORD *)(v15 + 120) = 0;
  *(_QWORD *)(v15 + 128) = 0;
  v18 = *(_BYTE *)(v15 + 59) & 0xFC;
  *(_BYTE *)(v15 + 58) = (32 * (a13 & 1))
                       | (16 * (a11 & 1)) & 0xDF
                       | (8 * (a10 & 1)) & 0xDF
                       | (4 * (a9 & 1)) & 0xC7
                       | (2 * (a8 & 1)) & 0xC7
                       | v16 & 0xC1;
  *(_BYTE *)(v15 + 59) = a14 & 3 | v18;
  *(_BYTE *)(v15 + 60) = (2 * (a15 & 1)) | *(_BYTE *)(v15 + 60) & 0xFD;
  *(_DWORD *)(v15 + 57) = *(_DWORD *)(v15 + 57) & 0xC2033E1F | 0x40001E0;
  *(_BYTE *)(v15 + 29) = (2 * (a12 & 1)) | *(_BYTE *)(v15 + 29) & 0xFD;
  return v15;
}

