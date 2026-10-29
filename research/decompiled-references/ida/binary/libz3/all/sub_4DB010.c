__int64 __fastcall sub_4DB010(int a1, int a2, int a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax

  v4 = sub_186B270(0x58u);
  *(_OWORD *)(v4 + 8) = 0;
  sub_6299B0(v4 + 24);
  sub_6299B0(v4 + 32);
  *(_BYTE *)(v4 + 40) = 0;
  *(_QWORD *)v4 = off_1C66400;
  v5 = (_QWORD *)sub_186B270(0xC0u);
  *v5 = 0;
  v5[3] = 0;
  v5[6] = 0;
  v5[9] = 0;
  v5[12] = 0;
  v5[15] = 0;
  v5[18] = 0;
  v5[21] = 0;
  *(_QWORD *)(v4 + 48) = v5;
  *(_QWORD *)v4 = off_1C4F7B8;
  *(_QWORD *)(v4 + 56) = 8;
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 72) = a1;
  *(_DWORD *)(v4 + 76) = a2;
  *(_DWORD *)(v4 + 80) = a3;
  *(_BYTE *)(v4 + 84) = 1;
  return v4;
}

