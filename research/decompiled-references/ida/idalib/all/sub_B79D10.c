__int64 __fastcall sub_B79D10(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int16 v5; // ax

  v4 = sub_B902D0(128, a1, a2, 0);
  sub_B725B0(v4, 8u, a2, a3);
  sub_B8E080(v4 + 40, 8);
  *(_QWORD *)(v4 + 72) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  *(_OWORD *)(v4 + 88) = 0;
  *(_QWORD *)v4 = &off_2B4AA90;
  v5 = *(_WORD *)(v4 + 49);
  *(_QWORD *)(v4 + 104) = 0;
  v5 &= 0xF81Fu;
  *(_QWORD *)(v4 + 112) = 0;
  LOBYTE(v5) = v5 | 0x80;
  *(_QWORD *)(v4 + 120) = 0;
  *(_WORD *)(v4 + 49) = v5;
  return v4;
}
