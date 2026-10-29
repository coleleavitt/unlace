__int64 __fastcall sub_657FC0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  _OWORD *v6; // rax

  v2 = sub_186B270(0x180u);
  *(_QWORD *)v2 = a2;
  v3 = v2;
  *(_BYTE *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = a2;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = a2;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = a2;
  *(_QWORD *)(v2 + 56) = 0;
  sub_180C5A0(v2 + 64, "P");
  *(_OWORD *)(v3 + 72) = 0;
  sub_1580DB0(v3 + 88, a2);
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v3 + 96) = v4;
  *(_DWORD *)(v3 + 112) = 0;
  *(_QWORD *)(v3 + 104) = 8;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v3 + 120) = v5;
  *(_QWORD *)(v3 + 128) = 8;
  *(_DWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 144) = a2;
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)(v3 + 160) = a2;
  *(_QWORD *)(v3 + 168) = 0;
  *(_QWORD *)(v3 + 176) = a2;
  *(_QWORD *)(v3 + 184) = 0;
  *(_QWORD *)(v3 + 192) = v3;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v6 = (_OWORD *)sub_186B270(0x40u);
  *a1 = v3;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  *(_QWORD *)(v3 + 200) = v6;
  *(_QWORD *)(v3 + 240) = v3 + 256;
  *(_QWORD *)(v3 + 208) = 8;
  *(_DWORD *)(v3 + 216) = 0;
  *(_QWORD *)(v3 + 248) = 0x1000000000LL;
  *(_OWORD *)(v3 + 224) = 0;
  return 0x1000000000LL;
}

