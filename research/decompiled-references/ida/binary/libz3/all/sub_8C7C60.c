void __fastcall sub_8C7C60(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned int v5; // eax
  void *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v12, "arith");
  v5 = sub_15DA4C0(v4 + 560, v12);
  sub_966710(a1, a2, v5);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = qword_1C6E820;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 1;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 88) = 0;
  v12[0] = 0;
  v12[1] = 0;
  v12[2] = 1;
  v12[3] = 0;
  sub_27B950((__int64)v6, a1 + 64, (int *)v12);
  *(_DWORD *)(a1 + 96) = 1;
  sub_25A130((char *)v12);
  v7 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)a1 = off_1C6EC58;
  *(_QWORD *)(a1 + 56) = off_1C6EE20;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 112);
  sub_16669D0(a1 + 112, v7);
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a1;
  *(_QWORD *)(a1 + 144) = a1 + 112;
  v8 = sub_186B270(0x180u);
  *(_QWORD *)(v8 + 32) = 0;
  *(_OWORD *)v8 = 0;
  *(_OWORD *)(v8 + 16) = 0;
  *(_OWORD *)(v8 + 48) = 0;
  *(_OWORD *)(v8 + 64) = 0;
  *(_OWORD *)(v8 + 96) = 0;
  *(_OWORD *)(v8 + 112) = 0;
  *(_OWORD *)(v8 + 144) = 0;
  *(_OWORD *)(v8 + 160) = 0;
  *(_OWORD *)(v8 + 192) = 0;
  *(_OWORD *)(v8 + 208) = 0;
  *(_OWORD *)(v8 + 240) = 0;
  *(_OWORD *)(v8 + 256) = 0;
  *(_OWORD *)(v8 + 288) = 0;
  *(_OWORD *)(v8 + 304) = 0;
  *(_OWORD *)(v8 + 336) = 0;
  *(_OWORD *)(v8 + 352) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_DWORD *)(v8 + 136) = 0;
  *(_QWORD *)(v8 + 176) = 0;
  *(_DWORD *)(v8 + 184) = 0;
  *(_QWORD *)(v8 + 224) = 0;
  *(_DWORD *)(v8 + 232) = 0;
  *(_QWORD *)(v8 + 272) = 0;
  *(_DWORD *)(v8 + 280) = 0;
  *(_QWORD *)(v8 + 320) = 0;
  *(_DWORD *)(v8 + 328) = 0;
  *(_QWORD *)(v8 + 368) = 0;
  *(_DWORD *)(v8 + 376) = 0;
  *(_QWORD *)(a1 + 152) = v8;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 160) = 8;
  *(_QWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  sub_8C7780(a1 + 216);
  *(_BYTE *)(a1 + 584) = 1;
  *(_QWORD *)(a1 + 588) = -1;
  *(_QWORD *)(a1 + 600) = 0;
  v9 = (_QWORD *)sub_186B270(0x80u);
  v9[1] = 0;
  v9[3] = 0;
  v9[5] = 0;
  v9[7] = 0;
  v9[9] = 0;
  v9[11] = 0;
  v9[13] = 0;
  v9[15] = 0;
  *(_QWORD *)(a1 + 608) = v9;
  v10 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 616) = 8;
  *(_DWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = v10;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_DWORD *)(a1 + 680) = 0;
  v11 = (_QWORD *)sub_186B270(0xC0u);
  *v11 = 0;
  v11[3] = 0;
  v11[6] = 0;
  v11[9] = 0;
  v11[12] = 0;
  v11[15] = 0;
  v11[18] = 0;
  v11[21] = 0;
  *(_QWORD *)(a1 + 688) = v11;
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 768) = 1;
  *(_QWORD *)(a1 + 696) = 8;
  *(_DWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = 0x3FE0000000000000LL;
  *(_DWORD *)(a1 + 736) = 0;
  *(_BYTE *)(a1 + 740) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 792) = a1;
  *(_QWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 0;
  *(_QWORD *)(a1 + 816) = 0;
  *(_QWORD *)(a1 + 824) = 0;
  *(_OWORD *)(a1 + 776) = 0;
  sub_8C3600(a1 + 832, *(_QWORD *)(a2 + 104));
  *(_DWORD *)(a1 + 2496) = 0;
}

