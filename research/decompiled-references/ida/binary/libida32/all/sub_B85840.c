unsigned __int64 __fastcall sub_B85840(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v13; // rbx
  char v14; // al

  v13 = sub_B6C590(128, a1, a2, 0);
  sub_B4E870(v13, 0x4Bu, a2, a3);
  *(_QWORD *)(v13 + 40) = a4;
  *(_DWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 52) = a6;
  *(_QWORD *)v13 = &off_2BD9DE8;
  *(_DWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 56) = a7;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 64) = a8;
  v14 = *(_BYTE *)(v13 + 76);
  *(_QWORD *)(v13 + 88) = 0;
  *(_QWORD *)(v13 + 96) = 0;
  *(_QWORD *)(v13 + 104) = 0;
  *(_BYTE *)(v13 + 76) = a9 & 3 | v14 & 0xFC;
  *(_QWORD *)(v13 + 112) = 0;
  *(_QWORD *)(v13 + 120) = 0;
  return v13;
}

