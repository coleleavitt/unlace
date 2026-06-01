unsigned __int64 __fastcall sub_B99790(_QWORD *a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  char v8; // r12
  char v9; // bp
  unsigned __int64 v10; // rbx
  char v11; // r8
  char v12; // r9

  v8 = 32 * a5;
  v9 = a6 & 1;
  v10 = sub_B902D0(80, a1, a2, 0);
  sub_B725B0(v10, 4u, a2, a4);
  sub_B8E080(v10 + 40, 4);
  v11 = *(_BYTE *)(v10 + 49);
  v12 = *(_BYTE *)(v10 + 50);
  *(_DWORD *)(v10 + 72) = a3;
  *(_DWORD *)(v10 + 76) = 0;
  *(_QWORD *)v10 = &off_2C02F30;
  *(_BYTE *)(v10 + 49) = v8 | v11 & 0x1F;
  *(_BYTE *)(v10 + 50) = v9 | v12 & 0xFE;
  return v10;
}
