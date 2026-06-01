void __fastcall sub_8C9200(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  _BYTE v11[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v11, "arith");
  v4 = sub_15DA4C0(v3 + 560, v11);
  sub_966710(a1, a2, v4);
  v5 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)a1 = off_1C6EA58;
  *(_QWORD *)(a1 + 56) = off_1C6EC20;
  v6 = *(_QWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = v6;
  sub_16669D0(a1 + 80, v5);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = a1;
  *(_QWORD *)(a1 + 112) = a1 + 80;
  v7 = sub_186B270(0x180u);
  *(_QWORD *)(v7 + 32) = 0;
  *(_OWORD *)v7 = 0;
  *(_OWORD *)(v7 + 16) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  *(_OWORD *)(v7 + 64) = 0;
  *(_OWORD *)(v7 + 96) = 0;
  *(_OWORD *)(v7 + 112) = 0;
  *(_OWORD *)(v7 + 144) = 0;
  *(_OWORD *)(v7 + 160) = 0;
  *(_OWORD *)(v7 + 192) = 0;
  *(_OWORD *)(v7 + 208) = 0;
  *(_OWORD *)(v7 + 240) = 0;
  *(_OWORD *)(v7 + 256) = 0;
  *(_OWORD *)(v7 + 288) = 0;
  *(_OWORD *)(v7 + 304) = 0;
  *(_OWORD *)(v7 + 336) = 0;
  *(_OWORD *)(v7 + 352) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 88) = 0;
  *(_QWORD *)(v7 + 128) = 0;
  *(_DWORD *)(v7 + 136) = 0;
  *(_QWORD *)(v7 + 176) = 0;
  *(_DWORD *)(v7 + 184) = 0;
  *(_QWORD *)(v7 + 224) = 0;
  *(_DWORD *)(v7 + 232) = 0;
  *(_QWORD *)(v7 + 272) = 0;
  *(_DWORD *)(v7 + 280) = 0;
  *(_QWORD *)(v7 + 320) = 0;
  *(_DWORD *)(v7 + 328) = 0;
  *(_QWORD *)(v7 + 368) = 0;
  *(_DWORD *)(v7 + 376) = 0;
  *(_QWORD *)(a1 + 120) = v7;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  sub_8C8D20(a1 + 184);
  *(_BYTE *)(a1 + 552) = 1;
  *(_QWORD *)(a1 + 556) = -1;
  *(_QWORD *)(a1 + 568) = 0;
  v8 = (_QWORD *)sub_186B270(0x80u);
  v8[1] = 0;
  v8[3] = 0;
  v8[5] = 0;
  v8[7] = 0;
  v8[9] = 0;
  v8[11] = 0;
  v8[13] = 0;
  v8[15] = 0;
  *(_QWORD *)(a1 + 576) = v8;
  v9 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 584) = 8;
  *(_DWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = v9;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_DWORD *)(a1 + 648) = 0;
  v10 = (_QWORD *)sub_186B270(0xC0u);
  *v10 = 0;
  v10[3] = 0;
  v10[6] = 0;
  v10[9] = 0;
  v10[12] = 0;
  v10[15] = 0;
  v10[18] = 0;
  v10[21] = 0;
  *(_QWORD *)(a1 + 656) = v10;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 736) = 1;
  *(_QWORD *)(a1 + 664) = 8;
  *(_DWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = 0x3FE0000000000000LL;
  *(_DWORD *)(a1 + 704) = 0;
  *(_BYTE *)(a1 + 708) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 760) = a1;
  *(_QWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 792) = 0;
  *(_OWORD *)(a1 + 744) = 0;
  sub_8C3600(a1 + 800, *(_QWORD *)(a2 + 104));
  *(_DWORD *)(a1 + 2464) = 0;
}

