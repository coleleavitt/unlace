_OWORD *__fastcall sub_5D9D40(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // r13
  unsigned __int64 v6; // rax
  _OWORD *v7; // rax
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  _OWORD *v17; // rax
  _OWORD *result; // rax

  v3 = a2 + 82;
  *(_DWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = &off_1C527C0;
  v6 = *a2;
  *(_QWORD *)(a1 + 32) = a2 + 82;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a2 + 11;
  *(_QWORD *)(a1 + 56) = a2 + 82;
  *(_QWORD *)(a1 + 64) = 0;
  v7 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 72) = v7;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 80) = 8;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v8 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 96) = v8;
  *(_QWORD *)(a1 + 104) = 8;
  *(_DWORD *)(a1 + 112) = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v9 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 120) = v9;
  *(_QWORD *)(a1 + 128) = 8;
  *(_DWORD *)(a1 + 136) = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v10 = sub_186B270(0x80u);
  *(_QWORD *)v10 = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_DWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_DWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_DWORD *)(v10 + 104) = 0;
  *(_QWORD *)(v10 + 112) = 0;
  *(_DWORD *)(v10 + 120) = 0;
  *(_QWORD *)(a1 + 144) = v10;
  *(_QWORD *)(a1 + 152) = 8;
  *(_DWORD *)(a1 + 160) = 0;
  v11 = sub_186B270(0x80u);
  *(_QWORD *)v11 = 0;
  *(_DWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 0;
  *(_DWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_DWORD *)(v11 + 88) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_DWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 112) = 0;
  *(_DWORD *)(v11 + 120) = 0;
  *(_QWORD *)(a1 + 168) = v11;
  *(_QWORD *)(a1 + 176) = 8;
  *(_DWORD *)(a1 + 184) = 0;
  v12 = sub_186B270(0x80u);
  *(_QWORD *)v12 = 0;
  v13 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_DWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  *(_QWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 72) = 0;
  *(_QWORD *)(v12 + 80) = 0;
  *(_DWORD *)(v12 + 88) = 0;
  *(_QWORD *)(v12 + 96) = 0;
  *(_DWORD *)(v12 + 104) = 0;
  *(_QWORD *)(v12 + 112) = 0;
  *(_DWORD *)(v12 + 120) = 0;
  *(_QWORD *)(a1 + 192) = v12;
  *(_QWORD *)(a1 + 200) = 8;
  *(_DWORD *)(a1 + 208) = 0;
  sub_63D370(a1 + 216, v13);
  v14 = *a2;
  *(_QWORD *)(a1 + 480) = v3;
  *(_QWORD *)(a1 + 488) = a2;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = v14;
  sub_5C8F60(a1 + 496, a2, 40000);
  sub_FA3A80(a1 + 920, *(_QWORD *)(a1 + 472));
  v15 = *(_QWORD *)(a1 + 472);
  *(_DWORD *)(a1 + 1080) = 1;
  *(_BYTE *)(a1 + 1104) = 0;
  v16 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 1048) = v15;
  *(_QWORD *)(a1 + 1088) = 0;
  *(_DWORD *)(a1 + 1096) = 1;
  *(_WORD *)(a1 + 1112) = 256;
  *(_OWORD *)(a1 + 1064) = 0;
  sub_FB83C0(a1 + 1128, v16);
  sub_FB83C0(a1 + 1264, *(_QWORD *)(a1 + 24));
  sub_FA3A80(a1 + 1400, *(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 1536) = a1 + 1400;
  *(_QWORD *)(a1 + 1544) = a2;
  *(_QWORD *)(a1 + 1552) = 0;
  *(_QWORD *)(a1 + 1528) = &off_1C52798;
  *(_QWORD *)(a1 + 1560) = 0;
  *(_QWORD *)(a1 + 1568) = 0;
  v17 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 1576) = v17;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  *(_QWORD *)(a1 + 1584) = 8;
  *(_QWORD *)(a1 + 1608) = a1 + 1400;
  *(_DWORD *)(a1 + 1592) = 0;
  *(_QWORD *)(a1 + 1600) = &off_1C52798;
  *(_QWORD *)(a1 + 1616) = a2;
  *(_QWORD *)(a1 + 1624) = 0;
  *(_QWORD *)(a1 + 1632) = 0;
  *(_QWORD *)(a1 + 1640) = 0;
  result = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 1648) = result;
  *(_QWORD *)(a1 + 1656) = 8;
  *(_DWORD *)(a1 + 1664) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  return result;
}

