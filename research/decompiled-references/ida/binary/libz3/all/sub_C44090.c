__int64 __fastcall sub_C44090(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-48h] BYREF
  _BYTE v11[64]; // [rsp+10h] [rbp-40h] BYREF

  v2 = sub_186B270(0x318u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C58828;
  *(_QWORD *)(v2 + 16) = a2;
  sub_16669D0(v2 + 24, a2);
  v3 = *(_QWORD *)(v2 + 16);
  sub_1584DD0(v2 + 40, v3, 0);
  *(_QWORD *)(v2 + 184) = v2 + 576;
  *(_QWORD *)(v2 + 40) = &off_1C587E8;
  *(_DWORD *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 200) = 0;
  sub_1584DD0(v2 + 208, v3, 0);
  *(_QWORD *)(v2 + 352) = 0;
  *(_DWORD *)(v2 + 360) = 0;
  *(_QWORD *)(v2 + 208) = &off_1C61DB8;
  sub_1584DD0(v2 + 368, v3, 0);
  v4 = *(_QWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 512) = 0;
  *(_QWORD *)(v2 + 528) = v3;
  *(_QWORD *)(v2 + 544) = v3;
  *(_QWORD *)(v2 + 368) = &off_1C61DE0;
  *(_QWORD *)(v2 + 520) = 0;
  *(_QWORD *)(v2 + 536) = 0;
  *(_QWORD *)(v2 + 552) = 0;
  *(_QWORD *)(v2 + 560) = v3;
  *(_QWORD *)(v2 + 568) = 0;
  *(_QWORD *)(v2 + 40) = &off_1C58808;
  *(_QWORD *)(v2 + 576) = v4;
  *(_QWORD *)(v2 + 584) = v2;
  sub_16669D0(v2 + 592, v4);
  v5 = *(_QWORD *)(v2 + 576);
  v6 = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(v2 + 616) = 0;
  *(_QWORD *)(v2 + 624) = 0;
  *(_QWORD *)(v2 + 608) = v5;
  *(_QWORD *)(v2 + 632) = 0;
  *(_QWORD *)(v2 + 640) = 0;
  *(_QWORD *)(v2 + 648) = 1;
  *(_QWORD *)(v2 + 672) = v6;
  *(_OWORD *)(v2 + 656) = 0;
  sub_180C5A0(&v10, "pb");
  *(_DWORD *)(v2 + 680) = sub_15DA4C0(v6 + 560, &v10);
  *(_QWORD *)(v2 + 704) = 0;
  *(_QWORD *)(v2 + 712) = 0;
  *(_QWORD *)(v2 + 720) = 1;
  *(_QWORD *)(v2 + 728) = 0;
  *(_OWORD *)(v2 + 688) = 0;
  v7 = (_QWORD *)sub_186B270(8u);
  *v7 = 0;
  *(_QWORD *)(v2 + 736) = v7;
  v8 = sub_186B270(0xC0u);
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_QWORD *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 152) = 0;
  *(_QWORD *)(v8 + 176) = 0;
  *(_QWORD *)(v8 + 184) = 0;
  *(_QWORD *)(v2 + 744) = v8;
  *(_OWORD *)(v8 + 16) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  *(_OWORD *)(v8 + 64) = 0;
  *(_OWORD *)(v8 + 88) = 0;
  *(_OWORD *)(v8 + 112) = 0;
  *(_OWORD *)(v8 + 136) = 0;
  *(_OWORD *)(v8 + 160) = 0;
  *(_QWORD *)(v2 + 752) = 8;
  *(_DWORD *)(v2 + 760) = 0;
  *(_BYTE *)(v2 + 768) = 1;
  *(_QWORD *)(v2 + 772) = 0x100000065LL;
  *(_QWORD *)(v2 + 784) = 0;
  sub_1863170(v2 + 664, a1 + 664);
  v10 = a1 + 664;
  sub_17F9A60(v11, "tactic");
  *(_BYTE *)(v2 + 768) = sub_1859610(v2 + 664, "compile_equality", 1);
  *(_DWORD *)(v2 + 772) = sub_1859980(v10, "lia2card.max_range", v11, 100);
  *(_DWORD *)(v2 + 776) = sub_1859980(v10, "lia2card.max_ite_nesting", v11, 4);
  sub_18572D0(v11);
  return v2;
}

