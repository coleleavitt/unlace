__int64 __fastcall sub_C41930(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v12[64]; // [rsp+18h] [rbp-40h] BYREF

  v3 = sub_186B270(0x318u);
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = &off_1C58828;
  *(_QWORD *)(v3 + 16) = a1;
  sub_16669D0(v3 + 24, a1);
  v4 = *(_QWORD *)(v3 + 16);
  sub_1584DD0(v3 + 40, v4, 0);
  *(_QWORD *)(v3 + 184) = v3 + 576;
  *(_QWORD *)(v3 + 40) = &off_1C587E8;
  *(_DWORD *)(v3 + 192) = 0;
  *(_QWORD *)(v3 + 200) = 0;
  sub_1584DD0(v3 + 208, v4, 0);
  *(_QWORD *)(v3 + 352) = 0;
  *(_DWORD *)(v3 + 360) = 0;
  *(_QWORD *)(v3 + 208) = &off_1C61DB8;
  sub_1584DD0(v3 + 368, v4, 0);
  v5 = *(_QWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 512) = 0;
  *(_QWORD *)(v3 + 528) = v4;
  *(_QWORD *)(v3 + 544) = v4;
  *(_QWORD *)(v3 + 368) = &off_1C61DE0;
  *(_QWORD *)(v3 + 520) = 0;
  *(_QWORD *)(v3 + 536) = 0;
  *(_QWORD *)(v3 + 552) = 0;
  *(_QWORD *)(v3 + 560) = v4;
  *(_QWORD *)(v3 + 568) = 0;
  *(_QWORD *)(v3 + 40) = &off_1C58808;
  *(_QWORD *)(v3 + 576) = v5;
  *(_QWORD *)(v3 + 584) = v3;
  sub_16669D0(v3 + 592, v5);
  v6 = *(_QWORD *)(v3 + 576);
  v7 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 616) = 0;
  *(_QWORD *)(v3 + 624) = 0;
  *(_QWORD *)(v3 + 608) = v6;
  *(_QWORD *)(v3 + 632) = 0;
  *(_QWORD *)(v3 + 640) = 0;
  *(_QWORD *)(v3 + 648) = 1;
  *(_QWORD *)(v3 + 672) = v7;
  *(_OWORD *)(v3 + 656) = 0;
  sub_180C5A0(&v11, "pb");
  *(_DWORD *)(v3 + 680) = sub_15DA4C0(v7 + 560, &v11);
  *(_QWORD *)(v3 + 704) = 0;
  *(_QWORD *)(v3 + 712) = 0;
  *(_QWORD *)(v3 + 720) = 1;
  *(_QWORD *)(v3 + 728) = 0;
  *(_OWORD *)(v3 + 688) = 0;
  v8 = (_QWORD *)sub_186B270(8u);
  *v8 = 0;
  *(_QWORD *)(v3 + 736) = v8;
  v9 = sub_186B270(0xC0u);
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  *(_QWORD *)(v9 + 152) = 0;
  *(_QWORD *)(v9 + 176) = 0;
  *(_QWORD *)(v9 + 184) = 0;
  *(_QWORD *)(v3 + 744) = v9;
  *(_OWORD *)(v9 + 16) = 0;
  *(_OWORD *)(v9 + 40) = 0;
  *(_OWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 88) = 0;
  *(_OWORD *)(v9 + 112) = 0;
  *(_OWORD *)(v9 + 136) = 0;
  *(_OWORD *)(v9 + 160) = 0;
  *(_QWORD *)(v3 + 752) = 8;
  *(_DWORD *)(v3 + 760) = 0;
  *(_BYTE *)(v3 + 768) = 1;
  *(_QWORD *)(v3 + 772) = 0x100000065LL;
  *(_QWORD *)(v3 + 784) = 0;
  sub_1863170(v3 + 664, a2);
  v11 = a2;
  sub_17F9A60(v12, "tactic");
  *(_BYTE *)(v3 + 768) = sub_1859610(v3 + 664, "compile_equality", 1);
  *(_DWORD *)(v3 + 772) = sub_1859980(v11, "lia2card.max_range", v12, 100);
  *(_DWORD *)(v3 + 776) = sub_1859980(v11, "lia2card.max_ite_nesting", v12, 4);
  sub_18572D0(v12);
  return sub_EE8D70(v3);
}

