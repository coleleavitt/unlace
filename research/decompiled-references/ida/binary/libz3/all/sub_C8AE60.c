__int64 __fastcall sub_C8AE60(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // rsi
  _OWORD *v4; // rax
  __int64 v5; // rax

  v1 = sub_186B270(0x360u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)v1 = &off_1C58E00;
  *(_QWORD *)(v1 + 16) = a1;
  sub_16669D0(v1 + 24, a1);
  sub_16744A0(v1 + 40, *(_QWORD *)(v1 + 16));
  v2 = *(_QWORD *)(v1 + 16);
  sub_1584DD0(v1 + 64, v2, 0);
  *(_DWORD *)(v1 + 216) = 0;
  *(_QWORD *)(v1 + 64) = &off_1C58DC0;
  *(_QWORD *)(v1 + 208) = v1 + 600;
  *(_QWORD *)(v1 + 224) = 0;
  sub_1584DD0(v1 + 232, v2, 0);
  *(_QWORD *)(v1 + 376) = 0;
  *(_DWORD *)(v1 + 384) = 0;
  *(_QWORD *)(v1 + 232) = &off_1C61DB8;
  sub_1584DD0(v1 + 392, v2, 0);
  v3 = *(_QWORD *)(v1 + 16);
  *(_QWORD *)(v1 + 552) = v2;
  *(_QWORD *)(v1 + 568) = v2;
  *(_QWORD *)(v1 + 584) = v2;
  *(_QWORD *)(v1 + 392) = &off_1C61DE0;
  *(_DWORD *)(v1 + 536) = 0;
  *(_QWORD *)(v1 + 544) = 0;
  *(_QWORD *)(v1 + 560) = 0;
  *(_QWORD *)(v1 + 576) = 0;
  *(_QWORD *)(v1 + 592) = 0;
  *(_QWORD *)(v1 + 64) = &off_1C58DE0;
  *(_QWORD *)(v1 + 600) = v3;
  *(_QWORD *)(v1 + 608) = v1;
  *(_QWORD *)(v1 + 616) = v3;
  *(_QWORD *)(v1 + 624) = 0;
  sub_F735C0(v1 + 632, v3);
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v1 + 760) = v4;
  *(_DWORD *)(v1 + 776) = 0;
  *(_QWORD *)(v1 + 768) = 8;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = sub_186B270(0x140u);
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 224) = 1;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 1;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 1;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_QWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 104) = 1;
  *(_QWORD *)(v5 + 112) = 0;
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  *(_QWORD *)(v5 + 136) = 0;
  *(_QWORD *)(v5 + 144) = 1;
  *(_QWORD *)(v5 + 152) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  *(_QWORD *)(v5 + 168) = 0;
  *(_QWORD *)(v5 + 176) = 0;
  *(_QWORD *)(v5 + 184) = 1;
  *(_QWORD *)(v5 + 192) = 0;
  *(_QWORD *)(v5 + 200) = 0;
  *(_QWORD *)(v5 + 208) = 0;
  *(_QWORD *)(v5 + 216) = 0;
  *(_BYTE *)(v5 + 228) = 0;
  *(_QWORD *)(v5 + 248) = 0;
  *(_OWORD *)(v5 + 232) = 0;
  *(_QWORD *)(v5 + 256) = 0;
  *(_QWORD *)(v5 + 264) = 1;
  *(_QWORD *)(v5 + 272) = 0;
  *(_QWORD *)(v5 + 280) = 0;
  *(_QWORD *)(v5 + 288) = 0;
  *(_QWORD *)(v5 + 296) = 0;
  *(_QWORD *)(v5 + 304) = 1;
  *(_QWORD *)(v5 + 312) = 0;
  *(_QWORD *)(v1 + 784) = v5;
  *(_QWORD *)(v1 + 792) = 8;
  *(_DWORD *)(v1 + 800) = 0;
  *(_QWORD *)(v1 + 816) = 0;
  *(_QWORD *)(v1 + 824) = 0;
  *(_QWORD *)(v1 + 840) = 0;
  *(_OWORD *)(v1 + 848) = 0;
  return sub_EE8D70(v1);
}

