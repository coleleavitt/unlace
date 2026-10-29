__int64 __fastcall sub_4DAB00(int a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax

  v1 = sub_186B270(0x50u);
  *(_OWORD *)(v1 + 8) = 0;
  sub_6299B0(v1 + 24);
  sub_6299B0(v1 + 32);
  *(_BYTE *)(v1 + 40) = 0;
  *(_QWORD *)v1 = off_1C66400;
  v2 = (_QWORD *)sub_186B270(0xC0u);
  *v2 = 0;
  v2[3] = 0;
  v2[6] = 0;
  v2[9] = 0;
  v2[12] = 0;
  v2[15] = 0;
  v2[18] = 0;
  v2[21] = 0;
  *(_QWORD *)(v1 + 48) = v2;
  *(_QWORD *)v1 = off_1C4F578;
  *(_QWORD *)(v1 + 56) = 8;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 72) = a1;
  return v1;
}

