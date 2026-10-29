void __fastcall sub_B52730(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r15
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  void *v12; // [rsp+0h] [rbp-58h]
  int v13[2]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v13, "fpa");
  v4 = sub_15DA4C0(v3 + 560, v13);
  sub_966710(a1, a2, v4);
  v5 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)v13 = 0;
  *(_QWORD *)a1 = off_1C72990;
  sub_14B7810(a1 + 56, v5, (int)v13, v6, v7, v8, v12);
  sub_18572D0(v13);
  sub_D50630(a1 + 72, *(_QWORD *)(a2 + 104));
  v9 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 712) = a1 + 56;
  *(_QWORD *)v13 = 0;
  *(_QWORD *)(a1 + 72) = &off_1C5A7B8;
  sub_1584DD0(a1 + 720, v9, *(_DWORD *)(v9 + 712) != 0);
  *(_QWORD *)(a1 + 864) = a1 + 1256;
  *(_QWORD *)(a1 + 720) = &off_1C4D950;
  *(_DWORD *)(a1 + 872) = 0;
  *(_QWORD *)(a1 + 880) = 0;
  sub_1584DD0(a1 + 888, v9, 0);
  *(_QWORD *)(a1 + 1032) = 0;
  *(_DWORD *)(a1 + 1040) = 0;
  *(_QWORD *)(a1 + 888) = &off_1C61DB8;
  sub_1584DD0(a1 + 1048, v9, 0);
  *(_DWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 1200) = 0;
  *(_QWORD *)(a1 + 1048) = &off_1C61DE0;
  *(_QWORD *)(a1 + 1208) = v9;
  *(_QWORD *)(a1 + 1216) = 0;
  *(_QWORD *)(a1 + 1224) = v9;
  *(_QWORD *)(a1 + 1232) = 0;
  *(_QWORD *)(a1 + 1240) = v9;
  *(_QWORD *)(a1 + 1248) = 0;
  *(_QWORD *)(a1 + 720) = &off_1C4D970;
  sub_D83130(a1 + 1256, v9, a1 + 72, v13);
  sub_18572D0(v13);
  *(_QWORD *)(a1 + 1368) = 0;
  *(_OWORD *)(a1 + 1320) = 0;
  *(_OWORD *)(a1 + 1336) = 0;
  *(_OWORD *)(a1 + 1352) = 0;
  sub_180C0A0(a1 + 1336);
  *(_QWORD *)(a1 + 1384) = a1 + 504;
  *(_QWORD *)(a1 + 1392) = a1 + 304;
  *(_QWORD *)(a1 + 1400) = a1 + 328;
  v10 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 1408) = v10;
  *(_DWORD *)(a1 + 1424) = 0;
  *(_QWORD *)(a1 + 1416) = 8;
  *(_BYTE *)(a1 + 1432) = 1;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[6] = 0;
  v10[7] = 0;
  v11 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 1440) = v11;
  *(_QWORD *)(a1 + 1448) = 8;
  *(_DWORD *)(a1 + 1456) = 0;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  *(_QWORD *)v13 = 0;
  sub_1862300(v13, "arith_lhs", 1);
  sub_14B5FE0(a1 + 56, v13);
  sub_18572D0(v13);
}

