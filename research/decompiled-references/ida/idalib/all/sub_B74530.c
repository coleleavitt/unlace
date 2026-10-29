__int64 __fastcall sub_B74530(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  __int64 v12; // rbx
  __int64 v13; // rax

  v12 = sub_B902D0(104, a1, a2, 0);
  sub_B725B0(v12, 0x2Bu, a2, a4);
  *(_DWORD *)(v12 + 96) = 0;
  *(_QWORD *)(v12 + 48) = a6;
  *(_DWORD *)(v12 + 64) = a3;
  *(_QWORD *)(v12 + 56) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v12 + 40) = a5;
  *(_QWORD *)(v12 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_BYTE *)(v12 + 96) = a8 & 7;
  *(_QWORD *)(v12 + 80) = v12;
  *(_QWORD *)v12 = &off_2B4A7B8;
  v13 = *(_QWORD *)(v12 + 96) & 0xFFFFF9FFLL;
  BYTE1(v13) |= 6u;
  *(_QWORD *)(v12 + 96) = v13;
  *(_QWORD *)(v12 + 88) = a9 & 0xFFFFFFFFFFFFFFFBLL;
  return v12;
}
