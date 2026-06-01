__int64 __fastcall sub_B79540(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbx

  v6 = sub_B902D0(80, a1, a2, 0);
  sub_B725B0(v6, 0x4Eu, a2, a3);
  *(_DWORD *)(v6 + 76) = a3;
  *(_QWORD *)(v6 + 40) = a4;
  *(_OWORD *)(v6 + 48) = 0;
  *(_QWORD *)v6 = &off_2B4AC90;
  *(_QWORD *)(v6 + 64) = 0;
  *(_BYTE *)(v6 + 72) = 0;
  return v6;
}
