__int64 __fastcall sub_B799D0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, char a6)
{
  char v8; // r12
  __int64 v9; // rbx

  v8 = 4 * (a6 & 7);
  v9 = sub_B902D0(104, a1, a2, 0);
  sub_B725B0(v9, 0x2Du, a2, a3);
  *(_DWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 48) = a5;
  *(_QWORD *)(v9 + 40) = a4;
  *(_QWORD *)v9 = &off_2B4AD80;
  *(_QWORD *)(v9 + 56) = 0;
  *(_DWORD *)(v9 + 64) = a3;
  *(_QWORD *)(v9 + 72) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v9 + 80) = v9;
  *(_QWORD *)(v9 + 88) = 0;
  *(_BYTE *)(v9 + 98) = v8;
  *(_BYTE *)(v9 + 29) |= 2u;
  return v9;
}
