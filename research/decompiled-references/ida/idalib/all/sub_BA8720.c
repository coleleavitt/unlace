unsigned __int64 __fastcall sub_BA8720(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        __int16 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int16 v10; // r14
  char v12; // r13
  unsigned __int64 v13; // rbx
  __int16 v14; // ax

  v10 = a5 & 0x3FFF;
  v12 = a3 << 6;
  v13 = sub_B902D0(104, (_QWORD *)a1, a2, 0);
  sub_B725B0(v13, 0x42u, a2, a6);
  *(_DWORD *)(v13 + 56) = a6;
  *(_DWORD *)(v13 + 92) = a4;
  *(_QWORD *)(v13 + 40) = a7;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 72) = v13;
  *(_QWORD *)(v13 + 64) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v13 + 80) = a9 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)v13 = &off_2C03A08;
  v14 = v10 | *(_WORD *)(v13 + 88) & 0xC000;
  *(_WORD *)(v13 + 88) = v14;
  *(_BYTE *)(v13 + 89) = v12 | HIBYTE(v14) & 0x3F;
  *(_DWORD *)(v13 + 96) = a8;
  *(_QWORD *)(v13 + 48) = *(_QWORD *)(sub_A785F0(a1, v13, 0, 0) & 0xFFFFFFFFFFFFFFF0LL);
  return v13;
}
