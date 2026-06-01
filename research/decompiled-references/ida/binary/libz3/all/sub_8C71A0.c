void __fastcall sub_8C71A0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned int v5; // eax
  void *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _BYTE v13[48]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v13, "arith");
  v5 = sub_15DA4C0(v4 + 560, v13);
  sub_966710(a1, a2, v5);
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 56) = qword_1C6E820;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 1;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 88) = 0;
  sub_182CBA0(v6, a1 + 80);
  *(_BYTE *)(a1 + 84) &= ~1u;
  v7 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)a1 = off_1C6E858;
  *(_QWORD *)(a1 + 56) = off_1C6EA20;
  v8 = *(_QWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 96) = v8;
  sub_16669D0(a1 + 104, v7);
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = a1;
  *(_QWORD *)(a1 + 136) = a1 + 104;
  v9 = sub_186B270(0x180u);
  *(_QWORD *)(v9 + 32) = 0;
  *(_OWORD *)v9 = 0;
  *(_OWORD *)(v9 + 16) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  *(_OWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 96) = 0;
  *(_OWORD *)(v9 + 112) = 0;
  *(_OWORD *)(v9 + 144) = 0;
  *(_OWORD *)(v9 + 160) = 0;
  *(_OWORD *)(v9 + 192) = 0;
  *(_OWORD *)(v9 + 208) = 0;
  *(_OWORD *)(v9 + 240) = 0;
  *(_OWORD *)(v9 + 256) = 0;
  *(_OWORD *)(v9 + 288) = 0;
  *(_OWORD *)(v9 + 304) = 0;
  *(_OWORD *)(v9 + 336) = 0;
  *(_OWORD *)(v9 + 352) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  *(_DWORD *)(v9 + 136) = 0;
  *(_QWORD *)(v9 + 176) = 0;
  *(_DWORD *)(v9 + 184) = 0;
  *(_QWORD *)(v9 + 224) = 0;
  *(_DWORD *)(v9 + 232) = 0;
  *(_QWORD *)(v9 + 272) = 0;
  *(_DWORD *)(v9 + 280) = 0;
  *(_QWORD *)(v9 + 320) = 0;
  *(_DWORD *)(v9 + 328) = 0;
  *(_QWORD *)(v9 + 368) = 0;
  *(_DWORD *)(v9 + 376) = 0;
  *(_QWORD *)(a1 + 144) = v9;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 152) = 8;
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  sub_8C6CC0(a1 + 208);
  *(_BYTE *)(a1 + 576) = 1;
  *(_QWORD *)(a1 + 580) = -1;
  *(_QWORD *)(a1 + 592) = 0;
  v10 = (_QWORD *)sub_186B270(0x80u);
  v10[1] = 0;
  v10[3] = 0;
  v10[5] = 0;
  v10[7] = 0;
  v10[9] = 0;
  v10[11] = 0;
  v10[13] = 0;
  v10[15] = 0;
  *(_QWORD *)(a1 + 600) = v10;
  v11 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 608) = 8;
  *(_DWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = v11;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_DWORD *)(a1 + 672) = 0;
  v12 = (_QWORD *)sub_186B270(0xC0u);
  *v12 = 0;
  v12[3] = 0;
  v12[6] = 0;
  v12[9] = 0;
  v12[12] = 0;
  v12[15] = 0;
  v12[18] = 0;
  v12[21] = 0;
  *(_QWORD *)(a1 + 680) = v12;
  *(_QWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 760) = 1;
  *(_QWORD *)(a1 + 688) = 8;
  *(_DWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = 0x3FE0000000000000LL;
  *(_DWORD *)(a1 + 728) = 0;
  *(_BYTE *)(a1 + 732) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 784) = a1;
  *(_QWORD *)(a1 + 792) = 0;
  *(_QWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 0;
  *(_QWORD *)(a1 + 816) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  sub_8C3600(a1 + 824, *(_QWORD *)(a2 + 104));
  *(_DWORD *)(a1 + 2488) = 0;
}

