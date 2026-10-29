__int64 __fastcall sub_CC96A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = sub_186B270(0x20u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C59470;
  sub_1858590(v2 + 24, a2);
  v4 = (_QWORD *)sub_186B270(0xB8u);
  *v4 = a1;
  v5 = v4;
  sub_16669D0(v4 + 1, a1);
  v6 = *v5;
  v5[4] = 0;
  v5[3] = v6;
  v7 = sub_186B270(0x80u);
  *(_QWORD *)v7 = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 88) = 0;
  *(_QWORD *)(v7 + 96) = 0;
  *(_DWORD *)(v7 + 104) = 0;
  *(_QWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 120) = 0;
  v5[5] = v7;
  v5[6] = 8;
  *((_DWORD *)v5 + 14) = 0;
  v5[13] = 0;
  v5[14] = 0;
  v5[15] = 1;
  v5[16] = 0;
  v5[17] = 0;
  v5[18] = 0;
  v5[19] = 1;
  v5[20] = 0;
  v5[22] = 0;
  *((_OWORD *)v5 + 4) = 0;
  *((_OWORD *)v5 + 5) = 0;
  sub_CC9C40(v5, a2);
  *(_QWORD *)(v3 + 16) = v5;
  return sub_EE8D70(v3);
}

